// Generated using https://github.com/a2x/cs2-dumper
// 2026-04-21 16:19:03.827280400 UTC

namespace CS2Dumper.Schemas {
    // Module: server.dll
    // Class count: 943
    // Enum count: 179
    public static class ServerDll {
        // Alignment: 4
        // Member count: 4
        public enum CLogicBranchList__LogicBranchListenerLastState_t : uint {
            LOGIC_BRANCH_LISTENER_NOT_INIT = 0x0,
            LOGIC_BRANCH_LISTENER_ALL_TRUE = 0x1,
            LOGIC_BRANCH_LISTENER_ALL_FALSE = 0x2,
            LOGIC_BRANCH_LISTENER_MIXED = 0x3
        }
        // Alignment: 4
        // Member count: 3
        public enum CFuncMover__Move_t : uint {
            MOVE_LOOP = 0x0,
            MOVE_OSCILLATE = 0x1,
            MOVE_STOP_AT_END = 0x2
        }
        // Alignment: 4
        // Member count: 6
        public enum CFuncRotator__Rotate_t : uint {
            ROTATE_LOOP = 0x0,
            ROTATE_OSCILLATE = 0x1,
            ROTATE_STOP_AT_END = 0x2,
            ROTATE_LOOK_AT_TARGET = 0x3,
            ROTATE_LOOK_AT_TARGET_ONLY_YAW = 0x4,
            ROTATE_RETURN_TO_INITIAL_ORIENTATION = 0x5
        }
        // Alignment: 4
        // Member count: 2
        public enum PulseBestOutflowRules_t : uint {
            SORT_BY_NUMBER_OF_VALID_CRITERIA = 0x0,
            SORT_BY_OUTFLOW_INDEX = 0x1
        }
        // Alignment: 4
        // Member count: 2
        public enum CPhysicsProp__CrateType_t : uint {
            CRATE_SPECIFIC_ITEM = 0x0,
            CRATE_TYPE_COUNT = 0x1
        }
        // Alignment: 4
        // Member count: 4
        public enum PulseCursorCancelPriority_t : uint {
            None = 0x0,
            CancelOnSucceeded = 0x1,
            SoftCancel = 0x2,
            HardCancel = 0x3
        }
        // Alignment: 4
        // Member count: 2
        public enum PulseMethodCallMode_t : uint {
            SYNC_WAIT_FOR_COMPLETION = 0x0,
            ASYNC_FIRE_AND_FORGET = 0x1
        }
        // Alignment: 4
        // Member count: 3
        public enum CFuncMover__FollowConstraint_t : uint {
            FOLLOW_CONSTRAINT_DISTANCE = 0x0,
            FOLLOW_CONSTRAINT_SPRING = 0x1,
            FOLLOW_CONSTRAINT_RATIO = 0x2
        }
        // Alignment: 4
        // Member count: 3
        public enum CFuncMover__FollowEntityDirection_t : uint {
            FOLLOW_ENTITY_BIDIRECTIONAL = 0x0,
            FOLLOW_ENTITY_FORWARD = 0x1,
            FOLLOW_ENTITY_REVERSE = 0x2
        }
        // Alignment: 4
        // Member count: 4
        public enum CFuncMover__TransitionToPathNodeAction_t : uint {
            TRANSITION_TO_PATH_NODE_ACTION_NONE = 0x0,
            TRANSITION_TO_PATH_NODE_ACTION_START_FORWARD = 0x1,
            TRANSITION_TO_PATH_NODE_ACTION_START_REVERSE = 0x2,
            TRANSITION_TO_PATH_NODE_TRANSITIONING = 0x3
        }
        // Alignment: 4
        // Member count: 9
        public enum CFuncMover__OrientationUpdate_t : uint {
            ORIENTATION_FORWARD_PATH = 0x0,
            ORIENTATION_FORWARD_PATH_AND_FIXED_PITCH = 0x1,
            ORIENTATION_FORWARD_PATH_AND_UP_CONTROL_POINT = 0x2,
            ORIENTATION_MATCH_CONTROL_POINT = 0x3,
            ORIENTATION_FIXED = 0x4,
            ORIENTATION_FACE_PLAYER = 0x5,
            ORIENTATION_FORWARD_MOVEMENT_DIRECTION = 0x6,
            ORIENTATION_FORWARD_MOVEMENT_DIRECTION_AND_UP_CONTROL_POINT = 0x7,
            ORIENTATION_FACE_ENTITY = 0x8
        }
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
        public enum soundcommands_t : uint {
            SOUNDCTRL_CHANGE_VOLUME = 0x0,
            SOUNDCTRL_CHANGE_PITCH = 0x1,
            SOUNDCTRL_STOP = 0x2,
            SOUNDCTRL_DESTROY = 0x3,
            SOUNDCTRL_FADEOUT = 0x4
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
        // Member count: 4
        public enum CInfoChoreoLocatorShapeType_t : uint {
            POINT = 0x0,
            LINE = 0x1,
            COUNT = 0x2,
            NONE = 0x3
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
        // Member count: 3
        public enum GLOBALESTATE : byte {
            GLOBAL_OFF = 0x0,
            GLOBAL_ON = 0x1,
            GLOBAL_DEAD = 0x2
        }
        // Alignment: 1
        // Member count: 6
        public enum AnimationAlgorithm_t : byte {
            eInvalid = unchecked((byte)-1),
            eNone = 0x0,
            eSequence = 0x1,
            eAnimGraph2 = 0x2,
            eAnimGraph2Secondary = 0x3,
            eCount = 0x4
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
        // Alignment: 1
        // Member count: 4
        public enum CCSPlayerAnimationState__MoveType_t : byte {
            None = 0x0,
            Ground = 0x1,
            Air = 0x2,
            Ladder = 0x3
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
        // Member count: 6
        public enum FuncMoverMovementSummaryFlags_t : uint {
            eNone = 0x0,
            eMovementBegin = 0x1,
            eStopBegin = 0x2,
            eStopComplete = 0x4,
            eReversing = 0x8,
            eEventsDispatched = 0x10
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
        // Member count: 3
        public enum InteractionPassive_t : uint {
            INTERACT_PASSIVE_NONE = 0x0,
            INTERACT_PASSIVE_LOOKAT = 0x1,
            INTERACT_PASSIVE_SPEAK = 0x2
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
        // Member count: 4
        public enum ESceneRequestState_t : uint {
            INACTIVE = 0x0,
            ACTIVE = 0x1,
            FINISHED = 0x2,
            FAILED = 0x3
        }
        // Alignment: 1
        // Member count: 7
        public enum CCSPlayerAnimationState__GroundMoveState_t : byte {
            None = 0x0,
            Idle = 0x1,
            Start = 0x2,
            Move = 0x3,
            TurnOnSpot = 0x4,
            TurnOnSpotLoop = 0x5,
            PlantAndTurn = 0x6
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
        // Member count: 2
        public enum ENPCBehaviorOverride_t : uint {
            eKeepExisting = 0x0,
            eTakeOver = 0x1
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
        // Alignment: 4
        // Member count: 22
        public enum SaveRestoreTableFlags_t : uint {
            FENTTABLE_NONE = 0x0,
            FENTTABLE_PLAYER = unchecked((uint)2147483648),
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
            NeverConnected = unchecked((uint)-1),
            Connected = 0x0,
            Connecting = 0x1,
            Reconnecting = 0x2,
            Disconnecting = 0x3,
            Disconnected = 0x4,
            Reserved = 0x5
        }
        // Alignment: 4
        // Member count: 29
        public enum PreviewCharacterBannerAnimation : uint {
            INVALID = unchecked((uint)-1),
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
        // Alignment: 4
        // Member count: 6
        public enum ChoreoExternalAnimgraphControlState_t : uint {
            eNone = 0x0,
            eBegin = 0x1,
            eLooping = 0x2,
            eExit = 0x3,
            eAbort = 0x4,
            eCount = 0x5
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
        // Member count: 5
        public enum INavObstacle__NavObstacleType_t : uint {
            NAV_OBSTACLE_TYPE_INVALID = unchecked((uint)-1),
            NAV_OBSTACLE_TYPE_NONE = 0x0,
            NAV_OBSTACLE_TYPE_AVOID = 0x1,
            NAV_OBSTACLE_TYPE_CONN = 0x2,
            NAV_OBSTACLE_TYPE_BLOCK = 0x3
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
        // Alignment: 1
        // Member count: 9
        public enum CCSPlayerAnimationState__Direction_t : byte {
            None = 0x0,
            N = 0x1,
            NE = 0x2,
            E = 0x3,
            SE = 0x4,
            S = 0x5,
            SW = 0x6,
            W = 0x7,
            NW = 0x8
        }
        // Alignment: 4
        // Member count: 3
        public enum eSplinePushType : uint {
            k_eSplinePushAlong = 0x0,
            k_eSplinePushAway = 0x1,
            k_eSplinePushTowards = 0x2
        }
        // Alignment: 2
        // Member count: 29
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
            WPN_ANIMSTATE_END_VALID = 0x7D0
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
        // Member count: 7
        public enum ShakeCommand_t : uint {
            SHAKE_START = 0x0,
            SHAKE_STOP = 0x1,
            SHAKE_AMPLITUDE = 0x2,
            SHAKE_FREQUENCY = 0x3,
            SHAKE_START_RUMBLEONLY = 0x4,
            SHAKE_START_NORUMBLE = 0x5,
            SHAKE_DURATION = 0x6
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
        // Member count: 5
        public enum InteractionPriority_t : uint {
            INTERACT_PRIORITY_NONE = 0x0,
            INTERACT_PRIORITY_PASSIVE = 0x1,
            INTERACT_PRIORITY_LOW = 0x2,
            INTERACT_PRIORITY_MED = 0x3,
            INTERACT_PRIORITY_HIGH = 0x4
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
        // Alignment: 1
        // Member count: 4
        public enum CCSPlayerAnimationState__AirAction_t : byte {
            None = 0x0,
            Jump = 0x1,
            StartFall = 0x2,
            Land = 0x3
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
        public static class CPointWorldText {
            public const nint m_messageText = 0x768; // char[512]
            public const nint m_FontName = 0x968; // char[64]
            public const nint m_BackgroundMaterialName = 0x9A8; // char[64]
            public const nint m_bEnabled = 0x9E8; // bool
            public const nint m_bFullbright = 0x9E9; // bool
            public const nint m_flWorldUnitsPerPx = 0x9EC; // float32
            public const nint m_flFontSize = 0x9F0; // float32
            public const nint m_flDepthOffset = 0x9F4; // float32
            public const nint m_bDrawBackground = 0x9F8; // bool
            public const nint m_flBackgroundBorderWidth = 0x9FC; // float32
            public const nint m_flBackgroundBorderHeight = 0xA00; // float32
            public const nint m_flBackgroundWorldToUV = 0xA04; // float32
            public const nint m_Color = 0xA08; // Color
            public const nint m_nJustifyHorizontal = 0xA0C; // PointWorldTextJustifyHorizontal_t
            public const nint m_nJustifyVertical = 0xA10; // PointWorldTextJustifyVertical_t
            public const nint m_nReorientMode = 0xA14; // PointWorldTextReorientMode_t
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
            public const nint m_fog = 0x8C8; // fogparams_t
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
        public static class CCSPlayer_PingServices {
            public const nint m_flPlayerPingTokens = 0x48; // GameTime_t[5]
            public const nint m_hPlayerPing = 0x5C; // CHandle<CPlayerPing>
        }
        // Parent: CBaseCSGrenade
        // Field count: 0
        public static class CHEGrenade {
        }
        // Parent: CBaseEntity
        // Field count: 9
        public static class CPhysicsSpring {
            public const nint m_pSpringJoint = 0x4A8; // IPhysicsJoint*
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
        // Parent: CDynamicProp
        // Field count: 0
        public static class CFuncRetakeBarrier {
        }
        // Parent: CBaseTrigger
        // Field count: 2
        public static class CTriggerBuoyancy {
            public const nint m_BuoyancyHelper = 0x8C8; // CBuoyancyHelper
            public const nint m_flFluidDensity = 0x9E0; // float32
        }
        // Parent: CTonemapController2
        // Field count: 0
        public static class CTonemapController2Alias_env_tonemap_controller2 {
        }
        // Parent: CPointEntity
        // Field count: 9
        public static class CPathTrack {
            public const nint m_pnext = 0x4A8; // CHandle<CPathTrack>
            public const nint m_pprevious = 0x4AC; // CHandle<CPathTrack>
            public const nint m_paltpath = 0x4B0; // CHandle<CPathTrack>
            public const nint m_flRadius = 0x4B4; // float32
            public const nint m_length = 0x4B8; // float32
            public const nint m_altName = 0x4C0; // CUtlSymbolLarge
            public const nint m_nIterVal = 0x4C8; // int32
            public const nint m_eOrientationType = 0x4CC; // TrackOrientationType_t
            public const nint m_OnPass = 0x4D0; // CEntityIOOutput
        }
        // Parent: CBaseEntity
        // Field count: 0
        public static class CCSGO_EndOfMatchLineupEndpoint {
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
            public const nint m_hMeasureTarget = 0x8C8; // CHandle<CBaseEntity>
            public const nint m_iszMeasureTarget = 0x8D0; // CUtlSymbolLarge
            public const nint m_fRadius = 0x8D8; // float32
            public const nint m_nTouchers = 0x8DC; // int32
            public const nint m_NearestEntityDistance = 0x8E0; // CEntityOutputTemplate<float32>
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
            public const nint m_iszMessage = 0x778; // CUtlSymbolLarge
            public const nint m_textParms = 0x780; // hudtextparms_t
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
        // Parent: None
        // Field count: 9
        public static class CCSPlayerModernJump {
            public const nint m_nLastActualJumpPressTick = 0x10; // GameTick_t
            public const nint m_flLastActualJumpPressFrac = 0x14; // float32
            public const nint m_nLastUsableJumpPressTick = 0x18; // GameTick_t
            public const nint m_flLastUsableJumpPressFrac = 0x1C; // float32
            public const nint m_nLastLandedTick = 0x20; // GameTick_t
            public const nint m_flLastLandedFrac = 0x24; // float32
            public const nint m_flLastLandedVelocityX = 0x28; // float32
            public const nint m_flLastLandedVelocityY = 0x2C; // float32
            public const nint m_flLastLandedVelocityZ = 0x30; // float32
        }
        // Parent: None
        // Field count: 0
        public static class CPulse_ResumePoint {
        }
        // Parent: CBaseTrigger
        // Field count: 25
        public static class CTriggerFan {
            public const nint m_vFanOriginOffset = 0x8C8; // Vector
            public const nint m_vDirection = 0x8D4; // Vector
            public const nint m_bPushTowardsInfoTarget = 0x8E0; // bool
            public const nint m_bPushAwayFromInfoTarget = 0x8E1; // bool
            public const nint m_qNoiseDelta = 0x8F0; // Quaternion
            public const nint m_hInfoFan = 0x900; // CHandle<CInfoFan>
            public const nint m_flForce = 0x904; // float32
            public const nint m_bFalloff = 0x908; // bool
            public const nint m_RampTimer = 0x910; // CountdownTimer
            public const nint m_vFanOriginWS = 0x928; // VectorWS
            public const nint m_vFanOriginLS = 0x934; // Vector
            public const nint m_vFanEndLS = 0x940; // Vector
            public const nint m_vNoiseDirectionTarget = 0x94C; // Vector
            public const nint m_iszInfoFan = 0x958; // CUtlSymbolLarge
            public const nint m_flRopeForceScale = 0x960; // float32
            public const nint m_flParticleForceScale = 0x964; // float32
            public const nint m_flPlayerForce = 0x968; // float32
            public const nint m_bPlayerWindblock = 0x96C; // bool
            public const nint m_flNPCForce = 0x970; // float32
            public const nint m_flRampTime = 0x974; // float32
            public const nint m_fNoiseDegrees = 0x978; // float32
            public const nint m_fNoiseSpeed = 0x97C; // float32
            public const nint m_bPushPlayer = 0x980; // bool
            public const nint m_bRampDown = 0x981; // bool
            public const nint m_nManagerFanIdx = 0x984; // int32
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
            public const nint m_OnDefault = 0x8D0; // CEntityOutputTemplate<CUtlString>
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        // MPulseEditorHeaderIcon
        public static class CPulseCell_Outflow_PlayVOLine {
            public const nint m_OnFinished = 0x48; // CPulse_ResumePoint
        }
        // Parent: CPointEntity
        // Field count: 2
        public static class CInfoGameEventProxy {
            public const nint m_iszEventName = 0x4A8; // CUtlSymbolLarge
            public const nint m_flRange = 0x4B0; // float32
        }
        // Parent: None
        // Field count: 0
        public static class CTestPulseIOComponent_DerivedAPI {
        }
        // Parent: CCSWeaponBaseGun
        // Field count: 0
        public static class CWeaponBizon {
        }
        // Parent: CRuleBrushEntity
        // Field count: 4
        public static class CGamePlayerZone {
            public const nint m_OnPlayerInZone = 0x770; // CEntityIOOutput
            public const nint m_OnPlayerOutZone = 0x788; // CEntityIOOutput
            public const nint m_PlayersInCount = 0x7A0; // CEntityOutputTemplate<int32>
            public const nint m_PlayersOutCount = 0x7C0; // CEntityOutputTemplate<int32>
        }
        // Parent: CBaseModelEntity
        // Field count: 16
        public static class CBaseToggle {
            public const nint m_toggle_state = 0x768; // TOGGLE_STATE
            public const nint m_flMoveDistance = 0x76C; // float32
            public const nint m_flWait = 0x770; // float32
            public const nint m_flLip = 0x774; // float32
            public const nint m_bAlwaysFireBlockedOutputs = 0x778; // bool
            public const nint m_vecPosition1 = 0x77C; // Vector
            public const nint m_vecPosition2 = 0x788; // Vector
            public const nint m_vecMoveAng = 0x794; // QAngle
            public const nint m_vecAngle1 = 0x7A0; // QAngle
            public const nint m_vecAngle2 = 0x7AC; // QAngle
            public const nint m_flHeight = 0x7B8; // float32
            public const nint m_hActivator = 0x7BC; // CHandle<CBaseEntity>
            public const nint m_vecFinalDest = 0x7C0; // Vector
            public const nint m_vecFinalAngle = 0x7CC; // QAngle
            public const nint m_movementType = 0x7D8; // int32
            public const nint m_sMaster = 0x7E0; // CUtlSymbolLarge
        }
        // Parent: None
        // Field count: 2
        public static class CPulseServerCursor {
            public const nint m_hActivator = 0xE8; // CHandle<CBaseEntity>
            public const nint m_hCaller = 0xEC; // CHandle<CBaseEntity>
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
        public static class CInferno {
            public const nint m_firePositions = 0x768; // Vector[64]
            public const nint m_fireParentPositions = 0xA68; // Vector[64]
            public const nint m_bFireIsBurning = 0xD68; // bool[64]
            public const nint m_BurnNormal = 0xDA8; // Vector[64]
            public const nint m_fireCount = 0x10A8; // int32
            public const nint m_nInfernoType = 0x10AC; // int32
            public const nint m_nFireEffectTickBegin = 0x10B0; // int32
            public const nint m_nFireLifetime = 0x10B4; // float32
            public const nint m_bInPostEffectTime = 0x10B8; // bool
            public const nint m_bWasCreatedInSmoke = 0x10B9; // bool
            public const nint m_extent = 0x12C0; // Extent
            public const nint m_damageTimer = 0x12D8; // CountdownTimer
            public const nint m_damageRampTimer = 0x12F0; // CountdownTimer
            public const nint m_splashVelocity = 0x1308; // Vector
            public const nint m_InitialSplashVelocity = 0x1314; // Vector
            public const nint m_startPos = 0x1320; // Vector
            public const nint m_vecOriginalSpawnLocation = 0x132C; // Vector
            public const nint m_activeTimer = 0x1338; // IntervalTimer
            public const nint m_fireSpawnOffset = 0x1348; // int32
            public const nint m_nMaxFlames = 0x134C; // int32
            public const nint m_nSpreadCount = 0x1350; // int32
            public const nint m_BookkeepingTimer = 0x1358; // CountdownTimer
            public const nint m_NextSpreadTimer = 0x1370; // CountdownTimer
            public const nint m_nSourceItemDefIndex = 0x1388; // uint16
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
            public const nint m_bDisabled = 0x768; // bool
            public const nint m_iszInteractsAs = 0x770; // CUtlSymbolLarge
            public const nint m_iszInteractsWith = 0x778; // CUtlSymbolLarge
        }
        // Parent: CPlayer_UseServices
        // Field count: 0
        public static class CCSObserver_UseServices {
        }
        // Parent: CBaseTrigger
        // Field count: 2
        public static class CTriggerDetectBulletFire {
            public const nint m_bPlayerFireOnly = 0x8C8; // bool
            public const nint m_OnDetectedBulletFire = 0x8D0; // CEntityIOOutput
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
        public static class CInfoFan {
            public const nint m_fFanForceMaxRadius = 0x4E8; // float32
            public const nint m_fFanForceMinRadius = 0x4EC; // float32
            public const nint m_flCurveDistRange = 0x4F0; // float32
            public const nint m_FanForceCurveString = 0x4F8; // CUtlSymbolLarge
        }
        // Parent: None
        // Field count: 8
        public static class CGameRules {
            public const nint __m_pChainEntity = 0x8; // CNetworkVarChainer
            public const nint m_szQuestName = 0x30; // char[128]
            public const nint m_nQuestPhase = 0xB0; // int32
            public const nint m_nLastMatchTime = 0xB4; // uint32
            public const nint m_nLastMatchTime_MatchID64 = 0xB8; // uint64
            public const nint m_nTotalPausedTicks = 0xC0; // int32
            public const nint m_nPauseStartTick = 0xC4; // int32
            public const nint m_bGamePaused = 0xC8; // bool
        }
        // Parent: CBaseAnimGraph
        // Field count: 24
        public static class CFish {
            public const nint m_pool = 0x940; // CHandle<CFishPool>
            public const nint m_id = 0x944; // uint32
            public const nint m_x = 0x948; // float32
            public const nint m_y = 0x94C; // float32
            public const nint m_z = 0x950; // float32
            public const nint m_angle = 0x954; // float32
            public const nint m_angleChange = 0x958; // float32
            public const nint m_forward = 0x95C; // Vector
            public const nint m_perp = 0x968; // Vector
            public const nint m_poolOrigin = 0x974; // Vector
            public const nint m_waterLevel = 0x980; // float32
            public const nint m_speed = 0x984; // float32
            public const nint m_desiredSpeed = 0x988; // float32
            public const nint m_calmSpeed = 0x98C; // float32
            public const nint m_panicSpeed = 0x990; // float32
            public const nint m_avoidRange = 0x994; // float32
            public const nint m_turnTimer = 0x998; // CountdownTimer
            public const nint m_turnClockwise = 0x9B0; // bool
            public const nint m_goTimer = 0x9B8; // CountdownTimer
            public const nint m_moveTimer = 0x9D0; // CountdownTimer
            public const nint m_panicTimer = 0x9E8; // CountdownTimer
            public const nint m_disperseTimer = 0xA00; // CountdownTimer
            public const nint m_proximityTimer = 0xA18; // CountdownTimer
            public const nint m_visible = 0xA30; // CUtlVector<CFish*>
        }
        // Parent: CBot
        // Field count: 140
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
            public const nint m_stateTimestamp = 0x5A8; // float32
            public const nint m_isAttacking = 0x5AC; // bool
            public const nint m_isOpeningDoor = 0x5AD; // bool
            public const nint m_taskEntity = 0x5B4; // CHandle<CBaseEntity>
            public const nint m_goalPosition = 0x5C4; // VectorWS
            public const nint m_goalEntity = 0x5D0; // CHandle<CBaseEntity>
            public const nint m_avoid = 0x5D4; // CHandle<CBaseEntity>
            public const nint m_avoidTimestamp = 0x5D8; // float32
            public const nint m_isStopping = 0x5DC; // bool
            public const nint m_hasVisitedEnemySpawn = 0x5DD; // bool
            public const nint m_stillTimer = 0x5E0; // IntervalTimer
            public const nint m_bEyeAnglesUnderPathFinderControl = 0x5F0; // bool
            public const nint m_pathIndex = 0x4EF0; // int32
            public const nint m_areaEnteredTimestamp = 0x4EF4; // GameTime_t
            public const nint m_repathTimer = 0x4EF8; // CountdownTimer
            public const nint m_avoidFriendTimer = 0x4F10; // CountdownTimer
            public const nint m_isFriendInTheWay = 0x4F28; // bool
            public const nint m_politeTimer = 0x4F30; // CountdownTimer
            public const nint m_isWaitingBehindFriend = 0x4F48; // bool
            public const nint m_pathLadderEnd = 0x4F74; // float32
            public const nint m_mustRunTimer = 0x4FC0; // CountdownTimer
            public const nint m_waitTimer = 0x4FD8; // CountdownTimer
            public const nint m_updateTravelDistanceTimer = 0x4FF0; // CountdownTimer
            public const nint m_playerTravelDistance = 0x5008; // float32[64]
            public const nint m_travelDistancePhase = 0x5108; // uint8
            public const nint m_hostageEscortCount = 0x52A0; // uint8
            public const nint m_hostageEscortCountTimestamp = 0x52A4; // float32
            public const nint m_desiredTeam = 0x52A8; // int32
            public const nint m_hasJoined = 0x52AC; // bool
            public const nint m_isWaitingForHostage = 0x52AD; // bool
            public const nint m_inhibitWaitingForHostageTimer = 0x52B0; // CountdownTimer
            public const nint m_waitForHostageTimer = 0x52C8; // CountdownTimer
            public const nint m_noisePosition = 0x52E0; // Vector
            public const nint m_noiseTravelDistance = 0x52EC; // float32
            public const nint m_noiseTimestamp = 0x52F0; // float32
            public const nint m_noiseSource = 0x52F8; // CCSPlayerPawn*
            public const nint m_noiseBendTimer = 0x5310; // CountdownTimer
            public const nint m_bentNoisePosition = 0x5328; // Vector
            public const nint m_bendNoisePositionValid = 0x5334; // bool
            public const nint m_lookAroundStateTimestamp = 0x5338; // float32
            public const nint m_lookAheadAngle = 0x533C; // float32
            public const nint m_lookUpAngle = 0x5340; // float32
            public const nint m_forwardAngle = 0x5344; // float32
            public const nint m_inhibitLookAroundTimestamp = 0x5348; // float32
            public const nint m_lookAtSpot = 0x5350; // Vector
            public const nint m_lookAtSpotDuration = 0x5360; // float32
            public const nint m_lookAtSpotTimestamp = 0x5364; // float32
            public const nint m_lookAtSpotAngleTolerance = 0x5368; // float32
            public const nint m_lookAtSpotClearIfClose = 0x536C; // bool
            public const nint m_lookAtSpotAttack = 0x536D; // bool
            public const nint m_lookAtDesc = 0x5370; // char*
            public const nint m_peripheralTimestamp = 0x5378; // float32
            public const nint m_approachPointCount = 0x5500; // uint8
            public const nint m_approachPointViewPosition = 0x5504; // Vector
            public const nint m_viewSteadyTimer = 0x5510; // IntervalTimer
            public const nint m_tossGrenadeTimer = 0x5528; // CountdownTimer
            public const nint m_isAvoidingGrenade = 0x5548; // CountdownTimer
            public const nint m_spotCheckTimestamp = 0x5568; // float32
            public const nint m_checkedHidingSpotCount = 0x5970; // int32
            public const nint m_lookPitch = 0x5974; // float32
            public const nint m_lookPitchVel = 0x5978; // float32
            public const nint m_lookYaw = 0x597C; // float32
            public const nint m_lookYawVel = 0x5980; // float32
            public const nint m_targetSpot = 0x5984; // Vector
            public const nint m_targetSpotVelocity = 0x5990; // Vector
            public const nint m_targetSpotPredicted = 0x599C; // Vector
            public const nint m_aimError = 0x59A8; // QAngle
            public const nint m_aimGoal = 0x59B4; // QAngle
            public const nint m_targetSpotTime = 0x59C0; // GameTime_t
            public const nint m_aimFocus = 0x59C4; // float32
            public const nint m_aimFocusInterval = 0x59C8; // float32
            public const nint m_aimFocusNextUpdate = 0x59CC; // GameTime_t
            public const nint m_ignoreEnemiesTimer = 0x59D8; // CountdownTimer
            public const nint m_enemy = 0x59F0; // CHandle<CCSPlayerPawn>
            public const nint m_isEnemyVisible = 0x59F4; // bool
            public const nint m_visibleEnemyParts = 0x59F5; // uint8
            public const nint m_lastEnemyPosition = 0x59F8; // Vector
            public const nint m_lastSawEnemyTimestamp = 0x5A04; // float32
            public const nint m_firstSawEnemyTimestamp = 0x5A08; // float32
            public const nint m_currentEnemyAcquireTimestamp = 0x5A0C; // float32
            public const nint m_enemyDeathTimestamp = 0x5A10; // float32
            public const nint m_friendDeathTimestamp = 0x5A14; // float32
            public const nint m_isLastEnemyDead = 0x5A18; // bool
            public const nint m_nearbyEnemyCount = 0x5A1C; // int32
            public const nint m_bomber = 0x5C28; // CHandle<CCSPlayerPawn>
            public const nint m_nearbyFriendCount = 0x5C2C; // int32
            public const nint m_closestVisibleFriend = 0x5C30; // CHandle<CCSPlayerPawn>
            public const nint m_closestVisibleHumanFriend = 0x5C34; // CHandle<CCSPlayerPawn>
            public const nint m_attentionInterval = 0x5C38; // IntervalTimer
            public const nint m_attacker = 0x5C48; // CHandle<CCSPlayerPawn>
            public const nint m_attackedTimestamp = 0x5C4C; // float32
            public const nint m_burnedByFlamesTimer = 0x5C50; // IntervalTimer
            public const nint m_lastVictimID = 0x5C60; // int32
            public const nint m_isAimingAtEnemy = 0x5C64; // bool
            public const nint m_isRapidFiring = 0x5C65; // bool
            public const nint m_equipTimer = 0x5C68; // IntervalTimer
            public const nint m_zoomTimer = 0x5C78; // CountdownTimer
            public const nint m_fireWeaponTimestamp = 0x5C90; // GameTime_t
            public const nint m_lookForWeaponsOnGroundTimer = 0x5C98; // CountdownTimer
            public const nint m_bIsSleeping = 0x5CB0; // bool
            public const nint m_isEnemySniperVisible = 0x5CB1; // bool
            public const nint m_sawEnemySniperTimer = 0x5CB8; // CountdownTimer
            public const nint m_enemyQueueIndex = 0x5D70; // uint8
            public const nint m_enemyQueueCount = 0x5D71; // uint8
            public const nint m_enemyQueueAttendIndex = 0x5D72; // uint8
            public const nint m_isStuck = 0x5D73; // bool
            public const nint m_stuckTimestamp = 0x5D74; // GameTime_t
            public const nint m_stuckSpot = 0x5D78; // Vector
            public const nint m_wiggleTimer = 0x5D88; // CountdownTimer
            public const nint m_stuckJumpTimer = 0x5DA0; // CountdownTimer
            public const nint m_nextCleanupCheckTimestamp = 0x5DB8; // GameTime_t
            public const nint m_avgVel = 0x5DBC; // float32[10]
            public const nint m_avgVelIndex = 0x5DE4; // int32
            public const nint m_avgVelCount = 0x5DE8; // int32
            public const nint m_lastOrigin = 0x5DEC; // Vector
            public const nint m_lastRadioRecievedTimestamp = 0x5DFC; // float32
            public const nint m_lastRadioSentTimestamp = 0x5E00; // float32
            public const nint m_radioSubject = 0x5E04; // CHandle<CCSPlayerPawn>
            public const nint m_radioPosition = 0x5E08; // Vector
            public const nint m_voiceEndTimestamp = 0x5E14; // float32
            public const nint m_lastValidReactionQueueFrame = 0x5E20; // int32
        }
        // Parent: CBaseEntity
        // Field count: 2
        public static class CHandleTest {
            public const nint m_Handle = 0x4A8; // CHandle<CBaseEntity>
            public const nint m_bSendHandle = 0x4AC; // bool
        }
        // Parent: CBaseEntity
        // Field count: 48
        public static class CLogicNPCCounter {
            public const nint m_OnMinCountAll = 0x4A8; // CEntityIOOutput
            public const nint m_OnMaxCountAll = 0x4C0; // CEntityIOOutput
            public const nint m_OnFactorAll = 0x4D8; // CEntityOutputTemplate<float32>
            public const nint m_OnMinPlayerDistAll = 0x4F8; // CEntityOutputTemplate<float32>
            public const nint m_OnMinCount_1 = 0x518; // CEntityIOOutput
            public const nint m_OnMaxCount_1 = 0x530; // CEntityIOOutput
            public const nint m_OnFactor_1 = 0x548; // CEntityOutputTemplate<float32>
            public const nint m_OnMinPlayerDist_1 = 0x568; // CEntityOutputTemplate<float32>
            public const nint m_OnMinCount_2 = 0x588; // CEntityIOOutput
            public const nint m_OnMaxCount_2 = 0x5A0; // CEntityIOOutput
            public const nint m_OnFactor_2 = 0x5B8; // CEntityOutputTemplate<float32>
            public const nint m_OnMinPlayerDist_2 = 0x5D8; // CEntityOutputTemplate<float32>
            public const nint m_OnMinCount_3 = 0x5F8; // CEntityIOOutput
            public const nint m_OnMaxCount_3 = 0x610; // CEntityIOOutput
            public const nint m_OnFactor_3 = 0x628; // CEntityOutputTemplate<float32>
            public const nint m_OnMinPlayerDist_3 = 0x648; // CEntityOutputTemplate<float32>
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
        // Field count: 9
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
            public const nint m_nUseSnapshotFromSurfaceGraph = 0x128; // int32
            public const nint m_snapshotFilter = 0x12C; // PrecipitationFilter_t
        }
        // Parent: CBaseToggle
        // Field count: 13
        public static class CFuncMoveLinear {
            public const nint m_authoredPosition = 0x7E8; // MoveLinearAuthoredPos_t
            public const nint m_angMoveEntitySpace = 0x7EC; // QAngle
            public const nint m_vecMoveDirParentSpace = 0x7F8; // Vector
            public const nint m_soundStart = 0x808; // CUtlSymbolLarge
            public const nint m_soundStop = 0x810; // CUtlSymbolLarge
            public const nint m_currentSound = 0x818; // CUtlSymbolLarge
            public const nint m_flBlockDamage = 0x820; // float32
            public const nint m_flStartPosition = 0x824; // float32
            public const nint m_OnFullyOpen = 0x830; // CEntityIOOutput
            public const nint m_OnFullyClosed = 0x848; // CEntityIOOutput
            public const nint m_bCreateMovableNavMesh = 0x860; // bool
            public const nint m_bAllowMovableNavMeshDockingOnEntireEntity = 0x861; // bool
            public const nint m_bCreateNavObstacle = 0x862; // bool
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
        // MPropertyDescription
        public static class CPulseCell_WaitForObservable {
            public const nint m_Condition = 0x48; // PulseObservableBoolExpression_t
            public const nint m_OnTrue = 0xC0; // CPulse_ResumePoint
        }
        // Parent: CItem
        // Field count: 1
        public static class CScriptItem {
            public const nint m_MoveTypeOverride = 0x9E0; // MoveType_t
        }
        // Parent: CDynamicProp
        // Field count: 0
        public static class CDynamicPropAlias_prop_dynamic_override {
        }
        // Parent: CBaseToggle
        // Field count: 12
        public static class CBaseTrigger {
            public const nint m_OnStartTouch = 0x7E8; // CEntityIOOutput
            public const nint m_OnStartTouchAll = 0x800; // CEntityIOOutput
            public const nint m_OnEndTouch = 0x818; // CEntityIOOutput
            public const nint m_OnEndTouchAll = 0x830; // CEntityIOOutput
            public const nint m_OnTouching = 0x848; // CEntityIOOutput
            public const nint m_OnTouchingEachEntity = 0x860; // CEntityIOOutput
            public const nint m_OnNotTouching = 0x878; // CEntityIOOutput
            public const nint m_hTouchingEntities = 0x890; // CUtlVector<CHandle<CBaseEntity>>
            public const nint m_iFilterName = 0x8A8; // CUtlSymbolLarge
            public const nint m_hFilter = 0x8B0; // CHandle<CBaseFilter>
            public const nint m_bDisabled = 0x8B4; // bool
            public const nint m_bUseAsyncQueries = 0x8C0; // bool
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
        public static class CRopeKeyframe {
            public const nint m_RopeFlags = 0x770; // uint16
            public const nint m_iNextLinkName = 0x778; // CUtlSymbolLarge
            public const nint m_Slack = 0x780; // int16
            public const nint m_Width = 0x784; // float32
            public const nint m_TextureScale = 0x788; // float32
            public const nint m_nSegments = 0x78C; // uint8
            public const nint m_bConstrainBetweenEndpoints = 0x78D; // bool
            public const nint m_strRopeMaterialModel = 0x790; // CUtlSymbolLarge
            public const nint m_iRopeMaterialModelIndex = 0x798; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_Subdiv = 0x7A0; // uint8
            public const nint m_nChangeCount = 0x7A1; // uint8
            public const nint m_RopeLength = 0x7A2; // int16
            public const nint m_fLockedPoints = 0x7A4; // uint8
            public const nint m_bCreatedFromMapFile = 0x7A5; // bool
            public const nint m_flScrollSpeed = 0x7A8; // float32
            public const nint m_bStartPointValid = 0x7AC; // bool
            public const nint m_bEndPointValid = 0x7AD; // bool
            public const nint m_hStartPoint = 0x7B0; // CHandle<CBaseEntity>
            public const nint m_hEndPoint = 0x7B4; // CHandle<CBaseEntity>
            public const nint m_iStartAttachment = 0x7B8; // AttachmentHandle_t
            public const nint m_iEndAttachment = 0x7B9; // AttachmentHandle_t
        }
        // Parent: CBaseCSGrenade
        // Field count: 0
        public static class CSmokeGrenade {
        }
        // Parent: CBaseAnimGraph
        // Field count: 10
        public static class CBaseCombatCharacter {
            public const nint m_bForceServerRagdoll = 0x940; // bool
            public const nint m_hMyWearables = 0x948; // CNetworkUtlVectorBase<CHandle<CEconWearable>>
            public const nint m_impactEnergyScale = 0x960; // float32
            public const nint m_bApplyStressDamage = 0x964; // bool
            public const nint m_bDeathEventsDispatched = 0x965; // bool
            public const nint m_pVecRelationships = 0x9A8; // CUtlVector<RelationshipOverride_t>*
            public const nint m_strRelationships = 0x9B0; // CUtlSymbolLarge
            public const nint m_eHull = 0x9B8; // Hull_t
            public const nint m_nNavHullIdx = 0x9BC; // uint32
            public const nint m_movementStats = 0x9C0; // CMovementStatsProperty
        }
        // Parent: None
        // Field count: 3
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
        // Field count: 7
        public static class CLogicRelay {
            public const nint m_OnSpawn = 0x4A8; // CEntityIOOutput
            public const nint m_OnTrigger = 0x4C0; // CEntityIOOutput
            public const nint m_bDisabled = 0x4D8; // bool
            public const nint m_bWaitForRefire = 0x4D9; // bool
            public const nint m_bTriggerOnce = 0x4DA; // bool
            public const nint m_bFastRetrigger = 0x4DB; // bool
            public const nint m_bPassthoughCaller = 0x4DC; // bool
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
        // Field count: 23
        public static class CTestPulseIO {
            public const nint m_OnVariantVoid = 0x4A8; // CEntityIOOutput
            public const nint m_OnVariantBool = 0x4C0; // CEntityOutputTemplate<bool>
            public const nint m_OnVariantInt = 0x4E0; // CEntityOutputTemplate<int32>
            public const nint m_OnVariantFloat = 0x500; // CEntityOutputTemplate<float32>
            public const nint m_OnVariantString = 0x520; // CEntityOutputTemplate<CUtlSymbolLarge>
            public const nint m_OnVariantColor = 0x540; // CEntityOutputTemplate<Color>
            public const nint m_OnVariantVector = 0x560; // CEntityOutputTemplate<Vector>
            public const nint m_bAllowEmptyInputs = 0x588; // bool
            public const nint m_TestComponent = 0x590; // CTestPulseIOComponent_Derived
            public const nint m_OnInternalTestVoid = 0x5C0; // CEntityIOOutput
            public const nint m_OnInternalTestBool = 0x5D8; // CEntityOutputTemplate<bool>
            public const nint m_OnInternalTestInt = 0x5F8; // CEntityOutputTemplate<int32>
            public const nint m_OnInternalTestFloat = 0x618; // CEntityOutputTemplate<float32>
            public const nint m_OnInternalTestString = 0x638; // CEntityOutputTemplate<CUtlSymbolLarge>
            public const nint m_OnInternalTestColor = 0x658; // CEntityOutputTemplate<Color>
            public const nint m_OnInternalTestVector = 0x678; // CEntityOutputTemplate<Vector>
            public const nint m_OnInternalTestEntityName = 0x6A0; // CEntityOutputTemplate<CEntityNameString>
            public const nint m_OnInternalTestEntityHandle = 0x6C0; // CEntityOutputTemplate<CHandle<CBaseEntity>>
            public const nint m_OnInternalTestSchemaEnum = 0x6E0; // CEntityOutputTemplate<TestInputOutputCombinationsEnum_t>
            public const nint m_OnInternalTestFloatString = 0x700; // CEntityOutputTemplate<CTestPulseIO::FloatStringArgs_t>
            public const nint m_OnInternalTestEntityNameString = 0x728; // CEntityOutputTemplate<CTestPulseIO::EntityNameStringArgs_t>
            public const nint m_OnInternalTestEntityHandleInt = 0x750; // CEntityOutputTemplate<CTestPulseIO::EntityHandleIntArgs_t>
            public const nint m_OnInternalTestStringStringString = 0x770; // CEntityOutputTemplate<CTestPulseIO::ThreeStringArgs_t>
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
        public static class CKnife {
            public const nint m_bFirstAttack = 0x1030; // bool
        }
        // Parent: CLogicalEntity
        // Field count: 5
        public static class CLogicPlayerProxy {
            public const nint m_PlayerHasAmmo = 0x4A8; // CEntityIOOutput
            public const nint m_PlayerHasNoAmmo = 0x4C0; // CEntityIOOutput
            public const nint m_PlayerDied = 0x4D8; // CEntityIOOutput
            public const nint m_RequestedPlayerHealth = 0x4F0; // CEntityOutputTemplate<int32>
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
            public const nint m_hSoundscape = 0x8C8; // CHandle<CEnvSoundscapeTriggerable>
            public const nint m_SoundscapeName = 0x8D0; // CUtlSymbolLarge
            public const nint m_spectators = 0x8D8; // CUtlVector<CHandle<CBasePlayerPawn>>
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Outflow_PlayVOLine__CursorState_t {
            public const nint m_sceneInstance = 0x0; // CHandle<CBaseEntity>
        }
        // Parent: None
        // Field count: 0
        public static class CPointTeleportAPI {
        }
        // Parent: CBaseCombatCharacter
        // Field count: 1
        public static class CHostageExpresserShim {
            public const nint m_pExpresser = 0xA00; // CAI_Expresser*
        }
        // Parent: CPointEntity
        // Field count: 1
        public static class CPointChildModifier {
            public const nint m_bOrphanInsteadOfDeletingChildrenOnRemove = 0x4A8; // bool
        }
        // Parent: None
        // Field count: 2
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
        public static class CShatterGlassShardPhysics {
            public const nint m_bDebris = 0xC10; // bool
            public const nint m_hParentShard = 0xC14; // uint32
            public const nint m_ShardDesc = 0xC18; // shard_model_desc_t
        }
        // Parent: CBaseEntity
        // Field count: 16
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
        // Field count: 18
        public static class CPlayer_MovementServices {
            public const nint m_nImpulse = 0x48; // int32
            public const nint m_nButtons = 0x50; // CInButtonState
            public const nint m_nQueuedButtonDownMask = 0x70; // uint64
            public const nint m_nQueuedButtonChangeMask = 0x78; // uint64
            public const nint m_nButtonDoublePressed = 0x80; // uint64
            public const nint m_pButtonPressedCmdNumber = 0x88; // uint32[64]
            public const nint m_nLastCommandNumberProcessed = 0x188; // uint32
            public const nint m_nToggleButtonDownMask = 0x190; // uint64
            public const nint m_flCmdForwardMove = 0x1A0; // float32
            public const nint m_flCmdLeftMove = 0x1A4; // float32
            public const nint m_flCmdUpMove = 0x1A8; // float32
            public const nint m_flMaxspeed = 0x1AC; // float32
            public const nint m_arrForceSubtickMoveWhen = 0x1B0; // float32[4]
            public const nint m_flForwardMove = 0x1C0; // float32
            public const nint m_flLeftMove = 0x1C4; // float32
            public const nint m_flUpMove = 0x1C8; // float32
            public const nint m_vecLastMovementImpulses = 0x1CC; // Vector
            public const nint m_vecOldViewAngles = 0x240; // QAngle
        }
        // Parent: CRagdollProp
        // Field count: 0
        public static class CRagdollPropAlias_physics_prop_ragdoll {
        }
        // Parent: CBaseProp
        // Field count: 33
        public static class CBreakableProp {
            public const nint m_CPropDataComponent = 0x978; // CPropDataComponent
            public const nint m_OnStartDeath = 0x9B8; // CEntityIOOutput
            public const nint m_OnBreak = 0x9D0; // CEntityIOOutput
            public const nint m_OnHealthChanged = 0x9E8; // CEntityOutputTemplate<float32>
            public const nint m_OnTakeDamage = 0xA08; // CEntityIOOutput
            public const nint m_impactEnergyScale = 0xA20; // float32
            public const nint m_iMinHealthDmg = 0xA24; // int32
            public const nint m_preferredCarryAngles = 0xA28; // QAngle
            public const nint m_flPressureDelay = 0xA34; // float32
            public const nint m_flDefBurstScale = 0xA38; // float32
            public const nint m_vDefBurstOffset = 0xA3C; // Vector
            public const nint m_hBreaker = 0xA48; // CHandle<CBaseEntity>
            public const nint m_PerformanceMode = 0xA4C; // PerformanceMode_t
            public const nint m_flPreventDamageBeforeTime = 0xA50; // GameTime_t
            public const nint m_BreakableContentsType = 0xA54; // BreakableContentsType_t
            public const nint m_strBreakableContentsPropGroupOverride = 0xA58; // CUtlString
            public const nint m_strBreakableContentsParticleOverride = 0xA60; // CUtlString
            public const nint m_bHasBreakPiecesOrCommands = 0xA68; // bool
            public const nint m_explodeDamage = 0xA6C; // float32
            public const nint m_explodeRadius = 0xA70; // float32
            public const nint m_sExplosionType = 0xA78; // CGlobalSymbol
            public const nint m_explosionDelay = 0xA80; // float32
            public const nint m_explosionBuildupSound = 0xA88; // CUtlSymbolLarge
            public const nint m_explosionCustomEffect = 0xA90; // CUtlSymbolLarge
            public const nint m_explosionCustomSound = 0xA98; // CUtlSymbolLarge
            public const nint m_explosionModifier = 0xAA0; // CUtlSymbolLarge
            public const nint m_hPhysicsAttacker = 0xAA8; // CHandle<CBasePlayerPawn>
            public const nint m_flLastPhysicsInfluenceTime = 0xAAC; // GameTime_t
            public const nint m_flDefaultFadeScale = 0xAB0; // float32
            public const nint m_hLastAttacker = 0xAB4; // CHandle<CBaseEntity>
            public const nint m_iszPuntSound = 0xAB8; // CUtlSymbolLarge
            public const nint m_bUsePuntSound = 0xAC0; // bool
            public const nint m_bOriginalBlockLOS = 0xAC1; // bool
        }
        // Parent: CBaseModelEntity
        // Field count: 1
        public static class CLightEntity {
            public const nint m_CLightComponent = 0x768; // CLightComponent*
        }
        // Parent: CInfoDynamicShadowHint
        // Field count: 2
        public static class CInfoDynamicShadowHintBox {
            public const nint m_vBoxMins = 0x4C0; // Vector
            public const nint m_vBoxMaxs = 0x4CC; // Vector
        }
        // Parent: CSkeletonAnimationController
        // Field count: 31
        public static class CBaseAnimGraphController {
            public const nint m_nAnimationAlgorithm = 0x18; // AnimationAlgorithm_t
            public const nint m_nNextExternalGraphHandle = 0x1C; // ExternalAnimGraphHandle_t
            public const nint m_vecSecondarySkeletonSlotIDs = 0x20; // CNetworkUtlVectorBase<CGlobalSymbol>
            public const nint m_vecSecondarySkeletons = 0x38; // CNetworkUtlVectorBase<CHandle<CBaseAnimGraph>>
            public const nint m_nSecondarySkeletonMasterCount = 0x50; // int32
            public const nint m_flSoundSyncTime = 0x54; // float32
            public const nint m_nActiveIKChainMask = 0x58; // uint32
            public const nint m_hSequence = 0x5C; // HSequence
            public const nint m_flSeqStartTime = 0x60; // GameTime_t
            public const nint m_flSeqFixedCycle = 0x64; // float32
            public const nint m_nAnimLoopMode = 0x68; // AnimLoopMode_t
            public const nint m_flPlaybackRate = 0x6C; // CNetworkedQuantizedFloat
            public const nint m_nNotifyState = 0x78; // SequenceFinishNotifyState_t
            public const nint m_bNetworkedAnimationInputsChanged = 0x79; // bool
            public const nint m_bNetworkedSequenceChanged = 0x7A; // bool
            public const nint m_bLastUpdateSkipped = 0x7B; // bool
            public const nint m_bSequenceFinished = 0x7C; // bool
            public const nint m_nPrevAnimUpdateTick = 0x80; // GameTick_t
            public const nint m_hGraphDefinitionAG2 = 0x320; // CStrongHandle<InfoForResourceTypeCNmGraphDefinition>
            public const nint m_SerializePoseRecipeAG2Slots = 0x328; // CUtlVectorEmbeddedNetworkVar<AnimGraph2SerializedPoseRecipeSlot_t>
            public const nint m_SerializePoseRecipeAG2Dynamic = 0x390; // CNetworkUtlVectorBase<uint8>
            public const nint m_nSerializePoseRecipeAG2ActiveSlot = 0x3A8; // uint32
            public const nint m_nSerializePoseRecipeVersionAG2 = 0x3AC; // int32
            public const nint m_nServerGraphInstanceIteration = 0x3C0; // int32
            public const nint m_nServerSerializationContextIteration = 0x3C4; // int32
            public const nint m_primaryGraphId = 0x3C8; // ResourceId_t
            public const nint m_vecExternalGraphIds = 0x3D0; // CNetworkUtlVectorBase<ResourceId_t>
            public const nint m_vecExternalClipIds = 0x3E8; // CNetworkUtlVectorBase<ResourceId_t>
            public const nint m_sAnimGraph2Identifier = 0x400; // CGlobalSymbol
            public const nint m_pGraphInstanceAG2 = 0x408; // CNmGraphInstance*
            public const nint m_vecExternalGraphs = 0x620; // CUtlVector<ExternalAnimGraph_t>
        }
        // Parent: None
        // Field count: 1
        public static class AnimGraph2SerializedPoseRecipeSlot_t {
            public const nint m_topology = 0x30; // CUtlBinaryBlock
        }
        // Parent: None
        // Field count: 11
        public static class CBuoyancyHelper {
            public const nint m_pController = 0x8; // IPhysicsMotionController*
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
            public const nint m_initialOwner = 0xB80; // CUtlSymbolLarge
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
        public static class CRectLight {
            public const nint m_bShowLight = 0xA50; // bool
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
            public const nint m_bDisabled = 0x770; // bool
            public const nint m_nBlockedTeamNumber = 0x774; // int32
        }
        // Parent: CPathNode
        // Field count: 5
        public static class CMoverPathNode {
            public const nint m_OnStartFromOrInSegment = 0x500; // CEntityOutputTemplate<CUtlString>
            public const nint m_OnStoppedAtOrInSegment = 0x520; // CEntityOutputTemplate<CUtlString>
            public const nint m_OnPassThrough = 0x540; // CEntityOutputTemplate<CUtlString>
            public const nint m_OnPassThroughForward = 0x560; // CEntityOutputTemplate<CUtlString>
            public const nint m_OnPassThroughReverse = 0x580; // CEntityOutputTemplate<CUtlString>
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
            public const nint m_iSolidity = 0x768; // BrushSolidities_e
            public const nint m_iDisabled = 0x76C; // int32
            public const nint m_bSolidBsp = 0x770; // bool
            public const nint m_iszExcludedClass = 0x778; // CUtlSymbolLarge
            public const nint m_bInvertExclusion = 0x780; // bool
            public const nint m_bScriptedMovement = 0x781; // bool
        }
        // Parent: CBodyComponent
        // Field count: 1
        public static class CBodyComponentPoint {
            public const nint m_sceneNode = 0x80; // CGameSceneNode
        }
        // Parent: CBreakable
        // Field count: 15
        public static class CPhysBox {
            public const nint m_damageType = 0x840; // int32
            public const nint m_damageToEnableMotion = 0x844; // int32
            public const nint m_flForceToEnableMotion = 0x848; // float32
            public const nint m_vHoverPosePosition = 0x84C; // Vector
            public const nint m_angHoverPoseAngles = 0x858; // QAngle
            public const nint m_bNotSolidToWorld = 0x864; // bool
            public const nint m_bEnableUseOutput = 0x865; // bool
            public const nint m_nHoverPoseFlags = 0x866; // HoverPoseFlags_t
            public const nint m_flTouchOutputPerEntityDelay = 0x868; // float32
            public const nint m_OnDamaged = 0x870; // CEntityIOOutput
            public const nint m_OnAwakened = 0x888; // CEntityIOOutput
            public const nint m_OnMotionEnabled = 0x8A0; // CEntityIOOutput
            public const nint m_OnPlayerUse = 0x8B8; // CEntityIOOutput
            public const nint m_OnStartTouch = 0x8D0; // CEntityIOOutput
            public const nint m_hCarryingPlayer = 0x8E8; // CHandle<CBasePlayerPawn>
        }
        // Parent: CSoundEventEntity
        // Field count: 2
        public static class CSoundEventAABBEntity {
            public const nint m_vMins = 0x568; // Vector
            public const nint m_vMaxs = 0x574; // Vector
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
        public static class COmniLight {
            public const nint m_flInnerAngle = 0xA50; // float32
            public const nint m_flOuterAngle = 0xA54; // float32
            public const nint m_bShowLight = 0xA58; // bool
        }
        // Parent: CBaseModelEntity
        // Field count: 2
        public static class CTriggerVolume {
            public const nint m_iFilterName = 0x768; // CUtlSymbolLarge
            public const nint m_hFilter = 0x770; // CHandle<CBaseFilter>
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
            public const nint m_iMagnitude = 0x768; // int32
            public const nint m_flPlayerDamage = 0x76C; // float32
            public const nint m_iRadiusOverride = 0x770; // int32
            public const nint m_flInnerRadius = 0x774; // float32
            public const nint m_flDamageForce = 0x778; // float32
            public const nint m_hInflictor = 0x77C; // CHandle<CBaseEntity>
            public const nint m_iCustomDamageType = 0x780; // DamageTypes_t
            public const nint m_bCreateDebris = 0x784; // bool
            public const nint m_iszCustomEffectName = 0x790; // CUtlSymbolLarge
            public const nint m_iszCustomSoundName = 0x798; // CUtlSymbolLarge
            public const nint m_bSuppressParticleImpulse = 0x7A0; // bool
            public const nint m_iClassIgnore = 0x7A4; // Class_T
            public const nint m_iClassIgnore2 = 0x7A8; // Class_T
            public const nint m_iszEntityIgnoreName = 0x7B0; // CUtlSymbolLarge
            public const nint m_hEntityIgnore = 0x7B8; // CHandle<CBaseEntity>
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
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CTestPulseIO__ThreeStringArgs_t {
            public const nint strArg1 = 0x0; // CUtlString
            public const nint strArg2 = 0x8; // CUtlString
            public const nint strArg3 = 0x10; // CUtlString
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
        public static class CFootstepControl {
            public const nint m_source = 0x8C8; // CUtlSymbolLarge
            public const nint m_destination = 0x8D0; // CUtlSymbolLarge
        }
        // Parent: CPlayer_ItemServices
        // Field count: 2
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
        public static class CParticleSystem {
            public const nint m_szSnapshotFileName = 0x768; // char[512]
            public const nint m_bActive = 0x968; // bool
            public const nint m_bFrozen = 0x969; // bool
            public const nint m_flFreezeTransitionDuration = 0x96C; // float32
            public const nint m_nStopType = 0x970; // int32
            public const nint m_bAnimateDuringGameplayPause = 0x974; // bool
            public const nint m_iEffectIndex = 0x978; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
            public const nint m_flStartTime = 0x980; // GameTime_t
            public const nint m_flPreSimTime = 0x984; // float32
            public const nint m_vServerControlPoints = 0x988; // Vector[4]
            public const nint m_iServerControlPointAssignments = 0x9B8; // uint8[4]
            public const nint m_hControlPointEnts = 0x9BC; // CHandle<CBaseEntity>[64]
            public const nint m_bNoSave = 0xABC; // bool
            public const nint m_bNoFreeze = 0xABD; // bool
            public const nint m_bNoRamp = 0xABE; // bool
            public const nint m_bStartActive = 0xABF; // bool
            public const nint m_iszEffectName = 0xAC0; // CUtlSymbolLarge
            public const nint m_iszControlPointNames = 0xAC8; // CUtlSymbolLarge[64]
            public const nint m_nDataCP = 0xCC8; // int32
            public const nint m_vecDataCPValue = 0xCCC; // Vector
            public const nint m_nTintCP = 0xCD8; // int32
            public const nint m_clrTint = 0xCDC; // Color
        }
        // Parent: CBaseModelEntity
        // Field count: 5
        public static class CTriggerBrush {
            public const nint m_OnStartTouch = 0x768; // CEntityIOOutput
            public const nint m_OnEndTouch = 0x780; // CEntityIOOutput
            public const nint m_OnUse = 0x798; // CEntityIOOutput
            public const nint m_iInputFilter = 0x7B0; // int32
            public const nint m_iDontMessageParent = 0x7B4; // int32
        }
        // Parent: None
        // Field count: 2
        public static class IntervalTimer {
            public const nint m_timestamp = 0x8; // GameTime_t
            public const nint m_nWorldGroupId = 0xC; // WorldGroupId_t
        }
        // Parent: None
        // Field count: 5
        public static class audioparams_t {
            public const nint localSound = 0x8; // Vector[8]
            public const nint soundscapeIndex = 0x68; // int32
            public const nint localBits = 0x6C; // uint8
            public const nint soundscapeEntityListIndex = 0x70; // int32
            public const nint soundEventHash = 0x74; // uint32
        }
        // Parent: CBaseEntity
        // Field count: 3
        public static class CSoundAreaEntityBase {
            public const nint m_bDisabled = 0x4A8; // bool
            public const nint m_iszSoundAreaType = 0x4B0; // CUtlSymbolLarge
            public const nint m_vPos = 0x4B8; // Vector
        }
        // Parent: CCSWeaponBaseGun
        // Field count: 0
        public static class CWeaponM4A1Silencer {
        }
        // Parent: None
        // Field count: 7
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
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CTestPulseIO__FloatStringArgs_t {
            public const nint flOutFloat = 0x0; // float32
            public const nint strOutString = 0x8; // CUtlSymbolLarge
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
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
        public static class CBeam {
            public const nint m_flFrameRate = 0x768; // float32
            public const nint m_flHDRColorScale = 0x76C; // float32
            public const nint m_flFireTime = 0x770; // GameTime_t
            public const nint m_flDamage = 0x774; // float32
            public const nint m_nNumBeamEnts = 0x778; // uint8
            public const nint m_hBaseMaterial = 0x780; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_nHaloIndex = 0x788; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_nBeamType = 0x790; // BeamType_t
            public const nint m_nBeamFlags = 0x794; // uint32
            public const nint m_hAttachEntity = 0x798; // CHandle<CBaseEntity>[10]
            public const nint m_nAttachIndex = 0x7C0; // AttachmentHandle_t[10]
            public const nint m_fWidth = 0x7CC; // float32
            public const nint m_fEndWidth = 0x7D0; // float32
            public const nint m_fFadeLength = 0x7D4; // float32
            public const nint m_fHaloScale = 0x7D8; // float32
            public const nint m_fAmplitude = 0x7DC; // float32
            public const nint m_fStartFrame = 0x7E0; // float32
            public const nint m_fSpeed = 0x7E4; // float32
            public const nint m_flFrame = 0x7E8; // float32
            public const nint m_nClipStyle = 0x7EC; // BeamClipStyle_t
            public const nint m_bTurnedOff = 0x7F0; // bool
            public const nint m_vecEndPos = 0x7F4; // VectorWS
            public const nint m_hEndEntity = 0x800; // CHandle<CBaseEntity>
            public const nint m_nDissolveType = 0x804; // int32
        }
        // Parent: CLogicalEntity
        // Field count: 4
        public static class CLogicEventListener {
            public const nint m_strEventName = 0x4B8; // CUtlString
            public const nint m_bIsEnabled = 0x4C0; // bool
            public const nint m_nTeam = 0x4C4; // int32
            public const nint m_OnEventFired = 0x4C8; // CEntityOutputTemplate<CUtlString>
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
        public static class CBasePlayerPawn {
            public const nint m_pWeaponServices = 0xA00; // CPlayer_WeaponServices*
            public const nint m_pItemServices = 0xA08; // CPlayer_ItemServices*
            public const nint m_pAutoaimServices = 0xA10; // CPlayer_AutoaimServices*
            public const nint m_pObserverServices = 0xA18; // CPlayer_ObserverServices*
            public const nint m_pWaterServices = 0xA20; // CPlayer_WaterServices*
            public const nint m_pUseServices = 0xA28; // CPlayer_UseServices*
            public const nint m_pFlashlightServices = 0xA30; // CPlayer_FlashlightServices*
            public const nint m_pCameraServices = 0xA38; // CPlayer_CameraServices*
            public const nint m_pMovementServices = 0xA40; // CPlayer_MovementServices*
            public const nint m_ServerViewAngleChanges = 0xA50; // CUtlVectorEmbeddedNetworkVar<ViewAngleServerChange_t>
            public const nint v_angle = 0xAB8; // QAngle
            public const nint v_anglePrevious = 0xAC4; // QAngle
            public const nint m_iHideHUD = 0xAD0; // uint32
            public const nint m_skybox3d = 0xAD8; // sky3dparams_t
            public const nint m_fTimeLastHurt = 0xB68; // GameTime_t
            public const nint m_flDeathTime = 0xB6C; // GameTime_t
            public const nint m_fNextSuicideTime = 0xB70; // GameTime_t
            public const nint m_fInitHUD = 0xB74; // bool
            public const nint m_pExpresser = 0xB78; // CAI_Expresser*
            public const nint m_hController = 0xB80; // CHandle<CBasePlayerController>
            public const nint m_hDefaultController = 0xB84; // CHandle<CBasePlayerController>
            public const nint m_fHltvReplayDelay = 0xB8C; // float32
            public const nint m_fHltvReplayEnd = 0xB90; // float32
            public const nint m_iHltvReplayEntity = 0xB94; // CEntityIndex
            public const nint m_sndOpvarLatchData = 0xB98; // CUtlVector<sndopvarlatchdata_t>
        }
        // Parent: None
        // Field count: 2
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
            public const nint m_OutValue = 0x4B8; // CEntityOutputTemplate<Color>
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
            public const nint m_vExtent = 0x780; // Vector
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
        public static class CCSObserverPawn {
        }
        // Parent: CBaseTrigger
        // Field count: 2
        public static class CTriggerActiveWeaponDetect {
            public const nint m_OnTouchedActiveWeapon = 0x8C8; // CEntityIOOutput
            public const nint m_iszWeaponClassName = 0x8E0; // CUtlSymbolLarge
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
        // Parent: None
        // Field count: 13
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
        public static class CPlayerSprayDecal {
            public const nint m_nUniqueID = 0x768; // int32
            public const nint m_unAccountID = 0x76C; // uint32
            public const nint m_unTraceID = 0x770; // uint32
            public const nint m_rtGcTime = 0x774; // uint32
            public const nint m_vecEndPos = 0x778; // Vector
            public const nint m_vecStart = 0x784; // Vector
            public const nint m_vecLeft = 0x790; // Vector
            public const nint m_vecNormal = 0x79C; // Vector
            public const nint m_nPlayer = 0x7A8; // int32
            public const nint m_nEntity = 0x7AC; // int32
            public const nint m_nHitbox = 0x7B0; // int32
            public const nint m_flCreationTime = 0x7B4; // float32
            public const nint m_nTintID = 0x7B8; // int32
            public const nint m_nVersion = 0x7BC; // uint8
            public const nint m_ubSignature = 0x7BD; // uint8[128]
        }
        // Parent: CBaseModelEntity
        // Field count: 1
        public static class CFuncWater {
            public const nint m_BuoyancyHelper = 0x768; // CBuoyancyHelper
        }
        // Parent: None
        // Field count: 1
        public static class CCSGameModeRules {
            public const nint __m_pChainEntity = 0x8; // CNetworkVarChainer
        }
        // Parent: None
        // Field count: 0
        public static class CPointPrefabAPI {
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Outflow_PlayVCD__VCDRequirementInfo_t {
            public const nint m_nEventID = 0x0; // int32
            public const nint m_Outflow = 0x8; // CPulse_OutflowConnection
        }
        // Parent: CBaseAnimGraph
        // Field count: 9
        public static class CEconEntity {
            public const nint m_AttributeManager = 0x958; // CAttributeContainer
            public const nint m_OriginalOwnerXuidLow = 0xC50; // uint32
            public const nint m_OriginalOwnerXuidHigh = 0xC54; // uint32
            public const nint m_nFallbackPaintKit = 0xC58; // int32
            public const nint m_nFallbackSeed = 0xC5C; // int32
            public const nint m_flFallbackWear = 0xC60; // float32
            public const nint m_nFallbackStatTrak = 0xC64; // int32
            public const nint m_hOldProvidee = 0xC68; // CHandle<CBaseEntity>
            public const nint m_iOldOwnerClass = 0xC6C; // int32
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
            public const nint m_trackTop = 0x830; // CHandle<CPathTrack>
            public const nint m_trackBottom = 0x834; // CHandle<CPathTrack>
            public const nint m_train = 0x838; // CHandle<CFuncTrackTrain>
            public const nint m_trackTopName = 0x840; // CUtlSymbolLarge
            public const nint m_trackBottomName = 0x848; // CUtlSymbolLarge
            public const nint m_trainName = 0x850; // CUtlSymbolLarge
            public const nint m_code = 0x858; // TRAIN_CODE
            public const nint m_targetState = 0x85C; // int32
            public const nint m_use = 0x860; // int32
        }
        // Parent: CBaseModelEntity
        // Field count: 37
        public static class CFuncTrackTrain {
            public const nint m_ppath = 0x768; // CHandle<CPathTrack>
            public const nint m_length = 0x76C; // float32
            public const nint m_vPosPrev = 0x770; // Vector
            public const nint m_angPrev = 0x77C; // QAngle
            public const nint m_controlMins = 0x788; // Vector
            public const nint m_controlMaxs = 0x794; // Vector
            public const nint m_lastBlockPos = 0x7A0; // Vector
            public const nint m_lastBlockTick = 0x7AC; // int32
            public const nint m_flVolume = 0x7B0; // float32
            public const nint m_flBank = 0x7B4; // float32
            public const nint m_oldSpeed = 0x7B8; // float32
            public const nint m_flBlockDamage = 0x7BC; // float32
            public const nint m_height = 0x7C0; // float32
            public const nint m_maxSpeed = 0x7C4; // float32
            public const nint m_dir = 0x7C8; // float32
            public const nint m_iszSoundMove = 0x7D0; // CUtlSymbolLarge
            public const nint m_iszSoundMovePing = 0x7D8; // CUtlSymbolLarge
            public const nint m_iszSoundStart = 0x7E0; // CUtlSymbolLarge
            public const nint m_iszSoundStop = 0x7E8; // CUtlSymbolLarge
            public const nint m_strPathTarget = 0x7F0; // CUtlSymbolLarge
            public const nint m_flMoveSoundMinDuration = 0x7F8; // float32
            public const nint m_flMoveSoundMaxDuration = 0x7FC; // float32
            public const nint m_flNextMoveSoundTime = 0x800; // GameTime_t
            public const nint m_flMoveSoundMinPitch = 0x804; // float32
            public const nint m_flMoveSoundMaxPitch = 0x808; // float32
            public const nint m_eOrientationType = 0x80C; // TrainOrientationType_t
            public const nint m_eVelocityType = 0x810; // TrainVelocityType_t
            public const nint m_OnStart = 0x828; // CEntityIOOutput
            public const nint m_OnNext = 0x840; // CEntityIOOutput
            public const nint m_OnArrivedAtDestinationNode = 0x858; // CEntityIOOutput
            public const nint m_bManualSpeedChanges = 0x870; // bool
            public const nint m_flDesiredSpeed = 0x874; // float32
            public const nint m_flSpeedChangeTime = 0x878; // GameTime_t
            public const nint m_flAccelSpeed = 0x87C; // float32
            public const nint m_flDecelSpeed = 0x880; // float32
            public const nint m_bAccelToSpeed = 0x884; // bool
            public const nint m_flNextMPSoundTime = 0x888; // GameTime_t
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
        public static class CEnvWind {
            public const nint m_EnvWindShared = 0x4A8; // CEnvWindShared
        }
        // Parent: CSoundEventEntity
        // Field count: 7
        public static class CSoundEventPathCornerEntity {
            public const nint m_iszPathCorner = 0x568; // CUtlSymbolLarge
            public const nint m_iCountMax = 0x570; // int32
            public const nint m_flDistanceMax = 0x574; // float32
            public const nint m_flDistMaxSqr = 0x578; // float32
            public const nint m_flDotProductMax = 0x57C; // float32
            public const nint m_bPlaying = 0x580; // bool
            public const nint m_vecCornerPairsNetworked = 0x5A8; // CNetworkUtlVectorBase<SoundeventPathCornerPairNetworked_t>
        }
        // Parent: CPlayer_CameraServices
        // Field count: 7
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
            public const nint m_iszConnectionTarget = 0x8E0; // CUtlSymbolLarge
            public const nint m_vecConnections = 0x8E8; // CUtlVector<DynamicVolumeDef_t>
            public const nint m_sTransitionType = 0x900; // CGlobalSymbol
            public const nint m_bConnectionsEnabled = 0x908; // bool
            public const nint m_flTargetAreaSearchRadius = 0x90C; // float32
            public const nint m_flUpdateDistance = 0x910; // float32
            public const nint m_flMaxConnectionDistance = 0x914; // float32
        }
        // Parent: CBaseAnimGraph
        // Field count: 1
        public static class CConstraintAnchor {
            public const nint m_massScale = 0x940; // float32
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
        // Field count: 112
        public static class CCSPlayerPawn {
            public const nint m_pBulletServices = 0xD08; // CCSPlayer_BulletServices*
            public const nint m_pHostageServices = 0xD10; // CCSPlayer_HostageServices*
            public const nint m_pBuyServices = 0xD18; // CCSPlayer_BuyServices*
            public const nint m_pActionTrackingServices = 0xD20; // CCSPlayer_ActionTrackingServices*
            public const nint m_pRadioServices = 0xD28; // CCSPlayer_RadioServices*
            public const nint m_pDamageReactServices = 0xD30; // CCSPlayer_DamageReactServices*
            public const nint m_nCharacterDefIndex = 0xD38; // uint16
            public const nint m_bHasFemaleVoice = 0xD3A; // bool
            public const nint m_strVOPrefix = 0xD40; // CUtlString
            public const nint m_szLastPlaceName = 0xD48; // char[18]
            public const nint m_bInHostageResetZone = 0xE38; // bool
            public const nint m_bInBuyZone = 0xE39; // bool
            public const nint m_TouchingBuyZones = 0xE40; // CUtlVector<CHandle<CBaseEntity>>
            public const nint m_bWasInBuyZone = 0xE58; // bool
            public const nint m_bInHostageRescueZone = 0xE59; // bool
            public const nint m_bInBombZone = 0xE5A; // bool
            public const nint m_bWasInHostageRescueZone = 0xE5B; // bool
            public const nint m_iRetakesOffering = 0xE5C; // int32
            public const nint m_iRetakesOfferingCard = 0xE60; // int32
            public const nint m_bRetakesHasDefuseKit = 0xE64; // bool
            public const nint m_bRetakesMVPLastRound = 0xE65; // bool
            public const nint m_iRetakesMVPBoostItem = 0xE68; // int32
            public const nint m_RetakesMVPBoostExtraUtility = 0xE6C; // loadout_slot_t
            public const nint m_flHealthShotBoostExpirationTime = 0xE70; // GameTime_t
            public const nint m_flLandingTimeSeconds = 0xE74; // float32
            public const nint m_aimPunchAngle = 0xE78; // QAngle
            public const nint m_aimPunchAngleVel = 0xE84; // QAngle
            public const nint m_aimPunchTickBase = 0xE90; // GameTick_t
            public const nint m_aimPunchTickFraction = 0xE94; // float32
            public const nint m_aimPunchCache = 0xE98; // CUtlVector<QAngle>
            public const nint m_bIsBuyMenuOpen = 0xEB0; // bool
            public const nint m_lastLandTime = 0xEE8; // GameTime_t
            public const nint m_bOnGroundLastTick = 0xEEC; // bool
            public const nint m_iPlayerLocked = 0xEF0; // int32
            public const nint m_flTimeOfLastInjury = 0xEF8; // GameTime_t
            public const nint m_flNextSprayDecalTime = 0xEFC; // GameTime_t
            public const nint m_bNextSprayDecalTimeExpedited = 0xF00; // bool
            public const nint m_nRagdollDamageBone = 0xF04; // int32
            public const nint m_vRagdollDamageForce = 0xF08; // Vector
            public const nint m_vRagdollDamagePosition = 0xF14; // Vector
            public const nint m_szRagdollDamageWeaponName = 0xF20; // char[64]
            public const nint m_bRagdollDamageHeadshot = 0xF60; // bool
            public const nint m_vRagdollServerOrigin = 0xF64; // Vector
            public const nint m_EconGloves = 0xF70; // CEconItemView
            public const nint m_nEconGlovesChanged = 0x1218; // uint8
            public const nint m_qDeathEyeAngles = 0x121C; // QAngle
            public const nint m_bLeftHanded = 0x1228; // bool
            public const nint m_fSwitchedHandednessTime = 0x122C; // GameTime_t
            public const nint m_flViewmodelOffsetX = 0x1230; // float32
            public const nint m_flViewmodelOffsetY = 0x1234; // float32
            public const nint m_flViewmodelOffsetZ = 0x1238; // float32
            public const nint m_flViewmodelFOV = 0x123C; // float32
            public const nint m_bIsWalking = 0x1240; // bool
            public const nint m_fLastGivenDefuserTime = 0x1244; // float32
            public const nint m_fLastGivenBombTime = 0x1248; // float32
            public const nint m_flDealtDamageToEnemyMostRecentTimestamp = 0x124C; // float32
            public const nint m_iDisplayHistoryBits = 0x1250; // uint32
            public const nint m_flLastAttackedTeammate = 0x1254; // float32
            public const nint m_allowAutoFollowTime = 0x1258; // GameTime_t
            public const nint m_bResetArmorNextSpawn = 0x125C; // bool
            public const nint m_nLastKillerIndex = 0x1260; // CEntityIndex
            public const nint m_entitySpottedState = 0x1268; // EntitySpottedState_t
            public const nint m_nSpotRules = 0x1280; // int32
            public const nint m_bIsScoped = 0x1284; // bool
            public const nint m_bResumeZoom = 0x1285; // bool
            public const nint m_bIsDefusing = 0x1286; // bool
            public const nint m_bIsGrabbingHostage = 0x1287; // bool
            public const nint m_iBlockingUseActionInProgress = 0x1288; // CSPlayerBlockingUseAction_t
            public const nint m_flEmitSoundTime = 0x128C; // GameTime_t
            public const nint m_bInNoDefuseArea = 0x1290; // bool
            public const nint m_iBombSiteIndex = 0x1294; // CEntityIndex
            public const nint m_nWhichBombZone = 0x1298; // int32
            public const nint m_bInBombZoneTrigger = 0x129C; // bool
            public const nint m_bWasInBombZoneTrigger = 0x129D; // bool
            public const nint m_iShotsFired = 0x12A0; // int32
            public const nint m_flFlinchStack = 0x12A4; // float32
            public const nint m_flVelocityModifier = 0x12A8; // float32
            public const nint m_vecTotalBulletForce = 0x12AC; // Vector
            public const nint m_bWaitForNoAttack = 0x12B8; // bool
            public const nint m_ignoreLadderJumpTime = 0x12BC; // float32
            public const nint m_bKilledByHeadshot = 0x12C0; // bool
            public const nint m_LastHitBox = 0x12C4; // int32
            public const nint m_pBot = 0x12C8; // CCSBot*
            public const nint m_bBotAllowActive = 0x12D0; // bool
            public const nint m_nLastPickupPriority = 0x12D4; // int32
            public const nint m_flLastPickupPriorityTime = 0x12D8; // float32
            public const nint m_ArmorValue = 0x12DC; // int32
            public const nint m_unCurrentEquipmentValue = 0x12E0; // uint16
            public const nint m_unRoundStartEquipmentValue = 0x12E2; // uint16
            public const nint m_unFreezetimeEndEquipmentValue = 0x12E4; // uint16
            public const nint m_iLastWeaponFireUsercmd = 0x12E8; // int32
            public const nint m_bIsSpawning = 0x12EC; // bool
            public const nint m_iDeathFlags = 0x12F8; // int32
            public const nint m_bHasDeathInfo = 0x12FC; // bool
            public const nint m_flDeathInfoTime = 0x1300; // float32
            public const nint m_vecDeathInfoOrigin = 0x1304; // Vector
            public const nint m_vecPlayerPatchEconIndices = 0x1310; // uint32[5]
            public const nint m_GunGameImmunityColor = 0x1324; // Color
            public const nint m_grenadeParameterStashTime = 0x1328; // GameTime_t
            public const nint m_bGrenadeParametersStashed = 0x132C; // bool
            public const nint m_angStashedShootAngles = 0x1330; // QAngle
            public const nint m_vecStashedGrenadeThrowPosition = 0x133C; // Vector
            public const nint m_vecStashedVelocity = 0x1348; // Vector
            public const nint m_angShootAngleHistory = 0x1354; // QAngle[2]
            public const nint m_vecThrowPositionHistory = 0x136C; // Vector[2]
            public const nint m_vecVelocityHistory = 0x1384; // Vector[2]
            public const nint m_bCommittingSuicideOnTeamChange = 0x13A8; // bool
            public const nint m_wasNotKilledNaturally = 0x13A9; // bool
            public const nint m_fImmuneToGunGameDamageTime = 0x13AC; // GameTime_t
            public const nint m_bGunGameImmunity = 0x13B0; // bool
            public const nint m_fMolotovDamageTime = 0x13B4; // float32
            public const nint m_angEyeAngles = 0x13B8; // QAngle
        }
        // Parent: CBaseEntity
        // Field count: 22
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
        // Parent: None
        // Field count: 32
        public static class CGameSceneNode {
            public const nint m_nodeToWorld = 0x10; // CTransformWS
            public const nint m_pOwner = 0x30; // CEntityInstance*
            public const nint m_pParent = 0x38; // CGameSceneNode*
            public const nint m_pChild = 0x40; // CGameSceneNode*
            public const nint m_pNextSibling = 0x48; // CGameSceneNode*
            public const nint m_hParent = 0x70; // CGameSceneNodeHandle
            public const nint m_vecOrigin = 0x80; // CNetworkOriginCellCoordQuantizedVector
            public const nint m_angRotation = 0xB8; // QAngle
            public const nint m_flScale = 0xC4; // float32
            public const nint m_vecAbsOrigin = 0xC8; // VectorWS
            public const nint m_angAbsRotation = 0xD4; // QAngle
            public const nint m_flAbsScale = 0xE0; // float32
            public const nint m_nParentAttachmentOrBone = 0xE4; // int16
            public const nint m_bDebugAbsOriginChanges = 0xE6; // bool
            public const nint m_bDormant = 0xE7; // bool
            public const nint m_bForceParentToBeNetworked = 0xE8; // bool
            public const nint m_bDirtyHierarchy = 0x0; // bitfield:1
            public const nint m_bDirtyBoneMergeInfo = 0x0; // bitfield:1
            public const nint m_bNetworkedPositionChanged = 0x0; // bitfield:1
            public const nint m_bNetworkedAnglesChanged = 0x0; // bitfield:1
            public const nint m_bNetworkedScaleChanged = 0x0; // bitfield:1
            public const nint m_bWillBeCallingPostDataUpdate = 0x0; // bitfield:1
            public const nint m_bBoneMergeFlex = 0x0; // bitfield:1
            public const nint m_nLatchAbsOrigin = 0x0; // bitfield:2
            public const nint m_bDirtyBoneMergeBoneToRoot = 0x0; // bitfield:1
            public const nint m_nHierarchicalDepth = 0xEB; // uint8
            public const nint m_nHierarchyType = 0xEC; // uint8
            public const nint m_nDoNotSetAnimTimeInInvalidatePhysicsCount = 0xED; // uint8
            public const nint m_name = 0xF0; // CUtlStringToken
            public const nint m_hierarchyAttachName = 0x104; // CUtlStringToken
            public const nint m_flClientLocalScale = 0x108; // float32
            public const nint m_vRenderOrigin = 0x10C; // Vector
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
        public static class CPlayer_ObserverServices {
            public const nint m_iObserverMode = 0x48; // uint8
            public const nint m_hObserverTarget = 0x4C; // CHandle<CBaseEntity>
            public const nint m_iObserverLastMode = 0x50; // ObserverMode_t
            public const nint m_bForcedObserverMode = 0x54; // bool
        }
        // Parent: CBaseModelEntity
        // Field count: 1
        public static class CCashStack {
            public const nint m_nCashStackValue = 0x768; // int32
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
            public const nint m_hOwner = 0x1A8; // CHandle<CBaseEntity>
            public const nint m_bActivated = 0x1AC; // bool
            public const nint m_sNameFixupStaticPrefix = 0x1B0; // CUtlSymbolLarge
            public const nint m_sNameFixupParent = 0x1B8; // CUtlSymbolLarge
            public const nint m_sNameFixupLocal = 0x1C0; // CUtlSymbolLarge
            public const nint m_sProceduralWorldNameForRelays = 0x1C8; // CUtlSymbolLarge
        }
        // Parent: CSceneEntity
        // Field count: 0
        public static class CSceneEntityAlias_logic_choreographed_scene {
        }
        // Parent: CBaseEntity
        // Field count: 4
        public static class CRagdollManager {
            public const nint m_iCurrentMaxRagdollCount = 0x4A8; // int8
            public const nint m_iMaxRagdollCount = 0x4AC; // int32
            public const nint m_bSaveImportant = 0x4B0; // bool
            public const nint m_bCanTakeDamage = 0x4B1; // bool
        }
        // Parent: CBaseTrigger
        // Field count: 12
        public static class CPostProcessingVolume {
            public const nint m_hPostSettings = 0x8D8; // CStrongHandle<InfoForResourceTypeCPostProcessingResource>
            public const nint m_flFadeDuration = 0x8E0; // float32
            public const nint m_flMinLogExposure = 0x8E4; // float32
            public const nint m_flMaxLogExposure = 0x8E8; // float32
            public const nint m_flMinExposure = 0x8EC; // float32
            public const nint m_flMaxExposure = 0x8F0; // float32
            public const nint m_flExposureCompensation = 0x8F4; // float32
            public const nint m_flExposureFadeSpeedUp = 0x8F8; // float32
            public const nint m_flExposureFadeSpeedDown = 0x8FC; // float32
            public const nint m_flTonemapEVSmoothingRange = 0x900; // float32
            public const nint m_bMaster = 0x904; // bool
            public const nint m_bExposureControl = 0x905; // bool
        }
        // Parent: CPointEntity
        // Field count: 3
        public static class CPointProximitySensor {
            public const nint m_bDisabled = 0x4A8; // bool
            public const nint m_hTargetEntity = 0x4AC; // CHandle<CBaseEntity>
            public const nint m_Distance = 0x4B0; // CEntityOutputTemplate<float32>
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
        public static class CTriggerLook {
            public const nint m_hLookTarget = 0x8E0; // CHandle<CBaseEntity>
            public const nint m_flFieldOfView = 0x8E4; // float32
            public const nint m_flLookTime = 0x8E8; // float32
            public const nint m_flLookTimeTotal = 0x8EC; // float32
            public const nint m_flLookTimeLast = 0x8F0; // GameTime_t
            public const nint m_flTimeoutDuration = 0x8F4; // float32
            public const nint m_bTimeoutFired = 0x8F8; // bool
            public const nint m_bIsLooking = 0x8F9; // bool
            public const nint m_b2DFOV = 0x8FA; // bool
            public const nint m_bUseVelocity = 0x8FB; // bool
            public const nint m_bTestOcclusion = 0x8FC; // bool
            public const nint m_bTestAllVisibleOcclusion = 0x8FD; // bool
            public const nint m_OnTimeout = 0x900; // CEntityIOOutput
            public const nint m_OnStartLook = 0x918; // CEntityIOOutput
            public const nint m_OnEndLook = 0x930; // CEntityIOOutput
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Outflow_PlayVCD {
            public const nint m_hChoreoScene = 0xF0; // CStrongHandle<InfoForResourceTypeCChoreoSceneResource>
            public const nint m_OnPaused = 0xF8; // CPulse_OutflowConnection
            public const nint m_OnResumed = 0x140; // CPulse_OutflowConnection
            public const nint m_OutRequirements = 0x188; // CUtlVector<CPulseCell_Outflow_PlayVCD::VCDRequirementInfo_t>
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
        public static class CBaseCSGrenade {
            public const nint m_bRedraw = 0x1030; // bool
            public const nint m_bIsHeldByPlayer = 0x1031; // bool
            public const nint m_bPinPulled = 0x1032; // bool
            public const nint m_bJumpThrow = 0x1033; // bool
            public const nint m_bThrowAnimating = 0x1034; // bool
            public const nint m_fThrowTime = 0x1038; // GameTime_t
            public const nint m_flThrowStrength = 0x103C; // float32
            public const nint m_fDropTime = 0x1040; // GameTime_t
            public const nint m_fPinPullTime = 0x1044; // GameTime_t
            public const nint m_bJustPulledPin = 0x1048; // bool
            public const nint m_nNextHoldTick = 0x104C; // GameTick_t
            public const nint m_flNextHoldFrac = 0x1050; // float32
            public const nint m_hSwitchToWeaponAfterThrow = 0x1054; // CHandle<CCSWeaponBase>
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
            public const nint m_bDisabled = 0x768; // bool
        }
        // Parent: CPointEntity
        // Field count: 6
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
            public const nint m_OnRemove = 0x8C8; // CEntityIOOutput
        }
        // Parent: CLogicalEntity
        // Field count: 5
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
            public const nint m_nScopes = 0x7A8; // NavScopeFlags_t
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
            public const nint m_bSinglePlayerGameEnding = 0xD0; // bool
        }
        // Parent: None
        // Field count: 17
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
            public const nint m_location = 0x30; // VectorWS
            public const nint m_OnGustStart = 0x40; // CEntityIOOutput
            public const nint m_OnGustEnd = 0x58; // CEntityIOOutput
            public const nint m_hEntOwner = 0x70; // CHandle<CBaseEntity>
        }
        // Parent: CServerOnlyPointEntity
        // Field count: 7
        public static class CPointPrefab {
            public const nint m_targetMapName = 0x4A8; // CUtlSymbolLarge
            public const nint m_forceWorldGroupID = 0x4B0; // CUtlSymbolLarge
            public const nint m_associatedRelayTargetName = 0x4B8; // CUtlSymbolLarge
            public const nint m_fixupNames = 0x4C0; // bool
            public const nint m_bLoadDynamic = 0x4C1; // bool
            public const nint m_associatedRelayEntity = 0x4C4; // CHandle<CPointPrefab>
            public const nint m_ProceduralRelaySources = 0x4C8; // CUtlVector<CHandle<CBaseEntity>>
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
            public const nint m_outCounter = 0x4A8; // CEntityOutputTemplate<int32>
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
            public const nint m_pPlatform = 0x768; // CHandle<CFuncPlat>
        }
        // Parent: CPointEntity
        // Field count: 66
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
            public const nint m_hLocatorOrigin = 0x518; // CHandle<CBaseEntity>
            public const nint m_sTargetAttachment = 0x520; // CUtlSymbolLarge
            public const nint m_bIsPlayingBack = 0x528; // bool
            public const nint m_bPaused = 0x529; // bool
            public const nint m_bMultiplayer = 0x52A; // bool
            public const nint m_bAutogenerated = 0x52B; // bool
            public const nint m_bAllRequirementsComplete = 0x52C; // bool
            public const nint m_flForceClientTime = 0x530; // float32
            public const nint m_flCurrentTime = 0x534; // float32
            public const nint m_flFrameTime = 0x538; // float32
            public const nint m_bCancelAtNextInterrupt = 0x53C; // bool
            public const nint m_fPitch = 0x540; // float32
            public const nint m_bAutomated = 0x544; // bool
            public const nint m_nAutomatedAction = 0x548; // int32
            public const nint m_flAutomationDelay = 0x54C; // float32
            public const nint m_flAutomationTime = 0x550; // float32
            public const nint m_nSpeechPriority = 0x554; // int32
            public const nint m_bPausedViaInput = 0x558; // bool
            public const nint m_bPauseAtNextInterrupt = 0x559; // bool
            public const nint m_bWaitingForActor = 0x55A; // bool
            public const nint m_bWaitingForInterrupt = 0x55B; // bool
            public const nint m_bInterruptedActorsScenes = 0x55C; // bool
            public const nint m_bTakeOverNPCBehavior = 0x55D; // bool
            public const nint m_bBreakOnNonIdle = 0x55E; // bool
            public const nint m_bSceneFinished = 0x55F; // bool
            public const nint m_hActorList = 0x560; // CNetworkUtlVectorBase<CHandle<CBaseModelEntity>>
            public const nint m_hRemoveActorList = 0x578; // CUtlVector<CHandle<CBaseEntity>>
            public const nint m_nSceneStringIndex = 0x5C0; // uint16
            public const nint m_OnStart = 0x5C8; // CEntityIOOutput
            public const nint m_OnCompletion = 0x5E0; // CEntityIOOutput
            public const nint m_OnCanceled = 0x5F8; // CEntityIOOutput
            public const nint m_OnPaused = 0x610; // CEntityIOOutput
            public const nint m_OnResumed = 0x628; // CEntityIOOutput
            public const nint m_OnPulseRequirement = 0x640; // CEntityIOOutput
            public const nint m_hInterruptScene = 0x758; // CHandle<CSceneEntity>
            public const nint m_nInterruptCount = 0x75C; // int32
            public const nint m_bSceneMissing = 0x760; // bool
            public const nint m_bInterrupted = 0x761; // bool
            public const nint m_bCompletedEarly = 0x762; // bool
            public const nint m_bInterruptSceneFinished = 0x763; // bool
            public const nint m_bRestoring = 0x764; // bool
            public const nint m_hNotifySceneCompletion = 0x768; // CUtlVector<CHandle<CSceneEntity>>
            public const nint m_hListManagers = 0x780; // CUtlVector<CHandle<CSceneListManager>>
            public const nint m_iszSoundName = 0x798; // CUtlSymbolLarge
            public const nint m_iszSequenceName = 0x7A0; // CUtlSymbolLarge
            public const nint m_hActor = 0x7A8; // CHandle<CBaseModelEntity>
            public const nint m_hActivator = 0x7AC; // CHandle<CBaseEntity>
            public const nint m_BusyActor = 0x7B0; // int32
            public const nint m_iPlayerDeathBehavior = 0x7B4; // SceneOnPlayerDeath_t
        }
        // Parent: CPointEntity
        // Field count: 0
        public static class CChoreoInfoTarget {
        }
        // Parent: CBaseEntity
        // Field count: 5
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
        // Parent: None
        // Field count: 0
        public static class CTakeDamageResultAPI {
        }
        // Parent: None
        // Field count: 8
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
            public const nint m_OnMagnetAttach = 0x940; // CEntityIOOutput
            public const nint m_OnMagnetDetach = 0x958; // CEntityIOOutput
            public const nint m_massScale = 0x970; // float32
            public const nint m_forceLimit = 0x974; // float32
            public const nint m_torqueLimit = 0x978; // float32
            public const nint m_MagnettedEntities = 0x980; // CUtlVector<magnetted_objects_t>
            public const nint m_bActive = 0x998; // bool
            public const nint m_bHasHitSomething = 0x999; // bool
            public const nint m_flTotalMass = 0x99C; // float32
            public const nint m_flRadius = 0x9A0; // float32
            public const nint m_flNextSuckTime = 0x9A4; // GameTime_t
            public const nint m_iMaxObjectsAttached = 0x9A8; // int32
        }
        // Parent: None
        // Field count: 3
        public static class CEntityInstance {
            public const nint m_iszPrivateVScripts = 0x8; // CUtlSymbolLarge
            public const nint m_pEntity = 0x10; // CEntityIdentity*
            public const nint m_CScriptComponent = 0x28; // CScriptComponent*
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
        public static class CCSPlayer_BulletServices {
            public const nint m_totalHitsOnServer = 0x48; // int32
        }
        // Parent: CBaseEntity
        // Field count: 4
        public static class CSkyCamera {
            public const nint m_skyboxData = 0x4A8; // sky3dparams_t
            public const nint m_skyboxSlotToken = 0x538; // CUtlStringToken
            public const nint m_bUseAngles = 0x53C; // bool
            public const nint m_pNext = 0x540; // CSkyCamera*
        }
        // Parent: CCSGO_EndOfMatchLineupEndpoint
        // Field count: 0
        public static class CCSGO_EndOfMatchLineupEnd {
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
        public static class CWeaponBaseItem {
            public const nint m_bSequenceInProgress = 0x1030; // bool
            public const nint m_bRedraw = 0x1031; // bool
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
        // Parent: None
        // Field count: 4
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
        public static class CC4 {
            public const nint m_vecLastValidPlayerHeldPosition = 0x1060; // Vector
            public const nint m_vecLastValidDroppedPosition = 0x106C; // Vector
            public const nint m_bDoValidDroppedPositionCheck = 0x1078; // bool
            public const nint m_bStartedArming = 0x1079; // bool
            public const nint m_fArmedTime = 0x107C; // GameTime_t
            public const nint m_bBombPlacedAnimation = 0x1080; // bool
            public const nint m_bIsPlantingViaUse = 0x1081; // bool
            public const nint m_entitySpottedState = 0x1088; // EntitySpottedState_t
            public const nint m_nSpotRules = 0x10A0; // int32
            public const nint m_bPlayedArmingBeeps = 0x10A4; // bool[7]
            public const nint m_bBombPlanted = 0x10AB; // bool
        }
        // Parent: CBaseAnimGraph
        // Field count: 0
        public static class CHostageCarriableProp {
        }
        // Parent: CDynamicProp
        // Field count: 0
        public static class CDynamicPropAlias_cable_dynamic {
        }
        // Parent: CCSPlayerBase_CameraServices
        // Field count: 0
        public static class CCSObserver_CameraServices {
        }
        // Parent: CBaseEntity
        // Field count: 2
        public static class CEnvDetailController {
            public const nint m_flFadeStartDist = 0x4A8; // float32
            public const nint m_flFadeEndDist = 0x4AC; // float32
        }
        // Parent: CBasePlayerPawn
        // Field count: 15
        public static class CCSPlayerPawnBase {
            public const nint m_CTouchExpansionComponent = 0xBC0; // CTouchExpansionComponent
            public const nint m_pPingServices = 0xC10; // CCSPlayer_PingServices*
            public const nint m_blindUntilTime = 0xC18; // GameTime_t
            public const nint m_blindStartTime = 0xC1C; // GameTime_t
            public const nint m_iPlayerState = 0xC20; // CSPlayerState
            public const nint m_bRespawning = 0xCD0; // bool
            public const nint m_bHasMovedSinceSpawn = 0xCD1; // bool
            public const nint m_iNumSpawns = 0xCD4; // int32
            public const nint m_flIdleTimeSinceLastAction = 0xCDC; // float32
            public const nint m_fNextRadarUpdateTime = 0xCE0; // float32
            public const nint m_flFlashDuration = 0xCE4; // float32
            public const nint m_flFlashMaxAlpha = 0xCE8; // float32
            public const nint m_flProgressBarStartTime = 0xCEC; // float32
            public const nint m_iProgressBarDuration = 0xCF0; // int32
            public const nint m_hOriginalController = 0xCF4; // CHandle<CCSPlayerController>
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
        public static class CBombTarget {
            public const nint m_OnBombExplode = 0x8C8; // CEntityIOOutput
            public const nint m_OnBombPlanted = 0x8E0; // CEntityIOOutput
            public const nint m_OnBombDefused = 0x8F8; // CEntityIOOutput
            public const nint m_bIsBombSiteB = 0x910; // bool
            public const nint m_bIsHeistBombTarget = 0x911; // bool
            public const nint m_bBombPlantedHere = 0x912; // bool
            public const nint m_szMountTarget = 0x918; // CUtlSymbolLarge
            public const nint m_hInstructorHint = 0x920; // CHandle<CBaseEntity>
            public const nint m_nBombSiteDesignation = 0x924; // int32
        }
        // Parent: CBaseModelEntity
        // Field count: 1
        public static class CRuleEntity {
            public const nint m_iszMaster = 0x768; // CUtlSymbolLarge
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
        // Field count: 8
        public static class CSkeletonInstance {
            public const nint m_modelState = 0x130; // CModelState
            public const nint m_bUseParentRenderBounds = 0x380; // bool
            public const nint m_bDisableSolidCollisionsForHierarchy = 0x381; // bool
            public const nint m_bDirtyMotionType = 0x0; // bitfield:1
            public const nint m_bIsGeneratingLatchedParentSpaceState = 0x0; // bitfield:1
            public const nint m_materialGroup = 0x384; // CUtlStringToken
            public const nint m_nHitboxSet = 0x388; // uint8
            public const nint m_bForceServerConstraintsEnabled = 0x3E4; // bool
        }
        // Parent: None
        // Field count: 0
        public static class CEntityComponent {
        }
        // Parent: CBaseToggle
        // Field count: 5
        public static class CBasePlatTrain {
            public const nint m_NoiseMoving = 0x7E8; // CUtlSymbolLarge
            public const nint m_NoiseArrived = 0x7F0; // CUtlSymbolLarge
            public const nint m_volume = 0x800; // float32
            public const nint m_flTWidth = 0x804; // float32
            public const nint m_flTLength = 0x808; // float32
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
        public static class CTriggerGameEvent {
            public const nint m_strStartTouchEventName = 0x8C8; // CUtlString
            public const nint m_strEndTouchEventName = 0x8D0; // CUtlString
            public const nint m_strTriggerID = 0x8D8; // CUtlString
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
            public const nint m_nScopes = 0x7D0; // NavScopeFlags_t
            public const nint m_bFloodFillAttribute = 0x7D1; // bool
            public const nint m_bSplitNavSpace = 0x7D2; // bool
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
            public const nint m_nForceSkin = 0xC70; // int32
            public const nint m_bAlwaysAllow = 0xC74; // bool
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
        public static class CFuncLadder {
            public const nint m_vecLadderDir = 0x768; // Vector
            public const nint m_Dismounts = 0x778; // CUtlVector<CHandle<CInfoLadderDismount>>
            public const nint m_vecLocalTop = 0x790; // Vector
            public const nint m_vecPlayerMountPositionTop = 0x79C; // VectorWS
            public const nint m_vecPlayerMountPositionBottom = 0x7A8; // VectorWS
            public const nint m_flAutoRideSpeed = 0x7B4; // float32
            public const nint m_bDisabled = 0x7B8; // bool
            public const nint m_bFakeLadder = 0x7B9; // bool
            public const nint m_bHasSlack = 0x7BA; // bool
            public const nint m_surfacePropName = 0x7C0; // CUtlSymbolLarge
            public const nint m_OnPlayerGotOnLadder = 0x7C8; // CEntityIOOutput
            public const nint m_OnPlayerGotOffLadder = 0x7E0; // CEntityIOOutput
        }
        // Parent: CBaseEntity
        // Field count: 3
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
            public const nint m_OnPlayerTouch = 0x948; // CEntityIOOutput
            public const nint m_OnPlayerPickup = 0x960; // CEntityIOOutput
            public const nint m_bActivateWhenAtRest = 0x978; // bool
            public const nint m_OnCacheInteraction = 0x980; // CEntityIOOutput
            public const nint m_OnGlovePulled = 0x998; // CEntityIOOutput
            public const nint m_vOriginalSpawnOrigin = 0x9B0; // VectorWS
            public const nint m_vOriginalSpawnAngles = 0x9BC; // QAngle
            public const nint m_bPhysStartAsleep = 0x9C8; // bool
        }
        // Parent: CBaseTrigger
        // Field count: 7
        public static class CTriggerPush {
            public const nint m_angPushEntitySpace = 0x8C8; // QAngle
            public const nint m_vecPushDirEntitySpace = 0x8D4; // Vector
            public const nint m_bTriggerOnStartTouch = 0x8E0; // bool
            public const nint m_bUsePathSimple = 0x8E1; // bool
            public const nint m_iszPathSimpleName = 0x8E8; // CUtlSymbolLarge
            public const nint m_PathSimple = 0x8F0; // CHandle<CPathSimple>
            public const nint m_splinePushType = 0x8F4; // uint32
        }
        // Parent: CBaseAnimGraph
        // Field count: 4
        public static class CBaseProp {
            public const nint m_bModelOverrodeBlockLOS = 0x940; // bool
            public const nint m_iShapeType = 0x944; // int32
            public const nint m_bConformToCollisionBounds = 0x948; // bool
            public const nint m_mPreferredCatchTransform = 0x950; // CTransform
        }
        // Parent: CPointEntity
        // Field count: 11
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
            public const nint m_AngularVelocity = 0x4E0; // CEntityOutputTemplate<float32>
            public const nint m_OnLessThan = 0x500; // CEntityIOOutput
            public const nint m_OnLessThanOrEqualTo = 0x518; // CEntityIOOutput
            public const nint m_OnGreaterThan = 0x530; // CEntityIOOutput
            public const nint m_OnGreaterThanOrEqualTo = 0x548; // CEntityIOOutput
            public const nint m_OnEqualTo = 0x560; // CEntityIOOutput
        }
        // Parent: CBaseEntity
        // Field count: 6
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
        public static class CBasePlayerWeapon {
            public const nint m_nNextPrimaryAttackTick = 0xC70; // GameTick_t
            public const nint m_flNextPrimaryAttackTickRatio = 0xC74; // float32
            public const nint m_nNextSecondaryAttackTick = 0xC78; // GameTick_t
            public const nint m_flNextSecondaryAttackTickRatio = 0xC7C; // float32
            public const nint m_iClip1 = 0xC80; // int32
            public const nint m_iClip2 = 0xC84; // int32
            public const nint m_pReserveAmmo = 0xC88; // int32[2]
            public const nint m_OnPlayerUse = 0xC90; // CEntityIOOutput
        }
        // Parent: None
        // Field count: 84
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertySuppressBaseClassField
        // MPropertySuppressBaseClassField
        public static class CCSWeaponBaseVData {
            public const nint m_WeaponType = 0x520; // CSWeaponType
            public const nint m_WeaponCategory = 0x524; // CSWeaponCategory
            public const nint m_szAnimSkeleton = 0x528; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCNmSkeleton>>
            public const nint m_vecMuzzlePos0 = 0x608; // Vector
            public const nint m_vecMuzzlePos1 = 0x614; // Vector
            public const nint m_szTracerParticle = 0x620; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            public const nint m_GearSlot = 0x700; // gear_slot_t
            public const nint m_GearSlotPosition = 0x704; // int32
            public const nint m_DefaultLoadoutSlot = 0x708; // loadout_slot_t
            public const nint m_nPrice = 0x70C; // int32
            public const nint m_nKillAward = 0x710; // int32
            public const nint m_nPrimaryReserveAmmoMax = 0x714; // int32
            public const nint m_nSecondaryReserveAmmoMax = 0x718; // int32
            public const nint m_bMeleeWeapon = 0x71C; // bool
            public const nint m_bHasBurstMode = 0x71D; // bool
            public const nint m_bIsRevolver = 0x71E; // bool
            public const nint m_bCannotShootUnderwater = 0x71F; // bool
            public const nint m_szName = 0x720; // CGlobalSymbol
            public const nint m_eSilencerType = 0x728; // CSWeaponSilencerType
            public const nint m_nCrosshairMinDistance = 0x72C; // int32
            public const nint m_nCrosshairDeltaDistance = 0x730; // int32
            public const nint m_bIsFullAuto = 0x734; // bool
            public const nint m_nNumBullets = 0x738; // int32
            public const nint m_bReloadsSingleShells = 0x73C; // bool
            public const nint m_flCycleTime = 0x740; // CFiringModeFloat
            public const nint m_flCycleTimeWhenInBurstMode = 0x748; // float32
            public const nint m_flTimeBetweenBurstShots = 0x74C; // float32
            public const nint m_flMaxSpeed = 0x750; // CFiringModeFloat
            public const nint m_flSpread = 0x758; // CFiringModeFloat
            public const nint m_flInaccuracyCrouch = 0x760; // CFiringModeFloat
            public const nint m_flInaccuracyStand = 0x768; // CFiringModeFloat
            public const nint m_flInaccuracyJump = 0x770; // CFiringModeFloat
            public const nint m_flInaccuracyLand = 0x778; // CFiringModeFloat
            public const nint m_flInaccuracyLadder = 0x780; // CFiringModeFloat
            public const nint m_flInaccuracyFire = 0x788; // CFiringModeFloat
            public const nint m_flInaccuracyMove = 0x790; // CFiringModeFloat
            public const nint m_flRecoilAngle = 0x798; // CFiringModeFloat
            public const nint m_flRecoilAngleVariance = 0x7A0; // CFiringModeFloat
            public const nint m_flRecoilMagnitude = 0x7A8; // CFiringModeFloat
            public const nint m_flRecoilMagnitudeVariance = 0x7B0; // CFiringModeFloat
            public const nint m_nTracerFrequency = 0x7B8; // CFiringModeInt
            public const nint m_flInaccuracyJumpInitial = 0x7C0; // float32
            public const nint m_flInaccuracyJumpApex = 0x7C4; // float32
            public const nint m_flInaccuracyReload = 0x7C8; // float32
            public const nint m_flDeployDuration = 0x7CC; // float32
            public const nint m_flDisallowAttackAfterReloadStartDuration = 0x7D0; // float32
            public const nint m_nBurstShotCount = 0x7D4; // int32
            public const nint m_bAllowBurstHolster = 0x7D8; // bool
            public const nint m_nRecoilSeed = 0x7DC; // int32
            public const nint m_nSpreadSeed = 0x7E0; // int32
            public const nint m_flAttackMovespeedFactor = 0x7E4; // float32
            public const nint m_flInaccuracyPitchShift = 0x7E8; // float32
            public const nint m_flInaccuracyAltSoundThreshold = 0x7EC; // float32
            public const nint m_szUseRadioSubtitle = 0x7F0; // CUtlString
            public const nint m_bUnzoomsAfterShot = 0x7F8; // bool
            public const nint m_bHideViewModelWhenZoomed = 0x7F9; // bool
            public const nint m_nZoomLevels = 0x7FC; // int32
            public const nint m_nZoomFOV1 = 0x800; // int32
            public const nint m_nZoomFOV2 = 0x804; // int32
            public const nint m_flZoomTime0 = 0x808; // float32
            public const nint m_flZoomTime1 = 0x80C; // float32
            public const nint m_flZoomTime2 = 0x810; // float32
            public const nint m_flIronSightPullUpSpeed = 0x814; // float32
            public const nint m_flIronSightPutDownSpeed = 0x818; // float32
            public const nint m_flIronSightFOV = 0x81C; // float32
            public const nint m_flIronSightPivotForward = 0x820; // float32
            public const nint m_flIronSightLooseness = 0x824; // float32
            public const nint m_nDamage = 0x828; // int32
            public const nint m_flHeadshotMultiplier = 0x82C; // float32
            public const nint m_flArmorRatio = 0x830; // float32
            public const nint m_flPenetration = 0x834; // float32
            public const nint m_flRange = 0x838; // float32
            public const nint m_flRangeModifier = 0x83C; // float32
            public const nint m_flFlinchVelocityModifierLarge = 0x840; // float32
            public const nint m_flFlinchVelocityModifierSmall = 0x844; // float32
            public const nint m_flRecoveryTimeCrouch = 0x848; // float32
            public const nint m_flRecoveryTimeStand = 0x84C; // float32
            public const nint m_flRecoveryTimeCrouchFinal = 0x850; // float32
            public const nint m_flRecoveryTimeStandFinal = 0x854; // float32
            public const nint m_nRecoveryTransitionStartBullet = 0x858; // int32
            public const nint m_nRecoveryTransitionEndBullet = 0x85C; // int32
            public const nint m_flThrowVelocity = 0x860; // float32
            public const nint m_vSmokeColor = 0x864; // Vector
            public const nint m_szAnimClass = 0x870; // CGlobalSymbol
        }
        // Parent: CPointEntity
        // Field count: 7
        public static class CPhysForce {
            public const nint m_pController = 0x4A8; // IPhysicsMotionController*
            public const nint m_nameAttach = 0x4B0; // CUtlSymbolLarge
            public const nint m_force = 0x4B8; // float32
            public const nint m_forceTime = 0x4BC; // float32
            public const nint m_attachedObject = 0x4C0; // CHandle<CBaseEntity>
            public const nint m_wasRestored = 0x4C4; // bool
            public const nint m_integrator = 0x4C8; // CConstantForceController
        }
        // Parent: None
        // Field count: 6
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
        // Field count: 0
        //
        // Metadata:
        // MPropertyFriendlyName
        public static class CPulseFuncs_GameParticleManager {
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MVDataOverlayType
        // MVDataAssociatedFile
        public static class CScenePayloadVData {
            public const nint m_eNPCBehavior = 0x0; // ENPCBehaviorOverride_t
            public const nint m_sPulseFile = 0x8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIPulseGraphDef>>
            public const nint m_sSceneFile = 0xE8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCChoreoSceneResource>>
            public const nint m_ePriority = 0x1C8; // InteractionPriority_t
        }
        // Parent: CBaseFilter
        // Field count: 1
        public static class CFilterAttributeInt {
            public const nint m_sAttributeName = 0x4E0; // CUtlSymbolLarge
        }
        // Parent: CPointEntity
        // Field count: 8
        public static class CKeepUpright {
            public const nint m_worldGoalAxis = 0x4B0; // Vector
            public const nint m_localTestAxis = 0x4BC; // Vector
            public const nint m_pController = 0x4C8; // IPhysicsMotionController*
            public const nint m_nameAttach = 0x4D0; // CUtlSymbolLarge
            public const nint m_attachedObject = 0x4D8; // CHandle<CBaseEntity>
            public const nint m_angularLimit = 0x4DC; // float32
            public const nint m_bActive = 0x4E0; // bool
            public const nint m_bDampAllRotation = 0x4E1; // bool
        }
        // Parent: CLogicalEntity
        // Field count: 12
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
            public const nint m_OnEntitySpawned = 0x510; // CEntityOutputTemplate<CUtlVector<CEntityHandle>>
        }
        // Parent: CBaseEntity
        // Field count: 36
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
        public static class CChicken {
            public const nint m_AttributeManager = 0xBA0; // CAttributeContainer
            public const nint m_updateTimer = 0xE98; // CountdownTimer
            public const nint m_stuckAnchor = 0xEB0; // Vector
            public const nint m_stuckTimer = 0xEC0; // CountdownTimer
            public const nint m_collisionStuckTimer = 0xED8; // CountdownTimer
            public const nint m_isOnGround = 0xEF0; // bool
            public const nint m_vFallVelocity = 0xEF4; // Vector
            public const nint m_desiredActivity = 0xF00; // ChickenActivity
            public const nint m_currentActivity = 0xF04; // ChickenActivity
            public const nint m_activityTimer = 0xF08; // CountdownTimer
            public const nint m_turnRate = 0xF20; // float32
            public const nint m_fleeFrom = 0xF24; // CHandle<CBaseEntity>
            public const nint m_moveRateThrottleTimer = 0xF28; // CountdownTimer
            public const nint m_startleTimer = 0xF40; // CountdownTimer
            public const nint m_vocalizeTimer = 0xF58; // CountdownTimer
            public const nint m_flWhenZombified = 0xF70; // GameTime_t
            public const nint m_jumpedThisFrame = 0xF74; // bool
            public const nint m_leader = 0xF78; // CHandle<CCSPlayerPawn>
            public const nint m_reuseTimer = 0xF90; // CountdownTimer
            public const nint m_hasBeenUsed = 0xFA8; // bool
            public const nint m_jumpTimer = 0xFB0; // CountdownTimer
            public const nint m_flLastJumpTime = 0xFC8; // float32
            public const nint m_bInJump = 0xFCC; // bool
            public const nint m_repathTimer = 0x2FD8; // CountdownTimer
            public const nint m_vecPathGoal = 0x3070; // Vector
            public const nint m_flActiveFollowStartTime = 0x307C; // GameTime_t
            public const nint m_followMinuteTimer = 0x3080; // CountdownTimer
            public const nint m_BlockDirectionTimer = 0x30A0; // CountdownTimer
        }
        // Parent: CPhysicsProp
        // Field count: 5
        public static class CPhysicsPropRespawnable {
            public const nint m_vOriginalSpawnOrigin = 0xC10; // VectorWS
            public const nint m_vOriginalSpawnAngles = 0xC1C; // QAngle
            public const nint m_vOriginalMins = 0xC28; // Vector
            public const nint m_vOriginalMaxs = 0xC34; // Vector
            public const nint m_flRespawnDuration = 0xC40; // float32
        }
        // Parent: CBeam
        // Field count: 19
        public static class CEnvBeam {
            public const nint m_active = 0x808; // int32
            public const nint m_spriteTexture = 0x810; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_iszStartEntity = 0x818; // CUtlSymbolLarge
            public const nint m_iszEndEntity = 0x820; // CUtlSymbolLarge
            public const nint m_life = 0x828; // float32
            public const nint m_boltWidth = 0x82C; // float32
            public const nint m_noiseAmplitude = 0x830; // float32
            public const nint m_speed = 0x834; // int32
            public const nint m_restrike = 0x838; // float32
            public const nint m_iszSpriteName = 0x840; // CUtlSymbolLarge
            public const nint m_frameStart = 0x848; // int32
            public const nint m_vEndPointWorld = 0x84C; // VectorWS
            public const nint m_vEndPointRelative = 0x858; // Vector
            public const nint m_radius = 0x864; // float32
            public const nint m_TouchType = 0x868; // Touch_t
            public const nint m_iFilterName = 0x870; // CUtlSymbolLarge
            public const nint m_hFilter = 0x878; // CHandle<CBaseEntity>
            public const nint m_iszDecal = 0x880; // CUtlSymbolLarge
            public const nint m_OnTouchedByEntity = 0x888; // CEntityIOOutput
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
            public const nint m_tonemapControllerName = 0x8C8; // CUtlSymbolLarge
            public const nint m_hTonemapController = 0x8D0; // CEntityHandle
        }
        // Parent: CPointEntity
        // Field count: 11
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
            public const nint m_pShakeController = 0x4D8; // IPhysicsMotionController*
            public const nint m_shakeCallback = 0x4E0; // CPhysicsShake
        }
        // Parent: CPlayer_MovementServices_Humanoid
        // Field count: 52
        public static class CCSPlayer_MovementServices {
            public const nint m_AnimationState = 0x2E0; // CCSPlayerAnimationState
            public const nint m_vecLadderNormal = 0x3D0; // Vector
            public const nint m_nLadderSurfacePropIndex = 0x3DC; // int32
            public const nint m_bDucked = 0x3E0; // bool
            public const nint m_flDuckAmount = 0x3E4; // float32
            public const nint m_flDuckSpeed = 0x3E8; // float32
            public const nint m_bDuckOverride = 0x3EC; // bool
            public const nint m_bDesiresDuck = 0x3ED; // bool
            public const nint m_bDucking = 0x3EE; // bool
            public const nint m_flDuckRootOffset = 0x3F0; // float32
            public const nint m_flDuckViewOffset = 0x3F4; // float32
            public const nint m_flLastDuckTime = 0x3F8; // float32
            public const nint m_flBombPlantViewOffset = 0x3FC; // float32
            public const nint m_vecLastPositionAtFullCrouchSpeed = 0x408; // Vector2D
            public const nint m_duckUntilOnGround = 0x410; // bool
            public const nint m_bHasWalkMovedSinceLastJump = 0x411; // bool
            public const nint m_bInStuckTest = 0x412; // bool
            public const nint m_nTraceCount = 0x620; // int32
            public const nint m_StuckLast = 0x624; // int32
            public const nint m_bSpeedCropped = 0x628; // bool
            public const nint m_nOldWaterLevel = 0x62C; // int32
            public const nint m_flWaterEntryTime = 0x630; // float32
            public const nint m_vecForward = 0x634; // Vector
            public const nint m_vecLeft = 0x640; // Vector
            public const nint m_vecUp = 0x64C; // Vector
            public const nint m_nGameCodeHasMovedPlayerAfterCommand = 0x658; // int32
            public const nint m_bMadeFootstepNoise = 0x65C; // bool
            public const nint m_iFootsteps = 0x660; // int32
            public const nint m_fStashGrenadeParameterWhen = 0x664; // GameTime_t
            public const nint m_nButtonDownMaskPrev = 0x668; // uint64
            public const nint m_bUseFrictionStashedSpeed = 0x670; // bool
            public const nint m_flUseFrictionStashedSpeedUntilFrac = 0x674; // float32
            public const nint m_flFrictionStashedSpeed = 0x678; // float32
            public const nint m_flStamina = 0x67C; // float32
            public const nint m_flHeightAtJumpStart = 0x680; // float32
            public const nint m_flMaxJumpHeightThisJump = 0x684; // float32
            public const nint m_flMaxJumpHeightLastJump = 0x688; // float32
            public const nint m_flStaminaAtJumpStart = 0x68C; // float32
            public const nint m_flVelMulAtJumpStart = 0x690; // float32
            public const nint m_flAccumulatedJumpError = 0x694; // float32
            public const nint m_LegacyJump = 0x698; // CCSPlayerLegacyJump
            public const nint m_ModernJump = 0x6B0; // CCSPlayerModernJump
            public const nint m_nLastJumpTick = 0x6E8; // GameTick_t
            public const nint m_flLastJumpFrac = 0x6EC; // float32
            public const nint m_flLastJumpVelocityZ = 0x6F0; // float32
            public const nint m_bJumpApexPending = 0x6F4; // bool
            public const nint m_flTicksSinceLastSurfingDetected = 0x6F8; // float32
            public const nint m_bWasSurfing = 0x6FC; // bool
            public const nint m_vecWalkWishVel = 0x78C; // Vector2D
            public const nint m_gtLastTimeOnStaticWorldGround = 0xFB8; // GameTime_t
            public const nint m_gtLastTimeInAir = 0xFBC; // GameTime_t
            public const nint m_bHasEverProcessedCommand = 0xFC0; // bool
        }
        // Parent: None
        // Field count: 5
        public static class SellbackPurchaseEntry_t {
            public const nint m_unDefIdx = 0x30; // uint16
            public const nint m_nCost = 0x34; // int32
            public const nint m_nPrevArmor = 0x38; // int32
            public const nint m_bPrevHelmet = 0x3C; // bool
            public const nint m_hItem = 0x40; // CEntityHandle
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CTestPulseIO__EntityNameStringArgs_t {
            public const nint nameA = 0x0; // CEntityNameString
            public const nint strValueB = 0x8; // CUtlSymbolLarge
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
            public const nint m_vecAxis = 0xD80; // Vector
            public const nint m_flDistance = 0xD8C; // float32
            public const nint m_eSpawnPosition = 0xD90; // PropDoorRotatingSpawnPos_t
            public const nint m_eOpenDirection = 0xD94; // PropDoorRotatingOpenDirection_e
            public const nint m_eCurrentOpenDirection = 0xD98; // PropDoorRotatingOpenDirection_e
            public const nint m_eDefaultCheckDirection = 0xD9C; // doorCheck_e
            public const nint m_flAjarAngle = 0xDA0; // float32
            public const nint m_angRotationAjarDeprecated = 0xDA4; // QAngle
            public const nint m_angRotationClosed = 0xDB0; // QAngle
            public const nint m_angRotationOpenForward = 0xDBC; // QAngle
            public const nint m_angRotationOpenBack = 0xDC8; // QAngle
            public const nint m_angGoal = 0xDD4; // QAngle
            public const nint m_vecForwardBoundsMin = 0xDE0; // Vector
            public const nint m_vecForwardBoundsMax = 0xDEC; // Vector
            public const nint m_vecBackBoundsMin = 0xDF8; // Vector
            public const nint m_vecBackBoundsMax = 0xE04; // Vector
            public const nint m_bAjarDoorShouldntAlwaysOpen = 0xE10; // bool
            public const nint m_hEntityBlocker = 0xE14; // CHandle<CEntityBlocker>
        }
        // Parent: CParticleSystem
        // Field count: 5
        public static class CEnvParticleGlow {
            public const nint m_flAlphaScale = 0xCE0; // float32
            public const nint m_flRadiusScale = 0xCE4; // float32
            public const nint m_flSelfIllumScale = 0xCE8; // float32
            public const nint m_ColorTint = 0xCEC; // Color
            public const nint m_hTextureOverride = 0xCF0; // CStrongHandle<InfoForResourceTypeCTextureBase>
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
            public const nint m_OutValue = 0x4C0; // CEntityOutputTemplate<float32>
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
        // Parent: None
        // Field count: 3
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
            public const nint m_vExtent = 0x8E0; // Vector
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
            public const nint m_iLandmark = 0x8C8; // CUtlSymbolLarge
            public const nint m_bUseLandmarkAngles = 0x8D0; // bool
            public const nint m_bMirrorPlayer = 0x8D1; // bool
            public const nint m_bCheckDestIfClearForPlayer = 0x8D2; // bool
        }
        // Parent: CBaseModelEntity
        // Field count: 1
        public static class CFuncWall {
            public const nint m_nState = 0x768; // int32
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
            public const nint m_Velocity = 0x4C8; // CEntityOutputTemplate<float32>
        }
        // Parent: None
        // Field count: 29
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CCS2PawnGraphController {
            public const nint m_bIsDefusing = 0x588; // CAnimGraph2ParamOptionalRef<bool>
            public const nint m_moveType = 0x5A0; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
            public const nint m_moveDirectionID = 0x5B8; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
            public const nint m_flMoveSpeedX = 0x5D0; // CAnimGraph2ParamOptionalRef<float32>
            public const nint m_flMoveSpeedY = 0x5E8; // CAnimGraph2ParamOptionalRef<float32>
            public const nint m_flMoveSpeedHorizontal = 0x600; // CAnimGraph2ParamOptionalRef<float32>
            public const nint m_flPreviousMoveSpeedHorizontal = 0x618; // CAnimGraph2ParamOptionalRef<float32>
            public const nint m_flCrouchAmount = 0x630; // CAnimGraph2ParamOptionalRef<float32>
            public const nint m_bIsWalking = 0x648; // CAnimGraph2ParamOptionalRef<bool>
            public const nint m_bIsStutterStep = 0x660; // CAnimGraph2ParamOptionalRef<bool>
            public const nint m_flWeaponDropAmount = 0x678; // CAnimGraph2ParamOptionalRef<float32>
            public const nint m_groundAction = 0x690; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
            public const nint m_groundActionDirectionID = 0x6A8; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
            public const nint m_flGroundTurnAngleOrVelocity = 0x6C0; // CAnimGraph2ParamOptionalRef<float32>
            public const nint m_flLadderCycle = 0x6D8; // CAnimGraph2ParamOptionalRef<float32>
            public const nint m_flLadderYaw = 0x6F0; // CAnimGraph2ParamOptionalRef<float32>
            public const nint m_flLadderYawBackwards = 0x708; // CAnimGraph2ParamOptionalRef<float32>
            public const nint m_airAction = 0x720; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
            public const nint m_flAirHeightAboveGround = 0x738; // CAnimGraph2ParamOptionalRef<float32>
            public const nint m_leftFootTarget = 0x750; // CAnimGraph2ParamOptionalRef<CNmTarget>
            public const nint m_rightFootTarget = 0x768; // CAnimGraph2ParamOptionalRef<CNmTarget>
            public const nint m_flFlashedAmount = 0x780; // CAnimGraph2ParamOptionalRef<float32>
            public const nint m_flAimPitchAngle = 0x798; // CAnimGraph2ParamOptionalRef<float32>
            public const nint m_flAimYawAngle = 0x7B0; // CAnimGraph2ParamOptionalRef<float32>
            public const nint m_flinchHead = 0x7C8; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
            public const nint m_flinchHeadRestart = 0x7E0; // CAnimGraph2ParamOptionalRef<bool>
            public const nint m_flinchBody = 0x7F8; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
            public const nint m_flinchBodyRestart = 0x810; // CAnimGraph2ParamOptionalRef<bool>
            public const nint m_flinchIsOnFire = 0x828; // CAnimGraph2ParamOptionalRef<bool>
        }
        // Parent: None
        // Field count: 3
        public static class EngineCountdownTimer {
            public const nint m_duration = 0x8; // float32
            public const nint m_timestamp = 0xC; // float32
            public const nint m_timescale = 0x10; // float32
        }
        // Parent: None
        // Field count: 0
        public static class CBaseModelEntityAPI {
        }
        // Parent: CTriggerMultiple
        // Field count: 1
        public static class CScriptTriggerMultiple {
            public const nint m_vExtent = 0x8E0; // Vector
        }
        // Parent: CHostageExpresserShim
        // Field count: 39
        public static class CHostage {
            public const nint m_OnHostageBeginGrab = 0xA28; // CEntityIOOutput
            public const nint m_OnFirstPickedUp = 0xA40; // CEntityIOOutput
            public const nint m_OnDroppedNotRescued = 0xA58; // CEntityIOOutput
            public const nint m_OnRescued = 0xA70; // CEntityIOOutput
            public const nint m_entitySpottedState = 0xA88; // EntitySpottedState_t
            public const nint m_nSpotRules = 0xAA0; // int32
            public const nint m_uiHostageSpawnExclusionGroupMask = 0xAA4; // uint32
            public const nint m_nHostageSpawnRandomFactor = 0xAA8; // uint32
            public const nint m_bRemove = 0xAAC; // bool
            public const nint m_vel = 0xAB0; // Vector
            public const nint m_isRescued = 0xABC; // bool
            public const nint m_jumpedThisFrame = 0xABD; // bool
            public const nint m_nHostageState = 0xAC0; // int32
            public const nint m_leader = 0xAC4; // CHandle<CBaseEntity>
            public const nint m_lastLeader = 0xAC8; // CHandle<CCSPlayerPawnBase>
            public const nint m_reuseTimer = 0xAD0; // CountdownTimer
            public const nint m_hasBeenUsed = 0xAE8; // bool
            public const nint m_accel = 0xAEC; // Vector
            public const nint m_isRunning = 0xAF8; // bool
            public const nint m_isCrouching = 0xAF9; // bool
            public const nint m_jumpTimer = 0xB00; // CountdownTimer
            public const nint m_isWaitingForLeader = 0xB18; // bool
            public const nint m_repathTimer = 0x2B28; // CountdownTimer
            public const nint m_inhibitDoorTimer = 0x2B40; // CountdownTimer
            public const nint m_inhibitObstacleAvoidanceTimer = 0x2BD0; // CountdownTimer
            public const nint m_wiggleTimer = 0x2BF0; // CountdownTimer
            public const nint m_isAdjusted = 0x2C0C; // bool
            public const nint m_bHandsHaveBeenCut = 0x2C0D; // bool
            public const nint m_hHostageGrabber = 0x2C10; // CHandle<CCSPlayerPawn>
            public const nint m_fLastGrabTime = 0x2C14; // GameTime_t
            public const nint m_vecPositionWhenStartedDroppingToGround = 0x2C18; // Vector
            public const nint m_vecGrabbedPos = 0x2C24; // Vector
            public const nint m_flRescueStartTime = 0x2C30; // GameTime_t
            public const nint m_flGrabSuccessTime = 0x2C34; // GameTime_t
            public const nint m_flDropStartTime = 0x2C38; // GameTime_t
            public const nint m_nApproachRewardPayouts = 0x2C3C; // int32
            public const nint m_nPickupEventCount = 0x2C40; // int32
            public const nint m_vecSpawnGroundPos = 0x2C44; // Vector
            public const nint m_vecHostageResetPosition = 0x2C7C; // VectorWS
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
        public static class CCSPlayerController_DamageServices {
            public const nint m_nSendUpdate = 0x40; // int32
            public const nint m_DamageList = 0x48; // CUtlVectorEmbeddedNetworkVar<CDamageRecord>
        }
        // Parent: CEnvCombinedLightProbeVolume
        // Field count: 0
        public static class CEnvCombinedLightProbeVolumeAlias_func_combined_light_probe_volume {
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CBaseModelEntity__OnDamageLevelChangedArgs_t {
            public const nint nHitGroup = 0x0; // HitGroup_t
            public const nint nDamageLevel = 0x4; // int32
            public const nint nDamageLevelsRemaining = 0x8; // int32
            public const nint nPrevDamageLevel = 0xC; // int32
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
        // Parent: None
        // Field count: 6
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
        // Parent: None
        // Field count: 4
        public static class CDestructiblePartsComponent {
            public const nint __m_pChainEntity = 0x0; // CNetworkVarChainer
            public const nint m_vecDamageTakenByHitGroup = 0x48; // CUtlVector<uint16>
            public const nint m_hOwner = 0x60; // CHandle<CBaseModelEntity>
            public const nint m_pAnimGraphDestructibleGraphController = 0x68; // CBaseAnimGraphDestructibleParts_GraphController*
        }
        // Parent: CBaseTrigger
        // Field count: 7
        public static class CChangeLevel {
            public const nint m_sMapName = 0x8C8; // CUtlString
            public const nint m_sLandmarkName = 0x8D0; // CUtlString
            public const nint m_OnChangeLevel = 0x8D8; // CEntityIOOutput
            public const nint m_bTouched = 0x8F0; // bool
            public const nint m_bNoTouch = 0x8F1; // bool
            public const nint m_bNewChapter = 0x8F2; // bool
            public const nint m_bOnChangeLevelFired = 0x8F3; // bool
        }
        // Parent: CBaseToggle
        // Field count: 25
        public static class CBaseButton {
            public const nint m_angMoveEntitySpace = 0x7E8; // QAngle
            public const nint m_fStayPushed = 0x7F4; // bool
            public const nint m_fRotating = 0x7F5; // bool
            public const nint m_ls = 0x7F8; // locksound_t
            public const nint m_sUseSound = 0x818; // CUtlSymbolLarge
            public const nint m_sLockedSound = 0x820; // CUtlSymbolLarge
            public const nint m_sUnlockedSound = 0x828; // CUtlSymbolLarge
            public const nint m_sOverrideAnticipationName = 0x830; // CUtlSymbolLarge
            public const nint m_bLocked = 0x838; // bool
            public const nint m_bDisabled = 0x839; // bool
            public const nint m_flUseLockedTime = 0x83C; // GameTime_t
            public const nint m_bSolidBsp = 0x840; // bool
            public const nint m_OnDamaged = 0x848; // CEntityIOOutput
            public const nint m_OnPressed = 0x860; // CEntityIOOutput
            public const nint m_OnUseLocked = 0x878; // CEntityIOOutput
            public const nint m_OnIn = 0x890; // CEntityIOOutput
            public const nint m_OnOut = 0x8A8; // CEntityIOOutput
            public const nint m_nState = 0x8C0; // int32
            public const nint m_hConstraint = 0x8C4; // CEntityHandle
            public const nint m_hConstraintParent = 0x8C8; // CEntityHandle
            public const nint m_bForceNpcExclude = 0x8CC; // bool
            public const nint m_sGlowEntity = 0x8D0; // CUtlSymbolLarge
            public const nint m_glowEntity = 0x8D8; // CHandle<CBaseModelEntity>
            public const nint m_usable = 0x8DC; // bool
            public const nint m_szDisplayText = 0x8E0; // CUtlSymbolLarge
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
        // Parent: CBaseAnimGraph
        // Field count: 14
        public static class CBaseGrenade {
            public const nint m_OnPlayerPickup = 0x948; // CEntityIOOutput
            public const nint m_OnExplode = 0x960; // CEntityIOOutput
            public const nint m_bHasWarnedAI = 0x978; // bool
            public const nint m_bIsSmokeGrenade = 0x979; // bool
            public const nint m_bIsLive = 0x97A; // bool
            public const nint m_DmgRadius = 0x97C; // float32
            public const nint m_flDetonateTime = 0x980; // GameTime_t
            public const nint m_flWarnAITime = 0x984; // float32
            public const nint m_flDamage = 0x988; // float32
            public const nint m_iszBounceSound = 0x990; // CUtlSymbolLarge
            public const nint m_ExplosionSound = 0x998; // CUtlString
            public const nint m_hThrower = 0x9A0; // CHandle<CCSPlayerPawn>
            public const nint m_flNextAttack = 0x9B8; // GameTime_t
            public const nint m_hOriginalThrower = 0x9BC; // CHandle<CCSPlayerPawn>
        }
        // Parent: CBaseTrigger
        // Field count: 8
        public static class CColorCorrectionVolume {
            public const nint m_MaxWeight = 0x8C8; // float32
            public const nint m_FadeDuration = 0x8CC; // float32
            public const nint m_Weight = 0x8D0; // float32
            public const nint m_lookupFilename = 0x8D4; // char[512]
            public const nint m_LastEnterWeight = 0xAD4; // float32
            public const nint m_LastEnterTime = 0xAD8; // GameTime_t
            public const nint m_LastExitWeight = 0xADC; // float32
            public const nint m_LastExitTime = 0xAE0; // GameTime_t
        }
        // Parent: CPlayerControllerComponent
        // Field count: 5
        public static class CCSPlayerController_ActionTrackingServices {
            public const nint m_perRoundStats = 0x40; // CUtlVectorEmbeddedNetworkVar<CSPerRoundStats_t>
            public const nint m_matchStats = 0xC8; // CSMatchStats_t
            public const nint m_iNumRoundKills = 0x188; // int32
            public const nint m_iNumRoundKillsHeadshots = 0x18C; // int32
            public const nint m_flTotalRoundDamageDealt = 0x190; // float32
        }
        // Parent: CBodyComponentSkeletonInstance
        // Field count: 1
        public static class CBodyComponentBaseAnimGraph {
            public const nint m_animationController = 0x4A0; // CBaseAnimGraphController
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
            public const nint m_fogName = 0x768; // CUtlSymbolLarge
            public const nint m_postProcessName = 0x770; // CUtlSymbolLarge
            public const nint m_colorCorrectionName = 0x778; // CUtlSymbolLarge
            public const nint m_bDisabled = 0x788; // bool
            public const nint m_bInFogVolumesList = 0x789; // bool
        }
        // Parent: CBaseModelEntity
        // Field count: 18
        public static class CFuncRotating {
            public const nint m_OnStopped = 0x768; // CEntityIOOutput
            public const nint m_OnStarted = 0x780; // CEntityIOOutput
            public const nint m_OnReachedStart = 0x798; // CEntityIOOutput
            public const nint m_localRotationVector = 0x7B0; // RotationVector
            public const nint m_flFanFriction = 0x7BC; // float32
            public const nint m_flAttenuation = 0x7C0; // float32
            public const nint m_flVolume = 0x7C4; // float32
            public const nint m_flTargetSpeed = 0x7C8; // float32
            public const nint m_flMaxSpeed = 0x7CC; // float32
            public const nint m_flBlockDamage = 0x7D0; // float32
            public const nint m_NoiseRunning = 0x7D8; // CUtlSymbolLarge
            public const nint m_bReversed = 0x7E0; // bool
            public const nint m_bAccelDecel = 0x7E1; // bool
            public const nint m_prevLocalAngles = 0x7F8; // QAngle
            public const nint m_angStart = 0x804; // QAngle
            public const nint m_bStopAtStartPos = 0x810; // bool
            public const nint m_vecClientOrigin = 0x814; // Vector
            public const nint m_vecClientAngles = 0x820; // QAngle
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
        public static class CPlayer_MovementServices_Humanoid {
            public const nint m_flStepSoundTime = 0x258; // float32
            public const nint m_flFallVelocity = 0x25C; // float32
            public const nint m_groundNormal = 0x260; // Vector
            public const nint m_flSurfaceFriction = 0x26C; // float32
            public const nint m_surfaceProps = 0x270; // CUtlStringToken
            public const nint m_nStepside = 0x280; // int32
            public const nint m_vecSmoothedVelocity = 0x284; // Vector
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
        // Parent: None
        // Field count: 2
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
        public static class CFuncMonitor {
            public const nint m_targetCamera = 0x788; // CUtlString
            public const nint m_nResolutionEnum = 0x790; // int32
            public const nint m_bRenderShadows = 0x794; // bool
            public const nint m_bUseUniqueColorTarget = 0x795; // bool
            public const nint m_brushModelName = 0x798; // CUtlString
            public const nint m_hTargetCamera = 0x7A0; // CHandle<CBaseEntity>
            public const nint m_bEnabled = 0x7A4; // bool
            public const nint m_bDraw3DSkybox = 0x7A5; // bool
            public const nint m_bStartEnabled = 0x7A6; // bool
        }
        // Parent: CBaseEntity
        // Field count: 3
        public static class CInfoVisibilityBox {
            public const nint m_nMode = 0x4AC; // int32
            public const nint m_vBoxSize = 0x4B0; // Vector
            public const nint m_bEnabled = 0x4BC; // bool
        }
        // Parent: CBaseToggle
        // Field count: 3
        public static class CGunTarget {
            public const nint m_on = 0x7E8; // bool
            public const nint m_hTargetEnt = 0x7EC; // CHandle<CBaseEntity>
            public const nint m_OnDeath = 0x7F0; // CEntityIOOutput
        }
        // Parent: CSoundEventEntity
        // Field count: 5
        public static class CSoundEventConeEntity {
            public const nint m_flEmitterAngle = 0x568; // float32
            public const nint m_flSweetSpotAngle = 0x56C; // float32
            public const nint m_flAttenMin = 0x570; // float32
            public const nint m_flAttenMax = 0x574; // float32
            public const nint m_iszParameterName = 0x578; // CUtlSymbolLarge
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
        public static class CDecoyProjectile {
            public const nint m_nDecoyShotTick = 0xA48; // int32
            public const nint m_shotsRemaining = 0xA4C; // int32
            public const nint m_fExpireTime = 0xA50; // GameTime_t
            public const nint m_decoyWeaponDefIndex = 0xA60; // uint16
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
        // Field count: 14
        public static class CPathMoverEntitySpawner {
            public const nint m_szSpawnTemplates = 0x4A8; // CUtlSymbolLarge[4]
            public const nint m_nSpawnIndex = 0x4C8; // int32
            public const nint m_hPathMover = 0x4CC; // CHandle<CPathMover>
            public const nint m_flSpawnFrequencySeconds = 0x4D0; // float32
            public const nint m_flSpawnFrequencyDistToNearestMover = 0x4D4; // float32
            public const nint m_mapSpawnedMoverTemplates = 0x4D8; // CUtlHashtable<CHandle<CFuncMover>,PathMoverEntitySpawn>
            public const nint m_nMaxActive = 0x4F8; // int32
            public const nint m_nSpawnNum = 0x4FC; // int32
            public const nint m_flLastSpawnTime = 0x500; // GameTime_t
            public const nint m_bEnabled = 0x504; // bool
            public const nint m_bDestroyMoverOnArrivedAtEnd = 0x505; // bool
            public const nint m_vecQueuedRemovals = 0x508; // CUtlVector<CHandle<CFuncMover>>
            public const nint m_OnTemplateSpawned = 0x520; // CEntityIOOutput
            public const nint m_OnTemplateGroupSpawned = 0x538; // CEntityIOOutput
        }
        // Parent: None
        // Field count: 14
        public static class CModelState {
            public const nint m_hModel = 0xA0; // CStrongHandle<InfoForResourceTypeCModel>
            public const nint m_ModelName = 0xA8; // CUtlSymbolLarge
            public const nint m_pVPhysicsAggregate = 0xE0; // IPhysAggregateInstance*
            public const nint m_flRootBoneOffset_x = 0xE8; // float32
            public const nint m_flRootBoneOffset_y = 0xEC; // float32
            public const nint m_flRootBoneOffset_z = 0xF0; // float32
            public const nint m_nRootBoneOffsetResetSerialNumber = 0xF4; // uint8
            public const nint m_bClientClothCreationSuppressed = 0xF5; // bool
            public const nint m_nAnimStateNoInterpSerialNumber = 0x1A0; // uint8
            public const nint m_MeshGroupMask = 0x1A8; // uint64
            public const nint m_nBodyGroupChoices = 0x1F8; // CNetworkUtlVectorBase<int32>
            public const nint m_nIdealMotionType = 0x242; // int8
            public const nint m_nForceLOD = 0x243; // int8
            public const nint m_nClothUpdateFlags = 0x244; // int8
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
        // Parent: None
        // Field count: 17
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
        public static class CCSWeaponBaseGun {
            public const nint m_zoomLevel = 0x1030; // int32
            public const nint m_iBurstShotsRemaining = 0x1034; // int32
            public const nint m_silencedModelIndex = 0x1040; // int32
            public const nint m_inPrecache = 0x1044; // bool
            public const nint m_bNeedsBoltAction = 0x1045; // bool
            public const nint m_nRevolverCylinderIdx = 0x1048; // int32
            public const nint m_bSkillReloadAvailable = 0x104C; // bool
            public const nint m_bSkillReloadLiftedReloadKey = 0x104D; // bool
            public const nint m_bSkillBoltInterruptAvailable = 0x104E; // bool
            public const nint m_bSkillBoltLiftedFireKey = 0x104F; // bool
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
            public const nint m_OutValue = 0x4B8; // CEntityOutputTemplate<float32>
            public const nint m_OnGetValue = 0x4D8; // CEntityOutputTemplate<float32>
            public const nint m_OnHitMin = 0x4F8; // CEntityIOOutput
            public const nint m_OnHitMax = 0x510; // CEntityIOOutput
            public const nint m_OnChangedFromMin = 0x528; // CEntityIOOutput
            public const nint m_OnChangedFromMax = 0x540; // CEntityIOOutput
        }
        // Parent: None
        // Field count: 1
        public static class CCSGameModeRules_ArmsRace {
            public const nint m_WeaponSequence = 0x30; // CNetworkUtlVectorBase<CUtlString>
        }
        // Parent: CAttributeManager
        // Field count: 1
        public static class CAttributeContainer {
            public const nint m_Item = 0x50; // CEconItemView
        }
        // Parent: CServerOnlyModelEntity
        // Field count: 1
        public static class CCSPlace {
            public const nint m_name = 0x780; // CUtlSymbolLarge
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
        public static class CEnvDecal {
            public const nint m_hDecalMaterial = 0x768; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_flWidth = 0x770; // float32
            public const nint m_flHeight = 0x774; // float32
            public const nint m_flDepth = 0x778; // float32
            public const nint m_nRenderOrder = 0x77C; // uint32
            public const nint m_bProjectOnWorld = 0x780; // bool
            public const nint m_bProjectOnCharacters = 0x781; // bool
            public const nint m_bProjectOnWater = 0x782; // bool
            public const nint m_flDepthSortBias = 0x784; // float32
        }
        // Parent: CBaseEntity
        // Field count: 18
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
        public static class CBodyComponentSkeletonInstance {
            public const nint m_skeletonInstance = 0x80; // CSkeletonInstance
        }
        // Parent: CItem
        // Field count: 32
        public static class CItemGeneric {
            public const nint m_bHasTriggerRadius = 0x9F4; // bool
            public const nint m_bHasPickupRadius = 0x9F5; // bool
            public const nint m_flPickupRadiusSqr = 0x9F8; // float32
            public const nint m_flTriggerRadiusSqr = 0x9FC; // float32
            public const nint m_flLastPickupCheck = 0xA00; // GameTime_t
            public const nint m_bPlayerCounterListenerAdded = 0xA04; // bool
            public const nint m_bPlayerInTriggerRadius = 0xA05; // bool
            public const nint m_hSpawnParticleEffect = 0xA08; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
            public const nint m_pAmbientSoundEffect = 0xA10; // CUtlSymbolLarge
            public const nint m_bAutoStartAmbientSound = 0xA18; // bool
            public const nint m_pSpawnScriptFunction = 0xA20; // CUtlSymbolLarge
            public const nint m_hPickupParticleEffect = 0xA28; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
            public const nint m_pPickupSoundEffect = 0xA30; // CUtlSymbolLarge
            public const nint m_pPickupScriptFunction = 0xA38; // CUtlSymbolLarge
            public const nint m_hTimeoutParticleEffect = 0xA40; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
            public const nint m_pTimeoutSoundEffect = 0xA48; // CUtlSymbolLarge
            public const nint m_pTimeoutScriptFunction = 0xA50; // CUtlSymbolLarge
            public const nint m_pPickupFilterName = 0xA58; // CUtlSymbolLarge
            public const nint m_hPickupFilter = 0xA60; // CHandle<CBaseFilter>
            public const nint m_OnPickup = 0xA68; // CEntityIOOutput
            public const nint m_OnTimeout = 0xA80; // CEntityIOOutput
            public const nint m_OnTriggerStartTouch = 0xA98; // CEntityIOOutput
            public const nint m_OnTriggerTouch = 0xAB0; // CEntityIOOutput
            public const nint m_OnTriggerEndTouch = 0xAC8; // CEntityIOOutput
            public const nint m_pAllowPickupScriptFunction = 0xAE0; // CUtlSymbolLarge
            public const nint m_flPickupRadius = 0xAE8; // float32
            public const nint m_flTriggerRadius = 0xAEC; // float32
            public const nint m_pTriggerSoundEffect = 0xAF0; // CUtlSymbolLarge
            public const nint m_bGlowWhenInTrigger = 0xAF8; // bool
            public const nint m_glowColor = 0xAF9; // Color
            public const nint m_bUseable = 0xAFD; // bool
            public const nint m_hTriggerHelper = 0xB00; // CHandle<CItemGenericTriggerHelper>
        }
        // Parent: CBaseEntity
        // Field count: 44
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
            public const nint m_Position = 0x598; // CEntityOutputTemplate<float32>
            public const nint m_PositionDelta = 0x5B8; // CEntityOutputTemplate<float32>
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
        // Field count: 31
        public static class CRagdollProp {
            public const nint m_ragdoll = 0x950; // ragdoll_t
            public const nint m_bStartDisabled = 0x9A0; // bool
            public const nint m_ragEnabled = 0x9A8; // CNetworkUtlVectorBase<bool>
            public const nint m_ragPos = 0x9C0; // CNetworkUtlVectorBase<Vector>
            public const nint m_ragAngles = 0x9D8; // CNetworkUtlVectorBase<QAngle>
            public const nint m_lastUpdateTickCount = 0x9F0; // uint32
            public const nint m_allAsleep = 0x9F4; // bool
            public const nint m_bFirstCollisionAfterLaunch = 0x9F5; // bool
            public const nint m_nNavObstacleType = 0x9F8; // INavObstacle::NavObstacleType_t
            public const nint m_bUpdateNavWhenMoving = 0x9FC; // bool
            public const nint m_bForceNavObstacleCut = 0x9FD; // bool
            public const nint m_bAttachedToReferenceFrame = 0x9FE; // bool
            public const nint m_hDamageEntity = 0xA00; // CHandle<CBaseEntity>
            public const nint m_hKiller = 0xA04; // CHandle<CBaseEntity>
            public const nint m_hPhysicsAttacker = 0xA08; // CHandle<CBasePlayerPawn>
            public const nint m_flLastPhysicsInfluenceTime = 0xA0C; // GameTime_t
            public const nint m_flFadeOutStartTime = 0xA10; // GameTime_t
            public const nint m_flFadeTime = 0xA14; // float32
            public const nint m_vecLastOrigin = 0xA18; // VectorWS
            public const nint m_flAwakeTime = 0xA24; // GameTime_t
            public const nint m_flLastOriginChangeTime = 0xA28; // GameTime_t
            public const nint m_strOriginClassName = 0xA30; // CUtlSymbolLarge
            public const nint m_strSourceClassName = 0xA38; // CUtlSymbolLarge
            public const nint m_bHasBeenPhysgunned = 0xA40; // bool
            public const nint m_bAllowStretch = 0xA41; // bool
            public const nint m_flBlendWeight = 0xA44; // float32
            public const nint m_flDefaultFadeScale = 0xA48; // float32
            public const nint m_ragdollMins = 0xA50; // CUtlVector<Vector>
            public const nint m_ragdollMaxs = 0xA68; // CUtlVector<Vector>
            public const nint m_bShouldDeleteActivationRecord = 0xA80; // bool
            public const nint m_vecNavObstacles = 0xA98; // CUtlVector<INavObstacle*>
        }
        // Parent: CEntityComponent
        // Field count: 1
        public static class CScriptComponent {
            public const nint m_scriptClassName = 0x30; // CUtlSymbolLarge
        }
        // Parent: CBasePlatTrain
        // Field count: 6
        public static class CFuncTrain {
            public const nint m_hCurrentTarget = 0x810; // CHandle<CBaseEntity>
            public const nint m_activated = 0x814; // bool
            public const nint m_hEnemy = 0x818; // CHandle<CBaseEntity>
            public const nint m_flBlockDamage = 0x81C; // float32
            public const nint m_flNextBlockTime = 0x820; // GameTime_t
            public const nint m_iszLastTarget = 0x828; // CUtlSymbolLarge
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
            public const nint m_LegacyTeamNum = 0x8C8; // int32
        }
        // Parent: CPointEntity
        // Field count: 2
        public static class CInfoChoreoAnchor {
            public const nint m_vecTargetEntries = 0x4A8; // CUtlVector<CInfoChoreoAnchorPosition>
            public const nint m_vecTargetWarps = 0x4C0; // CUtlVector<CInfoChoreoAnchorPosition>
        }
        // Parent: None
        // Field count: 0
        public static class DestructiblePartDamageRequestAPI {
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
        // Parent: CCSGO_EndOfMatchLineupEndpoint
        // Field count: 0
        public static class CCSGO_EndOfMatchLineupStart {
        }
        // Parent: CBaseFilter
        // Field count: 1
        public static class FilterDamageType {
            public const nint m_iDamageType = 0x4E0; // int32
        }
        // Parent: CBaseEntity
        // Field count: 26
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
        // Parent: None
        // Field count: 2
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
            public const nint m_action = 0x88; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
            public const nint m_bActionReset = 0xA0; // CAnimGraph2ParamOptionalRef<bool>
            public const nint m_flWeaponActionSpeedScale = 0xB8; // CAnimGraph2ParamOptionalRef<float32>
            public const nint m_weaponCategory = 0xD0; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
            public const nint m_weaponType = 0xE8; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
            public const nint m_weaponExtraInfo = 0x100; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
            public const nint m_flWeaponAmmo = 0x118; // CAnimGraph2ParamOptionalRef<float32>
            public const nint m_flWeaponAmmoMax = 0x130; // CAnimGraph2ParamOptionalRef<float32>
            public const nint m_flWeaponAmmoReserve = 0x148; // CAnimGraph2ParamOptionalRef<float32>
            public const nint m_bWeaponIsSilenced = 0x160; // CAnimGraph2ParamOptionalRef<bool>
            public const nint m_flWeaponIronsightAmount = 0x178; // CAnimGraph2ParamOptionalRef<float32>
            public const nint m_bIsUsingLegacyModel = 0x190; // CAnimGraph2ParamOptionalRef<bool>
            public const nint m_idleVariation = 0x1A8; // CAnimGraph2ParamOptionalRef<float32>
            public const nint m_deployVariation = 0x1C0; // CAnimGraph2ParamOptionalRef<float32>
            public const nint m_attackType = 0x1D8; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
            public const nint m_attackThrowStrength = 0x1F0; // CAnimGraph2ParamOptionalRef<float32>
            public const nint m_flAttackVariation = 0x208; // CAnimGraph2ParamOptionalRef<float32>
            public const nint m_inspectVariation = 0x220; // CAnimGraph2ParamOptionalRef<float32>
            public const nint m_inspectExtraInfo = 0x238; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
            public const nint m_reloadStage = 0x250; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
        }
        // Parent: None
        // Field count: 20
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
        }
        // Parent: CBaseModelEntity
        // Field count: 10
        public static class CEntityDissolve {
            public const nint m_flFadeInStart = 0x768; // float32
            public const nint m_flFadeInLength = 0x76C; // float32
            public const nint m_flFadeOutModelStart = 0x770; // float32
            public const nint m_flFadeOutModelLength = 0x774; // float32
            public const nint m_flFadeOutStart = 0x778; // float32
            public const nint m_flFadeOutLength = 0x77C; // float32
            public const nint m_flStartTime = 0x780; // GameTime_t
            public const nint m_nDissolveType = 0x784; // EntityDisolveType_t
            public const nint m_vDissolverOrigin = 0x788; // Vector
            public const nint m_nMagnitude = 0x794; // uint32
        }
        // Parent: None
        // Field count: 189
        public static class CCSGameRules {
            public const nint m_bFreezePeriod = 0xD8; // bool
            public const nint m_bWarmupPeriod = 0xD9; // bool
            public const nint m_fWarmupPeriodEnd = 0xDC; // GameTime_t
            public const nint m_fWarmupPeriodStart = 0xE0; // GameTime_t
            public const nint m_bTerroristTimeOutActive = 0xE4; // bool
            public const nint m_bCTTimeOutActive = 0xE5; // bool
            public const nint m_flTerroristTimeOutRemaining = 0xE8; // float32
            public const nint m_flCTTimeOutRemaining = 0xEC; // float32
            public const nint m_nTerroristTimeOuts = 0xF0; // int32
            public const nint m_nCTTimeOuts = 0xF4; // int32
            public const nint m_bTechnicalTimeOut = 0xF8; // bool
            public const nint m_bMatchWaitingForResume = 0xF9; // bool
            public const nint m_iFreezeTime = 0xFC; // int32
            public const nint m_iRoundTime = 0x100; // int32
            public const nint m_fMatchStartTime = 0x104; // float32
            public const nint m_fRoundStartTime = 0x108; // GameTime_t
            public const nint m_flRestartRoundTime = 0x10C; // GameTime_t
            public const nint m_bGameRestart = 0x110; // bool
            public const nint m_flGameStartTime = 0x114; // float32
            public const nint m_timeUntilNextPhaseStarts = 0x118; // float32
            public const nint m_gamePhase = 0x11C; // int32
            public const nint m_totalRoundsPlayed = 0x120; // int32
            public const nint m_nRoundsPlayedThisPhase = 0x124; // int32
            public const nint m_nOvertimePlaying = 0x128; // int32
            public const nint m_iHostagesRemaining = 0x12C; // int32
            public const nint m_bAnyHostageReached = 0x130; // bool
            public const nint m_bMapHasBombTarget = 0x131; // bool
            public const nint m_bMapHasRescueZone = 0x132; // bool
            public const nint m_bMapHasBuyZone = 0x133; // bool
            public const nint m_bIsQueuedMatchmaking = 0x134; // bool
            public const nint m_nQueuedMatchmakingMode = 0x138; // int32
            public const nint m_bIsValveDS = 0x13C; // bool
            public const nint m_bLogoMap = 0x13D; // bool
            public const nint m_bPlayAllStepSoundsOnServer = 0x13E; // bool
            public const nint m_iSpectatorSlotCount = 0x140; // int32
            public const nint m_MatchDevice = 0x144; // int32
            public const nint m_bHasMatchStarted = 0x148; // bool
            public const nint m_nNextMapInMapgroup = 0x14C; // int32
            public const nint m_szTournamentEventName = 0x150; // char[512]
            public const nint m_szTournamentEventStage = 0x350; // char[512]
            public const nint m_szMatchStatTxt = 0x550; // char[512]
            public const nint m_szTournamentPredictionsTxt = 0x750; // char[512]
            public const nint m_nTournamentPredictionsPct = 0x950; // int32
            public const nint m_flCMMItemDropRevealStartTime = 0x954; // GameTime_t
            public const nint m_flCMMItemDropRevealEndTime = 0x958; // GameTime_t
            public const nint m_bIsDroppingItems = 0x95C; // bool
            public const nint m_bIsQuestEligible = 0x95D; // bool
            public const nint m_bIsHltvActive = 0x95E; // bool
            public const nint m_bBombPlanted = 0x95F; // bool
            public const nint m_arrProhibitedItemIndices = 0x960; // uint16[100]
            public const nint m_arrTournamentActiveCasterAccounts = 0xA28; // uint32[4]
            public const nint m_numBestOfMaps = 0xA38; // int32
            public const nint m_nHalloweenMaskListSeed = 0xA3C; // int32
            public const nint m_bBombDropped = 0xA40; // bool
            public const nint m_iRoundWinStatus = 0xA44; // int32
            public const nint m_eRoundWinReason = 0xA48; // int32
            public const nint m_bTCantBuy = 0xA4C; // bool
            public const nint m_bCTCantBuy = 0xA4D; // bool
            public const nint m_iMatchStats_RoundResults = 0xA50; // int32[30]
            public const nint m_iMatchStats_PlayersAlive_CT = 0xAC8; // int32[30]
            public const nint m_iMatchStats_PlayersAlive_T = 0xB40; // int32[30]
            public const nint m_TeamRespawnWaveTimes = 0xBB8; // float32[32]
            public const nint m_flNextRespawnWave = 0xC38; // GameTime_t[32]
            public const nint m_vMinimapMins = 0xCB8; // Vector
            public const nint m_vMinimapMaxs = 0xCC4; // Vector
            public const nint m_MinimapVerticalSectionHeights = 0xCD0; // float32[8]
            public const nint m_ullLocalMatchID = 0xCF0; // uint64
            public const nint m_nEndMatchMapGroupVoteTypes = 0xCF8; // int32[10]
            public const nint m_nEndMatchMapGroupVoteOptions = 0xD20; // int32[10]
            public const nint m_nEndMatchMapVoteWinner = 0xD48; // int32
            public const nint m_iNumConsecutiveCTLoses = 0xD4C; // int32
            public const nint m_iNumConsecutiveTerroristLoses = 0xD50; // int32
            public const nint m_bHasHostageBeenTouched = 0xD70; // bool
            public const nint m_flIntermissionStartTime = 0xD74; // GameTime_t
            public const nint m_flIntermissionEndTime = 0xD78; // GameTime_t
            public const nint m_bLevelInitialized = 0xD7C; // bool
            public const nint m_iTotalRoundsPlayed = 0xD80; // int32
            public const nint m_iUnBalancedRounds = 0xD84; // int32
            public const nint m_endMatchOnRoundReset = 0xD88; // bool
            public const nint m_endMatchOnThink = 0xD89; // bool
            public const nint m_iNumTerrorist = 0xD8C; // int32
            public const nint m_iNumCT = 0xD90; // int32
            public const nint m_iNumSpawnableTerrorist = 0xD94; // int32
            public const nint m_iNumSpawnableCT = 0xD98; // int32
            public const nint m_arrSelectedHostageSpawnIndices = 0xDA0; // CUtlVector<int32>
            public const nint m_nSpawnPointsRandomSeed = 0xDB8; // int32
            public const nint m_bFirstConnected = 0xDBC; // bool
            public const nint m_bCompleteReset = 0xDBD; // bool
            public const nint m_bPickNewTeamsOnReset = 0xDBE; // bool
            public const nint m_bScrambleTeamsOnRestart = 0xDBF; // bool
            public const nint m_bSwapTeamsOnRestart = 0xDC0; // bool
            public const nint m_nEndMatchTiedVotes = 0xDC8; // CUtlVector<int32>
            public const nint m_bNeedToAskPlayersForContinueVote = 0xDE4; // bool
            public const nint m_numQueuedMatchmakingAccounts = 0xDE8; // uint32
            public const nint m_fAvgPlayerRank = 0xDEC; // float32
            public const nint m_pQueuedMatchmakingReservationString = 0xDF0; // char*
            public const nint m_numTotalTournamentDrops = 0xDF8; // uint32
            public const nint m_numSpectatorsCountMax = 0xDFC; // uint32
            public const nint m_numSpectatorsCountMaxTV = 0xE00; // uint32
            public const nint m_numSpectatorsCountMaxLnk = 0xE04; // uint32
            public const nint m_nCTsAliveAtFreezetimeEnd = 0xE10; // int32
            public const nint m_nTerroristsAliveAtFreezetimeEnd = 0xE14; // int32
            public const nint m_bForceTeamChangeSilent = 0xE18; // bool
            public const nint m_bLoadingRoundBackupData = 0xE19; // bool
            public const nint m_nMatchInfoShowType = 0xE50; // int32
            public const nint m_flMatchInfoDecidedTime = 0xE54; // float32
            public const nint mTeamDMLastWinningTeamNumber = 0xE70; // int32
            public const nint mTeamDMLastThinkTime = 0xE74; // float32
            public const nint m_flTeamDMLastAnnouncementTime = 0xE78; // float32
            public const nint m_iAccountTerrorist = 0xE7C; // int32
            public const nint m_iAccountCT = 0xE80; // int32
            public const nint m_iSpawnPointCount_Terrorist = 0xE84; // int32
            public const nint m_iSpawnPointCount_CT = 0xE88; // int32
            public const nint m_iMaxNumTerrorists = 0xE8C; // int32
            public const nint m_iMaxNumCTs = 0xE90; // int32
            public const nint m_iLoserBonusMostRecentTeam = 0xE94; // int32
            public const nint m_tmNextPeriodicThink = 0xE98; // float32
            public const nint m_bVoiceWonMatchBragFired = 0xE9C; // bool
            public const nint m_fWarmupNextChatNoticeTime = 0xEA0; // float32
            public const nint m_iHostagesRescued = 0xEA8; // int32
            public const nint m_iHostagesTouched = 0xEAC; // int32
            public const nint m_flNextHostageAnnouncement = 0xEB0; // float32
            public const nint m_bNoTerroristsKilled = 0xEB4; // bool
            public const nint m_bNoCTsKilled = 0xEB5; // bool
            public const nint m_bNoEnemiesKilled = 0xEB6; // bool
            public const nint m_bCanDonateWeapons = 0xEB7; // bool
            public const nint m_firstKillTime = 0xEBC; // float32
            public const nint m_firstBloodTime = 0xEC4; // float32
            public const nint m_hostageWasInjured = 0xEE0; // bool
            public const nint m_hostageWasKilled = 0xEE1; // bool
            public const nint m_bVoteCalled = 0xEF0; // bool
            public const nint m_bServerVoteOnReset = 0xEF1; // bool
            public const nint m_flVoteCheckThrottle = 0xEF4; // float32
            public const nint m_bBuyTimeEnded = 0xEF8; // bool
            public const nint m_nLastFreezeEndBeep = 0xEFC; // int32
            public const nint m_bTargetBombed = 0xF00; // bool
            public const nint m_bBombDefused = 0xF01; // bool
            public const nint m_bMapHasBombZone = 0xF02; // bool
            public const nint m_vecMainCTSpawnPos = 0xF50; // Vector
            public const nint m_CTSpawnPointsMasterList = 0xF60; // CUtlVector<CHandle<SpawnPoint>>
            public const nint m_TerroristSpawnPointsMasterList = 0xF78; // CUtlVector<CHandle<SpawnPoint>>
            public const nint m_bRespawningAllRespawnablePlayers = 0xF90; // bool
            public const nint m_iNextCTSpawnPoint = 0xF94; // int32
            public const nint m_flCTSpawnPointUsedTime = 0xF98; // float32
            public const nint m_iNextTerroristSpawnPoint = 0xF9C; // int32
            public const nint m_flTerroristSpawnPointUsedTime = 0xFA0; // float32
            public const nint m_CTSpawnPoints = 0xFA8; // CUtlVector<CHandle<SpawnPoint>>
            public const nint m_TerroristSpawnPoints = 0xFC0; // CUtlVector<CHandle<SpawnPoint>>
            public const nint m_bIsUnreservedGameServer = 0xFD8; // bool
            public const nint m_fAutobalanceDisplayTime = 0xFDC; // float32
            public const nint m_bAllowWeaponSwitch = 0x1018; // bool
            public const nint m_bRoundTimeWarningTriggered = 0x1019; // bool
            public const nint m_phaseChangeAnnouncementTime = 0x101C; // GameTime_t
            public const nint m_fNextUpdateTeamClanNamesTime = 0x1020; // float32
            public const nint m_flLastThinkTime = 0x1024; // GameTime_t
            public const nint m_fAccumulatedRoundOffDamage = 0x1028; // float32
            public const nint m_nShorthandedBonusLastEvalRound = 0x102C; // int32
            public const nint m_nMatchAbortedEarlyReason = 0x1078; // int32
            public const nint m_bHasTriggeredRoundStartMusic = 0x107C; // bool
            public const nint m_bSwitchingTeamsAtRoundReset = 0x107D; // bool
            public const nint m_pGameModeRules = 0x1098; // CCSGameModeRules*
            public const nint m_BtGlobalBlackboard = 0x10A0; // KeyValues3
            public const nint m_hPlayerResource = 0x1138; // CHandle<CBaseEntity>
            public const nint m_RetakeRules = 0x1140; // CRetakeGameRules
            public const nint m_arrTeamUniqueKillWeaponsMatch = 0x1330; // CUtlVector<int32>[4]
            public const nint m_bTeamLastKillUsedUniqueWeaponMatch = 0x1390; // bool[4]
            public const nint m_nMatchEndCount = 0x13B8; // uint8
            public const nint m_nTTeamIntroVariant = 0x13BC; // int32
            public const nint m_nCTTeamIntroVariant = 0x13C0; // int32
            public const nint m_bTeamIntroPeriod = 0x13C4; // bool
            public const nint m_fTeamIntroPeriodEnd = 0x13C8; // GameTime_t
            public const nint m_bPlayedTeamIntroVO = 0x13CC; // bool
            public const nint m_iRoundEndWinnerTeam = 0x13D0; // int32
            public const nint m_eRoundEndReason = 0x13D4; // int32
            public const nint m_bRoundEndShowTimerDefend = 0x13D8; // bool
            public const nint m_iRoundEndTimerTime = 0x13DC; // int32
            public const nint m_sRoundEndFunFactToken = 0x13E0; // CUtlString
            public const nint m_iRoundEndFunFactPlayerSlot = 0x13E8; // CPlayerSlot
            public const nint m_iRoundEndFunFactData1 = 0x13EC; // int32
            public const nint m_iRoundEndFunFactData2 = 0x13F0; // int32
            public const nint m_iRoundEndFunFactData3 = 0x13F4; // int32
            public const nint m_sRoundEndMessage = 0x13F8; // CUtlString
            public const nint m_iRoundEndPlayerCount = 0x1400; // int32
            public const nint m_bRoundEndNoMusic = 0x1404; // bool
            public const nint m_iRoundEndLegacy = 0x1408; // int32
            public const nint m_nRoundEndCount = 0x140C; // uint8
            public const nint m_iRoundStartRoundNumber = 0x1410; // int32
            public const nint m_nRoundStartCount = 0x1414; // uint8
            public const nint m_flLastPerfSampleTime = 0x5420; // float64
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
        public static class CBaseCSGrenadeProjectile {
            public const nint m_vInitialPosition = 0x9C0; // Vector
            public const nint m_vInitialVelocity = 0x9CC; // Vector
            public const nint m_nBounces = 0x9D8; // int32
            public const nint m_nExplodeEffectIndex = 0x9E0; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
            public const nint m_nExplodeEffectTickBegin = 0x9E8; // int32
            public const nint m_vecExplodeEffectOrigin = 0x9EC; // Vector
            public const nint m_flSpawnTime = 0x9F8; // GameTime_t
            public const nint m_unOGSExtraFlags = 0x9FC; // uint8
            public const nint m_bDetonationRecorded = 0x9FD; // bool
            public const nint m_nItemIndex = 0x9FE; // uint16
            public const nint m_vecOriginalSpawnLocation = 0xA00; // Vector
            public const nint m_flLastBounceSoundTime = 0xA0C; // GameTime_t
            public const nint m_vecGrenadeSpin = 0xA10; // RotationVector
            public const nint m_vecLastHitSurfaceNormal = 0xA1C; // Vector
            public const nint m_nTicksAtZeroVelocity = 0xA28; // int32
            public const nint m_bHasEverHitEnemy = 0xA2C; // bool
        }
        // Parent: CLogicalEntity
        // Field count: 14
        public static class CPhysConstraint {
            public const nint m_hJoint = 0x4A8; // IPhysicsJoint*
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
            public const nint m_nBounceLight = 0x128; // int32
            public const nint m_flBounceScale = 0x12C; // float32
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
        // Field count: 52
        public static class CCSWeaponBase {
            public const nint m_bRemoveable = 0xCB8; // bool
            public const nint m_bPlayerAmmoStockOnPickup = 0xCB9; // bool
            public const nint m_bRequireUseToTouch = 0xCBA; // bool
            public const nint m_iWeaponGameplayAnimState = 0xCBC; // WeaponGameplayAnimState
            public const nint m_flWeaponGameplayAnimStateTimestamp = 0xCC0; // GameTime_t
            public const nint m_flInspectCancelCompleteTime = 0xCC4; // GameTime_t
            public const nint m_bInspectPending = 0xCC8; // bool
            public const nint m_bInspectShouldLoop = 0xCC9; // bool
            public const nint m_nLastEmptySoundCmdNum = 0xCF4; // int32
            public const nint m_bFireOnEmpty = 0xD10; // bool
            public const nint m_OnPlayerPickup = 0xD18; // CEntityIOOutput
            public const nint m_weaponMode = 0xD30; // CSWeaponMode
            public const nint m_flTurningInaccuracyDelta = 0xD34; // float32
            public const nint m_vecTurningInaccuracyEyeDirLast = 0xD38; // Vector
            public const nint m_flTurningInaccuracy = 0xD44; // float32
            public const nint m_fAccuracyPenalty = 0xD48; // float32
            public const nint m_flLastAccuracyUpdateTime = 0xD4C; // GameTime_t
            public const nint m_fAccuracySmoothedForZoom = 0xD50; // float32
            public const nint m_iRecoilIndex = 0xD54; // int32
            public const nint m_flRecoilIndex = 0xD58; // float32
            public const nint m_bBurstMode = 0xD5C; // bool
            public const nint m_nPostponeFireReadyTicks = 0xD60; // GameTick_t
            public const nint m_flPostponeFireReadyFrac = 0xD64; // float32
            public const nint m_bInReload = 0xD68; // bool
            public const nint m_nDeployTick = 0xD6C; // GameTick_t
            public const nint m_flDroppedAtTime = 0xD70; // GameTime_t
            public const nint m_bIsHauledBack = 0xD78; // bool
            public const nint m_bSilencerOn = 0xD79; // bool
            public const nint m_flTimeSilencerSwitchComplete = 0xD7C; // GameTime_t
            public const nint m_flWeaponActionPlaybackRate = 0xD80; // float32
            public const nint m_iOriginalTeamNumber = 0xD84; // int32
            public const nint m_iMostRecentTeamNumber = 0xD88; // int32
            public const nint m_bDroppedNearBuyZone = 0xD8C; // bool
            public const nint m_flNextAttackRenderTimeOffset = 0xD90; // float32
            public const nint m_bCanBePickedUp = 0xDA8; // bool
            public const nint m_bUseCanOverrideNextOwnerTouchTime = 0xDA9; // bool
            public const nint m_nextOwnerTouchTime = 0xDAC; // GameTime_t
            public const nint m_nextPrevOwnerTouchTime = 0xDB0; // GameTime_t
            public const nint m_nextPrevOwnerUseTime = 0xDB8; // GameTime_t
            public const nint m_hPrevOwner = 0xDBC; // CHandle<CCSPlayerPawn>
            public const nint m_nDropTick = 0xDC0; // GameTick_t
            public const nint m_bWasActiveWeaponWhenDropped = 0xDC4; // bool
            public const nint m_donated = 0xDE4; // bool
            public const nint m_fLastShotTime = 0xDE8; // GameTime_t
            public const nint m_bWasOwnedByCT = 0xDEC; // bool
            public const nint m_bWasOwnedByTerrorist = 0xDED; // bool
            public const nint m_numRemoveUnownedWeaponThink = 0xDF0; // int32
            public const nint m_IronSightController = 0xE50; // CIronSightController
            public const nint m_iIronSightMode = 0xE68; // int32
            public const nint m_flLastLOSTraceFailureTime = 0xE6C; // GameTime_t
            public const nint m_flWatTickOffset = 0xE70; // float32
            public const nint m_flLastShakeTime = 0xE80; // GameTime_t
        }
        // Parent: CBaseClientUIEntity
        // Field count: 2
        public static class CPointClientUIDialog {
            public const nint m_hActivator = 0x8C8; // CHandle<CBaseEntity>
            public const nint m_bStartEnabled = 0x8CC; // bool
        }
        // Parent: CLogicalEntity
        // Field count: 4
        public static class CLogicLineToEntity {
            public const nint m_Line = 0x4A8; // CEntityOutputTemplate<Vector>
            public const nint m_SourceName = 0x4D0; // CUtlSymbolLarge
            public const nint m_StartEntity = 0x4D8; // CHandle<CBaseEntity>
            public const nint m_EndEntity = 0x4DC; // CHandle<CBaseEntity>
        }
        // Parent: CSoundAreaEntityBase
        // Field count: 1
        public static class CSoundAreaEntitySphere {
            public const nint m_flRadius = 0x4C8; // float32
        }
        // Parent: CPlayerPawnComponent
        // Field count: 4
        public static class CCSPlayer_ActionTrackingServices {
            public const nint m_hLastWeaponBeforeC4AutoSwitch = 0x1F8; // CHandle<CBasePlayerWeapon>
            public const nint m_bIsRescuing = 0x224; // bool
            public const nint m_weaponPurchasesThisMatch = 0x228; // WeaponPurchaseTracker_t
            public const nint m_weaponPurchasesThisRound = 0x298; // WeaponPurchaseTracker_t
        }
        // Parent: None
        // Field count: 0
        public static class CTestPulseIOComponent_API {
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
        // Parent: None
        // Field count: 13
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
        // Field count: 40
        public static class CBaseModelEntity {
            public const nint m_CRenderComponent = 0x4A8; // CRenderComponent*
            public const nint m_CHitboxComponent = 0x4B0; // CHitboxComponent
            public const nint m_pChoreoComponent = 0x4C8; // CChoreoComponent*
            public const nint m_nDestructiblePartInitialStateDestructed0 = 0x4D0; // HitGroup_t
            public const nint m_nDestructiblePartInitialStateDestructed1 = 0x4D4; // HitGroup_t
            public const nint m_nDestructiblePartInitialStateDestructed2 = 0x4D8; // HitGroup_t
            public const nint m_nDestructiblePartInitialStateDestructed3 = 0x4DC; // HitGroup_t
            public const nint m_nDestructiblePartInitialStateDestructed4 = 0x4E0; // HitGroup_t
            public const nint m_nDestructiblePartInitialStateDestructed0_PartIndex = 0x4E4; // int32
            public const nint m_nDestructiblePartInitialStateDestructed1_PartIndex = 0x4E8; // int32
            public const nint m_nDestructiblePartInitialStateDestructed2_PartIndex = 0x4EC; // int32
            public const nint m_nDestructiblePartInitialStateDestructed3_PartIndex = 0x4F0; // int32
            public const nint m_nDestructiblePartInitialStateDestructed4_PartIndex = 0x4F4; // int32
            public const nint m_bDestructiblePartInitialStateDestructed0_GenerateBreakpieces = 0x4F8; // bool
            public const nint m_bDestructiblePartInitialStateDestructed1_GenerateBreakpieces = 0x4F9; // bool
            public const nint m_bDestructiblePartInitialStateDestructed2_GenerateBreakpieces = 0x4FA; // bool
            public const nint m_bDestructiblePartInitialStateDestructed3_GenerateBreakpieces = 0x4FB; // bool
            public const nint m_bDestructiblePartInitialStateDestructed4_GenerateBreakpieces = 0x4FC; // bool
            public const nint m_pDestructiblePartsSystemComponent = 0x500; // CDestructiblePartsComponent*
            public const nint m_OnDestructibleHitGroupDamageLevelChanged = 0x508; // CEntityOutputTemplate<CBaseModelEntity::OnDamageLevelChangedArgs_t>
            public const nint m_flDissolveStartTime = 0x530; // GameTime_t
            public const nint m_OnIgnite = 0x538; // CEntityIOOutput
            public const nint m_nRenderMode = 0x550; // RenderMode_t
            public const nint m_nRenderFX = 0x551; // RenderFx_t
            public const nint m_bAllowFadeInView = 0x552; // bool
            public const nint m_clrRender = 0x570; // Color
            public const nint m_vecRenderAttributes = 0x578; // CUtlVectorEmbeddedNetworkVar<EntityRenderAttribute_t>
            public const nint m_bRenderToCubemaps = 0x5E0; // bool
            public const nint m_bNoInterpolate = 0x5E1; // bool
            public const nint m_Collision = 0x5E8; // CCollisionProperty
            public const nint m_Glow = 0x698; // CGlowProperty
            public const nint m_flGlowBackfaceMult = 0x6F0; // float32
            public const nint m_fadeMinDist = 0x6F4; // float32
            public const nint m_fadeMaxDist = 0x6F8; // float32
            public const nint m_flFadeScale = 0x6FC; // float32
            public const nint m_flShadowStrength = 0x700; // float32
            public const nint m_nObjectCulling = 0x704; // uint8
            public const nint m_bodyGroupChoices = 0x708; // CUtlOrderedMap<CGlobalSymbol,int32>
            public const nint m_vecViewOffset = 0x730; // CNetworkViewOffsetVector
            public const nint m_bvDisabledHitGroups = 0x760; // uint32[1]
        }
        // Parent: None
        // Field count: 14
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
        // Parent: None
        // Field count: 11
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
            public const nint m_hOwner = 0x7C0; // CHandle<CBaseEntity>
            public const nint m_bHadOwner = 0x7C4; // bool
            public const nint m_flPostSpeakDelay = 0x7C8; // float32
            public const nint m_flPreDelay = 0x7CC; // float32
            public const nint m_bIsBackground = 0x7D0; // bool
            public const nint m_bRemoveOnCompletion = 0x7D1; // bool
            public const nint m_hTarget = 0x7D4; // CHandle<CBaseEntity>
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
            public const nint m_Always = 0xC0; // CPulse_OutflowConnection
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
        // Parent: None
        // Field count: 11
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
            public const nint m_matPanelTransform = 0x768; // matrix3x4_t
            public const nint m_matPanelTransformWsTemp = 0x798; // matrix3x4_t
            public const nint m_vecShatterGlassShards = 0x7C8; // CUtlVector<uint32>
            public const nint m_PanelSize = 0x7E0; // Vector2D
            public const nint m_flLastShatterSoundEmitTime = 0x7E8; // GameTime_t
            public const nint m_flLastCleanupTime = 0x7EC; // GameTime_t
            public const nint m_flInitAtTime = 0x7F0; // GameTime_t
            public const nint m_flGlassThickness = 0x7F4; // float32
            public const nint m_flSpawnInvulnerability = 0x7F8; // float32
            public const nint m_bBreakSilent = 0x7FC; // bool
            public const nint m_bBreakShardless = 0x7FD; // bool
            public const nint m_bBroken = 0x7FE; // bool
            public const nint m_bGlassNavIgnore = 0x7FF; // bool
            public const nint m_bGlassInFrame = 0x800; // bool
            public const nint m_bStartBroken = 0x801; // bool
            public const nint m_iInitialDamageType = 0x802; // uint8
            public const nint m_szDamagePositioningEntityName01 = 0x808; // CUtlSymbolLarge
            public const nint m_szDamagePositioningEntityName02 = 0x810; // CUtlSymbolLarge
            public const nint m_szDamagePositioningEntityName03 = 0x818; // CUtlSymbolLarge
            public const nint m_szDamagePositioningEntityName04 = 0x820; // CUtlSymbolLarge
            public const nint m_vInitialDamagePositions = 0x828; // CUtlVector<Vector>
            public const nint m_vExtraDamagePositions = 0x840; // CUtlVector<Vector>
            public const nint m_vInitialPanelVertices = 0x858; // CUtlVector<Vector4D>
            public const nint m_OnBroken = 0x870; // CEntityIOOutput
            public const nint m_iSurfaceType = 0x888; // uint8
            public const nint m_hMaterialDamageBase = 0x890; // CStrongHandle<InfoForResourceTypeIMaterial2>
        }
        // Parent: CPointEntity
        // Field count: 0
        public static class CNavWalkable {
        }
        // Parent: CBaseAnimGraph
        // Field count: 27
        public static class CPlantedC4 {
            public const nint m_bBombTicking = 0x948; // bool
            public const nint m_flC4Blow = 0x94C; // GameTime_t
            public const nint m_nBombSite = 0x950; // int32
            public const nint m_nSourceSoundscapeHash = 0x954; // int32
            public const nint m_bAbortDetonationBecauseWorldIsFrozen = 0x958; // bool
            public const nint m_AttributeManager = 0x960; // CAttributeContainer
            public const nint m_OnBombDefused = 0xC58; // CEntityIOOutput
            public const nint m_OnBombBeginDefuse = 0xC70; // CEntityIOOutput
            public const nint m_OnBombDefuseAborted = 0xC88; // CEntityIOOutput
            public const nint m_bCannotBeDefused = 0xCA0; // bool
            public const nint m_entitySpottedState = 0xCA8; // EntitySpottedState_t
            public const nint m_nSpotRules = 0xCC0; // int32
            public const nint m_bHasExploded = 0xCC4; // bool
            public const nint m_bBombDefused = 0xCC5; // bool
            public const nint m_bTrainingPlacedByPlayer = 0xCC6; // bool
            public const nint m_flTimerLength = 0xCC8; // float32
            public const nint m_bBeingDefused = 0xCCC; // bool
            public const nint m_fLastDefuseTime = 0xCD4; // GameTime_t
            public const nint m_flDefuseLength = 0xCDC; // float32
            public const nint m_flDefuseCountDown = 0xCE0; // GameTime_t
            public const nint m_hBombDefuser = 0xCE4; // CHandle<CCSPlayerPawn>
            public const nint m_iProgressBarTime = 0xCE8; // int32
            public const nint m_bVoiceAlertFired = 0xCEC; // bool
            public const nint m_bVoiceAlertPlayed = 0xCED; // bool[4]
            public const nint m_flNextBotBeepTime = 0xCF4; // GameTime_t
            public const nint m_angCatchUpToPlayerEye = 0xCFC; // QAngle
            public const nint m_flLastSpinDetectionTime = 0xD08; // GameTime_t
        }
        // Parent: CEnvSoundscapeProxy
        // Field count: 0
        public static class CEnvSoundscapeProxyAlias_snd_soundscape_proxy {
        }
        // Parent: CBaseEntity
        // Field count: 14
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
        // Parent: None
        // Field count: 86
        public static class CBaseEntity {
            public const nint m_CBodyComponent = 0x30; // CBodyComponent*
            public const nint m_NetworkTransmitComponent = 0x38; // CNetworkTransmitComponent
            public const nint m_aThinkFunctions = 0x248; // CUtlVector<thinkfunc_t>
            public const nint m_iCurrentThinkContext = 0x260; // int32
            public const nint m_nLastThinkTick = 0x264; // GameTick_t
            public const nint m_bDisabledContextThinks = 0x268; // bool
            public const nint m_isSteadyState = 0x278; // CTypedBitVec<64>
            public const nint m_lastNetworkChange = 0x280; // float32
            public const nint m_think = 0x288; // BASEPTR
            public const nint m_ResponseContexts = 0x290; // CUtlVector<ResponseContext_t>
            public const nint m_iszResponseContext = 0x2A8; // CUtlSymbolLarge
            public const nint m_pfnTouch = 0x2B0; // ENTITYFUNCPTR
            public const nint m_pfnUse = 0x2B8; // USEPTR
            public const nint m_pfnBlocked = 0x2C0; // ENTITYFUNCPTR
            public const nint m_pfnMoveDone = 0x2C8; // BASEPTR
            public const nint m_iHealth = 0x2D0; // int32
            public const nint m_iMaxHealth = 0x2D4; // int32
            public const nint m_lifeState = 0x2D8; // uint8
            public const nint m_flDamageAccumulator = 0x2DC; // float32
            public const nint m_bTakesDamage = 0x2E0; // bool
            public const nint m_nTakeDamageFlags = 0x2E8; // TakeDamageFlags_t
            public const nint m_nPlatformType = 0x2F0; // EntityPlatformTypes_t
            public const nint m_MoveCollide = 0x2F2; // MoveCollide_t
            public const nint m_MoveType = 0x2F3; // MoveType_t
            public const nint m_nPreviouslySetMoveType = 0x2F4; // MoveType_t
            public const nint m_nActualMoveType = 0x2F5; // MoveType_t
            public const nint m_nWaterTouch = 0x2F6; // uint8
            public const nint m_nSlimeTouch = 0x2F7; // uint8
            public const nint m_bRestoreInHierarchy = 0x2F8; // bool
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
            public const nint m_vPrevVPhysicsUpdatePos = 0x338; // VectorWS
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
        // Parent: None
        // Field count: 2
        public static class CGameSceneNodeHandle {
            public const nint m_hOwner = 0x8; // CEntityHandle
            public const nint m_name = 0xC; // CUtlStringToken
        }
        // Parent: CMarkupVolumeTagged
        // Field count: 4
        public static class CMarkupVolumeWithRef {
            public const nint m_bUseRef = 0x7B0; // bool
            public const nint m_vRefPosEntitySpace = 0x7B4; // Vector
            public const nint m_vRefPosWorldSpace = 0x7C0; // VectorWS
            public const nint m_flRefDot = 0x7CC; // float32
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
            public const nint m_end = 0x818; // QAngle
            public const nint m_start = 0x824; // QAngle
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
        public static class CSpotlightEnd {
            public const nint m_flLightScale = 0x768; // float32
            public const nint m_Radius = 0x76C; // float32
            public const nint m_vSpotlightDir = 0x770; // Vector
            public const nint m_vSpotlightOrg = 0x77C; // VectorWS
        }
        // Parent: CBaseModelEntity
        // Field count: 12
        public static class CEnvSky {
            public const nint m_hSkyMaterial = 0x768; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_hSkyMaterialLightingOnly = 0x770; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_bStartDisabled = 0x778; // bool
            public const nint m_vTintColor = 0x779; // Color
            public const nint m_vTintColorLightingOnly = 0x77D; // Color
            public const nint m_flBrightnessScale = 0x784; // float32
            public const nint m_nFogType = 0x788; // int32
            public const nint m_flFogMinStart = 0x78C; // float32
            public const nint m_flFogMinEnd = 0x790; // float32
            public const nint m_flFogMaxStart = 0x794; // float32
            public const nint m_flFogMaxEnd = 0x798; // float32
            public const nint m_bEnabled = 0x79C; // bool
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
            public const nint m_TargetDir = 0x500; // CEntityOutputTemplate<Vector>
            public const nint m_FacingPercentage = 0x528; // CEntityOutputTemplate<float32>
        }
        // Parent: CBaseEntity
        // Field count: 11
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
        // Field count: 49
        public static class CGenericConstraint {
            public const nint m_bPlaceAnchorsAtConstraintTransform = 0x510; // bool
            public const nint m_nLinearMotionX = 0x514; // JointMotion_t
            public const nint m_nLinearMotionY = 0x518; // JointMotion_t
            public const nint m_nLinearMotionZ = 0x51C; // JointMotion_t
            public const nint m_flLinearFrequencyX = 0x520; // float32
            public const nint m_flLinearFrequencyY = 0x524; // float32
            public const nint m_flLinearFrequencyZ = 0x528; // float32
            public const nint m_flLinearDampingRatioX = 0x52C; // float32
            public const nint m_flLinearDampingRatioY = 0x530; // float32
            public const nint m_flLinearDampingRatioZ = 0x534; // float32
            public const nint m_flMaxLinearImpulseX = 0x538; // float32
            public const nint m_flMaxLinearImpulseY = 0x53C; // float32
            public const nint m_flMaxLinearImpulseZ = 0x540; // float32
            public const nint m_flBreakAfterTimeX = 0x544; // float32
            public const nint m_flBreakAfterTimeY = 0x548; // float32
            public const nint m_flBreakAfterTimeZ = 0x54C; // float32
            public const nint m_flBreakAfterTimeStartTimeX = 0x550; // GameTime_t
            public const nint m_flBreakAfterTimeStartTimeY = 0x554; // GameTime_t
            public const nint m_flBreakAfterTimeStartTimeZ = 0x558; // GameTime_t
            public const nint m_flBreakAfterTimeThresholdX = 0x55C; // float32
            public const nint m_flBreakAfterTimeThresholdY = 0x560; // float32
            public const nint m_flBreakAfterTimeThresholdZ = 0x564; // float32
            public const nint m_flNotifyForceX = 0x568; // float32
            public const nint m_flNotifyForceY = 0x56C; // float32
            public const nint m_flNotifyForceZ = 0x570; // float32
            public const nint m_flNotifyForceMinTimeX = 0x574; // float32
            public const nint m_flNotifyForceMinTimeY = 0x578; // float32
            public const nint m_flNotifyForceMinTimeZ = 0x57C; // float32
            public const nint m_flNotifyForceLastTimeX = 0x580; // GameTime_t
            public const nint m_flNotifyForceLastTimeY = 0x584; // GameTime_t
            public const nint m_flNotifyForceLastTimeZ = 0x588; // GameTime_t
            public const nint m_bAxisNotifiedX = 0x58C; // bool
            public const nint m_bAxisNotifiedY = 0x58D; // bool
            public const nint m_bAxisNotifiedZ = 0x58E; // bool
            public const nint m_nAngularMotionX = 0x590; // JointMotion_t
            public const nint m_nAngularMotionY = 0x594; // JointMotion_t
            public const nint m_nAngularMotionZ = 0x598; // JointMotion_t
            public const nint m_flAngularFrequencyX = 0x59C; // float32
            public const nint m_flAngularFrequencyY = 0x5A0; // float32
            public const nint m_flAngularFrequencyZ = 0x5A4; // float32
            public const nint m_flAngularDampingRatioX = 0x5A8; // float32
            public const nint m_flAngularDampingRatioY = 0x5AC; // float32
            public const nint m_flAngularDampingRatioZ = 0x5B0; // float32
            public const nint m_flMaxAngularImpulseX = 0x5B4; // float32
            public const nint m_flMaxAngularImpulseY = 0x5B8; // float32
            public const nint m_flMaxAngularImpulseZ = 0x5BC; // float32
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
            public const nint m_iszLaserTarget = 0x808; // CUtlSymbolLarge
            public const nint m_pSprite = 0x810; // CHandle<CSprite>
            public const nint m_iszSpriteName = 0x818; // CUtlSymbolLarge
            public const nint m_firePosition = 0x820; // Vector
            public const nint m_flStartFrame = 0x82C; // float32
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
        // Field count: 15
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
            public const nint m_pFixedWorldBody = 0x4E0; // IPhysicsBody*
            public const nint m_pMotorJoint = 0x4E8; // IPhysicsJoint*
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
        // Field count: 11
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
            public const nint m_bDisablePushClamp = 0x4CA; // bool
            public const nint m_OnPushedPlayer = 0x4D0; // CEntityIOOutput
        }
        // Parent: CPhysConstraint
        // Field count: 15
        public static class CSplineConstraint {
            public const nint m_vAnchorOffsetRestore = 0x558; // Vector
            public const nint m_hSplineEntity = 0x564; // CHandle<CBaseEntity>
            public const nint m_pSplineBody = 0x568; // IPhysicsBody*
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
            public const nint m_OnLessThan = 0x4B0; // CEntityOutputTemplate<float32>
            public const nint m_OnEqualTo = 0x4D0; // CEntityOutputTemplate<float32>
            public const nint m_OnNotEqualTo = 0x4F0; // CEntityOutputTemplate<float32>
            public const nint m_OnGreaterThan = 0x510; // CEntityOutputTemplate<float32>
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
            public const nint m_OnDeath = 0x890; // CEntityIOOutput
        }
        // Parent: CBaseClientUIEntity
        // Field count: 24
        public static class CPointClientUIWorldPanel {
            public const nint m_bIgnoreInput = 0x8C8; // bool
            public const nint m_bLit = 0x8C9; // bool
            public const nint m_bFollowPlayerAcrossTeleport = 0x8CA; // bool
            public const nint m_flWidth = 0x8CC; // float32
            public const nint m_flHeight = 0x8D0; // float32
            public const nint m_flDPI = 0x8D4; // float32
            public const nint m_flInteractDistance = 0x8D8; // float32
            public const nint m_flDepthOffset = 0x8DC; // float32
            public const nint m_unOwnerContext = 0x8E0; // uint32
            public const nint m_unHorizontalAlign = 0x8E4; // uint32
            public const nint m_unVerticalAlign = 0x8E8; // uint32
            public const nint m_unOrientation = 0x8EC; // uint32
            public const nint m_bAllowInteractionFromAllSceneWorlds = 0x8F0; // bool
            public const nint m_vecCSSClasses = 0x8F8; // CNetworkUtlVectorBase<CUtlSymbolLarge>
            public const nint m_bOpaque = 0x910; // bool
            public const nint m_bNoDepth = 0x911; // bool
            public const nint m_bVisibleWhenParentNoDraw = 0x912; // bool
            public const nint m_bRenderBackface = 0x913; // bool
            public const nint m_bUseOffScreenIndicator = 0x914; // bool
            public const nint m_bExcludeFromSaveGames = 0x915; // bool
            public const nint m_bGrabbable = 0x916; // bool
            public const nint m_bOnlyRenderToTexture = 0x917; // bool
            public const nint m_bDisableMipGen = 0x918; // bool
            public const nint m_nExplicitImageLayout = 0x91C; // int32
        }
        // Parent: CSoundEventEntity
        // Field count: 1
        public static class CSoundEventSphereEntity {
            public const nint m_flRadius = 0x568; // float32
        }
        // Parent: CPlayerControllerComponent
        // Field count: 6
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
            public const nint m_OnMapVetoed = 0xE08; // CEntityOutputTemplate<CUtlSymbolLarge>
            public const nint m_OnMapPicked = 0xE28; // CEntityOutputTemplate<CUtlSymbolLarge>
            public const nint m_OnSidesPicked = 0xE48; // CEntityOutputTemplate<int32>
            public const nint m_OnNewPhaseStarted = 0xE68; // CEntityOutputTemplate<int32>
            public const nint m_OnLevelTransition = 0xE88; // CEntityOutputTemplate<int32>
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
        public static class CPulseGameBlackboard {
            public const nint m_strGraphName = 0x4B0; // CUtlString
            public const nint m_strStateBlob = 0x4B8; // CUtlString
        }
        // Parent: CSoundEventEntity
        // Field count: 0
        public static class CSoundEventEntityAlias_snd_event_point {
        }
        // Parent: None
        // Field count: 5
        public static class CChoreoComponent {
            public const nint __m_pChainEntity = 0x8; // CNetworkVarChainer
            public const nint m_hOwner = 0x30; // CHandle<CBaseModelEntity>
            public const nint m_nNextSceneEventId = 0x68; // SceneEventId_t
            public const nint m_bUpdateLayerPriorities = 0x6C; // bool
            public const nint m_flAllowResponsesEndTime = 0x70; // GameTime_t
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
        public static class CTextureBasedAnimatable {
            public const nint m_bLoop = 0x768; // bool
            public const nint m_flFPS = 0x76C; // float32
            public const nint m_hPositionKeys = 0x770; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_hRotationKeys = 0x778; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_vAnimationBoundsMin = 0x780; // Vector
            public const nint m_vAnimationBoundsMax = 0x78C; // Vector
            public const nint m_flStartTime = 0x798; // float32
            public const nint m_flStartFrame = 0x79C; // float32
        }
        // Parent: CBaseModelEntity
        // Field count: 23
        public static class CSprite {
            public const nint m_hSpriteMaterial = 0x768; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_hAttachedToEntity = 0x770; // CHandle<CBaseEntity>
            public const nint m_nAttachment = 0x774; // AttachmentHandle_t
            public const nint m_flSpriteFramerate = 0x778; // float32
            public const nint m_flFrame = 0x77C; // float32
            public const nint m_flDieTime = 0x780; // GameTime_t
            public const nint m_nBrightness = 0x790; // uint32
            public const nint m_flBrightnessDuration = 0x794; // float32
            public const nint m_flSpriteScale = 0x798; // float32
            public const nint m_flScaleDuration = 0x79C; // float32
            public const nint m_bWorldSpaceScale = 0x7A0; // bool
            public const nint m_flGlowProxySize = 0x7A4; // float32
            public const nint m_flHDRColorScale = 0x7A8; // float32
            public const nint m_flLastTime = 0x7AC; // GameTime_t
            public const nint m_flMaxFrame = 0x7B0; // float32
            public const nint m_flStartScale = 0x7B4; // float32
            public const nint m_flDestScale = 0x7B8; // float32
            public const nint m_flScaleTimeStart = 0x7BC; // GameTime_t
            public const nint m_nStartBrightness = 0x7C0; // int32
            public const nint m_nDestBrightness = 0x7C4; // int32
            public const nint m_flBrightnessTimeStart = 0x7C8; // GameTime_t
            public const nint m_nSpriteWidth = 0x7CC; // int32
            public const nint m_nSpriteHeight = 0x7D0; // int32
        }
        // Parent: CPathKeyFrame
        // Field count: 11
        public static class CBaseMoveBehavior {
            public const nint m_iPositionInterpolator = 0x4F0; // int32
            public const nint m_iRotationInterpolator = 0x4F4; // int32
            public const nint m_flAnimStartTime = 0x4F8; // float32
            public const nint m_flAnimEndTime = 0x4FC; // float32
            public const nint m_flAverageSpeedAcrossFrame = 0x500; // float32
            public const nint m_pCurrentKeyFrame = 0x504; // CHandle<CPathKeyFrame>
            public const nint m_pTargetKeyFrame = 0x508; // CHandle<CPathKeyFrame>
            public const nint m_pPreKeyFrame = 0x50C; // CHandle<CPathKeyFrame>
            public const nint m_pPostKeyFrame = 0x510; // CHandle<CPathKeyFrame>
            public const nint m_flTimeIntoFrame = 0x514; // float32
            public const nint m_iDirection = 0x518; // int32
        }
        // Parent: CBaseModelEntity
        // Field count: 9
        public static class CDynamicLight {
            public const nint m_ActualFlags = 0x768; // uint8
            public const nint m_Flags = 0x769; // uint8
            public const nint m_LightStyle = 0x76A; // uint8
            public const nint m_On = 0x76B; // bool
            public const nint m_Radius = 0x76C; // float32
            public const nint m_Exponent = 0x770; // int32
            public const nint m_InnerAngle = 0x774; // float32
            public const nint m_OuterAngle = 0x778; // float32
            public const nint m_SpotRadius = 0x77C; // float32
        }
        // Parent: CCSWeaponBaseGun
        // Field count: 2
        public static class CWeaponTaser {
            public const nint m_fFireTime = 0x1050; // GameTime_t
            public const nint m_nLastAttackTick = 0x1054; // int32
        }
        // Parent: CEnvCubemap
        // Field count: 0
        public static class CEnvCubemapBox {
        }
        // Parent: CBaseDoor
        // Field count: 1
        public static class CRotDoor {
            public const nint m_bSolidBsp = 0x968; // bool
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
            public const nint m_bDisabled = 0x768; // bool
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
        public static class CFuncElectrifiedVolume {
            public const nint m_EffectName = 0x788; // CUtlSymbolLarge
            public const nint m_EffectInterpenetrateName = 0x790; // CUtlSymbolLarge
            public const nint m_EffectZapName = 0x798; // CUtlSymbolLarge
            public const nint m_iszEffectSource = 0x7A0; // CUtlSymbolLarge
        }
        // Parent: CBaseEntity
        // Field count: 0
        public static class CCSMinimapBoundary {
        }
        // Parent: None
        // Field count: 2
        public static class EntitySpottedState_t {
            public const nint m_bSpotted = 0x8; // bool
            public const nint m_bSpottedByMask = 0xC; // uint32[2]
        }
        // Parent: None
        // Field count: 25
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
        public static class CSoundEventOBBEntity {
            public const nint m_vMins = 0x568; // Vector
            public const nint m_vMaxs = 0x574; // Vector
        }
        // Parent: CBaseCSGrenadeProjectile
        // Field count: 3
        public static class CFlashbangProjectile {
            public const nint m_flTimeToDetonate = 0xA30; // float32
            public const nint m_numOpponentsHit = 0xA34; // uint8
            public const nint m_numTeammatesHit = 0xA35; // uint8
        }
        // Parent: CBaseTrigger
        // Field count: 1
        public static class CTriggerMultiple {
            public const nint m_OnTrigger = 0x8C8; // CEntityIOOutput
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
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MVDataOverlayType
        // MVDataAssociatedFile
        public static class CExplosionTypeData {
            public const nint m_SoundName = 0x0; // CSoundEventName
            public const nint m_ParticleEffect = 0x10; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            public const nint m_bIsIncindiary = 0xF0; // bool
            public const nint m_bHasForces = 0xF1; // bool
            public const nint m_DecalType = 0xF8; // CGlobalSymbol
        }
        // Parent: CLogicalEntity
        // Field count: 8
        public static class CPathKeyFrame {
            public const nint m_Origin = 0x4A8; // Vector
            public const nint m_Angles = 0x4B4; // QAngle
            public const nint m_qAngle = 0x4C0; // Quaternion
            public const nint m_iNextKey = 0x4D0; // CUtlSymbolLarge
            public const nint m_flNextTime = 0x4D8; // float32
            public const nint m_pNextKey = 0x4DC; // CHandle<CPathKeyFrame>
            public const nint m_pPrevKey = 0x4E0; // CHandle<CPathKeyFrame>
            public const nint m_flMoveSpeed = 0x4E4; // float32
        }
        // Parent: CCSWeaponBaseGun
        // Field count: 1
        public static class CWeaponCZ75a {
            public const nint m_bMagazineRemoved = 0x1050; // bool
        }
        // Parent: CTriggerPush
        // Field count: 1
        public static class CScriptTriggerPush {
            public const nint m_vExtent = 0x8F8; // Vector
        }
        // Parent: CModelPointEntity
        // Field count: 3
        public static class CRevertSaved {
            public const nint m_loadTime = 0x768; // float32
            public const nint m_Duration = 0x76C; // float32
            public const nint m_HoldTime = 0x770; // float32
        }
        // Parent: CBaseTrigger
        // Field count: 0
        public static class CTriggerBombReset {
        }
        // Parent: CBaseTrigger
        // Field count: 14
        public static class CTriggerHurt {
            public const nint m_flOriginalDamage = 0x8C8; // float32
            public const nint m_flDamage = 0x8CC; // float32
            public const nint m_flDamageCap = 0x8D0; // float32
            public const nint m_flLastDmgTime = 0x8D4; // GameTime_t
            public const nint m_flForgivenessDelay = 0x8D8; // float32
            public const nint m_bitsDamageInflict = 0x8DC; // DamageTypes_t
            public const nint m_damageModel = 0x8E0; // int32
            public const nint m_bNoDmgForce = 0x8E4; // bool
            public const nint m_vDamageForce = 0x8E8; // Vector
            public const nint m_thinkAlways = 0x8F4; // bool
            public const nint m_hurtThinkPeriod = 0x8F8; // float32
            public const nint m_OnHurt = 0x900; // CEntityIOOutput
            public const nint m_OnHurtPlayer = 0x918; // CEntityIOOutput
            public const nint m_hurtEntities = 0x930; // CUtlVector<CHandle<CBaseEntity>>
        }
        // Parent: CPlayer_WeaponServices
        // Field count: 13
        public static class CCSPlayer_WeaponServices {
            public const nint m_flNextAttack = 0xC0; // GameTime_t
            public const nint m_hSavedWeapon = 0xC4; // CHandle<CBasePlayerWeapon>
            public const nint m_nTimeToMelee = 0xC8; // int32
            public const nint m_nTimeToSecondary = 0xCC; // int32
            public const nint m_nTimeToPrimary = 0xD0; // int32
            public const nint m_nTimeToSniperRifle = 0xD4; // int32
            public const nint m_bIsBeingGivenItem = 0xD8; // bool
            public const nint m_bIsPickingUpItemWithUse = 0xD9; // bool
            public const nint m_bPickedUpWeapon = 0xDA; // bool
            public const nint m_bDisableAutoDeploy = 0xDB; // bool
            public const nint m_bIsPickingUpGroundWeapon = 0xDC; // bool
            public const nint m_networkAnimTiming = 0x1860; // CNetworkUtlVectorBase<uint8>
            public const nint m_bBlockInspectUntilNextGraphUpdate = 0x1878; // bool
        }
        // Parent: None
        // Field count: 6
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
            public const nint m_vExtent = 0x950; // Vector
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
            public const nint m_OnDetectedExplosion = 0x8F0; // CEntityIOOutput
        }
        // Parent: CBaseFilter
        // Field count: 1
        public static class CFilterName {
            public const nint m_iFilterName = 0x4E0; // CUtlSymbolLarge
        }
        // Parent: CBaseCSGrenadeProjectile
        // Field count: 12
        public static class CSmokeGrenadeProjectile {
            public const nint m_nSmokeEffectTickBegin = 0xA58; // int32
            public const nint m_bDidSmokeEffect = 0xA5C; // bool
            public const nint m_nRandomSeed = 0xA60; // int32
            public const nint m_vSmokeColor = 0xA64; // Vector
            public const nint m_vSmokeDetonationPos = 0xA70; // Vector
            public const nint m_VoxelFrameData = 0xA80; // CNetworkUtlVectorBase<uint8>
            public const nint m_nVoxelFrameDataSize = 0xA98; // int32
            public const nint m_nVoxelUpdate = 0xA9C; // int32
            public const nint m_flLastBounce = 0xAA0; // GameTime_t
            public const nint m_fllastSimulationTime = 0xAA4; // GameTime_t
            public const nint m_bExplodeFromInferno = 0x2D28; // bool
            public const nint m_bDidGroundScorch = 0x2D29; // bool
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
            public const nint m_Score = 0x770; // int32
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
        // Field count: 13
        public static class CBaseAnimGraph {
            public const nint m_graphControllerManager = 0x768; // CAnimGraphControllerManager
            public const nint m_pMainGraphController = 0x818; // CAnimGraphControllerBase*
            public const nint m_bInitiallyPopulateInterpHistory = 0x820; // bool
            public const nint m_pChoreoServices = 0x828; // IChoreoServices*
            public const nint m_bAnimGraphUpdateEnabled = 0x830; // bool
            public const nint m_bAnimationUpdateScheduled = 0x831; // bool
            public const nint m_vecForce = 0x834; // Vector
            public const nint m_nForceBone = 0x840; // int32
            public const nint m_pRagdollControl = 0x850; // IPhysicsRagdollControl*
            public const nint m_RagdollPose = 0x858; // PhysicsRagdollPose_t
            public const nint m_bRagdollEnabled = 0x880; // bool
            public const nint m_bRagdollClientSide = 0x881; // bool
            public const nint m_xParentedRagdollRootInEntitySpace = 0x890; // CTransform
        }
        // Parent: CBaseEntity
        // Field count: 24
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
            public const nint m_nHeightFogType = 0x4E8; // int32
            public const nint m_nFogHeightBlendMode = 0x4EC; // int32
            public const nint m_nFogHeightCoordinateSpace = 0x4F0; // int32
            public const nint m_nDistanceFogType = 0x4F4; // int32
            public const nint m_DistanceFogCurveString = 0x4F8; // CUtlSymbolLarge
            public const nint m_HeightFogCurveString = 0x500; // CUtlSymbolLarge
            public const nint m_hFogCubemapTexture = 0x598; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_bHasHeightFogEnd = 0x5A0; // bool
            public const nint m_bFirstTime = 0x5A1; // bool
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
        public static class CBaseDoor {
            public const nint m_angMoveEntitySpace = 0x7F8; // QAngle
            public const nint m_vecMoveDirParentSpace = 0x804; // Vector
            public const nint m_ls = 0x810; // locksound_t
            public const nint m_bForceClosed = 0x830; // bool
            public const nint m_bDoorGroup = 0x831; // bool
            public const nint m_bLocked = 0x832; // bool
            public const nint m_bIgnoreDebris = 0x833; // bool
            public const nint m_bNoNPCs = 0x834; // bool
            public const nint m_eSpawnPosition = 0x838; // FuncDoorSpawnPos_t
            public const nint m_flBlockDamage = 0x83C; // float32
            public const nint m_NoiseMoving = 0x840; // CUtlSymbolLarge
            public const nint m_NoiseArrived = 0x848; // CUtlSymbolLarge
            public const nint m_NoiseMovingClosed = 0x850; // CUtlSymbolLarge
            public const nint m_NoiseArrivedClosed = 0x858; // CUtlSymbolLarge
            public const nint m_ChainTarget = 0x860; // CUtlSymbolLarge
            public const nint m_OnBlockedClosing = 0x868; // CEntityIOOutput
            public const nint m_OnBlockedOpening = 0x880; // CEntityIOOutput
            public const nint m_OnUnblockedClosing = 0x898; // CEntityIOOutput
            public const nint m_OnUnblockedOpening = 0x8B0; // CEntityIOOutput
            public const nint m_OnFullyClosed = 0x8C8; // CEntityIOOutput
            public const nint m_OnFullyOpen = 0x8E0; // CEntityIOOutput
            public const nint m_OnClose = 0x8F8; // CEntityIOOutput
            public const nint m_OnOpen = 0x910; // CEntityIOOutput
            public const nint m_OnLockedUse = 0x928; // CEntityIOOutput
            public const nint m_bLoopMoveSound = 0x940; // bool
            public const nint m_bCreateNavObstacle = 0x960; // bool
            public const nint m_isChaining = 0x961; // bool
            public const nint m_bIsUsable = 0x962; // bool
        }
        // Parent: CServerOnlyEntity
        // Field count: 0
        public static class CServerOnlyPointEntity {
        }
        // Parent: CRulePointEntity
        // Field count: 4
        public static class CGameMoney {
            public const nint m_OnMoneySpent = 0x778; // CEntityIOOutput
            public const nint m_OnMoneySpentFail = 0x790; // CEntityIOOutput
            public const nint m_nMoney = 0x7A8; // int32
            public const nint m_strAwardText = 0x7B0; // CUtlString
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
            public const nint m_entitySpottedState = 0x9E0; // EntitySpottedState_t
            public const nint m_nSpotRules = 0x9F8; // int32
        }
        // Parent: CBaseModelEntity
        // Field count: 1
        public static class CItemGenericTriggerHelper {
            public const nint m_hParentItem = 0x768; // CHandle<CItemGeneric>
        }
        // Parent: CPlayerPawnComponent
        // Field count: 5
        public static class CPlayer_WeaponServices {
            public const nint m_hMyWeapons = 0x48; // CNetworkUtlVectorBase<CHandle<CBasePlayerWeapon>>
            public const nint m_hActiveWeapon = 0x60; // CHandle<CBasePlayerWeapon>
            public const nint m_hLastWeapon = 0x64; // CHandle<CBasePlayerWeapon>
            public const nint m_iAmmo = 0x68; // uint16[32]
            public const nint m_bPreventWeaponPickup = 0xA8; // bool
        }
        // Parent: CRagdollProp
        // Field count: 6
        public static class CRagdollPropAttached {
            public const nint m_boneIndexAttached = 0xAB0; // uint32
            public const nint m_ragdollAttachedObjectIndex = 0xAB4; // uint32
            public const nint m_attachmentPointBoneSpace = 0xAB8; // Vector
            public const nint m_attachmentPointRagdollSpace = 0xAC4; // Vector
            public const nint m_bShouldDetach = 0xAD0; // bool
            public const nint m_bShouldDeleteAttachedActivationRecord = 0xAE0; // bool
        }
        // Parent: CItem
        // Field count: 2
        public static class CItemDogtags {
            public const nint m_OwningPlayer = 0x9E0; // CHandle<CCSPlayerPawn>
            public const nint m_KillingPlayer = 0x9E4; // CHandle<CCSPlayerPawn>
        }
        // Parent: CBasePlatTrain
        // Field count: 1
        public static class CFuncPlat {
            public const nint m_sNoise = 0x810; // CUtlSymbolLarge
        }
        // Parent: CBaseModelEntity
        // Field count: 77
        public static class CBarnLight {
            public const nint m_bEnabled = 0x768; // bool
            public const nint m_nColorMode = 0x76C; // int32
            public const nint m_Color = 0x770; // Color
            public const nint m_flColorTemperature = 0x774; // float32
            public const nint m_flBrightness = 0x778; // float32
            public const nint m_flBrightnessScale = 0x77C; // float32
            public const nint m_nDirectLight = 0x780; // int32
            public const nint m_nBakedShadowIndex = 0x784; // int32
            public const nint m_nLightPathUniqueId = 0x788; // int32
            public const nint m_nLightMapUniqueId = 0x78C; // int32
            public const nint m_nLuminaireShape = 0x790; // int32
            public const nint m_flLuminaireSize = 0x794; // float32
            public const nint m_flLuminaireAnisotropy = 0x798; // float32
            public const nint m_LightStyleString = 0x7A0; // CUtlString
            public const nint m_flLightStyleStartTime = 0x7A8; // GameTime_t
            public const nint m_QueuedLightStyleStrings = 0x7B0; // CNetworkUtlVectorBase<CUtlString>
            public const nint m_LightStyleEvents = 0x7C8; // CNetworkUtlVectorBase<CUtlString>
            public const nint m_LightStyleTargets = 0x7E0; // CNetworkUtlVectorBase<CHandle<CBaseModelEntity>>
            public const nint m_StyleEvent = 0x7F8; // CEntityIOOutput[4]
            public const nint m_hLightCookie = 0x878; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_flShape = 0x880; // float32
            public const nint m_flSoftX = 0x884; // float32
            public const nint m_flSoftY = 0x888; // float32
            public const nint m_flSkirt = 0x88C; // float32
            public const nint m_flSkirtNear = 0x890; // float32
            public const nint m_vSizeParams = 0x894; // Vector
            public const nint m_flRange = 0x8A0; // float32
            public const nint m_vShear = 0x8A4; // Vector
            public const nint m_nBakeSpecularToCubemaps = 0x8B0; // int32
            public const nint m_vBakeSpecularToCubemapsSize = 0x8B4; // Vector
            public const nint m_flBakeSpecularToCubemapsScale = 0x8C0; // float32
            public const nint m_nCastShadows = 0x8C4; // int32
            public const nint m_nShadowMapSize = 0x8C8; // int32
            public const nint m_nShadowPriority = 0x8CC; // int32
            public const nint m_bContactShadow = 0x8D0; // bool
            public const nint m_bForceShadowsEnabled = 0x8D1; // bool
            public const nint m_nBounceLight = 0x8D4; // int32
            public const nint m_flBounceScale = 0x8D8; // float32
            public const nint m_flMinRoughness = 0x8DC; // float32
            public const nint m_vAlternateColor = 0x8E0; // Vector
            public const nint m_fAlternateColorBrightness = 0x8EC; // float32
            public const nint m_nFog = 0x8F0; // int32
            public const nint m_flFogStrength = 0x8F4; // float32
            public const nint m_nFogShadows = 0x8F8; // int32
            public const nint m_flFogScale = 0x8FC; // float32
            public const nint m_flFadeSizeStart = 0x900; // float32
            public const nint m_flFadeSizeEnd = 0x904; // float32
            public const nint m_flShadowFadeSizeStart = 0x908; // float32
            public const nint m_flShadowFadeSizeEnd = 0x90C; // float32
            public const nint m_bPrecomputedFieldsValid = 0x910; // bool
            public const nint m_vPrecomputedBoundsMins = 0x914; // Vector
            public const nint m_vPrecomputedBoundsMaxs = 0x920; // Vector
            public const nint m_vPrecomputedOBBOrigin = 0x92C; // Vector
            public const nint m_vPrecomputedOBBAngles = 0x938; // QAngle
            public const nint m_vPrecomputedOBBExtent = 0x944; // Vector
            public const nint m_nPrecomputedSubFrusta = 0x950; // int32
            public const nint m_vPrecomputedOBBOrigin0 = 0x954; // Vector
            public const nint m_vPrecomputedOBBAngles0 = 0x960; // QAngle
            public const nint m_vPrecomputedOBBExtent0 = 0x96C; // Vector
            public const nint m_vPrecomputedOBBOrigin1 = 0x978; // Vector
            public const nint m_vPrecomputedOBBAngles1 = 0x984; // QAngle
            public const nint m_vPrecomputedOBBExtent1 = 0x990; // Vector
            public const nint m_vPrecomputedOBBOrigin2 = 0x99C; // Vector
            public const nint m_vPrecomputedOBBAngles2 = 0x9A8; // QAngle
            public const nint m_vPrecomputedOBBExtent2 = 0x9B4; // Vector
            public const nint m_vPrecomputedOBBOrigin3 = 0x9C0; // Vector
            public const nint m_vPrecomputedOBBAngles3 = 0x9CC; // QAngle
            public const nint m_vPrecomputedOBBExtent3 = 0x9D8; // Vector
            public const nint m_vPrecomputedOBBOrigin4 = 0x9E4; // Vector
            public const nint m_vPrecomputedOBBAngles4 = 0x9F0; // QAngle
            public const nint m_vPrecomputedOBBExtent4 = 0x9FC; // Vector
            public const nint m_vPrecomputedOBBOrigin5 = 0xA08; // Vector
            public const nint m_vPrecomputedOBBAngles5 = 0xA14; // QAngle
            public const nint m_vPrecomputedOBBExtent5 = 0xA20; // Vector
            public const nint m_bPvsModifyEntity = 0xA2C; // bool
            public const nint m_bTransmitAlways = 0xA2D; // bool
            public const nint m_VisClusters = 0xA30; // CNetworkUtlVectorBase<uint16>
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
            public const nint m_hTouchingPlayers = 0x8C8; // CUtlVector<CHandle<CBaseEntity>>
            public const nint m_flPosition = 0x8E0; // Vector
            public const nint m_flCenterSize = 0x8EC; // float32
            public const nint m_flMinVal = 0x8F0; // float32
            public const nint m_flMaxVal = 0x8F4; // float32
            public const nint m_opvarName = 0x8F8; // CUtlSymbolLarge
            public const nint m_stackName = 0x900; // CUtlSymbolLarge
            public const nint m_operatorName = 0x908; // CUtlSymbolLarge
            public const nint m_bVolIs2D = 0x910; // bool
            public const nint m_opvarNameChar = 0x911; // char[256]
            public const nint m_stackNameChar = 0xA11; // char[256]
            public const nint m_operatorNameChar = 0xB11; // char[256]
            public const nint m_VecNormPos = 0xC14; // Vector
            public const nint m_flNormCenterSize = 0xC20; // float32
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
            public const nint m_nBlackboardIndex = 0x58; // PulseRuntimeBlackboardReferenceIndex_t
            public const nint m_ExpectedArgs = 0x60; // CUtlLeanVector<CPulseRuntimeMethodArg>
            public const nint m_nAsyncCallMode = 0x70; // PulseMethodCallMode_t
            public const nint m_OnFinished = 0x78; // CPulse_ResumePoint
        }
        // Parent: CBaseAnimGraph
        // Field count: 30
        public static class CPointCommentaryNode {
            public const nint m_iszPreCommands = 0x940; // CUtlSymbolLarge
            public const nint m_iszPostCommands = 0x948; // CUtlSymbolLarge
            public const nint m_iszCommentaryFile = 0x950; // CUtlSymbolLarge
            public const nint m_iszViewTarget = 0x958; // CUtlSymbolLarge
            public const nint m_hViewTarget = 0x960; // CHandle<CBaseEntity>
            public const nint m_hViewTargetAngles = 0x964; // CHandle<CBaseEntity>
            public const nint m_iszViewPosition = 0x968; // CUtlSymbolLarge
            public const nint m_hViewPosition = 0x970; // CHandle<CBaseEntity>
            public const nint m_hViewPositionMover = 0x974; // CHandle<CBaseEntity>
            public const nint m_bPreventMovement = 0x978; // bool
            public const nint m_bUnderCrosshair = 0x979; // bool
            public const nint m_bUnstoppable = 0x97A; // bool
            public const nint m_flFinishedTime = 0x97C; // GameTime_t
            public const nint m_vecFinishOrigin = 0x980; // Vector
            public const nint m_vecOriginalAngles = 0x98C; // QAngle
            public const nint m_vecFinishAngles = 0x998; // QAngle
            public const nint m_bPreventChangesWhileMoving = 0x9A4; // bool
            public const nint m_bDisabled = 0x9A5; // bool
            public const nint m_vecTeleportOrigin = 0x9A8; // VectorWS
            public const nint m_flAbortedPlaybackAt = 0x9B4; // GameTime_t
            public const nint m_pOnCommentaryStarted = 0x9B8; // CEntityIOOutput
            public const nint m_pOnCommentaryStopped = 0x9D0; // CEntityIOOutput
            public const nint m_bActive = 0x9E8; // bool
            public const nint m_flStartTime = 0x9EC; // GameTime_t
            public const nint m_flStartTimeInCommentary = 0x9F0; // float32
            public const nint m_iszTitle = 0x9F8; // CUtlSymbolLarge
            public const nint m_iszSpeakers = 0xA00; // CUtlSymbolLarge
            public const nint m_iNodeNumber = 0xA08; // int32
            public const nint m_iNodeNumberMax = 0xA0C; // int32
            public const nint m_bListenedTo = 0xA10; // bool
        }
        // Parent: CRotButton
        // Field count: 14
        public static class CMomentaryRotButton {
            public const nint m_Position = 0x8E8; // CEntityOutputTemplate<float32>
            public const nint m_OnUnpressed = 0x908; // CEntityIOOutput
            public const nint m_OnFullyOpen = 0x920; // CEntityIOOutput
            public const nint m_OnFullyClosed = 0x938; // CEntityIOOutput
            public const nint m_OnReachedPosition = 0x950; // CEntityIOOutput
            public const nint m_lastUsed = 0x968; // int32
            public const nint m_start = 0x96C; // QAngle
            public const nint m_end = 0x978; // QAngle
            public const nint m_IdealYaw = 0x984; // float32
            public const nint m_sNoise = 0x988; // CUtlSymbolLarge
            public const nint m_bUpdateTarget = 0x990; // bool
            public const nint m_direction = 0x994; // int32
            public const nint m_returnSpeed = 0x998; // float32
            public const nint m_flStartPosition = 0x99C; // float32
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
        // Field count: 91
        public static class CFuncMover {
            public const nint m_iszPathName = 0x768; // CUtlSymbolLarge
            public const nint m_hPathMover = 0x770; // CHandle<CPathMover>
            public const nint m_hPrevPathMover = 0x774; // CHandle<CPathMover>
            public const nint m_iszPathNodeStart = 0x778; // CUtlSymbolLarge
            public const nint m_iszPathNodeEnd = 0x780; // CUtlSymbolLarge
            public const nint m_bIgnoreEndNode = 0x788; // bool
            public const nint m_eMoveType = 0x78C; // CFuncMover::Move_t
            public const nint m_bIsReversing = 0x790; // bool
            public const nint m_flStartSpeed = 0x794; // float32
            public const nint m_flPathLocation = 0x798; // float32
            public const nint m_flT = 0x79C; // float32
            public const nint m_nCurrentNodeIndex = 0x7A0; // int32
            public const nint m_nPreviousNodeIndex = 0x7A4; // int32
            public const nint m_eSolidType = 0x7A8; // SolidType_t
            public const nint m_bIsMoving = 0x7A9; // bool
            public const nint m_flTimeToReachMaxSpeed = 0x7AC; // float32
            public const nint m_flDistanceToReachMaxSpeed = 0x7B0; // float32
            public const nint m_flTimeToReachZeroSpeed = 0x7B4; // float32
            public const nint m_flComputedDistanceToReachMaxSpeed = 0x7B8; // float32
            public const nint m_flComputedDistanceToReachZeroSpeed = 0x7BC; // float32
            public const nint m_flStartCurveScale = 0x7C0; // float32
            public const nint m_flStopCurveScale = 0x7C4; // float32
            public const nint m_flDistanceToReachZeroSpeed = 0x7C8; // float32
            public const nint m_flTimeMovementStart = 0x7CC; // GameTime_t
            public const nint m_flTimeMovementStop = 0x7D0; // GameTime_t
            public const nint m_hStopAtNode = 0x7D4; // CHandle<CMoverPathNode>
            public const nint m_flPathLocationToBeginStop = 0x7D8; // float32
            public const nint m_flPathLocationStart = 0x7DC; // float32
            public const nint m_flBeginStopT = 0x7E0; // float32
            public const nint m_iszStartForwardSound = 0x7E8; // CUtlSymbolLarge
            public const nint m_iszLoopForwardSound = 0x7F0; // CUtlSymbolLarge
            public const nint m_iszStopForwardSound = 0x7F8; // CUtlSymbolLarge
            public const nint m_iszStartReverseSound = 0x800; // CUtlSymbolLarge
            public const nint m_iszLoopReverseSound = 0x808; // CUtlSymbolLarge
            public const nint m_iszStopReverseSound = 0x810; // CUtlSymbolLarge
            public const nint m_iszArriveAtDestinationSound = 0x818; // CUtlSymbolLarge
            public const nint m_OnMovementEnd = 0x838; // CEntityIOOutput
            public const nint m_bStartAtClosestPoint = 0x850; // bool
            public const nint m_bStartAtEnd = 0x851; // bool
            public const nint m_bStartFollowingClosestMover = 0x852; // bool
            public const nint m_eOrientationUpdate = 0x854; // CFuncMover::OrientationUpdate_t
            public const nint m_flTimeStartOrientationChange = 0x858; // GameTime_t
            public const nint m_flTimeToBlendToNewOrientation = 0x85C; // float32
            public const nint m_flDurationBlendToNewOrientationRan = 0x860; // float32
            public const nint m_bCreateMovableNavMesh = 0x864; // bool
            public const nint m_bAllowMovableNavMeshDockingOnEntireEntity = 0x865; // bool
            public const nint m_OnNodePassed = 0x868; // CEntityOutputTemplate<CUtlString>
            public const nint m_iszOrientationMatchEntityName = 0x888; // CUtlSymbolLarge
            public const nint m_hOrientationMatchEntity = 0x890; // CHandle<CBaseEntity>
            public const nint m_flTimeToTraverseToNextNode = 0x894; // float32
            public const nint m_vLerpToNewPosStartInPathEntitySpace = 0x898; // Vector
            public const nint m_vLerpToNewPosEndInPathEntitySpace = 0x8A4; // Vector
            public const nint m_flLerpToPositionT = 0x8B0; // float32
            public const nint m_flLerpToPositionDeltaT = 0x8B4; // float32
            public const nint m_OnLerpToPositionComplete = 0x8B8; // CEntityIOOutput
            public const nint m_bIsPaused = 0x8D0; // bool
            public const nint m_eTransitionedToPathNodeAction = 0x8D4; // CFuncMover::TransitionToPathNodeAction_t
            public const nint m_qTransitionSourceOrientation = 0x8E0; // Quaternion
            public const nint m_nDelayedTeleportToNode = 0x8F0; // int32
            public const nint m_bIsImGuiLogging = 0x8F4; // bool
            public const nint m_hFollowEntity = 0x8F8; // CHandle<CBaseEntity>
            public const nint m_flFollowDistance = 0x8FC; // float32
            public const nint m_flFollowMinimumSpeed = 0x900; // float32
            public const nint m_flCurFollowEntityT = 0x904; // float32
            public const nint m_flCurFollowSpeed = 0x908; // float32
            public const nint m_strOrientationFaceEntityName = 0x910; // CUtlSymbolLarge
            public const nint m_hOrientationFaceEntity = 0x918; // CHandle<CBaseEntity>
            public const nint m_OnStart = 0x920; // CEntityIOOutput
            public const nint m_OnStartForward = 0x938; // CEntityIOOutput
            public const nint m_OnStartReverse = 0x950; // CEntityIOOutput
            public const nint m_OnStop = 0x968; // CEntityIOOutput
            public const nint m_OnStopped = 0x980; // CEntityIOOutput
            public const nint m_bNextNodeReturnsCurrent = 0x998; // bool
            public const nint m_bStartedMoving = 0x999; // bool
            public const nint m_eFollowEntityDirection = 0x9B8; // CFuncMover::FollowEntityDirection_t
            public const nint m_hFollowMover = 0x9BC; // CHandle<CFuncMover>
            public const nint m_iszFollowMoverEntityName = 0x9C0; // CUtlSymbolLarge
            public const nint m_flFollowMoverDistance = 0x9C8; // float32
            public const nint m_flFollowMoverRatio = 0x9CC; // float32
            public const nint m_flFollowMoverCalculatedDistance = 0x9D0; // float32
            public const nint m_flFollowMoverSpringStrength = 0x9D4; // float32
            public const nint m_nFollowMoverConstraintPriority = 0x9D8; // int32
            public const nint m_bFollowConstraintsInitialized = 0x9DC; // bool
            public const nint m_eFollowConstraint = 0x9E0; // CFuncMover::FollowConstraint_t
            public const nint m_flFollowMoverSpeed = 0x9E4; // float32
            public const nint m_flFollowMoverVelocity = 0x9E8; // float32
            public const nint m_nTickMovementRan = 0x9EC; // GameTick_t
            public const nint m_movementSummary = 0x9F0; // FuncMoverMovementSummary_t
            public const nint m_bStopFromBeginStopTarget = 0xA10; // bool
            public const nint m_bQueueStop = 0xA11; // bool
            public const nint m_bQueueStopMoving = 0xA12; // bool
        }
        // Parent: CBreakableProp
        // Field count: 42
        public static class CPhysicsProp {
            public const nint m_MotionEnabled = 0xAE0; // CEntityIOOutput
            public const nint m_OnAwakened = 0xAF8; // CEntityIOOutput
            public const nint m_OnAwake = 0xB10; // CEntityIOOutput
            public const nint m_OnAsleep = 0xB28; // CEntityIOOutput
            public const nint m_OnPlayerUse = 0xB40; // CEntityIOOutput
            public const nint m_OnOutOfWorld = 0xB58; // CEntityIOOutput
            public const nint m_OnPlayerPickup = 0xB70; // CEntityIOOutput
            public const nint m_bForceNavIgnore = 0xB88; // bool
            public const nint m_bNoNavmeshBlocker = 0xB89; // bool
            public const nint m_bForceNpcExclude = 0xB8A; // bool
            public const nint m_massScale = 0xB8C; // float32
            public const nint m_buoyancyScale = 0xB90; // float32
            public const nint m_damageType = 0xB94; // int32
            public const nint m_damageToEnableMotion = 0xB98; // int32
            public const nint m_flForceToEnableMotion = 0xB9C; // float32
            public const nint m_bThrownByPlayer = 0xBA0; // bool
            public const nint m_bDroppedByPlayer = 0xBA1; // bool
            public const nint m_bTouchedByPlayer = 0xBA2; // bool
            public const nint m_bFirstCollisionAfterLaunch = 0xBA3; // bool
            public const nint m_bHasBeenAwakened = 0xBA4; // bool
            public const nint m_bIsOverrideProp = 0xBA5; // bool
            public const nint m_flLastBurn = 0xBA8; // GameTime_t
            public const nint m_nDynamicContinuousContactBehavior = 0xBAC; // DynamicContinuousContactBehavior_t
            public const nint m_fNextCheckDisableMotionContactsTime = 0xBB0; // GameTime_t
            public const nint m_iInitialGlowState = 0xBB4; // int32
            public const nint m_nGlowRange = 0xBB8; // int32
            public const nint m_nGlowRangeMin = 0xBBC; // int32
            public const nint m_glowColor = 0xBC0; // Color
            public const nint m_bShouldAutoConvertBackFromDebris = 0xBC4; // bool
            public const nint m_bMuteImpactEffects = 0xBC5; // bool
            public const nint m_nNavObstacleType = 0xBC8; // INavObstacle::NavObstacleType_t
            public const nint m_bUpdateNavWhenMoving = 0xBCC; // bool
            public const nint m_bForceNavObstacleCut = 0xBCD; // bool
            public const nint m_bAllowObstacleConvexHullMerging = 0xBCE; // bool
            public const nint m_bAcceptDamageFromHeldObjects = 0xBCF; // bool
            public const nint m_bEnableUseOutput = 0xBD0; // bool
            public const nint m_CrateType = 0xBD4; // CPhysicsProp::CrateType_t
            public const nint m_strItemClass = 0xBD8; // CUtlSymbolLarge[4]
            public const nint m_nItemCount = 0xBF8; // int32[4]
            public const nint m_bRemovableForAmmoBalancing = 0xC08; // bool
            public const nint m_bAwake = 0xC09; // bool
            public const nint m_bAttachedToReferenceFrame = 0xC0A; // bool
        }
        // Parent: CBaseModelEntity
        // Field count: 2
        public static class CFuncNavObstruction {
            public const nint m_bDisabled = 0x780; // bool
            public const nint m_bUseAsyncObstacleUpdate = 0x781; // bool
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
        // Field count: 3
        public static class CMolotovProjectile {
            public const nint m_bIsIncGrenade = 0xA30; // bool
            public const nint m_bDetonated = 0xA48; // bool
            public const nint m_stillTimer = 0xA50; // IntervalTimer
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
        public static class CPathWithDynamicNodes {
            public const nint m_vecPathNodes = 0x5B0; // CNetworkUtlVectorBase<CHandle<CPathNode>>
            public const nint m_xInitialPathWorldToLocal = 0x5D0; // CTransform
        }
        // Parent: CBaseEntity
        // Field count: 17
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
            public const nint m_bBreakable = 0xE20; // bool
            public const nint m_isAbleToCloseAreaPortals = 0xE21; // bool
            public const nint m_currentDamageState = 0xE24; // int32
            public const nint m_damageStates = 0xE28; // CUtlVector<CUtlSymbolLarge>
        }
        // Parent: CLightEntity
        // Field count: 0
        public static class CLightDirectionalEntity {
        }
        // Parent: CBaseModelEntity
        // Field count: 14
        public static class CBaseClientUIEntity {
            public const nint m_bEnabled = 0x768; // bool
            public const nint m_DialogXMLName = 0x770; // CUtlSymbolLarge
            public const nint m_PanelClassName = 0x778; // CUtlSymbolLarge
            public const nint m_PanelID = 0x780; // CUtlSymbolLarge
            public const nint m_CustomOutput0 = 0x788; // CEntityOutputTemplate<CUtlString>
            public const nint m_CustomOutput1 = 0x7A8; // CEntityOutputTemplate<CUtlString>
            public const nint m_CustomOutput2 = 0x7C8; // CEntityOutputTemplate<CUtlString>
            public const nint m_CustomOutput3 = 0x7E8; // CEntityOutputTemplate<CUtlString>
            public const nint m_CustomOutput4 = 0x808; // CEntityOutputTemplate<CUtlString>
            public const nint m_CustomOutput5 = 0x828; // CEntityOutputTemplate<CUtlString>
            public const nint m_CustomOutput6 = 0x848; // CEntityOutputTemplate<CUtlString>
            public const nint m_CustomOutput7 = 0x868; // CEntityOutputTemplate<CUtlString>
            public const nint m_CustomOutput8 = 0x888; // CEntityOutputTemplate<CUtlString>
            public const nint m_CustomOutput9 = 0x8A8; // CEntityOutputTemplate<CUtlString>
        }
        // Parent: CBaseModelEntity
        // Field count: 16
        public static class CBreakable {
            public const nint m_CPropDataComponent = 0x770; // CPropDataComponent
            public const nint m_Material = 0x7B0; // Materials
            public const nint m_hBreaker = 0x7B4; // CHandle<CBaseEntity>
            public const nint m_Explosion = 0x7B8; // Explosions
            public const nint m_iszSpawnObject = 0x7C0; // CUtlSymbolLarge
            public const nint m_flPressureDelay = 0x7C8; // float32
            public const nint m_iMinHealthDmg = 0x7CC; // int32
            public const nint m_iszPropData = 0x7D0; // CUtlSymbolLarge
            public const nint m_impactEnergyScale = 0x7D8; // float32
            public const nint m_nOverrideBlockLOS = 0x7DC; // EOverrideBlockLOS_t
            public const nint m_OnStartDeath = 0x7E0; // CEntityIOOutput
            public const nint m_OnBreak = 0x7F8; // CEntityIOOutput
            public const nint m_OnHealthChanged = 0x810; // CEntityOutputTemplate<float32>
            public const nint m_PerformanceMode = 0x830; // PerformanceMode_t
            public const nint m_hPhysicsAttacker = 0x834; // CHandle<CBasePlayerPawn>
            public const nint m_flLastPhysicsInfluenceTime = 0x838; // GameTime_t
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
        // Parent: None
        // Field count: 1
        public static class WeaponPurchaseTracker_t {
            public const nint m_weaponPurchases = 0x8; // CUtlVectorEmbeddedNetworkVar<WeaponPurchaseCount_t>
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Outflow_PlaySceneBase__CursorState_t {
            public const nint m_sceneInstance = 0x0; // CHandle<CBaseEntity>
            public const nint m_mainActor = 0x4; // CHandle<CBaseEntity>
            public const nint m_cursorIDToEventID = 0x8; // CUtlHashtable<PulseCursorID_t,int32>
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
        public static class CPointClientUIWorldTextPanel {
            public const nint m_messageText = 0x920; // char[512]
        }
        // Parent: None
        // Field count: 12
        public static class CEntityIdentity {
            public const nint m_nameStringTableIndex = 0x14; // int32
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
            public const nint m_hRotatorTarget = 0x768; // CHandle<CBaseEntity>
            public const nint m_bIsRotating = 0x76C; // bool
            public const nint m_bIsReversing = 0x76D; // bool
            public const nint m_flTimeToReachMaxSpeed = 0x770; // float32
            public const nint m_flTimeToReachZeroSpeed = 0x774; // float32
            public const nint m_flDistanceAlongArcTraveled = 0x778; // float32
            public const nint m_flTimeToWaitOscillate = 0x77C; // float32
            public const nint m_flTimeRotationStart = 0x780; // GameTime_t
            public const nint m_qLSPrevChange = 0x790; // Quaternion
            public const nint m_qWSPrev = 0x7A0; // Quaternion
            public const nint m_qWSInit = 0x7B0; // Quaternion
            public const nint m_qLSInit = 0x7C0; // Quaternion
            public const nint m_qLSOrientation = 0x7D0; // Quaternion
            public const nint m_OnRotationStarted = 0x7E0; // CEntityIOOutput
            public const nint m_OnRotationCompleted = 0x7F8; // CEntityIOOutput
            public const nint m_OnOscillate = 0x810; // CEntityIOOutput
            public const nint m_OnOscillateStartArrive = 0x828; // CEntityIOOutput
            public const nint m_OnOscillateStartDepart = 0x840; // CEntityIOOutput
            public const nint m_OnOscillateEndArrive = 0x858; // CEntityIOOutput
            public const nint m_OnOscillateEndDepart = 0x870; // CEntityIOOutput
            public const nint m_bOscillateDepart = 0x888; // bool
            public const nint m_nOscillateCount = 0x88C; // int32
            public const nint m_eRotateType = 0x890; // CFuncRotator::Rotate_t
            public const nint m_ePrevRotateType = 0x894; // CFuncRotator::Rotate_t
            public const nint m_bHasTargetOverride = 0x898; // bool
            public const nint m_qOrientationOverride = 0x8A0; // Quaternion
            public const nint m_eSpaceOverride = 0x8B0; // RotatorTargetSpace_t
            public const nint m_qAngularVelocity = 0x8B4; // QAngle
            public const nint m_vLookAtForcedUp = 0x8C0; // Vector
            public const nint m_strRotatorTarget = 0x8D0; // CUtlSymbolLarge
            public const nint m_bRecordHistory = 0x8D8; // bool
            public const nint m_vecRotatorHistory = 0x8E0; // CUtlVector<RotatorHistoryEntry_t>
            public const nint m_bReturningToPreviousOrientation = 0x8F8; // bool
            public const nint m_vecRotatorQueue = 0x900; // CUtlVector<RotatorQueueEntry_t>
            public const nint m_vecRotatorQueueHistory = 0x918; // CUtlVector<RotatorHistoryEntry_t>
            public const nint m_eSolidType = 0x930; // SolidType_t
            public const nint m_hSpeedFromMover = 0x934; // CHandle<CFuncMover>
            public const nint m_iszSpeedFromMover = 0x938; // CUtlSymbolLarge
            public const nint m_flSpeedScale = 0x940; // float32
            public const nint m_flMinYawRotation = 0x944; // float32
            public const nint m_flMaxYawRotation = 0x948; // float32
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
            public const nint m_onGUIDChanged = 0x4C8; // CEntityOutputTemplate<SndOpEventGuid_t>
            public const nint m_onSoundFinished = 0x4F8; // CEntityIOOutput
            public const nint m_flClientCullRadius = 0x510; // float32
            public const nint m_iszSoundName = 0x540; // CUtlSymbolLarge
            public const nint m_hSource = 0x55C; // CEntityHandle
            public const nint m_nEntityIndexSelection = 0x560; // int32
        }
        // Parent: SpawnPoint
        // Field count: 0
        public static class CInfoPlayerCounterterrorist {
        }
        // Parent: CLogicalEntity
        // Field count: 4
        public static class CEnvFade {
            public const nint m_fadeColor = 0x4A8; // Color
            public const nint m_Duration = 0x4AC; // float32
            public const nint m_HoldDuration = 0x4B0; // float32
            public const nint m_OnBeginFade = 0x4B8; // CEntityIOOutput
        }
        // Parent: None
        // Field count: 15
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CBasePlayerVData {
            public const nint m_sModelName = 0x28; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
            public const nint m_sModelNameAg2Override = 0x108; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
            public const nint m_flHeadDamageMultiplier = 0x1E8; // CSkillFloat
            public const nint m_flChestDamageMultiplier = 0x1F8; // CSkillFloat
            public const nint m_flStomachDamageMultiplier = 0x208; // CSkillFloat
            public const nint m_flArmDamageMultiplier = 0x218; // CSkillFloat
            public const nint m_flLegDamageMultiplier = 0x228; // CSkillFloat
            public const nint m_flHoldBreathTime = 0x238; // float32
            public const nint m_flDrowningDamageInterval = 0x23C; // float32
            public const nint m_nDrowningDamageInitial = 0x240; // int32
            public const nint m_nDrowningDamageMax = 0x244; // int32
            public const nint m_nWaterSpeed = 0x248; // int32
            public const nint m_flUseRange = 0x24C; // float32
            public const nint m_flUseAngleTolerance = 0x250; // float32
            public const nint m_flCrouchTime = 0x254; // float32
        }
        // Parent: CTriggerMultiple
        // Field count: 4
        public static class CTriggerImpact {
            public const nint m_flMagnitude = 0x8E0; // float32
            public const nint m_flNoise = 0x8E4; // float32
            public const nint m_flViewkick = 0x8E8; // float32
            public const nint m_pOutputForce = 0x8F0; // CEntityOutputTemplate<Vector>
        }
        // Parent: None
        // Field count: 3
        public static class CCSGameModeRules_Deathmatch {
            public const nint m_flDMBonusStartTime = 0x30; // GameTime_t
            public const nint m_flDMBonusTimeLength = 0x34; // float32
            public const nint m_sDMBonusWeapon = 0x38; // CUtlString
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CTestPulseIO__EntityHandleIntArgs_t {
            public const nint handleA = 0x0; // CEntityHandle
            public const nint valueB = 0x4; // int32
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
        public static class CBasePropDoor {
            public const nint m_flAutoReturnDelay = 0xB90; // float32
            public const nint m_hDoorList = 0xB98; // CUtlVector<CHandle<CBasePropDoor>>
            public const nint m_nHardwareType = 0xBB0; // int32
            public const nint m_bNeedsHardware = 0xBB4; // bool
            public const nint m_eDoorState = 0xBB8; // DoorState_t
            public const nint m_bLocked = 0xBBC; // bool
            public const nint m_bNoNPCs = 0xBBD; // bool
            public const nint m_closedPosition = 0xBC0; // Vector
            public const nint m_closedAngles = 0xBCC; // QAngle
            public const nint m_hBlocker = 0xBD8; // CHandle<CBaseEntity>
            public const nint m_bFirstBlocked = 0xBDC; // bool
            public const nint m_ls = 0xBE0; // locksound_t
            public const nint m_bForceClosed = 0xC00; // bool
            public const nint m_vecLatchWorldPosition = 0xC04; // VectorWS
            public const nint m_hActivator = 0xC10; // CHandle<CBaseEntity>
            public const nint m_SoundMoving = 0xC28; // CUtlSymbolLarge
            public const nint m_SoundOpen = 0xC30; // CUtlSymbolLarge
            public const nint m_SoundClose = 0xC38; // CUtlSymbolLarge
            public const nint m_SoundLock = 0xC40; // CUtlSymbolLarge
            public const nint m_SoundUnlock = 0xC48; // CUtlSymbolLarge
            public const nint m_SoundLatch = 0xC50; // CUtlSymbolLarge
            public const nint m_SoundPound = 0xC58; // CUtlSymbolLarge
            public const nint m_SoundJiggle = 0xC60; // CUtlSymbolLarge
            public const nint m_SoundLockedAnim = 0xC68; // CUtlSymbolLarge
            public const nint m_numCloseAttempts = 0xC70; // int32
            public const nint m_nPhysicsMaterial = 0xC74; // CUtlStringToken
            public const nint m_SlaveName = 0xC78; // CUtlSymbolLarge
            public const nint m_hMaster = 0xC80; // CHandle<CBasePropDoor>
            public const nint m_OnBlockedClosing = 0xC88; // CEntityIOOutput
            public const nint m_OnBlockedOpening = 0xCA0; // CEntityIOOutput
            public const nint m_OnUnblockedClosing = 0xCB8; // CEntityIOOutput
            public const nint m_OnUnblockedOpening = 0xCD0; // CEntityIOOutput
            public const nint m_OnFullyClosed = 0xCE8; // CEntityIOOutput
            public const nint m_OnFullyOpen = 0xD00; // CEntityIOOutput
            public const nint m_OnClose = 0xD18; // CEntityIOOutput
            public const nint m_OnOpen = 0xD30; // CEntityIOOutput
            public const nint m_OnLockedUse = 0xD48; // CEntityIOOutput
            public const nint m_OnAjarOpen = 0xD60; // CEntityIOOutput
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
        public static class CDynamicProp {
            public const nint m_bCreateNavObstacle = 0xAD8; // bool
            public const nint m_bNavObstacleUpdatesOverridden = 0xAD9; // bool
            public const nint m_bUseHitboxesForRenderBox = 0xADA; // bool
            public const nint m_bUseAnimGraph = 0xADB; // bool
            public const nint m_pOutputAnimBegun = 0xAE0; // CEntityIOOutput
            public const nint m_pOutputAnimOver = 0xAF8; // CEntityIOOutput
            public const nint m_pOutputAnimLoopCycleOver = 0xB10; // CEntityIOOutput
            public const nint m_OnAnimReachedStart = 0xB28; // CEntityIOOutput
            public const nint m_OnAnimReachedEnd = 0xB40; // CEntityIOOutput
            public const nint m_iszIdleAnim = 0xB58; // CUtlSymbolLarge
            public const nint m_nIdleAnimLoopMode = 0xB60; // AnimLoopMode_t
            public const nint m_bRandomizeCycle = 0xB64; // bool
            public const nint m_bStartDisabled = 0xB65; // bool
            public const nint m_bFiredStartEndOutput = 0xB66; // bool
            public const nint m_bForceNpcExclude = 0xB67; // bool
            public const nint m_bCreateNonSolid = 0xB68; // bool
            public const nint m_bIsOverrideProp = 0xB69; // bool
            public const nint m_iInitialGlowState = 0xB6C; // int32
            public const nint m_nGlowRange = 0xB70; // int32
            public const nint m_nGlowRangeMin = 0xB74; // int32
            public const nint m_glowColor = 0xB78; // Color
            public const nint m_nGlowTeam = 0xB7C; // int32
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
        public static class CFuncConveyor {
            public const nint m_szConveyorModels = 0x768; // CUtlSymbolLarge
            public const nint m_flTransitionDurationSeconds = 0x770; // float32
            public const nint m_angMoveEntitySpace = 0x774; // QAngle
            public const nint m_vecMoveDirEntitySpace = 0x780; // Vector
            public const nint m_flTargetSpeed = 0x78C; // float32
            public const nint m_nTransitionStartTick = 0x790; // GameTick_t
            public const nint m_nTransitionDurationTicks = 0x794; // int32
            public const nint m_flTransitionStartSpeed = 0x798; // float32
            public const nint m_hConveyorModels = 0x7A0; // CNetworkUtlVectorBase<CHandle<CBaseEntity>>
        }
        // Parent: CBaseTrigger
        // Field count: 14
        public static class CTriggerPhysics {
            public const nint m_pController = 0x8D0; // IPhysicsMotionController*
            public const nint m_gravityScale = 0x8D8; // float32
            public const nint m_linearLimit = 0x8DC; // float32
            public const nint m_linearDamping = 0x8E0; // float32
            public const nint m_angularLimit = 0x8E4; // float32
            public const nint m_angularDamping = 0x8E8; // float32
            public const nint m_linearForce = 0x8EC; // float32
            public const nint m_flFrequency = 0x8F0; // float32
            public const nint m_flDampingRatio = 0x8F4; // float32
            public const nint m_vecLinearForcePointAt = 0x8F8; // Vector
            public const nint m_bCollapseToForcePoint = 0x904; // bool
            public const nint m_vecLinearForcePointAtWorld = 0x908; // Vector
            public const nint m_vecLinearForceDirection = 0x914; // Vector
            public const nint m_bConvertToDebrisWhenPossible = 0x920; // bool
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
        // Parent: None
        // Field count: 32
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CBasePlayerWeaponVData {
            public const nint m_szWorldModel = 0x28; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
            public const nint m_szWorldModelAg2Override = 0x108; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
            public const nint m_sToolsOnlyOwnerModelName = 0x1E8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
            public const nint m_bBuiltRightHanded = 0x2C8; // bool
            public const nint m_bAllowFlipping = 0x2C9; // bool
            public const nint m_sMuzzleAttachment = 0x2D0; // CAttachmentNameSymbolWithStorage
            public const nint m_szMuzzleFlashParticle = 0x2F0; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            public const nint m_szMuzzleFlashParticleConfig = 0x3D0; // CUtlString
            public const nint m_szBarrelSmokeParticle = 0x3D8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            public const nint m_nMuzzleSmokeShotThreshold = 0x4B8; // uint8
            public const nint m_flMuzzleSmokeTimeout = 0x4BC; // float32
            public const nint m_flMuzzleSmokeDecrementRate = 0x4C0; // float32
            public const nint m_bGenerateMuzzleLight = 0x4C4; // bool
            public const nint m_bLinkedCooldowns = 0x4C5; // bool
            public const nint m_iFlags = 0x4C6; // ItemFlagTypes_t
            public const nint m_iWeight = 0x4C8; // int32
            public const nint m_bAutoSwitchTo = 0x4CC; // bool
            public const nint m_bAutoSwitchFrom = 0x4CD; // bool
            public const nint m_nPrimaryAmmoType = 0x4CE; // AmmoIndex_t
            public const nint m_nSecondaryAmmoType = 0x4CF; // AmmoIndex_t
            public const nint m_iMaxClip1 = 0x4D0; // int32
            public const nint m_iMaxClip2 = 0x4D4; // int32
            public const nint m_iDefaultClip1 = 0x4D8; // int32
            public const nint m_iDefaultClip2 = 0x4DC; // int32
            public const nint m_bReserveAmmoAsClips = 0x4E0; // bool
            public const nint m_bTreatAsSingleClip = 0x4E1; // bool
            public const nint m_bKeepLoadedAmmo = 0x4E2; // bool
            public const nint m_iRumbleEffect = 0x4E4; // RumbleEffect_t
            public const nint m_flDropSpeed = 0x4E8; // float32
            public const nint m_iSlot = 0x4EC; // int32
            public const nint m_iPosition = 0x4F0; // int32
            public const nint m_aShootSounds = 0x4F8; // CUtlOrderedMap<WeaponSound_t,CSoundEventName>
        }
        // Parent: CPointEntity
        // Field count: 15
        public static class CInfoInteraction {
            public const nint m_hSceneRequest = 0x4A8; // SceneRequestHandle_t
            public const nint m_hSceneOpportunity = 0x4AC; // SceneOpportunityHandle_t
            public const nint m_bEnabled = 0x4B0; // bool
            public const nint m_bStartDisabled = 0x4B1; // bool
            public const nint m_strSceneVDataName = 0x4B8; // CUtlSymbolLarge
            public const nint m_strPulseVDataName = 0x4C0; // CUtlSymbolLarge
            public const nint m_flRadius = 0x4E8; // float32
            public const nint m_flOwnerFOV = 0x4EC; // float32
            public const nint m_strLocalInterestReqTags = 0x4F0; // CUtlSymbolLarge
            public const nint m_strLocalInterestOptTags = 0x4F8; // CUtlSymbolLarge
            public const nint m_strLookTarget = 0x500; // CUtlSymbolLarge
            public const nint m_flDuration = 0x508; // float32
            public const nint m_flCooldown = 0x50C; // float32
            public const nint m_nRepeatCount = 0x510; // int32
            public const nint m_bDisableOnExit = 0x514; // bool
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
            public const nint m_GroupNames = 0x770; // CUtlVector<CGlobalSymbol>
            public const nint m_Tags = 0x788; // CUtlVector<CGlobalSymbol>
            public const nint m_bIsGroup = 0x7A0; // bool
            public const nint m_bGroupByPrefab = 0x7A1; // bool
            public const nint m_bGroupByVolume = 0x7A2; // bool
            public const nint m_bGroupOtherGroups = 0x7A3; // bool
            public const nint m_bIsInGroup = 0x7A4; // bool
        }
        // Parent: CPointEntity
        // Field count: 0
        public static class CInfoParticleTarget {
        }
        // Parent: CBaseEntity
        // Field count: 18
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
            public const nint m_iszLerpTarget = 0x8C8; // CUtlSymbolLarge
            public const nint m_hLerpTarget = 0x8D0; // CHandle<CBaseEntity>
            public const nint m_iszLerpTargetAttachment = 0x8D8; // CUtlSymbolLarge
            public const nint m_hLerpTargetAttachment = 0x8E0; // AttachmentHandle_t
            public const nint m_flLerpDuration = 0x8E4; // float32
            public const nint m_bAttachedEntityWasParented = 0x8E8; // bool
            public const nint m_bLerpRestoreMoveType = 0x8E9; // bool
            public const nint m_bSingleLerpObject = 0x8EA; // bool
            public const nint m_vecLerpingObjects = 0x8F0; // CUtlVector<lerpdata_t>
            public const nint m_iszLerpEffect = 0x908; // CUtlSymbolLarge
            public const nint m_iszLerpSound = 0x910; // CUtlSymbolLarge
            public const nint m_bAttachTouchingObject = 0x918; // bool
            public const nint m_hEntityToWaitForDisconnect = 0x91C; // CHandle<CBaseEntity>
            public const nint m_OnLerpStarted = 0x920; // CEntityIOOutput
            public const nint m_OnLerpFinished = 0x938; // CEntityIOOutput
            public const nint m_OnDetached = 0x950; // CEntityIOOutput
        }
        // Parent: CPhysicsProp
        // Field count: 0
        public static class CPhysicsPropOverride {
        }
        // Parent: CBaseTrigger
        // Field count: 3
        public static class CTriggerSave {
            public const nint m_bForceNewLevelUnit = 0x8C8; // bool
            public const nint m_fDangerousTimer = 0x8CC; // float32
            public const nint m_minHitPoints = 0x8D0; // int32
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
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MPropertyCustomEditor
        public static class CRangeFloat {
            public const nint m_pValue = 0x0; // float32[2]
        }
        // Parent: None
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MFgdHelper
        public static class CDestructiblePart {
            public const nint m_DebugName = 0x0; // CGlobalSymbol
            public const nint m_nHitGroup = 0x8; // HitGroup_t
            public const nint m_bDisableHitGroupWhenDestroyed = 0xC; // bool
            public const nint m_nOtherHitgroupsToDestroyWhenFullyDestructed = 0x10; // CUtlVector<HitGroup_t>
            public const nint m_bOnlyDestroyWhenGibbing = 0x28; // bool
            public const nint m_sBodyGroupName = 0x30; // CGlobalSymbol
            public const nint m_DamageLevels = 0x38; // CUtlVector<CDestructiblePart_DamageLevel>
        }
        // Parent: None
        // Field count: 0
        public static class CAnimEventQueueListener {
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class PhysBlockHeader_t {
            public const nint nSaved = 0x0; // int32
            public const nint pWorldObject = 0x8; // uint64
        }
        // Parent: Relationship_t
        // Field count: 2
        public static class RelationshipOverride_t {
            public const nint entity = 0x8; // CHandle<CBaseEntity>
            public const nint classType = 0xC; // Class_T
        }
        // Parent: None
        // Field count: 2
        public static class AutoRoomDoorwayPairs_t {
            public const nint vP1 = 0x0; // Vector
            public const nint vP2 = 0xC; // Vector
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class NavHull_t {
            public const nint m_nHullIdx = 0x0; // int32
        }
        // Parent: None
        // Field count: 14
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CDebugSnapshotData_t {
            public const nint m_text = 0x0; // CUtlString
            public const nint m_dataType = 0x8; // uint32
            public const nint m_userFlags = 0xC; // uint32
            public const nint m_userData = 0x10; // uint32
            public const nint m_userVector = 0x14; // VectorWS
            public const nint m_userTransform = 0x20; // CTransformWS
            public const nint m_userShape = 0x40; // CGenericShapeProxy
            public const nint m_drawColor = 0xD8; // Color
            public const nint m_vecDebugOverlayData = 0xE0; // CUtlVector<CDebugDrawHistoryData*>
            public const nint m_pStructuredData = 0xF8; // DebugSnapshotBaseStructuredData_t*
            public const nint m_hEntity = 0x100; // CHandle<CBaseEntity>
            public const nint m_sEntityName = 0x108; // CUtlString
            public const nint m_nEntityIndex = 0x110; // CEntityIndex
            public const nint m_children = 0x120; // CUtlLeanVector<CDebugSnapshotData_t>
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MPropertyCustomEditor
        public static class CRemapFloat {
            public const nint m_pValue = 0x0; // float32[4]
        }
        // Parent: None
        // Field count: 3
        public static class CHintMessage {
            public const nint m_hintString = 0x0; // char*
            public const nint m_args = 0x8; // CUtlVector<char*>
            public const nint m_duration = 0x20; // float32
        }
        // Parent: None
        // Field count: 7
        public static class ParticleNode_t {
            public const nint m_hEntity = 0x0; // CHandle<CBaseEntity>
            public const nint m_iIndex = 0x4; // ParticleIndex_t
            public const nint m_flStartTime = 0x8; // GameTime_t
            public const nint m_flGrowthDuration = 0xC; // float32
            public const nint m_vecGrowthOrigin = 0x10; // Vector
            public const nint m_flEndcapTime = 0x1C; // float32
            public const nint m_bMarkedForDelete = 0x20; // bool
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MPropertyCustomFGDType
        public static class CFootstepTableHandle {
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CDecalGroupVData {
            public const nint m_vecOptions = 0x0; // CUtlVector<DecalGroupOption_t>
            public const nint m_flTotalProbability = 0x18; // float32
        }
        // Parent: None
        // Field count: 0
        public static class CNmSnapWeaponTask {
        }
        // Parent: None
        // Field count: 1
        public static class CPlayerControllerComponent {
            public const nint __m_pChainEntity = 0x8; // CNetworkVarChainer
        }
        // Parent: None
        // Field count: 1
        public static class CResponseQueue {
            public const nint m_ExpresserTargets = 0x38; // CUtlVector<CAI_Expresser*>
        }
        // Parent: None
        // Field count: 2
        public static class CodeGenAABB_t {
            public const nint m_vMinBounds = 0x0; // Vector
            public const nint m_vMaxBounds = 0xC; // Vector
        }
        // Parent: None
        // Field count: 2
        public static class CScriptUniformRandomStream {
            public const nint m_hScriptScope = 0x8; // HSCRIPT
            public const nint m_nInitialSeed = 0x9C; // int32
        }
        // Parent: None
        // Field count: 6
        public static class lerpdata_t {
            public const nint m_hEnt = 0x0; // CHandle<CBaseEntity>
            public const nint m_MoveType = 0x4; // MoveType_t
            public const nint m_flStartTime = 0x8; // GameTime_t
            public const nint m_vecStartOrigin = 0xC; // Vector
            public const nint m_qStartRot = 0x20; // Quaternion
            public const nint m_nFXIndex = 0x30; // ParticleIndex_t
        }
        // Parent: None
        // Field count: 1
        public static class WrappedPhysicsJoint_t {
            public const nint m_pJoint = 0x0; // IPhysicsJoint*
        }
        // Parent: None
        // Field count: 5
        public static class SimpleConstraintSoundProfile {
            public const nint m_flKeyPointMinSoundThreshold = 0x8; // float32
            public const nint m_flKeyPointMaxSoundThreshold = 0xC; // float32
            public const nint m_reversalSoundThresholdSmall = 0x10; // float32
            public const nint m_reversalSoundThresholdMedium = 0x14; // float32
            public const nint m_reversalSoundThresholdLarge = 0x18; // float32
        }
        // Parent: None
        // Field count: 2
        public static class CSimpleSimTimer {
            public const nint m_flNext = 0x0; // GameTime_t
            public const nint m_nWorldGroupId = 0x4; // WorldGroupId_t
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class AI_BaseNPCAnimGraph_DebugSnapshotData_t {
            public const nint e_action_desired = 0x8; // CGlobalSymbol
            public const nint b_action_restart = 0x10; // bool
            public const nint e_movement_type_desired = 0x18; // CGlobalSymbol
            public const nint b_movement_type_restart = 0x20; // bool
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPhysicsBodyGameMarkupData {
            public const nint m_PhysicsBodyMarkupByBoneName = 0x0; // CUtlOrderedMap<CUtlString,CPhysicsBodyGameMarkup>
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class SoundCommand_t {
            public const nint m_time = 0x8; // float32
            public const nint m_deltaTime = 0xC; // float32
            public const nint m_command = 0x10; // soundcommands_t
            public const nint m_value = 0x14; // float32
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class modifiedconvars_t {
            public const nint pszConvar = 0x0; // char[128]
            public const nint pszCurrentValue = 0x80; // char[128]
            public const nint pszOrgValue = 0x100; // char[128]
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CTestPulseIOComponent_Derived {
        }
        // Parent: None
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class SAVE_HEADER {
            public const nint m_saveId = 0x0; // int32
            public const nint m_version = 0x4; // int32
            public const nint m_nConnectionCount = 0x8; // int32
            public const nint m_nMapVersion = 0xC; // int32
            public const nint m_sSpawnGroupName = 0x10; // CUtlString
            public const nint m_vecWorldOffset = 0x20; // matrix3x4a_t
            public const nint m_flSaveTime = 0x50; // float32
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSkillDamage {
            public const nint m_flDamage = 0x0; // CSkillFloat
            public const nint m_flNPCDamageScalarVsNPC = 0x10; // float32
            public const nint m_flPhysicsForceDamage = 0x14; // float32
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class DebugSnapshotBaseStructuredData_t {
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MDebugSnapshotDataSummaryFn
        public static class AI_DefaultNPC_DebugSnapshotData_t__PathQuery_t {
            public const nint m_sInitialQueryName = 0x0; // CGlobalSymbol
            public const nint m_sCurrentQueryName = 0x8; // CGlobalSymbol
            public const nint m_nMode = 0x10; // CGlobalSymbol
            public const nint m_nType = 0x18; // CGlobalSymbol
            public const nint m_nState = 0x20; // CGlobalSymbol
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class AI_Motor_DebugSnapshotData_t {
            public const nint current_movement_gait_set = 0x8; // CGlobalSymbol
            public const nint current_movement_gait = 0x10; // CGlobalSymbol
            public const nint movement_setting_id = 0x18; // CGlobalSymbol
        }
        // Parent: None
        // Field count: 0
        public static class CFloatExponentialMovingAverage {
        }
        // Parent: None
        // Field count: 1
        public static class physics_save_sphere_t {
            public const nint radius = 0x0; // float32
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class GAME_HEADER {
            public const nint m_sComment = 0x0; // CUtlString
            public const nint m_nSpawnGroupCount = 0x8; // int32
            public const nint m_sLandmark = 0x10; // CUtlString
            public const nint m_sRequiredAddons = 0x18; // CUtlString
        }
        // Parent: None
        // Field count: 0
        public static class CAnimEventListenerBase {
        }
        // Parent: None
        // Field count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class AI_BaseNPC_DebugSnapshotData_t {
            public const nint npc_state = 0x8; // CGlobalSymbol
            public const nint current_enemy = 0x10; // CHandle<CBaseEntity>
            public const nint s_current_schedule = 0x18; // CUtlString
            public const nint s_current_task = 0x20; // CGlobalSymbol
            public const nint s_schedule_interrupt_reason = 0x28; // CUtlString
            public const nint s_schedule_fail_reason = 0x30; // CUtlString
            public const nint conditions = 0x38; // CUtlVector<CGlobalSymbol>
            public const nint anim_events = 0x50; // CUtlVector<CGlobalSymbol>
            public const nint e_action_body_section = 0x68; // CGlobalSymbol
            public const nint e_movement_body_section = 0x70; // CGlobalSymbol
        }
        // Parent: None
        // Field count: 9
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CDebugDrawHistoryData {
            public const nint m_hEntity = 0x0; // CHandle<CBaseEntity>
            public const nint m_etype = 0x4; // ESceneViewDebugOverlaysListenerDataType_t
            public const nint m_vectors = 0x8; // CUtlLeanVector<Vector4D>
            public const nint m_colors = 0x18; // CUtlLeanVector<Color>
            public const nint m_dimensions = 0x28; // CUtlLeanVector<float32>
            public const nint m_times = 0x38; // CUtlLeanVector<float64>
            public const nint m_uint64s = 0x48; // CUtlLeanVector<uint64>
            public const nint m_bools = 0x58; // CUtlLeanVector<bool>
            public const nint m_strings = 0x68; // CUtlLeanVector<CUtlString>
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmEventConsumer {
        }
        // Parent: None
        // Field count: 3
        public static class CNetworkViewOffsetVector {
            public const nint m_vecX = 0x10; // CNetworkedQuantizedFloat
            public const nint m_vecY = 0x18; // CNetworkedQuantizedFloat
            public const nint m_vecZ = 0x20; // CNetworkedQuantizedFloat
        }
        // Parent: None
        // Field count: 1
        public static class AmmoIndex_t {
            public const nint m_Value = 0x0; // int8
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class SceneRequestTargetMapPair_t {
            public const nint m_actorName = 0x0; // CUtlSymbolLarge
            public const nint m_targetName = 0x8; // CUtlSymbolLarge
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CDestructiblePartsSystemData {
            public const nint m_PartsDataByHitGroup = 0x0; // CUtlOrderedMap<HitGroup_t,CDestructiblePart>
            public const nint m_nMinMaxNumberHitGroupsToDestroyWhenGibbing = 0x28; // CRangeInt
        }
        // Parent: None
        // Field count: 2
        public static class CRopeOverlapHit {
            public const nint m_hEntity = 0x0; // CHandle<CBaseEntity>
            public const nint m_vecOverlappingLinks = 0x8; // CUtlVector<int32>
        }
        // Parent: None
        // Field count: 3
        public static class ResponseContext_t {
            public const nint m_iszName = 0x0; // CUtlSymbolLarge
            public const nint m_iszValue = 0x8; // CUtlSymbolLarge
            public const nint m_fExpirationTime = 0x10; // GameTime_t
        }
        // Parent: None
        // Field count: 1
        public static class CNavVolumeSphericalShell {
            public const nint m_flRadiusInner = 0x88; // float32
        }
        // Parent: None
        // Field count: 1
        public static class CPlayerPawnComponent {
            public const nint __m_pChainEntity = 0x8; // CNetworkVarChainer
        }
        // Parent: None
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class AI_Navigator_DebugSnapshotData_t {
            public const nint s_npc_nav_authority = 0x8; // CGlobalSymbol
            public const nint s_goal_nav_search_id = 0x10; // CGlobalSymbol
            public const nint s_goal_source_location = 0x18; // CUtlString
            public const nint goal_actual_pos = 0x20; // VectorWS
            public const nint goal_base_pos = 0x2C; // VectorWS
            public const nint waypoints = 0x38; // CUtlVector<AI_Navigator_DebugSnapshotData_t::Waypoint_t>
        }
        // Parent: None
        // Field count: 26
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CDecalInstance {
            public const nint m_sDecalGroup = 0x0; // CGlobalSymbol
            public const nint m_hMaterial = 0x8; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_sSequenceName = 0x10; // CUtlStringToken
            public const nint m_hEntity = 0x14; // CHandle<CBaseEntity>
            public const nint m_nBoneIndex = 0x18; // int32
            public const nint m_nTriangleIndex = 0x1C; // int32
            public const nint m_vPositionLS = 0x20; // Vector
            public const nint m_vPositionOS = 0x2C; // Vector
            public const nint m_vNormalLS = 0x38; // Vector
            public const nint m_vSAxisLS = 0x44; // Vector
            public const nint m_nFlags = 0x50; // DecalFlags_t
            public const nint m_Color = 0x54; // Color
            public const nint m_flWidth = 0x58; // float32
            public const nint m_flHeight = 0x5C; // float32
            public const nint m_flDepth = 0x60; // float32
            public const nint m_transform = 0x70; // CTransformWS
            public const nint m_flAnimationScale = 0x90; // float32
            public const nint m_flAnimationStartTime = 0x94; // float32
            public const nint m_flPlaceTime = 0x98; // GameTime_t
            public const nint m_flFadeStartTime = 0x9C; // float32
            public const nint m_flFadeDuration = 0xA0; // float32
            public const nint m_flLightingOriginOffset = 0xA4; // float32
            public const nint m_flBoundingRadiusSqr = 0xB0; // float32
            public const nint m_nSequenceIndex = 0xB4; // int16
            public const nint m_bIsAdjacent = 0xB6; // bool
            public const nint m_bDoDecalLightmapping = 0xB7; // bool
        }
        // Parent: None
        // Field count: 18
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CGameScriptedMoveData {
            public const nint m_vAccumulatedRootMotion = 0x0; // Vector
            public const nint m_angAccumulatedRootMotionRotation = 0xC; // QAngle
            public const nint m_vSrc = 0x18; // VectorWS
            public const nint m_angSrc = 0x24; // QAngle
            public const nint m_angCurrent = 0x30; // QAngle
            public const nint m_flLockedSpeed = 0x3C; // float32
            public const nint m_flAngRate = 0x40; // float32
            public const nint m_flDuration = 0x44; // float32
            public const nint m_flStartTime = 0x48; // GameTime_t
            public const nint m_bActive = 0x4C; // bool
            public const nint m_bTeleportOnEnd = 0x4D; // bool
            public const nint m_bIgnoreRotation = 0x4E; // bool
            public const nint m_bSuccess = 0x4F; // bool
            public const nint m_nForcedCrouchState = 0x50; // ForcedCrouchState_t
            public const nint m_bIgnoreCollisions = 0x54; // bool
            public const nint m_vDest = 0x58; // Vector
            public const nint m_angDst = 0x64; // QAngle
            public const nint m_hDestEntity = 0x70; // CHandle<CBaseEntity>
        }
        // Parent: None
        // Field count: 1
        public static class CSkeletonAnimationController {
            public const nint m_pSkeletonInstance = 0x8; // CSkeletonInstance*
        }
        // Parent: None
        // Field count: 0
        public static class CNavVolumeMarkupVolume {
        }
        // Parent: None
        // Field count: 2
        public static class CResponseCriteriaSet {
            public const nint m_nNumPrefixedContexts = 0x30; // int32
            public const nint m_bOverrideOnAppend = 0x34; // bool
        }
        // Parent: None
        // Field count: 11
        public static class CAI_Expresser {
            public const nint m_flStopTalkTime = 0x60; // GameTime_t
            public const nint m_flStopTalkTimeWithoutDelay = 0x64; // GameTime_t
            public const nint m_flQueuedSpeechTime = 0x68; // GameTime_t
            public const nint m_flBlockedTalkTime = 0x6C; // GameTime_t
            public const nint m_voicePitch = 0x70; // int32
            public const nint m_flLastTimeAcceptedSpeak = 0x74; // GameTime_t
            public const nint m_bAllowSpeakingInterrupts = 0x78; // bool
            public const nint m_bConsiderSceneInvolvementAsSpeech = 0x79; // bool
            public const nint m_bSceneEntityDisabled = 0x7A; // bool
            public const nint m_nLastSpokenPriority = 0x7C; // int32
            public const nint m_pOuter = 0x98; // CBaseModelEntity*
        }
        // Parent: None
        // Field count: 0
        public static class IChoreoServices {
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmEventConsumerAttributes {
        }
        // Parent: CStopwatchBase
        // Field count: 1
        public static class CStopwatch {
            public const nint m_flInterval = 0xC; // float32
        }
        // Parent: None
        // Field count: 3
        public static class ResponseParams {
            public const nint odds = 0x10; // int16
            public const nint flags = 0x12; // int16
            public const nint m_pFollowup = 0x18; // ResponseFollowup*
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class SPAWNGROUP_HEADER {
            public const nint m_sGroupName = 0x0; // CUtlString
            public const nint m_sEntityLumpName = 0x8; // CUtlString
            public const nint m_vecWorldOffset = 0x10; // matrix3x4a_t
            public const nint m_bClientSpawnGroup = 0x40; // bool
            public const nint m_bSuppressAllEntities = 0x41; // bool
        }
        // Parent: None
        // Field count: 4
        public static class globalentity_t {
            public const nint name = 0x0; // CUtlSymbol
            public const nint levelName = 0x2; // CUtlSymbol
            public const nint state = 0x4; // GLOBALESTATE
            public const nint counter = 0x8; // int32
        }
        // Parent: None
        // Field count: 1
        public static class SceneInterestTags_t {
            public const nint m_Tags = 0x0; // CUtlVector<CUtlString>
        }
        // Parent: None
        // Field count: 10
        public static class ConstraintSoundInfo {
            public const nint m_vSampler = 0x8; // VelocitySampler
            public const nint m_soundProfile = 0x20; // SimpleConstraintSoundProfile
            public const nint m_forwardAxis = 0x40; // Vector
            public const nint m_iszTravelSoundFwd = 0x50; // CUtlSymbolLarge
            public const nint m_iszTravelSoundBack = 0x58; // CUtlSymbolLarge
            public const nint m_iszReversalSoundSmall = 0x78; // CUtlSymbolLarge
            public const nint m_iszReversalSoundMedium = 0x80; // CUtlSymbolLarge
            public const nint m_iszReversalSoundLarge = 0x88; // CUtlSymbolLarge
            public const nint m_bPlayTravelSound = 0x90; // bool
            public const nint m_bPlayReversalSound = 0x91; // bool
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPhysicsBodyGameMarkup {
            public const nint m_TargetBody = 0x0; // CUtlString
            public const nint m_Tag = 0x8; // CGlobalSymbol
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class PointCameraSettings_t {
            public const nint m_flNearBlurryDistance = 0x0; // float32
            public const nint m_flNearCrispDistance = 0x4; // float32
            public const nint m_flFarCrispDistance = 0x8; // float32
            public const nint m_flFarBlurryDistance = 0xC; // float32
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class DebugDrawBoneTransforms_t {
            public const nint vecBones = 0x10; // CUtlVectorFixedGrowable<CTransform,128>
        }
        // Parent: None
        // Field count: 0
        public static class CVectorMovingAverage {
        }
        // Parent: None
        // Field count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class AI_MotorGroundAnimgraph_DebugSnapshotData_t {
            public const nint state = 0x8; // CGlobalSymbol
            public const nint b_has_path = 0x10; // bool
            public const nint f_remaining_ground_path_length = 0x14; // float32
            public const nint f_current_speed = 0x18; // float32
            public const nint move_type = 0x20; // CGlobalSymbol
            public const nint f_move_heading_actual = 0x28; // float32
            public const nint f_move_heading_desired = 0x2C; // float32
            public const nint f_current_lean = 0x30; // float32
            public const nint f_target_lean = 0x34; // float32
            public const nint vec_events = 0x38; // CUtlVector<AI_MotorGroundAnimgraph_DebugSnapshotData_t::Event_t>
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSoundEnvelope {
            public const nint m_current = 0x0; // float32
            public const nint m_target = 0x4; // float32
            public const nint m_rate = 0x8; // float32
            public const nint m_forceupdate = 0xC; // bool
        }
        // Parent: None
        // Field count: 25
        public static class dynpitchvol_base_t {
            public const nint preset = 0x0; // int32
            public const nint pitchrun = 0x4; // int32
            public const nint pitchstart = 0x8; // int32
            public const nint spinup = 0xC; // int32
            public const nint spindown = 0x10; // int32
            public const nint volrun = 0x14; // int32
            public const nint volstart = 0x18; // int32
            public const nint fadein = 0x1C; // int32
            public const nint fadeout = 0x20; // int32
            public const nint lfotype = 0x24; // int32
            public const nint lforate = 0x28; // int32
            public const nint lfomodpitch = 0x2C; // int32
            public const nint lfomodvol = 0x30; // int32
            public const nint cspinup = 0x34; // int32
            public const nint cspincount = 0x38; // int32
            public const nint pitch = 0x3C; // int32
            public const nint spinupsav = 0x40; // int32
            public const nint spindownsav = 0x44; // int32
            public const nint pitchfrac = 0x48; // int32
            public const nint vol = 0x4C; // int32
            public const nint fadeinsav = 0x50; // int32
            public const nint fadeoutsav = 0x54; // int32
            public const nint volfrac = 0x58; // int32
            public const nint lfofrac = 0x5C; // int32
            public const nint lfomult = 0x60; // int32
        }
        // Parent: CSimpleSimTimer
        // Field count: 1
        public static class CStopwatchBase {
            public const nint m_fIsRunning = 0x8; // bool
        }
        // Parent: None
        // Field count: 1
        public static class SceneRequestHandle_t {
            public const nint m_Value = 0x0; // int32
        }
        // Parent: None
        // Field count: 1
        public static class CNavVolumeVector {
            public const nint m_bHasBeenPreFiltered = 0x80; // bool
        }
        // Parent: None
        // Field count: 2
        public static class NavGravity_t {
            public const nint m_vGravity = 0x0; // Vector
            public const nint m_bDefault = 0xC; // bool
        }
        // Parent: None
        // Field count: 12
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class PulseScriptedSequenceData_t {
            public const nint m_nActorID = 0x0; // int32
            public const nint m_szPreIdleSequence = 0x8; // CUtlString
            public const nint m_szEntrySequence = 0x10; // CUtlString
            public const nint m_szSequence = 0x18; // CUtlString
            public const nint m_szExitSequence = 0x20; // CUtlString
            public const nint m_nMoveTo = 0x28; // ScriptedMoveTo_t
            public const nint m_nMoveToGait = 0x2C; // SharedMovementGait_t
            public const nint m_nHeldWeaponBehavior = 0x30; // ScriptedHeldWeaponBehavior_t
            public const nint m_bLoopPreIdleSequence = 0x34; // bool
            public const nint m_bLoopActionSequence = 0x35; // bool
            public const nint m_bLoopPostIdleSequence = 0x36; // bool
            public const nint m_bIgnoreLookAt = 0x37; // bool
        }
        // Parent: None
        // Field count: 2
        public static class RotatorQueueEntry_t {
            public const nint qTarget = 0x0; // Quaternion
            public const nint eSpace = 0x10; // RotatorTargetSpace_t
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CBaseAnimGraphDestructibleParts_GraphController {
        }
        // Parent: None
        // Field count: 1
        public static class ExternalAnimGraphHandle_t {
            public const nint m_Value = 0x0; // uint32
        }
        // Parent: None
        // Field count: 1
        public static class CPhysicsShake {
            public const nint m_force = 0x8; // Vector
        }
        // Parent: None
        // Field count: 6
        public static class CInfoChoreoAnchorPosition {
            public const nint m_vOrigin = 0x0; // Vector
            public const nint m_qAngles = 0xC; // QAngle
            public const nint m_vExtentsMin = 0x18; // Vector
            public const nint m_vExtentsMax = 0x24; // Vector
            public const nint m_flRadius = 0x30; // float32
            public const nint m_nShapeType = 0x34; // CInfoChoreoLocatorShapeType_t
        }
        // Parent: None
        // Field count: 3
        public static class VelocitySampler {
            public const nint m_prevSample = 0x0; // Vector
            public const nint m_fPrevSampleTime = 0xC; // GameTime_t
            public const nint m_fIdealSampleRate = 0x10; // float32
        }
        // Parent: None
        // Field count: 14
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CTakeDamageResult {
            public const nint m_pOriginatingInfo = 0x0; // CTakeDamageInfo*
            public const nint m_DestructibleHitGroupRequests = 0x8; // CUtlLeanVector<DestructiblePartDamageRequest_t>
            public const nint m_nHealthLost = 0x18; // int32
            public const nint m_nHealthBefore = 0x1C; // int32
            public const nint m_flDamageDealt = 0x20; // float32
            public const nint m_flPreModifiedDamage = 0x24; // float32
            public const nint m_nTotalledHealthLost = 0x28; // int32
            public const nint m_flTotalledDamageDealt = 0x2C; // float32
            public const nint m_flTotalledPreModifiedDamage = 0x30; // float32
            public const nint m_flNewDamageAccumulatorValue = 0x34; // float32
            public const nint m_nDamageFlags = 0x38; // TakeDamageFlags_t
            public const nint m_bWasDamageSuppressed = 0x40; // bool
            public const nint m_bSuppressFlinch = 0x41; // bool
            public const nint m_nOverrideFlinchHitGroup = 0x44; // HitGroup_t
        }
        // Parent: None
        // Field count: 1
        public static class SceneEventId_t {
            public const nint m_Value = 0x0; // uint32
        }
        // Parent: None
        // Field count: 5
        public static class ExternalAnimGraph_t {
            public const nint m_hExtGraphHandle = 0x0; // ExternalAnimGraphHandle_t
            public const nint m_sExternalGraphSlotID = 0x8; // CGlobalSymbol
            public const nint m_hGraphDefinition = 0x10; // CStrongHandleCopyable<InfoForResourceTypeCNmGraphDefinition>
            public const nint m_hExternalGraphOwner = 0x18; // CHandle<CBaseAnimGraph>
            public const nint m_nInactiveBehavior = 0x30; // ExternalAnimGraphInactiveBehavior_t
        }
        // Parent: None
        // Field count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CCommentarySystem {
            public const nint m_bCommentaryEnabledMidGame = 0x12; // bool
            public const nint m_flNextTeleportTime = 0x14; // GameTime_t
            public const nint m_iTeleportStage = 0x18; // int32
            public const nint m_bCheatState = 0x1C; // bool
            public const nint m_bIsFirstSpawnGroupToLoad = 0x1D; // bool
            public const nint m_ModifiedConvars = 0x20; // CUtlVector<modifiedconvars_t>
            public const nint m_hCurrentNode = 0x38; // CHandle<CPointCommentaryNode>
            public const nint m_hActiveCommentaryNode = 0x3C; // CHandle<CPointCommentaryNode>
            public const nint m_hLastCommentaryNode = 0x40; // CHandle<CPointCommentaryNode>
            public const nint m_vecNodes = 0x48; // CUtlVector<CHandle<CPointCommentaryNode>>
        }
        // Parent: None
        // Field count: 8
        public static class ResponseFollowup {
            public const nint followup_concept = 0x0; // char*
            public const nint followup_contexts = 0x8; // char*
            public const nint followup_delay = 0x10; // float32
            public const nint followup_target = 0x14; // char*
            public const nint followup_entityiotarget = 0x1C; // char*
            public const nint followup_entityioinput = 0x24; // char*
            public const nint followup_entityiodelay = 0x2C; // float32
            public const nint bFired = 0x30; // bool
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class AmmoTypeInfo_t {
            public const nint m_nMaxCarry = 0x10; // int32
            public const nint m_nSplashSize = 0x1C; // CRangeInt
            public const nint m_nFlags = 0x24; // AmmoFlags_t
            public const nint m_flMass = 0x28; // float32
            public const nint m_flSpeed = 0x2C; // CRangeFloat
        }
        // Parent: None
        // Field count: 1
        public static class CNetworkTransmitComponent {
            public const nint m_nTransmitStateOwnedCounter = 0x184; // uint8
        }
        // Parent: None
        // Field count: 5
        public static class CPathQueryUtil {
            public const nint m_PathToEntityTransform = 0x10; // CTransform
            public const nint m_vecPathSamplePositions = 0x30; // CUtlVector<Vector>
            public const nint m_vecPathSampleParameters = 0x48; // CUtlVector<float32>
            public const nint m_vecPathSampleDistances = 0x60; // CUtlVector<float32>
            public const nint m_bIsClosedLoop = 0x78; // bool
        }
        // Parent: None
        // Field count: 5
        public static class RagdollCreationParams_t {
            public const nint m_vForce = 0x0; // Vector
            public const nint m_nForceBone = 0xC; // int32
            public const nint m_bForceCurrentWorldTransform = 0x10; // bool
            public const nint m_bUseLRURetirement = 0x11; // bool
            public const nint m_nHealthToGrant = 0x14; // int32
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CRelativeTransform {
            public const nint m_bTransformIsWorldSpace = 0x0; // bool
            public const nint m_transform = 0x10; // CTransform
            public const nint m_transformWS = 0x30; // CTransformWS
            public const nint m_hEntity = 0x50; // CHandle<CBaseEntity>
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MPropertyCustomEditor
        public static class CRangeInt {
            public const nint m_pValue = 0x0; // int32[2]
        }
        // Parent: None
        // Field count: 2
        public static class CWorldCompositionChunkReferenceElement_t {
            public const nint m_strMapToLoad = 0x0; // CUtlString
            public const nint m_strLandmarkName = 0x8; // CUtlString
        }
        // Parent: CStopwatchBase
        // Field count: 2
        public static class CRandStopwatch {
            public const nint m_flMinInterval = 0xC; // float32
            public const nint m_flMaxInterval = 0x10; // float32
        }
        // Parent: None
        // Field count: 2
        public static class CMovementStatsProperty {
            public const nint m_nUseCounter = 0x10; // int32
            public const nint m_emaMovementDirection = 0x14; // CVectorExponentialMovingAverage
        }
        // Parent: None
        // Field count: 5
        public static class CGameChoreoServices {
            public const nint m_hOwner = 0x8; // CHandle<CBaseModelEntity>
            public const nint m_hScriptedSequence = 0xC; // CHandle<CScriptedSequence>
            public const nint m_scriptState = 0x10; // IChoreoServices::ScriptState_t
            public const nint m_choreoState = 0x14; // IChoreoServices::ChoreoState_t
            public const nint m_flTimeStartedState = 0x18; // GameTime_t
        }
        // Parent: None
        // Field count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class PhysObjectHeader_t {
            public const nint type = 0x0; // PhysInterfaceId_t
            public const nint hEntity = 0x4; // CHandle<CBaseEntity>
            public const nint fieldName = 0x8; // CUtlSymbolLarge
            public const nint nObjects = 0x10; // int32
            public const nint modelName = 0x18; // CUtlSymbolLarge
            public const nint bbox = 0x20; // AABB_t
            public const nint sphere = 0x38; // physics_save_sphere_t
            public const nint iCollide = 0x3C; // int32
        }
        // Parent: None
        // Field count: 0
        public static class CSimpleStopwatch {
        }
        // Parent: None
        // Field count: 28
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CShatterGlassShard {
            public const nint m_hShardHandle = 0x8; // uint32
            public const nint m_vecPanelVertices = 0x10; // CUtlVector<Vector2D>
            public const nint m_vLocalPanelSpaceOrigin = 0x28; // Vector2D
            public const nint m_hModel = 0x30; // CStrongHandle<InfoForResourceTypeCModel>
            public const nint m_hPhysicsEntity = 0x38; // CHandle<CShatterGlassShardPhysics>
            public const nint m_hParentPanel = 0x3C; // CHandle<CFuncShatterglass>
            public const nint m_hParentShard = 0x40; // uint32
            public const nint m_ShatterStressType = 0x44; // ShatterGlassStressType
            public const nint m_vecStressVelocity = 0x48; // Vector
            public const nint m_bCreatedModel = 0x54; // bool
            public const nint m_flLongestEdge = 0x58; // float32
            public const nint m_flShortestEdge = 0x5C; // float32
            public const nint m_flLongestAcross = 0x60; // float32
            public const nint m_flShortestAcross = 0x64; // float32
            public const nint m_flSumOfAllEdges = 0x68; // float32
            public const nint m_flArea = 0x6C; // float32
            public const nint m_nOnFrameEdge = 0x70; // OnFrame
            public const nint m_nSubShardGeneration = 0x74; // int32
            public const nint m_vecAverageVertPosition = 0x78; // Vector2D
            public const nint m_bAverageVertPositionIsValid = 0x80; // bool
            public const nint m_vecPanelSpaceStressPositionA = 0x84; // Vector2D
            public const nint m_vecPanelSpaceStressPositionB = 0x8C; // Vector2D
            public const nint m_bStressPositionAIsValid = 0x94; // bool
            public const nint m_bStressPositionBIsValid = 0x95; // bool
            public const nint m_bFlaggedForRemoval = 0x96; // bool
            public const nint m_flPhysicsEntitySpawnedAtTime = 0x98; // GameTime_t
            public const nint m_hEntityHittingMe = 0x9C; // CHandle<CBaseEntity>
            public const nint m_vecNeighbors = 0xA0; // CUtlVector<uint32>
        }
        // Parent: None
        // Field count: 4
        public static class ragdollelement_t {
            public const nint originParentSpace = 0x0; // Vector
            public const nint parentIndex = 0x20; // int32
            public const nint m_flRadius = 0x24; // float32
            public const nint m_nHeight = 0x28; // int32
        }
        // Parent: None
        // Field count: 9
        public static class CGameScriptedMoveDef_t {
            public const nint m_vDestOffset = 0x0; // Vector
            public const nint m_hDestEntity = 0xC; // CHandle<CBaseEntity>
            public const nint m_angDest = 0x10; // QAngle
            public const nint m_flDuration = 0x1C; // float32
            public const nint m_flAngRate = 0x20; // float32
            public const nint m_flMoveSpeed = 0x24; // float32
            public const nint m_bAimDisabled = 0x28; // bool
            public const nint m_bIgnoreRotation = 0x29; // bool
            public const nint m_nForcedCrouchState = 0x2C; // ForcedCrouchState_t
        }
        // Parent: None
        // Field count: 7
        public static class CNetworkOriginCellCoordQuantizedVector {
            public const nint m_cellX = 0x10; // uint16
            public const nint m_cellY = 0x12; // uint16
            public const nint m_cellZ = 0x14; // uint16
            public const nint m_nOutsideWorld = 0x16; // uint16
            public const nint m_vecX = 0x18; // CNetworkedQuantizedFloat
            public const nint m_vecY = 0x20; // CNetworkedQuantizedFloat
            public const nint m_vecZ = 0x28; // CNetworkedQuantizedFloat
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CBaseAnimGraphVariationUserData {
        }
        // Parent: None
        // Field count: 8
        public static class DynamicVolumeDef_t {
            public const nint m_source = 0x0; // CHandle<CBaseEntity>
            public const nint m_target = 0x4; // CHandle<CBaseEntity>
            public const nint m_nHullIdx = 0x8; // int32
            public const nint m_vSourceAnchorPos = 0xC; // Vector
            public const nint m_vTargetAnchorPos = 0x18; // Vector
            public const nint m_nAreaSrc = 0x24; // uint32
            public const nint m_nAreaDst = 0x28; // uint32
            public const nint m_bAttached = 0x2C; // bool
        }
        // Parent: None
        // Field count: 3
        public static class CNetworkOriginQuantizedVector {
            public const nint m_vecX = 0x10; // CNetworkedQuantizedFloat
            public const nint m_vecY = 0x18; // CNetworkedQuantizedFloat
            public const nint m_vecZ = 0x20; // CNetworkedQuantizedFloat
        }
        // Parent: None
        // Field count: 1
        public static class magnetted_objects_t {
            public const nint hEntity = 0x8; // CHandle<CBaseEntity>
        }
        // Parent: None
        // Field count: 3
        public static class CHintMessageQueue {
            public const nint m_tmMessageEnd = 0x0; // float32
            public const nint m_messages = 0x8; // CUtlVector<CHintMessage*>
            public const nint m_pPlayerController = 0x20; // CBasePlayerController*
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MPropertyCustomEditor
        public static class CSkillInt {
            public const nint m_pValue = 0x0; // int32[4]
        }
        // Parent: None
        // Field count: 5
        public static class thinkfunc_t {
            public const nint m_think = 0x0; // BASEPTR
            public const nint m_hFn = 0x8; // HSCRIPT
            public const nint m_nContext = 0x10; // CUtlStringToken
            public const nint m_nNextThinkTick = 0x14; // GameTick_t
            public const nint m_nLastThinkTick = 0x18; // GameTick_t
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNavHullPresetVData {
            public const nint m_vecNavHulls = 0x0; // CUtlVector<CUtlString>
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MPropertyCustomEditor
        public static class CSkillFloat {
            public const nint m_pValue = 0x0; // float32[4]
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class WaterWheelFrictionScale_t {
            public const nint m_flFractionOfWheelSubmerged = 0x0; // float32
            public const nint m_flFrictionScale = 0x4; // float32
        }
        // Parent: None
        // Field count: 2
        public static class ragdollhierarchyjoint_t {
            public const nint parentIndex = 0x0; // int32
            public const nint childIndex = 0x4; // int32
        }
        // Parent: None
        // Field count: 16
        public static class CSceneEventInfo {
            public const nint m_iLayer = 0x0; // int32
            public const nint m_iPriority = 0x4; // int32
            public const nint m_hSequence = 0x8; // HSequence
            public const nint m_flWeight = 0xC; // float32
            public const nint m_hAnimClip = 0x10; // CStrongHandle<InfoForResourceTypeCNmClip>
            public const nint m_sAnimClipSlot = 0x18; // CGlobalSymbol
            public const nint m_sAnimClipSlotWeight = 0x20; // CGlobalSymbol
            public const nint m_bHasArrived = 0x28; // bool
            public const nint m_nType = 0x2C; // int32
            public const nint m_flNext = 0x30; // GameTime_t
            public const nint m_bIsGesture = 0x34; // bool
            public const nint m_bShouldRemove = 0x35; // bool
            public const nint m_hTarget = 0x5C; // CHandle<CBaseEntity>
            public const nint m_nSceneEventId = 0x60; // SceneEventId_t
            public const nint m_bClientSide = 0x64; // bool
            public const nint m_bStarted = 0x65; // bool
        }
        // Parent: None
        // Field count: 5
        public static class SoundeventPathCornerPairNetworked_t {
            public const nint vP1 = 0x0; // VectorWS
            public const nint vP2 = 0xC; // VectorWS
            public const nint flPathLengthSqr = 0x18; // float32
            public const nint flP1Pct = 0x1C; // float32
            public const nint flP2Pct = 0x20; // float32
        }
        // Parent: None
        // Field count: 13
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSoundPatch {
            public const nint m_pitch = 0x8; // CSoundEnvelope
            public const nint m_volume = 0x18; // CSoundEnvelope
            public const nint m_shutdownTime = 0x3C; // float32
            public const nint m_flLastTime = 0x40; // float32
            public const nint m_iszSoundScriptName = 0x48; // CUtlSymbolLarge
            public const nint m_hEnt = 0x50; // CHandle<CBaseEntity>
            public const nint m_soundEntityIndex = 0x54; // CEntityIndex
            public const nint m_soundOrigin = 0x58; // VectorWS
            public const nint m_isPlaying = 0x64; // int32
            public const nint m_Filter = 0x68; // CCopyRecipientFilter
            public const nint m_flCloseCaptionDuration = 0xA0; // float32
            public const nint m_bUpdatedSoundOrigin = 0xA4; // bool
            public const nint m_iszClassName = 0xA8; // CUtlSymbolLarge
        }
        // Parent: None
        // Field count: 18
        public static class CSceneOpportunity {
            public const nint m_hOwner = 0x0; // CHandle<CBaseEntity>
            public const nint m_uHandle = 0x4; // SceneOpportunityHandle_t
            public const nint m_strInteractVDataName = 0x8; // CUtlSymbolLarge
            public const nint m_bEnabled = 0x10; // bool
            public const nint m_bActive = 0x11; // bool
            public const nint m_ePriority = 0x14; // InteractionPriority_t
            public const nint m_flRadius = 0x18; // float32
            public const nint m_LocalInterestReqTags = 0x20; // SceneInterestTags_t
            public const nint m_LocalInterestOptTags = 0x38; // SceneInterestTags_t
            public const nint m_flOwnerFOV = 0x50; // float32
            public const nint m_ActorList = 0x58; // CUtlVector<SceneOpportunityActor_t>
            public const nint m_hLookTarget = 0x70; // CHandle<CBaseEntity>
            public const nint m_flDuration = 0x74; // float32
            public const nint m_tStartTime = 0x78; // GameTime_t
            public const nint m_flCooldown = 0x7C; // float32
            public const nint m_tCooldownTime = 0x80; // GameTime_t
            public const nint m_nRepeatCount = 0x84; // int32
            public const nint m_bDisableOnExit = 0x88; // bool
        }
        // Parent: None
        // Field count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CCS2ChickenGraphController {
            public const nint m_action = 0x88; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
            public const nint m_actionSubtype = 0xA0; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
            public const nint m_bActionReset = 0xB8; // CAnimGraph2ParamAutoResetOptionalRef
            public const nint m_idleVariation = 0xD8; // CAnimGraph2ParamOptionalRef<float32>
            public const nint m_runVariation = 0xF0; // CAnimGraph2ParamOptionalRef<float32>
            public const nint m_panicVariation = 0x108; // CAnimGraph2ParamOptionalRef<float32>
            public const nint m_squatVariation = 0x120; // CAnimGraph2ParamOptionalRef<float32>
            public const nint m_bInWater = 0x138; // CAnimGraph2ParamOptionalRef<bool>
            public const nint m_bHasActionCompletedEvent = 0x150; // bool
            public const nint m_bWaitingForCompletedEvent = 0x151; // bool
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class levellist_t {
            public const nint m_sMapName = 0x0; // CUtlString
            public const nint m_sLandmarkName = 0x8; // CUtlString
            public const nint m_hEntLandmark = 0x10; // CEntityHandle
            public const nint m_vecLandmarkOrigin = 0x14; // Vector
            public const nint m_vecLandmarkAngles = 0x20; // QAngle
        }
        // Parent: None
        // Field count: 3
        public static class locksound_t {
            public const nint sLockedSound = 0x8; // CUtlSymbolLarge
            public const nint sUnlockedSound = 0x10; // CUtlSymbolLarge
            public const nint flwaitSound = 0x18; // GameTime_t
        }
        // Parent: None
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class DecalGroupOption_t {
            public const nint m_hMaterial = 0x0; // CStrongHandleCopyable<InfoForResourceTypeIMaterial2>
            public const nint m_sSequenceName = 0x8; // CGlobalSymbol
            public const nint m_flProbability = 0x10; // float32
            public const nint m_bEnableAngleBetweenNormalAndGravityRange = 0x14; // bool
            public const nint m_flMinAngleBetweenNormalAndGravity = 0x18; // float32
            public const nint m_flMaxAngleBetweenNormalAndGravity = 0x1C; // float32
        }
        // Parent: None
        // Field count: 0
        public static class CBtNode {
        }
        // Parent: None
        // Field count: 2
        public static class CAnimGraphControllerManager {
            public const nint m_controllers = 0x0; // CUtlVector<CAnimGraphControllerBase*>
            public const nint m_bGraphBindingsCreated = 0xA8; // bool
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MPropertyCustomEditor
        public static class CFiringModeFloat {
            public const nint m_flValues = 0x0; // float32[2]
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CCopyRecipientFilter {
            public const nint m_Flags = 0x8; // int32
            public const nint m_Recipients = 0x10; // CUtlVector<CPlayerSlot>
            public const nint m_slotPlayerExcludedDueToPrediction = 0x30; // CPlayerSlot
        }
        // Parent: None
        // Field count: 0
        public static class CFloatMovingAverage {
        }
        // Parent: None
        // Field count: 8
        public static class FuncMoverMovementSummary_t {
            public const nint flStartT = 0x0; // float32
            public const nint flEndT = 0x4; // float32
            public const nint nStartNodeIndex = 0x8; // int32
            public const nint nStopNodeIndex = 0xC; // int32
            public const nint nMovementMode = 0x10; // int32
            public const nint nFlags = 0x14; // FuncMoverMovementSummaryFlags_t
            public const nint nTick = 0x18; // GameTick_t
            public const nint hPathMover = 0x1C; // CHandle<CPathMover>
        }
        // Parent: None
        // Field count: 5
        public static class CSmoothFunc {
            public const nint m_flSmoothAmplitude = 0x8; // float32
            public const nint m_flSmoothBias = 0xC; // float32
            public const nint m_flSmoothDuration = 0x10; // float32
            public const nint m_flSmoothRemainingTime = 0x14; // float32
            public const nint m_nSmoothDir = 0x18; // int32
        }
        // Parent: None
        // Field count: 0
        public static class IHasAttributes {
        }
        // Parent: None
        // Field count: 5
        public static class ragdoll_t {
            public const nint list = 0x0; // CUtlVector<ragdollelement_t>
            public const nint hierarchyJoints = 0x18; // CUtlVector<ragdollhierarchyjoint_t>
            public const nint boneIndex = 0x30; // CUtlVector<int32>
            public const nint allowStretch = 0x48; // bool
            public const nint unused = 0x49; // bool
        }
        // Parent: None
        // Field count: 10
        public static class HullFlags_t {
            public const nint m_bHull_Human = 0x0; // bool
            public const nint m_bHull_SmallCentered = 0x1; // bool
            public const nint m_bHull_WideHuman = 0x2; // bool
            public const nint m_bHull_Tiny = 0x3; // bool
            public const nint m_bHull_Medium = 0x4; // bool
            public const nint m_bHull_TinyCentered = 0x5; // bool
            public const nint m_bHull_Large = 0x6; // bool
            public const nint m_bHull_LargeCentered = 0x7; // bool
            public const nint m_bHull_MediumTall = 0x8; // bool
            public const nint m_bHull_Small = 0x9; // bool
        }
        // Parent: None
        // Field count: 0
        public static class ISkeletonAnimationController {
        }
        // Parent: None
        // Field count: 2
        public static class RotatorHistoryEntry_t {
            public const nint qInvChange = 0x0; // Quaternion
            public const nint flTimeRotationStart = 0x10; // GameTime_t
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class GameAmmoTypeInfo_t {
            public const nint m_nBuySize = 0x38; // int32
            public const nint m_nCost = 0x3C; // int32
        }
        // Parent: None
        // Field count: 4
        public static class CMotorController {
            public const nint m_speed = 0x8; // float32
            public const nint m_maxTorque = 0xC; // float32
            public const nint m_axis = 0x10; // VectorWS
            public const nint m_inertiaFactor = 0x1C; // float32
        }
        // Parent: CSimpleSimTimer
        // Field count: 1
        public static class CSimTimer {
            public const nint m_flInterval = 0x8; // float32
        }
        // Parent: None
        // Field count: 6
        public static class CBaseIssue {
            public const nint m_szTypeString = 0x20; // char[64]
            public const nint m_szDetailsString = 0x60; // char[260]
            public const nint m_iNumYesVotes = 0x164; // int32
            public const nint m_iNumNoVotes = 0x168; // int32
            public const nint m_iNumPotentialVotes = 0x16C; // int32
            public const nint m_pVoteController = 0x170; // CVoteController*
        }
        // Parent: None
        // Field count: 4
        public static class SummaryTakeDamageInfo_t {
            public const nint nSummarisedCount = 0x0; // int32
            public const nint info = 0x8; // CTakeDamageInfo
            public const nint result = 0x120; // CTakeDamageResult
            public const nint hTarget = 0x170; // CHandle<CBaseEntity>
        }
        // Parent: None
        // Field count: 1
        public static class INavObstacle {
            public const nint m_nId = 0x8; // uint64
        }
        // Parent: None
        // Field count: 9
        public static class CSceneRequest {
            public const nint m_szPayloadVDataName = 0x0; // CUtlSymbolLarge
            public const nint m_uHandle = 0x8; // SceneRequestHandle_t
            public const nint m_state = 0xC; // ESceneRequestState_t
            public const nint m_nNPCBehaviorOverride = 0x10; // ENPCBehaviorOverride_t
            public const nint m_vecActorMap = 0x18; // CUtlVector<SceneRequestTargetMapPair_t>
            public const nint m_vecAnchorMap = 0x30; // CUtlVector<SceneRequestTargetMapPair_t>
            public const nint m_vecGraphMap = 0x48; // CUtlVector<SceneRequestTargetMapPair_t>
            public const nint m_hOwner = 0x60; // CHandle<CBaseEntity>
            public const nint m_nameMapKV3 = 0x68; // KeyValues3
        }
        // Parent: None
        // Field count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class entitytable_t {
            public const nint id = 0x0; // int32
            public const nint edictindex = 0x4; // CEntityIndex
            public const nint saveentityindex = 0x8; // CEntityIndex
            public const nint bWasSaved = 0x14; // bool
            public const nint flags = 0x18; // SaveRestoreTableFlags_t
            public const nint classname = 0x20; // CUtlSymbolLarge
            public const nint globalname = 0x28; // CUtlSymbolLarge
            public const nint entityname = 0x30; // CUtlSymbolLarge
            public const nint landmarkModelSpace = 0x38; // Vector
            public const nint m_pPrecacheEntityKeys = 0x48; // CEntityKeyValues*
        }
        // Parent: None
        // Field count: 6
        public static class SceneOpportunityActor_t {
            public const nint m_hActor = 0x0; // CHandle<CBaseModelEntity>
            public const nint m_bDynamicActor = 0x4; // bool
            public const nint m_bAnchor = 0x5; // bool
            public const nint m_strActorName = 0x8; // CUtlSymbolLarge
            public const nint m_strEntityName = 0x10; // CUtlSymbolLarge
            public const nint m_InterestTags = 0x18; // SceneInterestTags_t
        }
        // Parent: None
        // Field count: 10
        public static class CRR_Response {
            public const nint m_Type = 0x0; // uint8
            public const nint m_szResponseName = 0x1; // char[192]
            public const nint m_szMatchingRule = 0xC1; // char[128]
            public const nint m_Params = 0x160; // ResponseParams
            public const nint m_fMatchScore = 0x180; // float32
            public const nint m_bAnyMatchingRulesInCooldown = 0x184; // bool
            public const nint m_szSpeakerContext = 0x188; // char*
            public const nint m_szWorldContext = 0x190; // char*
            public const nint m_Followup = 0x198; // ResponseFollowup
            public const nint m_recipientFilter = 0x1CA; // CUtlSymbol
        }
        // Parent: None
        // Field count: 0
        public static class CVectorExponentialMovingAverage {
        }
        // Parent: None
        // Field count: 11
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmAimCSNode__CDefinition {
            public const nint m_nVerticalAngleNodeIdx = 0x18; // int16
            public const nint m_nHorizontalAngleNodeIdx = 0x1A; // int16
            public const nint m_nWeaponCategoryNodeIdx = 0x1C; // int16
            public const nint m_nWeaponTypeNodeIdx = 0x1E; // int16
            public const nint m_nWeaponActionNodeIdx = 0x20; // int16
            public const nint m_nWeaponDropNodeIdx = 0x22; // int16
            public const nint m_nIsDefusingNodeIdx = 0x24; // int16
            public const nint m_nCrouchWeightNodeIdx = 0x26; // int16
            public const nint m_flHandIKBlendInTimeSeconds = 0x28; // float32
            public const nint m_flActionBlendTimeSeconds = 0x2C; // float32
            public const nint m_flPlantingBlendTimeSeconds = 0x30; // float32
        }
        // Parent: None
        // Field count: 4
        public static class CConstantForceController {
            public const nint m_linear = 0xC; // Vector
            public const nint m_angular = 0x18; // RotationVector
            public const nint m_linearSave = 0x24; // Vector
            public const nint m_angularSave = 0x30; // RotationVector
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class WaterWheelDrag_t {
            public const nint m_flFractionOfWheelSubmerged = 0x0; // float32
            public const nint m_flWheelDrag = 0x4; // float32
        }
        // Parent: None
        // Field count: 22
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CTakeDamageInfo {
            public const nint m_vecDamageForce = 0x8; // Vector
            public const nint m_vecDamagePosition = 0x14; // VectorWS
            public const nint m_vecReportedPosition = 0x20; // VectorWS
            public const nint m_vecDamageDirection = 0x2C; // Vector
            public const nint m_hInflictor = 0x38; // CHandle<CBaseEntity>
            public const nint m_hAttacker = 0x3C; // CHandle<CBaseEntity>
            public const nint m_hAbility = 0x40; // CHandle<CBaseEntity>
            public const nint m_flDamage = 0x44; // float32
            public const nint m_flTotalledDamage = 0x48; // float32
            public const nint m_bitsDamageType = 0x4C; // DamageTypes_t
            public const nint m_iDamageCustom = 0x50; // int32
            public const nint m_iAmmoType = 0x54; // AmmoIndex_t
            public const nint m_flOriginalDamage = 0x60; // float32
            public const nint m_bShouldBleed = 0x64; // bool
            public const nint m_bShouldSpark = 0x65; // bool
            public const nint m_nDamageFlags = 0x70; // TakeDamageFlags_t
            public const nint m_iHitGroupId = 0x78; // HitGroup_t
            public const nint m_nNumObjectsPenetrated = 0x7C; // int32
            public const nint m_flFriendlyFireDamageReductionRatio = 0x80; // float32
            public const nint m_bStoppedBullet = 0x84; // bool
            public const nint m_DestructibleHitGroupRequests = 0x100; // CUtlLeanVector<DestructiblePartDamageRequest_t>
            public const nint m_bInTakeDamageFlow = 0x110; // bool
        }
        // Parent: CSimpleSimTimer
        // Field count: 2
        public static class CRandSimTimer {
            public const nint m_flMinInterval = 0x8; // float32
            public const nint m_flMaxInterval = 0xC; // float32
        }
        // Parent: None
        // Field count: 0
        public static class CBtNodeComposite {
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CRelativeLocation {
            public const nint m_Type = 0x18; // RelativeLocationType_t
            public const nint m_vRelativeOffset = 0x1C; // Vector
            public const nint m_vWorldSpacePos = 0x28; // VectorWS
            public const nint m_hEntity = 0x34; // CHandle<CBaseEntity>
        }
        // Parent: None
        // Field count: 2
        public static class Extent {
            public const nint lo = 0x0; // VectorWS
            public const nint hi = 0xC; // VectorWS
        }
        // Parent: None
        // Field count: 5
        public static class sndopvarlatchdata_t {
            public const nint m_iszStack = 0x8; // CUtlSymbolLarge
            public const nint m_iszOperator = 0x10; // CUtlSymbolLarge
            public const nint m_iszOpvar = 0x18; // CUtlSymbolLarge
            public const nint m_flVal = 0x20; // float32
            public const nint m_vPos = 0x24; // Vector
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class PrecipitationFilter_t {
            public const nint m_flMaxRadius = 0x0; // float32
        }
        // Parent: None
        // Field count: 0
        public static class IEconItemInterface {
        }
        // Parent: None
        // Field count: 2
        public static class PathMoverEntitySpawn {
            public const nint hMover = 0x0; // CHandle<CFuncMover>
            public const nint vecOtherEntities = 0x8; // CUtlVector<CHandle<CBaseEntity>>
        }
        // Parent: None
        // Field count: 1
        public static class CMultiplayer_Expresser {
            public const nint m_bAllowMultipleScenes = 0xA0; // bool
        }
        // Parent: None
        // Field count: 0
        public static class CNavVolume {
        }
        // Parent: None
        // Field count: 0
        public static class QuestProgress {
        }
        // Parent: None
        // Field count: 0
        public static class CNmAimCSTask {
        }
        // Parent: None
        // Field count: 1
        public static class ParticleIndex_t {
            public const nint m_Value = 0x0; // int32
        }
        // Parent: None
        // Field count: 0
        public static class CAI_ExpresserWithFollowup {
        }
        // Parent: None
        // Field count: 1
        public static class CTakeDamageSummaryScopeGuard {
            public const nint m_vecSummaries = 0x8; // CUtlVector<SummaryTakeDamageInfo_t*>
        }
        // Parent: None
        // Field count: 4
        public static class CIronSightController {
            public const nint m_bIronSightAvailable = 0x8; // bool
            public const nint m_flIronSightAmount = 0xC; // float32
            public const nint m_flIronSightAmountGained = 0x10; // float32
            public const nint m_flIronSightAmountBiased = 0x14; // float32
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmEventConsumerSound {
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmEventConsumerLegacy {
        }
        // Parent: None
        // Field count: 9
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class DestructiblePartDamageRequest_t {
            public const nint m_nHitGroup = 0x0; // HitGroup_t
            public const nint m_nDamageLevel = 0x4; // int32
            public const nint m_nDesiredHealth = 0x8; // uint16
            public const nint m_nDestroyFlags = 0xC; // EDestructibleParts_DestroyParameterFlags
            public const nint m_nDamageType = 0x10; // DamageTypes_t
            public const nint m_flBreakDamage = 0x14; // float32
            public const nint m_flBreakDamageRadius = 0x18; // float32
            public const nint m_vWsBreakDamageOrigin = 0x1C; // VectorWS
            public const nint m_vWsBreakDamageForce = 0x28; // Vector
        }
        // Parent: None
        // Field count: 1
        public static class CInButtonState {
            public const nint m_pButtonStates = 0x8; // uint64[3]
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmEventConsumerParticle {
        }
        // Parent: None
        // Field count: 15
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNavHullVData {
            public const nint m_bAgentEnabled = 0x0; // bool
            public const nint m_agentRadius = 0x4; // float32
            public const nint m_agentHeight = 0x8; // float32
            public const nint m_agentShortHeightEnabled = 0xC; // bool
            public const nint m_agentShortHeight = 0x10; // float32
            public const nint m_agentCrawlEnabled = 0x14; // bool
            public const nint m_agentCrawlHeight = 0x18; // float32
            public const nint m_agentMaxClimb = 0x1C; // float32
            public const nint m_agentMaxSlope = 0x20; // int32
            public const nint m_agentMaxJumpDownDist = 0x24; // float32
            public const nint m_agentMaxJumpHorizDistBase = 0x28; // float32
            public const nint m_agentMaxJumpUpDist = 0x2C; // float32
            public const nint m_agentBorderErosion = 0x30; // int32
            public const nint m_flowMapGenerationEnabled = 0x34; // bool
            public const nint m_flowMapNodeMaxRadius = 0x38; // float32
        }
        // Parent: None
        // Field count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class AI_DefaultNPC_DebugSnapshotData_t {
            public const nint s_npc_current_ability = 0x8; // CGlobalSymbol
            public const nint s_npc_tactic_current = 0x10; // CGlobalSymbol
            public const nint s_npc_tactic_phase = 0x18; // CGlobalSymbol
            public const nint tactic_interrupt_conditions = 0x20; // CUtlVector<CGlobalSymbol>
            public const nint s_npc_current_movement = 0x38; // CUtlString
            public const nint path_query_schedule = 0x40; // AI_DefaultNPC_DebugSnapshotData_t::PathQuery_t
            public const nint path_query_tactic = 0x68; // AI_DefaultNPC_DebugSnapshotData_t::PathQuery_t
            public const nint path_queries_speculative = 0x90; // CUtlVector<AI_DefaultNPC_DebugSnapshotData_t::PathQuery_t>
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmSnapWeaponNode__CDefinition {
            public const nint m_nFlashedAmountNodeIdx = 0x18; // int16
            public const nint m_nWeaponCategoryNodeIdx = 0x1A; // int16
            public const nint m_nWeaponTypeNodeIdx = 0x1C; // int16
        }
        // Parent: None
        // Field count: 3
        public static class SoundOpvarTraceResult_t {
            public const nint vPos = 0x0; // Vector
            public const nint bDidHit = 0xC; // bool
            public const nint flDistSqrToCenter = 0x10; // float32
        }
        // Parent: None
        // Field count: 0
        public static class CAnimEventListener {
        }
        // Parent: None
        // Field count: 0
        public static class CNavVolumeCalculatedVector {
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MPropertyCustomEditor
        public static class CFiringModeInt {
            public const nint m_nValues = 0x0; // int32[2]
        }
        // Parent: None
        // Field count: 0
        public static class CBtNodeDecorator {
        }
        // Parent: None
        // Field count: 12
        public static class CSAdditionalPerRoundStats_t {
            public const nint m_numChickensKilled = 0x0; // int32
            public const nint m_killsWhileBlind = 0x4; // int32
            public const nint m_bombCarrierkills = 0x8; // int32
            public const nint m_flBurnDamageInflicted = 0xC; // float32
            public const nint m_flBlastDamageInflicted = 0x10; // float32
            public const nint m_iDinks = 0x14; // int32
            public const nint m_bFreshStartThisRound = 0x18; // bool
            public const nint m_bBombPlantedAndAlive = 0x19; // bool
            public const nint m_nDefuseStarts = 0x1C; // int32
            public const nint m_nHostagePickUps = 0x20; // int32
            public const nint m_numTeammatesFlashed = 0x24; // int32
            public const nint m_strAnnotationsWorkshopId = 0x28; // CUtlString
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CEmptyGraphController {
        }
        // Parent: None
        // Field count: 1
        public static class ModelConfigHandle_t {
            public const nint m_Value = 0x0; // uint32
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MVDataNodeType
        // MVDataOverlayType
        public static class CEntitySubclassVDataBase {
        }
        // Parent: None
        // Field count: 2
        public static class CBreakableStageHelper {
            public const nint m_nCurrentStage = 0x8; // int32
            public const nint m_nStageCount = 0xC; // int32
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class AI_MotorGroundAnimgraph_DebugSnapshotData_t__Event_t {
            public const nint description = 0x0; // CUtlString
            public const nint location = 0x8; // VectorWS
        }
        // Parent: None
        // Field count: 2
        public static class CNavVolumeBreadthFirstSearch {
            public const nint m_vStartPos = 0xA8; // VectorWS
            public const nint m_flSearchDist = 0xB4; // float32
        }
        // Parent: None
        // Field count: 1
        public static class SceneOpportunityHandle_t {
            public const nint m_Value = 0x0; // int32
        }
        // Parent: dynpitchvol_base_t
        // Field count: 0
        public static class dynpitchvol_t {
        }
        // Parent: None
        // Field count: 12
        public static class CSAdditionalMatchStats_t {
            public const nint m_numRoundsSurvivedStreak = 0xF8; // int32
            public const nint m_maxNumRoundsSurvivedStreak = 0xFC; // int32
            public const nint m_numRoundsSurvivedTotal = 0x100; // int32
            public const nint m_iRoundsWonWithoutPurchase = 0x104; // int32
            public const nint m_iRoundsWonWithoutPurchaseTotal = 0x108; // int32
            public const nint m_numFirstKills = 0x10C; // int32
            public const nint m_numClutchKills = 0x110; // int32
            public const nint m_numPistolKills = 0x114; // int32
            public const nint m_numSniperKills = 0x118; // int32
            public const nint m_iNumSuicides = 0x11C; // int32
            public const nint m_iNumTeamKills = 0x120; // int32
            public const nint m_flTeamDamage = 0x124; // float32
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class AI_Navigator_DebugSnapshotData_t__Waypoint_t {
            public const nint position = 0x0; // VectorWS
            public const nint nav_type = 0xC; // uint32
            public const nint flags = 0x10; // uint32
        }
        // Parent: None
        // Field count: 4
        public static class CSceneCriteria {
            public const nint m_hOwner = 0x0; // CHandle<CBaseEntity>
            public const nint m_ePriority = 0x4; // InteractionPriority_t
            public const nint m_InterestReqTags = 0x8; // SceneInterestTags_t
            public const nint m_InterestOptTags = 0x20; // SceneInterestTags_t
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CTestPulseIOComponent {
            public const nint m_ComponentData = 0x8; // CUtlString
            public const nint m_OnComponentTestFunc = 0x10; // CEntityOutputTemplate<CUtlSymbolLarge>
        }
        // Parent: None
        // Field count: 0
        public static class IRagdoll {
        }
        // Parent: None
        // Field count: 18
        public static class CCSPlayerAnimationState {
            public const nint m_currentMoveType = 0x18; // CCSPlayerAnimationState::MoveType_t
            public const nint m_groundMoveState = 0x19; // CCSPlayerAnimationState::GroundMoveState_t
            public const nint m_groundActionDirection = 0x1A; // CCSPlayerAnimationState::Direction_t
            public const nint m_airAction = 0x1B; // CCSPlayerAnimationState::AirAction_t
            public const nint m_bWasOnGroundLastUpdate = 0x1C; // bool
            public const nint m_bWasStationaryLastUpdate = 0x1D; // bool
            public const nint m_actionStartTick = 0x20; // GameTick_t
            public const nint m_staticAimTimerStartTick = 0x24; // GameTick_t
            public const nint m_stutterStepStartTick = 0x28; // GameTick_t
            public const nint m_plantAndTurnStartTick = 0x2C; // GameTick_t
            public const nint m_bIsStutterStep = 0x30; // bool
            public const nint m_flTurnOnSpotAngle = 0x34; // float32
            public const nint m_flPreviousAimYaw = 0x38; // float32
            public const nint m_flPreviousHorizontalSpeed = 0x3C; // float32
            public const nint m_flFootIKOffsetLeft = 0x40; // float32
            public const nint m_flFootIKOffsetRight = 0x44; // float32
            public const nint m_flWeaponDropPercentageDueToMovement = 0x48; // float32
            public const nint m_flWeaponDropSmoothDampVelocity = 0x4C; // float32
        }
        // Parent: None
        // Field count: 6
        public static class hudtextparms_t {
            public const nint color1 = 0x0; // Color
            public const nint color2 = 0x4; // Color
            public const nint effect = 0x8; // uint8
            public const nint channel = 0x9; // uint8
            public const nint x = 0xC; // float32
            public const nint y = 0x10; // float32
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimGraphControllerBase {
            public const nint m_hExternalGraph = 0x10; // ExternalAnimGraphHandle_t
        }
        // Parent: None
        // Field count: 3
        public static class CNetworkVelocityVector {
            public const nint m_vecX = 0x10; // CNetworkedQuantizedFloat
            public const nint m_vecY = 0x18; // CNetworkedQuantizedFloat
            public const nint m_vecZ = 0x20; // CNetworkedQuantizedFloat
        }
        // Parent: None
        // Field count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CDestructiblePart_DamageLevel {
            public const nint m_sName = 0x0; // CUtlString
            public const nint m_sBreakablePieceName = 0x8; // CGlobalSymbol
            public const nint m_nBodyGroupValue = 0x10; // int32
            public const nint m_nHealth = 0x14; // CSkillInt
            public const nint m_flCriticalDamagePercent = 0x24; // float32
            public const nint m_nDamagePassthroughType = 0x28; // EDestructiblePartDamagePassThroughType
            public const nint m_nDestructionDeathBehavior = 0x2C; // DestructiblePartDestructionDeathBehavior_t
            public const nint m_sCustomDeathHandshake = 0x30; // CGlobalSymbol
            public const nint m_bShouldDestroyOnDeath = 0x38; // bool
            public const nint m_flDeathDestroyTime = 0x3C; // CRangeFloat
        }
        // Parent: None
        // Field count: 0
        public static class CNavVolumeAll {
        }
        // Parent: None
        // Field count: 2
        public static class CNavVolumeSphere {
            public const nint m_vCenter = 0x78; // VectorWS
            public const nint m_flRadius = 0x84; // float32
        }
        // Parent: None
        // Field count: 2
        public static class Relationship_t {
            public const nint disposition = 0x0; // Disposition_t
            public const nint priority = 0x4; // int32
        }
    }
}
