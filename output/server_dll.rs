// Generated using https://github.com/a2x/cs2-dumper
// 2026-07-09 09:08:48.606860700 UTC

#![allow(non_upper_case_globals, non_camel_case_types, non_snake_case, unused)]

pub mod cs2_dumper {
    pub mod schemas {
        // Module: server.dll
        // Class count: 990
        // Enum count: 237
        pub mod server_dll {
            // Alignment: 4
            // Member count: 4
            #[repr(u32)]
            pub enum CLogicBranchList__LogicBranchListenerLastState_t {
                LOGIC_BRANCH_LISTENER_NOT_INIT = 0x0,
                LOGIC_BRANCH_LISTENER_ALL_TRUE = 0x1,
                LOGIC_BRANCH_LISTENER_ALL_FALSE = 0x2,
                LOGIC_BRANCH_LISTENER_MIXED = 0x3
            }
            // Alignment: 4
            // Member count: 3
            #[repr(u32)]
            pub enum CFuncMover__Move_t {
                MOVE_LOOP = 0x0,
                MOVE_OSCILLATE = 0x1,
                MOVE_STOP_AT_END = 0x2
            }
            // Alignment: 4
            // Member count: 7
            #[repr(u32)]
            pub enum CFuncRotator__Rotate_t {
                ROTATE_LOOP = 0x0,
                ROTATE_OSCILLATE = 0x1,
                ROTATE_STOP_AT_END = 0x2,
                ROTATE_LOOK_AT_TARGET = 0x3,
                ROTATE_LOOK_AT_TARGET_ONLY_YAW = 0x4,
                ROTATE_LOOK_AT_TARGET_ONLY_PITCH = 0x5,
                ROTATE_RETURN_TO_INITIAL_ORIENTATION = 0x6
            }
            // Alignment: 4
            // Member count: 4
            #[repr(u32)]
            pub enum CFuncRotator__RotationAxis_t {
                ROTATION_AXIS_UNDEFINED = 0x0,
                ROTATION_AXIS_YAW = 0x1,
                ROTATION_AXIS_PITCH = 0x2,
                ROTATION_AXIS_ROLL = 0x3
            }
            // Alignment: 4
            // Member count: 2
            #[repr(u32)]
            pub enum PulseBestOutflowRules_t {
                SORT_BY_NUMBER_OF_VALID_CRITERIA = 0x0,
                SORT_BY_OUTFLOW_INDEX = 0x1
            }
            // Alignment: 4
            // Member count: 2
            #[repr(u32)]
            pub enum CPhysicsProp__CrateType_t {
                CRATE_SPECIFIC_ITEM = 0x0,
                CRATE_TYPE_COUNT = 0x1
            }
            // Alignment: 4
            // Member count: 4
            #[repr(u32)]
            pub enum PulseCursorCancelPriority_t {
                None = 0x0,
                CancelOnSucceeded = 0x1,
                SoftCancel = 0x2,
                HardCancel = 0x3
            }
            // Alignment: 4
            // Member count: 2
            #[repr(u32)]
            pub enum PulseMethodCallMode_t {
                SYNC_WAIT_FOR_COMPLETION = 0x0,
                ASYNC_FIRE_AND_FORGET = 0x1
            }
            // Alignment: 4
            // Member count: 4
            #[repr(u32)]
            pub enum CFuncMover__FollowConstraint_t {
                FOLLOW_CONSTRAINT_DISTANCE = 0x0,
                FOLLOW_CONSTRAINT_SPRING = 0x1,
                FOLLOW_CONSTRAINT_RATIO = 0x2,
                FOLLOW_CONSTRAINT_COUPLER = 0x3
            }
            // Alignment: 4
            // Member count: 3
            #[repr(u32)]
            pub enum CFuncMover__FollowEntityDirection_t {
                FOLLOW_ENTITY_BIDIRECTIONAL = 0x0,
                FOLLOW_ENTITY_FORWARD = 0x1,
                FOLLOW_ENTITY_REVERSE = 0x2
            }
            // Alignment: 4
            // Member count: 3
            #[repr(u32)]
            pub enum CFuncMover__PathRebuildStrategy_t {
                PATH_REBUILD_DONT_MOVE = 0x0,
                PATH_REBUILD_MAINTAIN_T = 0x1,
                PATH_REBUILD_USE_CURRENT_NODE_T = 0x2
            }
            // Alignment: 4
            // Member count: 4
            #[repr(u32)]
            pub enum CFuncMover__TransitionToPathNodeAction_t {
                TRANSITION_TO_PATH_NODE_ACTION_NONE = 0x0,
                TRANSITION_TO_PATH_NODE_ACTION_START_FORWARD = 0x1,
                TRANSITION_TO_PATH_NODE_ACTION_START_REVERSE = 0x2,
                TRANSITION_TO_PATH_NODE_TRANSITIONING = 0x3
            }
            // Alignment: 4
            // Member count: 2
            #[repr(u32)]
            pub enum PulseCursorWakePriority_t {
                WakeElegantly = 0x0,
                WakeImmediate = 0x1
            }
            // Alignment: 4
            // Member count: 9
            #[repr(u32)]
            pub enum CFuncMover__OrientationUpdate_t {
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
            // Member count: 121
            #[repr(u32)]
            pub enum ENetworkDisconnectionReason {
                NETWORK_DISCONNECT_INVALID = 0x0,
                NETWORK_DISCONNECT_SHUTDOWN = 0x1,
                NETWORK_DISCONNECT_DISCONNECT_BY_USER = 0x2,
                NETWORK_DISCONNECT_DISCONNECT_BY_SERVER = 0x3,
                NETWORK_DISCONNECT_LOST = 0x4,
                NETWORK_DISCONNECT_OVERFLOW = 0x5,
                NETWORK_DISCONNECT_STEAM_BANNED = 0x6,
                NETWORK_DISCONNECT_STEAM_INUSE = 0x7,
                NETWORK_DISCONNECT_STEAM_TICKET = 0x8,
                NETWORK_DISCONNECT_STEAM_LOGON = 0x9,
                NETWORK_DISCONNECT_STEAM_AUTHCANCELLED = 0xA,
                NETWORK_DISCONNECT_STEAM_AUTHALREADYUSED = 0xB,
                NETWORK_DISCONNECT_STEAM_AUTHINVALID = 0xC,
                NETWORK_DISCONNECT_STEAM_VACBANSTATE = 0xD,
                NETWORK_DISCONNECT_STEAM_LOGGED_IN_ELSEWHERE = 0xE,
                NETWORK_DISCONNECT_STEAM_VAC_CHECK_TIMEDOUT = 0xF,
                NETWORK_DISCONNECT_STEAM_DROPPED = 0x10,
                NETWORK_DISCONNECT_STEAM_OWNERSHIP = 0x11,
                NETWORK_DISCONNECT_SERVERINFO_OVERFLOW = 0x12,
                NETWORK_DISCONNECT_TICKMSG_OVERFLOW = 0x13,
                NETWORK_DISCONNECT_STRINGTABLEMSG_OVERFLOW = 0x14,
                NETWORK_DISCONNECT_DELTAENTMSG_OVERFLOW = 0x15,
                NETWORK_DISCONNECT_TEMPENTMSG_OVERFLOW = 0x16,
                NETWORK_DISCONNECT_SOUNDSMSG_OVERFLOW = 0x17,
                NETWORK_DISCONNECT_SNAPSHOTOVERFLOW = 0x18,
                NETWORK_DISCONNECT_SNAPSHOTERROR = 0x19,
                NETWORK_DISCONNECT_RELIABLEOVERFLOW = 0x1A,
                NETWORK_DISCONNECT_BADDELTATICK = 0x1B,
                NETWORK_DISCONNECT_NOMORESPLITS = 0x1C,
                NETWORK_DISCONNECT_TIMEDOUT = 0x1D,
                NETWORK_DISCONNECT_DISCONNECTED = 0x1E,
                NETWORK_DISCONNECT_LEAVINGSPLIT = 0x1F,
                NETWORK_DISCONNECT_DIFFERENTCLASSTABLES = 0x20,
                NETWORK_DISCONNECT_BADRELAYPASSWORD = 0x21,
                NETWORK_DISCONNECT_BADSPECTATORPASSWORD = 0x22,
                NETWORK_DISCONNECT_HLTVRESTRICTED = 0x23,
                NETWORK_DISCONNECT_NOSPECTATORS = 0x24,
                NETWORK_DISCONNECT_HLTVUNAVAILABLE = 0x25,
                NETWORK_DISCONNECT_HLTVSTOP = 0x26,
                NETWORK_DISCONNECT_KICKED = 0x27,
                NETWORK_DISCONNECT_BANADDED = 0x28,
                NETWORK_DISCONNECT_KICKBANADDED = 0x29,
                NETWORK_DISCONNECT_HLTVDIRECT = 0x2A,
                NETWORK_DISCONNECT_PURESERVER_CLIENTEXTRA = 0x2B,
                NETWORK_DISCONNECT_PURESERVER_MISMATCH = 0x2C,
                NETWORK_DISCONNECT_USERCMD = 0x2D,
                NETWORK_DISCONNECT_REJECTED_BY_GAME = 0x2E,
                NETWORK_DISCONNECT_MESSAGE_PARSE_ERROR = 0x2F,
                NETWORK_DISCONNECT_INVALID_MESSAGE_ERROR = 0x30,
                NETWORK_DISCONNECT_BAD_SERVER_PASSWORD = 0x31,
                NETWORK_DISCONNECT_DIRECT_CONNECT_RESERVATION = 0x32,
                NETWORK_DISCONNECT_CONNECTION_FAILURE = 0x33,
                NETWORK_DISCONNECT_NO_PEER_GROUP_HANDLERS = 0x34,
                NETWORK_DISCONNECT_RECONNECTION = 0x35,
                NETWORK_DISCONNECT_LOOPSHUTDOWN = 0x36,
                NETWORK_DISCONNECT_LOOPDEACTIVATE = 0x37,
                NETWORK_DISCONNECT_HOST_ENDGAME = 0x38,
                NETWORK_DISCONNECT_LOOP_LEVELLOAD_ACTIVATE = 0x39,
                NETWORK_DISCONNECT_CREATE_SERVER_FAILED = 0x3A,
                NETWORK_DISCONNECT_EXITING = 0x3B,
                NETWORK_DISCONNECT_REQUEST_HOSTSTATE_IDLE = 0x3C,
                NETWORK_DISCONNECT_REQUEST_HOSTSTATE_HLTVRELAY = 0x3D,
                NETWORK_DISCONNECT_CLIENT_CONSISTENCY_FAIL = 0x3E,
                NETWORK_DISCONNECT_CLIENT_UNABLE_TO_CRC_MAP = 0x3F,
                NETWORK_DISCONNECT_CLIENT_NO_MAP = 0x40,
                NETWORK_DISCONNECT_CLIENT_DIFFERENT_MAP = 0x41,
                NETWORK_DISCONNECT_SERVER_REQUIRES_STEAM = 0x42,
                NETWORK_DISCONNECT_STEAM_DENY_MISC = 0x43,
                NETWORK_DISCONNECT_STEAM_DENY_BAD_ANTI_CHEAT = 0x44,
                NETWORK_DISCONNECT_SERVER_SHUTDOWN = 0x45,
                NETWORK_DISCONNECT_REPLAY_INCOMPATIBLE = 0x47,
                NETWORK_DISCONNECT_CONNECT_REQUEST_TIMEDOUT = 0x48,
                NETWORK_DISCONNECT_SERVER_INCOMPATIBLE = 0x49,
                NETWORK_DISCONNECT_LOCALPROBLEM_MANYRELAYS = 0x4A,
                NETWORK_DISCONNECT_LOCALPROBLEM_HOSTEDSERVERPRIMARYRELAY = 0x4B,
                NETWORK_DISCONNECT_LOCALPROBLEM_NETWORKCONFIG = 0x4C,
                NETWORK_DISCONNECT_LOCALPROBLEM_OTHER = 0x4D,
                NETWORK_DISCONNECT_REMOTE_TIMEOUT = 0x4F,
                NETWORK_DISCONNECT_REMOTE_TIMEOUT_CONNECTING = 0x50,
                NETWORK_DISCONNECT_REMOTE_OTHER = 0x51,
                NETWORK_DISCONNECT_REMOTE_BADCRYPT = 0x52,
                NETWORK_DISCONNECT_REMOTE_CERTNOTTRUSTED = 0x53,
                NETWORK_DISCONNECT_UNUSUAL = 0x54,
                NETWORK_DISCONNECT_INTERNAL_ERROR = 0x55,
                NETWORK_DISCONNECT_REJECT_BADCHALLENGE = 0x80,
                NETWORK_DISCONNECT_REJECT_NOLOBBY = 0x81,
                NETWORK_DISCONNECT_REJECT_BACKGROUND_MAP = 0x82,
                NETWORK_DISCONNECT_REJECT_SINGLE_PLAYER = 0x83,
                NETWORK_DISCONNECT_REJECT_HIDDEN_GAME = 0x84,
                NETWORK_DISCONNECT_REJECT_LANRESTRICT = 0x85,
                NETWORK_DISCONNECT_REJECT_BADPASSWORD = 0x86,
                NETWORK_DISCONNECT_REJECT_SERVERFULL = 0x87,
                NETWORK_DISCONNECT_REJECT_INVALIDRESERVATION = 0x88,
                NETWORK_DISCONNECT_REJECT_FAILEDCHANNEL = 0x89,
                NETWORK_DISCONNECT_REJECT_CONNECT_FROM_LOBBY = 0x8A,
                NETWORK_DISCONNECT_REJECT_RESERVED_FOR_LOBBY = 0x8B,
                NETWORK_DISCONNECT_REJECT_INVALIDKEYLENGTH = 0x8C,
                NETWORK_DISCONNECT_REJECT_OLDPROTOCOL = 0x8D,
                NETWORK_DISCONNECT_REJECT_NEWPROTOCOL = 0x8E,
                NETWORK_DISCONNECT_REJECT_INVALIDCONNECTION = 0x8F,
                NETWORK_DISCONNECT_REJECT_INVALIDCERTLEN = 0x90,
                NETWORK_DISCONNECT_REJECT_INVALIDSTEAMCERTLEN = 0x91,
                NETWORK_DISCONNECT_REJECT_STEAM = 0x92,
                NETWORK_DISCONNECT_REJECT_SERVERAUTHDISABLED = 0x93,
                NETWORK_DISCONNECT_REJECT_SERVERCDKEYAUTHINVALID = 0x94,
                NETWORK_DISCONNECT_REJECT_BANNED = 0x95,
                NETWORK_DISCONNECT_KICKED_TEAMKILLING = 0x96,
                NETWORK_DISCONNECT_KICKED_TK_START = 0x97,
                NETWORK_DISCONNECT_KICKED_UNTRUSTEDACCOUNT = 0x98,
                NETWORK_DISCONNECT_KICKED_CONVICTEDACCOUNT = 0x99,
                NETWORK_DISCONNECT_KICKED_COMPETITIVECOOLDOWN = 0x9A,
                NETWORK_DISCONNECT_KICKED_TEAMHURTING = 0x9B,
                NETWORK_DISCONNECT_KICKED_HOSTAGEKILLING = 0x9C,
                NETWORK_DISCONNECT_KICKED_VOTEDOFF = 0x9D,
                NETWORK_DISCONNECT_KICKED_IDLE = 0x9E,
                NETWORK_DISCONNECT_KICKED_SUICIDE = 0x9F,
                NETWORK_DISCONNECT_KICKED_NOSTEAMLOGIN = 0xA0,
                NETWORK_DISCONNECT_KICKED_NOSTEAMTICKET = 0xA1,
                NETWORK_DISCONNECT_KICKED_INPUTAUTOMATION = 0xA2,
                NETWORK_DISCONNECT_KICKED_VACNETABNORMALBEHAVIOR = 0xA3,
                NETWORK_DISCONNECT_KICKED_INSECURECLIENT = 0xA4
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
            // Member count: 9
            #[repr(u32)]
            pub enum EDestructibleParts_DestroyParameterFlags {
                None = 0x0,
                GenerateBreakpieces = 0x1,
                SetBodyGroupAndCollisionState = 0x2,
                EnableFlinches = 0x4,
                ForceDamageApply = 0x8,
                IgnoreKillEntityFlag = 0x10,
                IgnoreHealthCheck = 0x20,
                ApplyPhysicsForce = 0x40,
                Default = 0x7
            }
            // Alignment: 4
            // Member count: 5
            #[repr(u32)]
            pub enum DIALOG_TYPE {
                DIALOG_MSG = 0x0,
                DIALOG_MENU = 0x1,
                DIALOG_TEXT = 0x2,
                DIALOG_ENTRY = 0x3,
                DIALOG_ASKCONNECT = 0x4
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
            // Member count: 22
            #[repr(u32)]
            pub enum EDemoCommands {
                DEM_Error = u32::MAX,
                DEM_Stop = 0x0,
                DEM_FileHeader = 0x1,
                DEM_FileInfo = 0x2,
                DEM_SyncTick = 0x3,
                DEM_SendTables = 0x4,
                DEM_ClassInfo = 0x5,
                DEM_StringTables = 0x6,
                DEM_Packet = 0x7,
                DEM_SignonPacket = 0x8,
                DEM_ConsoleCmd = 0x9,
                DEM_CustomData = 0xA,
                DEM_CustomDataCallbacks = 0xB,
                DEM_UserCmd = 0xC,
                DEM_FullPacket = 0xD,
                DEM_SaveGame = 0xE,
                DEM_SpawnGroups = 0xF,
                DEM_AnimationData = 0x10,
                DEM_AnimationHeader = 0x11,
                DEM_Recovery = 0x12,
                DEM_Max = 0x13,
                DEM_IsCompressed = 0x40
            }
            // Alignment: 4
            // Member count: 9
            #[repr(u32)]
            pub enum EInitSystemResult {
                k_EInitSystemResult_Invalid = 0x0,
                k_EInitSystemResult_Success = 0x1,
                k_EInitSystemResult_None = 0x2,
                k_EInitSystemResult_NotFound = 0x3,
                k_EInitSystemResult_Existing = 0x4,
                k_EInitSystemResult_FailedOpen = 0x5,
                k_EInitSystemResult_Mismatch = 0x6,
                k_EInitSystemResult_FailedInit = 0x7,
                k_EInitSystemResult_Max = 0x8
            }
            // Alignment: 4
            // Member count: 5
            #[repr(u32)]
            pub enum soundcommands_t {
                SOUNDCTRL_CHANGE_VOLUME = 0x0,
                SOUNDCTRL_CHANGE_PITCH = 0x1,
                SOUNDCTRL_STOP = 0x2,
                SOUNDCTRL_DESTROY = 0x3,
                SOUNDCTRL_FADEOUT = 0x4
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
            // Member count: 5
            #[repr(u32)]
            pub enum CInfoChoreoLocatorShapeType_t {
                POINT = 0x0,
                LINE = 0x1,
                RADIUS = 0x2,
                COUNT = 0x3,
                NONE = 0x4
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
            // Member count: 28
            #[repr(u32)]
            pub enum EGCItemCustomizationNotification {
                k_EGCItemCustomizationNotification_NameItem = 0x3EE,
                k_EGCItemCustomizationNotification_UnlockCrate = 0x3EF,
                k_EGCItemCustomizationNotification_XRayItemReveal = 0x3F0,
                k_EGCItemCustomizationNotification_XRayItemClaim = 0x3F1,
                k_EGCItemCustomizationNotification_CasketTooFull = 0x3F3,
                k_EGCItemCustomizationNotification_CasketContents = 0x3F4,
                k_EGCItemCustomizationNotification_CasketAdded = 0x3F5,
                k_EGCItemCustomizationNotification_CasketRemoved = 0x3F6,
                k_EGCItemCustomizationNotification_CasketInvFull = 0x3F7,
                k_EGCItemCustomizationNotification_NameBaseItem = 0x3FB,
                k_EGCItemCustomizationNotification_RemoveItemName = 0x406,
                k_EGCItemCustomizationNotification_RemoveSticker = 0x41D,
                k_EGCItemCustomizationNotification_ExtractSticker = 0x41E,
                k_EGCItemCustomizationNotification_EncapsulateSticker = 0x41F,
                k_EGCItemCustomizationNotification_ApplySticker = 0x43E,
                k_EGCItemCustomizationNotification_StatTrakSwap = 0x440,
                k_EGCItemCustomizationNotification_RemovePatch = 0x441,
                k_EGCItemCustomizationNotification_ApplyPatch = 0x442,
                k_EGCItemCustomizationNotification_ApplyKeychain = 0x443,
                k_EGCItemCustomizationNotification_RemoveKeychain = 0x444,
                k_EGCItemCustomizationNotification_ActivateFanToken = 0x23DA,
                k_EGCItemCustomizationNotification_ActivateOperationCoin = 0x23DB,
                k_EGCItemCustomizationNotification_GraffitiUnseal = 0x23E1,
                k_EGCItemCustomizationNotification_GenerateSouvenir = 0x23F4,
                k_EGCItemCustomizationNotification_ClientRedeemMissionReward = 0x23F9,
                k_EGCItemCustomizationNotification_ClientRedeemFreeReward = 0x2403,
                k_EGCItemCustomizationNotification_XpShopUseTicket = 0x2405,
                k_EGCItemCustomizationNotification_XpShopAckTracks = 0x2406
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
            // Member count: 10
            #[repr(u32)]
            pub enum EHitGroup {
                EHG_Generic = 0x0,
                EHG_Head = 0x1,
                EHG_Chest = 0x2,
                EHG_Stomach = 0x3,
                EHG_LeftArm = 0x4,
                EHG_RightArm = 0x5,
                EHG_LeftLeg = 0x6,
                EHG_RightLeg = 0x7,
                EHG_Gear = 0x8,
                EHG_Miss = 0x9
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
            // Member count: 31
            #[repr(u32)]
            pub enum SVC_Messages {
                svc_ServerInfo = 0x28,
                svc_FlattenedSerializer = 0x29,
                svc_ClassInfo = 0x2A,
                svc_SetPause = 0x2B,
                svc_CreateStringTable = 0x2C,
                svc_UpdateStringTable = 0x2D,
                svc_VoiceInit = 0x2E,
                svc_VoiceData = 0x2F,
                svc_Print = 0x30,
                svc_Sounds = 0x31,
                svc_SetView = 0x32,
                svc_ClearAllStringTables = 0x33,
                svc_CmdKeyValues = 0x34,
                svc_BSPDecal = 0x35,
                svc_SplitScreen = 0x36,
                svc_PacketEntities = 0x37,
                svc_Prefetch = 0x38,
                svc_Menu = 0x39,
                svc_GetCvarValue = 0x3A,
                svc_StopSound = 0x3B,
                svc_PeerList = 0x3C,
                svc_PacketReliable = 0x3D,
                svc_HLTVStatus = 0x3E,
                svc_ServerSteamID = 0x3F,
                svc_FullFrameSplit = 0x46,
                svc_RconServerDetails = 0x47,
                svc_UserMessage = 0x48,
                svc_Broadcast_Command = 0x4A,
                svc_HltvFixupOperatorStatus = 0x4B,
                svc_UserCmds = 0x4C,
                svc_NextMsgPredicted = 0x4D
            }
            // Alignment: 4
            // Member count: 2
            #[repr(u32)]
            pub enum QuestType {
                k_EQuestType_Operation = 0x1,
                k_EQuestType_RecurringMission = 0x2
            }
            // Alignment: 4
            // Member count: 109
            #[repr(u32)]
            pub enum ECsgoGCMsg {
                k_EMsgGCCStrike15_v2_Base = 0x238C,
                k_EMsgGCCStrike15_v2_MatchmakingStart = 0x238D,
                k_EMsgGCCStrike15_v2_MatchmakingStop = 0x238E,
                k_EMsgGCCStrike15_v2_MatchmakingClient2ServerPing = 0x238F,
                k_EMsgGCCStrike15_v2_MatchmakingGC2ClientUpdate = 0x2390,
                k_EMsgGCCStrike15_v2_MatchmakingServerReservationResponse = 0x2392,
                k_EMsgGCCStrike15_v2_MatchmakingGC2ClientReserve = 0x2393,
                k_EMsgGCCStrike15_v2_MatchmakingClient2GCHello = 0x2395,
                k_EMsgGCCStrike15_v2_MatchmakingGC2ClientHello = 0x2396,
                k_EMsgGCCStrike15_v2_MatchmakingGC2ClientAbandon = 0x2398,
                k_EMsgGCCStrike15_v2_MatchmakingOperator2GCBlogUpdate = 0x239D,
                k_EMsgGCCStrike15_v2_ServerNotificationForUserPenalty = 0x239E,
                k_EMsgGCCStrike15_v2_ClientReportPlayer = 0x239F,
                k_EMsgGCCStrike15_v2_ClientReportServer = 0x23A0,
                k_EMsgGCCStrike15_v2_ClientCommendPlayer = 0x23A1,
                k_EMsgGCCStrike15_v2_ClientReportResponse = 0x23A2,
                k_EMsgGCCStrike15_v2_ClientCommendPlayerQuery = 0x23A3,
                k_EMsgGCCStrike15_v2_ClientCommendPlayerQueryResponse = 0x23A4,
                k_EMsgGCCStrike15_v2_WatchInfoUsers = 0x23A6,
                k_EMsgGCCStrike15_v2_ClientRequestPlayersProfile = 0x23A7,
                k_EMsgGCCStrike15_v2_PlayersProfile = 0x23A8,
                k_EMsgGCCStrike15_v2_PlayerOverwatchCaseUpdate = 0x23AB,
                k_EMsgGCCStrike15_v2_PlayerOverwatchCaseAssignment = 0x23AC,
                k_EMsgGCCStrike15_v2_PlayerOverwatchCaseStatus = 0x23AD,
                k_EMsgGCCStrike15_v2_GC2ClientTextMsg = 0x23AE,
                k_EMsgGCCStrike15_v2_Client2GCTextMsg = 0x23AF,
                k_EMsgGCCStrike15_v2_MatchEndRunRewardDrops = 0x23B0,
                k_EMsgGCCStrike15_v2_MatchEndRewardDropsNotification = 0x23B1,
                k_EMsgGCCStrike15_v2_ClientRequestWatchInfoFriends2 = 0x23B2,
                k_EMsgGCCStrike15_v2_MatchList = 0x23B3,
                k_EMsgGCCStrike15_v2_MatchListRequestCurrentLiveGames = 0x23B4,
                k_EMsgGCCStrike15_v2_MatchListRequestRecentUserGames = 0x23B5,
                k_EMsgGCCStrike15_v2_GC2ServerReservationUpdate = 0x23B6,
                k_EMsgGCCStrike15_v2_ClientVarValueNotificationInfo = 0x23B8,
                k_EMsgGCCStrike15_v2_MatchListRequestTournamentGames = 0x23BA,
                k_EMsgGCCStrike15_v2_MatchListRequestFullGameInfo = 0x23BB,
                k_EMsgGCCStrike15_v2_GiftsLeaderboardRequest = 0x23BC,
                k_EMsgGCCStrike15_v2_GiftsLeaderboardResponse = 0x23BD,
                k_EMsgGCCStrike15_v2_ServerVarValueNotificationInfo = 0x23BE,
                k_EMsgGCCStrike15_v2_ClientSubmitSurveyVote = 0x23C0,
                k_EMsgGCCStrike15_v2_Server2GCClientValidate = 0x23C1,
                k_EMsgGCCStrike15_v2_MatchListRequestLiveGameForUser = 0x23C2,
                k_EMsgGCCStrike15_v2_Client2GCEconPreviewDataBlockRequest = 0x23C4,
                k_EMsgGCCStrike15_v2_Client2GCEconPreviewDataBlockResponse = 0x23C5,
                k_EMsgGCCStrike15_v2_AccountPrivacySettings = 0x23C6,
                k_EMsgGCCStrike15_v2_SetMyActivityInfo = 0x23C7,
                k_EMsgGCCStrike15_v2_MatchListRequestTournamentPredictions = 0x23C8,
                k_EMsgGCCStrike15_v2_MatchListUploadTournamentPredictions = 0x23C9,
                k_EMsgGCCStrike15_v2_DraftSummary = 0x23CA,
                k_EMsgGCCStrike15_v2_ClientRequestJoinFriendData = 0x23CB,
                k_EMsgGCCStrike15_v2_ClientRequestJoinServerData = 0x23CC,
                k_EMsgGCCStrike15_v2_GC2ClientTournamentInfo = 0x23CF,
                k_EMsgGC_GlobalGame_Subscribe = 0x23D0,
                k_EMsgGC_GlobalGame_Unsubscribe = 0x23D1,
                k_EMsgGC_GlobalGame_Play = 0x23D2,
                k_EMsgGCCStrike15_v2_AcknowledgePenalty = 0x23D3,
                k_EMsgGCCStrike15_v2_Client2GCRequestPrestigeCoin = 0x23D4,
                k_EMsgGCCStrike15_v2_GC2ClientGlobalStats = 0x23D5,
                k_EMsgGCCStrike15_v2_Client2GCStreamUnlock = 0x23D6,
                k_EMsgGCCStrike15_v2_FantasyRequestClientData = 0x23D7,
                k_EMsgGCCStrike15_v2_FantasyUpdateClientData = 0x23D8,
                k_EMsgGCCStrike15_v2_GCToClientSteamdatagramTicket = 0x23D9,
                k_EMsgGCCStrike15_v2_ClientToGCRequestTicket = 0x23DA,
                k_EMsgGCCStrike15_v2_ClientToGCRequestElevate = 0x23DB,
                k_EMsgGCCStrike15_v2_GlobalChat = 0x23DC,
                k_EMsgGCCStrike15_v2_GlobalChat_Subscribe = 0x23DD,
                k_EMsgGCCStrike15_v2_GlobalChat_Unsubscribe = 0x23DE,
                k_EMsgGCCStrike15_v2_ClientAuthKeyCode = 0x23DF,
                k_EMsgGCCStrike15_v2_GotvSyncPacket = 0x23E0,
                k_EMsgGCCStrike15_v2_ClientPlayerDecalSign = 0x23E1,
                k_EMsgGCCStrike15_v2_ClientLogonFatalError = 0x23E3,
                k_EMsgGCCStrike15_v2_ClientPollState = 0x23E4,
                k_EMsgGCCStrike15_v2_Party_Register = 0x23E5,
                k_EMsgGCCStrike15_v2_Party_Unregister = 0x23E6,
                k_EMsgGCCStrike15_v2_Party_Search = 0x23E7,
                k_EMsgGCCStrike15_v2_Party_Invite = 0x23E8,
                k_EMsgGCCStrike15_v2_Account_RequestCoPlays = 0x23E9,
                k_EMsgGCCStrike15_v2_ClientGCRankUpdate = 0x23EA,
                k_EMsgGCCStrike15_v2_ClientRequestOffers = 0x23EB,
                k_EMsgGCCStrike15_v2_ClientAccountBalance = 0x23EC,
                k_EMsgGCCStrike15_v2_ClientPartyJoinRelay = 0x23ED,
                k_EMsgGCCStrike15_v2_ClientPartyWarning = 0x23EE,
                k_EMsgGCCStrike15_v2_SetEventFavorite = 0x23F0,
                k_EMsgGCCStrike15_v2_GetEventFavorites_Request = 0x23F1,
                k_EMsgGCCStrike15_v2_ClientPerfReport = 0x23F2,
                k_EMsgGCCStrike15_v2_GetEventFavorites_Response = 0x23F3,
                k_EMsgGCCStrike15_v2_ClientRequestSouvenir = 0x23F4,
                k_EMsgGCCStrike15_v2_GC2ClientRefuseSecureMode = 0x23F6,
                k_EMsgGCCStrike15_v2_GC2ClientRequestValidation = 0x23F7,
                k_EMsgGCCStrike15_v2_ClientRedeemMissionReward = 0x23F9,
                k_EMsgGCCStrike15_ClientDeepStats = 0x23FA,
                k_EMsgGCCStrike15_StartAgreementSessionInGame = 0x23FB,
                k_EMsgGCCStrike15_v2_GC2ClientInitSystem = 0x23FC,
                k_EMsgGCCStrike15_v2_GC2ClientInitSystem_Response = 0x23FD,
                k_EMsgGCCStrike15_v2_PrivateQueues = 0x23FE,
                k_EMsgGCCStrike15_v2_MatchListTournamentOperatorMgmt = 0x23FF,
                k_EMsgGCCStrike15_v2_BetaEnrollment = 0x2401,
                k_EMsgGCCStrike15_v2_SetPlayerLeaderboardSafeName = 0x2402,
                k_EMsgGCCStrike15_v2_ClientRedeemFreeReward = 0x2403,
                k_EMsgGCCStrike15_v2_ClientNetworkConfig = 0x2404,
                k_EMsgGCCStrike15_v2_GC2ClientNotifyXPShop = 0x2405,
                k_EMsgGCCStrike15_v2_Client2GcAckXPShopTracks = 0x2406,
                k_EMsgGCCStrike15_v2_MatchmakingGC2ClientSearchStats = 0x2407,
                k_EMsgGCCStrike15_v2_PremierSeasonSummary = 0x2408,
                k_EMsgGCCStrike15_v2_RequestRecurringMissionSchedule = 0x2409,
                k_EMsgGCCStrike15_v2_RecurringMissionSchema = 0x240A,
                k_EMsgGCCStrike15_v2_VolatileItemClaimReward = 0x240B,
                k_EMsgGCCStrike15_v2_VolatileShopSubscribe = 0x240C,
                k_EMsgGCCStrike15_v2_SetClanId = 0x240D
            }
            // Alignment: 1
            // Member count: 3
            #[repr(u8)]
            pub enum GLOBALESTATE {
                GLOBAL_OFF = 0x0,
                GLOBAL_ON = 0x1,
                GLOBAL_DEAD = 0x2
            }
            // Alignment: 1
            // Member count: 6
            #[repr(u8)]
            pub enum AnimationAlgorithm_t {
                eInvalid = u8::MAX,
                eNone = 0x0,
                eSequence = 0x1,
                eAnimGraph2 = 0x2,
                eAnimGraph2Secondary = 0x3,
                eCount = 0x4
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
            // Member count: 51
            #[repr(u32)]
            pub enum EBaseUserMessages {
                UM_AchievementEvent = 0x65,
                UM_CurrentTimescale = 0x68,
                UM_DesiredTimescale = 0x69,
                UM_Fade = 0x6A,
                UM_GameTitle = 0x6B,
                UM_HudMsg = 0x6E,
                UM_HudText = 0x6F,
                UM_ColoredText = 0x71,
                UM_RequestState = 0x72,
                UM_ResetHUD = 0x73,
                UM_Rumble = 0x74,
                UM_SayText = 0x75,
                UM_SayText2 = 0x76,
                UM_SayTextChannel = 0x77,
                UM_Shake = 0x78,
                UM_ShakeDir = 0x79,
                UM_WaterShake = 0x7A,
                UM_TextMsg = 0x7C,
                UM_ScreenTilt = 0x7D,
                UM_VoiceMask = 0x80,
                UM_SendAudio = 0x82,
                UM_ItemPickup = 0x83,
                UM_AmmoDenied = 0x84,
                UM_ShowMenu = 0x86,
                UM_CreditsMsg = 0x87,
                UM_CloseCaptionPlaceholder = 0x8E,
                UM_CameraTransition = 0x8F,
                UM_AudioParameter = 0x90,
                UM_ParticleManager = 0x91,
                UM_HudError = 0x92,
                UM_CustomGameEvent = 0x94,
                UM_AnimGraphUpdate = 0x95,
                UM_HapticsManagerPulse = 0x96,
                UM_HapticsManagerEffect = 0x97,
                UM_UpdateCssClasses = 0x99,
                UM_ServerFrameTime = 0x9A,
                UM_LagCompensationError = 0x9B,
                UM_RequestDllStatus = 0x9C,
                UM_RequestUtilAction = 0x9D,
                UM_UtilActionResponse = 0x9E,
                UM_DllStatusResponse = 0x9F,
                UM_RequestInventory = 0xA0,
                UM_InventoryResponse = 0xA1,
                UM_RequestDiagnostic = 0xA2,
                UM_DiagnosticResponse = 0xA3,
                UM_ExtraUserData = 0xA4,
                UM_NotifyResponseFound = 0xA5,
                UM_PlayResponseConditional = 0xA6,
                UM_UserSentBugBug = 0xA7,
                UM_UsageReport = 0xA8,
                UM_MAX_BASE = 0xC8
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
            // Member count: 50
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
                AE_DISABLE_PLATFORM = 0x1A,
                AE_ENABLE_PLATFORM_PLAYER_FOLLOWS_YAW = 0x1B,
                AE_ENABLE_PLATFORM_PLAYER_IGNORES_YAW = 0x1C,
                AE_DESTRUCTIBLE_PART_DESTROY = 0x1D,
                AE_VEHICLE_ENTER_FINISHED = 0x1E,
                AE_VEHICLE_EXIT_FINISHED = 0x1F,
                AE_SCRIPT_FIRE_EVENT_01 = 0x20,
                AE_SCRIPT_FIRE_EVENT_02 = 0x21,
                AE_SCRIPT_FIRE_EVENT_03 = 0x22,
                AE_SCRIPT_FIRE_EVENT_04 = 0x23,
                AE_SCRIPT_FIRE_EVENT_05 = 0x24,
                AE_SCRIPT_FIRE_EVENT_06 = 0x25,
                AE_SCRIPT_FIRE_EVENT_07 = 0x26,
                AE_SCRIPT_FIRE_EVENT_08 = 0x27,
                AE_SCRIPT_FIRE_EVENT_09 = 0x28,
                AE_SCRIPT_FIRE_EVENT_10 = 0x29,
                AE_CL_WEAPON_TRANSITION_INTO_HAND = 0x2A,
                AE_SV_ATTACH_SILENCER_COMPLETE = 0x2B,
                AE_SV_DETACH_SILENCER_COMPLETE = 0x2C,
                AE_CL_EJECT_MAG = 0x2D,
                AE_WPN_COMPLETE_RELOAD = 0x2E,
                AE_WPN_HEALTHSHOT_INJECT = 0x2F,
                AE_GRENADE_THROW_COMPLETE = 0x30,
                AE_COUNT = 0x31
            }
            // Alignment: 4
            // Member count: 8
            #[repr(u32)]
            pub enum EGCToGCMsg {
                k_EGCToGCMsgMasterAck = 0x96,
                k_EGCToGCMsgMasterAckResponse = 0x97,
                k_EGCToGCMsgRouted = 0x98,
                k_EGCToGCMsgRoutedReply = 0x99,
                k_EMsgUpdateSessionIP = 0x9A,
                k_EMsgRequestSessionIP = 0x9B,
                k_EMsgRequestSessionIPResponse = 0x9C,
                k_EGCToGCMsgMasterStartupComplete = 0x9D
            }
            // Alignment: 4
            // Member count: 4
            #[repr(u32)]
            pub enum EQueryCvarValueStatus {
                eQueryCvarValueStatus_ValueIntact = 0x0,
                eQueryCvarValueStatus_CvarNotFound = 0x1,
                eQueryCvarValueStatus_NotACvar = 0x2,
                eQueryCvarValueStatus_CvarProtected = 0x3
            }
            // Alignment: 4
            // Member count: 2
            #[repr(u32)]
            pub enum GC_BannedWordType {
                GC_BANNED_WORD_DISABLE_WORD = 0x0,
                GC_BANNED_WORD_ENABLE_WORD = 0x1
            }
            // Alignment: 4
            // Member count: 18
            #[repr(u32)]
            pub enum ESource2PlayStatsFieldType {
                Source2PlayStats_Invalid = 0x0,
                Source2PlayStats_UInt64 = 0x1,
                Source2PlayStats_UInt32 = 0x2,
                Source2PlayStats_UInt16 = 0x3,
                Source2PlayStats_UInt8 = 0x4,
                Source2PlayStats_Int64 = 0x5,
                Source2PlayStats_Int32 = 0x6,
                Source2PlayStats_Int16 = 0x7,
                Source2PlayStats_Int8 = 0x8,
                Source2PlayStats_Float64 = 0x9,
                Source2PlayStats_Float32 = 0xA,
                Source2PlayStats_Bool = 0xB,
                Source2PlayStats_String = 0xC,
                Source2PlayStats_LowCardinalityString = 0xD,
                Source2PlayStats_UTCDateTime = 0xE,
                Source2PlayStats_SteamIDTrustBucket = 0xF,
                Source2PlayStats_SteamIDTrustBucketMin = 0x10,
                Source2PlayStats_SteamID = 0x11
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
            // Alignment: 1
            // Member count: 4
            #[repr(u8)]
            pub enum CCSPlayerAnimationState__MoveType_t {
                None = 0x0,
                Ground = 0x1,
                Air = 0x2,
                Ladder = 0x3
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
            // Member count: 8
            #[repr(u32)]
            pub enum SignonState_t {
                SIGNONSTATE_NONE = 0x0,
                SIGNONSTATE_CHALLENGE = 0x1,
                SIGNONSTATE_CONNECTED = 0x2,
                SIGNONSTATE_NEW = 0x3,
                SIGNONSTATE_PRESPAWN = 0x4,
                SIGNONSTATE_SPAWN = 0x5,
                SIGNONSTATE_FULL = 0x6,
                SIGNONSTATE_CHANGELEVEL = 0x7
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
            // Member count: 9
            #[repr(u32)]
            pub enum FuncMoverMovementSummaryFlags_t {
                eNone = 0x0,
                eMovementBegin = 0x1,
                eStopBegin = 0x2,
                eStopComplete = 0x4,
                eReversing = 0x8,
                eEventsDispatched = 0x10,
                eLoopToStart = 0x20,
                eLoopToEnd = 0x40,
                eTransitionComplete = 0x80
            }
            // Alignment: 4
            // Member count: 11
            #[repr(u32)]
            pub enum EGCBaseClientMsg {
                k_EMsgGCClientWelcome = 0xFA4,
                k_EMsgGCServerWelcome = 0xFA5,
                k_EMsgGCClientHello = 0xFA6,
                k_EMsgGCServerHello = 0xFA7,
                k_EMsgGCClientConnectionStatus = 0xFA9,
                k_EMsgGCServerConnectionStatus = 0xFAA,
                k_EMsgGCClientHelloPartner = 0xFAB,
                k_EMsgGCClientHelloPW = 0xFAC,
                k_EMsgGCClientHelloR2 = 0xFAD,
                k_EMsgGCClientHelloR3 = 0xFAE,
                k_EMsgGCClientHelloR4 = 0xFAF
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
            // Alignment: 4
            // Member count: 2
            #[repr(u32)]
            pub enum ESplitScreenMessageType {
                MSG_SPLITSCREEN_ADDUSER = 0x0,
                MSG_SPLITSCREEN_REMOVEUSER = 0x1
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
            // Member count: 4
            #[repr(u8)]
            pub enum RenderMode_t {
                kRenderNormal = 0x0,
                kRenderTransAlpha = 0x1,
                kRenderNone = 0x2,
                kRenderModeCount = 0x3
            }
            // Alignment: 4
            // Member count: 92
            #[repr(u32)]
            pub enum EGCSystemMsg {
                k_EGCMsgInvalid = 0x0,
                k_EGCMsgMulti = 0x1,
                k_EGCMsgGenericReply = 0xA,
                k_EGCMsgSystemBase = 0x32,
                k_EGCMsgAchievementAwarded = 0x33,
                k_EGCMsgConCommand = 0x34,
                k_EGCMsgStartPlaying = 0x35,
                k_EGCMsgStopPlaying = 0x36,
                k_EGCMsgStartGameserver = 0x37,
                k_EGCMsgStopGameserver = 0x38,
                k_EGCMsgWGRequest = 0x39,
                k_EGCMsgWGResponse = 0x3A,
                k_EGCMsgGetUserGameStatsSchema = 0x3B,
                k_EGCMsgGetUserGameStatsSchemaResponse = 0x3C,
                k_EGCMsgGetUserStatsDEPRECATED = 0x3D,
                k_EGCMsgGetUserStatsResponse = 0x3E,
                k_EGCMsgAppInfoUpdated = 0x3F,
                k_EGCMsgValidateSession = 0x40,
                k_EGCMsgValidateSessionResponse = 0x41,
                k_EGCMsgLookupAccountFromInput = 0x42,
                k_EGCMsgSendHTTPRequest = 0x43,
                k_EGCMsgSendHTTPRequestResponse = 0x44,
                k_EGCMsgPreTestSetup = 0x45,
                k_EGCMsgRecordSupportAction = 0x46,
                k_EGCMsgGetAccountDetails_DEPRECATED = 0x47,
                k_EGCMsgReceiveInterAppMessage = 0x49,
                k_EGCMsgFindAccounts = 0x4A,
                k_EGCMsgPostAlert = 0x4B,
                k_EGCMsgGetLicenses = 0x4C,
                k_EGCMsgGetUserStats = 0x4D,
                k_EGCMsgGetCommands = 0x4E,
                k_EGCMsgGetCommandsResponse = 0x4F,
                k_EGCMsgAddFreeLicense = 0x50,
                k_EGCMsgAddFreeLicenseResponse = 0x51,
                k_EGCMsgGetIPLocation = 0x52,
                k_EGCMsgGetIPLocationResponse = 0x53,
                k_EGCMsgSystemStatsSchema = 0x54,
                k_EGCMsgGetSystemStats = 0x55,
                k_EGCMsgGetSystemStatsResponse = 0x56,
                k_EGCMsgSendEmail = 0x57,
                k_EGCMsgSendEmailResponse = 0x58,
                k_EGCMsgGetEmailTemplate = 0x59,
                k_EGCMsgGetEmailTemplateResponse = 0x5A,
                k_EGCMsgGrantGuestPass = 0x5B,
                k_EGCMsgGrantGuestPassResponse = 0x5C,
                k_EGCMsgGetAccountDetails = 0x5D,
                k_EGCMsgGetAccountDetailsResponse = 0x5E,
                k_EGCMsgGetPersonaNames = 0x5F,
                k_EGCMsgGetPersonaNamesResponse = 0x60,
                k_EGCMsgMultiplexMsg = 0x61,
                k_EGCMsgMultiplexMsgResponse = 0x62,
                k_EGCMsgWebAPIRegisterInterfaces = 0x65,
                k_EGCMsgWebAPIJobRequest = 0x66,
                k_EGCMsgWebAPIJobRequestHttpResponse = 0x68,
                k_EGCMsgWebAPIJobRequestForwardResponse = 0x69,
                k_EGCMsgMemCachedGet = 0xC8,
                k_EGCMsgMemCachedGetResponse = 0xC9,
                k_EGCMsgMemCachedSet = 0xCA,
                k_EGCMsgMemCachedDelete = 0xCB,
                k_EGCMsgMemCachedStats = 0xCC,
                k_EGCMsgMemCachedStatsResponse = 0xCD,
                k_EGCMsgMasterSetDirectory = 0xDC,
                k_EGCMsgMasterSetDirectoryResponse = 0xDD,
                k_EGCMsgMasterSetWebAPIRouting = 0xDE,
                k_EGCMsgMasterSetWebAPIRoutingResponse = 0xDF,
                k_EGCMsgMasterSetClientMsgRouting = 0xE0,
                k_EGCMsgMasterSetClientMsgRoutingResponse = 0xE1,
                k_EGCMsgSetOptions = 0xE2,
                k_EGCMsgSetOptionsResponse = 0xE3,
                k_EGCMsgSystemBase2 = 0x1F4,
                k_EGCMsgGetPurchaseTrustStatus = 0x1F5,
                k_EGCMsgGetPurchaseTrustStatusResponse = 0x1F6,
                k_EGCMsgUpdateSession = 0x1F7,
                k_EGCMsgGCAccountVacStatusChange = 0x1F8,
                k_EGCMsgCheckFriendship = 0x1F9,
                k_EGCMsgCheckFriendshipResponse = 0x1FA,
                k_EGCMsgGetPartnerAccountLink = 0x1FB,
                k_EGCMsgGetPartnerAccountLinkResponse = 0x1FC,
                k_EGCMsgDPPartnerMicroTxns = 0x200,
                k_EGCMsgDPPartnerMicroTxnsResponse = 0x201,
                k_EGCMsgVacVerificationChange = 0x206,
                k_EGCMsgAccountPhoneNumberChange = 0x207,
                k_EGCMsgInviteUserToLobby = 0x20B,
                k_EGCMsgGetGamePersonalDataCategoriesRequest = 0x20C,
                k_EGCMsgGetGamePersonalDataCategoriesResponse = 0x20D,
                k_EGCMsgGetGamePersonalDataEntriesRequest = 0x20E,
                k_EGCMsgGetGamePersonalDataEntriesResponse = 0x20F,
                k_EGCMsgTerminateGamePersonalDataEntriesRequest = 0x210,
                k_EGCMsgTerminateGamePersonalDataEntriesResponse = 0x211,
                k_EGCMsgRecurringSubscriptionStatusChange = 0x212,
                k_EGCMsgDirectServiceMethod = 0x213,
                k_EGCMsgDirectServiceMethodResponse = 0x214
            }
            // Alignment: 4
            // Member count: 11
            #[repr(u32)]
            pub enum ECommunityItemClass {
                k_ECommunityItemClass_Invalid = 0x0,
                k_ECommunityItemClass_Badge = 0x1,
                k_ECommunityItemClass_GameCard = 0x2,
                k_ECommunityItemClass_ProfileBackground = 0x3,
                k_ECommunityItemClass_Emoticon = 0x4,
                k_ECommunityItemClass_BoosterPack = 0x5,
                k_ECommunityItemClass_Consumable = 0x6,
                k_ECommunityItemClass_GameGoo = 0x7,
                k_ECommunityItemClass_ProfileModifier = 0x8,
                k_ECommunityItemClass_Scene = 0x9,
                k_ECommunityItemClass_SalienItem = 0xA
            }
            // Alignment: 4
            // Member count: 4
            #[repr(u32)]
            pub enum ETeam {
                ET_Unknown = 0x0,
                ET_Spectator = 0x1,
                ET_Terrorist = 0x2,
                ET_CT = 0x3
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
            // Member count: 3
            #[repr(u32)]
            pub enum EBasePredictionEvents {
                BPE_StringCommand = 0x80,
                BPE_Teleport = 0x82,
                BPE_Diagnostic = 0x4000
            }
            // Alignment: 4
            // Member count: 3
            #[repr(u32)]
            pub enum EClientReportingVersion {
                k_EClientReportingVersion_OldVersion = 0x0,
                k_EClientReportingVersion_BetaVersion = 0x1,
                k_EClientReportingVersion_SupportsTrustedMode = 0x2
            }
            // Alignment: 4
            // Member count: 2
            #[repr(u32)]
            pub enum EGCBaseProtoObjectTypes {
                k_EProtoObjectPartyInvite = 0x3E9,
                k_EProtoObjectLobbyInvite = 0x3EA
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
            // Alignment: 4
            // Member count: 3
            #[repr(u32)]
            pub enum VoiceDataFormat_t {
                VOICEDATA_FORMAT_STEAM = 0x0,
                VOICEDATA_FORMAT_ENGINE = 0x1,
                VOICEDATA_FORMAT_OPUS = 0x2
            }
            // Alignment: 8
            // Member count: 20
            #[repr(u64)]
            pub enum NavAttributeEnum {
                NAV_MESH_NONE = 0x0,
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
            pub enum EUnlockStyle {
                k_UnlockStyle_Succeeded = 0x0,
                k_UnlockStyle_Failed_PreReq = 0x1,
                k_UnlockStyle_Failed_CantAfford = 0x2,
                k_UnlockStyle_Failed_CantCommit = 0x3,
                k_UnlockStyle_Failed_CantLockCache = 0x4,
                k_UnlockStyle_Failed_CantAffordAttrib = 0x5
            }
            // Alignment: 1
            // Member count: 3
            #[repr(u8)]
            pub enum ExternalAnimGraphInactiveBehavior_t {
                eNone = 0x0,
                eUnbind = 0x1,
                eUnbindAndDelete = 0x2
            }
            // Alignment: 4
            // Member count: 13
            #[repr(u32)]
            pub enum NET_Messages {
                net_NOP = 0x0,
                net_Disconnect_Legacy = 0x1,
                net_SplitScreenUser = 0x3,
                net_Tick = 0x4,
                net_StringCmd = 0x5,
                net_SetConVar = 0x6,
                net_SignonState = 0x7,
                net_SpawnGroup_Load = 0x8,
                net_SpawnGroup_ManifestUpdate = 0x9,
                net_SpawnGroup_SetCreationTick = 0xB,
                net_SpawnGroup_Unload = 0xC,
                net_SpawnGroup_LoadCompleted = 0xD,
                net_DebugOverlay = 0xF
            }
            // Alignment: 4
            // Member count: 12
            #[repr(u32)]
            pub enum EWeaponType {
                EWT_Knife = 0x0,
                EWT_Pistol = 0x1,
                EWT_SubMachineGun = 0x2,
                EWT_Rifle = 0x3,
                EWT_Shotgun = 0x4,
                EWT_SniperRifle = 0x5,
                EWT_MachineGun = 0x6,
                EWT_C4 = 0x7,
                EWT_Grenade = 0x8,
                EWT_Equipment = 0x9,
                EWT_StackableItem = 0xA,
                EWT_Unknown = 0xB
            }
            // Alignment: 4
            // Member count: 5
            #[repr(u32)]
            pub enum EBaseEntityMessages {
                EM_PlayJingle = 0x88,
                EM_ScreenOverlay = 0x89,
                EM_PropagateForce = 0x8B,
                EM_DoSpark = 0x8C,
                EM_FixAngle = 0x8D
            }
            // Alignment: 4
            // Member count: 2
            #[repr(u32)]
            pub enum ECSPredictionEvents {
                CSPE_DamageTag = 0x1,
                CSPE_PlayerTeleport = 0x3
            }
            // Alignment: 1
            // Member count: 7
            #[repr(u8)]
            pub enum CCSPlayerAnimationState__GroundMoveState_t {
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
            // Member count: 42
            #[repr(u32)]
            pub enum PARTICLE_MESSAGE {
                GAME_PARTICLE_MANAGER_EVENT_CREATE = 0x0,
                GAME_PARTICLE_MANAGER_EVENT_UPDATE = 0x1,
                GAME_PARTICLE_MANAGER_EVENT_UPDATE_FORWARD = 0x2,
                GAME_PARTICLE_MANAGER_EVENT_UPDATE_ORIENTATION = 0x3,
                GAME_PARTICLE_MANAGER_EVENT_UPDATE_FALLBACK = 0x4,
                GAME_PARTICLE_MANAGER_EVENT_UPDATE_ENT = 0x5,
                GAME_PARTICLE_MANAGER_EVENT_UPDATE_OFFSET = 0x6,
                GAME_PARTICLE_MANAGER_EVENT_DESTROY = 0x7,
                GAME_PARTICLE_MANAGER_EVENT_DESTROY_INVOLVING = 0x8,
                GAME_PARTICLE_MANAGER_EVENT_RELEASE = 0x9,
                GAME_PARTICLE_MANAGER_EVENT_LATENCY = 0xA,
                GAME_PARTICLE_MANAGER_EVENT_SHOULD_DRAW = 0xB,
                GAME_PARTICLE_MANAGER_EVENT_FROZEN = 0xC,
                GAME_PARTICLE_MANAGER_EVENT_CHANGE_CONTROL_POINT_ATTACHMENT = 0xD,
                GAME_PARTICLE_MANAGER_EVENT_UPDATE_ENTITY_POSITION = 0xE,
                GAME_PARTICLE_MANAGER_EVENT_SET_FOW_PROPERTIES = 0xF,
                GAME_PARTICLE_MANAGER_EVENT_SET_TEXT = 0x10,
                GAME_PARTICLE_MANAGER_EVENT_SET_SHOULD_CHECK_FOW = 0x11,
                GAME_PARTICLE_MANAGER_EVENT_SET_CONTROL_POINT_MODEL = 0x12,
                GAME_PARTICLE_MANAGER_EVENT_SET_CONTROL_POINT_SNAPSHOT = 0x13,
                GAME_PARTICLE_MANAGER_EVENT_SET_TEXTURE_ATTRIBUTE = 0x14,
                GAME_PARTICLE_MANAGER_EVENT_SET_SCENE_OBJECT_GENERIC_FLAG = 0x15,
                GAME_PARTICLE_MANAGER_EVENT_SET_SCENE_OBJECT_TINT_AND_DESAT = 0x16,
                GAME_PARTICLE_MANAGER_EVENT_DESTROY_NAMED = 0x17,
                GAME_PARTICLE_MANAGER_EVENT_SKIP_TO_TIME = 0x18,
                GAME_PARTICLE_MANAGER_EVENT_CAN_FREEZE = 0x19,
                GAME_PARTICLE_MANAGER_EVENT_SET_NAMED_VALUE_CONTEXT = 0x1A,
                GAME_PARTICLE_MANAGER_EVENT_UPDATE_TRANSFORM = 0x1B,
                GAME_PARTICLE_MANAGER_EVENT_FREEZE_TRANSITION_OVERRIDE = 0x1C,
                GAME_PARTICLE_MANAGER_EVENT_FREEZE_INVOLVING = 0x1D,
                GAME_PARTICLE_MANAGER_EVENT_ADD_MODELLIST_OVERRIDE_ELEMENT = 0x1E,
                GAME_PARTICLE_MANAGER_EVENT_CLEAR_MODELLIST_OVERRIDE = 0x1F,
                GAME_PARTICLE_MANAGER_EVENT_CREATE_PHYSICS_SIM = 0x20,
                GAME_PARTICLE_MANAGER_EVENT_DESTROY_PHYSICS_SIM = 0x21,
                GAME_PARTICLE_MANAGER_EVENT_SET_VDATA = 0x22,
                GAME_PARTICLE_MANAGER_EVENT_SET_MATERIAL_OVERRIDE = 0x23,
                GAME_PARTICLE_MANAGER_EVENT_ADD_FAN = 0x24,
                GAME_PARTICLE_MANAGER_EVENT_UPDATE_FAN = 0x25,
                GAME_PARTICLE_MANAGER_EVENT_SET_CLUSTER_GROWTH = 0x26,
                GAME_PARTICLE_MANAGER_EVENT_REMOVE_FAN = 0x27,
                GAME_PARTICLE_MANAGER_EVENT_CREATE_SMOKE_GRID = 0x28,
                GAME_PARTICLE_MANAGER_EVENT_SET_OVERRIDE_TEXTURE = 0x29
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
            // Member count: 10
            #[repr(u32)]
            pub enum ECommunityItemAttribute {
                k_ECommunityItemAttribute_Invalid = 0x0,
                k_ECommunityItemAttribute_CardBorder = 0x1,
                k_ECommunityItemAttribute_Level = 0x2,
                k_ECommunityItemAttribute_IssueNumber = 0x3,
                k_ECommunityItemAttribute_TradableTime = 0x4,
                k_ECommunityItemAttribute_StorePackageID = 0x5,
                k_ECommunityItemAttribute_CommunityItemAppID = 0x6,
                k_ECommunityItemAttribute_CommunityItemType = 0x7,
                k_ECommunityItemAttribute_ProfileModiferEnabled = 0x8,
                k_ECommunityItemAttribute_ExpiryTime = 0x9
            }
            // Alignment: 4
            // Member count: 1
            #[repr(u32)]
            pub enum SVC_Messages_LowFrequency {
                svc_dummy = 0x258
            }
            // Alignment: 4
            // Member count: 5
            #[repr(u32)]
            pub enum eRollType {
                ROLL_NONE = u32::MAX,
                ROLL_STATS = 0x0,
                ROLL_CREDITS = 0x1,
                ROLL_LATE_JOIN_LOGO = 0x2,
                ROLL_OUTTRO = 0x3
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
            // Member count: 66
            #[repr(u32)]
            pub enum CSWeaponNameID {
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
            #[repr(u32)]
            pub enum ChoreoLookAtSpeed_t {
                eInvalid = u32::MAX,
                eSlow = 0x0,
                eMedium = 0x1,
                eFast = 0x2
            }
            // Alignment: 4
            // Member count: 8
            #[repr(u32)]
            pub enum SpawnGroupFlags_t {
                SPAWN_GROUP_LOAD_ENTITIES_FROM_SAVE = 0x1,
                SPAWN_GROUP_DONT_SPAWN_ENTITIES = 0x2,
                SPAWN_GROUP_SYNCHRONOUS_SPAWN = 0x4,
                SPAWN_GROUP_IS_INITIAL_SPAWN_GROUP = 0x8,
                SPAWN_GROUP_CREATE_CLIENT_ONLY_ENTITIES = 0x10,
                SPAWN_GROUP_BLOCK_UNTIL_LOADED = 0x40,
                SPAWN_GROUP_LOAD_STREAMING_DATA = 0x80,
                SPAWN_GROUP_CREATE_NEW_SCENE_WORLD = 0x100
            }
            // Alignment: 4
            // Member count: 2
            #[repr(u32)]
            pub enum ECSUsrMsg_DisconnectToLobby_Action {
                k_ECSUsrMsg_DisconnectToLobby_Action_Default = 0x0,
                k_ECSUsrMsg_DisconnectToLobby_Action_GoQueue = 0x1
            }
            // Alignment: 4
            // Member count: 3
            #[repr(u32)]
            pub enum ECsgoSteamUserStat {
                k_ECsgoSteamUserStat_XpEarnedGames = 0x1,
                k_ECsgoSteamUserStat_MatchWinsCompetitive = 0x2,
                k_ECsgoSteamUserStat_SurvivedDangerZone = 0x3
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
            // Member count: 3
            #[repr(u32)]
            pub enum RequestPause_t {
                RP_PAUSE = 0x0,
                RP_UNPAUSE = 0x1,
                RP_TOGGLEPAUSE = 0x2
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
            // Member count: 14
            #[repr(u32)]
            pub enum CLC_Messages {
                clc_ClientInfo = 0x14,
                clc_Move = 0x15,
                clc_VoiceData = 0x16,
                clc_BaselineAck = 0x17,
                clc_RespondCvarValue = 0x19,
                clc_LoadingProgress = 0x1B,
                clc_SplitPlayerConnect = 0x1C,
                clc_SplitPlayerDisconnect = 0x1E,
                clc_ServerStatus = 0x1F,
                clc_RequestPause = 0x21,
                clc_CmdKeyValues = 0x22,
                clc_RconServerDetails = 0x23,
                clc_HltvReplay = 0x24,
                clc_Diagnostic = 0x25
            }
            // Alignment: 4
            // Member count: 3
            #[repr(u32)]
            pub enum EClientUIEvent {
                EClientUIEvent_Invalid = 0x0,
                EClientUIEvent_DialogFinished = 0x1,
                EClientUIEvent_FireOutput = 0x2
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
            // Member count: 8
            #[repr(u32)]
            pub enum ESOMsg {
                k_ESOMsg_Create = 0x15,
                k_ESOMsg_Update = 0x16,
                k_ESOMsg_Destroy = 0x17,
                k_ESOMsg_CacheSubscribed = 0x18,
                k_ESOMsg_CacheUnsubscribed = 0x19,
                k_ESOMsg_UpdateMultiple = 0x1A,
                k_ESOMsg_CacheSubscriptionCheck = 0x1B,
                k_ESOMsg_CacheSubscriptionRefresh = 0x1C
            }
            // Alignment: 4
            // Member count: 22
            #[repr(u32)]
            pub enum SaveRestoreTableFlags_t {
                FENTTABLE_NONE = 0x0,
                FENTTABLE_PLAYER = 0x80000000,
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
            // Member count: 8
            #[repr(u32)]
            pub enum FuncRotatorRotationSummaryFlags_t {
                eNone = 0x0,
                eRotateBegin = 0x1,
                eEventsDispatched = 0x2,
                eRotateCompleted = 0x4,
                eOscillateStart = 0x8,
                eOscillateEnd = 0x10,
                eOscillateArrived = 0x20,
                eOscillateDepart = 0x40
            }
            // Alignment: 4
            // Member count: 2
            #[repr(u32)]
            pub enum PointWorldTextReorientMode_t {
                POINT_WORLD_TEXT_REORIENT_NONE = 0x0,
                POINT_WORLD_TEXT_REORIENT_AROUND_UP = 0x1
            }
            // Alignment: 8
            // Member count: 43
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
                OVERLAY_MINIMAL_TEXT = 0x20000000000,
                OVERLAY_NPC_GOD_MODE = 0x40000000000,
                OVERLAY_NPC_ANIM_AI_HANDSHAKES_BIT = 0x80000000000,
                OVERLAY_NPC_PATH_QUERIES_BIT = 0x100000000000
            }
            // Alignment: 4
            // Member count: 3
            #[repr(u32)]
            pub enum AmmoFlags_t {
                AMMO_FORCE_DROP_IF_CARRIED = 0x1,
                AMMO_RESERVE_STAYS_WITH_WEAPON = 0x2
            }
            // Alignment: 4
            // Member count: 15
            #[repr(u32)]
            pub enum EBaseGameEvents {
                GE_VDebugGameSessionIDEvent = 0xC8,
                GE_PlaceDecalEvent = 0xC9,
                GE_ClearWorldDecalsEvent = 0xCA,
                GE_ClearEntityDecalsEvent = 0xCB,
                GE_ClearDecalsForEntityEvent = 0xCC,
                GE_Source1LegacyGameEventList = 0xCD,
                GE_Source1LegacyListenEvents = 0xCE,
                GE_Source1LegacyGameEvent = 0xCF,
                GE_SosStartSoundEvent = 0xD0,
                GE_SosStopSoundEvent = 0xD1,
                GE_SosSetSoundEventParams = 0xD2,
                GE_SosSetLibraryStackFields = 0xD3,
                GE_SosStopSoundEventHash = 0xD4,
                GE_ClothStiffenAnimEvent = 0xD5,
                GE_ClothEffectAnimEvent = 0xD6
            }
            // Alignment: 4
            // Member count: 5
            #[repr(u32)]
            pub enum DecalFlags_t {
                eNone = 0x0,
                eCannotClear = 0x1,
                eDecalProjectToBackfaces = 0x2,
                eAll = 0xFFFFFFFF,
                eAllButCannotClear = 0xFFFFFFFE
            }
            // Alignment: 4
            // Member count: 78
            #[repr(u32)]
            pub enum ECstrike15UserMessages {
                CS_UM_VGUIMenu = 0x12D,
                CS_UM_Geiger = 0x12E,
                CS_UM_Train = 0x12F,
                CS_UM_HudText = 0x130,
                CS_UM_SayText = 0x131,
                CS_UM_SayText2 = 0x132,
                CS_UM_TextMsg = 0x133,
                CS_UM_HudMsg = 0x134,
                CS_UM_ResetHud = 0x135,
                CS_UM_GameTitle = 0x136,
                CS_UM_Shake = 0x138,
                CS_UM_Fade = 0x139,
                CS_UM_Rumble = 0x13A,
                CS_UM_CloseCaption = 0x13B,
                CS_UM_CloseCaptionDirect = 0x13C,
                CS_UM_SendAudio = 0x13D,
                CS_UM_RawAudio = 0x13E,
                CS_UM_VoiceMask = 0x13F,
                CS_UM_RequestState = 0x140,
                CS_UM_Damage = 0x141,
                CS_UM_RadioText = 0x142,
                CS_UM_HintText = 0x143,
                CS_UM_KeyHintText = 0x144,
                CS_UM_ProcessSpottedEntityUpdate = 0x145,
                CS_UM_ReloadEffect = 0x146,
                CS_UM_AdjustMoney = 0x147,
                CS_UM_UpdateTeamMoney = 0x148,
                CS_UM_StopSpectatorMode = 0x149,
                CS_UM_KillCam = 0x14A,
                CS_UM_DesiredTimescale = 0x14B,
                CS_UM_CurrentTimescale = 0x14C,
                CS_UM_AchievementEvent = 0x14D,
                CS_UM_MatchEndConditions = 0x14E,
                CS_UM_DisconnectToLobby = 0x14F,
                CS_UM_PlayerStatsUpdate = 0x150,
                CS_UM_ClientInfo = 0x153,
                CS_UM_XRankGet = 0x154,
                CS_UM_XRankUpd = 0x155,
                CS_UM_CallVoteFailed = 0x159,
                CS_UM_VoteStart = 0x15A,
                CS_UM_VotePass = 0x15B,
                CS_UM_VoteFailed = 0x15C,
                CS_UM_VoteSetup = 0x15D,
                CS_UM_ServerRankRevealAll = 0x15E,
                CS_UM_SendLastKillerDamageToClient = 0x15F,
                CS_UM_ServerRankUpdate = 0x160,
                CS_UM_ItemPickup = 0x161,
                CS_UM_ShowMenu = 0x162,
                CS_UM_BarTime = 0x163,
                CS_UM_AmmoDenied = 0x164,
                CS_UM_MarkAchievement = 0x165,
                CS_UM_MatchStatsUpdate = 0x166,
                CS_UM_ItemDrop = 0x167,
                CS_UM_SendPlayerItemDrops = 0x169,
                CS_UM_RoundBackupFilenames = 0x16A,
                CS_UM_SendPlayerItemFound = 0x16B,
                CS_UM_ReportHit = 0x16C,
                CS_UM_XpUpdate = 0x16D,
                CS_UM_QuestProgress = 0x16E,
                CS_UM_ScoreLeaderboardData = 0x16F,
                CS_UM_PlayerDecalDigitalSignature = 0x170,
                CS_UM_WeaponSound = 0x171,
                CS_UM_UpdateScreenHealthBar = 0x172,
                CS_UM_EntityOutlineHighlight = 0x173,
                CS_UM_SSUI = 0x174,
                CS_UM_SurvivalStats = 0x175,
                CS_UM_DisconnectToLobby2 = 0x176,
                CS_UM_EndOfMatchAllPlayersData = 0x177,
                CS_UM_PostRoundDamageReport = 0x178,
                CS_UM_RoundEndReportData = 0x17B,
                CS_UM_CurrentRoundOdds = 0x17C,
                CS_UM_DeepStats = 0x17D,
                CS_UM_ShootInfo = 0x17F,
                CS_UM_CounterStrafe = 0x181,
                CS_UM_DamagePrediction = 0x182,
                CS_UM_RecurringMissionSchema = 0x183,
                CS_UM_SendPlayerLoadout = 0x184,
                CS_UM_WeaponMagDrop = 0x185
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
                xxBEAM_HOSExxunused = 0x4,
                BEAM_SPLINE = 0x5,
                BEAM_LASER = 0x6
            }
            // Alignment: 4
            // Member count: 5
            #[repr(u32)]
            pub enum ReplayEventType_t {
                REPLAY_EVENT_CANCEL = 0x0,
                REPLAY_EVENT_DEATH = 0x1,
                REPLAY_EVENT_GENERIC = 0x2,
                REPLAY_EVENT_STUCK_NEED_FULL_UPDATE = 0x3,
                REPLAY_EVENT_VICTORY = 0x4
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
            // Member count: 15
            #[repr(u32)]
            pub enum EGCBaseMsg {
                k_EMsgGCSystemMessage = 0xFA1,
                k_EMsgGCReplicateConVars = 0xFA2,
                k_EMsgGCConVarUpdated = 0xFA3,
                k_EMsgGCInQueue = 0xFA8,
                k_EMsgGCInviteToParty = 0x1195,
                k_EMsgGCInvitationCreated = 0x1196,
                k_EMsgGCPartyInviteResponse = 0x1197,
                k_EMsgGCKickFromParty = 0x1198,
                k_EMsgGCLeaveParty = 0x1199,
                k_EMsgGCServerAvailable = 0x119A,
                k_EMsgGCClientConnectToServer = 0x119B,
                k_EMsgGCGameServerInfo = 0x119C,
                k_EMsgGCError = 0x119D,
                k_EMsgGCReplay_UploadedToYouTube = 0x119E,
                k_EMsgGCLANServerAvailable = 0x119F
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
            // Alignment: 4
            // Member count: 4
            #[repr(u32)]
            pub enum GCClientLauncherType {
                GCClientLauncherType_DEFAULT = 0x0,
                GCClientLauncherType_PERFECTWORLD = 0x1,
                GCClientLauncherType_STEAMCHINA = 0x2,
                GCClientLauncherType_SOURCE2 = 0x3
            }
            // Alignment: 4
            // Member count: 3
            #[repr(u32)]
            pub enum ChoreoStrafeMode_t {
                DEFAULT = 0x0,
                ENABLE = 0x1,
                DISABLE = 0x2
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
            // Member count: 18
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
                kRenderFxFadeOut = 0xE,
                kRenderFxFadeIn = 0xF,
                kRenderFxPulseFastWider = 0x10,
                kRenderFxMax = 0x11
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
                NeverConnected = u32::MAX,
                Connected = 0x0,
                Connecting = 0x1,
                Reconnecting = 0x2,
                Disconnecting = 0x3,
                Disconnected = 0x4,
                Reserved = 0x5
            }
            // Alignment: 4
            // Member count: 30
            #[repr(u32)]
            pub enum PreviewCharacterBannerAnimation {
                INVALID = u32::MAX,
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
                BANNER_BOMB_DEFUSAL_VER1 = 0x12,
                BANNER_BOMB_DEFUSAL_VER2 = 0x13,
                BANNER_FIRE = 0x14,
                BANNER_BOMB_BLAST_TOSS = 0x15,
                BANNER_BOMB_BLAST01 = 0x16,
                BANNER_BOMB_BLAST02 = 0x17,
                BANNER_BOMB_BLAST03 = 0x18,
                BANNER_CELEBRATE_01 = 0x19,
                BANNER_CELEBRATE_02 = 0x1A,
                BANNER_CELEBRATE_03 = 0x1B,
                BANNER_CELEBRATE_04 = 0x1C
            }
            // Alignment: 4
            // Member count: 5
            #[repr(u32)]
            pub enum EntityDissolveType_t {
                ENTITY_DISSOLVE_INVALID = u32::MAX,
                ENTITY_DISSOLVE_NORMAL = 0x0,
                ENTITY_DISSOLVE_ELECTRICAL = 0x1,
                ENTITY_DISSOLVE_ELECTRICAL_LIGHT = 0x2,
                ENTITY_DISSOLVE_CORE = 0x3
            }
            // Alignment: 4
            // Member count: 1
            #[repr(u32)]
            pub enum navproperties_t {
                NAV_IGNORE = 0x1
            }
            // Alignment: 4
            // Member count: 4
            #[repr(u32)]
            pub enum Bidirectional_Messages {
                bi_RebroadcastGameEvent = 0x10,
                bi_RebroadcastSource = 0x11,
                bi_GameEvent_DEPRECATED = 0x12,
                bi_PredictionEvent = 0x13
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
            // Alignment: 4
            // Member count: 8
            #[repr(u32)]
            pub enum ChoreoExternalAnimgraphControlState_t {
                eNone = 0x0,
                eExit = 0x1,
                eState01 = 0x2,
                eState02 = 0x3,
                eState03 = 0x4,
                eState04 = 0x5,
                eState05 = 0x6,
                eCount = 0x7
            }
            // Alignment: 1
            // Member count: 10
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
                SOLID_CYLINDER = 0x8,
                SOLID_LAST = 0x9
            }
            // Alignment: 4
            // Member count: 22
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
                DMG_BLAST_SURFACE = 0x1000,
                DMG_DISSOLVE = 0x2000,
                DMG_DROWN = 0x4000,
                DMG_POISON = 0x8000,
                DMG_RADIATION = 0x10000,
                DMG_DROWNRECOVER = 0x20000,
                DMG_ACID = 0x40000,
                DMG_HEADSHOT = 0x80000
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
            // Member count: 5
            #[repr(u32)]
            pub enum EProtoDebugVisiblity {
                k_EProtoDebugVisibility_Always = 0x0,
                k_EProtoDebugVisibility_Server = 0x46,
                k_EProtoDebugVisibility_ValveServer = 0x50,
                k_EProtoDebugVisibility_GC = 0x5A,
                k_EProtoDebugVisibility_Never = 0x64
            }
            // Alignment: 4
            // Member count: 2
            #[repr(u32)]
            pub enum attributeprovidertypes_t {
                PROVIDER_GENERIC = 0x0,
                PROVIDER_WEAPON = 0x1
            }
            // Alignment: 4
            // Member count: 11
            #[repr(u32)]
            pub enum EGCMsgResponse {
                k_EGCMsgResponseOK = 0x0,
                k_EGCMsgResponseDenied = 0x1,
                k_EGCMsgResponseServerError = 0x2,
                k_EGCMsgResponseTimeout = 0x3,
                k_EGCMsgResponseInvalid = 0x4,
                k_EGCMsgResponseNoMatch = 0x5,
                k_EGCMsgResponseUnknownError = 0x6,
                k_EGCMsgResponseNotLoggedOn = 0x7,
                k_EGCMsgFailedToCreate = 0x8,
                k_EGCMsgLimitExceeded = 0x9,
                k_EGCMsgCommitUnfinalized = 0xA
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
            // Member count: 1
            #[repr(u32)]
            pub enum PrefetchType {
                PFT_SOUND = 0x0
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
            // Member count: 23
            #[repr(u32)]
            pub enum ETEProtobufIds {
                TE_EffectDispatchId = 0x190,
                TE_ArmorRicochetId = 0x191,
                TE_BeamEntPointId = 0x192,
                TE_BeamEntsId = 0x193,
                TE_BeamPointsId = 0x194,
                TE_BeamRingId = 0x195,
                TE_BubblesId = 0x198,
                TE_BubbleTrailId = 0x199,
                TE_DecalId = 0x19A,
                TE_WorldDecalId = 0x19B,
                TE_EnergySplashId = 0x19C,
                TE_FizzId = 0x19D,
                TE_ShatterSurfaceId = 0x19E,
                TE_GlowSpriteId = 0x19F,
                TE_ImpactId = 0x1A0,
                TE_MuzzleFlashId = 0x1A1,
                TE_BloodStreamId = 0x1A2,
                TE_ExplosionId = 0x1A3,
                TE_DustId = 0x1A4,
                TE_LargeFunnelId = 0x1A5,
                TE_SparksId = 0x1A6,
                TE_PhysicsPropId = 0x1A7,
                TE_SmokeId = 0x1AA
            }
            // Alignment: 4
            // Member count: 5
            #[repr(u32)]
            pub enum INavObstacle__NavObstacleType_t {
                NAV_OBSTACLE_TYPE_INVALID = u32::MAX,
                NAV_OBSTACLE_TYPE_NONE = 0x0,
                NAV_OBSTACLE_TYPE_AVOID = 0x1,
                NAV_OBSTACLE_TYPE_CONN = 0x2,
                NAV_OBSTACLE_TYPE_BLOCK = 0x3
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
            // Alignment: 1
            // Member count: 9
            #[repr(u8)]
            pub enum CCSPlayerAnimationState__Direction_t {
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
            #[repr(u32)]
            pub enum eSplinePushType {
                k_eSplinePushAlong = 0x0,
                k_eSplinePushAway = 0x1,
                k_eSplinePushTowards = 0x2
            }
            // Alignment: 2
            // Member count: 29
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
                WPN_ANIMSTATE_INVENTORY_UI_TUMBLE = 0x5DC,
                WPN_ANIMSTATE_INVENTORY_UI_KEYCHAIN_APPLY = 0x5DD,
                WPN_ANIMSTATE_END_VALID = 0x7D0
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
            // Member count: 22
            #[repr(u32)]
            pub enum NavAttributeDynamicType {
                NAV_AREA_NONE = 0x0,
                NAV_AREA_UNDER_WATER = 0x1,
                NAV_AREA_UNDER_WATER_DEEP = 0x2,
                NAV_AREA_EXTERNALLY_CREATED = 0x4,
                NAV_AREA_SHOULD_BE_DESTROYED = 0x8,
                NAV_AREA_CREATED_BY_OBSTACLE_MGR = 0x10,
                NAV_AREA_SPLIT_BY_OBSTACLE_MGR = 0x20,
                NAV_AREA_SPLIT_OBS_CONTAINED = 0x40,
                NAV_AREA_SPLIT_OBS_BASE_CONTAINED = 0x80,
                NAV_AREA_HAS_LADDERS = 0x100,
                NAV_AREA_NAV_LINK = 0x200,
                NAV_AREA_NAV_LINK_TERMINUS = 0x400,
                NAV_AREA_CONNECTED_TO_NAV_LINK_OUT = 0x800,
                NAV_AREA_CONNECTED_TO_NAV_LINK_IN = 0x1000,
                NAV_AREA_MOVABLE = 0x2000,
                NAV_AREA_DOCK = 0x4000,
                NAV_AREA_DOCKING_CANDIDATE = 0x8000,
                NAV_AREA_BOUNDARY = 0x10000,
                NAV_AREA_HAS_TACTICAL_SEARCH_ANNOTATIONS = 0x20000,
                NAV_AREA_DEFORMABLE = 0x40000,
                NAV_AREA_DEFORMABLE_DOCK = 0x80000,
                NAV_AREA_LINK_AUTO_ADJUST = 0x100000
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
            // Member count: 3
            #[repr(u32)]
            pub enum EHapticPulseType {
                VR_HAND_HAPTIC_PULSE_LIGHT = 0x0,
                VR_HAND_HAPTIC_PULSE_MEDIUM = 0x1,
                VR_HAND_HAPTIC_PULSE_STRONG = 0x2
            }
            // Alignment: 4
            // Member count: 147
            #[repr(u32)]
            pub enum EGCItemMsg {
                k_EMsgGCBase = 0x3E8,
                k_EMsgGCSetItemPosition = 0x3E9,
                k_EMsgGCCraft = 0x3EA,
                k_EMsgGCCraftResponse = 0x3EB,
                k_EMsgGCDelete = 0x3EC,
                k_EMsgGCVerifyCacheSubscription = 0x3ED,
                k_EMsgGCNameItem = 0x3EE,
                k_EMsgGCUnlockCrate_DEPRECATED = 0x3EF,
                k_EMsgGCUnlockCrateResponse = 0x3F0,
                k_EMsgGCPaintItem = 0x3F1,
                k_EMsgGCPaintItemResponse = 0x3F2,
                k_EMsgGCGoldenWrenchBroadcast = 0x3F3,
                k_EMsgGCMOTDRequest = 0x3F4,
                k_EMsgGCMOTDRequestResponse = 0x3F5,
                k_EMsgGCAddItemToSocket_DEPRECATED = 0x3F6,
                k_EMsgGCAddItemToSocketResponse_DEPRECATED = 0x3F7,
                k_EMsgGCAddSocketToBaseItem_DEPRECATED = 0x3F8,
                k_EMsgGCAddSocketToItem_DEPRECATED = 0x3F9,
                k_EMsgGCAddSocketToItemResponse_DEPRECATED = 0x3FA,
                k_EMsgGCNameBaseItem = 0x3FB,
                k_EMsgGCNameBaseItemResponse = 0x3FC,
                k_EMsgGCRemoveSocketItem_DEPRECATED = 0x3FD,
                k_EMsgGCRemoveSocketItemResponse_DEPRECATED = 0x3FE,
                k_EMsgGCCustomizeItemTexture = 0x3FF,
                k_EMsgGCCustomizeItemTextureResponse = 0x400,
                k_EMsgGCUseItemRequest = 0x401,
                k_EMsgGCUseItemResponse = 0x402,
                k_EMsgGCGiftedItems_DEPRECATED = 0x403,
                k_EMsgGCRemoveItemName = 0x406,
                k_EMsgGCRemoveItemPaint = 0x407,
                k_EMsgGCGiftWrapItem = 0x408,
                k_EMsgGCGiftWrapItemResponse = 0x409,
                k_EMsgGCDeliverGift = 0x40A,
                k_EMsgGCDeliverGiftResponseGiver = 0x40B,
                k_EMsgGCDeliverGiftResponseReceiver = 0x40C,
                k_EMsgGCUnwrapGiftRequest = 0x40D,
                k_EMsgGCUnwrapGiftResponse = 0x40E,
                k_EMsgGCSetItemStyle = 0x40F,
                k_EMsgGCUsedClaimCodeItem = 0x410,
                k_EMsgGCSortItems = 0x411,
                k_EMsgGC_RevolvingLootList_DEPRECATED = 0x412,
                k_EMsgGCLookupAccount = 0x413,
                k_EMsgGCLookupAccountResponse = 0x414,
                k_EMsgGCLookupAccountName = 0x415,
                k_EMsgGCLookupAccountNameResponse = 0x416,
                k_EMsgGCUpdateItemSchema = 0x419,
                k_EMsgGCRemoveCustomTexture = 0x41B,
                k_EMsgGCRemoveCustomTextureResponse = 0x41C,
                k_EMsgGCRemoveMakersMark = 0x41D,
                k_EMsgGCRemoveMakersMarkResponse = 0x41E,
                k_EMsgGCRemoveUniqueCraftIndex = 0x41F,
                k_EMsgGCRemoveUniqueCraftIndexResponse = 0x420,
                k_EMsgGCSaxxyBroadcast = 0x421,
                k_EMsgGCBackpackSortFinished = 0x422,
                k_EMsgGCCollectItem = 0x425,
                k_EMsgGCItemAcknowledged__DEPRECATED = 0x426,
                k_EMsgGC_ReportAbuse = 0x429,
                k_EMsgGC_ReportAbuseResponse = 0x42A,
                k_EMsgGCNameItemNotification = 0x42C,
                k_EMsgGCApplyConsumableEffects = 0x42D,
                k_EMsgGCConsumableExhausted = 0x42E,
                k_EMsgGCShowItemsPickedUp = 0x42F,
                k_EMsgGCClientDisplayNotification = 0x430,
                k_EMsgGCApplyStrangePart = 0x431,
                k_EMsgGC_IncrementKillCountAttribute = 0x432,
                k_EMsgGC_IncrementKillCountResponse = 0x433,
                k_EMsgGCApplyPennantUpgrade = 0x434,
                k_EMsgGCSetItemPositions = 0x435,
                k_EMsgGCApplyEggEssence = 0x436,
                k_EMsgGCNameEggEssenceResponse = 0x437,
                k_EMsgGCPaintKitItem = 0x438,
                k_EMsgGCPaintKitBaseItem = 0x439,
                k_EMsgGCPaintKitItemResponse = 0x43A,
                k_EMsgGCGiftedItems = 0x43B,
                k_EMsgGCUnlockItemStyle = 0x43C,
                k_EMsgGCUnlockItemStyleResponse = 0x43D,
                k_EMsgGCApplySticker = 0x43E,
                k_EMsgGCItemAcknowledged = 0x43F,
                k_EMsgGCStatTrakSwap = 0x440,
                k_EMsgGCUserTrackTimePlayedConsecutively = 0x441,
                k_EMsgGCItemCustomizationNotification = 0x442,
                k_EMsgGCModifyItemAttribute = 0x443,
                k_EMsgGCCasketItemAdd = 0x444,
                k_EMsgGCCasketItemExtract = 0x445,
                k_EMsgGCCasketItemLoadContents = 0x446,
                k_EMsgGCTradingBase = 0x5DC,
                k_EMsgGCTrading_InitiateTradeRequest = 0x5DD,
                k_EMsgGCTrading_InitiateTradeResponse = 0x5DE,
                k_EMsgGCTrading_StartSession = 0x5DF,
                k_EMsgGCTrading_SetItem = 0x5E0,
                k_EMsgGCTrading_RemoveItem = 0x5E1,
                k_EMsgGCTrading_UpdateTradeInfo = 0x5E2,
                k_EMsgGCTrading_SetReadiness = 0x5E3,
                k_EMsgGCTrading_ReadinessResponse = 0x5E4,
                k_EMsgGCTrading_SessionClosed = 0x5E5,
                k_EMsgGCTrading_CancelSession = 0x5E6,
                k_EMsgGCTrading_TradeChatMsg = 0x5E7,
                k_EMsgGCTrading_ConfirmOffer = 0x5E8,
                k_EMsgGCTrading_TradeTypingChatMsg = 0x5E9,
                k_EMsgGCServerBrowser_FavoriteServer = 0x641,
                k_EMsgGCServerBrowser_BlacklistServer = 0x642,
                k_EMsgGCServerRentalsBase = 0x6A4,
                k_EMsgGCItemPreviewCheckStatus = 0x6A5,
                k_EMsgGCItemPreviewStatusResponse = 0x6A6,
                k_EMsgGCItemPreviewRequest = 0x6A7,
                k_EMsgGCItemPreviewRequestResponse = 0x6A8,
                k_EMsgGCItemPreviewExpire = 0x6A9,
                k_EMsgGCItemPreviewExpireNotification = 0x6AA,
                k_EMsgGCItemPreviewItemBoughtNotification = 0x6AB,
                k_EMsgGCDev_NewItemRequest = 0x7D1,
                k_EMsgGCDev_NewItemRequestResponse = 0x7D2,
                k_EMsgGCDev_PaintKitDropItem = 0x7D3,
                k_EMsgGCDev_SchemaReservationRequest = 0x7D4,
                k_EMsgGCStoreGetUserData = 0x9C4,
                k_EMsgGCStoreGetUserDataResponse = 0x9C5,
                k_EMsgGCStorePurchaseInit_DEPRECATED = 0x9C6,
                k_EMsgGCStorePurchaseInitResponse_DEPRECATED = 0x9C7,
                k_EMsgGCStorePurchaseFinalize = 0x9C8,
                k_EMsgGCStorePurchaseFinalizeResponse = 0x9C9,
                k_EMsgGCStorePurchaseCancel = 0x9CA,
                k_EMsgGCStorePurchaseCancelResponse = 0x9CB,
                k_EMsgGCStorePurchaseQueryTxn = 0x9CC,
                k_EMsgGCStorePurchaseQueryTxnResponse = 0x9CD,
                k_EMsgGCStorePurchaseInit = 0x9CE,
                k_EMsgGCStorePurchaseInitResponse = 0x9CF,
                k_EMsgGCBannedWordListRequest = 0x9D0,
                k_EMsgGCBannedWordListResponse = 0x9D1,
                k_EMsgGCToGCBannedWordListBroadcast = 0x9D2,
                k_EMsgGCToGCBannedWordListUpdated = 0x9D3,
                k_EMsgGCToGCDirtySDOCache = 0x9D4,
                k_EMsgGCToGCDirtyMultipleSDOCache = 0x9D5,
                k_EMsgGCToGCUpdateSQLKeyValue = 0x9D6,
                k_EMsgGCToGCIsTrustedServer = 0x9D7,
                k_EMsgGCToGCIsTrustedServerResponse = 0x9D8,
                k_EMsgGCToGCBroadcastConsoleCommand = 0x9D9,
                k_EMsgGCServerVersionUpdated = 0x9DA,
                k_EMsgGCToGCWebAPIAccountChanged = 0x9DC,
                k_EMsgGCRequestAnnouncements = 0x9DD,
                k_EMsgGCRequestAnnouncementsResponse = 0x9DE,
                k_EMsgGCRequestPassportItemGrant = 0x9DF,
                k_EMsgGCClientVersionUpdated = 0x9E0,
                k_EMsgGCRecurringSubscriptionStatus = 0x9E2,
                k_EMsgGCAdjustEquipSlotsManual = 0x9E3,
                k_EMsgGCAdjustEquipSlotsShuffle = 0x9E4,
                k_EMsgGCOpenCrate = 0x9E6,
                k_EMsgGCAcknowledgeRentalExpiration = 0x9E7,
                k_EMsgGCVolatileItemLoadContents = 0x9E8
            }
            // Alignment: 4
            // Member count: 7
            #[repr(u32)]
            pub enum ShakeCommand_t {
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
            // Member count: 5
            #[repr(u32)]
            pub enum GCProtoBufMsgSrc {
                GCProtoBufMsgSrc_Unspecified = 0x0,
                GCProtoBufMsgSrc_FromSystem = 0x1,
                GCProtoBufMsgSrc_FromSteamID = 0x2,
                GCProtoBufMsgSrc_FromGC = 0x3,
                GCProtoBufMsgSrc_ReplySystem = 0x4
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
            // Member count: 22
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
                DFLAG_SUPPRESS_SCREENSPACE_DAMAGE_FX = 0x10000,
                DFLAG_ALLOW_NON_AUTHORITATIVE = 0x20000,
                DFLAG_IGNORE_ARMOR = 0x40000,
                DFLAG_SUPPRESS_UTILREMOVE = 0x80000
            }
            // Alignment: 4
            // Member count: 3
            #[repr(u32)]
            pub enum ShatterGlassEntityPoolState_t {
                ENTITY_POOL_STATE_INVALID = 0x0,
                ENTITY_POOL_STATE_AVAILABLE = 0x1,
                ENTITY_POOL_STATE_IN_USE = 0x2
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
            // Member count: 5
            #[repr(u32)]
            pub enum GCConnectionStatus {
                GCConnectionStatus_HAVE_SESSION = 0x0,
                GCConnectionStatus_GC_GOING_DOWN = 0x1,
                GCConnectionStatus_NO_SESSION = 0x2,
                GCConnectionStatus_NO_SESSION_IN_LOGON_QUEUE = 0x3,
                GCConnectionStatus_NO_STEAM = 0x4
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
            // Member count: 4
            #[repr(u32)]
            pub enum BodySectionMutex_t {
                eNone = 0x0,
                eLowerBody = 0x1,
                eUpperBody = 0x2,
                eFullBody = 0x3
            }
            // Alignment: 4
            // Member count: 7
            #[repr(u32)]
            pub enum EChickenActivity {
                Idle = 0x0,
                Squat = 0x1,
                Walk = 0x2,
                Run = 0x3,
                Glide = 0x4,
                Land = 0x5,
                Panic = 0x6
            }
            // Alignment: 1
            // Member count: 4
            #[repr(u8)]
            pub enum CCSPlayerAnimationState__AirAction_t {
                None = 0x0,
                Jump = 0x1,
                StartFall = 0x2,
                Land = 0x3
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
            // Member count: 7
            #[repr(u32)]
            pub enum EBaseClientMessages {
                CM_CustomGameEvent = 0x118,
                CM_CustomGameEventBounce = 0x119,
                CM_ClientUIEvent = 0x11A,
                CM_DevPaletteVisibilityChanged = 0x11B,
                CM_WorldUIControllerHasPanelChanged = 0x11C,
                CM_RotateAnchor = 0x11D,
                CM_MAX_BASE = 0x12C
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
            // Alignment: 4
            // Member count: 4
            #[repr(u32)]
            pub enum ECsgoGameEvents {
                GE_PlayerAnimEventId = 0x1C2,
                GE_RadioIconEventId = 0x1C3,
                GE_FireBulletsId = 0x1C4,
                GE_PlayerBulletHitId = 0x1C5
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
            // Parent: CBaseModelEntity
            // Field count: 16
            pub mod CPointWorldText {
                pub const m_messageText: usize = 0x770; // char[512]
                pub const m_FontName: usize = 0x970; // char[64]
                pub const m_BackgroundMaterialName: usize = 0x9B0; // char[64]
                pub const m_bEnabled: usize = 0x9F0; // bool
                pub const m_bFullbright: usize = 0x9F1; // bool
                pub const m_flWorldUnitsPerPx: usize = 0x9F4; // float32
                pub const m_flFontSize: usize = 0x9F8; // float32
                pub const m_flDepthOffset: usize = 0x9FC; // float32
                pub const m_bDrawBackground: usize = 0xA00; // bool
                pub const m_flBackgroundBorderWidth: usize = 0xA04; // float32
                pub const m_flBackgroundBorderHeight: usize = 0xA08; // float32
                pub const m_flBackgroundWorldToUV: usize = 0xA0C; // float32
                pub const m_Color: usize = 0xA10; // Color
                pub const m_nJustifyHorizontal: usize = 0xA14; // PointWorldTextJustifyHorizontal_t
                pub const m_nJustifyVertical: usize = 0xA18; // PointWorldTextJustifyVertical_t
                pub const m_nReorientMode: usize = 0xA1C; // PointWorldTextReorientMode_t
            }
            // Parent: CPointEntity
            // Field count: 10
            pub mod CAmbientGeneric {
                pub const m_radius: usize = 0x4A8; // float32
                pub const m_flMaxRadius: usize = 0x4AC; // float32
                pub const m_iSoundLevel: usize = 0x4B0; // soundlevel_t
                pub const m_dpv: usize = 0x4B4; // dynpitchvol_t
                pub const m_fActive: usize = 0x518; // bool
                pub const m_fLooping: usize = 0x519; // bool
                pub const m_iszSound: usize = 0x520; // CGameSoundEventName
                pub const m_sSourceEntName: usize = 0x528; // CUtlSymbolLarge
                pub const m_hSoundSource: usize = 0x530; // CHandle<CBaseEntity>
                pub const m_nSoundSourceEntIndex: usize = 0x534; // CEntityIndex
            }
            // Parent: CPointEntity
            // Field count: 12
            pub mod CEnvEntityMaker {
                pub const m_vecEntityMins: usize = 0x4A8; // Vector
                pub const m_vecEntityMaxs: usize = 0x4B4; // Vector
                pub const m_hCurrentInstance: usize = 0x4C0; // CHandle<CBaseEntity>
                pub const m_hCurrentBlocker: usize = 0x4C4; // CHandle<CBaseEntity>
                pub const m_vecBlockerOrigin: usize = 0x4C8; // VectorWS
                pub const m_angPostSpawnDirection: usize = 0x4D4; // QAngle
                pub const m_flPostSpawnDirectionVariance: usize = 0x4E0; // float32
                pub const m_flPostSpawnSpeed: usize = 0x4E4; // float32
                pub const m_bPostSpawnUseAngles: usize = 0x4E8; // bool
                pub const m_iszTemplate: usize = 0x4F0; // CUtlSymbolLarge
                pub const m_pOutputOnSpawned: usize = 0x4F8; // CEntityIOOutput
                pub const m_pOutputOnFailedSpawn: usize = 0x510; // CEntityIOOutput
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
                pub const m_iszEnemyName: usize = 0x4E0; // CUtlSymbolLarge
                pub const m_flRadius: usize = 0x4E8; // float32
                pub const m_flOuterRadius: usize = 0x4EC; // float32
                pub const m_nMaxSquadmatesPerEnemy: usize = 0x4F0; // int32
                pub const m_iszPlayerName: usize = 0x4F8; // CUtlSymbolLarge
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
                pub const m_bTagSelfWhenComplete: usize = 0x128; // bool
                pub const m_nDesiredKillPriority: usize = 0x12C; // PulseCursorCancelPriority_t
            }
            // Parent: CFuncTrackChange
            // Field count: 0
            pub mod CFuncTrackAuto {
            }
            // Parent: CBaseEntity
            // Field count: 77
            pub mod CScriptedSequence {
                pub const m_iszEntry: usize = 0x4A8; // CUtlSymbolLarge
                pub const m_iszPreIdle: usize = 0x4B0; // CUtlSymbolLarge
                pub const m_iszPlay: usize = 0x4B8; // CUtlSymbolLarge
                pub const m_iszPostIdle: usize = 0x4C0; // CUtlSymbolLarge
                pub const m_iszModifierToAddOnPlay: usize = 0x4C8; // CUtlSymbolLarge
                pub const m_iszNextScript: usize = 0x4D0; // CUtlSymbolLarge
                pub const m_iszEntity: usize = 0x4D8; // CUtlSymbolLarge
                pub const m_iszSyncGroup: usize = 0x4E0; // CUtlSymbolLarge
                pub const m_nMoveTo: usize = 0x4E8; // ScriptedMoveTo_t
                pub const m_nMoveToGait: usize = 0x4EC; // SharedMovementGait_t
                pub const m_nHeldWeaponBehavior: usize = 0x4F0; // ScriptedHeldWeaponBehavior_t
                pub const m_nForcedCrouchState: usize = 0x4F4; // ForcedCrouchState_t
                pub const m_bIsPlayingPreIdle: usize = 0x4F8; // bool
                pub const m_bIsPlayingEntry: usize = 0x4F9; // bool
                pub const m_bIsPlayingAction: usize = 0x4FA; // bool
                pub const m_bIsPlayingPostIdle: usize = 0x4FB; // bool
                pub const m_bDontRotateOther: usize = 0x4FC; // bool
                pub const m_bIsRepeatable: usize = 0x4FD; // bool
                pub const m_bShouldLeaveCorpse: usize = 0x4FE; // bool
                pub const m_bStartOnSpawn: usize = 0x4FF; // bool
                pub const m_bDisallowInterrupts: usize = 0x500; // bool
                pub const m_bCanOverrideNPCState: usize = 0x501; // bool
                pub const m_bDontTeleportAtEnd: usize = 0x502; // bool
                pub const m_bHighPriority: usize = 0x503; // bool
                pub const m_bHideDebugComplaints: usize = 0x504; // bool
                pub const m_bContinueOnDeath: usize = 0x505; // bool
                pub const m_bLoopPreIdleSequence: usize = 0x506; // bool
                pub const m_bLoopActionSequence: usize = 0x507; // bool
                pub const m_bLoopPostIdleSequence: usize = 0x508; // bool
                pub const m_bSynchPostIdles: usize = 0x509; // bool
                pub const m_bIgnoreLookAt: usize = 0x50A; // bool
                pub const m_bIgnoreGravity: usize = 0x50B; // bool
                pub const m_bDisableNPCCollisions: usize = 0x50C; // bool
                pub const m_bKeepAnimgraphLockedPost: usize = 0x50D; // bool
                pub const m_bDontAddModifiers: usize = 0x50E; // bool
                pub const m_bDisableAimingWhileMoving: usize = 0x50F; // bool
                pub const m_bIgnoreRotation: usize = 0x510; // bool
                pub const m_flRadius: usize = 0x514; // float32
                pub const m_flRepeat: usize = 0x518; // float32
                pub const m_flPlayAnimFadeInTime: usize = 0x51C; // float32
                pub const m_flMoveInterpTime: usize = 0x520; // float32
                pub const m_flAngRate: usize = 0x524; // float32
                pub const m_flMoveSpeed: usize = 0x528; // float32
                pub const m_bWaitUntilMoveCompletesToStartAnimation: usize = 0x52C; // bool
                pub const m_nNotReadySequenceCount: usize = 0x530; // int32
                pub const m_startTime: usize = 0x534; // GameTime_t
                pub const m_bWaitForBeginSequence: usize = 0x538; // bool
                pub const m_saved_effects: usize = 0x53C; // int32
                pub const m_savedFlags: usize = 0x540; // int32
                pub const m_savedCollisionGroup: usize = 0x544; // int32
                pub const m_bInterruptable: usize = 0x548; // bool
                pub const m_sequenceStarted: usize = 0x549; // bool
                pub const m_bPositionRelativeToOtherEntity: usize = 0x54A; // bool
                pub const m_hTargetEnt: usize = 0x54C; // CHandle<CBaseEntity>
                pub const m_hNextCine: usize = 0x550; // CHandle<CScriptedSequence>
                pub const m_bThinking: usize = 0x554; // bool
                pub const m_bInitiatedSelfDelete: usize = 0x555; // bool
                pub const m_bIsTeleportingDueToMoveTo: usize = 0x556; // bool
                pub const m_bAllowCustomInterruptConditions: usize = 0x557; // bool
                pub const m_hForcedTarget: usize = 0x558; // CHandle<CBaseAnimGraph>
                pub const m_bDontCancelOtherSequences: usize = 0x55C; // bool
                pub const m_bForceSynch: usize = 0x55D; // bool
                pub const m_bPreventUpdateYawOnFinish: usize = 0x55E; // bool
                pub const m_bEnsureOnNavmeshOnFinish: usize = 0x55F; // bool
                pub const m_onDeathBehavior: usize = 0x560; // ScriptedOnDeath_t
                pub const m_ConflictResponse: usize = 0x564; // ScriptedConflictResponse_t
                pub const m_OnBeginSequence: usize = 0x568; // CEntityIOOutput
                pub const m_OnActionStartOrLoop: usize = 0x580; // CEntityIOOutput
                pub const m_OnEndSequence: usize = 0x598; // CEntityIOOutput
                pub const m_OnPostIdleEndSequence: usize = 0x5B0; // CEntityIOOutput
                pub const m_OnCancelSequence: usize = 0x5C8; // CEntityIOOutput
                pub const m_OnCancelFailedSequence: usize = 0x5E0; // CEntityIOOutput
                pub const m_OnScriptEvent: usize = 0x5F8; // CEntityIOOutput[8]
                pub const m_matOtherToMain: usize = 0x6C0; // CTransform
                pub const m_hInteractionMainEntity: usize = 0x6E0; // CHandle<CBaseEntity>
                pub const m_iPlayerDeathBehavior: usize = 0x6E4; // int32
                pub const m_bSkipFadeIn: usize = 0x6E8; // bool
            }
            // Parent: CBaseTrigger
            // Field count: 1
            pub mod CFogTrigger {
                pub const m_fog: usize = 0x8E8; // fogparams_t
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
            pub mod CCSPlayer_PingServices {
                pub const m_flPlayerPingTokens: usize = 0x48; // GameTime_t[5]
                pub const m_hPlayerPing: usize = 0x5C; // CHandle<CPlayerPing>
            }
            // Parent: CBaseCSGrenade
            // Field count: 0
            pub mod CHEGrenade {
            }
            // Parent: CBaseEntity
            // Field count: 9
            pub mod CPhysicsSpring {
                pub const m_pSpringJoint: usize = 0x4A8; // IPhysicsJoint*
                pub const m_flFrequency: usize = 0x4B0; // float32
                pub const m_flDampingRatio: usize = 0x4B4; // float32
                pub const m_flRestLength: usize = 0x4B8; // float32
                pub const m_nameAttachStart: usize = 0x4C0; // CUtlSymbolLarge
                pub const m_nameAttachEnd: usize = 0x4C8; // CUtlSymbolLarge
                pub const m_start: usize = 0x4D0; // VectorWS
                pub const m_end: usize = 0x4DC; // VectorWS
                pub const m_teleportTick: usize = 0x4E8; // uint32
            }
            // Parent: CPointEntity
            // Field count: 2
            pub mod CEnvMuzzleFlash {
                pub const m_flScale: usize = 0x4A8; // float32
                pub const m_iszParentAttachment: usize = 0x4B0; // CUtlSymbolLarge
            }
            // Parent: None
            // Field count: 5
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
            // Parent: None
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
            // Parent: CDynamicProp
            // Field count: 0
            pub mod CFuncRetakeBarrier {
            }
            // Parent: None
            // Field count: 0
            pub mod CHostage_API {
            }
            // Parent: CBaseTrigger
            // Field count: 2
            pub mod CTriggerBuoyancy {
                pub const m_BuoyancyHelper: usize = 0x8E8; // CBuoyancyHelper
                pub const m_flFluidDensity: usize = 0xA00; // float32
            }
            // Parent: CTonemapController2
            // Field count: 0
            pub mod CTonemapController2Alias_env_tonemap_controller2 {
            }
            // Parent: CPointEntity
            // Field count: 10
            pub mod CPathTrack {
                pub const m_pnext: usize = 0x4A8; // CHandle<CPathTrack>
                pub const m_pprevious: usize = 0x4AC; // CHandle<CPathTrack>
                pub const m_paltpath: usize = 0x4B0; // CHandle<CPathTrack>
                pub const m_flSpeed: usize = 0x4B4; // float32
                pub const m_flRadius: usize = 0x4B8; // float32
                pub const m_length: usize = 0x4BC; // float32
                pub const m_altName: usize = 0x4C0; // CUtlSymbolLarge
                pub const m_nIterVal: usize = 0x4C8; // int32
                pub const m_eOrientationType: usize = 0x4CC; // TrackOrientationType_t
                pub const m_OnPass: usize = 0x4D0; // CEntityIOOutput
            }
            // Parent: CBaseEntity
            // Field count: 0
            pub mod CCSGO_EndOfMatchLineupEndpoint {
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
                pub const m_hMeasureTarget: usize = 0x8E8; // CHandle<CBaseEntity>
                pub const m_iszMeasureTarget: usize = 0x8F0; // CUtlSymbolLarge
                pub const m_fRadius: usize = 0x8F8; // float32
                pub const m_nTouchers: usize = 0x8FC; // int32
                pub const m_NearestEntityDistance: usize = 0x900; // CEntityOutputTemplate<float32>
            }
            // Parent: CPointEntity
            // Field count: 7
            pub mod CTankTrainAI {
                pub const m_hTrain: usize = 0x4A8; // CHandle<CFuncTrackTrain>
                pub const m_hTargetEntity: usize = 0x4AC; // CHandle<CBaseEntity>
                pub const m_soundPlaying: usize = 0x4B0; // int32
                pub const m_startSoundName: usize = 0x4C8; // CUtlSymbolLarge
                pub const m_engineSoundName: usize = 0x4D0; // CUtlSymbolLarge
                pub const m_movementSoundName: usize = 0x4D8; // CUtlSymbolLarge
                pub const m_targetEntityName: usize = 0x4E0; // CUtlSymbolLarge
            }
            // Parent: CRulePointEntity
            // Field count: 2
            pub mod CGameText {
                pub const m_iszMessage: usize = 0x780; // CUtlSymbolLarge
                pub const m_textParms: usize = 0x788; // hudtextparms_t
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
            // Field count: 9
            pub mod CCSPlayerModernJump {
                pub const m_nLastActualJumpPressTick: usize = 0x10; // GameTick_t
                pub const m_flLastActualJumpPressFrac: usize = 0x14; // float32
                pub const m_nLastUsableJumpPressTick: usize = 0x18; // GameTick_t
                pub const m_flLastUsableJumpPressFrac: usize = 0x1C; // float32
                pub const m_nLastLandedTick: usize = 0x20; // GameTick_t
                pub const m_flLastLandedFrac: usize = 0x24; // float32
                pub const m_flLastLandedVelocityX: usize = 0x28; // float32
                pub const m_flLastLandedVelocityY: usize = 0x2C; // float32
                pub const m_flLastLandedVelocityZ: usize = 0x30; // float32
            }
            // Parent: None
            // Field count: 0
            pub mod CCSGO_TeamPreviewCharacterPosition_API {
            }
            // Parent: None
            // Field count: 0
            pub mod CPulse_ResumePoint {
            }
            // Parent: CBaseTrigger
            // Field count: 25
            pub mod CTriggerFan {
                pub const m_vFanOriginOffset: usize = 0x8E8; // Vector
                pub const m_vDirection: usize = 0x8F4; // Vector
                pub const m_bPushTowardsInfoTarget: usize = 0x900; // bool
                pub const m_bPushAwayFromInfoTarget: usize = 0x901; // bool
                pub const m_qNoiseDelta: usize = 0x910; // Quaternion
                pub const m_hInfoFan: usize = 0x920; // CHandle<CInfoFan>
                pub const m_flForce: usize = 0x924; // float32
                pub const m_bFalloff: usize = 0x928; // bool
                pub const m_RampTimer: usize = 0x930; // CountdownTimer
                pub const m_vFanOriginWS: usize = 0x948; // VectorWS
                pub const m_vFanOriginLS: usize = 0x954; // Vector
                pub const m_vFanEndLS: usize = 0x960; // Vector
                pub const m_vNoiseDirectionTarget: usize = 0x96C; // Vector
                pub const m_iszInfoFan: usize = 0x978; // CUtlSymbolLarge
                pub const m_flRopeForceScale: usize = 0x980; // float32
                pub const m_flParticleForceScale: usize = 0x984; // float32
                pub const m_flPlayerForce: usize = 0x988; // float32
                pub const m_bPlayerWindblock: usize = 0x98C; // bool
                pub const m_flNPCForce: usize = 0x990; // float32
                pub const m_flRampTime: usize = 0x994; // float32
                pub const m_fNoiseDegrees: usize = 0x998; // float32
                pub const m_fNoiseSpeed: usize = 0x99C; // float32
                pub const m_bPushPlayer: usize = 0x9A0; // bool
                pub const m_bRampDown: usize = 0x9A1; // bool
                pub const m_nManagerFanIdx: usize = 0x9A4; // int32
            }
            // Parent: CPhysHinge
            // Field count: 0
            pub mod CPhysHingeAlias_phys_hinge_local {
            }
            // Parent: CBaseEntity
            // Field count: 6
            pub mod CLogicCase {
                pub const m_nCase: usize = 0x4A8; // CUtlSymbolLarge[32]
                pub const m_nShuffleCases: usize = 0x5A8; // int32
                pub const m_nLastShuffleCase: usize = 0x5AC; // int32
                pub const m_uchShuffleCaseMap: usize = 0x5B0; // uint8[32]
                pub const m_OnCase: usize = 0x5D0; // CEntityIOOutput[32]
                pub const m_OnDefault: usize = 0x8D0; // CEntityOutputTemplate<CUtlString>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            // MPulseEditorHeaderHelper
            pub mod CPulseCell_Outflow_PlayVOLine {
                pub const m_OnFinished: usize = 0xD8; // CPulse_ResumePoint
            }
            // Parent: CPointEntity
            // Field count: 2
            pub mod CInfoGameEventProxy {
                pub const m_iszEventName: usize = 0x4A8; // CUtlSymbolLarge
                pub const m_flRange: usize = 0x4B0; // float32
            }
            // Parent: None
            // Field count: 0
            pub mod CTestPulseIOComponent_DerivedAPI {
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            pub mod CWeaponBizon {
            }
            // Parent: CRuleBrushEntity
            // Field count: 4
            pub mod CGamePlayerZone {
                pub const m_OnPlayerInZone: usize = 0x778; // CEntityIOOutput
                pub const m_OnPlayerOutZone: usize = 0x790; // CEntityIOOutput
                pub const m_PlayersInCount: usize = 0x7A8; // CEntityOutputTemplate<int32>
                pub const m_PlayersOutCount: usize = 0x7C8; // CEntityOutputTemplate<int32>
            }
            // Parent: CBaseModelEntity
            // Field count: 16
            pub mod CBaseToggle {
                pub const m_toggle_state: usize = 0x770; // TOGGLE_STATE
                pub const m_flMoveDistance: usize = 0x774; // float32
                pub const m_flWait: usize = 0x778; // float32
                pub const m_flLip: usize = 0x77C; // float32
                pub const m_bAlwaysFireBlockedOutputs: usize = 0x780; // bool
                pub const m_vecPosition1: usize = 0x784; // Vector
                pub const m_vecPosition2: usize = 0x790; // Vector
                pub const m_vecMoveAng: usize = 0x79C; // QAngle
                pub const m_vecAngle1: usize = 0x7A8; // QAngle
                pub const m_vecAngle2: usize = 0x7B4; // QAngle
                pub const m_flHeight: usize = 0x7C0; // float32
                pub const m_hActivator: usize = 0x7C4; // CHandle<CBaseEntity>
                pub const m_vecFinalDest: usize = 0x7C8; // Vector
                pub const m_vecFinalAngle: usize = 0x7D4; // QAngle
                pub const m_movementType: usize = 0x7E0; // int32
                pub const m_sMaster: usize = 0x7E8; // CUtlSymbolLarge
            }
            // Parent: None
            // Field count: 2
            pub mod CPulseServerCursor {
                pub const m_hActivator: usize = 0xE8; // CHandle<CBaseEntity>
                pub const m_hCaller: usize = 0xEC; // CHandle<CBaseEntity>
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CPulseCell_PlaySequence {
                pub const m_SequenceName: usize = 0xD8; // CUtlString
                pub const m_PulseAnimEvents: usize = 0xE0; // PulseNodeDynamicOutflows_t
                pub const m_OnFinished: usize = 0xF8; // CPulse_ResumePoint
            }
            // Parent: CBaseModelEntity
            // Field count: 24
            pub mod CInferno {
                pub const m_firePositions: usize = 0x770; // VectorWS[64]
                pub const m_fireParentPositions: usize = 0xA70; // VectorWS[64]
                pub const m_bFireIsBurning: usize = 0xD70; // bool[64]
                pub const m_BurnNormal: usize = 0xDB0; // Vector[64]
                pub const m_fireCount: usize = 0x10B0; // int32
                pub const m_nInfernoType: usize = 0x10B4; // int32
                pub const m_nFireEffectTickBegin: usize = 0x10B8; // int32
                pub const m_nFireLifetime: usize = 0x10BC; // float32
                pub const m_bInPostEffectTime: usize = 0x10C0; // bool
                pub const m_bWasCreatedInSmoke: usize = 0x10C1; // bool
                pub const m_extent: usize = 0x12C8; // Extent
                pub const m_damageTimer: usize = 0x12E0; // CountdownTimer
                pub const m_damageRampTimer: usize = 0x12F8; // CountdownTimer
                pub const m_splashVelocity: usize = 0x1310; // Vector
                pub const m_InitialSplashVelocity: usize = 0x131C; // Vector
                pub const m_startPos: usize = 0x1328; // VectorWS
                pub const m_vecOriginalSpawnLocation: usize = 0x1334; // VectorWS
                pub const m_activeTimer: usize = 0x1340; // IntervalTimer
                pub const m_fireSpawnOffset: usize = 0x1350; // int32
                pub const m_nMaxFlames: usize = 0x1354; // int32
                pub const m_nSpreadCount: usize = 0x1358; // int32
                pub const m_BookkeepingTimer: usize = 0x1360; // CountdownTimer
                pub const m_NextSpreadTimer: usize = 0x1378; // CountdownTimer
                pub const m_nSourceItemDefIndex: usize = 0x1390; // uint16
            }
            // Parent: CEntityComponent
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CTouchExpansionComponent {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Outflow_PlaySceneBase {
                pub const m_OnFinished: usize = 0xD8; // CPulse_ResumePoint
                pub const m_Triggers: usize = 0x120; // CUtlVector<CPulse_OutflowConnection>
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_LerpCameraSettings {
                pub const m_flSeconds: usize = 0x120; // float32
                pub const m_Start: usize = 0x124; // PointCameraSettings_t
                pub const m_End: usize = 0x134; // PointCameraSettings_t
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            pub mod CWeaponSCAR20 {
            }
            // Parent: CBaseModelEntity
            // Field count: 3
            pub mod CFuncInteractionLayerClip {
                pub const m_bDisabled: usize = 0x770; // bool
                pub const m_iszInteractsAs: usize = 0x778; // CUtlSymbolLarge
                pub const m_iszInteractsWith: usize = 0x780; // CUtlSymbolLarge
            }
            // Parent: CPlayer_UseServices
            // Field count: 0
            pub mod CCSObserver_UseServices {
            }
            // Parent: CBaseTrigger
            // Field count: 2
            pub mod CTriggerDetectBulletFire {
                pub const m_bPlayerFireOnly: usize = 0x8E8; // bool
                pub const m_OnDetectedBulletFire: usize = 0x8F0; // CEntityIOOutput
            }
            // Parent: CPlayer_UseServices
            // Field count: 3
            pub mod CCSPlayer_UseServices {
                pub const m_hLastKnownUseEntity: usize = 0x48; // CHandle<CBaseEntity>
                pub const m_flLastUseTimeStamp: usize = 0x4C; // GameTime_t
                pub const m_flTimeLastUsedWindow: usize = 0x50; // GameTime_t
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
            pub mod CInfoFan {
                pub const m_fFanForceMaxRadius: usize = 0x4E8; // float32
                pub const m_fFanForceMinRadius: usize = 0x4EC; // float32
                pub const m_flCurveDistRange: usize = 0x4F0; // float32
                pub const m_FanForceCurveString: usize = 0x4F8; // CUtlSymbolLarge
            }
            // Parent: None
            // Field count: 0
            pub mod CCSWeaponBase_API {
            }
            // Parent: None
            // Field count: 8
            pub mod CGameRules {
                pub const __m_pChainEntity: usize = 0x8; // CNetworkVarChainer
                pub const m_szQuestName: usize = 0x30; // char[128]
                pub const m_nQuestPhase: usize = 0xB0; // int32
                pub const m_nLastMatchTime: usize = 0xB4; // uint32
                pub const m_nLastMatchTime_MatchID64: usize = 0xB8; // uint64
                pub const m_nTotalPausedTicks: usize = 0xC0; // int32
                pub const m_nPauseStartTick: usize = 0xC4; // int32
                pub const m_bGamePaused: usize = 0xC8; // bool
            }
            // Parent: None
            // Field count: 24
            pub mod CFish {
                pub const m_pool: usize = 0x960; // CHandle<CFishPool>
                pub const m_id: usize = 0x964; // uint32
                pub const m_x: usize = 0x968; // float32
                pub const m_y: usize = 0x96C; // float32
                pub const m_z: usize = 0x970; // float32
                pub const m_angle: usize = 0x974; // float32
                pub const m_angleChange: usize = 0x978; // float32
                pub const m_forward: usize = 0x97C; // Vector
                pub const m_perp: usize = 0x988; // Vector
                pub const m_poolOrigin: usize = 0x994; // VectorWS
                pub const m_waterLevel: usize = 0x9A0; // float32
                pub const m_speed: usize = 0x9A4; // float32
                pub const m_desiredSpeed: usize = 0x9A8; // float32
                pub const m_calmSpeed: usize = 0x9AC; // float32
                pub const m_panicSpeed: usize = 0x9B0; // float32
                pub const m_avoidRange: usize = 0x9B4; // float32
                pub const m_turnTimer: usize = 0x9B8; // CountdownTimer
                pub const m_turnClockwise: usize = 0x9D0; // bool
                pub const m_goTimer: usize = 0x9D8; // CountdownTimer
                pub const m_moveTimer: usize = 0x9F0; // CountdownTimer
                pub const m_panicTimer: usize = 0xA08; // CountdownTimer
                pub const m_disperseTimer: usize = 0xA20; // CountdownTimer
                pub const m_proximityTimer: usize = 0xA38; // CountdownTimer
                pub const m_visible: usize = 0xA50; // CUtlVector<CFish*>
            }
            // Parent: CBot
            // Field count: 140
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
                pub const m_stateTimestamp: usize = 0x5C8; // float32
                pub const m_isAttacking: usize = 0x5CC; // bool
                pub const m_isOpeningDoor: usize = 0x5CD; // bool
                pub const m_taskEntity: usize = 0x5D4; // CHandle<CBaseEntity>
                pub const m_goalPosition: usize = 0x5E4; // VectorWS
                pub const m_goalEntity: usize = 0x5F0; // CHandle<CBaseEntity>
                pub const m_avoid: usize = 0x5F4; // CHandle<CBaseEntity>
                pub const m_avoidTimestamp: usize = 0x5F8; // float32
                pub const m_isStopping: usize = 0x5FC; // bool
                pub const m_hasVisitedEnemySpawn: usize = 0x5FD; // bool
                pub const m_stillTimer: usize = 0x600; // IntervalTimer
                pub const m_bEyeAnglesUnderPathFinderControl: usize = 0x610; // bool
                pub const m_pathIndex: usize = 0x4F08; // int32
                pub const m_areaEnteredTimestamp: usize = 0x4F0C; // GameTime_t
                pub const m_repathTimer: usize = 0x4F10; // CountdownTimer
                pub const m_avoidFriendTimer: usize = 0x4F28; // CountdownTimer
                pub const m_isFriendInTheWay: usize = 0x4F40; // bool
                pub const m_politeTimer: usize = 0x4F48; // CountdownTimer
                pub const m_isWaitingBehindFriend: usize = 0x4F60; // bool
                pub const m_pathLadderEnd: usize = 0x4F8C; // float32
                pub const m_mustRunTimer: usize = 0x4FD8; // CountdownTimer
                pub const m_waitTimer: usize = 0x4FF0; // CountdownTimer
                pub const m_updateTravelDistanceTimer: usize = 0x5008; // CountdownTimer
                pub const m_playerTravelDistance: usize = 0x5020; // float32[64]
                pub const m_travelDistancePhase: usize = 0x5120; // uint8
                pub const m_hostageEscortCount: usize = 0x52B8; // uint8
                pub const m_hostageEscortCountTimestamp: usize = 0x52BC; // float32
                pub const m_desiredTeam: usize = 0x52C0; // int32
                pub const m_hasJoined: usize = 0x52C4; // bool
                pub const m_isWaitingForHostage: usize = 0x52C5; // bool
                pub const m_inhibitWaitingForHostageTimer: usize = 0x52C8; // CountdownTimer
                pub const m_waitForHostageTimer: usize = 0x52E0; // CountdownTimer
                pub const m_noisePosition: usize = 0x52F8; // VectorWS
                pub const m_noiseTravelDistance: usize = 0x5304; // float32
                pub const m_noiseTimestamp: usize = 0x5308; // float32
                pub const m_noiseSource: usize = 0x5310; // CCSPlayerPawn*
                pub const m_noiseBendTimer: usize = 0x5328; // CountdownTimer
                pub const m_bentNoisePosition: usize = 0x5340; // VectorWS
                pub const m_bendNoisePositionValid: usize = 0x534C; // bool
                pub const m_lookAroundStateTimestamp: usize = 0x5350; // float32
                pub const m_lookAheadAngle: usize = 0x5354; // float32
                pub const m_lookUpAngle: usize = 0x5358; // float32
                pub const m_forwardAngle: usize = 0x535C; // float32
                pub const m_inhibitLookAroundTimestamp: usize = 0x5360; // float32
                pub const m_lookAtSpot: usize = 0x5368; // VectorWS
                pub const m_lookAtSpotDuration: usize = 0x5378; // float32
                pub const m_lookAtSpotTimestamp: usize = 0x537C; // float32
                pub const m_lookAtSpotAngleTolerance: usize = 0x5380; // float32
                pub const m_lookAtSpotClearIfClose: usize = 0x5384; // bool
                pub const m_lookAtSpotAttack: usize = 0x5385; // bool
                pub const m_lookAtDesc: usize = 0x5388; // char*
                pub const m_peripheralTimestamp: usize = 0x5390; // float32
                pub const m_approachPointCount: usize = 0x5518; // uint8
                pub const m_approachPointViewPosition: usize = 0x551C; // VectorWS
                pub const m_viewSteadyTimer: usize = 0x5528; // IntervalTimer
                pub const m_tossGrenadeTimer: usize = 0x5540; // CountdownTimer
                pub const m_isAvoidingGrenade: usize = 0x5560; // CountdownTimer
                pub const m_spotCheckTimestamp: usize = 0x5580; // float32
                pub const m_checkedHidingSpotCount: usize = 0x5988; // int32
                pub const m_lookPitch: usize = 0x598C; // float32
                pub const m_lookPitchVel: usize = 0x5990; // float32
                pub const m_lookYaw: usize = 0x5994; // float32
                pub const m_lookYawVel: usize = 0x5998; // float32
                pub const m_targetSpot: usize = 0x599C; // VectorWS
                pub const m_targetSpotVelocity: usize = 0x59A8; // Vector
                pub const m_targetSpotPredicted: usize = 0x59B4; // VectorWS
                pub const m_aimError: usize = 0x59C0; // QAngle
                pub const m_aimGoal: usize = 0x59CC; // QAngle
                pub const m_targetSpotTime: usize = 0x59D8; // GameTime_t
                pub const m_aimFocus: usize = 0x59DC; // float32
                pub const m_aimFocusInterval: usize = 0x59E0; // float32
                pub const m_aimFocusNextUpdate: usize = 0x59E4; // GameTime_t
                pub const m_ignoreEnemiesTimer: usize = 0x59F0; // CountdownTimer
                pub const m_enemy: usize = 0x5A08; // CHandle<CCSPlayerPawn>
                pub const m_isEnemyVisible: usize = 0x5A0C; // bool
                pub const m_visibleEnemyParts: usize = 0x5A0D; // uint8
                pub const m_lastEnemyPosition: usize = 0x5A10; // VectorWS
                pub const m_lastSawEnemyTimestamp: usize = 0x5A1C; // float32
                pub const m_firstSawEnemyTimestamp: usize = 0x5A20; // float32
                pub const m_currentEnemyAcquireTimestamp: usize = 0x5A24; // float32
                pub const m_enemyDeathTimestamp: usize = 0x5A28; // float32
                pub const m_friendDeathTimestamp: usize = 0x5A2C; // float32
                pub const m_isLastEnemyDead: usize = 0x5A30; // bool
                pub const m_nearbyEnemyCount: usize = 0x5A34; // int32
                pub const m_bomber: usize = 0x5C40; // CHandle<CCSPlayerPawn>
                pub const m_nearbyFriendCount: usize = 0x5C44; // int32
                pub const m_closestVisibleFriend: usize = 0x5C48; // CHandle<CCSPlayerPawn>
                pub const m_closestVisibleHumanFriend: usize = 0x5C4C; // CHandle<CCSPlayerPawn>
                pub const m_attentionInterval: usize = 0x5C50; // IntervalTimer
                pub const m_attacker: usize = 0x5C60; // CHandle<CCSPlayerPawn>
                pub const m_attackedTimestamp: usize = 0x5C64; // float32
                pub const m_burnedByFlamesTimer: usize = 0x5C68; // IntervalTimer
                pub const m_lastVictimID: usize = 0x5C78; // int32
                pub const m_isAimingAtEnemy: usize = 0x5C7C; // bool
                pub const m_isRapidFiring: usize = 0x5C7D; // bool
                pub const m_equipTimer: usize = 0x5C80; // IntervalTimer
                pub const m_zoomTimer: usize = 0x5C90; // CountdownTimer
                pub const m_fireWeaponTimestamp: usize = 0x5CA8; // GameTime_t
                pub const m_lookForWeaponsOnGroundTimer: usize = 0x5CB0; // CountdownTimer
                pub const m_bIsSleeping: usize = 0x5CC8; // bool
                pub const m_isEnemySniperVisible: usize = 0x5CC9; // bool
                pub const m_sawEnemySniperTimer: usize = 0x5CD0; // CountdownTimer
                pub const m_enemyQueueIndex: usize = 0x5D88; // uint8
                pub const m_enemyQueueCount: usize = 0x5D89; // uint8
                pub const m_enemyQueueAttendIndex: usize = 0x5D8A; // uint8
                pub const m_isStuck: usize = 0x5D8B; // bool
                pub const m_stuckTimestamp: usize = 0x5D8C; // GameTime_t
                pub const m_stuckSpot: usize = 0x5D90; // VectorWS
                pub const m_wiggleTimer: usize = 0x5DA0; // CountdownTimer
                pub const m_stuckJumpTimer: usize = 0x5DB8; // CountdownTimer
                pub const m_nextCleanupCheckTimestamp: usize = 0x5DD0; // GameTime_t
                pub const m_avgVel: usize = 0x5DD4; // float32[10]
                pub const m_avgVelIndex: usize = 0x5DFC; // int32
                pub const m_avgVelCount: usize = 0x5E00; // int32
                pub const m_lastOrigin: usize = 0x5E04; // VectorWS
                pub const m_lastRadioRecievedTimestamp: usize = 0x5E14; // float32
                pub const m_lastRadioSentTimestamp: usize = 0x5E18; // float32
                pub const m_radioSubject: usize = 0x5E1C; // CHandle<CCSPlayerPawn>
                pub const m_radioPosition: usize = 0x5E20; // VectorWS
                pub const m_voiceEndTimestamp: usize = 0x5E2C; // float32
                pub const m_lastValidReactionQueueFrame: usize = 0x5E38; // int32
            }
            // Parent: CBaseEntity
            // Field count: 2
            pub mod CHandleTest {
                pub const m_Handle: usize = 0x4A8; // CHandle<CBaseEntity>
                pub const m_bSendHandle: usize = 0x4AC; // bool
            }
            // Parent: CBaseEntity
            // Field count: 48
            pub mod CLogicNPCCounter {
                pub const m_OnMinCountAll: usize = 0x4A8; // CEntityIOOutput
                pub const m_OnMaxCountAll: usize = 0x4C0; // CEntityIOOutput
                pub const m_OnFactorAll: usize = 0x4D8; // CEntityOutputTemplate<float32>
                pub const m_OnMinPlayerDistAll: usize = 0x4F8; // CEntityOutputTemplate<float32>
                pub const m_OnMinCount_1: usize = 0x518; // CEntityIOOutput
                pub const m_OnMaxCount_1: usize = 0x530; // CEntityIOOutput
                pub const m_OnFactor_1: usize = 0x548; // CEntityOutputTemplate<float32>
                pub const m_OnMinPlayerDist_1: usize = 0x568; // CEntityOutputTemplate<float32>
                pub const m_OnMinCount_2: usize = 0x588; // CEntityIOOutput
                pub const m_OnMaxCount_2: usize = 0x5A0; // CEntityIOOutput
                pub const m_OnFactor_2: usize = 0x5B8; // CEntityOutputTemplate<float32>
                pub const m_OnMinPlayerDist_2: usize = 0x5D8; // CEntityOutputTemplate<float32>
                pub const m_OnMinCount_3: usize = 0x5F8; // CEntityIOOutput
                pub const m_OnMaxCount_3: usize = 0x610; // CEntityIOOutput
                pub const m_OnFactor_3: usize = 0x628; // CEntityOutputTemplate<float32>
                pub const m_OnMinPlayerDist_3: usize = 0x648; // CEntityOutputTemplate<float32>
                pub const m_hSource: usize = 0x668; // CEntityHandle
                pub const m_iszSourceEntityName: usize = 0x670; // CUtlSymbolLarge
                pub const m_flDistanceMax: usize = 0x678; // float32
                pub const m_bDisabled: usize = 0x67C; // bool
                pub const m_nMinCountAll: usize = 0x680; // int32
                pub const m_nMaxCountAll: usize = 0x684; // int32
                pub const m_nMinFactorAll: usize = 0x688; // int32
                pub const m_nMaxFactorAll: usize = 0x68C; // int32
                pub const m_iszNPCClassname_1: usize = 0x698; // CUtlSymbolLarge
                pub const m_nNPCState_1: usize = 0x6A0; // int32
                pub const m_bInvertState_1: usize = 0x6A4; // bool
                pub const m_nMinCount_1: usize = 0x6A8; // int32
                pub const m_nMaxCount_1: usize = 0x6AC; // int32
                pub const m_nMinFactor_1: usize = 0x6B0; // int32
                pub const m_nMaxFactor_1: usize = 0x6B4; // int32
                pub const m_flDefaultDist_1: usize = 0x6BC; // float32
                pub const m_iszNPCClassname_2: usize = 0x6C0; // CUtlSymbolLarge
                pub const m_nNPCState_2: usize = 0x6C8; // int32
                pub const m_bInvertState_2: usize = 0x6CC; // bool
                pub const m_nMinCount_2: usize = 0x6D0; // int32
                pub const m_nMaxCount_2: usize = 0x6D4; // int32
                pub const m_nMinFactor_2: usize = 0x6D8; // int32
                pub const m_nMaxFactor_2: usize = 0x6DC; // int32
                pub const m_flDefaultDist_2: usize = 0x6E4; // float32
                pub const m_iszNPCClassname_3: usize = 0x6E8; // CUtlSymbolLarge
                pub const m_nNPCState_3: usize = 0x6F0; // int32
                pub const m_bInvertState_3: usize = 0x6F4; // bool
                pub const m_nMinCount_3: usize = 0x6F8; // int32
                pub const m_nMaxCount_3: usize = 0x6FC; // int32
                pub const m_nMinFactor_3: usize = 0x700; // int32
                pub const m_nMaxFactor_3: usize = 0x704; // int32
                pub const m_flDefaultDist_3: usize = 0x70C; // float32
            }
            // Parent: CPlayerPawnComponent
            // Field count: 5
            pub mod CCSPlayer_RadioServices {
                pub const m_flGotHostageTalkTimer: usize = 0x48; // GameTime_t
                pub const m_flDefusingTalkTimer: usize = 0x4C; // GameTime_t
                pub const m_flC4PlantTalkTimer: usize = 0x50; // GameTime_t
                pub const m_flRadioTokenSlots: usize = 0x54; // GameTime_t[3]
                pub const m_bIgnoreRadio: usize = 0x60; // bool
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            pub mod CWeaponSG556 {
            }
            // Parent: CPhysConstraint
            // Field count: 9
            pub mod CRagdollConstraint {
                pub const m_xmin: usize = 0x508; // float32
                pub const m_xmax: usize = 0x50C; // float32
                pub const m_ymin: usize = 0x510; // float32
                pub const m_ymax: usize = 0x514; // float32
                pub const m_zmin: usize = 0x518; // float32
                pub const m_zmax: usize = 0x51C; // float32
                pub const m_xfriction: usize = 0x520; // float32
                pub const m_yfriction: usize = 0x524; // float32
                pub const m_zfriction: usize = 0x528; // float32
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
                pub const m_flScale: usize = 0x4A8; // float32
            }
            // Parent: CPointCamera
            // Field count: 1
            pub mod CPointCameraVFOV {
                pub const m_flVerticalFOV: usize = 0x508; // float32
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
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPrecipitationVData {
                pub const m_szParticlePrecipitationEffect: usize = 0x28; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                pub const m_szParticlePrecipitationPuddleEffect: usize = 0x108; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                pub const m_szParticlePrecipitationPostEffect: usize = 0x1E8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                pub const m_flInnerDistance: usize = 0x2C8; // float32
                pub const m_nAttachType: usize = 0x2CC; // ParticleAttachment_t
                pub const m_bBatchSameVolumeType: usize = 0x2D0; // bool
                pub const m_nRTEnvCP: usize = 0x2D4; // int32
                pub const m_nRTEnvCPComponent: usize = 0x2D8; // int32
                pub const m_szModifier: usize = 0x2E0; // CUtlString
                pub const m_nUseSnapshotFromSurfaceGraph: usize = 0x2E8; // int32
                pub const m_snapshotFilter: usize = 0x2EC; // PrecipitationFilter_t
            }
            // Parent: CBaseToggle
            // Field count: 14
            pub mod CFuncMoveLinear {
                pub const m_authoredPosition: usize = 0x7F0; // MoveLinearAuthoredPos_t
                pub const m_angMoveEntitySpace: usize = 0x7F4; // QAngle
                pub const m_vecMoveDirParentSpace: usize = 0x800; // Vector
                pub const m_soundStart: usize = 0x810; // CGameSoundEventName
                pub const m_soundStop: usize = 0x818; // CGameSoundEventName
                pub const m_currentSound: usize = 0x820; // CUtlSymbolLarge
                pub const m_flBlockDamage: usize = 0x828; // float32
                pub const m_flStartPosition: usize = 0x82C; // float32
                pub const m_OnFullyOpen: usize = 0x838; // CEntityIOOutput
                pub const m_OnFullyClosed: usize = 0x850; // CEntityIOOutput
                pub const m_flSpeed: usize = 0x868; // float32
                pub const m_bCreateMovableNavMesh: usize = 0x86C; // bool
                pub const m_bAllowMovableNavMeshDockingOnEntireEntity: usize = 0x86D; // bool
                pub const m_bCreateNavObstacle: usize = 0x86E; // bool
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
            // MPropertyDescription
            pub mod CPulseCell_WaitForObservable {
                pub const m_Condition: usize = 0xD8; // CPulseObservableExpression<bool>
                pub const m_OnTrue: usize = 0x150; // CPulse_ResumePoint
            }
            // Parent: None
            // Field count: 1
            pub mod CScriptItem {
                pub const m_MoveTypeOverride: usize = 0xA00; // MoveType_t
            }
            // Parent: CDynamicProp
            // Field count: 0
            pub mod CDynamicPropAlias_prop_dynamic_override {
            }
            // Parent: CBaseToggle
            // Field count: 13
            pub mod CBaseTrigger {
                pub const m_OnStartTouch: usize = 0x7F0; // CEntityIOOutput
                pub const m_OnStartTouchAll: usize = 0x808; // CEntityIOOutput
                pub const m_OnEndTouch: usize = 0x820; // CEntityIOOutput
                pub const m_OnEndTouchAll: usize = 0x838; // CEntityIOOutput
                pub const m_OnTouching: usize = 0x850; // CEntityIOOutput
                pub const m_OnTouchingEachEntity: usize = 0x868; // CEntityIOOutput
                pub const m_OnNotTouching: usize = 0x880; // CEntityIOOutput
                pub const m_OnTouchingChanged: usize = 0x898; // CEntityIOOutput
                pub const m_hTouchingEntities: usize = 0x8B0; // CUtlVector<CHandle<CBaseEntity>>
                pub const m_iFilterName: usize = 0x8C8; // CUtlSymbolLarge
                pub const m_hFilter: usize = 0x8D0; // CHandle<CBaseFilter>
                pub const m_bDisabled: usize = 0x8D4; // bool
                pub const m_bUseAsyncQueries: usize = 0x8E0; // bool
            }
            // Parent: CPointEntity
            // Field count: 7
            pub mod CPointPush {
                pub const m_bEnabled: usize = 0x4A8; // bool
                pub const m_flMagnitude: usize = 0x4AC; // float32
                pub const m_flRadius: usize = 0x4B0; // float32
                pub const m_flInnerRadius: usize = 0x4B4; // float32
                pub const m_flConeOfInfluence: usize = 0x4B8; // float32
                pub const m_iszFilterName: usize = 0x4C0; // CUtlSymbolLarge
                pub const m_hFilter: usize = 0x4C8; // CHandle<CBaseFilter>
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
            pub mod CPlayerPing {
                pub const m_hPlayer: usize = 0x4B0; // CHandle<CCSPlayerPawn>
                pub const m_hPingedEntity: usize = 0x4B4; // CHandle<CBaseEntity>
                pub const m_iType: usize = 0x4B8; // int32
                pub const m_bUrgent: usize = 0x4BC; // bool
                pub const m_szPlaceName: usize = 0x4BD; // char[18]
            }
            // Parent: CEntityComponent
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CHitboxComponent {
                pub const m_flBoundsExpandRadius: usize = 0x14; // float32
            }
            // Parent: CBaseModelEntity
            // Field count: 21
            pub mod CRopeKeyframe {
                pub const m_RopeFlags: usize = 0x778; // uint16
                pub const m_iNextLinkName: usize = 0x780; // CUtlSymbolLarge
                pub const m_Slack: usize = 0x788; // int16
                pub const m_Width: usize = 0x78C; // float32
                pub const m_TextureScale: usize = 0x790; // float32
                pub const m_nSegments: usize = 0x794; // uint8
                pub const m_bConstrainBetweenEndpoints: usize = 0x795; // bool
                pub const m_strRopeMaterialModel: usize = 0x798; // CUtlSymbolLarge
                pub const m_iRopeMaterialModelIndex: usize = 0x7A0; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_Subdiv: usize = 0x7A8; // uint8
                pub const m_nChangeCount: usize = 0x7A9; // uint8
                pub const m_RopeLength: usize = 0x7AA; // int16
                pub const m_fLockedPoints: usize = 0x7AC; // uint8
                pub const m_bCreatedFromMapFile: usize = 0x7AD; // bool
                pub const m_flScrollSpeed: usize = 0x7B0; // float32
                pub const m_bStartPointValid: usize = 0x7B4; // bool
                pub const m_bEndPointValid: usize = 0x7B5; // bool
                pub const m_hStartPoint: usize = 0x7B8; // CHandle<CBaseEntity>
                pub const m_hEndPoint: usize = 0x7BC; // CHandle<CBaseEntity>
                pub const m_iStartAttachment: usize = 0x7C0; // AttachmentHandle_t
                pub const m_iEndAttachment: usize = 0x7C1; // AttachmentHandle_t
            }
            // Parent: CBaseCSGrenade
            // Field count: 0
            pub mod CSmokeGrenade {
            }
            // Parent: CBaseAnimGraph
            // Field count: 10
            pub mod CBaseCombatCharacter {
                pub const m_bForceServerRagdoll: usize = 0x960; // bool
                pub const m_hMyWearables: usize = 0x968; // CNetworkUtlVectorBase<CHandle<CEconWearable>>
                pub const m_impactEnergyScale: usize = 0x980; // float32
                pub const m_bApplyStressDamage: usize = 0x984; // bool
                pub const m_bDeathEventsDispatched: usize = 0x985; // bool
                pub const m_vecRelationships: usize = 0x9C8; // CUtlVector<RelationshipOverride_t>
                pub const m_strRelationships: usize = 0x9E0; // CUtlSymbolLarge
                pub const m_eHull: usize = 0x9E8; // Hull_t
                pub const m_nNavHullIdx: usize = 0x9EC; // uint32
                pub const m_movementStats: usize = 0x9F0; // CMovementStatsProperty
            }
            // Parent: CBaseEntity
            // Field count: 1
            pub mod CLogicGameStateReport {
                pub const m_bDisabled: usize = 0x4A8; // bool
            }
            // Parent: None
            // Field count: 3
            pub mod ServerAuthoritativeWeaponSlot_t {
                pub const unClass: usize = 0x30; // uint16
                pub const unSlot: usize = 0x32; // uint16
                pub const unItemDefIdx: usize = 0x34; // uint16
            }
            // Parent: CEntityComponent
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPathQueryComponent {
            }
            // Parent: CBaseEntity
            // Field count: 7
            pub mod CLogicRelay {
                pub const m_OnSpawn: usize = 0x4A8; // CEntityIOOutput
                pub const m_OnTrigger: usize = 0x4C0; // CEntityIOOutput
                pub const m_bDisabled: usize = 0x4D8; // bool
                pub const m_bWaitForRefire: usize = 0x4D9; // bool
                pub const m_bTriggerOnce: usize = 0x4DA; // bool
                pub const m_bFastRetrigger: usize = 0x4DB; // bool
                pub const m_bPassthoughCaller: usize = 0x4DC; // bool
            }
            // Parent: None
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
            // Parent: CBaseEntity
            // Field count: 23
            pub mod CTestPulseIO {
                pub const m_OnVariantVoid: usize = 0x4A8; // CEntityIOOutput
                pub const m_OnVariantBool: usize = 0x4C0; // CEntityOutputTemplate<bool>
                pub const m_OnVariantInt: usize = 0x4E0; // CEntityOutputTemplate<int32>
                pub const m_OnVariantFloat: usize = 0x500; // CEntityOutputTemplate<float32>
                pub const m_OnVariantString: usize = 0x520; // CEntityOutputTemplate<CUtlSymbolLarge>
                pub const m_OnVariantColor: usize = 0x540; // CEntityOutputTemplate<Color>
                pub const m_OnVariantVector: usize = 0x560; // CEntityOutputTemplate<Vector>
                pub const m_bAllowEmptyInputs: usize = 0x588; // bool
                pub const m_TestComponent: usize = 0x590; // CTestPulseIOComponent_Derived
                pub const m_OnInternalTestVoid: usize = 0x5C0; // CEntityIOOutput
                pub const m_OnInternalTestBool: usize = 0x5D8; // CEntityOutputTemplate<bool>
                pub const m_OnInternalTestInt: usize = 0x5F8; // CEntityOutputTemplate<int32>
                pub const m_OnInternalTestFloat: usize = 0x618; // CEntityOutputTemplate<float32>
                pub const m_OnInternalTestString: usize = 0x638; // CEntityOutputTemplate<CUtlSymbolLarge>
                pub const m_OnInternalTestColor: usize = 0x658; // CEntityOutputTemplate<Color>
                pub const m_OnInternalTestVector: usize = 0x678; // CEntityOutputTemplate<Vector>
                pub const m_OnInternalTestEntityName: usize = 0x6A0; // CEntityOutputTemplate<CEntityNameString>
                pub const m_OnInternalTestEntityHandle: usize = 0x6C0; // CEntityOutputTemplate<CHandle<CBaseEntity>>
                pub const m_OnInternalTestSchemaEnum: usize = 0x6E0; // CEntityOutputTemplate<TestInputOutputCombinationsEnum_t>
                pub const m_OnInternalTestFloatString: usize = 0x700; // CEntityOutputTemplate<CTestPulseIO::FloatStringArgs_t>
                pub const m_OnInternalTestEntityNameString: usize = 0x728; // CEntityOutputTemplate<CTestPulseIO::EntityNameStringArgs_t>
                pub const m_OnInternalTestEntityHandleInt: usize = 0x750; // CEntityOutputTemplate<CTestPulseIO::EntityHandleIntArgs_t>
                pub const m_OnInternalTestStringStringString: usize = 0x770; // CEntityOutputTemplate<CTestPulseIO::ThreeStringArgs_t>
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
                pub const m_hEntity: usize = 0x4A8; // CHandle<CBaseEntity>
                pub const m_iFilterName: usize = 0x4B0; // CUtlSymbolLarge
                pub const m_hFilter: usize = 0x4B8; // CHandle<CBaseFilter>
                pub const m_iRefName: usize = 0x4C0; // CUtlSymbolLarge
                pub const m_hReference: usize = 0x4C8; // CHandle<CBaseEntity>
                pub const m_FindMethod: usize = 0x4CC; // EntFinderMethod_t
                pub const m_OnFoundEntity: usize = 0x4D0; // CEntityIOOutput
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
            pub mod CKnife {
                pub const m_bFirstAttack: usize = 0x1050; // bool
            }
            // Parent: CBaseEntity
            // Field count: 5
            pub mod CLogicPlayerProxy {
                pub const m_PlayerHasAmmo: usize = 0x4A8; // CEntityIOOutput
                pub const m_PlayerHasNoAmmo: usize = 0x4C0; // CEntityIOOutput
                pub const m_PlayerDied: usize = 0x4D8; // CEntityIOOutput
                pub const m_RequestedPlayerHealth: usize = 0x4F0; // CEntityOutputTemplate<int32>
                pub const m_hPlayer: usize = 0x510; // CHandle<CBaseEntity>
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
            pub mod CCSPlayer_HostageServices {
                pub const m_hCarriedHostage: usize = 0x48; // CHandle<CBaseEntity>
                pub const m_hCarriedHostageProp: usize = 0x4C; // CHandle<CBaseEntity>
            }
            // Parent: None
            // Field count: 0
            pub mod CEnvLightProbeVolumeAPI {
            }
            // Parent: CEntityComponent
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
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
                pub const m_hSoundscape: usize = 0x8E8; // CHandle<CEnvSoundscapeTriggerable>
                pub const m_SoundscapeName: usize = 0x8F0; // CUtlSymbolLarge
                pub const m_spectators: usize = 0x8F8; // CUtlVector<CHandle<CBasePlayerPawn>>
            }
            // Parent: None
            // Field count: 0
            pub mod CBaseGrenade_API {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Outflow_PlayVOLine__CursorState_t {
                pub const m_sceneInstance: usize = 0x0; // CHandle<CBaseEntity>
            }
            // Parent: None
            // Field count: 0
            pub mod CPointTeleportAPI {
            }
            // Parent: CBaseCombatCharacter
            // Field count: 1
            pub mod CHostageExpresserShim {
                pub const m_pExpresser: usize = 0xA30; // CAI_Expresser*
            }
            // Parent: CPointEntity
            // Field count: 1
            pub mod CPointChildModifier {
                pub const m_bOrphanInsteadOfDeletingChildrenOnRemove: usize = 0x4A8; // bool
            }
            // Parent: None
            // Field count: 2
            pub mod CCSPlayerLegacyJump {
                pub const m_bOldJumpPressed: usize = 0x10; // bool
                pub const m_flJumpPressedTime: usize = 0x14; // float32
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            pub mod CWeaponHKP2000 {
            }
            // Parent: None
            // Field count: 4
            pub mod CShatterGlassShardPhysics {
                pub const m_hParentShard: usize = 0x770; // uint32
                pub const m_ShardDesc: usize = 0x778; // shard_model_desc_t
                pub const m_nPoolState: usize = 0x7F8; // ShatterGlassEntityPoolState_t
                pub const m_bTouchedByPlayer: usize = 0x7FC; // bool
            }
            // Parent: CBaseEntity
            // Field count: 16
            pub mod CPathParticleRope {
                pub const m_bStartActive: usize = 0x4B0; // bool
                pub const m_flMaxSimulationTime: usize = 0x4B4; // float32
                pub const m_iszEffectName: usize = 0x4B8; // CUtlSymbolLarge
                pub const m_PathNodes_Name: usize = 0x4C0; // CUtlVector<CUtlSymbolLarge>
                pub const m_flParticleSpacing: usize = 0x4D8; // float32
                pub const m_flSlack: usize = 0x4DC; // float32
                pub const m_flRadius: usize = 0x4E0; // float32
                pub const m_ColorTint: usize = 0x4E4; // Color
                pub const m_nEffectState: usize = 0x4E8; // int32
                pub const m_iEffectIndex: usize = 0x4F0; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                pub const m_PathNodes_Position: usize = 0x4F8; // CNetworkUtlVectorBase<Vector>
                pub const m_PathNodes_TangentIn: usize = 0x510; // CNetworkUtlVectorBase<Vector>
                pub const m_PathNodes_TangentOut: usize = 0x528; // CNetworkUtlVectorBase<Vector>
                pub const m_PathNodes_Color: usize = 0x540; // CNetworkUtlVectorBase<Vector>
                pub const m_PathNodes_PinEnabled: usize = 0x558; // CNetworkUtlVectorBase<bool>
                pub const m_PathNodes_RadiusScale: usize = 0x570; // CNetworkUtlVectorBase<float32>
            }
            // Parent: CPointEntity
            // Field count: 3
            pub mod CCredits {
                pub const m_OnCreditsDone: usize = 0x4A8; // CEntityIOOutput
                pub const m_bRolledOutroCredits: usize = 0x4C0; // bool
                pub const m_flLogoLength: usize = 0x4C4; // float32
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            pub mod CWeaponFiveSeven {
            }
            // Parent: CBaseEntity
            // Field count: 7
            pub mod CFishPool {
                pub const m_fishCount: usize = 0x4B8; // int32
                pub const m_maxRange: usize = 0x4BC; // float32
                pub const m_swimDepth: usize = 0x4C0; // float32
                pub const m_waterLevel: usize = 0x4C4; // float32
                pub const m_isDormant: usize = 0x4C8; // bool
                pub const m_fishes: usize = 0x4D0; // CUtlVector<CHandle<CFish>>
                pub const m_visTimer: usize = 0x4E8; // CountdownTimer
            }
            // Parent: CPlayerPawnComponent
            // Field count: 18
            pub mod CPlayer_MovementServices {
                pub const m_nImpulse: usize = 0x48; // int32
                pub const m_nButtons: usize = 0x50; // CInButtonState
                pub const m_nQueuedButtonDownMask: usize = 0x70; // uint64
                pub const m_nQueuedButtonChangeMask: usize = 0x78; // uint64
                pub const m_nButtonDoublePressed: usize = 0x80; // uint64
                pub const m_pButtonPressedCmdNumber: usize = 0x88; // uint32[64]
                pub const m_nLastCommandNumberProcessed: usize = 0x188; // uint32
                pub const m_nToggleButtonDownMask: usize = 0x190; // uint64
                pub const m_flCmdForwardMove: usize = 0x1A0; // float32
                pub const m_flCmdLeftMove: usize = 0x1A4; // float32
                pub const m_flCmdUpMove: usize = 0x1A8; // float32
                pub const m_flMaxspeed: usize = 0x1AC; // float32
                pub const m_arrForceSubtickMoveWhen: usize = 0x1B0; // float32[4]
                pub const m_flForwardMove: usize = 0x1C0; // float32
                pub const m_flLeftMove: usize = 0x1C4; // float32
                pub const m_flUpMove: usize = 0x1C8; // float32
                pub const m_vecLastMovementImpulses: usize = 0x1CC; // Vector
                pub const m_vecOldViewAngles: usize = 0x240; // QAngle
            }
            // Parent: CRagdollProp
            // Field count: 0
            pub mod CRagdollPropAlias_physics_prop_ragdoll {
            }
            // Parent: CBaseProp
            // Field count: 33
            pub mod CBreakableProp {
                pub const m_CPropDataComponent: usize = 0x998; // CPropDataComponent
                pub const m_OnStartDeath: usize = 0x9D8; // CEntityIOOutput
                pub const m_OnBreak: usize = 0x9F0; // CEntityIOOutput
                pub const m_OnHealthChanged: usize = 0xA08; // CEntityOutputTemplate<float32>
                pub const m_OnTakeDamage: usize = 0xA28; // CEntityIOOutput
                pub const m_impactEnergyScale: usize = 0xA40; // float32
                pub const m_iMinHealthDmg: usize = 0xA44; // int32
                pub const m_preferredCarryAngles: usize = 0xA48; // QAngle
                pub const m_flPressureDelay: usize = 0xA54; // float32
                pub const m_flDefBurstScale: usize = 0xA58; // float32
                pub const m_vDefBurstOffset: usize = 0xA5C; // Vector
                pub const m_hBreaker: usize = 0xA68; // CHandle<CBaseEntity>
                pub const m_PerformanceMode: usize = 0xA6C; // PerformanceMode_t
                pub const m_flPreventDamageBeforeTime: usize = 0xA70; // GameTime_t
                pub const m_BreakableContentsType: usize = 0xA74; // BreakableContentsType_t
                pub const m_strBreakableContentsPropGroupOverride: usize = 0xA78; // CUtlString
                pub const m_strBreakableContentsParticleOverride: usize = 0xA80; // CUtlString
                pub const m_bHasBreakPiecesOrCommands: usize = 0xA88; // bool
                pub const m_explodeDamage: usize = 0xA8C; // float32
                pub const m_explodeRadius: usize = 0xA90; // float32
                pub const m_sExplosionType: usize = 0xA98; // CGlobalSymbol
                pub const m_explosionDelay: usize = 0xAA0; // float32
                pub const m_explosionBuildupSound: usize = 0xAA8; // CUtlSymbolLarge
                pub const m_explosionCustomEffect: usize = 0xAB0; // CUtlSymbolLarge
                pub const m_explosionCustomSound: usize = 0xAB8; // CUtlSymbolLarge
                pub const m_explosionModifier: usize = 0xAC0; // CUtlSymbolLarge
                pub const m_hPhysicsAttacker: usize = 0xAC8; // CHandle<CBasePlayerPawn>
                pub const m_flLastPhysicsInfluenceTime: usize = 0xACC; // GameTime_t
                pub const m_flDefaultFadeScale: usize = 0xAD0; // float32
                pub const m_hLastAttacker: usize = 0xAD4; // CHandle<CBaseEntity>
                pub const m_iszPuntSound: usize = 0xAD8; // CUtlSymbolLarge
                pub const m_bUsePuntSound: usize = 0xAE0; // bool
                pub const m_bOriginalBlockLOS: usize = 0xAE1; // bool
            }
            // Parent: None
            // Field count: 1
            pub mod CLightEntity {
                pub const m_CLightComponent: usize = 0x770; // CLightComponent*
            }
            // Parent: CInfoDynamicShadowHint
            // Field count: 2
            pub mod CInfoDynamicShadowHintBox {
                pub const m_vBoxMins: usize = 0x4C0; // Vector
                pub const m_vBoxMaxs: usize = 0x4CC; // Vector
            }
            // Parent: CSkeletonAnimationController
            // Field count: 31
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CBaseAnimGraphController {
                pub const m_nAnimationAlgorithm: usize = 0x18; // AnimationAlgorithm_t
                pub const m_nNextExternalGraphHandle: usize = 0x1C; // ExternalAnimGraphHandle_t
                pub const m_vecSecondarySkeletonSlotIDs: usize = 0x20; // CNetworkUtlVectorBase<CGlobalSymbol>
                pub const m_vecSecondarySkeletons: usize = 0x38; // CNetworkUtlVectorBase<CHandle<CBaseAnimGraph>>
                pub const m_nSecondarySkeletonMasterCount: usize = 0x50; // int32
                pub const m_flSoundSyncTime: usize = 0x54; // float32
                pub const m_nActiveIKChainMask: usize = 0x58; // uint32
                pub const m_hSequence: usize = 0x5C; // HSequence
                pub const m_flSeqStartTime: usize = 0x60; // GameTime_t
                pub const m_flSeqFixedCycle: usize = 0x64; // float32
                pub const m_nAnimLoopMode: usize = 0x68; // AnimLoopMode_t
                pub const m_flPlaybackRate: usize = 0x6C; // CNetworkedQuantizedFloat
                pub const m_nNotifyState: usize = 0x78; // SequenceFinishNotifyState_t
                pub const m_bNetworkedAnimationInputsChanged: usize = 0x79; // bool
                pub const m_bNetworkedSequenceChanged: usize = 0x7A; // bool
                pub const m_bLastUpdateSkipped: usize = 0x7B; // bool
                pub const m_bSequenceFinished: usize = 0x7C; // bool
                pub const m_nPrevAnimUpdateTick: usize = 0x80; // GameTick_t
                pub const m_hGraphDefinitionAG2: usize = 0x320; // CStrongHandle<InfoForResourceTypeCNmGraphDefinition>
                pub const m_SerializePoseRecipeAG2Slots: usize = 0x328; // CUtlVectorEmbeddedNetworkVar<AnimGraph2SerializedPoseRecipeSlot_t>
                pub const m_SerializePoseRecipeAG2Dynamic: usize = 0x390; // CNetworkUtlVectorBase<uint8>
                pub const m_nSerializePoseRecipeAG2ActiveSlot: usize = 0x3A8; // uint32
                pub const m_nSerializePoseRecipeVersionAG2: usize = 0x3AC; // int32
                pub const m_nServerGraphInstanceIteration: usize = 0x3C0; // int32
                pub const m_nServerSerializationContextIteration: usize = 0x3C4; // int32
                pub const m_primaryGraphId: usize = 0x3C8; // ResourceId_t
                pub const m_vecExternalGraphIds: usize = 0x3D0; // CNetworkUtlVectorBase<ResourceId_t>
                pub const m_vecExternalClipIds: usize = 0x3E8; // CNetworkUtlVectorBase<ResourceId_t>
                pub const m_sAnimGraph2Identifier: usize = 0x400; // CGlobalSymbol
                pub const m_pGraphInstanceAG2: usize = 0x408; // CAnimGraph2InstancePtr
                pub const m_vecExternalGraphs: usize = 0x628; // CExternalAnimGraphList
            }
            // Parent: None
            // Field count: 1
            pub mod AnimGraph2SerializedPoseRecipeSlot_t {
                pub const m_topology: usize = 0x30; // CUtlBinaryBlock
            }
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CBuoyancyHelper {
                pub const m_pController: usize = 0x8; // IPhysicsMotionController*
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
                pub const m_initialOwner: usize = 0xBA0; // CUtlSymbolLarge
            }
            // Parent: CCSPlayerBase_CameraServices
            // Field count: 0
            pub mod CCSPlayer_CameraServices {
            }
            // Parent: None
            // Field count: 0
            pub mod CModelPointEntity {
            }
            // Parent: CBarnLight
            // Field count: 1
            pub mod CRectLight {
                pub const m_bShowLight: usize = 0xA58; // bool
            }
            // Parent: CBaseFilter
            // Field count: 3
            pub mod CFilterMultiple {
                pub const m_nFilterType: usize = 0x4E0; // filter_t
                pub const m_iFilterName: usize = 0x4E8; // CUtlSymbolLarge[10]
                pub const m_hFilter: usize = 0x538; // CHandle<CBaseEntity>[10]
            }
            // Parent: CBaseEntity
            // Field count: 10
            pub mod CCSPlayerResource {
                pub const m_bHostageAlive: usize = 0x4A8; // bool[12]
                pub const m_isHostageFollowingSomeone: usize = 0x4B4; // bool[12]
                pub const m_iHostageEntityIDs: usize = 0x4C0; // CEntityIndex[12]
                pub const m_bombsiteCenterA: usize = 0x4F0; // VectorWS
                pub const m_bombsiteCenterB: usize = 0x4FC; // VectorWS
                pub const m_hostageRescueX: usize = 0x508; // int32[4]
                pub const m_hostageRescueY: usize = 0x518; // int32[4]
                pub const m_hostageRescueZ: usize = 0x528; // int32[4]
                pub const m_bEndMatchNextMapAllVoted: usize = 0x538; // bool
                pub const m_foundGoalPositions: usize = 0x539; // bool
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_FireCursors {
                pub const m_Outflows: usize = 0xD8; // CUtlVector<CPulse_OutflowConnection>
                pub const m_bWaitForChildOutflows: usize = 0xF0; // bool
                pub const m_OnFinished: usize = 0xF8; // CPulse_ResumePoint
            }
            // Parent: CBaseModelEntity
            // Field count: 2
            pub mod CFuncNavBlocker {
                pub const m_bDisabled: usize = 0x778; // bool
                pub const m_nBlockedTeamNumber: usize = 0x77C; // int32
            }
            // Parent: CPathNode
            // Field count: 5
            pub mod CMoverPathNode {
                pub const m_OnStartFromOrInSegment: usize = 0x500; // CEntityOutputTemplate<CUtlString>
                pub const m_OnStoppedAtOrInSegment: usize = 0x520; // CEntityOutputTemplate<CUtlString>
                pub const m_OnPassThrough: usize = 0x540; // CEntityOutputTemplate<CUtlString>
                pub const m_OnPassThroughForward: usize = 0x560; // CEntityOutputTemplate<CUtlString>
                pub const m_OnPassThroughReverse: usize = 0x580; // CEntityOutputTemplate<CUtlString>
            }
            // Parent: CBaseEntity
            // Field count: 11
            pub mod CEnvSoundscape {
                pub const m_OnPlay: usize = 0x4A8; // CEntityIOOutput
                pub const m_flRadius: usize = 0x4C0; // float32
                pub const m_soundEventName: usize = 0x4C8; // CGameSoundEventName
                pub const m_bOverrideWithEvent: usize = 0x4D0; // bool
                pub const m_soundscapeIndex: usize = 0x4D4; // int32
                pub const m_soundscapeEntityListId: usize = 0x4D8; // int32
                pub const m_positionNames: usize = 0x4E0; // CUtlSymbolLarge[8]
                pub const m_hProxySoundscape: usize = 0x520; // CHandle<CEnvSoundscape>
                pub const m_bDisabled: usize = 0x524; // bool
                pub const m_soundscapeName: usize = 0x528; // CUtlSymbolLarge
                pub const m_soundEventHash: usize = 0x530; // uint32
            }
            // Parent: CBaseModelEntity
            // Field count: 6
            pub mod CFuncBrush {
                pub const m_iSolidity: usize = 0x770; // BrushSolidities_e
                pub const m_iDisabled: usize = 0x774; // int32
                pub const m_bSolidBsp: usize = 0x778; // bool
                pub const m_iszExcludedClass: usize = 0x780; // CUtlSymbolLarge
                pub const m_bInvertExclusion: usize = 0x788; // bool
                pub const m_bScriptedMovement: usize = 0x789; // bool
            }
            // Parent: None
            // Field count: 0
            pub mod CParticleSystemAPI {
            }
            // Parent: CBodyComponent
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CBodyComponentPoint {
                pub const m_sceneNode: usize = 0x80; // CGameSceneNode
            }
            // Parent: CBreakable
            // Field count: 18
            pub mod CPhysBox {
                pub const m_damageType: usize = 0x848; // int32
                pub const m_damageToEnableMotion: usize = 0x84C; // int32
                pub const m_flForceToEnableMotion: usize = 0x850; // float32
                pub const m_vHoverPosePosition: usize = 0x854; // Vector
                pub const m_angHoverPoseAngles: usize = 0x860; // QAngle
                pub const m_bNotSolidToWorld: usize = 0x86C; // bool
                pub const m_bEnableUseOutput: usize = 0x86D; // bool
                pub const m_nHoverPoseFlags: usize = 0x86E; // HoverPoseFlags_t
                pub const m_flTouchOutputPerEntityDelay: usize = 0x870; // float32
                pub const m_iszCollisionGroup: usize = 0x878; // CUtlSymbolLarge
                pub const m_iszInteractsAs: usize = 0x880; // CUtlSymbolLarge
                pub const m_iszInteractsWith: usize = 0x888; // CUtlSymbolLarge
                pub const m_iszInteractsExclude: usize = 0x890; // CUtlSymbolLarge
                pub const m_OnDamaged: usize = 0x898; // CEntityIOOutput
                pub const m_OnAwakened: usize = 0x8B0; // CEntityIOOutput
                pub const m_OnMotionEnabled: usize = 0x8C8; // CEntityIOOutput
                pub const m_OnPlayerUse: usize = 0x8E0; // CEntityIOOutput
                pub const m_OnStartTouch: usize = 0x8F8; // CEntityIOOutput
            }
            // Parent: CSoundEventEntity
            // Field count: 2
            pub mod CSoundEventAABBEntity {
                pub const m_vMins: usize = 0x568; // Vector
                pub const m_vMaxs: usize = 0x574; // Vector
            }
            // Parent: None
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
            pub mod COmniLight {
                pub const m_flInnerAngle: usize = 0xA58; // float32
                pub const m_flOuterAngle: usize = 0xA5C; // float32
                pub const m_bShowLight: usize = 0xA60; // bool
            }
            // Parent: CBaseModelEntity
            // Field count: 2
            pub mod CTriggerVolume {
                pub const m_iFilterName: usize = 0x770; // CUtlSymbolLarge
                pub const m_hFilter: usize = 0x778; // CHandle<CBaseFilter>
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
            // Parent: CBaseModelEntity
            // Field count: 15
            pub mod CEnvExplosion {
                pub const m_iMagnitude: usize = 0x770; // int32
                pub const m_flPlayerDamage: usize = 0x774; // float32
                pub const m_iRadiusOverride: usize = 0x778; // int32
                pub const m_flInnerRadius: usize = 0x77C; // float32
                pub const m_flDamageForce: usize = 0x780; // float32
                pub const m_hInflictor: usize = 0x784; // CHandle<CBaseEntity>
                pub const m_iCustomDamageType: usize = 0x788; // DamageTypes_t
                pub const m_bCreateDebris: usize = 0x78C; // bool
                pub const m_iszCustomEffectName: usize = 0x798; // CUtlSymbolLarge
                pub const m_iszCustomSoundName: usize = 0x7A0; // CUtlSymbolLarge
                pub const m_bSuppressParticleImpulse: usize = 0x7A8; // bool
                pub const m_iClassIgnore: usize = 0x7AC; // Class_T
                pub const m_iClassIgnore2: usize = 0x7B0; // Class_T
                pub const m_iszEntityIgnoreName: usize = 0x7B8; // CUtlSymbolLarge
                pub const m_hEntityIgnore: usize = 0x7C0; // CHandle<CBaseEntity>
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
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CTestPulseIO__ThreeStringArgs_t {
                pub const strArg1: usize = 0x0; // CUtlString
                pub const strArg2: usize = 0x8; // CUtlString
                pub const strArg3: usize = 0x10; // CUtlString
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
            pub mod CFootstepControl {
                pub const m_source: usize = 0x8E8; // CUtlSymbolLarge
                pub const m_destination: usize = 0x8F0; // CUtlSymbolLarge
            }
            // Parent: CPlayer_ItemServices
            // Field count: 2
            pub mod CCSPlayer_ItemServices {
                pub const m_bHasDefuser: usize = 0x48; // bool
                pub const m_bHasHelmet: usize = 0x49; // bool
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
            // Field count: 24
            pub mod CParticleSystem {
                pub const m_szSnapshotFileName: usize = 0x770; // char[512]
                pub const m_bActive: usize = 0x970; // bool
                pub const m_bFrozen: usize = 0x971; // bool
                pub const m_flFreezeTransitionDuration: usize = 0x974; // float32
                pub const m_nStopType: usize = 0x978; // int32
                pub const m_bAnimateDuringGameplayPause: usize = 0x97C; // bool
                pub const m_iEffectIndex: usize = 0x980; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                pub const m_flStartTime: usize = 0x988; // GameTime_t
                pub const m_flPreSimTime: usize = 0x98C; // float32
                pub const m_vServerControlPoints: usize = 0x990; // Vector[4]
                pub const m_iServerControlPointAssignments: usize = 0x9C0; // uint8[4]
                pub const m_hControlPointEnts: usize = 0x9C4; // CHandle<CBaseEntity>[64]
                pub const m_bDataStringLocalized: usize = 0xAC4; // bool
                pub const m_strDataString: usize = 0xAC8; // CUtlString
                pub const m_bNoSave: usize = 0xAD0; // bool
                pub const m_bNoFreeze: usize = 0xAD1; // bool
                pub const m_bNoRamp: usize = 0xAD2; // bool
                pub const m_bStartActive: usize = 0xAD3; // bool
                pub const m_iszEffectName: usize = 0xAD8; // CUtlSymbolLarge
                pub const m_iszControlPointNames: usize = 0xAE0; // CUtlSymbolLarge[64]
                pub const m_nDataCP: usize = 0xCE0; // int32
                pub const m_vecDataCPValue: usize = 0xCE4; // Vector
                pub const m_nTintCP: usize = 0xCF0; // int32
                pub const m_clrTint: usize = 0xCF4; // Color
            }
            // Parent: CBaseModelEntity
            // Field count: 5
            pub mod CTriggerBrush {
                pub const m_OnStartTouch: usize = 0x770; // CEntityIOOutput
                pub const m_OnEndTouch: usize = 0x788; // CEntityIOOutput
                pub const m_OnUse: usize = 0x7A0; // CEntityIOOutput
                pub const m_iInputFilter: usize = 0x7B8; // int32
                pub const m_iDontMessageParent: usize = 0x7BC; // int32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod IntervalTimer {
                pub const m_timestamp: usize = 0x8; // GameTime_t
                pub const m_nWorldGroupId: usize = 0xC; // WorldGroupId_t
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod audioparams_t {
                pub const localSound: usize = 0x8; // VectorWS[8]
                pub const soundscapeIndex: usize = 0x68; // int32
                pub const localBits: usize = 0x6C; // uint8
                pub const soundscapeEntityListIndex: usize = 0x70; // int32
                pub const soundEventHash: usize = 0x74; // uint32
            }
            // Parent: CBaseEntity
            // Field count: 3
            pub mod CSoundAreaEntityBase {
                pub const m_bDisabled: usize = 0x4A8; // bool
                pub const m_iszSoundAreaType: usize = 0x4B0; // CUtlSymbolLarge
                pub const m_vPos: usize = 0x4B8; // Vector
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            pub mod CWeaponM4A1Silencer {
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
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
            pub mod CEnvCubemapAPI {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyDescription
            pub mod CPulseCursorFuncs {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CTestPulseIO__FloatStringArgs_t {
                pub const flOutFloat: usize = 0x0; // float32
                pub const strOutString: usize = 0x8; // CUtlSymbolLarge
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
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
            // Field count: 23
            pub mod CBeam {
                pub const m_flFrameRate: usize = 0x770; // float32
                pub const m_flHDRColorScale: usize = 0x774; // float32
                pub const m_flFireTime: usize = 0x778; // GameTime_t
                pub const m_flDamage: usize = 0x77C; // float32
                pub const m_nNumBeamEnts: usize = 0x780; // uint8
                pub const m_hBaseMaterial: usize = 0x788; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_nHaloIndex: usize = 0x790; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_nBeamType: usize = 0x798; // BeamType_t
                pub const m_nBeamFlags: usize = 0x79C; // uint32
                pub const m_hAttachEntity: usize = 0x7A0; // CHandle<CBaseEntity>[10]
                pub const m_nAttachIndex: usize = 0x7C8; // AttachmentHandle_t[10]
                pub const m_fWidth: usize = 0x7D4; // float32
                pub const m_fEndWidth: usize = 0x7D8; // float32
                pub const m_fFadeLength: usize = 0x7DC; // float32
                pub const m_fHaloScale: usize = 0x7E0; // float32
                pub const m_fAmplitude: usize = 0x7E4; // float32
                pub const m_fStartFrame: usize = 0x7E8; // float32
                pub const m_fSpeed: usize = 0x7EC; // float32
                pub const m_flFrame: usize = 0x7F0; // float32
                pub const m_bTurnedOff: usize = 0x7F4; // bool
                pub const m_vecEndPos: usize = 0x7F8; // VectorWS
                pub const m_hEndEntity: usize = 0x804; // CHandle<CBaseEntity>
                pub const m_nDissolveType: usize = 0x808; // int32
            }
            // Parent: CBaseEntity
            // Field count: 4
            pub mod CLogicEventListener {
                pub const m_strEventName: usize = 0x4B8; // CUtlString
                pub const m_bIsEnabled: usize = 0x4C0; // bool
                pub const m_nTeam: usize = 0x4C4; // int32
                pub const m_OnEventFired: usize = 0x4C8; // CEntityOutputTemplate<CUtlString>
            }
            // Parent: CCSGO_TeamSelectCharacterPosition
            // Field count: 0
            pub mod CCSGO_TeamSelectTerroristPosition {
            }
            // Parent: CBaseEntity
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
            pub mod CBasePlayerPawn {
                pub const m_pWeaponServices: usize = 0xA30; // CPlayer_WeaponServices*
                pub const m_pItemServices: usize = 0xA38; // CPlayer_ItemServices*
                pub const m_pAutoaimServices: usize = 0xA40; // CPlayer_AutoaimServices*
                pub const m_pObserverServices: usize = 0xA48; // CPlayer_ObserverServices*
                pub const m_pWaterServices: usize = 0xA50; // CPlayer_WaterServices*
                pub const m_pUseServices: usize = 0xA58; // CPlayer_UseServices*
                pub const m_pFlashlightServices: usize = 0xA60; // CPlayer_FlashlightServices*
                pub const m_pCameraServices: usize = 0xA68; // CPlayer_CameraServices*
                pub const m_pMovementServices: usize = 0xA70; // CPlayer_MovementServices*
                pub const m_ServerViewAngleChanges: usize = 0xA80; // CUtlVectorEmbeddedNetworkVar<ViewAngleServerChange_t>
                pub const v_angle: usize = 0xAE8; // QAngle
                pub const v_anglePrevious: usize = 0xAF4; // QAngle
                pub const m_iHideHUD: usize = 0xB00; // uint32
                pub const m_skybox3d: usize = 0xB08; // sky3dparams_t
                pub const m_fTimeLastHurt: usize = 0xB98; // GameTime_t
                pub const m_flDeathTime: usize = 0xB9C; // GameTime_t
                pub const m_fNextSuicideTime: usize = 0xBA0; // GameTime_t
                pub const m_fInitHUD: usize = 0xBA4; // bool
                pub const m_pExpresser: usize = 0xBA8; // CAI_Expresser*
                pub const m_hController: usize = 0xBB0; // CHandle<CBasePlayerController>
                pub const m_hDefaultController: usize = 0xBB4; // CHandle<CBasePlayerController>
                pub const m_fHltvReplayDelay: usize = 0xBBC; // float32
                pub const m_fHltvReplayEnd: usize = 0xBC0; // float32
                pub const m_iHltvReplayEntity: usize = 0xBC4; // CEntityIndex
                pub const m_sndOpvarLatchData: usize = 0xBC8; // CUtlVector<sndopvarlatchdata_t>
            }
            // Parent: None
            // Field count: 2
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
                pub const m_bAdrenalineActive: usize = 0x4E0; // bool
                pub const m_iHealthMin: usize = 0x4E4; // int32
                pub const m_iHealthMax: usize = 0x4E8; // int32
            }
            // Parent: CSprite
            // Field count: 0
            pub mod CCSSprite {
            }
            // Parent: CBaseEntity
            // Field count: 5
            pub mod CMathColorBlend {
                pub const m_flInMin: usize = 0x4A8; // float32
                pub const m_flInMax: usize = 0x4AC; // float32
                pub const m_OutColor1: usize = 0x4B0; // Color
                pub const m_OutColor2: usize = 0x4B4; // Color
                pub const m_OutValue: usize = 0x4B8; // CEntityOutputTemplate<Color>
            }
            // Parent: CBaseModelEntity
            // Field count: 1
            pub mod CShower {
                pub const m_flSpeed: usize = 0x770; // float32
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
                pub const m_vExtent: usize = 0x788; // Vector
            }
            // Parent: CBaseModelEntity
            // Field count: 0
            pub mod CEntityBlocker {
            }
            // Parent: None
            // Field count: 0
            pub mod CCSPlace_API {
            }
            // Parent: None
            // Field count: 0
            pub mod SignatureOutflow_Resume {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Outflow_PlayVCDBase {
            }
            // Parent: None
            // Field count: 0
            pub mod CPathSimpleAPI {
            }
            // Parent: CCSPlayerPawnBase
            // Field count: 0
            pub mod CCSObserverPawn {
            }
            // Parent: CBaseTrigger
            // Field count: 2
            pub mod CTriggerActiveWeaponDetect {
                pub const m_OnTouchedActiveWeapon: usize = 0x8E8; // CEntityIOOutput
                pub const m_iszWeaponClassName: usize = 0x900; // CUtlSymbolLarge
            }
            // Parent: None
            // Field count: 0
            pub mod CEnvHudHint_API {
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
            // Parent: None
            // Field count: 13
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
            // Parent: CBaseModelEntity
            // Field count: 15
            pub mod CPlayerSprayDecal {
                pub const m_nUniqueID: usize = 0x770; // int32
                pub const m_unAccountID: usize = 0x774; // uint32
                pub const m_unTraceID: usize = 0x778; // uint32
                pub const m_rtGcTime: usize = 0x77C; // uint32
                pub const m_vecEndPos: usize = 0x780; // VectorWS
                pub const m_vecStart: usize = 0x78C; // VectorWS
                pub const m_vecLeft: usize = 0x798; // Vector
                pub const m_vecNormal: usize = 0x7A4; // Vector
                pub const m_nPlayer: usize = 0x7B0; // int32
                pub const m_nEntity: usize = 0x7B4; // int32
                pub const m_nHitbox: usize = 0x7B8; // int32
                pub const m_flCreationTime: usize = 0x7BC; // float32
                pub const m_nTintID: usize = 0x7C0; // int32
                pub const m_nVersion: usize = 0x7C4; // uint8
                pub const m_ubSignature: usize = 0x7C5; // uint8[128]
            }
            // Parent: CBaseModelEntity
            // Field count: 1
            pub mod CFuncWater {
                pub const m_BuoyancyHelper: usize = 0x770; // CBuoyancyHelper
            }
            // Parent: None
            // Field count: 1
            pub mod CCSGameModeRules {
                pub const __m_pChainEntity: usize = 0x8; // CNetworkVarChainer
            }
            // Parent: None
            // Field count: 0
            pub mod CPointPrefabAPI {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Outflow_PlayVCD__VCDRequirementInfo_t {
                pub const m_nEventID: usize = 0x0; // int32
                pub const m_Outflow: usize = 0x8; // CPulse_OutflowConnection
            }
            // Parent: CBaseAnimGraph
            // Field count: 9
            pub mod CEconEntity {
                pub const m_AttributeManager: usize = 0x978; // CAttributeContainer
                pub const m_OriginalOwnerXuidLow: usize = 0xC70; // uint32
                pub const m_OriginalOwnerXuidHigh: usize = 0xC74; // uint32
                pub const m_nFallbackPaintKit: usize = 0xC78; // int32
                pub const m_nFallbackSeed: usize = 0xC7C; // int32
                pub const m_flFallbackWear: usize = 0xC80; // float32
                pub const m_nFallbackStatTrak: usize = 0xC84; // int32
                pub const m_hOldProvidee: usize = 0xC88; // CHandle<CBaseEntity>
                pub const m_iOldOwnerClass: usize = 0xC8C; // int32
            }
            // Parent: CPointEntity
            // Field count: 2
            pub mod CTankTargetChange {
                pub const m_newTarget: usize = 0x4A8; // CVariantBase<CVariantDefaultAllocator>
                pub const m_newTargetName: usize = 0x4B8; // CUtlSymbolLarge
            }
            // Parent: CPlayer_WaterServices
            // Field count: 6
            pub mod CCSPlayer_WaterServices {
                pub const m_NextDrownDamageTime: usize = 0x48; // GameTime_t
                pub const m_nDrownDmgRate: usize = 0x4C; // int32
                pub const m_AirFinishedTime: usize = 0x50; // GameTime_t
                pub const m_flWaterJumpTime: usize = 0x54; // float32
                pub const m_vecWaterJumpVel: usize = 0x58; // Vector
                pub const m_flSwimSoundTime: usize = 0x64; // float32
            }
            // Parent: CBaseEntity
            // Field count: 7
            pub mod CLogicDistanceCheck {
                pub const m_iszEntityA: usize = 0x4A8; // CUtlSymbolLarge
                pub const m_iszEntityB: usize = 0x4B0; // CUtlSymbolLarge
                pub const m_flZone1Distance: usize = 0x4B8; // float32
                pub const m_flZone2Distance: usize = 0x4BC; // float32
                pub const m_InZone1: usize = 0x4C0; // CEntityIOOutput
                pub const m_InZone2: usize = 0x4D8; // CEntityIOOutput
                pub const m_InZone3: usize = 0x4F0; // CEntityIOOutput
            }
            // Parent: CBaseEntity
            // Field count: 29
            pub mod CEnvCombinedLightProbeVolume {
                pub const m_Entity_Color: usize = 0x1520; // Color
                pub const m_Entity_flBrightness: usize = 0x1524; // float32
                pub const m_Entity_hCubemapTexture: usize = 0x1528; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_bCustomCubemapTexture: usize = 0x1530; // bool
                pub const m_Entity_hLightProbeTexture_AmbientCube: usize = 0x1538; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeTexture_SDF: usize = 0x1540; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeTexture_SH2_DC: usize = 0x1548; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeTexture_SH2_R: usize = 0x1550; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeTexture_SH2_G: usize = 0x1558; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeTexture_SH2_B: usize = 0x1560; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeDirectLightIndicesTexture: usize = 0x1568; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeDirectLightScalarsTexture: usize = 0x1570; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeDirectLightShadowsTexture: usize = 0x1578; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_vBoxMins: usize = 0x1580; // Vector
                pub const m_Entity_vBoxMaxs: usize = 0x158C; // Vector
                pub const m_Entity_bMoveable: usize = 0x1598; // bool
                pub const m_Entity_nHandshake: usize = 0x159C; // int32
                pub const m_Entity_nEnvCubeMapArrayIndex: usize = 0x15A0; // int32
                pub const m_Entity_nPriority: usize = 0x15A4; // int32
                pub const m_Entity_bStartDisabled: usize = 0x15A8; // bool
                pub const m_Entity_flEdgeFadeDist: usize = 0x15AC; // float32
                pub const m_Entity_vEdgeFadeDists: usize = 0x15B0; // Vector
                pub const m_Entity_nLightProbeSizeX: usize = 0x15BC; // int32
                pub const m_Entity_nLightProbeSizeY: usize = 0x15C0; // int32
                pub const m_Entity_nLightProbeSizeZ: usize = 0x15C4; // int32
                pub const m_Entity_nLightProbeAtlasX: usize = 0x15C8; // int32
                pub const m_Entity_nLightProbeAtlasY: usize = 0x15CC; // int32
                pub const m_Entity_nLightProbeAtlasZ: usize = 0x15D0; // int32
                pub const m_Entity_bEnabled: usize = 0x15E9; // bool
            }
            // Parent: None
            // Field count: 3
            pub mod ViewAngleServerChange_t {
                pub const nType: usize = 0x30; // FixAngleSet_t
                pub const qAngle: usize = 0x34; // QAngle
                pub const nIndex: usize = 0x40; // uint32
            }
            // Parent: CBaseEntity
            // Field count: 6
            pub mod CLogicDistanceAutosave {
                pub const m_iszTargetEntity: usize = 0x4A8; // CUtlSymbolLarge
                pub const m_flDistanceToPlayer: usize = 0x4B0; // float32
                pub const m_bForceNewLevelUnit: usize = 0x4B4; // bool
                pub const m_bCheckCough: usize = 0x4B5; // bool
                pub const m_bThinkDangerous: usize = 0x4B6; // bool
                pub const m_flDangerousTime: usize = 0x4B8; // float32
            }
            // Parent: CBaseEntity
            // Field count: 4
            pub mod CLogicBranch {
                pub const m_bInValue: usize = 0x4A8; // bool
                pub const m_Listeners: usize = 0x4B0; // CUtlVector<CHandle<CBaseEntity>>
                pub const m_OnTrue: usize = 0x4C8; // CEntityIOOutput
                pub const m_OnFalse: usize = 0x4E0; // CEntityIOOutput
            }
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Outflow_ScriptedSequence {
                pub const m_szSyncGroup: usize = 0xD8; // CUtlString
                pub const m_nExpectedNumSequencesInSyncGroup: usize = 0xE0; // int32
                pub const m_bEnsureOnNavmeshOnFinish: usize = 0xE4; // bool
                pub const m_bDontTeleportAtEnd: usize = 0xE5; // bool
                pub const m_bDisallowInterrupts: usize = 0xE6; // bool
                pub const m_scriptedSequenceDataMain: usize = 0xE8; // PulseScriptedSequenceData_t
                pub const m_vecAdditionalActors: usize = 0x120; // CUtlVector<PulseScriptedSequenceData_t>
                pub const m_OnFinished: usize = 0x138; // CPulse_ResumePoint
                pub const m_Triggers: usize = 0x180; // CUtlVector<CPulse_OutflowConnection>
            }
            // Parent: CFuncPlat
            // Field count: 9
            pub mod CFuncTrackChange {
                pub const m_trackTop: usize = 0x840; // CHandle<CPathTrack>
                pub const m_trackBottom: usize = 0x844; // CHandle<CPathTrack>
                pub const m_train: usize = 0x848; // CHandle<CFuncTrackTrain>
                pub const m_trackTopName: usize = 0x850; // CUtlSymbolLarge
                pub const m_trackBottomName: usize = 0x858; // CUtlSymbolLarge
                pub const m_trainName: usize = 0x860; // CUtlSymbolLarge
                pub const m_code: usize = 0x868; // TRAIN_CODE
                pub const m_targetState: usize = 0x86C; // int32
                pub const m_use: usize = 0x870; // int32
            }
            // Parent: CBaseModelEntity
            // Field count: 38
            pub mod CFuncTrackTrain {
                pub const m_ppath: usize = 0x770; // CHandle<CPathTrack>
                pub const m_length: usize = 0x774; // float32
                pub const m_vPosPrev: usize = 0x778; // Vector
                pub const m_angPrev: usize = 0x784; // QAngle
                pub const m_flSpeed: usize = 0x790; // float32
                pub const m_controlMins: usize = 0x794; // Vector
                pub const m_controlMaxs: usize = 0x7A0; // Vector
                pub const m_lastBlockPos: usize = 0x7AC; // VectorWS
                pub const m_lastBlockTick: usize = 0x7B8; // int32
                pub const m_flVolume: usize = 0x7BC; // float32
                pub const m_flBank: usize = 0x7C0; // float32
                pub const m_oldSpeed: usize = 0x7C4; // float32
                pub const m_flBlockDamage: usize = 0x7C8; // float32
                pub const m_height: usize = 0x7CC; // float32
                pub const m_maxSpeed: usize = 0x7D0; // float32
                pub const m_dir: usize = 0x7D4; // float32
                pub const m_iszSoundMove: usize = 0x7D8; // CGameSoundEventName
                pub const m_iszSoundMovePing: usize = 0x7E0; // CGameSoundEventName
                pub const m_iszSoundStart: usize = 0x7E8; // CGameSoundEventName
                pub const m_iszSoundStop: usize = 0x7F0; // CGameSoundEventName
                pub const m_strPathTarget: usize = 0x7F8; // CGameSoundEventName
                pub const m_flMoveSoundMinDuration: usize = 0x800; // float32
                pub const m_flMoveSoundMaxDuration: usize = 0x804; // float32
                pub const m_flNextMoveSoundTime: usize = 0x808; // GameTime_t
                pub const m_flMoveSoundMinPitch: usize = 0x80C; // float32
                pub const m_flMoveSoundMaxPitch: usize = 0x810; // float32
                pub const m_eOrientationType: usize = 0x814; // TrainOrientationType_t
                pub const m_eVelocityType: usize = 0x818; // TrainVelocityType_t
                pub const m_OnStart: usize = 0x830; // CEntityIOOutput
                pub const m_OnNext: usize = 0x848; // CEntityIOOutput
                pub const m_OnArrivedAtDestinationNode: usize = 0x860; // CEntityIOOutput
                pub const m_bManualSpeedChanges: usize = 0x878; // bool
                pub const m_flDesiredSpeed: usize = 0x87C; // float32
                pub const m_flSpeedChangeTime: usize = 0x880; // GameTime_t
                pub const m_flAccelSpeed: usize = 0x884; // float32
                pub const m_flDecelSpeed: usize = 0x888; // float32
                pub const m_bAccelToSpeed: usize = 0x88C; // bool
                pub const m_flNextMPSoundTime: usize = 0x890; // GameTime_t
            }
            // Parent: CPointEntity
            // Field count: 24
            pub mod CEnvInstructorHint {
                pub const m_iszName: usize = 0x4A8; // CUtlSymbolLarge
                pub const m_iszReplace_Key: usize = 0x4B0; // CUtlSymbolLarge
                pub const m_iszHintTargetEntity: usize = 0x4B8; // CUtlSymbolLarge
                pub const m_iTimeout: usize = 0x4C0; // int32
                pub const m_iDisplayLimit: usize = 0x4C4; // int32
                pub const m_iszIcon_Onscreen: usize = 0x4C8; // CUtlSymbolLarge
                pub const m_iszIcon_Offscreen: usize = 0x4D0; // CUtlSymbolLarge
                pub const m_iszCaption: usize = 0x4D8; // CUtlSymbolLarge
                pub const m_iszActivatorCaption: usize = 0x4E0; // CUtlSymbolLarge
                pub const m_Color: usize = 0x4E8; // Color
                pub const m_fIconOffset: usize = 0x4EC; // float32
                pub const m_fRange: usize = 0x4F0; // float32
                pub const m_iPulseOption: usize = 0x4F4; // uint8
                pub const m_iAlphaOption: usize = 0x4F5; // uint8
                pub const m_iShakeOption: usize = 0x4F6; // uint8
                pub const m_bStatic: usize = 0x4F7; // bool
                pub const m_bNoOffscreen: usize = 0x4F8; // bool
                pub const m_bForceCaption: usize = 0x4F9; // bool
                pub const m_iInstanceType: usize = 0x4FC; // int32
                pub const m_bSuppressRest: usize = 0x500; // bool
                pub const m_iszBinding: usize = 0x508; // CUtlSymbolLarge
                pub const m_bAllowNoDrawTarget: usize = 0x510; // bool
                pub const m_bAutoStart: usize = 0x511; // bool
                pub const m_bLocalPlayerOnly: usize = 0x512; // bool
            }
            // Parent: CBaseEntity
            // Field count: 1
            pub mod CEnvWind {
                pub const m_EnvWindShared: usize = 0x4A8; // CEnvWindShared
            }
            // Parent: CSoundEventEntity
            // Field count: 7
            pub mod CSoundEventPathCornerEntity {
                pub const m_iszPathCorner: usize = 0x568; // CUtlSymbolLarge
                pub const m_iCountMax: usize = 0x570; // int32
                pub const m_flDistanceMax: usize = 0x574; // float32
                pub const m_flDistMaxSqr: usize = 0x578; // float32
                pub const m_flDotProductMax: usize = 0x57C; // float32
                pub const m_bPlaying: usize = 0x580; // bool
                pub const m_vecCornerPairsNetworked: usize = 0x5A8; // CNetworkUtlVectorBase<SoundeventPathCornerPairNetworked_t>
            }
            // Parent: CPlayer_CameraServices
            // Field count: 7
            pub mod CCSPlayerBase_CameraServices {
                pub const m_iFOV: usize = 0x178; // uint32
                pub const m_iFOVStart: usize = 0x17C; // uint32
                pub const m_flFOVTime: usize = 0x180; // GameTime_t
                pub const m_flFOVRate: usize = 0x184; // float32
                pub const m_hZoomOwner: usize = 0x188; // CHandle<CBaseEntity>
                pub const m_hTriggerFogList: usize = 0x190; // CUtlVector<CHandle<CBaseEntity>>
                pub const m_hLastFogTrigger: usize = 0x1A8; // CHandle<CBaseEntity>
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
                pub const m_iszConnectionTarget: usize = 0x900; // CUtlSymbolLarge
                pub const m_vecConnections: usize = 0x908; // CUtlVector<DynamicVolumeDef_t>
                pub const m_sTransitionType: usize = 0x920; // CGlobalSymbol
                pub const m_bConnectionsEnabled: usize = 0x928; // bool
                pub const m_flTargetAreaSearchRadius: usize = 0x92C; // float32
                pub const m_flUpdateDistance: usize = 0x930; // float32
                pub const m_flMaxConnectionDistance: usize = 0x934; // float32
            }
            // Parent: CBaseAnimGraph
            // Field count: 1
            pub mod CConstraintAnchor {
                pub const m_massScale: usize = 0x960; // float32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPulseEditorCanvasItemSpecKV3
            pub mod CPulseCell_WaitForCursorsWithTagBase {
                pub const m_nCursorsAllowedToWait: usize = 0xD8; // int32
                pub const m_WaitComplete: usize = 0xE0; // CPulse_ResumePoint
            }
            // Parent: CCSPlayerPawnBase
            // Field count: 104
            pub mod CCSPlayerPawn {
                pub const m_pBulletServices: usize = 0xD38; // CCSPlayer_BulletServices*
                pub const m_pHostageServices: usize = 0xD40; // CCSPlayer_HostageServices*
                pub const m_pBuyServices: usize = 0xD48; // CCSPlayer_BuyServices*
                pub const m_pActionTrackingServices: usize = 0xD50; // CCSPlayer_ActionTrackingServices*
                pub const m_pAimPunchServices: usize = 0xD58; // CCSPlayer_AimPunchServices*
                pub const m_pRadioServices: usize = 0xD60; // CCSPlayer_RadioServices*
                pub const m_pDamageReactServices: usize = 0xD68; // CCSPlayer_DamageReactServices*
                pub const m_nCharacterDefIndex: usize = 0xD70; // uint16
                pub const m_bHasFemaleVoice: usize = 0xD72; // bool
                pub const m_strVOPrefix: usize = 0xD78; // CUtlString
                pub const m_szLastPlaceName: usize = 0xD80; // char[18]
                pub const m_bInHostageResetZone: usize = 0xE70; // bool
                pub const m_bInBuyZone: usize = 0xE71; // bool
                pub const m_TouchingBuyZones: usize = 0xE78; // CUtlVector<CHandle<CBaseEntity>>
                pub const m_bWasInBuyZone: usize = 0xE90; // bool
                pub const m_bInHostageRescueZone: usize = 0xE91; // bool
                pub const m_bInBombZone: usize = 0xE92; // bool
                pub const m_bWasInHostageRescueZone: usize = 0xE93; // bool
                pub const m_iRetakesOffering: usize = 0xE94; // int32
                pub const m_iRetakesOfferingCard: usize = 0xE98; // int32
                pub const m_bRetakesHasDefuseKit: usize = 0xE9C; // bool
                pub const m_bRetakesMVPLastRound: usize = 0xE9D; // bool
                pub const m_iRetakesMVPBoostItem: usize = 0xEA0; // int32
                pub const m_RetakesMVPBoostExtraUtility: usize = 0xEA4; // loadout_slot_t
                pub const m_flHealthShotBoostExpirationTime: usize = 0xEA8; // GameTime_t
                pub const m_flLandingTimeSeconds: usize = 0xEAC; // float32
                pub const m_bIsBuyMenuOpen: usize = 0xEB0; // bool
                pub const m_lastLandTime: usize = 0xEE8; // GameTime_t
                pub const m_bOnGroundLastTick: usize = 0xEEC; // bool
                pub const m_iPlayerLocked: usize = 0xEF0; // int32
                pub const m_flTimeOfLastInjury: usize = 0xEF8; // GameTime_t
                pub const m_flNextSprayDecalTime: usize = 0xEFC; // GameTime_t
                pub const m_bNextSprayDecalTimeExpedited: usize = 0xF00; // bool
                pub const m_nRagdollDamageBone: usize = 0xF04; // int32
                pub const m_vRagdollDamageForce: usize = 0xF08; // Vector
                pub const m_szRagdollDamageWeaponName: usize = 0xF14; // char[64]
                pub const m_bRagdollDamageHeadshot: usize = 0xF54; // bool
                pub const m_vRagdollServerOrigin: usize = 0xF58; // VectorWS
                pub const m_EconGloves: usize = 0xF68; // CEconItemView
                pub const m_nEconGlovesChanged: usize = 0x1210; // uint8
                pub const m_qDeathEyeAngles: usize = 0x1214; // QAngle
                pub const m_bLeftHanded: usize = 0x1220; // bool
                pub const m_fSwitchedHandednessTime: usize = 0x1224; // GameTime_t
                pub const m_flViewmodelOffsetX: usize = 0x1228; // float32
                pub const m_flViewmodelOffsetY: usize = 0x122C; // float32
                pub const m_flViewmodelOffsetZ: usize = 0x1230; // float32
                pub const m_flViewmodelFOV: usize = 0x1234; // float32
                pub const m_bIsWalking: usize = 0x1238; // bool
                pub const m_fLastGivenDefuserTime: usize = 0x123C; // float32
                pub const m_fLastGivenBombTime: usize = 0x1240; // float32
                pub const m_flDealtDamageToEnemyMostRecentTimestamp: usize = 0x1244; // float32
                pub const m_iDisplayHistoryBits: usize = 0x1248; // uint32
                pub const m_flLastAttackedTeammate: usize = 0x124C; // float32
                pub const m_allowAutoFollowTime: usize = 0x1250; // GameTime_t
                pub const m_bResetArmorNextSpawn: usize = 0x1254; // bool
                pub const m_nLastKillerIndex: usize = 0x1258; // CEntityIndex
                pub const m_entitySpottedState: usize = 0x1260; // EntitySpottedState_t
                pub const m_nSpotRules: usize = 0x1278; // int32
                pub const m_bIsScoped: usize = 0x127C; // bool
                pub const m_bResumeZoom: usize = 0x127D; // bool
                pub const m_bIsDefusing: usize = 0x127E; // bool
                pub const m_bIsGrabbingHostage: usize = 0x127F; // bool
                pub const m_iBlockingUseActionInProgress: usize = 0x1280; // CSPlayerBlockingUseAction_t
                pub const m_flEmitSoundTime: usize = 0x1284; // GameTime_t
                pub const m_bInNoDefuseArea: usize = 0x1288; // bool
                pub const m_iBombSiteIndex: usize = 0x128C; // CEntityIndex
                pub const m_nWhichBombZone: usize = 0x1290; // int32
                pub const m_bInBombZoneTrigger: usize = 0x1294; // bool
                pub const m_bWasInBombZoneTrigger: usize = 0x1295; // bool
                pub const m_iShotsFired: usize = 0x1298; // int32
                pub const m_flFlinchStack: usize = 0x129C; // float32
                pub const m_flVelocityModifier: usize = 0x12A0; // float32
                pub const m_vecTotalBulletForce: usize = 0x12A4; // Vector
                pub const m_bWaitForNoAttack: usize = 0x12B0; // bool
                pub const m_ignoreLadderJumpTime: usize = 0x12B4; // float32
                pub const m_bKilledByHeadshot: usize = 0x12B8; // bool
                pub const m_LastHitBox: usize = 0x12BC; // int32
                pub const m_pBot: usize = 0x12C0; // CCSBot*
                pub const m_bBotAllowActive: usize = 0x12C8; // bool
                pub const m_nLastPickupPriority: usize = 0x12CC; // int32
                pub const m_flLastPickupPriorityTime: usize = 0x12D0; // float32
                pub const m_ArmorValue: usize = 0x12D4; // int32
                pub const m_unCurrentEquipmentValue: usize = 0x12D8; // uint16
                pub const m_unRoundStartEquipmentValue: usize = 0x12DA; // uint16
                pub const m_unFreezetimeEndEquipmentValue: usize = 0x12DC; // uint16
                pub const m_iLastWeaponFireUsercmd: usize = 0x12E0; // int32
                pub const m_bIsSpawning: usize = 0x12E4; // bool
                pub const m_iDeathFlags: usize = 0x12F0; // int32
                pub const m_bHasDeathInfo: usize = 0x12F4; // bool
                pub const m_flDeathInfoTime: usize = 0x12F8; // float32
                pub const m_vecDeathInfoOrigin: usize = 0x12FC; // VectorWS
                pub const m_vecPlayerPatchEconIndices: usize = 0x1308; // uint32[5]
                pub const m_GunGameImmunityColor: usize = 0x131C; // Color
                pub const m_grenadeParameterStashTime: usize = 0x1320; // GameTime_t
                pub const m_bGrenadeParametersStashed: usize = 0x1324; // bool
                pub const m_angStashedShootAngles: usize = 0x1328; // QAngle
                pub const m_vecStashedGrenadeThrowPosition: usize = 0x1334; // VectorWS
                pub const m_vecStashedVelocity: usize = 0x1340; // Vector
                pub const m_bCommittingSuicideOnTeamChange: usize = 0x1358; // bool
                pub const m_wasNotKilledNaturally: usize = 0x1359; // bool
                pub const m_fImmuneToGunGameDamageTime: usize = 0x135C; // GameTime_t
                pub const m_bGunGameImmunity: usize = 0x1360; // bool
                pub const m_fMolotovDamageTime: usize = 0x1364; // float32
                pub const m_angEyeAngles: usize = 0x1368; // QAngle
            }
            // Parent: CBaseEntity
            // Field count: 22
            pub mod CEnvLightProbeVolume {
                pub const m_Entity_hLightProbeTexture_AmbientCube: usize = 0x14A0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeTexture_SDF: usize = 0x14A8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeTexture_SH2_DC: usize = 0x14B0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeTexture_SH2_R: usize = 0x14B8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeTexture_SH2_G: usize = 0x14C0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeTexture_SH2_B: usize = 0x14C8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeDirectLightIndicesTexture: usize = 0x14D0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeDirectLightScalarsTexture: usize = 0x14D8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeDirectLightShadowsTexture: usize = 0x14E0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_vBoxMins: usize = 0x14E8; // Vector
                pub const m_Entity_vBoxMaxs: usize = 0x14F4; // Vector
                pub const m_Entity_bMoveable: usize = 0x1500; // bool
                pub const m_Entity_nHandshake: usize = 0x1504; // int32
                pub const m_Entity_nPriority: usize = 0x1508; // int32
                pub const m_Entity_bStartDisabled: usize = 0x150C; // bool
                pub const m_Entity_nLightProbeSizeX: usize = 0x1510; // int32
                pub const m_Entity_nLightProbeSizeY: usize = 0x1514; // int32
                pub const m_Entity_nLightProbeSizeZ: usize = 0x1518; // int32
                pub const m_Entity_nLightProbeAtlasX: usize = 0x151C; // int32
                pub const m_Entity_nLightProbeAtlasY: usize = 0x1520; // int32
                pub const m_Entity_nLightProbeAtlasZ: usize = 0x1524; // int32
                pub const m_Entity_bEnabled: usize = 0x1531; // bool
            }
            // Parent: CBaseEntity
            // Field count: 3
            pub mod SpawnPoint {
                pub const m_iPriority: usize = 0x4A8; // int32
                pub const m_bEnabled: usize = 0x4AC; // bool
                pub const m_nType: usize = 0x4B0; // int32
            }
            // Parent: None
            // Field count: 0
            pub mod CFuncMoverAPI {
            }
            // Parent: None
            // Field count: 31
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CGameSceneNode {
                pub const m_nodeToWorld: usize = 0x10; // CTransformWS
                pub const m_pOwner: usize = 0x30; // CEntityInstance*
                pub const m_pParent: usize = 0x38; // CGameSceneNode*
                pub const m_pChild: usize = 0x40; // CGameSceneNode*
                pub const m_pNextSibling: usize = 0x48; // CGameSceneNode*
                pub const m_hParent: usize = 0x70; // CGameSceneNodeHandle
                pub const m_vecOrigin: usize = 0x80; // CNetworkOriginCellCoordQuantizedVector
                pub const m_angRotation: usize = 0xB8; // QAngle
                pub const m_flScale: usize = 0xC4; // float32
                pub const m_vecAbsOrigin: usize = 0xC8; // VectorWS
                pub const m_angAbsRotation: usize = 0xD4; // QAngle
                pub const m_flAbsScale: usize = 0xE0; // float32
                pub const m_nParentAttachmentOrBone: usize = 0xE4; // int16
                pub const m_bDebugAbsOriginChanges: usize = 0xE6; // bool
                pub const m_bDormant: usize = 0xE7; // bool
                pub const m_bForceParentToBeNetworked: usize = 0xE8; // bool
                pub const m_bDirtyHierarchy: usize = 0x0; // bitfield:1
                pub const m_bDirtyBoneMergeInfo: usize = 0x0; // bitfield:1
                pub const m_bNetworkedPositionChanged: usize = 0x0; // bitfield:1
                pub const m_bNetworkedAnglesChanged: usize = 0x0; // bitfield:1
                pub const m_bNetworkedScaleChanged: usize = 0x0; // bitfield:1
                pub const m_bWillBeCallingPostDataUpdate: usize = 0x0; // bitfield:1
                pub const m_bBoneMergeFlex: usize = 0x0; // bitfield:1
                pub const m_nLatchAbsOrigin: usize = 0x0; // bitfield:2
                pub const m_bDirtyBoneMergeBoneToRoot: usize = 0x0; // bitfield:1
                pub const m_nHierarchicalDepth: usize = 0xEB; // uint8
                pub const m_nHierarchyType: usize = 0xEC; // uint8
                pub const m_nDoNotSetAnimTimeInInvalidatePhysicsCount: usize = 0xED; // uint8
                pub const m_name: usize = 0xF0; // CUtlStringToken
                pub const m_hierarchyAttachName: usize = 0x104; // CUtlStringToken
                pub const m_flClientLocalScale: usize = 0x108; // float32
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
            pub mod CPlayer_ObserverServices {
                pub const m_iObserverMode: usize = 0x48; // uint8
                pub const m_hObserverTarget: usize = 0x4C; // CHandle<CBaseEntity>
                pub const m_iObserverLastMode: usize = 0x50; // ObserverMode_t
                pub const m_bForcedObserverMode: usize = 0x54; // bool
            }
            // Parent: CBaseModelEntity
            // Field count: 1
            pub mod CCashStack {
                pub const m_nCashStackValue: usize = 0x770; // int32
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
                pub const m_hOwner: usize = 0x1A0; // CHandle<CBaseEntity>
                pub const m_bActivated: usize = 0x1A4; // bool
                pub const m_sNameFixupStaticPrefix: usize = 0x1A8; // CUtlSymbolLarge
                pub const m_sNameFixupParent: usize = 0x1B0; // CUtlSymbolLarge
                pub const m_sNameFixupLocal: usize = 0x1B8; // CUtlSymbolLarge
                pub const m_sProceduralWorldNameForRelays: usize = 0x1C0; // CUtlSymbolLarge
            }
            // Parent: CSceneEntity
            // Field count: 0
            pub mod CSceneEntityAlias_logic_choreographed_scene {
            }
            // Parent: CBaseEntity
            // Field count: 4
            pub mod CRagdollManager {
                pub const m_iCurrentMaxRagdollCount: usize = 0x4A8; // int8
                pub const m_iMaxRagdollCount: usize = 0x4AC; // int32
                pub const m_bSaveImportant: usize = 0x4B0; // bool
                pub const m_bCanTakeDamage: usize = 0x4B1; // bool
            }
            // Parent: CSoundOpvarSetPointEntity
            // Field count: 9
            pub mod CSoundOpvarSetBoxEntity {
                pub const m_vDistanceInnerMins: usize = 0x640; // Vector
                pub const m_vDistanceInnerMaxs: usize = 0x64C; // Vector
                pub const m_vDistanceOuterMins: usize = 0x658; // Vector
                pub const m_vDistanceOuterMaxs: usize = 0x664; // Vector
                pub const m_nBoxDirection: usize = 0x670; // int32
                pub const m_vInnerMins: usize = 0x674; // Vector
                pub const m_vInnerMaxs: usize = 0x680; // Vector
                pub const m_vOuterMins: usize = 0x68C; // Vector
                pub const m_vOuterMaxs: usize = 0x698; // Vector
            }
            // Parent: CBaseTrigger
            // Field count: 12
            pub mod CPostProcessingVolume {
                pub const m_hPostSettings: usize = 0x8F8; // CStrongHandle<InfoForResourceTypeCPostProcessingResource>
                pub const m_flFadeDuration: usize = 0x900; // float32
                pub const m_flMinLogExposure: usize = 0x904; // float32
                pub const m_flMaxLogExposure: usize = 0x908; // float32
                pub const m_flMinExposure: usize = 0x90C; // float32
                pub const m_flMaxExposure: usize = 0x910; // float32
                pub const m_flExposureCompensation: usize = 0x914; // float32
                pub const m_flExposureFadeSpeedUp: usize = 0x918; // float32
                pub const m_flExposureFadeSpeedDown: usize = 0x91C; // float32
                pub const m_flTonemapEVSmoothingRange: usize = 0x920; // float32
                pub const m_bMaster: usize = 0x924; // bool
                pub const m_bExposureControl: usize = 0x925; // bool
            }
            // Parent: CPointEntity
            // Field count: 3
            pub mod CPointProximitySensor {
                pub const m_bDisabled: usize = 0x4A8; // bool
                pub const m_hTargetEntity: usize = 0x4AC; // CHandle<CBaseEntity>
                pub const m_Distance: usize = 0x4B0; // CEntityOutputTemplate<float32>
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
            // Parent: CTriggerMultiple
            // Field count: 15
            pub mod CTriggerLook {
                pub const m_hLookTarget: usize = 0x900; // CHandle<CBaseEntity>
                pub const m_flFieldOfView: usize = 0x904; // float32
                pub const m_flLookTime: usize = 0x908; // float32
                pub const m_flLookTimeTotal: usize = 0x90C; // float32
                pub const m_flLookTimeLast: usize = 0x910; // GameTime_t
                pub const m_flTimeoutDuration: usize = 0x914; // float32
                pub const m_bTimeoutFired: usize = 0x918; // bool
                pub const m_bIsLooking: usize = 0x919; // bool
                pub const m_b2DFOV: usize = 0x91A; // bool
                pub const m_bUseVelocity: usize = 0x91B; // bool
                pub const m_bTestOcclusion: usize = 0x91C; // bool
                pub const m_bTestAllVisibleOcclusion: usize = 0x91D; // bool
                pub const m_OnTimeout: usize = 0x920; // CEntityIOOutput
                pub const m_OnStartLook: usize = 0x938; // CEntityIOOutput
                pub const m_OnEndLook: usize = 0x950; // CEntityIOOutput
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Outflow_PlayVCD {
                pub const m_hChoreoScene: usize = 0x138; // CStrongHandle<InfoForResourceTypeCChoreoSceneResource>
                pub const m_OnPaused: usize = 0x140; // CPulse_OutflowConnection
                pub const m_OnResumed: usize = 0x188; // CPulse_OutflowConnection
                pub const m_OutRequirements: usize = 0x1D0; // CUtlVector<CPulseCell_Outflow_PlayVCD::VCDRequirementInfo_t>
            }
            // Parent: None
            // Field count: 0
            pub mod CCSPointScriptEntity_API {
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
                pub const m_axis: usize = 0x508; // Vector
            }
            // Parent: CBaseEntity
            // Field count: 5
            pub mod CMultiSource {
                pub const m_rgEntities: usize = 0x4A8; // CHandle<CBaseEntity>[32]
                pub const m_rgTriggered: usize = 0x528; // int32[32]
                pub const m_OnTrigger: usize = 0x5A8; // CEntityIOOutput
                pub const m_iTotal: usize = 0x5C0; // int32
                pub const m_globalstate: usize = 0x5C8; // CUtlSymbolLarge
            }
            // Parent: CCSWeaponBase
            // Field count: 13
            pub mod CBaseCSGrenade {
                pub const m_bRedraw: usize = 0x1050; // bool
                pub const m_bIsHeldByPlayer: usize = 0x1051; // bool
                pub const m_bPinPulled: usize = 0x1052; // bool
                pub const m_bJumpThrow: usize = 0x1053; // bool
                pub const m_bThrowAnimating: usize = 0x1054; // bool
                pub const m_fThrowTime: usize = 0x1058; // GameTime_t
                pub const m_flThrowStrength: usize = 0x105C; // float32
                pub const m_fDropTime: usize = 0x1060; // GameTime_t
                pub const m_fPinPullTime: usize = 0x1064; // GameTime_t
                pub const m_bJustPulledPin: usize = 0x1068; // bool
                pub const m_nNextHoldTick: usize = 0x106C; // GameTick_t
                pub const m_flNextHoldFrac: usize = 0x1070; // float32
                pub const m_hSwitchToWeaponAfterThrow: usize = 0x1074; // CHandle<CCSWeaponBase>
            }
            // Parent: CBaseEntity
            // Field count: 11
            pub mod CLogicAuto {
                pub const m_OnMapSpawn: usize = 0x4A8; // CEntityIOOutput
                pub const m_OnDemoMapSpawn: usize = 0x4C0; // CEntityIOOutput
                pub const m_OnNewGame: usize = 0x4D8; // CEntityIOOutput
                pub const m_OnLoadGame: usize = 0x4F0; // CEntityIOOutput
                pub const m_OnMapTransition: usize = 0x508; // CEntityIOOutput
                pub const m_OnBackgroundMap: usize = 0x520; // CEntityIOOutput
                pub const m_OnMultiNewMap: usize = 0x538; // CEntityIOOutput
                pub const m_OnMultiNewRound: usize = 0x550; // CEntityIOOutput
                pub const m_OnVREnabled: usize = 0x568; // CEntityIOOutput
                pub const m_OnVRNotEnabled: usize = 0x580; // CEntityIOOutput
                pub const m_globalstate: usize = 0x598; // CUtlSymbolLarge
            }
            // Parent: CBaseEntity
            // Field count: 1
            pub mod CPhysicsWire {
                pub const m_nDensity: usize = 0x4A8; // int32
            }
            // Parent: CBaseModelEntity
            // Field count: 0
            pub mod CFuncIllusionary {
            }
            // Parent: CPointEntity
            // Field count: 5
            pub mod CInfoDynamicShadowHint {
                pub const m_bDisabled: usize = 0x4A8; // bool
                pub const m_flRange: usize = 0x4AC; // float32
                pub const m_nImportance: usize = 0x4B0; // int32
                pub const m_nLightChoice: usize = 0x4B4; // int32
                pub const m_hLight: usize = 0x4B8; // CHandle<CBaseEntity>
            }
            // Parent: CBaseModelEntity
            // Field count: 1
            pub mod CMarkupVolume {
                pub const m_bDisabled: usize = 0x770; // bool
            }
            // Parent: CPointEntity
            // Field count: 6
            pub mod CPathNode {
                pub const m_vInTangentLocal: usize = 0x4A8; // Vector
                pub const m_vOutTangentLocal: usize = 0x4B4; // Vector
                pub const m_strParentPathUniqueID: usize = 0x4C0; // CUtlString
                pub const m_strPathNodeParameter: usize = 0x4C8; // CUtlString
                pub const m_xWSPrevParent: usize = 0x4D0; // CTransformWS
                pub const m_hPath: usize = 0x4F0; // CHandle<CPathWithDynamicNodes>
            }
            // Parent: CCSGO_TeamSelectCharacterPosition
            // Field count: 0
            pub mod CCSGO_TeamSelectCounterTerroristPosition {
            }
            // Parent: None
            // Field count: 0
            pub mod CPointGiveAmmo_API {
            }
            // Parent: CBaseTrigger
            // Field count: 1
            pub mod CTriggerRemove {
                pub const m_OnRemove: usize = 0x8E8; // CEntityIOOutput
            }
            // Parent: CBaseEntity
            // Field count: 5
            pub mod CLogicGameEventListener {
                pub const m_OnEventFired: usize = 0x4B8; // CEntityIOOutput
                pub const m_iszGameEventName: usize = 0x4D0; // CUtlSymbolLarge
                pub const m_iszGameEventItem: usize = 0x4D8; // CUtlSymbolLarge
                pub const m_bEnabled: usize = 0x4E0; // bool
                pub const m_bStartDisabled: usize = 0x4E1; // bool
            }
            // Parent: None
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
            // MPulseEditorCanvasItemSpecKV3
            pub mod CPulseCell_IntervalTimer {
                pub const m_Completed: usize = 0xD8; // CPulse_ResumePoint
                pub const m_OnInterval: usize = 0x120; // SignatureOutflow_Continue
            }
            // Parent: CMarkupVolumeTagged
            // Field count: 1
            pub mod CMarkupVolumeTagged_Nav {
                pub const m_nScopes: usize = 0x7B0; // NavScopeFlags_t
            }
            // Parent: SpawnPoint
            // Field count: 0
            pub mod CInfoPlayerTerrorist {
            }
            // Parent: CBaseEntity
            // Field count: 3
            pub mod CLogicAutosave {
                pub const m_bForceNewLevelUnit: usize = 0x4A8; // bool
                pub const m_minHitPoints: usize = 0x4AC; // int32
                pub const m_minHitPointsToCommit: usize = 0x4B0; // int32
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
                pub const m_bSinglePlayerGameEnding: usize = 0xD0; // bool
            }
            // Parent: None
            // Field count: 17
            //
            // Metadata:
            // MGetKV3ClassDefaults
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
                pub const m_location: usize = 0x30; // VectorWS
                pub const m_OnGustStart: usize = 0x40; // CEntityIOOutput
                pub const m_OnGustEnd: usize = 0x58; // CEntityIOOutput
                pub const m_hEntOwner: usize = 0x70; // CHandle<CBaseEntity>
            }
            // Parent: CBaseEntity
            // Field count: 7
            pub mod CPointPrefab {
                pub const m_targetMapName: usize = 0x4A8; // CUtlSymbolLarge
                pub const m_forceWorldGroupID: usize = 0x4B0; // CUtlSymbolLarge
                pub const m_associatedRelayTargetName: usize = 0x4B8; // CUtlSymbolLarge
                pub const m_fixupNames: usize = 0x4C0; // bool
                pub const m_bLoadDynamic: usize = 0x4C1; // bool
                pub const m_associatedRelayEntity: usize = 0x4C4; // CHandle<CPointPrefab>
                pub const m_ProceduralRelaySources: usize = 0x4C8; // CUtlVector<CHandle<CBaseEntity>>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_BaseLerp {
                pub const m_WakeResume: usize = 0xD8; // CPulse_ResumePoint
            }
            // Parent: CPointEntity
            // Field count: 9
            pub mod CEnvInstructorVRHint {
                pub const m_iszName: usize = 0x4A8; // CUtlSymbolLarge
                pub const m_iszHintTargetEntity: usize = 0x4B0; // CUtlSymbolLarge
                pub const m_iTimeout: usize = 0x4B8; // int32
                pub const m_iszCaption: usize = 0x4C0; // CUtlSymbolLarge
                pub const m_iszStartSound: usize = 0x4C8; // CUtlSymbolLarge
                pub const m_iLayoutFileType: usize = 0x4D0; // int32
                pub const m_iszCustomLayoutFile: usize = 0x4D8; // CUtlSymbolLarge
                pub const m_iAttachType: usize = 0x4E0; // int32
                pub const m_flHeightOffset: usize = 0x4E4; // float32
            }
            // Parent: CGameRulesProxy
            // Field count: 1
            pub mod CCSGameRulesProxy {
                pub const m_pGameRules: usize = 0x4A8; // CCSGameRules*
            }
            // Parent: None
            // Field count: 0
            pub mod CPointValueRemapperAPI {
            }
            // Parent: CBaseTrigger
            // Field count: 0
            pub mod CPrecipitation {
            }
            // Parent: CSprite
            // Field count: 0
            pub mod CCommentaryViewPosition {
            }
            // Parent: CBaseEntity
            // Field count: 5
            pub mod CEnvGlobal {
                pub const m_outCounter: usize = 0x4A8; // CEntityOutputTemplate<int32>
                pub const m_globalstate: usize = 0x4C8; // CUtlSymbolLarge
                pub const m_triggermode: usize = 0x4D0; // int32
                pub const m_initialstate: usize = 0x4D4; // int32
                pub const m_counter: usize = 0x4D8; // int32
            }
            // Parent: None
            // Field count: 0
            pub mod CLogicNPCCounterOBB {
            }
            // Parent: None
            // Field count: 1
            pub mod CPlatTrigger {
                pub const m_pPlatform: usize = 0x770; // CHandle<CFuncPlat>
            }
            // Parent: CPointEntity
            // Field count: 65
            pub mod CSceneEntity {
                pub const m_iszSceneFile: usize = 0x4B0; // CUtlSymbolLarge
                pub const m_iszTarget1: usize = 0x4B8; // CUtlSymbolLarge
                pub const m_iszTarget2: usize = 0x4C0; // CUtlSymbolLarge
                pub const m_iszTarget3: usize = 0x4C8; // CUtlSymbolLarge
                pub const m_iszTarget4: usize = 0x4D0; // CUtlSymbolLarge
                pub const m_iszTarget5: usize = 0x4D8; // CUtlSymbolLarge
                pub const m_iszTarget6: usize = 0x4E0; // CUtlSymbolLarge
                pub const m_iszTarget7: usize = 0x4E8; // CUtlSymbolLarge
                pub const m_iszTarget8: usize = 0x4F0; // CUtlSymbolLarge
                pub const m_hTarget1: usize = 0x4F8; // CHandle<CBaseEntity>
                pub const m_hTarget2: usize = 0x4FC; // CHandle<CBaseEntity>
                pub const m_hTarget3: usize = 0x500; // CHandle<CBaseEntity>
                pub const m_hTarget4: usize = 0x504; // CHandle<CBaseEntity>
                pub const m_hTarget5: usize = 0x508; // CHandle<CBaseEntity>
                pub const m_hTarget6: usize = 0x50C; // CHandle<CBaseEntity>
                pub const m_hTarget7: usize = 0x510; // CHandle<CBaseEntity>
                pub const m_hTarget8: usize = 0x514; // CHandle<CBaseEntity>
                pub const m_hLocatorOrigin: usize = 0x518; // CHandle<CBaseEntity>
                pub const m_sTargetAttachment: usize = 0x520; // CUtlSymbolLarge
                pub const m_bIsPlayingBack: usize = 0x528; // bool
                pub const m_bPaused: usize = 0x529; // bool
                pub const m_bMultiplayer: usize = 0x52A; // bool
                pub const m_bAutogenerated: usize = 0x52B; // bool
                pub const m_flForceClientTime: usize = 0x52C; // float32
                pub const m_flCurrentTime: usize = 0x530; // float32
                pub const m_flFrameTime: usize = 0x534; // float32
                pub const m_bCancelAtNextInterrupt: usize = 0x538; // bool
                pub const m_fPitch: usize = 0x53C; // float32
                pub const m_bAutomated: usize = 0x540; // bool
                pub const m_nAutomatedAction: usize = 0x544; // int32
                pub const m_flAutomationDelay: usize = 0x548; // float32
                pub const m_flAutomationTime: usize = 0x54C; // float32
                pub const m_nSpeechPriority: usize = 0x550; // int32
                pub const m_bPausedViaInput: usize = 0x554; // bool
                pub const m_bPauseAtNextInterrupt: usize = 0x555; // bool
                pub const m_bWaitingForActor: usize = 0x556; // bool
                pub const m_bWaitingForInterrupt: usize = 0x557; // bool
                pub const m_bInterruptedActorsScenes: usize = 0x558; // bool
                pub const m_bBreakOnNonIdle: usize = 0x559; // bool
                pub const m_bSceneFinished: usize = 0x55A; // bool
                pub const m_hActorList: usize = 0x560; // CNetworkUtlVectorBase<CHandle<CBaseModelEntity>>
                pub const m_hRemoveActorList: usize = 0x578; // CUtlVector<CHandle<CBaseEntity>>
                pub const m_nSceneStringIndex: usize = 0x5C0; // uint16
                pub const m_OnStart: usize = 0x5C8; // CEntityIOOutput
                pub const m_OnCompletion: usize = 0x5E0; // CEntityIOOutput
                pub const m_OnCanceled: usize = 0x5F8; // CEntityIOOutput
                pub const m_OnPaused: usize = 0x610; // CEntityIOOutput
                pub const m_OnResumed: usize = 0x628; // CEntityIOOutput
                pub const m_OnPulseRequirement: usize = 0x640; // CEntityIOOutput
                pub const m_ActorMap: usize = 0x748; // CUtlVector<ActorMapping_t>
                pub const m_hInterruptScene: usize = 0x788; // CHandle<CSceneEntity>
                pub const m_nInterruptCount: usize = 0x78C; // int32
                pub const m_bSceneMissing: usize = 0x790; // bool
                pub const m_bInterrupted: usize = 0x791; // bool
                pub const m_bCompletedEarly: usize = 0x792; // bool
                pub const m_bInterruptSceneFinished: usize = 0x793; // bool
                pub const m_bRestoring: usize = 0x794; // bool
                pub const m_hNotifySceneCompletion: usize = 0x798; // CUtlVector<CHandle<CSceneEntity>>
                pub const m_hListManagers: usize = 0x7B0; // CUtlVector<CHandle<CSceneListManager>>
                pub const m_iszSoundName: usize = 0x7C8; // CUtlSymbolLarge
                pub const m_iszSequenceName: usize = 0x7D0; // CUtlSymbolLarge
                pub const m_hActor: usize = 0x7D8; // CHandle<CBaseModelEntity>
                pub const m_hActivator: usize = 0x7DC; // CHandle<CBaseEntity>
                pub const m_BusyActor: usize = 0x7E0; // int32
                pub const m_iPlayerDeathBehavior: usize = 0x7E4; // SceneOnPlayerDeath_t
            }
            // Parent: CPointEntity
            // Field count: 0
            pub mod CChoreoInfoTarget {
            }
            // Parent: CBaseEntity
            // Field count: 5
            pub mod CTonemapController2 {
                pub const m_flAutoExposureMin: usize = 0x4A8; // float32
                pub const m_flAutoExposureMax: usize = 0x4AC; // float32
                pub const m_flExposureAdaptationSpeedUp: usize = 0x4B0; // float32
                pub const m_flExposureAdaptationSpeedDown: usize = 0x4B4; // float32
                pub const m_flTonemapEVSmoothingRange: usize = 0x4B8; // float32
            }
            // Parent: CBaseEntity
            // Field count: 1
            pub mod CMapSharedEnvironment {
                pub const m_targetMapName: usize = 0x4A8; // CUtlSymbolLarge
            }
            // Parent: None
            // Field count: 0
            pub mod CTakeDamageResultAPI {
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
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
                pub const m_OnMagnetAttach: usize = 0x960; // CEntityIOOutput
                pub const m_OnMagnetDetach: usize = 0x978; // CEntityIOOutput
                pub const m_massScale: usize = 0x990; // float32
                pub const m_forceLimit: usize = 0x994; // float32
                pub const m_torqueLimit: usize = 0x998; // float32
                pub const m_MagnettedEntities: usize = 0x9A0; // CUtlVector<magnetted_objects_t>
                pub const m_bActive: usize = 0x9B8; // bool
                pub const m_bHasHitSomething: usize = 0x9B9; // bool
                pub const m_flTotalMass: usize = 0x9BC; // float32
                pub const m_flRadius: usize = 0x9C0; // float32
                pub const m_flNextSuckTime: usize = 0x9C4; // GameTime_t
                pub const m_iMaxObjectsAttached: usize = 0x9C8; // int32
            }
            // Parent: None
            // Field count: 3
            pub mod CEntityInstance {
                pub const m_iszPrivateVScripts: usize = 0x8; // CUtlSymbolLarge
                pub const m_pEntity: usize = 0x10; // CEntityIdentity*
                pub const m_CScriptComponent: usize = 0x28; // CScriptComponent*
            }
            // Parent: CBaseEntity
            // Field count: 4
            pub mod CGameGibManager {
                pub const m_bAllowNewGibs: usize = 0x4C0; // bool
                pub const m_iCurrentMaxPieces: usize = 0x4C4; // int32
                pub const m_iMaxPieces: usize = 0x4C8; // int32
                pub const m_iLastFrame: usize = 0x4CC; // int32
            }
            // Parent: CBaseEntity
            // Field count: 0
            pub mod CHandleDummy {
            }
            // Parent: CBaseModelEntity
            // Field count: 0
            pub mod CFuncWallToggle {
            }
            // Parent: CPlayerPawnComponent
            // Field count: 1
            pub mod CCSPlayer_BulletServices {
                pub const m_totalHitsOnServer: usize = 0x48; // int32
            }
            // Parent: CBaseEntity
            // Field count: 4
            pub mod CSkyCamera {
                pub const m_skyboxData: usize = 0x4A8; // sky3dparams_t
                pub const m_skyboxSlotToken: usize = 0x538; // CUtlStringToken
                pub const m_bUseAngles: usize = 0x53C; // bool
                pub const m_pNext: usize = 0x540; // CSkyCamera*
            }
            // Parent: CCSGO_EndOfMatchLineupEndpoint
            // Field count: 0
            pub mod CCSGO_EndOfMatchLineupEnd {
            }
            // Parent: None
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
                pub const m_position2: usize = 0x508; // VectorWS
                pub const m_offset: usize = 0x514; // Vector[2]
                pub const m_addLength: usize = 0x52C; // float32
                pub const m_gearRatio: usize = 0x530; // float32
            }
            // Parent: CBaseEntity
            // Field count: 0
            pub mod CCSPetPlacement {
            }
            // Parent: None
            // Field count: 0
            pub mod CEnvWindSharedAPI {
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            pub mod CWeaponMP5SD {
            }
            // Parent: CCSWeaponBase
            // Field count: 2
            pub mod CWeaponBaseItem {
                pub const m_bSequenceInProgress: usize = 0x1050; // bool
                pub const m_bRedraw: usize = 0x1051; // bool
            }
            // Parent: CBaseEntity
            // Field count: 3
            pub mod CCommentaryAuto {
                pub const m_OnCommentaryNewGame: usize = 0x4A8; // CEntityIOOutput
                pub const m_OnCommentaryMidGame: usize = 0x4C0; // CEntityIOOutput
                pub const m_OnCommentaryMultiplayerSpawn: usize = 0x4D8; // CEntityIOOutput
            }
            // Parent: None
            // Field count: 0
            pub mod CMapInfo_API {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Outflow_ListenForEntityOutput__CursorState_t {
                pub const m_entity: usize = 0x0; // CHandle<CBaseEntity>
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
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
            // Parent: CBaseEntity
            // Field count: 1
            pub mod CSoundStackSave {
                pub const m_iszStackName: usize = 0x4A8; // CUtlSymbolLarge
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
            // Parent: CBaseEntity
            // Field count: 9
            pub mod CLogicMeasureMovement {
                pub const m_strMeasureTarget: usize = 0x4A8; // CUtlSymbolLarge
                pub const m_strMeasureReference: usize = 0x4B0; // CUtlSymbolLarge
                pub const m_strTargetReference: usize = 0x4B8; // CUtlSymbolLarge
                pub const m_hMeasureTarget: usize = 0x4C0; // CHandle<CBaseEntity>
                pub const m_hMeasureReference: usize = 0x4C4; // CHandle<CBaseEntity>
                pub const m_hTarget: usize = 0x4C8; // CHandle<CBaseEntity>
                pub const m_hTargetReference: usize = 0x4CC; // CHandle<CBaseEntity>
                pub const m_flScale: usize = 0x4D0; // float32
                pub const m_nMeasureType: usize = 0x4D4; // int32
            }
            // Parent: CBaseEntity
            // Field count: 4
            pub mod CLogicActivityEvent {
                pub const m_nEventType: usize = 0x4A8; // int32
                pub const m_flDuration: usize = 0x4AC; // float32
                pub const m_iszSourceEntityName: usize = 0x4B0; // CUtlSymbolLarge
                pub const m_hSource: usize = 0x4B8; // CEntityHandle
            }
            // Parent: CCSWeaponBase
            // Field count: 11
            pub mod CC4 {
                pub const m_vecLastValidPlayerHeldPosition: usize = 0x1080; // VectorWS
                pub const m_vecLastValidDroppedPosition: usize = 0x108C; // VectorWS
                pub const m_bDoValidDroppedPositionCheck: usize = 0x1098; // bool
                pub const m_bStartedArming: usize = 0x1099; // bool
                pub const m_fArmedTime: usize = 0x109C; // GameTime_t
                pub const m_bBombPlacedAnimation: usize = 0x10A0; // bool
                pub const m_bIsPlantingViaUse: usize = 0x10A1; // bool
                pub const m_entitySpottedState: usize = 0x10A8; // EntitySpottedState_t
                pub const m_nSpotRules: usize = 0x10C0; // int32
                pub const m_bPlayedArmingBeeps: usize = 0x10C4; // bool[7]
                pub const m_bBombPlanted: usize = 0x10CB; // bool
            }
            // Parent: CBaseAnimGraph
            // Field count: 0
            pub mod CHostageCarriableProp {
            }
            // Parent: CDynamicProp
            // Field count: 0
            pub mod CDynamicPropAlias_cable_dynamic {
            }
            // Parent: None
            // Field count: 0
            pub mod CLogicEventListener_API {
            }
            // Parent: CCSPlayerBase_CameraServices
            // Field count: 0
            pub mod CCSObserver_CameraServices {
            }
            // Parent: CBaseEntity
            // Field count: 2
            pub mod CEnvDetailController {
                pub const m_flFadeStartDist: usize = 0x4A8; // float32
                pub const m_flFadeEndDist: usize = 0x4AC; // float32
            }
            // Parent: CBasePlayerPawn
            // Field count: 15
            pub mod CCSPlayerPawnBase {
                pub const m_CTouchExpansionComponent: usize = 0xBF0; // CTouchExpansionComponent
                pub const m_pPingServices: usize = 0xC40; // CCSPlayer_PingServices*
                pub const m_blindUntilTime: usize = 0xC48; // GameTime_t
                pub const m_blindStartTime: usize = 0xC4C; // GameTime_t
                pub const m_iPlayerState: usize = 0xC50; // CSPlayerState
                pub const m_bRespawning: usize = 0xD00; // bool
                pub const m_bHasMovedSinceSpawn: usize = 0xD01; // bool
                pub const m_iNumSpawns: usize = 0xD04; // int32
                pub const m_flIdleTimeSinceLastAction: usize = 0xD0C; // float32
                pub const m_fNextRadarUpdateTime: usize = 0xD10; // float32
                pub const m_flFlashDuration: usize = 0xD14; // float32
                pub const m_flFlashMaxAlpha: usize = 0xD18; // float32
                pub const m_flProgressBarStartTime: usize = 0xD1C; // float32
                pub const m_iProgressBarDuration: usize = 0xD20; // int32
                pub const m_hOriginalController: usize = 0xD24; // CHandle<CCSPlayerController>
            }
            // Parent: CEnvSoundscape
            // Field count: 1
            pub mod CEnvSoundscapeProxy {
                pub const m_MainSoundscapeName: usize = 0x538; // CUtlSymbolLarge
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
            pub mod CBombTarget {
                pub const m_OnBombExplode: usize = 0x8E8; // CEntityIOOutput
                pub const m_OnBombPlanted: usize = 0x900; // CEntityIOOutput
                pub const m_OnBombDefused: usize = 0x918; // CEntityIOOutput
                pub const m_bIsBombSiteB: usize = 0x930; // bool
                pub const m_bIsHeistBombTarget: usize = 0x931; // bool
                pub const m_bBombPlantedHere: usize = 0x932; // bool
                pub const m_szMountTarget: usize = 0x938; // CUtlSymbolLarge
                pub const m_hInstructorHint: usize = 0x940; // CHandle<CBaseEntity>
                pub const m_nBombSiteDesignation: usize = 0x944; // int32
            }
            // Parent: CBaseModelEntity
            // Field count: 1
            pub mod CRuleEntity {
                pub const m_iszMaster: usize = 0x770; // CUtlSymbolLarge
            }
            // Parent: None
            // Field count: 1
            pub mod CPhysThruster {
                pub const m_localOrigin: usize = 0x508; // Vector
            }
            // Parent: CPointEntity
            // Field count: 3
            pub mod CInfoPlayerStart {
                pub const m_bDisabled: usize = 0x4A8; // bool
                pub const m_bIsMaster: usize = 0x4A9; // bool
                pub const m_pPawnSubclass: usize = 0x4B0; // CGlobalSymbol
            }
            // Parent: None
            // Field count: 10
            pub mod CEntityFlame {
                pub const m_hEntAttached: usize = 0x4A8; // CHandle<CBaseEntity>
                pub const m_bCheapEffect: usize = 0x4AC; // bool
                pub const m_flSize: usize = 0x4B0; // float32
                pub const m_bUseHitboxes: usize = 0x4B4; // bool
                pub const m_iNumHitboxFires: usize = 0x4B8; // int32
                pub const m_flHitboxFireScale: usize = 0x4BC; // float32
                pub const m_flLifetime: usize = 0x4C0; // GameTime_t
                pub const m_hAttacker: usize = 0x4C4; // CHandle<CBaseEntity>
                pub const m_flDirectDamagePerSecond: usize = 0x4C8; // float32
                pub const m_iCustomDamageType: usize = 0x4CC; // int32
            }
            // Parent: CGameSceneNode
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CSkeletonInstance {
                pub const m_modelState: usize = 0x120; // CModelState
                pub const m_bUseParentRenderBounds: usize = 0x3B0; // bool
                pub const m_bDisableSolidCollisionsForHierarchy: usize = 0x3B1; // bool
                pub const m_bDirtyMotionType: usize = 0x3B2; // bool
                pub const m_bIsGeneratingLatchedParentSpaceState: usize = 0x3B3; // bool
                pub const m_materialGroup: usize = 0x3B8; // CUtlStringToken
                pub const m_nHitboxSet: usize = 0x3BC; // uint8
                pub const m_bForceServerConstraintsEnabled: usize = 0x41C; // bool
            }
            // Parent: None
            // Field count: 0
            pub mod CEntityComponent {
            }
            // Parent: CBaseToggle
            // Field count: 5
            pub mod CBasePlatTrain {
                pub const m_NoiseMoving: usize = 0x7F0; // CGameSoundEventName
                pub const m_NoiseArrived: usize = 0x7F8; // CGameSoundEventName
                pub const m_volume: usize = 0x808; // float32
                pub const m_flTWidth: usize = 0x80C; // float32
                pub const m_flTLength: usize = 0x810; // float32
            }
            // Parent: CBaseEntity
            // Field count: 4
            pub mod CPointTeleport {
                pub const m_vSaveOrigin: usize = 0x4A8; // VectorWS
                pub const m_vSaveAngles: usize = 0x4B4; // QAngle
                pub const m_bTeleportParentedEntities: usize = 0x4C0; // bool
                pub const m_bTeleportUseCurrentAngle: usize = 0x4C1; // bool
            }
            // Parent: CBaseTrigger
            // Field count: 3
            pub mod CTriggerGameEvent {
                pub const m_strStartTouchEventName: usize = 0x8E8; // CUtlString
                pub const m_strEndTouchEventName: usize = 0x8F0; // CUtlString
                pub const m_strTriggerID: usize = 0x8F8; // CUtlString
            }
            // Parent: CPointEntity
            // Field count: 5
            pub mod CMessageEntity {
                pub const m_radius: usize = 0x4A8; // int32
                pub const m_messageText: usize = 0x4B0; // CUtlSymbolLarge
                pub const m_drawText: usize = 0x4B8; // bool
                pub const m_bDeveloperOnly: usize = 0x4B9; // bool
                pub const m_bEnabled: usize = 0x4BA; // bool
            }
            // Parent: CBaseEntity
            // Field count: 1
            pub mod CEnvEntityIgniter {
                pub const m_flLifetime: usize = 0x4A8; // float32
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
                pub const m_nScopes: usize = 0x7D8; // NavScopeFlags_t
                pub const m_bFloodFillAttribute: usize = 0x7D9; // bool
                pub const m_bSplitNavSpace: usize = 0x7DA; // bool
            }
            // Parent: CBaseEntity
            // Field count: 8
            pub mod CMultiLightProxy {
                pub const m_iszLightNameFilter: usize = 0x4A8; // CUtlSymbolLarge
                pub const m_iszLightClassFilter: usize = 0x4B0; // CUtlSymbolLarge
                pub const m_flLightRadiusFilter: usize = 0x4B8; // float32
                pub const m_flBrightnessDelta: usize = 0x4BC; // float32
                pub const m_bPerformScreenFade: usize = 0x4C0; // bool
                pub const m_flTargetBrightnessMultiplier: usize = 0x4C4; // float32
                pub const m_flCurrentBrightnessMultiplier: usize = 0x4C8; // float32
                pub const m_vecLights: usize = 0x4D0; // CUtlVector<CHandle<CLightEntity>>
            }
            // Parent: None
            // Field count: 0
            pub mod CPlantedC4_API {
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            pub mod CWeaponM4A1 {
            }
            // Parent: CBaseTrigger
            // Field count: 0
            pub mod CTriggerHostageReset {
            }
            // Parent: CEconEntity
            // Field count: 2
            pub mod CEconWearable {
                pub const m_nForceSkin: usize = 0xC90; // int32
                pub const m_bAlwaysAllow: usize = 0xC94; // bool
            }
            // Parent: None
            // Field count: 0
            pub mod CChicken_API {
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
            pub mod CFuncLadder {
                pub const m_vecLadderDir: usize = 0x770; // Vector
                pub const m_Dismounts: usize = 0x780; // CUtlVector<CHandle<CInfoLadderDismount>>
                pub const m_vecLocalTop: usize = 0x798; // Vector
                pub const m_vecPlayerMountPositionTop: usize = 0x7A4; // VectorWS
                pub const m_vecPlayerMountPositionBottom: usize = 0x7B0; // VectorWS
                pub const m_flAutoRideSpeed: usize = 0x7BC; // float32
                pub const m_bDisabled: usize = 0x7C0; // bool
                pub const m_bFakeLadder: usize = 0x7C1; // bool
                pub const m_bHasSlack: usize = 0x7C2; // bool
                pub const m_surfacePropName: usize = 0x7C8; // CUtlSymbolLarge
                pub const m_OnPlayerGotOnLadder: usize = 0x7D0; // CEntityIOOutput
                pub const m_OnPlayerGotOffLadder: usize = 0x7E8; // CEntityIOOutput
            }
            // Parent: CBaseEntity
            // Field count: 3
            pub mod CFogController {
                pub const m_fog: usize = 0x4A8; // fogparams_t
                pub const m_bUseAngles: usize = 0x510; // bool
                pub const m_iChangedVariables: usize = 0x514; // int32
            }
            // Parent: None
            // Field count: 0
            pub mod CPointTemplateAPI {
            }
            // Parent: CBaseAnimGraph
            // Field count: 8
            pub mod CItem {
                pub const m_OnPlayerTouch: usize = 0x968; // CEntityIOOutput
                pub const m_OnPlayerPickup: usize = 0x980; // CEntityIOOutput
                pub const m_bActivateWhenAtRest: usize = 0x998; // bool
                pub const m_OnCacheInteraction: usize = 0x9A0; // CEntityIOOutput
                pub const m_OnGlovePulled: usize = 0x9B8; // CEntityIOOutput
                pub const m_vOriginalSpawnOrigin: usize = 0x9D0; // VectorWS
                pub const m_vOriginalSpawnAngles: usize = 0x9DC; // QAngle
                pub const m_bPhysStartAsleep: usize = 0x9E8; // bool
            }
            // Parent: CBaseTrigger
            // Field count: 8
            pub mod CTriggerPush {
                pub const m_angPushEntitySpace: usize = 0x8E8; // QAngle
                pub const m_vecPushDirEntitySpace: usize = 0x8F4; // Vector
                pub const m_bTriggerOnStartTouch: usize = 0x900; // bool
                pub const m_bUsePathSimple: usize = 0x901; // bool
                pub const m_iszPathSimpleName: usize = 0x908; // CUtlSymbolLarge
                pub const m_PathSimple: usize = 0x910; // CHandle<CPathSimple>
                pub const m_splinePushType: usize = 0x914; // uint32
                pub const m_flSpeed: usize = 0x918; // float32
            }
            // Parent: CBaseAnimGraph
            // Field count: 4
            pub mod CBaseProp {
                pub const m_bModelOverrodeBlockLOS: usize = 0x960; // bool
                pub const m_iShapeType: usize = 0x964; // int32
                pub const m_bConformToCollisionBounds: usize = 0x968; // bool
                pub const m_mPreferredCatchTransform: usize = 0x970; // CTransform
            }
            // Parent: CPointEntity
            // Field count: 11
            pub mod CInfoOffscreenPanoramaTexture {
                pub const m_bDisabled: usize = 0x4A8; // bool
                pub const m_nResolutionX: usize = 0x4AC; // int32
                pub const m_nResolutionY: usize = 0x4B0; // int32
                pub const m_szPanelType: usize = 0x4B8; // CUtlSymbolLarge
                pub const m_szLayoutFileName: usize = 0x4C0; // CUtlSymbolLarge
                pub const m_RenderAttrName: usize = 0x4C8; // CUtlSymbolLarge
                pub const m_TargetEntities: usize = 0x4D0; // CNetworkUtlVectorBase<CHandle<CBaseModelEntity>>
                pub const m_nTargetChangeCount: usize = 0x4E8; // int32
                pub const m_vecCSSClasses: usize = 0x4F0; // CNetworkUtlVectorBase<CUtlSymbolLarge>
                pub const m_szTargetsName: usize = 0x508; // CUtlSymbolLarge
                pub const m_AdditionalTargetEntities: usize = 0x510; // CUtlVector<CHandle<CBaseModelEntity>>
            }
            // Parent: CPointEntity
            // Field count: 16
            pub mod CPointAngularVelocitySensor {
                pub const m_hTargetEntity: usize = 0x4A8; // CHandle<CBaseEntity>
                pub const m_flThreshold: usize = 0x4AC; // float32
                pub const m_nLastCompareResult: usize = 0x4B0; // int32
                pub const m_nLastFireResult: usize = 0x4B4; // int32
                pub const m_flFireTime: usize = 0x4B8; // GameTime_t
                pub const m_flFireInterval: usize = 0x4BC; // float32
                pub const m_flLastAngVelocity: usize = 0x4C0; // float32
                pub const m_lastOrientation: usize = 0x4C4; // QAngle
                pub const m_vecAxis: usize = 0x4D0; // VectorWS
                pub const m_bUseHelper: usize = 0x4DC; // bool
                pub const m_AngularVelocity: usize = 0x4E0; // CEntityOutputTemplate<float32>
                pub const m_OnLessThan: usize = 0x500; // CEntityIOOutput
                pub const m_OnLessThanOrEqualTo: usize = 0x518; // CEntityIOOutput
                pub const m_OnGreaterThan: usize = 0x530; // CEntityIOOutput
                pub const m_OnGreaterThanOrEqualTo: usize = 0x548; // CEntityIOOutput
                pub const m_OnEqualTo: usize = 0x560; // CEntityIOOutput
            }
            // Parent: CBaseEntity
            // Field count: 6
            pub mod CPlayerVisibility {
                pub const m_flVisibilityStrength: usize = 0x4A8; // float32
                pub const m_flFogDistanceMultiplier: usize = 0x4AC; // float32
                pub const m_flFogMaxDensityMultiplier: usize = 0x4B0; // float32
                pub const m_flFadeTime: usize = 0x4B4; // float32
                pub const m_bStartDisabled: usize = 0x4B8; // bool
                pub const m_bIsEnabled: usize = 0x4B9; // bool
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
            pub mod CBasePlayerWeapon {
                pub const m_nNextPrimaryAttackTick: usize = 0xC90; // GameTick_t
                pub const m_flNextPrimaryAttackTickRatio: usize = 0xC94; // float32
                pub const m_nNextSecondaryAttackTick: usize = 0xC98; // GameTick_t
                pub const m_flNextSecondaryAttackTickRatio: usize = 0xC9C; // float32
                pub const m_iClip1: usize = 0xCA0; // int32
                pub const m_iClip2: usize = 0xCA4; // int32
                pub const m_pReserveAmmo: usize = 0xCA8; // int32[2]
                pub const m_OnPlayerUse: usize = 0xCB0; // CEntityIOOutput
            }
            // Parent: None
            // Field count: 84
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertySuppressBaseClassField
            // MPropertySuppressBaseClassField
            pub mod CCSWeaponBaseVData {
                pub const m_WeaponType: usize = 0x520; // CSWeaponType
                pub const m_WeaponCategory: usize = 0x524; // CSWeaponCategory
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
                pub const m_flCycleTimeWhenInBurstMode: usize = 0x748; // float32
                pub const m_flTimeBetweenBurstShots: usize = 0x74C; // float32
                pub const m_flMaxSpeed: usize = 0x750; // CFiringModeFloat
                pub const m_flSpread: usize = 0x758; // CFiringModeFloat
                pub const m_flInaccuracyCrouch: usize = 0x760; // CFiringModeFloat
                pub const m_flInaccuracyStand: usize = 0x768; // CFiringModeFloat
                pub const m_flInaccuracyJump: usize = 0x770; // CFiringModeFloat
                pub const m_flInaccuracyLand: usize = 0x778; // CFiringModeFloat
                pub const m_flInaccuracyLadder: usize = 0x780; // CFiringModeFloat
                pub const m_flInaccuracyFire: usize = 0x788; // CFiringModeFloat
                pub const m_flInaccuracyMove: usize = 0x790; // CFiringModeFloat
                pub const m_flRecoilAngle: usize = 0x798; // CFiringModeFloat
                pub const m_flRecoilAngleVariance: usize = 0x7A0; // CFiringModeFloat
                pub const m_flRecoilMagnitude: usize = 0x7A8; // CFiringModeFloat
                pub const m_flRecoilMagnitudeVariance: usize = 0x7B0; // CFiringModeFloat
                pub const m_nTracerFrequency: usize = 0x7B8; // CFiringModeInt
                pub const m_flInaccuracyJumpInitial: usize = 0x7C0; // float32
                pub const m_flInaccuracyJumpApex: usize = 0x7C4; // float32
                pub const m_flInaccuracyReload: usize = 0x7C8; // float32
                pub const m_flDeployDuration: usize = 0x7CC; // float32
                pub const m_flDisallowAttackAfterReloadStartDuration: usize = 0x7D0; // float32
                pub const m_nBurstShotCount: usize = 0x7D4; // int32
                pub const m_bAllowBurstHolster: usize = 0x7D8; // bool
                pub const m_nRecoilSeed: usize = 0x7DC; // int32
                pub const m_nSpreadSeed: usize = 0x7E0; // int32
                pub const m_flAttackMovespeedFactor: usize = 0x7E4; // float32
                pub const m_flInaccuracyPitchShift: usize = 0x7E8; // float32
                pub const m_flInaccuracyAltSoundThreshold: usize = 0x7EC; // float32
                pub const m_szUseRadioSubtitle: usize = 0x7F0; // CUtlString
                pub const m_bUnzoomsAfterShot: usize = 0x7F8; // bool
                pub const m_bHideViewModelWhenZoomed: usize = 0x7F9; // bool
                pub const m_nZoomLevels: usize = 0x7FC; // int32
                pub const m_nZoomFOV1: usize = 0x800; // int32
                pub const m_nZoomFOV2: usize = 0x804; // int32
                pub const m_flZoomTime0: usize = 0x808; // float32
                pub const m_flZoomTime1: usize = 0x80C; // float32
                pub const m_flZoomTime2: usize = 0x810; // float32
                pub const m_flIronSightPullUpSpeed: usize = 0x814; // float32
                pub const m_flIronSightPutDownSpeed: usize = 0x818; // float32
                pub const m_flIronSightFOV: usize = 0x81C; // float32
                pub const m_flIronSightPivotForward: usize = 0x820; // float32
                pub const m_flIronSightLooseness: usize = 0x824; // float32
                pub const m_nDamage: usize = 0x828; // int32
                pub const m_flHeadshotMultiplier: usize = 0x82C; // float32
                pub const m_flArmorRatio: usize = 0x830; // float32
                pub const m_flPenetration: usize = 0x834; // float32
                pub const m_flRange: usize = 0x838; // float32
                pub const m_flRangeModifier: usize = 0x83C; // float32
                pub const m_flFlinchVelocityModifierLarge: usize = 0x840; // float32
                pub const m_flFlinchVelocityModifierSmall: usize = 0x844; // float32
                pub const m_flRecoveryTimeCrouch: usize = 0x848; // float32
                pub const m_flRecoveryTimeStand: usize = 0x84C; // float32
                pub const m_flRecoveryTimeCrouchFinal: usize = 0x850; // float32
                pub const m_flRecoveryTimeStandFinal: usize = 0x854; // float32
                pub const m_nRecoveryTransitionStartBullet: usize = 0x858; // int32
                pub const m_nRecoveryTransitionEndBullet: usize = 0x85C; // int32
                pub const m_flThrowVelocity: usize = 0x860; // float32
                pub const m_vSmokeColor: usize = 0x864; // Vector
                pub const m_szAnimClass: usize = 0x870; // CGlobalSymbol
            }
            // Parent: CPointEntity
            // Field count: 7
            pub mod CPhysForce {
                pub const m_pController: usize = 0x4A8; // IPhysicsMotionController*
                pub const m_nameAttach: usize = 0x4B0; // CUtlSymbolLarge
                pub const m_force: usize = 0x4B8; // float32
                pub const m_forceTime: usize = 0x4BC; // float32
                pub const m_attachedObject: usize = 0x4C0; // CHandle<CBaseEntity>
                pub const m_wasRestored: usize = 0x4C4; // bool
                pub const m_integrator: usize = 0x4C8; // CConstantForceController
            }
            // Parent: None
            // Field count: 6
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
            pub mod CPlayer_CameraServices {
                pub const m_vecCsViewPunchAngle: usize = 0x48; // QAngle
                pub const m_nCsViewPunchAngleTick: usize = 0x54; // GameTick_t
                pub const m_flCsViewPunchAngleTickRatio: usize = 0x58; // float32
                pub const m_PlayerFog: usize = 0x60; // fogplayerparams_t
                pub const m_hColorCorrectionCtrl: usize = 0xA0; // CHandle<CColorCorrection>
                pub const m_hViewEntity: usize = 0xA4; // CHandle<CBaseEntity>
                pub const m_hTonemapController: usize = 0xA8; // CHandle<CTonemapController2>
                pub const m_audio: usize = 0xB0; // audioparams_t
                pub const m_PostProcessingVolumes: usize = 0x128; // CNetworkUtlVectorBase<CHandle<CPostProcessingVolume>>
                pub const m_flOldPlayerZ: usize = 0x140; // float32
                pub const m_flOldPlayerViewOffsetZ: usize = 0x144; // float32
                pub const m_hTriggerSoundscapeList: usize = 0x160; // CUtlVector<CHandle<CEnvSoundscapeTriggerable>>
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Timeline {
                pub const m_TimelineEvents: usize = 0xD8; // CUtlVector<CPulseCell_Timeline::TimelineEvent_t>
                pub const m_bWaitForChildOutflows: usize = 0xF0; // bool
                pub const m_OnFinished: usize = 0xF8; // CPulse_ResumePoint
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
                pub const m_sAttributeName: usize = 0x4E0; // CUtlSymbolLarge
            }
            // Parent: CPointEntity
            // Field count: 8
            pub mod CKeepUpright {
                pub const m_worldGoalAxis: usize = 0x4B0; // Vector
                pub const m_localTestAxis: usize = 0x4BC; // Vector
                pub const m_pController: usize = 0x4C8; // IPhysicsMotionController*
                pub const m_nameAttach: usize = 0x4D0; // CUtlSymbolLarge
                pub const m_attachedObject: usize = 0x4D8; // CHandle<CBaseEntity>
                pub const m_angularLimit: usize = 0x4DC; // float32
                pub const m_bActive: usize = 0x4E0; // bool
                pub const m_bDampAllRotation: usize = 0x4E1; // bool
            }
            // Parent: CBaseEntity
            // Field count: 12
            pub mod CPointTemplate {
                pub const m_iszWorldName: usize = 0x4A8; // CUtlSymbolLarge
                pub const m_iszSource2EntityLumpName: usize = 0x4B0; // CUtlSymbolLarge
                pub const m_iszEntityFilterName: usize = 0x4B8; // CUtlSymbolLarge
                pub const m_flTimeoutInterval: usize = 0x4C0; // float32
                pub const m_bAsynchronouslySpawnEntities: usize = 0x4C4; // bool
                pub const m_clientOnlyEntityBehavior: usize = 0x4C8; // PointTemplateClientOnlyEntityBehavior_t
                pub const m_ownerSpawnGroupType: usize = 0x4CC; // PointTemplateOwnerSpawnGroupType_t
                pub const m_createdSpawnGroupHandles: usize = 0x4D0; // CUtlVector<uint32>
                pub const m_SpawnedEntityHandles: usize = 0x4E8; // CUtlVector<CEntityHandle>
                pub const m_ScriptSpawnCallback: usize = 0x500; // HSCRIPT
                pub const m_ScriptCallbackScope: usize = 0x508; // HSCRIPT
                pub const m_OnEntitySpawned: usize = 0x510; // CEntityOutputTemplate<CUtlVector<CEntityHandle>>
            }
            // Parent: CBaseEntity
            // Field count: 36
            pub mod CEnvVolumetricFogController {
                pub const m_flScattering: usize = 0x4A8; // float32
                pub const m_TintColor: usize = 0x4AC; // Color
                pub const m_flAnisotropy: usize = 0x4B0; // float32
                pub const m_flFadeSpeed: usize = 0x4B4; // float32
                pub const m_flDrawDistance: usize = 0x4B8; // float32
                pub const m_flFadeInStart: usize = 0x4BC; // float32
                pub const m_flFadeInEnd: usize = 0x4C0; // float32
                pub const m_flIndirectStrength: usize = 0x4C4; // float32
                pub const m_nVolumeDepth: usize = 0x4C8; // int32
                pub const m_fFirstVolumeSliceThickness: usize = 0x4CC; // float32
                pub const m_nIndirectTextureDimX: usize = 0x4D0; // int32
                pub const m_nIndirectTextureDimY: usize = 0x4D4; // int32
                pub const m_nIndirectTextureDimZ: usize = 0x4D8; // int32
                pub const m_vBoxMins: usize = 0x4DC; // Vector
                pub const m_vBoxMaxs: usize = 0x4E8; // Vector
                pub const m_bActive: usize = 0x4F4; // bool
                pub const m_flStartAnisoTime: usize = 0x4F8; // GameTime_t
                pub const m_flStartScatterTime: usize = 0x4FC; // GameTime_t
                pub const m_flStartDrawDistanceTime: usize = 0x500; // GameTime_t
                pub const m_flStartAnisotropy: usize = 0x504; // float32
                pub const m_flStartScattering: usize = 0x508; // float32
                pub const m_flStartDrawDistance: usize = 0x50C; // float32
                pub const m_flDefaultAnisotropy: usize = 0x510; // float32
                pub const m_flDefaultScattering: usize = 0x514; // float32
                pub const m_flDefaultDrawDistance: usize = 0x518; // float32
                pub const m_bStartDisabled: usize = 0x51C; // bool
                pub const m_bEnableIndirect: usize = 0x51D; // bool
                pub const m_bIsMaster: usize = 0x51E; // bool
                pub const m_hFogIndirectTexture: usize = 0x520; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_nForceRefreshCount: usize = 0x528; // int32
                pub const m_fNoiseSpeed: usize = 0x52C; // float32
                pub const m_fNoiseStrength: usize = 0x530; // float32
                pub const m_vNoiseScale: usize = 0x534; // Vector
                pub const m_fWindSpeed: usize = 0x540; // float32
                pub const m_vWindDirection: usize = 0x544; // Vector
                pub const m_bFirstTime: usize = 0x550; // bool
            }
            // Parent: None
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
            pub mod CCSPlayerController {
                pub const m_pInGameMoneyServices: usize = 0x7E0; // CCSPlayerController_InGameMoneyServices*
                pub const m_pInventoryServices: usize = 0x7E8; // CCSPlayerController_InventoryServices*
                pub const m_pActionTrackingServices: usize = 0x7F0; // CCSPlayerController_ActionTrackingServices*
                pub const m_pDamageServices: usize = 0x7F8; // CCSPlayerController_DamageServices*
                pub const m_iPing: usize = 0x800; // uint32
                pub const m_bHasCommunicationAbuseMute: usize = 0x804; // bool
                pub const m_uiCommunicationMuteFlags: usize = 0x808; // uint32
                pub const m_szCrosshairCodes: usize = 0x810; // CUtlSymbolLarge
                pub const m_iPendingTeamNum: usize = 0x818; // uint8
                pub const m_flForceTeamTime: usize = 0x81C; // GameTime_t
                pub const m_iCompTeammateColor: usize = 0x820; // int32
                pub const m_bEverPlayedOnTeam: usize = 0x824; // bool
                pub const m_bAttemptedToGetColor: usize = 0x825; // bool
                pub const m_iTeammatePreferredColor: usize = 0x828; // int32
                pub const m_bTeamChanged: usize = 0x82C; // bool
                pub const m_bInSwitchTeam: usize = 0x82D; // bool
                pub const m_bHasSeenJoinGame: usize = 0x82E; // bool
                pub const m_bJustBecameSpectator: usize = 0x82F; // bool
                pub const m_bSwitchTeamsOnNextRoundReset: usize = 0x830; // bool
                pub const m_bRemoveAllItemsOnNextRoundReset: usize = 0x831; // bool
                pub const m_flLastJoinTeamTime: usize = 0x834; // GameTime_t
                pub const m_szClan: usize = 0x838; // CUtlSymbolLarge
                pub const m_iCoachingTeam: usize = 0x840; // int32
                pub const m_nPlayerDominated: usize = 0x848; // uint64
                pub const m_nPlayerDominatingMe: usize = 0x850; // uint64
                pub const m_iCompetitiveRanking: usize = 0x858; // int32
                pub const m_iCompetitiveWins: usize = 0x85C; // int32
                pub const m_iCompetitiveRankType: usize = 0x860; // int8
                pub const m_iCompetitiveRankingPredicted_Win: usize = 0x864; // int32
                pub const m_iCompetitiveRankingPredicted_Loss: usize = 0x868; // int32
                pub const m_iCompetitiveRankingPredicted_Tie: usize = 0x86C; // int32
                pub const m_nEndMatchNextMapVote: usize = 0x870; // int32
                pub const m_unActiveQuestId: usize = 0x874; // uint16
                pub const m_rtActiveMissionPeriod: usize = 0x878; // uint32
                pub const m_nQuestProgressReason: usize = 0x87C; // QuestProgress::Reason
                pub const m_unPlayerTvControlFlags: usize = 0x880; // uint32
                pub const m_iDraftIndex: usize = 0x8B0; // int32
                pub const m_msQueuedModeDisconnectionTimestamp: usize = 0x8B4; // uint32
                pub const m_uiAbandonRecordedReason: usize = 0x8B8; // uint32
                pub const m_eNetworkDisconnectionReason: usize = 0x8BC; // uint32
                pub const m_bCannotBeKicked: usize = 0x8C0; // bool
                pub const m_bEverFullyConnected: usize = 0x8C1; // bool
                pub const m_bAbandonAllowsSurrender: usize = 0x8C2; // bool
                pub const m_bAbandonOffersInstantSurrender: usize = 0x8C3; // bool
                pub const m_bDisconnection1MinWarningPrinted: usize = 0x8C4; // bool
                pub const m_bScoreReported: usize = 0x8C5; // bool
                pub const m_nDisconnectionTick: usize = 0x8C8; // int32
                pub const m_bControllingBot: usize = 0x8D8; // bool
                pub const m_bHasControlledBotThisRound: usize = 0x8D9; // bool
                pub const m_bHasBeenControlledByPlayerThisRound: usize = 0x8DA; // bool
                pub const m_nBotsControlledThisRound: usize = 0x8DC; // int32
                pub const m_bCanControlObservedBot: usize = 0x8E0; // bool
                pub const m_hPlayerPawn: usize = 0x8E4; // CHandle<CCSPlayerPawn>
                pub const m_hObserverPawn: usize = 0x8E8; // CHandle<CCSObserverPawn>
                pub const m_DesiredObserverMode: usize = 0x8EC; // int32
                pub const m_hDesiredObserverTarget: usize = 0x8F0; // CEntityHandle
                pub const m_bPawnIsAlive: usize = 0x8F4; // bool
                pub const m_iPawnHealth: usize = 0x8F8; // uint32
                pub const m_iPawnArmor: usize = 0x8FC; // int32
                pub const m_bPawnHasDefuser: usize = 0x900; // bool
                pub const m_bPawnHasHelmet: usize = 0x901; // bool
                pub const m_nPawnCharacterDefIndex: usize = 0x902; // uint16
                pub const m_iPawnLifetimeStart: usize = 0x904; // int32
                pub const m_iPawnLifetimeEnd: usize = 0x908; // int32
                pub const m_iPawnBotDifficulty: usize = 0x90C; // int32
                pub const m_hOriginalControllerOfCurrentPawn: usize = 0x910; // CHandle<CCSPlayerController>
                pub const m_iScore: usize = 0x914; // int32
                pub const m_iRoundScore: usize = 0x918; // int32
                pub const m_iRoundsWon: usize = 0x91C; // int32
                pub const m_recentKillQueue: usize = 0x920; // uint8[8]
                pub const m_nFirstKill: usize = 0x928; // uint8
                pub const m_nKillCount: usize = 0x929; // uint8
                pub const m_bMvpNoMusic: usize = 0x92A; // bool
                pub const m_eMvpReason: usize = 0x92C; // int32
                pub const m_iMusicKitID: usize = 0x930; // int32
                pub const m_iMusicKitMVPs: usize = 0x934; // int32
                pub const m_iMVPs: usize = 0x938; // int32
                pub const m_nUpdateCounter: usize = 0x93C; // int32
                pub const m_flSmoothedPing: usize = 0x940; // float32
                pub const m_lastHeldVoteTimer: usize = 0x948; // IntervalTimer
                pub const m_bShowHints: usize = 0x960; // bool
                pub const m_iNextTimeCheck: usize = 0x964; // int32
                pub const m_bJustDidTeamKill: usize = 0x968; // bool
                pub const m_bPunishForTeamKill: usize = 0x969; // bool
                pub const m_bGaveTeamDamageWarning: usize = 0x96A; // bool
                pub const m_bGaveTeamDamageWarningThisRound: usize = 0x96B; // bool
                pub const m_dblLastReceivedPacketPlatFloatTime: usize = 0x970; // float64
                pub const m_LastTeamDamageWarningTime: usize = 0x978; // GameTime_t
                pub const m_LastTimePlayerWasDisconnectedForPawnsRemove: usize = 0x97C; // GameTime_t
                pub const m_nSuspiciousHitCount: usize = 0x980; // uint32
                pub const m_nNonSuspiciousHitStreak: usize = 0x984; // uint32
                pub const m_bFireBulletsSeedSynchronized: usize = 0xA29; // bool
            }
            // Parent: CPhysConstraint
            // Field count: 5
            pub mod CPhysLength {
                pub const m_offset: usize = 0x508; // Vector[2]
                pub const m_vecAttach: usize = 0x520; // VectorWS
                pub const m_addLength: usize = 0x52C; // float32
                pub const m_minLength: usize = 0x530; // float32
                pub const m_totalLength: usize = 0x534; // float32
            }
            // Parent: CBaseEntity
            // Field count: 4
            pub mod CTeam {
                pub const m_aPlayerControllers: usize = 0x4A8; // CNetworkUtlVectorBase<CHandle<CBasePlayerController>>
                pub const m_aPlayers: usize = 0x4C0; // CNetworkUtlVectorBase<CHandle<CBasePlayerPawn>>
                pub const m_iScore: usize = 0x4D8; // int32
                pub const m_szTeamname: usize = 0x4DC; // char[129]
            }
            // Parent: None
            // Field count: 0
            pub mod CFuncConveyor_API {
            }
            // Parent: CLogicNPCCounter
            // Field count: 4
            pub mod CLogicNPCCounterAABB {
                pub const m_vDistanceOuterMins: usize = 0x728; // Vector
                pub const m_vDistanceOuterMaxs: usize = 0x734; // Vector
                pub const m_vOuterMins: usize = 0x740; // VectorWS
                pub const m_vOuterMaxs: usize = 0x74C; // VectorWS
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
            // Field count: 23
            pub mod CChicken {
                pub const m_AttributeManager: usize = 0xBC0; // CAttributeContainer
                pub const m_updateTimer: usize = 0xEB8; // CountdownTimer
                pub const m_stuckAnchor: usize = 0xED0; // VectorWS
                pub const m_collisionStuckTimer: usize = 0xEE0; // CountdownTimer
                pub const m_isOnGround: usize = 0xEF8; // bool
                pub const m_vFallVelocity: usize = 0xEFC; // Vector
                pub const m_desiredActivity: usize = 0xF08; // EChickenActivity
                pub const m_currentActivity: usize = 0xF0C; // EChickenActivity
                pub const m_activityTimer: usize = 0xF10; // CountdownTimer
                pub const m_turnRate: usize = 0xF28; // float32
                pub const m_fleeFrom: usize = 0xF2C; // CHandle<CBaseEntity>
                pub const m_moveRateThrottleTimer: usize = 0xF30; // CountdownTimer
                pub const m_startleTimer: usize = 0xF48; // CountdownTimer
                pub const m_vocalizeTimer: usize = 0xF60; // CountdownTimer
                pub const m_leader: usize = 0xF78; // CHandle<CCSPlayerPawn>
                pub const m_reuseTimer: usize = 0xF90; // CountdownTimer
                pub const m_jumpTimer: usize = 0xFA8; // CountdownTimer
                pub const m_flLastJumpTime: usize = 0xFC0; // float32
                pub const m_repathTimer: usize = 0x2FD0; // CountdownTimer
                pub const m_vecPathGoal: usize = 0x3068; // VectorWS
                pub const m_flActiveFollowStartTime: usize = 0x3074; // GameTime_t
                pub const m_followMinuteTimer: usize = 0x3078; // CountdownTimer
                pub const m_BlockDirectionTimer: usize = 0x3098; // CountdownTimer
            }
            // Parent: CPhysicsProp
            // Field count: 5
            pub mod CPhysicsPropRespawnable {
                pub const m_vOriginalSpawnOrigin: usize = 0xC30; // VectorWS
                pub const m_vOriginalSpawnAngles: usize = 0xC3C; // QAngle
                pub const m_vOriginalMins: usize = 0xC48; // Vector
                pub const m_vOriginalMaxs: usize = 0xC54; // Vector
                pub const m_flRespawnDuration: usize = 0xC60; // float32
            }
            // Parent: CBeam
            // Field count: 19
            pub mod CEnvBeam {
                pub const m_active: usize = 0x810; // int32
                pub const m_spriteTexture: usize = 0x818; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_iszStartEntity: usize = 0x820; // CUtlSymbolLarge
                pub const m_iszEndEntity: usize = 0x828; // CUtlSymbolLarge
                pub const m_life: usize = 0x830; // float32
                pub const m_boltWidth: usize = 0x834; // float32
                pub const m_noiseAmplitude: usize = 0x838; // float32
                pub const m_speed: usize = 0x83C; // int32
                pub const m_restrike: usize = 0x840; // float32
                pub const m_iszSpriteName: usize = 0x848; // CUtlSymbolLarge
                pub const m_frameStart: usize = 0x850; // int32
                pub const m_vEndPointWorld: usize = 0x854; // VectorWS
                pub const m_vEndPointRelative: usize = 0x860; // Vector
                pub const m_radius: usize = 0x86C; // float32
                pub const m_TouchType: usize = 0x870; // Touch_t
                pub const m_iFilterName: usize = 0x878; // CUtlSymbolLarge
                pub const m_hFilter: usize = 0x880; // CHandle<CBaseEntity>
                pub const m_iszDecal: usize = 0x888; // CUtlSymbolLarge
                pub const m_OnTouchedByEntity: usize = 0x890; // CEntityIOOutput
            }
            // Parent: CBaseModelEntity
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
                pub const m_tonemapControllerName: usize = 0x8E8; // CUtlSymbolLarge
                pub const m_hTonemapController: usize = 0x8F0; // CEntityHandle
            }
            // Parent: CPointEntity
            // Field count: 11
            pub mod CEnvShake {
                pub const m_limitToEntity: usize = 0x4A8; // CUtlSymbolLarge
                pub const m_Amplitude: usize = 0x4B0; // float32
                pub const m_Frequency: usize = 0x4B4; // float32
                pub const m_Duration: usize = 0x4B8; // float32
                pub const m_Radius: usize = 0x4BC; // float32
                pub const m_stopTime: usize = 0x4C0; // GameTime_t
                pub const m_nextShake: usize = 0x4C4; // GameTime_t
                pub const m_currentAmp: usize = 0x4C8; // float32
                pub const m_maxForce: usize = 0x4CC; // Vector
                pub const m_pShakeController: usize = 0x4D8; // IPhysicsMotionController*
                pub const m_shakeCallback: usize = 0x4E0; // CPhysicsShake
            }
            // Parent: CPlayer_MovementServices_Humanoid
            // Field count: 50
            pub mod CCSPlayer_MovementServices {
                pub const m_AnimationState: usize = 0x310; // CCSPlayerAnimationState
                pub const m_bUsingGroundTopologyOffset: usize = 0x3F0; // bool
                pub const m_flUsingGroundTopologyOffsetTransitionSmoothing: usize = 0x3F4; // float32
                pub const m_vecLadderNormal: usize = 0x3F8; // Vector
                pub const m_nLadderSurfacePropIndex: usize = 0x404; // int32
                pub const m_bDucked: usize = 0x408; // bool
                pub const m_flDuckAmount: usize = 0x40C; // float32
                pub const m_flDuckSpeed: usize = 0x410; // float32
                pub const m_bDuckOverride: usize = 0x414; // bool
                pub const m_bDesiresDuck: usize = 0x415; // bool
                pub const m_bDucking: usize = 0x416; // bool
                pub const m_flDuckRootOffset: usize = 0x418; // float32
                pub const m_flDuckViewOffset: usize = 0x41C; // float32
                pub const m_flLastDuckTime: usize = 0x420; // float32
                pub const m_flBombPlantViewOffset: usize = 0x424; // float32
                pub const m_vecLastPositionAtFullCrouchSpeed: usize = 0x430; // Vector2D
                pub const m_duckUntilOnGround: usize = 0x438; // bool
                pub const m_bHasWalkMovedSinceLastJump: usize = 0x439; // bool
                pub const m_bInStuckTest: usize = 0x43A; // bool
                pub const m_nTraceCount: usize = 0x648; // int32
                pub const m_StuckLast: usize = 0x64C; // int32
                pub const m_bSpeedCropped: usize = 0x650; // bool
                pub const m_nOldWaterLevel: usize = 0x654; // int32
                pub const m_flWaterEntryTime: usize = 0x658; // float32
                pub const m_vecForward: usize = 0x65C; // Vector
                pub const m_vecLeft: usize = 0x668; // Vector
                pub const m_vecUp: usize = 0x674; // Vector
                pub const m_nGameCodeHasMovedPlayerAfterCommand: usize = 0x680; // int32
                pub const m_bMadeFootstepNoise: usize = 0x684; // bool
                pub const m_iFootsteps: usize = 0x688; // int32
                pub const m_fStashGrenadeParameterWhen: usize = 0x68C; // GameTime_t
                pub const m_bUseFrictionStashedSpeed: usize = 0x690; // bool
                pub const m_flUseFrictionStashedSpeedUntilFrac: usize = 0x694; // float32
                pub const m_flFrictionStashedSpeed: usize = 0x698; // float32
                pub const m_flStamina: usize = 0x69C; // float32
                pub const m_flHeightAtJumpStart: usize = 0x6A0; // float32
                pub const m_flMaxJumpHeightThisJump: usize = 0x6A4; // float32
                pub const m_flMaxJumpHeightLastJump: usize = 0x6A8; // float32
                pub const m_flStaminaAtJumpStart: usize = 0x6AC; // float32
                pub const m_flVelMulAtJumpStart: usize = 0x6B0; // float32
                pub const m_flAccumulatedJumpError: usize = 0x6B4; // float32
                pub const m_LegacyJump: usize = 0x6B8; // CCSPlayerLegacyJump
                pub const m_ModernJump: usize = 0x6D0; // CCSPlayerModernJump
                pub const m_nLastJumpTick: usize = 0x708; // GameTick_t
                pub const m_flLastJumpFrac: usize = 0x70C; // float32
                pub const m_flLastJumpVelocityZ: usize = 0x710; // float32
                pub const m_bJumpApexPending: usize = 0x714; // bool
                pub const m_flTicksSinceLastSurfingDetected: usize = 0x718; // float32
                pub const m_vecWalkWishVel: usize = 0x7A8; // Vector2D
                pub const m_bHasEverProcessedCommand: usize = 0xFD0; // bool
            }
            // Parent: None
            // Field count: 5
            pub mod SellbackPurchaseEntry_t {
                pub const m_unDefIdx: usize = 0x30; // uint16
                pub const m_nCost: usize = 0x34; // int32
                pub const m_nPrevArmor: usize = 0x38; // int32
                pub const m_bPrevHelmet: usize = 0x3C; // bool
                pub const m_hItem: usize = 0x40; // CEntityHandle
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CTestPulseIO__EntityNameStringArgs_t {
                pub const nameA: usize = 0x0; // CEntityNameString
                pub const strValueB: usize = 0x8; // CUtlSymbolLarge
            }
            // Parent: CBaseEntity
            // Field count: 4
            pub mod CFuncMoverRouter {
                pub const m_nMoverIndex: usize = 0x4B0; // int32
                pub const m_bRouteToAllMovers: usize = 0x4B4; // bool
                pub const m_hPathMover: usize = 0x4B8; // CHandle<CPathMover>
                pub const m_iszPathMoverName: usize = 0x4C0; // CUtlSymbolLarge
            }
            // Parent: None
            // Field count: 0
            pub mod CTriggerCallback {
            }
            // Parent: CSoundOpvarSetPointEntity
            // Field count: 5
            pub mod CSoundOpvarSetAutoRoomEntity {
                pub const m_traceResults: usize = 0x640; // CUtlVector<SoundOpvarTraceResult_t>
                pub const m_doorwayPairs: usize = 0x658; // CUtlVector<AutoRoomDoorwayPairs_t>
                pub const m_flSize: usize = 0x670; // float32
                pub const m_flHeightTolerance: usize = 0x674; // float32
                pub const m_flSizeSqr: usize = 0x678; // float32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorSubHeaderText
            // MPulseEditorHeaderIcon
            pub mod CPulseCell_Outflow_ListenForEntityOutput {
                pub const m_OnFired: usize = 0xD8; // SignatureOutflow_Resume
                pub const m_strEntityOutput: usize = 0x120; // CGlobalSymbol
                pub const m_strEntityOutputParam: usize = 0x128; // CUtlString
                pub const m_bListenUntilCanceled: usize = 0x130; // bool
            }
            // Parent: CBreakable
            // Field count: 0
            pub mod CPushable {
            }
            // Parent: CPointEntity
            // Field count: 2
            pub mod CRotatorTarget {
                pub const m_OnArrivedAt: usize = 0x4A8; // CEntityIOOutput
                pub const m_eSpace: usize = 0x4C0; // RotatorTargetSpace_t
            }
            // Parent: CBaseEntity
            // Field count: 4
            pub mod CPhysicsEntitySolver {
                pub const m_hMovingEntity: usize = 0x4C0; // CHandle<CBaseEntity>
                pub const m_hPhysicsBlocker: usize = 0x4C4; // CHandle<CBaseEntity>
                pub const m_separationDuration: usize = 0x4C8; // float32
                pub const m_cancelTime: usize = 0x4CC; // GameTime_t
            }
            // Parent: CBaseEntity
            // Field count: 7
            pub mod CLogicCollisionPair {
                pub const m_nameAttach1: usize = 0x4A8; // CUtlSymbolLarge
                pub const m_nameAttach2: usize = 0x4B0; // CUtlSymbolLarge
                pub const m_includeHierarchy: usize = 0x4B8; // bool
                pub const m_supportMultipleEntitiesWithSameName: usize = 0x4B9; // bool
                pub const m_disabled: usize = 0x4BA; // bool
                pub const m_succeeded: usize = 0x4BB; // bool
                pub const m_allowMissing: usize = 0x4BC; // bool
            }
            // Parent: None
            // Field count: 5
            pub mod CTestEffect {
                pub const m_iLoop: usize = 0x4A8; // int32
                pub const m_iBeam: usize = 0x4AC; // int32
                pub const m_pBeam: usize = 0x4B0; // CHandle<CBeam>[24]
                pub const m_flBeamTime: usize = 0x510; // GameTime_t[24]
                pub const m_flStartTime: usize = 0x570; // GameTime_t
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
            // Field count: 18
            pub mod CPropDoorRotating {
                pub const m_vecAxis: usize = 0xDA0; // Vector
                pub const m_flDistance: usize = 0xDAC; // float32
                pub const m_eSpawnPosition: usize = 0xDB0; // PropDoorRotatingSpawnPos_t
                pub const m_eOpenDirection: usize = 0xDB4; // PropDoorRotatingOpenDirection_e
                pub const m_eCurrentOpenDirection: usize = 0xDB8; // PropDoorRotatingOpenDirection_e
                pub const m_eDefaultCheckDirection: usize = 0xDBC; // doorCheck_e
                pub const m_flAjarAngle: usize = 0xDC0; // float32
                pub const m_angRotationAjarDeprecated: usize = 0xDC4; // QAngle
                pub const m_angRotationClosed: usize = 0xDD0; // QAngle
                pub const m_angRotationOpenForward: usize = 0xDDC; // QAngle
                pub const m_angRotationOpenBack: usize = 0xDE8; // QAngle
                pub const m_angGoal: usize = 0xDF4; // QAngle
                pub const m_vecForwardBoundsMin: usize = 0xE00; // Vector
                pub const m_vecForwardBoundsMax: usize = 0xE0C; // Vector
                pub const m_vecBackBoundsMin: usize = 0xE18; // Vector
                pub const m_vecBackBoundsMax: usize = 0xE24; // Vector
                pub const m_bAjarDoorShouldntAlwaysOpen: usize = 0xE30; // bool
                pub const m_hEntityBlocker: usize = 0xE34; // CHandle<CEntityBlocker>
            }
            // Parent: CParticleSystem
            // Field count: 5
            pub mod CEnvParticleGlow {
                pub const m_flAlphaScale: usize = 0xCF8; // float32
                pub const m_flRadiusScale: usize = 0xCFC; // float32
                pub const m_flSelfIllumScale: usize = 0xD00; // float32
                pub const m_ColorTint: usize = 0xD04; // Color
                pub const m_hTextureOverride: usize = 0xD08; // CStrongHandle<InfoForResourceTypeCTextureBase>
            }
            // Parent: CBaseEntity
            // Field count: 11
            pub mod CMathRemap {
                pub const m_flInMin: usize = 0x4A8; // float32
                pub const m_flInMax: usize = 0x4AC; // float32
                pub const m_flOut1: usize = 0x4B0; // float32
                pub const m_flOut2: usize = 0x4B4; // float32
                pub const m_flOldInValue: usize = 0x4B8; // float32
                pub const m_bEnabled: usize = 0x4BC; // bool
                pub const m_OutValue: usize = 0x4C0; // CEntityOutputTemplate<float32>
                pub const m_OnRoseAboveMin: usize = 0x4E0; // CEntityIOOutput
                pub const m_OnRoseAboveMax: usize = 0x4F8; // CEntityIOOutput
                pub const m_OnFellBelowMin: usize = 0x510; // CEntityIOOutput
                pub const m_OnFellBelowMax: usize = 0x528; // CEntityIOOutput
            }
            // Parent: CSoundOpvarSetPointBase
            // Field count: 8
            pub mod CSoundOpvarSetOBBWindEntity {
                pub const m_vMins: usize = 0x550; // Vector
                pub const m_vMaxs: usize = 0x55C; // Vector
                pub const m_vDistanceMins: usize = 0x568; // Vector
                pub const m_vDistanceMaxs: usize = 0x574; // Vector
                pub const m_flWindMin: usize = 0x580; // float32
                pub const m_flWindMax: usize = 0x584; // float32
                pub const m_flWindMapMin: usize = 0x588; // float32
                pub const m_flWindMapMax: usize = 0x58C; // float32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod PhysicsRagdollPose_t {
                pub const m_Transforms: usize = 0x8; // CNetworkUtlVectorBase<CTransform>
                pub const m_hOwner: usize = 0x20; // CHandle<CBaseEntity>
                pub const m_bSetFromDebugHistory: usize = 0x24; // bool
            }
            // Parent: CEntityComponent
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
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
            // Parent: CTriggerMultiple
            // Field count: 1
            pub mod CScriptTriggerOnce {
                pub const m_vExtent: usize = 0x900; // Vector
            }
            // Parent: CBaseModelEntity
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
                pub const m_iLandmark: usize = 0x8E8; // CUtlSymbolLarge
                pub const m_bUseLandmarkAngles: usize = 0x8F0; // bool
                pub const m_bMirrorPlayer: usize = 0x8F1; // bool
                pub const m_bCheckDestIfClearForPlayer: usize = 0x8F2; // bool
            }
            // Parent: None
            // Field count: 1
            pub mod CFuncWall {
                pub const m_nState: usize = 0x770; // int32
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
            pub mod CCSGO_TeamPreviewCharacterPosition {
                pub const m_nVariant: usize = 0x4A8; // int32
                pub const m_nRandom: usize = 0x4AC; // int32
                pub const m_nOrdinal: usize = 0x4B0; // int32
                pub const m_sWeaponName: usize = 0x4B8; // CUtlString
                pub const m_xuid: usize = 0x4C0; // uint64
                pub const m_agentItem: usize = 0x4C8; // CEconItemView
                pub const m_glovesItem: usize = 0x770; // CEconItemView
                pub const m_weaponItem: usize = 0xA18; // CEconItemView
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
            // Parent: None
            // Field count: 0
            pub mod CLightEntityAPI {
            }
            // Parent: CPointEntity
            // Field count: 6
            pub mod CMessage {
                pub const m_iszMessage: usize = 0x4A8; // CUtlSymbolLarge
                pub const m_MessageVolume: usize = 0x4B0; // float32
                pub const m_MessageAttenuation: usize = 0x4B4; // int32
                pub const m_Radius: usize = 0x4B8; // float32
                pub const m_sNoise: usize = 0x4C0; // CGameSoundEventName
                pub const m_OnShowMessage: usize = 0x4C8; // CEntityIOOutput
            }
            // Parent: CPointEntity
            // Field count: 6
            pub mod CPointVelocitySensor {
                pub const m_hTargetEntity: usize = 0x4A8; // CHandle<CBaseEntity>
                pub const m_vecAxis: usize = 0x4AC; // Vector
                pub const m_bEnabled: usize = 0x4B8; // bool
                pub const m_fPrevVelocity: usize = 0x4BC; // float32
                pub const m_flAvgInterval: usize = 0x4C0; // float32
                pub const m_Velocity: usize = 0x4C8; // CEntityOutputTemplate<float32>
            }
            // Parent: None
            // Field count: 28
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CCS2PawnGraphController {
                pub const m_bIsDefusing: usize = 0x588; // CAnimGraph2ParamOptionalRef<bool>
                pub const m_moveType: usize = 0x5A0; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                pub const m_moveDirectionID: usize = 0x5B8; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                pub const m_flMoveSpeedX: usize = 0x5D0; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_flMoveSpeedY: usize = 0x5E8; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_flMoveSpeedHorizontal: usize = 0x600; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_flPreviousMoveSpeedHorizontal: usize = 0x618; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_flCrouchAmount: usize = 0x630; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_bIsWalking: usize = 0x648; // CAnimGraph2ParamOptionalRef<bool>
                pub const m_flWeaponDropAmount: usize = 0x660; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_groundAction: usize = 0x678; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                pub const m_groundActionDirectionID: usize = 0x690; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                pub const m_flGroundTurnAngleOrVelocity: usize = 0x6A8; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_flLadderCycle: usize = 0x6C0; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_flLadderYaw: usize = 0x6D8; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_flLadderYawBackwards: usize = 0x6F0; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_airAction: usize = 0x708; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                pub const m_flAirHeightAboveGround: usize = 0x720; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_leftFootTarget: usize = 0x738; // CAnimGraph2ParamOptionalRef<CNmTarget>
                pub const m_rightFootTarget: usize = 0x750; // CAnimGraph2ParamOptionalRef<CNmTarget>
                pub const m_flFlashedAmount: usize = 0x768; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_flAimPitchAngle: usize = 0x780; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_flAimYawAngle: usize = 0x798; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_flinchHead: usize = 0x7B0; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                pub const m_flinchHeadRestart: usize = 0x7C8; // CAnimGraph2ParamOptionalRef<bool>
                pub const m_flinchBody: usize = 0x7E0; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                pub const m_flinchBodyRestart: usize = 0x7F8; // CAnimGraph2ParamOptionalRef<bool>
                pub const m_flinchIsOnFire: usize = 0x810; // CAnimGraph2ParamOptionalRef<bool>
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod EngineCountdownTimer {
                pub const m_duration: usize = 0x8; // float32
                pub const m_timestamp: usize = 0xC; // float32
                pub const m_timescale: usize = 0x10; // float32
            }
            // Parent: None
            // Field count: 0
            pub mod CBaseModelEntityAPI {
            }
            // Parent: CTriggerMultiple
            // Field count: 1
            pub mod CScriptTriggerMultiple {
                pub const m_vExtent: usize = 0x900; // Vector
            }
            // Parent: CHostageExpresserShim
            // Field count: 39
            pub mod CHostage {
                pub const m_OnHostageBeginGrab: usize = 0xA58; // CEntityIOOutput
                pub const m_OnFirstPickedUp: usize = 0xA70; // CEntityIOOutput
                pub const m_OnDroppedNotRescued: usize = 0xA88; // CEntityIOOutput
                pub const m_OnRescued: usize = 0xAA0; // CEntityIOOutput
                pub const m_entitySpottedState: usize = 0xAB8; // EntitySpottedState_t
                pub const m_nSpotRules: usize = 0xAD0; // int32
                pub const m_uiHostageSpawnExclusionGroupMask: usize = 0xAD4; // uint32
                pub const m_nHostageSpawnRandomFactor: usize = 0xAD8; // uint32
                pub const m_bRemove: usize = 0xADC; // bool
                pub const m_vel: usize = 0xAE0; // Vector
                pub const m_isRescued: usize = 0xAEC; // bool
                pub const m_jumpedThisFrame: usize = 0xAED; // bool
                pub const m_nHostageState: usize = 0xAF0; // int32
                pub const m_leader: usize = 0xAF4; // CHandle<CBaseEntity>
                pub const m_lastLeader: usize = 0xAF8; // CHandle<CCSPlayerPawnBase>
                pub const m_reuseTimer: usize = 0xB00; // CountdownTimer
                pub const m_hasBeenUsed: usize = 0xB18; // bool
                pub const m_accel: usize = 0xB1C; // Vector
                pub const m_isRunning: usize = 0xB28; // bool
                pub const m_isCrouching: usize = 0xB29; // bool
                pub const m_jumpTimer: usize = 0xB30; // CountdownTimer
                pub const m_isWaitingForLeader: usize = 0xB48; // bool
                pub const m_repathTimer: usize = 0x2B58; // CountdownTimer
                pub const m_inhibitDoorTimer: usize = 0x2B70; // CountdownTimer
                pub const m_inhibitObstacleAvoidanceTimer: usize = 0x2C00; // CountdownTimer
                pub const m_wiggleTimer: usize = 0x2C20; // CountdownTimer
                pub const m_isAdjusted: usize = 0x2C3C; // bool
                pub const m_bHandsHaveBeenCut: usize = 0x2C3D; // bool
                pub const m_hHostageGrabber: usize = 0x2C40; // CHandle<CCSPlayerPawn>
                pub const m_fLastGrabTime: usize = 0x2C44; // GameTime_t
                pub const m_vecPositionWhenStartedDroppingToGround: usize = 0x2C48; // VectorWS
                pub const m_vecGrabbedPos: usize = 0x2C54; // VectorWS
                pub const m_flRescueStartTime: usize = 0x2C60; // GameTime_t
                pub const m_flGrabSuccessTime: usize = 0x2C64; // GameTime_t
                pub const m_flDropStartTime: usize = 0x2C68; // GameTime_t
                pub const m_nApproachRewardPayouts: usize = 0x2C6C; // int32
                pub const m_nPickupEventCount: usize = 0x2C70; // int32
                pub const m_vecSpawnGroundPos: usize = 0x2C74; // VectorWS
                pub const m_vecHostageResetPosition: usize = 0x2CAC; // VectorWS
            }
            // Parent: CPointEntity
            // Field count: 5
            pub mod CEnvSpark {
                pub const m_flDelay: usize = 0x4A8; // float32
                pub const m_nMagnitude: usize = 0x4AC; // int32
                pub const m_nTrailLength: usize = 0x4B0; // int32
                pub const m_nType: usize = 0x4B4; // int32
                pub const m_OnSpark: usize = 0x4B8; // CEntityIOOutput
            }
            // Parent: CPlayerControllerComponent
            // Field count: 2
            pub mod CCSPlayerController_DamageServices {
                pub const m_nSendUpdate: usize = 0x40; // int32
                pub const m_DamageList: usize = 0x48; // CUtlVectorEmbeddedNetworkVar<CDamageRecord>
            }
            // Parent: CEnvCombinedLightProbeVolume
            // Field count: 0
            pub mod CEnvCombinedLightProbeVolumeAlias_func_combined_light_probe_volume {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CBaseModelEntity__OnDamageLevelChangedArgs_t {
                pub const nHitGroup: usize = 0x0; // HitGroup_t
                pub const nDamageLevel: usize = 0x4; // int32
                pub const nDamageLevelsRemaining: usize = 0x8; // int32
                pub const nPrevDamageLevel: usize = 0xC; // int32
            }
            // Parent: None
            // Field count: 0
            pub mod CFilterLOS {
            }
            // Parent: CBaseEntity
            // Field count: 7
            pub mod CPointOrient {
                pub const m_iszSpawnTargetName: usize = 0x4A8; // CUtlSymbolLarge
                pub const m_hTarget: usize = 0x4B0; // CHandle<CBaseEntity>
                pub const m_bActive: usize = 0x4B4; // bool
                pub const m_nGoalDirection: usize = 0x4B8; // PointOrientGoalDirectionType_t
                pub const m_nConstraint: usize = 0x4BC; // PointOrientConstraint_t
                pub const m_flMaxTurnRate: usize = 0x4C0; // float32
                pub const m_flLastGameTime: usize = 0x4C4; // GameTime_t
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod sky3dparams_t {
                pub const scale: usize = 0x8; // int16
                pub const origin: usize = 0xC; // VectorWS
                pub const bClip3DSkyBoxNearToWorldFar: usize = 0x18; // bool
                pub const flClip3DSkyBoxNearToWorldFarOffset: usize = 0x1C; // float32
                pub const fog: usize = 0x20; // fogparams_t
                pub const m_nWorldGroupID: usize = 0x88; // WorldGroupId_t
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            pub mod CWeaponP250 {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CDestructiblePartsComponent {
                pub const __m_pChainEntity: usize = 0x0; // CNetworkVarChainer
                pub const m_vecDamageTakenByHitGroup: usize = 0x48; // CUtlVector<uint16>
                pub const m_hOwner: usize = 0x60; // CHandle<CBaseModelEntity>
                pub const m_pAnimGraphDestructibleGraphController: usize = 0x68; // CAnimGraphControllerPtr
            }
            // Parent: CBaseTrigger
            // Field count: 7
            pub mod CChangeLevel {
                pub const m_sMapName: usize = 0x8E8; // CUtlString
                pub const m_sLandmarkName: usize = 0x8F0; // CUtlString
                pub const m_OnChangeLevel: usize = 0x8F8; // CEntityIOOutput
                pub const m_bTouched: usize = 0x910; // bool
                pub const m_bNoTouch: usize = 0x911; // bool
                pub const m_bNewChapter: usize = 0x912; // bool
                pub const m_bOnChangeLevelFired: usize = 0x913; // bool
            }
            // Parent: CBaseToggle
            // Field count: 26
            pub mod CBaseButton {
                pub const m_angMoveEntitySpace: usize = 0x7F0; // QAngle
                pub const m_fStayPushed: usize = 0x7FC; // bool
                pub const m_fRotating: usize = 0x7FD; // bool
                pub const m_ls: usize = 0x800; // locksound_t
                pub const m_sUseSound: usize = 0x820; // CGameSoundEventName
                pub const m_sLockedSound: usize = 0x828; // CGameSoundEventName
                pub const m_sUnlockedSound: usize = 0x830; // CGameSoundEventName
                pub const m_sOverrideAnticipationName: usize = 0x838; // CUtlSymbolLarge
                pub const m_bLocked: usize = 0x840; // bool
                pub const m_bDisabled: usize = 0x841; // bool
                pub const m_flSpeed: usize = 0x844; // float32
                pub const m_flUseLockedTime: usize = 0x848; // GameTime_t
                pub const m_bSolidBsp: usize = 0x84C; // bool
                pub const m_OnDamaged: usize = 0x850; // CEntityIOOutput
                pub const m_OnPressed: usize = 0x868; // CEntityIOOutput
                pub const m_OnUseLocked: usize = 0x880; // CEntityIOOutput
                pub const m_OnIn: usize = 0x898; // CEntityIOOutput
                pub const m_OnOut: usize = 0x8B0; // CEntityIOOutput
                pub const m_nState: usize = 0x8C8; // int32
                pub const m_hConstraint: usize = 0x8CC; // CEntityHandle
                pub const m_hConstraintParent: usize = 0x8D0; // CEntityHandle
                pub const m_bForceNpcExclude: usize = 0x8D4; // bool
                pub const m_sGlowEntity: usize = 0x8D8; // CUtlSymbolLarge
                pub const m_glowEntity: usize = 0x8E0; // CHandle<CBaseModelEntity>
                pub const m_usable: usize = 0x8E4; // bool
                pub const m_szDisplayText: usize = 0x8E8; // CUtlSymbolLarge
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
            // Parent: CBaseAnimGraph
            // Field count: 15
            pub mod CBaseGrenade {
                pub const m_bDamageDetonating: usize = 0x968; // bool
                pub const m_OnPlayerPickup: usize = 0x970; // CEntityIOOutput
                pub const m_OnExplode: usize = 0x988; // CEntityIOOutput
                pub const m_bHasWarnedAI: usize = 0x9A0; // bool
                pub const m_bIsSmokeGrenade: usize = 0x9A1; // bool
                pub const m_bIsLive: usize = 0x9A2; // bool
                pub const m_DmgRadius: usize = 0x9A4; // float32
                pub const m_flDetonateTime: usize = 0x9A8; // GameTime_t
                pub const m_flWarnAITime: usize = 0x9AC; // float32
                pub const m_flDamage: usize = 0x9B0; // float32
                pub const m_iszBounceSound: usize = 0x9B8; // CUtlSymbolLarge
                pub const m_ExplosionSound: usize = 0x9C0; // CUtlString
                pub const m_hThrower: usize = 0x9C8; // CHandle<CCSPlayerPawn>
                pub const m_flNextAttack: usize = 0x9E0; // GameTime_t
                pub const m_hOriginalThrower: usize = 0x9E4; // CHandle<CCSPlayerPawn>
            }
            // Parent: CBaseTrigger
            // Field count: 8
            pub mod CColorCorrectionVolume {
                pub const m_MaxWeight: usize = 0x8E8; // float32
                pub const m_FadeDuration: usize = 0x8EC; // float32
                pub const m_Weight: usize = 0x8F0; // float32
                pub const m_lookupFilename: usize = 0x8F4; // char[512]
                pub const m_LastEnterWeight: usize = 0xAF4; // float32
                pub const m_LastEnterTime: usize = 0xAF8; // GameTime_t
                pub const m_LastExitWeight: usize = 0xAFC; // float32
                pub const m_LastExitTime: usize = 0xB00; // GameTime_t
            }
            // Parent: CPlayerControllerComponent
            // Field count: 5
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
            // MGetKV3ClassDefaults
            pub mod CBodyComponentBaseAnimGraph {
                pub const m_animationController: usize = 0x4E0; // CBaseAnimGraphController
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCustomFGDMetadata
            pub mod CPulseCell_BaseYieldingInflow {
                pub const m_BaseFlow_OnAfterCancel: usize = 0x48; // CPulse_ResumePoint
                pub const m_BaseFlow_WhileActive: usize = 0x90; // CPulse_ResumePoint
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod PulseNodeDynamicOutflows_t {
                pub const m_Outflows: usize = 0x0; // CUtlVector<PulseNodeDynamicOutflows_t::DynamicOutflow_t>
            }
            // Parent: CBaseModelEntity
            // Field count: 5
            pub mod CFogVolume {
                pub const m_fogName: usize = 0x770; // CUtlSymbolLarge
                pub const m_postProcessName: usize = 0x778; // CUtlSymbolLarge
                pub const m_colorCorrectionName: usize = 0x780; // CUtlSymbolLarge
                pub const m_bDisabled: usize = 0x790; // bool
                pub const m_bInFogVolumesList: usize = 0x791; // bool
            }
            // Parent: CBaseModelEntity
            // Field count: 19
            pub mod CFuncRotating {
                pub const m_OnStopped: usize = 0x770; // CEntityIOOutput
                pub const m_OnStarted: usize = 0x788; // CEntityIOOutput
                pub const m_OnReachedStart: usize = 0x7A0; // CEntityIOOutput
                pub const m_localRotationVector: usize = 0x7B8; // RotationVector
                pub const m_flSpeed: usize = 0x7C4; // float32
                pub const m_flFanFriction: usize = 0x7C8; // float32
                pub const m_flAttenuation: usize = 0x7CC; // float32
                pub const m_flVolume: usize = 0x7D0; // float32
                pub const m_flTargetSpeed: usize = 0x7D4; // float32
                pub const m_flMaxSpeed: usize = 0x7D8; // float32
                pub const m_flBlockDamage: usize = 0x7DC; // float32
                pub const m_NoiseRunning: usize = 0x7E0; // CGameSoundEventName
                pub const m_bReversed: usize = 0x7E8; // bool
                pub const m_bAccelDecel: usize = 0x7E9; // bool
                pub const m_prevLocalAngles: usize = 0x800; // QAngle
                pub const m_angStart: usize = 0x80C; // QAngle
                pub const m_bStopAtStartPos: usize = 0x818; // bool
                pub const m_vecClientOrigin: usize = 0x81C; // Vector
                pub const m_vecClientAngles: usize = 0x828; // QAngle
            }
            // Parent: CBaseEntity
            // Field count: 13
            pub mod CTimerEntity {
                pub const m_OnTimer: usize = 0x4A8; // CEntityIOOutput
                pub const m_OnTimerHigh: usize = 0x4C0; // CEntityIOOutput
                pub const m_OnTimerLow: usize = 0x4D8; // CEntityIOOutput
                pub const m_iDisabled: usize = 0x4F0; // int32
                pub const m_flInitialDelay: usize = 0x4F4; // float32
                pub const m_flRefireTime: usize = 0x4F8; // float32
                pub const m_bUpDownState: usize = 0x4FC; // bool
                pub const m_iUseRandomTime: usize = 0x500; // int32
                pub const m_bPauseAfterFiring: usize = 0x504; // bool
                pub const m_flLowerRandomBound: usize = 0x508; // float32
                pub const m_flUpperRandomBound: usize = 0x50C; // float32
                pub const m_flRemainingTime: usize = 0x510; // float32
                pub const m_bPaused: usize = 0x514; // bool
            }
            // Parent: None
            // Field count: 14
            pub mod CBtActionMoveTo {
                pub const m_szDestinationInputKey: usize = 0x60; // CUtlString
                pub const m_szHidingSpotInputKey: usize = 0x68; // CUtlString
                pub const m_szThreatInputKey: usize = 0x70; // CUtlString
                pub const m_vecDestination: usize = 0x78; // VectorWS
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
            // Field count: 7
            pub mod CPlayer_MovementServices_Humanoid {
                pub const m_flStepSoundTime: usize = 0x258; // float32
                pub const m_flFallVelocity: usize = 0x25C; // float32
                pub const m_groundNormal: usize = 0x260; // Vector
                pub const m_flSurfaceFriction: usize = 0x26C; // float32
                pub const m_surfaceProps: usize = 0x270; // CUtlStringToken
                pub const m_nStepside: usize = 0x280; // int32
                pub const m_vecSmoothedVelocity: usize = 0x284; // Vector
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
            // Parent: None
            // Field count: 0
            pub mod CTriggerOnce {
            }
            // Parent: None
            // Field count: 21
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
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
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
            pub mod CFuncMonitor {
                pub const m_targetCamera: usize = 0x790; // CUtlString
                pub const m_nResolutionEnum: usize = 0x798; // int32
                pub const m_bRenderShadows: usize = 0x79C; // bool
                pub const m_bUseUniqueColorTarget: usize = 0x79D; // bool
                pub const m_brushModelName: usize = 0x7A0; // CUtlString
                pub const m_hTargetCamera: usize = 0x7A8; // CHandle<CBaseEntity>
                pub const m_bEnabled: usize = 0x7AC; // bool
                pub const m_bDraw3DSkybox: usize = 0x7AD; // bool
                pub const m_bStartEnabled: usize = 0x7AE; // bool
            }
            // Parent: CBaseEntity
            // Field count: 3
            pub mod CInfoVisibilityBox {
                pub const m_nMode: usize = 0x4AC; // int32
                pub const m_vBoxSize: usize = 0x4B0; // Vector
                pub const m_bEnabled: usize = 0x4BC; // bool
            }
            // Parent: CBaseToggle
            // Field count: 4
            pub mod CGunTarget {
                pub const m_flSpeed: usize = 0x7F0; // float32
                pub const m_on: usize = 0x7F4; // bool
                pub const m_hTargetEnt: usize = 0x7F8; // CHandle<CBaseEntity>
                pub const m_OnDeath: usize = 0x800; // CEntityIOOutput
            }
            // Parent: CSoundEventEntity
            // Field count: 5
            pub mod CSoundEventConeEntity {
                pub const m_flEmitterAngle: usize = 0x568; // float32
                pub const m_flSweetSpotAngle: usize = 0x56C; // float32
                pub const m_flAttenMin: usize = 0x570; // float32
                pub const m_flAttenMax: usize = 0x574; // float32
                pub const m_iszParameterName: usize = 0x578; // CUtlSymbolLarge
            }
            // Parent: None
            // Field count: 0
            pub mod CCSObserverPawn_API {
            }
            // Parent: None
            // Field count: 0
            pub mod CSoundOpvarSetOBBEntity {
            }
            // Parent: None
            // Field count: 0
            pub mod CFilterMultipleAPI {
            }
            // Parent: CBaseCSGrenadeProjectile
            // Field count: 4
            pub mod CDecoyProjectile {
                pub const m_nDecoyShotTick: usize = 0xA78; // int32
                pub const m_shotsRemaining: usize = 0xA7C; // int32
                pub const m_fExpireTime: usize = 0xA80; // GameTime_t
                pub const m_decoyWeaponDefIndex: usize = 0xA90; // uint16
            }
            // Parent: None
            // Field count: 0
            pub mod CPrecipitationBlocker {
            }
            // Parent: CSoundOpvarSetPointEntity
            // Field count: 4
            pub mod CSoundOpvarSetPathCornerEntity {
                pub const m_bUseParentedPath: usize = 0x658; // bool
                pub const m_flDistMinSqr: usize = 0x65C; // float32
                pub const m_flDistMaxSqr: usize = 0x660; // float32
                pub const m_iszPathCornerEntityName: usize = 0x668; // CUtlSymbolLarge
            }
            // Parent: CPointEntity
            // Field count: 0
            pub mod CPointClientCommand {
            }
            // Parent: CHostageRescueZoneShim
            // Field count: 0
            pub mod CHostageRescueZone {
            }
            // Parent: None
            // Field count: 0
            pub mod CWorld {
            }
            // Parent: CBaseEntity
            // Field count: 16
            pub mod CPathMoverEntitySpawner {
                pub const m_szSpawnTemplates: usize = 0x4A8; // CUtlSymbolLarge[4]
                pub const m_nSpawnIndex: usize = 0x4C8; // int32
                pub const m_hPathMover: usize = 0x4CC; // CHandle<CPathMover>
                pub const m_flSpawnFrequencySeconds: usize = 0x4D0; // float32
                pub const m_flSpawnFrequencyDistToNearestMover: usize = 0x4D4; // float32
                pub const m_mapSpawnedMoverTemplates: usize = 0x4D8; // CUtlHashtable<CHandle<CFuncMover>,PathMoverEntitySpawn>
                pub const m_nMaxActive: usize = 0x4F8; // int32
                pub const m_nSpawnNum: usize = 0x4FC; // int32
                pub const m_flLastSpawnTime: usize = 0x500; // GameTime_t
                pub const m_bEnabled: usize = 0x504; // bool
                pub const m_bDestroyMoverOnArrivedAtEnd: usize = 0x505; // bool
                pub const m_vecQueuedRemovals: usize = 0x508; // CUtlVector<CHandle<CFuncMover>>
                pub const m_OnTemplateSpawned: usize = 0x520; // CEntityIOOutput
                pub const m_OnTemplateGroupSpawned: usize = 0x538; // CEntityIOOutput
                pub const m_iszPathMoverName: usize = 0x550; // CUtlSymbolLarge
                pub const m_bPrepopulateOnSpawn: usize = 0x558; // bool
            }
            // Parent: None
            // Field count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CModelState {
                pub const m_hModel: usize = 0xA0; // CStrongHandle<InfoForResourceTypeCModel>
                pub const m_ModelName: usize = 0xA8; // CUtlSymbolLarge
                pub const m_pVPhysicsAggregate: usize = 0xE0; // IPhysAggregateInstance*
                pub const m_flRootBoneOffset_x: usize = 0xE8; // float32
                pub const m_flRootBoneOffset_y: usize = 0xEC; // float32
                pub const m_flRootBoneOffset_z: usize = 0xF0; // float32
                pub const m_nRootBoneOffsetResetSerialNumber: usize = 0xF4; // uint8
                pub const m_bClientClothCreationSuppressed: usize = 0xF5; // bool
                pub const m_nAnimStateNoInterpSerialNumber: usize = 0x1E0; // uint8
                pub const m_MeshGroupMask: usize = 0x1E8; // uint64
                pub const m_nBodyGroupChoices: usize = 0x238; // CNetworkUtlVectorBase<int32>
                pub const m_nIdealMotionType: usize = 0x282; // int8
                pub const m_nForceLOD: usize = 0x283; // int8
                pub const m_nClothUpdateFlags: usize = 0x284; // int8
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
            // Parent: None
            // Field count: 0
            pub mod CTriggerGravity {
            }
            // Parent: None
            // Field count: 17
            //
            // Metadata:
            // MGetKV3ClassDefaults
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
                pub const m_fFilterMass: usize = 0x4E0; // float32
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            pub mod CWeaponMP7 {
            }
            // Parent: CCSWeaponBase
            // Field count: 10
            pub mod CCSWeaponBaseGun {
                pub const m_zoomLevel: usize = 0x1050; // int32
                pub const m_iBurstShotsRemaining: usize = 0x1054; // int32
                pub const m_silencedModelIndex: usize = 0x1060; // int32
                pub const m_inPrecache: usize = 0x1064; // bool
                pub const m_bNeedsBoltAction: usize = 0x1065; // bool
                pub const m_nRevolverCylinderIdx: usize = 0x1068; // int32
                pub const m_bSkillReloadAvailable: usize = 0x106C; // bool
                pub const m_bSkillReloadLiftedReloadKey: usize = 0x106D; // bool
                pub const m_bSkillBoltInterruptAvailable: usize = 0x106E; // bool
                pub const m_bSkillBoltLiftedFireKey: usize = 0x106F; // bool
            }
            // Parent: CBaseEntity
            // Field count: 0
            pub mod CEnableMotionFixup {
            }
            // Parent: CLogicAutosave
            // Field count: 4
            pub mod CLogicActiveAutosave {
                pub const m_TriggerHitPoints: usize = 0x4B8; // int32
                pub const m_flTimeToTrigger: usize = 0x4BC; // float32
                pub const m_flStartTime: usize = 0x4C0; // GameTime_t
                pub const m_flDangerousTime: usize = 0x4C4; // float32
            }
            // Parent: CBaseEntity
            // Field count: 11
            pub mod CMathCounter {
                pub const m_flMin: usize = 0x4A8; // float32
                pub const m_flMax: usize = 0x4AC; // float32
                pub const m_bHitMin: usize = 0x4B0; // bool
                pub const m_bHitMax: usize = 0x4B1; // bool
                pub const m_bDisabled: usize = 0x4B2; // bool
                pub const m_OutValue: usize = 0x4B8; // CEntityOutputTemplate<float32>
                pub const m_OnGetValue: usize = 0x4D8; // CEntityOutputTemplate<float32>
                pub const m_OnHitMin: usize = 0x4F8; // CEntityIOOutput
                pub const m_OnHitMax: usize = 0x510; // CEntityIOOutput
                pub const m_OnChangedFromMin: usize = 0x528; // CEntityIOOutput
                pub const m_OnChangedFromMax: usize = 0x540; // CEntityIOOutput
            }
            // Parent: None
            // Field count: 1
            pub mod CCSGameModeRules_ArmsRace {
                pub const m_WeaponSequence: usize = 0x30; // CNetworkUtlVectorBase<CUtlString>
            }
            // Parent: CAttributeManager
            // Field count: 1
            pub mod CAttributeContainer {
                pub const m_Item: usize = 0x50; // CEconItemView
            }
            // Parent: CBaseModelEntity
            // Field count: 1
            pub mod CCSPlace {
                pub const m_name: usize = 0x788; // CUtlSymbolLarge
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
                pub const m_iFilterContext: usize = 0x4E0; // CUtlSymbolLarge
            }
            // Parent: CLightDirectionalEntity
            // Field count: 0
            pub mod CLightEnvironmentEntity {
            }
            // Parent: CBaseModelEntity
            // Field count: 9
            pub mod CEnvDecal {
                pub const m_hDecalMaterial: usize = 0x770; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_flWidth: usize = 0x778; // float32
                pub const m_flHeight: usize = 0x77C; // float32
                pub const m_flDepth: usize = 0x780; // float32
                pub const m_nRenderOrder: usize = 0x784; // uint32
                pub const m_bProjectOnWorld: usize = 0x788; // bool
                pub const m_bProjectOnCharacters: usize = 0x789; // bool
                pub const m_bProjectOnWater: usize = 0x78A; // bool
                pub const m_flDepthSortBias: usize = 0x78C; // float32
            }
            // Parent: CBaseEntity
            // Field count: 18
            pub mod CEnvVolumetricFogVolume {
                pub const m_bActive: usize = 0x4A8; // bool
                pub const m_vBoxMins: usize = 0x4AC; // Vector
                pub const m_vBoxMaxs: usize = 0x4B8; // Vector
                pub const m_bStartDisabled: usize = 0x4C4; // bool
                pub const m_bIndirectUseLPVs: usize = 0x4C5; // bool
                pub const m_flStrength: usize = 0x4C8; // float32
                pub const m_nFalloffShape: usize = 0x4CC; // int32
                pub const m_flFalloffExponent: usize = 0x4D0; // float32
                pub const m_flHeightFogDepth: usize = 0x4D4; // float32
                pub const m_fHeightFogEdgeWidth: usize = 0x4D8; // float32
                pub const m_fIndirectLightStrength: usize = 0x4DC; // float32
                pub const m_fSunLightStrength: usize = 0x4E0; // float32
                pub const m_fNoiseStrength: usize = 0x4E4; // float32
                pub const m_TintColor: usize = 0x4E8; // Color
                pub const m_bOverrideTintColor: usize = 0x4EC; // bool
                pub const m_bOverrideIndirectLightStrength: usize = 0x4ED; // bool
                pub const m_bOverrideSunLightStrength: usize = 0x4EE; // bool
                pub const m_bOverrideNoiseStrength: usize = 0x4EF; // bool
            }
            // Parent: None
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
            // MGetKV3ClassDefaults
            pub mod CBodyComponentSkeletonInstance {
                pub const m_skeletonInstance: usize = 0x80; // CSkeletonInstance
            }
            // Parent: CItem
            // Field count: 32
            pub mod CItemGeneric {
                pub const m_bHasTriggerRadius: usize = 0xA14; // bool
                pub const m_bHasPickupRadius: usize = 0xA15; // bool
                pub const m_flPickupRadiusSqr: usize = 0xA18; // float32
                pub const m_flTriggerRadiusSqr: usize = 0xA1C; // float32
                pub const m_flLastPickupCheck: usize = 0xA20; // GameTime_t
                pub const m_bPlayerCounterListenerAdded: usize = 0xA24; // bool
                pub const m_bPlayerInTriggerRadius: usize = 0xA25; // bool
                pub const m_hSpawnParticleEffect: usize = 0xA28; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                pub const m_pAmbientSoundEffect: usize = 0xA30; // CUtlSymbolLarge
                pub const m_bAutoStartAmbientSound: usize = 0xA38; // bool
                pub const m_pSpawnScriptFunction: usize = 0xA40; // CUtlSymbolLarge
                pub const m_hPickupParticleEffect: usize = 0xA48; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                pub const m_pPickupSoundEffect: usize = 0xA50; // CUtlSymbolLarge
                pub const m_pPickupScriptFunction: usize = 0xA58; // CUtlSymbolLarge
                pub const m_hTimeoutParticleEffect: usize = 0xA60; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                pub const m_pTimeoutSoundEffect: usize = 0xA68; // CUtlSymbolLarge
                pub const m_pTimeoutScriptFunction: usize = 0xA70; // CUtlSymbolLarge
                pub const m_pPickupFilterName: usize = 0xA78; // CUtlSymbolLarge
                pub const m_hPickupFilter: usize = 0xA80; // CHandle<CBaseFilter>
                pub const m_OnPickup: usize = 0xA88; // CEntityIOOutput
                pub const m_OnTimeout: usize = 0xAA0; // CEntityIOOutput
                pub const m_OnTriggerStartTouch: usize = 0xAB8; // CEntityIOOutput
                pub const m_OnTriggerTouch: usize = 0xAD0; // CEntityIOOutput
                pub const m_OnTriggerEndTouch: usize = 0xAE8; // CEntityIOOutput
                pub const m_pAllowPickupScriptFunction: usize = 0xB00; // CUtlSymbolLarge
                pub const m_flPickupRadius: usize = 0xB08; // float32
                pub const m_flTriggerRadius: usize = 0xB0C; // float32
                pub const m_pTriggerSoundEffect: usize = 0xB10; // CUtlSymbolLarge
                pub const m_bGlowWhenInTrigger: usize = 0xB18; // bool
                pub const m_glowColor: usize = 0xB19; // Color
                pub const m_bUseable: usize = 0xB1D; // bool
                pub const m_hTriggerHelper: usize = 0xB20; // CHandle<CItemGenericTriggerHelper>
            }
            // Parent: CBaseEntity
            // Field count: 44
            pub mod CPointValueRemapper {
                pub const m_bDisabled: usize = 0x4A8; // bool
                pub const m_bUpdateOnClient: usize = 0x4A9; // bool
                pub const m_nInputType: usize = 0x4AC; // ValueRemapperInputType_t
                pub const m_iszRemapLineStartName: usize = 0x4B0; // CUtlSymbolLarge
                pub const m_iszRemapLineEndName: usize = 0x4B8; // CUtlSymbolLarge
                pub const m_hRemapLineStart: usize = 0x4C0; // CHandle<CBaseEntity>
                pub const m_hRemapLineEnd: usize = 0x4C4; // CHandle<CBaseEntity>
                pub const m_flMaximumChangePerSecond: usize = 0x4C8; // float32
                pub const m_flDisengageDistance: usize = 0x4CC; // float32
                pub const m_flEngageDistance: usize = 0x4D0; // float32
                pub const m_bRequiresUseKey: usize = 0x4D4; // bool
                pub const m_nOutputType: usize = 0x4D8; // ValueRemapperOutputType_t
                pub const m_iszOutputEntityName: usize = 0x4E0; // CUtlSymbolLarge
                pub const m_iszOutputEntity2Name: usize = 0x4E8; // CUtlSymbolLarge
                pub const m_iszOutputEntity3Name: usize = 0x4F0; // CUtlSymbolLarge
                pub const m_iszOutputEntity4Name: usize = 0x4F8; // CUtlSymbolLarge
                pub const m_hOutputEntities: usize = 0x500; // CNetworkUtlVectorBase<CHandle<CBaseEntity>>
                pub const m_nHapticsType: usize = 0x518; // ValueRemapperHapticsType_t
                pub const m_nMomentumType: usize = 0x51C; // ValueRemapperMomentumType_t
                pub const m_flMomentumModifier: usize = 0x520; // float32
                pub const m_flSnapValue: usize = 0x524; // float32
                pub const m_flCurrentMomentum: usize = 0x528; // float32
                pub const m_nRatchetType: usize = 0x52C; // ValueRemapperRatchetType_t
                pub const m_flRatchetOffset: usize = 0x530; // float32
                pub const m_flInputOffset: usize = 0x534; // float32
                pub const m_bEngaged: usize = 0x538; // bool
                pub const m_bFirstUpdate: usize = 0x539; // bool
                pub const m_flPreviousValue: usize = 0x53C; // float32
                pub const m_flPreviousUpdateTickTime: usize = 0x540; // GameTime_t
                pub const m_vecPreviousTestPoint: usize = 0x544; // VectorWS
                pub const m_hUsingPlayer: usize = 0x550; // CHandle<CBasePlayerPawn>
                pub const m_flCustomOutputValue: usize = 0x554; // float32
                pub const m_iszSoundEngage: usize = 0x558; // CUtlSymbolLarge
                pub const m_iszSoundDisengage: usize = 0x560; // CUtlSymbolLarge
                pub const m_iszSoundReachedValueZero: usize = 0x568; // CUtlSymbolLarge
                pub const m_iszSoundReachedValueOne: usize = 0x570; // CUtlSymbolLarge
                pub const m_iszSoundMovingLoop: usize = 0x578; // CUtlSymbolLarge
                pub const m_Position: usize = 0x598; // CEntityOutputTemplate<float32>
                pub const m_PositionDelta: usize = 0x5B8; // CEntityOutputTemplate<float32>
                pub const m_OnReachedValueZero: usize = 0x5D8; // CEntityIOOutput
                pub const m_OnReachedValueOne: usize = 0x5F0; // CEntityIOOutput
                pub const m_OnReachedValueCustom: usize = 0x608; // CEntityIOOutput
                pub const m_OnEngage: usize = 0x620; // CEntityIOOutput
                pub const m_OnDisengage: usize = 0x638; // CEntityIOOutput
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
            // Field count: 34
            pub mod CRagdollProp {
                pub const m_CPropDataComponent: usize = 0x970; // CPropDataComponent
                pub const m_ragdoll: usize = 0x9B0; // ragdoll_t
                pub const m_bStartDisabled: usize = 0xA00; // bool
                pub const m_massScale: usize = 0xA04; // float32
                pub const m_buoyancyScale: usize = 0xA08; // float32
                pub const m_ragEnabled: usize = 0xA10; // CNetworkUtlVectorBase<bool>
                pub const m_ragPos: usize = 0xA28; // CNetworkUtlVectorBase<Vector>
                pub const m_ragAngles: usize = 0xA40; // CNetworkUtlVectorBase<QAngle>
                pub const m_lastUpdateTickCount: usize = 0xA58; // uint32
                pub const m_allAsleep: usize = 0xA5C; // bool
                pub const m_bFirstCollisionAfterLaunch: usize = 0xA5D; // bool
                pub const m_nNavObstacleType: usize = 0xA60; // INavObstacle::NavObstacleType_t
                pub const m_bUpdateNavWhenMoving: usize = 0xA64; // bool
                pub const m_bForceNavObstacleCut: usize = 0xA65; // bool
                pub const m_bAttachedToReferenceFrame: usize = 0xA66; // bool
                pub const m_hDamageEntity: usize = 0xA68; // CHandle<CBaseEntity>
                pub const m_hKiller: usize = 0xA6C; // CHandle<CBaseEntity>
                pub const m_hPhysicsAttacker: usize = 0xA70; // CHandle<CBasePlayerPawn>
                pub const m_flLastPhysicsInfluenceTime: usize = 0xA74; // GameTime_t
                pub const m_flFadeOutStartTime: usize = 0xA78; // GameTime_t
                pub const m_flFadeTime: usize = 0xA7C; // float32
                pub const m_vecLastOrigin: usize = 0xA80; // VectorWS
                pub const m_flAwakeTime: usize = 0xA8C; // GameTime_t
                pub const m_flLastOriginChangeTime: usize = 0xA90; // GameTime_t
                pub const m_strOriginClassName: usize = 0xA98; // CUtlSymbolLarge
                pub const m_strSourceClassName: usize = 0xAA0; // CUtlSymbolLarge
                pub const m_bHasBeenPhysgunned: usize = 0xAA8; // bool
                pub const m_bAllowStretch: usize = 0xAA9; // bool
                pub const m_flBlendWeight: usize = 0xAAC; // float32
                pub const m_flDefaultFadeScale: usize = 0xAB0; // float32
                pub const m_ragdollMins: usize = 0xAB8; // CUtlVector<Vector>
                pub const m_ragdollMaxs: usize = 0xAD0; // CUtlVector<Vector>
                pub const m_bShouldDeleteActivationRecord: usize = 0xAE8; // bool
                pub const m_vecNavObstacles: usize = 0xB00; // CUtlVector<INavObstacle*>
            }
            // Parent: CEntityComponent
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CScriptComponent {
                pub const m_scriptClassName: usize = 0x30; // CUtlSymbolLarge
            }
            // Parent: CBasePlatTrain
            // Field count: 7
            pub mod CFuncTrain {
                pub const m_hCurrentTarget: usize = 0x818; // CHandle<CBaseEntity>
                pub const m_activated: usize = 0x81C; // bool
                pub const m_hEnemy: usize = 0x820; // CHandle<CBaseEntity>
                pub const m_flBlockDamage: usize = 0x824; // float32
                pub const m_flNextBlockTime: usize = 0x828; // GameTime_t
                pub const m_iszLastTarget: usize = 0x830; // CUtlSymbolLarge
                pub const m_flSpeed: usize = 0x838; // float32
            }
            // Parent: CBaseEntity
            // Field count: 4
            pub mod CAI_ChangeHintGroup {
                pub const m_iSearchType: usize = 0x4A8; // int32
                pub const m_strSearchName: usize = 0x4B0; // CUtlSymbolLarge
                pub const m_strNewHintGroup: usize = 0x4B8; // CUtlSymbolLarge
                pub const m_flRadius: usize = 0x4C0; // float32
            }
            // Parent: CPlayerPawnComponent
            // Field count: 1
            pub mod CCSPlayer_BuyServices {
                pub const m_vecSellbackPurchaseEntries: usize = 0xD0; // CUtlVectorEmbeddedNetworkVar<SellbackPurchaseEntry_t>
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            pub mod CWeaponAug {
            }
            // Parent: CPhysConstraint
            // Field count: 19
            pub mod CPhysHinge {
                pub const m_soundInfo: usize = 0x510; // ConstraintSoundInfo
                pub const m_NotifyMinLimitReached: usize = 0x5A8; // CEntityIOOutput
                pub const m_NotifyMaxLimitReached: usize = 0x5C0; // CEntityIOOutput
                pub const m_bAtMinLimit: usize = 0x5D8; // bool
                pub const m_bAtMaxLimit: usize = 0x5D9; // bool
                pub const m_hinge: usize = 0x5DC; // constraint_hingeparams_t
                pub const m_hingeFriction: usize = 0x61C; // float32
                pub const m_systemLoadScale: usize = 0x620; // float32
                pub const m_bIsAxisLocal: usize = 0x624; // bool
                pub const m_flMinRotation: usize = 0x628; // float32
                pub const m_flMaxRotation: usize = 0x62C; // float32
                pub const m_flInitialRotation: usize = 0x630; // float32
                pub const m_flMotorFrequency: usize = 0x634; // float32
                pub const m_flMotorDampingRatio: usize = 0x638; // float32
                pub const m_flAngleSpeed: usize = 0x63C; // float32
                pub const m_flAngleSpeedThreshold: usize = 0x640; // float32
                pub const m_flLimitsDebugVisRotation: usize = 0x644; // float32
                pub const m_OnStartMoving: usize = 0x648; // CEntityIOOutput
                pub const m_OnStopMoving: usize = 0x660; // CEntityIOOutput
            }
            // Parent: CBaseTrigger
            // Field count: 1
            pub mod CBuyZone {
                pub const m_LegacyTeamNum: usize = 0x8E8; // int32
            }
            // Parent: None
            // Field count: 2
            pub mod CInfoChoreoAnchor {
                pub const m_vecTargetEntries: usize = 0x4A8; // CUtlVector<CInfoChoreoAnchorPosition>
                pub const m_vecTargetWarps: usize = 0x4C0; // CUtlVector<CInfoChoreoAnchorPosition>
            }
            // Parent: None
            // Field count: 0
            pub mod DestructiblePartDamageRequestAPI {
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
            pub mod CInfoWorldLayer {
                pub const m_pOutputOnEntitiesSpawned: usize = 0x4A8; // CEntityIOOutput
                pub const m_worldName: usize = 0x4C0; // CUtlSymbolLarge
                pub const m_layerName: usize = 0x4C8; // CUtlSymbolLarge
                pub const m_bWorldLayerVisible: usize = 0x4D0; // bool
                pub const m_bEntitiesSpawned: usize = 0x4D1; // bool
                pub const m_bCreateAsChildSpawnGroup: usize = 0x4D2; // bool
                pub const m_hLayerSpawnGroup: usize = 0x4D4; // uint32
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
                pub const m_pActivator: usize = 0x4A8; // CHandle<CBaseEntity>
            }
            // Parent: CCSGO_EndOfMatchLineupEndpoint
            // Field count: 0
            pub mod CCSGO_EndOfMatchLineupStart {
            }
            // Parent: CBaseFilter
            // Field count: 1
            pub mod FilterDamageType {
                pub const m_iDamageType: usize = 0x4E0; // int32
            }
            // Parent: CBaseEntity
            // Field count: 26
            pub mod CPointCamera {
                pub const m_FOV: usize = 0x4A8; // float32
                pub const m_Resolution: usize = 0x4AC; // float32
                pub const m_bFogEnable: usize = 0x4B0; // bool
                pub const m_FogColor: usize = 0x4B1; // Color
                pub const m_flFogStart: usize = 0x4B8; // float32
                pub const m_flFogEnd: usize = 0x4BC; // float32
                pub const m_flFogMaxDensity: usize = 0x4C0; // float32
                pub const m_bActive: usize = 0x4C4; // bool
                pub const m_bUseScreenAspectRatio: usize = 0x4C5; // bool
                pub const m_flAspectRatio: usize = 0x4C8; // float32
                pub const m_bNoSky: usize = 0x4CC; // bool
                pub const m_fBrightness: usize = 0x4D0; // float32
                pub const m_flZFar: usize = 0x4D4; // float32
                pub const m_flZNear: usize = 0x4D8; // float32
                pub const m_bCanHLTVUse: usize = 0x4DC; // bool
                pub const m_bAlignWithParent: usize = 0x4DD; // bool
                pub const m_bDofEnabled: usize = 0x4DE; // bool
                pub const m_flDofNearBlurry: usize = 0x4E0; // float32
                pub const m_flDofNearCrisp: usize = 0x4E4; // float32
                pub const m_flDofFarCrisp: usize = 0x4E8; // float32
                pub const m_flDofFarBlurry: usize = 0x4EC; // float32
                pub const m_flDofTiltToGround: usize = 0x4F0; // float32
                pub const m_TargetFOV: usize = 0x4F4; // float32
                pub const m_DegreesPerSecond: usize = 0x4F8; // float32
                pub const m_bIsOn: usize = 0x4FC; // bool
                pub const m_pNext: usize = 0x500; // CPointCamera*
            }
            // Parent: None
            // Field count: 0
            pub mod CBuyZone_API {
            }
            // Parent: None
            // Field count: 2
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
                pub const m_WakeResume: usize = 0xD8; // CPulse_ResumePoint
            }
            // Parent: CBaseFilter
            // Field count: 1
            pub mod CFilterProximity {
                pub const m_flRadius: usize = 0x4E0; // float32
            }
            // Parent: None
            // Field count: 20
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CCS2WeaponGraphController {
                pub const m_action: usize = 0x88; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                pub const m_bActionReset: usize = 0xA0; // CAnimGraph2ParamOptionalRef<bool>
                pub const m_flWeaponActionSpeedScale: usize = 0xB8; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_weaponCategory: usize = 0xD0; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                pub const m_weaponType: usize = 0xE8; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                pub const m_weaponExtraInfo: usize = 0x100; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                pub const m_flWeaponAmmo: usize = 0x118; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_flWeaponAmmoMax: usize = 0x130; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_flWeaponAmmoReserve: usize = 0x148; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_bWeaponIsSilenced: usize = 0x160; // CAnimGraph2ParamOptionalRef<bool>
                pub const m_flWeaponIronsightAmount: usize = 0x178; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_bIsUsingLegacyModel: usize = 0x190; // CAnimGraph2ParamOptionalRef<bool>
                pub const m_idleVariation: usize = 0x1A8; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_deployVariation: usize = 0x1C0; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_attackType: usize = 0x1D8; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                pub const m_attackThrowStrength: usize = 0x1F0; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_flAttackVariation: usize = 0x208; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_inspectVariation: usize = 0x220; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_inspectExtraInfo: usize = 0x238; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                pub const m_reloadStage: usize = 0x250; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
            }
            // Parent: None
            // Field count: 20
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
            }
            // Parent: CBaseModelEntity
            // Field count: 10
            pub mod CEntityDissolve {
                pub const m_flFadeInStart: usize = 0x770; // float32
                pub const m_flFadeInLength: usize = 0x774; // float32
                pub const m_flFadeOutModelStart: usize = 0x778; // float32
                pub const m_flFadeOutModelLength: usize = 0x77C; // float32
                pub const m_flFadeOutStart: usize = 0x780; // float32
                pub const m_flFadeOutLength: usize = 0x784; // float32
                pub const m_flStartTime: usize = 0x788; // GameTime_t
                pub const m_nDissolveType: usize = 0x78C; // EntityDissolveType_t
                pub const m_vDissolverOrigin: usize = 0x790; // VectorWS
                pub const m_nMagnitude: usize = 0x79C; // uint32
            }
            // Parent: None
            // Field count: 189
            pub mod CCSGameRules {
                pub const m_bFreezePeriod: usize = 0xD8; // bool
                pub const m_bWarmupPeriod: usize = 0xD9; // bool
                pub const m_fWarmupPeriodEnd: usize = 0xDC; // GameTime_t
                pub const m_fWarmupPeriodStart: usize = 0xE0; // GameTime_t
                pub const m_bTerroristTimeOutActive: usize = 0xE4; // bool
                pub const m_bCTTimeOutActive: usize = 0xE5; // bool
                pub const m_flTerroristTimeOutRemaining: usize = 0xE8; // float32
                pub const m_flCTTimeOutRemaining: usize = 0xEC; // float32
                pub const m_nTerroristTimeOuts: usize = 0xF0; // int32
                pub const m_nCTTimeOuts: usize = 0xF4; // int32
                pub const m_bTechnicalTimeOut: usize = 0xF8; // bool
                pub const m_bMatchWaitingForResume: usize = 0xF9; // bool
                pub const m_iFreezeTime: usize = 0xFC; // int32
                pub const m_iRoundTime: usize = 0x100; // int32
                pub const m_fMatchStartTime: usize = 0x104; // float32
                pub const m_fRoundStartTime: usize = 0x108; // GameTime_t
                pub const m_flRestartRoundTime: usize = 0x10C; // GameTime_t
                pub const m_bGameRestart: usize = 0x110; // bool
                pub const m_flGameStartTime: usize = 0x114; // float32
                pub const m_timeUntilNextPhaseStarts: usize = 0x118; // float32
                pub const m_gamePhase: usize = 0x11C; // int32
                pub const m_totalRoundsPlayed: usize = 0x120; // int32
                pub const m_nRoundsPlayedThisPhase: usize = 0x124; // int32
                pub const m_nOvertimePlaying: usize = 0x128; // int32
                pub const m_iHostagesRemaining: usize = 0x12C; // int32
                pub const m_bAnyHostageReached: usize = 0x130; // bool
                pub const m_bMapHasBombTarget: usize = 0x131; // bool
                pub const m_bMapHasRescueZone: usize = 0x132; // bool
                pub const m_bMapHasBuyZone: usize = 0x133; // bool
                pub const m_bIsQueuedMatchmaking: usize = 0x134; // bool
                pub const m_nQueuedMatchmakingMode: usize = 0x138; // int32
                pub const m_bIsValveDS: usize = 0x13C; // bool
                pub const m_bLogoMap: usize = 0x13D; // bool
                pub const m_bPlayAllStepSoundsOnServer: usize = 0x13E; // bool
                pub const m_iSpectatorSlotCount: usize = 0x140; // int32
                pub const m_MatchDevice: usize = 0x144; // int32
                pub const m_bHasMatchStarted: usize = 0x148; // bool
                pub const m_nNextMapInMapgroup: usize = 0x14C; // int32
                pub const m_szTournamentEventName: usize = 0x150; // char[512]
                pub const m_szTournamentEventStage: usize = 0x350; // char[512]
                pub const m_szMatchStatTxt: usize = 0x550; // char[512]
                pub const m_szTournamentPredictionsTxt: usize = 0x750; // char[512]
                pub const m_nTournamentPredictionsPct: usize = 0x950; // int32
                pub const m_flCMMItemDropRevealStartTime: usize = 0x954; // GameTime_t
                pub const m_flCMMItemDropRevealEndTime: usize = 0x958; // GameTime_t
                pub const m_bIsDroppingItems: usize = 0x95C; // bool
                pub const m_bIsQuestEligible: usize = 0x95D; // bool
                pub const m_bIsHltvActive: usize = 0x95E; // bool
                pub const m_bBombPlanted: usize = 0x95F; // bool
                pub const m_arrProhibitedItemIndices: usize = 0x960; // uint16[100]
                pub const m_arrTournamentActiveCasterAccounts: usize = 0xA28; // uint32[4]
                pub const m_numBestOfMaps: usize = 0xA38; // int32
                pub const m_nHalloweenMaskListSeed: usize = 0xA3C; // int32
                pub const m_bBombDropped: usize = 0xA40; // bool
                pub const m_iRoundWinStatus: usize = 0xA44; // int32
                pub const m_eRoundWinReason: usize = 0xA48; // int32
                pub const m_bTCantBuy: usize = 0xA4C; // bool
                pub const m_bCTCantBuy: usize = 0xA4D; // bool
                pub const m_iMatchStats_RoundResults: usize = 0xA50; // int32[30]
                pub const m_iMatchStats_PlayersAlive_CT: usize = 0xAC8; // int32[30]
                pub const m_iMatchStats_PlayersAlive_T: usize = 0xB40; // int32[30]
                pub const m_TeamRespawnWaveTimes: usize = 0xBB8; // float32[32]
                pub const m_flNextRespawnWave: usize = 0xC38; // GameTime_t[32]
                pub const m_vMinimapMins: usize = 0xCB8; // VectorWS
                pub const m_vMinimapMaxs: usize = 0xCC4; // VectorWS
                pub const m_MinimapVerticalSectionHeights: usize = 0xCD0; // float32[8]
                pub const m_ullLocalMatchID: usize = 0xCF0; // uint64
                pub const m_nEndMatchMapGroupVoteTypes: usize = 0xCF8; // int32[10]
                pub const m_nEndMatchMapGroupVoteOptions: usize = 0xD20; // int32[10]
                pub const m_nEndMatchMapVoteWinner: usize = 0xD48; // int32
                pub const m_iNumConsecutiveCTLoses: usize = 0xD4C; // int32
                pub const m_iNumConsecutiveTerroristLoses: usize = 0xD50; // int32
                pub const m_bHasHostageBeenTouched: usize = 0xD70; // bool
                pub const m_flIntermissionStartTime: usize = 0xD74; // GameTime_t
                pub const m_flIntermissionEndTime: usize = 0xD78; // GameTime_t
                pub const m_bLevelInitialized: usize = 0xD7C; // bool
                pub const m_iTotalRoundsPlayed: usize = 0xD80; // int32
                pub const m_iUnBalancedRounds: usize = 0xD84; // int32
                pub const m_endMatchOnRoundReset: usize = 0xD88; // bool
                pub const m_endMatchOnThink: usize = 0xD89; // bool
                pub const m_iNumTerrorist: usize = 0xD8C; // int32
                pub const m_iNumCT: usize = 0xD90; // int32
                pub const m_iNumSpawnableTerrorist: usize = 0xD94; // int32
                pub const m_iNumSpawnableCT: usize = 0xD98; // int32
                pub const m_arrSelectedHostageSpawnIndices: usize = 0xDA0; // CUtlVector<int32>
                pub const m_nSpawnPointsRandomSeed: usize = 0xDB8; // int32
                pub const m_bFirstConnected: usize = 0xDBC; // bool
                pub const m_bCompleteReset: usize = 0xDBD; // bool
                pub const m_bPickNewTeamsOnReset: usize = 0xDBE; // bool
                pub const m_bScrambleTeamsOnRestart: usize = 0xDBF; // bool
                pub const m_bSwapTeamsOnRestart: usize = 0xDC0; // bool
                pub const m_nEndMatchTiedVotes: usize = 0xDC8; // CUtlVector<int32>
                pub const m_bNeedToAskPlayersForContinueVote: usize = 0xDE4; // bool
                pub const m_numQueuedMatchmakingAccounts: usize = 0xDE8; // uint32
                pub const m_fAvgPlayerRank: usize = 0xDEC; // float32
                pub const m_pQueuedMatchmakingReservationString: usize = 0xDF0; // char*
                pub const m_numTotalTournamentDrops: usize = 0xDF8; // uint32
                pub const m_numSpectatorsCountMax: usize = 0xDFC; // uint32
                pub const m_numSpectatorsCountMaxTV: usize = 0xE00; // uint32
                pub const m_numSpectatorsCountMaxLnk: usize = 0xE04; // uint32
                pub const m_nCTsAliveAtFreezetimeEnd: usize = 0xE10; // int32
                pub const m_nTerroristsAliveAtFreezetimeEnd: usize = 0xE14; // int32
                pub const m_bForceTeamChangeSilent: usize = 0xE18; // bool
                pub const m_bLoadingRoundBackupData: usize = 0xE19; // bool
                pub const m_nMatchInfoShowType: usize = 0xE50; // int32
                pub const m_flMatchInfoDecidedTime: usize = 0xE54; // float32
                pub const mTeamDMLastWinningTeamNumber: usize = 0xE70; // int32
                pub const mTeamDMLastThinkTime: usize = 0xE74; // float32
                pub const m_flTeamDMLastAnnouncementTime: usize = 0xE78; // float32
                pub const m_iAccountTerrorist: usize = 0xE7C; // int32
                pub const m_iAccountCT: usize = 0xE80; // int32
                pub const m_iSpawnPointCount_Terrorist: usize = 0xE84; // int32
                pub const m_iSpawnPointCount_CT: usize = 0xE88; // int32
                pub const m_iMaxNumTerrorists: usize = 0xE8C; // int32
                pub const m_iMaxNumCTs: usize = 0xE90; // int32
                pub const m_iLoserBonusMostRecentTeam: usize = 0xE94; // int32
                pub const m_tmNextPeriodicThink: usize = 0xE98; // float32
                pub const m_bVoiceWonMatchBragFired: usize = 0xE9C; // bool
                pub const m_fWarmupNextChatNoticeTime: usize = 0xEA0; // float32
                pub const m_iHostagesRescued: usize = 0xEA8; // int32
                pub const m_iHostagesTouched: usize = 0xEAC; // int32
                pub const m_flNextHostageAnnouncement: usize = 0xEB0; // float32
                pub const m_bNoTerroristsKilled: usize = 0xEB4; // bool
                pub const m_bNoCTsKilled: usize = 0xEB5; // bool
                pub const m_bNoEnemiesKilled: usize = 0xEB6; // bool
                pub const m_bCanDonateWeapons: usize = 0xEB7; // bool
                pub const m_firstKillTime: usize = 0xEBC; // float32
                pub const m_firstBloodTime: usize = 0xEC4; // float32
                pub const m_hostageWasInjured: usize = 0xEE0; // bool
                pub const m_hostageWasKilled: usize = 0xEE1; // bool
                pub const m_bVoteCalled: usize = 0xEF0; // bool
                pub const m_bServerVoteOnReset: usize = 0xEF1; // bool
                pub const m_flVoteCheckThrottle: usize = 0xEF4; // float32
                pub const m_bBuyTimeEnded: usize = 0xEF8; // bool
                pub const m_nLastFreezeEndBeep: usize = 0xEFC; // int32
                pub const m_bTargetBombed: usize = 0xF00; // bool
                pub const m_bBombDefused: usize = 0xF01; // bool
                pub const m_bMapHasBombZone: usize = 0xF02; // bool
                pub const m_vecMainCTSpawnPos: usize = 0xF50; // VectorWS
                pub const m_CTSpawnPointsMasterList: usize = 0xF60; // CUtlVector<CHandle<SpawnPoint>>
                pub const m_TerroristSpawnPointsMasterList: usize = 0xF78; // CUtlVector<CHandle<SpawnPoint>>
                pub const m_bRespawningAllRespawnablePlayers: usize = 0xF90; // bool
                pub const m_iNextCTSpawnPoint: usize = 0xF94; // int32
                pub const m_flCTSpawnPointUsedTime: usize = 0xF98; // float32
                pub const m_iNextTerroristSpawnPoint: usize = 0xF9C; // int32
                pub const m_flTerroristSpawnPointUsedTime: usize = 0xFA0; // float32
                pub const m_CTSpawnPoints: usize = 0xFA8; // CUtlVector<CHandle<SpawnPoint>>
                pub const m_TerroristSpawnPoints: usize = 0xFC0; // CUtlVector<CHandle<SpawnPoint>>
                pub const m_bIsUnreservedGameServer: usize = 0xFD8; // bool
                pub const m_fAutobalanceDisplayTime: usize = 0xFDC; // float32
                pub const m_bAllowWeaponSwitch: usize = 0x1018; // bool
                pub const m_bRoundTimeWarningTriggered: usize = 0x1019; // bool
                pub const m_phaseChangeAnnouncementTime: usize = 0x101C; // GameTime_t
                pub const m_fNextUpdateTeamClanNamesTime: usize = 0x1020; // float32
                pub const m_flLastThinkTime: usize = 0x1024; // GameTime_t
                pub const m_fAccumulatedRoundOffDamage: usize = 0x1028; // float32
                pub const m_nShorthandedBonusLastEvalRound: usize = 0x102C; // int32
                pub const m_nMatchAbortedEarlyReason: usize = 0x1078; // int32
                pub const m_bHasTriggeredRoundStartMusic: usize = 0x107C; // bool
                pub const m_bSwitchingTeamsAtRoundReset: usize = 0x107D; // bool
                pub const m_pGameModeRules: usize = 0x1098; // CCSGameModeRules*
                pub const m_BtGlobalBlackboard: usize = 0x10A0; // KeyValues3
                pub const m_hPlayerResource: usize = 0x1138; // CHandle<CBaseEntity>
                pub const m_RetakeRules: usize = 0x1140; // CRetakeGameRules
                pub const m_arrTeamUniqueKillWeaponsMatch: usize = 0x1330; // CUtlVector<int32>[4]
                pub const m_bTeamLastKillUsedUniqueWeaponMatch: usize = 0x1390; // bool[4]
                pub const m_nMatchEndCount: usize = 0x13B8; // uint8
                pub const m_nTTeamIntroVariant: usize = 0x13BC; // int32
                pub const m_nCTTeamIntroVariant: usize = 0x13C0; // int32
                pub const m_bTeamIntroPeriod: usize = 0x13C4; // bool
                pub const m_fTeamIntroPeriodEnd: usize = 0x13C8; // GameTime_t
                pub const m_bPlayedTeamIntroVO: usize = 0x13CC; // bool
                pub const m_iRoundEndWinnerTeam: usize = 0x13D0; // int32
                pub const m_eRoundEndReason: usize = 0x13D4; // int32
                pub const m_bRoundEndShowTimerDefend: usize = 0x13D8; // bool
                pub const m_iRoundEndTimerTime: usize = 0x13DC; // int32
                pub const m_sRoundEndFunFactToken: usize = 0x13E0; // CUtlString
                pub const m_iRoundEndFunFactPlayerSlot: usize = 0x13E8; // CPlayerSlot
                pub const m_iRoundEndFunFactData1: usize = 0x13EC; // int32
                pub const m_iRoundEndFunFactData2: usize = 0x13F0; // int32
                pub const m_iRoundEndFunFactData3: usize = 0x13F4; // int32
                pub const m_sRoundEndMessage: usize = 0x13F8; // CUtlString
                pub const m_iRoundEndPlayerCount: usize = 0x1400; // int32
                pub const m_bRoundEndNoMusic: usize = 0x1404; // bool
                pub const m_iRoundEndLegacy: usize = 0x1408; // int32
                pub const m_nRoundEndCount: usize = 0x140C; // uint8
                pub const m_iRoundStartRoundNumber: usize = 0x1410; // int32
                pub const m_nRoundStartCount: usize = 0x1414; // uint8
                pub const m_flLastPerfSampleTime: usize = 0x5420; // float64
            }
            // Parent: None
            // Field count: 0
            pub mod CEnvSkyAPI {
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
            pub mod CBaseCSGrenadeProjectile {
                pub const m_vInitialPosition: usize = 0x9F0; // VectorWS
                pub const m_vInitialVelocity: usize = 0x9FC; // Vector
                pub const m_nBounces: usize = 0xA08; // int32
                pub const m_nExplodeEffectIndex: usize = 0xA10; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                pub const m_nExplodeEffectTickBegin: usize = 0xA18; // int32
                pub const m_vecExplodeEffectOrigin: usize = 0xA1C; // VectorWS
                pub const m_flSpawnTime: usize = 0xA28; // GameTime_t
                pub const m_unOGSExtraFlags: usize = 0xA2C; // uint8
                pub const m_bDetonationRecorded: usize = 0xA2D; // bool
                pub const m_nItemIndex: usize = 0xA2E; // uint16
                pub const m_vecOriginalSpawnLocation: usize = 0xA30; // VectorWS
                pub const m_flLastBounceSoundTime: usize = 0xA3C; // GameTime_t
                pub const m_vecGrenadeSpin: usize = 0xA40; // RotationVector
                pub const m_vecLastHitSurfaceNormal: usize = 0xA4C; // Vector
                pub const m_nTicksAtZeroVelocity: usize = 0xA58; // int32
                pub const m_bHasEverHitEnemy: usize = 0xA5C; // bool
            }
            // Parent: CBaseEntity
            // Field count: 14
            pub mod CPhysConstraint {
                pub const m_hJoint: usize = 0x4A8; // IPhysicsJoint*
                pub const m_nameAttach1: usize = 0x4B0; // CUtlSymbolLarge
                pub const m_nameAttach2: usize = 0x4B8; // CUtlSymbolLarge
                pub const m_hAttach1: usize = 0x4C0; // CHandle<CBaseEntity>
                pub const m_hAttach2: usize = 0x4C4; // CHandle<CBaseEntity>
                pub const m_nameAttachment1: usize = 0x4C8; // CUtlSymbolLarge
                pub const m_nameAttachment2: usize = 0x4D0; // CUtlSymbolLarge
                pub const m_breakSound: usize = 0x4D8; // CGameSoundEventName
                pub const m_forceLimit: usize = 0x4E0; // float32
                pub const m_torqueLimit: usize = 0x4E4; // float32
                pub const m_minTeleportDistance: usize = 0x4E8; // float32
                pub const m_bSnapObjectPositions: usize = 0x4EC; // bool
                pub const m_bTreatEntity1AsInfiniteMass: usize = 0x4ED; // bool
                pub const m_OnBreak: usize = 0x4F0; // CEntityIOOutput
            }
            // Parent: CBaseEntity
            // Field count: 3
            pub mod CLogicAchievement {
                pub const m_bDisabled: usize = 0x4A8; // bool
                pub const m_iszAchievementEventID: usize = 0x4B0; // CUtlSymbolLarge
                pub const m_OnFired: usize = 0x4B8; // CEntityIOOutput
            }
            // Parent: None
            // Field count: 3
            pub mod CCSPlayerController_InventoryServices__NetworkedLoadoutSlot_t {
                pub const pItem: usize = 0x0; // CEconItemView*
                pub const team: usize = 0x8; // uint16
                pub const slot: usize = 0xA; // uint16
            }
            // Parent: CEntityComponent
            // Field count: 71
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CLightComponent {
                pub const __m_pChainEntity: usize = 0x38; // CNetworkVarChainer
                pub const m_Color: usize = 0x75; // Color
                pub const m_SecondaryColor: usize = 0x79; // Color
                pub const m_flBrightness: usize = 0x80; // float32
                pub const m_flBrightnessScale: usize = 0x84; // float32
                pub const m_flBrightnessMult: usize = 0x88; // float32
                pub const m_flRange: usize = 0x8C; // float32
                pub const m_flFalloff: usize = 0x90; // float32
                pub const m_flAttenuation0: usize = 0x94; // float32
                pub const m_flAttenuation1: usize = 0x98; // float32
                pub const m_flAttenuation2: usize = 0x9C; // float32
                pub const m_flTheta: usize = 0xA0; // float32
                pub const m_flPhi: usize = 0xA4; // float32
                pub const m_hLightCookie: usize = 0xA8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_nCascades: usize = 0xB0; // int32
                pub const m_nCastShadows: usize = 0xB4; // int32
                pub const m_nShadowWidth: usize = 0xB8; // int32
                pub const m_nShadowHeight: usize = 0xBC; // int32
                pub const m_bRenderDiffuse: usize = 0xC0; // bool
                pub const m_nRenderSpecular: usize = 0xC4; // int32
                pub const m_bRenderTransmissive: usize = 0xC8; // bool
                pub const m_flOrthoLightWidth: usize = 0xCC; // float32
                pub const m_flOrthoLightHeight: usize = 0xD0; // float32
                pub const m_nStyle: usize = 0xD4; // int32
                pub const m_Pattern: usize = 0xD8; // CUtlString
                pub const m_nCascadeRenderStaticObjects: usize = 0xE0; // int32
                pub const m_flShadowCascadeCrossFade: usize = 0xE4; // float32
                pub const m_flShadowCascadeDistanceFade: usize = 0xE8; // float32
                pub const m_flShadowCascadeDistance0: usize = 0xEC; // float32
                pub const m_flShadowCascadeDistance1: usize = 0xF0; // float32
                pub const m_flShadowCascadeDistance2: usize = 0xF4; // float32
                pub const m_flShadowCascadeDistance3: usize = 0xF8; // float32
                pub const m_nShadowCascadeResolution0: usize = 0xFC; // int32
                pub const m_nShadowCascadeResolution1: usize = 0x100; // int32
                pub const m_nShadowCascadeResolution2: usize = 0x104; // int32
                pub const m_nShadowCascadeResolution3: usize = 0x108; // int32
                pub const m_bUsesBakedShadowing: usize = 0x10C; // bool
                pub const m_nShadowPriority: usize = 0x110; // int32
                pub const m_nBakedShadowIndex: usize = 0x114; // int32
                pub const m_nLightPathUniqueId: usize = 0x118; // int32
                pub const m_nLightMapUniqueId: usize = 0x11C; // int32
                pub const m_bRenderToCubemaps: usize = 0x120; // bool
                pub const m_bAllowSSTGeneration: usize = 0x121; // bool
                pub const m_nDirectLight: usize = 0x124; // int32
                pub const m_nBounceLight: usize = 0x128; // int32
                pub const m_flBounceScale: usize = 0x12C; // float32
                pub const m_flFadeMinDist: usize = 0x130; // float32
                pub const m_flFadeMaxDist: usize = 0x134; // float32
                pub const m_flShadowFadeMinDist: usize = 0x138; // float32
                pub const m_flShadowFadeMaxDist: usize = 0x13C; // float32
                pub const m_bEnabled: usize = 0x140; // bool
                pub const m_bFlicker: usize = 0x141; // bool
                pub const m_bPrecomputedFieldsValid: usize = 0x142; // bool
                pub const m_vPrecomputedBoundsMins: usize = 0x144; // Vector
                pub const m_vPrecomputedBoundsMaxs: usize = 0x150; // Vector
                pub const m_vPrecomputedOBBOrigin: usize = 0x15C; // Vector
                pub const m_vPrecomputedOBBAngles: usize = 0x168; // QAngle
                pub const m_vPrecomputedOBBExtent: usize = 0x174; // Vector
                pub const m_flPrecomputedMaxRange: usize = 0x180; // float32
                pub const m_nFogLightingMode: usize = 0x184; // int32
                pub const m_flFogContributionStength: usize = 0x188; // float32
                pub const m_flNearClipPlane: usize = 0x18C; // float32
                pub const m_SkyColor: usize = 0x190; // Color
                pub const m_flSkyIntensity: usize = 0x194; // float32
                pub const m_SkyAmbientBounce: usize = 0x198; // Color
                pub const m_bUseSecondaryColor: usize = 0x19C; // bool
                pub const m_bMixedShadows: usize = 0x19D; // bool
                pub const m_flLightStyleStartTime: usize = 0x1A0; // GameTime_t
                pub const m_flCapsuleLength: usize = 0x1A4; // float32
                pub const m_flMinRoughness: usize = 0x1A8; // float32
                pub const m_bPvsModifyEntity: usize = 0x1B8; // bool
            }
            // Parent: CBasePlayerWeapon
            // Field count: 52
            pub mod CCSWeaponBase {
                pub const m_bRemoveable: usize = 0xCD8; // bool
                pub const m_bPlayerAmmoStockOnPickup: usize = 0xCD9; // bool
                pub const m_bRequireUseToTouch: usize = 0xCDA; // bool
                pub const m_iWeaponGameplayAnimState: usize = 0xCDC; // WeaponGameplayAnimState
                pub const m_flWeaponGameplayAnimStateTimestamp: usize = 0xCE0; // GameTime_t
                pub const m_flInspectCancelCompleteTime: usize = 0xCE4; // GameTime_t
                pub const m_bInspectPending: usize = 0xCE8; // bool
                pub const m_bInspectShouldLoop: usize = 0xCE9; // bool
                pub const m_nLastEmptySoundCmdNum: usize = 0xD14; // int32
                pub const m_bFireOnEmpty: usize = 0xD30; // bool
                pub const m_OnPlayerPickup: usize = 0xD38; // CEntityIOOutput
                pub const m_weaponMode: usize = 0xD50; // CSWeaponMode
                pub const m_flTurningInaccuracyDelta: usize = 0xD54; // float32
                pub const m_vecTurningInaccuracyEyeDirLast: usize = 0xD58; // Vector
                pub const m_flTurningInaccuracy: usize = 0xD64; // float32
                pub const m_fAccuracyPenalty: usize = 0xD68; // float32
                pub const m_flLastAccuracyUpdateTime: usize = 0xD6C; // GameTime_t
                pub const m_fAccuracySmoothedForZoom: usize = 0xD70; // float32
                pub const m_iRecoilIndex: usize = 0xD74; // int32
                pub const m_flRecoilIndex: usize = 0xD78; // float32
                pub const m_bBurstMode: usize = 0xD7C; // bool
                pub const m_nPostponeFireReadyTicks: usize = 0xD80; // GameTick_t
                pub const m_flPostponeFireReadyFrac: usize = 0xD84; // float32
                pub const m_bInReload: usize = 0xD88; // bool
                pub const m_nDeployTick: usize = 0xD8C; // GameTick_t
                pub const m_flDroppedAtTime: usize = 0xD90; // GameTime_t
                pub const m_bIsHauledBack: usize = 0xD98; // bool
                pub const m_bSilencerOn: usize = 0xD99; // bool
                pub const m_flTimeSilencerSwitchComplete: usize = 0xD9C; // GameTime_t
                pub const m_flWeaponActionPlaybackRate: usize = 0xDA0; // float32
                pub const m_iOriginalTeamNumber: usize = 0xDA4; // int32
                pub const m_iMostRecentTeamNumber: usize = 0xDA8; // int32
                pub const m_bDroppedNearBuyZone: usize = 0xDAC; // bool
                pub const m_flNextAttackRenderTimeOffset: usize = 0xDB0; // float32
                pub const m_bCanBePickedUp: usize = 0xDC8; // bool
                pub const m_bUseCanOverrideNextOwnerTouchTime: usize = 0xDC9; // bool
                pub const m_nextOwnerTouchTime: usize = 0xDCC; // GameTime_t
                pub const m_nextPrevOwnerTouchTime: usize = 0xDD0; // GameTime_t
                pub const m_nextPrevOwnerUseTime: usize = 0xDD8; // GameTime_t
                pub const m_hPrevOwner: usize = 0xDDC; // CHandle<CCSPlayerPawn>
                pub const m_nDropTick: usize = 0xDE0; // GameTick_t
                pub const m_bWasActiveWeaponWhenDropped: usize = 0xDE4; // bool
                pub const m_donated: usize = 0xE04; // bool
                pub const m_fLastShotTime: usize = 0xE08; // GameTime_t
                pub const m_bWasOwnedByCT: usize = 0xE0C; // bool
                pub const m_bWasOwnedByTerrorist: usize = 0xE0D; // bool
                pub const m_numRemoveUnownedWeaponThink: usize = 0xE10; // int32
                pub const m_IronSightController: usize = 0xE70; // CIronSightController
                pub const m_iIronSightMode: usize = 0xE88; // int32
                pub const m_flLastLOSTraceFailureTime: usize = 0xE8C; // GameTime_t
                pub const m_flWatTickOffset: usize = 0xE90; // float32
                pub const m_flLastShakeTime: usize = 0xEA0; // GameTime_t
            }
            // Parent: CBaseClientUIEntity
            // Field count: 2
            pub mod CPointClientUIDialog {
                pub const m_hActivator: usize = 0x8D0; // CHandle<CBaseEntity>
                pub const m_bStartEnabled: usize = 0x8D4; // bool
            }
            // Parent: CBaseEntity
            // Field count: 4
            pub mod CLogicLineToEntity {
                pub const m_Line: usize = 0x4A8; // CEntityOutputTemplate<Vector>
                pub const m_SourceName: usize = 0x4D0; // CUtlSymbolLarge
                pub const m_StartEntity: usize = 0x4D8; // CHandle<CBaseEntity>
                pub const m_EndEntity: usize = 0x4DC; // CHandle<CBaseEntity>
            }
            // Parent: CSoundAreaEntityBase
            // Field count: 1
            pub mod CSoundAreaEntitySphere {
                pub const m_flRadius: usize = 0x4C8; // float32
            }
            // Parent: CPlayerPawnComponent
            // Field count: 4
            pub mod CCSPlayer_ActionTrackingServices {
                pub const m_hLastWeaponBeforeC4AutoSwitch: usize = 0x1F8; // CHandle<CBasePlayerWeapon>
                pub const m_bIsRescuing: usize = 0x224; // bool
                pub const m_weaponPurchasesThisMatch: usize = 0x228; // WeaponPurchaseTracker_t
                pub const m_weaponPurchasesThisRound: usize = 0x298; // WeaponPurchaseTracker_t
            }
            // Parent: None
            // Field count: 0
            pub mod CTestPulseIOComponent_API {
            }
            // Parent: None
            // Field count: 0
            pub mod CPhysicalButton {
            }
            // Parent: CBaseEntity
            // Field count: 13
            pub mod CInfoSpawnGroupLoadUnload {
                pub const m_OnSpawnGroupLoadStarted: usize = 0x4A8; // CEntityIOOutput
                pub const m_OnSpawnGroupLoadFinished: usize = 0x4C0; // CEntityIOOutput
                pub const m_OnSpawnGroupUnloadStarted: usize = 0x4D8; // CEntityIOOutput
                pub const m_OnSpawnGroupUnloadFinished: usize = 0x4F0; // CEntityIOOutput
                pub const m_iszSpawnGroupName: usize = 0x508; // CUtlSymbolLarge
                pub const m_iszSpawnGroupFilterName: usize = 0x510; // CUtlSymbolLarge
                pub const m_iszLandmarkName: usize = 0x518; // CUtlSymbolLarge
                pub const m_sFixedSpawnGroupName: usize = 0x520; // CUtlString
                pub const m_flTimeoutInterval: usize = 0x528; // float32
                pub const m_bAutoActivate: usize = 0x52C; // bool
                pub const m_bUnloadingStarted: usize = 0x52D; // bool
                pub const m_bQueueActiveSpawnGroupChange: usize = 0x52E; // bool
                pub const m_bQueueFinishLoading: usize = 0x52F; // bool
            }
            // Parent: CSoundAreaEntityBase
            // Field count: 2
            pub mod CSoundAreaEntityOrientedBox {
                pub const m_vMin: usize = 0x4C8; // Vector
                pub const m_vMax: usize = 0x4D4; // Vector
            }
            // Parent: CPlayer_MovementServices
            // Field count: 0
            pub mod CCSObserver_MovementServices {
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorSubHeaderText
            pub mod CPulseCell_Outflow_ListenForAnimgraphTag {
                pub const m_OnStart: usize = 0xD8; // CPulse_ResumePoint
                pub const m_OnEnd: usize = 0x120; // CPulse_ResumePoint
                pub const m_TagName: usize = 0x168; // CGlobalSymbol
            }
            // Parent: CEntityComponent
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
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
            // Parent: None
            // Field count: 13
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
            // Parent: None
            // Field count: 0
            pub mod CGameStateReportAPI {
            }
            // Parent: CMolotovGrenade
            // Field count: 0
            pub mod CIncendiaryGrenade {
            }
            // Parent: CPointEntity
            // Field count: 1
            pub mod CBaseDMStart {
                pub const m_Master: usize = 0x4A8; // CUtlSymbolLarge
            }
            // Parent: CBaseEntity
            // Field count: 40
            pub mod CBaseModelEntity {
                pub const m_CRenderComponent: usize = 0x4A8; // CRenderComponent*
                pub const m_CHitboxComponent: usize = 0x4B0; // CHitboxComponent
                pub const m_pChoreoComponent: usize = 0x4C8; // CChoreoComponent*
                pub const m_nDestructiblePartInitialStateDestructed0: usize = 0x4D0; // HitGroup_t
                pub const m_nDestructiblePartInitialStateDestructed1: usize = 0x4D4; // HitGroup_t
                pub const m_nDestructiblePartInitialStateDestructed2: usize = 0x4D8; // HitGroup_t
                pub const m_nDestructiblePartInitialStateDestructed3: usize = 0x4DC; // HitGroup_t
                pub const m_nDestructiblePartInitialStateDestructed4: usize = 0x4E0; // HitGroup_t
                pub const m_nDestructiblePartInitialStateDestructed0_PartIndex: usize = 0x4E4; // int32
                pub const m_nDestructiblePartInitialStateDestructed1_PartIndex: usize = 0x4E8; // int32
                pub const m_nDestructiblePartInitialStateDestructed2_PartIndex: usize = 0x4EC; // int32
                pub const m_nDestructiblePartInitialStateDestructed3_PartIndex: usize = 0x4F0; // int32
                pub const m_nDestructiblePartInitialStateDestructed4_PartIndex: usize = 0x4F4; // int32
                pub const m_bDestructiblePartInitialStateDestructed0_GenerateBreakpieces: usize = 0x4F8; // bool
                pub const m_bDestructiblePartInitialStateDestructed1_GenerateBreakpieces: usize = 0x4F9; // bool
                pub const m_bDestructiblePartInitialStateDestructed2_GenerateBreakpieces: usize = 0x4FA; // bool
                pub const m_bDestructiblePartInitialStateDestructed3_GenerateBreakpieces: usize = 0x4FB; // bool
                pub const m_bDestructiblePartInitialStateDestructed4_GenerateBreakpieces: usize = 0x4FC; // bool
                pub const m_pDestructiblePartsSystemComponent: usize = 0x500; // CDestructiblePartsComponent*
                pub const m_OnDestructibleHitGroupDamageLevelChanged: usize = 0x508; // CEntityOutputTemplate<CBaseModelEntity::OnDamageLevelChangedArgs_t>
                pub const m_flDissolveStartTime: usize = 0x530; // GameTime_t
                pub const m_OnIgnite: usize = 0x538; // CEntityIOOutput
                pub const m_nRenderMode: usize = 0x550; // RenderMode_t
                pub const m_nRenderFX: usize = 0x551; // RenderFx_t
                pub const m_bAllowFadeInView: usize = 0x552; // bool
                pub const m_clrRender: usize = 0x570; // Color
                pub const m_vecRenderAttributes: usize = 0x578; // CUtlVectorEmbeddedNetworkVar<EntityRenderAttribute_t>
                pub const m_bRenderToCubemaps: usize = 0x5E0; // bool
                pub const m_bNoInterpolate: usize = 0x5E1; // bool
                pub const m_Collision: usize = 0x5E8; // CCollisionProperty
                pub const m_Glow: usize = 0x6A0; // CGlowProperty
                pub const m_flGlowBackfaceMult: usize = 0x6F8; // float32
                pub const m_fadeMinDist: usize = 0x6FC; // float32
                pub const m_fadeMaxDist: usize = 0x700; // float32
                pub const m_flFadeScale: usize = 0x704; // float32
                pub const m_flShadowStrength: usize = 0x708; // float32
                pub const m_nObjectCulling: usize = 0x70C; // uint8
                pub const m_bodyGroupChoices: usize = 0x710; // CUtlOrderedMap<CGlobalSymbol,int32>
                pub const m_vecViewOffset: usize = 0x738; // CNetworkViewOffsetVector
                pub const m_bvDisabledHitGroups: usize = 0x768; // uint32[1]
            }
            // Parent: None
            // Field count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
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
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
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
                pub const m_hOwner: usize = 0x7F0; // CHandle<CBaseEntity>
                pub const m_bHadOwner: usize = 0x7F4; // bool
                pub const m_flPostSpeakDelay: usize = 0x7F8; // float32
                pub const m_flPreDelay: usize = 0x7FC; // float32
                pub const m_bIsBackground: usize = 0x800; // bool
                pub const m_bRemoveOnCompletion: usize = 0x801; // bool
                pub const m_hTarget: usize = 0x804; // CHandle<CBaseEntity>
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
            pub mod CCitadelSoundOpvarSetOBB {
                pub const m_iszStackName: usize = 0x4A8; // CUtlSymbolLarge
                pub const m_iszOperatorName: usize = 0x4B0; // CUtlSymbolLarge
                pub const m_iszOpvarName: usize = 0x4B8; // CUtlSymbolLarge
                pub const m_vDistanceInnerMins: usize = 0x4C0; // Vector
                pub const m_vDistanceInnerMaxs: usize = 0x4CC; // Vector
                pub const m_vDistanceOuterMins: usize = 0x4D8; // Vector
                pub const m_vDistanceOuterMaxs: usize = 0x4E4; // Vector
                pub const m_nAABBDirection: usize = 0x4F0; // int32
            }
            // Parent: CBaseEntity
            // Field count: 2
            pub mod CSoundEventParameter {
                pub const m_iszParamName: usize = 0x4C0; // CUtlSymbolLarge
                pub const m_flFloatValue: usize = 0x4C8; // float32
            }
            // Parent: CPlayerPawnComponent
            // Field count: 0
            pub mod CPlayer_WaterServices {
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorCanvasItemSpecKV3
            pub mod CPulseCell_BooleanSwitchState {
                pub const m_Condition: usize = 0xD8; // CPulseObservableExpression<bool>
                pub const m_WhenTrue: usize = 0x150; // CPulse_OutflowConnection
                pub const m_WhenFalse: usize = 0x198; // CPulse_OutflowConnection
            }
            // Parent: None
            // Field count: 0
            pub mod CRotButton {
            }
            // Parent: CPointEntity
            // Field count: 2
            pub mod CEnvViewPunch {
                pub const m_flRadius: usize = 0x4A8; // float32
                pub const m_angViewPunch: usize = 0x4AC; // QAngle
            }
            // Parent: None
            // Field count: 15
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
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod VPhysicsCollisionAttribute_t {
                pub const m_nInteractsAs: usize = 0x8; // uint64
                pub const m_nInteractsWith: usize = 0x10; // uint64
                pub const m_nInteractsExclude: usize = 0x18; // uint64
                pub const m_nEntityId: usize = 0x20; // uint32
                pub const m_nOwnerId: usize = 0x24; // uint32
                pub const m_nHierarchyId: usize = 0x28; // uint16
                pub const m_nDetailLayerMask: usize = 0x2A; // uint16
                pub const m_nDetailLayerMaskType: usize = 0x2C; // uint8
                pub const m_nTargetDetailLayer: usize = 0x2D; // uint8
                pub const m_nCollisionGroup: usize = 0x2E; // uint8
                pub const m_nCollisionFunctionMask: usize = 0x2F; // uint8
            }
            // Parent: CItem
            // Field count: 0
            pub mod CItemKevlar {
            }
            // Parent: CBaseModelEntity
            // Field count: 26
            pub mod CFuncShatterglass {
                pub const m_matPanelTransform: usize = 0x770; // matrix3x4_t
                pub const m_matPanelTransformWsTemp: usize = 0x7A0; // matrix3x4_t
                pub const m_vecShatterGlassShards: usize = 0x7D0; // CUtlVector<uint32>
                pub const m_PanelSize: usize = 0x7E8; // Vector2D
                pub const m_flLastShatterSoundEmitTime: usize = 0x7F0; // GameTime_t
                pub const m_flLastCleanupTime: usize = 0x7F4; // GameTime_t
                pub const m_flInitAtTime: usize = 0x7F8; // GameTime_t
                pub const m_flGlassThickness: usize = 0x7FC; // float32
                pub const m_flSpawnInvulnerability: usize = 0x800; // float32
                pub const m_bBreakSilent: usize = 0x804; // bool
                pub const m_bBreakShardless: usize = 0x805; // bool
                pub const m_bBroken: usize = 0x806; // bool
                pub const m_bGlassNavIgnore: usize = 0x807; // bool
                pub const m_bGlassInFrame: usize = 0x808; // bool
                pub const m_bStartBroken: usize = 0x809; // bool
                pub const m_iInitialDamageType: usize = 0x80A; // uint8
                pub const m_szDamagePositioningEntityName01: usize = 0x810; // CUtlSymbolLarge
                pub const m_szDamagePositioningEntityName02: usize = 0x818; // CUtlSymbolLarge
                pub const m_szDamagePositioningEntityName03: usize = 0x820; // CUtlSymbolLarge
                pub const m_szDamagePositioningEntityName04: usize = 0x828; // CUtlSymbolLarge
                pub const m_vInitialDamagePositions: usize = 0x830; // CUtlVector<VectorWS>
                pub const m_vExtraDamagePositions: usize = 0x848; // CUtlVector<VectorWS>
                pub const m_vInitialPanelVertices: usize = 0x860; // CUtlVector<Vector4D>
                pub const m_OnBroken: usize = 0x878; // CEntityIOOutput
                pub const m_iSurfaceType: usize = 0x890; // uint8
                pub const m_hMaterialDamageBase: usize = 0x898; // CStrongHandle<InfoForResourceTypeIMaterial2>
            }
            // Parent: None
            // Field count: 0
            pub mod CNavWalkable {
            }
            // Parent: CBaseAnimGraph
            // Field count: 27
            pub mod CPlantedC4 {
                pub const m_bBombTicking: usize = 0x9B8; // bool
                pub const m_flC4Blow: usize = 0x9BC; // GameTime_t
                pub const m_nBombSite: usize = 0x9C0; // int32
                pub const m_nSourceSoundscapeHash: usize = 0x9C4; // int32
                pub const m_bAbortDetonationBecauseWorldIsFrozen: usize = 0x9C8; // bool
                pub const m_AttributeManager: usize = 0x9D0; // CAttributeContainer
                pub const m_OnBombDefused: usize = 0xCC8; // CEntityIOOutput
                pub const m_OnBombBeginDefuse: usize = 0xCE0; // CEntityIOOutput
                pub const m_OnBombDefuseAborted: usize = 0xCF8; // CEntityIOOutput
                pub const m_bCannotBeDefused: usize = 0xD10; // bool
                pub const m_entitySpottedState: usize = 0xD18; // EntitySpottedState_t
                pub const m_nSpotRules: usize = 0xD30; // int32
                pub const m_bHasExploded: usize = 0xD34; // bool
                pub const m_bBombDefused: usize = 0xD35; // bool
                pub const m_bTrainingPlacedByPlayer: usize = 0xD36; // bool
                pub const m_flTimerLength: usize = 0xD38; // float32
                pub const m_bBeingDefused: usize = 0xD3C; // bool
                pub const m_fLastDefuseTime: usize = 0xD44; // GameTime_t
                pub const m_flDefuseLength: usize = 0xD4C; // float32
                pub const m_flDefuseCountDown: usize = 0xD50; // GameTime_t
                pub const m_hBombDefuser: usize = 0xD54; // CHandle<CCSPlayerPawn>
                pub const m_iProgressBarTime: usize = 0xD58; // int32
                pub const m_bVoiceAlertFired: usize = 0xD5C; // bool
                pub const m_bVoiceAlertPlayed: usize = 0xD5D; // bool[4]
                pub const m_flNextBotBeepTime: usize = 0xD64; // GameTime_t
                pub const m_angCatchUpToPlayerEye: usize = 0xD6C; // QAngle
                pub const m_flLastSpinDetectionTime: usize = 0xD78; // GameTime_t
            }
            // Parent: CEnvSoundscapeProxy
            // Field count: 0
            pub mod CEnvSoundscapeProxyAlias_snd_soundscape_proxy {
            }
            // Parent: CBaseEntity
            // Field count: 14
            pub mod CVoteController {
                pub const m_iActiveIssueIndex: usize = 0x4A8; // int32
                pub const m_iOnlyTeamToVote: usize = 0x4AC; // int32
                pub const m_nVoteOptionCount: usize = 0x4B0; // int32[5]
                pub const m_nPotentialVotes: usize = 0x4C4; // int32
                pub const m_bIsYesNoVote: usize = 0x4C8; // bool
                pub const m_acceptingVotesTimer: usize = 0x4D0; // CountdownTimer
                pub const m_executeCommandTimer: usize = 0x4E8; // CountdownTimer
                pub const m_resetVoteTimer: usize = 0x500; // CountdownTimer
                pub const m_nVotesCast: usize = 0x518; // int32[64]
                pub const m_playerHoldingVote: usize = 0x618; // CPlayerSlot
                pub const m_playerOverrideForVote: usize = 0x61C; // CPlayerSlot
                pub const m_nHighestCountIndex: usize = 0x620; // int32
                pub const m_potentialIssues: usize = 0x628; // CUtlVector<CBaseIssue*>
                pub const m_VoteOptions: usize = 0x640; // CUtlVector<char*>
            }
            // Parent: None
            // Field count: 0
            pub mod CFootstepControl_API {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Inflow_Yield {
                pub const m_UnyieldResume: usize = 0xD8; // CPulse_ResumePoint
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
                pub const m_damage: usize = 0x4A8; // float32
                pub const m_distance: usize = 0x4AC; // float32
                pub const m_directionEntityName: usize = 0x4B0; // CUtlSymbolLarge
            }
            // Parent: None
            // Field count: 0
            pub mod CCSPlayerPawnBase_API {
            }
            // Parent: None
            // Field count: 85
            pub mod CBaseEntity {
                pub const m_CBodyComponent: usize = 0x30; // CBodyComponent*
                pub const m_NetworkTransmitComponent: usize = 0x38; // CNetworkTransmitComponent
                pub const m_aThinkFunctions: usize = 0x248; // CUtlVector<thinkfunc_t>
                pub const m_iCurrentThinkContext: usize = 0x260; // int32
                pub const m_nLastThinkTick: usize = 0x264; // GameTick_t
                pub const m_bDisabledContextThinks: usize = 0x268; // bool
                pub const m_isSteadyState: usize = 0x278; // CTypedBitVec<64>
                pub const m_lastNetworkChange: usize = 0x280; // float32
                pub const m_think: usize = 0x288; // BASEPTR
                pub const m_ResponseContexts: usize = 0x290; // CUtlVector<ResponseContext_t>
                pub const m_iszResponseContext: usize = 0x2A8; // CUtlSymbolLarge
                pub const m_pfnTouch: usize = 0x2B0; // ENTITYFUNCPTR
                pub const m_pfnUse: usize = 0x2B8; // USEPTR
                pub const m_pfnBlocked: usize = 0x2C0; // ENTITYFUNCPTR
                pub const m_pfnMoveDone: usize = 0x2C8; // BASEPTR
                pub const m_iHealth: usize = 0x2D0; // int32
                pub const m_iMaxHealth: usize = 0x2D4; // int32
                pub const m_lifeState: usize = 0x2D8; // uint8
                pub const m_flDamageAccumulator: usize = 0x2DC; // float32
                pub const m_bTakesDamage: usize = 0x2E0; // bool
                pub const m_nTakeDamageFlags: usize = 0x2E8; // TakeDamageFlags_t
                pub const m_nPlatformType: usize = 0x2F0; // EntityPlatformTypes_t
                pub const m_MoveCollide: usize = 0x2F2; // MoveCollide_t
                pub const m_MoveType: usize = 0x2F3; // MoveType_t
                pub const m_nPreviouslySetMoveType: usize = 0x2F4; // MoveType_t
                pub const m_nActualMoveType: usize = 0x2F5; // MoveType_t
                pub const m_nWaterTouch: usize = 0x2F6; // uint8
                pub const m_nSlimeTouch: usize = 0x2F7; // uint8
                pub const m_bRestoreInHierarchy: usize = 0x2F8; // bool
                pub const m_target: usize = 0x300; // CUtlSymbolLarge
                pub const m_hDamageFilter: usize = 0x308; // CHandle<CBaseFilter>
                pub const m_iszDamageFilterName: usize = 0x310; // CUtlSymbolLarge
                pub const m_flMoveDoneTime: usize = 0x318; // float32
                pub const m_nSubclassID: usize = 0x31C; // CUtlStringToken
                pub const m_flAnimTime: usize = 0x328; // float32
                pub const m_flSimulationTime: usize = 0x32C; // float32
                pub const m_flCreateTime: usize = 0x330; // GameTime_t
                pub const m_bClientSideRagdoll: usize = 0x334; // bool
                pub const m_ubInterpolationFrame: usize = 0x335; // uint8
                pub const m_vPrevVPhysicsUpdatePos: usize = 0x338; // VectorWS
                pub const m_iTeamNum: usize = 0x344; // uint8
                pub const m_iGlobalname: usize = 0x348; // CUtlSymbolLarge
                pub const m_iSentToClients: usize = 0x350; // int32
                pub const m_sUniqueHammerID: usize = 0x358; // CUtlString
                pub const m_spawnflags: usize = 0x360; // uint32
                pub const m_nNextThinkTick: usize = 0x364; // GameTick_t
                pub const m_nSimulationTick: usize = 0x368; // int32
                pub const m_OnKilled: usize = 0x370; // CEntityIOOutput
                pub const m_fFlags: usize = 0x388; // uint32
                pub const m_vecAbsVelocity: usize = 0x38C; // Vector
                pub const m_vecVelocity: usize = 0x398; // CNetworkVelocityVector
                pub const m_vecBaseVelocity: usize = 0x3C8; // Vector
                pub const m_nPushEnumCount: usize = 0x3D4; // int32
                pub const m_pCollision: usize = 0x3D8; // CCollisionProperty*
                pub const m_hEffectEntity: usize = 0x3E0; // CHandle<CBaseEntity>
                pub const m_hOwnerEntity: usize = 0x3E4; // CHandle<CBaseEntity>
                pub const m_fEffects: usize = 0x3E8; // uint32
                pub const m_hGroundEntity: usize = 0x3EC; // CHandle<CBaseEntity>
                pub const m_nGroundBodyIndex: usize = 0x3F0; // int32
                pub const m_flFriction: usize = 0x3F4; // float32
                pub const m_flElasticity: usize = 0x3F8; // float32
                pub const m_flGravityScale: usize = 0x3FC; // float32
                pub const m_flTimeScale: usize = 0x400; // float32
                pub const m_flWaterLevel: usize = 0x404; // float32
                pub const m_bGravityDisabled: usize = 0x408; // bool
                pub const m_bAnimatedEveryTick: usize = 0x409; // bool
                pub const m_flActualGravityScale: usize = 0x40C; // float32
                pub const m_bGravityActuallyDisabled: usize = 0x410; // bool
                pub const m_bDisableLowViolence: usize = 0x411; // bool
                pub const m_nWaterType: usize = 0x412; // uint8
                pub const m_iEFlags: usize = 0x414; // int32
                pub const m_OnUser1: usize = 0x418; // CEntityIOOutput
                pub const m_OnUser2: usize = 0x430; // CEntityIOOutput
                pub const m_OnUser3: usize = 0x448; // CEntityIOOutput
                pub const m_OnUser4: usize = 0x460; // CEntityIOOutput
                pub const m_iInitialTeamNum: usize = 0x478; // int32
                pub const m_flNavIgnoreUntilTime: usize = 0x47C; // GameTime_t
                pub const m_vecAngVelocity: usize = 0x480; // QAngle
                pub const m_bNetworkQuantizeOriginAndAngles: usize = 0x48C; // bool
                pub const m_bLagCompensate: usize = 0x48D; // bool
                pub const m_pBlocker: usize = 0x490; // CHandle<CBaseEntity>
                pub const m_flLocalTime: usize = 0x494; // float32
                pub const m_flVPhysicsUpdateLocalTime: usize = 0x498; // float32
                pub const m_nBloodType: usize = 0x49C; // BloodType
                pub const m_pPulseGraphInstance: usize = 0x4A0; // CPulseGraphInstance_ServerEntity*
            }
            // Parent: CPlayerPawnComponent
            // Field count: 0
            pub mod CPlayer_UseServices {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CGameSceneNodeHandle {
                pub const m_hOwner: usize = 0x8; // CEntityHandle
                pub const m_name: usize = 0xC; // CUtlStringToken
            }
            // Parent: CMarkupVolumeTagged
            // Field count: 4
            pub mod CMarkupVolumeWithRef {
                pub const m_bUseRef: usize = 0x7B8; // bool
                pub const m_vRefPosEntitySpace: usize = 0x7BC; // Vector
                pub const m_vRefPosWorldSpace: usize = 0x7C8; // VectorWS
                pub const m_flRefDot: usize = 0x7D4; // float32
            }
            // Parent: None
            // Field count: 0
            pub mod CGameMoney_API {
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
            // Parent: None
            // Field count: 2
            pub mod CFuncPlatRot {
                pub const m_end: usize = 0x828; // QAngle
                pub const m_start: usize = 0x834; // QAngle
            }
            // Parent: CPointEntity
            // Field count: 4
            pub mod CRagdollMagnet {
                pub const m_bDisabled: usize = 0x4A8; // bool
                pub const m_radius: usize = 0x4AC; // float32
                pub const m_force: usize = 0x4B0; // float32
                pub const m_axis: usize = 0x4B4; // VectorWS
            }
            // Parent: None
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
            // Parent: None
            // Field count: 4
            pub mod CSpotlightEnd {
                pub const m_flLightScale: usize = 0x770; // float32
                pub const m_Radius: usize = 0x774; // float32
                pub const m_vSpotlightDir: usize = 0x778; // Vector
                pub const m_vSpotlightOrg: usize = 0x784; // VectorWS
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyDescription
            pub mod CPulseStringlib {
            }
            // Parent: CBaseModelEntity
            // Field count: 12
            pub mod CEnvSky {
                pub const m_hSkyMaterial: usize = 0x770; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_hSkyMaterialLightingOnly: usize = 0x778; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_bStartDisabled: usize = 0x780; // bool
                pub const m_vTintColor: usize = 0x781; // Color
                pub const m_vTintColorLightingOnly: usize = 0x785; // Color
                pub const m_flBrightnessScale: usize = 0x78C; // float32
                pub const m_nFogType: usize = 0x790; // int32
                pub const m_flFogMinStart: usize = 0x794; // float32
                pub const m_flFogMinEnd: usize = 0x798; // float32
                pub const m_flFogMaxStart: usize = 0x79C; // float32
                pub const m_flFogMaxEnd: usize = 0x7A0; // float32
                pub const m_bEnabled: usize = 0x7A4; // bool
            }
            // Parent: CPointEntity
            // Field count: 0
            pub mod CInfoSpawnGroupLandmark {
            }
            // Parent: CPointEntity
            // Field count: 12
            pub mod CPointAngleSensor {
                pub const m_bDisabled: usize = 0x4A8; // bool
                pub const m_nLookAtName: usize = 0x4B0; // CUtlSymbolLarge
                pub const m_hTargetEntity: usize = 0x4B8; // CHandle<CBaseEntity>
                pub const m_hLookAtEntity: usize = 0x4BC; // CHandle<CBaseEntity>
                pub const m_flDuration: usize = 0x4C0; // float32
                pub const m_flDotTolerance: usize = 0x4C4; // float32
                pub const m_flFacingTime: usize = 0x4C8; // GameTime_t
                pub const m_bFired: usize = 0x4CC; // bool
                pub const m_OnFacingLookat: usize = 0x4D0; // CEntityIOOutput
                pub const m_OnNotFacingLookat: usize = 0x4E8; // CEntityIOOutput
                pub const m_TargetDir: usize = 0x500; // CEntityOutputTemplate<Vector>
                pub const m_FacingPercentage: usize = 0x528; // CEntityOutputTemplate<float32>
            }
            // Parent: CBaseEntity
            // Field count: 11
            pub mod CEnvWindController {
                pub const m_EnvWindShared: usize = 0x4A8; // CEnvWindShared
                pub const m_fDirectionVariation: usize = 0x5D8; // float32
                pub const m_fSpeedVariation: usize = 0x5DC; // float32
                pub const m_fTurbulence: usize = 0x5E0; // float32
                pub const m_fVolumeHalfExtentXY: usize = 0x5E4; // float32
                pub const m_fVolumeHalfExtentZ: usize = 0x5E8; // float32
                pub const m_nVolumeResolutionXY: usize = 0x5EC; // int32
                pub const m_nVolumeResolutionZ: usize = 0x5F0; // int32
                pub const m_nClipmapLevels: usize = 0x5F4; // int32
                pub const m_bIsMaster: usize = 0x5F8; // bool
                pub const m_bFirstTime: usize = 0x5F9; // bool
            }
            // Parent: None
            // Field count: 13
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
            // Field count: 49
            pub mod CGenericConstraint {
                pub const m_bPlaceAnchorsAtConstraintTransform: usize = 0x510; // bool
                pub const m_nLinearMotionX: usize = 0x514; // JointMotion_t
                pub const m_nLinearMotionY: usize = 0x518; // JointMotion_t
                pub const m_nLinearMotionZ: usize = 0x51C; // JointMotion_t
                pub const m_flLinearFrequencyX: usize = 0x520; // float32
                pub const m_flLinearFrequencyY: usize = 0x524; // float32
                pub const m_flLinearFrequencyZ: usize = 0x528; // float32
                pub const m_flLinearDampingRatioX: usize = 0x52C; // float32
                pub const m_flLinearDampingRatioY: usize = 0x530; // float32
                pub const m_flLinearDampingRatioZ: usize = 0x534; // float32
                pub const m_flMaxLinearImpulseX: usize = 0x538; // float32
                pub const m_flMaxLinearImpulseY: usize = 0x53C; // float32
                pub const m_flMaxLinearImpulseZ: usize = 0x540; // float32
                pub const m_flBreakAfterTimeX: usize = 0x544; // float32
                pub const m_flBreakAfterTimeY: usize = 0x548; // float32
                pub const m_flBreakAfterTimeZ: usize = 0x54C; // float32
                pub const m_flBreakAfterTimeStartTimeX: usize = 0x550; // GameTime_t
                pub const m_flBreakAfterTimeStartTimeY: usize = 0x554; // GameTime_t
                pub const m_flBreakAfterTimeStartTimeZ: usize = 0x558; // GameTime_t
                pub const m_flBreakAfterTimeThresholdX: usize = 0x55C; // float32
                pub const m_flBreakAfterTimeThresholdY: usize = 0x560; // float32
                pub const m_flBreakAfterTimeThresholdZ: usize = 0x564; // float32
                pub const m_flNotifyForceX: usize = 0x568; // float32
                pub const m_flNotifyForceY: usize = 0x56C; // float32
                pub const m_flNotifyForceZ: usize = 0x570; // float32
                pub const m_flNotifyForceMinTimeX: usize = 0x574; // float32
                pub const m_flNotifyForceMinTimeY: usize = 0x578; // float32
                pub const m_flNotifyForceMinTimeZ: usize = 0x57C; // float32
                pub const m_flNotifyForceLastTimeX: usize = 0x580; // GameTime_t
                pub const m_flNotifyForceLastTimeY: usize = 0x584; // GameTime_t
                pub const m_flNotifyForceLastTimeZ: usize = 0x588; // GameTime_t
                pub const m_bAxisNotifiedX: usize = 0x58C; // bool
                pub const m_bAxisNotifiedY: usize = 0x58D; // bool
                pub const m_bAxisNotifiedZ: usize = 0x58E; // bool
                pub const m_nAngularMotionX: usize = 0x590; // JointMotion_t
                pub const m_nAngularMotionY: usize = 0x594; // JointMotion_t
                pub const m_nAngularMotionZ: usize = 0x598; // JointMotion_t
                pub const m_flAngularFrequencyX: usize = 0x59C; // float32
                pub const m_flAngularFrequencyY: usize = 0x5A0; // float32
                pub const m_flAngularFrequencyZ: usize = 0x5A4; // float32
                pub const m_flAngularDampingRatioX: usize = 0x5A8; // float32
                pub const m_flAngularDampingRatioY: usize = 0x5AC; // float32
                pub const m_flAngularDampingRatioZ: usize = 0x5B0; // float32
                pub const m_flMaxAngularImpulseX: usize = 0x5B4; // float32
                pub const m_flMaxAngularImpulseY: usize = 0x5B8; // float32
                pub const m_flMaxAngularImpulseZ: usize = 0x5BC; // float32
                pub const m_NotifyForceReachedX: usize = 0x5C0; // CEntityIOOutput
                pub const m_NotifyForceReachedY: usize = 0x5D8; // CEntityIOOutput
                pub const m_NotifyForceReachedZ: usize = 0x5F0; // CEntityIOOutput
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
                pub const m_iszLaserTarget: usize = 0x810; // CUtlSymbolLarge
                pub const m_pSprite: usize = 0x818; // CHandle<CSprite>
                pub const m_iszSpriteName: usize = 0x820; // CUtlSymbolLarge
                pub const m_firePosition: usize = 0x828; // Vector
                pub const m_flStartFrame: usize = 0x834; // float32
            }
            // Parent: CBaseEntity
            // Field count: 8
            pub mod CSoundOpvarSetEntity {
                pub const m_iszStackName: usize = 0x4C0; // CUtlSymbolLarge
                pub const m_iszOperatorName: usize = 0x4C8; // CUtlSymbolLarge
                pub const m_iszOpvarName: usize = 0x4D0; // CUtlSymbolLarge
                pub const m_nOpvarType: usize = 0x4D8; // int32
                pub const m_nOpvarIndex: usize = 0x4DC; // int32
                pub const m_flOpvarValue: usize = 0x4E0; // float32
                pub const m_OpvarValueString: usize = 0x4E8; // CUtlSymbolLarge
                pub const m_bSetOnSpawn: usize = 0x4F0; // bool
            }
            // Parent: CBaseEntity
            // Field count: 2
            pub mod CEnvBeverage {
                pub const m_CanInDispenser: usize = 0x4A8; // bool
                pub const m_nBeverageType: usize = 0x4AC; // int32
            }
            // Parent: CBaseEntity
            // Field count: 15
            pub mod CPhysMotor {
                pub const m_nameAttach: usize = 0x4A8; // CUtlSymbolLarge
                pub const m_nameAnchor: usize = 0x4B0; // CUtlSymbolLarge
                pub const m_hAttachedObject: usize = 0x4B8; // CHandle<CBaseEntity>
                pub const m_hAnchorObject: usize = 0x4BC; // CHandle<CBaseEntity>
                pub const m_spinUp: usize = 0x4C0; // float32
                pub const m_spinDown: usize = 0x4C4; // float32
                pub const m_flMotorFriction: usize = 0x4C8; // float32
                pub const m_additionalAcceleration: usize = 0x4CC; // float32
                pub const m_angularAcceleration: usize = 0x4D0; // float32
                pub const m_flTorqueScale: usize = 0x4D4; // float32
                pub const m_flTargetSpeed: usize = 0x4D8; // float32
                pub const m_flSpeedWhenSpinUpOrSpinDownStarted: usize = 0x4DC; // float32
                pub const m_pFixedWorldBody: usize = 0x4E0; // IPhysicsBody*
                pub const m_pMotorJoint: usize = 0x4E8; // IPhysicsJoint*
                pub const m_motor: usize = 0x4F0; // CMotorController
            }
            // Parent: CBaseEntity
            // Field count: 1
            pub mod CLogicGameEvent {
                pub const m_iszEventName: usize = 0x4A8; // CUtlSymbolLarge
            }
            // Parent: None
            // Field count: 0
            pub mod CBaseAnimGraphAPI {
            }
            // Parent: CPhysicsProp
            // Field count: 0
            pub mod CPhysicsPropMultiplayer {
            }
            // Parent: CPointEntity
            // Field count: 11
            pub mod CPhysExplosion {
                pub const m_bExplodeOnSpawn: usize = 0x4A8; // bool
                pub const m_flMagnitude: usize = 0x4AC; // float32
                pub const m_flDamage: usize = 0x4B0; // float32
                pub const m_radius: usize = 0x4B4; // float32
                pub const m_targetEntityName: usize = 0x4B8; // CUtlSymbolLarge
                pub const m_flInnerRadius: usize = 0x4C0; // float32
                pub const m_flPushScale: usize = 0x4C4; // float32
                pub const m_bConvertToDebrisWhenPossible: usize = 0x4C8; // bool
                pub const m_bAffectInvulnerableEnts: usize = 0x4C9; // bool
                pub const m_bDisablePushClamp: usize = 0x4CA; // bool
                pub const m_OnPushedPlayer: usize = 0x4D0; // CEntityIOOutput
            }
            // Parent: CPhysConstraint
            // Field count: 15
            pub mod CSplineConstraint {
                pub const m_vAnchorOffsetRestore: usize = 0x558; // Vector
                pub const m_hSplineEntity: usize = 0x564; // CHandle<CBaseEntity>
                pub const m_pSplineBody: usize = 0x568; // IPhysicsBody*
                pub const m_bEnableLateralConstraint: usize = 0x570; // bool
                pub const m_bEnableVerticalConstraint: usize = 0x571; // bool
                pub const m_bEnableAngularConstraint: usize = 0x572; // bool
                pub const m_bEnableLimit: usize = 0x573; // bool
                pub const m_bFireEventsOnPath: usize = 0x574; // bool
                pub const m_flLinearFrequency: usize = 0x578; // float32
                pub const m_flLinarDampingRatio: usize = 0x57C; // float32
                pub const m_flJointFriction: usize = 0x580; // float32
                pub const m_flTransitionTime: usize = 0x584; // float32
                pub const m_vPreSolveAnchorPos: usize = 0x598; // VectorWS
                pub const m_StartTransitionTime: usize = 0x5A4; // GameTime_t
                pub const m_vTangentSpaceAnchorAtTransitionStart: usize = 0x5A8; // Vector
            }
            // Parent: CBaseEntity
            // Field count: 6
            pub mod CLogicCompare {
                pub const m_flInValue: usize = 0x4A8; // float32
                pub const m_flCompareValue: usize = 0x4AC; // float32
                pub const m_OnLessThan: usize = 0x4B0; // CEntityOutputTemplate<float32>
                pub const m_OnEqualTo: usize = 0x4D0; // CEntityOutputTemplate<float32>
                pub const m_OnNotEqualTo: usize = 0x4F0; // CEntityOutputTemplate<float32>
                pub const m_OnGreaterThan: usize = 0x510; // CEntityOutputTemplate<float32>
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
                pub const m_OnDeath: usize = 0x898; // CEntityIOOutput
            }
            // Parent: CBaseClientUIEntity
            // Field count: 25
            pub mod CPointClientUIWorldPanel {
                pub const m_bIgnoreInput: usize = 0x8D0; // bool
                pub const m_bLit: usize = 0x8D1; // bool
                pub const m_bFollowPlayerAcrossTeleport: usize = 0x8D2; // bool
                pub const m_flWidth: usize = 0x8D4; // float32
                pub const m_flHeight: usize = 0x8D8; // float32
                pub const m_flDPI: usize = 0x8DC; // float32
                pub const m_flInteractDistance: usize = 0x8E0; // float32
                pub const m_flDepthOffset: usize = 0x8E4; // float32
                pub const m_unOwnerContext: usize = 0x8E8; // uint32
                pub const m_unHorizontalAlign: usize = 0x8EC; // uint32
                pub const m_unVerticalAlign: usize = 0x8F0; // uint32
                pub const m_unOrientation: usize = 0x8F4; // uint32
                pub const m_bAllowInteractionFromAllSceneWorlds: usize = 0x8F8; // bool
                pub const m_vecCSSClasses: usize = 0x900; // CNetworkUtlVectorBase<CUtlSymbolLarge>
                pub const m_bOpaque: usize = 0x918; // bool
                pub const m_bNoDepth: usize = 0x919; // bool
                pub const m_bVisibleWhenParentNoDraw: usize = 0x91A; // bool
                pub const m_bRenderBackface: usize = 0x91B; // bool
                pub const m_bUseOffScreenIndicator: usize = 0x91C; // bool
                pub const m_bExcludeFromSaveGames: usize = 0x91D; // bool
                pub const m_bGrabbable: usize = 0x91E; // bool
                pub const m_bOnlyRenderToTexture: usize = 0x91F; // bool
                pub const m_bDisableMipGen: usize = 0x920; // bool
                pub const m_nExplicitImageLayout: usize = 0x924; // int32
                pub const m_bIgnoreParentOrientation: usize = 0x928; // bool
            }
            // Parent: CSoundEventEntity
            // Field count: 1
            pub mod CSoundEventSphereEntity {
                pub const m_flRadius: usize = 0x568; // float32
            }
            // Parent: CPlayerControllerComponent
            // Field count: 6
            pub mod CCSPlayerController_InGameMoneyServices {
                pub const m_bReceivesMoneyNextRound: usize = 0x40; // bool
                pub const m_iMoneyEarnedForNextRound: usize = 0x44; // int32
                pub const m_iAccount: usize = 0x48; // int32
                pub const m_iStartAccount: usize = 0x4C; // int32
                pub const m_iTotalCashSpent: usize = 0x50; // int32
                pub const m_iCashSpentThisRound: usize = 0x54; // int32
            }
            // Parent: CPlayerPawnComponent
            // Field count: 6
            pub mod CCSPlayer_AimPunchServices {
                pub const m_predictableBaseTick: usize = 0x48; // GameTick_t
                pub const m_predictableBaseTickInterpAmount: usize = 0x4C; // float32
                pub const m_predictableBaseAngle: usize = 0x50; // QAngle
                pub const m_predictableBaseAngleVel: usize = 0x5C; // QAngle
                pub const m_unpredictableBaseTick: usize = 0xA0; // GameTick_t
                pub const m_unpredictableBaseAngle: usize = 0xA4; // QAngle
            }
            // Parent: CRuleEntity
            // Field count: 0
            pub mod CRuleBrushEntity {
            }
            // Parent: CBaseEntity
            // Field count: 24
            pub mod CMapVetoPickController {
                pub const m_bPlayedIntroVcd: usize = 0x4A8; // bool
                pub const m_bNeedToPlayFiveSecondsRemaining: usize = 0x4A9; // bool
                pub const m_dblPreMatchDraftSequenceTime: usize = 0x4C8; // float64
                pub const m_bPreMatchDraftStateChanged: usize = 0x4D0; // bool
                pub const m_nDraftType: usize = 0x4D4; // int32
                pub const m_nTeamWinningCoinToss: usize = 0x4D8; // int32
                pub const m_nTeamWithFirstChoice: usize = 0x4DC; // int32[64]
                pub const m_nVoteMapIdsList: usize = 0x5DC; // int32[7]
                pub const m_nAccountIDs: usize = 0x5F8; // int32[64]
                pub const m_nMapId0: usize = 0x6F8; // int32[64]
                pub const m_nMapId1: usize = 0x7F8; // int32[64]
                pub const m_nMapId2: usize = 0x8F8; // int32[64]
                pub const m_nMapId3: usize = 0x9F8; // int32[64]
                pub const m_nMapId4: usize = 0xAF8; // int32[64]
                pub const m_nMapId5: usize = 0xBF8; // int32[64]
                pub const m_nStartingSide0: usize = 0xCF8; // int32[64]
                pub const m_nCurrentPhase: usize = 0xDF8; // int32
                pub const m_nPhaseStartTick: usize = 0xDFC; // int32
                pub const m_nPhaseDurationTicks: usize = 0xE00; // int32
                pub const m_OnMapVetoed: usize = 0xE08; // CEntityOutputTemplate<CUtlSymbolLarge>
                pub const m_OnMapPicked: usize = 0xE28; // CEntityOutputTemplate<CUtlSymbolLarge>
                pub const m_OnSidesPicked: usize = 0xE48; // CEntityOutputTemplate<int32>
                pub const m_OnNewPhaseStarted: usize = 0xE68; // CEntityOutputTemplate<int32>
                pub const m_OnLevelTransition: usize = 0xE88; // CEntityOutputTemplate<int32>
            }
            // Parent: CBaseEntity
            // Field count: 0
            pub mod CFuncPropRespawnZone {
            }
            // Parent: CBaseFilter
            // Field count: 1
            pub mod CFilterModel {
                pub const m_iFilterModel: usize = 0x4E0; // CUtlSymbolLarge
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            pub mod CWeaponP90 {
            }
            // Parent: None
            // Field count: 0
            pub mod CNavSpaceInfo {
            }
            // Parent: CPhysConstraint
            // Field count: 10
            pub mod CPhysSlideConstraint {
                pub const m_axisEnd: usize = 0x510; // VectorWS
                pub const m_slideFriction: usize = 0x51C; // float32
                pub const m_systemLoadScale: usize = 0x520; // float32
                pub const m_initialOffset: usize = 0x524; // float32
                pub const m_bEnableLinearConstraint: usize = 0x528; // bool
                pub const m_bEnableAngularConstraint: usize = 0x529; // bool
                pub const m_flMotorFrequency: usize = 0x52C; // float32
                pub const m_flMotorDampingRatio: usize = 0x530; // float32
                pub const m_bUseEntityPivot: usize = 0x534; // bool
                pub const m_soundInfo: usize = 0x538; // ConstraintSoundInfo
            }
            // Parent: CBaseEntity
            // Field count: 2
            pub mod CPulseGameBlackboard {
                pub const m_strGraphName: usize = 0x4B0; // CUtlString
                pub const m_strStateBlob: usize = 0x4B8; // CUtlString
            }
            // Parent: CSoundEventEntity
            // Field count: 0
            pub mod CSoundEventEntityAlias_snd_event_point {
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CChoreoComponent {
                pub const __m_pChainEntity: usize = 0x8; // CNetworkVarChainer
                pub const m_hOwner: usize = 0x30; // CHandle<CBaseModelEntity>
                pub const m_nExernalChoreoGraphCount: usize = 0x34; // int32
                pub const m_sActiveExternalChoreoGraphSlotID: usize = 0x38; // CGlobalSymbol
                pub const m_nNextSceneEventId: usize = 0x70; // SceneEventId_t
                pub const m_flAllowResponsesEndTime: usize = 0x74; // GameTime_t
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
                pub const m_strStatisticName: usize = 0x4A8; // CUtlSymbolLarge
                pub const m_bDisabled: usize = 0x4B0; // bool
            }
            // Parent: CBaseModelEntity
            // Field count: 8
            pub mod CTextureBasedAnimatable {
                pub const m_bLoop: usize = 0x770; // bool
                pub const m_flFPS: usize = 0x774; // float32
                pub const m_hPositionKeys: usize = 0x778; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_hRotationKeys: usize = 0x780; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_vAnimationBoundsMin: usize = 0x788; // Vector
                pub const m_vAnimationBoundsMax: usize = 0x794; // Vector
                pub const m_flStartTime: usize = 0x7A0; // float32
                pub const m_flStartFrame: usize = 0x7A4; // float32
            }
            // Parent: CBaseModelEntity
            // Field count: 24
            pub mod CSprite {
                pub const m_hSpriteMaterial: usize = 0x770; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_hAttachedToEntity: usize = 0x778; // CHandle<CBaseEntity>
                pub const m_nAttachment: usize = 0x77C; // AttachmentHandle_t
                pub const m_flSpriteFramerate: usize = 0x780; // float32
                pub const m_flFrame: usize = 0x784; // float32
                pub const m_flDieTime: usize = 0x788; // GameTime_t
                pub const m_nBrightness: usize = 0x798; // uint32
                pub const m_flBrightnessDuration: usize = 0x79C; // float32
                pub const m_flSpriteScale: usize = 0x7A0; // float32
                pub const m_flScaleDuration: usize = 0x7A4; // float32
                pub const m_bWorldSpaceScale: usize = 0x7A8; // bool
                pub const m_flGlowProxySize: usize = 0x7AC; // float32
                pub const m_flHDRColorScale: usize = 0x7B0; // float32
                pub const m_flLastTime: usize = 0x7B4; // GameTime_t
                pub const m_flMaxFrame: usize = 0x7B8; // float32
                pub const m_flStartScale: usize = 0x7BC; // float32
                pub const m_flDestScale: usize = 0x7C0; // float32
                pub const m_flScaleTimeStart: usize = 0x7C4; // GameTime_t
                pub const m_nStartBrightness: usize = 0x7C8; // int32
                pub const m_nDestBrightness: usize = 0x7CC; // int32
                pub const m_flBrightnessTimeStart: usize = 0x7D0; // GameTime_t
                pub const m_nSpriteWidth: usize = 0x7D4; // int32
                pub const m_nSpriteHeight: usize = 0x7D8; // int32
                pub const m_flSpeed: usize = 0x7DC; // float32
            }
            // Parent: CPathKeyFrame
            // Field count: 11
            pub mod CBaseMoveBehavior {
                pub const m_iPositionInterpolator: usize = 0x4F0; // int32
                pub const m_iRotationInterpolator: usize = 0x4F4; // int32
                pub const m_flAnimStartTime: usize = 0x4F8; // float32
                pub const m_flAnimEndTime: usize = 0x4FC; // float32
                pub const m_flAverageSpeedAcrossFrame: usize = 0x500; // float32
                pub const m_pCurrentKeyFrame: usize = 0x504; // CHandle<CPathKeyFrame>
                pub const m_pTargetKeyFrame: usize = 0x508; // CHandle<CPathKeyFrame>
                pub const m_pPreKeyFrame: usize = 0x50C; // CHandle<CPathKeyFrame>
                pub const m_pPostKeyFrame: usize = 0x510; // CHandle<CPathKeyFrame>
                pub const m_flTimeIntoFrame: usize = 0x514; // float32
                pub const m_iDirection: usize = 0x518; // int32
            }
            // Parent: CBaseModelEntity
            // Field count: 9
            pub mod CDynamicLight {
                pub const m_ActualFlags: usize = 0x770; // uint8
                pub const m_Flags: usize = 0x771; // uint8
                pub const m_LightStyle: usize = 0x772; // uint8
                pub const m_On: usize = 0x773; // bool
                pub const m_Radius: usize = 0x774; // float32
                pub const m_Exponent: usize = 0x778; // int32
                pub const m_InnerAngle: usize = 0x77C; // float32
                pub const m_OuterAngle: usize = 0x780; // float32
                pub const m_SpotRadius: usize = 0x784; // float32
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 2
            pub mod CWeaponTaser {
                pub const m_fFireTime: usize = 0x1070; // GameTime_t
                pub const m_nLastAttackTick: usize = 0x1074; // int32
            }
            // Parent: CEnvCubemap
            // Field count: 0
            pub mod CEnvCubemapBox {
            }
            // Parent: CBaseDoor
            // Field count: 1
            pub mod CRotDoor {
                pub const m_bSolidBsp: usize = 0x978; // bool
            }
            // Parent: CPathSimple
            // Field count: 6
            pub mod CPathMover {
                pub const m_vecMovers: usize = 0x5F0; // CUtlVector<CHandle<CFuncMover>>
                pub const m_vecSpawners: usize = 0x608; // CUtlVector<CHandle<CPathMoverEntitySpawner>>
                pub const m_iszMoverSpawnerName: usize = 0x620; // CUtlSymbolLarge
                pub const m_hMoverRouter: usize = 0x628; // CHandle<CFuncMoverRouter>
                pub const m_iszMoverRouterName: usize = 0x630; // CUtlSymbolLarge
                pub const m_flSampleSpacing: usize = 0x638; // float32
            }
            // Parent: CBaseModelEntity
            // Field count: 1
            pub mod CFuncVPhysicsClip {
                pub const m_bDisabled: usize = 0x770; // bool
            }
            // Parent: CPhysConstraint
            // Field count: 8
            pub mod CPhysFixed {
                pub const m_flLinearFrequency: usize = 0x508; // float32
                pub const m_flLinearDampingRatio: usize = 0x50C; // float32
                pub const m_flAngularFrequency: usize = 0x510; // float32
                pub const m_flAngularDampingRatio: usize = 0x514; // float32
                pub const m_bEnableLinearConstraint: usize = 0x518; // bool
                pub const m_bEnableAngularConstraint: usize = 0x519; // bool
                pub const m_sBoneName1: usize = 0x520; // CUtlSymbolLarge
                pub const m_sBoneName2: usize = 0x528; // CUtlSymbolLarge
            }
            // Parent: CBaseEntity
            // Field count: 2
            pub mod CLogicNavigation {
                pub const m_isOn: usize = 0x4B0; // bool
                pub const m_navProperty: usize = 0x4B4; // navproperties_t
            }
            // Parent: CBaseEntity
            // Field count: 3
            pub mod CPathSimple {
                pub const m_CPathQueryComponent: usize = 0x4B0; // CPathQueryComponent
                pub const m_pathString: usize = 0x5A0; // CUtlString
                pub const m_bClosedLoop: usize = 0x5A8; // bool
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
            pub mod CEnvWindVolume {
                pub const m_bActive: usize = 0x4A8; // bool
                pub const m_vBoxMins: usize = 0x4AC; // Vector
                pub const m_vBoxMaxs: usize = 0x4B8; // Vector
                pub const m_bStartDisabled: usize = 0x4C4; // bool
                pub const m_nShape: usize = 0x4C8; // int32
                pub const m_fWindSpeedMultiplier: usize = 0x4CC; // float32
                pub const m_fWindTurbulenceMultiplier: usize = 0x4D0; // float32
                pub const m_fWindSpeedVariationMultiplier: usize = 0x4D4; // float32
                pub const m_fWindDirectionVariationMultiplier: usize = 0x4D8; // float32
            }
            // Parent: CFuncBrush
            // Field count: 4
            pub mod CFuncElectrifiedVolume {
                pub const m_EffectName: usize = 0x790; // CUtlSymbolLarge
                pub const m_EffectInterpenetrateName: usize = 0x798; // CUtlSymbolLarge
                pub const m_EffectZapName: usize = 0x7A0; // CUtlSymbolLarge
                pub const m_iszEffectSource: usize = 0x7A8; // CUtlSymbolLarge
            }
            // Parent: CBaseEntity
            // Field count: 0
            pub mod CCSMinimapBoundary {
            }
            // Parent: None
            // Field count: 2
            pub mod EntitySpottedState_t {
                pub const m_bSpotted: usize = 0x8; // bool
                pub const m_bSpottedByMask: usize = 0xC; // uint32[2]
            }
            // Parent: None
            // Field count: 25
            //
            // Metadata:
            // MGetKV3ClassDefaults
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
            pub mod CSoundEventOBBEntity {
                pub const m_vMins: usize = 0x568; // Vector
                pub const m_vMaxs: usize = 0x574; // Vector
            }
            // Parent: None
            // Field count: 0
            pub mod CBaseEntity_SharedAPI {
            }
            // Parent: CBaseCSGrenadeProjectile
            // Field count: 3
            pub mod CFlashbangProjectile {
                pub const m_flTimeToDetonate: usize = 0xA60; // float32
                pub const m_numOpponentsHit: usize = 0xA64; // uint8
                pub const m_numTeammatesHit: usize = 0xA65; // uint8
            }
            // Parent: CBaseTrigger
            // Field count: 1
            pub mod CTriggerMultiple {
                pub const m_OnTrigger: usize = 0x8E8; // CEntityIOOutput
            }
            // Parent: CPhysConstraint
            // Field count: 6
            pub mod CPhysBallSocket {
                pub const m_flJointFriction: usize = 0x508; // float32
                pub const m_bEnableSwingLimit: usize = 0x50C; // bool
                pub const m_flSwingLimit: usize = 0x510; // float32
                pub const m_bEnableTwistLimit: usize = 0x514; // bool
                pub const m_flMinTwistAngle: usize = 0x518; // float32
                pub const m_flMaxTwistAngle: usize = 0x51C; // float32
            }
            // Parent: None
            // Field count: 1
            pub mod CDebugHistory {
                pub const m_nNpcEvents: usize = 0x3E84E8; // int32
            }
            // Parent: CBaseEntity
            // Field count: 11
            pub mod CSoundOpvarSetPointBase {
                pub const m_bDisabled: usize = 0x4A8; // bool
                pub const m_hSource: usize = 0x4AC; // CEntityHandle
                pub const m_iszSourceEntityName: usize = 0x4C8; // CUtlSymbolLarge
                pub const m_vLastPosition: usize = 0x520; // VectorWS
                pub const m_flRefreshTime: usize = 0x52C; // float32
                pub const m_iszStackName: usize = 0x530; // CUtlSymbolLarge
                pub const m_iszOperatorName: usize = 0x538; // CUtlSymbolLarge
                pub const m_iszOpvarName: usize = 0x540; // CUtlSymbolLarge
                pub const m_iOpvarIndex: usize = 0x548; // int32
                pub const m_bUseAutoCompare: usize = 0x54C; // bool
                pub const m_bFastRefresh: usize = 0x54D; // bool
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MVDataOverlayType
            // MVDataAssociatedFile
            pub mod CExplosionTypeData {
                pub const m_SoundName: usize = 0x0; // CSoundEventName
                pub const m_ParticleEffect: usize = 0x10; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                pub const m_bIsIncindiary: usize = 0xF0; // bool
                pub const m_bHasForces: usize = 0xF1; // bool
                pub const m_DecalType: usize = 0xF8; // CGlobalSymbol
            }
            // Parent: CBaseEntity
            // Field count: 8
            pub mod CPathKeyFrame {
                pub const m_Origin: usize = 0x4A8; // Vector
                pub const m_Angles: usize = 0x4B4; // QAngle
                pub const m_qAngle: usize = 0x4C0; // Quaternion
                pub const m_iNextKey: usize = 0x4D0; // CUtlSymbolLarge
                pub const m_flNextTime: usize = 0x4D8; // float32
                pub const m_pNextKey: usize = 0x4DC; // CHandle<CPathKeyFrame>
                pub const m_pPrevKey: usize = 0x4E0; // CHandle<CPathKeyFrame>
                pub const m_flMoveSpeed: usize = 0x4E4; // float32
            }
            // Parent: None
            // Field count: 0
            pub mod CCSPlayerController_API {
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 1
            pub mod CWeaponCZ75a {
                pub const m_bMagazineRemoved: usize = 0x1070; // bool
            }
            // Parent: CTriggerPush
            // Field count: 1
            pub mod CScriptTriggerPush {
                pub const m_vExtent: usize = 0x920; // Vector
            }
            // Parent: CBaseModelEntity
            // Field count: 3
            pub mod CRevertSaved {
                pub const m_loadTime: usize = 0x770; // float32
                pub const m_Duration: usize = 0x774; // float32
                pub const m_HoldTime: usize = 0x778; // float32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyDescription
            pub mod CPulseEnumlib {
            }
            // Parent: CBaseTrigger
            // Field count: 0
            pub mod CTriggerBombReset {
            }
            // Parent: CBaseTrigger
            // Field count: 14
            pub mod CTriggerHurt {
                pub const m_flOriginalDamage: usize = 0x8E8; // float32
                pub const m_flDamage: usize = 0x8EC; // float32
                pub const m_flDamageCap: usize = 0x8F0; // float32
                pub const m_flLastDmgTime: usize = 0x8F4; // GameTime_t
                pub const m_flForgivenessDelay: usize = 0x8F8; // float32
                pub const m_bitsDamageInflict: usize = 0x8FC; // DamageTypes_t
                pub const m_damageModel: usize = 0x900; // int32
                pub const m_bNoDmgForce: usize = 0x904; // bool
                pub const m_vDamageForce: usize = 0x908; // Vector
                pub const m_thinkAlways: usize = 0x914; // bool
                pub const m_hurtThinkPeriod: usize = 0x918; // float32
                pub const m_OnHurt: usize = 0x920; // CEntityIOOutput
                pub const m_OnHurtPlayer: usize = 0x938; // CEntityIOOutput
                pub const m_hurtEntities: usize = 0x950; // CUtlVector<CHandle<CBaseEntity>>
            }
            // Parent: CPlayer_WeaponServices
            // Field count: 13
            pub mod CCSPlayer_WeaponServices {
                pub const m_flNextAttack: usize = 0xC0; // GameTime_t
                pub const m_hSavedWeapon: usize = 0xC4; // CHandle<CBasePlayerWeapon>
                pub const m_nTimeToMelee: usize = 0xC8; // int32
                pub const m_nTimeToSecondary: usize = 0xCC; // int32
                pub const m_nTimeToPrimary: usize = 0xD0; // int32
                pub const m_nTimeToSniperRifle: usize = 0xD4; // int32
                pub const m_bIsBeingGivenItem: usize = 0xD8; // bool
                pub const m_bIsPickingUpItemWithUse: usize = 0xD9; // bool
                pub const m_bPickedUpWeapon: usize = 0xDA; // bool
                pub const m_bDisableAutoDeploy: usize = 0xDB; // bool
                pub const m_bIsPickingUpGroundWeapon: usize = 0xDC; // bool
                pub const m_networkAnimTiming: usize = 0x1860; // CNetworkUtlVectorBase<uint8>
                pub const m_bBlockInspectUntilNextGraphUpdate: usize = 0x1878; // bool
            }
            // Parent: None
            // Field count: 6
            pub mod CRetakeGameRules {
                pub const m_nMatchSeed: usize = 0x138; // int32
                pub const m_bBlockersPresent: usize = 0x13C; // bool
                pub const m_bRoundInProgress: usize = 0x13D; // bool
                pub const m_iFirstSecondHalfRound: usize = 0x140; // int32
                pub const m_iBombSite: usize = 0x144; // int32
                pub const m_hBombPlanter: usize = 0x148; // CHandle<CCSPlayerPawn>
            }
            // Parent: CEnvSoundscape
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
                pub const m_vExtent: usize = 0x970; // Vector
            }
            // Parent: CCSGO_TeamIntroCharacterPosition
            // Field count: 0
            pub mod CCSGO_WingmanIntroCharacterPosition {
            }
            // Parent: None
            // Field count: 0
            pub mod SpawnPoint_API {
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            pub mod CWeaponMP9 {
            }
            // Parent: CBaseTrigger
            // Field count: 1
            pub mod CTriggerDetectExplosion {
                pub const m_OnDetectedExplosion: usize = 0x910; // CEntityIOOutput
            }
            // Parent: CBaseFilter
            // Field count: 1
            pub mod CFilterName {
                pub const m_iFilterName: usize = 0x4E0; // CUtlSymbolLarge
            }
            // Parent: CBaseCSGrenadeProjectile
            // Field count: 12
            pub mod CSmokeGrenadeProjectile {
                pub const m_nSmokeEffectTickBegin: usize = 0xA88; // int32
                pub const m_bDidSmokeEffect: usize = 0xA8C; // bool
                pub const m_nRandomSeed: usize = 0xA90; // int32
                pub const m_vSmokeColor: usize = 0xA94; // Vector
                pub const m_vSmokeDetonationPos: usize = 0xAA0; // VectorWS
                pub const m_VoxelFrameData: usize = 0xAB0; // CNetworkUtlVectorBase<uint8>
                pub const m_nVoxelFrameDataSize: usize = 0xAC8; // int32
                pub const m_nVoxelUpdate: usize = 0xACC; // int32
                pub const m_flLastBounce: usize = 0xAD0; // GameTime_t
                pub const m_fllastSimulationTime: usize = 0xAD4; // GameTime_t
                pub const m_bExplodeFromInferno: usize = 0x2D58; // bool
                pub const m_bDidGroundScorch: usize = 0x2D59; // bool
            }
            // Parent: CPointEntity
            // Field count: 4
            pub mod CBlood {
                pub const m_vecSprayAngles: usize = 0x4A8; // QAngle
                pub const m_vecSprayDir: usize = 0x4B4; // Vector
                pub const m_flAmount: usize = 0x4C0; // float32
                pub const m_Color: usize = 0x4C4; // BloodType
            }
            // Parent: CTeam
            // Field count: 14
            pub mod CCSTeam {
                pub const m_nLastRecievedShorthandedRoundBonus: usize = 0x560; // int32
                pub const m_nShorthandedRoundBonusStartRound: usize = 0x564; // int32
                pub const m_bSurrendered: usize = 0x568; // bool
                pub const m_szTeamMatchStat: usize = 0x569; // char[512]
                pub const m_numMapVictories: usize = 0x76C; // int32
                pub const m_scoreFirstHalf: usize = 0x770; // int32
                pub const m_scoreSecondHalf: usize = 0x774; // int32
                pub const m_scoreOvertime: usize = 0x778; // int32
                pub const m_szClanTeamname: usize = 0x77C; // char[129]
                pub const m_iClanID: usize = 0x800; // uint32
                pub const m_szTeamFlagImage: usize = 0x804; // char[8]
                pub const m_szTeamLogoImage: usize = 0x80C; // char[8]
                pub const m_flNextResourceTime: usize = 0x814; // float32
                pub const m_iLastUpdateSentAt: usize = 0x818; // int32
            }
            // Parent: CRuleEntity
            // Field count: 1
            pub mod CRulePointEntity {
                pub const m_Score: usize = 0x778; // int32
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
            // Field count: 15
            pub mod CBaseAnimGraph {
                pub const m_graphControllerManager: usize = 0x770; // CAnimGraphControllerManager
                pub const m_pMainGraphController: usize = 0x808; // CAnimGraphControllerPtr
                pub const m_bInitiallyPopulateInterpHistory: usize = 0x810; // bool
                pub const m_OnLayerCycleUpdated: usize = 0x818; // CEntityOutputTemplate<float32>
                pub const m_OnExternalChoreoGraphChanged: usize = 0x838; // CEntityIOOutput
                pub const m_pChoreoServices: usize = 0x850; // IChoreoServices*
                pub const m_bAnimGraphUpdateEnabled: usize = 0x858; // bool
                pub const m_bAnimationUpdateScheduled: usize = 0x859; // bool
                pub const m_vecForce: usize = 0x85C; // Vector
                pub const m_nForceBone: usize = 0x868; // int32
                pub const m_pRagdollControl: usize = 0x878; // IPhysicsRagdollControl*
                pub const m_RagdollPose: usize = 0x880; // PhysicsRagdollPose_t
                pub const m_bRagdollEnabled: usize = 0x8A8; // bool
                pub const m_bRagdollClientSide: usize = 0x8A9; // bool
                pub const m_xParentedRagdollRootInEntitySpace: usize = 0x8B0; // CTransform
            }
            // Parent: CBaseEntity
            // Field count: 24
            pub mod CEnvCubemapFog {
                pub const m_flEndDistance: usize = 0x4A8; // float32
                pub const m_flStartDistance: usize = 0x4AC; // float32
                pub const m_flFogFalloffExponent: usize = 0x4B0; // float32
                pub const m_bHeightFogEnabled: usize = 0x4B4; // bool
                pub const m_flFogHeightWidth: usize = 0x4B8; // float32
                pub const m_flFogHeightEnd: usize = 0x4BC; // float32
                pub const m_flFogHeightStart: usize = 0x4C0; // float32
                pub const m_flFogHeightExponent: usize = 0x4C4; // float32
                pub const m_flLODBias: usize = 0x4C8; // float32
                pub const m_bActive: usize = 0x4CC; // bool
                pub const m_bStartDisabled: usize = 0x4CD; // bool
                pub const m_flFogMaxOpacity: usize = 0x4D0; // float32
                pub const m_nCubemapSourceType: usize = 0x4D4; // int32
                pub const m_hSkyMaterial: usize = 0x4D8; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_iszSkyEntity: usize = 0x4E0; // CUtlSymbolLarge
                pub const m_nHeightFogType: usize = 0x4E8; // int32
                pub const m_nFogHeightBlendMode: usize = 0x4EC; // int32
                pub const m_nFogHeightCoordinateSpace: usize = 0x4F0; // int32
                pub const m_nDistanceFogType: usize = 0x4F4; // int32
                pub const m_DistanceFogCurveString: usize = 0x4F8; // CUtlSymbolLarge
                pub const m_HeightFogCurveString: usize = 0x500; // CUtlSymbolLarge
                pub const m_hFogCubemapTexture: usize = 0x598; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_bHasHeightFogEnd: usize = 0x5A0; // bool
                pub const m_bFirstTime: usize = 0x5A1; // bool
            }
            // Parent: None
            // Field count: 0
            pub mod CMapVetoPickController_API {
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
            // Field count: 29
            pub mod CBaseDoor {
                pub const m_angMoveEntitySpace: usize = 0x800; // QAngle
                pub const m_vecMoveDirParentSpace: usize = 0x80C; // Vector
                pub const m_ls: usize = 0x818; // locksound_t
                pub const m_bForceClosed: usize = 0x838; // bool
                pub const m_bDoorGroup: usize = 0x839; // bool
                pub const m_bLocked: usize = 0x83A; // bool
                pub const m_bIgnoreDebris: usize = 0x83B; // bool
                pub const m_bNoNPCs: usize = 0x83C; // bool
                pub const m_eSpawnPosition: usize = 0x840; // FuncDoorSpawnPos_t
                pub const m_flBlockDamage: usize = 0x844; // float32
                pub const m_NoiseMoving: usize = 0x848; // CGameSoundEventName
                pub const m_NoiseArrived: usize = 0x850; // CGameSoundEventName
                pub const m_NoiseMovingClosed: usize = 0x858; // CGameSoundEventName
                pub const m_NoiseArrivedClosed: usize = 0x860; // CGameSoundEventName
                pub const m_ChainTarget: usize = 0x868; // CUtlSymbolLarge
                pub const m_OnBlockedClosing: usize = 0x870; // CEntityIOOutput
                pub const m_OnBlockedOpening: usize = 0x888; // CEntityIOOutput
                pub const m_OnUnblockedClosing: usize = 0x8A0; // CEntityIOOutput
                pub const m_OnUnblockedOpening: usize = 0x8B8; // CEntityIOOutput
                pub const m_OnFullyClosed: usize = 0x8D0; // CEntityIOOutput
                pub const m_OnFullyOpen: usize = 0x8E8; // CEntityIOOutput
                pub const m_OnClose: usize = 0x900; // CEntityIOOutput
                pub const m_OnOpen: usize = 0x918; // CEntityIOOutput
                pub const m_OnLockedUse: usize = 0x930; // CEntityIOOutput
                pub const m_bLoopMoveSound: usize = 0x948; // bool
                pub const m_bCreateNavObstacle: usize = 0x968; // bool
                pub const m_flSpeed: usize = 0x96C; // float32
                pub const m_isChaining: usize = 0x970; // bool
                pub const m_bIsUsable: usize = 0x971; // bool
            }
            // Parent: None
            // Field count: 0
            pub mod CBarnLightAPI {
            }
            // Parent: None
            // Field count: 0
            pub mod CServerOnlyPointEntity {
            }
            // Parent: CRulePointEntity
            // Field count: 4
            pub mod CGameMoney {
                pub const m_OnMoneySpent: usize = 0x780; // CEntityIOOutput
                pub const m_OnMoneySpentFail: usize = 0x798; // CEntityIOOutput
                pub const m_nMoney: usize = 0x7B0; // int32
                pub const m_strAwardText: usize = 0x7B8; // CUtlString
            }
            // Parent: None
            // Field count: 0
            pub mod CFlashbangProjectile_API {
            }
            // Parent: CPointEntity
            // Field count: 1
            pub mod CEnvHudHint {
                pub const m_iszMessage: usize = 0x4A8; // CUtlSymbolLarge
            }
            // Parent: CBaseEntity
            // Field count: 0
            pub mod CNullEntity {
            }
            // Parent: None
            // Field count: 0
            pub mod CLogicalEntity {
            }
            // Parent: CItem
            // Field count: 2
            pub mod CItemDefuser {
                pub const m_entitySpottedState: usize = 0xA00; // EntitySpottedState_t
                pub const m_nSpotRules: usize = 0xA18; // int32
            }
            // Parent: None
            // Field count: 1
            pub mod CItemGenericTriggerHelper {
                pub const m_hParentItem: usize = 0x770; // CHandle<CItemGeneric>
            }
            // Parent: CPlayerPawnComponent
            // Field count: 5
            pub mod CPlayer_WeaponServices {
                pub const m_hMyWeapons: usize = 0x48; // CNetworkUtlVectorBase<CHandle<CBasePlayerWeapon>>
                pub const m_hActiveWeapon: usize = 0x60; // CHandle<CBasePlayerWeapon>
                pub const m_hLastWeapon: usize = 0x64; // CHandle<CBasePlayerWeapon>
                pub const m_iAmmo: usize = 0x68; // uint16[32]
                pub const m_bPreventWeaponPickup: usize = 0xA8; // bool
            }
            // Parent: None
            // Field count: 6
            pub mod CRagdollPropAttached {
                pub const m_boneIndexAttached: usize = 0xB20; // uint32
                pub const m_ragdollAttachedObjectIndex: usize = 0xB24; // uint32
                pub const m_attachmentPointBoneSpace: usize = 0xB28; // Vector
                pub const m_attachmentPointRagdollSpace: usize = 0xB34; // Vector
                pub const m_bShouldDetach: usize = 0xB40; // bool
                pub const m_bShouldDeleteAttachedActivationRecord: usize = 0xB50; // bool
            }
            // Parent: CItem
            // Field count: 2
            pub mod CItemDogtags {
                pub const m_OwningPlayer: usize = 0xA00; // CHandle<CCSPlayerPawn>
                pub const m_KillingPlayer: usize = 0xA04; // CHandle<CCSPlayerPawn>
            }
            // Parent: CBasePlatTrain
            // Field count: 2
            pub mod CFuncPlat {
                pub const m_flSpeed: usize = 0x818; // float32
                pub const m_sNoise: usize = 0x820; // CUtlSymbolLarge
            }
            // Parent: CBaseModelEntity
            // Field count: 77
            pub mod CBarnLight {
                pub const m_bEnabled: usize = 0x770; // bool
                pub const m_nColorMode: usize = 0x774; // int32
                pub const m_Color: usize = 0x778; // Color
                pub const m_flColorTemperature: usize = 0x77C; // float32
                pub const m_flBrightness: usize = 0x780; // float32
                pub const m_flBrightnessScale: usize = 0x784; // float32
                pub const m_nDirectLight: usize = 0x788; // int32
                pub const m_nBakedShadowIndex: usize = 0x78C; // int32
                pub const m_nLightPathUniqueId: usize = 0x790; // int32
                pub const m_nLightMapUniqueId: usize = 0x794; // int32
                pub const m_nLuminaireShape: usize = 0x798; // int32
                pub const m_flLuminaireSize: usize = 0x79C; // float32
                pub const m_flLuminaireAnisotropy: usize = 0x7A0; // float32
                pub const m_LightStyleString: usize = 0x7A8; // CUtlString
                pub const m_flLightStyleStartTime: usize = 0x7B0; // GameTime_t
                pub const m_QueuedLightStyleStrings: usize = 0x7B8; // CNetworkUtlVectorBase<CUtlString>
                pub const m_LightStyleEvents: usize = 0x7D0; // CNetworkUtlVectorBase<CUtlString>
                pub const m_LightStyleTargets: usize = 0x7E8; // CNetworkUtlVectorBase<CHandle<CBaseModelEntity>>
                pub const m_StyleEvent: usize = 0x800; // CEntityIOOutput[4]
                pub const m_hLightCookie: usize = 0x880; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_flShape: usize = 0x888; // float32
                pub const m_flSoftX: usize = 0x88C; // float32
                pub const m_flSoftY: usize = 0x890; // float32
                pub const m_flSkirt: usize = 0x894; // float32
                pub const m_flSkirtNear: usize = 0x898; // float32
                pub const m_vSizeParams: usize = 0x89C; // Vector
                pub const m_flRange: usize = 0x8A8; // float32
                pub const m_vShear: usize = 0x8AC; // Vector
                pub const m_nBakeSpecularToCubemaps: usize = 0x8B8; // int32
                pub const m_vBakeSpecularToCubemapsSize: usize = 0x8BC; // Vector
                pub const m_flBakeSpecularToCubemapsScale: usize = 0x8C8; // float32
                pub const m_nCastShadows: usize = 0x8CC; // int32
                pub const m_nShadowMapSize: usize = 0x8D0; // int32
                pub const m_nShadowPriority: usize = 0x8D4; // int32
                pub const m_bContactShadow: usize = 0x8D8; // bool
                pub const m_bForceShadowsEnabled: usize = 0x8D9; // bool
                pub const m_nBounceLight: usize = 0x8DC; // int32
                pub const m_flBounceScale: usize = 0x8E0; // float32
                pub const m_flMinRoughness: usize = 0x8E4; // float32
                pub const m_vAlternateColor: usize = 0x8E8; // Vector
                pub const m_fAlternateColorBrightness: usize = 0x8F4; // float32
                pub const m_nFog: usize = 0x8F8; // int32
                pub const m_flFogStrength: usize = 0x8FC; // float32
                pub const m_nFogShadows: usize = 0x900; // int32
                pub const m_flFogScale: usize = 0x904; // float32
                pub const m_flFadeSizeStart: usize = 0x908; // float32
                pub const m_flFadeSizeEnd: usize = 0x90C; // float32
                pub const m_flShadowFadeSizeStart: usize = 0x910; // float32
                pub const m_flShadowFadeSizeEnd: usize = 0x914; // float32
                pub const m_bPrecomputedFieldsValid: usize = 0x918; // bool
                pub const m_vPrecomputedBoundsMins: usize = 0x91C; // Vector
                pub const m_vPrecomputedBoundsMaxs: usize = 0x928; // Vector
                pub const m_vPrecomputedOBBOrigin: usize = 0x934; // Vector
                pub const m_vPrecomputedOBBAngles: usize = 0x940; // QAngle
                pub const m_vPrecomputedOBBExtent: usize = 0x94C; // Vector
                pub const m_nPrecomputedSubFrusta: usize = 0x958; // int32
                pub const m_vPrecomputedOBBOrigin0: usize = 0x95C; // Vector
                pub const m_vPrecomputedOBBAngles0: usize = 0x968; // QAngle
                pub const m_vPrecomputedOBBExtent0: usize = 0x974; // Vector
                pub const m_vPrecomputedOBBOrigin1: usize = 0x980; // Vector
                pub const m_vPrecomputedOBBAngles1: usize = 0x98C; // QAngle
                pub const m_vPrecomputedOBBExtent1: usize = 0x998; // Vector
                pub const m_vPrecomputedOBBOrigin2: usize = 0x9A4; // Vector
                pub const m_vPrecomputedOBBAngles2: usize = 0x9B0; // QAngle
                pub const m_vPrecomputedOBBExtent2: usize = 0x9BC; // Vector
                pub const m_vPrecomputedOBBOrigin3: usize = 0x9C8; // Vector
                pub const m_vPrecomputedOBBAngles3: usize = 0x9D4; // QAngle
                pub const m_vPrecomputedOBBExtent3: usize = 0x9E0; // Vector
                pub const m_vPrecomputedOBBOrigin4: usize = 0x9EC; // Vector
                pub const m_vPrecomputedOBBAngles4: usize = 0x9F8; // QAngle
                pub const m_vPrecomputedOBBExtent4: usize = 0xA04; // Vector
                pub const m_vPrecomputedOBBOrigin5: usize = 0xA10; // Vector
                pub const m_vPrecomputedOBBAngles5: usize = 0xA1C; // QAngle
                pub const m_vPrecomputedOBBExtent5: usize = 0xA28; // Vector
                pub const m_bPvsModifyEntity: usize = 0xA34; // bool
                pub const m_bTransmitAlways: usize = 0xA35; // bool
                pub const m_VisClusters: usize = 0xA38; // CNetworkUtlVectorBase<uint16>
            }
            // Parent: CPointEntity
            // Field count: 3
            pub mod CInstructorEventEntity {
                pub const m_iszName: usize = 0x4A8; // CUtlSymbolLarge
                pub const m_iszHintTargetEntity: usize = 0x4B0; // CUtlSymbolLarge
                pub const m_hTargetPlayer: usize = 0x4B8; // CHandle<CBasePlayerPawn>
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            pub mod CWeaponTec9 {
            }
            // Parent: CPointEntity
            // Field count: 4
            pub mod CPathCorner {
                pub const m_flSpeed: usize = 0x4A8; // float32
                pub const m_flWait: usize = 0x4AC; // float32
                pub const m_flRadius: usize = 0x4B0; // float32
                pub const m_OnPass: usize = 0x4B8; // CEntityIOOutput
            }
            // Parent: CBaseTrigger
            // Field count: 14
            pub mod CTriggerSndSosOpvar {
                pub const m_hTouchingPlayers: usize = 0x8E8; // CUtlVector<CHandle<CBaseEntity>>
                pub const m_flPosition: usize = 0x900; // VectorWS
                pub const m_flCenterSize: usize = 0x90C; // float32
                pub const m_flMinVal: usize = 0x910; // float32
                pub const m_flMaxVal: usize = 0x914; // float32
                pub const m_opvarName: usize = 0x918; // CUtlSymbolLarge
                pub const m_stackName: usize = 0x920; // CUtlSymbolLarge
                pub const m_operatorName: usize = 0x928; // CUtlSymbolLarge
                pub const m_bVolIs2D: usize = 0x930; // bool
                pub const m_opvarNameChar: usize = 0x931; // char[256]
                pub const m_stackNameChar: usize = 0xA31; // char[256]
                pub const m_operatorNameChar: usize = 0xB31; // char[256]
                pub const m_VecNormPos: usize = 0xC34; // Vector
                pub const m_flNormCenterSize: usize = 0xC40; // float32
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
                pub const m_MethodName: usize = 0xD8; // PulseSymbol_t
                pub const m_nBlackboardIndex: usize = 0xE8; // PulseRuntimeBlackboardReferenceIndex_t
                pub const m_ExpectedArgs: usize = 0xF0; // CUtlLeanVector<CPulseRuntimeMethodArg>
                pub const m_nAsyncCallMode: usize = 0x100; // PulseMethodCallMode_t
                pub const m_OnFinished: usize = 0x108; // CPulse_ResumePoint
            }
            // Parent: CBaseAnimGraph
            // Field count: 30
            pub mod CPointCommentaryNode {
                pub const m_iszPreCommands: usize = 0x960; // CUtlSymbolLarge
                pub const m_iszPostCommands: usize = 0x968; // CUtlSymbolLarge
                pub const m_iszCommentaryFile: usize = 0x970; // CUtlSymbolLarge
                pub const m_iszViewTarget: usize = 0x978; // CUtlSymbolLarge
                pub const m_hViewTarget: usize = 0x980; // CHandle<CBaseEntity>
                pub const m_hViewTargetAngles: usize = 0x984; // CHandle<CBaseEntity>
                pub const m_iszViewPosition: usize = 0x988; // CUtlSymbolLarge
                pub const m_hViewPosition: usize = 0x990; // CHandle<CBaseEntity>
                pub const m_hViewPositionMover: usize = 0x994; // CHandle<CBaseEntity>
                pub const m_bPreventMovement: usize = 0x998; // bool
                pub const m_bUnderCrosshair: usize = 0x999; // bool
                pub const m_bUnstoppable: usize = 0x99A; // bool
                pub const m_flFinishedTime: usize = 0x99C; // GameTime_t
                pub const m_vecFinishOrigin: usize = 0x9A0; // VectorWS
                pub const m_vecOriginalAngles: usize = 0x9AC; // QAngle
                pub const m_vecFinishAngles: usize = 0x9B8; // QAngle
                pub const m_bPreventChangesWhileMoving: usize = 0x9C4; // bool
                pub const m_bDisabled: usize = 0x9C5; // bool
                pub const m_vecTeleportOrigin: usize = 0x9C8; // VectorWS
                pub const m_flAbortedPlaybackAt: usize = 0x9D4; // GameTime_t
                pub const m_pOnCommentaryStarted: usize = 0x9D8; // CEntityIOOutput
                pub const m_pOnCommentaryStopped: usize = 0x9F0; // CEntityIOOutput
                pub const m_bActive: usize = 0xA08; // bool
                pub const m_flStartTime: usize = 0xA0C; // GameTime_t
                pub const m_flStartTimeInCommentary: usize = 0xA10; // float32
                pub const m_iszTitle: usize = 0xA18; // CUtlSymbolLarge
                pub const m_iszSpeakers: usize = 0xA20; // CUtlSymbolLarge
                pub const m_iNodeNumber: usize = 0xA28; // int32
                pub const m_iNodeNumberMax: usize = 0xA2C; // int32
                pub const m_bListenedTo: usize = 0xA30; // bool
            }
            // Parent: CBaseButton
            // Field count: 14
            pub mod CMomentaryRotButton {
                pub const m_Position: usize = 0x8F0; // CEntityOutputTemplate<float32>
                pub const m_OnUnpressed: usize = 0x910; // CEntityIOOutput
                pub const m_OnFullyOpen: usize = 0x928; // CEntityIOOutput
                pub const m_OnFullyClosed: usize = 0x940; // CEntityIOOutput
                pub const m_OnReachedPosition: usize = 0x958; // CEntityIOOutput
                pub const m_lastUsed: usize = 0x970; // int32
                pub const m_start: usize = 0x974; // QAngle
                pub const m_end: usize = 0x980; // QAngle
                pub const m_IdealYaw: usize = 0x98C; // float32
                pub const m_sNoise: usize = 0x990; // CUtlSymbolLarge
                pub const m_bUpdateTarget: usize = 0x998; // bool
                pub const m_direction: usize = 0x99C; // int32
                pub const m_returnSpeed: usize = 0x9A0; // float32
                pub const m_flStartPosition: usize = 0x9A4; // float32
            }
            // Parent: CBaseEntity
            // Field count: 3
            pub mod CSceneListManager {
                pub const m_hListManagers: usize = 0x4A8; // CUtlVector<CHandle<CSceneListManager>>
                pub const m_iszScenes: usize = 0x4C0; // CUtlSymbolLarge[16]
                pub const m_hScenes: usize = 0x540; // CHandle<CBaseEntity>[16]
            }
            // Parent: CPointEntity
            // Field count: 4
            pub mod CEnvTilt {
                pub const m_Duration: usize = 0x4A8; // float32
                pub const m_Radius: usize = 0x4AC; // float32
                pub const m_TiltTime: usize = 0x4B0; // float32
                pub const m_stopTime: usize = 0x4B4; // GameTime_t
            }
            // Parent: None
            // Field count: 0
            pub mod CEnvSoundscapeTriggerable {
            }
            // Parent: CBaseModelEntity
            // Field count: 98
            pub mod CFuncMover {
                pub const m_iszPathName: usize = 0x770; // CUtlSymbolLarge
                pub const m_hPathMover: usize = 0x778; // CHandle<CPathMover>
                pub const m_hPrevPathMover: usize = 0x77C; // CHandle<CPathMover>
                pub const m_iszPathNodeStart: usize = 0x780; // CUtlSymbolLarge
                pub const m_iszPathNodeEnd: usize = 0x788; // CUtlSymbolLarge
                pub const m_bIgnoreEndNode: usize = 0x790; // bool
                pub const m_eMoveType: usize = 0x794; // CFuncMover::Move_t
                pub const m_bIsReversing: usize = 0x798; // bool
                pub const m_flStartSpeed: usize = 0x79C; // float32
                pub const m_flPathLocation: usize = 0x7A0; // float32
                pub const m_flT: usize = 0x7A4; // float32
                pub const m_nCurrentNodeIndex: usize = 0x7A8; // int32
                pub const m_nPreviousNodeIndex: usize = 0x7AC; // int32
                pub const m_eSolidType: usize = 0x7B0; // SolidType_t
                pub const m_bIsMoving: usize = 0x7B1; // bool
                pub const m_flTimeToReachMaxSpeed: usize = 0x7B4; // float32
                pub const m_flDistanceToReachMaxSpeed: usize = 0x7B8; // float32
                pub const m_flTimeToReachZeroSpeed: usize = 0x7BC; // float32
                pub const m_flComputedDistanceToReachMaxSpeed: usize = 0x7C0; // float32
                pub const m_flComputedDistanceToReachZeroSpeed: usize = 0x7C4; // float32
                pub const m_flStartCurveScale: usize = 0x7C8; // float32
                pub const m_flStopCurveScale: usize = 0x7CC; // float32
                pub const m_flDistanceToReachZeroSpeed: usize = 0x7D0; // float32
                pub const m_flTimeMovementStart: usize = 0x7D4; // GameTime_t
                pub const m_flTimeMovementStop: usize = 0x7D8; // GameTime_t
                pub const m_hStopAtNode: usize = 0x7DC; // CHandle<CMoverPathNode>
                pub const m_flPathLocationToBeginStop: usize = 0x7E0; // float32
                pub const m_flPathLocationStart: usize = 0x7E4; // float32
                pub const m_flBeginStopT: usize = 0x7E8; // float32
                pub const m_iszStartForwardSound: usize = 0x7F0; // CGameSoundEventName
                pub const m_iszLoopForwardSound: usize = 0x7F8; // CGameSoundEventName
                pub const m_iszStopForwardSound: usize = 0x800; // CGameSoundEventName
                pub const m_iszStartReverseSound: usize = 0x808; // CGameSoundEventName
                pub const m_iszLoopReverseSound: usize = 0x810; // CGameSoundEventName
                pub const m_iszStopReverseSound: usize = 0x818; // CGameSoundEventName
                pub const m_iszArriveAtDestinationSound: usize = 0x820; // CGameSoundEventName
                pub const m_OnMovementEnd: usize = 0x840; // CEntityIOOutput
                pub const m_bStartAtClosestPoint: usize = 0x858; // bool
                pub const m_bStartAtEnd: usize = 0x859; // bool
                pub const m_bStartFollowingClosestMover: usize = 0x85A; // bool
                pub const m_eOrientationUpdate: usize = 0x85C; // CFuncMover::OrientationUpdate_t
                pub const m_flTimeStartOrientationChange: usize = 0x860; // GameTime_t
                pub const m_flTimeToBlendToNewOrientation: usize = 0x864; // float32
                pub const m_flDurationBlendToNewOrientationRan: usize = 0x868; // float32
                pub const m_bCreateMovableNavMesh: usize = 0x86C; // bool
                pub const m_bCreateMovableSurfaceGraph: usize = 0x86D; // bool
                pub const m_bAllowMovableNavMeshDockingOnEntireEntity: usize = 0x86E; // bool
                pub const m_OnNodePassed: usize = 0x870; // CEntityOutputTemplate<CUtlString>
                pub const m_iszOrientationMatchEntityName: usize = 0x890; // CUtlSymbolLarge
                pub const m_hOrientationMatchEntity: usize = 0x898; // CHandle<CBaseEntity>
                pub const m_flTimeToTraverseToNextNode: usize = 0x89C; // float32
                pub const m_vLerpToNewPosStartInPathEntitySpace: usize = 0x8A0; // Vector
                pub const m_vLerpToNewPosEndInPathEntitySpace: usize = 0x8AC; // Vector
                pub const m_flLerpToPositionT: usize = 0x8B8; // float32
                pub const m_flLerpToPositionDeltaT: usize = 0x8BC; // float32
                pub const m_OnLerpToPositionComplete: usize = 0x8C0; // CEntityIOOutput
                pub const m_bIsPaused: usize = 0x8D8; // bool
                pub const m_eTransitionedToPathNodeAction: usize = 0x8DC; // CFuncMover::TransitionToPathNodeAction_t
                pub const m_qTransitionSourceOrientation: usize = 0x8E0; // Quaternion
                pub const m_nDelayedTeleportToNode: usize = 0x8F0; // int32
                pub const m_bIsImGuiLogging: usize = 0x8F4; // bool
                pub const m_bIsImGuiEntTextLogging: usize = 0x8F5; // bool
                pub const m_flSpeed: usize = 0x8F8; // float32
                pub const m_hFollowEntity: usize = 0x8FC; // CHandle<CBaseEntity>
                pub const m_flFollowDistance: usize = 0x900; // float32
                pub const m_flFollowMinimumSpeed: usize = 0x904; // float32
                pub const m_flCurFollowEntityT: usize = 0x908; // float32
                pub const m_flCurFollowSpeed: usize = 0x90C; // float32
                pub const m_strOrientationFaceEntityName: usize = 0x910; // CUtlSymbolLarge
                pub const m_hOrientationFaceEntity: usize = 0x918; // CHandle<CBaseEntity>
                pub const m_OnStart: usize = 0x920; // CEntityIOOutput
                pub const m_OnStartForward: usize = 0x938; // CEntityIOOutput
                pub const m_OnStartReverse: usize = 0x950; // CEntityIOOutput
                pub const m_OnStop: usize = 0x968; // CEntityIOOutput
                pub const m_OnStopped: usize = 0x980; // CEntityIOOutput
                pub const m_bNextNodeReturnsCurrent: usize = 0x998; // bool
                pub const m_bStartedMoving: usize = 0x999; // bool
                pub const m_eFollowEntityDirection: usize = 0x9B8; // CFuncMover::FollowEntityDirection_t
                pub const m_hFollowMover: usize = 0x9BC; // CHandle<CFuncMover>
                pub const m_iszFollowEntityName: usize = 0x9C0; // CUtlSymbolLarge
                pub const m_iszFollowMoverEntityName: usize = 0x9C8; // CUtlSymbolLarge
                pub const m_flFollowMoverDistance: usize = 0x9D0; // float32
                pub const m_flFollowMoverRatio: usize = 0x9D4; // float32
                pub const m_flFollowMoverCalculatedDistance: usize = 0x9D8; // float32
                pub const m_flFollowMoverSpringStrength: usize = 0x9DC; // float32
                pub const m_nFollowMoverConstraintPriority: usize = 0x9E0; // int32
                pub const m_vecFollowMoverCouplerRange: usize = 0x9E4; // Vector2D
                pub const m_bFollowConstraintsInitialized: usize = 0x9EC; // bool
                pub const m_eFollowConstraint: usize = 0x9F0; // CFuncMover::FollowConstraint_t
                pub const m_flFollowMoverSpeed: usize = 0x9F4; // float32
                pub const m_flFollowMoverVelocity: usize = 0x9F8; // float32
                pub const m_nTickMovementRan: usize = 0x9FC; // GameTick_t
                pub const m_movementSummary: usize = 0xA00; // FuncMoverMovementSummary_t
                pub const m_bStopFromBeginStopTarget: usize = 0xA20; // bool
                pub const m_bQueueStop: usize = 0xA21; // bool
                pub const m_bQueueStopMoving: usize = 0xA22; // bool
                pub const m_bQueueSetupPathMover: usize = 0xA23; // bool
                pub const m_ePathRebuildStrategy: usize = 0xA24; // CFuncMover::PathRebuildStrategy_t
            }
            // Parent: CBreakableProp
            // Field count: 42
            pub mod CPhysicsProp {
                pub const m_MotionEnabled: usize = 0xB00; // CEntityIOOutput
                pub const m_OnAwakened: usize = 0xB18; // CEntityIOOutput
                pub const m_OnAwake: usize = 0xB30; // CEntityIOOutput
                pub const m_OnAsleep: usize = 0xB48; // CEntityIOOutput
                pub const m_OnPlayerUse: usize = 0xB60; // CEntityIOOutput
                pub const m_OnOutOfWorld: usize = 0xB78; // CEntityIOOutput
                pub const m_OnPlayerPickup: usize = 0xB90; // CEntityIOOutput
                pub const m_bForceNavIgnore: usize = 0xBA8; // bool
                pub const m_bNoNavmeshBlocker: usize = 0xBA9; // bool
                pub const m_bForceNpcExclude: usize = 0xBAA; // bool
                pub const m_massScale: usize = 0xBAC; // float32
                pub const m_buoyancyScale: usize = 0xBB0; // float32
                pub const m_damageType: usize = 0xBB4; // int32
                pub const m_damageToEnableMotion: usize = 0xBB8; // int32
                pub const m_flForceToEnableMotion: usize = 0xBBC; // float32
                pub const m_bThrownByPlayer: usize = 0xBC0; // bool
                pub const m_bDroppedByPlayer: usize = 0xBC1; // bool
                pub const m_bTouchedByPlayer: usize = 0xBC2; // bool
                pub const m_bFirstCollisionAfterLaunch: usize = 0xBC3; // bool
                pub const m_bHasBeenAwakened: usize = 0xBC4; // bool
                pub const m_bIsOverrideProp: usize = 0xBC5; // bool
                pub const m_flLastBurn: usize = 0xBC8; // GameTime_t
                pub const m_nDynamicContinuousContactBehavior: usize = 0xBCC; // DynamicContinuousContactBehavior_t
                pub const m_fNextCheckDisableMotionContactsTime: usize = 0xBD0; // GameTime_t
                pub const m_iInitialGlowState: usize = 0xBD4; // int32
                pub const m_nGlowRange: usize = 0xBD8; // int32
                pub const m_nGlowRangeMin: usize = 0xBDC; // int32
                pub const m_glowColor: usize = 0xBE0; // Color
                pub const m_bShouldAutoConvertBackFromDebris: usize = 0xBE4; // bool
                pub const m_bMuteImpactEffects: usize = 0xBE5; // bool
                pub const m_nNavObstacleType: usize = 0xBE8; // INavObstacle::NavObstacleType_t
                pub const m_bUpdateNavWhenMoving: usize = 0xBEC; // bool
                pub const m_bForceNavObstacleCut: usize = 0xBED; // bool
                pub const m_bAllowObstacleConvexHullMerging: usize = 0xBEE; // bool
                pub const m_bAcceptDamageFromHeldObjects: usize = 0xBEF; // bool
                pub const m_bEnableUseOutput: usize = 0xBF0; // bool
                pub const m_CrateType: usize = 0xBF4; // CPhysicsProp::CrateType_t
                pub const m_strItemClass: usize = 0xBF8; // CUtlSymbolLarge[4]
                pub const m_nItemCount: usize = 0xC18; // int32[4]
                pub const m_bRemovableForAmmoBalancing: usize = 0xC28; // bool
                pub const m_bAwake: usize = 0xC29; // bool
                pub const m_bAttachedToReferenceFrame: usize = 0xC2A; // bool
            }
            // Parent: CBaseModelEntity
            // Field count: 2
            pub mod CFuncNavObstruction {
                pub const m_bDisabled: usize = 0x788; // bool
                pub const m_bUseAsyncObstacleUpdate: usize = 0x789; // bool
            }
            // Parent: CPhysConstraint
            // Field count: 12
            pub mod CPhysWheelConstraint {
                pub const m_flSuspensionFrequency: usize = 0x508; // float32
                pub const m_flSuspensionDampingRatio: usize = 0x50C; // float32
                pub const m_flSuspensionHeightOffset: usize = 0x510; // float32
                pub const m_bEnableSuspensionLimit: usize = 0x514; // bool
                pub const m_flMinSuspensionOffset: usize = 0x518; // float32
                pub const m_flMaxSuspensionOffset: usize = 0x51C; // float32
                pub const m_bEnableSteeringLimit: usize = 0x520; // bool
                pub const m_flMinSteeringAngle: usize = 0x524; // float32
                pub const m_flMaxSteeringAngle: usize = 0x528; // float32
                pub const m_flSteeringAxisFriction: usize = 0x52C; // float32
                pub const m_flSpinAxisFriction: usize = 0x530; // float32
                pub const m_hSteeringMimicsEntity: usize = 0x534; // CHandle<CBaseEntity>
            }
            // Parent: CBaseEntity
            // Field count: 2
            pub mod CSkyboxReference {
                pub const m_worldGroupId: usize = 0x4A8; // WorldGroupId_t
                pub const m_hSkyCamera: usize = 0x4AC; // CHandle<CSkyCamera>
            }
            // Parent: None
            // Field count: 0
            pub mod CPointPulse {
            }
            // Parent: None
            // Field count: 0
            pub mod CCSPlayerPawn_API {
            }
            // Parent: CBaseCSGrenadeProjectile
            // Field count: 3
            pub mod CMolotovProjectile {
                pub const m_bIsIncGrenade: usize = 0xA60; // bool
                pub const m_bDetonated: usize = 0xA78; // bool
                pub const m_stillTimer: usize = 0xA80; // IntervalTimer
            }
            // Parent: CBaseFilter
            // Field count: 1
            pub mod CFilterClass {
                pub const m_iFilterClass: usize = 0x4E0; // CUtlSymbolLarge
            }
            // Parent: None
            // Field count: 2
            pub mod CPathWithDynamicNodes {
                pub const m_vecPathNodes: usize = 0x5B0; // CNetworkUtlVectorBase<CHandle<CPathNode>>
                pub const m_xInitialPathWorldToLocal: usize = 0x5D0; // CTransform
            }
            // Parent: CBaseEntity
            // Field count: 17
            pub mod CColorCorrection {
                pub const m_flFadeInDuration: usize = 0x4A8; // float32
                pub const m_flFadeOutDuration: usize = 0x4AC; // float32
                pub const m_flStartFadeInWeight: usize = 0x4B0; // float32
                pub const m_flStartFadeOutWeight: usize = 0x4B4; // float32
                pub const m_flTimeStartFadeIn: usize = 0x4B8; // GameTime_t
                pub const m_flTimeStartFadeOut: usize = 0x4BC; // GameTime_t
                pub const m_flMaxWeight: usize = 0x4C0; // float32
                pub const m_bStartDisabled: usize = 0x4C4; // bool
                pub const m_bEnabled: usize = 0x4C5; // bool
                pub const m_bMaster: usize = 0x4C6; // bool
                pub const m_bClientSide: usize = 0x4C7; // bool
                pub const m_bExclusive: usize = 0x4C8; // bool
                pub const m_MinFalloff: usize = 0x4CC; // float32
                pub const m_MaxFalloff: usize = 0x4D0; // float32
                pub const m_flCurWeight: usize = 0x4D4; // float32
                pub const m_netlookupFilename: usize = 0x4D8; // char[512]
                pub const m_lookupFilename: usize = 0x6D8; // CUtlSymbolLarge
            }
            // Parent: CPropDoorRotating
            // Field count: 4
            pub mod CPropDoorRotatingBreakable {
                pub const m_bBreakable: usize = 0xE40; // bool
                pub const m_isAbleToCloseAreaPortals: usize = 0xE41; // bool
                pub const m_currentDamageState: usize = 0xE44; // int32
                pub const m_damageStates: usize = 0xE48; // CUtlVector<CUtlSymbolLarge>
            }
            // Parent: CBaseModelEntity
            // Field count: 0
            pub mod CLightDirectionalEntity {
            }
            // Parent: CBaseModelEntity
            // Field count: 14
            pub mod CBaseClientUIEntity {
                pub const m_bEnabled: usize = 0x770; // bool
                pub const m_DialogXMLName: usize = 0x778; // CUtlSymbolLarge
                pub const m_PanelClassName: usize = 0x780; // CUtlSymbolLarge
                pub const m_PanelID: usize = 0x788; // CUtlSymbolLarge
                pub const m_CustomOutput0: usize = 0x790; // CEntityOutputTemplate<CUtlString>
                pub const m_CustomOutput1: usize = 0x7B0; // CEntityOutputTemplate<CUtlString>
                pub const m_CustomOutput2: usize = 0x7D0; // CEntityOutputTemplate<CUtlString>
                pub const m_CustomOutput3: usize = 0x7F0; // CEntityOutputTemplate<CUtlString>
                pub const m_CustomOutput4: usize = 0x810; // CEntityOutputTemplate<CUtlString>
                pub const m_CustomOutput5: usize = 0x830; // CEntityOutputTemplate<CUtlString>
                pub const m_CustomOutput6: usize = 0x850; // CEntityOutputTemplate<CUtlString>
                pub const m_CustomOutput7: usize = 0x870; // CEntityOutputTemplate<CUtlString>
                pub const m_CustomOutput8: usize = 0x890; // CEntityOutputTemplate<CUtlString>
                pub const m_CustomOutput9: usize = 0x8B0; // CEntityOutputTemplate<CUtlString>
            }
            // Parent: CBaseModelEntity
            // Field count: 16
            pub mod CBreakable {
                pub const m_CPropDataComponent: usize = 0x778; // CPropDataComponent
                pub const m_Material: usize = 0x7B8; // Materials
                pub const m_hBreaker: usize = 0x7BC; // CHandle<CBaseEntity>
                pub const m_Explosion: usize = 0x7C0; // Explosions
                pub const m_iszSpawnObject: usize = 0x7C8; // CUtlSymbolLarge
                pub const m_flPressureDelay: usize = 0x7D0; // float32
                pub const m_iMinHealthDmg: usize = 0x7D4; // int32
                pub const m_iszPropData: usize = 0x7D8; // CUtlSymbolLarge
                pub const m_impactEnergyScale: usize = 0x7E0; // float32
                pub const m_nOverrideBlockLOS: usize = 0x7E4; // EOverrideBlockLOS_t
                pub const m_OnStartDeath: usize = 0x7E8; // CEntityIOOutput
                pub const m_OnBreak: usize = 0x800; // CEntityIOOutput
                pub const m_OnHealthChanged: usize = 0x818; // CEntityOutputTemplate<float32>
                pub const m_PerformanceMode: usize = 0x838; // PerformanceMode_t
                pub const m_hPhysicsAttacker: usize = 0x83C; // CHandle<CBasePlayerPawn>
                pub const m_flLastPhysicsInfluenceTime: usize = 0x840; // GameTime_t
            }
            // Parent: CPointEntity
            // Field count: 0
            pub mod CInfoLandmark {
            }
            // Parent: CBaseEntity
            // Field count: 3
            pub mod CBaseFilter {
                pub const m_bNegated: usize = 0x4A8; // bool
                pub const m_OnPass: usize = 0x4B0; // CEntityIOOutput
                pub const m_OnFail: usize = 0x4C8; // CEntityIOOutput
            }
            // Parent: None
            // Field count: 1
            pub mod WeaponPurchaseTracker_t {
                pub const m_weaponPurchases: usize = 0x8; // CUtlVectorEmbeddedNetworkVar<WeaponPurchaseCount_t>
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Outflow_PlaySceneBase__CursorState_t {
                pub const m_sceneInstance: usize = 0x0; // CHandle<CBaseEntity>
                pub const m_mainActor: usize = 0x4; // CHandle<CBaseEntity>
                pub const m_cursorIDToEventID: usize = 0x8; // CUtlHashtable<PulseCursorID_t,int32>
            }
            // Parent: CPointEntity
            // Field count: 15
            pub mod CMapInfo {
                pub const m_iBuyingStatus: usize = 0x4A8; // int32
                pub const m_flBombRadius: usize = 0x4AC; // float32
                pub const m_iPetPopulation: usize = 0x4B0; // int32
                pub const m_bUseNormalSpawnsForDM: usize = 0x4B4; // bool
                pub const m_bDisableAutoGeneratedDMSpawns: usize = 0x4B5; // bool
                pub const m_flBotMaxVisionDistance: usize = 0x4B8; // float32
                pub const m_iHostageCount: usize = 0x4BC; // int32
                pub const m_bFadePlayerVisibilityFarZ: usize = 0x4C0; // bool
                pub const m_bRainTraceToSkyEnabled: usize = 0x4C1; // bool
                pub const m_bGPUCullSkybox: usize = 0x4C2; // bool
                pub const m_flEnvRainStrength: usize = 0x4C4; // float32
                pub const m_flEnvPuddleRippleStrength: usize = 0x4C8; // float32
                pub const m_flEnvPuddleRippleDirection: usize = 0x4CC; // float32
                pub const m_flEnvWetnessCoverage: usize = 0x4D0; // float32
                pub const m_flEnvWetnessDryingAmount: usize = 0x4D4; // float32
            }
            // Parent: CBaseEntity
            // Field count: 16
            pub mod CGradientFog {
                pub const m_hGradientFogTexture: usize = 0x4A8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_flFogStartDistance: usize = 0x4B0; // float32
                pub const m_flFogEndDistance: usize = 0x4B4; // float32
                pub const m_bHeightFogEnabled: usize = 0x4B8; // bool
                pub const m_flFogStartHeight: usize = 0x4BC; // float32
                pub const m_flFogEndHeight: usize = 0x4C0; // float32
                pub const m_flFarZ: usize = 0x4C4; // float32
                pub const m_flFogMaxOpacity: usize = 0x4C8; // float32
                pub const m_flFogFalloffExponent: usize = 0x4CC; // float32
                pub const m_flFogVerticalExponent: usize = 0x4D0; // float32
                pub const m_fogColor: usize = 0x4D4; // Color
                pub const m_flFogStrength: usize = 0x4D8; // float32
                pub const m_flFadeTime: usize = 0x4DC; // float32
                pub const m_bStartDisabled: usize = 0x4E0; // bool
                pub const m_bIsEnabled: usize = 0x4E1; // bool
                pub const m_bGradientFogNeedsTextures: usize = 0x4E2; // bool
            }
            // Parent: None
            // Field count: 0
            pub mod CSoundOpvarSetAABBEntity {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Outflow_PlaySequence {
                pub const m_ParamSequenceName: usize = 0x138; // CUtlString
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Outflow_PlayDynamicVCD {
            }
            // Parent: CPointClientUIWorldPanel
            // Field count: 1
            pub mod CPointClientUIWorldTextPanel {
                pub const m_messageText: usize = 0x930; // char[512]
            }
            // Parent: None
            // Field count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CEntityIdentity {
                pub const m_nameStringTableIndex: usize = 0x14; // int32
                pub const m_name: usize = 0x18; // CUtlSymbolLarge
                pub const m_designerName: usize = 0x20; // CUtlSymbolLarge
                pub const m_flags: usize = 0x30; // uint32
                pub const m_worldGroupId: usize = 0x38; // WorldGroupId_t
                pub const m_fDataObjectTypes: usize = 0x3C; // uint32
                pub const m_PathIndex: usize = 0x40; // ChangeAccessorFieldPathIndex_t
                pub const m_pAttributes: usize = 0x48; // CEntityAttributeTable*
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
            // Field count: 38
            pub mod CFuncRotator {
                pub const m_eRotateType: usize = 0x770; // CFuncRotator::Rotate_t
                pub const m_bIsRotating: usize = 0x774; // bool
                pub const m_eSolidType: usize = 0x775; // SolidType_t
                pub const m_flSpeed: usize = 0x778; // float32
                pub const m_flTimeToCompleteRotation: usize = 0x77C; // float32
                pub const m_hRotatorTarget: usize = 0x780; // CHandle<CBaseEntity>
                pub const m_strRotatorTarget: usize = 0x788; // CUtlSymbolLarge
                pub const m_vecLocalRotationHistory: usize = 0x790; // CUtlVector<Quaternion>
                pub const m_OnRotationStarted: usize = 0x7A8; // CEntityIOOutput
                pub const m_OnRotationCompleted: usize = 0x7C0; // CEntityIOOutput
                pub const m_OnOscillate: usize = 0x7D8; // CEntityIOOutput
                pub const m_OnOscillateStartArrive: usize = 0x7F0; // CEntityIOOutput
                pub const m_OnOscillateStartDepart: usize = 0x808; // CEntityIOOutput
                pub const m_OnOscillateEndArrive: usize = 0x820; // CEntityIOOutput
                pub const m_OnOscillateEndDepart: usize = 0x838; // CEntityIOOutput
                pub const m_nTickRotateRan: usize = 0x850; // GameTick_t
                pub const m_bStartedRotating: usize = 0x854; // bool
                pub const m_rotationSummary: usize = 0x858; // FuncRotatorRotationSummary_t
                pub const m_flTimeToReachMaxSpeed: usize = 0x860; // float32
                pub const m_flTimeToReachZeroSpeed: usize = 0x864; // float32
                pub const m_flTimeRotationStart: usize = 0x868; // GameTime_t
                pub const m_flTimeRotationStop: usize = 0x86C; // GameTime_t
                pub const m_flStartSpeed: usize = 0x870; // float32
                pub const m_qSpawnOrientation: usize = 0x880; // Quaternion
                pub const m_bRecordHistory: usize = 0x890; // bool
                pub const m_bReturningToPreviousRotation: usize = 0x891; // bool
                pub const m_bReturningToInitialRotation: usize = 0x892; // bool
                pub const m_flMinYawRotation: usize = 0x894; // float32
                pub const m_flMaxYawRotation: usize = 0x898; // float32
                pub const m_nOscillationCount: usize = 0x89C; // int32
                pub const m_bOscillationFromStart: usize = 0x8A0; // bool
                pub const m_iszStartSound: usize = 0x8A8; // CGameSoundEventName
                pub const m_iszLoopSound: usize = 0x8B0; // CGameSoundEventName
                pub const m_iszStopSound: usize = 0x8D0; // CGameSoundEventName
                pub const m_flTargetAngle: usize = 0x8D8; // float32
                pub const m_flCurrentAngle: usize = 0x8DC; // float32
                pub const m_eRotationAxis: usize = 0x8E0; // CFuncRotator::RotationAxis_t
                pub const m_flSpeedDriftFromOverRotate: usize = 0x8E4; // float32
            }
            // Parent: CBaseEntity
            // Field count: 14
            pub mod CSoundEventEntity {
                pub const m_bStartOnSpawn: usize = 0x4A8; // bool
                pub const m_bToLocalPlayer: usize = 0x4A9; // bool
                pub const m_bStopOnNew: usize = 0x4AA; // bool
                pub const m_bSaveRestore: usize = 0x4AB; // bool
                pub const m_bSavedIsPlaying: usize = 0x4AC; // bool
                pub const m_flSavedElapsedTime: usize = 0x4B0; // float32
                pub const m_iszSourceEntityName: usize = 0x4B8; // CUtlSymbolLarge
                pub const m_iszAttachmentName: usize = 0x4C0; // CUtlSymbolLarge
                pub const m_onGUIDChanged: usize = 0x4C8; // CEntityOutputTemplate<SndOpEventGuid_t>
                pub const m_onSoundFinished: usize = 0x4F8; // CEntityIOOutput
                pub const m_flClientCullRadius: usize = 0x510; // float32
                pub const m_iszSoundName: usize = 0x540; // CUtlSymbolLarge
                pub const m_hSource: usize = 0x55C; // CEntityHandle
                pub const m_nEntityIndexSelection: usize = 0x560; // int32
            }
            // Parent: SpawnPoint
            // Field count: 0
            pub mod CInfoPlayerCounterterrorist {
            }
            // Parent: CBaseEntity
            // Field count: 4
            pub mod CEnvFade {
                pub const m_fadeColor: usize = 0x4A8; // Color
                pub const m_Duration: usize = 0x4AC; // float32
                pub const m_HoldDuration: usize = 0x4B0; // float32
                pub const m_OnBeginFade: usize = 0x4B8; // CEntityIOOutput
            }
            // Parent: None
            // Field count: 15
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CBasePlayerVData {
                pub const m_sModelName: usize = 0x28; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                pub const m_sModelNameAg2Override: usize = 0x108; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                pub const m_flHeadDamageMultiplier: usize = 0x1E8; // CSkillFloat
                pub const m_flChestDamageMultiplier: usize = 0x1F8; // CSkillFloat
                pub const m_flStomachDamageMultiplier: usize = 0x208; // CSkillFloat
                pub const m_flArmDamageMultiplier: usize = 0x218; // CSkillFloat
                pub const m_flLegDamageMultiplier: usize = 0x228; // CSkillFloat
                pub const m_flHoldBreathTime: usize = 0x238; // float32
                pub const m_flDrowningDamageInterval: usize = 0x23C; // float32
                pub const m_nDrowningDamageInitial: usize = 0x240; // int32
                pub const m_nDrowningDamageMax: usize = 0x244; // int32
                pub const m_nWaterSpeed: usize = 0x248; // int32
                pub const m_flUseRange: usize = 0x24C; // float32
                pub const m_flUseAngleTolerance: usize = 0x250; // float32
                pub const m_flCrouchTime: usize = 0x254; // float32
            }
            // Parent: CTriggerMultiple
            // Field count: 4
            pub mod CTriggerImpact {
                pub const m_flMagnitude: usize = 0x900; // float32
                pub const m_flNoise: usize = 0x904; // float32
                pub const m_flViewkick: usize = 0x908; // float32
                pub const m_pOutputForce: usize = 0x910; // CEntityOutputTemplate<Vector>
            }
            // Parent: None
            // Field count: 3
            pub mod CCSGameModeRules_Deathmatch {
                pub const m_flDMBonusStartTime: usize = 0x30; // GameTime_t
                pub const m_flDMBonusTimeLength: usize = 0x34; // float32
                pub const m_sDMBonusWeapon: usize = 0x38; // CUtlString
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CTestPulseIO__EntityHandleIntArgs_t {
                pub const handleA: usize = 0x0; // CEntityHandle
                pub const valueB: usize = 0x4; // int32
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
                pub const m_nCursorsAllowedToRunParallel: usize = 0x128; // int32
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
            // Field count: 39
            pub mod CBasePropDoor {
                pub const m_flAutoReturnDelay: usize = 0xBB0; // float32
                pub const m_hDoorList: usize = 0xBB8; // CUtlVector<CHandle<CBasePropDoor>>
                pub const m_nHardwareType: usize = 0xBD0; // int32
                pub const m_bNeedsHardware: usize = 0xBD4; // bool
                pub const m_eDoorState: usize = 0xBD8; // DoorState_t
                pub const m_bLocked: usize = 0xBDC; // bool
                pub const m_bNoNPCs: usize = 0xBDD; // bool
                pub const m_closedPosition: usize = 0xBE0; // VectorWS
                pub const m_closedAngles: usize = 0xBEC; // QAngle
                pub const m_hBlocker: usize = 0xBF8; // CHandle<CBaseEntity>
                pub const m_bFirstBlocked: usize = 0xBFC; // bool
                pub const m_ls: usize = 0xC00; // locksound_t
                pub const m_bForceClosed: usize = 0xC20; // bool
                pub const m_vecLatchWorldPosition: usize = 0xC24; // VectorWS
                pub const m_hActivator: usize = 0xC30; // CHandle<CBaseEntity>
                pub const m_flSpeed: usize = 0xC34; // float32
                pub const m_SoundMoving: usize = 0xC50; // CGameSoundEventName
                pub const m_SoundOpen: usize = 0xC58; // CGameSoundEventName
                pub const m_SoundClose: usize = 0xC60; // CGameSoundEventName
                pub const m_SoundLock: usize = 0xC68; // CGameSoundEventName
                pub const m_SoundUnlock: usize = 0xC70; // CGameSoundEventName
                pub const m_SoundLatch: usize = 0xC78; // CGameSoundEventName
                pub const m_SoundPound: usize = 0xC80; // CGameSoundEventName
                pub const m_SoundJiggle: usize = 0xC88; // CGameSoundEventName
                pub const m_SoundLockedAnim: usize = 0xC90; // CGameSoundEventName
                pub const m_numCloseAttempts: usize = 0xC98; // int32
                pub const m_nPhysicsMaterial: usize = 0xC9C; // CUtlStringToken
                pub const m_SlaveName: usize = 0xCA0; // CUtlSymbolLarge
                pub const m_hMaster: usize = 0xCA8; // CHandle<CBasePropDoor>
                pub const m_OnBlockedClosing: usize = 0xCB0; // CEntityIOOutput
                pub const m_OnBlockedOpening: usize = 0xCC8; // CEntityIOOutput
                pub const m_OnUnblockedClosing: usize = 0xCE0; // CEntityIOOutput
                pub const m_OnUnblockedOpening: usize = 0xCF8; // CEntityIOOutput
                pub const m_OnFullyClosed: usize = 0xD10; // CEntityIOOutput
                pub const m_OnFullyOpen: usize = 0xD28; // CEntityIOOutput
                pub const m_OnClose: usize = 0xD40; // CEntityIOOutput
                pub const m_OnOpen: usize = 0xD58; // CEntityIOOutput
                pub const m_OnLockedUse: usize = 0xD70; // CEntityIOOutput
                pub const m_OnAjarOpen: usize = 0xD88; // CEntityIOOutput
            }
            // Parent: CBaseEntity
            // Field count: 6
            pub mod CLogicBranchList {
                pub const m_nLogicBranchNames: usize = 0x4A8; // CUtlSymbolLarge[16]
                pub const m_LogicBranchList: usize = 0x528; // CUtlVector<CHandle<CBaseEntity>>
                pub const m_eLastState: usize = 0x540; // CLogicBranchList::LogicBranchListenerLastState_t
                pub const m_OnAllTrue: usize = 0x548; // CEntityIOOutput
                pub const m_OnAllFalse: usize = 0x560; // CEntityIOOutput
                pub const m_OnMixed: usize = 0x578; // CEntityIOOutput
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
            // Field count: 23
            pub mod CDynamicProp {
                pub const m_bCreateNavObstacle: usize = 0xAF8; // bool
                pub const m_bNavObstacleUpdatesOverridden: usize = 0xAF9; // bool
                pub const m_bUseHitboxesForRenderBox: usize = 0xAFA; // bool
                pub const m_bUseAnimGraph: usize = 0xAFB; // bool
                pub const m_pOutputAnimBegun: usize = 0xB00; // CEntityIOOutput
                pub const m_pOutputAnimOver: usize = 0xB18; // CEntityIOOutput
                pub const m_pOutputAnimLoopCycleOver: usize = 0xB30; // CEntityIOOutput
                pub const m_OnAnimReachedStart: usize = 0xB48; // CEntityIOOutput
                pub const m_OnAnimReachedEnd: usize = 0xB60; // CEntityIOOutput
                pub const m_iszIdleAnim: usize = 0xB78; // CUtlSymbolLarge
                pub const m_nIdleAnimLoopMode: usize = 0xB80; // AnimLoopMode_t
                pub const m_bRandomizeCycle: usize = 0xB84; // bool
                pub const m_bStartDisabled: usize = 0xB85; // bool
                pub const m_bFiredStartEndOutput: usize = 0xB86; // bool
                pub const m_bForceNpcExclude: usize = 0xB87; // bool
                pub const m_bCreateMovableSurfaceGraph: usize = 0xB88; // bool
                pub const m_bCreateNonSolid: usize = 0xB89; // bool
                pub const m_bIsOverrideProp: usize = 0xB8A; // bool
                pub const m_iInitialGlowState: usize = 0xB8C; // int32
                pub const m_nGlowRange: usize = 0xB90; // int32
                pub const m_nGlowRangeMin: usize = 0xB94; // int32
                pub const m_glowColor: usize = 0xB98; // Color
                pub const m_nGlowTeam: usize = 0xB9C; // int32
            }
            // Parent: CHostage
            // Field count: 0
            pub mod CHostageAlias_info_hostage_spawn {
            }
            // Parent: CBaseFilter
            // Field count: 1
            pub mod CFilterTeam {
                pub const m_iFilterTeam: usize = 0x4E0; // int32
            }
            // Parent: CBaseModelEntity
            // Field count: 10
            pub mod CFuncConveyor {
                pub const m_szConveyorModels: usize = 0x770; // CUtlSymbolLarge
                pub const m_flTransitionDurationSeconds: usize = 0x778; // float32
                pub const m_flSpeed: usize = 0x77C; // float32
                pub const m_angMoveEntitySpace: usize = 0x780; // QAngle
                pub const m_vecMoveDirEntitySpace: usize = 0x78C; // Vector
                pub const m_flTargetSpeed: usize = 0x798; // float32
                pub const m_nTransitionStartTick: usize = 0x79C; // GameTick_t
                pub const m_nTransitionDurationTicks: usize = 0x7A0; // int32
                pub const m_flTransitionStartSpeed: usize = 0x7A4; // float32
                pub const m_hConveyorModels: usize = 0x7A8; // CNetworkUtlVectorBase<CHandle<CBaseEntity>>
            }
            // Parent: CBaseTrigger
            // Field count: 14
            pub mod CTriggerPhysics {
                pub const m_pController: usize = 0x8F0; // IPhysicsMotionController*
                pub const m_gravityScale: usize = 0x8F8; // float32
                pub const m_linearLimit: usize = 0x8FC; // float32
                pub const m_linearDamping: usize = 0x900; // float32
                pub const m_angularLimit: usize = 0x904; // float32
                pub const m_angularDamping: usize = 0x908; // float32
                pub const m_linearForce: usize = 0x90C; // float32
                pub const m_flFrequency: usize = 0x910; // float32
                pub const m_flDampingRatio: usize = 0x914; // float32
                pub const m_vecLinearForcePointAt: usize = 0x918; // Vector
                pub const m_bCollapseToForcePoint: usize = 0x924; // bool
                pub const m_vecLinearForcePointAtWorld: usize = 0x928; // VectorWS
                pub const m_vecLinearForceDirection: usize = 0x934; // Vector
                pub const m_bConvertToDebrisWhenPossible: usize = 0x940; // bool
            }
            // Parent: CPointEntity
            // Field count: 0
            pub mod CInfoInstructorHintBombTargetB {
            }
            // Parent: CBaseEntity
            // Field count: 5
            pub mod CFuncTimescale {
                pub const m_flDesiredTimescale: usize = 0x4A8; // float32
                pub const m_flAcceleration: usize = 0x4AC; // float32
                pub const m_flMinBlendRate: usize = 0x4B0; // float32
                pub const m_flBlendDeltaMultiplier: usize = 0x4B4; // float32
                pub const m_isStarted: usize = 0x4B8; // bool
            }
            // Parent: None
            // Field count: 32
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CBasePlayerWeaponVData {
                pub const m_szWorldModel: usize = 0x28; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                pub const m_szWorldModelAg2Override: usize = 0x108; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                pub const m_sToolsOnlyOwnerModelName: usize = 0x1E8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                pub const m_bBuiltRightHanded: usize = 0x2C8; // bool
                pub const m_bAllowFlipping: usize = 0x2C9; // bool
                pub const m_sMuzzleAttachment: usize = 0x2D0; // CAttachmentNameSymbolWithStorage
                pub const m_szMuzzleFlashParticle: usize = 0x2F0; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                pub const m_szMuzzleFlashParticleConfig: usize = 0x3D0; // CUtlString
                pub const m_szBarrelSmokeParticle: usize = 0x3D8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                pub const m_nMuzzleSmokeShotThreshold: usize = 0x4B8; // uint8
                pub const m_flMuzzleSmokeTimeout: usize = 0x4BC; // float32
                pub const m_flMuzzleSmokeDecrementRate: usize = 0x4C0; // float32
                pub const m_bGenerateMuzzleLight: usize = 0x4C4; // bool
                pub const m_bLinkedCooldowns: usize = 0x4C5; // bool
                pub const m_iFlags: usize = 0x4C6; // ItemFlagTypes_t
                pub const m_iWeight: usize = 0x4C8; // int32
                pub const m_bAutoSwitchTo: usize = 0x4CC; // bool
                pub const m_bAutoSwitchFrom: usize = 0x4CD; // bool
                pub const m_nPrimaryAmmoType: usize = 0x4CE; // AmmoIndex_t
                pub const m_nSecondaryAmmoType: usize = 0x4CF; // AmmoIndex_t
                pub const m_iMaxClip1: usize = 0x4D0; // int32
                pub const m_iMaxClip2: usize = 0x4D4; // int32
                pub const m_iDefaultClip1: usize = 0x4D8; // int32
                pub const m_iDefaultClip2: usize = 0x4DC; // int32
                pub const m_bReserveAmmoAsClips: usize = 0x4E0; // bool
                pub const m_bTreatAsSingleClip: usize = 0x4E1; // bool
                pub const m_bKeepLoadedAmmo: usize = 0x4E2; // bool
                pub const m_iRumbleEffect: usize = 0x4E4; // RumbleEffect_t
                pub const m_flDropSpeed: usize = 0x4E8; // float32
                pub const m_iSlot: usize = 0x4EC; // int32
                pub const m_iPosition: usize = 0x4F0; // int32
                pub const m_aShootSounds: usize = 0x4F8; // CUtlOrderedMap<WeaponSound_t,CSoundEventName>
            }
            // Parent: CSoundOpvarSetPointBase
            // Field count: 24
            pub mod CSoundOpvarSetPointEntity {
                pub const m_OnEnter: usize = 0x550; // CEntityIOOutput
                pub const m_OnExit: usize = 0x568; // CEntityIOOutput
                pub const m_bAutoDisable: usize = 0x580; // bool
                pub const m_flDistanceMin: usize = 0x5C4; // float32
                pub const m_flDistanceMax: usize = 0x5C8; // float32
                pub const m_flDistanceMapMin: usize = 0x5CC; // float32
                pub const m_flDistanceMapMax: usize = 0x5D0; // float32
                pub const m_flOcclusionRadius: usize = 0x5D4; // float32
                pub const m_flOcclusionMin: usize = 0x5D8; // float32
                pub const m_flOcclusionMax: usize = 0x5DC; // float32
                pub const m_flValSetOnDisable: usize = 0x5E0; // float32
                pub const m_bSetValueOnDisable: usize = 0x5E4; // bool
                pub const m_bReloading: usize = 0x5E5; // bool
                pub const m_nSimulationMode: usize = 0x5E8; // int32
                pub const m_nVisibilitySamples: usize = 0x5EC; // int32
                pub const m_vDynamicProxyPoint: usize = 0x5F0; // Vector
                pub const m_flDynamicMaximumOcclusion: usize = 0x5FC; // float32
                pub const m_hDynamicEntity: usize = 0x600; // CEntityHandle
                pub const m_iszDynamicEntityName: usize = 0x608; // CUtlSymbolLarge
                pub const m_flPathingDistanceNormFactor: usize = 0x610; // float32
                pub const m_vPathingSourcePos: usize = 0x614; // VectorWS
                pub const m_vPathingListenerPos: usize = 0x620; // VectorWS
                pub const m_vPathingDirection: usize = 0x62C; // Vector
                pub const m_nPathingSourceIndex: usize = 0x638; // int32
            }
            // Parent: None
            // Field count: 0
            pub mod CEnvCombinedLightProbeVolumeAPI {
            }
            // Parent: CBaseEntity
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
                pub const m_GroupNames: usize = 0x778; // CUtlVector<CGlobalSymbol>
                pub const m_Tags: usize = 0x790; // CUtlVector<CGlobalSymbol>
                pub const m_bIsGroup: usize = 0x7A8; // bool
                pub const m_bGroupByPrefab: usize = 0x7A9; // bool
                pub const m_bGroupByVolume: usize = 0x7AA; // bool
                pub const m_bGroupOtherGroups: usize = 0x7AB; // bool
                pub const m_bIsInGroup: usize = 0x7AC; // bool
            }
            // Parent: CPointEntity
            // Field count: 0
            pub mod CInfoParticleTarget {
            }
            // Parent: CBaseEntity
            // Field count: 18
            pub mod CEnvCubemap {
                pub const m_Entity_hCubemapTexture: usize = 0x528; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_bCustomCubemapTexture: usize = 0x530; // bool
                pub const m_Entity_flInfluenceRadius: usize = 0x534; // float32
                pub const m_Entity_vBoxProjectMins: usize = 0x538; // Vector
                pub const m_Entity_vBoxProjectMaxs: usize = 0x544; // Vector
                pub const m_Entity_bMoveable: usize = 0x550; // bool
                pub const m_Entity_nHandshake: usize = 0x554; // int32
                pub const m_Entity_nEnvCubeMapArrayIndex: usize = 0x558; // int32
                pub const m_Entity_nPriority: usize = 0x55C; // int32
                pub const m_Entity_flEdgeFadeDist: usize = 0x560; // float32
                pub const m_Entity_vEdgeFadeDists: usize = 0x564; // Vector
                pub const m_Entity_flDiffuseScale: usize = 0x570; // float32
                pub const m_Entity_bStartDisabled: usize = 0x574; // bool
                pub const m_Entity_bDefaultEnvMap: usize = 0x575; // bool
                pub const m_Entity_bDefaultSpecEnvMap: usize = 0x576; // bool
                pub const m_Entity_bIndoorCubeMap: usize = 0x577; // bool
                pub const m_Entity_bCopyDiffuseFromDefaultCubemap: usize = 0x578; // bool
                pub const m_Entity_bEnabled: usize = 0x588; // bool
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
            // Field count: 16
            pub mod CTriggerLerpObject {
                pub const m_iszLerpTarget: usize = 0x8E8; // CUtlSymbolLarge
                pub const m_hLerpTarget: usize = 0x8F0; // CHandle<CBaseEntity>
                pub const m_iszLerpTargetAttachment: usize = 0x8F8; // CUtlSymbolLarge
                pub const m_hLerpTargetAttachment: usize = 0x900; // AttachmentHandle_t
                pub const m_flLerpDuration: usize = 0x904; // float32
                pub const m_bAttachedEntityWasParented: usize = 0x908; // bool
                pub const m_bLerpRestoreMoveType: usize = 0x909; // bool
                pub const m_bSingleLerpObject: usize = 0x90A; // bool
                pub const m_vecLerpingObjects: usize = 0x910; // CUtlVector<lerpdata_t>
                pub const m_iszLerpEffect: usize = 0x928; // CUtlSymbolLarge
                pub const m_iszLerpSound: usize = 0x930; // CUtlSymbolLarge
                pub const m_bAttachTouchingObject: usize = 0x938; // bool
                pub const m_hEntityToWaitForDisconnect: usize = 0x93C; // CHandle<CBaseEntity>
                pub const m_OnLerpStarted: usize = 0x940; // CEntityIOOutput
                pub const m_OnLerpFinished: usize = 0x958; // CEntityIOOutput
                pub const m_OnDetached: usize = 0x970; // CEntityIOOutput
            }
            // Parent: CPhysicsProp
            // Field count: 0
            pub mod CPhysicsPropOverride {
            }
            // Parent: CBaseTrigger
            // Field count: 4
            pub mod CTriggerSave {
                pub const m_bForceNewLevelUnit: usize = 0x8E8; // bool
                pub const m_fDangerousTimer: usize = 0x8EC; // float32
                pub const m_minHitPoints: usize = 0x8F0; // int32
                pub const m_flRetriggerDelay: usize = 0x8F4; // float32
            }
            // Parent: CPointEntity
            // Field count: 6
            pub mod CPointHurt {
                pub const m_nDamage: usize = 0x4A8; // int32
                pub const m_bitsDamageType: usize = 0x4AC; // DamageTypes_t
                pub const m_flRadius: usize = 0x4B0; // float32
                pub const m_flDelay: usize = 0x4B4; // float32
                pub const m_strTarget: usize = 0x4B8; // CUtlSymbolLarge
                pub const m_pActivator: usize = 0x4C0; // CHandle<CBaseEntity>
            }
            // Parent: CBaseAnimGraph
            // Field count: 0
            pub mod CBaseAnimGraphAlias_baseanimating {
            }
            // Parent: CBaseEntity
            // Field count: 25
            pub mod CBasePlayerController {
                pub const m_nInButtonsWhichAreToggles: usize = 0x4B0; // uint64
                pub const m_nTickBase: usize = 0x4B8; // uint32
                pub const m_hPawn: usize = 0x4E0; // CHandle<CBasePlayerPawn>
                pub const m_bKnownTeamMismatch: usize = 0x4E4; // bool
                pub const m_nSplitScreenSlot: usize = 0x4E8; // CSplitScreenSlot
                pub const m_hSplitOwner: usize = 0x4EC; // CHandle<CBasePlayerController>
                pub const m_hSplitScreenPlayers: usize = 0x4F0; // CUtlVector<CHandle<CBasePlayerController>>
                pub const m_bIsHLTV: usize = 0x508; // bool
                pub const m_iConnected: usize = 0x50C; // PlayerConnectedState
                pub const m_iMostConnected: usize = 0x510; // PlayerConnectedState
                pub const m_iszPlayerName: usize = 0x514; // char[128]
                pub const m_szNetworkIDString: usize = 0x598; // CUtlString
                pub const m_fLerpTime: usize = 0x5A0; // float32
                pub const m_bLagCompensation: usize = 0x5A4; // bool
                pub const m_bPredict: usize = 0x5A5; // bool
                pub const m_bIsLowViolence: usize = 0x5AC; // bool
                pub const m_bGamePaused: usize = 0x5AD; // bool
                pub const m_iIgnoreGlobalChat: usize = 0x6E8; // ChatIgnoreType_t
                pub const m_flLastPlayerTalkTime: usize = 0x6EC; // float32
                pub const m_flLastEntitySteadyState: usize = 0x6F0; // float32
                pub const m_nAvailableEntitySteadyState: usize = 0x6F4; // int32
                pub const m_bHasAnySteadyStateEnts: usize = 0x6F8; // bool
                pub const m_steamID: usize = 0x708; // uint64
                pub const m_bNoClipEnabled: usize = 0x710; // bool
                pub const m_iDesiredFOV: usize = 0x714; // uint32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MPropertyCustomEditor
            pub mod CRangeFloat {
                pub const m_pValue: usize = 0x0; // float32[2]
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MFgdHelper
            pub mod CDestructiblePart {
                pub const m_DebugName: usize = 0x0; // CGlobalSymbol
                pub const m_nHitGroup: usize = 0x8; // HitGroup_t
                pub const m_bDisableHitGroupWhenDestroyed: usize = 0xC; // bool
                pub const m_nOtherHitgroupsToDestroyWhenFullyDestructed: usize = 0x10; // CUtlVector<HitGroup_t>
                pub const m_bOnlyDestroyWhenGibbing: usize = 0x28; // bool
                pub const m_sBodyGroupName: usize = 0x30; // CGlobalSymbol
                pub const m_DamageLevels: usize = 0x38; // CUtlVector<CDestructiblePart_DamageLevel>
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod PhysBlockHeader_t {
                pub const nSaved: usize = 0x0; // int32
                pub const pWorldObject: usize = 0x8; // uint64
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod RelationshipOverride_t {
                pub const entity: usize = 0x8; // CHandle<CBaseEntity>
                pub const classType: usize = 0xC; // Class_T
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod AutoRoomDoorwayPairs_t {
                pub const vP1: usize = 0x0; // VectorWS
                pub const vP2: usize = 0xC; // VectorWS
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod NavHull_t {
                pub const m_nHullIdx: usize = 0x0; // int32
            }
            // Parent: None
            // Field count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CDebugSnapshotData_t {
                pub const m_text: usize = 0x0; // CUtlString
                pub const m_dataType: usize = 0x8; // uint32
                pub const m_userFlags: usize = 0xC; // uint32
                pub const m_userData: usize = 0x10; // uint32
                pub const m_userVector: usize = 0x14; // VectorWS
                pub const m_userTransform: usize = 0x20; // CTransformWS
                pub const m_userShape: usize = 0x40; // CGenericShapeProxy
                pub const m_drawColor: usize = 0xD8; // Color
                pub const m_vecDebugOverlayData: usize = 0xE0; // CUtlVector<CDebugDrawHistoryData*>
                pub const m_pStructuredData: usize = 0xF8; // DebugSnapshotBaseStructuredData_t*
                pub const m_hEntity: usize = 0x100; // CHandle<CBaseEntity>
                pub const m_sEntityName: usize = 0x108; // CUtlString
                pub const m_nEntityIndex: usize = 0x110; // CEntityIndex
                pub const m_children: usize = 0x120; // CUtlLeanVector<CDebugSnapshotData_t>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MPropertyCustomEditor
            pub mod CRemapFloat {
                pub const m_pValue: usize = 0x0; // float32[4]
            }
            // Parent: None
            // Field count: 3
            pub mod CHintMessage {
                pub const m_hintString: usize = 0x0; // char*
                pub const m_args: usize = 0x8; // CUtlVector<char*>
                pub const m_duration: usize = 0x20; // float32
            }
            // Parent: None
            // Field count: 0
            pub mod CNavAttribute {
            }
            // Parent: None
            // Field count: 18
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod AI_GroundRootMotionMotor_DebugSnapshotData_t {
                pub const desired_movement_gait_set: usize = 0x8; // CGlobalSymbol
                pub const desired_movement_gait: usize = 0x10; // CGlobalSymbol
                pub const current_movement_gait_set: usize = 0x18; // CGlobalSymbol
                pub const current_movement_gait: usize = 0x20; // CGlobalSymbol
                pub const movement_setting_id: usize = 0x28; // CGlobalSymbol
                pub const gait_switch_blocked_reason: usize = 0x30; // CGlobalSymbol
                pub const b_goal_completion_allowed: usize = 0x38; // bool
                pub const state: usize = 0x40; // CGlobalSymbol
                pub const n_state_active_tick_count: usize = 0x48; // int32
                pub const b_has_path: usize = 0x4C; // bool
                pub const f_remaining_ground_path_length: usize = 0x50; // float32
                pub const f_current_speed: usize = 0x54; // float32
                pub const move_type: usize = 0x58; // CGlobalSymbol
                pub const f_forward_strafing_angle_actual: usize = 0x60; // float32
                pub const f_forward_strafing_angle_desired: usize = 0x64; // float32
                pub const f_current_lean: usize = 0x68; // float32
                pub const f_target_lean: usize = 0x6C; // float32
                pub const vec_events: usize = 0x70; // CUtlVector<AI_GroundRootMotionMotor_DebugSnapshotData_t::Event_t>
            }
            // Parent: None
            // Field count: 7
            pub mod ParticleNode_t {
                pub const m_hEntity: usize = 0x0; // CHandle<CBaseEntity>
                pub const m_iIndex: usize = 0x4; // ParticleIndex_t
                pub const m_flStartTime: usize = 0x8; // GameTime_t
                pub const m_flGrowthDuration: usize = 0xC; // float32
                pub const m_vecGrowthOrigin: usize = 0x10; // VectorWS
                pub const m_flEndcapTime: usize = 0x1C; // float32
                pub const m_bMarkedForDelete: usize = 0x20; // bool
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyCustomFGDType
            pub mod CFootstepTableHandle {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CDecalGroupVData {
                pub const m_vecOptions: usize = 0x0; // CUtlVector<DecalGroupOption_t>
                pub const m_flTotalProbability: usize = 0x18; // float32
            }
            // Parent: None
            // Field count: 0
            pub mod CNmSnapWeaponTask {
            }
            // Parent: None
            // Field count: 1
            pub mod CPlayerControllerComponent {
                pub const __m_pChainEntity: usize = 0x8; // CNetworkVarChainer
            }
            // Parent: None
            // Field count: 1
            pub mod CResponseQueue {
                pub const m_ExpresserTargets: usize = 0x38; // CUtlVector<CAI_Expresser*>
            }
            // Parent: None
            // Field count: 2
            pub mod CodeGenAABB_t {
                pub const m_vMinBounds: usize = 0x0; // Vector
                pub const m_vMaxBounds: usize = 0xC; // Vector
            }
            // Parent: None
            // Field count: 2
            pub mod CScriptUniformRandomStream {
                pub const m_hScriptScope: usize = 0x8; // HSCRIPT
                pub const m_nInitialSeed: usize = 0x9C; // int32
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod lerpdata_t {
                pub const m_hEnt: usize = 0x0; // CHandle<CBaseEntity>
                pub const m_MoveType: usize = 0x4; // MoveType_t
                pub const m_flStartTime: usize = 0x8; // GameTime_t
                pub const m_vecStartOrigin: usize = 0xC; // VectorWS
                pub const m_qStartRot: usize = 0x20; // Quaternion
                pub const m_nFXIndex: usize = 0x30; // ParticleIndex_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod WrappedPhysicsJoint_t {
                pub const m_pJoint: usize = 0x0; // IPhysicsJoint*
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod SimpleConstraintSoundProfile {
                pub const m_flKeyPointMinSoundThreshold: usize = 0x8; // float32
                pub const m_flKeyPointMaxSoundThreshold: usize = 0xC; // float32
                pub const m_reversalSoundThresholdSmall: usize = 0x10; // float32
                pub const m_reversalSoundThresholdMedium: usize = 0x14; // float32
                pub const m_reversalSoundThresholdLarge: usize = 0x18; // float32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CSimpleSimTimer {
                pub const m_flNext: usize = 0x0; // GameTime_t
                pub const m_nWorldGroupId: usize = 0x4; // WorldGroupId_t
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod AI_BaseNPCAnimGraph_DebugSnapshotData_t {
                pub const e_action_desired: usize = 0x0; // CGlobalSymbol
                pub const e_action_handshake_restart: usize = 0x8; // CGlobalSymbol
                pub const e_action_handshake_body_authority_current: usize = 0x10; // CGlobalSymbol
                pub const e_action_handshake_body_authority_desired: usize = 0x18; // CGlobalSymbol
                pub const e_movement_type_desired: usize = 0x20; // CGlobalSymbol
                pub const e_movement_handshake_restart: usize = 0x28; // CGlobalSymbol
                pub const e_movement_handshake_body_authority_current: usize = 0x30; // CGlobalSymbol
                pub const e_movement_handshake_body_authority_desired: usize = 0x38; // CGlobalSymbol
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPhysicsBodyGameMarkupData {
                pub const m_PhysicsBodyMarkupByBoneName: usize = 0x0; // CUtlDict<CPhysicsBodyGameMarkup>
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod SoundCommand_t {
                pub const m_time: usize = 0x8; // float32
                pub const m_deltaTime: usize = 0xC; // float32
                pub const m_command: usize = 0x10; // soundcommands_t
                pub const m_value: usize = 0x14; // float32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod modifiedconvars_t {
                pub const pszConvar: usize = 0x0; // char[128]
                pub const pszCurrentValue: usize = 0x80; // char[128]
                pub const pszOrgValue: usize = 0x100; // char[128]
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CTestPulseIOComponent_Derived {
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod SAVE_HEADER {
                pub const m_saveId: usize = 0x0; // int32
                pub const m_version: usize = 0x4; // int32
                pub const m_nConnectionCount: usize = 0x8; // int32
                pub const m_nMapVersion: usize = 0xC; // int32
                pub const m_sSpawnGroupName: usize = 0x10; // CUtlString
                pub const m_vecWorldOffset: usize = 0x20; // matrix3x4a_t
                pub const m_flSaveTime: usize = 0x50; // float32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CSkillDamage {
                pub const m_flDamage: usize = 0x0; // CSkillFloat
                pub const m_flNPCDamageScalarVsNPC: usize = 0x10; // float32
                pub const m_flPhysicsForceDamage: usize = 0x14; // float32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod DebugSnapshotBaseStructuredData_t {
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MDebugSnapshotDataSummaryFn
            pub mod AI_DefaultNPC_DebugSnapshotData_t__PathQuery_t {
                pub const m_nInitialMovementId: usize = 0x0; // CGlobalSymbol
                pub const m_nCurrentMovementId: usize = 0x8; // CGlobalSymbol
                pub const m_nMode: usize = 0x10; // CGlobalSymbol
                pub const m_nType: usize = 0x18; // CGlobalSymbol
                pub const m_nState: usize = 0x20; // CGlobalSymbol
            }
            // Parent: None
            // Field count: 0
            pub mod CFloatExponentialMovingAverage {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod physics_save_sphere_t {
                pub const radius: usize = 0x0; // float32
            }
            // Parent: None
            // Field count: 0
            pub mod CAnimGraph2InstancePtr {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod GAME_HEADER {
                pub const m_sComment: usize = 0x0; // CUtlString
                pub const m_nSpawnGroupCount: usize = 0x8; // int32
                pub const m_sLandmark: usize = 0x10; // CUtlString
                pub const m_sRequiredAddons: usize = 0x18; // CUtlString
            }
            // Parent: None
            // Field count: 13
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod AI_BaseNPC_DebugSnapshotData_t {
                pub const npc_state: usize = 0x8; // CGlobalSymbol
                pub const current_enemy: usize = 0x10; // CHandle<CBaseEntity>
                pub const s_current_schedule: usize = 0x18; // CUtlString
                pub const s_current_task: usize = 0x20; // CGlobalSymbol
                pub const s_prev_schedule: usize = 0x28; // CUtlString
                pub const s_npc_current_movement: usize = 0x30; // CUtlString
                pub const s_last_task_end_location: usize = 0x38; // CUtlString
                pub const conditions: usize = 0x40; // CUtlVector<CGlobalSymbol>
                pub const anim_events: usize = 0x58; // CUtlVector<CGlobalSymbol>
                pub const animgraph: usize = 0x70; // AI_BaseNPCAnimGraph_DebugSnapshotData_t
                pub const navigator: usize = 0xB0; // AI_Navigator_DebugSnapshotData_t
                pub const motorServices: usize = 0x100; // AI_MotorServices_DebugSnapshotData_t
                pub const facingServices: usize = 0x130; // AI_FacingServices_DebugSnapshotData_t
            }
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CDebugDrawHistoryData {
                pub const m_hEntity: usize = 0x0; // CHandle<CBaseEntity>
                pub const m_etype: usize = 0x4; // ESceneViewDebugOverlaysListenerDataType_t
                pub const m_vectors: usize = 0x8; // CUtlLeanVector<Vector4D>
                pub const m_colors: usize = 0x18; // CUtlLeanVector<Color>
                pub const m_dimensions: usize = 0x28; // CUtlLeanVector<float32>
                pub const m_times: usize = 0x38; // CUtlLeanVector<float64>
                pub const m_uint64s: usize = 0x48; // CUtlLeanVector<uint64>
                pub const m_bools: usize = 0x58; // CUtlLeanVector<bool>
                pub const m_strings: usize = 0x68; // CUtlLeanVector<CUtlString>
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmEventConsumer {
            }
            // Parent: None
            // Field count: 3
            pub mod CNetworkViewOffsetVector {
                pub const m_vecX: usize = 0x10; // CNetworkedQuantizedFloat
                pub const m_vecY: usize = 0x18; // CNetworkedQuantizedFloat
                pub const m_vecZ: usize = 0x20; // CNetworkedQuantizedFloat
            }
            // Parent: None
            // Field count: 1
            pub mod AmmoIndex_t {
                pub const m_Value: usize = 0x0; // int8
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CDestructiblePartsSystemData {
                pub const m_PartsDataByHitGroup: usize = 0x0; // CUtlOrderedMap<HitGroup_t,CDestructiblePart>
                pub const m_nMinMaxNumberHitGroupsToDestroyWhenGibbing: usize = 0x28; // CRangeInt
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CRopeOverlapHit {
                pub const m_hEntity: usize = 0x0; // CHandle<CBaseEntity>
                pub const m_vecOverlappingLinks: usize = 0x8; // CUtlVector<int32>
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod ResponseContext_t {
                pub const m_iszName: usize = 0x0; // CUtlSymbolLarge
                pub const m_iszValue: usize = 0x8; // CUtlSymbolLarge
                pub const m_fExpirationTime: usize = 0x10; // GameTime_t
            }
            // Parent: None
            // Field count: 1
            pub mod CNavVolumeSphericalShell {
                pub const m_flRadiusInner: usize = 0x88; // float32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPlayerPawnComponent {
                pub const __m_pChainEntity: usize = 0x8; // CNetworkVarChainer
                pub const m_pComponentGraphController: usize = 0x30; // CAnimGraphControllerPtr
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MDebugSnapshotDataRenderFn
            pub mod AI_FacingServices_DebugSnapshotData_t {
                pub const npc_position: usize = 0x0; // VectorWS
                pub const facing_target_source: usize = 0x10; // CGlobalSymbol
                pub const facing_target: usize = 0x18; // VectorWS
                pub const schedule_facing_priority: usize = 0x28; // CGlobalSymbol
                pub const strafing_source: usize = 0x30; // CGlobalSymbol
                pub const strafing_enabled: usize = 0x38; // bool
                pub const movement_id: usize = 0x40; // CGlobalSymbol
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MDebugSnapshotDataRenderFn
            pub mod AI_Navigator_DebugSnapshotData_t {
                pub const s_movement_id: usize = 0x0; // CGlobalSymbol
                pub const s_movement_serial_number: usize = 0x8; // uint32
                pub const s_goal_source_location: usize = 0x10; // CUtlString
                pub const last_waypoint_pos: usize = 0x18; // VectorWS
                pub const goal_location: usize = 0x24; // VectorWS
                pub const waypoints: usize = 0x30; // CUtlVector<AI_Navigator_DebugSnapshotData_t::Waypoint_t>
                pub const s_arrival_movement_gait_set: usize = 0x48; // CGlobalSymbol
            }
            // Parent: None
            // Field count: 27
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CDecalInstance {
                pub const m_sDecalGroup: usize = 0x0; // CGlobalSymbol
                pub const m_hMaterial: usize = 0x8; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_sSequenceName: usize = 0x10; // CUtlStringToken
                pub const m_hEntity: usize = 0x14; // CHandle<CBaseEntity>
                pub const m_nBoneIndex: usize = 0x18; // int32
                pub const m_nTriangleIndex: usize = 0x1C; // int32
                pub const m_vPositionLS: usize = 0x20; // Vector
                pub const m_vPositionOS: usize = 0x2C; // Vector
                pub const m_vNormalLS: usize = 0x38; // Vector
                pub const m_vNormalOS: usize = 0x44; // Vector
                pub const m_vSAxisLS: usize = 0x50; // Vector
                pub const m_nFlags: usize = 0x5C; // DecalFlags_t
                pub const m_Color: usize = 0x60; // Color
                pub const m_flWidth: usize = 0x64; // float32
                pub const m_flHeight: usize = 0x68; // float32
                pub const m_flDepth: usize = 0x6C; // float32
                pub const m_transform: usize = 0x70; // CTransformWS
                pub const m_flAnimationScale: usize = 0x90; // float32
                pub const m_flAnimationStartTime: usize = 0x94; // float32
                pub const m_flPlaceTime: usize = 0x98; // GameTime_t
                pub const m_flFadeStartTime: usize = 0x9C; // float32
                pub const m_flFadeDuration: usize = 0xA0; // float32
                pub const m_flLightingOriginOffset: usize = 0xA4; // float32
                pub const m_flBoundingRadiusSqr: usize = 0xB0; // float32
                pub const m_nSequenceIndex: usize = 0xB4; // int16
                pub const m_bIsAdjacent: usize = 0xB6; // bool
                pub const m_bDoDecalLightmapping: usize = 0xB7; // bool
            }
            // Parent: None
            // Field count: 18
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CGameScriptedMoveData {
                pub const m_vAccumulatedRootMotion: usize = 0x0; // Vector
                pub const m_angAccumulatedRootMotionRotation: usize = 0xC; // QAngle
                pub const m_vSrc: usize = 0x18; // VectorWS
                pub const m_angSrc: usize = 0x24; // QAngle
                pub const m_angCurrent: usize = 0x30; // QAngle
                pub const m_flLockedSpeed: usize = 0x3C; // float32
                pub const m_flAngRate: usize = 0x40; // float32
                pub const m_flDuration: usize = 0x44; // float32
                pub const m_flStartTime: usize = 0x48; // GameTime_t
                pub const m_bActive: usize = 0x4C; // bool
                pub const m_bTeleportOnEnd: usize = 0x4D; // bool
                pub const m_bIgnoreRotation: usize = 0x4E; // bool
                pub const m_bSuccess: usize = 0x4F; // bool
                pub const m_nForcedCrouchState: usize = 0x50; // ForcedCrouchState_t
                pub const m_bIgnoreCollisions: usize = 0x54; // bool
                pub const m_vDest: usize = 0x58; // Vector
                pub const m_angDst: usize = 0x64; // QAngle
                pub const m_hDestEntity: usize = 0x70; // CHandle<CBaseEntity>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CSkeletonAnimationController {
                pub const m_pSkeletonInstance: usize = 0x8; // CSkeletonInstance*
            }
            // Parent: None
            // Field count: 0
            pub mod CNavVolumeMarkupVolume {
            }
            // Parent: None
            // Field count: 2
            pub mod CResponseCriteriaSet {
                pub const m_nNumPrefixedContexts: usize = 0x30; // int32
                pub const m_bOverrideOnAppend: usize = 0x34; // bool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FuncRotatorRotationSummary_t {
                pub const nTick: usize = 0x0; // GameTick_t
                pub const nFlags: usize = 0x4; // FuncRotatorRotationSummaryFlags_t
            }
            // Parent: None
            // Field count: 13
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CAI_Expresser {
                pub const m_conceptCooldowns: usize = 0x10; // CUtlDict<GameTime_t>
                pub const m_ruleCooldowns: usize = 0x38; // CUtlDict<GameTime_t>
                pub const m_flStopTalkTime: usize = 0x60; // GameTime_t
                pub const m_flStopTalkTimeWithoutDelay: usize = 0x64; // GameTime_t
                pub const m_flQueuedSpeechTime: usize = 0x68; // GameTime_t
                pub const m_flBlockedTalkTime: usize = 0x6C; // GameTime_t
                pub const m_voicePitch: usize = 0x70; // int32
                pub const m_flLastTimeAcceptedSpeak: usize = 0x74; // GameTime_t
                pub const m_bAllowSpeakingInterrupts: usize = 0x78; // bool
                pub const m_bConsiderSceneInvolvementAsSpeech: usize = 0x79; // bool
                pub const m_bSceneEntityDisabled: usize = 0x7A; // bool
                pub const m_nLastSpokenPriority: usize = 0x7C; // int32
                pub const m_pOuter: usize = 0x98; // CBaseModelEntity*
            }
            // Parent: None
            // Field count: 0
            pub mod IChoreoServices {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmEventConsumerAttributes {
            }
            // Parent: None
            // Field count: 1
            pub mod CStopwatch {
                pub const m_flInterval: usize = 0xC; // float32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod ResponseParams {
                pub const odds: usize = 0x10; // int16
                pub const flags: usize = 0x12; // int16
                pub const m_pFollowup: usize = 0x18; // ResponseFollowup*
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod SPAWNGROUP_HEADER {
                pub const m_sGroupName: usize = 0x0; // CUtlString
                pub const m_sEntityLumpName: usize = 0x8; // CUtlString
                pub const m_vecWorldOffset: usize = 0x10; // matrix3x4a_t
                pub const m_bClientSpawnGroup: usize = 0x40; // bool
                pub const m_bSuppressAllEntities: usize = 0x41; // bool
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod globalentity_t {
                pub const name: usize = 0x0; // CUtlSymbol
                pub const levelName: usize = 0x2; // CUtlSymbol
                pub const state: usize = 0x4; // GLOBALESTATE
                pub const counter: usize = 0x8; // int32
            }
            // Parent: None
            // Field count: 1
            pub mod CAnimGraphControllerPtr {
                pub const m_pController: usize = 0x0; // CAnimGraphControllerBase*
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod ConstraintSoundInfo {
                pub const m_vSampler: usize = 0x8; // VelocitySampler
                pub const m_soundProfile: usize = 0x20; // SimpleConstraintSoundProfile
                pub const m_forwardAxis: usize = 0x40; // Vector
                pub const m_iszTravelSoundFwd: usize = 0x50; // CUtlSymbolLarge
                pub const m_iszTravelSoundBack: usize = 0x58; // CUtlSymbolLarge
                pub const m_iszReversalSoundSmall: usize = 0x78; // CUtlSymbolLarge
                pub const m_iszReversalSoundMedium: usize = 0x80; // CUtlSymbolLarge
                pub const m_iszReversalSoundLarge: usize = 0x88; // CUtlSymbolLarge
                pub const m_bPlayTravelSound: usize = 0x90; // bool
                pub const m_bPlayReversalSound: usize = 0x91; // bool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPhysicsBodyGameMarkup {
                pub const m_TargetBody: usize = 0x0; // CUtlString
                pub const m_Tag: usize = 0x8; // CGlobalSymbol
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod PointCameraSettings_t {
                pub const m_flNearBlurryDistance: usize = 0x0; // float32
                pub const m_flNearCrispDistance: usize = 0x4; // float32
                pub const m_flFarCrispDistance: usize = 0x8; // float32
                pub const m_flFarBlurryDistance: usize = 0xC; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod DebugDrawBoneTransforms_t {
                pub const vecBones: usize = 0x10; // CUtlVectorFixedGrowable<CTransform,128>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod INavPathCost {
                pub const m_navHull: usize = 0x8; // NavHull_t
            }
            // Parent: None
            // Field count: 0
            pub mod CVectorMovingAverage {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CSoundEnvelope {
                pub const m_current: usize = 0x0; // float32
                pub const m_target: usize = 0x4; // float32
                pub const m_rate: usize = 0x8; // float32
                pub const m_forceupdate: usize = 0xC; // bool
            }
            // Parent: None
            // Field count: 25
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod dynpitchvol_base_t {
                pub const preset: usize = 0x0; // int32
                pub const pitchrun: usize = 0x4; // int32
                pub const pitchstart: usize = 0x8; // int32
                pub const spinup: usize = 0xC; // int32
                pub const spindown: usize = 0x10; // int32
                pub const volrun: usize = 0x14; // int32
                pub const volstart: usize = 0x18; // int32
                pub const fadein: usize = 0x1C; // int32
                pub const fadeout: usize = 0x20; // int32
                pub const lfotype: usize = 0x24; // int32
                pub const lforate: usize = 0x28; // int32
                pub const lfomodpitch: usize = 0x2C; // int32
                pub const lfomodvol: usize = 0x30; // int32
                pub const cspinup: usize = 0x34; // int32
                pub const cspincount: usize = 0x38; // int32
                pub const pitch: usize = 0x3C; // int32
                pub const spinupsav: usize = 0x40; // int32
                pub const spindownsav: usize = 0x44; // int32
                pub const pitchfrac: usize = 0x48; // int32
                pub const vol: usize = 0x4C; // int32
                pub const fadeinsav: usize = 0x50; // int32
                pub const fadeoutsav: usize = 0x54; // int32
                pub const volfrac: usize = 0x58; // int32
                pub const lfofrac: usize = 0x5C; // int32
                pub const lfomult: usize = 0x60; // int32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CStopwatchBase {
                pub const m_bIsRunning: usize = 0x8; // bool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod AI_GroundRootMotionMotor_DebugSnapshotData_t__Event_t {
                pub const description: usize = 0x0; // CUtlString
                pub const location: usize = 0x8; // VectorWS
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CMarkupSearch_PathCostAreaFilter {
                pub const m_searchHelper: usize = 0x8; // CMarkupSearchHelper
            }
            // Parent: None
            // Field count: 1
            pub mod CNavVolumeVector {
                pub const m_bHasBeenPreFiltered: usize = 0x80; // bool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod NavGravity_t {
                pub const m_vGravity: usize = 0x0; // Vector
                pub const m_bDefault: usize = 0xC; // bool
            }
            // Parent: None
            // Field count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod PulseScriptedSequenceData_t {
                pub const m_nActorID: usize = 0x0; // int32
                pub const m_szPreIdleSequence: usize = 0x8; // CUtlString
                pub const m_szEntrySequence: usize = 0x10; // CUtlString
                pub const m_szSequence: usize = 0x18; // CUtlString
                pub const m_szExitSequence: usize = 0x20; // CUtlString
                pub const m_nMoveTo: usize = 0x28; // ScriptedMoveTo_t
                pub const m_nMoveToGait: usize = 0x2C; // SharedMovementGait_t
                pub const m_nHeldWeaponBehavior: usize = 0x30; // ScriptedHeldWeaponBehavior_t
                pub const m_bLoopPreIdleSequence: usize = 0x34; // bool
                pub const m_bLoopActionSequence: usize = 0x35; // bool
                pub const m_bLoopPostIdleSequence: usize = 0x36; // bool
                pub const m_bIgnoreLookAt: usize = 0x37; // bool
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CChoreo_GraphController {
                pub const m_eChoreoState: usize = 0x88; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                pub const m_tChoreoTargetWarp: usize = 0xA0; // CAnimGraph2ParamOptionalRef<CTransform>
                pub const m_tChoreoExitWarp: usize = 0xB8; // CAnimGraph2ParamOptionalRef<CTransform>
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod RotatorQueueEntry_t {
                pub const qTarget: usize = 0x0; // Quaternion
                pub const eSpace: usize = 0x10; // RotatorTargetSpace_t
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CBaseAnimGraphDestructibleParts_GraphController {
            }
            // Parent: None
            // Field count: 1
            pub mod ExternalAnimGraphHandle_t {
                pub const m_Value: usize = 0x0; // uint32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPhysicsShake {
                pub const m_force: usize = 0x8; // Vector
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CInfoChoreoAnchorPosition {
                pub const m_vOriginLS: usize = 0x0; // Vector
                pub const m_qAnglesLS: usize = 0x10; // Quaternion
                pub const m_vExtentsMin: usize = 0x20; // Vector
                pub const m_vExtentsMax: usize = 0x2C; // Vector
                pub const m_flRadius: usize = 0x38; // float32
                pub const m_bOnlyWarpPosition: usize = 0x3C; // bool
                pub const m_hParent: usize = 0x40; // CHandle<CBaseEntity>
                pub const m_nShapeType: usize = 0x44; // CInfoChoreoLocatorShapeType_t
            }
            // Parent: None
            // Field count: 3
            pub mod VelocitySampler {
                pub const m_prevSample: usize = 0x0; // Vector
                pub const m_fPrevSampleTime: usize = 0xC; // GameTime_t
                pub const m_fIdealSampleRate: usize = 0x10; // float32
            }
            // Parent: None
            // Field count: 15
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CTakeDamageResult {
                pub const m_pOriginatingInfo: usize = 0x0; // CTakeDamageInfo*
                pub const m_DestructibleHitGroupRequests: usize = 0x8; // CUtlLeanVector<DestructiblePartDamageRequest_t>
                pub const m_nHealthLost: usize = 0x18; // int32
                pub const m_nHealthBefore: usize = 0x1C; // int32
                pub const m_flDamageDealt: usize = 0x20; // float32
                pub const m_flPreModifiedDamage: usize = 0x24; // float32
                pub const m_vDamagePosition: usize = 0x28; // VectorWS
                pub const m_nTotalledHealthLost: usize = 0x34; // int32
                pub const m_flTotalledDamageDealt: usize = 0x38; // float32
                pub const m_flTotalledPreModifiedDamage: usize = 0x3C; // float32
                pub const m_flNewDamageAccumulatorValue: usize = 0x40; // float32
                pub const m_nDamageFlags: usize = 0x48; // TakeDamageFlags_t
                pub const m_bWasDamageSuppressed: usize = 0x50; // bool
                pub const m_bSuppressFlinch: usize = 0x51; // bool
                pub const m_nOverrideFlinchHitGroup: usize = 0x54; // HitGroup_t
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CMarkupSearchHelper {
                pub const m_navHull: usize = 0x0; // NavHull_t
                pub const m_tagString: usize = 0x8; // CUtlString
                pub const m_nameString: usize = 0x10; // CUtlString
                pub const m_vRefPos: usize = 0x18; // VectorWS
                pub const m_bRefPosSet: usize = 0x24; // bool
                pub const m_bUseStepHeight: usize = 0x25; // bool
                pub const m_bActive: usize = 0x26; // bool
            }
            // Parent: None
            // Field count: 1
            pub mod SceneEventId_t {
                pub const m_Value: usize = 0x0; // uint32
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CCommentarySystem {
                pub const m_bCommentaryEnabledMidGame: usize = 0x12; // bool
                pub const m_flNextTeleportTime: usize = 0x14; // GameTime_t
                pub const m_iTeleportStage: usize = 0x18; // int32
                pub const m_bCheatState: usize = 0x1C; // bool
                pub const m_bIsFirstSpawnGroupToLoad: usize = 0x1D; // bool
                pub const m_ModifiedConvars: usize = 0x20; // CUtlVector<modifiedconvars_t>
                pub const m_hCurrentNode: usize = 0x38; // CHandle<CPointCommentaryNode>
                pub const m_hActiveCommentaryNode: usize = 0x3C; // CHandle<CPointCommentaryNode>
                pub const m_hLastCommentaryNode: usize = 0x40; // CHandle<CPointCommentaryNode>
                pub const m_vecNodes: usize = 0x48; // CUtlVector<CHandle<CPointCommentaryNode>>
            }
            // Parent: None
            // Field count: 8
            pub mod ResponseFollowup {
                pub const followup_concept: usize = 0x0; // char*
                pub const followup_contexts: usize = 0x8; // char*
                pub const followup_delay: usize = 0x10; // float32
                pub const followup_target: usize = 0x14; // char*
                pub const followup_entityiotarget: usize = 0x1C; // char*
                pub const followup_entityioinput: usize = 0x24; // char*
                pub const followup_entityiodelay: usize = 0x2C; // float32
                pub const bFired: usize = 0x30; // bool
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod AmmoTypeInfo_t {
                pub const m_nMaxCarry: usize = 0x10; // int32
                pub const m_nSplashSize: usize = 0x1C; // CRangeInt
                pub const m_nFlags: usize = 0x24; // AmmoFlags_t
                pub const m_flMass: usize = 0x28; // float32
                pub const m_flSpeed: usize = 0x2C; // CRangeFloat
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNetworkTransmitComponent {
                pub const m_nTransmitStateOwnedCounter: usize = 0x184; // uint8
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MDebugSnapshotDataRenderFn
            pub mod AI_MotorServices_DebugSnapshotData_t {
                pub const active_motor: usize = 0x0; // CGlobalSymbol
                pub const desired_speed: usize = 0x8; // float32
                pub const motor_velocity: usize = 0xC; // Vector
                pub const motor_path: usize = 0x18; // CUtlVector<AI_MotorServices_DebugSnapshotData_t::MotorPathWaypoint_t>
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPathQueryUtil {
                pub const m_PathToEntityTransform: usize = 0x10; // CTransform
                pub const m_vecPathSamplePositions: usize = 0x30; // CUtlVector<Vector>
                pub const m_vecPathSampleParameters: usize = 0x48; // CUtlVector<float32>
                pub const m_vecPathSampleDistances: usize = 0x60; // CUtlVector<float32>
                pub const m_bIsClosedLoop: usize = 0x78; // bool
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod RagdollCreationParams_t {
                pub const m_vForce: usize = 0x0; // Vector
                pub const m_nForceBone: usize = 0xC; // int32
                pub const m_bForceCurrentWorldTransform: usize = 0x10; // bool
                pub const m_bUseLRURetirement: usize = 0x11; // bool
                pub const m_nHealthToGrant: usize = 0x14; // int32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CRelativeTransform {
                pub const m_bTransformIsWorldSpace: usize = 0x0; // bool
                pub const m_transform: usize = 0x10; // CTransform
                pub const m_transformWS: usize = 0x30; // CTransformWS
                pub const m_hEntity: usize = 0x50; // CHandle<CBaseEntity>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MPropertyCustomEditor
            pub mod CRangeInt {
                pub const m_pValue: usize = 0x0; // int32[2]
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod globalentitydatabase_t {
                pub const m_list: usize = 0x60; // CUtlVector<globalentity_t>
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmEventConsumerPulse {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNMEventPulseState_t {
                pub const m_eventID: usize = 0x0; // CGlobalSymbol
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CWorldCompositionChunkReferenceElement_t {
                pub const m_strMapToLoad: usize = 0x0; // CUtlString
                pub const m_strLandmarkName: usize = 0x8; // CUtlString
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CRandStopwatch {
                pub const m_flMinInterval: usize = 0xC; // float32
                pub const m_flMaxInterval: usize = 0x10; // float32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CMovementStatsProperty {
                pub const m_nUseCounter: usize = 0x10; // int32
                pub const m_emaMovementDirection: usize = 0x14; // CVectorExponentialMovingAverage
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CGameChoreoServices {
                pub const m_hOwner: usize = 0x8; // CHandle<CBaseModelEntity>
                pub const m_hScriptedSequence: usize = 0xC; // CHandle<CScriptedSequence>
                pub const m_scriptState: usize = 0x10; // IChoreoServices::ScriptState_t
                pub const m_choreoState: usize = 0x14; // IChoreoServices::ChoreoState_t
                pub const m_flTimeStartedState: usize = 0x18; // GameTime_t
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod PhysObjectHeader_t {
                pub const type: usize = 0x0; // PhysInterfaceId_t
                pub const hEntity: usize = 0x4; // CHandle<CBaseEntity>
                pub const fieldName: usize = 0x8; // CUtlSymbolLarge
                pub const bSaveObject: usize = 0x10; // bool
                pub const modelName: usize = 0x18; // CUtlSymbolLarge
                pub const bbox: usize = 0x20; // AABB_t
                pub const sphere: usize = 0x38; // physics_save_sphere_t
                pub const iCollide: usize = 0x3C; // int32
            }
            // Parent: None
            // Field count: 0
            pub mod CSimpleStopwatch {
            }
            // Parent: None
            // Field count: 28
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CShatterGlassShard {
                pub const m_hShardHandle: usize = 0x8; // uint32
                pub const m_vecPanelVertices: usize = 0x10; // CUtlVector<Vector2D>
                pub const m_vLocalPanelSpaceOrigin: usize = 0x28; // Vector2D
                pub const m_hModel: usize = 0x30; // CStrongHandle<InfoForResourceTypeCModel>
                pub const m_hPhysicsEntity: usize = 0x38; // CHandle<CShatterGlassShardPhysics>
                pub const m_hParentPanel: usize = 0x3C; // CHandle<CFuncShatterglass>
                pub const m_hParentShard: usize = 0x40; // uint32
                pub const m_ShatterStressType: usize = 0x44; // ShatterGlassStressType
                pub const m_vecStressVelocity: usize = 0x48; // Vector
                pub const m_bCreatedModel: usize = 0x54; // bool
                pub const m_flLongestEdge: usize = 0x58; // float32
                pub const m_flShortestEdge: usize = 0x5C; // float32
                pub const m_flLongestAcross: usize = 0x60; // float32
                pub const m_flShortestAcross: usize = 0x64; // float32
                pub const m_flSumOfAllEdges: usize = 0x68; // float32
                pub const m_flArea: usize = 0x6C; // float32
                pub const m_nOnFrameEdge: usize = 0x70; // OnFrame
                pub const m_nSubShardGeneration: usize = 0x74; // int32
                pub const m_vecAverageVertPosition: usize = 0x78; // Vector2D
                pub const m_bAverageVertPositionIsValid: usize = 0x80; // bool
                pub const m_vecPanelSpaceStressPositionA: usize = 0x84; // Vector2D
                pub const m_vecPanelSpaceStressPositionB: usize = 0x8C; // Vector2D
                pub const m_bStressPositionAIsValid: usize = 0x94; // bool
                pub const m_bStressPositionBIsValid: usize = 0x95; // bool
                pub const m_bFlaggedForRemoval: usize = 0x96; // bool
                pub const m_flPhysicsEntitySpawnedAtTime: usize = 0x98; // GameTime_t
                pub const m_hEntityHittingMe: usize = 0x9C; // CHandle<CBaseEntity>
                pub const m_vecNeighbors: usize = 0xA0; // CUtlVector<uint32>
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod ragdollelement_t {
                pub const originParentSpace: usize = 0x0; // Vector
                pub const parentIndex: usize = 0x20; // int32
                pub const m_flRadius: usize = 0x24; // float32
                pub const m_nHeight: usize = 0x28; // int32
            }
            // Parent: None
            // Field count: 9
            pub mod CGameScriptedMoveDef_t {
                pub const m_vDestOffset: usize = 0x0; // Vector
                pub const m_hDestEntity: usize = 0xC; // CHandle<CBaseEntity>
                pub const m_angDest: usize = 0x10; // QAngle
                pub const m_flDuration: usize = 0x1C; // float32
                pub const m_flAngRate: usize = 0x20; // float32
                pub const m_flMoveSpeed: usize = 0x24; // float32
                pub const m_bAimDisabled: usize = 0x28; // bool
                pub const m_bIgnoreRotation: usize = 0x29; // bool
                pub const m_nForcedCrouchState: usize = 0x2C; // ForcedCrouchState_t
            }
            // Parent: None
            // Field count: 7
            pub mod CNetworkOriginCellCoordQuantizedVector {
                pub const m_cellX: usize = 0x10; // uint16
                pub const m_cellY: usize = 0x12; // uint16
                pub const m_cellZ: usize = 0x14; // uint16
                pub const m_nOutsideWorld: usize = 0x16; // uint16
                pub const m_vecX: usize = 0x18; // CNetworkedQuantizedFloat
                pub const m_vecY: usize = 0x20; // CNetworkedQuantizedFloat
                pub const m_vecZ: usize = 0x28; // CNetworkedQuantizedFloat
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CBaseAnimGraphVariationUserData {
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod DynamicVolumeDef_t {
                pub const m_source: usize = 0x0; // CHandle<CBaseEntity>
                pub const m_target: usize = 0x4; // CHandle<CBaseEntity>
                pub const m_nHullIdx: usize = 0x8; // int32
                pub const m_vSourceAnchorPos: usize = 0xC; // VectorWS
                pub const m_vTargetAnchorPos: usize = 0x18; // VectorWS
                pub const m_nAreaSrc: usize = 0x24; // uint32
                pub const m_nAreaDst: usize = 0x28; // uint32
                pub const m_bAttached: usize = 0x2C; // bool
            }
            // Parent: None
            // Field count: 3
            pub mod CNetworkOriginQuantizedVector {
                pub const m_vecX: usize = 0x10; // CNetworkedQuantizedFloat
                pub const m_vecY: usize = 0x18; // CNetworkedQuantizedFloat
                pub const m_vecZ: usize = 0x20; // CNetworkedQuantizedFloat
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod magnetted_objects_t {
                pub const hEntity: usize = 0x8; // CHandle<CBaseEntity>
            }
            // Parent: None
            // Field count: 3
            pub mod CHintMessageQueue {
                pub const m_tmMessageEnd: usize = 0x0; // float32
                pub const m_messages: usize = 0x8; // CUtlVector<CHintMessage*>
                pub const m_pPlayerController: usize = 0x20; // CBasePlayerController*
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MPropertyCustomEditor
            pub mod CSkillInt {
                pub const m_pValue: usize = 0x0; // int32[4]
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod thinkfunc_t {
                pub const m_think: usize = 0x0; // BASEPTR
                pub const m_hFn: usize = 0x8; // HSCRIPT
                pub const m_nContext: usize = 0x10; // CUtlStringToken
                pub const m_nNextThinkTick: usize = 0x14; // GameTick_t
                pub const m_nLastThinkTick: usize = 0x18; // GameTick_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNavHullPresetVData {
                pub const m_vecNavHulls: usize = 0x0; // CUtlVector<CUtlString>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MPropertyCustomEditor
            pub mod CSkillFloat {
                pub const m_pValue: usize = 0x0; // float32[4]
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod WaterWheelFrictionScale_t {
                pub const m_flFractionOfWheelSubmerged: usize = 0x0; // float32
                pub const m_flFrictionScale: usize = 0x4; // float32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod ragdollhierarchyjoint_t {
                pub const parentIndex: usize = 0x0; // int32
                pub const childIndex: usize = 0x4; // int32
            }
            // Parent: None
            // Field count: 20
            pub mod CSceneEventInfo {
                pub const m_iLayer: usize = 0x0; // int32
                pub const m_iPriority: usize = 0x4; // int32
                pub const m_hSequence: usize = 0x8; // HSequence
                pub const m_flWeight: usize = 0xC; // float32
                pub const m_flLastAccumulatedTime: usize = 0x10; // float32
                pub const m_flLastJumpFromTime: usize = 0x14; // float32
                pub const m_flLastJumpToTime: usize = 0x18; // float32
                pub const m_flLastCycle: usize = 0x1C; // float32
                pub const m_hAnimClip: usize = 0x20; // CStrongHandle<InfoForResourceTypeCNmClip>
                pub const m_sAnimClipSlot: usize = 0x28; // CGlobalSymbol
                pub const m_sAnimClipSlotWeight: usize = 0x30; // CGlobalSymbol
                pub const m_bHasArrived: usize = 0x38; // bool
                pub const m_nType: usize = 0x3C; // int32
                pub const m_flNext: usize = 0x40; // GameTime_t
                pub const m_bIsGesture: usize = 0x44; // bool
                pub const m_bShouldRemove: usize = 0x45; // bool
                pub const m_hTarget: usize = 0x6C; // CHandle<CBaseEntity>
                pub const m_nSceneEventId: usize = 0x70; // SceneEventId_t
                pub const m_bClientSide: usize = 0x74; // bool
                pub const m_bStarted: usize = 0x75; // bool
            }
            // Parent: None
            // Field count: 5
            pub mod SoundeventPathCornerPairNetworked_t {
                pub const vP1: usize = 0x0; // VectorWS
                pub const vP2: usize = 0xC; // VectorWS
                pub const flPathLengthSqr: usize = 0x18; // float32
                pub const flP1Pct: usize = 0x1C; // float32
                pub const flP2Pct: usize = 0x20; // float32
            }
            // Parent: None
            // Field count: 13
            pub mod CSoundPatch {
                pub const m_pitch: usize = 0x8; // CSoundEnvelope
                pub const m_volume: usize = 0x18; // CSoundEnvelope
                pub const m_shutdownTime: usize = 0x3C; // float32
                pub const m_flLastTime: usize = 0x40; // float32
                pub const m_iszSoundScriptName: usize = 0x48; // CUtlSymbolLarge
                pub const m_hEnt: usize = 0x50; // CHandle<CBaseEntity>
                pub const m_soundEntityIndex: usize = 0x54; // CEntityIndex
                pub const m_soundOrigin: usize = 0x58; // VectorWS
                pub const m_isPlaying: usize = 0x64; // int32
                pub const m_Filter: usize = 0x68; // CCopyRecipientFilter
                pub const m_flCloseCaptionDuration: usize = 0xA0; // float32
                pub const m_bUpdatedSoundOrigin: usize = 0xA4; // bool
                pub const m_iszClassName: usize = 0xA8; // CUtlSymbolLarge
            }
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CCS2ChickenGraphController {
                pub const m_action: usize = 0x88; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                pub const m_bActionReset: usize = 0xA0; // CAnimGraph2ParamAutoResetOptionalRef
                pub const m_idleVariation: usize = 0xC0; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_runVariation: usize = 0xD8; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_panicVariation: usize = 0xF0; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_squatVariation: usize = 0x108; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_bInWater: usize = 0x120; // CAnimGraph2ParamOptionalRef<bool>
                pub const m_bHasActionCompletedEvent: usize = 0x138; // bool
                pub const m_bWaitingForCompletedEvent: usize = 0x139; // bool
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod levellist_t {
                pub const m_sMapName: usize = 0x0; // CUtlString
                pub const m_sLandmarkName: usize = 0x8; // CUtlString
                pub const m_hEntLandmark: usize = 0x10; // CEntityHandle
                pub const m_vecLandmarkOrigin: usize = 0x14; // VectorWS
                pub const m_vecLandmarkAngles: usize = 0x20; // QAngle
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod locksound_t {
                pub const sLockedSound: usize = 0x8; // CGameSoundEventName
                pub const sUnlockedSound: usize = 0x10; // CGameSoundEventName
                pub const flwaitSound: usize = 0x18; // GameTime_t
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod DecalGroupOption_t {
                pub const m_hMaterial: usize = 0x0; // CStrongHandleCopyable<InfoForResourceTypeIMaterial2>
                pub const m_sSequenceName: usize = 0x8; // CGlobalSymbol
                pub const m_flProbability: usize = 0x10; // float32
                pub const m_bEnableAngleBetweenNormalAndGravityRange: usize = 0x14; // bool
                pub const m_flMinAngleBetweenNormalAndGravity: usize = 0x18; // float32
                pub const m_flMaxAngleBetweenNormalAndGravity: usize = 0x1C; // float32
            }
            // Parent: None
            // Field count: 0
            pub mod CBtNode {
            }
            // Parent: None
            // Field count: 2
            pub mod CAnimGraphControllerManager {
                pub const m_controllers: usize = 0x0; // CUtlVector<CAnimGraphControllerBase*>
                pub const m_bGraphBindingsCreated: usize = 0x90; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MPropertyCustomEditor
            pub mod CFiringModeFloat {
                pub const m_flValues: usize = 0x0; // float32[2]
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CCopyRecipientFilter {
                pub const m_Flags: usize = 0x8; // int32
                pub const m_Recipients: usize = 0x10; // CUtlVector<CPlayerSlot>
                pub const m_slotPlayerExcludedDueToPrediction: usize = 0x30; // CPlayerSlot
            }
            // Parent: None
            // Field count: 0
            pub mod CFloatMovingAverage {
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FuncMoverMovementSummary_t {
                pub const flStartT: usize = 0x0; // float32
                pub const flEndT: usize = 0x4; // float32
                pub const nStartNodeIndex: usize = 0x8; // int32
                pub const nStopNodeIndex: usize = 0xC; // int32
                pub const nMovementMode: usize = 0x10; // int32
                pub const nFlags: usize = 0x14; // FuncMoverMovementSummaryFlags_t
                pub const nTick: usize = 0x18; // GameTick_t
                pub const hPathMover: usize = 0x1C; // CHandle<CPathMover>
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CSmoothFunc {
                pub const m_flSmoothAmplitude: usize = 0x8; // float32
                pub const m_flSmoothBias: usize = 0xC; // float32
                pub const m_flSmoothDuration: usize = 0x10; // float32
                pub const m_flSmoothRemainingTime: usize = 0x14; // float32
                pub const m_nSmoothDir: usize = 0x18; // int32
            }
            // Parent: None
            // Field count: 0
            pub mod IHasAttributes {
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod ragdoll_t {
                pub const list: usize = 0x0; // CUtlVector<ragdollelement_t>
                pub const hierarchyJoints: usize = 0x18; // CUtlVector<ragdollhierarchyjoint_t>
                pub const boneIndex: usize = 0x30; // CUtlVector<int32>
                pub const allowStretch: usize = 0x48; // bool
                pub const unused: usize = 0x49; // bool
            }
            // Parent: None
            // Field count: 10
            pub mod HullFlags_t {
                pub const m_bHull_Human: usize = 0x0; // bool
                pub const m_bHull_SmallCentered: usize = 0x1; // bool
                pub const m_bHull_WideHuman: usize = 0x2; // bool
                pub const m_bHull_Tiny: usize = 0x3; // bool
                pub const m_bHull_Medium: usize = 0x4; // bool
                pub const m_bHull_TinyCentered: usize = 0x5; // bool
                pub const m_bHull_Large: usize = 0x6; // bool
                pub const m_bHull_LargeCentered: usize = 0x7; // bool
                pub const m_bHull_MediumTall: usize = 0x8; // bool
                pub const m_bHull_Small: usize = 0x9; // bool
            }
            // Parent: None
            // Field count: 1
            pub mod CNavFlags {
                pub const m_Flags: usize = 0x0; // uint64
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod ISkeletonAnimationController {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod RotatorHistoryEntry_t {
                pub const qInvChange: usize = 0x0; // Quaternion
                pub const flTimeRotationStart: usize = 0x10; // GameTime_t
            }
            // Parent: None
            // Field count: 3
            pub mod CNetworkOriginQuantizedVectorWS {
                pub const m_vecX: usize = 0x10; // CNetworkedQuantizedFloat
                pub const m_vecY: usize = 0x18; // CNetworkedQuantizedFloat
                pub const m_vecZ: usize = 0x20; // CNetworkedQuantizedFloat
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod GameAmmoTypeInfo_t {
                pub const m_nBuySize: usize = 0x38; // int32
                pub const m_nCost: usize = 0x3C; // int32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CMotorController {
                pub const m_speed: usize = 0x8; // float32
                pub const m_maxTorque: usize = 0xC; // float32
                pub const m_axis: usize = 0x10; // Vector
                pub const m_inertiaFactor: usize = 0x1C; // float32
            }
            // Parent: None
            // Field count: 1
            pub mod CSimTimer {
                pub const m_flInterval: usize = 0x8; // float32
            }
            // Parent: None
            // Field count: 6
            pub mod CBaseIssue {
                pub const m_szTypeString: usize = 0x20; // char[64]
                pub const m_szDetailsString: usize = 0x60; // char[260]
                pub const m_iNumYesVotes: usize = 0x164; // int32
                pub const m_iNumNoVotes: usize = 0x168; // int32
                pub const m_iNumPotentialVotes: usize = 0x16C; // int32
                pub const m_pVoteController: usize = 0x170; // CVoteController*
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod SummaryTakeDamageInfo_t {
                pub const nSummarisedCount: usize = 0x0; // int32
                pub const info: usize = 0x8; // CTakeDamageInfo
                pub const result: usize = 0x120; // CTakeDamageResult
                pub const hTarget: usize = 0x180; // CHandle<CBaseEntity>
            }
            // Parent: None
            // Field count: 1
            pub mod INavObstacle {
                pub const m_nId: usize = 0x8; // uint64
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod entitytable_t {
                pub const id: usize = 0x0; // int32
                pub const edictindex: usize = 0x4; // CEntityIndex
                pub const saveentityindex: usize = 0x8; // CEntityIndex
                pub const bWasSaved: usize = 0x14; // bool
                pub const flags: usize = 0x18; // SaveRestoreTableFlags_t
                pub const classname: usize = 0x20; // CUtlSymbolLarge
                pub const globalname: usize = 0x28; // CUtlSymbolLarge
                pub const entityname: usize = 0x30; // CUtlSymbolLarge
                pub const landmarkModelSpace: usize = 0x38; // Vector
                pub const m_pPrecacheEntityKeys: usize = 0x48; // CEntityKeyValues*
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod AI_MotorServices_DebugSnapshotData_t__MotorPathWaypoint_t {
                pub const position: usize = 0x0; // VectorWS
                pub const nav_type: usize = 0xC; // uint32
                pub const flags: usize = 0x10; // uint32
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CRR_Response {
                pub const m_Type: usize = 0x0; // uint8
                pub const m_szResponseName: usize = 0x1; // char[192]
                pub const m_szMatchingRule: usize = 0xC1; // char[128]
                pub const m_Params: usize = 0x160; // ResponseParams
                pub const m_fMatchScore: usize = 0x180; // float32
                pub const m_bAnyMatchingRulesInCooldown: usize = 0x184; // bool
                pub const m_szSpeakerContext: usize = 0x188; // char*
                pub const m_szWorldContext: usize = 0x190; // char*
                pub const m_Followup: usize = 0x198; // ResponseFollowup
                pub const m_recipientFilter: usize = 0x1CA; // CUtlSymbol
            }
            // Parent: None
            // Field count: 0
            pub mod CVectorExponentialMovingAverage {
            }
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmAimCSNode__CDefinition {
                pub const m_nVerticalAngleNodeIdx: usize = 0x18; // int16
                pub const m_nHorizontalAngleNodeIdx: usize = 0x1A; // int16
                pub const m_nWeaponCategoryNodeIdx: usize = 0x1C; // int16
                pub const m_nWeaponTypeNodeIdx: usize = 0x1E; // int16
                pub const m_nWeaponActionNodeIdx: usize = 0x20; // int16
                pub const m_nWeaponDropNodeIdx: usize = 0x22; // int16
                pub const m_nIsDefusingNodeIdx: usize = 0x24; // int16
                pub const m_nCrouchWeightNodeIdx: usize = 0x26; // int16
                pub const m_flHandIKBlendInTimeSeconds: usize = 0x28; // float32
                pub const m_flActionBlendTimeSeconds: usize = 0x2C; // float32
                pub const m_flPlantingBlendTimeSeconds: usize = 0x30; // float32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CConstantForceController {
                pub const m_linear: usize = 0xC; // Vector
                pub const m_angular: usize = 0x18; // RotationVector
                pub const m_linearSave: usize = 0x24; // Vector
                pub const m_angularSave: usize = 0x30; // RotationVector
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod WaterWheelDrag_t {
                pub const m_flFractionOfWheelSubmerged: usize = 0x0; // float32
                pub const m_flWheelDrag: usize = 0x4; // float32
            }
            // Parent: None
            // Field count: 22
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CTakeDamageInfo {
                pub const m_vecDamageForce: usize = 0x8; // Vector
                pub const m_vecDamagePosition: usize = 0x14; // VectorWS
                pub const m_vecReportedPosition: usize = 0x20; // VectorWS
                pub const m_vecDamageDirection: usize = 0x2C; // Vector
                pub const m_hInflictor: usize = 0x38; // CHandle<CBaseEntity>
                pub const m_hAttacker: usize = 0x3C; // CHandle<CBaseEntity>
                pub const m_hAbility: usize = 0x40; // CHandle<CBaseEntity>
                pub const m_flDamage: usize = 0x44; // float32
                pub const m_flTotalledDamage: usize = 0x48; // float32
                pub const m_bitsDamageType: usize = 0x4C; // DamageTypes_t
                pub const m_iDamageCustom: usize = 0x50; // int32
                pub const m_iAmmoType: usize = 0x54; // AmmoIndex_t
                pub const m_flOriginalDamage: usize = 0x60; // float32
                pub const m_bShouldBleed: usize = 0x64; // bool
                pub const m_bShouldSpark: usize = 0x65; // bool
                pub const m_nDamageFlags: usize = 0x70; // TakeDamageFlags_t
                pub const m_iHitGroupId: usize = 0x78; // HitGroup_t
                pub const m_nNumObjectsPenetrated: usize = 0x7C; // int32
                pub const m_flFriendlyFireDamageReductionRatio: usize = 0x80; // float32
                pub const m_bStoppedBullet: usize = 0x84; // bool
                pub const m_DestructibleHitGroupRequests: usize = 0x100; // CUtlLeanVector<DestructiblePartDamageRequest_t>
                pub const m_bInTakeDamageFlow: usize = 0x110; // bool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CRandSimTimer {
                pub const m_flMinInterval: usize = 0x8; // float32
                pub const m_flMaxInterval: usize = 0xC; // float32
            }
            // Parent: None
            // Field count: 0
            pub mod CBtNodeComposite {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CRelativeLocation {
                pub const m_Type: usize = 0x18; // RelativeLocationType_t
                pub const m_vRelativeOffset: usize = 0x1C; // Vector
                pub const m_vWorldSpacePos: usize = 0x28; // VectorWS
                pub const m_hEntity: usize = 0x34; // CHandle<CBaseEntity>
            }
            // Parent: None
            // Field count: 2
            pub mod Extent {
                pub const lo: usize = 0x0; // VectorWS
                pub const hi: usize = 0xC; // VectorWS
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod sndopvarlatchdata_t {
                pub const m_iszStack: usize = 0x8; // CUtlSymbolLarge
                pub const m_iszOperator: usize = 0x10; // CUtlSymbolLarge
                pub const m_iszOpvar: usize = 0x18; // CUtlSymbolLarge
                pub const m_flVal: usize = 0x20; // float32
                pub const m_vPos: usize = 0x24; // VectorWS
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod PrecipitationFilter_t {
                pub const m_flMaxRadius: usize = 0x0; // float32
            }
            // Parent: None
            // Field count: 0
            pub mod IEconItemInterface {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod PathMoverEntitySpawn {
                pub const hMover: usize = 0x0; // CHandle<CFuncMover>
                pub const vecOtherEntities: usize = 0x8; // CUtlVector<CHandle<CBaseEntity>>
            }
            // Parent: None
            // Field count: 1
            pub mod CMultiplayer_Expresser {
                pub const m_bAllowMultipleScenes: usize = 0xA0; // bool
            }
            // Parent: None
            // Field count: 0
            pub mod CNavVolume {
            }
            // Parent: None
            // Field count: 0
            pub mod QuestProgress {
            }
            // Parent: None
            // Field count: 0
            pub mod CExternalAnimGraphList {
            }
            // Parent: None
            // Field count: 0
            pub mod CNmAimCSTask {
            }
            // Parent: None
            // Field count: 1
            pub mod ParticleIndex_t {
                pub const m_Value: usize = 0x0; // int32
            }
            // Parent: None
            // Field count: 0
            pub mod CAI_ExpresserWithFollowup {
            }
            // Parent: None
            // Field count: 1
            pub mod CTakeDamageSummaryScopeGuard {
                pub const m_vecSummaries: usize = 0x8; // CUtlVector<SummaryTakeDamageInfo_t*>
            }
            // Parent: None
            // Field count: 4
            pub mod CIronSightController {
                pub const m_bIronSightAvailable: usize = 0x8; // bool
                pub const m_flIronSightAmount: usize = 0xC; // float32
                pub const m_flIronSightAmountGained: usize = 0x10; // float32
                pub const m_flIronSightAmountBiased: usize = 0x14; // float32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod INavPathCostAreaFilter {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmEventConsumerSound {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmEventConsumerLegacy {
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod DestructiblePartDamageRequest_t {
                pub const m_nHitGroup: usize = 0x0; // HitGroup_t
                pub const m_nDamageLevel: usize = 0x4; // int32
                pub const m_nDesiredHealth: usize = 0x8; // uint16
                pub const m_nDestroyFlags: usize = 0xC; // EDestructibleParts_DestroyParameterFlags
                pub const m_nDamageType: usize = 0x10; // DamageTypes_t
                pub const m_flBreakDamage: usize = 0x14; // float32
                pub const m_flBreakDamageRadius: usize = 0x18; // float32
                pub const m_hAttacker: usize = 0x1C; // CHandle<CBaseEntity>
                pub const m_vWsBreakDamageOrigin: usize = 0x20; // VectorWS
                pub const m_vWsBreakDamageForce: usize = 0x2C; // Vector
            }
            // Parent: None
            // Field count: 1
            pub mod CInButtonState {
                pub const m_pButtonStates: usize = 0x8; // uint64[3]
            }
            // Parent: None
            // Field count: 7
            pub mod CNetworkOriginCellCoordQuantizedVectorWS {
                pub const m_cellX: usize = 0x10; // uint16
                pub const m_cellY: usize = 0x12; // uint16
                pub const m_cellZ: usize = 0x14; // uint16
                pub const m_nOutsideWorld: usize = 0x16; // uint16
                pub const m_vecX: usize = 0x18; // CNetworkedQuantizedFloat
                pub const m_vecY: usize = 0x20; // CNetworkedQuantizedFloat
                pub const m_vecZ: usize = 0x28; // CNetworkedQuantizedFloat
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmEventConsumerParticle {
            }
            // Parent: None
            // Field count: 15
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNavHullVData {
                pub const m_bAgentEnabled: usize = 0x0; // bool
                pub const m_agentRadius: usize = 0x4; // float32
                pub const m_agentHeight: usize = 0x8; // float32
                pub const m_agentShortHeightEnabled: usize = 0xC; // bool
                pub const m_agentShortHeight: usize = 0x10; // float32
                pub const m_agentCrawlEnabled: usize = 0x14; // bool
                pub const m_agentCrawlHeight: usize = 0x18; // float32
                pub const m_agentMaxClimb: usize = 0x1C; // float32
                pub const m_agentMaxSlope: usize = 0x20; // int32
                pub const m_agentMaxJumpDownDist: usize = 0x24; // float32
                pub const m_agentMaxJumpHorizDistBase: usize = 0x28; // float32
                pub const m_agentMaxJumpUpDist: usize = 0x2C; // float32
                pub const m_agentBorderErosion: usize = 0x30; // int32
                pub const m_flowMapGenerationEnabled: usize = 0x34; // bool
                pub const m_flowMapNodeMaxRadius: usize = 0x38; // float32
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod AI_DefaultNPC_DebugSnapshotData_t {
                pub const s_npc_current_ability: usize = 0x8; // CGlobalSymbol
                pub const s_npc_tactic_current: usize = 0x10; // CGlobalSymbol
                pub const s_npc_tactic_phase: usize = 0x18; // CGlobalSymbol
                pub const tactic_interrupt_conditions: usize = 0x20; // CUtlVector<CGlobalSymbol>
                pub const path_query: usize = 0x38; // AI_DefaultNPC_DebugSnapshotData_t::PathQuery_t
                pub const path_queries_speculative: usize = 0x60; // CUtlVector<AI_DefaultNPC_DebugSnapshotData_t::PathQuery_t>
            }
            // Parent: None
            // Field count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNavPathCost {
                pub const m_bAllowLadders: usize = 0x10; // bool
                pub const m_bCanFly: usize = 0x11; // bool
                pub const m_bCanSwim: usize = 0x12; // bool
                pub const m_flWaterToGroundMaxHeight: usize = 0x14; // float32
                pub const m_flGroundToWaterMaxHeight: usize = 0x18; // float32
                pub const m_flGroundToWaterTransitionDistance: usize = 0x1C; // float32
                pub const m_flWaterToGroundTransitionDistance: usize = 0x20; // float32
                pub const m_flFlyingTransitionTolerance: usize = 0x24; // float32
                pub const m_bOptimizeFlySpacePathfinds: usize = 0x28; // bool
                pub const m_bStringPullFlySpacePathfinds: usize = 0x29; // bool
                pub const m_bSupportsTransitions: usize = 0x2A; // bool
                pub const m_flTransitionPenalty: usize = 0x2C; // float32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmSnapWeaponNode__CDefinition {
                pub const m_nFlashedAmountNodeIdx: usize = 0x18; // int16
                pub const m_nWeaponCategoryNodeIdx: usize = 0x1A; // int16
                pub const m_nWeaponTypeNodeIdx: usize = 0x1C; // int16
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod SoundOpvarTraceResult_t {
                pub const vPos: usize = 0x0; // VectorWS
                pub const bDidHit: usize = 0xC; // bool
                pub const flDistSqrToCenter: usize = 0x10; // float32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod ActorMapping_t {
                pub const m_sActorName: usize = 0x0; // CUtlString
                pub const m_hEntity: usize = 0x8; // CHandle<CBaseEntity>
            }
            // Parent: None
            // Field count: 0
            pub mod CNavVolumeCalculatedVector {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MPropertyCustomEditor
            pub mod CFiringModeInt {
                pub const m_nValues: usize = 0x0; // int32[2]
            }
            // Parent: None
            // Field count: 0
            pub mod CBtNodeDecorator {
            }
            // Parent: None
            // Field count: 12
            pub mod CSAdditionalPerRoundStats_t {
                pub const m_numChickensKilled: usize = 0x0; // int32
                pub const m_killsWhileBlind: usize = 0x4; // int32
                pub const m_bombCarrierkills: usize = 0x8; // int32
                pub const m_flBurnDamageInflicted: usize = 0xC; // float32
                pub const m_flBlastDamageInflicted: usize = 0x10; // float32
                pub const m_iDinks: usize = 0x14; // int32
                pub const m_bFreshStartThisRound: usize = 0x18; // bool
                pub const m_bBombPlantedAndAlive: usize = 0x19; // bool
                pub const m_nDefuseStarts: usize = 0x1C; // int32
                pub const m_nHostagePickUps: usize = 0x20; // int32
                pub const m_numTeammatesFlashed: usize = 0x24; // int32
                pub const m_strAnnotationsWorkshopId: usize = 0x28; // CUtlString
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CEmptyGraphController {
            }
            // Parent: None
            // Field count: 1
            pub mod ModelConfigHandle_t {
                pub const m_Value: usize = 0x0; // uint32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MVDataNodeType
            // MVDataOverlayType
            pub mod CEntitySubclassVDataBase {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CBreakableStageHelper {
                pub const m_nCurrentStage: usize = 0x8; // int32
                pub const m_nStageCount: usize = 0xC; // int32
            }
            // Parent: None
            // Field count: 2
            pub mod CNavVolumeBreadthFirstSearch {
                pub const m_vStartPos: usize = 0xA8; // VectorWS
                pub const m_flSearchDist: usize = 0xB4; // float32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod dynpitchvol_t {
            }
            // Parent: None
            // Field count: 12
            pub mod CSAdditionalMatchStats_t {
                pub const m_numRoundsSurvivedStreak: usize = 0xF8; // int32
                pub const m_maxNumRoundsSurvivedStreak: usize = 0xFC; // int32
                pub const m_numRoundsSurvivedTotal: usize = 0x100; // int32
                pub const m_iRoundsWonWithoutPurchase: usize = 0x104; // int32
                pub const m_iRoundsWonWithoutPurchaseTotal: usize = 0x108; // int32
                pub const m_numFirstKills: usize = 0x10C; // int32
                pub const m_numClutchKills: usize = 0x110; // int32
                pub const m_numPistolKills: usize = 0x114; // int32
                pub const m_numSniperKills: usize = 0x118; // int32
                pub const m_iNumSuicides: usize = 0x11C; // int32
                pub const m_iNumTeamKills: usize = 0x120; // int32
                pub const m_flTeamDamage: usize = 0x124; // float32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod AI_Navigator_DebugSnapshotData_t__Waypoint_t {
                pub const position: usize = 0x0; // VectorWS
                pub const nav_type: usize = 0xC; // uint32
                pub const flags: usize = 0x10; // uint32
                pub const is_pathcorner: usize = 0x14; // bool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CTestPulseIOComponent {
                pub const m_ComponentData: usize = 0x8; // CUtlString
                pub const m_OnComponentTestFunc: usize = 0x10; // CEntityOutputTemplate<CUtlSymbolLarge>
            }
            // Parent: None
            // Field count: 0
            pub mod IRagdoll {
            }
            // Parent: None
            // Field count: 16
            pub mod CCSPlayerAnimationState {
                pub const m_currentMoveType: usize = 0x18; // CCSPlayerAnimationState::MoveType_t
                pub const m_groundMoveState: usize = 0x19; // CCSPlayerAnimationState::GroundMoveState_t
                pub const m_groundActionDirection: usize = 0x1A; // CCSPlayerAnimationState::Direction_t
                pub const m_airAction: usize = 0x1B; // CCSPlayerAnimationState::AirAction_t
                pub const m_bWasOnGroundLastUpdate: usize = 0x1C; // bool
                pub const m_bWasStationaryLastUpdate: usize = 0x1D; // bool
                pub const m_actionStartTick: usize = 0x20; // GameTick_t
                pub const m_staticAimTimerStartTick: usize = 0x24; // GameTick_t
                pub const m_plantAndTurnStartTick: usize = 0x28; // GameTick_t
                pub const m_flTurnOnSpotAngle: usize = 0x2C; // float32
                pub const m_flPreviousAimYaw: usize = 0x30; // float32
                pub const m_flPreviousHorizontalSpeed: usize = 0x34; // float32
                pub const m_flFootIKOffsetLeft: usize = 0x38; // float32
                pub const m_flFootIKOffsetRight: usize = 0x3C; // float32
                pub const m_flWeaponDropPercentageDueToMovement: usize = 0x40; // float32
                pub const m_flWeaponDropSmoothDampVelocity: usize = 0x44; // float32
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod hudtextparms_t {
                pub const color1: usize = 0x0; // Color
                pub const color2: usize = 0x4; // Color
                pub const effect: usize = 0x8; // uint8
                pub const channel: usize = 0x9; // uint8
                pub const x: usize = 0xC; // float32
                pub const y: usize = 0x10; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CAnimGraphControllerBase {
                pub const m_hExternalGraph: usize = 0x10; // ExternalAnimGraphHandle_t
            }
            // Parent: None
            // Field count: 3
            pub mod CNetworkVelocityVector {
                pub const m_vecX: usize = 0x10; // CNetworkedQuantizedFloat
                pub const m_vecY: usize = 0x18; // CNetworkedQuantizedFloat
                pub const m_vecZ: usize = 0x20; // CNetworkedQuantizedFloat
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CDestructiblePart_DamageLevel {
                pub const m_sName: usize = 0x0; // CUtlString
                pub const m_sBreakablePieceName: usize = 0x8; // CGlobalSymbol
                pub const m_nBodyGroupValue: usize = 0x10; // int32
                pub const m_nHealth: usize = 0x14; // CSkillInt
                pub const m_flCriticalDamagePercent: usize = 0x24; // float32
                pub const m_nDamagePassthroughType: usize = 0x28; // EDestructiblePartDamagePassThroughType
                pub const m_nDestructionDeathBehavior: usize = 0x2C; // DestructiblePartDestructionDeathBehavior_t
                pub const m_sCustomDeathHandshake: usize = 0x30; // CGlobalSymbol
                pub const m_bShouldDestroyOnDeath: usize = 0x38; // bool
                pub const m_flDeathDestroyTime: usize = 0x3C; // CRangeFloat
            }
            // Parent: None
            // Field count: 0
            pub mod CNavVolumeAll {
            }
            // Parent: None
            // Field count: 2
            pub mod CNavVolumeSphere {
                pub const m_vCenter: usize = 0x78; // VectorWS
                pub const m_flRadius: usize = 0x84; // float32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod Relationship_t {
                pub const disposition: usize = 0x0; // Disposition_t
                pub const priority: usize = 0x4; // int32
            }
        }
    }
}
