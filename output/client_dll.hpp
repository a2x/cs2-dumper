// Generated using https://github.com/a2x/cs2-dumper
// 2025-10-29 20:26:00.560999200 UTC

#pragma once

#include <cstddef>

namespace cs2_dumper {
    namespace schemas {
        // Module: client.dll
        // Class count: 212
        // Enum count: 4
        namespace client_dll {
            // Alignment: 4
            // Member count: 30
            enum class CBasePlayerWeaponVData : uint32_t {
                 = 0x0,
                 = 0x0,
                 = 0x0,
                 = 0x0,
                 = 0x0,
                 = 0x0,
                 = 0x0,
                 = 0x0,
                 = 0x0,
                 = 0x0,
                 = 0x0,
                 = 0x0,
                 = 0x0,
                 = 0x0,
                 = 0x0,
                 = 0x0,
                 = 0x0,
                 = 0x0,
                 = 0x0,
                 = 0x0,
                 = 0x0,
                 = 0x0,
                 = 0x0,
                 = 0x0,
                 = 0x0,
                 = 0x0,
                 = 0x0,
                 = 0x0,
                 = 0x0,
                 = 0x0
            };
            // Parent: C_Inferno
            // Field count: 0
            namespace C_FireCrackerBlast {
            }
            // Parent: CPlayerPawnComponent
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_hPlayerPing (CHandle<CPlayerPing>)
            namespace CCSPlayer_PingServices {
                constexpr std::ptrdiff_t m_hPlayerPing = 0x40; // CHandle<C_PlayerPing>
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
            namespace CEconItemAttribute {
                constexpr std::ptrdiff_t m_iAttributeDefinitionIndex = 0x30; // uint16
                constexpr std::ptrdiff_t m_flValue = 0x34; // float32
                constexpr std::ptrdiff_t m_flInitialValue = 0x38; // float32
                constexpr std::ptrdiff_t m_nRefundableCurrency = 0x3C; // int32
                constexpr std::ptrdiff_t m_bSetBonus = 0x40; // bool
            }
            // Parent: None
            // Field count: 0
            namespace CBaseTriggerAPI {
            }
            // Parent: None
            // Field count: 15
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
                constexpr std::ptrdiff_t m_iInitialWindDir = 0x2A; // uint16
                constexpr std::ptrdiff_t m_flInitialWindSpeed = 0x2C; // float32
                constexpr std::ptrdiff_t m_location = 0x30; // Vector
                constexpr std::ptrdiff_t m_hEntOwner = 0x3C; // CHandle<C_BaseEntity>
            }
            // Parent: C_BaseEntity
            // Field count: 4
            //
            // Metadata:
            // NetworkVarNames: m_skyboxData (sky3dparams_t)
            // NetworkVarNames: m_skyboxSlotToken (CUtlStringToken)
            namespace C_SkyCamera {
                constexpr std::ptrdiff_t m_skyboxData = 0x5F8; // sky3dparams_t
                constexpr std::ptrdiff_t m_skyboxSlotToken = 0x688; // CUtlStringToken
                constexpr std::ptrdiff_t m_bUseAngles = 0x68C; // bool
                constexpr std::ptrdiff_t m_pNext = 0x690; // C_SkyCamera*
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Base {
                constexpr std::ptrdiff_t m_nEditorNodeID = 0x8; // PulseDocNodeID_t
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
            namespace C_EnvCubemapFog {
                constexpr std::ptrdiff_t m_flEndDistance = 0x5F8; // float32
                constexpr std::ptrdiff_t m_flStartDistance = 0x5FC; // float32
                constexpr std::ptrdiff_t m_flFogFalloffExponent = 0x600; // float32
                constexpr std::ptrdiff_t m_bHeightFogEnabled = 0x604; // bool
                constexpr std::ptrdiff_t m_flFogHeightWidth = 0x608; // float32
                constexpr std::ptrdiff_t m_flFogHeightEnd = 0x60C; // float32
                constexpr std::ptrdiff_t m_flFogHeightStart = 0x610; // float32
                constexpr std::ptrdiff_t m_flFogHeightExponent = 0x614; // float32
                constexpr std::ptrdiff_t m_flLODBias = 0x618; // float32
                constexpr std::ptrdiff_t m_bActive = 0x61C; // bool
                constexpr std::ptrdiff_t m_bStartDisabled = 0x61D; // bool
                constexpr std::ptrdiff_t m_flFogMaxOpacity = 0x620; // float32
                constexpr std::ptrdiff_t m_nCubemapSourceType = 0x624; // int32
                constexpr std::ptrdiff_t m_hSkyMaterial = 0x628; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_iszSkyEntity = 0x630; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hFogCubemapTexture = 0x638; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_bHasHeightFogEnd = 0x640; // bool
                constexpr std::ptrdiff_t m_bFirstTime = 0x641; // bool
            }
            // Parent: C_CSGO_TeamSelectCharacterPosition
            // Field count: 0
            namespace C_CSGO_TeamSelectTerroristPosition {
            }
            // Parent: None
            // Field count: 5
            namespace C_BaseFlex__Emphasized_Phoneme {
                constexpr std::ptrdiff_t m_sClassName = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_flAmount = 0x18; // float32
                constexpr std::ptrdiff_t m_bRequired = 0x1C; // bool
                constexpr std::ptrdiff_t m_bBasechecked = 0x1D; // bool
                constexpr std::ptrdiff_t m_bValid = 0x1E; // bool
            }
            // Parent: CBaseAnimGraph
            // Field count: 0
            namespace C_HostageCarriableProp {
            }
            // Parent: None
            // Field count: 6
            namespace C_BulletHitModel {
                constexpr std::ptrdiff_t m_matLocal = 0x1158; // matrix3x4_t
                constexpr std::ptrdiff_t m_iBoneIndex = 0x1188; // int32
                constexpr std::ptrdiff_t m_hPlayerParent = 0x118C; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_bIsHit = 0x1190; // bool
                constexpr std::ptrdiff_t m_flTimeCreated = 0x1194; // float32
                constexpr std::ptrdiff_t m_vecStartPos = 0x1198; // Vector
            }
            // Parent: C_FuncBrush
            // Field count: 3
            //
            // Metadata:
            // NetworkVarNames: m_EffectName (string_t)
            // NetworkVarNames: m_bState (bool)
            namespace C_FuncElectrifiedVolume {
                constexpr std::ptrdiff_t m_nAmbientEffect = 0xEB0; // ParticleIndex_t
                constexpr std::ptrdiff_t m_EffectName = 0xEB8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bState = 0xEC0; // bool
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
            namespace C_MapVetoPickController {
                constexpr std::ptrdiff_t m_nDraftType = 0x608; // int32
                constexpr std::ptrdiff_t m_nTeamWinningCoinToss = 0x60C; // int32
                constexpr std::ptrdiff_t m_nTeamWithFirstChoice = 0x610; // int32[64]
                constexpr std::ptrdiff_t m_nVoteMapIdsList = 0x710; // int32[7]
                constexpr std::ptrdiff_t m_nAccountIDs = 0x72C; // int32[64]
                constexpr std::ptrdiff_t m_nMapId0 = 0x82C; // int32[64]
                constexpr std::ptrdiff_t m_nMapId1 = 0x92C; // int32[64]
                constexpr std::ptrdiff_t m_nMapId2 = 0xA2C; // int32[64]
                constexpr std::ptrdiff_t m_nMapId3 = 0xB2C; // int32[64]
                constexpr std::ptrdiff_t m_nMapId4 = 0xC2C; // int32[64]
                constexpr std::ptrdiff_t m_nMapId5 = 0xD2C; // int32[64]
                constexpr std::ptrdiff_t m_nStartingSide0 = 0xE2C; // int32[64]
                constexpr std::ptrdiff_t m_nCurrentPhase = 0xF2C; // int32
                constexpr std::ptrdiff_t m_nPhaseStartTick = 0xF30; // int32
                constexpr std::ptrdiff_t m_nPhaseDurationTicks = 0xF34; // int32
                constexpr std::ptrdiff_t m_nPostDataUpdateTick = 0xF38; // int32
                constexpr std::ptrdiff_t m_bDisabledHud = 0xF3C; // bool
            }
            // Parent: None
            // Field count: 0
            namespace C_BaseEntityAPI {
            }
            // Parent: C_PointClientUIWorldPanel
            // Field count: 4
            namespace CPointOffScreenIndicatorUi {
                constexpr std::ptrdiff_t m_bBeenEnabled = 0x1100; // bool
                constexpr std::ptrdiff_t m_bHide = 0x1101; // bool
                constexpr std::ptrdiff_t m_flSeenTargetTime = 0x1104; // float32
                constexpr std::ptrdiff_t m_pTargetPanel = 0x1108; // C_PointClientUIWorldPanel*
            }
            // Parent: CPlayer_UseServices
            // Field count: 0
            namespace CCSObserver_UseServices {
            }
            // Parent: C_BaseTrigger
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
            namespace C_PostProcessingVolume {
                constexpr std::ptrdiff_t m_hPostSettings = 0x1000; // CStrongHandle<InfoForResourceTypeCPostProcessingResource>
                constexpr std::ptrdiff_t m_flFadeDuration = 0x1008; // float32
                constexpr std::ptrdiff_t m_flMinLogExposure = 0x100C; // float32
                constexpr std::ptrdiff_t m_flMaxLogExposure = 0x1010; // float32
                constexpr std::ptrdiff_t m_flMinExposure = 0x1014; // float32
                constexpr std::ptrdiff_t m_flMaxExposure = 0x1018; // float32
                constexpr std::ptrdiff_t m_flExposureCompensation = 0x101C; // float32
                constexpr std::ptrdiff_t m_flExposureFadeSpeedUp = 0x1020; // float32
                constexpr std::ptrdiff_t m_flExposureFadeSpeedDown = 0x1024; // float32
                constexpr std::ptrdiff_t m_flTonemapEVSmoothingRange = 0x1028; // float32
                constexpr std::ptrdiff_t m_bMaster = 0x102C; // bool
                constexpr std::ptrdiff_t m_bExposureControl = 0x102D; // bool
            }
            // Parent: CPlayer_UseServices
            // Field count: 0
            namespace CCSPlayer_UseServices {
            }
            // Parent: C_BasePlayerPawn
            // Field count: 26
            //
            // Metadata:
            // MNetworkExcludeByName
            // MNetworkExcludeByUserGroup
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // NetworkVarNames: m_pPingServices (CCSPlayer_PingServices*)
            // NetworkVarNames: m_iPlayerState (CSPlayerState)
            // NetworkVarNames: m_bHasMovedSinceSpawn (bool)
            // NetworkVarNames: m_iProgressBarDuration (int)
            // NetworkVarNames: m_flProgressBarStartTime (float)
            // NetworkVarNames: m_flFlashMaxAlpha (float)
            // NetworkVarNames: m_flFlashDuration (float)
            // NetworkVarNames: m_hOriginalController (CHandle<CCSPlayerController>)
            namespace C_CSPlayerPawnBase {
                constexpr std::ptrdiff_t m_pPingServices = 0x15D8; // CCSPlayer_PingServices*
                constexpr std::ptrdiff_t m_previousPlayerState = 0x15E0; // CSPlayerState
                constexpr std::ptrdiff_t m_iPlayerState = 0x15E4; // CSPlayerState
                constexpr std::ptrdiff_t m_bHasMovedSinceSpawn = 0x15E8; // bool
                constexpr std::ptrdiff_t m_flLastSpawnTimeIndex = 0x15EC; // GameTime_t
                constexpr std::ptrdiff_t m_iProgressBarDuration = 0x15F0; // int32
                constexpr std::ptrdiff_t m_flProgressBarStartTime = 0x15F4; // float32
                constexpr std::ptrdiff_t m_flClientDeathTime = 0x15F8; // GameTime_t
                constexpr std::ptrdiff_t m_flFlashBangTime = 0x15FC; // float32
                constexpr std::ptrdiff_t m_flFlashScreenshotAlpha = 0x1600; // float32
                constexpr std::ptrdiff_t m_flFlashOverlayAlpha = 0x1604; // float32
                constexpr std::ptrdiff_t m_bFlashBuildUp = 0x1608; // bool
                constexpr std::ptrdiff_t m_bFlashDspHasBeenCleared = 0x1609; // bool
                constexpr std::ptrdiff_t m_bFlashScreenshotHasBeenGrabbed = 0x160A; // bool
                constexpr std::ptrdiff_t m_flFlashMaxAlpha = 0x160C; // float32
                constexpr std::ptrdiff_t m_flFlashDuration = 0x1610; // float32
                constexpr std::ptrdiff_t m_flClientHealthFadeChangeTimestamp = 0x1614; // GameTime_t
                constexpr std::ptrdiff_t m_nClientHealthFadeParityValue = 0x1618; // int32
                constexpr std::ptrdiff_t m_fNextThinkPushAway = 0x161C; // float32
                constexpr std::ptrdiff_t m_flCurrentMusicStartTime = 0x1624; // float32
                constexpr std::ptrdiff_t m_flMusicRoundStartTime = 0x1628; // float32
                constexpr std::ptrdiff_t m_bDeferStartMusicOnWarmup = 0x162C; // bool
                constexpr std::ptrdiff_t m_flLastSmokeOverlayAlpha = 0x1630; // float32
                constexpr std::ptrdiff_t m_flLastSmokeAge = 0x1634; // float32
                constexpr std::ptrdiff_t m_vLastSmokeOverlayColor = 0x1638; // Vector
                constexpr std::ptrdiff_t m_hOriginalController = 0x1660; // CHandle<CCSPlayerController>
            }
            // Parent: C_CSWeaponBase
            // Field count: 10
            //
            // Metadata:
            // NetworkVarNames: m_bStartedArming (bool)
            // NetworkVarNames: m_fArmedTime (GameTime_t)
            // NetworkVarNames: m_bBombPlacedAnimation (bool)
            // NetworkVarNames: m_bIsPlantingViaUse (bool)
            // NetworkVarNames: m_entitySpottedState (EntitySpottedState_t)
            namespace C_C4 {
                constexpr std::ptrdiff_t m_activeLightParticleIndex = 0x1F80; // ParticleIndex_t
                constexpr std::ptrdiff_t m_eActiveLightEffect = 0x1F84; // C4LightEffect_t
                constexpr std::ptrdiff_t m_bStartedArming = 0x1F88; // bool
                constexpr std::ptrdiff_t m_fArmedTime = 0x1F8C; // GameTime_t
                constexpr std::ptrdiff_t m_bBombPlacedAnimation = 0x1F90; // bool
                constexpr std::ptrdiff_t m_bIsPlantingViaUse = 0x1F91; // bool
                constexpr std::ptrdiff_t m_entitySpottedState = 0x1F98; // EntitySpottedState_t
                constexpr std::ptrdiff_t m_nSpotRules = 0x1FB0; // int32
                constexpr std::ptrdiff_t m_bPlayedArmingBeeps = 0x1FB4; // bool[7]
                constexpr std::ptrdiff_t m_bBombPlanted = 0x1FBB; // bool
            }
            // Parent: None
            // Field count: 7
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
            // Field count: 6
            //
            // Metadata:
            // NetworkVarNames: m_nMatchSeed (int)
            // NetworkVarNames: m_bBlockersPresent (bool)
            // NetworkVarNames: m_bRoundInProgress (bool)
            // NetworkVarNames: m_iFirstSecondHalfRound (int)
            // NetworkVarNames: m_iBombSite (int)
            // NetworkVarNames: m_hBombPlanter (CHandle<CCSPlayerPawn>)
            namespace C_RetakeGameRules {
                constexpr std::ptrdiff_t m_nMatchSeed = 0xF8; // int32
                constexpr std::ptrdiff_t m_bBlockersPresent = 0xFC; // bool
                constexpr std::ptrdiff_t m_bRoundInProgress = 0xFD; // bool
                constexpr std::ptrdiff_t m_iFirstSecondHalfRound = 0x100; // int32
                constexpr std::ptrdiff_t m_iBombSite = 0x104; // int32
                constexpr std::ptrdiff_t m_hBombPlanter = 0x108; // CHandle<C_CSPlayerPawn>
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPulseEditorHeaderIcon
            // MPropertyFriendlyName
            namespace CPulseCell_WaitForObservable {
                constexpr std::ptrdiff_t m_Condition = 0x48; // PulseObservableBoolExpression_t
                constexpr std::ptrdiff_t m_OnTrue = 0xC0; // CPulse_ResumePoint
            }
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            namespace C_WeaponAWP {
            }
            // Parent: C_BaseToggle
            // Field count: 3
            //
            // Metadata:
            // NetworkVarNames: m_glowEntity (CHandle<C_BaseModelEntity>)
            // NetworkVarNames: m_usable (bool)
            // NetworkVarNames: m_szDisplayText (string_t)
            namespace C_BaseButton {
                constexpr std::ptrdiff_t m_glowEntity = 0xEB0; // CHandle<C_BaseModelEntity>
                constexpr std::ptrdiff_t m_usable = 0xEB4; // bool
                constexpr std::ptrdiff_t m_szDisplayText = 0xEB8; // CUtlSymbolLarge
            }
            // Parent: CPlayer_ObserverServices
            // Field count: 1
            namespace CCSObserver_ObserverServices {
                constexpr std::ptrdiff_t m_obsInterpState = 0x5C; // ObserverInterpState_t
            }
            // Parent: CEntityComponent
            // Field count: 1
            namespace CHitboxComponent {
                constexpr std::ptrdiff_t m_flBoundsExpandRadius = 0x14; // float32
            }
            // Parent: C_BaseEntity
            // Field count: 0
            namespace C_CSMinimapBoundary {
            }
            // Parent: CEntityComponent
            // Field count: 0
            namespace CPathQueryComponent {
            }
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            namespace C_WeaponUMP45 {
            }
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            namespace C_WeaponG3SG1 {
            }
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            namespace C_WeaponFamas {
            }
            // Parent: C_BaseEntity
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
            namespace C_EnvVolumetricFogController {
                constexpr std::ptrdiff_t m_flScattering = 0x5F8; // float32
                constexpr std::ptrdiff_t m_TintColor = 0x5FC; // Color
                constexpr std::ptrdiff_t m_flAnisotropy = 0x600; // float32
                constexpr std::ptrdiff_t m_flFadeSpeed = 0x604; // float32
                constexpr std::ptrdiff_t m_flDrawDistance = 0x608; // float32
                constexpr std::ptrdiff_t m_flFadeInStart = 0x60C; // float32
                constexpr std::ptrdiff_t m_flFadeInEnd = 0x610; // float32
                constexpr std::ptrdiff_t m_flIndirectStrength = 0x614; // float32
                constexpr std::ptrdiff_t m_nVolumeDepth = 0x618; // int32
                constexpr std::ptrdiff_t m_fFirstVolumeSliceThickness = 0x61C; // float32
                constexpr std::ptrdiff_t m_nIndirectTextureDimX = 0x620; // int32
                constexpr std::ptrdiff_t m_nIndirectTextureDimY = 0x624; // int32
                constexpr std::ptrdiff_t m_nIndirectTextureDimZ = 0x628; // int32
                constexpr std::ptrdiff_t m_vBoxMins = 0x62C; // Vector
                constexpr std::ptrdiff_t m_vBoxMaxs = 0x638; // Vector
                constexpr std::ptrdiff_t m_bActive = 0x644; // bool
                constexpr std::ptrdiff_t m_flStartAnisoTime = 0x648; // GameTime_t
                constexpr std::ptrdiff_t m_flStartScatterTime = 0x64C; // GameTime_t
                constexpr std::ptrdiff_t m_flStartDrawDistanceTime = 0x650; // GameTime_t
                constexpr std::ptrdiff_t m_flStartAnisotropy = 0x654; // float32
                constexpr std::ptrdiff_t m_flStartScattering = 0x658; // float32
                constexpr std::ptrdiff_t m_flStartDrawDistance = 0x65C; // float32
                constexpr std::ptrdiff_t m_flDefaultAnisotropy = 0x660; // float32
                constexpr std::ptrdiff_t m_flDefaultScattering = 0x664; // float32
                constexpr std::ptrdiff_t m_flDefaultDrawDistance = 0x668; // float32
                constexpr std::ptrdiff_t m_bStartDisabled = 0x66C; // bool
                constexpr std::ptrdiff_t m_bEnableIndirect = 0x66D; // bool
                constexpr std::ptrdiff_t m_bIsMaster = 0x66E; // bool
                constexpr std::ptrdiff_t m_hFogIndirectTexture = 0x670; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_nForceRefreshCount = 0x678; // int32
                constexpr std::ptrdiff_t m_fNoiseSpeed = 0x67C; // float32
                constexpr std::ptrdiff_t m_fNoiseStrength = 0x680; // float32
                constexpr std::ptrdiff_t m_vNoiseScale = 0x684; // Vector
                constexpr std::ptrdiff_t m_fWindSpeed = 0x690; // float32
                constexpr std::ptrdiff_t m_vWindDirection = 0x694; // Vector
                constexpr std::ptrdiff_t m_bFirstTime = 0x6A0; // bool
            }
            // Parent: None
            // Field count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseGraphDef {
                constexpr std::ptrdiff_t m_DomainIdentifier = 0x8; // PulseSymbol_t
                constexpr std::ptrdiff_t m_DomainSubType = 0x18; // CPulseValueFullType
                constexpr std::ptrdiff_t m_ParentMapName = 0x30; // PulseSymbol_t
                constexpr std::ptrdiff_t m_ParentXmlName = 0x40; // PulseSymbol_t
                constexpr std::ptrdiff_t m_Chunks = 0x50; // CUtlVector<CPulse_Chunk*>
                constexpr std::ptrdiff_t m_Cells = 0x68; // CUtlVector<CPulseCell_Base*>
                constexpr std::ptrdiff_t m_Vars = 0x80; // CUtlVector<CPulse_Variable>
                constexpr std::ptrdiff_t m_PublicOutputs = 0x98; // CUtlVector<CPulse_PublicOutput>
                constexpr std::ptrdiff_t m_InvokeBindings = 0xB0; // CUtlVector<CPulse_InvokeBinding*>
                constexpr std::ptrdiff_t m_CallInfos = 0xC8; // CUtlVector<CPulse_CallInfo*>
                constexpr std::ptrdiff_t m_Constants = 0xE0; // CUtlVector<CPulse_Constant>
                constexpr std::ptrdiff_t m_DomainValues = 0xF8; // CUtlVector<CPulse_DomainValue>
                constexpr std::ptrdiff_t m_BlackboardReferences = 0x110; // CUtlVector<CPulse_BlackboardReference>
                constexpr std::ptrdiff_t m_OutputConnections = 0x128; // CUtlVector<CPulse_OutputConnection*>
            }
            // Parent: C_BaseEntity
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
            namespace C_EnvWindVolume {
                constexpr std::ptrdiff_t m_bActive = 0x5F8; // bool
                constexpr std::ptrdiff_t m_vBoxMins = 0x5FC; // Vector
                constexpr std::ptrdiff_t m_vBoxMaxs = 0x608; // Vector
                constexpr std::ptrdiff_t m_bStartDisabled = 0x614; // bool
                constexpr std::ptrdiff_t m_nShape = 0x618; // int32
                constexpr std::ptrdiff_t m_fWindSpeedMultiplier = 0x61C; // float32
                constexpr std::ptrdiff_t m_fWindTurbulenceMultiplier = 0x620; // float32
                constexpr std::ptrdiff_t m_fWindSpeedVariationMultiplier = 0x624; // float32
                constexpr std::ptrdiff_t m_fWindDirectionVariationMultiplier = 0x628; // float32
            }
            // Parent: None
            // Field count: 0
            namespace CBasePlayerControllerAPI {
            }
            // Parent: C_PathParticleRope
            // Field count: 0
            namespace C_PathParticleRopeAlias_path_particle_rope_clientside {
            }
            // Parent: C_PointEntity
            // Field count: 1
            namespace CPointChildModifier {
                constexpr std::ptrdiff_t m_bOrphanInsteadOfDeletingChildrenOnRemove = 0x5F8; // bool
            }
            // Parent: C_CSGO_MapPreviewCameraPath
            // Field count: 1
            namespace C_CSGO_TeamPreviewCamera {
                constexpr std::ptrdiff_t m_nVariant = 0x680; // int32
            }
            // Parent: CInfoDynamicShadowHint
            // Field count: 2
            namespace CInfoDynamicShadowHintBox {
                constexpr std::ptrdiff_t m_vBoxMins = 0x610; // Vector
                constexpr std::ptrdiff_t m_vBoxMaxs = 0x61C; // Vector
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
                constexpr std::ptrdiff_t m_hGraphDefinitionAG2 = 0x1860; // CStrongHandle<InfoForResourceTypeCNmGraphDefinition>
                constexpr std::ptrdiff_t m_bIsUsingAG2 = 0x1868; // bool
                constexpr std::ptrdiff_t m_serializedPoseRecipeAG2 = 0x1870; // C_NetworkUtlVectorBase<uint8>
                constexpr std::ptrdiff_t m_nSerializePoseRecipeSizeAG2 = 0x1888; // int32
                constexpr std::ptrdiff_t m_nSerializePoseRecipeVersionAG2 = 0x188C; // int32
                constexpr std::ptrdiff_t m_nGraphCreationFlagsAG2 = 0x1890; // uint8
                constexpr std::ptrdiff_t m_nServerGraphDefReloadCountAG2 = 0x1A7C; // int32
                constexpr std::ptrdiff_t m_nServerSerializationContextIteration = 0x1A84; // int32
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
            namespace C_ColorCorrection {
                constexpr std::ptrdiff_t m_vecOrigin = 0x5F8; // Vector
                constexpr std::ptrdiff_t m_MinFalloff = 0x604; // float32
                constexpr std::ptrdiff_t m_MaxFalloff = 0x608; // float32
                constexpr std::ptrdiff_t m_flFadeInDuration = 0x60C; // float32
                constexpr std::ptrdiff_t m_flFadeOutDuration = 0x610; // float32
                constexpr std::ptrdiff_t m_flMaxWeight = 0x614; // float32
                constexpr std::ptrdiff_t m_flCurWeight = 0x618; // float32
                constexpr std::ptrdiff_t m_netlookupFilename = 0x61C; // char[512]
                constexpr std::ptrdiff_t m_bEnabled = 0x81C; // bool
                constexpr std::ptrdiff_t m_bMaster = 0x81D; // bool
                constexpr std::ptrdiff_t m_bClientSide = 0x81E; // bool
                constexpr std::ptrdiff_t m_bExclusive = 0x81F; // bool
                constexpr std::ptrdiff_t m_bEnabledOnClient = 0x820; // bool[1]
                constexpr std::ptrdiff_t m_flCurWeightOnClient = 0x824; // float32[1]
                constexpr std::ptrdiff_t m_bFadingIn = 0x828; // bool[1]
                constexpr std::ptrdiff_t m_flFadeStartWeight = 0x82C; // float32[1]
                constexpr std::ptrdiff_t m_flFadeStartTime = 0x830; // float32[1]
                constexpr std::ptrdiff_t m_flFadeDuration = 0x834; // float32[1]
            }
            // Parent: None
            // Field count: 10
            namespace CBuoyancyHelper {
                constexpr std::ptrdiff_t m_nFluidType = 0x18; // CUtlStringToken
                constexpr std::ptrdiff_t m_flFluidDensity = 0x1C; // float32
                constexpr std::ptrdiff_t m_flNeutrallyBuoyantGravity = 0x20; // float32
                constexpr std::ptrdiff_t m_flNeutrallyBuoyantLinearDamping = 0x24; // float32
                constexpr std::ptrdiff_t m_flNeutrallyBuoyantAngularDamping = 0x28; // float32
                constexpr std::ptrdiff_t m_bNeutrallyBuoyant = 0x2C; // bool
                constexpr std::ptrdiff_t m_vecFractionOfWheelSubmergedForWheelFriction = 0x30; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_vecWheelFrictionScales = 0x48; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_vecFractionOfWheelSubmergedForWheelDrag = 0x60; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_vecWheelDrag = 0x78; // CUtlVector<float32>
            }
            // Parent: C_BaseCSGrenade
            // Field count: 0
            namespace C_MolotovGrenade {
            }
            // Parent: C_BaseCombatCharacter
            // Field count: 0
            namespace C_NetTestBaseCombatCharacter {
            }
            // Parent: CBodyComponent
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_sceneNode (CGameSceneNode)
            namespace CBodyComponentPoint {
                constexpr std::ptrdiff_t m_sceneNode = 0x80; // CGameSceneNode
            }
            // Parent: None
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
                constexpr std::ptrdiff_t m_iOriginOverride = 0x1F8; // int32
                constexpr std::ptrdiff_t m_ubStyleOverride = 0x1FC; // uint8
                constexpr std::ptrdiff_t m_unClientFlags = 0x1FD; // uint8
                constexpr std::ptrdiff_t m_AttributeList = 0x210; // CAttributeList
                constexpr std::ptrdiff_t m_NetworkedDynamicAttributes = 0x288; // CAttributeList
                constexpr std::ptrdiff_t m_szCustomName = 0x300; // char[161]
                constexpr std::ptrdiff_t m_szCustomNameOverride = 0x3A1; // char[161]
                constexpr std::ptrdiff_t m_bInitializedTags = 0x470; // bool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Timeline__TimelineEvent_t {
                constexpr std::ptrdiff_t m_flTimeFromPrevious = 0x0; // float32
                constexpr std::ptrdiff_t m_EventOutflow = 0x8; // CPulse_OutflowConnection
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_IsRequirementValid {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_timestamp (GameTime_t)
            // NetworkVarNames: m_nWorldGroupId (WorldGroupId_t)
            namespace IntervalTimer {
                constexpr std::ptrdiff_t m_timestamp = 0x8; // GameTime_t
                constexpr std::ptrdiff_t m_nWorldGroupId = 0xC; // WorldGroupId_t
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
            namespace audioparams_t {
                constexpr std::ptrdiff_t localSound = 0x8; // Vector[8]
                constexpr std::ptrdiff_t soundscapeIndex = 0x68; // int32
                constexpr std::ptrdiff_t localBits = 0x6C; // uint8
                constexpr std::ptrdiff_t soundscapeEntityListIndex = 0x70; // int32
                constexpr std::ptrdiff_t soundEventHash = 0x74; // uint32
            }
            // Parent: C_BasePlayerWeapon
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
            namespace C_CSWeaponBase {
                constexpr std::ptrdiff_t m_iWeaponGameplayAnimState = 0x1970; // WeaponGameplayAnimState
                constexpr std::ptrdiff_t m_flWeaponGameplayAnimStateTimestamp = 0x1974; // GameTime_t
                constexpr std::ptrdiff_t m_flInspectCancelCompleteTime = 0x1978; // GameTime_t
                constexpr std::ptrdiff_t m_bInspectPending = 0x197C; // bool
                constexpr std::ptrdiff_t m_bInspectShouldLoop = 0x197D; // bool
                constexpr std::ptrdiff_t m_flCrosshairDistance = 0x19A8; // float32
                constexpr std::ptrdiff_t m_iAmmoLastCheck = 0x19AC; // int32
                constexpr std::ptrdiff_t m_nLastEmptySoundCmdNum = 0x19B0; // int32
                constexpr std::ptrdiff_t m_bFireOnEmpty = 0x19B4; // bool
                constexpr std::ptrdiff_t m_OnPlayerPickup = 0x19B8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_weaponMode = 0x19E0; // CSWeaponMode
                constexpr std::ptrdiff_t m_flTurningInaccuracyDelta = 0x19E4; // float32
                constexpr std::ptrdiff_t m_vecTurningInaccuracyEyeDirLast = 0x19E8; // Vector
                constexpr std::ptrdiff_t m_flTurningInaccuracy = 0x19F4; // float32
                constexpr std::ptrdiff_t m_fAccuracyPenalty = 0x19F8; // float32
                constexpr std::ptrdiff_t m_flLastAccuracyUpdateTime = 0x19FC; // GameTime_t
                constexpr std::ptrdiff_t m_fAccuracySmoothedForZoom = 0x1A00; // float32
                constexpr std::ptrdiff_t m_iRecoilIndex = 0x1A04; // int32
                constexpr std::ptrdiff_t m_flRecoilIndex = 0x1A08; // float32
                constexpr std::ptrdiff_t m_bBurstMode = 0x1A0C; // bool
                constexpr std::ptrdiff_t m_flLastBurstModeChangeTime = 0x1A10; // GameTime_t
                constexpr std::ptrdiff_t m_nPostponeFireReadyTicks = 0x1A14; // GameTick_t
                constexpr std::ptrdiff_t m_flPostponeFireReadyFrac = 0x1A18; // float32
                constexpr std::ptrdiff_t m_bInReload = 0x1A1C; // bool
                constexpr std::ptrdiff_t m_flDroppedAtTime = 0x1A20; // GameTime_t
                constexpr std::ptrdiff_t m_bIsHauledBack = 0x1A24; // bool
                constexpr std::ptrdiff_t m_bSilencerOn = 0x1A25; // bool
                constexpr std::ptrdiff_t m_flTimeSilencerSwitchComplete = 0x1A28; // GameTime_t
                constexpr std::ptrdiff_t m_iOriginalTeamNumber = 0x1A2C; // int32
                constexpr std::ptrdiff_t m_iMostRecentTeamNumber = 0x1A30; // int32
                constexpr std::ptrdiff_t m_bDroppedNearBuyZone = 0x1A34; // bool
                constexpr std::ptrdiff_t m_flNextAttackRenderTimeOffset = 0x1A38; // float32
                constexpr std::ptrdiff_t m_bClearWeaponIdentifyingUGC = 0x1AD8; // bool
                constexpr std::ptrdiff_t m_bVisualsDataSet = 0x1AD9; // bool
                constexpr std::ptrdiff_t m_bUIWeapon = 0x1ADA; // bool
                constexpr std::ptrdiff_t m_nCustomEconReloadEventId = 0x1ADC; // int32
                constexpr std::ptrdiff_t m_nextPrevOwnerUseTime = 0x1AE8; // GameTime_t
                constexpr std::ptrdiff_t m_hPrevOwner = 0x1AEC; // CHandle<C_CSPlayerPawn>
                constexpr std::ptrdiff_t m_nDropTick = 0x1AF0; // GameTick_t
                constexpr std::ptrdiff_t m_bWasActiveWeaponWhenDropped = 0x1AF4; // bool
                constexpr std::ptrdiff_t m_donated = 0x1B14; // bool
                constexpr std::ptrdiff_t m_fLastShotTime = 0x1B18; // GameTime_t
                constexpr std::ptrdiff_t m_bWasOwnedByCT = 0x1B1C; // bool
                constexpr std::ptrdiff_t m_bWasOwnedByTerrorist = 0x1B1D; // bool
                constexpr std::ptrdiff_t m_flNextClientFireBulletTime = 0x1B20; // float32
                constexpr std::ptrdiff_t m_flNextClientFireBulletTime_Repredict = 0x1B24; // float32
                constexpr std::ptrdiff_t m_IronSightController = 0x1C90; // C_IronSightController
                constexpr std::ptrdiff_t m_iIronSightMode = 0x1D40; // int32
                constexpr std::ptrdiff_t m_flLastLOSTraceFailureTime = 0x1D58; // GameTime_t
                constexpr std::ptrdiff_t m_flWatTickOffset = 0x1DB8; // float32
                constexpr std::ptrdiff_t m_flLastShakeTime = 0x1DCC; // GameTime_t
            }
            // Parent: None
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
            namespace CTimeline {
                constexpr std::ptrdiff_t m_flValues = 0x10; // float32[64]
                constexpr std::ptrdiff_t m_nValueCounts = 0x110; // int32[64]
                constexpr std::ptrdiff_t m_nBucketCount = 0x210; // int32
                constexpr std::ptrdiff_t m_flInterval = 0x214; // float32
                constexpr std::ptrdiff_t m_flFinalValue = 0x218; // float32
                constexpr std::ptrdiff_t m_nCompressionType = 0x21C; // TimelineCompression_t
                constexpr std::ptrdiff_t m_bStopped = 0x220; // bool
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyDescription
            namespace CPulseCursorFuncs {
            }
            // Parent: CBaseFilter
            // Field count: 3
            namespace FilterHealth {
                constexpr std::ptrdiff_t m_bAdrenalineActive = 0x650; // bool
                constexpr std::ptrdiff_t m_iHealthMin = 0x654; // int32
                constexpr std::ptrdiff_t m_iHealthMax = 0x658; // int32
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
            namespace C_PointClientUIHUD {
                constexpr std::ptrdiff_t m_bCheckCSSClasses = 0xEE8; // bool
                constexpr std::ptrdiff_t m_bIgnoreInput = 0x1060; // bool
                constexpr std::ptrdiff_t m_flWidth = 0x1064; // float32
                constexpr std::ptrdiff_t m_flHeight = 0x1068; // float32
                constexpr std::ptrdiff_t m_flDPI = 0x106C; // float32
                constexpr std::ptrdiff_t m_flInteractDistance = 0x1070; // float32
                constexpr std::ptrdiff_t m_flDepthOffset = 0x1074; // float32
                constexpr std::ptrdiff_t m_unOwnerContext = 0x1078; // uint32
                constexpr std::ptrdiff_t m_unHorizontalAlign = 0x107C; // uint32
                constexpr std::ptrdiff_t m_unVerticalAlign = 0x1080; // uint32
                constexpr std::ptrdiff_t m_unOrientation = 0x1084; // uint32
                constexpr std::ptrdiff_t m_bAllowInteractionFromAllSceneWorlds = 0x1088; // bool
                constexpr std::ptrdiff_t m_vecCSSClasses = 0x1090; // C_NetworkUtlVectorBase<CUtlSymbolLarge>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Inflow_GraphHook {
                constexpr std::ptrdiff_t m_HookName = 0x80; // PulseSymbol_t
            }
            // Parent: None
            // Field count: 0
            namespace CPathSimpleAPI {
            }
            // Parent: C_CS2WeaponModuleBase
            // Field count: 2
            namespace C_KeychainModule {
                constexpr std::ptrdiff_t m_nKeychainDefID = 0x1160; // uint32
                constexpr std::ptrdiff_t m_nKeychainSeed = 0x1164; // uint32
            }
            // Parent: C_BaseModelEntity
            // Field count: 1
            namespace CFuncWater {
                constexpr std::ptrdiff_t m_BuoyancyHelper = 0xEB0; // CBuoyancyHelper
            }
            // Parent: CPlayerPawnComponent
            // Field count: 0
            namespace CCSPlayer_GlowServices {
            }
            // Parent: None
            // Field count: 1
            namespace CCSGameModeRules {
                constexpr std::ptrdiff_t __m_pChainEntity = 0x8; // CNetworkVarChainer
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
            namespace C_CSObserverPawn {
                constexpr std::ptrdiff_t m_hDetectParentChange = 0x1668; // CEntityHandle
            }
            // Parent: None
            // Field count: 3
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
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            namespace C_WeaponGalilAR {
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
            namespace CCSPlayerBase_CameraServices {
                constexpr std::ptrdiff_t m_iFOV = 0x288; // uint32
                constexpr std::ptrdiff_t m_iFOVStart = 0x28C; // uint32
                constexpr std::ptrdiff_t m_flFOVTime = 0x290; // GameTime_t
                constexpr std::ptrdiff_t m_flFOVRate = 0x294; // float32
                constexpr std::ptrdiff_t m_hZoomOwner = 0x298; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_flLastShotFOV = 0x29C; // float32
            }
            // Parent: None
            // Field count: 0
            namespace C_TeamplayRules {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Inflow_BaseEntrypoint {
                constexpr std::ptrdiff_t m_EntryChunk = 0x48; // PulseRuntimeChunkIndex_t
                constexpr std::ptrdiff_t m_RegisterMap = 0x50; // PulseRegisterMap_t
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
            namespace C_Hostage {
                constexpr std::ptrdiff_t m_entitySpottedState = 0x13F0; // EntitySpottedState_t
                constexpr std::ptrdiff_t m_leader = 0x1408; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_reuseTimer = 0x1410; // CountdownTimer
                constexpr std::ptrdiff_t m_vel = 0x1428; // Vector
                constexpr std::ptrdiff_t m_isRescued = 0x1434; // bool
                constexpr std::ptrdiff_t m_jumpedThisFrame = 0x1435; // bool
                constexpr std::ptrdiff_t m_nHostageState = 0x1438; // int32
                constexpr std::ptrdiff_t m_bHandsHaveBeenCut = 0x143C; // bool
                constexpr std::ptrdiff_t m_hHostageGrabber = 0x1440; // CHandle<C_CSPlayerPawn>
                constexpr std::ptrdiff_t m_fLastGrabTime = 0x1444; // GameTime_t
                constexpr std::ptrdiff_t m_vecGrabbedPos = 0x1448; // Vector
                constexpr std::ptrdiff_t m_flRescueStartTime = 0x1454; // GameTime_t
                constexpr std::ptrdiff_t m_flGrabSuccessTime = 0x1458; // GameTime_t
                constexpr std::ptrdiff_t m_flDropStartTime = 0x145C; // GameTime_t
                constexpr std::ptrdiff_t m_flDeadOrRescuedTime = 0x1460; // GameTime_t
                constexpr std::ptrdiff_t m_blinkTimer = 0x1468; // CountdownTimer
                constexpr std::ptrdiff_t m_lookAt = 0x1480; // Vector
                constexpr std::ptrdiff_t m_lookAroundTimer = 0x1490; // CountdownTimer
                constexpr std::ptrdiff_t m_isInit = 0x14A8; // bool
                constexpr std::ptrdiff_t m_eyeAttachment = 0x14A9; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_chestAttachment = 0x14AA; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_pPredictionOwner = 0x14B0; // CBasePlayerController*
                constexpr std::ptrdiff_t m_fNewestAlphaThinkTime = 0x14B8; // GameTime_t
            }
            // Parent: CPlayerPawnComponent
            // Field count: 6
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
            namespace C_BasePlayerWeapon {
                constexpr std::ptrdiff_t m_nNextPrimaryAttackTick = 0x18E0; // GameTick_t
                constexpr std::ptrdiff_t m_flNextPrimaryAttackTickRatio = 0x18E4; // float32
                constexpr std::ptrdiff_t m_nNextSecondaryAttackTick = 0x18E8; // GameTick_t
                constexpr std::ptrdiff_t m_flNextSecondaryAttackTickRatio = 0x18EC; // float32
                constexpr std::ptrdiff_t m_iClip1 = 0x18F0; // int32
                constexpr std::ptrdiff_t m_iClip2 = 0x18F4; // int32
                constexpr std::ptrdiff_t m_pReserveAmmo = 0x18F8; // int32[2]
            }
            // Parent: C_BaseEntity
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_iCurrentMaxRagdollCount (int8)
            namespace CRagdollManager {
                constexpr std::ptrdiff_t m_iCurrentMaxRagdollCount = 0x5F8; // int8
            }
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            namespace C_WeaponMAC10 {
            }
            // Parent: C_BaseEntity
            // Field count: 14
            namespace C_CSGO_MapPreviewCameraPath {
                constexpr std::ptrdiff_t m_flZFar = 0x5F8; // float32
                constexpr std::ptrdiff_t m_flZNear = 0x5FC; // float32
                constexpr std::ptrdiff_t m_bLoop = 0x600; // bool
                constexpr std::ptrdiff_t m_bVerticalFOV = 0x601; // bool
                constexpr std::ptrdiff_t m_bConstantSpeed = 0x602; // bool
                constexpr std::ptrdiff_t m_flDuration = 0x604; // float32
                constexpr std::ptrdiff_t m_flPathLength = 0x648; // float32
                constexpr std::ptrdiff_t m_flPathDuration = 0x64C; // float32
                constexpr std::ptrdiff_t m_bDofEnabled = 0x664; // bool
                constexpr std::ptrdiff_t m_flDofNearBlurry = 0x668; // float32
                constexpr std::ptrdiff_t m_flDofNearCrisp = 0x66C; // float32
                constexpr std::ptrdiff_t m_flDofFarCrisp = 0x670; // float32
                constexpr std::ptrdiff_t m_flDofFarBlurry = 0x674; // float32
                constexpr std::ptrdiff_t m_flDofTiltToGround = 0x678; // float32
            }
            // Parent: C_BaseModelEntity
            // Field count: 40
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
                constexpr std::ptrdiff_t m_LinksTouchingSomething = 0xEB8; // CBitVec<10>
                constexpr std::ptrdiff_t m_nLinksTouchingSomething = 0xEBC; // int32
                constexpr std::ptrdiff_t m_bApplyWind = 0xEC0; // bool
                constexpr std::ptrdiff_t m_fPrevLockedPoints = 0xEC4; // int32
                constexpr std::ptrdiff_t m_iForcePointMoveCounter = 0xEC8; // int32
                constexpr std::ptrdiff_t m_bPrevEndPointPos = 0xECC; // bool[2]
                constexpr std::ptrdiff_t m_vPrevEndPointPos = 0xED0; // Vector[2]
                constexpr std::ptrdiff_t m_flCurScroll = 0xEE8; // float32
                constexpr std::ptrdiff_t m_flScrollSpeed = 0xEEC; // float32
                constexpr std::ptrdiff_t m_RopeFlags = 0xEF0; // uint16
                constexpr std::ptrdiff_t m_iRopeMaterialModelIndex = 0xEF8; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_nSegments = 0x1170; // uint8
                constexpr std::ptrdiff_t m_hStartPoint = 0x1174; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_hEndPoint = 0x1178; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_iStartAttachment = 0x117C; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_iEndAttachment = 0x117D; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_Subdiv = 0x117E; // uint8
                constexpr std::ptrdiff_t m_RopeLength = 0x1180; // int16
                constexpr std::ptrdiff_t m_Slack = 0x1182; // int16
                constexpr std::ptrdiff_t m_TextureScale = 0x1184; // float32
                constexpr std::ptrdiff_t m_fLockedPoints = 0x1188; // uint8
                constexpr std::ptrdiff_t m_nChangeCount = 0x1189; // uint8
                constexpr std::ptrdiff_t m_Width = 0x118C; // float32
                constexpr std::ptrdiff_t m_PhysicsDelegate = 0x1190; // C_RopeKeyframe::CPhysicsDelegate
                constexpr std::ptrdiff_t m_hMaterial = 0x11A0; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_TextureHeight = 0x11A8; // int32
                constexpr std::ptrdiff_t m_vecImpulse = 0x11AC; // Vector
                constexpr std::ptrdiff_t m_vecPreviousImpulse = 0x11B8; // Vector
                constexpr std::ptrdiff_t m_flCurrentGustTimer = 0x11C4; // float32
                constexpr std::ptrdiff_t m_flCurrentGustLifetime = 0x11C8; // float32
                constexpr std::ptrdiff_t m_flTimeToNextGust = 0x11CC; // float32
                constexpr std::ptrdiff_t m_vWindDir = 0x11D0; // Vector
                constexpr std::ptrdiff_t m_vColorMod = 0x11DC; // Vector
                constexpr std::ptrdiff_t m_vCachedEndPointAttachmentPos = 0x11E8; // Vector[2]
                constexpr std::ptrdiff_t m_vCachedEndPointAttachmentAngle = 0x1200; // QAngle[2]
                constexpr std::ptrdiff_t m_bConstrainBetweenEndpoints = 0x1218; // bool
                constexpr std::ptrdiff_t m_bEndPointAttachmentPositionsDirty = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bEndPointAttachmentAnglesDirty = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bNewDataThisFrame = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bPhysicsInitted = 0x0; // bitfield:1
            }
            // Parent: C_BaseModelEntity
            // Field count: 0
            namespace C_BaseToggle {
            }
            // Parent: C_EnvCubemap
            // Field count: 0
            namespace C_EnvCubemapBox {
            }
            // Parent: C_BaseToggle
            // Field count: 0
            //
            // Metadata:
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkOverride
            namespace C_FuncMoveLinear {
            }
            // Parent: C_CSWeaponBaseShotgun
            // Field count: 0
            namespace C_WeaponXM1014 {
            }
            // Parent: CBaseAnimGraph
            // Field count: 0
            namespace C_WorldModelGloves {
            }
            // Parent: C_PhysicsProp
            // Field count: 0
            namespace C_PhysicsPropMultiplayer {
            }
            // Parent: C_SoundEventEntity
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_vMins (Vector)
            // NetworkVarNames: m_vMaxs (Vector)
            namespace C_SoundEventOBBEntity {
                constexpr std::ptrdiff_t m_vMins = 0x6C0; // Vector
                constexpr std::ptrdiff_t m_vMaxs = 0x6CC; // Vector
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyDescription
            namespace CPulseTestScriptLib {
            }
            // Parent: C_WeaponBaseItem
            // Field count: 0
            namespace C_Item_Healthshot {
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // NetworkVarNames: m_pEntity (CEntityIdentity*)
            // NetworkVarNames: m_CScriptComponent (CScriptComponent::Storage_t)
            namespace CEntityInstance {
                constexpr std::ptrdiff_t m_iszPrivateVScripts = 0x8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_pEntity = 0x10; // CEntityIdentity*
                constexpr std::ptrdiff_t m_CScriptComponent = 0x30; // CScriptComponent*
            }
            // Parent: C_BaseEntity
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
            namespace C_EnvCombinedLightProbeVolume {
                constexpr std::ptrdiff_t m_Entity_Color = 0x1670; // Color
                constexpr std::ptrdiff_t m_Entity_flBrightness = 0x1674; // float32
                constexpr std::ptrdiff_t m_Entity_hCubemapTexture = 0x1678; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_bCustomCubemapTexture = 0x1680; // bool
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_AmbientCube = 0x1688; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SDF = 0x1690; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SH2_DC = 0x1698; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SH2_R = 0x16A0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SH2_G = 0x16A8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SH2_B = 0x16B0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightIndicesTexture = 0x16B8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightScalarsTexture = 0x16C0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightShadowsTexture = 0x16C8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_vBoxMins = 0x16D0; // Vector
                constexpr std::ptrdiff_t m_Entity_vBoxMaxs = 0x16DC; // Vector
                constexpr std::ptrdiff_t m_Entity_bMoveable = 0x16E8; // bool
                constexpr std::ptrdiff_t m_Entity_nHandshake = 0x16EC; // int32
                constexpr std::ptrdiff_t m_Entity_nEnvCubeMapArrayIndex = 0x16F0; // int32
                constexpr std::ptrdiff_t m_Entity_nPriority = 0x16F4; // int32
                constexpr std::ptrdiff_t m_Entity_bStartDisabled = 0x16F8; // bool
                constexpr std::ptrdiff_t m_Entity_flEdgeFadeDist = 0x16FC; // float32
                constexpr std::ptrdiff_t m_Entity_vEdgeFadeDists = 0x1700; // Vector
                constexpr std::ptrdiff_t m_Entity_nLightProbeSizeX = 0x170C; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeSizeY = 0x1710; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeSizeZ = 0x1714; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasX = 0x1718; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasY = 0x171C; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasZ = 0x1720; // int32
                constexpr std::ptrdiff_t m_Entity_bEnabled = 0x1739; // bool
            }
            // Parent: None
            // Field count: 0
            namespace C_MultiplayRules {
            }
            // Parent: CPlayerPawnComponent
            // Field count: 0
            namespace CPlayer_AutoaimServices {
            }
            // Parent: C_LightEntity
            // Field count: 0
            namespace C_LightDirectionalEntity {
            }
            // Parent: None
            // Field count: 83
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
            // NetworkVarNames: m_bGravityDisabled (bool)
            // NetworkVarNames: m_flNavIgnoreUntilTime (GameTime_t)
            // NetworkVarNames: m_nBloodType (BloodType)
            namespace C_BaseEntity {
                constexpr std::ptrdiff_t m_CBodyComponent = 0x38; // CBodyComponent*
                constexpr std::ptrdiff_t m_NetworkTransmitComponent = 0x40; // CNetworkTransmitComponent
                constexpr std::ptrdiff_t m_nLastThinkTick = 0x328; // GameTick_t
                constexpr std::ptrdiff_t m_pGameSceneNode = 0x330; // CGameSceneNode*
                constexpr std::ptrdiff_t m_pRenderComponent = 0x338; // CRenderComponent*
                constexpr std::ptrdiff_t m_pCollision = 0x340; // CCollisionProperty*
                constexpr std::ptrdiff_t m_iMaxHealth = 0x348; // int32
                constexpr std::ptrdiff_t m_iHealth = 0x34C; // int32
                constexpr std::ptrdiff_t m_flDamageAccumulator = 0x350; // float32
                constexpr std::ptrdiff_t m_lifeState = 0x354; // uint8
                constexpr std::ptrdiff_t m_bTakesDamage = 0x355; // bool
                constexpr std::ptrdiff_t m_nTakeDamageFlags = 0x358; // TakeDamageFlags_t
                constexpr std::ptrdiff_t m_nPlatformType = 0x360; // EntityPlatformTypes_t
                constexpr std::ptrdiff_t m_ubInterpolationFrame = 0x361; // uint8
                constexpr std::ptrdiff_t m_hSceneObjectController = 0x364; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_nNoInterpolationTick = 0x368; // int32
                constexpr std::ptrdiff_t m_nVisibilityNoInterpolationTick = 0x36C; // int32
                constexpr std::ptrdiff_t m_flProxyRandomValue = 0x370; // float32
                constexpr std::ptrdiff_t m_iEFlags = 0x374; // int32
                constexpr std::ptrdiff_t m_nWaterType = 0x378; // uint8
                constexpr std::ptrdiff_t m_bInterpolateEvenWithNoModel = 0x379; // bool
                constexpr std::ptrdiff_t m_bPredictionEligible = 0x37A; // bool
                constexpr std::ptrdiff_t m_bApplyLayerMatchIDToModel = 0x37B; // bool
                constexpr std::ptrdiff_t m_tokLayerMatchID = 0x37C; // CUtlStringToken
                constexpr std::ptrdiff_t m_nSubclassID = 0x380; // CUtlStringToken
                constexpr std::ptrdiff_t m_nSimulationTick = 0x390; // int32
                constexpr std::ptrdiff_t m_iCurrentThinkContext = 0x394; // int32
                constexpr std::ptrdiff_t m_aThinkFunctions = 0x398; // CUtlVector<thinkfunc_t>
                constexpr std::ptrdiff_t m_bDisabledContextThinks = 0x3B0; // bool
                constexpr std::ptrdiff_t m_flAnimTime = 0x3B4; // float32
                constexpr std::ptrdiff_t m_flSimulationTime = 0x3B8; // float32
                constexpr std::ptrdiff_t m_nSceneObjectOverrideFlags = 0x3BC; // uint8
                constexpr std::ptrdiff_t m_bHasSuccessfullyInterpolated = 0x3BD; // bool
                constexpr std::ptrdiff_t m_bHasAddedVarsToInterpolation = 0x3BE; // bool
                constexpr std::ptrdiff_t m_bRenderEvenWhenNotSuccessfullyInterpolated = 0x3BF; // bool
                constexpr std::ptrdiff_t m_nInterpolationLatchDirtyFlags = 0x3C0; // int32[2]
                constexpr std::ptrdiff_t m_ListEntry = 0x3C8; // uint16[11]
                constexpr std::ptrdiff_t m_flCreateTime = 0x3E0; // GameTime_t
                constexpr std::ptrdiff_t m_flSpeed = 0x3E4; // float32
                constexpr std::ptrdiff_t m_EntClientFlags = 0x3E8; // uint16
                constexpr std::ptrdiff_t m_bClientSideRagdoll = 0x3EA; // bool
                constexpr std::ptrdiff_t m_iTeamNum = 0x3EB; // uint8
                constexpr std::ptrdiff_t m_spawnflags = 0x3EC; // uint32
                constexpr std::ptrdiff_t m_nNextThinkTick = 0x3F0; // GameTick_t
                constexpr std::ptrdiff_t m_fFlags = 0x3F8; // uint32
                constexpr std::ptrdiff_t m_vecAbsVelocity = 0x3FC; // Vector
                constexpr std::ptrdiff_t m_vecServerVelocity = 0x408; // CNetworkVelocityVector
                constexpr std::ptrdiff_t m_vecVelocity = 0x430; // CNetworkVelocityVector
                constexpr std::ptrdiff_t m_vecBaseVelocity = 0x510; // Vector
                constexpr std::ptrdiff_t m_hEffectEntity = 0x51C; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_hOwnerEntity = 0x520; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_MoveCollide = 0x524; // MoveCollide_t
                constexpr std::ptrdiff_t m_MoveType = 0x525; // MoveType_t
                constexpr std::ptrdiff_t m_nActualMoveType = 0x526; // MoveType_t
                constexpr std::ptrdiff_t m_flWaterLevel = 0x528; // float32
                constexpr std::ptrdiff_t m_fEffects = 0x52C; // uint32
                constexpr std::ptrdiff_t m_hGroundEntity = 0x530; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_nGroundBodyIndex = 0x534; // int32
                constexpr std::ptrdiff_t m_flFriction = 0x538; // float32
                constexpr std::ptrdiff_t m_flElasticity = 0x53C; // float32
                constexpr std::ptrdiff_t m_flGravityScale = 0x540; // float32
                constexpr std::ptrdiff_t m_flTimeScale = 0x544; // float32
                constexpr std::ptrdiff_t m_bAnimatedEveryTick = 0x548; // bool
                constexpr std::ptrdiff_t m_bGravityDisabled = 0x549; // bool
                constexpr std::ptrdiff_t m_flNavIgnoreUntilTime = 0x54C; // GameTime_t
                constexpr std::ptrdiff_t m_hThink = 0x550; // uint16
                constexpr std::ptrdiff_t m_fBBoxVisFlags = 0x560; // uint8
                constexpr std::ptrdiff_t m_flActualGravityScale = 0x564; // float32
                constexpr std::ptrdiff_t m_bGravityActuallyDisabled = 0x568; // bool
                constexpr std::ptrdiff_t m_bPredictable = 0x569; // bool
                constexpr std::ptrdiff_t m_bRenderWithViewModels = 0x56A; // bool
                constexpr std::ptrdiff_t m_nFirstPredictableCommand = 0x56C; // int32
                constexpr std::ptrdiff_t m_nLastPredictableCommand = 0x570; // int32
                constexpr std::ptrdiff_t m_hOldMoveParent = 0x574; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_Particles = 0x578; // CParticleProperty
                constexpr std::ptrdiff_t m_vecAngVelocity = 0x5A8; // QAngle
                constexpr std::ptrdiff_t m_DataChangeEventRef = 0x5B4; // int32
                constexpr std::ptrdiff_t m_dependencies = 0x5B8; // CUtlVector<CEntityHandle>
                constexpr std::ptrdiff_t m_nCreationTick = 0x5D0; // int32
                constexpr std::ptrdiff_t m_bAnimTimeChanged = 0x5DD; // bool
                constexpr std::ptrdiff_t m_bSimulationTimeChanged = 0x5DE; // bool
                constexpr std::ptrdiff_t m_sUniqueHammerID = 0x5E8; // CUtlString
                constexpr std::ptrdiff_t m_nBloodType = 0x5F0; // BloodType
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // NetworkVarNames: m_Handle (ModelConfigHandle_t)
            // NetworkVarNames: m_Name (string_t)
            // NetworkVarNames: m_AssociatedEntities (CHandle<C_BaseModelEntity>)
            // NetworkVarNames: m_AssociatedEntityNames (string_t)
            namespace ActiveModelConfig_t {
                constexpr std::ptrdiff_t m_Handle = 0x30; // ModelConfigHandle_t
                constexpr std::ptrdiff_t m_Name = 0x38; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_AssociatedEntities = 0x40; // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
                constexpr std::ptrdiff_t m_AssociatedEntityNames = 0x58; // C_NetworkUtlVectorBase<CUtlSymbolLarge>
            }
            // Parent: CEnvSoundscape
            // Field count: 1
            namespace CEnvSoundscapeProxy {
                constexpr std::ptrdiff_t m_MainSoundscapeName = 0x698; // CUtlSymbolLarge
            }
            // Parent: C_BaseEntity
            // Field count: 15
            namespace C_SoundEventEntity {
                constexpr std::ptrdiff_t m_bStartOnSpawn = 0x5F8; // bool
                constexpr std::ptrdiff_t m_bToLocalPlayer = 0x5F9; // bool
                constexpr std::ptrdiff_t m_bStopOnNew = 0x5FA; // bool
                constexpr std::ptrdiff_t m_bSaveRestore = 0x5FB; // bool
                constexpr std::ptrdiff_t m_bSavedIsPlaying = 0x5FC; // bool
                constexpr std::ptrdiff_t m_flSavedElapsedTime = 0x600; // float32
                constexpr std::ptrdiff_t m_iszSourceEntityName = 0x608; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszAttachmentName = 0x610; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_onGUIDChanged = 0x618; // CEntityOutputTemplate<uint64>
                constexpr std::ptrdiff_t m_onSoundFinished = 0x640; // CEntityIOOutput
                constexpr std::ptrdiff_t m_flClientCullRadius = 0x668; // float32
                constexpr std::ptrdiff_t m_iszSoundName = 0x698; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hSource = 0x6B4; // CEntityHandle
                constexpr std::ptrdiff_t m_nEntityIndexSelection = 0x6B8; // int32
                constexpr std::ptrdiff_t m_bClientSideOnly = 0x0; // bitfield:1
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Inflow_EventHandler {
                constexpr std::ptrdiff_t m_EventName = 0x80; // PulseSymbol_t
            }
            // Parent: C_CSWeaponBase
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_bFirstAttack (bool)
            namespace C_Knife {
                constexpr std::ptrdiff_t m_bFirstAttack = 0x1F80; // bool
            }
            // Parent: C_CSGO_TeamPreviewCamera
            // Field count: 0
            namespace C_CSGO_TerroristWingmanIntroCamera {
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
            namespace CSkeletonInstance {
                constexpr std::ptrdiff_t m_modelState = 0x190; // CModelState
                constexpr std::ptrdiff_t m_bIsAnimationEnabled = 0x490; // bool
                constexpr std::ptrdiff_t m_bUseParentRenderBounds = 0x491; // bool
                constexpr std::ptrdiff_t m_bDisableSolidCollisionsForHierarchy = 0x492; // bool
                constexpr std::ptrdiff_t m_bDirtyMotionType = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bIsGeneratingLatchedParentSpaceState = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_materialGroup = 0x494; // CUtlStringToken
                constexpr std::ptrdiff_t m_nHitboxSet = 0x498; // uint8
            }
            // Parent: None
            // Field count: 0
            namespace CEntityComponent {
            }
            // Parent: CBaseAnimGraph
            // Field count: 0
            namespace C_LateUpdatedAnimating {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Outflow_CycleShuffled__InstanceState_t {
                constexpr std::ptrdiff_t m_Shuffle = 0x0; // CUtlVectorFixedGrowable<uint8,8>
                constexpr std::ptrdiff_t m_nNextShuffle = 0x20; // int32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_BaseLerp__CursorState_t {
                constexpr std::ptrdiff_t m_StartTime = 0x0; // GameTime_t
                constexpr std::ptrdiff_t m_EndTime = 0x4; // GameTime_t
            }
            // Parent: C_BaseModelEntity
            // Field count: 4
            //
            // Metadata:
            // NetworkVarNames: m_bEnabled (bool)
            // NetworkVarNames: m_DialogXMLName (string_t)
            // NetworkVarNames: m_PanelClassName (string_t)
            // NetworkVarNames: m_PanelID (string_t)
            namespace C_BaseClientUIEntity {
                constexpr std::ptrdiff_t m_bEnabled = 0xEB8; // bool
                constexpr std::ptrdiff_t m_DialogXMLName = 0xEC0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_PanelClassName = 0xEC8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_PanelID = 0xED0; // CUtlSymbolLarge
            }
            // Parent: None
            // Field count: 1
            namespace CPulseCell_WaitForCursorsWithTagBase__CursorState_t {
                constexpr std::ptrdiff_t m_TagName = 0x0; // PulseSymbol_t
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyDescription
            namespace CPulseArraylib {
            }
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            namespace C_WeaponRevolver {
            }
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            namespace C_WeaponElite {
            }
            // Parent: C_DynamicProp
            // Field count: 0
            namespace C_DynamicPropAlias_cable_dynamic {
            }
            // Parent: CBaseAnimGraph
            // Field count: 4
            namespace CBaseProp {
                constexpr std::ptrdiff_t m_bModelOverrodeBlockLOS = 0x1158; // bool
                constexpr std::ptrdiff_t m_iShapeType = 0x115C; // int32
                constexpr std::ptrdiff_t m_bConformToCollisionBounds = 0x1160; // bool
                constexpr std::ptrdiff_t m_mPreferredCatchTransform = 0x1170; // CTransform
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
            namespace CInfoOffscreenPanoramaTexture {
                constexpr std::ptrdiff_t m_bDisabled = 0x5F8; // bool
                constexpr std::ptrdiff_t m_nResolutionX = 0x5FC; // int32
                constexpr std::ptrdiff_t m_nResolutionY = 0x600; // int32
                constexpr std::ptrdiff_t m_szLayoutFileName = 0x608; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_RenderAttrName = 0x610; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_TargetEntities = 0x618; // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
                constexpr std::ptrdiff_t m_nTargetChangeCount = 0x630; // int32
                constexpr std::ptrdiff_t m_vecCSSClasses = 0x638; // C_NetworkUtlVectorBase<CUtlSymbolLarge>
                constexpr std::ptrdiff_t m_bCheckCSSClasses = 0x7B0; // bool
            }
            // Parent: C_CSWeaponBase
            // Field count: 14
            //
            // Metadata:
            // NetworkVarNames: m_bRedraw (bool)
            // NetworkVarNames: m_bIsHeldByPlayer (bool)
            // NetworkVarNames: m_bPinPulled (bool)
            // NetworkVarNames: m_bJumpThrow (bool)
            // NetworkVarNames: m_bThrowAnimating (bool)
            // NetworkVarNames: m_fThrowTime (GameTime_t)
            // NetworkVarNames: m_fDropTime (GameTime_t)
            // NetworkVarNames: m_fPinPullTime (GameTime_t)
            // NetworkVarNames: m_bJustPulledPin (bool)
            // NetworkVarNames: m_nNextHoldTick (GameTick_t)
            // NetworkVarNames: m_flNextHoldFrac (float)
            // NetworkVarNames: m_hSwitchToWeaponAfterThrow (CHandle<CCSWeaponBase>)
            namespace C_BaseCSGrenade {
                constexpr std::ptrdiff_t m_bClientPredictDelete = 0x1F80; // bool
                constexpr std::ptrdiff_t m_bRedraw = 0x1F81; // bool
                constexpr std::ptrdiff_t m_bIsHeldByPlayer = 0x1F82; // bool
                constexpr std::ptrdiff_t m_bPinPulled = 0x1F83; // bool
                constexpr std::ptrdiff_t m_bJumpThrow = 0x1F84; // bool
                constexpr std::ptrdiff_t m_bThrowAnimating = 0x1F85; // bool
                constexpr std::ptrdiff_t m_fThrowTime = 0x1F88; // GameTime_t
                constexpr std::ptrdiff_t m_flThrowStrength = 0x1F90; // float32
                constexpr std::ptrdiff_t m_fDropTime = 0x2008; // GameTime_t
                constexpr std::ptrdiff_t m_fPinPullTime = 0x200C; // GameTime_t
                constexpr std::ptrdiff_t m_bJustPulledPin = 0x2010; // bool
                constexpr std::ptrdiff_t m_nNextHoldTick = 0x2014; // GameTick_t
                constexpr std::ptrdiff_t m_flNextHoldFrac = 0x2018; // float32
                constexpr std::ptrdiff_t m_hSwitchToWeaponAfterThrow = 0x201C; // CHandle<C_CSWeaponBase>
            }
            // Parent: CBaseFilter
            // Field count: 1
            namespace CFilterAttributeInt {
                constexpr std::ptrdiff_t m_sAttributeName = 0x650; // CUtlSymbolLarge
            }
            // Parent: CLogicalEntity
            // Field count: 11
            namespace CPointTemplate {
                constexpr std::ptrdiff_t m_iszWorldName = 0x5F8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszSource2EntityLumpName = 0x600; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszEntityFilterName = 0x608; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_flTimeoutInterval = 0x610; // float32
                constexpr std::ptrdiff_t m_bAsynchronouslySpawnEntities = 0x614; // bool
                constexpr std::ptrdiff_t m_clientOnlyEntityBehavior = 0x618; // PointTemplateClientOnlyEntityBehavior_t
                constexpr std::ptrdiff_t m_ownerSpawnGroupType = 0x61C; // PointTemplateOwnerSpawnGroupType_t
                constexpr std::ptrdiff_t m_createdSpawnGroupHandles = 0x620; // CUtlVector<uint32>
                constexpr std::ptrdiff_t m_SpawnedEntityHandles = 0x638; // CUtlVector<CEntityHandle>
                constexpr std::ptrdiff_t m_ScriptSpawnCallback = 0x650; // HSCRIPT
                constexpr std::ptrdiff_t m_ScriptCallbackScope = 0x658; // HSCRIPT
            }
            // Parent: CPlayerPawnComponent
            // Field count: 0
            namespace CPlayer_FlashlightServices {
            }
            // Parent: C_CSWeaponBase
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_bSequenceInProgress (bool)
            // NetworkVarNames: m_bRedraw (bool)
            namespace C_WeaponBaseItem {
                constexpr std::ptrdiff_t m_bSequenceInProgress = 0x1F80; // bool
                constexpr std::ptrdiff_t m_bRedraw = 0x1F81; // bool
            }
            // Parent: C_BaseModelEntity
            // Field count: 0
            namespace CWaterSplasher {
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // NetworkVarNames: m_Transforms (CTransform)
            // NetworkVarNames: m_hOwner (EHANDLE)
            namespace PhysicsRagdollPose_t {
                constexpr std::ptrdiff_t m_Transforms = 0x8; // C_NetworkUtlVectorBase<CTransform>
                constexpr std::ptrdiff_t m_hOwner = 0x20; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_bSetFromDebugHistory = 0x24; // bool
            }
            // Parent: CEntityComponent
            // Field count: 10
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
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_bMagazineRemoved (bool)
            namespace C_WeaponCZ75a {
                constexpr std::ptrdiff_t m_bMagazineRemoved = 0x1FB0; // bool
            }
            // Parent: C_CSGO_PreviewPlayer
            // Field count: 0
            namespace C_CSGO_TeamPreviewModel {
            }
            // Parent: C_BaseCSGrenadeProjectile
            // Field count: 0
            namespace C_FlashbangProjectile {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // NetworkVarNames: m_hOwner (CHandle<CBaseModelEntity>)
            // NetworkVarNames: m_nLastHitDamageLevel (int)
            namespace CDestructiblePartsComponent {
                constexpr std::ptrdiff_t __m_pChainEntity = 0x0; // CNetworkVarChainer
                constexpr std::ptrdiff_t m_vecDamageTakenByHitGroup = 0x48; // CUtlVector<uint16>
                constexpr std::ptrdiff_t m_hOwner = 0x60; // CHandle<C_BaseModelEntity>
                constexpr std::ptrdiff_t m_nLastHitDamageLevel = 0x64; // int32
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
            namespace CCSPlayerController_ActionTrackingServices {
                constexpr std::ptrdiff_t m_perRoundStats = 0x40; // C_UtlVectorEmbeddedNetworkVar<CSPerRoundStats_t>
                constexpr std::ptrdiff_t m_matchStats = 0xA8; // CSMatchStats_t
                constexpr std::ptrdiff_t m_iNumRoundKills = 0x128; // int32
                constexpr std::ptrdiff_t m_iNumRoundKillsHeadshots = 0x12C; // int32
                constexpr std::ptrdiff_t m_flTotalRoundDamageDealt = 0x130; // float32
            }
            // Parent: CBodyComponentSkeletonInstance
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_animationController (CBaseAnimGraphController)
            namespace CBodyComponentBaseAnimGraph {
                constexpr std::ptrdiff_t m_animationController = 0x5B0; // CBaseAnimGraphController
            }
            // Parent: C_BaseTrigger
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_flFluidDensity (float)
            namespace C_TriggerBuoyancy {
                constexpr std::ptrdiff_t m_BuoyancyHelper = 0xFF0; // CBuoyancyHelper
                constexpr std::ptrdiff_t m_flFluidDensity = 0x1108; // float32
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
            namespace CPlayer_MovementServices_Humanoid {
                constexpr std::ptrdiff_t m_flStepSoundTime = 0x238; // float32
                constexpr std::ptrdiff_t m_flFallVelocity = 0x23C; // float32
                constexpr std::ptrdiff_t m_bInCrouch = 0x240; // bool
                constexpr std::ptrdiff_t m_nCrouchState = 0x244; // uint32
                constexpr std::ptrdiff_t m_flCrouchTransitionStartTime = 0x248; // GameTime_t
                constexpr std::ptrdiff_t m_bDucked = 0x24C; // bool
                constexpr std::ptrdiff_t m_bDucking = 0x24D; // bool
                constexpr std::ptrdiff_t m_bInDuckJump = 0x24E; // bool
                constexpr std::ptrdiff_t m_groundNormal = 0x250; // Vector
                constexpr std::ptrdiff_t m_flSurfaceFriction = 0x25C; // float32
                constexpr std::ptrdiff_t m_surfaceProps = 0x260; // CUtlStringToken
                constexpr std::ptrdiff_t m_nStepside = 0x270; // int32
            }
            // Parent: C_BaseToggle
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_bIsUsable (bool)
            namespace C_BaseDoor {
                constexpr std::ptrdiff_t m_bIsUsable = 0xEB0; // bool
            }
            // Parent: None
            // Field count: 5
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
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_ID (CUtlStringToken)
            // NetworkVarNames: m_Values (Vector4D)
            namespace EntityRenderAttribute_t {
                constexpr std::ptrdiff_t m_ID = 0x30; // CUtlStringToken
                constexpr std::ptrdiff_t m_Values = 0x34; // Vector4D
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Inflow_ObservableVariableListener {
                constexpr std::ptrdiff_t m_nBlackboardReference = 0x80; // PulseRuntimeBlackboardReferenceIndex_t
                constexpr std::ptrdiff_t m_bSelfReference = 0x82; // bool
            }
            // Parent: None
            // Field count: 0
            namespace CFilterMultipleAPI {
            }
            // Parent: CHostageRescueZoneShim
            // Field count: 0
            namespace CHostageRescueZone {
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // NetworkVarNames: m_hModel (HModelStrong)
            // NetworkVarNames: m_bClientClothCreationSuppressed (bool)
            // NetworkVarNames: m_MeshGroupMask (MeshGroupMask_t)
            // NetworkVarNames: m_nBodyGroupChoices (int32)
            // NetworkVarNames: m_nIdealMotionType (int8)
            namespace CModelState {
                constexpr std::ptrdiff_t m_hModel = 0xD0; // CStrongHandle<InfoForResourceTypeCModel>
                constexpr std::ptrdiff_t m_ModelName = 0xD8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bClientClothCreationSuppressed = 0x1A9; // bool
                constexpr std::ptrdiff_t m_MeshGroupMask = 0x250; // uint64
                constexpr std::ptrdiff_t m_nBodyGroupChoices = 0x2A0; // C_NetworkUtlVectorBase<int32>
                constexpr std::ptrdiff_t m_nIdealMotionType = 0x2EA; // int8
                constexpr std::ptrdiff_t m_nForceLOD = 0x2EB; // int8
                constexpr std::ptrdiff_t m_nClothUpdateFlags = 0x2EC; // int8
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_LerpCameraSettings__CursorState_t {
                constexpr std::ptrdiff_t m_hCamera = 0x8; // CHandle<C_PointCamera>
                constexpr std::ptrdiff_t m_OverlaidStart = 0xC; // PointCameraSettings_t
                constexpr std::ptrdiff_t m_OverlaidEnd = 0x1C; // PointCameraSettings_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Outflow_CycleOrdered {
                constexpr std::ptrdiff_t m_Outputs = 0x48; // CUtlVector<CPulse_OutflowConnection>
            }
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            namespace C_WeaponP250 {
            }
            // Parent: C_PhysicsProp
            // Field count: 1
            //
            // Metadata:
            // MNetworkExcludeByName
            // NetworkVarNames: m_ShardDesc (shard_model_desc_t)
            namespace C_ShatterGlassShardPhysics {
                constexpr std::ptrdiff_t m_ShardDesc = 0x1318; // shard_model_desc_t
            }
            // Parent: CBaseFilter
            // Field count: 1
            namespace CFilterMassGreater {
                constexpr std::ptrdiff_t m_fFilterMass = 0x650; // float32
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
            namespace C_EntityDissolve {
                constexpr std::ptrdiff_t m_flStartTime = 0xEB8; // GameTime_t
                constexpr std::ptrdiff_t m_flFadeInStart = 0xEBC; // float32
                constexpr std::ptrdiff_t m_flFadeInLength = 0xEC0; // float32
                constexpr std::ptrdiff_t m_flFadeOutModelStart = 0xEC4; // float32
                constexpr std::ptrdiff_t m_flFadeOutModelLength = 0xEC8; // float32
                constexpr std::ptrdiff_t m_flFadeOutStart = 0xECC; // float32
                constexpr std::ptrdiff_t m_flFadeOutLength = 0xED0; // float32
                constexpr std::ptrdiff_t m_flNextSparkTime = 0xED4; // GameTime_t
                constexpr std::ptrdiff_t m_nDissolveType = 0xED8; // EntityDisolveType_t
                constexpr std::ptrdiff_t m_vDissolverOrigin = 0xEDC; // Vector
                constexpr std::ptrdiff_t m_nMagnitude = 0xEE8; // uint32
                constexpr std::ptrdiff_t m_bCoreExplode = 0xEEC; // bool
                constexpr std::ptrdiff_t m_bLinkedToServerEnt = 0xEED; // bool
            }
            // Parent: C_SoundOpvarSetAABBEntity
            // Field count: 0
            namespace C_SoundOpvarSetOBBEntity {
            }
            // Parent: CBaseAnimGraph
            // Field count: 14
            namespace C_ClientRagdoll {
                constexpr std::ptrdiff_t m_bFadeOut = 0x1158; // bool
                constexpr std::ptrdiff_t m_bImportant = 0x1159; // bool
                constexpr std::ptrdiff_t m_flEffectTime = 0x115C; // GameTime_t
                constexpr std::ptrdiff_t m_gibDespawnTime = 0x1160; // GameTime_t
                constexpr std::ptrdiff_t m_iCurrentFriction = 0x1164; // int32
                constexpr std::ptrdiff_t m_iMinFriction = 0x1168; // int32
                constexpr std::ptrdiff_t m_iMaxFriction = 0x116C; // int32
                constexpr std::ptrdiff_t m_iFrictionAnimState = 0x1170; // int32
                constexpr std::ptrdiff_t m_bReleaseRagdoll = 0x1174; // bool
                constexpr std::ptrdiff_t m_iEyeAttachment = 0x1175; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_bFadingOut = 0x1176; // bool
                constexpr std::ptrdiff_t m_flScaleEnd = 0x1178; // float32[10]
                constexpr std::ptrdiff_t m_flScaleTimeStart = 0x11A0; // GameTime_t[10]
                constexpr std::ptrdiff_t m_flScaleTimeEnd = 0x11C8; // GameTime_t[10]
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace PulseSelectorOutflowList_t {
                constexpr std::ptrdiff_t m_Outflows = 0x0; // CUtlVector<OutflowWithRequirements_t>
            }
            // Parent: CPlayerPawnComponent
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_vecSellbackPurchaseEntries (SellbackPurchaseEntry_t)
            namespace CCSPlayer_BuyServices {
                constexpr std::ptrdiff_t m_vecSellbackPurchaseEntries = 0x40; // C_UtlVectorEmbeddedNetworkVar<SellbackPurchaseEntry_t>
            }
            // Parent: C_BaseEntity
            // Field count: 0
            namespace C_PortraitWorldCallbackHandler {
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
            namespace C_CSTeam {
                constexpr std::ptrdiff_t m_szTeamMatchStat = 0x6B0; // char[512]
                constexpr std::ptrdiff_t m_numMapVictories = 0x8B0; // int32
                constexpr std::ptrdiff_t m_bSurrendered = 0x8B4; // bool
                constexpr std::ptrdiff_t m_scoreFirstHalf = 0x8B8; // int32
                constexpr std::ptrdiff_t m_scoreSecondHalf = 0x8BC; // int32
                constexpr std::ptrdiff_t m_scoreOvertime = 0x8C0; // int32
                constexpr std::ptrdiff_t m_szClanTeamname = 0x8C4; // char[129]
                constexpr std::ptrdiff_t m_iClanID = 0x948; // uint32
                constexpr std::ptrdiff_t m_szTeamFlagImage = 0x94C; // char[8]
                constexpr std::ptrdiff_t m_szTeamLogoImage = 0x954; // char[8]
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
            namespace C_TriggerPhysics {
                constexpr std::ptrdiff_t m_gravityScale = 0xFF0; // float32
                constexpr std::ptrdiff_t m_linearLimit = 0xFF4; // float32
                constexpr std::ptrdiff_t m_linearDamping = 0xFF8; // float32
                constexpr std::ptrdiff_t m_angularLimit = 0xFFC; // float32
                constexpr std::ptrdiff_t m_angularDamping = 0x1000; // float32
                constexpr std::ptrdiff_t m_linearForce = 0x1004; // float32
                constexpr std::ptrdiff_t m_flFrequency = 0x1008; // float32
                constexpr std::ptrdiff_t m_flDampingRatio = 0x100C; // float32
                constexpr std::ptrdiff_t m_vecLinearForcePointAt = 0x1010; // Vector
                constexpr std::ptrdiff_t m_bCollapseToForcePoint = 0x101C; // bool
                constexpr std::ptrdiff_t m_vecLinearForcePointAtWorld = 0x1020; // Vector
                constexpr std::ptrdiff_t m_vecLinearForceDirection = 0x102C; // Vector
                constexpr std::ptrdiff_t m_bConvertToDebrisWhenPossible = 0x1038; // bool
            }
            // Parent: C_BasePropDoor
            // Field count: 0
            namespace C_PropDoorRotating {
            }
            // Parent: C_BaseEntity
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_Handle (CHandle<CBaseEntity>)
            // NetworkVarNames: m_bSendHandle (bool)
            namespace C_HandleTest {
                constexpr std::ptrdiff_t m_Handle = 0x5F8; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_bSendHandle = 0x5FC; // bool
            }
            // Parent: C_BaseEntity
            // Field count: 8
            //
            // Metadata:
            // NetworkVarNames: m_worldName (string_t)
            // NetworkVarNames: m_layerName (string_t)
            // NetworkVarNames: m_bWorldLayerVisible (bool)
            // NetworkVarNames: m_bEntitiesSpawned (bool)
            namespace CInfoWorldLayer {
                constexpr std::ptrdiff_t m_pOutputOnEntitiesSpawned = 0x5F8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_worldName = 0x620; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_layerName = 0x628; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bWorldLayerVisible = 0x630; // bool
                constexpr std::ptrdiff_t m_bEntitiesSpawned = 0x631; // bool
                constexpr std::ptrdiff_t m_bCreateAsChildSpawnGroup = 0x632; // bool
                constexpr std::ptrdiff_t m_hLayerSpawnGroup = 0x634; // uint32
                constexpr std::ptrdiff_t m_bWorldLayerActuallyVisible = 0x638; // bool
            }
            // Parent: CBodyComponentSkeletonInstance
            // Field count: 0
            namespace CBodyComponentBaseModelEntity {
            }
            // Parent: CBaseFilter
            // Field count: 1
            namespace FilterDamageType {
                constexpr std::ptrdiff_t m_iDamageType = 0x650; // int32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_Attributes (CEconItemAttribute)
            namespace CAttributeList {
                constexpr std::ptrdiff_t m_Attributes = 0x8; // C_UtlVectorEmbeddedNetworkVar<CEconItemAttribute>
                constexpr std::ptrdiff_t m_pManager = 0x70; // CAttributeManager*
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
            namespace CPulseCell_Inflow_Wait {
                constexpr std::ptrdiff_t m_WakeResume = 0x48; // CPulse_ResumePoint
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
            namespace C_ParticleSystem {
                constexpr std::ptrdiff_t m_szSnapshotFileName = 0xEB0; // char[512]
                constexpr std::ptrdiff_t m_bActive = 0x10B0; // bool
                constexpr std::ptrdiff_t m_bFrozen = 0x10B1; // bool
                constexpr std::ptrdiff_t m_flFreezeTransitionDuration = 0x10B4; // float32
                constexpr std::ptrdiff_t m_nStopType = 0x10B8; // int32
                constexpr std::ptrdiff_t m_bAnimateDuringGameplayPause = 0x10BC; // bool
                constexpr std::ptrdiff_t m_iEffectIndex = 0x10C0; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                constexpr std::ptrdiff_t m_flStartTime = 0x10C8; // GameTime_t
                constexpr std::ptrdiff_t m_flPreSimTime = 0x10CC; // float32
                constexpr std::ptrdiff_t m_vServerControlPoints = 0x10D0; // Vector[4]
                constexpr std::ptrdiff_t m_iServerControlPointAssignments = 0x1100; // uint8[4]
                constexpr std::ptrdiff_t m_hControlPointEnts = 0x1104; // CHandle<C_BaseEntity>[64]
                constexpr std::ptrdiff_t m_bNoSave = 0x1204; // bool
                constexpr std::ptrdiff_t m_bNoFreeze = 0x1205; // bool
                constexpr std::ptrdiff_t m_bNoRamp = 0x1206; // bool
                constexpr std::ptrdiff_t m_bStartActive = 0x1207; // bool
                constexpr std::ptrdiff_t m_iszEffectName = 0x1208; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszControlPointNames = 0x1210; // CUtlSymbolLarge[64]
                constexpr std::ptrdiff_t m_nDataCP = 0x1410; // int32
                constexpr std::ptrdiff_t m_vecDataCPValue = 0x1414; // Vector
                constexpr std::ptrdiff_t m_nTintCP = 0x1420; // int32
                constexpr std::ptrdiff_t m_clrTint = 0x1424; // Color
                constexpr std::ptrdiff_t m_bOldActive = 0x1448; // bool
                constexpr std::ptrdiff_t m_bOldFrozen = 0x1449; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Outflow_CycleShuffled {
                constexpr std::ptrdiff_t m_Outputs = 0x48; // CUtlVector<CPulse_OutflowConnection>
            }
            // Parent: C_BaseCSGrenade
            // Field count: 0
            namespace C_DecoyGrenade {
            }
            // Parent: CBaseAnimGraph
            // Field count: 0
            namespace C_WaterBullet {
            }
            // Parent: CPlayerPawnComponent
            // Field count: 4
            //
            // Metadata:
            // NetworkVarNames: m_bIsRescuing (bool)
            // NetworkVarNames: m_weaponPurchasesThisMatch (WeaponPurchaseTracker_t)
            // NetworkVarNames: m_weaponPurchasesThisRound (WeaponPurchaseTracker_t)
            namespace CCSPlayer_ActionTrackingServices {
                constexpr std::ptrdiff_t m_hLastWeaponBeforeC4AutoSwitch = 0x40; // CHandle<C_BasePlayerWeapon>
                constexpr std::ptrdiff_t m_bIsRescuing = 0x44; // bool
                constexpr std::ptrdiff_t m_weaponPurchasesThisMatch = 0x48; // WeaponPurchaseTracker_t
                constexpr std::ptrdiff_t m_weaponPurchasesThisRound = 0xB8; // WeaponPurchaseTracker_t
            }
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            namespace C_WeaponHKP2000 {
            }
            // Parent: C_BaseTrigger
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_source (string_t)
            // NetworkVarNames: m_destination (string_t)
            namespace C_FootstepControl {
                constexpr std::ptrdiff_t m_source = 0xFF0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_destination = 0xFF8; // CUtlSymbolLarge
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
            namespace CCitadelSoundOpvarSetOBB {
                constexpr std::ptrdiff_t m_iszStackName = 0x610; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszOperatorName = 0x618; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszOpvarName = 0x620; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_vDistanceInnerMins = 0x628; // Vector
                constexpr std::ptrdiff_t m_vDistanceInnerMaxs = 0x634; // Vector
                constexpr std::ptrdiff_t m_vDistanceOuterMins = 0x640; // Vector
                constexpr std::ptrdiff_t m_vDistanceOuterMaxs = 0x64C; // Vector
                constexpr std::ptrdiff_t m_nAABBDirection = 0x658; // int32
            }
            // Parent: C_CSGO_EndOfMatchLineupEndpoint
            // Field count: 0
            namespace C_CSGO_EndOfMatchLineupStart {
            }
            // Parent: CPlayerPawnComponent
            // Field count: 0
            namespace CPlayer_WaterServices {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorCanvasItemSpecKV3
            namespace CPulseCell_BooleanSwitchState {
                constexpr std::ptrdiff_t m_Condition = 0x48; // PulseObservableBoolExpression_t
                constexpr std::ptrdiff_t m_SubGraph = 0xC0; // CPulse_OutflowConnection
                constexpr std::ptrdiff_t m_WhenTrue = 0x108; // CPulse_OutflowConnection
                constexpr std::ptrdiff_t m_WhenFalse = 0x150; // CPulse_OutflowConnection
            }
            // Parent: C_DynamicProp
            // Field count: 0
            namespace C_DynamicPropAlias_dynamic_prop {
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
            namespace C_EconEntity {
                constexpr std::ptrdiff_t m_flFlexDelayTime = 0x1378; // float32
                constexpr std::ptrdiff_t m_flFlexDelayedWeight = 0x1380; // float32*
                constexpr std::ptrdiff_t m_bAttributesInitialized = 0x1388; // bool
                constexpr std::ptrdiff_t m_AttributeManager = 0x1390; // C_AttributeContainer
                constexpr std::ptrdiff_t m_OriginalOwnerXuidLow = 0x1868; // uint32
                constexpr std::ptrdiff_t m_OriginalOwnerXuidHigh = 0x186C; // uint32
                constexpr std::ptrdiff_t m_nFallbackPaintKit = 0x1870; // int32
                constexpr std::ptrdiff_t m_nFallbackSeed = 0x1874; // int32
                constexpr std::ptrdiff_t m_flFallbackWear = 0x1878; // float32
                constexpr std::ptrdiff_t m_nFallbackStatTrak = 0x187C; // int32
                constexpr std::ptrdiff_t m_bClientside = 0x1880; // bool
                constexpr std::ptrdiff_t m_bParticleSystemsCreated = 0x1881; // bool
                constexpr std::ptrdiff_t m_vecAttachedParticles = 0x1888; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_hViewmodelAttachment = 0x18A0; // CHandle<CBaseAnimGraph>
                constexpr std::ptrdiff_t m_iOldTeam = 0x18A4; // int32
                constexpr std::ptrdiff_t m_bAttachmentDirty = 0x18A8; // bool
                constexpr std::ptrdiff_t m_nUnloadedModelIndex = 0x18AC; // int32
                constexpr std::ptrdiff_t m_iNumOwnerValidationRetries = 0x18B0; // int32
                constexpr std::ptrdiff_t m_hOldProvidee = 0x18C0; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_vecAttachedModels = 0x18C8; // CUtlVector<C_EconEntity::AttachedModelData_t>
            }
            // Parent: CPlayerPawnComponent
            // Field count: 0
            namespace CPlayer_UseServices {
            }
            // Parent: None
            // Field count: 1
            namespace CPulseCell_Unknown {
                constexpr std::ptrdiff_t m_UnknownKeys = 0x48; // KeyValues3
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
            // Parent: C_LateUpdatedAnimating
            // Field count: 0
            namespace C_CS2HudModelBase {
            }
            // Parent: None
            // Field count: 0
            namespace CCSGameModeRules_Noop {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulse_BlackboardReference {
                constexpr std::ptrdiff_t m_hBlackboardResource = 0x0; // CStrongHandle<InfoForResourceTypeIPulseGraphDef>
                constexpr std::ptrdiff_t m_BlackboardResource = 0x8; // PulseSymbol_t
                constexpr std::ptrdiff_t m_nNodeID = 0x18; // PulseDocNodeID_t
                constexpr std::ptrdiff_t m_NodeName = 0x20; // CGlobalSymbol
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
            namespace C_GradientFog {
                constexpr std::ptrdiff_t m_hGradientFogTexture = 0x5F8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_flFogStartDistance = 0x600; // float32
                constexpr std::ptrdiff_t m_flFogEndDistance = 0x604; // float32
                constexpr std::ptrdiff_t m_bHeightFogEnabled = 0x608; // bool
                constexpr std::ptrdiff_t m_flFogStartHeight = 0x60C; // float32
                constexpr std::ptrdiff_t m_flFogEndHeight = 0x610; // float32
                constexpr std::ptrdiff_t m_flFarZ = 0x614; // float32
                constexpr std::ptrdiff_t m_flFogMaxOpacity = 0x618; // float32
                constexpr std::ptrdiff_t m_flFogFalloffExponent = 0x61C; // float32
                constexpr std::ptrdiff_t m_flFogVerticalExponent = 0x620; // float32
                constexpr std::ptrdiff_t m_fogColor = 0x624; // Color
                constexpr std::ptrdiff_t m_flFogStrength = 0x628; // float32
                constexpr std::ptrdiff_t m_flFadeTime = 0x62C; // float32
                constexpr std::ptrdiff_t m_bStartDisabled = 0x630; // bool
                constexpr std::ptrdiff_t m_bIsEnabled = 0x631; // bool
                constexpr std::ptrdiff_t m_bGradientFogNeedsTextures = 0x632; // bool
            }
            // Parent: CPlayerControllerComponent
            // Field count: 4
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
            // Parent: CBaseFilter
            // Field count: 1
            namespace CFilterModel {
                constexpr std::ptrdiff_t m_iFilterModel = 0x650; // CUtlSymbolLarge
            }
            // Parent: C_SoundAreaEntityBase
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_vMin (Vector)
            // NetworkVarNames: m_vMax (Vector)
            namespace C_SoundAreaEntityOrientedBox {
                constexpr std::ptrdiff_t m_vMin = 0x620; // Vector
                constexpr std::ptrdiff_t m_vMax = 0x62C; // Vector
            }
            // Parent: C_SoundOpvarSetPointBase
            // Field count: 0
            namespace C_SoundOpvarSetPointEntity {
            }
            // Parent: C_CSWeaponBase
            // Field count: 0
            namespace C_CSWeaponBaseShotgun {
            }
            // Parent: C_CSPlayerPawn
            // Field count: 2
            namespace C_CSGO_PreviewPlayer {
                constexpr std::ptrdiff_t m_animgraphCharacterModeString = 0x3F10; // CGlobalSymbol
                constexpr std::ptrdiff_t m_flInitialModelScale = 0x3F18; // float32
            }
            // Parent: C_BarnLight
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_bShowLight (bool)
            namespace C_RectLight {
                constexpr std::ptrdiff_t m_bShowLight = 0x1200; // bool
            }
            // Parent: C_BaseModelEntity
            // Field count: 3
            namespace C_FuncTrackTrain {
                constexpr std::ptrdiff_t m_nLongAxis = 0xEB0; // int32
                constexpr std::ptrdiff_t m_flRadius = 0xEB4; // float32
                constexpr std::ptrdiff_t m_flLineLength = 0xEB8; // float32
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
            // NetworkVarNames: m_vecEndPos (VectorWS)
            namespace C_Beam {
                constexpr std::ptrdiff_t m_flFrameRate = 0xEB0; // float32
                constexpr std::ptrdiff_t m_flHDRColorScale = 0xEB4; // float32
                constexpr std::ptrdiff_t m_flFireTime = 0xEB8; // GameTime_t
                constexpr std::ptrdiff_t m_flDamage = 0xEBC; // float32
                constexpr std::ptrdiff_t m_nNumBeamEnts = 0xEC0; // uint8
                constexpr std::ptrdiff_t m_queryHandleHalo = 0xEC4; // int32
                constexpr std::ptrdiff_t m_hBaseMaterial = 0xEE8; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_nHaloIndex = 0xEF0; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_nBeamType = 0xEF8; // BeamType_t
                constexpr std::ptrdiff_t m_nBeamFlags = 0xEFC; // uint32
                constexpr std::ptrdiff_t m_hAttachEntity = 0xF00; // CHandle<C_BaseEntity>[10]
                constexpr std::ptrdiff_t m_nAttachIndex = 0xF28; // AttachmentHandle_t[10]
                constexpr std::ptrdiff_t m_fWidth = 0xF34; // float32
                constexpr std::ptrdiff_t m_fEndWidth = 0xF38; // float32
                constexpr std::ptrdiff_t m_fFadeLength = 0xF3C; // float32
                constexpr std::ptrdiff_t m_fHaloScale = 0xF40; // float32
                constexpr std::ptrdiff_t m_fAmplitude = 0xF44; // float32
                constexpr std::ptrdiff_t m_fStartFrame = 0xF48; // float32
                constexpr std::ptrdiff_t m_fSpeed = 0xF4C; // float32
                constexpr std::ptrdiff_t m_flFrame = 0xF50; // float32
                constexpr std::ptrdiff_t m_nClipStyle = 0xF54; // BeamClipStyle_t
                constexpr std::ptrdiff_t m_bTurnedOff = 0xF58; // bool
                constexpr std::ptrdiff_t m_vecEndPos = 0xF5C; // VectorWS
                constexpr std::ptrdiff_t m_hEndEntity = 0xF68; // CHandle<C_BaseEntity>
            }
            // Parent: C_BaseEntity
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
            namespace C_EnvLightProbeVolume {
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_AmbientCube = 0x15F0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SDF = 0x15F8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SH2_DC = 0x1600; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SH2_R = 0x1608; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SH2_G = 0x1610; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SH2_B = 0x1618; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightIndicesTexture = 0x1620; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightScalarsTexture = 0x1628; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightShadowsTexture = 0x1630; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_vBoxMins = 0x1638; // Vector
                constexpr std::ptrdiff_t m_Entity_vBoxMaxs = 0x1644; // Vector
                constexpr std::ptrdiff_t m_Entity_bMoveable = 0x1650; // bool
                constexpr std::ptrdiff_t m_Entity_nHandshake = 0x1654; // int32
                constexpr std::ptrdiff_t m_Entity_nPriority = 0x1658; // int32
                constexpr std::ptrdiff_t m_Entity_bStartDisabled = 0x165C; // bool
                constexpr std::ptrdiff_t m_Entity_nLightProbeSizeX = 0x1660; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeSizeY = 0x1664; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeSizeZ = 0x1668; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasX = 0x166C; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasY = 0x1670; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasZ = 0x1674; // int32
                constexpr std::ptrdiff_t m_Entity_bEnabled = 0x1681; // bool
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
            namespace C_FuncConveyor {
                constexpr std::ptrdiff_t m_vecMoveDirEntitySpace = 0xEB8; // Vector
                constexpr std::ptrdiff_t m_flTargetSpeed = 0xEC4; // float32
                constexpr std::ptrdiff_t m_nTransitionStartTick = 0xEC8; // GameTick_t
                constexpr std::ptrdiff_t m_nTransitionDurationTicks = 0xECC; // int32
                constexpr std::ptrdiff_t m_flTransitionStartSpeed = 0xED0; // float32
                constexpr std::ptrdiff_t m_hConveyorModels = 0xED8; // C_NetworkUtlVectorBase<CHandle<C_BaseEntity>>
                constexpr std::ptrdiff_t m_flCurrentConveyorOffset = 0xEF0; // float32
                constexpr std::ptrdiff_t m_flCurrentConveyorSpeed = 0xEF4; // float32
            }
            // Parent: CBaseAnimGraph
            // Field count: 29
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
            // NetworkVarNames: m_AttributeManager (CAttributeContainer)
            namespace C_PlantedC4 {
                constexpr std::ptrdiff_t m_bBombTicking = 0x1160; // bool
                constexpr std::ptrdiff_t m_nBombSite = 0x1164; // int32
                constexpr std::ptrdiff_t m_nSourceSoundscapeHash = 0x1168; // int32
                constexpr std::ptrdiff_t m_entitySpottedState = 0x1170; // EntitySpottedState_t
                constexpr std::ptrdiff_t m_flNextGlow = 0x1188; // GameTime_t
                constexpr std::ptrdiff_t m_flNextBeep = 0x118C; // GameTime_t
                constexpr std::ptrdiff_t m_flC4Blow = 0x1190; // GameTime_t
                constexpr std::ptrdiff_t m_bCannotBeDefused = 0x1194; // bool
                constexpr std::ptrdiff_t m_bHasExploded = 0x1195; // bool
                constexpr std::ptrdiff_t m_flTimerLength = 0x1198; // float32
                constexpr std::ptrdiff_t m_bBeingDefused = 0x119C; // bool
                constexpr std::ptrdiff_t m_bTriggerWarning = 0x11A0; // float32
                constexpr std::ptrdiff_t m_bExplodeWarning = 0x11A4; // float32
                constexpr std::ptrdiff_t m_bC4Activated = 0x11A8; // bool
                constexpr std::ptrdiff_t m_bTenSecWarning = 0x11A9; // bool
                constexpr std::ptrdiff_t m_flDefuseLength = 0x11AC; // float32
                constexpr std::ptrdiff_t m_flDefuseCountDown = 0x11B0; // GameTime_t
                constexpr std::ptrdiff_t m_bBombDefused = 0x11B4; // bool
                constexpr std::ptrdiff_t m_hBombDefuser = 0x11B8; // CHandle<C_CSPlayerPawn>
                constexpr std::ptrdiff_t m_AttributeManager = 0x11C0; // C_AttributeContainer
                constexpr std::ptrdiff_t m_hDefuserMultimeter = 0x1698; // CHandle<C_Multimeter>
                constexpr std::ptrdiff_t m_flNextRadarFlashTime = 0x169C; // GameTime_t
                constexpr std::ptrdiff_t m_bRadarFlash = 0x16A0; // bool
                constexpr std::ptrdiff_t m_pBombDefuser = 0x16A4; // CHandle<C_CSPlayerPawn>
                constexpr std::ptrdiff_t m_fLastDefuseTime = 0x16A8; // GameTime_t
                constexpr std::ptrdiff_t m_pPredictionOwner = 0x16B0; // CBasePlayerController*
                constexpr std::ptrdiff_t m_vecC4ExplodeSpectatePos = 0x16B8; // Vector
                constexpr std::ptrdiff_t m_vecC4ExplodeSpectateAng = 0x16C4; // QAngle
                constexpr std::ptrdiff_t m_flC4ExplodeSpectateDuration = 0x16D0; // float32
            }
            // Parent: C_CSGO_TeamIntroCharacterPosition
            // Field count: 0
            namespace CCSGO_WingmanIntroCharacterPosition {
            }
            // Parent: CBaseAnimGraph
            // Field count: 9
            //
            // Metadata:
            // NetworkVarNames: m_ragEnabled (bool)
            // NetworkVarNames: m_ragPos (Vector)
            // NetworkVarNames: m_ragAngles (QAngle)
            // NetworkVarNames: m_flBlendWeight (float32)
            // NetworkVarNames: m_hRagdollSource (EHANDLE)
            namespace C_RagdollProp {
                constexpr std::ptrdiff_t m_ragEnabled = 0x1160; // C_NetworkUtlVectorBase<bool>
                constexpr std::ptrdiff_t m_ragPos = 0x1178; // C_NetworkUtlVectorBase<Vector>
                constexpr std::ptrdiff_t m_ragAngles = 0x1190; // C_NetworkUtlVectorBase<QAngle>
                constexpr std::ptrdiff_t m_flBlendWeight = 0x11A8; // float32
                constexpr std::ptrdiff_t m_hRagdollSource = 0x11AC; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_iEyeAttachment = 0x11B0; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_flBlendWeightCurrent = 0x11B4; // float32
                constexpr std::ptrdiff_t m_parentPhysicsBoneIndices = 0x11B8; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_worldSpaceBoneComputationOrder = 0x11D0; // CUtlVector<int32>
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulse_CallInfo {
                constexpr std::ptrdiff_t m_PortName = 0x0; // PulseSymbol_t
                constexpr std::ptrdiff_t m_nEditorNodeID = 0x10; // PulseDocNodeID_t
                constexpr std::ptrdiff_t m_RegisterMap = 0x18; // PulseRegisterMap_t
                constexpr std::ptrdiff_t m_CallMethodID = 0x48; // PulseDocNodeID_t
                constexpr std::ptrdiff_t m_nSrcChunk = 0x4C; // PulseRuntimeChunkIndex_t
                constexpr std::ptrdiff_t m_nSrcInstruction = 0x50; // int32
            }
            // Parent: C_BaseModelEntity
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_CLightComponent (CLightComponent::Storage_t)
            namespace C_LightEntity {
                constexpr std::ptrdiff_t m_CLightComponent = 0xEB0; // CLightComponent*
            }
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            namespace C_WeaponNegev {
            }
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            namespace C_WeaponFiveSeven {
            }
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            namespace C_WeaponMP9 {
            }
            // Parent: C_DynamicProp
            // Field count: 0
            namespace C_DynamicPropAlias_prop_dynamic_override {
            }
            // Parent: CEnvSoundscape
            // Field count: 0
            namespace CEnvSoundscapeTriggerable {
            }
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            namespace C_AK47 {
            }
            // Parent: C_BaseEntity
            // Field count: 10
            namespace C_CSGO_MapPreviewCameraPathNode {
                constexpr std::ptrdiff_t m_szParentPathUniqueID = 0x5F8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_nPathIndex = 0x600; // int32
                constexpr std::ptrdiff_t m_vInTangentLocal = 0x604; // Vector
                constexpr std::ptrdiff_t m_vOutTangentLocal = 0x610; // Vector
                constexpr std::ptrdiff_t m_flFOV = 0x61C; // float32
                constexpr std::ptrdiff_t m_flCameraSpeed = 0x620; // float32
                constexpr std::ptrdiff_t m_flEaseIn = 0x624; // float32
                constexpr std::ptrdiff_t m_flEaseOut = 0x628; // float32
                constexpr std::ptrdiff_t m_vInTangentWorld = 0x62C; // Vector
                constexpr std::ptrdiff_t m_vOutTangentWorld = 0x638; // Vector
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
            namespace C_CSPlayerResource {
                constexpr std::ptrdiff_t m_bHostageAlive = 0x5F8; // bool[12]
                constexpr std::ptrdiff_t m_isHostageFollowingSomeone = 0x604; // bool[12]
                constexpr std::ptrdiff_t m_iHostageEntityIDs = 0x610; // CEntityIndex[12]
                constexpr std::ptrdiff_t m_bombsiteCenterA = 0x640; // Vector
                constexpr std::ptrdiff_t m_bombsiteCenterB = 0x64C; // Vector
                constexpr std::ptrdiff_t m_hostageRescueX = 0x658; // int32[4]
                constexpr std::ptrdiff_t m_hostageRescueY = 0x668; // int32[4]
                constexpr std::ptrdiff_t m_hostageRescueZ = 0x678; // int32[4]
                constexpr std::ptrdiff_t m_bEndMatchNextMapAllVoted = 0x688; // bool
                constexpr std::ptrdiff_t m_foundGoalPositions = 0x689; // bool
            }
            // Parent: C_BaseEntity
            // Field count: 2
            namespace CSkyboxReference {
                constexpr std::ptrdiff_t m_worldGroupId = 0x5F8; // WorldGroupId_t
                constexpr std::ptrdiff_t m_hSkyCamera = 0x5FC; // CHandle<C_SkyCamera>
            }
            // Parent: C_PointEntity
            // Field count: 14
            namespace CMapInfo {
                constexpr std::ptrdiff_t m_iBuyingStatus = 0x5F8; // int32
                constexpr std::ptrdiff_t m_flBombRadius = 0x5FC; // float32
                constexpr std::ptrdiff_t m_iPetPopulation = 0x600; // int32
                constexpr std::ptrdiff_t m_bUseNormalSpawnsForDM = 0x604; // bool
                constexpr std::ptrdiff_t m_bDisableAutoGeneratedDMSpawns = 0x605; // bool
                constexpr std::ptrdiff_t m_flBotMaxVisionDistance = 0x608; // float32
                constexpr std::ptrdiff_t m_iHostageCount = 0x60C; // int32
                constexpr std::ptrdiff_t m_bFadePlayerVisibilityFarZ = 0x610; // bool
                constexpr std::ptrdiff_t m_bRainTraceToSkyEnabled = 0x611; // bool
                constexpr std::ptrdiff_t m_flEnvRainStrength = 0x614; // float32
                constexpr std::ptrdiff_t m_flEnvPuddleRippleStrength = 0x618; // float32
                constexpr std::ptrdiff_t m_flEnvPuddleRippleDirection = 0x61C; // float32
                constexpr std::ptrdiff_t m_flEnvWetnessCoverage = 0x620; // float32
                constexpr std::ptrdiff_t m_flEnvWetnessDryingAmount = 0x624; // float32
            }
            // Parent: C_CSGO_TeamPreviewCamera
            // Field count: 0
            namespace C_CSGO_EndOfMatchCamera {
            }
            // Parent: C_CS2HudModelBase
            // Field count: 0
            namespace C_CS2HudModelArms {
            }
            // Parent: C_LightEntity
            // Field count: 0
            namespace C_LightSpotEntity {
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // NetworkVarNames: m_flDMBonusStartTime (GameTime_t)
            // NetworkVarNames: m_flDMBonusTimeLength (float)
            // NetworkVarNames: m_sDMBonusWeapon (CUtlString)
            namespace CCSGameModeRules_Deathmatch {
                constexpr std::ptrdiff_t m_flDMBonusStartTime = 0x30; // GameTime_t
                constexpr std::ptrdiff_t m_flDMBonusTimeLength = 0x34; // float32
                constexpr std::ptrdiff_t m_sDMBonusWeapon = 0x38; // CUtlString
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            namespace CPulseCell_CursorQueue {
                constexpr std::ptrdiff_t m_nCursorsAllowedToRunParallel = 0x98; // int32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            namespace CPulseCell_Value_RandomFloat {
            }
            // Parent: None
            // Field count: 0
            namespace CPulseExecCursor {
            }
            // Parent: C_BreakableProp
            // Field count: 1
            //
            // Metadata:
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByUserGroup
            // MNetworkExcludeByName
            // MNetworkExcludeByUserGroup
            // MNetworkIncludeByName
            // NetworkVarNames: m_bAwake (bool)
            namespace C_PhysicsProp {
                constexpr std::ptrdiff_t m_bAwake = 0x1300; // bool
            }
            // Parent: CBaseFilter
            // Field count: 1
            namespace CFilterTeam {
                constexpr std::ptrdiff_t m_iFilterTeam = 0x650; // int32
            }
            // Parent: C_CSGO_PreviewPlayer
            // Field count: 0
            namespace C_CSGO_PreviewPlayerAlias_csgo_player_previewmodel {
            }
            // Parent: C_BaseCSGrenade
            // Field count: 0
            namespace C_SmokeGrenade {
            }
            // Parent: None
            // Field count: 0
            namespace CompositeMaterialInputLooseVariableType_t {
            }
            // Parent: None
            // Field count: 0
            namespace PulseCursorCancelPriority_t {
            }
        }
    }
}
