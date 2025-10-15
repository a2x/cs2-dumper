// Generated using https://github.com/a2x/cs2-dumper
// 2025-10-14 23:58:25.486779500 UTC

#![allow(non_upper_case_globals, non_camel_case_types, non_snake_case, unused)]

pub mod cs2_dumper {
    pub mod schemas {
        // Module: server.dll
        // Class count: 717
        // Enum count: 150
        pub mod server_dll {
            // Alignment: 4
            // Member count: 3
            #[repr(u32)]
            pub enum PropDoorRotatingOpenDirection_e {
                DOOR_ROTATING_OPEN_BOTH_WAYS = 0x0,
                DOOR_ROTATING_OPEN_FORWARD = 0x1,
                DOOR_ROTATING_OPEN_BACKWARD = 0x2
            }
            // Alignment: 4
            // Member count: 1
            #[repr(u32)]
            pub enum PulseCollisionGroup_t {
                DEFAULT = 0x0
            }
            // Alignment: 4
            // Member count: 2
            #[repr(u32)]
            pub enum SceneOnPlayerDeath_t {
                SCENE_ONPLAYERDEATH_DO_NOTHING = 0x0,
                SCENE_ONPLAYERDEATH_CANCEL = 0x1
            }
            // Alignment: 4
            // Member count: 3
            #[repr(u32)]
            pub enum LessonPanelLayoutFileTypes_t {
                LAYOUT_HAND_DEFAULT = 0x0,
                LAYOUT_WORLD_DEFAULT = 0x1,
                LAYOUT_CUSTOM = 0x2
            }
            // Alignment: 4
            // Member count: 5
            #[repr(u32)]
            pub enum TimelineCompression_t {
                TIMELINE_COMPRESSION_SUM = 0x0,
                TIMELINE_COMPRESSION_COUNT_PER_INTERVAL = 0x1,
                TIMELINE_COMPRESSION_AVERAGE = 0x2,
                TIMELINE_COMPRESSION_AVERAGE_BLEND = 0x3,
                TIMELINE_COMPRESSION_TOTAL = 0x4
            }
            // Alignment: 4
            // Member count: 3
            #[repr(u32)]
            pub enum SubclassVDataChangeType_t {
                SUBCLASS_VDATA_CREATED = 0x0,
                SUBCLASS_VDATA_SUBCLASS_CHANGED = 0x1,
                SUBCLASS_VDATA_RELOADED = 0x2
            }
            // Alignment: 4
            // Member count: 3
            #[repr(u32)]
            pub enum C4LightEffect_t {
                eLightEffectNone = 0x0,
                eLightEffectDropped = 0x1,
                eLightEffectThirdPersonHeld = 0x2
            }
            // Alignment: 4
            // Member count: 5
            #[repr(u32)]
            pub enum StanceType_t {
                STANCE_CURRENT = u32::MAX,
                STANCE_DEFAULT = 0x0,
                STANCE_CROUCHING = 0x1,
                STANCE_PRONE = 0x2,
                NUM_STANCES = 0x3
            }
            // Alignment: 4
            // Member count: 3
            #[repr(u32)]
            pub enum Explosions {
                expRandom = 0x0,
                expDirected = 0x1,
                expUsePrecise = 0x2
            }
            // Alignment: 4
            // Member count: 11
            #[repr(u32)]
            pub enum PreviewCharacterMode {
                INVALID = u32::MAX,
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
            #[repr(u32)]
            pub enum ObserverInterpState_t {
                OBSERVER_INTERP_NONE = 0x0,
                OBSERVER_INTERP_STARTING = 0x1,
                OBSERVER_INTERP_TRAVELING = 0x2,
                OBSERVER_INTERP_SETTLING = 0x3
            }
            // Alignment: 4
            // Member count: 3
            #[repr(u32)]
            pub enum WorldTextPanelOrientation_t {
                WORLDTEXT_ORIENTATION_DEFAULT = 0x0,
                WORLDTEXT_ORIENTATION_FACEUSER = 0x1,
                WORLDTEXT_ORIENTATION_FACEUSER_UPRIGHT = 0x2
            }
            // Alignment: 4
            // Member count: 7
            #[repr(u32)]
            pub enum EDestructibleParts_DestroyParameterFlags {
                None = 0x0,
                GenerateBreakpieces = 0x1,
                EnableFlinches = 0x2,
                ForceDamageApply = 0x4,
                IgnoreKillEntityFlag = 0x8,
                IgnoreHealthCheck = 0x10,
                Default = 0x3
            }
            // Alignment: 4
            // Member count: 3
            #[repr(u32)]
            pub enum WorldTextPanelHorizontalAlign_t {
                WORLDTEXT_HORIZONTAL_ALIGN_LEFT = 0x0,
                WORLDTEXT_HORIZONTAL_ALIGN_CENTER = 0x1,
                WORLDTEXT_HORIZONTAL_ALIGN_RIGHT = 0x2
            }
            // Alignment: 1
            // Member count: 3
            #[repr(u8)]
            pub enum SequenceFinishNotifyState_t {
                eDoNotNotify = 0x0,
                eNotifyWhenFinished = 0x1,
                eNotifyTriggered = 0x2
            }
            // Alignment: 4
            // Member count: 3
            #[repr(u32)]
            pub enum SoundEventStartType_t {
                SOUNDEVENT_START_PLAYER = 0x0,
                SOUNDEVENT_START_WORLD = 0x1,
                SOUNDEVENT_START_ENTITY = 0x2
            }
            // Alignment: 4
            // Member count: 5
            #[repr(u32)]
            pub enum AnimGraphDebugDrawType_t {
                None = 0x0,
                WsPosition = 0x1,
                MsPosition = 0x2,
                WsDirection = 0x3,
                MsDirection = 0x4
            }
            // Alignment: 4
            // Member count: 4
            #[repr(u32)]
            pub enum TrainOrientationType_t {
                TrainOrientation_Fixed = 0x0,
                TrainOrientation_AtPathTracks = 0x1,
                TrainOrientation_LinearBlend = 0x2,
                TrainOrientation_EaseInEaseOut = 0x3
            }
            // Alignment: 4
            // Member count: 7
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
            // Member count: 2
            #[repr(u8)]
            pub enum BeginDeathLifeStateTransition_t {
                TRANSITION_TO_LIFESTATE_DYING = 0x0,
                TRANSITION_TO_LIFESTATE_DEAD = 0x1
            }
            // Alignment: 4
            // Member count: 5
            #[repr(u32)]
            pub enum PointOrientGoalDirectionType_t {
                eAbsOrigin = 0x0,
                eCenter = 0x1,
                eHead = 0x2,
                eForward = 0x3,
                eEyesForward = 0x4
            }
            // Alignment: 1
            // Member count: 9
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
            // Member count: 10
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
                USE_ROTATION_EXPANDED_SEQUENCE_BOUNDS = 0x8
            }
            // Alignment: 4
            // Member count: 6
            #[repr(u32)]
            pub enum LifeState_t {
                LIFE_ALIVE = 0x0,
                LIFE_DYING = 0x1,
                LIFE_DEAD = 0x2,
                LIFE_RESPAWNABLE = 0x3,
                LIFE_RESPAWNING = 0x4,
                NUM_LIFESTATES = 0x5
            }
            // Alignment: 4
            // Member count: 2
            #[repr(u32)]
            pub enum PointOrientConstraint_t {
                eNone = 0x0,
                ePreserveUpAxis = 0x1
            }
            // Alignment: 4
            // Member count: 5
            #[repr(u32)]
            pub enum NPCFollowFormation_t {
                Default = u32::MAX,
                CloseCircle = 0x0,
                WideCircle = 0x1,
                MediumCircle = 0x5,
                Sidekick = 0x6
            }
            // Alignment: 4
            // Member count: 3
            #[repr(u32)]
            pub enum CSWeaponMode {
                Primary_Mode = 0x0,
                Secondary_Mode = 0x1,
                WeaponMode_MAX = 0x2
            }
            // Alignment: 1
            // Member count: 3
            #[repr(u8)]
            pub enum OnFrame {
                ONFRAME_UNKNOWN = 0x0,
                ONFRAME_TRUE = 0x1,
                ONFRAME_FALSE = 0x2
            }
            // Alignment: 4
            // Member count: 12
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
            // Member count: 9
            #[repr(u32)]
            pub enum BloodType {
                None = u32::MAX,
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
            #[repr(u8)]
            pub enum NavScope_t {
                eGround = 0x0,
                eAir = 0x1,
                eCount = 0x2,
                eInvalid = 0xFF
            }
            // Alignment: 4
            // Member count: 4
            #[repr(u32)]
            pub enum BreakableContentsType_t {
                BC_DEFAULT = 0x0,
                BC_EMPTY = 0x1,
                BC_PROP_GROUP_OVERRIDE = 0x2,
                BC_PARTICLE_SYSTEM_OVERRIDE = 0x3
            }
            // Alignment: 4
            // Member count: 5
            #[repr(u32)]
            pub enum AnimLoopMode_t {
                ANIM_LOOP_MODE_INVALID = u32::MAX,
                ANIM_LOOP_MODE_NOT_LOOPING = 0x0,
                ANIM_LOOP_MODE_LOOPING = 0x1,
                ANIM_LOOP_MODE_USE_SEQUENCE_SETTINGS = 0x2,
                ANIM_LOOP_MODE_COUNT = 0x3
            }
            // Alignment: 4
            // Member count: 14
            #[repr(u32)]
            pub enum Class_T {
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
            #[repr(u32)]
            pub enum filter_t {
                FILTER_AND = 0x0,
                FILTER_OR = 0x1
            }
            // Alignment: 4
            // Member count: 3
            #[repr(u32)]
            pub enum CSWeaponSilencerType {
                WEAPONSILENCER_NONE = 0x0,
                WEAPONSILENCER_DETACHABLE = 0x1,
                WEAPONSILENCER_INTEGRATED = 0x2
            }
            // Alignment: 4
            // Member count: 2
            #[repr(u32)]
            pub enum EProceduralRagdollWeightIndexPropagationMethod {
                Bone = 0x0,
                BoneAndChildren = 0x1
            }
            // Alignment: 4
            // Member count: 17
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
            // Member count: 40
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
            }
            // Alignment: 1
            // Member count: 3
            #[repr(u8)]
            pub enum FixAngleSet_t {
                None = 0x0,
                Absolute = 0x1,
                Relative = 0x2
            }
            // Alignment: 4
            // Member count: 5
            #[repr(u32)]
            pub enum IChoreoServices__ScriptState_t {
                SCRIPT_PLAYING = 0x0,
                SCRIPT_WAIT = 0x1,
                SCRIPT_POST_IDLE = 0x2,
                SCRIPT_CLEANUP = 0x3,
                SCRIPT_MOVE_TO_MARK = 0x4
            }
            // Alignment: 4
            // Member count: 5
            #[repr(u32)]
            pub enum Touch_t {
                touch_none = 0x0,
                touch_player_only = 0x1,
                touch_npc_only = 0x2,
                touch_player_or_npc = 0x3,
                touch_player_or_npc_or_physicsprop = 0x4
            }
            // Alignment: 4
            // Member count: 3
            #[repr(u32)]
            pub enum TrainVelocityType_t {
                TrainVelocity_Instantaneous = 0x0,
                TrainVelocity_LinearBlend = 0x1,
                TrainVelocity_EaseInEaseOut = 0x2
            }
            // Alignment: 4
            // Member count: 13
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
                WEAPONTYPE_UNKNOWN = 0xC
            }
            // Alignment: 1
            // Member count: 4
            #[repr(u8)]
            pub enum NavScopeFlags_t {
                eGround = 0x1,
                eAir = 0x2,
                eAll = 0x3,
                eNone = 0x0
            }
            // Alignment: 4
            // Member count: 3
            #[repr(u32)]
            pub enum EntFinderMethod_t {
                ENT_FIND_METHOD_NEAREST = 0x0,
                ENT_FIND_METHOD_FARTHEST = 0x1,
                ENT_FIND_METHOD_RANDOM = 0x2
            }
            // Alignment: 4
            // Member count: 3
            #[repr(u32)]
            pub enum TestInputOutputCombinationsEnum_t {
                ZERO = 0x0,
                ONE = 0x1,
                TWO = 0x2
            }
            // Alignment: 4
            // Member count: 4
            #[repr(u32)]
            pub enum PropDoorRotatingSpawnPos_t {
                DOOR_SPAWN_CLOSED = 0x0,
                DOOR_SPAWN_OPEN_FORWARD = 0x1,
                DOOR_SPAWN_OPEN_BACK = 0x2,
                DOOR_SPAWN_AJAR = 0x3
            }
            // Alignment: 1
            // Member count: 2
            #[repr(u8)]
            pub enum ShardSolid_t {
                SHARD_SOLID = 0x0,
                SHARD_DEBRIS = 0x1
            }
            // Alignment: 1
            // Member count: 3
            #[repr(u8)]
            pub enum EntityPlatformTypes_t {
                ENTITY_NOT_PLATFORM = 0x0,
                ENTITY_PLATFORM_PLAYER_FOLLOWS_YAW = 0x1,
                ENTITY_PLATFORM_PLAYER_IGNORES_YAW = 0x2
            }
            // Alignment: 4
            // Member count: 5
            #[repr(u32)]
            pub enum PulseNPCCondition_t {
                COND_SEE_PLAYER = 0x1,
                COND_LOST_PLAYER = 0x2,
                COND_HEAR_PLAYER = 0x3,
                COND_PLAYER_PUSHING = 0x4,
                COND_NO_PRIMARY_AMMO = 0x5
            }
            // Alignment: 1
            // Member count: 13
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
            // Member count: 3
            #[repr(u32)]
            pub enum ForcedCrouchState_t {
                FORCEDCROUCH_NONE = 0x0,
                FORCEDCROUCH_CROUCHED = 0x1,
                FORCEDCROUCH_UNCROUCHED = 0x2
            }
            // Alignment: 4
            // Member count: 2
            #[repr(u32)]
            pub enum PerformanceMode_t {
                PM_NORMAL = 0x0,
                PM_NO_GIBS = 0x1
            }
            // Alignment: 4
            // Member count: 8
            #[repr(u32)]
            pub enum TOGGLE_STATE {
                TS_AT_TOP = 0x0,
                TS_AT_BOTTOM = 0x1,
                TS_GOING_UP = 0x2,
                TS_GOING_DOWN = 0x3
            }
            // Alignment: 4
            // Member count: 74
            #[repr(u32)]
            pub enum loadout_slot_t {
                LOADOUT_SLOT_PROMOTED = 0xFFFFFFFFFFFFFFFE,
                LOADOUT_SLOT_INVALID = u32::MAX,
                LOADOUT_SLOT_MELEE = 0x0,
                LOADOUT_SLOT_C4 = 0x1,
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
                LOADOUT_SLOT_FIRST_WHEEL_GRENADE = 0x1A,
                LOADOUT_SLOT_GRENADE1 = 0x1B,
                LOADOUT_SLOT_GRENADE2 = 0x1C,
                LOADOUT_SLOT_GRENADE3 = 0x1D,
                LOADOUT_SLOT_GRENADE4 = 0x1E,
                LOADOUT_SLOT_GRENADE5 = 0x1F,
                LOADOUT_SLOT_EQUIPMENT0 = 0x20,
                LOADOUT_SLOT_EQUIPMENT1 = 0x21,
                LOADOUT_SLOT_EQUIPMENT2 = 0x22,
                LOADOUT_SLOT_EQUIPMENT3 = 0x23,
                LOADOUT_SLOT_EQUIPMENT4 = 0x24,
                LOADOUT_SLOT_EQUIPMENT5 = 0x25,
                LOADOUT_SLOT_CLOTHING_CUSTOMPLAYER = 0x26,
                LOADOUT_SLOT_CLOTHING_CUSTOMHEAD = 0x27,
                LOADOUT_SLOT_CLOTHING_FACEMASK = 0x28,
                LOADOUT_SLOT_CLOTHING_HANDS = 0x29,
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
                LOADOUT_SLOT_COUNT = 0x39
            }
            // Alignment: 4
            // Member count: 4
            #[repr(u32)]
            pub enum EDestructiblePartDamagePassThroughType {
                Normal = 0x0,
                Absorb = 0x1,
                InvincibleAbsorb = 0x2,
                InvinciblePassthrough = 0x3
            }
            // Alignment: 8
            // Member count: 20
            #[repr(u64)]
            pub enum NavAttributeEnum {
                NAV_MESH_AVOID = 0x80,
                NAV_MESH_STAIRS = 0x1000,
                NAV_MESH_NON_ZUP = 0x8000,
                NAV_MESH_CROUCH_HEIGHT = 0x10000,
                NAV_MESH_NON_ZUP_TRANSITION = 0x20000,
                NAV_MESH_CRAWL_HEIGHT = 0x40000,
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
            #[repr(u32)]
            pub enum MoveLinearAuthoredPos_t {
                MOVELINEAR_AUTHORED_AT_START_POSITION = 0x0,
                MOVELINEAR_AUTHORED_AT_OPEN_POSITION = 0x1,
                MOVELINEAR_AUTHORED_AT_CLOSED_POSITION = 0x2
            }
            // Alignment: 4
            // Member count: 4
            #[repr(u32)]
            pub enum ValueRemapperMomentumType_t {
                MomentumType_None = 0x0,
                MomentumType_Friction = 0x1,
                MomentumType_SpringTowardSnapValue = 0x2,
                MomentumType_SpringAwayFromSnapValue = 0x3
            }
            // Alignment: 4
            // Member count: 12
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
            // Member count: 6
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
            // Member count: 9
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
            // Member count: 4
            #[repr(u32)]
            pub enum BeamClipStyle_t {
                kNOCLIP = 0x0,
                kGEOCLIP = 0x1,
                kMODELCLIP = 0x2
            }
            // Alignment: 4
            // Member count: 4
            #[repr(u32)]
            pub enum WeaponAttackType_t {
                eInvalid = u32::MAX,
                ePrimary = 0x0,
                eSecondary = 0x1,
                eCount = 0x2
            }
            // Alignment: 4
            // Member count: 4
            #[repr(u32)]
            pub enum CDebugOverlayFilterTextType_t {
                FILTER_TEXT_NONE = 0x0,
                MATCH = 0x1,
                HIERARCHY = 0x2,
                COUNT = 0x3
            }
            // Alignment: 4
            // Member count: 8
            #[repr(u32)]
            pub enum CSPlayerBlockingUseAction_t {
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
            #[repr(u8)]
            pub enum ShatterDamageCause {
                SHATTERDAMAGE_BULLET = 0x0,
                SHATTERDAMAGE_MELEE = 0x1,
                SHATTERDAMAGE_THROWN = 0x2,
                SHATTERDAMAGE_SCRIPT = 0x3,
                SHATTERDAMAGE_EXPLOSIVE = 0x4
            }
            // Alignment: 4
            // Member count: 4
            #[repr(u32)]
            pub enum ScriptedOnDeath_t {
                SS_ONDEATH_NOT_APPLICABLE = u32::MAX,
                SS_ONDEATH_UNDEFINED = 0x0,
                SS_ONDEATH_RAGDOLL = 0x1,
                SS_ONDEATH_ANIMATED_DEATH = 0x2
            }
            // Alignment: 4
            // Member count: 4
            #[repr(u32)]
            pub enum ChoreoLookAtSpeed_t {
                eInvalid = u32::MAX,
                eSlow = 0x0,
                eMedium = 0x1,
                eFast = 0x2
            }
            // Alignment: 4
            // Member count: 17
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
                GEAR_SLOT_COUNT = 0xD
            }
            // Alignment: 4
            // Member count: 10
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
            // Member count: 2
            #[repr(u32)]
            pub enum ScriptedConflictResponse_t {
                SS_CONFLICT_ENQUEUE = 0x0,
                SS_CONFLICT_INTERRUPT = 0x1
            }
            // Alignment: 1
            // Member count: 7
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
            // Member count: 3
            #[repr(u32)]
            pub enum WorldTextPanelVerticalAlign_t {
                WORLDTEXT_VERTICAL_ALIGN_TOP = 0x0,
                WORLDTEXT_VERTICAL_ALIGN_CENTER = 0x1,
                WORLDTEXT_VERTICAL_ALIGN_BOTTOM = 0x2
            }
            // Alignment: 1
            // Member count: 4
            #[repr(u8)]
            pub enum RelativeLocationType_t {
                WORLD_SPACE_POSITION = 0x0,
                RELATIVE_TO_ENTITY_IN_LOCAL_SPACE = 0x1,
                RELATIVE_TO_ENTITY_YAW_ONLY = 0x2,
                RELATIVE_TO_ENTITY_IN_WORLD_SPACE = 0x3
            }
            // Alignment: 4
            // Member count: 4
            #[repr(u32)]
            pub enum AmmoPosition_t {
                AMMO_POSITION_INVALID = u32::MAX,
                AMMO_POSITION_PRIMARY = 0x0,
                AMMO_POSITION_SECONDARY = 0x1,
                AMMO_POSITION_COUNT = 0x2
            }
            // Alignment: 4
            // Member count: 11
            #[repr(u32)]
            pub enum CDebugOverlayFilterType_t {
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
                COMBINED = u32::MAX
            }
            // Alignment: 4
            // Member count: 24
            #[repr(u32)]
            pub enum PreviewEOMCelebration {
                INVALID = u32::MAX,
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
            #[repr(u32)]
            pub enum EntityDisolveType_t {
                ENTITY_DISSOLVE_INVALID = u32::MAX,
                ENTITY_DISSOLVE_NORMAL = 0x0,
                ENTITY_DISSOLVE_ELECTRICAL = 0x1,
                ENTITY_DISSOLVE_ELECTRICAL_LIGHT = 0x2,
                ENTITY_DISSOLVE_CORE = 0x3
            }
            // Alignment: 8
            // Member count: 21
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
                IN_SCORE = 0x200000000,
                IN_ZOOM = 0x400000000,
                IN_LOOK_AT_WEAPON = 0x800000000
            }
            // Alignment: 4
            // Member count: 14
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
            // Member count: 11
            #[repr(u32)]
            pub enum ChickenActivity {
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
            #[repr(u32)]
            pub enum PointWorldTextReorientMode_t {
                POINT_WORLD_TEXT_REORIENT_NONE = 0x0,
                POINT_WORLD_TEXT_REORIENT_AROUND_UP = 0x1
            }
            // Alignment: 8
            // Member count: 40
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
            }
            // Alignment: 4
            // Member count: 3
            #[repr(u32)]
            pub enum AmmoFlags_t {
                AMMO_FORCE_DROP_IF_CARRIED = 0x1,
                AMMO_RESERVE_STAYS_WITH_WEAPON = 0x2
            }
            // Alignment: 4
            // Member count: 4
            #[repr(u32)]
            pub enum DecalFlags_t {
                eNone = 0x0,
                eCannotClear = 0x1,
                eAll = 0xFFFFFFFF,
                eAllButCannotClear = 0xFFFFFFFE
            }
            // Alignment: 4
            // Member count: 6
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
            // Member count: 3
            #[repr(u32)]
            pub enum doorCheck_e {
                DOOR_CHECK_FORWARD = 0x0,
                DOOR_CHECK_BACKWARD = 0x1,
                DOOR_CHECK_FULL = 0x2
            }
            // Alignment: 4
            // Member count: 7
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
            // Member count: 4
            #[repr(u32)]
            pub enum EntitySubclassScope_t {
                SUBCLASS_SCOPE_NONE = u32::MAX,
                SUBCLASS_SCOPE_PRECIPITATION = 0x0,
                SUBCLASS_SCOPE_PLAYER_WEAPONS = 0x1,
                SUBCLASS_SCOPE_COUNT = 0x2
            }
            // Alignment: 4
            // Member count: 2
            #[repr(u32)]
            pub enum PointTemplateClientOnlyEntityBehavior_t {
                CREATE_FOR_CURRENTLY_CONNECTED_CLIENTS_ONLY = 0x0,
                CREATE_FOR_CLIENTS_WHO_CONNECT_LATER = 0x1
            }
            // Alignment: 4
            // Member count: 3
            #[repr(u32)]
            pub enum CDebugOverlayCombinedTypes_t {
                ALL = 0x0,
                ANY = 0x1,
                COUNT = 0x2
            }
            // Alignment: 1
            // Member count: 4
            #[repr(u8)]
            pub enum ShatterGlassStressType {
                SHATTERGLASS_BLUNT = 0x0,
                SHATTERGLASS_BALLISTIC = 0x1,
                SHATTERGLASS_PULSE = 0x2,
                SHATTERGLASS_EXPLOSIVE = 0x3
            }
            // Alignment: 4
            // Member count: 3
            #[repr(u32)]
            pub enum TrackOrientationType_t {
                TrackOrientation_Fixed = 0x0,
                TrackOrientation_FacePath = 0x1,
                TrackOrientation_FacePathAngles = 0x2
            }
            // Alignment: 4
            // Member count: 5
            #[repr(u32)]
            pub enum WeaponSwitchReason_t {
                eDrawn = 0x0,
                eEquipped = 0x1,
                eUserInitiatedSwitchToLast = 0x2,
                eUserInitiatedUIKeyPress = 0x3,
                eUserInitiatedSwitchHands = 0x4
            }
            // Alignment: 4
            // Member count: 2
            #[repr(u32)]
            pub enum ValueRemapperRatchetType_t {
                RatchetType_Absolute = 0x0,
                RatchetType_EachEngage = 0x1
            }
            // Alignment: 4
            // Member count: 5
            #[repr(u32)]
            pub enum NavDirType {
                NORTH = 0x0,
                EAST = 0x1,
                SOUTH = 0x2,
                WEST = 0x3,
                NUM_NAV_DIR_TYPE_DIRECTIONS = 0x4
            }
            // Alignment: 4
            // Member count: 2
            #[repr(u32)]
            pub enum CRR_Response__ResponseEnum_t {
                MAX_RESPONSE_NAME = 0xC0,
                MAX_RULE_NAME = 0x80
            }
            // Alignment: 4
            // Member count: 4
            #[repr(u32)]
            pub enum MoveMountingAmount_t {
                MOVE_MOUNT_NONE = 0x0,
                MOVE_MOUNT_LOW = 0x1,
                MOVE_MOUNT_HIGH = 0x2,
                MOVE_MOUNT_MAXCOUNT = 0x3
            }
            // Alignment: 1
            // Member count: 3
            #[repr(u8)]
            pub enum HoverPoseFlags_t {
                eNone = 0x0,
                ePosition = 0x1,
                eAngles = 0x2
            }
            // Alignment: 1
            // Member count: 20
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
            // Member count: 35
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
            // Member count: 27
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
            // Member count: 6
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
            // Member count: 5
            #[repr(u32)]
            pub enum DoorState_t {
                DOOR_STATE_CLOSED = 0x0,
                DOOR_STATE_OPENING = 0x1,
                DOOR_STATE_OPEN = 0x2,
                DOOR_STATE_CLOSING = 0x3,
                DOOR_STATE_AJAR = 0x4
            }
            // Alignment: 4
            // Member count: 4
            #[repr(u32)]
            pub enum ChoreoLookAtMode_t {
                eInvalid = u32::MAX,
                eChest = 0x0,
                eHead = 0x1,
                eEyesOnly = 0x2
            }
            // Alignment: 4
            // Member count: 3
            #[repr(u32)]
            pub enum ChatIgnoreType_t {
                CHAT_IGNORE_NONE = 0x0,
                CHAT_IGNORE_ALL = 0x1,
                CHAT_IGNORE_TEAM = 0x2
            }
            // Alignment: 4
            // Member count: 7
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
            // Member count: 3
            #[repr(u32)]
            pub enum SimpleConstraintSoundProfile__SimpleConstraintsSoundProfileKeypoints_t {
                kMIN_THRESHOLD = 0x0,
                kMIN_FULL = 0x1,
                kHIGHWATER = 0x2
            }
            // Alignment: 4
            // Member count: 1
            #[repr(u32)]
            pub enum navproperties_t {
                NAV_IGNORE = 0x1
            }
            // Alignment: 2
            // Member count: 7
            #[repr(u16)]
            pub enum EntityEffects_t {
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
            // Member count: 23
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
                DMG_BUCKSHOT = 0x800,
                DMG_DROWN = 0x4000,
                DMG_POISON = 0x8000,
                DMG_RADIATION = 0x10000,
                DMG_DROWNRECOVER = 0x20000,
                DMG_ACID = 0x40000,
                DMG_PHYSGUN = 0x100000,
                DMG_DISSOLVE = 0x200000,
                DMG_BLAST_SURFACE = 0x400000,
                DMG_HEADSHOT = 0x800000
            }
            // Alignment: 4
            // Member count: 3
            #[repr(u32)]
            pub enum PointWorldTextJustifyVertical_t {
                POINT_WORLD_TEXT_JUSTIFY_VERTICAL_BOTTOM = 0x0,
                POINT_WORLD_TEXT_JUSTIFY_VERTICAL_CENTER = 0x1,
                POINT_WORLD_TEXT_JUSTIFY_VERTICAL_TOP = 0x2
            }
            // Alignment: 4
            // Member count: 2
            #[repr(u32)]
            pub enum attributeprovidertypes_t {
                PROVIDER_GENERIC = 0x0,
                PROVIDER_WEAPON = 0x1
            }
            // Alignment: 1
            // Member count: 6
            #[repr(u8)]
            pub enum MoveCollide_t {
                MOVECOLLIDE_DEFAULT = 0x0,
                MOVECOLLIDE_FLY_BOUNCE = 0x1,
                MOVECOLLIDE_FLY_CUSTOM = 0x2,
                MOVECOLLIDE_FLY_SLIDE = 0x3,
                MOVECOLLIDE_COUNT = 0x4
            }
            // Alignment: 4
            // Member count: 7
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
            // Member count: 4
            #[repr(u32)]
            pub enum ValueRemapperOutputType_t {
                OutputType_AnimationCycle = 0x0,
                OutputType_RotationX = 0x1,
                OutputType_RotationY = 0x2,
                OutputType_RotationZ = 0x3
            }
            // Alignment: 4
            // Member count: 3
            #[repr(u32)]
            pub enum PointTemplateOwnerSpawnGroupType_t {
                INSERT_INTO_POINT_TEMPLATE_SPAWN_GROUP = 0x0,
                INSERT_INTO_CURRENTLY_ACTIVE_SPAWN_GROUP = 0x1,
                INSERT_INTO_NEWLY_CREATED_SPAWN_GROUP = 0x2
            }
            // Alignment: 1
            // Member count: 3
            #[repr(u8)]
            pub enum EContributionScoreFlag_t {
                k_EContributionScoreFlag_Default = 0x0,
                k_EContributionScoreFlag_Objective = 0x1,
                k_EContributionScoreFlag_Bullets = 0x2
            }
            // Alignment: 4
            // Member count: 3
            #[repr(u32)]
            pub enum eSplinePushType {
                k_eSplinePushAlong = 0x0,
                k_eSplinePushAway = 0x1,
                k_eSplinePushTowards = 0x2
            }
            // Alignment: 2
            // Member count: 28
            #[repr(u16)]
            pub enum WeaponGameplayAnimState {
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
            }
            // Alignment: 4
            // Member count: 2
            #[repr(u32)]
            pub enum EDestructiblePartRadiusDamageApplyType {
                ScaleByExplosionRadius = 0x0,
                PrioritizeClosestPart = 0x1
            }
            // Alignment: 4
            // Member count: 3
            #[repr(u32)]
            pub enum EntityDistanceMode_t {
                eOriginToOrigin = 0x0,
                eCenterToCenter = 0x1,
                eAxisToAxis = 0x2
            }
            // Alignment: 4
            // Member count: 2
            #[repr(u32)]
            pub enum PulseTraceContents_t {
                STATIC_LEVEL = 0x0,
                SOLID = 0x1
            }
            // Alignment: 4
            // Member count: 3
            #[repr(u32)]
            pub enum PointWorldTextJustifyHorizontal_t {
                POINT_WORLD_TEXT_JUSTIFY_HORIZONTAL_LEFT = 0x0,
                POINT_WORLD_TEXT_JUSTIFY_HORIZONTAL_CENTER = 0x1,
                POINT_WORLD_TEXT_JUSTIFY_HORIZONTAL_RIGHT = 0x2
            }
            // Alignment: 4
            // Member count: 6
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
            // Member count: 24
            #[repr(u32)]
            pub enum Flags_t {
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
            }
            // Alignment: 4
            // Member count: 3
            #[repr(u32)]
            pub enum TRAIN_CODE {
                TRAIN_SAFE = 0x0,
                TRAIN_BLOCKING = 0x1,
                TRAIN_FOLLOWING = 0x2
            }
            // Alignment: 4
            // Member count: 4
            #[repr(u32)]
            pub enum DestructiblePartDestructionDeathBehavior_t {
                eDoNotKill = 0x0,
                eKill = 0x1,
                eGib = 0x2,
                eRemove = 0x3
            }
            // Alignment: 4
            // Member count: 3
            #[repr(u32)]
            pub enum BrushSolidities_e {
                BRUSHSOLID_TOGGLE = 0x0,
                BRUSHSOLID_NEVER = 0x1,
                BRUSHSOLID_ALWAYS = 0x2
            }
            // Alignment: 4
            // Member count: 13
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
            // Member count: 2
            #[repr(u32)]
            pub enum ModifyDamageReturn_t {
                CONTINUE_TO_APPLY_DAMAGE = 0x0,
                ABORT_DO_NOT_APPLY_DAMAGE = 0x1
            }
            // Alignment: 4
            // Member count: 2
            #[repr(u32)]
            pub enum ShadowType_t {
                SHADOWS_NONE = 0x0,
                SHADOWS_SIMPLE = 0x1
            }
            // Alignment: 4
            // Member count: 6
            #[repr(u32)]
            pub enum GrenadeType_t {
                GRENADE_TYPE_EXPLOSIVE = 0x0,
                GRENADE_TYPE_FLASH = 0x1,
                GRENADE_TYPE_FIRE = 0x2,
                GRENADE_TYPE_DECOY = 0x3,
                GRENADE_TYPE_SMOKE = 0x4,
                GRENADE_TYPE_TOTAL = 0x5
            }
            // Alignment: 4
            // Member count: 2
            #[repr(u32)]
            pub enum ValueRemapperInputType_t {
                InputType_PlayerShootPosition = 0x0,
                InputType_PlayerShootPositionAroundAxis = 0x1
            }
            // Alignment: 1
            // Member count: 8
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
            // Member count: 25
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
            // Alignment: 8
            // Member count: 20
            #[repr(u64)]
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
                DFLAG_FORCEREDUCEARMOR_DMG = 0x800,
                DFLAG_SUPPRESS_INTERRUPT_FLINCH = 0x1000,
                DFLAG_IGNORE_DESTRUCTIBLE_PARTS = 0x2000,
                DFLAG_SUPPRESS_BREAKABLES = 0x4000,
                DFLAG_FORCE_PHYSICS_FORCE = 0x8000,
                DFLAG_IGNORE_ARMOR = 0x10000,
                DFLAG_SUPPRESS_UTILREMOVE = 0x20000
            }
            // Alignment: 4
            // Member count: 2
            #[repr(u32)]
            pub enum ValueRemapperHapticsType_t {
                HaticsType_Default = 0x0,
                HaticsType_None = 0x1
            }
            // Alignment: 4
            // Member count: 10
            #[repr(u32)]
            pub enum Disposition_t {
                D_ER = 0x0,
                D_HT = 0x1,
                D_FR = 0x2,
                D_LI = 0x3,
                D_NU = 0x4
            }
            // Alignment: 4
            // Member count: 2
            #[repr(u32)]
            pub enum RotatorTargetSpace_t {
                ROTATOR_TARGET_WORLDSPACE = 0x0,
                ROTATOR_TARGET_LOCALSPACE = 0x1
            }
            // Alignment: 4
            // Member count: 3
            #[repr(u32)]
            pub enum CanPlaySequence_t {
                CANNOT_PLAY = 0x0,
                CAN_PLAY_NOW = 0x1,
                CAN_PLAY_ENQUEUED = 0x2
            }
            // Alignment: 4
            // Member count: 5
            #[repr(u32)]
            pub enum MedalRank_t {
                MEDAL_RANK_NONE = 0x0,
                MEDAL_RANK_BRONZE = 0x1,
                MEDAL_RANK_SILVER = 0x2,
                MEDAL_RANK_GOLD = 0x3,
                MEDAL_RANK_COUNT = 0x4
            }
            // Alignment: 4
            // Member count: 6
            #[repr(u32)]
            pub enum ObserverMode_t {
                OBS_MODE_NONE = 0x0,
                OBS_MODE_FIXED = 0x1,
                OBS_MODE_IN_EYE = 0x2,
                OBS_MODE_CHASE = 0x3,
                OBS_MODE_ROAMING = 0x4,
                NUM_OBSERVER_MODES = 0x5
            }
            // Alignment: 4
            // Member count: 2
            #[repr(u32)]
            pub enum FuncDoorSpawnPos_t {
                FUNC_DOOR_SPAWN_CLOSED = 0x0,
                FUNC_DOOR_SPAWN_OPEN = 0x1
            }
            // Alignment: 4
            // Member count: 3
            #[repr(u32)]
            pub enum EOverrideBlockLOS_t {
                BLOCK_LOS_DEFAULT = 0x0,
                BLOCK_LOS_FORCE_FALSE = 0x1,
                BLOCK_LOS_FORCE_TRUE = 0x2
            }
            // Alignment: 4
            // Member count: 4
            #[repr(u32)]
            pub enum EntityAttachmentType_t {
                eAbsOrigin = 0x0,
                eCenter = 0x1,
                eEyes = 0x2,
                eAttachment = 0x3
            }
            // Alignment: 1
            // Member count: 14
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
                MOVETYPE_LAST = 0xB
            }
            // Parent: CCSWeaponBaseShotgun
            // Field count: 0
            pub mod CWeaponNOVA {
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
            pub mod CPointWorldText {
                pub const m_messageText: usize = 0x7D8; // char[512]
                pub const m_FontName: usize = 0x9D8; // char[64]
                pub const m_BackgroundMaterialName: usize = 0xA18; // char[64]
                pub const m_bEnabled: usize = 0xA58; // bool
                pub const m_bFullbright: usize = 0xA59; // bool
                pub const m_flWorldUnitsPerPx: usize = 0xA5C; // float32
                pub const m_flFontSize: usize = 0xA60; // float32
                pub const m_flDepthOffset: usize = 0xA64; // float32
                pub const m_bDrawBackground: usize = 0xA68; // bool
                pub const m_flBackgroundBorderWidth: usize = 0xA6C; // float32
                pub const m_flBackgroundBorderHeight: usize = 0xA70; // float32
                pub const m_flBackgroundWorldToUV: usize = 0xA74; // float32
                pub const m_Color: usize = 0xA78; // Color
                pub const m_nJustifyHorizontal: usize = 0xA7C; // PointWorldTextJustifyHorizontal_t
                pub const m_nJustifyVertical: usize = 0xA80; // PointWorldTextJustifyVertical_t
                pub const m_nReorientMode: usize = 0xA84; // PointWorldTextReorientMode_t
            }
            // Parent: CPointEntity
            // Field count: 10
            pub mod CAmbientGeneric {
                pub const m_radius: usize = 0x4F0; // float32
                pub const m_flMaxRadius: usize = 0x4F4; // float32
                pub const m_iSoundLevel: usize = 0x4F8; // soundlevel_t
                pub const m_dpv: usize = 0x4FC; // dynpitchvol_t
                pub const m_fActive: usize = 0x560; // bool
                pub const m_fLooping: usize = 0x561; // bool
                pub const m_iszSound: usize = 0x568; // CUtlSymbolLarge
                pub const m_sSourceEntName: usize = 0x570; // CUtlSymbolLarge
                pub const m_hSoundSource: usize = 0x578; // CHandle<CBaseEntity>
                pub const m_nSoundSourceEntIndex: usize = 0x57C; // CEntityIndex
            }
            // Parent: CPointEntity
            // Field count: 12
            pub mod CEnvEntityMaker {
                pub const m_vecEntityMins: usize = 0x4F0; // Vector
                pub const m_vecEntityMaxs: usize = 0x4FC; // Vector
                pub const m_hCurrentInstance: usize = 0x508; // CHandle<CBaseEntity>
                pub const m_hCurrentBlocker: usize = 0x50C; // CHandle<CBaseEntity>
                pub const m_vecBlockerOrigin: usize = 0x510; // Vector
                pub const m_angPostSpawnDirection: usize = 0x51C; // QAngle
                pub const m_flPostSpawnDirectionVariance: usize = 0x528; // float32
                pub const m_flPostSpawnSpeed: usize = 0x52C; // float32
                pub const m_bPostSpawnUseAngles: usize = 0x530; // bool
                pub const m_iszTemplate: usize = 0x538; // CUtlSymbolLarge
                pub const m_pOutputOnSpawned: usize = 0x540; // CEntityIOOutput
                pub const m_pOutputOnFailedSpawn: usize = 0x568; // CEntityIOOutput
            }
            // Parent: None
            // Field count: 0
            pub mod CPulseGraphInstance_GameBlackboard {
            }
            // Parent: CBaseEntity
            // Field count: 0
            pub mod CPointEntity {
            }
            // Parent: CBaseFilter
            // Field count: 5
            pub mod CFilterEnemy {
                pub const m_iszEnemyName: usize = 0x548; // CUtlSymbolLarge
                pub const m_flRadius: usize = 0x550; // float32
                pub const m_flOuterRadius: usize = 0x554; // float32
                pub const m_nMaxSquadmatesPerEnemy: usize = 0x558; // int32
                pub const m_iszPlayerName: usize = 0x560; // CUtlSymbolLarge
            }
            // Parent: CCSGO_WingmanIntroCharacterPosition
            // Field count: 0
            pub mod CCSGO_WingmanIntroCounterTerroristPosition {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            pub mod CPulseCell_WaitForCursorsWithTag {
                pub const m_bTagSelfWhenComplete: usize = 0x98; // bool
                pub const m_nDesiredKillPriority: usize = 0x9C; // PulseCursorCancelPriority_t
            }
            // Parent: CFuncTrackChange
            // Field count: 0
            pub mod CFuncTrackAuto {
            }
            // Parent: CBaseEntity
            // Field count: 77
            pub mod CScriptedSequence {
                pub const m_iszEntry: usize = 0x4F0; // CUtlSymbolLarge
                pub const m_iszPreIdle: usize = 0x4F8; // CUtlSymbolLarge
                pub const m_iszPlay: usize = 0x500; // CUtlSymbolLarge
                pub const m_iszPostIdle: usize = 0x508; // CUtlSymbolLarge
                pub const m_iszModifierToAddOnPlay: usize = 0x510; // CUtlSymbolLarge
                pub const m_iszNextScript: usize = 0x518; // CUtlSymbolLarge
                pub const m_iszEntity: usize = 0x520; // CUtlSymbolLarge
                pub const m_iszSyncGroup: usize = 0x528; // CUtlSymbolLarge
                pub const m_nMoveTo: usize = 0x530; // ScriptedMoveTo_t
                pub const m_nMoveToGait: usize = 0x534; // SharedMovementGait_t
                pub const m_nHeldWeaponBehavior: usize = 0x538; // ScriptedHeldWeaponBehavior_t
                pub const m_nForcedCrouchState: usize = 0x53C; // ForcedCrouchState_t
                pub const m_bIsPlayingPreIdle: usize = 0x540; // bool
                pub const m_bIsPlayingEntry: usize = 0x541; // bool
                pub const m_bIsPlayingAction: usize = 0x542; // bool
                pub const m_bIsPlayingPostIdle: usize = 0x543; // bool
                pub const m_bDontRotateOther: usize = 0x544; // bool
                pub const m_bIsRepeatable: usize = 0x545; // bool
                pub const m_bShouldLeaveCorpse: usize = 0x546; // bool
                pub const m_bStartOnSpawn: usize = 0x547; // bool
                pub const m_bDisallowInterrupts: usize = 0x548; // bool
                pub const m_bCanOverrideNPCState: usize = 0x549; // bool
                pub const m_bDontTeleportAtEnd: usize = 0x54A; // bool
                pub const m_bHighPriority: usize = 0x54B; // bool
                pub const m_bHideDebugComplaints: usize = 0x54C; // bool
                pub const m_bContinueOnDeath: usize = 0x54D; // bool
                pub const m_bLoopPreIdleSequence: usize = 0x54E; // bool
                pub const m_bLoopActionSequence: usize = 0x54F; // bool
                pub const m_bLoopPostIdleSequence: usize = 0x550; // bool
                pub const m_bSynchPostIdles: usize = 0x551; // bool
                pub const m_bIgnoreLookAt: usize = 0x552; // bool
                pub const m_bIgnoreGravity: usize = 0x553; // bool
                pub const m_bDisableNPCCollisions: usize = 0x554; // bool
                pub const m_bKeepAnimgraphLockedPost: usize = 0x555; // bool
                pub const m_bDontAddModifiers: usize = 0x556; // bool
                pub const m_bDisableAimingWhileMoving: usize = 0x557; // bool
                pub const m_bIgnoreRotation: usize = 0x558; // bool
                pub const m_flRadius: usize = 0x55C; // float32
                pub const m_flRepeat: usize = 0x560; // float32
                pub const m_flPlayAnimFadeInTime: usize = 0x564; // float32
                pub const m_flMoveInterpTime: usize = 0x568; // float32
                pub const m_flAngRate: usize = 0x56C; // float32
                pub const m_flMoveSpeed: usize = 0x570; // float32
                pub const m_bWaitUntilMoveCompletesToStartAnimation: usize = 0x574; // bool
                pub const m_nNotReadySequenceCount: usize = 0x578; // int32
                pub const m_startTime: usize = 0x57C; // GameTime_t
                pub const m_bWaitForBeginSequence: usize = 0x580; // bool
                pub const m_saved_effects: usize = 0x584; // int32
                pub const m_savedFlags: usize = 0x588; // int32
                pub const m_savedCollisionGroup: usize = 0x58C; // int32
                pub const m_bInterruptable: usize = 0x590; // bool
                pub const m_sequenceStarted: usize = 0x591; // bool
                pub const m_bPositionRelativeToOtherEntity: usize = 0x592; // bool
                pub const m_hTargetEnt: usize = 0x594; // CHandle<CBaseEntity>
                pub const m_hNextCine: usize = 0x598; // CHandle<CScriptedSequence>
                pub const m_bThinking: usize = 0x59C; // bool
                pub const m_bInitiatedSelfDelete: usize = 0x59D; // bool
                pub const m_bIsTeleportingDueToMoveTo: usize = 0x59E; // bool
                pub const m_bAllowCustomInterruptConditions: usize = 0x59F; // bool
                pub const m_hForcedTarget: usize = 0x5A0; // CHandle<CBaseAnimGraph>
                pub const m_bDontCancelOtherSequences: usize = 0x5A4; // bool
                pub const m_bForceSynch: usize = 0x5A5; // bool
                pub const m_bPreventUpdateYawOnFinish: usize = 0x5A6; // bool
                pub const m_bEnsureOnNavmeshOnFinish: usize = 0x5A7; // bool
                pub const m_onDeathBehavior: usize = 0x5A8; // ScriptedOnDeath_t
                pub const m_ConflictResponse: usize = 0x5AC; // ScriptedConflictResponse_t
                pub const m_OnBeginSequence: usize = 0x5B0; // CEntityIOOutput
                pub const m_OnActionStartOrLoop: usize = 0x5D8; // CEntityIOOutput
                pub const m_OnEndSequence: usize = 0x600; // CEntityIOOutput
                pub const m_OnPostIdleEndSequence: usize = 0x628; // CEntityIOOutput
                pub const m_OnCancelSequence: usize = 0x650; // CEntityIOOutput
                pub const m_OnCancelFailedSequence: usize = 0x678; // CEntityIOOutput
                pub const m_OnScriptEvent: usize = 0x6A0; // CEntityIOOutput[8]
                pub const m_matOtherToMain: usize = 0x7E0; // CTransform
                pub const m_hInteractionMainEntity: usize = 0x800; // CHandle<CBaseEntity>
                pub const m_iPlayerDeathBehavior: usize = 0x804; // int32
                pub const m_bSkipFadeIn: usize = 0x808; // bool
            }
            // Parent: CBaseTrigger
            // Field count: 1
            pub mod CFogTrigger {
                pub const m_fog: usize = 0x9A8; // fogparams_t
            }
            // Parent: CPointEntity
            // Field count: 0
            pub mod CInfoTeleportDestination {
            }
            // Parent: CPointEntity
            // Field count: 0
            pub mod CPointBroadcastClientCommand {
            }
            // Parent: CPlayerPawnComponent
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_hPlayerPing (CHandle<CBaseEntity>)
            pub mod CCSPlayer_PingServices {
                pub const m_flPlayerPingTokens: usize = 0x40; // GameTime_t[5]
                pub const m_hPlayerPing: usize = 0x54; // CHandle<CBaseEntity>
            }
            // Parent: CBaseCSGrenade
            // Field count: 0
            pub mod CHEGrenade {
            }
            // Parent: CBaseEntity
            // Field count: 8
            pub mod CPhysicsSpring {
                pub const m_flFrequency: usize = 0x4F8; // float32
                pub const m_flDampingRatio: usize = 0x4FC; // float32
                pub const m_flRestLength: usize = 0x500; // float32
                pub const m_nameAttachStart: usize = 0x508; // CUtlSymbolLarge
                pub const m_nameAttachEnd: usize = 0x510; // CUtlSymbolLarge
                pub const m_start: usize = 0x518; // VectorWS
                pub const m_end: usize = 0x524; // VectorWS
                pub const m_teleportTick: usize = 0x530; // uint32
            }
            // Parent: CPointEntity
            // Field count: 2
            pub mod CEnvMuzzleFlash {
                pub const m_flScale: usize = 0x4F0; // float32
                pub const m_iszParentAttachment: usize = 0x4F8; // CUtlSymbolLarge
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
            pub mod CEconItemAttribute {
                pub const m_iAttributeDefinitionIndex: usize = 0x30; // uint16
                pub const m_flValue: usize = 0x34; // float32
                pub const m_flInitialValue: usize = 0x38; // float32
                pub const m_nRefundableCurrency: usize = 0x3C; // int32
                pub const m_bSetBonus: usize = 0x40; // bool
            }
            // Parent: None
            // Field count: 0
            pub mod CBaseTriggerAPI {
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            pub mod CWeaponRevolver {
            }
            // Parent: CBaseModelEntity
            // Field count: 0
            pub mod CFuncTrainControls {
            }
            // Parent: None
            // Field count: 4
            pub mod CBtActionCombatPositioning {
                pub const m_szSensorInputKey: usize = 0x68; // CUtlString
                pub const m_szIsAttackingKey: usize = 0x80; // CUtlString
                pub const m_ActionTimer: usize = 0x88; // CountdownTimer
                pub const m_bCrouching: usize = 0xA0; // bool
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // NetworkVarNames: nTagTick (GameTick_t)
            // NetworkVarNames: flFlinchModSmall (float)
            // NetworkVarNames: flFlinchModLarge (float)
            // NetworkVarNames: flFriendlyFireDamageReductionRatio (float)
            pub mod PredictedDamageTag_t {
                pub const nTagTick: usize = 0x30; // GameTick_t
                pub const flFlinchModSmall: usize = 0x34; // float32
                pub const flFlinchModLarge: usize = 0x38; // float32
                pub const flFriendlyFireDamageReductionRatio: usize = 0x3C; // float32
            }
            // Parent: CBaseTrigger
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_flFluidDensity (float)
            pub mod CTriggerBuoyancy {
                pub const m_BuoyancyHelper: usize = 0x9A8; // CBuoyancyHelper
                pub const m_flFluidDensity: usize = 0xAC0; // float32
            }
            // Parent: CTonemapController2
            // Field count: 0
            pub mod CTonemapController2Alias_env_tonemap_controller2 {
            }
            // Parent: CPointEntity
            // Field count: 9
            pub mod CPathTrack {
                pub const m_pnext: usize = 0x4F0; // CPathTrack*
                pub const m_pprevious: usize = 0x4F8; // CPathTrack*
                pub const m_paltpath: usize = 0x500; // CPathTrack*
                pub const m_flRadius: usize = 0x508; // float32
                pub const m_length: usize = 0x50C; // float32
                pub const m_altName: usize = 0x510; // CUtlSymbolLarge
                pub const m_nIterVal: usize = 0x518; // int32
                pub const m_eOrientationType: usize = 0x51C; // TrackOrientationType_t
                pub const m_OnPass: usize = 0x520; // CEntityIOOutput
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Base {
                pub const m_nEditorNodeID: usize = 0x8; // PulseDocNodeID_t
            }
            // Parent: CBaseTrigger
            // Field count: 5
            pub mod CTriggerProximity {
                pub const m_hMeasureTarget: usize = 0x9A8; // CHandle<CBaseEntity>
                pub const m_iszMeasureTarget: usize = 0x9B0; // CUtlSymbolLarge
                pub const m_fRadius: usize = 0x9B8; // float32
                pub const m_nTouchers: usize = 0x9BC; // int32
                pub const m_NearestEntityDistance: usize = 0x9C0; // CEntityOutputTemplate<float32>
            }
            // Parent: CPointEntity
            // Field count: 7
            pub mod CTankTrainAI {
                pub const m_hTrain: usize = 0x4F0; // CHandle<CFuncTrackTrain>
                pub const m_hTargetEntity: usize = 0x4F4; // CHandle<CBaseEntity>
                pub const m_soundPlaying: usize = 0x4F8; // int32
                pub const m_startSoundName: usize = 0x510; // CUtlSymbolLarge
                pub const m_engineSoundName: usize = 0x518; // CUtlSymbolLarge
                pub const m_movementSoundName: usize = 0x520; // CUtlSymbolLarge
                pub const m_targetEntityName: usize = 0x528; // CUtlSymbolLarge
            }
            // Parent: CRulePointEntity
            // Field count: 2
            pub mod CGameText {
                pub const m_iszMessage: usize = 0x7E8; // CUtlSymbolLarge
                pub const m_textParms: usize = 0x7F0; // hudtextparms_t
            }
            // Parent: CRulePointEntity
            // Field count: 0
            pub mod CGameEnd {
            }
            // Parent: SpawnPoint
            // Field count: 0
            pub mod CInfoDeathmatchSpawn {
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
            pub mod CCSPlayerController_InventoryServices {
                pub const m_unMusicID: usize = 0x40; // uint16
                pub const m_rank: usize = 0x44; // MedalRank_t[6]
                pub const m_nPersonaDataPublicLevel: usize = 0x5C; // int32
                pub const m_nPersonaDataPublicCommendsLeader: usize = 0x60; // int32
                pub const m_nPersonaDataPublicCommendsTeacher: usize = 0x64; // int32
                pub const m_nPersonaDataPublicCommendsFriendly: usize = 0x68; // int32
                pub const m_nPersonaDataXpTrailLevel: usize = 0x6C; // int32
                pub const m_unEquippedPlayerSprayIDs: usize = 0xF48; // uint32[1]
                pub const m_unCurrentLoadoutHash: usize = 0xF50; // uint64
                pub const m_vecServerAuthoritativeWeaponSlots: usize = 0xF58; // CUtlVectorEmbeddedNetworkVar<ServerAuthoritativeWeaponSlot_t>
            }
            // Parent: None
            // Field count: 0
            pub mod CPulse_ResumePoint {
            }
            // Parent: CBaseAnimGraph
            // Field count: 7
            //
            // Metadata:
            // NetworkVarNames: m_flexWeight (float32)
            // NetworkVarNames: m_vLookTargetPosition (VectorWS)
            // NetworkVarNames: m_blinktoggle (bool)
            pub mod CBaseFlex {
                pub const m_flexWeight: usize = 0xA90; // CNetworkUtlVectorBase<float32>
                pub const m_vLookTargetPosition: usize = 0xAA8; // VectorWS
                pub const m_blinktoggle: usize = 0xAB4; // bool
                pub const m_flAllowResponsesEndTime: usize = 0xB08; // GameTime_t
                pub const m_flLastFlexAnimationTime: usize = 0xB0C; // GameTime_t
                pub const m_nNextSceneEventId: usize = 0xB10; // SceneEventId_t
                pub const m_bUpdateLayerPriorities: usize = 0xB14; // bool
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
            pub mod CTriggerFan {
                pub const m_vFanOriginOffset: usize = 0x9A8; // Vector
                pub const m_vDirection: usize = 0x9B4; // Vector
                pub const m_bPushTowardsInfoTarget: usize = 0x9C0; // bool
                pub const m_bPushAwayFromInfoTarget: usize = 0x9C1; // bool
                pub const m_qNoiseDelta: usize = 0x9D0; // Quaternion
                pub const m_hInfoFan: usize = 0x9E0; // CHandle<CInfoFan>
                pub const m_flForce: usize = 0x9E4; // float32
                pub const m_bFalloff: usize = 0x9E8; // bool
                pub const m_RampTimer: usize = 0x9F0; // CountdownTimer
                pub const m_vFanOriginWS: usize = 0xA08; // VectorWS
                pub const m_vFanOriginLS: usize = 0xA14; // Vector
                pub const m_vFanEndLS: usize = 0xA20; // Vector
                pub const m_vNoiseDirectionTarget: usize = 0xA2C; // Vector
                pub const m_iszInfoFan: usize = 0xA38; // CUtlSymbolLarge
                pub const m_flRopeForceScale: usize = 0xA40; // float32
                pub const m_flParticleForceScale: usize = 0xA44; // float32
                pub const m_flPlayerForce: usize = 0xA48; // float32
                pub const m_bPlayerWindblock: usize = 0xA4C; // bool
                pub const m_flNPCForce: usize = 0xA50; // float32
                pub const m_flRampTime: usize = 0xA54; // float32
                pub const m_fNoiseDegrees: usize = 0xA58; // float32
                pub const m_fNoiseSpeed: usize = 0xA5C; // float32
                pub const m_bPushPlayer: usize = 0xA60; // bool
                pub const m_bRampDown: usize = 0xA61; // bool
                pub const m_nManagerFanIdx: usize = 0xA64; // int32
            }
            // Parent: CPhysHinge
            // Field count: 0
            pub mod CPhysHingeAlias_phys_hinge_local {
            }
            // Parent: CLogicalEntity
            // Field count: 6
            pub mod CLogicCase {
                pub const m_nCase: usize = 0x4F0; // CUtlSymbolLarge[32]
                pub const m_nShuffleCases: usize = 0x5F0; // int32
                pub const m_nLastShuffleCase: usize = 0x5F4; // int32
                pub const m_uchShuffleCaseMap: usize = 0x5F8; // uint8[32]
                pub const m_OnCase: usize = 0x618; // CEntityIOOutput[32]
                pub const m_OnDefault: usize = 0xB18; // CEntityOutputTemplate<CVariantBase<CVariantDefaultAllocator>>
            }
            // Parent: CPointEntity
            // Field count: 2
            pub mod CInfoGameEventProxy {
                pub const m_iszEventName: usize = 0x4F0; // CUtlSymbolLarge
                pub const m_flRange: usize = 0x4F8; // float32
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            pub mod CWeaponBizon {
            }
            // Parent: CRuleBrushEntity
            // Field count: 4
            pub mod CGamePlayerZone {
                pub const m_OnPlayerInZone: usize = 0x7E0; // CEntityIOOutput
                pub const m_OnPlayerOutZone: usize = 0x808; // CEntityIOOutput
                pub const m_PlayersInCount: usize = 0x830; // CEntityOutputTemplate<int32>
                pub const m_PlayersOutCount: usize = 0x858; // CEntityOutputTemplate<int32>
            }
            // Parent: CBaseModelEntity
            // Field count: 16
            pub mod CBaseToggle {
                pub const m_toggle_state: usize = 0x7D8; // TOGGLE_STATE
                pub const m_flMoveDistance: usize = 0x7DC; // float32
                pub const m_flWait: usize = 0x7E0; // float32
                pub const m_flLip: usize = 0x7E4; // float32
                pub const m_bAlwaysFireBlockedOutputs: usize = 0x7E8; // bool
                pub const m_vecPosition1: usize = 0x7EC; // Vector
                pub const m_vecPosition2: usize = 0x7F8; // Vector
                pub const m_vecMoveAng: usize = 0x804; // QAngle
                pub const m_vecAngle1: usize = 0x810; // QAngle
                pub const m_vecAngle2: usize = 0x81C; // QAngle
                pub const m_flHeight: usize = 0x828; // float32
                pub const m_hActivator: usize = 0x82C; // CHandle<CBaseEntity>
                pub const m_vecFinalDest: usize = 0x830; // Vector
                pub const m_vecFinalAngle: usize = 0x83C; // QAngle
                pub const m_movementType: usize = 0x848; // int32
                pub const m_sMaster: usize = 0x850; // CUtlSymbolLarge
            }
            // Parent: None
            // Field count: 2
            pub mod CPulseServerCursor {
                pub const m_hActivator: usize = 0xD8; // CHandle<CBaseEntity>
                pub const m_hCaller: usize = 0xDC; // CHandle<CBaseEntity>
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CPulseCell_PlaySequence {
                pub const m_SequenceName: usize = 0x48; // CUtlString
                pub const m_PulseAnimEvents: usize = 0x50; // PulseNodeDynamicOutflows_t
                pub const m_OnFinished: usize = 0x68; // CPulse_ResumePoint
                pub const m_OnCanceled: usize = 0xB0; // CPulse_ResumePoint
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
            pub mod CInferno {
                pub const m_firePositions: usize = 0x7D8; // Vector[64]
                pub const m_fireParentPositions: usize = 0xAD8; // Vector[64]
                pub const m_bFireIsBurning: usize = 0xDD8; // bool[64]
                pub const m_BurnNormal: usize = 0xE18; // Vector[64]
                pub const m_fireCount: usize = 0x1118; // int32
                pub const m_nInfernoType: usize = 0x111C; // int32
                pub const m_nFireEffectTickBegin: usize = 0x1120; // int32
                pub const m_nFireLifetime: usize = 0x1124; // float32
                pub const m_bInPostEffectTime: usize = 0x1128; // bool
                pub const m_bWasCreatedInSmoke: usize = 0x1129; // bool
                pub const m_extent: usize = 0x1330; // Extent
                pub const m_damageTimer: usize = 0x1348; // CountdownTimer
                pub const m_damageRampTimer: usize = 0x1360; // CountdownTimer
                pub const m_splashVelocity: usize = 0x1378; // Vector
                pub const m_InitialSplashVelocity: usize = 0x1384; // Vector
                pub const m_startPos: usize = 0x1390; // Vector
                pub const m_vecOriginalSpawnLocation: usize = 0x139C; // Vector
                pub const m_activeTimer: usize = 0x13A8; // IntervalTimer
                pub const m_fireSpawnOffset: usize = 0x13B8; // int32
                pub const m_nMaxFlames: usize = 0x13BC; // int32
                pub const m_nSpreadCount: usize = 0x13C0; // int32
                pub const m_BookkeepingTimer: usize = 0x13C8; // CountdownTimer
                pub const m_NextSpreadTimer: usize = 0x13E0; // CountdownTimer
                pub const m_nSourceItemDefIndex: usize = 0x13F8; // uint16
            }
            // Parent: CEntityComponent
            // Field count: 0
            pub mod CTouchExpansionComponent {
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Outflow_PlaySceneBase {
                pub const m_OnFinished: usize = 0x48; // CPulse_ResumePoint
                pub const m_OnCanceled: usize = 0x90; // CPulse_ResumePoint
                pub const m_Triggers: usize = 0xD8; // CUtlVector<CPulse_OutflowConnection>
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_LerpCameraSettings {
                pub const m_flSeconds: usize = 0x90; // float32
                pub const m_Start: usize = 0x94; // PointCameraSettings_t
                pub const m_End: usize = 0xA4; // PointCameraSettings_t
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            pub mod CWeaponSCAR20 {
            }
            // Parent: CBaseModelEntity
            // Field count: 3
            pub mod CFuncInteractionLayerClip {
                pub const m_bDisabled: usize = 0x7D8; // bool
                pub const m_iszInteractsAs: usize = 0x7E0; // CUtlSymbolLarge
                pub const m_iszInteractsWith: usize = 0x7E8; // CUtlSymbolLarge
            }
            // Parent: CPlayer_UseServices
            // Field count: 0
            pub mod CCSObserver_UseServices {
            }
            // Parent: CBaseTrigger
            // Field count: 2
            pub mod CTriggerDetectBulletFire {
                pub const m_bPlayerFireOnly: usize = 0x9A8; // bool
                pub const m_OnDetectedBulletFire: usize = 0x9B0; // CEntityIOOutput
            }
            // Parent: CPlayer_UseServices
            // Field count: 3
            pub mod CCSPlayer_UseServices {
                pub const m_hLastKnownUseEntity: usize = 0x40; // CHandle<CBaseEntity>
                pub const m_flLastUseTimeStamp: usize = 0x44; // GameTime_t
                pub const m_flTimeLastUsedWindow: usize = 0x48; // GameTime_t
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            pub mod CWeaponAWP {
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
            pub mod CPulseCell_PickBestOutflowSelector {
                pub const m_nCheckType: usize = 0x48; // PulseBestOutflowRules_t
                pub const m_OutflowList: usize = 0x50; // PulseSelectorOutflowList_t
            }
            // Parent: CPointEntity
            // Field count: 4
            //
            // Metadata:
            // NetworkVarNames: m_fFanForceMaxRadius (float)
            // NetworkVarNames: m_fFanForceMinRadius (float)
            // NetworkVarNames: m_flCurveDistRange (float)
            // NetworkVarNames: m_FanForceCurveString (string_t)
            pub mod CInfoFan {
                pub const m_fFanForceMaxRadius: usize = 0x530; // float32
                pub const m_fFanForceMinRadius: usize = 0x534; // float32
                pub const m_flCurveDistRange: usize = 0x538; // float32
                pub const m_FanForceCurveString: usize = 0x540; // CUtlSymbolLarge
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // NetworkVarNames: m_nTotalPausedTicks (int)
            // NetworkVarNames: m_nPauseStartTick (int)
            // NetworkVarNames: m_bGamePaused (bool)
            pub mod CGameRules {
                pub const __m_pChainEntity: usize = 0x8; // CNetworkVarChainer
                pub const m_szQuestName: usize = 0x30; // char[128]
                pub const m_nQuestPhase: usize = 0xB0; // int32
                pub const m_nTotalPausedTicks: usize = 0xB4; // int32
                pub const m_nPauseStartTick: usize = 0xB8; // int32
                pub const m_bGamePaused: usize = 0xBC; // bool
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
            pub mod CFish {
                pub const m_pool: usize = 0xA90; // CHandle<CFishPool>
                pub const m_id: usize = 0xA94; // uint32
                pub const m_x: usize = 0xA98; // float32
                pub const m_y: usize = 0xA9C; // float32
                pub const m_z: usize = 0xAA0; // float32
                pub const m_angle: usize = 0xAA4; // float32
                pub const m_angleChange: usize = 0xAA8; // float32
                pub const m_forward: usize = 0xAAC; // Vector
                pub const m_perp: usize = 0xAB8; // Vector
                pub const m_poolOrigin: usize = 0xAC4; // Vector
                pub const m_waterLevel: usize = 0xAD0; // float32
                pub const m_speed: usize = 0xAD4; // float32
                pub const m_desiredSpeed: usize = 0xAD8; // float32
                pub const m_calmSpeed: usize = 0xADC; // float32
                pub const m_panicSpeed: usize = 0xAE0; // float32
                pub const m_avoidRange: usize = 0xAE4; // float32
                pub const m_turnTimer: usize = 0xAE8; // CountdownTimer
                pub const m_turnClockwise: usize = 0xB00; // bool
                pub const m_goTimer: usize = 0xB08; // CountdownTimer
                pub const m_moveTimer: usize = 0xB20; // CountdownTimer
                pub const m_panicTimer: usize = 0xB38; // CountdownTimer
                pub const m_disperseTimer: usize = 0xB50; // CountdownTimer
                pub const m_proximityTimer: usize = 0xB68; // CountdownTimer
                pub const m_visible: usize = 0xB80; // CUtlVector<CFish*>
            }
            // Parent: CBot
            // Field count: 139
            pub mod CCSBot {
                pub const m_eyePosition: usize = 0x108; // VectorWS
                pub const m_name: usize = 0x114; // char[64]
                pub const m_combatRange: usize = 0x154; // float32
                pub const m_isRogue: usize = 0x158; // bool
                pub const m_rogueTimer: usize = 0x160; // CountdownTimer
                pub const m_diedLastRound: usize = 0x17C; // bool
                pub const m_safeTime: usize = 0x180; // float32
                pub const m_wasSafe: usize = 0x184; // bool
                pub const m_blindFire: usize = 0x18C; // bool
                pub const m_surpriseTimer: usize = 0x190; // CountdownTimer
                pub const m_bAllowActive: usize = 0x1A8; // bool
                pub const m_isFollowing: usize = 0x1A9; // bool
                pub const m_leader: usize = 0x1AC; // CHandle<CCSPlayerPawn>
                pub const m_followTimestamp: usize = 0x1B0; // float32
                pub const m_allowAutoFollowTime: usize = 0x1B4; // float32
                pub const m_hurryTimer: usize = 0x1B8; // CountdownTimer
                pub const m_alertTimer: usize = 0x1D0; // CountdownTimer
                pub const m_sneakTimer: usize = 0x1E8; // CountdownTimer
                pub const m_panicTimer: usize = 0x200; // CountdownTimer
                pub const m_stateTimestamp: usize = 0x4D0; // float32
                pub const m_isAttacking: usize = 0x4D4; // bool
                pub const m_isOpeningDoor: usize = 0x4D5; // bool
                pub const m_taskEntity: usize = 0x4DC; // CHandle<CBaseEntity>
                pub const m_goalPosition: usize = 0x4EC; // VectorWS
                pub const m_goalEntity: usize = 0x4F8; // CHandle<CBaseEntity>
                pub const m_avoid: usize = 0x4FC; // CHandle<CBaseEntity>
                pub const m_avoidTimestamp: usize = 0x500; // float32
                pub const m_isStopping: usize = 0x504; // bool
                pub const m_hasVisitedEnemySpawn: usize = 0x505; // bool
                pub const m_stillTimer: usize = 0x508; // IntervalTimer
                pub const m_bEyeAnglesUnderPathFinderControl: usize = 0x518; // bool
                pub const m_pathIndex: usize = 0x5E18; // int32
                pub const m_areaEnteredTimestamp: usize = 0x5E1C; // GameTime_t
                pub const m_repathTimer: usize = 0x5E20; // CountdownTimer
                pub const m_avoidFriendTimer: usize = 0x5E38; // CountdownTimer
                pub const m_isFriendInTheWay: usize = 0x5E50; // bool
                pub const m_politeTimer: usize = 0x5E58; // CountdownTimer
                pub const m_isWaitingBehindFriend: usize = 0x5E70; // bool
                pub const m_pathLadderEnd: usize = 0x5E9C; // float32
                pub const m_mustRunTimer: usize = 0x5EE8; // CountdownTimer
                pub const m_waitTimer: usize = 0x5F00; // CountdownTimer
                pub const m_updateTravelDistanceTimer: usize = 0x5F18; // CountdownTimer
                pub const m_playerTravelDistance: usize = 0x5F30; // float32[64]
                pub const m_travelDistancePhase: usize = 0x6030; // uint8
                pub const m_hostageEscortCount: usize = 0x61C8; // uint8
                pub const m_hostageEscortCountTimestamp: usize = 0x61CC; // float32
                pub const m_desiredTeam: usize = 0x61D0; // int32
                pub const m_hasJoined: usize = 0x61D4; // bool
                pub const m_isWaitingForHostage: usize = 0x61D5; // bool
                pub const m_inhibitWaitingForHostageTimer: usize = 0x61D8; // CountdownTimer
                pub const m_waitForHostageTimer: usize = 0x61F0; // CountdownTimer
                pub const m_noisePosition: usize = 0x6208; // Vector
                pub const m_noiseTravelDistance: usize = 0x6214; // float32
                pub const m_noiseTimestamp: usize = 0x6218; // float32
                pub const m_noiseSource: usize = 0x6220; // CCSPlayerPawn*
                pub const m_noiseBendTimer: usize = 0x6238; // CountdownTimer
                pub const m_bentNoisePosition: usize = 0x6250; // Vector
                pub const m_bendNoisePositionValid: usize = 0x625C; // bool
                pub const m_lookAroundStateTimestamp: usize = 0x6260; // float32
                pub const m_lookAheadAngle: usize = 0x6264; // float32
                pub const m_forwardAngle: usize = 0x6268; // float32
                pub const m_inhibitLookAroundTimestamp: usize = 0x626C; // float32
                pub const m_lookAtSpot: usize = 0x6274; // Vector
                pub const m_lookAtSpotDuration: usize = 0x6284; // float32
                pub const m_lookAtSpotTimestamp: usize = 0x6288; // float32
                pub const m_lookAtSpotAngleTolerance: usize = 0x628C; // float32
                pub const m_lookAtSpotClearIfClose: usize = 0x6290; // bool
                pub const m_lookAtSpotAttack: usize = 0x6291; // bool
                pub const m_lookAtDesc: usize = 0x6298; // char*
                pub const m_peripheralTimestamp: usize = 0x62A0; // float32
                pub const m_approachPointCount: usize = 0x6428; // uint8
                pub const m_approachPointViewPosition: usize = 0x642C; // Vector
                pub const m_viewSteadyTimer: usize = 0x6438; // IntervalTimer
                pub const m_tossGrenadeTimer: usize = 0x6450; // CountdownTimer
                pub const m_isAvoidingGrenade: usize = 0x6470; // CountdownTimer
                pub const m_spotCheckTimestamp: usize = 0x6490; // float32
                pub const m_checkedHidingSpotCount: usize = 0x6898; // int32
                pub const m_lookPitch: usize = 0x689C; // float32
                pub const m_lookPitchVel: usize = 0x68A0; // float32
                pub const m_lookYaw: usize = 0x68A4; // float32
                pub const m_lookYawVel: usize = 0x68A8; // float32
                pub const m_targetSpot: usize = 0x68AC; // Vector
                pub const m_targetSpotVelocity: usize = 0x68B8; // Vector
                pub const m_targetSpotPredicted: usize = 0x68C4; // Vector
                pub const m_aimError: usize = 0x68D0; // QAngle
                pub const m_aimGoal: usize = 0x68DC; // QAngle
                pub const m_targetSpotTime: usize = 0x68E8; // GameTime_t
                pub const m_aimFocus: usize = 0x68EC; // float32
                pub const m_aimFocusInterval: usize = 0x68F0; // float32
                pub const m_aimFocusNextUpdate: usize = 0x68F4; // GameTime_t
                pub const m_ignoreEnemiesTimer: usize = 0x6900; // CountdownTimer
                pub const m_enemy: usize = 0x6918; // CHandle<CCSPlayerPawn>
                pub const m_isEnemyVisible: usize = 0x691C; // bool
                pub const m_visibleEnemyParts: usize = 0x691D; // uint8
                pub const m_lastEnemyPosition: usize = 0x6920; // Vector
                pub const m_lastSawEnemyTimestamp: usize = 0x692C; // float32
                pub const m_firstSawEnemyTimestamp: usize = 0x6930; // float32
                pub const m_currentEnemyAcquireTimestamp: usize = 0x6934; // float32
                pub const m_enemyDeathTimestamp: usize = 0x6938; // float32
                pub const m_friendDeathTimestamp: usize = 0x693C; // float32
                pub const m_isLastEnemyDead: usize = 0x6940; // bool
                pub const m_nearbyEnemyCount: usize = 0x6944; // int32
                pub const m_bomber: usize = 0x6B50; // CHandle<CCSPlayerPawn>
                pub const m_nearbyFriendCount: usize = 0x6B54; // int32
                pub const m_closestVisibleFriend: usize = 0x6B58; // CHandle<CCSPlayerPawn>
                pub const m_closestVisibleHumanFriend: usize = 0x6B5C; // CHandle<CCSPlayerPawn>
                pub const m_attentionInterval: usize = 0x6B60; // IntervalTimer
                pub const m_attacker: usize = 0x6B70; // CHandle<CCSPlayerPawn>
                pub const m_attackedTimestamp: usize = 0x6B74; // float32
                pub const m_burnedByFlamesTimer: usize = 0x6B78; // IntervalTimer
                pub const m_lastVictimID: usize = 0x6B88; // int32
                pub const m_isAimingAtEnemy: usize = 0x6B8C; // bool
                pub const m_isRapidFiring: usize = 0x6B8D; // bool
                pub const m_equipTimer: usize = 0x6B90; // IntervalTimer
                pub const m_zoomTimer: usize = 0x6BA0; // CountdownTimer
                pub const m_fireWeaponTimestamp: usize = 0x6BB8; // GameTime_t
                pub const m_lookForWeaponsOnGroundTimer: usize = 0x6BC0; // CountdownTimer
                pub const m_bIsSleeping: usize = 0x6BD8; // bool
                pub const m_isEnemySniperVisible: usize = 0x6BD9; // bool
                pub const m_sawEnemySniperTimer: usize = 0x6BE0; // CountdownTimer
                pub const m_enemyQueueIndex: usize = 0x6C98; // uint8
                pub const m_enemyQueueCount: usize = 0x6C99; // uint8
                pub const m_enemyQueueAttendIndex: usize = 0x6C9A; // uint8
                pub const m_isStuck: usize = 0x6C9B; // bool
                pub const m_stuckTimestamp: usize = 0x6C9C; // GameTime_t
                pub const m_stuckSpot: usize = 0x6CA0; // Vector
                pub const m_wiggleTimer: usize = 0x6CB0; // CountdownTimer
                pub const m_stuckJumpTimer: usize = 0x6CC8; // CountdownTimer
                pub const m_nextCleanupCheckTimestamp: usize = 0x6CE0; // GameTime_t
                pub const m_avgVel: usize = 0x6CE4; // float32[10]
                pub const m_avgVelIndex: usize = 0x6D0C; // int32
                pub const m_avgVelCount: usize = 0x6D10; // int32
                pub const m_lastOrigin: usize = 0x6D14; // Vector
                pub const m_lastRadioRecievedTimestamp: usize = 0x6D24; // float32
                pub const m_lastRadioSentTimestamp: usize = 0x6D28; // float32
                pub const m_radioSubject: usize = 0x6D2C; // CHandle<CCSPlayerPawn>
                pub const m_radioPosition: usize = 0x6D30; // Vector
                pub const m_voiceEndTimestamp: usize = 0x6D3C; // float32
                pub const m_lastValidReactionQueueFrame: usize = 0x6D48; // int32
            }
            // Parent: CBaseEntity
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_Handle (CHandle<CBaseEntity>)
            // NetworkVarNames: m_bSendHandle (bool)
            pub mod CHandleTest {
                pub const m_Handle: usize = 0x4F0; // CHandle<CBaseEntity>
                pub const m_bSendHandle: usize = 0x4F4; // bool
            }
            // Parent: CBaseEntity
            // Field count: 48
            pub mod CLogicNPCCounter {
                pub const m_OnMinCountAll: usize = 0x4F0; // CEntityIOOutput
                pub const m_OnMaxCountAll: usize = 0x518; // CEntityIOOutput
                pub const m_OnFactorAll: usize = 0x540; // CEntityOutputTemplate<float32>
                pub const m_OnMinPlayerDistAll: usize = 0x568; // CEntityOutputTemplate<float32>
                pub const m_OnMinCount_1: usize = 0x590; // CEntityIOOutput
                pub const m_OnMaxCount_1: usize = 0x5B8; // CEntityIOOutput
                pub const m_OnFactor_1: usize = 0x5E0; // CEntityOutputTemplate<float32>
                pub const m_OnMinPlayerDist_1: usize = 0x608; // CEntityOutputTemplate<float32>
                pub const m_OnMinCount_2: usize = 0x630; // CEntityIOOutput
                pub const m_OnMaxCount_2: usize = 0x658; // CEntityIOOutput
                pub const m_OnFactor_2: usize = 0x680; // CEntityOutputTemplate<float32>
                pub const m_OnMinPlayerDist_2: usize = 0x6A8; // CEntityOutputTemplate<float32>
                pub const m_OnMinCount_3: usize = 0x6D0; // CEntityIOOutput
                pub const m_OnMaxCount_3: usize = 0x6F8; // CEntityIOOutput
                pub const m_OnFactor_3: usize = 0x720; // CEntityOutputTemplate<float32>
                pub const m_OnMinPlayerDist_3: usize = 0x748; // CEntityOutputTemplate<float32>
                pub const m_hSource: usize = 0x770; // CEntityHandle
                pub const m_iszSourceEntityName: usize = 0x778; // CUtlSymbolLarge
                pub const m_flDistanceMax: usize = 0x780; // float32
                pub const m_bDisabled: usize = 0x784; // bool
                pub const m_nMinCountAll: usize = 0x788; // int32
                pub const m_nMaxCountAll: usize = 0x78C; // int32
                pub const m_nMinFactorAll: usize = 0x790; // int32
                pub const m_nMaxFactorAll: usize = 0x794; // int32
                pub const m_iszNPCClassname_1: usize = 0x7A0; // CUtlSymbolLarge
                pub const m_nNPCState_1: usize = 0x7A8; // int32
                pub const m_bInvertState_1: usize = 0x7AC; // bool
                pub const m_nMinCount_1: usize = 0x7B0; // int32
                pub const m_nMaxCount_1: usize = 0x7B4; // int32
                pub const m_nMinFactor_1: usize = 0x7B8; // int32
                pub const m_nMaxFactor_1: usize = 0x7BC; // int32
                pub const m_flDefaultDist_1: usize = 0x7C4; // float32
                pub const m_iszNPCClassname_2: usize = 0x7C8; // CUtlSymbolLarge
                pub const m_nNPCState_2: usize = 0x7D0; // int32
                pub const m_bInvertState_2: usize = 0x7D4; // bool
                pub const m_nMinCount_2: usize = 0x7D8; // int32
                pub const m_nMaxCount_2: usize = 0x7DC; // int32
                pub const m_nMinFactor_2: usize = 0x7E0; // int32
                pub const m_nMaxFactor_2: usize = 0x7E4; // int32
                pub const m_flDefaultDist_2: usize = 0x7EC; // float32
                pub const m_iszNPCClassname_3: usize = 0x7F0; // CUtlSymbolLarge
                pub const m_nNPCState_3: usize = 0x7F8; // int32
                pub const m_bInvertState_3: usize = 0x7FC; // bool
                pub const m_nMinCount_3: usize = 0x800; // int32
                pub const m_nMaxCount_3: usize = 0x804; // int32
                pub const m_nMinFactor_3: usize = 0x808; // int32
                pub const m_nMaxFactor_3: usize = 0x80C; // int32
                pub const m_flDefaultDist_3: usize = 0x814; // float32
            }
            // Parent: CPlayerPawnComponent
            // Field count: 5
            pub mod CCSPlayer_RadioServices {
                pub const m_flGotHostageTalkTimer: usize = 0x40; // GameTime_t
                pub const m_flDefusingTalkTimer: usize = 0x44; // GameTime_t
                pub const m_flC4PlantTalkTimer: usize = 0x48; // GameTime_t
                pub const m_flRadioTokenSlots: usize = 0x4C; // GameTime_t[3]
                pub const m_bIgnoreRadio: usize = 0x58; // bool
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            pub mod CWeaponSG556 {
            }
            // Parent: CPhysConstraint
            // Field count: 9
            pub mod CRagdollConstraint {
                pub const m_xmin: usize = 0x560; // float32
                pub const m_xmax: usize = 0x564; // float32
                pub const m_ymin: usize = 0x568; // float32
                pub const m_ymax: usize = 0x56C; // float32
                pub const m_zmin: usize = 0x570; // float32
                pub const m_zmax: usize = 0x574; // float32
                pub const m_xfriction: usize = 0x578; // float32
                pub const m_yfriction: usize = 0x57C; // float32
                pub const m_zfriction: usize = 0x580; // float32
            }
            // Parent: CBaseModelEntity
            // Field count: 0
            pub mod CFuncVehicleClip {
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            pub mod CDEagle {
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            pub mod CWeaponFamas {
            }
            // Parent: CPointEntity
            // Field count: 1
            pub mod CEnvSplash {
                pub const m_flScale: usize = 0x4F0; // float32
            }
            // Parent: CPointCamera
            // Field count: 1
            pub mod CPointCameraVFOV {
                pub const m_flVerticalFOV: usize = 0x550; // float32
            }
            // Parent: CCSGO_WingmanIntroCharacterPosition
            // Field count: 0
            pub mod CCSGO_WingmanIntroTerroristPosition {
            }
            // Parent: None
            // Field count: 0
            pub mod CTestPulseIOAPI {
            }
            // Parent: CCSWeaponBase
            // Field count: 0
            pub mod CCSWeaponBaseShotgun {
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPrecipitationVData {
                pub const m_szParticlePrecipitationEffect: usize = 0x28; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                pub const m_flInnerDistance: usize = 0x108; // float32
                pub const m_nAttachType: usize = 0x10C; // ParticleAttachment_t
                pub const m_bBatchSameVolumeType: usize = 0x110; // bool
                pub const m_nRTEnvCP: usize = 0x114; // int32
                pub const m_nRTEnvCPComponent: usize = 0x118; // int32
                pub const m_szModifier: usize = 0x120; // CUtlString
            }
            // Parent: CBaseToggle
            // Field count: 13
            //
            // Metadata:
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkOverride
            pub mod CFuncMoveLinear {
                pub const m_authoredPosition: usize = 0x858; // MoveLinearAuthoredPos_t
                pub const m_angMoveEntitySpace: usize = 0x85C; // QAngle
                pub const m_vecMoveDirParentSpace: usize = 0x868; // Vector
                pub const m_soundStart: usize = 0x878; // CUtlSymbolLarge
                pub const m_soundStop: usize = 0x880; // CUtlSymbolLarge
                pub const m_currentSound: usize = 0x888; // CUtlSymbolLarge
                pub const m_flBlockDamage: usize = 0x890; // float32
                pub const m_flStartPosition: usize = 0x894; // float32
                pub const m_OnFullyOpen: usize = 0x8A0; // CEntityIOOutput
                pub const m_OnFullyClosed: usize = 0x8C8; // CEntityIOOutput
                pub const m_bCreateMovableNavMesh: usize = 0x8F0; // bool
                pub const m_bAllowMovableNavMeshDockingOnEntireEntity: usize = 0x8F1; // bool
                pub const m_bCreateNavObstacle: usize = 0x8F2; // bool
            }
            // Parent: None
            // Field count: 0
            pub mod CPhysMotorAPI {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPulseEditorHeaderIcon
            // MPropertyFriendlyName
            pub mod CPulseCell_WaitForObservable {
                pub const m_Condition: usize = 0x48; // PulseObservableBoolExpression_t
                pub const m_OnTrue: usize = 0xC0; // CPulse_ResumePoint
            }
            // Parent: CItem
            // Field count: 1
            pub mod CScriptItem {
                pub const m_MoveTypeOverride: usize = 0xB70; // MoveType_t
            }
            // Parent: CDynamicProp
            // Field count: 0
            pub mod CDynamicPropAlias_prop_dynamic_override {
            }
            // Parent: CBaseToggle
            // Field count: 12
            //
            // Metadata:
            // MNetworkIncludeByName
            // NetworkVarNames: m_bDisabled (bool)
            pub mod CBaseTrigger {
                pub const m_OnStartTouch: usize = 0x858; // CEntityIOOutput
                pub const m_OnStartTouchAll: usize = 0x880; // CEntityIOOutput
                pub const m_OnEndTouch: usize = 0x8A8; // CEntityIOOutput
                pub const m_OnEndTouchAll: usize = 0x8D0; // CEntityIOOutput
                pub const m_OnTouching: usize = 0x8F8; // CEntityIOOutput
                pub const m_OnTouchingEachEntity: usize = 0x920; // CEntityIOOutput
                pub const m_OnNotTouching: usize = 0x948; // CEntityIOOutput
                pub const m_hTouchingEntities: usize = 0x970; // CUtlVector<CHandle<CBaseEntity>>
                pub const m_iFilterName: usize = 0x988; // CUtlSymbolLarge
                pub const m_hFilter: usize = 0x990; // CHandle<CBaseFilter>
                pub const m_bDisabled: usize = 0x994; // bool
                pub const m_bUseAsyncQueries: usize = 0x9A0; // bool
            }
            // Parent: CPointEntity
            // Field count: 7
            pub mod CPointPush {
                pub const m_bEnabled: usize = 0x4F0; // bool
                pub const m_flMagnitude: usize = 0x4F4; // float32
                pub const m_flRadius: usize = 0x4F8; // float32
                pub const m_flInnerRadius: usize = 0x4FC; // float32
                pub const m_flConeOfInfluence: usize = 0x500; // float32
                pub const m_iszFilterName: usize = 0x508; // CUtlSymbolLarge
                pub const m_hFilter: usize = 0x510; // CHandle<CBaseFilter>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Step_EntFire {
                pub const m_Input: usize = 0x48; // CUtlString
            }
            // Parent: CPlayer_ObserverServices
            // Field count: 0
            pub mod CCSObserver_ObserverServices {
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
            pub mod CPlayerPing {
                pub const m_hPlayer: usize = 0x4F8; // CHandle<CCSPlayerPawn>
                pub const m_hPingedEntity: usize = 0x4FC; // CHandle<CBaseEntity>
                pub const m_iType: usize = 0x500; // int32
                pub const m_bUrgent: usize = 0x504; // bool
                pub const m_szPlaceName: usize = 0x505; // char[18]
            }
            // Parent: CEntityComponent
            // Field count: 1
            pub mod CHitboxComponent {
                pub const m_flBoundsExpandRadius: usize = 0x14; // float32
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
            pub mod CRopeKeyframe {
                pub const m_RopeFlags: usize = 0x7E0; // uint16
                pub const m_iNextLinkName: usize = 0x7E8; // CUtlSymbolLarge
                pub const m_Slack: usize = 0x7F0; // int16
                pub const m_Width: usize = 0x7F4; // float32
                pub const m_TextureScale: usize = 0x7F8; // float32
                pub const m_nSegments: usize = 0x7FC; // uint8
                pub const m_bConstrainBetweenEndpoints: usize = 0x7FD; // bool
                pub const m_strRopeMaterialModel: usize = 0x800; // CUtlSymbolLarge
                pub const m_iRopeMaterialModelIndex: usize = 0x808; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_Subdiv: usize = 0x810; // uint8
                pub const m_nChangeCount: usize = 0x811; // uint8
                pub const m_RopeLength: usize = 0x812; // int16
                pub const m_fLockedPoints: usize = 0x814; // uint8
                pub const m_bCreatedFromMapFile: usize = 0x815; // bool
                pub const m_flScrollSpeed: usize = 0x818; // float32
                pub const m_bStartPointValid: usize = 0x81C; // bool
                pub const m_bEndPointValid: usize = 0x81D; // bool
                pub const m_hStartPoint: usize = 0x820; // CHandle<CBaseEntity>
                pub const m_hEndPoint: usize = 0x824; // CHandle<CBaseEntity>
                pub const m_iStartAttachment: usize = 0x828; // AttachmentHandle_t
                pub const m_iEndAttachment: usize = 0x829; // AttachmentHandle_t
            }
            // Parent: CBaseCSGrenade
            // Field count: 0
            pub mod CSmokeGrenade {
            }
            // Parent: CBaseFlex
            // Field count: 10
            //
            // Metadata:
            // MNetworkExcludeByUserGroup
            // NetworkVarNames: m_hMyWearables (CHandle<CEconWearable>)
            pub mod CBaseCombatCharacter {
                pub const m_bForceServerRagdoll: usize = 0xB20; // bool
                pub const m_hMyWearables: usize = 0xB28; // CNetworkUtlVectorBase<CHandle<CEconWearable>>
                pub const m_impactEnergyScale: usize = 0xB40; // float32
                pub const m_bApplyStressDamage: usize = 0xB44; // bool
                pub const m_bDeathEventsDispatched: usize = 0xB45; // bool
                pub const m_pVecRelationships: usize = 0xB88; // CUtlVector<RelationshipOverride_t>*
                pub const m_strRelationships: usize = 0xB90; // CUtlSymbolLarge
                pub const m_eHull: usize = 0xB98; // Hull_t
                pub const m_nNavHullIdx: usize = 0xB9C; // uint32
                pub const m_movementStats: usize = 0xBA0; // CMovementStatsProperty
            }
            // Parent: CEntityComponent
            // Field count: 0
            pub mod CPathQueryComponent {
            }
            // Parent: CLogicalEntity
            // Field count: 5
            pub mod CLogicRelay {
                pub const m_bDisabled: usize = 0x4F0; // bool
                pub const m_bWaitForRefire: usize = 0x4F1; // bool
                pub const m_bTriggerOnce: usize = 0x4F2; // bool
                pub const m_bFastRetrigger: usize = 0x4F3; // bool
                pub const m_bPassthoughCaller: usize = 0x4F4; // bool
            }
            // Parent: 
            // Field count: 6
            pub mod SequenceHistory_t {
                pub const m_hSequence: usize = 0x0; // HSequence
                pub const m_flSeqStartTime: usize = 0x4; // GameTime_t
                pub const m_flSeqFixedCycle: usize = 0x8; // float32
                pub const m_nSeqLoopMode: usize = 0xC; // AnimLoopMode_t
                pub const m_flPlaybackRate: usize = 0x10; // float32
                pub const m_flCyclesPerSecond: usize = 0x14; // float32
            }
            // Parent: CPlayerPawnComponent
            // Field count: 0
            pub mod CPlayer_ItemServices {
            }
            // Parent: None
            // Field count: 4
            pub mod CPulse_OutflowConnection {
                pub const m_SourceOutflowName: usize = 0x0; // PulseSymbol_t
                pub const m_nDestChunk: usize = 0x10; // PulseRuntimeChunkIndex_t
                pub const m_nInstruction: usize = 0x14; // int32
                pub const m_OutflowRegisterMap: usize = 0x18; // PulseRegisterMap_t
            }
            // Parent: CLogicalEntity
            // Field count: 8
            pub mod CTestPulseIO {
                pub const m_OnVariantVoid: usize = 0x4F0; // CEntityIOOutput
                pub const m_OnVariantBool: usize = 0x518; // CEntityIOOutput
                pub const m_OnVariantInt: usize = 0x540; // CEntityIOOutput
                pub const m_OnVariantFloat: usize = 0x568; // CEntityIOOutput
                pub const m_OnVariantString: usize = 0x590; // CEntityIOOutput
                pub const m_OnVariantColor: usize = 0x5B8; // CEntityIOOutput
                pub const m_OnVariantVector: usize = 0x5E0; // CEntityIOOutput
                pub const m_bAllowEmptyInputs: usize = 0x608; // bool
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            pub mod CWeaponUMP45 {
            }
            // Parent: CRulePointEntity
            // Field count: 0
            pub mod CGamePlayerEquip {
            }
            // Parent: CBaseEntity
            // Field count: 7
            pub mod CPointEntityFinder {
                pub const m_hEntity: usize = 0x4F0; // CHandle<CBaseEntity>
                pub const m_iFilterName: usize = 0x4F8; // CUtlSymbolLarge
                pub const m_hFilter: usize = 0x500; // CHandle<CBaseFilter>
                pub const m_iRefName: usize = 0x508; // CUtlSymbolLarge
                pub const m_hReference: usize = 0x510; // CHandle<CBaseEntity>
                pub const m_FindMethod: usize = 0x514; // EntFinderMethod_t
                pub const m_OnFoundEntity: usize = 0x518; // CEntityIOOutput
            }
            // Parent: None
            // Field count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseGraphDef {
                pub const m_DomainIdentifier: usize = 0x8; // PulseSymbol_t
                pub const m_DomainSubType: usize = 0x18; // CPulseValueFullType
                pub const m_ParentMapName: usize = 0x30; // PulseSymbol_t
                pub const m_ParentXmlName: usize = 0x40; // PulseSymbol_t
                pub const m_Chunks: usize = 0x50; // CUtlVector<CPulse_Chunk*>
                pub const m_Cells: usize = 0x68; // CUtlVector<CPulseCell_Base*>
                pub const m_Vars: usize = 0x80; // CUtlVector<CPulse_Variable>
                pub const m_PublicOutputs: usize = 0x98; // CUtlVector<CPulse_PublicOutput>
                pub const m_InvokeBindings: usize = 0xB0; // CUtlVector<CPulse_InvokeBinding*>
                pub const m_CallInfos: usize = 0xC8; // CUtlVector<CPulse_CallInfo*>
                pub const m_Constants: usize = 0xE0; // CUtlVector<CPulse_Constant>
                pub const m_DomainValues: usize = 0xF8; // CUtlVector<CPulse_DomainValue>
                pub const m_BlackboardReferences: usize = 0x110; // CUtlVector<CPulse_BlackboardReference>
                pub const m_OutputConnections: usize = 0x128; // CUtlVector<CPulse_OutputConnection*>
            }
            // Parent: CCSWeaponBase
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_bFirstAttack (bool)
            pub mod CKnife {
                pub const m_bFirstAttack: usize = 0x11D0; // bool
            }
            // Parent: CLogicalEntity
            // Field count: 5
            pub mod CLogicPlayerProxy {
                pub const m_hPlayer: usize = 0x4F0; // CHandle<CBaseEntity>
                pub const m_PlayerHasAmmo: usize = 0x4F8; // CEntityIOOutput
                pub const m_PlayerHasNoAmmo: usize = 0x520; // CEntityIOOutput
                pub const m_PlayerDied: usize = 0x548; // CEntityIOOutput
                pub const m_RequestedPlayerHealth: usize = 0x570; // CEntityOutputTemplate<int32>
            }
            // Parent: CCSGO_TeamPreviewCharacterPosition
            // Field count: 0
            pub mod CCSGO_TeamIntroCharacterPosition {
            }
            // Parent: None
            // Field count: 0
            pub mod CBasePlayerControllerAPI {
            }
            // Parent: CBaseTrigger
            // Field count: 0
            pub mod CHostageRescueZoneShim {
            }
            // Parent: CMarkupVolumeTagged
            // Field count: 0
            pub mod CSimpleMarkupVolumeTagged {
            }
            // Parent: CEnvSoundscape
            // Field count: 0
            pub mod CEnvSoundscapeAlias_snd_soundscape {
            }
            // Parent: CPlayerPawnComponent
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_hCarriedHostage (CHandle<CBaseEntity>)
            // NetworkVarNames: m_hCarriedHostageProp (CHandle<CBaseEntity>)
            pub mod CCSPlayer_HostageServices {
                pub const m_hCarriedHostage: usize = 0x40; // CHandle<CBaseEntity>
                pub const m_hCarriedHostageProp: usize = 0x44; // CHandle<CBaseEntity>
            }
            // Parent: CEntityComponent
            // Field count: 5
            pub mod CRenderComponent {
                pub const __m_pChainEntity: usize = 0x10; // CNetworkVarChainer
                pub const m_bIsRenderingWithViewModels: usize = 0x50; // bool
                pub const m_nSplitscreenFlags: usize = 0x54; // uint32
                pub const m_bEnableRendering: usize = 0x58; // bool
                pub const m_bInterpolationReadyToDraw: usize = 0xA8; // bool
            }
            // Parent: CBaseAnimGraph
            // Field count: 0
            pub mod CWaterBullet {
            }
            // Parent: CBaseTrigger
            // Field count: 3
            pub mod CTriggerSoundscape {
                pub const m_hSoundscape: usize = 0x9A8; // CHandle<CEnvSoundscapeTriggerable>
                pub const m_SoundscapeName: usize = 0x9B0; // CUtlSymbolLarge
                pub const m_spectators: usize = 0x9B8; // CUtlVector<CHandle<CBasePlayerPawn>>
            }
            // Parent: None
            // Field count: 0
            pub mod CPointTeleportAPI {
            }
            // Parent: CBaseCombatCharacter
            // Field count: 1
            pub mod CHostageExpresserShim {
                pub const m_pExpresser: usize = 0xBE0; // CAI_Expresser*
            }
            // Parent: CPointEntity
            // Field count: 1
            pub mod CPointChildModifier {
                pub const m_bOrphanInsteadOfDeletingChildrenOnRemove: usize = 0x4F0; // bool
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            pub mod CWeaponHKP2000 {
            }
            // Parent: CPhysicsProp
            // Field count: 3
            //
            // Metadata:
            // MNetworkExcludeByName
            // NetworkVarNames: m_ShardDesc (shard_model_desc_t)
            pub mod CShatterGlassShardPhysics {
                pub const m_bDebris: usize = 0xE00; // bool
                pub const m_hParentShard: usize = 0xE04; // uint32
                pub const m_ShardDesc: usize = 0xE08; // shard_model_desc_t
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
            pub mod CPathParticleRope {
                pub const m_bStartActive: usize = 0x4F8; // bool
                pub const m_flMaxSimulationTime: usize = 0x4FC; // float32
                pub const m_iszEffectName: usize = 0x500; // CUtlSymbolLarge
                pub const m_PathNodes_Name: usize = 0x508; // CUtlVector<CUtlSymbolLarge>
                pub const m_flParticleSpacing: usize = 0x520; // float32
                pub const m_flSlack: usize = 0x524; // float32
                pub const m_flRadius: usize = 0x528; // float32
                pub const m_ColorTint: usize = 0x52C; // Color
                pub const m_nEffectState: usize = 0x530; // int32
                pub const m_iEffectIndex: usize = 0x538; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                pub const m_PathNodes_Position: usize = 0x540; // CNetworkUtlVectorBase<Vector>
                pub const m_PathNodes_TangentIn: usize = 0x558; // CNetworkUtlVectorBase<Vector>
                pub const m_PathNodes_TangentOut: usize = 0x570; // CNetworkUtlVectorBase<Vector>
                pub const m_PathNodes_Color: usize = 0x588; // CNetworkUtlVectorBase<Vector>
                pub const m_PathNodes_PinEnabled: usize = 0x5A0; // CNetworkUtlVectorBase<bool>
                pub const m_PathNodes_RadiusScale: usize = 0x5B8; // CNetworkUtlVectorBase<float32>
            }
            // Parent: CPointEntity
            // Field count: 3
            pub mod CCredits {
                pub const m_OnCreditsDone: usize = 0x4F0; // CEntityIOOutput
                pub const m_bRolledOutroCredits: usize = 0x518; // bool
                pub const m_flLogoLength: usize = 0x51C; // float32
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            pub mod CWeaponFiveSeven {
            }
            // Parent: CBaseEntity
            // Field count: 7
            pub mod CFishPool {
                pub const m_fishCount: usize = 0x500; // int32
                pub const m_maxRange: usize = 0x504; // float32
                pub const m_swimDepth: usize = 0x508; // float32
                pub const m_waterLevel: usize = 0x50C; // float32
                pub const m_isDormant: usize = 0x510; // bool
                pub const m_fishes: usize = 0x518; // CUtlVector<CHandle<CFish>>
                pub const m_visTimer: usize = 0x530; // CountdownTimer
            }
            // Parent: CPlayerPawnComponent
            // Field count: 15
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
                pub const m_vecOldViewAngles: usize = 0x220; // QAngle
            }
            // Parent: CRagdollProp
            // Field count: 0
            pub mod CRagdollPropAlias_physics_prop_ragdoll {
            }
            // Parent: CBaseProp
            // Field count: 32
            //
            // Metadata:
            // NetworkVarNames: m_CPropDataComponent (CPropDataComponent::Storage_t)
            pub mod CBreakableProp {
                pub const m_CPropDataComponent: usize = 0xAC8; // CPropDataComponent
                pub const m_OnStartDeath: usize = 0xB08; // CEntityIOOutput
                pub const m_OnBreak: usize = 0xB30; // CEntityIOOutput
                pub const m_OnHealthChanged: usize = 0xB58; // CEntityOutputTemplate<float32>
                pub const m_OnTakeDamage: usize = 0xB80; // CEntityIOOutput
                pub const m_impactEnergyScale: usize = 0xBA8; // float32
                pub const m_iMinHealthDmg: usize = 0xBAC; // int32
                pub const m_preferredCarryAngles: usize = 0xBB0; // QAngle
                pub const m_flPressureDelay: usize = 0xBBC; // float32
                pub const m_flDefBurstScale: usize = 0xBC0; // float32
                pub const m_vDefBurstOffset: usize = 0xBC4; // Vector
                pub const m_hBreaker: usize = 0xBD0; // CHandle<CBaseEntity>
                pub const m_PerformanceMode: usize = 0xBD4; // PerformanceMode_t
                pub const m_flPreventDamageBeforeTime: usize = 0xBD8; // GameTime_t
                pub const m_BreakableContentsType: usize = 0xBDC; // BreakableContentsType_t
                pub const m_strBreakableContentsPropGroupOverride: usize = 0xBE0; // CUtlString
                pub const m_strBreakableContentsParticleOverride: usize = 0xBE8; // CUtlString
                pub const m_bHasBreakPiecesOrCommands: usize = 0xBF0; // bool
                pub const m_explodeDamage: usize = 0xBF4; // float32
                pub const m_explodeRadius: usize = 0xBF8; // float32
                pub const m_explosionDelay: usize = 0xC00; // float32
                pub const m_explosionBuildupSound: usize = 0xC08; // CUtlSymbolLarge
                pub const m_explosionCustomEffect: usize = 0xC10; // CUtlSymbolLarge
                pub const m_explosionCustomSound: usize = 0xC18; // CUtlSymbolLarge
                pub const m_explosionModifier: usize = 0xC20; // CUtlSymbolLarge
                pub const m_hPhysicsAttacker: usize = 0xC28; // CHandle<CBasePlayerPawn>
                pub const m_flLastPhysicsInfluenceTime: usize = 0xC2C; // GameTime_t
                pub const m_flDefaultFadeScale: usize = 0xC30; // float32
                pub const m_hLastAttacker: usize = 0xC34; // CHandle<CBaseEntity>
                pub const m_iszPuntSound: usize = 0xC38; // CUtlSymbolLarge
                pub const m_bUsePuntSound: usize = 0xC40; // bool
                pub const m_bOriginalBlockLOS: usize = 0xC41; // bool
            }
            // Parent: CBaseModelEntity
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_CLightComponent (CLightComponent::Storage_t)
            pub mod CLightEntity {
                pub const m_CLightComponent: usize = 0x7D8; // CLightComponent*
            }
            // Parent: CInfoDynamicShadowHint
            // Field count: 2
            pub mod CInfoDynamicShadowHintBox {
                pub const m_vBoxMins: usize = 0x508; // Vector
                pub const m_vBoxMaxs: usize = 0x514; // Vector
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
            pub mod CBaseAnimGraphController {
                pub const m_animGraphNetworkedVars: usize = 0x18; // CAnimGraphNetworkedVariables
                pub const m_bSequenceFinished: usize = 0x220; // bool
                pub const m_flSoundSyncTime: usize = 0x224; // float32
                pub const m_nActiveIKChainMask: usize = 0x228; // uint32
                pub const m_hSequence: usize = 0x22C; // HSequence
                pub const m_flSeqStartTime: usize = 0x230; // GameTime_t
                pub const m_flSeqFixedCycle: usize = 0x234; // float32
                pub const m_nAnimLoopMode: usize = 0x238; // AnimLoopMode_t
                pub const m_flPlaybackRate: usize = 0x23C; // CNetworkedQuantizedFloat
                pub const m_nNotifyState: usize = 0x248; // SequenceFinishNotifyState_t
                pub const m_bNetworkedAnimationInputsChanged: usize = 0x24A; // bool
                pub const m_bNetworkedSequenceChanged: usize = 0x24B; // bool
                pub const m_bLastUpdateSkipped: usize = 0x24C; // bool
                pub const m_flPrevAnimUpdateTime: usize = 0x250; // GameTime_t
                pub const m_hGraphDefinitionAG2: usize = 0x588; // CStrongHandle<InfoForResourceTypeCNmGraphDefinition>
                pub const m_bIsUsingAG2: usize = 0x590; // bool
                pub const m_serializedPoseRecipeAG2: usize = 0x598; // CNetworkUtlVectorBase<uint8>
                pub const m_nSerializePoseRecipeSizeAG2: usize = 0x5B0; // int32
                pub const m_nSerializePoseRecipeVersionAG2: usize = 0x5B4; // int32
                pub const m_nGraphCreationFlagsAG2: usize = 0x5B8; // uint8
                pub const m_nServerGraphDefReloadCountAG2: usize = 0x7A0; // int32
                pub const m_nServerSerializationContextIteration: usize = 0x7A4; // int32
            }
            // Parent: 
            // Field count: 10
            pub mod CBuoyancyHelper {
                pub const m_nFluidType: usize = 0x18; // CUtlStringToken
                pub const m_flFluidDensity: usize = 0x1C; // float32
                pub const m_flNeutrallyBuoyantGravity: usize = 0x20; // float32
                pub const m_flNeutrallyBuoyantLinearDamping: usize = 0x24; // float32
                pub const m_flNeutrallyBuoyantAngularDamping: usize = 0x28; // float32
                pub const m_bNeutrallyBuoyant: usize = 0x2C; // bool
                pub const m_vecFractionOfWheelSubmergedForWheelFriction: usize = 0x30; // CUtlVector<float32>
                pub const m_vecWheelFrictionScales: usize = 0x48; // CUtlVector<float32>
                pub const m_vecFractionOfWheelSubmergedForWheelDrag: usize = 0x60; // CUtlVector<float32>
                pub const m_vecWheelDrag: usize = 0x78; // CUtlVector<float32>
            }
            // Parent: CDynamicProp
            // Field count: 1
            pub mod COrnamentProp {
                pub const m_initialOwner: usize = 0xD50; // CUtlSymbolLarge
            }
            // Parent: CCSPlayerBase_CameraServices
            // Field count: 0
            pub mod CCSPlayer_CameraServices {
            }
            // Parent: CBaseModelEntity
            // Field count: 0
            pub mod CModelPointEntity {
            }
            // Parent: CBarnLight
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_bShowLight (bool)
            pub mod CRectLight {
                pub const m_bShowLight: usize = 0xB00; // bool
            }
            // Parent: CBaseFilter
            // Field count: 3
            pub mod CFilterMultiple {
                pub const m_nFilterType: usize = 0x548; // filter_t
                pub const m_iFilterName: usize = 0x550; // CUtlSymbolLarge[10]
                pub const m_hFilter: usize = 0x5A0; // CHandle<CBaseEntity>[10]
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
            pub mod CCSPlayerResource {
                pub const m_bHostageAlive: usize = 0x4F0; // bool[12]
                pub const m_isHostageFollowingSomeone: usize = 0x4FC; // bool[12]
                pub const m_iHostageEntityIDs: usize = 0x508; // CEntityIndex[12]
                pub const m_bombsiteCenterA: usize = 0x538; // Vector
                pub const m_bombsiteCenterB: usize = 0x544; // Vector
                pub const m_hostageRescueX: usize = 0x550; // int32[4]
                pub const m_hostageRescueY: usize = 0x560; // int32[4]
                pub const m_hostageRescueZ: usize = 0x570; // int32[4]
                pub const m_bEndMatchNextMapAllVoted: usize = 0x580; // bool
                pub const m_foundGoalPositions: usize = 0x581; // bool
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_FireCursors {
                pub const m_Outflows: usize = 0x48; // CUtlVector<CPulse_OutflowConnection>
                pub const m_bWaitForChildOutflows: usize = 0x60; // bool
                pub const m_OnFinished: usize = 0x68; // CPulse_ResumePoint
                pub const m_OnCanceled: usize = 0xB0; // CPulse_ResumePoint
            }
            // Parent: CBaseModelEntity
            // Field count: 2
            pub mod CFuncNavBlocker {
                pub const m_bDisabled: usize = 0x7E0; // bool
                pub const m_nBlockedTeamNumber: usize = 0x7E4; // int32
            }
            // Parent: CPointEntity
            // Field count: 11
            pub mod CMoverPathNode {
                pub const m_vInTangentLocal: usize = 0x4F0; // Vector
                pub const m_vOutTangentLocal: usize = 0x4FC; // Vector
                pub const m_szParentPathUniqueID: usize = 0x508; // CUtlSymbolLarge
                pub const m_szPathNodeParameter: usize = 0x510; // CUtlSymbolLarge
                pub const m_OnStartFromOrInSegment: usize = 0x518; // CEntityIOOutput
                pub const m_OnStoppedAtOrInSegment: usize = 0x540; // CEntityIOOutput
                pub const m_OnPassThrough: usize = 0x568; // CEntityIOOutput
                pub const m_OnPassThroughForward: usize = 0x590; // CEntityIOOutput
                pub const m_OnPassThroughReverse: usize = 0x5B8; // CEntityIOOutput
                pub const m_hMover: usize = 0x5E0; // CHandle<CPathMover>
                pub const m_xWSPrevParent: usize = 0x5F0; // CTransform
            }
            // Parent: CBaseEntity
            // Field count: 11
            pub mod CEnvSoundscape {
                pub const m_OnPlay: usize = 0x4F0; // CEntityIOOutput
                pub const m_flRadius: usize = 0x518; // float32
                pub const m_soundEventName: usize = 0x520; // CUtlSymbolLarge
                pub const m_bOverrideWithEvent: usize = 0x528; // bool
                pub const m_soundscapeIndex: usize = 0x52C; // int32
                pub const m_soundscapeEntityListId: usize = 0x530; // int32
                pub const m_positionNames: usize = 0x538; // CUtlSymbolLarge[8]
                pub const m_hProxySoundscape: usize = 0x578; // CHandle<CEnvSoundscape>
                pub const m_bDisabled: usize = 0x57C; // bool
                pub const m_soundscapeName: usize = 0x580; // CUtlSymbolLarge
                pub const m_soundEventHash: usize = 0x588; // uint32
            }
            // Parent: CBaseModelEntity
            // Field count: 6
            pub mod CFuncBrush {
                pub const m_iSolidity: usize = 0x7D8; // BrushSolidities_e
                pub const m_iDisabled: usize = 0x7DC; // int32
                pub const m_bSolidBsp: usize = 0x7E0; // bool
                pub const m_iszExcludedClass: usize = 0x7E8; // CUtlSymbolLarge
                pub const m_bInvertExclusion: usize = 0x7F0; // bool
                pub const m_bScriptedMovement: usize = 0x7F1; // bool
            }
            // Parent: CBodyComponent
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_sceneNode (CGameSceneNode)
            pub mod CBodyComponentPoint {
                pub const m_sceneNode: usize = 0x80; // CGameSceneNode
            }
            // Parent: CBreakable
            // Field count: 15
            pub mod CPhysBox {
                pub const m_damageType: usize = 0x8B0; // int32
                pub const m_damageToEnableMotion: usize = 0x8B4; // int32
                pub const m_flForceToEnableMotion: usize = 0x8B8; // float32
                pub const m_vHoverPosePosition: usize = 0x8BC; // Vector
                pub const m_angHoverPoseAngles: usize = 0x8C8; // QAngle
                pub const m_bNotSolidToWorld: usize = 0x8D4; // bool
                pub const m_bEnableUseOutput: usize = 0x8D5; // bool
                pub const m_nHoverPoseFlags: usize = 0x8D6; // HoverPoseFlags_t
                pub const m_flTouchOutputPerEntityDelay: usize = 0x8D8; // float32
                pub const m_OnDamaged: usize = 0x8E0; // CEntityIOOutput
                pub const m_OnAwakened: usize = 0x908; // CEntityIOOutput
                pub const m_OnMotionEnabled: usize = 0x930; // CEntityIOOutput
                pub const m_OnPlayerUse: usize = 0x958; // CEntityIOOutput
                pub const m_OnStartTouch: usize = 0x980; // CEntityIOOutput
                pub const m_hCarryingPlayer: usize = 0x9A8; // CHandle<CBasePlayerPawn>
            }
            // Parent: CSoundEventEntity
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_vMins (Vector)
            // NetworkVarNames: m_vMaxs (Vector)
            pub mod CSoundEventAABBEntity {
                pub const m_vMins: usize = 0x5B8; // Vector
                pub const m_vMaxs: usize = 0x5C4; // Vector
            }
            // Parent: CBaseAnimGraph
            // Field count: 0
            pub mod CItemSoda {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Timeline__TimelineEvent_t {
                pub const m_flTimeFromPrevious: usize = 0x0; // float32
                pub const m_EventOutflow: usize = 0x8; // CPulse_OutflowConnection
            }
            // Parent: CBarnLight
            // Field count: 3
            //
            // Metadata:
            // NetworkVarNames: m_flInnerAngle (float)
            // NetworkVarNames: m_flOuterAngle (float)
            // NetworkVarNames: m_bShowLight (bool)
            pub mod COmniLight {
                pub const m_flInnerAngle: usize = 0xB00; // float32
                pub const m_flOuterAngle: usize = 0xB04; // float32
                pub const m_bShowLight: usize = 0xB08; // bool
            }
            // Parent: CBaseModelEntity
            // Field count: 2
            pub mod CTriggerVolume {
                pub const m_iFilterName: usize = 0x7D8; // CUtlSymbolLarge
                pub const m_hFilter: usize = 0x7E0; // CHandle<CBaseFilter>
            }
            // Parent: None
            // Field count: 1
            pub mod CBtNodeCondition {
                pub const m_bNegated: usize = 0x58; // bool
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_IntervalTimer__CursorState_t {
                pub const m_StartTime: usize = 0x0; // GameTime_t
                pub const m_EndTime: usize = 0x4; // GameTime_t
                pub const m_flWaitInterval: usize = 0x8; // float32
                pub const m_flWaitIntervalHigh: usize = 0xC; // float32
                pub const m_bCompleteOnNextWake: usize = 0x10; // bool
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_BaseRequirement {
            }
            // Parent: CModelPointEntity
            // Field count: 15
            pub mod CEnvExplosion {
                pub const m_iMagnitude: usize = 0x7D8; // int32
                pub const m_flPlayerDamage: usize = 0x7DC; // float32
                pub const m_iRadiusOverride: usize = 0x7E0; // int32
                pub const m_flInnerRadius: usize = 0x7E4; // float32
                pub const m_flDamageForce: usize = 0x7E8; // float32
                pub const m_hInflictor: usize = 0x7EC; // CHandle<CBaseEntity>
                pub const m_iCustomDamageType: usize = 0x7F0; // DamageTypes_t
                pub const m_bCreateDebris: usize = 0x7F4; // bool
                pub const m_iszCustomEffectName: usize = 0x800; // CUtlSymbolLarge
                pub const m_iszCustomSoundName: usize = 0x808; // CUtlSymbolLarge
                pub const m_bSuppressParticleImpulse: usize = 0x810; // bool
                pub const m_iClassIgnore: usize = 0x814; // Class_T
                pub const m_iClassIgnore2: usize = 0x818; // Class_T
                pub const m_iszEntityIgnoreName: usize = 0x820; // CUtlSymbolLarge
                pub const m_hEntityIgnore: usize = 0x828; // CHandle<CBaseEntity>
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPulseEditorHeaderIcon
            pub mod CPulseCell_BaseState {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod OutflowWithRequirements_t {
                pub const m_Connection: usize = 0x0; // CPulse_OutflowConnection
                pub const m_DestinationFlowNodeID: usize = 0x48; // PulseDocNodeID_t
                pub const m_RequirementNodeIDs: usize = 0x50; // CUtlVector<PulseDocNodeID_t>
                pub const m_nCursorStateBlockIndex: usize = 0x68; // CUtlVector<int32>
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_IsRequirementValid {
            }
            // Parent: CBaseTrigger
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_source (string_t)
            // NetworkVarNames: m_destination (string_t)
            pub mod CFootstepControl {
                pub const m_source: usize = 0x9A8; // CUtlSymbolLarge
                pub const m_destination: usize = 0x9B0; // CUtlSymbolLarge
            }
            // Parent: CPlayer_ItemServices
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_bHasDefuser (bool)
            // NetworkVarNames: m_bHasHelmet (bool)
            pub mod CCSPlayer_ItemServices {
                pub const m_bHasDefuser: usize = 0x40; // bool
                pub const m_bHasHelmet: usize = 0x41; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CPulseCell_Value_Gradient {
                pub const m_Gradient: usize = 0x48; // CColorGradient
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
            pub mod CParticleSystem {
                pub const m_szSnapshotFileName: usize = 0x7D8; // char[512]
                pub const m_bActive: usize = 0x9D8; // bool
                pub const m_bFrozen: usize = 0x9D9; // bool
                pub const m_flFreezeTransitionDuration: usize = 0x9DC; // float32
                pub const m_nStopType: usize = 0x9E0; // int32
                pub const m_bAnimateDuringGameplayPause: usize = 0x9E4; // bool
                pub const m_iEffectIndex: usize = 0x9E8; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                pub const m_flStartTime: usize = 0x9F0; // GameTime_t
                pub const m_flPreSimTime: usize = 0x9F4; // float32
                pub const m_vServerControlPoints: usize = 0x9F8; // Vector[4]
                pub const m_iServerControlPointAssignments: usize = 0xA28; // uint8[4]
                pub const m_hControlPointEnts: usize = 0xA2C; // CHandle<CBaseEntity>[64]
                pub const m_bNoSave: usize = 0xB2C; // bool
                pub const m_bNoFreeze: usize = 0xB2D; // bool
                pub const m_bNoRamp: usize = 0xB2E; // bool
                pub const m_bStartActive: usize = 0xB2F; // bool
                pub const m_iszEffectName: usize = 0xB30; // CUtlSymbolLarge
                pub const m_iszControlPointNames: usize = 0xB38; // CUtlSymbolLarge[64]
                pub const m_nDataCP: usize = 0xD38; // int32
                pub const m_vecDataCPValue: usize = 0xD3C; // Vector
                pub const m_nTintCP: usize = 0xD48; // int32
                pub const m_clrTint: usize = 0xD4C; // Color
            }
            // Parent: CBaseModelEntity
            // Field count: 5
            pub mod CTriggerBrush {
                pub const m_OnStartTouch: usize = 0x7D8; // CEntityIOOutput
                pub const m_OnEndTouch: usize = 0x800; // CEntityIOOutput
                pub const m_OnUse: usize = 0x828; // CEntityIOOutput
                pub const m_iInputFilter: usize = 0x850; // int32
                pub const m_iDontMessageParent: usize = 0x854; // int32
            }
            // Parent: 
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_timestamp (GameTime_t)
            // NetworkVarNames: m_nWorldGroupId (WorldGroupId_t)
            pub mod IntervalTimer {
                pub const m_timestamp: usize = 0x8; // GameTime_t
                pub const m_nWorldGroupId: usize = 0xC; // WorldGroupId_t
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
            pub mod audioparams_t {
                pub const localSound: usize = 0x8; // Vector[8]
                pub const soundscapeIndex: usize = 0x68; // int32
                pub const localBits: usize = 0x6C; // uint8
                pub const soundscapeEntityListIndex: usize = 0x70; // int32
                pub const soundEventHash: usize = 0x74; // uint32
            }
            // Parent: CBaseEntity
            // Field count: 3
            //
            // Metadata:
            // NetworkVarNames: m_bDisabled (bool)
            // NetworkVarNames: m_iszSoundAreaType (string_t)
            // NetworkVarNames: m_vPos (Vector)
            pub mod CSoundAreaEntityBase {
                pub const m_bDisabled: usize = 0x4F0; // bool
                pub const m_iszSoundAreaType: usize = 0x4F8; // CUtlSymbolLarge
                pub const m_vPos: usize = 0x500; // Vector
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            pub mod CWeaponM4A1Silencer {
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
            pub mod CTimeline {
                pub const m_flValues: usize = 0x10; // float32[64]
                pub const m_nValueCounts: usize = 0x110; // int32[64]
                pub const m_nBucketCount: usize = 0x210; // int32
                pub const m_flInterval: usize = 0x214; // float32
                pub const m_flFinalValue: usize = 0x218; // float32
                pub const m_nCompressionType: usize = 0x21C; // TimelineCompression_t
                pub const m_bStopped: usize = 0x220; // bool
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyDescription
            pub mod CPulseCursorFuncs {
            }
            // Parent: 
            // Field count: 4
            //
            // Metadata:
            // NetworkVarNames: m_duration (float32)
            // NetworkVarNames: m_timestamp (GameTime_t)
            // NetworkVarNames: m_timescale (float32)
            // NetworkVarNames: m_nWorldGroupId (WorldGroupId_t)
            pub mod CountdownTimer {
                pub const m_duration: usize = 0x8; // float32
                pub const m_timestamp: usize = 0xC; // GameTime_t
                pub const m_timescale: usize = 0x10; // float32
                pub const m_nWorldGroupId: usize = 0x14; // WorldGroupId_t
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod PulseNodeDynamicOutflows_t__DynamicOutflow_t {
                pub const m_OutflowID: usize = 0x0; // CGlobalSymbol
                pub const m_Connection: usize = 0x8; // CPulse_OutflowConnection
            }
            // Parent: CItem
            // Field count: 0
            pub mod CItemAssaultSuit {
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
            pub mod CBeam {
                pub const m_flFrameRate: usize = 0x7D8; // float32
                pub const m_flHDRColorScale: usize = 0x7DC; // float32
                pub const m_flFireTime: usize = 0x7E0; // GameTime_t
                pub const m_flDamage: usize = 0x7E4; // float32
                pub const m_nNumBeamEnts: usize = 0x7E8; // uint8
                pub const m_hBaseMaterial: usize = 0x7F0; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_nHaloIndex: usize = 0x7F8; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_nBeamType: usize = 0x800; // BeamType_t
                pub const m_nBeamFlags: usize = 0x804; // uint32
                pub const m_hAttachEntity: usize = 0x808; // CHandle<CBaseEntity>[10]
                pub const m_nAttachIndex: usize = 0x830; // AttachmentHandle_t[10]
                pub const m_fWidth: usize = 0x83C; // float32
                pub const m_fEndWidth: usize = 0x840; // float32
                pub const m_fFadeLength: usize = 0x844; // float32
                pub const m_fHaloScale: usize = 0x848; // float32
                pub const m_fAmplitude: usize = 0x84C; // float32
                pub const m_fStartFrame: usize = 0x850; // float32
                pub const m_fSpeed: usize = 0x854; // float32
                pub const m_flFrame: usize = 0x858; // float32
                pub const m_nClipStyle: usize = 0x85C; // BeamClipStyle_t
                pub const m_bTurnedOff: usize = 0x860; // bool
                pub const m_vecEndPos: usize = 0x864; // VectorWS
                pub const m_hEndEntity: usize = 0x870; // CHandle<CBaseEntity>
                pub const m_nDissolveType: usize = 0x874; // int32
            }
            // Parent: CLogicalEntity
            // Field count: 4
            pub mod CLogicEventListener {
                pub const m_strEventName: usize = 0x500; // CUtlString
                pub const m_bIsEnabled: usize = 0x508; // bool
                pub const m_nTeam: usize = 0x50C; // int32
                pub const m_OnEventFired: usize = 0x510; // CEntityIOOutput
            }
            // Parent: CCSGO_TeamSelectCharacterPosition
            // Field count: 0
            pub mod CCSGO_TeamSelectTerroristPosition {
            }
            // Parent: CServerOnlyEntity
            // Field count: 0
            pub mod CInfoData {
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            pub mod CWeaponNegev {
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            pub mod CWeaponElite {
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
            pub mod CBasePlayerPawn {
                pub const m_pWeaponServices: usize = 0xBE0; // CPlayer_WeaponServices*
                pub const m_pItemServices: usize = 0xBE8; // CPlayer_ItemServices*
                pub const m_pAutoaimServices: usize = 0xBF0; // CPlayer_AutoaimServices*
                pub const m_pObserverServices: usize = 0xBF8; // CPlayer_ObserverServices*
                pub const m_pWaterServices: usize = 0xC00; // CPlayer_WaterServices*
                pub const m_pUseServices: usize = 0xC08; // CPlayer_UseServices*
                pub const m_pFlashlightServices: usize = 0xC10; // CPlayer_FlashlightServices*
                pub const m_pCameraServices: usize = 0xC18; // CPlayer_CameraServices*
                pub const m_pMovementServices: usize = 0xC20; // CPlayer_MovementServices*
                pub const m_ServerViewAngleChanges: usize = 0xC30; // CUtlVectorEmbeddedNetworkVar<ViewAngleServerChange_t>
                pub const v_angle: usize = 0xC98; // QAngle
                pub const v_anglePrevious: usize = 0xCA4; // QAngle
                pub const m_iHideHUD: usize = 0xCB0; // uint32
                pub const m_skybox3d: usize = 0xCB8; // sky3dparams_t
                pub const m_fTimeLastHurt: usize = 0xD48; // GameTime_t
                pub const m_flDeathTime: usize = 0xD4C; // GameTime_t
                pub const m_fNextSuicideTime: usize = 0xD50; // GameTime_t
                pub const m_fInitHUD: usize = 0xD54; // bool
                pub const m_pExpresser: usize = 0xD58; // CAI_Expresser*
                pub const m_hController: usize = 0xD60; // CHandle<CBasePlayerController>
                pub const m_hDefaultController: usize = 0xD64; // CHandle<CBasePlayerController>
                pub const m_fHltvReplayDelay: usize = 0xD6C; // float32
                pub const m_fHltvReplayEnd: usize = 0xD70; // float32
                pub const m_iHltvReplayEntity: usize = 0xD74; // CEntityIndex
                pub const m_sndOpvarLatchData: usize = 0xD78; // CUtlVector<sndopvarlatchdata_t>
            }
            // Parent: 
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_nItemDefIndex (uint16)
            // NetworkVarNames: m_nCount (uint16)
            pub mod WeaponPurchaseCount_t {
                pub const m_nItemDefIndex: usize = 0x30; // uint16
                pub const m_nCount: usize = 0x32; // uint16
            }
            // Parent: None
            // Field count: 0
            pub mod CBasePulseGraphInstance {
            }
            // Parent: CBaseFilter
            // Field count: 3
            pub mod FilterHealth {
                pub const m_bAdrenalineActive: usize = 0x548; // bool
                pub const m_iHealthMin: usize = 0x54C; // int32
                pub const m_iHealthMax: usize = 0x550; // int32
            }
            // Parent: CSprite
            // Field count: 0
            pub mod CCSSprite {
            }
            // Parent: CLogicalEntity
            // Field count: 5
            pub mod CMathColorBlend {
                pub const m_flInMin: usize = 0x4F0; // float32
                pub const m_flInMax: usize = 0x4F4; // float32
                pub const m_OutColor1: usize = 0x4F8; // Color
                pub const m_OutColor2: usize = 0x4FC; // Color
                pub const m_OutValue: usize = 0x500; // CEntityOutputTemplate<Color>
            }
            // Parent: CModelPointEntity
            // Field count: 0
            pub mod CShower {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Inflow_GraphHook {
                pub const m_HookName: usize = 0x80; // PulseSymbol_t
            }
            // Parent: CFuncNavBlocker
            // Field count: 1
            pub mod CScriptNavBlocker {
                pub const m_vExtent: usize = 0x7F0; // Vector
            }
            // Parent: CBaseModelEntity
            // Field count: 0
            pub mod CEntityBlocker {
            }
            // Parent: None
            // Field count: 0
            pub mod SignatureOutflow_Resume {
            }
            // Parent: None
            // Field count: 0
            pub mod CPathSimpleAPI {
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
            pub mod CCSObserverPawn {
            }
            // Parent: CBaseTrigger
            // Field count: 2
            pub mod CTriggerActiveWeaponDetect {
                pub const m_OnTouchedActiveWeapon: usize = 0x9A8; // CEntityIOOutput
                pub const m_iszWeaponClassName: usize = 0x9D0; // CUtlSymbolLarge
            }
            // Parent: CFuncLadder
            // Field count: 0
            pub mod CFuncLadderAlias_func_useableladder {
            }
            // Parent: CSprite
            // Field count: 0
            pub mod CSpriteOriented {
            }
            // Parent: CPointEntity
            // Field count: 0
            pub mod CPointServerCommand {
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
            pub mod shard_model_desc_t {
                pub const m_nModelID: usize = 0x8; // int32
                pub const m_hMaterialBase: usize = 0x10; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_hMaterialDamageOverlay: usize = 0x18; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_solid: usize = 0x20; // ShardSolid_t
                pub const m_vecPanelSize: usize = 0x24; // Vector2D
                pub const m_vecStressPositionA: usize = 0x2C; // Vector2D
                pub const m_vecStressPositionB: usize = 0x34; // Vector2D
                pub const m_vecPanelVertices: usize = 0x40; // CNetworkUtlVectorBase<Vector2D>
                pub const m_vInitialPanelVertices: usize = 0x58; // CNetworkUtlVectorBase<Vector4D>
                pub const m_flGlassHalfThickness: usize = 0x70; // float32
                pub const m_bHasParent: usize = 0x74; // bool
                pub const m_bParentFrozen: usize = 0x75; // bool
                pub const m_SurfacePropStringToken: usize = 0x78; // CUtlStringToken
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
            pub mod CPlayerSprayDecal {
                pub const m_nUniqueID: usize = 0x7D8; // int32
                pub const m_unAccountID: usize = 0x7DC; // uint32
                pub const m_unTraceID: usize = 0x7E0; // uint32
                pub const m_rtGcTime: usize = 0x7E4; // uint32
                pub const m_vecEndPos: usize = 0x7E8; // Vector
                pub const m_vecStart: usize = 0x7F4; // Vector
                pub const m_vecLeft: usize = 0x800; // Vector
                pub const m_vecNormal: usize = 0x80C; // Vector
                pub const m_nPlayer: usize = 0x818; // int32
                pub const m_nEntity: usize = 0x81C; // int32
                pub const m_nHitbox: usize = 0x820; // int32
                pub const m_flCreationTime: usize = 0x824; // float32
                pub const m_nTintID: usize = 0x828; // int32
                pub const m_nVersion: usize = 0x82C; // uint8
                pub const m_ubSignature: usize = 0x82D; // uint8[128]
            }
            // Parent: CBaseModelEntity
            // Field count: 1
            pub mod CFuncWater {
                pub const m_BuoyancyHelper: usize = 0x7D8; // CBuoyancyHelper
            }
            // Parent: None
            // Field count: 1
            pub mod CCSGameModeRules {
                pub const __m_pChainEntity: usize = 0x8; // CNetworkVarChainer
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
            pub mod CEconEntity {
                pub const m_AttributeManager: usize = 0xB30; // CAttributeContainer
                pub const m_OriginalOwnerXuidLow: usize = 0xE28; // uint32
                pub const m_OriginalOwnerXuidHigh: usize = 0xE2C; // uint32
                pub const m_nFallbackPaintKit: usize = 0xE30; // int32
                pub const m_nFallbackSeed: usize = 0xE34; // int32
                pub const m_flFallbackWear: usize = 0xE38; // float32
                pub const m_nFallbackStatTrak: usize = 0xE3C; // int32
                pub const m_hOldProvidee: usize = 0xE40; // CHandle<CBaseEntity>
                pub const m_iOldOwnerClass: usize = 0xE44; // int32
            }
            // Parent: CPointEntity
            // Field count: 2
            pub mod CTankTargetChange {
                pub const m_newTarget: usize = 0x4F0; // CVariantBase<CVariantDefaultAllocator>
                pub const m_newTargetName: usize = 0x500; // CUtlSymbolLarge
            }
            // Parent: CPlayer_WaterServices
            // Field count: 6
            pub mod CCSPlayer_WaterServices {
                pub const m_NextDrownDamageTime: usize = 0x40; // GameTime_t
                pub const m_nDrownDmgRate: usize = 0x44; // int32
                pub const m_AirFinishedTime: usize = 0x48; // GameTime_t
                pub const m_flWaterJumpTime: usize = 0x4C; // float32
                pub const m_vecWaterJumpVel: usize = 0x50; // Vector
                pub const m_flSwimSoundTime: usize = 0x5C; // float32
            }
            // Parent: CLogicalEntity
            // Field count: 7
            pub mod CLogicDistanceCheck {
                pub const m_iszEntityA: usize = 0x4F0; // CUtlSymbolLarge
                pub const m_iszEntityB: usize = 0x4F8; // CUtlSymbolLarge
                pub const m_flZone1Distance: usize = 0x500; // float32
                pub const m_flZone2Distance: usize = 0x504; // float32
                pub const m_InZone1: usize = 0x508; // CEntityIOOutput
                pub const m_InZone2: usize = 0x530; // CEntityIOOutput
                pub const m_InZone3: usize = 0x558; // CEntityIOOutput
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
            pub mod CEnvCombinedLightProbeVolume {
                pub const m_Entity_Color: usize = 0x1568; // Color
                pub const m_Entity_flBrightness: usize = 0x156C; // float32
                pub const m_Entity_hCubemapTexture: usize = 0x1570; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_bCustomCubemapTexture: usize = 0x1578; // bool
                pub const m_Entity_hLightProbeTexture_AmbientCube: usize = 0x1580; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeTexture_SDF: usize = 0x1588; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeTexture_SH2_DC: usize = 0x1590; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeTexture_SH2_R: usize = 0x1598; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeTexture_SH2_G: usize = 0x15A0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeTexture_SH2_B: usize = 0x15A8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeDirectLightIndicesTexture: usize = 0x15B0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeDirectLightScalarsTexture: usize = 0x15B8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeDirectLightShadowsTexture: usize = 0x15C0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_vBoxMins: usize = 0x15C8; // Vector
                pub const m_Entity_vBoxMaxs: usize = 0x15D4; // Vector
                pub const m_Entity_bMoveable: usize = 0x15E0; // bool
                pub const m_Entity_nHandshake: usize = 0x15E4; // int32
                pub const m_Entity_nEnvCubeMapArrayIndex: usize = 0x15E8; // int32
                pub const m_Entity_nPriority: usize = 0x15EC; // int32
                pub const m_Entity_bStartDisabled: usize = 0x15F0; // bool
                pub const m_Entity_flEdgeFadeDist: usize = 0x15F4; // float32
                pub const m_Entity_vEdgeFadeDists: usize = 0x15F8; // Vector
                pub const m_Entity_nLightProbeSizeX: usize = 0x1604; // int32
                pub const m_Entity_nLightProbeSizeY: usize = 0x1608; // int32
                pub const m_Entity_nLightProbeSizeZ: usize = 0x160C; // int32
                pub const m_Entity_nLightProbeAtlasX: usize = 0x1610; // int32
                pub const m_Entity_nLightProbeAtlasY: usize = 0x1614; // int32
                pub const m_Entity_nLightProbeAtlasZ: usize = 0x1618; // int32
                pub const m_Entity_bEnabled: usize = 0x1631; // bool
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // NetworkVarNames: nType (FixAngleSet_t)
            // NetworkVarNames: qAngle (QAngle)
            // NetworkVarNames: nIndex (uint32)
            pub mod ViewAngleServerChange_t {
                pub const nType: usize = 0x30; // FixAngleSet_t
                pub const qAngle: usize = 0x34; // QAngle
                pub const nIndex: usize = 0x40; // uint32
            }
            // Parent: CLogicalEntity
            // Field count: 6
            pub mod CLogicDistanceAutosave {
                pub const m_iszTargetEntity: usize = 0x4F0; // CUtlSymbolLarge
                pub const m_flDistanceToPlayer: usize = 0x4F8; // float32
                pub const m_bForceNewLevelUnit: usize = 0x4FC; // bool
                pub const m_bCheckCough: usize = 0x4FD; // bool
                pub const m_bThinkDangerous: usize = 0x4FE; // bool
                pub const m_flDangerousTime: usize = 0x500; // float32
            }
            // Parent: CLogicalEntity
            // Field count: 4
            pub mod CLogicBranch {
                pub const m_bInValue: usize = 0x4F0; // bool
                pub const m_Listeners: usize = 0x4F8; // CUtlVector<CHandle<CBaseEntity>>
                pub const m_OnTrue: usize = 0x510; // CEntityIOOutput
                pub const m_OnFalse: usize = 0x538; // CEntityIOOutput
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Outflow_ScriptedSequence {
                pub const m_szSyncGroup: usize = 0x48; // CUtlString
                pub const m_nExpectedNumSequencesInSyncGroup: usize = 0x50; // int32
                pub const m_bEnsureOnNavmeshOnFinish: usize = 0x54; // bool
                pub const m_bDontTeleportAtEnd: usize = 0x55; // bool
                pub const m_bDisallowInterrupts: usize = 0x56; // bool
                pub const m_scriptedSequenceDataMain: usize = 0x58; // PulseScriptedSequenceData_t
                pub const m_vecAdditionalActors: usize = 0x90; // CUtlVector<PulseScriptedSequenceData_t>
                pub const m_OnFinished: usize = 0xA8; // CPulse_ResumePoint
                pub const m_OnCanceled: usize = 0xF0; // CPulse_ResumePoint
                pub const m_Triggers: usize = 0x138; // CUtlVector<CPulse_OutflowConnection>
            }
            // Parent: CFuncPlatRot
            // Field count: 9
            pub mod CFuncTrackChange {
                pub const m_trackTop: usize = 0x8A0; // CPathTrack*
                pub const m_trackBottom: usize = 0x8A8; // CPathTrack*
                pub const m_train: usize = 0x8B0; // CFuncTrackTrain*
                pub const m_trackTopName: usize = 0x8B8; // CUtlSymbolLarge
                pub const m_trackBottomName: usize = 0x8C0; // CUtlSymbolLarge
                pub const m_trainName: usize = 0x8C8; // CUtlSymbolLarge
                pub const m_code: usize = 0x8D0; // TRAIN_CODE
                pub const m_targetState: usize = 0x8D4; // int32
                pub const m_use: usize = 0x8D8; // int32
            }
            // Parent: CBaseModelEntity
            // Field count: 37
            pub mod CFuncTrackTrain {
                pub const m_ppath: usize = 0x7D8; // CHandle<CPathTrack>
                pub const m_length: usize = 0x7DC; // float32
                pub const m_vPosPrev: usize = 0x7E0; // Vector
                pub const m_angPrev: usize = 0x7EC; // QAngle
                pub const m_controlMins: usize = 0x7F8; // Vector
                pub const m_controlMaxs: usize = 0x804; // Vector
                pub const m_lastBlockPos: usize = 0x810; // Vector
                pub const m_lastBlockTick: usize = 0x81C; // int32
                pub const m_flVolume: usize = 0x820; // float32
                pub const m_flBank: usize = 0x824; // float32
                pub const m_oldSpeed: usize = 0x828; // float32
                pub const m_flBlockDamage: usize = 0x82C; // float32
                pub const m_height: usize = 0x830; // float32
                pub const m_maxSpeed: usize = 0x834; // float32
                pub const m_dir: usize = 0x838; // float32
                pub const m_iszSoundMove: usize = 0x840; // CUtlSymbolLarge
                pub const m_iszSoundMovePing: usize = 0x848; // CUtlSymbolLarge
                pub const m_iszSoundStart: usize = 0x850; // CUtlSymbolLarge
                pub const m_iszSoundStop: usize = 0x858; // CUtlSymbolLarge
                pub const m_strPathTarget: usize = 0x860; // CUtlSymbolLarge
                pub const m_flMoveSoundMinDuration: usize = 0x868; // float32
                pub const m_flMoveSoundMaxDuration: usize = 0x86C; // float32
                pub const m_flNextMoveSoundTime: usize = 0x870; // GameTime_t
                pub const m_flMoveSoundMinPitch: usize = 0x874; // float32
                pub const m_flMoveSoundMaxPitch: usize = 0x878; // float32
                pub const m_eOrientationType: usize = 0x87C; // TrainOrientationType_t
                pub const m_eVelocityType: usize = 0x880; // TrainVelocityType_t
                pub const m_OnStart: usize = 0x898; // CEntityIOOutput
                pub const m_OnNext: usize = 0x8C0; // CEntityIOOutput
                pub const m_OnArrivedAtDestinationNode: usize = 0x8E8; // CEntityIOOutput
                pub const m_bManualSpeedChanges: usize = 0x910; // bool
                pub const m_flDesiredSpeed: usize = 0x914; // float32
                pub const m_flSpeedChangeTime: usize = 0x918; // GameTime_t
                pub const m_flAccelSpeed: usize = 0x91C; // float32
                pub const m_flDecelSpeed: usize = 0x920; // float32
                pub const m_bAccelToSpeed: usize = 0x924; // bool
                pub const m_flNextMPSoundTime: usize = 0x928; // GameTime_t
            }
            // Parent: CPointEntity
            // Field count: 24
            pub mod CEnvInstructorHint {
                pub const m_iszName: usize = 0x4F0; // CUtlSymbolLarge
                pub const m_iszReplace_Key: usize = 0x4F8; // CUtlSymbolLarge
                pub const m_iszHintTargetEntity: usize = 0x500; // CUtlSymbolLarge
                pub const m_iTimeout: usize = 0x508; // int32
                pub const m_iDisplayLimit: usize = 0x50C; // int32
                pub const m_iszIcon_Onscreen: usize = 0x510; // CUtlSymbolLarge
                pub const m_iszIcon_Offscreen: usize = 0x518; // CUtlSymbolLarge
                pub const m_iszCaption: usize = 0x520; // CUtlSymbolLarge
                pub const m_iszActivatorCaption: usize = 0x528; // CUtlSymbolLarge
                pub const m_Color: usize = 0x530; // Color
                pub const m_fIconOffset: usize = 0x534; // float32
                pub const m_fRange: usize = 0x538; // float32
                pub const m_iPulseOption: usize = 0x53C; // uint8
                pub const m_iAlphaOption: usize = 0x53D; // uint8
                pub const m_iShakeOption: usize = 0x53E; // uint8
                pub const m_bStatic: usize = 0x53F; // bool
                pub const m_bNoOffscreen: usize = 0x540; // bool
                pub const m_bForceCaption: usize = 0x541; // bool
                pub const m_iInstanceType: usize = 0x544; // int32
                pub const m_bSuppressRest: usize = 0x548; // bool
                pub const m_iszBinding: usize = 0x550; // CUtlSymbolLarge
                pub const m_bAllowNoDrawTarget: usize = 0x558; // bool
                pub const m_bAutoStart: usize = 0x559; // bool
                pub const m_bLocalPlayerOnly: usize = 0x55A; // bool
            }
            // Parent: CBaseEntity
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_EnvWindShared (CEnvWindShared)
            pub mod CEnvWind {
                pub const m_EnvWindShared: usize = 0x4F0; // CEnvWindShared
            }
            // Parent: CSoundEventEntity
            // Field count: 7
            //
            // Metadata:
            // NetworkVarNames: m_vecCornerPairsNetworked (SoundeventPathCornerPairNetworked_t)
            pub mod CSoundEventPathCornerEntity {
                pub const m_iszPathCorner: usize = 0x5B8; // CUtlSymbolLarge
                pub const m_iCountMax: usize = 0x5C0; // int32
                pub const m_flDistanceMax: usize = 0x5C4; // float32
                pub const m_flDistMaxSqr: usize = 0x5C8; // float32
                pub const m_flDotProductMax: usize = 0x5CC; // float32
                pub const m_bPlaying: usize = 0x5D0; // bool
                pub const m_vecCornerPairsNetworked: usize = 0x5F8; // CNetworkUtlVectorBase<SoundeventPathCornerPairNetworked_t>
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
            pub mod CCSPlayerBase_CameraServices {
                pub const m_iFOV: usize = 0x170; // uint32
                pub const m_iFOVStart: usize = 0x174; // uint32
                pub const m_flFOVTime: usize = 0x178; // GameTime_t
                pub const m_flFOVRate: usize = 0x17C; // float32
                pub const m_hZoomOwner: usize = 0x180; // CHandle<CBaseEntity>
                pub const m_hTriggerFogList: usize = 0x188; // CUtlVector<CHandle<CBaseEntity>>
                pub const m_hLastFogTrigger: usize = 0x1A0; // CHandle<CBaseEntity>
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Inflow_BaseEntrypoint {
                pub const m_EntryChunk: usize = 0x48; // PulseRuntimeChunkIndex_t
                pub const m_RegisterMap: usize = 0x50; // PulseRegisterMap_t
            }
            // Parent: CTriggerMultiple
            // Field count: 7
            pub mod CDynamicNavConnectionsVolume {
                pub const m_iszConnectionTarget: usize = 0x9D0; // CUtlSymbolLarge
                pub const m_vecConnections: usize = 0x9D8; // CUtlVector<DynamicVolumeDef_t>
                pub const m_sTransitionType: usize = 0x9F0; // CGlobalSymbol
                pub const m_bConnectionsEnabled: usize = 0x9F8; // bool
                pub const m_flTargetAreaSearchRadius: usize = 0x9FC; // float32
                pub const m_flUpdateDistance: usize = 0xA00; // float32
                pub const m_flMaxConnectionDistance: usize = 0xA04; // float32
            }
            // Parent: CBaseAnimGraph
            // Field count: 1
            pub mod CConstraintAnchor {
                pub const m_massScale: usize = 0xA90; // float32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPulseEditorCanvasItemSpecKV3
            pub mod CPulseCell_WaitForCursorsWithTagBase {
                pub const m_nCursorsAllowedToWait: usize = 0x48; // int32
                pub const m_WaitComplete: usize = 0x50; // CPulse_ResumePoint
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
            pub mod CCSPlayerPawn {
                pub const m_pBulletServices: usize = 0xEE8; // CCSPlayer_BulletServices*
                pub const m_pHostageServices: usize = 0xEF0; // CCSPlayer_HostageServices*
                pub const m_pBuyServices: usize = 0xEF8; // CCSPlayer_BuyServices*
                pub const m_pActionTrackingServices: usize = 0xF00; // CCSPlayer_ActionTrackingServices*
                pub const m_pRadioServices: usize = 0xF08; // CCSPlayer_RadioServices*
                pub const m_pDamageReactServices: usize = 0xF10; // CCSPlayer_DamageReactServices*
                pub const m_nCharacterDefIndex: usize = 0xF18; // uint16
                pub const m_bHasFemaleVoice: usize = 0xF1A; // bool
                pub const m_strVOPrefix: usize = 0xF20; // CUtlString
                pub const m_szLastPlaceName: usize = 0xF28; // char[18]
                pub const m_bInHostageResetZone: usize = 0xFE8; // bool
                pub const m_bInBuyZone: usize = 0xFE9; // bool
                pub const m_TouchingBuyZones: usize = 0xFF0; // CUtlVector<CHandle<CBaseEntity>>
                pub const m_bWasInBuyZone: usize = 0x1008; // bool
                pub const m_bInHostageRescueZone: usize = 0x1009; // bool
                pub const m_bInBombZone: usize = 0x100A; // bool
                pub const m_bWasInHostageRescueZone: usize = 0x100B; // bool
                pub const m_iRetakesOffering: usize = 0x100C; // int32
                pub const m_iRetakesOfferingCard: usize = 0x1010; // int32
                pub const m_bRetakesHasDefuseKit: usize = 0x1014; // bool
                pub const m_bRetakesMVPLastRound: usize = 0x1015; // bool
                pub const m_iRetakesMVPBoostItem: usize = 0x1018; // int32
                pub const m_RetakesMVPBoostExtraUtility: usize = 0x101C; // loadout_slot_t
                pub const m_flHealthShotBoostExpirationTime: usize = 0x1020; // GameTime_t
                pub const m_flLandingTimeSeconds: usize = 0x1024; // float32
                pub const m_aimPunchAngle: usize = 0x1028; // QAngle
                pub const m_aimPunchAngleVel: usize = 0x1034; // QAngle
                pub const m_aimPunchTickBase: usize = 0x1040; // GameTick_t
                pub const m_aimPunchTickFraction: usize = 0x1044; // float32
                pub const m_aimPunchCache: usize = 0x1048; // CUtlVector<QAngle>
                pub const m_bIsBuyMenuOpen: usize = 0x1060; // bool
                pub const m_lastLandTime: usize = 0x1708; // GameTime_t
                pub const m_bOnGroundLastTick: usize = 0x170C; // bool
                pub const m_iPlayerLocked: usize = 0x1710; // int32
                pub const m_flTimeOfLastInjury: usize = 0x1718; // GameTime_t
                pub const m_flNextSprayDecalTime: usize = 0x171C; // GameTime_t
                pub const m_bNextSprayDecalTimeExpedited: usize = 0x1720; // bool
                pub const m_nRagdollDamageBone: usize = 0x1724; // int32
                pub const m_vRagdollDamageForce: usize = 0x1728; // Vector
                pub const m_vRagdollDamagePosition: usize = 0x1734; // Vector
                pub const m_szRagdollDamageWeaponName: usize = 0x1740; // char[64]
                pub const m_bRagdollDamageHeadshot: usize = 0x1780; // bool
                pub const m_vRagdollServerOrigin: usize = 0x1784; // Vector
                pub const m_EconGloves: usize = 0x1790; // CEconItemView
                pub const m_nEconGlovesChanged: usize = 0x1A38; // uint8
                pub const m_qDeathEyeAngles: usize = 0x1A3C; // QAngle
                pub const m_bSkipOneHeadConstraintUpdate: usize = 0x1A48; // bool
                pub const m_bLeftHanded: usize = 0x1A49; // bool
                pub const m_fSwitchedHandednessTime: usize = 0x1A4C; // GameTime_t
                pub const m_flViewmodelOffsetX: usize = 0x1A50; // float32
                pub const m_flViewmodelOffsetY: usize = 0x1A54; // float32
                pub const m_flViewmodelOffsetZ: usize = 0x1A58; // float32
                pub const m_flViewmodelFOV: usize = 0x1A5C; // float32
                pub const m_bIsWalking: usize = 0x1A60; // bool
                pub const m_fLastGivenDefuserTime: usize = 0x1A64; // float32
                pub const m_fLastGivenBombTime: usize = 0x1A68; // float32
                pub const m_flDealtDamageToEnemyMostRecentTimestamp: usize = 0x1A6C; // float32
                pub const m_iDisplayHistoryBits: usize = 0x1A70; // uint32
                pub const m_flLastAttackedTeammate: usize = 0x1A74; // float32
                pub const m_allowAutoFollowTime: usize = 0x1A78; // GameTime_t
                pub const m_bResetArmorNextSpawn: usize = 0x1A7C; // bool
                pub const m_nLastKillerIndex: usize = 0x1A80; // CEntityIndex
                pub const m_entitySpottedState: usize = 0x1A88; // EntitySpottedState_t
                pub const m_nSpotRules: usize = 0x1AA0; // int32
                pub const m_bIsScoped: usize = 0x1AA4; // bool
                pub const m_bResumeZoom: usize = 0x1AA5; // bool
                pub const m_bIsDefusing: usize = 0x1AA6; // bool
                pub const m_bIsGrabbingHostage: usize = 0x1AA7; // bool
                pub const m_iBlockingUseActionInProgress: usize = 0x1AA8; // CSPlayerBlockingUseAction_t
                pub const m_flEmitSoundTime: usize = 0x1AAC; // GameTime_t
                pub const m_bInNoDefuseArea: usize = 0x1AB0; // bool
                pub const m_iBombSiteIndex: usize = 0x1AB4; // CEntityIndex
                pub const m_nWhichBombZone: usize = 0x1AB8; // int32
                pub const m_bInBombZoneTrigger: usize = 0x1ABC; // bool
                pub const m_bWasInBombZoneTrigger: usize = 0x1ABD; // bool
                pub const m_iShotsFired: usize = 0x1AC0; // int32
                pub const m_flFlinchStack: usize = 0x1AC4; // float32
                pub const m_flVelocityModifier: usize = 0x1AC8; // float32
                pub const m_flHitHeading: usize = 0x1ACC; // float32
                pub const m_nHitBodyPart: usize = 0x1AD0; // int32
                pub const m_vecTotalBulletForce: usize = 0x1AD4; // Vector
                pub const m_bWaitForNoAttack: usize = 0x1AE0; // bool
                pub const m_ignoreLadderJumpTime: usize = 0x1AE4; // float32
                pub const m_bKilledByHeadshot: usize = 0x1AE8; // bool
                pub const m_LastHitBox: usize = 0x1AEC; // int32
                pub const m_LastHealth: usize = 0x1AF0; // int32
                pub const m_pBot: usize = 0x1AF8; // CCSBot*
                pub const m_bBotAllowActive: usize = 0x1B00; // bool
                pub const m_thirdPersonHeading: usize = 0x1B04; // QAngle
                pub const m_flSlopeDropOffset: usize = 0x1B10; // float32
                pub const m_flSlopeDropHeight: usize = 0x1B14; // float32
                pub const m_vHeadConstraintOffset: usize = 0x1B18; // Vector
                pub const m_nLastPickupPriority: usize = 0x1B24; // int32
                pub const m_flLastPickupPriorityTime: usize = 0x1B28; // float32
                pub const m_ArmorValue: usize = 0x1B2C; // int32
                pub const m_unCurrentEquipmentValue: usize = 0x1B30; // uint16
                pub const m_unRoundStartEquipmentValue: usize = 0x1B32; // uint16
                pub const m_unFreezetimeEndEquipmentValue: usize = 0x1B34; // uint16
                pub const m_iLastWeaponFireUsercmd: usize = 0x1B38; // int32
                pub const m_bIsSpawning: usize = 0x1B3C; // bool
                pub const m_iDeathFlags: usize = 0x1B48; // int32
                pub const m_bHasDeathInfo: usize = 0x1B4C; // bool
                pub const m_flDeathInfoTime: usize = 0x1B50; // float32
                pub const m_vecDeathInfoOrigin: usize = 0x1B54; // Vector
                pub const m_vecPlayerPatchEconIndices: usize = 0x1B60; // uint32[5]
                pub const m_GunGameImmunityColor: usize = 0x1B74; // Color
                pub const m_grenadeParameterStashTime: usize = 0x1B78; // GameTime_t
                pub const m_bGrenadeParametersStashed: usize = 0x1B7C; // bool
                pub const m_angStashedShootAngles: usize = 0x1B80; // QAngle
                pub const m_vecStashedGrenadeThrowPosition: usize = 0x1B8C; // Vector
                pub const m_vecStashedVelocity: usize = 0x1B98; // Vector
                pub const m_angShootAngleHistory: usize = 0x1BA4; // QAngle[2]
                pub const m_vecThrowPositionHistory: usize = 0x1BBC; // Vector[2]
                pub const m_vecVelocityHistory: usize = 0x1BD4; // Vector[2]
                pub const m_PredictedDamageTags: usize = 0x1BF0; // CUtlVectorEmbeddedNetworkVar<PredictedDamageTag_t>
                pub const m_nHighestAppliedDamageTagTick: usize = 0x1C58; // int32
                pub const m_bCommittingSuicideOnTeamChange: usize = 0x1C5C; // bool
                pub const m_wasNotKilledNaturally: usize = 0x1C5D; // bool
                pub const m_fImmuneToGunGameDamageTime: usize = 0x1C60; // GameTime_t
                pub const m_bGunGameImmunity: usize = 0x1C64; // bool
                pub const m_fMolotovDamageTime: usize = 0x1C68; // float32
                pub const m_angEyeAngles: usize = 0x1C6C; // QAngle
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
            pub mod CEnvLightProbeVolume {
                pub const m_Entity_hLightProbeTexture_AmbientCube: usize = 0x14E8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeTexture_SDF: usize = 0x14F0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeTexture_SH2_DC: usize = 0x14F8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeTexture_SH2_R: usize = 0x1500; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeTexture_SH2_G: usize = 0x1508; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeTexture_SH2_B: usize = 0x1510; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeDirectLightIndicesTexture: usize = 0x1518; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeDirectLightScalarsTexture: usize = 0x1520; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeDirectLightShadowsTexture: usize = 0x1528; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_vBoxMins: usize = 0x1530; // Vector
                pub const m_Entity_vBoxMaxs: usize = 0x153C; // Vector
                pub const m_Entity_bMoveable: usize = 0x1548; // bool
                pub const m_Entity_nHandshake: usize = 0x154C; // int32
                pub const m_Entity_nPriority: usize = 0x1550; // int32
                pub const m_Entity_bStartDisabled: usize = 0x1554; // bool
                pub const m_Entity_nLightProbeSizeX: usize = 0x1558; // int32
                pub const m_Entity_nLightProbeSizeY: usize = 0x155C; // int32
                pub const m_Entity_nLightProbeSizeZ: usize = 0x1560; // int32
                pub const m_Entity_nLightProbeAtlasX: usize = 0x1564; // int32
                pub const m_Entity_nLightProbeAtlasY: usize = 0x1568; // int32
                pub const m_Entity_nLightProbeAtlasZ: usize = 0x156C; // int32
                pub const m_Entity_bEnabled: usize = 0x1579; // bool
            }
            // Parent: CServerOnlyPointEntity
            // Field count: 3
            pub mod SpawnPoint {
                pub const m_iPriority: usize = 0x4F0; // int32
                pub const m_bEnabled: usize = 0x4F4; // bool
                pub const m_nType: usize = 0x4F8; // int32
            }
            // Parent: None
            // Field count: 0
            pub mod CFuncMoverAPI {
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
            pub mod CGameSceneNode {
                pub const m_nodeToWorld: usize = 0x10; // CTransformWS
                pub const m_pOwner: usize = 0x30; // CEntityInstance*
                pub const m_pParent: usize = 0x38; // CGameSceneNode*
                pub const m_pChild: usize = 0x40; // CGameSceneNode*
                pub const m_pNextSibling: usize = 0x48; // CGameSceneNode*
                pub const m_hParent: usize = 0x78; // CGameSceneNodeHandle
                pub const m_vecOrigin: usize = 0x88; // CNetworkOriginCellCoordQuantizedVector
                pub const m_angRotation: usize = 0xC0; // QAngle
                pub const m_flScale: usize = 0xCC; // float32
                pub const m_vecAbsOrigin: usize = 0xD0; // VectorWS
                pub const m_angAbsRotation: usize = 0xDC; // QAngle
                pub const m_flAbsScale: usize = 0xE8; // float32
                pub const m_nParentAttachmentOrBone: usize = 0xEC; // int16
                pub const m_bDebugAbsOriginChanges: usize = 0xEE; // bool
                pub const m_bDormant: usize = 0xEF; // bool
                pub const m_bForceParentToBeNetworked: usize = 0xF0; // bool
                pub const m_bDirtyHierarchy: usize = 0x0; // bitfield:1
                pub const m_bDirtyBoneMergeInfo: usize = 0x0; // bitfield:1
                pub const m_bNetworkedPositionChanged: usize = 0x0; // bitfield:1
                pub const m_bNetworkedAnglesChanged: usize = 0x0; // bitfield:1
                pub const m_bNetworkedScaleChanged: usize = 0x0; // bitfield:1
                pub const m_bWillBeCallingPostDataUpdate: usize = 0x0; // bitfield:1
                pub const m_bBoneMergeFlex: usize = 0x0; // bitfield:1
                pub const m_nLatchAbsOrigin: usize = 0x0; // bitfield:2
                pub const m_bDirtyBoneMergeBoneToRoot: usize = 0x0; // bitfield:1
                pub const m_nHierarchicalDepth: usize = 0xF3; // uint8
                pub const m_nHierarchyType: usize = 0xF4; // uint8
                pub const m_nDoNotSetAnimTimeInInvalidatePhysicsCount: usize = 0xF5; // uint8
                pub const m_name: usize = 0xF8; // CUtlStringToken
                pub const m_hierarchyAttachName: usize = 0x138; // CUtlStringToken
                pub const m_flZOffset: usize = 0x13C; // float32
                pub const m_flClientLocalScale: usize = 0x140; // float32
                pub const m_vRenderOrigin: usize = 0x144; // Vector
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            pub mod CWeaponM249 {
            }
            // Parent: CRopeKeyframe
            // Field count: 0
            pub mod CRopeKeyframeAlias_move_rope {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CPulseServerFuncs_Sounds {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CPulsePhysicsConstraintsFuncs {
            }
            // Parent: CPlayerPawnComponent
            // Field count: 4
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
            // Parent: CPointEntity
            // Field count: 0
            pub mod CLogicScript {
            }
            // Parent: None
            // Field count: 3
            pub mod CAttributeManager__cached_attribute_float_t {
                pub const flIn: usize = 0x0; // float32
                pub const iAttribHook: usize = 0x8; // CUtlSymbolLarge
                pub const flOut: usize = 0x10; // float32
            }
            // Parent: None
            // Field count: 6
            pub mod CPulseGraphInstance_ServerEntity {
                pub const m_hOwner: usize = 0x190; // CHandle<CBaseEntity>
                pub const m_bActivated: usize = 0x194; // bool
                pub const m_sNameFixupStaticPrefix: usize = 0x198; // CUtlSymbolLarge
                pub const m_sNameFixupParent: usize = 0x1A0; // CUtlSymbolLarge
                pub const m_sNameFixupLocal: usize = 0x1A8; // CUtlSymbolLarge
                pub const m_sProceduralWorldNameForRelays: usize = 0x1B0; // CUtlSymbolLarge
            }
            // Parent: CSceneEntity
            // Field count: 0
            pub mod CSceneEntityAlias_logic_choreographed_scene {
            }
            // Parent: CBaseEntity
            // Field count: 4
            //
            // Metadata:
            // NetworkVarNames: m_iCurrentMaxRagdollCount (int8)
            pub mod CRagdollManager {
                pub const m_iCurrentMaxRagdollCount: usize = 0x4F0; // int8
                pub const m_iMaxRagdollCount: usize = 0x4F4; // int32
                pub const m_bSaveImportant: usize = 0x4F8; // bool
                pub const m_bCanTakeDamage: usize = 0x4F9; // bool
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
            pub mod CPostProcessingVolume {
                pub const m_hPostSettings: usize = 0x9B8; // CStrongHandle<InfoForResourceTypeCPostProcessingResource>
                pub const m_flFadeDuration: usize = 0x9C0; // float32
                pub const m_flMinLogExposure: usize = 0x9C4; // float32
                pub const m_flMaxLogExposure: usize = 0x9C8; // float32
                pub const m_flMinExposure: usize = 0x9CC; // float32
                pub const m_flMaxExposure: usize = 0x9D0; // float32
                pub const m_flExposureCompensation: usize = 0x9D4; // float32
                pub const m_flExposureFadeSpeedUp: usize = 0x9D8; // float32
                pub const m_flExposureFadeSpeedDown: usize = 0x9DC; // float32
                pub const m_flTonemapEVSmoothingRange: usize = 0x9E0; // float32
                pub const m_bMaster: usize = 0x9E4; // bool
                pub const m_bExposureControl: usize = 0x9E5; // bool
            }
            // Parent: CPointEntity
            // Field count: 3
            pub mod CPointProximitySensor {
                pub const m_bDisabled: usize = 0x4F0; // bool
                pub const m_hTargetEntity: usize = 0x4F4; // CHandle<CBaseEntity>
                pub const m_Distance: usize = 0x4F8; // CEntityOutputTemplate<float32>
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulse_InvokeBinding {
                pub const m_RegisterMap: usize = 0x0; // PulseRegisterMap_t
                pub const m_FuncName: usize = 0x30; // PulseSymbol_t
                pub const m_nCellIndex: usize = 0x40; // PulseRuntimeCellIndex_t
                pub const m_nSrcChunk: usize = 0x44; // PulseRuntimeChunkIndex_t
                pub const m_nSrcInstruction: usize = 0x48; // int32
            }
            // Parent: CTriggerOnce
            // Field count: 15
            //
            // Metadata:
            // NetworkVarNames: m_bTestOcclusion (bool)
            // NetworkVarNames: m_bTestAllVisibleOcclusion (bool)
            pub mod CTriggerLook {
                pub const m_hLookTarget: usize = 0x9D0; // CHandle<CBaseEntity>
                pub const m_flFieldOfView: usize = 0x9D4; // float32
                pub const m_flLookTime: usize = 0x9D8; // float32
                pub const m_flLookTimeTotal: usize = 0x9DC; // float32
                pub const m_flLookTimeLast: usize = 0x9E0; // GameTime_t
                pub const m_flTimeoutDuration: usize = 0x9E4; // float32
                pub const m_bTimeoutFired: usize = 0x9E8; // bool
                pub const m_bIsLooking: usize = 0x9E9; // bool
                pub const m_b2DFOV: usize = 0x9EA; // bool
                pub const m_bUseVelocity: usize = 0x9EB; // bool
                pub const m_bTestOcclusion: usize = 0x9EC; // bool
                pub const m_bTestAllVisibleOcclusion: usize = 0x9ED; // bool
                pub const m_OnTimeout: usize = 0x9F0; // CEntityIOOutput
                pub const m_OnStartLook: usize = 0xA18; // CEntityIOOutput
                pub const m_OnEndLook: usize = 0xA40; // CEntityIOOutput
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Outflow_PlayVCD {
                pub const m_hChoreoScene: usize = 0xF0; // CStrongHandle<InfoForResourceTypeCChoreoSceneResource>
            }
            // Parent: None
            // Field count: 0
            pub mod CMultiplayRules {
            }
            // Parent: CBaseCSGrenade
            // Field count: 0
            pub mod CMolotovGrenade {
            }
            // Parent: CPhysForce
            // Field count: 1
            pub mod CPhysTorque {
                pub const m_axis: usize = 0x550; // VectorWS
            }
            // Parent: CLogicalEntity
            // Field count: 5
            pub mod CMultiSource {
                pub const m_rgEntities: usize = 0x4F0; // CHandle<CBaseEntity>[32]
                pub const m_rgTriggered: usize = 0x570; // int32[32]
                pub const m_OnTrigger: usize = 0x5F0; // CEntityIOOutput
                pub const m_iTotal: usize = 0x618; // int32
                pub const m_globalstate: usize = 0x620; // CUtlSymbolLarge
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
            pub mod CBaseCSGrenade {
                pub const m_bRedraw: usize = 0x11D0; // bool
                pub const m_bIsHeldByPlayer: usize = 0x11D1; // bool
                pub const m_bPinPulled: usize = 0x11D2; // bool
                pub const m_bJumpThrow: usize = 0x11D3; // bool
                pub const m_bThrowAnimating: usize = 0x11D4; // bool
                pub const m_fThrowTime: usize = 0x11D8; // GameTime_t
                pub const m_flThrowStrength: usize = 0x11DC; // float32
                pub const m_fDropTime: usize = 0x11E0; // GameTime_t
                pub const m_fPinPullTime: usize = 0x11E4; // GameTime_t
                pub const m_bJustPulledPin: usize = 0x11E8; // bool
                pub const m_nNextHoldTick: usize = 0x11EC; // GameTick_t
                pub const m_flNextHoldFrac: usize = 0x11F0; // float32
                pub const m_hSwitchToWeaponAfterThrow: usize = 0x11F4; // CHandle<CCSWeaponBase>
            }
            // Parent: CBaseEntity
            // Field count: 11
            pub mod CLogicAuto {
                pub const m_OnMapSpawn: usize = 0x4F0; // CEntityIOOutput
                pub const m_OnDemoMapSpawn: usize = 0x518; // CEntityIOOutput
                pub const m_OnNewGame: usize = 0x540; // CEntityIOOutput
                pub const m_OnLoadGame: usize = 0x568; // CEntityIOOutput
                pub const m_OnMapTransition: usize = 0x590; // CEntityIOOutput
                pub const m_OnBackgroundMap: usize = 0x5B8; // CEntityIOOutput
                pub const m_OnMultiNewMap: usize = 0x5E0; // CEntityIOOutput
                pub const m_OnMultiNewRound: usize = 0x608; // CEntityIOOutput
                pub const m_OnVREnabled: usize = 0x630; // CEntityIOOutput
                pub const m_OnVRNotEnabled: usize = 0x658; // CEntityIOOutput
                pub const m_globalstate: usize = 0x680; // CUtlSymbolLarge
            }
            // Parent: CBaseEntity
            // Field count: 1
            pub mod CPhysicsWire {
                pub const m_nDensity: usize = 0x4F0; // int32
            }
            // Parent: CBaseModelEntity
            // Field count: 0
            pub mod CFuncIllusionary {
            }
            // Parent: CPointEntity
            // Field count: 5
            pub mod CInfoDynamicShadowHint {
                pub const m_bDisabled: usize = 0x4F0; // bool
                pub const m_flRange: usize = 0x4F4; // float32
                pub const m_nImportance: usize = 0x4F8; // int32
                pub const m_nLightChoice: usize = 0x4FC; // int32
                pub const m_hLight: usize = 0x500; // CHandle<CBaseEntity>
            }
            // Parent: CBaseModelEntity
            // Field count: 1
            pub mod CMarkupVolume {
                pub const m_bDisabled: usize = 0x7D8; // bool
            }
            // Parent: CCSGO_TeamSelectCharacterPosition
            // Field count: 0
            pub mod CCSGO_TeamSelectCounterTerroristPosition {
            }
            // Parent: CBaseTrigger
            // Field count: 1
            pub mod CTriggerRemove {
                pub const m_OnRemove: usize = 0x9A8; // CEntityIOOutput
            }
            // Parent: CLogicalEntity
            // Field count: 5
            //
            // Metadata:
            // NetworkVarNames: m_bEnabled (bool)
            pub mod CLogicGameEventListener {
                pub const m_OnEventFired: usize = 0x500; // CEntityIOOutput
                pub const m_iszGameEventName: usize = 0x528; // CUtlSymbolLarge
                pub const m_iszGameEventItem: usize = 0x530; // CUtlSymbolLarge
                pub const m_bEnabled: usize = 0x538; // bool
                pub const m_bStartDisabled: usize = 0x539; // bool
            }
            // Parent: CBaseModelEntity
            // Field count: 0
            pub mod CServerOnlyModelEntity {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            pub mod CPulseCell_IntervalTimer {
                pub const m_Completed: usize = 0x48; // CPulse_ResumePoint
                pub const m_OnInterval: usize = 0x90; // SignatureOutflow_Continue
            }
            // Parent: CMarkupVolumeTagged
            // Field count: 1
            pub mod CMarkupVolumeTagged_Nav {
                pub const m_nScopes: usize = 0x818; // NavScopeFlags_t
            }
            // Parent: SpawnPoint
            // Field count: 0
            pub mod CInfoPlayerTerrorist {
            }
            // Parent: CLogicalEntity
            // Field count: 3
            pub mod CLogicAutosave {
                pub const m_bForceNewLevelUnit: usize = 0x4F0; // bool
                pub const m_minHitPoints: usize = 0x4F4; // int32
                pub const m_minHitPointsToCommit: usize = 0x4F8; // int32
            }
            // Parent: CCSGO_TeamIntroCharacterPosition
            // Field count: 0
            pub mod CCSGO_TeamIntroTerroristPosition {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyDescription
            pub mod CPulseTestScriptLib {
            }
            // Parent: None
            // Field count: 1
            pub mod CSingleplayRules {
                pub const m_bSinglePlayerGameEnding: usize = 0xC0; // bool
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
            pub mod CEnvWindShared {
                pub const m_flStartTime: usize = 0x8; // GameTime_t
                pub const m_iWindSeed: usize = 0xC; // uint32
                pub const m_iMinWind: usize = 0x10; // uint16
                pub const m_iMaxWind: usize = 0x12; // uint16
                pub const m_windRadius: usize = 0x14; // int32
                pub const m_iMinGust: usize = 0x18; // uint16
                pub const m_iMaxGust: usize = 0x1A; // uint16
                pub const m_flMinGustDelay: usize = 0x1C; // float32
                pub const m_flMaxGustDelay: usize = 0x20; // float32
                pub const m_flGustDuration: usize = 0x24; // float32
                pub const m_iGustDirChange: usize = 0x28; // uint16
                pub const m_iInitialWindDir: usize = 0x2A; // uint16
                pub const m_flInitialWindSpeed: usize = 0x2C; // float32
                pub const m_location: usize = 0x30; // Vector
                pub const m_OnGustStart: usize = 0x40; // CEntityIOOutput
                pub const m_OnGustEnd: usize = 0x68; // CEntityIOOutput
                pub const m_hEntOwner: usize = 0x90; // CHandle<CBaseEntity>
            }
            // Parent: CServerOnlyPointEntity
            // Field count: 6
            pub mod CPointPrefab {
                pub const m_targetMapName: usize = 0x4F0; // CUtlSymbolLarge
                pub const m_forceWorldGroupID: usize = 0x4F8; // CUtlSymbolLarge
                pub const m_associatedRelayTargetName: usize = 0x500; // CUtlSymbolLarge
                pub const m_fixupNames: usize = 0x508; // bool
                pub const m_bLoadDynamic: usize = 0x509; // bool
                pub const m_associatedRelayEntity: usize = 0x50C; // CHandle<CPointPrefab>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_BaseLerp {
                pub const m_WakeResume: usize = 0x48; // CPulse_ResumePoint
            }
            // Parent: CPointEntity
            // Field count: 9
            pub mod CEnvInstructorVRHint {
                pub const m_iszName: usize = 0x4F0; // CUtlSymbolLarge
                pub const m_iszHintTargetEntity: usize = 0x4F8; // CUtlSymbolLarge
                pub const m_iTimeout: usize = 0x500; // int32
                pub const m_iszCaption: usize = 0x508; // CUtlSymbolLarge
                pub const m_iszStartSound: usize = 0x510; // CUtlSymbolLarge
                pub const m_iLayoutFileType: usize = 0x518; // int32
                pub const m_iszCustomLayoutFile: usize = 0x520; // CUtlSymbolLarge
                pub const m_iAttachType: usize = 0x528; // int32
                pub const m_flHeightOffset: usize = 0x52C; // float32
            }
            // Parent: CGameRulesProxy
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_pGameRules (CCSGameRules*)
            pub mod CCSGameRulesProxy {
                pub const m_pGameRules: usize = 0x4F0; // CCSGameRules*
            }
            // Parent: CBaseTrigger
            // Field count: 0
            pub mod CPrecipitation {
            }
            // Parent: CSprite
            // Field count: 0
            pub mod CCommentaryViewPosition {
            }
            // Parent: CLogicalEntity
            // Field count: 5
            pub mod CEnvGlobal {
                pub const m_outCounter: usize = 0x4F0; // CEntityOutputTemplate<int32>
                pub const m_globalstate: usize = 0x518; // CUtlSymbolLarge
                pub const m_triggermode: usize = 0x520; // int32
                pub const m_initialstate: usize = 0x524; // int32
                pub const m_counter: usize = 0x528; // int32
            }
            // Parent: CLogicNPCCounterAABB
            // Field count: 0
            pub mod CLogicNPCCounterOBB {
            }
            // Parent: CBaseModelEntity
            // Field count: 1
            pub mod CPlatTrigger {
                pub const m_pPlatform: usize = 0x7D8; // CHandle<CFuncPlat>
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
            pub mod CSceneEntity {
                pub const m_iszSceneFile: usize = 0x4F8; // CUtlSymbolLarge
                pub const m_iszResumeSceneFile: usize = 0x500; // CUtlSymbolLarge
                pub const m_iszTarget1: usize = 0x508; // CUtlSymbolLarge
                pub const m_iszTarget2: usize = 0x510; // CUtlSymbolLarge
                pub const m_iszTarget3: usize = 0x518; // CUtlSymbolLarge
                pub const m_iszTarget4: usize = 0x520; // CUtlSymbolLarge
                pub const m_iszTarget5: usize = 0x528; // CUtlSymbolLarge
                pub const m_iszTarget6: usize = 0x530; // CUtlSymbolLarge
                pub const m_iszTarget7: usize = 0x538; // CUtlSymbolLarge
                pub const m_iszTarget8: usize = 0x540; // CUtlSymbolLarge
                pub const m_hTarget1: usize = 0x548; // CHandle<CBaseEntity>
                pub const m_hTarget2: usize = 0x54C; // CHandle<CBaseEntity>
                pub const m_hTarget3: usize = 0x550; // CHandle<CBaseEntity>
                pub const m_hTarget4: usize = 0x554; // CHandle<CBaseEntity>
                pub const m_hTarget5: usize = 0x558; // CHandle<CBaseEntity>
                pub const m_hTarget6: usize = 0x55C; // CHandle<CBaseEntity>
                pub const m_hTarget7: usize = 0x560; // CHandle<CBaseEntity>
                pub const m_hTarget8: usize = 0x564; // CHandle<CBaseEntity>
                pub const m_sTargetAttachment: usize = 0x568; // CUtlSymbolLarge
                pub const m_bIsPlayingBack: usize = 0x570; // bool
                pub const m_bPaused: usize = 0x571; // bool
                pub const m_bMultiplayer: usize = 0x572; // bool
                pub const m_bAutogenerated: usize = 0x573; // bool
                pub const m_flForceClientTime: usize = 0x574; // float32
                pub const m_flCurrentTime: usize = 0x578; // float32
                pub const m_flFrameTime: usize = 0x57C; // float32
                pub const m_bCancelAtNextInterrupt: usize = 0x580; // bool
                pub const m_fPitch: usize = 0x584; // float32
                pub const m_bAutomated: usize = 0x588; // bool
                pub const m_nAutomatedAction: usize = 0x58C; // int32
                pub const m_flAutomationDelay: usize = 0x590; // float32
                pub const m_flAutomationTime: usize = 0x594; // float32
                pub const m_nSpeechPriority: usize = 0x598; // int32
                pub const m_hWaitingForThisResumeScene: usize = 0x59C; // CHandle<CBaseEntity>
                pub const m_bWaitingForResumeScene: usize = 0x5A0; // bool
                pub const m_bPausedViaInput: usize = 0x5A1; // bool
                pub const m_bPauseAtNextInterrupt: usize = 0x5A2; // bool
                pub const m_bWaitingForActor: usize = 0x5A3; // bool
                pub const m_bWaitingForInterrupt: usize = 0x5A4; // bool
                pub const m_bInterruptedActorsScenes: usize = 0x5A5; // bool
                pub const m_bBreakOnNonIdle: usize = 0x5A6; // bool
                pub const m_bSceneFinished: usize = 0x5A7; // bool
                pub const m_hActorList: usize = 0x5A8; // CNetworkUtlVectorBase<CHandle<CBaseFlex>>
                pub const m_hRemoveActorList: usize = 0x5C0; // CUtlVector<CHandle<CBaseEntity>>
                pub const m_nSceneFlushCounter: usize = 0x608; // int32
                pub const m_nSceneStringIndex: usize = 0x60C; // uint16
                pub const m_OnStart: usize = 0x610; // CEntityIOOutput
                pub const m_OnCompletion: usize = 0x638; // CEntityIOOutput
                pub const m_OnCanceled: usize = 0x660; // CEntityIOOutput
                pub const m_OnPaused: usize = 0x688; // CEntityIOOutput
                pub const m_OnResumed: usize = 0x6B0; // CEntityIOOutput
                pub const m_OnTrigger: usize = 0x6D8; // CEntityIOOutput[16]
                pub const m_hInterruptScene: usize = 0x9E8; // CHandle<CSceneEntity>
                pub const m_nInterruptCount: usize = 0x9EC; // int32
                pub const m_bSceneMissing: usize = 0x9F0; // bool
                pub const m_bInterrupted: usize = 0x9F1; // bool
                pub const m_bCompletedEarly: usize = 0x9F2; // bool
                pub const m_bInterruptSceneFinished: usize = 0x9F3; // bool
                pub const m_bRestoring: usize = 0x9F4; // bool
                pub const m_hNotifySceneCompletion: usize = 0x9F8; // CUtlVector<CHandle<CSceneEntity>>
                pub const m_hListManagers: usize = 0xA10; // CUtlVector<CHandle<CSceneListManager>>
                pub const m_iszSoundName: usize = 0xA28; // CUtlSymbolLarge
                pub const m_iszSequenceName: usize = 0xA30; // CUtlSymbolLarge
                pub const m_hActor: usize = 0xA38; // CHandle<CBaseFlex>
                pub const m_hActivator: usize = 0xA3C; // CHandle<CBaseEntity>
                pub const m_BusyActor: usize = 0xA40; // int32
                pub const m_iPlayerDeathBehavior: usize = 0xA44; // SceneOnPlayerDeath_t
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
            pub mod CTonemapController2 {
                pub const m_flAutoExposureMin: usize = 0x4F0; // float32
                pub const m_flAutoExposureMax: usize = 0x4F4; // float32
                pub const m_flExposureAdaptationSpeedUp: usize = 0x4F8; // float32
                pub const m_flExposureAdaptationSpeedDown: usize = 0x4FC; // float32
                pub const m_flTonemapEVSmoothingRange: usize = 0x500; // float32
            }
            // Parent: CLogicalEntity
            // Field count: 1
            pub mod CMapSharedEnvironment {
                pub const m_targetMapName: usize = 0x4F0; // CUtlSymbolLarge
            }
            // Parent: 
            // Field count: 8
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
            // Parent: CBaseAnimGraph
            // Field count: 12
            pub mod CPhysMagnet {
                pub const m_OnMagnetAttach: usize = 0xA90; // CEntityIOOutput
                pub const m_OnMagnetDetach: usize = 0xAB8; // CEntityIOOutput
                pub const m_massScale: usize = 0xAE0; // float32
                pub const m_forceLimit: usize = 0xAE4; // float32
                pub const m_torqueLimit: usize = 0xAE8; // float32
                pub const m_MagnettedEntities: usize = 0xAF0; // CUtlVector<magnetted_objects_t>
                pub const m_bActive: usize = 0xB08; // bool
                pub const m_bHasHitSomething: usize = 0xB09; // bool
                pub const m_flTotalMass: usize = 0xB0C; // float32
                pub const m_flRadius: usize = 0xB10; // float32
                pub const m_flNextSuckTime: usize = 0xB14; // GameTime_t
                pub const m_iMaxObjectsAttached: usize = 0xB18; // int32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // NetworkVarNames: m_pEntity (CEntityIdentity*)
            // NetworkVarNames: m_CScriptComponent (CScriptComponent::Storage_t)
            pub mod CEntityInstance {
                pub const m_iszPrivateVScripts: usize = 0x8; // CUtlSymbolLarge
                pub const m_pEntity: usize = 0x10; // CEntityIdentity*
                pub const m_CScriptComponent: usize = 0x30; // CScriptComponent*
            }
            // Parent: CBaseEntity
            // Field count: 4
            pub mod CGameGibManager {
                pub const m_bAllowNewGibs: usize = 0x508; // bool
                pub const m_iCurrentMaxPieces: usize = 0x50C; // int32
                pub const m_iMaxPieces: usize = 0x510; // int32
                pub const m_iLastFrame: usize = 0x514; // int32
            }
            // Parent: CBaseEntity
            // Field count: 0
            pub mod CHandleDummy {
            }
            // Parent: CFuncWall
            // Field count: 0
            pub mod CFuncWallToggle {
            }
            // Parent: CPlayerPawnComponent
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_totalHitsOnServer (int32)
            pub mod CCSPlayer_BulletServices {
                pub const m_totalHitsOnServer: usize = 0x40; // int32
            }
            // Parent: CBaseEntity
            // Field count: 4
            //
            // Metadata:
            // NetworkVarNames: m_skyboxData (sky3dparams_t)
            // NetworkVarNames: m_skyboxSlotToken (CUtlStringToken)
            pub mod CSkyCamera {
                pub const m_skyboxData: usize = 0x4F0; // sky3dparams_t
                pub const m_skyboxSlotToken: usize = 0x580; // CUtlStringToken
                pub const m_bUseAngles: usize = 0x584; // bool
                pub const m_pNext: usize = 0x588; // CSkyCamera*
            }
            // Parent: CPlayerPawnComponent
            // Field count: 0
            pub mod CPlayer_AutoaimServices {
            }
            // Parent: CItemDefuser
            // Field count: 0
            pub mod CItemDefuserAlias_item_defuser {
            }
            // Parent: CPathCorner
            // Field count: 0
            pub mod CPathCornerCrash {
            }
            // Parent: CPhysConstraint
            // Field count: 4
            pub mod CPhysPulley {
                pub const m_position2: usize = 0x560; // VectorWS
                pub const m_offset: usize = 0x56C; // Vector[2]
                pub const m_addLength: usize = 0x584; // float32
                pub const m_gearRatio: usize = 0x588; // float32
            }
            // Parent: CBaseEntity
            // Field count: 0
            pub mod CCSPetPlacement {
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            pub mod CWeaponMP5SD {
            }
            // Parent: CCSWeaponBase
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_bSequenceInProgress (bool)
            // NetworkVarNames: m_bRedraw (bool)
            pub mod CWeaponBaseItem {
                pub const m_bSequenceInProgress: usize = 0x11D0; // bool
                pub const m_bRedraw: usize = 0x11D1; // bool
            }
            // Parent: CBaseEntity
            // Field count: 3
            pub mod CCommentaryAuto {
                pub const m_OnCommentaryNewGame: usize = 0x4F0; // CEntityIOOutput
                pub const m_OnCommentaryMidGame: usize = 0x518; // CEntityIOOutput
                pub const m_OnCommentaryMultiplayerSpawn: usize = 0x540; // CEntityIOOutput
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Outflow_ListenForEntityOutput__CursorState_t {
                pub const m_entity: usize = 0x0; // CHandle<CBaseEntity>
            }
            // Parent: 
            // Field count: 4
            //
            // Metadata:
            // NetworkVarNames: m_Handle (ModelConfigHandle_t)
            // NetworkVarNames: m_Name (string_t)
            // NetworkVarNames: m_AssociatedEntities (CHandle<CBaseModelEntity>)
            // NetworkVarNames: m_AssociatedEntityNames (string_t)
            pub mod ActiveModelConfig_t {
                pub const m_Handle: usize = 0x30; // ModelConfigHandle_t
                pub const m_Name: usize = 0x38; // CUtlSymbolLarge
                pub const m_AssociatedEntities: usize = 0x40; // CNetworkUtlVectorBase<CHandle<CBaseModelEntity>>
                pub const m_AssociatedEntityNames: usize = 0x58; // CNetworkUtlVectorBase<CUtlSymbolLarge>
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            pub mod CWeaponUSPSilencer {
            }
            // Parent: CLogicalEntity
            // Field count: 1
            pub mod CSoundStackSave {
                pub const m_iszStackName: usize = 0x4F0; // CUtlSymbolLarge
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CPulseCell_Value_Curve {
                pub const m_Curve: usize = 0x48; // CPiecewiseCurve
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            pub mod CWeaponMag7 {
            }
            // Parent: CLogicalEntity
            // Field count: 9
            pub mod CLogicMeasureMovement {
                pub const m_strMeasureTarget: usize = 0x4F0; // CUtlSymbolLarge
                pub const m_strMeasureReference: usize = 0x4F8; // CUtlSymbolLarge
                pub const m_strTargetReference: usize = 0x500; // CUtlSymbolLarge
                pub const m_hMeasureTarget: usize = 0x508; // CHandle<CBaseEntity>
                pub const m_hMeasureReference: usize = 0x50C; // CHandle<CBaseEntity>
                pub const m_hTarget: usize = 0x510; // CHandle<CBaseEntity>
                pub const m_hTargetReference: usize = 0x514; // CHandle<CBaseEntity>
                pub const m_flScale: usize = 0x518; // float32
                pub const m_nMeasureType: usize = 0x51C; // int32
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
            pub mod CC4 {
                pub const m_vecLastValidPlayerHeldPosition: usize = 0x1200; // Vector
                pub const m_vecLastValidDroppedPosition: usize = 0x120C; // Vector
                pub const m_bDoValidDroppedPositionCheck: usize = 0x1218; // bool
                pub const m_bStartedArming: usize = 0x1219; // bool
                pub const m_fArmedTime: usize = 0x121C; // GameTime_t
                pub const m_bBombPlacedAnimation: usize = 0x1220; // bool
                pub const m_bIsPlantingViaUse: usize = 0x1221; // bool
                pub const m_entitySpottedState: usize = 0x1228; // EntitySpottedState_t
                pub const m_nSpotRules: usize = 0x1240; // int32
                pub const m_bPlayedArmingBeeps: usize = 0x1244; // bool[7]
                pub const m_bBombPlanted: usize = 0x124B; // bool
            }
            // Parent: CBaseAnimGraph
            // Field count: 0
            pub mod CHostageCarriableProp {
            }
            // Parent: CDynamicProp
            // Field count: 0
            pub mod CDynamicPropAlias_cable_dynamic {
            }
            // Parent: CBaseFlex
            // Field count: 0
            pub mod CBaseFlexAlias_funCBaseFlex {
            }
            // Parent: CCSPlayerBase_CameraServices
            // Field count: 0
            pub mod CCSObserver_CameraServices {
            }
            // Parent: CBaseEntity
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_flFadeStartDist (float32)
            // NetworkVarNames: m_flFadeEndDist (float32)
            pub mod CEnvDetailController {
                pub const m_flFadeStartDist: usize = 0x4F0; // float32
                pub const m_flFadeEndDist: usize = 0x4F4; // float32
            }
            // Parent: None
            // Field count: 0
            pub mod CTakeDamageInfoAPI {
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
            pub mod CCSPlayerPawnBase {
                pub const m_CTouchExpansionComponent: usize = 0xDA0; // CTouchExpansionComponent
                pub const m_pPingServices: usize = 0xDF0; // CCSPlayer_PingServices*
                pub const m_blindUntilTime: usize = 0xDF8; // GameTime_t
                pub const m_blindStartTime: usize = 0xDFC; // GameTime_t
                pub const m_iPlayerState: usize = 0xE00; // CSPlayerState
                pub const m_bRespawning: usize = 0xEB0; // bool
                pub const m_bHasMovedSinceSpawn: usize = 0xEB1; // bool
                pub const m_iNumSpawns: usize = 0xEB4; // int32
                pub const m_flIdleTimeSinceLastAction: usize = 0xEBC; // float32
                pub const m_fNextRadarUpdateTime: usize = 0xEC0; // float32
                pub const m_flFlashDuration: usize = 0xEC4; // float32
                pub const m_flFlashMaxAlpha: usize = 0xEC8; // float32
                pub const m_flProgressBarStartTime: usize = 0xECC; // float32
                pub const m_iProgressBarDuration: usize = 0xED0; // int32
                pub const m_hOriginalController: usize = 0xED4; // CHandle<CCSPlayerController>
            }
            // Parent: CEnvSoundscape
            // Field count: 1
            pub mod CEnvSoundscapeProxy {
                pub const m_MainSoundscapeName: usize = 0x590; // CUtlSymbolLarge
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Inflow_EventHandler {
                pub const m_EventName: usize = 0x80; // PulseSymbol_t
            }
            // Parent: CBaseEntity
            // Field count: 0
            pub mod CCSPointScriptEntity {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_BaseFlow {
            }
            // Parent: CBaseTrigger
            // Field count: 9
            //
            // Metadata:
            // NetworkVarNames: m_bBombPlantedHere (bool)
            pub mod CBombTarget {
                pub const m_OnBombExplode: usize = 0x9A8; // CEntityIOOutput
                pub const m_OnBombPlanted: usize = 0x9D0; // CEntityIOOutput
                pub const m_OnBombDefused: usize = 0x9F8; // CEntityIOOutput
                pub const m_bIsBombSiteB: usize = 0xA20; // bool
                pub const m_bIsHeistBombTarget: usize = 0xA21; // bool
                pub const m_bBombPlantedHere: usize = 0xA22; // bool
                pub const m_szMountTarget: usize = 0xA28; // CUtlSymbolLarge
                pub const m_hInstructorHint: usize = 0xA30; // CHandle<CBaseEntity>
                pub const m_nBombSiteDesignation: usize = 0xA34; // int32
            }
            // Parent: CBaseModelEntity
            // Field count: 1
            pub mod CRuleEntity {
                pub const m_iszMaster: usize = 0x7D8; // CUtlSymbolLarge
            }
            // Parent: CPhysForce
            // Field count: 1
            pub mod CPhysThruster {
                pub const m_localOrigin: usize = 0x550; // Vector
            }
            // Parent: CPointEntity
            // Field count: 3
            pub mod CInfoPlayerStart {
                pub const m_bDisabled: usize = 0x4F0; // bool
                pub const m_bIsMaster: usize = 0x4F1; // bool
                pub const m_pPawnSubclass: usize = 0x4F8; // CGlobalSymbol
            }
            // Parent: CBaseEntity
            // Field count: 10
            //
            // Metadata:
            // NetworkVarNames: m_hEntAttached (CHandle<CBaseEntity>)
            // NetworkVarNames: m_bCheapEffect (bool)
            pub mod CEntityFlame {
                pub const m_hEntAttached: usize = 0x4F0; // CHandle<CBaseEntity>
                pub const m_bCheapEffect: usize = 0x4F4; // bool
                pub const m_flSize: usize = 0x4F8; // float32
                pub const m_bUseHitboxes: usize = 0x4FC; // bool
                pub const m_iNumHitboxFires: usize = 0x500; // int32
                pub const m_flHitboxFireScale: usize = 0x504; // float32
                pub const m_flLifetime: usize = 0x508; // GameTime_t
                pub const m_hAttacker: usize = 0x50C; // CHandle<CBaseEntity>
                pub const m_flDirectDamagePerSecond: usize = 0x510; // float32
                pub const m_iCustomDamageType: usize = 0x514; // int32
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
            pub mod CSkeletonInstance {
                pub const m_modelState: usize = 0x170; // CModelState
                pub const m_bIsAnimationEnabled: usize = 0x3F0; // bool
                pub const m_bUseParentRenderBounds: usize = 0x3F1; // bool
                pub const m_bDisableSolidCollisionsForHierarchy: usize = 0x3F2; // bool
                pub const m_bDirtyMotionType: usize = 0x0; // bitfield:1
                pub const m_bIsGeneratingLatchedParentSpaceState: usize = 0x0; // bitfield:1
                pub const m_materialGroup: usize = 0x3F4; // CUtlStringToken
                pub const m_nHitboxSet: usize = 0x3F8; // uint8
            }
            // Parent: 
            // Field count: 0
            pub mod CEntityComponent {
            }
            // Parent: CBaseToggle
            // Field count: 5
            pub mod CBasePlatTrain {
                pub const m_NoiseMoving: usize = 0x858; // CUtlSymbolLarge
                pub const m_NoiseArrived: usize = 0x860; // CUtlSymbolLarge
                pub const m_volume: usize = 0x870; // float32
                pub const m_flTWidth: usize = 0x874; // float32
                pub const m_flTLength: usize = 0x878; // float32
            }
            // Parent: CServerOnlyPointEntity
            // Field count: 4
            pub mod CPointTeleport {
                pub const m_vSaveOrigin: usize = 0x4F0; // Vector
                pub const m_vSaveAngles: usize = 0x4FC; // QAngle
                pub const m_bTeleportParentedEntities: usize = 0x508; // bool
                pub const m_bTeleportUseCurrentAngle: usize = 0x509; // bool
            }
            // Parent: CBaseTrigger
            // Field count: 3
            //
            // Metadata:
            // NetworkVarNames: m_strStartTouchEventName (CUtlString)
            // NetworkVarNames: m_strEndTouchEventName (CUtlString)
            // NetworkVarNames: m_strTriggerID (CUtlString)
            pub mod CTriggerGameEvent {
                pub const m_strStartTouchEventName: usize = 0x9A8; // CUtlString
                pub const m_strEndTouchEventName: usize = 0x9B0; // CUtlString
                pub const m_strTriggerID: usize = 0x9B8; // CUtlString
            }
            // Parent: CPointEntity
            // Field count: 5
            pub mod CMessageEntity {
                pub const m_radius: usize = 0x4F0; // int32
                pub const m_messageText: usize = 0x4F8; // CUtlSymbolLarge
                pub const m_drawText: usize = 0x500; // bool
                pub const m_bDeveloperOnly: usize = 0x501; // bool
                pub const m_bEnabled: usize = 0x502; // bool
            }
            // Parent: CBaseEntity
            // Field count: 1
            pub mod CEnvEntityIgniter {
                pub const m_flLifetime: usize = 0x4F0; // float32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Outflow_CycleShuffled__InstanceState_t {
                pub const m_Shuffle: usize = 0x0; // CUtlVectorFixedGrowable<uint8,8>
                pub const m_nNextShuffle: usize = 0x20; // int32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_BaseLerp__CursorState_t {
                pub const m_StartTime: usize = 0x0; // GameTime_t
                pub const m_EndTime: usize = 0x4; // GameTime_t
            }
            // Parent: CMarkupVolumeWithRef
            // Field count: 3
            pub mod CMarkupVolumeTagged_NavGame {
                pub const m_nScopes: usize = 0x840; // NavScopeFlags_t
                pub const m_bFloodFillAttribute: usize = 0x841; // bool
                pub const m_bSplitNavSpace: usize = 0x842; // bool
            }
            // Parent: CLogicalEntity
            // Field count: 8
            pub mod CMultiLightProxy {
                pub const m_iszLightNameFilter: usize = 0x4F0; // CUtlSymbolLarge
                pub const m_iszLightClassFilter: usize = 0x4F8; // CUtlSymbolLarge
                pub const m_flLightRadiusFilter: usize = 0x500; // float32
                pub const m_flBrightnessDelta: usize = 0x504; // float32
                pub const m_bPerformScreenFade: usize = 0x508; // bool
                pub const m_flTargetBrightnessMultiplier: usize = 0x50C; // float32
                pub const m_flCurrentBrightnessMultiplier: usize = 0x510; // float32
                pub const m_vecLights: usize = 0x518; // CUtlVector<CHandle<CLightEntity>>
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            pub mod CWeaponM4A1 {
            }
            // Parent: CBaseTrigger
            // Field count: 0
            pub mod CTriggerHostageReset {
            }
            // Parent: None
            // Field count: 0
            pub mod CPulseAnimFuncs {
            }
            // Parent: CEconEntity
            // Field count: 2
            pub mod CEconWearable {
                pub const m_nForceSkin: usize = 0xE50; // int32
                pub const m_bAlwaysAllow: usize = 0xE54; // bool
            }
            // Parent: None
            // Field count: 1
            pub mod CPulseCell_WaitForCursorsWithTagBase__CursorState_t {
                pub const m_TagName: usize = 0x0; // PulseSymbol_t
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyDescription
            pub mod CPulseArraylib {
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            pub mod CWeaponMAC10 {
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
            pub mod CFuncLadder {
                pub const m_vecLadderDir: usize = 0x7D8; // Vector
                pub const m_Dismounts: usize = 0x7E8; // CUtlVector<CHandle<CInfoLadderDismount>>
                pub const m_vecLocalTop: usize = 0x800; // Vector
                pub const m_vecPlayerMountPositionTop: usize = 0x80C; // VectorWS
                pub const m_vecPlayerMountPositionBottom: usize = 0x818; // VectorWS
                pub const m_flAutoRideSpeed: usize = 0x824; // float32
                pub const m_bDisabled: usize = 0x828; // bool
                pub const m_bFakeLadder: usize = 0x829; // bool
                pub const m_bHasSlack: usize = 0x82A; // bool
                pub const m_surfacePropName: usize = 0x830; // CUtlSymbolLarge
                pub const m_OnPlayerGotOnLadder: usize = 0x838; // CEntityIOOutput
                pub const m_OnPlayerGotOffLadder: usize = 0x860; // CEntityIOOutput
            }
            // Parent: CBaseEntity
            // Field count: 3
            //
            // Metadata:
            // NetworkVarNames: m_fog (fogparams_t)
            pub mod CFogController {
                pub const m_fog: usize = 0x4F0; // fogparams_t
                pub const m_bUseAngles: usize = 0x558; // bool
                pub const m_iChangedVariables: usize = 0x55C; // int32
            }
            // Parent: None
            // Field count: 0
            pub mod CPointTemplateAPI {
            }
            // Parent: CBaseAnimGraph
            // Field count: 8
            pub mod CItem {
                pub const m_OnPlayerTouch: usize = 0xA98; // CEntityIOOutput
                pub const m_OnPlayerPickup: usize = 0xAC0; // CEntityIOOutput
                pub const m_bActivateWhenAtRest: usize = 0xAE8; // bool
                pub const m_OnCacheInteraction: usize = 0xAF0; // CEntityIOOutput
                pub const m_OnGlovePulled: usize = 0xB18; // CEntityIOOutput
                pub const m_vOriginalSpawnOrigin: usize = 0xB40; // VectorWS
                pub const m_vOriginalSpawnAngles: usize = 0xB4C; // QAngle
                pub const m_bPhysStartAsleep: usize = 0xB58; // bool
            }
            // Parent: CBaseTrigger
            // Field count: 7
            pub mod CTriggerPush {
                pub const m_angPushEntitySpace: usize = 0x9A8; // QAngle
                pub const m_vecPushDirEntitySpace: usize = 0x9B4; // Vector
                pub const m_bTriggerOnStartTouch: usize = 0x9C0; // bool
                pub const m_bUsePathSimple: usize = 0x9C1; // bool
                pub const m_iszPathSimpleName: usize = 0x9C8; // CUtlSymbolLarge
                pub const m_PathSimple: usize = 0x9D0; // CPathSimple*
                pub const m_splinePushType: usize = 0x9D8; // uint32
            }
            // Parent: CBaseAnimGraph
            // Field count: 4
            pub mod CBaseProp {
                pub const m_bModelOverrodeBlockLOS: usize = 0xA90; // bool
                pub const m_iShapeType: usize = 0xA94; // int32
                pub const m_bConformToCollisionBounds: usize = 0xA98; // bool
                pub const m_mPreferredCatchTransform: usize = 0xAA0; // CTransform
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
            pub mod CInfoOffscreenPanoramaTexture {
                pub const m_bDisabled: usize = 0x4F0; // bool
                pub const m_nResolutionX: usize = 0x4F4; // int32
                pub const m_nResolutionY: usize = 0x4F8; // int32
                pub const m_szLayoutFileName: usize = 0x500; // CUtlSymbolLarge
                pub const m_RenderAttrName: usize = 0x508; // CUtlSymbolLarge
                pub const m_TargetEntities: usize = 0x510; // CNetworkUtlVectorBase<CHandle<CBaseModelEntity>>
                pub const m_nTargetChangeCount: usize = 0x528; // int32
                pub const m_vecCSSClasses: usize = 0x530; // CNetworkUtlVectorBase<CUtlSymbolLarge>
                pub const m_szTargetsName: usize = 0x548; // CUtlSymbolLarge
                pub const m_AdditionalTargetEntities: usize = 0x550; // CUtlVector<CHandle<CBaseModelEntity>>
            }
            // Parent: CPointEntity
            // Field count: 16
            pub mod CPointAngularVelocitySensor {
                pub const m_hTargetEntity: usize = 0x4F0; // CHandle<CBaseEntity>
                pub const m_flThreshold: usize = 0x4F4; // float32
                pub const m_nLastCompareResult: usize = 0x4F8; // int32
                pub const m_nLastFireResult: usize = 0x4FC; // int32
                pub const m_flFireTime: usize = 0x500; // GameTime_t
                pub const m_flFireInterval: usize = 0x504; // float32
                pub const m_flLastAngVelocity: usize = 0x508; // float32
                pub const m_lastOrientation: usize = 0x50C; // QAngle
                pub const m_vecAxis: usize = 0x518; // VectorWS
                pub const m_bUseHelper: usize = 0x524; // bool
                pub const m_AngularVelocity: usize = 0x528; // CEntityOutputTemplate<float32>
                pub const m_OnLessThan: usize = 0x550; // CEntityIOOutput
                pub const m_OnLessThanOrEqualTo: usize = 0x578; // CEntityIOOutput
                pub const m_OnGreaterThan: usize = 0x5A0; // CEntityIOOutput
                pub const m_OnGreaterThanOrEqualTo: usize = 0x5C8; // CEntityIOOutput
                pub const m_OnEqualTo: usize = 0x5F0; // CEntityIOOutput
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
            pub mod CPlayerVisibility {
                pub const m_flVisibilityStrength: usize = 0x4F0; // float32
                pub const m_flFogDistanceMultiplier: usize = 0x4F4; // float32
                pub const m_flFogMaxDensityMultiplier: usize = 0x4F8; // float32
                pub const m_flFadeTime: usize = 0x4FC; // float32
                pub const m_bStartDisabled: usize = 0x500; // bool
                pub const m_bIsEnabled: usize = 0x501; // bool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Step_FollowEntity {
                pub const m_ParamBoneOrAttachName: usize = 0x48; // CUtlString
                pub const m_ParamBoneOrAttachNameChild: usize = 0x50; // CUtlString
            }
            // Parent: CBaseCSGrenade
            // Field count: 0
            pub mod CFlashbang {
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
            pub mod CBasePlayerWeapon {
                pub const m_nNextPrimaryAttackTick: usize = 0xE50; // GameTick_t
                pub const m_flNextPrimaryAttackTickRatio: usize = 0xE54; // float32
                pub const m_nNextSecondaryAttackTick: usize = 0xE58; // GameTick_t
                pub const m_flNextSecondaryAttackTickRatio: usize = 0xE5C; // float32
                pub const m_iClip1: usize = 0xE60; // int32
                pub const m_iClip2: usize = 0xE64; // int32
                pub const m_pReserveAmmo: usize = 0xE68; // int32[2]
                pub const m_OnPlayerUse: usize = 0xE70; // CEntityIOOutput
            }
            // Parent: None
            // Field count: 83
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertySuppressBaseClassField
            // MPropertySuppressBaseClassField
            pub mod CCSWeaponBaseVData {
                pub const m_WeaponType: usize = 0x440; // CSWeaponType
                pub const m_WeaponCategory: usize = 0x444; // CSWeaponCategory
                pub const m_szModel_AG2: usize = 0x448; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                pub const m_szAnimSkeleton: usize = 0x528; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCNmSkeleton>>
                pub const m_vecMuzzlePos0: usize = 0x608; // Vector
                pub const m_vecMuzzlePos1: usize = 0x614; // Vector
                pub const m_szTracerParticle: usize = 0x620; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                pub const m_GearSlot: usize = 0x700; // gear_slot_t
                pub const m_GearSlotPosition: usize = 0x704; // int32
                pub const m_DefaultLoadoutSlot: usize = 0x708; // loadout_slot_t
                pub const m_nPrice: usize = 0x70C; // int32
                pub const m_nKillAward: usize = 0x710; // int32
                pub const m_nPrimaryReserveAmmoMax: usize = 0x714; // int32
                pub const m_nSecondaryReserveAmmoMax: usize = 0x718; // int32
                pub const m_bMeleeWeapon: usize = 0x71C; // bool
                pub const m_bHasBurstMode: usize = 0x71D; // bool
                pub const m_bIsRevolver: usize = 0x71E; // bool
                pub const m_bCannotShootUnderwater: usize = 0x71F; // bool
                pub const m_szName: usize = 0x720; // CGlobalSymbol
                pub const m_eSilencerType: usize = 0x728; // CSWeaponSilencerType
                pub const m_nCrosshairMinDistance: usize = 0x72C; // int32
                pub const m_nCrosshairDeltaDistance: usize = 0x730; // int32
                pub const m_bIsFullAuto: usize = 0x734; // bool
                pub const m_nNumBullets: usize = 0x738; // int32
                pub const m_bReloadsSingleShells: usize = 0x73C; // bool
                pub const m_flCycleTime: usize = 0x740; // CFiringModeFloat
                pub const m_flMaxSpeed: usize = 0x748; // CFiringModeFloat
                pub const m_flSpread: usize = 0x750; // CFiringModeFloat
                pub const m_flInaccuracyCrouch: usize = 0x758; // CFiringModeFloat
                pub const m_flInaccuracyStand: usize = 0x760; // CFiringModeFloat
                pub const m_flInaccuracyJump: usize = 0x768; // CFiringModeFloat
                pub const m_flInaccuracyLand: usize = 0x770; // CFiringModeFloat
                pub const m_flInaccuracyLadder: usize = 0x778; // CFiringModeFloat
                pub const m_flInaccuracyFire: usize = 0x780; // CFiringModeFloat
                pub const m_flInaccuracyMove: usize = 0x788; // CFiringModeFloat
                pub const m_flRecoilAngle: usize = 0x790; // CFiringModeFloat
                pub const m_flRecoilAngleVariance: usize = 0x798; // CFiringModeFloat
                pub const m_flRecoilMagnitude: usize = 0x7A0; // CFiringModeFloat
                pub const m_flRecoilMagnitudeVariance: usize = 0x7A8; // CFiringModeFloat
                pub const m_nTracerFrequency: usize = 0x7B0; // CFiringModeInt
                pub const m_flInaccuracyJumpInitial: usize = 0x7B8; // float32
                pub const m_flInaccuracyJumpApex: usize = 0x7BC; // float32
                pub const m_flInaccuracyReload: usize = 0x7C0; // float32
                pub const m_flDeployDuration: usize = 0x7C4; // float32
                pub const m_flDisallowAttackAfterReloadStartDuration: usize = 0x7C8; // float32
                pub const m_nBurstShotCount: usize = 0x7CC; // int32
                pub const m_bAllowBurstHolster: usize = 0x7D0; // bool
                pub const m_nRecoilSeed: usize = 0x7D4; // int32
                pub const m_nSpreadSeed: usize = 0x7D8; // int32
                pub const m_flAttackMovespeedFactor: usize = 0x7DC; // float32
                pub const m_flInaccuracyPitchShift: usize = 0x7E0; // float32
                pub const m_flInaccuracyAltSoundThreshold: usize = 0x7E4; // float32
                pub const m_szUseRadioSubtitle: usize = 0x7E8; // CUtlString
                pub const m_bUnzoomsAfterShot: usize = 0x7F0; // bool
                pub const m_bHideViewModelWhenZoomed: usize = 0x7F1; // bool
                pub const m_nZoomLevels: usize = 0x7F4; // int32
                pub const m_nZoomFOV1: usize = 0x7F8; // int32
                pub const m_nZoomFOV2: usize = 0x7FC; // int32
                pub const m_flZoomTime0: usize = 0x800; // float32
                pub const m_flZoomTime1: usize = 0x804; // float32
                pub const m_flZoomTime2: usize = 0x808; // float32
                pub const m_flIronSightPullUpSpeed: usize = 0x80C; // float32
                pub const m_flIronSightPutDownSpeed: usize = 0x810; // float32
                pub const m_flIronSightFOV: usize = 0x814; // float32
                pub const m_flIronSightPivotForward: usize = 0x818; // float32
                pub const m_flIronSightLooseness: usize = 0x81C; // float32
                pub const m_nDamage: usize = 0x820; // int32
                pub const m_flHeadshotMultiplier: usize = 0x824; // float32
                pub const m_flArmorRatio: usize = 0x828; // float32
                pub const m_flPenetration: usize = 0x82C; // float32
                pub const m_flRange: usize = 0x830; // float32
                pub const m_flRangeModifier: usize = 0x834; // float32
                pub const m_flFlinchVelocityModifierLarge: usize = 0x838; // float32
                pub const m_flFlinchVelocityModifierSmall: usize = 0x83C; // float32
                pub const m_flRecoveryTimeCrouch: usize = 0x840; // float32
                pub const m_flRecoveryTimeStand: usize = 0x844; // float32
                pub const m_flRecoveryTimeCrouchFinal: usize = 0x848; // float32
                pub const m_flRecoveryTimeStandFinal: usize = 0x84C; // float32
                pub const m_nRecoveryTransitionStartBullet: usize = 0x850; // int32
                pub const m_nRecoveryTransitionEndBullet: usize = 0x854; // int32
                pub const m_flThrowVelocity: usize = 0x858; // float32
                pub const m_vSmokeColor: usize = 0x85C; // Vector
                pub const m_szAnimClass: usize = 0x868; // CGlobalSymbol
            }
            // Parent: CPointEntity
            // Field count: 6
            pub mod CPhysForce {
                pub const m_nameAttach: usize = 0x4F8; // CUtlSymbolLarge
                pub const m_force: usize = 0x500; // float32
                pub const m_forceTime: usize = 0x504; // float32
                pub const m_attachedObject: usize = 0x508; // CHandle<CBaseEntity>
                pub const m_wasRestored: usize = 0x50C; // bool
                pub const m_integrator: usize = 0x510; // CConstantForceController
            }
            // Parent: 
            // Field count: 6
            //
            // Metadata:
            // NetworkVarNames: m_iReapplyProvisionParity (int)
            // NetworkVarNames: m_hOuter (EHANDLE)
            // NetworkVarNames: m_ProviderType (attributeprovidertypes_t)
            pub mod CAttributeManager {
                pub const m_Providers: usize = 0x8; // CUtlVector<CHandle<CBaseEntity>>
                pub const m_iReapplyProvisionParity: usize = 0x20; // int32
                pub const m_hOuter: usize = 0x24; // CHandle<CBaseEntity>
                pub const m_bPreventLoopback: usize = 0x28; // bool
                pub const m_ProviderType: usize = 0x2C; // attributeprovidertypes_t
                pub const m_CachedResults: usize = 0x30; // CUtlVector<CAttributeManager::cached_attribute_float_t>
            }
            // Parent: None
            // Field count: 0
            pub mod SignatureOutflow_Continue {
            }
            // Parent: CPointEntity
            // Field count: 0
            pub mod CInfoTarget {
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
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Timeline {
                pub const m_TimelineEvents: usize = 0x48; // CUtlVector<CPulseCell_Timeline::TimelineEvent_t>
                pub const m_bWaitForChildOutflows: usize = 0x60; // bool
                pub const m_OnFinished: usize = 0x68; // CPulse_ResumePoint
                pub const m_OnCanceled: usize = 0xB0; // CPulse_ResumePoint
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Inflow_EntOutputHandler {
                pub const m_SourceEntity: usize = 0x80; // PulseSymbol_t
                pub const m_SourceOutput: usize = 0x90; // PulseSymbol_t
                pub const m_ExpectedParamType: usize = 0xA0; // CPulseValueFullType
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyFriendlyName
            pub mod CPulseFuncs_GameParticleManager {
            }
            // Parent: CBaseFilter
            // Field count: 1
            pub mod CFilterAttributeInt {
                pub const m_sAttributeName: usize = 0x548; // CUtlSymbolLarge
            }
            // Parent: CPointEntity
            // Field count: 7
            pub mod CKeepUpright {
                pub const m_worldGoalAxis: usize = 0x4F8; // Vector
                pub const m_localTestAxis: usize = 0x504; // Vector
                pub const m_nameAttach: usize = 0x518; // CUtlSymbolLarge
                pub const m_attachedObject: usize = 0x520; // CHandle<CBaseEntity>
                pub const m_angularLimit: usize = 0x524; // float32
                pub const m_bActive: usize = 0x528; // bool
                pub const m_bDampAllRotation: usize = 0x529; // bool
            }
            // Parent: CLogicalEntity
            // Field count: 11
            pub mod CPointTemplate {
                pub const m_iszWorldName: usize = 0x4F0; // CUtlSymbolLarge
                pub const m_iszSource2EntityLumpName: usize = 0x4F8; // CUtlSymbolLarge
                pub const m_iszEntityFilterName: usize = 0x500; // CUtlSymbolLarge
                pub const m_flTimeoutInterval: usize = 0x508; // float32
                pub const m_bAsynchronouslySpawnEntities: usize = 0x50C; // bool
                pub const m_clientOnlyEntityBehavior: usize = 0x510; // PointTemplateClientOnlyEntityBehavior_t
                pub const m_ownerSpawnGroupType: usize = 0x514; // PointTemplateOwnerSpawnGroupType_t
                pub const m_createdSpawnGroupHandles: usize = 0x518; // CUtlVector<uint32>
                pub const m_SpawnedEntityHandles: usize = 0x530; // CUtlVector<CEntityHandle>
                pub const m_ScriptSpawnCallback: usize = 0x548; // HSCRIPT
                pub const m_ScriptCallbackScope: usize = 0x550; // HSCRIPT
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
            pub mod CEnvVolumetricFogController {
                pub const m_flScattering: usize = 0x4F0; // float32
                pub const m_TintColor: usize = 0x4F4; // Color
                pub const m_flAnisotropy: usize = 0x4F8; // float32
                pub const m_flFadeSpeed: usize = 0x4FC; // float32
                pub const m_flDrawDistance: usize = 0x500; // float32
                pub const m_flFadeInStart: usize = 0x504; // float32
                pub const m_flFadeInEnd: usize = 0x508; // float32
                pub const m_flIndirectStrength: usize = 0x50C; // float32
                pub const m_nVolumeDepth: usize = 0x510; // int32
                pub const m_fFirstVolumeSliceThickness: usize = 0x514; // float32
                pub const m_nIndirectTextureDimX: usize = 0x518; // int32
                pub const m_nIndirectTextureDimY: usize = 0x51C; // int32
                pub const m_nIndirectTextureDimZ: usize = 0x520; // int32
                pub const m_vBoxMins: usize = 0x524; // Vector
                pub const m_vBoxMaxs: usize = 0x530; // Vector
                pub const m_bActive: usize = 0x53C; // bool
                pub const m_flStartAnisoTime: usize = 0x540; // GameTime_t
                pub const m_flStartScatterTime: usize = 0x544; // GameTime_t
                pub const m_flStartDrawDistanceTime: usize = 0x548; // GameTime_t
                pub const m_flStartAnisotropy: usize = 0x54C; // float32
                pub const m_flStartScattering: usize = 0x550; // float32
                pub const m_flStartDrawDistance: usize = 0x554; // float32
                pub const m_flDefaultAnisotropy: usize = 0x558; // float32
                pub const m_flDefaultScattering: usize = 0x55C; // float32
                pub const m_flDefaultDrawDistance: usize = 0x560; // float32
                pub const m_bStartDisabled: usize = 0x564; // bool
                pub const m_bEnableIndirect: usize = 0x565; // bool
                pub const m_bIsMaster: usize = 0x566; // bool
                pub const m_hFogIndirectTexture: usize = 0x568; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_nForceRefreshCount: usize = 0x570; // int32
                pub const m_fNoiseSpeed: usize = 0x574; // float32
                pub const m_fNoiseStrength: usize = 0x578; // float32
                pub const m_vNoiseScale: usize = 0x57C; // Vector
                pub const m_fWindSpeed: usize = 0x588; // float32
                pub const m_vWindDirection: usize = 0x58C; // Vector
                pub const m_bFirstTime: usize = 0x598; // bool
            }
            // Parent: 
            // Field count: 13
            pub mod CBot {
                pub const m_pController: usize = 0x10; // CCSPlayerController*
                pub const m_pPlayer: usize = 0x18; // CCSPlayerPawn*
                pub const m_bHasSpawned: usize = 0x20; // bool
                pub const m_id: usize = 0x24; // uint32
                pub const m_isRunning: usize = 0xC0; // bool
                pub const m_isCrouching: usize = 0xC1; // bool
                pub const m_forwardSpeed: usize = 0xC4; // float32
                pub const m_leftSpeed: usize = 0xC8; // float32
                pub const m_verticalSpeed: usize = 0xCC; // float32
                pub const m_buttonFlags: usize = 0xD0; // uint64
                pub const m_jumpTimestamp: usize = 0xD8; // float32
                pub const m_viewForward: usize = 0xDC; // Vector
                pub const m_postureStackIndex: usize = 0xF8; // int32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Step_SetAnimGraphParam {
                pub const m_ParamName: usize = 0x48; // CUtlString
            }
            // Parent: CPlayerPawnComponent
            // Field count: 0
            pub mod CPlayer_FlashlightServices {
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
            pub mod CCSPlayerController {
                pub const m_pInGameMoneyServices: usize = 0x820; // CCSPlayerController_InGameMoneyServices*
                pub const m_pInventoryServices: usize = 0x828; // CCSPlayerController_InventoryServices*
                pub const m_pActionTrackingServices: usize = 0x830; // CCSPlayerController_ActionTrackingServices*
                pub const m_pDamageServices: usize = 0x838; // CCSPlayerController_DamageServices*
                pub const m_iPing: usize = 0x840; // uint32
                pub const m_bHasCommunicationAbuseMute: usize = 0x844; // bool
                pub const m_uiCommunicationMuteFlags: usize = 0x848; // uint32
                pub const m_szCrosshairCodes: usize = 0x850; // CUtlSymbolLarge
                pub const m_iPendingTeamNum: usize = 0x858; // uint8
                pub const m_flForceTeamTime: usize = 0x85C; // GameTime_t
                pub const m_iCompTeammateColor: usize = 0x860; // int32
                pub const m_bEverPlayedOnTeam: usize = 0x864; // bool
                pub const m_bAttemptedToGetColor: usize = 0x865; // bool
                pub const m_iTeammatePreferredColor: usize = 0x868; // int32
                pub const m_bTeamChanged: usize = 0x86C; // bool
                pub const m_bInSwitchTeam: usize = 0x86D; // bool
                pub const m_bHasSeenJoinGame: usize = 0x86E; // bool
                pub const m_bJustBecameSpectator: usize = 0x86F; // bool
                pub const m_bSwitchTeamsOnNextRoundReset: usize = 0x870; // bool
                pub const m_bRemoveAllItemsOnNextRoundReset: usize = 0x871; // bool
                pub const m_flLastJoinTeamTime: usize = 0x874; // GameTime_t
                pub const m_szClan: usize = 0x878; // CUtlSymbolLarge
                pub const m_iCoachingTeam: usize = 0x880; // int32
                pub const m_nPlayerDominated: usize = 0x888; // uint64
                pub const m_nPlayerDominatingMe: usize = 0x890; // uint64
                pub const m_iCompetitiveRanking: usize = 0x898; // int32
                pub const m_iCompetitiveWins: usize = 0x89C; // int32
                pub const m_iCompetitiveRankType: usize = 0x8A0; // int8
                pub const m_iCompetitiveRankingPredicted_Win: usize = 0x8A4; // int32
                pub const m_iCompetitiveRankingPredicted_Loss: usize = 0x8A8; // int32
                pub const m_iCompetitiveRankingPredicted_Tie: usize = 0x8AC; // int32
                pub const m_nEndMatchNextMapVote: usize = 0x8B0; // int32
                pub const m_unActiveQuestId: usize = 0x8B4; // uint16
                pub const m_rtActiveMissionPeriod: usize = 0x8B8; // uint32
                pub const m_nQuestProgressReason: usize = 0x8BC; // QuestProgress::Reason
                pub const m_unPlayerTvControlFlags: usize = 0x8C0; // uint32
                pub const m_iDraftIndex: usize = 0x8F0; // int32
                pub const m_msQueuedModeDisconnectionTimestamp: usize = 0x8F4; // uint32
                pub const m_uiAbandonRecordedReason: usize = 0x8F8; // uint32
                pub const m_eNetworkDisconnectionReason: usize = 0x8FC; // uint32
                pub const m_bCannotBeKicked: usize = 0x900; // bool
                pub const m_bEverFullyConnected: usize = 0x901; // bool
                pub const m_bAbandonAllowsSurrender: usize = 0x902; // bool
                pub const m_bAbandonOffersInstantSurrender: usize = 0x903; // bool
                pub const m_bDisconnection1MinWarningPrinted: usize = 0x904; // bool
                pub const m_bScoreReported: usize = 0x905; // bool
                pub const m_nDisconnectionTick: usize = 0x908; // int32
                pub const m_bControllingBot: usize = 0x918; // bool
                pub const m_bHasControlledBotThisRound: usize = 0x919; // bool
                pub const m_bHasBeenControlledByPlayerThisRound: usize = 0x91A; // bool
                pub const m_nBotsControlledThisRound: usize = 0x91C; // int32
                pub const m_bCanControlObservedBot: usize = 0x920; // bool
                pub const m_hPlayerPawn: usize = 0x924; // CHandle<CCSPlayerPawn>
                pub const m_hObserverPawn: usize = 0x928; // CHandle<CCSObserverPawn>
                pub const m_DesiredObserverMode: usize = 0x92C; // int32
                pub const m_hDesiredObserverTarget: usize = 0x930; // CEntityHandle
                pub const m_bPawnIsAlive: usize = 0x934; // bool
                pub const m_iPawnHealth: usize = 0x938; // uint32
                pub const m_iPawnArmor: usize = 0x93C; // int32
                pub const m_bPawnHasDefuser: usize = 0x940; // bool
                pub const m_bPawnHasHelmet: usize = 0x941; // bool
                pub const m_nPawnCharacterDefIndex: usize = 0x942; // uint16
                pub const m_iPawnLifetimeStart: usize = 0x944; // int32
                pub const m_iPawnLifetimeEnd: usize = 0x948; // int32
                pub const m_iPawnBotDifficulty: usize = 0x94C; // int32
                pub const m_hOriginalControllerOfCurrentPawn: usize = 0x950; // CHandle<CCSPlayerController>
                pub const m_iScore: usize = 0x954; // int32
                pub const m_iRoundScore: usize = 0x958; // int32
                pub const m_iRoundsWon: usize = 0x95C; // int32
                pub const m_recentKillQueue: usize = 0x960; // uint8[8]
                pub const m_nFirstKill: usize = 0x968; // uint8
                pub const m_nKillCount: usize = 0x969; // uint8
                pub const m_bMvpNoMusic: usize = 0x96A; // bool
                pub const m_eMvpReason: usize = 0x96C; // int32
                pub const m_iMusicKitID: usize = 0x970; // int32
                pub const m_iMusicKitMVPs: usize = 0x974; // int32
                pub const m_iMVPs: usize = 0x978; // int32
                pub const m_nUpdateCounter: usize = 0x97C; // int32
                pub const m_flSmoothedPing: usize = 0x980; // float32
                pub const m_lastHeldVoteTimer: usize = 0x988; // IntervalTimer
                pub const m_bShowHints: usize = 0x9A0; // bool
                pub const m_iNextTimeCheck: usize = 0x9A4; // int32
                pub const m_bJustDidTeamKill: usize = 0x9A8; // bool
                pub const m_bPunishForTeamKill: usize = 0x9A9; // bool
                pub const m_bGaveTeamDamageWarning: usize = 0x9AA; // bool
                pub const m_bGaveTeamDamageWarningThisRound: usize = 0x9AB; // bool
                pub const m_dblLastReceivedPacketPlatFloatTime: usize = 0x9B0; // float64
                pub const m_LastTeamDamageWarningTime: usize = 0x9B8; // GameTime_t
                pub const m_LastTimePlayerWasDisconnectedForPawnsRemove: usize = 0x9BC; // GameTime_t
                pub const m_nSuspiciousHitCount: usize = 0x9C0; // uint32
                pub const m_nNonSuspiciousHitStreak: usize = 0x9C4; // uint32
                pub const m_bFireBulletsSeedSynchronized: usize = 0xA69; // bool
            }
            // Parent: CPhysConstraint
            // Field count: 6
            pub mod CPhysLength {
                pub const m_offset: usize = 0x560; // Vector[2]
                pub const m_vecAttach: usize = 0x578; // VectorWS
                pub const m_addLength: usize = 0x584; // float32
                pub const m_minLength: usize = 0x588; // float32
                pub const m_totalLength: usize = 0x58C; // float32
                pub const m_bEnableCollision: usize = 0x590; // bool
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
            pub mod CTeam {
                pub const m_aPlayerControllers: usize = 0x4F0; // CNetworkUtlVectorBase<CHandle<CBasePlayerController>>
                pub const m_aPlayers: usize = 0x508; // CNetworkUtlVectorBase<CHandle<CBasePlayerPawn>>
                pub const m_iScore: usize = 0x520; // int32
                pub const m_szTeamname: usize = 0x524; // char[129]
            }
            // Parent: CLogicNPCCounter
            // Field count: 4
            pub mod CLogicNPCCounterAABB {
                pub const m_vDistanceOuterMins: usize = 0x830; // Vector
                pub const m_vDistanceOuterMaxs: usize = 0x83C; // Vector
                pub const m_vOuterMins: usize = 0x848; // Vector
                pub const m_vOuterMaxs: usize = 0x854; // Vector
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Outflow_CycleOrdered__InstanceState_t {
                pub const m_nNextIndex: usize = 0x0; // int32
            }
            // Parent: CDynamicProp
            // Field count: 28
            //
            // Metadata:
            // NetworkVarNames: m_AttributeManager (CAttributeContainer)
            // NetworkVarNames: m_jumpedThisFrame (bool)
            // NetworkVarNames: m_leader (CHandle<CCSPlayerPawn>)
            pub mod CChicken {
                pub const m_AttributeManager: usize = 0xD70; // CAttributeContainer
                pub const m_updateTimer: usize = 0x1068; // CountdownTimer
                pub const m_stuckAnchor: usize = 0x1080; // Vector
                pub const m_stuckTimer: usize = 0x1090; // CountdownTimer
                pub const m_collisionStuckTimer: usize = 0x10A8; // CountdownTimer
                pub const m_isOnGround: usize = 0x10C0; // bool
                pub const m_vFallVelocity: usize = 0x10C4; // Vector
                pub const m_desiredActivity: usize = 0x10D0; // ChickenActivity
                pub const m_currentActivity: usize = 0x10D4; // ChickenActivity
                pub const m_activityTimer: usize = 0x10D8; // CountdownTimer
                pub const m_turnRate: usize = 0x10F0; // float32
                pub const m_fleeFrom: usize = 0x10F4; // CHandle<CBaseEntity>
                pub const m_moveRateThrottleTimer: usize = 0x10F8; // CountdownTimer
                pub const m_startleTimer: usize = 0x1110; // CountdownTimer
                pub const m_vocalizeTimer: usize = 0x1128; // CountdownTimer
                pub const m_flWhenZombified: usize = 0x1140; // GameTime_t
                pub const m_jumpedThisFrame: usize = 0x1144; // bool
                pub const m_leader: usize = 0x1148; // CHandle<CCSPlayerPawn>
                pub const m_reuseTimer: usize = 0x1160; // CountdownTimer
                pub const m_hasBeenUsed: usize = 0x1178; // bool
                pub const m_jumpTimer: usize = 0x1180; // CountdownTimer
                pub const m_flLastJumpTime: usize = 0x1198; // float32
                pub const m_bInJump: usize = 0x119C; // bool
                pub const m_repathTimer: usize = 0x31A8; // CountdownTimer
                pub const m_vecPathGoal: usize = 0x3240; // Vector
                pub const m_flActiveFollowStartTime: usize = 0x324C; // GameTime_t
                pub const m_followMinuteTimer: usize = 0x3250; // CountdownTimer
                pub const m_BlockDirectionTimer: usize = 0x3270; // CountdownTimer
            }
            // Parent: CPhysicsProp
            // Field count: 5
            pub mod CPhysicsPropRespawnable {
                pub const m_vOriginalSpawnOrigin: usize = 0xE00; // VectorWS
                pub const m_vOriginalSpawnAngles: usize = 0xE0C; // QAngle
                pub const m_vOriginalMins: usize = 0xE18; // Vector
                pub const m_vOriginalMaxs: usize = 0xE24; // Vector
                pub const m_flRespawnDuration: usize = 0xE30; // float32
            }
            // Parent: CBeam
            // Field count: 19
            pub mod CEnvBeam {
                pub const m_active: usize = 0x878; // int32
                pub const m_spriteTexture: usize = 0x880; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_iszStartEntity: usize = 0x888; // CUtlSymbolLarge
                pub const m_iszEndEntity: usize = 0x890; // CUtlSymbolLarge
                pub const m_life: usize = 0x898; // float32
                pub const m_boltWidth: usize = 0x89C; // float32
                pub const m_noiseAmplitude: usize = 0x8A0; // float32
                pub const m_speed: usize = 0x8A4; // int32
                pub const m_restrike: usize = 0x8A8; // float32
                pub const m_iszSpriteName: usize = 0x8B0; // CUtlSymbolLarge
                pub const m_frameStart: usize = 0x8B8; // int32
                pub const m_vEndPointWorld: usize = 0x8BC; // VectorWS
                pub const m_vEndPointRelative: usize = 0x8C8; // Vector
                pub const m_radius: usize = 0x8D4; // float32
                pub const m_TouchType: usize = 0x8D8; // Touch_t
                pub const m_iFilterName: usize = 0x8E0; // CUtlSymbolLarge
                pub const m_hFilter: usize = 0x8E8; // CHandle<CBaseEntity>
                pub const m_iszDecal: usize = 0x8F0; // CUtlSymbolLarge
                pub const m_OnTouchedByEntity: usize = 0x8F8; // CEntityIOOutput
            }
            // Parent: CLightEntity
            // Field count: 0
            pub mod CLightSpotEntity {
            }
            // Parent: CCSWeaponBaseShotgun
            // Field count: 0
            pub mod CWeaponSawedoff {
            }
            // Parent: CBaseTrigger
            // Field count: 2
            pub mod CTonemapTrigger {
                pub const m_tonemapControllerName: usize = 0x9A8; // CUtlSymbolLarge
                pub const m_hTonemapController: usize = 0x9B0; // CEntityHandle
            }
            // Parent: CPointEntity
            // Field count: 10
            pub mod CEnvShake {
                pub const m_limitToEntity: usize = 0x4F0; // CUtlSymbolLarge
                pub const m_Amplitude: usize = 0x4F8; // float32
                pub const m_Frequency: usize = 0x4FC; // float32
                pub const m_Duration: usize = 0x500; // float32
                pub const m_Radius: usize = 0x504; // float32
                pub const m_stopTime: usize = 0x508; // GameTime_t
                pub const m_nextShake: usize = 0x50C; // GameTime_t
                pub const m_currentAmp: usize = 0x510; // float32
                pub const m_maxForce: usize = 0x514; // Vector
                pub const m_shakeCallback: usize = 0x528; // CPhysicsShake
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
            pub mod CCSPlayer_MovementServices {
                pub const m_vecLadderNormal: usize = 0x280; // Vector
                pub const m_nLadderSurfacePropIndex: usize = 0x28C; // int32
                pub const m_flDuckAmount: usize = 0x290; // float32
                pub const m_flDuckSpeed: usize = 0x294; // float32
                pub const m_bDuckOverride: usize = 0x298; // bool
                pub const m_bDesiresDuck: usize = 0x299; // bool
                pub const m_flDuckOffset: usize = 0x29C; // float32
                pub const m_nDuckTimeMsecs: usize = 0x2A0; // uint32
                pub const m_nDuckJumpTimeMsecs: usize = 0x2A4; // uint32
                pub const m_nJumpTimeMsecs: usize = 0x2A8; // uint32
                pub const m_flLastDuckTime: usize = 0x2AC; // float32
                pub const m_vecLastPositionAtFullCrouchSpeed: usize = 0x2B8; // Vector2D
                pub const m_duckUntilOnGround: usize = 0x2C0; // bool
                pub const m_bHasWalkMovedSinceLastJump: usize = 0x2C1; // bool
                pub const m_bInStuckTest: usize = 0x2C2; // bool
                pub const m_nTraceCount: usize = 0x4D0; // int32
                pub const m_StuckLast: usize = 0x4D4; // int32
                pub const m_bSpeedCropped: usize = 0x4D8; // bool
                pub const m_nOldWaterLevel: usize = 0x4DC; // int32
                pub const m_flWaterEntryTime: usize = 0x4E0; // float32
                pub const m_vecForward: usize = 0x4E4; // Vector
                pub const m_vecLeft: usize = 0x4F0; // Vector
                pub const m_vecUp: usize = 0x4FC; // Vector
                pub const m_nGameCodeHasMovedPlayerAfterCommand: usize = 0x508; // int32
                pub const m_bMadeFootstepNoise: usize = 0x50C; // bool
                pub const m_iFootsteps: usize = 0x510; // int32
                pub const m_bOldJumpPressed: usize = 0x514; // bool
                pub const m_flJumpPressedTime: usize = 0x518; // float32
                pub const m_fStashGrenadeParameterWhen: usize = 0x51C; // GameTime_t
                pub const m_nButtonDownMaskPrev: usize = 0x520; // uint64
                pub const m_flOffsetTickCompleteTime: usize = 0x528; // float32
                pub const m_flOffsetTickStashedSpeed: usize = 0x52C; // float32
                pub const m_flStamina: usize = 0x530; // float32
                pub const m_flHeightAtJumpStart: usize = 0x534; // float32
                pub const m_flMaxJumpHeightThisJump: usize = 0x538; // float32
                pub const m_flMaxJumpHeightLastJump: usize = 0x53C; // float32
                pub const m_flStaminaAtJumpStart: usize = 0x540; // float32
                pub const m_flAccumulatedJumpError: usize = 0x544; // float32
                pub const m_flTicksSinceLastSurfingDetected: usize = 0x548; // float32
                pub const m_bWasSurfing: usize = 0x54C; // bool
                pub const m_vecInputRotated: usize = 0x5DC; // Vector
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
            pub mod SellbackPurchaseEntry_t {
                pub const m_unDefIdx: usize = 0x30; // uint16
                pub const m_nCost: usize = 0x34; // int32
                pub const m_nPrevArmor: usize = 0x38; // int32
                pub const m_bPrevHelmet: usize = 0x3C; // bool
                pub const m_hItem: usize = 0x40; // CEntityHandle
            }
            // Parent: CBaseTrigger
            // Field count: 0
            pub mod CTriggerCallback {
            }
            // Parent: CSoundOpvarSetPointEntity
            // Field count: 5
            pub mod CSoundOpvarSetAutoRoomEntity {
                pub const m_traceResults: usize = 0x6A8; // CUtlVector<SoundOpvarTraceResult_t>
                pub const m_doorwayPairs: usize = 0x6C0; // CUtlVector<AutoRoomDoorwayPairs_t>
                pub const m_flSize: usize = 0x6D8; // float32
                pub const m_flHeightTolerance: usize = 0x6DC; // float32
                pub const m_flSizeSqr: usize = 0x6E0; // float32
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
            pub mod CPulseCell_Outflow_ListenForEntityOutput {
                pub const m_OnFired: usize = 0x48; // SignatureOutflow_Resume
                pub const m_OnCanceled: usize = 0x90; // CPulse_ResumePoint
                pub const m_strEntityOutput: usize = 0xD8; // CGlobalSymbol
                pub const m_strEntityOutputParam: usize = 0xE0; // CUtlString
                pub const m_bListenUntilCanceled: usize = 0xE8; // bool
            }
            // Parent: CBreakable
            // Field count: 0
            pub mod CPushable {
            }
            // Parent: CPointEntity
            // Field count: 2
            pub mod CRotatorTarget {
                pub const m_OnArrivedAt: usize = 0x4F0; // CEntityIOOutput
                pub const m_eSpace: usize = 0x518; // RotatorTargetSpace_t
            }
            // Parent: CLogicalEntity
            // Field count: 4
            pub mod CPhysicsEntitySolver {
                pub const m_hMovingEntity: usize = 0x508; // CHandle<CBaseEntity>
                pub const m_hPhysicsBlocker: usize = 0x50C; // CHandle<CBaseEntity>
                pub const m_separationDuration: usize = 0x510; // float32
                pub const m_cancelTime: usize = 0x514; // GameTime_t
            }
            // Parent: CLogicalEntity
            // Field count: 6
            pub mod CLogicCollisionPair {
                pub const m_nameAttach1: usize = 0x4F0; // CUtlSymbolLarge
                pub const m_nameAttach2: usize = 0x4F8; // CUtlSymbolLarge
                pub const m_includeHierarchy: usize = 0x500; // bool
                pub const m_supportMultipleEntitiesWithSameName: usize = 0x501; // bool
                pub const m_disabled: usize = 0x502; // bool
                pub const m_succeeded: usize = 0x503; // bool
            }
            // Parent: CBaseEntity
            // Field count: 5
            pub mod CTestEffect {
                pub const m_iLoop: usize = 0x4F0; // int32
                pub const m_iBeam: usize = 0x4F4; // int32
                pub const m_pBeam: usize = 0x4F8; // CBeam*[24]
                pub const m_flBeamTime: usize = 0x5B8; // GameTime_t[24]
                pub const m_flStartTime: usize = 0x618; // GameTime_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Outflow_ScriptedSequence__CursorState_t {
                pub const m_scriptedSequence: usize = 0x0; // CHandle<CBaseEntity>
            }
            // Parent: CBasePropDoor
            // Field count: 17
            pub mod CPropDoorRotating {
                pub const m_vecAxis: usize = 0xFF0; // Vector
                pub const m_flDistance: usize = 0xFFC; // float32
                pub const m_eSpawnPosition: usize = 0x1000; // PropDoorRotatingSpawnPos_t
                pub const m_eOpenDirection: usize = 0x1004; // PropDoorRotatingOpenDirection_e
                pub const m_eCurrentOpenDirection: usize = 0x1008; // PropDoorRotatingOpenDirection_e
                pub const m_flAjarAngle: usize = 0x100C; // float32
                pub const m_angRotationAjarDeprecated: usize = 0x1010; // QAngle
                pub const m_angRotationClosed: usize = 0x101C; // QAngle
                pub const m_angRotationOpenForward: usize = 0x1028; // QAngle
                pub const m_angRotationOpenBack: usize = 0x1034; // QAngle
                pub const m_angGoal: usize = 0x1040; // QAngle
                pub const m_vecForwardBoundsMin: usize = 0x104C; // Vector
                pub const m_vecForwardBoundsMax: usize = 0x1058; // Vector
                pub const m_vecBackBoundsMin: usize = 0x1064; // Vector
                pub const m_vecBackBoundsMax: usize = 0x1070; // Vector
                pub const m_bAjarDoorShouldntAlwaysOpen: usize = 0x107C; // bool
                pub const m_hEntityBlocker: usize = 0x1080; // CHandle<CEntityBlocker>
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
            pub mod CEnvParticleGlow {
                pub const m_flAlphaScale: usize = 0xD50; // float32
                pub const m_flRadiusScale: usize = 0xD54; // float32
                pub const m_flSelfIllumScale: usize = 0xD58; // float32
                pub const m_ColorTint: usize = 0xD5C; // Color
                pub const m_hTextureOverride: usize = 0xD60; // CStrongHandle<InfoForResourceTypeCTextureBase>
            }
            // Parent: CLogicalEntity
            // Field count: 11
            pub mod CMathRemap {
                pub const m_flInMin: usize = 0x4F0; // float32
                pub const m_flInMax: usize = 0x4F4; // float32
                pub const m_flOut1: usize = 0x4F8; // float32
                pub const m_flOut2: usize = 0x4FC; // float32
                pub const m_flOldInValue: usize = 0x500; // float32
                pub const m_bEnabled: usize = 0x504; // bool
                pub const m_OutValue: usize = 0x508; // CEntityOutputTemplate<float32>
                pub const m_OnRoseAboveMin: usize = 0x530; // CEntityIOOutput
                pub const m_OnRoseAboveMax: usize = 0x558; // CEntityIOOutput
                pub const m_OnFellBelowMin: usize = 0x580; // CEntityIOOutput
                pub const m_OnFellBelowMax: usize = 0x5A8; // CEntityIOOutput
            }
            // Parent: CSoundOpvarSetPointBase
            // Field count: 8
            pub mod CSoundOpvarSetOBBWindEntity {
                pub const m_vMins: usize = 0x598; // Vector
                pub const m_vMaxs: usize = 0x5A4; // Vector
                pub const m_vDistanceMins: usize = 0x5B0; // Vector
                pub const m_vDistanceMaxs: usize = 0x5BC; // Vector
                pub const m_flWindMin: usize = 0x5C8; // float32
                pub const m_flWindMax: usize = 0x5CC; // float32
                pub const m_flWindMapMin: usize = 0x5D0; // float32
                pub const m_flWindMapMax: usize = 0x5D4; // float32
            }
            // Parent: 
            // Field count: 3
            //
            // Metadata:
            // NetworkVarNames: m_Transforms (CTransform)
            // NetworkVarNames: m_hOwner (EHANDLE)
            pub mod PhysicsRagdollPose_t {
                pub const m_Transforms: usize = 0x8; // CNetworkUtlVectorBase<CTransform>
                pub const m_hOwner: usize = 0x20; // CHandle<CBaseEntity>
                pub const m_bSetFromDebugHistory: usize = 0x24; // bool
            }
            // Parent: CEntityComponent
            // Field count: 10
            pub mod CPropDataComponent {
                pub const m_flDmgModBullet: usize = 0x10; // float32
                pub const m_flDmgModClub: usize = 0x14; // float32
                pub const m_flDmgModExplosive: usize = 0x18; // float32
                pub const m_flDmgModFire: usize = 0x1C; // float32
                pub const m_iszPhysicsDamageTableName: usize = 0x20; // CUtlSymbolLarge
                pub const m_iszBasePropData: usize = 0x28; // CUtlSymbolLarge
                pub const m_nInteractions: usize = 0x30; // int32
                pub const m_bSpawnMotionDisabled: usize = 0x34; // bool
                pub const m_nDisableTakePhysicsDamageSpawnFlag: usize = 0x38; // int32
                pub const m_nMotionDisabledSpawnFlag: usize = 0x3C; // int32
            }
            // Parent: CTriggerOnce
            // Field count: 1
            pub mod CScriptTriggerOnce {
                pub const m_vExtent: usize = 0x9D0; // Vector
            }
            // Parent: CLightEntity
            // Field count: 0
            pub mod CLightOrthoEntity {
            }
            // Parent: CPointEntity
            // Field count: 0
            pub mod CInfoInstructorHintHostageRescueZone {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_LimitCount__InstanceState_t {
                pub const m_nCurrentCount: usize = 0x0; // int32
            }
            // Parent: CBaseTrigger
            // Field count: 4
            pub mod CTriggerTeleport {
                pub const m_iLandmark: usize = 0x9A8; // CUtlSymbolLarge
                pub const m_bUseLandmarkAngles: usize = 0x9B0; // bool
                pub const m_bMirrorPlayer: usize = 0x9B1; // bool
                pub const m_bCheckDestIfClearForPlayer: usize = 0x9B2; // bool
            }
            // Parent: CBaseModelEntity
            // Field count: 1
            pub mod CFuncWall {
                pub const m_nState: usize = 0x7D8; // int32
            }
            // Parent: None
            // Field count: 12
            pub mod CBtActionAim {
                pub const m_szSensorInputKey: usize = 0x68; // CUtlString
                pub const m_szAimReadyKey: usize = 0x80; // CUtlString
                pub const m_flZoomCooldownTimestamp: usize = 0x88; // float32
                pub const m_bDoneAiming: usize = 0x8C; // bool
                pub const m_flLerpStartTime: usize = 0x90; // float32
                pub const m_flNextLookTargetLerpTime: usize = 0x94; // float32
                pub const m_flPenaltyReductionRatio: usize = 0x98; // float32
                pub const m_NextLookTarget: usize = 0x9C; // QAngle
                pub const m_AimTimer: usize = 0xA8; // CountdownTimer
                pub const m_SniperHoldTimer: usize = 0xC0; // CountdownTimer
                pub const m_FocusIntervalTimer: usize = 0xD8; // CountdownTimer
                pub const m_bAcquired: usize = 0xF0; // bool
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
            pub mod CCSGO_TeamPreviewCharacterPosition {
                pub const m_nVariant: usize = 0x4F0; // int32
                pub const m_nRandom: usize = 0x4F4; // int32
                pub const m_nOrdinal: usize = 0x4F8; // int32
                pub const m_sWeaponName: usize = 0x500; // CUtlString
                pub const m_xuid: usize = 0x508; // uint64
                pub const m_agentItem: usize = 0x510; // CEconItemView
                pub const m_glovesItem: usize = 0x7B8; // CEconItemView
                pub const m_weaponItem: usize = 0xA60; // CEconItemView
            }
            // Parent: CBaseEntity
            // Field count: 0
            pub mod CGameRulesProxy {
            }
            // Parent: CBaseEntity
            // Field count: 0
            pub mod CInfoLadderDismount {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CPulseServerFuncs {
            }
            // Parent: CPointEntity
            // Field count: 6
            pub mod CMessage {
                pub const m_iszMessage: usize = 0x4F0; // CUtlSymbolLarge
                pub const m_MessageVolume: usize = 0x4F8; // float32
                pub const m_MessageAttenuation: usize = 0x4FC; // int32
                pub const m_Radius: usize = 0x500; // float32
                pub const m_sNoise: usize = 0x508; // CUtlSymbolLarge
                pub const m_OnShowMessage: usize = 0x510; // CEntityIOOutput
            }
            // Parent: CPointEntity
            // Field count: 6
            pub mod CPointVelocitySensor {
                pub const m_hTargetEntity: usize = 0x4F0; // CHandle<CBaseEntity>
                pub const m_vecAxis: usize = 0x4F4; // Vector
                pub const m_bEnabled: usize = 0x500; // bool
                pub const m_fPrevVelocity: usize = 0x504; // float32
                pub const m_flAvgInterval: usize = 0x508; // float32
                pub const m_Velocity: usize = 0x510; // CEntityOutputTemplate<float32>
            }
            // Parent: 
            // Field count: 3
            //
            // Metadata:
            // NetworkVarNames: m_duration (float32)
            // NetworkVarNames: m_timestamp (float32)
            // NetworkVarNames: m_timescale (float32)
            pub mod EngineCountdownTimer {
                pub const m_duration: usize = 0x8; // float32
                pub const m_timestamp: usize = 0xC; // float32
                pub const m_timescale: usize = 0x10; // float32
            }
            // Parent: None
            // Field count: 0
            pub mod CBaseModelEntityAPI {
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
            pub mod CHostage {
                pub const m_OnHostageBeginGrab: usize = 0xC08; // CEntityIOOutput
                pub const m_OnFirstPickedUp: usize = 0xC30; // CEntityIOOutput
                pub const m_OnDroppedNotRescued: usize = 0xC58; // CEntityIOOutput
                pub const m_OnRescued: usize = 0xC80; // CEntityIOOutput
                pub const m_entitySpottedState: usize = 0xCA8; // EntitySpottedState_t
                pub const m_nSpotRules: usize = 0xCC0; // int32
                pub const m_uiHostageSpawnExclusionGroupMask: usize = 0xCC4; // uint32
                pub const m_nHostageSpawnRandomFactor: usize = 0xCC8; // uint32
                pub const m_bRemove: usize = 0xCCC; // bool
                pub const m_vel: usize = 0xCD0; // Vector
                pub const m_isRescued: usize = 0xCDC; // bool
                pub const m_jumpedThisFrame: usize = 0xCDD; // bool
                pub const m_nHostageState: usize = 0xCE0; // int32
                pub const m_leader: usize = 0xCE4; // CHandle<CBaseEntity>
                pub const m_lastLeader: usize = 0xCE8; // CHandle<CCSPlayerPawnBase>
                pub const m_reuseTimer: usize = 0xCF0; // CountdownTimer
                pub const m_hasBeenUsed: usize = 0xD08; // bool
                pub const m_accel: usize = 0xD0C; // Vector
                pub const m_isRunning: usize = 0xD18; // bool
                pub const m_isCrouching: usize = 0xD19; // bool
                pub const m_jumpTimer: usize = 0xD20; // CountdownTimer
                pub const m_isWaitingForLeader: usize = 0xD38; // bool
                pub const m_repathTimer: usize = 0x2D48; // CountdownTimer
                pub const m_inhibitDoorTimer: usize = 0x2D60; // CountdownTimer
                pub const m_inhibitObstacleAvoidanceTimer: usize = 0x2DF0; // CountdownTimer
                pub const m_wiggleTimer: usize = 0x2E10; // CountdownTimer
                pub const m_isAdjusted: usize = 0x2E2C; // bool
                pub const m_bHandsHaveBeenCut: usize = 0x2E2D; // bool
                pub const m_hHostageGrabber: usize = 0x2E30; // CHandle<CCSPlayerPawn>
                pub const m_fLastGrabTime: usize = 0x2E34; // GameTime_t
                pub const m_vecPositionWhenStartedDroppingToGround: usize = 0x2E38; // Vector
                pub const m_vecGrabbedPos: usize = 0x2E44; // Vector
                pub const m_flRescueStartTime: usize = 0x2E50; // GameTime_t
                pub const m_flGrabSuccessTime: usize = 0x2E54; // GameTime_t
                pub const m_flDropStartTime: usize = 0x2E58; // GameTime_t
                pub const m_nApproachRewardPayouts: usize = 0x2E5C; // int32
                pub const m_nPickupEventCount: usize = 0x2E60; // int32
                pub const m_vecSpawnGroundPos: usize = 0x2E64; // Vector
                pub const m_vecHostageResetPosition: usize = 0x2E9C; // VectorWS
            }
            // Parent: CTriggerMultiple
            // Field count: 1
            pub mod CScriptTriggerMultiple {
                pub const m_vExtent: usize = 0x9D0; // Vector
            }
            // Parent: CPointEntity
            // Field count: 5
            pub mod CEnvSpark {
                pub const m_flDelay: usize = 0x4F0; // float32
                pub const m_nMagnitude: usize = 0x4F4; // int32
                pub const m_nTrailLength: usize = 0x4F8; // int32
                pub const m_nType: usize = 0x4FC; // int32
                pub const m_OnSpark: usize = 0x500; // CEntityIOOutput
            }
            // Parent: CPlayerControllerComponent
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_nSendUpdate (int)
            // NetworkVarNames: m_DamageList (CDamageRecord)
            // MNetworkReplayCompatField
            pub mod CCSPlayerController_DamageServices {
                pub const m_nSendUpdate: usize = 0x40; // int32
                pub const m_DamageList: usize = 0x48; // CUtlVectorEmbeddedNetworkVar<CDamageRecord>
            }
            // Parent: CEnvCombinedLightProbeVolume
            // Field count: 0
            pub mod CEnvCombinedLightProbeVolumeAlias_func_combined_light_probe_volume {
            }
            // Parent: CBaseFilter
            // Field count: 0
            pub mod CFilterLOS {
            }
            // Parent: CBaseEntity
            // Field count: 7
            pub mod CPointOrient {
                pub const m_iszSpawnTargetName: usize = 0x4F0; // CUtlSymbolLarge
                pub const m_hTarget: usize = 0x4F8; // CHandle<CBaseEntity>
                pub const m_bActive: usize = 0x4FC; // bool
                pub const m_nGoalDirection: usize = 0x500; // PointOrientGoalDirectionType_t
                pub const m_nConstraint: usize = 0x504; // PointOrientConstraint_t
                pub const m_flMaxTurnRate: usize = 0x508; // float32
                pub const m_flLastGameTime: usize = 0x50C; // GameTime_t
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
            pub mod sky3dparams_t {
                pub const scale: usize = 0x8; // int16
                pub const origin: usize = 0xC; // Vector
                pub const bClip3DSkyBoxNearToWorldFar: usize = 0x18; // bool
                pub const flClip3DSkyBoxNearToWorldFarOffset: usize = 0x1C; // float32
                pub const fog: usize = 0x20; // fogparams_t
                pub const m_nWorldGroupID: usize = 0x88; // WorldGroupId_t
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            pub mod CWeaponP250 {
            }
            // Parent: 
            // Field count: 4
            //
            // Metadata:
            // NetworkVarNames: m_hOwner (CHandle<CBaseModelEntity>)
            // NetworkVarNames: m_nLastHitDamageLevel (int)
            pub mod CDestructiblePartsComponent {
                pub const __m_pChainEntity: usize = 0x0; // CNetworkVarChainer
                pub const m_vecDamageTakenByHitGroup: usize = 0x48; // CUtlVector<uint16>
                pub const m_hOwner: usize = 0x60; // CHandle<CBaseModelEntity>
                pub const m_nLastHitDamageLevel: usize = 0x64; // int32
            }
            // Parent: CBaseTrigger
            // Field count: 7
            pub mod CChangeLevel {
                pub const m_sMapName: usize = 0x9A8; // CUtlString
                pub const m_sLandmarkName: usize = 0x9B0; // CUtlString
                pub const m_OnChangeLevel: usize = 0x9B8; // CEntityIOOutput
                pub const m_bTouched: usize = 0x9E0; // bool
                pub const m_bNoTouch: usize = 0x9E1; // bool
                pub const m_bNewChapter: usize = 0x9E2; // bool
                pub const m_bOnChangeLevelFired: usize = 0x9E3; // bool
            }
            // Parent: CBaseToggle
            // Field count: 25
            //
            // Metadata:
            // NetworkVarNames: m_glowEntity (CHandle<CBaseModelEntity>)
            // NetworkVarNames: m_usable (bool)
            // NetworkVarNames: m_szDisplayText (string_t)
            pub mod CBaseButton {
                pub const m_angMoveEntitySpace: usize = 0x858; // QAngle
                pub const m_fStayPushed: usize = 0x864; // bool
                pub const m_fRotating: usize = 0x865; // bool
                pub const m_ls: usize = 0x868; // locksound_t
                pub const m_sUseSound: usize = 0x888; // CUtlSymbolLarge
                pub const m_sLockedSound: usize = 0x890; // CUtlSymbolLarge
                pub const m_sUnlockedSound: usize = 0x898; // CUtlSymbolLarge
                pub const m_sOverrideAnticipationName: usize = 0x8A0; // CUtlSymbolLarge
                pub const m_bLocked: usize = 0x8A8; // bool
                pub const m_bDisabled: usize = 0x8A9; // bool
                pub const m_flUseLockedTime: usize = 0x8AC; // GameTime_t
                pub const m_bSolidBsp: usize = 0x8B0; // bool
                pub const m_OnDamaged: usize = 0x8B8; // CEntityIOOutput
                pub const m_OnPressed: usize = 0x8E0; // CEntityIOOutput
                pub const m_OnUseLocked: usize = 0x908; // CEntityIOOutput
                pub const m_OnIn: usize = 0x930; // CEntityIOOutput
                pub const m_OnOut: usize = 0x958; // CEntityIOOutput
                pub const m_nState: usize = 0x980; // int32
                pub const m_hConstraint: usize = 0x984; // CEntityHandle
                pub const m_hConstraintParent: usize = 0x988; // CEntityHandle
                pub const m_bForceNpcExclude: usize = 0x98C; // bool
                pub const m_sGlowEntity: usize = 0x990; // CUtlSymbolLarge
                pub const m_glowEntity: usize = 0x998; // CHandle<CBaseModelEntity>
                pub const m_usable: usize = 0x99C; // bool
                pub const m_szDisplayText: usize = 0x9A0; // CUtlSymbolLarge
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CPulseCell_SoundEventStart {
                pub const m_Type: usize = 0x48; // SoundEventStartType_t
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Step_DebugLog {
            }
            // Parent: CWeaponBaseItem
            // Field count: 0
            pub mod CItem_Healthshot {
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
            pub mod CBaseGrenade {
                pub const m_OnPlayerPickup: usize = 0xB28; // CEntityIOOutput
                pub const m_OnExplode: usize = 0xB50; // CEntityIOOutput
                pub const m_bHasWarnedAI: usize = 0xB78; // bool
                pub const m_bIsSmokeGrenade: usize = 0xB79; // bool
                pub const m_bIsLive: usize = 0xB7A; // bool
                pub const m_DmgRadius: usize = 0xB7C; // float32
                pub const m_flDetonateTime: usize = 0xB80; // GameTime_t
                pub const m_flWarnAITime: usize = 0xB84; // float32
                pub const m_flDamage: usize = 0xB88; // float32
                pub const m_iszBounceSound: usize = 0xB90; // CUtlSymbolLarge
                pub const m_ExplosionSound: usize = 0xB98; // CUtlString
                pub const m_hThrower: usize = 0xBA4; // CHandle<CCSPlayerPawn>
                pub const m_flNextAttack: usize = 0xBBC; // GameTime_t
                pub const m_hOriginalThrower: usize = 0xBC0; // CHandle<CCSPlayerPawn>
            }
            // Parent: CBaseTrigger
            // Field count: 8
            //
            // Metadata:
            // NetworkVarNames: m_MaxWeight (float32)
            // NetworkVarNames: m_FadeDuration (float32)
            // NetworkVarNames: m_Weight (float32)
            // NetworkVarNames: m_lookupFilename (char)
            pub mod CColorCorrectionVolume {
                pub const m_MaxWeight: usize = 0x9A8; // float32
                pub const m_FadeDuration: usize = 0x9AC; // float32
                pub const m_Weight: usize = 0x9B0; // float32
                pub const m_lookupFilename: usize = 0x9B4; // char[512]
                pub const m_LastEnterWeight: usize = 0xBB4; // float32
                pub const m_LastEnterTime: usize = 0xBB8; // GameTime_t
                pub const m_LastExitWeight: usize = 0xBBC; // float32
                pub const m_LastExitTime: usize = 0xBC0; // GameTime_t
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
            pub mod CCSPlayerController_ActionTrackingServices {
                pub const m_perRoundStats: usize = 0x40; // CUtlVectorEmbeddedNetworkVar<CSPerRoundStats_t>
                pub const m_matchStats: usize = 0xC8; // CSMatchStats_t
                pub const m_iNumRoundKills: usize = 0x188; // int32
                pub const m_iNumRoundKillsHeadshots: usize = 0x18C; // int32
                pub const m_flTotalRoundDamageDealt: usize = 0x190; // float32
            }
            // Parent: CBodyComponentSkeletonInstance
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_animationController (CBaseAnimGraphController)
            pub mod CBodyComponentBaseAnimGraph {
                pub const m_animationController: usize = 0x510; // CBaseAnimGraphController
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_BaseYieldingInflow {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod PulseNodeDynamicOutflows_t {
                pub const m_Outflows: usize = 0x0; // CUtlVector<PulseNodeDynamicOutflows_t::DynamicOutflow_t>
            }
            // Parent: CServerOnlyModelEntity
            // Field count: 5
            pub mod CFogVolume {
                pub const m_fogName: usize = 0x7D8; // CUtlSymbolLarge
                pub const m_postProcessName: usize = 0x7E0; // CUtlSymbolLarge
                pub const m_colorCorrectionName: usize = 0x7E8; // CUtlSymbolLarge
                pub const m_bDisabled: usize = 0x7F8; // bool
                pub const m_bInFogVolumesList: usize = 0x7F9; // bool
            }
            // Parent: CBaseModelEntity
            // Field count: 18
            //
            // Metadata:
            // MNetworkOverride
            // MNetworkOverride
            pub mod CFuncRotating {
                pub const m_OnStopped: usize = 0x7D8; // CEntityIOOutput
                pub const m_OnStarted: usize = 0x800; // CEntityIOOutput
                pub const m_OnReachedStart: usize = 0x828; // CEntityIOOutput
                pub const m_localRotationVector: usize = 0x850; // RotationVector
                pub const m_flFanFriction: usize = 0x85C; // float32
                pub const m_flAttenuation: usize = 0x860; // float32
                pub const m_flVolume: usize = 0x864; // float32
                pub const m_flTargetSpeed: usize = 0x868; // float32
                pub const m_flMaxSpeed: usize = 0x86C; // float32
                pub const m_flBlockDamage: usize = 0x870; // float32
                pub const m_NoiseRunning: usize = 0x878; // CUtlSymbolLarge
                pub const m_bReversed: usize = 0x880; // bool
                pub const m_bAccelDecel: usize = 0x881; // bool
                pub const m_prevLocalAngles: usize = 0x898; // QAngle
                pub const m_angStart: usize = 0x8A4; // QAngle
                pub const m_bStopAtStartPos: usize = 0x8B0; // bool
                pub const m_vecClientOrigin: usize = 0x8B4; // Vector
                pub const m_vecClientAngles: usize = 0x8C0; // QAngle
            }
            // Parent: CLogicalEntity
            // Field count: 13
            pub mod CTimerEntity {
                pub const m_OnTimer: usize = 0x4F0; // CEntityIOOutput
                pub const m_OnTimerHigh: usize = 0x518; // CEntityIOOutput
                pub const m_OnTimerLow: usize = 0x540; // CEntityIOOutput
                pub const m_iDisabled: usize = 0x568; // int32
                pub const m_flInitialDelay: usize = 0x56C; // float32
                pub const m_flRefireTime: usize = 0x570; // float32
                pub const m_bUpDownState: usize = 0x574; // bool
                pub const m_iUseRandomTime: usize = 0x578; // int32
                pub const m_bPauseAfterFiring: usize = 0x57C; // bool
                pub const m_flLowerRandomBound: usize = 0x580; // float32
                pub const m_flUpperRandomBound: usize = 0x584; // float32
                pub const m_flRemainingTime: usize = 0x588; // float32
                pub const m_bPaused: usize = 0x58C; // bool
            }
            // Parent: None
            // Field count: 14
            pub mod CBtActionMoveTo {
                pub const m_szDestinationInputKey: usize = 0x60; // CUtlString
                pub const m_szHidingSpotInputKey: usize = 0x68; // CUtlString
                pub const m_szThreatInputKey: usize = 0x70; // CUtlString
                pub const m_vecDestination: usize = 0x78; // Vector
                pub const m_bAutoLookAdjust: usize = 0x84; // bool
                pub const m_bComputePath: usize = 0x85; // bool
                pub const m_flDamagingAreasPenaltyCost: usize = 0x88; // float32
                pub const m_CheckApproximateCornersTimer: usize = 0x90; // CountdownTimer
                pub const m_CheckHighPriorityItem: usize = 0xA8; // CountdownTimer
                pub const m_RepathTimer: usize = 0xC0; // CountdownTimer
                pub const m_flArrivalEpsilon: usize = 0xD8; // float32
                pub const m_flAdditionalArrivalEpsilon2D: usize = 0xDC; // float32
                pub const m_flHidingSpotCheckDistanceThreshold: usize = 0xE0; // float32
                pub const m_flNearestAreaDistanceThreshold: usize = 0xE4; // float32
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
            pub mod CPlayer_MovementServices_Humanoid {
                pub const m_flStepSoundTime: usize = 0x238; // float32
                pub const m_flFallVelocity: usize = 0x23C; // float32
                pub const m_bInCrouch: usize = 0x240; // bool
                pub const m_nCrouchState: usize = 0x244; // uint32
                pub const m_flCrouchTransitionStartTime: usize = 0x248; // GameTime_t
                pub const m_bDucked: usize = 0x24C; // bool
                pub const m_bDucking: usize = 0x24D; // bool
                pub const m_bInDuckJump: usize = 0x24E; // bool
                pub const m_groundNormal: usize = 0x250; // Vector
                pub const m_flSurfaceFriction: usize = 0x25C; // float32
                pub const m_surfaceProps: usize = 0x260; // CUtlStringToken
                pub const m_nStepside: usize = 0x270; // int32
                pub const m_vecSmoothedVelocity: usize = 0x274; // Vector
            }
            // Parent: None
            // Field count: 0
            pub mod CBaseEntityAPI {
            }
            // Parent: None
            // Field count: 1
            pub mod CPulseCell_IsRequirementValid__Criteria_t {
                pub const m_bIsValid: usize = 0x0; // bool
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            pub mod CWeaponG3SG1 {
            }
            // Parent: CTriggerMultiple
            // Field count: 0
            pub mod CTriggerOnce {
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
            pub mod CSMatchStats_t {
                pub const m_iEnemy5Ks: usize = 0x68; // int32
                pub const m_iEnemy4Ks: usize = 0x6C; // int32
                pub const m_iEnemy3Ks: usize = 0x70; // int32
                pub const m_iEnemyKnifeKills: usize = 0x74; // int32
                pub const m_iEnemyTaserKills: usize = 0x78; // int32
                pub const m_iEnemy2Ks: usize = 0x7C; // int32
                pub const m_iUtility_Count: usize = 0x80; // int32
                pub const m_iUtility_Successes: usize = 0x84; // int32
                pub const m_iUtility_Enemies: usize = 0x88; // int32
                pub const m_iFlash_Count: usize = 0x8C; // int32
                pub const m_iFlash_Successes: usize = 0x90; // int32
                pub const m_flHealthPointsRemovedTotal: usize = 0x94; // float32
                pub const m_flHealthPointsDealtTotal: usize = 0x98; // float32
                pub const m_nShotsFiredTotal: usize = 0x9C; // int32
                pub const m_nShotsOnTargetTotal: usize = 0xA0; // int32
                pub const m_i1v1Count: usize = 0xA4; // int32
                pub const m_i1v1Wins: usize = 0xA8; // int32
                pub const m_i1v2Count: usize = 0xAC; // int32
                pub const m_i1v2Wins: usize = 0xB0; // int32
                pub const m_iEntryCount: usize = 0xB4; // int32
                pub const m_iEntryWins: usize = 0xB8; // int32
            }
            // Parent: 
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_ID (CUtlStringToken)
            // NetworkVarNames: m_Values (Vector4D)
            pub mod EntityRenderAttribute_t {
                pub const m_ID: usize = 0x30; // CUtlStringToken
                pub const m_Values: usize = 0x34; // Vector4D
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Inflow_ObservableVariableListener {
                pub const m_nBlackboardReference: usize = 0x80; // PulseRuntimeBlackboardReferenceIndex_t
                pub const m_bSelfReference: usize = 0x82; // bool
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
            pub mod CFuncMonitor {
                pub const m_targetCamera: usize = 0x7F8; // CUtlString
                pub const m_nResolutionEnum: usize = 0x800; // int32
                pub const m_bRenderShadows: usize = 0x804; // bool
                pub const m_bUseUniqueColorTarget: usize = 0x805; // bool
                pub const m_brushModelName: usize = 0x808; // CUtlString
                pub const m_hTargetCamera: usize = 0x810; // CHandle<CBaseEntity>
                pub const m_bEnabled: usize = 0x814; // bool
                pub const m_bDraw3DSkybox: usize = 0x815; // bool
                pub const m_bStartEnabled: usize = 0x816; // bool
            }
            // Parent: CBaseEntity
            // Field count: 3
            //
            // Metadata:
            // NetworkVarNames: m_nMode (int)
            // NetworkVarNames: m_vBoxSize (Vector)
            // NetworkVarNames: m_bEnabled (bool)
            pub mod CInfoVisibilityBox {
                pub const m_nMode: usize = 0x4F4; // int32
                pub const m_vBoxSize: usize = 0x4F8; // Vector
                pub const m_bEnabled: usize = 0x504; // bool
            }
            // Parent: CBaseToggle
            // Field count: 3
            pub mod CGunTarget {
                pub const m_on: usize = 0x858; // bool
                pub const m_hTargetEnt: usize = 0x85C; // CHandle<CBaseEntity>
                pub const m_OnDeath: usize = 0x860; // CEntityIOOutput
            }
            // Parent: CSoundOpvarSetAABBEntity
            // Field count: 0
            pub mod CSoundOpvarSetOBBEntity {
            }
            // Parent: None
            // Field count: 0
            pub mod CFilterMultipleAPI {
            }
            // Parent: CBaseCSGrenadeProjectile
            // Field count: 4
            //
            // Metadata:
            // NetworkVarNames: m_nDecoyShotTick (int)
            pub mod CDecoyProjectile {
                pub const m_nDecoyShotTick: usize = 0xC58; // int32
                pub const m_shotsRemaining: usize = 0xC5C; // int32
                pub const m_fExpireTime: usize = 0xC60; // GameTime_t
                pub const m_decoyWeaponDefIndex: usize = 0xC70; // uint16
            }
            // Parent: CBaseModelEntity
            // Field count: 0
            pub mod CPrecipitationBlocker {
            }
            // Parent: CSoundOpvarSetPointEntity
            // Field count: 3
            pub mod CSoundOpvarSetPathCornerEntity {
                pub const m_flDistMinSqr: usize = 0x6C0; // float32
                pub const m_flDistMaxSqr: usize = 0x6C4; // float32
                pub const m_iszPathCornerEntityName: usize = 0x6C8; // CUtlSymbolLarge
            }
            // Parent: CPointEntity
            // Field count: 0
            pub mod CPointClientCommand {
            }
            // Parent: CHostageRescueZoneShim
            // Field count: 0
            pub mod CHostageRescueZone {
            }
            // Parent: CBaseModelEntity
            // Field count: 0
            pub mod CWorld {
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
            pub mod CModelState {
                pub const m_hModel: usize = 0xD0; // CStrongHandle<InfoForResourceTypeCModel>
                pub const m_ModelName: usize = 0xD8; // CUtlSymbolLarge
                pub const m_bClientClothCreationSuppressed: usize = 0x125; // bool
                pub const m_MeshGroupMask: usize = 0x1D0; // uint64
                pub const m_nBodyGroupChoices: usize = 0x220; // CNetworkUtlVectorBase<int32>
                pub const m_nIdealMotionType: usize = 0x26A; // int8
                pub const m_nForceLOD: usize = 0x26B; // int8
                pub const m_nClothUpdateFlags: usize = 0x26C; // int8
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_LerpCameraSettings__CursorState_t {
                pub const m_hCamera: usize = 0x8; // CHandle<CPointCamera>
                pub const m_OverlaidStart: usize = 0xC; // PointCameraSettings_t
                pub const m_OverlaidEnd: usize = 0x1C; // PointCameraSettings_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Outflow_CycleOrdered {
                pub const m_Outputs: usize = 0x48; // CUtlVector<CPulse_OutflowConnection>
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            pub mod CWeaponGlock {
            }
            // Parent: CBaseCSGrenadeProjectile
            // Field count: 0
            pub mod CHEGrenadeProjectile {
            }
            // Parent: CBaseTrigger
            // Field count: 0
            pub mod CTriggerGravity {
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
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            pub mod CWeaponGalilAR {
            }
            // Parent: CBaseFilter
            // Field count: 1
            pub mod CFilterMassGreater {
                pub const m_fFilterMass: usize = 0x548; // float32
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            pub mod CWeaponMP7 {
            }
            // Parent: CCSWeaponBase
            // Field count: 10
            //
            // Metadata:
            // NetworkVarNames: m_zoomLevel (int)
            // NetworkVarNames: m_iBurstShotsRemaining (int)
            // NetworkVarNames: m_bNeedsBoltAction (bool)
            // NetworkVarNames: m_nRevolverCylinderIdx (int32)
            pub mod CCSWeaponBaseGun {
                pub const m_zoomLevel: usize = 0x11D0; // int32
                pub const m_iBurstShotsRemaining: usize = 0x11D4; // int32
                pub const m_silencedModelIndex: usize = 0x11E0; // int32
                pub const m_inPrecache: usize = 0x11E4; // bool
                pub const m_bNeedsBoltAction: usize = 0x11E5; // bool
                pub const m_nRevolverCylinderIdx: usize = 0x11E8; // int32
                pub const m_bSkillReloadAvailable: usize = 0x11EC; // bool
                pub const m_bSkillReloadLiftedReloadKey: usize = 0x11ED; // bool
                pub const m_bSkillBoltInterruptAvailable: usize = 0x11EE; // bool
                pub const m_bSkillBoltLiftedFireKey: usize = 0x11EF; // bool
            }
            // Parent: CBaseEntity
            // Field count: 0
            pub mod CEnableMotionFixup {
            }
            // Parent: CLogicAutosave
            // Field count: 4
            pub mod CLogicActiveAutosave {
                pub const m_TriggerHitPoints: usize = 0x500; // int32
                pub const m_flTimeToTrigger: usize = 0x504; // float32
                pub const m_flStartTime: usize = 0x508; // GameTime_t
                pub const m_flDangerousTime: usize = 0x50C; // float32
            }
            // Parent: CLogicalEntity
            // Field count: 11
            pub mod CMathCounter {
                pub const m_flMin: usize = 0x4F0; // float32
                pub const m_flMax: usize = 0x4F4; // float32
                pub const m_bHitMin: usize = 0x4F8; // bool
                pub const m_bHitMax: usize = 0x4F9; // bool
                pub const m_bDisabled: usize = 0x4FA; // bool
                pub const m_OutValue: usize = 0x500; // CEntityOutputTemplate<float32>
                pub const m_OnGetValue: usize = 0x528; // CEntityOutputTemplate<float32>
                pub const m_OnHitMin: usize = 0x550; // CEntityIOOutput
                pub const m_OnHitMax: usize = 0x578; // CEntityIOOutput
                pub const m_OnChangedFromMin: usize = 0x5A0; // CEntityIOOutput
                pub const m_OnChangedFromMax: usize = 0x5C8; // CEntityIOOutput
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_WeaponSequence (CUtlString)
            pub mod CCSGameModeRules_ArmsRace {
                pub const m_WeaponSequence: usize = 0x30; // CNetworkUtlVectorBase<CUtlString>
            }
            // Parent: CPointEntity
            // Field count: 13
            pub mod CNavLinkAreaEntity {
                pub const m_flWidth: usize = 0x4F0; // float32
                pub const m_vLocatorOffset: usize = 0x4F4; // VectorWS
                pub const m_qLocatorAnglesOffset: usize = 0x500; // QAngle
                pub const m_strMovementForward: usize = 0x510; // CUtlSymbolLarge
                pub const m_strMovementReverse: usize = 0x518; // CUtlSymbolLarge
                pub const m_bEnabled: usize = 0x550; // bool
                pub const m_bAllowCrossMovableConnections: usize = 0x551; // bool
                pub const m_strFilterName: usize = 0x558; // CUtlSymbolLarge
                pub const m_hFilter: usize = 0x560; // CHandle<CBaseFilter>
                pub const m_OnNavLinkStart: usize = 0x568; // CEntityIOOutput
                pub const m_OnNavLinkFinish: usize = 0x590; // CEntityIOOutput
                pub const m_bIsTerminus: usize = 0x5B8; // bool
                pub const m_nSplits: usize = 0x5BC; // int32
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
            pub mod CAttributeContainer {
                pub const m_Item: usize = 0x50; // CEconItemView
            }
            // Parent: CServerOnlyModelEntity
            // Field count: 1
            pub mod CCSPlace {
                pub const m_name: usize = 0x7F0; // CUtlSymbolLarge
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod PulseSelectorOutflowList_t {
                pub const m_Outflows: usize = 0x0; // CUtlVector<OutflowWithRequirements_t>
            }
            // Parent: CBaseFilter
            // Field count: 1
            pub mod CFilterContext {
                pub const m_iFilterContext: usize = 0x548; // CUtlSymbolLarge
            }
            // Parent: CLightDirectionalEntity
            // Field count: 0
            pub mod CLightEnvironmentEntity {
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
            pub mod CEnvDecal {
                pub const m_hDecalMaterial: usize = 0x7D8; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_flWidth: usize = 0x7E0; // float32
                pub const m_flHeight: usize = 0x7E4; // float32
                pub const m_flDepth: usize = 0x7E8; // float32
                pub const m_nRenderOrder: usize = 0x7EC; // uint32
                pub const m_bProjectOnWorld: usize = 0x7F0; // bool
                pub const m_bProjectOnCharacters: usize = 0x7F1; // bool
                pub const m_bProjectOnWater: usize = 0x7F2; // bool
                pub const m_flDepthSortBias: usize = 0x7F4; // float32
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
            pub mod CEnvVolumetricFogVolume {
                pub const m_bActive: usize = 0x4F0; // bool
                pub const m_vBoxMins: usize = 0x4F4; // Vector
                pub const m_vBoxMaxs: usize = 0x500; // Vector
                pub const m_bStartDisabled: usize = 0x50C; // bool
                pub const m_bIndirectUseLPVs: usize = 0x50D; // bool
                pub const m_flStrength: usize = 0x510; // float32
                pub const m_nFalloffShape: usize = 0x514; // int32
                pub const m_flFalloffExponent: usize = 0x518; // float32
                pub const m_flHeightFogDepth: usize = 0x51C; // float32
                pub const m_fHeightFogEdgeWidth: usize = 0x520; // float32
                pub const m_fIndirectLightStrength: usize = 0x524; // float32
                pub const m_fSunLightStrength: usize = 0x528; // float32
                pub const m_fNoiseStrength: usize = 0x52C; // float32
                pub const m_TintColor: usize = 0x530; // Color
                pub const m_bOverrideTintColor: usize = 0x534; // bool
                pub const m_bOverrideIndirectLightStrength: usize = 0x535; // bool
                pub const m_bOverrideSunLightStrength: usize = 0x536; // bool
                pub const m_bOverrideNoiseStrength: usize = 0x537; // bool
            }
            // Parent: CBaseEntity
            // Field count: 0
            pub mod CServerOnlyEntity {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_PlaySequence__CursorState_t {
                pub const m_hTarget: usize = 0x0; // CHandle<CBaseAnimGraph>
            }
            // Parent: CBodyComponent
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_skeletonInstance (CSkeletonInstance)
            pub mod CBodyComponentSkeletonInstance {
                pub const m_skeletonInstance: usize = 0x80; // CSkeletonInstance
            }
            // Parent: CItem
            // Field count: 32
            pub mod CItemGeneric {
                pub const m_bHasTriggerRadius: usize = 0xB84; // bool
                pub const m_bHasPickupRadius: usize = 0xB85; // bool
                pub const m_flPickupRadiusSqr: usize = 0xB88; // float32
                pub const m_flTriggerRadiusSqr: usize = 0xB8C; // float32
                pub const m_flLastPickupCheck: usize = 0xB90; // GameTime_t
                pub const m_bPlayerCounterListenerAdded: usize = 0xB94; // bool
                pub const m_bPlayerInTriggerRadius: usize = 0xB95; // bool
                pub const m_hSpawnParticleEffect: usize = 0xB98; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                pub const m_pAmbientSoundEffect: usize = 0xBA0; // CUtlSymbolLarge
                pub const m_bAutoStartAmbientSound: usize = 0xBA8; // bool
                pub const m_pSpawnScriptFunction: usize = 0xBB0; // CUtlSymbolLarge
                pub const m_hPickupParticleEffect: usize = 0xBB8; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                pub const m_pPickupSoundEffect: usize = 0xBC0; // CUtlSymbolLarge
                pub const m_pPickupScriptFunction: usize = 0xBC8; // CUtlSymbolLarge
                pub const m_hTimeoutParticleEffect: usize = 0xBD0; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                pub const m_pTimeoutSoundEffect: usize = 0xBD8; // CUtlSymbolLarge
                pub const m_pTimeoutScriptFunction: usize = 0xBE0; // CUtlSymbolLarge
                pub const m_pPickupFilterName: usize = 0xBE8; // CUtlSymbolLarge
                pub const m_hPickupFilter: usize = 0xBF0; // CHandle<CBaseFilter>
                pub const m_OnPickup: usize = 0xBF8; // CEntityIOOutput
                pub const m_OnTimeout: usize = 0xC20; // CEntityIOOutput
                pub const m_OnTriggerStartTouch: usize = 0xC48; // CEntityIOOutput
                pub const m_OnTriggerTouch: usize = 0xC70; // CEntityIOOutput
                pub const m_OnTriggerEndTouch: usize = 0xC98; // CEntityIOOutput
                pub const m_pAllowPickupScriptFunction: usize = 0xCC0; // CUtlSymbolLarge
                pub const m_flPickupRadius: usize = 0xCC8; // float32
                pub const m_flTriggerRadius: usize = 0xCCC; // float32
                pub const m_pTriggerSoundEffect: usize = 0xCD0; // CUtlSymbolLarge
                pub const m_bGlowWhenInTrigger: usize = 0xCD8; // bool
                pub const m_glowColor: usize = 0xCD9; // Color
                pub const m_bUseable: usize = 0xCDD; // bool
                pub const m_hTriggerHelper: usize = 0xCE0; // CHandle<CItemGenericTriggerHelper>
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
            pub mod CPointValueRemapper {
                pub const m_bDisabled: usize = 0x4F0; // bool
                pub const m_bUpdateOnClient: usize = 0x4F1; // bool
                pub const m_nInputType: usize = 0x4F4; // ValueRemapperInputType_t
                pub const m_iszRemapLineStartName: usize = 0x4F8; // CUtlSymbolLarge
                pub const m_iszRemapLineEndName: usize = 0x500; // CUtlSymbolLarge
                pub const m_hRemapLineStart: usize = 0x508; // CHandle<CBaseEntity>
                pub const m_hRemapLineEnd: usize = 0x50C; // CHandle<CBaseEntity>
                pub const m_flMaximumChangePerSecond: usize = 0x510; // float32
                pub const m_flDisengageDistance: usize = 0x514; // float32
                pub const m_flEngageDistance: usize = 0x518; // float32
                pub const m_bRequiresUseKey: usize = 0x51C; // bool
                pub const m_nOutputType: usize = 0x520; // ValueRemapperOutputType_t
                pub const m_iszOutputEntityName: usize = 0x528; // CUtlSymbolLarge
                pub const m_iszOutputEntity2Name: usize = 0x530; // CUtlSymbolLarge
                pub const m_iszOutputEntity3Name: usize = 0x538; // CUtlSymbolLarge
                pub const m_iszOutputEntity4Name: usize = 0x540; // CUtlSymbolLarge
                pub const m_hOutputEntities: usize = 0x548; // CNetworkUtlVectorBase<CHandle<CBaseEntity>>
                pub const m_nHapticsType: usize = 0x560; // ValueRemapperHapticsType_t
                pub const m_nMomentumType: usize = 0x564; // ValueRemapperMomentumType_t
                pub const m_flMomentumModifier: usize = 0x568; // float32
                pub const m_flSnapValue: usize = 0x56C; // float32
                pub const m_flCurrentMomentum: usize = 0x570; // float32
                pub const m_nRatchetType: usize = 0x574; // ValueRemapperRatchetType_t
                pub const m_flRatchetOffset: usize = 0x578; // float32
                pub const m_flInputOffset: usize = 0x57C; // float32
                pub const m_bEngaged: usize = 0x580; // bool
                pub const m_bFirstUpdate: usize = 0x581; // bool
                pub const m_flPreviousValue: usize = 0x584; // float32
                pub const m_flPreviousUpdateTickTime: usize = 0x588; // GameTime_t
                pub const m_vecPreviousTestPoint: usize = 0x58C; // Vector
                pub const m_hUsingPlayer: usize = 0x598; // CHandle<CBasePlayerPawn>
                pub const m_flCustomOutputValue: usize = 0x59C; // float32
                pub const m_iszSoundEngage: usize = 0x5A0; // CUtlSymbolLarge
                pub const m_iszSoundDisengage: usize = 0x5A8; // CUtlSymbolLarge
                pub const m_iszSoundReachedValueZero: usize = 0x5B0; // CUtlSymbolLarge
                pub const m_iszSoundReachedValueOne: usize = 0x5B8; // CUtlSymbolLarge
                pub const m_iszSoundMovingLoop: usize = 0x5C0; // CUtlSymbolLarge
                pub const m_Position: usize = 0x5E0; // CEntityOutputTemplate<float32>
                pub const m_PositionDelta: usize = 0x608; // CEntityOutputTemplate<float32>
                pub const m_OnReachedValueZero: usize = 0x630; // CEntityIOOutput
                pub const m_OnReachedValueOne: usize = 0x658; // CEntityIOOutput
                pub const m_OnReachedValueCustom: usize = 0x680; // CEntityIOOutput
                pub const m_OnEngage: usize = 0x6A8; // CEntityIOOutput
                pub const m_OnDisengage: usize = 0x6D0; // CEntityIOOutput
            }
            // Parent: None
            // Field count: 3
            pub mod CBtNodeConditionInactive {
                pub const m_flRoundStartThresholdSeconds: usize = 0x78; // float32
                pub const m_flSensorInactivityThresholdSeconds: usize = 0x7C; // float32
                pub const m_SensorInactivityTimer: usize = 0x80; // CountdownTimer
            }
            // Parent: CCSGO_TeamIntroCharacterPosition
            // Field count: 0
            pub mod CCSGO_TeamIntroCounterTerroristPosition {
            }
            // Parent: CBaseAnimGraph
            // Field count: 26
            //
            // Metadata:
            // NetworkVarNames: m_ragEnabled (bool)
            // NetworkVarNames: m_ragPos (Vector)
            // NetworkVarNames: m_ragAngles (QAngle)
            // NetworkVarNames: m_flBlendWeight (float32)
            pub mod CRagdollProp {
                pub const m_ragdoll: usize = 0xAA0; // ragdoll_t
                pub const m_bStartDisabled: usize = 0xAF0; // bool
                pub const m_ragEnabled: usize = 0xAF8; // CNetworkUtlVectorBase<bool>
                pub const m_ragPos: usize = 0xB10; // CNetworkUtlVectorBase<Vector>
                pub const m_ragAngles: usize = 0xB28; // CNetworkUtlVectorBase<QAngle>
                pub const m_lastUpdateTickCount: usize = 0xB40; // uint32
                pub const m_allAsleep: usize = 0xB44; // bool
                pub const m_bFirstCollisionAfterLaunch: usize = 0xB45; // bool
                pub const m_hDamageEntity: usize = 0xB48; // CHandle<CBaseEntity>
                pub const m_hKiller: usize = 0xB4C; // CHandle<CBaseEntity>
                pub const m_hPhysicsAttacker: usize = 0xB50; // CHandle<CBasePlayerPawn>
                pub const m_flLastPhysicsInfluenceTime: usize = 0xB54; // GameTime_t
                pub const m_flFadeOutStartTime: usize = 0xB58; // GameTime_t
                pub const m_flFadeTime: usize = 0xB5C; // float32
                pub const m_vecLastOrigin: usize = 0xB60; // VectorWS
                pub const m_flAwakeTime: usize = 0xB6C; // GameTime_t
                pub const m_flLastOriginChangeTime: usize = 0xB70; // GameTime_t
                pub const m_strOriginClassName: usize = 0xB78; // CUtlSymbolLarge
                pub const m_strSourceClassName: usize = 0xB80; // CUtlSymbolLarge
                pub const m_bHasBeenPhysgunned: usize = 0xB88; // bool
                pub const m_bAllowStretch: usize = 0xB89; // bool
                pub const m_flBlendWeight: usize = 0xB8C; // float32
                pub const m_flDefaultFadeScale: usize = 0xB90; // float32
                pub const m_ragdollMins: usize = 0xB98; // CUtlVector<Vector>
                pub const m_ragdollMaxs: usize = 0xBB0; // CUtlVector<Vector>
                pub const m_bShouldDeleteActivationRecord: usize = 0xBC8; // bool
            }
            // Parent: CEntityComponent
            // Field count: 1
            pub mod CScriptComponent {
                pub const m_scriptClassName: usize = 0x30; // CUtlSymbolLarge
            }
            // Parent: CBasePlatTrain
            // Field count: 6
            pub mod CFuncTrain {
                pub const m_hCurrentTarget: usize = 0x880; // CHandle<CBaseEntity>
                pub const m_activated: usize = 0x884; // bool
                pub const m_hEnemy: usize = 0x888; // CHandle<CBaseEntity>
                pub const m_flBlockDamage: usize = 0x88C; // float32
                pub const m_flNextBlockTime: usize = 0x890; // GameTime_t
                pub const m_iszLastTarget: usize = 0x898; // CUtlSymbolLarge
            }
            // Parent: CBaseEntity
            // Field count: 4
            pub mod CAI_ChangeHintGroup {
                pub const m_iSearchType: usize = 0x4F0; // int32
                pub const m_strSearchName: usize = 0x4F8; // CUtlSymbolLarge
                pub const m_strNewHintGroup: usize = 0x500; // CUtlSymbolLarge
                pub const m_flRadius: usize = 0x508; // float32
            }
            // Parent: CPlayerPawnComponent
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_vecSellbackPurchaseEntries (SellbackPurchaseEntry_t)
            pub mod CCSPlayer_BuyServices {
                pub const m_vecSellbackPurchaseEntries: usize = 0xC8; // CUtlVectorEmbeddedNetworkVar<SellbackPurchaseEntry_t>
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            pub mod CWeaponAug {
            }
            // Parent: CPhysConstraint
            // Field count: 18
            pub mod CPhysHinge {
                pub const m_soundInfo: usize = 0x568; // ConstraintSoundInfo
                pub const m_NotifyMinLimitReached: usize = 0x600; // CEntityIOOutput
                pub const m_NotifyMaxLimitReached: usize = 0x628; // CEntityIOOutput
                pub const m_bAtMinLimit: usize = 0x650; // bool
                pub const m_bAtMaxLimit: usize = 0x651; // bool
                pub const m_hinge: usize = 0x654; // constraint_hingeparams_t
                pub const m_hingeFriction: usize = 0x694; // float32
                pub const m_systemLoadScale: usize = 0x698; // float32
                pub const m_bIsAxisLocal: usize = 0x69C; // bool
                pub const m_flMinRotation: usize = 0x6A0; // float32
                pub const m_flMaxRotation: usize = 0x6A4; // float32
                pub const m_flInitialRotation: usize = 0x6A8; // float32
                pub const m_flMotorFrequency: usize = 0x6AC; // float32
                pub const m_flMotorDampingRatio: usize = 0x6B0; // float32
                pub const m_flAngleSpeed: usize = 0x6B4; // float32
                pub const m_flAngleSpeedThreshold: usize = 0x6B8; // float32
                pub const m_OnStartMoving: usize = 0x6C0; // CEntityIOOutput
                pub const m_OnStopMoving: usize = 0x6E8; // CEntityIOOutput
            }
            // Parent: CBaseTrigger
            // Field count: 1
            pub mod CBuyZone {
                pub const m_LegacyTeamNum: usize = 0x9A8; // int32
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            pub mod CWeaponSSG08 {
            }
            // Parent: None
            // Field count: 0
            pub mod CLogicRelayAPI {
            }
            // Parent: CBaseEntity
            // Field count: 7
            //
            // Metadata:
            // NetworkVarNames: m_worldName (string_t)
            // NetworkVarNames: m_layerName (string_t)
            // NetworkVarNames: m_bWorldLayerVisible (bool)
            // NetworkVarNames: m_bEntitiesSpawned (bool)
            pub mod CInfoWorldLayer {
                pub const m_pOutputOnEntitiesSpawned: usize = 0x4F0; // CEntityIOOutput
                pub const m_worldName: usize = 0x518; // CUtlSymbolLarge
                pub const m_layerName: usize = 0x520; // CUtlSymbolLarge
                pub const m_bWorldLayerVisible: usize = 0x528; // bool
                pub const m_bEntitiesSpawned: usize = 0x529; // bool
                pub const m_bCreateAsChildSpawnGroup: usize = 0x52A; // bool
                pub const m_hLayerSpawnGroup: usize = 0x52C; // uint32
            }
            // Parent: CBodyComponentSkeletonInstance
            // Field count: 0
            pub mod CBodyComponentBaseModelEntity {
            }
            // Parent: CPointEntity
            // Field count: 0
            pub mod CLogicProximity {
            }
            // Parent: CPointEntity
            // Field count: 1
            pub mod CPointGiveAmmo {
                pub const m_pActivator: usize = 0x4F0; // CHandle<CBaseEntity>
            }
            // Parent: CBaseFilter
            // Field count: 1
            pub mod FilterDamageType {
                pub const m_iDamageType: usize = 0x548; // int32
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
            pub mod CPointCamera {
                pub const m_FOV: usize = 0x4F0; // float32
                pub const m_Resolution: usize = 0x4F4; // float32
                pub const m_bFogEnable: usize = 0x4F8; // bool
                pub const m_FogColor: usize = 0x4F9; // Color
                pub const m_flFogStart: usize = 0x500; // float32
                pub const m_flFogEnd: usize = 0x504; // float32
                pub const m_flFogMaxDensity: usize = 0x508; // float32
                pub const m_bActive: usize = 0x50C; // bool
                pub const m_bUseScreenAspectRatio: usize = 0x50D; // bool
                pub const m_flAspectRatio: usize = 0x510; // float32
                pub const m_bNoSky: usize = 0x514; // bool
                pub const m_fBrightness: usize = 0x518; // float32
                pub const m_flZFar: usize = 0x51C; // float32
                pub const m_flZNear: usize = 0x520; // float32
                pub const m_bCanHLTVUse: usize = 0x524; // bool
                pub const m_bAlignWithParent: usize = 0x525; // bool
                pub const m_bDofEnabled: usize = 0x526; // bool
                pub const m_flDofNearBlurry: usize = 0x528; // float32
                pub const m_flDofNearCrisp: usize = 0x52C; // float32
                pub const m_flDofFarCrisp: usize = 0x530; // float32
                pub const m_flDofFarBlurry: usize = 0x534; // float32
                pub const m_flDofTiltToGround: usize = 0x538; // float32
                pub const m_TargetFOV: usize = 0x53C; // float32
                pub const m_DegreesPerSecond: usize = 0x540; // float32
                pub const m_bIsOn: usize = 0x544; // bool
                pub const m_pNext: usize = 0x548; // CPointCamera*
            }
            // Parent: 
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_Attributes (CEconItemAttribute)
            pub mod CAttributeList {
                pub const m_Attributes: usize = 0x8; // CUtlVectorEmbeddedNetworkVar<CEconItemAttribute>
                pub const m_pManager: usize = 0x70; // CAttributeManager*
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
            pub mod CPulseCell_Inflow_Wait {
                pub const m_WakeResume: usize = 0x48; // CPulse_ResumePoint
            }
            // Parent: CBaseFilter
            // Field count: 1
            pub mod CFilterProximity {
                pub const m_flRadius: usize = 0x548; // float32
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
            pub mod CEffectData {
                pub const m_vOrigin: usize = 0x8; // VectorWS
                pub const m_vStart: usize = 0x14; // VectorWS
                pub const m_vNormal: usize = 0x20; // Vector
                pub const m_vAngles: usize = 0x2C; // QAngle
                pub const m_hEntity: usize = 0x38; // CEntityHandle
                pub const m_hOtherEntity: usize = 0x3C; // CEntityHandle
                pub const m_flScale: usize = 0x40; // float32
                pub const m_flMagnitude: usize = 0x44; // float32
                pub const m_flRadius: usize = 0x48; // float32
                pub const m_nSurfaceProp: usize = 0x4C; // CUtlStringToken
                pub const m_nEffectIndex: usize = 0x50; // CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>
                pub const m_nDamageType: usize = 0x58; // uint32
                pub const m_nPenetrate: usize = 0x5C; // uint8
                pub const m_nMaterial: usize = 0x5E; // uint16
                pub const m_nHitBox: usize = 0x60; // int16
                pub const m_nColor: usize = 0x62; // uint8
                pub const m_fFlags: usize = 0x63; // uint8
                pub const m_nAttachmentIndex: usize = 0x64; // AttachmentHandle_t
                pub const m_nAttachmentName: usize = 0x68; // CUtlStringToken
                pub const m_iEffectName: usize = 0x6C; // uint16
                pub const m_nExplosionType: usize = 0x6E; // uint8
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
            pub mod CEntityDissolve {
                pub const m_flFadeInStart: usize = 0x7D8; // float32
                pub const m_flFadeInLength: usize = 0x7DC; // float32
                pub const m_flFadeOutModelStart: usize = 0x7E0; // float32
                pub const m_flFadeOutModelLength: usize = 0x7E4; // float32
                pub const m_flFadeOutStart: usize = 0x7E8; // float32
                pub const m_flFadeOutLength: usize = 0x7EC; // float32
                pub const m_flStartTime: usize = 0x7F0; // GameTime_t
                pub const m_nDissolveType: usize = 0x7F4; // EntityDisolveType_t
                pub const m_vDissolverOrigin: usize = 0x7F8; // Vector
                pub const m_nMagnitude: usize = 0x804; // uint32
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
            pub mod CCSGameRules {
                pub const m_bFreezePeriod: usize = 0xC8; // bool
                pub const m_bWarmupPeriod: usize = 0xC9; // bool
                pub const m_fWarmupPeriodEnd: usize = 0xCC; // GameTime_t
                pub const m_fWarmupPeriodStart: usize = 0xD0; // GameTime_t
                pub const m_bTerroristTimeOutActive: usize = 0xD4; // bool
                pub const m_bCTTimeOutActive: usize = 0xD5; // bool
                pub const m_flTerroristTimeOutRemaining: usize = 0xD8; // float32
                pub const m_flCTTimeOutRemaining: usize = 0xDC; // float32
                pub const m_nTerroristTimeOuts: usize = 0xE0; // int32
                pub const m_nCTTimeOuts: usize = 0xE4; // int32
                pub const m_bTechnicalTimeOut: usize = 0xE8; // bool
                pub const m_bMatchWaitingForResume: usize = 0xE9; // bool
                pub const m_iRoundTime: usize = 0xEC; // int32
                pub const m_fMatchStartTime: usize = 0xF0; // float32
                pub const m_fRoundStartTime: usize = 0xF4; // GameTime_t
                pub const m_flRestartRoundTime: usize = 0xF8; // GameTime_t
                pub const m_bGameRestart: usize = 0xFC; // bool
                pub const m_flGameStartTime: usize = 0x100; // float32
                pub const m_timeUntilNextPhaseStarts: usize = 0x104; // float32
                pub const m_gamePhase: usize = 0x108; // int32
                pub const m_totalRoundsPlayed: usize = 0x10C; // int32
                pub const m_nRoundsPlayedThisPhase: usize = 0x110; // int32
                pub const m_nOvertimePlaying: usize = 0x114; // int32
                pub const m_iHostagesRemaining: usize = 0x118; // int32
                pub const m_bAnyHostageReached: usize = 0x11C; // bool
                pub const m_bMapHasBombTarget: usize = 0x11D; // bool
                pub const m_bMapHasRescueZone: usize = 0x11E; // bool
                pub const m_bMapHasBuyZone: usize = 0x11F; // bool
                pub const m_bIsQueuedMatchmaking: usize = 0x120; // bool
                pub const m_nQueuedMatchmakingMode: usize = 0x124; // int32
                pub const m_bIsValveDS: usize = 0x128; // bool
                pub const m_bLogoMap: usize = 0x129; // bool
                pub const m_bPlayAllStepSoundsOnServer: usize = 0x12A; // bool
                pub const m_iSpectatorSlotCount: usize = 0x12C; // int32
                pub const m_MatchDevice: usize = 0x130; // int32
                pub const m_bHasMatchStarted: usize = 0x134; // bool
                pub const m_nNextMapInMapgroup: usize = 0x138; // int32
                pub const m_szTournamentEventName: usize = 0x13C; // char[512]
                pub const m_szTournamentEventStage: usize = 0x33C; // char[512]
                pub const m_szMatchStatTxt: usize = 0x53C; // char[512]
                pub const m_szTournamentPredictionsTxt: usize = 0x73C; // char[512]
                pub const m_nTournamentPredictionsPct: usize = 0x93C; // int32
                pub const m_flCMMItemDropRevealStartTime: usize = 0x940; // GameTime_t
                pub const m_flCMMItemDropRevealEndTime: usize = 0x944; // GameTime_t
                pub const m_bIsDroppingItems: usize = 0x948; // bool
                pub const m_bIsQuestEligible: usize = 0x949; // bool
                pub const m_bIsHltvActive: usize = 0x94A; // bool
                pub const m_arrProhibitedItemIndices: usize = 0x94C; // uint16[100]
                pub const m_arrTournamentActiveCasterAccounts: usize = 0xA14; // uint32[4]
                pub const m_numBestOfMaps: usize = 0xA24; // int32
                pub const m_nHalloweenMaskListSeed: usize = 0xA28; // int32
                pub const m_bBombDropped: usize = 0xA2C; // bool
                pub const m_bBombPlanted: usize = 0xA2D; // bool
                pub const m_iRoundWinStatus: usize = 0xA30; // int32
                pub const m_eRoundWinReason: usize = 0xA34; // int32
                pub const m_bTCantBuy: usize = 0xA38; // bool
                pub const m_bCTCantBuy: usize = 0xA39; // bool
                pub const m_iMatchStats_RoundResults: usize = 0xA3C; // int32[30]
                pub const m_iMatchStats_PlayersAlive_CT: usize = 0xAB4; // int32[30]
                pub const m_iMatchStats_PlayersAlive_T: usize = 0xB2C; // int32[30]
                pub const m_TeamRespawnWaveTimes: usize = 0xBA4; // float32[32]
                pub const m_flNextRespawnWave: usize = 0xC24; // GameTime_t[32]
                pub const m_vMinimapMins: usize = 0xCA4; // Vector
                pub const m_vMinimapMaxs: usize = 0xCB0; // Vector
                pub const m_MinimapVerticalSectionHeights: usize = 0xCBC; // float32[8]
                pub const m_ullLocalMatchID: usize = 0xCE0; // uint64
                pub const m_nEndMatchMapGroupVoteTypes: usize = 0xCE8; // int32[10]
                pub const m_nEndMatchMapGroupVoteOptions: usize = 0xD10; // int32[10]
                pub const m_nEndMatchMapVoteWinner: usize = 0xD38; // int32
                pub const m_iNumConsecutiveCTLoses: usize = 0xD3C; // int32
                pub const m_iNumConsecutiveTerroristLoses: usize = 0xD40; // int32
                pub const m_bHasHostageBeenTouched: usize = 0xD60; // bool
                pub const m_flIntermissionStartTime: usize = 0xD64; // GameTime_t
                pub const m_flIntermissionEndTime: usize = 0xD68; // GameTime_t
                pub const m_bLevelInitialized: usize = 0xD6C; // bool
                pub const m_iTotalRoundsPlayed: usize = 0xD70; // int32
                pub const m_iUnBalancedRounds: usize = 0xD74; // int32
                pub const m_endMatchOnRoundReset: usize = 0xD78; // bool
                pub const m_endMatchOnThink: usize = 0xD79; // bool
                pub const m_iFreezeTime: usize = 0xD7C; // int32
                pub const m_iNumTerrorist: usize = 0xD80; // int32
                pub const m_iNumCT: usize = 0xD84; // int32
                pub const m_iNumSpawnableTerrorist: usize = 0xD88; // int32
                pub const m_iNumSpawnableCT: usize = 0xD8C; // int32
                pub const m_arrSelectedHostageSpawnIndices: usize = 0xD90; // CUtlVector<int32>
                pub const m_nSpawnPointsRandomSeed: usize = 0xDA8; // int32
                pub const m_bFirstConnected: usize = 0xDAC; // bool
                pub const m_bCompleteReset: usize = 0xDAD; // bool
                pub const m_bPickNewTeamsOnReset: usize = 0xDAE; // bool
                pub const m_bScrambleTeamsOnRestart: usize = 0xDAF; // bool
                pub const m_bSwapTeamsOnRestart: usize = 0xDB0; // bool
                pub const m_nEndMatchTiedVotes: usize = 0xDB8; // CUtlVector<int32>
                pub const m_bNeedToAskPlayersForContinueVote: usize = 0xDD4; // bool
                pub const m_numQueuedMatchmakingAccounts: usize = 0xDD8; // uint32
                pub const m_fAvgPlayerRank: usize = 0xDDC; // float32
                pub const m_pQueuedMatchmakingReservationString: usize = 0xDE0; // char*
                pub const m_numTotalTournamentDrops: usize = 0xDE8; // uint32
                pub const m_numSpectatorsCountMax: usize = 0xDEC; // uint32
                pub const m_numSpectatorsCountMaxTV: usize = 0xDF0; // uint32
                pub const m_numSpectatorsCountMaxLnk: usize = 0xDF4; // uint32
                pub const m_nCTsAliveAtFreezetimeEnd: usize = 0xE00; // int32
                pub const m_nTerroristsAliveAtFreezetimeEnd: usize = 0xE04; // int32
                pub const m_bForceTeamChangeSilent: usize = 0xE08; // bool
                pub const m_bLoadingRoundBackupData: usize = 0xE09; // bool
                pub const m_nMatchInfoShowType: usize = 0xE40; // int32
                pub const m_flMatchInfoDecidedTime: usize = 0xE44; // float32
                pub const mTeamDMLastWinningTeamNumber: usize = 0xE60; // int32
                pub const mTeamDMLastThinkTime: usize = 0xE64; // float32
                pub const m_flTeamDMLastAnnouncementTime: usize = 0xE68; // float32
                pub const m_iAccountTerrorist: usize = 0xE6C; // int32
                pub const m_iAccountCT: usize = 0xE70; // int32
                pub const m_iSpawnPointCount_Terrorist: usize = 0xE74; // int32
                pub const m_iSpawnPointCount_CT: usize = 0xE78; // int32
                pub const m_iMaxNumTerrorists: usize = 0xE7C; // int32
                pub const m_iMaxNumCTs: usize = 0xE80; // int32
                pub const m_iLoserBonusMostRecentTeam: usize = 0xE84; // int32
                pub const m_tmNextPeriodicThink: usize = 0xE88; // float32
                pub const m_bVoiceWonMatchBragFired: usize = 0xE8C; // bool
                pub const m_fWarmupNextChatNoticeTime: usize = 0xE90; // float32
                pub const m_iHostagesRescued: usize = 0xE98; // int32
                pub const m_iHostagesTouched: usize = 0xE9C; // int32
                pub const m_flNextHostageAnnouncement: usize = 0xEA0; // float32
                pub const m_bNoTerroristsKilled: usize = 0xEA4; // bool
                pub const m_bNoCTsKilled: usize = 0xEA5; // bool
                pub const m_bNoEnemiesKilled: usize = 0xEA6; // bool
                pub const m_bCanDonateWeapons: usize = 0xEA7; // bool
                pub const m_firstKillTime: usize = 0xEAC; // float32
                pub const m_firstBloodTime: usize = 0xEB4; // float32
                pub const m_hostageWasInjured: usize = 0xED0; // bool
                pub const m_hostageWasKilled: usize = 0xED1; // bool
                pub const m_bVoteCalled: usize = 0xEE0; // bool
                pub const m_bServerVoteOnReset: usize = 0xEE1; // bool
                pub const m_flVoteCheckThrottle: usize = 0xEE4; // float32
                pub const m_bBuyTimeEnded: usize = 0xEE8; // bool
                pub const m_nLastFreezeEndBeep: usize = 0xEEC; // int32
                pub const m_bTargetBombed: usize = 0xEF0; // bool
                pub const m_bBombDefused: usize = 0xEF1; // bool
                pub const m_bMapHasBombZone: usize = 0xEF2; // bool
                pub const m_vecMainCTSpawnPos: usize = 0xF40; // Vector
                pub const m_CTSpawnPointsMasterList: usize = 0xF50; // CUtlVector<SpawnPoint*>
                pub const m_TerroristSpawnPointsMasterList: usize = 0xF68; // CUtlVector<SpawnPoint*>
                pub const m_bRespawningAllRespawnablePlayers: usize = 0xF80; // bool
                pub const m_iNextCTSpawnPoint: usize = 0xF84; // int32
                pub const m_flCTSpawnPointUsedTime: usize = 0xF88; // float32
                pub const m_iNextTerroristSpawnPoint: usize = 0xF8C; // int32
                pub const m_flTerroristSpawnPointUsedTime: usize = 0xF90; // float32
                pub const m_CTSpawnPoints: usize = 0xF98; // CUtlVector<SpawnPoint*>
                pub const m_TerroristSpawnPoints: usize = 0xFB0; // CUtlVector<SpawnPoint*>
                pub const m_bIsUnreservedGameServer: usize = 0xFC8; // bool
                pub const m_fAutobalanceDisplayTime: usize = 0xFCC; // float32
                pub const m_bAllowWeaponSwitch: usize = 0x1008; // bool
                pub const m_bRoundTimeWarningTriggered: usize = 0x1009; // bool
                pub const m_phaseChangeAnnouncementTime: usize = 0x100C; // GameTime_t
                pub const m_fNextUpdateTeamClanNamesTime: usize = 0x1010; // float32
                pub const m_flLastThinkTime: usize = 0x1014; // GameTime_t
                pub const m_fAccumulatedRoundOffDamage: usize = 0x1018; // float32
                pub const m_nShorthandedBonusLastEvalRound: usize = 0x101C; // int32
                pub const m_nMatchAbortedEarlyReason: usize = 0x1068; // int32
                pub const m_bHasTriggeredRoundStartMusic: usize = 0x106C; // bool
                pub const m_bSwitchingTeamsAtRoundReset: usize = 0x106D; // bool
                pub const m_pGameModeRules: usize = 0x1088; // CCSGameModeRules*
                pub const m_BtGlobalBlackboard: usize = 0x1090; // KeyValues3
                pub const m_hPlayerResource: usize = 0x1128; // CHandle<CBaseEntity>
                pub const m_RetakeRules: usize = 0x1130; // CRetakeGameRules
                pub const m_arrTeamUniqueKillWeaponsMatch: usize = 0x12C0; // CUtlVector<int32>[4]
                pub const m_bTeamLastKillUsedUniqueWeaponMatch: usize = 0x1320; // bool[4]
                pub const m_nMatchEndCount: usize = 0x1348; // uint8
                pub const m_nTTeamIntroVariant: usize = 0x134C; // int32
                pub const m_nCTTeamIntroVariant: usize = 0x1350; // int32
                pub const m_bTeamIntroPeriod: usize = 0x1354; // bool
                pub const m_fTeamIntroPeriodEnd: usize = 0x1358; // GameTime_t
                pub const m_bPlayedTeamIntroVO: usize = 0x135C; // bool
                pub const m_iRoundEndWinnerTeam: usize = 0x1360; // int32
                pub const m_eRoundEndReason: usize = 0x1364; // int32
                pub const m_bRoundEndShowTimerDefend: usize = 0x1368; // bool
                pub const m_iRoundEndTimerTime: usize = 0x136C; // int32
                pub const m_sRoundEndFunFactToken: usize = 0x1370; // CUtlString
                pub const m_iRoundEndFunFactPlayerSlot: usize = 0x1378; // CPlayerSlot
                pub const m_iRoundEndFunFactData1: usize = 0x137C; // int32
                pub const m_iRoundEndFunFactData2: usize = 0x1380; // int32
                pub const m_iRoundEndFunFactData3: usize = 0x1384; // int32
                pub const m_sRoundEndMessage: usize = 0x1388; // CUtlString
                pub const m_iRoundEndPlayerCount: usize = 0x1390; // int32
                pub const m_bRoundEndNoMusic: usize = 0x1394; // bool
                pub const m_iRoundEndLegacy: usize = 0x1398; // int32
                pub const m_nRoundEndCount: usize = 0x139C; // uint8
                pub const m_iRoundStartRoundNumber: usize = 0x13A0; // int32
                pub const m_nRoundStartCount: usize = 0x13A4; // uint8
                pub const m_flLastPerfSampleTime: usize = 0x53B0; // float64
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Outflow_CycleShuffled {
                pub const m_Outputs: usize = 0x48; // CUtlVector<CPulse_OutflowConnection>
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
            pub mod CBaseCSGrenadeProjectile {
                pub const m_vInitialPosition: usize = 0xBD0; // Vector
                pub const m_vInitialVelocity: usize = 0xBDC; // Vector
                pub const m_nBounces: usize = 0xBE8; // int32
                pub const m_nExplodeEffectIndex: usize = 0xBF0; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                pub const m_nExplodeEffectTickBegin: usize = 0xBF8; // int32
                pub const m_vecExplodeEffectOrigin: usize = 0xBFC; // Vector
                pub const m_flSpawnTime: usize = 0xC08; // GameTime_t
                pub const m_unOGSExtraFlags: usize = 0xC0C; // uint8
                pub const m_bDetonationRecorded: usize = 0xC0D; // bool
                pub const m_nItemIndex: usize = 0xC0E; // uint16
                pub const m_vecOriginalSpawnLocation: usize = 0xC10; // Vector
                pub const m_flLastBounceSoundTime: usize = 0xC1C; // GameTime_t
                pub const m_vecGrenadeSpin: usize = 0xC20; // RotationVector
                pub const m_vecLastHitSurfaceNormal: usize = 0xC2C; // Vector
                pub const m_nTicksAtZeroVelocity: usize = 0xC38; // int32
                pub const m_bHasEverHitEnemy: usize = 0xC3C; // bool
            }
            // Parent: CLogicalEntity
            // Field count: 13
            pub mod CPhysConstraint {
                pub const m_nameAttach1: usize = 0x4F8; // CUtlSymbolLarge
                pub const m_nameAttach2: usize = 0x500; // CUtlSymbolLarge
                pub const m_hAttach1: usize = 0x508; // CHandle<CBaseEntity>
                pub const m_hAttach2: usize = 0x50C; // CHandle<CBaseEntity>
                pub const m_nameAttachment1: usize = 0x510; // CUtlSymbolLarge
                pub const m_nameAttachment2: usize = 0x518; // CUtlSymbolLarge
                pub const m_breakSound: usize = 0x520; // CUtlSymbolLarge
                pub const m_forceLimit: usize = 0x528; // float32
                pub const m_torqueLimit: usize = 0x52C; // float32
                pub const m_minTeleportDistance: usize = 0x530; // float32
                pub const m_bSnapObjectPositions: usize = 0x534; // bool
                pub const m_bTreatEntity1AsInfiniteMass: usize = 0x535; // bool
                pub const m_OnBreak: usize = 0x538; // CEntityIOOutput
            }
            // Parent: CLogicalEntity
            // Field count: 3
            pub mod CLogicAchievement {
                pub const m_bDisabled: usize = 0x4F0; // bool
                pub const m_iszAchievementEventID: usize = 0x4F8; // CUtlSymbolLarge
                pub const m_OnFired: usize = 0x500; // CEntityIOOutput
            }
            // Parent: None
            // Field count: 3
            pub mod CCSPlayerController_InventoryServices__NetworkedLoadoutSlot_t {
                pub const pItem: usize = 0x0; // CEconItemView*
                pub const team: usize = 0x8; // uint16
                pub const slot: usize = 0xA; // uint16
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
            pub mod CLightComponent {
                pub const __m_pChainEntity: usize = 0x30; // CNetworkVarChainer
                pub const m_Color: usize = 0x6D; // Color
                pub const m_SecondaryColor: usize = 0x71; // Color
                pub const m_flBrightness: usize = 0x78; // float32
                pub const m_flBrightnessScale: usize = 0x7C; // float32
                pub const m_flBrightnessMult: usize = 0x80; // float32
                pub const m_flRange: usize = 0x84; // float32
                pub const m_flFalloff: usize = 0x88; // float32
                pub const m_flAttenuation0: usize = 0x8C; // float32
                pub const m_flAttenuation1: usize = 0x90; // float32
                pub const m_flAttenuation2: usize = 0x94; // float32
                pub const m_flTheta: usize = 0x98; // float32
                pub const m_flPhi: usize = 0x9C; // float32
                pub const m_hLightCookie: usize = 0xA0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_nCascades: usize = 0xA8; // int32
                pub const m_nCastShadows: usize = 0xAC; // int32
                pub const m_nShadowWidth: usize = 0xB0; // int32
                pub const m_nShadowHeight: usize = 0xB4; // int32
                pub const m_bRenderDiffuse: usize = 0xB8; // bool
                pub const m_nRenderSpecular: usize = 0xBC; // int32
                pub const m_bRenderTransmissive: usize = 0xC0; // bool
                pub const m_flOrthoLightWidth: usize = 0xC4; // float32
                pub const m_flOrthoLightHeight: usize = 0xC8; // float32
                pub const m_nStyle: usize = 0xCC; // int32
                pub const m_Pattern: usize = 0xD0; // CUtlString
                pub const m_nCascadeRenderStaticObjects: usize = 0xD8; // int32
                pub const m_flShadowCascadeCrossFade: usize = 0xDC; // float32
                pub const m_flShadowCascadeDistanceFade: usize = 0xE0; // float32
                pub const m_flShadowCascadeDistance0: usize = 0xE4; // float32
                pub const m_flShadowCascadeDistance1: usize = 0xE8; // float32
                pub const m_flShadowCascadeDistance2: usize = 0xEC; // float32
                pub const m_flShadowCascadeDistance3: usize = 0xF0; // float32
                pub const m_nShadowCascadeResolution0: usize = 0xF4; // int32
                pub const m_nShadowCascadeResolution1: usize = 0xF8; // int32
                pub const m_nShadowCascadeResolution2: usize = 0xFC; // int32
                pub const m_nShadowCascadeResolution3: usize = 0x100; // int32
                pub const m_bUsesBakedShadowing: usize = 0x104; // bool
                pub const m_nShadowPriority: usize = 0x108; // int32
                pub const m_nBakedShadowIndex: usize = 0x10C; // int32
                pub const m_nLightPathUniqueId: usize = 0x110; // int32
                pub const m_nLightMapUniqueId: usize = 0x114; // int32
                pub const m_bRenderToCubemaps: usize = 0x118; // bool
                pub const m_bAllowSSTGeneration: usize = 0x119; // bool
                pub const m_nDirectLight: usize = 0x11C; // int32
                pub const m_nIndirectLight: usize = 0x120; // int32
                pub const m_flFadeMinDist: usize = 0x124; // float32
                pub const m_flFadeMaxDist: usize = 0x128; // float32
                pub const m_flShadowFadeMinDist: usize = 0x12C; // float32
                pub const m_flShadowFadeMaxDist: usize = 0x130; // float32
                pub const m_bEnabled: usize = 0x134; // bool
                pub const m_bFlicker: usize = 0x135; // bool
                pub const m_bPrecomputedFieldsValid: usize = 0x136; // bool
                pub const m_vPrecomputedBoundsMins: usize = 0x138; // Vector
                pub const m_vPrecomputedBoundsMaxs: usize = 0x144; // Vector
                pub const m_vPrecomputedOBBOrigin: usize = 0x150; // Vector
                pub const m_vPrecomputedOBBAngles: usize = 0x15C; // QAngle
                pub const m_vPrecomputedOBBExtent: usize = 0x168; // Vector
                pub const m_flPrecomputedMaxRange: usize = 0x174; // float32
                pub const m_nFogLightingMode: usize = 0x178; // int32
                pub const m_flFogContributionStength: usize = 0x17C; // float32
                pub const m_flNearClipPlane: usize = 0x180; // float32
                pub const m_SkyColor: usize = 0x184; // Color
                pub const m_flSkyIntensity: usize = 0x188; // float32
                pub const m_SkyAmbientBounce: usize = 0x18C; // Color
                pub const m_bUseSecondaryColor: usize = 0x190; // bool
                pub const m_bMixedShadows: usize = 0x191; // bool
                pub const m_flLightStyleStartTime: usize = 0x194; // GameTime_t
                pub const m_flCapsuleLength: usize = 0x198; // float32
                pub const m_flMinRoughness: usize = 0x19C; // float32
                pub const m_bPvsModifyEntity: usize = 0x1B0; // bool
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
            pub mod CCSWeaponBase {
                pub const m_bRemoveable: usize = 0xEA0; // bool
                pub const m_bPlayerAmmoStockOnPickup: usize = 0xEB0; // bool
                pub const m_bRequireUseToTouch: usize = 0xEB1; // bool
                pub const m_iWeaponGameplayAnimState: usize = 0xEB2; // WeaponGameplayAnimState
                pub const m_flWeaponGameplayAnimStateTimestamp: usize = 0xEB4; // GameTime_t
                pub const m_flInspectCancelCompleteTime: usize = 0xEB8; // GameTime_t
                pub const m_bInspectPending: usize = 0xEBC; // bool
                pub const m_bInspectShouldLoop: usize = 0xEBD; // bool
                pub const m_nLastEmptySoundCmdNum: usize = 0xEE8; // int32
                pub const m_bFireOnEmpty: usize = 0xF08; // bool
                pub const m_OnPlayerPickup: usize = 0xF10; // CEntityIOOutput
                pub const m_weaponMode: usize = 0xF38; // CSWeaponMode
                pub const m_flTurningInaccuracyDelta: usize = 0xF3C; // float32
                pub const m_vecTurningInaccuracyEyeDirLast: usize = 0xF40; // Vector
                pub const m_flTurningInaccuracy: usize = 0xF4C; // float32
                pub const m_fAccuracyPenalty: usize = 0xF50; // float32
                pub const m_flLastAccuracyUpdateTime: usize = 0xF54; // GameTime_t
                pub const m_fAccuracySmoothedForZoom: usize = 0xF58; // float32
                pub const m_iRecoilIndex: usize = 0xF5C; // int32
                pub const m_flRecoilIndex: usize = 0xF60; // float32
                pub const m_bBurstMode: usize = 0xF64; // bool
                pub const m_nPostponeFireReadyTicks: usize = 0xF68; // GameTick_t
                pub const m_flPostponeFireReadyFrac: usize = 0xF6C; // float32
                pub const m_bInReload: usize = 0xF70; // bool
                pub const m_flDroppedAtTime: usize = 0xF74; // GameTime_t
                pub const m_bIsHauledBack: usize = 0xF78; // bool
                pub const m_bSilencerOn: usize = 0xF79; // bool
                pub const m_flTimeSilencerSwitchComplete: usize = 0xF7C; // GameTime_t
                pub const m_iOriginalTeamNumber: usize = 0xF80; // int32
                pub const m_iMostRecentTeamNumber: usize = 0xF84; // int32
                pub const m_bDroppedNearBuyZone: usize = 0xF88; // bool
                pub const m_flNextAttackRenderTimeOffset: usize = 0xF8C; // float32
                pub const m_bCanBePickedUp: usize = 0xFA0; // bool
                pub const m_bUseCanOverrideNextOwnerTouchTime: usize = 0xFA1; // bool
                pub const m_nextOwnerTouchTime: usize = 0xFA4; // GameTime_t
                pub const m_nextPrevOwnerTouchTime: usize = 0xFA8; // GameTime_t
                pub const m_nextPrevOwnerUseTime: usize = 0xFB0; // GameTime_t
                pub const m_hPrevOwner: usize = 0xFB4; // CHandle<CCSPlayerPawn>
                pub const m_nDropTick: usize = 0xFB8; // GameTick_t
                pub const m_bWasActiveWeaponWhenDropped: usize = 0xFBC; // bool
                pub const m_donated: usize = 0xFDC; // bool
                pub const m_fLastShotTime: usize = 0xFE0; // GameTime_t
                pub const m_bWasOwnedByCT: usize = 0xFE4; // bool
                pub const m_bWasOwnedByTerrorist: usize = 0xFE5; // bool
                pub const m_numRemoveUnownedWeaponThink: usize = 0xFE8; // int32
                pub const m_IronSightController: usize = 0xFF0; // CIronSightController
                pub const m_iIronSightMode: usize = 0x1008; // int32
                pub const m_flLastLOSTraceFailureTime: usize = 0x100C; // GameTime_t
                pub const m_flWatTickOffset: usize = 0x1010; // float32
                pub const m_flLastShakeTime: usize = 0x1020; // GameTime_t
            }
            // Parent: CBaseClientUIEntity
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_hActivator (EHANDLE)
            pub mod CPointClientUIDialog {
                pub const m_hActivator: usize = 0x988; // CHandle<CBaseEntity>
                pub const m_bStartEnabled: usize = 0x98C; // bool
            }
            // Parent: CLogicalEntity
            // Field count: 4
            pub mod CLogicLineToEntity {
                pub const m_Line: usize = 0x4F0; // CEntityOutputTemplate<Vector>
                pub const m_SourceName: usize = 0x518; // CUtlSymbolLarge
                pub const m_StartEntity: usize = 0x520; // CHandle<CBaseEntity>
                pub const m_EndEntity: usize = 0x524; // CHandle<CBaseEntity>
            }
            // Parent: CSoundAreaEntityBase
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_flRadius (float)
            pub mod CSoundAreaEntitySphere {
                pub const m_flRadius: usize = 0x510; // float32
            }
            // Parent: CPlayerPawnComponent
            // Field count: 4
            //
            // Metadata:
            // NetworkVarNames: m_bIsRescuing (bool)
            // NetworkVarNames: m_weaponPurchasesThisMatch (WeaponPurchaseTracker_t)
            // NetworkVarNames: m_weaponPurchasesThisRound (WeaponPurchaseTracker_t)
            pub mod CCSPlayer_ActionTrackingServices {
                pub const m_hLastWeaponBeforeC4AutoSwitch: usize = 0x1F0; // CHandle<CBasePlayerWeapon>
                pub const m_bIsRescuing: usize = 0x21C; // bool
                pub const m_weaponPurchasesThisMatch: usize = 0x220; // WeaponPurchaseTracker_t
                pub const m_weaponPurchasesThisRound: usize = 0x290; // WeaponPurchaseTracker_t
            }
            // Parent: CBaseButton
            // Field count: 0
            pub mod CPhysicalButton {
            }
            // Parent: CLogicalEntity
            // Field count: 13
            pub mod CInfoSpawnGroupLoadUnload {
                pub const m_OnSpawnGroupLoadStarted: usize = 0x4F0; // CEntityIOOutput
                pub const m_OnSpawnGroupLoadFinished: usize = 0x518; // CEntityIOOutput
                pub const m_OnSpawnGroupUnloadStarted: usize = 0x540; // CEntityIOOutput
                pub const m_OnSpawnGroupUnloadFinished: usize = 0x568; // CEntityIOOutput
                pub const m_iszSpawnGroupName: usize = 0x590; // CUtlSymbolLarge
                pub const m_iszSpawnGroupFilterName: usize = 0x598; // CUtlSymbolLarge
                pub const m_iszLandmarkName: usize = 0x5A0; // CUtlSymbolLarge
                pub const m_sFixedSpawnGroupName: usize = 0x5A8; // CUtlString
                pub const m_flTimeoutInterval: usize = 0x5B0; // float32
                pub const m_bAutoActivate: usize = 0x5B4; // bool
                pub const m_bUnloadingStarted: usize = 0x5B5; // bool
                pub const m_bQueueActiveSpawnGroupChange: usize = 0x5B6; // bool
                pub const m_bQueueFinishLoading: usize = 0x5B7; // bool
            }
            // Parent: CSoundAreaEntityBase
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_vMin (Vector)
            // NetworkVarNames: m_vMax (Vector)
            pub mod CSoundAreaEntityOrientedBox {
                pub const m_vMin: usize = 0x510; // Vector
                pub const m_vMax: usize = 0x51C; // Vector
            }
            // Parent: CPlayer_MovementServices
            // Field count: 0
            pub mod CCSObserver_MovementServices {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorSubHeaderText
            pub mod CPulseCell_Outflow_ListenForAnimgraphTag {
                pub const m_OnStart: usize = 0x48; // CPulse_ResumePoint
                pub const m_OnEnd: usize = 0x90; // CPulse_ResumePoint
                pub const m_OnCanceled: usize = 0xD8; // CPulse_ResumePoint
                pub const m_TagName: usize = 0x120; // CGlobalSymbol
            }
            // Parent: CEntityComponent
            // Field count: 2
            pub mod CBodyComponent {
                pub const m_pSceneNode: usize = 0x8; // CGameSceneNode*
                pub const __m_pChainEntity: usize = 0x48; // CNetworkVarChainer
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Inflow_Method {
                pub const m_MethodName: usize = 0x80; // PulseSymbol_t
                pub const m_Description: usize = 0x90; // CUtlString
                pub const m_bIsPublic: usize = 0x98; // bool
                pub const m_ReturnType: usize = 0xA0; // CPulseValueFullType
                pub const m_Args: usize = 0xB8; // CUtlLeanVector<CPulseRuntimeMethodArg>
            }
            // Parent: CBaseCSGrenade
            // Field count: 0
            pub mod CDecoyGrenade {
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
            pub mod CEconItemView {
                pub const m_iItemDefinitionIndex: usize = 0x38; // uint16
                pub const m_iEntityQuality: usize = 0x3C; // int32
                pub const m_iEntityLevel: usize = 0x40; // uint32
                pub const m_iItemID: usize = 0x48; // uint64
                pub const m_iItemIDHigh: usize = 0x50; // uint32
                pub const m_iItemIDLow: usize = 0x54; // uint32
                pub const m_iAccountID: usize = 0x58; // uint32
                pub const m_iInventoryPosition: usize = 0x5C; // uint32
                pub const m_bInitialized: usize = 0x68; // bool
                pub const m_AttributeList: usize = 0x70; // CAttributeList
                pub const m_NetworkedDynamicAttributes: usize = 0xE8; // CAttributeList
                pub const m_szCustomName: usize = 0x160; // char[161]
                pub const m_szCustomNameOverride: usize = 0x201; // char[161]
            }
            // Parent: CMolotovGrenade
            // Field count: 0
            pub mod CIncendiaryGrenade {
            }
            // Parent: CPointEntity
            // Field count: 1
            pub mod CBaseDMStart {
                pub const m_Master: usize = 0x4F0; // CUtlSymbolLarge
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
            pub mod CBaseModelEntity {
                pub const m_CRenderComponent: usize = 0x4F0; // CRenderComponent*
                pub const m_CHitboxComponent: usize = 0x4F8; // CHitboxComponent
                pub const m_nDestructiblePartInitialStateDestructed0: usize = 0x510; // HitGroup_t
                pub const m_nDestructiblePartInitialStateDestructed1: usize = 0x514; // HitGroup_t
                pub const m_nDestructiblePartInitialStateDestructed2: usize = 0x518; // HitGroup_t
                pub const m_nDestructiblePartInitialStateDestructed3: usize = 0x51C; // HitGroup_t
                pub const m_nDestructiblePartInitialStateDestructed4: usize = 0x520; // HitGroup_t
                pub const m_nDestructiblePartInitialStateDestructed0_PartIndex: usize = 0x524; // int32
                pub const m_nDestructiblePartInitialStateDestructed1_PartIndex: usize = 0x528; // int32
                pub const m_nDestructiblePartInitialStateDestructed2_PartIndex: usize = 0x52C; // int32
                pub const m_nDestructiblePartInitialStateDestructed3_PartIndex: usize = 0x530; // int32
                pub const m_nDestructiblePartInitialStateDestructed4_PartIndex: usize = 0x534; // int32
                pub const m_pDestructiblePartsSystemComponent: usize = 0x538; // CDestructiblePartsComponent*
                pub const m_LastHitGroup: usize = 0x540; // HitGroup_t
                pub const m_sLastDamageSourceName: usize = 0x548; // CGlobalSymbol
                pub const m_vLastDamagePosition: usize = 0x550; // VectorWS
                pub const m_flDissolveStartTime: usize = 0x55C; // GameTime_t
                pub const m_OnIgnite: usize = 0x560; // CEntityIOOutput
                pub const m_nRenderMode: usize = 0x588; // RenderMode_t
                pub const m_nRenderFX: usize = 0x589; // RenderFx_t
                pub const m_bAllowFadeInView: usize = 0x58A; // bool
                pub const m_clrRender: usize = 0x5A8; // Color
                pub const m_vecRenderAttributes: usize = 0x5B0; // CUtlVectorEmbeddedNetworkVar<EntityRenderAttribute_t>
                pub const m_bRenderToCubemaps: usize = 0x618; // bool
                pub const m_bNoInterpolate: usize = 0x619; // bool
                pub const m_Collision: usize = 0x620; // CCollisionProperty
                pub const m_Glow: usize = 0x6D0; // CGlowProperty
                pub const m_flGlowBackfaceMult: usize = 0x728; // float32
                pub const m_fadeMinDist: usize = 0x72C; // float32
                pub const m_fadeMaxDist: usize = 0x730; // float32
                pub const m_flFadeScale: usize = 0x734; // float32
                pub const m_flShadowStrength: usize = 0x738; // float32
                pub const m_nObjectCulling: usize = 0x73C; // uint8
                pub const m_nAddDecal: usize = 0x740; // int32
                pub const m_vDecalPosition: usize = 0x744; // Vector
                pub const m_vDecalForwardAxis: usize = 0x750; // Vector
                pub const m_nDecalMode: usize = 0x75C; // DecalMode_t
                pub const m_nRequiredDecalMode: usize = 0x75D; // DecalMode_t
                pub const m_ConfigEntitiesToPropagateMaterialDecalsTo: usize = 0x760; // CNetworkUtlVectorBase<CHandle<CBaseModelEntity>>
                pub const m_vecViewOffset: usize = 0x7A0; // CNetworkViewOffsetVector
                pub const m_bvDisabledHitGroups: usize = 0x7D0; // uint32[1]
            }
            // Parent: 
            // Field count: 14
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
            pub mod CGlowProperty {
                pub const m_fGlowColor: usize = 0x8; // Vector
                pub const m_iGlowType: usize = 0x30; // int32
                pub const m_iGlowTeam: usize = 0x34; // int32
                pub const m_nGlowRange: usize = 0x38; // int32
                pub const m_nGlowRangeMin: usize = 0x3C; // int32
                pub const m_glowColorOverride: usize = 0x40; // Color
                pub const m_bFlashing: usize = 0x44; // bool
                pub const m_flGlowTime: usize = 0x48; // float32
                pub const m_flGlowStartTime: usize = 0x4C; // float32
                pub const m_bEligibleForScreenHighlight: usize = 0x50; // bool
                pub const m_bGlowing: usize = 0x51; // bool
            }
            // Parent: CSceneEntity
            // Field count: 7
            pub mod CInstancedSceneEntity {
                pub const m_hOwner: usize = 0xA50; // CHandle<CBaseEntity>
                pub const m_bHadOwner: usize = 0xA54; // bool
                pub const m_flPostSpeakDelay: usize = 0xA58; // float32
                pub const m_flPreDelay: usize = 0xA5C; // float32
                pub const m_bIsBackground: usize = 0xA60; // bool
                pub const m_bRemoveOnCompletion: usize = 0xA61; // bool
                pub const m_hTarget: usize = 0xA64; // CHandle<CBaseEntity>
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_BaseValue {
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
            pub mod CCitadelSoundOpvarSetOBB {
                pub const m_iszStackName: usize = 0x4F0; // CUtlSymbolLarge
                pub const m_iszOperatorName: usize = 0x4F8; // CUtlSymbolLarge
                pub const m_iszOpvarName: usize = 0x500; // CUtlSymbolLarge
                pub const m_vDistanceInnerMins: usize = 0x508; // Vector
                pub const m_vDistanceInnerMaxs: usize = 0x514; // Vector
                pub const m_vDistanceOuterMins: usize = 0x520; // Vector
                pub const m_vDistanceOuterMaxs: usize = 0x52C; // Vector
                pub const m_nAABBDirection: usize = 0x538; // int32
            }
            // Parent: CBaseEntity
            // Field count: 2
            pub mod CSoundEventParameter {
                pub const m_iszParamName: usize = 0x508; // CUtlSymbolLarge
                pub const m_flFloatValue: usize = 0x510; // float32
            }
            // Parent: CPlayerPawnComponent
            // Field count: 0
            pub mod CPlayer_WaterServices {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorCanvasItemSpecKV3
            pub mod CPulseCell_BooleanSwitchState {
                pub const m_Condition: usize = 0x48; // PulseObservableBoolExpression_t
                pub const m_SubGraph: usize = 0xC0; // CPulse_OutflowConnection
                pub const m_WhenTrue: usize = 0x108; // CPulse_OutflowConnection
                pub const m_WhenFalse: usize = 0x150; // CPulse_OutflowConnection
            }
            // Parent: CBaseButton
            // Field count: 0
            pub mod CRotButton {
            }
            // Parent: CPointEntity
            // Field count: 2
            pub mod CEnvViewPunch {
                pub const m_flRadius: usize = 0x4F0; // float32
                pub const m_angViewPunch: usize = 0x4F4; // QAngle
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
            pub mod CDamageRecord {
                pub const m_PlayerDamager: usize = 0x30; // CHandle<CCSPlayerPawn>
                pub const m_PlayerRecipient: usize = 0x34; // CHandle<CCSPlayerPawn>
                pub const m_hPlayerControllerDamager: usize = 0x38; // CHandle<CCSPlayerController>
                pub const m_hPlayerControllerRecipient: usize = 0x3C; // CHandle<CCSPlayerController>
                pub const m_szPlayerDamagerName: usize = 0x40; // CUtlString
                pub const m_szPlayerRecipientName: usize = 0x48; // CUtlString
                pub const m_DamagerXuid: usize = 0x50; // uint64
                pub const m_RecipientXuid: usize = 0x58; // uint64
                pub const m_flBulletsDamage: usize = 0x60; // float32
                pub const m_flDamage: usize = 0x64; // float32
                pub const m_flActualHealthRemoved: usize = 0x68; // float32
                pub const m_iNumHits: usize = 0x6C; // int32
                pub const m_iLastBulletUpdate: usize = 0x70; // int32
                pub const m_bIsOtherEnemy: usize = 0x74; // bool
                pub const m_killType: usize = 0x75; // EKillTypes_t
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
            // Parent: CItem
            // Field count: 0
            pub mod CItemKevlar {
            }
            // Parent: CBaseModelEntity
            // Field count: 26
            pub mod CFuncShatterglass {
                pub const m_matPanelTransform: usize = 0x7D8; // matrix3x4_t
                pub const m_matPanelTransformWsTemp: usize = 0x808; // matrix3x4_t
                pub const m_vecShatterGlassShards: usize = 0x838; // CUtlVector<uint32>
                pub const m_PanelSize: usize = 0x850; // Vector2D
                pub const m_flLastShatterSoundEmitTime: usize = 0x858; // GameTime_t
                pub const m_flLastCleanupTime: usize = 0x85C; // GameTime_t
                pub const m_flInitAtTime: usize = 0x860; // GameTime_t
                pub const m_flGlassThickness: usize = 0x864; // float32
                pub const m_flSpawnInvulnerability: usize = 0x868; // float32
                pub const m_bBreakSilent: usize = 0x86C; // bool
                pub const m_bBreakShardless: usize = 0x86D; // bool
                pub const m_bBroken: usize = 0x86E; // bool
                pub const m_bGlassNavIgnore: usize = 0x86F; // bool
                pub const m_bGlassInFrame: usize = 0x870; // bool
                pub const m_bStartBroken: usize = 0x871; // bool
                pub const m_iInitialDamageType: usize = 0x872; // uint8
                pub const m_szDamagePositioningEntityName01: usize = 0x878; // CUtlSymbolLarge
                pub const m_szDamagePositioningEntityName02: usize = 0x880; // CUtlSymbolLarge
                pub const m_szDamagePositioningEntityName03: usize = 0x888; // CUtlSymbolLarge
                pub const m_szDamagePositioningEntityName04: usize = 0x890; // CUtlSymbolLarge
                pub const m_vInitialDamagePositions: usize = 0x898; // CUtlVector<Vector>
                pub const m_vExtraDamagePositions: usize = 0x8B0; // CUtlVector<Vector>
                pub const m_vInitialPanelVertices: usize = 0x8C8; // CUtlVector<Vector4D>
                pub const m_OnBroken: usize = 0x8E0; // CEntityIOOutput
                pub const m_iSurfaceType: usize = 0x908; // uint8
                pub const m_hMaterialDamageBase: usize = 0x910; // CStrongHandle<InfoForResourceTypeIMaterial2>
            }
            // Parent: CPointEntity
            // Field count: 0
            pub mod CNavWalkable {
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
            pub mod CPlantedC4 {
                pub const m_bBombTicking: usize = 0xA98; // bool
                pub const m_flC4Blow: usize = 0xA9C; // GameTime_t
                pub const m_nBombSite: usize = 0xAA0; // int32
                pub const m_nSourceSoundscapeHash: usize = 0xAA4; // int32
                pub const m_bAbortDetonationBecauseWorldIsFrozen: usize = 0xAA8; // bool
                pub const m_AttributeManager: usize = 0xAB0; // CAttributeContainer
                pub const m_OnBombDefused: usize = 0xDA8; // CEntityIOOutput
                pub const m_OnBombBeginDefuse: usize = 0xDD0; // CEntityIOOutput
                pub const m_OnBombDefuseAborted: usize = 0xDF8; // CEntityIOOutput
                pub const m_bCannotBeDefused: usize = 0xE20; // bool
                pub const m_entitySpottedState: usize = 0xE28; // EntitySpottedState_t
                pub const m_nSpotRules: usize = 0xE40; // int32
                pub const m_bTrainingPlacedByPlayer: usize = 0xE44; // bool
                pub const m_bHasExploded: usize = 0xE45; // bool
                pub const m_flTimerLength: usize = 0xE48; // float32
                pub const m_bBeingDefused: usize = 0xE4C; // bool
                pub const m_fLastDefuseTime: usize = 0xE54; // GameTime_t
                pub const m_flDefuseLength: usize = 0xE5C; // float32
                pub const m_flDefuseCountDown: usize = 0xE60; // GameTime_t
                pub const m_bBombDefused: usize = 0xE64; // bool
                pub const m_hBombDefuser: usize = 0xE68; // CHandle<CCSPlayerPawn>
                pub const m_iProgressBarTime: usize = 0xE6C; // int32
                pub const m_bVoiceAlertFired: usize = 0xE70; // bool
                pub const m_bVoiceAlertPlayed: usize = 0xE71; // bool[4]
                pub const m_flNextBotBeepTime: usize = 0xE78; // GameTime_t
                pub const m_angCatchUpToPlayerEye: usize = 0xE80; // QAngle
                pub const m_flLastSpinDetectionTime: usize = 0xE8C; // GameTime_t
            }
            // Parent: CEnvSoundscapeProxy
            // Field count: 0
            pub mod CEnvSoundscapeProxyAlias_snd_soundscape_proxy {
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
            pub mod CVoteController {
                pub const m_iActiveIssueIndex: usize = 0x4F0; // int32
                pub const m_iOnlyTeamToVote: usize = 0x4F4; // int32
                pub const m_nVoteOptionCount: usize = 0x4F8; // int32[5]
                pub const m_nPotentialVotes: usize = 0x50C; // int32
                pub const m_bIsYesNoVote: usize = 0x510; // bool
                pub const m_acceptingVotesTimer: usize = 0x518; // CountdownTimer
                pub const m_executeCommandTimer: usize = 0x530; // CountdownTimer
                pub const m_resetVoteTimer: usize = 0x548; // CountdownTimer
                pub const m_nVotesCast: usize = 0x560; // int32[64]
                pub const m_playerHoldingVote: usize = 0x660; // CPlayerSlot
                pub const m_playerOverrideForVote: usize = 0x664; // CPlayerSlot
                pub const m_nHighestCountIndex: usize = 0x668; // int32
                pub const m_potentialIssues: usize = 0x670; // CUtlVector<CBaseIssue*>
                pub const m_VoteOptions: usize = 0x688; // CUtlVector<char*>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Inflow_Yield {
                pub const m_UnyieldResume: usize = 0x48; // CPulse_ResumePoint
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyDescription
            pub mod CPulseMathlib {
            }
            // Parent: CPointEntity
            // Field count: 3
            pub mod CPhysImpact {
                pub const m_damage: usize = 0x4F0; // float32
                pub const m_distance: usize = 0x4F4; // float32
                pub const m_directionEntityName: usize = 0x4F8; // CUtlSymbolLarge
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
            pub mod CBaseEntity {
                pub const m_CBodyComponent: usize = 0x38; // CBodyComponent*
                pub const m_NetworkTransmitComponent: usize = 0x40; // CNetworkTransmitComponent
                pub const m_aThinkFunctions: usize = 0x248; // CUtlVector<thinkfunc_t>
                pub const m_iCurrentThinkContext: usize = 0x260; // int32
                pub const m_nLastThinkTick: usize = 0x264; // GameTick_t
                pub const m_bDisabledContextThinks: usize = 0x268; // bool
                pub const m_isSteadyState: usize = 0x278; // CTypedBitVec<64>
                pub const m_lastNetworkChange: usize = 0x280; // float32
                pub const m_ResponseContexts: usize = 0x290; // CUtlVector<ResponseContext_t>
                pub const m_iszResponseContext: usize = 0x2A8; // CUtlSymbolLarge
                pub const m_iHealth: usize = 0x2D0; // int32
                pub const m_iMaxHealth: usize = 0x2D4; // int32
                pub const m_lifeState: usize = 0x2D8; // uint8
                pub const m_flDamageAccumulator: usize = 0x2DC; // float32
                pub const m_bTakesDamage: usize = 0x2E0; // bool
                pub const m_nTakeDamageFlags: usize = 0x2E8; // TakeDamageFlags_t
                pub const m_nPlatformType: usize = 0x2F0; // EntityPlatformTypes_t
                pub const m_MoveCollide: usize = 0x2F2; // MoveCollide_t
                pub const m_MoveType: usize = 0x2F3; // MoveType_t
                pub const m_nActualMoveType: usize = 0x2F4; // MoveType_t
                pub const m_nWaterTouch: usize = 0x2F5; // uint8
                pub const m_nSlimeTouch: usize = 0x2F6; // uint8
                pub const m_bRestoreInHierarchy: usize = 0x2F7; // bool
                pub const m_target: usize = 0x2F8; // CUtlSymbolLarge
                pub const m_hDamageFilter: usize = 0x300; // CHandle<CBaseFilter>
                pub const m_iszDamageFilterName: usize = 0x308; // CUtlSymbolLarge
                pub const m_flMoveDoneTime: usize = 0x310; // float32
                pub const m_nSubclassID: usize = 0x314; // CUtlStringToken
                pub const m_flAnimTime: usize = 0x320; // float32
                pub const m_flSimulationTime: usize = 0x324; // float32
                pub const m_flCreateTime: usize = 0x328; // GameTime_t
                pub const m_bClientSideRagdoll: usize = 0x32C; // bool
                pub const m_ubInterpolationFrame: usize = 0x32D; // uint8
                pub const m_vPrevVPhysicsUpdatePos: usize = 0x330; // Vector
                pub const m_iTeamNum: usize = 0x33C; // uint8
                pub const m_iGlobalname: usize = 0x340; // CUtlSymbolLarge
                pub const m_iSentToClients: usize = 0x348; // int32
                pub const m_flSpeed: usize = 0x34C; // float32
                pub const m_sUniqueHammerID: usize = 0x350; // CUtlString
                pub const m_spawnflags: usize = 0x358; // uint32
                pub const m_nNextThinkTick: usize = 0x35C; // GameTick_t
                pub const m_nSimulationTick: usize = 0x360; // int32
                pub const m_OnKilled: usize = 0x368; // CEntityIOOutput
                pub const m_fFlags: usize = 0x390; // uint32
                pub const m_vecAbsVelocity: usize = 0x394; // Vector
                pub const m_vecVelocity: usize = 0x3A0; // CNetworkVelocityVector
                pub const m_vecBaseVelocity: usize = 0x3D0; // Vector
                pub const m_nPushEnumCount: usize = 0x3DC; // int32
                pub const m_pCollision: usize = 0x3E0; // CCollisionProperty*
                pub const m_hEffectEntity: usize = 0x3E8; // CHandle<CBaseEntity>
                pub const m_hOwnerEntity: usize = 0x3EC; // CHandle<CBaseEntity>
                pub const m_fEffects: usize = 0x3F0; // uint32
                pub const m_hGroundEntity: usize = 0x3F4; // CHandle<CBaseEntity>
                pub const m_nGroundBodyIndex: usize = 0x3F8; // int32
                pub const m_flFriction: usize = 0x3FC; // float32
                pub const m_flElasticity: usize = 0x400; // float32
                pub const m_flGravityScale: usize = 0x404; // float32
                pub const m_flTimeScale: usize = 0x408; // float32
                pub const m_flWaterLevel: usize = 0x40C; // float32
                pub const m_bGravityDisabled: usize = 0x410; // bool
                pub const m_bAnimatedEveryTick: usize = 0x411; // bool
                pub const m_flActualGravityScale: usize = 0x414; // float32
                pub const m_bGravityActuallyDisabled: usize = 0x418; // bool
                pub const m_bDisableLowViolence: usize = 0x419; // bool
                pub const m_nWaterType: usize = 0x41A; // uint8
                pub const m_iEFlags: usize = 0x41C; // int32
                pub const m_OnUser1: usize = 0x420; // CEntityIOOutput
                pub const m_OnUser2: usize = 0x448; // CEntityIOOutput
                pub const m_OnUser3: usize = 0x470; // CEntityIOOutput
                pub const m_OnUser4: usize = 0x498; // CEntityIOOutput
                pub const m_iInitialTeamNum: usize = 0x4C0; // int32
                pub const m_flNavIgnoreUntilTime: usize = 0x4C4; // GameTime_t
                pub const m_vecAngVelocity: usize = 0x4C8; // QAngle
                pub const m_bNetworkQuantizeOriginAndAngles: usize = 0x4D4; // bool
                pub const m_bLagCompensate: usize = 0x4D5; // bool
                pub const m_pBlocker: usize = 0x4D8; // CHandle<CBaseEntity>
                pub const m_flLocalTime: usize = 0x4DC; // float32
                pub const m_flVPhysicsUpdateLocalTime: usize = 0x4E0; // float32
                pub const m_nBloodType: usize = 0x4E4; // BloodType
                pub const m_pPulseGraphInstance: usize = 0x4E8; // CPulseGraphInstance_ServerEntity*
            }
            // Parent: CPlayerPawnComponent
            // Field count: 0
            pub mod CPlayer_UseServices {
            }
            // Parent: 
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_hOwner (CEntityHandle)
            // NetworkVarNames: m_name (CUtlStringToken)
            pub mod CGameSceneNodeHandle {
                pub const m_hOwner: usize = 0x8; // CEntityHandle
                pub const m_name: usize = 0xC; // CUtlStringToken
            }
            // Parent: CMarkupVolumeTagged
            // Field count: 4
            pub mod CMarkupVolumeWithRef {
                pub const m_bUseRef: usize = 0x820; // bool
                pub const m_vRefPosEntitySpace: usize = 0x824; // Vector
                pub const m_vRefPosWorldSpace: usize = 0x830; // VectorWS
                pub const m_flRefDot: usize = 0x83C; // float32
            }
            // Parent: CCSGO_TeamPreviewCharacterPosition
            // Field count: 0
            pub mod CCSGO_TeamSelectCharacterPosition {
            }
            // Parent: None
            // Field count: 1
            pub mod CPulseCell_Unknown {
                pub const m_UnknownKeys: usize = 0x48; // KeyValues3
            }
            // Parent: CFuncPlat
            // Field count: 2
            pub mod CFuncPlatRot {
                pub const m_end: usize = 0x888; // QAngle
                pub const m_start: usize = 0x894; // QAngle
            }
            // Parent: CPointEntity
            // Field count: 4
            pub mod CRagdollMagnet {
                pub const m_bDisabled: usize = 0x4F0; // bool
                pub const m_radius: usize = 0x4F4; // float32
                pub const m_force: usize = 0x4F8; // float32
                pub const m_axis: usize = 0x4FC; // VectorWS
            }
            // Parent: CPointEntity
            // Field count: 0
            pub mod CInfoInstructorHintTarget {
            }
            // Parent: CSprite
            // Field count: 0
            pub mod CSpriteAlias_env_glow {
            }
            // Parent: CInferno
            // Field count: 0
            pub mod CFireCrackerBlast {
            }
            // Parent: CBaseModelEntity
            // Field count: 4
            //
            // Metadata:
            // NetworkVarNames: m_flLightScale (float32)
            // NetworkVarNames: m_Radius (float32)
            pub mod CSpotlightEnd {
                pub const m_flLightScale: usize = 0x7D8; // float32
                pub const m_Radius: usize = 0x7DC; // float32
                pub const m_vSpotlightDir: usize = 0x7E0; // Vector
                pub const m_vSpotlightOrg: usize = 0x7EC; // VectorWS
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
            pub mod CEnvSky {
                pub const m_hSkyMaterial: usize = 0x7D8; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_hSkyMaterialLightingOnly: usize = 0x7E0; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_bStartDisabled: usize = 0x7E8; // bool
                pub const m_vTintColor: usize = 0x7E9; // Color
                pub const m_vTintColorLightingOnly: usize = 0x7ED; // Color
                pub const m_flBrightnessScale: usize = 0x7F4; // float32
                pub const m_nFogType: usize = 0x7F8; // int32
                pub const m_flFogMinStart: usize = 0x7FC; // float32
                pub const m_flFogMinEnd: usize = 0x800; // float32
                pub const m_flFogMaxStart: usize = 0x804; // float32
                pub const m_flFogMaxEnd: usize = 0x808; // float32
                pub const m_bEnabled: usize = 0x80C; // bool
            }
            // Parent: CPointEntity
            // Field count: 0
            pub mod CInfoSpawnGroupLandmark {
            }
            // Parent: CPointEntity
            // Field count: 12
            pub mod CPointAngleSensor {
                pub const m_bDisabled: usize = 0x4F0; // bool
                pub const m_nLookAtName: usize = 0x4F8; // CUtlSymbolLarge
                pub const m_hTargetEntity: usize = 0x500; // CHandle<CBaseEntity>
                pub const m_hLookAtEntity: usize = 0x504; // CHandle<CBaseEntity>
                pub const m_flDuration: usize = 0x508; // float32
                pub const m_flDotTolerance: usize = 0x50C; // float32
                pub const m_flFacingTime: usize = 0x510; // GameTime_t
                pub const m_bFired: usize = 0x514; // bool
                pub const m_OnFacingLookat: usize = 0x518; // CEntityIOOutput
                pub const m_OnNotFacingLookat: usize = 0x540; // CEntityIOOutput
                pub const m_TargetDir: usize = 0x568; // CEntityOutputTemplate<Vector>
                pub const m_FacingPercentage: usize = 0x590; // CEntityOutputTemplate<float32>
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
            pub mod CEnvWindController {
                pub const m_EnvWindShared: usize = 0x4F0; // CEnvWindShared
                pub const m_fDirectionVariation: usize = 0x640; // float32
                pub const m_fSpeedVariation: usize = 0x644; // float32
                pub const m_fTurbulence: usize = 0x648; // float32
                pub const m_fVolumeHalfExtentXY: usize = 0x64C; // float32
                pub const m_fVolumeHalfExtentZ: usize = 0x650; // float32
                pub const m_nVolumeResolutionXY: usize = 0x654; // int32
                pub const m_nVolumeResolutionZ: usize = 0x658; // int32
                pub const m_nClipmapLevels: usize = 0x65C; // int32
                pub const m_bIsMaster: usize = 0x660; // bool
                pub const m_bFirstTime: usize = 0x661; // bool
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
            pub mod CSPerRoundStats_t {
                pub const m_iKills: usize = 0x30; // int32
                pub const m_iDeaths: usize = 0x34; // int32
                pub const m_iAssists: usize = 0x38; // int32
                pub const m_iDamage: usize = 0x3C; // int32
                pub const m_iEquipmentValue: usize = 0x40; // int32
                pub const m_iMoneySaved: usize = 0x44; // int32
                pub const m_iKillReward: usize = 0x48; // int32
                pub const m_iLiveTime: usize = 0x4C; // int32
                pub const m_iHeadShotKills: usize = 0x50; // int32
                pub const m_iObjective: usize = 0x54; // int32
                pub const m_iCashEarned: usize = 0x58; // int32
                pub const m_iUtilityDamage: usize = 0x5C; // int32
                pub const m_iEnemiesFlashed: usize = 0x60; // int32
            }
            // Parent: CPhysConstraint
            // Field count: 48
            pub mod CGenericConstraint {
                pub const m_nLinearMotionX: usize = 0x568; // JointMotion_t
                pub const m_nLinearMotionY: usize = 0x56C; // JointMotion_t
                pub const m_nLinearMotionZ: usize = 0x570; // JointMotion_t
                pub const m_flLinearFrequencyX: usize = 0x574; // float32
                pub const m_flLinearFrequencyY: usize = 0x578; // float32
                pub const m_flLinearFrequencyZ: usize = 0x57C; // float32
                pub const m_flLinearDampingRatioX: usize = 0x580; // float32
                pub const m_flLinearDampingRatioY: usize = 0x584; // float32
                pub const m_flLinearDampingRatioZ: usize = 0x588; // float32
                pub const m_flMaxLinearImpulseX: usize = 0x58C; // float32
                pub const m_flMaxLinearImpulseY: usize = 0x590; // float32
                pub const m_flMaxLinearImpulseZ: usize = 0x594; // float32
                pub const m_flBreakAfterTimeX: usize = 0x598; // float32
                pub const m_flBreakAfterTimeY: usize = 0x59C; // float32
                pub const m_flBreakAfterTimeZ: usize = 0x5A0; // float32
                pub const m_flBreakAfterTimeStartTimeX: usize = 0x5A4; // GameTime_t
                pub const m_flBreakAfterTimeStartTimeY: usize = 0x5A8; // GameTime_t
                pub const m_flBreakAfterTimeStartTimeZ: usize = 0x5AC; // GameTime_t
                pub const m_flBreakAfterTimeThresholdX: usize = 0x5B0; // float32
                pub const m_flBreakAfterTimeThresholdY: usize = 0x5B4; // float32
                pub const m_flBreakAfterTimeThresholdZ: usize = 0x5B8; // float32
                pub const m_flNotifyForceX: usize = 0x5BC; // float32
                pub const m_flNotifyForceY: usize = 0x5C0; // float32
                pub const m_flNotifyForceZ: usize = 0x5C4; // float32
                pub const m_flNotifyForceMinTimeX: usize = 0x5C8; // float32
                pub const m_flNotifyForceMinTimeY: usize = 0x5CC; // float32
                pub const m_flNotifyForceMinTimeZ: usize = 0x5D0; // float32
                pub const m_flNotifyForceLastTimeX: usize = 0x5D4; // GameTime_t
                pub const m_flNotifyForceLastTimeY: usize = 0x5D8; // GameTime_t
                pub const m_flNotifyForceLastTimeZ: usize = 0x5DC; // GameTime_t
                pub const m_bAxisNotifiedX: usize = 0x5E0; // bool
                pub const m_bAxisNotifiedY: usize = 0x5E1; // bool
                pub const m_bAxisNotifiedZ: usize = 0x5E2; // bool
                pub const m_nAngularMotionX: usize = 0x5E4; // JointMotion_t
                pub const m_nAngularMotionY: usize = 0x5E8; // JointMotion_t
                pub const m_nAngularMotionZ: usize = 0x5EC; // JointMotion_t
                pub const m_flAngularFrequencyX: usize = 0x5F0; // float32
                pub const m_flAngularFrequencyY: usize = 0x5F4; // float32
                pub const m_flAngularFrequencyZ: usize = 0x5F8; // float32
                pub const m_flAngularDampingRatioX: usize = 0x5FC; // float32
                pub const m_flAngularDampingRatioY: usize = 0x600; // float32
                pub const m_flAngularDampingRatioZ: usize = 0x604; // float32
                pub const m_flMaxAngularImpulseX: usize = 0x608; // float32
                pub const m_flMaxAngularImpulseY: usize = 0x60C; // float32
                pub const m_flMaxAngularImpulseZ: usize = 0x610; // float32
                pub const m_NotifyForceReachedX: usize = 0x618; // CEntityIOOutput
                pub const m_NotifyForceReachedY: usize = 0x640; // CEntityIOOutput
                pub const m_NotifyForceReachedZ: usize = 0x668; // CEntityIOOutput
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Outflow_CycleRandom {
                pub const m_Outputs: usize = 0x48; // CUtlVector<CPulse_OutflowConnection>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Step_PublicOutput {
                pub const m_OutputIndex: usize = 0x48; // PulseRuntimeOutputIndex_t
            }
            // Parent: CBeam
            // Field count: 5
            pub mod CEnvLaser {
                pub const m_iszLaserTarget: usize = 0x878; // CUtlSymbolLarge
                pub const m_pSprite: usize = 0x880; // CSprite*
                pub const m_iszSpriteName: usize = 0x888; // CUtlSymbolLarge
                pub const m_firePosition: usize = 0x890; // Vector
                pub const m_flStartFrame: usize = 0x89C; // float32
            }
            // Parent: CBaseEntity
            // Field count: 8
            pub mod CSoundOpvarSetEntity {
                pub const m_iszStackName: usize = 0x508; // CUtlSymbolLarge
                pub const m_iszOperatorName: usize = 0x510; // CUtlSymbolLarge
                pub const m_iszOpvarName: usize = 0x518; // CUtlSymbolLarge
                pub const m_nOpvarType: usize = 0x520; // int32
                pub const m_nOpvarIndex: usize = 0x524; // int32
                pub const m_flOpvarValue: usize = 0x528; // float32
                pub const m_OpvarValueString: usize = 0x530; // CUtlSymbolLarge
                pub const m_bSetOnSpawn: usize = 0x538; // bool
            }
            // Parent: CBaseEntity
            // Field count: 2
            pub mod CEnvBeverage {
                pub const m_CanInDispenser: usize = 0x4F0; // bool
                pub const m_nBeverageType: usize = 0x4F4; // int32
            }
            // Parent: CLogicalEntity
            // Field count: 13
            pub mod CPhysMotor {
                pub const m_nameAttach: usize = 0x4F0; // CUtlSymbolLarge
                pub const m_nameAnchor: usize = 0x4F8; // CUtlSymbolLarge
                pub const m_hAttachedObject: usize = 0x500; // CHandle<CBaseEntity>
                pub const m_hAnchorObject: usize = 0x504; // CHandle<CBaseEntity>
                pub const m_spinUp: usize = 0x508; // float32
                pub const m_spinDown: usize = 0x50C; // float32
                pub const m_flMotorFriction: usize = 0x510; // float32
                pub const m_additionalAcceleration: usize = 0x514; // float32
                pub const m_angularAcceleration: usize = 0x518; // float32
                pub const m_flTorqueScale: usize = 0x51C; // float32
                pub const m_flTargetSpeed: usize = 0x520; // float32
                pub const m_flSpeedWhenSpinUpOrSpinDownStarted: usize = 0x524; // float32
                pub const m_motor: usize = 0x538; // CMotorController
            }
            // Parent: CLogicalEntity
            // Field count: 1
            pub mod CLogicGameEvent {
                pub const m_iszEventName: usize = 0x4F0; // CUtlSymbolLarge
            }
            // Parent: CPhysicsProp
            // Field count: 0
            pub mod CPhysicsPropMultiplayer {
            }
            // Parent: CPointEntity
            // Field count: 10
            pub mod CPhysExplosion {
                pub const m_bExplodeOnSpawn: usize = 0x4F0; // bool
                pub const m_flMagnitude: usize = 0x4F4; // float32
                pub const m_flDamage: usize = 0x4F8; // float32
                pub const m_radius: usize = 0x4FC; // float32
                pub const m_targetEntityName: usize = 0x500; // CUtlSymbolLarge
                pub const m_flInnerRadius: usize = 0x508; // float32
                pub const m_flPushScale: usize = 0x50C; // float32
                pub const m_bConvertToDebrisWhenPossible: usize = 0x510; // bool
                pub const m_bAffectInvulnerableEnts: usize = 0x511; // bool
                pub const m_OnPushedPlayer: usize = 0x518; // CEntityIOOutput
            }
            // Parent: CPhysConstraint
            // Field count: 14
            pub mod CSplineConstraint {
                pub const m_vAnchorOffsetRestore: usize = 0x5B0; // Vector
                pub const m_hSplineEntity: usize = 0x5BC; // CHandle<CBaseEntity>
                pub const m_bEnableLateralConstraint: usize = 0x5C8; // bool
                pub const m_bEnableVerticalConstraint: usize = 0x5C9; // bool
                pub const m_bEnableAngularConstraint: usize = 0x5CA; // bool
                pub const m_bEnableLimit: usize = 0x5CB; // bool
                pub const m_bFireEventsOnPath: usize = 0x5CC; // bool
                pub const m_flLinearFrequency: usize = 0x5D0; // float32
                pub const m_flLinarDampingRatio: usize = 0x5D4; // float32
                pub const m_flJointFriction: usize = 0x5D8; // float32
                pub const m_flTransitionTime: usize = 0x5DC; // float32
                pub const m_vPreSolveAnchorPos: usize = 0x600; // VectorWS
                pub const m_StartTransitionTime: usize = 0x60C; // GameTime_t
                pub const m_vTangentSpaceAnchorAtTransitionStart: usize = 0x610; // Vector
            }
            // Parent: CLogicalEntity
            // Field count: 6
            pub mod CLogicCompare {
                pub const m_flInValue: usize = 0x4F0; // float32
                pub const m_flCompareValue: usize = 0x4F4; // float32
                pub const m_OnLessThan: usize = 0x4F8; // CEntityOutputTemplate<float32>
                pub const m_OnEqualTo: usize = 0x520; // CEntityOutputTemplate<float32>
                pub const m_OnNotEqualTo: usize = 0x548; // CEntityOutputTemplate<float32>
                pub const m_OnGreaterThan: usize = 0x570; // CEntityOutputTemplate<float32>
            }
            // Parent: None
            // Field count: 0
            pub mod CCSGameModeRules_Noop {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulse_BlackboardReference {
                pub const m_hBlackboardResource: usize = 0x0; // CStrongHandle<InfoForResourceTypeIPulseGraphDef>
                pub const m_BlackboardResource: usize = 0x8; // PulseSymbol_t
                pub const m_nNodeID: usize = 0x18; // PulseDocNodeID_t
                pub const m_NodeName: usize = 0x20; // CGlobalSymbol
            }
            // Parent: CFuncTrackTrain
            // Field count: 1
            pub mod CFuncTankTrain {
                pub const m_OnDeath: usize = 0x930; // CEntityIOOutput
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
            pub mod CPointClientUIWorldPanel {
                pub const m_bIgnoreInput: usize = 0x988; // bool
                pub const m_bLit: usize = 0x989; // bool
                pub const m_bFollowPlayerAcrossTeleport: usize = 0x98A; // bool
                pub const m_flWidth: usize = 0x98C; // float32
                pub const m_flHeight: usize = 0x990; // float32
                pub const m_flDPI: usize = 0x994; // float32
                pub const m_flInteractDistance: usize = 0x998; // float32
                pub const m_flDepthOffset: usize = 0x99C; // float32
                pub const m_unOwnerContext: usize = 0x9A0; // uint32
                pub const m_unHorizontalAlign: usize = 0x9A4; // uint32
                pub const m_unVerticalAlign: usize = 0x9A8; // uint32
                pub const m_unOrientation: usize = 0x9AC; // uint32
                pub const m_bAllowInteractionFromAllSceneWorlds: usize = 0x9B0; // bool
                pub const m_vecCSSClasses: usize = 0x9B8; // CNetworkUtlVectorBase<CUtlSymbolLarge>
                pub const m_bOpaque: usize = 0x9D0; // bool
                pub const m_bNoDepth: usize = 0x9D1; // bool
                pub const m_bVisibleWhenParentNoDraw: usize = 0x9D2; // bool
                pub const m_bRenderBackface: usize = 0x9D3; // bool
                pub const m_bUseOffScreenIndicator: usize = 0x9D4; // bool
                pub const m_bExcludeFromSaveGames: usize = 0x9D5; // bool
                pub const m_bGrabbable: usize = 0x9D6; // bool
                pub const m_bOnlyRenderToTexture: usize = 0x9D7; // bool
                pub const m_bDisableMipGen: usize = 0x9D8; // bool
                pub const m_nExplicitImageLayout: usize = 0x9DC; // int32
            }
            // Parent: CSoundEventEntity
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_flRadius (float)
            pub mod CSoundEventSphereEntity {
                pub const m_flRadius: usize = 0x5B8; // float32
            }
            // Parent: CPlayerControllerComponent
            // Field count: 6
            //
            // Metadata:
            // NetworkVarNames: m_iAccount (int)
            // NetworkVarNames: m_iStartAccount (int)
            // NetworkVarNames: m_iTotalCashSpent (int)
            // NetworkVarNames: m_iCashSpentThisRound (int)
            pub mod CCSPlayerController_InGameMoneyServices {
                pub const m_bReceivesMoneyNextRound: usize = 0x40; // bool
                pub const m_iMoneyEarnedForNextRound: usize = 0x44; // int32
                pub const m_iAccount: usize = 0x48; // int32
                pub const m_iStartAccount: usize = 0x4C; // int32
                pub const m_iTotalCashSpent: usize = 0x50; // int32
                pub const m_iCashSpentThisRound: usize = 0x54; // int32
            }
            // Parent: CRuleEntity
            // Field count: 0
            pub mod CRuleBrushEntity {
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
            pub mod CMapVetoPickController {
                pub const m_bPlayedIntroVcd: usize = 0x4F0; // bool
                pub const m_bNeedToPlayFiveSecondsRemaining: usize = 0x4F1; // bool
                pub const m_dblPreMatchDraftSequenceTime: usize = 0x510; // float64
                pub const m_bPreMatchDraftStateChanged: usize = 0x518; // bool
                pub const m_nDraftType: usize = 0x51C; // int32
                pub const m_nTeamWinningCoinToss: usize = 0x520; // int32
                pub const m_nTeamWithFirstChoice: usize = 0x524; // int32[64]
                pub const m_nVoteMapIdsList: usize = 0x624; // int32[7]
                pub const m_nAccountIDs: usize = 0x640; // int32[64]
                pub const m_nMapId0: usize = 0x740; // int32[64]
                pub const m_nMapId1: usize = 0x840; // int32[64]
                pub const m_nMapId2: usize = 0x940; // int32[64]
                pub const m_nMapId3: usize = 0xA40; // int32[64]
                pub const m_nMapId4: usize = 0xB40; // int32[64]
                pub const m_nMapId5: usize = 0xC40; // int32[64]
                pub const m_nStartingSide0: usize = 0xD40; // int32[64]
                pub const m_nCurrentPhase: usize = 0xE40; // int32
                pub const m_nPhaseStartTick: usize = 0xE44; // int32
                pub const m_nPhaseDurationTicks: usize = 0xE48; // int32
                pub const m_OnMapVetoed: usize = 0xE50; // CEntityOutputTemplate<CUtlSymbolLarge>
                pub const m_OnMapPicked: usize = 0xE78; // CEntityOutputTemplate<CUtlSymbolLarge>
                pub const m_OnSidesPicked: usize = 0xEA0; // CEntityOutputTemplate<int32>
                pub const m_OnNewPhaseStarted: usize = 0xEC8; // CEntityOutputTemplate<int32>
                pub const m_OnLevelTransition: usize = 0xEF0; // CEntityOutputTemplate<int32>
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
            pub mod CAnimGraphNetworkedVariables {
                pub const m_PredNetBoolVariables: usize = 0x8; // CNetworkUtlVectorBase<uint32>
                pub const m_PredNetByteVariables: usize = 0x20; // CNetworkUtlVectorBase<uint8>
                pub const m_PredNetUInt16Variables: usize = 0x38; // CNetworkUtlVectorBase<uint16>
                pub const m_PredNetIntVariables: usize = 0x50; // CNetworkUtlVectorBase<int32>
                pub const m_PredNetUInt32Variables: usize = 0x68; // CNetworkUtlVectorBase<uint32>
                pub const m_PredNetUInt64Variables: usize = 0x80; // CNetworkUtlVectorBase<uint64>
                pub const m_PredNetFloatVariables: usize = 0x98; // CNetworkUtlVectorBase<float32>
                pub const m_PredNetVectorVariables: usize = 0xB0; // CNetworkUtlVectorBase<Vector>
                pub const m_PredNetQuaternionVariables: usize = 0xC8; // CNetworkUtlVectorBase<Quaternion>
                pub const m_PredNetGlobalSymbolVariables: usize = 0xE0; // CNetworkUtlVectorBase<CGlobalSymbol>
                pub const m_OwnerOnlyPredNetBoolVariables: usize = 0xF8; // CNetworkUtlVectorBase<uint32>
                pub const m_OwnerOnlyPredNetByteVariables: usize = 0x110; // CNetworkUtlVectorBase<uint8>
                pub const m_OwnerOnlyPredNetUInt16Variables: usize = 0x128; // CNetworkUtlVectorBase<uint16>
                pub const m_OwnerOnlyPredNetIntVariables: usize = 0x140; // CNetworkUtlVectorBase<int32>
                pub const m_OwnerOnlyPredNetUInt32Variables: usize = 0x158; // CNetworkUtlVectorBase<uint32>
                pub const m_OwnerOnlyPredNetUInt64Variables: usize = 0x170; // CNetworkUtlVectorBase<uint64>
                pub const m_OwnerOnlyPredNetFloatVariables: usize = 0x188; // CNetworkUtlVectorBase<float32>
                pub const m_OwnerOnlyPredNetVectorVariables: usize = 0x1A0; // CNetworkUtlVectorBase<Vector>
                pub const m_OwnerOnlyPredNetQuaternionVariables: usize = 0x1B8; // CNetworkUtlVectorBase<Quaternion>
                pub const m_OwnerOnlyPredNetGlobalSymbolVariables: usize = 0x1D0; // CNetworkUtlVectorBase<CGlobalSymbol>
                pub const m_nBoolVariablesCount: usize = 0x1E8; // int32
                pub const m_nOwnerOnlyBoolVariablesCount: usize = 0x1EC; // int32
                pub const m_nRandomSeedOffset: usize = 0x1F0; // int32
                pub const m_flLastTeleportTime: usize = 0x1F4; // float32
            }
            // Parent: CBaseEntity
            // Field count: 0
            pub mod CFuncPropRespawnZone {
            }
            // Parent: CBaseFilter
            // Field count: 1
            pub mod CFilterModel {
                pub const m_iFilterModel: usize = 0x548; // CUtlSymbolLarge
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            pub mod CWeaponP90 {
            }
            // Parent: CPointEntity
            // Field count: 0
            pub mod CNavSpaceInfo {
            }
            // Parent: CPhysConstraint
            // Field count: 10
            pub mod CPhysSlideConstraint {
                pub const m_axisEnd: usize = 0x568; // VectorWS
                pub const m_slideFriction: usize = 0x574; // float32
                pub const m_systemLoadScale: usize = 0x578; // float32
                pub const m_initialOffset: usize = 0x57C; // float32
                pub const m_bEnableLinearConstraint: usize = 0x580; // bool
                pub const m_bEnableAngularConstraint: usize = 0x581; // bool
                pub const m_flMotorFrequency: usize = 0x584; // float32
                pub const m_flMotorDampingRatio: usize = 0x588; // float32
                pub const m_bUseEntityPivot: usize = 0x58C; // bool
                pub const m_soundInfo: usize = 0x590; // ConstraintSoundInfo
            }
            // Parent: CBaseEntity
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_strGraphName (CUtlString)
            // NetworkVarNames: m_strStateBlob (CUtlString)
            pub mod CPulseGameBlackboard {
                pub const m_strGraphName: usize = 0x4F8; // CUtlString
                pub const m_strStateBlob: usize = 0x500; // CUtlString
            }
            // Parent: CSoundEventEntity
            // Field count: 0
            pub mod CSoundEventEntityAlias_snd_event_point {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            pub mod CPulseCell_Value_RandomInt {
            }
            // Parent: CPointEntity
            // Field count: 2
            pub mod CPointGamestatsCounter {
                pub const m_strStatisticName: usize = 0x4F0; // CUtlSymbolLarge
                pub const m_bDisabled: usize = 0x4F8; // bool
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
            pub mod CTextureBasedAnimatable {
                pub const m_bLoop: usize = 0x7D8; // bool
                pub const m_flFPS: usize = 0x7DC; // float32
                pub const m_hPositionKeys: usize = 0x7E0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_hRotationKeys: usize = 0x7E8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_vAnimationBoundsMin: usize = 0x7F0; // Vector
                pub const m_vAnimationBoundsMax: usize = 0x7FC; // Vector
                pub const m_flStartTime: usize = 0x808; // float32
                pub const m_flStartFrame: usize = 0x80C; // float32
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
            pub mod CSprite {
                pub const m_hSpriteMaterial: usize = 0x7D8; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_hAttachedToEntity: usize = 0x7E0; // CHandle<CBaseEntity>
                pub const m_nAttachment: usize = 0x7E4; // AttachmentHandle_t
                pub const m_flSpriteFramerate: usize = 0x7E8; // float32
                pub const m_flFrame: usize = 0x7EC; // float32
                pub const m_flDieTime: usize = 0x7F0; // GameTime_t
                pub const m_nBrightness: usize = 0x800; // uint32
                pub const m_flBrightnessDuration: usize = 0x804; // float32
                pub const m_flSpriteScale: usize = 0x808; // float32
                pub const m_flScaleDuration: usize = 0x80C; // float32
                pub const m_bWorldSpaceScale: usize = 0x810; // bool
                pub const m_flGlowProxySize: usize = 0x814; // float32
                pub const m_flHDRColorScale: usize = 0x818; // float32
                pub const m_flLastTime: usize = 0x81C; // GameTime_t
                pub const m_flMaxFrame: usize = 0x820; // float32
                pub const m_flStartScale: usize = 0x824; // float32
                pub const m_flDestScale: usize = 0x828; // float32
                pub const m_flScaleTimeStart: usize = 0x82C; // GameTime_t
                pub const m_nStartBrightness: usize = 0x830; // int32
                pub const m_nDestBrightness: usize = 0x834; // int32
                pub const m_flBrightnessTimeStart: usize = 0x838; // GameTime_t
                pub const m_nSpriteWidth: usize = 0x83C; // int32
                pub const m_nSpriteHeight: usize = 0x840; // int32
            }
            // Parent: CPathKeyFrame
            // Field count: 11
            pub mod CBaseMoveBehavior {
                pub const m_iPositionInterpolator: usize = 0x550; // int32
                pub const m_iRotationInterpolator: usize = 0x554; // int32
                pub const m_flAnimStartTime: usize = 0x558; // float32
                pub const m_flAnimEndTime: usize = 0x55C; // float32
                pub const m_flAverageSpeedAcrossFrame: usize = 0x560; // float32
                pub const m_pCurrentKeyFrame: usize = 0x568; // CPathKeyFrame*
                pub const m_pTargetKeyFrame: usize = 0x570; // CPathKeyFrame*
                pub const m_pPreKeyFrame: usize = 0x578; // CPathKeyFrame*
                pub const m_pPostKeyFrame: usize = 0x580; // CPathKeyFrame*
                pub const m_flTimeIntoFrame: usize = 0x588; // float32
                pub const m_iDirection: usize = 0x58C; // int32
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
            pub mod CDynamicLight {
                pub const m_ActualFlags: usize = 0x7D8; // uint8
                pub const m_Flags: usize = 0x7D9; // uint8
                pub const m_LightStyle: usize = 0x7DA; // uint8
                pub const m_On: usize = 0x7DB; // bool
                pub const m_Radius: usize = 0x7DC; // float32
                pub const m_Exponent: usize = 0x7E0; // int32
                pub const m_InnerAngle: usize = 0x7E4; // float32
                pub const m_OuterAngle: usize = 0x7E8; // float32
                pub const m_SpotRadius: usize = 0x7EC; // float32
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_fFireTime (GameTime_t)
            pub mod CWeaponTaser {
                pub const m_fFireTime: usize = 0x11F0; // GameTime_t
                pub const m_nLastAttackTick: usize = 0x11F4; // int32
            }
            // Parent: CEnvCubemap
            // Field count: 0
            pub mod CEnvCubemapBox {
            }
            // Parent: CBaseDoor
            // Field count: 1
            pub mod CRotDoor {
                pub const m_bSolidBsp: usize = 0xA68; // bool
            }
            // Parent: CPathSimple
            // Field count: 3
            pub mod CPathMover {
                pub const m_vecPathNodes: usize = 0x600; // CUtlVector<CHandle<CMoverPathNode>>
                pub const m_vecMovers: usize = 0x618; // CUtlVector<CHandle<CFuncMover>>
                pub const m_xInitialPathWorldToLocal: usize = 0x630; // CTransform
            }
            // Parent: CBaseModelEntity
            // Field count: 1
            pub mod CFuncVPhysicsClip {
                pub const m_bDisabled: usize = 0x7D8; // bool
            }
            // Parent: CPhysConstraint
            // Field count: 8
            pub mod CPhysFixed {
                pub const m_flLinearFrequency: usize = 0x560; // float32
                pub const m_flLinearDampingRatio: usize = 0x564; // float32
                pub const m_flAngularFrequency: usize = 0x568; // float32
                pub const m_flAngularDampingRatio: usize = 0x56C; // float32
                pub const m_bEnableLinearConstraint: usize = 0x570; // bool
                pub const m_bEnableAngularConstraint: usize = 0x571; // bool
                pub const m_sBoneName1: usize = 0x578; // CUtlSymbolLarge
                pub const m_sBoneName2: usize = 0x580; // CUtlSymbolLarge
            }
            // Parent: CLogicalEntity
            // Field count: 2
            pub mod CLogicNavigation {
                pub const m_isOn: usize = 0x4F8; // bool
                pub const m_navProperty: usize = 0x4FC; // navproperties_t
            }
            // Parent: CBaseEntity
            // Field count: 3
            //
            // Metadata:
            // NetworkVarNames: m_CPathQueryComponent (CPathQueryComponent::Storage_t)
            // NetworkVarNames: m_pathString (CUtlString)
            pub mod CPathSimple {
                pub const m_CPathQueryComponent: usize = 0x500; // CPathQueryComponent
                pub const m_pathString: usize = 0x5F0; // CUtlString
                pub const m_bClosedLoop: usize = 0x5F8; // bool
            }
            // Parent: CPathParticleRope
            // Field count: 0
            pub mod CPathParticleRopeAlias_path_particle_rope_clientside {
            }
            // Parent: None
            // Field count: 0
            pub mod CCSPointPulseAPI {
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
            pub mod CEnvWindVolume {
                pub const m_bActive: usize = 0x4F0; // bool
                pub const m_vBoxMins: usize = 0x4F4; // Vector
                pub const m_vBoxMaxs: usize = 0x500; // Vector
                pub const m_bStartDisabled: usize = 0x50C; // bool
                pub const m_nShape: usize = 0x510; // int32
                pub const m_fWindSpeedMultiplier: usize = 0x514; // float32
                pub const m_fWindTurbulenceMultiplier: usize = 0x518; // float32
                pub const m_fWindSpeedVariationMultiplier: usize = 0x51C; // float32
                pub const m_fWindDirectionVariationMultiplier: usize = 0x520; // float32
            }
            // Parent: CFuncBrush
            // Field count: 4
            //
            // Metadata:
            // NetworkVarNames: m_EffectName (string_t)
            pub mod CFuncElectrifiedVolume {
                pub const m_EffectName: usize = 0x7F8; // CUtlSymbolLarge
                pub const m_EffectInterpenetrateName: usize = 0x800; // CUtlSymbolLarge
                pub const m_EffectZapName: usize = 0x808; // CUtlSymbolLarge
                pub const m_iszEffectSource: usize = 0x810; // CUtlSymbolLarge
            }
            // Parent: CBaseEntity
            // Field count: 0
            pub mod CCSMinimapBoundary {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_bSpotted (bool)
            // NetworkVarNames: m_bSpottedByMask (uint32)
            pub mod EntitySpottedState_t {
                pub const m_bSpotted: usize = 0x8; // bool
                pub const m_bSpottedByMask: usize = 0xC; // uint32[2]
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
            pub mod fogparams_t {
                pub const dirPrimary: usize = 0x8; // Vector
                pub const colorPrimary: usize = 0x14; // Color
                pub const colorSecondary: usize = 0x18; // Color
                pub const colorPrimaryLerpTo: usize = 0x1C; // Color
                pub const colorSecondaryLerpTo: usize = 0x20; // Color
                pub const start: usize = 0x24; // float32
                pub const end: usize = 0x28; // float32
                pub const farz: usize = 0x2C; // float32
                pub const maxdensity: usize = 0x30; // float32
                pub const exponent: usize = 0x34; // float32
                pub const HDRColorScale: usize = 0x38; // float32
                pub const skyboxFogFactor: usize = 0x3C; // float32
                pub const skyboxFogFactorLerpTo: usize = 0x40; // float32
                pub const startLerpTo: usize = 0x44; // float32
                pub const endLerpTo: usize = 0x48; // float32
                pub const maxdensityLerpTo: usize = 0x4C; // float32
                pub const lerptime: usize = 0x50; // GameTime_t
                pub const duration: usize = 0x54; // float32
                pub const blendtobackground: usize = 0x58; // float32
                pub const scattering: usize = 0x5C; // float32
                pub const locallightscale: usize = 0x60; // float32
                pub const enable: usize = 0x64; // bool
                pub const blend: usize = 0x65; // bool
                pub const m_bPadding2: usize = 0x66; // bool
                pub const m_bPadding: usize = 0x67; // bool
            }
            // Parent: CSoundEventEntity
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_vMins (Vector)
            // NetworkVarNames: m_vMaxs (Vector)
            pub mod CSoundEventOBBEntity {
                pub const m_vMins: usize = 0x5B8; // Vector
                pub const m_vMaxs: usize = 0x5C4; // Vector
            }
            // Parent: CBaseCSGrenadeProjectile
            // Field count: 3
            pub mod CFlashbangProjectile {
                pub const m_flTimeToDetonate: usize = 0xC40; // float32
                pub const m_numOpponentsHit: usize = 0xC44; // uint8
                pub const m_numTeammatesHit: usize = 0xC45; // uint8
            }
            // Parent: CBaseTrigger
            // Field count: 1
            pub mod CTriggerMultiple {
                pub const m_OnTrigger: usize = 0x9A8; // CEntityIOOutput
            }
            // Parent: CPhysConstraint
            // Field count: 6
            pub mod CPhysBallSocket {
                pub const m_flJointFriction: usize = 0x560; // float32
                pub const m_bEnableSwingLimit: usize = 0x564; // bool
                pub const m_flSwingLimit: usize = 0x568; // float32
                pub const m_bEnableTwistLimit: usize = 0x56C; // bool
                pub const m_flMinTwistAngle: usize = 0x570; // float32
                pub const m_flMaxTwistAngle: usize = 0x574; // float32
            }
            // Parent: CBaseEntity
            // Field count: 1
            pub mod CDebugHistory {
                pub const m_nNpcEvents: usize = 0x3E8530; // int32
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
            pub mod CSoundOpvarSetPointBase {
                pub const m_bDisabled: usize = 0x4F0; // bool
                pub const m_hSource: usize = 0x4F4; // CEntityHandle
                pub const m_iszSourceEntityName: usize = 0x510; // CUtlSymbolLarge
                pub const m_vLastPosition: usize = 0x568; // Vector
                pub const m_iszStackName: usize = 0x578; // CUtlSymbolLarge
                pub const m_iszOperatorName: usize = 0x580; // CUtlSymbolLarge
                pub const m_iszOpvarName: usize = 0x588; // CUtlSymbolLarge
                pub const m_iOpvarIndex: usize = 0x590; // int32
                pub const m_bUseAutoCompare: usize = 0x594; // bool
            }
            // Parent: CLogicalEntity
            // Field count: 8
            pub mod CPathKeyFrame {
                pub const m_Origin: usize = 0x4F0; // Vector
                pub const m_Angles: usize = 0x4FC; // QAngle
                pub const m_qAngle: usize = 0x510; // Quaternion
                pub const m_iNextKey: usize = 0x520; // CUtlSymbolLarge
                pub const m_flNextTime: usize = 0x528; // float32
                pub const m_pNextKey: usize = 0x530; // CPathKeyFrame*
                pub const m_pPrevKey: usize = 0x538; // CPathKeyFrame*
                pub const m_flMoveSpeed: usize = 0x540; // float32
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_bMagazineRemoved (bool)
            pub mod CWeaponCZ75a {
                pub const m_bMagazineRemoved: usize = 0x11F0; // bool
            }
            // Parent: CTriggerPush
            // Field count: 1
            pub mod CScriptTriggerPush {
                pub const m_vExtent: usize = 0x9E0; // Vector
            }
            // Parent: CModelPointEntity
            // Field count: 3
            pub mod CRevertSaved {
                pub const m_loadTime: usize = 0x7D8; // float32
                pub const m_Duration: usize = 0x7DC; // float32
                pub const m_HoldTime: usize = 0x7E0; // float32
            }
            // Parent: CBaseTrigger
            // Field count: 0
            pub mod CTriggerBombReset {
            }
            // Parent: CBaseTrigger
            // Field count: 14
            pub mod CTriggerHurt {
                pub const m_flOriginalDamage: usize = 0x9A8; // float32
                pub const m_flDamage: usize = 0x9AC; // float32
                pub const m_flDamageCap: usize = 0x9B0; // float32
                pub const m_flLastDmgTime: usize = 0x9B4; // GameTime_t
                pub const m_flForgivenessDelay: usize = 0x9B8; // float32
                pub const m_bitsDamageInflict: usize = 0x9BC; // DamageTypes_t
                pub const m_damageModel: usize = 0x9C0; // int32
                pub const m_bNoDmgForce: usize = 0x9C4; // bool
                pub const m_vDamageForce: usize = 0x9C8; // Vector
                pub const m_thinkAlways: usize = 0x9D4; // bool
                pub const m_hurtThinkPeriod: usize = 0x9D8; // float32
                pub const m_OnHurt: usize = 0x9E0; // CEntityIOOutput
                pub const m_OnHurtPlayer: usize = 0xA08; // CEntityIOOutput
                pub const m_hurtEntities: usize = 0xA30; // CUtlVector<CHandle<CBaseEntity>>
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
            pub mod CCSPlayer_WeaponServices {
                pub const m_flNextAttack: usize = 0xB8; // GameTime_t
                pub const m_bIsLookingAtWeapon: usize = 0xBC; // bool
                pub const m_bIsHoldingLookAtWeapon: usize = 0xBD; // bool
                pub const m_hSavedWeapon: usize = 0xC0; // CHandle<CBasePlayerWeapon>
                pub const m_nTimeToMelee: usize = 0xC4; // int32
                pub const m_nTimeToSecondary: usize = 0xC8; // int32
                pub const m_nTimeToPrimary: usize = 0xCC; // int32
                pub const m_nTimeToSniperRifle: usize = 0xD0; // int32
                pub const m_bIsBeingGivenItem: usize = 0xD4; // bool
                pub const m_bIsPickingUpItemWithUse: usize = 0xD5; // bool
                pub const m_bPickedUpWeapon: usize = 0xD6; // bool
                pub const m_bDisableAutoDeploy: usize = 0xD7; // bool
                pub const m_bIsPickingUpGroundWeapon: usize = 0xD8; // bool
                pub const m_networkAnimTiming: usize = 0x18C0; // CNetworkUtlVectorBase<uint8>
                pub const m_bBlockInspectUntilNextGraphUpdate: usize = 0x18D8; // bool
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
            pub mod CRetakeGameRules {
                pub const m_nMatchSeed: usize = 0xF8; // int32
                pub const m_bBlockersPresent: usize = 0xFC; // bool
                pub const m_bRoundInProgress: usize = 0xFD; // bool
                pub const m_iFirstSecondHalfRound: usize = 0x100; // int32
                pub const m_iBombSite: usize = 0x104; // int32
            }
            // Parent: CEnvSoundscapeTriggerable
            // Field count: 0
            pub mod CEnvSoundscapeTriggerableAlias_snd_soundscape_triggerable {
            }
            // Parent: CPointEntity
            // Field count: 0
            pub mod CInfoInstructorHintBombTargetA {
            }
            // Parent: None
            // Field count: 0
            pub mod CTeamplayRules {
            }
            // Parent: CTriggerHurt
            // Field count: 1
            pub mod CScriptTriggerHurt {
                pub const m_vExtent: usize = 0xA48; // Vector
            }
            // Parent: CCSGO_TeamIntroCharacterPosition
            // Field count: 0
            pub mod CCSGO_WingmanIntroCharacterPosition {
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            pub mod CWeaponMP9 {
            }
            // Parent: CBaseTrigger
            // Field count: 1
            pub mod CTriggerDetectExplosion {
                pub const m_OnDetectedExplosion: usize = 0x9C8; // CEntityIOOutput
            }
            // Parent: CBaseFilter
            // Field count: 1
            pub mod CFilterName {
                pub const m_iFilterName: usize = 0x548; // CUtlSymbolLarge
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
            pub mod CSmokeGrenadeProjectile {
                pub const m_nSmokeEffectTickBegin: usize = 0xC68; // int32
                pub const m_bDidSmokeEffect: usize = 0xC6C; // bool
                pub const m_nRandomSeed: usize = 0xC70; // int32
                pub const m_vSmokeColor: usize = 0xC74; // Vector
                pub const m_vSmokeDetonationPos: usize = 0xC80; // Vector
                pub const m_VoxelFrameData: usize = 0xC90; // CNetworkUtlVectorBase<uint8>
                pub const m_nVoxelFrameDataSize: usize = 0xCA8; // int32
                pub const m_nVoxelUpdate: usize = 0xCAC; // int32
                pub const m_flLastBounce: usize = 0xCB0; // GameTime_t
                pub const m_fllastSimulationTime: usize = 0xCB4; // GameTime_t
                pub const m_bExplodeFromInferno: usize = 0x2F38; // bool
                pub const m_bDidGroundScorch: usize = 0x2F39; // bool
            }
            // Parent: CPointEntity
            // Field count: 4
            pub mod CBlood {
                pub const m_vecSprayAngles: usize = 0x4F0; // QAngle
                pub const m_vecSprayDir: usize = 0x4FC; // Vector
                pub const m_flAmount: usize = 0x508; // float32
                pub const m_Color: usize = 0x50C; // BloodType
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
            pub mod CCSTeam {
                pub const m_nLastRecievedShorthandedRoundBonus: usize = 0x5A8; // int32
                pub const m_nShorthandedRoundBonusStartRound: usize = 0x5AC; // int32
                pub const m_bSurrendered: usize = 0x5B0; // bool
                pub const m_szTeamMatchStat: usize = 0x5B1; // char[512]
                pub const m_numMapVictories: usize = 0x7B4; // int32
                pub const m_scoreFirstHalf: usize = 0x7B8; // int32
                pub const m_scoreSecondHalf: usize = 0x7BC; // int32
                pub const m_scoreOvertime: usize = 0x7C0; // int32
                pub const m_szClanTeamname: usize = 0x7C4; // char[129]
                pub const m_iClanID: usize = 0x848; // uint32
                pub const m_szTeamFlagImage: usize = 0x84C; // char[8]
                pub const m_szTeamLogoImage: usize = 0x854; // char[8]
                pub const m_flNextResourceTime: usize = 0x85C; // float32
                pub const m_iLastUpdateSentAt: usize = 0x860; // int32
            }
            // Parent: CRuleEntity
            // Field count: 1
            pub mod CRulePointEntity {
                pub const m_Score: usize = 0x7E0; // int32
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulse_CallInfo {
                pub const m_PortName: usize = 0x0; // PulseSymbol_t
                pub const m_nEditorNodeID: usize = 0x10; // PulseDocNodeID_t
                pub const m_RegisterMap: usize = 0x18; // PulseRegisterMap_t
                pub const m_CallMethodID: usize = 0x48; // PulseDocNodeID_t
                pub const m_nSrcChunk: usize = 0x4C; // PulseRuntimeChunkIndex_t
                pub const m_nSrcInstruction: usize = 0x50; // int32
            }
            // Parent: CFuncMoveLinear
            // Field count: 0
            pub mod CFuncMoveLinearAlias_momentary_door {
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
            pub mod CBaseAnimGraph {
                pub const m_bInitiallyPopulateInterpHistory: usize = 0x858; // bool
                pub const m_pChoreoServices: usize = 0x860; // IChoreoServices*
                pub const m_bAnimGraphUpdateEnabled: usize = 0x868; // bool
                pub const m_flMaxSlopeDistance: usize = 0x86C; // float32
                pub const m_vLastSlopeCheckPos: usize = 0x870; // VectorWS
                pub const m_bAnimationUpdateScheduled: usize = 0x87C; // bool
                pub const m_vecForce: usize = 0x880; // Vector
                pub const m_nForceBone: usize = 0x88C; // int32
                pub const m_RagdollPose: usize = 0x8A0; // PhysicsRagdollPose_t
                pub const m_bRagdollEnabled: usize = 0x8C8; // bool
                pub const m_bRagdollClientSide: usize = 0x8C9; // bool
                pub const m_xParentedRagdollRootInEntitySpace: usize = 0x8D0; // CTransform
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
            pub mod CEnvCubemapFog {
                pub const m_flEndDistance: usize = 0x4F0; // float32
                pub const m_flStartDistance: usize = 0x4F4; // float32
                pub const m_flFogFalloffExponent: usize = 0x4F8; // float32
                pub const m_bHeightFogEnabled: usize = 0x4FC; // bool
                pub const m_flFogHeightWidth: usize = 0x500; // float32
                pub const m_flFogHeightEnd: usize = 0x504; // float32
                pub const m_flFogHeightStart: usize = 0x508; // float32
                pub const m_flFogHeightExponent: usize = 0x50C; // float32
                pub const m_flLODBias: usize = 0x510; // float32
                pub const m_bActive: usize = 0x514; // bool
                pub const m_bStartDisabled: usize = 0x515; // bool
                pub const m_flFogMaxOpacity: usize = 0x518; // float32
                pub const m_nCubemapSourceType: usize = 0x51C; // int32
                pub const m_hSkyMaterial: usize = 0x520; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_iszSkyEntity: usize = 0x528; // CUtlSymbolLarge
                pub const m_hFogCubemapTexture: usize = 0x530; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_bHasHeightFogEnd: usize = 0x538; // bool
                pub const m_bFirstTime: usize = 0x539; // bool
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_InlineNodeSkipSelector {
                pub const m_nFlowNodeID: usize = 0x48; // PulseDocNodeID_t
                pub const m_bAnd: usize = 0x4C; // bool
                pub const m_PassOutflow: usize = 0x50; // PulseSelectorOutflowList_t
                pub const m_FailOutflow: usize = 0x68; // CPulse_OutflowConnection
            }
            // Parent: CBaseToggle
            // Field count: 28
            //
            // Metadata:
            // NetworkVarNames: m_bIsUsable (bool)
            pub mod CBaseDoor {
                pub const m_angMoveEntitySpace: usize = 0x868; // QAngle
                pub const m_vecMoveDirParentSpace: usize = 0x874; // Vector
                pub const m_ls: usize = 0x880; // locksound_t
                pub const m_bForceClosed: usize = 0x8A0; // bool
                pub const m_bDoorGroup: usize = 0x8A1; // bool
                pub const m_bLocked: usize = 0x8A2; // bool
                pub const m_bIgnoreDebris: usize = 0x8A3; // bool
                pub const m_bNoNPCs: usize = 0x8A4; // bool
                pub const m_eSpawnPosition: usize = 0x8A8; // FuncDoorSpawnPos_t
                pub const m_flBlockDamage: usize = 0x8AC; // float32
                pub const m_NoiseMoving: usize = 0x8B0; // CUtlSymbolLarge
                pub const m_NoiseArrived: usize = 0x8B8; // CUtlSymbolLarge
                pub const m_NoiseMovingClosed: usize = 0x8C0; // CUtlSymbolLarge
                pub const m_NoiseArrivedClosed: usize = 0x8C8; // CUtlSymbolLarge
                pub const m_ChainTarget: usize = 0x8D0; // CUtlSymbolLarge
                pub const m_OnBlockedClosing: usize = 0x8D8; // CEntityIOOutput
                pub const m_OnBlockedOpening: usize = 0x900; // CEntityIOOutput
                pub const m_OnUnblockedClosing: usize = 0x928; // CEntityIOOutput
                pub const m_OnUnblockedOpening: usize = 0x950; // CEntityIOOutput
                pub const m_OnFullyClosed: usize = 0x978; // CEntityIOOutput
                pub const m_OnFullyOpen: usize = 0x9A0; // CEntityIOOutput
                pub const m_OnClose: usize = 0x9C8; // CEntityIOOutput
                pub const m_OnOpen: usize = 0x9F0; // CEntityIOOutput
                pub const m_OnLockedUse: usize = 0xA18; // CEntityIOOutput
                pub const m_bLoopMoveSound: usize = 0xA40; // bool
                pub const m_bCreateNavObstacle: usize = 0xA60; // bool
                pub const m_isChaining: usize = 0xA61; // bool
                pub const m_bIsUsable: usize = 0xA62; // bool
            }
            // Parent: CServerOnlyEntity
            // Field count: 0
            pub mod CServerOnlyPointEntity {
            }
            // Parent: CRulePointEntity
            // Field count: 4
            pub mod CGameMoney {
                pub const m_OnMoneySpent: usize = 0x7E8; // CEntityIOOutput
                pub const m_OnMoneySpentFail: usize = 0x810; // CEntityIOOutput
                pub const m_nMoney: usize = 0x838; // int32
                pub const m_strAwardText: usize = 0x840; // CUtlString
            }
            // Parent: CPointEntity
            // Field count: 1
            pub mod CEnvHudHint {
                pub const m_iszMessage: usize = 0x4F0; // CUtlSymbolLarge
            }
            // Parent: CBaseEntity
            // Field count: 0
            pub mod CNullEntity {
            }
            // Parent: CServerOnlyEntity
            // Field count: 0
            pub mod CLogicalEntity {
            }
            // Parent: CItem
            // Field count: 2
            pub mod CItemDefuser {
                pub const m_entitySpottedState: usize = 0xB70; // EntitySpottedState_t
                pub const m_nSpotRules: usize = 0xB88; // int32
            }
            // Parent: CBaseModelEntity
            // Field count: 1
            pub mod CItemGenericTriggerHelper {
                pub const m_hParentItem: usize = 0x7D8; // CHandle<CItemGeneric>
            }
            // Parent: CPlayerPawnComponent
            // Field count: 5
            //
            // Metadata:
            // NetworkVarNames: m_hMyWeapons (CHandle<CBasePlayerWeapon>)
            // NetworkVarNames: m_hActiveWeapon (CHandle<CBasePlayerWeapon>)
            // NetworkVarNames: m_hLastWeapon (CHandle<CBasePlayerWeapon>)
            // NetworkVarNames: m_iAmmo (uint16)
            pub mod CPlayer_WeaponServices {
                pub const m_hMyWeapons: usize = 0x40; // CNetworkUtlVectorBase<CHandle<CBasePlayerWeapon>>
                pub const m_hActiveWeapon: usize = 0x58; // CHandle<CBasePlayerWeapon>
                pub const m_hLastWeapon: usize = 0x5C; // CHandle<CBasePlayerWeapon>
                pub const m_iAmmo: usize = 0x60; // uint16[32]
                pub const m_bPreventWeaponPickup: usize = 0xA0; // bool
            }
            // Parent: CRagdollProp
            // Field count: 6
            //
            // Metadata:
            // NetworkVarNames: m_boneIndexAttached (uint32)
            // NetworkVarNames: m_ragdollAttachedObjectIndex (uint32)
            // NetworkVarNames: m_attachmentPointBoneSpace (Vector)
            // NetworkVarNames: m_attachmentPointRagdollSpace (Vector)
            pub mod CRagdollPropAttached {
                pub const m_boneIndexAttached: usize = 0xBE0; // uint32
                pub const m_ragdollAttachedObjectIndex: usize = 0xBE4; // uint32
                pub const m_attachmentPointBoneSpace: usize = 0xBE8; // Vector
                pub const m_attachmentPointRagdollSpace: usize = 0xBF4; // Vector
                pub const m_bShouldDetach: usize = 0xC00; // bool
                pub const m_bShouldDeleteAttachedActivationRecord: usize = 0xC10; // bool
            }
            // Parent: CItem
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_OwningPlayer (CHandle<CCSPlayerPawn>)
            // NetworkVarNames: m_KillingPlayer (CHandle<CCSPlayerPawn>)
            pub mod CItemDogtags {
                pub const m_OwningPlayer: usize = 0xB70; // CHandle<CCSPlayerPawn>
                pub const m_KillingPlayer: usize = 0xB74; // CHandle<CCSPlayerPawn>
            }
            // Parent: CBasePlatTrain
            // Field count: 1
            pub mod CFuncPlat {
                pub const m_sNoise: usize = 0x880; // CUtlSymbolLarge
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
            pub mod CBarnLight {
                pub const m_bEnabled: usize = 0x7D8; // bool
                pub const m_nColorMode: usize = 0x7DC; // int32
                pub const m_Color: usize = 0x7E0; // Color
                pub const m_flColorTemperature: usize = 0x7E4; // float32
                pub const m_flBrightness: usize = 0x7E8; // float32
                pub const m_flBrightnessScale: usize = 0x7EC; // float32
                pub const m_nDirectLight: usize = 0x7F0; // int32
                pub const m_nBakedShadowIndex: usize = 0x7F4; // int32
                pub const m_nLightPathUniqueId: usize = 0x7F8; // int32
                pub const m_nLightMapUniqueId: usize = 0x7FC; // int32
                pub const m_nLuminaireShape: usize = 0x800; // int32
                pub const m_flLuminaireSize: usize = 0x804; // float32
                pub const m_flLuminaireAnisotropy: usize = 0x808; // float32
                pub const m_LightStyleString: usize = 0x810; // CUtlString
                pub const m_flLightStyleStartTime: usize = 0x818; // GameTime_t
                pub const m_QueuedLightStyleStrings: usize = 0x820; // CNetworkUtlVectorBase<CUtlString>
                pub const m_LightStyleEvents: usize = 0x838; // CNetworkUtlVectorBase<CUtlString>
                pub const m_LightStyleTargets: usize = 0x850; // CNetworkUtlVectorBase<CHandle<CBaseModelEntity>>
                pub const m_StyleEvent: usize = 0x868; // CEntityIOOutput[4]
                pub const m_hLightCookie: usize = 0x928; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_flShape: usize = 0x930; // float32
                pub const m_flSoftX: usize = 0x934; // float32
                pub const m_flSoftY: usize = 0x938; // float32
                pub const m_flSkirt: usize = 0x93C; // float32
                pub const m_flSkirtNear: usize = 0x940; // float32
                pub const m_vSizeParams: usize = 0x944; // Vector
                pub const m_flRange: usize = 0x950; // float32
                pub const m_vShear: usize = 0x954; // Vector
                pub const m_nBakeSpecularToCubemaps: usize = 0x960; // int32
                pub const m_vBakeSpecularToCubemapsSize: usize = 0x964; // Vector
                pub const m_nCastShadows: usize = 0x970; // int32
                pub const m_nShadowMapSize: usize = 0x974; // int32
                pub const m_nShadowPriority: usize = 0x978; // int32
                pub const m_bContactShadow: usize = 0x97C; // bool
                pub const m_bForceShadowsEnabled: usize = 0x97D; // bool
                pub const m_nBounceLight: usize = 0x980; // int32
                pub const m_flBounceScale: usize = 0x984; // float32
                pub const m_flMinRoughness: usize = 0x988; // float32
                pub const m_vAlternateColor: usize = 0x98C; // Vector
                pub const m_fAlternateColorBrightness: usize = 0x998; // float32
                pub const m_nFog: usize = 0x99C; // int32
                pub const m_flFogStrength: usize = 0x9A0; // float32
                pub const m_nFogShadows: usize = 0x9A4; // int32
                pub const m_flFogScale: usize = 0x9A8; // float32
                pub const m_bFogMixedShadows: usize = 0x9AC; // bool
                pub const m_flFadeSizeStart: usize = 0x9B0; // float32
                pub const m_flFadeSizeEnd: usize = 0x9B4; // float32
                pub const m_flShadowFadeSizeStart: usize = 0x9B8; // float32
                pub const m_flShadowFadeSizeEnd: usize = 0x9BC; // float32
                pub const m_bPrecomputedFieldsValid: usize = 0x9C0; // bool
                pub const m_vPrecomputedBoundsMins: usize = 0x9C4; // Vector
                pub const m_vPrecomputedBoundsMaxs: usize = 0x9D0; // Vector
                pub const m_vPrecomputedOBBOrigin: usize = 0x9DC; // Vector
                pub const m_vPrecomputedOBBAngles: usize = 0x9E8; // QAngle
                pub const m_vPrecomputedOBBExtent: usize = 0x9F4; // Vector
                pub const m_nPrecomputedSubFrusta: usize = 0xA00; // int32
                pub const m_vPrecomputedOBBOrigin0: usize = 0xA04; // Vector
                pub const m_vPrecomputedOBBAngles0: usize = 0xA10; // QAngle
                pub const m_vPrecomputedOBBExtent0: usize = 0xA1C; // Vector
                pub const m_vPrecomputedOBBOrigin1: usize = 0xA28; // Vector
                pub const m_vPrecomputedOBBAngles1: usize = 0xA34; // QAngle
                pub const m_vPrecomputedOBBExtent1: usize = 0xA40; // Vector
                pub const m_vPrecomputedOBBOrigin2: usize = 0xA4C; // Vector
                pub const m_vPrecomputedOBBAngles2: usize = 0xA58; // QAngle
                pub const m_vPrecomputedOBBExtent2: usize = 0xA64; // Vector
                pub const m_vPrecomputedOBBOrigin3: usize = 0xA70; // Vector
                pub const m_vPrecomputedOBBAngles3: usize = 0xA7C; // QAngle
                pub const m_vPrecomputedOBBExtent3: usize = 0xA88; // Vector
                pub const m_vPrecomputedOBBOrigin4: usize = 0xA94; // Vector
                pub const m_vPrecomputedOBBAngles4: usize = 0xAA0; // QAngle
                pub const m_vPrecomputedOBBExtent4: usize = 0xAAC; // Vector
                pub const m_vPrecomputedOBBOrigin5: usize = 0xAB8; // Vector
                pub const m_vPrecomputedOBBAngles5: usize = 0xAC4; // QAngle
                pub const m_vPrecomputedOBBExtent5: usize = 0xAD0; // Vector
                pub const m_bPvsModifyEntity: usize = 0xADC; // bool
                pub const m_VisClusters: usize = 0xAE0; // CNetworkUtlVectorBase<uint16>
            }
            // Parent: CPointEntity
            // Field count: 3
            pub mod CInstructorEventEntity {
                pub const m_iszName: usize = 0x4F0; // CUtlSymbolLarge
                pub const m_iszHintTargetEntity: usize = 0x4F8; // CUtlSymbolLarge
                pub const m_hTargetPlayer: usize = 0x500; // CHandle<CBasePlayerPawn>
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            pub mod CWeaponTec9 {
            }
            // Parent: CPointEntity
            // Field count: 3
            pub mod CPathCorner {
                pub const m_flWait: usize = 0x4F0; // float32
                pub const m_flRadius: usize = 0x4F4; // float32
                pub const m_OnPass: usize = 0x4F8; // CEntityIOOutput
            }
            // Parent: CBaseTrigger
            // Field count: 14
            pub mod CTriggerSndSosOpvar {
                pub const m_hTouchingPlayers: usize = 0x9A8; // CUtlVector<CHandle<CBaseEntity>>
                pub const m_flPosition: usize = 0x9C0; // Vector
                pub const m_flCenterSize: usize = 0x9CC; // float32
                pub const m_flMinVal: usize = 0x9D0; // float32
                pub const m_flMaxVal: usize = 0x9D4; // float32
                pub const m_opvarName: usize = 0x9D8; // CUtlSymbolLarge
                pub const m_stackName: usize = 0x9E0; // CUtlSymbolLarge
                pub const m_operatorName: usize = 0x9E8; // CUtlSymbolLarge
                pub const m_bVolIs2D: usize = 0x9F0; // bool
                pub const m_opvarNameChar: usize = 0x9F1; // char[256]
                pub const m_stackNameChar: usize = 0xAF1; // char[256]
                pub const m_operatorNameChar: usize = 0xBF1; // char[256]
                pub const m_VecNormPos: usize = 0xCF4; // Vector
                pub const m_flNormCenterSize: usize = 0xD00; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CPulseCell_LimitCount {
                pub const m_nLimitCount: usize = 0x48; // int32
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Step_CallExternalMethod {
                pub const m_MethodName: usize = 0x48; // PulseSymbol_t
                pub const m_GameBlackboard: usize = 0x58; // PulseSymbol_t
                pub const m_ExpectedArgs: usize = 0x68; // CUtlLeanVector<CPulseRuntimeMethodArg>
                pub const m_nAsyncCallMode: usize = 0x78; // PulseMethodCallMode_t
                pub const m_OnFinished: usize = 0x80; // CPulse_ResumePoint
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
            pub mod CPointCommentaryNode {
                pub const m_iszPreCommands: usize = 0xA90; // CUtlSymbolLarge
                pub const m_iszPostCommands: usize = 0xA98; // CUtlSymbolLarge
                pub const m_iszCommentaryFile: usize = 0xAA0; // CUtlSymbolLarge
                pub const m_iszViewTarget: usize = 0xAA8; // CUtlSymbolLarge
                pub const m_hViewTarget: usize = 0xAB0; // CHandle<CBaseEntity>
                pub const m_hViewTargetAngles: usize = 0xAB4; // CHandle<CBaseEntity>
                pub const m_iszViewPosition: usize = 0xAB8; // CUtlSymbolLarge
                pub const m_hViewPosition: usize = 0xAC0; // CHandle<CBaseEntity>
                pub const m_hViewPositionMover: usize = 0xAC4; // CHandle<CBaseEntity>
                pub const m_bPreventMovement: usize = 0xAC8; // bool
                pub const m_bUnderCrosshair: usize = 0xAC9; // bool
                pub const m_bUnstoppable: usize = 0xACA; // bool
                pub const m_flFinishedTime: usize = 0xACC; // GameTime_t
                pub const m_vecFinishOrigin: usize = 0xAD0; // Vector
                pub const m_vecOriginalAngles: usize = 0xADC; // QAngle
                pub const m_vecFinishAngles: usize = 0xAE8; // QAngle
                pub const m_bPreventChangesWhileMoving: usize = 0xAF4; // bool
                pub const m_bDisabled: usize = 0xAF5; // bool
                pub const m_vecTeleportOrigin: usize = 0xAF8; // VectorWS
                pub const m_flAbortedPlaybackAt: usize = 0xB04; // GameTime_t
                pub const m_pOnCommentaryStarted: usize = 0xB08; // CEntityIOOutput
                pub const m_pOnCommentaryStopped: usize = 0xB30; // CEntityIOOutput
                pub const m_bActive: usize = 0xB58; // bool
                pub const m_flStartTime: usize = 0xB5C; // GameTime_t
                pub const m_flStartTimeInCommentary: usize = 0xB60; // float32
                pub const m_iszTitle: usize = 0xB68; // CUtlSymbolLarge
                pub const m_iszSpeakers: usize = 0xB70; // CUtlSymbolLarge
                pub const m_iNodeNumber: usize = 0xB78; // int32
                pub const m_iNodeNumberMax: usize = 0xB7C; // int32
                pub const m_bListenedTo: usize = 0xB80; // bool
            }
            // Parent: CRotButton
            // Field count: 14
            pub mod CMomentaryRotButton {
                pub const m_Position: usize = 0x9A8; // CEntityOutputTemplate<float32>
                pub const m_OnUnpressed: usize = 0x9D0; // CEntityIOOutput
                pub const m_OnFullyOpen: usize = 0x9F8; // CEntityIOOutput
                pub const m_OnFullyClosed: usize = 0xA20; // CEntityIOOutput
                pub const m_OnReachedPosition: usize = 0xA48; // CEntityIOOutput
                pub const m_lastUsed: usize = 0xA70; // int32
                pub const m_start: usize = 0xA74; // QAngle
                pub const m_end: usize = 0xA80; // QAngle
                pub const m_IdealYaw: usize = 0xA8C; // float32
                pub const m_sNoise: usize = 0xA90; // CUtlSymbolLarge
                pub const m_bUpdateTarget: usize = 0xA98; // bool
                pub const m_direction: usize = 0xA9C; // int32
                pub const m_returnSpeed: usize = 0xAA0; // float32
                pub const m_flStartPosition: usize = 0xAA4; // float32
            }
            // Parent: CLogicalEntity
            // Field count: 3
            pub mod CSceneListManager {
                pub const m_hListManagers: usize = 0x4F0; // CUtlVector<CHandle<CSceneListManager>>
                pub const m_iszScenes: usize = 0x508; // CUtlSymbolLarge[16]
                pub const m_hScenes: usize = 0x588; // CHandle<CBaseEntity>[16]
            }
            // Parent: CPointEntity
            // Field count: 4
            pub mod CEnvTilt {
                pub const m_Duration: usize = 0x4F0; // float32
                pub const m_Radius: usize = 0x4F4; // float32
                pub const m_TiltTime: usize = 0x4F8; // float32
                pub const m_stopTime: usize = 0x4FC; // GameTime_t
            }
            // Parent: CEnvSoundscape
            // Field count: 0
            pub mod CEnvSoundscapeTriggerable {
            }
            // Parent: CBaseModelEntity
            // Field count: 68
            pub mod CFuncMover {
                pub const m_iszPathName: usize = 0x7D8; // CUtlSymbolLarge
                pub const m_hPathMover: usize = 0x7E0; // CHandle<CPathMover>
                pub const m_hPrevPathMover: usize = 0x7E4; // CHandle<CPathMover>
                pub const m_iszPathNodeStart: usize = 0x7E8; // CUtlSymbolLarge
                pub const m_iszPathNodeEnd: usize = 0x7F0; // CUtlSymbolLarge
                pub const m_eMoveType: usize = 0x7F8; // CFuncMover::Move_t
                pub const m_bIsReversing: usize = 0x7FC; // bool
                pub const m_vTarget: usize = 0x800; // Vector
                pub const m_flStartSpeed: usize = 0x80C; // float32
                pub const m_flPathLocation: usize = 0x810; // float32
                pub const m_flT: usize = 0x814; // float32
                pub const m_nCurrentNodeIndex: usize = 0x818; // int32
                pub const m_nPreviousNodeIndex: usize = 0x81C; // int32
                pub const m_eSolidType: usize = 0x820; // SolidType_t
                pub const m_bIsMoving: usize = 0x821; // bool
                pub const m_flTimeToReachMaxSpeed: usize = 0x824; // float32
                pub const m_flDistanceToReachMaxSpeed: usize = 0x828; // float32
                pub const m_flTimeToReachZeroSpeed: usize = 0x82C; // float32
                pub const m_flDistanceToReachZeroSpeed: usize = 0x830; // float32
                pub const m_flTimeMovementStart: usize = 0x834; // GameTime_t
                pub const m_flTimeMovementStop: usize = 0x838; // GameTime_t
                pub const m_hStopAtNode: usize = 0x83C; // CHandle<CMoverPathNode>
                pub const m_flPathLocationToBeginStop: usize = 0x840; // float32
                pub const m_iszStartForwardSound: usize = 0x848; // CUtlSymbolLarge
                pub const m_iszLoopForwardSound: usize = 0x850; // CUtlSymbolLarge
                pub const m_iszStopForwardSound: usize = 0x858; // CUtlSymbolLarge
                pub const m_iszStartReverseSound: usize = 0x860; // CUtlSymbolLarge
                pub const m_iszLoopReverseSound: usize = 0x868; // CUtlSymbolLarge
                pub const m_iszStopReverseSound: usize = 0x870; // CUtlSymbolLarge
                pub const m_iszArriveAtDestinationSound: usize = 0x878; // CUtlSymbolLarge
                pub const m_OnMovementEnd: usize = 0x898; // CEntityIOOutput
                pub const m_bStartAtClosestPoint: usize = 0x8C0; // bool
                pub const m_bStartAtEnd: usize = 0x8C1; // bool
                pub const m_eOrientationUpdate: usize = 0x8C4; // CFuncMover::OrientationUpdate_t
                pub const m_flTimeStartOrientationChange: usize = 0x8C8; // GameTime_t
                pub const m_flTimeToBlendToNewOrientation: usize = 0x8CC; // float32
                pub const m_flDurationBlendToNewOrientationRan: usize = 0x8D0; // float32
                pub const m_nOriginalOrientationIndex: usize = 0x8D4; // int32
                pub const m_bCreateMovableNavMesh: usize = 0x8D8; // bool
                pub const m_bAllowMovableNavMeshDockingOnEntireEntity: usize = 0x8D9; // bool
                pub const m_OnNodePassed: usize = 0x8E0; // CEntityIOOutput
                pub const m_iszOrientationMatchEntityName: usize = 0x908; // CUtlSymbolLarge
                pub const m_hOrientationMatchEntity: usize = 0x910; // CHandle<CBaseEntity>
                pub const m_flTimeToTraverseToNextNode: usize = 0x914; // float32
                pub const m_vLerpToNewPosStartInPathEntitySpace: usize = 0x918; // Vector
                pub const m_vLerpToNewPosEndInPathEntitySpace: usize = 0x924; // Vector
                pub const m_flLerpToPositionT: usize = 0x930; // float32
                pub const m_flLerpToPositionDeltaT: usize = 0x934; // float32
                pub const m_OnLerpToPositionComplete: usize = 0x938; // CEntityIOOutput
                pub const m_bIsPaused: usize = 0x960; // bool
                pub const m_eTransitionedToPathNodeAction: usize = 0x964; // CFuncMover::TransitionToPathNodeAction_t
                pub const m_nDelayedTeleportToNode: usize = 0x968; // int32
                pub const m_bIsVerboseLogging: usize = 0x96C; // bool
                pub const m_hFollowEntity: usize = 0x970; // CHandle<CBaseEntity>
                pub const m_flFollowDistance: usize = 0x974; // float32
                pub const m_flFollowMinimumSpeed: usize = 0x978; // float32
                pub const m_flCurFollowEntityT: usize = 0x97C; // float32
                pub const m_flCurFollowSpeed: usize = 0x980; // float32
                pub const m_strOrientationFaceEntityName: usize = 0x988; // CUtlSymbolLarge
                pub const m_hOrientationFaceEntity: usize = 0x990; // CHandle<CBaseEntity>
                pub const m_OnStart: usize = 0x998; // CEntityIOOutput
                pub const m_OnStartForward: usize = 0x9C0; // CEntityIOOutput
                pub const m_OnStartReverse: usize = 0x9E8; // CEntityIOOutput
                pub const m_OnStop: usize = 0xA10; // CEntityIOOutput
                pub const m_OnStopped: usize = 0xA38; // CEntityIOOutput
                pub const m_bNextNodeReturnsCurrent: usize = 0xA60; // bool
                pub const m_bStartedMoving: usize = 0xA61; // bool
                pub const m_eFollowEntityDirection: usize = 0xA80; // CFuncMover::FollowEntityDirection_t
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
            pub mod CPhysicsProp {
                pub const m_MotionEnabled: usize = 0xC60; // CEntityIOOutput
                pub const m_OnAwakened: usize = 0xC88; // CEntityIOOutput
                pub const m_OnAwake: usize = 0xCB0; // CEntityIOOutput
                pub const m_OnAsleep: usize = 0xCD8; // CEntityIOOutput
                pub const m_OnPlayerUse: usize = 0xD00; // CEntityIOOutput
                pub const m_OnOutOfWorld: usize = 0xD28; // CEntityIOOutput
                pub const m_OnPlayerPickup: usize = 0xD50; // CEntityIOOutput
                pub const m_bForceNavIgnore: usize = 0xD78; // bool
                pub const m_bNoNavmeshBlocker: usize = 0xD79; // bool
                pub const m_bForceNpcExclude: usize = 0xD7A; // bool
                pub const m_massScale: usize = 0xD7C; // float32
                pub const m_buoyancyScale: usize = 0xD80; // float32
                pub const m_damageType: usize = 0xD84; // int32
                pub const m_damageToEnableMotion: usize = 0xD88; // int32
                pub const m_flForceToEnableMotion: usize = 0xD8C; // float32
                pub const m_bThrownByPlayer: usize = 0xD90; // bool
                pub const m_bDroppedByPlayer: usize = 0xD91; // bool
                pub const m_bTouchedByPlayer: usize = 0xD92; // bool
                pub const m_bFirstCollisionAfterLaunch: usize = 0xD93; // bool
                pub const m_bHasBeenAwakened: usize = 0xD94; // bool
                pub const m_bIsOverrideProp: usize = 0xD95; // bool
                pub const m_flLastBurn: usize = 0xD98; // GameTime_t
                pub const m_nDynamicContinuousContactBehavior: usize = 0xD9C; // DynamicContinuousContactBehavior_t
                pub const m_fNextCheckDisableMotionContactsTime: usize = 0xDA0; // GameTime_t
                pub const m_iInitialGlowState: usize = 0xDA4; // int32
                pub const m_nGlowRange: usize = 0xDA8; // int32
                pub const m_nGlowRangeMin: usize = 0xDAC; // int32
                pub const m_glowColor: usize = 0xDB0; // Color
                pub const m_bShouldAutoConvertBackFromDebris: usize = 0xDB4; // bool
                pub const m_bMuteImpactEffects: usize = 0xDB5; // bool
                pub const m_bAcceptDamageFromHeldObjects: usize = 0xDBF; // bool
                pub const m_bEnableUseOutput: usize = 0xDC0; // bool
                pub const m_CrateType: usize = 0xDC4; // CPhysicsProp::CrateType_t
                pub const m_strItemClass: usize = 0xDC8; // CUtlSymbolLarge[4]
                pub const m_nItemCount: usize = 0xDE8; // int32[4]
                pub const m_bRemovableForAmmoBalancing: usize = 0xDF8; // bool
                pub const m_bAwake: usize = 0xDF9; // bool
                pub const m_bAttachedToReferenceFrame: usize = 0xDFA; // bool
            }
            // Parent: CBaseModelEntity
            // Field count: 2
            pub mod CFuncNavObstruction {
                pub const m_bDisabled: usize = 0x7F0; // bool
                pub const m_bUseAsyncObstacleUpdate: usize = 0x7F1; // bool
            }
            // Parent: CPhysConstraint
            // Field count: 12
            pub mod CPhysWheelConstraint {
                pub const m_flSuspensionFrequency: usize = 0x560; // float32
                pub const m_flSuspensionDampingRatio: usize = 0x564; // float32
                pub const m_flSuspensionHeightOffset: usize = 0x568; // float32
                pub const m_bEnableSuspensionLimit: usize = 0x56C; // bool
                pub const m_flMinSuspensionOffset: usize = 0x570; // float32
                pub const m_flMaxSuspensionOffset: usize = 0x574; // float32
                pub const m_bEnableSteeringLimit: usize = 0x578; // bool
                pub const m_flMinSteeringAngle: usize = 0x57C; // float32
                pub const m_flMaxSteeringAngle: usize = 0x580; // float32
                pub const m_flSteeringAxisFriction: usize = 0x584; // float32
                pub const m_flSpinAxisFriction: usize = 0x588; // float32
                pub const m_hSteeringMimicsEntity: usize = 0x58C; // CHandle<CBaseEntity>
            }
            // Parent: CBaseEntity
            // Field count: 2
            pub mod CSkyboxReference {
                pub const m_worldGroupId: usize = 0x4F0; // WorldGroupId_t
                pub const m_hSkyCamera: usize = 0x4F4; // CHandle<CSkyCamera>
            }
            // Parent: CBaseEntity
            // Field count: 0
            pub mod CPointPulse {
            }
            // Parent: CBaseCSGrenadeProjectile
            // Field count: 4
            //
            // Metadata:
            // NetworkVarNames: m_bIsIncGrenade (bool)
            pub mod CMolotovProjectile {
                pub const m_bIsIncGrenade: usize = 0xC40; // bool
                pub const m_bDetonated: usize = 0xC58; // bool
                pub const m_stillTimer: usize = 0xC60; // IntervalTimer
                pub const m_bHasBouncedOffPlayer: usize = 0xD40; // bool
            }
            // Parent: CBaseFilter
            // Field count: 1
            pub mod CFilterClass {
                pub const m_iFilterClass: usize = 0x548; // CUtlSymbolLarge
            }
            // Parent: CBaseTrigger
            // Field count: 0
            pub mod CTriggerToggleSave {
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
            pub mod CColorCorrection {
                pub const m_flFadeInDuration: usize = 0x4F0; // float32
                pub const m_flFadeOutDuration: usize = 0x4F4; // float32
                pub const m_flStartFadeInWeight: usize = 0x4F8; // float32
                pub const m_flStartFadeOutWeight: usize = 0x4FC; // float32
                pub const m_flTimeStartFadeIn: usize = 0x500; // GameTime_t
                pub const m_flTimeStartFadeOut: usize = 0x504; // GameTime_t
                pub const m_flMaxWeight: usize = 0x508; // float32
                pub const m_bStartDisabled: usize = 0x50C; // bool
                pub const m_bEnabled: usize = 0x50D; // bool
                pub const m_bMaster: usize = 0x50E; // bool
                pub const m_bClientSide: usize = 0x50F; // bool
                pub const m_bExclusive: usize = 0x510; // bool
                pub const m_MinFalloff: usize = 0x514; // float32
                pub const m_MaxFalloff: usize = 0x518; // float32
                pub const m_flCurWeight: usize = 0x51C; // float32
                pub const m_netlookupFilename: usize = 0x520; // char[512]
                pub const m_lookupFilename: usize = 0x720; // CUtlSymbolLarge
            }
            // Parent: CPropDoorRotating
            // Field count: 4
            pub mod CPropDoorRotatingBreakable {
                pub const m_bBreakable: usize = 0x1090; // bool
                pub const m_isAbleToCloseAreaPortals: usize = 0x1091; // bool
                pub const m_currentDamageState: usize = 0x1094; // int32
                pub const m_damageStates: usize = 0x1098; // CUtlVector<CUtlSymbolLarge>
            }
            // Parent: CLightEntity
            // Field count: 0
            pub mod CLightDirectionalEntity {
            }
            // Parent: CBaseModelEntity
            // Field count: 14
            //
            // Metadata:
            // NetworkVarNames: m_bEnabled (bool)
            // NetworkVarNames: m_DialogXMLName (string_t)
            // NetworkVarNames: m_PanelClassName (string_t)
            // NetworkVarNames: m_PanelID (string_t)
            pub mod CBaseClientUIEntity {
                pub const m_bEnabled: usize = 0x7D8; // bool
                pub const m_DialogXMLName: usize = 0x7E0; // CUtlSymbolLarge
                pub const m_PanelClassName: usize = 0x7E8; // CUtlSymbolLarge
                pub const m_PanelID: usize = 0x7F0; // CUtlSymbolLarge
                pub const m_CustomOutput0: usize = 0x7F8; // CEntityIOOutput
                pub const m_CustomOutput1: usize = 0x820; // CEntityIOOutput
                pub const m_CustomOutput2: usize = 0x848; // CEntityIOOutput
                pub const m_CustomOutput3: usize = 0x870; // CEntityIOOutput
                pub const m_CustomOutput4: usize = 0x898; // CEntityIOOutput
                pub const m_CustomOutput5: usize = 0x8C0; // CEntityIOOutput
                pub const m_CustomOutput6: usize = 0x8E8; // CEntityIOOutput
                pub const m_CustomOutput7: usize = 0x910; // CEntityIOOutput
                pub const m_CustomOutput8: usize = 0x938; // CEntityIOOutput
                pub const m_CustomOutput9: usize = 0x960; // CEntityIOOutput
            }
            // Parent: CBaseModelEntity
            // Field count: 15
            //
            // Metadata:
            // NetworkVarNames: m_CPropDataComponent (CPropDataComponent::Storage_t)
            pub mod CBreakable {
                pub const m_CPropDataComponent: usize = 0x7E0; // CPropDataComponent
                pub const m_Material: usize = 0x820; // Materials
                pub const m_hBreaker: usize = 0x824; // CHandle<CBaseEntity>
                pub const m_Explosion: usize = 0x828; // Explosions
                pub const m_iszSpawnObject: usize = 0x830; // CUtlSymbolLarge
                pub const m_flPressureDelay: usize = 0x838; // float32
                pub const m_iMinHealthDmg: usize = 0x83C; // int32
                pub const m_iszPropData: usize = 0x840; // CUtlSymbolLarge
                pub const m_impactEnergyScale: usize = 0x848; // float32
                pub const m_nOverrideBlockLOS: usize = 0x84C; // EOverrideBlockLOS_t
                pub const m_OnBreak: usize = 0x850; // CEntityIOOutput
                pub const m_OnHealthChanged: usize = 0x878; // CEntityOutputTemplate<float32>
                pub const m_PerformanceMode: usize = 0x8A0; // PerformanceMode_t
                pub const m_hPhysicsAttacker: usize = 0x8A4; // CHandle<CBasePlayerPawn>
                pub const m_flLastPhysicsInfluenceTime: usize = 0x8A8; // GameTime_t
            }
            // Parent: CPointEntity
            // Field count: 0
            pub mod CInfoLandmark {
            }
            // Parent: CLogicalEntity
            // Field count: 3
            pub mod CBaseFilter {
                pub const m_bNegated: usize = 0x4F0; // bool
                pub const m_OnPass: usize = 0x4F8; // CEntityIOOutput
                pub const m_OnFail: usize = 0x520; // CEntityIOOutput
            }
            // Parent: 
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_weaponPurchases (WeaponPurchaseCount_t)
            pub mod WeaponPurchaseTracker_t {
                pub const m_weaponPurchases: usize = 0x8; // CUtlVectorEmbeddedNetworkVar<WeaponPurchaseCount_t>
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Outflow_PlaySceneBase__CursorState_t {
                pub const m_sceneInstance: usize = 0x0; // CHandle<CBaseEntity>
                pub const m_mainActor: usize = 0x4; // CHandle<CBaseEntity>
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod PulseObservableBoolExpression_t {
                pub const m_EvaluateConnection: usize = 0x0; // CPulse_OutflowConnection
                pub const m_DependentObservableVars: usize = 0x48; // CUtlVector<PulseRuntimeVarIndex_t>
                pub const m_DependentObservableBlackboardReferences: usize = 0x60; // CUtlVector<PulseRuntimeBlackboardReferenceIndex_t>
            }
            // Parent: CPointEntity
            // Field count: 14
            pub mod CMapInfo {
                pub const m_iBuyingStatus: usize = 0x4F0; // int32
                pub const m_flBombRadius: usize = 0x4F4; // float32
                pub const m_iPetPopulation: usize = 0x4F8; // int32
                pub const m_bUseNormalSpawnsForDM: usize = 0x4FC; // bool
                pub const m_bDisableAutoGeneratedDMSpawns: usize = 0x4FD; // bool
                pub const m_flBotMaxVisionDistance: usize = 0x500; // float32
                pub const m_iHostageCount: usize = 0x504; // int32
                pub const m_bFadePlayerVisibilityFarZ: usize = 0x508; // bool
                pub const m_bRainTraceToSkyEnabled: usize = 0x509; // bool
                pub const m_flEnvRainStrength: usize = 0x50C; // float32
                pub const m_flEnvPuddleRippleStrength: usize = 0x510; // float32
                pub const m_flEnvPuddleRippleDirection: usize = 0x514; // float32
                pub const m_flEnvWetnessCoverage: usize = 0x518; // float32
                pub const m_flEnvWetnessDryingAmount: usize = 0x51C; // float32
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
            pub mod CGradientFog {
                pub const m_hGradientFogTexture: usize = 0x4F0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_flFogStartDistance: usize = 0x4F8; // float32
                pub const m_flFogEndDistance: usize = 0x4FC; // float32
                pub const m_bHeightFogEnabled: usize = 0x500; // bool
                pub const m_flFogStartHeight: usize = 0x504; // float32
                pub const m_flFogEndHeight: usize = 0x508; // float32
                pub const m_flFarZ: usize = 0x50C; // float32
                pub const m_flFogMaxOpacity: usize = 0x510; // float32
                pub const m_flFogFalloffExponent: usize = 0x514; // float32
                pub const m_flFogVerticalExponent: usize = 0x518; // float32
                pub const m_fogColor: usize = 0x51C; // Color
                pub const m_flFogStrength: usize = 0x520; // float32
                pub const m_flFadeTime: usize = 0x524; // float32
                pub const m_bStartDisabled: usize = 0x528; // bool
                pub const m_bIsEnabled: usize = 0x529; // bool
                pub const m_bGradientFogNeedsTextures: usize = 0x52A; // bool
            }
            // Parent: CSoundOpvarSetPointEntity
            // Field count: 9
            pub mod CSoundOpvarSetAABBEntity {
                pub const m_vDistanceInnerMins: usize = 0x6A8; // Vector
                pub const m_vDistanceInnerMaxs: usize = 0x6B4; // Vector
                pub const m_vDistanceOuterMins: usize = 0x6C0; // Vector
                pub const m_vDistanceOuterMaxs: usize = 0x6CC; // Vector
                pub const m_nAABBDirection: usize = 0x6D8; // int32
                pub const m_vInnerMins: usize = 0x6DC; // Vector
                pub const m_vInnerMaxs: usize = 0x6E8; // Vector
                pub const m_vOuterMins: usize = 0x6F4; // Vector
                pub const m_vOuterMaxs: usize = 0x700; // Vector
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Outflow_PlaySequence {
                pub const m_ParamSequenceName: usize = 0xF0; // CUtlString
            }
            // Parent: CPointClientUIWorldPanel
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_messageText (char)
            pub mod CPointClientUIWorldTextPanel {
                pub const m_messageText: usize = 0x9E0; // char[512]
            }
            // Parent: 
            // Field count: 11
            //
            // Metadata:
            // NetworkVarNames: m_nameStringableIndex (int32)
            pub mod CEntityIdentity {
                pub const m_nameStringableIndex: usize = 0x14; // int32
                pub const m_name: usize = 0x18; // CUtlSymbolLarge
                pub const m_designerName: usize = 0x20; // CUtlSymbolLarge
                pub const m_flags: usize = 0x30; // uint32
                pub const m_worldGroupId: usize = 0x38; // WorldGroupId_t
                pub const m_fDataObjectTypes: usize = 0x3C; // uint32
                pub const m_PathIndex: usize = 0x40; // ChangeAccessorFieldPathIndex_t
                pub const m_pPrev: usize = 0x50; // CEntityIdentity*
                pub const m_pNext: usize = 0x58; // CEntityIdentity*
                pub const m_pPrevByClass: usize = 0x60; // CEntityIdentity*
                pub const m_pNextByClass: usize = 0x68; // CEntityIdentity*
            }
            // Parent: None
            // Field count: 1
            pub mod CPulseCell_LimitCount__Criteria_t {
                pub const m_bLimitCountPasses: usize = 0x0; // bool
            }
            // Parent: CBaseModelEntity
            // Field count: 35
            pub mod CFuncRotator {
                pub const m_hRotatorTarget: usize = 0x7D8; // CHandle<CBaseEntity>
                pub const m_bIsRotating: usize = 0x7DC; // bool
                pub const m_bIsReversing: usize = 0x7DD; // bool
                pub const m_flTimeToReachMaxSpeed: usize = 0x7E0; // float32
                pub const m_flTimeToReachZeroSpeed: usize = 0x7E4; // float32
                pub const m_flDistanceAlongArcTraveled: usize = 0x7E8; // float32
                pub const m_flTimeToWaitOscillate: usize = 0x7EC; // float32
                pub const m_flTimeRotationStart: usize = 0x7F0; // GameTime_t
                pub const m_qLSPrevChange: usize = 0x800; // Quaternion
                pub const m_qWSPrev: usize = 0x810; // Quaternion
                pub const m_qWSInit: usize = 0x820; // Quaternion
                pub const m_qLSInit: usize = 0x830; // Quaternion
                pub const m_qLSOrientation: usize = 0x840; // Quaternion
                pub const m_OnRotationStarted: usize = 0x850; // CEntityIOOutput
                pub const m_OnRotationCompleted: usize = 0x878; // CEntityIOOutput
                pub const m_OnOscillate: usize = 0x8A0; // CEntityIOOutput
                pub const m_OnOscillateStartArrive: usize = 0x8C8; // CEntityIOOutput
                pub const m_OnOscillateStartDepart: usize = 0x8F0; // CEntityIOOutput
                pub const m_OnOscillateEndArrive: usize = 0x918; // CEntityIOOutput
                pub const m_OnOscillateEndDepart: usize = 0x940; // CEntityIOOutput
                pub const m_bOscillateDepart: usize = 0x968; // bool
                pub const m_nOscillateCount: usize = 0x96C; // int32
                pub const m_eRotateType: usize = 0x970; // CFuncRotator::Rotate_t
                pub const m_ePrevRotateType: usize = 0x974; // CFuncRotator::Rotate_t
                pub const m_bHasTargetOverride: usize = 0x978; // bool
                pub const m_qOrientationOverride: usize = 0x980; // Quaternion
                pub const m_eSpaceOverride: usize = 0x990; // RotatorTargetSpace_t
                pub const m_qAngularVelocity: usize = 0x994; // QAngle
                pub const m_vLookAtForcedUp: usize = 0x9A0; // Vector
                pub const m_strRotatorTarget: usize = 0x9B0; // CUtlSymbolLarge
                pub const m_bRecordHistory: usize = 0x9B8; // bool
                pub const m_vecRotatorHistory: usize = 0x9C0; // CUtlVector<RotatorHistoryEntry_t>
                pub const m_bReturningToPreviousOrientation: usize = 0x9D8; // bool
                pub const m_vecRotatorQueue: usize = 0x9E0; // CUtlVector<RotatorQueueEntry_t>
                pub const m_vecRotatorQueueHistory: usize = 0x9F8; // CUtlVector<RotatorHistoryEntry_t>
            }
            // Parent: CBaseEntity
            // Field count: 14
            pub mod CSoundEventEntity {
                pub const m_bStartOnSpawn: usize = 0x4F0; // bool
                pub const m_bToLocalPlayer: usize = 0x4F1; // bool
                pub const m_bStopOnNew: usize = 0x4F2; // bool
                pub const m_bSaveRestore: usize = 0x4F3; // bool
                pub const m_bSavedIsPlaying: usize = 0x4F4; // bool
                pub const m_flSavedElapsedTime: usize = 0x4F8; // float32
                pub const m_iszSourceEntityName: usize = 0x500; // CUtlSymbolLarge
                pub const m_iszAttachmentName: usize = 0x508; // CUtlSymbolLarge
                pub const m_onGUIDChanged: usize = 0x510; // CEntityOutputTemplate<uint64>
                pub const m_onSoundFinished: usize = 0x538; // CEntityIOOutput
                pub const m_flClientCullRadius: usize = 0x560; // float32
                pub const m_iszSoundName: usize = 0x590; // CUtlSymbolLarge
                pub const m_hSource: usize = 0x5AC; // CEntityHandle
                pub const m_nEntityIndexSelection: usize = 0x5B0; // int32
            }
            // Parent: SpawnPoint
            // Field count: 0
            pub mod CInfoPlayerCounterterrorist {
            }
            // Parent: CLogicalEntity
            // Field count: 4
            //
            // Metadata:
            // NetworkVarNames: m_fadeColor (Color)
            pub mod CEnvFade {
                pub const m_fadeColor: usize = 0x4F0; // Color
                pub const m_Duration: usize = 0x4F4; // float32
                pub const m_HoldDuration: usize = 0x4F8; // float32
                pub const m_OnBeginFade: usize = 0x500; // CEntityIOOutput
            }
            // Parent: None
            // Field count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CBasePlayerVData {
                pub const m_sModelName: usize = 0x28; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                pub const m_flHeadDamageMultiplier: usize = 0x108; // CSkillFloat
                pub const m_flChestDamageMultiplier: usize = 0x118; // CSkillFloat
                pub const m_flStomachDamageMultiplier: usize = 0x128; // CSkillFloat
                pub const m_flArmDamageMultiplier: usize = 0x138; // CSkillFloat
                pub const m_flLegDamageMultiplier: usize = 0x148; // CSkillFloat
                pub const m_flHoldBreathTime: usize = 0x158; // float32
                pub const m_flDrowningDamageInterval: usize = 0x15C; // float32
                pub const m_nDrowningDamageInitial: usize = 0x160; // int32
                pub const m_nDrowningDamageMax: usize = 0x164; // int32
                pub const m_nWaterSpeed: usize = 0x168; // int32
                pub const m_flUseRange: usize = 0x16C; // float32
                pub const m_flUseAngleTolerance: usize = 0x170; // float32
                pub const m_flCrouchTime: usize = 0x174; // float32
            }
            // Parent: CTriggerMultiple
            // Field count: 4
            pub mod CTriggerImpact {
                pub const m_flMagnitude: usize = 0x9D0; // float32
                pub const m_flNoise: usize = 0x9D4; // float32
                pub const m_flViewkick: usize = 0x9D8; // float32
                pub const m_pOutputForce: usize = 0x9E0; // CEntityOutputTemplate<Vector>
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // NetworkVarNames: m_flDMBonusStartTime (GameTime_t)
            // NetworkVarNames: m_flDMBonusTimeLength (float)
            // NetworkVarNames: m_sDMBonusWeapon (CUtlString)
            pub mod CCSGameModeRules_Deathmatch {
                pub const m_flDMBonusStartTime: usize = 0x30; // GameTime_t
                pub const m_flDMBonusTimeLength: usize = 0x34; // float32
                pub const m_sDMBonusWeapon: usize = 0x38; // CUtlString
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            pub mod CPulseCell_CursorQueue {
                pub const m_nCursorsAllowedToRunParallel: usize = 0x98; // int32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            pub mod CPulseCell_Value_RandomFloat {
            }
            // Parent: None
            // Field count: 0
            pub mod CPulseExecCursor {
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
            pub mod CBasePropDoor {
                pub const m_flAutoReturnDelay: usize = 0xD60; // float32
                pub const m_hDoorList: usize = 0xD68; // CUtlVector<CHandle<CBasePropDoor>>
                pub const m_nHardwareType: usize = 0xD80; // int32
                pub const m_bNeedsHardware: usize = 0xD84; // bool
                pub const m_eDoorState: usize = 0xD88; // DoorState_t
                pub const m_bLocked: usize = 0xD8C; // bool
                pub const m_bNoNPCs: usize = 0xD8D; // bool
                pub const m_closedPosition: usize = 0xD90; // Vector
                pub const m_closedAngles: usize = 0xD9C; // QAngle
                pub const m_hBlocker: usize = 0xDA8; // CHandle<CBaseEntity>
                pub const m_bFirstBlocked: usize = 0xDAC; // bool
                pub const m_ls: usize = 0xDB0; // locksound_t
                pub const m_bForceClosed: usize = 0xDD0; // bool
                pub const m_vecLatchWorldPosition: usize = 0xDD4; // VectorWS
                pub const m_hActivator: usize = 0xDE0; // CHandle<CBaseEntity>
                pub const m_SoundMoving: usize = 0xDF8; // CUtlSymbolLarge
                pub const m_SoundOpen: usize = 0xE00; // CUtlSymbolLarge
                pub const m_SoundClose: usize = 0xE08; // CUtlSymbolLarge
                pub const m_SoundLock: usize = 0xE10; // CUtlSymbolLarge
                pub const m_SoundUnlock: usize = 0xE18; // CUtlSymbolLarge
                pub const m_SoundLatch: usize = 0xE20; // CUtlSymbolLarge
                pub const m_SoundPound: usize = 0xE28; // CUtlSymbolLarge
                pub const m_SoundJiggle: usize = 0xE30; // CUtlSymbolLarge
                pub const m_SoundLockedAnim: usize = 0xE38; // CUtlSymbolLarge
                pub const m_numCloseAttempts: usize = 0xE40; // int32
                pub const m_nPhysicsMaterial: usize = 0xE44; // CUtlStringToken
                pub const m_SlaveName: usize = 0xE48; // CUtlSymbolLarge
                pub const m_hMaster: usize = 0xE50; // CHandle<CBasePropDoor>
                pub const m_OnBlockedClosing: usize = 0xE58; // CEntityIOOutput
                pub const m_OnBlockedOpening: usize = 0xE80; // CEntityIOOutput
                pub const m_OnUnblockedClosing: usize = 0xEA8; // CEntityIOOutput
                pub const m_OnUnblockedOpening: usize = 0xED0; // CEntityIOOutput
                pub const m_OnFullyClosed: usize = 0xEF8; // CEntityIOOutput
                pub const m_OnFullyOpen: usize = 0xF20; // CEntityIOOutput
                pub const m_OnClose: usize = 0xF48; // CEntityIOOutput
                pub const m_OnOpen: usize = 0xF70; // CEntityIOOutput
                pub const m_OnLockedUse: usize = 0xF98; // CEntityIOOutput
                pub const m_OnAjarOpen: usize = 0xFC0; // CEntityIOOutput
            }
            // Parent: CLogicalEntity
            // Field count: 6
            pub mod CLogicBranchList {
                pub const m_nLogicBranchNames: usize = 0x4F0; // CUtlSymbolLarge[16]
                pub const m_LogicBranchList: usize = 0x570; // CUtlVector<CHandle<CBaseEntity>>
                pub const m_eLastState: usize = 0x588; // CLogicBranchList::LogicBranchListenerLastState_t
                pub const m_OnAllTrue: usize = 0x590; // CEntityIOOutput
                pub const m_OnAllFalse: usize = 0x5B8; // CEntityIOOutput
                pub const m_OnMixed: usize = 0x5E0; // CEntityIOOutput
            }
            // Parent: None
            // Field count: 1
            pub mod CBtActionParachutePositioning {
                pub const m_ActionTimer: usize = 0x58; // CountdownTimer
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            pub mod CAK47 {
            }
            // Parent: CBreakableProp
            // Field count: 22
            //
            // Metadata:
            // NetworkVarNames: m_bUseHitboxesForRenderBox (bool)
            // NetworkVarNames: m_bUseAnimGraph (bool)
            pub mod CDynamicProp {
                pub const m_bCreateNavObstacle: usize = 0xC58; // bool
                pub const m_bNavObstacleUpdatesOverridden: usize = 0xC59; // bool
                pub const m_bUseHitboxesForRenderBox: usize = 0xC5A; // bool
                pub const m_bUseAnimGraph: usize = 0xC5B; // bool
                pub const m_pOutputAnimBegun: usize = 0xC60; // CEntityIOOutput
                pub const m_pOutputAnimOver: usize = 0xC88; // CEntityIOOutput
                pub const m_pOutputAnimLoopCycleOver: usize = 0xCB0; // CEntityIOOutput
                pub const m_OnAnimReachedStart: usize = 0xCD8; // CEntityIOOutput
                pub const m_OnAnimReachedEnd: usize = 0xD00; // CEntityIOOutput
                pub const m_iszIdleAnim: usize = 0xD28; // CUtlSymbolLarge
                pub const m_nIdleAnimLoopMode: usize = 0xD30; // AnimLoopMode_t
                pub const m_bRandomizeCycle: usize = 0xD34; // bool
                pub const m_bStartDisabled: usize = 0xD35; // bool
                pub const m_bFiredStartEndOutput: usize = 0xD36; // bool
                pub const m_bForceNpcExclude: usize = 0xD37; // bool
                pub const m_bCreateNonSolid: usize = 0xD38; // bool
                pub const m_bIsOverrideProp: usize = 0xD39; // bool
                pub const m_iInitialGlowState: usize = 0xD3C; // int32
                pub const m_nGlowRange: usize = 0xD40; // int32
                pub const m_nGlowRangeMin: usize = 0xD44; // int32
                pub const m_glowColor: usize = 0xD48; // Color
                pub const m_nGlowTeam: usize = 0xD4C; // int32
            }
            // Parent: CHostage
            // Field count: 0
            pub mod CHostageAlias_info_hostage_spawn {
            }
            // Parent: CBaseFilter
            // Field count: 1
            pub mod CFilterTeam {
                pub const m_iFilterTeam: usize = 0x548; // int32
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
            pub mod CFuncConveyor {
                pub const m_szConveyorModels: usize = 0x7D8; // CUtlSymbolLarge
                pub const m_flTransitionDurationSeconds: usize = 0x7E0; // float32
                pub const m_angMoveEntitySpace: usize = 0x7E4; // QAngle
                pub const m_vecMoveDirEntitySpace: usize = 0x7F0; // Vector
                pub const m_flTargetSpeed: usize = 0x7FC; // float32
                pub const m_nTransitionStartTick: usize = 0x800; // GameTick_t
                pub const m_nTransitionDurationTicks: usize = 0x804; // int32
                pub const m_flTransitionStartSpeed: usize = 0x808; // float32
                pub const m_hConveyorModels: usize = 0x810; // CNetworkUtlVectorBase<CHandle<CBaseEntity>>
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
            pub mod CTriggerPhysics {
                pub const m_gravityScale: usize = 0x9B8; // float32
                pub const m_linearLimit: usize = 0x9BC; // float32
                pub const m_linearDamping: usize = 0x9C0; // float32
                pub const m_angularLimit: usize = 0x9C4; // float32
                pub const m_angularDamping: usize = 0x9C8; // float32
                pub const m_linearForce: usize = 0x9CC; // float32
                pub const m_flFrequency: usize = 0x9D0; // float32
                pub const m_flDampingRatio: usize = 0x9D4; // float32
                pub const m_vecLinearForcePointAt: usize = 0x9D8; // Vector
                pub const m_bCollapseToForcePoint: usize = 0x9E4; // bool
                pub const m_vecLinearForcePointAtWorld: usize = 0x9E8; // Vector
                pub const m_vecLinearForceDirection: usize = 0x9F4; // Vector
                pub const m_bConvertToDebrisWhenPossible: usize = 0xA00; // bool
            }
            // Parent: CPointEntity
            // Field count: 0
            pub mod CInfoInstructorHintBombTargetB {
            }
            // Parent: CBaseEntity
            // Field count: 5
            pub mod CFuncTimescale {
                pub const m_flDesiredTimescale: usize = 0x4F0; // float32
                pub const m_flAcceleration: usize = 0x4F4; // float32
                pub const m_flMinBlendRate: usize = 0x4F8; // float32
                pub const m_flBlendDeltaMultiplier: usize = 0x4FC; // float32
                pub const m_isStarted: usize = 0x500; // bool
            }
            // Parent: None
            // Field count: 30
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CBasePlayerWeaponVData {
                pub const m_szWorldModel: usize = 0x28; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                pub const m_sToolsOnlyOwnerModelName: usize = 0x108; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                pub const m_bBuiltRightHanded: usize = 0x1E8; // bool
                pub const m_bAllowFlipping: usize = 0x1E9; // bool
                pub const m_sMuzzleAttachment: usize = 0x1F0; // CAttachmentNameSymbolWithStorage
                pub const m_szMuzzleFlashParticle: usize = 0x210; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                pub const m_szMuzzleFlashParticleConfig: usize = 0x2F0; // CUtlString
                pub const m_szBarrelSmokeParticle: usize = 0x2F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                pub const m_nMuzzleSmokeShotThreshold: usize = 0x3D8; // uint8
                pub const m_flMuzzleSmokeTimeout: usize = 0x3DC; // float32
                pub const m_flMuzzleSmokeDecrementRate: usize = 0x3E0; // float32
                pub const m_bLinkedCooldowns: usize = 0x3E4; // bool
                pub const m_iFlags: usize = 0x3E5; // ItemFlagTypes_t
                pub const m_nPrimaryAmmoType: usize = 0x3E6; // AmmoIndex_t
                pub const m_nSecondaryAmmoType: usize = 0x3E7; // AmmoIndex_t
                pub const m_iMaxClip1: usize = 0x3E8; // int32
                pub const m_iMaxClip2: usize = 0x3EC; // int32
                pub const m_iDefaultClip1: usize = 0x3F0; // int32
                pub const m_iDefaultClip2: usize = 0x3F4; // int32
                pub const m_bReserveAmmoAsClips: usize = 0x3F8; // bool
                pub const m_bTreatAsSingleClip: usize = 0x3F9; // bool
                pub const m_bKeepLoadedAmmo: usize = 0x3FA; // bool
                pub const m_iWeight: usize = 0x3FC; // int32
                pub const m_bAutoSwitchTo: usize = 0x400; // bool
                pub const m_bAutoSwitchFrom: usize = 0x401; // bool
                pub const m_iRumbleEffect: usize = 0x404; // RumbleEffect_t
                pub const m_flDropSpeed: usize = 0x408; // float32
                pub const m_iSlot: usize = 0x40C; // int32
                pub const m_iPosition: usize = 0x410; // int32
                pub const m_aShootSounds: usize = 0x418; // CUtlOrderedMap<WeaponSound_t,CSoundEventName>
            }
            // Parent: CSoundOpvarSetPointBase
            // Field count: 24
            pub mod CSoundOpvarSetPointEntity {
                pub const m_OnEnter: usize = 0x598; // CEntityIOOutput
                pub const m_OnExit: usize = 0x5C0; // CEntityIOOutput
                pub const m_bAutoDisable: usize = 0x5E8; // bool
                pub const m_flDistanceMin: usize = 0x62C; // float32
                pub const m_flDistanceMax: usize = 0x630; // float32
                pub const m_flDistanceMapMin: usize = 0x634; // float32
                pub const m_flDistanceMapMax: usize = 0x638; // float32
                pub const m_flOcclusionRadius: usize = 0x63C; // float32
                pub const m_flOcclusionMin: usize = 0x640; // float32
                pub const m_flOcclusionMax: usize = 0x644; // float32
                pub const m_flValSetOnDisable: usize = 0x648; // float32
                pub const m_bSetValueOnDisable: usize = 0x64C; // bool
                pub const m_bReloading: usize = 0x64D; // bool
                pub const m_nSimulationMode: usize = 0x650; // int32
                pub const m_nVisibilitySamples: usize = 0x654; // int32
                pub const m_vDynamicProxyPoint: usize = 0x658; // Vector
                pub const m_flDynamicMaximumOcclusion: usize = 0x664; // float32
                pub const m_hDynamicEntity: usize = 0x668; // CEntityHandle
                pub const m_iszDynamicEntityName: usize = 0x670; // CUtlSymbolLarge
                pub const m_flPathingDistanceNormFactor: usize = 0x678; // float32
                pub const m_vPathingSourcePos: usize = 0x67C; // Vector
                pub const m_vPathingListenerPos: usize = 0x688; // Vector
                pub const m_vPathingDirection: usize = 0x694; // Vector
                pub const m_nPathingSourceIndex: usize = 0x6A0; // int32
            }
            // Parent: CServerOnlyPointEntity
            // Field count: 0
            pub mod CInfoTargetServerOnly {
            }
            // Parent: CBaseTrigger
            // Field count: 0
            pub mod CServerRagdollTrigger {
            }
            // Parent: CDynamicProp
            // Field count: 0
            pub mod CDynamicPropAlias_dynamic_prop {
            }
            // Parent: CMarkupVolume
            // Field count: 7
            pub mod CMarkupVolumeTagged {
                pub const m_GroupNames: usize = 0x7E0; // CUtlVector<CGlobalSymbol>
                pub const m_Tags: usize = 0x7F8; // CUtlVector<CGlobalSymbol>
                pub const m_bIsGroup: usize = 0x810; // bool
                pub const m_bGroupByPrefab: usize = 0x811; // bool
                pub const m_bGroupByVolume: usize = 0x812; // bool
                pub const m_bGroupOtherGroups: usize = 0x813; // bool
                pub const m_bIsInGroup: usize = 0x814; // bool
            }
            // Parent: CPointEntity
            // Field count: 0
            pub mod CInfoParticleTarget {
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
            pub mod CEnvCubemap {
                pub const m_Entity_hCubemapTexture: usize = 0x570; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_bCustomCubemapTexture: usize = 0x578; // bool
                pub const m_Entity_flInfluenceRadius: usize = 0x57C; // float32
                pub const m_Entity_vBoxProjectMins: usize = 0x580; // Vector
                pub const m_Entity_vBoxProjectMaxs: usize = 0x58C; // Vector
                pub const m_Entity_bMoveable: usize = 0x598; // bool
                pub const m_Entity_nHandshake: usize = 0x59C; // int32
                pub const m_Entity_nEnvCubeMapArrayIndex: usize = 0x5A0; // int32
                pub const m_Entity_nPriority: usize = 0x5A4; // int32
                pub const m_Entity_flEdgeFadeDist: usize = 0x5A8; // float32
                pub const m_Entity_vEdgeFadeDists: usize = 0x5AC; // Vector
                pub const m_Entity_flDiffuseScale: usize = 0x5B8; // float32
                pub const m_Entity_bStartDisabled: usize = 0x5BC; // bool
                pub const m_Entity_bDefaultEnvMap: usize = 0x5BD; // bool
                pub const m_Entity_bDefaultSpecEnvMap: usize = 0x5BE; // bool
                pub const m_Entity_bIndoorCubeMap: usize = 0x5BF; // bool
                pub const m_Entity_bCopyDiffuseFromDefaultCubemap: usize = 0x5C0; // bool
                pub const m_Entity_bEnabled: usize = 0x5D0; // bool
            }
            // Parent: CPlayerPawnComponent
            // Field count: 0
            pub mod CCSPlayer_DamageReactServices {
            }
            // Parent: CCSWeaponBaseShotgun
            // Field count: 0
            pub mod CWeaponXM1014 {
            }
            // Parent: CBaseTrigger
            // Field count: 15
            pub mod CTriggerLerpObject {
                pub const m_iszLerpTarget: usize = 0x9A8; // CUtlSymbolLarge
                pub const m_hLerpTarget: usize = 0x9B0; // CHandle<CBaseEntity>
                pub const m_iszLerpTargetAttachment: usize = 0x9B8; // CUtlSymbolLarge
                pub const m_hLerpTargetAttachment: usize = 0x9C0; // AttachmentHandle_t
                pub const m_flLerpDuration: usize = 0x9C4; // float32
                pub const m_bLerpRestoreMoveType: usize = 0x9C8; // bool
                pub const m_bSingleLerpObject: usize = 0x9C9; // bool
                pub const m_vecLerpingObjects: usize = 0x9D0; // CUtlVector<lerpdata_t>
                pub const m_iszLerpEffect: usize = 0x9E8; // CUtlSymbolLarge
                pub const m_iszLerpSound: usize = 0x9F0; // CUtlSymbolLarge
                pub const m_bAttachTouchingObject: usize = 0x9F8; // bool
                pub const m_hEntityToWaitForDisconnect: usize = 0x9FC; // CHandle<CBaseEntity>
                pub const m_OnLerpStarted: usize = 0xA00; // CEntityIOOutput
                pub const m_OnLerpFinished: usize = 0xA28; // CEntityIOOutput
                pub const m_OnDetached: usize = 0xA50; // CEntityIOOutput
            }
            // Parent: CPhysicsProp
            // Field count: 0
            pub mod CPhysicsPropOverride {
            }
            // Parent: CBaseTrigger
            // Field count: 3
            pub mod CTriggerSave {
                pub const m_bForceNewLevelUnit: usize = 0x9A8; // bool
                pub const m_fDangerousTimer: usize = 0x9AC; // float32
                pub const m_minHitPoints: usize = 0x9B0; // int32
            }
            // Parent: CPointEntity
            // Field count: 6
            pub mod CPointHurt {
                pub const m_nDamage: usize = 0x4F0; // int32
                pub const m_bitsDamageType: usize = 0x4F4; // DamageTypes_t
                pub const m_flRadius: usize = 0x4F8; // float32
                pub const m_flDelay: usize = 0x4FC; // float32
                pub const m_strTarget: usize = 0x500; // CUtlSymbolLarge
                pub const m_pActivator: usize = 0x508; // CHandle<CBaseEntity>
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
            pub mod CBasePlayerController {
                pub const m_nInButtonsWhichAreToggles: usize = 0x4F8; // uint64
                pub const m_nTickBase: usize = 0x500; // uint32
                pub const m_hPawn: usize = 0x528; // CHandle<CBasePlayerPawn>
                pub const m_bKnownTeamMismatch: usize = 0x52C; // bool
                pub const m_nSplitScreenSlot: usize = 0x530; // CSplitScreenSlot
                pub const m_hSplitOwner: usize = 0x534; // CHandle<CBasePlayerController>
                pub const m_hSplitScreenPlayers: usize = 0x538; // CUtlVector<CHandle<CBasePlayerController>>
                pub const m_bIsHLTV: usize = 0x550; // bool
                pub const m_iConnected: usize = 0x554; // PlayerConnectedState
                pub const m_iszPlayerName: usize = 0x558; // char[128]
                pub const m_szNetworkIDString: usize = 0x5D8; // CUtlString
                pub const m_fLerpTime: usize = 0x5E0; // float32
                pub const m_bLagCompensation: usize = 0x5E4; // bool
                pub const m_bPredict: usize = 0x5E5; // bool
                pub const m_bIsLowViolence: usize = 0x5EC; // bool
                pub const m_bGamePaused: usize = 0x5ED; // bool
                pub const m_iIgnoreGlobalChat: usize = 0x728; // ChatIgnoreType_t
                pub const m_flLastPlayerTalkTime: usize = 0x72C; // float32
                pub const m_flLastEntitySteadyState: usize = 0x730; // float32
                pub const m_nAvailableEntitySteadyState: usize = 0x734; // int32
                pub const m_bHasAnySteadyStateEnts: usize = 0x738; // bool
                pub const m_steamID: usize = 0x748; // uint64
                pub const m_bNoClipEnabled: usize = 0x750; // bool
                pub const m_iDesiredFOV: usize = 0x754; // uint32
            }
        }
    }
}
