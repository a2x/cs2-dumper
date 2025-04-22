// Generated using https://github.com/a2x/cs2-dumper
// 2025-04-22 08:01:05.061863600 UTC

namespace CS2Dumper.Schemas {
    // Module: client.dll
    // Class count: 414
    // Enum count: 7
    public static class ClientDll {
        // Alignment: 4
        // Member count: 15
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
        // Member count: 7
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
        // Member count: 6
        public enum CompositeMaterialInputContainerSourceType_t : uint {
            CONTAINER_SOURCE_TYPE_TARGET_MATERIAL = 0x0,
            CONTAINER_SOURCE_TYPE_MATERIAL_FROM_TARGET_ATTR = 0x1,
            CONTAINER_SOURCE_TYPE_SPECIFIC_MATERIAL = 0x2,
            CONTAINER_SOURCE_TYPE_LOOSE_VARIABLES = 0x3,
            CONTAINER_SOURCE_TYPE_VARIABLE_FROM_TARGET_ATTR = 0x4,
            CONTAINER_SOURCE_TYPE_TARGET_INSTANCE_MATERIAL = 0x5
        }
        // Alignment: 4
        // Member count: 10
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
        // Member count: 2
        public enum CompositeMaterialVarSystemVar_t : uint {
            COMPMATSYSVAR_COMPOSITETIME = 0x0,
            COMPMATSYSVAR_EMPTY_RESOURCE_SPACER = 0x1
        }
        // Alignment: 4
        // Member count: 6
        public enum CompositeMaterialMatchFilterType_t : uint {
            MATCH_FILTER_MATERIAL_ATTRIBUTE_EXISTS = 0x0,
            MATCH_FILTER_MATERIAL_SHADER = 0x1,
            MATCH_FILTER_MATERIAL_NAME_SUBSTR = 0x2,
            MATCH_FILTER_MATERIAL_ATTRIBUTE_EQUALS = 0x3,
            MATCH_FILTER_MATERIAL_PROPERTY_EXISTS = 0x4,
            MATCH_FILTER_MATERIAL_PROPERTY_EQUALS = 0x5
        }
        // Alignment: 4
        // Member count: 3
        public enum CompMatPropertyMutatorConditionType_t : uint {
            COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_EXISTS = 0x0,
            COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_VALUE_EXISTS = 0x1,
            COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_VALUE_EQUALS = 0x2
        }
        // Parent: C_CSGO_TeamPreviewCharacterPosition
        // Field count: 0
        public static class C_CSGO_TeamSelectCharacterPosition {
        }
        // Parent: C_BaseCSGrenade
        // Field count: 0
        public static class C_HEGrenade {
        }
        // Parent: C_BaseToggle
        // Field count: 0
        public static class C_FuncMover {
        }
        // Parent: C_BaseTrigger
        // Field count: 0
        public static class C_TriggerLerpObject {
        }
        // Parent: CPlayer_MovementServices_Humanoid
        // Field count: 38
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
            public const nint m_vecLadderNormal = 0x218; // Vector
            public const nint m_nLadderSurfacePropIndex = 0x224; // int32
            public const nint m_flDuckAmount = 0x228; // float32
            public const nint m_flDuckSpeed = 0x22C; // float32
            public const nint m_bDuckOverride = 0x230; // bool
            public const nint m_bDesiresDuck = 0x231; // bool
            public const nint m_flDuckOffset = 0x234; // float32
            public const nint m_nDuckTimeMsecs = 0x238; // uint32
            public const nint m_nDuckJumpTimeMsecs = 0x23C; // uint32
            public const nint m_nJumpTimeMsecs = 0x240; // uint32
            public const nint m_flLastDuckTime = 0x244; // float32
            public const nint m_vecLastPositionAtFullCrouchSpeed = 0x250; // Vector2D
            public const nint m_duckUntilOnGround = 0x258; // bool
            public const nint m_bHasWalkMovedSinceLastJump = 0x259; // bool
            public const nint m_bInStuckTest = 0x25A; // bool
            public const nint m_flStuckCheckTime = 0x268; // float32[64][2]
            public const nint m_nTraceCount = 0x468; // int32
            public const nint m_StuckLast = 0x46C; // int32
            public const nint m_bSpeedCropped = 0x470; // bool
            public const nint m_flGroundMoveEfficiency = 0x474; // float32
            public const nint m_nOldWaterLevel = 0x478; // int32
            public const nint m_flWaterEntryTime = 0x47C; // float32
            public const nint m_vecForward = 0x480; // Vector
            public const nint m_vecLeft = 0x48C; // Vector
            public const nint m_vecUp = 0x498; // Vector
            public const nint m_nGameCodeHasMovedPlayerAfterCommand = 0x4A4; // int32
            public const nint m_bOldJumpPressed = 0x4A8; // bool
            public const nint m_flJumpPressedTime = 0x4AC; // float32
            public const nint m_fStashGrenadeParameterWhen = 0x4B0; // GameTime_t
            public const nint m_nButtonDownMaskPrev = 0x4B8; // uint64
            public const nint m_flOffsetTickCompleteTime = 0x4C0; // float32
            public const nint m_flOffsetTickStashedSpeed = 0x4C4; // float32
            public const nint m_flStamina = 0x4C8; // float32
            public const nint m_flHeightAtJumpStart = 0x4CC; // float32
            public const nint m_flMaxJumpHeightThisJump = 0x4D0; // float32
            public const nint m_flMaxJumpHeightLastJump = 0x4D4; // float32
            public const nint m_flStaminaAtJumpStart = 0x4D8; // float32
            public const nint m_flAccumulatedJumpError = 0x4DC; // float32
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
        // Parent: C_CSWeaponBaseGun
        // Field count: 0
        public static class C_WeaponM4A1 {
        }
        // Parent: C_EconEntity
        // Field count: 1
        public static class C_Item {
            public const nint m_pReticleHintTextName = 0x1668; // char[256]
        }
        // Parent: C_SoundEventEntity
        // Field count: 1
        //
        // Metadata:
        // NetworkVarNames: m_vecCornerPairsNetworked (SoundeventPathCornerPairNetworked_t)
        public static class C_SoundEventPathCornerEntity {
            public const nint m_vecCornerPairsNetworked = 0x628; // C_NetworkUtlVectorBase<SoundeventPathCornerPairNetworked_t>
        }
        // Parent: C_CSWeaponBaseGun
        // Field count: 0
        public static class C_WeaponM249 {
        }
        // Parent: C_TeamplayRules
        // Field count: 101
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
            public const nint m_ullLocalMatchID = 0xC60; // uint64
            public const nint m_nEndMatchMapGroupVoteTypes = 0xC68; // int32[10]
            public const nint m_nEndMatchMapGroupVoteOptions = 0xC90; // int32[10]
            public const nint m_nEndMatchMapVoteWinner = 0xCB8; // int32
            public const nint m_iNumConsecutiveCTLoses = 0xCBC; // int32
            public const nint m_iNumConsecutiveTerroristLoses = 0xCC0; // int32
            public const nint m_bMarkClientStopRecordAtRoundEnd = 0xCE0; // bool
            public const nint m_nMatchAbortedEarlyReason = 0xD88; // int32
            public const nint m_bHasTriggeredRoundStartMusic = 0xD8C; // bool
            public const nint m_bSwitchingTeamsAtRoundReset = 0xD8D; // bool
            public const nint m_pGameModeRules = 0xDA8; // CCSGameModeRules*
            public const nint m_RetakeRules = 0xDB0; // C_RetakeGameRules
            public const nint m_nMatchEndCount = 0xEC8; // uint8
            public const nint m_nTTeamIntroVariant = 0xECC; // int32
            public const nint m_nCTTeamIntroVariant = 0xED0; // int32
            public const nint m_bTeamIntroPeriod = 0xED4; // bool
            public const nint m_iRoundEndWinnerTeam = 0xED8; // int32
            public const nint m_eRoundEndReason = 0xEDC; // int32
            public const nint m_bRoundEndShowTimerDefend = 0xEE0; // bool
            public const nint m_iRoundEndTimerTime = 0xEE4; // int32
            public const nint m_sRoundEndFunFactToken = 0xEE8; // CUtlString
            public const nint m_iRoundEndFunFactPlayerSlot = 0xEF0; // CPlayerSlot
            public const nint m_iRoundEndFunFactData1 = 0xEF4; // int32
            public const nint m_iRoundEndFunFactData2 = 0xEF8; // int32
            public const nint m_iRoundEndFunFactData3 = 0xEFC; // int32
            public const nint m_sRoundEndMessage = 0xF00; // CUtlString
            public const nint m_iRoundEndPlayerCount = 0xF08; // int32
            public const nint m_bRoundEndNoMusic = 0xF0C; // bool
            public const nint m_iRoundEndLegacy = 0xF10; // int32
            public const nint m_nRoundEndCount = 0xF14; // uint8
            public const nint m_iRoundStartRoundNumber = 0xF18; // int32
            public const nint m_nRoundStartCount = 0xF1C; // uint8
            public const nint m_flLastPerfSampleTime = 0x4F28; // float64
        }
        // Parent: CBodyComponent
        // Field count: 1
        //
        // Metadata:
        // NetworkVarNames: m_skeletonInstance (CSkeletonInstance)
        public static class CBodyComponentSkeletonInstance {
            public const nint m_skeletonInstance = 0x50; // CSkeletonInstance
        }
        // Parent: C_CSWeaponBaseGun
        // Field count: 0
        public static class C_WeaponCZ75a {
        }
        // Parent: C_BaseEntity
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
        // NetworkVarNames: m_ConfigEntitiesToPropagateMaterialDecalsTo (CHandle<C_BaseModelEntity>)
        public static class C_BaseModelEntity {
            public const nint m_CRenderComponent = 0xA50; // CRenderComponent*
            public const nint m_CHitboxComponent = 0xA58; // CHitboxComponent
            public const nint m_LastHitGroup = 0xA80; // HitGroup_t
            public const nint m_bInitModelEffects = 0xAA8; // bool
            public const nint m_bIsStaticProp = 0xAA9; // bool
            public const nint m_nLastAddDecal = 0xAAC; // int32
            public const nint m_nDecalsAdded = 0xAB0; // int32
            public const nint m_iOldHealth = 0xAB4; // int32
            public const nint m_nRenderMode = 0xAB8; // RenderMode_t
            public const nint m_nRenderFX = 0xAB9; // RenderFx_t
            public const nint m_bAllowFadeInView = 0xABA; // bool
            public const nint m_clrRender = 0xAD8; // Color
            public const nint m_vecRenderAttributes = 0xAE0; // C_UtlVectorEmbeddedNetworkVar<EntityRenderAttribute_t>
            public const nint m_bRenderToCubemaps = 0xB48; // bool
            public const nint m_bNoInterpolate = 0xB49; // bool
            public const nint m_Collision = 0xB50; // CCollisionProperty
            public const nint m_Glow = 0xC00; // CGlowProperty
            public const nint m_flGlowBackfaceMult = 0xC58; // float32
            public const nint m_fadeMinDist = 0xC5C; // float32
            public const nint m_fadeMaxDist = 0xC60; // float32
            public const nint m_flFadeScale = 0xC64; // float32
            public const nint m_flShadowStrength = 0xC68; // float32
            public const nint m_nObjectCulling = 0xC6C; // uint8
            public const nint m_nAddDecal = 0xC70; // int32
            public const nint m_vDecalPosition = 0xC74; // Vector
            public const nint m_vDecalForwardAxis = 0xC80; // Vector
            public const nint m_flDecalHealBloodRate = 0xC8C; // float32
            public const nint m_flDecalHealHeightRate = 0xC90; // float32
            public const nint m_ConfigEntitiesToPropagateMaterialDecalsTo = 0xC98; // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
            public const nint m_vecViewOffset = 0xCB0; // CNetworkViewOffsetVector
            public const nint m_pClientAlphaProperty = 0xCE0; // CClientAlphaProperty*
            public const nint m_ClientOverrideTint = 0xCE8; // Color
            public const nint m_bUseClientOverrideTint = 0xCEC; // bool
        }
        // Parent: C_BaseTrigger
        // Field count: 2
        //
        // Metadata:
        // NetworkVarNames: m_source (string_t)
        // NetworkVarNames: m_destination (string_t)
        public static class C_FootstepControl {
            public const nint m_source = 0xD30; // CUtlSymbolLarge
            public const nint m_destination = 0xD38; // CUtlSymbolLarge
        }
        // Parent: C_BaseClientUIEntity
        // Field count: 13
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
            public const nint m_bCheckCSSClasses = 0xD60; // bool
            public const nint m_bIgnoreInput = 0xEE0; // bool
            public const nint m_flWidth = 0xEE4; // float32
            public const nint m_flHeight = 0xEE8; // float32
            public const nint m_flDPI = 0xEEC; // float32
            public const nint m_flInteractDistance = 0xEF0; // float32
            public const nint m_flDepthOffset = 0xEF4; // float32
            public const nint m_unOwnerContext = 0xEF8; // uint32
            public const nint m_unHorizontalAlign = 0xEFC; // uint32
            public const nint m_unVerticalAlign = 0xF00; // uint32
            public const nint m_unOrientation = 0xF04; // uint32
            public const nint m_bAllowInteractionFromAllSceneWorlds = 0xF08; // bool
            public const nint m_vecCSSClasses = 0xF10; // C_NetworkUtlVectorBase<CUtlSymbolLarge>
        }
        // Parent: C_BaseModelEntity
        // Field count: 2
        //
        // Metadata:
        // NetworkVarNames: m_flLightScale (float32)
        // NetworkVarNames: m_Radius (float32)
        public static class C_SpotlightEnd {
            public const nint m_flLightScale = 0xD28; // float32
            public const nint m_Radius = 0xD2C; // float32
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
        // Parent: C_BaseEntity
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
        public static class C_PointCamera {
            public const nint m_FOV = 0x568; // float32
            public const nint m_Resolution = 0x56C; // float32
            public const nint m_bFogEnable = 0x570; // bool
            public const nint m_FogColor = 0x571; // Color
            public const nint m_flFogStart = 0x578; // float32
            public const nint m_flFogEnd = 0x57C; // float32
            public const nint m_flFogMaxDensity = 0x580; // float32
            public const nint m_bActive = 0x584; // bool
            public const nint m_bUseScreenAspectRatio = 0x585; // bool
            public const nint m_flAspectRatio = 0x588; // float32
            public const nint m_bNoSky = 0x58C; // bool
            public const nint m_fBrightness = 0x590; // float32
            public const nint m_flZFar = 0x594; // float32
            public const nint m_flZNear = 0x598; // float32
            public const nint m_bCanHLTVUse = 0x59C; // bool
            public const nint m_bAlignWithParent = 0x59D; // bool
            public const nint m_bDofEnabled = 0x59E; // bool
            public const nint m_flDofNearBlurry = 0x5A0; // float32
            public const nint m_flDofNearCrisp = 0x5A4; // float32
            public const nint m_flDofFarCrisp = 0x5A8; // float32
            public const nint m_flDofFarBlurry = 0x5AC; // float32
            public const nint m_flDofTiltToGround = 0x5B0; // float32
            public const nint m_TargetFOV = 0x5B4; // float32
            public const nint m_DegreesPerSecond = 0x5B8; // float32
            public const nint m_bIsOn = 0x5BC; // bool
            public const nint m_pNext = 0x5C0; // C_PointCamera*
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MPulseProvideFeatureTag
        // MPulseLibraryBindings
        public static class CCSPointScriptExtensions_weapon_cs_base {
        }
        // Parent: C_LightEntity
        // Field count: 0
        public static class C_LightSpotEntity {
        }
        // Parent: C_BaseEntity
        // Field count: 1
        //
        // Metadata:
        // NetworkVarNames: m_EnvWindShared (CEnvWindShared)
        public static class C_EnvWind {
            public const nint m_EnvWindShared = 0x568; // C_EnvWindShared
        }
        // Parent: C_BaseEntity
        // Field count: 0
        public static class C_GameRulesProxy {
        }
        // Parent: C_BaseFlex
        // Field count: 6
        //
        // Metadata:
        // MNetworkExcludeByUserGroup
        // NetworkVarNames: m_hMyWearables (CHandle<C_EconWearable>)
        public static class C_BaseCombatCharacter {
            public const nint m_hMyWearables = 0x1120; // C_NetworkUtlVectorBase<CHandle<C_EconWearable>>
            public const nint m_leftFootAttachment = 0x1138; // AttachmentHandle_t
            public const nint m_rightFootAttachment = 0x1139; // AttachmentHandle_t
            public const nint m_nWaterWakeMode = 0x113C; // C_BaseCombatCharacter::WaterWakeMode_t
            public const nint m_flWaterWorldZ = 0x1140; // float32
            public const nint m_flWaterNextTraceTime = 0x1144; // float32
        }
        // Parent: C_BaseCSGrenadeProjectile
        // Field count: 0
        public static class C_FlashbangProjectile {
        }
        // Parent: CEnvSoundscape
        // Field count: 0
        public static class CEnvSoundscapeTriggerable {
        }
        // Parent: C_SoundEventEntity
        // Field count: 1
        //
        // Metadata:
        // NetworkVarNames: m_flRadius (float)
        public static class C_SoundEventSphereEntity {
            public const nint m_flRadius = 0x628; // float32
        }
        // Parent: CPlayerPawnComponent
        // Field count: 0
        public static class CPlayer_ViewModelServices {
        }
        // Parent: CCSGO_WingmanIntroCharacterPosition
        // Field count: 0
        public static class CCSGO_WingmanIntroCounterTerroristPosition {
        }
        // Parent: C_DynamicProp
        // Field count: 0
        public static class C_DynamicPropAlias_cable_dynamic {
        }
        // Parent: C_PointEntity
        // Field count: 0
        public static class C_InfoInstructorHintHostageRescueZone {
        }
        // Parent: C_PointEntity
        // Field count: 12
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
            public const nint m_bIsPlayingBack = 0x570; // bool
            public const nint m_bPaused = 0x571; // bool
            public const nint m_bMultiplayer = 0x572; // bool
            public const nint m_bAutogenerated = 0x573; // bool
            public const nint m_flForceClientTime = 0x574; // float32
            public const nint m_nSceneStringIndex = 0x578; // uint16
            public const nint m_bClientOnly = 0x57A; // bool
            public const nint m_hOwner = 0x57C; // CHandle<C_BaseFlex>
            public const nint m_hActorList = 0x580; // C_NetworkUtlVectorBase<CHandle<C_BaseFlex>>
            public const nint m_bWasPlaying = 0x598; // bool
            public const nint m_QueuedEvents = 0x5A8; // CUtlVector<C_SceneEntity::QueuedEvents_t>
            public const nint m_flCurrentTime = 0x5C0; // float32
        }
        // Parent: CPlayerPawnComponent
        // Field count: 20
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
        // Field count: 15
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
            public const nint m_bClientPredictDelete = 0x1B20; // bool
            public const nint m_bRedraw = 0x1B21; // bool
            public const nint m_bIsHeldByPlayer = 0x1B22; // bool
            public const nint m_bPinPulled = 0x1B23; // bool
            public const nint m_bJumpThrow = 0x1B24; // bool
            public const nint m_bThrowAnimating = 0x1B25; // bool
            public const nint m_fThrowTime = 0x1B28; // GameTime_t
            public const nint m_flThrowStrength = 0x1B2C; // float32
            public const nint m_flThrowStrengthApproach = 0x1B30; // float32
            public const nint m_fDropTime = 0x1B34; // GameTime_t
            public const nint m_fPinPullTime = 0x1B38; // GameTime_t
            public const nint m_bJustPulledPin = 0x1B3C; // bool
            public const nint m_nNextHoldTick = 0x1B40; // GameTick_t
            public const nint m_flNextHoldFrac = 0x1B44; // float32
            public const nint m_hSwitchToWeaponAfterThrow = 0x1B48; // CHandle<C_CSWeaponBase>
        }
        // Parent: C_FuncBrush
        // Field count: 8
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
            public const nint m_targetCamera = 0xD28; // CUtlString
            public const nint m_nResolutionEnum = 0xD30; // int32
            public const nint m_bRenderShadows = 0xD34; // bool
            public const nint m_bUseUniqueColorTarget = 0xD35; // bool
            public const nint m_brushModelName = 0xD38; // CUtlString
            public const nint m_hTargetCamera = 0xD40; // CHandle<C_BaseEntity>
            public const nint m_bEnabled = 0xD44; // bool
            public const nint m_bDraw3DSkybox = 0xD45; // bool
        }
        // Parent: C_BaseTrigger
        // Field count: 0
        public static class C_TriggerMultiple {
        }
        // Parent: None
        // Field count: 1
        public static class C_RopeKeyframe__CPhysicsDelegate {
            public const nint m_pKeyframe = 0x8; // C_RopeKeyframe*
        }
        // Parent: CEntityComponent
        // Field count: 2
        public static class CBodyComponent {
            public const nint m_pSceneNode = 0x8; // CGameSceneNode*
            public const nint __m_pChainEntity = 0x20; // CNetworkVarChainer
        }
        // Parent: C_SoundAreaEntityBase
        // Field count: 1
        //
        // Metadata:
        // NetworkVarNames: m_flRadius (float)
        public static class C_SoundAreaEntitySphere {
            public const nint m_flRadius = 0x590; // float32
        }
        // Parent: CPlayer_MovementServices
        // Field count: 0
        public static class CCSObserver_MovementServices {
        }
        // Parent: C_BaseModelEntity
        // Field count: 8
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
            public const nint m_nHorizontalSize = 0xD28; // uint32
            public const nint m_nVerticalSize = 0xD2C; // uint32
            public const nint m_nMinDist = 0xD30; // uint32
            public const nint m_nMaxDist = 0xD34; // uint32
            public const nint m_nOuterMaxDist = 0xD38; // uint32
            public const nint m_flGlowProxySize = 0xD3C; // float32
            public const nint m_flHDRColorScale = 0xD40; // float32
            public const nint m_GlowOverlay = 0xD48; // C_LightGlowOverlay
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
        // Parent: CBaseAnimGraph
        // Field count: 14
        public static class C_ClientRagdoll {
            public const nint m_bFadeOut = 0xF88; // bool
            public const nint m_bImportant = 0xF89; // bool
            public const nint m_flEffectTime = 0xF8C; // GameTime_t
            public const nint m_gibDespawnTime = 0xF90; // GameTime_t
            public const nint m_iCurrentFriction = 0xF94; // int32
            public const nint m_iMinFriction = 0xF98; // int32
            public const nint m_iMaxFriction = 0xF9C; // int32
            public const nint m_iFrictionAnimState = 0xFA0; // int32
            public const nint m_bReleaseRagdoll = 0xFA4; // bool
            public const nint m_iEyeAttachment = 0xFA5; // AttachmentHandle_t
            public const nint m_bFadingOut = 0xFA6; // bool
            public const nint m_flScaleEnd = 0xFA8; // float32[10]
            public const nint m_flScaleTimeStart = 0xFD0; // GameTime_t[10]
            public const nint m_flScaleTimeEnd = 0xFF8; // GameTime_t[10]
        }
        // Parent: C_BaseEntity
        // Field count: 1
        public static class C_GlobalLight {
            public const nint m_WindClothForceHandle = 0xA30; // uint16
        }
        // Parent: C_BaseEntity
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
        public static class C_CSPlayerResource {
            public const nint m_bHostageAlive = 0x568; // bool[12]
            public const nint m_isHostageFollowingSomeone = 0x574; // bool[12]
            public const nint m_iHostageEntityIDs = 0x580; // CEntityIndex[12]
            public const nint m_bombsiteCenterA = 0x5B0; // Vector
            public const nint m_bombsiteCenterB = 0x5BC; // Vector
            public const nint m_hostageRescueX = 0x5C8; // int32[4]
            public const nint m_hostageRescueY = 0x5D8; // int32[4]
            public const nint m_hostageRescueZ = 0x5E8; // int32[4]
            public const nint m_bEndMatchNextMapAllVoted = 0x5F8; // bool
            public const nint m_foundGoalPositions = 0x5F9; // bool
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
        // Parent: C_BaseCSGrenadeProjectile
        // Field count: 10
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
        public static class C_SmokeGrenadeProjectile {
            public const nint m_nSmokeEffectTickBegin = 0x1210; // int32
            public const nint m_bDidSmokeEffect = 0x1214; // bool
            public const nint m_nRandomSeed = 0x1218; // int32
            public const nint m_vSmokeColor = 0x121C; // Vector
            public const nint m_vSmokeDetonationPos = 0x1228; // Vector
            public const nint m_VoxelFrameData = 0x1238; // C_NetworkUtlVectorBase<uint8>
            public const nint m_nVoxelFrameDataSize = 0x1250; // int32
            public const nint m_nVoxelUpdate = 0x1254; // int32
            public const nint m_bSmokeVolumeDataReceived = 0x1258; // bool
            public const nint m_bSmokeEffectSpawned = 0x1259; // bool
        }
        // Parent: C_SoundEventEntity
        // Field count: 0
        public static class C_SoundEventEntityAlias_snd_event_point {
        }
        // Parent: C_BaseEntity
        // Field count: 8
        public static class C_CSGO_MapPreviewCameraPath {
            public const nint m_flZFar = 0x568; // float32
            public const nint m_flZNear = 0x56C; // float32
            public const nint m_bLoop = 0x570; // bool
            public const nint m_bVerticalFOV = 0x571; // bool
            public const nint m_bConstantSpeed = 0x572; // bool
            public const nint m_flDuration = 0x574; // float32
            public const nint m_flPathLength = 0x5B8; // float32
            public const nint m_flPathDuration = 0x5BC; // float32
        }
        // Parent: CCSGO_WingmanIntroCharacterPosition
        // Field count: 0
        public static class CCSGO_WingmanIntroTerroristPosition {
        }
        // Parent: C_BaseModelEntity
        // Field count: 24
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
            public const nint m_nfxFireDamageEffect = 0xD68; // ParticleIndex_t
            public const nint m_hInfernoPointsSnapshot = 0xD70; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
            public const nint m_hInfernoFillerPointsSnapshot = 0xD78; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
            public const nint m_hInfernoOutlinePointsSnapshot = 0xD80; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
            public const nint m_hInfernoClimbingOutlinePointsSnapshot = 0xD88; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
            public const nint m_hInfernoDecalsSnapshot = 0xD90; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
            public const nint m_firePositions = 0xD98; // Vector[64]
            public const nint m_fireParentPositions = 0x1098; // Vector[64]
            public const nint m_bFireIsBurning = 0x1398; // bool[64]
            public const nint m_BurnNormal = 0x13D8; // Vector[64]
            public const nint m_fireCount = 0x16D8; // int32
            public const nint m_nInfernoType = 0x16DC; // int32
            public const nint m_nFireLifetime = 0x16E0; // float32
            public const nint m_bInPostEffectTime = 0x16E4; // bool
            public const nint m_lastFireCount = 0x16E8; // int32
            public const nint m_nFireEffectTickBegin = 0x16EC; // int32
            public const nint m_drawableCount = 0x82F0; // int32
            public const nint m_blosCheck = 0x82F4; // bool
            public const nint m_nlosperiod = 0x82F8; // int32
            public const nint m_maxFireHalfWidth = 0x82FC; // float32
            public const nint m_maxFireHeight = 0x8300; // float32
            public const nint m_minBounds = 0x8304; // Vector
            public const nint m_maxBounds = 0x8310; // Vector
            public const nint m_flLastGrassBurnThink = 0x831C; // float32
        }
        // Parent: CBaseAnimGraph
        // Field count: 0
        public static class C_HostageCarriableProp {
        }
        // Parent: C_CSGO_TeamPreviewCamera
        // Field count: 0
        public static class C_CSGO_TerroristWingmanIntroCamera {
        }
        // Parent: C_BaseEntity
        // Field count: 5
        //
        // Metadata:
        // NetworkVarNames: m_hPlayer (CHandle<CCSPlayerPawn>)
        // NetworkVarNames: m_hPingedEntity (CHandle<CBaseEntity>)
        // NetworkVarNames: m_iType (int)
        // NetworkVarNames: m_bUrgent (bool)
        // NetworkVarNames: m_szPlaceName (char)
        public static class C_PlayerPing {
            public const nint m_hPlayer = 0x598; // CHandle<C_CSPlayerPawn>
            public const nint m_hPingedEntity = 0x59C; // CHandle<C_BaseEntity>
            public const nint m_iType = 0x5A0; // int32
            public const nint m_bUrgent = 0x5A4; // bool
            public const nint m_szPlaceName = 0x5A5; // char[18]
        }
        // Parent: C_CSWeaponBaseGun
        // Field count: 0
        public static class C_WeaponMP7 {
        }
        // Parent: C_Team
        // Field count: 10
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
            public const nint m_szTeamMatchStat = 0x620; // char[512]
            public const nint m_numMapVictories = 0x820; // int32
            public const nint m_bSurrendered = 0x824; // bool
            public const nint m_scoreFirstHalf = 0x828; // int32
            public const nint m_scoreSecondHalf = 0x82C; // int32
            public const nint m_scoreOvertime = 0x830; // int32
            public const nint m_szClanTeamname = 0x834; // char[129]
            public const nint m_iClanID = 0x8B8; // uint32
            public const nint m_szTeamFlagImage = 0x8BC; // char[8]
            public const nint m_szTeamLogoImage = 0x8C4; // char[8]
        }
        // Parent: C_BaseEntity
        // Field count: 10
        public static class C_CSGO_MapPreviewCameraPathNode {
            public const nint m_szParentPathUniqueID = 0x568; // CUtlSymbolLarge
            public const nint m_nPathIndex = 0x570; // int32
            public const nint m_vInTangentLocal = 0x574; // Vector
            public const nint m_vOutTangentLocal = 0x580; // Vector
            public const nint m_flFOV = 0x58C; // float32
            public const nint m_flCameraSpeed = 0x590; // float32
            public const nint m_flEaseIn = 0x594; // float32
            public const nint m_flEaseOut = 0x598; // float32
            public const nint m_vInTangentWorld = 0x59C; // Vector
            public const nint m_vOutTangentWorld = 0x5A8; // Vector
        }
        // Parent: C_CSWeaponBaseGun
        // Field count: 0
        public static class C_WeaponMag7 {
        }
        // Parent: C_CSWeaponBaseGun
        // Field count: 0
        public static class C_DEagle {
        }
        // Parent: C_CSPlayerPawnBase
        // Field count: 104
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
        // NetworkVarNames: m_flFlinchStack (float)
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
        // NetworkVarNames: m_PredictedDamageTags (PredictedDamageTag_t)
        public static class C_CSPlayerPawn {
            public const nint m_pBulletServices = 0x1518; // CCSPlayer_BulletServices*
            public const nint m_pHostageServices = 0x1520; // CCSPlayer_HostageServices*
            public const nint m_pBuyServices = 0x1528; // CCSPlayer_BuyServices*
            public const nint m_pGlowServices = 0x1530; // CCSPlayer_GlowServices*
            public const nint m_pActionTrackingServices = 0x1538; // CCSPlayer_ActionTrackingServices*
            public const nint m_pDamageReactServices = 0x1540; // CCSPlayer_DamageReactServices*
            public const nint m_flHealthShotBoostExpirationTime = 0x1548; // GameTime_t
            public const nint m_flLastFiredWeaponTime = 0x154C; // GameTime_t
            public const nint m_bHasFemaleVoice = 0x1550; // bool
            public const nint m_flLandingTimeSeconds = 0x1554; // float32
            public const nint m_flOldFallVelocity = 0x1558; // float32
            public const nint m_szLastPlaceName = 0x155C; // char[18]
            public const nint m_bPrevDefuser = 0x156E; // bool
            public const nint m_bPrevHelmet = 0x156F; // bool
            public const nint m_nPrevArmorVal = 0x1570; // int32
            public const nint m_nPrevGrenadeAmmoCount = 0x1574; // int32
            public const nint m_unPreviousWeaponHash = 0x1578; // uint32
            public const nint m_unWeaponHash = 0x157C; // uint32
            public const nint m_bInBuyZone = 0x1580; // bool
            public const nint m_bPreviouslyInBuyZone = 0x1581; // bool
            public const nint m_aimPunchAngle = 0x1584; // QAngle
            public const nint m_aimPunchAngleVel = 0x1590; // QAngle
            public const nint m_aimPunchTickBase = 0x159C; // int32
            public const nint m_aimPunchTickFraction = 0x15A0; // float32
            public const nint m_aimPunchCache = 0x15A8; // CUtlVector<QAngle>
            public const nint m_bInLanding = 0x15C8; // bool
            public const nint m_flLandingStartTime = 0x15CC; // float32
            public const nint m_bInHostageRescueZone = 0x15D0; // bool
            public const nint m_bInBombZone = 0x15D1; // bool
            public const nint m_bIsBuyMenuOpen = 0x15D2; // bool
            public const nint m_flTimeOfLastInjury = 0x15D4; // GameTime_t
            public const nint m_flNextSprayDecalTime = 0x15D8; // GameTime_t
            public const nint m_iRetakesOffering = 0x1730; // int32
            public const nint m_iRetakesOfferingCard = 0x1734; // int32
            public const nint m_bRetakesHasDefuseKit = 0x1738; // bool
            public const nint m_bRetakesMVPLastRound = 0x1739; // bool
            public const nint m_iRetakesMVPBoostItem = 0x173C; // int32
            public const nint m_RetakesMVPBoostExtraUtility = 0x1740; // loadout_slot_t
            public const nint m_bNeedToReApplyGloves = 0x1760; // bool
            public const nint m_EconGloves = 0x1768; // C_EconItemView
            public const nint m_nEconGlovesChanged = 0x1BB0; // uint8
            public const nint m_bMustSyncRagdollState = 0x1BB1; // bool
            public const nint m_nRagdollDamageBone = 0x1BB4; // int32
            public const nint m_vRagdollDamageForce = 0x1BB8; // Vector
            public const nint m_vRagdollDamagePosition = 0x1BC4; // Vector
            public const nint m_szRagdollDamageWeaponName = 0x1BD0; // char[64]
            public const nint m_bRagdollDamageHeadshot = 0x1C10; // bool
            public const nint m_vRagdollServerOrigin = 0x1C14; // Vector
            public const nint m_bLastHeadBoneTransformIsValid = 0x2290; // bool
            public const nint m_lastLandTime = 0x2294; // GameTime_t
            public const nint m_bOnGroundLastTick = 0x2298; // bool
            public const nint m_qDeathEyeAngles = 0x22B4; // QAngle
            public const nint m_bSkipOneHeadConstraintUpdate = 0x22C0; // bool
            public const nint m_bLeftHanded = 0x22C1; // bool
            public const nint m_fSwitchedHandednessTime = 0x22C4; // GameTime_t
            public const nint m_flViewmodelOffsetX = 0x22C8; // float32
            public const nint m_flViewmodelOffsetY = 0x22CC; // float32
            public const nint m_flViewmodelOffsetZ = 0x22D0; // float32
            public const nint m_flViewmodelFOV = 0x22D4; // float32
            public const nint m_vecPlayerPatchEconIndices = 0x22D8; // uint32[5]
            public const nint m_GunGameImmunityColor = 0x2310; // Color
            public const nint m_vecBulletHitModels = 0x2360; // CUtlVector<C_BulletHitModel*>
            public const nint m_bIsWalking = 0x2378; // bool
            public const nint m_thirdPersonHeading = 0x2380; // QAngle
            public const nint m_flSlopeDropOffset = 0x2398; // float32
            public const nint m_flSlopeDropHeight = 0x23A8; // float32
            public const nint m_vHeadConstraintOffset = 0x23B8; // Vector
            public const nint m_entitySpottedState = 0x23D0; // EntitySpottedState_t
            public const nint m_bIsScoped = 0x23E8; // bool
            public const nint m_bResumeZoom = 0x23E9; // bool
            public const nint m_bIsDefusing = 0x23EA; // bool
            public const nint m_bIsGrabbingHostage = 0x23EB; // bool
            public const nint m_iBlockingUseActionInProgress = 0x23EC; // CSPlayerBlockingUseAction_t
            public const nint m_flEmitSoundTime = 0x23F0; // GameTime_t
            public const nint m_bInNoDefuseArea = 0x23F4; // bool
            public const nint m_nWhichBombZone = 0x23F8; // int32
            public const nint m_iShotsFired = 0x23FC; // int32
            public const nint m_flFlinchStack = 0x2400; // float32
            public const nint m_flVelocityModifier = 0x2404; // float32
            public const nint m_flHitHeading = 0x2408; // float32
            public const nint m_nHitBodyPart = 0x240C; // int32
            public const nint m_bWaitForNoAttack = 0x2410; // bool
            public const nint m_ignoreLadderJumpTime = 0x2414; // float32
            public const nint m_bKilledByHeadshot = 0x2419; // bool
            public const nint m_ArmorValue = 0x241C; // int32
            public const nint m_unCurrentEquipmentValue = 0x2420; // uint16
            public const nint m_unRoundStartEquipmentValue = 0x2422; // uint16
            public const nint m_unFreezetimeEndEquipmentValue = 0x2424; // uint16
            public const nint m_nLastKillerIndex = 0x2428; // CEntityIndex
            public const nint m_bOldIsScoped = 0x242C; // bool
            public const nint m_bHasDeathInfo = 0x242D; // bool
            public const nint m_flDeathInfoTime = 0x2430; // float32
            public const nint m_vecDeathInfoOrigin = 0x2434; // Vector
            public const nint m_grenadeParameterStashTime = 0x2440; // GameTime_t
            public const nint m_bGrenadeParametersStashed = 0x2444; // bool
            public const nint m_angStashedShootAngles = 0x2448; // QAngle
            public const nint m_vecStashedGrenadeThrowPosition = 0x2454; // Vector
            public const nint m_vecStashedVelocity = 0x2460; // Vector
            public const nint m_angShootAngleHistory = 0x246C; // QAngle[2]
            public const nint m_vecThrowPositionHistory = 0x2484; // Vector[2]
            public const nint m_vecVelocityHistory = 0x249C; // Vector[2]
            public const nint m_PredictedDamageTags = 0x24B8; // C_UtlVectorEmbeddedNetworkVar<PredictedDamageTag_t>
            public const nint m_nPrevHighestReceivedDamageTagTick = 0x2508; // GameTick_t
            public const nint m_nHighestAppliedDamageTagTick = 0x250C; // int32
        }
        // Parent: C_RagdollProp
        // Field count: 7
        //
        // Metadata:
        // NetworkVarNames: m_boneIndexAttached (uint32)
        // NetworkVarNames: m_ragdollAttachedObjectIndex (uint32)
        // NetworkVarNames: m_attachmentPointBoneSpace (Vector)
        // NetworkVarNames: m_attachmentPointRagdollSpace (Vector)
        public static class C_RagdollPropAttached {
            public const nint m_boneIndexAttached = 0x1000; // uint32
            public const nint m_ragdollAttachedObjectIndex = 0x1004; // uint32
            public const nint m_attachmentPointBoneSpace = 0x1008; // Vector
            public const nint m_attachmentPointRagdollSpace = 0x1014; // Vector
            public const nint m_vecOffset = 0x1020; // Vector
            public const nint m_parentTime = 0x102C; // float32
            public const nint m_bHasParent = 0x1030; // bool
        }
        // Parent: C_BaseGrenade
        // Field count: 16
        //
        // Metadata:
        // NetworkVarNames: m_vInitialPosition (Vector)
        // NetworkVarNames: m_vInitialVelocity (Vector)
        // NetworkVarNames: m_nBounces (int)
        // NetworkVarNames: m_nExplodeEffectIndex (HParticleSystemDefinitionStrong)
        // NetworkVarNames: m_nExplodeEffectTickBegin (int)
        // NetworkVarNames: m_vecExplodeEffectOrigin (Vector)
        public static class C_BaseCSGrenadeProjectile {
            public const nint m_vInitialPosition = 0x1170; // Vector
            public const nint m_vInitialVelocity = 0x117C; // Vector
            public const nint m_nBounces = 0x1188; // int32
            public const nint m_nExplodeEffectIndex = 0x1190; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
            public const nint m_nExplodeEffectTickBegin = 0x1198; // int32
            public const nint m_vecExplodeEffectOrigin = 0x119C; // Vector
            public const nint m_flSpawnTime = 0x11A8; // GameTime_t
            public const nint vecLastTrailLinePos = 0x11AC; // Vector
            public const nint flNextTrailLineTime = 0x11B8; // GameTime_t
            public const nint m_bExplodeEffectBegan = 0x11BC; // bool
            public const nint m_bCanCreateGrenadeTrail = 0x11BD; // bool
            public const nint m_nSnapshotTrajectoryEffectIndex = 0x11C0; // ParticleIndex_t
            public const nint m_hSnapshotTrajectoryParticleSnapshot = 0x11C8; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
            public const nint m_arrTrajectoryTrailPoints = 0x11D0; // CUtlVector<Vector>
            public const nint m_arrTrajectoryTrailPointCreationTimes = 0x11E8; // CUtlVector<float32>
            public const nint m_flTrajectoryTrailEffectCreationTime = 0x1200; // float32
        }
        // Parent: C_BaseToggle
        // Field count: 2
        //
        // Metadata:
        // MNetworkIncludeByName
        // NetworkVarNames: m_bDisabled (bool)
        // NetworkVarNames: m_bClientSidePredicted (bool)
        public static class C_BaseTrigger {
            public const nint m_bDisabled = 0xD28; // bool
            public const nint m_bClientSidePredicted = 0xD29; // bool
        }
        // Parent: C_CSWeaponBase
        // Field count: 2
        //
        // Metadata:
        // NetworkVarNames: m_SequenceCompleteTimer (CountdownTimer)
        // NetworkVarNames: m_bRedraw (bool)
        public static class C_WeaponBaseItem {
            public const nint m_SequenceCompleteTimer = 0x1B20; // CountdownTimer
            public const nint m_bRedraw = 0x1B38; // bool
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
        // Parent: C_BaseCSGrenade
        // Field count: 0
        public static class C_MolotovGrenade {
        }
        // Parent: C_BaseToggle
        // Field count: 3
        //
        // Metadata:
        // NetworkVarNames: m_glowEntity (CHandle<C_BaseModelEntity>)
        // NetworkVarNames: m_usable (bool)
        // NetworkVarNames: m_szDisplayText (string_t)
        public static class C_BaseButton {
            public const nint m_glowEntity = 0xD28; // CHandle<C_BaseModelEntity>
            public const nint m_usable = 0xD2C; // bool
            public const nint m_szDisplayText = 0xD30; // CUtlSymbolLarge
        }
        // Parent: CPlayer_ViewModelServices
        // Field count: 1
        //
        // Metadata:
        // NetworkVarNames: m_hViewModel (CHandle<CBaseViewModel>)
        public static class CCSPlayer_ViewModelServices {
            public const nint m_hViewModel = 0x40; // CHandle<C_BaseViewModel>[3]
        }
        // Parent: C_PointEntity
        // Field count: 0
        public static class CInfoParticleTarget {
        }
        // Parent: CPlayer_MovementServices
        // Field count: 12
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
        // Field count: 0
        public static class C_WeaponAug {
        }
        // Parent: CEnvSoundscapeProxy
        // Field count: 0
        public static class CEnvSoundscapeProxyAlias_snd_soundscape_proxy {
        }
        // Parent: C_BaseClientUIEntity
        // Field count: 28
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
            public const nint m_bForceRecreateNextUpdate = 0xD60; // bool
            public const nint m_bMoveViewToPlayerNextThink = 0xD61; // bool
            public const nint m_bCheckCSSClasses = 0xD62; // bool
            public const nint m_anchorDeltaTransform = 0xD70; // CTransform
            public const nint m_pOffScreenIndicator = 0xF08; // CPointOffScreenIndicatorUi*
            public const nint m_bIgnoreInput = 0xF30; // bool
            public const nint m_bLit = 0xF31; // bool
            public const nint m_bFollowPlayerAcrossTeleport = 0xF32; // bool
            public const nint m_flWidth = 0xF34; // float32
            public const nint m_flHeight = 0xF38; // float32
            public const nint m_flDPI = 0xF3C; // float32
            public const nint m_flInteractDistance = 0xF40; // float32
            public const nint m_flDepthOffset = 0xF44; // float32
            public const nint m_unOwnerContext = 0xF48; // uint32
            public const nint m_unHorizontalAlign = 0xF4C; // uint32
            public const nint m_unVerticalAlign = 0xF50; // uint32
            public const nint m_unOrientation = 0xF54; // uint32
            public const nint m_bAllowInteractionFromAllSceneWorlds = 0xF58; // bool
            public const nint m_vecCSSClasses = 0xF60; // C_NetworkUtlVectorBase<CUtlSymbolLarge>
            public const nint m_bOpaque = 0xF78; // bool
            public const nint m_bNoDepth = 0xF79; // bool
            public const nint m_bRenderBackface = 0xF7A; // bool
            public const nint m_bUseOffScreenIndicator = 0xF7B; // bool
            public const nint m_bExcludeFromSaveGames = 0xF7C; // bool
            public const nint m_bGrabbable = 0xF7D; // bool
            public const nint m_bOnlyRenderToTexture = 0xF7E; // bool
            public const nint m_bDisableMipGen = 0xF7F; // bool
            public const nint m_nExplicitImageLayout = 0xF80; // int32
        }
        // Parent: C_BaseEntity
        // Field count: 0
        public static class C_CSMinimapBoundary {
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
        // Parent: C_CSGO_TeamPreviewCharacterPosition
        // Field count: 0
        public static class C_CSGO_EndOfMatchCharacterPosition {
        }
        // Parent: C_SoundOpvarSetPointEntity
        // Field count: 0
        public static class C_SoundOpvarSetAABBEntity {
        }
        // Parent: None
        // Field count: 4
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
        // Parent: C_BasePropDoor
        // Field count: 0
        public static class C_PropDoorRotating {
        }
        // Parent: C_BaseEntity
        // Field count: 4
        //
        // Metadata:
        // MNetworkIncludeByName
        // NetworkVarNames: m_aPlayerControllers (CHandle<CBasePlayerController>)
        // NetworkVarNames: m_aPlayers (CHandle<C_BasePlayerPawn>)
        // NetworkVarNames: m_iScore (int32)
        // NetworkVarNames: m_szTeamname (char)
        public static class C_Team {
            public const nint m_aPlayerControllers = 0x568; // C_NetworkUtlVectorBase<CHandle<CBasePlayerController>>
            public const nint m_aPlayers = 0x580; // C_NetworkUtlVectorBase<CHandle<C_BasePlayerPawn>>
            public const nint m_iScore = 0x598; // int32
            public const nint m_szTeamname = 0x59C; // char[129]
        }
        // Parent: C_SoundAreaEntityBase
        // Field count: 2
        //
        // Metadata:
        // NetworkVarNames: m_vMin (Vector)
        // NetworkVarNames: m_vMax (Vector)
        public static class C_SoundAreaEntityOrientedBox {
            public const nint m_vMin = 0x590; // Vector
            public const nint m_vMax = 0x59C; // Vector
        }
        // Parent: C_BaseModelEntity
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
        public static class C_TextureBasedAnimatable {
            public const nint m_bLoop = 0xD28; // bool
            public const nint m_flFPS = 0xD2C; // float32
            public const nint m_hPositionKeys = 0xD30; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_hRotationKeys = 0xD38; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_vAnimationBoundsMin = 0xD40; // Vector
            public const nint m_vAnimationBoundsMax = 0xD4C; // Vector
            public const nint m_flStartTime = 0xD58; // float32
            public const nint m_flStartFrame = 0xD5C; // float32
        }
        // Parent: C_SoundOpvarSetPointBase
        // Field count: 0
        public static class C_SoundOpvarSetPointEntity {
        }
        // Parent: C_LightEntity
        // Field count: 0
        public static class C_LightOrthoEntity {
        }
        // Parent: CPlayer_WaterServices
        // Field count: 3
        public static class CCSPlayer_WaterServices {
            public const nint m_flWaterJumpTime = 0x40; // float32
            public const nint m_vecWaterJumpVel = 0x44; // Vector
            public const nint m_flSwimSoundTime = 0x50; // float32
        }
        // Parent: C_BaseEntity
        // Field count: 2
        public static class CSkyboxReference {
            public const nint m_worldGroupId = 0x568; // WorldGroupId_t
            public const nint m_hSkyCamera = 0x56C; // CHandle<C_SkyCamera>
        }
        // Parent: C_TonemapController2
        // Field count: 0
        public static class C_TonemapController2Alias_env_tonemap_controller2 {
        }
        // Parent: None
        // Field count: 30
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
        // Field count: 8
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
        // Field count: 0
        public static class C_PathParticleRopeAlias_path_particle_rope_clientside {
        }
        // Parent: CPlayerPawnComponent
        // Field count: 0
        public static class CPlayer_UseServices {
        }
        // Parent: C_PredictedViewModel
        // Field count: 4
        //
        // Metadata:
        // NetworkVarNames: m_bShouldIgnoreOffsetAndAccuracy (bool)
        public static class C_CSGOViewModel {
            public const nint m_bShouldIgnoreOffsetAndAccuracy = 0x1021; // bool
            public const nint m_nLastKnownAssociatedWeaponEntIndex = 0x1024; // CEntityIndex
            public const nint m_bNeedToQueueHighResComposite = 0x1028; // bool
            public const nint m_vLoweredWeaponOffset = 0x1078; // QAngle
        }
        // Parent: CEntityComponent
        // Field count: 1
        public static class CScriptComponent {
            public const nint m_scriptClassName = 0x30; // CUtlSymbolLarge
        }
        // Parent: C_BaseEntity
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
        public static class C_EnvLightProbeVolume {
            public const nint m_Entity_hLightProbeTexture = 0x1548; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Entity_hLightProbeDirectLightIndicesTexture = 0x1550; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Entity_hLightProbeDirectLightScalarsTexture = 0x1558; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Entity_hLightProbeDirectLightShadowsTexture = 0x1560; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Entity_vBoxMins = 0x1568; // Vector
            public const nint m_Entity_vBoxMaxs = 0x1574; // Vector
            public const nint m_Entity_bMoveable = 0x1580; // bool
            public const nint m_Entity_nHandshake = 0x1584; // int32
            public const nint m_Entity_nPriority = 0x1588; // int32
            public const nint m_Entity_bStartDisabled = 0x158C; // bool
            public const nint m_Entity_nLightProbeSizeX = 0x1590; // int32
            public const nint m_Entity_nLightProbeSizeY = 0x1594; // int32
            public const nint m_Entity_nLightProbeSizeZ = 0x1598; // int32
            public const nint m_Entity_nLightProbeAtlasX = 0x159C; // int32
            public const nint m_Entity_nLightProbeAtlasY = 0x15A0; // int32
            public const nint m_Entity_nLightProbeAtlasZ = 0x15A4; // int32
            public const nint m_Entity_bEnabled = 0x15B1; // bool
        }
        // Parent: CBaseAnimGraph
        // Field count: 2
        public static class C_ViewmodelAttachmentModel {
            public const nint m_bShouldFrontFaceCullLeftHanded = 0xF90; // bool
            public const nint m_bCreatedLeftHanded = 0xF91; // bool
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MPulseProvideFeatureTag
        // MPulseLibraryBindings
        public static class CCSPointScriptExtensions_player_controller {
        }
        // Parent: C_BaseCSGrenade
        // Field count: 0
        public static class C_Flashbang {
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
        // Parent: C_BaseEntity
        // Field count: 1
        //
        // Metadata:
        // NetworkVarNames: m_iCurrentMaxRagdollCount (int8)
        public static class CRagdollManager {
            public const nint m_iCurrentMaxRagdollCount = 0x568; // int8
        }
        // Parent: C_BaseEntity
        // Field count: 30
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
            public const nint m_bTimerPaused = 0x568; // bool
            public const nint m_flTimeRemaining = 0x56C; // float32
            public const nint m_flTimerEndTime = 0x570; // GameTime_t
            public const nint m_bIsDisabled = 0x574; // bool
            public const nint m_bShowInHUD = 0x575; // bool
            public const nint m_nTimerLength = 0x578; // int32
            public const nint m_nTimerInitialLength = 0x57C; // int32
            public const nint m_nTimerMaxLength = 0x580; // int32
            public const nint m_bAutoCountdown = 0x584; // bool
            public const nint m_nSetupTimeLength = 0x588; // int32
            public const nint m_nState = 0x58C; // int32
            public const nint m_bStartPaused = 0x590; // bool
            public const nint m_bInCaptureWatchState = 0x591; // bool
            public const nint m_flTotalTime = 0x594; // float32
            public const nint m_bStopWatchTimer = 0x598; // bool
            public const nint m_bFireFinished = 0x599; // bool
            public const nint m_bFire5MinRemain = 0x59A; // bool
            public const nint m_bFire4MinRemain = 0x59B; // bool
            public const nint m_bFire3MinRemain = 0x59C; // bool
            public const nint m_bFire2MinRemain = 0x59D; // bool
            public const nint m_bFire1MinRemain = 0x59E; // bool
            public const nint m_bFire30SecRemain = 0x59F; // bool
            public const nint m_bFire10SecRemain = 0x5A0; // bool
            public const nint m_bFire5SecRemain = 0x5A1; // bool
            public const nint m_bFire4SecRemain = 0x5A2; // bool
            public const nint m_bFire3SecRemain = 0x5A3; // bool
            public const nint m_bFire2SecRemain = 0x5A4; // bool
            public const nint m_bFire1SecRemain = 0x5A5; // bool
            public const nint m_nOldTimerLength = 0x5A8; // int32
            public const nint m_nOldTimerState = 0x5AC; // int32
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
        // Parent: C_BaseCSGrenade
        // Field count: 0
        public static class C_SmokeGrenade {
        }
        // Parent: C_CSWeaponBaseGun
        // Field count: 0
        public static class C_WeaponGalilAR {
        }
        // Parent: CBaseAnimGraph
        // Field count: 0
        public static class C_WorldModelGloves {
        }
        // Parent: C_ModelPointEntity
        // Field count: 0
        public static class C_EnvProjectedTexture {
        }
        // Parent: C_BaseEntity
        // Field count: 1
        //
        // Metadata:
        // NetworkVarNames: m_pathString (CUtlString)
        public static class CPathSimple {
            public const nint m_pathString = 0x5C0; // CUtlString
        }
        // Parent: CPlayer_CameraServices
        // Field count: 6
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
        // Field count: 4
        public static class CPointOffScreenIndicatorUi {
            public const nint m_bBeenEnabled = 0xF90; // bool
            public const nint m_bHide = 0xF91; // bool
            public const nint m_flSeenTargetTime = 0xF94; // float32
            public const nint m_pTargetPanel = 0xF98; // C_PointClientUIWorldPanel*
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
        // Parent: C_CSWeaponBase
        // Field count: 6
        //
        // Metadata:
        // NetworkVarNames: m_zoomLevel (int)
        // NetworkVarNames: m_iBurstShotsRemaining (int)
        // NetworkVarNames: m_bNeedsBoltAction (bool)
        public static class C_CSWeaponBaseGun {
            public const nint m_zoomLevel = 0x1B20; // int32
            public const nint m_iBurstShotsRemaining = 0x1B24; // int32
            public const nint m_iSilencerBodygroup = 0x1B28; // int32
            public const nint m_silencedModelIndex = 0x1B38; // int32
            public const nint m_inPrecache = 0x1B3C; // bool
            public const nint m_bNeedsBoltAction = 0x1B3D; // bool
        }
        // Parent: C_BaseEntity
        // Field count: 4
        //
        // Metadata:
        // NetworkVarNames: m_skyboxData (sky3dparams_t)
        // NetworkVarNames: m_skyboxSlotToken (CUtlStringToken)
        public static class C_SkyCamera {
            public const nint m_skyboxData = 0x568; // sky3dparams_t
            public const nint m_skyboxSlotToken = 0x5F8; // CUtlStringToken
            public const nint m_bUseAngles = 0x5FC; // bool
            public const nint m_pNext = 0x600; // C_SkyCamera*
        }
        // Parent: C_BaseModelEntity
        // Field count: 0
        public static class C_World {
        }
        // Parent: C_BaseModelEntity
        // Field count: 13
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
            public const nint m_flStartTime = 0xD30; // GameTime_t
            public const nint m_flFadeInStart = 0xD34; // float32
            public const nint m_flFadeInLength = 0xD38; // float32
            public const nint m_flFadeOutModelStart = 0xD3C; // float32
            public const nint m_flFadeOutModelLength = 0xD40; // float32
            public const nint m_flFadeOutStart = 0xD44; // float32
            public const nint m_flFadeOutLength = 0xD48; // float32
            public const nint m_flNextSparkTime = 0xD4C; // GameTime_t
            public const nint m_nDissolveType = 0xD50; // EntityDisolveType_t
            public const nint m_vDissolverOrigin = 0xD54; // Vector
            public const nint m_nMagnitude = 0xD60; // uint32
            public const nint m_bCoreExplode = 0xD64; // bool
            public const nint m_bLinkedToServerEnt = 0xD65; // bool
        }
        // Parent: CPlayer_UseServices
        // Field count: 0
        public static class CCSObserver_UseServices {
        }
        // Parent: None
        // Field count: 14
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
        // Field count: 65
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
            public const nint m_pPingServices = 0x1360; // CCSPlayer_PingServices*
            public const nint m_pViewModelServices = 0x1368; // CPlayer_ViewModelServices*
            public const nint m_fRenderingClipPlane = 0x1370; // float32[4]
            public const nint m_nLastClipPlaneSetupFrame = 0x1380; // int32
            public const nint m_vecLastClipCameraPos = 0x1384; // Vector
            public const nint m_vecLastClipCameraForward = 0x1390; // Vector
            public const nint m_bClipHitStaticWorld = 0x139C; // bool
            public const nint m_bCachedPlaneIsValid = 0x139D; // bool
            public const nint m_pClippingWeapon = 0x13A0; // C_CSWeaponBase*
            public const nint m_previousPlayerState = 0x13A8; // CSPlayerState
            public const nint m_iPlayerState = 0x13AC; // CSPlayerState
            public const nint m_bIsRescuing = 0x13B0; // bool
            public const nint m_fImmuneToGunGameDamageTime = 0x13B4; // GameTime_t
            public const nint m_fImmuneToGunGameDamageTimeLast = 0x13B8; // GameTime_t
            public const nint m_bGunGameImmunity = 0x13BC; // bool
            public const nint m_bHasMovedSinceSpawn = 0x13BD; // bool
            public const nint m_fMolotovUseTime = 0x13C0; // float32
            public const nint m_fMolotovDamageTime = 0x13C4; // float32
            public const nint m_iThrowGrenadeCounter = 0x13C8; // int32
            public const nint m_flLastSpawnTimeIndex = 0x13CC; // GameTime_t
            public const nint m_iProgressBarDuration = 0x13D0; // int32
            public const nint m_flProgressBarStartTime = 0x13D4; // float32
            public const nint m_vecIntroStartEyePosition = 0x13D8; // Vector
            public const nint m_vecIntroStartPlayerForward = 0x13E4; // Vector
            public const nint m_flClientDeathTime = 0x13F0; // GameTime_t
            public const nint m_bScreenTearFrameCaptured = 0x13F4; // bool
            public const nint m_flFlashBangTime = 0x13F8; // float32
            public const nint m_flFlashScreenshotAlpha = 0x13FC; // float32
            public const nint m_flFlashOverlayAlpha = 0x1400; // float32
            public const nint m_bFlashBuildUp = 0x1404; // bool
            public const nint m_bFlashDspHasBeenCleared = 0x1405; // bool
            public const nint m_bFlashScreenshotHasBeenGrabbed = 0x1406; // bool
            public const nint m_flFlashMaxAlpha = 0x1408; // float32
            public const nint m_flFlashDuration = 0x140C; // float32
            public const nint m_iHealthBarRenderMaskIndex = 0x1410; // int32
            public const nint m_flHealthFadeValue = 0x1414; // float32
            public const nint m_flHealthFadeAlpha = 0x1418; // float32
            public const nint m_flDeathCCWeight = 0x1428; // float32
            public const nint m_flPrevRoundEndTime = 0x142C; // float32
            public const nint m_flPrevMatchEndTime = 0x1430; // float32
            public const nint m_angEyeAngles = 0x1438; // QAngle
            public const nint m_fNextThinkPushAway = 0x1450; // float32
            public const nint m_bShouldAutobuyDMWeapons = 0x1454; // bool
            public const nint m_bShouldAutobuyNow = 0x1455; // bool
            public const nint m_iIDEntIndex = 0x1458; // CEntityIndex
            public const nint m_delayTargetIDTimer = 0x1460; // CountdownTimer
            public const nint m_iTargetItemEntIdx = 0x1478; // CEntityIndex
            public const nint m_iOldIDEntIndex = 0x147C; // CEntityIndex
            public const nint m_holdTargetIDTimer = 0x1480; // CountdownTimer
            public const nint m_flCurrentMusicStartTime = 0x149C; // float32
            public const nint m_flMusicRoundStartTime = 0x14A0; // float32
            public const nint m_bDeferStartMusicOnWarmup = 0x14A4; // bool
            public const nint m_cycleLatch = 0x14A8; // int32
            public const nint m_serverIntendedCycle = 0x14AC; // float32
            public const nint m_flLastSmokeOverlayAlpha = 0x14B0; // float32
            public const nint m_flLastSmokeAge = 0x14B4; // float32
            public const nint m_vLastSmokeOverlayColor = 0x14B8; // Vector
            public const nint m_nPlayerSmokedFx = 0x14C4; // ParticleIndex_t
            public const nint m_nPlayerInfernoBodyFx = 0x14C8; // ParticleIndex_t
            public const nint m_nPlayerInfernoFootFx = 0x14CC; // ParticleIndex_t
            public const nint m_flNextMagDropTime = 0x14D0; // float32
            public const nint m_nLastMagDropAttachmentIndex = 0x14D4; // int32
            public const nint m_vecLastAliveLocalVelocity = 0x14D8; // Vector
            public const nint m_bGuardianShouldSprayCustomXMark = 0x1500; // bool
            public const nint m_hOriginalController = 0x1508; // CHandle<CCSPlayerController>
        }
        // Parent: C_WeaponBaseItem
        // Field count: 0
        public static class C_Item_Healthshot {
        }
        // Parent: None
        // Field count: 29
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
            public const nint m_hEntOwner = 0x90; // CHandle<C_BaseEntity>
        }
        // Parent: C_BaseTrigger
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
        public static class C_PostProcessingVolume {
            public const nint m_hPostSettings = 0xD40; // CStrongHandle<InfoForResourceTypeCPostProcessingResource>
            public const nint m_flFadeDuration = 0xD48; // float32
            public const nint m_flMinLogExposure = 0xD4C; // float32
            public const nint m_flMaxLogExposure = 0xD50; // float32
            public const nint m_flMinExposure = 0xD54; // float32
            public const nint m_flMaxExposure = 0xD58; // float32
            public const nint m_flExposureCompensation = 0xD5C; // float32
            public const nint m_flExposureFadeSpeedUp = 0xD60; // float32
            public const nint m_flExposureFadeSpeedDown = 0xD64; // float32
            public const nint m_flTonemapEVSmoothingRange = 0xD68; // float32
            public const nint m_bMaster = 0xD6C; // bool
            public const nint m_bExposureControl = 0xD6D; // bool
            public const nint m_flRate = 0xD70; // float32
            public const nint m_flTonemapPercentTarget = 0xD74; // float32
            public const nint m_flTonemapPercentBrightPixels = 0xD78; // float32
            public const nint m_flTonemapMinAvgLum = 0xD7C; // float32
        }
        // Parent: CPlayerPawnComponent
        // Field count: 1
        //
        // Metadata:
        // NetworkVarNames: m_hPlayerPing (CHandle<CBaseEntity>)
        public static class CCSPlayer_PingServices {
            public const nint m_hPlayerPing = 0x40; // CHandle<C_BaseEntity>
        }
        // Parent: CPlayerPawnComponent
        // Field count: 0
        public static class CPlayer_FlashlightServices {
        }
        // Parent: C_BaseModelEntity
        // Field count: 0
        public static class CServerOnlyModelEntity {
        }
        // Parent: CAttributeManager
        // Field count: 3
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
        // Field count: 0
        //
        // Metadata:
        // MNetworkOverride
        // MNetworkOverride
        public static class C_FuncRotating {
        }
        // Parent: C_BaseEntity
        // Field count: 4
        //
        // Metadata:
        // NetworkVarNames: m_flScale (float32)
        // NetworkVarNames: m_flStartScale (float32)
        // NetworkVarNames: m_flScaleTime (float)
        // NetworkVarNames: m_nFlags (uint32)
        public static class C_BaseFire {
            public const nint m_flScale = 0x568; // float32
            public const nint m_flStartScale = 0x56C; // float32
            public const nint m_flScaleTime = 0x570; // float32
            public const nint m_nFlags = 0x574; // uint32
        }
        // Parent: C_BaseEntity
        // Field count: 16
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
            public const nint m_nFinalPredictedTick = 0x570; // int32
            public const nint m_CommandContext = 0x578; // C_CommandContext
            public const nint m_nInButtonsWhichAreToggles = 0x620; // uint64
            public const nint m_nTickBase = 0x628; // uint32
            public const nint m_hPawn = 0x62C; // CHandle<C_BasePlayerPawn>
            public const nint m_bKnownTeamMismatch = 0x630; // bool
            public const nint m_hPredictedPawn = 0x634; // CHandle<C_BasePlayerPawn>
            public const nint m_nSplitScreenSlot = 0x638; // CSplitScreenSlot
            public const nint m_hSplitOwner = 0x63C; // CHandle<CBasePlayerController>
            public const nint m_hSplitScreenPlayers = 0x640; // CUtlVector<CHandle<CBasePlayerController>>
            public const nint m_bIsHLTV = 0x658; // bool
            public const nint m_iConnected = 0x65C; // PlayerConnectedState
            public const nint m_iszPlayerName = 0x660; // char[128]
            public const nint m_steamID = 0x6E8; // uint64
            public const nint m_bIsLocalPlayerController = 0x6F0; // bool
            public const nint m_iDesiredFOV = 0x6F4; // uint32
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MPulseProvideFeatureTag
        // MPulseLibraryBindings
        public static class CPointTemplateAPI {
        }
        // Parent: C_BaseCSGrenadeProjectile
        // Field count: 3
        //
        // Metadata:
        // NetworkVarNames: m_nDecoyShotTick (int)
        public static class C_DecoyProjectile {
            public const nint m_nDecoyShotTick = 0x1208; // int32
            public const nint m_nClientLastKnownDecoyShotTick = 0x120C; // int32
            public const nint m_flTimeParticleEffectSpawn = 0x1230; // GameTime_t
        }
        // Parent: CBaseAnimGraph
        // Field count: 0
        public static class C_WaterBullet {
        }
        // Parent: C_CSPlayerPawn
        // Field count: 3
        public static class C_CSGO_PreviewPlayer {
            public const nint m_animgraph = 0x3A40; // CUtlString
            public const nint m_animgraphCharacterModeString = 0x3A48; // CGlobalSymbol
            public const nint m_flInitialModelScale = 0x3A50; // float32
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
        // Field count: 0
        public static class CCSPointScriptEntity {
        }
        // Parent: C_CSWeaponBase
        // Field count: 11
        //
        // Metadata:
        // NetworkVarNames: m_bStartedArming (bool)
        // NetworkVarNames: m_fArmedTime (GameTime_t)
        // NetworkVarNames: m_bBombPlacedAnimation (bool)
        // NetworkVarNames: m_bIsPlantingViaUse (bool)
        // NetworkVarNames: m_entitySpottedState (EntitySpottedState_t)
        public static class C_C4 {
            public const nint m_szScreenText = 0x1B20; // char[32]
            public const nint m_activeLightParticleIndex = 0x1B40; // ParticleIndex_t
            public const nint m_eActiveLightEffect = 0x1B44; // C4LightEffect_t
            public const nint m_bStartedArming = 0x1B48; // bool
            public const nint m_fArmedTime = 0x1B4C; // GameTime_t
            public const nint m_bBombPlacedAnimation = 0x1B50; // bool
            public const nint m_bIsPlantingViaUse = 0x1B51; // bool
            public const nint m_entitySpottedState = 0x1B58; // EntitySpottedState_t
            public const nint m_nSpotRules = 0x1B70; // int32
            public const nint m_bPlayedArmingBeeps = 0x1B74; // bool[7]
            public const nint m_bBombPlanted = 0x1B7B; // bool
        }
        // Parent: C_BaseModelEntity
        // Field count: 13
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
            public const nint m_bInitiallyPopulateInterpHistory = 0xDA0; // bool
            public const nint m_bSuppressAnimEventSounds = 0xDA2; // bool
            public const nint m_bAnimGraphUpdateEnabled = 0xDB0; // bool
            public const nint m_flMaxSlopeDistance = 0xDB4; // float32
            public const nint m_vLastSlopeCheckPos = 0xDB8; // Vector
            public const nint m_bAnimationUpdateScheduled = 0xDC4; // bool
            public const nint m_vecForce = 0xDC8; // Vector
            public const nint m_nForceBone = 0xDD4; // int32
            public const nint m_pClientsideRagdoll = 0xDD8; // CBaseAnimGraph*
            public const nint m_bBuiltRagdoll = 0xDE0; // bool
            public const nint m_RagdollPose = 0xDF8; // PhysicsRagdollPose_t
            public const nint m_bRagdollClientSide = 0xE40; // bool
            public const nint m_bHasAnimatedMaterialAttributes = 0xE50; // bool
        }
        // Parent: C_BaseEntity
        // Field count: 0
        public static class C_PointEntity {
        }
        // Parent: C_GameRules
        // Field count: 0
        public static class C_MultiplayRules {
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MPulseProvideFeatureTag
        // MPulseLibraryBindings
        public static class CBasePlayerControllerAPI {
        }
        // Parent: C_BaseEntity
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
        public static class C_PathParticleRope {
            public const nint m_bStartActive = 0x570; // bool
            public const nint m_flMaxSimulationTime = 0x574; // float32
            public const nint m_iszEffectName = 0x578; // CUtlSymbolLarge
            public const nint m_PathNodes_Name = 0x580; // CUtlVector<CUtlSymbolLarge>
            public const nint m_flParticleSpacing = 0x598; // float32
            public const nint m_flSlack = 0x59C; // float32
            public const nint m_flRadius = 0x5A0; // float32
            public const nint m_ColorTint = 0x5A4; // Color
            public const nint m_nEffectState = 0x5A8; // int32
            public const nint m_iEffectIndex = 0x5B0; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
            public const nint m_PathNodes_Position = 0x5B8; // C_NetworkUtlVectorBase<Vector>
            public const nint m_PathNodes_TangentIn = 0x5D0; // C_NetworkUtlVectorBase<Vector>
            public const nint m_PathNodes_TangentOut = 0x5E8; // C_NetworkUtlVectorBase<Vector>
            public const nint m_PathNodes_Color = 0x600; // C_NetworkUtlVectorBase<Vector>
            public const nint m_PathNodes_PinEnabled = 0x618; // C_NetworkUtlVectorBase<bool>
            public const nint m_PathNodes_RadiusScale = 0x630; // C_NetworkUtlVectorBase<float32>
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MPulseProvideFeatureTag
        // MPulseLibraryBindings
        public static class CCSPointScriptExtensions_CCSWeaponBaseVData {
        }
        // Parent: C_SoundEventEntity
        // Field count: 2
        //
        // Metadata:
        // NetworkVarNames: m_vMins (Vector)
        // NetworkVarNames: m_vMaxs (Vector)
        public static class C_SoundEventAABBEntity {
            public const nint m_vMins = 0x628; // Vector
            public const nint m_vMaxs = 0x634; // Vector
        }
        // Parent: C_CSWeaponBaseGun
        // Field count: 0
        public static class C_WeaponP90 {
        }
        // Parent: CEnvSoundscape
        // Field count: 0
        public static class CEnvSoundscapeAlias_snd_soundscape {
        }
        // Parent: C_EconEntity
        // Field count: 7
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
            public const nint m_nNextPrimaryAttackTick = 0x1668; // GameTick_t
            public const nint m_flNextPrimaryAttackTickRatio = 0x166C; // float32
            public const nint m_nNextSecondaryAttackTick = 0x1670; // GameTick_t
            public const nint m_flNextSecondaryAttackTickRatio = 0x1674; // float32
            public const nint m_iClip1 = 0x1678; // int32
            public const nint m_iClip2 = 0x167C; // int32
            public const nint m_pReserveAmmo = 0x1680; // int32[2]
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
        // Parent: CBaseAnimGraph
        // Field count: 23
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
            public const nint m_pos = 0xF88; // Vector
            public const nint m_vel = 0xF94; // Vector
            public const nint m_angles = 0xFA0; // QAngle
            public const nint m_localLifeState = 0xFAC; // int32
            public const nint m_deathDepth = 0xFB0; // float32
            public const nint m_deathAngle = 0xFB4; // float32
            public const nint m_buoyancy = 0xFB8; // float32
            public const nint m_wiggleTimer = 0xFC0; // CountdownTimer
            public const nint m_wigglePhase = 0xFD8; // float32
            public const nint m_wiggleRate = 0xFDC; // float32
            public const nint m_actualPos = 0xFE0; // Vector
            public const nint m_actualAngles = 0xFEC; // QAngle
            public const nint m_poolOrigin = 0xFF8; // Vector
            public const nint m_waterLevel = 0x1004; // float32
            public const nint m_gotUpdate = 0x1008; // bool
            public const nint m_x = 0x100C; // float32
            public const nint m_y = 0x1010; // float32
            public const nint m_z = 0x1014; // float32
            public const nint m_angle = 0x1018; // float32
            public const nint m_errorHistory = 0x101C; // float32[20]
            public const nint m_errorHistoryIndex = 0x106C; // int32
            public const nint m_errorHistoryCount = 0x1070; // int32
            public const nint m_averageError = 0x1074; // float32
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
        // Parent: C_CSWeaponBaseGun
        // Field count: 0
        public static class C_WeaponAWP {
        }
        // Parent: C_BaseCombatCharacter
        // Field count: 28
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
            public const nint m_pWeaponServices = 0x11A8; // CPlayer_WeaponServices*
            public const nint m_pItemServices = 0x11B0; // CPlayer_ItemServices*
            public const nint m_pAutoaimServices = 0x11B8; // CPlayer_AutoaimServices*
            public const nint m_pObserverServices = 0x11C0; // CPlayer_ObserverServices*
            public const nint m_pWaterServices = 0x11C8; // CPlayer_WaterServices*
            public const nint m_pUseServices = 0x11D0; // CPlayer_UseServices*
            public const nint m_pFlashlightServices = 0x11D8; // CPlayer_FlashlightServices*
            public const nint m_pCameraServices = 0x11E0; // CPlayer_CameraServices*
            public const nint m_pMovementServices = 0x11E8; // CPlayer_MovementServices*
            public const nint m_ServerViewAngleChanges = 0x11F8; // C_UtlVectorEmbeddedNetworkVar<ViewAngleServerChange_t>
            public const nint m_nHighestConsumedServerViewAngleChangeIndex = 0x1248; // uint32
            public const nint v_angle = 0x124C; // QAngle
            public const nint v_anglePrevious = 0x1258; // QAngle
            public const nint m_iHideHUD = 0x1264; // uint32
            public const nint m_skybox3d = 0x1268; // sky3dparams_t
            public const nint m_flDeathTime = 0x12F8; // GameTime_t
            public const nint m_vecPredictionError = 0x12FC; // Vector
            public const nint m_flPredictionErrorTime = 0x1308; // GameTime_t
            public const nint m_vecLastCameraSetupLocalOrigin = 0x130C; // Vector
            public const nint m_flLastCameraSetupTime = 0x1318; // GameTime_t
            public const nint m_flFOVSensitivityAdjust = 0x131C; // float32
            public const nint m_flMouseSensitivity = 0x1320; // float32
            public const nint m_vOldOrigin = 0x1324; // Vector
            public const nint m_flOldSimulationTime = 0x1330; // float32
            public const nint m_nLastExecutedCommandNumber = 0x1334; // int32
            public const nint m_nLastExecutedCommandTick = 0x1338; // int32
            public const nint m_hController = 0x133C; // CHandle<CBasePlayerController>
            public const nint m_bIsSwappingToPredictableController = 0x1340; // bool
        }
        // Parent: None
        // Field count: 6
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
        // Field count: 2
        //
        // Metadata:
        // NetworkVarNames: m_flFluidDensity (float)
        public static class C_TriggerBuoyancy {
            public const nint m_BuoyancyHelper = 0xD30; // CBuoyancyHelper
            public const nint m_flFluidDensity = 0xDB0; // float32
        }
        // Parent: C_BaseModelEntity
        // Field count: 41
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
            public const nint m_LinksTouchingSomething = 0xD30; // CBitVec<10>
            public const nint m_nLinksTouchingSomething = 0xD34; // int32
            public const nint m_bApplyWind = 0xD38; // bool
            public const nint m_fPrevLockedPoints = 0xD3C; // int32
            public const nint m_iForcePointMoveCounter = 0xD40; // int32
            public const nint m_bPrevEndPointPos = 0xD44; // bool[2]
            public const nint m_vPrevEndPointPos = 0xD48; // Vector[2]
            public const nint m_flCurScroll = 0xD60; // float32
            public const nint m_flScrollSpeed = 0xD64; // float32
            public const nint m_RopeFlags = 0xD68; // uint16
            public const nint m_iRopeMaterialModelIndex = 0xD70; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_LightValues = 0xFE8; // Vector[10]
            public const nint m_nSegments = 0x1060; // uint8
            public const nint m_hStartPoint = 0x1064; // CHandle<C_BaseEntity>
            public const nint m_hEndPoint = 0x1068; // CHandle<C_BaseEntity>
            public const nint m_iStartAttachment = 0x106C; // AttachmentHandle_t
            public const nint m_iEndAttachment = 0x106D; // AttachmentHandle_t
            public const nint m_Subdiv = 0x106E; // uint8
            public const nint m_RopeLength = 0x1070; // int16
            public const nint m_Slack = 0x1072; // int16
            public const nint m_TextureScale = 0x1074; // float32
            public const nint m_fLockedPoints = 0x1078; // uint8
            public const nint m_nChangeCount = 0x1079; // uint8
            public const nint m_Width = 0x107C; // float32
            public const nint m_PhysicsDelegate = 0x1080; // C_RopeKeyframe::CPhysicsDelegate
            public const nint m_hMaterial = 0x1090; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_TextureHeight = 0x1098; // int32
            public const nint m_vecImpulse = 0x109C; // Vector
            public const nint m_vecPreviousImpulse = 0x10A8; // Vector
            public const nint m_flCurrentGustTimer = 0x10B4; // float32
            public const nint m_flCurrentGustLifetime = 0x10B8; // float32
            public const nint m_flTimeToNextGust = 0x10BC; // float32
            public const nint m_vWindDir = 0x10C0; // Vector
            public const nint m_vColorMod = 0x10CC; // Vector
            public const nint m_vCachedEndPointAttachmentPos = 0x10D8; // Vector[2]
            public const nint m_vCachedEndPointAttachmentAngle = 0x10F0; // QAngle[2]
            public const nint m_bConstrainBetweenEndpoints = 0x1108; // bool
            public const nint m_bEndPointAttachmentPositionsDirty = 0x0; // bitfield:1
            public const nint m_bEndPointAttachmentAnglesDirty = 0x0; // bitfield:1
            public const nint m_bNewDataThisFrame = 0x0; // bitfield:1
            public const nint m_bPhysicsInitted = 0x0; // bitfield:1
        }
        // Parent: C_BaseEntity
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
        public static class C_GradientFog {
            public const nint m_hGradientFogTexture = 0x568; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_flFogStartDistance = 0x570; // float32
            public const nint m_flFogEndDistance = 0x574; // float32
            public const nint m_bHeightFogEnabled = 0x578; // bool
            public const nint m_flFogStartHeight = 0x57C; // float32
            public const nint m_flFogEndHeight = 0x580; // float32
            public const nint m_flFarZ = 0x584; // float32
            public const nint m_flFogMaxOpacity = 0x588; // float32
            public const nint m_flFogFalloffExponent = 0x58C; // float32
            public const nint m_flFogVerticalExponent = 0x590; // float32
            public const nint m_fogColor = 0x594; // Color
            public const nint m_flFogStrength = 0x598; // float32
            public const nint m_flFadeTime = 0x59C; // float32
            public const nint m_bStartDisabled = 0x5A0; // bool
            public const nint m_bIsEnabled = 0x5A1; // bool
            public const nint m_bGradientFogNeedsTextures = 0x5A2; // bool
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
        // Parent: C_CSGO_MapPreviewCameraPath
        // Field count: 7
        public static class C_CSGO_TeamPreviewCamera {
            public const nint m_nVariant = 0x5D8; // int32
            public const nint m_bDofEnabled = 0x5DC; // bool
            public const nint m_flDofNearBlurry = 0x5E0; // float32
            public const nint m_flDofNearCrisp = 0x5E4; // float32
            public const nint m_flDofFarCrisp = 0x5E8; // float32
            public const nint m_flDofFarBlurry = 0x5EC; // float32
            public const nint m_flDofTiltToGround = 0x5F0; // float32
        }
        // Parent: CCSPlayerBase_CameraServices
        // Field count: 2
        public static class CCSPlayer_CameraServices {
            public const nint m_flDeathCamTilt = 0x228; // float32
            public const nint m_vClientScopeInaccuracy = 0x230; // Vector
        }
        // Parent: C_CSGO_TeamSelectCharacterPosition
        // Field count: 0
        public static class C_CSGO_TeamSelectCounterTerroristPosition {
        }
        // Parent: C_EconEntity
        // Field count: 2
        public static class C_EconWearable {
            public const nint m_nForceSkin = 0x1668; // int32
            public const nint m_bAlwaysAllow = 0x166C; // bool
        }
        // Parent: C_CSGO_TeamIntroCharacterPosition
        // Field count: 0
        public static class CCSGO_WingmanIntroCharacterPosition {
        }
        // Parent: CSPerRoundStats_t
        // Field count: 5
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
        // Field count: 0
        public static class C_BaseToggle {
        }
        // Parent: C_BaseEntity
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
        public static class C_EnvVolumetricFogVolume {
            public const nint m_bActive = 0x568; // bool
            public const nint m_vBoxMins = 0x56C; // Vector
            public const nint m_vBoxMaxs = 0x578; // Vector
            public const nint m_bStartDisabled = 0x584; // bool
            public const nint m_flStrength = 0x588; // float32
            public const nint m_nFalloffShape = 0x58C; // int32
            public const nint m_flFalloffExponent = 0x590; // float32
            public const nint m_flHeightFogDepth = 0x594; // float32
            public const nint m_fHeightFogEdgeWidth = 0x598; // float32
            public const nint m_fIndirectLightStrength = 0x59C; // float32
            public const nint m_fSunLightStrength = 0x5A0; // float32
            public const nint m_fNoiseStrength = 0x5A4; // float32
            public const nint m_bOverrideIndirectLightStrength = 0x5A8; // bool
            public const nint m_bOverrideSunLightStrength = 0x5A9; // bool
            public const nint m_bOverrideNoiseStrength = 0x5AA; // bool
            public const nint m_bAllowLPVIndirect = 0x5AB; // bool
        }
        // Parent: C_BaseModelEntity
        // Field count: 0
        public static class CWaterSplasher {
        }
        // Parent: C_BaseModelEntity
        // Field count: 0
        public static class C_ModelPointEntity {
        }
        // Parent: CPlayer_ViewModelServices
        // Field count: 0
        public static class CCSObserver_ViewModelServices {
        }
        // Parent: C_BaseFire
        // Field count: 13
        //
        // Metadata:
        // MNetworkOverride
        // MNetworkOverride
        // NetworkVarNames: m_nFlameModelIndex (int32)
        // NetworkVarNames: m_nFlameFromAboveModelIndex (int32)
        public static class C_FireSmoke {
            public const nint m_nFlameModelIndex = 0x578; // int32
            public const nint m_nFlameFromAboveModelIndex = 0x57C; // int32
            public const nint m_flScaleRegister = 0x580; // float32
            public const nint m_flScaleStart = 0x584; // float32
            public const nint m_flScaleEnd = 0x588; // float32
            public const nint m_flScaleTimeStart = 0x58C; // GameTime_t
            public const nint m_flScaleTimeEnd = 0x590; // GameTime_t
            public const nint m_flChildFlameSpread = 0x594; // float32
            public const nint m_flClipPerc = 0x5A8; // float32
            public const nint m_bClipTested = 0x5AC; // bool
            public const nint m_bFadingOut = 0x5AD; // bool
            public const nint m_tParticleSpawn = 0x5B0; // TimedEvent
            public const nint m_pFireOverlay = 0x5B8; // CFireOverlay*
        }
        // Parent: C_CSWeaponBaseGun
        // Field count: 0
        public static class C_WeaponRevolver {
        }
        // Parent: C_Sprite
        // Field count: 0
        public static class C_FireFromAboveSprite {
        }
        // Parent: C_BaseEntity
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
        public static class C_EnvCombinedLightProbeVolume {
            public const nint m_Entity_Color = 0x15C8; // Color
            public const nint m_Entity_flBrightness = 0x15CC; // float32
            public const nint m_Entity_hCubemapTexture = 0x15D0; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Entity_bCustomCubemapTexture = 0x15D8; // bool
            public const nint m_Entity_hLightProbeTexture = 0x15E0; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Entity_hLightProbeDirectLightIndicesTexture = 0x15E8; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Entity_hLightProbeDirectLightScalarsTexture = 0x15F0; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Entity_hLightProbeDirectLightShadowsTexture = 0x15F8; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Entity_vBoxMins = 0x1600; // Vector
            public const nint m_Entity_vBoxMaxs = 0x160C; // Vector
            public const nint m_Entity_bMoveable = 0x1618; // bool
            public const nint m_Entity_nHandshake = 0x161C; // int32
            public const nint m_Entity_nEnvCubeMapArrayIndex = 0x1620; // int32
            public const nint m_Entity_nPriority = 0x1624; // int32
            public const nint m_Entity_bStartDisabled = 0x1628; // bool
            public const nint m_Entity_flEdgeFadeDist = 0x162C; // float32
            public const nint m_Entity_vEdgeFadeDists = 0x1630; // Vector
            public const nint m_Entity_nLightProbeSizeX = 0x163C; // int32
            public const nint m_Entity_nLightProbeSizeY = 0x1640; // int32
            public const nint m_Entity_nLightProbeSizeZ = 0x1644; // int32
            public const nint m_Entity_nLightProbeAtlasX = 0x1648; // int32
            public const nint m_Entity_nLightProbeAtlasY = 0x164C; // int32
            public const nint m_Entity_nLightProbeAtlasZ = 0x1650; // int32
            public const nint m_Entity_bEnabled = 0x1669; // bool
        }
        // Parent: C_SoundOpvarSetPointBase
        // Field count: 0
        public static class C_SoundOpvarSetOBBWindEntity {
        }
        // Parent: None
        // Field count: 4
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
        // Field count: 0
        public static class C_WeaponMP5SD {
        }
        // Parent: C_DynamicProp
        // Field count: 0
        public static class C_DynamicPropAlias_dynamic_prop {
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
            public const nint m_OnTrigger = 0x568; // CEntityIOOutput
            public const nint m_OnSpawn = 0x590; // CEntityIOOutput
            public const nint m_bDisabled = 0x5B8; // bool
            public const nint m_bWaitForRefire = 0x5B9; // bool
            public const nint m_bTriggerOnce = 0x5BA; // bool
            public const nint m_bFastRetrigger = 0x5BB; // bool
            public const nint m_bPassthoughCaller = 0x5BC; // bool
        }
        // Parent: C_PointCamera
        // Field count: 1
        public static class C_PointCameraVFOV {
            public const nint m_flVerticalFOV = 0x5C8; // float32
        }
        // Parent: CPlayer_ItemServices
        // Field count: 3
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
        public static class C_BarnLight {
            public const nint m_bEnabled = 0xD28; // bool
            public const nint m_nColorMode = 0xD2C; // int32
            public const nint m_Color = 0xD30; // Color
            public const nint m_flColorTemperature = 0xD34; // float32
            public const nint m_flBrightness = 0xD38; // float32
            public const nint m_flBrightnessScale = 0xD3C; // float32
            public const nint m_nDirectLight = 0xD40; // int32
            public const nint m_nBakedShadowIndex = 0xD44; // int32
            public const nint m_nLuminaireShape = 0xD48; // int32
            public const nint m_flLuminaireSize = 0xD4C; // float32
            public const nint m_flLuminaireAnisotropy = 0xD50; // float32
            public const nint m_LightStyleString = 0xD58; // CUtlString
            public const nint m_flLightStyleStartTime = 0xD60; // GameTime_t
            public const nint m_QueuedLightStyleStrings = 0xD68; // C_NetworkUtlVectorBase<CUtlString>
            public const nint m_LightStyleEvents = 0xD80; // C_NetworkUtlVectorBase<CUtlString>
            public const nint m_LightStyleTargets = 0xD98; // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
            public const nint m_StyleEvent = 0xDB0; // CEntityIOOutput[4]
            public const nint m_hLightCookie = 0xE50; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_flShape = 0xE58; // float32
            public const nint m_flSoftX = 0xE5C; // float32
            public const nint m_flSoftY = 0xE60; // float32
            public const nint m_flSkirt = 0xE64; // float32
            public const nint m_flSkirtNear = 0xE68; // float32
            public const nint m_vSizeParams = 0xE6C; // Vector
            public const nint m_flRange = 0xE78; // float32
            public const nint m_vShear = 0xE7C; // Vector
            public const nint m_nBakeSpecularToCubemaps = 0xE88; // int32
            public const nint m_vBakeSpecularToCubemapsSize = 0xE8C; // Vector
            public const nint m_nCastShadows = 0xE98; // int32
            public const nint m_nShadowMapSize = 0xE9C; // int32
            public const nint m_nShadowPriority = 0xEA0; // int32
            public const nint m_bContactShadow = 0xEA4; // bool
            public const nint m_nBounceLight = 0xEA8; // int32
            public const nint m_flBounceScale = 0xEAC; // float32
            public const nint m_flMinRoughness = 0xEB0; // float32
            public const nint m_vAlternateColor = 0xEB4; // Vector
            public const nint m_fAlternateColorBrightness = 0xEC0; // float32
            public const nint m_nFog = 0xEC4; // int32
            public const nint m_flFogStrength = 0xEC8; // float32
            public const nint m_nFogShadows = 0xECC; // int32
            public const nint m_flFogScale = 0xED0; // float32
            public const nint m_bFogMixedShadows = 0xED4; // bool
            public const nint m_flFadeSizeStart = 0xED8; // float32
            public const nint m_flFadeSizeEnd = 0xEDC; // float32
            public const nint m_flShadowFadeSizeStart = 0xEE0; // float32
            public const nint m_flShadowFadeSizeEnd = 0xEE4; // float32
            public const nint m_bPrecomputedFieldsValid = 0xEE8; // bool
            public const nint m_vPrecomputedBoundsMins = 0xEEC; // Vector
            public const nint m_vPrecomputedBoundsMaxs = 0xEF8; // Vector
            public const nint m_vPrecomputedOBBOrigin = 0xF04; // Vector
            public const nint m_vPrecomputedOBBAngles = 0xF10; // QAngle
            public const nint m_vPrecomputedOBBExtent = 0xF1C; // Vector
            public const nint m_nPrecomputedSubFrusta = 0xF28; // int32
            public const nint m_vPrecomputedOBBOrigin0 = 0xF2C; // Vector
            public const nint m_vPrecomputedOBBAngles0 = 0xF38; // QAngle
            public const nint m_vPrecomputedOBBExtent0 = 0xF44; // Vector
            public const nint m_vPrecomputedOBBOrigin1 = 0xF50; // Vector
            public const nint m_vPrecomputedOBBAngles1 = 0xF5C; // QAngle
            public const nint m_vPrecomputedOBBExtent1 = 0xF68; // Vector
            public const nint m_vPrecomputedOBBOrigin2 = 0xF74; // Vector
            public const nint m_vPrecomputedOBBAngles2 = 0xF80; // QAngle
            public const nint m_vPrecomputedOBBExtent2 = 0xF8C; // Vector
            public const nint m_vPrecomputedOBBOrigin3 = 0xF98; // Vector
            public const nint m_vPrecomputedOBBAngles3 = 0xFA4; // QAngle
            public const nint m_vPrecomputedOBBExtent3 = 0xFB0; // Vector
            public const nint m_vPrecomputedOBBOrigin4 = 0xFBC; // Vector
            public const nint m_vPrecomputedOBBAngles4 = 0xFC8; // QAngle
            public const nint m_vPrecomputedOBBExtent4 = 0xFD4; // Vector
            public const nint m_vPrecomputedOBBOrigin5 = 0xFE0; // Vector
            public const nint m_vPrecomputedOBBAngles5 = 0xFEC; // QAngle
            public const nint m_vPrecomputedOBBExtent5 = 0xFF8; // Vector
            public const nint m_bInitialBoneSetup = 0x1048; // bool
            public const nint m_VisClusters = 0x1050; // C_NetworkUtlVectorBase<uint16>
        }
        // Parent: C_BaseEntity
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
        public static class C_TonemapController2 {
            public const nint m_flAutoExposureMin = 0x568; // float32
            public const nint m_flAutoExposureMax = 0x56C; // float32
            public const nint m_flTonemapPercentTarget = 0x570; // float32
            public const nint m_flTonemapPercentBrightPixels = 0x574; // float32
            public const nint m_flTonemapMinAvgLum = 0x578; // float32
            public const nint m_flExposureAdaptationSpeedUp = 0x57C; // float32
            public const nint m_flExposureAdaptationSpeedDown = 0x580; // float32
            public const nint m_flTonemapEVSmoothingRange = 0x584; // float32
        }
        // Parent: C_CSWeaponBaseGun
        // Field count: 0
        public static class C_WeaponG3SG1 {
        }
        // Parent: C_BaseModelEntity
        // Field count: 1
        public static class CFuncWater {
            public const nint m_BuoyancyHelper = 0xD28; // CBuoyancyHelper
        }
        // Parent: C_SoundOpvarSetPointEntity
        // Field count: 0
        public static class C_SoundOpvarSetAutoRoomEntity {
        }
        // Parent: C_BaseFlex
        // Field count: 20
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
            public const nint m_flFlexDelayTime = 0x1130; // float32
            public const nint m_flFlexDelayedWeight = 0x1138; // float32*
            public const nint m_bAttributesInitialized = 0x1140; // bool
            public const nint m_AttributeManager = 0x1148; // C_AttributeContainer
            public const nint m_OriginalOwnerXuidLow = 0x15F0; // uint32
            public const nint m_OriginalOwnerXuidHigh = 0x15F4; // uint32
            public const nint m_nFallbackPaintKit = 0x15F8; // int32
            public const nint m_nFallbackSeed = 0x15FC; // int32
            public const nint m_flFallbackWear = 0x1600; // float32
            public const nint m_nFallbackStatTrak = 0x1604; // int32
            public const nint m_bClientside = 0x1608; // bool
            public const nint m_bParticleSystemsCreated = 0x1609; // bool
            public const nint m_vecAttachedParticles = 0x1610; // CUtlVector<int32>
            public const nint m_hViewmodelAttachment = 0x1628; // CHandle<CBaseAnimGraph>
            public const nint m_iOldTeam = 0x162C; // int32
            public const nint m_bAttachmentDirty = 0x1630; // bool
            public const nint m_nUnloadedModelIndex = 0x1634; // int32
            public const nint m_iNumOwnerValidationRetries = 0x1638; // int32
            public const nint m_hOldProvidee = 0x1648; // CHandle<C_BaseEntity>
            public const nint m_vecAttachedModels = 0x1650; // CUtlVector<C_EconEntity::AttachedModelData_t>
        }
        // Parent: C_CSWeaponBaseGun
        // Field count: 0
        public static class C_WeaponSG556 {
        }
        // Parent: C_BarnLight
        // Field count: 1
        //
        // Metadata:
        // NetworkVarNames: m_bShowLight (bool)
        public static class C_RectLight {
            public const nint m_bShowLight = 0x1070; // bool
        }
        // Parent: C_BaseModelEntity
        // Field count: 24
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
            public const nint m_szSnapshotFileName = 0xD28; // char[512]
            public const nint m_bActive = 0xF28; // bool
            public const nint m_bFrozen = 0xF29; // bool
            public const nint m_flFreezeTransitionDuration = 0xF2C; // float32
            public const nint m_nStopType = 0xF30; // int32
            public const nint m_bAnimateDuringGameplayPause = 0xF34; // bool
            public const nint m_iEffectIndex = 0xF38; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
            public const nint m_flStartTime = 0xF40; // GameTime_t
            public const nint m_flPreSimTime = 0xF44; // float32
            public const nint m_vServerControlPoints = 0xF48; // Vector[4]
            public const nint m_iServerControlPointAssignments = 0xF78; // uint8[4]
            public const nint m_hControlPointEnts = 0xF7C; // CHandle<C_BaseEntity>[64]
            public const nint m_bNoSave = 0x107C; // bool
            public const nint m_bNoFreeze = 0x107D; // bool
            public const nint m_bNoRamp = 0x107E; // bool
            public const nint m_bStartActive = 0x107F; // bool
            public const nint m_iszEffectName = 0x1080; // CUtlSymbolLarge
            public const nint m_iszControlPointNames = 0x1088; // CUtlSymbolLarge[64]
            public const nint m_nDataCP = 0x1288; // int32
            public const nint m_vecDataCPValue = 0x128C; // Vector
            public const nint m_nTintCP = 0x1298; // int32
            public const nint m_clrTint = 0x129C; // Color
            public const nint m_bOldActive = 0x12C0; // bool
            public const nint m_bOldFrozen = 0x12C1; // bool
        }
        // Parent: C_CSGO_PreviewPlayer
        // Field count: 0
        public static class C_CSGO_TeamPreviewModel {
        }
        // Parent: C_CSWeaponBaseGun
        // Field count: 0
        public static class C_WeaponGlock {
        }
        // Parent: CEnvSoundscapeTriggerable
        // Field count: 0
        public static class CEnvSoundscapeTriggerableAlias_snd_soundscape_triggerable {
        }
        // Parent: C_GameRulesProxy
        // Field count: 1
        //
        // Metadata:
        // NetworkVarNames: m_pGameRules (C_CSGameRules*)
        public static class C_CSGameRulesProxy {
            public const nint m_pGameRules = 0x568; // C_CSGameRules*
        }
        // Parent: CPlayerPawnComponent
        // Field count: 6
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
        // Parent: CPlayerPawnComponent
        // Field count: 0
        public static class CPlayer_WaterServices {
        }
        // Parent: C_CSGO_EndOfMatchLineupEndpoint
        // Field count: 0
        public static class C_CSGO_EndOfMatchLineupEnd {
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
        // Parent: CBaseAnimGraph
        // Field count: 1
        public static class C_Multimeter {
            public const nint m_hTargetC4 = 0xF90; // CHandle<C_PlantedC4>
        }
        // Parent: C_BaseEntity
        // Field count: 2
        public static class C_CsmFovOverride {
            public const nint m_cameraName = 0x568; // CUtlString
            public const nint m_flCsmFovOverrideValue = 0x570; // float32
        }
        // Parent: C_BaseModelEntity
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
        public static class C_EnvDecal {
            public const nint m_hDecalMaterial = 0xD28; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_flWidth = 0xD30; // float32
            public const nint m_flHeight = 0xD34; // float32
            public const nint m_flDepth = 0xD38; // float32
            public const nint m_nRenderOrder = 0xD3C; // uint32
            public const nint m_bProjectOnWorld = 0xD40; // bool
            public const nint m_bProjectOnCharacters = 0xD41; // bool
            public const nint m_bProjectOnWater = 0xD42; // bool
            public const nint m_flDepthSortBias = 0xD44; // float32
        }
        // Parent: CCSGameModeRules
        // Field count: 0
        public static class CCSGameModeRules_Noop {
        }
        // Parent: C_BaseEntity
        // Field count: 18
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
            public const nint m_vecOrigin = 0x568; // Vector
            public const nint m_MinFalloff = 0x574; // float32
            public const nint m_MaxFalloff = 0x578; // float32
            public const nint m_flFadeInDuration = 0x57C; // float32
            public const nint m_flFadeOutDuration = 0x580; // float32
            public const nint m_flMaxWeight = 0x584; // float32
            public const nint m_flCurWeight = 0x588; // float32
            public const nint m_netlookupFilename = 0x58C; // char[512]
            public const nint m_bEnabled = 0x78C; // bool
            public const nint m_bMaster = 0x78D; // bool
            public const nint m_bClientSide = 0x78E; // bool
            public const nint m_bExclusive = 0x78F; // bool
            public const nint m_bEnabledOnClient = 0x790; // bool[1]
            public const nint m_flCurWeightOnClient = 0x794; // float32[1]
            public const nint m_bFadingIn = 0x798; // bool[1]
            public const nint m_flFadeStartWeight = 0x79C; // float32[1]
            public const nint m_flFadeStartTime = 0x7A0; // float32[1]
            public const nint m_flFadeDuration = 0x7A4; // float32[1]
        }
        // Parent: C_BaseTrigger
        // Field count: 0
        public static class CHostageRescueZoneShim {
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
        // Parent: C_CSWeaponBaseGun
        // Field count: 0
        public static class C_WeaponP250 {
        }
        // Parent: None
        // Field count: 1
        public static class C_EconEntity__AttachedModelData_t {
            public const nint m_iModelDisplayFlags = 0x0; // int32
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // NetworkVarNames: m_Attributes (CEconItemAttribute)
        public static class CAttributeList {
            public const nint m_Attributes = 0x8; // C_UtlVectorEmbeddedNetworkVar<CEconItemAttribute>
            public const nint m_pManager = 0x58; // CAttributeManager*
        }
        // Parent: C_MultiplayRules
        // Field count: 0
        public static class C_TeamplayRules {
        }
        // Parent: C_CSGO_TeamPreviewCamera
        // Field count: 0
        public static class C_CSGO_CounterTerroristWingmanIntroCamera {
        }
        // Parent: C_CSWeaponBase
        // Field count: 0
        public static class C_WeaponNOVA {
        }
        // Parent: C_BaseCSGrenadeProjectile
        // Field count: 0
        public static class C_HEGrenadeProjectile {
        }
        // Parent: C_BaseToggle
        // Field count: 1
        //
        // Metadata:
        // NetworkVarNames: m_bIsUsable (bool)
        public static class C_BaseDoor {
            public const nint m_bIsUsable = 0xD28; // bool
        }
        // Parent: C_BaseModelEntity
        // Field count: 2
        public static class CGrenadeTracer {
            public const nint m_flTracerDuration = 0xD40; // float32
            public const nint m_nType = 0xD44; // GrenadeType_t
        }
        // Parent: C_BaseTrigger
        // Field count: 1
        //
        // Metadata:
        // NetworkVarNames: m_bBombPlantedHere (bool)
        public static class CBombTarget {
            public const nint m_bBombPlantedHere = 0xD30; // bool
        }
        // Parent: C_BaseClientUIEntity
        // Field count: 2
        //
        // Metadata:
        // NetworkVarNames: m_hActivator (EHANDLE)
        public static class C_PointClientUIDialog {
            public const nint m_hActivator = 0xD58; // CHandle<C_BaseEntity>
            public const nint m_bStartEnabled = 0xD5C; // bool
        }
        // Parent: CCSGameModeRules
        // Field count: 1
        //
        // Metadata:
        // NetworkVarNames: m_WeaponSequence (CUtlString)
        public static class CCSGameModeRules_ArmsRace {
            public const nint m_WeaponSequence = 0x30; // C_NetworkUtlVectorBase<CUtlString>
        }
        // Parent: C_PointEntity
        // Field count: 1
        public static class CPointChildModifier {
            public const nint m_bOrphanInsteadOfDeletingChildrenOnRemove = 0x568; // bool
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
            public const nint m_PlayerDamager = 0x28; // CHandle<C_CSPlayerPawn>
            public const nint m_PlayerRecipient = 0x2C; // CHandle<C_CSPlayerPawn>
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
        // Parent: C_BaseEntity
        // Field count: 0
        public static class C_InfoLadderDismount {
        }
        // Parent: CPlayerControllerComponent
        // Field count: 2
        //
        // Metadata:
        // NetworkVarNames: m_nSendUpdate (int)
        // NetworkVarNames: m_DamageList (CDamageRecord)
        public static class CCSPlayerController_DamageServices {
            public const nint m_nSendUpdate = 0x40; // int32
            public const nint m_DamageList = 0x48; // C_UtlVectorEmbeddedNetworkVar<CDamageRecord>
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
            public const nint m_MainSoundscapeName = 0x608; // CUtlSymbolLarge
        }
        // Parent: C_SoundEventEntity
        // Field count: 2
        //
        // Metadata:
        // NetworkVarNames: m_vMins (Vector)
        // NetworkVarNames: m_vMaxs (Vector)
        public static class C_SoundEventOBBEntity {
            public const nint m_vMins = 0x628; // Vector
            public const nint m_vMaxs = 0x634; // Vector
        }
        // Parent: CEntityComponent
        // Field count: 66
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
        // Field count: 0
        public static class C_CSGO_CounterTerroristTeamIntroCamera {
        }
        // Parent: None
        // Field count: 0
        public static class CEntityComponent {
        }
        // Parent: IEconItemInterface
        // Field count: 29
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
            public const nint m_iOriginOverride = 0x1F8; // int32
            public const nint m_unClientFlags = 0x1FC; // uint8
            public const nint m_unOverrideStyle = 0x1FD; // uint8
            public const nint m_AttributeList = 0x210; // CAttributeList
            public const nint m_NetworkedDynamicAttributes = 0x270; // CAttributeList
            public const nint m_szCustomName = 0x2D0; // char[161]
            public const nint m_szCustomNameOverride = 0x371; // char[161]
            public const nint m_bInitializedTags = 0x440; // bool
        }
        // Parent: C_BaseEntity
        // Field count: 2
        //
        // Metadata:
        // NetworkVarNames: m_Handle (CHandle<CBaseEntity>)
        // NetworkVarNames: m_bSendHandle (bool)
        public static class C_HandleTest {
            public const nint m_Handle = 0x568; // CHandle<C_BaseEntity>
            public const nint m_bSendHandle = 0x56C; // bool
        }
        // Parent: C_BaseEntity
        // Field count: 1
        //
        // Metadata:
        // NetworkVarNames: m_EnvWindShared (CEnvWindShared)
        public static class C_EnvWindClientside {
            public const nint m_EnvWindShared = 0x568; // C_EnvWindShared
        }
        // Parent: C_CSWeaponBaseGun
        // Field count: 0
        public static class C_WeaponMAC10 {
        }
        // Parent: C_PointClientUIWorldPanel
        // Field count: 1
        //
        // Metadata:
        // NetworkVarNames: m_messageText (char)
        public static class C_PointClientUIWorldTextPanel {
            public const nint m_messageText = 0xF90; // char[512]
        }
        // Parent: CPlayer_UseServices
        // Field count: 0
        public static class CCSPlayer_UseServices {
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
        // Parent: C_BaseEntity
        // Field count: 11
        public static class CEnvSoundscape {
            public const nint m_OnPlay = 0x568; // CEntityIOOutput
            public const nint m_flRadius = 0x590; // float32
            public const nint m_soundEventName = 0x598; // CUtlSymbolLarge
            public const nint m_bOverrideWithEvent = 0x5A0; // bool
            public const nint m_soundscapeIndex = 0x5A4; // int32
            public const nint m_soundscapeEntityListId = 0x5A8; // int32
            public const nint m_positionNames = 0x5B0; // CUtlSymbolLarge[8]
            public const nint m_hProxySoundscape = 0x5F0; // CHandle<CEnvSoundscape>
            public const nint m_bDisabled = 0x5F4; // bool
            public const nint m_soundscapeName = 0x5F8; // CUtlSymbolLarge
            public const nint m_soundEventHash = 0x600; // uint32
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
        // Field count: 4
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
        // Field count: 2
        public static class C_EnvWindShared__WindVariationEvent_t {
            public const nint m_flWindAngleVariation = 0x0; // float32
            public const nint m_flWindSpeedVariation = 0x4; // float32
        }
        // Parent: C_CSWeaponBaseGun
        // Field count: 0
        public static class C_WeaponUSPSilencer {
        }
        // Parent: C_Sprite
        // Field count: 0
        public static class CSpriteOriented {
        }
        // Parent: C_CSGO_EndOfMatchLineupEndpoint
        // Field count: 0
        public static class C_CSGO_EndOfMatchLineupStart {
        }
        // Parent: C_CSWeaponBaseGun
        // Field count: 0
        public static class C_WeaponFamas {
        }
        // Parent: C_ParticleSystem
        // Field count: 5
        //
        // Metadata:
        // NetworkVarNames: m_flAlphaScale (float32)
        // NetworkVarNames: m_flRadiusScale (float32)
        // NetworkVarNames: m_flSelfIllumScale (float32)
        // NetworkVarNames: m_ColorTint (Color)
        // NetworkVarNames: m_hTextureOverride (HRenderTextureStrong)
        public static class C_EnvParticleGlow {
            public const nint m_flAlphaScale = 0x12D8; // float32
            public const nint m_flRadiusScale = 0x12DC; // float32
            public const nint m_flSelfIllumScale = 0x12E0; // float32
            public const nint m_ColorTint = 0x12E4; // Color
            public const nint m_hTextureOverride = 0x12E8; // CStrongHandle<InfoForResourceTypeCTextureBase>
        }
        // Parent: C_BaseEntity
        // Field count: 15
        public static class C_SoundEventEntity {
            public const nint m_bStartOnSpawn = 0x568; // bool
            public const nint m_bToLocalPlayer = 0x569; // bool
            public const nint m_bStopOnNew = 0x56A; // bool
            public const nint m_bSaveRestore = 0x56B; // bool
            public const nint m_bSavedIsPlaying = 0x56C; // bool
            public const nint m_flSavedElapsedTime = 0x570; // float32
            public const nint m_iszSourceEntityName = 0x578; // CUtlSymbolLarge
            public const nint m_iszAttachmentName = 0x580; // CUtlSymbolLarge
            public const nint m_onGUIDChanged = 0x588; // CEntityOutputTemplate<uint64>
            public const nint m_onSoundFinished = 0x5B0; // CEntityIOOutput
            public const nint m_flClientCullRadius = 0x5D8; // float32
            public const nint m_iszSoundName = 0x608; // CUtlSymbolLarge
            public const nint m_hSource = 0x618; // CEntityHandle
            public const nint m_nEntityIndexSelection = 0x61C; // int32
            public const nint m_bClientSideOnly = 0x0; // bitfield:1
        }
        // Parent: C_CSGO_TeamPreviewCharacterPosition
        // Field count: 0
        public static class C_CSGO_TeamIntroCharacterPosition {
        }
        // Parent: C_CSGO_PreviewModel
        // Field count: 0
        public static class C_CSGO_PreviewModelAlias_csgo_item_previewmodel {
        }
        // Parent: C_BaseModelEntity
        // Field count: 18
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
            public const nint m_fxSSSunFlareEffectIndex = 0xD28; // ParticleIndex_t
            public const nint m_fxSunFlareEffectIndex = 0xD2C; // ParticleIndex_t
            public const nint m_fdistNormalize = 0xD30; // float32
            public const nint m_vSunPos = 0xD34; // Vector
            public const nint m_vDirection = 0xD40; // Vector
            public const nint m_iszEffectName = 0xD50; // CUtlSymbolLarge
            public const nint m_iszSSEffectName = 0xD58; // CUtlSymbolLarge
            public const nint m_clrOverlay = 0xD60; // Color
            public const nint m_bOn = 0xD64; // bool
            public const nint m_bmaxColor = 0xD65; // bool
            public const nint m_flSize = 0xD68; // float32
            public const nint m_flHazeScale = 0xD6C; // float32
            public const nint m_flRotation = 0xD70; // float32
            public const nint m_flHDRColorScale = 0xD74; // float32
            public const nint m_flAlphaHaze = 0xD78; // float32
            public const nint m_flAlphaScale = 0xD7C; // float32
            public const nint m_flAlphaHdr = 0xD80; // float32
            public const nint m_flFarZScale = 0xD84; // float32
        }
        // Parent: C_BaseEntity
        // Field count: 0
        public static class C_CSGO_EndOfMatchLineupEndpoint {
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
            public const nint m_perRoundStats = 0x40; // C_UtlVectorEmbeddedNetworkVar<CSPerRoundStats_t>
            public const nint m_matchStats = 0x90; // CSMatchStats_t
            public const nint m_iNumRoundKills = 0x110; // int32
            public const nint m_iNumRoundKillsHeadshots = 0x114; // int32
            public const nint m_unTotalRoundDamageDealt = 0x118; // uint32
        }
        // Parent: CEntityComponent
        // Field count: 1
        //
        // Metadata:
        // NetworkVarNames: m_bvDisabledHitGroups (uint32)
        public static class CHitboxComponent {
            public const nint m_bvDisabledHitGroups = 0x24; // uint32[1]
        }
        // Parent: C_BaseTrigger
        // Field count: 9
        //
        // Metadata:
        // NetworkVarNames: m_bEnabled (bool)
        // NetworkVarNames: m_MaxWeight (float)
        // NetworkVarNames: m_FadeDuration (float)
        // NetworkVarNames: m_Weight (float)
        // NetworkVarNames: m_lookupFilename (char)
        public static class C_ColorCorrectionVolume {
            public const nint m_LastEnterWeight = 0xD30; // float32
            public const nint m_LastEnterTime = 0xD34; // float32
            public const nint m_LastExitWeight = 0xD38; // float32
            public const nint m_LastExitTime = 0xD3C; // float32
            public const nint m_bEnabled = 0xD40; // bool
            public const nint m_MaxWeight = 0xD44; // float32
            public const nint m_FadeDuration = 0xD48; // float32
            public const nint m_Weight = 0xD4C; // float32
            public const nint m_lookupFilename = 0xD50; // char[512]
        }
        // Parent: C_BaseModelEntity
        // Field count: 0
        public static class C_PrecipitationBlocker {
        }
        // Parent: CBaseAnimGraph
        // Field count: 6
        public static class C_BulletHitModel {
            public const nint m_matLocal = 0xF88; // matrix3x4_t
            public const nint m_iBoneIndex = 0xFB8; // int32
            public const nint m_hPlayerParent = 0xFBC; // CHandle<C_BaseEntity>
            public const nint m_bIsHit = 0xFC0; // bool
            public const nint m_flTimeCreated = 0xFC4; // float32
            public const nint m_vecStartPos = 0xFC8; // Vector
        }
        // Parent: C_BaseEntity
        // Field count: 17
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
            public const nint m_nDraftType = 0x578; // int32
            public const nint m_nTeamWinningCoinToss = 0x57C; // int32
            public const nint m_nTeamWithFirstChoice = 0x580; // int32[64]
            public const nint m_nVoteMapIdsList = 0x680; // int32[7]
            public const nint m_nAccountIDs = 0x69C; // int32[64]
            public const nint m_nMapId0 = 0x79C; // int32[64]
            public const nint m_nMapId1 = 0x89C; // int32[64]
            public const nint m_nMapId2 = 0x99C; // int32[64]
            public const nint m_nMapId3 = 0xA9C; // int32[64]
            public const nint m_nMapId4 = 0xB9C; // int32[64]
            public const nint m_nMapId5 = 0xC9C; // int32[64]
            public const nint m_nStartingSide0 = 0xD9C; // int32[64]
            public const nint m_nCurrentPhase = 0xE9C; // int32
            public const nint m_nPhaseStartTick = 0xEA0; // int32
            public const nint m_nPhaseDurationTicks = 0xEA4; // int32
            public const nint m_nPostDataUpdateTick = 0xEA8; // int32
            public const nint m_bDisabledHud = 0xEAC; // bool
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGapTypeQueriesForScopeSingleton
        public static class CSharedGapTypeQueryRegistration {
        }
        // Parent: C_BarnLight
        // Field count: 3
        //
        // Metadata:
        // NetworkVarNames: m_flInnerAngle (float)
        // NetworkVarNames: m_flOuterAngle (float)
        // NetworkVarNames: m_bShowLight (bool)
        public static class C_OmniLight {
            public const nint m_flInnerAngle = 0x1070; // float32
            public const nint m_flOuterAngle = 0x1074; // float32
            public const nint m_bShowLight = 0x1078; // bool
        }
        // Parent: C_Inferno
        // Field count: 0
        public static class C_FireCrackerBlast {
        }
        // Parent: C_CSWeaponBaseGun
        // Field count: 0
        public static class C_WeaponMP9 {
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // NetworkVarNames: m_weaponPurchases (WeaponPurchaseCount_t)
        public static class WeaponPurchaseTracker_t {
            public const nint m_weaponPurchases = 0x8; // C_UtlVectorEmbeddedNetworkVar<WeaponPurchaseCount_t>
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
        public static class C_RetakeGameRules {
            public const nint m_nMatchSeed = 0xF8; // int32
            public const nint m_bBlockersPresent = 0xFC; // bool
            public const nint m_bRoundInProgress = 0xFD; // bool
            public const nint m_iFirstSecondHalfRound = 0x100; // int32
            public const nint m_iBombSite = 0x104; // int32
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
        // Parent: CPlayerPawnComponent
        // Field count: 0
        public static class CCSPlayer_GlowServices {
        }
        // Parent: None
        // Field count: 5
        public static class C_BaseFlex__Emphasized_Phoneme {
            public const nint m_sClassName = 0x0; // CUtlString
            public const nint m_flAmount = 0x18; // float32
            public const nint m_bRequired = 0x1C; // bool
            public const nint m_bBasechecked = 0x1D; // bool
            public const nint m_bValid = 0x1E; // bool
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
        // Parent: C_CSWeaponBaseGun
        // Field count: 0
        public static class C_WeaponSSG08 {
        }
        // Parent: C_BaseModelEntity
        // Field count: 9
        //
        // Metadata:
        // NetworkVarNames: m_vecLadderDir (Vector)
        // NetworkVarNames: m_vecPlayerMountPositionTop (Vector)
        // NetworkVarNames: m_vecPlayerMountPositionBottom (Vector)
        // NetworkVarNames: m_flAutoRideSpeed (float)
        // NetworkVarNames: m_bFakeLadder (bool)
        public static class C_FuncLadder {
            public const nint m_vecLadderDir = 0xD28; // Vector
            public const nint m_Dismounts = 0xD38; // CUtlVector<CHandle<C_InfoLadderDismount>>
            public const nint m_vecLocalTop = 0xD50; // Vector
            public const nint m_vecPlayerMountPositionTop = 0xD5C; // Vector
            public const nint m_vecPlayerMountPositionBottom = 0xD68; // Vector
            public const nint m_flAutoRideSpeed = 0xD74; // float32
            public const nint m_bDisabled = 0xD78; // bool
            public const nint m_bFakeLadder = 0xD79; // bool
            public const nint m_bHasSlack = 0xD7A; // bool
        }
        // Parent: C_SoundOpvarSetAABBEntity
        // Field count: 0
        public static class C_SoundOpvarSetOBBEntity {
        }
        // Parent: CPlayerPawnComponent
        // Field count: 4
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
        // Field count: 3
        public static class CAttributeManager__cached_attribute_float_t {
            public const nint flIn = 0x0; // float32
            public const nint iAttribHook = 0x8; // CUtlSymbolLarge
            public const nint flOut = 0x10; // float32
        }
        // Parent: C_BaseFlex
        // Field count: 12
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
            public const nint m_bHasWarnedAI = 0x1120; // bool
            public const nint m_bIsSmokeGrenade = 0x1121; // bool
            public const nint m_bIsLive = 0x1122; // bool
            public const nint m_DmgRadius = 0x1124; // float32
            public const nint m_flDetonateTime = 0x1128; // GameTime_t
            public const nint m_flWarnAITime = 0x112C; // float32
            public const nint m_flDamage = 0x1130; // float32
            public const nint m_iszBounceSound = 0x1138; // CUtlSymbolLarge
            public const nint m_ExplosionSound = 0x1140; // CUtlString
            public const nint m_hThrower = 0x114C; // CHandle<C_CSPlayerPawn>
            public const nint m_flNextAttack = 0x1164; // GameTime_t
            public const nint m_hOriginalThrower = 0x1168; // CHandle<C_CSPlayerPawn>
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
        // Parent: C_BaseEntity
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
        public static class C_EnvVolumetricFogController {
            public const nint m_flScattering = 0x568; // float32
            public const nint m_flAnisotropy = 0x56C; // float32
            public const nint m_flFadeSpeed = 0x570; // float32
            public const nint m_flDrawDistance = 0x574; // float32
            public const nint m_flFadeInStart = 0x578; // float32
            public const nint m_flFadeInEnd = 0x57C; // float32
            public const nint m_flIndirectStrength = 0x580; // float32
            public const nint m_nVolumeDepth = 0x584; // int32
            public const nint m_fFirstVolumeSliceThickness = 0x588; // float32
            public const nint m_nIndirectTextureDimX = 0x58C; // int32
            public const nint m_nIndirectTextureDimY = 0x590; // int32
            public const nint m_nIndirectTextureDimZ = 0x594; // int32
            public const nint m_vBoxMins = 0x598; // Vector
            public const nint m_vBoxMaxs = 0x5A4; // Vector
            public const nint m_bActive = 0x5B0; // bool
            public const nint m_flStartAnisoTime = 0x5B4; // GameTime_t
            public const nint m_flStartScatterTime = 0x5B8; // GameTime_t
            public const nint m_flStartDrawDistanceTime = 0x5BC; // GameTime_t
            public const nint m_flStartAnisotropy = 0x5C0; // float32
            public const nint m_flStartScattering = 0x5C4; // float32
            public const nint m_flStartDrawDistance = 0x5C8; // float32
            public const nint m_flDefaultAnisotropy = 0x5CC; // float32
            public const nint m_flDefaultScattering = 0x5D0; // float32
            public const nint m_flDefaultDrawDistance = 0x5D4; // float32
            public const nint m_bStartDisabled = 0x5D8; // bool
            public const nint m_bEnableIndirect = 0x5D9; // bool
            public const nint m_bIndirectUseLPVs = 0x5DA; // bool
            public const nint m_bIsMaster = 0x5DB; // bool
            public const nint m_hFogIndirectTexture = 0x5E0; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_nForceRefreshCount = 0x5E8; // int32
            public const nint m_fNoiseSpeed = 0x5EC; // float32
            public const nint m_fNoiseStrength = 0x5F0; // float32
            public const nint m_vNoiseScale = 0x5F4; // Vector
            public const nint m_bFirstTime = 0x600; // bool
        }
        // Parent: C_CSWeaponBaseGun
        // Field count: 0
        public static class C_WeaponTec9 {
        }
        // Parent: CBaseAnimGraph
        // Field count: 13
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
            public const nint m_bActive = 0xF90; // bool
            public const nint m_bWasActive = 0xF91; // bool
            public const nint m_flEndTime = 0xF94; // GameTime_t
            public const nint m_flStartTime = 0xF98; // GameTime_t
            public const nint m_flStartTimeInCommentary = 0xF9C; // float32
            public const nint m_iszCommentaryFile = 0xFA0; // CUtlSymbolLarge
            public const nint m_iszTitle = 0xFA8; // CUtlSymbolLarge
            public const nint m_iszSpeakers = 0xFB0; // CUtlSymbolLarge
            public const nint m_iNodeNumber = 0xFB8; // int32
            public const nint m_iNodeNumberMax = 0xFBC; // int32
            public const nint m_bListenedTo = 0xFC0; // bool
            public const nint m_hViewPosition = 0xFD0; // CHandle<C_BaseEntity>
            public const nint m_bRestartAfterRestore = 0xFD4; // bool
        }
        // Parent: CCSPlayerBase_CameraServices
        // Field count: 0
        public static class CCSObserver_CameraServices {
        }
        // Parent: CCSPointScriptEntity
        // Field count: 0
        public static class CCSClientPointScriptEntity {
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
        // Parent: CBaseAnimGraph
        // Field count: 0
        public static class C_CS2WeaponModuleBase {
        }
        // Parent: C_BaseEntity
        // Field count: 3
        //
        // Metadata:
        // NetworkVarNames: m_nMode (int)
        // NetworkVarNames: m_vBoxSize (Vector)
        // NetworkVarNames: m_bEnabled (bool)
        public static class C_InfoVisibilityBox {
            public const nint m_nMode = 0x56C; // int32
            public const nint m_vBoxSize = 0x570; // Vector
            public const nint m_bEnabled = 0x57C; // bool
        }
        // Parent: C_Sprite
        // Field count: 2
        public static class C_FireSprite {
            public const nint m_vecMoveDir = 0xE38; // Vector
            public const nint m_bFadeFromAbove = 0xE44; // bool
        }
        // Parent: C_CSGO_TeamIntroCharacterPosition
        // Field count: 0
        public static class C_CSGO_TeamIntroTerroristPosition {
        }
        // Parent: C_BaseTrigger
        // Field count: 8
        public static class C_Precipitation {
            public const nint m_flDensity = 0xD30; // float32
            public const nint m_flParticleInnerDist = 0xD40; // float32
            public const nint m_pParticleDef = 0xD48; // char*
            public const nint m_tParticlePrecipTraceTimer = 0xD70; // TimedEvent[1]
            public const nint m_bActiveParticlePrecipEmitter = 0xD78; // bool[1]
            public const nint m_bParticlePrecipInitialized = 0xD79; // bool
            public const nint m_bHasSimulatedSinceLastSceneObjectUpdate = 0xD7A; // bool
            public const nint m_nAvailableSheetSequencesMaxIndex = 0xD7C; // int32
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
        // Parent: C_BaseModelEntity
        // Field count: 4
        //
        // Metadata:
        // NetworkVarNames: m_bEnabled (bool)
        // NetworkVarNames: m_DialogXMLName (string_t)
        // NetworkVarNames: m_PanelClassName (string_t)
        // NetworkVarNames: m_PanelID (string_t)
        public static class C_BaseClientUIEntity {
            public const nint m_bEnabled = 0xD30; // bool
            public const nint m_DialogXMLName = 0xD38; // CUtlSymbolLarge
            public const nint m_PanelClassName = 0xD40; // CUtlSymbolLarge
            public const nint m_PanelID = 0xD48; // CUtlSymbolLarge
        }
        // Parent: C_BaseModelEntity
        // Field count: 3
        public static class C_FuncTrackTrain {
            public const nint m_nLongAxis = 0xD28; // int32
            public const nint m_flRadius = 0xD2C; // float32
            public const nint m_flLineLength = 0xD30; // float32
        }
        // Parent: CPlayerPawnComponent
        // Field count: 4
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
            public const nint m_vecPanelVertices = 0x40; // C_NetworkUtlVectorBase<Vector2D>
            public const nint m_vInitialPanelVertices = 0x58; // C_NetworkUtlVectorBase<Vector4D>
            public const nint m_flGlassHalfThickness = 0x70; // float32
            public const nint m_bHasParent = 0x74; // bool
            public const nint m_bParentFrozen = 0x75; // bool
            public const nint m_SurfacePropStringToken = 0x78; // CUtlStringToken
        }
        // Parent: None
        // Field count: 1
        public static class C_SceneEntity__QueuedEvents_t {
            public const nint starttime = 0x0; // float32
        }
        // Parent: CBaseAnimGraph
        // Field count: 4
        public static class CBaseProp {
            public const nint m_bModelOverrodeBlockLOS = 0xF88; // bool
            public const nint m_iShapeType = 0xF8C; // int32
            public const nint m_bConformToCollisionBounds = 0xF90; // bool
            public const nint m_mPreferredCatchTransform = 0xF94; // matrix3x4_t
        }
        // Parent: C_CSGO_PreviewPlayer
        // Field count: 0
        public static class C_CSGO_PreviewPlayerAlias_csgo_player_previewmodel {
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MPulseProvideFeatureTag
        // MPulseLibraryBindings
        public static class CCSPointScriptExtensions_observer {
        }
        // Parent: CLogicalEntity
        // Field count: 12
        public static class CPointTemplate {
            public const nint m_iszWorldName = 0x568; // CUtlSymbolLarge
            public const nint m_iszSource2EntityLumpName = 0x570; // CUtlSymbolLarge
            public const nint m_iszEntityFilterName = 0x578; // CUtlSymbolLarge
            public const nint m_flTimeoutInterval = 0x580; // float32
            public const nint m_bAsynchronouslySpawnEntities = 0x584; // bool
            public const nint m_pOutputOnSpawned = 0x588; // CEntityIOOutput
            public const nint m_clientOnlyEntityBehavior = 0x5B0; // PointTemplateClientOnlyEntityBehavior_t
            public const nint m_ownerSpawnGroupType = 0x5B4; // PointTemplateOwnerSpawnGroupType_t
            public const nint m_createdSpawnGroupHandles = 0x5B8; // CUtlVector<uint32>
            public const nint m_SpawnedEntityHandles = 0x5D0; // CUtlVector<CEntityHandle>
            public const nint m_ScriptSpawnCallback = 0x5E8; // HSCRIPT
            public const nint m_ScriptCallbackScope = 0x5F0; // HSCRIPT
        }
        // Parent: C_CSWeaponBaseGun
        // Field count: 0
        public static class C_WeaponHKP2000 {
        }
        // Parent: C_BaseFlex
        // Field count: 6
        public static class C_CSGO_PreviewModel {
            public const nint m_animgraph = 0x1120; // CUtlString
            public const nint m_animgraphCharacterModeString = 0x1128; // CGlobalSymbol
            public const nint m_defaultAnim = 0x1130; // CUtlString
            public const nint m_nDefaultAnimLoopMode = 0x1138; // AnimLoopMode_t
            public const nint m_flInitialModelScale = 0x113C; // float32
            public const nint m_sInitialWeaponState = 0x1140; // CUtlString
        }
        // Parent: C_PointEntity
        // Field count: 5
        public static class CInfoDynamicShadowHint {
            public const nint m_bDisabled = 0x568; // bool
            public const nint m_flRange = 0x56C; // float32
            public const nint m_nImportance = 0x570; // int32
            public const nint m_nLightChoice = 0x574; // int32
            public const nint m_hLight = 0x578; // CHandle<C_BaseEntity>
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MPulseProvideFeatureTag
        // MPulseLibraryBindings
        public static class CTakeDamageInfoAPI {
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MPulseProvideFeatureTag
        // MPulseLibraryBindings
        public static class C_BaseEntityAPI {
        }
        // Parent: C_CSWeaponBase
        // Field count: 0
        public static class C_WeaponXM1014 {
        }
        // Parent: C_ParticleSystem
        // Field count: 0
        public static class C_MapPreviewParticleSystem {
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
        // Parent: C_BaseTrigger
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
        public static class C_TriggerPhysics {
            public const nint m_gravityScale = 0xD30; // float32
            public const nint m_linearLimit = 0xD34; // float32
            public const nint m_linearDamping = 0xD38; // float32
            public const nint m_angularLimit = 0xD3C; // float32
            public const nint m_angularDamping = 0xD40; // float32
            public const nint m_linearForce = 0xD44; // float32
            public const nint m_flFrequency = 0xD48; // float32
            public const nint m_flDampingRatio = 0xD4C; // float32
            public const nint m_vecLinearForcePointAt = 0xD50; // Vector
            public const nint m_bCollapseToForcePoint = 0xD5C; // bool
            public const nint m_vecLinearForcePointAtWorld = 0xD60; // Vector
            public const nint m_vecLinearForceDirection = 0xD6C; // Vector
            public const nint m_bConvertToDebrisWhenPossible = 0xD78; // bool
        }
        // Parent: CPlayerPawnComponent
        // Field count: 2
        //
        // Metadata:
        // NetworkVarNames: m_hCarriedHostage (CHandle<CBaseEntity>)
        // NetworkVarNames: m_hCarriedHostageProp (CHandle<CBaseEntity>)
        public static class CCSPlayer_HostageServices {
            public const nint m_hCarriedHostage = 0x40; // CHandle<C_BaseEntity>
            public const nint m_hCarriedHostageProp = 0x44; // CHandle<C_BaseEntity>
        }
        // Parent: C_LightEntity
        // Field count: 0
        public static class C_LightDirectionalEntity {
        }
        // Parent: C_BaseEntity
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
        public static class C_EnvCubemap {
            public const nint m_Entity_hCubemapTexture = 0x5E8; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Entity_bCustomCubemapTexture = 0x5F0; // bool
            public const nint m_Entity_flInfluenceRadius = 0x5F4; // float32
            public const nint m_Entity_vBoxProjectMins = 0x5F8; // Vector
            public const nint m_Entity_vBoxProjectMaxs = 0x604; // Vector
            public const nint m_Entity_bMoveable = 0x610; // bool
            public const nint m_Entity_nHandshake = 0x614; // int32
            public const nint m_Entity_nEnvCubeMapArrayIndex = 0x618; // int32
            public const nint m_Entity_nPriority = 0x61C; // int32
            public const nint m_Entity_flEdgeFadeDist = 0x620; // float32
            public const nint m_Entity_vEdgeFadeDists = 0x624; // Vector
            public const nint m_Entity_flDiffuseScale = 0x630; // float32
            public const nint m_Entity_bStartDisabled = 0x634; // bool
            public const nint m_Entity_bDefaultEnvMap = 0x635; // bool
            public const nint m_Entity_bDefaultSpecEnvMap = 0x636; // bool
            public const nint m_Entity_bIndoorCubeMap = 0x637; // bool
            public const nint m_Entity_bCopyDiffuseFromDefaultCubemap = 0x638; // bool
            public const nint m_Entity_bEnabled = 0x648; // bool
        }
        // Parent: C_BaseViewModel
        // Field count: 3
        public static class C_PredictedViewModel {
            public const nint m_vPredictedLagOffset = 0xFF0; // Vector
            public const nint m_targetSpeed = 0xFFC; // QAngle
            public const nint m_currentSpeed = 0x1008; // QAngle
        }
        // Parent: C_CSWeaponBaseGun
        // Field count: 0
        public static class C_WeaponBizon {
        }
        // Parent: C_CSWeaponBaseGun
        // Field count: 0
        public static class C_AK47 {
        }
        // Parent: C_BaseEntity
        // Field count: 25
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
            public const nint m_bDisabled = 0x568; // bool
            public const nint m_bDisabledOld = 0x569; // bool
            public const nint m_bUpdateOnClient = 0x56A; // bool
            public const nint m_nInputType = 0x56C; // ValueRemapperInputType_t
            public const nint m_hRemapLineStart = 0x570; // CHandle<C_BaseEntity>
            public const nint m_hRemapLineEnd = 0x574; // CHandle<C_BaseEntity>
            public const nint m_flMaximumChangePerSecond = 0x578; // float32
            public const nint m_flDisengageDistance = 0x57C; // float32
            public const nint m_flEngageDistance = 0x580; // float32
            public const nint m_bRequiresUseKey = 0x584; // bool
            public const nint m_nOutputType = 0x588; // ValueRemapperOutputType_t
            public const nint m_hOutputEntities = 0x590; // C_NetworkUtlVectorBase<CHandle<C_BaseEntity>>
            public const nint m_nHapticsType = 0x5A8; // ValueRemapperHapticsType_t
            public const nint m_nMomentumType = 0x5AC; // ValueRemapperMomentumType_t
            public const nint m_flMomentumModifier = 0x5B0; // float32
            public const nint m_flSnapValue = 0x5B4; // float32
            public const nint m_flCurrentMomentum = 0x5B8; // float32
            public const nint m_nRatchetType = 0x5BC; // ValueRemapperRatchetType_t
            public const nint m_flRatchetOffset = 0x5C0; // float32
            public const nint m_flInputOffset = 0x5C4; // float32
            public const nint m_bEngaged = 0x5C8; // bool
            public const nint m_bFirstUpdate = 0x5C9; // bool
            public const nint m_flPreviousValue = 0x5CC; // float32
            public const nint m_flPreviousUpdateTickTime = 0x5D0; // GameTime_t
            public const nint m_vecPreviousTestPoint = 0x5D4; // Vector
        }
        // Parent: C_CSWeaponBase
        // Field count: 1
        //
        // Metadata:
        // NetworkVarNames: m_bFirstAttack (bool)
        public static class C_Knife {
            public const nint m_bFirstAttack = 0x1B20; // bool
        }
        // Parent: C_EnvCubemap
        // Field count: 0
        public static class C_EnvCubemapBox {
        }
        // Parent: C_Item
        // Field count: 2
        //
        // Metadata:
        // NetworkVarNames: m_OwningPlayer (CHandle<CCSPlayerPawn>)
        // NetworkVarNames: m_KillingPlayer (CHandle<CCSPlayerPawn>)
        public static class C_ItemDogtags {
            public const nint m_OwningPlayer = 0x1768; // CHandle<C_CSPlayerPawn>
            public const nint m_KillingPlayer = 0x176C; // CHandle<C_CSPlayerPawn>
        }
        // Parent: C_CSGO_TeamPreviewCamera
        // Field count: 0
        public static class C_CSGO_EndOfMatchCamera {
        }
        // Parent: C_BaseEntity
        // Field count: 5
        //
        // Metadata:
        // NetworkVarNames: m_iszStackName (string_t)
        // NetworkVarNames: m_iszOperatorName (string_t)
        // NetworkVarNames: m_iszOpvarName (string_t)
        // NetworkVarNames: m_iOpvarIndex (int)
        // NetworkVarNames: m_bUseAutoCompare (bool)
        public static class C_SoundOpvarSetPointBase {
            public const nint m_iszStackName = 0x568; // CUtlSymbolLarge
            public const nint m_iszOperatorName = 0x570; // CUtlSymbolLarge
            public const nint m_iszOpvarName = 0x578; // CUtlSymbolLarge
            public const nint m_iOpvarIndex = 0x580; // int32
            public const nint m_bUseAutoCompare = 0x584; // bool
        }
        // Parent: C_Breakable
        // Field count: 0
        public static class C_PhysBox {
        }
        // Parent: CPlayerPawnComponent
        // Field count: 1
        //
        // Metadata:
        // NetworkVarNames: m_vecSellbackPurchaseEntries (SellbackPurchaseEntry_t)
        public static class CCSPlayer_BuyServices {
            public const nint m_vecSellbackPurchaseEntries = 0x40; // C_UtlVectorEmbeddedNetworkVar<SellbackPurchaseEntry_t>
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MPulseProvideFeatureTag
        // MPulseLibraryBindings
        public static class CPathSimpleAPI {
        }
        // Parent: C_CSWeaponBaseGun
        // Field count: 2
        //
        // Metadata:
        // NetworkVarNames: m_fFireTime (GameTime_t)
        public static class C_WeaponTaser {
            public const nint m_fFireTime = 0x1B40; // GameTime_t
            public const nint m_nLastAttackTick = 0x1B44; // int32
        }
        // Parent: C_PhysicsProp
        // Field count: 0
        public static class C_PhysicsPropMultiplayer {
        }
        // Parent: CInfoDynamicShadowHint
        // Field count: 2
        public static class CInfoDynamicShadowHintBox {
            public const nint m_vBoxMins = 0x580; // Vector
            public const nint m_vBoxMaxs = 0x58C; // Vector
        }
        // Parent: C_SoundOpvarSetPointEntity
        // Field count: 0
        public static class C_SoundOpvarSetPathCornerEntity {
        }
        // Parent: C_BaseEntity
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
        public static class C_EnvCubemapFog {
            public const nint m_flEndDistance = 0x568; // float32
            public const nint m_flStartDistance = 0x56C; // float32
            public const nint m_flFogFalloffExponent = 0x570; // float32
            public const nint m_bHeightFogEnabled = 0x574; // bool
            public const nint m_flFogHeightWidth = 0x578; // float32
            public const nint m_flFogHeightEnd = 0x57C; // float32
            public const nint m_flFogHeightStart = 0x580; // float32
            public const nint m_flFogHeightExponent = 0x584; // float32
            public const nint m_flLODBias = 0x588; // float32
            public const nint m_bActive = 0x58C; // bool
            public const nint m_bStartDisabled = 0x58D; // bool
            public const nint m_flFogMaxOpacity = 0x590; // float32
            public const nint m_nCubemapSourceType = 0x594; // int32
            public const nint m_hSkyMaterial = 0x598; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_iszSkyEntity = 0x5A0; // CUtlSymbolLarge
            public const nint m_hFogCubemapTexture = 0x5A8; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_bHasHeightFogEnd = 0x5B0; // bool
            public const nint m_bFirstTime = 0x5B1; // bool
        }
        // Parent: C_CSWeaponBase
        // Field count: 0
        public static class C_WeaponSawedoff {
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
        // Parent: C_ModelPointEntity
        // Field count: 16
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
            public const nint m_nUniqueID = 0xD28; // int32
            public const nint m_unAccountID = 0xD2C; // uint32
            public const nint m_unTraceID = 0xD30; // uint32
            public const nint m_rtGcTime = 0xD34; // uint32
            public const nint m_vecEndPos = 0xD38; // Vector
            public const nint m_vecStart = 0xD44; // Vector
            public const nint m_vecLeft = 0xD50; // Vector
            public const nint m_vecNormal = 0xD5C; // Vector
            public const nint m_nPlayer = 0xD68; // int32
            public const nint m_nEntity = 0xD6C; // int32
            public const nint m_nHitbox = 0xD70; // int32
            public const nint m_flCreationTime = 0xD74; // float32
            public const nint m_nTintID = 0xD78; // int32
            public const nint m_nVersion = 0xD7C; // uint8
            public const nint m_ubSignature = 0xD7D; // uint8[128]
            public const nint m_SprayRenderHelper = 0xE08; // CPlayerSprayDecalRenderHelper
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
        // Parent: C_PhysicsProp
        // Field count: 1
        //
        // Metadata:
        // MNetworkExcludeByName
        // NetworkVarNames: m_ShardDesc (shard_model_desc_t)
        public static class C_ShatterGlassShardPhysics {
            public const nint m_ShardDesc = 0x1120; // shard_model_desc_t
        }
        // Parent: C_CSWeaponBaseGun
        // Field count: 0
        public static class C_WeaponElite {
        }
        // Parent: C_BaseModelEntity
        // Field count: 1
        //
        // Metadata:
        // NetworkVarNames: m_CLightComponent (CLightComponent::Storage_t)
        public static class C_LightEntity {
            public const nint m_CLightComponent = 0xD28; // CLightComponent*
        }
        // Parent: C_BaseEntity
        // Field count: 6
        //
        // Metadata:
        // NetworkVarNames: m_flVisibilityStrength (float)
        // NetworkVarNames: m_flFogDistanceMultiplier (float)
        // NetworkVarNames: m_flFogMaxDensityMultiplier (float)
        // NetworkVarNames: m_flFadeTime (float)
        // NetworkVarNames: m_bStartDisabled (bool)
        // NetworkVarNames: m_bIsEnabled (bool)
        public static class C_PlayerVisibility {
            public const nint m_flVisibilityStrength = 0x568; // float32
            public const nint m_flFogDistanceMultiplier = 0x56C; // float32
            public const nint m_flFogMaxDensityMultiplier = 0x570; // float32
            public const nint m_flFadeTime = 0x574; // float32
            public const nint m_bStartDisabled = 0x578; // bool
            public const nint m_bIsEnabled = 0x579; // bool
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
        // Parent: CBaseAnimGraph
        // Field count: 19
        //
        // Metadata:
        // NetworkVarNames: m_flexWeight (float32)
        // NetworkVarNames: m_blinktoggle (bool)
        public static class C_BaseFlex {
            public const nint m_flexWeight = 0xF98; // C_NetworkUtlVectorBase<float32>
            public const nint m_vLookTargetPosition = 0xFB0; // Vector
            public const nint m_blinktoggle = 0xFC8; // bool
            public const nint m_nLastFlexUpdateFrameCount = 0x1028; // int32
            public const nint m_CachedViewTarget = 0x102C; // Vector
            public const nint m_nNextSceneEventId = 0x1038; // SceneEventId_t
            public const nint m_iBlink = 0x103C; // int32
            public const nint m_blinktime = 0x1040; // float32
            public const nint m_prevblinktoggle = 0x1044; // bool
            public const nint m_iJawOpen = 0x1048; // int32
            public const nint m_flJawOpenAmount = 0x104C; // float32
            public const nint m_flBlinkAmount = 0x1050; // float32
            public const nint m_iMouthAttachment = 0x1054; // AttachmentHandle_t
            public const nint m_iEyeAttachment = 0x1055; // AttachmentHandle_t
            public const nint m_bResetFlexWeightsOnModelChange = 0x1056; // bool
            public const nint m_nEyeOcclusionRendererBone = 0x1070; // int32
            public const nint m_mEyeOcclusionRendererCameraToBoneTransform = 0x1074; // matrix3x4_t
            public const nint m_vEyeOcclusionRendererHalfExtent = 0x10A4; // Vector
            public const nint m_PhonemeClasses = 0x10C0; // C_BaseFlex::Emphasized_Phoneme[3]
        }
        // Parent: C_BaseModelEntity
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
        public static class C_EnvSky {
            public const nint m_hSkyMaterial = 0xD28; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_hSkyMaterialLightingOnly = 0xD30; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_bStartDisabled = 0xD38; // bool
            public const nint m_vTintColor = 0xD39; // Color
            public const nint m_vTintColorLightingOnly = 0xD3D; // Color
            public const nint m_flBrightnessScale = 0xD44; // float32
            public const nint m_nFogType = 0xD48; // int32
            public const nint m_flFogMinStart = 0xD4C; // float32
            public const nint m_flFogMinEnd = 0xD50; // float32
            public const nint m_flFogMaxStart = 0xD54; // float32
            public const nint m_flFogMaxEnd = 0xD58; // float32
            public const nint m_bEnabled = 0xD5C; // bool
        }
        // Parent: C_PointEntity
        // Field count: 0
        public static class CInfoTarget {
        }
        // Parent: C_CSGO_TeamIntroCharacterPosition
        // Field count: 0
        public static class C_CSGO_TeamIntroCounterTerroristPosition {
        }
        // Parent: C_BreakableProp
        // Field count: 23
        //
        // Metadata:
        // NetworkVarNames: m_bUseHitboxesForRenderBox (bool)
        // NetworkVarNames: m_bUseAnimGraph (bool)
        public static class C_DynamicProp {
            public const nint m_bUseHitboxesForRenderBox = 0x1110; // bool
            public const nint m_bUseAnimGraph = 0x1111; // bool
            public const nint m_pOutputAnimBegun = 0x1118; // CEntityIOOutput
            public const nint m_pOutputAnimOver = 0x1140; // CEntityIOOutput
            public const nint m_pOutputAnimLoopCycleOver = 0x1168; // CEntityIOOutput
            public const nint m_OnAnimReachedStart = 0x1190; // CEntityIOOutput
            public const nint m_OnAnimReachedEnd = 0x11B8; // CEntityIOOutput
            public const nint m_iszIdleAnim = 0x11E0; // CUtlSymbolLarge
            public const nint m_nIdleAnimLoopMode = 0x11E8; // AnimLoopMode_t
            public const nint m_bRandomizeCycle = 0x11EC; // bool
            public const nint m_bStartDisabled = 0x11ED; // bool
            public const nint m_bFiredStartEndOutput = 0x11EE; // bool
            public const nint m_bForceNpcExclude = 0x11EF; // bool
            public const nint m_bCreateNonSolid = 0x11F0; // bool
            public const nint m_bIsOverrideProp = 0x11F1; // bool
            public const nint m_iInitialGlowState = 0x11F4; // int32
            public const nint m_nGlowRange = 0x11F8; // int32
            public const nint m_nGlowRangeMin = 0x11FC; // int32
            public const nint m_glowColor = 0x1200; // Color
            public const nint m_nGlowTeam = 0x1204; // int32
            public const nint m_iCachedFrameCount = 0x1208; // int32
            public const nint m_vecCachedRenderMins = 0x120C; // Vector
            public const nint m_vecCachedRenderMaxs = 0x1218; // Vector
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
        // Parent: C_CSWeaponBaseGun
        // Field count: 0
        public static class C_WeaponSCAR20 {
        }
        // Parent: C_BaseCSGrenade
        // Field count: 0
        public static class C_DecoyGrenade {
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MPulseProvideFeatureTag
        // MPulseLibraryBindings
        public static class CCSPointScriptExtensions_player {
        }
        // Parent: C_CS2WeaponModuleBase
        // Field count: 2
        public static class C_KeychainModule {
            public const nint m_nKeychainDefID = 0xF90; // uint32
            public const nint m_nKeychainSeed = 0xF94; // uint32
        }
        // Parent: C_BaseEntity
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
            public const nint m_iszStackName = 0x580; // CUtlSymbolLarge
            public const nint m_iszOperatorName = 0x588; // CUtlSymbolLarge
            public const nint m_iszOpvarName = 0x590; // CUtlSymbolLarge
            public const nint m_vDistanceInnerMins = 0x598; // Vector
            public const nint m_vDistanceInnerMaxs = 0x5A4; // Vector
            public const nint m_vDistanceOuterMins = 0x5B0; // Vector
            public const nint m_vDistanceOuterMaxs = 0x5BC; // Vector
            public const nint m_nAABBDirection = 0x5C8; // int32
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
        // Parent: C_GameRules
        // Field count: 0
        public static class C_SingleplayRules {
        }
        // Parent: CBaseAnimGraph
        // Field count: 25
        public static class C_LocalTempEntity {
            public const nint flags = 0xF88; // int32
            public const nint die = 0xF8C; // GameTime_t
            public const nint m_flFrameMax = 0xF90; // float32
            public const nint x = 0xF94; // float32
            public const nint y = 0xF98; // float32
            public const nint fadeSpeed = 0xF9C; // float32
            public const nint bounceFactor = 0xFA0; // float32
            public const nint hitSound = 0xFA4; // int32
            public const nint priority = 0xFA8; // int32
            public const nint tentOffset = 0xFAC; // Vector
            public const nint m_vecTempEntAngVelocity = 0xFB8; // QAngle
            public const nint tempent_renderamt = 0xFC4; // int32
            public const nint m_vecNormal = 0xFC8; // Vector
            public const nint m_flSpriteScale = 0xFD4; // float32
            public const nint m_nFlickerFrame = 0xFD8; // int32
            public const nint m_flFrameRate = 0xFDC; // float32
            public const nint m_flFrame = 0xFE0; // float32
            public const nint m_pszImpactEffect = 0xFE8; // char*
            public const nint m_pszParticleEffect = 0xFF0; // char*
            public const nint m_bParticleCollision = 0xFF8; // bool
            public const nint m_iLastCollisionFrame = 0xFFC; // int32
            public const nint m_vLastCollisionOrigin = 0x1000; // Vector
            public const nint m_vecTempEntVelocity = 0x100C; // Vector
            public const nint m_vecPrevAbsOrigin = 0x1018; // Vector
            public const nint m_vecTempEntAcceleration = 0x1024; // Vector
        }
        // Parent: None
        // Field count: 2
        public static class C_EnvWindShared__WindAveEvent_t {
            public const nint m_flStartWindSpeed = 0x0; // float32
            public const nint m_flAveWindSpeed = 0x4; // float32
        }
        // Parent: C_BaseCSGrenadeProjectile
        // Field count: 1
        //
        // Metadata:
        // NetworkVarNames: m_bIsIncGrenade (bool)
        public static class C_MolotovProjectile {
            public const nint m_bIsIncGrenade = 0x1208; // bool
        }
        // Parent: C_LightDirectionalEntity
        // Field count: 0
        public static class C_LightEnvironmentEntity {
        }
        // Parent: C_CSWeaponBaseGun
        // Field count: 0
        public static class C_WeaponUMP45 {
        }
        // Parent: C_PointEntity
        // Field count: 9
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
            public const nint m_bDisabled = 0x568; // bool
            public const nint m_nResolutionX = 0x56C; // int32
            public const nint m_nResolutionY = 0x570; // int32
            public const nint m_szLayoutFileName = 0x578; // CUtlSymbolLarge
            public const nint m_RenderAttrName = 0x580; // CUtlSymbolLarge
            public const nint m_TargetEntities = 0x588; // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
            public const nint m_nTargetChangeCount = 0x5A0; // int32
            public const nint m_vecCSSClasses = 0x5A8; // C_NetworkUtlVectorBase<CUtlSymbolLarge>
            public const nint m_bCheckCSSClasses = 0x720; // bool
        }
        // Parent: C_BaseModelEntity
        // Field count: 7
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
            public const nint m_Flags = 0xD28; // uint8
            public const nint m_LightStyle = 0xD29; // uint8
            public const nint m_Radius = 0xD2C; // float32
            public const nint m_Exponent = 0xD30; // int32
            public const nint m_InnerAngle = 0xD34; // float32
            public const nint m_OuterAngle = 0xD38; // float32
            public const nint m_SpotRadius = 0xD3C; // float32
        }
        // Parent: C_BasePlayerWeapon
        // Field count: 73
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
        public static class C_CSWeaponBase {
            public const nint m_flFireSequenceStartTime = 0x16DC; // float32
            public const nint m_nFireSequenceStartTimeChange = 0x16E0; // int32
            public const nint m_nFireSequenceStartTimeAck = 0x16E4; // int32
            public const nint m_ePlayerFireEvent = 0x16E8; // PlayerAnimEvent_t
            public const nint m_ePlayerFireEventAttackType = 0x16EC; // WeaponAttackType_t
            public const nint m_seqIdle = 0x16F0; // HSequence
            public const nint m_seqFirePrimary = 0x16F4; // HSequence
            public const nint m_seqFireSecondary = 0x16F8; // HSequence
            public const nint m_thirdPersonFireSequences = 0x1700; // CUtlVector<HSequence>
            public const nint m_hCurrentThirdPersonSequence = 0x1718; // HSequence
            public const nint m_nSilencerBoneIndex = 0x171C; // int32
            public const nint m_thirdPersonSequences = 0x1720; // HSequence[7]
            public const nint m_ClientPreviousWeaponState = 0x1758; // CSWeaponState_t
            public const nint m_iState = 0x175C; // CSWeaponState_t
            public const nint m_flCrosshairDistance = 0x1760; // float32
            public const nint m_iAmmoLastCheck = 0x1764; // int32
            public const nint m_iAlpha = 0x1768; // int32
            public const nint m_iScopeTextureID = 0x176C; // int32
            public const nint m_iCrosshairTextureID = 0x1770; // int32
            public const nint m_flGunAccuracyPositionDeprecated = 0x1774; // float32
            public const nint m_nLastEmptySoundCmdNum = 0x1778; // int32
            public const nint m_nViewModelIndex = 0x177C; // uint32
            public const nint m_bReloadsWithClips = 0x1780; // bool
            public const nint m_flTimeWeaponIdle = 0x1784; // GameTime_t
            public const nint m_bFireOnEmpty = 0x1788; // bool
            public const nint m_OnPlayerPickup = 0x1790; // CEntityIOOutput
            public const nint m_weaponMode = 0x17B8; // CSWeaponMode
            public const nint m_flTurningInaccuracyDelta = 0x17BC; // float32
            public const nint m_vecTurningInaccuracyEyeDirLast = 0x17C0; // Vector
            public const nint m_flTurningInaccuracy = 0x17CC; // float32
            public const nint m_fAccuracyPenalty = 0x17D0; // float32
            public const nint m_flLastAccuracyUpdateTime = 0x17D4; // GameTime_t
            public const nint m_fAccuracySmoothedForZoom = 0x17D8; // float32
            public const nint m_fScopeZoomEndTime = 0x17DC; // GameTime_t
            public const nint m_iRecoilIndex = 0x17E0; // int32
            public const nint m_flRecoilIndex = 0x17E4; // float32
            public const nint m_bBurstMode = 0x17E8; // bool
            public const nint m_flLastBurstModeChangeTime = 0x17EC; // GameTime_t
            public const nint m_nPostponeFireReadyTicks = 0x17F0; // GameTick_t
            public const nint m_flPostponeFireReadyFrac = 0x17F4; // float32
            public const nint m_bInReload = 0x17F8; // bool
            public const nint m_bReloadVisuallyComplete = 0x17F9; // bool
            public const nint m_flDroppedAtTime = 0x17FC; // GameTime_t
            public const nint m_bIsHauledBack = 0x1800; // bool
            public const nint m_bSilencerOn = 0x1801; // bool
            public const nint m_flTimeSilencerSwitchComplete = 0x1804; // GameTime_t
            public const nint m_iOriginalTeamNumber = 0x1808; // int32
            public const nint m_iMostRecentTeamNumber = 0x180C; // int32
            public const nint m_bDroppedNearBuyZone = 0x1810; // bool
            public const nint m_flNextAttackRenderTimeOffset = 0x1814; // float32
            public const nint m_bClearWeaponIdentifyingUGC = 0x18B0; // bool
            public const nint m_bVisualsDataSet = 0x18B1; // bool
            public const nint m_bOldFirstPersonSpectatedState = 0x18B2; // bool
            public const nint m_bUIWeapon = 0x18B3; // bool
            public const nint m_nCustomEconReloadEventId = 0x18B4; // int32
            public const nint m_nextPrevOwnerUseTime = 0x18C0; // GameTime_t
            public const nint m_hPrevOwner = 0x18C4; // CHandle<C_CSPlayerPawn>
            public const nint m_nDropTick = 0x18C8; // GameTick_t
            public const nint m_donated = 0x18EC; // bool
            public const nint m_fLastShotTime = 0x18F0; // GameTime_t
            public const nint m_bWasOwnedByCT = 0x18F4; // bool
            public const nint m_bWasOwnedByTerrorist = 0x18F5; // bool
            public const nint m_gunHeat = 0x18F8; // float32
            public const nint m_smokeAttachments = 0x18FC; // uint32
            public const nint m_lastSmokeTime = 0x1900; // GameTime_t
            public const nint m_flNextClientFireBulletTime = 0x1904; // float32
            public const nint m_flNextClientFireBulletTime_Repredict = 0x1908; // float32
            public const nint m_IronSightController = 0x19E0; // C_IronSightController
            public const nint m_iIronSightMode = 0x1A90; // int32
            public const nint m_flLastLOSTraceFailureTime = 0x1AA0; // GameTime_t
            public const nint m_iNumEmptyAttacks = 0x1AA4; // int32
            public const nint m_flLastMagDropRequestTime = 0x1B00; // GameTime_t
            public const nint m_flWatTickOffset = 0x1B04; // float32
        }
        // Parent: C_BaseModelEntity
        // Field count: 0
        public static class C_TriggerVolume {
        }
        // Parent: C_FuncBrush
        // Field count: 3
        //
        // Metadata:
        // NetworkVarNames: m_EffectName (string_t)
        // NetworkVarNames: m_bState (bool)
        public static class C_FuncElectrifiedVolume {
            public const nint m_nAmbientEffect = 0xD28; // ParticleIndex_t
            public const nint m_EffectName = 0xD30; // CUtlSymbolLarge
            public const nint m_bState = 0xD38; // bool
        }
        // Parent: CPlayer_WeaponServices
        // Field count: 5
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
        // Field count: 2
        //
        // Metadata:
        // NetworkVarNames: m_flFadeStartDist (float32)
        // NetworkVarNames: m_flFadeEndDist (float32)
        public static class C_EnvDetailController {
            public const nint m_flFadeStartDist = 0x568; // float32
            public const nint m_flFadeEndDist = 0x56C; // float32
        }
        // Parent: CEntityInstance
        // Field count: 82
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
        // NetworkVarNames: m_nPlatformType (EntityPlatformTypes_t)
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
            public const nint m_nLastThinkTick = 0x320; // GameTick_t
            public const nint m_pGameSceneNode = 0x328; // CGameSceneNode*
            public const nint m_pRenderComponent = 0x330; // CRenderComponent*
            public const nint m_pCollision = 0x338; // CCollisionProperty*
            public const nint m_iMaxHealth = 0x340; // int32
            public const nint m_iHealth = 0x344; // int32
            public const nint m_lifeState = 0x348; // uint8
            public const nint m_bTakesDamage = 0x349; // bool
            public const nint m_nTakeDamageFlags = 0x350; // TakeDamageFlags_t
            public const nint m_nPlatformType = 0x358; // EntityPlatformTypes_t
            public const nint m_ubInterpolationFrame = 0x359; // uint8
            public const nint m_hSceneObjectController = 0x35C; // CHandle<C_BaseEntity>
            public const nint m_nNoInterpolationTick = 0x360; // int32
            public const nint m_nVisibilityNoInterpolationTick = 0x364; // int32
            public const nint m_flProxyRandomValue = 0x368; // float32
            public const nint m_iEFlags = 0x36C; // int32
            public const nint m_nWaterType = 0x370; // uint8
            public const nint m_bInterpolateEvenWithNoModel = 0x371; // bool
            public const nint m_bPredictionEligible = 0x372; // bool
            public const nint m_bApplyLayerMatchIDToModel = 0x373; // bool
            public const nint m_tokLayerMatchID = 0x374; // CUtlStringToken
            public const nint m_nSubclassID = 0x378; // CUtlStringToken
            public const nint m_nSimulationTick = 0x388; // int32
            public const nint m_iCurrentThinkContext = 0x38C; // int32
            public const nint m_aThinkFunctions = 0x390; // CUtlVector<thinkfunc_t>
            public const nint m_bDisabledContextThinks = 0x3A8; // bool
            public const nint m_flAnimTime = 0x3AC; // float32
            public const nint m_flSimulationTime = 0x3B0; // float32
            public const nint m_nSceneObjectOverrideFlags = 0x3B4; // uint8
            public const nint m_bHasSuccessfullyInterpolated = 0x3B5; // bool
            public const nint m_bHasAddedVarsToInterpolation = 0x3B6; // bool
            public const nint m_bRenderEvenWhenNotSuccessfullyInterpolated = 0x3B7; // bool
            public const nint m_nInterpolationLatchDirtyFlags = 0x3B8; // int32[2]
            public const nint m_ListEntry = 0x3C0; // uint16[11]
            public const nint m_flCreateTime = 0x3D8; // GameTime_t
            public const nint m_flSpeed = 0x3DC; // float32
            public const nint m_EntClientFlags = 0x3E0; // uint16
            public const nint m_bClientSideRagdoll = 0x3E2; // bool
            public const nint m_iTeamNum = 0x3E3; // uint8
            public const nint m_spawnflags = 0x3E4; // uint32
            public const nint m_nNextThinkTick = 0x3E8; // GameTick_t
            public const nint m_fFlags = 0x3EC; // uint32
            public const nint m_vecAbsVelocity = 0x3F0; // Vector
            public const nint m_vecVelocity = 0x400; // CNetworkVelocityVector
            public const nint m_vecBaseVelocity = 0x430; // Vector
            public const nint m_hEffectEntity = 0x43C; // CHandle<C_BaseEntity>
            public const nint m_hOwnerEntity = 0x440; // CHandle<C_BaseEntity>
            public const nint m_MoveCollide = 0x444; // MoveCollide_t
            public const nint m_MoveType = 0x445; // MoveType_t
            public const nint m_nActualMoveType = 0x446; // MoveType_t
            public const nint m_flWaterLevel = 0x448; // float32
            public const nint m_fEffects = 0x44C; // uint32
            public const nint m_hGroundEntity = 0x450; // CHandle<C_BaseEntity>
            public const nint m_nGroundBodyIndex = 0x454; // int32
            public const nint m_flFriction = 0x458; // float32
            public const nint m_flElasticity = 0x45C; // float32
            public const nint m_flGravityScale = 0x460; // float32
            public const nint m_flTimeScale = 0x464; // float32
            public const nint m_bAnimatedEveryTick = 0x468; // bool
            public const nint m_flNavIgnoreUntilTime = 0x46C; // GameTime_t
            public const nint m_hThink = 0x470; // uint16
            public const nint m_fBBoxVisFlags = 0x480; // uint8
            public const nint m_bPredictable = 0x481; // bool
            public const nint m_bRenderWithViewModels = 0x482; // bool
            public const nint m_nSplitUserPlayerPredictionSlot = 0x484; // CSplitScreenSlot
            public const nint m_nFirstPredictableCommand = 0x488; // int32
            public const nint m_nLastPredictableCommand = 0x48C; // int32
            public const nint m_hOldMoveParent = 0x490; // CHandle<C_BaseEntity>
            public const nint m_Particles = 0x498; // CParticleProperty
            public const nint m_vecPredictedScriptFloats = 0x4C0; // CUtlVector<float32>
            public const nint m_vecPredictedScriptFloatIDs = 0x4D8; // CUtlVector<int32>
            public const nint m_nNextScriptVarRecordID = 0x508; // int32
            public const nint m_vecAngVelocity = 0x518; // QAngle
            public const nint m_DataChangeEventRef = 0x524; // int32
            public const nint m_dependencies = 0x528; // CUtlVector<CEntityHandle>
            public const nint m_nCreationTick = 0x540; // int32
            public const nint m_bAnimTimeChanged = 0x54D; // bool
            public const nint m_bSimulationTimeChanged = 0x54E; // bool
            public const nint m_sUniqueHammerID = 0x558; // CUtlString
            public const nint m_nBloodType = 0x560; // BloodType
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
        // Parent: C_CS2WeaponModuleBase
        // Field count: 1
        public static class C_StattrakModule {
            public const nint m_bKnife = 0xF90; // bool
        }
        // Parent: C_BreakableProp
        // Field count: 1
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
            public const nint m_bAwake = 0x1110; // bool
        }
        // Parent: CBaseProp
        // Field count: 29
        //
        // Metadata:
        // NetworkVarNames: m_CPropDataComponent (CPropDataComponent::Storage_t)
        // NetworkVarNames: m_noGhostCollision (bool)
        public static class C_BreakableProp {
            public const nint m_CPropDataComponent = 0xFC8; // CPropDataComponent
            public const nint m_OnBreak = 0x1008; // CEntityIOOutput
            public const nint m_OnHealthChanged = 0x1030; // CEntityOutputTemplate<float32>
            public const nint m_OnTakeDamage = 0x1058; // CEntityIOOutput
            public const nint m_impactEnergyScale = 0x1080; // float32
            public const nint m_iMinHealthDmg = 0x1084; // int32
            public const nint m_flPressureDelay = 0x1088; // float32
            public const nint m_flDefBurstScale = 0x108C; // float32
            public const nint m_vDefBurstOffset = 0x1090; // Vector
            public const nint m_hBreaker = 0x109C; // CHandle<C_BaseEntity>
            public const nint m_PerformanceMode = 0x10A0; // PerformanceMode_t
            public const nint m_flPreventDamageBeforeTime = 0x10A4; // GameTime_t
            public const nint m_BreakableContentsType = 0x10A8; // BreakableContentsType_t
            public const nint m_strBreakableContentsPropGroupOverride = 0x10B0; // CUtlString
            public const nint m_strBreakableContentsParticleOverride = 0x10B8; // CUtlString
            public const nint m_bHasBreakPiecesOrCommands = 0x10C0; // bool
            public const nint m_explodeDamage = 0x10C4; // float32
            public const nint m_explodeRadius = 0x10C8; // float32
            public const nint m_explosionDelay = 0x10D0; // float32
            public const nint m_explosionBuildupSound = 0x10D8; // CUtlSymbolLarge
            public const nint m_explosionCustomEffect = 0x10E0; // CUtlSymbolLarge
            public const nint m_explosionCustomSound = 0x10E8; // CUtlSymbolLarge
            public const nint m_explosionModifier = 0x10F0; // CUtlSymbolLarge
            public const nint m_hPhysicsAttacker = 0x10F8; // CHandle<C_BasePlayerPawn>
            public const nint m_flLastPhysicsInfluenceTime = 0x10FC; // GameTime_t
            public const nint m_flDefaultFadeScale = 0x1100; // float32
            public const nint m_hLastAttacker = 0x1104; // CHandle<C_BaseEntity>
            public const nint m_hFlareEnt = 0x1108; // CHandle<C_BaseEntity>
            public const nint m_noGhostCollision = 0x110C; // bool
        }
        // Parent: C_BaseToggle
        // Field count: 0
        //
        // Metadata:
        // MNetworkIncludeByName
        // MNetworkIncludeByName
        // MNetworkOverride
        public static class C_FuncMoveLinear {
        }
        // Parent: C_BaseModelEntity
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
        public static class C_Beam {
            public const nint m_flFrameRate = 0xD28; // float32
            public const nint m_flHDRColorScale = 0xD2C; // float32
            public const nint m_flFireTime = 0xD30; // GameTime_t
            public const nint m_flDamage = 0xD34; // float32
            public const nint m_nNumBeamEnts = 0xD38; // uint8
            public const nint m_queryHandleHalo = 0xD3C; // int32
            public const nint m_hBaseMaterial = 0xD60; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_nHaloIndex = 0xD68; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_nBeamType = 0xD70; // BeamType_t
            public const nint m_nBeamFlags = 0xD74; // uint32
            public const nint m_hAttachEntity = 0xD78; // CHandle<C_BaseEntity>[10]
            public const nint m_nAttachIndex = 0xDA0; // AttachmentHandle_t[10]
            public const nint m_fWidth = 0xDAC; // float32
            public const nint m_fEndWidth = 0xDB0; // float32
            public const nint m_fFadeLength = 0xDB4; // float32
            public const nint m_fHaloScale = 0xDB8; // float32
            public const nint m_fAmplitude = 0xDBC; // float32
            public const nint m_fStartFrame = 0xDC0; // float32
            public const nint m_fSpeed = 0xDC4; // float32
            public const nint m_flFrame = 0xDC8; // float32
            public const nint m_nClipStyle = 0xDCC; // BeamClipStyle_t
            public const nint m_bTurnedOff = 0xDD0; // bool
            public const nint m_vecEndPos = 0xDD4; // Vector
            public const nint m_hEndEntity = 0xDE0; // CHandle<C_BaseEntity>
        }
        // Parent: C_BaseEntity
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
        public static class C_CSGO_TeamPreviewCharacterPosition {
            public const nint m_nVariant = 0x568; // int32
            public const nint m_nRandom = 0x56C; // int32
            public const nint m_nOrdinal = 0x570; // int32
            public const nint m_sWeaponName = 0x578; // CUtlString
            public const nint m_xuid = 0x580; // uint64
            public const nint m_agentItem = 0x588; // C_EconItemView
            public const nint m_glovesItem = 0x9D0; // C_EconItemView
            public const nint m_weaponItem = 0xE18; // C_EconItemView
        }
        // Parent: C_DynamicProp
        // Field count: 0
        public static class C_DynamicPropAlias_prop_dynamic_override {
        }
        // Parent: C_PointEntity
        // Field count: 9
        //
        // Metadata:
        // NetworkVarNames: m_iszOverlayNames (string_t)
        // NetworkVarNames: m_flOverlayTimes (float32)
        // NetworkVarNames: m_flStartTime (GameTime_t)
        // NetworkVarNames: m_iDesiredOverlay (int32)
        // NetworkVarNames: m_bIsActive (bool)
        public static class C_EnvScreenOverlay {
            public const nint m_iszOverlayNames = 0x568; // CUtlSymbolLarge[10]
            public const nint m_flOverlayTimes = 0x5B8; // float32[10]
            public const nint m_flStartTime = 0x5E0; // GameTime_t
            public const nint m_iDesiredOverlay = 0x5E4; // int32
            public const nint m_bIsActive = 0x5E8; // bool
            public const nint m_bWasActive = 0x5E9; // bool
            public const nint m_iCachedDesiredOverlay = 0x5EC; // int32
            public const nint m_iCurrentOverlay = 0x5F0; // int32
            public const nint m_flCurrentOverlayTime = 0x5F4; // GameTime_t
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
        // Parent: C_ModelPointEntity
        // Field count: 17
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
        public static class C_PointWorldText {
            public const nint m_bForceRecreateNextUpdate = 0xD30; // bool
            public const nint m_messageText = 0xD48; // char[512]
            public const nint m_FontName = 0xF48; // char[64]
            public const nint m_BackgroundMaterialName = 0xF88; // char[64]
            public const nint m_bEnabled = 0xFC8; // bool
            public const nint m_bFullbright = 0xFC9; // bool
            public const nint m_flWorldUnitsPerPx = 0xFCC; // float32
            public const nint m_flFontSize = 0xFD0; // float32
            public const nint m_flDepthOffset = 0xFD4; // float32
            public const nint m_bDrawBackground = 0xFD8; // bool
            public const nint m_flBackgroundBorderWidth = 0xFDC; // float32
            public const nint m_flBackgroundBorderHeight = 0xFE0; // float32
            public const nint m_flBackgroundWorldToUV = 0xFE4; // float32
            public const nint m_Color = 0xFE8; // Color
            public const nint m_nJustifyHorizontal = 0xFEC; // PointWorldTextJustifyHorizontal_t
            public const nint m_nJustifyVertical = 0xFF0; // PointWorldTextJustifyVertical_t
            public const nint m_nReorientMode = 0xFF4; // PointWorldTextReorientMode_t
        }
        // Parent: CBasePlayerController
        // Field count: 66
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
            public const nint m_pInGameMoneyServices = 0x720; // CCSPlayerController_InGameMoneyServices*
            public const nint m_pInventoryServices = 0x728; // CCSPlayerController_InventoryServices*
            public const nint m_pActionTrackingServices = 0x730; // CCSPlayerController_ActionTrackingServices*
            public const nint m_pDamageServices = 0x738; // CCSPlayerController_DamageServices*
            public const nint m_iPing = 0x740; // uint32
            public const nint m_bHasCommunicationAbuseMute = 0x744; // bool
            public const nint m_szCrosshairCodes = 0x748; // CUtlSymbolLarge
            public const nint m_iPendingTeamNum = 0x750; // uint8
            public const nint m_flForceTeamTime = 0x754; // GameTime_t
            public const nint m_iCompTeammateColor = 0x758; // int32
            public const nint m_bEverPlayedOnTeam = 0x75C; // bool
            public const nint m_flPreviousForceJoinTeamTime = 0x760; // GameTime_t
            public const nint m_szClan = 0x768; // CUtlSymbolLarge
            public const nint m_sSanitizedPlayerName = 0x770; // CUtlString
            public const nint m_iCoachingTeam = 0x778; // int32
            public const nint m_nPlayerDominated = 0x780; // uint64
            public const nint m_nPlayerDominatingMe = 0x788; // uint64
            public const nint m_iCompetitiveRanking = 0x790; // int32
            public const nint m_iCompetitiveWins = 0x794; // int32
            public const nint m_iCompetitiveRankType = 0x798; // int8
            public const nint m_iCompetitiveRankingPredicted_Win = 0x79C; // int32
            public const nint m_iCompetitiveRankingPredicted_Loss = 0x7A0; // int32
            public const nint m_iCompetitiveRankingPredicted_Tie = 0x7A4; // int32
            public const nint m_nEndMatchNextMapVote = 0x7A8; // int32
            public const nint m_unActiveQuestId = 0x7AC; // uint16
            public const nint m_nQuestProgressReason = 0x7B0; // QuestProgress::Reason
            public const nint m_unPlayerTvControlFlags = 0x7B4; // uint32
            public const nint m_iDraftIndex = 0x7E0; // int32
            public const nint m_msQueuedModeDisconnectionTimestamp = 0x7E4; // uint32
            public const nint m_uiAbandonRecordedReason = 0x7E8; // uint32
            public const nint m_eNetworkDisconnectionReason = 0x7EC; // uint32
            public const nint m_bCannotBeKicked = 0x7F0; // bool
            public const nint m_bEverFullyConnected = 0x7F1; // bool
            public const nint m_bAbandonAllowsSurrender = 0x7F2; // bool
            public const nint m_bAbandonOffersInstantSurrender = 0x7F3; // bool
            public const nint m_bDisconnection1MinWarningPrinted = 0x7F4; // bool
            public const nint m_bScoreReported = 0x7F5; // bool
            public const nint m_nDisconnectionTick = 0x7F8; // int32
            public const nint m_bControllingBot = 0x808; // bool
            public const nint m_bHasControlledBotThisRound = 0x809; // bool
            public const nint m_bHasBeenControlledByPlayerThisRound = 0x80A; // bool
            public const nint m_nBotsControlledThisRound = 0x80C; // int32
            public const nint m_bCanControlObservedBot = 0x810; // bool
            public const nint m_hPlayerPawn = 0x814; // CHandle<C_CSPlayerPawn>
            public const nint m_hObserverPawn = 0x818; // CHandle<C_CSObserverPawn>
            public const nint m_bPawnIsAlive = 0x81C; // bool
            public const nint m_iPawnHealth = 0x820; // uint32
            public const nint m_iPawnArmor = 0x824; // int32
            public const nint m_bPawnHasDefuser = 0x828; // bool
            public const nint m_bPawnHasHelmet = 0x829; // bool
            public const nint m_nPawnCharacterDefIndex = 0x82A; // uint16
            public const nint m_iPawnLifetimeStart = 0x82C; // int32
            public const nint m_iPawnLifetimeEnd = 0x830; // int32
            public const nint m_iPawnBotDifficulty = 0x834; // int32
            public const nint m_hOriginalControllerOfCurrentPawn = 0x838; // CHandle<CCSPlayerController>
            public const nint m_iScore = 0x83C; // int32
            public const nint m_recentKillQueue = 0x840; // uint8[8]
            public const nint m_nFirstKill = 0x848; // uint8
            public const nint m_nKillCount = 0x849; // uint8
            public const nint m_bMvpNoMusic = 0x84A; // bool
            public const nint m_eMvpReason = 0x84C; // int32
            public const nint m_iMusicKitID = 0x850; // int32
            public const nint m_iMusicKitMVPs = 0x854; // int32
            public const nint m_iMVPs = 0x858; // int32
            public const nint m_bIsPlayerNameDirty = 0x85C; // bool
            public const nint m_bFireBulletsSeedSynchronized = 0x85D; // bool
        }
        // Parent: C_CSWeaponBaseGun
        // Field count: 0
        public static class C_WeaponFiveSeven {
        }
        // Parent: C_DynamicProp
        // Field count: 7
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
            public const nint m_eDoorState = 0x1238; // DoorState_t
            public const nint m_modelChanged = 0x123C; // bool
            public const nint m_bLocked = 0x123D; // bool
            public const nint m_closedPosition = 0x1240; // Vector
            public const nint m_closedAngles = 0x124C; // QAngle
            public const nint m_hMaster = 0x1258; // CHandle<C_BasePropDoor>
            public const nint m_vWhereToSetLightingOrigin = 0x125C; // Vector
        }
        // Parent: C_CSGO_TeamSelectCharacterPosition
        // Field count: 0
        public static class C_CSGO_TeamSelectTerroristPosition {
        }
        // Parent: C_CS2WeaponModuleBase
        // Field count: 1
        public static class C_NametagModule {
            public const nint m_strNametagString = 0xF90; // CUtlString
        }
        // Parent: C_BreakableProp
        // Field count: 6
        public static class C_PhysPropClientside {
            public const nint m_flTouchDelta = 0x1110; // GameTime_t
            public const nint m_fDeathTime = 0x1114; // GameTime_t
            public const nint m_inertiaScale = 0x1118; // float32
            public const nint m_vecDamagePosition = 0x111C; // Vector
            public const nint m_vecDamageDirection = 0x1128; // Vector
            public const nint m_nDamageType = 0x1134; // DamageTypes_t
        }
        // Parent: C_CSGO_TeamPreviewCamera
        // Field count: 0
        public static class C_CSGO_TeamSelectCamera {
        }
        // Parent: C_BaseEntity
        // Field count: 4
        //
        // Metadata:
        // NetworkVarNames: m_bDisabled (bool)
        // NetworkVarNames: m_iszSoundAreaType (string_t)
        // NetworkVarNames: m_vPos (Vector)
        public static class C_SoundAreaEntityBase {
            public const nint m_bDisabled = 0x568; // bool
            public const nint m_bWasEnabled = 0x570; // bool
            public const nint m_iszSoundAreaType = 0x578; // CUtlSymbolLarge
            public const nint m_vPos = 0x580; // Vector
        }
        // Parent: C_BaseEntity
        // Field count: 3
        //
        // Metadata:
        // NetworkVarNames: m_fog (fogparams_t)
        public static class C_FogController {
            public const nint m_fog = 0x568; // fogparams_t
            public const nint m_bUseAngles = 0x5D0; // bool
            public const nint m_iChangedVariables = 0x5D4; // int32
        }
        // Parent: CPlayerPawnComponent
        // Field count: 0
        public static class CPlayer_ItemServices {
        }
        // Parent: C_BaseModelEntity
        // Field count: 0
        public static class C_FuncBrush {
        }
        // Parent: C_BaseEntity
        // Field count: 8
        //
        // Metadata:
        // NetworkVarNames: m_worldName (string_t)
        // NetworkVarNames: m_layerName (string_t)
        // NetworkVarNames: m_bWorldLayerVisible (bool)
        // NetworkVarNames: m_bEntitiesSpawned (bool)
        public static class CInfoWorldLayer {
            public const nint m_pOutputOnEntitiesSpawned = 0x568; // CEntityIOOutput
            public const nint m_worldName = 0x590; // CUtlSymbolLarge
            public const nint m_layerName = 0x598; // CUtlSymbolLarge
            public const nint m_bWorldLayerVisible = 0x5A0; // bool
            public const nint m_bEntitiesSpawned = 0x5A1; // bool
            public const nint m_bCreateAsChildSpawnGroup = 0x5A2; // bool
            public const nint m_hLayerSpawnGroup = 0x5A4; // uint32
            public const nint m_bWorldLayerActuallyVisible = 0x5A8; // bool
        }
        // Parent: C_BaseCombatCharacter
        // Field count: 0
        public static class C_NetTestBaseCombatCharacter {
        }
        // Parent: CBaseAnimGraph
        // Field count: 2
        public static class C_PhysMagnet {
            public const nint m_aAttachedObjectsFromServer = 0xF88; // CUtlVector<int32>
            public const nint m_aAttachedObjects = 0xFA0; // CUtlVector<CHandle<C_BaseEntity>>
        }
        // Parent: C_BaseModelEntity
        // Field count: 8
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
            public const nint m_vecMoveDirEntitySpace = 0xD30; // Vector
            public const nint m_flTargetSpeed = 0xD3C; // float32
            public const nint m_nTransitionStartTick = 0xD40; // GameTick_t
            public const nint m_nTransitionDurationTicks = 0xD44; // int32
            public const nint m_flTransitionStartSpeed = 0xD48; // float32
            public const nint m_hConveyorModels = 0xD50; // C_NetworkUtlVectorBase<CHandle<C_BaseEntity>>
            public const nint m_flCurrentConveyorOffset = 0xD68; // float32
            public const nint m_flCurrentConveyorSpeed = 0xD6C; // float32
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
        // Parent: CBaseAnimGraph
        // Field count: 16
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
            public const nint m_vecLastFacing = 0xF90; // Vector
            public const nint m_nViewModelIndex = 0xF9C; // uint32
            public const nint m_nAnimationParity = 0xFA0; // uint32
            public const nint m_flAnimationStartTime = 0xFA4; // float32
            public const nint m_hWeapon = 0xFA8; // CHandle<C_BasePlayerWeapon>
            public const nint m_sVMName = 0xFB0; // CUtlSymbolLarge
            public const nint m_sAnimationPrefix = 0xFB8; // CUtlSymbolLarge
            public const nint m_iCameraAttachment = 0xFC0; // AttachmentHandle_t
            public const nint m_vecLastCameraAngles = 0xFC4; // QAngle
            public const nint m_previousElapsedDuration = 0xFD0; // float32
            public const nint m_previousCycle = 0xFD4; // float32
            public const nint m_nOldAnimationParity = 0xFD8; // int32
            public const nint m_hOldLayerSequence = 0xFDC; // HSequence
            public const nint m_oldLayer = 0xFE0; // int32
            public const nint m_oldLayerStartTime = 0xFE4; // float32
            public const nint m_hControlPanel = 0xFE8; // CHandle<C_BaseEntity>
        }
        // Parent: C_BaseEntity
        // Field count: 0
        public static class C_PortraitWorldCallbackHandler {
        }
        // Parent: CHostageRescueZoneShim
        // Field count: 0
        public static class CHostageRescueZone {
        }
        // Parent: C_CSWeaponBaseGun
        // Field count: 0
        public static class C_WeaponNegev {
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
        // Parent: C_MolotovGrenade
        // Field count: 0
        public static class C_IncendiaryGrenade {
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
        // Parent: C_CSPlayerPawnBase
        // Field count: 1
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
            public const nint m_hDetectParentChange = 0x1510; // CEntityHandle
        }
        // Parent: C_BaseEntity
        // Field count: 3
        //
        // Metadata:
        // NetworkVarNames: m_hEntAttached (CHandle<C_BaseEntity>)
        // NetworkVarNames: m_bCheapEffect (bool)
        public static class C_EntityFlame {
            public const nint m_hEntAttached = 0x568; // CHandle<C_BaseEntity>
            public const nint m_hOldAttached = 0x590; // CHandle<C_BaseEntity>
            public const nint m_bCheapEffect = 0x594; // bool
        }
        // Parent: C_BaseModelEntity
        // Field count: 0
        public static class C_Breakable {
        }
        // Parent: CPlayer_ObserverServices
        // Field count: 8
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
        // Field count: 0
        public static class C_TintController {
        }
        // Parent: CPlayerPawnComponent
        // Field count: 0
        public static class CPlayer_AutoaimServices {
        }
        // Parent: C_BaseCombatCharacter
        // Field count: 23
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
            public const nint m_entitySpottedState = 0x11A8; // EntitySpottedState_t
            public const nint m_leader = 0x11C0; // CHandle<C_BaseEntity>
            public const nint m_reuseTimer = 0x11C8; // CountdownTimer
            public const nint m_vel = 0x11E0; // Vector
            public const nint m_isRescued = 0x11EC; // bool
            public const nint m_jumpedThisFrame = 0x11ED; // bool
            public const nint m_nHostageState = 0x11F0; // int32
            public const nint m_bHandsHaveBeenCut = 0x11F4; // bool
            public const nint m_hHostageGrabber = 0x11F8; // CHandle<C_CSPlayerPawn>
            public const nint m_fLastGrabTime = 0x11FC; // GameTime_t
            public const nint m_vecGrabbedPos = 0x1200; // Vector
            public const nint m_flRescueStartTime = 0x120C; // GameTime_t
            public const nint m_flGrabSuccessTime = 0x1210; // GameTime_t
            public const nint m_flDropStartTime = 0x1214; // GameTime_t
            public const nint m_flDeadOrRescuedTime = 0x1218; // GameTime_t
            public const nint m_blinkTimer = 0x1220; // CountdownTimer
            public const nint m_lookAt = 0x1238; // Vector
            public const nint m_lookAroundTimer = 0x1248; // CountdownTimer
            public const nint m_isInit = 0x1260; // bool
            public const nint m_eyeAttachment = 0x1261; // AttachmentHandle_t
            public const nint m_chestAttachment = 0x1262; // AttachmentHandle_t
            public const nint m_pPredictionOwner = 0x1268; // CBasePlayerController*
            public const nint m_fNewestAlphaThinkTime = 0x1270; // GameTime_t
        }
        // Parent: C_BaseModelEntity
        // Field count: 24
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
            public const nint m_hSpriteMaterial = 0xD28; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_hAttachedToEntity = 0xD30; // CHandle<C_BaseEntity>
            public const nint m_nAttachment = 0xD34; // AttachmentHandle_t
            public const nint m_flSpriteFramerate = 0xD38; // float32
            public const nint m_flFrame = 0xD3C; // float32
            public const nint m_flDieTime = 0xD40; // GameTime_t
            public const nint m_nBrightness = 0xD50; // uint32
            public const nint m_flBrightnessDuration = 0xD54; // float32
            public const nint m_flSpriteScale = 0xD58; // float32
            public const nint m_flScaleDuration = 0xD5C; // float32
            public const nint m_bWorldSpaceScale = 0xD60; // bool
            public const nint m_flGlowProxySize = 0xD64; // float32
            public const nint m_flHDRColorScale = 0xD68; // float32
            public const nint m_flLastTime = 0xD6C; // GameTime_t
            public const nint m_flMaxFrame = 0xD70; // float32
            public const nint m_flStartScale = 0xD74; // float32
            public const nint m_flDestScale = 0xD78; // float32
            public const nint m_flScaleTimeStart = 0xD7C; // GameTime_t
            public const nint m_nStartBrightness = 0xD80; // int32
            public const nint m_nDestBrightness = 0xD84; // int32
            public const nint m_flBrightnessTimeStart = 0xD88; // GameTime_t
            public const nint m_hOldSpriteMaterial = 0xD90; // CWeakHandle<InfoForResourceTypeIMaterial2>
            public const nint m_nSpriteWidth = 0xE30; // int32
            public const nint m_nSpriteHeight = 0xE34; // int32
        }
        // Parent: C_CSWeaponBaseGun
        // Field count: 0
        public static class C_WeaponM4A1Silencer {
        }
        // Parent: C_PointEntity
        // Field count: 9
        public static class CMapInfo {
            public const nint m_iBuyingStatus = 0x568; // int32
            public const nint m_flBombRadius = 0x56C; // float32
            public const nint m_iPetPopulation = 0x570; // int32
            public const nint m_bUseNormalSpawnsForDM = 0x574; // bool
            public const nint m_bDisableAutoGeneratedDMSpawns = 0x575; // bool
            public const nint m_flBotMaxVisionDistance = 0x578; // float32
            public const nint m_iHostageCount = 0x57C; // int32
            public const nint m_bFadePlayerVisibilityFarZ = 0x580; // bool
            public const nint m_bRainTraceToSkyEnabled = 0x581; // bool
        }
        // Parent: CBaseAnimGraph
        // Field count: 30
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
        // NetworkVarNames: m_AttributeManager (CAttributeContainer)
        public static class C_PlantedC4 {
            public const nint m_bBombTicking = 0xF90; // bool
            public const nint m_nBombSite = 0xF94; // int32
            public const nint m_nSourceSoundscapeHash = 0xF98; // int32
            public const nint m_entitySpottedState = 0xFA0; // EntitySpottedState_t
            public const nint m_flNextGlow = 0xFB8; // GameTime_t
            public const nint m_flNextBeep = 0xFBC; // GameTime_t
            public const nint m_flC4Blow = 0xFC0; // GameTime_t
            public const nint m_bCannotBeDefused = 0xFC4; // bool
            public const nint m_bHasExploded = 0xFC5; // bool
            public const nint m_flTimerLength = 0xFC8; // float32
            public const nint m_bBeingDefused = 0xFCC; // bool
            public const nint m_bTriggerWarning = 0xFD0; // float32
            public const nint m_bExplodeWarning = 0xFD4; // float32
            public const nint m_bC4Activated = 0xFD8; // bool
            public const nint m_bTenSecWarning = 0xFD9; // bool
            public const nint m_flDefuseLength = 0xFDC; // float32
            public const nint m_flDefuseCountDown = 0xFE0; // GameTime_t
            public const nint m_bBombDefused = 0xFE4; // bool
            public const nint m_hBombDefuser = 0xFE8; // CHandle<C_CSPlayerPawn>
            public const nint m_hControlPanel = 0xFEC; // CHandle<C_BaseEntity>
            public const nint m_AttributeManager = 0xFF0; // C_AttributeContainer
            public const nint m_hDefuserMultimeter = 0x1498; // CHandle<C_Multimeter>
            public const nint m_flNextRadarFlashTime = 0x149C; // GameTime_t
            public const nint m_bRadarFlash = 0x14A0; // bool
            public const nint m_pBombDefuser = 0x14A4; // CHandle<C_CSPlayerPawn>
            public const nint m_fLastDefuseTime = 0x14A8; // GameTime_t
            public const nint m_pPredictionOwner = 0x14B0; // CBasePlayerController*
            public const nint m_vecC4ExplodeSpectatePos = 0x14B8; // Vector
            public const nint m_vecC4ExplodeSpectateAng = 0x14C4; // QAngle
            public const nint m_flC4ExplodeSpectateDuration = 0x14D0; // float32
        }
        // Parent: CBaseAnimGraph
        // Field count: 8
        //
        // Metadata:
        // NetworkVarNames: m_ragPos (Vector)
        // NetworkVarNames: m_ragAngles (QAngle)
        // NetworkVarNames: m_flBlendWeight (float32)
        // NetworkVarNames: m_hRagdollSource (EHANDLE)
        public static class C_RagdollProp {
            public const nint m_ragPos = 0xF90; // C_NetworkUtlVectorBase<Vector>
            public const nint m_ragAngles = 0xFA8; // C_NetworkUtlVectorBase<QAngle>
            public const nint m_flBlendWeight = 0xFC0; // float32
            public const nint m_hRagdollSource = 0xFC4; // CHandle<C_BaseEntity>
            public const nint m_iEyeAttachment = 0xFC8; // AttachmentHandle_t
            public const nint m_flBlendWeightCurrent = 0xFCC; // float32
            public const nint m_parentPhysicsBoneIndices = 0xFD0; // CUtlVector<int32>
            public const nint m_worldSpaceBoneComputationOrder = 0xFE8; // CUtlVector<int32>
        }
        // Parent: C_CSGO_TeamPreviewCamera
        // Field count: 0
        public static class C_CSGO_TerroristTeamIntroCamera {
        }
        // Parent: C_BaseEntity
        // Field count: 7
        //
        // Metadata:
        // NetworkVarNames: m_iActiveIssueIndex (int)
        // NetworkVarNames: m_iOnlyTeamToVote (int)
        // NetworkVarNames: m_nVoteOptionCount (int)
        // NetworkVarNames: m_nPotentialVotes (int)
        // NetworkVarNames: m_bIsYesNoVote (bool)
        public static class C_VoteController {
            public const nint m_iActiveIssueIndex = 0x578; // int32
            public const nint m_iOnlyTeamToVote = 0x57C; // int32
            public const nint m_nVoteOptionCount = 0x580; // int32[5]
            public const nint m_nPotentialVotes = 0x594; // int32
            public const nint m_bVotesDirty = 0x598; // bool
            public const nint m_bTypeDirty = 0x599; // bool
            public const nint m_bIsYesNoVote = 0x59A; // bool
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
        // Parent: C_DynamicProp
        // Field count: 7
        //
        // Metadata:
        // NetworkVarNames: m_jumpedThisFrame (bool)
        // NetworkVarNames: m_leader (CHandle<CCSPlayerPawn>)
        // NetworkVarNames: m_AttributeManager (CAttributeContainer)
        public static class C_Chicken {
            public const nint m_hHolidayHatAddon = 0x1230; // CHandle<CBaseAnimGraph>
            public const nint m_jumpedThisFrame = 0x1234; // bool
            public const nint m_leader = 0x1238; // CHandle<C_CSPlayerPawn>
            public const nint m_AttributeManager = 0x1240; // C_AttributeContainer
            public const nint m_bAttributesInitialized = 0x16E8; // bool
            public const nint m_hWaterWakeParticles = 0x16EC; // ParticleIndex_t
            public const nint m_bIsPreviewModel = 0x16F0; // bool
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // NetworkVarNames: m_Transforms (CTransform)
        // NetworkVarNames: m_hOwner (EHANDLE)
        public static class PhysicsRagdollPose_t {
            public const nint m_Transforms = 0x8; // C_NetworkUtlVectorBase<CTransform>
            public const nint m_hOwner = 0x20; // CHandle<C_BaseEntity>
        }
    }
}
