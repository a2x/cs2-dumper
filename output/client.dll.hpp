// Generated using https://github.com/a2x/cs2-dumper
// 2024-05-25 01:48:22.657979400 UTC

#pragma once

#include <cstddef>

namespace cs2_dumper {
    namespace schemas {
        // Module: client.dll
        // Classes count: 423
        // Enums count: 7
        namespace client_dll {
            // Alignment: 4
            // Members count: 15
            enum class CompositeMaterialInputLooseVariableType_t : uint32_t {
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
            };
            // Alignment: 4
            // Members count: 7
            enum class CompositeMaterialInputTextureType_t : uint32_t {
                INPUT_TEXTURE_TYPE_DEFAULT = 0x0,
                INPUT_TEXTURE_TYPE_NORMALMAP = 0x1,
                INPUT_TEXTURE_TYPE_COLOR = 0x2,
                INPUT_TEXTURE_TYPE_MASKS = 0x3,
                INPUT_TEXTURE_TYPE_ROUGHNESS = 0x4,
                INPUT_TEXTURE_TYPE_PEARLESCENCE_MASK = 0x5,
                INPUT_TEXTURE_TYPE_AO = 0x6
            };
            // Alignment: 4
            // Members count: 6
            enum class CompositeMaterialInputContainerSourceType_t : uint32_t {
                CONTAINER_SOURCE_TYPE_TARGET_MATERIAL = 0x0,
                CONTAINER_SOURCE_TYPE_MATERIAL_FROM_TARGET_ATTR = 0x1,
                CONTAINER_SOURCE_TYPE_SPECIFIC_MATERIAL = 0x2,
                CONTAINER_SOURCE_TYPE_LOOSE_VARIABLES = 0x3,
                CONTAINER_SOURCE_TYPE_VARIABLE_FROM_TARGET_ATTR = 0x4,
                CONTAINER_SOURCE_TYPE_TARGET_INSTANCE_MATERIAL = 0x5
            };
            // Alignment: 4
            // Members count: 10
            enum class CompMatPropertyMutatorType_t : uint32_t {
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
            };
            // Alignment: 4
            // Members count: 2
            enum class CompositeMaterialVarSystemVar_t : uint32_t {
                COMPMATSYSVAR_COMPOSITETIME = 0x0,
                COMPMATSYSVAR_EMPTY_RESOURCE_SPACER = 0x1
            };
            // Alignment: 4
            // Members count: 6
            enum class CompositeMaterialMatchFilterType_t : uint32_t {
                MATCH_FILTER_MATERIAL_ATTRIBUTE_EXISTS = 0x0,
                MATCH_FILTER_MATERIAL_SHADER = 0x1,
                MATCH_FILTER_MATERIAL_NAME_SUBSTR = 0x2,
                MATCH_FILTER_MATERIAL_ATTRIBUTE_EQUALS = 0x3,
                MATCH_FILTER_MATERIAL_PROPERTY_EXISTS = 0x4,
                MATCH_FILTER_MATERIAL_PROPERTY_EQUALS = 0x5
            };
            // Alignment: 4
            // Members count: 3
            enum class CompMatPropertyMutatorConditionType_t : uint32_t {
                COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_EXISTS = 0x0,
                COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_VALUE_EXISTS = 0x1,
                COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_VALUE_EQUALS = 0x2
            };
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            namespace CCSPlayerControllerAPI {
            }
            // Parent: C_CSGO_TeamPreviewCharacterPosition
            // Fields count: 0
            namespace C_CSGO_TeamSelectCharacterPosition {
            }
            // Parent: C_BaseCSGrenade
            // Fields count: 0
            namespace C_HEGrenade {
            }
            // Parent: C_BaseToggle
            // Fields count: 0
            namespace C_FuncMover {
            }
            // Parent: C_BaseTrigger
            // Fields count: 0
            namespace C_TriggerLerpObject {
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
            namespace CCSPlayer_MovementServices {
                constexpr std::ptrdiff_t m_flMaxFallVelocity = 0x218; // float32
                constexpr std::ptrdiff_t m_vecLadderNormal = 0x21C; // Vector
                constexpr std::ptrdiff_t m_nLadderSurfacePropIndex = 0x228; // int32
                constexpr std::ptrdiff_t m_flDuckAmount = 0x22C; // float32
                constexpr std::ptrdiff_t m_flDuckSpeed = 0x230; // float32
                constexpr std::ptrdiff_t m_bDuckOverride = 0x234; // bool
                constexpr std::ptrdiff_t m_bDesiresDuck = 0x235; // bool
                constexpr std::ptrdiff_t m_flDuckOffset = 0x238; // float32
                constexpr std::ptrdiff_t m_nDuckTimeMsecs = 0x23C; // uint32
                constexpr std::ptrdiff_t m_nDuckJumpTimeMsecs = 0x240; // uint32
                constexpr std::ptrdiff_t m_nJumpTimeMsecs = 0x244; // uint32
                constexpr std::ptrdiff_t m_flLastDuckTime = 0x248; // float32
                constexpr std::ptrdiff_t m_vecLastPositionAtFullCrouchSpeed = 0x258; // Vector2D
                constexpr std::ptrdiff_t m_duckUntilOnGround = 0x260; // bool
                constexpr std::ptrdiff_t m_bHasWalkMovedSinceLastJump = 0x261; // bool
                constexpr std::ptrdiff_t m_bInStuckTest = 0x262; // bool
                constexpr std::ptrdiff_t m_flStuckCheckTime = 0x270; // float32[64][2]
                constexpr std::ptrdiff_t m_nTraceCount = 0x470; // int32
                constexpr std::ptrdiff_t m_StuckLast = 0x474; // int32
                constexpr std::ptrdiff_t m_bSpeedCropped = 0x478; // bool
                constexpr std::ptrdiff_t m_nOldWaterLevel = 0x47C; // int32
                constexpr std::ptrdiff_t m_flWaterEntryTime = 0x480; // float32
                constexpr std::ptrdiff_t m_vecForward = 0x484; // Vector
                constexpr std::ptrdiff_t m_vecLeft = 0x490; // Vector
                constexpr std::ptrdiff_t m_vecUp = 0x49C; // Vector
                constexpr std::ptrdiff_t m_nGameCodeHasMovedPlayerAfterCommand = 0x4A8; // int32
                constexpr std::ptrdiff_t m_bOldJumpPressed = 0x4AC; // bool
                constexpr std::ptrdiff_t m_flJumpPressedTime = 0x4B0; // float32
                constexpr std::ptrdiff_t m_flJumpUntil = 0x4B4; // float32
                constexpr std::ptrdiff_t m_flJumpVel = 0x4B8; // float32
                constexpr std::ptrdiff_t m_fStashGrenadeParameterWhen = 0x4BC; // GameTime_t
                constexpr std::ptrdiff_t m_nButtonDownMaskPrev = 0x4C0; // uint64
                constexpr std::ptrdiff_t m_flOffsetTickCompleteTime = 0x4C8; // float32
                constexpr std::ptrdiff_t m_flOffsetTickStashedSpeed = 0x4CC; // float32
                constexpr std::ptrdiff_t m_flStamina = 0x4D0; // float32
                constexpr std::ptrdiff_t m_flHeightAtJumpStart = 0x4D4; // float32
                constexpr std::ptrdiff_t m_flMaxJumpHeightThisJump = 0x4D8; // float32
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
                constexpr std::ptrdiff_t origin = 0xC; // Vector
                constexpr std::ptrdiff_t bClip3DSkyBoxNearToWorldFar = 0x18; // bool
                constexpr std::ptrdiff_t flClip3DSkyBoxNearToWorldFarOffset = 0x1C; // float32
                constexpr std::ptrdiff_t fog = 0x20; // fogparams_t
                constexpr std::ptrdiff_t m_nWorldGroupID = 0x88; // WorldGroupId_t
            }
            // Parent: C_CSWeaponBaseGun
            // Fields count: 0
            namespace C_WeaponM4A1 {
            }
            // Parent: C_EconEntity
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_bShouldGlow (bool)
            namespace C_Item {
                constexpr std::ptrdiff_t m_bShouldGlow = 0x15B0; // bool
                constexpr std::ptrdiff_t m_pReticleHintTextName = 0x15B1; // char[256]
            }
            // Parent: C_SoundEventEntity
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_vecCornerPairsNetworked (SoundeventPathCornerPairNetworked_t)
            namespace C_SoundEventPathCornerEntity {
                constexpr std::ptrdiff_t m_vecCornerPairsNetworked = 0x548; // C_NetworkUtlVectorBase<SoundeventPathCornerPairNetworked_t>
            }
            // Parent: C_CSWeaponBaseGun
            // Fields count: 0
            namespace C_WeaponM249 {
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
            namespace C_CSGameRules {
                constexpr std::ptrdiff_t m_bFreezePeriod = 0x40; // bool
                constexpr std::ptrdiff_t m_bWarmupPeriod = 0x41; // bool
                constexpr std::ptrdiff_t m_fWarmupPeriodEnd = 0x44; // GameTime_t
                constexpr std::ptrdiff_t m_fWarmupPeriodStart = 0x48; // GameTime_t
                constexpr std::ptrdiff_t m_bServerPaused = 0x4C; // bool
                constexpr std::ptrdiff_t m_bTerroristTimeOutActive = 0x4D; // bool
                constexpr std::ptrdiff_t m_bCTTimeOutActive = 0x4E; // bool
                constexpr std::ptrdiff_t m_flTerroristTimeOutRemaining = 0x50; // float32
                constexpr std::ptrdiff_t m_flCTTimeOutRemaining = 0x54; // float32
                constexpr std::ptrdiff_t m_nTerroristTimeOuts = 0x58; // int32
                constexpr std::ptrdiff_t m_nCTTimeOuts = 0x5C; // int32
                constexpr std::ptrdiff_t m_bTechnicalTimeOut = 0x60; // bool
                constexpr std::ptrdiff_t m_bMatchWaitingForResume = 0x61; // bool
                constexpr std::ptrdiff_t m_iRoundTime = 0x64; // int32
                constexpr std::ptrdiff_t m_fMatchStartTime = 0x68; // float32
                constexpr std::ptrdiff_t m_fRoundStartTime = 0x6C; // GameTime_t
                constexpr std::ptrdiff_t m_flRestartRoundTime = 0x70; // GameTime_t
                constexpr std::ptrdiff_t m_bGameRestart = 0x74; // bool
                constexpr std::ptrdiff_t m_flGameStartTime = 0x78; // float32
                constexpr std::ptrdiff_t m_timeUntilNextPhaseStarts = 0x7C; // float32
                constexpr std::ptrdiff_t m_gamePhase = 0x80; // int32
                constexpr std::ptrdiff_t m_totalRoundsPlayed = 0x84; // int32
                constexpr std::ptrdiff_t m_nRoundsPlayedThisPhase = 0x88; // int32
                constexpr std::ptrdiff_t m_nOvertimePlaying = 0x8C; // int32
                constexpr std::ptrdiff_t m_iHostagesRemaining = 0x90; // int32
                constexpr std::ptrdiff_t m_bAnyHostageReached = 0x94; // bool
                constexpr std::ptrdiff_t m_bMapHasBombTarget = 0x95; // bool
                constexpr std::ptrdiff_t m_bMapHasRescueZone = 0x96; // bool
                constexpr std::ptrdiff_t m_bMapHasBuyZone = 0x97; // bool
                constexpr std::ptrdiff_t m_bIsQueuedMatchmaking = 0x98; // bool
                constexpr std::ptrdiff_t m_nQueuedMatchmakingMode = 0x9C; // int32
                constexpr std::ptrdiff_t m_bIsValveDS = 0xA0; // bool
                constexpr std::ptrdiff_t m_bLogoMap = 0xA1; // bool
                constexpr std::ptrdiff_t m_bPlayAllStepSoundsOnServer = 0xA2; // bool
                constexpr std::ptrdiff_t m_iSpectatorSlotCount = 0xA4; // int32
                constexpr std::ptrdiff_t m_MatchDevice = 0xA8; // int32
                constexpr std::ptrdiff_t m_bHasMatchStarted = 0xAC; // bool
                constexpr std::ptrdiff_t m_nNextMapInMapgroup = 0xB0; // int32
                constexpr std::ptrdiff_t m_szTournamentEventName = 0xB4; // char[512]
                constexpr std::ptrdiff_t m_szTournamentEventStage = 0x2B4; // char[512]
                constexpr std::ptrdiff_t m_szMatchStatTxt = 0x4B4; // char[512]
                constexpr std::ptrdiff_t m_szTournamentPredictionsTxt = 0x6B4; // char[512]
                constexpr std::ptrdiff_t m_nTournamentPredictionsPct = 0x8B4; // int32
                constexpr std::ptrdiff_t m_flCMMItemDropRevealStartTime = 0x8B8; // GameTime_t
                constexpr std::ptrdiff_t m_flCMMItemDropRevealEndTime = 0x8BC; // GameTime_t
                constexpr std::ptrdiff_t m_bIsDroppingItems = 0x8C0; // bool
                constexpr std::ptrdiff_t m_bIsQuestEligible = 0x8C1; // bool
                constexpr std::ptrdiff_t m_bIsHltvActive = 0x8C2; // bool
                constexpr std::ptrdiff_t m_arrProhibitedItemIndices = 0x8C4; // uint16[100]
                constexpr std::ptrdiff_t m_arrTournamentActiveCasterAccounts = 0x98C; // uint32[4]
                constexpr std::ptrdiff_t m_numBestOfMaps = 0x99C; // int32
                constexpr std::ptrdiff_t m_nHalloweenMaskListSeed = 0x9A0; // int32
                constexpr std::ptrdiff_t m_bBombDropped = 0x9A4; // bool
                constexpr std::ptrdiff_t m_bBombPlanted = 0x9A5; // bool
                constexpr std::ptrdiff_t m_iRoundWinStatus = 0x9A8; // int32
                constexpr std::ptrdiff_t m_eRoundWinReason = 0x9AC; // int32
                constexpr std::ptrdiff_t m_bTCantBuy = 0x9B0; // bool
                constexpr std::ptrdiff_t m_bCTCantBuy = 0x9B1; // bool
                constexpr std::ptrdiff_t m_iMatchStats_RoundResults = 0x9B4; // int32[30]
                constexpr std::ptrdiff_t m_iMatchStats_PlayersAlive_CT = 0xA2C; // int32[30]
                constexpr std::ptrdiff_t m_iMatchStats_PlayersAlive_T = 0xAA4; // int32[30]
                constexpr std::ptrdiff_t m_TeamRespawnWaveTimes = 0xB1C; // float32[32]
                constexpr std::ptrdiff_t m_flNextRespawnWave = 0xB9C; // GameTime_t[32]
                constexpr std::ptrdiff_t m_nServerQuestID = 0xC1C; // int32
                constexpr std::ptrdiff_t m_vMinimapMins = 0xC20; // Vector
                constexpr std::ptrdiff_t m_vMinimapMaxs = 0xC2C; // Vector
                constexpr std::ptrdiff_t m_MinimapVerticalSectionHeights = 0xC38; // float32[8]
                constexpr std::ptrdiff_t m_bSpawnedTerrorHuntHeavy = 0xC58; // bool
                constexpr std::ptrdiff_t m_nEndMatchMapGroupVoteTypes = 0xC5C; // int32[10]
                constexpr std::ptrdiff_t m_nEndMatchMapGroupVoteOptions = 0xC84; // int32[10]
                constexpr std::ptrdiff_t m_nEndMatchMapVoteWinner = 0xCAC; // int32
                constexpr std::ptrdiff_t m_iNumConsecutiveCTLoses = 0xCB0; // int32
                constexpr std::ptrdiff_t m_iNumConsecutiveTerroristLoses = 0xCB4; // int32
                constexpr std::ptrdiff_t m_bMarkClientStopRecordAtRoundEnd = 0xCD0; // bool
                constexpr std::ptrdiff_t m_nMatchAbortedEarlyReason = 0xD28; // int32
                constexpr std::ptrdiff_t m_bHasTriggeredRoundStartMusic = 0xD2C; // bool
                constexpr std::ptrdiff_t m_bSwitchingTeamsAtRoundReset = 0xD2D; // bool
                constexpr std::ptrdiff_t m_pGameModeRules = 0xD48; // CCSGameModeRules*
                constexpr std::ptrdiff_t m_RetakeRules = 0xD50; // C_RetakeGameRules
                constexpr std::ptrdiff_t m_nMatchEndCount = 0xE68; // uint8
                constexpr std::ptrdiff_t m_nTTeamIntroVariant = 0xE6C; // int32
                constexpr std::ptrdiff_t m_nCTTeamIntroVariant = 0xE70; // int32
                constexpr std::ptrdiff_t m_bTeamIntroPeriod = 0xE74; // bool
                constexpr std::ptrdiff_t m_iRoundEndWinnerTeam = 0xE78; // int32
                constexpr std::ptrdiff_t m_eRoundEndReason = 0xE7C; // int32
                constexpr std::ptrdiff_t m_bRoundEndShowTimerDefend = 0xE80; // bool
                constexpr std::ptrdiff_t m_iRoundEndTimerTime = 0xE84; // int32
                constexpr std::ptrdiff_t m_sRoundEndFunFactToken = 0xE88; // CUtlString
                constexpr std::ptrdiff_t m_iRoundEndFunFactPlayerSlot = 0xE90; // CPlayerSlot
                constexpr std::ptrdiff_t m_iRoundEndFunFactData1 = 0xE94; // int32
                constexpr std::ptrdiff_t m_iRoundEndFunFactData2 = 0xE98; // int32
                constexpr std::ptrdiff_t m_iRoundEndFunFactData3 = 0xE9C; // int32
                constexpr std::ptrdiff_t m_sRoundEndMessage = 0xEA0; // CUtlString
                constexpr std::ptrdiff_t m_iRoundEndPlayerCount = 0xEA8; // int32
                constexpr std::ptrdiff_t m_bRoundEndNoMusic = 0xEAC; // bool
                constexpr std::ptrdiff_t m_iRoundEndLegacy = 0xEB0; // int32
                constexpr std::ptrdiff_t m_nRoundEndCount = 0xEB4; // uint8
                constexpr std::ptrdiff_t m_iRoundStartRoundNumber = 0xEB8; // int32
                constexpr std::ptrdiff_t m_nRoundStartCount = 0xEBC; // uint8
                constexpr std::ptrdiff_t m_flLastPerfSampleTime = 0x4EC8; // float64
            }
            // Parent: CBodyComponent
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_skeletonInstance (CSkeletonInstance)
            namespace CBodyComponentSkeletonInstance {
                constexpr std::ptrdiff_t m_skeletonInstance = 0x50; // CSkeletonInstance
            }
            // Parent: C_CSWeaponBaseGun
            // Fields count: 0
            namespace C_WeaponCZ75a {
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
            namespace C_BaseModelEntity {
                constexpr std::ptrdiff_t m_CRenderComponent = 0xA18; // CRenderComponent*
                constexpr std::ptrdiff_t m_CHitboxComponent = 0xA20; // CHitboxComponent
                constexpr std::ptrdiff_t m_bInitModelEffects = 0xA68; // bool
                constexpr std::ptrdiff_t m_bIsStaticProp = 0xA69; // bool
                constexpr std::ptrdiff_t m_nLastAddDecal = 0xA6C; // int32
                constexpr std::ptrdiff_t m_nDecalsAdded = 0xA70; // int32
                constexpr std::ptrdiff_t m_iOldHealth = 0xA74; // int32
                constexpr std::ptrdiff_t m_nRenderMode = 0xA78; // RenderMode_t
                constexpr std::ptrdiff_t m_nRenderFX = 0xA79; // RenderFx_t
                constexpr std::ptrdiff_t m_bAllowFadeInView = 0xA7A; // bool
                constexpr std::ptrdiff_t m_clrRender = 0xA7B; // Color
                constexpr std::ptrdiff_t m_vecRenderAttributes = 0xA80; // C_UtlVectorEmbeddedNetworkVar<EntityRenderAttribute_t>
                constexpr std::ptrdiff_t m_bRenderToCubemaps = 0xAE8; // bool
                constexpr std::ptrdiff_t m_Collision = 0xAF0; // CCollisionProperty
                constexpr std::ptrdiff_t m_Glow = 0xBA0; // CGlowProperty
                constexpr std::ptrdiff_t m_flGlowBackfaceMult = 0xBF8; // float32
                constexpr std::ptrdiff_t m_fadeMinDist = 0xBFC; // float32
                constexpr std::ptrdiff_t m_fadeMaxDist = 0xC00; // float32
                constexpr std::ptrdiff_t m_flFadeScale = 0xC04; // float32
                constexpr std::ptrdiff_t m_flShadowStrength = 0xC08; // float32
                constexpr std::ptrdiff_t m_nObjectCulling = 0xC0C; // uint8
                constexpr std::ptrdiff_t m_nAddDecal = 0xC10; // int32
                constexpr std::ptrdiff_t m_vDecalPosition = 0xC14; // Vector
                constexpr std::ptrdiff_t m_vDecalForwardAxis = 0xC20; // Vector
                constexpr std::ptrdiff_t m_flDecalHealBloodRate = 0xC2C; // float32
                constexpr std::ptrdiff_t m_flDecalHealHeightRate = 0xC30; // float32
                constexpr std::ptrdiff_t m_ConfigEntitiesToPropagateMaterialDecalsTo = 0xC38; // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
                constexpr std::ptrdiff_t m_vecViewOffset = 0xC50; // CNetworkViewOffsetVector
                constexpr std::ptrdiff_t m_pClientAlphaProperty = 0xC80; // CClientAlphaProperty*
                constexpr std::ptrdiff_t m_ClientOverrideTint = 0xC88; // Color
                constexpr std::ptrdiff_t m_bUseClientOverrideTint = 0xC8C; // bool
            }
            // Parent: C_BaseTrigger
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_source (string_t)
            // NetworkVarNames: m_destination (string_t)
            namespace C_FootstepControl {
                constexpr std::ptrdiff_t m_source = 0xCD0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_destination = 0xCD8; // CUtlSymbolLarge
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
            namespace C_PointClientUIHUD {
                constexpr std::ptrdiff_t m_bCheckCSSClasses = 0xD00; // bool
                constexpr std::ptrdiff_t m_bIgnoreInput = 0xE80; // bool
                constexpr std::ptrdiff_t m_flWidth = 0xE84; // float32
                constexpr std::ptrdiff_t m_flHeight = 0xE88; // float32
                constexpr std::ptrdiff_t m_flDPI = 0xE8C; // float32
                constexpr std::ptrdiff_t m_flInteractDistance = 0xE90; // float32
                constexpr std::ptrdiff_t m_flDepthOffset = 0xE94; // float32
                constexpr std::ptrdiff_t m_unOwnerContext = 0xE98; // uint32
                constexpr std::ptrdiff_t m_unHorizontalAlign = 0xE9C; // uint32
                constexpr std::ptrdiff_t m_unVerticalAlign = 0xEA0; // uint32
                constexpr std::ptrdiff_t m_unOrientation = 0xEA4; // uint32
                constexpr std::ptrdiff_t m_bAllowInteractionFromAllSceneWorlds = 0xEA8; // bool
                constexpr std::ptrdiff_t m_vecCSSClasses = 0xEB0; // C_NetworkUtlVectorBase<CUtlSymbolLarge>
            }
            // Parent: C_BaseModelEntity
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_flLightScale (float32)
            // NetworkVarNames: m_Radius (float32)
            namespace C_SpotlightEnd {
                constexpr std::ptrdiff_t m_flLightScale = 0xCC8; // float32
                constexpr std::ptrdiff_t m_Radius = 0xCCC; // float32
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
            namespace C_PointCamera {
                constexpr std::ptrdiff_t m_FOV = 0x548; // float32
                constexpr std::ptrdiff_t m_Resolution = 0x54C; // float32
                constexpr std::ptrdiff_t m_bFogEnable = 0x550; // bool
                constexpr std::ptrdiff_t m_FogColor = 0x551; // Color
                constexpr std::ptrdiff_t m_flFogStart = 0x558; // float32
                constexpr std::ptrdiff_t m_flFogEnd = 0x55C; // float32
                constexpr std::ptrdiff_t m_flFogMaxDensity = 0x560; // float32
                constexpr std::ptrdiff_t m_bActive = 0x564; // bool
                constexpr std::ptrdiff_t m_bUseScreenAspectRatio = 0x565; // bool
                constexpr std::ptrdiff_t m_flAspectRatio = 0x568; // float32
                constexpr std::ptrdiff_t m_bNoSky = 0x56C; // bool
                constexpr std::ptrdiff_t m_fBrightness = 0x570; // float32
                constexpr std::ptrdiff_t m_flZFar = 0x574; // float32
                constexpr std::ptrdiff_t m_flZNear = 0x578; // float32
                constexpr std::ptrdiff_t m_bCanHLTVUse = 0x57C; // bool
                constexpr std::ptrdiff_t m_bDofEnabled = 0x57D; // bool
                constexpr std::ptrdiff_t m_flDofNearBlurry = 0x580; // float32
                constexpr std::ptrdiff_t m_flDofNearCrisp = 0x584; // float32
                constexpr std::ptrdiff_t m_flDofFarCrisp = 0x588; // float32
                constexpr std::ptrdiff_t m_flDofFarBlurry = 0x58C; // float32
                constexpr std::ptrdiff_t m_flDofTiltToGround = 0x590; // float32
                constexpr std::ptrdiff_t m_TargetFOV = 0x594; // float32
                constexpr std::ptrdiff_t m_DegreesPerSecond = 0x598; // float32
                constexpr std::ptrdiff_t m_bIsOn = 0x59C; // bool
                constexpr std::ptrdiff_t m_pNext = 0x5A0; // C_PointCamera*
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            namespace C_CSPlayerPawnAPI {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            namespace CCSPointScriptExtensions_weapon_cs_base {
            }
            // Parent: C_LightEntity
            // Fields count: 0
            namespace C_LightSpotEntity {
            }
            // Parent: C_BaseEntity
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_EnvWindShared (CEnvWindShared)
            namespace C_EnvWind {
                constexpr std::ptrdiff_t m_EnvWindShared = 0x548; // C_EnvWindShared
            }
            // Parent: C_BaseEntity
            // Fields count: 0
            namespace C_GameRulesProxy {
            }
            // Parent: C_BaseFlex
            // Fields count: 7
            //
            // Metadata:
            // MNetworkExcludeByUserGroup
            // NetworkVarNames: m_hMyWearables (CHandle<C_EconWearable>)
            // NetworkVarNames: m_flFieldOfView (float)
            namespace C_BaseCombatCharacter {
                constexpr std::ptrdiff_t m_hMyWearables = 0x1068; // C_NetworkUtlVectorBase<CHandle<C_EconWearable>>
                constexpr std::ptrdiff_t m_leftFootAttachment = 0x1080; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_rightFootAttachment = 0x1081; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_nWaterWakeMode = 0x1084; // C_BaseCombatCharacter::WaterWakeMode_t
                constexpr std::ptrdiff_t m_flWaterWorldZ = 0x1088; // float32
                constexpr std::ptrdiff_t m_flWaterNextTraceTime = 0x108C; // float32
                constexpr std::ptrdiff_t m_flFieldOfView = 0x1090; // float32
            }
            // Parent: C_BaseCSGrenadeProjectile
            // Fields count: 0
            namespace C_FlashbangProjectile {
            }
            // Parent: C_SoundEventEntity
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_flRadius (float)
            namespace C_SoundEventSphereEntity {
                constexpr std::ptrdiff_t m_flRadius = 0x548; // float32
            }
            // Parent: CPlayerPawnComponent
            // Fields count: 0
            namespace CPlayer_ViewModelServices {
            }
            // Parent: CCSGO_WingmanIntroCharacterPosition
            // Fields count: 0
            namespace CCSGO_WingmanIntroCounterTerroristPosition {
            }
            // Parent: C_DynamicProp
            // Fields count: 0
            namespace C_DynamicPropAlias_cable_dynamic {
            }
            // Parent: C_PointEntity
            // Fields count: 0
            namespace C_InfoInstructorHintHostageRescueZone {
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
            namespace C_SceneEntity {
                constexpr std::ptrdiff_t m_bIsPlayingBack = 0x550; // bool
                constexpr std::ptrdiff_t m_bPaused = 0x551; // bool
                constexpr std::ptrdiff_t m_bMultiplayer = 0x552; // bool
                constexpr std::ptrdiff_t m_bAutogenerated = 0x553; // bool
                constexpr std::ptrdiff_t m_flForceClientTime = 0x554; // float32
                constexpr std::ptrdiff_t m_nSceneStringIndex = 0x558; // uint16
                constexpr std::ptrdiff_t m_bClientOnly = 0x55A; // bool
                constexpr std::ptrdiff_t m_hOwner = 0x55C; // CHandle<C_BaseFlex>
                constexpr std::ptrdiff_t m_hActorList = 0x560; // C_NetworkUtlVectorBase<CHandle<C_BaseFlex>>
                constexpr std::ptrdiff_t m_bWasPlaying = 0x578; // bool
                constexpr std::ptrdiff_t m_QueuedEvents = 0x588; // CUtlVector<C_SceneEntity::QueuedEvents_t>
                constexpr std::ptrdiff_t m_flCurrentTime = 0x5A0; // float32
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
            namespace CPlayer_CameraServices {
                constexpr std::ptrdiff_t m_vecCsViewPunchAngle = 0x40; // QAngle
                constexpr std::ptrdiff_t m_nCsViewPunchAngleTick = 0x4C; // GameTick_t
                constexpr std::ptrdiff_t m_flCsViewPunchAngleTickRatio = 0x50; // float32
                constexpr std::ptrdiff_t m_PlayerFog = 0x58; // C_fogplayerparams_t
                constexpr std::ptrdiff_t m_hColorCorrectionCtrl = 0x98; // CHandle<C_ColorCorrection>
                constexpr std::ptrdiff_t m_hViewEntity = 0x9C; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_hTonemapController = 0xA0; // CHandle<C_TonemapController2>
                constexpr std::ptrdiff_t m_audio = 0xA8; // audioparams_t
                constexpr std::ptrdiff_t m_PostProcessingVolumes = 0x120; // C_NetworkUtlVectorBase<CHandle<C_PostProcessingVolume>>
                constexpr std::ptrdiff_t m_flOldPlayerZ = 0x138; // float32
                constexpr std::ptrdiff_t m_flOldPlayerViewOffsetZ = 0x13C; // float32
                constexpr std::ptrdiff_t m_CurrentFog = 0x140; // fogparams_t
                constexpr std::ptrdiff_t m_hOldFogController = 0x1A8; // CHandle<C_FogController>
                constexpr std::ptrdiff_t m_bOverrideFogColor = 0x1AC; // bool[5]
                constexpr std::ptrdiff_t m_OverrideFogColor = 0x1B1; // Color[5]
                constexpr std::ptrdiff_t m_bOverrideFogStartEnd = 0x1C5; // bool[5]
                constexpr std::ptrdiff_t m_fOverrideFogStart = 0x1CC; // float32[5]
                constexpr std::ptrdiff_t m_fOverrideFogEnd = 0x1E0; // float32[5]
                constexpr std::ptrdiff_t m_hActivePostProcessingVolume = 0x1F4; // CHandle<C_PostProcessingVolume>
                constexpr std::ptrdiff_t m_angDemoViewAngles = 0x1F8; // QAngle
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
            namespace C_BaseCSGrenade {
                constexpr std::ptrdiff_t m_bClientPredictDelete = 0x1A80; // bool
                constexpr std::ptrdiff_t m_bRedraw = 0x1A81; // bool
                constexpr std::ptrdiff_t m_bIsHeldByPlayer = 0x1A82; // bool
                constexpr std::ptrdiff_t m_bPinPulled = 0x1A83; // bool
                constexpr std::ptrdiff_t m_bJumpThrow = 0x1A84; // bool
                constexpr std::ptrdiff_t m_bThrowAnimating = 0x1A85; // bool
                constexpr std::ptrdiff_t m_fThrowTime = 0x1A88; // GameTime_t
                constexpr std::ptrdiff_t m_flThrowStrength = 0x1A8C; // float32
                constexpr std::ptrdiff_t m_flThrowStrengthApproach = 0x1A90; // float32
                constexpr std::ptrdiff_t m_fDropTime = 0x1A94; // GameTime_t
                constexpr std::ptrdiff_t m_fPinPullTime = 0x1A98; // GameTime_t
                constexpr std::ptrdiff_t m_bJustPulledPin = 0x1A9C; // bool
                constexpr std::ptrdiff_t m_nNextHoldTick = 0x1AA0; // GameTick_t
                constexpr std::ptrdiff_t m_flNextHoldFrac = 0x1AA4; // float32
                constexpr std::ptrdiff_t m_hSwitchToWeaponAfterThrow = 0x1AA8; // CHandle<C_CSWeaponBase>
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
            namespace C_FuncMonitor {
                constexpr std::ptrdiff_t m_targetCamera = 0xCC8; // CUtlString
                constexpr std::ptrdiff_t m_nResolutionEnum = 0xCD0; // int32
                constexpr std::ptrdiff_t m_bRenderShadows = 0xCD4; // bool
                constexpr std::ptrdiff_t m_bUseUniqueColorTarget = 0xCD5; // bool
                constexpr std::ptrdiff_t m_brushModelName = 0xCD8; // CUtlString
                constexpr std::ptrdiff_t m_hTargetCamera = 0xCE0; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_bEnabled = 0xCE4; // bool
                constexpr std::ptrdiff_t m_bDraw3DSkybox = 0xCE5; // bool
            }
            // Parent: C_BaseTrigger
            // Fields count: 0
            namespace C_TriggerMultiple {
            }
            // Parent: None
            // Fields count: 1
            namespace C_RopeKeyframe__CPhysicsDelegate {
                constexpr std::ptrdiff_t m_pKeyframe = 0x8; // C_RopeKeyframe*
            }
            // Parent: CEntityComponent
            // Fields count: 2
            namespace CBodyComponent {
                constexpr std::ptrdiff_t m_pSceneNode = 0x8; // CGameSceneNode*
                constexpr std::ptrdiff_t __m_pChainEntity = 0x20; // CNetworkVarChainer
            }
            // Parent: C_SoundAreaEntityBase
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_flRadius (float)
            namespace C_SoundAreaEntitySphere {
                constexpr std::ptrdiff_t m_flRadius = 0x570; // float32
            }
            // Parent: CPlayer_MovementServices
            // Fields count: 0
            namespace CCSObserver_MovementServices {
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
            namespace C_LightGlow {
                constexpr std::ptrdiff_t m_nHorizontalSize = 0xCC8; // uint32
                constexpr std::ptrdiff_t m_nVerticalSize = 0xCCC; // uint32
                constexpr std::ptrdiff_t m_nMinDist = 0xCD0; // uint32
                constexpr std::ptrdiff_t m_nMaxDist = 0xCD4; // uint32
                constexpr std::ptrdiff_t m_nOuterMaxDist = 0xCD8; // uint32
                constexpr std::ptrdiff_t m_flGlowProxySize = 0xCDC; // float32
                constexpr std::ptrdiff_t m_flHDRColorScale = 0xCE0; // float32
                constexpr std::ptrdiff_t m_GlowOverlay = 0xCE8; // C_LightGlowOverlay
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
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_hOwner (CEntityHandle)
            // NetworkVarNames: m_name (CUtlStringToken)
            namespace CGameSceneNodeHandle {
                constexpr std::ptrdiff_t m_hOwner = 0x8; // CEntityHandle
                constexpr std::ptrdiff_t m_name = 0xC; // CUtlStringToken
            }
            // Parent: CBaseAnimGraph
            // Fields count: 14
            namespace C_ClientRagdoll {
                constexpr std::ptrdiff_t m_bFadeOut = 0xED0; // bool
                constexpr std::ptrdiff_t m_bImportant = 0xED1; // bool
                constexpr std::ptrdiff_t m_flEffectTime = 0xED4; // GameTime_t
                constexpr std::ptrdiff_t m_gibDespawnTime = 0xED8; // GameTime_t
                constexpr std::ptrdiff_t m_iCurrentFriction = 0xEDC; // int32
                constexpr std::ptrdiff_t m_iMinFriction = 0xEE0; // int32
                constexpr std::ptrdiff_t m_iMaxFriction = 0xEE4; // int32
                constexpr std::ptrdiff_t m_iFrictionAnimState = 0xEE8; // int32
                constexpr std::ptrdiff_t m_bReleaseRagdoll = 0xEEC; // bool
                constexpr std::ptrdiff_t m_iEyeAttachment = 0xEED; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_bFadingOut = 0xEEE; // bool
                constexpr std::ptrdiff_t m_flScaleEnd = 0xEF0; // float32[10]
                constexpr std::ptrdiff_t m_flScaleTimeStart = 0xF18; // GameTime_t[10]
                constexpr std::ptrdiff_t m_flScaleTimeEnd = 0xF40; // GameTime_t[10]
            }
            // Parent: C_BaseEntity
            // Fields count: 1
            namespace C_GlobalLight {
                constexpr std::ptrdiff_t m_WindClothForceHandle = 0xA10; // uint16
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
            namespace C_CSPlayerResource {
                constexpr std::ptrdiff_t m_bHostageAlive = 0x548; // bool[12]
                constexpr std::ptrdiff_t m_isHostageFollowingSomeone = 0x554; // bool[12]
                constexpr std::ptrdiff_t m_iHostageEntityIDs = 0x560; // CEntityIndex[12]
                constexpr std::ptrdiff_t m_bombsiteCenterA = 0x590; // Vector
                constexpr std::ptrdiff_t m_bombsiteCenterB = 0x59C; // Vector
                constexpr std::ptrdiff_t m_hostageRescueX = 0x5A8; // int32[4]
                constexpr std::ptrdiff_t m_hostageRescueY = 0x5B8; // int32[4]
                constexpr std::ptrdiff_t m_hostageRescueZ = 0x5C8; // int32[4]
                constexpr std::ptrdiff_t m_bEndMatchNextMapAllVoted = 0x5D8; // bool
                constexpr std::ptrdiff_t m_foundGoalPositions = 0x5D9; // bool
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
                constexpr std::ptrdiff_t m_modelState = 0x170; // CModelState
                constexpr std::ptrdiff_t m_bIsAnimationEnabled = 0x3A0; // bool
                constexpr std::ptrdiff_t m_bUseParentRenderBounds = 0x3A1; // bool
                constexpr std::ptrdiff_t m_bDisableSolidCollisionsForHierarchy = 0x3A2; // bool
                constexpr std::ptrdiff_t m_bDirtyMotionType = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bIsGeneratingLatchedParentSpaceState = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_materialGroup = 0x3A4; // CUtlStringToken
                constexpr std::ptrdiff_t m_nHitboxSet = 0x3A8; // uint8
            }
            // Parent: CBodyComponentSkeletonInstance
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_animationController (CBaseAnimGraphController)
            namespace CBodyComponentBaseAnimGraph {
                constexpr std::ptrdiff_t m_animationController = 0x460; // CBaseAnimGraphController
            }
            // Parent: CBodyComponent
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_sceneNode (CGameSceneNode)
            namespace CBodyComponentPoint {
                constexpr std::ptrdiff_t m_sceneNode = 0x50; // CGameSceneNode
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
            namespace C_SmokeGrenadeProjectile {
                constexpr std::ptrdiff_t m_nSmokeEffectTickBegin = 0x1158; // int32
                constexpr std::ptrdiff_t m_bDidSmokeEffect = 0x115C; // bool
                constexpr std::ptrdiff_t m_nRandomSeed = 0x1160; // int32
                constexpr std::ptrdiff_t m_vSmokeColor = 0x1164; // Vector
                constexpr std::ptrdiff_t m_vSmokeDetonationPos = 0x1170; // Vector
                constexpr std::ptrdiff_t m_VoxelFrameData = 0x1180; // CUtlVector<uint8>
                constexpr std::ptrdiff_t m_bSmokeVolumeDataReceived = 0x1198; // bool
                constexpr std::ptrdiff_t m_bSmokeEffectSpawned = 0x1199; // bool
            }
            // Parent: C_SoundEventEntity
            // Fields count: 0
            namespace C_SoundEventEntityAlias_snd_event_point {
            }
            // Parent: C_BaseEntity
            // Fields count: 8
            namespace C_CSGO_MapPreviewCameraPath {
                constexpr std::ptrdiff_t m_flZFar = 0x548; // float32
                constexpr std::ptrdiff_t m_flZNear = 0x54C; // float32
                constexpr std::ptrdiff_t m_bLoop = 0x550; // bool
                constexpr std::ptrdiff_t m_bVerticalFOV = 0x551; // bool
                constexpr std::ptrdiff_t m_bConstantSpeed = 0x552; // bool
                constexpr std::ptrdiff_t m_flDuration = 0x554; // float32
                constexpr std::ptrdiff_t m_flPathLength = 0x598; // float32
                constexpr std::ptrdiff_t m_flPathDuration = 0x59C; // float32
            }
            // Parent: CCSGO_WingmanIntroCharacterPosition
            // Fields count: 0
            namespace CCSGO_WingmanIntroTerroristPosition {
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
            namespace C_Inferno {
                constexpr std::ptrdiff_t m_nfxFireDamageEffect = 0xD08; // ParticleIndex_t
                constexpr std::ptrdiff_t m_hInfernoPointsSnapshot = 0xD10; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
                constexpr std::ptrdiff_t m_hInfernoFillerPointsSnapshot = 0xD18; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
                constexpr std::ptrdiff_t m_hInfernoOutlinePointsSnapshot = 0xD20; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
                constexpr std::ptrdiff_t m_hInfernoClimbingOutlinePointsSnapshot = 0xD28; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
                constexpr std::ptrdiff_t m_hInfernoDecalsSnapshot = 0xD30; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
                constexpr std::ptrdiff_t m_firePositions = 0xD38; // Vector[64]
                constexpr std::ptrdiff_t m_fireParentPositions = 0x1038; // Vector[64]
                constexpr std::ptrdiff_t m_bFireIsBurning = 0x1338; // bool[64]
                constexpr std::ptrdiff_t m_BurnNormal = 0x1378; // Vector[64]
                constexpr std::ptrdiff_t m_fireCount = 0x1678; // int32
                constexpr std::ptrdiff_t m_nInfernoType = 0x167C; // int32
                constexpr std::ptrdiff_t m_nFireLifetime = 0x1680; // float32
                constexpr std::ptrdiff_t m_bInPostEffectTime = 0x1684; // bool
                constexpr std::ptrdiff_t m_lastFireCount = 0x1688; // int32
                constexpr std::ptrdiff_t m_nFireEffectTickBegin = 0x168C; // int32
                constexpr std::ptrdiff_t m_drawableCount = 0x8290; // int32
                constexpr std::ptrdiff_t m_blosCheck = 0x8294; // bool
                constexpr std::ptrdiff_t m_nlosperiod = 0x8298; // int32
                constexpr std::ptrdiff_t m_maxFireHalfWidth = 0x829C; // float32
                constexpr std::ptrdiff_t m_maxFireHeight = 0x82A0; // float32
                constexpr std::ptrdiff_t m_minBounds = 0x82A4; // Vector
                constexpr std::ptrdiff_t m_maxBounds = 0x82B0; // Vector
                constexpr std::ptrdiff_t m_flLastGrassBurnThink = 0x82BC; // float32
            }
            // Parent: CBaseAnimGraph
            // Fields count: 0
            namespace C_HostageCarriableProp {
            }
            // Parent: C_CSGO_TeamPreviewCamera
            // Fields count: 0
            namespace C_CSGO_TerroristWingmanIntroCamera {
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
            namespace C_PlayerPing {
                constexpr std::ptrdiff_t m_hPlayer = 0x578; // CHandle<C_CSPlayerPawn>
                constexpr std::ptrdiff_t m_hPingedEntity = 0x57C; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_iType = 0x580; // int32
                constexpr std::ptrdiff_t m_bUrgent = 0x584; // bool
                constexpr std::ptrdiff_t m_szPlaceName = 0x585; // char[18]
            }
            // Parent: C_CSWeaponBaseGun
            // Fields count: 0
            namespace C_WeaponMP7 {
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
            namespace C_CSTeam {
                constexpr std::ptrdiff_t m_szTeamMatchStat = 0x600; // char[512]
                constexpr std::ptrdiff_t m_numMapVictories = 0x800; // int32
                constexpr std::ptrdiff_t m_bSurrendered = 0x804; // bool
                constexpr std::ptrdiff_t m_scoreFirstHalf = 0x808; // int32
                constexpr std::ptrdiff_t m_scoreSecondHalf = 0x80C; // int32
                constexpr std::ptrdiff_t m_scoreOvertime = 0x810; // int32
                constexpr std::ptrdiff_t m_szClanTeamname = 0x814; // char[129]
                constexpr std::ptrdiff_t m_iClanID = 0x898; // uint32
                constexpr std::ptrdiff_t m_szTeamFlagImage = 0x89C; // char[8]
                constexpr std::ptrdiff_t m_szTeamLogoImage = 0x8A4; // char[8]
            }
            // Parent: C_BaseEntity
            // Fields count: 10
            namespace C_CSGO_MapPreviewCameraPathNode {
                constexpr std::ptrdiff_t m_szParentPathUniqueID = 0x548; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_nPathIndex = 0x550; // int32
                constexpr std::ptrdiff_t m_vInTangentLocal = 0x554; // Vector
                constexpr std::ptrdiff_t m_vOutTangentLocal = 0x560; // Vector
                constexpr std::ptrdiff_t m_flFOV = 0x56C; // float32
                constexpr std::ptrdiff_t m_flCameraSpeed = 0x570; // float32
                constexpr std::ptrdiff_t m_flEaseIn = 0x574; // float32
                constexpr std::ptrdiff_t m_flEaseOut = 0x578; // float32
                constexpr std::ptrdiff_t m_vInTangentWorld = 0x57C; // Vector
                constexpr std::ptrdiff_t m_vOutTangentWorld = 0x588; // Vector
            }
            // Parent: C_CSWeaponBaseGun
            // Fields count: 0
            namespace C_WeaponMag7 {
            }
            // Parent: C_CSWeaponBaseGun
            // Fields count: 0
            namespace C_DEagle {
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
            namespace C_CSPlayerPawn {
                constexpr std::ptrdiff_t m_pBulletServices = 0x1468; // CCSPlayer_BulletServices*
                constexpr std::ptrdiff_t m_pHostageServices = 0x1470; // CCSPlayer_HostageServices*
                constexpr std::ptrdiff_t m_pBuyServices = 0x1478; // CCSPlayer_BuyServices*
                constexpr std::ptrdiff_t m_pGlowServices = 0x1480; // CCSPlayer_GlowServices*
                constexpr std::ptrdiff_t m_pActionTrackingServices = 0x1488; // CCSPlayer_ActionTrackingServices*
                constexpr std::ptrdiff_t m_flHealthShotBoostExpirationTime = 0x1490; // GameTime_t
                constexpr std::ptrdiff_t m_flLastFiredWeaponTime = 0x1494; // GameTime_t
                constexpr std::ptrdiff_t m_bHasFemaleVoice = 0x1498; // bool
                constexpr std::ptrdiff_t m_flLandingTimeSeconds = 0x149C; // float32
                constexpr std::ptrdiff_t m_flOldFallVelocity = 0x14A0; // float32
                constexpr std::ptrdiff_t m_szLastPlaceName = 0x14A4; // char[18]
                constexpr std::ptrdiff_t m_bPrevDefuser = 0x14B6; // bool
                constexpr std::ptrdiff_t m_bPrevHelmet = 0x14B7; // bool
                constexpr std::ptrdiff_t m_nPrevArmorVal = 0x14B8; // int32
                constexpr std::ptrdiff_t m_nPrevGrenadeAmmoCount = 0x14BC; // int32
                constexpr std::ptrdiff_t m_unPreviousWeaponHash = 0x14C0; // uint32
                constexpr std::ptrdiff_t m_unWeaponHash = 0x14C4; // uint32
                constexpr std::ptrdiff_t m_bInBuyZone = 0x14C8; // bool
                constexpr std::ptrdiff_t m_bPreviouslyInBuyZone = 0x14C9; // bool
                constexpr std::ptrdiff_t m_aimPunchAngle = 0x14CC; // QAngle
                constexpr std::ptrdiff_t m_aimPunchAngleVel = 0x14D8; // QAngle
                constexpr std::ptrdiff_t m_aimPunchTickBase = 0x14E4; // int32
                constexpr std::ptrdiff_t m_aimPunchTickFraction = 0x14E8; // float32
                constexpr std::ptrdiff_t m_aimPunchCache = 0x14F0; // CUtlVector<QAngle>
                constexpr std::ptrdiff_t m_bInLanding = 0x1510; // bool
                constexpr std::ptrdiff_t m_flLandingStartTime = 0x1514; // float32
                constexpr std::ptrdiff_t m_bInHostageRescueZone = 0x1518; // bool
                constexpr std::ptrdiff_t m_bInBombZone = 0x1519; // bool
                constexpr std::ptrdiff_t m_bIsBuyMenuOpen = 0x151A; // bool
                constexpr std::ptrdiff_t m_flTimeOfLastInjury = 0x151C; // GameTime_t
                constexpr std::ptrdiff_t m_flNextSprayDecalTime = 0x1520; // GameTime_t
                constexpr std::ptrdiff_t m_iRetakesOffering = 0x1640; // int32
                constexpr std::ptrdiff_t m_iRetakesOfferingCard = 0x1644; // int32
                constexpr std::ptrdiff_t m_bRetakesHasDefuseKit = 0x1648; // bool
                constexpr std::ptrdiff_t m_bRetakesMVPLastRound = 0x1649; // bool
                constexpr std::ptrdiff_t m_iRetakesMVPBoostItem = 0x164C; // int32
                constexpr std::ptrdiff_t m_RetakesMVPBoostExtraUtility = 0x1650; // loadout_slot_t
                constexpr std::ptrdiff_t m_bNeedToReApplyGloves = 0x1670; // bool
                constexpr std::ptrdiff_t m_EconGloves = 0x1678; // C_EconItemView
                constexpr std::ptrdiff_t m_nEconGlovesChanged = 0x1AC0; // uint8
                constexpr std::ptrdiff_t m_bMustSyncRagdollState = 0x1AC1; // bool
                constexpr std::ptrdiff_t m_nRagdollDamageBone = 0x1AC4; // int32
                constexpr std::ptrdiff_t m_vRagdollDamageForce = 0x1AC8; // Vector
                constexpr std::ptrdiff_t m_vRagdollDamagePosition = 0x1AD4; // Vector
                constexpr std::ptrdiff_t m_szRagdollDamageWeaponName = 0x1AE0; // char[64]
                constexpr std::ptrdiff_t m_bRagdollDamageHeadshot = 0x1B20; // bool
                constexpr std::ptrdiff_t m_vRagdollServerOrigin = 0x1B24; // Vector
                constexpr std::ptrdiff_t m_bLastHeadBoneTransformIsValid = 0x2138; // bool
                constexpr std::ptrdiff_t m_lastLandTime = 0x213C; // GameTime_t
                constexpr std::ptrdiff_t m_bOnGroundLastTick = 0x2140; // bool
                constexpr std::ptrdiff_t m_qDeathEyeAngles = 0x215C; // QAngle
                constexpr std::ptrdiff_t m_bSkipOneHeadConstraintUpdate = 0x2168; // bool
                constexpr std::ptrdiff_t m_bLeftHanded = 0x2169; // bool
                constexpr std::ptrdiff_t m_fSwitchedHandednessTime = 0x216C; // GameTime_t
                constexpr std::ptrdiff_t m_flViewmodelOffsetX = 0x2170; // float32
                constexpr std::ptrdiff_t m_flViewmodelOffsetY = 0x2174; // float32
                constexpr std::ptrdiff_t m_flViewmodelOffsetZ = 0x2178; // float32
                constexpr std::ptrdiff_t m_flViewmodelFOV = 0x217C; // float32
                constexpr std::ptrdiff_t m_vecPlayerPatchEconIndices = 0x2180; // uint32[5]
                constexpr std::ptrdiff_t m_GunGameImmunityColor = 0x21B8; // Color
                constexpr std::ptrdiff_t m_vecBulletHitModels = 0x2208; // CUtlVector<C_BulletHitModel*>
                constexpr std::ptrdiff_t m_bIsWalking = 0x2220; // bool
                constexpr std::ptrdiff_t m_thirdPersonHeading = 0x2228; // QAngle
                constexpr std::ptrdiff_t m_flSlopeDropOffset = 0x2240; // float32
                constexpr std::ptrdiff_t m_flSlopeDropHeight = 0x2250; // float32
                constexpr std::ptrdiff_t m_vHeadConstraintOffset = 0x2260; // Vector
                constexpr std::ptrdiff_t m_entitySpottedState = 0x2278; // EntitySpottedState_t
                constexpr std::ptrdiff_t m_bIsScoped = 0x2290; // bool
                constexpr std::ptrdiff_t m_bResumeZoom = 0x2291; // bool
                constexpr std::ptrdiff_t m_bIsDefusing = 0x2292; // bool
                constexpr std::ptrdiff_t m_bIsGrabbingHostage = 0x2293; // bool
                constexpr std::ptrdiff_t m_iBlockingUseActionInProgress = 0x2294; // CSPlayerBlockingUseAction_t
                constexpr std::ptrdiff_t m_flEmitSoundTime = 0x2298; // GameTime_t
                constexpr std::ptrdiff_t m_bInNoDefuseArea = 0x229C; // bool
                constexpr std::ptrdiff_t m_nWhichBombZone = 0x22A0; // int32
                constexpr std::ptrdiff_t m_iShotsFired = 0x22A4; // int32
                constexpr std::ptrdiff_t m_flVelocityModifier = 0x22A8; // float32
                constexpr std::ptrdiff_t m_flHitHeading = 0x22AC; // float32
                constexpr std::ptrdiff_t m_nHitBodyPart = 0x22B0; // int32
                constexpr std::ptrdiff_t m_bWaitForNoAttack = 0x22B4; // bool
                constexpr std::ptrdiff_t m_ignoreLadderJumpTime = 0x22B8; // float32
                constexpr std::ptrdiff_t m_bKilledByHeadshot = 0x22BD; // bool
                constexpr std::ptrdiff_t m_ArmorValue = 0x22C0; // int32
                constexpr std::ptrdiff_t m_unCurrentEquipmentValue = 0x22C4; // uint16
                constexpr std::ptrdiff_t m_unRoundStartEquipmentValue = 0x22C6; // uint16
                constexpr std::ptrdiff_t m_unFreezetimeEndEquipmentValue = 0x22C8; // uint16
                constexpr std::ptrdiff_t m_nLastKillerIndex = 0x22CC; // CEntityIndex
                constexpr std::ptrdiff_t m_bOldIsScoped = 0x22D0; // bool
                constexpr std::ptrdiff_t m_bHasDeathInfo = 0x22D1; // bool
                constexpr std::ptrdiff_t m_flDeathInfoTime = 0x22D4; // float32
                constexpr std::ptrdiff_t m_vecDeathInfoOrigin = 0x22D8; // Vector
                constexpr std::ptrdiff_t m_grenadeParameterStashTime = 0x22E4; // GameTime_t
                constexpr std::ptrdiff_t m_bGrenadeParametersStashed = 0x22E8; // bool
                constexpr std::ptrdiff_t m_angStashedShootAngles = 0x22EC; // QAngle
                constexpr std::ptrdiff_t m_vecStashedGrenadeThrowPosition = 0x22F8; // Vector
                constexpr std::ptrdiff_t m_vecStashedVelocity = 0x2304; // Vector
                constexpr std::ptrdiff_t m_angShootAngleHistory = 0x2310; // QAngle[2]
                constexpr std::ptrdiff_t m_vecThrowPositionHistory = 0x2328; // Vector[2]
                constexpr std::ptrdiff_t m_vecVelocityHistory = 0x2340; // Vector[2]
            }
            // Parent: C_RagdollProp
            // Fields count: 7
            //
            // Metadata:
            // NetworkVarNames: m_boneIndexAttached (uint32)
            // NetworkVarNames: m_ragdollAttachedObjectIndex (uint32)
            // NetworkVarNames: m_attachmentPointBoneSpace (Vector)
            // NetworkVarNames: m_attachmentPointRagdollSpace (Vector)
            namespace C_RagdollPropAttached {
                constexpr std::ptrdiff_t m_boneIndexAttached = 0xF48; // uint32
                constexpr std::ptrdiff_t m_ragdollAttachedObjectIndex = 0xF4C; // uint32
                constexpr std::ptrdiff_t m_attachmentPointBoneSpace = 0xF50; // Vector
                constexpr std::ptrdiff_t m_attachmentPointRagdollSpace = 0xF5C; // Vector
                constexpr std::ptrdiff_t m_vecOffset = 0xF68; // Vector
                constexpr std::ptrdiff_t m_parentTime = 0xF74; // float32
                constexpr std::ptrdiff_t m_bHasParent = 0xF78; // bool
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
            namespace C_BaseCSGrenadeProjectile {
                constexpr std::ptrdiff_t m_vInitialPosition = 0x10B8; // Vector
                constexpr std::ptrdiff_t m_vInitialVelocity = 0x10C4; // Vector
                constexpr std::ptrdiff_t m_nBounces = 0x10D0; // int32
                constexpr std::ptrdiff_t m_nExplodeEffectIndex = 0x10D8; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                constexpr std::ptrdiff_t m_nExplodeEffectTickBegin = 0x10E0; // int32
                constexpr std::ptrdiff_t m_vecExplodeEffectOrigin = 0x10E4; // Vector
                constexpr std::ptrdiff_t m_flSpawnTime = 0x10F0; // GameTime_t
                constexpr std::ptrdiff_t vecLastTrailLinePos = 0x10F4; // Vector
                constexpr std::ptrdiff_t flNextTrailLineTime = 0x1100; // GameTime_t
                constexpr std::ptrdiff_t m_bExplodeEffectBegan = 0x1104; // bool
                constexpr std::ptrdiff_t m_bCanCreateGrenadeTrail = 0x1105; // bool
                constexpr std::ptrdiff_t m_nSnapshotTrajectoryEffectIndex = 0x1108; // ParticleIndex_t
                constexpr std::ptrdiff_t m_hSnapshotTrajectoryParticleSnapshot = 0x1110; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
                constexpr std::ptrdiff_t m_arrTrajectoryTrailPoints = 0x1118; // CUtlVector<Vector>
                constexpr std::ptrdiff_t m_arrTrajectoryTrailPointCreationTimes = 0x1130; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_flTrajectoryTrailEffectCreationTime = 0x1148; // float32
            }
            // Parent: C_BaseToggle
            // Fields count: 2
            //
            // Metadata:
            // MNetworkIncludeByName
            // NetworkVarNames: m_bDisabled (bool)
            // NetworkVarNames: m_bClientSidePredicted (bool)
            namespace C_BaseTrigger {
                constexpr std::ptrdiff_t m_bDisabled = 0xCC8; // bool
                constexpr std::ptrdiff_t m_bClientSidePredicted = 0xCC9; // bool
            }
            // Parent: C_CSWeaponBase
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_SequenceCompleteTimer (CountdownTimer)
            // NetworkVarNames: m_bRedraw (bool)
            namespace C_WeaponBaseItem {
                constexpr std::ptrdiff_t m_SequenceCompleteTimer = 0x1A80; // CountdownTimer
                constexpr std::ptrdiff_t m_bRedraw = 0x1A98; // bool
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
                constexpr std::ptrdiff_t m_vOrigin = 0x8; // Vector
                constexpr std::ptrdiff_t m_vStart = 0x14; // Vector
                constexpr std::ptrdiff_t m_vNormal = 0x20; // Vector
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
            // Parent: C_BaseCSGrenadeProjectile
            // Fields count: 0
            namespace C_SensorGrenadeProjectile {
            }
            // Parent: C_BaseCSGrenade
            // Fields count: 0
            namespace C_MolotovGrenade {
            }
            // Parent: C_BaseToggle
            // Fields count: 3
            //
            // Metadata:
            // NetworkVarNames: m_glowEntity (CHandle<C_BaseModelEntity>)
            // NetworkVarNames: m_usable (bool)
            // NetworkVarNames: m_szDisplayText (string_t)
            namespace C_BaseButton {
                constexpr std::ptrdiff_t m_glowEntity = 0xCC8; // CHandle<C_BaseModelEntity>
                constexpr std::ptrdiff_t m_usable = 0xCCC; // bool
                constexpr std::ptrdiff_t m_szDisplayText = 0xCD0; // CUtlSymbolLarge
            }
            // Parent: CPlayer_ViewModelServices
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_hViewModel (CHandle<CBaseViewModel>)
            namespace CCSPlayer_ViewModelServices {
                constexpr std::ptrdiff_t m_hViewModel = 0x40; // CHandle<C_BaseViewModel>[3]
            }
            // Parent: C_PointEntity
            // Fields count: 0
            namespace CInfoParticleTarget {
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
            namespace CPlayer_MovementServices_Humanoid {
                constexpr std::ptrdiff_t m_flStepSoundTime = 0x1D8; // float32
                constexpr std::ptrdiff_t m_flFallVelocity = 0x1DC; // float32
                constexpr std::ptrdiff_t m_bInCrouch = 0x1E0; // bool
                constexpr std::ptrdiff_t m_nCrouchState = 0x1E4; // uint32
                constexpr std::ptrdiff_t m_flCrouchTransitionStartTime = 0x1E8; // GameTime_t
                constexpr std::ptrdiff_t m_bDucked = 0x1EC; // bool
                constexpr std::ptrdiff_t m_bDucking = 0x1ED; // bool
                constexpr std::ptrdiff_t m_bInDuckJump = 0x1EE; // bool
                constexpr std::ptrdiff_t m_groundNormal = 0x1F0; // Vector
                constexpr std::ptrdiff_t m_flSurfaceFriction = 0x1FC; // float32
                constexpr std::ptrdiff_t m_surfaceProps = 0x200; // CUtlStringToken
                constexpr std::ptrdiff_t m_nStepside = 0x210; // int32
            }
            // Parent: C_CSWeaponBaseGun
            // Fields count: 0
            namespace C_WeaponAug {
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
            namespace C_PointClientUIWorldPanel {
                constexpr std::ptrdiff_t m_bForceRecreateNextUpdate = 0xD00; // bool
                constexpr std::ptrdiff_t m_bMoveViewToPlayerNextThink = 0xD01; // bool
                constexpr std::ptrdiff_t m_bCheckCSSClasses = 0xD02; // bool
                constexpr std::ptrdiff_t m_anchorDeltaTransform = 0xD10; // CTransform
                constexpr std::ptrdiff_t m_pOffScreenIndicator = 0xEA8; // CPointOffScreenIndicatorUi*
                constexpr std::ptrdiff_t m_bIgnoreInput = 0xED0; // bool
                constexpr std::ptrdiff_t m_bLit = 0xED1; // bool
                constexpr std::ptrdiff_t m_bFollowPlayerAcrossTeleport = 0xED2; // bool
                constexpr std::ptrdiff_t m_flWidth = 0xED4; // float32
                constexpr std::ptrdiff_t m_flHeight = 0xED8; // float32
                constexpr std::ptrdiff_t m_flDPI = 0xEDC; // float32
                constexpr std::ptrdiff_t m_flInteractDistance = 0xEE0; // float32
                constexpr std::ptrdiff_t m_flDepthOffset = 0xEE4; // float32
                constexpr std::ptrdiff_t m_unOwnerContext = 0xEE8; // uint32
                constexpr std::ptrdiff_t m_unHorizontalAlign = 0xEEC; // uint32
                constexpr std::ptrdiff_t m_unVerticalAlign = 0xEF0; // uint32
                constexpr std::ptrdiff_t m_unOrientation = 0xEF4; // uint32
                constexpr std::ptrdiff_t m_bAllowInteractionFromAllSceneWorlds = 0xEF8; // bool
                constexpr std::ptrdiff_t m_vecCSSClasses = 0xF00; // C_NetworkUtlVectorBase<CUtlSymbolLarge>
                constexpr std::ptrdiff_t m_bOpaque = 0xF18; // bool
                constexpr std::ptrdiff_t m_bNoDepth = 0xF19; // bool
                constexpr std::ptrdiff_t m_bRenderBackface = 0xF1A; // bool
                constexpr std::ptrdiff_t m_bUseOffScreenIndicator = 0xF1B; // bool
                constexpr std::ptrdiff_t m_bExcludeFromSaveGames = 0xF1C; // bool
                constexpr std::ptrdiff_t m_bGrabbable = 0xF1D; // bool
                constexpr std::ptrdiff_t m_bOnlyRenderToTexture = 0xF1E; // bool
                constexpr std::ptrdiff_t m_bDisableMipGen = 0xF1F; // bool
                constexpr std::ptrdiff_t m_nExplicitImageLayout = 0xF20; // int32
            }
            // Parent: C_BaseEntity
            // Fields count: 0
            namespace C_CSMinimapBoundary {
            }
            // Parent: CCSGameModeRules
            // Fields count: 3
            //
            // Metadata:
            // NetworkVarNames: m_flDMBonusStartTime (GameTime_t)
            // NetworkVarNames: m_flDMBonusTimeLength (float)
            // NetworkVarNames: m_sDMBonusWeapon (CUtlString)
            namespace CCSGameModeRules_Deathmatch {
                constexpr std::ptrdiff_t m_flDMBonusStartTime = 0x38; // GameTime_t
                constexpr std::ptrdiff_t m_flDMBonusTimeLength = 0x3C; // float32
                constexpr std::ptrdiff_t m_sDMBonusWeapon = 0x40; // CUtlString
            }
            // Parent: C_CSGO_TeamPreviewCharacterPosition
            // Fields count: 0
            namespace C_CSGO_EndOfMatchCharacterPosition {
            }
            // Parent: C_SoundOpvarSetPointEntity
            // Fields count: 0
            namespace C_SoundOpvarSetAABBEntity {
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // NetworkVarNames: m_nTotalPausedTicks (int)
            // NetworkVarNames: m_nPauseStartTick (int)
            // NetworkVarNames: m_bGamePaused (bool)
            namespace C_GameRules {
                constexpr std::ptrdiff_t __m_pChainEntity = 0x8; // CNetworkVarChainer
                constexpr std::ptrdiff_t m_nTotalPausedTicks = 0x30; // int32
                constexpr std::ptrdiff_t m_nPauseStartTick = 0x34; // int32
                constexpr std::ptrdiff_t m_bGamePaused = 0x38; // bool
            }
            // Parent: CBaseAnimGraph
            // Fields count: 0
            namespace C_WorldModelNametag {
            }
            // Parent: C_BasePropDoor
            // Fields count: 0
            namespace C_PropDoorRotating {
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
            namespace C_Team {
                constexpr std::ptrdiff_t m_aPlayerControllers = 0x548; // C_NetworkUtlVectorBase<CHandle<CBasePlayerController>>
                constexpr std::ptrdiff_t m_aPlayers = 0x560; // C_NetworkUtlVectorBase<CHandle<C_BasePlayerPawn>>
                constexpr std::ptrdiff_t m_iScore = 0x578; // int32
                constexpr std::ptrdiff_t m_szTeamname = 0x57C; // char[129]
            }
            // Parent: C_SoundAreaEntityBase
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_vMin (Vector)
            // NetworkVarNames: m_vMax (Vector)
            namespace C_SoundAreaEntityOrientedBox {
                constexpr std::ptrdiff_t m_vMin = 0x570; // Vector
                constexpr std::ptrdiff_t m_vMax = 0x57C; // Vector
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
            namespace C_TextureBasedAnimatable {
                constexpr std::ptrdiff_t m_bLoop = 0xCC8; // bool
                constexpr std::ptrdiff_t m_flFPS = 0xCCC; // float32
                constexpr std::ptrdiff_t m_hPositionKeys = 0xCD0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_hRotationKeys = 0xCD8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_vAnimationBoundsMin = 0xCE0; // Vector
                constexpr std::ptrdiff_t m_vAnimationBoundsMax = 0xCEC; // Vector
                constexpr std::ptrdiff_t m_flStartTime = 0xCF8; // float32
                constexpr std::ptrdiff_t m_flStartFrame = 0xCFC; // float32
            }
            // Parent: C_SoundOpvarSetPointBase
            // Fields count: 0
            namespace C_SoundOpvarSetPointEntity {
            }
            // Parent: CBaseAnimGraph
            // Fields count: 0
            namespace C_WorldModelStattrak {
            }
            // Parent: C_LightEntity
            // Fields count: 0
            namespace C_LightOrthoEntity {
            }
            // Parent: CPlayer_WaterServices
            // Fields count: 3
            namespace CCSPlayer_WaterServices {
                constexpr std::ptrdiff_t m_flWaterJumpTime = 0x40; // float32
                constexpr std::ptrdiff_t m_vecWaterJumpVel = 0x44; // Vector
                constexpr std::ptrdiff_t m_flSwimSoundTime = 0x50; // float32
            }
            // Parent: C_BaseEntity
            // Fields count: 2
            namespace CSkyboxReference {
                constexpr std::ptrdiff_t m_worldGroupId = 0x548; // WorldGroupId_t
                constexpr std::ptrdiff_t m_hSkyCamera = 0x54C; // CHandle<C_SkyCamera>
            }
            // Parent: C_TonemapController2
            // Fields count: 0
            namespace C_TonemapController2Alias_env_tonemap_controller2 {
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
            namespace CProjectedTextureBase {
                constexpr std::ptrdiff_t m_hTargetEntity = 0xC; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_bState = 0x10; // bool
                constexpr std::ptrdiff_t m_bAlwaysUpdate = 0x11; // bool
                constexpr std::ptrdiff_t m_flLightFOV = 0x14; // float32
                constexpr std::ptrdiff_t m_bEnableShadows = 0x18; // bool
                constexpr std::ptrdiff_t m_bSimpleProjection = 0x19; // bool
                constexpr std::ptrdiff_t m_bLightOnlyTarget = 0x1A; // bool
                constexpr std::ptrdiff_t m_bLightWorld = 0x1B; // bool
                constexpr std::ptrdiff_t m_bCameraSpace = 0x1C; // bool
                constexpr std::ptrdiff_t m_flBrightnessScale = 0x20; // float32
                constexpr std::ptrdiff_t m_LightColor = 0x24; // Color
                constexpr std::ptrdiff_t m_flIntensity = 0x28; // float32
                constexpr std::ptrdiff_t m_flLinearAttenuation = 0x2C; // float32
                constexpr std::ptrdiff_t m_flQuadraticAttenuation = 0x30; // float32
                constexpr std::ptrdiff_t m_bVolumetric = 0x34; // bool
                constexpr std::ptrdiff_t m_flVolumetricIntensity = 0x38; // float32
                constexpr std::ptrdiff_t m_flNoiseStrength = 0x3C; // float32
                constexpr std::ptrdiff_t m_flFlashlightTime = 0x40; // float32
                constexpr std::ptrdiff_t m_nNumPlanes = 0x44; // uint32
                constexpr std::ptrdiff_t m_flPlaneOffset = 0x48; // float32
                constexpr std::ptrdiff_t m_flColorTransitionTime = 0x4C; // float32
                constexpr std::ptrdiff_t m_flAmbient = 0x50; // float32
                constexpr std::ptrdiff_t m_SpotlightTextureName = 0x54; // char[512]
                constexpr std::ptrdiff_t m_nSpotlightTextureFrame = 0x254; // int32
                constexpr std::ptrdiff_t m_nShadowQuality = 0x258; // uint32
                constexpr std::ptrdiff_t m_flNearZ = 0x25C; // float32
                constexpr std::ptrdiff_t m_flFarZ = 0x260; // float32
                constexpr std::ptrdiff_t m_flProjectionSize = 0x264; // float32
                constexpr std::ptrdiff_t m_flRotation = 0x268; // float32
                constexpr std::ptrdiff_t m_bFlipHorizontal = 0x26C; // bool
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
            namespace CCSPlayerController_InventoryServices {
                constexpr std::ptrdiff_t m_unMusicID = 0x40; // uint16
                constexpr std::ptrdiff_t m_rank = 0x44; // MedalRank_t[6]
                constexpr std::ptrdiff_t m_nPersonaDataPublicLevel = 0x5C; // int32
                constexpr std::ptrdiff_t m_nPersonaDataPublicCommendsLeader = 0x60; // int32
                constexpr std::ptrdiff_t m_nPersonaDataPublicCommendsTeacher = 0x64; // int32
                constexpr std::ptrdiff_t m_nPersonaDataPublicCommendsFriendly = 0x68; // int32
                constexpr std::ptrdiff_t m_nPersonaDataXpTrailLevel = 0x6C; // int32
                constexpr std::ptrdiff_t m_vecServerAuthoritativeWeaponSlots = 0x70; // C_UtlVectorEmbeddedNetworkVar<ServerAuthoritativeWeaponSlot_t>
            }
            // Parent: C_PathParticleRope
            // Fields count: 0
            namespace C_PathParticleRopeAlias_path_particle_rope_clientside {
            }
            // Parent: CPlayerPawnComponent
            // Fields count: 0
            namespace CPlayer_UseServices {
            }
            // Parent: C_PredictedViewModel
            // Fields count: 6
            //
            // Metadata:
            // MNetworkOverride
            // NetworkVarNames: m_bShouldIgnoreOffsetAndAccuracy (bool)
            // NetworkVarNames: m_nWeaponParity (uint32)
            namespace C_CSGOViewModel {
                constexpr std::ptrdiff_t m_bShouldIgnoreOffsetAndAccuracy = 0xF68; // bool
                constexpr std::ptrdiff_t m_nWeaponParity = 0xF6C; // uint32
                constexpr std::ptrdiff_t m_nOldWeaponParity = 0xF70; // uint32
                constexpr std::ptrdiff_t m_nLastKnownAssociatedWeaponEntIndex = 0xF74; // CEntityIndex
                constexpr std::ptrdiff_t m_bNeedToQueueHighResComposite = 0xF78; // bool
                constexpr std::ptrdiff_t m_vLoweredWeaponOffset = 0xFC8; // QAngle
            }
            // Parent: CEntityComponent
            // Fields count: 1
            namespace CScriptComponent {
                constexpr std::ptrdiff_t m_scriptClassName = 0x30; // CUtlSymbolLarge
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
            namespace C_EnvLightProbeVolume {
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture = 0x1528; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightIndicesTexture = 0x1530; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightScalarsTexture = 0x1538; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightShadowsTexture = 0x1540; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_vBoxMins = 0x1548; // Vector
                constexpr std::ptrdiff_t m_Entity_vBoxMaxs = 0x1554; // Vector
                constexpr std::ptrdiff_t m_Entity_bMoveable = 0x1560; // bool
                constexpr std::ptrdiff_t m_Entity_nHandshake = 0x1564; // int32
                constexpr std::ptrdiff_t m_Entity_nPriority = 0x1568; // int32
                constexpr std::ptrdiff_t m_Entity_bStartDisabled = 0x156C; // bool
                constexpr std::ptrdiff_t m_Entity_nLightProbeSizeX = 0x1570; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeSizeY = 0x1574; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeSizeZ = 0x1578; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasX = 0x157C; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasY = 0x1580; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasZ = 0x1584; // int32
                constexpr std::ptrdiff_t m_Entity_bEnabled = 0x1591; // bool
            }
            // Parent: CBaseAnimGraph
            // Fields count: 1
            namespace C_ViewmodelAttachmentModel {
                constexpr std::ptrdiff_t m_bShouldFrontFaceCullLeftHanded = 0xED0; // bool
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            namespace CCSPointScriptExtensions_player_controller {
            }
            // Parent: C_BaseCSGrenade
            // Fields count: 0
            namespace C_Flashbang {
            }
            // Parent: C_CSWeaponBase
            // Fields count: 0
            namespace CBumpMine {
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
            namespace C_TeamRoundTimer {
                constexpr std::ptrdiff_t m_bTimerPaused = 0x548; // bool
                constexpr std::ptrdiff_t m_flTimeRemaining = 0x54C; // float32
                constexpr std::ptrdiff_t m_flTimerEndTime = 0x550; // GameTime_t
                constexpr std::ptrdiff_t m_bIsDisabled = 0x554; // bool
                constexpr std::ptrdiff_t m_bShowInHUD = 0x555; // bool
                constexpr std::ptrdiff_t m_nTimerLength = 0x558; // int32
                constexpr std::ptrdiff_t m_nTimerInitialLength = 0x55C; // int32
                constexpr std::ptrdiff_t m_nTimerMaxLength = 0x560; // int32
                constexpr std::ptrdiff_t m_bAutoCountdown = 0x564; // bool
                constexpr std::ptrdiff_t m_nSetupTimeLength = 0x568; // int32
                constexpr std::ptrdiff_t m_nState = 0x56C; // int32
                constexpr std::ptrdiff_t m_bStartPaused = 0x570; // bool
                constexpr std::ptrdiff_t m_bInCaptureWatchState = 0x571; // bool
                constexpr std::ptrdiff_t m_flTotalTime = 0x574; // float32
                constexpr std::ptrdiff_t m_bStopWatchTimer = 0x578; // bool
                constexpr std::ptrdiff_t m_bFireFinished = 0x579; // bool
                constexpr std::ptrdiff_t m_bFire5MinRemain = 0x57A; // bool
                constexpr std::ptrdiff_t m_bFire4MinRemain = 0x57B; // bool
                constexpr std::ptrdiff_t m_bFire3MinRemain = 0x57C; // bool
                constexpr std::ptrdiff_t m_bFire2MinRemain = 0x57D; // bool
                constexpr std::ptrdiff_t m_bFire1MinRemain = 0x57E; // bool
                constexpr std::ptrdiff_t m_bFire30SecRemain = 0x57F; // bool
                constexpr std::ptrdiff_t m_bFire10SecRemain = 0x580; // bool
                constexpr std::ptrdiff_t m_bFire5SecRemain = 0x581; // bool
                constexpr std::ptrdiff_t m_bFire4SecRemain = 0x582; // bool
                constexpr std::ptrdiff_t m_bFire3SecRemain = 0x583; // bool
                constexpr std::ptrdiff_t m_bFire2SecRemain = 0x584; // bool
                constexpr std::ptrdiff_t m_bFire1SecRemain = 0x585; // bool
                constexpr std::ptrdiff_t m_nOldTimerLength = 0x588; // int32
                constexpr std::ptrdiff_t m_nOldTimerState = 0x58C; // int32
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
            // Parent: C_BaseCSGrenade
            // Fields count: 0
            namespace C_SmokeGrenade {
            }
            // Parent: C_CSWeaponBaseGun
            // Fields count: 0
            namespace C_WeaponGalilAR {
            }
            // Parent: CBaseAnimGraph
            // Fields count: 0
            namespace C_WorldModelGloves {
            }
            // Parent: C_ModelPointEntity
            // Fields count: 0
            namespace C_EnvProjectedTexture {
            }
            // Parent: C_BaseEntity
            // Fields count: 1
            namespace CPathSimple {
                constexpr std::ptrdiff_t m_pathString = 0x598; // CUtlString
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
            namespace CCSPlayerBase_CameraServices {
                constexpr std::ptrdiff_t m_iFOV = 0x210; // uint32
                constexpr std::ptrdiff_t m_iFOVStart = 0x214; // uint32
                constexpr std::ptrdiff_t m_flFOVTime = 0x218; // GameTime_t
                constexpr std::ptrdiff_t m_flFOVRate = 0x21C; // float32
                constexpr std::ptrdiff_t m_hZoomOwner = 0x220; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_flLastShotFOV = 0x224; // float32
            }
            // Parent: C_PointClientUIWorldPanel
            // Fields count: 4
            namespace CPointOffScreenIndicatorUi {
                constexpr std::ptrdiff_t m_bBeenEnabled = 0xF30; // bool
                constexpr std::ptrdiff_t m_bHide = 0xF31; // bool
                constexpr std::ptrdiff_t m_flSeenTargetTime = 0xF34; // float32
                constexpr std::ptrdiff_t m_pTargetPanel = 0xF38; // C_PointClientUIWorldPanel*
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            namespace CCSPointScriptExtensions_entity {
            }
            // Parent: CBodyComponentSkeletonInstance
            // Fields count: 0
            namespace CBodyComponentBaseModelEntity {
            }
            // Parent: C_CSWeaponBase
            // Fields count: 6
            //
            // Metadata:
            // NetworkVarNames: m_zoomLevel (int)
            // NetworkVarNames: m_iBurstShotsRemaining (int)
            // NetworkVarNames: m_bNeedsBoltAction (bool)
            namespace C_CSWeaponBaseGun {
                constexpr std::ptrdiff_t m_zoomLevel = 0x1A80; // int32
                constexpr std::ptrdiff_t m_iBurstShotsRemaining = 0x1A84; // int32
                constexpr std::ptrdiff_t m_iSilencerBodygroup = 0x1A88; // int32
                constexpr std::ptrdiff_t m_silencedModelIndex = 0x1A98; // int32
                constexpr std::ptrdiff_t m_inPrecache = 0x1A9C; // bool
                constexpr std::ptrdiff_t m_bNeedsBoltAction = 0x1A9D; // bool
            }
            // Parent: C_BaseEntity
            // Fields count: 4
            //
            // Metadata:
            // NetworkVarNames: m_skyboxData (sky3dparams_t)
            // NetworkVarNames: m_skyboxSlotToken (CUtlStringToken)
            namespace C_SkyCamera {
                constexpr std::ptrdiff_t m_skyboxData = 0x548; // sky3dparams_t
                constexpr std::ptrdiff_t m_skyboxSlotToken = 0x5D8; // CUtlStringToken
                constexpr std::ptrdiff_t m_bUseAngles = 0x5DC; // bool
                constexpr std::ptrdiff_t m_pNext = 0x5E0; // C_SkyCamera*
            }
            // Parent: C_BaseModelEntity
            // Fields count: 0
            namespace C_World {
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
            namespace C_EntityDissolve {
                constexpr std::ptrdiff_t m_flStartTime = 0xCD0; // GameTime_t
                constexpr std::ptrdiff_t m_flFadeInStart = 0xCD4; // float32
                constexpr std::ptrdiff_t m_flFadeInLength = 0xCD8; // float32
                constexpr std::ptrdiff_t m_flFadeOutModelStart = 0xCDC; // float32
                constexpr std::ptrdiff_t m_flFadeOutModelLength = 0xCE0; // float32
                constexpr std::ptrdiff_t m_flFadeOutStart = 0xCE4; // float32
                constexpr std::ptrdiff_t m_flFadeOutLength = 0xCE8; // float32
                constexpr std::ptrdiff_t m_flNextSparkTime = 0xCEC; // GameTime_t
                constexpr std::ptrdiff_t m_nDissolveType = 0xCF0; // EntityDisolveType_t
                constexpr std::ptrdiff_t m_vDissolverOrigin = 0xCF4; // Vector
                constexpr std::ptrdiff_t m_nMagnitude = 0xD00; // uint32
                constexpr std::ptrdiff_t m_bCoreExplode = 0xD04; // bool
                constexpr std::ptrdiff_t m_bLinkedToServerEnt = 0xD05; // bool
            }
            // Parent: CPlayer_UseServices
            // Fields count: 0
            namespace CCSObserver_UseServices {
            }
            // Parent: None
            // Fields count: 14
            //
            // Metadata:
            // NetworkVarNames: m_hCtrl (CHandle<CFogController>)
            namespace C_fogplayerparams_t {
                constexpr std::ptrdiff_t m_hCtrl = 0x8; // CHandle<C_FogController>
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
            namespace C_CSPlayerPawnBase {
                constexpr std::ptrdiff_t m_pPingServices = 0x12B0; // CCSPlayer_PingServices*
                constexpr std::ptrdiff_t m_pViewModelServices = 0x12B8; // CPlayer_ViewModelServices*
                constexpr std::ptrdiff_t m_fRenderingClipPlane = 0x12C0; // float32[4]
                constexpr std::ptrdiff_t m_nLastClipPlaneSetupFrame = 0x12D0; // int32
                constexpr std::ptrdiff_t m_vecLastClipCameraPos = 0x12D4; // Vector
                constexpr std::ptrdiff_t m_vecLastClipCameraForward = 0x12E0; // Vector
                constexpr std::ptrdiff_t m_bClipHitStaticWorld = 0x12EC; // bool
                constexpr std::ptrdiff_t m_bCachedPlaneIsValid = 0x12ED; // bool
                constexpr std::ptrdiff_t m_pClippingWeapon = 0x12F0; // C_CSWeaponBase*
                constexpr std::ptrdiff_t m_previousPlayerState = 0x12F8; // CSPlayerState
                constexpr std::ptrdiff_t m_iPlayerState = 0x12FC; // CSPlayerState
                constexpr std::ptrdiff_t m_bIsRescuing = 0x1300; // bool
                constexpr std::ptrdiff_t m_fImmuneToGunGameDamageTime = 0x1304; // GameTime_t
                constexpr std::ptrdiff_t m_fImmuneToGunGameDamageTimeLast = 0x1308; // GameTime_t
                constexpr std::ptrdiff_t m_bGunGameImmunity = 0x130C; // bool
                constexpr std::ptrdiff_t m_bHasMovedSinceSpawn = 0x130D; // bool
                constexpr std::ptrdiff_t m_fMolotovUseTime = 0x1310; // float32
                constexpr std::ptrdiff_t m_fMolotovDamageTime = 0x1314; // float32
                constexpr std::ptrdiff_t m_iThrowGrenadeCounter = 0x1318; // int32
                constexpr std::ptrdiff_t m_flLastSpawnTimeIndex = 0x131C; // GameTime_t
                constexpr std::ptrdiff_t m_iProgressBarDuration = 0x1320; // int32
                constexpr std::ptrdiff_t m_flProgressBarStartTime = 0x1324; // float32
                constexpr std::ptrdiff_t m_vecIntroStartEyePosition = 0x1328; // Vector
                constexpr std::ptrdiff_t m_vecIntroStartPlayerForward = 0x1334; // Vector
                constexpr std::ptrdiff_t m_flClientDeathTime = 0x1340; // GameTime_t
                constexpr std::ptrdiff_t m_bScreenTearFrameCaptured = 0x1344; // bool
                constexpr std::ptrdiff_t m_flFlashBangTime = 0x1348; // float32
                constexpr std::ptrdiff_t m_flFlashScreenshotAlpha = 0x134C; // float32
                constexpr std::ptrdiff_t m_flFlashOverlayAlpha = 0x1350; // float32
                constexpr std::ptrdiff_t m_bFlashBuildUp = 0x1354; // bool
                constexpr std::ptrdiff_t m_bFlashDspHasBeenCleared = 0x1355; // bool
                constexpr std::ptrdiff_t m_bFlashScreenshotHasBeenGrabbed = 0x1356; // bool
                constexpr std::ptrdiff_t m_flFlashMaxAlpha = 0x1358; // float32
                constexpr std::ptrdiff_t m_flFlashDuration = 0x135C; // float32
                constexpr std::ptrdiff_t m_iHealthBarRenderMaskIndex = 0x1360; // int32
                constexpr std::ptrdiff_t m_flHealthFadeValue = 0x1364; // float32
                constexpr std::ptrdiff_t m_flHealthFadeAlpha = 0x1368; // float32
                constexpr std::ptrdiff_t m_flDeathCCWeight = 0x1378; // float32
                constexpr std::ptrdiff_t m_flPrevRoundEndTime = 0x137C; // float32
                constexpr std::ptrdiff_t m_flPrevMatchEndTime = 0x1380; // float32
                constexpr std::ptrdiff_t m_angEyeAngles = 0x1388; // QAngle
                constexpr std::ptrdiff_t m_fNextThinkPushAway = 0x13A0; // float32
                constexpr std::ptrdiff_t m_bShouldAutobuyDMWeapons = 0x13A4; // bool
                constexpr std::ptrdiff_t m_bShouldAutobuyNow = 0x13A5; // bool
                constexpr std::ptrdiff_t m_iIDEntIndex = 0x13A8; // CEntityIndex
                constexpr std::ptrdiff_t m_delayTargetIDTimer = 0x13B0; // CountdownTimer
                constexpr std::ptrdiff_t m_iTargetItemEntIdx = 0x13C8; // CEntityIndex
                constexpr std::ptrdiff_t m_iOldIDEntIndex = 0x13CC; // CEntityIndex
                constexpr std::ptrdiff_t m_holdTargetIDTimer = 0x13D0; // CountdownTimer
                constexpr std::ptrdiff_t m_flCurrentMusicStartTime = 0x13EC; // float32
                constexpr std::ptrdiff_t m_flMusicRoundStartTime = 0x13F0; // float32
                constexpr std::ptrdiff_t m_bDeferStartMusicOnWarmup = 0x13F4; // bool
                constexpr std::ptrdiff_t m_cycleLatch = 0x13F8; // int32
                constexpr std::ptrdiff_t m_serverIntendedCycle = 0x13FC; // float32
                constexpr std::ptrdiff_t m_flLastSmokeOverlayAlpha = 0x1400; // float32
                constexpr std::ptrdiff_t m_flLastSmokeAge = 0x1404; // float32
                constexpr std::ptrdiff_t m_vLastSmokeOverlayColor = 0x1408; // Vector
                constexpr std::ptrdiff_t m_nPlayerSmokedFx = 0x1414; // ParticleIndex_t
                constexpr std::ptrdiff_t m_nPlayerInfernoBodyFx = 0x1418; // ParticleIndex_t
                constexpr std::ptrdiff_t m_nPlayerInfernoFootFx = 0x141C; // ParticleIndex_t
                constexpr std::ptrdiff_t m_flNextMagDropTime = 0x1420; // float32
                constexpr std::ptrdiff_t m_nLastMagDropAttachmentIndex = 0x1424; // int32
                constexpr std::ptrdiff_t m_vecLastAliveLocalVelocity = 0x1428; // Vector
                constexpr std::ptrdiff_t m_bGuardianShouldSprayCustomXMark = 0x1450; // bool
                constexpr std::ptrdiff_t m_hOriginalController = 0x1458; // CHandle<CCSPlayerController>
            }
            // Parent: C_WeaponBaseItem
            // Fields count: 0
            namespace C_Item_Healthshot {
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
            namespace C_EnvWindShared {
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
                constexpr std::ptrdiff_t m_location = 0x2C; // Vector
                constexpr std::ptrdiff_t m_iszGustSound = 0x38; // int32
                constexpr std::ptrdiff_t m_iWindDir = 0x3C; // int32
                constexpr std::ptrdiff_t m_flWindSpeed = 0x40; // float32
                constexpr std::ptrdiff_t m_currentWindVector = 0x44; // Vector
                constexpr std::ptrdiff_t m_CurrentSwayVector = 0x50; // Vector
                constexpr std::ptrdiff_t m_PrevSwayVector = 0x5C; // Vector
                constexpr std::ptrdiff_t m_iInitialWindDir = 0x68; // uint16
                constexpr std::ptrdiff_t m_flInitialWindSpeed = 0x6C; // float32
                constexpr std::ptrdiff_t m_flVariationTime = 0x70; // GameTime_t
                constexpr std::ptrdiff_t m_flSwayTime = 0x74; // GameTime_t
                constexpr std::ptrdiff_t m_flSimTime = 0x78; // GameTime_t
                constexpr std::ptrdiff_t m_flSwitchTime = 0x7C; // GameTime_t
                constexpr std::ptrdiff_t m_flAveWindSpeed = 0x80; // float32
                constexpr std::ptrdiff_t m_bGusting = 0x84; // bool
                constexpr std::ptrdiff_t m_flWindAngleVariation = 0x88; // float32
                constexpr std::ptrdiff_t m_flWindSpeedVariation = 0x8C; // float32
                constexpr std::ptrdiff_t m_iEntIndex = 0x90; // CEntityIndex
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
            namespace C_PostProcessingVolume {
                constexpr std::ptrdiff_t m_hPostSettings = 0xCE0; // CStrongHandle<InfoForResourceTypeCPostProcessingResource>
                constexpr std::ptrdiff_t m_flFadeDuration = 0xCE8; // float32
                constexpr std::ptrdiff_t m_flMinLogExposure = 0xCEC; // float32
                constexpr std::ptrdiff_t m_flMaxLogExposure = 0xCF0; // float32
                constexpr std::ptrdiff_t m_flMinExposure = 0xCF4; // float32
                constexpr std::ptrdiff_t m_flMaxExposure = 0xCF8; // float32
                constexpr std::ptrdiff_t m_flExposureCompensation = 0xCFC; // float32
                constexpr std::ptrdiff_t m_flExposureFadeSpeedUp = 0xD00; // float32
                constexpr std::ptrdiff_t m_flExposureFadeSpeedDown = 0xD04; // float32
                constexpr std::ptrdiff_t m_flTonemapEVSmoothingRange = 0xD08; // float32
                constexpr std::ptrdiff_t m_bMaster = 0xD0C; // bool
                constexpr std::ptrdiff_t m_bExposureControl = 0xD0D; // bool
                constexpr std::ptrdiff_t m_flRate = 0xD10; // float32
                constexpr std::ptrdiff_t m_flTonemapPercentTarget = 0xD14; // float32
                constexpr std::ptrdiff_t m_flTonemapPercentBrightPixels = 0xD18; // float32
                constexpr std::ptrdiff_t m_flTonemapMinAvgLum = 0xD1C; // float32
            }
            // Parent: CPlayerPawnComponent
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_hPlayerPing (CHandle<CBaseEntity>)
            namespace CCSPlayer_PingServices {
                constexpr std::ptrdiff_t m_hPlayerPing = 0x40; // CHandle<C_BaseEntity>
            }
            // Parent: CPlayerPawnComponent
            // Fields count: 0
            namespace CPlayer_FlashlightServices {
            }
            // Parent: C_BaseModelEntity
            // Fields count: 0
            namespace CServerOnlyModelEntity {
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
            namespace C_AttributeContainer {
                constexpr std::ptrdiff_t m_Item = 0x50; // C_EconItemView
                constexpr std::ptrdiff_t m_iExternalItemProviderRegisteredToken = 0x498; // int32
                constexpr std::ptrdiff_t m_ullRegisteredAsItemID = 0x4A0; // uint64
            }
            // Parent: C_BaseModelEntity
            // Fields count: 0
            //
            // Metadata:
            // MNetworkOverride
            // MNetworkOverride
            namespace C_FuncRotating {
            }
            // Parent: C_BaseEntity
            // Fields count: 4
            //
            // Metadata:
            // NetworkVarNames: m_flScale (float32)
            // NetworkVarNames: m_flStartScale (float32)
            // NetworkVarNames: m_flScaleTime (float)
            // NetworkVarNames: m_nFlags (uint32)
            namespace C_BaseFire {
                constexpr std::ptrdiff_t m_flScale = 0x548; // float32
                constexpr std::ptrdiff_t m_flStartScale = 0x54C; // float32
                constexpr std::ptrdiff_t m_flScaleTime = 0x550; // float32
                constexpr std::ptrdiff_t m_nFlags = 0x554; // uint32
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
            namespace CBasePlayerController {
                constexpr std::ptrdiff_t m_nFinalPredictedTick = 0x550; // int32
                constexpr std::ptrdiff_t m_CommandContext = 0x558; // C_CommandContext
                constexpr std::ptrdiff_t m_nInButtonsWhichAreToggles = 0x5F0; // uint64
                constexpr std::ptrdiff_t m_nTickBase = 0x5F8; // uint32
                constexpr std::ptrdiff_t m_hPawn = 0x5FC; // CHandle<C_BasePlayerPawn>
                constexpr std::ptrdiff_t m_bKnownTeamMismatch = 0x600; // bool
                constexpr std::ptrdiff_t m_hPredictedPawn = 0x604; // CHandle<C_BasePlayerPawn>
                constexpr std::ptrdiff_t m_nSplitScreenSlot = 0x608; // CSplitScreenSlot
                constexpr std::ptrdiff_t m_hSplitOwner = 0x60C; // CHandle<CBasePlayerController>
                constexpr std::ptrdiff_t m_hSplitScreenPlayers = 0x610; // CUtlVector<CHandle<CBasePlayerController>>
                constexpr std::ptrdiff_t m_bIsHLTV = 0x628; // bool
                constexpr std::ptrdiff_t m_iConnected = 0x62C; // PlayerConnectedState
                constexpr std::ptrdiff_t m_iszPlayerName = 0x630; // char[128]
                constexpr std::ptrdiff_t m_steamID = 0x6B8; // uint64
                constexpr std::ptrdiff_t m_bIsLocalPlayerController = 0x6C0; // bool
                constexpr std::ptrdiff_t m_iDesiredFOV = 0x6C4; // uint32
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            namespace CPointTemplateAPI {
            }
            // Parent: C_BaseCSGrenadeProjectile
            // Fields count: 3
            //
            // Metadata:
            // NetworkVarNames: m_nDecoyShotTick (int)
            namespace C_DecoyProjectile {
                constexpr std::ptrdiff_t m_nDecoyShotTick = 0x1150; // int32
                constexpr std::ptrdiff_t m_nClientLastKnownDecoyShotTick = 0x1154; // int32
                constexpr std::ptrdiff_t m_flTimeParticleEffectSpawn = 0x1178; // GameTime_t
            }
            // Parent: CBaseAnimGraph
            // Fields count: 0
            namespace C_WaterBullet {
            }
            // Parent: C_CSPlayerPawn
            // Fields count: 3
            namespace C_CSGO_PreviewPlayer {
                constexpr std::ptrdiff_t m_animgraph = 0x2358; // CUtlString
                constexpr std::ptrdiff_t m_animgraphCharacterModeString = 0x2360; // CGlobalSymbol
                constexpr std::ptrdiff_t m_flInitialModelScale = 0x2368; // float32
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
            namespace CBaseAnimGraphController {
                constexpr std::ptrdiff_t m_animGraphNetworkedVars = 0x18; // CAnimGraphNetworkedVariables
                constexpr std::ptrdiff_t m_bSequenceFinished = 0x14A8; // bool
                constexpr std::ptrdiff_t m_flSoundSyncTime = 0x14AC; // float32
                constexpr std::ptrdiff_t m_nActiveIKChainMask = 0x14B0; // uint32
                constexpr std::ptrdiff_t m_hSequence = 0x14B4; // HSequence
                constexpr std::ptrdiff_t m_flSeqStartTime = 0x14B8; // GameTime_t
                constexpr std::ptrdiff_t m_flSeqFixedCycle = 0x14BC; // float32
                constexpr std::ptrdiff_t m_nAnimLoopMode = 0x14C0; // AnimLoopMode_t
                constexpr std::ptrdiff_t m_flPlaybackRate = 0x14C4; // CNetworkedQuantizedFloat
                constexpr std::ptrdiff_t m_nNotifyState = 0x14D0; // SequenceFinishNotifyState_t
                constexpr std::ptrdiff_t m_bNetworkedAnimationInputsChanged = 0x14D2; // bool
                constexpr std::ptrdiff_t m_bNetworkedSequenceChanged = 0x14D3; // bool
                constexpr std::ptrdiff_t m_bLastUpdateSkipped = 0x14D4; // bool
                constexpr std::ptrdiff_t m_flPrevAnimUpdateTime = 0x14D8; // GameTime_t
            }
            // Parent: C_BaseEntity
            // Fields count: 0
            namespace CCSPointScriptEntity {
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
            namespace C_C4 {
                constexpr std::ptrdiff_t m_szScreenText = 0x1A80; // char[32]
                constexpr std::ptrdiff_t m_activeLightParticleIndex = 0x1AA0; // ParticleIndex_t
                constexpr std::ptrdiff_t m_eActiveLightEffect = 0x1AA4; // C4LightEffect_t
                constexpr std::ptrdiff_t m_bStartedArming = 0x1AA8; // bool
                constexpr std::ptrdiff_t m_fArmedTime = 0x1AAC; // GameTime_t
                constexpr std::ptrdiff_t m_bBombPlacedAnimation = 0x1AB0; // bool
                constexpr std::ptrdiff_t m_bIsPlantingViaUse = 0x1AB1; // bool
                constexpr std::ptrdiff_t m_entitySpottedState = 0x1AB8; // EntitySpottedState_t
                constexpr std::ptrdiff_t m_nSpotRules = 0x1AD0; // int32
                constexpr std::ptrdiff_t m_bPlayedArmingBeeps = 0x1AD4; // bool[7]
                constexpr std::ptrdiff_t m_bBombPlanted = 0x1ADB; // bool
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
            namespace CBaseAnimGraph {
                constexpr std::ptrdiff_t m_bInitiallyPopulateInterpHistory = 0xD40; // bool
                constexpr std::ptrdiff_t m_bSuppressAnimEventSounds = 0xD42; // bool
                constexpr std::ptrdiff_t m_bAnimGraphUpdateEnabled = 0xD50; // bool
                constexpr std::ptrdiff_t m_flMaxSlopeDistance = 0xD54; // float32
                constexpr std::ptrdiff_t m_vLastSlopeCheckPos = 0xD58; // Vector
                constexpr std::ptrdiff_t m_bAnimationUpdateScheduled = 0xD64; // bool
                constexpr std::ptrdiff_t m_vecForce = 0xD68; // Vector
                constexpr std::ptrdiff_t m_nForceBone = 0xD74; // int32
                constexpr std::ptrdiff_t m_pClientsideRagdoll = 0xD78; // CBaseAnimGraph*
                constexpr std::ptrdiff_t m_bBuiltRagdoll = 0xD80; // bool
                constexpr std::ptrdiff_t m_pRagdollPose = 0xD98; // PhysicsRagdollPose_t*
                constexpr std::ptrdiff_t m_bRagdollClientSide = 0xDA0; // bool
                constexpr std::ptrdiff_t m_bHasAnimatedMaterialAttributes = 0xDB0; // bool
            }
            // Parent: C_CSWeaponBase
            // Fields count: 0
            namespace C_Melee {
            }
            // Parent: C_BaseGrenade
            // Fields count: 0
            namespace CBreachChargeProjectile {
            }
            // Parent: C_BaseEntity
            // Fields count: 0
            namespace C_PointEntity {
            }
            // Parent: C_GameRules
            // Fields count: 0
            namespace C_MultiplayRules {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            namespace CBasePlayerControllerAPI {
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
            namespace C_PathParticleRope {
                constexpr std::ptrdiff_t m_bStartActive = 0x548; // bool
                constexpr std::ptrdiff_t m_flMaxSimulationTime = 0x54C; // float32
                constexpr std::ptrdiff_t m_iszEffectName = 0x550; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_PathNodes_Name = 0x558; // CUtlVector<CUtlSymbolLarge>
                constexpr std::ptrdiff_t m_flParticleSpacing = 0x570; // float32
                constexpr std::ptrdiff_t m_flSlack = 0x574; // float32
                constexpr std::ptrdiff_t m_flRadius = 0x578; // float32
                constexpr std::ptrdiff_t m_ColorTint = 0x57C; // Color
                constexpr std::ptrdiff_t m_nEffectState = 0x580; // int32
                constexpr std::ptrdiff_t m_iEffectIndex = 0x588; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                constexpr std::ptrdiff_t m_PathNodes_Position = 0x590; // C_NetworkUtlVectorBase<Vector>
                constexpr std::ptrdiff_t m_PathNodes_TangentIn = 0x5A8; // C_NetworkUtlVectorBase<Vector>
                constexpr std::ptrdiff_t m_PathNodes_TangentOut = 0x5C0; // C_NetworkUtlVectorBase<Vector>
                constexpr std::ptrdiff_t m_PathNodes_Color = 0x5D8; // C_NetworkUtlVectorBase<Vector>
                constexpr std::ptrdiff_t m_PathNodes_PinEnabled = 0x5F0; // C_NetworkUtlVectorBase<bool>
                constexpr std::ptrdiff_t m_PathNodes_RadiusScale = 0x608; // C_NetworkUtlVectorBase<float32>
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            namespace CCSPointScriptExtensions_CCSWeaponBaseVData {
            }
            // Parent: C_SoundEventEntity
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_vMins (Vector)
            // NetworkVarNames: m_vMaxs (Vector)
            namespace C_SoundEventAABBEntity {
                constexpr std::ptrdiff_t m_vMins = 0x548; // Vector
                constexpr std::ptrdiff_t m_vMaxs = 0x554; // Vector
            }
            // Parent: C_CSWeaponBaseGun
            // Fields count: 0
            namespace C_WeaponP90 {
            }
            // Parent: CBasePulseGraphInstance
            // Fields count: 0
            //
            // Metadata:
            // MPulseInstanceDomainInfo
            // MPulseDomainHookInfo
            // MPulseLibraryBindings
            // MPulseDomainOptInFeatureTag
            namespace CCSGameModeScript {
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
            namespace C_BasePlayerWeapon {
                constexpr std::ptrdiff_t m_nNextPrimaryAttackTick = 0x15B0; // GameTick_t
                constexpr std::ptrdiff_t m_flNextPrimaryAttackTickRatio = 0x15B4; // float32
                constexpr std::ptrdiff_t m_nNextSecondaryAttackTick = 0x15B8; // GameTick_t
                constexpr std::ptrdiff_t m_flNextSecondaryAttackTickRatio = 0x15BC; // float32
                constexpr std::ptrdiff_t m_iClip1 = 0x15C0; // int32
                constexpr std::ptrdiff_t m_iClip2 = 0x15C4; // int32
                constexpr std::ptrdiff_t m_pReserveAmmo = 0x15C8; // int32[2]
            }
            // Parent: CEntitySubclassVDataBase
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
                constexpr std::ptrdiff_t m_aShootSounds = 0x220; // CUtlOrderedMap<WeaponSound_t,CSoundEventName>
                constexpr std::ptrdiff_t m_iSlot = 0x248; // int32
                constexpr std::ptrdiff_t m_iPosition = 0x24C; // int32
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
            namespace C_Fish {
                constexpr std::ptrdiff_t m_pos = 0xED0; // Vector
                constexpr std::ptrdiff_t m_vel = 0xEDC; // Vector
                constexpr std::ptrdiff_t m_angles = 0xEE8; // QAngle
                constexpr std::ptrdiff_t m_localLifeState = 0xEF4; // int32
                constexpr std::ptrdiff_t m_deathDepth = 0xEF8; // float32
                constexpr std::ptrdiff_t m_deathAngle = 0xEFC; // float32
                constexpr std::ptrdiff_t m_buoyancy = 0xF00; // float32
                constexpr std::ptrdiff_t m_wiggleTimer = 0xF08; // CountdownTimer
                constexpr std::ptrdiff_t m_wigglePhase = 0xF20; // float32
                constexpr std::ptrdiff_t m_wiggleRate = 0xF24; // float32
                constexpr std::ptrdiff_t m_actualPos = 0xF28; // Vector
                constexpr std::ptrdiff_t m_actualAngles = 0xF34; // QAngle
                constexpr std::ptrdiff_t m_poolOrigin = 0xF40; // Vector
                constexpr std::ptrdiff_t m_waterLevel = 0xF4C; // float32
                constexpr std::ptrdiff_t m_gotUpdate = 0xF50; // bool
                constexpr std::ptrdiff_t m_x = 0xF54; // float32
                constexpr std::ptrdiff_t m_y = 0xF58; // float32
                constexpr std::ptrdiff_t m_z = 0xF5C; // float32
                constexpr std::ptrdiff_t m_angle = 0xF60; // float32
                constexpr std::ptrdiff_t m_errorHistory = 0xF64; // float32[20]
                constexpr std::ptrdiff_t m_errorHistoryIndex = 0xFB4; // int32
                constexpr std::ptrdiff_t m_errorHistoryCount = 0xFB8; // int32
                constexpr std::ptrdiff_t m_averageError = 0xFBC; // float32
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
            // Parent: C_CSWeaponBaseGun
            // Fields count: 0
            namespace C_WeaponAWP {
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
            namespace C_BasePlayerPawn {
                constexpr std::ptrdiff_t m_pWeaponServices = 0x10F8; // CPlayer_WeaponServices*
                constexpr std::ptrdiff_t m_pItemServices = 0x1100; // CPlayer_ItemServices*
                constexpr std::ptrdiff_t m_pAutoaimServices = 0x1108; // CPlayer_AutoaimServices*
                constexpr std::ptrdiff_t m_pObserverServices = 0x1110; // CPlayer_ObserverServices*
                constexpr std::ptrdiff_t m_pWaterServices = 0x1118; // CPlayer_WaterServices*
                constexpr std::ptrdiff_t m_pUseServices = 0x1120; // CPlayer_UseServices*
                constexpr std::ptrdiff_t m_pFlashlightServices = 0x1128; // CPlayer_FlashlightServices*
                constexpr std::ptrdiff_t m_pCameraServices = 0x1130; // CPlayer_CameraServices*
                constexpr std::ptrdiff_t m_pMovementServices = 0x1138; // CPlayer_MovementServices*
                constexpr std::ptrdiff_t m_ServerViewAngleChanges = 0x1148; // C_UtlVectorEmbeddedNetworkVar<ViewAngleServerChange_t>
                constexpr std::ptrdiff_t m_nHighestConsumedServerViewAngleChangeIndex = 0x1198; // uint32
                constexpr std::ptrdiff_t v_angle = 0x119C; // QAngle
                constexpr std::ptrdiff_t v_anglePrevious = 0x11A8; // QAngle
                constexpr std::ptrdiff_t m_iHideHUD = 0x11B4; // uint32
                constexpr std::ptrdiff_t m_skybox3d = 0x11B8; // sky3dparams_t
                constexpr std::ptrdiff_t m_flDeathTime = 0x1248; // GameTime_t
                constexpr std::ptrdiff_t m_vecPredictionError = 0x124C; // Vector
                constexpr std::ptrdiff_t m_flPredictionErrorTime = 0x1258; // GameTime_t
                constexpr std::ptrdiff_t m_vecLastCameraSetupLocalOrigin = 0x125C; // Vector
                constexpr std::ptrdiff_t m_flLastCameraSetupTime = 0x1268; // GameTime_t
                constexpr std::ptrdiff_t m_flFOVSensitivityAdjust = 0x126C; // float32
                constexpr std::ptrdiff_t m_flMouseSensitivity = 0x1270; // float32
                constexpr std::ptrdiff_t m_vOldOrigin = 0x1274; // Vector
                constexpr std::ptrdiff_t m_flOldSimulationTime = 0x1280; // float32
                constexpr std::ptrdiff_t m_nLastExecutedCommandNumber = 0x1284; // int32
                constexpr std::ptrdiff_t m_nLastExecutedCommandTick = 0x1288; // int32
                constexpr std::ptrdiff_t m_hController = 0x128C; // CHandle<CBasePlayerController>
                constexpr std::ptrdiff_t m_bIsSwappingToPredictableController = 0x1290; // bool
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // NetworkVarNames: m_iReapplyProvisionParity (int)
            // NetworkVarNames: m_hOuter (EHANDLE)
            // NetworkVarNames: m_ProviderType (attributeprovidertypes_t)
            namespace CAttributeManager {
                constexpr std::ptrdiff_t m_Providers = 0x8; // CUtlVector<CHandle<C_BaseEntity>>
                constexpr std::ptrdiff_t m_iReapplyProvisionParity = 0x20; // int32
                constexpr std::ptrdiff_t m_hOuter = 0x24; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_bPreventLoopback = 0x28; // bool
                constexpr std::ptrdiff_t m_ProviderType = 0x2C; // attributeprovidertypes_t
                constexpr std::ptrdiff_t m_CachedResults = 0x30; // CUtlVector<CAttributeManager::cached_attribute_float_t>
            }
            // Parent: C_BaseEntity
            // Fields count: 0
            namespace CLogicalEntity {
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
                constexpr std::ptrdiff_t m_PredNetBoolVariables = 0x8; // C_NetworkUtlVectorBase<uint32>
                constexpr std::ptrdiff_t m_PredNetByteVariables = 0x20; // C_NetworkUtlVectorBase<uint8>
                constexpr std::ptrdiff_t m_PredNetUInt16Variables = 0x38; // C_NetworkUtlVectorBase<uint16>
                constexpr std::ptrdiff_t m_PredNetIntVariables = 0x50; // C_NetworkUtlVectorBase<int32>
                constexpr std::ptrdiff_t m_PredNetUInt32Variables = 0x68; // C_NetworkUtlVectorBase<uint32>
                constexpr std::ptrdiff_t m_PredNetUInt64Variables = 0x80; // C_NetworkUtlVectorBase<uint64>
                constexpr std::ptrdiff_t m_PredNetFloatVariables = 0x98; // C_NetworkUtlVectorBase<float32>
                constexpr std::ptrdiff_t m_PredNetVectorVariables = 0xB0; // C_NetworkUtlVectorBase<Vector>
                constexpr std::ptrdiff_t m_PredNetQuaternionVariables = 0xC8; // C_NetworkUtlVectorBase<Quaternion>
                constexpr std::ptrdiff_t m_PredNetGlobalSymbolVariables = 0xE0; // C_NetworkUtlVectorBase<CGlobalSymbol>
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetBoolVariables = 0xF8; // C_NetworkUtlVectorBase<uint32>
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetByteVariables = 0x110; // C_NetworkUtlVectorBase<uint8>
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetUInt16Variables = 0x128; // C_NetworkUtlVectorBase<uint16>
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetIntVariables = 0x140; // C_NetworkUtlVectorBase<int32>
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetUInt32Variables = 0x158; // C_NetworkUtlVectorBase<uint32>
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetUInt64Variables = 0x170; // C_NetworkUtlVectorBase<uint64>
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetFloatVariables = 0x188; // C_NetworkUtlVectorBase<float32>
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetVectorVariables = 0x1A0; // C_NetworkUtlVectorBase<Vector>
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetQuaternionVariables = 0x1B8; // C_NetworkUtlVectorBase<Quaternion>
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetGlobalSymbolVariables = 0x1D0; // C_NetworkUtlVectorBase<CGlobalSymbol>
                constexpr std::ptrdiff_t m_nBoolVariablesCount = 0x1E8; // int32
                constexpr std::ptrdiff_t m_nOwnerOnlyBoolVariablesCount = 0x1EC; // int32
                constexpr std::ptrdiff_t m_nRandomSeedOffset = 0x1F0; // int32
                constexpr std::ptrdiff_t m_flLastTeleportTime = 0x1F4; // float32
            }
            // Parent: C_BaseTrigger
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_flFluidDensity (float)
            namespace C_TriggerBuoyancy {
                constexpr std::ptrdiff_t m_BuoyancyHelper = 0xCD0; // CBuoyancyHelper
                constexpr std::ptrdiff_t m_flFluidDensity = 0xCF0; // float32
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
            namespace C_RopeKeyframe {
                constexpr std::ptrdiff_t m_LinksTouchingSomething = 0xCD0; // CBitVec<10>
                constexpr std::ptrdiff_t m_nLinksTouchingSomething = 0xCD4; // int32
                constexpr std::ptrdiff_t m_bApplyWind = 0xCD8; // bool
                constexpr std::ptrdiff_t m_fPrevLockedPoints = 0xCDC; // int32
                constexpr std::ptrdiff_t m_iForcePointMoveCounter = 0xCE0; // int32
                constexpr std::ptrdiff_t m_bPrevEndPointPos = 0xCE4; // bool[2]
                constexpr std::ptrdiff_t m_vPrevEndPointPos = 0xCE8; // Vector[2]
                constexpr std::ptrdiff_t m_flCurScroll = 0xD00; // float32
                constexpr std::ptrdiff_t m_flScrollSpeed = 0xD04; // float32
                constexpr std::ptrdiff_t m_RopeFlags = 0xD08; // uint16
                constexpr std::ptrdiff_t m_iRopeMaterialModelIndex = 0xD10; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_LightValues = 0xF88; // Vector[10]
                constexpr std::ptrdiff_t m_nSegments = 0x1000; // uint8
                constexpr std::ptrdiff_t m_hStartPoint = 0x1004; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_hEndPoint = 0x1008; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_iStartAttachment = 0x100C; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_iEndAttachment = 0x100D; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_Subdiv = 0x100E; // uint8
                constexpr std::ptrdiff_t m_RopeLength = 0x1010; // int16
                constexpr std::ptrdiff_t m_Slack = 0x1012; // int16
                constexpr std::ptrdiff_t m_TextureScale = 0x1014; // float32
                constexpr std::ptrdiff_t m_fLockedPoints = 0x1018; // uint8
                constexpr std::ptrdiff_t m_nChangeCount = 0x1019; // uint8
                constexpr std::ptrdiff_t m_Width = 0x101C; // float32
                constexpr std::ptrdiff_t m_PhysicsDelegate = 0x1020; // C_RopeKeyframe::CPhysicsDelegate
                constexpr std::ptrdiff_t m_hMaterial = 0x1030; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_TextureHeight = 0x1038; // int32
                constexpr std::ptrdiff_t m_vecImpulse = 0x103C; // Vector
                constexpr std::ptrdiff_t m_vecPreviousImpulse = 0x1048; // Vector
                constexpr std::ptrdiff_t m_flCurrentGustTimer = 0x1054; // float32
                constexpr std::ptrdiff_t m_flCurrentGustLifetime = 0x1058; // float32
                constexpr std::ptrdiff_t m_flTimeToNextGust = 0x105C; // float32
                constexpr std::ptrdiff_t m_vWindDir = 0x1060; // Vector
                constexpr std::ptrdiff_t m_vColorMod = 0x106C; // Vector
                constexpr std::ptrdiff_t m_vCachedEndPointAttachmentPos = 0x1078; // Vector[2]
                constexpr std::ptrdiff_t m_vCachedEndPointAttachmentAngle = 0x1090; // QAngle[2]
                constexpr std::ptrdiff_t m_bConstrainBetweenEndpoints = 0x10A8; // bool
                constexpr std::ptrdiff_t m_bEndPointAttachmentPositionsDirty = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bEndPointAttachmentAnglesDirty = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bNewDataThisFrame = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bPhysicsInitted = 0x0; // bitfield:1
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
            namespace C_GradientFog {
                constexpr std::ptrdiff_t m_hGradientFogTexture = 0x548; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_flFogStartDistance = 0x550; // float32
                constexpr std::ptrdiff_t m_flFogEndDistance = 0x554; // float32
                constexpr std::ptrdiff_t m_bHeightFogEnabled = 0x558; // bool
                constexpr std::ptrdiff_t m_flFogStartHeight = 0x55C; // float32
                constexpr std::ptrdiff_t m_flFogEndHeight = 0x560; // float32
                constexpr std::ptrdiff_t m_flFarZ = 0x564; // float32
                constexpr std::ptrdiff_t m_flFogMaxOpacity = 0x568; // float32
                constexpr std::ptrdiff_t m_flFogFalloffExponent = 0x56C; // float32
                constexpr std::ptrdiff_t m_flFogVerticalExponent = 0x570; // float32
                constexpr std::ptrdiff_t m_fogColor = 0x574; // Color
                constexpr std::ptrdiff_t m_flFogStrength = 0x578; // float32
                constexpr std::ptrdiff_t m_flFadeTime = 0x57C; // float32
                constexpr std::ptrdiff_t m_bStartDisabled = 0x580; // bool
                constexpr std::ptrdiff_t m_bIsEnabled = 0x581; // bool
                constexpr std::ptrdiff_t m_bGradientFogNeedsTextures = 0x582; // bool
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
            // Parent: C_CSGO_MapPreviewCameraPath
            // Fields count: 7
            namespace C_CSGO_TeamPreviewCamera {
                constexpr std::ptrdiff_t m_nVariant = 0x5B0; // int32
                constexpr std::ptrdiff_t m_bDofEnabled = 0x5B4; // bool
                constexpr std::ptrdiff_t m_flDofNearBlurry = 0x5B8; // float32
                constexpr std::ptrdiff_t m_flDofNearCrisp = 0x5BC; // float32
                constexpr std::ptrdiff_t m_flDofFarCrisp = 0x5C0; // float32
                constexpr std::ptrdiff_t m_flDofFarBlurry = 0x5C4; // float32
                constexpr std::ptrdiff_t m_flDofTiltToGround = 0x5C8; // float32
            }
            // Parent: CCSPlayerBase_CameraServices
            // Fields count: 1
            namespace CCSPlayer_CameraServices {
                constexpr std::ptrdiff_t m_flDeathCamTilt = 0x228; // float32
            }
            // Parent: C_CSGO_TeamSelectCharacterPosition
            // Fields count: 0
            namespace C_CSGO_TeamSelectCounterTerroristPosition {
            }
            // Parent: C_EconEntity
            // Fields count: 2
            namespace C_EconWearable {
                constexpr std::ptrdiff_t m_nForceSkin = 0x15B0; // int32
                constexpr std::ptrdiff_t m_bAlwaysAllow = 0x15B4; // bool
            }
            // Parent: C_CSGO_TeamIntroCharacterPosition
            // Fields count: 0
            namespace CCSGO_WingmanIntroCharacterPosition {
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
            namespace CSMatchStats_t {
                constexpr std::ptrdiff_t m_iEnemy5Ks = 0x68; // int32
                constexpr std::ptrdiff_t m_iEnemy4Ks = 0x6C; // int32
                constexpr std::ptrdiff_t m_iEnemy3Ks = 0x70; // int32
                constexpr std::ptrdiff_t m_iEnemyKnifeKills = 0x74; // int32
                constexpr std::ptrdiff_t m_iEnemyTaserKills = 0x78; // int32
            }
            // Parent: C_BaseModelEntity
            // Fields count: 0
            namespace C_BaseToggle {
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
            namespace C_EnvVolumetricFogVolume {
                constexpr std::ptrdiff_t m_bActive = 0x548; // bool
                constexpr std::ptrdiff_t m_vBoxMins = 0x54C; // Vector
                constexpr std::ptrdiff_t m_vBoxMaxs = 0x558; // Vector
                constexpr std::ptrdiff_t m_bStartDisabled = 0x564; // bool
                constexpr std::ptrdiff_t m_flStrength = 0x568; // float32
                constexpr std::ptrdiff_t m_nFalloffShape = 0x56C; // int32
                constexpr std::ptrdiff_t m_flFalloffExponent = 0x570; // float32
                constexpr std::ptrdiff_t m_flHeightFogDepth = 0x574; // float32
                constexpr std::ptrdiff_t m_fHeightFogEdgeWidth = 0x578; // float32
                constexpr std::ptrdiff_t m_fIndirectLightStrength = 0x57C; // float32
                constexpr std::ptrdiff_t m_fSunLightStrength = 0x580; // float32
                constexpr std::ptrdiff_t m_fNoiseStrength = 0x584; // float32
                constexpr std::ptrdiff_t m_bOverrideIndirectLightStrength = 0x588; // bool
                constexpr std::ptrdiff_t m_bOverrideSunLightStrength = 0x589; // bool
                constexpr std::ptrdiff_t m_bOverrideNoiseStrength = 0x58A; // bool
            }
            // Parent: C_BaseModelEntity
            // Fields count: 0
            namespace CWaterSplasher {
            }
            // Parent: C_BaseModelEntity
            // Fields count: 0
            namespace C_ModelPointEntity {
            }
            // Parent: CPlayer_ViewModelServices
            // Fields count: 0
            namespace CCSObserver_ViewModelServices {
            }
            // Parent: C_BaseFire
            // Fields count: 13
            //
            // Metadata:
            // MNetworkOverride
            // MNetworkOverride
            // NetworkVarNames: m_nFlameModelIndex (int32)
            // NetworkVarNames: m_nFlameFromAboveModelIndex (int32)
            namespace C_FireSmoke {
                constexpr std::ptrdiff_t m_nFlameModelIndex = 0x558; // int32
                constexpr std::ptrdiff_t m_nFlameFromAboveModelIndex = 0x55C; // int32
                constexpr std::ptrdiff_t m_flScaleRegister = 0x560; // float32
                constexpr std::ptrdiff_t m_flScaleStart = 0x564; // float32
                constexpr std::ptrdiff_t m_flScaleEnd = 0x568; // float32
                constexpr std::ptrdiff_t m_flScaleTimeStart = 0x56C; // GameTime_t
                constexpr std::ptrdiff_t m_flScaleTimeEnd = 0x570; // GameTime_t
                constexpr std::ptrdiff_t m_flChildFlameSpread = 0x574; // float32
                constexpr std::ptrdiff_t m_flClipPerc = 0x588; // float32
                constexpr std::ptrdiff_t m_bClipTested = 0x58C; // bool
                constexpr std::ptrdiff_t m_bFadingOut = 0x58D; // bool
                constexpr std::ptrdiff_t m_tParticleSpawn = 0x590; // TimedEvent
                constexpr std::ptrdiff_t m_pFireOverlay = 0x598; // CFireOverlay*
            }
            // Parent: C_CSWeaponBaseGun
            // Fields count: 0
            namespace C_WeaponRevolver {
            }
            // Parent: C_Sprite
            // Fields count: 0
            namespace C_FireFromAboveSprite {
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
            namespace C_EnvCombinedLightProbeVolume {
                constexpr std::ptrdiff_t m_Entity_Color = 0x15A8; // Color
                constexpr std::ptrdiff_t m_Entity_flBrightness = 0x15AC; // float32
                constexpr std::ptrdiff_t m_Entity_hCubemapTexture = 0x15B0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_bCustomCubemapTexture = 0x15B8; // bool
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture = 0x15C0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightIndicesTexture = 0x15C8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightScalarsTexture = 0x15D0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightShadowsTexture = 0x15D8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_vBoxMins = 0x15E0; // Vector
                constexpr std::ptrdiff_t m_Entity_vBoxMaxs = 0x15EC; // Vector
                constexpr std::ptrdiff_t m_Entity_bMoveable = 0x15F8; // bool
                constexpr std::ptrdiff_t m_Entity_nHandshake = 0x15FC; // int32
                constexpr std::ptrdiff_t m_Entity_nEnvCubeMapArrayIndex = 0x1600; // int32
                constexpr std::ptrdiff_t m_Entity_nPriority = 0x1604; // int32
                constexpr std::ptrdiff_t m_Entity_bStartDisabled = 0x1608; // bool
                constexpr std::ptrdiff_t m_Entity_flEdgeFadeDist = 0x160C; // float32
                constexpr std::ptrdiff_t m_Entity_vEdgeFadeDists = 0x1610; // Vector
                constexpr std::ptrdiff_t m_Entity_nLightProbeSizeX = 0x161C; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeSizeY = 0x1620; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeSizeZ = 0x1624; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasX = 0x1628; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasY = 0x162C; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasZ = 0x1630; // int32
                constexpr std::ptrdiff_t m_Entity_bEnabled = 0x1649; // bool
            }
            // Parent: C_SoundOpvarSetPointBase
            // Fields count: 0
            namespace C_SoundOpvarSetOBBWindEntity {
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // NetworkVarNames: m_Handle (ModelConfigHandle_t)
            // NetworkVarNames: m_Name (string_t)
            // NetworkVarNames: m_AssociatedEntities (CHandle<C_BaseModelEntity>)
            // NetworkVarNames: m_AssociatedEntityNames (string_t)
            namespace ActiveModelConfig_t {
                constexpr std::ptrdiff_t m_Handle = 0x28; // ModelConfigHandle_t
                constexpr std::ptrdiff_t m_Name = 0x30; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_AssociatedEntities = 0x38; // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
                constexpr std::ptrdiff_t m_AssociatedEntityNames = 0x50; // C_NetworkUtlVectorBase<CUtlSymbolLarge>
            }
            // Parent: C_CSWeaponBaseGun
            // Fields count: 0
            namespace C_WeaponMP5SD {
            }
            // Parent: C_DynamicProp
            // Fields count: 0
            namespace C_DynamicPropAlias_dynamic_prop {
            }
            // Parent: CPlayerPawnComponent
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_totalHitsOnServer (int32)
            namespace CCSPlayer_BulletServices {
                constexpr std::ptrdiff_t m_totalHitsOnServer = 0x40; // int32
            }
            // Parent: CLogicalEntity
            // Fields count: 7
            namespace CLogicRelay {
                constexpr std::ptrdiff_t m_OnTrigger = 0x548; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnSpawn = 0x570; // CEntityIOOutput
                constexpr std::ptrdiff_t m_bDisabled = 0x598; // bool
                constexpr std::ptrdiff_t m_bWaitForRefire = 0x599; // bool
                constexpr std::ptrdiff_t m_bTriggerOnce = 0x59A; // bool
                constexpr std::ptrdiff_t m_bFastRetrigger = 0x59B; // bool
                constexpr std::ptrdiff_t m_bPassthoughCaller = 0x59C; // bool
            }
            // Parent: C_PointCamera
            // Fields count: 1
            namespace C_PointCameraVFOV {
                constexpr std::ptrdiff_t m_flVerticalFOV = 0x5A8; // float32
            }
            // Parent: CPlayer_ItemServices
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
            namespace C_BarnLight {
                constexpr std::ptrdiff_t m_bEnabled = 0xCC8; // bool
                constexpr std::ptrdiff_t m_nColorMode = 0xCCC; // int32
                constexpr std::ptrdiff_t m_Color = 0xCD0; // Color
                constexpr std::ptrdiff_t m_flColorTemperature = 0xCD4; // float32
                constexpr std::ptrdiff_t m_flBrightness = 0xCD8; // float32
                constexpr std::ptrdiff_t m_flBrightnessScale = 0xCDC; // float32
                constexpr std::ptrdiff_t m_nDirectLight = 0xCE0; // int32
                constexpr std::ptrdiff_t m_nBakedShadowIndex = 0xCE4; // int32
                constexpr std::ptrdiff_t m_nLuminaireShape = 0xCE8; // int32
                constexpr std::ptrdiff_t m_flLuminaireSize = 0xCEC; // float32
                constexpr std::ptrdiff_t m_flLuminaireAnisotropy = 0xCF0; // float32
                constexpr std::ptrdiff_t m_LightStyleString = 0xCF8; // CUtlString
                constexpr std::ptrdiff_t m_flLightStyleStartTime = 0xD00; // GameTime_t
                constexpr std::ptrdiff_t m_QueuedLightStyleStrings = 0xD08; // C_NetworkUtlVectorBase<CUtlString>
                constexpr std::ptrdiff_t m_LightStyleEvents = 0xD20; // C_NetworkUtlVectorBase<CUtlString>
                constexpr std::ptrdiff_t m_LightStyleTargets = 0xD38; // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
                constexpr std::ptrdiff_t m_StyleEvent = 0xD50; // CEntityIOOutput[4]
                constexpr std::ptrdiff_t m_hLightCookie = 0xDF0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_flShape = 0xDF8; // float32
                constexpr std::ptrdiff_t m_flSoftX = 0xDFC; // float32
                constexpr std::ptrdiff_t m_flSoftY = 0xE00; // float32
                constexpr std::ptrdiff_t m_flSkirt = 0xE04; // float32
                constexpr std::ptrdiff_t m_flSkirtNear = 0xE08; // float32
                constexpr std::ptrdiff_t m_vSizeParams = 0xE0C; // Vector
                constexpr std::ptrdiff_t m_flRange = 0xE18; // float32
                constexpr std::ptrdiff_t m_vShear = 0xE1C; // Vector
                constexpr std::ptrdiff_t m_nBakeSpecularToCubemaps = 0xE28; // int32
                constexpr std::ptrdiff_t m_vBakeSpecularToCubemapsSize = 0xE2C; // Vector
                constexpr std::ptrdiff_t m_nCastShadows = 0xE38; // int32
                constexpr std::ptrdiff_t m_nShadowMapSize = 0xE3C; // int32
                constexpr std::ptrdiff_t m_nShadowPriority = 0xE40; // int32
                constexpr std::ptrdiff_t m_bContactShadow = 0xE44; // bool
                constexpr std::ptrdiff_t m_nBounceLight = 0xE48; // int32
                constexpr std::ptrdiff_t m_flBounceScale = 0xE4C; // float32
                constexpr std::ptrdiff_t m_flMinRoughness = 0xE50; // float32
                constexpr std::ptrdiff_t m_vAlternateColor = 0xE54; // Vector
                constexpr std::ptrdiff_t m_fAlternateColorBrightness = 0xE60; // float32
                constexpr std::ptrdiff_t m_nFog = 0xE64; // int32
                constexpr std::ptrdiff_t m_flFogStrength = 0xE68; // float32
                constexpr std::ptrdiff_t m_nFogShadows = 0xE6C; // int32
                constexpr std::ptrdiff_t m_flFogScale = 0xE70; // float32
                constexpr std::ptrdiff_t m_flFadeSizeStart = 0xE74; // float32
                constexpr std::ptrdiff_t m_flFadeSizeEnd = 0xE78; // float32
                constexpr std::ptrdiff_t m_flShadowFadeSizeStart = 0xE7C; // float32
                constexpr std::ptrdiff_t m_flShadowFadeSizeEnd = 0xE80; // float32
                constexpr std::ptrdiff_t m_bPrecomputedFieldsValid = 0xE84; // bool
                constexpr std::ptrdiff_t m_vPrecomputedBoundsMins = 0xE88; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedBoundsMaxs = 0xE94; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin = 0xEA0; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles = 0xEAC; // QAngle
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent = 0xEB8; // Vector
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
            namespace C_TonemapController2 {
                constexpr std::ptrdiff_t m_flAutoExposureMin = 0x548; // float32
                constexpr std::ptrdiff_t m_flAutoExposureMax = 0x54C; // float32
                constexpr std::ptrdiff_t m_flTonemapPercentTarget = 0x550; // float32
                constexpr std::ptrdiff_t m_flTonemapPercentBrightPixels = 0x554; // float32
                constexpr std::ptrdiff_t m_flTonemapMinAvgLum = 0x558; // float32
                constexpr std::ptrdiff_t m_flExposureAdaptationSpeedUp = 0x55C; // float32
                constexpr std::ptrdiff_t m_flExposureAdaptationSpeedDown = 0x560; // float32
                constexpr std::ptrdiff_t m_flTonemapEVSmoothingRange = 0x564; // float32
            }
            // Parent: C_CSWeaponBaseGun
            // Fields count: 0
            namespace C_WeaponG3SG1 {
            }
            // Parent: C_BaseModelEntity
            // Fields count: 1
            namespace CFuncWater {
                constexpr std::ptrdiff_t m_BuoyancyHelper = 0xCC8; // CBuoyancyHelper
            }
            // Parent: C_SoundOpvarSetPointEntity
            // Fields count: 0
            namespace C_SoundOpvarSetAutoRoomEntity {
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
            namespace C_EconEntity {
                constexpr std::ptrdiff_t m_flFlexDelayTime = 0x1078; // float32
                constexpr std::ptrdiff_t m_flFlexDelayedWeight = 0x1080; // float32*
                constexpr std::ptrdiff_t m_bAttributesInitialized = 0x1088; // bool
                constexpr std::ptrdiff_t m_AttributeManager = 0x1090; // C_AttributeContainer
                constexpr std::ptrdiff_t m_OriginalOwnerXuidLow = 0x1538; // uint32
                constexpr std::ptrdiff_t m_OriginalOwnerXuidHigh = 0x153C; // uint32
                constexpr std::ptrdiff_t m_nFallbackPaintKit = 0x1540; // int32
                constexpr std::ptrdiff_t m_nFallbackSeed = 0x1544; // int32
                constexpr std::ptrdiff_t m_flFallbackWear = 0x1548; // float32
                constexpr std::ptrdiff_t m_nFallbackStatTrak = 0x154C; // int32
                constexpr std::ptrdiff_t m_bClientside = 0x1550; // bool
                constexpr std::ptrdiff_t m_bParticleSystemsCreated = 0x1551; // bool
                constexpr std::ptrdiff_t m_vecAttachedParticles = 0x1558; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_hViewmodelAttachment = 0x1570; // CHandle<CBaseAnimGraph>
                constexpr std::ptrdiff_t m_iOldTeam = 0x1574; // int32
                constexpr std::ptrdiff_t m_bAttachmentDirty = 0x1578; // bool
                constexpr std::ptrdiff_t m_nUnloadedModelIndex = 0x157C; // int32
                constexpr std::ptrdiff_t m_iNumOwnerValidationRetries = 0x1580; // int32
                constexpr std::ptrdiff_t m_hOldProvidee = 0x1590; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_vecAttachedModels = 0x1598; // CUtlVector<C_EconEntity::AttachedModelData_t>
            }
            // Parent: C_CSWeaponBaseGun
            // Fields count: 0
            namespace C_WeaponSG556 {
            }
            // Parent: C_BarnLight
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_bShowLight (bool)
            namespace C_RectLight {
                constexpr std::ptrdiff_t m_bShowLight = 0xF10; // bool
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
            namespace C_ParticleSystem {
                constexpr std::ptrdiff_t m_szSnapshotFileName = 0xCC8; // char[512]
                constexpr std::ptrdiff_t m_bActive = 0xEC8; // bool
                constexpr std::ptrdiff_t m_bFrozen = 0xEC9; // bool
                constexpr std::ptrdiff_t m_flFreezeTransitionDuration = 0xECC; // float32
                constexpr std::ptrdiff_t m_nStopType = 0xED0; // int32
                constexpr std::ptrdiff_t m_bAnimateDuringGameplayPause = 0xED4; // bool
                constexpr std::ptrdiff_t m_iEffectIndex = 0xED8; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                constexpr std::ptrdiff_t m_flStartTime = 0xEE0; // GameTime_t
                constexpr std::ptrdiff_t m_flPreSimTime = 0xEE4; // float32
                constexpr std::ptrdiff_t m_vServerControlPoints = 0xEE8; // Vector[4]
                constexpr std::ptrdiff_t m_iServerControlPointAssignments = 0xF18; // uint8[4]
                constexpr std::ptrdiff_t m_hControlPointEnts = 0xF1C; // CHandle<C_BaseEntity>[64]
                constexpr std::ptrdiff_t m_bNoSave = 0x101C; // bool
                constexpr std::ptrdiff_t m_bNoFreeze = 0x101D; // bool
                constexpr std::ptrdiff_t m_bNoRamp = 0x101E; // bool
                constexpr std::ptrdiff_t m_bStartActive = 0x101F; // bool
                constexpr std::ptrdiff_t m_iszEffectName = 0x1020; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszControlPointNames = 0x1028; // CUtlSymbolLarge[64]
                constexpr std::ptrdiff_t m_nDataCP = 0x1228; // int32
                constexpr std::ptrdiff_t m_vecDataCPValue = 0x122C; // Vector
                constexpr std::ptrdiff_t m_nTintCP = 0x1238; // int32
                constexpr std::ptrdiff_t m_clrTint = 0x123C; // Color
                constexpr std::ptrdiff_t m_bOldActive = 0x1260; // bool
                constexpr std::ptrdiff_t m_bOldFrozen = 0x1261; // bool
            }
            // Parent: C_CSGO_PreviewPlayer
            // Fields count: 0
            namespace C_CSGO_TeamPreviewModel {
            }
            // Parent: C_CSWeaponBaseGun
            // Fields count: 0
            namespace C_WeaponGlock {
            }
            // Parent: C_GameRulesProxy
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_pGameRules (C_CSGameRules*)
            namespace C_CSGameRulesProxy {
                constexpr std::ptrdiff_t m_pGameRules = 0x548; // C_CSGameRules*
            }
            // Parent: CPlayerPawnComponent
            // Fields count: 6
            //
            // Metadata:
            // NetworkVarNames: m_iObserverMode (uint8)
            // NetworkVarNames: m_hObserverTarget (CHandle<CBaseEntity>)
            namespace CPlayer_ObserverServices {
                constexpr std::ptrdiff_t m_iObserverMode = 0x40; // uint8
                constexpr std::ptrdiff_t m_hObserverTarget = 0x44; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_iObserverLastMode = 0x48; // ObserverMode_t
                constexpr std::ptrdiff_t m_bForcedObserverMode = 0x4C; // bool
                constexpr std::ptrdiff_t m_flObserverChaseDistance = 0x50; // float32
                constexpr std::ptrdiff_t m_flObserverChaseDistanceCalcTime = 0x54; // GameTime_t
            }
            // Parent: C_CSWeaponBaseGun
            // Fields count: 0
            namespace CWeaponZoneRepulsor {
            }
            // Parent: CPlayerPawnComponent
            // Fields count: 0
            namespace CPlayer_WaterServices {
            }
            // Parent: C_CSGO_EndOfMatchLineupEndpoint
            // Fields count: 0
            namespace C_CSGO_EndOfMatchLineupEnd {
            }
            // Parent: None
            // Fields count: 6
            namespace SequenceHistory_t {
                constexpr std::ptrdiff_t m_hSequence = 0x0; // HSequence
                constexpr std::ptrdiff_t m_flSeqStartTime = 0x4; // GameTime_t
                constexpr std::ptrdiff_t m_flSeqFixedCycle = 0x8; // float32
                constexpr std::ptrdiff_t m_nSeqLoopMode = 0xC; // AnimLoopMode_t
                constexpr std::ptrdiff_t m_flPlaybackRate = 0x10; // float32
                constexpr std::ptrdiff_t m_flCyclesPerSecond = 0x14; // float32
            }
            // Parent: CBaseAnimGraph
            // Fields count: 1
            namespace C_Multimeter {
                constexpr std::ptrdiff_t m_hTargetC4 = 0xED8; // CHandle<C_PlantedC4>
            }
            // Parent: C_BaseEntity
            // Fields count: 2
            namespace C_CsmFovOverride {
                constexpr std::ptrdiff_t m_cameraName = 0x548; // CUtlString
                constexpr std::ptrdiff_t m_flCsmFovOverrideValue = 0x550; // float32
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
            namespace C_EnvDecal {
                constexpr std::ptrdiff_t m_hDecalMaterial = 0xCC8; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_flWidth = 0xCD0; // float32
                constexpr std::ptrdiff_t m_flHeight = 0xCD4; // float32
                constexpr std::ptrdiff_t m_flDepth = 0xCD8; // float32
                constexpr std::ptrdiff_t m_nRenderOrder = 0xCDC; // uint32
                constexpr std::ptrdiff_t m_bProjectOnWorld = 0xCE0; // bool
                constexpr std::ptrdiff_t m_bProjectOnCharacters = 0xCE1; // bool
                constexpr std::ptrdiff_t m_bProjectOnWater = 0xCE2; // bool
                constexpr std::ptrdiff_t m_flDepthSortBias = 0xCE4; // float32
            }
            // Parent: CCSGameModeRules
            // Fields count: 0
            namespace CCSGameModeRules_Noop {
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
            namespace C_ColorCorrection {
                constexpr std::ptrdiff_t m_vecOrigin = 0x548; // Vector
                constexpr std::ptrdiff_t m_MinFalloff = 0x554; // float32
                constexpr std::ptrdiff_t m_MaxFalloff = 0x558; // float32
                constexpr std::ptrdiff_t m_flFadeInDuration = 0x55C; // float32
                constexpr std::ptrdiff_t m_flFadeOutDuration = 0x560; // float32
                constexpr std::ptrdiff_t m_flMaxWeight = 0x564; // float32
                constexpr std::ptrdiff_t m_flCurWeight = 0x568; // float32
                constexpr std::ptrdiff_t m_netlookupFilename = 0x56C; // char[512]
                constexpr std::ptrdiff_t m_bEnabled = 0x76C; // bool
                constexpr std::ptrdiff_t m_bMaster = 0x76D; // bool
                constexpr std::ptrdiff_t m_bClientSide = 0x76E; // bool
                constexpr std::ptrdiff_t m_bExclusive = 0x76F; // bool
                constexpr std::ptrdiff_t m_bEnabledOnClient = 0x770; // bool[1]
                constexpr std::ptrdiff_t m_flCurWeightOnClient = 0x774; // float32[1]
                constexpr std::ptrdiff_t m_bFadingIn = 0x778; // bool[1]
                constexpr std::ptrdiff_t m_flFadeStartWeight = 0x77C; // float32[1]
                constexpr std::ptrdiff_t m_flFadeStartTime = 0x780; // float32[1]
                constexpr std::ptrdiff_t m_flFadeDuration = 0x784; // float32[1]
            }
            // Parent: C_BaseTrigger
            // Fields count: 0
            namespace CHostageRescueZoneShim {
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
                constexpr std::ptrdiff_t m_MeshGroupMask = 0x198; // uint64
                constexpr std::ptrdiff_t m_nIdealMotionType = 0x21A; // int8
                constexpr std::ptrdiff_t m_nForceLOD = 0x21B; // int8
                constexpr std::ptrdiff_t m_nClothUpdateFlags = 0x21C; // int8
            }
            // Parent: C_CSWeaponBaseGun
            // Fields count: 0
            namespace C_WeaponP250 {
            }
            // Parent: None
            // Fields count: 1
            namespace C_EconEntity__AttachedModelData_t {
                constexpr std::ptrdiff_t m_iModelDisplayFlags = 0x0; // int32
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
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_Attributes (CEconItemAttribute)
            namespace CAttributeList {
                constexpr std::ptrdiff_t m_Attributes = 0x8; // C_UtlVectorEmbeddedNetworkVar<CEconItemAttribute>
                constexpr std::ptrdiff_t m_pManager = 0x58; // CAttributeManager*
            }
            // Parent: C_MultiplayRules
            // Fields count: 0
            namespace C_TeamplayRules {
            }
            // Parent: C_CSGO_TeamPreviewCamera
            // Fields count: 0
            namespace C_CSGO_CounterTerroristWingmanIntroCamera {
            }
            // Parent: C_CSWeaponBase
            // Fields count: 0
            namespace C_WeaponNOVA {
            }
            // Parent: C_BaseCSGrenadeProjectile
            // Fields count: 0
            namespace C_HEGrenadeProjectile {
            }
            // Parent: C_BaseToggle
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_bIsUsable (bool)
            namespace C_BaseDoor {
                constexpr std::ptrdiff_t m_bIsUsable = 0xCC8; // bool
            }
            // Parent: C_BaseModelEntity
            // Fields count: 2
            namespace CGrenadeTracer {
                constexpr std::ptrdiff_t m_flTracerDuration = 0xCE8; // float32
                constexpr std::ptrdiff_t m_nType = 0xCEC; // GrenadeType_t
            }
            // Parent: C_BaseTrigger
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_bBombPlantedHere (bool)
            namespace CBombTarget {
                constexpr std::ptrdiff_t m_bBombPlantedHere = 0xCD0; // bool
            }
            // Parent: C_BaseClientUIEntity
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_hActivator (EHANDLE)
            namespace C_PointClientUIDialog {
                constexpr std::ptrdiff_t m_hActivator = 0xCF8; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_bStartEnabled = 0xCFC; // bool
            }
            // Parent: CCSGameModeRules
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_WeaponSequence (CUtlString)
            namespace CCSGameModeRules_ArmsRace {
                constexpr std::ptrdiff_t m_WeaponSequence = 0x38; // C_NetworkUtlVectorBase<CUtlString>
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
            namespace CDamageRecord {
                constexpr std::ptrdiff_t m_PlayerDamager = 0x28; // CHandle<C_CSPlayerPawn>
                constexpr std::ptrdiff_t m_PlayerRecipient = 0x2C; // CHandle<C_CSPlayerPawn>
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
            // Parent: C_BaseEntity
            // Fields count: 0
            namespace C_InfoLadderDismount {
            }
            // Parent: CPlayerControllerComponent
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_nSendUpdate (int)
            // NetworkVarNames: m_DamageList (CDamageRecord)
            namespace CCSPlayerController_DamageServices {
                constexpr std::ptrdiff_t m_nSendUpdate = 0x40; // int32
                constexpr std::ptrdiff_t m_DamageList = 0x48; // C_UtlVectorEmbeddedNetworkVar<CDamageRecord>
            }
            // Parent: CEntityComponent
            // Fields count: 5
            namespace CRenderComponent {
                constexpr std::ptrdiff_t __m_pChainEntity = 0x10; // CNetworkVarChainer
                constexpr std::ptrdiff_t m_bIsRenderingWithViewModels = 0x50; // bool
                constexpr std::ptrdiff_t m_nSplitscreenFlags = 0x54; // uint32
                constexpr std::ptrdiff_t m_bEnableRendering = 0x60; // bool
                constexpr std::ptrdiff_t m_bInterpolationReadyToDraw = 0xB0; // bool
            }
            // Parent: C_SoundEventEntity
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_vMins (Vector)
            // NetworkVarNames: m_vMaxs (Vector)
            namespace C_SoundEventOBBEntity {
                constexpr std::ptrdiff_t m_vMins = 0x548; // Vector
                constexpr std::ptrdiff_t m_vMaxs = 0x554; // Vector
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
            namespace CLightComponent {
                constexpr std::ptrdiff_t __m_pChainEntity = 0x38; // CNetworkVarChainer
                constexpr std::ptrdiff_t m_Color = 0x75; // Color
                constexpr std::ptrdiff_t m_SecondaryColor = 0x79; // Color
                constexpr std::ptrdiff_t m_flBrightness = 0x80; // float32
                constexpr std::ptrdiff_t m_flBrightnessScale = 0x84; // float32
                constexpr std::ptrdiff_t m_flBrightnessMult = 0x88; // float32
                constexpr std::ptrdiff_t m_flRange = 0x8C; // float32
                constexpr std::ptrdiff_t m_flFalloff = 0x90; // float32
                constexpr std::ptrdiff_t m_flAttenuation0 = 0x94; // float32
                constexpr std::ptrdiff_t m_flAttenuation1 = 0x98; // float32
                constexpr std::ptrdiff_t m_flAttenuation2 = 0x9C; // float32
                constexpr std::ptrdiff_t m_flTheta = 0xA0; // float32
                constexpr std::ptrdiff_t m_flPhi = 0xA4; // float32
                constexpr std::ptrdiff_t m_hLightCookie = 0xA8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_nCascades = 0xB0; // int32
                constexpr std::ptrdiff_t m_nCastShadows = 0xB4; // int32
                constexpr std::ptrdiff_t m_nShadowWidth = 0xB8; // int32
                constexpr std::ptrdiff_t m_nShadowHeight = 0xBC; // int32
                constexpr std::ptrdiff_t m_bRenderDiffuse = 0xC0; // bool
                constexpr std::ptrdiff_t m_nRenderSpecular = 0xC4; // int32
                constexpr std::ptrdiff_t m_bRenderTransmissive = 0xC8; // bool
                constexpr std::ptrdiff_t m_flOrthoLightWidth = 0xCC; // float32
                constexpr std::ptrdiff_t m_flOrthoLightHeight = 0xD0; // float32
                constexpr std::ptrdiff_t m_nStyle = 0xD4; // int32
                constexpr std::ptrdiff_t m_Pattern = 0xD8; // CUtlString
                constexpr std::ptrdiff_t m_nCascadeRenderStaticObjects = 0xE0; // int32
                constexpr std::ptrdiff_t m_flShadowCascadeCrossFade = 0xE4; // float32
                constexpr std::ptrdiff_t m_flShadowCascadeDistanceFade = 0xE8; // float32
                constexpr std::ptrdiff_t m_flShadowCascadeDistance0 = 0xEC; // float32
                constexpr std::ptrdiff_t m_flShadowCascadeDistance1 = 0xF0; // float32
                constexpr std::ptrdiff_t m_flShadowCascadeDistance2 = 0xF4; // float32
                constexpr std::ptrdiff_t m_flShadowCascadeDistance3 = 0xF8; // float32
                constexpr std::ptrdiff_t m_nShadowCascadeResolution0 = 0xFC; // int32
                constexpr std::ptrdiff_t m_nShadowCascadeResolution1 = 0x100; // int32
                constexpr std::ptrdiff_t m_nShadowCascadeResolution2 = 0x104; // int32
                constexpr std::ptrdiff_t m_nShadowCascadeResolution3 = 0x108; // int32
                constexpr std::ptrdiff_t m_bUsesBakedShadowing = 0x10C; // bool
                constexpr std::ptrdiff_t m_nShadowPriority = 0x110; // int32
                constexpr std::ptrdiff_t m_nBakedShadowIndex = 0x114; // int32
                constexpr std::ptrdiff_t m_bRenderToCubemaps = 0x118; // bool
                constexpr std::ptrdiff_t m_nDirectLight = 0x11C; // int32
                constexpr std::ptrdiff_t m_nIndirectLight = 0x120; // int32
                constexpr std::ptrdiff_t m_flFadeMinDist = 0x124; // float32
                constexpr std::ptrdiff_t m_flFadeMaxDist = 0x128; // float32
                constexpr std::ptrdiff_t m_flShadowFadeMinDist = 0x12C; // float32
                constexpr std::ptrdiff_t m_flShadowFadeMaxDist = 0x130; // float32
                constexpr std::ptrdiff_t m_bEnabled = 0x134; // bool
                constexpr std::ptrdiff_t m_bFlicker = 0x135; // bool
                constexpr std::ptrdiff_t m_bPrecomputedFieldsValid = 0x136; // bool
                constexpr std::ptrdiff_t m_vPrecomputedBoundsMins = 0x138; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedBoundsMaxs = 0x144; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin = 0x150; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles = 0x15C; // QAngle
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent = 0x168; // Vector
                constexpr std::ptrdiff_t m_flPrecomputedMaxRange = 0x174; // float32
                constexpr std::ptrdiff_t m_nFogLightingMode = 0x178; // int32
                constexpr std::ptrdiff_t m_flFogContributionStength = 0x17C; // float32
                constexpr std::ptrdiff_t m_flNearClipPlane = 0x180; // float32
                constexpr std::ptrdiff_t m_SkyColor = 0x184; // Color
                constexpr std::ptrdiff_t m_flSkyIntensity = 0x188; // float32
                constexpr std::ptrdiff_t m_SkyAmbientBounce = 0x18C; // Color
                constexpr std::ptrdiff_t m_bUseSecondaryColor = 0x190; // bool
                constexpr std::ptrdiff_t m_bMixedShadows = 0x191; // bool
                constexpr std::ptrdiff_t m_flLightStyleStartTime = 0x194; // GameTime_t
                constexpr std::ptrdiff_t m_flCapsuleLength = 0x198; // float32
                constexpr std::ptrdiff_t m_flMinRoughness = 0x19C; // float32
            }
            // Parent: C_CSGO_TeamPreviewCamera
            // Fields count: 0
            namespace C_CSGO_CounterTerroristTeamIntroCamera {
            }
            // Parent: None
            // Fields count: 0
            namespace CEntityComponent {
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
            namespace C_EconItemView {
                constexpr std::ptrdiff_t m_bInventoryImageRgbaRequested = 0x60; // bool
                constexpr std::ptrdiff_t m_bInventoryImageTriedCache = 0x61; // bool
                constexpr std::ptrdiff_t m_nInventoryImageRgbaWidth = 0x80; // int32
                constexpr std::ptrdiff_t m_nInventoryImageRgbaHeight = 0x84; // int32
                constexpr std::ptrdiff_t m_szCurrentLoadCachedFileName = 0x88; // char[260]
                constexpr std::ptrdiff_t m_bRestoreCustomMaterialAfterPrecache = 0x1B8; // bool
                constexpr std::ptrdiff_t m_iItemDefinitionIndex = 0x1BA; // uint16
                constexpr std::ptrdiff_t m_iEntityQuality = 0x1BC; // int32
                constexpr std::ptrdiff_t m_iEntityLevel = 0x1C0; // uint32
                constexpr std::ptrdiff_t m_iItemID = 0x1C8; // uint64
                constexpr std::ptrdiff_t m_iItemIDHigh = 0x1D0; // uint32
                constexpr std::ptrdiff_t m_iItemIDLow = 0x1D4; // uint32
                constexpr std::ptrdiff_t m_iAccountID = 0x1D8; // uint32
                constexpr std::ptrdiff_t m_iInventoryPosition = 0x1DC; // uint32
                constexpr std::ptrdiff_t m_bInitialized = 0x1E8; // bool
                constexpr std::ptrdiff_t m_bDisallowSOC = 0x1E9; // bool
                constexpr std::ptrdiff_t m_bIsStoreItem = 0x1EA; // bool
                constexpr std::ptrdiff_t m_bIsTradeItem = 0x1EB; // bool
                constexpr std::ptrdiff_t m_iEntityQuantity = 0x1EC; // int32
                constexpr std::ptrdiff_t m_iRarityOverride = 0x1F0; // int32
                constexpr std::ptrdiff_t m_iQualityOverride = 0x1F4; // int32
                constexpr std::ptrdiff_t m_unClientFlags = 0x1F8; // uint8
                constexpr std::ptrdiff_t m_unOverrideStyle = 0x1F9; // uint8
                constexpr std::ptrdiff_t m_AttributeList = 0x210; // CAttributeList
                constexpr std::ptrdiff_t m_NetworkedDynamicAttributes = 0x270; // CAttributeList
                constexpr std::ptrdiff_t m_szCustomName = 0x2D0; // char[161]
                constexpr std::ptrdiff_t m_szCustomNameOverride = 0x371; // char[161]
                constexpr std::ptrdiff_t m_bInitializedTags = 0x440; // bool
            }
            // Parent: C_BaseEntity
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_Handle (CHandle<CBaseEntity>)
            // NetworkVarNames: m_bSendHandle (bool)
            namespace C_HandleTest {
                constexpr std::ptrdiff_t m_Handle = 0x548; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_bSendHandle = 0x54C; // bool
            }
            // Parent: C_BaseEntity
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_EnvWindShared (CEnvWindShared)
            namespace C_EnvWindClientside {
                constexpr std::ptrdiff_t m_EnvWindShared = 0x548; // C_EnvWindShared
            }
            // Parent: C_CSWeaponBaseGun
            // Fields count: 0
            namespace C_WeaponMAC10 {
            }
            // Parent: C_CSWeaponBaseGun
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_flDisplayHealth (float)
            namespace C_WeaponShield {
                constexpr std::ptrdiff_t m_flDisplayHealth = 0x1AA0; // float32
            }
            // Parent: C_PointClientUIWorldPanel
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_messageText (char)
            namespace C_PointClientUIWorldTextPanel {
                constexpr std::ptrdiff_t m_messageText = 0xF30; // char[512]
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            namespace C_CSObserverPawnAPI {
            }
            // Parent: CPlayer_UseServices
            // Fields count: 0
            namespace CCSPlayer_UseServices {
            }
            // Parent: CPlayerPawnComponent
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
                constexpr std::ptrdiff_t m_vecLastMovementImpulses = 0x1B8; // Vector
                constexpr std::ptrdiff_t m_vecOldViewAngles = 0x1C4; // QAngle
            }
            // Parent: CEntitySubclassVDataBase
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
            // Parent: CPlayerControllerComponent
            // Fields count: 4
            //
            // Metadata:
            // NetworkVarNames: m_iAccount (int)
            // NetworkVarNames: m_iStartAccount (int)
            // NetworkVarNames: m_iTotalCashSpent (int)
            // NetworkVarNames: m_iCashSpentThisRound (int)
            namespace CCSPlayerController_InGameMoneyServices {
                constexpr std::ptrdiff_t m_iAccount = 0x40; // int32
                constexpr std::ptrdiff_t m_iStartAccount = 0x44; // int32
                constexpr std::ptrdiff_t m_iTotalCashSpent = 0x48; // int32
                constexpr std::ptrdiff_t m_iCashSpentThisRound = 0x4C; // int32
            }
            // Parent: None
            // Fields count: 2
            namespace C_EnvWindShared__WindVariationEvent_t {
                constexpr std::ptrdiff_t m_flWindAngleVariation = 0x0; // float32
                constexpr std::ptrdiff_t m_flWindSpeedVariation = 0x4; // float32
            }
            // Parent: C_CSWeaponBaseGun
            // Fields count: 0
            namespace C_WeaponUSPSilencer {
            }
            // Parent: C_Sprite
            // Fields count: 0
            namespace CSpriteOriented {
            }
            // Parent: C_CSGO_EndOfMatchLineupEndpoint
            // Fields count: 0
            namespace C_CSGO_EndOfMatchLineupStart {
            }
            // Parent: C_CSWeaponBaseGun
            // Fields count: 0
            namespace C_WeaponFamas {
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
            namespace C_EnvParticleGlow {
                constexpr std::ptrdiff_t m_flAlphaScale = 0x1278; // float32
                constexpr std::ptrdiff_t m_flRadiusScale = 0x127C; // float32
                constexpr std::ptrdiff_t m_flSelfIllumScale = 0x1280; // float32
                constexpr std::ptrdiff_t m_ColorTint = 0x1284; // Color
                constexpr std::ptrdiff_t m_hTextureOverride = 0x1288; // CStrongHandle<InfoForResourceTypeCTextureBase>
            }
            // Parent: C_BaseEntity
            // Fields count: 0
            namespace C_SoundEventEntity {
            }
            // Parent: C_CSGO_TeamPreviewCharacterPosition
            // Fields count: 0
            namespace C_CSGO_TeamIntroCharacterPosition {
            }
            // Parent: C_CSGO_PreviewModel
            // Fields count: 0
            namespace C_CSGO_PreviewModelAlias_csgo_item_previewmodel {
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
            namespace C_Sun {
                constexpr std::ptrdiff_t m_fxSSSunFlareEffectIndex = 0xCC8; // ParticleIndex_t
                constexpr std::ptrdiff_t m_fxSunFlareEffectIndex = 0xCCC; // ParticleIndex_t
                constexpr std::ptrdiff_t m_fdistNormalize = 0xCD0; // float32
                constexpr std::ptrdiff_t m_vSunPos = 0xCD4; // Vector
                constexpr std::ptrdiff_t m_vDirection = 0xCE0; // Vector
                constexpr std::ptrdiff_t m_iszEffectName = 0xCF0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszSSEffectName = 0xCF8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_clrOverlay = 0xD00; // Color
                constexpr std::ptrdiff_t m_bOn = 0xD04; // bool
                constexpr std::ptrdiff_t m_bmaxColor = 0xD05; // bool
                constexpr std::ptrdiff_t m_flSize = 0xD08; // float32
                constexpr std::ptrdiff_t m_flHazeScale = 0xD0C; // float32
                constexpr std::ptrdiff_t m_flRotation = 0xD10; // float32
                constexpr std::ptrdiff_t m_flHDRColorScale = 0xD14; // float32
                constexpr std::ptrdiff_t m_flAlphaHaze = 0xD18; // float32
                constexpr std::ptrdiff_t m_flAlphaScale = 0xD1C; // float32
                constexpr std::ptrdiff_t m_flAlphaHdr = 0xD20; // float32
                constexpr std::ptrdiff_t m_flFarZScale = 0xD24; // float32
            }
            // Parent: C_BaseEntity
            // Fields count: 0
            namespace C_CSGO_EndOfMatchLineupEndpoint {
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
            namespace CCSPlayerController_ActionTrackingServices {
                constexpr std::ptrdiff_t m_perRoundStats = 0x40; // C_UtlVectorEmbeddedNetworkVar<CSPerRoundStats_t>
                constexpr std::ptrdiff_t m_matchStats = 0x90; // CSMatchStats_t
                constexpr std::ptrdiff_t m_iNumRoundKills = 0x110; // int32
                constexpr std::ptrdiff_t m_iNumRoundKillsHeadshots = 0x114; // int32
                constexpr std::ptrdiff_t m_unTotalRoundDamageDealt = 0x118; // uint32
            }
            // Parent: CEntityComponent
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_bvDisabledHitGroups (uint32)
            namespace CHitboxComponent {
                constexpr std::ptrdiff_t m_bvDisabledHitGroups = 0x24; // uint32[1]
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
            namespace C_ColorCorrectionVolume {
                constexpr std::ptrdiff_t m_LastEnterWeight = 0xCD0; // float32
                constexpr std::ptrdiff_t m_LastEnterTime = 0xCD4; // float32
                constexpr std::ptrdiff_t m_LastExitWeight = 0xCD8; // float32
                constexpr std::ptrdiff_t m_LastExitTime = 0xCDC; // float32
                constexpr std::ptrdiff_t m_bEnabled = 0xCE0; // bool
                constexpr std::ptrdiff_t m_MaxWeight = 0xCE4; // float32
                constexpr std::ptrdiff_t m_FadeDuration = 0xCE8; // float32
                constexpr std::ptrdiff_t m_Weight = 0xCEC; // float32
                constexpr std::ptrdiff_t m_lookupFilename = 0xCF0; // char[512]
            }
            // Parent: C_BaseModelEntity
            // Fields count: 0
            namespace C_PrecipitationBlocker {
            }
            // Parent: CBaseAnimGraph
            // Fields count: 6
            namespace C_BulletHitModel {
                constexpr std::ptrdiff_t m_matLocal = 0xED0; // matrix3x4_t
                constexpr std::ptrdiff_t m_iBoneIndex = 0xF00; // int32
                constexpr std::ptrdiff_t m_hPlayerParent = 0xF04; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_bIsHit = 0xF08; // bool
                constexpr std::ptrdiff_t m_flTimeCreated = 0xF0C; // float32
                constexpr std::ptrdiff_t m_vecStartPos = 0xF10; // Vector
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
            namespace C_MapVetoPickController {
                constexpr std::ptrdiff_t m_nDraftType = 0x558; // int32
                constexpr std::ptrdiff_t m_nTeamWinningCoinToss = 0x55C; // int32
                constexpr std::ptrdiff_t m_nTeamWithFirstChoice = 0x560; // int32[64]
                constexpr std::ptrdiff_t m_nVoteMapIdsList = 0x660; // int32[7]
                constexpr std::ptrdiff_t m_nAccountIDs = 0x67C; // int32[64]
                constexpr std::ptrdiff_t m_nMapId0 = 0x77C; // int32[64]
                constexpr std::ptrdiff_t m_nMapId1 = 0x87C; // int32[64]
                constexpr std::ptrdiff_t m_nMapId2 = 0x97C; // int32[64]
                constexpr std::ptrdiff_t m_nMapId3 = 0xA7C; // int32[64]
                constexpr std::ptrdiff_t m_nMapId4 = 0xB7C; // int32[64]
                constexpr std::ptrdiff_t m_nMapId5 = 0xC7C; // int32[64]
                constexpr std::ptrdiff_t m_nStartingSide0 = 0xD7C; // int32[64]
                constexpr std::ptrdiff_t m_nCurrentPhase = 0xE7C; // int32
                constexpr std::ptrdiff_t m_nPhaseStartTick = 0xE80; // int32
                constexpr std::ptrdiff_t m_nPhaseDurationTicks = 0xE84; // int32
                constexpr std::ptrdiff_t m_nPostDataUpdateTick = 0xE88; // int32
                constexpr std::ptrdiff_t m_bDisabledHud = 0xE8C; // bool
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MGapTypeQueriesForScopeSingleton
            namespace CSharedGapTypeQueryRegistration {
            }
            // Parent: C_BarnLight
            // Fields count: 3
            //
            // Metadata:
            // NetworkVarNames: m_flInnerAngle (float)
            // NetworkVarNames: m_flOuterAngle (float)
            // NetworkVarNames: m_bShowLight (bool)
            namespace C_OmniLight {
                constexpr std::ptrdiff_t m_flInnerAngle = 0xF10; // float32
                constexpr std::ptrdiff_t m_flOuterAngle = 0xF14; // float32
                constexpr std::ptrdiff_t m_bShowLight = 0xF18; // bool
            }
            // Parent: C_Inferno
            // Fields count: 0
            namespace C_FireCrackerBlast {
            }
            // Parent: C_CSWeaponBaseGun
            // Fields count: 0
            namespace C_WeaponMP9 {
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_weaponPurchases (WeaponPurchaseCount_t)
            namespace WeaponPurchaseTracker_t {
                constexpr std::ptrdiff_t m_weaponPurchases = 0x8; // C_UtlVectorEmbeddedNetworkVar<WeaponPurchaseCount_t>
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
            namespace C_RetakeGameRules {
                constexpr std::ptrdiff_t m_nMatchSeed = 0xF8; // int32
                constexpr std::ptrdiff_t m_bBlockersPresent = 0xFC; // bool
                constexpr std::ptrdiff_t m_bRoundInProgress = 0xFD; // bool
                constexpr std::ptrdiff_t m_iFirstSecondHalfRound = 0x100; // int32
                constexpr std::ptrdiff_t m_iBombSite = 0x104; // int32
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
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            namespace CCSWeaponBaseVDataAPI {
            }
            // Parent: CPlayerPawnComponent
            // Fields count: 0
            namespace CCSPlayer_GlowServices {
            }
            // Parent: None
            // Fields count: 5
            namespace C_BaseFlex__Emphasized_Phoneme {
                constexpr std::ptrdiff_t m_sClassName = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_flAmount = 0x18; // float32
                constexpr std::ptrdiff_t m_bRequired = 0x1C; // bool
                constexpr std::ptrdiff_t m_bBasechecked = 0x1D; // bool
                constexpr std::ptrdiff_t m_bValid = 0x1E; // bool
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
            // Parent: C_CSWeaponBaseGun
            // Fields count: 0
            namespace C_WeaponSSG08 {
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
            namespace C_FuncLadder {
                constexpr std::ptrdiff_t m_vecLadderDir = 0xCC8; // Vector
                constexpr std::ptrdiff_t m_Dismounts = 0xCD8; // CUtlVector<CHandle<C_InfoLadderDismount>>
                constexpr std::ptrdiff_t m_vecLocalTop = 0xCF0; // Vector
                constexpr std::ptrdiff_t m_vecPlayerMountPositionTop = 0xCFC; // Vector
                constexpr std::ptrdiff_t m_vecPlayerMountPositionBottom = 0xD08; // Vector
                constexpr std::ptrdiff_t m_flAutoRideSpeed = 0xD14; // float32
                constexpr std::ptrdiff_t m_bDisabled = 0xD18; // bool
                constexpr std::ptrdiff_t m_bFakeLadder = 0xD19; // bool
                constexpr std::ptrdiff_t m_bHasSlack = 0xD1A; // bool
            }
            // Parent: C_SoundOpvarSetAABBEntity
            // Fields count: 0
            namespace C_SoundOpvarSetOBBEntity {
            }
            // Parent: CPlayerPawnComponent
            // Fields count: 4
            //
            // Metadata:
            // NetworkVarNames: m_hMyWeapons (CHandle<C_BasePlayerWeapon>)
            // NetworkVarNames: m_hActiveWeapon (CHandle<CBasePlayerWeapon>)
            // NetworkVarNames: m_hLastWeapon (CHandle<CBasePlayerWeapon>)
            // NetworkVarNames: m_iAmmo (uint16)
            namespace CPlayer_WeaponServices {
                constexpr std::ptrdiff_t m_hMyWeapons = 0x40; // C_NetworkUtlVectorBase<CHandle<C_BasePlayerWeapon>>
                constexpr std::ptrdiff_t m_hActiveWeapon = 0x58; // CHandle<C_BasePlayerWeapon>
                constexpr std::ptrdiff_t m_hLastWeapon = 0x5C; // CHandle<C_BasePlayerWeapon>
                constexpr std::ptrdiff_t m_iAmmo = 0x60; // uint16[32]
            }
            // Parent: None
            // Fields count: 3
            namespace CAttributeManager__cached_attribute_float_t {
                constexpr std::ptrdiff_t flIn = 0x0; // float32
                constexpr std::ptrdiff_t iAttribHook = 0x8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t flOut = 0x10; // float32
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
            namespace C_BaseGrenade {
                constexpr std::ptrdiff_t m_bHasWarnedAI = 0x1068; // bool
                constexpr std::ptrdiff_t m_bIsSmokeGrenade = 0x1069; // bool
                constexpr std::ptrdiff_t m_bIsLive = 0x106A; // bool
                constexpr std::ptrdiff_t m_DmgRadius = 0x106C; // float32
                constexpr std::ptrdiff_t m_flDetonateTime = 0x1070; // GameTime_t
                constexpr std::ptrdiff_t m_flWarnAITime = 0x1074; // float32
                constexpr std::ptrdiff_t m_flDamage = 0x1078; // float32
                constexpr std::ptrdiff_t m_iszBounceSound = 0x1080; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_ExplosionSound = 0x1088; // CUtlString
                constexpr std::ptrdiff_t m_hThrower = 0x1094; // CHandle<C_CSPlayerPawn>
                constexpr std::ptrdiff_t m_flNextAttack = 0x10AC; // GameTime_t
                constexpr std::ptrdiff_t m_hOriginalThrower = 0x10B0; // CHandle<C_CSPlayerPawn>
            }
            // Parent: None
            // Fields count: 1
            namespace CCSGameModeRules {
                constexpr std::ptrdiff_t __m_pChainEntity = 0x8; // CNetworkVarChainer
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
            namespace C_EnvVolumetricFogController {
                constexpr std::ptrdiff_t m_flScattering = 0x548; // float32
                constexpr std::ptrdiff_t m_flAnisotropy = 0x54C; // float32
                constexpr std::ptrdiff_t m_flFadeSpeed = 0x550; // float32
                constexpr std::ptrdiff_t m_flDrawDistance = 0x554; // float32
                constexpr std::ptrdiff_t m_flFadeInStart = 0x558; // float32
                constexpr std::ptrdiff_t m_flFadeInEnd = 0x55C; // float32
                constexpr std::ptrdiff_t m_flIndirectStrength = 0x560; // float32
                constexpr std::ptrdiff_t m_nIndirectTextureDimX = 0x564; // int32
                constexpr std::ptrdiff_t m_nIndirectTextureDimY = 0x568; // int32
                constexpr std::ptrdiff_t m_nIndirectTextureDimZ = 0x56C; // int32
                constexpr std::ptrdiff_t m_vBoxMins = 0x570; // Vector
                constexpr std::ptrdiff_t m_vBoxMaxs = 0x57C; // Vector
                constexpr std::ptrdiff_t m_bActive = 0x588; // bool
                constexpr std::ptrdiff_t m_flStartAnisoTime = 0x58C; // GameTime_t
                constexpr std::ptrdiff_t m_flStartScatterTime = 0x590; // GameTime_t
                constexpr std::ptrdiff_t m_flStartDrawDistanceTime = 0x594; // GameTime_t
                constexpr std::ptrdiff_t m_flStartAnisotropy = 0x598; // float32
                constexpr std::ptrdiff_t m_flStartScattering = 0x59C; // float32
                constexpr std::ptrdiff_t m_flStartDrawDistance = 0x5A0; // float32
                constexpr std::ptrdiff_t m_flDefaultAnisotropy = 0x5A4; // float32
                constexpr std::ptrdiff_t m_flDefaultScattering = 0x5A8; // float32
                constexpr std::ptrdiff_t m_flDefaultDrawDistance = 0x5AC; // float32
                constexpr std::ptrdiff_t m_bStartDisabled = 0x5B0; // bool
                constexpr std::ptrdiff_t m_bEnableIndirect = 0x5B1; // bool
                constexpr std::ptrdiff_t m_bIndirectUseLPVs = 0x5B2; // bool
                constexpr std::ptrdiff_t m_bIsMaster = 0x5B3; // bool
                constexpr std::ptrdiff_t m_hFogIndirectTexture = 0x5B8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_nForceRefreshCount = 0x5C0; // int32
                constexpr std::ptrdiff_t m_fNoiseSpeed = 0x5C4; // float32
                constexpr std::ptrdiff_t m_fNoiseStrength = 0x5C8; // float32
                constexpr std::ptrdiff_t m_vNoiseScale = 0x5CC; // Vector
                constexpr std::ptrdiff_t m_bFirstTime = 0x5D8; // bool
            }
            // Parent: C_CSWeaponBaseGun
            // Fields count: 0
            namespace C_WeaponTec9 {
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
            namespace C_PointCommentaryNode {
                constexpr std::ptrdiff_t m_bActive = 0xED8; // bool
                constexpr std::ptrdiff_t m_bWasActive = 0xED9; // bool
                constexpr std::ptrdiff_t m_flEndTime = 0xEDC; // GameTime_t
                constexpr std::ptrdiff_t m_flStartTime = 0xEE0; // GameTime_t
                constexpr std::ptrdiff_t m_flStartTimeInCommentary = 0xEE4; // float32
                constexpr std::ptrdiff_t m_iszCommentaryFile = 0xEE8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszTitle = 0xEF0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszSpeakers = 0xEF8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iNodeNumber = 0xF00; // int32
                constexpr std::ptrdiff_t m_iNodeNumberMax = 0xF04; // int32
                constexpr std::ptrdiff_t m_bListenedTo = 0xF08; // bool
                constexpr std::ptrdiff_t m_hViewPosition = 0xF18; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_bRestartAfterRestore = 0xF1C; // bool
            }
            // Parent: CCSPlayerBase_CameraServices
            // Fields count: 0
            namespace CCSObserver_CameraServices {
            }
            // Parent: CCSPointScriptEntity
            // Fields count: 0
            namespace CCSClientPointScriptEntity {
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
            // Parent: C_BaseEntity
            // Fields count: 3
            //
            // Metadata:
            // NetworkVarNames: m_nMode (int)
            // NetworkVarNames: m_vBoxSize (Vector)
            // NetworkVarNames: m_bEnabled (bool)
            namespace C_InfoVisibilityBox {
                constexpr std::ptrdiff_t m_nMode = 0x54C; // int32
                constexpr std::ptrdiff_t m_vBoxSize = 0x550; // Vector
                constexpr std::ptrdiff_t m_bEnabled = 0x55C; // bool
            }
            // Parent: C_Sprite
            // Fields count: 2
            namespace C_FireSprite {
                constexpr std::ptrdiff_t m_vecMoveDir = 0xDD8; // Vector
                constexpr std::ptrdiff_t m_bFadeFromAbove = 0xDE4; // bool
            }
            // Parent: C_CSGO_TeamIntroCharacterPosition
            // Fields count: 0
            namespace C_CSGO_TeamIntroTerroristPosition {
            }
            // Parent: C_BaseTrigger
            // Fields count: 8
            namespace C_Precipitation {
                constexpr std::ptrdiff_t m_flDensity = 0xCD0; // float32
                constexpr std::ptrdiff_t m_flParticleInnerDist = 0xCE0; // float32
                constexpr std::ptrdiff_t m_pParticleDef = 0xCE8; // char*
                constexpr std::ptrdiff_t m_tParticlePrecipTraceTimer = 0xD10; // TimedEvent[1]
                constexpr std::ptrdiff_t m_bActiveParticlePrecipEmitter = 0xD18; // bool[1]
                constexpr std::ptrdiff_t m_bParticlePrecipInitialized = 0xD19; // bool
                constexpr std::ptrdiff_t m_bHasSimulatedSinceLastSceneObjectUpdate = 0xD1A; // bool
                constexpr std::ptrdiff_t m_nAvailableSheetSequencesMaxIndex = 0xD1C; // int32
            }
            // Parent: CEntitySubclassVDataBase
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
            // Parent: None
            // Fields count: 1
            namespace CBuoyancyHelper {
                constexpr std::ptrdiff_t m_flFluidDensity = 0x18; // float32
            }
            // Parent: C_BaseModelEntity
            // Fields count: 4
            //
            // Metadata:
            // NetworkVarNames: m_bEnabled (bool)
            // NetworkVarNames: m_DialogXMLName (string_t)
            // NetworkVarNames: m_PanelClassName (string_t)
            // NetworkVarNames: m_PanelID (string_t)
            namespace C_BaseClientUIEntity {
                constexpr std::ptrdiff_t m_bEnabled = 0xCD0; // bool
                constexpr std::ptrdiff_t m_DialogXMLName = 0xCD8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_PanelClassName = 0xCE0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_PanelID = 0xCE8; // CUtlSymbolLarge
            }
            // Parent: C_BaseModelEntity
            // Fields count: 3
            namespace C_FuncTrackTrain {
                constexpr std::ptrdiff_t m_nLongAxis = 0xCC8; // int32
                constexpr std::ptrdiff_t m_flRadius = 0xCCC; // float32
                constexpr std::ptrdiff_t m_flLineLength = 0xCD0; // float32
            }
            // Parent: CPlayerPawnComponent
            // Fields count: 4
            //
            // Metadata:
            // NetworkVarNames: m_bIsRescuing (bool)
            // NetworkVarNames: m_weaponPurchasesThisMatch (WeaponPurchaseTracker_t)
            // NetworkVarNames: m_weaponPurchasesThisRound (WeaponPurchaseTracker_t)
            namespace CCSPlayer_ActionTrackingServices {
                constexpr std::ptrdiff_t m_hLastWeaponBeforeC4AutoSwitch = 0x40; // CHandle<C_BasePlayerWeapon>
                constexpr std::ptrdiff_t m_bIsRescuing = 0x44; // bool
                constexpr std::ptrdiff_t m_weaponPurchasesThisMatch = 0x48; // WeaponPurchaseTracker_t
                constexpr std::ptrdiff_t m_weaponPurchasesThisRound = 0xA0; // WeaponPurchaseTracker_t
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
                constexpr std::ptrdiff_t m_vecPanelVertices = 0x38; // C_NetworkUtlVectorBase<Vector2D>
                constexpr std::ptrdiff_t m_flGlassHalfThickness = 0x50; // float32
                constexpr std::ptrdiff_t m_bHasParent = 0x54; // bool
                constexpr std::ptrdiff_t m_bParentFrozen = 0x55; // bool
                constexpr std::ptrdiff_t m_SurfacePropStringToken = 0x58; // CUtlStringToken
            }
            // Parent: None
            // Fields count: 1
            namespace C_SceneEntity__QueuedEvents_t {
                constexpr std::ptrdiff_t starttime = 0x0; // float32
            }
            // Parent: CBaseAnimGraph
            // Fields count: 4
            namespace CBaseProp {
                constexpr std::ptrdiff_t m_bModelOverrodeBlockLOS = 0xED0; // bool
                constexpr std::ptrdiff_t m_iShapeType = 0xED4; // int32
                constexpr std::ptrdiff_t m_bConformToCollisionBounds = 0xED8; // bool
                constexpr std::ptrdiff_t m_mPreferredCatchTransform = 0xEDC; // matrix3x4_t
            }
            // Parent: C_CSGO_PreviewPlayer
            // Fields count: 0
            namespace C_CSGO_PreviewPlayerAlias_csgo_player_previewmodel {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            namespace CCSPointScriptExtensions_observer {
            }
            // Parent: CLogicalEntity
            // Fields count: 12
            namespace CPointTemplate {
                constexpr std::ptrdiff_t m_iszWorldName = 0x548; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszSource2EntityLumpName = 0x550; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszEntityFilterName = 0x558; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_flTimeoutInterval = 0x560; // float32
                constexpr std::ptrdiff_t m_bAsynchronouslySpawnEntities = 0x564; // bool
                constexpr std::ptrdiff_t m_pOutputOnSpawned = 0x568; // CEntityIOOutput
                constexpr std::ptrdiff_t m_clientOnlyEntityBehavior = 0x590; // PointTemplateClientOnlyEntityBehavior_t
                constexpr std::ptrdiff_t m_ownerSpawnGroupType = 0x594; // PointTemplateOwnerSpawnGroupType_t
                constexpr std::ptrdiff_t m_createdSpawnGroupHandles = 0x598; // CUtlVector<uint32>
                constexpr std::ptrdiff_t m_SpawnedEntityHandles = 0x5B0; // CUtlVector<CEntityHandle>
                constexpr std::ptrdiff_t m_ScriptSpawnCallback = 0x5C8; // HSCRIPT
                constexpr std::ptrdiff_t m_ScriptCallbackScope = 0x5D0; // HSCRIPT
            }
            // Parent: C_CSWeaponBaseGun
            // Fields count: 0
            namespace C_WeaponHKP2000 {
            }
            // Parent: C_BaseCSGrenade
            // Fields count: 0
            namespace CTripWireFire {
            }
            // Parent: C_BaseFlex
            // Fields count: 6
            namespace C_CSGO_PreviewModel {
                constexpr std::ptrdiff_t m_animgraph = 0x1068; // CUtlString
                constexpr std::ptrdiff_t m_animgraphCharacterModeString = 0x1070; // CGlobalSymbol
                constexpr std::ptrdiff_t m_defaultAnim = 0x1078; // CUtlString
                constexpr std::ptrdiff_t m_nDefaultAnimLoopMode = 0x1080; // AnimLoopMode_t
                constexpr std::ptrdiff_t m_flInitialModelScale = 0x1084; // float32
                constexpr std::ptrdiff_t m_sInitialWeaponState = 0x1088; // CUtlString
            }
            // Parent: C_PointEntity
            // Fields count: 5
            namespace CInfoDynamicShadowHint {
                constexpr std::ptrdiff_t m_bDisabled = 0x548; // bool
                constexpr std::ptrdiff_t m_flRange = 0x54C; // float32
                constexpr std::ptrdiff_t m_nImportance = 0x550; // int32
                constexpr std::ptrdiff_t m_nLightChoice = 0x554; // int32
                constexpr std::ptrdiff_t m_hLight = 0x558; // CHandle<C_BaseEntity>
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
            // Fields count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            namespace C_BaseEntityAPI {
            }
            // Parent: C_CSWeaponBase
            // Fields count: 0
            namespace C_WeaponXM1014 {
            }
            // Parent: C_ParticleSystem
            // Fields count: 0
            namespace C_MapPreviewParticleSystem {
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
                constexpr std::ptrdiff_t m_fGlowColor = 0x8; // Vector
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
            namespace C_TriggerPhysics {
                constexpr std::ptrdiff_t m_gravityScale = 0xCD0; // float32
                constexpr std::ptrdiff_t m_linearLimit = 0xCD4; // float32
                constexpr std::ptrdiff_t m_linearDamping = 0xCD8; // float32
                constexpr std::ptrdiff_t m_angularLimit = 0xCDC; // float32
                constexpr std::ptrdiff_t m_angularDamping = 0xCE0; // float32
                constexpr std::ptrdiff_t m_linearForce = 0xCE4; // float32
                constexpr std::ptrdiff_t m_flFrequency = 0xCE8; // float32
                constexpr std::ptrdiff_t m_flDampingRatio = 0xCEC; // float32
                constexpr std::ptrdiff_t m_vecLinearForcePointAt = 0xCF0; // Vector
                constexpr std::ptrdiff_t m_bCollapseToForcePoint = 0xCFC; // bool
                constexpr std::ptrdiff_t m_vecLinearForcePointAtWorld = 0xD00; // Vector
                constexpr std::ptrdiff_t m_vecLinearForceDirection = 0xD0C; // Vector
                constexpr std::ptrdiff_t m_bConvertToDebrisWhenPossible = 0xD18; // bool
            }
            // Parent: CPlayerPawnComponent
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_hCarriedHostage (CHandle<CBaseEntity>)
            // NetworkVarNames: m_hCarriedHostageProp (CHandle<CBaseEntity>)
            namespace CCSPlayer_HostageServices {
                constexpr std::ptrdiff_t m_hCarriedHostage = 0x40; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_hCarriedHostageProp = 0x44; // CHandle<C_BaseEntity>
            }
            // Parent: C_CSWeaponBase
            // Fields count: 0
            namespace CBreachCharge {
            }
            // Parent: C_LightEntity
            // Fields count: 0
            namespace C_LightDirectionalEntity {
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
            namespace C_EnvCubemap {
                constexpr std::ptrdiff_t m_Entity_hCubemapTexture = 0x5C8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_bCustomCubemapTexture = 0x5D0; // bool
                constexpr std::ptrdiff_t m_Entity_flInfluenceRadius = 0x5D4; // float32
                constexpr std::ptrdiff_t m_Entity_vBoxProjectMins = 0x5D8; // Vector
                constexpr std::ptrdiff_t m_Entity_vBoxProjectMaxs = 0x5E4; // Vector
                constexpr std::ptrdiff_t m_Entity_bMoveable = 0x5F0; // bool
                constexpr std::ptrdiff_t m_Entity_nHandshake = 0x5F4; // int32
                constexpr std::ptrdiff_t m_Entity_nEnvCubeMapArrayIndex = 0x5F8; // int32
                constexpr std::ptrdiff_t m_Entity_nPriority = 0x5FC; // int32
                constexpr std::ptrdiff_t m_Entity_flEdgeFadeDist = 0x600; // float32
                constexpr std::ptrdiff_t m_Entity_vEdgeFadeDists = 0x604; // Vector
                constexpr std::ptrdiff_t m_Entity_flDiffuseScale = 0x610; // float32
                constexpr std::ptrdiff_t m_Entity_bStartDisabled = 0x614; // bool
                constexpr std::ptrdiff_t m_Entity_bDefaultEnvMap = 0x615; // bool
                constexpr std::ptrdiff_t m_Entity_bDefaultSpecEnvMap = 0x616; // bool
                constexpr std::ptrdiff_t m_Entity_bIndoorCubeMap = 0x617; // bool
                constexpr std::ptrdiff_t m_Entity_bCopyDiffuseFromDefaultCubemap = 0x618; // bool
                constexpr std::ptrdiff_t m_Entity_bEnabled = 0x628; // bool
            }
            // Parent: C_BaseViewModel
            // Fields count: 3
            namespace C_PredictedViewModel {
                constexpr std::ptrdiff_t m_vPredictedLagOffset = 0xF38; // Vector
                constexpr std::ptrdiff_t m_targetSpeed = 0xF44; // QAngle
                constexpr std::ptrdiff_t m_currentSpeed = 0xF50; // QAngle
            }
            // Parent: C_CSWeaponBaseGun
            // Fields count: 0
            namespace C_WeaponBizon {
            }
            // Parent: C_CSWeaponBaseGun
            // Fields count: 0
            namespace C_AK47 {
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
            namespace C_PointValueRemapper {
                constexpr std::ptrdiff_t m_bDisabled = 0x548; // bool
                constexpr std::ptrdiff_t m_bDisabledOld = 0x549; // bool
                constexpr std::ptrdiff_t m_bUpdateOnClient = 0x54A; // bool
                constexpr std::ptrdiff_t m_nInputType = 0x54C; // ValueRemapperInputType_t
                constexpr std::ptrdiff_t m_hRemapLineStart = 0x550; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_hRemapLineEnd = 0x554; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_flMaximumChangePerSecond = 0x558; // float32
                constexpr std::ptrdiff_t m_flDisengageDistance = 0x55C; // float32
                constexpr std::ptrdiff_t m_flEngageDistance = 0x560; // float32
                constexpr std::ptrdiff_t m_bRequiresUseKey = 0x564; // bool
                constexpr std::ptrdiff_t m_nOutputType = 0x568; // ValueRemapperOutputType_t
                constexpr std::ptrdiff_t m_hOutputEntities = 0x570; // C_NetworkUtlVectorBase<CHandle<C_BaseEntity>>
                constexpr std::ptrdiff_t m_nHapticsType = 0x588; // ValueRemapperHapticsType_t
                constexpr std::ptrdiff_t m_nMomentumType = 0x58C; // ValueRemapperMomentumType_t
                constexpr std::ptrdiff_t m_flMomentumModifier = 0x590; // float32
                constexpr std::ptrdiff_t m_flSnapValue = 0x594; // float32
                constexpr std::ptrdiff_t m_flCurrentMomentum = 0x598; // float32
                constexpr std::ptrdiff_t m_nRatchetType = 0x59C; // ValueRemapperRatchetType_t
                constexpr std::ptrdiff_t m_flRatchetOffset = 0x5A0; // float32
                constexpr std::ptrdiff_t m_flInputOffset = 0x5A4; // float32
                constexpr std::ptrdiff_t m_bEngaged = 0x5A8; // bool
                constexpr std::ptrdiff_t m_bFirstUpdate = 0x5A9; // bool
                constexpr std::ptrdiff_t m_flPreviousValue = 0x5AC; // float32
                constexpr std::ptrdiff_t m_flPreviousUpdateTickTime = 0x5B0; // GameTime_t
                constexpr std::ptrdiff_t m_vecPreviousTestPoint = 0x5B4; // Vector
            }
            // Parent: C_CSWeaponBase
            // Fields count: 0
            namespace C_Knife {
            }
            // Parent: C_EnvCubemap
            // Fields count: 0
            namespace C_EnvCubemapBox {
            }
            // Parent: C_Item
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_OwningPlayer (CHandle<CCSPlayerPawn>)
            // NetworkVarNames: m_KillingPlayer (CHandle<CCSPlayerPawn>)
            namespace C_ItemDogtags {
                constexpr std::ptrdiff_t m_OwningPlayer = 0x16B8; // CHandle<C_CSPlayerPawn>
                constexpr std::ptrdiff_t m_KillingPlayer = 0x16BC; // CHandle<C_CSPlayerPawn>
            }
            // Parent: C_CSGO_TeamPreviewCamera
            // Fields count: 0
            namespace C_CSGO_EndOfMatchCamera {
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
            namespace C_SoundOpvarSetPointBase {
                constexpr std::ptrdiff_t m_iszStackName = 0x548; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszOperatorName = 0x550; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszOpvarName = 0x558; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iOpvarIndex = 0x560; // int32
                constexpr std::ptrdiff_t m_bUseAutoCompare = 0x564; // bool
            }
            // Parent: C_Breakable
            // Fields count: 0
            namespace C_PhysBox {
            }
            // Parent: CPlayerPawnComponent
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_vecSellbackPurchaseEntries (SellbackPurchaseEntry_t)
            namespace CCSPlayer_BuyServices {
                constexpr std::ptrdiff_t m_vecSellbackPurchaseEntries = 0x40; // C_UtlVectorEmbeddedNetworkVar<SellbackPurchaseEntry_t>
            }
            // Parent: C_BaseCSGrenade
            // Fields count: 0
            namespace C_SensorGrenade {
            }
            // Parent: C_CSWeaponBaseGun
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_fFireTime (GameTime_t)
            namespace C_WeaponTaser {
                constexpr std::ptrdiff_t m_fFireTime = 0x1AA0; // GameTime_t
                constexpr std::ptrdiff_t m_nLastAttackTick = 0x1AA4; // int32
            }
            // Parent: C_CSWeaponBase
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_bPlayingUninterruptableAct (bool)
            // NetworkVarNames: m_nUninterruptableActivity (PlayerAnimEvent_t)
            namespace C_Fists {
                constexpr std::ptrdiff_t m_bPlayingUninterruptableAct = 0x1A80; // bool
                constexpr std::ptrdiff_t m_nUninterruptableActivity = 0x1A84; // PlayerAnimEvent_t
            }
            // Parent: C_PhysicsProp
            // Fields count: 0
            namespace C_PhysicsPropMultiplayer {
            }
            // Parent: CInfoDynamicShadowHint
            // Fields count: 2
            namespace CInfoDynamicShadowHintBox {
                constexpr std::ptrdiff_t m_vBoxMins = 0x560; // Vector
                constexpr std::ptrdiff_t m_vBoxMaxs = 0x56C; // Vector
            }
            // Parent: C_SoundOpvarSetPointEntity
            // Fields count: 0
            namespace C_SoundOpvarSetPathCornerEntity {
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
            namespace C_EnvCubemapFog {
                constexpr std::ptrdiff_t m_flEndDistance = 0x548; // float32
                constexpr std::ptrdiff_t m_flStartDistance = 0x54C; // float32
                constexpr std::ptrdiff_t m_flFogFalloffExponent = 0x550; // float32
                constexpr std::ptrdiff_t m_bHeightFogEnabled = 0x554; // bool
                constexpr std::ptrdiff_t m_flFogHeightWidth = 0x558; // float32
                constexpr std::ptrdiff_t m_flFogHeightEnd = 0x55C; // float32
                constexpr std::ptrdiff_t m_flFogHeightStart = 0x560; // float32
                constexpr std::ptrdiff_t m_flFogHeightExponent = 0x564; // float32
                constexpr std::ptrdiff_t m_flLODBias = 0x568; // float32
                constexpr std::ptrdiff_t m_bActive = 0x56C; // bool
                constexpr std::ptrdiff_t m_bStartDisabled = 0x56D; // bool
                constexpr std::ptrdiff_t m_flFogMaxOpacity = 0x570; // float32
                constexpr std::ptrdiff_t m_nCubemapSourceType = 0x574; // int32
                constexpr std::ptrdiff_t m_hSkyMaterial = 0x578; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_iszSkyEntity = 0x580; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hFogCubemapTexture = 0x588; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_bHasHeightFogEnd = 0x590; // bool
                constexpr std::ptrdiff_t m_bFirstTime = 0x591; // bool
            }
            // Parent: C_CSWeaponBase
            // Fields count: 0
            namespace C_WeaponSawedoff {
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
                constexpr std::ptrdiff_t m_vecMins = 0x40; // Vector
                constexpr std::ptrdiff_t m_vecMaxs = 0x4C; // Vector
                constexpr std::ptrdiff_t m_usSolidFlags = 0x5A; // uint8
                constexpr std::ptrdiff_t m_nSolidType = 0x5B; // SolidType_t
                constexpr std::ptrdiff_t m_triggerBloat = 0x5C; // uint8
                constexpr std::ptrdiff_t m_nSurroundType = 0x5D; // SurroundingBoundsType_t
                constexpr std::ptrdiff_t m_CollisionGroup = 0x5E; // uint8
                constexpr std::ptrdiff_t m_nEnablePhysics = 0x5F; // uint8
                constexpr std::ptrdiff_t m_flBoundingRadius = 0x60; // float32
                constexpr std::ptrdiff_t m_vecSpecifiedSurroundingMins = 0x64; // Vector
                constexpr std::ptrdiff_t m_vecSpecifiedSurroundingMaxs = 0x70; // Vector
                constexpr std::ptrdiff_t m_vecSurroundingMaxs = 0x7C; // Vector
                constexpr std::ptrdiff_t m_vecSurroundingMins = 0x88; // Vector
                constexpr std::ptrdiff_t m_vCapsuleCenter1 = 0x94; // Vector
                constexpr std::ptrdiff_t m_vCapsuleCenter2 = 0xA0; // Vector
                constexpr std::ptrdiff_t m_flCapsuleRadius = 0xAC; // float32
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
            namespace C_PlayerSprayDecal {
                constexpr std::ptrdiff_t m_nUniqueID = 0xCC8; // int32
                constexpr std::ptrdiff_t m_unAccountID = 0xCCC; // uint32
                constexpr std::ptrdiff_t m_unTraceID = 0xCD0; // uint32
                constexpr std::ptrdiff_t m_rtGcTime = 0xCD4; // uint32
                constexpr std::ptrdiff_t m_vecEndPos = 0xCD8; // Vector
                constexpr std::ptrdiff_t m_vecStart = 0xCE4; // Vector
                constexpr std::ptrdiff_t m_vecLeft = 0xCF0; // Vector
                constexpr std::ptrdiff_t m_vecNormal = 0xCFC; // Vector
                constexpr std::ptrdiff_t m_nPlayer = 0xD08; // int32
                constexpr std::ptrdiff_t m_nEntity = 0xD0C; // int32
                constexpr std::ptrdiff_t m_nHitbox = 0xD10; // int32
                constexpr std::ptrdiff_t m_flCreationTime = 0xD14; // float32
                constexpr std::ptrdiff_t m_nTintID = 0xD18; // int32
                constexpr std::ptrdiff_t m_nVersion = 0xD1C; // uint8
                constexpr std::ptrdiff_t m_ubSignature = 0xD1D; // uint8[128]
                constexpr std::ptrdiff_t m_SprayRenderHelper = 0xDA8; // CPlayerSprayDecalRenderHelper
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
            // Parent: C_PhysicsProp
            // Fields count: 1
            //
            // Metadata:
            // MNetworkExcludeByName
            // NetworkVarNames: m_ShardDesc (shard_model_desc_t)
            namespace C_ShatterGlassShardPhysics {
                constexpr std::ptrdiff_t m_ShardDesc = 0x1050; // shard_model_desc_t
            }
            // Parent: C_CSWeaponBaseGun
            // Fields count: 0
            namespace C_WeaponElite {
            }
            // Parent: C_BaseModelEntity
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_CLightComponent (CLightComponent::Storage_t)
            namespace C_LightEntity {
                constexpr std::ptrdiff_t m_CLightComponent = 0xCC8; // CLightComponent*
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
            namespace C_PlayerVisibility {
                constexpr std::ptrdiff_t m_flVisibilityStrength = 0x548; // float32
                constexpr std::ptrdiff_t m_flFogDistanceMultiplier = 0x54C; // float32
                constexpr std::ptrdiff_t m_flFogMaxDensityMultiplier = 0x550; // float32
                constexpr std::ptrdiff_t m_flFadeTime = 0x554; // float32
                constexpr std::ptrdiff_t m_bStartDisabled = 0x558; // bool
                constexpr std::ptrdiff_t m_bIsEnabled = 0x559; // bool
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
                constexpr std::ptrdiff_t dirPrimary = 0x8; // Vector
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
            // Parent: CBaseAnimGraph
            // Fields count: 19
            //
            // Metadata:
            // NetworkVarNames: m_flexWeight (float32)
            // NetworkVarNames: m_blinktoggle (bool)
            namespace C_BaseFlex {
                constexpr std::ptrdiff_t m_flexWeight = 0xEE0; // C_NetworkUtlVectorBase<float32>
                constexpr std::ptrdiff_t m_vLookTargetPosition = 0xEF8; // Vector
                constexpr std::ptrdiff_t m_blinktoggle = 0xF10; // bool
                constexpr std::ptrdiff_t m_nLastFlexUpdateFrameCount = 0xF70; // int32
                constexpr std::ptrdiff_t m_CachedViewTarget = 0xF74; // Vector
                constexpr std::ptrdiff_t m_nNextSceneEventId = 0xF80; // SceneEventId_t
                constexpr std::ptrdiff_t m_iBlink = 0xF84; // int32
                constexpr std::ptrdiff_t m_blinktime = 0xF88; // float32
                constexpr std::ptrdiff_t m_prevblinktoggle = 0xF8C; // bool
                constexpr std::ptrdiff_t m_iJawOpen = 0xF90; // int32
                constexpr std::ptrdiff_t m_flJawOpenAmount = 0xF94; // float32
                constexpr std::ptrdiff_t m_flBlinkAmount = 0xF98; // float32
                constexpr std::ptrdiff_t m_iMouthAttachment = 0xF9C; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_iEyeAttachment = 0xF9D; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_bResetFlexWeightsOnModelChange = 0xF9E; // bool
                constexpr std::ptrdiff_t m_nEyeOcclusionRendererBone = 0xFB8; // int32
                constexpr std::ptrdiff_t m_mEyeOcclusionRendererCameraToBoneTransform = 0xFBC; // matrix3x4_t
                constexpr std::ptrdiff_t m_vEyeOcclusionRendererHalfExtent = 0xFEC; // Vector
                constexpr std::ptrdiff_t m_PhonemeClasses = 0x1008; // C_BaseFlex::Emphasized_Phoneme[3]
            }
            // Parent: C_BaseEntity
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_iCurrentMaxRagdollCount (int8)
            namespace C_RagdollManager {
                constexpr std::ptrdiff_t m_iCurrentMaxRagdollCount = 0x548; // int8
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
            namespace C_EnvSky {
                constexpr std::ptrdiff_t m_hSkyMaterial = 0xCC8; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_hSkyMaterialLightingOnly = 0xCD0; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_bStartDisabled = 0xCD8; // bool
                constexpr std::ptrdiff_t m_vTintColor = 0xCD9; // Color
                constexpr std::ptrdiff_t m_vTintColorLightingOnly = 0xCDD; // Color
                constexpr std::ptrdiff_t m_flBrightnessScale = 0xCE4; // float32
                constexpr std::ptrdiff_t m_nFogType = 0xCE8; // int32
                constexpr std::ptrdiff_t m_flFogMinStart = 0xCEC; // float32
                constexpr std::ptrdiff_t m_flFogMinEnd = 0xCF0; // float32
                constexpr std::ptrdiff_t m_flFogMaxStart = 0xCF4; // float32
                constexpr std::ptrdiff_t m_flFogMaxEnd = 0xCF8; // float32
                constexpr std::ptrdiff_t m_bEnabled = 0xCFC; // bool
            }
            // Parent: CCSGameModeScript
            // Fields count: 1
            //
            // Metadata:
            // MPulseInstanceDomainInfo
            // MPulseDomainHookInfo
            // MPulseLibraryBindings
            // MPulseDomainOptInFeatureTag
            namespace CCSDeathmatchScript {
                constexpr std::ptrdiff_t m_pOuter = 0xF8; // CCSGameModeRules_Deathmatch*
            }
            // Parent: C_PointEntity
            // Fields count: 0
            namespace CInfoTarget {
            }
            // Parent: C_CSGO_TeamIntroCharacterPosition
            // Fields count: 0
            namespace C_CSGO_TeamIntroCounterTerroristPosition {
            }
            // Parent: C_BreakableProp
            // Fields count: 23
            //
            // Metadata:
            // NetworkVarNames: m_bUseHitboxesForRenderBox (bool)
            // NetworkVarNames: m_bUseAnimGraph (bool)
            namespace C_DynamicProp {
                constexpr std::ptrdiff_t m_bUseHitboxesForRenderBox = 0x1040; // bool
                constexpr std::ptrdiff_t m_bUseAnimGraph = 0x1041; // bool
                constexpr std::ptrdiff_t m_pOutputAnimBegun = 0x1048; // CEntityIOOutput
                constexpr std::ptrdiff_t m_pOutputAnimOver = 0x1070; // CEntityIOOutput
                constexpr std::ptrdiff_t m_pOutputAnimLoopCycleOver = 0x1098; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnAnimReachedStart = 0x10C0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnAnimReachedEnd = 0x10E8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_iszIdleAnim = 0x1110; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_nIdleAnimLoopMode = 0x1118; // AnimLoopMode_t
                constexpr std::ptrdiff_t m_bRandomizeCycle = 0x111C; // bool
                constexpr std::ptrdiff_t m_bStartDisabled = 0x111D; // bool
                constexpr std::ptrdiff_t m_bFiredStartEndOutput = 0x111E; // bool
                constexpr std::ptrdiff_t m_bForceNpcExclude = 0x111F; // bool
                constexpr std::ptrdiff_t m_bCreateNonSolid = 0x1120; // bool
                constexpr std::ptrdiff_t m_bIsOverrideProp = 0x1121; // bool
                constexpr std::ptrdiff_t m_iInitialGlowState = 0x1124; // int32
                constexpr std::ptrdiff_t m_nGlowRange = 0x1128; // int32
                constexpr std::ptrdiff_t m_nGlowRangeMin = 0x112C; // int32
                constexpr std::ptrdiff_t m_glowColor = 0x1130; // Color
                constexpr std::ptrdiff_t m_nGlowTeam = 0x1134; // int32
                constexpr std::ptrdiff_t m_iCachedFrameCount = 0x1138; // int32
                constexpr std::ptrdiff_t m_vecCachedRenderMins = 0x113C; // Vector
                constexpr std::ptrdiff_t m_vecCachedRenderMaxs = 0x1148; // Vector
            }
            // Parent: CEntityComponent
            // Fields count: 10
            namespace CPropDataComponent {
                constexpr std::ptrdiff_t m_flDmgModBullet = 0x10; // float32
                constexpr std::ptrdiff_t m_flDmgModClub = 0x14; // float32
                constexpr std::ptrdiff_t m_flDmgModExplosive = 0x18; // float32
                constexpr std::ptrdiff_t m_flDmgModFire = 0x1C; // float32
                constexpr std::ptrdiff_t m_iszPhysicsDamageTableName = 0x20; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszBasePropData = 0x28; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_nInteractions = 0x30; // int32
                constexpr std::ptrdiff_t m_bSpawnMotionDisabled = 0x34; // bool
                constexpr std::ptrdiff_t m_nDisableTakePhysicsDamageSpawnFlag = 0x38; // int32
                constexpr std::ptrdiff_t m_nMotionDisabledSpawnFlag = 0x3C; // int32
            }
            // Parent: C_CSWeaponBaseGun
            // Fields count: 0
            namespace C_WeaponSCAR20 {
            }
            // Parent: C_BaseCSGrenade
            // Fields count: 0
            namespace C_DecoyGrenade {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            namespace CCSPointScriptExtensions_player {
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
            namespace CCitadelSoundOpvarSetOBB {
                constexpr std::ptrdiff_t m_iszStackName = 0x560; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszOperatorName = 0x568; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszOpvarName = 0x570; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_vDistanceInnerMins = 0x578; // Vector
                constexpr std::ptrdiff_t m_vDistanceInnerMaxs = 0x584; // Vector
                constexpr std::ptrdiff_t m_vDistanceOuterMins = 0x590; // Vector
                constexpr std::ptrdiff_t m_vDistanceOuterMaxs = 0x59C; // Vector
                constexpr std::ptrdiff_t m_nAABBDirection = 0x5A8; // int32
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
            // Parent: C_GameRules
            // Fields count: 0
            namespace C_SingleplayRules {
            }
            // Parent: CBaseAnimGraph
            // Fields count: 25
            namespace C_LocalTempEntity {
                constexpr std::ptrdiff_t flags = 0xED0; // int32
                constexpr std::ptrdiff_t die = 0xED4; // GameTime_t
                constexpr std::ptrdiff_t m_flFrameMax = 0xED8; // float32
                constexpr std::ptrdiff_t x = 0xEDC; // float32
                constexpr std::ptrdiff_t y = 0xEE0; // float32
                constexpr std::ptrdiff_t fadeSpeed = 0xEE4; // float32
                constexpr std::ptrdiff_t bounceFactor = 0xEE8; // float32
                constexpr std::ptrdiff_t hitSound = 0xEEC; // int32
                constexpr std::ptrdiff_t priority = 0xEF0; // int32
                constexpr std::ptrdiff_t tentOffset = 0xEF4; // Vector
                constexpr std::ptrdiff_t m_vecTempEntAngVelocity = 0xF00; // QAngle
                constexpr std::ptrdiff_t tempent_renderamt = 0xF0C; // int32
                constexpr std::ptrdiff_t m_vecNormal = 0xF10; // Vector
                constexpr std::ptrdiff_t m_flSpriteScale = 0xF1C; // float32
                constexpr std::ptrdiff_t m_nFlickerFrame = 0xF20; // int32
                constexpr std::ptrdiff_t m_flFrameRate = 0xF24; // float32
                constexpr std::ptrdiff_t m_flFrame = 0xF28; // float32
                constexpr std::ptrdiff_t m_pszImpactEffect = 0xF30; // char*
                constexpr std::ptrdiff_t m_pszParticleEffect = 0xF38; // char*
                constexpr std::ptrdiff_t m_bParticleCollision = 0xF40; // bool
                constexpr std::ptrdiff_t m_iLastCollisionFrame = 0xF44; // int32
                constexpr std::ptrdiff_t m_vLastCollisionOrigin = 0xF48; // Vector
                constexpr std::ptrdiff_t m_vecTempEntVelocity = 0xF54; // Vector
                constexpr std::ptrdiff_t m_vecPrevAbsOrigin = 0xF60; // Vector
                constexpr std::ptrdiff_t m_vecTempEntAcceleration = 0xF6C; // Vector
            }
            // Parent: None
            // Fields count: 2
            namespace C_EnvWindShared__WindAveEvent_t {
                constexpr std::ptrdiff_t m_flStartWindSpeed = 0x0; // float32
                constexpr std::ptrdiff_t m_flAveWindSpeed = 0x4; // float32
            }
            // Parent: C_BaseCSGrenadeProjectile
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_bIsIncGrenade (bool)
            namespace C_MolotovProjectile {
                constexpr std::ptrdiff_t m_bIsIncGrenade = 0x1150; // bool
            }
            // Parent: C_LightDirectionalEntity
            // Fields count: 0
            namespace C_LightEnvironmentEntity {
            }
            // Parent: C_CSWeaponBaseGun
            // Fields count: 0
            namespace C_WeaponUMP45 {
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
            namespace CInfoOffscreenPanoramaTexture {
                constexpr std::ptrdiff_t m_bDisabled = 0x548; // bool
                constexpr std::ptrdiff_t m_nResolutionX = 0x54C; // int32
                constexpr std::ptrdiff_t m_nResolutionY = 0x550; // int32
                constexpr std::ptrdiff_t m_szLayoutFileName = 0x558; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_RenderAttrName = 0x560; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_TargetEntities = 0x568; // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
                constexpr std::ptrdiff_t m_nTargetChangeCount = 0x580; // int32
                constexpr std::ptrdiff_t m_vecCSSClasses = 0x588; // C_NetworkUtlVectorBase<CUtlSymbolLarge>
                constexpr std::ptrdiff_t m_bCheckCSSClasses = 0x700; // bool
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
            namespace C_DynamicLight {
                constexpr std::ptrdiff_t m_Flags = 0xCC8; // uint8
                constexpr std::ptrdiff_t m_LightStyle = 0xCC9; // uint8
                constexpr std::ptrdiff_t m_Radius = 0xCCC; // float32
                constexpr std::ptrdiff_t m_Exponent = 0xCD0; // int32
                constexpr std::ptrdiff_t m_InnerAngle = 0xCD4; // float32
                constexpr std::ptrdiff_t m_OuterAngle = 0xCD8; // float32
                constexpr std::ptrdiff_t m_SpotRadius = 0xCDC; // float32
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
            namespace C_CSWeaponBase {
                constexpr std::ptrdiff_t m_flFireSequenceStartTime = 0x1624; // float32
                constexpr std::ptrdiff_t m_nFireSequenceStartTimeChange = 0x1628; // int32
                constexpr std::ptrdiff_t m_nFireSequenceStartTimeAck = 0x162C; // int32
                constexpr std::ptrdiff_t m_ePlayerFireEvent = 0x1630; // PlayerAnimEvent_t
                constexpr std::ptrdiff_t m_ePlayerFireEventAttackType = 0x1634; // WeaponAttackType_t
                constexpr std::ptrdiff_t m_seqIdle = 0x1638; // HSequence
                constexpr std::ptrdiff_t m_seqFirePrimary = 0x163C; // HSequence
                constexpr std::ptrdiff_t m_seqFireSecondary = 0x1640; // HSequence
                constexpr std::ptrdiff_t m_thirdPersonFireSequences = 0x1648; // CUtlVector<HSequence>
                constexpr std::ptrdiff_t m_hCurrentThirdPersonSequence = 0x1660; // HSequence
                constexpr std::ptrdiff_t m_nSilencerBoneIndex = 0x1664; // int32
                constexpr std::ptrdiff_t m_thirdPersonSequences = 0x1668; // HSequence[7]
                constexpr std::ptrdiff_t m_ClientPreviousWeaponState = 0x16A0; // CSWeaponState_t
                constexpr std::ptrdiff_t m_iState = 0x16A4; // CSWeaponState_t
                constexpr std::ptrdiff_t m_flCrosshairDistance = 0x16A8; // float32
                constexpr std::ptrdiff_t m_iAmmoLastCheck = 0x16AC; // int32
                constexpr std::ptrdiff_t m_iAlpha = 0x16B0; // int32
                constexpr std::ptrdiff_t m_iScopeTextureID = 0x16B4; // int32
                constexpr std::ptrdiff_t m_iCrosshairTextureID = 0x16B8; // int32
                constexpr std::ptrdiff_t m_flGunAccuracyPositionDeprecated = 0x16BC; // float32
                constexpr std::ptrdiff_t m_nLastEmptySoundCmdNum = 0x16C0; // int32
                constexpr std::ptrdiff_t m_nViewModelIndex = 0x16C4; // uint32
                constexpr std::ptrdiff_t m_bReloadsWithClips = 0x16C8; // bool
                constexpr std::ptrdiff_t m_flTimeWeaponIdle = 0x16CC; // GameTime_t
                constexpr std::ptrdiff_t m_bFireOnEmpty = 0x16D0; // bool
                constexpr std::ptrdiff_t m_OnPlayerPickup = 0x16D8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_weaponMode = 0x1700; // CSWeaponMode
                constexpr std::ptrdiff_t m_flTurningInaccuracyDelta = 0x1704; // float32
                constexpr std::ptrdiff_t m_vecTurningInaccuracyEyeDirLast = 0x1708; // Vector
                constexpr std::ptrdiff_t m_flTurningInaccuracy = 0x1714; // float32
                constexpr std::ptrdiff_t m_fAccuracyPenalty = 0x1718; // float32
                constexpr std::ptrdiff_t m_flLastAccuracyUpdateTime = 0x171C; // GameTime_t
                constexpr std::ptrdiff_t m_fAccuracySmoothedForZoom = 0x1720; // float32
                constexpr std::ptrdiff_t m_fScopeZoomEndTime = 0x1724; // GameTime_t
                constexpr std::ptrdiff_t m_iRecoilIndex = 0x1728; // int32
                constexpr std::ptrdiff_t m_flRecoilIndex = 0x172C; // float32
                constexpr std::ptrdiff_t m_bBurstMode = 0x1730; // bool
                constexpr std::ptrdiff_t m_flLastBurstModeChangeTime = 0x1734; // GameTime_t
                constexpr std::ptrdiff_t m_nPostponeFireReadyTicks = 0x1738; // GameTick_t
                constexpr std::ptrdiff_t m_flPostponeFireReadyFrac = 0x173C; // float32
                constexpr std::ptrdiff_t m_bInReload = 0x1740; // bool
                constexpr std::ptrdiff_t m_bReloadVisuallyComplete = 0x1741; // bool
                constexpr std::ptrdiff_t m_flDroppedAtTime = 0x1744; // GameTime_t
                constexpr std::ptrdiff_t m_bIsHauledBack = 0x1748; // bool
                constexpr std::ptrdiff_t m_bSilencerOn = 0x1749; // bool
                constexpr std::ptrdiff_t m_flTimeSilencerSwitchComplete = 0x174C; // GameTime_t
                constexpr std::ptrdiff_t m_iOriginalTeamNumber = 0x1750; // int32
                constexpr std::ptrdiff_t m_iMostRecentTeamNumber = 0x1754; // int32
                constexpr std::ptrdiff_t m_bDroppedNearBuyZone = 0x1758; // bool
                constexpr std::ptrdiff_t m_flNextAttackRenderTimeOffset = 0x175C; // float32
                constexpr std::ptrdiff_t m_bClearWeaponIdentifyingUGC = 0x17E8; // bool
                constexpr std::ptrdiff_t m_bVisualsDataSet = 0x17E9; // bool
                constexpr std::ptrdiff_t m_bOldFirstPersonSpectatedState = 0x17EA; // bool
                constexpr std::ptrdiff_t m_hOurPing = 0x17EC; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_nOurPingIndex = 0x17F0; // CEntityIndex
                constexpr std::ptrdiff_t m_vecOurPingPos = 0x17F4; // Vector
                constexpr std::ptrdiff_t m_bGlowForPing = 0x1800; // bool
                constexpr std::ptrdiff_t m_bUIWeapon = 0x1801; // bool
                constexpr std::ptrdiff_t m_nCustomEconReloadEventId = 0x1804; // int32
                constexpr std::ptrdiff_t m_hPrevOwner = 0x1810; // CHandle<C_CSPlayerPawn>
                constexpr std::ptrdiff_t m_nDropTick = 0x1814; // GameTick_t
                constexpr std::ptrdiff_t m_donated = 0x1834; // bool
                constexpr std::ptrdiff_t m_fLastShotTime = 0x1838; // GameTime_t
                constexpr std::ptrdiff_t m_bWasOwnedByCT = 0x183C; // bool
                constexpr std::ptrdiff_t m_bWasOwnedByTerrorist = 0x183D; // bool
                constexpr std::ptrdiff_t m_gunHeat = 0x1840; // float32
                constexpr std::ptrdiff_t m_smokeAttachments = 0x1844; // uint32
                constexpr std::ptrdiff_t m_lastSmokeTime = 0x1848; // GameTime_t
                constexpr std::ptrdiff_t m_flNextClientFireBulletTime = 0x184C; // float32
                constexpr std::ptrdiff_t m_flNextClientFireBulletTime_Repredict = 0x1850; // float32
                constexpr std::ptrdiff_t m_IronSightController = 0x1930; // C_IronSightController
                constexpr std::ptrdiff_t m_iIronSightMode = 0x19E0; // int32
                constexpr std::ptrdiff_t m_flLastLOSTraceFailureTime = 0x19F0; // GameTime_t
                constexpr std::ptrdiff_t m_iNumEmptyAttacks = 0x19F4; // int32
                constexpr std::ptrdiff_t m_flLastMagDropRequestTime = 0x1A70; // GameTime_t
                constexpr std::ptrdiff_t m_flWatTickOffset = 0x1A74; // float32
            }
            // Parent: C_BaseModelEntity
            // Fields count: 0
            namespace C_TriggerVolume {
            }
            // Parent: C_FuncBrush
            // Fields count: 3
            //
            // Metadata:
            // NetworkVarNames: m_EffectName (string_t)
            // NetworkVarNames: m_bState (bool)
            namespace C_FuncElectrifiedVolume {
                constexpr std::ptrdiff_t m_nAmbientEffect = 0xCC8; // ParticleIndex_t
                constexpr std::ptrdiff_t m_EffectName = 0xCD0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bState = 0xCD8; // bool
            }
            // Parent: CPlayer_WeaponServices
            // Fields count: 5
            //
            // Metadata:
            // NetworkVarNames: m_flNextAttack (GameTime_t)
            // NetworkVarNames: m_bIsLookingAtWeapon (bool)
            // NetworkVarNames: m_bIsHoldingLookAtWeapon (bool)
            namespace CCSPlayer_WeaponServices {
                constexpr std::ptrdiff_t m_flNextAttack = 0xB8; // GameTime_t
                constexpr std::ptrdiff_t m_bIsLookingAtWeapon = 0xBC; // bool
                constexpr std::ptrdiff_t m_bIsHoldingLookAtWeapon = 0xBD; // bool
                constexpr std::ptrdiff_t m_nOldShootPositionHistoryCount = 0xC0; // uint32
                constexpr std::ptrdiff_t m_nOldInputHistoryCount = 0x458; // uint32
            }
            // Parent: C_BaseEntity
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_flFadeStartDist (float32)
            // NetworkVarNames: m_flFadeEndDist (float32)
            namespace C_EnvDetailController {
                constexpr std::ptrdiff_t m_flFadeStartDist = 0x548; // float32
                constexpr std::ptrdiff_t m_flFadeEndDist = 0x54C; // float32
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
            namespace C_BaseEntity {
                constexpr std::ptrdiff_t m_CBodyComponent = 0x38; // CBodyComponent*
                constexpr std::ptrdiff_t m_NetworkTransmitComponent = 0x40; // CNetworkTransmitComponent
                constexpr std::ptrdiff_t m_nLastThinkTick = 0x300; // GameTick_t
                constexpr std::ptrdiff_t m_pGameSceneNode = 0x308; // CGameSceneNode*
                constexpr std::ptrdiff_t m_pRenderComponent = 0x310; // CRenderComponent*
                constexpr std::ptrdiff_t m_pCollision = 0x318; // CCollisionProperty*
                constexpr std::ptrdiff_t m_iMaxHealth = 0x320; // int32
                constexpr std::ptrdiff_t m_iHealth = 0x324; // int32
                constexpr std::ptrdiff_t m_lifeState = 0x328; // uint8
                constexpr std::ptrdiff_t m_bTakesDamage = 0x329; // bool
                constexpr std::ptrdiff_t m_nTakeDamageFlags = 0x330; // TakeDamageFlags_t
                constexpr std::ptrdiff_t m_bIsPlatform = 0x338; // bool
                constexpr std::ptrdiff_t m_ubInterpolationFrame = 0x339; // uint8
                constexpr std::ptrdiff_t m_hSceneObjectController = 0x33C; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_nNoInterpolationTick = 0x340; // int32
                constexpr std::ptrdiff_t m_nVisibilityNoInterpolationTick = 0x344; // int32
                constexpr std::ptrdiff_t m_flProxyRandomValue = 0x348; // float32
                constexpr std::ptrdiff_t m_iEFlags = 0x34C; // int32
                constexpr std::ptrdiff_t m_nWaterType = 0x350; // uint8
                constexpr std::ptrdiff_t m_bInterpolateEvenWithNoModel = 0x351; // bool
                constexpr std::ptrdiff_t m_bPredictionEligible = 0x352; // bool
                constexpr std::ptrdiff_t m_bApplyLayerMatchIDToModel = 0x353; // bool
                constexpr std::ptrdiff_t m_tokLayerMatchID = 0x354; // CUtlStringToken
                constexpr std::ptrdiff_t m_nSubclassID = 0x358; // CUtlStringToken
                constexpr std::ptrdiff_t m_nSimulationTick = 0x368; // int32
                constexpr std::ptrdiff_t m_iCurrentThinkContext = 0x36C; // int32
                constexpr std::ptrdiff_t m_aThinkFunctions = 0x370; // CUtlVector<thinkfunc_t>
                constexpr std::ptrdiff_t m_bDisabledContextThinks = 0x388; // bool
                constexpr std::ptrdiff_t m_flAnimTime = 0x38C; // float32
                constexpr std::ptrdiff_t m_flSimulationTime = 0x390; // float32
                constexpr std::ptrdiff_t m_nSceneObjectOverrideFlags = 0x394; // uint8
                constexpr std::ptrdiff_t m_bHasSuccessfullyInterpolated = 0x395; // bool
                constexpr std::ptrdiff_t m_bHasAddedVarsToInterpolation = 0x396; // bool
                constexpr std::ptrdiff_t m_bRenderEvenWhenNotSuccessfullyInterpolated = 0x397; // bool
                constexpr std::ptrdiff_t m_nInterpolationLatchDirtyFlags = 0x398; // int32[2]
                constexpr std::ptrdiff_t m_ListEntry = 0x3A0; // uint16[11]
                constexpr std::ptrdiff_t m_flCreateTime = 0x3B8; // GameTime_t
                constexpr std::ptrdiff_t m_flSpeed = 0x3BC; // float32
                constexpr std::ptrdiff_t m_EntClientFlags = 0x3C0; // uint16
                constexpr std::ptrdiff_t m_bClientSideRagdoll = 0x3C2; // bool
                constexpr std::ptrdiff_t m_iTeamNum = 0x3C3; // uint8
                constexpr std::ptrdiff_t m_spawnflags = 0x3C4; // uint32
                constexpr std::ptrdiff_t m_nNextThinkTick = 0x3C8; // GameTick_t
                constexpr std::ptrdiff_t m_fFlags = 0x3CC; // uint32
                constexpr std::ptrdiff_t m_vecAbsVelocity = 0x3D0; // Vector
                constexpr std::ptrdiff_t m_vecVelocity = 0x3E0; // CNetworkVelocityVector
                constexpr std::ptrdiff_t m_vecBaseVelocity = 0x410; // Vector
                constexpr std::ptrdiff_t m_hEffectEntity = 0x41C; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_hOwnerEntity = 0x420; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_MoveCollide = 0x424; // MoveCollide_t
                constexpr std::ptrdiff_t m_MoveType = 0x425; // MoveType_t
                constexpr std::ptrdiff_t m_nActualMoveType = 0x426; // MoveType_t
                constexpr std::ptrdiff_t m_flWaterLevel = 0x428; // float32
                constexpr std::ptrdiff_t m_fEffects = 0x42C; // uint32
                constexpr std::ptrdiff_t m_hGroundEntity = 0x430; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_nGroundBodyIndex = 0x434; // int32
                constexpr std::ptrdiff_t m_flFriction = 0x438; // float32
                constexpr std::ptrdiff_t m_flElasticity = 0x43C; // float32
                constexpr std::ptrdiff_t m_flGravityScale = 0x440; // float32
                constexpr std::ptrdiff_t m_flTimeScale = 0x444; // float32
                constexpr std::ptrdiff_t m_bAnimatedEveryTick = 0x448; // bool
                constexpr std::ptrdiff_t m_flNavIgnoreUntilTime = 0x44C; // GameTime_t
                constexpr std::ptrdiff_t m_hThink = 0x450; // uint16
                constexpr std::ptrdiff_t m_fBBoxVisFlags = 0x460; // uint8
                constexpr std::ptrdiff_t m_bPredictable = 0x461; // bool
                constexpr std::ptrdiff_t m_bRenderWithViewModels = 0x462; // bool
                constexpr std::ptrdiff_t m_nSplitUserPlayerPredictionSlot = 0x464; // CSplitScreenSlot
                constexpr std::ptrdiff_t m_nFirstPredictableCommand = 0x468; // int32
                constexpr std::ptrdiff_t m_nLastPredictableCommand = 0x46C; // int32
                constexpr std::ptrdiff_t m_hOldMoveParent = 0x470; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_Particles = 0x478; // CParticleProperty
                constexpr std::ptrdiff_t m_vecPredictedScriptFloats = 0x4A0; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_vecPredictedScriptFloatIDs = 0x4B8; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_nNextScriptVarRecordID = 0x4E8; // int32
                constexpr std::ptrdiff_t m_vecAngVelocity = 0x4F8; // QAngle
                constexpr std::ptrdiff_t m_DataChangeEventRef = 0x504; // int32
                constexpr std::ptrdiff_t m_dependencies = 0x508; // CUtlVector<CEntityHandle>
                constexpr std::ptrdiff_t m_nCreationTick = 0x520; // int32
                constexpr std::ptrdiff_t m_bAnimTimeChanged = 0x52D; // bool
                constexpr std::ptrdiff_t m_bSimulationTimeChanged = 0x52E; // bool
                constexpr std::ptrdiff_t m_sUniqueHammerID = 0x538; // CUtlString
                constexpr std::ptrdiff_t m_nBloodType = 0x540; // BloodType
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
            namespace C_PhysicsProp {
                constexpr std::ptrdiff_t m_bAwake = 0x1040; // bool
            }
            // Parent: CBaseProp
            // Fields count: 26
            //
            // Metadata:
            // NetworkVarNames: m_CPropDataComponent (CPropDataComponent::Storage_t)
            // NetworkVarNames: m_noGhostCollision (bool)
            namespace C_BreakableProp {
                constexpr std::ptrdiff_t m_CPropDataComponent = 0xF10; // CPropDataComponent
                constexpr std::ptrdiff_t m_OnBreak = 0xF50; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnHealthChanged = 0xF78; // CEntityOutputTemplate<float32>
                constexpr std::ptrdiff_t m_OnTakeDamage = 0xFA0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_impactEnergyScale = 0xFC8; // float32
                constexpr std::ptrdiff_t m_iMinHealthDmg = 0xFCC; // int32
                constexpr std::ptrdiff_t m_flPressureDelay = 0xFD0; // float32
                constexpr std::ptrdiff_t m_flDefBurstScale = 0xFD4; // float32
                constexpr std::ptrdiff_t m_vDefBurstOffset = 0xFD8; // Vector
                constexpr std::ptrdiff_t m_hBreaker = 0xFE4; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_PerformanceMode = 0xFE8; // PerformanceMode_t
                constexpr std::ptrdiff_t m_flPreventDamageBeforeTime = 0xFEC; // GameTime_t
                constexpr std::ptrdiff_t m_bHasBreakPiecesOrCommands = 0xFF0; // bool
                constexpr std::ptrdiff_t m_explodeDamage = 0xFF4; // float32
                constexpr std::ptrdiff_t m_explodeRadius = 0xFF8; // float32
                constexpr std::ptrdiff_t m_explosionDelay = 0x1000; // float32
                constexpr std::ptrdiff_t m_explosionBuildupSound = 0x1008; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_explosionCustomEffect = 0x1010; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_explosionCustomSound = 0x1018; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_explosionModifier = 0x1020; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hPhysicsAttacker = 0x1028; // CHandle<C_BasePlayerPawn>
                constexpr std::ptrdiff_t m_flLastPhysicsInfluenceTime = 0x102C; // GameTime_t
                constexpr std::ptrdiff_t m_flDefaultFadeScale = 0x1030; // float32
                constexpr std::ptrdiff_t m_hLastAttacker = 0x1034; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_hFlareEnt = 0x1038; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_noGhostCollision = 0x103C; // bool
            }
            // Parent: CCSGameModeScript
            // Fields count: 1
            //
            // Metadata:
            // MPulseInstanceDomainInfo
            // MPulseDomainHookInfo
            // MPulseLibraryBindings
            // MPulseDomainOptInFeatureTag
            namespace CCSArmsRaceScript {
                constexpr std::ptrdiff_t m_pOuter = 0xF8; // CCSGameModeRules_ArmsRace*
            }
            // Parent: C_BaseToggle
            // Fields count: 0
            //
            // Metadata:
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkOverride
            namespace C_FuncMoveLinear {
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
            namespace C_Beam {
                constexpr std::ptrdiff_t m_flFrameRate = 0xCC8; // float32
                constexpr std::ptrdiff_t m_flHDRColorScale = 0xCCC; // float32
                constexpr std::ptrdiff_t m_flFireTime = 0xCD0; // GameTime_t
                constexpr std::ptrdiff_t m_flDamage = 0xCD4; // float32
                constexpr std::ptrdiff_t m_nNumBeamEnts = 0xCD8; // uint8
                constexpr std::ptrdiff_t m_queryHandleHalo = 0xCDC; // int32
                constexpr std::ptrdiff_t m_hBaseMaterial = 0xD00; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_nHaloIndex = 0xD08; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_nBeamType = 0xD10; // BeamType_t
                constexpr std::ptrdiff_t m_nBeamFlags = 0xD14; // uint32
                constexpr std::ptrdiff_t m_hAttachEntity = 0xD18; // CHandle<C_BaseEntity>[10]
                constexpr std::ptrdiff_t m_nAttachIndex = 0xD40; // AttachmentHandle_t[10]
                constexpr std::ptrdiff_t m_fWidth = 0xD4C; // float32
                constexpr std::ptrdiff_t m_fEndWidth = 0xD50; // float32
                constexpr std::ptrdiff_t m_fFadeLength = 0xD54; // float32
                constexpr std::ptrdiff_t m_fHaloScale = 0xD58; // float32
                constexpr std::ptrdiff_t m_fAmplitude = 0xD5C; // float32
                constexpr std::ptrdiff_t m_fStartFrame = 0xD60; // float32
                constexpr std::ptrdiff_t m_fSpeed = 0xD64; // float32
                constexpr std::ptrdiff_t m_flFrame = 0xD68; // float32
                constexpr std::ptrdiff_t m_nClipStyle = 0xD6C; // BeamClipStyle_t
                constexpr std::ptrdiff_t m_bTurnedOff = 0xD70; // bool
                constexpr std::ptrdiff_t m_vecEndPos = 0xD74; // Vector
                constexpr std::ptrdiff_t m_hEndEntity = 0xD80; // CHandle<C_BaseEntity>
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
            namespace C_CSGO_TeamPreviewCharacterPosition {
                constexpr std::ptrdiff_t m_nVariant = 0x548; // int32
                constexpr std::ptrdiff_t m_nRandom = 0x54C; // int32
                constexpr std::ptrdiff_t m_nOrdinal = 0x550; // int32
                constexpr std::ptrdiff_t m_sWeaponName = 0x558; // CUtlString
                constexpr std::ptrdiff_t m_xuid = 0x560; // uint64
                constexpr std::ptrdiff_t m_agentItem = 0x568; // C_EconItemView
                constexpr std::ptrdiff_t m_glovesItem = 0x9B0; // C_EconItemView
                constexpr std::ptrdiff_t m_weaponItem = 0xDF8; // C_EconItemView
            }
            // Parent: C_DynamicProp
            // Fields count: 0
            namespace C_DynamicPropAlias_prop_dynamic_override {
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
            namespace C_EnvScreenOverlay {
                constexpr std::ptrdiff_t m_iszOverlayNames = 0x548; // CUtlSymbolLarge[10]
                constexpr std::ptrdiff_t m_flOverlayTimes = 0x598; // float32[10]
                constexpr std::ptrdiff_t m_flStartTime = 0x5C0; // GameTime_t
                constexpr std::ptrdiff_t m_iDesiredOverlay = 0x5C4; // int32
                constexpr std::ptrdiff_t m_bIsActive = 0x5C8; // bool
                constexpr std::ptrdiff_t m_bWasActive = 0x5C9; // bool
                constexpr std::ptrdiff_t m_iCachedDesiredOverlay = 0x5CC; // int32
                constexpr std::ptrdiff_t m_iCurrentOverlay = 0x5D0; // int32
                constexpr std::ptrdiff_t m_flCurrentOverlayTime = 0x5D4; // GameTime_t
            }
            // Parent: CBasePlayerWeaponVData
            // Fields count: 92
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertySuppressBaseClassField
            // MPropertySuppressBaseClassField
            namespace CCSWeaponBaseVData {
                constexpr std::ptrdiff_t m_WeaponType = 0x250; // CSWeaponType
                constexpr std::ptrdiff_t m_WeaponCategory = 0x254; // CSWeaponCategory
                constexpr std::ptrdiff_t m_szViewModel = 0x258; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                constexpr std::ptrdiff_t m_szPlayerModel = 0x338; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                constexpr std::ptrdiff_t m_szWorldDroppedModel = 0x418; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                constexpr std::ptrdiff_t m_szAimsightLensMaskModel = 0x4F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                constexpr std::ptrdiff_t m_szMagazineModel = 0x5D8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                constexpr std::ptrdiff_t m_szHeatEffect = 0x6B8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_szEjectBrassEffect = 0x798; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_szMuzzleFlashParticleAlt = 0x878; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_szMuzzleFlashThirdPersonParticle = 0x958; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_szMuzzleFlashThirdPersonParticleAlt = 0xA38; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_szTracerParticle = 0xB18; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_GearSlot = 0xBF8; // gear_slot_t
                constexpr std::ptrdiff_t m_GearSlotPosition = 0xBFC; // int32
                constexpr std::ptrdiff_t m_DefaultLoadoutSlot = 0xC00; // loadout_slot_t
                constexpr std::ptrdiff_t m_sWrongTeamMsg = 0xC08; // CUtlString
                constexpr std::ptrdiff_t m_nPrice = 0xC10; // int32
                constexpr std::ptrdiff_t m_nKillAward = 0xC14; // int32
                constexpr std::ptrdiff_t m_nPrimaryReserveAmmoMax = 0xC18; // int32
                constexpr std::ptrdiff_t m_nSecondaryReserveAmmoMax = 0xC1C; // int32
                constexpr std::ptrdiff_t m_bMeleeWeapon = 0xC20; // bool
                constexpr std::ptrdiff_t m_bHasBurstMode = 0xC21; // bool
                constexpr std::ptrdiff_t m_bIsRevolver = 0xC22; // bool
                constexpr std::ptrdiff_t m_bCannotShootUnderwater = 0xC23; // bool
                constexpr std::ptrdiff_t m_szName = 0xC28; // CGlobalSymbol
                constexpr std::ptrdiff_t m_szAnimExtension = 0xC30; // CUtlString
                constexpr std::ptrdiff_t m_eSilencerType = 0xC38; // CSWeaponSilencerType
                constexpr std::ptrdiff_t m_nCrosshairMinDistance = 0xC3C; // int32
                constexpr std::ptrdiff_t m_nCrosshairDeltaDistance = 0xC40; // int32
                constexpr std::ptrdiff_t m_bIsFullAuto = 0xC44; // bool
                constexpr std::ptrdiff_t m_nNumBullets = 0xC48; // int32
                constexpr std::ptrdiff_t m_flCycleTime = 0xC4C; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flMaxSpeed = 0xC54; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flSpread = 0xC5C; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flInaccuracyCrouch = 0xC64; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flInaccuracyStand = 0xC6C; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flInaccuracyJump = 0xC74; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flInaccuracyLand = 0xC7C; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flInaccuracyLadder = 0xC84; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flInaccuracyFire = 0xC8C; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flInaccuracyMove = 0xC94; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flRecoilAngle = 0xC9C; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flRecoilAngleVariance = 0xCA4; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flRecoilMagnitude = 0xCAC; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flRecoilMagnitudeVariance = 0xCB4; // CFiringModeFloat
                constexpr std::ptrdiff_t m_nTracerFrequency = 0xCBC; // CFiringModeInt
                constexpr std::ptrdiff_t m_flInaccuracyJumpInitial = 0xCC4; // float32
                constexpr std::ptrdiff_t m_flInaccuracyJumpApex = 0xCC8; // float32
                constexpr std::ptrdiff_t m_flInaccuracyReload = 0xCCC; // float32
                constexpr std::ptrdiff_t m_nRecoilSeed = 0xCD0; // int32
                constexpr std::ptrdiff_t m_nSpreadSeed = 0xCD4; // int32
                constexpr std::ptrdiff_t m_flTimeToIdleAfterFire = 0xCD8; // float32
                constexpr std::ptrdiff_t m_flIdleInterval = 0xCDC; // float32
                constexpr std::ptrdiff_t m_flAttackMovespeedFactor = 0xCE0; // float32
                constexpr std::ptrdiff_t m_flHeatPerShot = 0xCE4; // float32
                constexpr std::ptrdiff_t m_flInaccuracyPitchShift = 0xCE8; // float32
                constexpr std::ptrdiff_t m_flInaccuracyAltSoundThreshold = 0xCEC; // float32
                constexpr std::ptrdiff_t m_flBotAudibleRange = 0xCF0; // float32
                constexpr std::ptrdiff_t m_szUseRadioSubtitle = 0xCF8; // CUtlString
                constexpr std::ptrdiff_t m_bUnzoomsAfterShot = 0xD00; // bool
                constexpr std::ptrdiff_t m_bHideViewModelWhenZoomed = 0xD01; // bool
                constexpr std::ptrdiff_t m_nZoomLevels = 0xD04; // int32
                constexpr std::ptrdiff_t m_nZoomFOV1 = 0xD08; // int32
                constexpr std::ptrdiff_t m_nZoomFOV2 = 0xD0C; // int32
                constexpr std::ptrdiff_t m_flZoomTime0 = 0xD10; // float32
                constexpr std::ptrdiff_t m_flZoomTime1 = 0xD14; // float32
                constexpr std::ptrdiff_t m_flZoomTime2 = 0xD18; // float32
                constexpr std::ptrdiff_t m_flIronSightPullUpSpeed = 0xD1C; // float32
                constexpr std::ptrdiff_t m_flIronSightPutDownSpeed = 0xD20; // float32
                constexpr std::ptrdiff_t m_flIronSightFOV = 0xD24; // float32
                constexpr std::ptrdiff_t m_flIronSightPivotForward = 0xD28; // float32
                constexpr std::ptrdiff_t m_flIronSightLooseness = 0xD2C; // float32
                constexpr std::ptrdiff_t m_angPivotAngle = 0xD30; // QAngle
                constexpr std::ptrdiff_t m_vecIronSightEyePos = 0xD3C; // Vector
                constexpr std::ptrdiff_t m_nDamage = 0xD48; // int32
                constexpr std::ptrdiff_t m_flHeadshotMultiplier = 0xD4C; // float32
                constexpr std::ptrdiff_t m_flArmorRatio = 0xD50; // float32
                constexpr std::ptrdiff_t m_flPenetration = 0xD54; // float32
                constexpr std::ptrdiff_t m_flRange = 0xD58; // float32
                constexpr std::ptrdiff_t m_flRangeModifier = 0xD5C; // float32
                constexpr std::ptrdiff_t m_flFlinchVelocityModifierLarge = 0xD60; // float32
                constexpr std::ptrdiff_t m_flFlinchVelocityModifierSmall = 0xD64; // float32
                constexpr std::ptrdiff_t m_flRecoveryTimeCrouch = 0xD68; // float32
                constexpr std::ptrdiff_t m_flRecoveryTimeStand = 0xD6C; // float32
                constexpr std::ptrdiff_t m_flRecoveryTimeCrouchFinal = 0xD70; // float32
                constexpr std::ptrdiff_t m_flRecoveryTimeStandFinal = 0xD74; // float32
                constexpr std::ptrdiff_t m_nRecoveryTransitionStartBullet = 0xD78; // int32
                constexpr std::ptrdiff_t m_nRecoveryTransitionEndBullet = 0xD7C; // int32
                constexpr std::ptrdiff_t m_flThrowVelocity = 0xD80; // float32
                constexpr std::ptrdiff_t m_vSmokeColor = 0xD84; // Vector
                constexpr std::ptrdiff_t m_szAnimClass = 0xD90; // CGlobalSymbol
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
            namespace C_PointWorldText {
                constexpr std::ptrdiff_t m_bForceRecreateNextUpdate = 0xCD0; // bool
                constexpr std::ptrdiff_t m_messageText = 0xCE0; // char[512]
                constexpr std::ptrdiff_t m_FontName = 0xEE0; // char[64]
                constexpr std::ptrdiff_t m_bEnabled = 0xF20; // bool
                constexpr std::ptrdiff_t m_bFullbright = 0xF21; // bool
                constexpr std::ptrdiff_t m_flWorldUnitsPerPx = 0xF24; // float32
                constexpr std::ptrdiff_t m_flFontSize = 0xF28; // float32
                constexpr std::ptrdiff_t m_flDepthOffset = 0xF2C; // float32
                constexpr std::ptrdiff_t m_Color = 0xF30; // Color
                constexpr std::ptrdiff_t m_nJustifyHorizontal = 0xF34; // PointWorldTextJustifyHorizontal_t
                constexpr std::ptrdiff_t m_nJustifyVertical = 0xF38; // PointWorldTextJustifyVertical_t
                constexpr std::ptrdiff_t m_nReorientMode = 0xF3C; // PointWorldTextReorientMode_t
            }
            // Parent: C_BaseGrenade
            // Fields count: 0
            namespace CBumpMineProjectile {
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
            namespace CCSPlayerController {
                constexpr std::ptrdiff_t m_pInGameMoneyServices = 0x6F0; // CCSPlayerController_InGameMoneyServices*
                constexpr std::ptrdiff_t m_pInventoryServices = 0x6F8; // CCSPlayerController_InventoryServices*
                constexpr std::ptrdiff_t m_pActionTrackingServices = 0x700; // CCSPlayerController_ActionTrackingServices*
                constexpr std::ptrdiff_t m_pDamageServices = 0x708; // CCSPlayerController_DamageServices*
                constexpr std::ptrdiff_t m_iPing = 0x710; // uint32
                constexpr std::ptrdiff_t m_bHasCommunicationAbuseMute = 0x714; // bool
                constexpr std::ptrdiff_t m_szCrosshairCodes = 0x718; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iPendingTeamNum = 0x720; // uint8
                constexpr std::ptrdiff_t m_flForceTeamTime = 0x724; // GameTime_t
                constexpr std::ptrdiff_t m_iCompTeammateColor = 0x728; // int32
                constexpr std::ptrdiff_t m_bEverPlayedOnTeam = 0x72C; // bool
                constexpr std::ptrdiff_t m_flPreviousForceJoinTeamTime = 0x730; // GameTime_t
                constexpr std::ptrdiff_t m_szClan = 0x738; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_sSanitizedPlayerName = 0x740; // CUtlString
                constexpr std::ptrdiff_t m_iCoachingTeam = 0x748; // int32
                constexpr std::ptrdiff_t m_nPlayerDominated = 0x750; // uint64
                constexpr std::ptrdiff_t m_nPlayerDominatingMe = 0x758; // uint64
                constexpr std::ptrdiff_t m_iCompetitiveRanking = 0x760; // int32
                constexpr std::ptrdiff_t m_iCompetitiveWins = 0x764; // int32
                constexpr std::ptrdiff_t m_iCompetitiveRankType = 0x768; // int8
                constexpr std::ptrdiff_t m_iCompetitiveRankingPredicted_Win = 0x76C; // int32
                constexpr std::ptrdiff_t m_iCompetitiveRankingPredicted_Loss = 0x770; // int32
                constexpr std::ptrdiff_t m_iCompetitiveRankingPredicted_Tie = 0x774; // int32
                constexpr std::ptrdiff_t m_nEndMatchNextMapVote = 0x778; // int32
                constexpr std::ptrdiff_t m_unActiveQuestId = 0x77C; // uint16
                constexpr std::ptrdiff_t m_nQuestProgressReason = 0x780; // QuestProgress::Reason
                constexpr std::ptrdiff_t m_unPlayerTvControlFlags = 0x784; // uint32
                constexpr std::ptrdiff_t m_iDraftIndex = 0x7B0; // int32
                constexpr std::ptrdiff_t m_msQueuedModeDisconnectionTimestamp = 0x7B4; // uint32
                constexpr std::ptrdiff_t m_uiAbandonRecordedReason = 0x7B8; // uint32
                constexpr std::ptrdiff_t m_bCannotBeKicked = 0x7BC; // bool
                constexpr std::ptrdiff_t m_bEverFullyConnected = 0x7BD; // bool
                constexpr std::ptrdiff_t m_bAbandonAllowsSurrender = 0x7BE; // bool
                constexpr std::ptrdiff_t m_bAbandonOffersInstantSurrender = 0x7BF; // bool
                constexpr std::ptrdiff_t m_bDisconnection1MinWarningPrinted = 0x7C0; // bool
                constexpr std::ptrdiff_t m_bScoreReported = 0x7C1; // bool
                constexpr std::ptrdiff_t m_nDisconnectionTick = 0x7C4; // int32
                constexpr std::ptrdiff_t m_bControllingBot = 0x7D0; // bool
                constexpr std::ptrdiff_t m_bHasControlledBotThisRound = 0x7D1; // bool
                constexpr std::ptrdiff_t m_bHasBeenControlledByPlayerThisRound = 0x7D2; // bool
                constexpr std::ptrdiff_t m_nBotsControlledThisRound = 0x7D4; // int32
                constexpr std::ptrdiff_t m_bCanControlObservedBot = 0x7D8; // bool
                constexpr std::ptrdiff_t m_hPlayerPawn = 0x7DC; // CHandle<C_CSPlayerPawn>
                constexpr std::ptrdiff_t m_hObserverPawn = 0x7E0; // CHandle<C_CSObserverPawn>
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
                constexpr std::ptrdiff_t m_vecKills = 0x808; // C_NetworkUtlVectorBase<EKillTypes_t>
                constexpr std::ptrdiff_t m_bMvpNoMusic = 0x820; // bool
                constexpr std::ptrdiff_t m_eMvpReason = 0x824; // int32
                constexpr std::ptrdiff_t m_iMusicKitID = 0x828; // int32
                constexpr std::ptrdiff_t m_iMusicKitMVPs = 0x82C; // int32
                constexpr std::ptrdiff_t m_iMVPs = 0x830; // int32
                constexpr std::ptrdiff_t m_bIsPlayerNameDirty = 0x834; // bool
            }
            // Parent: C_CSWeaponBaseGun
            // Fields count: 0
            namespace C_WeaponFiveSeven {
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
            namespace C_BasePropDoor {
                constexpr std::ptrdiff_t m_eDoorState = 0x1168; // DoorState_t
                constexpr std::ptrdiff_t m_modelChanged = 0x116C; // bool
                constexpr std::ptrdiff_t m_bLocked = 0x116D; // bool
                constexpr std::ptrdiff_t m_closedPosition = 0x1170; // Vector
                constexpr std::ptrdiff_t m_closedAngles = 0x117C; // QAngle
                constexpr std::ptrdiff_t m_hMaster = 0x1188; // CHandle<C_BasePropDoor>
                constexpr std::ptrdiff_t m_vWhereToSetLightingOrigin = 0x118C; // Vector
            }
            // Parent: C_CSGO_TeamSelectCharacterPosition
            // Fields count: 0
            namespace C_CSGO_TeamSelectTerroristPosition {
            }
            // Parent: C_BreakableProp
            // Fields count: 6
            namespace C_PhysPropClientside {
                constexpr std::ptrdiff_t m_flTouchDelta = 0x1040; // GameTime_t
                constexpr std::ptrdiff_t m_fDeathTime = 0x1044; // GameTime_t
                constexpr std::ptrdiff_t m_inertiaScale = 0x1048; // float32
                constexpr std::ptrdiff_t m_vecDamagePosition = 0x104C; // Vector
                constexpr std::ptrdiff_t m_vecDamageDirection = 0x1058; // Vector
                constexpr std::ptrdiff_t m_nDamageType = 0x1064; // int32
            }
            // Parent: C_CSGO_TeamPreviewCamera
            // Fields count: 0
            namespace C_CSGO_TeamSelectCamera {
            }
            // Parent: C_BaseEntity
            // Fields count: 4
            //
            // Metadata:
            // NetworkVarNames: m_bDisabled (bool)
            // NetworkVarNames: m_iszSoundAreaType (string_t)
            // NetworkVarNames: m_vPos (Vector)
            namespace C_SoundAreaEntityBase {
                constexpr std::ptrdiff_t m_bDisabled = 0x548; // bool
                constexpr std::ptrdiff_t m_bWasEnabled = 0x550; // bool
                constexpr std::ptrdiff_t m_iszSoundAreaType = 0x558; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_vPos = 0x560; // Vector
            }
            // Parent: C_BaseEntity
            // Fields count: 3
            //
            // Metadata:
            // NetworkVarNames: m_fog (fogparams_t)
            namespace C_FogController {
                constexpr std::ptrdiff_t m_fog = 0x548; // fogparams_t
                constexpr std::ptrdiff_t m_bUseAngles = 0x5B0; // bool
                constexpr std::ptrdiff_t m_iChangedVariables = 0x5B4; // int32
            }
            // Parent: CPlayerPawnComponent
            // Fields count: 0
            namespace CPlayer_ItemServices {
            }
            // Parent: C_BaseModelEntity
            // Fields count: 0
            namespace C_FuncBrush {
            }
            // Parent: C_BaseEntity
            // Fields count: 8
            //
            // Metadata:
            // NetworkVarNames: m_worldName (string_t)
            // NetworkVarNames: m_layerName (string_t)
            // NetworkVarNames: m_bWorldLayerVisible (bool)
            // NetworkVarNames: m_bEntitiesSpawned (bool)
            namespace CInfoWorldLayer {
                constexpr std::ptrdiff_t m_pOutputOnEntitiesSpawned = 0x548; // CEntityIOOutput
                constexpr std::ptrdiff_t m_worldName = 0x570; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_layerName = 0x578; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bWorldLayerVisible = 0x580; // bool
                constexpr std::ptrdiff_t m_bEntitiesSpawned = 0x581; // bool
                constexpr std::ptrdiff_t m_bCreateAsChildSpawnGroup = 0x582; // bool
                constexpr std::ptrdiff_t m_hLayerSpawnGroup = 0x584; // uint32
                constexpr std::ptrdiff_t m_bWorldLayerActuallyVisible = 0x588; // bool
            }
            // Parent: C_BaseCombatCharacter
            // Fields count: 0
            namespace C_NetTestBaseCombatCharacter {
            }
            // Parent: CBaseAnimGraph
            // Fields count: 1
            namespace C_ViewmodelWeapon {
                constexpr std::ptrdiff_t m_worldModel = 0xED0; // char*
            }
            // Parent: CBaseAnimGraph
            // Fields count: 2
            namespace C_PhysMagnet {
                constexpr std::ptrdiff_t m_aAttachedObjectsFromServer = 0xED0; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_aAttachedObjects = 0xEE8; // CUtlVector<CHandle<C_BaseEntity>>
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
            namespace C_FuncConveyor {
                constexpr std::ptrdiff_t m_vecMoveDirEntitySpace = 0xCD0; // Vector
                constexpr std::ptrdiff_t m_flTargetSpeed = 0xCDC; // float32
                constexpr std::ptrdiff_t m_nTransitionStartTick = 0xCE0; // GameTick_t
                constexpr std::ptrdiff_t m_nTransitionDurationTicks = 0xCE4; // int32
                constexpr std::ptrdiff_t m_flTransitionStartSpeed = 0xCE8; // float32
                constexpr std::ptrdiff_t m_hConveyorModels = 0xCF0; // C_NetworkUtlVectorBase<CHandle<C_BaseEntity>>
                constexpr std::ptrdiff_t m_flCurrentConveyorOffset = 0xD08; // float32
                constexpr std::ptrdiff_t m_flCurrentConveyorSpeed = 0xD0C; // float32
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
            // Fields count: 3
            namespace ServerAuthoritativeWeaponSlot_t {
                constexpr std::ptrdiff_t unClass = 0x28; // uint16
                constexpr std::ptrdiff_t unSlot = 0x2A; // uint16
                constexpr std::ptrdiff_t unItemDefIdx = 0x2C; // uint16
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
            namespace C_BaseViewModel {
                constexpr std::ptrdiff_t m_vecLastFacing = 0xED8; // Vector
                constexpr std::ptrdiff_t m_nViewModelIndex = 0xEE4; // uint32
                constexpr std::ptrdiff_t m_nAnimationParity = 0xEE8; // uint32
                constexpr std::ptrdiff_t m_flAnimationStartTime = 0xEEC; // float32
                constexpr std::ptrdiff_t m_hWeapon = 0xEF0; // CHandle<C_BasePlayerWeapon>
                constexpr std::ptrdiff_t m_sVMName = 0xEF8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_sAnimationPrefix = 0xF00; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hWeaponModel = 0xF08; // CHandle<C_ViewmodelWeapon>
                constexpr std::ptrdiff_t m_iCameraAttachment = 0xF0C; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_vecLastCameraAngles = 0xF10; // QAngle
                constexpr std::ptrdiff_t m_previousElapsedDuration = 0xF1C; // float32
                constexpr std::ptrdiff_t m_previousCycle = 0xF20; // float32
                constexpr std::ptrdiff_t m_nOldAnimationParity = 0xF24; // int32
                constexpr std::ptrdiff_t m_hOldLayerSequence = 0xF28; // HSequence
                constexpr std::ptrdiff_t m_oldLayer = 0xF2C; // int32
                constexpr std::ptrdiff_t m_oldLayerStartTime = 0xF30; // float32
                constexpr std::ptrdiff_t m_hControlPanel = 0xF34; // CHandle<C_BaseEntity>
            }
            // Parent: CHostageRescueZoneShim
            // Fields count: 0
            namespace CHostageRescueZone {
            }
            // Parent: C_CSWeaponBaseGun
            // Fields count: 0
            namespace C_WeaponNegev {
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
            // Fields count: 33
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
                constexpr std::ptrdiff_t m_hParent = 0x78; // CGameSceneNodeHandle
                constexpr std::ptrdiff_t m_vecOrigin = 0x88; // CNetworkOriginCellCoordQuantizedVector
                constexpr std::ptrdiff_t m_angRotation = 0xC0; // QAngle
                constexpr std::ptrdiff_t m_flScale = 0xCC; // float32
                constexpr std::ptrdiff_t m_vecAbsOrigin = 0xD0; // Vector
                constexpr std::ptrdiff_t m_angAbsRotation = 0xDC; // QAngle
                constexpr std::ptrdiff_t m_flAbsScale = 0xE8; // float32
                constexpr std::ptrdiff_t m_nParentAttachmentOrBone = 0xEC; // int16
                constexpr std::ptrdiff_t m_bDebugAbsOriginChanges = 0xEE; // bool
                constexpr std::ptrdiff_t m_bDormant = 0xEF; // bool
                constexpr std::ptrdiff_t m_bForceParentToBeNetworked = 0xF0; // bool
                constexpr std::ptrdiff_t m_bDirtyHierarchy = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bDirtyBoneMergeInfo = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bNetworkedPositionChanged = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bNetworkedAnglesChanged = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bNetworkedScaleChanged = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bWillBeCallingPostDataUpdate = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bBoneMergeFlex = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_nLatchAbsOrigin = 0x0; // bitfield:2
                constexpr std::ptrdiff_t m_bDirtyBoneMergeBoneToRoot = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_nHierarchicalDepth = 0xF3; // uint8
                constexpr std::ptrdiff_t m_nHierarchyType = 0xF4; // uint8
                constexpr std::ptrdiff_t m_nDoNotSetAnimTimeInInvalidatePhysicsCount = 0xF5; // uint8
                constexpr std::ptrdiff_t m_name = 0xF8; // CUtlStringToken
                constexpr std::ptrdiff_t m_hierarchyAttachName = 0x138; // CUtlStringToken
                constexpr std::ptrdiff_t m_flZOffset = 0x13C; // float32
                constexpr std::ptrdiff_t m_flClientLocalScale = 0x140; // float32
                constexpr std::ptrdiff_t m_vRenderOrigin = 0x144; // Vector
            }
            // Parent: C_MolotovGrenade
            // Fields count: 0
            namespace C_IncendiaryGrenade {
            }
            // Parent: C_CSWeaponBase
            // Fields count: 0
            namespace CTablet {
            }
            // Parent: CBasePulseGraphInstance
            // Fields count: 1
            //
            // Metadata:
            // MPulseInstanceDomainInfo
            // MPulseDomainHookInfo
            // MPulseLibraryBindings
            // MPulseDomainOptInFeatureTag
            namespace CCSPointScript {
                constexpr std::ptrdiff_t m_pParent = 0xF8; // CCSPointScriptEntity*
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
            namespace C_CSObserverPawn {
                constexpr std::ptrdiff_t m_hDetectParentChange = 0x1460; // CEntityHandle
            }
            // Parent: C_BaseEntity
            // Fields count: 3
            //
            // Metadata:
            // NetworkVarNames: m_hEntAttached (CHandle<C_BaseEntity>)
            // NetworkVarNames: m_bCheapEffect (bool)
            namespace C_EntityFlame {
                constexpr std::ptrdiff_t m_hEntAttached = 0x548; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_hOldAttached = 0x570; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_bCheapEffect = 0x574; // bool
            }
            // Parent: C_BaseGrenade
            // Fields count: 0
            namespace CTripWireFireProjectile {
            }
            // Parent: C_BaseModelEntity
            // Fields count: 0
            namespace C_Breakable {
            }
            // Parent: CPlayer_ObserverServices
            // Fields count: 8
            namespace CCSObserver_ObserverServices {
                constexpr std::ptrdiff_t m_hLastObserverTarget = 0x58; // CEntityHandle
                constexpr std::ptrdiff_t m_vecObserverInterpolateOffset = 0x5C; // Vector
                constexpr std::ptrdiff_t m_vecObserverInterpStartPos = 0x68; // Vector
                constexpr std::ptrdiff_t m_flObsInterp_PathLength = 0x74; // float32
                constexpr std::ptrdiff_t m_qObsInterp_OrientationStart = 0x80; // Quaternion
                constexpr std::ptrdiff_t m_qObsInterp_OrientationTravelDir = 0x90; // Quaternion
                constexpr std::ptrdiff_t m_obsInterpState = 0xA0; // ObserverInterpState_t
                constexpr std::ptrdiff_t m_bObserverInterpolationNeedsDeferredSetup = 0xA4; // bool
            }
            // Parent: C_BaseEntity
            // Fields count: 0
            namespace C_TintController {
            }
            // Parent: CPlayerPawnComponent
            // Fields count: 0
            namespace CPlayer_AutoaimServices {
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
            namespace C_Hostage {
                constexpr std::ptrdiff_t m_entitySpottedState = 0x10F8; // EntitySpottedState_t
                constexpr std::ptrdiff_t m_leader = 0x1110; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_reuseTimer = 0x1118; // CountdownTimer
                constexpr std::ptrdiff_t m_vel = 0x1130; // Vector
                constexpr std::ptrdiff_t m_isRescued = 0x113C; // bool
                constexpr std::ptrdiff_t m_jumpedThisFrame = 0x113D; // bool
                constexpr std::ptrdiff_t m_nHostageState = 0x1140; // int32
                constexpr std::ptrdiff_t m_bHandsHaveBeenCut = 0x1144; // bool
                constexpr std::ptrdiff_t m_hHostageGrabber = 0x1148; // CHandle<C_CSPlayerPawn>
                constexpr std::ptrdiff_t m_fLastGrabTime = 0x114C; // GameTime_t
                constexpr std::ptrdiff_t m_vecGrabbedPos = 0x1150; // Vector
                constexpr std::ptrdiff_t m_flRescueStartTime = 0x115C; // GameTime_t
                constexpr std::ptrdiff_t m_flGrabSuccessTime = 0x1160; // GameTime_t
                constexpr std::ptrdiff_t m_flDropStartTime = 0x1164; // GameTime_t
                constexpr std::ptrdiff_t m_flDeadOrRescuedTime = 0x1168; // GameTime_t
                constexpr std::ptrdiff_t m_blinkTimer = 0x1170; // CountdownTimer
                constexpr std::ptrdiff_t m_lookAt = 0x1188; // Vector
                constexpr std::ptrdiff_t m_lookAroundTimer = 0x1198; // CountdownTimer
                constexpr std::ptrdiff_t m_isInit = 0x11B0; // bool
                constexpr std::ptrdiff_t m_eyeAttachment = 0x11B1; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_chestAttachment = 0x11B2; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_pPredictionOwner = 0x11B8; // CBasePlayerController*
                constexpr std::ptrdiff_t m_fNewestAlphaThinkTime = 0x11C0; // GameTime_t
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
            namespace C_Sprite {
                constexpr std::ptrdiff_t m_hSpriteMaterial = 0xCC8; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_hAttachedToEntity = 0xCD0; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_nAttachment = 0xCD4; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_flSpriteFramerate = 0xCD8; // float32
                constexpr std::ptrdiff_t m_flFrame = 0xCDC; // float32
                constexpr std::ptrdiff_t m_flDieTime = 0xCE0; // GameTime_t
                constexpr std::ptrdiff_t m_nBrightness = 0xCF0; // uint32
                constexpr std::ptrdiff_t m_flBrightnessDuration = 0xCF4; // float32
                constexpr std::ptrdiff_t m_flSpriteScale = 0xCF8; // float32
                constexpr std::ptrdiff_t m_flScaleDuration = 0xCFC; // float32
                constexpr std::ptrdiff_t m_bWorldSpaceScale = 0xD00; // bool
                constexpr std::ptrdiff_t m_flGlowProxySize = 0xD04; // float32
                constexpr std::ptrdiff_t m_flHDRColorScale = 0xD08; // float32
                constexpr std::ptrdiff_t m_flLastTime = 0xD0C; // GameTime_t
                constexpr std::ptrdiff_t m_flMaxFrame = 0xD10; // float32
                constexpr std::ptrdiff_t m_flStartScale = 0xD14; // float32
                constexpr std::ptrdiff_t m_flDestScale = 0xD18; // float32
                constexpr std::ptrdiff_t m_flScaleTimeStart = 0xD1C; // GameTime_t
                constexpr std::ptrdiff_t m_nStartBrightness = 0xD20; // int32
                constexpr std::ptrdiff_t m_nDestBrightness = 0xD24; // int32
                constexpr std::ptrdiff_t m_flBrightnessTimeStart = 0xD28; // GameTime_t
                constexpr std::ptrdiff_t m_hOldSpriteMaterial = 0xD30; // CWeakHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_nSpriteWidth = 0xDD0; // int32
                constexpr std::ptrdiff_t m_nSpriteHeight = 0xDD4; // int32
            }
            // Parent: C_CSWeaponBaseGun
            // Fields count: 0
            namespace C_WeaponM4A1Silencer {
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
            namespace C_PlantedC4 {
                constexpr std::ptrdiff_t m_bBombTicking = 0xED0; // bool
                constexpr std::ptrdiff_t m_nBombSite = 0xED4; // int32
                constexpr std::ptrdiff_t m_nSourceSoundscapeHash = 0xED8; // int32
                constexpr std::ptrdiff_t m_entitySpottedState = 0xEE0; // EntitySpottedState_t
                constexpr std::ptrdiff_t m_flNextGlow = 0xEF8; // GameTime_t
                constexpr std::ptrdiff_t m_flNextBeep = 0xEFC; // GameTime_t
                constexpr std::ptrdiff_t m_flC4Blow = 0xF00; // GameTime_t
                constexpr std::ptrdiff_t m_bCannotBeDefused = 0xF04; // bool
                constexpr std::ptrdiff_t m_bHasExploded = 0xF05; // bool
                constexpr std::ptrdiff_t m_flTimerLength = 0xF08; // float32
                constexpr std::ptrdiff_t m_bBeingDefused = 0xF0C; // bool
                constexpr std::ptrdiff_t m_bTriggerWarning = 0xF10; // float32
                constexpr std::ptrdiff_t m_bExplodeWarning = 0xF14; // float32
                constexpr std::ptrdiff_t m_bC4Activated = 0xF18; // bool
                constexpr std::ptrdiff_t m_bTenSecWarning = 0xF19; // bool
                constexpr std::ptrdiff_t m_flDefuseLength = 0xF1C; // float32
                constexpr std::ptrdiff_t m_flDefuseCountDown = 0xF20; // GameTime_t
                constexpr std::ptrdiff_t m_bBombDefused = 0xF24; // bool
                constexpr std::ptrdiff_t m_hBombDefuser = 0xF28; // CHandle<C_CSPlayerPawn>
                constexpr std::ptrdiff_t m_hControlPanel = 0xF2C; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_hDefuserMultimeter = 0xF30; // CHandle<C_Multimeter>
                constexpr std::ptrdiff_t m_flNextRadarFlashTime = 0xF34; // GameTime_t
                constexpr std::ptrdiff_t m_bRadarFlash = 0xF38; // bool
                constexpr std::ptrdiff_t m_pBombDefuser = 0xF3C; // CHandle<C_CSPlayerPawn>
                constexpr std::ptrdiff_t m_fLastDefuseTime = 0xF40; // GameTime_t
                constexpr std::ptrdiff_t m_pPredictionOwner = 0xF48; // CBasePlayerController*
                constexpr std::ptrdiff_t m_vecC4ExplodeSpectatePos = 0xF50; // Vector
                constexpr std::ptrdiff_t m_vecC4ExplodeSpectateAng = 0xF5C; // QAngle
                constexpr std::ptrdiff_t m_flC4ExplodeSpectateDuration = 0xF68; // float32
            }
            // Parent: CBaseAnimGraph
            // Fields count: 8
            //
            // Metadata:
            // NetworkVarNames: m_ragPos (Vector)
            // NetworkVarNames: m_ragAngles (QAngle)
            // NetworkVarNames: m_flBlendWeight (float32)
            // NetworkVarNames: m_hRagdollSource (EHANDLE)
            namespace C_RagdollProp {
                constexpr std::ptrdiff_t m_ragPos = 0xED8; // C_NetworkUtlVectorBase<Vector>
                constexpr std::ptrdiff_t m_ragAngles = 0xEF0; // C_NetworkUtlVectorBase<QAngle>
                constexpr std::ptrdiff_t m_flBlendWeight = 0xF08; // float32
                constexpr std::ptrdiff_t m_hRagdollSource = 0xF0C; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_iEyeAttachment = 0xF10; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_flBlendWeightCurrent = 0xF14; // float32
                constexpr std::ptrdiff_t m_parentPhysicsBoneIndices = 0xF18; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_worldSpaceBoneComputationOrder = 0xF30; // CUtlVector<int32>
            }
            // Parent: C_CSGO_TeamPreviewCamera
            // Fields count: 0
            namespace C_CSGO_TerroristTeamIntroCamera {
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
            namespace C_VoteController {
                constexpr std::ptrdiff_t m_iActiveIssueIndex = 0x558; // int32
                constexpr std::ptrdiff_t m_iOnlyTeamToVote = 0x55C; // int32
                constexpr std::ptrdiff_t m_nVoteOptionCount = 0x560; // int32[5]
                constexpr std::ptrdiff_t m_nPotentialVotes = 0x574; // int32
                constexpr std::ptrdiff_t m_bVotesDirty = 0x578; // bool
                constexpr std::ptrdiff_t m_bTypeDirty = 0x579; // bool
                constexpr std::ptrdiff_t m_bIsYesNoVote = 0x57A; // bool
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
            // Parent: C_DynamicProp
            // Fields count: 7
            //
            // Metadata:
            // NetworkVarNames: m_jumpedThisFrame (bool)
            // NetworkVarNames: m_leader (CHandle<CCSPlayerPawn>)
            // NetworkVarNames: m_AttributeManager (CAttributeContainer)
            namespace C_Chicken {
                constexpr std::ptrdiff_t m_hHolidayHatAddon = 0x1160; // CHandle<CBaseAnimGraph>
                constexpr std::ptrdiff_t m_jumpedThisFrame = 0x1164; // bool
                constexpr std::ptrdiff_t m_leader = 0x1168; // CHandle<C_CSPlayerPawn>
                constexpr std::ptrdiff_t m_AttributeManager = 0x1170; // C_AttributeContainer
                constexpr std::ptrdiff_t m_bAttributesInitialized = 0x1618; // bool
                constexpr std::ptrdiff_t m_hWaterWakeParticles = 0x161C; // ParticleIndex_t
                constexpr std::ptrdiff_t m_bIsPreviewModel = 0x1620; // bool
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // NetworkVarNames: m_Transforms (CTransform)
            // NetworkVarNames: m_hOwner (EHANDLE)
            namespace PhysicsRagdollPose_t {
                constexpr std::ptrdiff_t __m_pChainEntity = 0x8; // CNetworkVarChainer
                constexpr std::ptrdiff_t m_Transforms = 0x30; // C_NetworkUtlVectorBase<CTransform>
                constexpr std::ptrdiff_t m_hOwner = 0x48; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_bDirty = 0x68; // bool
            }
        }
    }
}
