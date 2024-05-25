// Generated using https://github.com/a2x/cs2-dumper
// 2024-05-25 01:48:22.657979400 UTC

namespace CS2Dumper.Schemas {
    // Module: client.dll
    // Classes count: 423
    // Enums count: 7
    public static class ClientDll {
        // Alignment: 4
        // Members count: 15
        public enum CompositeMaterialInputLooseVariableType_t : uint {
            LOOSE_VARIABLE_TYPE_BOOLEAN = 0x0,
            LOOSE_VARIABLE_TYPE_INTEGER1 = 0x1,
            LOOSE_VARIABLE_TYPE_INTEGER2 = 0x2,
            LOOSE_VARIABLE_TYPE_INTEGER3 = 0x3,
            LOOSE_VARIABLE_TYPE_INTEGER4 = 0x4,
            LOOSE_VARIABLE_TYPE_FLOAT1 = 0x5,
            LOOSE_VARIABLE_TYPE_FLOAT2 = 0x6,
            LOOSE_VARIABLE_TYPE_FLOAT3 = 0x7,
            LOOSE_VARIABLE_TYPE_FLOAT4 = 0x8,
            LOOSE_VARIABLE_TYPE_COLOR4 = 0x9,
            LOOSE_VARIABLE_TYPE_STRING = 0xA,
            LOOSE_VARIABLE_TYPE_SYSTEMVAR = 0xB,
            LOOSE_VARIABLE_TYPE_RESOURCE_MATERIAL = 0xC,
            LOOSE_VARIABLE_TYPE_RESOURCE_TEXTURE = 0xD,
            LOOSE_VARIABLE_TYPE_PANORAMA_RENDER = 0xE
        }
        // Alignment: 4
        // Members count: 7
        public enum CompositeMaterialInputTextureType_t : uint {
            INPUT_TEXTURE_TYPE_DEFAULT = 0x0,
            INPUT_TEXTURE_TYPE_NORMALMAP = 0x1,
            INPUT_TEXTURE_TYPE_COLOR = 0x2,
            INPUT_TEXTURE_TYPE_MASKS = 0x3,
            INPUT_TEXTURE_TYPE_ROUGHNESS = 0x4,
            INPUT_TEXTURE_TYPE_PEARLESCENCE_MASK = 0x5,
            INPUT_TEXTURE_TYPE_AO = 0x6
        }
        // Alignment: 4
        // Members count: 6
        public enum CompositeMaterialInputContainerSourceType_t : uint {
            CONTAINER_SOURCE_TYPE_TARGET_MATERIAL = 0x0,
            CONTAINER_SOURCE_TYPE_MATERIAL_FROM_TARGET_ATTR = 0x1,
            CONTAINER_SOURCE_TYPE_SPECIFIC_MATERIAL = 0x2,
            CONTAINER_SOURCE_TYPE_LOOSE_VARIABLES = 0x3,
            CONTAINER_SOURCE_TYPE_VARIABLE_FROM_TARGET_ATTR = 0x4,
            CONTAINER_SOURCE_TYPE_TARGET_INSTANCE_MATERIAL = 0x5
        }
        // Alignment: 4
        // Members count: 10
        public enum CompMatPropertyMutatorType_t : uint {
            COMP_MAT_PROPERTY_MUTATOR_INIT = 0x0,
            COMP_MAT_PROPERTY_MUTATOR_COPY_MATCHING_KEYS = 0x1,
            COMP_MAT_PROPERTY_MUTATOR_COPY_KEYS_WITH_SUFFIX = 0x2,
            COMP_MAT_PROPERTY_MUTATOR_COPY_PROPERTY = 0x3,
            COMP_MAT_PROPERTY_MUTATOR_SET_VALUE = 0x4,
            COMP_MAT_PROPERTY_MUTATOR_GENERATE_TEXTURE = 0x5,
            COMP_MAT_PROPERTY_MUTATOR_CONDITIONAL_MUTATORS = 0x6,
            COMP_MAT_PROPERTY_MUTATOR_POP_INPUT_QUEUE = 0x7,
            COMP_MAT_PROPERTY_MUTATOR_DRAW_TEXT = 0x8,
            COMP_MAT_PROPERTY_MUTATOR_RANDOM_ROLL_INPUT_VARIABLES = 0x9
        }
        // Alignment: 4
        // Members count: 2
        public enum CompositeMaterialVarSystemVar_t : uint {
            COMPMATSYSVAR_COMPOSITETIME = 0x0,
            COMPMATSYSVAR_EMPTY_RESOURCE_SPACER = 0x1
        }
        // Alignment: 4
        // Members count: 6
        public enum CompositeMaterialMatchFilterType_t : uint {
            MATCH_FILTER_MATERIAL_ATTRIBUTE_EXISTS = 0x0,
            MATCH_FILTER_MATERIAL_SHADER = 0x1,
            MATCH_FILTER_MATERIAL_NAME_SUBSTR = 0x2,
            MATCH_FILTER_MATERIAL_ATTRIBUTE_EQUALS = 0x3,
            MATCH_FILTER_MATERIAL_PROPERTY_EXISTS = 0x4,
            MATCH_FILTER_MATERIAL_PROPERTY_EQUALS = 0x5
        }
        // Alignment: 4
        // Members count: 3
        public enum CompMatPropertyMutatorConditionType_t : uint {
            COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_EXISTS = 0x0,
            COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_VALUE_EXISTS = 0x1,
            COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_VALUE_EQUALS = 0x2
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseProvideFeatureTag
        // MPulseLibraryBindings
        public static class CCSPlayerControllerAPI {
        }
        // Parent: C_CSGO_TeamPreviewCharacterPosition
        // Fields count: 0
        public static class C_CSGO_TeamSelectCharacterPosition {
        }
        // Parent: C_BaseCSGrenade
        // Fields count: 0
        public static class C_HEGrenade {
        }
        // Parent: C_BaseToggle
        // Fields count: 0
        public static class C_FuncMover {
        }
        // Parent: C_BaseTrigger
        // Fields count: 0
        public static class C_TriggerLerpObject {
        }
        // Parent: CPlayer_MovementServices_Humanoid
        // Fields count: 37
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
            public const nint m_flMaxFallVelocity = 0x218; // float32
            public const nint m_vecLadderNormal = 0x21C; // Vector
            public const nint m_nLadderSurfacePropIndex = 0x228; // int32
            public const nint m_flDuckAmount = 0x22C; // float32
            public const nint m_flDuckSpeed = 0x230; // float32
            public const nint m_bDuckOverride = 0x234; // bool
            public const nint m_bDesiresDuck = 0x235; // bool
            public const nint m_flDuckOffset = 0x238; // float32
            public const nint m_nDuckTimeMsecs = 0x23C; // uint32
            public const nint m_nDuckJumpTimeMsecs = 0x240; // uint32
            public const nint m_nJumpTimeMsecs = 0x244; // uint32
            public const nint m_flLastDuckTime = 0x248; // float32
            public const nint m_vecLastPositionAtFullCrouchSpeed = 0x258; // Vector2D
            public const nint m_duckUntilOnGround = 0x260; // bool
            public const nint m_bHasWalkMovedSinceLastJump = 0x261; // bool
            public const nint m_bInStuckTest = 0x262; // bool
            public const nint m_flStuckCheckTime = 0x270; // float32[64][2]
            public const nint m_nTraceCount = 0x470; // int32
            public const nint m_StuckLast = 0x474; // int32
            public const nint m_bSpeedCropped = 0x478; // bool
            public const nint m_nOldWaterLevel = 0x47C; // int32
            public const nint m_flWaterEntryTime = 0x480; // float32
            public const nint m_vecForward = 0x484; // Vector
            public const nint m_vecLeft = 0x490; // Vector
            public const nint m_vecUp = 0x49C; // Vector
            public const nint m_nGameCodeHasMovedPlayerAfterCommand = 0x4A8; // int32
            public const nint m_bOldJumpPressed = 0x4AC; // bool
            public const nint m_flJumpPressedTime = 0x4B0; // float32
            public const nint m_flJumpUntil = 0x4B4; // float32
            public const nint m_flJumpVel = 0x4B8; // float32
            public const nint m_fStashGrenadeParameterWhen = 0x4BC; // GameTime_t
            public const nint m_nButtonDownMaskPrev = 0x4C0; // uint64
            public const nint m_flOffsetTickCompleteTime = 0x4C8; // float32
            public const nint m_flOffsetTickStashedSpeed = 0x4CC; // float32
            public const nint m_flStamina = 0x4D0; // float32
            public const nint m_flHeightAtJumpStart = 0x4D4; // float32
            public const nint m_flMaxJumpHeightThisJump = 0x4D8; // float32
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
        // Parent: C_CSWeaponBaseGun
        // Fields count: 0
        public static class C_WeaponM4A1 {
        }
        // Parent: C_EconEntity
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_bShouldGlow (bool)
        public static class C_Item {
            public const nint m_bShouldGlow = 0x15B0; // bool
            public const nint m_pReticleHintTextName = 0x15B1; // char[256]
        }
        // Parent: C_SoundEventEntity
        // Fields count: 1
        //
        // Metadata:
        // NetworkVarNames: m_vecCornerPairsNetworked (SoundeventPathCornerPairNetworked_t)
        public static class C_SoundEventPathCornerEntity {
            public const nint m_vecCornerPairsNetworked = 0x548; // C_NetworkUtlVectorBase<SoundeventPathCornerPairNetworked_t>
        }
        // Parent: C_CSWeaponBaseGun
        // Fields count: 0
        public static class C_WeaponM249 {
        }
        // Parent: C_TeamplayRules
        // Fields count: 100
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
        public static class C_CSGameRules {
            public const nint m_bFreezePeriod = 0x40; // bool
            public const nint m_bWarmupPeriod = 0x41; // bool
            public const nint m_fWarmupPeriodEnd = 0x44; // GameTime_t
            public const nint m_fWarmupPeriodStart = 0x48; // GameTime_t
            public const nint m_bServerPaused = 0x4C; // bool
            public const nint m_bTerroristTimeOutActive = 0x4D; // bool
            public const nint m_bCTTimeOutActive = 0x4E; // bool
            public const nint m_flTerroristTimeOutRemaining = 0x50; // float32
            public const nint m_flCTTimeOutRemaining = 0x54; // float32
            public const nint m_nTerroristTimeOuts = 0x58; // int32
            public const nint m_nCTTimeOuts = 0x5C; // int32
            public const nint m_bTechnicalTimeOut = 0x60; // bool
            public const nint m_bMatchWaitingForResume = 0x61; // bool
            public const nint m_iRoundTime = 0x64; // int32
            public const nint m_fMatchStartTime = 0x68; // float32
            public const nint m_fRoundStartTime = 0x6C; // GameTime_t
            public const nint m_flRestartRoundTime = 0x70; // GameTime_t
            public const nint m_bGameRestart = 0x74; // bool
            public const nint m_flGameStartTime = 0x78; // float32
            public const nint m_timeUntilNextPhaseStarts = 0x7C; // float32
            public const nint m_gamePhase = 0x80; // int32
            public const nint m_totalRoundsPlayed = 0x84; // int32
            public const nint m_nRoundsPlayedThisPhase = 0x88; // int32
            public const nint m_nOvertimePlaying = 0x8C; // int32
            public const nint m_iHostagesRemaining = 0x90; // int32
            public const nint m_bAnyHostageReached = 0x94; // bool
            public const nint m_bMapHasBombTarget = 0x95; // bool
            public const nint m_bMapHasRescueZone = 0x96; // bool
            public const nint m_bMapHasBuyZone = 0x97; // bool
            public const nint m_bIsQueuedMatchmaking = 0x98; // bool
            public const nint m_nQueuedMatchmakingMode = 0x9C; // int32
            public const nint m_bIsValveDS = 0xA0; // bool
            public const nint m_bLogoMap = 0xA1; // bool
            public const nint m_bPlayAllStepSoundsOnServer = 0xA2; // bool
            public const nint m_iSpectatorSlotCount = 0xA4; // int32
            public const nint m_MatchDevice = 0xA8; // int32
            public const nint m_bHasMatchStarted = 0xAC; // bool
            public const nint m_nNextMapInMapgroup = 0xB0; // int32
            public const nint m_szTournamentEventName = 0xB4; // char[512]
            public const nint m_szTournamentEventStage = 0x2B4; // char[512]
            public const nint m_szMatchStatTxt = 0x4B4; // char[512]
            public const nint m_szTournamentPredictionsTxt = 0x6B4; // char[512]
            public const nint m_nTournamentPredictionsPct = 0x8B4; // int32
            public const nint m_flCMMItemDropRevealStartTime = 0x8B8; // GameTime_t
            public const nint m_flCMMItemDropRevealEndTime = 0x8BC; // GameTime_t
            public const nint m_bIsDroppingItems = 0x8C0; // bool
            public const nint m_bIsQuestEligible = 0x8C1; // bool
            public const nint m_bIsHltvActive = 0x8C2; // bool
            public const nint m_arrProhibitedItemIndices = 0x8C4; // uint16[100]
            public const nint m_arrTournamentActiveCasterAccounts = 0x98C; // uint32[4]
            public const nint m_numBestOfMaps = 0x99C; // int32
            public const nint m_nHalloweenMaskListSeed = 0x9A0; // int32
            public const nint m_bBombDropped = 0x9A4; // bool
            public const nint m_bBombPlanted = 0x9A5; // bool
            public const nint m_iRoundWinStatus = 0x9A8; // int32
            public const nint m_eRoundWinReason = 0x9AC; // int32
            public const nint m_bTCantBuy = 0x9B0; // bool
            public const nint m_bCTCantBuy = 0x9B1; // bool
            public const nint m_iMatchStats_RoundResults = 0x9B4; // int32[30]
            public const nint m_iMatchStats_PlayersAlive_CT = 0xA2C; // int32[30]
            public const nint m_iMatchStats_PlayersAlive_T = 0xAA4; // int32[30]
            public const nint m_TeamRespawnWaveTimes = 0xB1C; // float32[32]
            public const nint m_flNextRespawnWave = 0xB9C; // GameTime_t[32]
            public const nint m_nServerQuestID = 0xC1C; // int32
            public const nint m_vMinimapMins = 0xC20; // Vector
            public const nint m_vMinimapMaxs = 0xC2C; // Vector
            public const nint m_MinimapVerticalSectionHeights = 0xC38; // float32[8]
            public const nint m_bSpawnedTerrorHuntHeavy = 0xC58; // bool
            public const nint m_nEndMatchMapGroupVoteTypes = 0xC5C; // int32[10]
            public const nint m_nEndMatchMapGroupVoteOptions = 0xC84; // int32[10]
            public const nint m_nEndMatchMapVoteWinner = 0xCAC; // int32
            public const nint m_iNumConsecutiveCTLoses = 0xCB0; // int32
            public const nint m_iNumConsecutiveTerroristLoses = 0xCB4; // int32
            public const nint m_bMarkClientStopRecordAtRoundEnd = 0xCD0; // bool
            public const nint m_nMatchAbortedEarlyReason = 0xD28; // int32
            public const nint m_bHasTriggeredRoundStartMusic = 0xD2C; // bool
            public const nint m_bSwitchingTeamsAtRoundReset = 0xD2D; // bool
            public const nint m_pGameModeRules = 0xD48; // CCSGameModeRules*
            public const nint m_RetakeRules = 0xD50; // C_RetakeGameRules
            public const nint m_nMatchEndCount = 0xE68; // uint8
            public const nint m_nTTeamIntroVariant = 0xE6C; // int32
            public const nint m_nCTTeamIntroVariant = 0xE70; // int32
            public const nint m_bTeamIntroPeriod = 0xE74; // bool
            public const nint m_iRoundEndWinnerTeam = 0xE78; // int32
            public const nint m_eRoundEndReason = 0xE7C; // int32
            public const nint m_bRoundEndShowTimerDefend = 0xE80; // bool
            public const nint m_iRoundEndTimerTime = 0xE84; // int32
            public const nint m_sRoundEndFunFactToken = 0xE88; // CUtlString
            public const nint m_iRoundEndFunFactPlayerSlot = 0xE90; // CPlayerSlot
            public const nint m_iRoundEndFunFactData1 = 0xE94; // int32
            public const nint m_iRoundEndFunFactData2 = 0xE98; // int32
            public const nint m_iRoundEndFunFactData3 = 0xE9C; // int32
            public const nint m_sRoundEndMessage = 0xEA0; // CUtlString
            public const nint m_iRoundEndPlayerCount = 0xEA8; // int32
            public const nint m_bRoundEndNoMusic = 0xEAC; // bool
            public const nint m_iRoundEndLegacy = 0xEB0; // int32
            public const nint m_nRoundEndCount = 0xEB4; // uint8
            public const nint m_iRoundStartRoundNumber = 0xEB8; // int32
            public const nint m_nRoundStartCount = 0xEBC; // uint8
            public const nint m_flLastPerfSampleTime = 0x4EC8; // float64
        }
        // Parent: CBodyComponent
        // Fields count: 1
        //
        // Metadata:
        // NetworkVarNames: m_skeletonInstance (CSkeletonInstance)
        public static class CBodyComponentSkeletonInstance {
            public const nint m_skeletonInstance = 0x50; // CSkeletonInstance
        }
        // Parent: C_CSWeaponBaseGun
        // Fields count: 0
        public static class C_WeaponCZ75a {
        }
        // Parent: C_BaseEntity
        // Fields count: 31
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
        // NetworkVarNames: m_ConfigEntitiesToPropagateMaterialDecalsTo (CHandle<C_BaseModelEntity>)
        public static class C_BaseModelEntity {
            public const nint m_CRenderComponent = 0xA18; // CRenderComponent*
            public const nint m_CHitboxComponent = 0xA20; // CHitboxComponent
            public const nint m_bInitModelEffects = 0xA68; // bool
            public const nint m_bIsStaticProp = 0xA69; // bool
            public const nint m_nLastAddDecal = 0xA6C; // int32
            public const nint m_nDecalsAdded = 0xA70; // int32
            public const nint m_iOldHealth = 0xA74; // int32
            public const nint m_nRenderMode = 0xA78; // RenderMode_t
            public const nint m_nRenderFX = 0xA79; // RenderFx_t
            public const nint m_bAllowFadeInView = 0xA7A; // bool
            public const nint m_clrRender = 0xA7B; // Color
            public const nint m_vecRenderAttributes = 0xA80; // C_UtlVectorEmbeddedNetworkVar<EntityRenderAttribute_t>
            public const nint m_bRenderToCubemaps = 0xAE8; // bool
            public const nint m_Collision = 0xAF0; // CCollisionProperty
            public const nint m_Glow = 0xBA0; // CGlowProperty
            public const nint m_flGlowBackfaceMult = 0xBF8; // float32
            public const nint m_fadeMinDist = 0xBFC; // float32
            public const nint m_fadeMaxDist = 0xC00; // float32
            public const nint m_flFadeScale = 0xC04; // float32
            public const nint m_flShadowStrength = 0xC08; // float32
            public const nint m_nObjectCulling = 0xC0C; // uint8
            public const nint m_nAddDecal = 0xC10; // int32
            public const nint m_vDecalPosition = 0xC14; // Vector
            public const nint m_vDecalForwardAxis = 0xC20; // Vector
            public const nint m_flDecalHealBloodRate = 0xC2C; // float32
            public const nint m_flDecalHealHeightRate = 0xC30; // float32
            public const nint m_ConfigEntitiesToPropagateMaterialDecalsTo = 0xC38; // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
            public const nint m_vecViewOffset = 0xC50; // CNetworkViewOffsetVector
            public const nint m_pClientAlphaProperty = 0xC80; // CClientAlphaProperty*
            public const nint m_ClientOverrideTint = 0xC88; // Color
            public const nint m_bUseClientOverrideTint = 0xC8C; // bool
        }
        // Parent: C_BaseTrigger
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_source (string_t)
        // NetworkVarNames: m_destination (string_t)
        public static class C_FootstepControl {
            public const nint m_source = 0xCD0; // CUtlSymbolLarge
            public const nint m_destination = 0xCD8; // CUtlSymbolLarge
        }
        // Parent: C_BaseClientUIEntity
        // Fields count: 13
        //
        // Metadata:
        // NetworkVarNames: m_bIgnoreInput (bool)
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
        public static class C_PointClientUIHUD {
            public const nint m_bCheckCSSClasses = 0xD00; // bool
            public const nint m_bIgnoreInput = 0xE80; // bool
            public const nint m_flWidth = 0xE84; // float32
            public const nint m_flHeight = 0xE88; // float32
            public const nint m_flDPI = 0xE8C; // float32
            public const nint m_flInteractDistance = 0xE90; // float32
            public const nint m_flDepthOffset = 0xE94; // float32
            public const nint m_unOwnerContext = 0xE98; // uint32
            public const nint m_unHorizontalAlign = 0xE9C; // uint32
            public const nint m_unVerticalAlign = 0xEA0; // uint32
            public const nint m_unOrientation = 0xEA4; // uint32
            public const nint m_bAllowInteractionFromAllSceneWorlds = 0xEA8; // bool
            public const nint m_vecCSSClasses = 0xEB0; // C_NetworkUtlVectorBase<CUtlSymbolLarge>
        }
        // Parent: C_BaseModelEntity
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_flLightScale (float32)
        // NetworkVarNames: m_Radius (float32)
        public static class C_SpotlightEnd {
            public const nint m_flLightScale = 0xCC8; // float32
            public const nint m_Radius = 0xCCC; // float32
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
        public static class CEconItemAttribute {
            public const nint m_iAttributeDefinitionIndex = 0x30; // uint16
            public const nint m_flValue = 0x34; // float32
            public const nint m_flInitialValue = 0x38; // float32
            public const nint m_nRefundableCurrency = 0x3C; // int32
            public const nint m_bSetBonus = 0x40; // bool
        }
        // Parent: C_BaseEntity
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
        public static class C_PointCamera {
            public const nint m_FOV = 0x548; // float32
            public const nint m_Resolution = 0x54C; // float32
            public const nint m_bFogEnable = 0x550; // bool
            public const nint m_FogColor = 0x551; // Color
            public const nint m_flFogStart = 0x558; // float32
            public const nint m_flFogEnd = 0x55C; // float32
            public const nint m_flFogMaxDensity = 0x560; // float32
            public const nint m_bActive = 0x564; // bool
            public const nint m_bUseScreenAspectRatio = 0x565; // bool
            public const nint m_flAspectRatio = 0x568; // float32
            public const nint m_bNoSky = 0x56C; // bool
            public const nint m_fBrightness = 0x570; // float32
            public const nint m_flZFar = 0x574; // float32
            public const nint m_flZNear = 0x578; // float32
            public const nint m_bCanHLTVUse = 0x57C; // bool
            public const nint m_bDofEnabled = 0x57D; // bool
            public const nint m_flDofNearBlurry = 0x580; // float32
            public const nint m_flDofNearCrisp = 0x584; // float32
            public const nint m_flDofFarCrisp = 0x588; // float32
            public const nint m_flDofFarBlurry = 0x58C; // float32
            public const nint m_flDofTiltToGround = 0x590; // float32
            public const nint m_TargetFOV = 0x594; // float32
            public const nint m_DegreesPerSecond = 0x598; // float32
            public const nint m_bIsOn = 0x59C; // bool
            public const nint m_pNext = 0x5A0; // C_PointCamera*
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseProvideFeatureTag
        // MPulseLibraryBindings
        public static class C_CSPlayerPawnAPI {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseProvideFeatureTag
        // MPulseLibraryBindings
        public static class CCSPointScriptExtensions_weapon_cs_base {
        }
        // Parent: C_LightEntity
        // Fields count: 0
        public static class C_LightSpotEntity {
        }
        // Parent: C_BaseEntity
        // Fields count: 1
        //
        // Metadata:
        // NetworkVarNames: m_EnvWindShared (CEnvWindShared)
        public static class C_EnvWind {
            public const nint m_EnvWindShared = 0x548; // C_EnvWindShared
        }
        // Parent: C_BaseEntity
        // Fields count: 0
        public static class C_GameRulesProxy {
        }
        // Parent: C_BaseFlex
        // Fields count: 7
        //
        // Metadata:
        // MNetworkExcludeByUserGroup
        // NetworkVarNames: m_hMyWearables (CHandle<C_EconWearable>)
        // NetworkVarNames: m_flFieldOfView (float)
        public static class C_BaseCombatCharacter {
            public const nint m_hMyWearables = 0x1068; // C_NetworkUtlVectorBase<CHandle<C_EconWearable>>
            public const nint m_leftFootAttachment = 0x1080; // AttachmentHandle_t
            public const nint m_rightFootAttachment = 0x1081; // AttachmentHandle_t
            public const nint m_nWaterWakeMode = 0x1084; // C_BaseCombatCharacter::WaterWakeMode_t
            public const nint m_flWaterWorldZ = 0x1088; // float32
            public const nint m_flWaterNextTraceTime = 0x108C; // float32
            public const nint m_flFieldOfView = 0x1090; // float32
        }
        // Parent: C_BaseCSGrenadeProjectile
        // Fields count: 0
        public static class C_FlashbangProjectile {
        }
        // Parent: C_SoundEventEntity
        // Fields count: 1
        //
        // Metadata:
        // NetworkVarNames: m_flRadius (float)
        public static class C_SoundEventSphereEntity {
            public const nint m_flRadius = 0x548; // float32
        }
        // Parent: CPlayerPawnComponent
        // Fields count: 0
        public static class CPlayer_ViewModelServices {
        }
        // Parent: CCSGO_WingmanIntroCharacterPosition
        // Fields count: 0
        public static class CCSGO_WingmanIntroCounterTerroristPosition {
        }
        // Parent: C_DynamicProp
        // Fields count: 0
        public static class C_DynamicPropAlias_cable_dynamic {
        }
        // Parent: C_PointEntity
        // Fields count: 0
        public static class C_InfoInstructorHintHostageRescueZone {
        }
        // Parent: C_PointEntity
        // Fields count: 12
        //
        // Metadata:
        // NetworkVarNames: m_bIsPlayingBack (bool)
        // NetworkVarNames: m_bPaused (bool)
        // NetworkVarNames: m_bMultiplayer (bool)
        // NetworkVarNames: m_bAutogenerated (bool)
        // NetworkVarNames: m_flForceClientTime (float32)
        // NetworkVarNames: m_nSceneStringIndex (uint16)
        // NetworkVarNames: m_hActorList (CHandle<C_BaseFlex>)
        public static class C_SceneEntity {
            public const nint m_bIsPlayingBack = 0x550; // bool
            public const nint m_bPaused = 0x551; // bool
            public const nint m_bMultiplayer = 0x552; // bool
            public const nint m_bAutogenerated = 0x553; // bool
            public const nint m_flForceClientTime = 0x554; // float32
            public const nint m_nSceneStringIndex = 0x558; // uint16
            public const nint m_bClientOnly = 0x55A; // bool
            public const nint m_hOwner = 0x55C; // CHandle<C_BaseFlex>
            public const nint m_hActorList = 0x560; // C_NetworkUtlVectorBase<CHandle<C_BaseFlex>>
            public const nint m_bWasPlaying = 0x578; // bool
            public const nint m_QueuedEvents = 0x588; // CUtlVector<C_SceneEntity::QueuedEvents_t>
            public const nint m_flCurrentTime = 0x5A0; // float32
        }
        // Parent: CPlayerPawnComponent
        // Fields count: 20
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
        // NetworkVarNames: m_PostProcessingVolumes (CHandle<C_PostProcessingVolume>)
        public static class CPlayer_CameraServices {
            public const nint m_vecCsViewPunchAngle = 0x40; // QAngle
            public const nint m_nCsViewPunchAngleTick = 0x4C; // GameTick_t
            public const nint m_flCsViewPunchAngleTickRatio = 0x50; // float32
            public const nint m_PlayerFog = 0x58; // C_fogplayerparams_t
            public const nint m_hColorCorrectionCtrl = 0x98; // CHandle<C_ColorCorrection>
            public const nint m_hViewEntity = 0x9C; // CHandle<C_BaseEntity>
            public const nint m_hTonemapController = 0xA0; // CHandle<C_TonemapController2>
            public const nint m_audio = 0xA8; // audioparams_t
            public const nint m_PostProcessingVolumes = 0x120; // C_NetworkUtlVectorBase<CHandle<C_PostProcessingVolume>>
            public const nint m_flOldPlayerZ = 0x138; // float32
            public const nint m_flOldPlayerViewOffsetZ = 0x13C; // float32
            public const nint m_CurrentFog = 0x140; // fogparams_t
            public const nint m_hOldFogController = 0x1A8; // CHandle<C_FogController>
            public const nint m_bOverrideFogColor = 0x1AC; // bool[5]
            public const nint m_OverrideFogColor = 0x1B1; // Color[5]
            public const nint m_bOverrideFogStartEnd = 0x1C5; // bool[5]
            public const nint m_fOverrideFogStart = 0x1CC; // float32[5]
            public const nint m_fOverrideFogEnd = 0x1E0; // float32[5]
            public const nint m_hActivePostProcessingVolume = 0x1F4; // CHandle<C_PostProcessingVolume>
            public const nint m_angDemoViewAngles = 0x1F8; // QAngle
        }
        // Parent: C_CSWeaponBase
        // Fields count: 15
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
        public static class C_BaseCSGrenade {
            public const nint m_bClientPredictDelete = 0x1A80; // bool
            public const nint m_bRedraw = 0x1A81; // bool
            public const nint m_bIsHeldByPlayer = 0x1A82; // bool
            public const nint m_bPinPulled = 0x1A83; // bool
            public const nint m_bJumpThrow = 0x1A84; // bool
            public const nint m_bThrowAnimating = 0x1A85; // bool
            public const nint m_fThrowTime = 0x1A88; // GameTime_t
            public const nint m_flThrowStrength = 0x1A8C; // float32
            public const nint m_flThrowStrengthApproach = 0x1A90; // float32
            public const nint m_fDropTime = 0x1A94; // GameTime_t
            public const nint m_fPinPullTime = 0x1A98; // GameTime_t
            public const nint m_bJustPulledPin = 0x1A9C; // bool
            public const nint m_nNextHoldTick = 0x1AA0; // GameTick_t
            public const nint m_flNextHoldFrac = 0x1AA4; // float32
            public const nint m_hSwitchToWeaponAfterThrow = 0x1AA8; // CHandle<C_CSWeaponBase>
        }
        // Parent: C_FuncBrush
        // Fields count: 8
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
        public static class C_FuncMonitor {
            public const nint m_targetCamera = 0xCC8; // CUtlString
            public const nint m_nResolutionEnum = 0xCD0; // int32
            public const nint m_bRenderShadows = 0xCD4; // bool
            public const nint m_bUseUniqueColorTarget = 0xCD5; // bool
            public const nint m_brushModelName = 0xCD8; // CUtlString
            public const nint m_hTargetCamera = 0xCE0; // CHandle<C_BaseEntity>
            public const nint m_bEnabled = 0xCE4; // bool
            public const nint m_bDraw3DSkybox = 0xCE5; // bool
        }
        // Parent: C_BaseTrigger
        // Fields count: 0
        public static class C_TriggerMultiple {
        }
        // Parent: None
        // Fields count: 1
        public static class C_RopeKeyframe__CPhysicsDelegate {
            public const nint m_pKeyframe = 0x8; // C_RopeKeyframe*
        }
        // Parent: CEntityComponent
        // Fields count: 2
        public static class CBodyComponent {
            public const nint m_pSceneNode = 0x8; // CGameSceneNode*
            public const nint __m_pChainEntity = 0x20; // CNetworkVarChainer
        }
        // Parent: C_SoundAreaEntityBase
        // Fields count: 1
        //
        // Metadata:
        // NetworkVarNames: m_flRadius (float)
        public static class C_SoundAreaEntitySphere {
            public const nint m_flRadius = 0x570; // float32
        }
        // Parent: CPlayer_MovementServices
        // Fields count: 0
        public static class CCSObserver_MovementServices {
        }
        // Parent: C_BaseModelEntity
        // Fields count: 8
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
        public static class C_LightGlow {
            public const nint m_nHorizontalSize = 0xCC8; // uint32
            public const nint m_nVerticalSize = 0xCCC; // uint32
            public const nint m_nMinDist = 0xCD0; // uint32
            public const nint m_nMaxDist = 0xCD4; // uint32
            public const nint m_nOuterMaxDist = 0xCD8; // uint32
            public const nint m_flGlowProxySize = 0xCDC; // float32
            public const nint m_flHDRColorScale = 0xCE0; // float32
            public const nint m_GlowOverlay = 0xCE8; // C_LightGlowOverlay
        }
        // Parent: None
        // Fields count: 4
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
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_hOwner (CEntityHandle)
        // NetworkVarNames: m_name (CUtlStringToken)
        public static class CGameSceneNodeHandle {
            public const nint m_hOwner = 0x8; // CEntityHandle
            public const nint m_name = 0xC; // CUtlStringToken
        }
        // Parent: CBaseAnimGraph
        // Fields count: 14
        public static class C_ClientRagdoll {
            public const nint m_bFadeOut = 0xED0; // bool
            public const nint m_bImportant = 0xED1; // bool
            public const nint m_flEffectTime = 0xED4; // GameTime_t
            public const nint m_gibDespawnTime = 0xED8; // GameTime_t
            public const nint m_iCurrentFriction = 0xEDC; // int32
            public const nint m_iMinFriction = 0xEE0; // int32
            public const nint m_iMaxFriction = 0xEE4; // int32
            public const nint m_iFrictionAnimState = 0xEE8; // int32
            public const nint m_bReleaseRagdoll = 0xEEC; // bool
            public const nint m_iEyeAttachment = 0xEED; // AttachmentHandle_t
            public const nint m_bFadingOut = 0xEEE; // bool
            public const nint m_flScaleEnd = 0xEF0; // float32[10]
            public const nint m_flScaleTimeStart = 0xF18; // GameTime_t[10]
            public const nint m_flScaleTimeEnd = 0xF40; // GameTime_t[10]
        }
        // Parent: C_BaseEntity
        // Fields count: 1
        public static class C_GlobalLight {
            public const nint m_WindClothForceHandle = 0xA10; // uint16
        }
        // Parent: C_BaseEntity
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
        public static class C_CSPlayerResource {
            public const nint m_bHostageAlive = 0x548; // bool[12]
            public const nint m_isHostageFollowingSomeone = 0x554; // bool[12]
            public const nint m_iHostageEntityIDs = 0x560; // CEntityIndex[12]
            public const nint m_bombsiteCenterA = 0x590; // Vector
            public const nint m_bombsiteCenterB = 0x59C; // Vector
            public const nint m_hostageRescueX = 0x5A8; // int32[4]
            public const nint m_hostageRescueY = 0x5B8; // int32[4]
            public const nint m_hostageRescueZ = 0x5C8; // int32[4]
            public const nint m_bEndMatchNextMapAllVoted = 0x5D8; // bool
            public const nint m_foundGoalPositions = 0x5D9; // bool
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
            public const nint m_modelState = 0x170; // CModelState
            public const nint m_bIsAnimationEnabled = 0x3A0; // bool
            public const nint m_bUseParentRenderBounds = 0x3A1; // bool
            public const nint m_bDisableSolidCollisionsForHierarchy = 0x3A2; // bool
            public const nint m_bDirtyMotionType = 0x0; // bitfield:1
            public const nint m_bIsGeneratingLatchedParentSpaceState = 0x0; // bitfield:1
            public const nint m_materialGroup = 0x3A4; // CUtlStringToken
            public const nint m_nHitboxSet = 0x3A8; // uint8
        }
        // Parent: CBodyComponentSkeletonInstance
        // Fields count: 1
        //
        // Metadata:
        // NetworkVarNames: m_animationController (CBaseAnimGraphController)
        public static class CBodyComponentBaseAnimGraph {
            public const nint m_animationController = 0x460; // CBaseAnimGraphController
        }
        // Parent: CBodyComponent
        // Fields count: 1
        //
        // Metadata:
        // NetworkVarNames: m_sceneNode (CGameSceneNode)
        public static class CBodyComponentPoint {
            public const nint m_sceneNode = 0x50; // CGameSceneNode
        }
        // Parent: C_BaseCSGrenadeProjectile
        // Fields count: 8
        //
        // Metadata:
        // NetworkVarNames: m_nSmokeEffectTickBegin (int)
        // NetworkVarNames: m_bDidSmokeEffect (bool)
        // NetworkVarNames: m_nRandomSeed (int)
        // NetworkVarNames: m_vSmokeColor (Vector)
        // NetworkVarNames: m_vSmokeDetonationPos (Vector)
        // NetworkVarNames: m_VoxelFrameData (CUtlVector<uint8>)
        public static class C_SmokeGrenadeProjectile {
            public const nint m_nSmokeEffectTickBegin = 0x1158; // int32
            public const nint m_bDidSmokeEffect = 0x115C; // bool
            public const nint m_nRandomSeed = 0x1160; // int32
            public const nint m_vSmokeColor = 0x1164; // Vector
            public const nint m_vSmokeDetonationPos = 0x1170; // Vector
            public const nint m_VoxelFrameData = 0x1180; // CUtlVector<uint8>
            public const nint m_bSmokeVolumeDataReceived = 0x1198; // bool
            public const nint m_bSmokeEffectSpawned = 0x1199; // bool
        }
        // Parent: C_SoundEventEntity
        // Fields count: 0
        public static class C_SoundEventEntityAlias_snd_event_point {
        }
        // Parent: C_BaseEntity
        // Fields count: 8
        public static class C_CSGO_MapPreviewCameraPath {
            public const nint m_flZFar = 0x548; // float32
            public const nint m_flZNear = 0x54C; // float32
            public const nint m_bLoop = 0x550; // bool
            public const nint m_bVerticalFOV = 0x551; // bool
            public const nint m_bConstantSpeed = 0x552; // bool
            public const nint m_flDuration = 0x554; // float32
            public const nint m_flPathLength = 0x598; // float32
            public const nint m_flPathDuration = 0x59C; // float32
        }
        // Parent: CCSGO_WingmanIntroCharacterPosition
        // Fields count: 0
        public static class CCSGO_WingmanIntroTerroristPosition {
        }
        // Parent: C_BaseModelEntity
        // Fields count: 24
        //
        // Metadata:
        // NetworkVarNames: m_firePositions (Vector)
        // NetworkVarNames: m_fireParentPositions (Vector)
        // NetworkVarNames: m_bFireIsBurning (bool)
        // NetworkVarNames: m_BurnNormal (Vector)
        // NetworkVarNames: m_fireCount (int)
        // NetworkVarNames: m_nInfernoType (int)
        // NetworkVarNames: m_nFireLifetime (float)
        // NetworkVarNames: m_bInPostEffectTime (bool)
        // NetworkVarNames: m_nFireEffectTickBegin (int)
        public static class C_Inferno {
            public const nint m_nfxFireDamageEffect = 0xD08; // ParticleIndex_t
            public const nint m_hInfernoPointsSnapshot = 0xD10; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
            public const nint m_hInfernoFillerPointsSnapshot = 0xD18; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
            public const nint m_hInfernoOutlinePointsSnapshot = 0xD20; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
            public const nint m_hInfernoClimbingOutlinePointsSnapshot = 0xD28; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
            public const nint m_hInfernoDecalsSnapshot = 0xD30; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
            public const nint m_firePositions = 0xD38; // Vector[64]
            public const nint m_fireParentPositions = 0x1038; // Vector[64]
            public const nint m_bFireIsBurning = 0x1338; // bool[64]
            public const nint m_BurnNormal = 0x1378; // Vector[64]
            public const nint m_fireCount = 0x1678; // int32
            public const nint m_nInfernoType = 0x167C; // int32
            public const nint m_nFireLifetime = 0x1680; // float32
            public const nint m_bInPostEffectTime = 0x1684; // bool
            public const nint m_lastFireCount = 0x1688; // int32
            public const nint m_nFireEffectTickBegin = 0x168C; // int32
            public const nint m_drawableCount = 0x8290; // int32
            public const nint m_blosCheck = 0x8294; // bool
            public const nint m_nlosperiod = 0x8298; // int32
            public const nint m_maxFireHalfWidth = 0x829C; // float32
            public const nint m_maxFireHeight = 0x82A0; // float32
            public const nint m_minBounds = 0x82A4; // Vector
            public const nint m_maxBounds = 0x82B0; // Vector
            public const nint m_flLastGrassBurnThink = 0x82BC; // float32
        }
        // Parent: CBaseAnimGraph
        // Fields count: 0
        public static class C_HostageCarriableProp {
        }
        // Parent: C_CSGO_TeamPreviewCamera
        // Fields count: 0
        public static class C_CSGO_TerroristWingmanIntroCamera {
        }
        // Parent: C_BaseEntity
        // Fields count: 5
        //
        // Metadata:
        // NetworkVarNames: m_hPlayer (CHandle<CCSPlayerPawn>)
        // NetworkVarNames: m_hPingedEntity (CHandle<CBaseEntity>)
        // NetworkVarNames: m_iType (int)
        // NetworkVarNames: m_bUrgent (bool)
        // NetworkVarNames: m_szPlaceName (char)
        public static class C_PlayerPing {
            public const nint m_hPlayer = 0x578; // CHandle<C_CSPlayerPawn>
            public const nint m_hPingedEntity = 0x57C; // CHandle<C_BaseEntity>
            public const nint m_iType = 0x580; // int32
            public const nint m_bUrgent = 0x584; // bool
            public const nint m_szPlaceName = 0x585; // char[18]
        }
        // Parent: C_CSWeaponBaseGun
        // Fields count: 0
        public static class C_WeaponMP7 {
        }
        // Parent: C_Team
        // Fields count: 10
        //
        // Metadata:
        // NetworkVarNames: m_szTeamMatchStat (char)
        // NetworkVarNames: m_numMapVictories (int)
        // NetworkVarNames: m_bSurrendered (bool)
        // NetworkVarNames: m_scoreFirstHalf (int32)
        // NetworkVarNames: m_scoreSecondHalf (int32)
        // NetworkVarNames: m_scoreOvertime (int32)
        // NetworkVarNames: m_szClanTeamname (char)
        // NetworkVarNames: m_iClanID (uint32)
        // NetworkVarNames: m_szTeamFlagImage (char)
        // NetworkVarNames: m_szTeamLogoImage (char)
        public static class C_CSTeam {
            public const nint m_szTeamMatchStat = 0x600; // char[512]
            public const nint m_numMapVictories = 0x800; // int32
            public const nint m_bSurrendered = 0x804; // bool
            public const nint m_scoreFirstHalf = 0x808; // int32
            public const nint m_scoreSecondHalf = 0x80C; // int32
            public const nint m_scoreOvertime = 0x810; // int32
            public const nint m_szClanTeamname = 0x814; // char[129]
            public const nint m_iClanID = 0x898; // uint32
            public const nint m_szTeamFlagImage = 0x89C; // char[8]
            public const nint m_szTeamLogoImage = 0x8A4; // char[8]
        }
        // Parent: C_BaseEntity
        // Fields count: 10
        public static class C_CSGO_MapPreviewCameraPathNode {
            public const nint m_szParentPathUniqueID = 0x548; // CUtlSymbolLarge
            public const nint m_nPathIndex = 0x550; // int32
            public const nint m_vInTangentLocal = 0x554; // Vector
            public const nint m_vOutTangentLocal = 0x560; // Vector
            public const nint m_flFOV = 0x56C; // float32
            public const nint m_flCameraSpeed = 0x570; // float32
            public const nint m_flEaseIn = 0x574; // float32
            public const nint m_flEaseOut = 0x578; // float32
            public const nint m_vInTangentWorld = 0x57C; // Vector
            public const nint m_vOutTangentWorld = 0x588; // Vector
        }
        // Parent: C_CSWeaponBaseGun
        // Fields count: 0
        public static class C_WeaponMag7 {
        }
        // Parent: C_CSWeaponBaseGun
        // Fields count: 0
        public static class C_DEagle {
        }
        // Parent: C_CSPlayerPawnBase
        // Fields count: 99
        //
        // Metadata:
        // NetworkVarNames: m_pBulletServices (CCSPlayer_BulletServices*)
        // NetworkVarNames: m_pHostageServices (CCSPlayer_HostageServices*)
        // NetworkVarNames: m_pBuyServices (CCSPlayer_BuyServices*)
        // NetworkVarNames: m_pGlowServices (CCSPlayer_GlowServices*)
        // NetworkVarNames: m_pActionTrackingServices (CCSPlayer_ActionTrackingServices*)
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
        // MNetworkIncludeByName
        // NetworkVarNames: m_flHealthShotBoostExpirationTime (GameTime_t)
        // NetworkVarNames: m_bHasFemaleVoice (bool)
        // NetworkVarNames: m_szLastPlaceName (char)
        // NetworkVarNames: m_bInBuyZone (bool)
        // NetworkVarNames: m_aimPunchAngle (QAngle)
        // NetworkVarNames: m_aimPunchAngleVel (QAngle)
        // NetworkVarNames: m_aimPunchTickBase (int)
        // NetworkVarNames: m_aimPunchTickFraction (float)
        // NetworkVarNames: m_bInHostageRescueZone (bool)
        // NetworkVarNames: m_bInBombZone (bool)
        // NetworkVarNames: m_bIsBuyMenuOpen (bool)
        // NetworkVarNames: m_flTimeOfLastInjury (GameTime_t)
        // NetworkVarNames: m_flNextSprayDecalTime (GameTime_t)
        // NetworkVarNames: m_iRetakesOffering (int)
        // NetworkVarNames: m_iRetakesOfferingCard (int)
        // NetworkVarNames: m_bRetakesHasDefuseKit (bool)
        // NetworkVarNames: m_bRetakesMVPLastRound (bool)
        // NetworkVarNames: m_iRetakesMVPBoostItem (int)
        // NetworkVarNames: m_RetakesMVPBoostExtraUtility (loadout_slot_t)
        // NetworkVarNames: m_EconGloves (CEconItemView)
        // NetworkVarNames: m_nEconGlovesChanged (uint8)
        // NetworkVarNames: m_nRagdollDamageBone (int)
        // NetworkVarNames: m_vRagdollDamageForce (Vector)
        // NetworkVarNames: m_vRagdollDamagePosition (Vector)
        // NetworkVarNames: m_szRagdollDamageWeaponName (char)
        // NetworkVarNames: m_bRagdollDamageHeadshot (bool)
        // NetworkVarNames: m_vRagdollServerOrigin (Vector)
        // MNetworkReplayCompatField
        // NetworkVarNames: m_qDeathEyeAngles (QAngle)
        // NetworkVarNames: m_bLeftHanded (bool)
        // NetworkVarNames: m_fSwitchedHandednessTime (GameTime_t)
        // NetworkVarNames: m_flViewmodelOffsetX (float)
        // NetworkVarNames: m_flViewmodelOffsetY (float)
        // NetworkVarNames: m_flViewmodelOffsetZ (float)
        // NetworkVarNames: m_flViewmodelFOV (float)
        // NetworkVarNames: m_vecPlayerPatchEconIndices (uint32)
        // NetworkVarNames: m_GunGameImmunityColor (Color)
        // NetworkVarNames: m_bIsWalking (bool)
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
        // NetworkVarNames: m_flVelocityModifier (float)
        // NetworkVarNames: m_flHitHeading (float)
        // NetworkVarNames: m_nHitBodyPart (int)
        // NetworkVarNames: m_bWaitForNoAttack (bool)
        // NetworkVarNames: m_bKilledByHeadshot (bool)
        // NetworkVarNames: m_ArmorValue (int32)
        // NetworkVarNames: m_unCurrentEquipmentValue (uint16)
        // NetworkVarNames: m_unRoundStartEquipmentValue (uint16)
        // NetworkVarNames: m_unFreezetimeEndEquipmentValue (uint16)
        // NetworkVarNames: m_nLastKillerIndex (CEntityIndex)
        public static class C_CSPlayerPawn {
            public const nint m_pBulletServices = 0x1468; // CCSPlayer_BulletServices*
            public const nint m_pHostageServices = 0x1470; // CCSPlayer_HostageServices*
            public const nint m_pBuyServices = 0x1478; // CCSPlayer_BuyServices*
            public const nint m_pGlowServices = 0x1480; // CCSPlayer_GlowServices*
            public const nint m_pActionTrackingServices = 0x1488; // CCSPlayer_ActionTrackingServices*
            public const nint m_flHealthShotBoostExpirationTime = 0x1490; // GameTime_t
            public const nint m_flLastFiredWeaponTime = 0x1494; // GameTime_t
            public const nint m_bHasFemaleVoice = 0x1498; // bool
            public const nint m_flLandingTimeSeconds = 0x149C; // float32
            public const nint m_flOldFallVelocity = 0x14A0; // float32
            public const nint m_szLastPlaceName = 0x14A4; // char[18]
            public const nint m_bPrevDefuser = 0x14B6; // bool
            public const nint m_bPrevHelmet = 0x14B7; // bool
            public const nint m_nPrevArmorVal = 0x14B8; // int32
            public const nint m_nPrevGrenadeAmmoCount = 0x14BC; // int32
            public const nint m_unPreviousWeaponHash = 0x14C0; // uint32
            public const nint m_unWeaponHash = 0x14C4; // uint32
            public const nint m_bInBuyZone = 0x14C8; // bool
            public const nint m_bPreviouslyInBuyZone = 0x14C9; // bool
            public const nint m_aimPunchAngle = 0x14CC; // QAngle
            public const nint m_aimPunchAngleVel = 0x14D8; // QAngle
            public const nint m_aimPunchTickBase = 0x14E4; // int32
            public const nint m_aimPunchTickFraction = 0x14E8; // float32
            public const nint m_aimPunchCache = 0x14F0; // CUtlVector<QAngle>
            public const nint m_bInLanding = 0x1510; // bool
            public const nint m_flLandingStartTime = 0x1514; // float32
            public const nint m_bInHostageRescueZone = 0x1518; // bool
            public const nint m_bInBombZone = 0x1519; // bool
            public const nint m_bIsBuyMenuOpen = 0x151A; // bool
            public const nint m_flTimeOfLastInjury = 0x151C; // GameTime_t
            public const nint m_flNextSprayDecalTime = 0x1520; // GameTime_t
            public const nint m_iRetakesOffering = 0x1640; // int32
            public const nint m_iRetakesOfferingCard = 0x1644; // int32
            public const nint m_bRetakesHasDefuseKit = 0x1648; // bool
            public const nint m_bRetakesMVPLastRound = 0x1649; // bool
            public const nint m_iRetakesMVPBoostItem = 0x164C; // int32
            public const nint m_RetakesMVPBoostExtraUtility = 0x1650; // loadout_slot_t
            public const nint m_bNeedToReApplyGloves = 0x1670; // bool
            public const nint m_EconGloves = 0x1678; // C_EconItemView
            public const nint m_nEconGlovesChanged = 0x1AC0; // uint8
            public const nint m_bMustSyncRagdollState = 0x1AC1; // bool
            public const nint m_nRagdollDamageBone = 0x1AC4; // int32
            public const nint m_vRagdollDamageForce = 0x1AC8; // Vector
            public const nint m_vRagdollDamagePosition = 0x1AD4; // Vector
            public const nint m_szRagdollDamageWeaponName = 0x1AE0; // char[64]
            public const nint m_bRagdollDamageHeadshot = 0x1B20; // bool
            public const nint m_vRagdollServerOrigin = 0x1B24; // Vector
            public const nint m_bLastHeadBoneTransformIsValid = 0x2138; // bool
            public const nint m_lastLandTime = 0x213C; // GameTime_t
            public const nint m_bOnGroundLastTick = 0x2140; // bool
            public const nint m_qDeathEyeAngles = 0x215C; // QAngle
            public const nint m_bSkipOneHeadConstraintUpdate = 0x2168; // bool
            public const nint m_bLeftHanded = 0x2169; // bool
            public const nint m_fSwitchedHandednessTime = 0x216C; // GameTime_t
            public const nint m_flViewmodelOffsetX = 0x2170; // float32
            public const nint m_flViewmodelOffsetY = 0x2174; // float32
            public const nint m_flViewmodelOffsetZ = 0x2178; // float32
            public const nint m_flViewmodelFOV = 0x217C; // float32
            public const nint m_vecPlayerPatchEconIndices = 0x2180; // uint32[5]
            public const nint m_GunGameImmunityColor = 0x21B8; // Color
            public const nint m_vecBulletHitModels = 0x2208; // CUtlVector<C_BulletHitModel*>
            public const nint m_bIsWalking = 0x2220; // bool
            public const nint m_thirdPersonHeading = 0x2228; // QAngle
            public const nint m_flSlopeDropOffset = 0x2240; // float32
            public const nint m_flSlopeDropHeight = 0x2250; // float32
            public const nint m_vHeadConstraintOffset = 0x2260; // Vector
            public const nint m_entitySpottedState = 0x2278; // EntitySpottedState_t
            public const nint m_bIsScoped = 0x2290; // bool
            public const nint m_bResumeZoom = 0x2291; // bool
            public const nint m_bIsDefusing = 0x2292; // bool
            public const nint m_bIsGrabbingHostage = 0x2293; // bool
            public const nint m_iBlockingUseActionInProgress = 0x2294; // CSPlayerBlockingUseAction_t
            public const nint m_flEmitSoundTime = 0x2298; // GameTime_t
            public const nint m_bInNoDefuseArea = 0x229C; // bool
            public const nint m_nWhichBombZone = 0x22A0; // int32
            public const nint m_iShotsFired = 0x22A4; // int32
            public const nint m_flVelocityModifier = 0x22A8; // float32
            public const nint m_flHitHeading = 0x22AC; // float32
            public const nint m_nHitBodyPart = 0x22B0; // int32
            public const nint m_bWaitForNoAttack = 0x22B4; // bool
            public const nint m_ignoreLadderJumpTime = 0x22B8; // float32
            public const nint m_bKilledByHeadshot = 0x22BD; // bool
            public const nint m_ArmorValue = 0x22C0; // int32
            public const nint m_unCurrentEquipmentValue = 0x22C4; // uint16
            public const nint m_unRoundStartEquipmentValue = 0x22C6; // uint16
            public const nint m_unFreezetimeEndEquipmentValue = 0x22C8; // uint16
            public const nint m_nLastKillerIndex = 0x22CC; // CEntityIndex
            public const nint m_bOldIsScoped = 0x22D0; // bool
            public const nint m_bHasDeathInfo = 0x22D1; // bool
            public const nint m_flDeathInfoTime = 0x22D4; // float32
            public const nint m_vecDeathInfoOrigin = 0x22D8; // Vector
            public const nint m_grenadeParameterStashTime = 0x22E4; // GameTime_t
            public const nint m_bGrenadeParametersStashed = 0x22E8; // bool
            public const nint m_angStashedShootAngles = 0x22EC; // QAngle
            public const nint m_vecStashedGrenadeThrowPosition = 0x22F8; // Vector
            public const nint m_vecStashedVelocity = 0x2304; // Vector
            public const nint m_angShootAngleHistory = 0x2310; // QAngle[2]
            public const nint m_vecThrowPositionHistory = 0x2328; // Vector[2]
            public const nint m_vecVelocityHistory = 0x2340; // Vector[2]
        }
        // Parent: C_RagdollProp
        // Fields count: 7
        //
        // Metadata:
        // NetworkVarNames: m_boneIndexAttached (uint32)
        // NetworkVarNames: m_ragdollAttachedObjectIndex (uint32)
        // NetworkVarNames: m_attachmentPointBoneSpace (Vector)
        // NetworkVarNames: m_attachmentPointRagdollSpace (Vector)
        public static class C_RagdollPropAttached {
            public const nint m_boneIndexAttached = 0xF48; // uint32
            public const nint m_ragdollAttachedObjectIndex = 0xF4C; // uint32
            public const nint m_attachmentPointBoneSpace = 0xF50; // Vector
            public const nint m_attachmentPointRagdollSpace = 0xF5C; // Vector
            public const nint m_vecOffset = 0xF68; // Vector
            public const nint m_parentTime = 0xF74; // float32
            public const nint m_bHasParent = 0xF78; // bool
        }
        // Parent: C_BaseGrenade
        // Fields count: 16
        //
        // Metadata:
        // NetworkVarNames: m_vInitialPosition (Vector)
        // NetworkVarNames: m_vInitialVelocity (Vector)
        // NetworkVarNames: m_nBounces (int)
        // NetworkVarNames: m_nExplodeEffectIndex (HParticleSystemDefinitionStrong)
        // NetworkVarNames: m_nExplodeEffectTickBegin (int)
        // NetworkVarNames: m_vecExplodeEffectOrigin (Vector)
        public static class C_BaseCSGrenadeProjectile {
            public const nint m_vInitialPosition = 0x10B8; // Vector
            public const nint m_vInitialVelocity = 0x10C4; // Vector
            public const nint m_nBounces = 0x10D0; // int32
            public const nint m_nExplodeEffectIndex = 0x10D8; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
            public const nint m_nExplodeEffectTickBegin = 0x10E0; // int32
            public const nint m_vecExplodeEffectOrigin = 0x10E4; // Vector
            public const nint m_flSpawnTime = 0x10F0; // GameTime_t
            public const nint vecLastTrailLinePos = 0x10F4; // Vector
            public const nint flNextTrailLineTime = 0x1100; // GameTime_t
            public const nint m_bExplodeEffectBegan = 0x1104; // bool
            public const nint m_bCanCreateGrenadeTrail = 0x1105; // bool
            public const nint m_nSnapshotTrajectoryEffectIndex = 0x1108; // ParticleIndex_t
            public const nint m_hSnapshotTrajectoryParticleSnapshot = 0x1110; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
            public const nint m_arrTrajectoryTrailPoints = 0x1118; // CUtlVector<Vector>
            public const nint m_arrTrajectoryTrailPointCreationTimes = 0x1130; // CUtlVector<float32>
            public const nint m_flTrajectoryTrailEffectCreationTime = 0x1148; // float32
        }
        // Parent: C_BaseToggle
        // Fields count: 2
        //
        // Metadata:
        // MNetworkIncludeByName
        // NetworkVarNames: m_bDisabled (bool)
        // NetworkVarNames: m_bClientSidePredicted (bool)
        public static class C_BaseTrigger {
            public const nint m_bDisabled = 0xCC8; // bool
            public const nint m_bClientSidePredicted = 0xCC9; // bool
        }
        // Parent: C_CSWeaponBase
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_SequenceCompleteTimer (CountdownTimer)
        // NetworkVarNames: m_bRedraw (bool)
        public static class C_WeaponBaseItem {
            public const nint m_SequenceCompleteTimer = 0x1A80; // CountdownTimer
            public const nint m_bRedraw = 0x1A98; // bool
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
        // Parent: C_BaseCSGrenadeProjectile
        // Fields count: 0
        public static class C_SensorGrenadeProjectile {
        }
        // Parent: C_BaseCSGrenade
        // Fields count: 0
        public static class C_MolotovGrenade {
        }
        // Parent: C_BaseToggle
        // Fields count: 3
        //
        // Metadata:
        // NetworkVarNames: m_glowEntity (CHandle<C_BaseModelEntity>)
        // NetworkVarNames: m_usable (bool)
        // NetworkVarNames: m_szDisplayText (string_t)
        public static class C_BaseButton {
            public const nint m_glowEntity = 0xCC8; // CHandle<C_BaseModelEntity>
            public const nint m_usable = 0xCCC; // bool
            public const nint m_szDisplayText = 0xCD0; // CUtlSymbolLarge
        }
        // Parent: CPlayer_ViewModelServices
        // Fields count: 1
        //
        // Metadata:
        // NetworkVarNames: m_hViewModel (CHandle<CBaseViewModel>)
        public static class CCSPlayer_ViewModelServices {
            public const nint m_hViewModel = 0x40; // CHandle<C_BaseViewModel>[3]
        }
        // Parent: C_PointEntity
        // Fields count: 0
        public static class CInfoParticleTarget {
        }
        // Parent: CPlayer_MovementServices
        // Fields count: 12
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
        }
        // Parent: C_CSWeaponBaseGun
        // Fields count: 0
        public static class C_WeaponAug {
        }
        // Parent: C_BaseClientUIEntity
        // Fields count: 28
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
        public static class C_PointClientUIWorldPanel {
            public const nint m_bForceRecreateNextUpdate = 0xD00; // bool
            public const nint m_bMoveViewToPlayerNextThink = 0xD01; // bool
            public const nint m_bCheckCSSClasses = 0xD02; // bool
            public const nint m_anchorDeltaTransform = 0xD10; // CTransform
            public const nint m_pOffScreenIndicator = 0xEA8; // CPointOffScreenIndicatorUi*
            public const nint m_bIgnoreInput = 0xED0; // bool
            public const nint m_bLit = 0xED1; // bool
            public const nint m_bFollowPlayerAcrossTeleport = 0xED2; // bool
            public const nint m_flWidth = 0xED4; // float32
            public const nint m_flHeight = 0xED8; // float32
            public const nint m_flDPI = 0xEDC; // float32
            public const nint m_flInteractDistance = 0xEE0; // float32
            public const nint m_flDepthOffset = 0xEE4; // float32
            public const nint m_unOwnerContext = 0xEE8; // uint32
            public const nint m_unHorizontalAlign = 0xEEC; // uint32
            public const nint m_unVerticalAlign = 0xEF0; // uint32
            public const nint m_unOrientation = 0xEF4; // uint32
            public const nint m_bAllowInteractionFromAllSceneWorlds = 0xEF8; // bool
            public const nint m_vecCSSClasses = 0xF00; // C_NetworkUtlVectorBase<CUtlSymbolLarge>
            public const nint m_bOpaque = 0xF18; // bool
            public const nint m_bNoDepth = 0xF19; // bool
            public const nint m_bRenderBackface = 0xF1A; // bool
            public const nint m_bUseOffScreenIndicator = 0xF1B; // bool
            public const nint m_bExcludeFromSaveGames = 0xF1C; // bool
            public const nint m_bGrabbable = 0xF1D; // bool
            public const nint m_bOnlyRenderToTexture = 0xF1E; // bool
            public const nint m_bDisableMipGen = 0xF1F; // bool
            public const nint m_nExplicitImageLayout = 0xF20; // int32
        }
        // Parent: C_BaseEntity
        // Fields count: 0
        public static class C_CSMinimapBoundary {
        }
        // Parent: CCSGameModeRules
        // Fields count: 3
        //
        // Metadata:
        // NetworkVarNames: m_flDMBonusStartTime (GameTime_t)
        // NetworkVarNames: m_flDMBonusTimeLength (float)
        // NetworkVarNames: m_sDMBonusWeapon (CUtlString)
        public static class CCSGameModeRules_Deathmatch {
            public const nint m_flDMBonusStartTime = 0x38; // GameTime_t
            public const nint m_flDMBonusTimeLength = 0x3C; // float32
            public const nint m_sDMBonusWeapon = 0x40; // CUtlString
        }
        // Parent: C_CSGO_TeamPreviewCharacterPosition
        // Fields count: 0
        public static class C_CSGO_EndOfMatchCharacterPosition {
        }
        // Parent: C_SoundOpvarSetPointEntity
        // Fields count: 0
        public static class C_SoundOpvarSetAABBEntity {
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // NetworkVarNames: m_nTotalPausedTicks (int)
        // NetworkVarNames: m_nPauseStartTick (int)
        // NetworkVarNames: m_bGamePaused (bool)
        public static class C_GameRules {
            public const nint __m_pChainEntity = 0x8; // CNetworkVarChainer
            public const nint m_nTotalPausedTicks = 0x30; // int32
            public const nint m_nPauseStartTick = 0x34; // int32
            public const nint m_bGamePaused = 0x38; // bool
        }
        // Parent: CBaseAnimGraph
        // Fields count: 0
        public static class C_WorldModelNametag {
        }
        // Parent: C_BasePropDoor
        // Fields count: 0
        public static class C_PropDoorRotating {
        }
        // Parent: C_BaseEntity
        // Fields count: 4
        //
        // Metadata:
        // MNetworkIncludeByName
        // NetworkVarNames: m_aPlayerControllers (CHandle<CBasePlayerController>)
        // NetworkVarNames: m_aPlayers (CHandle<C_BasePlayerPawn>)
        // NetworkVarNames: m_iScore (int32)
        // NetworkVarNames: m_szTeamname (char)
        public static class C_Team {
            public const nint m_aPlayerControllers = 0x548; // C_NetworkUtlVectorBase<CHandle<CBasePlayerController>>
            public const nint m_aPlayers = 0x560; // C_NetworkUtlVectorBase<CHandle<C_BasePlayerPawn>>
            public const nint m_iScore = 0x578; // int32
            public const nint m_szTeamname = 0x57C; // char[129]
        }
        // Parent: C_SoundAreaEntityBase
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_vMin (Vector)
        // NetworkVarNames: m_vMax (Vector)
        public static class C_SoundAreaEntityOrientedBox {
            public const nint m_vMin = 0x570; // Vector
            public const nint m_vMax = 0x57C; // Vector
        }
        // Parent: C_BaseModelEntity
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
        public static class C_TextureBasedAnimatable {
            public const nint m_bLoop = 0xCC8; // bool
            public const nint m_flFPS = 0xCCC; // float32
            public const nint m_hPositionKeys = 0xCD0; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_hRotationKeys = 0xCD8; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_vAnimationBoundsMin = 0xCE0; // Vector
            public const nint m_vAnimationBoundsMax = 0xCEC; // Vector
            public const nint m_flStartTime = 0xCF8; // float32
            public const nint m_flStartFrame = 0xCFC; // float32
        }
        // Parent: C_SoundOpvarSetPointBase
        // Fields count: 0
        public static class C_SoundOpvarSetPointEntity {
        }
        // Parent: CBaseAnimGraph
        // Fields count: 0
        public static class C_WorldModelStattrak {
        }
        // Parent: C_LightEntity
        // Fields count: 0
        public static class C_LightOrthoEntity {
        }
        // Parent: CPlayer_WaterServices
        // Fields count: 3
        public static class CCSPlayer_WaterServices {
            public const nint m_flWaterJumpTime = 0x40; // float32
            public const nint m_vecWaterJumpVel = 0x44; // Vector
            public const nint m_flSwimSoundTime = 0x50; // float32
        }
        // Parent: C_BaseEntity
        // Fields count: 2
        public static class CSkyboxReference {
            public const nint m_worldGroupId = 0x548; // WorldGroupId_t
            public const nint m_hSkyCamera = 0x54C; // CHandle<C_SkyCamera>
        }
        // Parent: C_TonemapController2
        // Fields count: 0
        public static class C_TonemapController2Alias_env_tonemap_controller2 {
        }
        // Parent: None
        // Fields count: 30
        //
        // Metadata:
        // NetworkVarNames: m_hTargetEntity (CHandle<C_BaseEntity>)
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
        // NetworkVarNames: m_flVolumetricIntensity (float32)
        // NetworkVarNames: m_flNoiseStrength (float32)
        // NetworkVarNames: m_flFlashlightTime (float32)
        // NetworkVarNames: m_nNumPlanes (uint32)
        // NetworkVarNames: m_flPlaneOffset (float32)
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
        public static class CProjectedTextureBase {
            public const nint m_hTargetEntity = 0xC; // CHandle<C_BaseEntity>
            public const nint m_bState = 0x10; // bool
            public const nint m_bAlwaysUpdate = 0x11; // bool
            public const nint m_flLightFOV = 0x14; // float32
            public const nint m_bEnableShadows = 0x18; // bool
            public const nint m_bSimpleProjection = 0x19; // bool
            public const nint m_bLightOnlyTarget = 0x1A; // bool
            public const nint m_bLightWorld = 0x1B; // bool
            public const nint m_bCameraSpace = 0x1C; // bool
            public const nint m_flBrightnessScale = 0x20; // float32
            public const nint m_LightColor = 0x24; // Color
            public const nint m_flIntensity = 0x28; // float32
            public const nint m_flLinearAttenuation = 0x2C; // float32
            public const nint m_flQuadraticAttenuation = 0x30; // float32
            public const nint m_bVolumetric = 0x34; // bool
            public const nint m_flVolumetricIntensity = 0x38; // float32
            public const nint m_flNoiseStrength = 0x3C; // float32
            public const nint m_flFlashlightTime = 0x40; // float32
            public const nint m_nNumPlanes = 0x44; // uint32
            public const nint m_flPlaneOffset = 0x48; // float32
            public const nint m_flColorTransitionTime = 0x4C; // float32
            public const nint m_flAmbient = 0x50; // float32
            public const nint m_SpotlightTextureName = 0x54; // char[512]
            public const nint m_nSpotlightTextureFrame = 0x254; // int32
            public const nint m_nShadowQuality = 0x258; // uint32
            public const nint m_flNearZ = 0x25C; // float32
            public const nint m_flFarZ = 0x260; // float32
            public const nint m_flProjectionSize = 0x264; // float32
            public const nint m_flRotation = 0x268; // float32
            public const nint m_bFlipHorizontal = 0x26C; // bool
        }
        // Parent: CPlayerControllerComponent
        // Fields count: 8
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
            public const nint m_vecServerAuthoritativeWeaponSlots = 0x70; // C_UtlVectorEmbeddedNetworkVar<ServerAuthoritativeWeaponSlot_t>
        }
        // Parent: C_PathParticleRope
        // Fields count: 0
        public static class C_PathParticleRopeAlias_path_particle_rope_clientside {
        }
        // Parent: CPlayerPawnComponent
        // Fields count: 0
        public static class CPlayer_UseServices {
        }
        // Parent: C_PredictedViewModel
        // Fields count: 6
        //
        // Metadata:
        // MNetworkOverride
        // NetworkVarNames: m_bShouldIgnoreOffsetAndAccuracy (bool)
        // NetworkVarNames: m_nWeaponParity (uint32)
        public static class C_CSGOViewModel {
            public const nint m_bShouldIgnoreOffsetAndAccuracy = 0xF68; // bool
            public const nint m_nWeaponParity = 0xF6C; // uint32
            public const nint m_nOldWeaponParity = 0xF70; // uint32
            public const nint m_nLastKnownAssociatedWeaponEntIndex = 0xF74; // CEntityIndex
            public const nint m_bNeedToQueueHighResComposite = 0xF78; // bool
            public const nint m_vLoweredWeaponOffset = 0xFC8; // QAngle
        }
        // Parent: CEntityComponent
        // Fields count: 1
        public static class CScriptComponent {
            public const nint m_scriptClassName = 0x30; // CUtlSymbolLarge
        }
        // Parent: C_BaseEntity
        // Fields count: 17
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
        public static class C_EnvLightProbeVolume {
            public const nint m_Entity_hLightProbeTexture = 0x1528; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Entity_hLightProbeDirectLightIndicesTexture = 0x1530; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Entity_hLightProbeDirectLightScalarsTexture = 0x1538; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Entity_hLightProbeDirectLightShadowsTexture = 0x1540; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Entity_vBoxMins = 0x1548; // Vector
            public const nint m_Entity_vBoxMaxs = 0x1554; // Vector
            public const nint m_Entity_bMoveable = 0x1560; // bool
            public const nint m_Entity_nHandshake = 0x1564; // int32
            public const nint m_Entity_nPriority = 0x1568; // int32
            public const nint m_Entity_bStartDisabled = 0x156C; // bool
            public const nint m_Entity_nLightProbeSizeX = 0x1570; // int32
            public const nint m_Entity_nLightProbeSizeY = 0x1574; // int32
            public const nint m_Entity_nLightProbeSizeZ = 0x1578; // int32
            public const nint m_Entity_nLightProbeAtlasX = 0x157C; // int32
            public const nint m_Entity_nLightProbeAtlasY = 0x1580; // int32
            public const nint m_Entity_nLightProbeAtlasZ = 0x1584; // int32
            public const nint m_Entity_bEnabled = 0x1591; // bool
        }
        // Parent: CBaseAnimGraph
        // Fields count: 1
        public static class C_ViewmodelAttachmentModel {
            public const nint m_bShouldFrontFaceCullLeftHanded = 0xED0; // bool
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseProvideFeatureTag
        // MPulseLibraryBindings
        public static class CCSPointScriptExtensions_player_controller {
        }
        // Parent: C_BaseCSGrenade
        // Fields count: 0
        public static class C_Flashbang {
        }
        // Parent: C_CSWeaponBase
        // Fields count: 0
        public static class CBumpMine {
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
        // Parent: C_BaseEntity
        // Fields count: 30
        //
        // Metadata:
        // NetworkVarNames: m_bTimerPaused (bool)
        // NetworkVarNames: m_flTimeRemaining (float)
        // NetworkVarNames: m_flTimerEndTime (GameTime_t)
        // NetworkVarNames: m_bIsDisabled (bool)
        // NetworkVarNames: m_bShowInHUD (bool)
        // NetworkVarNames: m_nTimerLength (int)
        // NetworkVarNames: m_nTimerInitialLength (int)
        // NetworkVarNames: m_nTimerMaxLength (int)
        // NetworkVarNames: m_bAutoCountdown (bool)
        // NetworkVarNames: m_nSetupTimeLength (int)
        // NetworkVarNames: m_nState (int)
        // NetworkVarNames: m_bStartPaused (bool)
        // NetworkVarNames: m_bInCaptureWatchState (bool)
        // NetworkVarNames: m_flTotalTime (float)
        // NetworkVarNames: m_bStopWatchTimer (bool)
        public static class C_TeamRoundTimer {
            public const nint m_bTimerPaused = 0x548; // bool
            public const nint m_flTimeRemaining = 0x54C; // float32
            public const nint m_flTimerEndTime = 0x550; // GameTime_t
            public const nint m_bIsDisabled = 0x554; // bool
            public const nint m_bShowInHUD = 0x555; // bool
            public const nint m_nTimerLength = 0x558; // int32
            public const nint m_nTimerInitialLength = 0x55C; // int32
            public const nint m_nTimerMaxLength = 0x560; // int32
            public const nint m_bAutoCountdown = 0x564; // bool
            public const nint m_nSetupTimeLength = 0x568; // int32
            public const nint m_nState = 0x56C; // int32
            public const nint m_bStartPaused = 0x570; // bool
            public const nint m_bInCaptureWatchState = 0x571; // bool
            public const nint m_flTotalTime = 0x574; // float32
            public const nint m_bStopWatchTimer = 0x578; // bool
            public const nint m_bFireFinished = 0x579; // bool
            public const nint m_bFire5MinRemain = 0x57A; // bool
            public const nint m_bFire4MinRemain = 0x57B; // bool
            public const nint m_bFire3MinRemain = 0x57C; // bool
            public const nint m_bFire2MinRemain = 0x57D; // bool
            public const nint m_bFire1MinRemain = 0x57E; // bool
            public const nint m_bFire30SecRemain = 0x57F; // bool
            public const nint m_bFire10SecRemain = 0x580; // bool
            public const nint m_bFire5SecRemain = 0x581; // bool
            public const nint m_bFire4SecRemain = 0x582; // bool
            public const nint m_bFire3SecRemain = 0x583; // bool
            public const nint m_bFire2SecRemain = 0x584; // bool
            public const nint m_bFire1SecRemain = 0x585; // bool
            public const nint m_nOldTimerLength = 0x588; // int32
            public const nint m_nOldTimerState = 0x58C; // int32
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
        // Parent: C_BaseCSGrenade
        // Fields count: 0
        public static class C_SmokeGrenade {
        }
        // Parent: C_CSWeaponBaseGun
        // Fields count: 0
        public static class C_WeaponGalilAR {
        }
        // Parent: CBaseAnimGraph
        // Fields count: 0
        public static class C_WorldModelGloves {
        }
        // Parent: C_ModelPointEntity
        // Fields count: 0
        public static class C_EnvProjectedTexture {
        }
        // Parent: C_BaseEntity
        // Fields count: 1
        public static class CPathSimple {
            public const nint m_pathString = 0x598; // CUtlString
        }
        // Parent: CPlayer_CameraServices
        // Fields count: 6
        //
        // Metadata:
        // NetworkVarNames: m_iFOV (uint32)
        // NetworkVarNames: m_iFOVStart (uint32)
        // NetworkVarNames: m_flFOVTime (GameTime_t)
        // NetworkVarNames: m_flFOVRate (float32)
        // NetworkVarNames: m_hZoomOwner (CHandle<CBaseEntity>)
        public static class CCSPlayerBase_CameraServices {
            public const nint m_iFOV = 0x210; // uint32
            public const nint m_iFOVStart = 0x214; // uint32
            public const nint m_flFOVTime = 0x218; // GameTime_t
            public const nint m_flFOVRate = 0x21C; // float32
            public const nint m_hZoomOwner = 0x220; // CHandle<C_BaseEntity>
            public const nint m_flLastShotFOV = 0x224; // float32
        }
        // Parent: C_PointClientUIWorldPanel
        // Fields count: 4
        public static class CPointOffScreenIndicatorUi {
            public const nint m_bBeenEnabled = 0xF30; // bool
            public const nint m_bHide = 0xF31; // bool
            public const nint m_flSeenTargetTime = 0xF34; // float32
            public const nint m_pTargetPanel = 0xF38; // C_PointClientUIWorldPanel*
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseProvideFeatureTag
        // MPulseLibraryBindings
        public static class CCSPointScriptExtensions_entity {
        }
        // Parent: CBodyComponentSkeletonInstance
        // Fields count: 0
        public static class CBodyComponentBaseModelEntity {
        }
        // Parent: C_CSWeaponBase
        // Fields count: 6
        //
        // Metadata:
        // NetworkVarNames: m_zoomLevel (int)
        // NetworkVarNames: m_iBurstShotsRemaining (int)
        // NetworkVarNames: m_bNeedsBoltAction (bool)
        public static class C_CSWeaponBaseGun {
            public const nint m_zoomLevel = 0x1A80; // int32
            public const nint m_iBurstShotsRemaining = 0x1A84; // int32
            public const nint m_iSilencerBodygroup = 0x1A88; // int32
            public const nint m_silencedModelIndex = 0x1A98; // int32
            public const nint m_inPrecache = 0x1A9C; // bool
            public const nint m_bNeedsBoltAction = 0x1A9D; // bool
        }
        // Parent: C_BaseEntity
        // Fields count: 4
        //
        // Metadata:
        // NetworkVarNames: m_skyboxData (sky3dparams_t)
        // NetworkVarNames: m_skyboxSlotToken (CUtlStringToken)
        public static class C_SkyCamera {
            public const nint m_skyboxData = 0x548; // sky3dparams_t
            public const nint m_skyboxSlotToken = 0x5D8; // CUtlStringToken
            public const nint m_bUseAngles = 0x5DC; // bool
            public const nint m_pNext = 0x5E0; // C_SkyCamera*
        }
        // Parent: C_BaseModelEntity
        // Fields count: 0
        public static class C_World {
        }
        // Parent: C_BaseModelEntity
        // Fields count: 13
        //
        // Metadata:
        // NetworkVarNames: m_flStartTime (GameTime_t)
        // NetworkVarNames: m_flFadeInStart (float32)
        // NetworkVarNames: m_flFadeInLength (float32)
        // NetworkVarNames: m_flFadeOutModelStart (float32)
        // NetworkVarNames: m_flFadeOutModelLength (float32)
        // NetworkVarNames: m_flFadeOutStart (float32)
        // NetworkVarNames: m_flFadeOutLength (float32)
        // NetworkVarNames: m_nDissolveType (EntityDisolveType_t)
        // NetworkVarNames: m_vDissolverOrigin (Vector)
        // NetworkVarNames: m_nMagnitude (uint32)
        public static class C_EntityDissolve {
            public const nint m_flStartTime = 0xCD0; // GameTime_t
            public const nint m_flFadeInStart = 0xCD4; // float32
            public const nint m_flFadeInLength = 0xCD8; // float32
            public const nint m_flFadeOutModelStart = 0xCDC; // float32
            public const nint m_flFadeOutModelLength = 0xCE0; // float32
            public const nint m_flFadeOutStart = 0xCE4; // float32
            public const nint m_flFadeOutLength = 0xCE8; // float32
            public const nint m_flNextSparkTime = 0xCEC; // GameTime_t
            public const nint m_nDissolveType = 0xCF0; // EntityDisolveType_t
            public const nint m_vDissolverOrigin = 0xCF4; // Vector
            public const nint m_nMagnitude = 0xD00; // uint32
            public const nint m_bCoreExplode = 0xD04; // bool
            public const nint m_bLinkedToServerEnt = 0xD05; // bool
        }
        // Parent: CPlayer_UseServices
        // Fields count: 0
        public static class CCSObserver_UseServices {
        }
        // Parent: None
        // Fields count: 14
        //
        // Metadata:
        // NetworkVarNames: m_hCtrl (CHandle<CFogController>)
        public static class C_fogplayerparams_t {
            public const nint m_hCtrl = 0x8; // CHandle<C_FogController>
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
        // Parent: C_BasePlayerPawn
        // Fields count: 65
        //
        // Metadata:
        // MNetworkExcludeByName
        // MNetworkExcludeByName
        // MNetworkExcludeByUserGroup
        // MNetworkExcludeByName
        // MNetworkExcludeByName
        // NetworkVarNames: m_pPingServices (CCSPlayer_PingServices*)
        // NetworkVarNames: m_pViewModelServices (CPlayer_ViewModelServices*)
        // NetworkVarNames: m_iPlayerState (CSPlayerState)
        // NetworkVarNames: m_bIsRescuing (bool)
        // NetworkVarNames: m_fImmuneToGunGameDamageTime (GameTime_t)
        // NetworkVarNames: m_bGunGameImmunity (bool)
        // NetworkVarNames: m_bHasMovedSinceSpawn (bool)
        // NetworkVarNames: m_fMolotovUseTime (float)
        // NetworkVarNames: m_fMolotovDamageTime (float)
        // NetworkVarNames: m_iThrowGrenadeCounter (int)
        // NetworkVarNames: m_iProgressBarDuration (int)
        // NetworkVarNames: m_flProgressBarStartTime (float)
        // NetworkVarNames: m_flFlashMaxAlpha (float)
        // NetworkVarNames: m_flFlashDuration (float)
        // NetworkVarNames: m_cycleLatch (int)
        // NetworkVarNames: m_hOriginalController (CHandle<CCSPlayerController>)
        public static class C_CSPlayerPawnBase {
            public const nint m_pPingServices = 0x12B0; // CCSPlayer_PingServices*
            public const nint m_pViewModelServices = 0x12B8; // CPlayer_ViewModelServices*
            public const nint m_fRenderingClipPlane = 0x12C0; // float32[4]
            public const nint m_nLastClipPlaneSetupFrame = 0x12D0; // int32
            public const nint m_vecLastClipCameraPos = 0x12D4; // Vector
            public const nint m_vecLastClipCameraForward = 0x12E0; // Vector
            public const nint m_bClipHitStaticWorld = 0x12EC; // bool
            public const nint m_bCachedPlaneIsValid = 0x12ED; // bool
            public const nint m_pClippingWeapon = 0x12F0; // C_CSWeaponBase*
            public const nint m_previousPlayerState = 0x12F8; // CSPlayerState
            public const nint m_iPlayerState = 0x12FC; // CSPlayerState
            public const nint m_bIsRescuing = 0x1300; // bool
            public const nint m_fImmuneToGunGameDamageTime = 0x1304; // GameTime_t
            public const nint m_fImmuneToGunGameDamageTimeLast = 0x1308; // GameTime_t
            public const nint m_bGunGameImmunity = 0x130C; // bool
            public const nint m_bHasMovedSinceSpawn = 0x130D; // bool
            public const nint m_fMolotovUseTime = 0x1310; // float32
            public const nint m_fMolotovDamageTime = 0x1314; // float32
            public const nint m_iThrowGrenadeCounter = 0x1318; // int32
            public const nint m_flLastSpawnTimeIndex = 0x131C; // GameTime_t
            public const nint m_iProgressBarDuration = 0x1320; // int32
            public const nint m_flProgressBarStartTime = 0x1324; // float32
            public const nint m_vecIntroStartEyePosition = 0x1328; // Vector
            public const nint m_vecIntroStartPlayerForward = 0x1334; // Vector
            public const nint m_flClientDeathTime = 0x1340; // GameTime_t
            public const nint m_bScreenTearFrameCaptured = 0x1344; // bool
            public const nint m_flFlashBangTime = 0x1348; // float32
            public const nint m_flFlashScreenshotAlpha = 0x134C; // float32
            public const nint m_flFlashOverlayAlpha = 0x1350; // float32
            public const nint m_bFlashBuildUp = 0x1354; // bool
            public const nint m_bFlashDspHasBeenCleared = 0x1355; // bool
            public const nint m_bFlashScreenshotHasBeenGrabbed = 0x1356; // bool
            public const nint m_flFlashMaxAlpha = 0x1358; // float32
            public const nint m_flFlashDuration = 0x135C; // float32
            public const nint m_iHealthBarRenderMaskIndex = 0x1360; // int32
            public const nint m_flHealthFadeValue = 0x1364; // float32
            public const nint m_flHealthFadeAlpha = 0x1368; // float32
            public const nint m_flDeathCCWeight = 0x1378; // float32
            public const nint m_flPrevRoundEndTime = 0x137C; // float32
            public const nint m_flPrevMatchEndTime = 0x1380; // float32
            public const nint m_angEyeAngles = 0x1388; // QAngle
            public const nint m_fNextThinkPushAway = 0x13A0; // float32
            public const nint m_bShouldAutobuyDMWeapons = 0x13A4; // bool
            public const nint m_bShouldAutobuyNow = 0x13A5; // bool
            public const nint m_iIDEntIndex = 0x13A8; // CEntityIndex
            public const nint m_delayTargetIDTimer = 0x13B0; // CountdownTimer
            public const nint m_iTargetItemEntIdx = 0x13C8; // CEntityIndex
            public const nint m_iOldIDEntIndex = 0x13CC; // CEntityIndex
            public const nint m_holdTargetIDTimer = 0x13D0; // CountdownTimer
            public const nint m_flCurrentMusicStartTime = 0x13EC; // float32
            public const nint m_flMusicRoundStartTime = 0x13F0; // float32
            public const nint m_bDeferStartMusicOnWarmup = 0x13F4; // bool
            public const nint m_cycleLatch = 0x13F8; // int32
            public const nint m_serverIntendedCycle = 0x13FC; // float32
            public const nint m_flLastSmokeOverlayAlpha = 0x1400; // float32
            public const nint m_flLastSmokeAge = 0x1404; // float32
            public const nint m_vLastSmokeOverlayColor = 0x1408; // Vector
            public const nint m_nPlayerSmokedFx = 0x1414; // ParticleIndex_t
            public const nint m_nPlayerInfernoBodyFx = 0x1418; // ParticleIndex_t
            public const nint m_nPlayerInfernoFootFx = 0x141C; // ParticleIndex_t
            public const nint m_flNextMagDropTime = 0x1420; // float32
            public const nint m_nLastMagDropAttachmentIndex = 0x1424; // int32
            public const nint m_vecLastAliveLocalVelocity = 0x1428; // Vector
            public const nint m_bGuardianShouldSprayCustomXMark = 0x1450; // bool
            public const nint m_hOriginalController = 0x1458; // CHandle<CCSPlayerController>
        }
        // Parent: C_WeaponBaseItem
        // Fields count: 0
        public static class C_Item_Healthshot {
        }
        // Parent: None
        // Fields count: 29
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
        public static class C_EnvWindShared {
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
            public const nint m_flVariationTime = 0x70; // GameTime_t
            public const nint m_flSwayTime = 0x74; // GameTime_t
            public const nint m_flSimTime = 0x78; // GameTime_t
            public const nint m_flSwitchTime = 0x7C; // GameTime_t
            public const nint m_flAveWindSpeed = 0x80; // float32
            public const nint m_bGusting = 0x84; // bool
            public const nint m_flWindAngleVariation = 0x88; // float32
            public const nint m_flWindSpeedVariation = 0x8C; // float32
            public const nint m_iEntIndex = 0x90; // CEntityIndex
        }
        // Parent: C_BaseTrigger
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
        public static class C_PostProcessingVolume {
            public const nint m_hPostSettings = 0xCE0; // CStrongHandle<InfoForResourceTypeCPostProcessingResource>
            public const nint m_flFadeDuration = 0xCE8; // float32
            public const nint m_flMinLogExposure = 0xCEC; // float32
            public const nint m_flMaxLogExposure = 0xCF0; // float32
            public const nint m_flMinExposure = 0xCF4; // float32
            public const nint m_flMaxExposure = 0xCF8; // float32
            public const nint m_flExposureCompensation = 0xCFC; // float32
            public const nint m_flExposureFadeSpeedUp = 0xD00; // float32
            public const nint m_flExposureFadeSpeedDown = 0xD04; // float32
            public const nint m_flTonemapEVSmoothingRange = 0xD08; // float32
            public const nint m_bMaster = 0xD0C; // bool
            public const nint m_bExposureControl = 0xD0D; // bool
            public const nint m_flRate = 0xD10; // float32
            public const nint m_flTonemapPercentTarget = 0xD14; // float32
            public const nint m_flTonemapPercentBrightPixels = 0xD18; // float32
            public const nint m_flTonemapMinAvgLum = 0xD1C; // float32
        }
        // Parent: CPlayerPawnComponent
        // Fields count: 1
        //
        // Metadata:
        // NetworkVarNames: m_hPlayerPing (CHandle<CBaseEntity>)
        public static class CCSPlayer_PingServices {
            public const nint m_hPlayerPing = 0x40; // CHandle<C_BaseEntity>
        }
        // Parent: CPlayerPawnComponent
        // Fields count: 0
        public static class CPlayer_FlashlightServices {
        }
        // Parent: C_BaseModelEntity
        // Fields count: 0
        public static class CServerOnlyModelEntity {
        }
        // Parent: CAttributeManager
        // Fields count: 3
        //
        // Metadata:
        // MNetworkIncludeByName
        // MNetworkIncludeByName
        // MNetworkIncludeByName
        // MNetworkIncludeByName
        // NetworkVarNames: m_Item (CEconItemView)
        public static class C_AttributeContainer {
            public const nint m_Item = 0x50; // C_EconItemView
            public const nint m_iExternalItemProviderRegisteredToken = 0x498; // int32
            public const nint m_ullRegisteredAsItemID = 0x4A0; // uint64
        }
        // Parent: C_BaseModelEntity
        // Fields count: 0
        //
        // Metadata:
        // MNetworkOverride
        // MNetworkOverride
        public static class C_FuncRotating {
        }
        // Parent: C_BaseEntity
        // Fields count: 4
        //
        // Metadata:
        // NetworkVarNames: m_flScale (float32)
        // NetworkVarNames: m_flStartScale (float32)
        // NetworkVarNames: m_flScaleTime (float)
        // NetworkVarNames: m_nFlags (uint32)
        public static class C_BaseFire {
            public const nint m_flScale = 0x548; // float32
            public const nint m_flStartScale = 0x54C; // float32
            public const nint m_flScaleTime = 0x550; // float32
            public const nint m_nFlags = 0x554; // uint32
        }
        // Parent: C_BaseEntity
        // Fields count: 16
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
        // MNetworkReplayCompatField
        public static class CBasePlayerController {
            public const nint m_nFinalPredictedTick = 0x550; // int32
            public const nint m_CommandContext = 0x558; // C_CommandContext
            public const nint m_nInButtonsWhichAreToggles = 0x5F0; // uint64
            public const nint m_nTickBase = 0x5F8; // uint32
            public const nint m_hPawn = 0x5FC; // CHandle<C_BasePlayerPawn>
            public const nint m_bKnownTeamMismatch = 0x600; // bool
            public const nint m_hPredictedPawn = 0x604; // CHandle<C_BasePlayerPawn>
            public const nint m_nSplitScreenSlot = 0x608; // CSplitScreenSlot
            public const nint m_hSplitOwner = 0x60C; // CHandle<CBasePlayerController>
            public const nint m_hSplitScreenPlayers = 0x610; // CUtlVector<CHandle<CBasePlayerController>>
            public const nint m_bIsHLTV = 0x628; // bool
            public const nint m_iConnected = 0x62C; // PlayerConnectedState
            public const nint m_iszPlayerName = 0x630; // char[128]
            public const nint m_steamID = 0x6B8; // uint64
            public const nint m_bIsLocalPlayerController = 0x6C0; // bool
            public const nint m_iDesiredFOV = 0x6C4; // uint32
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseProvideFeatureTag
        // MPulseLibraryBindings
        public static class CPointTemplateAPI {
        }
        // Parent: C_BaseCSGrenadeProjectile
        // Fields count: 3
        //
        // Metadata:
        // NetworkVarNames: m_nDecoyShotTick (int)
        public static class C_DecoyProjectile {
            public const nint m_nDecoyShotTick = 0x1150; // int32
            public const nint m_nClientLastKnownDecoyShotTick = 0x1154; // int32
            public const nint m_flTimeParticleEffectSpawn = 0x1178; // GameTime_t
        }
        // Parent: CBaseAnimGraph
        // Fields count: 0
        public static class C_WaterBullet {
        }
        // Parent: C_CSPlayerPawn
        // Fields count: 3
        public static class C_CSGO_PreviewPlayer {
            public const nint m_animgraph = 0x2358; // CUtlString
            public const nint m_animgraphCharacterModeString = 0x2360; // CGlobalSymbol
            public const nint m_flInitialModelScale = 0x2368; // float32
        }
        // Parent: CSkeletonAnimationController
        // Fields count: 14
        //
        // Metadata:
        // NetworkVarNames: m_animGraphNetworkedVars (CAnimGraphNetworkedVariables)
        // NetworkVarNames: m_hSequence (HSequence)
        // NetworkVarNames: m_flSeqStartTime (GameTime_t)
        // NetworkVarNames: m_flSeqFixedCycle (float)
        // NetworkVarNames: m_nAnimLoopMode (AnimLoopMode_t)
        public static class CBaseAnimGraphController {
            public const nint m_animGraphNetworkedVars = 0x18; // CAnimGraphNetworkedVariables
            public const nint m_bSequenceFinished = 0x14A8; // bool
            public const nint m_flSoundSyncTime = 0x14AC; // float32
            public const nint m_nActiveIKChainMask = 0x14B0; // uint32
            public const nint m_hSequence = 0x14B4; // HSequence
            public const nint m_flSeqStartTime = 0x14B8; // GameTime_t
            public const nint m_flSeqFixedCycle = 0x14BC; // float32
            public const nint m_nAnimLoopMode = 0x14C0; // AnimLoopMode_t
            public const nint m_flPlaybackRate = 0x14C4; // CNetworkedQuantizedFloat
            public const nint m_nNotifyState = 0x14D0; // SequenceFinishNotifyState_t
            public const nint m_bNetworkedAnimationInputsChanged = 0x14D2; // bool
            public const nint m_bNetworkedSequenceChanged = 0x14D3; // bool
            public const nint m_bLastUpdateSkipped = 0x14D4; // bool
            public const nint m_flPrevAnimUpdateTime = 0x14D8; // GameTime_t
        }
        // Parent: C_BaseEntity
        // Fields count: 0
        public static class CCSPointScriptEntity {
        }
        // Parent: C_CSWeaponBase
        // Fields count: 11
        //
        // Metadata:
        // NetworkVarNames: m_bStartedArming (bool)
        // NetworkVarNames: m_fArmedTime (GameTime_t)
        // NetworkVarNames: m_bBombPlacedAnimation (bool)
        // NetworkVarNames: m_bIsPlantingViaUse (bool)
        // NetworkVarNames: m_entitySpottedState (EntitySpottedState_t)
        public static class C_C4 {
            public const nint m_szScreenText = 0x1A80; // char[32]
            public const nint m_activeLightParticleIndex = 0x1AA0; // ParticleIndex_t
            public const nint m_eActiveLightEffect = 0x1AA4; // C4LightEffect_t
            public const nint m_bStartedArming = 0x1AA8; // bool
            public const nint m_fArmedTime = 0x1AAC; // GameTime_t
            public const nint m_bBombPlacedAnimation = 0x1AB0; // bool
            public const nint m_bIsPlantingViaUse = 0x1AB1; // bool
            public const nint m_entitySpottedState = 0x1AB8; // EntitySpottedState_t
            public const nint m_nSpotRules = 0x1AD0; // int32
            public const nint m_bPlayedArmingBeeps = 0x1AD4; // bool[7]
            public const nint m_bBombPlanted = 0x1ADB; // bool
        }
        // Parent: C_BaseModelEntity
        // Fields count: 13
        //
        // Metadata:
        // MNetworkIncludeByName
        // NetworkVarNames: m_bInitiallyPopulateInterpHistory (bool)
        // NetworkVarNames: m_bAnimGraphUpdateEnabled (bool)
        // NetworkVarNames: m_vecForce (Vector)
        // NetworkVarNames: m_nForceBone (int32)
        // NetworkVarNames: m_pRagdollPose (PhysicsRagdollPose_t*)
        // NetworkVarNames: m_bRagdollClientSide (bool)
        public static class CBaseAnimGraph {
            public const nint m_bInitiallyPopulateInterpHistory = 0xD40; // bool
            public const nint m_bSuppressAnimEventSounds = 0xD42; // bool
            public const nint m_bAnimGraphUpdateEnabled = 0xD50; // bool
            public const nint m_flMaxSlopeDistance = 0xD54; // float32
            public const nint m_vLastSlopeCheckPos = 0xD58; // Vector
            public const nint m_bAnimationUpdateScheduled = 0xD64; // bool
            public const nint m_vecForce = 0xD68; // Vector
            public const nint m_nForceBone = 0xD74; // int32
            public const nint m_pClientsideRagdoll = 0xD78; // CBaseAnimGraph*
            public const nint m_bBuiltRagdoll = 0xD80; // bool
            public const nint m_pRagdollPose = 0xD98; // PhysicsRagdollPose_t*
            public const nint m_bRagdollClientSide = 0xDA0; // bool
            public const nint m_bHasAnimatedMaterialAttributes = 0xDB0; // bool
        }
        // Parent: C_CSWeaponBase
        // Fields count: 0
        public static class C_Melee {
        }
        // Parent: C_BaseGrenade
        // Fields count: 0
        public static class CBreachChargeProjectile {
        }
        // Parent: C_BaseEntity
        // Fields count: 0
        public static class C_PointEntity {
        }
        // Parent: C_GameRules
        // Fields count: 0
        public static class C_MultiplayRules {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseProvideFeatureTag
        // MPulseLibraryBindings
        public static class CBasePlayerControllerAPI {
        }
        // Parent: C_BaseEntity
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
        public static class C_PathParticleRope {
            public const nint m_bStartActive = 0x548; // bool
            public const nint m_flMaxSimulationTime = 0x54C; // float32
            public const nint m_iszEffectName = 0x550; // CUtlSymbolLarge
            public const nint m_PathNodes_Name = 0x558; // CUtlVector<CUtlSymbolLarge>
            public const nint m_flParticleSpacing = 0x570; // float32
            public const nint m_flSlack = 0x574; // float32
            public const nint m_flRadius = 0x578; // float32
            public const nint m_ColorTint = 0x57C; // Color
            public const nint m_nEffectState = 0x580; // int32
            public const nint m_iEffectIndex = 0x588; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
            public const nint m_PathNodes_Position = 0x590; // C_NetworkUtlVectorBase<Vector>
            public const nint m_PathNodes_TangentIn = 0x5A8; // C_NetworkUtlVectorBase<Vector>
            public const nint m_PathNodes_TangentOut = 0x5C0; // C_NetworkUtlVectorBase<Vector>
            public const nint m_PathNodes_Color = 0x5D8; // C_NetworkUtlVectorBase<Vector>
            public const nint m_PathNodes_PinEnabled = 0x5F0; // C_NetworkUtlVectorBase<bool>
            public const nint m_PathNodes_RadiusScale = 0x608; // C_NetworkUtlVectorBase<float32>
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseProvideFeatureTag
        // MPulseLibraryBindings
        public static class CCSPointScriptExtensions_CCSWeaponBaseVData {
        }
        // Parent: C_SoundEventEntity
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_vMins (Vector)
        // NetworkVarNames: m_vMaxs (Vector)
        public static class C_SoundEventAABBEntity {
            public const nint m_vMins = 0x548; // Vector
            public const nint m_vMaxs = 0x554; // Vector
        }
        // Parent: C_CSWeaponBaseGun
        // Fields count: 0
        public static class C_WeaponP90 {
        }
        // Parent: CBasePulseGraphInstance
        // Fields count: 0
        //
        // Metadata:
        // MPulseInstanceDomainInfo
        // MPulseDomainHookInfo
        // MPulseLibraryBindings
        // MPulseDomainOptInFeatureTag
        public static class CCSGameModeScript {
        }
        // Parent: C_EconEntity
        // Fields count: 7
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
        public static class C_BasePlayerWeapon {
            public const nint m_nNextPrimaryAttackTick = 0x15B0; // GameTick_t
            public const nint m_flNextPrimaryAttackTickRatio = 0x15B4; // float32
            public const nint m_nNextSecondaryAttackTick = 0x15B8; // GameTick_t
            public const nint m_flNextSecondaryAttackTickRatio = 0x15BC; // float32
            public const nint m_iClip1 = 0x15C0; // int32
            public const nint m_iClip2 = 0x15C4; // int32
            public const nint m_pReserveAmmo = 0x15C8; // int32[2]
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
            public const nint m_aShootSounds = 0x220; // CUtlOrderedMap<WeaponSound_t,CSoundEventName>
            public const nint m_iSlot = 0x248; // int32
            public const nint m_iPosition = 0x24C; // int32
        }
        // Parent: CBaseAnimGraph
        // Fields count: 23
        //
        // Metadata:
        // MNetworkIncludeByName
        // MNetworkIncludeByName
        // NetworkVarNames: m_poolOrigin (Vector)
        // NetworkVarNames: m_waterLevel (float32)
        // NetworkVarNames: m_x (float32)
        // NetworkVarNames: m_y (float32)
        // NetworkVarNames: m_z (float32)
        // NetworkVarNames: m_angle (float32)
        public static class C_Fish {
            public const nint m_pos = 0xED0; // Vector
            public const nint m_vel = 0xEDC; // Vector
            public const nint m_angles = 0xEE8; // QAngle
            public const nint m_localLifeState = 0xEF4; // int32
            public const nint m_deathDepth = 0xEF8; // float32
            public const nint m_deathAngle = 0xEFC; // float32
            public const nint m_buoyancy = 0xF00; // float32
            public const nint m_wiggleTimer = 0xF08; // CountdownTimer
            public const nint m_wigglePhase = 0xF20; // float32
            public const nint m_wiggleRate = 0xF24; // float32
            public const nint m_actualPos = 0xF28; // Vector
            public const nint m_actualAngles = 0xF34; // QAngle
            public const nint m_poolOrigin = 0xF40; // Vector
            public const nint m_waterLevel = 0xF4C; // float32
            public const nint m_gotUpdate = 0xF50; // bool
            public const nint m_x = 0xF54; // float32
            public const nint m_y = 0xF58; // float32
            public const nint m_z = 0xF5C; // float32
            public const nint m_angle = 0xF60; // float32
            public const nint m_errorHistory = 0xF64; // float32[20]
            public const nint m_errorHistoryIndex = 0xFB4; // int32
            public const nint m_errorHistoryCount = 0xFB8; // int32
            public const nint m_averageError = 0xFBC; // float32
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
        public static class CTimeline {
            public const nint m_flValues = 0x10; // float32[64]
            public const nint m_nValueCounts = 0x110; // int32[64]
            public const nint m_nBucketCount = 0x210; // int32
            public const nint m_flInterval = 0x214; // float32
            public const nint m_flFinalValue = 0x218; // float32
            public const nint m_nCompressionType = 0x21C; // TimelineCompression_t
            public const nint m_bStopped = 0x220; // bool
        }
        // Parent: C_CSWeaponBaseGun
        // Fields count: 0
        public static class C_WeaponAWP {
        }
        // Parent: C_BaseCombatCharacter
        // Fields count: 28
        //
        // Metadata:
        // MNetworkUserGroupProxy
        // MNetworkUserGroupProxy
        // MNetworkExcludeByUserGroup
        // MNetworkIncludeByUserGroup
        // MNetworkIncludeByUserGroup
        // MNetworkIncludeByUserGroup
        // MNetworkOverride
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
        // NetworkVarNames: m_ServerViewAngleChanges (ViewAngleServerChange_t)
        // NetworkVarNames: m_iHideHUD (uint32)
        // NetworkVarNames: m_skybox3d (sky3dparams_t)
        // NetworkVarNames: m_flDeathTime (GameTime_t)
        // NetworkVarNames: m_hController (CHandle<CBasePlayerController>)
        public static class C_BasePlayerPawn {
            public const nint m_pWeaponServices = 0x10F8; // CPlayer_WeaponServices*
            public const nint m_pItemServices = 0x1100; // CPlayer_ItemServices*
            public const nint m_pAutoaimServices = 0x1108; // CPlayer_AutoaimServices*
            public const nint m_pObserverServices = 0x1110; // CPlayer_ObserverServices*
            public const nint m_pWaterServices = 0x1118; // CPlayer_WaterServices*
            public const nint m_pUseServices = 0x1120; // CPlayer_UseServices*
            public const nint m_pFlashlightServices = 0x1128; // CPlayer_FlashlightServices*
            public const nint m_pCameraServices = 0x1130; // CPlayer_CameraServices*
            public const nint m_pMovementServices = 0x1138; // CPlayer_MovementServices*
            public const nint m_ServerViewAngleChanges = 0x1148; // C_UtlVectorEmbeddedNetworkVar<ViewAngleServerChange_t>
            public const nint m_nHighestConsumedServerViewAngleChangeIndex = 0x1198; // uint32
            public const nint v_angle = 0x119C; // QAngle
            public const nint v_anglePrevious = 0x11A8; // QAngle
            public const nint m_iHideHUD = 0x11B4; // uint32
            public const nint m_skybox3d = 0x11B8; // sky3dparams_t
            public const nint m_flDeathTime = 0x1248; // GameTime_t
            public const nint m_vecPredictionError = 0x124C; // Vector
            public const nint m_flPredictionErrorTime = 0x1258; // GameTime_t
            public const nint m_vecLastCameraSetupLocalOrigin = 0x125C; // Vector
            public const nint m_flLastCameraSetupTime = 0x1268; // GameTime_t
            public const nint m_flFOVSensitivityAdjust = 0x126C; // float32
            public const nint m_flMouseSensitivity = 0x1270; // float32
            public const nint m_vOldOrigin = 0x1274; // Vector
            public const nint m_flOldSimulationTime = 0x1280; // float32
            public const nint m_nLastExecutedCommandNumber = 0x1284; // int32
            public const nint m_nLastExecutedCommandTick = 0x1288; // int32
            public const nint m_hController = 0x128C; // CHandle<CBasePlayerController>
            public const nint m_bIsSwappingToPredictableController = 0x1290; // bool
        }
        // Parent: None
        // Fields count: 6
        //
        // Metadata:
        // NetworkVarNames: m_iReapplyProvisionParity (int)
        // NetworkVarNames: m_hOuter (EHANDLE)
        // NetworkVarNames: m_ProviderType (attributeprovidertypes_t)
        public static class CAttributeManager {
            public const nint m_Providers = 0x8; // CUtlVector<CHandle<C_BaseEntity>>
            public const nint m_iReapplyProvisionParity = 0x20; // int32
            public const nint m_hOuter = 0x24; // CHandle<C_BaseEntity>
            public const nint m_bPreventLoopback = 0x28; // bool
            public const nint m_ProviderType = 0x2C; // attributeprovidertypes_t
            public const nint m_CachedResults = 0x30; // CUtlVector<CAttributeManager::cached_attribute_float_t>
        }
        // Parent: C_BaseEntity
        // Fields count: 0
        public static class CLogicalEntity {
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
        public static class CAnimGraphNetworkedVariables {
            public const nint m_PredNetBoolVariables = 0x8; // C_NetworkUtlVectorBase<uint32>
            public const nint m_PredNetByteVariables = 0x20; // C_NetworkUtlVectorBase<uint8>
            public const nint m_PredNetUInt16Variables = 0x38; // C_NetworkUtlVectorBase<uint16>
            public const nint m_PredNetIntVariables = 0x50; // C_NetworkUtlVectorBase<int32>
            public const nint m_PredNetUInt32Variables = 0x68; // C_NetworkUtlVectorBase<uint32>
            public const nint m_PredNetUInt64Variables = 0x80; // C_NetworkUtlVectorBase<uint64>
            public const nint m_PredNetFloatVariables = 0x98; // C_NetworkUtlVectorBase<float32>
            public const nint m_PredNetVectorVariables = 0xB0; // C_NetworkUtlVectorBase<Vector>
            public const nint m_PredNetQuaternionVariables = 0xC8; // C_NetworkUtlVectorBase<Quaternion>
            public const nint m_PredNetGlobalSymbolVariables = 0xE0; // C_NetworkUtlVectorBase<CGlobalSymbol>
            public const nint m_OwnerOnlyPredNetBoolVariables = 0xF8; // C_NetworkUtlVectorBase<uint32>
            public const nint m_OwnerOnlyPredNetByteVariables = 0x110; // C_NetworkUtlVectorBase<uint8>
            public const nint m_OwnerOnlyPredNetUInt16Variables = 0x128; // C_NetworkUtlVectorBase<uint16>
            public const nint m_OwnerOnlyPredNetIntVariables = 0x140; // C_NetworkUtlVectorBase<int32>
            public const nint m_OwnerOnlyPredNetUInt32Variables = 0x158; // C_NetworkUtlVectorBase<uint32>
            public const nint m_OwnerOnlyPredNetUInt64Variables = 0x170; // C_NetworkUtlVectorBase<uint64>
            public const nint m_OwnerOnlyPredNetFloatVariables = 0x188; // C_NetworkUtlVectorBase<float32>
            public const nint m_OwnerOnlyPredNetVectorVariables = 0x1A0; // C_NetworkUtlVectorBase<Vector>
            public const nint m_OwnerOnlyPredNetQuaternionVariables = 0x1B8; // C_NetworkUtlVectorBase<Quaternion>
            public const nint m_OwnerOnlyPredNetGlobalSymbolVariables = 0x1D0; // C_NetworkUtlVectorBase<CGlobalSymbol>
            public const nint m_nBoolVariablesCount = 0x1E8; // int32
            public const nint m_nOwnerOnlyBoolVariablesCount = 0x1EC; // int32
            public const nint m_nRandomSeedOffset = 0x1F0; // int32
            public const nint m_flLastTeleportTime = 0x1F4; // float32
        }
        // Parent: C_BaseTrigger
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_flFluidDensity (float)
        public static class C_TriggerBuoyancy {
            public const nint m_BuoyancyHelper = 0xCD0; // CBuoyancyHelper
            public const nint m_flFluidDensity = 0xCF0; // float32
        }
        // Parent: C_BaseModelEntity
        // Fields count: 41
        //
        // Metadata:
        // MNetworkIncludeByUserGroup
        // MNetworkIncludeByName
        // MNetworkIncludeByName
        // MNetworkIncludeByName
        // MNetworkIncludeByName
        // MNetworkIncludeByName
        // MNetworkIncludeByName
        // NetworkVarNames: m_flScrollSpeed (float32)
        // NetworkVarNames: m_RopeFlags (uint16)
        // NetworkVarNames: m_iRopeMaterialModelIndex (HMaterialStrong)
        // NetworkVarNames: m_nSegments (uint8)
        // NetworkVarNames: m_hStartPoint (CHandle<C_BaseEntity>)
        // NetworkVarNames: m_hEndPoint (CHandle<C_BaseEntity>)
        // NetworkVarNames: m_iStartAttachment (AttachmentHandle_t)
        // NetworkVarNames: m_iEndAttachment (AttachmentHandle_t)
        // NetworkVarNames: m_Subdiv (uint8)
        // NetworkVarNames: m_RopeLength (int16)
        // NetworkVarNames: m_Slack (int16)
        // NetworkVarNames: m_TextureScale (float32)
        // NetworkVarNames: m_fLockedPoints (uint8)
        // NetworkVarNames: m_nChangeCount (uint8)
        // NetworkVarNames: m_Width (float32)
        // NetworkVarNames: m_bConstrainBetweenEndpoints (bool)
        public static class C_RopeKeyframe {
            public const nint m_LinksTouchingSomething = 0xCD0; // CBitVec<10>
            public const nint m_nLinksTouchingSomething = 0xCD4; // int32
            public const nint m_bApplyWind = 0xCD8; // bool
            public const nint m_fPrevLockedPoints = 0xCDC; // int32
            public const nint m_iForcePointMoveCounter = 0xCE0; // int32
            public const nint m_bPrevEndPointPos = 0xCE4; // bool[2]
            public const nint m_vPrevEndPointPos = 0xCE8; // Vector[2]
            public const nint m_flCurScroll = 0xD00; // float32
            public const nint m_flScrollSpeed = 0xD04; // float32
            public const nint m_RopeFlags = 0xD08; // uint16
            public const nint m_iRopeMaterialModelIndex = 0xD10; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_LightValues = 0xF88; // Vector[10]
            public const nint m_nSegments = 0x1000; // uint8
            public const nint m_hStartPoint = 0x1004; // CHandle<C_BaseEntity>
            public const nint m_hEndPoint = 0x1008; // CHandle<C_BaseEntity>
            public const nint m_iStartAttachment = 0x100C; // AttachmentHandle_t
            public const nint m_iEndAttachment = 0x100D; // AttachmentHandle_t
            public const nint m_Subdiv = 0x100E; // uint8
            public const nint m_RopeLength = 0x1010; // int16
            public const nint m_Slack = 0x1012; // int16
            public const nint m_TextureScale = 0x1014; // float32
            public const nint m_fLockedPoints = 0x1018; // uint8
            public const nint m_nChangeCount = 0x1019; // uint8
            public const nint m_Width = 0x101C; // float32
            public const nint m_PhysicsDelegate = 0x1020; // C_RopeKeyframe::CPhysicsDelegate
            public const nint m_hMaterial = 0x1030; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_TextureHeight = 0x1038; // int32
            public const nint m_vecImpulse = 0x103C; // Vector
            public const nint m_vecPreviousImpulse = 0x1048; // Vector
            public const nint m_flCurrentGustTimer = 0x1054; // float32
            public const nint m_flCurrentGustLifetime = 0x1058; // float32
            public const nint m_flTimeToNextGust = 0x105C; // float32
            public const nint m_vWindDir = 0x1060; // Vector
            public const nint m_vColorMod = 0x106C; // Vector
            public const nint m_vCachedEndPointAttachmentPos = 0x1078; // Vector[2]
            public const nint m_vCachedEndPointAttachmentAngle = 0x1090; // QAngle[2]
            public const nint m_bConstrainBetweenEndpoints = 0x10A8; // bool
            public const nint m_bEndPointAttachmentPositionsDirty = 0x0; // bitfield:1
            public const nint m_bEndPointAttachmentAnglesDirty = 0x0; // bitfield:1
            public const nint m_bNewDataThisFrame = 0x0; // bitfield:1
            public const nint m_bPhysicsInitted = 0x0; // bitfield:1
        }
        // Parent: C_BaseEntity
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
        public static class C_GradientFog {
            public const nint m_hGradientFogTexture = 0x548; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_flFogStartDistance = 0x550; // float32
            public const nint m_flFogEndDistance = 0x554; // float32
            public const nint m_bHeightFogEnabled = 0x558; // bool
            public const nint m_flFogStartHeight = 0x55C; // float32
            public const nint m_flFogEndHeight = 0x560; // float32
            public const nint m_flFarZ = 0x564; // float32
            public const nint m_flFogMaxOpacity = 0x568; // float32
            public const nint m_flFogFalloffExponent = 0x56C; // float32
            public const nint m_flFogVerticalExponent = 0x570; // float32
            public const nint m_fogColor = 0x574; // Color
            public const nint m_flFogStrength = 0x578; // float32
            public const nint m_flFadeTime = 0x57C; // float32
            public const nint m_bStartDisabled = 0x580; // bool
            public const nint m_bIsEnabled = 0x581; // bool
            public const nint m_bGradientFogNeedsTextures = 0x582; // bool
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
        // Parent: C_CSGO_MapPreviewCameraPath
        // Fields count: 7
        public static class C_CSGO_TeamPreviewCamera {
            public const nint m_nVariant = 0x5B0; // int32
            public const nint m_bDofEnabled = 0x5B4; // bool
            public const nint m_flDofNearBlurry = 0x5B8; // float32
            public const nint m_flDofNearCrisp = 0x5BC; // float32
            public const nint m_flDofFarCrisp = 0x5C0; // float32
            public const nint m_flDofFarBlurry = 0x5C4; // float32
            public const nint m_flDofTiltToGround = 0x5C8; // float32
        }
        // Parent: CCSPlayerBase_CameraServices
        // Fields count: 1
        public static class CCSPlayer_CameraServices {
            public const nint m_flDeathCamTilt = 0x228; // float32
        }
        // Parent: C_CSGO_TeamSelectCharacterPosition
        // Fields count: 0
        public static class C_CSGO_TeamSelectCounterTerroristPosition {
        }
        // Parent: C_EconEntity
        // Fields count: 2
        public static class C_EconWearable {
            public const nint m_nForceSkin = 0x15B0; // int32
            public const nint m_bAlwaysAllow = 0x15B4; // bool
        }
        // Parent: C_CSGO_TeamIntroCharacterPosition
        // Fields count: 0
        public static class CCSGO_WingmanIntroCharacterPosition {
        }
        // Parent: CSPerRoundStats_t
        // Fields count: 5
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
        }
        // Parent: C_BaseModelEntity
        // Fields count: 0
        public static class C_BaseToggle {
        }
        // Parent: C_BaseEntity
        // Fields count: 15
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
        public static class C_EnvVolumetricFogVolume {
            public const nint m_bActive = 0x548; // bool
            public const nint m_vBoxMins = 0x54C; // Vector
            public const nint m_vBoxMaxs = 0x558; // Vector
            public const nint m_bStartDisabled = 0x564; // bool
            public const nint m_flStrength = 0x568; // float32
            public const nint m_nFalloffShape = 0x56C; // int32
            public const nint m_flFalloffExponent = 0x570; // float32
            public const nint m_flHeightFogDepth = 0x574; // float32
            public const nint m_fHeightFogEdgeWidth = 0x578; // float32
            public const nint m_fIndirectLightStrength = 0x57C; // float32
            public const nint m_fSunLightStrength = 0x580; // float32
            public const nint m_fNoiseStrength = 0x584; // float32
            public const nint m_bOverrideIndirectLightStrength = 0x588; // bool
            public const nint m_bOverrideSunLightStrength = 0x589; // bool
            public const nint m_bOverrideNoiseStrength = 0x58A; // bool
        }
        // Parent: C_BaseModelEntity
        // Fields count: 0
        public static class CWaterSplasher {
        }
        // Parent: C_BaseModelEntity
        // Fields count: 0
        public static class C_ModelPointEntity {
        }
        // Parent: CPlayer_ViewModelServices
        // Fields count: 0
        public static class CCSObserver_ViewModelServices {
        }
        // Parent: C_BaseFire
        // Fields count: 13
        //
        // Metadata:
        // MNetworkOverride
        // MNetworkOverride
        // NetworkVarNames: m_nFlameModelIndex (int32)
        // NetworkVarNames: m_nFlameFromAboveModelIndex (int32)
        public static class C_FireSmoke {
            public const nint m_nFlameModelIndex = 0x558; // int32
            public const nint m_nFlameFromAboveModelIndex = 0x55C; // int32
            public const nint m_flScaleRegister = 0x560; // float32
            public const nint m_flScaleStart = 0x564; // float32
            public const nint m_flScaleEnd = 0x568; // float32
            public const nint m_flScaleTimeStart = 0x56C; // GameTime_t
            public const nint m_flScaleTimeEnd = 0x570; // GameTime_t
            public const nint m_flChildFlameSpread = 0x574; // float32
            public const nint m_flClipPerc = 0x588; // float32
            public const nint m_bClipTested = 0x58C; // bool
            public const nint m_bFadingOut = 0x58D; // bool
            public const nint m_tParticleSpawn = 0x590; // TimedEvent
            public const nint m_pFireOverlay = 0x598; // CFireOverlay*
        }
        // Parent: C_CSWeaponBaseGun
        // Fields count: 0
        public static class C_WeaponRevolver {
        }
        // Parent: C_Sprite
        // Fields count: 0
        public static class C_FireFromAboveSprite {
        }
        // Parent: C_BaseEntity
        // Fields count: 24
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
        public static class C_EnvCombinedLightProbeVolume {
            public const nint m_Entity_Color = 0x15A8; // Color
            public const nint m_Entity_flBrightness = 0x15AC; // float32
            public const nint m_Entity_hCubemapTexture = 0x15B0; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Entity_bCustomCubemapTexture = 0x15B8; // bool
            public const nint m_Entity_hLightProbeTexture = 0x15C0; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Entity_hLightProbeDirectLightIndicesTexture = 0x15C8; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Entity_hLightProbeDirectLightScalarsTexture = 0x15D0; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Entity_hLightProbeDirectLightShadowsTexture = 0x15D8; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Entity_vBoxMins = 0x15E0; // Vector
            public const nint m_Entity_vBoxMaxs = 0x15EC; // Vector
            public const nint m_Entity_bMoveable = 0x15F8; // bool
            public const nint m_Entity_nHandshake = 0x15FC; // int32
            public const nint m_Entity_nEnvCubeMapArrayIndex = 0x1600; // int32
            public const nint m_Entity_nPriority = 0x1604; // int32
            public const nint m_Entity_bStartDisabled = 0x1608; // bool
            public const nint m_Entity_flEdgeFadeDist = 0x160C; // float32
            public const nint m_Entity_vEdgeFadeDists = 0x1610; // Vector
            public const nint m_Entity_nLightProbeSizeX = 0x161C; // int32
            public const nint m_Entity_nLightProbeSizeY = 0x1620; // int32
            public const nint m_Entity_nLightProbeSizeZ = 0x1624; // int32
            public const nint m_Entity_nLightProbeAtlasX = 0x1628; // int32
            public const nint m_Entity_nLightProbeAtlasY = 0x162C; // int32
            public const nint m_Entity_nLightProbeAtlasZ = 0x1630; // int32
            public const nint m_Entity_bEnabled = 0x1649; // bool
        }
        // Parent: C_SoundOpvarSetPointBase
        // Fields count: 0
        public static class C_SoundOpvarSetOBBWindEntity {
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // NetworkVarNames: m_Handle (ModelConfigHandle_t)
        // NetworkVarNames: m_Name (string_t)
        // NetworkVarNames: m_AssociatedEntities (CHandle<C_BaseModelEntity>)
        // NetworkVarNames: m_AssociatedEntityNames (string_t)
        public static class ActiveModelConfig_t {
            public const nint m_Handle = 0x28; // ModelConfigHandle_t
            public const nint m_Name = 0x30; // CUtlSymbolLarge
            public const nint m_AssociatedEntities = 0x38; // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
            public const nint m_AssociatedEntityNames = 0x50; // C_NetworkUtlVectorBase<CUtlSymbolLarge>
        }
        // Parent: C_CSWeaponBaseGun
        // Fields count: 0
        public static class C_WeaponMP5SD {
        }
        // Parent: C_DynamicProp
        // Fields count: 0
        public static class C_DynamicPropAlias_dynamic_prop {
        }
        // Parent: CPlayerPawnComponent
        // Fields count: 1
        //
        // Metadata:
        // NetworkVarNames: m_totalHitsOnServer (int32)
        public static class CCSPlayer_BulletServices {
            public const nint m_totalHitsOnServer = 0x40; // int32
        }
        // Parent: CLogicalEntity
        // Fields count: 7
        public static class CLogicRelay {
            public const nint m_OnTrigger = 0x548; // CEntityIOOutput
            public const nint m_OnSpawn = 0x570; // CEntityIOOutput
            public const nint m_bDisabled = 0x598; // bool
            public const nint m_bWaitForRefire = 0x599; // bool
            public const nint m_bTriggerOnce = 0x59A; // bool
            public const nint m_bFastRetrigger = 0x59B; // bool
            public const nint m_bPassthoughCaller = 0x59C; // bool
        }
        // Parent: C_PointCamera
        // Fields count: 1
        public static class C_PointCameraVFOV {
            public const nint m_flVerticalFOV = 0x5A8; // float32
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
        // Parent: C_BaseModelEntity
        // Fields count: 51
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
        // NetworkVarNames: m_LightStyleTargets (CHandle<C_BaseModelEntity>)
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
        public static class C_BarnLight {
            public const nint m_bEnabled = 0xCC8; // bool
            public const nint m_nColorMode = 0xCCC; // int32
            public const nint m_Color = 0xCD0; // Color
            public const nint m_flColorTemperature = 0xCD4; // float32
            public const nint m_flBrightness = 0xCD8; // float32
            public const nint m_flBrightnessScale = 0xCDC; // float32
            public const nint m_nDirectLight = 0xCE0; // int32
            public const nint m_nBakedShadowIndex = 0xCE4; // int32
            public const nint m_nLuminaireShape = 0xCE8; // int32
            public const nint m_flLuminaireSize = 0xCEC; // float32
            public const nint m_flLuminaireAnisotropy = 0xCF0; // float32
            public const nint m_LightStyleString = 0xCF8; // CUtlString
            public const nint m_flLightStyleStartTime = 0xD00; // GameTime_t
            public const nint m_QueuedLightStyleStrings = 0xD08; // C_NetworkUtlVectorBase<CUtlString>
            public const nint m_LightStyleEvents = 0xD20; // C_NetworkUtlVectorBase<CUtlString>
            public const nint m_LightStyleTargets = 0xD38; // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
            public const nint m_StyleEvent = 0xD50; // CEntityIOOutput[4]
            public const nint m_hLightCookie = 0xDF0; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_flShape = 0xDF8; // float32
            public const nint m_flSoftX = 0xDFC; // float32
            public const nint m_flSoftY = 0xE00; // float32
            public const nint m_flSkirt = 0xE04; // float32
            public const nint m_flSkirtNear = 0xE08; // float32
            public const nint m_vSizeParams = 0xE0C; // Vector
            public const nint m_flRange = 0xE18; // float32
            public const nint m_vShear = 0xE1C; // Vector
            public const nint m_nBakeSpecularToCubemaps = 0xE28; // int32
            public const nint m_vBakeSpecularToCubemapsSize = 0xE2C; // Vector
            public const nint m_nCastShadows = 0xE38; // int32
            public const nint m_nShadowMapSize = 0xE3C; // int32
            public const nint m_nShadowPriority = 0xE40; // int32
            public const nint m_bContactShadow = 0xE44; // bool
            public const nint m_nBounceLight = 0xE48; // int32
            public const nint m_flBounceScale = 0xE4C; // float32
            public const nint m_flMinRoughness = 0xE50; // float32
            public const nint m_vAlternateColor = 0xE54; // Vector
            public const nint m_fAlternateColorBrightness = 0xE60; // float32
            public const nint m_nFog = 0xE64; // int32
            public const nint m_flFogStrength = 0xE68; // float32
            public const nint m_nFogShadows = 0xE6C; // int32
            public const nint m_flFogScale = 0xE70; // float32
            public const nint m_flFadeSizeStart = 0xE74; // float32
            public const nint m_flFadeSizeEnd = 0xE78; // float32
            public const nint m_flShadowFadeSizeStart = 0xE7C; // float32
            public const nint m_flShadowFadeSizeEnd = 0xE80; // float32
            public const nint m_bPrecomputedFieldsValid = 0xE84; // bool
            public const nint m_vPrecomputedBoundsMins = 0xE88; // Vector
            public const nint m_vPrecomputedBoundsMaxs = 0xE94; // Vector
            public const nint m_vPrecomputedOBBOrigin = 0xEA0; // Vector
            public const nint m_vPrecomputedOBBAngles = 0xEAC; // QAngle
            public const nint m_vPrecomputedOBBExtent = 0xEB8; // Vector
        }
        // Parent: C_BaseEntity
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
        public static class C_TonemapController2 {
            public const nint m_flAutoExposureMin = 0x548; // float32
            public const nint m_flAutoExposureMax = 0x54C; // float32
            public const nint m_flTonemapPercentTarget = 0x550; // float32
            public const nint m_flTonemapPercentBrightPixels = 0x554; // float32
            public const nint m_flTonemapMinAvgLum = 0x558; // float32
            public const nint m_flExposureAdaptationSpeedUp = 0x55C; // float32
            public const nint m_flExposureAdaptationSpeedDown = 0x560; // float32
            public const nint m_flTonemapEVSmoothingRange = 0x564; // float32
        }
        // Parent: C_CSWeaponBaseGun
        // Fields count: 0
        public static class C_WeaponG3SG1 {
        }
        // Parent: C_BaseModelEntity
        // Fields count: 1
        public static class CFuncWater {
            public const nint m_BuoyancyHelper = 0xCC8; // CBuoyancyHelper
        }
        // Parent: C_SoundOpvarSetPointEntity
        // Fields count: 0
        public static class C_SoundOpvarSetAutoRoomEntity {
        }
        // Parent: C_BaseFlex
        // Fields count: 20
        //
        // Metadata:
        // NetworkVarNames: m_AttributeManager (CAttributeContainer)
        // NetworkVarNames: m_OriginalOwnerXuidLow (uint32)
        // NetworkVarNames: m_OriginalOwnerXuidHigh (uint32)
        // NetworkVarNames: m_nFallbackPaintKit (int)
        // NetworkVarNames: m_nFallbackSeed (int)
        // NetworkVarNames: m_flFallbackWear (float)
        // NetworkVarNames: m_nFallbackStatTrak (int)
        public static class C_EconEntity {
            public const nint m_flFlexDelayTime = 0x1078; // float32
            public const nint m_flFlexDelayedWeight = 0x1080; // float32*
            public const nint m_bAttributesInitialized = 0x1088; // bool
            public const nint m_AttributeManager = 0x1090; // C_AttributeContainer
            public const nint m_OriginalOwnerXuidLow = 0x1538; // uint32
            public const nint m_OriginalOwnerXuidHigh = 0x153C; // uint32
            public const nint m_nFallbackPaintKit = 0x1540; // int32
            public const nint m_nFallbackSeed = 0x1544; // int32
            public const nint m_flFallbackWear = 0x1548; // float32
            public const nint m_nFallbackStatTrak = 0x154C; // int32
            public const nint m_bClientside = 0x1550; // bool
            public const nint m_bParticleSystemsCreated = 0x1551; // bool
            public const nint m_vecAttachedParticles = 0x1558; // CUtlVector<int32>
            public const nint m_hViewmodelAttachment = 0x1570; // CHandle<CBaseAnimGraph>
            public const nint m_iOldTeam = 0x1574; // int32
            public const nint m_bAttachmentDirty = 0x1578; // bool
            public const nint m_nUnloadedModelIndex = 0x157C; // int32
            public const nint m_iNumOwnerValidationRetries = 0x1580; // int32
            public const nint m_hOldProvidee = 0x1590; // CHandle<C_BaseEntity>
            public const nint m_vecAttachedModels = 0x1598; // CUtlVector<C_EconEntity::AttachedModelData_t>
        }
        // Parent: C_CSWeaponBaseGun
        // Fields count: 0
        public static class C_WeaponSG556 {
        }
        // Parent: C_BarnLight
        // Fields count: 1
        //
        // Metadata:
        // NetworkVarNames: m_bShowLight (bool)
        public static class C_RectLight {
            public const nint m_bShowLight = 0xF10; // bool
        }
        // Parent: C_BaseModelEntity
        // Fields count: 24
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
        public static class C_ParticleSystem {
            public const nint m_szSnapshotFileName = 0xCC8; // char[512]
            public const nint m_bActive = 0xEC8; // bool
            public const nint m_bFrozen = 0xEC9; // bool
            public const nint m_flFreezeTransitionDuration = 0xECC; // float32
            public const nint m_nStopType = 0xED0; // int32
            public const nint m_bAnimateDuringGameplayPause = 0xED4; // bool
            public const nint m_iEffectIndex = 0xED8; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
            public const nint m_flStartTime = 0xEE0; // GameTime_t
            public const nint m_flPreSimTime = 0xEE4; // float32
            public const nint m_vServerControlPoints = 0xEE8; // Vector[4]
            public const nint m_iServerControlPointAssignments = 0xF18; // uint8[4]
            public const nint m_hControlPointEnts = 0xF1C; // CHandle<C_BaseEntity>[64]
            public const nint m_bNoSave = 0x101C; // bool
            public const nint m_bNoFreeze = 0x101D; // bool
            public const nint m_bNoRamp = 0x101E; // bool
            public const nint m_bStartActive = 0x101F; // bool
            public const nint m_iszEffectName = 0x1020; // CUtlSymbolLarge
            public const nint m_iszControlPointNames = 0x1028; // CUtlSymbolLarge[64]
            public const nint m_nDataCP = 0x1228; // int32
            public const nint m_vecDataCPValue = 0x122C; // Vector
            public const nint m_nTintCP = 0x1238; // int32
            public const nint m_clrTint = 0x123C; // Color
            public const nint m_bOldActive = 0x1260; // bool
            public const nint m_bOldFrozen = 0x1261; // bool
        }
        // Parent: C_CSGO_PreviewPlayer
        // Fields count: 0
        public static class C_CSGO_TeamPreviewModel {
        }
        // Parent: C_CSWeaponBaseGun
        // Fields count: 0
        public static class C_WeaponGlock {
        }
        // Parent: C_GameRulesProxy
        // Fields count: 1
        //
        // Metadata:
        // NetworkVarNames: m_pGameRules (C_CSGameRules*)
        public static class C_CSGameRulesProxy {
            public const nint m_pGameRules = 0x548; // C_CSGameRules*
        }
        // Parent: CPlayerPawnComponent
        // Fields count: 6
        //
        // Metadata:
        // NetworkVarNames: m_iObserverMode (uint8)
        // NetworkVarNames: m_hObserverTarget (CHandle<CBaseEntity>)
        public static class CPlayer_ObserverServices {
            public const nint m_iObserverMode = 0x40; // uint8
            public const nint m_hObserverTarget = 0x44; // CHandle<C_BaseEntity>
            public const nint m_iObserverLastMode = 0x48; // ObserverMode_t
            public const nint m_bForcedObserverMode = 0x4C; // bool
            public const nint m_flObserverChaseDistance = 0x50; // float32
            public const nint m_flObserverChaseDistanceCalcTime = 0x54; // GameTime_t
        }
        // Parent: C_CSWeaponBaseGun
        // Fields count: 0
        public static class CWeaponZoneRepulsor {
        }
        // Parent: CPlayerPawnComponent
        // Fields count: 0
        public static class CPlayer_WaterServices {
        }
        // Parent: C_CSGO_EndOfMatchLineupEndpoint
        // Fields count: 0
        public static class C_CSGO_EndOfMatchLineupEnd {
        }
        // Parent: None
        // Fields count: 6
        public static class SequenceHistory_t {
            public const nint m_hSequence = 0x0; // HSequence
            public const nint m_flSeqStartTime = 0x4; // GameTime_t
            public const nint m_flSeqFixedCycle = 0x8; // float32
            public const nint m_nSeqLoopMode = 0xC; // AnimLoopMode_t
            public const nint m_flPlaybackRate = 0x10; // float32
            public const nint m_flCyclesPerSecond = 0x14; // float32
        }
        // Parent: CBaseAnimGraph
        // Fields count: 1
        public static class C_Multimeter {
            public const nint m_hTargetC4 = 0xED8; // CHandle<C_PlantedC4>
        }
        // Parent: C_BaseEntity
        // Fields count: 2
        public static class C_CsmFovOverride {
            public const nint m_cameraName = 0x548; // CUtlString
            public const nint m_flCsmFovOverrideValue = 0x550; // float32
        }
        // Parent: C_BaseModelEntity
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
        public static class C_EnvDecal {
            public const nint m_hDecalMaterial = 0xCC8; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_flWidth = 0xCD0; // float32
            public const nint m_flHeight = 0xCD4; // float32
            public const nint m_flDepth = 0xCD8; // float32
            public const nint m_nRenderOrder = 0xCDC; // uint32
            public const nint m_bProjectOnWorld = 0xCE0; // bool
            public const nint m_bProjectOnCharacters = 0xCE1; // bool
            public const nint m_bProjectOnWater = 0xCE2; // bool
            public const nint m_flDepthSortBias = 0xCE4; // float32
        }
        // Parent: CCSGameModeRules
        // Fields count: 0
        public static class CCSGameModeRules_Noop {
        }
        // Parent: C_BaseEntity
        // Fields count: 18
        //
        // Metadata:
        // MNetworkIncludeByUserGroup
        // NetworkVarNames: m_MinFalloff (float32)
        // NetworkVarNames: m_MaxFalloff (float32)
        // NetworkVarNames: m_flFadeInDuration (float32)
        // NetworkVarNames: m_flFadeOutDuration (float32)
        // NetworkVarNames: m_flMaxWeight (float32)
        // NetworkVarNames: m_flCurWeight (float32)
        // NetworkVarNames: m_netlookupFilename (char)
        // NetworkVarNames: m_bEnabled (bool)
        // NetworkVarNames: m_bMaster (bool)
        // NetworkVarNames: m_bClientSide (bool)
        // NetworkVarNames: m_bExclusive (bool)
        public static class C_ColorCorrection {
            public const nint m_vecOrigin = 0x548; // Vector
            public const nint m_MinFalloff = 0x554; // float32
            public const nint m_MaxFalloff = 0x558; // float32
            public const nint m_flFadeInDuration = 0x55C; // float32
            public const nint m_flFadeOutDuration = 0x560; // float32
            public const nint m_flMaxWeight = 0x564; // float32
            public const nint m_flCurWeight = 0x568; // float32
            public const nint m_netlookupFilename = 0x56C; // char[512]
            public const nint m_bEnabled = 0x76C; // bool
            public const nint m_bMaster = 0x76D; // bool
            public const nint m_bClientSide = 0x76E; // bool
            public const nint m_bExclusive = 0x76F; // bool
            public const nint m_bEnabledOnClient = 0x770; // bool[1]
            public const nint m_flCurWeightOnClient = 0x774; // float32[1]
            public const nint m_bFadingIn = 0x778; // bool[1]
            public const nint m_flFadeStartWeight = 0x77C; // float32[1]
            public const nint m_flFadeStartTime = 0x780; // float32[1]
            public const nint m_flFadeDuration = 0x784; // float32[1]
        }
        // Parent: C_BaseTrigger
        // Fields count: 0
        public static class CHostageRescueZoneShim {
        }
        // Parent: None
        // Fields count: 7
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
        // Parent: C_CSWeaponBaseGun
        // Fields count: 0
        public static class C_WeaponP250 {
        }
        // Parent: None
        // Fields count: 1
        public static class C_EconEntity__AttachedModelData_t {
            public const nint m_iModelDisplayFlags = 0x0; // int32
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
            public const nint m_Attributes = 0x8; // C_UtlVectorEmbeddedNetworkVar<CEconItemAttribute>
            public const nint m_pManager = 0x58; // CAttributeManager*
        }
        // Parent: C_MultiplayRules
        // Fields count: 0
        public static class C_TeamplayRules {
        }
        // Parent: C_CSGO_TeamPreviewCamera
        // Fields count: 0
        public static class C_CSGO_CounterTerroristWingmanIntroCamera {
        }
        // Parent: C_CSWeaponBase
        // Fields count: 0
        public static class C_WeaponNOVA {
        }
        // Parent: C_BaseCSGrenadeProjectile
        // Fields count: 0
        public static class C_HEGrenadeProjectile {
        }
        // Parent: C_BaseToggle
        // Fields count: 1
        //
        // Metadata:
        // NetworkVarNames: m_bIsUsable (bool)
        public static class C_BaseDoor {
            public const nint m_bIsUsable = 0xCC8; // bool
        }
        // Parent: C_BaseModelEntity
        // Fields count: 2
        public static class CGrenadeTracer {
            public const nint m_flTracerDuration = 0xCE8; // float32
            public const nint m_nType = 0xCEC; // GrenadeType_t
        }
        // Parent: C_BaseTrigger
        // Fields count: 1
        //
        // Metadata:
        // NetworkVarNames: m_bBombPlantedHere (bool)
        public static class CBombTarget {
            public const nint m_bBombPlantedHere = 0xCD0; // bool
        }
        // Parent: C_BaseClientUIEntity
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_hActivator (EHANDLE)
        public static class C_PointClientUIDialog {
            public const nint m_hActivator = 0xCF8; // CHandle<C_BaseEntity>
            public const nint m_bStartEnabled = 0xCFC; // bool
        }
        // Parent: CCSGameModeRules
        // Fields count: 1
        //
        // Metadata:
        // NetworkVarNames: m_WeaponSequence (CUtlString)
        public static class CCSGameModeRules_ArmsRace {
            public const nint m_WeaponSequence = 0x38; // C_NetworkUtlVectorBase<CUtlString>
        }
        // Parent: None
        // Fields count: 14
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
            public const nint m_PlayerDamager = 0x28; // CHandle<C_CSPlayerPawn>
            public const nint m_PlayerRecipient = 0x2C; // CHandle<C_CSPlayerPawn>
            public const nint m_hPlayerControllerDamager = 0x30; // CHandle<CCSPlayerController>
            public const nint m_hPlayerControllerRecipient = 0x34; // CHandle<CCSPlayerController>
            public const nint m_szPlayerDamagerName = 0x38; // CUtlString
            public const nint m_szPlayerRecipientName = 0x40; // CUtlString
            public const nint m_DamagerXuid = 0x48; // uint64
            public const nint m_RecipientXuid = 0x50; // uint64
            public const nint m_iDamage = 0x58; // int32
            public const nint m_iActualHealthRemoved = 0x5C; // int32
            public const nint m_iNumHits = 0x60; // int32
            public const nint m_iLastBulletUpdate = 0x64; // int32
            public const nint m_bIsOtherEnemy = 0x68; // bool
            public const nint m_killType = 0x69; // EKillTypes_t
        }
        // Parent: C_BaseEntity
        // Fields count: 0
        public static class C_InfoLadderDismount {
        }
        // Parent: CPlayerControllerComponent
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_nSendUpdate (int)
        // NetworkVarNames: m_DamageList (CDamageRecord)
        public static class CCSPlayerController_DamageServices {
            public const nint m_nSendUpdate = 0x40; // int32
            public const nint m_DamageList = 0x48; // C_UtlVectorEmbeddedNetworkVar<CDamageRecord>
        }
        // Parent: CEntityComponent
        // Fields count: 5
        public static class CRenderComponent {
            public const nint __m_pChainEntity = 0x10; // CNetworkVarChainer
            public const nint m_bIsRenderingWithViewModels = 0x50; // bool
            public const nint m_nSplitscreenFlags = 0x54; // uint32
            public const nint m_bEnableRendering = 0x60; // bool
            public const nint m_bInterpolationReadyToDraw = 0xB0; // bool
        }
        // Parent: C_SoundEventEntity
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_vMins (Vector)
        // NetworkVarNames: m_vMaxs (Vector)
        public static class C_SoundEventOBBEntity {
            public const nint m_vMins = 0x548; // Vector
            public const nint m_vMaxs = 0x554; // Vector
        }
        // Parent: CEntityComponent
        // Fields count: 66
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
        }
        // Parent: C_CSGO_TeamPreviewCamera
        // Fields count: 0
        public static class C_CSGO_CounterTerroristTeamIntroCamera {
        }
        // Parent: None
        // Fields count: 0
        public static class CEntityComponent {
        }
        // Parent: IEconItemInterface
        // Fields count: 28
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
        public static class C_EconItemView {
            public const nint m_bInventoryImageRgbaRequested = 0x60; // bool
            public const nint m_bInventoryImageTriedCache = 0x61; // bool
            public const nint m_nInventoryImageRgbaWidth = 0x80; // int32
            public const nint m_nInventoryImageRgbaHeight = 0x84; // int32
            public const nint m_szCurrentLoadCachedFileName = 0x88; // char[260]
            public const nint m_bRestoreCustomMaterialAfterPrecache = 0x1B8; // bool
            public const nint m_iItemDefinitionIndex = 0x1BA; // uint16
            public const nint m_iEntityQuality = 0x1BC; // int32
            public const nint m_iEntityLevel = 0x1C0; // uint32
            public const nint m_iItemID = 0x1C8; // uint64
            public const nint m_iItemIDHigh = 0x1D0; // uint32
            public const nint m_iItemIDLow = 0x1D4; // uint32
            public const nint m_iAccountID = 0x1D8; // uint32
            public const nint m_iInventoryPosition = 0x1DC; // uint32
            public const nint m_bInitialized = 0x1E8; // bool
            public const nint m_bDisallowSOC = 0x1E9; // bool
            public const nint m_bIsStoreItem = 0x1EA; // bool
            public const nint m_bIsTradeItem = 0x1EB; // bool
            public const nint m_iEntityQuantity = 0x1EC; // int32
            public const nint m_iRarityOverride = 0x1F0; // int32
            public const nint m_iQualityOverride = 0x1F4; // int32
            public const nint m_unClientFlags = 0x1F8; // uint8
            public const nint m_unOverrideStyle = 0x1F9; // uint8
            public const nint m_AttributeList = 0x210; // CAttributeList
            public const nint m_NetworkedDynamicAttributes = 0x270; // CAttributeList
            public const nint m_szCustomName = 0x2D0; // char[161]
            public const nint m_szCustomNameOverride = 0x371; // char[161]
            public const nint m_bInitializedTags = 0x440; // bool
        }
        // Parent: C_BaseEntity
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_Handle (CHandle<CBaseEntity>)
        // NetworkVarNames: m_bSendHandle (bool)
        public static class C_HandleTest {
            public const nint m_Handle = 0x548; // CHandle<C_BaseEntity>
            public const nint m_bSendHandle = 0x54C; // bool
        }
        // Parent: C_BaseEntity
        // Fields count: 1
        //
        // Metadata:
        // NetworkVarNames: m_EnvWindShared (CEnvWindShared)
        public static class C_EnvWindClientside {
            public const nint m_EnvWindShared = 0x548; // C_EnvWindShared
        }
        // Parent: C_CSWeaponBaseGun
        // Fields count: 0
        public static class C_WeaponMAC10 {
        }
        // Parent: C_CSWeaponBaseGun
        // Fields count: 1
        //
        // Metadata:
        // NetworkVarNames: m_flDisplayHealth (float)
        public static class C_WeaponShield {
            public const nint m_flDisplayHealth = 0x1AA0; // float32
        }
        // Parent: C_PointClientUIWorldPanel
        // Fields count: 1
        //
        // Metadata:
        // NetworkVarNames: m_messageText (char)
        public static class C_PointClientUIWorldTextPanel {
            public const nint m_messageText = 0xF30; // char[512]
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseProvideFeatureTag
        // MPulseLibraryBindings
        public static class C_CSObserverPawnAPI {
        }
        // Parent: CPlayer_UseServices
        // Fields count: 0
        public static class CCSPlayer_UseServices {
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
        // Parent: CEntitySubclassVDataBase
        // Fields count: 14
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
        // Fields count: 4
        //
        // Metadata:
        // NetworkVarNames: m_iAccount (int)
        // NetworkVarNames: m_iStartAccount (int)
        // NetworkVarNames: m_iTotalCashSpent (int)
        // NetworkVarNames: m_iCashSpentThisRound (int)
        public static class CCSPlayerController_InGameMoneyServices {
            public const nint m_iAccount = 0x40; // int32
            public const nint m_iStartAccount = 0x44; // int32
            public const nint m_iTotalCashSpent = 0x48; // int32
            public const nint m_iCashSpentThisRound = 0x4C; // int32
        }
        // Parent: None
        // Fields count: 2
        public static class C_EnvWindShared__WindVariationEvent_t {
            public const nint m_flWindAngleVariation = 0x0; // float32
            public const nint m_flWindSpeedVariation = 0x4; // float32
        }
        // Parent: C_CSWeaponBaseGun
        // Fields count: 0
        public static class C_WeaponUSPSilencer {
        }
        // Parent: C_Sprite
        // Fields count: 0
        public static class CSpriteOriented {
        }
        // Parent: C_CSGO_EndOfMatchLineupEndpoint
        // Fields count: 0
        public static class C_CSGO_EndOfMatchLineupStart {
        }
        // Parent: C_CSWeaponBaseGun
        // Fields count: 0
        public static class C_WeaponFamas {
        }
        // Parent: C_ParticleSystem
        // Fields count: 5
        //
        // Metadata:
        // NetworkVarNames: m_flAlphaScale (float32)
        // NetworkVarNames: m_flRadiusScale (float32)
        // NetworkVarNames: m_flSelfIllumScale (float32)
        // NetworkVarNames: m_ColorTint (Color)
        // NetworkVarNames: m_hTextureOverride (HRenderTextureStrong)
        public static class C_EnvParticleGlow {
            public const nint m_flAlphaScale = 0x1278; // float32
            public const nint m_flRadiusScale = 0x127C; // float32
            public const nint m_flSelfIllumScale = 0x1280; // float32
            public const nint m_ColorTint = 0x1284; // Color
            public const nint m_hTextureOverride = 0x1288; // CStrongHandle<InfoForResourceTypeCTextureBase>
        }
        // Parent: C_BaseEntity
        // Fields count: 0
        public static class C_SoundEventEntity {
        }
        // Parent: C_CSGO_TeamPreviewCharacterPosition
        // Fields count: 0
        public static class C_CSGO_TeamIntroCharacterPosition {
        }
        // Parent: C_CSGO_PreviewModel
        // Fields count: 0
        public static class C_CSGO_PreviewModelAlias_csgo_item_previewmodel {
        }
        // Parent: C_BaseModelEntity
        // Fields count: 18
        //
        // Metadata:
        // MNetworkIncludeByName
        // MNetworkExcludeByName
        // MNetworkIncludeByUserGroup
        // MNetworkIncludeByName
        // MNetworkIncludeByName
        // MNetworkIncludeByName
        // NetworkVarNames: m_vDirection (Vector)
        // NetworkVarNames: m_iszEffectName (string_t)
        // NetworkVarNames: m_iszSSEffectName (string_t)
        // NetworkVarNames: m_clrOverlay (Color)
        // NetworkVarNames: m_bOn (bool)
        // NetworkVarNames: m_bmaxColor (bool)
        // NetworkVarNames: m_flSize (float32)
        // NetworkVarNames: m_flHazeScale (float32)
        // NetworkVarNames: m_flRotation (float32)
        // NetworkVarNames: m_flHDRColorScale (float32)
        // NetworkVarNames: m_flAlphaHaze (float32)
        // NetworkVarNames: m_flAlphaScale (float32)
        // NetworkVarNames: m_flAlphaHdr (float32)
        // NetworkVarNames: m_flFarZScale (float32)
        public static class C_Sun {
            public const nint m_fxSSSunFlareEffectIndex = 0xCC8; // ParticleIndex_t
            public const nint m_fxSunFlareEffectIndex = 0xCCC; // ParticleIndex_t
            public const nint m_fdistNormalize = 0xCD0; // float32
            public const nint m_vSunPos = 0xCD4; // Vector
            public const nint m_vDirection = 0xCE0; // Vector
            public const nint m_iszEffectName = 0xCF0; // CUtlSymbolLarge
            public const nint m_iszSSEffectName = 0xCF8; // CUtlSymbolLarge
            public const nint m_clrOverlay = 0xD00; // Color
            public const nint m_bOn = 0xD04; // bool
            public const nint m_bmaxColor = 0xD05; // bool
            public const nint m_flSize = 0xD08; // float32
            public const nint m_flHazeScale = 0xD0C; // float32
            public const nint m_flRotation = 0xD10; // float32
            public const nint m_flHDRColorScale = 0xD14; // float32
            public const nint m_flAlphaHaze = 0xD18; // float32
            public const nint m_flAlphaScale = 0xD1C; // float32
            public const nint m_flAlphaHdr = 0xD20; // float32
            public const nint m_flFarZScale = 0xD24; // float32
        }
        // Parent: C_BaseEntity
        // Fields count: 0
        public static class C_CSGO_EndOfMatchLineupEndpoint {
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
            public const nint m_perRoundStats = 0x40; // C_UtlVectorEmbeddedNetworkVar<CSPerRoundStats_t>
            public const nint m_matchStats = 0x90; // CSMatchStats_t
            public const nint m_iNumRoundKills = 0x110; // int32
            public const nint m_iNumRoundKillsHeadshots = 0x114; // int32
            public const nint m_unTotalRoundDamageDealt = 0x118; // uint32
        }
        // Parent: CEntityComponent
        // Fields count: 1
        //
        // Metadata:
        // NetworkVarNames: m_bvDisabledHitGroups (uint32)
        public static class CHitboxComponent {
            public const nint m_bvDisabledHitGroups = 0x24; // uint32[1]
        }
        // Parent: C_BaseTrigger
        // Fields count: 9
        //
        // Metadata:
        // NetworkVarNames: m_bEnabled (bool)
        // NetworkVarNames: m_MaxWeight (float)
        // NetworkVarNames: m_FadeDuration (float)
        // NetworkVarNames: m_Weight (float)
        // NetworkVarNames: m_lookupFilename (char)
        public static class C_ColorCorrectionVolume {
            public const nint m_LastEnterWeight = 0xCD0; // float32
            public const nint m_LastEnterTime = 0xCD4; // float32
            public const nint m_LastExitWeight = 0xCD8; // float32
            public const nint m_LastExitTime = 0xCDC; // float32
            public const nint m_bEnabled = 0xCE0; // bool
            public const nint m_MaxWeight = 0xCE4; // float32
            public const nint m_FadeDuration = 0xCE8; // float32
            public const nint m_Weight = 0xCEC; // float32
            public const nint m_lookupFilename = 0xCF0; // char[512]
        }
        // Parent: C_BaseModelEntity
        // Fields count: 0
        public static class C_PrecipitationBlocker {
        }
        // Parent: CBaseAnimGraph
        // Fields count: 6
        public static class C_BulletHitModel {
            public const nint m_matLocal = 0xED0; // matrix3x4_t
            public const nint m_iBoneIndex = 0xF00; // int32
            public const nint m_hPlayerParent = 0xF04; // CHandle<C_BaseEntity>
            public const nint m_bIsHit = 0xF08; // bool
            public const nint m_flTimeCreated = 0xF0C; // float32
            public const nint m_vecStartPos = 0xF10; // Vector
        }
        // Parent: C_BaseEntity
        // Fields count: 17
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
        public static class C_MapVetoPickController {
            public const nint m_nDraftType = 0x558; // int32
            public const nint m_nTeamWinningCoinToss = 0x55C; // int32
            public const nint m_nTeamWithFirstChoice = 0x560; // int32[64]
            public const nint m_nVoteMapIdsList = 0x660; // int32[7]
            public const nint m_nAccountIDs = 0x67C; // int32[64]
            public const nint m_nMapId0 = 0x77C; // int32[64]
            public const nint m_nMapId1 = 0x87C; // int32[64]
            public const nint m_nMapId2 = 0x97C; // int32[64]
            public const nint m_nMapId3 = 0xA7C; // int32[64]
            public const nint m_nMapId4 = 0xB7C; // int32[64]
            public const nint m_nMapId5 = 0xC7C; // int32[64]
            public const nint m_nStartingSide0 = 0xD7C; // int32[64]
            public const nint m_nCurrentPhase = 0xE7C; // int32
            public const nint m_nPhaseStartTick = 0xE80; // int32
            public const nint m_nPhaseDurationTicks = 0xE84; // int32
            public const nint m_nPostDataUpdateTick = 0xE88; // int32
            public const nint m_bDisabledHud = 0xE8C; // bool
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MGapTypeQueriesForScopeSingleton
        public static class CSharedGapTypeQueryRegistration {
        }
        // Parent: C_BarnLight
        // Fields count: 3
        //
        // Metadata:
        // NetworkVarNames: m_flInnerAngle (float)
        // NetworkVarNames: m_flOuterAngle (float)
        // NetworkVarNames: m_bShowLight (bool)
        public static class C_OmniLight {
            public const nint m_flInnerAngle = 0xF10; // float32
            public const nint m_flOuterAngle = 0xF14; // float32
            public const nint m_bShowLight = 0xF18; // bool
        }
        // Parent: C_Inferno
        // Fields count: 0
        public static class C_FireCrackerBlast {
        }
        // Parent: C_CSWeaponBaseGun
        // Fields count: 0
        public static class C_WeaponMP9 {
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // NetworkVarNames: m_weaponPurchases (WeaponPurchaseCount_t)
        public static class WeaponPurchaseTracker_t {
            public const nint m_weaponPurchases = 0x8; // C_UtlVectorEmbeddedNetworkVar<WeaponPurchaseCount_t>
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
        public static class C_RetakeGameRules {
            public const nint m_nMatchSeed = 0xF8; // int32
            public const nint m_bBlockersPresent = 0xFC; // bool
            public const nint m_bRoundInProgress = 0xFD; // bool
            public const nint m_iFirstSecondHalfRound = 0x100; // int32
            public const nint m_iBombSite = 0x104; // int32
        }
        // Parent: None
        // Fields count: 3
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
        // Fields count: 0
        //
        // Metadata:
        // MPulseProvideFeatureTag
        // MPulseLibraryBindings
        public static class CCSWeaponBaseVDataAPI {
        }
        // Parent: CPlayerPawnComponent
        // Fields count: 0
        public static class CCSPlayer_GlowServices {
        }
        // Parent: None
        // Fields count: 5
        public static class C_BaseFlex__Emphasized_Phoneme {
            public const nint m_sClassName = 0x0; // CUtlString
            public const nint m_flAmount = 0x18; // float32
            public const nint m_bRequired = 0x1C; // bool
            public const nint m_bBasechecked = 0x1D; // bool
            public const nint m_bValid = 0x1E; // bool
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
        // Parent: C_CSWeaponBaseGun
        // Fields count: 0
        public static class C_WeaponSSG08 {
        }
        // Parent: C_BaseModelEntity
        // Fields count: 9
        //
        // Metadata:
        // NetworkVarNames: m_vecLadderDir (Vector)
        // NetworkVarNames: m_vecPlayerMountPositionTop (Vector)
        // NetworkVarNames: m_vecPlayerMountPositionBottom (Vector)
        // NetworkVarNames: m_flAutoRideSpeed (float)
        // NetworkVarNames: m_bFakeLadder (bool)
        public static class C_FuncLadder {
            public const nint m_vecLadderDir = 0xCC8; // Vector
            public const nint m_Dismounts = 0xCD8; // CUtlVector<CHandle<C_InfoLadderDismount>>
            public const nint m_vecLocalTop = 0xCF0; // Vector
            public const nint m_vecPlayerMountPositionTop = 0xCFC; // Vector
            public const nint m_vecPlayerMountPositionBottom = 0xD08; // Vector
            public const nint m_flAutoRideSpeed = 0xD14; // float32
            public const nint m_bDisabled = 0xD18; // bool
            public const nint m_bFakeLadder = 0xD19; // bool
            public const nint m_bHasSlack = 0xD1A; // bool
        }
        // Parent: C_SoundOpvarSetAABBEntity
        // Fields count: 0
        public static class C_SoundOpvarSetOBBEntity {
        }
        // Parent: CPlayerPawnComponent
        // Fields count: 4
        //
        // Metadata:
        // NetworkVarNames: m_hMyWeapons (CHandle<C_BasePlayerWeapon>)
        // NetworkVarNames: m_hActiveWeapon (CHandle<CBasePlayerWeapon>)
        // NetworkVarNames: m_hLastWeapon (CHandle<CBasePlayerWeapon>)
        // NetworkVarNames: m_iAmmo (uint16)
        public static class CPlayer_WeaponServices {
            public const nint m_hMyWeapons = 0x40; // C_NetworkUtlVectorBase<CHandle<C_BasePlayerWeapon>>
            public const nint m_hActiveWeapon = 0x58; // CHandle<C_BasePlayerWeapon>
            public const nint m_hLastWeapon = 0x5C; // CHandle<C_BasePlayerWeapon>
            public const nint m_iAmmo = 0x60; // uint16[32]
        }
        // Parent: None
        // Fields count: 3
        public static class CAttributeManager__cached_attribute_float_t {
            public const nint flIn = 0x0; // float32
            public const nint iAttribHook = 0x8; // CUtlSymbolLarge
            public const nint flOut = 0x10; // float32
        }
        // Parent: C_BaseFlex
        // Fields count: 12
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
        public static class C_BaseGrenade {
            public const nint m_bHasWarnedAI = 0x1068; // bool
            public const nint m_bIsSmokeGrenade = 0x1069; // bool
            public const nint m_bIsLive = 0x106A; // bool
            public const nint m_DmgRadius = 0x106C; // float32
            public const nint m_flDetonateTime = 0x1070; // GameTime_t
            public const nint m_flWarnAITime = 0x1074; // float32
            public const nint m_flDamage = 0x1078; // float32
            public const nint m_iszBounceSound = 0x1080; // CUtlSymbolLarge
            public const nint m_ExplosionSound = 0x1088; // CUtlString
            public const nint m_hThrower = 0x1094; // CHandle<C_CSPlayerPawn>
            public const nint m_flNextAttack = 0x10AC; // GameTime_t
            public const nint m_hOriginalThrower = 0x10B0; // CHandle<C_CSPlayerPawn>
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
        // Parent: C_BaseEntity
        // Fields count: 32
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
        // NetworkVarNames: m_bIndirectUseLPVs (bool)
        // NetworkVarNames: m_bIsMaster (bool)
        // NetworkVarNames: m_hFogIndirectTexture (HRenderTextureStrong)
        // NetworkVarNames: m_nForceRefreshCount (int)
        // NetworkVarNames: m_fNoiseSpeed (float)
        // NetworkVarNames: m_fNoiseStrength (float)
        // NetworkVarNames: m_vNoiseScale (Vector)
        public static class C_EnvVolumetricFogController {
            public const nint m_flScattering = 0x548; // float32
            public const nint m_flAnisotropy = 0x54C; // float32
            public const nint m_flFadeSpeed = 0x550; // float32
            public const nint m_flDrawDistance = 0x554; // float32
            public const nint m_flFadeInStart = 0x558; // float32
            public const nint m_flFadeInEnd = 0x55C; // float32
            public const nint m_flIndirectStrength = 0x560; // float32
            public const nint m_nIndirectTextureDimX = 0x564; // int32
            public const nint m_nIndirectTextureDimY = 0x568; // int32
            public const nint m_nIndirectTextureDimZ = 0x56C; // int32
            public const nint m_vBoxMins = 0x570; // Vector
            public const nint m_vBoxMaxs = 0x57C; // Vector
            public const nint m_bActive = 0x588; // bool
            public const nint m_flStartAnisoTime = 0x58C; // GameTime_t
            public const nint m_flStartScatterTime = 0x590; // GameTime_t
            public const nint m_flStartDrawDistanceTime = 0x594; // GameTime_t
            public const nint m_flStartAnisotropy = 0x598; // float32
            public const nint m_flStartScattering = 0x59C; // float32
            public const nint m_flStartDrawDistance = 0x5A0; // float32
            public const nint m_flDefaultAnisotropy = 0x5A4; // float32
            public const nint m_flDefaultScattering = 0x5A8; // float32
            public const nint m_flDefaultDrawDistance = 0x5AC; // float32
            public const nint m_bStartDisabled = 0x5B0; // bool
            public const nint m_bEnableIndirect = 0x5B1; // bool
            public const nint m_bIndirectUseLPVs = 0x5B2; // bool
            public const nint m_bIsMaster = 0x5B3; // bool
            public const nint m_hFogIndirectTexture = 0x5B8; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_nForceRefreshCount = 0x5C0; // int32
            public const nint m_fNoiseSpeed = 0x5C4; // float32
            public const nint m_fNoiseStrength = 0x5C8; // float32
            public const nint m_vNoiseScale = 0x5CC; // Vector
            public const nint m_bFirstTime = 0x5D8; // bool
        }
        // Parent: C_CSWeaponBaseGun
        // Fields count: 0
        public static class C_WeaponTec9 {
        }
        // Parent: CBaseAnimGraph
        // Fields count: 13
        //
        // Metadata:
        // NetworkVarNames: m_bActive (bool)
        // NetworkVarNames: m_flStartTime (GameTime_t)
        // NetworkVarNames: m_flStartTimeInCommentary (float32)
        // NetworkVarNames: m_iszCommentaryFile (string_t)
        // NetworkVarNames: m_iszTitle (string_t)
        // NetworkVarNames: m_iszSpeakers (string_t)
        // NetworkVarNames: m_iNodeNumber (int)
        // NetworkVarNames: m_iNodeNumberMax (int)
        // NetworkVarNames: m_bListenedTo (bool)
        // NetworkVarNames: m_hViewPosition (CHandle<C_BaseEntity>)
        public static class C_PointCommentaryNode {
            public const nint m_bActive = 0xED8; // bool
            public const nint m_bWasActive = 0xED9; // bool
            public const nint m_flEndTime = 0xEDC; // GameTime_t
            public const nint m_flStartTime = 0xEE0; // GameTime_t
            public const nint m_flStartTimeInCommentary = 0xEE4; // float32
            public const nint m_iszCommentaryFile = 0xEE8; // CUtlSymbolLarge
            public const nint m_iszTitle = 0xEF0; // CUtlSymbolLarge
            public const nint m_iszSpeakers = 0xEF8; // CUtlSymbolLarge
            public const nint m_iNodeNumber = 0xF00; // int32
            public const nint m_iNodeNumberMax = 0xF04; // int32
            public const nint m_bListenedTo = 0xF08; // bool
            public const nint m_hViewPosition = 0xF18; // CHandle<C_BaseEntity>
            public const nint m_bRestartAfterRestore = 0xF1C; // bool
        }
        // Parent: CCSPlayerBase_CameraServices
        // Fields count: 0
        public static class CCSObserver_CameraServices {
        }
        // Parent: CCSPointScriptEntity
        // Fields count: 0
        public static class CCSClientPointScriptEntity {
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
        // Parent: C_BaseEntity
        // Fields count: 3
        //
        // Metadata:
        // NetworkVarNames: m_nMode (int)
        // NetworkVarNames: m_vBoxSize (Vector)
        // NetworkVarNames: m_bEnabled (bool)
        public static class C_InfoVisibilityBox {
            public const nint m_nMode = 0x54C; // int32
            public const nint m_vBoxSize = 0x550; // Vector
            public const nint m_bEnabled = 0x55C; // bool
        }
        // Parent: C_Sprite
        // Fields count: 2
        public static class C_FireSprite {
            public const nint m_vecMoveDir = 0xDD8; // Vector
            public const nint m_bFadeFromAbove = 0xDE4; // bool
        }
        // Parent: C_CSGO_TeamIntroCharacterPosition
        // Fields count: 0
        public static class C_CSGO_TeamIntroTerroristPosition {
        }
        // Parent: C_BaseTrigger
        // Fields count: 8
        public static class C_Precipitation {
            public const nint m_flDensity = 0xCD0; // float32
            public const nint m_flParticleInnerDist = 0xCE0; // float32
            public const nint m_pParticleDef = 0xCE8; // char*
            public const nint m_tParticlePrecipTraceTimer = 0xD10; // TimedEvent[1]
            public const nint m_bActiveParticlePrecipEmitter = 0xD18; // bool[1]
            public const nint m_bParticlePrecipInitialized = 0xD19; // bool
            public const nint m_bHasSimulatedSinceLastSceneObjectUpdate = 0xD1A; // bool
            public const nint m_nAvailableSheetSequencesMaxIndex = 0xD1C; // int32
        }
        // Parent: CEntitySubclassVDataBase
        // Fields count: 7
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
        // Parent: None
        // Fields count: 1
        public static class CBuoyancyHelper {
            public const nint m_flFluidDensity = 0x18; // float32
        }
        // Parent: C_BaseModelEntity
        // Fields count: 4
        //
        // Metadata:
        // NetworkVarNames: m_bEnabled (bool)
        // NetworkVarNames: m_DialogXMLName (string_t)
        // NetworkVarNames: m_PanelClassName (string_t)
        // NetworkVarNames: m_PanelID (string_t)
        public static class C_BaseClientUIEntity {
            public const nint m_bEnabled = 0xCD0; // bool
            public const nint m_DialogXMLName = 0xCD8; // CUtlSymbolLarge
            public const nint m_PanelClassName = 0xCE0; // CUtlSymbolLarge
            public const nint m_PanelID = 0xCE8; // CUtlSymbolLarge
        }
        // Parent: C_BaseModelEntity
        // Fields count: 3
        public static class C_FuncTrackTrain {
            public const nint m_nLongAxis = 0xCC8; // int32
            public const nint m_flRadius = 0xCCC; // float32
            public const nint m_flLineLength = 0xCD0; // float32
        }
        // Parent: CPlayerPawnComponent
        // Fields count: 4
        //
        // Metadata:
        // NetworkVarNames: m_bIsRescuing (bool)
        // NetworkVarNames: m_weaponPurchasesThisMatch (WeaponPurchaseTracker_t)
        // NetworkVarNames: m_weaponPurchasesThisRound (WeaponPurchaseTracker_t)
        public static class CCSPlayer_ActionTrackingServices {
            public const nint m_hLastWeaponBeforeC4AutoSwitch = 0x40; // CHandle<C_BasePlayerWeapon>
            public const nint m_bIsRescuing = 0x44; // bool
            public const nint m_weaponPurchasesThisMatch = 0x48; // WeaponPurchaseTracker_t
            public const nint m_weaponPurchasesThisRound = 0xA0; // WeaponPurchaseTracker_t
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
            public const nint m_vecPanelVertices = 0x38; // C_NetworkUtlVectorBase<Vector2D>
            public const nint m_flGlassHalfThickness = 0x50; // float32
            public const nint m_bHasParent = 0x54; // bool
            public const nint m_bParentFrozen = 0x55; // bool
            public const nint m_SurfacePropStringToken = 0x58; // CUtlStringToken
        }
        // Parent: None
        // Fields count: 1
        public static class C_SceneEntity__QueuedEvents_t {
            public const nint starttime = 0x0; // float32
        }
        // Parent: CBaseAnimGraph
        // Fields count: 4
        public static class CBaseProp {
            public const nint m_bModelOverrodeBlockLOS = 0xED0; // bool
            public const nint m_iShapeType = 0xED4; // int32
            public const nint m_bConformToCollisionBounds = 0xED8; // bool
            public const nint m_mPreferredCatchTransform = 0xEDC; // matrix3x4_t
        }
        // Parent: C_CSGO_PreviewPlayer
        // Fields count: 0
        public static class C_CSGO_PreviewPlayerAlias_csgo_player_previewmodel {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseProvideFeatureTag
        // MPulseLibraryBindings
        public static class CCSPointScriptExtensions_observer {
        }
        // Parent: CLogicalEntity
        // Fields count: 12
        public static class CPointTemplate {
            public const nint m_iszWorldName = 0x548; // CUtlSymbolLarge
            public const nint m_iszSource2EntityLumpName = 0x550; // CUtlSymbolLarge
            public const nint m_iszEntityFilterName = 0x558; // CUtlSymbolLarge
            public const nint m_flTimeoutInterval = 0x560; // float32
            public const nint m_bAsynchronouslySpawnEntities = 0x564; // bool
            public const nint m_pOutputOnSpawned = 0x568; // CEntityIOOutput
            public const nint m_clientOnlyEntityBehavior = 0x590; // PointTemplateClientOnlyEntityBehavior_t
            public const nint m_ownerSpawnGroupType = 0x594; // PointTemplateOwnerSpawnGroupType_t
            public const nint m_createdSpawnGroupHandles = 0x598; // CUtlVector<uint32>
            public const nint m_SpawnedEntityHandles = 0x5B0; // CUtlVector<CEntityHandle>
            public const nint m_ScriptSpawnCallback = 0x5C8; // HSCRIPT
            public const nint m_ScriptCallbackScope = 0x5D0; // HSCRIPT
        }
        // Parent: C_CSWeaponBaseGun
        // Fields count: 0
        public static class C_WeaponHKP2000 {
        }
        // Parent: C_BaseCSGrenade
        // Fields count: 0
        public static class CTripWireFire {
        }
        // Parent: C_BaseFlex
        // Fields count: 6
        public static class C_CSGO_PreviewModel {
            public const nint m_animgraph = 0x1068; // CUtlString
            public const nint m_animgraphCharacterModeString = 0x1070; // CGlobalSymbol
            public const nint m_defaultAnim = 0x1078; // CUtlString
            public const nint m_nDefaultAnimLoopMode = 0x1080; // AnimLoopMode_t
            public const nint m_flInitialModelScale = 0x1084; // float32
            public const nint m_sInitialWeaponState = 0x1088; // CUtlString
        }
        // Parent: C_PointEntity
        // Fields count: 5
        public static class CInfoDynamicShadowHint {
            public const nint m_bDisabled = 0x548; // bool
            public const nint m_flRange = 0x54C; // float32
            public const nint m_nImportance = 0x550; // int32
            public const nint m_nLightChoice = 0x554; // int32
            public const nint m_hLight = 0x558; // CHandle<C_BaseEntity>
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseProvideFeatureTag
        // MPulseLibraryBindings
        public static class CTakeDamageInfoAPI {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseProvideFeatureTag
        // MPulseLibraryBindings
        public static class C_BaseEntityAPI {
        }
        // Parent: C_CSWeaponBase
        // Fields count: 0
        public static class C_WeaponXM1014 {
        }
        // Parent: C_ParticleSystem
        // Fields count: 0
        public static class C_MapPreviewParticleSystem {
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
        // Parent: C_BaseTrigger
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
        public static class C_TriggerPhysics {
            public const nint m_gravityScale = 0xCD0; // float32
            public const nint m_linearLimit = 0xCD4; // float32
            public const nint m_linearDamping = 0xCD8; // float32
            public const nint m_angularLimit = 0xCDC; // float32
            public const nint m_angularDamping = 0xCE0; // float32
            public const nint m_linearForce = 0xCE4; // float32
            public const nint m_flFrequency = 0xCE8; // float32
            public const nint m_flDampingRatio = 0xCEC; // float32
            public const nint m_vecLinearForcePointAt = 0xCF0; // Vector
            public const nint m_bCollapseToForcePoint = 0xCFC; // bool
            public const nint m_vecLinearForcePointAtWorld = 0xD00; // Vector
            public const nint m_vecLinearForceDirection = 0xD0C; // Vector
            public const nint m_bConvertToDebrisWhenPossible = 0xD18; // bool
        }
        // Parent: CPlayerPawnComponent
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_hCarriedHostage (CHandle<CBaseEntity>)
        // NetworkVarNames: m_hCarriedHostageProp (CHandle<CBaseEntity>)
        public static class CCSPlayer_HostageServices {
            public const nint m_hCarriedHostage = 0x40; // CHandle<C_BaseEntity>
            public const nint m_hCarriedHostageProp = 0x44; // CHandle<C_BaseEntity>
        }
        // Parent: C_CSWeaponBase
        // Fields count: 0
        public static class CBreachCharge {
        }
        // Parent: C_LightEntity
        // Fields count: 0
        public static class C_LightDirectionalEntity {
        }
        // Parent: C_BaseEntity
        // Fields count: 18
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
        public static class C_EnvCubemap {
            public const nint m_Entity_hCubemapTexture = 0x5C8; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Entity_bCustomCubemapTexture = 0x5D0; // bool
            public const nint m_Entity_flInfluenceRadius = 0x5D4; // float32
            public const nint m_Entity_vBoxProjectMins = 0x5D8; // Vector
            public const nint m_Entity_vBoxProjectMaxs = 0x5E4; // Vector
            public const nint m_Entity_bMoveable = 0x5F0; // bool
            public const nint m_Entity_nHandshake = 0x5F4; // int32
            public const nint m_Entity_nEnvCubeMapArrayIndex = 0x5F8; // int32
            public const nint m_Entity_nPriority = 0x5FC; // int32
            public const nint m_Entity_flEdgeFadeDist = 0x600; // float32
            public const nint m_Entity_vEdgeFadeDists = 0x604; // Vector
            public const nint m_Entity_flDiffuseScale = 0x610; // float32
            public const nint m_Entity_bStartDisabled = 0x614; // bool
            public const nint m_Entity_bDefaultEnvMap = 0x615; // bool
            public const nint m_Entity_bDefaultSpecEnvMap = 0x616; // bool
            public const nint m_Entity_bIndoorCubeMap = 0x617; // bool
            public const nint m_Entity_bCopyDiffuseFromDefaultCubemap = 0x618; // bool
            public const nint m_Entity_bEnabled = 0x628; // bool
        }
        // Parent: C_BaseViewModel
        // Fields count: 3
        public static class C_PredictedViewModel {
            public const nint m_vPredictedLagOffset = 0xF38; // Vector
            public const nint m_targetSpeed = 0xF44; // QAngle
            public const nint m_currentSpeed = 0xF50; // QAngle
        }
        // Parent: C_CSWeaponBaseGun
        // Fields count: 0
        public static class C_WeaponBizon {
        }
        // Parent: C_CSWeaponBaseGun
        // Fields count: 0
        public static class C_AK47 {
        }
        // Parent: C_BaseEntity
        // Fields count: 25
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
        // NetworkVarNames: m_hOutputEntities (CHandle<C_BaseEntity>)
        // NetworkVarNames: m_nHapticsType (ValueRemapperHapticsType_t)
        // NetworkVarNames: m_nMomentumType (ValueRemapperMomentumType_t)
        // NetworkVarNames: m_flMomentumModifier (float)
        // NetworkVarNames: m_flSnapValue (float)
        // NetworkVarNames: m_nRatchetType (ValueRemapperRatchetType_t)
        // NetworkVarNames: m_flInputOffset (float)
        public static class C_PointValueRemapper {
            public const nint m_bDisabled = 0x548; // bool
            public const nint m_bDisabledOld = 0x549; // bool
            public const nint m_bUpdateOnClient = 0x54A; // bool
            public const nint m_nInputType = 0x54C; // ValueRemapperInputType_t
            public const nint m_hRemapLineStart = 0x550; // CHandle<C_BaseEntity>
            public const nint m_hRemapLineEnd = 0x554; // CHandle<C_BaseEntity>
            public const nint m_flMaximumChangePerSecond = 0x558; // float32
            public const nint m_flDisengageDistance = 0x55C; // float32
            public const nint m_flEngageDistance = 0x560; // float32
            public const nint m_bRequiresUseKey = 0x564; // bool
            public const nint m_nOutputType = 0x568; // ValueRemapperOutputType_t
            public const nint m_hOutputEntities = 0x570; // C_NetworkUtlVectorBase<CHandle<C_BaseEntity>>
            public const nint m_nHapticsType = 0x588; // ValueRemapperHapticsType_t
            public const nint m_nMomentumType = 0x58C; // ValueRemapperMomentumType_t
            public const nint m_flMomentumModifier = 0x590; // float32
            public const nint m_flSnapValue = 0x594; // float32
            public const nint m_flCurrentMomentum = 0x598; // float32
            public const nint m_nRatchetType = 0x59C; // ValueRemapperRatchetType_t
            public const nint m_flRatchetOffset = 0x5A0; // float32
            public const nint m_flInputOffset = 0x5A4; // float32
            public const nint m_bEngaged = 0x5A8; // bool
            public const nint m_bFirstUpdate = 0x5A9; // bool
            public const nint m_flPreviousValue = 0x5AC; // float32
            public const nint m_flPreviousUpdateTickTime = 0x5B0; // GameTime_t
            public const nint m_vecPreviousTestPoint = 0x5B4; // Vector
        }
        // Parent: C_CSWeaponBase
        // Fields count: 0
        public static class C_Knife {
        }
        // Parent: C_EnvCubemap
        // Fields count: 0
        public static class C_EnvCubemapBox {
        }
        // Parent: C_Item
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_OwningPlayer (CHandle<CCSPlayerPawn>)
        // NetworkVarNames: m_KillingPlayer (CHandle<CCSPlayerPawn>)
        public static class C_ItemDogtags {
            public const nint m_OwningPlayer = 0x16B8; // CHandle<C_CSPlayerPawn>
            public const nint m_KillingPlayer = 0x16BC; // CHandle<C_CSPlayerPawn>
        }
        // Parent: C_CSGO_TeamPreviewCamera
        // Fields count: 0
        public static class C_CSGO_EndOfMatchCamera {
        }
        // Parent: C_BaseEntity
        // Fields count: 5
        //
        // Metadata:
        // NetworkVarNames: m_iszStackName (string_t)
        // NetworkVarNames: m_iszOperatorName (string_t)
        // NetworkVarNames: m_iszOpvarName (string_t)
        // NetworkVarNames: m_iOpvarIndex (int)
        // NetworkVarNames: m_bUseAutoCompare (bool)
        public static class C_SoundOpvarSetPointBase {
            public const nint m_iszStackName = 0x548; // CUtlSymbolLarge
            public const nint m_iszOperatorName = 0x550; // CUtlSymbolLarge
            public const nint m_iszOpvarName = 0x558; // CUtlSymbolLarge
            public const nint m_iOpvarIndex = 0x560; // int32
            public const nint m_bUseAutoCompare = 0x564; // bool
        }
        // Parent: C_Breakable
        // Fields count: 0
        public static class C_PhysBox {
        }
        // Parent: CPlayerPawnComponent
        // Fields count: 1
        //
        // Metadata:
        // NetworkVarNames: m_vecSellbackPurchaseEntries (SellbackPurchaseEntry_t)
        public static class CCSPlayer_BuyServices {
            public const nint m_vecSellbackPurchaseEntries = 0x40; // C_UtlVectorEmbeddedNetworkVar<SellbackPurchaseEntry_t>
        }
        // Parent: C_BaseCSGrenade
        // Fields count: 0
        public static class C_SensorGrenade {
        }
        // Parent: C_CSWeaponBaseGun
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_fFireTime (GameTime_t)
        public static class C_WeaponTaser {
            public const nint m_fFireTime = 0x1AA0; // GameTime_t
            public const nint m_nLastAttackTick = 0x1AA4; // int32
        }
        // Parent: C_CSWeaponBase
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_bPlayingUninterruptableAct (bool)
        // NetworkVarNames: m_nUninterruptableActivity (PlayerAnimEvent_t)
        public static class C_Fists {
            public const nint m_bPlayingUninterruptableAct = 0x1A80; // bool
            public const nint m_nUninterruptableActivity = 0x1A84; // PlayerAnimEvent_t
        }
        // Parent: C_PhysicsProp
        // Fields count: 0
        public static class C_PhysicsPropMultiplayer {
        }
        // Parent: CInfoDynamicShadowHint
        // Fields count: 2
        public static class CInfoDynamicShadowHintBox {
            public const nint m_vBoxMins = 0x560; // Vector
            public const nint m_vBoxMaxs = 0x56C; // Vector
        }
        // Parent: C_SoundOpvarSetPointEntity
        // Fields count: 0
        public static class C_SoundOpvarSetPathCornerEntity {
        }
        // Parent: C_BaseEntity
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
        public static class C_EnvCubemapFog {
            public const nint m_flEndDistance = 0x548; // float32
            public const nint m_flStartDistance = 0x54C; // float32
            public const nint m_flFogFalloffExponent = 0x550; // float32
            public const nint m_bHeightFogEnabled = 0x554; // bool
            public const nint m_flFogHeightWidth = 0x558; // float32
            public const nint m_flFogHeightEnd = 0x55C; // float32
            public const nint m_flFogHeightStart = 0x560; // float32
            public const nint m_flFogHeightExponent = 0x564; // float32
            public const nint m_flLODBias = 0x568; // float32
            public const nint m_bActive = 0x56C; // bool
            public const nint m_bStartDisabled = 0x56D; // bool
            public const nint m_flFogMaxOpacity = 0x570; // float32
            public const nint m_nCubemapSourceType = 0x574; // int32
            public const nint m_hSkyMaterial = 0x578; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_iszSkyEntity = 0x580; // CUtlSymbolLarge
            public const nint m_hFogCubemapTexture = 0x588; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_bHasHeightFogEnd = 0x590; // bool
            public const nint m_bFirstTime = 0x591; // bool
        }
        // Parent: C_CSWeaponBase
        // Fields count: 0
        public static class C_WeaponSawedoff {
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
        // Parent: C_ModelPointEntity
        // Fields count: 16
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
        public static class C_PlayerSprayDecal {
            public const nint m_nUniqueID = 0xCC8; // int32
            public const nint m_unAccountID = 0xCCC; // uint32
            public const nint m_unTraceID = 0xCD0; // uint32
            public const nint m_rtGcTime = 0xCD4; // uint32
            public const nint m_vecEndPos = 0xCD8; // Vector
            public const nint m_vecStart = 0xCE4; // Vector
            public const nint m_vecLeft = 0xCF0; // Vector
            public const nint m_vecNormal = 0xCFC; // Vector
            public const nint m_nPlayer = 0xD08; // int32
            public const nint m_nEntity = 0xD0C; // int32
            public const nint m_nHitbox = 0xD10; // int32
            public const nint m_flCreationTime = 0xD14; // float32
            public const nint m_nTintID = 0xD18; // int32
            public const nint m_nVersion = 0xD1C; // uint8
            public const nint m_ubSignature = 0xD1D; // uint8[128]
            public const nint m_SprayRenderHelper = 0xDA8; // CPlayerSprayDecalRenderHelper
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_ID (CUtlStringToken)
        // NetworkVarNames: m_Values (Vector4D)
        public static class EntityRenderAttribute_t {
            public const nint m_ID = 0x30; // CUtlStringToken
            public const nint m_Values = 0x34; // Vector4D
        }
        // Parent: C_PhysicsProp
        // Fields count: 1
        //
        // Metadata:
        // MNetworkExcludeByName
        // NetworkVarNames: m_ShardDesc (shard_model_desc_t)
        public static class C_ShatterGlassShardPhysics {
            public const nint m_ShardDesc = 0x1050; // shard_model_desc_t
        }
        // Parent: C_CSWeaponBaseGun
        // Fields count: 0
        public static class C_WeaponElite {
        }
        // Parent: C_BaseModelEntity
        // Fields count: 1
        //
        // Metadata:
        // NetworkVarNames: m_CLightComponent (CLightComponent::Storage_t)
        public static class C_LightEntity {
            public const nint m_CLightComponent = 0xCC8; // CLightComponent*
        }
        // Parent: C_BaseEntity
        // Fields count: 6
        //
        // Metadata:
        // NetworkVarNames: m_flVisibilityStrength (float)
        // NetworkVarNames: m_flFogDistanceMultiplier (float)
        // NetworkVarNames: m_flFogMaxDensityMultiplier (float)
        // NetworkVarNames: m_flFadeTime (float)
        // NetworkVarNames: m_bStartDisabled (bool)
        // NetworkVarNames: m_bIsEnabled (bool)
        public static class C_PlayerVisibility {
            public const nint m_flVisibilityStrength = 0x548; // float32
            public const nint m_flFogDistanceMultiplier = 0x54C; // float32
            public const nint m_flFogMaxDensityMultiplier = 0x550; // float32
            public const nint m_flFadeTime = 0x554; // float32
            public const nint m_bStartDisabled = 0x558; // bool
            public const nint m_bIsEnabled = 0x559; // bool
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
        // Parent: CBaseAnimGraph
        // Fields count: 19
        //
        // Metadata:
        // NetworkVarNames: m_flexWeight (float32)
        // NetworkVarNames: m_blinktoggle (bool)
        public static class C_BaseFlex {
            public const nint m_flexWeight = 0xEE0; // C_NetworkUtlVectorBase<float32>
            public const nint m_vLookTargetPosition = 0xEF8; // Vector
            public const nint m_blinktoggle = 0xF10; // bool
            public const nint m_nLastFlexUpdateFrameCount = 0xF70; // int32
            public const nint m_CachedViewTarget = 0xF74; // Vector
            public const nint m_nNextSceneEventId = 0xF80; // SceneEventId_t
            public const nint m_iBlink = 0xF84; // int32
            public const nint m_blinktime = 0xF88; // float32
            public const nint m_prevblinktoggle = 0xF8C; // bool
            public const nint m_iJawOpen = 0xF90; // int32
            public const nint m_flJawOpenAmount = 0xF94; // float32
            public const nint m_flBlinkAmount = 0xF98; // float32
            public const nint m_iMouthAttachment = 0xF9C; // AttachmentHandle_t
            public const nint m_iEyeAttachment = 0xF9D; // AttachmentHandle_t
            public const nint m_bResetFlexWeightsOnModelChange = 0xF9E; // bool
            public const nint m_nEyeOcclusionRendererBone = 0xFB8; // int32
            public const nint m_mEyeOcclusionRendererCameraToBoneTransform = 0xFBC; // matrix3x4_t
            public const nint m_vEyeOcclusionRendererHalfExtent = 0xFEC; // Vector
            public const nint m_PhonemeClasses = 0x1008; // C_BaseFlex::Emphasized_Phoneme[3]
        }
        // Parent: C_BaseEntity
        // Fields count: 1
        //
        // Metadata:
        // NetworkVarNames: m_iCurrentMaxRagdollCount (int8)
        public static class C_RagdollManager {
            public const nint m_iCurrentMaxRagdollCount = 0x548; // int8
        }
        // Parent: C_BaseModelEntity
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
        public static class C_EnvSky {
            public const nint m_hSkyMaterial = 0xCC8; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_hSkyMaterialLightingOnly = 0xCD0; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_bStartDisabled = 0xCD8; // bool
            public const nint m_vTintColor = 0xCD9; // Color
            public const nint m_vTintColorLightingOnly = 0xCDD; // Color
            public const nint m_flBrightnessScale = 0xCE4; // float32
            public const nint m_nFogType = 0xCE8; // int32
            public const nint m_flFogMinStart = 0xCEC; // float32
            public const nint m_flFogMinEnd = 0xCF0; // float32
            public const nint m_flFogMaxStart = 0xCF4; // float32
            public const nint m_flFogMaxEnd = 0xCF8; // float32
            public const nint m_bEnabled = 0xCFC; // bool
        }
        // Parent: CCSGameModeScript
        // Fields count: 1
        //
        // Metadata:
        // MPulseInstanceDomainInfo
        // MPulseDomainHookInfo
        // MPulseLibraryBindings
        // MPulseDomainOptInFeatureTag
        public static class CCSDeathmatchScript {
            public const nint m_pOuter = 0xF8; // CCSGameModeRules_Deathmatch*
        }
        // Parent: C_PointEntity
        // Fields count: 0
        public static class CInfoTarget {
        }
        // Parent: C_CSGO_TeamIntroCharacterPosition
        // Fields count: 0
        public static class C_CSGO_TeamIntroCounterTerroristPosition {
        }
        // Parent: C_BreakableProp
        // Fields count: 23
        //
        // Metadata:
        // NetworkVarNames: m_bUseHitboxesForRenderBox (bool)
        // NetworkVarNames: m_bUseAnimGraph (bool)
        public static class C_DynamicProp {
            public const nint m_bUseHitboxesForRenderBox = 0x1040; // bool
            public const nint m_bUseAnimGraph = 0x1041; // bool
            public const nint m_pOutputAnimBegun = 0x1048; // CEntityIOOutput
            public const nint m_pOutputAnimOver = 0x1070; // CEntityIOOutput
            public const nint m_pOutputAnimLoopCycleOver = 0x1098; // CEntityIOOutput
            public const nint m_OnAnimReachedStart = 0x10C0; // CEntityIOOutput
            public const nint m_OnAnimReachedEnd = 0x10E8; // CEntityIOOutput
            public const nint m_iszIdleAnim = 0x1110; // CUtlSymbolLarge
            public const nint m_nIdleAnimLoopMode = 0x1118; // AnimLoopMode_t
            public const nint m_bRandomizeCycle = 0x111C; // bool
            public const nint m_bStartDisabled = 0x111D; // bool
            public const nint m_bFiredStartEndOutput = 0x111E; // bool
            public const nint m_bForceNpcExclude = 0x111F; // bool
            public const nint m_bCreateNonSolid = 0x1120; // bool
            public const nint m_bIsOverrideProp = 0x1121; // bool
            public const nint m_iInitialGlowState = 0x1124; // int32
            public const nint m_nGlowRange = 0x1128; // int32
            public const nint m_nGlowRangeMin = 0x112C; // int32
            public const nint m_glowColor = 0x1130; // Color
            public const nint m_nGlowTeam = 0x1134; // int32
            public const nint m_iCachedFrameCount = 0x1138; // int32
            public const nint m_vecCachedRenderMins = 0x113C; // Vector
            public const nint m_vecCachedRenderMaxs = 0x1148; // Vector
        }
        // Parent: CEntityComponent
        // Fields count: 10
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
        // Parent: C_CSWeaponBaseGun
        // Fields count: 0
        public static class C_WeaponSCAR20 {
        }
        // Parent: C_BaseCSGrenade
        // Fields count: 0
        public static class C_DecoyGrenade {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseProvideFeatureTag
        // MPulseLibraryBindings
        public static class CCSPointScriptExtensions_player {
        }
        // Parent: C_BaseEntity
        // Fields count: 8
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
            public const nint m_iszStackName = 0x560; // CUtlSymbolLarge
            public const nint m_iszOperatorName = 0x568; // CUtlSymbolLarge
            public const nint m_iszOpvarName = 0x570; // CUtlSymbolLarge
            public const nint m_vDistanceInnerMins = 0x578; // Vector
            public const nint m_vDistanceInnerMaxs = 0x584; // Vector
            public const nint m_vDistanceOuterMins = 0x590; // Vector
            public const nint m_vDistanceOuterMaxs = 0x59C; // Vector
            public const nint m_nAABBDirection = 0x5A8; // int32
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
        public static class SellbackPurchaseEntry_t {
            public const nint m_unDefIdx = 0x30; // uint16
            public const nint m_nCost = 0x34; // int32
            public const nint m_nPrevArmor = 0x38; // int32
            public const nint m_bPrevHelmet = 0x3C; // bool
            public const nint m_hItem = 0x40; // CEntityHandle
        }
        // Parent: C_GameRules
        // Fields count: 0
        public static class C_SingleplayRules {
        }
        // Parent: CBaseAnimGraph
        // Fields count: 25
        public static class C_LocalTempEntity {
            public const nint flags = 0xED0; // int32
            public const nint die = 0xED4; // GameTime_t
            public const nint m_flFrameMax = 0xED8; // float32
            public const nint x = 0xEDC; // float32
            public const nint y = 0xEE0; // float32
            public const nint fadeSpeed = 0xEE4; // float32
            public const nint bounceFactor = 0xEE8; // float32
            public const nint hitSound = 0xEEC; // int32
            public const nint priority = 0xEF0; // int32
            public const nint tentOffset = 0xEF4; // Vector
            public const nint m_vecTempEntAngVelocity = 0xF00; // QAngle
            public const nint tempent_renderamt = 0xF0C; // int32
            public const nint m_vecNormal = 0xF10; // Vector
            public const nint m_flSpriteScale = 0xF1C; // float32
            public const nint m_nFlickerFrame = 0xF20; // int32
            public const nint m_flFrameRate = 0xF24; // float32
            public const nint m_flFrame = 0xF28; // float32
            public const nint m_pszImpactEffect = 0xF30; // char*
            public const nint m_pszParticleEffect = 0xF38; // char*
            public const nint m_bParticleCollision = 0xF40; // bool
            public const nint m_iLastCollisionFrame = 0xF44; // int32
            public const nint m_vLastCollisionOrigin = 0xF48; // Vector
            public const nint m_vecTempEntVelocity = 0xF54; // Vector
            public const nint m_vecPrevAbsOrigin = 0xF60; // Vector
            public const nint m_vecTempEntAcceleration = 0xF6C; // Vector
        }
        // Parent: None
        // Fields count: 2
        public static class C_EnvWindShared__WindAveEvent_t {
            public const nint m_flStartWindSpeed = 0x0; // float32
            public const nint m_flAveWindSpeed = 0x4; // float32
        }
        // Parent: C_BaseCSGrenadeProjectile
        // Fields count: 1
        //
        // Metadata:
        // NetworkVarNames: m_bIsIncGrenade (bool)
        public static class C_MolotovProjectile {
            public const nint m_bIsIncGrenade = 0x1150; // bool
        }
        // Parent: C_LightDirectionalEntity
        // Fields count: 0
        public static class C_LightEnvironmentEntity {
        }
        // Parent: C_CSWeaponBaseGun
        // Fields count: 0
        public static class C_WeaponUMP45 {
        }
        // Parent: C_PointEntity
        // Fields count: 9
        //
        // Metadata:
        // NetworkVarNames: m_bDisabled (bool)
        // NetworkVarNames: m_nResolutionX (int)
        // NetworkVarNames: m_nResolutionY (int)
        // NetworkVarNames: m_szLayoutFileName (string_t)
        // NetworkVarNames: m_RenderAttrName (string_t)
        // NetworkVarNames: m_TargetEntities (CHandle<C_BaseModelEntity>)
        // NetworkVarNames: m_nTargetChangeCount (int)
        // NetworkVarNames: m_vecCSSClasses (string_t)
        public static class CInfoOffscreenPanoramaTexture {
            public const nint m_bDisabled = 0x548; // bool
            public const nint m_nResolutionX = 0x54C; // int32
            public const nint m_nResolutionY = 0x550; // int32
            public const nint m_szLayoutFileName = 0x558; // CUtlSymbolLarge
            public const nint m_RenderAttrName = 0x560; // CUtlSymbolLarge
            public const nint m_TargetEntities = 0x568; // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
            public const nint m_nTargetChangeCount = 0x580; // int32
            public const nint m_vecCSSClasses = 0x588; // C_NetworkUtlVectorBase<CUtlSymbolLarge>
            public const nint m_bCheckCSSClasses = 0x700; // bool
        }
        // Parent: C_BaseModelEntity
        // Fields count: 7
        //
        // Metadata:
        // NetworkVarNames: m_Flags (uint8)
        // NetworkVarNames: m_LightStyle (uint8)
        // NetworkVarNames: m_Radius (float32)
        // NetworkVarNames: m_Exponent (int32)
        // NetworkVarNames: m_InnerAngle (float32)
        // NetworkVarNames: m_OuterAngle (float32)
        // NetworkVarNames: m_SpotRadius (float32)
        public static class C_DynamicLight {
            public const nint m_Flags = 0xCC8; // uint8
            public const nint m_LightStyle = 0xCC9; // uint8
            public const nint m_Radius = 0xCCC; // float32
            public const nint m_Exponent = 0xCD0; // int32
            public const nint m_InnerAngle = 0xCD4; // float32
            public const nint m_OuterAngle = 0xCD8; // float32
            public const nint m_SpotRadius = 0xCDC; // float32
        }
        // Parent: C_BasePlayerWeapon
        // Fields count: 76
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
        public static class C_CSWeaponBase {
            public const nint m_flFireSequenceStartTime = 0x1624; // float32
            public const nint m_nFireSequenceStartTimeChange = 0x1628; // int32
            public const nint m_nFireSequenceStartTimeAck = 0x162C; // int32
            public const nint m_ePlayerFireEvent = 0x1630; // PlayerAnimEvent_t
            public const nint m_ePlayerFireEventAttackType = 0x1634; // WeaponAttackType_t
            public const nint m_seqIdle = 0x1638; // HSequence
            public const nint m_seqFirePrimary = 0x163C; // HSequence
            public const nint m_seqFireSecondary = 0x1640; // HSequence
            public const nint m_thirdPersonFireSequences = 0x1648; // CUtlVector<HSequence>
            public const nint m_hCurrentThirdPersonSequence = 0x1660; // HSequence
            public const nint m_nSilencerBoneIndex = 0x1664; // int32
            public const nint m_thirdPersonSequences = 0x1668; // HSequence[7]
            public const nint m_ClientPreviousWeaponState = 0x16A0; // CSWeaponState_t
            public const nint m_iState = 0x16A4; // CSWeaponState_t
            public const nint m_flCrosshairDistance = 0x16A8; // float32
            public const nint m_iAmmoLastCheck = 0x16AC; // int32
            public const nint m_iAlpha = 0x16B0; // int32
            public const nint m_iScopeTextureID = 0x16B4; // int32
            public const nint m_iCrosshairTextureID = 0x16B8; // int32
            public const nint m_flGunAccuracyPositionDeprecated = 0x16BC; // float32
            public const nint m_nLastEmptySoundCmdNum = 0x16C0; // int32
            public const nint m_nViewModelIndex = 0x16C4; // uint32
            public const nint m_bReloadsWithClips = 0x16C8; // bool
            public const nint m_flTimeWeaponIdle = 0x16CC; // GameTime_t
            public const nint m_bFireOnEmpty = 0x16D0; // bool
            public const nint m_OnPlayerPickup = 0x16D8; // CEntityIOOutput
            public const nint m_weaponMode = 0x1700; // CSWeaponMode
            public const nint m_flTurningInaccuracyDelta = 0x1704; // float32
            public const nint m_vecTurningInaccuracyEyeDirLast = 0x1708; // Vector
            public const nint m_flTurningInaccuracy = 0x1714; // float32
            public const nint m_fAccuracyPenalty = 0x1718; // float32
            public const nint m_flLastAccuracyUpdateTime = 0x171C; // GameTime_t
            public const nint m_fAccuracySmoothedForZoom = 0x1720; // float32
            public const nint m_fScopeZoomEndTime = 0x1724; // GameTime_t
            public const nint m_iRecoilIndex = 0x1728; // int32
            public const nint m_flRecoilIndex = 0x172C; // float32
            public const nint m_bBurstMode = 0x1730; // bool
            public const nint m_flLastBurstModeChangeTime = 0x1734; // GameTime_t
            public const nint m_nPostponeFireReadyTicks = 0x1738; // GameTick_t
            public const nint m_flPostponeFireReadyFrac = 0x173C; // float32
            public const nint m_bInReload = 0x1740; // bool
            public const nint m_bReloadVisuallyComplete = 0x1741; // bool
            public const nint m_flDroppedAtTime = 0x1744; // GameTime_t
            public const nint m_bIsHauledBack = 0x1748; // bool
            public const nint m_bSilencerOn = 0x1749; // bool
            public const nint m_flTimeSilencerSwitchComplete = 0x174C; // GameTime_t
            public const nint m_iOriginalTeamNumber = 0x1750; // int32
            public const nint m_iMostRecentTeamNumber = 0x1754; // int32
            public const nint m_bDroppedNearBuyZone = 0x1758; // bool
            public const nint m_flNextAttackRenderTimeOffset = 0x175C; // float32
            public const nint m_bClearWeaponIdentifyingUGC = 0x17E8; // bool
            public const nint m_bVisualsDataSet = 0x17E9; // bool
            public const nint m_bOldFirstPersonSpectatedState = 0x17EA; // bool
            public const nint m_hOurPing = 0x17EC; // CHandle<C_BaseEntity>
            public const nint m_nOurPingIndex = 0x17F0; // CEntityIndex
            public const nint m_vecOurPingPos = 0x17F4; // Vector
            public const nint m_bGlowForPing = 0x1800; // bool
            public const nint m_bUIWeapon = 0x1801; // bool
            public const nint m_nCustomEconReloadEventId = 0x1804; // int32
            public const nint m_hPrevOwner = 0x1810; // CHandle<C_CSPlayerPawn>
            public const nint m_nDropTick = 0x1814; // GameTick_t
            public const nint m_donated = 0x1834; // bool
            public const nint m_fLastShotTime = 0x1838; // GameTime_t
            public const nint m_bWasOwnedByCT = 0x183C; // bool
            public const nint m_bWasOwnedByTerrorist = 0x183D; // bool
            public const nint m_gunHeat = 0x1840; // float32
            public const nint m_smokeAttachments = 0x1844; // uint32
            public const nint m_lastSmokeTime = 0x1848; // GameTime_t
            public const nint m_flNextClientFireBulletTime = 0x184C; // float32
            public const nint m_flNextClientFireBulletTime_Repredict = 0x1850; // float32
            public const nint m_IronSightController = 0x1930; // C_IronSightController
            public const nint m_iIronSightMode = 0x19E0; // int32
            public const nint m_flLastLOSTraceFailureTime = 0x19F0; // GameTime_t
            public const nint m_iNumEmptyAttacks = 0x19F4; // int32
            public const nint m_flLastMagDropRequestTime = 0x1A70; // GameTime_t
            public const nint m_flWatTickOffset = 0x1A74; // float32
        }
        // Parent: C_BaseModelEntity
        // Fields count: 0
        public static class C_TriggerVolume {
        }
        // Parent: C_FuncBrush
        // Fields count: 3
        //
        // Metadata:
        // NetworkVarNames: m_EffectName (string_t)
        // NetworkVarNames: m_bState (bool)
        public static class C_FuncElectrifiedVolume {
            public const nint m_nAmbientEffect = 0xCC8; // ParticleIndex_t
            public const nint m_EffectName = 0xCD0; // CUtlSymbolLarge
            public const nint m_bState = 0xCD8; // bool
        }
        // Parent: CPlayer_WeaponServices
        // Fields count: 5
        //
        // Metadata:
        // NetworkVarNames: m_flNextAttack (GameTime_t)
        // NetworkVarNames: m_bIsLookingAtWeapon (bool)
        // NetworkVarNames: m_bIsHoldingLookAtWeapon (bool)
        public static class CCSPlayer_WeaponServices {
            public const nint m_flNextAttack = 0xB8; // GameTime_t
            public const nint m_bIsLookingAtWeapon = 0xBC; // bool
            public const nint m_bIsHoldingLookAtWeapon = 0xBD; // bool
            public const nint m_nOldShootPositionHistoryCount = 0xC0; // uint32
            public const nint m_nOldInputHistoryCount = 0x458; // uint32
        }
        // Parent: C_BaseEntity
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_flFadeStartDist (float32)
        // NetworkVarNames: m_flFadeEndDist (float32)
        public static class C_EnvDetailController {
            public const nint m_flFadeStartDist = 0x548; // float32
            public const nint m_flFadeEndDist = 0x54C; // float32
        }
        // Parent: CEntityInstance
        // Fields count: 82
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
        // MNetworkExcludeByName
        // NetworkVarNames: m_CBodyComponent (CBodyComponent::Storage_t)
        // NetworkVarNames: m_iMaxHealth (int32)
        // NetworkVarNames: m_iHealth (int32)
        // NetworkVarNames: m_lifeState (uint8)
        // NetworkVarNames: m_bTakesDamage (bool)
        // NetworkVarNames: m_nTakeDamageFlags (TakeDamageFlags_t)
        // NetworkVarNames: m_bIsPlatform (bool)
        // NetworkVarNames: m_ubInterpolationFrame (uint8)
        // NetworkVarNames: m_nSubclassID (EntitySubclassID_t)
        // NetworkVarNames: m_flAnimTime (float32)
        // NetworkVarNames: m_flSimulationTime (float32)
        // NetworkVarNames: m_flCreateTime (GameTime_t)
        // NetworkVarNames: m_flSpeed (float)
        // NetworkVarNames: m_bClientSideRagdoll (bool)
        // NetworkVarNames: m_iTeamNum (uint8)
        // NetworkVarNames: m_spawnflags (uint32)
        // NetworkVarNames: m_nNextThinkTick (GameTick_t)
        // NetworkVarNames: m_fFlags (uint32)
        // NetworkVarNames: m_vecBaseVelocity (Vector)
        // NetworkVarNames: m_hEffectEntity (CHandle<CBaseEntity>)
        // NetworkVarNames: m_hOwnerEntity (CHandle<CBaseEntity>)
        // NetworkVarNames: m_MoveCollide (MoveCollide_t)
        // NetworkVarNames: m_MoveType (MoveType_t)
        // NetworkVarNames: m_flWaterLevel (float32)
        // NetworkVarNames: m_fEffects (uint32)
        // NetworkVarNames: m_hGroundEntity (CHandle<CBaseEntity>)
        // NetworkVarNames: m_nGroundBodyIndex (int)
        // NetworkVarNames: m_flFriction (float32)
        // NetworkVarNames: m_flElasticity (float32)
        // NetworkVarNames: m_flGravityScale (float32)
        // NetworkVarNames: m_flTimeScale (float32)
        // NetworkVarNames: m_bAnimatedEveryTick (bool)
        // NetworkVarNames: m_flNavIgnoreUntilTime (GameTime_t)
        // NetworkVarNames: m_nBloodType (BloodType)
        public static class C_BaseEntity {
            public const nint m_CBodyComponent = 0x38; // CBodyComponent*
            public const nint m_NetworkTransmitComponent = 0x40; // CNetworkTransmitComponent
            public const nint m_nLastThinkTick = 0x300; // GameTick_t
            public const nint m_pGameSceneNode = 0x308; // CGameSceneNode*
            public const nint m_pRenderComponent = 0x310; // CRenderComponent*
            public const nint m_pCollision = 0x318; // CCollisionProperty*
            public const nint m_iMaxHealth = 0x320; // int32
            public const nint m_iHealth = 0x324; // int32
            public const nint m_lifeState = 0x328; // uint8
            public const nint m_bTakesDamage = 0x329; // bool
            public const nint m_nTakeDamageFlags = 0x330; // TakeDamageFlags_t
            public const nint m_bIsPlatform = 0x338; // bool
            public const nint m_ubInterpolationFrame = 0x339; // uint8
            public const nint m_hSceneObjectController = 0x33C; // CHandle<C_BaseEntity>
            public const nint m_nNoInterpolationTick = 0x340; // int32
            public const nint m_nVisibilityNoInterpolationTick = 0x344; // int32
            public const nint m_flProxyRandomValue = 0x348; // float32
            public const nint m_iEFlags = 0x34C; // int32
            public const nint m_nWaterType = 0x350; // uint8
            public const nint m_bInterpolateEvenWithNoModel = 0x351; // bool
            public const nint m_bPredictionEligible = 0x352; // bool
            public const nint m_bApplyLayerMatchIDToModel = 0x353; // bool
            public const nint m_tokLayerMatchID = 0x354; // CUtlStringToken
            public const nint m_nSubclassID = 0x358; // CUtlStringToken
            public const nint m_nSimulationTick = 0x368; // int32
            public const nint m_iCurrentThinkContext = 0x36C; // int32
            public const nint m_aThinkFunctions = 0x370; // CUtlVector<thinkfunc_t>
            public const nint m_bDisabledContextThinks = 0x388; // bool
            public const nint m_flAnimTime = 0x38C; // float32
            public const nint m_flSimulationTime = 0x390; // float32
            public const nint m_nSceneObjectOverrideFlags = 0x394; // uint8
            public const nint m_bHasSuccessfullyInterpolated = 0x395; // bool
            public const nint m_bHasAddedVarsToInterpolation = 0x396; // bool
            public const nint m_bRenderEvenWhenNotSuccessfullyInterpolated = 0x397; // bool
            public const nint m_nInterpolationLatchDirtyFlags = 0x398; // int32[2]
            public const nint m_ListEntry = 0x3A0; // uint16[11]
            public const nint m_flCreateTime = 0x3B8; // GameTime_t
            public const nint m_flSpeed = 0x3BC; // float32
            public const nint m_EntClientFlags = 0x3C0; // uint16
            public const nint m_bClientSideRagdoll = 0x3C2; // bool
            public const nint m_iTeamNum = 0x3C3; // uint8
            public const nint m_spawnflags = 0x3C4; // uint32
            public const nint m_nNextThinkTick = 0x3C8; // GameTick_t
            public const nint m_fFlags = 0x3CC; // uint32
            public const nint m_vecAbsVelocity = 0x3D0; // Vector
            public const nint m_vecVelocity = 0x3E0; // CNetworkVelocityVector
            public const nint m_vecBaseVelocity = 0x410; // Vector
            public const nint m_hEffectEntity = 0x41C; // CHandle<C_BaseEntity>
            public const nint m_hOwnerEntity = 0x420; // CHandle<C_BaseEntity>
            public const nint m_MoveCollide = 0x424; // MoveCollide_t
            public const nint m_MoveType = 0x425; // MoveType_t
            public const nint m_nActualMoveType = 0x426; // MoveType_t
            public const nint m_flWaterLevel = 0x428; // float32
            public const nint m_fEffects = 0x42C; // uint32
            public const nint m_hGroundEntity = 0x430; // CHandle<C_BaseEntity>
            public const nint m_nGroundBodyIndex = 0x434; // int32
            public const nint m_flFriction = 0x438; // float32
            public const nint m_flElasticity = 0x43C; // float32
            public const nint m_flGravityScale = 0x440; // float32
            public const nint m_flTimeScale = 0x444; // float32
            public const nint m_bAnimatedEveryTick = 0x448; // bool
            public const nint m_flNavIgnoreUntilTime = 0x44C; // GameTime_t
            public const nint m_hThink = 0x450; // uint16
            public const nint m_fBBoxVisFlags = 0x460; // uint8
            public const nint m_bPredictable = 0x461; // bool
            public const nint m_bRenderWithViewModels = 0x462; // bool
            public const nint m_nSplitUserPlayerPredictionSlot = 0x464; // CSplitScreenSlot
            public const nint m_nFirstPredictableCommand = 0x468; // int32
            public const nint m_nLastPredictableCommand = 0x46C; // int32
            public const nint m_hOldMoveParent = 0x470; // CHandle<C_BaseEntity>
            public const nint m_Particles = 0x478; // CParticleProperty
            public const nint m_vecPredictedScriptFloats = 0x4A0; // CUtlVector<float32>
            public const nint m_vecPredictedScriptFloatIDs = 0x4B8; // CUtlVector<int32>
            public const nint m_nNextScriptVarRecordID = 0x4E8; // int32
            public const nint m_vecAngVelocity = 0x4F8; // QAngle
            public const nint m_DataChangeEventRef = 0x504; // int32
            public const nint m_dependencies = 0x508; // CUtlVector<CEntityHandle>
            public const nint m_nCreationTick = 0x520; // int32
            public const nint m_bAnimTimeChanged = 0x52D; // bool
            public const nint m_bSimulationTimeChanged = 0x52E; // bool
            public const nint m_sUniqueHammerID = 0x538; // CUtlString
            public const nint m_nBloodType = 0x540; // BloodType
        }
        // Parent: None
        // Fields count: 11
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
        // Parent: C_BreakableProp
        // Fields count: 1
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
        public static class C_PhysicsProp {
            public const nint m_bAwake = 0x1040; // bool
        }
        // Parent: CBaseProp
        // Fields count: 26
        //
        // Metadata:
        // NetworkVarNames: m_CPropDataComponent (CPropDataComponent::Storage_t)
        // NetworkVarNames: m_noGhostCollision (bool)
        public static class C_BreakableProp {
            public const nint m_CPropDataComponent = 0xF10; // CPropDataComponent
            public const nint m_OnBreak = 0xF50; // CEntityIOOutput
            public const nint m_OnHealthChanged = 0xF78; // CEntityOutputTemplate<float32>
            public const nint m_OnTakeDamage = 0xFA0; // CEntityIOOutput
            public const nint m_impactEnergyScale = 0xFC8; // float32
            public const nint m_iMinHealthDmg = 0xFCC; // int32
            public const nint m_flPressureDelay = 0xFD0; // float32
            public const nint m_flDefBurstScale = 0xFD4; // float32
            public const nint m_vDefBurstOffset = 0xFD8; // Vector
            public const nint m_hBreaker = 0xFE4; // CHandle<C_BaseEntity>
            public const nint m_PerformanceMode = 0xFE8; // PerformanceMode_t
            public const nint m_flPreventDamageBeforeTime = 0xFEC; // GameTime_t
            public const nint m_bHasBreakPiecesOrCommands = 0xFF0; // bool
            public const nint m_explodeDamage = 0xFF4; // float32
            public const nint m_explodeRadius = 0xFF8; // float32
            public const nint m_explosionDelay = 0x1000; // float32
            public const nint m_explosionBuildupSound = 0x1008; // CUtlSymbolLarge
            public const nint m_explosionCustomEffect = 0x1010; // CUtlSymbolLarge
            public const nint m_explosionCustomSound = 0x1018; // CUtlSymbolLarge
            public const nint m_explosionModifier = 0x1020; // CUtlSymbolLarge
            public const nint m_hPhysicsAttacker = 0x1028; // CHandle<C_BasePlayerPawn>
            public const nint m_flLastPhysicsInfluenceTime = 0x102C; // GameTime_t
            public const nint m_flDefaultFadeScale = 0x1030; // float32
            public const nint m_hLastAttacker = 0x1034; // CHandle<C_BaseEntity>
            public const nint m_hFlareEnt = 0x1038; // CHandle<C_BaseEntity>
            public const nint m_noGhostCollision = 0x103C; // bool
        }
        // Parent: CCSGameModeScript
        // Fields count: 1
        //
        // Metadata:
        // MPulseInstanceDomainInfo
        // MPulseDomainHookInfo
        // MPulseLibraryBindings
        // MPulseDomainOptInFeatureTag
        public static class CCSArmsRaceScript {
            public const nint m_pOuter = 0xF8; // CCSGameModeRules_ArmsRace*
        }
        // Parent: C_BaseToggle
        // Fields count: 0
        //
        // Metadata:
        // MNetworkIncludeByName
        // MNetworkIncludeByName
        // MNetworkOverride
        public static class C_FuncMoveLinear {
        }
        // Parent: C_BaseModelEntity
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
        public static class C_Beam {
            public const nint m_flFrameRate = 0xCC8; // float32
            public const nint m_flHDRColorScale = 0xCCC; // float32
            public const nint m_flFireTime = 0xCD0; // GameTime_t
            public const nint m_flDamage = 0xCD4; // float32
            public const nint m_nNumBeamEnts = 0xCD8; // uint8
            public const nint m_queryHandleHalo = 0xCDC; // int32
            public const nint m_hBaseMaterial = 0xD00; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_nHaloIndex = 0xD08; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_nBeamType = 0xD10; // BeamType_t
            public const nint m_nBeamFlags = 0xD14; // uint32
            public const nint m_hAttachEntity = 0xD18; // CHandle<C_BaseEntity>[10]
            public const nint m_nAttachIndex = 0xD40; // AttachmentHandle_t[10]
            public const nint m_fWidth = 0xD4C; // float32
            public const nint m_fEndWidth = 0xD50; // float32
            public const nint m_fFadeLength = 0xD54; // float32
            public const nint m_fHaloScale = 0xD58; // float32
            public const nint m_fAmplitude = 0xD5C; // float32
            public const nint m_fStartFrame = 0xD60; // float32
            public const nint m_fSpeed = 0xD64; // float32
            public const nint m_flFrame = 0xD68; // float32
            public const nint m_nClipStyle = 0xD6C; // BeamClipStyle_t
            public const nint m_bTurnedOff = 0xD70; // bool
            public const nint m_vecEndPos = 0xD74; // Vector
            public const nint m_hEndEntity = 0xD80; // CHandle<C_BaseEntity>
        }
        // Parent: C_BaseEntity
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
        public static class C_CSGO_TeamPreviewCharacterPosition {
            public const nint m_nVariant = 0x548; // int32
            public const nint m_nRandom = 0x54C; // int32
            public const nint m_nOrdinal = 0x550; // int32
            public const nint m_sWeaponName = 0x558; // CUtlString
            public const nint m_xuid = 0x560; // uint64
            public const nint m_agentItem = 0x568; // C_EconItemView
            public const nint m_glovesItem = 0x9B0; // C_EconItemView
            public const nint m_weaponItem = 0xDF8; // C_EconItemView
        }
        // Parent: C_DynamicProp
        // Fields count: 0
        public static class C_DynamicPropAlias_prop_dynamic_override {
        }
        // Parent: C_PointEntity
        // Fields count: 9
        //
        // Metadata:
        // NetworkVarNames: m_iszOverlayNames (string_t)
        // NetworkVarNames: m_flOverlayTimes (float32)
        // NetworkVarNames: m_flStartTime (GameTime_t)
        // NetworkVarNames: m_iDesiredOverlay (int32)
        // NetworkVarNames: m_bIsActive (bool)
        public static class C_EnvScreenOverlay {
            public const nint m_iszOverlayNames = 0x548; // CUtlSymbolLarge[10]
            public const nint m_flOverlayTimes = 0x598; // float32[10]
            public const nint m_flStartTime = 0x5C0; // GameTime_t
            public const nint m_iDesiredOverlay = 0x5C4; // int32
            public const nint m_bIsActive = 0x5C8; // bool
            public const nint m_bWasActive = 0x5C9; // bool
            public const nint m_iCachedDesiredOverlay = 0x5CC; // int32
            public const nint m_iCurrentOverlay = 0x5D0; // int32
            public const nint m_flCurrentOverlayTime = 0x5D4; // GameTime_t
        }
        // Parent: CBasePlayerWeaponVData
        // Fields count: 92
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertySuppressBaseClassField
        // MPropertySuppressBaseClassField
        public static class CCSWeaponBaseVData {
            public const nint m_WeaponType = 0x250; // CSWeaponType
            public const nint m_WeaponCategory = 0x254; // CSWeaponCategory
            public const nint m_szViewModel = 0x258; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
            public const nint m_szPlayerModel = 0x338; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
            public const nint m_szWorldDroppedModel = 0x418; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
            public const nint m_szAimsightLensMaskModel = 0x4F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
            public const nint m_szMagazineModel = 0x5D8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
            public const nint m_szHeatEffect = 0x6B8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            public const nint m_szEjectBrassEffect = 0x798; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            public const nint m_szMuzzleFlashParticleAlt = 0x878; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            public const nint m_szMuzzleFlashThirdPersonParticle = 0x958; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            public const nint m_szMuzzleFlashThirdPersonParticleAlt = 0xA38; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            public const nint m_szTracerParticle = 0xB18; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            public const nint m_GearSlot = 0xBF8; // gear_slot_t
            public const nint m_GearSlotPosition = 0xBFC; // int32
            public const nint m_DefaultLoadoutSlot = 0xC00; // loadout_slot_t
            public const nint m_sWrongTeamMsg = 0xC08; // CUtlString
            public const nint m_nPrice = 0xC10; // int32
            public const nint m_nKillAward = 0xC14; // int32
            public const nint m_nPrimaryReserveAmmoMax = 0xC18; // int32
            public const nint m_nSecondaryReserveAmmoMax = 0xC1C; // int32
            public const nint m_bMeleeWeapon = 0xC20; // bool
            public const nint m_bHasBurstMode = 0xC21; // bool
            public const nint m_bIsRevolver = 0xC22; // bool
            public const nint m_bCannotShootUnderwater = 0xC23; // bool
            public const nint m_szName = 0xC28; // CGlobalSymbol
            public const nint m_szAnimExtension = 0xC30; // CUtlString
            public const nint m_eSilencerType = 0xC38; // CSWeaponSilencerType
            public const nint m_nCrosshairMinDistance = 0xC3C; // int32
            public const nint m_nCrosshairDeltaDistance = 0xC40; // int32
            public const nint m_bIsFullAuto = 0xC44; // bool
            public const nint m_nNumBullets = 0xC48; // int32
            public const nint m_flCycleTime = 0xC4C; // CFiringModeFloat
            public const nint m_flMaxSpeed = 0xC54; // CFiringModeFloat
            public const nint m_flSpread = 0xC5C; // CFiringModeFloat
            public const nint m_flInaccuracyCrouch = 0xC64; // CFiringModeFloat
            public const nint m_flInaccuracyStand = 0xC6C; // CFiringModeFloat
            public const nint m_flInaccuracyJump = 0xC74; // CFiringModeFloat
            public const nint m_flInaccuracyLand = 0xC7C; // CFiringModeFloat
            public const nint m_flInaccuracyLadder = 0xC84; // CFiringModeFloat
            public const nint m_flInaccuracyFire = 0xC8C; // CFiringModeFloat
            public const nint m_flInaccuracyMove = 0xC94; // CFiringModeFloat
            public const nint m_flRecoilAngle = 0xC9C; // CFiringModeFloat
            public const nint m_flRecoilAngleVariance = 0xCA4; // CFiringModeFloat
            public const nint m_flRecoilMagnitude = 0xCAC; // CFiringModeFloat
            public const nint m_flRecoilMagnitudeVariance = 0xCB4; // CFiringModeFloat
            public const nint m_nTracerFrequency = 0xCBC; // CFiringModeInt
            public const nint m_flInaccuracyJumpInitial = 0xCC4; // float32
            public const nint m_flInaccuracyJumpApex = 0xCC8; // float32
            public const nint m_flInaccuracyReload = 0xCCC; // float32
            public const nint m_nRecoilSeed = 0xCD0; // int32
            public const nint m_nSpreadSeed = 0xCD4; // int32
            public const nint m_flTimeToIdleAfterFire = 0xCD8; // float32
            public const nint m_flIdleInterval = 0xCDC; // float32
            public const nint m_flAttackMovespeedFactor = 0xCE0; // float32
            public const nint m_flHeatPerShot = 0xCE4; // float32
            public const nint m_flInaccuracyPitchShift = 0xCE8; // float32
            public const nint m_flInaccuracyAltSoundThreshold = 0xCEC; // float32
            public const nint m_flBotAudibleRange = 0xCF0; // float32
            public const nint m_szUseRadioSubtitle = 0xCF8; // CUtlString
            public const nint m_bUnzoomsAfterShot = 0xD00; // bool
            public const nint m_bHideViewModelWhenZoomed = 0xD01; // bool
            public const nint m_nZoomLevels = 0xD04; // int32
            public const nint m_nZoomFOV1 = 0xD08; // int32
            public const nint m_nZoomFOV2 = 0xD0C; // int32
            public const nint m_flZoomTime0 = 0xD10; // float32
            public const nint m_flZoomTime1 = 0xD14; // float32
            public const nint m_flZoomTime2 = 0xD18; // float32
            public const nint m_flIronSightPullUpSpeed = 0xD1C; // float32
            public const nint m_flIronSightPutDownSpeed = 0xD20; // float32
            public const nint m_flIronSightFOV = 0xD24; // float32
            public const nint m_flIronSightPivotForward = 0xD28; // float32
            public const nint m_flIronSightLooseness = 0xD2C; // float32
            public const nint m_angPivotAngle = 0xD30; // QAngle
            public const nint m_vecIronSightEyePos = 0xD3C; // Vector
            public const nint m_nDamage = 0xD48; // int32
            public const nint m_flHeadshotMultiplier = 0xD4C; // float32
            public const nint m_flArmorRatio = 0xD50; // float32
            public const nint m_flPenetration = 0xD54; // float32
            public const nint m_flRange = 0xD58; // float32
            public const nint m_flRangeModifier = 0xD5C; // float32
            public const nint m_flFlinchVelocityModifierLarge = 0xD60; // float32
            public const nint m_flFlinchVelocityModifierSmall = 0xD64; // float32
            public const nint m_flRecoveryTimeCrouch = 0xD68; // float32
            public const nint m_flRecoveryTimeStand = 0xD6C; // float32
            public const nint m_flRecoveryTimeCrouchFinal = 0xD70; // float32
            public const nint m_flRecoveryTimeStandFinal = 0xD74; // float32
            public const nint m_nRecoveryTransitionStartBullet = 0xD78; // int32
            public const nint m_nRecoveryTransitionEndBullet = 0xD7C; // int32
            public const nint m_flThrowVelocity = 0xD80; // float32
            public const nint m_vSmokeColor = 0xD84; // Vector
            public const nint m_szAnimClass = 0xD90; // CGlobalSymbol
        }
        // Parent: C_ModelPointEntity
        // Fields count: 12
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
        public static class C_PointWorldText {
            public const nint m_bForceRecreateNextUpdate = 0xCD0; // bool
            public const nint m_messageText = 0xCE0; // char[512]
            public const nint m_FontName = 0xEE0; // char[64]
            public const nint m_bEnabled = 0xF20; // bool
            public const nint m_bFullbright = 0xF21; // bool
            public const nint m_flWorldUnitsPerPx = 0xF24; // float32
            public const nint m_flFontSize = 0xF28; // float32
            public const nint m_flDepthOffset = 0xF2C; // float32
            public const nint m_Color = 0xF30; // Color
            public const nint m_nJustifyHorizontal = 0xF34; // PointWorldTextJustifyHorizontal_t
            public const nint m_nJustifyVertical = 0xF38; // PointWorldTextJustifyVertical_t
            public const nint m_nReorientMode = 0xF3C; // PointWorldTextReorientMode_t
        }
        // Parent: C_BaseGrenade
        // Fields count: 0
        public static class CBumpMineProjectile {
        }
        // Parent: CBasePlayerController
        // Fields count: 62
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
        public static class CCSPlayerController {
            public const nint m_pInGameMoneyServices = 0x6F0; // CCSPlayerController_InGameMoneyServices*
            public const nint m_pInventoryServices = 0x6F8; // CCSPlayerController_InventoryServices*
            public const nint m_pActionTrackingServices = 0x700; // CCSPlayerController_ActionTrackingServices*
            public const nint m_pDamageServices = 0x708; // CCSPlayerController_DamageServices*
            public const nint m_iPing = 0x710; // uint32
            public const nint m_bHasCommunicationAbuseMute = 0x714; // bool
            public const nint m_szCrosshairCodes = 0x718; // CUtlSymbolLarge
            public const nint m_iPendingTeamNum = 0x720; // uint8
            public const nint m_flForceTeamTime = 0x724; // GameTime_t
            public const nint m_iCompTeammateColor = 0x728; // int32
            public const nint m_bEverPlayedOnTeam = 0x72C; // bool
            public const nint m_flPreviousForceJoinTeamTime = 0x730; // GameTime_t
            public const nint m_szClan = 0x738; // CUtlSymbolLarge
            public const nint m_sSanitizedPlayerName = 0x740; // CUtlString
            public const nint m_iCoachingTeam = 0x748; // int32
            public const nint m_nPlayerDominated = 0x750; // uint64
            public const nint m_nPlayerDominatingMe = 0x758; // uint64
            public const nint m_iCompetitiveRanking = 0x760; // int32
            public const nint m_iCompetitiveWins = 0x764; // int32
            public const nint m_iCompetitiveRankType = 0x768; // int8
            public const nint m_iCompetitiveRankingPredicted_Win = 0x76C; // int32
            public const nint m_iCompetitiveRankingPredicted_Loss = 0x770; // int32
            public const nint m_iCompetitiveRankingPredicted_Tie = 0x774; // int32
            public const nint m_nEndMatchNextMapVote = 0x778; // int32
            public const nint m_unActiveQuestId = 0x77C; // uint16
            public const nint m_nQuestProgressReason = 0x780; // QuestProgress::Reason
            public const nint m_unPlayerTvControlFlags = 0x784; // uint32
            public const nint m_iDraftIndex = 0x7B0; // int32
            public const nint m_msQueuedModeDisconnectionTimestamp = 0x7B4; // uint32
            public const nint m_uiAbandonRecordedReason = 0x7B8; // uint32
            public const nint m_bCannotBeKicked = 0x7BC; // bool
            public const nint m_bEverFullyConnected = 0x7BD; // bool
            public const nint m_bAbandonAllowsSurrender = 0x7BE; // bool
            public const nint m_bAbandonOffersInstantSurrender = 0x7BF; // bool
            public const nint m_bDisconnection1MinWarningPrinted = 0x7C0; // bool
            public const nint m_bScoreReported = 0x7C1; // bool
            public const nint m_nDisconnectionTick = 0x7C4; // int32
            public const nint m_bControllingBot = 0x7D0; // bool
            public const nint m_bHasControlledBotThisRound = 0x7D1; // bool
            public const nint m_bHasBeenControlledByPlayerThisRound = 0x7D2; // bool
            public const nint m_nBotsControlledThisRound = 0x7D4; // int32
            public const nint m_bCanControlObservedBot = 0x7D8; // bool
            public const nint m_hPlayerPawn = 0x7DC; // CHandle<C_CSPlayerPawn>
            public const nint m_hObserverPawn = 0x7E0; // CHandle<C_CSObserverPawn>
            public const nint m_bPawnIsAlive = 0x7E4; // bool
            public const nint m_iPawnHealth = 0x7E8; // uint32
            public const nint m_iPawnArmor = 0x7EC; // int32
            public const nint m_bPawnHasDefuser = 0x7F0; // bool
            public const nint m_bPawnHasHelmet = 0x7F1; // bool
            public const nint m_nPawnCharacterDefIndex = 0x7F2; // uint16
            public const nint m_iPawnLifetimeStart = 0x7F4; // int32
            public const nint m_iPawnLifetimeEnd = 0x7F8; // int32
            public const nint m_iPawnBotDifficulty = 0x7FC; // int32
            public const nint m_hOriginalControllerOfCurrentPawn = 0x800; // CHandle<CCSPlayerController>
            public const nint m_iScore = 0x804; // int32
            public const nint m_vecKills = 0x808; // C_NetworkUtlVectorBase<EKillTypes_t>
            public const nint m_bMvpNoMusic = 0x820; // bool
            public const nint m_eMvpReason = 0x824; // int32
            public const nint m_iMusicKitID = 0x828; // int32
            public const nint m_iMusicKitMVPs = 0x82C; // int32
            public const nint m_iMVPs = 0x830; // int32
            public const nint m_bIsPlayerNameDirty = 0x834; // bool
        }
        // Parent: C_CSWeaponBaseGun
        // Fields count: 0
        public static class C_WeaponFiveSeven {
        }
        // Parent: C_DynamicProp
        // Fields count: 7
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
        // NetworkVarNames: m_hMaster (CHandle<C_BasePropDoor>)
        public static class C_BasePropDoor {
            public const nint m_eDoorState = 0x1168; // DoorState_t
            public const nint m_modelChanged = 0x116C; // bool
            public const nint m_bLocked = 0x116D; // bool
            public const nint m_closedPosition = 0x1170; // Vector
            public const nint m_closedAngles = 0x117C; // QAngle
            public const nint m_hMaster = 0x1188; // CHandle<C_BasePropDoor>
            public const nint m_vWhereToSetLightingOrigin = 0x118C; // Vector
        }
        // Parent: C_CSGO_TeamSelectCharacterPosition
        // Fields count: 0
        public static class C_CSGO_TeamSelectTerroristPosition {
        }
        // Parent: C_BreakableProp
        // Fields count: 6
        public static class C_PhysPropClientside {
            public const nint m_flTouchDelta = 0x1040; // GameTime_t
            public const nint m_fDeathTime = 0x1044; // GameTime_t
            public const nint m_inertiaScale = 0x1048; // float32
            public const nint m_vecDamagePosition = 0x104C; // Vector
            public const nint m_vecDamageDirection = 0x1058; // Vector
            public const nint m_nDamageType = 0x1064; // int32
        }
        // Parent: C_CSGO_TeamPreviewCamera
        // Fields count: 0
        public static class C_CSGO_TeamSelectCamera {
        }
        // Parent: C_BaseEntity
        // Fields count: 4
        //
        // Metadata:
        // NetworkVarNames: m_bDisabled (bool)
        // NetworkVarNames: m_iszSoundAreaType (string_t)
        // NetworkVarNames: m_vPos (Vector)
        public static class C_SoundAreaEntityBase {
            public const nint m_bDisabled = 0x548; // bool
            public const nint m_bWasEnabled = 0x550; // bool
            public const nint m_iszSoundAreaType = 0x558; // CUtlSymbolLarge
            public const nint m_vPos = 0x560; // Vector
        }
        // Parent: C_BaseEntity
        // Fields count: 3
        //
        // Metadata:
        // NetworkVarNames: m_fog (fogparams_t)
        public static class C_FogController {
            public const nint m_fog = 0x548; // fogparams_t
            public const nint m_bUseAngles = 0x5B0; // bool
            public const nint m_iChangedVariables = 0x5B4; // int32
        }
        // Parent: CPlayerPawnComponent
        // Fields count: 0
        public static class CPlayer_ItemServices {
        }
        // Parent: C_BaseModelEntity
        // Fields count: 0
        public static class C_FuncBrush {
        }
        // Parent: C_BaseEntity
        // Fields count: 8
        //
        // Metadata:
        // NetworkVarNames: m_worldName (string_t)
        // NetworkVarNames: m_layerName (string_t)
        // NetworkVarNames: m_bWorldLayerVisible (bool)
        // NetworkVarNames: m_bEntitiesSpawned (bool)
        public static class CInfoWorldLayer {
            public const nint m_pOutputOnEntitiesSpawned = 0x548; // CEntityIOOutput
            public const nint m_worldName = 0x570; // CUtlSymbolLarge
            public const nint m_layerName = 0x578; // CUtlSymbolLarge
            public const nint m_bWorldLayerVisible = 0x580; // bool
            public const nint m_bEntitiesSpawned = 0x581; // bool
            public const nint m_bCreateAsChildSpawnGroup = 0x582; // bool
            public const nint m_hLayerSpawnGroup = 0x584; // uint32
            public const nint m_bWorldLayerActuallyVisible = 0x588; // bool
        }
        // Parent: C_BaseCombatCharacter
        // Fields count: 0
        public static class C_NetTestBaseCombatCharacter {
        }
        // Parent: CBaseAnimGraph
        // Fields count: 1
        public static class C_ViewmodelWeapon {
            public const nint m_worldModel = 0xED0; // char*
        }
        // Parent: CBaseAnimGraph
        // Fields count: 2
        public static class C_PhysMagnet {
            public const nint m_aAttachedObjectsFromServer = 0xED0; // CUtlVector<int32>
            public const nint m_aAttachedObjects = 0xEE8; // CUtlVector<CHandle<C_BaseEntity>>
        }
        // Parent: C_BaseModelEntity
        // Fields count: 8
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
        public static class C_FuncConveyor {
            public const nint m_vecMoveDirEntitySpace = 0xCD0; // Vector
            public const nint m_flTargetSpeed = 0xCDC; // float32
            public const nint m_nTransitionStartTick = 0xCE0; // GameTick_t
            public const nint m_nTransitionDurationTicks = 0xCE4; // int32
            public const nint m_flTransitionStartSpeed = 0xCE8; // float32
            public const nint m_hConveyorModels = 0xCF0; // C_NetworkUtlVectorBase<CHandle<C_BaseEntity>>
            public const nint m_flCurrentConveyorOffset = 0xD08; // float32
            public const nint m_flCurrentConveyorSpeed = 0xD0C; // float32
        }
        // Parent: None
        // Fields count: 4
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
        // Parent: None
        // Fields count: 3
        public static class ServerAuthoritativeWeaponSlot_t {
            public const nint unClass = 0x28; // uint16
            public const nint unSlot = 0x2A; // uint16
            public const nint unItemDefIdx = 0x2C; // uint16
        }
        // Parent: CBaseAnimGraph
        // Fields count: 17
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
        public static class C_BaseViewModel {
            public const nint m_vecLastFacing = 0xED8; // Vector
            public const nint m_nViewModelIndex = 0xEE4; // uint32
            public const nint m_nAnimationParity = 0xEE8; // uint32
            public const nint m_flAnimationStartTime = 0xEEC; // float32
            public const nint m_hWeapon = 0xEF0; // CHandle<C_BasePlayerWeapon>
            public const nint m_sVMName = 0xEF8; // CUtlSymbolLarge
            public const nint m_sAnimationPrefix = 0xF00; // CUtlSymbolLarge
            public const nint m_hWeaponModel = 0xF08; // CHandle<C_ViewmodelWeapon>
            public const nint m_iCameraAttachment = 0xF0C; // AttachmentHandle_t
            public const nint m_vecLastCameraAngles = 0xF10; // QAngle
            public const nint m_previousElapsedDuration = 0xF1C; // float32
            public const nint m_previousCycle = 0xF20; // float32
            public const nint m_nOldAnimationParity = 0xF24; // int32
            public const nint m_hOldLayerSequence = 0xF28; // HSequence
            public const nint m_oldLayer = 0xF2C; // int32
            public const nint m_oldLayerStartTime = 0xF30; // float32
            public const nint m_hControlPanel = 0xF34; // CHandle<C_BaseEntity>
        }
        // Parent: CHostageRescueZoneShim
        // Fields count: 0
        public static class CHostageRescueZone {
        }
        // Parent: C_CSWeaponBaseGun
        // Fields count: 0
        public static class C_WeaponNegev {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseProvideFeatureTag
        // MPulseLibraryBindings
        public static class CCSTakeDamageInfoAPI {
        }
        // Parent: None
        // Fields count: 33
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
        // Parent: C_MolotovGrenade
        // Fields count: 0
        public static class C_IncendiaryGrenade {
        }
        // Parent: C_CSWeaponBase
        // Fields count: 0
        public static class CTablet {
        }
        // Parent: CBasePulseGraphInstance
        // Fields count: 1
        //
        // Metadata:
        // MPulseInstanceDomainInfo
        // MPulseDomainHookInfo
        // MPulseLibraryBindings
        // MPulseDomainOptInFeatureTag
        public static class CCSPointScript {
            public const nint m_pParent = 0xF8; // CCSPointScriptEntity*
        }
        // Parent: C_CSPlayerPawnBase
        // Fields count: 1
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
        public static class C_CSObserverPawn {
            public const nint m_hDetectParentChange = 0x1460; // CEntityHandle
        }
        // Parent: C_BaseEntity
        // Fields count: 3
        //
        // Metadata:
        // NetworkVarNames: m_hEntAttached (CHandle<C_BaseEntity>)
        // NetworkVarNames: m_bCheapEffect (bool)
        public static class C_EntityFlame {
            public const nint m_hEntAttached = 0x548; // CHandle<C_BaseEntity>
            public const nint m_hOldAttached = 0x570; // CHandle<C_BaseEntity>
            public const nint m_bCheapEffect = 0x574; // bool
        }
        // Parent: C_BaseGrenade
        // Fields count: 0
        public static class CTripWireFireProjectile {
        }
        // Parent: C_BaseModelEntity
        // Fields count: 0
        public static class C_Breakable {
        }
        // Parent: CPlayer_ObserverServices
        // Fields count: 8
        public static class CCSObserver_ObserverServices {
            public const nint m_hLastObserverTarget = 0x58; // CEntityHandle
            public const nint m_vecObserverInterpolateOffset = 0x5C; // Vector
            public const nint m_vecObserverInterpStartPos = 0x68; // Vector
            public const nint m_flObsInterp_PathLength = 0x74; // float32
            public const nint m_qObsInterp_OrientationStart = 0x80; // Quaternion
            public const nint m_qObsInterp_OrientationTravelDir = 0x90; // Quaternion
            public const nint m_obsInterpState = 0xA0; // ObserverInterpState_t
            public const nint m_bObserverInterpolationNeedsDeferredSetup = 0xA4; // bool
        }
        // Parent: C_BaseEntity
        // Fields count: 0
        public static class C_TintController {
        }
        // Parent: CPlayerPawnComponent
        // Fields count: 0
        public static class CPlayer_AutoaimServices {
        }
        // Parent: C_BaseCombatCharacter
        // Fields count: 23
        //
        // Metadata:
        // MNetworkIncludeByName
        // MNetworkIncludeByName
        // MNetworkIncludeByName
        // MNetworkIncludeByName
        // MNetworkIncludeByName
        // MNetworkOverride
        // NetworkVarNames: m_entitySpottedState (EntitySpottedState_t)
        // NetworkVarNames: m_leader (CHandle<CBaseEntity>)
        // NetworkVarNames: m_reuseTimer (CountdownTimer)
        // NetworkVarNames: m_vel (Vector)
        // NetworkVarNames: m_isRescued (bool)
        // NetworkVarNames: m_jumpedThisFrame (bool)
        // NetworkVarNames: m_nHostageState (int)
        // NetworkVarNames: m_bHandsHaveBeenCut (bool)
        // NetworkVarNames: m_hHostageGrabber (CHandle<CCSPlayerPawn>)
        // NetworkVarNames: m_flRescueStartTime (GameTime_t)
        // NetworkVarNames: m_flGrabSuccessTime (GameTime_t)
        // NetworkVarNames: m_flDropStartTime (GameTime_t)
        public static class C_Hostage {
            public const nint m_entitySpottedState = 0x10F8; // EntitySpottedState_t
            public const nint m_leader = 0x1110; // CHandle<C_BaseEntity>
            public const nint m_reuseTimer = 0x1118; // CountdownTimer
            public const nint m_vel = 0x1130; // Vector
            public const nint m_isRescued = 0x113C; // bool
            public const nint m_jumpedThisFrame = 0x113D; // bool
            public const nint m_nHostageState = 0x1140; // int32
            public const nint m_bHandsHaveBeenCut = 0x1144; // bool
            public const nint m_hHostageGrabber = 0x1148; // CHandle<C_CSPlayerPawn>
            public const nint m_fLastGrabTime = 0x114C; // GameTime_t
            public const nint m_vecGrabbedPos = 0x1150; // Vector
            public const nint m_flRescueStartTime = 0x115C; // GameTime_t
            public const nint m_flGrabSuccessTime = 0x1160; // GameTime_t
            public const nint m_flDropStartTime = 0x1164; // GameTime_t
            public const nint m_flDeadOrRescuedTime = 0x1168; // GameTime_t
            public const nint m_blinkTimer = 0x1170; // CountdownTimer
            public const nint m_lookAt = 0x1188; // Vector
            public const nint m_lookAroundTimer = 0x1198; // CountdownTimer
            public const nint m_isInit = 0x11B0; // bool
            public const nint m_eyeAttachment = 0x11B1; // AttachmentHandle_t
            public const nint m_chestAttachment = 0x11B2; // AttachmentHandle_t
            public const nint m_pPredictionOwner = 0x11B8; // CBasePlayerController*
            public const nint m_fNewestAlphaThinkTime = 0x11C0; // GameTime_t
        }
        // Parent: C_BaseModelEntity
        // Fields count: 24
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
        public static class C_Sprite {
            public const nint m_hSpriteMaterial = 0xCC8; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_hAttachedToEntity = 0xCD0; // CHandle<C_BaseEntity>
            public const nint m_nAttachment = 0xCD4; // AttachmentHandle_t
            public const nint m_flSpriteFramerate = 0xCD8; // float32
            public const nint m_flFrame = 0xCDC; // float32
            public const nint m_flDieTime = 0xCE0; // GameTime_t
            public const nint m_nBrightness = 0xCF0; // uint32
            public const nint m_flBrightnessDuration = 0xCF4; // float32
            public const nint m_flSpriteScale = 0xCF8; // float32
            public const nint m_flScaleDuration = 0xCFC; // float32
            public const nint m_bWorldSpaceScale = 0xD00; // bool
            public const nint m_flGlowProxySize = 0xD04; // float32
            public const nint m_flHDRColorScale = 0xD08; // float32
            public const nint m_flLastTime = 0xD0C; // GameTime_t
            public const nint m_flMaxFrame = 0xD10; // float32
            public const nint m_flStartScale = 0xD14; // float32
            public const nint m_flDestScale = 0xD18; // float32
            public const nint m_flScaleTimeStart = 0xD1C; // GameTime_t
            public const nint m_nStartBrightness = 0xD20; // int32
            public const nint m_nDestBrightness = 0xD24; // int32
            public const nint m_flBrightnessTimeStart = 0xD28; // GameTime_t
            public const nint m_hOldSpriteMaterial = 0xD30; // CWeakHandle<InfoForResourceTypeIMaterial2>
            public const nint m_nSpriteWidth = 0xDD0; // int32
            public const nint m_nSpriteHeight = 0xDD4; // int32
        }
        // Parent: C_CSWeaponBaseGun
        // Fields count: 0
        public static class C_WeaponM4A1Silencer {
        }
        // Parent: CBaseAnimGraph
        // Fields count: 29
        //
        // Metadata:
        // NetworkVarNames: m_bBombTicking (bool)
        // NetworkVarNames: m_nBombSite (int)
        // NetworkVarNames: m_nSourceSoundscapeHash (int)
        // NetworkVarNames: m_entitySpottedState (EntitySpottedState_t)
        // NetworkVarNames: m_flC4Blow (GameTime_t)
        // NetworkVarNames: m_bCannotBeDefused (bool)
        // NetworkVarNames: m_bHasExploded (bool)
        // NetworkVarNames: m_flTimerLength (float)
        // NetworkVarNames: m_bBeingDefused (bool)
        // NetworkVarNames: m_flDefuseLength (float)
        // NetworkVarNames: m_flDefuseCountDown (GameTime_t)
        // NetworkVarNames: m_bBombDefused (bool)
        // NetworkVarNames: m_hBombDefuser (CHandle<CCSPlayerPawn>)
        // NetworkVarNames: m_hControlPanel (CHandle<CBaseEntity>)
        public static class C_PlantedC4 {
            public const nint m_bBombTicking = 0xED0; // bool
            public const nint m_nBombSite = 0xED4; // int32
            public const nint m_nSourceSoundscapeHash = 0xED8; // int32
            public const nint m_entitySpottedState = 0xEE0; // EntitySpottedState_t
            public const nint m_flNextGlow = 0xEF8; // GameTime_t
            public const nint m_flNextBeep = 0xEFC; // GameTime_t
            public const nint m_flC4Blow = 0xF00; // GameTime_t
            public const nint m_bCannotBeDefused = 0xF04; // bool
            public const nint m_bHasExploded = 0xF05; // bool
            public const nint m_flTimerLength = 0xF08; // float32
            public const nint m_bBeingDefused = 0xF0C; // bool
            public const nint m_bTriggerWarning = 0xF10; // float32
            public const nint m_bExplodeWarning = 0xF14; // float32
            public const nint m_bC4Activated = 0xF18; // bool
            public const nint m_bTenSecWarning = 0xF19; // bool
            public const nint m_flDefuseLength = 0xF1C; // float32
            public const nint m_flDefuseCountDown = 0xF20; // GameTime_t
            public const nint m_bBombDefused = 0xF24; // bool
            public const nint m_hBombDefuser = 0xF28; // CHandle<C_CSPlayerPawn>
            public const nint m_hControlPanel = 0xF2C; // CHandle<C_BaseEntity>
            public const nint m_hDefuserMultimeter = 0xF30; // CHandle<C_Multimeter>
            public const nint m_flNextRadarFlashTime = 0xF34; // GameTime_t
            public const nint m_bRadarFlash = 0xF38; // bool
            public const nint m_pBombDefuser = 0xF3C; // CHandle<C_CSPlayerPawn>
            public const nint m_fLastDefuseTime = 0xF40; // GameTime_t
            public const nint m_pPredictionOwner = 0xF48; // CBasePlayerController*
            public const nint m_vecC4ExplodeSpectatePos = 0xF50; // Vector
            public const nint m_vecC4ExplodeSpectateAng = 0xF5C; // QAngle
            public const nint m_flC4ExplodeSpectateDuration = 0xF68; // float32
        }
        // Parent: CBaseAnimGraph
        // Fields count: 8
        //
        // Metadata:
        // NetworkVarNames: m_ragPos (Vector)
        // NetworkVarNames: m_ragAngles (QAngle)
        // NetworkVarNames: m_flBlendWeight (float32)
        // NetworkVarNames: m_hRagdollSource (EHANDLE)
        public static class C_RagdollProp {
            public const nint m_ragPos = 0xED8; // C_NetworkUtlVectorBase<Vector>
            public const nint m_ragAngles = 0xEF0; // C_NetworkUtlVectorBase<QAngle>
            public const nint m_flBlendWeight = 0xF08; // float32
            public const nint m_hRagdollSource = 0xF0C; // CHandle<C_BaseEntity>
            public const nint m_iEyeAttachment = 0xF10; // AttachmentHandle_t
            public const nint m_flBlendWeightCurrent = 0xF14; // float32
            public const nint m_parentPhysicsBoneIndices = 0xF18; // CUtlVector<int32>
            public const nint m_worldSpaceBoneComputationOrder = 0xF30; // CUtlVector<int32>
        }
        // Parent: C_CSGO_TeamPreviewCamera
        // Fields count: 0
        public static class C_CSGO_TerroristTeamIntroCamera {
        }
        // Parent: C_BaseEntity
        // Fields count: 7
        //
        // Metadata:
        // NetworkVarNames: m_iActiveIssueIndex (int)
        // NetworkVarNames: m_iOnlyTeamToVote (int)
        // NetworkVarNames: m_nVoteOptionCount (int)
        // NetworkVarNames: m_nPotentialVotes (int)
        // NetworkVarNames: m_bIsYesNoVote (bool)
        public static class C_VoteController {
            public const nint m_iActiveIssueIndex = 0x558; // int32
            public const nint m_iOnlyTeamToVote = 0x55C; // int32
            public const nint m_nVoteOptionCount = 0x560; // int32[5]
            public const nint m_nPotentialVotes = 0x574; // int32
            public const nint m_bVotesDirty = 0x578; // bool
            public const nint m_bTypeDirty = 0x579; // bool
            public const nint m_bIsYesNoVote = 0x57A; // bool
        }
        // Parent: None
        // Fields count: 3
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
        // Parent: C_DynamicProp
        // Fields count: 7
        //
        // Metadata:
        // NetworkVarNames: m_jumpedThisFrame (bool)
        // NetworkVarNames: m_leader (CHandle<CCSPlayerPawn>)
        // NetworkVarNames: m_AttributeManager (CAttributeContainer)
        public static class C_Chicken {
            public const nint m_hHolidayHatAddon = 0x1160; // CHandle<CBaseAnimGraph>
            public const nint m_jumpedThisFrame = 0x1164; // bool
            public const nint m_leader = 0x1168; // CHandle<C_CSPlayerPawn>
            public const nint m_AttributeManager = 0x1170; // C_AttributeContainer
            public const nint m_bAttributesInitialized = 0x1618; // bool
            public const nint m_hWaterWakeParticles = 0x161C; // ParticleIndex_t
            public const nint m_bIsPreviewModel = 0x1620; // bool
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // NetworkVarNames: m_Transforms (CTransform)
        // NetworkVarNames: m_hOwner (EHANDLE)
        public static class PhysicsRagdollPose_t {
            public const nint __m_pChainEntity = 0x8; // CNetworkVarChainer
            public const nint m_Transforms = 0x30; // C_NetworkUtlVectorBase<CTransform>
            public const nint m_hOwner = 0x48; // CHandle<C_BaseEntity>
            public const nint m_bDirty = 0x68; // bool
        }
    }
}
