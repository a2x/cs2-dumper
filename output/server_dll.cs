// Generated using https://github.com/a2x/cs2-dumper
// 2026-01-22 12:23:57.753951800 UTC

namespace CS2Dumper.Schemas {
    // Module: server.dll
    // Class count: 727
    // Enum count: 154
    public static class ServerDll {
        // Alignment: 4
        // Member count: 3
        public enum PropDoorRotatingOpenDirection_e : uint {
            DOOR_ROTATING_OPEN_BOTH_WAYS = 0x0,
            DOOR_ROTATING_OPEN_FORWARD = 0x1,
            DOOR_ROTATING_OPEN_BACKWARD = 0x2
        }
        // Alignment: 4
        // Member count: 1
        public enum PulseCollisionGroup_t : uint {
            DEFAULT = 0x0
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
        // Member count: 11
        public enum PreviewCharacterMode : uint {
            INVALID = unchecked((uint)-1),
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
        // Member count: 4
        public enum ObserverInterpState_t : uint {
            OBSERVER_INTERP_NONE = 0x0,
            OBSERVER_INTERP_STARTING = 0x1,
            OBSERVER_INTERP_TRAVELING = 0x2,
            OBSERVER_INTERP_SETTLING = 0x3
        }
        // Alignment: 4
        // Member count: 3
        public enum WorldTextPanelOrientation_t : uint {
            WORLDTEXT_ORIENTATION_DEFAULT = 0x0,
            WORLDTEXT_ORIENTATION_FACEUSER = 0x1,
            WORLDTEXT_ORIENTATION_FACEUSER_UPRIGHT = 0x2
        }
        // Alignment: 4
        // Member count: 8
        public enum EDestructibleParts_DestroyParameterFlags : uint {
            None = 0x0,
            GenerateBreakpieces = 0x1,
            SetBodyGroupAndCollisionState = 0x2,
            EnableFlinches = 0x4,
            ForceDamageApply = 0x8,
            IgnoreKillEntityFlag = 0x10,
            IgnoreHealthCheck = 0x20,
            Default = 0x7
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
        // Member count: 5
        public enum AnimGraphDebugDrawType_t : uint {
            None = 0x0,
            WsPosition = 0x1,
            MsPosition = 0x2,
            WsDirection = 0x3,
            MsDirection = 0x4
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
        // Member count: 2
        public enum BeginDeathLifeStateTransition_t : byte {
            TRANSITION_TO_LIFESTATE_DYING = 0x0,
            TRANSITION_TO_LIFESTATE_DEAD = 0x1
        }
        // Alignment: 4
        // Member count: 5
        public enum PointOrientGoalDirectionType_t : uint {
            eAbsOrigin = 0x0,
            eCenter = 0x1,
            eHead = 0x2,
            eForward = 0x3,
            eEyesForward = 0x4
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
        // Member count: 6
        public enum LifeState_t : uint {
            LIFE_ALIVE = 0x0,
            LIFE_DYING = 0x1,
            LIFE_DEAD = 0x2,
            LIFE_RESPAWNABLE = 0x3,
            LIFE_RESPAWNING = 0x4,
            NUM_LIFESTATES = 0x5
        }
        // Alignment: 4
        // Member count: 2
        public enum PointOrientConstraint_t : uint {
            eNone = 0x0,
            ePreserveUpAxis = 0x1
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
        // Alignment: 1
        // Member count: 7
        public enum AnimationAlgorithm_t : byte {
            eInvalid = unchecked((byte)-1),
            eNone = 0x0,
            eSequence = 0x1,
            eAnimGraph2 = 0x2,
            eAnimGraph2Secondary = 0x3,
            eAnimGraph1 = 0x4,
            eCount = 0x5
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
        // Alignment: 1
        // Member count: 5
        public enum NavScope_t : byte {
            eGround = 0x0,
            eAir = 0x1,
            eCount = 0x2,
            eFirst = 0x0,
            eInvalid = 0xFF
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
        // Member count: 5
        public enum AnimLoopMode_t : uint {
            ANIM_LOOP_MODE_INVALID = unchecked((uint)-1),
            ANIM_LOOP_MODE_NOT_LOOPING = 0x0,
            ANIM_LOOP_MODE_LOOPING = 0x1,
            ANIM_LOOP_MODE_USE_SEQUENCE_SETTINGS = 0x2,
            ANIM_LOOP_MODE_COUNT = 0x3
        }
        // Alignment: 4
        // Member count: 14
        public enum Class_T : uint {
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
        // Member count: 37
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
        // Alignment: 1
        // Member count: 4
        public enum NavScopeFlags_t : byte {
            eGround = 0x1,
            eAir = 0x2,
            eAll = 0x3,
            eNone = 0x0
        }
        // Alignment: 4
        // Member count: 3
        public enum EntFinderMethod_t : uint {
            ENT_FIND_METHOD_NEAREST = 0x0,
            ENT_FIND_METHOD_FARTHEST = 0x1,
            ENT_FIND_METHOD_RANDOM = 0x2
        }
        // Alignment: 4
        // Member count: 3
        public enum TestInputOutputCombinationsEnum_t : uint {
            ZERO = 0x0,
            ONE = 0x1,
            TWO = 0x2
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
        // Member count: 4
        public enum RenderMode_t : byte {
            kRenderNormal = 0x0,
            kRenderTransAlpha = 0x1,
            kRenderNone = 0x2,
            kRenderModeCount = 0x3
        }
        // Alignment: 4
        // Member count: 3
        public enum ForcedCrouchState_t : uint {
            FORCEDCROUCH_NONE = 0x0,
            FORCEDCROUCH_CROUCHED = 0x1,
            FORCEDCROUCH_UNCROUCHED = 0x2
        }
        // Alignment: 4
        // Member count: 2
        public enum PerformanceMode_t : uint {
            PM_NORMAL = 0x0,
            PM_NO_GIBS = 0x1
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
        // Member count: 4
        public enum EDestructiblePartDamagePassThroughType : uint {
            Normal = 0x0,
            Absorb = 0x1,
            InvincibleAbsorb = 0x2,
            InvinciblePassthrough = 0x3
        }
        // Alignment: 8
        // Member count: 20
        public enum NavAttributeEnum : ulong {
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
        // Alignment: 1
        // Member count: 3
        public enum ExternalAnimGraphInactiveBehavior_t : byte {
            eNone = 0x0,
            eUnbind = 0x1,
            eUnbindAndDelete = 0x2
        }
        // Alignment: 4
        // Member count: 4
        public enum BodySectionAuthority_t : uint {
            eNone = 0x0,
            eLowerBody = 0x1,
            eUpperBody = 0x2,
            eFullBody = 0x3
        }
        // Alignment: 4
        // Member count: 2
        public enum ESceneRequestState_t : uint {
            INACTIVE = 0x0,
            ACTIVE = 0x1
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
        // Member count: 4
        public enum CDebugOverlayFilterTextType_t : uint {
            FILTER_TEXT_NONE = 0x0,
            MATCH = 0x1,
            HIERARCHY = 0x2,
            COUNT = 0x3
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
        // Member count: 66
        public enum CSWeaponNameID : uint {
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
        // Alignment: 1
        // Member count: 4
        public enum RelativeLocationType_t : byte {
            WORLD_SPACE_POSITION = 0x0,
            RELATIVE_TO_ENTITY_IN_LOCAL_SPACE = 0x1,
            RELATIVE_TO_ENTITY_YAW_ONLY = 0x2,
            RELATIVE_TO_ENTITY_IN_WORLD_SPACE = 0x3
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
        // Member count: 11
        public enum CDebugOverlayFilterType_t : uint {
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
            COMBINED = unchecked((uint)-1)
        }
        // Alignment: 4
        // Member count: 24
        public enum PreviewEOMCelebration : uint {
            INVALID = unchecked((uint)-1),
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
        // Member count: 11
        public enum ChickenActivity : uint {
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
            OVERLAY_NPC_ABILITY_RANGE_DEBUG_BIT = unchecked((ulong)1099511627776),
            OVERLAY_MINIMAL_TEXT = unchecked((ulong)2199023255552)
        }
        // Alignment: 4
        // Member count: 3
        public enum AmmoFlags_t : uint {
            AMMO_FORCE_DROP_IF_CARRIED = 0x1,
            AMMO_RESERVE_STAYS_WITH_WEAPON = 0x2,
            AMMO_FLAG_MAX = 0x2
        }
        // Alignment: 4
        // Member count: 5
        public enum DecalFlags_t : uint {
            eNone = 0x0,
            eCannotClear = 0x1,
            eDecalProjectToBackfaces = 0x2,
            eAll = unchecked((uint)4294967295),
            eAllButCannotClear = unchecked((uint)4294967294)
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
        // Member count: 5
        public enum WeaponSwitchReason_t : uint {
            eDrawn = 0x0,
            eEquipped = 0x1,
            eUserInitiatedSwitchToLast = 0x2,
            eUserInitiatedUIKeyPress = 0x3,
            eUserInitiatedSwitchHands = 0x4
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
        // Member count: 3
        public enum HoverPoseFlags_t : byte {
            eNone = 0x0,
            ePosition = 0x1,
            eAngles = 0x2
        }
        // Alignment: 1
        // Member count: 18
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
            kRenderFxFadeOut = 0xE,
            kRenderFxFadeIn = 0xF,
            kRenderFxPulseFastWider = 0x10,
            kRenderFxMax = 0x11
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
        // Member count: 1
        public enum navproperties_t : uint {
            NAV_IGNORE = 0x1
        }
        // Alignment: 2
        // Member count: 7
        public enum EntityEffects_t : ushort {
            DEPRICATED_EF_NOINTERP = 0x8,
            EF_NOSHADOW = 0x10,
            EF_NODRAW = 0x20,
            EF_NORECEIVESHADOW = 0x40,
            EF_PARENT_ANIMATES = 0x200,
            EF_NODRAW_BUT_TRANSMIT = 0x400,
            EF_MAX_BITS = 0xA
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
        // Member count: 22
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
        // Alignment: 2
        // Member count: 30
        public enum WeaponGameplayAnimState : ushort {
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
            WPN_ANIMSTATE_END_VALID = 0x7D0,
            WEAPON_LEGACY_STATE_CLEAR_FIRING = 0x7D1
        }
        // Alignment: 4
        // Member count: 2
        public enum EDestructiblePartRadiusDamageApplyType : uint {
            ScaleByExplosionRadius = 0x0,
            PrioritizeClosestPart = 0x1
        }
        // Alignment: 4
        // Member count: 3
        public enum EntityDistanceMode_t : uint {
            eOriginToOrigin = 0x0,
            eCenterToCenter = 0x1,
            eAxisToAxis = 0x2
        }
        // Alignment: 4
        // Member count: 2
        public enum PulseTraceContents_t : uint {
            STATIC_LEVEL = 0x0,
            SOLID = 0x1
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
        // Member count: 23
        public enum Flags_t : uint {
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
        }
        // Alignment: 4
        // Member count: 3
        public enum TRAIN_CODE : uint {
            TRAIN_SAFE = 0x0,
            TRAIN_BLOCKING = 0x1,
            TRAIN_FOLLOWING = 0x2
        }
        // Alignment: 4
        // Member count: 4
        public enum DestructiblePartDestructionDeathBehavior_t : uint {
            eDoNotKill = 0x0,
            eKill = 0x1,
            eGib = 0x2,
            eRemove = 0x3
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
        // Member count: 22
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
            DFLAG_IGNORE_DESTRUCTIBLE_PARTS = 0x2000,
            DFLAG_SUPPRESS_BREAKABLES = 0x4000,
            DFLAG_FORCE_PHYSICS_FORCE = 0x8000,
            DFLAG_SUPPRESS_SCREENSPACE_DAMAGE_FX = 0x10000,
            DFLAG_ALLOW_NON_AUTHORITATIVE = 0x20000,
            DMG_LASTDFLAG = 0x20000,
            DFLAG_IGNORE_ARMOR = 0x40000,
            DFLAG_SUPPRESS_UTILREMOVE = 0x80000
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
        // Member count: 2
        public enum RotatorTargetSpace_t : uint {
            ROTATOR_TARGET_WORLDSPACE = 0x0,
            ROTATOR_TARGET_LOCALSPACE = 0x1
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
        // Member count: 6
        public enum ObserverMode_t : uint {
            OBS_MODE_NONE = 0x0,
            OBS_MODE_FIXED = 0x1,
            OBS_MODE_IN_EYE = 0x2,
            OBS_MODE_CHASE = 0x3,
            OBS_MODE_ROAMING = 0x4,
            NUM_OBSERVER_MODES = 0x5
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
        // Alignment: 4
        // Member count: 4
        public enum EntityAttachmentType_t : uint {
            eAbsOrigin = 0x0,
            eCenter = 0x1,
            eEyes = 0x2,
            eAttachment = 0x3
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
        // Parent: CCSWeaponBaseShotgun
        // Field count: 0
        public static class CWeaponNOVA {
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
            public const nint m_messageText = 0x730; // char[512]
            public const nint m_FontName = 0x930; // char[64]
            public const nint m_BackgroundMaterialName = 0x970; // char[64]
            public const nint m_bEnabled = 0x9B0; // bool
            public const nint m_bFullbright = 0x9B1; // bool
            public const nint m_flWorldUnitsPerPx = 0x9B4; // float32
            public const nint m_flFontSize = 0x9B8; // float32
            public const nint m_flDepthOffset = 0x9BC; // float32
            public const nint m_bDrawBackground = 0x9C0; // bool
            public const nint m_flBackgroundBorderWidth = 0x9C4; // float32
            public const nint m_flBackgroundBorderHeight = 0x9C8; // float32
            public const nint m_flBackgroundWorldToUV = 0x9CC; // float32
            public const nint m_Color = 0x9D0; // Color
            public const nint m_nJustifyHorizontal = 0x9D4; // PointWorldTextJustifyHorizontal_t
            public const nint m_nJustifyVertical = 0x9D8; // PointWorldTextJustifyVertical_t
            public const nint m_nReorientMode = 0x9DC; // PointWorldTextReorientMode_t
        }
        // Parent: CPointEntity
        // Field count: 10
        public static class CAmbientGeneric {
            public const nint m_radius = 0x4A8; // float32
            public const nint m_flMaxRadius = 0x4AC; // float32
            public const nint m_iSoundLevel = 0x4B0; // soundlevel_t
            public const nint m_dpv = 0x4B4; // dynpitchvol_t
            public const nint m_fActive = 0x518; // bool
            public const nint m_fLooping = 0x519; // bool
            public const nint m_iszSound = 0x520; // CUtlSymbolLarge
            public const nint m_sSourceEntName = 0x528; // CUtlSymbolLarge
            public const nint m_hSoundSource = 0x530; // CHandle<CBaseEntity>
            public const nint m_nSoundSourceEntIndex = 0x534; // CEntityIndex
        }
        // Parent: CPointEntity
        // Field count: 12
        public static class CEnvEntityMaker {
            public const nint m_vecEntityMins = 0x4A8; // Vector
            public const nint m_vecEntityMaxs = 0x4B4; // Vector
            public const nint m_hCurrentInstance = 0x4C0; // CHandle<CBaseEntity>
            public const nint m_hCurrentBlocker = 0x4C4; // CHandle<CBaseEntity>
            public const nint m_vecBlockerOrigin = 0x4C8; // Vector
            public const nint m_angPostSpawnDirection = 0x4D4; // QAngle
            public const nint m_flPostSpawnDirectionVariance = 0x4E0; // float32
            public const nint m_flPostSpawnSpeed = 0x4E4; // float32
            public const nint m_bPostSpawnUseAngles = 0x4E8; // bool
            public const nint m_iszTemplate = 0x4F0; // CUtlSymbolLarge
            public const nint m_pOutputOnSpawned = 0x4F8; // CEntityIOOutput
            public const nint m_pOutputOnFailedSpawn = 0x510; // CEntityIOOutput
        }
        // Parent: None
        // Field count: 0
        public static class CPulseGraphInstance_GameBlackboard {
        }
        // Parent: CBaseEntity
        // Field count: 0
        public static class CPointEntity {
        }
        // Parent: CBaseFilter
        // Field count: 5
        public static class CFilterEnemy {
            public const nint m_iszEnemyName = 0x4E0; // CUtlSymbolLarge
            public const nint m_flRadius = 0x4E8; // float32
            public const nint m_flOuterRadius = 0x4EC; // float32
            public const nint m_nMaxSquadmatesPerEnemy = 0x4F0; // int32
            public const nint m_iszPlayerName = 0x4F8; // CUtlSymbolLarge
        }
        // Parent: CCSGO_WingmanIntroCharacterPosition
        // Field count: 0
        public static class CCSGO_WingmanIntroCounterTerroristPosition {
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        // MPulseEditorHeaderIcon
        public static class CPulseCell_WaitForCursorsWithTag {
            public const nint m_bTagSelfWhenComplete = 0x98; // bool
            public const nint m_nDesiredKillPriority = 0x9C; // PulseCursorCancelPriority_t
        }
        // Parent: CFuncTrackChange
        // Field count: 0
        public static class CFuncTrackAuto {
        }
        // Parent: CBaseEntity
        // Field count: 77
        public static class CScriptedSequence {
            public const nint m_iszEntry = 0x4A8; // CUtlSymbolLarge
            public const nint m_iszPreIdle = 0x4B0; // CUtlSymbolLarge
            public const nint m_iszPlay = 0x4B8; // CUtlSymbolLarge
            public const nint m_iszPostIdle = 0x4C0; // CUtlSymbolLarge
            public const nint m_iszModifierToAddOnPlay = 0x4C8; // CUtlSymbolLarge
            public const nint m_iszNextScript = 0x4D0; // CUtlSymbolLarge
            public const nint m_iszEntity = 0x4D8; // CUtlSymbolLarge
            public const nint m_iszSyncGroup = 0x4E0; // CUtlSymbolLarge
            public const nint m_nMoveTo = 0x4E8; // ScriptedMoveTo_t
            public const nint m_nMoveToGait = 0x4EC; // SharedMovementGait_t
            public const nint m_nHeldWeaponBehavior = 0x4F0; // ScriptedHeldWeaponBehavior_t
            public const nint m_nForcedCrouchState = 0x4F4; // ForcedCrouchState_t
            public const nint m_bIsPlayingPreIdle = 0x4F8; // bool
            public const nint m_bIsPlayingEntry = 0x4F9; // bool
            public const nint m_bIsPlayingAction = 0x4FA; // bool
            public const nint m_bIsPlayingPostIdle = 0x4FB; // bool
            public const nint m_bDontRotateOther = 0x4FC; // bool
            public const nint m_bIsRepeatable = 0x4FD; // bool
            public const nint m_bShouldLeaveCorpse = 0x4FE; // bool
            public const nint m_bStartOnSpawn = 0x4FF; // bool
            public const nint m_bDisallowInterrupts = 0x500; // bool
            public const nint m_bCanOverrideNPCState = 0x501; // bool
            public const nint m_bDontTeleportAtEnd = 0x502; // bool
            public const nint m_bHighPriority = 0x503; // bool
            public const nint m_bHideDebugComplaints = 0x504; // bool
            public const nint m_bContinueOnDeath = 0x505; // bool
            public const nint m_bLoopPreIdleSequence = 0x506; // bool
            public const nint m_bLoopActionSequence = 0x507; // bool
            public const nint m_bLoopPostIdleSequence = 0x508; // bool
            public const nint m_bSynchPostIdles = 0x509; // bool
            public const nint m_bIgnoreLookAt = 0x50A; // bool
            public const nint m_bIgnoreGravity = 0x50B; // bool
            public const nint m_bDisableNPCCollisions = 0x50C; // bool
            public const nint m_bKeepAnimgraphLockedPost = 0x50D; // bool
            public const nint m_bDontAddModifiers = 0x50E; // bool
            public const nint m_bDisableAimingWhileMoving = 0x50F; // bool
            public const nint m_bIgnoreRotation = 0x510; // bool
            public const nint m_flRadius = 0x514; // float32
            public const nint m_flRepeat = 0x518; // float32
            public const nint m_flPlayAnimFadeInTime = 0x51C; // float32
            public const nint m_flMoveInterpTime = 0x520; // float32
            public const nint m_flAngRate = 0x524; // float32
            public const nint m_flMoveSpeed = 0x528; // float32
            public const nint m_bWaitUntilMoveCompletesToStartAnimation = 0x52C; // bool
            public const nint m_nNotReadySequenceCount = 0x530; // int32
            public const nint m_startTime = 0x534; // GameTime_t
            public const nint m_bWaitForBeginSequence = 0x538; // bool
            public const nint m_saved_effects = 0x53C; // int32
            public const nint m_savedFlags = 0x540; // int32
            public const nint m_savedCollisionGroup = 0x544; // int32
            public const nint m_bInterruptable = 0x548; // bool
            public const nint m_sequenceStarted = 0x549; // bool
            public const nint m_bPositionRelativeToOtherEntity = 0x54A; // bool
            public const nint m_hTargetEnt = 0x54C; // CHandle<CBaseEntity>
            public const nint m_hNextCine = 0x550; // CHandle<CScriptedSequence>
            public const nint m_bThinking = 0x554; // bool
            public const nint m_bInitiatedSelfDelete = 0x555; // bool
            public const nint m_bIsTeleportingDueToMoveTo = 0x556; // bool
            public const nint m_bAllowCustomInterruptConditions = 0x557; // bool
            public const nint m_hForcedTarget = 0x558; // CHandle<CBaseAnimGraph>
            public const nint m_bDontCancelOtherSequences = 0x55C; // bool
            public const nint m_bForceSynch = 0x55D; // bool
            public const nint m_bPreventUpdateYawOnFinish = 0x55E; // bool
            public const nint m_bEnsureOnNavmeshOnFinish = 0x55F; // bool
            public const nint m_onDeathBehavior = 0x560; // ScriptedOnDeath_t
            public const nint m_ConflictResponse = 0x564; // ScriptedConflictResponse_t
            public const nint m_OnBeginSequence = 0x568; // CEntityIOOutput
            public const nint m_OnActionStartOrLoop = 0x580; // CEntityIOOutput
            public const nint m_OnEndSequence = 0x598; // CEntityIOOutput
            public const nint m_OnPostIdleEndSequence = 0x5B0; // CEntityIOOutput
            public const nint m_OnCancelSequence = 0x5C8; // CEntityIOOutput
            public const nint m_OnCancelFailedSequence = 0x5E0; // CEntityIOOutput
            public const nint m_OnScriptEvent = 0x5F8; // CEntityIOOutput[8]
            public const nint m_matOtherToMain = 0x6C0; // CTransform
            public const nint m_hInteractionMainEntity = 0x6E0; // CHandle<CBaseEntity>
            public const nint m_iPlayerDeathBehavior = 0x6E4; // int32
            public const nint m_bSkipFadeIn = 0x6E8; // bool
        }
        // Parent: CBaseTrigger
        // Field count: 1
        public static class CFogTrigger {
            public const nint m_fog = 0x890; // fogparams_t
        }
        // Parent: CPointEntity
        // Field count: 0
        public static class CInfoTeleportDestination {
        }
        // Parent: CPointEntity
        // Field count: 0
        public static class CPointBroadcastClientCommand {
        }
        // Parent: CPlayerPawnComponent
        // Field count: 2
        //
        // Metadata:
        // NetworkVarNames: m_hPlayerPing (CHandle<CPlayerPing>)
        public static class CCSPlayer_PingServices {
            public const nint m_flPlayerPingTokens = 0x48; // GameTime_t[5]
            public const nint m_hPlayerPing = 0x5C; // CHandle<CPlayerPing>
        }
        // Parent: CBaseCSGrenade
        // Field count: 0
        public static class CHEGrenade {
        }
        // Parent: CBaseEntity
        // Field count: 8
        public static class CPhysicsSpring {
            public const nint m_flFrequency = 0x4B0; // float32
            public const nint m_flDampingRatio = 0x4B4; // float32
            public const nint m_flRestLength = 0x4B8; // float32
            public const nint m_nameAttachStart = 0x4C0; // CUtlSymbolLarge
            public const nint m_nameAttachEnd = 0x4C8; // CUtlSymbolLarge
            public const nint m_start = 0x4D0; // VectorWS
            public const nint m_end = 0x4DC; // VectorWS
            public const nint m_teleportTick = 0x4E8; // uint32
        }
        // Parent: CPointEntity
        // Field count: 2
        public static class CEnvMuzzleFlash {
            public const nint m_flScale = 0x4A8; // float32
            public const nint m_iszParentAttachment = 0x4B0; // CUtlSymbolLarge
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
        // Parent: None
        // Field count: 0
        public static class CBaseTriggerAPI {
        }
        // Parent: CCSWeaponBaseGun
        // Field count: 0
        public static class CWeaponRevolver {
        }
        // Parent: CBaseModelEntity
        // Field count: 0
        public static class CFuncTrainControls {
        }
        // Parent: None
        // Field count: 4
        public static class CBtActionCombatPositioning {
            public const nint m_szSensorInputKey = 0x68; // CUtlString
            public const nint m_szIsAttackingKey = 0x80; // CUtlString
            public const nint m_ActionTimer = 0x88; // CountdownTimer
            public const nint m_bCrouching = 0xA0; // bool
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
        // Parent: CDynamicProp
        // Field count: 0
        public static class CFuncRetakeBarrier {
        }
        // Parent: CBaseTrigger
        // Field count: 2
        //
        // Metadata:
        // NetworkVarNames: m_flFluidDensity (float)
        public static class CTriggerBuoyancy {
            public const nint m_BuoyancyHelper = 0x890; // CBuoyancyHelper
            public const nint m_flFluidDensity = 0x9A8; // float32
        }
        // Parent: CTonemapController2
        // Field count: 0
        public static class CTonemapController2Alias_env_tonemap_controller2 {
        }
        // Parent: CPointEntity
        // Field count: 9
        public static class CPathTrack {
            public const nint m_pnext = 0x4A8; // CPathTrack*
            public const nint m_pprevious = 0x4B0; // CPathTrack*
            public const nint m_paltpath = 0x4B8; // CPathTrack*
            public const nint m_flRadius = 0x4C0; // float32
            public const nint m_length = 0x4C4; // float32
            public const nint m_altName = 0x4C8; // CUtlSymbolLarge
            public const nint m_nIterVal = 0x4D0; // int32
            public const nint m_eOrientationType = 0x4D4; // TrackOrientationType_t
            public const nint m_OnPass = 0x4D8; // CEntityIOOutput
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Base {
            public const nint m_nEditorNodeID = 0x8; // PulseDocNodeID_t
        }
        // Parent: CBaseTrigger
        // Field count: 5
        public static class CTriggerProximity {
            public const nint m_hMeasureTarget = 0x890; // CHandle<CBaseEntity>
            public const nint m_iszMeasureTarget = 0x898; // CUtlSymbolLarge
            public const nint m_fRadius = 0x8A0; // float32
            public const nint m_nTouchers = 0x8A4; // int32
            public const nint m_NearestEntityDistance = 0x8A8; // CEntityOutputTemplate<float32,float32>
        }
        // Parent: CPointEntity
        // Field count: 7
        public static class CTankTrainAI {
            public const nint m_hTrain = 0x4A8; // CHandle<CFuncTrackTrain>
            public const nint m_hTargetEntity = 0x4AC; // CHandle<CBaseEntity>
            public const nint m_soundPlaying = 0x4B0; // int32
            public const nint m_startSoundName = 0x4C8; // CUtlSymbolLarge
            public const nint m_engineSoundName = 0x4D0; // CUtlSymbolLarge
            public const nint m_movementSoundName = 0x4D8; // CUtlSymbolLarge
            public const nint m_targetEntityName = 0x4E0; // CUtlSymbolLarge
        }
        // Parent: CRulePointEntity
        // Field count: 2
        public static class CGameText {
            public const nint m_iszMessage = 0x740; // CUtlSymbolLarge
            public const nint m_textParms = 0x748; // hudtextparms_t
        }
        // Parent: CRulePointEntity
        // Field count: 0
        public static class CGameEnd {
        }
        // Parent: SpawnPoint
        // Field count: 0
        public static class CInfoDeathmatchSpawn {
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
        public static class CCSPlayerController_InventoryServices {
            public const nint m_unMusicID = 0x40; // uint16
            public const nint m_rank = 0x44; // MedalRank_t[6]
            public const nint m_nPersonaDataPublicLevel = 0x5C; // int32
            public const nint m_nPersonaDataPublicCommendsLeader = 0x60; // int32
            public const nint m_nPersonaDataPublicCommendsTeacher = 0x64; // int32
            public const nint m_nPersonaDataPublicCommendsFriendly = 0x68; // int32
            public const nint m_nPersonaDataXpTrailLevel = 0x6C; // int32
            public const nint m_unEquippedPlayerSprayIDs = 0xF48; // uint32[1]
            public const nint m_unCurrentLoadoutHash = 0xF50; // uint64
            public const nint m_vecServerAuthoritativeWeaponSlots = 0xF58; // CUtlVectorEmbeddedNetworkVar<ServerAuthoritativeWeaponSlot_t>
        }
        // Parent: 
        // Field count: 8
        //
        // Metadata:
        // NetworkVarNames: m_nLastActualJumpPressTick (GameTick_t)
        // NetworkVarNames: m_flLastActualJumpPressFrac (float)
        // NetworkVarNames: m_nLastUsableJumpPressTick (GameTick_t)
        // NetworkVarNames: m_flLastUsableJumpPressFrac (float)
        // NetworkVarNames: m_nLastLandedTick (GameTick_t)
        // NetworkVarNames: m_flLastLandedFrac (float)
        // NetworkVarNames: m_flLastLandedVelocityX (float)
        // NetworkVarNames: m_flLastLandedVelocityY (float)
        public static class CCSPlayerModernJump {
            public const nint m_nLastActualJumpPressTick = 0x10; // GameTick_t
            public const nint m_flLastActualJumpPressFrac = 0x14; // float32
            public const nint m_nLastUsableJumpPressTick = 0x18; // GameTick_t
            public const nint m_flLastUsableJumpPressFrac = 0x1C; // float32
            public const nint m_nLastLandedTick = 0x20; // GameTick_t
            public const nint m_flLastLandedFrac = 0x24; // float32
            public const nint m_flLastLandedVelocityX = 0x28; // float32
            public const nint m_flLastLandedVelocityY = 0x2C; // float32
        }
        // Parent: None
        // Field count: 0
        public static class CPulse_ResumePoint {
        }
        // Parent: CBaseAnimGraph
        // Field count: 6
        //
        // Metadata:
        // NetworkVarNames: m_flexWeight (float32)
        // NetworkVarNames: m_vLookTargetPosition (VectorWS)
        public static class CBaseFlex {
            public const nint m_flexWeight = 0xA20; // CNetworkUtlVectorBase<float32>
            public const nint m_vLookTargetPosition = 0xA38; // VectorWS
            public const nint m_flAllowResponsesEndTime = 0xA98; // GameTime_t
            public const nint m_flLastFlexAnimationTime = 0xA9C; // GameTime_t
            public const nint m_nNextSceneEventId = 0xAA0; // SceneEventId_t
            public const nint m_bUpdateLayerPriorities = 0xAA4; // bool
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
        public static class CTriggerFan {
            public const nint m_vFanOriginOffset = 0x890; // Vector
            public const nint m_vDirection = 0x89C; // Vector
            public const nint m_bPushTowardsInfoTarget = 0x8A8; // bool
            public const nint m_bPushAwayFromInfoTarget = 0x8A9; // bool
            public const nint m_qNoiseDelta = 0x8B0; // Quaternion
            public const nint m_hInfoFan = 0x8C0; // CHandle<CInfoFan>
            public const nint m_flForce = 0x8C4; // float32
            public const nint m_bFalloff = 0x8C8; // bool
            public const nint m_RampTimer = 0x8D0; // CountdownTimer
            public const nint m_vFanOriginWS = 0x8E8; // VectorWS
            public const nint m_vFanOriginLS = 0x8F4; // Vector
            public const nint m_vFanEndLS = 0x900; // Vector
            public const nint m_vNoiseDirectionTarget = 0x90C; // Vector
            public const nint m_iszInfoFan = 0x918; // CUtlSymbolLarge
            public const nint m_flRopeForceScale = 0x920; // float32
            public const nint m_flParticleForceScale = 0x924; // float32
            public const nint m_flPlayerForce = 0x928; // float32
            public const nint m_bPlayerWindblock = 0x92C; // bool
            public const nint m_flNPCForce = 0x930; // float32
            public const nint m_flRampTime = 0x934; // float32
            public const nint m_fNoiseDegrees = 0x938; // float32
            public const nint m_fNoiseSpeed = 0x93C; // float32
            public const nint m_bPushPlayer = 0x940; // bool
            public const nint m_bRampDown = 0x941; // bool
            public const nint m_nManagerFanIdx = 0x944; // int32
        }
        // Parent: CPhysHinge
        // Field count: 0
        public static class CPhysHingeAlias_phys_hinge_local {
        }
        // Parent: CLogicalEntity
        // Field count: 6
        public static class CLogicCase {
            public const nint m_nCase = 0x4A8; // CUtlSymbolLarge[32]
            public const nint m_nShuffleCases = 0x5A8; // int32
            public const nint m_nLastShuffleCase = 0x5AC; // int32
            public const nint m_uchShuffleCaseMap = 0x5B0; // uint8[32]
            public const nint m_OnCase = 0x5D0; // CEntityIOOutput[32]
            public const nint m_OnDefault = 0x8D0; // CEntityOutputTemplate<CUtlString,char*>
        }
        // Parent: CPointEntity
        // Field count: 2
        public static class CInfoGameEventProxy {
            public const nint m_iszEventName = 0x4A8; // CUtlSymbolLarge
            public const nint m_flRange = 0x4B0; // float32
        }
        // Parent: CCSWeaponBaseGun
        // Field count: 0
        public static class CWeaponBizon {
        }
        // Parent: CRuleBrushEntity
        // Field count: 4
        public static class CGamePlayerZone {
            public const nint m_OnPlayerInZone = 0x738; // CEntityIOOutput
            public const nint m_OnPlayerOutZone = 0x750; // CEntityIOOutput
            public const nint m_PlayersInCount = 0x768; // CEntityOutputTemplate<int32,int32>
            public const nint m_PlayersOutCount = 0x788; // CEntityOutputTemplate<int32,int32>
        }
        // Parent: CBaseModelEntity
        // Field count: 16
        public static class CBaseToggle {
            public const nint m_toggle_state = 0x730; // TOGGLE_STATE
            public const nint m_flMoveDistance = 0x734; // float32
            public const nint m_flWait = 0x738; // float32
            public const nint m_flLip = 0x73C; // float32
            public const nint m_bAlwaysFireBlockedOutputs = 0x740; // bool
            public const nint m_vecPosition1 = 0x744; // Vector
            public const nint m_vecPosition2 = 0x750; // Vector
            public const nint m_vecMoveAng = 0x75C; // QAngle
            public const nint m_vecAngle1 = 0x768; // QAngle
            public const nint m_vecAngle2 = 0x774; // QAngle
            public const nint m_flHeight = 0x780; // float32
            public const nint m_hActivator = 0x784; // CHandle<CBaseEntity>
            public const nint m_vecFinalDest = 0x788; // Vector
            public const nint m_vecFinalAngle = 0x794; // QAngle
            public const nint m_movementType = 0x7A0; // int32
            public const nint m_sMaster = 0x7A8; // CUtlSymbolLarge
        }
        // Parent: None
        // Field count: 2
        public static class CPulseServerCursor {
            public const nint m_hActivator = 0xD8; // CHandle<CBaseEntity>
            public const nint m_hCaller = 0xDC; // CHandle<CBaseEntity>
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CPulseCell_PlaySequence {
            public const nint m_SequenceName = 0x48; // CUtlString
            public const nint m_PulseAnimEvents = 0x50; // PulseNodeDynamicOutflows_t
            public const nint m_OnFinished = 0x68; // CPulse_ResumePoint
            public const nint m_OnCanceled = 0xB0; // CPulse_ResumePoint
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
        public static class CInferno {
            public const nint m_firePositions = 0x738; // Vector[64]
            public const nint m_fireParentPositions = 0xA38; // Vector[64]
            public const nint m_bFireIsBurning = 0xD38; // bool[64]
            public const nint m_BurnNormal = 0xD78; // Vector[64]
            public const nint m_fireCount = 0x1078; // int32
            public const nint m_nInfernoType = 0x107C; // int32
            public const nint m_nFireEffectTickBegin = 0x1080; // int32
            public const nint m_nFireLifetime = 0x1084; // float32
            public const nint m_bInPostEffectTime = 0x1088; // bool
            public const nint m_bWasCreatedInSmoke = 0x1089; // bool
            public const nint m_extent = 0x1290; // Extent
            public const nint m_damageTimer = 0x12A8; // CountdownTimer
            public const nint m_damageRampTimer = 0x12C0; // CountdownTimer
            public const nint m_splashVelocity = 0x12D8; // Vector
            public const nint m_InitialSplashVelocity = 0x12E4; // Vector
            public const nint m_startPos = 0x12F0; // Vector
            public const nint m_vecOriginalSpawnLocation = 0x12FC; // Vector
            public const nint m_activeTimer = 0x1308; // IntervalTimer
            public const nint m_fireSpawnOffset = 0x1318; // int32
            public const nint m_nMaxFlames = 0x131C; // int32
            public const nint m_nSpreadCount = 0x1320; // int32
            public const nint m_BookkeepingTimer = 0x1328; // CountdownTimer
            public const nint m_NextSpreadTimer = 0x1340; // CountdownTimer
            public const nint m_nSourceItemDefIndex = 0x1358; // uint16
        }
        // Parent: CEntityComponent
        // Field count: 0
        public static class CTouchExpansionComponent {
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Outflow_PlaySceneBase {
            public const nint m_OnFinished = 0x48; // CPulse_ResumePoint
            public const nint m_OnCanceled = 0x90; // CPulse_ResumePoint
            public const nint m_Triggers = 0xD8; // CUtlVector<CPulse_OutflowConnection>
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_LerpCameraSettings {
            public const nint m_flSeconds = 0x90; // float32
            public const nint m_Start = 0x94; // PointCameraSettings_t
            public const nint m_End = 0xA4; // PointCameraSettings_t
        }
        // Parent: CCSWeaponBaseGun
        // Field count: 0
        public static class CWeaponSCAR20 {
        }
        // Parent: CBaseModelEntity
        // Field count: 3
        public static class CFuncInteractionLayerClip {
            public const nint m_bDisabled = 0x730; // bool
            public const nint m_iszInteractsAs = 0x738; // CUtlSymbolLarge
            public const nint m_iszInteractsWith = 0x740; // CUtlSymbolLarge
        }
        // Parent: CPlayer_UseServices
        // Field count: 0
        public static class CCSObserver_UseServices {
        }
        // Parent: CBaseTrigger
        // Field count: 2
        public static class CTriggerDetectBulletFire {
            public const nint m_bPlayerFireOnly = 0x890; // bool
            public const nint m_OnDetectedBulletFire = 0x898; // CEntityIOOutput
        }
        // Parent: CPlayer_UseServices
        // Field count: 3
        public static class CCSPlayer_UseServices {
            public const nint m_hLastKnownUseEntity = 0x48; // CHandle<CBaseEntity>
            public const nint m_flLastUseTimeStamp = 0x4C; // GameTime_t
            public const nint m_flTimeLastUsedWindow = 0x50; // GameTime_t
        }
        // Parent: CCSWeaponBaseGun
        // Field count: 0
        public static class CWeaponAWP {
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
        public static class CPulseCell_PickBestOutflowSelector {
            public const nint m_nCheckType = 0x48; // PulseBestOutflowRules_t
            public const nint m_OutflowList = 0x50; // PulseSelectorOutflowList_t
        }
        // Parent: CPointEntity
        // Field count: 4
        //
        // Metadata:
        // NetworkVarNames: m_fFanForceMaxRadius (float)
        // NetworkVarNames: m_fFanForceMinRadius (float)
        // NetworkVarNames: m_flCurveDistRange (float)
        // NetworkVarNames: m_FanForceCurveString (string_t)
        public static class CInfoFan {
            public const nint m_fFanForceMaxRadius = 0x4E8; // float32
            public const nint m_fFanForceMinRadius = 0x4EC; // float32
            public const nint m_flCurveDistRange = 0x4F0; // float32
            public const nint m_FanForceCurveString = 0x4F8; // CUtlSymbolLarge
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
            public const nint m_pool = 0xA20; // CHandle<CFishPool>
            public const nint m_id = 0xA24; // uint32
            public const nint m_x = 0xA28; // float32
            public const nint m_y = 0xA2C; // float32
            public const nint m_z = 0xA30; // float32
            public const nint m_angle = 0xA34; // float32
            public const nint m_angleChange = 0xA38; // float32
            public const nint m_forward = 0xA3C; // Vector
            public const nint m_perp = 0xA48; // Vector
            public const nint m_poolOrigin = 0xA54; // Vector
            public const nint m_waterLevel = 0xA60; // float32
            public const nint m_speed = 0xA64; // float32
            public const nint m_desiredSpeed = 0xA68; // float32
            public const nint m_calmSpeed = 0xA6C; // float32
            public const nint m_panicSpeed = 0xA70; // float32
            public const nint m_avoidRange = 0xA74; // float32
            public const nint m_turnTimer = 0xA78; // CountdownTimer
            public const nint m_turnClockwise = 0xA90; // bool
            public const nint m_goTimer = 0xA98; // CountdownTimer
            public const nint m_moveTimer = 0xAB0; // CountdownTimer
            public const nint m_panicTimer = 0xAC8; // CountdownTimer
            public const nint m_disperseTimer = 0xAE0; // CountdownTimer
            public const nint m_proximityTimer = 0xAF8; // CountdownTimer
            public const nint m_visible = 0xB10; // CUtlVector<CFish*>
        }
        // Parent: CBot
        // Field count: 139
        public static class CCSBot {
            public const nint m_eyePosition = 0x108; // VectorWS
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
            public const nint m_stateTimestamp = 0x578; // float32
            public const nint m_isAttacking = 0x57C; // bool
            public const nint m_isOpeningDoor = 0x57D; // bool
            public const nint m_taskEntity = 0x584; // CHandle<CBaseEntity>
            public const nint m_goalPosition = 0x594; // VectorWS
            public const nint m_goalEntity = 0x5A0; // CHandle<CBaseEntity>
            public const nint m_avoid = 0x5A4; // CHandle<CBaseEntity>
            public const nint m_avoidTimestamp = 0x5A8; // float32
            public const nint m_isStopping = 0x5AC; // bool
            public const nint m_hasVisitedEnemySpawn = 0x5AD; // bool
            public const nint m_stillTimer = 0x5B0; // IntervalTimer
            public const nint m_bEyeAnglesUnderPathFinderControl = 0x5C0; // bool
            public const nint m_pathIndex = 0x5EC0; // int32
            public const nint m_areaEnteredTimestamp = 0x5EC4; // GameTime_t
            public const nint m_repathTimer = 0x5EC8; // CountdownTimer
            public const nint m_avoidFriendTimer = 0x5EE0; // CountdownTimer
            public const nint m_isFriendInTheWay = 0x5EF8; // bool
            public const nint m_politeTimer = 0x5F00; // CountdownTimer
            public const nint m_isWaitingBehindFriend = 0x5F18; // bool
            public const nint m_pathLadderEnd = 0x5F44; // float32
            public const nint m_mustRunTimer = 0x5F90; // CountdownTimer
            public const nint m_waitTimer = 0x5FA8; // CountdownTimer
            public const nint m_updateTravelDistanceTimer = 0x5FC0; // CountdownTimer
            public const nint m_playerTravelDistance = 0x5FD8; // float32[64]
            public const nint m_travelDistancePhase = 0x60D8; // uint8
            public const nint m_hostageEscortCount = 0x6270; // uint8
            public const nint m_hostageEscortCountTimestamp = 0x6274; // float32
            public const nint m_desiredTeam = 0x6278; // int32
            public const nint m_hasJoined = 0x627C; // bool
            public const nint m_isWaitingForHostage = 0x627D; // bool
            public const nint m_inhibitWaitingForHostageTimer = 0x6280; // CountdownTimer
            public const nint m_waitForHostageTimer = 0x6298; // CountdownTimer
            public const nint m_noisePosition = 0x62B0; // Vector
            public const nint m_noiseTravelDistance = 0x62BC; // float32
            public const nint m_noiseTimestamp = 0x62C0; // float32
            public const nint m_noiseSource = 0x62C8; // CCSPlayerPawn*
            public const nint m_noiseBendTimer = 0x62E0; // CountdownTimer
            public const nint m_bentNoisePosition = 0x62F8; // Vector
            public const nint m_bendNoisePositionValid = 0x6304; // bool
            public const nint m_lookAroundStateTimestamp = 0x6308; // float32
            public const nint m_lookAheadAngle = 0x630C; // float32
            public const nint m_forwardAngle = 0x6310; // float32
            public const nint m_inhibitLookAroundTimestamp = 0x6314; // float32
            public const nint m_lookAtSpot = 0x631C; // Vector
            public const nint m_lookAtSpotDuration = 0x632C; // float32
            public const nint m_lookAtSpotTimestamp = 0x6330; // float32
            public const nint m_lookAtSpotAngleTolerance = 0x6334; // float32
            public const nint m_lookAtSpotClearIfClose = 0x6338; // bool
            public const nint m_lookAtSpotAttack = 0x6339; // bool
            public const nint m_lookAtDesc = 0x6340; // char*
            public const nint m_peripheralTimestamp = 0x6348; // float32
            public const nint m_approachPointCount = 0x64D0; // uint8
            public const nint m_approachPointViewPosition = 0x64D4; // Vector
            public const nint m_viewSteadyTimer = 0x64E0; // IntervalTimer
            public const nint m_tossGrenadeTimer = 0x64F8; // CountdownTimer
            public const nint m_isAvoidingGrenade = 0x6518; // CountdownTimer
            public const nint m_spotCheckTimestamp = 0x6538; // float32
            public const nint m_checkedHidingSpotCount = 0x6940; // int32
            public const nint m_lookPitch = 0x6944; // float32
            public const nint m_lookPitchVel = 0x6948; // float32
            public const nint m_lookYaw = 0x694C; // float32
            public const nint m_lookYawVel = 0x6950; // float32
            public const nint m_targetSpot = 0x6954; // Vector
            public const nint m_targetSpotVelocity = 0x6960; // Vector
            public const nint m_targetSpotPredicted = 0x696C; // Vector
            public const nint m_aimError = 0x6978; // QAngle
            public const nint m_aimGoal = 0x6984; // QAngle
            public const nint m_targetSpotTime = 0x6990; // GameTime_t
            public const nint m_aimFocus = 0x6994; // float32
            public const nint m_aimFocusInterval = 0x6998; // float32
            public const nint m_aimFocusNextUpdate = 0x699C; // GameTime_t
            public const nint m_ignoreEnemiesTimer = 0x69A8; // CountdownTimer
            public const nint m_enemy = 0x69C0; // CHandle<CCSPlayerPawn>
            public const nint m_isEnemyVisible = 0x69C4; // bool
            public const nint m_visibleEnemyParts = 0x69C5; // uint8
            public const nint m_lastEnemyPosition = 0x69C8; // Vector
            public const nint m_lastSawEnemyTimestamp = 0x69D4; // float32
            public const nint m_firstSawEnemyTimestamp = 0x69D8; // float32
            public const nint m_currentEnemyAcquireTimestamp = 0x69DC; // float32
            public const nint m_enemyDeathTimestamp = 0x69E0; // float32
            public const nint m_friendDeathTimestamp = 0x69E4; // float32
            public const nint m_isLastEnemyDead = 0x69E8; // bool
            public const nint m_nearbyEnemyCount = 0x69EC; // int32
            public const nint m_bomber = 0x6BF8; // CHandle<CCSPlayerPawn>
            public const nint m_nearbyFriendCount = 0x6BFC; // int32
            public const nint m_closestVisibleFriend = 0x6C00; // CHandle<CCSPlayerPawn>
            public const nint m_closestVisibleHumanFriend = 0x6C04; // CHandle<CCSPlayerPawn>
            public const nint m_attentionInterval = 0x6C08; // IntervalTimer
            public const nint m_attacker = 0x6C18; // CHandle<CCSPlayerPawn>
            public const nint m_attackedTimestamp = 0x6C1C; // float32
            public const nint m_burnedByFlamesTimer = 0x6C20; // IntervalTimer
            public const nint m_lastVictimID = 0x6C30; // int32
            public const nint m_isAimingAtEnemy = 0x6C34; // bool
            public const nint m_isRapidFiring = 0x6C35; // bool
            public const nint m_equipTimer = 0x6C38; // IntervalTimer
            public const nint m_zoomTimer = 0x6C48; // CountdownTimer
            public const nint m_fireWeaponTimestamp = 0x6C60; // GameTime_t
            public const nint m_lookForWeaponsOnGroundTimer = 0x6C68; // CountdownTimer
            public const nint m_bIsSleeping = 0x6C80; // bool
            public const nint m_isEnemySniperVisible = 0x6C81; // bool
            public const nint m_sawEnemySniperTimer = 0x6C88; // CountdownTimer
            public const nint m_enemyQueueIndex = 0x6D40; // uint8
            public const nint m_enemyQueueCount = 0x6D41; // uint8
            public const nint m_enemyQueueAttendIndex = 0x6D42; // uint8
            public const nint m_isStuck = 0x6D43; // bool
            public const nint m_stuckTimestamp = 0x6D44; // GameTime_t
            public const nint m_stuckSpot = 0x6D48; // Vector
            public const nint m_wiggleTimer = 0x6D58; // CountdownTimer
            public const nint m_stuckJumpTimer = 0x6D70; // CountdownTimer
            public const nint m_nextCleanupCheckTimestamp = 0x6D88; // GameTime_t
            public const nint m_avgVel = 0x6D8C; // float32[10]
            public const nint m_avgVelIndex = 0x6DB4; // int32
            public const nint m_avgVelCount = 0x6DB8; // int32
            public const nint m_lastOrigin = 0x6DBC; // Vector
            public const nint m_lastRadioRecievedTimestamp = 0x6DCC; // float32
            public const nint m_lastRadioSentTimestamp = 0x6DD0; // float32
            public const nint m_radioSubject = 0x6DD4; // CHandle<CCSPlayerPawn>
            public const nint m_radioPosition = 0x6DD8; // Vector
            public const nint m_voiceEndTimestamp = 0x6DE4; // float32
            public const nint m_lastValidReactionQueueFrame = 0x6DF0; // int32
        }
        // Parent: CBaseEntity
        // Field count: 2
        //
        // Metadata:
        // NetworkVarNames: m_Handle (CHandle<CBaseEntity>)
        // NetworkVarNames: m_bSendHandle (bool)
        public static class CHandleTest {
            public const nint m_Handle = 0x4A8; // CHandle<CBaseEntity>
            public const nint m_bSendHandle = 0x4AC; // bool
        }
        // Parent: CBaseEntity
        // Field count: 48
        public static class CLogicNPCCounter {
            public const nint m_OnMinCountAll = 0x4A8; // CEntityIOOutput
            public const nint m_OnMaxCountAll = 0x4C0; // CEntityIOOutput
            public const nint m_OnFactorAll = 0x4D8; // CEntityOutputTemplate<float32,float32>
            public const nint m_OnMinPlayerDistAll = 0x4F8; // CEntityOutputTemplate<float32,float32>
            public const nint m_OnMinCount_1 = 0x518; // CEntityIOOutput
            public const nint m_OnMaxCount_1 = 0x530; // CEntityIOOutput
            public const nint m_OnFactor_1 = 0x548; // CEntityOutputTemplate<float32,float32>
            public const nint m_OnMinPlayerDist_1 = 0x568; // CEntityOutputTemplate<float32,float32>
            public const nint m_OnMinCount_2 = 0x588; // CEntityIOOutput
            public const nint m_OnMaxCount_2 = 0x5A0; // CEntityIOOutput
            public const nint m_OnFactor_2 = 0x5B8; // CEntityOutputTemplate<float32,float32>
            public const nint m_OnMinPlayerDist_2 = 0x5D8; // CEntityOutputTemplate<float32,float32>
            public const nint m_OnMinCount_3 = 0x5F8; // CEntityIOOutput
            public const nint m_OnMaxCount_3 = 0x610; // CEntityIOOutput
            public const nint m_OnFactor_3 = 0x628; // CEntityOutputTemplate<float32,float32>
            public const nint m_OnMinPlayerDist_3 = 0x648; // CEntityOutputTemplate<float32,float32>
            public const nint m_hSource = 0x668; // CEntityHandle
            public const nint m_iszSourceEntityName = 0x670; // CUtlSymbolLarge
            public const nint m_flDistanceMax = 0x678; // float32
            public const nint m_bDisabled = 0x67C; // bool
            public const nint m_nMinCountAll = 0x680; // int32
            public const nint m_nMaxCountAll = 0x684; // int32
            public const nint m_nMinFactorAll = 0x688; // int32
            public const nint m_nMaxFactorAll = 0x68C; // int32
            public const nint m_iszNPCClassname_1 = 0x698; // CUtlSymbolLarge
            public const nint m_nNPCState_1 = 0x6A0; // int32
            public const nint m_bInvertState_1 = 0x6A4; // bool
            public const nint m_nMinCount_1 = 0x6A8; // int32
            public const nint m_nMaxCount_1 = 0x6AC; // int32
            public const nint m_nMinFactor_1 = 0x6B0; // int32
            public const nint m_nMaxFactor_1 = 0x6B4; // int32
            public const nint m_flDefaultDist_1 = 0x6BC; // float32
            public const nint m_iszNPCClassname_2 = 0x6C0; // CUtlSymbolLarge
            public const nint m_nNPCState_2 = 0x6C8; // int32
            public const nint m_bInvertState_2 = 0x6CC; // bool
            public const nint m_nMinCount_2 = 0x6D0; // int32
            public const nint m_nMaxCount_2 = 0x6D4; // int32
            public const nint m_nMinFactor_2 = 0x6D8; // int32
            public const nint m_nMaxFactor_2 = 0x6DC; // int32
            public const nint m_flDefaultDist_2 = 0x6E4; // float32
            public const nint m_iszNPCClassname_3 = 0x6E8; // CUtlSymbolLarge
            public const nint m_nNPCState_3 = 0x6F0; // int32
            public const nint m_bInvertState_3 = 0x6F4; // bool
            public const nint m_nMinCount_3 = 0x6F8; // int32
            public const nint m_nMaxCount_3 = 0x6FC; // int32
            public const nint m_nMinFactor_3 = 0x700; // int32
            public const nint m_nMaxFactor_3 = 0x704; // int32
            public const nint m_flDefaultDist_3 = 0x70C; // float32
        }
        // Parent: CPlayerPawnComponent
        // Field count: 5
        public static class CCSPlayer_RadioServices {
            public const nint m_flGotHostageTalkTimer = 0x48; // GameTime_t
            public const nint m_flDefusingTalkTimer = 0x4C; // GameTime_t
            public const nint m_flC4PlantTalkTimer = 0x50; // GameTime_t
            public const nint m_flRadioTokenSlots = 0x54; // GameTime_t[3]
            public const nint m_bIgnoreRadio = 0x60; // bool
        }
        // Parent: CCSWeaponBaseGun
        // Field count: 0
        public static class CWeaponSG556 {
        }
        // Parent: CPhysConstraint
        // Field count: 9
        public static class CRagdollConstraint {
            public const nint m_xmin = 0x508; // float32
            public const nint m_xmax = 0x50C; // float32
            public const nint m_ymin = 0x510; // float32
            public const nint m_ymax = 0x514; // float32
            public const nint m_zmin = 0x518; // float32
            public const nint m_zmax = 0x51C; // float32
            public const nint m_xfriction = 0x520; // float32
            public const nint m_yfriction = 0x524; // float32
            public const nint m_zfriction = 0x528; // float32
        }
        // Parent: CBaseModelEntity
        // Field count: 0
        public static class CFuncVehicleClip {
        }
        // Parent: CCSWeaponBaseGun
        // Field count: 0
        public static class CDEagle {
        }
        // Parent: CCSWeaponBaseGun
        // Field count: 0
        public static class CWeaponFamas {
        }
        // Parent: CPointEntity
        // Field count: 1
        public static class CEnvSplash {
            public const nint m_flScale = 0x4A8; // float32
        }
        // Parent: CPointCamera
        // Field count: 1
        public static class CPointCameraVFOV {
            public const nint m_flVerticalFOV = 0x508; // float32
        }
        // Parent: CCSGO_WingmanIntroCharacterPosition
        // Field count: 0
        public static class CCSGO_WingmanIntroTerroristPosition {
        }
        // Parent: None
        // Field count: 0
        public static class CTestPulseIOAPI {
        }
        // Parent: CCSWeaponBase
        // Field count: 0
        public static class CCSWeaponBaseShotgun {
        }
        // Parent: None
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
        // Parent: CBaseToggle
        // Field count: 13
        //
        // Metadata:
        // MNetworkIncludeByName
        // MNetworkIncludeByName
        // MNetworkOverride
        public static class CFuncMoveLinear {
            public const nint m_authoredPosition = 0x7B0; // MoveLinearAuthoredPos_t
            public const nint m_angMoveEntitySpace = 0x7B4; // QAngle
            public const nint m_vecMoveDirParentSpace = 0x7C0; // Vector
            public const nint m_soundStart = 0x7D0; // CUtlSymbolLarge
            public const nint m_soundStop = 0x7D8; // CUtlSymbolLarge
            public const nint m_currentSound = 0x7E0; // CUtlSymbolLarge
            public const nint m_flBlockDamage = 0x7E8; // float32
            public const nint m_flStartPosition = 0x7EC; // float32
            public const nint m_OnFullyOpen = 0x7F8; // CEntityIOOutput
            public const nint m_OnFullyClosed = 0x810; // CEntityIOOutput
            public const nint m_bCreateMovableNavMesh = 0x828; // bool
            public const nint m_bAllowMovableNavMeshDockingOnEntireEntity = 0x829; // bool
            public const nint m_bCreateNavObstacle = 0x82A; // bool
        }
        // Parent: None
        // Field count: 0
        public static class CPhysMotorAPI {
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPulseEditorHeaderIcon
        // MPropertyFriendlyName
        public static class CPulseCell_WaitForObservable {
            public const nint m_Condition = 0x48; // PulseObservableBoolExpression_t
            public const nint m_OnTrue = 0xC0; // CPulse_ResumePoint
        }
        // Parent: CItem
        // Field count: 1
        public static class CScriptItem {
            public const nint m_MoveTypeOverride = 0xAC0; // MoveType_t
        }
        // Parent: CDynamicProp
        // Field count: 0
        public static class CDynamicPropAlias_prop_dynamic_override {
        }
        // Parent: CBaseToggle
        // Field count: 12
        //
        // Metadata:
        // MNetworkIncludeByName
        // NetworkVarNames: m_bDisabled (bool)
        public static class CBaseTrigger {
            public const nint m_OnStartTouch = 0x7B0; // CEntityIOOutput
            public const nint m_OnStartTouchAll = 0x7C8; // CEntityIOOutput
            public const nint m_OnEndTouch = 0x7E0; // CEntityIOOutput
            public const nint m_OnEndTouchAll = 0x7F8; // CEntityIOOutput
            public const nint m_OnTouching = 0x810; // CEntityIOOutput
            public const nint m_OnTouchingEachEntity = 0x828; // CEntityIOOutput
            public const nint m_OnNotTouching = 0x840; // CEntityIOOutput
            public const nint m_hTouchingEntities = 0x858; // CUtlVector<CHandle<CBaseEntity>>
            public const nint m_iFilterName = 0x870; // CUtlSymbolLarge
            public const nint m_hFilter = 0x878; // CHandle<CBaseFilter>
            public const nint m_bDisabled = 0x87C; // bool
            public const nint m_bUseAsyncQueries = 0x888; // bool
        }
        // Parent: CPointEntity
        // Field count: 7
        public static class CPointPush {
            public const nint m_bEnabled = 0x4A8; // bool
            public const nint m_flMagnitude = 0x4AC; // float32
            public const nint m_flRadius = 0x4B0; // float32
            public const nint m_flInnerRadius = 0x4B4; // float32
            public const nint m_flConeOfInfluence = 0x4B8; // float32
            public const nint m_iszFilterName = 0x4C0; // CUtlSymbolLarge
            public const nint m_hFilter = 0x4C8; // CHandle<CBaseFilter>
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Step_EntFire {
            public const nint m_Input = 0x48; // CUtlString
        }
        // Parent: CPlayer_ObserverServices
        // Field count: 0
        public static class CCSObserver_ObserverServices {
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
            public const nint m_hPlayer = 0x4B0; // CHandle<CCSPlayerPawn>
            public const nint m_hPingedEntity = 0x4B4; // CHandle<CBaseEntity>
            public const nint m_iType = 0x4B8; // int32
            public const nint m_bUrgent = 0x4BC; // bool
            public const nint m_szPlaceName = 0x4BD; // char[18]
        }
        // Parent: CEntityComponent
        // Field count: 1
        public static class CHitboxComponent {
            public const nint m_flBoundsExpandRadius = 0x14; // float32
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
            public const nint m_RopeFlags = 0x738; // uint16
            public const nint m_iNextLinkName = 0x740; // CUtlSymbolLarge
            public const nint m_Slack = 0x748; // int16
            public const nint m_Width = 0x74C; // float32
            public const nint m_TextureScale = 0x750; // float32
            public const nint m_nSegments = 0x754; // uint8
            public const nint m_bConstrainBetweenEndpoints = 0x755; // bool
            public const nint m_strRopeMaterialModel = 0x758; // CUtlSymbolLarge
            public const nint m_iRopeMaterialModelIndex = 0x760; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_Subdiv = 0x768; // uint8
            public const nint m_nChangeCount = 0x769; // uint8
            public const nint m_RopeLength = 0x76A; // int16
            public const nint m_fLockedPoints = 0x76C; // uint8
            public const nint m_bCreatedFromMapFile = 0x76D; // bool
            public const nint m_flScrollSpeed = 0x770; // float32
            public const nint m_bStartPointValid = 0x774; // bool
            public const nint m_bEndPointValid = 0x775; // bool
            public const nint m_hStartPoint = 0x778; // CHandle<CBaseEntity>
            public const nint m_hEndPoint = 0x77C; // CHandle<CBaseEntity>
            public const nint m_iStartAttachment = 0x780; // AttachmentHandle_t
            public const nint m_iEndAttachment = 0x781; // AttachmentHandle_t
        }
        // Parent: CBaseCSGrenade
        // Field count: 0
        public static class CSmokeGrenade {
        }
        // Parent: CBaseFlex
        // Field count: 10
        //
        // Metadata:
        // MNetworkExcludeByUserGroup
        // NetworkVarNames: m_hMyWearables (CHandle<CEconWearable>)
        public static class CBaseCombatCharacter {
            public const nint m_bForceServerRagdoll = 0xAB0; // bool
            public const nint m_hMyWearables = 0xAB8; // CNetworkUtlVectorBase<CHandle<CEconWearable>>
            public const nint m_impactEnergyScale = 0xAD0; // float32
            public const nint m_bApplyStressDamage = 0xAD4; // bool
            public const nint m_bDeathEventsDispatched = 0xAD5; // bool
            public const nint m_pVecRelationships = 0xB18; // CUtlVector<RelationshipOverride_t>*
            public const nint m_strRelationships = 0xB20; // CUtlSymbolLarge
            public const nint m_eHull = 0xB28; // Hull_t
            public const nint m_nNavHullIdx = 0xB2C; // uint32
            public const nint m_movementStats = 0xB30; // CMovementStatsProperty
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // NetworkVarNames: unClass (equipped_class_t)
        // NetworkVarNames: unSlot (equipped_slot_t)
        // NetworkVarNames: unItemDefIdx (item_definition_index_t)
        public static class ServerAuthoritativeWeaponSlot_t {
            public const nint unClass = 0x30; // uint16
            public const nint unSlot = 0x32; // uint16
            public const nint unItemDefIdx = 0x34; // uint16
        }
        // Parent: CEntityComponent
        // Field count: 0
        public static class CPathQueryComponent {
        }
        // Parent: CLogicalEntity
        // Field count: 5
        public static class CLogicRelay {
            public const nint m_bDisabled = 0x4A8; // bool
            public const nint m_bWaitForRefire = 0x4A9; // bool
            public const nint m_bTriggerOnce = 0x4AA; // bool
            public const nint m_bFastRetrigger = 0x4AB; // bool
            public const nint m_bPassthoughCaller = 0x4AC; // bool
        }
        // Parent: 
        // Field count: 6
        public static class SequenceHistory_t {
            public const nint m_hSequence = 0x0; // HSequence
            public const nint m_flSeqStartTime = 0x4; // GameTime_t
            public const nint m_flSeqFixedCycle = 0x8; // float32
            public const nint m_nSeqLoopMode = 0xC; // AnimLoopMode_t
            public const nint m_flPlaybackRate = 0x10; // float32
            public const nint m_flCyclesPerSecond = 0x14; // float32
        }
        // Parent: CPlayerPawnComponent
        // Field count: 0
        public static class CPlayer_ItemServices {
        }
        // Parent: None
        // Field count: 4
        public static class CPulse_OutflowConnection {
            public const nint m_SourceOutflowName = 0x0; // PulseSymbol_t
            public const nint m_nDestChunk = 0x10; // PulseRuntimeChunkIndex_t
            public const nint m_nInstruction = 0x14; // int32
            public const nint m_OutflowRegisterMap = 0x18; // PulseRegisterMap_t
        }
        // Parent: CLogicalEntity
        // Field count: 8
        public static class CTestPulseIO {
            public const nint m_OnVariantVoid = 0x4A8; // CEntityIOOutput
            public const nint m_OnVariantBool = 0x4C0; // CEntityOutputTemplate<bool,bool>
            public const nint m_OnVariantInt = 0x4E0; // CEntityOutputTemplate<int32,int32>
            public const nint m_OnVariantFloat = 0x500; // CEntityOutputTemplate<float32,float32>
            public const nint m_OnVariantString = 0x520; // CEntityOutputTemplate<CUtlSymbolLarge,CUtlSymbolLarge>
            public const nint m_OnVariantColor = 0x540; // CEntityOutputTemplate<Color,Color>
            public const nint m_OnVariantVector = 0x560; // CEntityOutputTemplate<Vector,Vector>
            public const nint m_bAllowEmptyInputs = 0x588; // bool
        }
        // Parent: CCSWeaponBaseGun
        // Field count: 0
        public static class CWeaponUMP45 {
        }
        // Parent: CRulePointEntity
        // Field count: 0
        public static class CGamePlayerEquip {
        }
        // Parent: CBaseEntity
        // Field count: 7
        public static class CPointEntityFinder {
            public const nint m_hEntity = 0x4A8; // CHandle<CBaseEntity>
            public const nint m_iFilterName = 0x4B0; // CUtlSymbolLarge
            public const nint m_hFilter = 0x4B8; // CHandle<CBaseFilter>
            public const nint m_iRefName = 0x4C0; // CUtlSymbolLarge
            public const nint m_hReference = 0x4C8; // CHandle<CBaseEntity>
            public const nint m_FindMethod = 0x4CC; // EntFinderMethod_t
            public const nint m_OnFoundEntity = 0x4D0; // CEntityIOOutput
        }
        // Parent: None
        // Field count: 14
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseGraphDef {
            public const nint m_DomainIdentifier = 0x8; // PulseSymbol_t
            public const nint m_DomainSubType = 0x18; // CPulseValueFullType
            public const nint m_ParentMapName = 0x30; // PulseSymbol_t
            public const nint m_ParentXmlName = 0x40; // PulseSymbol_t
            public const nint m_Chunks = 0x50; // CUtlVector<CPulse_Chunk*>
            public const nint m_Cells = 0x68; // CUtlVector<CPulseCell_Base*>
            public const nint m_Vars = 0x80; // CUtlVector<CPulse_Variable>
            public const nint m_PublicOutputs = 0x98; // CUtlVector<CPulse_PublicOutput>
            public const nint m_InvokeBindings = 0xB0; // CUtlVector<CPulse_InvokeBinding*>
            public const nint m_CallInfos = 0xC8; // CUtlVector<CPulse_CallInfo*>
            public const nint m_Constants = 0xE0; // CUtlVector<CPulse_Constant>
            public const nint m_DomainValues = 0xF8; // CUtlVector<CPulse_DomainValue>
            public const nint m_BlackboardReferences = 0x110; // CUtlVector<CPulse_BlackboardReference>
            public const nint m_OutputConnections = 0x128; // CUtlVector<CPulse_OutputConnection*>
        }
        // Parent: CCSWeaponBase
        // Field count: 1
        //
        // Metadata:
        // NetworkVarNames: m_bFirstAttack (bool)
        public static class CKnife {
            public const nint m_bFirstAttack = 0x1130; // bool
        }
        // Parent: CLogicalEntity
        // Field count: 5
        public static class CLogicPlayerProxy {
            public const nint m_PlayerHasAmmo = 0x4A8; // CEntityIOOutput
            public const nint m_PlayerHasNoAmmo = 0x4C0; // CEntityIOOutput
            public const nint m_PlayerDied = 0x4D8; // CEntityIOOutput
            public const nint m_RequestedPlayerHealth = 0x4F0; // CEntityOutputTemplate<int32,int32>
            public const nint m_hPlayer = 0x510; // CHandle<CBaseEntity>
        }
        // Parent: CCSGO_TeamPreviewCharacterPosition
        // Field count: 0
        public static class CCSGO_TeamIntroCharacterPosition {
        }
        // Parent: None
        // Field count: 0
        public static class CBasePlayerControllerAPI {
        }
        // Parent: CBaseTrigger
        // Field count: 0
        public static class CHostageRescueZoneShim {
        }
        // Parent: CMarkupVolumeTagged
        // Field count: 0
        public static class CSimpleMarkupVolumeTagged {
        }
        // Parent: CEnvSoundscape
        // Field count: 0
        public static class CEnvSoundscapeAlias_snd_soundscape {
        }
        // Parent: CPlayerPawnComponent
        // Field count: 2
        //
        // Metadata:
        // NetworkVarNames: m_hCarriedHostage (CHandle<CBaseEntity>)
        // NetworkVarNames: m_hCarriedHostageProp (CHandle<CBaseEntity>)
        public static class CCSPlayer_HostageServices {
            public const nint m_hCarriedHostage = 0x48; // CHandle<CBaseEntity>
            public const nint m_hCarriedHostageProp = 0x4C; // CHandle<CBaseEntity>
        }
        // Parent: CEntityComponent
        // Field count: 5
        public static class CRenderComponent {
            public const nint __m_pChainEntity = 0x10; // CNetworkVarChainer
            public const nint m_bIsRenderingWithViewModels = 0x50; // bool
            public const nint m_nSplitscreenFlags = 0x54; // uint32
            public const nint m_bEnableRendering = 0x58; // bool
            public const nint m_bInterpolationReadyToDraw = 0xA8; // bool
        }
        // Parent: CBaseAnimGraph
        // Field count: 0
        public static class CWaterBullet {
        }
        // Parent: CBaseTrigger
        // Field count: 3
        public static class CTriggerSoundscape {
            public const nint m_hSoundscape = 0x890; // CHandle<CEnvSoundscapeTriggerable>
            public const nint m_SoundscapeName = 0x898; // CUtlSymbolLarge
            public const nint m_spectators = 0x8A0; // CUtlVector<CHandle<CBasePlayerPawn>>
        }
        // Parent: None
        // Field count: 0
        public static class CPointTeleportAPI {
        }
        // Parent: CBaseCombatCharacter
        // Field count: 1
        public static class CHostageExpresserShim {
            public const nint m_pExpresser = 0xB70; // CAI_Expresser*
        }
        // Parent: CPointEntity
        // Field count: 1
        public static class CPointChildModifier {
            public const nint m_bOrphanInsteadOfDeletingChildrenOnRemove = 0x4A8; // bool
        }
        // Parent: 
        // Field count: 2
        //
        // Metadata:
        // NetworkVarNames: m_bOldJumpPressed (bool)
        public static class CCSPlayerLegacyJump {
            public const nint m_bOldJumpPressed = 0x10; // bool
            public const nint m_flJumpPressedTime = 0x14; // float32
        }
        // Parent: CCSWeaponBaseGun
        // Field count: 0
        public static class CWeaponHKP2000 {
        }
        // Parent: CPhysicsProp
        // Field count: 3
        //
        // Metadata:
        // MNetworkExcludeByName
        // NetworkVarNames: m_ShardDesc (shard_model_desc_t)
        public static class CShatterGlassShardPhysics {
            public const nint m_bDebris = 0xCE0; // bool
            public const nint m_hParentShard = 0xCE4; // uint32
            public const nint m_ShardDesc = 0xCE8; // shard_model_desc_t
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
            public const nint m_bStartActive = 0x4B0; // bool
            public const nint m_flMaxSimulationTime = 0x4B4; // float32
            public const nint m_iszEffectName = 0x4B8; // CUtlSymbolLarge
            public const nint m_PathNodes_Name = 0x4C0; // CUtlVector<CUtlSymbolLarge>
            public const nint m_flParticleSpacing = 0x4D8; // float32
            public const nint m_flSlack = 0x4DC; // float32
            public const nint m_flRadius = 0x4E0; // float32
            public const nint m_ColorTint = 0x4E4; // Color
            public const nint m_nEffectState = 0x4E8; // int32
            public const nint m_iEffectIndex = 0x4F0; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
            public const nint m_PathNodes_Position = 0x4F8; // CNetworkUtlVectorBase<Vector>
            public const nint m_PathNodes_TangentIn = 0x510; // CNetworkUtlVectorBase<Vector>
            public const nint m_PathNodes_TangentOut = 0x528; // CNetworkUtlVectorBase<Vector>
            public const nint m_PathNodes_Color = 0x540; // CNetworkUtlVectorBase<Vector>
            public const nint m_PathNodes_PinEnabled = 0x558; // CNetworkUtlVectorBase<bool>
            public const nint m_PathNodes_RadiusScale = 0x570; // CNetworkUtlVectorBase<float32>
        }
        // Parent: CPointEntity
        // Field count: 3
        public static class CCredits {
            public const nint m_OnCreditsDone = 0x4A8; // CEntityIOOutput
            public const nint m_bRolledOutroCredits = 0x4C0; // bool
            public const nint m_flLogoLength = 0x4C4; // float32
        }
        // Parent: CCSWeaponBaseGun
        // Field count: 0
        public static class CWeaponFiveSeven {
        }
        // Parent: CBaseEntity
        // Field count: 7
        public static class CFishPool {
            public const nint m_fishCount = 0x4B8; // int32
            public const nint m_maxRange = 0x4BC; // float32
            public const nint m_swimDepth = 0x4C0; // float32
            public const nint m_waterLevel = 0x4C4; // float32
            public const nint m_isDormant = 0x4C8; // bool
            public const nint m_fishes = 0x4D0; // CUtlVector<CHandle<CFish>>
            public const nint m_visTimer = 0x4E8; // CountdownTimer
        }
        // Parent: CPlayerPawnComponent
        // Field count: 15
        //
        // Metadata:
        // NetworkVarNames: m_nToggleButtonDownMask (ButtonBitMask_t)
        // NetworkVarNames: m_flMaxspeed (float32)
        // NetworkVarNames: m_arrForceSubtickMoveWhen (float32)
        public static class CPlayer_MovementServices {
            public const nint m_nImpulse = 0x48; // int32
            public const nint m_nButtons = 0x50; // CInButtonState
            public const nint m_nQueuedButtonDownMask = 0x70; // uint64
            public const nint m_nQueuedButtonChangeMask = 0x78; // uint64
            public const nint m_nButtonDoublePressed = 0x80; // uint64
            public const nint m_pButtonPressedCmdNumber = 0x88; // uint32[64]
            public const nint m_nLastCommandNumberProcessed = 0x188; // uint32
            public const nint m_nToggleButtonDownMask = 0x190; // uint64
            public const nint m_flMaxspeed = 0x1A0; // float32
            public const nint m_arrForceSubtickMoveWhen = 0x1A4; // float32[4]
            public const nint m_flForwardMove = 0x1B4; // float32
            public const nint m_flLeftMove = 0x1B8; // float32
            public const nint m_flUpMove = 0x1BC; // float32
            public const nint m_vecLastMovementImpulses = 0x1C0; // Vector
            public const nint m_vecOldViewAngles = 0x228; // QAngle
        }
        // Parent: CRagdollProp
        // Field count: 0
        public static class CRagdollPropAlias_physics_prop_ragdoll {
        }
        // Parent: CBaseProp
        // Field count: 33
        //
        // Metadata:
        // NetworkVarNames: m_CPropDataComponent (CPropDataComponent::Storage_t)
        public static class CBreakableProp {
            public const nint m_CPropDataComponent = 0xA58; // CPropDataComponent
            public const nint m_OnStartDeath = 0xA98; // CEntityIOOutput
            public const nint m_OnBreak = 0xAB0; // CEntityIOOutput
            public const nint m_OnHealthChanged = 0xAC8; // CEntityOutputTemplate<float32,float32>
            public const nint m_OnTakeDamage = 0xAE8; // CEntityIOOutput
            public const nint m_impactEnergyScale = 0xB00; // float32
            public const nint m_iMinHealthDmg = 0xB04; // int32
            public const nint m_preferredCarryAngles = 0xB08; // QAngle
            public const nint m_flPressureDelay = 0xB14; // float32
            public const nint m_flDefBurstScale = 0xB18; // float32
            public const nint m_vDefBurstOffset = 0xB1C; // Vector
            public const nint m_hBreaker = 0xB28; // CHandle<CBaseEntity>
            public const nint m_PerformanceMode = 0xB2C; // PerformanceMode_t
            public const nint m_flPreventDamageBeforeTime = 0xB30; // GameTime_t
            public const nint m_BreakableContentsType = 0xB34; // BreakableContentsType_t
            public const nint m_strBreakableContentsPropGroupOverride = 0xB38; // CUtlString
            public const nint m_strBreakableContentsParticleOverride = 0xB40; // CUtlString
            public const nint m_bHasBreakPiecesOrCommands = 0xB48; // bool
            public const nint m_explodeDamage = 0xB4C; // float32
            public const nint m_explodeRadius = 0xB50; // float32
            public const nint m_nExplosionType = 0xB54; // BaseExplosionTypes_t
            public const nint m_explosionDelay = 0xB58; // float32
            public const nint m_explosionBuildupSound = 0xB60; // CUtlSymbolLarge
            public const nint m_explosionCustomEffect = 0xB68; // CUtlSymbolLarge
            public const nint m_explosionCustomSound = 0xB70; // CUtlSymbolLarge
            public const nint m_explosionModifier = 0xB78; // CUtlSymbolLarge
            public const nint m_hPhysicsAttacker = 0xB80; // CHandle<CBasePlayerPawn>
            public const nint m_flLastPhysicsInfluenceTime = 0xB84; // GameTime_t
            public const nint m_flDefaultFadeScale = 0xB88; // float32
            public const nint m_hLastAttacker = 0xB8C; // CHandle<CBaseEntity>
            public const nint m_iszPuntSound = 0xB90; // CUtlSymbolLarge
            public const nint m_bUsePuntSound = 0xB98; // bool
            public const nint m_bOriginalBlockLOS = 0xB99; // bool
        }
        // Parent: CBaseModelEntity
        // Field count: 1
        //
        // Metadata:
        // NetworkVarNames: m_CLightComponent (CLightComponent::Storage_t)
        public static class CLightEntity {
            public const nint m_CLightComponent = 0x730; // CLightComponent*
        }
        // Parent: CInfoDynamicShadowHint
        // Field count: 2
        public static class CInfoDynamicShadowHintBox {
            public const nint m_vBoxMins = 0x4C0; // Vector
            public const nint m_vBoxMaxs = 0x4CC; // Vector
        }
        // Parent: CSkeletonAnimationController
        // Field count: 31
        //
        // Metadata:
        // NetworkVarNames: m_nAnimationAlgorithm (AnimationAlgorithm_t)
        // NetworkVarNames: m_animGraphNetworkedVars (CAnimGraphNetworkedVariables)
        // NetworkVarNames: m_vecSecondarySkeletons (CHandle<CBaseAnimGraph>)
        // NetworkVarNames: m_nSecondarySkeletonMasterCount (int)
        // NetworkVarNames: m_hSequence (HSequence)
        // NetworkVarNames: m_flSeqStartTime (GameTime_t)
        // NetworkVarNames: m_flSeqFixedCycle (float)
        // NetworkVarNames: m_nAnimLoopMode (AnimLoopMode_t)
        // NetworkVarNames: m_flPlaybackRate (CNetworkedQuantizedFloat)
        // NetworkVarNames: m_hGraphDefinitionAG2 (HNmGraphDefinitionStrong)
        // NetworkVarNames: m_serializedPoseRecipeAG2 (uint8)
        // NetworkVarNames: m_nSerializePoseRecipeSizeAG2 (int)
        // NetworkVarNames: m_nSerializePoseRecipeVersionAG2 (int)
        // NetworkVarNames: m_nServerGraphInstanceIteration (int)
        // NetworkVarNames: m_nServerSerializationContextIteration (int)
        // NetworkVarNames: m_primaryGraphId (ResourceId_t)
        // NetworkVarNames: m_vecExternalGraphIds (ResourceId_t)
        // NetworkVarNames: m_vecExternalClipIds (ResourceId_t)
        public static class CBaseAnimGraphController {
            public const nint m_nAnimationAlgorithm = 0x18; // AnimationAlgorithm_t
            public const nint m_animGraphNetworkedVars = 0x20; // CAnimGraphNetworkedVariables
            public const nint m_pAnimGraphInstance = 0x228; // CSmartPtr<IAnimationGraphInstance>
            public const nint m_nNextExternalGraphHandle = 0x288; // ExternalAnimGraphHandle_t
            public const nint m_vecSecondarySkeletonNames = 0x290; // CUtlVector<CGlobalSymbol>
            public const nint m_vecSecondarySkeletons = 0x2A8; // CNetworkUtlVectorBase<CHandle<CBaseAnimGraph>>
            public const nint m_nSecondarySkeletonMasterCount = 0x2C0; // int32
            public const nint m_flSoundSyncTime = 0x2C4; // float32
            public const nint m_nActiveIKChainMask = 0x2C8; // uint32
            public const nint m_hSequence = 0x2CC; // HSequence
            public const nint m_flSeqStartTime = 0x2D0; // GameTime_t
            public const nint m_flSeqFixedCycle = 0x2D4; // float32
            public const nint m_nAnimLoopMode = 0x2D8; // AnimLoopMode_t
            public const nint m_flPlaybackRate = 0x2DC; // CNetworkedQuantizedFloat
            public const nint m_nNotifyState = 0x2E8; // SequenceFinishNotifyState_t
            public const nint m_bNetworkedAnimationInputsChanged = 0x2E9; // bool
            public const nint m_bNetworkedSequenceChanged = 0x2EA; // bool
            public const nint m_bLastUpdateSkipped = 0x2EB; // bool
            public const nint m_bSequenceFinished = 0x2EC; // bool
            public const nint m_nPrevAnimUpdateTick = 0x2F0; // GameTick_t
            public const nint m_hGraphDefinitionAG2 = 0x590; // CStrongHandle<InfoForResourceTypeCNmGraphDefinition>
            public const nint m_serializedPoseRecipeAG2 = 0x598; // CNetworkUtlVectorBase<uint8>
            public const nint m_nSerializePoseRecipeSizeAG2 = 0x5B0; // int32
            public const nint m_nSerializePoseRecipeVersionAG2 = 0x5B4; // int32
            public const nint m_nServerGraphInstanceIteration = 0x5B8; // int32
            public const nint m_nServerSerializationContextIteration = 0x5BC; // int32
            public const nint m_primaryGraphId = 0x5C0; // ResourceId_t
            public const nint m_vecExternalGraphIds = 0x5C8; // CNetworkUtlVectorBase<ResourceId_t>
            public const nint m_vecExternalClipIds = 0x5E0; // CNetworkUtlVectorBase<ResourceId_t>
            public const nint m_sAnimGraph2Identifier = 0x5F8; // CGlobalSymbol
            public const nint m_vecExternalGraphs = 0x820; // CUtlVector<ExternalAnimGraph_t>
        }
        // Parent: 
        // Field count: 10
        public static class CBuoyancyHelper {
            public const nint m_nFluidType = 0x18; // CUtlStringToken
            public const nint m_flFluidDensity = 0x1C; // float32
            public const nint m_flNeutrallyBuoyantGravity = 0x20; // float32
            public const nint m_flNeutrallyBuoyantLinearDamping = 0x24; // float32
            public const nint m_flNeutrallyBuoyantAngularDamping = 0x28; // float32
            public const nint m_bNeutrallyBuoyant = 0x2C; // bool
            public const nint m_vecFractionOfWheelSubmergedForWheelFriction = 0x30; // CUtlVector<float32>
            public const nint m_vecWheelFrictionScales = 0x48; // CUtlVector<float32>
            public const nint m_vecFractionOfWheelSubmergedForWheelDrag = 0x60; // CUtlVector<float32>
            public const nint m_vecWheelDrag = 0x78; // CUtlVector<float32>
        }
        // Parent: CDynamicProp
        // Field count: 1
        public static class COrnamentProp {
            public const nint m_initialOwner = 0xC50; // CUtlSymbolLarge
        }
        // Parent: CCSPlayerBase_CameraServices
        // Field count: 0
        public static class CCSPlayer_CameraServices {
        }
        // Parent: CBaseModelEntity
        // Field count: 0
        public static class CModelPointEntity {
        }
        // Parent: CBarnLight
        // Field count: 1
        //
        // Metadata:
        // NetworkVarNames: m_bShowLight (bool)
        public static class CRectLight {
            public const nint m_bShowLight = 0xA20; // bool
        }
        // Parent: CBaseFilter
        // Field count: 3
        public static class CFilterMultiple {
            public const nint m_nFilterType = 0x4E0; // filter_t
            public const nint m_iFilterName = 0x4E8; // CUtlSymbolLarge[10]
            public const nint m_hFilter = 0x538; // CHandle<CBaseEntity>[10]
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
            public const nint m_bHostageAlive = 0x4A8; // bool[12]
            public const nint m_isHostageFollowingSomeone = 0x4B4; // bool[12]
            public const nint m_iHostageEntityIDs = 0x4C0; // CEntityIndex[12]
            public const nint m_bombsiteCenterA = 0x4F0; // Vector
            public const nint m_bombsiteCenterB = 0x4FC; // Vector
            public const nint m_hostageRescueX = 0x508; // int32[4]
            public const nint m_hostageRescueY = 0x518; // int32[4]
            public const nint m_hostageRescueZ = 0x528; // int32[4]
            public const nint m_bEndMatchNextMapAllVoted = 0x538; // bool
            public const nint m_foundGoalPositions = 0x539; // bool
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_FireCursors {
            public const nint m_Outflows = 0x48; // CUtlVector<CPulse_OutflowConnection>
            public const nint m_bWaitForChildOutflows = 0x60; // bool
            public const nint m_OnFinished = 0x68; // CPulse_ResumePoint
            public const nint m_OnCanceled = 0xB0; // CPulse_ResumePoint
        }
        // Parent: CBaseModelEntity
        // Field count: 2
        public static class CFuncNavBlocker {
            public const nint m_bDisabled = 0x738; // bool
            public const nint m_nBlockedTeamNumber = 0x73C; // int32
        }
        // Parent: CPathNode
        // Field count: 5
        public static class CMoverPathNode {
            public const nint m_OnStartFromOrInSegment = 0x500; // CEntityOutputTemplate<CUtlString,char*>
            public const nint m_OnStoppedAtOrInSegment = 0x520; // CEntityOutputTemplate<CUtlString,char*>
            public const nint m_OnPassThrough = 0x540; // CEntityOutputTemplate<CUtlString,char*>
            public const nint m_OnPassThroughForward = 0x560; // CEntityOutputTemplate<CUtlString,char*>
            public const nint m_OnPassThroughReverse = 0x580; // CEntityOutputTemplate<CUtlString,char*>
        }
        // Parent: CBaseEntity
        // Field count: 11
        public static class CEnvSoundscape {
            public const nint m_OnPlay = 0x4A8; // CEntityIOOutput
            public const nint m_flRadius = 0x4C0; // float32
            public const nint m_soundEventName = 0x4C8; // CUtlSymbolLarge
            public const nint m_bOverrideWithEvent = 0x4D0; // bool
            public const nint m_soundscapeIndex = 0x4D4; // int32
            public const nint m_soundscapeEntityListId = 0x4D8; // int32
            public const nint m_positionNames = 0x4E0; // CUtlSymbolLarge[8]
            public const nint m_hProxySoundscape = 0x520; // CHandle<CEnvSoundscape>
            public const nint m_bDisabled = 0x524; // bool
            public const nint m_soundscapeName = 0x528; // CUtlSymbolLarge
            public const nint m_soundEventHash = 0x530; // uint32
        }
        // Parent: CBaseModelEntity
        // Field count: 6
        public static class CFuncBrush {
            public const nint m_iSolidity = 0x730; // BrushSolidities_e
            public const nint m_iDisabled = 0x734; // int32
            public const nint m_bSolidBsp = 0x738; // bool
            public const nint m_iszExcludedClass = 0x740; // CUtlSymbolLarge
            public const nint m_bInvertExclusion = 0x748; // bool
            public const nint m_bScriptedMovement = 0x749; // bool
        }
        // Parent: CBodyComponent
        // Field count: 1
        //
        // Metadata:
        // NetworkVarNames: m_sceneNode (CGameSceneNode)
        public static class CBodyComponentPoint {
            public const nint m_sceneNode = 0x80; // CGameSceneNode
        }
        // Parent: CBreakable
        // Field count: 15
        public static class CPhysBox {
            public const nint m_damageType = 0x808; // int32
            public const nint m_damageToEnableMotion = 0x80C; // int32
            public const nint m_flForceToEnableMotion = 0x810; // float32
            public const nint m_vHoverPosePosition = 0x814; // Vector
            public const nint m_angHoverPoseAngles = 0x820; // QAngle
            public const nint m_bNotSolidToWorld = 0x82C; // bool
            public const nint m_bEnableUseOutput = 0x82D; // bool
            public const nint m_nHoverPoseFlags = 0x82E; // HoverPoseFlags_t
            public const nint m_flTouchOutputPerEntityDelay = 0x830; // float32
            public const nint m_OnDamaged = 0x838; // CEntityIOOutput
            public const nint m_OnAwakened = 0x850; // CEntityIOOutput
            public const nint m_OnMotionEnabled = 0x868; // CEntityIOOutput
            public const nint m_OnPlayerUse = 0x880; // CEntityIOOutput
            public const nint m_OnStartTouch = 0x898; // CEntityIOOutput
            public const nint m_hCarryingPlayer = 0x8B0; // CHandle<CBasePlayerPawn>
        }
        // Parent: CSoundEventEntity
        // Field count: 2
        //
        // Metadata:
        // NetworkVarNames: m_vMins (Vector)
        // NetworkVarNames: m_vMaxs (Vector)
        public static class CSoundEventAABBEntity {
            public const nint m_vMins = 0x558; // Vector
            public const nint m_vMaxs = 0x564; // Vector
        }
        // Parent: CBaseAnimGraph
        // Field count: 0
        public static class CItemSoda {
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Timeline__TimelineEvent_t {
            public const nint m_flTimeFromPrevious = 0x0; // float32
            public const nint m_EventOutflow = 0x8; // CPulse_OutflowConnection
        }
        // Parent: CBarnLight
        // Field count: 3
        //
        // Metadata:
        // NetworkVarNames: m_flInnerAngle (float)
        // NetworkVarNames: m_flOuterAngle (float)
        // NetworkVarNames: m_bShowLight (bool)
        public static class COmniLight {
            public const nint m_flInnerAngle = 0xA20; // float32
            public const nint m_flOuterAngle = 0xA24; // float32
            public const nint m_bShowLight = 0xA28; // bool
        }
        // Parent: CBaseModelEntity
        // Field count: 2
        public static class CTriggerVolume {
            public const nint m_iFilterName = 0x730; // CUtlSymbolLarge
            public const nint m_hFilter = 0x738; // CHandle<CBaseFilter>
        }
        // Parent: None
        // Field count: 1
        public static class CBtNodeCondition {
            public const nint m_bNegated = 0x58; // bool
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_IntervalTimer__CursorState_t {
            public const nint m_StartTime = 0x0; // GameTime_t
            public const nint m_EndTime = 0x4; // GameTime_t
            public const nint m_flWaitInterval = 0x8; // float32
            public const nint m_flWaitIntervalHigh = 0xC; // float32
            public const nint m_bCompleteOnNextWake = 0x10; // bool
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_BaseRequirement {
        }
        // Parent: CModelPointEntity
        // Field count: 15
        public static class CEnvExplosion {
            public const nint m_iMagnitude = 0x730; // int32
            public const nint m_flPlayerDamage = 0x734; // float32
            public const nint m_iRadiusOverride = 0x738; // int32
            public const nint m_flInnerRadius = 0x73C; // float32
            public const nint m_flDamageForce = 0x740; // float32
            public const nint m_hInflictor = 0x744; // CHandle<CBaseEntity>
            public const nint m_iCustomDamageType = 0x748; // DamageTypes_t
            public const nint m_bCreateDebris = 0x74C; // bool
            public const nint m_iszCustomEffectName = 0x758; // CUtlSymbolLarge
            public const nint m_iszCustomSoundName = 0x760; // CUtlSymbolLarge
            public const nint m_bSuppressParticleImpulse = 0x768; // bool
            public const nint m_iClassIgnore = 0x76C; // Class_T
            public const nint m_iClassIgnore2 = 0x770; // Class_T
            public const nint m_iszEntityIgnoreName = 0x778; // CUtlSymbolLarge
            public const nint m_hEntityIgnore = 0x780; // CHandle<CBaseEntity>
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPulseEditorHeaderIcon
        public static class CPulseCell_BaseState {
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class OutflowWithRequirements_t {
            public const nint m_Connection = 0x0; // CPulse_OutflowConnection
            public const nint m_DestinationFlowNodeID = 0x48; // PulseDocNodeID_t
            public const nint m_RequirementNodeIDs = 0x50; // CUtlVector<PulseDocNodeID_t>
            public const nint m_nCursorStateBlockIndex = 0x68; // CUtlVector<int32>
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_IsRequirementValid {
        }
        // Parent: CBaseTrigger
        // Field count: 2
        //
        // Metadata:
        // NetworkVarNames: m_source (string_t)
        // NetworkVarNames: m_destination (string_t)
        public static class CFootstepControl {
            public const nint m_source = 0x890; // CUtlSymbolLarge
            public const nint m_destination = 0x898; // CUtlSymbolLarge
        }
        // Parent: CPlayer_ItemServices
        // Field count: 2
        //
        // Metadata:
        // NetworkVarNames: m_bHasDefuser (bool)
        // NetworkVarNames: m_bHasHelmet (bool)
        public static class CCSPlayer_ItemServices {
            public const nint m_bHasDefuser = 0x48; // bool
            public const nint m_bHasHelmet = 0x49; // bool
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CPulseCell_Value_Gradient {
            public const nint m_Gradient = 0x48; // CColorGradient
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
            public const nint m_szSnapshotFileName = 0x730; // char[512]
            public const nint m_bActive = 0x930; // bool
            public const nint m_bFrozen = 0x931; // bool
            public const nint m_flFreezeTransitionDuration = 0x934; // float32
            public const nint m_nStopType = 0x938; // int32
            public const nint m_bAnimateDuringGameplayPause = 0x93C; // bool
            public const nint m_iEffectIndex = 0x940; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
            public const nint m_flStartTime = 0x948; // GameTime_t
            public const nint m_flPreSimTime = 0x94C; // float32
            public const nint m_vServerControlPoints = 0x950; // Vector[4]
            public const nint m_iServerControlPointAssignments = 0x980; // uint8[4]
            public const nint m_hControlPointEnts = 0x984; // CHandle<CBaseEntity>[64]
            public const nint m_bNoSave = 0xA84; // bool
            public const nint m_bNoFreeze = 0xA85; // bool
            public const nint m_bNoRamp = 0xA86; // bool
            public const nint m_bStartActive = 0xA87; // bool
            public const nint m_iszEffectName = 0xA88; // CUtlSymbolLarge
            public const nint m_iszControlPointNames = 0xA90; // CUtlSymbolLarge[64]
            public const nint m_nDataCP = 0xC90; // int32
            public const nint m_vecDataCPValue = 0xC94; // Vector
            public const nint m_nTintCP = 0xCA0; // int32
            public const nint m_clrTint = 0xCA4; // Color
        }
        // Parent: CBaseModelEntity
        // Field count: 5
        public static class CTriggerBrush {
            public const nint m_OnStartTouch = 0x730; // CEntityIOOutput
            public const nint m_OnEndTouch = 0x748; // CEntityIOOutput
            public const nint m_OnUse = 0x760; // CEntityIOOutput
            public const nint m_iInputFilter = 0x778; // int32
            public const nint m_iDontMessageParent = 0x77C; // int32
        }
        // Parent: 
        // Field count: 2
        //
        // Metadata:
        // NetworkVarNames: m_timestamp (GameTime_t)
        // NetworkVarNames: m_nWorldGroupId (WorldGroupId_t)
        public static class IntervalTimer {
            public const nint m_timestamp = 0x8; // GameTime_t
            public const nint m_nWorldGroupId = 0xC; // WorldGroupId_t
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
        public static class audioparams_t {
            public const nint localSound = 0x8; // Vector[8]
            public const nint soundscapeIndex = 0x68; // int32
            public const nint localBits = 0x6C; // uint8
            public const nint soundscapeEntityListIndex = 0x70; // int32
            public const nint soundEventHash = 0x74; // uint32
        }
        // Parent: CBaseEntity
        // Field count: 3
        //
        // Metadata:
        // NetworkVarNames: m_bDisabled (bool)
        // NetworkVarNames: m_iszSoundAreaType (string_t)
        // NetworkVarNames: m_vPos (Vector)
        public static class CSoundAreaEntityBase {
            public const nint m_bDisabled = 0x4A8; // bool
            public const nint m_iszSoundAreaType = 0x4B0; // CUtlSymbolLarge
            public const nint m_vPos = 0x4B8; // Vector
        }
        // Parent: CCSWeaponBaseGun
        // Field count: 0
        public static class CWeaponM4A1Silencer {
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
        public static class CTimeline {
            public const nint m_flValues = 0x10; // float32[64]
            public const nint m_nValueCounts = 0x110; // int32[64]
            public const nint m_nBucketCount = 0x210; // int32
            public const nint m_flInterval = 0x214; // float32
            public const nint m_flFinalValue = 0x218; // float32
            public const nint m_nCompressionType = 0x21C; // TimelineCompression_t
            public const nint m_bStopped = 0x220; // bool
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MPropertyDescription
        public static class CPulseCursorFuncs {
        }
        // Parent: 
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
        // MGetKV3ClassDefaults
        public static class PulseNodeDynamicOutflows_t__DynamicOutflow_t {
            public const nint m_OutflowID = 0x0; // CGlobalSymbol
            public const nint m_Connection = 0x8; // CPulse_OutflowConnection
        }
        // Parent: CItem
        // Field count: 0
        public static class CItemAssaultSuit {
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
        public static class CBeam {
            public const nint m_flFrameRate = 0x730; // float32
            public const nint m_flHDRColorScale = 0x734; // float32
            public const nint m_flFireTime = 0x738; // GameTime_t
            public const nint m_flDamage = 0x73C; // float32
            public const nint m_nNumBeamEnts = 0x740; // uint8
            public const nint m_hBaseMaterial = 0x748; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_nHaloIndex = 0x750; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_nBeamType = 0x758; // BeamType_t
            public const nint m_nBeamFlags = 0x75C; // uint32
            public const nint m_hAttachEntity = 0x760; // CHandle<CBaseEntity>[10]
            public const nint m_nAttachIndex = 0x788; // AttachmentHandle_t[10]
            public const nint m_fWidth = 0x794; // float32
            public const nint m_fEndWidth = 0x798; // float32
            public const nint m_fFadeLength = 0x79C; // float32
            public const nint m_fHaloScale = 0x7A0; // float32
            public const nint m_fAmplitude = 0x7A4; // float32
            public const nint m_fStartFrame = 0x7A8; // float32
            public const nint m_fSpeed = 0x7AC; // float32
            public const nint m_flFrame = 0x7B0; // float32
            public const nint m_nClipStyle = 0x7B4; // BeamClipStyle_t
            public const nint m_bTurnedOff = 0x7B8; // bool
            public const nint m_vecEndPos = 0x7BC; // VectorWS
            public const nint m_hEndEntity = 0x7C8; // CHandle<CBaseEntity>
            public const nint m_nDissolveType = 0x7CC; // int32
        }
        // Parent: CLogicalEntity
        // Field count: 4
        public static class CLogicEventListener {
            public const nint m_strEventName = 0x4B8; // CUtlString
            public const nint m_bIsEnabled = 0x4C0; // bool
            public const nint m_nTeam = 0x4C4; // int32
            public const nint m_OnEventFired = 0x4C8; // CEntityOutputTemplate<CUtlString,char*>
        }
        // Parent: CCSGO_TeamSelectCharacterPosition
        // Field count: 0
        public static class CCSGO_TeamSelectTerroristPosition {
        }
        // Parent: CServerOnlyEntity
        // Field count: 0
        public static class CInfoData {
        }
        // Parent: CCSWeaponBaseGun
        // Field count: 0
        public static class CWeaponNegev {
        }
        // Parent: CCSWeaponBaseGun
        // Field count: 0
        public static class CWeaponElite {
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
        public static class CBasePlayerPawn {
            public const nint m_pWeaponServices = 0xB70; // CPlayer_WeaponServices*
            public const nint m_pItemServices = 0xB78; // CPlayer_ItemServices*
            public const nint m_pAutoaimServices = 0xB80; // CPlayer_AutoaimServices*
            public const nint m_pObserverServices = 0xB88; // CPlayer_ObserverServices*
            public const nint m_pWaterServices = 0xB90; // CPlayer_WaterServices*
            public const nint m_pUseServices = 0xB98; // CPlayer_UseServices*
            public const nint m_pFlashlightServices = 0xBA0; // CPlayer_FlashlightServices*
            public const nint m_pCameraServices = 0xBA8; // CPlayer_CameraServices*
            public const nint m_pMovementServices = 0xBB0; // CPlayer_MovementServices*
            public const nint m_ServerViewAngleChanges = 0xBC0; // CUtlVectorEmbeddedNetworkVar<ViewAngleServerChange_t>
            public const nint v_angle = 0xC28; // QAngle
            public const nint v_anglePrevious = 0xC34; // QAngle
            public const nint m_iHideHUD = 0xC40; // uint32
            public const nint m_skybox3d = 0xC48; // sky3dparams_t
            public const nint m_fTimeLastHurt = 0xCD8; // GameTime_t
            public const nint m_flDeathTime = 0xCDC; // GameTime_t
            public const nint m_fNextSuicideTime = 0xCE0; // GameTime_t
            public const nint m_fInitHUD = 0xCE4; // bool
            public const nint m_pExpresser = 0xCE8; // CAI_Expresser*
            public const nint m_hController = 0xCF0; // CHandle<CBasePlayerController>
            public const nint m_hDefaultController = 0xCF4; // CHandle<CBasePlayerController>
            public const nint m_fHltvReplayDelay = 0xCFC; // float32
            public const nint m_fHltvReplayEnd = 0xD00; // float32
            public const nint m_iHltvReplayEntity = 0xD04; // CEntityIndex
            public const nint m_sndOpvarLatchData = 0xD08; // CUtlVector<sndopvarlatchdata_t>
        }
        // Parent: 
        // Field count: 2
        //
        // Metadata:
        // NetworkVarNames: m_nItemDefIndex (uint16)
        // NetworkVarNames: m_nCount (uint16)
        public static class WeaponPurchaseCount_t {
            public const nint m_nItemDefIndex = 0x30; // uint16
            public const nint m_nCount = 0x32; // uint16
        }
        // Parent: None
        // Field count: 0
        public static class CBasePulseGraphInstance {
        }
        // Parent: CBaseFilter
        // Field count: 3
        public static class FilterHealth {
            public const nint m_bAdrenalineActive = 0x4E0; // bool
            public const nint m_iHealthMin = 0x4E4; // int32
            public const nint m_iHealthMax = 0x4E8; // int32
        }
        // Parent: CSprite
        // Field count: 0
        public static class CCSSprite {
        }
        // Parent: CLogicalEntity
        // Field count: 5
        public static class CMathColorBlend {
            public const nint m_flInMin = 0x4A8; // float32
            public const nint m_flInMax = 0x4AC; // float32
            public const nint m_OutColor1 = 0x4B0; // Color
            public const nint m_OutColor2 = 0x4B4; // Color
            public const nint m_OutValue = 0x4B8; // CEntityOutputTemplate<Color,Color>
        }
        // Parent: CModelPointEntity
        // Field count: 0
        public static class CShower {
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Inflow_GraphHook {
            public const nint m_HookName = 0x80; // PulseSymbol_t
        }
        // Parent: CFuncNavBlocker
        // Field count: 1
        public static class CScriptNavBlocker {
            public const nint m_vExtent = 0x748; // Vector
        }
        // Parent: CBaseModelEntity
        // Field count: 0
        public static class CEntityBlocker {
        }
        // Parent: None
        // Field count: 0
        public static class SignatureOutflow_Resume {
        }
        // Parent: None
        // Field count: 0
        public static class CPathSimpleAPI {
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
        public static class CCSObserverPawn {
        }
        // Parent: CBaseTrigger
        // Field count: 2
        public static class CTriggerActiveWeaponDetect {
            public const nint m_OnTouchedActiveWeapon = 0x890; // CEntityIOOutput
            public const nint m_iszWeaponClassName = 0x8A8; // CUtlSymbolLarge
        }
        // Parent: CFuncLadder
        // Field count: 0
        public static class CFuncLadderAlias_func_useableladder {
        }
        // Parent: CSprite
        // Field count: 0
        public static class CSpriteOriented {
        }
        // Parent: CPointEntity
        // Field count: 0
        public static class CPointServerCommand {
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
            public const nint m_nUniqueID = 0x730; // int32
            public const nint m_unAccountID = 0x734; // uint32
            public const nint m_unTraceID = 0x738; // uint32
            public const nint m_rtGcTime = 0x73C; // uint32
            public const nint m_vecEndPos = 0x740; // Vector
            public const nint m_vecStart = 0x74C; // Vector
            public const nint m_vecLeft = 0x758; // Vector
            public const nint m_vecNormal = 0x764; // Vector
            public const nint m_nPlayer = 0x770; // int32
            public const nint m_nEntity = 0x774; // int32
            public const nint m_nHitbox = 0x778; // int32
            public const nint m_flCreationTime = 0x77C; // float32
            public const nint m_nTintID = 0x780; // int32
            public const nint m_nVersion = 0x784; // uint8
            public const nint m_ubSignature = 0x785; // uint8[128]
        }
        // Parent: CBaseModelEntity
        // Field count: 1
        public static class CFuncWater {
            public const nint m_BuoyancyHelper = 0x730; // CBuoyancyHelper
        }
        // Parent: None
        // Field count: 1
        public static class CCSGameModeRules {
            public const nint __m_pChainEntity = 0x8; // CNetworkVarChainer
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
            public const nint m_AttributeManager = 0xAC0; // CAttributeContainer
            public const nint m_OriginalOwnerXuidLow = 0xDB8; // uint32
            public const nint m_OriginalOwnerXuidHigh = 0xDBC; // uint32
            public const nint m_nFallbackPaintKit = 0xDC0; // int32
            public const nint m_nFallbackSeed = 0xDC4; // int32
            public const nint m_flFallbackWear = 0xDC8; // float32
            public const nint m_nFallbackStatTrak = 0xDCC; // int32
            public const nint m_hOldProvidee = 0xDD0; // CHandle<CBaseEntity>
            public const nint m_iOldOwnerClass = 0xDD4; // int32
        }
        // Parent: CPointEntity
        // Field count: 2
        public static class CTankTargetChange {
            public const nint m_newTarget = 0x4A8; // CVariantBase<CVariantDefaultAllocator>
            public const nint m_newTargetName = 0x4B8; // CUtlSymbolLarge
        }
        // Parent: CPlayer_WaterServices
        // Field count: 6
        public static class CCSPlayer_WaterServices {
            public const nint m_NextDrownDamageTime = 0x48; // GameTime_t
            public const nint m_nDrownDmgRate = 0x4C; // int32
            public const nint m_AirFinishedTime = 0x50; // GameTime_t
            public const nint m_flWaterJumpTime = 0x54; // float32
            public const nint m_vecWaterJumpVel = 0x58; // Vector
            public const nint m_flSwimSoundTime = 0x64; // float32
        }
        // Parent: CLogicalEntity
        // Field count: 7
        public static class CLogicDistanceCheck {
            public const nint m_iszEntityA = 0x4A8; // CUtlSymbolLarge
            public const nint m_iszEntityB = 0x4B0; // CUtlSymbolLarge
            public const nint m_flZone1Distance = 0x4B8; // float32
            public const nint m_flZone2Distance = 0x4BC; // float32
            public const nint m_InZone1 = 0x4C0; // CEntityIOOutput
            public const nint m_InZone2 = 0x4D8; // CEntityIOOutput
            public const nint m_InZone3 = 0x4F0; // CEntityIOOutput
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
        public static class CEnvCombinedLightProbeVolume {
            public const nint m_Entity_Color = 0x1520; // Color
            public const nint m_Entity_flBrightness = 0x1524; // float32
            public const nint m_Entity_hCubemapTexture = 0x1528; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Entity_bCustomCubemapTexture = 0x1530; // bool
            public const nint m_Entity_hLightProbeTexture_AmbientCube = 0x1538; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Entity_hLightProbeTexture_SDF = 0x1540; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Entity_hLightProbeTexture_SH2_DC = 0x1548; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Entity_hLightProbeTexture_SH2_R = 0x1550; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Entity_hLightProbeTexture_SH2_G = 0x1558; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Entity_hLightProbeTexture_SH2_B = 0x1560; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Entity_hLightProbeDirectLightIndicesTexture = 0x1568; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Entity_hLightProbeDirectLightScalarsTexture = 0x1570; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Entity_hLightProbeDirectLightShadowsTexture = 0x1578; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Entity_vBoxMins = 0x1580; // Vector
            public const nint m_Entity_vBoxMaxs = 0x158C; // Vector
            public const nint m_Entity_bMoveable = 0x1598; // bool
            public const nint m_Entity_nHandshake = 0x159C; // int32
            public const nint m_Entity_nEnvCubeMapArrayIndex = 0x15A0; // int32
            public const nint m_Entity_nPriority = 0x15A4; // int32
            public const nint m_Entity_bStartDisabled = 0x15A8; // bool
            public const nint m_Entity_flEdgeFadeDist = 0x15AC; // float32
            public const nint m_Entity_vEdgeFadeDists = 0x15B0; // Vector
            public const nint m_Entity_nLightProbeSizeX = 0x15BC; // int32
            public const nint m_Entity_nLightProbeSizeY = 0x15C0; // int32
            public const nint m_Entity_nLightProbeSizeZ = 0x15C4; // int32
            public const nint m_Entity_nLightProbeAtlasX = 0x15C8; // int32
            public const nint m_Entity_nLightProbeAtlasY = 0x15CC; // int32
            public const nint m_Entity_nLightProbeAtlasZ = 0x15D0; // int32
            public const nint m_Entity_bEnabled = 0x15E9; // bool
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
        // Parent: CLogicalEntity
        // Field count: 6
        public static class CLogicDistanceAutosave {
            public const nint m_iszTargetEntity = 0x4A8; // CUtlSymbolLarge
            public const nint m_flDistanceToPlayer = 0x4B0; // float32
            public const nint m_bForceNewLevelUnit = 0x4B4; // bool
            public const nint m_bCheckCough = 0x4B5; // bool
            public const nint m_bThinkDangerous = 0x4B6; // bool
            public const nint m_flDangerousTime = 0x4B8; // float32
        }
        // Parent: CLogicalEntity
        // Field count: 4
        public static class CLogicBranch {
            public const nint m_bInValue = 0x4A8; // bool
            public const nint m_Listeners = 0x4B0; // CUtlVector<CHandle<CBaseEntity>>
            public const nint m_OnTrue = 0x4C8; // CEntityIOOutput
            public const nint m_OnFalse = 0x4E0; // CEntityIOOutput
        }
        // Parent: None
        // Field count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Outflow_ScriptedSequence {
            public const nint m_szSyncGroup = 0x48; // CUtlString
            public const nint m_nExpectedNumSequencesInSyncGroup = 0x50; // int32
            public const nint m_bEnsureOnNavmeshOnFinish = 0x54; // bool
            public const nint m_bDontTeleportAtEnd = 0x55; // bool
            public const nint m_bDisallowInterrupts = 0x56; // bool
            public const nint m_scriptedSequenceDataMain = 0x58; // PulseScriptedSequenceData_t
            public const nint m_vecAdditionalActors = 0x90; // CUtlVector<PulseScriptedSequenceData_t>
            public const nint m_OnFinished = 0xA8; // CPulse_ResumePoint
            public const nint m_OnCanceled = 0xF0; // CPulse_ResumePoint
            public const nint m_Triggers = 0x138; // CUtlVector<CPulse_OutflowConnection>
        }
        // Parent: CFuncPlatRot
        // Field count: 9
        public static class CFuncTrackChange {
            public const nint m_trackTop = 0x7F8; // CPathTrack*
            public const nint m_trackBottom = 0x800; // CPathTrack*
            public const nint m_train = 0x808; // CFuncTrackTrain*
            public const nint m_trackTopName = 0x810; // CUtlSymbolLarge
            public const nint m_trackBottomName = 0x818; // CUtlSymbolLarge
            public const nint m_trainName = 0x820; // CUtlSymbolLarge
            public const nint m_code = 0x828; // TRAIN_CODE
            public const nint m_targetState = 0x82C; // int32
            public const nint m_use = 0x830; // int32
        }
        // Parent: CBaseModelEntity
        // Field count: 37
        public static class CFuncTrackTrain {
            public const nint m_ppath = 0x730; // CHandle<CPathTrack>
            public const nint m_length = 0x734; // float32
            public const nint m_vPosPrev = 0x738; // Vector
            public const nint m_angPrev = 0x744; // QAngle
            public const nint m_controlMins = 0x750; // Vector
            public const nint m_controlMaxs = 0x75C; // Vector
            public const nint m_lastBlockPos = 0x768; // Vector
            public const nint m_lastBlockTick = 0x774; // int32
            public const nint m_flVolume = 0x778; // float32
            public const nint m_flBank = 0x77C; // float32
            public const nint m_oldSpeed = 0x780; // float32
            public const nint m_flBlockDamage = 0x784; // float32
            public const nint m_height = 0x788; // float32
            public const nint m_maxSpeed = 0x78C; // float32
            public const nint m_dir = 0x790; // float32
            public const nint m_iszSoundMove = 0x798; // CUtlSymbolLarge
            public const nint m_iszSoundMovePing = 0x7A0; // CUtlSymbolLarge
            public const nint m_iszSoundStart = 0x7A8; // CUtlSymbolLarge
            public const nint m_iszSoundStop = 0x7B0; // CUtlSymbolLarge
            public const nint m_strPathTarget = 0x7B8; // CUtlSymbolLarge
            public const nint m_flMoveSoundMinDuration = 0x7C0; // float32
            public const nint m_flMoveSoundMaxDuration = 0x7C4; // float32
            public const nint m_flNextMoveSoundTime = 0x7C8; // GameTime_t
            public const nint m_flMoveSoundMinPitch = 0x7CC; // float32
            public const nint m_flMoveSoundMaxPitch = 0x7D0; // float32
            public const nint m_eOrientationType = 0x7D4; // TrainOrientationType_t
            public const nint m_eVelocityType = 0x7D8; // TrainVelocityType_t
            public const nint m_OnStart = 0x7F0; // CEntityIOOutput
            public const nint m_OnNext = 0x808; // CEntityIOOutput
            public const nint m_OnArrivedAtDestinationNode = 0x820; // CEntityIOOutput
            public const nint m_bManualSpeedChanges = 0x838; // bool
            public const nint m_flDesiredSpeed = 0x83C; // float32
            public const nint m_flSpeedChangeTime = 0x840; // GameTime_t
            public const nint m_flAccelSpeed = 0x844; // float32
            public const nint m_flDecelSpeed = 0x848; // float32
            public const nint m_bAccelToSpeed = 0x84C; // bool
            public const nint m_flNextMPSoundTime = 0x850; // GameTime_t
        }
        // Parent: CPointEntity
        // Field count: 24
        public static class CEnvInstructorHint {
            public const nint m_iszName = 0x4A8; // CUtlSymbolLarge
            public const nint m_iszReplace_Key = 0x4B0; // CUtlSymbolLarge
            public const nint m_iszHintTargetEntity = 0x4B8; // CUtlSymbolLarge
            public const nint m_iTimeout = 0x4C0; // int32
            public const nint m_iDisplayLimit = 0x4C4; // int32
            public const nint m_iszIcon_Onscreen = 0x4C8; // CUtlSymbolLarge
            public const nint m_iszIcon_Offscreen = 0x4D0; // CUtlSymbolLarge
            public const nint m_iszCaption = 0x4D8; // CUtlSymbolLarge
            public const nint m_iszActivatorCaption = 0x4E0; // CUtlSymbolLarge
            public const nint m_Color = 0x4E8; // Color
            public const nint m_fIconOffset = 0x4EC; // float32
            public const nint m_fRange = 0x4F0; // float32
            public const nint m_iPulseOption = 0x4F4; // uint8
            public const nint m_iAlphaOption = 0x4F5; // uint8
            public const nint m_iShakeOption = 0x4F6; // uint8
            public const nint m_bStatic = 0x4F7; // bool
            public const nint m_bNoOffscreen = 0x4F8; // bool
            public const nint m_bForceCaption = 0x4F9; // bool
            public const nint m_iInstanceType = 0x4FC; // int32
            public const nint m_bSuppressRest = 0x500; // bool
            public const nint m_iszBinding = 0x508; // CUtlSymbolLarge
            public const nint m_bAllowNoDrawTarget = 0x510; // bool
            public const nint m_bAutoStart = 0x511; // bool
            public const nint m_bLocalPlayerOnly = 0x512; // bool
        }
        // Parent: CBaseEntity
        // Field count: 1
        //
        // Metadata:
        // NetworkVarNames: m_EnvWindShared (CEnvWindShared)
        public static class CEnvWind {
            public const nint m_EnvWindShared = 0x4A8; // CEnvWindShared
        }
        // Parent: CSoundEventEntity
        // Field count: 7
        //
        // Metadata:
        // NetworkVarNames: m_vecCornerPairsNetworked (SoundeventPathCornerPairNetworked_t)
        public static class CSoundEventPathCornerEntity {
            public const nint m_iszPathCorner = 0x558; // CUtlSymbolLarge
            public const nint m_iCountMax = 0x560; // int32
            public const nint m_flDistanceMax = 0x564; // float32
            public const nint m_flDistMaxSqr = 0x568; // float32
            public const nint m_flDotProductMax = 0x56C; // float32
            public const nint m_bPlaying = 0x570; // bool
            public const nint m_vecCornerPairsNetworked = 0x598; // CNetworkUtlVectorBase<SoundeventPathCornerPairNetworked_t>
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
            public const nint m_iFOV = 0x178; // uint32
            public const nint m_iFOVStart = 0x17C; // uint32
            public const nint m_flFOVTime = 0x180; // GameTime_t
            public const nint m_flFOVRate = 0x184; // float32
            public const nint m_hZoomOwner = 0x188; // CHandle<CBaseEntity>
            public const nint m_hTriggerFogList = 0x190; // CUtlVector<CHandle<CBaseEntity>>
            public const nint m_hLastFogTrigger = 0x1A8; // CHandle<CBaseEntity>
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Inflow_BaseEntrypoint {
            public const nint m_EntryChunk = 0x48; // PulseRuntimeChunkIndex_t
            public const nint m_RegisterMap = 0x50; // PulseRegisterMap_t
        }
        // Parent: CTriggerMultiple
        // Field count: 7
        public static class CDynamicNavConnectionsVolume {
            public const nint m_iszConnectionTarget = 0x8A8; // CUtlSymbolLarge
            public const nint m_vecConnections = 0x8B0; // CUtlVector<DynamicVolumeDef_t>
            public const nint m_sTransitionType = 0x8C8; // CGlobalSymbol
            public const nint m_bConnectionsEnabled = 0x8D0; // bool
            public const nint m_flTargetAreaSearchRadius = 0x8D4; // float32
            public const nint m_flUpdateDistance = 0x8D8; // float32
            public const nint m_flMaxConnectionDistance = 0x8DC; // float32
        }
        // Parent: CBaseAnimGraph
        // Field count: 1
        public static class CConstraintAnchor {
            public const nint m_massScale = 0xA20; // float32
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPulseEditorCanvasItemSpecKV3
        public static class CPulseCell_WaitForCursorsWithTagBase {
            public const nint m_nCursorsAllowedToWait = 0x48; // int32
            public const nint m_WaitComplete = 0x50; // CPulse_ResumePoint
        }
        // Parent: CCSPlayerPawnBase
        // Field count: 121
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
        public static class CCSPlayerPawn {
            public const nint m_pBulletServices = 0xE78; // CCSPlayer_BulletServices*
            public const nint m_pHostageServices = 0xE80; // CCSPlayer_HostageServices*
            public const nint m_pBuyServices = 0xE88; // CCSPlayer_BuyServices*
            public const nint m_pActionTrackingServices = 0xE90; // CCSPlayer_ActionTrackingServices*
            public const nint m_pRadioServices = 0xE98; // CCSPlayer_RadioServices*
            public const nint m_pDamageReactServices = 0xEA0; // CCSPlayer_DamageReactServices*
            public const nint m_nCharacterDefIndex = 0xEA8; // uint16
            public const nint m_bHasFemaleVoice = 0xEAA; // bool
            public const nint m_strVOPrefix = 0xEB0; // CUtlString
            public const nint m_szLastPlaceName = 0xEB8; // char[18]
            public const nint m_bInHostageResetZone = 0xFA8; // bool
            public const nint m_bInBuyZone = 0xFA9; // bool
            public const nint m_TouchingBuyZones = 0xFB0; // CUtlVector<CHandle<CBaseEntity>>
            public const nint m_bWasInBuyZone = 0xFC8; // bool
            public const nint m_bInHostageRescueZone = 0xFC9; // bool
            public const nint m_bInBombZone = 0xFCA; // bool
            public const nint m_bWasInHostageRescueZone = 0xFCB; // bool
            public const nint m_iRetakesOffering = 0xFCC; // int32
            public const nint m_iRetakesOfferingCard = 0xFD0; // int32
            public const nint m_bRetakesHasDefuseKit = 0xFD4; // bool
            public const nint m_bRetakesMVPLastRound = 0xFD5; // bool
            public const nint m_iRetakesMVPBoostItem = 0xFD8; // int32
            public const nint m_RetakesMVPBoostExtraUtility = 0xFDC; // loadout_slot_t
            public const nint m_flHealthShotBoostExpirationTime = 0xFE0; // GameTime_t
            public const nint m_flLandingTimeSeconds = 0xFE4; // float32
            public const nint m_aimPunchAngle = 0xFE8; // QAngle
            public const nint m_aimPunchAngleVel = 0xFF4; // QAngle
            public const nint m_aimPunchTickBase = 0x1000; // GameTick_t
            public const nint m_aimPunchTickFraction = 0x1004; // float32
            public const nint m_aimPunchCache = 0x1008; // CUtlVector<QAngle>
            public const nint m_bIsBuyMenuOpen = 0x1020; // bool
            public const nint m_lastLandTime = 0x16C0; // GameTime_t
            public const nint m_bOnGroundLastTick = 0x16C4; // bool
            public const nint m_iPlayerLocked = 0x16C8; // int32
            public const nint m_flTimeOfLastInjury = 0x16D0; // GameTime_t
            public const nint m_flNextSprayDecalTime = 0x16D4; // GameTime_t
            public const nint m_bNextSprayDecalTimeExpedited = 0x16D8; // bool
            public const nint m_nRagdollDamageBone = 0x16DC; // int32
            public const nint m_vRagdollDamageForce = 0x16E0; // Vector
            public const nint m_vRagdollDamagePosition = 0x16EC; // Vector
            public const nint m_szRagdollDamageWeaponName = 0x16F8; // char[64]
            public const nint m_bRagdollDamageHeadshot = 0x1738; // bool
            public const nint m_vRagdollServerOrigin = 0x173C; // Vector
            public const nint m_EconGloves = 0x1748; // CEconItemView
            public const nint m_nEconGlovesChanged = 0x19F0; // uint8
            public const nint m_qDeathEyeAngles = 0x19F4; // QAngle
            public const nint m_bSkipOneHeadConstraintUpdate = 0x1A00; // bool
            public const nint m_bLeftHanded = 0x1A01; // bool
            public const nint m_fSwitchedHandednessTime = 0x1A04; // GameTime_t
            public const nint m_flViewmodelOffsetX = 0x1A08; // float32
            public const nint m_flViewmodelOffsetY = 0x1A0C; // float32
            public const nint m_flViewmodelOffsetZ = 0x1A10; // float32
            public const nint m_flViewmodelFOV = 0x1A14; // float32
            public const nint m_bIsWalking = 0x1A18; // bool
            public const nint m_fLastGivenDefuserTime = 0x1A1C; // float32
            public const nint m_fLastGivenBombTime = 0x1A20; // float32
            public const nint m_flDealtDamageToEnemyMostRecentTimestamp = 0x1A24; // float32
            public const nint m_iDisplayHistoryBits = 0x1A28; // uint32
            public const nint m_flLastAttackedTeammate = 0x1A2C; // float32
            public const nint m_allowAutoFollowTime = 0x1A30; // GameTime_t
            public const nint m_bResetArmorNextSpawn = 0x1A34; // bool
            public const nint m_nLastKillerIndex = 0x1A38; // CEntityIndex
            public const nint m_entitySpottedState = 0x1A40; // EntitySpottedState_t
            public const nint m_nSpotRules = 0x1A58; // int32
            public const nint m_bIsScoped = 0x1A5C; // bool
            public const nint m_bResumeZoom = 0x1A5D; // bool
            public const nint m_bIsDefusing = 0x1A5E; // bool
            public const nint m_bIsGrabbingHostage = 0x1A5F; // bool
            public const nint m_iBlockingUseActionInProgress = 0x1A60; // CSPlayerBlockingUseAction_t
            public const nint m_flEmitSoundTime = 0x1A64; // GameTime_t
            public const nint m_bInNoDefuseArea = 0x1A68; // bool
            public const nint m_iBombSiteIndex = 0x1A6C; // CEntityIndex
            public const nint m_nWhichBombZone = 0x1A70; // int32
            public const nint m_bInBombZoneTrigger = 0x1A74; // bool
            public const nint m_bWasInBombZoneTrigger = 0x1A75; // bool
            public const nint m_iShotsFired = 0x1A78; // int32
            public const nint m_flFlinchStack = 0x1A7C; // float32
            public const nint m_flVelocityModifier = 0x1A80; // float32
            public const nint m_flHitHeading = 0x1A84; // float32
            public const nint m_nHitBodyPart = 0x1A88; // int32
            public const nint m_vecTotalBulletForce = 0x1A8C; // Vector
            public const nint m_bWaitForNoAttack = 0x1A98; // bool
            public const nint m_ignoreLadderJumpTime = 0x1A9C; // float32
            public const nint m_bKilledByHeadshot = 0x1AA0; // bool
            public const nint m_LastHitBox = 0x1AA4; // int32
            public const nint m_pBot = 0x1AA8; // CCSBot*
            public const nint m_bBotAllowActive = 0x1AB0; // bool
            public const nint m_thirdPersonHeading = 0x1AB4; // QAngle
            public const nint m_flSlopeDropOffset = 0x1AC0; // float32
            public const nint m_flSlopeDropHeight = 0x1AC4; // float32
            public const nint m_vHeadConstraintOffset = 0x1AC8; // Vector
            public const nint m_nLastPickupPriority = 0x1AD4; // int32
            public const nint m_flLastPickupPriorityTime = 0x1AD8; // float32
            public const nint m_ArmorValue = 0x1ADC; // int32
            public const nint m_unCurrentEquipmentValue = 0x1AE0; // uint16
            public const nint m_unRoundStartEquipmentValue = 0x1AE2; // uint16
            public const nint m_unFreezetimeEndEquipmentValue = 0x1AE4; // uint16
            public const nint m_iLastWeaponFireUsercmd = 0x1AE8; // int32
            public const nint m_bIsSpawning = 0x1AEC; // bool
            public const nint m_iDeathFlags = 0x1AF8; // int32
            public const nint m_bHasDeathInfo = 0x1AFC; // bool
            public const nint m_flDeathInfoTime = 0x1B00; // float32
            public const nint m_vecDeathInfoOrigin = 0x1B04; // Vector
            public const nint m_vecPlayerPatchEconIndices = 0x1B10; // uint32[5]
            public const nint m_GunGameImmunityColor = 0x1B24; // Color
            public const nint m_grenadeParameterStashTime = 0x1B28; // GameTime_t
            public const nint m_bGrenadeParametersStashed = 0x1B2C; // bool
            public const nint m_angStashedShootAngles = 0x1B30; // QAngle
            public const nint m_vecStashedGrenadeThrowPosition = 0x1B3C; // Vector
            public const nint m_vecStashedVelocity = 0x1B48; // Vector
            public const nint m_angShootAngleHistory = 0x1B54; // QAngle[2]
            public const nint m_vecThrowPositionHistory = 0x1B6C; // Vector[2]
            public const nint m_vecVelocityHistory = 0x1B84; // Vector[2]
            public const nint m_PredictedDamageTags = 0x1BA0; // CUtlVectorEmbeddedNetworkVar<PredictedDamageTag_t>
            public const nint m_nHighestAppliedDamageTagTick = 0x1C08; // int32
            public const nint m_bCommittingSuicideOnTeamChange = 0x1C0C; // bool
            public const nint m_wasNotKilledNaturally = 0x1C0D; // bool
            public const nint m_fImmuneToGunGameDamageTime = 0x1C10; // GameTime_t
            public const nint m_bGunGameImmunity = 0x1C14; // bool
            public const nint m_fMolotovDamageTime = 0x1C18; // float32
            public const nint m_angEyeAngles = 0x1C1C; // QAngle
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
        public static class CEnvLightProbeVolume {
            public const nint m_Entity_hLightProbeTexture_AmbientCube = 0x14A0; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Entity_hLightProbeTexture_SDF = 0x14A8; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Entity_hLightProbeTexture_SH2_DC = 0x14B0; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Entity_hLightProbeTexture_SH2_R = 0x14B8; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Entity_hLightProbeTexture_SH2_G = 0x14C0; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Entity_hLightProbeTexture_SH2_B = 0x14C8; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Entity_hLightProbeDirectLightIndicesTexture = 0x14D0; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Entity_hLightProbeDirectLightScalarsTexture = 0x14D8; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Entity_hLightProbeDirectLightShadowsTexture = 0x14E0; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Entity_vBoxMins = 0x14E8; // Vector
            public const nint m_Entity_vBoxMaxs = 0x14F4; // Vector
            public const nint m_Entity_bMoveable = 0x1500; // bool
            public const nint m_Entity_nHandshake = 0x1504; // int32
            public const nint m_Entity_nPriority = 0x1508; // int32
            public const nint m_Entity_bStartDisabled = 0x150C; // bool
            public const nint m_Entity_nLightProbeSizeX = 0x1510; // int32
            public const nint m_Entity_nLightProbeSizeY = 0x1514; // int32
            public const nint m_Entity_nLightProbeSizeZ = 0x1518; // int32
            public const nint m_Entity_nLightProbeAtlasX = 0x151C; // int32
            public const nint m_Entity_nLightProbeAtlasY = 0x1520; // int32
            public const nint m_Entity_nLightProbeAtlasZ = 0x1524; // int32
            public const nint m_Entity_bEnabled = 0x1531; // bool
        }
        // Parent: CServerOnlyPointEntity
        // Field count: 3
        public static class SpawnPoint {
            public const nint m_iPriority = 0x4A8; // int32
            public const nint m_bEnabled = 0x4AC; // bool
            public const nint m_nType = 0x4B0; // int32
        }
        // Parent: None
        // Field count: 0
        public static class CFuncMoverAPI {
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
        public static class CGameSceneNode {
            public const nint m_nodeToWorld = 0x10; // CTransformWS
            public const nint m_pOwner = 0x30; // CEntityInstance*
            public const nint m_pParent = 0x38; // CGameSceneNode*
            public const nint m_pChild = 0x40; // CGameSceneNode*
            public const nint m_pNextSibling = 0x48; // CGameSceneNode*
            public const nint m_hParent = 0x78; // CGameSceneNodeHandle
            public const nint m_vecOrigin = 0x88; // CNetworkOriginCellCoordQuantizedVector
            public const nint m_angRotation = 0xC0; // QAngle
            public const nint m_flScale = 0xCC; // float32
            public const nint m_vecAbsOrigin = 0xD0; // VectorWS
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
            public const nint m_hierarchyAttachName = 0x10C; // CUtlStringToken
            public const nint m_flZOffset = 0x110; // float32
            public const nint m_flClientLocalScale = 0x114; // float32
            public const nint m_vRenderOrigin = 0x118; // Vector
        }
        // Parent: CCSWeaponBaseGun
        // Field count: 0
        public static class CWeaponM249 {
        }
        // Parent: CRopeKeyframe
        // Field count: 0
        public static class CRopeKeyframeAlias_move_rope {
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CPulseServerFuncs_Sounds {
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CPulsePhysicsConstraintsFuncs {
        }
        // Parent: CPlayerPawnComponent
        // Field count: 4
        //
        // Metadata:
        // NetworkVarNames: m_iObserverMode (uint8)
        // NetworkVarNames: m_hObserverTarget (CHandle<CBaseEntity>)
        public static class CPlayer_ObserverServices {
            public const nint m_iObserverMode = 0x48; // uint8
            public const nint m_hObserverTarget = 0x4C; // CHandle<CBaseEntity>
            public const nint m_iObserverLastMode = 0x50; // ObserverMode_t
            public const nint m_bForcedObserverMode = 0x54; // bool
        }
        // Parent: CPointEntity
        // Field count: 0
        public static class CLogicScript {
        }
        // Parent: None
        // Field count: 3
        public static class CAttributeManager__cached_attribute_float_t {
            public const nint flIn = 0x0; // float32
            public const nint iAttribHook = 0x8; // CUtlSymbolLarge
            public const nint flOut = 0x10; // float32
        }
        // Parent: None
        // Field count: 6
        public static class CPulseGraphInstance_ServerEntity {
            public const nint m_hOwner = 0x190; // CHandle<CBaseEntity>
            public const nint m_bActivated = 0x194; // bool
            public const nint m_sNameFixupStaticPrefix = 0x198; // CUtlSymbolLarge
            public const nint m_sNameFixupParent = 0x1A0; // CUtlSymbolLarge
            public const nint m_sNameFixupLocal = 0x1A8; // CUtlSymbolLarge
            public const nint m_sProceduralWorldNameForRelays = 0x1B0; // CUtlSymbolLarge
        }
        // Parent: CSceneEntity
        // Field count: 0
        public static class CSceneEntityAlias_logic_choreographed_scene {
        }
        // Parent: CBaseEntity
        // Field count: 4
        //
        // Metadata:
        // NetworkVarNames: m_iCurrentMaxRagdollCount (int8)
        public static class CRagdollManager {
            public const nint m_iCurrentMaxRagdollCount = 0x4A8; // int8
            public const nint m_iMaxRagdollCount = 0x4AC; // int32
            public const nint m_bSaveImportant = 0x4B0; // bool
            public const nint m_bCanTakeDamage = 0x4B1; // bool
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
        public static class CPostProcessingVolume {
            public const nint m_hPostSettings = 0x8A0; // CStrongHandle<InfoForResourceTypeCPostProcessingResource>
            public const nint m_flFadeDuration = 0x8A8; // float32
            public const nint m_flMinLogExposure = 0x8AC; // float32
            public const nint m_flMaxLogExposure = 0x8B0; // float32
            public const nint m_flMinExposure = 0x8B4; // float32
            public const nint m_flMaxExposure = 0x8B8; // float32
            public const nint m_flExposureCompensation = 0x8BC; // float32
            public const nint m_flExposureFadeSpeedUp = 0x8C0; // float32
            public const nint m_flExposureFadeSpeedDown = 0x8C4; // float32
            public const nint m_flTonemapEVSmoothingRange = 0x8C8; // float32
            public const nint m_bMaster = 0x8CC; // bool
            public const nint m_bExposureControl = 0x8CD; // bool
        }
        // Parent: CPointEntity
        // Field count: 3
        public static class CPointProximitySensor {
            public const nint m_bDisabled = 0x4A8; // bool
            public const nint m_hTargetEntity = 0x4AC; // CHandle<CBaseEntity>
            public const nint m_Distance = 0x4B0; // CEntityOutputTemplate<float32,float32>
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulse_InvokeBinding {
            public const nint m_RegisterMap = 0x0; // PulseRegisterMap_t
            public const nint m_FuncName = 0x30; // PulseSymbol_t
            public const nint m_nCellIndex = 0x40; // PulseRuntimeCellIndex_t
            public const nint m_nSrcChunk = 0x44; // PulseRuntimeChunkIndex_t
            public const nint m_nSrcInstruction = 0x48; // int32
        }
        // Parent: CTriggerOnce
        // Field count: 15
        //
        // Metadata:
        // NetworkVarNames: m_bTestOcclusion (bool)
        // NetworkVarNames: m_bTestAllVisibleOcclusion (bool)
        public static class CTriggerLook {
            public const nint m_hLookTarget = 0x8A8; // CHandle<CBaseEntity>
            public const nint m_flFieldOfView = 0x8AC; // float32
            public const nint m_flLookTime = 0x8B0; // float32
            public const nint m_flLookTimeTotal = 0x8B4; // float32
            public const nint m_flLookTimeLast = 0x8B8; // GameTime_t
            public const nint m_flTimeoutDuration = 0x8BC; // float32
            public const nint m_bTimeoutFired = 0x8C0; // bool
            public const nint m_bIsLooking = 0x8C1; // bool
            public const nint m_b2DFOV = 0x8C2; // bool
            public const nint m_bUseVelocity = 0x8C3; // bool
            public const nint m_bTestOcclusion = 0x8C4; // bool
            public const nint m_bTestAllVisibleOcclusion = 0x8C5; // bool
            public const nint m_OnTimeout = 0x8C8; // CEntityIOOutput
            public const nint m_OnStartLook = 0x8E0; // CEntityIOOutput
            public const nint m_OnEndLook = 0x8F8; // CEntityIOOutput
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Outflow_PlayVCD {
            public const nint m_hChoreoScene = 0xF0; // CStrongHandle<InfoForResourceTypeCChoreoSceneResource>
            public const nint m_OnPaused = 0xF8; // CPulse_OutflowConnection
            public const nint m_OnResumed = 0x140; // CPulse_OutflowConnection
        }
        // Parent: None
        // Field count: 0
        public static class CMultiplayRules {
        }
        // Parent: CBaseCSGrenade
        // Field count: 0
        public static class CMolotovGrenade {
        }
        // Parent: CPhysForce
        // Field count: 1
        public static class CPhysTorque {
            public const nint m_axis = 0x508; // VectorWS
        }
        // Parent: CLogicalEntity
        // Field count: 5
        public static class CMultiSource {
            public const nint m_rgEntities = 0x4A8; // CHandle<CBaseEntity>[32]
            public const nint m_rgTriggered = 0x528; // int32[32]
            public const nint m_OnTrigger = 0x5A8; // CEntityIOOutput
            public const nint m_iTotal = 0x5C0; // int32
            public const nint m_globalstate = 0x5C8; // CUtlSymbolLarge
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
        public static class CBaseCSGrenade {
            public const nint m_bRedraw = 0x1130; // bool
            public const nint m_bIsHeldByPlayer = 0x1131; // bool
            public const nint m_bPinPulled = 0x1132; // bool
            public const nint m_bJumpThrow = 0x1133; // bool
            public const nint m_bThrowAnimating = 0x1134; // bool
            public const nint m_fThrowTime = 0x1138; // GameTime_t
            public const nint m_flThrowStrength = 0x113C; // float32
            public const nint m_fDropTime = 0x1140; // GameTime_t
            public const nint m_fPinPullTime = 0x1144; // GameTime_t
            public const nint m_bJustPulledPin = 0x1148; // bool
            public const nint m_nNextHoldTick = 0x114C; // GameTick_t
            public const nint m_flNextHoldFrac = 0x1150; // float32
            public const nint m_hSwitchToWeaponAfterThrow = 0x1154; // CHandle<CCSWeaponBase>
        }
        // Parent: CBaseEntity
        // Field count: 11
        public static class CLogicAuto {
            public const nint m_OnMapSpawn = 0x4A8; // CEntityIOOutput
            public const nint m_OnDemoMapSpawn = 0x4C0; // CEntityIOOutput
            public const nint m_OnNewGame = 0x4D8; // CEntityIOOutput
            public const nint m_OnLoadGame = 0x4F0; // CEntityIOOutput
            public const nint m_OnMapTransition = 0x508; // CEntityIOOutput
            public const nint m_OnBackgroundMap = 0x520; // CEntityIOOutput
            public const nint m_OnMultiNewMap = 0x538; // CEntityIOOutput
            public const nint m_OnMultiNewRound = 0x550; // CEntityIOOutput
            public const nint m_OnVREnabled = 0x568; // CEntityIOOutput
            public const nint m_OnVRNotEnabled = 0x580; // CEntityIOOutput
            public const nint m_globalstate = 0x598; // CUtlSymbolLarge
        }
        // Parent: CBaseEntity
        // Field count: 1
        public static class CPhysicsWire {
            public const nint m_nDensity = 0x4A8; // int32
        }
        // Parent: CBaseModelEntity
        // Field count: 0
        public static class CFuncIllusionary {
        }
        // Parent: CPointEntity
        // Field count: 5
        public static class CInfoDynamicShadowHint {
            public const nint m_bDisabled = 0x4A8; // bool
            public const nint m_flRange = 0x4AC; // float32
            public const nint m_nImportance = 0x4B0; // int32
            public const nint m_nLightChoice = 0x4B4; // int32
            public const nint m_hLight = 0x4B8; // CHandle<CBaseEntity>
        }
        // Parent: CBaseModelEntity
        // Field count: 1
        public static class CMarkupVolume {
            public const nint m_bDisabled = 0x730; // bool
        }
        // Parent: CPointEntity
        // Field count: 6
        //
        // Metadata:
        // NetworkVarNames: m_vInTangentLocal (Vector)
        // NetworkVarNames: m_vOutTangentLocal (Vector)
        // NetworkVarNames: m_strParentPathUniqueID (CUtlString)
        // NetworkVarNames: m_strPathNodeParameter (CUtlString)
        public static class CPathNode {
            public const nint m_vInTangentLocal = 0x4A8; // Vector
            public const nint m_vOutTangentLocal = 0x4B4; // Vector
            public const nint m_strParentPathUniqueID = 0x4C0; // CUtlString
            public const nint m_strPathNodeParameter = 0x4C8; // CUtlString
            public const nint m_xWSPrevParent = 0x4D0; // CTransform
            public const nint m_hPath = 0x4F0; // CHandle<CPathWithDynamicNodes>
        }
        // Parent: CCSGO_TeamSelectCharacterPosition
        // Field count: 0
        public static class CCSGO_TeamSelectCounterTerroristPosition {
        }
        // Parent: CBaseTrigger
        // Field count: 1
        public static class CTriggerRemove {
            public const nint m_OnRemove = 0x890; // CEntityIOOutput
        }
        // Parent: CLogicalEntity
        // Field count: 5
        //
        // Metadata:
        // NetworkVarNames: m_bEnabled (bool)
        public static class CLogicGameEventListener {
            public const nint m_OnEventFired = 0x4B8; // CEntityIOOutput
            public const nint m_iszGameEventName = 0x4D0; // CUtlSymbolLarge
            public const nint m_iszGameEventItem = 0x4D8; // CUtlSymbolLarge
            public const nint m_bEnabled = 0x4E0; // bool
            public const nint m_bStartDisabled = 0x4E1; // bool
        }
        // Parent: CBaseModelEntity
        // Field count: 0
        public static class CServerOnlyModelEntity {
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        // MPulseEditorHeaderIcon
        public static class CPulseCell_IntervalTimer {
            public const nint m_Completed = 0x48; // CPulse_ResumePoint
            public const nint m_OnInterval = 0x90; // SignatureOutflow_Continue
        }
        // Parent: CMarkupVolumeTagged
        // Field count: 1
        public static class CMarkupVolumeTagged_Nav {
            public const nint m_nScopes = 0x770; // NavScopeFlags_t
        }
        // Parent: SpawnPoint
        // Field count: 0
        public static class CInfoPlayerTerrorist {
        }
        // Parent: CLogicalEntity
        // Field count: 3
        public static class CLogicAutosave {
            public const nint m_bForceNewLevelUnit = 0x4A8; // bool
            public const nint m_minHitPoints = 0x4AC; // int32
            public const nint m_minHitPointsToCommit = 0x4B0; // int32
        }
        // Parent: CCSGO_TeamIntroCharacterPosition
        // Field count: 0
        public static class CCSGO_TeamIntroTerroristPosition {
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MPropertyDescription
        public static class CPulseTestScriptLib {
        }
        // Parent: None
        // Field count: 1
        public static class CSingleplayRules {
            public const nint m_bSinglePlayerGameEnding = 0xC0; // bool
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
            public const nint m_iInitialWindDir = 0x2A; // uint16
            public const nint m_flInitialWindSpeed = 0x2C; // float32
            public const nint m_location = 0x30; // Vector
            public const nint m_OnGustStart = 0x40; // CEntityIOOutput
            public const nint m_OnGustEnd = 0x58; // CEntityIOOutput
            public const nint m_hEntOwner = 0x70; // CHandle<CBaseEntity>
        }
        // Parent: CServerOnlyPointEntity
        // Field count: 6
        public static class CPointPrefab {
            public const nint m_targetMapName = 0x4A8; // CUtlSymbolLarge
            public const nint m_forceWorldGroupID = 0x4B0; // CUtlSymbolLarge
            public const nint m_associatedRelayTargetName = 0x4B8; // CUtlSymbolLarge
            public const nint m_fixupNames = 0x4C0; // bool
            public const nint m_bLoadDynamic = 0x4C1; // bool
            public const nint m_associatedRelayEntity = 0x4C4; // CHandle<CPointPrefab>
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_BaseLerp {
            public const nint m_WakeResume = 0x48; // CPulse_ResumePoint
        }
        // Parent: CPointEntity
        // Field count: 9
        public static class CEnvInstructorVRHint {
            public const nint m_iszName = 0x4A8; // CUtlSymbolLarge
            public const nint m_iszHintTargetEntity = 0x4B0; // CUtlSymbolLarge
            public const nint m_iTimeout = 0x4B8; // int32
            public const nint m_iszCaption = 0x4C0; // CUtlSymbolLarge
            public const nint m_iszStartSound = 0x4C8; // CUtlSymbolLarge
            public const nint m_iLayoutFileType = 0x4D0; // int32
            public const nint m_iszCustomLayoutFile = 0x4D8; // CUtlSymbolLarge
            public const nint m_iAttachType = 0x4E0; // int32
            public const nint m_flHeightOffset = 0x4E4; // float32
        }
        // Parent: CGameRulesProxy
        // Field count: 1
        //
        // Metadata:
        // NetworkVarNames: m_pGameRules (CCSGameRules*)
        public static class CCSGameRulesProxy {
            public const nint m_pGameRules = 0x4A8; // CCSGameRules*
        }
        // Parent: CBaseTrigger
        // Field count: 0
        public static class CPrecipitation {
        }
        // Parent: CSprite
        // Field count: 0
        public static class CCommentaryViewPosition {
        }
        // Parent: CLogicalEntity
        // Field count: 5
        public static class CEnvGlobal {
            public const nint m_outCounter = 0x4A8; // CEntityOutputTemplate<int32,int32>
            public const nint m_globalstate = 0x4C8; // CUtlSymbolLarge
            public const nint m_triggermode = 0x4D0; // int32
            public const nint m_initialstate = 0x4D4; // int32
            public const nint m_counter = 0x4D8; // int32
        }
        // Parent: CLogicNPCCounterAABB
        // Field count: 0
        public static class CLogicNPCCounterOBB {
        }
        // Parent: CBaseModelEntity
        // Field count: 1
        public static class CPlatTrigger {
            public const nint m_pPlatform = 0x730; // CHandle<CFuncPlat>
        }
        // Parent: CPointEntity
        // Field count: 62
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
            public const nint m_iszSceneFile = 0x4B0; // CUtlSymbolLarge
            public const nint m_iszTarget1 = 0x4B8; // CUtlSymbolLarge
            public const nint m_iszTarget2 = 0x4C0; // CUtlSymbolLarge
            public const nint m_iszTarget3 = 0x4C8; // CUtlSymbolLarge
            public const nint m_iszTarget4 = 0x4D0; // CUtlSymbolLarge
            public const nint m_iszTarget5 = 0x4D8; // CUtlSymbolLarge
            public const nint m_iszTarget6 = 0x4E0; // CUtlSymbolLarge
            public const nint m_iszTarget7 = 0x4E8; // CUtlSymbolLarge
            public const nint m_iszTarget8 = 0x4F0; // CUtlSymbolLarge
            public const nint m_hTarget1 = 0x4F8; // CHandle<CBaseEntity>
            public const nint m_hTarget2 = 0x4FC; // CHandle<CBaseEntity>
            public const nint m_hTarget3 = 0x500; // CHandle<CBaseEntity>
            public const nint m_hTarget4 = 0x504; // CHandle<CBaseEntity>
            public const nint m_hTarget5 = 0x508; // CHandle<CBaseEntity>
            public const nint m_hTarget6 = 0x50C; // CHandle<CBaseEntity>
            public const nint m_hTarget7 = 0x510; // CHandle<CBaseEntity>
            public const nint m_hTarget8 = 0x514; // CHandle<CBaseEntity>
            public const nint m_sTargetAttachment = 0x518; // CUtlSymbolLarge
            public const nint m_bIsPlayingBack = 0x520; // bool
            public const nint m_bPaused = 0x521; // bool
            public const nint m_bMultiplayer = 0x522; // bool
            public const nint m_bAutogenerated = 0x523; // bool
            public const nint m_flForceClientTime = 0x524; // float32
            public const nint m_flCurrentTime = 0x528; // float32
            public const nint m_flFrameTime = 0x52C; // float32
            public const nint m_bCancelAtNextInterrupt = 0x530; // bool
            public const nint m_fPitch = 0x534; // float32
            public const nint m_bAutomated = 0x538; // bool
            public const nint m_nAutomatedAction = 0x53C; // int32
            public const nint m_flAutomationDelay = 0x540; // float32
            public const nint m_flAutomationTime = 0x544; // float32
            public const nint m_nSpeechPriority = 0x548; // int32
            public const nint m_bPausedViaInput = 0x54C; // bool
            public const nint m_bPauseAtNextInterrupt = 0x54D; // bool
            public const nint m_bWaitingForActor = 0x54E; // bool
            public const nint m_bWaitingForInterrupt = 0x54F; // bool
            public const nint m_bInterruptedActorsScenes = 0x550; // bool
            public const nint m_bBreakOnNonIdle = 0x551; // bool
            public const nint m_bSceneFinished = 0x552; // bool
            public const nint m_hActorList = 0x558; // CNetworkUtlVectorBase<CHandle<CBaseFlex>>
            public const nint m_hRemoveActorList = 0x570; // CUtlVector<CHandle<CBaseEntity>>
            public const nint m_nSceneStringIndex = 0x5B8; // uint16
            public const nint m_OnStart = 0x5C0; // CEntityIOOutput
            public const nint m_OnCompletion = 0x5D8; // CEntityIOOutput
            public const nint m_OnCanceled = 0x5F0; // CEntityIOOutput
            public const nint m_OnPaused = 0x608; // CEntityIOOutput
            public const nint m_OnResumed = 0x620; // CEntityIOOutput
            public const nint m_hInterruptScene = 0x6C8; // CHandle<CSceneEntity>
            public const nint m_nInterruptCount = 0x6CC; // int32
            public const nint m_bSceneMissing = 0x6D0; // bool
            public const nint m_bInterrupted = 0x6D1; // bool
            public const nint m_bCompletedEarly = 0x6D2; // bool
            public const nint m_bInterruptSceneFinished = 0x6D3; // bool
            public const nint m_bRestoring = 0x6D4; // bool
            public const nint m_hNotifySceneCompletion = 0x6D8; // CUtlVector<CHandle<CSceneEntity>>
            public const nint m_hListManagers = 0x6F0; // CUtlVector<CHandle<CSceneListManager>>
            public const nint m_iszSoundName = 0x708; // CUtlSymbolLarge
            public const nint m_iszSequenceName = 0x710; // CUtlSymbolLarge
            public const nint m_hActor = 0x718; // CHandle<CBaseFlex>
            public const nint m_hActivator = 0x71C; // CHandle<CBaseEntity>
            public const nint m_BusyActor = 0x720; // int32
            public const nint m_iPlayerDeathBehavior = 0x724; // SceneOnPlayerDeath_t
        }
        // Parent: CPointEntity
        // Field count: 0
        public static class CChoreoInfoTarget {
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
        public static class CTonemapController2 {
            public const nint m_flAutoExposureMin = 0x4A8; // float32
            public const nint m_flAutoExposureMax = 0x4AC; // float32
            public const nint m_flExposureAdaptationSpeedUp = 0x4B0; // float32
            public const nint m_flExposureAdaptationSpeedDown = 0x4B4; // float32
            public const nint m_flTonemapEVSmoothingRange = 0x4B8; // float32
        }
        // Parent: CLogicalEntity
        // Field count: 1
        public static class CMapSharedEnvironment {
            public const nint m_targetMapName = 0x4A8; // CUtlSymbolLarge
        }
        // Parent: 
        // Field count: 8
        //
        // Metadata:
        // NetworkVarNames: m_hSequence (HSequence)
        // NetworkVarNames: m_flPrevCycle (float32)
        // NetworkVarNames: m_flCycle (float32)
        // NetworkVarNames: m_flWeight (CNetworkedQuantizedFloat)
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
        // Parent: CBaseAnimGraph
        // Field count: 12
        public static class CPhysMagnet {
            public const nint m_OnMagnetAttach = 0xA20; // CEntityIOOutput
            public const nint m_OnMagnetDetach = 0xA38; // CEntityIOOutput
            public const nint m_massScale = 0xA50; // float32
            public const nint m_forceLimit = 0xA54; // float32
            public const nint m_torqueLimit = 0xA58; // float32
            public const nint m_MagnettedEntities = 0xA60; // CUtlVector<magnetted_objects_t>
            public const nint m_bActive = 0xA78; // bool
            public const nint m_bHasHitSomething = 0xA79; // bool
            public const nint m_flTotalMass = 0xA7C; // float32
            public const nint m_flRadius = 0xA80; // float32
            public const nint m_flNextSuckTime = 0xA84; // GameTime_t
            public const nint m_iMaxObjectsAttached = 0xA88; // int32
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // NetworkVarNames: m_pEntity (CEntityIdentity*)
        // NetworkVarNames: m_CScriptComponent (CScriptComponent::Storage_t)
        public static class CEntityInstance {
            public const nint m_iszPrivateVScripts = 0x8; // CUtlSymbolLarge
            public const nint m_pEntity = 0x10; // CEntityIdentity*
            public const nint m_CScriptComponent = 0x30; // CScriptComponent*
        }
        // Parent: CBaseEntity
        // Field count: 4
        public static class CGameGibManager {
            public const nint m_bAllowNewGibs = 0x4C0; // bool
            public const nint m_iCurrentMaxPieces = 0x4C4; // int32
            public const nint m_iMaxPieces = 0x4C8; // int32
            public const nint m_iLastFrame = 0x4CC; // int32
        }
        // Parent: CBaseEntity
        // Field count: 0
        public static class CHandleDummy {
        }
        // Parent: CFuncWall
        // Field count: 0
        public static class CFuncWallToggle {
        }
        // Parent: CPlayerPawnComponent
        // Field count: 1
        //
        // Metadata:
        // NetworkVarNames: m_totalHitsOnServer (int32)
        public static class CCSPlayer_BulletServices {
            public const nint m_totalHitsOnServer = 0x48; // int32
        }
        // Parent: CBaseEntity
        // Field count: 4
        //
        // Metadata:
        // NetworkVarNames: m_skyboxData (sky3dparams_t)
        // NetworkVarNames: m_skyboxSlotToken (CUtlStringToken)
        public static class CSkyCamera {
            public const nint m_skyboxData = 0x4A8; // sky3dparams_t
            public const nint m_skyboxSlotToken = 0x538; // CUtlStringToken
            public const nint m_bUseAngles = 0x53C; // bool
            public const nint m_pNext = 0x540; // CSkyCamera*
        }
        // Parent: CPlayerPawnComponent
        // Field count: 0
        public static class CPlayer_AutoaimServices {
        }
        // Parent: CItemDefuser
        // Field count: 0
        public static class CItemDefuserAlias_item_defuser {
        }
        // Parent: CPathCorner
        // Field count: 0
        public static class CPathCornerCrash {
        }
        // Parent: CPhysConstraint
        // Field count: 4
        public static class CPhysPulley {
            public const nint m_position2 = 0x508; // VectorWS
            public const nint m_offset = 0x514; // Vector[2]
            public const nint m_addLength = 0x52C; // float32
            public const nint m_gearRatio = 0x530; // float32
        }
        // Parent: CBaseEntity
        // Field count: 0
        public static class CCSPetPlacement {
        }
        // Parent: CCSWeaponBaseGun
        // Field count: 0
        public static class CWeaponMP5SD {
        }
        // Parent: CCSWeaponBase
        // Field count: 2
        //
        // Metadata:
        // NetworkVarNames: m_bSequenceInProgress (bool)
        // NetworkVarNames: m_bRedraw (bool)
        public static class CWeaponBaseItem {
            public const nint m_bSequenceInProgress = 0x1130; // bool
            public const nint m_bRedraw = 0x1131; // bool
        }
        // Parent: CBaseEntity
        // Field count: 3
        public static class CCommentaryAuto {
            public const nint m_OnCommentaryNewGame = 0x4A8; // CEntityIOOutput
            public const nint m_OnCommentaryMidGame = 0x4C0; // CEntityIOOutput
            public const nint m_OnCommentaryMultiplayerSpawn = 0x4D8; // CEntityIOOutput
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Outflow_ListenForEntityOutput__CursorState_t {
            public const nint m_entity = 0x0; // CHandle<CBaseEntity>
        }
        // Parent: 
        // Field count: 4
        //
        // Metadata:
        // NetworkVarNames: m_Handle (ModelConfigHandle_t)
        // NetworkVarNames: m_Name (string_t)
        // NetworkVarNames: m_AssociatedEntities (CHandle<CBaseModelEntity>)
        // NetworkVarNames: m_AssociatedEntityNames (string_t)
        public static class ActiveModelConfig_t {
            public const nint m_Handle = 0x30; // ModelConfigHandle_t
            public const nint m_Name = 0x38; // CUtlSymbolLarge
            public const nint m_AssociatedEntities = 0x40; // CNetworkUtlVectorBase<CHandle<CBaseModelEntity>>
            public const nint m_AssociatedEntityNames = 0x58; // CNetworkUtlVectorBase<CUtlSymbolLarge>
        }
        // Parent: CCSWeaponBaseGun
        // Field count: 0
        public static class CWeaponUSPSilencer {
        }
        // Parent: CLogicalEntity
        // Field count: 1
        public static class CSoundStackSave {
            public const nint m_iszStackName = 0x4A8; // CUtlSymbolLarge
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CPulseCell_Value_Curve {
            public const nint m_Curve = 0x48; // CPiecewiseCurve
        }
        // Parent: CCSWeaponBaseGun
        // Field count: 0
        public static class CWeaponMag7 {
        }
        // Parent: CLogicalEntity
        // Field count: 9
        public static class CLogicMeasureMovement {
            public const nint m_strMeasureTarget = 0x4A8; // CUtlSymbolLarge
            public const nint m_strMeasureReference = 0x4B0; // CUtlSymbolLarge
            public const nint m_strTargetReference = 0x4B8; // CUtlSymbolLarge
            public const nint m_hMeasureTarget = 0x4C0; // CHandle<CBaseEntity>
            public const nint m_hMeasureReference = 0x4C4; // CHandle<CBaseEntity>
            public const nint m_hTarget = 0x4C8; // CHandle<CBaseEntity>
            public const nint m_hTargetReference = 0x4CC; // CHandle<CBaseEntity>
            public const nint m_flScale = 0x4D0; // float32
            public const nint m_nMeasureType = 0x4D4; // int32
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
            public const nint m_vecLastValidPlayerHeldPosition = 0x1160; // Vector
            public const nint m_vecLastValidDroppedPosition = 0x116C; // Vector
            public const nint m_bDoValidDroppedPositionCheck = 0x1178; // bool
            public const nint m_bStartedArming = 0x1179; // bool
            public const nint m_fArmedTime = 0x117C; // GameTime_t
            public const nint m_bBombPlacedAnimation = 0x1180; // bool
            public const nint m_bIsPlantingViaUse = 0x1181; // bool
            public const nint m_entitySpottedState = 0x1188; // EntitySpottedState_t
            public const nint m_nSpotRules = 0x11A0; // int32
            public const nint m_bPlayedArmingBeeps = 0x11A4; // bool[7]
            public const nint m_bBombPlanted = 0x11AB; // bool
        }
        // Parent: CBaseAnimGraph
        // Field count: 0
        public static class CHostageCarriableProp {
        }
        // Parent: CDynamicProp
        // Field count: 0
        public static class CDynamicPropAlias_cable_dynamic {
        }
        // Parent: CBaseFlex
        // Field count: 0
        public static class CBaseFlexAlias_funCBaseFlex {
        }
        // Parent: CCSPlayerBase_CameraServices
        // Field count: 0
        public static class CCSObserver_CameraServices {
        }
        // Parent: CBaseEntity
        // Field count: 2
        //
        // Metadata:
        // NetworkVarNames: m_flFadeStartDist (float32)
        // NetworkVarNames: m_flFadeEndDist (float32)
        public static class CEnvDetailController {
            public const nint m_flFadeStartDist = 0x4A8; // float32
            public const nint m_flFadeEndDist = 0x4AC; // float32
        }
        // Parent: None
        // Field count: 0
        public static class CTakeDamageInfoAPI {
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
        public static class CCSPlayerPawnBase {
            public const nint m_CTouchExpansionComponent = 0xD30; // CTouchExpansionComponent
            public const nint m_pPingServices = 0xD80; // CCSPlayer_PingServices*
            public const nint m_blindUntilTime = 0xD88; // GameTime_t
            public const nint m_blindStartTime = 0xD8C; // GameTime_t
            public const nint m_iPlayerState = 0xD90; // CSPlayerState
            public const nint m_bRespawning = 0xE40; // bool
            public const nint m_bHasMovedSinceSpawn = 0xE41; // bool
            public const nint m_iNumSpawns = 0xE44; // int32
            public const nint m_flIdleTimeSinceLastAction = 0xE4C; // float32
            public const nint m_fNextRadarUpdateTime = 0xE50; // float32
            public const nint m_flFlashDuration = 0xE54; // float32
            public const nint m_flFlashMaxAlpha = 0xE58; // float32
            public const nint m_flProgressBarStartTime = 0xE5C; // float32
            public const nint m_iProgressBarDuration = 0xE60; // int32
            public const nint m_hOriginalController = 0xE64; // CHandle<CCSPlayerController>
        }
        // Parent: CEnvSoundscape
        // Field count: 1
        public static class CEnvSoundscapeProxy {
            public const nint m_MainSoundscapeName = 0x538; // CUtlSymbolLarge
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Inflow_EventHandler {
            public const nint m_EventName = 0x80; // PulseSymbol_t
        }
        // Parent: CBaseEntity
        // Field count: 0
        public static class CCSPointScriptEntity {
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_BaseFlow {
        }
        // Parent: CBaseTrigger
        // Field count: 9
        //
        // Metadata:
        // NetworkVarNames: m_bBombPlantedHere (bool)
        public static class CBombTarget {
            public const nint m_OnBombExplode = 0x890; // CEntityIOOutput
            public const nint m_OnBombPlanted = 0x8A8; // CEntityIOOutput
            public const nint m_OnBombDefused = 0x8C0; // CEntityIOOutput
            public const nint m_bIsBombSiteB = 0x8D8; // bool
            public const nint m_bIsHeistBombTarget = 0x8D9; // bool
            public const nint m_bBombPlantedHere = 0x8DA; // bool
            public const nint m_szMountTarget = 0x8E0; // CUtlSymbolLarge
            public const nint m_hInstructorHint = 0x8E8; // CHandle<CBaseEntity>
            public const nint m_nBombSiteDesignation = 0x8EC; // int32
        }
        // Parent: CBaseModelEntity
        // Field count: 1
        public static class CRuleEntity {
            public const nint m_iszMaster = 0x730; // CUtlSymbolLarge
        }
        // Parent: CPhysForce
        // Field count: 1
        public static class CPhysThruster {
            public const nint m_localOrigin = 0x508; // Vector
        }
        // Parent: CPointEntity
        // Field count: 3
        public static class CInfoPlayerStart {
            public const nint m_bDisabled = 0x4A8; // bool
            public const nint m_bIsMaster = 0x4A9; // bool
            public const nint m_pPawnSubclass = 0x4B0; // CGlobalSymbol
        }
        // Parent: CBaseEntity
        // Field count: 10
        //
        // Metadata:
        // NetworkVarNames: m_hEntAttached (CHandle<CBaseEntity>)
        // NetworkVarNames: m_bCheapEffect (bool)
        public static class CEntityFlame {
            public const nint m_hEntAttached = 0x4A8; // CHandle<CBaseEntity>
            public const nint m_bCheapEffect = 0x4AC; // bool
            public const nint m_flSize = 0x4B0; // float32
            public const nint m_bUseHitboxes = 0x4B4; // bool
            public const nint m_iNumHitboxFires = 0x4B8; // int32
            public const nint m_flHitboxFireScale = 0x4BC; // float32
            public const nint m_flLifetime = 0x4C0; // GameTime_t
            public const nint m_hAttacker = 0x4C4; // CHandle<CBaseEntity>
            public const nint m_flDirectDamagePerSecond = 0x4C8; // float32
            public const nint m_iCustomDamageType = 0x4CC; // int32
        }
        // Parent: CGameSceneNode
        // Field count: 9
        //
        // Metadata:
        // NetworkVarNames: m_modelState (CModelState)
        // NetworkVarNames: m_bIsAnimationEnabled (bool)
        // NetworkVarNames: m_bUseParentRenderBounds (bool)
        // NetworkVarNames: m_materialGroup (CUtlStringToken)
        // NetworkVarNames: m_nHitboxSet (uint8)
        public static class CSkeletonInstance {
            public const nint m_modelState = 0x140; // CModelState
            public const nint m_bIsAnimationEnabled = 0x390; // bool
            public const nint m_bUseParentRenderBounds = 0x391; // bool
            public const nint m_bDisableSolidCollisionsForHierarchy = 0x392; // bool
            public const nint m_bDirtyMotionType = 0x0; // bitfield:1
            public const nint m_bIsGeneratingLatchedParentSpaceState = 0x0; // bitfield:1
            public const nint m_materialGroup = 0x394; // CUtlStringToken
            public const nint m_nHitboxSet = 0x398; // uint8
            public const nint m_bForceServerConstraintsEnabled = 0x3F4; // bool
        }
        // Parent: 
        // Field count: 0
        public static class CEntityComponent {
        }
        // Parent: CBaseToggle
        // Field count: 5
        public static class CBasePlatTrain {
            public const nint m_NoiseMoving = 0x7B0; // CUtlSymbolLarge
            public const nint m_NoiseArrived = 0x7B8; // CUtlSymbolLarge
            public const nint m_volume = 0x7C8; // float32
            public const nint m_flTWidth = 0x7CC; // float32
            public const nint m_flTLength = 0x7D0; // float32
        }
        // Parent: CServerOnlyPointEntity
        // Field count: 4
        public static class CPointTeleport {
            public const nint m_vSaveOrigin = 0x4A8; // Vector
            public const nint m_vSaveAngles = 0x4B4; // QAngle
            public const nint m_bTeleportParentedEntities = 0x4C0; // bool
            public const nint m_bTeleportUseCurrentAngle = 0x4C1; // bool
        }
        // Parent: CBaseTrigger
        // Field count: 3
        //
        // Metadata:
        // NetworkVarNames: m_strStartTouchEventName (CUtlString)
        // NetworkVarNames: m_strEndTouchEventName (CUtlString)
        // NetworkVarNames: m_strTriggerID (CUtlString)
        public static class CTriggerGameEvent {
            public const nint m_strStartTouchEventName = 0x890; // CUtlString
            public const nint m_strEndTouchEventName = 0x898; // CUtlString
            public const nint m_strTriggerID = 0x8A0; // CUtlString
        }
        // Parent: CPointEntity
        // Field count: 5
        public static class CMessageEntity {
            public const nint m_radius = 0x4A8; // int32
            public const nint m_messageText = 0x4B0; // CUtlSymbolLarge
            public const nint m_drawText = 0x4B8; // bool
            public const nint m_bDeveloperOnly = 0x4B9; // bool
            public const nint m_bEnabled = 0x4BA; // bool
        }
        // Parent: CBaseEntity
        // Field count: 1
        public static class CEnvEntityIgniter {
            public const nint m_flLifetime = 0x4A8; // float32
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Outflow_CycleShuffled__InstanceState_t {
            public const nint m_Shuffle = 0x0; // CUtlVectorFixedGrowable<uint8,8>
            public const nint m_nNextShuffle = 0x20; // int32
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_BaseLerp__CursorState_t {
            public const nint m_StartTime = 0x0; // GameTime_t
            public const nint m_EndTime = 0x4; // GameTime_t
        }
        // Parent: CMarkupVolumeWithRef
        // Field count: 3
        public static class CMarkupVolumeTagged_NavGame {
            public const nint m_nScopes = 0x798; // NavScopeFlags_t
            public const nint m_bFloodFillAttribute = 0x799; // bool
            public const nint m_bSplitNavSpace = 0x79A; // bool
        }
        // Parent: CLogicalEntity
        // Field count: 8
        public static class CMultiLightProxy {
            public const nint m_iszLightNameFilter = 0x4A8; // CUtlSymbolLarge
            public const nint m_iszLightClassFilter = 0x4B0; // CUtlSymbolLarge
            public const nint m_flLightRadiusFilter = 0x4B8; // float32
            public const nint m_flBrightnessDelta = 0x4BC; // float32
            public const nint m_bPerformScreenFade = 0x4C0; // bool
            public const nint m_flTargetBrightnessMultiplier = 0x4C4; // float32
            public const nint m_flCurrentBrightnessMultiplier = 0x4C8; // float32
            public const nint m_vecLights = 0x4D0; // CUtlVector<CHandle<CLightEntity>>
        }
        // Parent: CCSWeaponBaseGun
        // Field count: 0
        public static class CWeaponM4A1 {
        }
        // Parent: CBaseTrigger
        // Field count: 0
        public static class CTriggerHostageReset {
        }
        // Parent: None
        // Field count: 0
        public static class CPulseAnimFuncs {
        }
        // Parent: CEconEntity
        // Field count: 2
        public static class CEconWearable {
            public const nint m_nForceSkin = 0xDE0; // int32
            public const nint m_bAlwaysAllow = 0xDE4; // bool
        }
        // Parent: None
        // Field count: 1
        public static class CPulseCell_WaitForCursorsWithTagBase__CursorState_t {
            public const nint m_TagName = 0x0; // PulseSymbol_t
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MPropertyDescription
        public static class CPulseArraylib {
        }
        // Parent: CCSWeaponBaseGun
        // Field count: 0
        public static class CWeaponMAC10 {
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
        public static class CFuncLadder {
            public const nint m_vecLadderDir = 0x730; // Vector
            public const nint m_Dismounts = 0x740; // CUtlVector<CHandle<CInfoLadderDismount>>
            public const nint m_vecLocalTop = 0x758; // Vector
            public const nint m_vecPlayerMountPositionTop = 0x764; // VectorWS
            public const nint m_vecPlayerMountPositionBottom = 0x770; // VectorWS
            public const nint m_flAutoRideSpeed = 0x77C; // float32
            public const nint m_bDisabled = 0x780; // bool
            public const nint m_bFakeLadder = 0x781; // bool
            public const nint m_bHasSlack = 0x782; // bool
            public const nint m_surfacePropName = 0x788; // CUtlSymbolLarge
            public const nint m_OnPlayerGotOnLadder = 0x790; // CEntityIOOutput
            public const nint m_OnPlayerGotOffLadder = 0x7A8; // CEntityIOOutput
        }
        // Parent: CBaseEntity
        // Field count: 3
        //
        // Metadata:
        // NetworkVarNames: m_fog (fogparams_t)
        public static class CFogController {
            public const nint m_fog = 0x4A8; // fogparams_t
            public const nint m_bUseAngles = 0x510; // bool
            public const nint m_iChangedVariables = 0x514; // int32
        }
        // Parent: None
        // Field count: 0
        public static class CPointTemplateAPI {
        }
        // Parent: CBaseAnimGraph
        // Field count: 8
        public static class CItem {
            public const nint m_OnPlayerTouch = 0xA28; // CEntityIOOutput
            public const nint m_OnPlayerPickup = 0xA40; // CEntityIOOutput
            public const nint m_bActivateWhenAtRest = 0xA58; // bool
            public const nint m_OnCacheInteraction = 0xA60; // CEntityIOOutput
            public const nint m_OnGlovePulled = 0xA78; // CEntityIOOutput
            public const nint m_vOriginalSpawnOrigin = 0xA90; // VectorWS
            public const nint m_vOriginalSpawnAngles = 0xA9C; // QAngle
            public const nint m_bPhysStartAsleep = 0xAA8; // bool
        }
        // Parent: CBaseTrigger
        // Field count: 7
        public static class CTriggerPush {
            public const nint m_angPushEntitySpace = 0x890; // QAngle
            public const nint m_vecPushDirEntitySpace = 0x89C; // Vector
            public const nint m_bTriggerOnStartTouch = 0x8A8; // bool
            public const nint m_bUsePathSimple = 0x8A9; // bool
            public const nint m_iszPathSimpleName = 0x8B0; // CUtlSymbolLarge
            public const nint m_PathSimple = 0x8B8; // CPathSimple*
            public const nint m_splinePushType = 0x8C0; // uint32
        }
        // Parent: CBaseAnimGraph
        // Field count: 4
        public static class CBaseProp {
            public const nint m_bModelOverrodeBlockLOS = 0xA20; // bool
            public const nint m_iShapeType = 0xA24; // int32
            public const nint m_bConformToCollisionBounds = 0xA28; // bool
            public const nint m_mPreferredCatchTransform = 0xA30; // CTransform
        }
        // Parent: CPointEntity
        // Field count: 11
        //
        // Metadata:
        // NetworkVarNames: m_bDisabled (bool)
        // NetworkVarNames: m_nResolutionX (int)
        // NetworkVarNames: m_nResolutionY (int)
        // NetworkVarNames: m_szPanelType (string_t)
        // NetworkVarNames: m_szLayoutFileName (string_t)
        // NetworkVarNames: m_RenderAttrName (string_t)
        // NetworkVarNames: m_TargetEntities (CHandle<CBaseModelEntity>)
        // NetworkVarNames: m_nTargetChangeCount (int)
        // NetworkVarNames: m_vecCSSClasses (string_t)
        public static class CInfoOffscreenPanoramaTexture {
            public const nint m_bDisabled = 0x4A8; // bool
            public const nint m_nResolutionX = 0x4AC; // int32
            public const nint m_nResolutionY = 0x4B0; // int32
            public const nint m_szPanelType = 0x4B8; // CUtlSymbolLarge
            public const nint m_szLayoutFileName = 0x4C0; // CUtlSymbolLarge
            public const nint m_RenderAttrName = 0x4C8; // CUtlSymbolLarge
            public const nint m_TargetEntities = 0x4D0; // CNetworkUtlVectorBase<CHandle<CBaseModelEntity>>
            public const nint m_nTargetChangeCount = 0x4E8; // int32
            public const nint m_vecCSSClasses = 0x4F0; // CNetworkUtlVectorBase<CUtlSymbolLarge>
            public const nint m_szTargetsName = 0x508; // CUtlSymbolLarge
            public const nint m_AdditionalTargetEntities = 0x510; // CUtlVector<CHandle<CBaseModelEntity>>
        }
        // Parent: CPointEntity
        // Field count: 16
        public static class CPointAngularVelocitySensor {
            public const nint m_hTargetEntity = 0x4A8; // CHandle<CBaseEntity>
            public const nint m_flThreshold = 0x4AC; // float32
            public const nint m_nLastCompareResult = 0x4B0; // int32
            public const nint m_nLastFireResult = 0x4B4; // int32
            public const nint m_flFireTime = 0x4B8; // GameTime_t
            public const nint m_flFireInterval = 0x4BC; // float32
            public const nint m_flLastAngVelocity = 0x4C0; // float32
            public const nint m_lastOrientation = 0x4C4; // QAngle
            public const nint m_vecAxis = 0x4D0; // VectorWS
            public const nint m_bUseHelper = 0x4DC; // bool
            public const nint m_AngularVelocity = 0x4E0; // CEntityOutputTemplate<float32,float32>
            public const nint m_OnLessThan = 0x500; // CEntityIOOutput
            public const nint m_OnLessThanOrEqualTo = 0x518; // CEntityIOOutput
            public const nint m_OnGreaterThan = 0x530; // CEntityIOOutput
            public const nint m_OnGreaterThanOrEqualTo = 0x548; // CEntityIOOutput
            public const nint m_OnEqualTo = 0x560; // CEntityIOOutput
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
            public const nint m_flVisibilityStrength = 0x4A8; // float32
            public const nint m_flFogDistanceMultiplier = 0x4AC; // float32
            public const nint m_flFogMaxDensityMultiplier = 0x4B0; // float32
            public const nint m_flFadeTime = 0x4B4; // float32
            public const nint m_bStartDisabled = 0x4B8; // bool
            public const nint m_bIsEnabled = 0x4B9; // bool
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Step_FollowEntity {
            public const nint m_ParamBoneOrAttachName = 0x48; // CUtlString
            public const nint m_ParamBoneOrAttachNameChild = 0x50; // CUtlString
        }
        // Parent: CBaseCSGrenade
        // Field count: 0
        public static class CFlashbang {
        }
        // Parent: CEconEntity
        // Field count: 8
        //
        // Metadata:
        // MNetworkExcludeByName
        // MNetworkExcludeByUserGroup
        // MNetworkExcludeByUserGroup
        // MNetworkExcludeByUserGroup
        // MNetworkIncludeByName
        // MNetworkUserGroupProxy
        // NetworkVarNames: m_nNextPrimaryAttackTick (GameTick_t)
        // NetworkVarNames: m_flNextPrimaryAttackTickRatio (float32)
        // NetworkVarNames: m_nNextSecondaryAttackTick (GameTick_t)
        // NetworkVarNames: m_flNextSecondaryAttackTickRatio (float32)
        // NetworkVarNames: m_iClip1 (int32)
        // NetworkVarNames: m_iClip2 (int32)
        // NetworkVarNames: m_pReserveAmmo (int)
        public static class CBasePlayerWeapon {
            public const nint m_nNextPrimaryAttackTick = 0xDE0; // GameTick_t
            public const nint m_flNextPrimaryAttackTickRatio = 0xDE4; // float32
            public const nint m_nNextSecondaryAttackTick = 0xDE8; // GameTick_t
            public const nint m_flNextSecondaryAttackTickRatio = 0xDEC; // float32
            public const nint m_iClip1 = 0xDF0; // int32
            public const nint m_iClip2 = 0xDF4; // int32
            public const nint m_pReserveAmmo = 0xDF8; // int32[2]
            public const nint m_OnPlayerUse = 0xE00; // CEntityIOOutput
        }
        // Parent: None
        // Field count: 82
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertySuppressBaseClassField
        // MPropertySuppressBaseClassField
        public static class CCSWeaponBaseVData {
            public const nint m_WeaponType = 0x440; // CSWeaponType
            public const nint m_WeaponCategory = 0x444; // CSWeaponCategory
            public const nint m_szAnimSkeleton = 0x448; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCNmSkeleton>>
            public const nint m_vecMuzzlePos0 = 0x528; // Vector
            public const nint m_vecMuzzlePos1 = 0x534; // Vector
            public const nint m_szTracerParticle = 0x540; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            public const nint m_GearSlot = 0x620; // gear_slot_t
            public const nint m_GearSlotPosition = 0x624; // int32
            public const nint m_DefaultLoadoutSlot = 0x628; // loadout_slot_t
            public const nint m_nPrice = 0x62C; // int32
            public const nint m_nKillAward = 0x630; // int32
            public const nint m_nPrimaryReserveAmmoMax = 0x634; // int32
            public const nint m_nSecondaryReserveAmmoMax = 0x638; // int32
            public const nint m_bMeleeWeapon = 0x63C; // bool
            public const nint m_bHasBurstMode = 0x63D; // bool
            public const nint m_bIsRevolver = 0x63E; // bool
            public const nint m_bCannotShootUnderwater = 0x63F; // bool
            public const nint m_szName = 0x640; // CGlobalSymbol
            public const nint m_eSilencerType = 0x648; // CSWeaponSilencerType
            public const nint m_nCrosshairMinDistance = 0x64C; // int32
            public const nint m_nCrosshairDeltaDistance = 0x650; // int32
            public const nint m_bIsFullAuto = 0x654; // bool
            public const nint m_nNumBullets = 0x658; // int32
            public const nint m_bReloadsSingleShells = 0x65C; // bool
            public const nint m_flCycleTime = 0x660; // CFiringModeFloat
            public const nint m_flMaxSpeed = 0x668; // CFiringModeFloat
            public const nint m_flSpread = 0x670; // CFiringModeFloat
            public const nint m_flInaccuracyCrouch = 0x678; // CFiringModeFloat
            public const nint m_flInaccuracyStand = 0x680; // CFiringModeFloat
            public const nint m_flInaccuracyJump = 0x688; // CFiringModeFloat
            public const nint m_flInaccuracyLand = 0x690; // CFiringModeFloat
            public const nint m_flInaccuracyLadder = 0x698; // CFiringModeFloat
            public const nint m_flInaccuracyFire = 0x6A0; // CFiringModeFloat
            public const nint m_flInaccuracyMove = 0x6A8; // CFiringModeFloat
            public const nint m_flRecoilAngle = 0x6B0; // CFiringModeFloat
            public const nint m_flRecoilAngleVariance = 0x6B8; // CFiringModeFloat
            public const nint m_flRecoilMagnitude = 0x6C0; // CFiringModeFloat
            public const nint m_flRecoilMagnitudeVariance = 0x6C8; // CFiringModeFloat
            public const nint m_nTracerFrequency = 0x6D0; // CFiringModeInt
            public const nint m_flInaccuracyJumpInitial = 0x6D8; // float32
            public const nint m_flInaccuracyJumpApex = 0x6DC; // float32
            public const nint m_flInaccuracyReload = 0x6E0; // float32
            public const nint m_flDeployDuration = 0x6E4; // float32
            public const nint m_flDisallowAttackAfterReloadStartDuration = 0x6E8; // float32
            public const nint m_nBurstShotCount = 0x6EC; // int32
            public const nint m_bAllowBurstHolster = 0x6F0; // bool
            public const nint m_nRecoilSeed = 0x6F4; // int32
            public const nint m_nSpreadSeed = 0x6F8; // int32
            public const nint m_flAttackMovespeedFactor = 0x6FC; // float32
            public const nint m_flInaccuracyPitchShift = 0x700; // float32
            public const nint m_flInaccuracyAltSoundThreshold = 0x704; // float32
            public const nint m_szUseRadioSubtitle = 0x708; // CUtlString
            public const nint m_bUnzoomsAfterShot = 0x710; // bool
            public const nint m_bHideViewModelWhenZoomed = 0x711; // bool
            public const nint m_nZoomLevels = 0x714; // int32
            public const nint m_nZoomFOV1 = 0x718; // int32
            public const nint m_nZoomFOV2 = 0x71C; // int32
            public const nint m_flZoomTime0 = 0x720; // float32
            public const nint m_flZoomTime1 = 0x724; // float32
            public const nint m_flZoomTime2 = 0x728; // float32
            public const nint m_flIronSightPullUpSpeed = 0x72C; // float32
            public const nint m_flIronSightPutDownSpeed = 0x730; // float32
            public const nint m_flIronSightFOV = 0x734; // float32
            public const nint m_flIronSightPivotForward = 0x738; // float32
            public const nint m_flIronSightLooseness = 0x73C; // float32
            public const nint m_nDamage = 0x740; // int32
            public const nint m_flHeadshotMultiplier = 0x744; // float32
            public const nint m_flArmorRatio = 0x748; // float32
            public const nint m_flPenetration = 0x74C; // float32
            public const nint m_flRange = 0x750; // float32
            public const nint m_flRangeModifier = 0x754; // float32
            public const nint m_flFlinchVelocityModifierLarge = 0x758; // float32
            public const nint m_flFlinchVelocityModifierSmall = 0x75C; // float32
            public const nint m_flRecoveryTimeCrouch = 0x760; // float32
            public const nint m_flRecoveryTimeStand = 0x764; // float32
            public const nint m_flRecoveryTimeCrouchFinal = 0x768; // float32
            public const nint m_flRecoveryTimeStandFinal = 0x76C; // float32
            public const nint m_nRecoveryTransitionStartBullet = 0x770; // int32
            public const nint m_nRecoveryTransitionEndBullet = 0x774; // int32
            public const nint m_flThrowVelocity = 0x778; // float32
            public const nint m_vSmokeColor = 0x77C; // Vector
            public const nint m_szAnimClass = 0x788; // CGlobalSymbol
        }
        // Parent: CPointEntity
        // Field count: 6
        public static class CPhysForce {
            public const nint m_nameAttach = 0x4B0; // CUtlSymbolLarge
            public const nint m_force = 0x4B8; // float32
            public const nint m_forceTime = 0x4BC; // float32
            public const nint m_attachedObject = 0x4C0; // CHandle<CBaseEntity>
            public const nint m_wasRestored = 0x4C4; // bool
            public const nint m_integrator = 0x4C8; // CConstantForceController
        }
        // Parent: 
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
        // Parent: None
        // Field count: 0
        public static class SignatureOutflow_Continue {
        }
        // Parent: CPointEntity
        // Field count: 0
        public static class CInfoTarget {
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
            public const nint m_vecCsViewPunchAngle = 0x48; // QAngle
            public const nint m_nCsViewPunchAngleTick = 0x54; // GameTick_t
            public const nint m_flCsViewPunchAngleTickRatio = 0x58; // float32
            public const nint m_PlayerFog = 0x60; // fogplayerparams_t
            public const nint m_hColorCorrectionCtrl = 0xA0; // CHandle<CColorCorrection>
            public const nint m_hViewEntity = 0xA4; // CHandle<CBaseEntity>
            public const nint m_hTonemapController = 0xA8; // CHandle<CTonemapController2>
            public const nint m_audio = 0xB0; // audioparams_t
            public const nint m_PostProcessingVolumes = 0x128; // CNetworkUtlVectorBase<CHandle<CPostProcessingVolume>>
            public const nint m_flOldPlayerZ = 0x140; // float32
            public const nint m_flOldPlayerViewOffsetZ = 0x144; // float32
            public const nint m_hTriggerSoundscapeList = 0x160; // CUtlVector<CHandle<CEnvSoundscapeTriggerable>>
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Timeline {
            public const nint m_TimelineEvents = 0x48; // CUtlVector<CPulseCell_Timeline::TimelineEvent_t>
            public const nint m_bWaitForChildOutflows = 0x60; // bool
            public const nint m_OnFinished = 0x68; // CPulse_ResumePoint
            public const nint m_OnCanceled = 0xB0; // CPulse_ResumePoint
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Inflow_EntOutputHandler {
            public const nint m_SourceEntity = 0x80; // PulseSymbol_t
            public const nint m_SourceOutput = 0x90; // PulseSymbol_t
            public const nint m_ExpectedParamType = 0xA0; // CPulseValueFullType
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MVDataOverlayType
        // MVDataAssociatedFile
        public static class CScenePayloadVData {
            public const nint m_sSceneFile = 0x0; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCChoreoSceneResource>>
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MPropertyFriendlyName
        public static class CPulseFuncs_GameParticleManager {
        }
        // Parent: CBaseFilter
        // Field count: 1
        public static class CFilterAttributeInt {
            public const nint m_sAttributeName = 0x4E0; // CUtlSymbolLarge
        }
        // Parent: CPointEntity
        // Field count: 7
        public static class CKeepUpright {
            public const nint m_worldGoalAxis = 0x4B0; // Vector
            public const nint m_localTestAxis = 0x4BC; // Vector
            public const nint m_nameAttach = 0x4D0; // CUtlSymbolLarge
            public const nint m_attachedObject = 0x4D8; // CHandle<CBaseEntity>
            public const nint m_angularLimit = 0x4DC; // float32
            public const nint m_bActive = 0x4E0; // bool
            public const nint m_bDampAllRotation = 0x4E1; // bool
        }
        // Parent: CLogicalEntity
        // Field count: 11
        public static class CPointTemplate {
            public const nint m_iszWorldName = 0x4A8; // CUtlSymbolLarge
            public const nint m_iszSource2EntityLumpName = 0x4B0; // CUtlSymbolLarge
            public const nint m_iszEntityFilterName = 0x4B8; // CUtlSymbolLarge
            public const nint m_flTimeoutInterval = 0x4C0; // float32
            public const nint m_bAsynchronouslySpawnEntities = 0x4C4; // bool
            public const nint m_clientOnlyEntityBehavior = 0x4C8; // PointTemplateClientOnlyEntityBehavior_t
            public const nint m_ownerSpawnGroupType = 0x4CC; // PointTemplateOwnerSpawnGroupType_t
            public const nint m_createdSpawnGroupHandles = 0x4D0; // CUtlVector<uint32>
            public const nint m_SpawnedEntityHandles = 0x4E8; // CUtlVector<CEntityHandle>
            public const nint m_ScriptSpawnCallback = 0x500; // HSCRIPT
            public const nint m_ScriptCallbackScope = 0x508; // HSCRIPT
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
        public static class CEnvVolumetricFogController {
            public const nint m_flScattering = 0x4A8; // float32
            public const nint m_TintColor = 0x4AC; // Color
            public const nint m_flAnisotropy = 0x4B0; // float32
            public const nint m_flFadeSpeed = 0x4B4; // float32
            public const nint m_flDrawDistance = 0x4B8; // float32
            public const nint m_flFadeInStart = 0x4BC; // float32
            public const nint m_flFadeInEnd = 0x4C0; // float32
            public const nint m_flIndirectStrength = 0x4C4; // float32
            public const nint m_nVolumeDepth = 0x4C8; // int32
            public const nint m_fFirstVolumeSliceThickness = 0x4CC; // float32
            public const nint m_nIndirectTextureDimX = 0x4D0; // int32
            public const nint m_nIndirectTextureDimY = 0x4D4; // int32
            public const nint m_nIndirectTextureDimZ = 0x4D8; // int32
            public const nint m_vBoxMins = 0x4DC; // Vector
            public const nint m_vBoxMaxs = 0x4E8; // Vector
            public const nint m_bActive = 0x4F4; // bool
            public const nint m_flStartAnisoTime = 0x4F8; // GameTime_t
            public const nint m_flStartScatterTime = 0x4FC; // GameTime_t
            public const nint m_flStartDrawDistanceTime = 0x500; // GameTime_t
            public const nint m_flStartAnisotropy = 0x504; // float32
            public const nint m_flStartScattering = 0x508; // float32
            public const nint m_flStartDrawDistance = 0x50C; // float32
            public const nint m_flDefaultAnisotropy = 0x510; // float32
            public const nint m_flDefaultScattering = 0x514; // float32
            public const nint m_flDefaultDrawDistance = 0x518; // float32
            public const nint m_bStartDisabled = 0x51C; // bool
            public const nint m_bEnableIndirect = 0x51D; // bool
            public const nint m_bIsMaster = 0x51E; // bool
            public const nint m_hFogIndirectTexture = 0x520; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_nForceRefreshCount = 0x528; // int32
            public const nint m_fNoiseSpeed = 0x52C; // float32
            public const nint m_fNoiseStrength = 0x530; // float32
            public const nint m_vNoiseScale = 0x534; // Vector
            public const nint m_fWindSpeed = 0x540; // float32
            public const nint m_vWindDirection = 0x544; // Vector
            public const nint m_bFirstTime = 0x550; // bool
        }
        // Parent: 
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
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Step_SetAnimGraphParam {
            public const nint m_ParamName = 0x48; // CUtlString
        }
        // Parent: CPlayerPawnComponent
        // Field count: 0
        public static class CPlayer_FlashlightServices {
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
        public static class CCSPlayerController {
            public const nint m_pInGameMoneyServices = 0x7D8; // CCSPlayerController_InGameMoneyServices*
            public const nint m_pInventoryServices = 0x7E0; // CCSPlayerController_InventoryServices*
            public const nint m_pActionTrackingServices = 0x7E8; // CCSPlayerController_ActionTrackingServices*
            public const nint m_pDamageServices = 0x7F0; // CCSPlayerController_DamageServices*
            public const nint m_iPing = 0x7F8; // uint32
            public const nint m_bHasCommunicationAbuseMute = 0x7FC; // bool
            public const nint m_uiCommunicationMuteFlags = 0x800; // uint32
            public const nint m_szCrosshairCodes = 0x808; // CUtlSymbolLarge
            public const nint m_iPendingTeamNum = 0x810; // uint8
            public const nint m_flForceTeamTime = 0x814; // GameTime_t
            public const nint m_iCompTeammateColor = 0x818; // int32
            public const nint m_bEverPlayedOnTeam = 0x81C; // bool
            public const nint m_bAttemptedToGetColor = 0x81D; // bool
            public const nint m_iTeammatePreferredColor = 0x820; // int32
            public const nint m_bTeamChanged = 0x824; // bool
            public const nint m_bInSwitchTeam = 0x825; // bool
            public const nint m_bHasSeenJoinGame = 0x826; // bool
            public const nint m_bJustBecameSpectator = 0x827; // bool
            public const nint m_bSwitchTeamsOnNextRoundReset = 0x828; // bool
            public const nint m_bRemoveAllItemsOnNextRoundReset = 0x829; // bool
            public const nint m_flLastJoinTeamTime = 0x82C; // GameTime_t
            public const nint m_szClan = 0x830; // CUtlSymbolLarge
            public const nint m_iCoachingTeam = 0x838; // int32
            public const nint m_nPlayerDominated = 0x840; // uint64
            public const nint m_nPlayerDominatingMe = 0x848; // uint64
            public const nint m_iCompetitiveRanking = 0x850; // int32
            public const nint m_iCompetitiveWins = 0x854; // int32
            public const nint m_iCompetitiveRankType = 0x858; // int8
            public const nint m_iCompetitiveRankingPredicted_Win = 0x85C; // int32
            public const nint m_iCompetitiveRankingPredicted_Loss = 0x860; // int32
            public const nint m_iCompetitiveRankingPredicted_Tie = 0x864; // int32
            public const nint m_nEndMatchNextMapVote = 0x868; // int32
            public const nint m_unActiveQuestId = 0x86C; // uint16
            public const nint m_rtActiveMissionPeriod = 0x870; // uint32
            public const nint m_nQuestProgressReason = 0x874; // QuestProgress::Reason
            public const nint m_unPlayerTvControlFlags = 0x878; // uint32
            public const nint m_iDraftIndex = 0x8A8; // int32
            public const nint m_msQueuedModeDisconnectionTimestamp = 0x8AC; // uint32
            public const nint m_uiAbandonRecordedReason = 0x8B0; // uint32
            public const nint m_eNetworkDisconnectionReason = 0x8B4; // uint32
            public const nint m_bCannotBeKicked = 0x8B8; // bool
            public const nint m_bEverFullyConnected = 0x8B9; // bool
            public const nint m_bAbandonAllowsSurrender = 0x8BA; // bool
            public const nint m_bAbandonOffersInstantSurrender = 0x8BB; // bool
            public const nint m_bDisconnection1MinWarningPrinted = 0x8BC; // bool
            public const nint m_bScoreReported = 0x8BD; // bool
            public const nint m_nDisconnectionTick = 0x8C0; // int32
            public const nint m_bControllingBot = 0x8D0; // bool
            public const nint m_bHasControlledBotThisRound = 0x8D1; // bool
            public const nint m_bHasBeenControlledByPlayerThisRound = 0x8D2; // bool
            public const nint m_nBotsControlledThisRound = 0x8D4; // int32
            public const nint m_bCanControlObservedBot = 0x8D8; // bool
            public const nint m_hPlayerPawn = 0x8DC; // CHandle<CCSPlayerPawn>
            public const nint m_hObserverPawn = 0x8E0; // CHandle<CCSObserverPawn>
            public const nint m_DesiredObserverMode = 0x8E4; // int32
            public const nint m_hDesiredObserverTarget = 0x8E8; // CEntityHandle
            public const nint m_bPawnIsAlive = 0x8EC; // bool
            public const nint m_iPawnHealth = 0x8F0; // uint32
            public const nint m_iPawnArmor = 0x8F4; // int32
            public const nint m_bPawnHasDefuser = 0x8F8; // bool
            public const nint m_bPawnHasHelmet = 0x8F9; // bool
            public const nint m_nPawnCharacterDefIndex = 0x8FA; // uint16
            public const nint m_iPawnLifetimeStart = 0x8FC; // int32
            public const nint m_iPawnLifetimeEnd = 0x900; // int32
            public const nint m_iPawnBotDifficulty = 0x904; // int32
            public const nint m_hOriginalControllerOfCurrentPawn = 0x908; // CHandle<CCSPlayerController>
            public const nint m_iScore = 0x90C; // int32
            public const nint m_iRoundScore = 0x910; // int32
            public const nint m_iRoundsWon = 0x914; // int32
            public const nint m_recentKillQueue = 0x918; // uint8[8]
            public const nint m_nFirstKill = 0x920; // uint8
            public const nint m_nKillCount = 0x921; // uint8
            public const nint m_bMvpNoMusic = 0x922; // bool
            public const nint m_eMvpReason = 0x924; // int32
            public const nint m_iMusicKitID = 0x928; // int32
            public const nint m_iMusicKitMVPs = 0x92C; // int32
            public const nint m_iMVPs = 0x930; // int32
            public const nint m_nUpdateCounter = 0x934; // int32
            public const nint m_flSmoothedPing = 0x938; // float32
            public const nint m_lastHeldVoteTimer = 0x940; // IntervalTimer
            public const nint m_bShowHints = 0x958; // bool
            public const nint m_iNextTimeCheck = 0x95C; // int32
            public const nint m_bJustDidTeamKill = 0x960; // bool
            public const nint m_bPunishForTeamKill = 0x961; // bool
            public const nint m_bGaveTeamDamageWarning = 0x962; // bool
            public const nint m_bGaveTeamDamageWarningThisRound = 0x963; // bool
            public const nint m_dblLastReceivedPacketPlatFloatTime = 0x968; // float64
            public const nint m_LastTeamDamageWarningTime = 0x970; // GameTime_t
            public const nint m_LastTimePlayerWasDisconnectedForPawnsRemove = 0x974; // GameTime_t
            public const nint m_nSuspiciousHitCount = 0x978; // uint32
            public const nint m_nNonSuspiciousHitStreak = 0x97C; // uint32
            public const nint m_bFireBulletsSeedSynchronized = 0xA21; // bool
        }
        // Parent: CPhysConstraint
        // Field count: 5
        public static class CPhysLength {
            public const nint m_offset = 0x508; // Vector[2]
            public const nint m_vecAttach = 0x520; // VectorWS
            public const nint m_addLength = 0x52C; // float32
            public const nint m_minLength = 0x530; // float32
            public const nint m_totalLength = 0x534; // float32
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
            public const nint m_aPlayerControllers = 0x4A8; // CNetworkUtlVectorBase<CHandle<CBasePlayerController>>
            public const nint m_aPlayers = 0x4C0; // CNetworkUtlVectorBase<CHandle<CBasePlayerPawn>>
            public const nint m_iScore = 0x4D8; // int32
            public const nint m_szTeamname = 0x4DC; // char[129]
        }
        // Parent: CLogicNPCCounter
        // Field count: 4
        public static class CLogicNPCCounterAABB {
            public const nint m_vDistanceOuterMins = 0x728; // Vector
            public const nint m_vDistanceOuterMaxs = 0x734; // Vector
            public const nint m_vOuterMins = 0x740; // Vector
            public const nint m_vOuterMaxs = 0x74C; // Vector
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Outflow_CycleOrdered__InstanceState_t {
            public const nint m_nNextIndex = 0x0; // int32
        }
        // Parent: CDynamicProp
        // Field count: 28
        //
        // Metadata:
        // NetworkVarNames: m_AttributeManager (CAttributeContainer)
        // NetworkVarNames: m_jumpedThisFrame (bool)
        // NetworkVarNames: m_leader (CHandle<CCSPlayerPawn>)
        public static class CChicken {
            public const nint m_AttributeManager = 0xC70; // CAttributeContainer
            public const nint m_updateTimer = 0xF68; // CountdownTimer
            public const nint m_stuckAnchor = 0xF80; // Vector
            public const nint m_stuckTimer = 0xF90; // CountdownTimer
            public const nint m_collisionStuckTimer = 0xFA8; // CountdownTimer
            public const nint m_isOnGround = 0xFC0; // bool
            public const nint m_vFallVelocity = 0xFC4; // Vector
            public const nint m_desiredActivity = 0xFD0; // ChickenActivity
            public const nint m_currentActivity = 0xFD4; // ChickenActivity
            public const nint m_activityTimer = 0xFD8; // CountdownTimer
            public const nint m_turnRate = 0xFF0; // float32
            public const nint m_fleeFrom = 0xFF4; // CHandle<CBaseEntity>
            public const nint m_moveRateThrottleTimer = 0xFF8; // CountdownTimer
            public const nint m_startleTimer = 0x1010; // CountdownTimer
            public const nint m_vocalizeTimer = 0x1028; // CountdownTimer
            public const nint m_flWhenZombified = 0x1040; // GameTime_t
            public const nint m_jumpedThisFrame = 0x1044; // bool
            public const nint m_leader = 0x1048; // CHandle<CCSPlayerPawn>
            public const nint m_reuseTimer = 0x1060; // CountdownTimer
            public const nint m_hasBeenUsed = 0x1078; // bool
            public const nint m_jumpTimer = 0x1080; // CountdownTimer
            public const nint m_flLastJumpTime = 0x1098; // float32
            public const nint m_bInJump = 0x109C; // bool
            public const nint m_repathTimer = 0x30A8; // CountdownTimer
            public const nint m_vecPathGoal = 0x3140; // Vector
            public const nint m_flActiveFollowStartTime = 0x314C; // GameTime_t
            public const nint m_followMinuteTimer = 0x3150; // CountdownTimer
            public const nint m_BlockDirectionTimer = 0x3170; // CountdownTimer
        }
        // Parent: CPhysicsProp
        // Field count: 5
        public static class CPhysicsPropRespawnable {
            public const nint m_vOriginalSpawnOrigin = 0xCE0; // VectorWS
            public const nint m_vOriginalSpawnAngles = 0xCEC; // QAngle
            public const nint m_vOriginalMins = 0xCF8; // Vector
            public const nint m_vOriginalMaxs = 0xD04; // Vector
            public const nint m_flRespawnDuration = 0xD10; // float32
        }
        // Parent: CBeam
        // Field count: 19
        public static class CEnvBeam {
            public const nint m_active = 0x7D0; // int32
            public const nint m_spriteTexture = 0x7D8; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_iszStartEntity = 0x7E0; // CUtlSymbolLarge
            public const nint m_iszEndEntity = 0x7E8; // CUtlSymbolLarge
            public const nint m_life = 0x7F0; // float32
            public const nint m_boltWidth = 0x7F4; // float32
            public const nint m_noiseAmplitude = 0x7F8; // float32
            public const nint m_speed = 0x7FC; // int32
            public const nint m_restrike = 0x800; // float32
            public const nint m_iszSpriteName = 0x808; // CUtlSymbolLarge
            public const nint m_frameStart = 0x810; // int32
            public const nint m_vEndPointWorld = 0x814; // VectorWS
            public const nint m_vEndPointRelative = 0x820; // Vector
            public const nint m_radius = 0x82C; // float32
            public const nint m_TouchType = 0x830; // Touch_t
            public const nint m_iFilterName = 0x838; // CUtlSymbolLarge
            public const nint m_hFilter = 0x840; // CHandle<CBaseEntity>
            public const nint m_iszDecal = 0x848; // CUtlSymbolLarge
            public const nint m_OnTouchedByEntity = 0x850; // CEntityIOOutput
        }
        // Parent: CLightEntity
        // Field count: 0
        public static class CLightSpotEntity {
        }
        // Parent: CCSWeaponBaseShotgun
        // Field count: 0
        public static class CWeaponSawedoff {
        }
        // Parent: CBaseTrigger
        // Field count: 2
        public static class CTonemapTrigger {
            public const nint m_tonemapControllerName = 0x890; // CUtlSymbolLarge
            public const nint m_hTonemapController = 0x898; // CEntityHandle
        }
        // Parent: CPointEntity
        // Field count: 10
        public static class CEnvShake {
            public const nint m_limitToEntity = 0x4A8; // CUtlSymbolLarge
            public const nint m_Amplitude = 0x4B0; // float32
            public const nint m_Frequency = 0x4B4; // float32
            public const nint m_Duration = 0x4B8; // float32
            public const nint m_Radius = 0x4BC; // float32
            public const nint m_stopTime = 0x4C0; // GameTime_t
            public const nint m_nextShake = 0x4C4; // GameTime_t
            public const nint m_currentAmp = 0x4C8; // float32
            public const nint m_maxForce = 0x4CC; // Vector
            public const nint m_shakeCallback = 0x4E0; // CPhysicsShake
        }
        // Parent: CPlayer_MovementServices_Humanoid
        // Field count: 48
        //
        // Metadata:
        // NetworkVarNames: m_nLadderSurfacePropIndex (int)
        // NetworkVarNames: m_bDucked (bool)
        // NetworkVarNames: m_flDuckAmount (float)
        // NetworkVarNames: m_flDuckSpeed (float)
        // NetworkVarNames: m_bDuckOverride (bool)
        // NetworkVarNames: m_bDesiresDuck (bool)
        // NetworkVarNames: m_bDucking (bool)
        // NetworkVarNames: m_flDuckOffset (float)
        // NetworkVarNames: m_nDuckTimeMsecs (uint32)
        // NetworkVarNames: m_nDuckJumpTimeMsecs (uint32)
        // NetworkVarNames: m_nJumpTimeMsecs (uint32)
        // NetworkVarNames: m_flLastDuckTime (float)
        // NetworkVarNames: m_nGameCodeHasMovedPlayerAfterCommand (int)
        // NetworkVarNames: m_fStashGrenadeParameterWhen (GameTime_t)
        // NetworkVarNames: m_nButtonDownMaskPrev (ButtonBitMask_t)
        // NetworkVarNames: m_flOffsetTickCompleteTime (float)
        // NetworkVarNames: m_flOffsetTickStashedSpeed (float)
        // NetworkVarNames: m_flStamina (float)
        // NetworkVarNames: m_LegacyJump (CCSPlayerLegacyJump)
        // NetworkVarNames: m_ModernJump (CCSPlayerModernJump)
        // NetworkVarNames: m_nLastJumpTick (GameTick_t)
        // NetworkVarNames: m_flLastJumpFrac (float)
        // NetworkVarNames: m_flLastJumpVelocityZ (float)
        // NetworkVarNames: m_bJumpApexPending (bool)
        // NetworkVarNames: m_bWasSurfing (bool)
        public static class CCSPlayer_MovementServices {
            public const nint m_vecLadderNormal = 0x278; // Vector
            public const nint m_nLadderSurfacePropIndex = 0x284; // int32
            public const nint m_bDucked = 0x288; // bool
            public const nint m_flDuckAmount = 0x28C; // float32
            public const nint m_flDuckSpeed = 0x290; // float32
            public const nint m_bDuckOverride = 0x294; // bool
            public const nint m_bDesiresDuck = 0x295; // bool
            public const nint m_bDucking = 0x296; // bool
            public const nint m_flDuckOffset = 0x298; // float32
            public const nint m_nDuckTimeMsecs = 0x29C; // uint32
            public const nint m_nDuckJumpTimeMsecs = 0x2A0; // uint32
            public const nint m_nJumpTimeMsecs = 0x2A4; // uint32
            public const nint m_flLastDuckTime = 0x2A8; // float32
            public const nint m_vecLastPositionAtFullCrouchSpeed = 0x2B8; // Vector2D
            public const nint m_duckUntilOnGround = 0x2C0; // bool
            public const nint m_bHasWalkMovedSinceLastJump = 0x2C1; // bool
            public const nint m_bInStuckTest = 0x2C2; // bool
            public const nint m_nTraceCount = 0x4D0; // int32
            public const nint m_StuckLast = 0x4D4; // int32
            public const nint m_bSpeedCropped = 0x4D8; // bool
            public const nint m_nOldWaterLevel = 0x4DC; // int32
            public const nint m_flWaterEntryTime = 0x4E0; // float32
            public const nint m_vecForward = 0x4E4; // Vector
            public const nint m_vecLeft = 0x4F0; // Vector
            public const nint m_vecUp = 0x4FC; // Vector
            public const nint m_nGameCodeHasMovedPlayerAfterCommand = 0x508; // int32
            public const nint m_bMadeFootstepNoise = 0x50C; // bool
            public const nint m_iFootsteps = 0x510; // int32
            public const nint m_fStashGrenadeParameterWhen = 0x514; // GameTime_t
            public const nint m_nButtonDownMaskPrev = 0x518; // uint64
            public const nint m_flOffsetTickCompleteTime = 0x520; // float32
            public const nint m_flOffsetTickStashedSpeed = 0x524; // float32
            public const nint m_flStamina = 0x528; // float32
            public const nint m_flHeightAtJumpStart = 0x52C; // float32
            public const nint m_flMaxJumpHeightThisJump = 0x530; // float32
            public const nint m_flMaxJumpHeightLastJump = 0x534; // float32
            public const nint m_flStaminaAtJumpStart = 0x538; // float32
            public const nint m_flVelMulAtJumpStart = 0x53C; // float32
            public const nint m_flAccumulatedJumpError = 0x540; // float32
            public const nint m_LegacyJump = 0x548; // CCSPlayerLegacyJump
            public const nint m_ModernJump = 0x560; // CCSPlayerModernJump
            public const nint m_nLastJumpTick = 0x590; // GameTick_t
            public const nint m_flLastJumpFrac = 0x594; // float32
            public const nint m_flLastJumpVelocityZ = 0x598; // float32
            public const nint m_bJumpApexPending = 0x59C; // bool
            public const nint m_flTicksSinceLastSurfingDetected = 0x5A0; // float32
            public const nint m_bWasSurfing = 0x5A4; // bool
            public const nint m_vecInputRotated = 0x634; // Vector
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
        public static class SellbackPurchaseEntry_t {
            public const nint m_unDefIdx = 0x30; // uint16
            public const nint m_nCost = 0x34; // int32
            public const nint m_nPrevArmor = 0x38; // int32
            public const nint m_bPrevHelmet = 0x3C; // bool
            public const nint m_hItem = 0x40; // CEntityHandle
        }
        // Parent: CBaseTrigger
        // Field count: 0
        public static class CTriggerCallback {
        }
        // Parent: CSoundOpvarSetPointEntity
        // Field count: 5
        public static class CSoundOpvarSetAutoRoomEntity {
            public const nint m_traceResults = 0x640; // CUtlVector<SoundOpvarTraceResult_t>
            public const nint m_doorwayPairs = 0x658; // CUtlVector<AutoRoomDoorwayPairs_t>
            public const nint m_flSize = 0x670; // float32
            public const nint m_flHeightTolerance = 0x674; // float32
            public const nint m_flSizeSqr = 0x678; // float32
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
        public static class CPulseCell_Outflow_ListenForEntityOutput {
            public const nint m_OnFired = 0x48; // SignatureOutflow_Resume
            public const nint m_OnCanceled = 0x90; // CPulse_ResumePoint
            public const nint m_strEntityOutput = 0xD8; // CGlobalSymbol
            public const nint m_strEntityOutputParam = 0xE0; // CUtlString
            public const nint m_bListenUntilCanceled = 0xE8; // bool
        }
        // Parent: CBreakable
        // Field count: 0
        public static class CPushable {
        }
        // Parent: CPointEntity
        // Field count: 2
        public static class CRotatorTarget {
            public const nint m_OnArrivedAt = 0x4A8; // CEntityIOOutput
            public const nint m_eSpace = 0x4C0; // RotatorTargetSpace_t
        }
        // Parent: CLogicalEntity
        // Field count: 4
        public static class CPhysicsEntitySolver {
            public const nint m_hMovingEntity = 0x4C0; // CHandle<CBaseEntity>
            public const nint m_hPhysicsBlocker = 0x4C4; // CHandle<CBaseEntity>
            public const nint m_separationDuration = 0x4C8; // float32
            public const nint m_cancelTime = 0x4CC; // GameTime_t
        }
        // Parent: CLogicalEntity
        // Field count: 6
        public static class CLogicCollisionPair {
            public const nint m_nameAttach1 = 0x4A8; // CUtlSymbolLarge
            public const nint m_nameAttach2 = 0x4B0; // CUtlSymbolLarge
            public const nint m_includeHierarchy = 0x4B8; // bool
            public const nint m_supportMultipleEntitiesWithSameName = 0x4B9; // bool
            public const nint m_disabled = 0x4BA; // bool
            public const nint m_succeeded = 0x4BB; // bool
        }
        // Parent: CBaseEntity
        // Field count: 5
        public static class CTestEffect {
            public const nint m_iLoop = 0x4A8; // int32
            public const nint m_iBeam = 0x4AC; // int32
            public const nint m_pBeam = 0x4B0; // CHandle<CBeam>[24]
            public const nint m_flBeamTime = 0x510; // GameTime_t[24]
            public const nint m_flStartTime = 0x570; // GameTime_t
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Outflow_ScriptedSequence__CursorState_t {
            public const nint m_scriptedSequence = 0x0; // CHandle<CBaseEntity>
        }
        // Parent: CBasePropDoor
        // Field count: 18
        public static class CPropDoorRotating {
            public const nint m_vecAxis = 0xE50; // Vector
            public const nint m_flDistance = 0xE5C; // float32
            public const nint m_eSpawnPosition = 0xE60; // PropDoorRotatingSpawnPos_t
            public const nint m_eOpenDirection = 0xE64; // PropDoorRotatingOpenDirection_e
            public const nint m_eCurrentOpenDirection = 0xE68; // PropDoorRotatingOpenDirection_e
            public const nint m_eDefaultCheckDirection = 0xE6C; // doorCheck_e
            public const nint m_flAjarAngle = 0xE70; // float32
            public const nint m_angRotationAjarDeprecated = 0xE74; // QAngle
            public const nint m_angRotationClosed = 0xE80; // QAngle
            public const nint m_angRotationOpenForward = 0xE8C; // QAngle
            public const nint m_angRotationOpenBack = 0xE98; // QAngle
            public const nint m_angGoal = 0xEA4; // QAngle
            public const nint m_vecForwardBoundsMin = 0xEB0; // Vector
            public const nint m_vecForwardBoundsMax = 0xEBC; // Vector
            public const nint m_vecBackBoundsMin = 0xEC8; // Vector
            public const nint m_vecBackBoundsMax = 0xED4; // Vector
            public const nint m_bAjarDoorShouldntAlwaysOpen = 0xEE0; // bool
            public const nint m_hEntityBlocker = 0xEE4; // CHandle<CEntityBlocker>
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
            public const nint m_flAlphaScale = 0xCA8; // float32
            public const nint m_flRadiusScale = 0xCAC; // float32
            public const nint m_flSelfIllumScale = 0xCB0; // float32
            public const nint m_ColorTint = 0xCB4; // Color
            public const nint m_hTextureOverride = 0xCB8; // CStrongHandle<InfoForResourceTypeCTextureBase>
        }
        // Parent: CLogicalEntity
        // Field count: 11
        public static class CMathRemap {
            public const nint m_flInMin = 0x4A8; // float32
            public const nint m_flInMax = 0x4AC; // float32
            public const nint m_flOut1 = 0x4B0; // float32
            public const nint m_flOut2 = 0x4B4; // float32
            public const nint m_flOldInValue = 0x4B8; // float32
            public const nint m_bEnabled = 0x4BC; // bool
            public const nint m_OutValue = 0x4C0; // CEntityOutputTemplate<float32,float32>
            public const nint m_OnRoseAboveMin = 0x4E0; // CEntityIOOutput
            public const nint m_OnRoseAboveMax = 0x4F8; // CEntityIOOutput
            public const nint m_OnFellBelowMin = 0x510; // CEntityIOOutput
            public const nint m_OnFellBelowMax = 0x528; // CEntityIOOutput
        }
        // Parent: CSoundOpvarSetPointBase
        // Field count: 8
        public static class CSoundOpvarSetOBBWindEntity {
            public const nint m_vMins = 0x550; // Vector
            public const nint m_vMaxs = 0x55C; // Vector
            public const nint m_vDistanceMins = 0x568; // Vector
            public const nint m_vDistanceMaxs = 0x574; // Vector
            public const nint m_flWindMin = 0x580; // float32
            public const nint m_flWindMax = 0x584; // float32
            public const nint m_flWindMapMin = 0x588; // float32
            public const nint m_flWindMapMax = 0x58C; // float32
        }
        // Parent: 
        // Field count: 3
        //
        // Metadata:
        // NetworkVarNames: m_Transforms (CTransform)
        // NetworkVarNames: m_hOwner (EHANDLE)
        public static class PhysicsRagdollPose_t {
            public const nint m_Transforms = 0x8; // CNetworkUtlVectorBase<CTransform>
            public const nint m_hOwner = 0x20; // CHandle<CBaseEntity>
            public const nint m_bSetFromDebugHistory = 0x24; // bool
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
        // Parent: CTriggerOnce
        // Field count: 1
        public static class CScriptTriggerOnce {
            public const nint m_vExtent = 0x8A8; // Vector
        }
        // Parent: CLightEntity
        // Field count: 0
        public static class CLightOrthoEntity {
        }
        // Parent: CPointEntity
        // Field count: 0
        public static class CInfoInstructorHintHostageRescueZone {
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_LimitCount__InstanceState_t {
            public const nint m_nCurrentCount = 0x0; // int32
        }
        // Parent: CBaseTrigger
        // Field count: 4
        public static class CTriggerTeleport {
            public const nint m_iLandmark = 0x890; // CUtlSymbolLarge
            public const nint m_bUseLandmarkAngles = 0x898; // bool
            public const nint m_bMirrorPlayer = 0x899; // bool
            public const nint m_bCheckDestIfClearForPlayer = 0x89A; // bool
        }
        // Parent: CBaseModelEntity
        // Field count: 1
        public static class CFuncWall {
            public const nint m_nState = 0x730; // int32
        }
        // Parent: None
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
            public const nint m_nVariant = 0x4A8; // int32
            public const nint m_nRandom = 0x4AC; // int32
            public const nint m_nOrdinal = 0x4B0; // int32
            public const nint m_sWeaponName = 0x4B8; // CUtlString
            public const nint m_xuid = 0x4C0; // uint64
            public const nint m_agentItem = 0x4C8; // CEconItemView
            public const nint m_glovesItem = 0x770; // CEconItemView
            public const nint m_weaponItem = 0xA18; // CEconItemView
        }
        // Parent: CBaseEntity
        // Field count: 0
        public static class CGameRulesProxy {
        }
        // Parent: CBaseEntity
        // Field count: 0
        public static class CInfoLadderDismount {
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CPulseServerFuncs {
        }
        // Parent: CPointEntity
        // Field count: 6
        public static class CMessage {
            public const nint m_iszMessage = 0x4A8; // CUtlSymbolLarge
            public const nint m_MessageVolume = 0x4B0; // float32
            public const nint m_MessageAttenuation = 0x4B4; // int32
            public const nint m_Radius = 0x4B8; // float32
            public const nint m_sNoise = 0x4C0; // CUtlSymbolLarge
            public const nint m_OnShowMessage = 0x4C8; // CEntityIOOutput
        }
        // Parent: CPointEntity
        // Field count: 6
        public static class CPointVelocitySensor {
            public const nint m_hTargetEntity = 0x4A8; // CHandle<CBaseEntity>
            public const nint m_vecAxis = 0x4AC; // Vector
            public const nint m_bEnabled = 0x4B8; // bool
            public const nint m_fPrevVelocity = 0x4BC; // float32
            public const nint m_flAvgInterval = 0x4C0; // float32
            public const nint m_Velocity = 0x4C8; // CEntityOutputTemplate<float32,float32>
        }
        // Parent: 
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
        // Parent: None
        // Field count: 0
        public static class CBaseModelEntityAPI {
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
            public const nint m_OnHostageBeginGrab = 0xB98; // CEntityIOOutput
            public const nint m_OnFirstPickedUp = 0xBB0; // CEntityIOOutput
            public const nint m_OnDroppedNotRescued = 0xBC8; // CEntityIOOutput
            public const nint m_OnRescued = 0xBE0; // CEntityIOOutput
            public const nint m_entitySpottedState = 0xBF8; // EntitySpottedState_t
            public const nint m_nSpotRules = 0xC10; // int32
            public const nint m_uiHostageSpawnExclusionGroupMask = 0xC14; // uint32
            public const nint m_nHostageSpawnRandomFactor = 0xC18; // uint32
            public const nint m_bRemove = 0xC1C; // bool
            public const nint m_vel = 0xC20; // Vector
            public const nint m_isRescued = 0xC2C; // bool
            public const nint m_jumpedThisFrame = 0xC2D; // bool
            public const nint m_nHostageState = 0xC30; // int32
            public const nint m_leader = 0xC34; // CHandle<CBaseEntity>
            public const nint m_lastLeader = 0xC38; // CHandle<CCSPlayerPawnBase>
            public const nint m_reuseTimer = 0xC40; // CountdownTimer
            public const nint m_hasBeenUsed = 0xC58; // bool
            public const nint m_accel = 0xC5C; // Vector
            public const nint m_isRunning = 0xC68; // bool
            public const nint m_isCrouching = 0xC69; // bool
            public const nint m_jumpTimer = 0xC70; // CountdownTimer
            public const nint m_isWaitingForLeader = 0xC88; // bool
            public const nint m_repathTimer = 0x2C98; // CountdownTimer
            public const nint m_inhibitDoorTimer = 0x2CB0; // CountdownTimer
            public const nint m_inhibitObstacleAvoidanceTimer = 0x2D40; // CountdownTimer
            public const nint m_wiggleTimer = 0x2D60; // CountdownTimer
            public const nint m_isAdjusted = 0x2D7C; // bool
            public const nint m_bHandsHaveBeenCut = 0x2D7D; // bool
            public const nint m_hHostageGrabber = 0x2D80; // CHandle<CCSPlayerPawn>
            public const nint m_fLastGrabTime = 0x2D84; // GameTime_t
            public const nint m_vecPositionWhenStartedDroppingToGround = 0x2D88; // Vector
            public const nint m_vecGrabbedPos = 0x2D94; // Vector
            public const nint m_flRescueStartTime = 0x2DA0; // GameTime_t
            public const nint m_flGrabSuccessTime = 0x2DA4; // GameTime_t
            public const nint m_flDropStartTime = 0x2DA8; // GameTime_t
            public const nint m_nApproachRewardPayouts = 0x2DAC; // int32
            public const nint m_nPickupEventCount = 0x2DB0; // int32
            public const nint m_vecSpawnGroundPos = 0x2DB4; // Vector
            public const nint m_vecHostageResetPosition = 0x2DEC; // VectorWS
        }
        // Parent: CTriggerMultiple
        // Field count: 1
        public static class CScriptTriggerMultiple {
            public const nint m_vExtent = 0x8A8; // Vector
        }
        // Parent: CPointEntity
        // Field count: 5
        public static class CEnvSpark {
            public const nint m_flDelay = 0x4A8; // float32
            public const nint m_nMagnitude = 0x4AC; // int32
            public const nint m_nTrailLength = 0x4B0; // int32
            public const nint m_nType = 0x4B4; // int32
            public const nint m_OnSpark = 0x4B8; // CEntityIOOutput
        }
        // Parent: CPlayerControllerComponent
        // Field count: 2
        //
        // Metadata:
        // NetworkVarNames: m_nSendUpdate (int)
        // NetworkVarNames: m_DamageList (CDamageRecord)
        // MNetworkReplayCompatField
        public static class CCSPlayerController_DamageServices {
            public const nint m_nSendUpdate = 0x40; // int32
            public const nint m_DamageList = 0x48; // CUtlVectorEmbeddedNetworkVar<CDamageRecord>
        }
        // Parent: CBaseFilter
        // Field count: 0
        public static class CFilterLOS {
        }
        // Parent: CBaseEntity
        // Field count: 7
        public static class CPointOrient {
            public const nint m_iszSpawnTargetName = 0x4A8; // CUtlSymbolLarge
            public const nint m_hTarget = 0x4B0; // CHandle<CBaseEntity>
            public const nint m_bActive = 0x4B4; // bool
            public const nint m_nGoalDirection = 0x4B8; // PointOrientGoalDirectionType_t
            public const nint m_nConstraint = 0x4BC; // PointOrientConstraint_t
            public const nint m_flMaxTurnRate = 0x4C0; // float32
            public const nint m_flLastGameTime = 0x4C4; // GameTime_t
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
        public static class sky3dparams_t {
            public const nint scale = 0x8; // int16
            public const nint origin = 0xC; // Vector
            public const nint bClip3DSkyBoxNearToWorldFar = 0x18; // bool
            public const nint flClip3DSkyBoxNearToWorldFarOffset = 0x1C; // float32
            public const nint fog = 0x20; // fogparams_t
            public const nint m_nWorldGroupID = 0x88; // WorldGroupId_t
        }
        // Parent: CCSWeaponBaseGun
        // Field count: 0
        public static class CWeaponP250 {
        }
        // Parent: 
        // Field count: 3
        //
        // Metadata:
        // NetworkVarNames: m_hOwner (CHandle<CBaseModelEntity>)
        public static class CDestructiblePartsComponent {
            public const nint __m_pChainEntity = 0x0; // CNetworkVarChainer
            public const nint m_vecDamageTakenByHitGroup = 0x48; // CUtlVector<uint16>
            public const nint m_hOwner = 0x60; // CHandle<CBaseModelEntity>
        }
        // Parent: CBaseTrigger
        // Field count: 7
        public static class CChangeLevel {
            public const nint m_sMapName = 0x890; // CUtlString
            public const nint m_sLandmarkName = 0x898; // CUtlString
            public const nint m_OnChangeLevel = 0x8A0; // CEntityIOOutput
            public const nint m_bTouched = 0x8B8; // bool
            public const nint m_bNoTouch = 0x8B9; // bool
            public const nint m_bNewChapter = 0x8BA; // bool
            public const nint m_bOnChangeLevelFired = 0x8BB; // bool
        }
        // Parent: CBaseToggle
        // Field count: 25
        //
        // Metadata:
        // NetworkVarNames: m_glowEntity (CHandle<CBaseModelEntity>)
        // NetworkVarNames: m_usable (bool)
        // NetworkVarNames: m_szDisplayText (string_t)
        public static class CBaseButton {
            public const nint m_angMoveEntitySpace = 0x7B0; // QAngle
            public const nint m_fStayPushed = 0x7BC; // bool
            public const nint m_fRotating = 0x7BD; // bool
            public const nint m_ls = 0x7C0; // locksound_t
            public const nint m_sUseSound = 0x7E0; // CUtlSymbolLarge
            public const nint m_sLockedSound = 0x7E8; // CUtlSymbolLarge
            public const nint m_sUnlockedSound = 0x7F0; // CUtlSymbolLarge
            public const nint m_sOverrideAnticipationName = 0x7F8; // CUtlSymbolLarge
            public const nint m_bLocked = 0x800; // bool
            public const nint m_bDisabled = 0x801; // bool
            public const nint m_flUseLockedTime = 0x804; // GameTime_t
            public const nint m_bSolidBsp = 0x808; // bool
            public const nint m_OnDamaged = 0x810; // CEntityIOOutput
            public const nint m_OnPressed = 0x828; // CEntityIOOutput
            public const nint m_OnUseLocked = 0x840; // CEntityIOOutput
            public const nint m_OnIn = 0x858; // CEntityIOOutput
            public const nint m_OnOut = 0x870; // CEntityIOOutput
            public const nint m_nState = 0x888; // int32
            public const nint m_hConstraint = 0x88C; // CEntityHandle
            public const nint m_hConstraintParent = 0x890; // CEntityHandle
            public const nint m_bForceNpcExclude = 0x894; // bool
            public const nint m_sGlowEntity = 0x898; // CUtlSymbolLarge
            public const nint m_glowEntity = 0x8A0; // CHandle<CBaseModelEntity>
            public const nint m_usable = 0x8A4; // bool
            public const nint m_szDisplayText = 0x8A8; // CUtlSymbolLarge
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CPulseCell_SoundEventStart {
            public const nint m_Type = 0x48; // SoundEventStartType_t
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Step_DebugLog {
        }
        // Parent: CWeaponBaseItem
        // Field count: 0
        public static class CItem_Healthshot {
        }
        // Parent: CBaseFlex
        // Field count: 14
        //
        // Metadata:
        // MNetworkIncludeByName
        // MNetworkIncludeByName
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
        public static class CBaseGrenade {
            public const nint m_OnPlayerPickup = 0xAB8; // CEntityIOOutput
            public const nint m_OnExplode = 0xAD0; // CEntityIOOutput
            public const nint m_bHasWarnedAI = 0xAE8; // bool
            public const nint m_bIsSmokeGrenade = 0xAE9; // bool
            public const nint m_bIsLive = 0xAEA; // bool
            public const nint m_DmgRadius = 0xAEC; // float32
            public const nint m_flDetonateTime = 0xAF0; // GameTime_t
            public const nint m_flWarnAITime = 0xAF4; // float32
            public const nint m_flDamage = 0xAF8; // float32
            public const nint m_iszBounceSound = 0xB00; // CUtlSymbolLarge
            public const nint m_ExplosionSound = 0xB08; // CUtlString
            public const nint m_hThrower = 0xB14; // CHandle<CCSPlayerPawn>
            public const nint m_flNextAttack = 0xB2C; // GameTime_t
            public const nint m_hOriginalThrower = 0xB30; // CHandle<CCSPlayerPawn>
        }
        // Parent: CBaseTrigger
        // Field count: 8
        //
        // Metadata:
        // NetworkVarNames: m_MaxWeight (float32)
        // NetworkVarNames: m_FadeDuration (float32)
        // NetworkVarNames: m_Weight (float32)
        // NetworkVarNames: m_lookupFilename (char)
        public static class CColorCorrectionVolume {
            public const nint m_MaxWeight = 0x890; // float32
            public const nint m_FadeDuration = 0x894; // float32
            public const nint m_Weight = 0x898; // float32
            public const nint m_lookupFilename = 0x89C; // char[512]
            public const nint m_LastEnterWeight = 0xA9C; // float32
            public const nint m_LastEnterTime = 0xAA0; // GameTime_t
            public const nint m_LastExitWeight = 0xAA4; // float32
            public const nint m_LastExitTime = 0xAA8; // GameTime_t
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
        public static class CCSPlayerController_ActionTrackingServices {
            public const nint m_perRoundStats = 0x40; // CUtlVectorEmbeddedNetworkVar<CSPerRoundStats_t>
            public const nint m_matchStats = 0xC8; // CSMatchStats_t
            public const nint m_iNumRoundKills = 0x188; // int32
            public const nint m_iNumRoundKillsHeadshots = 0x18C; // int32
            public const nint m_flTotalRoundDamageDealt = 0x190; // float32
        }
        // Parent: CBodyComponentSkeletonInstance
        // Field count: 1
        //
        // Metadata:
        // NetworkVarNames: m_animationController (CBaseAnimGraphController)
        public static class CBodyComponentBaseAnimGraph {
            public const nint m_animationController = 0x4B0; // CBaseAnimGraphController
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_BaseYieldingInflow {
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class PulseNodeDynamicOutflows_t {
            public const nint m_Outflows = 0x0; // CUtlVector<PulseNodeDynamicOutflows_t::DynamicOutflow_t>
        }
        // Parent: CServerOnlyModelEntity
        // Field count: 5
        public static class CFogVolume {
            public const nint m_fogName = 0x730; // CUtlSymbolLarge
            public const nint m_postProcessName = 0x738; // CUtlSymbolLarge
            public const nint m_colorCorrectionName = 0x740; // CUtlSymbolLarge
            public const nint m_bDisabled = 0x750; // bool
            public const nint m_bInFogVolumesList = 0x751; // bool
        }
        // Parent: CBaseModelEntity
        // Field count: 18
        //
        // Metadata:
        // MNetworkOverride
        // MNetworkOverride
        public static class CFuncRotating {
            public const nint m_OnStopped = 0x730; // CEntityIOOutput
            public const nint m_OnStarted = 0x748; // CEntityIOOutput
            public const nint m_OnReachedStart = 0x760; // CEntityIOOutput
            public const nint m_localRotationVector = 0x778; // RotationVector
            public const nint m_flFanFriction = 0x784; // float32
            public const nint m_flAttenuation = 0x788; // float32
            public const nint m_flVolume = 0x78C; // float32
            public const nint m_flTargetSpeed = 0x790; // float32
            public const nint m_flMaxSpeed = 0x794; // float32
            public const nint m_flBlockDamage = 0x798; // float32
            public const nint m_NoiseRunning = 0x7A0; // CUtlSymbolLarge
            public const nint m_bReversed = 0x7A8; // bool
            public const nint m_bAccelDecel = 0x7A9; // bool
            public const nint m_prevLocalAngles = 0x7C0; // QAngle
            public const nint m_angStart = 0x7CC; // QAngle
            public const nint m_bStopAtStartPos = 0x7D8; // bool
            public const nint m_vecClientOrigin = 0x7DC; // Vector
            public const nint m_vecClientAngles = 0x7E8; // QAngle
        }
        // Parent: CLogicalEntity
        // Field count: 13
        public static class CTimerEntity {
            public const nint m_OnTimer = 0x4A8; // CEntityIOOutput
            public const nint m_OnTimerHigh = 0x4C0; // CEntityIOOutput
            public const nint m_OnTimerLow = 0x4D8; // CEntityIOOutput
            public const nint m_iDisabled = 0x4F0; // int32
            public const nint m_flInitialDelay = 0x4F4; // float32
            public const nint m_flRefireTime = 0x4F8; // float32
            public const nint m_bUpDownState = 0x4FC; // bool
            public const nint m_iUseRandomTime = 0x500; // int32
            public const nint m_bPauseAfterFiring = 0x504; // bool
            public const nint m_flLowerRandomBound = 0x508; // float32
            public const nint m_flUpperRandomBound = 0x50C; // float32
            public const nint m_flRemainingTime = 0x510; // float32
            public const nint m_bPaused = 0x514; // bool
        }
        // Parent: None
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
        // Parent: CPlayer_MovementServices
        // Field count: 7
        //
        // Metadata:
        // NetworkVarNames: m_flFallVelocity (float32)
        public static class CPlayer_MovementServices_Humanoid {
            public const nint m_flStepSoundTime = 0x240; // float32
            public const nint m_flFallVelocity = 0x244; // float32
            public const nint m_groundNormal = 0x248; // Vector
            public const nint m_flSurfaceFriction = 0x254; // float32
            public const nint m_surfaceProps = 0x258; // CUtlStringToken
            public const nint m_nStepside = 0x268; // int32
            public const nint m_vecSmoothedVelocity = 0x26C; // Vector
        }
        // Parent: None
        // Field count: 0
        public static class CBaseEntityAPI {
        }
        // Parent: None
        // Field count: 1
        public static class CPulseCell_IsRequirementValid__Criteria_t {
            public const nint m_bIsValid = 0x0; // bool
        }
        // Parent: CCSWeaponBaseGun
        // Field count: 0
        public static class CWeaponG3SG1 {
        }
        // Parent: CTriggerMultiple
        // Field count: 0
        public static class CTriggerOnce {
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
            public const nint m_flHealthPointsRemovedTotal = 0x94; // float32
            public const nint m_flHealthPointsDealtTotal = 0x98; // float32
            public const nint m_nShotsFiredTotal = 0x9C; // int32
            public const nint m_nShotsOnTargetTotal = 0xA0; // int32
            public const nint m_i1v1Count = 0xA4; // int32
            public const nint m_i1v1Wins = 0xA8; // int32
            public const nint m_i1v2Count = 0xAC; // int32
            public const nint m_i1v2Wins = 0xB0; // int32
            public const nint m_iEntryCount = 0xB4; // int32
            public const nint m_iEntryWins = 0xB8; // int32
        }
        // Parent: 
        // Field count: 2
        //
        // Metadata:
        // NetworkVarNames: m_ID (CUtlStringToken)
        // NetworkVarNames: m_Values (Vector4D)
        public static class EntityRenderAttribute_t {
            public const nint m_ID = 0x30; // CUtlStringToken
            public const nint m_Values = 0x34; // Vector4D
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Inflow_ObservableVariableListener {
            public const nint m_nBlackboardReference = 0x80; // PulseRuntimeBlackboardReferenceIndex_t
            public const nint m_bSelfReference = 0x82; // bool
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
            public const nint m_targetCamera = 0x750; // CUtlString
            public const nint m_nResolutionEnum = 0x758; // int32
            public const nint m_bRenderShadows = 0x75C; // bool
            public const nint m_bUseUniqueColorTarget = 0x75D; // bool
            public const nint m_brushModelName = 0x760; // CUtlString
            public const nint m_hTargetCamera = 0x768; // CHandle<CBaseEntity>
            public const nint m_bEnabled = 0x76C; // bool
            public const nint m_bDraw3DSkybox = 0x76D; // bool
            public const nint m_bStartEnabled = 0x76E; // bool
        }
        // Parent: CBaseEntity
        // Field count: 3
        //
        // Metadata:
        // NetworkVarNames: m_nMode (int)
        // NetworkVarNames: m_vBoxSize (Vector)
        // NetworkVarNames: m_bEnabled (bool)
        public static class CInfoVisibilityBox {
            public const nint m_nMode = 0x4AC; // int32
            public const nint m_vBoxSize = 0x4B0; // Vector
            public const nint m_bEnabled = 0x4BC; // bool
        }
        // Parent: CBaseToggle
        // Field count: 3
        public static class CGunTarget {
            public const nint m_on = 0x7B0; // bool
            public const nint m_hTargetEnt = 0x7B4; // CHandle<CBaseEntity>
            public const nint m_OnDeath = 0x7B8; // CEntityIOOutput
        }
        // Parent: CSoundEventEntity
        // Field count: 5
        public static class CSoundEventConeEntity {
            public const nint m_flEmitterAngle = 0x558; // float32
            public const nint m_flSweetSpotAngle = 0x55C; // float32
            public const nint m_flAttenMin = 0x560; // float32
            public const nint m_flAttenMax = 0x564; // float32
            public const nint m_iszParameterName = 0x568; // CUtlSymbolLarge
        }
        // Parent: CSoundOpvarSetAABBEntity
        // Field count: 0
        public static class CSoundOpvarSetOBBEntity {
        }
        // Parent: None
        // Field count: 0
        public static class CFilterMultipleAPI {
        }
        // Parent: CBaseCSGrenadeProjectile
        // Field count: 4
        //
        // Metadata:
        // NetworkVarNames: m_nDecoyShotTick (int)
        public static class CDecoyProjectile {
            public const nint m_nDecoyShotTick = 0xBC8; // int32
            public const nint m_shotsRemaining = 0xBCC; // int32
            public const nint m_fExpireTime = 0xBD0; // GameTime_t
            public const nint m_decoyWeaponDefIndex = 0xBE0; // uint16
        }
        // Parent: CBaseModelEntity
        // Field count: 0
        public static class CPrecipitationBlocker {
        }
        // Parent: CSoundOpvarSetPointEntity
        // Field count: 4
        public static class CSoundOpvarSetPathCornerEntity {
            public const nint m_bUseParentedPath = 0x658; // bool
            public const nint m_flDistMinSqr = 0x65C; // float32
            public const nint m_flDistMaxSqr = 0x660; // float32
            public const nint m_iszPathCornerEntityName = 0x668; // CUtlSymbolLarge
        }
        // Parent: CPointEntity
        // Field count: 0
        public static class CPointClientCommand {
        }
        // Parent: CHostageRescueZoneShim
        // Field count: 0
        public static class CHostageRescueZone {
        }
        // Parent: CBaseModelEntity
        // Field count: 0
        public static class CWorld {
        }
        // Parent: CLogicalEntity
        // Field count: 9
        public static class CPathMoverEntitySpawner {
            public const nint m_szSpawnTemplates = 0x4A8; // CUtlSymbolLarge[4]
            public const nint m_nSpawnIndex = 0x4C8; // int32
            public const nint m_hPathMover = 0x4CC; // CHandle<CPathMover>
            public const nint m_flSpawnFrequencySeconds = 0x4D0; // float32
            public const nint m_flSpawnFrequencyDistToNearestMover = 0x4D4; // float32
            public const nint m_mapSpawnedMoverTemplates = 0x4D8; // CUtlHashtable<CHandle<CFuncMover>,CPathMoverEntitySpawn>
            public const nint m_nMaxActive = 0x4F8; // int32
            public const nint m_flLastSpawnTime = 0x4FC; // GameTime_t
            public const nint m_bEnabled = 0x500; // bool
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
        public static class CModelState {
            public const nint m_hModel = 0xA0; // CStrongHandle<InfoForResourceTypeCModel>
            public const nint m_ModelName = 0xA8; // CUtlSymbolLarge
            public const nint m_bClientClothCreationSuppressed = 0xF5; // bool
            public const nint m_MeshGroupMask = 0x1A0; // uint64
            public const nint m_nBodyGroupChoices = 0x1F0; // CNetworkUtlVectorBase<int32>
            public const nint m_nIdealMotionType = 0x23A; // int8
            public const nint m_nForceLOD = 0x23B; // int8
            public const nint m_nClothUpdateFlags = 0x23C; // int8
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_LerpCameraSettings__CursorState_t {
            public const nint m_hCamera = 0x8; // CHandle<CPointCamera>
            public const nint m_OverlaidStart = 0xC; // PointCameraSettings_t
            public const nint m_OverlaidEnd = 0x1C; // PointCameraSettings_t
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Outflow_CycleOrdered {
            public const nint m_Outputs = 0x48; // CUtlVector<CPulse_OutflowConnection>
        }
        // Parent: CCSWeaponBaseGun
        // Field count: 0
        public static class CWeaponGlock {
        }
        // Parent: CBaseCSGrenadeProjectile
        // Field count: 0
        public static class CHEGrenadeProjectile {
        }
        // Parent: CBaseTrigger
        // Field count: 0
        public static class CTriggerGravity {
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
        // Parent: CCSWeaponBaseGun
        // Field count: 0
        public static class CWeaponGalilAR {
        }
        // Parent: CBaseFilter
        // Field count: 1
        public static class CFilterMassGreater {
            public const nint m_fFilterMass = 0x4E0; // float32
        }
        // Parent: CCSWeaponBaseGun
        // Field count: 0
        public static class CWeaponMP7 {
        }
        // Parent: CCSWeaponBase
        // Field count: 10
        //
        // Metadata:
        // NetworkVarNames: m_zoomLevel (int)
        // NetworkVarNames: m_iBurstShotsRemaining (int)
        // NetworkVarNames: m_bNeedsBoltAction (bool)
        // NetworkVarNames: m_nRevolverCylinderIdx (int32)
        public static class CCSWeaponBaseGun {
            public const nint m_zoomLevel = 0x1130; // int32
            public const nint m_iBurstShotsRemaining = 0x1134; // int32
            public const nint m_silencedModelIndex = 0x1140; // int32
            public const nint m_inPrecache = 0x1144; // bool
            public const nint m_bNeedsBoltAction = 0x1145; // bool
            public const nint m_nRevolverCylinderIdx = 0x1148; // int32
            public const nint m_bSkillReloadAvailable = 0x114C; // bool
            public const nint m_bSkillReloadLiftedReloadKey = 0x114D; // bool
            public const nint m_bSkillBoltInterruptAvailable = 0x114E; // bool
            public const nint m_bSkillBoltLiftedFireKey = 0x114F; // bool
        }
        // Parent: CBaseEntity
        // Field count: 0
        public static class CEnableMotionFixup {
        }
        // Parent: CLogicAutosave
        // Field count: 4
        public static class CLogicActiveAutosave {
            public const nint m_TriggerHitPoints = 0x4B8; // int32
            public const nint m_flTimeToTrigger = 0x4BC; // float32
            public const nint m_flStartTime = 0x4C0; // GameTime_t
            public const nint m_flDangerousTime = 0x4C4; // float32
        }
        // Parent: CLogicalEntity
        // Field count: 11
        public static class CMathCounter {
            public const nint m_flMin = 0x4A8; // float32
            public const nint m_flMax = 0x4AC; // float32
            public const nint m_bHitMin = 0x4B0; // bool
            public const nint m_bHitMax = 0x4B1; // bool
            public const nint m_bDisabled = 0x4B2; // bool
            public const nint m_OutValue = 0x4B8; // CEntityOutputTemplate<float32,float32>
            public const nint m_OnGetValue = 0x4D8; // CEntityOutputTemplate<float32,float32>
            public const nint m_OnHitMin = 0x4F8; // CEntityIOOutput
            public const nint m_OnHitMax = 0x510; // CEntityIOOutput
            public const nint m_OnChangedFromMin = 0x528; // CEntityIOOutput
            public const nint m_OnChangedFromMax = 0x540; // CEntityIOOutput
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // NetworkVarNames: m_WeaponSequence (CUtlString)
        public static class CCSGameModeRules_ArmsRace {
            public const nint m_WeaponSequence = 0x30; // CNetworkUtlVectorBase<CUtlString>
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
        // Parent: CServerOnlyModelEntity
        // Field count: 1
        public static class CCSPlace {
            public const nint m_name = 0x748; // CUtlSymbolLarge
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class PulseSelectorOutflowList_t {
            public const nint m_Outflows = 0x0; // CUtlVector<OutflowWithRequirements_t>
        }
        // Parent: CBaseFilter
        // Field count: 1
        public static class CFilterContext {
            public const nint m_iFilterContext = 0x4E0; // CUtlSymbolLarge
        }
        // Parent: CLightDirectionalEntity
        // Field count: 0
        public static class CLightEnvironmentEntity {
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
            public const nint m_hDecalMaterial = 0x730; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_flWidth = 0x738; // float32
            public const nint m_flHeight = 0x73C; // float32
            public const nint m_flDepth = 0x740; // float32
            public const nint m_nRenderOrder = 0x744; // uint32
            public const nint m_bProjectOnWorld = 0x748; // bool
            public const nint m_bProjectOnCharacters = 0x749; // bool
            public const nint m_bProjectOnWater = 0x74A; // bool
            public const nint m_flDepthSortBias = 0x74C; // float32
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
        public static class CEnvVolumetricFogVolume {
            public const nint m_bActive = 0x4A8; // bool
            public const nint m_vBoxMins = 0x4AC; // Vector
            public const nint m_vBoxMaxs = 0x4B8; // Vector
            public const nint m_bStartDisabled = 0x4C4; // bool
            public const nint m_bIndirectUseLPVs = 0x4C5; // bool
            public const nint m_flStrength = 0x4C8; // float32
            public const nint m_nFalloffShape = 0x4CC; // int32
            public const nint m_flFalloffExponent = 0x4D0; // float32
            public const nint m_flHeightFogDepth = 0x4D4; // float32
            public const nint m_fHeightFogEdgeWidth = 0x4D8; // float32
            public const nint m_fIndirectLightStrength = 0x4DC; // float32
            public const nint m_fSunLightStrength = 0x4E0; // float32
            public const nint m_fNoiseStrength = 0x4E4; // float32
            public const nint m_TintColor = 0x4E8; // Color
            public const nint m_bOverrideTintColor = 0x4EC; // bool
            public const nint m_bOverrideIndirectLightStrength = 0x4ED; // bool
            public const nint m_bOverrideSunLightStrength = 0x4EE; // bool
            public const nint m_bOverrideNoiseStrength = 0x4EF; // bool
        }
        // Parent: CBaseEntity
        // Field count: 0
        public static class CServerOnlyEntity {
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_PlaySequence__CursorState_t {
            public const nint m_hTarget = 0x0; // CHandle<CBaseAnimGraph>
        }
        // Parent: CBodyComponent
        // Field count: 1
        //
        // Metadata:
        // NetworkVarNames: m_skeletonInstance (CSkeletonInstance)
        public static class CBodyComponentSkeletonInstance {
            public const nint m_skeletonInstance = 0x80; // CSkeletonInstance
        }
        // Parent: CItem
        // Field count: 32
        public static class CItemGeneric {
            public const nint m_bHasTriggerRadius = 0xAD4; // bool
            public const nint m_bHasPickupRadius = 0xAD5; // bool
            public const nint m_flPickupRadiusSqr = 0xAD8; // float32
            public const nint m_flTriggerRadiusSqr = 0xADC; // float32
            public const nint m_flLastPickupCheck = 0xAE0; // GameTime_t
            public const nint m_bPlayerCounterListenerAdded = 0xAE4; // bool
            public const nint m_bPlayerInTriggerRadius = 0xAE5; // bool
            public const nint m_hSpawnParticleEffect = 0xAE8; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
            public const nint m_pAmbientSoundEffect = 0xAF0; // CUtlSymbolLarge
            public const nint m_bAutoStartAmbientSound = 0xAF8; // bool
            public const nint m_pSpawnScriptFunction = 0xB00; // CUtlSymbolLarge
            public const nint m_hPickupParticleEffect = 0xB08; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
            public const nint m_pPickupSoundEffect = 0xB10; // CUtlSymbolLarge
            public const nint m_pPickupScriptFunction = 0xB18; // CUtlSymbolLarge
            public const nint m_hTimeoutParticleEffect = 0xB20; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
            public const nint m_pTimeoutSoundEffect = 0xB28; // CUtlSymbolLarge
            public const nint m_pTimeoutScriptFunction = 0xB30; // CUtlSymbolLarge
            public const nint m_pPickupFilterName = 0xB38; // CUtlSymbolLarge
            public const nint m_hPickupFilter = 0xB40; // CHandle<CBaseFilter>
            public const nint m_OnPickup = 0xB48; // CEntityIOOutput
            public const nint m_OnTimeout = 0xB60; // CEntityIOOutput
            public const nint m_OnTriggerStartTouch = 0xB78; // CEntityIOOutput
            public const nint m_OnTriggerTouch = 0xB90; // CEntityIOOutput
            public const nint m_OnTriggerEndTouch = 0xBA8; // CEntityIOOutput
            public const nint m_pAllowPickupScriptFunction = 0xBC0; // CUtlSymbolLarge
            public const nint m_flPickupRadius = 0xBC8; // float32
            public const nint m_flTriggerRadius = 0xBCC; // float32
            public const nint m_pTriggerSoundEffect = 0xBD0; // CUtlSymbolLarge
            public const nint m_bGlowWhenInTrigger = 0xBD8; // bool
            public const nint m_glowColor = 0xBD9; // Color
            public const nint m_bUseable = 0xBDD; // bool
            public const nint m_hTriggerHelper = 0xBE0; // CHandle<CItemGenericTriggerHelper>
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
            public const nint m_bDisabled = 0x4A8; // bool
            public const nint m_bUpdateOnClient = 0x4A9; // bool
            public const nint m_nInputType = 0x4AC; // ValueRemapperInputType_t
            public const nint m_iszRemapLineStartName = 0x4B0; // CUtlSymbolLarge
            public const nint m_iszRemapLineEndName = 0x4B8; // CUtlSymbolLarge
            public const nint m_hRemapLineStart = 0x4C0; // CHandle<CBaseEntity>
            public const nint m_hRemapLineEnd = 0x4C4; // CHandle<CBaseEntity>
            public const nint m_flMaximumChangePerSecond = 0x4C8; // float32
            public const nint m_flDisengageDistance = 0x4CC; // float32
            public const nint m_flEngageDistance = 0x4D0; // float32
            public const nint m_bRequiresUseKey = 0x4D4; // bool
            public const nint m_nOutputType = 0x4D8; // ValueRemapperOutputType_t
            public const nint m_iszOutputEntityName = 0x4E0; // CUtlSymbolLarge
            public const nint m_iszOutputEntity2Name = 0x4E8; // CUtlSymbolLarge
            public const nint m_iszOutputEntity3Name = 0x4F0; // CUtlSymbolLarge
            public const nint m_iszOutputEntity4Name = 0x4F8; // CUtlSymbolLarge
            public const nint m_hOutputEntities = 0x500; // CNetworkUtlVectorBase<CHandle<CBaseEntity>>
            public const nint m_nHapticsType = 0x518; // ValueRemapperHapticsType_t
            public const nint m_nMomentumType = 0x51C; // ValueRemapperMomentumType_t
            public const nint m_flMomentumModifier = 0x520; // float32
            public const nint m_flSnapValue = 0x524; // float32
            public const nint m_flCurrentMomentum = 0x528; // float32
            public const nint m_nRatchetType = 0x52C; // ValueRemapperRatchetType_t
            public const nint m_flRatchetOffset = 0x530; // float32
            public const nint m_flInputOffset = 0x534; // float32
            public const nint m_bEngaged = 0x538; // bool
            public const nint m_bFirstUpdate = 0x539; // bool
            public const nint m_flPreviousValue = 0x53C; // float32
            public const nint m_flPreviousUpdateTickTime = 0x540; // GameTime_t
            public const nint m_vecPreviousTestPoint = 0x544; // Vector
            public const nint m_hUsingPlayer = 0x550; // CHandle<CBasePlayerPawn>
            public const nint m_flCustomOutputValue = 0x554; // float32
            public const nint m_iszSoundEngage = 0x558; // CUtlSymbolLarge
            public const nint m_iszSoundDisengage = 0x560; // CUtlSymbolLarge
            public const nint m_iszSoundReachedValueZero = 0x568; // CUtlSymbolLarge
            public const nint m_iszSoundReachedValueOne = 0x570; // CUtlSymbolLarge
            public const nint m_iszSoundMovingLoop = 0x578; // CUtlSymbolLarge
            public const nint m_Position = 0x598; // CEntityOutputTemplate<float32,float32>
            public const nint m_PositionDelta = 0x5B8; // CEntityOutputTemplate<float32,float32>
            public const nint m_OnReachedValueZero = 0x5D8; // CEntityIOOutput
            public const nint m_OnReachedValueOne = 0x5F0; // CEntityIOOutput
            public const nint m_OnReachedValueCustom = 0x608; // CEntityIOOutput
            public const nint m_OnEngage = 0x620; // CEntityIOOutput
            public const nint m_OnDisengage = 0x638; // CEntityIOOutput
        }
        // Parent: None
        // Field count: 3
        public static class CBtNodeConditionInactive {
            public const nint m_flRoundStartThresholdSeconds = 0x78; // float32
            public const nint m_flSensorInactivityThresholdSeconds = 0x7C; // float32
            public const nint m_SensorInactivityTimer = 0x80; // CountdownTimer
        }
        // Parent: CCSGO_TeamIntroCharacterPosition
        // Field count: 0
        public static class CCSGO_TeamIntroCounterTerroristPosition {
        }
        // Parent: CBaseAnimGraph
        // Field count: 26
        //
        // Metadata:
        // NetworkVarNames: m_ragEnabled (bool)
        // NetworkVarNames: m_ragPos (Vector)
        // NetworkVarNames: m_ragAngles (QAngle)
        // NetworkVarNames: m_flBlendWeight (float32)
        public static class CRagdollProp {
            public const nint m_ragdoll = 0xA30; // ragdoll_t
            public const nint m_bStartDisabled = 0xA80; // bool
            public const nint m_ragEnabled = 0xA88; // CNetworkUtlVectorBase<bool>
            public const nint m_ragPos = 0xAA0; // CNetworkUtlVectorBase<Vector>
            public const nint m_ragAngles = 0xAB8; // CNetworkUtlVectorBase<QAngle>
            public const nint m_lastUpdateTickCount = 0xAD0; // uint32
            public const nint m_allAsleep = 0xAD4; // bool
            public const nint m_bFirstCollisionAfterLaunch = 0xAD5; // bool
            public const nint m_hDamageEntity = 0xAD8; // CHandle<CBaseEntity>
            public const nint m_hKiller = 0xADC; // CHandle<CBaseEntity>
            public const nint m_hPhysicsAttacker = 0xAE0; // CHandle<CBasePlayerPawn>
            public const nint m_flLastPhysicsInfluenceTime = 0xAE4; // GameTime_t
            public const nint m_flFadeOutStartTime = 0xAE8; // GameTime_t
            public const nint m_flFadeTime = 0xAEC; // float32
            public const nint m_vecLastOrigin = 0xAF0; // VectorWS
            public const nint m_flAwakeTime = 0xAFC; // GameTime_t
            public const nint m_flLastOriginChangeTime = 0xB00; // GameTime_t
            public const nint m_strOriginClassName = 0xB08; // CUtlSymbolLarge
            public const nint m_strSourceClassName = 0xB10; // CUtlSymbolLarge
            public const nint m_bHasBeenPhysgunned = 0xB18; // bool
            public const nint m_bAllowStretch = 0xB19; // bool
            public const nint m_flBlendWeight = 0xB1C; // float32
            public const nint m_flDefaultFadeScale = 0xB20; // float32
            public const nint m_ragdollMins = 0xB28; // CUtlVector<Vector>
            public const nint m_ragdollMaxs = 0xB40; // CUtlVector<Vector>
            public const nint m_bShouldDeleteActivationRecord = 0xB58; // bool
        }
        // Parent: CEntityComponent
        // Field count: 1
        public static class CScriptComponent {
            public const nint m_scriptClassName = 0x30; // CUtlSymbolLarge
        }
        // Parent: CBasePlatTrain
        // Field count: 6
        public static class CFuncTrain {
            public const nint m_hCurrentTarget = 0x7D8; // CHandle<CBaseEntity>
            public const nint m_activated = 0x7DC; // bool
            public const nint m_hEnemy = 0x7E0; // CHandle<CBaseEntity>
            public const nint m_flBlockDamage = 0x7E4; // float32
            public const nint m_flNextBlockTime = 0x7E8; // GameTime_t
            public const nint m_iszLastTarget = 0x7F0; // CUtlSymbolLarge
        }
        // Parent: CBaseEntity
        // Field count: 4
        public static class CAI_ChangeHintGroup {
            public const nint m_iSearchType = 0x4A8; // int32
            public const nint m_strSearchName = 0x4B0; // CUtlSymbolLarge
            public const nint m_strNewHintGroup = 0x4B8; // CUtlSymbolLarge
            public const nint m_flRadius = 0x4C0; // float32
        }
        // Parent: CPlayerPawnComponent
        // Field count: 1
        //
        // Metadata:
        // NetworkVarNames: m_vecSellbackPurchaseEntries (SellbackPurchaseEntry_t)
        public static class CCSPlayer_BuyServices {
            public const nint m_vecSellbackPurchaseEntries = 0xD0; // CUtlVectorEmbeddedNetworkVar<SellbackPurchaseEntry_t>
        }
        // Parent: CCSWeaponBaseGun
        // Field count: 0
        public static class CWeaponAug {
        }
        // Parent: CPhysConstraint
        // Field count: 19
        public static class CPhysHinge {
            public const nint m_soundInfo = 0x510; // ConstraintSoundInfo
            public const nint m_NotifyMinLimitReached = 0x5A8; // CEntityIOOutput
            public const nint m_NotifyMaxLimitReached = 0x5C0; // CEntityIOOutput
            public const nint m_bAtMinLimit = 0x5D8; // bool
            public const nint m_bAtMaxLimit = 0x5D9; // bool
            public const nint m_hinge = 0x5DC; // constraint_hingeparams_t
            public const nint m_hingeFriction = 0x61C; // float32
            public const nint m_systemLoadScale = 0x620; // float32
            public const nint m_bIsAxisLocal = 0x624; // bool
            public const nint m_flMinRotation = 0x628; // float32
            public const nint m_flMaxRotation = 0x62C; // float32
            public const nint m_flInitialRotation = 0x630; // float32
            public const nint m_flMotorFrequency = 0x634; // float32
            public const nint m_flMotorDampingRatio = 0x638; // float32
            public const nint m_flAngleSpeed = 0x63C; // float32
            public const nint m_flAngleSpeedThreshold = 0x640; // float32
            public const nint m_flLimitsDebugVisRotation = 0x644; // float32
            public const nint m_OnStartMoving = 0x648; // CEntityIOOutput
            public const nint m_OnStopMoving = 0x660; // CEntityIOOutput
        }
        // Parent: CBaseTrigger
        // Field count: 1
        public static class CBuyZone {
            public const nint m_LegacyTeamNum = 0x890; // int32
        }
        // Parent: CCSWeaponBaseGun
        // Field count: 0
        public static class CWeaponSSG08 {
        }
        // Parent: None
        // Field count: 0
        public static class CLogicRelayAPI {
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
            public const nint m_pOutputOnEntitiesSpawned = 0x4A8; // CEntityIOOutput
            public const nint m_worldName = 0x4C0; // CUtlSymbolLarge
            public const nint m_layerName = 0x4C8; // CUtlSymbolLarge
            public const nint m_bWorldLayerVisible = 0x4D0; // bool
            public const nint m_bEntitiesSpawned = 0x4D1; // bool
            public const nint m_bCreateAsChildSpawnGroup = 0x4D2; // bool
            public const nint m_hLayerSpawnGroup = 0x4D4; // uint32
        }
        // Parent: CBodyComponentSkeletonInstance
        // Field count: 0
        public static class CBodyComponentBaseModelEntity {
        }
        // Parent: CPointEntity
        // Field count: 0
        public static class CLogicProximity {
        }
        // Parent: CPointEntity
        // Field count: 1
        public static class CPointGiveAmmo {
            public const nint m_pActivator = 0x4A8; // CHandle<CBaseEntity>
        }
        // Parent: CBaseFilter
        // Field count: 1
        public static class FilterDamageType {
            public const nint m_iDamageType = 0x4E0; // int32
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
            public const nint m_FOV = 0x4A8; // float32
            public const nint m_Resolution = 0x4AC; // float32
            public const nint m_bFogEnable = 0x4B0; // bool
            public const nint m_FogColor = 0x4B1; // Color
            public const nint m_flFogStart = 0x4B8; // float32
            public const nint m_flFogEnd = 0x4BC; // float32
            public const nint m_flFogMaxDensity = 0x4C0; // float32
            public const nint m_bActive = 0x4C4; // bool
            public const nint m_bUseScreenAspectRatio = 0x4C5; // bool
            public const nint m_flAspectRatio = 0x4C8; // float32
            public const nint m_bNoSky = 0x4CC; // bool
            public const nint m_fBrightness = 0x4D0; // float32
            public const nint m_flZFar = 0x4D4; // float32
            public const nint m_flZNear = 0x4D8; // float32
            public const nint m_bCanHLTVUse = 0x4DC; // bool
            public const nint m_bAlignWithParent = 0x4DD; // bool
            public const nint m_bDofEnabled = 0x4DE; // bool
            public const nint m_flDofNearBlurry = 0x4E0; // float32
            public const nint m_flDofNearCrisp = 0x4E4; // float32
            public const nint m_flDofFarCrisp = 0x4E8; // float32
            public const nint m_flDofFarBlurry = 0x4EC; // float32
            public const nint m_flDofTiltToGround = 0x4F0; // float32
            public const nint m_TargetFOV = 0x4F4; // float32
            public const nint m_DegreesPerSecond = 0x4F8; // float32
            public const nint m_bIsOn = 0x4FC; // bool
            public const nint m_pNext = 0x500; // CPointCamera*
        }
        // Parent: 
        // Field count: 2
        //
        // Metadata:
        // NetworkVarNames: m_Attributes (CEconItemAttribute)
        public static class CAttributeList {
            public const nint m_Attributes = 0x8; // CUtlVectorEmbeddedNetworkVar<CEconItemAttribute>
            public const nint m_pManager = 0x70; // CAttributeManager*
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
        public static class CPulseCell_Inflow_Wait {
            public const nint m_WakeResume = 0x48; // CPulse_ResumePoint
        }
        // Parent: CBaseFilter
        // Field count: 1
        public static class CFilterProximity {
            public const nint m_flRadius = 0x4E0; // float32
        }
        // Parent: None
        // Field count: 20
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CCS2WeaponGraphController {
            public const nint m_action = 0x90; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
            public const nint m_bActionReset = 0xA8; // CAnimGraph2ParamOptionalRef<bool>
            public const nint m_flWeaponActionSpeedScale = 0xC0; // CAnimGraph2ParamOptionalRef<float32>
            public const nint m_weaponCategory = 0xD8; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
            public const nint m_weaponType = 0xF0; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
            public const nint m_weaponExtraInfo = 0x108; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
            public const nint m_flWeaponAmmo = 0x120; // CAnimGraph2ParamOptionalRef<float32>
            public const nint m_flWeaponAmmoMax = 0x138; // CAnimGraph2ParamOptionalRef<float32>
            public const nint m_flWeaponAmmoReserve = 0x150; // CAnimGraph2ParamOptionalRef<float32>
            public const nint m_bWeaponIsSilenced = 0x168; // CAnimGraph2ParamOptionalRef<bool>
            public const nint m_flWeaponIronsightAmount = 0x180; // CAnimGraph2ParamOptionalRef<float32>
            public const nint m_bIsUsingLegacyModel = 0x198; // CAnimGraph2ParamOptionalRef<bool>
            public const nint m_idleVariation = 0x1B0; // CAnimGraph2ParamOptionalRef<float32>
            public const nint m_deployVariation = 0x1C8; // CAnimGraph2ParamOptionalRef<float32>
            public const nint m_attackType = 0x1E0; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
            public const nint m_attackThrowStrength = 0x1F8; // CAnimGraph2ParamOptionalRef<float32>
            public const nint m_flAttackVariation = 0x210; // CAnimGraph2ParamOptionalRef<float32>
            public const nint m_inspectVariation = 0x228; // CAnimGraph2ParamOptionalRef<float32>
            public const nint m_inspectExtraInfo = 0x240; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
            public const nint m_reloadStage = 0x258; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
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
        public static class CEffectData {
            public const nint m_vOrigin = 0x8; // VectorWS
            public const nint m_vStart = 0x14; // VectorWS
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
            public const nint m_nHitBox = 0x60; // int16
            public const nint m_nColor = 0x62; // uint8
            public const nint m_fFlags = 0x63; // uint8
            public const nint m_nAttachmentIndex = 0x64; // AttachmentHandle_t
            public const nint m_nAttachmentName = 0x68; // CUtlStringToken
            public const nint m_iEffectName = 0x6C; // uint16
            public const nint m_nExplosionType = 0x6E; // uint8
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
            public const nint m_flFadeInStart = 0x730; // float32
            public const nint m_flFadeInLength = 0x734; // float32
            public const nint m_flFadeOutModelStart = 0x738; // float32
            public const nint m_flFadeOutModelLength = 0x73C; // float32
            public const nint m_flFadeOutStart = 0x740; // float32
            public const nint m_flFadeOutLength = 0x744; // float32
            public const nint m_flStartTime = 0x748; // GameTime_t
            public const nint m_nDissolveType = 0x74C; // EntityDisolveType_t
            public const nint m_vDissolverOrigin = 0x750; // Vector
            public const nint m_nMagnitude = 0x75C; // uint32
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
        // NetworkVarNames: m_iFreezeTime (int)
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
        // NetworkVarNames: m_bBombPlanted (bool)
        // NetworkVarNames: m_arrProhibitedItemIndices (uint16)
        // NetworkVarNames: m_arrTournamentActiveCasterAccounts (uint32)
        // NetworkVarNames: m_numBestOfMaps (int)
        // NetworkVarNames: m_nHalloweenMaskListSeed (int)
        // NetworkVarNames: m_bBombDropped (bool)
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
            public const nint m_bTerroristTimeOutActive = 0xD4; // bool
            public const nint m_bCTTimeOutActive = 0xD5; // bool
            public const nint m_flTerroristTimeOutRemaining = 0xD8; // float32
            public const nint m_flCTTimeOutRemaining = 0xDC; // float32
            public const nint m_nTerroristTimeOuts = 0xE0; // int32
            public const nint m_nCTTimeOuts = 0xE4; // int32
            public const nint m_bTechnicalTimeOut = 0xE8; // bool
            public const nint m_bMatchWaitingForResume = 0xE9; // bool
            public const nint m_iFreezeTime = 0xEC; // int32
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
            public const nint m_bBombPlanted = 0x94F; // bool
            public const nint m_arrProhibitedItemIndices = 0x950; // uint16[100]
            public const nint m_arrTournamentActiveCasterAccounts = 0xA18; // uint32[4]
            public const nint m_numBestOfMaps = 0xA28; // int32
            public const nint m_nHalloweenMaskListSeed = 0xA2C; // int32
            public const nint m_bBombDropped = 0xA30; // bool
            public const nint m_iRoundWinStatus = 0xA34; // int32
            public const nint m_eRoundWinReason = 0xA38; // int32
            public const nint m_bTCantBuy = 0xA3C; // bool
            public const nint m_bCTCantBuy = 0xA3D; // bool
            public const nint m_iMatchStats_RoundResults = 0xA40; // int32[30]
            public const nint m_iMatchStats_PlayersAlive_CT = 0xAB8; // int32[30]
            public const nint m_iMatchStats_PlayersAlive_T = 0xB30; // int32[30]
            public const nint m_TeamRespawnWaveTimes = 0xBA8; // float32[32]
            public const nint m_flNextRespawnWave = 0xC28; // GameTime_t[32]
            public const nint m_vMinimapMins = 0xCA8; // Vector
            public const nint m_vMinimapMaxs = 0xCB4; // Vector
            public const nint m_MinimapVerticalSectionHeights = 0xCC0; // float32[8]
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
            public const nint m_iNumTerrorist = 0xD7C; // int32
            public const nint m_iNumCT = 0xD80; // int32
            public const nint m_iNumSpawnableTerrorist = 0xD84; // int32
            public const nint m_iNumSpawnableCT = 0xD88; // int32
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
            public const nint m_bAllowWeaponSwitch = 0x1008; // bool
            public const nint m_bRoundTimeWarningTriggered = 0x1009; // bool
            public const nint m_phaseChangeAnnouncementTime = 0x100C; // GameTime_t
            public const nint m_fNextUpdateTeamClanNamesTime = 0x1010; // float32
            public const nint m_flLastThinkTime = 0x1014; // GameTime_t
            public const nint m_fAccumulatedRoundOffDamage = 0x1018; // float32
            public const nint m_nShorthandedBonusLastEvalRound = 0x101C; // int32
            public const nint m_nMatchAbortedEarlyReason = 0x1068; // int32
            public const nint m_bHasTriggeredRoundStartMusic = 0x106C; // bool
            public const nint m_bSwitchingTeamsAtRoundReset = 0x106D; // bool
            public const nint m_pGameModeRules = 0x1088; // CCSGameModeRules*
            public const nint m_BtGlobalBlackboard = 0x1090; // KeyValues3
            public const nint m_hPlayerResource = 0x1128; // CHandle<CBaseEntity>
            public const nint m_RetakeRules = 0x1130; // CRetakeGameRules
            public const nint m_arrTeamUniqueKillWeaponsMatch = 0x1320; // CUtlVector<int32>[4]
            public const nint m_bTeamLastKillUsedUniqueWeaponMatch = 0x1380; // bool[4]
            public const nint m_nMatchEndCount = 0x13A8; // uint8
            public const nint m_nTTeamIntroVariant = 0x13AC; // int32
            public const nint m_nCTTeamIntroVariant = 0x13B0; // int32
            public const nint m_bTeamIntroPeriod = 0x13B4; // bool
            public const nint m_fTeamIntroPeriodEnd = 0x13B8; // GameTime_t
            public const nint m_bPlayedTeamIntroVO = 0x13BC; // bool
            public const nint m_iRoundEndWinnerTeam = 0x13C0; // int32
            public const nint m_eRoundEndReason = 0x13C4; // int32
            public const nint m_bRoundEndShowTimerDefend = 0x13C8; // bool
            public const nint m_iRoundEndTimerTime = 0x13CC; // int32
            public const nint m_sRoundEndFunFactToken = 0x13D0; // CUtlString
            public const nint m_iRoundEndFunFactPlayerSlot = 0x13D8; // CPlayerSlot
            public const nint m_iRoundEndFunFactData1 = 0x13DC; // int32
            public const nint m_iRoundEndFunFactData2 = 0x13E0; // int32
            public const nint m_iRoundEndFunFactData3 = 0x13E4; // int32
            public const nint m_sRoundEndMessage = 0x13E8; // CUtlString
            public const nint m_iRoundEndPlayerCount = 0x13F0; // int32
            public const nint m_bRoundEndNoMusic = 0x13F4; // bool
            public const nint m_iRoundEndLegacy = 0x13F8; // int32
            public const nint m_nRoundEndCount = 0x13FC; // uint8
            public const nint m_iRoundStartRoundNumber = 0x1400; // int32
            public const nint m_nRoundStartCount = 0x1404; // uint8
            public const nint m_flLastPerfSampleTime = 0x5410; // float64
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Outflow_CycleShuffled {
            public const nint m_Outputs = 0x48; // CUtlVector<CPulse_OutflowConnection>
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
            public const nint m_vInitialPosition = 0xB40; // Vector
            public const nint m_vInitialVelocity = 0xB4C; // Vector
            public const nint m_nBounces = 0xB58; // int32
            public const nint m_nExplodeEffectIndex = 0xB60; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
            public const nint m_nExplodeEffectTickBegin = 0xB68; // int32
            public const nint m_vecExplodeEffectOrigin = 0xB6C; // Vector
            public const nint m_flSpawnTime = 0xB78; // GameTime_t
            public const nint m_unOGSExtraFlags = 0xB7C; // uint8
            public const nint m_bDetonationRecorded = 0xB7D; // bool
            public const nint m_nItemIndex = 0xB7E; // uint16
            public const nint m_vecOriginalSpawnLocation = 0xB80; // Vector
            public const nint m_flLastBounceSoundTime = 0xB8C; // GameTime_t
            public const nint m_vecGrenadeSpin = 0xB90; // RotationVector
            public const nint m_vecLastHitSurfaceNormal = 0xB9C; // Vector
            public const nint m_nTicksAtZeroVelocity = 0xBA8; // int32
            public const nint m_bHasEverHitEnemy = 0xBAC; // bool
        }
        // Parent: CLogicalEntity
        // Field count: 13
        public static class CPhysConstraint {
            public const nint m_nameAttach1 = 0x4B0; // CUtlSymbolLarge
            public const nint m_nameAttach2 = 0x4B8; // CUtlSymbolLarge
            public const nint m_hAttach1 = 0x4C0; // CHandle<CBaseEntity>
            public const nint m_hAttach2 = 0x4C4; // CHandle<CBaseEntity>
            public const nint m_nameAttachment1 = 0x4C8; // CUtlSymbolLarge
            public const nint m_nameAttachment2 = 0x4D0; // CUtlSymbolLarge
            public const nint m_breakSound = 0x4D8; // CUtlSymbolLarge
            public const nint m_forceLimit = 0x4E0; // float32
            public const nint m_torqueLimit = 0x4E4; // float32
            public const nint m_minTeleportDistance = 0x4E8; // float32
            public const nint m_bSnapObjectPositions = 0x4EC; // bool
            public const nint m_bTreatEntity1AsInfiniteMass = 0x4ED; // bool
            public const nint m_OnBreak = 0x4F0; // CEntityIOOutput
        }
        // Parent: CLogicalEntity
        // Field count: 3
        public static class CLogicAchievement {
            public const nint m_bDisabled = 0x4A8; // bool
            public const nint m_iszAchievementEventID = 0x4B0; // CUtlSymbolLarge
            public const nint m_OnFired = 0x4B8; // CEntityIOOutput
        }
        // Parent: None
        // Field count: 3
        public static class CCSPlayerController_InventoryServices__NetworkedLoadoutSlot_t {
            public const nint pItem = 0x0; // CEconItemView*
            public const nint team = 0x8; // uint16
            public const nint slot = 0xA; // uint16
        }
        // Parent: CEntityComponent
        // Field count: 71
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
        // NetworkVarNames: m_bDynamicBounce (bool)
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
            public const nint m_nLightPathUniqueId = 0x118; // int32
            public const nint m_nLightMapUniqueId = 0x11C; // int32
            public const nint m_bRenderToCubemaps = 0x120; // bool
            public const nint m_bAllowSSTGeneration = 0x121; // bool
            public const nint m_nDirectLight = 0x124; // int32
            public const nint m_nIndirectLight = 0x128; // int32
            public const nint m_bDynamicBounce = 0x12C; // bool
            public const nint m_flFadeMinDist = 0x130; // float32
            public const nint m_flFadeMaxDist = 0x134; // float32
            public const nint m_flShadowFadeMinDist = 0x138; // float32
            public const nint m_flShadowFadeMaxDist = 0x13C; // float32
            public const nint m_bEnabled = 0x140; // bool
            public const nint m_bFlicker = 0x141; // bool
            public const nint m_bPrecomputedFieldsValid = 0x142; // bool
            public const nint m_vPrecomputedBoundsMins = 0x144; // Vector
            public const nint m_vPrecomputedBoundsMaxs = 0x150; // Vector
            public const nint m_vPrecomputedOBBOrigin = 0x15C; // Vector
            public const nint m_vPrecomputedOBBAngles = 0x168; // QAngle
            public const nint m_vPrecomputedOBBExtent = 0x174; // Vector
            public const nint m_flPrecomputedMaxRange = 0x180; // float32
            public const nint m_nFogLightingMode = 0x184; // int32
            public const nint m_flFogContributionStength = 0x188; // float32
            public const nint m_flNearClipPlane = 0x18C; // float32
            public const nint m_SkyColor = 0x190; // Color
            public const nint m_flSkyIntensity = 0x194; // float32
            public const nint m_SkyAmbientBounce = 0x198; // Color
            public const nint m_bUseSecondaryColor = 0x19C; // bool
            public const nint m_bMixedShadows = 0x19D; // bool
            public const nint m_flLightStyleStartTime = 0x1A0; // GameTime_t
            public const nint m_flCapsuleLength = 0x1A4; // float32
            public const nint m_flMinRoughness = 0x1A8; // float32
            public const nint m_bPvsModifyEntity = 0x1B8; // bool
        }
        // Parent: CBasePlayerWeapon
        // Field count: 51
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
        // NetworkVarNames: m_flWeaponActionPlaybackRate (float)
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
        public static class CCSWeaponBase {
            public const nint m_bRemoveable = 0xE20; // bool
            public const nint m_bPlayerAmmoStockOnPickup = 0xE21; // bool
            public const nint m_bRequireUseToTouch = 0xE22; // bool
            public const nint m_iWeaponGameplayAnimState = 0xE24; // WeaponGameplayAnimState
            public const nint m_flWeaponGameplayAnimStateTimestamp = 0xE28; // GameTime_t
            public const nint m_flInspectCancelCompleteTime = 0xE2C; // GameTime_t
            public const nint m_bInspectPending = 0xE30; // bool
            public const nint m_bInspectShouldLoop = 0xE31; // bool
            public const nint m_nLastEmptySoundCmdNum = 0xE5C; // int32
            public const nint m_bFireOnEmpty = 0xE78; // bool
            public const nint m_OnPlayerPickup = 0xE80; // CEntityIOOutput
            public const nint m_weaponMode = 0xE98; // CSWeaponMode
            public const nint m_flTurningInaccuracyDelta = 0xE9C; // float32
            public const nint m_vecTurningInaccuracyEyeDirLast = 0xEA0; // Vector
            public const nint m_flTurningInaccuracy = 0xEAC; // float32
            public const nint m_fAccuracyPenalty = 0xEB0; // float32
            public const nint m_flLastAccuracyUpdateTime = 0xEB4; // GameTime_t
            public const nint m_fAccuracySmoothedForZoom = 0xEB8; // float32
            public const nint m_iRecoilIndex = 0xEBC; // int32
            public const nint m_flRecoilIndex = 0xEC0; // float32
            public const nint m_bBurstMode = 0xEC4; // bool
            public const nint m_nPostponeFireReadyTicks = 0xEC8; // GameTick_t
            public const nint m_flPostponeFireReadyFrac = 0xECC; // float32
            public const nint m_bInReload = 0xED0; // bool
            public const nint m_flDroppedAtTime = 0xED4; // GameTime_t
            public const nint m_bIsHauledBack = 0xED8; // bool
            public const nint m_bSilencerOn = 0xED9; // bool
            public const nint m_flTimeSilencerSwitchComplete = 0xEDC; // GameTime_t
            public const nint m_flWeaponActionPlaybackRate = 0xEE0; // float32
            public const nint m_iOriginalTeamNumber = 0xEE4; // int32
            public const nint m_iMostRecentTeamNumber = 0xEE8; // int32
            public const nint m_bDroppedNearBuyZone = 0xEEC; // bool
            public const nint m_flNextAttackRenderTimeOffset = 0xEF0; // float32
            public const nint m_bCanBePickedUp = 0xF08; // bool
            public const nint m_bUseCanOverrideNextOwnerTouchTime = 0xF09; // bool
            public const nint m_nextOwnerTouchTime = 0xF0C; // GameTime_t
            public const nint m_nextPrevOwnerTouchTime = 0xF10; // GameTime_t
            public const nint m_nextPrevOwnerUseTime = 0xF18; // GameTime_t
            public const nint m_hPrevOwner = 0xF1C; // CHandle<CCSPlayerPawn>
            public const nint m_nDropTick = 0xF20; // GameTick_t
            public const nint m_bWasActiveWeaponWhenDropped = 0xF24; // bool
            public const nint m_donated = 0xF44; // bool
            public const nint m_fLastShotTime = 0xF48; // GameTime_t
            public const nint m_bWasOwnedByCT = 0xF4C; // bool
            public const nint m_bWasOwnedByTerrorist = 0xF4D; // bool
            public const nint m_numRemoveUnownedWeaponThink = 0xF50; // int32
            public const nint m_IronSightController = 0xF58; // CIronSightController
            public const nint m_iIronSightMode = 0xF70; // int32
            public const nint m_flLastLOSTraceFailureTime = 0xF74; // GameTime_t
            public const nint m_flWatTickOffset = 0xF78; // float32
            public const nint m_flLastShakeTime = 0xF88; // GameTime_t
        }
        // Parent: CBaseClientUIEntity
        // Field count: 2
        //
        // Metadata:
        // NetworkVarNames: m_hActivator (EHANDLE)
        public static class CPointClientUIDialog {
            public const nint m_hActivator = 0x890; // CHandle<CBaseEntity>
            public const nint m_bStartEnabled = 0x894; // bool
        }
        // Parent: CLogicalEntity
        // Field count: 4
        public static class CLogicLineToEntity {
            public const nint m_Line = 0x4A8; // CEntityOutputTemplate<Vector,Vector>
            public const nint m_SourceName = 0x4D0; // CUtlSymbolLarge
            public const nint m_StartEntity = 0x4D8; // CHandle<CBaseEntity>
            public const nint m_EndEntity = 0x4DC; // CHandle<CBaseEntity>
        }
        // Parent: CSoundAreaEntityBase
        // Field count: 1
        //
        // Metadata:
        // NetworkVarNames: m_flRadius (float)
        public static class CSoundAreaEntitySphere {
            public const nint m_flRadius = 0x4C8; // float32
        }
        // Parent: CPlayerPawnComponent
        // Field count: 4
        //
        // Metadata:
        // NetworkVarNames: m_bIsRescuing (bool)
        // NetworkVarNames: m_weaponPurchasesThisMatch (WeaponPurchaseTracker_t)
        // NetworkVarNames: m_weaponPurchasesThisRound (WeaponPurchaseTracker_t)
        public static class CCSPlayer_ActionTrackingServices {
            public const nint m_hLastWeaponBeforeC4AutoSwitch = 0x1F8; // CHandle<CBasePlayerWeapon>
            public const nint m_bIsRescuing = 0x224; // bool
            public const nint m_weaponPurchasesThisMatch = 0x228; // WeaponPurchaseTracker_t
            public const nint m_weaponPurchasesThisRound = 0x298; // WeaponPurchaseTracker_t
        }
        // Parent: CBaseButton
        // Field count: 0
        public static class CPhysicalButton {
        }
        // Parent: CLogicalEntity
        // Field count: 13
        public static class CInfoSpawnGroupLoadUnload {
            public const nint m_OnSpawnGroupLoadStarted = 0x4A8; // CEntityIOOutput
            public const nint m_OnSpawnGroupLoadFinished = 0x4C0; // CEntityIOOutput
            public const nint m_OnSpawnGroupUnloadStarted = 0x4D8; // CEntityIOOutput
            public const nint m_OnSpawnGroupUnloadFinished = 0x4F0; // CEntityIOOutput
            public const nint m_iszSpawnGroupName = 0x508; // CUtlSymbolLarge
            public const nint m_iszSpawnGroupFilterName = 0x510; // CUtlSymbolLarge
            public const nint m_iszLandmarkName = 0x518; // CUtlSymbolLarge
            public const nint m_sFixedSpawnGroupName = 0x520; // CUtlString
            public const nint m_flTimeoutInterval = 0x528; // float32
            public const nint m_bAutoActivate = 0x52C; // bool
            public const nint m_bUnloadingStarted = 0x52D; // bool
            public const nint m_bQueueActiveSpawnGroupChange = 0x52E; // bool
            public const nint m_bQueueFinishLoading = 0x52F; // bool
        }
        // Parent: CSoundAreaEntityBase
        // Field count: 2
        //
        // Metadata:
        // NetworkVarNames: m_vMin (Vector)
        // NetworkVarNames: m_vMax (Vector)
        public static class CSoundAreaEntityOrientedBox {
            public const nint m_vMin = 0x4C8; // Vector
            public const nint m_vMax = 0x4D4; // Vector
        }
        // Parent: CPlayer_MovementServices
        // Field count: 0
        public static class CCSObserver_MovementServices {
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        // MPulseEditorSubHeaderText
        public static class CPulseCell_Outflow_ListenForAnimgraphTag {
            public const nint m_OnStart = 0x48; // CPulse_ResumePoint
            public const nint m_OnEnd = 0x90; // CPulse_ResumePoint
            public const nint m_OnCanceled = 0xD8; // CPulse_ResumePoint
            public const nint m_TagName = 0x120; // CGlobalSymbol
        }
        // Parent: CEntityComponent
        // Field count: 2
        public static class CBodyComponent {
            public const nint m_pSceneNode = 0x8; // CGameSceneNode*
            public const nint __m_pChainEntity = 0x48; // CNetworkVarChainer
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Inflow_Method {
            public const nint m_MethodName = 0x80; // PulseSymbol_t
            public const nint m_Description = 0x90; // CUtlString
            public const nint m_bIsPublic = 0x98; // bool
            public const nint m_ReturnType = 0xA0; // CPulseValueFullType
            public const nint m_Args = 0xB8; // CUtlLeanVector<CPulseRuntimeMethodArg>
        }
        // Parent: CBaseCSGrenade
        // Field count: 0
        public static class CDecoyGrenade {
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
            public const nint m_NetworkedDynamicAttributes = 0xE8; // CAttributeList
            public const nint m_szCustomName = 0x160; // char[161]
            public const nint m_szCustomNameOverride = 0x201; // char[161]
        }
        // Parent: CMolotovGrenade
        // Field count: 0
        public static class CIncendiaryGrenade {
        }
        // Parent: CPointEntity
        // Field count: 1
        public static class CBaseDMStart {
            public const nint m_Master = 0x4A8; // CUtlSymbolLarge
        }
        // Parent: CBaseEntity
        // Field count: 32
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
        // NetworkVarNames: m_vecViewOffset (CNetworkViewOffsetVector)
        // NetworkVarNames: m_bvDisabledHitGroups (uint32)
        public static class CBaseModelEntity {
            public const nint m_CRenderComponent = 0x4A8; // CRenderComponent*
            public const nint m_CHitboxComponent = 0x4B0; // CHitboxComponent
            public const nint m_nDestructiblePartInitialStateDestructed0 = 0x4C8; // HitGroup_t
            public const nint m_nDestructiblePartInitialStateDestructed1 = 0x4CC; // HitGroup_t
            public const nint m_nDestructiblePartInitialStateDestructed2 = 0x4D0; // HitGroup_t
            public const nint m_nDestructiblePartInitialStateDestructed3 = 0x4D4; // HitGroup_t
            public const nint m_nDestructiblePartInitialStateDestructed4 = 0x4D8; // HitGroup_t
            public const nint m_nDestructiblePartInitialStateDestructed0_PartIndex = 0x4DC; // int32
            public const nint m_nDestructiblePartInitialStateDestructed1_PartIndex = 0x4E0; // int32
            public const nint m_nDestructiblePartInitialStateDestructed2_PartIndex = 0x4E4; // int32
            public const nint m_nDestructiblePartInitialStateDestructed3_PartIndex = 0x4E8; // int32
            public const nint m_nDestructiblePartInitialStateDestructed4_PartIndex = 0x4EC; // int32
            public const nint m_pDestructiblePartsSystemComponent = 0x4F0; // CDestructiblePartsComponent*
            public const nint m_flDissolveStartTime = 0x4F8; // GameTime_t
            public const nint m_OnIgnite = 0x500; // CEntityIOOutput
            public const nint m_nRenderMode = 0x518; // RenderMode_t
            public const nint m_nRenderFX = 0x519; // RenderFx_t
            public const nint m_bAllowFadeInView = 0x51A; // bool
            public const nint m_clrRender = 0x538; // Color
            public const nint m_vecRenderAttributes = 0x540; // CUtlVectorEmbeddedNetworkVar<EntityRenderAttribute_t>
            public const nint m_bRenderToCubemaps = 0x5A8; // bool
            public const nint m_bNoInterpolate = 0x5A9; // bool
            public const nint m_Collision = 0x5B0; // CCollisionProperty
            public const nint m_Glow = 0x660; // CGlowProperty
            public const nint m_flGlowBackfaceMult = 0x6B8; // float32
            public const nint m_fadeMinDist = 0x6BC; // float32
            public const nint m_fadeMaxDist = 0x6C0; // float32
            public const nint m_flFadeScale = 0x6C4; // float32
            public const nint m_flShadowStrength = 0x6C8; // float32
            public const nint m_nObjectCulling = 0x6CC; // uint8
            public const nint m_vecViewOffset = 0x6F8; // CNetworkViewOffsetVector
            public const nint m_bvDisabledHitGroups = 0x728; // uint32[1]
        }
        // Parent: 
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
        // Parent: CSceneEntity
        // Field count: 7
        public static class CInstancedSceneEntity {
            public const nint m_hOwner = 0x730; // CHandle<CBaseEntity>
            public const nint m_bHadOwner = 0x734; // bool
            public const nint m_flPostSpeakDelay = 0x738; // float32
            public const nint m_flPreDelay = 0x73C; // float32
            public const nint m_bIsBackground = 0x740; // bool
            public const nint m_bRemoveOnCompletion = 0x741; // bool
            public const nint m_hTarget = 0x744; // CHandle<CBaseEntity>
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_BaseValue {
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
            public const nint m_iszStackName = 0x4A8; // CUtlSymbolLarge
            public const nint m_iszOperatorName = 0x4B0; // CUtlSymbolLarge
            public const nint m_iszOpvarName = 0x4B8; // CUtlSymbolLarge
            public const nint m_vDistanceInnerMins = 0x4C0; // Vector
            public const nint m_vDistanceInnerMaxs = 0x4CC; // Vector
            public const nint m_vDistanceOuterMins = 0x4D8; // Vector
            public const nint m_vDistanceOuterMaxs = 0x4E4; // Vector
            public const nint m_nAABBDirection = 0x4F0; // int32
        }
        // Parent: CBaseEntity
        // Field count: 2
        public static class CSoundEventParameter {
            public const nint m_iszParamName = 0x4C0; // CUtlSymbolLarge
            public const nint m_flFloatValue = 0x4C8; // float32
        }
        // Parent: CPlayerPawnComponent
        // Field count: 0
        public static class CPlayer_WaterServices {
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        // MPulseEditorCanvasItemSpecKV3
        public static class CPulseCell_BooleanSwitchState {
            public const nint m_Condition = 0x48; // PulseObservableBoolExpression_t
            public const nint m_SubGraph = 0xC0; // CPulse_OutflowConnection
            public const nint m_WhenTrue = 0x108; // CPulse_OutflowConnection
            public const nint m_WhenFalse = 0x150; // CPulse_OutflowConnection
        }
        // Parent: CBaseButton
        // Field count: 0
        public static class CRotButton {
        }
        // Parent: CPointEntity
        // Field count: 2
        public static class CEnvViewPunch {
            public const nint m_flRadius = 0x4A8; // float32
            public const nint m_angViewPunch = 0x4AC; // QAngle
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
        public static class CDamageRecord {
            public const nint m_PlayerDamager = 0x30; // CHandle<CCSPlayerPawn>
            public const nint m_PlayerRecipient = 0x34; // CHandle<CCSPlayerPawn>
            public const nint m_hPlayerControllerDamager = 0x38; // CHandle<CCSPlayerController>
            public const nint m_hPlayerControllerRecipient = 0x3C; // CHandle<CCSPlayerController>
            public const nint m_szPlayerDamagerName = 0x40; // CUtlString
            public const nint m_szPlayerRecipientName = 0x48; // CUtlString
            public const nint m_DamagerXuid = 0x50; // uint64
            public const nint m_RecipientXuid = 0x58; // uint64
            public const nint m_flBulletsDamage = 0x60; // float32
            public const nint m_flDamage = 0x64; // float32
            public const nint m_flActualHealthRemoved = 0x68; // float32
            public const nint m_iNumHits = 0x6C; // int32
            public const nint m_iLastBulletUpdate = 0x70; // int32
            public const nint m_bIsOtherEnemy = 0x74; // bool
            public const nint m_killType = 0x75; // EKillTypes_t
        }
        // Parent: 
        // Field count: 11
        //
        // Metadata:
        // NetworkVarNames: m_nInteractsAs (uint64)
        // NetworkVarNames: m_nInteractsWith (uint64)
        // NetworkVarNames: m_nInteractsExclude (uint64)
        // NetworkVarNames: m_nEntityId (uint32)
        // NetworkVarNames: m_nOwnerId (uint32)
        // NetworkVarNames: m_nHierarchyId (uint16)
        // NetworkVarNames: m_nDetailLayerMask (uint16)
        // NetworkVarNames: m_nDetailLayerMaskType (uint8)
        // NetworkVarNames: m_nTargetDetailLayer (uint8)
        // NetworkVarNames: m_nCollisionGroup (uint8)
        // NetworkVarNames: m_nCollisionFunctionMask (uint8)
        public static class VPhysicsCollisionAttribute_t {
            public const nint m_nInteractsAs = 0x8; // uint64
            public const nint m_nInteractsWith = 0x10; // uint64
            public const nint m_nInteractsExclude = 0x18; // uint64
            public const nint m_nEntityId = 0x20; // uint32
            public const nint m_nOwnerId = 0x24; // uint32
            public const nint m_nHierarchyId = 0x28; // uint16
            public const nint m_nDetailLayerMask = 0x2A; // uint16
            public const nint m_nDetailLayerMaskType = 0x2C; // uint8
            public const nint m_nTargetDetailLayer = 0x2D; // uint8
            public const nint m_nCollisionGroup = 0x2E; // uint8
            public const nint m_nCollisionFunctionMask = 0x2F; // uint8
        }
        // Parent: CItem
        // Field count: 0
        public static class CItemKevlar {
        }
        // Parent: CBaseModelEntity
        // Field count: 26
        public static class CFuncShatterglass {
            public const nint m_matPanelTransform = 0x730; // matrix3x4_t
            public const nint m_matPanelTransformWsTemp = 0x760; // matrix3x4_t
            public const nint m_vecShatterGlassShards = 0x790; // CUtlVector<uint32>
            public const nint m_PanelSize = 0x7A8; // Vector2D
            public const nint m_flLastShatterSoundEmitTime = 0x7B0; // GameTime_t
            public const nint m_flLastCleanupTime = 0x7B4; // GameTime_t
            public const nint m_flInitAtTime = 0x7B8; // GameTime_t
            public const nint m_flGlassThickness = 0x7BC; // float32
            public const nint m_flSpawnInvulnerability = 0x7C0; // float32
            public const nint m_bBreakSilent = 0x7C4; // bool
            public const nint m_bBreakShardless = 0x7C5; // bool
            public const nint m_bBroken = 0x7C6; // bool
            public const nint m_bGlassNavIgnore = 0x7C7; // bool
            public const nint m_bGlassInFrame = 0x7C8; // bool
            public const nint m_bStartBroken = 0x7C9; // bool
            public const nint m_iInitialDamageType = 0x7CA; // uint8
            public const nint m_szDamagePositioningEntityName01 = 0x7D0; // CUtlSymbolLarge
            public const nint m_szDamagePositioningEntityName02 = 0x7D8; // CUtlSymbolLarge
            public const nint m_szDamagePositioningEntityName03 = 0x7E0; // CUtlSymbolLarge
            public const nint m_szDamagePositioningEntityName04 = 0x7E8; // CUtlSymbolLarge
            public const nint m_vInitialDamagePositions = 0x7F0; // CUtlVector<Vector>
            public const nint m_vExtraDamagePositions = 0x808; // CUtlVector<Vector>
            public const nint m_vInitialPanelVertices = 0x820; // CUtlVector<Vector4D>
            public const nint m_OnBroken = 0x838; // CEntityIOOutput
            public const nint m_iSurfaceType = 0x850; // uint8
            public const nint m_hMaterialDamageBase = 0x858; // CStrongHandle<InfoForResourceTypeIMaterial2>
        }
        // Parent: CPointEntity
        // Field count: 0
        public static class CNavWalkable {
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
        // NetworkVarNames: m_bBombDefused (bool)
        // NetworkVarNames: m_flTimerLength (float)
        // NetworkVarNames: m_bBeingDefused (bool)
        // NetworkVarNames: m_flDefuseLength (float)
        // NetworkVarNames: m_flDefuseCountDown (GameTime_t)
        // NetworkVarNames: m_hBombDefuser (CHandle<CCSPlayerPawn>)
        public static class CPlantedC4 {
            public const nint m_bBombTicking = 0xA28; // bool
            public const nint m_flC4Blow = 0xA2C; // GameTime_t
            public const nint m_nBombSite = 0xA30; // int32
            public const nint m_nSourceSoundscapeHash = 0xA34; // int32
            public const nint m_bAbortDetonationBecauseWorldIsFrozen = 0xA38; // bool
            public const nint m_AttributeManager = 0xA40; // CAttributeContainer
            public const nint m_OnBombDefused = 0xD38; // CEntityIOOutput
            public const nint m_OnBombBeginDefuse = 0xD50; // CEntityIOOutput
            public const nint m_OnBombDefuseAborted = 0xD68; // CEntityIOOutput
            public const nint m_bCannotBeDefused = 0xD80; // bool
            public const nint m_entitySpottedState = 0xD88; // EntitySpottedState_t
            public const nint m_nSpotRules = 0xDA0; // int32
            public const nint m_bHasExploded = 0xDA4; // bool
            public const nint m_bBombDefused = 0xDA5; // bool
            public const nint m_bTrainingPlacedByPlayer = 0xDA6; // bool
            public const nint m_flTimerLength = 0xDA8; // float32
            public const nint m_bBeingDefused = 0xDAC; // bool
            public const nint m_fLastDefuseTime = 0xDB4; // GameTime_t
            public const nint m_flDefuseLength = 0xDBC; // float32
            public const nint m_flDefuseCountDown = 0xDC0; // GameTime_t
            public const nint m_hBombDefuser = 0xDC4; // CHandle<CCSPlayerPawn>
            public const nint m_iProgressBarTime = 0xDC8; // int32
            public const nint m_bVoiceAlertFired = 0xDCC; // bool
            public const nint m_bVoiceAlertPlayed = 0xDCD; // bool[4]
            public const nint m_flNextBotBeepTime = 0xDD4; // GameTime_t
            public const nint m_angCatchUpToPlayerEye = 0xDDC; // QAngle
            public const nint m_flLastSpinDetectionTime = 0xDE8; // GameTime_t
        }
        // Parent: CEnvSoundscapeProxy
        // Field count: 0
        public static class CEnvSoundscapeProxyAlias_snd_soundscape_proxy {
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
            public const nint m_iActiveIssueIndex = 0x4A8; // int32
            public const nint m_iOnlyTeamToVote = 0x4AC; // int32
            public const nint m_nVoteOptionCount = 0x4B0; // int32[5]
            public const nint m_nPotentialVotes = 0x4C4; // int32
            public const nint m_bIsYesNoVote = 0x4C8; // bool
            public const nint m_acceptingVotesTimer = 0x4D0; // CountdownTimer
            public const nint m_executeCommandTimer = 0x4E8; // CountdownTimer
            public const nint m_resetVoteTimer = 0x500; // CountdownTimer
            public const nint m_nVotesCast = 0x518; // int32[64]
            public const nint m_playerHoldingVote = 0x618; // CPlayerSlot
            public const nint m_playerOverrideForVote = 0x61C; // CPlayerSlot
            public const nint m_nHighestCountIndex = 0x620; // int32
            public const nint m_potentialIssues = 0x628; // CUtlVector<CBaseIssue*>
            public const nint m_VoteOptions = 0x640; // CUtlVector<char*>
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Inflow_Yield {
            public const nint m_UnyieldResume = 0x48; // CPulse_ResumePoint
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MPropertyDescription
        public static class CPulseMathlib {
        }
        // Parent: CPointEntity
        // Field count: 3
        public static class CPhysImpact {
            public const nint m_damage = 0x4A8; // float32
            public const nint m_distance = 0x4AC; // float32
            public const nint m_directionEntityName = 0x4B0; // CUtlSymbolLarge
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
        public static class CBaseEntity {
            public const nint m_CBodyComponent = 0x38; // CBodyComponent*
            public const nint m_NetworkTransmitComponent = 0x40; // CNetworkTransmitComponent
            public const nint m_aThinkFunctions = 0x250; // CUtlVector<thinkfunc_t>
            public const nint m_iCurrentThinkContext = 0x268; // int32
            public const nint m_nLastThinkTick = 0x26C; // GameTick_t
            public const nint m_bDisabledContextThinks = 0x270; // bool
            public const nint m_isSteadyState = 0x280; // CTypedBitVec<64>
            public const nint m_lastNetworkChange = 0x288; // float32
            public const nint m_ResponseContexts = 0x298; // CUtlVector<ResponseContext_t>
            public const nint m_iszResponseContext = 0x2B0; // CUtlSymbolLarge
            public const nint m_iHealth = 0x2D8; // int32
            public const nint m_iMaxHealth = 0x2DC; // int32
            public const nint m_lifeState = 0x2E0; // uint8
            public const nint m_flDamageAccumulator = 0x2E4; // float32
            public const nint m_bTakesDamage = 0x2E8; // bool
            public const nint m_nTakeDamageFlags = 0x2F0; // TakeDamageFlags_t
            public const nint m_nPlatformType = 0x2F8; // EntityPlatformTypes_t
            public const nint m_MoveCollide = 0x2FA; // MoveCollide_t
            public const nint m_MoveType = 0x2FB; // MoveType_t
            public const nint m_nActualMoveType = 0x2FC; // MoveType_t
            public const nint m_nWaterTouch = 0x2FD; // uint8
            public const nint m_nSlimeTouch = 0x2FE; // uint8
            public const nint m_bRestoreInHierarchy = 0x2FF; // bool
            public const nint m_target = 0x300; // CUtlSymbolLarge
            public const nint m_hDamageFilter = 0x308; // CHandle<CBaseFilter>
            public const nint m_iszDamageFilterName = 0x310; // CUtlSymbolLarge
            public const nint m_flMoveDoneTime = 0x318; // float32
            public const nint m_nSubclassID = 0x31C; // CUtlStringToken
            public const nint m_flAnimTime = 0x328; // float32
            public const nint m_flSimulationTime = 0x32C; // float32
            public const nint m_flCreateTime = 0x330; // GameTime_t
            public const nint m_bClientSideRagdoll = 0x334; // bool
            public const nint m_ubInterpolationFrame = 0x335; // uint8
            public const nint m_vPrevVPhysicsUpdatePos = 0x338; // Vector
            public const nint m_iTeamNum = 0x344; // uint8
            public const nint m_iGlobalname = 0x348; // CUtlSymbolLarge
            public const nint m_iSentToClients = 0x350; // int32
            public const nint m_flSpeed = 0x354; // float32
            public const nint m_sUniqueHammerID = 0x358; // CUtlString
            public const nint m_spawnflags = 0x360; // uint32
            public const nint m_nNextThinkTick = 0x364; // GameTick_t
            public const nint m_nSimulationTick = 0x368; // int32
            public const nint m_OnKilled = 0x370; // CEntityIOOutput
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
            public const nint m_bGravityDisabled = 0x408; // bool
            public const nint m_bAnimatedEveryTick = 0x409; // bool
            public const nint m_flActualGravityScale = 0x40C; // float32
            public const nint m_bGravityActuallyDisabled = 0x410; // bool
            public const nint m_bDisableLowViolence = 0x411; // bool
            public const nint m_nWaterType = 0x412; // uint8
            public const nint m_iEFlags = 0x414; // int32
            public const nint m_OnUser1 = 0x418; // CEntityIOOutput
            public const nint m_OnUser2 = 0x430; // CEntityIOOutput
            public const nint m_OnUser3 = 0x448; // CEntityIOOutput
            public const nint m_OnUser4 = 0x460; // CEntityIOOutput
            public const nint m_iInitialTeamNum = 0x478; // int32
            public const nint m_flNavIgnoreUntilTime = 0x47C; // GameTime_t
            public const nint m_vecAngVelocity = 0x480; // QAngle
            public const nint m_bNetworkQuantizeOriginAndAngles = 0x48C; // bool
            public const nint m_bLagCompensate = 0x48D; // bool
            public const nint m_pBlocker = 0x490; // CHandle<CBaseEntity>
            public const nint m_flLocalTime = 0x494; // float32
            public const nint m_flVPhysicsUpdateLocalTime = 0x498; // float32
            public const nint m_nBloodType = 0x49C; // BloodType
            public const nint m_pPulseGraphInstance = 0x4A0; // CPulseGraphInstance_ServerEntity*
        }
        // Parent: CPlayerPawnComponent
        // Field count: 0
        public static class CPlayer_UseServices {
        }
        // Parent: 
        // Field count: 2
        //
        // Metadata:
        // NetworkVarNames: m_hOwner (CEntityHandle)
        // NetworkVarNames: m_name (CUtlStringToken)
        public static class CGameSceneNodeHandle {
            public const nint m_hOwner = 0x8; // CEntityHandle
            public const nint m_name = 0xC; // CUtlStringToken
        }
        // Parent: CMarkupVolumeTagged
        // Field count: 4
        public static class CMarkupVolumeWithRef {
            public const nint m_bUseRef = 0x778; // bool
            public const nint m_vRefPosEntitySpace = 0x77C; // Vector
            public const nint m_vRefPosWorldSpace = 0x788; // VectorWS
            public const nint m_flRefDot = 0x794; // float32
        }
        // Parent: CCSGO_TeamPreviewCharacterPosition
        // Field count: 0
        public static class CCSGO_TeamSelectCharacterPosition {
        }
        // Parent: None
        // Field count: 1
        public static class CPulseCell_Unknown {
            public const nint m_UnknownKeys = 0x48; // KeyValues3
        }
        // Parent: CFuncPlat
        // Field count: 2
        public static class CFuncPlatRot {
            public const nint m_end = 0x7E0; // QAngle
            public const nint m_start = 0x7EC; // QAngle
        }
        // Parent: CPointEntity
        // Field count: 4
        public static class CRagdollMagnet {
            public const nint m_bDisabled = 0x4A8; // bool
            public const nint m_radius = 0x4AC; // float32
            public const nint m_force = 0x4B0; // float32
            public const nint m_axis = 0x4B4; // VectorWS
        }
        // Parent: CPointEntity
        // Field count: 0
        public static class CInfoInstructorHintTarget {
        }
        // Parent: CSprite
        // Field count: 0
        public static class CSpriteAlias_env_glow {
        }
        // Parent: CInferno
        // Field count: 0
        public static class CFireCrackerBlast {
        }
        // Parent: CBaseModelEntity
        // Field count: 4
        //
        // Metadata:
        // NetworkVarNames: m_flLightScale (float32)
        // NetworkVarNames: m_Radius (float32)
        public static class CSpotlightEnd {
            public const nint m_flLightScale = 0x730; // float32
            public const nint m_Radius = 0x734; // float32
            public const nint m_vSpotlightDir = 0x738; // Vector
            public const nint m_vSpotlightOrg = 0x744; // VectorWS
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
            public const nint m_hSkyMaterial = 0x730; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_hSkyMaterialLightingOnly = 0x738; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_bStartDisabled = 0x740; // bool
            public const nint m_vTintColor = 0x741; // Color
            public const nint m_vTintColorLightingOnly = 0x745; // Color
            public const nint m_flBrightnessScale = 0x74C; // float32
            public const nint m_nFogType = 0x750; // int32
            public const nint m_flFogMinStart = 0x754; // float32
            public const nint m_flFogMinEnd = 0x758; // float32
            public const nint m_flFogMaxStart = 0x75C; // float32
            public const nint m_flFogMaxEnd = 0x760; // float32
            public const nint m_bEnabled = 0x764; // bool
        }
        // Parent: CPointEntity
        // Field count: 0
        public static class CInfoSpawnGroupLandmark {
        }
        // Parent: CPointEntity
        // Field count: 12
        public static class CPointAngleSensor {
            public const nint m_bDisabled = 0x4A8; // bool
            public const nint m_nLookAtName = 0x4B0; // CUtlSymbolLarge
            public const nint m_hTargetEntity = 0x4B8; // CHandle<CBaseEntity>
            public const nint m_hLookAtEntity = 0x4BC; // CHandle<CBaseEntity>
            public const nint m_flDuration = 0x4C0; // float32
            public const nint m_flDotTolerance = 0x4C4; // float32
            public const nint m_flFacingTime = 0x4C8; // GameTime_t
            public const nint m_bFired = 0x4CC; // bool
            public const nint m_OnFacingLookat = 0x4D0; // CEntityIOOutput
            public const nint m_OnNotFacingLookat = 0x4E8; // CEntityIOOutput
            public const nint m_TargetDir = 0x500; // CEntityOutputTemplate<Vector,Vector>
            public const nint m_FacingPercentage = 0x528; // CEntityOutputTemplate<float32,float32>
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
        public static class CEnvWindController {
            public const nint m_EnvWindShared = 0x4A8; // CEnvWindShared
            public const nint m_fDirectionVariation = 0x5D8; // float32
            public const nint m_fSpeedVariation = 0x5DC; // float32
            public const nint m_fTurbulence = 0x5E0; // float32
            public const nint m_fVolumeHalfExtentXY = 0x5E4; // float32
            public const nint m_fVolumeHalfExtentZ = 0x5E8; // float32
            public const nint m_nVolumeResolutionXY = 0x5EC; // int32
            public const nint m_nVolumeResolutionZ = 0x5F0; // int32
            public const nint m_nClipmapLevels = 0x5F4; // int32
            public const nint m_bIsMaster = 0x5F8; // bool
            public const nint m_bFirstTime = 0x5F9; // bool
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
        // Parent: CPhysConstraint
        // Field count: 48
        public static class CGenericConstraint {
            public const nint m_nLinearMotionX = 0x510; // JointMotion_t
            public const nint m_nLinearMotionY = 0x514; // JointMotion_t
            public const nint m_nLinearMotionZ = 0x518; // JointMotion_t
            public const nint m_flLinearFrequencyX = 0x51C; // float32
            public const nint m_flLinearFrequencyY = 0x520; // float32
            public const nint m_flLinearFrequencyZ = 0x524; // float32
            public const nint m_flLinearDampingRatioX = 0x528; // float32
            public const nint m_flLinearDampingRatioY = 0x52C; // float32
            public const nint m_flLinearDampingRatioZ = 0x530; // float32
            public const nint m_flMaxLinearImpulseX = 0x534; // float32
            public const nint m_flMaxLinearImpulseY = 0x538; // float32
            public const nint m_flMaxLinearImpulseZ = 0x53C; // float32
            public const nint m_flBreakAfterTimeX = 0x540; // float32
            public const nint m_flBreakAfterTimeY = 0x544; // float32
            public const nint m_flBreakAfterTimeZ = 0x548; // float32
            public const nint m_flBreakAfterTimeStartTimeX = 0x54C; // GameTime_t
            public const nint m_flBreakAfterTimeStartTimeY = 0x550; // GameTime_t
            public const nint m_flBreakAfterTimeStartTimeZ = 0x554; // GameTime_t
            public const nint m_flBreakAfterTimeThresholdX = 0x558; // float32
            public const nint m_flBreakAfterTimeThresholdY = 0x55C; // float32
            public const nint m_flBreakAfterTimeThresholdZ = 0x560; // float32
            public const nint m_flNotifyForceX = 0x564; // float32
            public const nint m_flNotifyForceY = 0x568; // float32
            public const nint m_flNotifyForceZ = 0x56C; // float32
            public const nint m_flNotifyForceMinTimeX = 0x570; // float32
            public const nint m_flNotifyForceMinTimeY = 0x574; // float32
            public const nint m_flNotifyForceMinTimeZ = 0x578; // float32
            public const nint m_flNotifyForceLastTimeX = 0x57C; // GameTime_t
            public const nint m_flNotifyForceLastTimeY = 0x580; // GameTime_t
            public const nint m_flNotifyForceLastTimeZ = 0x584; // GameTime_t
            public const nint m_bAxisNotifiedX = 0x588; // bool
            public const nint m_bAxisNotifiedY = 0x589; // bool
            public const nint m_bAxisNotifiedZ = 0x58A; // bool
            public const nint m_nAngularMotionX = 0x58C; // JointMotion_t
            public const nint m_nAngularMotionY = 0x590; // JointMotion_t
            public const nint m_nAngularMotionZ = 0x594; // JointMotion_t
            public const nint m_flAngularFrequencyX = 0x598; // float32
            public const nint m_flAngularFrequencyY = 0x59C; // float32
            public const nint m_flAngularFrequencyZ = 0x5A0; // float32
            public const nint m_flAngularDampingRatioX = 0x5A4; // float32
            public const nint m_flAngularDampingRatioY = 0x5A8; // float32
            public const nint m_flAngularDampingRatioZ = 0x5AC; // float32
            public const nint m_flMaxAngularImpulseX = 0x5B0; // float32
            public const nint m_flMaxAngularImpulseY = 0x5B4; // float32
            public const nint m_flMaxAngularImpulseZ = 0x5B8; // float32
            public const nint m_NotifyForceReachedX = 0x5C0; // CEntityIOOutput
            public const nint m_NotifyForceReachedY = 0x5D8; // CEntityIOOutput
            public const nint m_NotifyForceReachedZ = 0x5F0; // CEntityIOOutput
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Outflow_CycleRandom {
            public const nint m_Outputs = 0x48; // CUtlVector<CPulse_OutflowConnection>
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Step_PublicOutput {
            public const nint m_OutputIndex = 0x48; // PulseRuntimeOutputIndex_t
        }
        // Parent: CBeam
        // Field count: 5
        public static class CEnvLaser {
            public const nint m_iszLaserTarget = 0x7D0; // CUtlSymbolLarge
            public const nint m_pSprite = 0x7D8; // CSprite*
            public const nint m_iszSpriteName = 0x7E0; // CUtlSymbolLarge
            public const nint m_firePosition = 0x7E8; // Vector
            public const nint m_flStartFrame = 0x7F4; // float32
        }
        // Parent: CBaseEntity
        // Field count: 8
        public static class CSoundOpvarSetEntity {
            public const nint m_iszStackName = 0x4C0; // CUtlSymbolLarge
            public const nint m_iszOperatorName = 0x4C8; // CUtlSymbolLarge
            public const nint m_iszOpvarName = 0x4D0; // CUtlSymbolLarge
            public const nint m_nOpvarType = 0x4D8; // int32
            public const nint m_nOpvarIndex = 0x4DC; // int32
            public const nint m_flOpvarValue = 0x4E0; // float32
            public const nint m_OpvarValueString = 0x4E8; // CUtlSymbolLarge
            public const nint m_bSetOnSpawn = 0x4F0; // bool
        }
        // Parent: CBaseEntity
        // Field count: 2
        public static class CEnvBeverage {
            public const nint m_CanInDispenser = 0x4A8; // bool
            public const nint m_nBeverageType = 0x4AC; // int32
        }
        // Parent: CLogicalEntity
        // Field count: 13
        public static class CPhysMotor {
            public const nint m_nameAttach = 0x4A8; // CUtlSymbolLarge
            public const nint m_nameAnchor = 0x4B0; // CUtlSymbolLarge
            public const nint m_hAttachedObject = 0x4B8; // CHandle<CBaseEntity>
            public const nint m_hAnchorObject = 0x4BC; // CHandle<CBaseEntity>
            public const nint m_spinUp = 0x4C0; // float32
            public const nint m_spinDown = 0x4C4; // float32
            public const nint m_flMotorFriction = 0x4C8; // float32
            public const nint m_additionalAcceleration = 0x4CC; // float32
            public const nint m_angularAcceleration = 0x4D0; // float32
            public const nint m_flTorqueScale = 0x4D4; // float32
            public const nint m_flTargetSpeed = 0x4D8; // float32
            public const nint m_flSpeedWhenSpinUpOrSpinDownStarted = 0x4DC; // float32
            public const nint m_motor = 0x4F0; // CMotorController
        }
        // Parent: CLogicalEntity
        // Field count: 1
        public static class CLogicGameEvent {
            public const nint m_iszEventName = 0x4A8; // CUtlSymbolLarge
        }
        // Parent: CPhysicsProp
        // Field count: 0
        public static class CPhysicsPropMultiplayer {
        }
        // Parent: CPointEntity
        // Field count: 10
        public static class CPhysExplosion {
            public const nint m_bExplodeOnSpawn = 0x4A8; // bool
            public const nint m_flMagnitude = 0x4AC; // float32
            public const nint m_flDamage = 0x4B0; // float32
            public const nint m_radius = 0x4B4; // float32
            public const nint m_targetEntityName = 0x4B8; // CUtlSymbolLarge
            public const nint m_flInnerRadius = 0x4C0; // float32
            public const nint m_flPushScale = 0x4C4; // float32
            public const nint m_bConvertToDebrisWhenPossible = 0x4C8; // bool
            public const nint m_bAffectInvulnerableEnts = 0x4C9; // bool
            public const nint m_OnPushedPlayer = 0x4D0; // CEntityIOOutput
        }
        // Parent: CPhysConstraint
        // Field count: 14
        public static class CSplineConstraint {
            public const nint m_vAnchorOffsetRestore = 0x558; // Vector
            public const nint m_hSplineEntity = 0x564; // CHandle<CBaseEntity>
            public const nint m_bEnableLateralConstraint = 0x570; // bool
            public const nint m_bEnableVerticalConstraint = 0x571; // bool
            public const nint m_bEnableAngularConstraint = 0x572; // bool
            public const nint m_bEnableLimit = 0x573; // bool
            public const nint m_bFireEventsOnPath = 0x574; // bool
            public const nint m_flLinearFrequency = 0x578; // float32
            public const nint m_flLinarDampingRatio = 0x57C; // float32
            public const nint m_flJointFriction = 0x580; // float32
            public const nint m_flTransitionTime = 0x584; // float32
            public const nint m_vPreSolveAnchorPos = 0x598; // VectorWS
            public const nint m_StartTransitionTime = 0x5A4; // GameTime_t
            public const nint m_vTangentSpaceAnchorAtTransitionStart = 0x5A8; // Vector
        }
        // Parent: CLogicalEntity
        // Field count: 6
        public static class CLogicCompare {
            public const nint m_flInValue = 0x4A8; // float32
            public const nint m_flCompareValue = 0x4AC; // float32
            public const nint m_OnLessThan = 0x4B0; // CEntityOutputTemplate<float32,float32>
            public const nint m_OnEqualTo = 0x4D0; // CEntityOutputTemplate<float32,float32>
            public const nint m_OnNotEqualTo = 0x4F0; // CEntityOutputTemplate<float32,float32>
            public const nint m_OnGreaterThan = 0x510; // CEntityOutputTemplate<float32,float32>
        }
        // Parent: None
        // Field count: 0
        public static class CCSGameModeRules_Noop {
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulse_BlackboardReference {
            public const nint m_hBlackboardResource = 0x0; // CStrongHandle<InfoForResourceTypeIPulseGraphDef>
            public const nint m_BlackboardResource = 0x8; // PulseSymbol_t
            public const nint m_nNodeID = 0x18; // PulseDocNodeID_t
            public const nint m_NodeName = 0x20; // CGlobalSymbol
        }
        // Parent: CFuncTrackTrain
        // Field count: 1
        public static class CFuncTankTrain {
            public const nint m_OnDeath = 0x858; // CEntityIOOutput
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
        public static class CPointClientUIWorldPanel {
            public const nint m_bIgnoreInput = 0x890; // bool
            public const nint m_bLit = 0x891; // bool
            public const nint m_bFollowPlayerAcrossTeleport = 0x892; // bool
            public const nint m_flWidth = 0x894; // float32
            public const nint m_flHeight = 0x898; // float32
            public const nint m_flDPI = 0x89C; // float32
            public const nint m_flInteractDistance = 0x8A0; // float32
            public const nint m_flDepthOffset = 0x8A4; // float32
            public const nint m_unOwnerContext = 0x8A8; // uint32
            public const nint m_unHorizontalAlign = 0x8AC; // uint32
            public const nint m_unVerticalAlign = 0x8B0; // uint32
            public const nint m_unOrientation = 0x8B4; // uint32
            public const nint m_bAllowInteractionFromAllSceneWorlds = 0x8B8; // bool
            public const nint m_vecCSSClasses = 0x8C0; // CNetworkUtlVectorBase<CUtlSymbolLarge>
            public const nint m_bOpaque = 0x8D8; // bool
            public const nint m_bNoDepth = 0x8D9; // bool
            public const nint m_bVisibleWhenParentNoDraw = 0x8DA; // bool
            public const nint m_bRenderBackface = 0x8DB; // bool
            public const nint m_bUseOffScreenIndicator = 0x8DC; // bool
            public const nint m_bExcludeFromSaveGames = 0x8DD; // bool
            public const nint m_bGrabbable = 0x8DE; // bool
            public const nint m_bOnlyRenderToTexture = 0x8DF; // bool
            public const nint m_bDisableMipGen = 0x8E0; // bool
            public const nint m_nExplicitImageLayout = 0x8E4; // int32
        }
        // Parent: CSoundEventEntity
        // Field count: 1
        //
        // Metadata:
        // NetworkVarNames: m_flRadius (float)
        public static class CSoundEventSphereEntity {
            public const nint m_flRadius = 0x558; // float32
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
        // Parent: CRuleEntity
        // Field count: 0
        public static class CRuleBrushEntity {
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
            public const nint m_bPlayedIntroVcd = 0x4A8; // bool
            public const nint m_bNeedToPlayFiveSecondsRemaining = 0x4A9; // bool
            public const nint m_dblPreMatchDraftSequenceTime = 0x4C8; // float64
            public const nint m_bPreMatchDraftStateChanged = 0x4D0; // bool
            public const nint m_nDraftType = 0x4D4; // int32
            public const nint m_nTeamWinningCoinToss = 0x4D8; // int32
            public const nint m_nTeamWithFirstChoice = 0x4DC; // int32[64]
            public const nint m_nVoteMapIdsList = 0x5DC; // int32[7]
            public const nint m_nAccountIDs = 0x5F8; // int32[64]
            public const nint m_nMapId0 = 0x6F8; // int32[64]
            public const nint m_nMapId1 = 0x7F8; // int32[64]
            public const nint m_nMapId2 = 0x8F8; // int32[64]
            public const nint m_nMapId3 = 0x9F8; // int32[64]
            public const nint m_nMapId4 = 0xAF8; // int32[64]
            public const nint m_nMapId5 = 0xBF8; // int32[64]
            public const nint m_nStartingSide0 = 0xCF8; // int32[64]
            public const nint m_nCurrentPhase = 0xDF8; // int32
            public const nint m_nPhaseStartTick = 0xDFC; // int32
            public const nint m_nPhaseDurationTicks = 0xE00; // int32
            public const nint m_OnMapVetoed = 0xE08; // CEntityOutputTemplate<CUtlSymbolLarge,CUtlSymbolLarge>
            public const nint m_OnMapPicked = 0xE28; // CEntityOutputTemplate<CUtlSymbolLarge,CUtlSymbolLarge>
            public const nint m_OnSidesPicked = 0xE48; // CEntityOutputTemplate<int32,int32>
            public const nint m_OnNewPhaseStarted = 0xE68; // CEntityOutputTemplate<int32,int32>
            public const nint m_OnLevelTransition = 0xE88; // CEntityOutputTemplate<int32,int32>
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
        // Parent: CBaseEntity
        // Field count: 0
        public static class CFuncPropRespawnZone {
        }
        // Parent: CBaseFilter
        // Field count: 1
        public static class CFilterModel {
            public const nint m_iFilterModel = 0x4E0; // CUtlSymbolLarge
        }
        // Parent: CCSWeaponBaseGun
        // Field count: 0
        public static class CWeaponP90 {
        }
        // Parent: CPointEntity
        // Field count: 0
        public static class CNavSpaceInfo {
        }
        // Parent: CPhysConstraint
        // Field count: 10
        public static class CPhysSlideConstraint {
            public const nint m_axisEnd = 0x510; // VectorWS
            public const nint m_slideFriction = 0x51C; // float32
            public const nint m_systemLoadScale = 0x520; // float32
            public const nint m_initialOffset = 0x524; // float32
            public const nint m_bEnableLinearConstraint = 0x528; // bool
            public const nint m_bEnableAngularConstraint = 0x529; // bool
            public const nint m_flMotorFrequency = 0x52C; // float32
            public const nint m_flMotorDampingRatio = 0x530; // float32
            public const nint m_bUseEntityPivot = 0x534; // bool
            public const nint m_soundInfo = 0x538; // ConstraintSoundInfo
        }
        // Parent: CBaseEntity
        // Field count: 2
        //
        // Metadata:
        // NetworkVarNames: m_strGraphName (CUtlString)
        // NetworkVarNames: m_strStateBlob (CUtlString)
        public static class CPulseGameBlackboard {
            public const nint m_strGraphName = 0x4B0; // CUtlString
            public const nint m_strStateBlob = 0x4B8; // CUtlString
        }
        // Parent: CSoundEventEntity
        // Field count: 0
        public static class CSoundEventEntityAlias_snd_event_point {
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        // MPulseEditorHeaderIcon
        public static class CPulseCell_Value_RandomInt {
        }
        // Parent: CPointEntity
        // Field count: 2
        public static class CPointGamestatsCounter {
            public const nint m_strStatisticName = 0x4A8; // CUtlSymbolLarge
            public const nint m_bDisabled = 0x4B0; // bool
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
            public const nint m_bLoop = 0x730; // bool
            public const nint m_flFPS = 0x734; // float32
            public const nint m_hPositionKeys = 0x738; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_hRotationKeys = 0x740; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_vAnimationBoundsMin = 0x748; // Vector
            public const nint m_vAnimationBoundsMax = 0x754; // Vector
            public const nint m_flStartTime = 0x760; // float32
            public const nint m_flStartFrame = 0x764; // float32
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
            public const nint m_hSpriteMaterial = 0x730; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_hAttachedToEntity = 0x738; // CHandle<CBaseEntity>
            public const nint m_nAttachment = 0x73C; // AttachmentHandle_t
            public const nint m_flSpriteFramerate = 0x740; // float32
            public const nint m_flFrame = 0x744; // float32
            public const nint m_flDieTime = 0x748; // GameTime_t
            public const nint m_nBrightness = 0x758; // uint32
            public const nint m_flBrightnessDuration = 0x75C; // float32
            public const nint m_flSpriteScale = 0x760; // float32
            public const nint m_flScaleDuration = 0x764; // float32
            public const nint m_bWorldSpaceScale = 0x768; // bool
            public const nint m_flGlowProxySize = 0x76C; // float32
            public const nint m_flHDRColorScale = 0x770; // float32
            public const nint m_flLastTime = 0x774; // GameTime_t
            public const nint m_flMaxFrame = 0x778; // float32
            public const nint m_flStartScale = 0x77C; // float32
            public const nint m_flDestScale = 0x780; // float32
            public const nint m_flScaleTimeStart = 0x784; // GameTime_t
            public const nint m_nStartBrightness = 0x788; // int32
            public const nint m_nDestBrightness = 0x78C; // int32
            public const nint m_flBrightnessTimeStart = 0x790; // GameTime_t
            public const nint m_nSpriteWidth = 0x794; // int32
            public const nint m_nSpriteHeight = 0x798; // int32
        }
        // Parent: CPathKeyFrame
        // Field count: 11
        public static class CBaseMoveBehavior {
            public const nint m_iPositionInterpolator = 0x500; // int32
            public const nint m_iRotationInterpolator = 0x504; // int32
            public const nint m_flAnimStartTime = 0x508; // float32
            public const nint m_flAnimEndTime = 0x50C; // float32
            public const nint m_flAverageSpeedAcrossFrame = 0x510; // float32
            public const nint m_pCurrentKeyFrame = 0x518; // CPathKeyFrame*
            public const nint m_pTargetKeyFrame = 0x520; // CPathKeyFrame*
            public const nint m_pPreKeyFrame = 0x528; // CPathKeyFrame*
            public const nint m_pPostKeyFrame = 0x530; // CPathKeyFrame*
            public const nint m_flTimeIntoFrame = 0x538; // float32
            public const nint m_iDirection = 0x53C; // int32
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
            public const nint m_ActualFlags = 0x730; // uint8
            public const nint m_Flags = 0x731; // uint8
            public const nint m_LightStyle = 0x732; // uint8
            public const nint m_On = 0x733; // bool
            public const nint m_Radius = 0x734; // float32
            public const nint m_Exponent = 0x738; // int32
            public const nint m_InnerAngle = 0x73C; // float32
            public const nint m_OuterAngle = 0x740; // float32
            public const nint m_SpotRadius = 0x744; // float32
        }
        // Parent: CCSWeaponBaseGun
        // Field count: 2
        //
        // Metadata:
        // NetworkVarNames: m_fFireTime (GameTime_t)
        public static class CWeaponTaser {
            public const nint m_fFireTime = 0x1150; // GameTime_t
            public const nint m_nLastAttackTick = 0x1154; // int32
        }
        // Parent: CEnvCubemap
        // Field count: 0
        public static class CEnvCubemapBox {
        }
        // Parent: CBaseDoor
        // Field count: 1
        public static class CRotDoor {
            public const nint m_bSolidBsp = 0x930; // bool
        }
        // Parent: CPathWithDynamicNodes
        // Field count: 3
        public static class CPathMover {
            public const nint m_vecMovers = 0x5F0; // CUtlVector<CHandle<CFuncMover>>
            public const nint m_hMoverSpawner = 0x608; // CHandle<CPathMoverEntitySpawner>
            public const nint m_iszMoverSpawnerName = 0x610; // CUtlSymbolLarge
        }
        // Parent: CBaseModelEntity
        // Field count: 1
        public static class CFuncVPhysicsClip {
            public const nint m_bDisabled = 0x730; // bool
        }
        // Parent: CPhysConstraint
        // Field count: 8
        public static class CPhysFixed {
            public const nint m_flLinearFrequency = 0x508; // float32
            public const nint m_flLinearDampingRatio = 0x50C; // float32
            public const nint m_flAngularFrequency = 0x510; // float32
            public const nint m_flAngularDampingRatio = 0x514; // float32
            public const nint m_bEnableLinearConstraint = 0x518; // bool
            public const nint m_bEnableAngularConstraint = 0x519; // bool
            public const nint m_sBoneName1 = 0x520; // CUtlSymbolLarge
            public const nint m_sBoneName2 = 0x528; // CUtlSymbolLarge
        }
        // Parent: CLogicalEntity
        // Field count: 2
        public static class CLogicNavigation {
            public const nint m_isOn = 0x4B0; // bool
            public const nint m_navProperty = 0x4B4; // navproperties_t
        }
        // Parent: CBaseEntity
        // Field count: 3
        //
        // Metadata:
        // NetworkVarNames: m_CPathQueryComponent (CPathQueryComponent::Storage_t)
        // NetworkVarNames: m_pathString (CUtlString)
        public static class CPathSimple {
            public const nint m_CPathQueryComponent = 0x4B0; // CPathQueryComponent
            public const nint m_pathString = 0x5A0; // CUtlString
            public const nint m_bClosedLoop = 0x5A8; // bool
        }
        // Parent: CPathParticleRope
        // Field count: 0
        public static class CPathParticleRopeAlias_path_particle_rope_clientside {
        }
        // Parent: None
        // Field count: 0
        public static class CCSPointPulseAPI {
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
        public static class CEnvWindVolume {
            public const nint m_bActive = 0x4A8; // bool
            public const nint m_vBoxMins = 0x4AC; // Vector
            public const nint m_vBoxMaxs = 0x4B8; // Vector
            public const nint m_bStartDisabled = 0x4C4; // bool
            public const nint m_nShape = 0x4C8; // int32
            public const nint m_fWindSpeedMultiplier = 0x4CC; // float32
            public const nint m_fWindTurbulenceMultiplier = 0x4D0; // float32
            public const nint m_fWindSpeedVariationMultiplier = 0x4D4; // float32
            public const nint m_fWindDirectionVariationMultiplier = 0x4D8; // float32
        }
        // Parent: CFuncBrush
        // Field count: 4
        //
        // Metadata:
        // NetworkVarNames: m_EffectName (string_t)
        public static class CFuncElectrifiedVolume {
            public const nint m_EffectName = 0x750; // CUtlSymbolLarge
            public const nint m_EffectInterpenetrateName = 0x758; // CUtlSymbolLarge
            public const nint m_EffectZapName = 0x760; // CUtlSymbolLarge
            public const nint m_iszEffectSource = 0x768; // CUtlSymbolLarge
        }
        // Parent: CBaseEntity
        // Field count: 0
        public static class CCSMinimapBoundary {
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
            public const nint m_bPadding2 = 0x66; // bool
            public const nint m_bPadding = 0x67; // bool
        }
        // Parent: CSoundEventEntity
        // Field count: 2
        //
        // Metadata:
        // NetworkVarNames: m_vMins (Vector)
        // NetworkVarNames: m_vMaxs (Vector)
        public static class CSoundEventOBBEntity {
            public const nint m_vMins = 0x558; // Vector
            public const nint m_vMaxs = 0x564; // Vector
        }
        // Parent: CBaseCSGrenadeProjectile
        // Field count: 3
        public static class CFlashbangProjectile {
            public const nint m_flTimeToDetonate = 0xBB0; // float32
            public const nint m_numOpponentsHit = 0xBB4; // uint8
            public const nint m_numTeammatesHit = 0xBB5; // uint8
        }
        // Parent: CBaseTrigger
        // Field count: 1
        public static class CTriggerMultiple {
            public const nint m_OnTrigger = 0x890; // CEntityIOOutput
        }
        // Parent: CPhysConstraint
        // Field count: 6
        public static class CPhysBallSocket {
            public const nint m_flJointFriction = 0x508; // float32
            public const nint m_bEnableSwingLimit = 0x50C; // bool
            public const nint m_flSwingLimit = 0x510; // float32
            public const nint m_bEnableTwistLimit = 0x514; // bool
            public const nint m_flMinTwistAngle = 0x518; // float32
            public const nint m_flMaxTwistAngle = 0x51C; // float32
        }
        // Parent: CBaseEntity
        // Field count: 1
        public static class CDebugHistory {
            public const nint m_nNpcEvents = 0x3E84E8; // int32
        }
        // Parent: CBaseEntity
        // Field count: 11
        //
        // Metadata:
        // NetworkVarNames: m_iszStackName (string_t)
        // NetworkVarNames: m_iszOperatorName (string_t)
        // NetworkVarNames: m_iszOpvarName (string_t)
        // NetworkVarNames: m_iOpvarIndex (int)
        // NetworkVarNames: m_bUseAutoCompare (bool)
        // NetworkVarNames: m_bFastRefresh (bool)
        public static class CSoundOpvarSetPointBase {
            public const nint m_bDisabled = 0x4A8; // bool
            public const nint m_hSource = 0x4AC; // CEntityHandle
            public const nint m_iszSourceEntityName = 0x4C8; // CUtlSymbolLarge
            public const nint m_vLastPosition = 0x520; // Vector
            public const nint m_flRefreshTime = 0x52C; // float32
            public const nint m_iszStackName = 0x530; // CUtlSymbolLarge
            public const nint m_iszOperatorName = 0x538; // CUtlSymbolLarge
            public const nint m_iszOpvarName = 0x540; // CUtlSymbolLarge
            public const nint m_iOpvarIndex = 0x548; // int32
            public const nint m_bUseAutoCompare = 0x54C; // bool
            public const nint m_bFastRefresh = 0x54D; // bool
        }
        // Parent: CLogicalEntity
        // Field count: 8
        public static class CPathKeyFrame {
            public const nint m_Origin = 0x4A8; // Vector
            public const nint m_Angles = 0x4B4; // QAngle
            public const nint m_qAngle = 0x4C0; // Quaternion
            public const nint m_iNextKey = 0x4D0; // CUtlSymbolLarge
            public const nint m_flNextTime = 0x4D8; // float32
            public const nint m_pNextKey = 0x4E0; // CPathKeyFrame*
            public const nint m_pPrevKey = 0x4E8; // CPathKeyFrame*
            public const nint m_flMoveSpeed = 0x4F0; // float32
        }
        // Parent: CCSWeaponBaseGun
        // Field count: 1
        //
        // Metadata:
        // NetworkVarNames: m_bMagazineRemoved (bool)
        public static class CWeaponCZ75a {
            public const nint m_bMagazineRemoved = 0x1150; // bool
        }
        // Parent: CTriggerPush
        // Field count: 1
        public static class CScriptTriggerPush {
            public const nint m_vExtent = 0x8C8; // Vector
        }
        // Parent: CModelPointEntity
        // Field count: 3
        public static class CRevertSaved {
            public const nint m_loadTime = 0x730; // float32
            public const nint m_Duration = 0x734; // float32
            public const nint m_HoldTime = 0x738; // float32
        }
        // Parent: CBaseTrigger
        // Field count: 0
        public static class CTriggerBombReset {
        }
        // Parent: CBaseTrigger
        // Field count: 14
        public static class CTriggerHurt {
            public const nint m_flOriginalDamage = 0x890; // float32
            public const nint m_flDamage = 0x894; // float32
            public const nint m_flDamageCap = 0x898; // float32
            public const nint m_flLastDmgTime = 0x89C; // GameTime_t
            public const nint m_flForgivenessDelay = 0x8A0; // float32
            public const nint m_bitsDamageInflict = 0x8A4; // DamageTypes_t
            public const nint m_damageModel = 0x8A8; // int32
            public const nint m_bNoDmgForce = 0x8AC; // bool
            public const nint m_vDamageForce = 0x8B0; // Vector
            public const nint m_thinkAlways = 0x8BC; // bool
            public const nint m_hurtThinkPeriod = 0x8C0; // float32
            public const nint m_OnHurt = 0x8C8; // CEntityIOOutput
            public const nint m_OnHurtPlayer = 0x8E0; // CEntityIOOutput
            public const nint m_hurtEntities = 0x8F8; // CUtlVector<CHandle<CBaseEntity>>
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
        public static class CCSPlayer_WeaponServices {
            public const nint m_flNextAttack = 0xC0; // GameTime_t
            public const nint m_bIsLookingAtWeapon = 0xC4; // bool
            public const nint m_bIsHoldingLookAtWeapon = 0xC5; // bool
            public const nint m_hSavedWeapon = 0xC8; // CHandle<CBasePlayerWeapon>
            public const nint m_nTimeToMelee = 0xCC; // int32
            public const nint m_nTimeToSecondary = 0xD0; // int32
            public const nint m_nTimeToPrimary = 0xD4; // int32
            public const nint m_nTimeToSniperRifle = 0xD8; // int32
            public const nint m_bIsBeingGivenItem = 0xDC; // bool
            public const nint m_bIsPickingUpItemWithUse = 0xDD; // bool
            public const nint m_bPickedUpWeapon = 0xDE; // bool
            public const nint m_bDisableAutoDeploy = 0xDF; // bool
            public const nint m_bIsPickingUpGroundWeapon = 0xE0; // bool
            public const nint m_networkAnimTiming = 0x18B8; // CNetworkUtlVectorBase<uint8>
            public const nint m_bBlockInspectUntilNextGraphUpdate = 0x18D0; // bool
        }
        // Parent: None
        // Field count: 6
        //
        // Metadata:
        // NetworkVarNames: m_nMatchSeed (int)
        // NetworkVarNames: m_bBlockersPresent (bool)
        // NetworkVarNames: m_bRoundInProgress (bool)
        // NetworkVarNames: m_iFirstSecondHalfRound (int)
        // NetworkVarNames: m_iBombSite (int)
        // NetworkVarNames: m_hBombPlanter (CHandle<CCSPlayerPawn>)
        public static class CRetakeGameRules {
            public const nint m_nMatchSeed = 0x138; // int32
            public const nint m_bBlockersPresent = 0x13C; // bool
            public const nint m_bRoundInProgress = 0x13D; // bool
            public const nint m_iFirstSecondHalfRound = 0x140; // int32
            public const nint m_iBombSite = 0x144; // int32
            public const nint m_hBombPlanter = 0x148; // CHandle<CCSPlayerPawn>
        }
        // Parent: CEnvSoundscapeTriggerable
        // Field count: 0
        public static class CEnvSoundscapeTriggerableAlias_snd_soundscape_triggerable {
        }
        // Parent: CPointEntity
        // Field count: 0
        public static class CInfoInstructorHintBombTargetA {
        }
        // Parent: None
        // Field count: 0
        public static class CTeamplayRules {
        }
        // Parent: CTriggerHurt
        // Field count: 1
        public static class CScriptTriggerHurt {
            public const nint m_vExtent = 0x910; // Vector
        }
        // Parent: CCSGO_TeamIntroCharacterPosition
        // Field count: 0
        public static class CCSGO_WingmanIntroCharacterPosition {
        }
        // Parent: CCSWeaponBaseGun
        // Field count: 0
        public static class CWeaponMP9 {
        }
        // Parent: CBaseTrigger
        // Field count: 1
        public static class CTriggerDetectExplosion {
            public const nint m_OnDetectedExplosion = 0x8B8; // CEntityIOOutput
        }
        // Parent: CBaseFilter
        // Field count: 1
        public static class CFilterName {
            public const nint m_iFilterName = 0x4E0; // CUtlSymbolLarge
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
        public static class CSmokeGrenadeProjectile {
            public const nint m_nSmokeEffectTickBegin = 0xBD8; // int32
            public const nint m_bDidSmokeEffect = 0xBDC; // bool
            public const nint m_nRandomSeed = 0xBE0; // int32
            public const nint m_vSmokeColor = 0xBE4; // Vector
            public const nint m_vSmokeDetonationPos = 0xBF0; // Vector
            public const nint m_VoxelFrameData = 0xC00; // CNetworkUtlVectorBase<uint8>
            public const nint m_nVoxelFrameDataSize = 0xC18; // int32
            public const nint m_nVoxelUpdate = 0xC1C; // int32
            public const nint m_flLastBounce = 0xC20; // GameTime_t
            public const nint m_fllastSimulationTime = 0xC24; // GameTime_t
            public const nint m_bExplodeFromInferno = 0x2EA8; // bool
            public const nint m_bDidGroundScorch = 0x2EA9; // bool
        }
        // Parent: CPointEntity
        // Field count: 4
        public static class CBlood {
            public const nint m_vecSprayAngles = 0x4A8; // QAngle
            public const nint m_vecSprayDir = 0x4B4; // Vector
            public const nint m_flAmount = 0x4C0; // float32
            public const nint m_Color = 0x4C4; // BloodType
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
            public const nint m_nLastRecievedShorthandedRoundBonus = 0x560; // int32
            public const nint m_nShorthandedRoundBonusStartRound = 0x564; // int32
            public const nint m_bSurrendered = 0x568; // bool
            public const nint m_szTeamMatchStat = 0x569; // char[512]
            public const nint m_numMapVictories = 0x76C; // int32
            public const nint m_scoreFirstHalf = 0x770; // int32
            public const nint m_scoreSecondHalf = 0x774; // int32
            public const nint m_scoreOvertime = 0x778; // int32
            public const nint m_szClanTeamname = 0x77C; // char[129]
            public const nint m_iClanID = 0x800; // uint32
            public const nint m_szTeamFlagImage = 0x804; // char[8]
            public const nint m_szTeamLogoImage = 0x80C; // char[8]
            public const nint m_flNextResourceTime = 0x814; // float32
            public const nint m_iLastUpdateSentAt = 0x818; // int32
        }
        // Parent: CRuleEntity
        // Field count: 1
        public static class CRulePointEntity {
            public const nint m_Score = 0x738; // int32
        }
        // Parent: None
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulse_CallInfo {
            public const nint m_PortName = 0x0; // PulseSymbol_t
            public const nint m_nEditorNodeID = 0x10; // PulseDocNodeID_t
            public const nint m_RegisterMap = 0x18; // PulseRegisterMap_t
            public const nint m_CallMethodID = 0x48; // PulseDocNodeID_t
            public const nint m_nSrcChunk = 0x4C; // PulseRuntimeChunkIndex_t
            public const nint m_nSrcInstruction = 0x50; // int32
        }
        // Parent: CFuncMoveLinear
        // Field count: 0
        public static class CFuncMoveLinearAlias_momentary_door {
        }
        // Parent: CBaseModelEntity
        // Field count: 15
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
        public static class CBaseAnimGraph {
            public const nint m_graphControllerManager = 0x730; // CAnimGraphControllerManager
            public const nint m_pMainGraphController = 0x7E0; // CAnimGraphControllerBase*
            public const nint m_bInitiallyPopulateInterpHistory = 0x7E8; // bool
            public const nint m_pChoreoServices = 0x7F0; // IChoreoServices*
            public const nint m_bAnimGraphUpdateEnabled = 0x7F8; // bool
            public const nint m_flMaxSlopeDistance = 0x7FC; // float32
            public const nint m_vLastSlopeCheckPos = 0x800; // VectorWS
            public const nint m_nAnimGraphUpdateId = 0x80C; // uint32
            public const nint m_bAnimationUpdateScheduled = 0x810; // bool
            public const nint m_vecForce = 0x814; // Vector
            public const nint m_nForceBone = 0x820; // int32
            public const nint m_RagdollPose = 0x838; // PhysicsRagdollPose_t
            public const nint m_bRagdollEnabled = 0x860; // bool
            public const nint m_bRagdollClientSide = 0x861; // bool
            public const nint m_xParentedRagdollRootInEntitySpace = 0x870; // CTransform
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
            public const nint m_flEndDistance = 0x4A8; // float32
            public const nint m_flStartDistance = 0x4AC; // float32
            public const nint m_flFogFalloffExponent = 0x4B0; // float32
            public const nint m_bHeightFogEnabled = 0x4B4; // bool
            public const nint m_flFogHeightWidth = 0x4B8; // float32
            public const nint m_flFogHeightEnd = 0x4BC; // float32
            public const nint m_flFogHeightStart = 0x4C0; // float32
            public const nint m_flFogHeightExponent = 0x4C4; // float32
            public const nint m_flLODBias = 0x4C8; // float32
            public const nint m_bActive = 0x4CC; // bool
            public const nint m_bStartDisabled = 0x4CD; // bool
            public const nint m_flFogMaxOpacity = 0x4D0; // float32
            public const nint m_nCubemapSourceType = 0x4D4; // int32
            public const nint m_hSkyMaterial = 0x4D8; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_iszSkyEntity = 0x4E0; // CUtlSymbolLarge
            public const nint m_hFogCubemapTexture = 0x4E8; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_bHasHeightFogEnd = 0x4F0; // bool
            public const nint m_bFirstTime = 0x4F1; // bool
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_InlineNodeSkipSelector {
            public const nint m_nFlowNodeID = 0x48; // PulseDocNodeID_t
            public const nint m_bAnd = 0x4C; // bool
            public const nint m_PassOutflow = 0x50; // PulseSelectorOutflowList_t
            public const nint m_FailOutflow = 0x68; // CPulse_OutflowConnection
        }
        // Parent: CBaseToggle
        // Field count: 28
        //
        // Metadata:
        // NetworkVarNames: m_bIsUsable (bool)
        public static class CBaseDoor {
            public const nint m_angMoveEntitySpace = 0x7C0; // QAngle
            public const nint m_vecMoveDirParentSpace = 0x7CC; // Vector
            public const nint m_ls = 0x7D8; // locksound_t
            public const nint m_bForceClosed = 0x7F8; // bool
            public const nint m_bDoorGroup = 0x7F9; // bool
            public const nint m_bLocked = 0x7FA; // bool
            public const nint m_bIgnoreDebris = 0x7FB; // bool
            public const nint m_bNoNPCs = 0x7FC; // bool
            public const nint m_eSpawnPosition = 0x800; // FuncDoorSpawnPos_t
            public const nint m_flBlockDamage = 0x804; // float32
            public const nint m_NoiseMoving = 0x808; // CUtlSymbolLarge
            public const nint m_NoiseArrived = 0x810; // CUtlSymbolLarge
            public const nint m_NoiseMovingClosed = 0x818; // CUtlSymbolLarge
            public const nint m_NoiseArrivedClosed = 0x820; // CUtlSymbolLarge
            public const nint m_ChainTarget = 0x828; // CUtlSymbolLarge
            public const nint m_OnBlockedClosing = 0x830; // CEntityIOOutput
            public const nint m_OnBlockedOpening = 0x848; // CEntityIOOutput
            public const nint m_OnUnblockedClosing = 0x860; // CEntityIOOutput
            public const nint m_OnUnblockedOpening = 0x878; // CEntityIOOutput
            public const nint m_OnFullyClosed = 0x890; // CEntityIOOutput
            public const nint m_OnFullyOpen = 0x8A8; // CEntityIOOutput
            public const nint m_OnClose = 0x8C0; // CEntityIOOutput
            public const nint m_OnOpen = 0x8D8; // CEntityIOOutput
            public const nint m_OnLockedUse = 0x8F0; // CEntityIOOutput
            public const nint m_bLoopMoveSound = 0x908; // bool
            public const nint m_bCreateNavObstacle = 0x928; // bool
            public const nint m_isChaining = 0x929; // bool
            public const nint m_bIsUsable = 0x92A; // bool
        }
        // Parent: CServerOnlyEntity
        // Field count: 0
        public static class CServerOnlyPointEntity {
        }
        // Parent: CRulePointEntity
        // Field count: 4
        public static class CGameMoney {
            public const nint m_OnMoneySpent = 0x740; // CEntityIOOutput
            public const nint m_OnMoneySpentFail = 0x758; // CEntityIOOutput
            public const nint m_nMoney = 0x770; // int32
            public const nint m_strAwardText = 0x778; // CUtlString
        }
        // Parent: CPointEntity
        // Field count: 1
        public static class CEnvHudHint {
            public const nint m_iszMessage = 0x4A8; // CUtlSymbolLarge
        }
        // Parent: CBaseEntity
        // Field count: 0
        public static class CNullEntity {
        }
        // Parent: CServerOnlyEntity
        // Field count: 0
        public static class CLogicalEntity {
        }
        // Parent: CItem
        // Field count: 2
        public static class CItemDefuser {
            public const nint m_entitySpottedState = 0xAC0; // EntitySpottedState_t
            public const nint m_nSpotRules = 0xAD8; // int32
        }
        // Parent: CBaseModelEntity
        // Field count: 1
        public static class CItemGenericTriggerHelper {
            public const nint m_hParentItem = 0x730; // CHandle<CItemGeneric>
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
            public const nint m_hMyWeapons = 0x48; // CNetworkUtlVectorBase<CHandle<CBasePlayerWeapon>>
            public const nint m_hActiveWeapon = 0x60; // CHandle<CBasePlayerWeapon>
            public const nint m_hLastWeapon = 0x64; // CHandle<CBasePlayerWeapon>
            public const nint m_iAmmo = 0x68; // uint16[32]
            public const nint m_bPreventWeaponPickup = 0xA8; // bool
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
            public const nint m_boneIndexAttached = 0xB70; // uint32
            public const nint m_ragdollAttachedObjectIndex = 0xB74; // uint32
            public const nint m_attachmentPointBoneSpace = 0xB78; // Vector
            public const nint m_attachmentPointRagdollSpace = 0xB84; // Vector
            public const nint m_bShouldDetach = 0xB90; // bool
            public const nint m_bShouldDeleteAttachedActivationRecord = 0xBA0; // bool
        }
        // Parent: CItem
        // Field count: 2
        //
        // Metadata:
        // NetworkVarNames: m_OwningPlayer (CHandle<CCSPlayerPawn>)
        // NetworkVarNames: m_KillingPlayer (CHandle<CCSPlayerPawn>)
        public static class CItemDogtags {
            public const nint m_OwningPlayer = 0xAC0; // CHandle<CCSPlayerPawn>
            public const nint m_KillingPlayer = 0xAC4; // CHandle<CCSPlayerPawn>
        }
        // Parent: CBasePlatTrain
        // Field count: 1
        public static class CFuncPlat {
            public const nint m_sNoise = 0x7D8; // CUtlSymbolLarge
        }
        // Parent: CBaseModelEntity
        // Field count: 77
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
        // NetworkVarNames: m_bDynamicBounce (bool)
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
            public const nint m_bEnabled = 0x730; // bool
            public const nint m_nColorMode = 0x734; // int32
            public const nint m_Color = 0x738; // Color
            public const nint m_flColorTemperature = 0x73C; // float32
            public const nint m_flBrightness = 0x740; // float32
            public const nint m_flBrightnessScale = 0x744; // float32
            public const nint m_nDirectLight = 0x748; // int32
            public const nint m_nBakedShadowIndex = 0x74C; // int32
            public const nint m_nLightPathUniqueId = 0x750; // int32
            public const nint m_nLightMapUniqueId = 0x754; // int32
            public const nint m_nLuminaireShape = 0x758; // int32
            public const nint m_flLuminaireSize = 0x75C; // float32
            public const nint m_flLuminaireAnisotropy = 0x760; // float32
            public const nint m_LightStyleString = 0x768; // CUtlString
            public const nint m_flLightStyleStartTime = 0x770; // GameTime_t
            public const nint m_QueuedLightStyleStrings = 0x778; // CNetworkUtlVectorBase<CUtlString>
            public const nint m_LightStyleEvents = 0x790; // CNetworkUtlVectorBase<CUtlString>
            public const nint m_LightStyleTargets = 0x7A8; // CNetworkUtlVectorBase<CHandle<CBaseModelEntity>>
            public const nint m_StyleEvent = 0x7C0; // CEntityIOOutput[4]
            public const nint m_hLightCookie = 0x840; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_flShape = 0x848; // float32
            public const nint m_flSoftX = 0x84C; // float32
            public const nint m_flSoftY = 0x850; // float32
            public const nint m_flSkirt = 0x854; // float32
            public const nint m_flSkirtNear = 0x858; // float32
            public const nint m_vSizeParams = 0x85C; // Vector
            public const nint m_flRange = 0x868; // float32
            public const nint m_vShear = 0x86C; // Vector
            public const nint m_nBakeSpecularToCubemaps = 0x878; // int32
            public const nint m_vBakeSpecularToCubemapsSize = 0x87C; // Vector
            public const nint m_nCastShadows = 0x888; // int32
            public const nint m_nShadowMapSize = 0x88C; // int32
            public const nint m_nShadowPriority = 0x890; // int32
            public const nint m_bContactShadow = 0x894; // bool
            public const nint m_bForceShadowsEnabled = 0x895; // bool
            public const nint m_nBounceLight = 0x898; // int32
            public const nint m_flBounceScale = 0x89C; // float32
            public const nint m_bDynamicBounce = 0x8A0; // bool
            public const nint m_flMinRoughness = 0x8A4; // float32
            public const nint m_vAlternateColor = 0x8A8; // Vector
            public const nint m_fAlternateColorBrightness = 0x8B4; // float32
            public const nint m_nFog = 0x8B8; // int32
            public const nint m_flFogStrength = 0x8BC; // float32
            public const nint m_nFogShadows = 0x8C0; // int32
            public const nint m_flFogScale = 0x8C4; // float32
            public const nint m_bFogMixedShadows = 0x8C8; // bool
            public const nint m_flFadeSizeStart = 0x8CC; // float32
            public const nint m_flFadeSizeEnd = 0x8D0; // float32
            public const nint m_flShadowFadeSizeStart = 0x8D4; // float32
            public const nint m_flShadowFadeSizeEnd = 0x8D8; // float32
            public const nint m_bPrecomputedFieldsValid = 0x8DC; // bool
            public const nint m_vPrecomputedBoundsMins = 0x8E0; // Vector
            public const nint m_vPrecomputedBoundsMaxs = 0x8EC; // Vector
            public const nint m_vPrecomputedOBBOrigin = 0x8F8; // Vector
            public const nint m_vPrecomputedOBBAngles = 0x904; // QAngle
            public const nint m_vPrecomputedOBBExtent = 0x910; // Vector
            public const nint m_nPrecomputedSubFrusta = 0x91C; // int32
            public const nint m_vPrecomputedOBBOrigin0 = 0x920; // Vector
            public const nint m_vPrecomputedOBBAngles0 = 0x92C; // QAngle
            public const nint m_vPrecomputedOBBExtent0 = 0x938; // Vector
            public const nint m_vPrecomputedOBBOrigin1 = 0x944; // Vector
            public const nint m_vPrecomputedOBBAngles1 = 0x950; // QAngle
            public const nint m_vPrecomputedOBBExtent1 = 0x95C; // Vector
            public const nint m_vPrecomputedOBBOrigin2 = 0x968; // Vector
            public const nint m_vPrecomputedOBBAngles2 = 0x974; // QAngle
            public const nint m_vPrecomputedOBBExtent2 = 0x980; // Vector
            public const nint m_vPrecomputedOBBOrigin3 = 0x98C; // Vector
            public const nint m_vPrecomputedOBBAngles3 = 0x998; // QAngle
            public const nint m_vPrecomputedOBBExtent3 = 0x9A4; // Vector
            public const nint m_vPrecomputedOBBOrigin4 = 0x9B0; // Vector
            public const nint m_vPrecomputedOBBAngles4 = 0x9BC; // QAngle
            public const nint m_vPrecomputedOBBExtent4 = 0x9C8; // Vector
            public const nint m_vPrecomputedOBBOrigin5 = 0x9D4; // Vector
            public const nint m_vPrecomputedOBBAngles5 = 0x9E0; // QAngle
            public const nint m_vPrecomputedOBBExtent5 = 0x9EC; // Vector
            public const nint m_bPvsModifyEntity = 0x9F8; // bool
            public const nint m_VisClusters = 0xA00; // CNetworkUtlVectorBase<uint16>
        }
        // Parent: CPointEntity
        // Field count: 3
        public static class CInstructorEventEntity {
            public const nint m_iszName = 0x4A8; // CUtlSymbolLarge
            public const nint m_iszHintTargetEntity = 0x4B0; // CUtlSymbolLarge
            public const nint m_hTargetPlayer = 0x4B8; // CHandle<CBasePlayerPawn>
        }
        // Parent: CCSWeaponBaseGun
        // Field count: 0
        public static class CWeaponTec9 {
        }
        // Parent: CPointEntity
        // Field count: 3
        public static class CPathCorner {
            public const nint m_flWait = 0x4A8; // float32
            public const nint m_flRadius = 0x4AC; // float32
            public const nint m_OnPass = 0x4B0; // CEntityIOOutput
        }
        // Parent: CBaseTrigger
        // Field count: 14
        public static class CTriggerSndSosOpvar {
            public const nint m_hTouchingPlayers = 0x890; // CUtlVector<CHandle<CBaseEntity>>
            public const nint m_flPosition = 0x8A8; // Vector
            public const nint m_flCenterSize = 0x8B4; // float32
            public const nint m_flMinVal = 0x8B8; // float32
            public const nint m_flMaxVal = 0x8BC; // float32
            public const nint m_opvarName = 0x8C0; // CUtlSymbolLarge
            public const nint m_stackName = 0x8C8; // CUtlSymbolLarge
            public const nint m_operatorName = 0x8D0; // CUtlSymbolLarge
            public const nint m_bVolIs2D = 0x8D8; // bool
            public const nint m_opvarNameChar = 0x8D9; // char[256]
            public const nint m_stackNameChar = 0x9D9; // char[256]
            public const nint m_operatorNameChar = 0xAD9; // char[256]
            public const nint m_VecNormPos = 0xBDC; // Vector
            public const nint m_flNormCenterSize = 0xBE8; // float32
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CPulseCell_LimitCount {
            public const nint m_nLimitCount = 0x48; // int32
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Step_CallExternalMethod {
            public const nint m_MethodName = 0x48; // PulseSymbol_t
            public const nint m_GameBlackboard = 0x58; // PulseSymbol_t
            public const nint m_ExpectedArgs = 0x68; // CUtlLeanVector<CPulseRuntimeMethodArg>
            public const nint m_nAsyncCallMode = 0x78; // PulseMethodCallMode_t
            public const nint m_OnFinished = 0x80; // CPulse_ResumePoint
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
            public const nint m_iszPreCommands = 0xA20; // CUtlSymbolLarge
            public const nint m_iszPostCommands = 0xA28; // CUtlSymbolLarge
            public const nint m_iszCommentaryFile = 0xA30; // CUtlSymbolLarge
            public const nint m_iszViewTarget = 0xA38; // CUtlSymbolLarge
            public const nint m_hViewTarget = 0xA40; // CHandle<CBaseEntity>
            public const nint m_hViewTargetAngles = 0xA44; // CHandle<CBaseEntity>
            public const nint m_iszViewPosition = 0xA48; // CUtlSymbolLarge
            public const nint m_hViewPosition = 0xA50; // CHandle<CBaseEntity>
            public const nint m_hViewPositionMover = 0xA54; // CHandle<CBaseEntity>
            public const nint m_bPreventMovement = 0xA58; // bool
            public const nint m_bUnderCrosshair = 0xA59; // bool
            public const nint m_bUnstoppable = 0xA5A; // bool
            public const nint m_flFinishedTime = 0xA5C; // GameTime_t
            public const nint m_vecFinishOrigin = 0xA60; // Vector
            public const nint m_vecOriginalAngles = 0xA6C; // QAngle
            public const nint m_vecFinishAngles = 0xA78; // QAngle
            public const nint m_bPreventChangesWhileMoving = 0xA84; // bool
            public const nint m_bDisabled = 0xA85; // bool
            public const nint m_vecTeleportOrigin = 0xA88; // VectorWS
            public const nint m_flAbortedPlaybackAt = 0xA94; // GameTime_t
            public const nint m_pOnCommentaryStarted = 0xA98; // CEntityIOOutput
            public const nint m_pOnCommentaryStopped = 0xAB0; // CEntityIOOutput
            public const nint m_bActive = 0xAC8; // bool
            public const nint m_flStartTime = 0xACC; // GameTime_t
            public const nint m_flStartTimeInCommentary = 0xAD0; // float32
            public const nint m_iszTitle = 0xAD8; // CUtlSymbolLarge
            public const nint m_iszSpeakers = 0xAE0; // CUtlSymbolLarge
            public const nint m_iNodeNumber = 0xAE8; // int32
            public const nint m_iNodeNumberMax = 0xAEC; // int32
            public const nint m_bListenedTo = 0xAF0; // bool
        }
        // Parent: CRotButton
        // Field count: 14
        public static class CMomentaryRotButton {
            public const nint m_Position = 0x8B0; // CEntityOutputTemplate<float32,float32>
            public const nint m_OnUnpressed = 0x8D0; // CEntityIOOutput
            public const nint m_OnFullyOpen = 0x8E8; // CEntityIOOutput
            public const nint m_OnFullyClosed = 0x900; // CEntityIOOutput
            public const nint m_OnReachedPosition = 0x918; // CEntityIOOutput
            public const nint m_lastUsed = 0x930; // int32
            public const nint m_start = 0x934; // QAngle
            public const nint m_end = 0x940; // QAngle
            public const nint m_IdealYaw = 0x94C; // float32
            public const nint m_sNoise = 0x950; // CUtlSymbolLarge
            public const nint m_bUpdateTarget = 0x958; // bool
            public const nint m_direction = 0x95C; // int32
            public const nint m_returnSpeed = 0x960; // float32
            public const nint m_flStartPosition = 0x964; // float32
        }
        // Parent: CLogicalEntity
        // Field count: 3
        public static class CSceneListManager {
            public const nint m_hListManagers = 0x4A8; // CUtlVector<CHandle<CSceneListManager>>
            public const nint m_iszScenes = 0x4C0; // CUtlSymbolLarge[16]
            public const nint m_hScenes = 0x540; // CHandle<CBaseEntity>[16]
        }
        // Parent: CPointEntity
        // Field count: 4
        public static class CEnvTilt {
            public const nint m_Duration = 0x4A8; // float32
            public const nint m_Radius = 0x4AC; // float32
            public const nint m_TiltTime = 0x4B0; // float32
            public const nint m_stopTime = 0x4B4; // GameTime_t
        }
        // Parent: CEnvSoundscape
        // Field count: 0
        public static class CEnvSoundscapeTriggerable {
        }
        // Parent: CBaseModelEntity
        // Field count: 84
        public static class CFuncMover {
            public const nint m_iszPathName = 0x730; // CUtlSymbolLarge
            public const nint m_hPathMover = 0x738; // CHandle<CPathMover>
            public const nint m_hPrevPathMover = 0x73C; // CHandle<CPathMover>
            public const nint m_iszPathNodeStart = 0x740; // CUtlSymbolLarge
            public const nint m_iszPathNodeEnd = 0x748; // CUtlSymbolLarge
            public const nint m_eMoveType = 0x750; // CFuncMover::Move_t
            public const nint m_bIsReversing = 0x754; // bool
            public const nint m_flStartSpeed = 0x758; // float32
            public const nint m_flPathLocation = 0x75C; // float32
            public const nint m_flT = 0x760; // float32
            public const nint m_nCurrentNodeIndex = 0x764; // int32
            public const nint m_nPreviousNodeIndex = 0x768; // int32
            public const nint m_eSolidType = 0x76C; // SolidType_t
            public const nint m_bIsMoving = 0x76D; // bool
            public const nint m_flTimeToReachMaxSpeed = 0x770; // float32
            public const nint m_flDistanceToReachMaxSpeed = 0x774; // float32
            public const nint m_flTimeToReachZeroSpeed = 0x778; // float32
            public const nint m_flComputedDistanceToReachMaxSpeed = 0x77C; // float32
            public const nint m_flComputedDistanceToReachZeroSpeed = 0x780; // float32
            public const nint m_flStartCurveScale = 0x784; // float32
            public const nint m_flStopCurveScale = 0x788; // float32
            public const nint m_flDistanceToReachZeroSpeed = 0x78C; // float32
            public const nint m_flTimeMovementStart = 0x790; // GameTime_t
            public const nint m_flTimeMovementStop = 0x794; // GameTime_t
            public const nint m_hStopAtNode = 0x798; // CHandle<CMoverPathNode>
            public const nint m_flPathLocationToBeginStop = 0x79C; // float32
            public const nint m_flPathLocationStart = 0x7A0; // float32
            public const nint m_flBeginStopT = 0x7A4; // float32
            public const nint m_iszStartForwardSound = 0x7A8; // CUtlSymbolLarge
            public const nint m_iszLoopForwardSound = 0x7B0; // CUtlSymbolLarge
            public const nint m_iszStopForwardSound = 0x7B8; // CUtlSymbolLarge
            public const nint m_iszStartReverseSound = 0x7C0; // CUtlSymbolLarge
            public const nint m_iszLoopReverseSound = 0x7C8; // CUtlSymbolLarge
            public const nint m_iszStopReverseSound = 0x7D0; // CUtlSymbolLarge
            public const nint m_iszArriveAtDestinationSound = 0x7D8; // CUtlSymbolLarge
            public const nint m_OnMovementEnd = 0x7F8; // CEntityIOOutput
            public const nint m_bStartAtClosestPoint = 0x810; // bool
            public const nint m_bStartAtEnd = 0x811; // bool
            public const nint m_bStartFollowingClosestMover = 0x812; // bool
            public const nint m_eOrientationUpdate = 0x814; // CFuncMover::OrientationUpdate_t
            public const nint m_flTimeStartOrientationChange = 0x818; // GameTime_t
            public const nint m_flTimeToBlendToNewOrientation = 0x81C; // float32
            public const nint m_flDurationBlendToNewOrientationRan = 0x820; // float32
            public const nint m_nOriginalOrientationIndex = 0x824; // int32
            public const nint m_bCreateMovableNavMesh = 0x828; // bool
            public const nint m_bAllowMovableNavMeshDockingOnEntireEntity = 0x829; // bool
            public const nint m_OnNodePassed = 0x830; // CEntityOutputTemplate<CUtlString,char*>
            public const nint m_iszOrientationMatchEntityName = 0x850; // CUtlSymbolLarge
            public const nint m_hOrientationMatchEntity = 0x858; // CHandle<CBaseEntity>
            public const nint m_flTimeToTraverseToNextNode = 0x85C; // float32
            public const nint m_vLerpToNewPosStartInPathEntitySpace = 0x860; // Vector
            public const nint m_vLerpToNewPosEndInPathEntitySpace = 0x86C; // Vector
            public const nint m_flLerpToPositionT = 0x878; // float32
            public const nint m_flLerpToPositionDeltaT = 0x87C; // float32
            public const nint m_OnLerpToPositionComplete = 0x880; // CEntityIOOutput
            public const nint m_bIsPaused = 0x898; // bool
            public const nint m_eTransitionedToPathNodeAction = 0x89C; // CFuncMover::TransitionToPathNodeAction_t
            public const nint m_nDelayedTeleportToNode = 0x8A0; // int32
            public const nint m_bIsVerboseLogging = 0x8A4; // bool
            public const nint m_hFollowEntity = 0x8A8; // CHandle<CBaseEntity>
            public const nint m_flFollowDistance = 0x8AC; // float32
            public const nint m_flFollowMinimumSpeed = 0x8B0; // float32
            public const nint m_flCurFollowEntityT = 0x8B4; // float32
            public const nint m_flCurFollowSpeed = 0x8B8; // float32
            public const nint m_strOrientationFaceEntityName = 0x8C0; // CUtlSymbolLarge
            public const nint m_hOrientationFaceEntity = 0x8C8; // CHandle<CBaseEntity>
            public const nint m_OnStart = 0x8D0; // CEntityIOOutput
            public const nint m_OnStartForward = 0x8E8; // CEntityIOOutput
            public const nint m_OnStartReverse = 0x900; // CEntityIOOutput
            public const nint m_OnStop = 0x918; // CEntityIOOutput
            public const nint m_OnStopped = 0x930; // CEntityIOOutput
            public const nint m_bNextNodeReturnsCurrent = 0x948; // bool
            public const nint m_bStartedMoving = 0x949; // bool
            public const nint m_eFollowEntityDirection = 0x968; // CFuncMover::FollowEntityDirection_t
            public const nint m_hFollowMover = 0x96C; // CHandle<CFuncMover>
            public const nint m_iszFollowMoverEntityName = 0x970; // CUtlSymbolLarge
            public const nint m_flFollowMoverDistance = 0x978; // float32
            public const nint m_flFollowMoverCalculatedDistance = 0x97C; // float32
            public const nint m_flFollowMoverSpringStrength = 0x980; // float32
            public const nint m_bFollowConstraintsInitialized = 0x984; // bool
            public const nint m_eFollowConstraint = 0x988; // CFuncMover::FollowConstraint_t
            public const nint m_flFollowMoverSpeed = 0x98C; // float32
            public const nint m_flFollowMoverVelocity = 0x990; // float32
            public const nint m_nTickMovementRan = 0x994; // GameTick_t
        }
        // Parent: CBreakableProp
        // Field count: 41
        //
        // Metadata:
        // MNetworkExcludeByName
        // MNetworkExcludeByUserGroup
        // MNetworkExcludeByName
        // MNetworkExcludeByUserGroup
        // MNetworkIncludeByName
        // NetworkVarNames: m_bAwake (bool)
        public static class CPhysicsProp {
            public const nint m_MotionEnabled = 0xBB0; // CEntityIOOutput
            public const nint m_OnAwakened = 0xBC8; // CEntityIOOutput
            public const nint m_OnAwake = 0xBE0; // CEntityIOOutput
            public const nint m_OnAsleep = 0xBF8; // CEntityIOOutput
            public const nint m_OnPlayerUse = 0xC10; // CEntityIOOutput
            public const nint m_OnOutOfWorld = 0xC28; // CEntityIOOutput
            public const nint m_OnPlayerPickup = 0xC40; // CEntityIOOutput
            public const nint m_bForceNavIgnore = 0xC58; // bool
            public const nint m_bNoNavmeshBlocker = 0xC59; // bool
            public const nint m_bForceNpcExclude = 0xC5A; // bool
            public const nint m_massScale = 0xC5C; // float32
            public const nint m_buoyancyScale = 0xC60; // float32
            public const nint m_damageType = 0xC64; // int32
            public const nint m_damageToEnableMotion = 0xC68; // int32
            public const nint m_flForceToEnableMotion = 0xC6C; // float32
            public const nint m_bThrownByPlayer = 0xC70; // bool
            public const nint m_bDroppedByPlayer = 0xC71; // bool
            public const nint m_bTouchedByPlayer = 0xC72; // bool
            public const nint m_bFirstCollisionAfterLaunch = 0xC73; // bool
            public const nint m_bHasBeenAwakened = 0xC74; // bool
            public const nint m_bIsOverrideProp = 0xC75; // bool
            public const nint m_flLastBurn = 0xC78; // GameTime_t
            public const nint m_nDynamicContinuousContactBehavior = 0xC7C; // DynamicContinuousContactBehavior_t
            public const nint m_fNextCheckDisableMotionContactsTime = 0xC80; // GameTime_t
            public const nint m_iInitialGlowState = 0xC84; // int32
            public const nint m_nGlowRange = 0xC88; // int32
            public const nint m_nGlowRangeMin = 0xC8C; // int32
            public const nint m_glowColor = 0xC90; // Color
            public const nint m_bShouldAutoConvertBackFromDebris = 0xC94; // bool
            public const nint m_bMuteImpactEffects = 0xC95; // bool
            public const nint m_bUpdateNavWhenMoving = 0xC9C; // bool
            public const nint m_bForceNavObstacleCut = 0xC9D; // bool
            public const nint m_bAllowObstacleConvexHullMerging = 0xC9E; // bool
            public const nint m_bAcceptDamageFromHeldObjects = 0xC9F; // bool
            public const nint m_bEnableUseOutput = 0xCA0; // bool
            public const nint m_CrateType = 0xCA4; // CPhysicsProp::CrateType_t
            public const nint m_strItemClass = 0xCA8; // CUtlSymbolLarge[4]
            public const nint m_nItemCount = 0xCC8; // int32[4]
            public const nint m_bRemovableForAmmoBalancing = 0xCD8; // bool
            public const nint m_bAwake = 0xCD9; // bool
            public const nint m_bAttachedToReferenceFrame = 0xCDA; // bool
        }
        // Parent: CBaseModelEntity
        // Field count: 2
        public static class CFuncNavObstruction {
            public const nint m_bDisabled = 0x748; // bool
            public const nint m_bUseAsyncObstacleUpdate = 0x749; // bool
        }
        // Parent: CPhysConstraint
        // Field count: 12
        public static class CPhysWheelConstraint {
            public const nint m_flSuspensionFrequency = 0x508; // float32
            public const nint m_flSuspensionDampingRatio = 0x50C; // float32
            public const nint m_flSuspensionHeightOffset = 0x510; // float32
            public const nint m_bEnableSuspensionLimit = 0x514; // bool
            public const nint m_flMinSuspensionOffset = 0x518; // float32
            public const nint m_flMaxSuspensionOffset = 0x51C; // float32
            public const nint m_bEnableSteeringLimit = 0x520; // bool
            public const nint m_flMinSteeringAngle = 0x524; // float32
            public const nint m_flMaxSteeringAngle = 0x528; // float32
            public const nint m_flSteeringAxisFriction = 0x52C; // float32
            public const nint m_flSpinAxisFriction = 0x530; // float32
            public const nint m_hSteeringMimicsEntity = 0x534; // CHandle<CBaseEntity>
        }
        // Parent: CBaseEntity
        // Field count: 2
        public static class CSkyboxReference {
            public const nint m_worldGroupId = 0x4A8; // WorldGroupId_t
            public const nint m_hSkyCamera = 0x4AC; // CHandle<CSkyCamera>
        }
        // Parent: CBaseEntity
        // Field count: 0
        public static class CPointPulse {
        }
        // Parent: CBaseCSGrenadeProjectile
        // Field count: 4
        //
        // Metadata:
        // NetworkVarNames: m_bIsIncGrenade (bool)
        public static class CMolotovProjectile {
            public const nint m_bIsIncGrenade = 0xBB0; // bool
            public const nint m_bDetonated = 0xBC8; // bool
            public const nint m_stillTimer = 0xBD0; // IntervalTimer
            public const nint m_bHasBouncedOffPlayer = 0xCB0; // bool
        }
        // Parent: CBaseFilter
        // Field count: 1
        public static class CFilterClass {
            public const nint m_iFilterClass = 0x4E0; // CUtlSymbolLarge
        }
        // Parent: CBaseTrigger
        // Field count: 0
        public static class CTriggerToggleSave {
        }
        // Parent: CPathSimple
        // Field count: 2
        //
        // Metadata:
        // NetworkVarNames: m_vecPathNodes (CHandle<CPathNode>)
        // NetworkVarNames: m_xInitialPathWorldToLocal (CTransform)
        public static class CPathWithDynamicNodes {
            public const nint m_vecPathNodes = 0x5B0; // CNetworkUtlVectorBase<CHandle<CPathNode>>
            public const nint m_xInitialPathWorldToLocal = 0x5D0; // CTransform
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
            public const nint m_flFadeInDuration = 0x4A8; // float32
            public const nint m_flFadeOutDuration = 0x4AC; // float32
            public const nint m_flStartFadeInWeight = 0x4B0; // float32
            public const nint m_flStartFadeOutWeight = 0x4B4; // float32
            public const nint m_flTimeStartFadeIn = 0x4B8; // GameTime_t
            public const nint m_flTimeStartFadeOut = 0x4BC; // GameTime_t
            public const nint m_flMaxWeight = 0x4C0; // float32
            public const nint m_bStartDisabled = 0x4C4; // bool
            public const nint m_bEnabled = 0x4C5; // bool
            public const nint m_bMaster = 0x4C6; // bool
            public const nint m_bClientSide = 0x4C7; // bool
            public const nint m_bExclusive = 0x4C8; // bool
            public const nint m_MinFalloff = 0x4CC; // float32
            public const nint m_MaxFalloff = 0x4D0; // float32
            public const nint m_flCurWeight = 0x4D4; // float32
            public const nint m_netlookupFilename = 0x4D8; // char[512]
            public const nint m_lookupFilename = 0x6D8; // CUtlSymbolLarge
        }
        // Parent: CPropDoorRotating
        // Field count: 4
        public static class CPropDoorRotatingBreakable {
            public const nint m_bBreakable = 0xEF0; // bool
            public const nint m_isAbleToCloseAreaPortals = 0xEF1; // bool
            public const nint m_currentDamageState = 0xEF4; // int32
            public const nint m_damageStates = 0xEF8; // CUtlVector<CUtlSymbolLarge>
        }
        // Parent: CLightEntity
        // Field count: 0
        public static class CLightDirectionalEntity {
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
            public const nint m_bEnabled = 0x730; // bool
            public const nint m_DialogXMLName = 0x738; // CUtlSymbolLarge
            public const nint m_PanelClassName = 0x740; // CUtlSymbolLarge
            public const nint m_PanelID = 0x748; // CUtlSymbolLarge
            public const nint m_CustomOutput0 = 0x750; // CEntityOutputTemplate<CUtlString,char*>
            public const nint m_CustomOutput1 = 0x770; // CEntityOutputTemplate<CUtlString,char*>
            public const nint m_CustomOutput2 = 0x790; // CEntityOutputTemplate<CUtlString,char*>
            public const nint m_CustomOutput3 = 0x7B0; // CEntityOutputTemplate<CUtlString,char*>
            public const nint m_CustomOutput4 = 0x7D0; // CEntityOutputTemplate<CUtlString,char*>
            public const nint m_CustomOutput5 = 0x7F0; // CEntityOutputTemplate<CUtlString,char*>
            public const nint m_CustomOutput6 = 0x810; // CEntityOutputTemplate<CUtlString,char*>
            public const nint m_CustomOutput7 = 0x830; // CEntityOutputTemplate<CUtlString,char*>
            public const nint m_CustomOutput8 = 0x850; // CEntityOutputTemplate<CUtlString,char*>
            public const nint m_CustomOutput9 = 0x870; // CEntityOutputTemplate<CUtlString,char*>
        }
        // Parent: CBaseModelEntity
        // Field count: 16
        //
        // Metadata:
        // NetworkVarNames: m_CPropDataComponent (CPropDataComponent::Storage_t)
        public static class CBreakable {
            public const nint m_CPropDataComponent = 0x738; // CPropDataComponent
            public const nint m_Material = 0x778; // Materials
            public const nint m_hBreaker = 0x77C; // CHandle<CBaseEntity>
            public const nint m_Explosion = 0x780; // Explosions
            public const nint m_iszSpawnObject = 0x788; // CUtlSymbolLarge
            public const nint m_flPressureDelay = 0x790; // float32
            public const nint m_iMinHealthDmg = 0x794; // int32
            public const nint m_iszPropData = 0x798; // CUtlSymbolLarge
            public const nint m_impactEnergyScale = 0x7A0; // float32
            public const nint m_nOverrideBlockLOS = 0x7A4; // EOverrideBlockLOS_t
            public const nint m_OnStartDeath = 0x7A8; // CEntityIOOutput
            public const nint m_OnBreak = 0x7C0; // CEntityIOOutput
            public const nint m_OnHealthChanged = 0x7D8; // CEntityOutputTemplate<float32,float32>
            public const nint m_PerformanceMode = 0x7F8; // PerformanceMode_t
            public const nint m_hPhysicsAttacker = 0x7FC; // CHandle<CBasePlayerPawn>
            public const nint m_flLastPhysicsInfluenceTime = 0x800; // GameTime_t
        }
        // Parent: CPointEntity
        // Field count: 0
        public static class CInfoLandmark {
        }
        // Parent: CLogicalEntity
        // Field count: 3
        public static class CBaseFilter {
            public const nint m_bNegated = 0x4A8; // bool
            public const nint m_OnPass = 0x4B0; // CEntityIOOutput
            public const nint m_OnFail = 0x4C8; // CEntityIOOutput
        }
        // Parent: 
        // Field count: 1
        //
        // Metadata:
        // NetworkVarNames: m_weaponPurchases (WeaponPurchaseCount_t)
        public static class WeaponPurchaseTracker_t {
            public const nint m_weaponPurchases = 0x8; // CUtlVectorEmbeddedNetworkVar<WeaponPurchaseCount_t>
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Outflow_PlaySceneBase__CursorState_t {
            public const nint m_sceneInstance = 0x0; // CHandle<CBaseEntity>
            public const nint m_mainActor = 0x4; // CHandle<CBaseEntity>
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class PulseObservableBoolExpression_t {
            public const nint m_EvaluateConnection = 0x0; // CPulse_OutflowConnection
            public const nint m_DependentObservableVars = 0x48; // CUtlVector<PulseRuntimeVarIndex_t>
            public const nint m_DependentObservableBlackboardReferences = 0x60; // CUtlVector<PulseRuntimeBlackboardReferenceIndex_t>
        }
        // Parent: CPointEntity
        // Field count: 14
        public static class CMapInfo {
            public const nint m_iBuyingStatus = 0x4A8; // int32
            public const nint m_flBombRadius = 0x4AC; // float32
            public const nint m_iPetPopulation = 0x4B0; // int32
            public const nint m_bUseNormalSpawnsForDM = 0x4B4; // bool
            public const nint m_bDisableAutoGeneratedDMSpawns = 0x4B5; // bool
            public const nint m_flBotMaxVisionDistance = 0x4B8; // float32
            public const nint m_iHostageCount = 0x4BC; // int32
            public const nint m_bFadePlayerVisibilityFarZ = 0x4C0; // bool
            public const nint m_bRainTraceToSkyEnabled = 0x4C1; // bool
            public const nint m_flEnvRainStrength = 0x4C4; // float32
            public const nint m_flEnvPuddleRippleStrength = 0x4C8; // float32
            public const nint m_flEnvPuddleRippleDirection = 0x4CC; // float32
            public const nint m_flEnvWetnessCoverage = 0x4D0; // float32
            public const nint m_flEnvWetnessDryingAmount = 0x4D4; // float32
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
            public const nint m_hGradientFogTexture = 0x4A8; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_flFogStartDistance = 0x4B0; // float32
            public const nint m_flFogEndDistance = 0x4B4; // float32
            public const nint m_bHeightFogEnabled = 0x4B8; // bool
            public const nint m_flFogStartHeight = 0x4BC; // float32
            public const nint m_flFogEndHeight = 0x4C0; // float32
            public const nint m_flFarZ = 0x4C4; // float32
            public const nint m_flFogMaxOpacity = 0x4C8; // float32
            public const nint m_flFogFalloffExponent = 0x4CC; // float32
            public const nint m_flFogVerticalExponent = 0x4D0; // float32
            public const nint m_fogColor = 0x4D4; // Color
            public const nint m_flFogStrength = 0x4D8; // float32
            public const nint m_flFadeTime = 0x4DC; // float32
            public const nint m_bStartDisabled = 0x4E0; // bool
            public const nint m_bIsEnabled = 0x4E1; // bool
            public const nint m_bGradientFogNeedsTextures = 0x4E2; // bool
        }
        // Parent: CSoundOpvarSetPointEntity
        // Field count: 9
        public static class CSoundOpvarSetAABBEntity {
            public const nint m_vDistanceInnerMins = 0x640; // Vector
            public const nint m_vDistanceInnerMaxs = 0x64C; // Vector
            public const nint m_vDistanceOuterMins = 0x658; // Vector
            public const nint m_vDistanceOuterMaxs = 0x664; // Vector
            public const nint m_nAABBDirection = 0x670; // int32
            public const nint m_vInnerMins = 0x674; // Vector
            public const nint m_vInnerMaxs = 0x680; // Vector
            public const nint m_vOuterMins = 0x68C; // Vector
            public const nint m_vOuterMaxs = 0x698; // Vector
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Outflow_PlaySequence {
            public const nint m_ParamSequenceName = 0xF0; // CUtlString
        }
        // Parent: CPointClientUIWorldPanel
        // Field count: 1
        //
        // Metadata:
        // NetworkVarNames: m_messageText (char)
        public static class CPointClientUIWorldTextPanel {
            public const nint m_messageText = 0x8E8; // char[512]
        }
        // Parent: 
        // Field count: 12
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
            public const nint m_pAttributes = 0x48; // CEntityAttributeTable*
            public const nint m_pPrev = 0x50; // CEntityIdentity*
            public const nint m_pNext = 0x58; // CEntityIdentity*
            public const nint m_pPrevByClass = 0x60; // CEntityIdentity*
            public const nint m_pNextByClass = 0x68; // CEntityIdentity*
        }
        // Parent: None
        // Field count: 1
        public static class CPulseCell_LimitCount__Criteria_t {
            public const nint m_bLimitCountPasses = 0x0; // bool
        }
        // Parent: CBaseModelEntity
        // Field count: 41
        public static class CFuncRotator {
            public const nint m_hRotatorTarget = 0x730; // CHandle<CBaseEntity>
            public const nint m_bIsRotating = 0x734; // bool
            public const nint m_bIsReversing = 0x735; // bool
            public const nint m_flTimeToReachMaxSpeed = 0x738; // float32
            public const nint m_flTimeToReachZeroSpeed = 0x73C; // float32
            public const nint m_flDistanceAlongArcTraveled = 0x740; // float32
            public const nint m_flTimeToWaitOscillate = 0x744; // float32
            public const nint m_flTimeRotationStart = 0x748; // GameTime_t
            public const nint m_qLSPrevChange = 0x750; // Quaternion
            public const nint m_qWSPrev = 0x760; // Quaternion
            public const nint m_qWSInit = 0x770; // Quaternion
            public const nint m_qLSInit = 0x780; // Quaternion
            public const nint m_qLSOrientation = 0x790; // Quaternion
            public const nint m_OnRotationStarted = 0x7A0; // CEntityIOOutput
            public const nint m_OnRotationCompleted = 0x7B8; // CEntityIOOutput
            public const nint m_OnOscillate = 0x7D0; // CEntityIOOutput
            public const nint m_OnOscillateStartArrive = 0x7E8; // CEntityIOOutput
            public const nint m_OnOscillateStartDepart = 0x800; // CEntityIOOutput
            public const nint m_OnOscillateEndArrive = 0x818; // CEntityIOOutput
            public const nint m_OnOscillateEndDepart = 0x830; // CEntityIOOutput
            public const nint m_bOscillateDepart = 0x848; // bool
            public const nint m_nOscillateCount = 0x84C; // int32
            public const nint m_eRotateType = 0x850; // CFuncRotator::Rotate_t
            public const nint m_ePrevRotateType = 0x854; // CFuncRotator::Rotate_t
            public const nint m_bHasTargetOverride = 0x858; // bool
            public const nint m_qOrientationOverride = 0x860; // Quaternion
            public const nint m_eSpaceOverride = 0x870; // RotatorTargetSpace_t
            public const nint m_qAngularVelocity = 0x874; // QAngle
            public const nint m_vLookAtForcedUp = 0x880; // Vector
            public const nint m_strRotatorTarget = 0x890; // CUtlSymbolLarge
            public const nint m_bRecordHistory = 0x898; // bool
            public const nint m_vecRotatorHistory = 0x8A0; // CUtlVector<RotatorHistoryEntry_t>
            public const nint m_bReturningToPreviousOrientation = 0x8B8; // bool
            public const nint m_vecRotatorQueue = 0x8C0; // CUtlVector<RotatorQueueEntry_t>
            public const nint m_vecRotatorQueueHistory = 0x8D8; // CUtlVector<RotatorHistoryEntry_t>
            public const nint m_eSolidType = 0x8F0; // SolidType_t
            public const nint m_hSpeedFromMover = 0x8F4; // CHandle<CFuncMover>
            public const nint m_iszSpeedFromMover = 0x8F8; // CUtlSymbolLarge
            public const nint m_flSpeedScale = 0x900; // float32
            public const nint m_flMinYawRotation = 0x904; // float32
            public const nint m_flMaxYawRotation = 0x908; // float32
        }
        // Parent: CBaseEntity
        // Field count: 14
        public static class CSoundEventEntity {
            public const nint m_bStartOnSpawn = 0x4A8; // bool
            public const nint m_bToLocalPlayer = 0x4A9; // bool
            public const nint m_bStopOnNew = 0x4AA; // bool
            public const nint m_bSaveRestore = 0x4AB; // bool
            public const nint m_bSavedIsPlaying = 0x4AC; // bool
            public const nint m_flSavedElapsedTime = 0x4B0; // float32
            public const nint m_iszSourceEntityName = 0x4B8; // CUtlSymbolLarge
            public const nint m_iszAttachmentName = 0x4C0; // CUtlSymbolLarge
            public const nint m_onGUIDChanged = 0x4C8; // CEntityOutputTemplate<uint64,uint64>
            public const nint m_onSoundFinished = 0x4E8; // CEntityIOOutput
            public const nint m_flClientCullRadius = 0x500; // float32
            public const nint m_iszSoundName = 0x530; // CUtlSymbolLarge
            public const nint m_hSource = 0x54C; // CEntityHandle
            public const nint m_nEntityIndexSelection = 0x550; // int32
        }
        // Parent: SpawnPoint
        // Field count: 0
        public static class CInfoPlayerCounterterrorist {
        }
        // Parent: CLogicalEntity
        // Field count: 4
        //
        // Metadata:
        // NetworkVarNames: m_fadeColor (Color)
        public static class CEnvFade {
            public const nint m_fadeColor = 0x4A8; // Color
            public const nint m_Duration = 0x4AC; // float32
            public const nint m_HoldDuration = 0x4B0; // float32
            public const nint m_OnBeginFade = 0x4B8; // CEntityIOOutput
        }
        // Parent: None
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
        // Parent: CTriggerMultiple
        // Field count: 4
        public static class CTriggerImpact {
            public const nint m_flMagnitude = 0x8A8; // float32
            public const nint m_flNoise = 0x8AC; // float32
            public const nint m_flViewkick = 0x8B0; // float32
            public const nint m_pOutputForce = 0x8B8; // CEntityOutputTemplate<Vector,Vector>
        }
        // Parent: None
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
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        // MPulseEditorHeaderIcon
        public static class CPulseCell_CursorQueue {
            public const nint m_nCursorsAllowedToRunParallel = 0x98; // int32
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        // MPulseEditorHeaderIcon
        public static class CPulseCell_Value_RandomFloat {
        }
        // Parent: None
        // Field count: 0
        public static class CPulseExecCursor {
        }
        // Parent: CDynamicProp
        // Field count: 38
        //
        // Metadata:
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
        public static class CBasePropDoor {
            public const nint m_flAutoReturnDelay = 0xC60; // float32
            public const nint m_hDoorList = 0xC68; // CUtlVector<CHandle<CBasePropDoor>>
            public const nint m_nHardwareType = 0xC80; // int32
            public const nint m_bNeedsHardware = 0xC84; // bool
            public const nint m_eDoorState = 0xC88; // DoorState_t
            public const nint m_bLocked = 0xC8C; // bool
            public const nint m_bNoNPCs = 0xC8D; // bool
            public const nint m_closedPosition = 0xC90; // Vector
            public const nint m_closedAngles = 0xC9C; // QAngle
            public const nint m_hBlocker = 0xCA8; // CHandle<CBaseEntity>
            public const nint m_bFirstBlocked = 0xCAC; // bool
            public const nint m_ls = 0xCB0; // locksound_t
            public const nint m_bForceClosed = 0xCD0; // bool
            public const nint m_vecLatchWorldPosition = 0xCD4; // VectorWS
            public const nint m_hActivator = 0xCE0; // CHandle<CBaseEntity>
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
            public const nint m_OnBlockedOpening = 0xD70; // CEntityIOOutput
            public const nint m_OnUnblockedClosing = 0xD88; // CEntityIOOutput
            public const nint m_OnUnblockedOpening = 0xDA0; // CEntityIOOutput
            public const nint m_OnFullyClosed = 0xDB8; // CEntityIOOutput
            public const nint m_OnFullyOpen = 0xDD0; // CEntityIOOutput
            public const nint m_OnClose = 0xDE8; // CEntityIOOutput
            public const nint m_OnOpen = 0xE00; // CEntityIOOutput
            public const nint m_OnLockedUse = 0xE18; // CEntityIOOutput
            public const nint m_OnAjarOpen = 0xE30; // CEntityIOOutput
        }
        // Parent: CLogicalEntity
        // Field count: 6
        public static class CLogicBranchList {
            public const nint m_nLogicBranchNames = 0x4A8; // CUtlSymbolLarge[16]
            public const nint m_LogicBranchList = 0x528; // CUtlVector<CHandle<CBaseEntity>>
            public const nint m_eLastState = 0x540; // CLogicBranchList::LogicBranchListenerLastState_t
            public const nint m_OnAllTrue = 0x548; // CEntityIOOutput
            public const nint m_OnAllFalse = 0x560; // CEntityIOOutput
            public const nint m_OnMixed = 0x578; // CEntityIOOutput
        }
        // Parent: None
        // Field count: 1
        public static class CBtActionParachutePositioning {
            public const nint m_ActionTimer = 0x58; // CountdownTimer
        }
        // Parent: CCSWeaponBaseGun
        // Field count: 0
        public static class CAK47 {
        }
        // Parent: CBreakableProp
        // Field count: 22
        //
        // Metadata:
        // NetworkVarNames: m_bUseHitboxesForRenderBox (bool)
        // NetworkVarNames: m_bUseAnimGraph (bool)
        public static class CDynamicProp {
            public const nint m_bCreateNavObstacle = 0xBA8; // bool
            public const nint m_bNavObstacleUpdatesOverridden = 0xBA9; // bool
            public const nint m_bUseHitboxesForRenderBox = 0xBAA; // bool
            public const nint m_bUseAnimGraph = 0xBAB; // bool
            public const nint m_pOutputAnimBegun = 0xBB0; // CEntityIOOutput
            public const nint m_pOutputAnimOver = 0xBC8; // CEntityIOOutput
            public const nint m_pOutputAnimLoopCycleOver = 0xBE0; // CEntityIOOutput
            public const nint m_OnAnimReachedStart = 0xBF8; // CEntityIOOutput
            public const nint m_OnAnimReachedEnd = 0xC10; // CEntityIOOutput
            public const nint m_iszIdleAnim = 0xC28; // CUtlSymbolLarge
            public const nint m_nIdleAnimLoopMode = 0xC30; // AnimLoopMode_t
            public const nint m_bRandomizeCycle = 0xC34; // bool
            public const nint m_bStartDisabled = 0xC35; // bool
            public const nint m_bFiredStartEndOutput = 0xC36; // bool
            public const nint m_bForceNpcExclude = 0xC37; // bool
            public const nint m_bCreateNonSolid = 0xC38; // bool
            public const nint m_bIsOverrideProp = 0xC39; // bool
            public const nint m_iInitialGlowState = 0xC3C; // int32
            public const nint m_nGlowRange = 0xC40; // int32
            public const nint m_nGlowRangeMin = 0xC44; // int32
            public const nint m_glowColor = 0xC48; // Color
            public const nint m_nGlowTeam = 0xC4C; // int32
        }
        // Parent: CHostage
        // Field count: 0
        public static class CHostageAlias_info_hostage_spawn {
        }
        // Parent: CBaseFilter
        // Field count: 1
        public static class CFilterTeam {
            public const nint m_iFilterTeam = 0x4E0; // int32
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
            public const nint m_szConveyorModels = 0x730; // CUtlSymbolLarge
            public const nint m_flTransitionDurationSeconds = 0x738; // float32
            public const nint m_angMoveEntitySpace = 0x73C; // QAngle
            public const nint m_vecMoveDirEntitySpace = 0x748; // Vector
            public const nint m_flTargetSpeed = 0x754; // float32
            public const nint m_nTransitionStartTick = 0x758; // GameTick_t
            public const nint m_nTransitionDurationTicks = 0x75C; // int32
            public const nint m_flTransitionStartSpeed = 0x760; // float32
            public const nint m_hConveyorModels = 0x768; // CNetworkUtlVectorBase<CHandle<CBaseEntity>>
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
            public const nint m_gravityScale = 0x8A0; // float32
            public const nint m_linearLimit = 0x8A4; // float32
            public const nint m_linearDamping = 0x8A8; // float32
            public const nint m_angularLimit = 0x8AC; // float32
            public const nint m_angularDamping = 0x8B0; // float32
            public const nint m_linearForce = 0x8B4; // float32
            public const nint m_flFrequency = 0x8B8; // float32
            public const nint m_flDampingRatio = 0x8BC; // float32
            public const nint m_vecLinearForcePointAt = 0x8C0; // Vector
            public const nint m_bCollapseToForcePoint = 0x8CC; // bool
            public const nint m_vecLinearForcePointAtWorld = 0x8D0; // Vector
            public const nint m_vecLinearForceDirection = 0x8DC; // Vector
            public const nint m_bConvertToDebrisWhenPossible = 0x8E8; // bool
        }
        // Parent: CPointEntity
        // Field count: 0
        public static class CInfoInstructorHintBombTargetB {
        }
        // Parent: CBaseEntity
        // Field count: 5
        public static class CFuncTimescale {
            public const nint m_flDesiredTimescale = 0x4A8; // float32
            public const nint m_flAcceleration = 0x4AC; // float32
            public const nint m_flMinBlendRate = 0x4B0; // float32
            public const nint m_flBlendDeltaMultiplier = 0x4B4; // float32
            public const nint m_isStarted = 0x4B8; // bool
        }
        // Parent: CPointEntity
        // Field count: 3
        public static class CInfoInteraction {
            public const nint m_strSlotEntityName = 0x4A8; // CUtlSymbolLarge[8]
            public const nint m_strInteractVData = 0x4E8; // CUtlSymbolLarge
            public const nint m_flInteractRadius = 0x4F0; // float32
        }
        // Parent: None
        // Field count: 31
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
            public const nint m_szMuzzleFlashParticleConfig = 0x2F0; // CUtlString
            public const nint m_szBarrelSmokeParticle = 0x2F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            public const nint m_nMuzzleSmokeShotThreshold = 0x3D8; // uint8
            public const nint m_flMuzzleSmokeTimeout = 0x3DC; // float32
            public const nint m_flMuzzleSmokeDecrementRate = 0x3E0; // float32
            public const nint m_bGenerateMuzzleLight = 0x3E4; // bool
            public const nint m_bLinkedCooldowns = 0x3E5; // bool
            public const nint m_iFlags = 0x3E6; // ItemFlagTypes_t
            public const nint m_iWeight = 0x3E8; // int32
            public const nint m_bAutoSwitchTo = 0x3EC; // bool
            public const nint m_bAutoSwitchFrom = 0x3ED; // bool
            public const nint m_nPrimaryAmmoType = 0x3EE; // AmmoIndex_t
            public const nint m_nSecondaryAmmoType = 0x3EF; // AmmoIndex_t
            public const nint m_iMaxClip1 = 0x3F0; // int32
            public const nint m_iMaxClip2 = 0x3F4; // int32
            public const nint m_iDefaultClip1 = 0x3F8; // int32
            public const nint m_iDefaultClip2 = 0x3FC; // int32
            public const nint m_bReserveAmmoAsClips = 0x400; // bool
            public const nint m_bTreatAsSingleClip = 0x401; // bool
            public const nint m_bKeepLoadedAmmo = 0x402; // bool
            public const nint m_iRumbleEffect = 0x404; // RumbleEffect_t
            public const nint m_flDropSpeed = 0x408; // float32
            public const nint m_iSlot = 0x40C; // int32
            public const nint m_iPosition = 0x410; // int32
            public const nint m_aShootSounds = 0x418; // CUtlOrderedMap<WeaponSound_t,CSoundEventName>
        }
        // Parent: CSoundOpvarSetPointBase
        // Field count: 24
        public static class CSoundOpvarSetPointEntity {
            public const nint m_OnEnter = 0x550; // CEntityIOOutput
            public const nint m_OnExit = 0x568; // CEntityIOOutput
            public const nint m_bAutoDisable = 0x580; // bool
            public const nint m_flDistanceMin = 0x5C4; // float32
            public const nint m_flDistanceMax = 0x5C8; // float32
            public const nint m_flDistanceMapMin = 0x5CC; // float32
            public const nint m_flDistanceMapMax = 0x5D0; // float32
            public const nint m_flOcclusionRadius = 0x5D4; // float32
            public const nint m_flOcclusionMin = 0x5D8; // float32
            public const nint m_flOcclusionMax = 0x5DC; // float32
            public const nint m_flValSetOnDisable = 0x5E0; // float32
            public const nint m_bSetValueOnDisable = 0x5E4; // bool
            public const nint m_bReloading = 0x5E5; // bool
            public const nint m_nSimulationMode = 0x5E8; // int32
            public const nint m_nVisibilitySamples = 0x5EC; // int32
            public const nint m_vDynamicProxyPoint = 0x5F0; // Vector
            public const nint m_flDynamicMaximumOcclusion = 0x5FC; // float32
            public const nint m_hDynamicEntity = 0x600; // CEntityHandle
            public const nint m_iszDynamicEntityName = 0x608; // CUtlSymbolLarge
            public const nint m_flPathingDistanceNormFactor = 0x610; // float32
            public const nint m_vPathingSourcePos = 0x614; // Vector
            public const nint m_vPathingListenerPos = 0x620; // Vector
            public const nint m_vPathingDirection = 0x62C; // Vector
            public const nint m_nPathingSourceIndex = 0x638; // int32
        }
        // Parent: CServerOnlyPointEntity
        // Field count: 0
        public static class CInfoTargetServerOnly {
        }
        // Parent: CBaseTrigger
        // Field count: 0
        public static class CServerRagdollTrigger {
        }
        // Parent: CDynamicProp
        // Field count: 0
        public static class CDynamicPropAlias_dynamic_prop {
        }
        // Parent: CMarkupVolume
        // Field count: 7
        public static class CMarkupVolumeTagged {
            public const nint m_GroupNames = 0x738; // CUtlVector<CGlobalSymbol>
            public const nint m_Tags = 0x750; // CUtlVector<CGlobalSymbol>
            public const nint m_bIsGroup = 0x768; // bool
            public const nint m_bGroupByPrefab = 0x769; // bool
            public const nint m_bGroupByVolume = 0x76A; // bool
            public const nint m_bGroupOtherGroups = 0x76B; // bool
            public const nint m_bIsInGroup = 0x76C; // bool
        }
        // Parent: CPointEntity
        // Field count: 0
        public static class CInfoParticleTarget {
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
            public const nint m_Entity_hCubemapTexture = 0x528; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Entity_bCustomCubemapTexture = 0x530; // bool
            public const nint m_Entity_flInfluenceRadius = 0x534; // float32
            public const nint m_Entity_vBoxProjectMins = 0x538; // Vector
            public const nint m_Entity_vBoxProjectMaxs = 0x544; // Vector
            public const nint m_Entity_bMoveable = 0x550; // bool
            public const nint m_Entity_nHandshake = 0x554; // int32
            public const nint m_Entity_nEnvCubeMapArrayIndex = 0x558; // int32
            public const nint m_Entity_nPriority = 0x55C; // int32
            public const nint m_Entity_flEdgeFadeDist = 0x560; // float32
            public const nint m_Entity_vEdgeFadeDists = 0x564; // Vector
            public const nint m_Entity_flDiffuseScale = 0x570; // float32
            public const nint m_Entity_bStartDisabled = 0x574; // bool
            public const nint m_Entity_bDefaultEnvMap = 0x575; // bool
            public const nint m_Entity_bDefaultSpecEnvMap = 0x576; // bool
            public const nint m_Entity_bIndoorCubeMap = 0x577; // bool
            public const nint m_Entity_bCopyDiffuseFromDefaultCubemap = 0x578; // bool
            public const nint m_Entity_bEnabled = 0x588; // bool
        }
        // Parent: CPlayerPawnComponent
        // Field count: 0
        public static class CCSPlayer_DamageReactServices {
        }
        // Parent: CCSWeaponBaseShotgun
        // Field count: 0
        public static class CWeaponXM1014 {
        }
        // Parent: CBaseTrigger
        // Field count: 16
        public static class CTriggerLerpObject {
            public const nint m_iszLerpTarget = 0x890; // CUtlSymbolLarge
            public const nint m_hLerpTarget = 0x898; // CHandle<CBaseEntity>
            public const nint m_iszLerpTargetAttachment = 0x8A0; // CUtlSymbolLarge
            public const nint m_hLerpTargetAttachment = 0x8A8; // AttachmentHandle_t
            public const nint m_flLerpDuration = 0x8AC; // float32
            public const nint m_bAttachedEntityWasParented = 0x8B0; // bool
            public const nint m_bLerpRestoreMoveType = 0x8B1; // bool
            public const nint m_bSingleLerpObject = 0x8B2; // bool
            public const nint m_vecLerpingObjects = 0x8B8; // CUtlVector<lerpdata_t>
            public const nint m_iszLerpEffect = 0x8D0; // CUtlSymbolLarge
            public const nint m_iszLerpSound = 0x8D8; // CUtlSymbolLarge
            public const nint m_bAttachTouchingObject = 0x8E0; // bool
            public const nint m_hEntityToWaitForDisconnect = 0x8E4; // CHandle<CBaseEntity>
            public const nint m_OnLerpStarted = 0x8E8; // CEntityIOOutput
            public const nint m_OnLerpFinished = 0x900; // CEntityIOOutput
            public const nint m_OnDetached = 0x918; // CEntityIOOutput
        }
        // Parent: CPhysicsProp
        // Field count: 0
        public static class CPhysicsPropOverride {
        }
        // Parent: CBaseTrigger
        // Field count: 3
        public static class CTriggerSave {
            public const nint m_bForceNewLevelUnit = 0x890; // bool
            public const nint m_fDangerousTimer = 0x894; // float32
            public const nint m_minHitPoints = 0x898; // int32
        }
        // Parent: CPointEntity
        // Field count: 6
        public static class CPointHurt {
            public const nint m_nDamage = 0x4A8; // int32
            public const nint m_bitsDamageType = 0x4AC; // DamageTypes_t
            public const nint m_flRadius = 0x4B0; // float32
            public const nint m_flDelay = 0x4B4; // float32
            public const nint m_strTarget = 0x4B8; // CUtlSymbolLarge
            public const nint m_pActivator = 0x4C0; // CHandle<CBaseEntity>
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
        public static class CBasePlayerController {
            public const nint m_nInButtonsWhichAreToggles = 0x4B0; // uint64
            public const nint m_nTickBase = 0x4B8; // uint32
            public const nint m_hPawn = 0x4E0; // CHandle<CBasePlayerPawn>
            public const nint m_bKnownTeamMismatch = 0x4E4; // bool
            public const nint m_nSplitScreenSlot = 0x4E8; // CSplitScreenSlot
            public const nint m_hSplitOwner = 0x4EC; // CHandle<CBasePlayerController>
            public const nint m_hSplitScreenPlayers = 0x4F0; // CUtlVector<CHandle<CBasePlayerController>>
            public const nint m_bIsHLTV = 0x508; // bool
            public const nint m_iConnected = 0x50C; // PlayerConnectedState
            public const nint m_iszPlayerName = 0x510; // char[128]
            public const nint m_szNetworkIDString = 0x590; // CUtlString
            public const nint m_fLerpTime = 0x598; // float32
            public const nint m_bLagCompensation = 0x59C; // bool
            public const nint m_bPredict = 0x59D; // bool
            public const nint m_bIsLowViolence = 0x5A4; // bool
            public const nint m_bGamePaused = 0x5A5; // bool
            public const nint m_iIgnoreGlobalChat = 0x6E0; // ChatIgnoreType_t
            public const nint m_flLastPlayerTalkTime = 0x6E4; // float32
            public const nint m_flLastEntitySteadyState = 0x6E8; // float32
            public const nint m_nAvailableEntitySteadyState = 0x6EC; // int32
            public const nint m_bHasAnySteadyStateEnts = 0x6F0; // bool
            public const nint m_steamID = 0x700; // uint64
            public const nint m_bNoClipEnabled = 0x708; // bool
            public const nint m_iDesiredFOV = 0x70C; // uint32
        }
    }
}
