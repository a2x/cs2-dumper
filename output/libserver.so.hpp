// Generated using https://github.com/a2x/cs2-dumper
// 2024-04-16 02:29:53.956513739 UTC

#pragma once

#include <cstddef>

namespace cs2_dumper {
    namespace schemas {
        // Module: libserver.so
        // Classes count: 218
        // Enums count: 16
        namespace libserver_so {
            // Alignment: 8
            // Members count: 5
            enum class CTestEffect : uint64_t {
                 = 0x0,
                 = 0x0,
                 = 0x0,
                 = 0x0,
                 = 0x0
            };
            // Parent: CBreakableProp
            // Fields count: 21
            //
            // Metadata:
            // NetworkVarNames: m_bUseHitboxesForRenderBox (bool)
            // NetworkVarNames: m_bUseAnimGraph (bool)
            namespace CDynamicProp {
                constexpr std::ptrdiff_t m_bCreateNavObstacle = 0xD70; // bool
                constexpr std::ptrdiff_t m_bUseHitboxesForRenderBox = 0xD71; // bool
                constexpr std::ptrdiff_t m_bUseAnimGraph = 0xD72; // bool
                constexpr std::ptrdiff_t m_pOutputAnimBegun = 0xD78; // CEntityIOOutput
                constexpr std::ptrdiff_t m_pOutputAnimOver = 0xDA0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_pOutputAnimLoopCycleOver = 0xDC8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnAnimReachedStart = 0xDF0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnAnimReachedEnd = 0xE18; // CEntityIOOutput
                constexpr std::ptrdiff_t m_iszIdleAnim = 0xE40; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_nIdleAnimLoopMode = 0xE48; // AnimLoopMode_t
                constexpr std::ptrdiff_t m_bRandomizeCycle = 0xE4C; // bool
                constexpr std::ptrdiff_t m_bStartDisabled = 0xE4D; // bool
                constexpr std::ptrdiff_t m_bFiredStartEndOutput = 0xE4E; // bool
                constexpr std::ptrdiff_t m_bForceNpcExclude = 0xE4F; // bool
                constexpr std::ptrdiff_t m_bCreateNonSolid = 0xE50; // bool
                constexpr std::ptrdiff_t m_bIsOverrideProp = 0xE51; // bool
                constexpr std::ptrdiff_t m_iInitialGlowState = 0xE54; // int32
                constexpr std::ptrdiff_t m_nGlowRange = 0xE58; // int32
                constexpr std::ptrdiff_t m_nGlowRangeMin = 0xE5C; // int32
                constexpr std::ptrdiff_t m_glowColor = 0xE60; // Color
                constexpr std::ptrdiff_t m_nGlowTeam = 0xE64; // int32
            }
            // Parent: CBaseModelEntity
            // Fields count: 0
            namespace CFuncIllusionary {
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
            namespace CCSPlayer_MovementServices {
                constexpr std::ptrdiff_t m_flMaxFallVelocity = 0x224; // float32
                constexpr std::ptrdiff_t m_vecLadderNormal = 0x228; // Vector
                constexpr std::ptrdiff_t m_nLadderSurfacePropIndex = 0x234; // int32
                constexpr std::ptrdiff_t m_flDuckAmount = 0x238; // float32
                constexpr std::ptrdiff_t m_flDuckSpeed = 0x23C; // float32
                constexpr std::ptrdiff_t m_bDuckOverride = 0x240; // bool
                constexpr std::ptrdiff_t m_bDesiresDuck = 0x241; // bool
                constexpr std::ptrdiff_t m_flDuckOffset = 0x244; // float32
                constexpr std::ptrdiff_t m_nDuckTimeMsecs = 0x248; // uint32
                constexpr std::ptrdiff_t m_nDuckJumpTimeMsecs = 0x24C; // uint32
                constexpr std::ptrdiff_t m_nJumpTimeMsecs = 0x250; // uint32
                constexpr std::ptrdiff_t m_flLastDuckTime = 0x254; // float32
                constexpr std::ptrdiff_t m_vecLastPositionAtFullCrouchSpeed = 0x260; // Vector2D
                constexpr std::ptrdiff_t m_duckUntilOnGround = 0x268; // bool
                constexpr std::ptrdiff_t m_bHasWalkMovedSinceLastJump = 0x269; // bool
                constexpr std::ptrdiff_t m_bInStuckTest = 0x26A; // bool
                constexpr std::ptrdiff_t m_flStuckCheckTime = 0x278; // float32[64][2]
                constexpr std::ptrdiff_t m_nTraceCount = 0x478; // int32
                constexpr std::ptrdiff_t m_StuckLast = 0x47C; // int32
                constexpr std::ptrdiff_t m_bSpeedCropped = 0x480; // bool
                constexpr std::ptrdiff_t m_nOldWaterLevel = 0x484; // int32
                constexpr std::ptrdiff_t m_flWaterEntryTime = 0x488; // float32
                constexpr std::ptrdiff_t m_vecForward = 0x48C; // Vector
                constexpr std::ptrdiff_t m_vecLeft = 0x498; // Vector
                constexpr std::ptrdiff_t m_vecUp = 0x4A4; // Vector
                constexpr std::ptrdiff_t m_nGameCodeHasMovedPlayerAfterCommand = 0x4B0; // int32
                constexpr std::ptrdiff_t m_bMadeFootstepNoise = 0x4B4; // bool
                constexpr std::ptrdiff_t m_iFootsteps = 0x4B8; // int32
                constexpr std::ptrdiff_t m_bOldJumpPressed = 0x4BC; // bool
                constexpr std::ptrdiff_t m_flJumpPressedTime = 0x4C0; // float32
                constexpr std::ptrdiff_t m_flJumpUntil = 0x4C4; // float32
                constexpr std::ptrdiff_t m_flJumpVel = 0x4C8; // float32
                constexpr std::ptrdiff_t m_fStashGrenadeParameterWhen = 0x4CC; // GameTime_t
                constexpr std::ptrdiff_t m_nButtonDownMaskPrev = 0x4D0; // uint64
                constexpr std::ptrdiff_t m_flOffsetTickCompleteTime = 0x4D8; // float32
                constexpr std::ptrdiff_t m_flOffsetTickStashedSpeed = 0x4DC; // float32
                constexpr std::ptrdiff_t m_flStamina = 0x4E0; // float32
                constexpr std::ptrdiff_t m_flHeightAtJumpStart = 0x4E4; // float32
                constexpr std::ptrdiff_t m_flMaxJumpHeightThisJump = 0x4E8; // float32
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
            // Parent: CCSWeaponBase
            // Fields count: 7
            //
            // Metadata:
            // NetworkVarNames: m_bPlayingUninterruptableAct (bool)
            // NetworkVarNames: m_nUninterruptableActivity (PlayerAnimEvent_t)
            namespace CFists {
                constexpr std::ptrdiff_t m_bPlayingUninterruptableAct = 0x1198; // bool
                constexpr std::ptrdiff_t m_nUninterruptableActivity = 0x119C; // PlayerAnimEvent_t
                constexpr std::ptrdiff_t m_bRestorePrevWep = 0x11A0; // bool
                constexpr std::ptrdiff_t m_hWeaponBeforePrevious = 0x11A4; // CHandle<CBasePlayerWeapon>
                constexpr std::ptrdiff_t m_hWeaponPrevious = 0x11A8; // CHandle<CBasePlayerWeapon>
                constexpr std::ptrdiff_t m_bDelayedHardPunchIncoming = 0x11AC; // bool
                constexpr std::ptrdiff_t m_bDestroyAfterTaunt = 0x11AD; // bool
            }
            // Parent: CBaseTrigger
            // Fields count: 1
            namespace CTriggerRemove {
                constexpr std::ptrdiff_t m_OnRemove = 0xBA0; // CEntityIOOutput
            }
            // Parent: CBaseFilter
            // Fields count: 1
            namespace CFilterName {
                constexpr std::ptrdiff_t m_iFilterName = 0x800; // CUtlSymbolLarge
            }
            // Parent: CPointEntity
            // Fields count: 2
            namespace CProjectedDecal {
                constexpr std::ptrdiff_t m_nTexture = 0x7A8; // int32
                constexpr std::ptrdiff_t m_flDistance = 0x7AC; // float32
            }
            // Parent: CBaseTrigger
            // Fields count: 5
            namespace CTriggerProximity {
                constexpr std::ptrdiff_t m_hMeasureTarget = 0xB9C; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_iszMeasureTarget = 0xBA0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_fRadius = 0xBA8; // float32
                constexpr std::ptrdiff_t m_nTouchers = 0xBAC; // int32
                constexpr std::ptrdiff_t m_NearestEntityDistance = 0xBB0; // CEntityOutputTemplate<float32>
            }
            // Parent: CFuncBrush
            // Fields count: 4
            //
            // Metadata:
            // NetworkVarNames: m_EffectName (string_t)
            namespace CFuncElectrifiedVolume {
                constexpr std::ptrdiff_t m_EffectName = 0xA18; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_EffectInterpenetrateName = 0xA20; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_EffectZapName = 0xA28; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszEffectSource = 0xA30; // CUtlSymbolLarge
            }
            // Parent: CPointEntity
            // Fields count: 1
            namespace CBaseDMStart {
                constexpr std::ptrdiff_t m_Master = 0x7A8; // CUtlSymbolLarge
            }
            // Parent: CGameRulesProxy
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_pGameRules (CCSGameRules*)
            namespace CCSGameRulesProxy {
                constexpr std::ptrdiff_t m_pGameRules = 0x7A8; // CCSGameRules*
            }
            // Parent: CBaseTrigger
            // Fields count: 0
            namespace CTriggerHostageReset {
            }
            // Parent: CServerOnlyPointEntity
            // Fields count: 4
            namespace CPointTeleport {
                constexpr std::ptrdiff_t m_vSaveOrigin = 0x7A8; // Vector
                constexpr std::ptrdiff_t m_vSaveAngles = 0x7B4; // QAngle
                constexpr std::ptrdiff_t m_bTeleportParentedEntities = 0x7C0; // bool
                constexpr std::ptrdiff_t m_bTeleportUseCurrentAngle = 0x7C1; // bool
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
            namespace CPlayer_CameraServices {
                constexpr std::ptrdiff_t m_vecCsViewPunchAngle = 0x40; // QAngle
                constexpr std::ptrdiff_t m_nCsViewPunchAngleTick = 0x4C; // GameTick_t
                constexpr std::ptrdiff_t m_flCsViewPunchAngleTickRatio = 0x50; // float32
                constexpr std::ptrdiff_t m_PlayerFog = 0x58; // fogplayerparams_t
                constexpr std::ptrdiff_t m_hColorCorrectionCtrl = 0x98; // CHandle<CColorCorrection>
                constexpr std::ptrdiff_t m_hViewEntity = 0x9C; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hTonemapController = 0xA0; // CHandle<CTonemapController2>
                constexpr std::ptrdiff_t m_audio = 0xA8; // audioparams_t
                constexpr std::ptrdiff_t m_PostProcessingVolumes = 0x120; // CNetworkUtlVectorBase<CHandle<CPostProcessingVolume>>
                constexpr std::ptrdiff_t m_flOldPlayerZ = 0x138; // float32
                constexpr std::ptrdiff_t m_flOldPlayerViewOffsetZ = 0x13C; // float32
                constexpr std::ptrdiff_t m_hTriggerSoundscapeList = 0x158; // CUtlVector<CHandle<CEnvSoundscapeTriggerable>>
            }
            // Parent: CCSWeaponBaseGun
            // Fields count: 0
            namespace CWeaponMP9 {
            }
            // Parent: CLogicalEntity
            // Fields count: 4
            namespace CPhysicsEntitySolver {
                constexpr std::ptrdiff_t m_hMovingEntity = 0x7B0; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hPhysicsBlocker = 0x7B4; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_separationDuration = 0x7B8; // float32
                constexpr std::ptrdiff_t m_cancelTime = 0x7BC; // GameTime_t
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
            namespace CPlayerPing {
                constexpr std::ptrdiff_t m_hPlayer = 0x7B0; // CHandle<CCSPlayerPawn>
                constexpr std::ptrdiff_t m_hPingedEntity = 0x7B4; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_iType = 0x7B8; // int32
                constexpr std::ptrdiff_t m_bUrgent = 0x7BC; // bool
                constexpr std::ptrdiff_t m_szPlaceName = 0x7BD; // char[18]
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
                constexpr std::ptrdiff_t m_modelState = 0x160; // CModelState
                constexpr std::ptrdiff_t m_bIsAnimationEnabled = 0x380; // bool
                constexpr std::ptrdiff_t m_bUseParentRenderBounds = 0x381; // bool
                constexpr std::ptrdiff_t m_bDisableSolidCollisionsForHierarchy = 0x382; // bool
                constexpr std::ptrdiff_t m_bDirtyMotionType = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bIsGeneratingLatchedParentSpaceState = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_materialGroup = 0x384; // CUtlStringToken
                constexpr std::ptrdiff_t m_nHitboxSet = 0x388; // uint8
            }
            // Parent: CBaseEntity
            // Fields count: 8
            namespace CEnvFireSensor {
                constexpr std::ptrdiff_t m_bEnabled = 0x7A8; // bool
                constexpr std::ptrdiff_t m_bHeatAtLevel = 0x7A9; // bool
                constexpr std::ptrdiff_t m_radius = 0x7AC; // float32
                constexpr std::ptrdiff_t m_targetLevel = 0x7B0; // float32
                constexpr std::ptrdiff_t m_targetTime = 0x7B4; // float32
                constexpr std::ptrdiff_t m_levelTime = 0x7B8; // float32
                constexpr std::ptrdiff_t m_OnHeatLevelStart = 0x7C0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnHeatLevelEnd = 0x7E8; // CEntityIOOutput
            }
            // Parent: CCSGO_WingmanIntroCharacterPosition
            // Fields count: 0
            namespace CCSGO_WingmanIntroTerroristPosition {
            }
            // Parent: None
            // Fields count: 2
            namespace CEnvWindShared__WindAveEvent_t {
                constexpr std::ptrdiff_t m_flStartWindSpeed = 0x0; // float32
                constexpr std::ptrdiff_t m_flAveWindSpeed = 0x4; // float32
            }
            // Parent: CCSWeaponBase
            // Fields count: 13
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
            // NetworkVarNames: m_bJustPulledPin (bool)
            // NetworkVarNames: m_nNextHoldTick (GameTick_t)
            // NetworkVarNames: m_flNextHoldFrac (float)
            // NetworkVarNames: m_hSwitchToWeaponAfterThrow (CHandle<CCSWeaponBase>)
            namespace CBaseCSGrenade {
                constexpr std::ptrdiff_t m_bRedraw = 0x1198; // bool
                constexpr std::ptrdiff_t m_bIsHeldByPlayer = 0x1199; // bool
                constexpr std::ptrdiff_t m_bPinPulled = 0x119A; // bool
                constexpr std::ptrdiff_t m_bJumpThrow = 0x119B; // bool
                constexpr std::ptrdiff_t m_bThrowAnimating = 0x119C; // bool
                constexpr std::ptrdiff_t m_fThrowTime = 0x11A0; // GameTime_t
                constexpr std::ptrdiff_t m_flThrowStrength = 0x11A4; // float32
                constexpr std::ptrdiff_t m_flThrowStrengthApproach = 0x11A8; // float32
                constexpr std::ptrdiff_t m_fDropTime = 0x11AC; // GameTime_t
                constexpr std::ptrdiff_t m_bJustPulledPin = 0x11B0; // bool
                constexpr std::ptrdiff_t m_nNextHoldTick = 0x11B4; // GameTick_t
                constexpr std::ptrdiff_t m_flNextHoldFrac = 0x11B8; // float32
                constexpr std::ptrdiff_t m_hSwitchToWeaponAfterThrow = 0x11BC; // CHandle<CCSWeaponBase>
            }
            // Parent: CBaseModelEntity
            // Fields count: 1
            namespace CItemGenericTriggerHelper {
                constexpr std::ptrdiff_t m_hParentItem = 0x9F8; // CHandle<CItemGeneric>
            }
            // Parent: CLogicalEntity
            // Fields count: 6
            namespace CLogicBranchList {
                constexpr std::ptrdiff_t m_nLogicBranchNames = 0x7A8; // CUtlSymbolLarge[16]
                constexpr std::ptrdiff_t m_LogicBranchList = 0x828; // CUtlVector<CHandle<CBaseEntity>>
                constexpr std::ptrdiff_t m_eLastState = 0x840; // CLogicBranchList::LogicBranchListenerLastState_t
                constexpr std::ptrdiff_t m_OnAllTrue = 0x848; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnAllFalse = 0x870; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnMixed = 0x898; // CEntityIOOutput
            }
            // Parent: None
            // Fields count: 14
            //
            // Metadata:
            // NetworkVarNames: m_hCtrl (CHandle<CFogController>)
            namespace fogplayerparams_t {
                constexpr std::ptrdiff_t m_hCtrl = 0x8; // CHandle<CFogController>
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
            // Parent: CItemDefuser
            // Fields count: 0
            namespace CItemDefuserAlias_item_defuser {
            }
            // Parent: CModelPointEntity
            // Fields count: 3
            namespace CRevertSaved {
                constexpr std::ptrdiff_t m_loadTime = 0x9F8; // float32
                constexpr std::ptrdiff_t m_Duration = 0x9FC; // float32
                constexpr std::ptrdiff_t m_HoldTime = 0xA00; // float32
            }
            // Parent: CLogicalEntity
            // Fields count: 8
            namespace CMultiLightProxy {
                constexpr std::ptrdiff_t m_iszLightNameFilter = 0x7A8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszLightClassFilter = 0x7B0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_flLightRadiusFilter = 0x7B8; // float32
                constexpr std::ptrdiff_t m_flBrightnessDelta = 0x7BC; // float32
                constexpr std::ptrdiff_t m_bPerformScreenFade = 0x7C0; // bool
                constexpr std::ptrdiff_t m_flTargetBrightnessMultiplier = 0x7C4; // float32
                constexpr std::ptrdiff_t m_flCurrentBrightnessMultiplier = 0x7C8; // float32
                constexpr std::ptrdiff_t m_vecLights = 0x7D0; // CUtlVector<CHandle<CLightEntity>>
            }
            // Parent: CItem
            // Fields count: 2
            namespace CItemDefuser {
                constexpr std::ptrdiff_t m_entitySpottedState = 0xCC8; // EntitySpottedState_t
                constexpr std::ptrdiff_t m_nSpotRules = 0xCE0; // int32
            }
            // Parent: CRuleEntity
            // Fields count: 0
            namespace CRuleBrushEntity {
            }
            // Parent: CInferno
            // Fields count: 0
            namespace CFireCrackerBlast {
            }
            // Parent: CBaseEntity
            // Fields count: 12
            namespace CSoundEventEntity {
                constexpr std::ptrdiff_t m_bStartOnSpawn = 0x7A8; // bool
                constexpr std::ptrdiff_t m_bToLocalPlayer = 0x7A9; // bool
                constexpr std::ptrdiff_t m_bStopOnNew = 0x7AA; // bool
                constexpr std::ptrdiff_t m_bSaveRestore = 0x7AB; // bool
                constexpr std::ptrdiff_t m_bSavedIsPlaying = 0x7AC; // bool
                constexpr std::ptrdiff_t m_flSavedElapsedTime = 0x7B0; // float32
                constexpr std::ptrdiff_t m_iszSourceEntityName = 0x7B8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszAttachmentName = 0x7C0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_onGUIDChanged = 0x7C8; // CEntityOutputTemplate<uint64>
                constexpr std::ptrdiff_t m_onSoundFinished = 0x7F0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_iszSoundName = 0x838; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hSource = 0x848; // CEntityHandle
            }
            // Parent: CPlayer_ViewModelServices
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_hViewModel (CHandle<CBaseViewModel>)
            namespace CCSPlayer_ViewModelServices {
                constexpr std::ptrdiff_t m_hViewModel = 0x40; // CHandle<CBaseViewModel>[3]
            }
            // Parent: CRagdollProp
            // Fields count: 6
            //
            // Metadata:
            // NetworkVarNames: m_boneIndexAttached (uint32)
            // NetworkVarNames: m_ragdollAttachedObjectIndex (uint32)
            // NetworkVarNames: m_attachmentPointBoneSpace (Vector)
            // NetworkVarNames: m_attachmentPointRagdollSpace (Vector)
            namespace CRagdollPropAttached {
                constexpr std::ptrdiff_t m_boneIndexAttached = 0xD98; // uint32
                constexpr std::ptrdiff_t m_ragdollAttachedObjectIndex = 0xD9C; // uint32
                constexpr std::ptrdiff_t m_attachmentPointBoneSpace = 0xDA0; // Vector
                constexpr std::ptrdiff_t m_attachmentPointRagdollSpace = 0xDAC; // Vector
                constexpr std::ptrdiff_t m_bShouldDetach = 0xDB8; // bool
                constexpr std::ptrdiff_t m_bShouldDeleteAttachedActivationRecord = 0xDC8; // bool
            }
            // Parent: CBasePropDoor
            // Fields count: 17
            namespace CPropDoorRotating {
                constexpr std::ptrdiff_t m_vecAxis = 0x10F0; // Vector
                constexpr std::ptrdiff_t m_flDistance = 0x10FC; // float32
                constexpr std::ptrdiff_t m_eSpawnPosition = 0x1100; // PropDoorRotatingSpawnPos_t
                constexpr std::ptrdiff_t m_eOpenDirection = 0x1104; // PropDoorRotatingOpenDirection_e
                constexpr std::ptrdiff_t m_eCurrentOpenDirection = 0x1108; // PropDoorRotatingOpenDirection_e
                constexpr std::ptrdiff_t m_flAjarAngle = 0x110C; // float32
                constexpr std::ptrdiff_t m_angRotationAjarDeprecated = 0x1110; // QAngle
                constexpr std::ptrdiff_t m_angRotationClosed = 0x111C; // QAngle
                constexpr std::ptrdiff_t m_angRotationOpenForward = 0x1128; // QAngle
                constexpr std::ptrdiff_t m_angRotationOpenBack = 0x1134; // QAngle
                constexpr std::ptrdiff_t m_angGoal = 0x1140; // QAngle
                constexpr std::ptrdiff_t m_vecForwardBoundsMin = 0x114C; // Vector
                constexpr std::ptrdiff_t m_vecForwardBoundsMax = 0x1158; // Vector
                constexpr std::ptrdiff_t m_vecBackBoundsMin = 0x1164; // Vector
                constexpr std::ptrdiff_t m_vecBackBoundsMax = 0x1170; // Vector
                constexpr std::ptrdiff_t m_bAjarDoorShouldntAlwaysOpen = 0x117C; // bool
                constexpr std::ptrdiff_t m_hEntityBlocker = 0x1180; // CHandle<CEntityBlocker>
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
            namespace CRopeKeyframe {
                constexpr std::ptrdiff_t m_RopeFlags = 0xA00; // uint16
                constexpr std::ptrdiff_t m_iNextLinkName = 0xA08; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_Slack = 0xA10; // int16
                constexpr std::ptrdiff_t m_Width = 0xA14; // float32
                constexpr std::ptrdiff_t m_TextureScale = 0xA18; // float32
                constexpr std::ptrdiff_t m_nSegments = 0xA1C; // uint8
                constexpr std::ptrdiff_t m_bConstrainBetweenEndpoints = 0xA1D; // bool
                constexpr std::ptrdiff_t m_strRopeMaterialModel = 0xA20; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iRopeMaterialModelIndex = 0xA28; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_Subdiv = 0xA30; // uint8
                constexpr std::ptrdiff_t m_nChangeCount = 0xA31; // uint8
                constexpr std::ptrdiff_t m_RopeLength = 0xA32; // int16
                constexpr std::ptrdiff_t m_fLockedPoints = 0xA34; // uint8
                constexpr std::ptrdiff_t m_bCreatedFromMapFile = 0xA35; // bool
                constexpr std::ptrdiff_t m_flScrollSpeed = 0xA38; // float32
                constexpr std::ptrdiff_t m_bStartPointValid = 0xA3C; // bool
                constexpr std::ptrdiff_t m_bEndPointValid = 0xA3D; // bool
                constexpr std::ptrdiff_t m_hStartPoint = 0xA40; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hEndPoint = 0xA44; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_iStartAttachment = 0xA48; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_iEndAttachment = 0xA49; // AttachmentHandle_t
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
            namespace CBarnLight {
                constexpr std::ptrdiff_t m_bEnabled = 0x9F8; // bool
                constexpr std::ptrdiff_t m_nColorMode = 0x9FC; // int32
                constexpr std::ptrdiff_t m_Color = 0xA00; // Color
                constexpr std::ptrdiff_t m_flColorTemperature = 0xA04; // float32
                constexpr std::ptrdiff_t m_flBrightness = 0xA08; // float32
                constexpr std::ptrdiff_t m_flBrightnessScale = 0xA0C; // float32
                constexpr std::ptrdiff_t m_nDirectLight = 0xA10; // int32
                constexpr std::ptrdiff_t m_nBakedShadowIndex = 0xA14; // int32
                constexpr std::ptrdiff_t m_nLuminaireShape = 0xA18; // int32
                constexpr std::ptrdiff_t m_flLuminaireSize = 0xA1C; // float32
                constexpr std::ptrdiff_t m_flLuminaireAnisotropy = 0xA20; // float32
                constexpr std::ptrdiff_t m_LightStyleString = 0xA28; // CUtlString
                constexpr std::ptrdiff_t m_flLightStyleStartTime = 0xA30; // GameTime_t
                constexpr std::ptrdiff_t m_QueuedLightStyleStrings = 0xA38; // CNetworkUtlVectorBase<CUtlString>
                constexpr std::ptrdiff_t m_LightStyleEvents = 0xA50; // CNetworkUtlVectorBase<CUtlString>
                constexpr std::ptrdiff_t m_LightStyleTargets = 0xA68; // CNetworkUtlVectorBase<CHandle<CBaseModelEntity>>
                constexpr std::ptrdiff_t m_StyleEvent = 0xA80; // CEntityIOOutput[4]
                constexpr std::ptrdiff_t m_hLightCookie = 0xB40; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_flShape = 0xB48; // float32
                constexpr std::ptrdiff_t m_flSoftX = 0xB4C; // float32
                constexpr std::ptrdiff_t m_flSoftY = 0xB50; // float32
                constexpr std::ptrdiff_t m_flSkirt = 0xB54; // float32
                constexpr std::ptrdiff_t m_flSkirtNear = 0xB58; // float32
                constexpr std::ptrdiff_t m_vSizeParams = 0xB5C; // Vector
                constexpr std::ptrdiff_t m_flRange = 0xB68; // float32
                constexpr std::ptrdiff_t m_vShear = 0xB6C; // Vector
                constexpr std::ptrdiff_t m_nBakeSpecularToCubemaps = 0xB78; // int32
                constexpr std::ptrdiff_t m_vBakeSpecularToCubemapsSize = 0xB7C; // Vector
                constexpr std::ptrdiff_t m_nCastShadows = 0xB88; // int32
                constexpr std::ptrdiff_t m_nShadowMapSize = 0xB8C; // int32
                constexpr std::ptrdiff_t m_nShadowPriority = 0xB90; // int32
                constexpr std::ptrdiff_t m_bContactShadow = 0xB94; // bool
                constexpr std::ptrdiff_t m_nBounceLight = 0xB98; // int32
                constexpr std::ptrdiff_t m_flBounceScale = 0xB9C; // float32
                constexpr std::ptrdiff_t m_flMinRoughness = 0xBA0; // float32
                constexpr std::ptrdiff_t m_vAlternateColor = 0xBA4; // Vector
                constexpr std::ptrdiff_t m_fAlternateColorBrightness = 0xBB0; // float32
                constexpr std::ptrdiff_t m_nFog = 0xBB4; // int32
                constexpr std::ptrdiff_t m_flFogStrength = 0xBB8; // float32
                constexpr std::ptrdiff_t m_nFogShadows = 0xBBC; // int32
                constexpr std::ptrdiff_t m_flFogScale = 0xBC0; // float32
                constexpr std::ptrdiff_t m_flFadeSizeStart = 0xBC4; // float32
                constexpr std::ptrdiff_t m_flFadeSizeEnd = 0xBC8; // float32
                constexpr std::ptrdiff_t m_flShadowFadeSizeStart = 0xBCC; // float32
                constexpr std::ptrdiff_t m_flShadowFadeSizeEnd = 0xBD0; // float32
                constexpr std::ptrdiff_t m_bPrecomputedFieldsValid = 0xBD4; // bool
                constexpr std::ptrdiff_t m_vPrecomputedBoundsMins = 0xBD8; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedBoundsMaxs = 0xBE4; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin = 0xBF0; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles = 0xBFC; // QAngle
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent = 0xC08; // Vector
                constexpr std::ptrdiff_t m_bPvsModifyEntity = 0xC14; // bool
            }
            // Parent: SpawnPoint
            // Fields count: 0
            namespace CInfoDeathmatchSpawn {
            }
            // Parent: CPointEntity
            // Fields count: 2
            namespace CEnvViewPunch {
                constexpr std::ptrdiff_t m_flRadius = 0x7A8; // float32
                constexpr std::ptrdiff_t m_angViewPunch = 0x7AC; // QAngle
            }
            // Parent: CBaseEntity
            // Fields count: 1
            namespace CPhysicsWire {
                constexpr std::ptrdiff_t m_nDensity = 0x7A8; // int32
            }
            // Parent: CPropDoorRotating
            // Fields count: 4
            namespace CPropDoorRotatingBreakable {
                constexpr std::ptrdiff_t m_bBreakable = 0x1184; // bool
                constexpr std::ptrdiff_t m_isAbleToCloseAreaPortals = 0x1185; // bool
                constexpr std::ptrdiff_t m_currentDamageState = 0x1188; // int32
                constexpr std::ptrdiff_t m_damageStates = 0x1190; // CUtlVector<CUtlSymbolLarge>
            }
            // Parent: CBaseFire
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_nFlameModelIndex (int32)
            // NetworkVarNames: m_nFlameFromAboveModelIndex (int32)
            namespace CFireSmoke {
                constexpr std::ptrdiff_t m_nFlameModelIndex = 0x7B8; // int32
                constexpr std::ptrdiff_t m_nFlameFromAboveModelIndex = 0x7BC; // int32
            }
            // Parent: CMolotovGrenade
            // Fields count: 0
            namespace CIncendiaryGrenade {
            }
            // Parent: CPathCorner
            // Fields count: 0
            namespace CPathCornerCrash {
            }
            // Parent: CBaseEntity
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_Handle (CHandle<CBaseEntity>)
            // NetworkVarNames: m_bSendHandle (bool)
            namespace CHandleTest {
                constexpr std::ptrdiff_t m_Handle = 0x7A8; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_bSendHandle = 0x7AC; // bool
            }
            // Parent: CBaseEntity
            // Fields count: 8
            namespace CSoundOpvarSetEntity {
                constexpr std::ptrdiff_t m_iszStackName = 0x7B0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszOperatorName = 0x7B8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszOpvarName = 0x7C0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_nOpvarType = 0x7C8; // int32
                constexpr std::ptrdiff_t m_nOpvarIndex = 0x7CC; // int32
                constexpr std::ptrdiff_t m_flOpvarValue = 0x7D0; // float32
                constexpr std::ptrdiff_t m_OpvarValueString = 0x7D8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bSetOnSpawn = 0x7E0; // bool
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
            // Parent: CPointEntity
            // Fields count: 1
            namespace CNavSpaceInfo {
                constexpr std::ptrdiff_t m_bCreateFlightSpace = 0x7A8; // bool
            }
            // Parent: CLogicalEntity
            // Fields count: 3
            namespace CLogicAchievement {
                constexpr std::ptrdiff_t m_bDisabled = 0x7A8; // bool
                constexpr std::ptrdiff_t m_iszAchievementEventID = 0x7B0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_OnFired = 0x7B8; // CEntityIOOutput
            }
            // Parent: CBtNode
            // Fields count: 1
            namespace CBtActionParachutePositioning {
                constexpr std::ptrdiff_t m_ActionTimer = 0x58; // CountdownTimer
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
            namespace CCSPlayerBase_CameraServices {
                constexpr std::ptrdiff_t m_iFOV = 0x170; // uint32
                constexpr std::ptrdiff_t m_iFOVStart = 0x174; // uint32
                constexpr std::ptrdiff_t m_flFOVTime = 0x178; // GameTime_t
                constexpr std::ptrdiff_t m_flFOVRate = 0x17C; // float32
                constexpr std::ptrdiff_t m_hZoomOwner = 0x180; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hTriggerFogList = 0x188; // CUtlVector<CHandle<CBaseEntity>>
                constexpr std::ptrdiff_t m_hLastFogTrigger = 0x1A0; // CHandle<CBaseEntity>
            }
            // Parent: CEntityComponent
            // Fields count: 0
            namespace CTouchExpansionComponent {
            }
            // Parent: CFuncPlatRot
            // Fields count: 9
            namespace CFuncTrackChange {
                constexpr std::ptrdiff_t m_trackTop = 0xAC0; // CPathTrack*
                constexpr std::ptrdiff_t m_trackBottom = 0xAC8; // CPathTrack*
                constexpr std::ptrdiff_t m_train = 0xAD0; // CFuncTrackTrain*
                constexpr std::ptrdiff_t m_trackTopName = 0xAD8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_trackBottomName = 0xAE0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_trainName = 0xAE8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_code = 0xAF0; // TRAIN_CODE
                constexpr std::ptrdiff_t m_targetState = 0xAF4; // int32
                constexpr std::ptrdiff_t m_use = 0xAF8; // int32
            }
            // Parent: CRuleBrushEntity
            // Fields count: 4
            namespace CGamePlayerZone {
                constexpr std::ptrdiff_t m_OnPlayerInZone = 0xA00; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnPlayerOutZone = 0xA28; // CEntityIOOutput
                constexpr std::ptrdiff_t m_PlayersInCount = 0xA50; // CEntityOutputTemplate<int32>
                constexpr std::ptrdiff_t m_PlayersOutCount = 0xA78; // CEntityOutputTemplate<int32>
            }
            // Parent: CRuleEntity
            // Fields count: 1
            namespace CRulePointEntity {
                constexpr std::ptrdiff_t m_Score = 0xA00; // int32
            }
            // Parent: CPointEntity
            // Fields count: 5
            namespace CMessageEntity {
                constexpr std::ptrdiff_t m_radius = 0x7A8; // int32
                constexpr std::ptrdiff_t m_messageText = 0x7B0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_drawText = 0x7B8; // bool
                constexpr std::ptrdiff_t m_bDeveloperOnly = 0x7B9; // bool
                constexpr std::ptrdiff_t m_bEnabled = 0x7BA; // bool
            }
            // Parent: CBaseCSGrenade
            // Fields count: 0
            namespace CSmokeGrenade {
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
            namespace CBaseViewModel {
                constexpr std::ptrdiff_t m_vecLastFacing = 0xBF8; // Vector
                constexpr std::ptrdiff_t m_nViewModelIndex = 0xC04; // uint32
                constexpr std::ptrdiff_t m_nAnimationParity = 0xC08; // uint32
                constexpr std::ptrdiff_t m_flAnimationStartTime = 0xC0C; // float32
                constexpr std::ptrdiff_t m_hWeapon = 0xC10; // CHandle<CBasePlayerWeapon>
                constexpr std::ptrdiff_t m_sVMName = 0xC18; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_sAnimationPrefix = 0xC20; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hOldLayerSequence = 0xC28; // HSequence
                constexpr std::ptrdiff_t m_oldLayer = 0xC2C; // int32
                constexpr std::ptrdiff_t m_oldLayerStartTime = 0xC30; // float32
                constexpr std::ptrdiff_t m_hControlPanel = 0xC34; // CHandle<CBaseEntity>
            }
            // Parent: CPlayerPawnComponent
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_hPlayerPing (CHandle<CBaseEntity>)
            namespace CCSPlayer_PingServices {
                constexpr std::ptrdiff_t m_flPlayerPingTokens = 0x40; // GameTime_t[5]
                constexpr std::ptrdiff_t m_hPlayerPing = 0x54; // CHandle<CBaseEntity>
            }
            // Parent: CPlayerPawnComponent
            // Fields count: 0
            namespace CPlayer_FlashlightServices {
            }
            // Parent: CCSWeaponBase
            // Fields count: 1
            namespace CKnife {
                constexpr std::ptrdiff_t m_bFirstAttack = 0x1198; // bool
            }
            // Parent: CBaseModelEntity
            // Fields count: 38
            namespace CFuncTrackTrain {
                constexpr std::ptrdiff_t m_ppath = 0x9F8; // CHandle<CPathTrack>
                constexpr std::ptrdiff_t m_length = 0x9FC; // float32
                constexpr std::ptrdiff_t m_vPosPrev = 0xA00; // Vector
                constexpr std::ptrdiff_t m_angPrev = 0xA0C; // QAngle
                constexpr std::ptrdiff_t m_controlMins = 0xA18; // Vector
                constexpr std::ptrdiff_t m_controlMaxs = 0xA24; // Vector
                constexpr std::ptrdiff_t m_lastBlockPos = 0xA30; // Vector
                constexpr std::ptrdiff_t m_lastBlockTick = 0xA3C; // int32
                constexpr std::ptrdiff_t m_flVolume = 0xA40; // float32
                constexpr std::ptrdiff_t m_flBank = 0xA44; // float32
                constexpr std::ptrdiff_t m_oldSpeed = 0xA48; // float32
                constexpr std::ptrdiff_t m_flBlockDamage = 0xA4C; // float32
                constexpr std::ptrdiff_t m_height = 0xA50; // float32
                constexpr std::ptrdiff_t m_maxSpeed = 0xA54; // float32
                constexpr std::ptrdiff_t m_dir = 0xA58; // float32
                constexpr std::ptrdiff_t m_iszSoundMove = 0xA60; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszSoundMovePing = 0xA68; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszSoundStart = 0xA70; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszSoundStop = 0xA78; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_strPathTarget = 0xA80; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_flMoveSoundMinDuration = 0xA88; // float32
                constexpr std::ptrdiff_t m_flMoveSoundMaxDuration = 0xA8C; // float32
                constexpr std::ptrdiff_t m_flNextMoveSoundTime = 0xA90; // GameTime_t
                constexpr std::ptrdiff_t m_flMoveSoundMinPitch = 0xA94; // float32
                constexpr std::ptrdiff_t m_flMoveSoundMaxPitch = 0xA98; // float32
                constexpr std::ptrdiff_t m_eOrientationType = 0xA9C; // TrainOrientationType_t
                constexpr std::ptrdiff_t m_eVelocityType = 0xAA0; // TrainVelocityType_t
                constexpr std::ptrdiff_t m_OnStart = 0xAB0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnNext = 0xAD8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnArrivedAtDestinationNode = 0xB00; // CEntityIOOutput
                constexpr std::ptrdiff_t m_bManualSpeedChanges = 0xB28; // bool
                constexpr std::ptrdiff_t m_flDesiredSpeed = 0xB2C; // float32
                constexpr std::ptrdiff_t m_flSpeedChangeTime = 0xB30; // GameTime_t
                constexpr std::ptrdiff_t m_flAccelSpeed = 0xB34; // float32
                constexpr std::ptrdiff_t m_flDecelSpeed = 0xB38; // float32
                constexpr std::ptrdiff_t m_bAccelToSpeed = 0xB3C; // bool
                constexpr std::ptrdiff_t m_flTimeScale = 0xB40; // float32
                constexpr std::ptrdiff_t m_flNextMPSoundTime = 0xB44; // GameTime_t
            }
            // Parent: CServerOnlyModelEntity
            // Fields count: 5
            namespace CFogVolume {
                constexpr std::ptrdiff_t m_fogName = 0x9F8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_postProcessName = 0xA00; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_colorCorrectionName = 0xA08; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bDisabled = 0xA18; // bool
                constexpr std::ptrdiff_t m_bInFogVolumesList = 0xA19; // bool
            }
            // Parent: SpawnPoint
            // Fields count: 0
            namespace CInfoPlayerCounterterrorist {
            }
            // Parent: CBaseModelEntity
            // Fields count: 19
            namespace CFire {
                constexpr std::ptrdiff_t m_hEffect = 0x9F8; // CHandle<CBaseFire>
                constexpr std::ptrdiff_t m_hOwner = 0x9FC; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_nFireType = 0xA00; // int32
                constexpr std::ptrdiff_t m_flFuel = 0xA04; // float32
                constexpr std::ptrdiff_t m_flDamageTime = 0xA08; // GameTime_t
                constexpr std::ptrdiff_t m_lastDamage = 0xA0C; // GameTime_t
                constexpr std::ptrdiff_t m_flFireSize = 0xA10; // float32
                constexpr std::ptrdiff_t m_flLastNavUpdateTime = 0xA14; // GameTime_t
                constexpr std::ptrdiff_t m_flHeatLevel = 0xA18; // float32
                constexpr std::ptrdiff_t m_flHeatAbsorb = 0xA1C; // float32
                constexpr std::ptrdiff_t m_flDamageScale = 0xA20; // float32
                constexpr std::ptrdiff_t m_flMaxHeat = 0xA24; // float32
                constexpr std::ptrdiff_t m_flLastHeatLevel = 0xA28; // float32
                constexpr std::ptrdiff_t m_flAttackTime = 0xA2C; // float32
                constexpr std::ptrdiff_t m_bEnabled = 0xA30; // bool
                constexpr std::ptrdiff_t m_bStartDisabled = 0xA31; // bool
                constexpr std::ptrdiff_t m_bDidActivate = 0xA32; // bool
                constexpr std::ptrdiff_t m_OnIgnited = 0xA38; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnExtinguished = 0xA60; // CEntityIOOutput
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
            namespace CBaseAnimGraphController {
                constexpr std::ptrdiff_t m_animGraphNetworkedVars = 0x18; // CAnimGraphNetworkedVariables
                constexpr std::ptrdiff_t m_bSequenceFinished = 0x220; // bool
                constexpr std::ptrdiff_t m_flSoundSyncTime = 0x224; // float32
                constexpr std::ptrdiff_t m_hSequence = 0x228; // HSequence
                constexpr std::ptrdiff_t m_flSeqStartTime = 0x22C; // GameTime_t
                constexpr std::ptrdiff_t m_flSeqFixedCycle = 0x230; // float32
                constexpr std::ptrdiff_t m_nAnimLoopMode = 0x234; // AnimLoopMode_t
                constexpr std::ptrdiff_t m_flPlaybackRate = 0x238; // CNetworkedQuantizedFloat
                constexpr std::ptrdiff_t m_nNotifyState = 0x244; // SequenceFinishNotifyState_t
                constexpr std::ptrdiff_t m_bNetworkedAnimationInputsChanged = 0x246; // bool
                constexpr std::ptrdiff_t m_bNetworkedSequenceChanged = 0x247; // bool
                constexpr std::ptrdiff_t m_bLastUpdateSkipped = 0x248; // bool
                constexpr std::ptrdiff_t m_flPrevAnimUpdateTime = 0x24C; // GameTime_t
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            namespace CCSObserverPawnAPI {
            }
            // Parent: CBaseEntity
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_flFadeStartDist (float32)
            // NetworkVarNames: m_flFadeEndDist (float32)
            namespace CEnvDetailController {
                constexpr std::ptrdiff_t m_flFadeStartDist = 0x7A8; // float32
                constexpr std::ptrdiff_t m_flFadeEndDist = 0x7AC; // float32
            }
            // Parent: CTriggerOnce
            // Fields count: 15
            //
            // Metadata:
            // NetworkVarNames: m_bTestOcclusion (bool)
            namespace CTriggerLook {
                constexpr std::ptrdiff_t m_hLookTarget = 0xBC8; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_flFieldOfView = 0xBCC; // float32
                constexpr std::ptrdiff_t m_flLookTime = 0xBD0; // float32
                constexpr std::ptrdiff_t m_flLookTimeTotal = 0xBD4; // float32
                constexpr std::ptrdiff_t m_flLookTimeLast = 0xBD8; // GameTime_t
                constexpr std::ptrdiff_t m_flTimeoutDuration = 0xBDC; // float32
                constexpr std::ptrdiff_t m_bTimeoutFired = 0xBE0; // bool
                constexpr std::ptrdiff_t m_bIsLooking = 0xBE1; // bool
                constexpr std::ptrdiff_t m_b2DFOV = 0xBE2; // bool
                constexpr std::ptrdiff_t m_bUseVelocity = 0xBE3; // bool
                constexpr std::ptrdiff_t m_hActivator = 0xBE4; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_bTestOcclusion = 0xBE8; // bool
                constexpr std::ptrdiff_t m_OnTimeout = 0xBF0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnStartLook = 0xC18; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnEndLook = 0xC40; // CEntityIOOutput
            }
            // Parent: CPointEntity
            // Fields count: 0
            namespace CInfoTeleportDestination {
            }
            // Parent: CLogicalEntity
            // Fields count: 11
            namespace CMathRemap {
                constexpr std::ptrdiff_t m_flInMin = 0x7A8; // float32
                constexpr std::ptrdiff_t m_flInMax = 0x7AC; // float32
                constexpr std::ptrdiff_t m_flOut1 = 0x7B0; // float32
                constexpr std::ptrdiff_t m_flOut2 = 0x7B4; // float32
                constexpr std::ptrdiff_t m_flOldInValue = 0x7B8; // float32
                constexpr std::ptrdiff_t m_bEnabled = 0x7BC; // bool
                constexpr std::ptrdiff_t m_OutValue = 0x7C0; // CEntityOutputTemplate<float32>
                constexpr std::ptrdiff_t m_OnRoseAboveMin = 0x7E8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnRoseAboveMax = 0x810; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnFellBelowMin = 0x838; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnFellBelowMax = 0x860; // CEntityIOOutput
            }
            // Parent: CPointEntity
            // Fields count: 3
            namespace CInstructorEventEntity {
                constexpr std::ptrdiff_t m_iszName = 0x7A8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszHintTargetEntity = 0x7B0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hTargetPlayer = 0x7B8; // CHandle<CBasePlayerPawn>
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
            namespace CGradientFog {
                constexpr std::ptrdiff_t m_hGradientFogTexture = 0x7A8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_flFogStartDistance = 0x7B0; // float32
                constexpr std::ptrdiff_t m_flFogEndDistance = 0x7B4; // float32
                constexpr std::ptrdiff_t m_bHeightFogEnabled = 0x7B8; // bool
                constexpr std::ptrdiff_t m_flFogStartHeight = 0x7BC; // float32
                constexpr std::ptrdiff_t m_flFogEndHeight = 0x7C0; // float32
                constexpr std::ptrdiff_t m_flFarZ = 0x7C4; // float32
                constexpr std::ptrdiff_t m_flFogMaxOpacity = 0x7C8; // float32
                constexpr std::ptrdiff_t m_flFogFalloffExponent = 0x7CC; // float32
                constexpr std::ptrdiff_t m_flFogVerticalExponent = 0x7D0; // float32
                constexpr std::ptrdiff_t m_fogColor = 0x7D4; // Color
                constexpr std::ptrdiff_t m_flFogStrength = 0x7D8; // float32
                constexpr std::ptrdiff_t m_flFadeTime = 0x7DC; // float32
                constexpr std::ptrdiff_t m_bStartDisabled = 0x7E0; // bool
                constexpr std::ptrdiff_t m_bIsEnabled = 0x7E1; // bool
                constexpr std::ptrdiff_t m_bGradientFogNeedsTextures = 0x7E2; // bool
            }
            // Parent: CPointEntity
            // Fields count: 0
            namespace CPointClientCommand {
            }
            // Parent: CBaseModelEntity
            // Fields count: 1
            namespace CFuncVPhysicsClip {
                constexpr std::ptrdiff_t m_bDisabled = 0x9F8; // bool
            }
            // Parent: CPlayerPawnComponent
            // Fields count: 5
            namespace CCSPlayer_RadioServices {
                constexpr std::ptrdiff_t m_flGotHostageTalkTimer = 0x40; // GameTime_t
                constexpr std::ptrdiff_t m_flDefusingTalkTimer = 0x44; // GameTime_t
                constexpr std::ptrdiff_t m_flC4PlantTalkTimer = 0x48; // GameTime_t
                constexpr std::ptrdiff_t m_flRadioTokenSlots = 0x4C; // GameTime_t[3]
                constexpr std::ptrdiff_t m_bIgnoreRadio = 0x58; // bool
            }
            // Parent: CSceneEntity
            // Fields count: 7
            namespace CInstancedSceneEntity {
                constexpr std::ptrdiff_t m_hOwner = 0xD00; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_bHadOwner = 0xD04; // bool
                constexpr std::ptrdiff_t m_flPostSpeakDelay = 0xD08; // float32
                constexpr std::ptrdiff_t m_flPreDelay = 0xD0C; // float32
                constexpr std::ptrdiff_t m_bIsBackground = 0xD10; // bool
                constexpr std::ptrdiff_t m_bRemoveOnCompletion = 0xD11; // bool
                constexpr std::ptrdiff_t m_hTarget = 0xD14; // CHandle<CBaseEntity>
            }
            // Parent: CPointEntity
            // Fields count: 1
            namespace CEnvHudHint {
                constexpr std::ptrdiff_t m_iszMessage = 0x7A8; // CUtlSymbolLarge
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
            namespace CParticleSystem {
                constexpr std::ptrdiff_t m_szSnapshotFileName = 0x9F8; // char[512]
                constexpr std::ptrdiff_t m_bActive = 0xBF8; // bool
                constexpr std::ptrdiff_t m_bFrozen = 0xBF9; // bool
                constexpr std::ptrdiff_t m_flFreezeTransitionDuration = 0xBFC; // float32
                constexpr std::ptrdiff_t m_nStopType = 0xC00; // int32
                constexpr std::ptrdiff_t m_bAnimateDuringGameplayPause = 0xC04; // bool
                constexpr std::ptrdiff_t m_iEffectIndex = 0xC08; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                constexpr std::ptrdiff_t m_flStartTime = 0xC10; // GameTime_t
                constexpr std::ptrdiff_t m_flPreSimTime = 0xC14; // float32
                constexpr std::ptrdiff_t m_vServerControlPoints = 0xC18; // Vector[4]
                constexpr std::ptrdiff_t m_iServerControlPointAssignments = 0xC48; // uint8[4]
                constexpr std::ptrdiff_t m_hControlPointEnts = 0xC4C; // CHandle<CBaseEntity>[64]
                constexpr std::ptrdiff_t m_bNoSave = 0xD4C; // bool
                constexpr std::ptrdiff_t m_bNoFreeze = 0xD4D; // bool
                constexpr std::ptrdiff_t m_bNoRamp = 0xD4E; // bool
                constexpr std::ptrdiff_t m_bStartActive = 0xD4F; // bool
                constexpr std::ptrdiff_t m_iszEffectName = 0xD50; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszControlPointNames = 0xD58; // CUtlSymbolLarge[64]
                constexpr std::ptrdiff_t m_nDataCP = 0xF58; // int32
                constexpr std::ptrdiff_t m_vecDataCPValue = 0xF5C; // Vector
                constexpr std::ptrdiff_t m_nTintCP = 0xF68; // int32
                constexpr std::ptrdiff_t m_clrTint = 0xF6C; // Color
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
                constexpr std::ptrdiff_t m_aShootSounds = 0x220; // CUtlMap<WeaponSound_t,CSoundEventName>
                constexpr std::ptrdiff_t m_iSlot = 0x240; // int32
                constexpr std::ptrdiff_t m_iPosition = 0x244; // int32
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
            namespace CPhysicsProp {
                constexpr std::ptrdiff_t m_MotionEnabled = 0xD70; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnAwakened = 0xD98; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnAwake = 0xDC0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnAsleep = 0xDE8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnPlayerUse = 0xE10; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnPlayerPickup = 0xE38; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnOutOfWorld = 0xE60; // CEntityIOOutput
                constexpr std::ptrdiff_t m_massScale = 0xE88; // float32
                constexpr std::ptrdiff_t m_inertiaScale = 0xE8C; // float32
                constexpr std::ptrdiff_t m_buoyancyScale = 0xE90; // float32
                constexpr std::ptrdiff_t m_damageType = 0xE94; // int32
                constexpr std::ptrdiff_t m_damageToEnableMotion = 0xE98; // int32
                constexpr std::ptrdiff_t m_flForceToEnableMotion = 0xE9C; // float32
                constexpr std::ptrdiff_t m_bThrownByPlayer = 0xEA0; // bool
                constexpr std::ptrdiff_t m_bDroppedByPlayer = 0xEA1; // bool
                constexpr std::ptrdiff_t m_bTouchedByPlayer = 0xEA2; // bool
                constexpr std::ptrdiff_t m_bFirstCollisionAfterLaunch = 0xEA3; // bool
                constexpr std::ptrdiff_t m_iExploitableByPlayer = 0xEA4; // int32
                constexpr std::ptrdiff_t m_bHasBeenAwakened = 0xEA8; // bool
                constexpr std::ptrdiff_t m_bIsOverrideProp = 0xEA9; // bool
                constexpr std::ptrdiff_t m_fNextCheckDisableMotionContactsTime = 0xEAC; // GameTime_t
                constexpr std::ptrdiff_t m_iInitialGlowState = 0xEB0; // int32
                constexpr std::ptrdiff_t m_nGlowRange = 0xEB4; // int32
                constexpr std::ptrdiff_t m_nGlowRangeMin = 0xEB8; // int32
                constexpr std::ptrdiff_t m_glowColor = 0xEBC; // Color
                constexpr std::ptrdiff_t m_bForceNavIgnore = 0xEC0; // bool
                constexpr std::ptrdiff_t m_bNoNavmeshBlocker = 0xEC1; // bool
                constexpr std::ptrdiff_t m_bForceNpcExclude = 0xEC2; // bool
                constexpr std::ptrdiff_t m_bShouldAutoConvertBackFromDebris = 0xEC3; // bool
                constexpr std::ptrdiff_t m_bMuteImpactEffects = 0xEC4; // bool
                constexpr std::ptrdiff_t m_bAcceptDamageFromHeldObjects = 0xECC; // bool
                constexpr std::ptrdiff_t m_bEnableUseOutput = 0xECD; // bool
                constexpr std::ptrdiff_t m_bAwake = 0xECE; // bool
                constexpr std::ptrdiff_t m_nCollisionGroupOverride = 0xED0; // int32
            }
            // Parent: CFuncWall
            // Fields count: 0
            namespace CFuncWallToggle {
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
            // Parent: CCSGO_TeamIntroCharacterPosition
            // Fields count: 0
            namespace CCSGO_WingmanIntroCharacterPosition {
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
            namespace CSMatchStats_t {
                constexpr std::ptrdiff_t m_iEnemy5Ks = 0x64; // int32
                constexpr std::ptrdiff_t m_iEnemy4Ks = 0x68; // int32
                constexpr std::ptrdiff_t m_iEnemy3Ks = 0x6C; // int32
                constexpr std::ptrdiff_t m_iEnemyKnifeKills = 0x70; // int32
                constexpr std::ptrdiff_t m_iEnemyTaserKills = 0x74; // int32
                constexpr std::ptrdiff_t m_iEnemy2Ks = 0x78; // int32
                constexpr std::ptrdiff_t m_iUtility_Count = 0x7C; // int32
                constexpr std::ptrdiff_t m_iUtility_Successes = 0x80; // int32
                constexpr std::ptrdiff_t m_iUtility_Enemies = 0x84; // int32
                constexpr std::ptrdiff_t m_iFlash_Count = 0x88; // int32
                constexpr std::ptrdiff_t m_iFlash_Successes = 0x8C; // int32
                constexpr std::ptrdiff_t m_nHealthPointsRemovedTotal = 0x90; // int32
                constexpr std::ptrdiff_t m_nHealthPointsDealtTotal = 0x94; // int32
                constexpr std::ptrdiff_t m_nShotsFiredTotal = 0x98; // int32
                constexpr std::ptrdiff_t m_nShotsOnTargetTotal = 0x9C; // int32
                constexpr std::ptrdiff_t m_i1v1Count = 0xA0; // int32
                constexpr std::ptrdiff_t m_i1v1Wins = 0xA4; // int32
                constexpr std::ptrdiff_t m_i1v2Count = 0xA8; // int32
                constexpr std::ptrdiff_t m_i1v2Wins = 0xAC; // int32
                constexpr std::ptrdiff_t m_iEntryCount = 0xB0; // int32
                constexpr std::ptrdiff_t m_iEntryWins = 0xB4; // int32
            }
            // Parent: CFuncLadder
            // Fields count: 0
            namespace CFuncLadderAlias_func_useableladder {
            }
            // Parent: CBaseTrigger
            // Fields count: 15
            namespace CTriggerSndSosOpvar {
                constexpr std::ptrdiff_t m_hTouchingPlayers = 0xBA0; // CUtlVector<CHandle<CBaseEntity>>
                constexpr std::ptrdiff_t m_flPosition = 0xBB8; // Vector
                constexpr std::ptrdiff_t m_flCenterSize = 0xBC4; // float32
                constexpr std::ptrdiff_t m_flMinVal = 0xBC8; // float32
                constexpr std::ptrdiff_t m_flMaxVal = 0xBCC; // float32
                constexpr std::ptrdiff_t m_flWait = 0xBD0; // float32
                constexpr std::ptrdiff_t m_opvarName = 0xBD8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_stackName = 0xBE0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_operatorName = 0xBE8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bVolIs2D = 0xBF0; // bool
                constexpr std::ptrdiff_t m_opvarNameChar = 0xBF1; // char[256]
                constexpr std::ptrdiff_t m_stackNameChar = 0xCF1; // char[256]
                constexpr std::ptrdiff_t m_operatorNameChar = 0xDF1; // char[256]
                constexpr std::ptrdiff_t m_VecNormPos = 0xEF4; // Vector
                constexpr std::ptrdiff_t m_flNormCenterSize = 0xF00; // float32
            }
            // Parent: CDynamicProp
            // Fields count: 0
            namespace CDynamicPropAlias_dynamic_prop {
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // NetworkVarNames: m_Handle (ModelConfigHandle_t)
            // NetworkVarNames: m_Name (string_t)
            // NetworkVarNames: m_AssociatedEntities (CHandle<CBaseModelEntity>)
            // NetworkVarNames: m_AssociatedEntityNames (string_t)
            namespace ActiveModelConfig_t {
                constexpr std::ptrdiff_t m_Handle = 0x28; // ModelConfigHandle_t
                constexpr std::ptrdiff_t m_Name = 0x30; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_AssociatedEntities = 0x38; // CNetworkUtlVectorBase<CHandle<CBaseModelEntity>>
                constexpr std::ptrdiff_t m_AssociatedEntityNames = 0x50; // CNetworkUtlVectorBase<CUtlSymbolLarge>
            }
            // Parent: CPhysicsProp
            // Fields count: 0
            namespace CPhysicsPropMultiplayer {
            }
            // Parent: CBaseToggle
            // Fields count: 5
            namespace CBasePlatTrain {
                constexpr std::ptrdiff_t m_NoiseMoving = 0xA78; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_NoiseArrived = 0xA80; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_volume = 0xA90; // float32
                constexpr std::ptrdiff_t m_flTWidth = 0xA94; // float32
                constexpr std::ptrdiff_t m_flTLength = 0xA98; // float32
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
            // Parent: CPointEntity
            // Fields count: 7
            namespace CKeepUpright {
                constexpr std::ptrdiff_t m_worldGoalAxis = 0x7B0; // Vector
                constexpr std::ptrdiff_t m_localTestAxis = 0x7BC; // Vector
                constexpr std::ptrdiff_t m_nameAttach = 0x7D0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_attachedObject = 0x7D8; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_angularLimit = 0x7DC; // float32
                constexpr std::ptrdiff_t m_bActive = 0x7E0; // bool
                constexpr std::ptrdiff_t m_bDampAllRotation = 0x7E1; // bool
            }
            // Parent: CBaseModelEntity
            // Fields count: 0
            namespace CModelPointEntity {
            }
            // Parent: CPointEntity
            // Fields count: 9
            namespace CEnvInstructorVRHint {
                constexpr std::ptrdiff_t m_iszName = 0x7A8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszHintTargetEntity = 0x7B0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iTimeout = 0x7B8; // int32
                constexpr std::ptrdiff_t m_iszCaption = 0x7C0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszStartSound = 0x7C8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iLayoutFileType = 0x7D0; // int32
                constexpr std::ptrdiff_t m_iszCustomLayoutFile = 0x7D8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iAttachType = 0x7E0; // int32
                constexpr std::ptrdiff_t m_flHeightOffset = 0x7E4; // float32
            }
            // Parent: CCSWeaponBase
            // Fields count: 0
            namespace CWeaponXM1014 {
            }
            // Parent: CBaseModelEntity
            // Fields count: 1
            namespace CPlatTrigger {
                constexpr std::ptrdiff_t m_pPlatform = 0x9F8; // CHandle<CFuncPlat>
            }
            // Parent: CRulePointEntity
            // Fields count: 4
            namespace CGameMoney {
                constexpr std::ptrdiff_t m_OnMoneySpent = 0xA08; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnMoneySpentFail = 0xA30; // CEntityIOOutput
                constexpr std::ptrdiff_t m_nMoney = 0xA58; // int32
                constexpr std::ptrdiff_t m_strAwardText = 0xA60; // CUtlString
            }
            // Parent: CLogicalEntity
            // Fields count: 5
            namespace CLogicPlayerProxy {
                constexpr std::ptrdiff_t m_hPlayer = 0x7A8; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_PlayerHasAmmo = 0x7B0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_PlayerHasNoAmmo = 0x7D8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_PlayerDied = 0x800; // CEntityIOOutput
                constexpr std::ptrdiff_t m_RequestedPlayerHealth = 0x828; // CEntityOutputTemplate<int32>
            }
            // Parent: CPlayerPawnComponent
            // Fields count: 4
            //
            // Metadata:
            // NetworkVarNames: m_iObserverMode (uint8)
            // NetworkVarNames: m_hObserverTarget (CHandle<CBaseEntity>)
            namespace CPlayer_ObserverServices {
                constexpr std::ptrdiff_t m_iObserverMode = 0x40; // uint8
                constexpr std::ptrdiff_t m_hObserverTarget = 0x44; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_iObserverLastMode = 0x48; // ObserverMode_t
                constexpr std::ptrdiff_t m_bForcedObserverMode = 0x4C; // bool
            }
            // Parent: CCSWeaponBaseGun
            // Fields count: 0
            namespace CWeaponZoneRepulsor {
            }
            // Parent: CPointEntity
            // Fields count: 3
            namespace CPhysImpact {
                constexpr std::ptrdiff_t m_damage = 0x7A8; // float32
                constexpr std::ptrdiff_t m_distance = 0x7AC; // float32
                constexpr std::ptrdiff_t m_directionEntityName = 0x7B0; // CUtlSymbolLarge
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
            namespace CEnvCombinedLightProbeVolume {
                constexpr std::ptrdiff_t m_Color = 0x1800; // Color
                constexpr std::ptrdiff_t m_flBrightness = 0x1804; // float32
                constexpr std::ptrdiff_t m_hCubemapTexture = 0x1808; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_bCustomCubemapTexture = 0x1810; // bool
                constexpr std::ptrdiff_t m_hLightProbeTexture = 0x1818; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_hLightProbeDirectLightIndicesTexture = 0x1820; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_hLightProbeDirectLightScalarsTexture = 0x1828; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_hLightProbeDirectLightShadowsTexture = 0x1830; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_vBoxMins = 0x1838; // Vector
                constexpr std::ptrdiff_t m_vBoxMaxs = 0x1844; // Vector
                constexpr std::ptrdiff_t m_bMoveable = 0x1850; // bool
                constexpr std::ptrdiff_t m_nHandshake = 0x1854; // int32
                constexpr std::ptrdiff_t m_nEnvCubeMapArrayIndex = 0x1858; // int32
                constexpr std::ptrdiff_t m_nPriority = 0x185C; // int32
                constexpr std::ptrdiff_t m_bStartDisabled = 0x1860; // bool
                constexpr std::ptrdiff_t m_flEdgeFadeDist = 0x1864; // float32
                constexpr std::ptrdiff_t m_vEdgeFadeDists = 0x1868; // Vector
                constexpr std::ptrdiff_t m_nLightProbeSizeX = 0x1874; // int32
                constexpr std::ptrdiff_t m_nLightProbeSizeY = 0x1878; // int32
                constexpr std::ptrdiff_t m_nLightProbeSizeZ = 0x187C; // int32
                constexpr std::ptrdiff_t m_nLightProbeAtlasX = 0x1880; // int32
                constexpr std::ptrdiff_t m_nLightProbeAtlasY = 0x1884; // int32
                constexpr std::ptrdiff_t m_nLightProbeAtlasZ = 0x1888; // int32
                constexpr std::ptrdiff_t m_bEnabled = 0x18A1; // bool
            }
            // Parent: CPlayerPawnComponent
            // Fields count: 0
            namespace CPlayer_WaterServices {
            }
            // Parent: CCSGameModeRules
            // Fields count: 0
            namespace CCSGameModeRules_Noop {
            }
            // Parent: CPointEntity
            // Fields count: 16
            namespace CPointAngularVelocitySensor {
                constexpr std::ptrdiff_t m_hTargetEntity = 0x7A8; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_flThreshold = 0x7AC; // float32
                constexpr std::ptrdiff_t m_nLastCompareResult = 0x7B0; // int32
                constexpr std::ptrdiff_t m_nLastFireResult = 0x7B4; // int32
                constexpr std::ptrdiff_t m_flFireTime = 0x7B8; // GameTime_t
                constexpr std::ptrdiff_t m_flFireInterval = 0x7BC; // float32
                constexpr std::ptrdiff_t m_flLastAngVelocity = 0x7C0; // float32
                constexpr std::ptrdiff_t m_lastOrientation = 0x7C4; // QAngle
                constexpr std::ptrdiff_t m_vecAxis = 0x7D0; // Vector
                constexpr std::ptrdiff_t m_bUseHelper = 0x7DC; // bool
                constexpr std::ptrdiff_t m_AngularVelocity = 0x7E0; // CEntityOutputTemplate<float32>
                constexpr std::ptrdiff_t m_OnLessThan = 0x808; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnLessThanOrEqualTo = 0x830; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnGreaterThan = 0x858; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnGreaterThanOrEqualTo = 0x880; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnEqualTo = 0x8A8; // CEntityIOOutput
            }
            // Parent: CLogicalEntity
            // Fields count: 8
            namespace CPathKeyFrame {
                constexpr std::ptrdiff_t m_Origin = 0x7A8; // Vector
                constexpr std::ptrdiff_t m_Angles = 0x7B4; // QAngle
                constexpr std::ptrdiff_t m_qAngle = 0x7C0; // Quaternion
                constexpr std::ptrdiff_t m_iNextKey = 0x7D0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_flNextTime = 0x7D8; // float32
                constexpr std::ptrdiff_t m_pNextKey = 0x7E0; // CPathKeyFrame*
                constexpr std::ptrdiff_t m_pPrevKey = 0x7E8; // CPathKeyFrame*
                constexpr std::ptrdiff_t m_flSpeed = 0x7F0; // float32
            }
            // Parent: CBaseModelEntity
            // Fields count: 3
            namespace CFuncInteractionLayerClip {
                constexpr std::ptrdiff_t m_bDisabled = 0x9F8; // bool
                constexpr std::ptrdiff_t m_iszInteractsAs = 0xA00; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszInteractsWith = 0xA08; // CUtlSymbolLarge
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
                constexpr std::ptrdiff_t m_Attributes = 0x8; // CUtlVectorEmbeddedNetworkVar<CEconItemAttribute>
                constexpr std::ptrdiff_t m_pManager = 0x58; // CAttributeManager*
            }
            // Parent: CCSWeaponBaseGun
            // Fields count: 0
            namespace CWeaponRevolver {
            }
            // Parent: CDynamicProp
            // Fields count: 1
            namespace COrnamentProp {
                constexpr std::ptrdiff_t m_initialOwner = 0xE68; // CUtlSymbolLarge
            }
            // Parent: CLogicalEntity
            // Fields count: 1
            namespace CLogicGameEvent {
                constexpr std::ptrdiff_t m_iszEventName = 0x7A8; // CUtlSymbolLarge
            }
            // Parent: CPointEntity
            // Fields count: 2
            namespace CEnvMuzzleFlash {
                constexpr std::ptrdiff_t m_flScale = 0x7A8; // float32
                constexpr std::ptrdiff_t m_iszParentAttachment = 0x7B0; // CUtlSymbolLarge
            }
            // Parent: CDynamicProp
            // Fields count: 0
            namespace CCoopBonusCoin {
            }
            // Parent: CSoundEventEntity
            // Fields count: 6
            namespace CSoundEventPathCornerEntity {
                constexpr std::ptrdiff_t m_iszPathCorner = 0x850; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iCountMax = 0x858; // int32
                constexpr std::ptrdiff_t m_flDistanceMax = 0x85C; // float32
                constexpr std::ptrdiff_t m_flDistMaxSqr = 0x860; // float32
                constexpr std::ptrdiff_t m_flDotProductMax = 0x864; // float32
                constexpr std::ptrdiff_t bPlaying = 0x868; // bool
            }
            // Parent: CEnvSoundscape
            // Fields count: 1
            namespace CEnvSoundscapeProxy {
                constexpr std::ptrdiff_t m_MainSoundscapeName = 0x840; // CUtlSymbolLarge
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
            namespace CLightComponent {
                constexpr std::ptrdiff_t __m_pChainEntity = 0x58; // CNetworkVarChainer
                constexpr std::ptrdiff_t m_Color = 0x95; // Color
                constexpr std::ptrdiff_t m_SecondaryColor = 0x99; // Color
                constexpr std::ptrdiff_t m_flBrightness = 0xA0; // float32
                constexpr std::ptrdiff_t m_flBrightnessScale = 0xA4; // float32
                constexpr std::ptrdiff_t m_flBrightnessMult = 0xA8; // float32
                constexpr std::ptrdiff_t m_flRange = 0xAC; // float32
                constexpr std::ptrdiff_t m_flFalloff = 0xB0; // float32
                constexpr std::ptrdiff_t m_flAttenuation0 = 0xB4; // float32
                constexpr std::ptrdiff_t m_flAttenuation1 = 0xB8; // float32
                constexpr std::ptrdiff_t m_flAttenuation2 = 0xBC; // float32
                constexpr std::ptrdiff_t m_flTheta = 0xC0; // float32
                constexpr std::ptrdiff_t m_flPhi = 0xC4; // float32
                constexpr std::ptrdiff_t m_hLightCookie = 0xC8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_nCascades = 0xD0; // int32
                constexpr std::ptrdiff_t m_nCastShadows = 0xD4; // int32
                constexpr std::ptrdiff_t m_nShadowWidth = 0xD8; // int32
                constexpr std::ptrdiff_t m_nShadowHeight = 0xDC; // int32
                constexpr std::ptrdiff_t m_bRenderDiffuse = 0xE0; // bool
                constexpr std::ptrdiff_t m_nRenderSpecular = 0xE4; // int32
                constexpr std::ptrdiff_t m_bRenderTransmissive = 0xE8; // bool
                constexpr std::ptrdiff_t m_flOrthoLightWidth = 0xEC; // float32
                constexpr std::ptrdiff_t m_flOrthoLightHeight = 0xF0; // float32
                constexpr std::ptrdiff_t m_nStyle = 0xF4; // int32
                constexpr std::ptrdiff_t m_Pattern = 0xF8; // CUtlString
                constexpr std::ptrdiff_t m_nCascadeRenderStaticObjects = 0x100; // int32
                constexpr std::ptrdiff_t m_flShadowCascadeCrossFade = 0x104; // float32
                constexpr std::ptrdiff_t m_flShadowCascadeDistanceFade = 0x108; // float32
                constexpr std::ptrdiff_t m_flShadowCascadeDistance0 = 0x10C; // float32
                constexpr std::ptrdiff_t m_flShadowCascadeDistance1 = 0x110; // float32
                constexpr std::ptrdiff_t m_flShadowCascadeDistance2 = 0x114; // float32
                constexpr std::ptrdiff_t m_flShadowCascadeDistance3 = 0x118; // float32
                constexpr std::ptrdiff_t m_nShadowCascadeResolution0 = 0x11C; // int32
                constexpr std::ptrdiff_t m_nShadowCascadeResolution1 = 0x120; // int32
                constexpr std::ptrdiff_t m_nShadowCascadeResolution2 = 0x124; // int32
                constexpr std::ptrdiff_t m_nShadowCascadeResolution3 = 0x128; // int32
                constexpr std::ptrdiff_t m_bUsesBakedShadowing = 0x12C; // bool
                constexpr std::ptrdiff_t m_nShadowPriority = 0x130; // int32
                constexpr std::ptrdiff_t m_nBakedShadowIndex = 0x134; // int32
                constexpr std::ptrdiff_t m_bRenderToCubemaps = 0x138; // bool
                constexpr std::ptrdiff_t m_nDirectLight = 0x13C; // int32
                constexpr std::ptrdiff_t m_nIndirectLight = 0x140; // int32
                constexpr std::ptrdiff_t m_flFadeMinDist = 0x144; // float32
                constexpr std::ptrdiff_t m_flFadeMaxDist = 0x148; // float32
                constexpr std::ptrdiff_t m_flShadowFadeMinDist = 0x14C; // float32
                constexpr std::ptrdiff_t m_flShadowFadeMaxDist = 0x150; // float32
                constexpr std::ptrdiff_t m_bEnabled = 0x154; // bool
                constexpr std::ptrdiff_t m_bFlicker = 0x155; // bool
                constexpr std::ptrdiff_t m_bPrecomputedFieldsValid = 0x156; // bool
                constexpr std::ptrdiff_t m_vPrecomputedBoundsMins = 0x158; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedBoundsMaxs = 0x164; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin = 0x170; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles = 0x17C; // QAngle
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent = 0x188; // Vector
                constexpr std::ptrdiff_t m_flPrecomputedMaxRange = 0x194; // float32
                constexpr std::ptrdiff_t m_nFogLightingMode = 0x198; // int32
                constexpr std::ptrdiff_t m_flFogContributionStength = 0x19C; // float32
                constexpr std::ptrdiff_t m_flNearClipPlane = 0x1A0; // float32
                constexpr std::ptrdiff_t m_SkyColor = 0x1A4; // Color
                constexpr std::ptrdiff_t m_flSkyIntensity = 0x1A8; // float32
                constexpr std::ptrdiff_t m_SkyAmbientBounce = 0x1AC; // Color
                constexpr std::ptrdiff_t m_bUseSecondaryColor = 0x1B0; // bool
                constexpr std::ptrdiff_t m_bMixedShadows = 0x1B1; // bool
                constexpr std::ptrdiff_t m_flLightStyleStartTime = 0x1B4; // GameTime_t
                constexpr std::ptrdiff_t m_flCapsuleLength = 0x1B8; // float32
                constexpr std::ptrdiff_t m_flMinRoughness = 0x1BC; // float32
                constexpr std::ptrdiff_t m_bPvsModifyEntity = 0x1D0; // bool
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
            namespace CSmokeGrenadeProjectile {
                constexpr std::ptrdiff_t m_nSmokeEffectTickBegin = 0xDB0; // int32
                constexpr std::ptrdiff_t m_bDidSmokeEffect = 0xDB4; // bool
                constexpr std::ptrdiff_t m_nRandomSeed = 0xDB8; // int32
                constexpr std::ptrdiff_t m_vSmokeColor = 0xDBC; // Vector
                constexpr std::ptrdiff_t m_vSmokeDetonationPos = 0xDC8; // Vector
                constexpr std::ptrdiff_t m_VoxelFrameData = 0xDD8; // CUtlVector<uint8>
                constexpr std::ptrdiff_t m_flLastBounce = 0xDF0; // GameTime_t
                constexpr std::ptrdiff_t m_fllastSimulationTime = 0xDF4; // GameTime_t
            }
            // Parent: CTriggerMultiple
            // Fields count: 1
            namespace CScriptTriggerMultiple {
                constexpr std::ptrdiff_t m_vExtent = 0xBC8; // Vector
            }
            // Parent: CSoundOpvarSetPointEntity
            // Fields count: 4
            namespace CSoundOpvarSetAutoRoomEntity {
                constexpr std::ptrdiff_t m_traceResults = 0x950; // CUtlVector<SoundOpvarTraceResult_t>
                constexpr std::ptrdiff_t m_flSize = 0x980; // float32
                constexpr std::ptrdiff_t m_flHeightTolerance = 0x984; // float32
                constexpr std::ptrdiff_t m_flSizeSqr = 0x988; // float32
            }
            // Parent: None
            // Fields count: 0
            namespace CEntityComponent {
            }
            // Parent: CItem
            // Fields count: 0
            namespace CItemKevlar {
            }
            // Parent: CBaseTrigger
            // Fields count: 14
            namespace CTriggerHurt {
                constexpr std::ptrdiff_t m_flOriginalDamage = 0xB9C; // float32
                constexpr std::ptrdiff_t m_flDamage = 0xBA0; // float32
                constexpr std::ptrdiff_t m_flDamageCap = 0xBA4; // float32
                constexpr std::ptrdiff_t m_flLastDmgTime = 0xBA8; // GameTime_t
                constexpr std::ptrdiff_t m_flForgivenessDelay = 0xBAC; // float32
                constexpr std::ptrdiff_t m_bitsDamageInflict = 0xBB0; // int32
                constexpr std::ptrdiff_t m_damageModel = 0xBB4; // int32
                constexpr std::ptrdiff_t m_bNoDmgForce = 0xBB8; // bool
                constexpr std::ptrdiff_t m_vDamageForce = 0xBBC; // Vector
                constexpr std::ptrdiff_t m_thinkAlways = 0xBC8; // bool
                constexpr std::ptrdiff_t m_hurtThinkPeriod = 0xBCC; // float32
                constexpr std::ptrdiff_t m_OnHurt = 0xBD0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnHurtPlayer = 0xBF8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_hurtEntities = 0xC20; // CUtlVector<CHandle<CBaseEntity>>
            }
            // Parent: CLogicalEntity
            // Fields count: 8
            namespace CPhysConstraint {
                constexpr std::ptrdiff_t m_nameAttach1 = 0x7B0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_nameAttach2 = 0x7B8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_breakSound = 0x7C0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_forceLimit = 0x7C8; // float32
                constexpr std::ptrdiff_t m_torqueLimit = 0x7CC; // float32
                constexpr std::ptrdiff_t m_teleportTick = 0x7D0; // uint32
                constexpr std::ptrdiff_t m_minTeleportDistance = 0x7D4; // float32
                constexpr std::ptrdiff_t m_OnBreak = 0x7D8; // CEntityIOOutput
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
            namespace CMapVetoPickController {
                constexpr std::ptrdiff_t m_bPlayedIntroVcd = 0x7A8; // bool
                constexpr std::ptrdiff_t m_bNeedToPlayFiveSecondsRemaining = 0x7A9; // bool
                constexpr std::ptrdiff_t m_dblPreMatchDraftSequenceTime = 0x7C8; // float64
                constexpr std::ptrdiff_t m_bPreMatchDraftStateChanged = 0x7D0; // bool
                constexpr std::ptrdiff_t m_nDraftType = 0x7D4; // int32
                constexpr std::ptrdiff_t m_nTeamWinningCoinToss = 0x7D8; // int32
                constexpr std::ptrdiff_t m_nTeamWithFirstChoice = 0x7DC; // int32[64]
                constexpr std::ptrdiff_t m_nVoteMapIdsList = 0x8DC; // int32[7]
                constexpr std::ptrdiff_t m_nAccountIDs = 0x8F8; // int32[64]
                constexpr std::ptrdiff_t m_nMapId0 = 0x9F8; // int32[64]
                constexpr std::ptrdiff_t m_nMapId1 = 0xAF8; // int32[64]
                constexpr std::ptrdiff_t m_nMapId2 = 0xBF8; // int32[64]
                constexpr std::ptrdiff_t m_nMapId3 = 0xCF8; // int32[64]
                constexpr std::ptrdiff_t m_nMapId4 = 0xDF8; // int32[64]
                constexpr std::ptrdiff_t m_nMapId5 = 0xEF8; // int32[64]
                constexpr std::ptrdiff_t m_nStartingSide0 = 0xFF8; // int32[64]
                constexpr std::ptrdiff_t m_nCurrentPhase = 0x10F8; // int32
                constexpr std::ptrdiff_t m_nPhaseStartTick = 0x10FC; // int32
                constexpr std::ptrdiff_t m_nPhaseDurationTicks = 0x1100; // int32
                constexpr std::ptrdiff_t m_OnMapVetoed = 0x1108; // CEntityOutputTemplate<CUtlSymbolLarge>
                constexpr std::ptrdiff_t m_OnMapPicked = 0x1130; // CEntityOutputTemplate<CUtlSymbolLarge>
                constexpr std::ptrdiff_t m_OnSidesPicked = 0x1158; // CEntityOutputTemplate<int32>
                constexpr std::ptrdiff_t m_OnNewPhaseStarted = 0x1180; // CEntityOutputTemplate<int32>
                constexpr std::ptrdiff_t m_OnLevelTransition = 0x11A8; // CEntityOutputTemplate<int32>
            }
            // Parent: CBaseEntity
            // Fields count: 0
            namespace CCSMinimapBoundary {
            }
            // Parent: CPointEntity
            // Fields count: 4
            namespace CSoundEnt {
                constexpr std::ptrdiff_t m_iFreeSound = 0x7A8; // int32
                constexpr std::ptrdiff_t m_iActiveSound = 0x7AC; // int32
                constexpr std::ptrdiff_t m_cLastActiveSounds = 0x7B0; // int32
                constexpr std::ptrdiff_t m_SoundPool = 0x7B4; // CSound[128]
            }
            // Parent: CPointEntity
            // Fields count: 0
            namespace CInfoSpawnGroupLandmark {
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
            // Parent: CSprite
            // Fields count: 0
            namespace CSpriteOriented {
            }
            // Parent: CSoundOpvarSetAABBEntity
            // Fields count: 0
            namespace CSoundOpvarSetOBBEntity {
            }
            // Parent: CCSWeaponBaseGun
            // Fields count: 0
            namespace CWeaponM4A1 {
            }
            // Parent: CBeam
            // Fields count: 5
            namespace CEnvLaser {
                constexpr std::ptrdiff_t m_iszLaserTarget = 0xA98; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_pSprite = 0xAA0; // CSprite*
                constexpr std::ptrdiff_t m_iszSpriteName = 0xAA8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_firePosition = 0xAB0; // Vector
                constexpr std::ptrdiff_t m_flStartFrame = 0xABC; // float32
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
            namespace CBasePlayerWeapon {
                constexpr std::ptrdiff_t m_nNextPrimaryAttackTick = 0xF78; // GameTick_t
                constexpr std::ptrdiff_t m_flNextPrimaryAttackTickRatio = 0xF7C; // float32
                constexpr std::ptrdiff_t m_nNextSecondaryAttackTick = 0xF80; // GameTick_t
                constexpr std::ptrdiff_t m_flNextSecondaryAttackTickRatio = 0xF84; // float32
                constexpr std::ptrdiff_t m_iClip1 = 0xF88; // int32
                constexpr std::ptrdiff_t m_iClip2 = 0xF8C; // int32
                constexpr std::ptrdiff_t m_pReserveAmmo = 0xF90; // int32[2]
                constexpr std::ptrdiff_t m_OnPlayerUse = 0xF98; // CEntityIOOutput
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
                constexpr std::ptrdiff_t m_perRoundStats = 0x40; // CUtlVectorEmbeddedNetworkVar<CSPerRoundStats_t>
                constexpr std::ptrdiff_t m_matchStats = 0x90; // CSMatchStats_t
                constexpr std::ptrdiff_t m_iNumRoundKills = 0x148; // int32
                constexpr std::ptrdiff_t m_iNumRoundKillsHeadshots = 0x14C; // int32
                constexpr std::ptrdiff_t m_unTotalRoundDamageDealt = 0x150; // uint32
            }
            // Parent: CEntityComponent
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_bvDisabledHitGroups (uint32)
            namespace CHitboxComponent {
                constexpr std::ptrdiff_t m_bvDisabledHitGroups = 0x24; // uint32[1]
            }
            // Parent: CBaseFlex
            // Fields count: 0
            namespace CBaseFlexAlias_funCBaseFlex {
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
            namespace CFish {
                constexpr std::ptrdiff_t m_pool = 0xBF0; // CHandle<CFishPool>
                constexpr std::ptrdiff_t m_id = 0xBF4; // uint32
                constexpr std::ptrdiff_t m_x = 0xBF8; // float32
                constexpr std::ptrdiff_t m_y = 0xBFC; // float32
                constexpr std::ptrdiff_t m_z = 0xC00; // float32
                constexpr std::ptrdiff_t m_angle = 0xC04; // float32
                constexpr std::ptrdiff_t m_angleChange = 0xC08; // float32
                constexpr std::ptrdiff_t m_forward = 0xC0C; // Vector
                constexpr std::ptrdiff_t m_perp = 0xC18; // Vector
                constexpr std::ptrdiff_t m_poolOrigin = 0xC24; // Vector
                constexpr std::ptrdiff_t m_waterLevel = 0xC30; // float32
                constexpr std::ptrdiff_t m_speed = 0xC34; // float32
                constexpr std::ptrdiff_t m_desiredSpeed = 0xC38; // float32
                constexpr std::ptrdiff_t m_calmSpeed = 0xC3C; // float32
                constexpr std::ptrdiff_t m_panicSpeed = 0xC40; // float32
                constexpr std::ptrdiff_t m_avoidRange = 0xC44; // float32
                constexpr std::ptrdiff_t m_turnTimer = 0xC48; // CountdownTimer
                constexpr std::ptrdiff_t m_turnClockwise = 0xC60; // bool
                constexpr std::ptrdiff_t m_goTimer = 0xC68; // CountdownTimer
                constexpr std::ptrdiff_t m_moveTimer = 0xC80; // CountdownTimer
                constexpr std::ptrdiff_t m_panicTimer = 0xC98; // CountdownTimer
                constexpr std::ptrdiff_t m_disperseTimer = 0xCB0; // CountdownTimer
                constexpr std::ptrdiff_t m_proximityTimer = 0xCC8; // CountdownTimer
                constexpr std::ptrdiff_t m_visible = 0xCE0; // CUtlVector<CFish*>
            }
            // Parent: CBaseEntity
            // Fields count: 3
            namespace CEnvFireSource {
                constexpr std::ptrdiff_t m_bEnabled = 0x7A8; // bool
                constexpr std::ptrdiff_t m_radius = 0x7AC; // float32
                constexpr std::ptrdiff_t m_damage = 0x7B0; // float32
            }
            // Parent: CBaseEntity
            // Fields count: 0
            namespace CInfoLadderDismount {
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
            namespace CBaseCSGrenadeProjectile {
                constexpr std::ptrdiff_t m_vInitialPosition = 0xD24; // Vector
                constexpr std::ptrdiff_t m_vInitialVelocity = 0xD30; // Vector
                constexpr std::ptrdiff_t m_nBounces = 0xD3C; // int32
                constexpr std::ptrdiff_t m_nExplodeEffectIndex = 0xD40; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                constexpr std::ptrdiff_t m_nExplodeEffectTickBegin = 0xD48; // int32
                constexpr std::ptrdiff_t m_vecExplodeEffectOrigin = 0xD4C; // Vector
                constexpr std::ptrdiff_t m_flSpawnTime = 0xD58; // GameTime_t
                constexpr std::ptrdiff_t m_unOGSExtraFlags = 0xD5C; // uint8
                constexpr std::ptrdiff_t m_bDetonationRecorded = 0xD5D; // bool
                constexpr std::ptrdiff_t m_flDetonateTime = 0xD60; // GameTime_t
                constexpr std::ptrdiff_t m_nItemIndex = 0xD64; // uint16
                constexpr std::ptrdiff_t m_vecOriginalSpawnLocation = 0xD68; // Vector
                constexpr std::ptrdiff_t m_flLastBounceSoundTime = 0xD74; // GameTime_t
                constexpr std::ptrdiff_t m_vecGrenadeSpin = 0xD78; // RotationVector
                constexpr std::ptrdiff_t m_vecLastHitSurfaceNormal = 0xD84; // Vector
                constexpr std::ptrdiff_t m_nTicksAtZeroVelocity = 0xD90; // int32
                constexpr std::ptrdiff_t m_bHasEverHitPlayer = 0xD94; // bool
                constexpr std::ptrdiff_t m_bClearFromPlayers = 0xD95; // bool
            }
            // Parent: CServerOnlyModelEntity
            // Fields count: 1
            namespace CCSPlace {
                constexpr std::ptrdiff_t m_name = 0xA00; // CUtlSymbolLarge
            }
            // Parent: CBaseModelEntity
            // Fields count: 0
            namespace CFuncTrainControls {
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
            namespace CEntityDissolve {
                constexpr std::ptrdiff_t m_flFadeInStart = 0x9F8; // float32
                constexpr std::ptrdiff_t m_flFadeInLength = 0x9FC; // float32
                constexpr std::ptrdiff_t m_flFadeOutModelStart = 0xA00; // float32
                constexpr std::ptrdiff_t m_flFadeOutModelLength = 0xA04; // float32
                constexpr std::ptrdiff_t m_flFadeOutStart = 0xA08; // float32
                constexpr std::ptrdiff_t m_flFadeOutLength = 0xA0C; // float32
                constexpr std::ptrdiff_t m_flStartTime = 0xA10; // GameTime_t
                constexpr std::ptrdiff_t m_nDissolveType = 0xA14; // EntityDisolveType_t
                constexpr std::ptrdiff_t m_vDissolverOrigin = 0xA18; // Vector
                constexpr std::ptrdiff_t m_nMagnitude = 0xA24; // uint32
            }
            // Parent: CSoundEventEntity
            // Fields count: 2
            namespace CSoundEventOBBEntity {
                constexpr std::ptrdiff_t m_vMins = 0x84C; // Vector
                constexpr std::ptrdiff_t m_vMaxs = 0x858; // Vector
            }
            // Parent: CPointEntity
            // Fields count: 12
            namespace CPointAngleSensor {
                constexpr std::ptrdiff_t m_bDisabled = 0x7A8; // bool
                constexpr std::ptrdiff_t m_nLookAtName = 0x7B0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hTargetEntity = 0x7B8; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hLookAtEntity = 0x7BC; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_flDuration = 0x7C0; // float32
                constexpr std::ptrdiff_t m_flDotTolerance = 0x7C4; // float32
                constexpr std::ptrdiff_t m_flFacingTime = 0x7C8; // GameTime_t
                constexpr std::ptrdiff_t m_bFired = 0x7CC; // bool
                constexpr std::ptrdiff_t m_OnFacingLookat = 0x7D0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnNotFacingLookat = 0x7F8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_TargetDir = 0x820; // CEntityOutputTemplate<Vector>
                constexpr std::ptrdiff_t m_FacingPercentage = 0x848; // CEntityOutputTemplate<float32>
            }
            // Parent: CBtNodeDecorator
            // Fields count: 1
            namespace CBtNodeCondition {
                constexpr std::ptrdiff_t m_bNegated = 0x58; // bool
            }
            // Parent: CBaseAnimGraph
            // Fields count: 12
            namespace CPhysMagnet {
                constexpr std::ptrdiff_t m_OnMagnetAttach = 0xBF0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnMagnetDetach = 0xC18; // CEntityIOOutput
                constexpr std::ptrdiff_t m_massScale = 0xC40; // float32
                constexpr std::ptrdiff_t m_forceLimit = 0xC44; // float32
                constexpr std::ptrdiff_t m_torqueLimit = 0xC48; // float32
                constexpr std::ptrdiff_t m_MagnettedEntities = 0xC50; // CUtlVector<magnetted_objects_t>
                constexpr std::ptrdiff_t m_bActive = 0xC68; // bool
                constexpr std::ptrdiff_t m_bHasHitSomething = 0xC69; // bool
                constexpr std::ptrdiff_t m_flTotalMass = 0xC6C; // float32
                constexpr std::ptrdiff_t m_flRadius = 0xC70; // float32
                constexpr std::ptrdiff_t m_flNextSuckTime = 0xC74; // GameTime_t
                constexpr std::ptrdiff_t m_iMaxObjectsAttached = 0xC78; // int32
            }
            // Parent: CSceneEntity
            // Fields count: 0
            namespace CSceneEntityAlias_logic_choreographed_scene {
            }
            // Parent: CBaseModelEntity
            // Fields count: 2
            namespace CFuncNavBlocker {
                constexpr std::ptrdiff_t m_bDisabled = 0x9F8; // bool
                constexpr std::ptrdiff_t m_nBlockedTeamNumber = 0x9FC; // int32
            }
            // Parent: CPointEntity
            // Fields count: 4
            namespace CRagdollMagnet {
                constexpr std::ptrdiff_t m_bDisabled = 0x7A8; // bool
                constexpr std::ptrdiff_t m_radius = 0x7AC; // float32
                constexpr std::ptrdiff_t m_force = 0x7B0; // float32
                constexpr std::ptrdiff_t m_axis = 0x7B4; // Vector
            }
            // Parent: CBaseModelEntity
            // Fields count: 6
            namespace CFuncBrush {
                constexpr std::ptrdiff_t m_iSolidity = 0x9F8; // BrushSolidities_e
                constexpr std::ptrdiff_t m_iDisabled = 0x9FC; // int32
                constexpr std::ptrdiff_t m_bSolidBsp = 0xA00; // bool
                constexpr std::ptrdiff_t m_iszExcludedClass = 0xA08; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bInvertExclusion = 0xA10; // bool
                constexpr std::ptrdiff_t m_bScriptedMovement = 0xA11; // bool
            }
            // Parent: CPointEntity
            // Fields count: 3
            namespace CPointProximitySensor {
                constexpr std::ptrdiff_t m_bDisabled = 0x7A8; // bool
                constexpr std::ptrdiff_t m_hTargetEntity = 0x7AC; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_Distance = 0x7B0; // CEntityOutputTemplate<float32>
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_weaponPurchases (WeaponPurchaseCount_t)
            namespace WeaponPurchaseTracker_t {
                constexpr std::ptrdiff_t m_weaponPurchases = 0x8; // CUtlVectorEmbeddedNetworkVar<WeaponPurchaseCount_t>
            }
            // Parent: CBaseFilter
            // Fields count: 1
            namespace CFilterClass {
                constexpr std::ptrdiff_t m_iFilterClass = 0x800; // CUtlSymbolLarge
            }
            // Parent: CBaseCSGrenadeProjectile
            // Fields count: 0
            namespace CHEGrenadeProjectile {
            }
            // Parent: CBaseEntity
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_EnvWindShared (CEnvWindShared)
            namespace CEnvWind {
                constexpr std::ptrdiff_t m_EnvWindShared = 0x7A8; // CEnvWindShared
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
            namespace CCSTeam {
                constexpr std::ptrdiff_t m_nLastRecievedShorthandedRoundBonus = 0x860; // int32
                constexpr std::ptrdiff_t m_nShorthandedRoundBonusStartRound = 0x864; // int32
                constexpr std::ptrdiff_t m_bSurrendered = 0x868; // bool
                constexpr std::ptrdiff_t m_szTeamMatchStat = 0x869; // char[512]
                constexpr std::ptrdiff_t m_numMapVictories = 0xA6C; // int32
                constexpr std::ptrdiff_t m_scoreFirstHalf = 0xA70; // int32
                constexpr std::ptrdiff_t m_scoreSecondHalf = 0xA74; // int32
                constexpr std::ptrdiff_t m_scoreOvertime = 0xA78; // int32
                constexpr std::ptrdiff_t m_szClanTeamname = 0xA7C; // char[129]
                constexpr std::ptrdiff_t m_iClanID = 0xB00; // uint32
                constexpr std::ptrdiff_t m_szTeamFlagImage = 0xB04; // char[8]
                constexpr std::ptrdiff_t m_szTeamLogoImage = 0xB0C; // char[8]
                constexpr std::ptrdiff_t m_flNextResourceTime = 0xB14; // float32
                constexpr std::ptrdiff_t m_iLastUpdateSentAt = 0xB18; // int32
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
            // Parent: CTriggerMultiple
            // Fields count: 4
            namespace CTriggerImpact {
                constexpr std::ptrdiff_t m_flMagnitude = 0xBC8; // float32
                constexpr std::ptrdiff_t m_flNoise = 0xBCC; // float32
                constexpr std::ptrdiff_t m_flViewkick = 0xBD0; // float32
                constexpr std::ptrdiff_t m_pOutputForce = 0xBD8; // CEntityOutputTemplate<Vector>
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
            namespace CSun {
                constexpr std::ptrdiff_t m_vDirection = 0x9F8; // Vector
                constexpr std::ptrdiff_t m_clrOverlay = 0xA04; // Color
                constexpr std::ptrdiff_t m_iszEffectName = 0xA08; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszSSEffectName = 0xA10; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bOn = 0xA18; // bool
                constexpr std::ptrdiff_t m_bmaxColor = 0xA19; // bool
                constexpr std::ptrdiff_t m_flSize = 0xA1C; // float32
                constexpr std::ptrdiff_t m_flRotation = 0xA20; // float32
                constexpr std::ptrdiff_t m_flHazeScale = 0xA24; // float32
                constexpr std::ptrdiff_t m_flAlphaHaze = 0xA28; // float32
                constexpr std::ptrdiff_t m_flAlphaHdr = 0xA2C; // float32
                constexpr std::ptrdiff_t m_flAlphaScale = 0xA30; // float32
                constexpr std::ptrdiff_t m_flHDRColorScale = 0xA34; // float32
                constexpr std::ptrdiff_t m_flFarZScale = 0xA38; // float32
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
            // Parent: CBaseCSGrenade
            // Fields count: 0
            namespace CHEGrenade {
            }
            // Parent: CRulePointEntity
            // Fields count: 0
            namespace CGameEnd {
            }
            // Parent: CBaseTrigger
            // Fields count: 0
            namespace CTriggerCallback {
            }
            // Parent: CBaseModelEntity
            // Fields count: 3
            namespace CBubbling {
                constexpr std::ptrdiff_t m_density = 0x9F8; // int32
                constexpr std::ptrdiff_t m_frequency = 0x9FC; // int32
                constexpr std::ptrdiff_t m_state = 0xA00; // int32
            }
            // Parent: CTeamplayRules
            // Fields count: 215
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
            namespace CCSGameRules {
                constexpr std::ptrdiff_t __m_pChainEntity = 0x98; // CNetworkVarChainer
                constexpr std::ptrdiff_t m_coopMissionManager = 0xC0; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_bFreezePeriod = 0xC4; // bool
                constexpr std::ptrdiff_t m_bWarmupPeriod = 0xC5; // bool
                constexpr std::ptrdiff_t m_fWarmupPeriodEnd = 0xC8; // GameTime_t
                constexpr std::ptrdiff_t m_fWarmupPeriodStart = 0xCC; // GameTime_t
                constexpr std::ptrdiff_t m_nTotalPausedTicks = 0xD0; // int32
                constexpr std::ptrdiff_t m_nPauseStartTick = 0xD4; // int32
                constexpr std::ptrdiff_t m_bServerPaused = 0xD8; // bool
                constexpr std::ptrdiff_t m_bGamePaused = 0xD9; // bool
                constexpr std::ptrdiff_t m_bTerroristTimeOutActive = 0xDA; // bool
                constexpr std::ptrdiff_t m_bCTTimeOutActive = 0xDB; // bool
                constexpr std::ptrdiff_t m_flTerroristTimeOutRemaining = 0xDC; // float32
                constexpr std::ptrdiff_t m_flCTTimeOutRemaining = 0xE0; // float32
                constexpr std::ptrdiff_t m_nTerroristTimeOuts = 0xE4; // int32
                constexpr std::ptrdiff_t m_nCTTimeOuts = 0xE8; // int32
                constexpr std::ptrdiff_t m_bTechnicalTimeOut = 0xEC; // bool
                constexpr std::ptrdiff_t m_bMatchWaitingForResume = 0xED; // bool
                constexpr std::ptrdiff_t m_iRoundTime = 0xF0; // int32
                constexpr std::ptrdiff_t m_fMatchStartTime = 0xF4; // float32
                constexpr std::ptrdiff_t m_fRoundStartTime = 0xF8; // GameTime_t
                constexpr std::ptrdiff_t m_flRestartRoundTime = 0xFC; // GameTime_t
                constexpr std::ptrdiff_t m_bGameRestart = 0x100; // bool
                constexpr std::ptrdiff_t m_flGameStartTime = 0x104; // float32
                constexpr std::ptrdiff_t m_timeUntilNextPhaseStarts = 0x108; // float32
                constexpr std::ptrdiff_t m_gamePhase = 0x10C; // int32
                constexpr std::ptrdiff_t m_totalRoundsPlayed = 0x110; // int32
                constexpr std::ptrdiff_t m_nRoundsPlayedThisPhase = 0x114; // int32
                constexpr std::ptrdiff_t m_nOvertimePlaying = 0x118; // int32
                constexpr std::ptrdiff_t m_iHostagesRemaining = 0x11C; // int32
                constexpr std::ptrdiff_t m_bAnyHostageReached = 0x120; // bool
                constexpr std::ptrdiff_t m_bMapHasBombTarget = 0x121; // bool
                constexpr std::ptrdiff_t m_bMapHasRescueZone = 0x122; // bool
                constexpr std::ptrdiff_t m_bMapHasBuyZone = 0x123; // bool
                constexpr std::ptrdiff_t m_bIsQueuedMatchmaking = 0x124; // bool
                constexpr std::ptrdiff_t m_nQueuedMatchmakingMode = 0x128; // int32
                constexpr std::ptrdiff_t m_bIsValveDS = 0x12C; // bool
                constexpr std::ptrdiff_t m_bLogoMap = 0x12D; // bool
                constexpr std::ptrdiff_t m_bPlayAllStepSoundsOnServer = 0x12E; // bool
                constexpr std::ptrdiff_t m_iSpectatorSlotCount = 0x130; // int32
                constexpr std::ptrdiff_t m_MatchDevice = 0x134; // int32
                constexpr std::ptrdiff_t m_bHasMatchStarted = 0x138; // bool
                constexpr std::ptrdiff_t m_nNextMapInMapgroup = 0x13C; // int32
                constexpr std::ptrdiff_t m_szTournamentEventName = 0x140; // char[512]
                constexpr std::ptrdiff_t m_szTournamentEventStage = 0x340; // char[512]
                constexpr std::ptrdiff_t m_szMatchStatTxt = 0x540; // char[512]
                constexpr std::ptrdiff_t m_szTournamentPredictionsTxt = 0x740; // char[512]
                constexpr std::ptrdiff_t m_nTournamentPredictionsPct = 0x940; // int32
                constexpr std::ptrdiff_t m_flCMMItemDropRevealStartTime = 0x944; // GameTime_t
                constexpr std::ptrdiff_t m_flCMMItemDropRevealEndTime = 0x948; // GameTime_t
                constexpr std::ptrdiff_t m_bIsDroppingItems = 0x94C; // bool
                constexpr std::ptrdiff_t m_bIsQuestEligible = 0x94D; // bool
                constexpr std::ptrdiff_t m_bIsHltvActive = 0x94E; // bool
                constexpr std::ptrdiff_t m_nGuardianModeWaveNumber = 0x950; // int32
                constexpr std::ptrdiff_t m_nGuardianModeSpecialKillsRemaining = 0x954; // int32
                constexpr std::ptrdiff_t m_nGuardianModeSpecialWeaponNeeded = 0x958; // int32
                constexpr std::ptrdiff_t m_nGuardianGrenadesToGiveBots = 0x95C; // int32
                constexpr std::ptrdiff_t m_nNumHeaviesToSpawn = 0x960; // int32
                constexpr std::ptrdiff_t m_numGlobalGiftsGiven = 0x964; // uint32
                constexpr std::ptrdiff_t m_numGlobalGifters = 0x968; // uint32
                constexpr std::ptrdiff_t m_numGlobalGiftsPeriodSeconds = 0x96C; // uint32
                constexpr std::ptrdiff_t m_arrFeaturedGiftersAccounts = 0x970; // uint32[4]
                constexpr std::ptrdiff_t m_arrFeaturedGiftersGifts = 0x980; // uint32[4]
                constexpr std::ptrdiff_t m_arrProhibitedItemIndices = 0x990; // uint16[100]
                constexpr std::ptrdiff_t m_arrTournamentActiveCasterAccounts = 0xA58; // uint32[4]
                constexpr std::ptrdiff_t m_numBestOfMaps = 0xA68; // int32
                constexpr std::ptrdiff_t m_nHalloweenMaskListSeed = 0xA6C; // int32
                constexpr std::ptrdiff_t m_bBombDropped = 0xA70; // bool
                constexpr std::ptrdiff_t m_bBombPlanted = 0xA71; // bool
                constexpr std::ptrdiff_t m_iRoundWinStatus = 0xA74; // int32
                constexpr std::ptrdiff_t m_eRoundWinReason = 0xA78; // int32
                constexpr std::ptrdiff_t m_bTCantBuy = 0xA7C; // bool
                constexpr std::ptrdiff_t m_bCTCantBuy = 0xA7D; // bool
                constexpr std::ptrdiff_t m_flGuardianBuyUntilTime = 0xA80; // GameTime_t
                constexpr std::ptrdiff_t m_iMatchStats_RoundResults = 0xA84; // int32[30]
                constexpr std::ptrdiff_t m_iMatchStats_PlayersAlive_CT = 0xAFC; // int32[30]
                constexpr std::ptrdiff_t m_iMatchStats_PlayersAlive_T = 0xB74; // int32[30]
                constexpr std::ptrdiff_t m_TeamRespawnWaveTimes = 0xBEC; // float32[32]
                constexpr std::ptrdiff_t m_flNextRespawnWave = 0xC6C; // GameTime_t[32]
                constexpr std::ptrdiff_t m_nServerQuestID = 0xCEC; // int32
                constexpr std::ptrdiff_t m_vMinimapMins = 0xCF0; // Vector
                constexpr std::ptrdiff_t m_vMinimapMaxs = 0xCFC; // Vector
                constexpr std::ptrdiff_t m_MinimapVerticalSectionHeights = 0xD08; // float32[8]
                constexpr std::ptrdiff_t m_bDontIncrementCoopWave = 0xD28; // bool
                constexpr std::ptrdiff_t m_bSpawnedTerrorHuntHeavy = 0xD29; // bool
                constexpr std::ptrdiff_t m_nEndMatchMapGroupVoteTypes = 0xD2C; // int32[10]
                constexpr std::ptrdiff_t m_nEndMatchMapGroupVoteOptions = 0xD54; // int32[10]
                constexpr std::ptrdiff_t m_nEndMatchMapVoteWinner = 0xD7C; // int32
                constexpr std::ptrdiff_t m_iNumConsecutiveCTLoses = 0xD80; // int32
                constexpr std::ptrdiff_t m_iNumConsecutiveTerroristLoses = 0xD84; // int32
                constexpr std::ptrdiff_t m_bHasHostageBeenTouched = 0xDA0; // bool
                constexpr std::ptrdiff_t m_flIntermissionStartTime = 0xDA4; // GameTime_t
                constexpr std::ptrdiff_t m_flIntermissionEndTime = 0xDA8; // GameTime_t
                constexpr std::ptrdiff_t m_bLevelInitialized = 0xDAC; // bool
                constexpr std::ptrdiff_t m_iTotalRoundsPlayed = 0xDB0; // int32
                constexpr std::ptrdiff_t m_iUnBalancedRounds = 0xDB4; // int32
                constexpr std::ptrdiff_t m_endMatchOnRoundReset = 0xDB8; // bool
                constexpr std::ptrdiff_t m_endMatchOnThink = 0xDB9; // bool
                constexpr std::ptrdiff_t m_iFreezeTime = 0xDBC; // int32
                constexpr std::ptrdiff_t m_iNumTerrorist = 0xDC0; // int32
                constexpr std::ptrdiff_t m_iNumCT = 0xDC4; // int32
                constexpr std::ptrdiff_t m_iNumSpawnableTerrorist = 0xDC8; // int32
                constexpr std::ptrdiff_t m_iNumSpawnableCT = 0xDCC; // int32
                constexpr std::ptrdiff_t m_arrSelectedHostageSpawnIndices = 0xDD0; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_nSpawnPointsRandomSeed = 0xDE8; // int32
                constexpr std::ptrdiff_t m_bFirstConnected = 0xDEC; // bool
                constexpr std::ptrdiff_t m_bCompleteReset = 0xDED; // bool
                constexpr std::ptrdiff_t m_bPickNewTeamsOnReset = 0xDEE; // bool
                constexpr std::ptrdiff_t m_bScrambleTeamsOnRestart = 0xDEF; // bool
                constexpr std::ptrdiff_t m_bSwapTeamsOnRestart = 0xDF0; // bool
                constexpr std::ptrdiff_t m_nEndMatchTiedVotes = 0xDF8; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_bNeedToAskPlayersForContinueVote = 0xE14; // bool
                constexpr std::ptrdiff_t m_numQueuedMatchmakingAccounts = 0xE18; // uint32
                constexpr std::ptrdiff_t m_pQueuedMatchmakingReservationString = 0xE20; // char*
                constexpr std::ptrdiff_t m_numTotalTournamentDrops = 0xE28; // uint32
                constexpr std::ptrdiff_t m_numSpectatorsCountMax = 0xE2C; // uint32
                constexpr std::ptrdiff_t m_numSpectatorsCountMaxTV = 0xE30; // uint32
                constexpr std::ptrdiff_t m_numSpectatorsCountMaxLnk = 0xE34; // uint32
                constexpr std::ptrdiff_t m_bForceTeamChangeSilent = 0xE40; // bool
                constexpr std::ptrdiff_t m_bLoadingRoundBackupData = 0xE41; // bool
                constexpr std::ptrdiff_t m_nMatchInfoShowType = 0xE78; // int32
                constexpr std::ptrdiff_t m_flMatchInfoDecidedTime = 0xE7C; // float32
                constexpr std::ptrdiff_t m_flCoopRespawnAndHealTime = 0xE98; // float32
                constexpr std::ptrdiff_t m_coopBonusCoinsFound = 0xE9C; // int32
                constexpr std::ptrdiff_t m_coopBonusPistolsOnly = 0xEA0; // bool
                constexpr std::ptrdiff_t m_coopPlayersInDeploymentZone = 0xEA1; // bool
                constexpr std::ptrdiff_t m_coopMissionDeadPlayerRespawnEnabled = 0xEA2; // bool
                constexpr std::ptrdiff_t mTeamDMLastWinningTeamNumber = 0xEA4; // int32
                constexpr std::ptrdiff_t mTeamDMLastThinkTime = 0xEA8; // float32
                constexpr std::ptrdiff_t m_flTeamDMLastAnnouncementTime = 0xEAC; // float32
                constexpr std::ptrdiff_t m_iAccountTerrorist = 0xEB0; // int32
                constexpr std::ptrdiff_t m_iAccountCT = 0xEB4; // int32
                constexpr std::ptrdiff_t m_iSpawnPointCount_Terrorist = 0xEB8; // int32
                constexpr std::ptrdiff_t m_iSpawnPointCount_CT = 0xEBC; // int32
                constexpr std::ptrdiff_t m_iMaxNumTerrorists = 0xEC0; // int32
                constexpr std::ptrdiff_t m_iMaxNumCTs = 0xEC4; // int32
                constexpr std::ptrdiff_t m_iLoserBonus = 0xEC8; // int32
                constexpr std::ptrdiff_t m_iLoserBonusMostRecentTeam = 0xECC; // int32
                constexpr std::ptrdiff_t m_tmNextPeriodicThink = 0xED0; // float32
                constexpr std::ptrdiff_t m_bVoiceWonMatchBragFired = 0xED4; // bool
                constexpr std::ptrdiff_t m_fWarmupNextChatNoticeTime = 0xED8; // float32
                constexpr std::ptrdiff_t m_iHostagesRescued = 0xEE0; // int32
                constexpr std::ptrdiff_t m_iHostagesTouched = 0xEE4; // int32
                constexpr std::ptrdiff_t m_flNextHostageAnnouncement = 0xEE8; // float32
                constexpr std::ptrdiff_t m_bNoTerroristsKilled = 0xEEC; // bool
                constexpr std::ptrdiff_t m_bNoCTsKilled = 0xEED; // bool
                constexpr std::ptrdiff_t m_bNoEnemiesKilled = 0xEEE; // bool
                constexpr std::ptrdiff_t m_bCanDonateWeapons = 0xEEF; // bool
                constexpr std::ptrdiff_t m_firstKillTime = 0xEF4; // float32
                constexpr std::ptrdiff_t m_firstBloodTime = 0xEFC; // float32
                constexpr std::ptrdiff_t m_hostageWasInjured = 0xF18; // bool
                constexpr std::ptrdiff_t m_hostageWasKilled = 0xF19; // bool
                constexpr std::ptrdiff_t m_bVoteCalled = 0xF28; // bool
                constexpr std::ptrdiff_t m_bServerVoteOnReset = 0xF29; // bool
                constexpr std::ptrdiff_t m_flVoteCheckThrottle = 0xF2C; // float32
                constexpr std::ptrdiff_t m_bBuyTimeEnded = 0xF30; // bool
                constexpr std::ptrdiff_t m_nLastFreezeEndBeep = 0xF34; // int32
                constexpr std::ptrdiff_t m_bTargetBombed = 0xF38; // bool
                constexpr std::ptrdiff_t m_bBombDefused = 0xF39; // bool
                constexpr std::ptrdiff_t m_bMapHasBombZone = 0xF3A; // bool
                constexpr std::ptrdiff_t m_vecMainCTSpawnPos = 0xF58; // Vector
                constexpr std::ptrdiff_t m_CTSpawnPointsMasterList = 0xF68; // CUtlVector<SpawnPoint*>
                constexpr std::ptrdiff_t m_TerroristSpawnPointsMasterList = 0xF80; // CUtlVector<SpawnPoint*>
                constexpr std::ptrdiff_t m_bRespawningAllRespawnablePlayers = 0xF98; // bool
                constexpr std::ptrdiff_t m_iNextCTSpawnPoint = 0xF9C; // int32
                constexpr std::ptrdiff_t m_flCTSpawnPointUsedTime = 0xFA0; // float32
                constexpr std::ptrdiff_t m_iNextTerroristSpawnPoint = 0xFA4; // int32
                constexpr std::ptrdiff_t m_flTerroristSpawnPointUsedTime = 0xFA8; // float32
                constexpr std::ptrdiff_t m_CTSpawnPoints = 0xFB0; // CUtlVector<SpawnPoint*>
                constexpr std::ptrdiff_t m_TerroristSpawnPoints = 0xFC8; // CUtlVector<SpawnPoint*>
                constexpr std::ptrdiff_t m_bIsUnreservedGameServer = 0xFE0; // bool
                constexpr std::ptrdiff_t m_fAutobalanceDisplayTime = 0xFE4; // float32
                constexpr std::ptrdiff_t m_bAllowWeaponSwitch = 0x1250; // bool
                constexpr std::ptrdiff_t m_bRoundTimeWarningTriggered = 0x1251; // bool
                constexpr std::ptrdiff_t m_phaseChangeAnnouncementTime = 0x1254; // GameTime_t
                constexpr std::ptrdiff_t m_fNextUpdateTeamClanNamesTime = 0x1258; // float32
                constexpr std::ptrdiff_t m_flLastThinkTime = 0x125C; // GameTime_t
                constexpr std::ptrdiff_t m_fAccumulatedRoundOffDamage = 0x1260; // float32
                constexpr std::ptrdiff_t m_nShorthandedBonusLastEvalRound = 0x1264; // int32
                constexpr std::ptrdiff_t m_nMatchAbortedEarlyReason = 0x14E0; // int32
                constexpr std::ptrdiff_t m_bHasTriggeredRoundStartMusic = 0x14E4; // bool
                constexpr std::ptrdiff_t m_bHasTriggeredCoopSpawnReset = 0x14E5; // bool
                constexpr std::ptrdiff_t m_bSwitchingTeamsAtRoundReset = 0x14E6; // bool
                constexpr std::ptrdiff_t m_pGameModeRules = 0x1500; // CCSGameModeRules*
                constexpr std::ptrdiff_t m_BtGlobalBlackboard = 0x1508; // KeyValues3
                constexpr std::ptrdiff_t m_hPlayerResource = 0x1568; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_RetakeRules = 0x1570; // CRetakeGameRules
                constexpr std::ptrdiff_t m_GuardianBotSkillLevelMax = 0x1754; // int32
                constexpr std::ptrdiff_t m_GuardianBotSkillLevelMin = 0x1758; // int32
                constexpr std::ptrdiff_t m_arrTeamUniqueKillWeaponsMatch = 0x1760; // CUtlVector<int32>[4]
                constexpr std::ptrdiff_t m_bTeamLastKillUsedUniqueWeaponMatch = 0x17C0; // bool[4]
                constexpr std::ptrdiff_t m_nMatchEndCount = 0x17E8; // uint8
                constexpr std::ptrdiff_t m_nTTeamIntroVariant = 0x17EC; // int32
                constexpr std::ptrdiff_t m_nCTTeamIntroVariant = 0x17F0; // int32
                constexpr std::ptrdiff_t m_bTeamIntroPeriod = 0x17F4; // bool
                constexpr std::ptrdiff_t m_fTeamIntroPeriodEnd = 0x17F8; // GameTime_t
                constexpr std::ptrdiff_t m_bPlayedTeamIntroVO = 0x17FC; // bool
                constexpr std::ptrdiff_t m_iRoundEndWinnerTeam = 0x1800; // int32
                constexpr std::ptrdiff_t m_eRoundEndReason = 0x1804; // int32
                constexpr std::ptrdiff_t m_bRoundEndShowTimerDefend = 0x1808; // bool
                constexpr std::ptrdiff_t m_iRoundEndTimerTime = 0x180C; // int32
                constexpr std::ptrdiff_t m_sRoundEndFunFactToken = 0x1810; // CUtlString
                constexpr std::ptrdiff_t m_iRoundEndFunFactPlayerSlot = 0x1818; // CPlayerSlot
                constexpr std::ptrdiff_t m_iRoundEndFunFactData1 = 0x181C; // int32
                constexpr std::ptrdiff_t m_iRoundEndFunFactData2 = 0x1820; // int32
                constexpr std::ptrdiff_t m_iRoundEndFunFactData3 = 0x1824; // int32
                constexpr std::ptrdiff_t m_sRoundEndMessage = 0x1828; // CUtlString
                constexpr std::ptrdiff_t m_iRoundEndPlayerCount = 0x1830; // int32
                constexpr std::ptrdiff_t m_bRoundEndNoMusic = 0x1834; // bool
                constexpr std::ptrdiff_t m_iRoundEndLegacy = 0x1838; // int32
                constexpr std::ptrdiff_t m_nRoundEndCount = 0x183C; // uint8
                constexpr std::ptrdiff_t m_iRoundStartRoundNumber = 0x1840; // int32
                constexpr std::ptrdiff_t m_nRoundStartCount = 0x1844; // uint8
                constexpr std::ptrdiff_t m_flLastPerfSampleTime = 0x5850; // float64
                constexpr std::ptrdiff_t m_bSkipNextServerPerfSample = 0x5858; // bool
            }
            // Parent: CModelPointEntity
            // Fields count: 0
            namespace CShower {
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
            namespace CEnvCubemapFog {
                constexpr std::ptrdiff_t m_flEndDistance = 0x7A8; // float32
                constexpr std::ptrdiff_t m_flStartDistance = 0x7AC; // float32
                constexpr std::ptrdiff_t m_flFogFalloffExponent = 0x7B0; // float32
                constexpr std::ptrdiff_t m_bHeightFogEnabled = 0x7B4; // bool
                constexpr std::ptrdiff_t m_flFogHeightWidth = 0x7B8; // float32
                constexpr std::ptrdiff_t m_flFogHeightEnd = 0x7BC; // float32
                constexpr std::ptrdiff_t m_flFogHeightStart = 0x7C0; // float32
                constexpr std::ptrdiff_t m_flFogHeightExponent = 0x7C4; // float32
                constexpr std::ptrdiff_t m_flLODBias = 0x7C8; // float32
                constexpr std::ptrdiff_t m_bActive = 0x7CC; // bool
                constexpr std::ptrdiff_t m_bStartDisabled = 0x7CD; // bool
                constexpr std::ptrdiff_t m_flFogMaxOpacity = 0x7D0; // float32
                constexpr std::ptrdiff_t m_nCubemapSourceType = 0x7D4; // int32
                constexpr std::ptrdiff_t m_hSkyMaterial = 0x7D8; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_iszSkyEntity = 0x7E0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hFogCubemapTexture = 0x7E8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_bHasHeightFogEnd = 0x7F0; // bool
                constexpr std::ptrdiff_t m_bFirstTime = 0x7F1; // bool
            }
            // Parent: CBaseButton
            // Fields count: 0
            namespace CPhysicalButton {
            }
            // Parent: CSoundEventEntity
            // Fields count: 2
            namespace CSoundEventAABBEntity {
                constexpr std::ptrdiff_t m_vMins = 0x84C; // Vector
                constexpr std::ptrdiff_t m_vMaxs = 0x858; // Vector
            }
            // Parent: CModelPointEntity
            // Fields count: 15
            namespace CEnvExplosion {
                constexpr std::ptrdiff_t m_iMagnitude = 0x9F8; // int32
                constexpr std::ptrdiff_t m_flPlayerDamage = 0x9FC; // float32
                constexpr std::ptrdiff_t m_iRadiusOverride = 0xA00; // int32
                constexpr std::ptrdiff_t m_flInnerRadius = 0xA04; // float32
                constexpr std::ptrdiff_t m_spriteScale = 0xA08; // int32
                constexpr std::ptrdiff_t m_flDamageForce = 0xA0C; // float32
                constexpr std::ptrdiff_t m_hInflictor = 0xA10; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_iCustomDamageType = 0xA14; // int32
                constexpr std::ptrdiff_t m_iszExplosionType = 0xA20; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszCustomEffectName = 0xA28; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszCustomSoundName = 0xA30; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iClassIgnore = 0xA38; // Class_T
                constexpr std::ptrdiff_t m_iClassIgnore2 = 0xA3C; // Class_T
                constexpr std::ptrdiff_t m_iszEntityIgnoreName = 0xA40; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hEntityIgnore = 0xA48; // CHandle<CBaseEntity>
            }
            // Parent: CBaseFilter
            // Fields count: 1
            namespace CFilterAttributeInt {
                constexpr std::ptrdiff_t m_sAttributeName = 0x800; // CUtlStringToken
            }
            // Parent: CPlayerPawnComponent
            // Fields count: 4
            //
            // Metadata:
            // NetworkVarNames: m_bIsRescuing (bool)
            // NetworkVarNames: m_weaponPurchasesThisMatch (WeaponPurchaseTracker_t)
            // NetworkVarNames: m_weaponPurchasesThisRound (WeaponPurchaseTracker_t)
            namespace CCSPlayer_ActionTrackingServices {
                constexpr std::ptrdiff_t m_hLastWeaponBeforeC4AutoSwitch = 0x208; // CHandle<CBasePlayerWeapon>
                constexpr std::ptrdiff_t m_bIsRescuing = 0x23C; // bool
                constexpr std::ptrdiff_t m_weaponPurchasesThisMatch = 0x240; // WeaponPurchaseTracker_t
                constexpr std::ptrdiff_t m_weaponPurchasesThisRound = 0x298; // WeaponPurchaseTracker_t
            }
            // Parent: CPointEntity
            // Fields count: 6
            namespace CAISound {
                constexpr std::ptrdiff_t m_iSoundType = 0x7A8; // int32
                constexpr std::ptrdiff_t m_iSoundContext = 0x7AC; // int32
                constexpr std::ptrdiff_t m_iVolume = 0x7B0; // int32
                constexpr std::ptrdiff_t m_iSoundIndex = 0x7B4; // int32
                constexpr std::ptrdiff_t m_flDuration = 0x7B8; // float32
                constexpr std::ptrdiff_t m_iszProxyEntityName = 0x7C0; // CUtlSymbolLarge
            }
            // Parent: CBaseEntity
            // Fields count: 7
            namespace CPointEntityFinder {
                constexpr std::ptrdiff_t m_hEntity = 0x7A8; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_iFilterName = 0x7B0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hFilter = 0x7B8; // CHandle<CBaseFilter>
                constexpr std::ptrdiff_t m_iRefName = 0x7C0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hReference = 0x7C8; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_FindMethod = 0x7CC; // EntFinderMethod_t
                constexpr std::ptrdiff_t m_OnFoundEntity = 0x7D0; // CEntityIOOutput
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
                constexpr std::ptrdiff_t m_vecPanelVertices = 0x38; // CNetworkUtlVectorBase<Vector2D>
                constexpr std::ptrdiff_t m_flGlassHalfThickness = 0x50; // float32
                constexpr std::ptrdiff_t m_bHasParent = 0x54; // bool
                constexpr std::ptrdiff_t m_bParentFrozen = 0x55; // bool
                constexpr std::ptrdiff_t m_SurfacePropStringToken = 0x58; // CUtlStringToken
            }
            // Parent: CMarkupVolumeWithRef
            // Fields count: 1
            namespace CMarkupVolumeTagged_NavGame {
                constexpr std::ptrdiff_t m_bFloodFillAttribute = 0xA48; // bool
            }
            // Parent: CBaseTrigger
            // Fields count: 1
            namespace CBuyZone {
                constexpr std::ptrdiff_t m_LegacyTeamNum = 0xB9C; // int32
            }
            // Parent: CLogicalEntity
            // Fields count: 12
            namespace CPointTemplate {
                constexpr std::ptrdiff_t m_iszWorldName = 0x7A8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszSource2EntityLumpName = 0x7B0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszEntityFilterName = 0x7B8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_flTimeoutInterval = 0x7C0; // float32
                constexpr std::ptrdiff_t m_bAsynchronouslySpawnEntities = 0x7C4; // bool
                constexpr std::ptrdiff_t m_pOutputOnSpawned = 0x7C8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_clientOnlyEntityBehavior = 0x7F0; // PointTemplateClientOnlyEntityBehavior_t
                constexpr std::ptrdiff_t m_ownerSpawnGroupType = 0x7F4; // PointTemplateOwnerSpawnGroupType_t
                constexpr std::ptrdiff_t m_createdSpawnGroupHandles = 0x7F8; // CUtlVector<uint32>
                constexpr std::ptrdiff_t m_SpawnedEntityHandles = 0x810; // CUtlVector<CEntityHandle>
                constexpr std::ptrdiff_t m_ScriptSpawnCallback = 0x828; // HSCRIPT
                constexpr std::ptrdiff_t m_ScriptCallbackScope = 0x830; // HSCRIPT
            }
            // Parent: CBaseCSGrenade
            // Fields count: 0
            namespace CTripWireFire {
            }
            // Parent: CPointEntity
            // Fields count: 6
            namespace CPhysForce {
                constexpr std::ptrdiff_t m_nameAttach = 0x7B0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_force = 0x7B8; // float32
                constexpr std::ptrdiff_t m_forceTime = 0x7BC; // float32
                constexpr std::ptrdiff_t m_attachedObject = 0x7C0; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_wasRestored = 0x7C4; // bool
                constexpr std::ptrdiff_t m_integrator = 0x7C8; // CConstantForceController
            }
            // Parent: CLogicalEntity
            // Fields count: 6
            namespace CLogicDistanceAutosave {
                constexpr std::ptrdiff_t m_iszTargetEntity = 0x7A8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_flDistanceToPlayer = 0x7B0; // float32
                constexpr std::ptrdiff_t m_bForceNewLevelUnit = 0x7B4; // bool
                constexpr std::ptrdiff_t m_bCheckCough = 0x7B5; // bool
                constexpr std::ptrdiff_t m_bThinkDangerous = 0x7B6; // bool
                constexpr std::ptrdiff_t m_flDangerousTime = 0x7B8; // float32
            }
            // Parent: CCSWeaponBaseGun
            // Fields count: 0
            namespace CWeaponSSG08 {
            }
            // Parent: CCSWeaponBase
            // Fields count: 0
            namespace CBreachCharge {
            }
            // Parent: CLogicalEntity
            // Fields count: 4
            namespace CLogicBranch {
                constexpr std::ptrdiff_t m_bInValue = 0x7A8; // bool
                constexpr std::ptrdiff_t m_Listeners = 0x7B0; // CUtlVector<CHandle<CBaseEntity>>
                constexpr std::ptrdiff_t m_OnTrue = 0x7C8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnFalse = 0x7F0; // CEntityIOOutput
            }
            // Parent: CCSWeaponBaseGun
            // Fields count: 0
            namespace CWeaponUMP45 {
            }
            // Parent: CSprite
            // Fields count: 0
            namespace CSpriteAlias_env_glow {
            }
            // Parent: CBaseToggle
            // Fields count: 24
            //
            // Metadata:
            // NetworkVarNames: m_glowEntity (CHandle<CBaseModelEntity>)
            // NetworkVarNames: m_usable (bool)
            // NetworkVarNames: m_szDisplayText (string_t)
            namespace CBaseButton {
                constexpr std::ptrdiff_t m_angMoveEntitySpace = 0xA78; // QAngle
                constexpr std::ptrdiff_t m_fStayPushed = 0xA84; // bool
                constexpr std::ptrdiff_t m_fRotating = 0xA85; // bool
                constexpr std::ptrdiff_t m_ls = 0xA88; // locksound_t
                constexpr std::ptrdiff_t m_sUseSound = 0xAA8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_sLockedSound = 0xAB0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_sUnlockedSound = 0xAB8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bLocked = 0xAC0; // bool
                constexpr std::ptrdiff_t m_bDisabled = 0xAC1; // bool
                constexpr std::ptrdiff_t m_flUseLockedTime = 0xAC4; // GameTime_t
                constexpr std::ptrdiff_t m_bSolidBsp = 0xAC8; // bool
                constexpr std::ptrdiff_t m_OnDamaged = 0xAD0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnPressed = 0xAF8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnUseLocked = 0xB20; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnIn = 0xB48; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnOut = 0xB70; // CEntityIOOutput
                constexpr std::ptrdiff_t m_nState = 0xB98; // int32
                constexpr std::ptrdiff_t m_hConstraint = 0xB9C; // CEntityHandle
                constexpr std::ptrdiff_t m_hConstraintParent = 0xBA0; // CEntityHandle
                constexpr std::ptrdiff_t m_bForceNpcExclude = 0xBA4; // bool
                constexpr std::ptrdiff_t m_sGlowEntity = 0xBA8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_glowEntity = 0xBB0; // CHandle<CBaseModelEntity>
                constexpr std::ptrdiff_t m_usable = 0xBB4; // bool
                constexpr std::ptrdiff_t m_szDisplayText = 0xBB8; // CUtlSymbolLarge
            }
            // Parent: CPhysConstraint
            // Fields count: 6
            namespace CPhysLength {
                constexpr std::ptrdiff_t m_offset = 0x800; // Vector[2]
                constexpr std::ptrdiff_t m_vecAttach = 0x818; // Vector
                constexpr std::ptrdiff_t m_addLength = 0x824; // float32
                constexpr std::ptrdiff_t m_minLength = 0x828; // float32
                constexpr std::ptrdiff_t m_totalLength = 0x82C; // float32
                constexpr std::ptrdiff_t m_bEnableCollision = 0x830; // bool
            }
            // Parent: CPointEntity
            // Fields count: 4
            namespace CBlood {
                constexpr std::ptrdiff_t m_vecSprayAngles = 0x7A8; // QAngle
                constexpr std::ptrdiff_t m_vecSprayDir = 0x7B4; // Vector
                constexpr std::ptrdiff_t m_flAmount = 0x7C0; // float32
                constexpr std::ptrdiff_t m_Color = 0x7C4; // int32
            }
            // Parent: CLogicalEntity
            // Fields count: 4
            //
            // Metadata:
            // NetworkVarNames: m_fadeColor (Color)
            namespace CEnvFade {
                constexpr std::ptrdiff_t m_fadeColor = 0x7A8; // Color
                constexpr std::ptrdiff_t m_Duration = 0x7AC; // float32
                constexpr std::ptrdiff_t m_HoldDuration = 0x7B0; // float32
                constexpr std::ptrdiff_t m_OnBeginFade = 0x7B8; // CEntityIOOutput
            }
            // Parent: CCSWeaponBaseGun
            // Fields count: 0
            namespace CWeaponUSPSilencer {
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
            namespace CSprite {
                constexpr std::ptrdiff_t m_hSpriteMaterial = 0x9F8; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_hAttachedToEntity = 0xA00; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_nAttachment = 0xA04; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_flSpriteFramerate = 0xA08; // float32
                constexpr std::ptrdiff_t m_flFrame = 0xA0C; // float32
                constexpr std::ptrdiff_t m_flDieTime = 0xA10; // GameTime_t
                constexpr std::ptrdiff_t m_nBrightness = 0xA20; // uint32
                constexpr std::ptrdiff_t m_flBrightnessDuration = 0xA24; // float32
                constexpr std::ptrdiff_t m_flSpriteScale = 0xA28; // float32
                constexpr std::ptrdiff_t m_flScaleDuration = 0xA2C; // float32
                constexpr std::ptrdiff_t m_bWorldSpaceScale = 0xA30; // bool
                constexpr std::ptrdiff_t m_flGlowProxySize = 0xA34; // float32
                constexpr std::ptrdiff_t m_flHDRColorScale = 0xA38; // float32
                constexpr std::ptrdiff_t m_flLastTime = 0xA3C; // GameTime_t
                constexpr std::ptrdiff_t m_flMaxFrame = 0xA40; // float32
                constexpr std::ptrdiff_t m_flStartScale = 0xA44; // float32
                constexpr std::ptrdiff_t m_flDestScale = 0xA48; // float32
                constexpr std::ptrdiff_t m_flScaleTimeStart = 0xA4C; // GameTime_t
                constexpr std::ptrdiff_t m_nStartBrightness = 0xA50; // int32
                constexpr std::ptrdiff_t m_nDestBrightness = 0xA54; // int32
                constexpr std::ptrdiff_t m_flBrightnessTimeStart = 0xA58; // GameTime_t
                constexpr std::ptrdiff_t m_nSpriteWidth = 0xA5C; // int32
                constexpr std::ptrdiff_t m_nSpriteHeight = 0xA60; // int32
            }
            // Parent: CBaseTrigger
            // Fields count: 0
            namespace CTriggerGravity {
            }
            // Parent: CBaseTrigger
            // Fields count: 7
            namespace CChangeLevel {
                constexpr std::ptrdiff_t m_sMapName = 0xBA0; // CUtlString
                constexpr std::ptrdiff_t m_sLandmarkName = 0xBA8; // CUtlString
                constexpr std::ptrdiff_t m_OnChangeLevel = 0xBB0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_bTouched = 0xBD8; // bool
                constexpr std::ptrdiff_t m_bNoTouch = 0xBD9; // bool
                constexpr std::ptrdiff_t m_bNewChapter = 0xBDA; // bool
                constexpr std::ptrdiff_t m_bOnChangeLevelFired = 0xBDB; // bool
            }
            // Parent: CBaseTrigger
            // Fields count: 14
            namespace CTriggerLerpObject {
                constexpr std::ptrdiff_t m_iszLerpTarget = 0xBA0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hLerpTarget = 0xBA8; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_iszLerpTargetAttachment = 0xBB0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hLerpTargetAttachment = 0xBB8; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_flLerpDuration = 0xBBC; // float32
                constexpr std::ptrdiff_t m_bLerpRestoreMoveType = 0xBC0; // bool
                constexpr std::ptrdiff_t m_bSingleLerpObject = 0xBC1; // bool
                constexpr std::ptrdiff_t m_vecLerpingObjects = 0xBC8; // CUtlVector<lerpdata_t>
                constexpr std::ptrdiff_t m_iszLerpEffect = 0xBE0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszLerpSound = 0xBE8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bAttachTouchingObject = 0xBF0; // bool
                constexpr std::ptrdiff_t m_hEntityToWaitForDisconnect = 0xBF4; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_OnLerpStarted = 0xBF8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnLerpFinished = 0xC20; // CEntityIOOutput
            }
            // Parent: CBaseToggle
            // Fields count: 11
            //
            // Metadata:
            // MNetworkIncludeByName
            // NetworkVarNames: m_bDisabled (bool)
            // NetworkVarNames: m_bClientSidePredicted (bool)
            namespace CBaseTrigger {
                constexpr std::ptrdiff_t m_bDisabled = 0xA78; // bool
                constexpr std::ptrdiff_t m_iFilterName = 0xA80; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hFilter = 0xA88; // CHandle<CBaseFilter>
                constexpr std::ptrdiff_t m_OnStartTouch = 0xA90; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnStartTouchAll = 0xAB8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnEndTouch = 0xAE0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnEndTouchAll = 0xB08; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnTouching = 0xB30; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnNotTouching = 0xB58; // CEntityIOOutput
                constexpr std::ptrdiff_t m_hTouchingEntities = 0xB80; // CUtlVector<CHandle<CBaseEntity>>
                constexpr std::ptrdiff_t m_bClientSidePredicted = 0xB98; // bool
            }
            // Parent: CPointEntity
            // Fields count: 0
            namespace CLogicScript {
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
            namespace CEconEntity {
                constexpr std::ptrdiff_t m_AttributeManager = 0xC90; // CAttributeContainer
                constexpr std::ptrdiff_t m_OriginalOwnerXuidLow = 0xF58; // uint32
                constexpr std::ptrdiff_t m_OriginalOwnerXuidHigh = 0xF5C; // uint32
                constexpr std::ptrdiff_t m_nFallbackPaintKit = 0xF60; // int32
                constexpr std::ptrdiff_t m_nFallbackSeed = 0xF64; // int32
                constexpr std::ptrdiff_t m_flFallbackWear = 0xF68; // float32
                constexpr std::ptrdiff_t m_nFallbackStatTrak = 0xF6C; // int32
                constexpr std::ptrdiff_t m_hOldProvidee = 0xF70; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_iOldOwnerClass = 0xF74; // int32
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
            // Parent: CBaseEntity
            // Fields count: 0
            namespace CServerOnlyEntity {
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
            // Parent: CPointEntity
            // Fields count: 0
            namespace CPointBroadcastClientCommand {
            }
            // Parent: CBaseModelEntity
            // Fields count: 32
            namespace CFuncShatterglass {
                constexpr std::ptrdiff_t m_hGlassMaterialDamaged = 0x9F8; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_hGlassMaterialUndamaged = 0xA00; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_hConcreteMaterialEdgeFace = 0xA08; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_hConcreteMaterialEdgeCaps = 0xA10; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_hConcreteMaterialEdgeFins = 0xA18; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_matPanelTransform = 0xA20; // matrix3x4_t
                constexpr std::ptrdiff_t m_matPanelTransformWsTemp = 0xA50; // matrix3x4_t
                constexpr std::ptrdiff_t m_vecShatterGlassShards = 0xA80; // CUtlVector<uint32>
                constexpr std::ptrdiff_t m_PanelSize = 0xA98; // Vector2D
                constexpr std::ptrdiff_t m_vecPanelNormalWs = 0xAA0; // Vector
                constexpr std::ptrdiff_t m_nNumShardsEverCreated = 0xAAC; // int32
                constexpr std::ptrdiff_t m_flLastShatterSoundEmitTime = 0xAB0; // GameTime_t
                constexpr std::ptrdiff_t m_flLastCleanupTime = 0xAB4; // GameTime_t
                constexpr std::ptrdiff_t m_flInitAtTime = 0xAB8; // GameTime_t
                constexpr std::ptrdiff_t m_flGlassThickness = 0xABC; // float32
                constexpr std::ptrdiff_t m_flSpawnInvulnerability = 0xAC0; // float32
                constexpr std::ptrdiff_t m_bBreakSilent = 0xAC4; // bool
                constexpr std::ptrdiff_t m_bBreakShardless = 0xAC5; // bool
                constexpr std::ptrdiff_t m_bBroken = 0xAC6; // bool
                constexpr std::ptrdiff_t m_bHasRateLimitedShards = 0xAC7; // bool
                constexpr std::ptrdiff_t m_bGlassNavIgnore = 0xAC8; // bool
                constexpr std::ptrdiff_t m_bGlassInFrame = 0xAC9; // bool
                constexpr std::ptrdiff_t m_bStartBroken = 0xACA; // bool
                constexpr std::ptrdiff_t m_iInitialDamageType = 0xACB; // uint8
                constexpr std::ptrdiff_t m_szDamagePositioningEntityName01 = 0xAD0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_szDamagePositioningEntityName02 = 0xAD8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_szDamagePositioningEntityName03 = 0xAE0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_szDamagePositioningEntityName04 = 0xAE8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_vInitialDamagePositions = 0xAF0; // CUtlVector<Vector>
                constexpr std::ptrdiff_t m_vExtraDamagePositions = 0xB08; // CUtlVector<Vector>
                constexpr std::ptrdiff_t m_OnBroken = 0xB20; // CEntityIOOutput
                constexpr std::ptrdiff_t m_iSurfaceType = 0xB49; // uint8
            }
            // Parent: CBaseButton
            // Fields count: 0
            namespace CRotButton {
            }
            // Parent: CCSWeaponBaseGun
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_fFireTime (GameTime_t)
            namespace CWeaponTaser {
                constexpr std::ptrdiff_t m_fFireTime = 0x11B4; // GameTime_t
            }
            // Parent: CBaseAnimGraph
            // Fields count: 0
            namespace CWaterBullet {
            }
            // Parent: CBaseModelEntity
            // Fields count: 1
            namespace CMarkupVolume {
                constexpr std::ptrdiff_t m_bEnabled = 0x9F8; // bool
            }
            // Parent: CPointEntity
            // Fields count: 6
            namespace CMessage {
                constexpr std::ptrdiff_t m_iszMessage = 0x7A8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_MessageVolume = 0x7B0; // float32
                constexpr std::ptrdiff_t m_MessageAttenuation = 0x7B4; // int32
                constexpr std::ptrdiff_t m_Radius = 0x7B8; // float32
                constexpr std::ptrdiff_t m_sNoise = 0x7C0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_OnShowMessage = 0x7C8; // CEntityIOOutput
            }
            // Parent: CLogicalEntity
            // Fields count: 5
            //
            // Metadata:
            // NetworkVarNames: m_bEnabled (bool)
            namespace CLogicGameEventListener {
                constexpr std::ptrdiff_t m_OnEventFired = 0x7B8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_iszGameEventName = 0x7E0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszGameEventItem = 0x7E8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bEnabled = 0x7F0; // bool
                constexpr std::ptrdiff_t m_bStartDisabled = 0x7F1; // bool
            }
            // Parent: CBaseModelEntity
            // Fields count: 21
            namespace CBreakable {
                constexpr std::ptrdiff_t m_Material = 0xA08; // Materials
                constexpr std::ptrdiff_t m_hBreaker = 0xA0C; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_Explosion = 0xA10; // Explosions
                constexpr std::ptrdiff_t m_iszSpawnObject = 0xA18; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_flPressureDelay = 0xA20; // float32
                constexpr std::ptrdiff_t m_iMinHealthDmg = 0xA24; // int32
                constexpr std::ptrdiff_t m_iszPropData = 0xA28; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_impactEnergyScale = 0xA30; // float32
                constexpr std::ptrdiff_t m_nOverrideBlockLOS = 0xA34; // EOverrideBlockLOS_t
                constexpr std::ptrdiff_t m_OnBreak = 0xA38; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnHealthChanged = 0xA60; // CEntityOutputTemplate<float32>
                constexpr std::ptrdiff_t m_flDmgModBullet = 0xA88; // float32
                constexpr std::ptrdiff_t m_flDmgModClub = 0xA8C; // float32
                constexpr std::ptrdiff_t m_flDmgModExplosive = 0xA90; // float32
                constexpr std::ptrdiff_t m_flDmgModFire = 0xA94; // float32
                constexpr std::ptrdiff_t m_iszPhysicsDamageTableName = 0xA98; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszBasePropData = 0xAA0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iInteractions = 0xAA8; // int32
                constexpr std::ptrdiff_t m_PerformanceMode = 0xAAC; // PerformanceMode_t
                constexpr std::ptrdiff_t m_hPhysicsAttacker = 0xAB0; // CHandle<CBasePlayerPawn>
                constexpr std::ptrdiff_t m_flLastPhysicsInfluenceTime = 0xAB4; // GameTime_t
            }
            // Parent: CCSGameModeScript
            // Fields count: 1
            //
            // Metadata:
            // MPulseInstanceDomainInfo
            // MPulseLibraryBindings
            // MPulseDomainOptInFeatureTag
            namespace CCSDeathmatchScript {
                constexpr std::ptrdiff_t m_pOuter = 0xD8; // CCSGameModeRules_Deathmatch*
            }
            // Parent: CRulePointEntity
            // Fields count: 2
            namespace CGameText {
                constexpr std::ptrdiff_t m_iszMessage = 0xA08; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_textParms = 0xA10; // hudtextparms_t
            }
        }
    }
}
