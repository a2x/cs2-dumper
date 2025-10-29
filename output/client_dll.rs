// Generated using https://github.com/a2x/cs2-dumper
// 2025-10-29 20:26:00.560999200 UTC

#![allow(non_upper_case_globals, non_camel_case_types, non_snake_case, unused)]

pub mod cs2_dumper {
    pub mod schemas {
        // Module: client.dll
        // Class count: 212
        // Enum count: 4
        pub mod client_dll {
            // Alignment: 4
            // Member count: 30
            #[repr(u32)]
            pub enum CBasePlayerWeaponVData {
                 = 0x0
            }
            // Parent: C_Inferno
            // Field count: 0
            pub mod C_FireCrackerBlast {
            }
            // Parent: CPlayerPawnComponent
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_hPlayerPing (CHandle<CPlayerPing>)
            pub mod CCSPlayer_PingServices {
                pub const m_hPlayerPing: usize = 0x40; // CHandle<C_PlayerPing>
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
            pub mod C_EnvWindShared {
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
                pub const m_hEntOwner: usize = 0x3C; // CHandle<C_BaseEntity>
            }
            // Parent: C_BaseEntity
            // Field count: 4
            //
            // Metadata:
            // NetworkVarNames: m_skyboxData (sky3dparams_t)
            // NetworkVarNames: m_skyboxSlotToken (CUtlStringToken)
            pub mod C_SkyCamera {
                pub const m_skyboxData: usize = 0x5F8; // sky3dparams_t
                pub const m_skyboxSlotToken: usize = 0x688; // CUtlStringToken
                pub const m_bUseAngles: usize = 0x68C; // bool
                pub const m_pNext: usize = 0x690; // C_SkyCamera*
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Base {
                pub const m_nEditorNodeID: usize = 0x8; // PulseDocNodeID_t
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
            pub mod C_EnvCubemapFog {
                pub const m_flEndDistance: usize = 0x5F8; // float32
                pub const m_flStartDistance: usize = 0x5FC; // float32
                pub const m_flFogFalloffExponent: usize = 0x600; // float32
                pub const m_bHeightFogEnabled: usize = 0x604; // bool
                pub const m_flFogHeightWidth: usize = 0x608; // float32
                pub const m_flFogHeightEnd: usize = 0x60C; // float32
                pub const m_flFogHeightStart: usize = 0x610; // float32
                pub const m_flFogHeightExponent: usize = 0x614; // float32
                pub const m_flLODBias: usize = 0x618; // float32
                pub const m_bActive: usize = 0x61C; // bool
                pub const m_bStartDisabled: usize = 0x61D; // bool
                pub const m_flFogMaxOpacity: usize = 0x620; // float32
                pub const m_nCubemapSourceType: usize = 0x624; // int32
                pub const m_hSkyMaterial: usize = 0x628; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_iszSkyEntity: usize = 0x630; // CUtlSymbolLarge
                pub const m_hFogCubemapTexture: usize = 0x638; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_bHasHeightFogEnd: usize = 0x640; // bool
                pub const m_bFirstTime: usize = 0x641; // bool
            }
            // Parent: C_CSGO_TeamSelectCharacterPosition
            // Field count: 0
            pub mod C_CSGO_TeamSelectTerroristPosition {
            }
            // Parent: None
            // Field count: 5
            pub mod C_BaseFlex__Emphasized_Phoneme {
                pub const m_sClassName: usize = 0x0; // CUtlString
                pub const m_flAmount: usize = 0x18; // float32
                pub const m_bRequired: usize = 0x1C; // bool
                pub const m_bBasechecked: usize = 0x1D; // bool
                pub const m_bValid: usize = 0x1E; // bool
            }
            // Parent: CBaseAnimGraph
            // Field count: 0
            pub mod C_HostageCarriableProp {
            }
            // Parent: None
            // Field count: 6
            pub mod C_BulletHitModel {
                pub const m_matLocal: usize = 0x1158; // matrix3x4_t
                pub const m_iBoneIndex: usize = 0x1188; // int32
                pub const m_hPlayerParent: usize = 0x118C; // CHandle<C_BaseEntity>
                pub const m_bIsHit: usize = 0x1190; // bool
                pub const m_flTimeCreated: usize = 0x1194; // float32
                pub const m_vecStartPos: usize = 0x1198; // Vector
            }
            // Parent: C_FuncBrush
            // Field count: 3
            //
            // Metadata:
            // NetworkVarNames: m_EffectName (string_t)
            // NetworkVarNames: m_bState (bool)
            pub mod C_FuncElectrifiedVolume {
                pub const m_nAmbientEffect: usize = 0xEB0; // ParticleIndex_t
                pub const m_EffectName: usize = 0xEB8; // CUtlSymbolLarge
                pub const m_bState: usize = 0xEC0; // bool
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
            pub mod C_MapVetoPickController {
                pub const m_nDraftType: usize = 0x608; // int32
                pub const m_nTeamWinningCoinToss: usize = 0x60C; // int32
                pub const m_nTeamWithFirstChoice: usize = 0x610; // int32[64]
                pub const m_nVoteMapIdsList: usize = 0x710; // int32[7]
                pub const m_nAccountIDs: usize = 0x72C; // int32[64]
                pub const m_nMapId0: usize = 0x82C; // int32[64]
                pub const m_nMapId1: usize = 0x92C; // int32[64]
                pub const m_nMapId2: usize = 0xA2C; // int32[64]
                pub const m_nMapId3: usize = 0xB2C; // int32[64]
                pub const m_nMapId4: usize = 0xC2C; // int32[64]
                pub const m_nMapId5: usize = 0xD2C; // int32[64]
                pub const m_nStartingSide0: usize = 0xE2C; // int32[64]
                pub const m_nCurrentPhase: usize = 0xF2C; // int32
                pub const m_nPhaseStartTick: usize = 0xF30; // int32
                pub const m_nPhaseDurationTicks: usize = 0xF34; // int32
                pub const m_nPostDataUpdateTick: usize = 0xF38; // int32
                pub const m_bDisabledHud: usize = 0xF3C; // bool
            }
            // Parent: None
            // Field count: 0
            pub mod C_BaseEntityAPI {
            }
            // Parent: C_PointClientUIWorldPanel
            // Field count: 4
            pub mod CPointOffScreenIndicatorUi {
                pub const m_bBeenEnabled: usize = 0x1100; // bool
                pub const m_bHide: usize = 0x1101; // bool
                pub const m_flSeenTargetTime: usize = 0x1104; // float32
                pub const m_pTargetPanel: usize = 0x1108; // C_PointClientUIWorldPanel*
            }
            // Parent: CPlayer_UseServices
            // Field count: 0
            pub mod CCSObserver_UseServices {
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
            pub mod C_PostProcessingVolume {
                pub const m_hPostSettings: usize = 0x1000; // CStrongHandle<InfoForResourceTypeCPostProcessingResource>
                pub const m_flFadeDuration: usize = 0x1008; // float32
                pub const m_flMinLogExposure: usize = 0x100C; // float32
                pub const m_flMaxLogExposure: usize = 0x1010; // float32
                pub const m_flMinExposure: usize = 0x1014; // float32
                pub const m_flMaxExposure: usize = 0x1018; // float32
                pub const m_flExposureCompensation: usize = 0x101C; // float32
                pub const m_flExposureFadeSpeedUp: usize = 0x1020; // float32
                pub const m_flExposureFadeSpeedDown: usize = 0x1024; // float32
                pub const m_flTonemapEVSmoothingRange: usize = 0x1028; // float32
                pub const m_bMaster: usize = 0x102C; // bool
                pub const m_bExposureControl: usize = 0x102D; // bool
            }
            // Parent: CPlayer_UseServices
            // Field count: 0
            pub mod CCSPlayer_UseServices {
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
            pub mod C_CSPlayerPawnBase {
                pub const m_pPingServices: usize = 0x15D8; // CCSPlayer_PingServices*
                pub const m_previousPlayerState: usize = 0x15E0; // CSPlayerState
                pub const m_iPlayerState: usize = 0x15E4; // CSPlayerState
                pub const m_bHasMovedSinceSpawn: usize = 0x15E8; // bool
                pub const m_flLastSpawnTimeIndex: usize = 0x15EC; // GameTime_t
                pub const m_iProgressBarDuration: usize = 0x15F0; // int32
                pub const m_flProgressBarStartTime: usize = 0x15F4; // float32
                pub const m_flClientDeathTime: usize = 0x15F8; // GameTime_t
                pub const m_flFlashBangTime: usize = 0x15FC; // float32
                pub const m_flFlashScreenshotAlpha: usize = 0x1600; // float32
                pub const m_flFlashOverlayAlpha: usize = 0x1604; // float32
                pub const m_bFlashBuildUp: usize = 0x1608; // bool
                pub const m_bFlashDspHasBeenCleared: usize = 0x1609; // bool
                pub const m_bFlashScreenshotHasBeenGrabbed: usize = 0x160A; // bool
                pub const m_flFlashMaxAlpha: usize = 0x160C; // float32
                pub const m_flFlashDuration: usize = 0x1610; // float32
                pub const m_flClientHealthFadeChangeTimestamp: usize = 0x1614; // GameTime_t
                pub const m_nClientHealthFadeParityValue: usize = 0x1618; // int32
                pub const m_fNextThinkPushAway: usize = 0x161C; // float32
                pub const m_flCurrentMusicStartTime: usize = 0x1624; // float32
                pub const m_flMusicRoundStartTime: usize = 0x1628; // float32
                pub const m_bDeferStartMusicOnWarmup: usize = 0x162C; // bool
                pub const m_flLastSmokeOverlayAlpha: usize = 0x1630; // float32
                pub const m_flLastSmokeAge: usize = 0x1634; // float32
                pub const m_vLastSmokeOverlayColor: usize = 0x1638; // Vector
                pub const m_hOriginalController: usize = 0x1660; // CHandle<CCSPlayerController>
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
            pub mod C_C4 {
                pub const m_activeLightParticleIndex: usize = 0x1F80; // ParticleIndex_t
                pub const m_eActiveLightEffect: usize = 0x1F84; // C4LightEffect_t
                pub const m_bStartedArming: usize = 0x1F88; // bool
                pub const m_fArmedTime: usize = 0x1F8C; // GameTime_t
                pub const m_bBombPlacedAnimation: usize = 0x1F90; // bool
                pub const m_bIsPlantingViaUse: usize = 0x1F91; // bool
                pub const m_entitySpottedState: usize = 0x1F98; // EntitySpottedState_t
                pub const m_nSpotRules: usize = 0x1FB0; // int32
                pub const m_bPlayedArmingBeeps: usize = 0x1FB4; // bool[7]
                pub const m_bBombPlanted: usize = 0x1FBB; // bool
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
            pub mod C_RetakeGameRules {
                pub const m_nMatchSeed: usize = 0xF8; // int32
                pub const m_bBlockersPresent: usize = 0xFC; // bool
                pub const m_bRoundInProgress: usize = 0xFD; // bool
                pub const m_iFirstSecondHalfRound: usize = 0x100; // int32
                pub const m_iBombSite: usize = 0x104; // int32
                pub const m_hBombPlanter: usize = 0x108; // CHandle<C_CSPlayerPawn>
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
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            pub mod C_WeaponAWP {
            }
            // Parent: C_BaseToggle
            // Field count: 3
            //
            // Metadata:
            // NetworkVarNames: m_glowEntity (CHandle<C_BaseModelEntity>)
            // NetworkVarNames: m_usable (bool)
            // NetworkVarNames: m_szDisplayText (string_t)
            pub mod C_BaseButton {
                pub const m_glowEntity: usize = 0xEB0; // CHandle<C_BaseModelEntity>
                pub const m_usable: usize = 0xEB4; // bool
                pub const m_szDisplayText: usize = 0xEB8; // CUtlSymbolLarge
            }
            // Parent: CPlayer_ObserverServices
            // Field count: 1
            pub mod CCSObserver_ObserverServices {
                pub const m_obsInterpState: usize = 0x5C; // ObserverInterpState_t
            }
            // Parent: CEntityComponent
            // Field count: 1
            pub mod CHitboxComponent {
                pub const m_flBoundsExpandRadius: usize = 0x14; // float32
            }
            // Parent: C_BaseEntity
            // Field count: 0
            pub mod C_CSMinimapBoundary {
            }
            // Parent: CEntityComponent
            // Field count: 0
            pub mod CPathQueryComponent {
            }
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            pub mod C_WeaponUMP45 {
            }
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            pub mod C_WeaponG3SG1 {
            }
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            pub mod C_WeaponFamas {
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
            pub mod C_EnvVolumetricFogController {
                pub const m_flScattering: usize = 0x5F8; // float32
                pub const m_TintColor: usize = 0x5FC; // Color
                pub const m_flAnisotropy: usize = 0x600; // float32
                pub const m_flFadeSpeed: usize = 0x604; // float32
                pub const m_flDrawDistance: usize = 0x608; // float32
                pub const m_flFadeInStart: usize = 0x60C; // float32
                pub const m_flFadeInEnd: usize = 0x610; // float32
                pub const m_flIndirectStrength: usize = 0x614; // float32
                pub const m_nVolumeDepth: usize = 0x618; // int32
                pub const m_fFirstVolumeSliceThickness: usize = 0x61C; // float32
                pub const m_nIndirectTextureDimX: usize = 0x620; // int32
                pub const m_nIndirectTextureDimY: usize = 0x624; // int32
                pub const m_nIndirectTextureDimZ: usize = 0x628; // int32
                pub const m_vBoxMins: usize = 0x62C; // Vector
                pub const m_vBoxMaxs: usize = 0x638; // Vector
                pub const m_bActive: usize = 0x644; // bool
                pub const m_flStartAnisoTime: usize = 0x648; // GameTime_t
                pub const m_flStartScatterTime: usize = 0x64C; // GameTime_t
                pub const m_flStartDrawDistanceTime: usize = 0x650; // GameTime_t
                pub const m_flStartAnisotropy: usize = 0x654; // float32
                pub const m_flStartScattering: usize = 0x658; // float32
                pub const m_flStartDrawDistance: usize = 0x65C; // float32
                pub const m_flDefaultAnisotropy: usize = 0x660; // float32
                pub const m_flDefaultScattering: usize = 0x664; // float32
                pub const m_flDefaultDrawDistance: usize = 0x668; // float32
                pub const m_bStartDisabled: usize = 0x66C; // bool
                pub const m_bEnableIndirect: usize = 0x66D; // bool
                pub const m_bIsMaster: usize = 0x66E; // bool
                pub const m_hFogIndirectTexture: usize = 0x670; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_nForceRefreshCount: usize = 0x678; // int32
                pub const m_fNoiseSpeed: usize = 0x67C; // float32
                pub const m_fNoiseStrength: usize = 0x680; // float32
                pub const m_vNoiseScale: usize = 0x684; // Vector
                pub const m_fWindSpeed: usize = 0x690; // float32
                pub const m_vWindDirection: usize = 0x694; // Vector
                pub const m_bFirstTime: usize = 0x6A0; // bool
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
            pub mod C_EnvWindVolume {
                pub const m_bActive: usize = 0x5F8; // bool
                pub const m_vBoxMins: usize = 0x5FC; // Vector
                pub const m_vBoxMaxs: usize = 0x608; // Vector
                pub const m_bStartDisabled: usize = 0x614; // bool
                pub const m_nShape: usize = 0x618; // int32
                pub const m_fWindSpeedMultiplier: usize = 0x61C; // float32
                pub const m_fWindTurbulenceMultiplier: usize = 0x620; // float32
                pub const m_fWindSpeedVariationMultiplier: usize = 0x624; // float32
                pub const m_fWindDirectionVariationMultiplier: usize = 0x628; // float32
            }
            // Parent: None
            // Field count: 0
            pub mod CBasePlayerControllerAPI {
            }
            // Parent: C_PathParticleRope
            // Field count: 0
            pub mod C_PathParticleRopeAlias_path_particle_rope_clientside {
            }
            // Parent: C_PointEntity
            // Field count: 1
            pub mod CPointChildModifier {
                pub const m_bOrphanInsteadOfDeletingChildrenOnRemove: usize = 0x5F8; // bool
            }
            // Parent: C_CSGO_MapPreviewCameraPath
            // Field count: 1
            pub mod C_CSGO_TeamPreviewCamera {
                pub const m_nVariant: usize = 0x680; // int32
            }
            // Parent: CInfoDynamicShadowHint
            // Field count: 2
            pub mod CInfoDynamicShadowHintBox {
                pub const m_vBoxMins: usize = 0x610; // Vector
                pub const m_vBoxMaxs: usize = 0x61C; // Vector
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
                pub const m_bSequenceFinished: usize = 0x14A8; // bool
                pub const m_flSoundSyncTime: usize = 0x14AC; // float32
                pub const m_nActiveIKChainMask: usize = 0x14B0; // uint32
                pub const m_hSequence: usize = 0x14B4; // HSequence
                pub const m_flSeqStartTime: usize = 0x14B8; // GameTime_t
                pub const m_flSeqFixedCycle: usize = 0x14BC; // float32
                pub const m_nAnimLoopMode: usize = 0x14C0; // AnimLoopMode_t
                pub const m_flPlaybackRate: usize = 0x14C4; // CNetworkedQuantizedFloat
                pub const m_nNotifyState: usize = 0x14D0; // SequenceFinishNotifyState_t
                pub const m_bNetworkedAnimationInputsChanged: usize = 0x14D2; // bool
                pub const m_bNetworkedSequenceChanged: usize = 0x14D3; // bool
                pub const m_bLastUpdateSkipped: usize = 0x14D4; // bool
                pub const m_flPrevAnimUpdateTime: usize = 0x14D8; // GameTime_t
                pub const m_hGraphDefinitionAG2: usize = 0x1860; // CStrongHandle<InfoForResourceTypeCNmGraphDefinition>
                pub const m_bIsUsingAG2: usize = 0x1868; // bool
                pub const m_serializedPoseRecipeAG2: usize = 0x1870; // C_NetworkUtlVectorBase<uint8>
                pub const m_nSerializePoseRecipeSizeAG2: usize = 0x1888; // int32
                pub const m_nSerializePoseRecipeVersionAG2: usize = 0x188C; // int32
                pub const m_nGraphCreationFlagsAG2: usize = 0x1890; // uint8
                pub const m_nServerGraphDefReloadCountAG2: usize = 0x1A7C; // int32
                pub const m_nServerSerializationContextIteration: usize = 0x1A84; // int32
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
            pub mod C_ColorCorrection {
                pub const m_vecOrigin: usize = 0x5F8; // Vector
                pub const m_MinFalloff: usize = 0x604; // float32
                pub const m_MaxFalloff: usize = 0x608; // float32
                pub const m_flFadeInDuration: usize = 0x60C; // float32
                pub const m_flFadeOutDuration: usize = 0x610; // float32
                pub const m_flMaxWeight: usize = 0x614; // float32
                pub const m_flCurWeight: usize = 0x618; // float32
                pub const m_netlookupFilename: usize = 0x61C; // char[512]
                pub const m_bEnabled: usize = 0x81C; // bool
                pub const m_bMaster: usize = 0x81D; // bool
                pub const m_bClientSide: usize = 0x81E; // bool
                pub const m_bExclusive: usize = 0x81F; // bool
                pub const m_bEnabledOnClient: usize = 0x820; // bool[1]
                pub const m_flCurWeightOnClient: usize = 0x824; // float32[1]
                pub const m_bFadingIn: usize = 0x828; // bool[1]
                pub const m_flFadeStartWeight: usize = 0x82C; // float32[1]
                pub const m_flFadeStartTime: usize = 0x830; // float32[1]
                pub const m_flFadeDuration: usize = 0x834; // float32[1]
            }
            // Parent: None
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
            // Parent: C_BaseCSGrenade
            // Field count: 0
            pub mod C_MolotovGrenade {
            }
            // Parent: C_BaseCombatCharacter
            // Field count: 0
            pub mod C_NetTestBaseCombatCharacter {
            }
            // Parent: CBodyComponent
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_sceneNode (CGameSceneNode)
            pub mod CBodyComponentPoint {
                pub const m_sceneNode: usize = 0x80; // CGameSceneNode
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
            pub mod C_EconItemView {
                pub const m_bInventoryImageRgbaRequested: usize = 0x60; // bool
                pub const m_bInventoryImageTriedCache: usize = 0x61; // bool
                pub const m_nInventoryImageRgbaWidth: usize = 0x80; // int32
                pub const m_nInventoryImageRgbaHeight: usize = 0x84; // int32
                pub const m_szCurrentLoadCachedFileName: usize = 0x88; // char[260]
                pub const m_bRestoreCustomMaterialAfterPrecache: usize = 0x1B8; // bool
                pub const m_iItemDefinitionIndex: usize = 0x1BA; // uint16
                pub const m_iEntityQuality: usize = 0x1BC; // int32
                pub const m_iEntityLevel: usize = 0x1C0; // uint32
                pub const m_iItemID: usize = 0x1C8; // uint64
                pub const m_iItemIDHigh: usize = 0x1D0; // uint32
                pub const m_iItemIDLow: usize = 0x1D4; // uint32
                pub const m_iAccountID: usize = 0x1D8; // uint32
                pub const m_iInventoryPosition: usize = 0x1DC; // uint32
                pub const m_bInitialized: usize = 0x1E8; // bool
                pub const m_bDisallowSOC: usize = 0x1E9; // bool
                pub const m_bIsStoreItem: usize = 0x1EA; // bool
                pub const m_bIsTradeItem: usize = 0x1EB; // bool
                pub const m_iEntityQuantity: usize = 0x1EC; // int32
                pub const m_iRarityOverride: usize = 0x1F0; // int32
                pub const m_iQualityOverride: usize = 0x1F4; // int32
                pub const m_iOriginOverride: usize = 0x1F8; // int32
                pub const m_ubStyleOverride: usize = 0x1FC; // uint8
                pub const m_unClientFlags: usize = 0x1FD; // uint8
                pub const m_AttributeList: usize = 0x210; // CAttributeList
                pub const m_NetworkedDynamicAttributes: usize = 0x288; // CAttributeList
                pub const m_szCustomName: usize = 0x300; // char[161]
                pub const m_szCustomNameOverride: usize = 0x3A1; // char[161]
                pub const m_bInitializedTags: usize = 0x470; // bool
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
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_IsRequirementValid {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_timestamp (GameTime_t)
            // NetworkVarNames: m_nWorldGroupId (WorldGroupId_t)
            pub mod IntervalTimer {
                pub const m_timestamp: usize = 0x8; // GameTime_t
                pub const m_nWorldGroupId: usize = 0xC; // WorldGroupId_t
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
            pub mod audioparams_t {
                pub const localSound: usize = 0x8; // Vector[8]
                pub const soundscapeIndex: usize = 0x68; // int32
                pub const localBits: usize = 0x6C; // uint8
                pub const soundscapeEntityListIndex: usize = 0x70; // int32
                pub const soundEventHash: usize = 0x74; // uint32
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
            pub mod C_CSWeaponBase {
                pub const m_iWeaponGameplayAnimState: usize = 0x1970; // WeaponGameplayAnimState
                pub const m_flWeaponGameplayAnimStateTimestamp: usize = 0x1974; // GameTime_t
                pub const m_flInspectCancelCompleteTime: usize = 0x1978; // GameTime_t
                pub const m_bInspectPending: usize = 0x197C; // bool
                pub const m_bInspectShouldLoop: usize = 0x197D; // bool
                pub const m_flCrosshairDistance: usize = 0x19A8; // float32
                pub const m_iAmmoLastCheck: usize = 0x19AC; // int32
                pub const m_nLastEmptySoundCmdNum: usize = 0x19B0; // int32
                pub const m_bFireOnEmpty: usize = 0x19B4; // bool
                pub const m_OnPlayerPickup: usize = 0x19B8; // CEntityIOOutput
                pub const m_weaponMode: usize = 0x19E0; // CSWeaponMode
                pub const m_flTurningInaccuracyDelta: usize = 0x19E4; // float32
                pub const m_vecTurningInaccuracyEyeDirLast: usize = 0x19E8; // Vector
                pub const m_flTurningInaccuracy: usize = 0x19F4; // float32
                pub const m_fAccuracyPenalty: usize = 0x19F8; // float32
                pub const m_flLastAccuracyUpdateTime: usize = 0x19FC; // GameTime_t
                pub const m_fAccuracySmoothedForZoom: usize = 0x1A00; // float32
                pub const m_iRecoilIndex: usize = 0x1A04; // int32
                pub const m_flRecoilIndex: usize = 0x1A08; // float32
                pub const m_bBurstMode: usize = 0x1A0C; // bool
                pub const m_flLastBurstModeChangeTime: usize = 0x1A10; // GameTime_t
                pub const m_nPostponeFireReadyTicks: usize = 0x1A14; // GameTick_t
                pub const m_flPostponeFireReadyFrac: usize = 0x1A18; // float32
                pub const m_bInReload: usize = 0x1A1C; // bool
                pub const m_flDroppedAtTime: usize = 0x1A20; // GameTime_t
                pub const m_bIsHauledBack: usize = 0x1A24; // bool
                pub const m_bSilencerOn: usize = 0x1A25; // bool
                pub const m_flTimeSilencerSwitchComplete: usize = 0x1A28; // GameTime_t
                pub const m_iOriginalTeamNumber: usize = 0x1A2C; // int32
                pub const m_iMostRecentTeamNumber: usize = 0x1A30; // int32
                pub const m_bDroppedNearBuyZone: usize = 0x1A34; // bool
                pub const m_flNextAttackRenderTimeOffset: usize = 0x1A38; // float32
                pub const m_bClearWeaponIdentifyingUGC: usize = 0x1AD8; // bool
                pub const m_bVisualsDataSet: usize = 0x1AD9; // bool
                pub const m_bUIWeapon: usize = 0x1ADA; // bool
                pub const m_nCustomEconReloadEventId: usize = 0x1ADC; // int32
                pub const m_nextPrevOwnerUseTime: usize = 0x1AE8; // GameTime_t
                pub const m_hPrevOwner: usize = 0x1AEC; // CHandle<C_CSPlayerPawn>
                pub const m_nDropTick: usize = 0x1AF0; // GameTick_t
                pub const m_bWasActiveWeaponWhenDropped: usize = 0x1AF4; // bool
                pub const m_donated: usize = 0x1B14; // bool
                pub const m_fLastShotTime: usize = 0x1B18; // GameTime_t
                pub const m_bWasOwnedByCT: usize = 0x1B1C; // bool
                pub const m_bWasOwnedByTerrorist: usize = 0x1B1D; // bool
                pub const m_flNextClientFireBulletTime: usize = 0x1B20; // float32
                pub const m_flNextClientFireBulletTime_Repredict: usize = 0x1B24; // float32
                pub const m_IronSightController: usize = 0x1C90; // C_IronSightController
                pub const m_iIronSightMode: usize = 0x1D40; // int32
                pub const m_flLastLOSTraceFailureTime: usize = 0x1D58; // GameTime_t
                pub const m_flWatTickOffset: usize = 0x1DB8; // float32
                pub const m_flLastShakeTime: usize = 0x1DCC; // GameTime_t
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
            // Parent: CBaseFilter
            // Field count: 3
            pub mod FilterHealth {
                pub const m_bAdrenalineActive: usize = 0x650; // bool
                pub const m_iHealthMin: usize = 0x654; // int32
                pub const m_iHealthMax: usize = 0x658; // int32
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
            pub mod C_PointClientUIHUD {
                pub const m_bCheckCSSClasses: usize = 0xEE8; // bool
                pub const m_bIgnoreInput: usize = 0x1060; // bool
                pub const m_flWidth: usize = 0x1064; // float32
                pub const m_flHeight: usize = 0x1068; // float32
                pub const m_flDPI: usize = 0x106C; // float32
                pub const m_flInteractDistance: usize = 0x1070; // float32
                pub const m_flDepthOffset: usize = 0x1074; // float32
                pub const m_unOwnerContext: usize = 0x1078; // uint32
                pub const m_unHorizontalAlign: usize = 0x107C; // uint32
                pub const m_unVerticalAlign: usize = 0x1080; // uint32
                pub const m_unOrientation: usize = 0x1084; // uint32
                pub const m_bAllowInteractionFromAllSceneWorlds: usize = 0x1088; // bool
                pub const m_vecCSSClasses: usize = 0x1090; // C_NetworkUtlVectorBase<CUtlSymbolLarge>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Inflow_GraphHook {
                pub const m_HookName: usize = 0x80; // PulseSymbol_t
            }
            // Parent: None
            // Field count: 0
            pub mod CPathSimpleAPI {
            }
            // Parent: C_CS2WeaponModuleBase
            // Field count: 2
            pub mod C_KeychainModule {
                pub const m_nKeychainDefID: usize = 0x1160; // uint32
                pub const m_nKeychainSeed: usize = 0x1164; // uint32
            }
            // Parent: C_BaseModelEntity
            // Field count: 1
            pub mod CFuncWater {
                pub const m_BuoyancyHelper: usize = 0xEB0; // CBuoyancyHelper
            }
            // Parent: CPlayerPawnComponent
            // Field count: 0
            pub mod CCSPlayer_GlowServices {
            }
            // Parent: None
            // Field count: 1
            pub mod CCSGameModeRules {
                pub const __m_pChainEntity: usize = 0x8; // CNetworkVarChainer
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
            pub mod C_CSObserverPawn {
                pub const m_hDetectParentChange: usize = 0x1668; // CEntityHandle
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
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            pub mod C_WeaponGalilAR {
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
            pub mod CCSPlayerBase_CameraServices {
                pub const m_iFOV: usize = 0x288; // uint32
                pub const m_iFOVStart: usize = 0x28C; // uint32
                pub const m_flFOVTime: usize = 0x290; // GameTime_t
                pub const m_flFOVRate: usize = 0x294; // float32
                pub const m_hZoomOwner: usize = 0x298; // CHandle<C_BaseEntity>
                pub const m_flLastShotFOV: usize = 0x29C; // float32
            }
            // Parent: None
            // Field count: 0
            pub mod C_TeamplayRules {
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
            pub mod C_Hostage {
                pub const m_entitySpottedState: usize = 0x13F0; // EntitySpottedState_t
                pub const m_leader: usize = 0x1408; // CHandle<C_BaseEntity>
                pub const m_reuseTimer: usize = 0x1410; // CountdownTimer
                pub const m_vel: usize = 0x1428; // Vector
                pub const m_isRescued: usize = 0x1434; // bool
                pub const m_jumpedThisFrame: usize = 0x1435; // bool
                pub const m_nHostageState: usize = 0x1438; // int32
                pub const m_bHandsHaveBeenCut: usize = 0x143C; // bool
                pub const m_hHostageGrabber: usize = 0x1440; // CHandle<C_CSPlayerPawn>
                pub const m_fLastGrabTime: usize = 0x1444; // GameTime_t
                pub const m_vecGrabbedPos: usize = 0x1448; // Vector
                pub const m_flRescueStartTime: usize = 0x1454; // GameTime_t
                pub const m_flGrabSuccessTime: usize = 0x1458; // GameTime_t
                pub const m_flDropStartTime: usize = 0x145C; // GameTime_t
                pub const m_flDeadOrRescuedTime: usize = 0x1460; // GameTime_t
                pub const m_blinkTimer: usize = 0x1468; // CountdownTimer
                pub const m_lookAt: usize = 0x1480; // Vector
                pub const m_lookAroundTimer: usize = 0x1490; // CountdownTimer
                pub const m_isInit: usize = 0x14A8; // bool
                pub const m_eyeAttachment: usize = 0x14A9; // AttachmentHandle_t
                pub const m_chestAttachment: usize = 0x14AA; // AttachmentHandle_t
                pub const m_pPredictionOwner: usize = 0x14B0; // CBasePlayerController*
                pub const m_fNewestAlphaThinkTime: usize = 0x14B8; // GameTime_t
            }
            // Parent: CPlayerPawnComponent
            // Field count: 6
            //
            // Metadata:
            // NetworkVarNames: m_iObserverMode (uint8)
            // NetworkVarNames: m_hObserverTarget (CHandle<CBaseEntity>)
            pub mod CPlayer_ObserverServices {
                pub const m_iObserverMode: usize = 0x40; // uint8
                pub const m_hObserverTarget: usize = 0x44; // CHandle<C_BaseEntity>
                pub const m_iObserverLastMode: usize = 0x48; // ObserverMode_t
                pub const m_bForcedObserverMode: usize = 0x4C; // bool
                pub const m_flObserverChaseDistance: usize = 0x50; // float32
                pub const m_flObserverChaseDistanceCalcTime: usize = 0x54; // GameTime_t
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
            pub mod C_BasePlayerWeapon {
                pub const m_nNextPrimaryAttackTick: usize = 0x18E0; // GameTick_t
                pub const m_flNextPrimaryAttackTickRatio: usize = 0x18E4; // float32
                pub const m_nNextSecondaryAttackTick: usize = 0x18E8; // GameTick_t
                pub const m_flNextSecondaryAttackTickRatio: usize = 0x18EC; // float32
                pub const m_iClip1: usize = 0x18F0; // int32
                pub const m_iClip2: usize = 0x18F4; // int32
                pub const m_pReserveAmmo: usize = 0x18F8; // int32[2]
            }
            // Parent: C_BaseEntity
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_iCurrentMaxRagdollCount (int8)
            pub mod CRagdollManager {
                pub const m_iCurrentMaxRagdollCount: usize = 0x5F8; // int8
            }
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            pub mod C_WeaponMAC10 {
            }
            // Parent: C_BaseEntity
            // Field count: 14
            pub mod C_CSGO_MapPreviewCameraPath {
                pub const m_flZFar: usize = 0x5F8; // float32
                pub const m_flZNear: usize = 0x5FC; // float32
                pub const m_bLoop: usize = 0x600; // bool
                pub const m_bVerticalFOV: usize = 0x601; // bool
                pub const m_bConstantSpeed: usize = 0x602; // bool
                pub const m_flDuration: usize = 0x604; // float32
                pub const m_flPathLength: usize = 0x648; // float32
                pub const m_flPathDuration: usize = 0x64C; // float32
                pub const m_bDofEnabled: usize = 0x664; // bool
                pub const m_flDofNearBlurry: usize = 0x668; // float32
                pub const m_flDofNearCrisp: usize = 0x66C; // float32
                pub const m_flDofFarCrisp: usize = 0x670; // float32
                pub const m_flDofFarBlurry: usize = 0x674; // float32
                pub const m_flDofTiltToGround: usize = 0x678; // float32
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
            pub mod C_RopeKeyframe {
                pub const m_LinksTouchingSomething: usize = 0xEB8; // CBitVec<10>
                pub const m_nLinksTouchingSomething: usize = 0xEBC; // int32
                pub const m_bApplyWind: usize = 0xEC0; // bool
                pub const m_fPrevLockedPoints: usize = 0xEC4; // int32
                pub const m_iForcePointMoveCounter: usize = 0xEC8; // int32
                pub const m_bPrevEndPointPos: usize = 0xECC; // bool[2]
                pub const m_vPrevEndPointPos: usize = 0xED0; // Vector[2]
                pub const m_flCurScroll: usize = 0xEE8; // float32
                pub const m_flScrollSpeed: usize = 0xEEC; // float32
                pub const m_RopeFlags: usize = 0xEF0; // uint16
                pub const m_iRopeMaterialModelIndex: usize = 0xEF8; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_nSegments: usize = 0x1170; // uint8
                pub const m_hStartPoint: usize = 0x1174; // CHandle<C_BaseEntity>
                pub const m_hEndPoint: usize = 0x1178; // CHandle<C_BaseEntity>
                pub const m_iStartAttachment: usize = 0x117C; // AttachmentHandle_t
                pub const m_iEndAttachment: usize = 0x117D; // AttachmentHandle_t
                pub const m_Subdiv: usize = 0x117E; // uint8
                pub const m_RopeLength: usize = 0x1180; // int16
                pub const m_Slack: usize = 0x1182; // int16
                pub const m_TextureScale: usize = 0x1184; // float32
                pub const m_fLockedPoints: usize = 0x1188; // uint8
                pub const m_nChangeCount: usize = 0x1189; // uint8
                pub const m_Width: usize = 0x118C; // float32
                pub const m_PhysicsDelegate: usize = 0x1190; // C_RopeKeyframe::CPhysicsDelegate
                pub const m_hMaterial: usize = 0x11A0; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_TextureHeight: usize = 0x11A8; // int32
                pub const m_vecImpulse: usize = 0x11AC; // Vector
                pub const m_vecPreviousImpulse: usize = 0x11B8; // Vector
                pub const m_flCurrentGustTimer: usize = 0x11C4; // float32
                pub const m_flCurrentGustLifetime: usize = 0x11C8; // float32
                pub const m_flTimeToNextGust: usize = 0x11CC; // float32
                pub const m_vWindDir: usize = 0x11D0; // Vector
                pub const m_vColorMod: usize = 0x11DC; // Vector
                pub const m_vCachedEndPointAttachmentPos: usize = 0x11E8; // Vector[2]
                pub const m_vCachedEndPointAttachmentAngle: usize = 0x1200; // QAngle[2]
                pub const m_bConstrainBetweenEndpoints: usize = 0x1218; // bool
                pub const m_bEndPointAttachmentPositionsDirty: usize = 0x0; // bitfield:1
                pub const m_bEndPointAttachmentAnglesDirty: usize = 0x0; // bitfield:1
                pub const m_bNewDataThisFrame: usize = 0x0; // bitfield:1
                pub const m_bPhysicsInitted: usize = 0x0; // bitfield:1
            }
            // Parent: C_BaseModelEntity
            // Field count: 0
            pub mod C_BaseToggle {
            }
            // Parent: C_EnvCubemap
            // Field count: 0
            pub mod C_EnvCubemapBox {
            }
            // Parent: C_BaseToggle
            // Field count: 0
            //
            // Metadata:
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkOverride
            pub mod C_FuncMoveLinear {
            }
            // Parent: C_CSWeaponBaseShotgun
            // Field count: 0
            pub mod C_WeaponXM1014 {
            }
            // Parent: CBaseAnimGraph
            // Field count: 0
            pub mod C_WorldModelGloves {
            }
            // Parent: C_PhysicsProp
            // Field count: 0
            pub mod C_PhysicsPropMultiplayer {
            }
            // Parent: C_SoundEventEntity
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_vMins (Vector)
            // NetworkVarNames: m_vMaxs (Vector)
            pub mod C_SoundEventOBBEntity {
                pub const m_vMins: usize = 0x6C0; // Vector
                pub const m_vMaxs: usize = 0x6CC; // Vector
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyDescription
            pub mod CPulseTestScriptLib {
            }
            // Parent: C_WeaponBaseItem
            // Field count: 0
            pub mod C_Item_Healthshot {
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
            pub mod C_EnvCombinedLightProbeVolume {
                pub const m_Entity_Color: usize = 0x1670; // Color
                pub const m_Entity_flBrightness: usize = 0x1674; // float32
                pub const m_Entity_hCubemapTexture: usize = 0x1678; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_bCustomCubemapTexture: usize = 0x1680; // bool
                pub const m_Entity_hLightProbeTexture_AmbientCube: usize = 0x1688; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeTexture_SDF: usize = 0x1690; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeTexture_SH2_DC: usize = 0x1698; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeTexture_SH2_R: usize = 0x16A0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeTexture_SH2_G: usize = 0x16A8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeTexture_SH2_B: usize = 0x16B0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeDirectLightIndicesTexture: usize = 0x16B8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeDirectLightScalarsTexture: usize = 0x16C0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeDirectLightShadowsTexture: usize = 0x16C8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_vBoxMins: usize = 0x16D0; // Vector
                pub const m_Entity_vBoxMaxs: usize = 0x16DC; // Vector
                pub const m_Entity_bMoveable: usize = 0x16E8; // bool
                pub const m_Entity_nHandshake: usize = 0x16EC; // int32
                pub const m_Entity_nEnvCubeMapArrayIndex: usize = 0x16F0; // int32
                pub const m_Entity_nPriority: usize = 0x16F4; // int32
                pub const m_Entity_bStartDisabled: usize = 0x16F8; // bool
                pub const m_Entity_flEdgeFadeDist: usize = 0x16FC; // float32
                pub const m_Entity_vEdgeFadeDists: usize = 0x1700; // Vector
                pub const m_Entity_nLightProbeSizeX: usize = 0x170C; // int32
                pub const m_Entity_nLightProbeSizeY: usize = 0x1710; // int32
                pub const m_Entity_nLightProbeSizeZ: usize = 0x1714; // int32
                pub const m_Entity_nLightProbeAtlasX: usize = 0x1718; // int32
                pub const m_Entity_nLightProbeAtlasY: usize = 0x171C; // int32
                pub const m_Entity_nLightProbeAtlasZ: usize = 0x1720; // int32
                pub const m_Entity_bEnabled: usize = 0x1739; // bool
            }
            // Parent: None
            // Field count: 0
            pub mod C_MultiplayRules {
            }
            // Parent: CPlayerPawnComponent
            // Field count: 0
            pub mod CPlayer_AutoaimServices {
            }
            // Parent: C_LightEntity
            // Field count: 0
            pub mod C_LightDirectionalEntity {
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
            pub mod C_BaseEntity {
                pub const m_CBodyComponent: usize = 0x38; // CBodyComponent*
                pub const m_NetworkTransmitComponent: usize = 0x40; // CNetworkTransmitComponent
                pub const m_nLastThinkTick: usize = 0x328; // GameTick_t
                pub const m_pGameSceneNode: usize = 0x330; // CGameSceneNode*
                pub const m_pRenderComponent: usize = 0x338; // CRenderComponent*
                pub const m_pCollision: usize = 0x340; // CCollisionProperty*
                pub const m_iMaxHealth: usize = 0x348; // int32
                pub const m_iHealth: usize = 0x34C; // int32
                pub const m_flDamageAccumulator: usize = 0x350; // float32
                pub const m_lifeState: usize = 0x354; // uint8
                pub const m_bTakesDamage: usize = 0x355; // bool
                pub const m_nTakeDamageFlags: usize = 0x358; // TakeDamageFlags_t
                pub const m_nPlatformType: usize = 0x360; // EntityPlatformTypes_t
                pub const m_ubInterpolationFrame: usize = 0x361; // uint8
                pub const m_hSceneObjectController: usize = 0x364; // CHandle<C_BaseEntity>
                pub const m_nNoInterpolationTick: usize = 0x368; // int32
                pub const m_nVisibilityNoInterpolationTick: usize = 0x36C; // int32
                pub const m_flProxyRandomValue: usize = 0x370; // float32
                pub const m_iEFlags: usize = 0x374; // int32
                pub const m_nWaterType: usize = 0x378; // uint8
                pub const m_bInterpolateEvenWithNoModel: usize = 0x379; // bool
                pub const m_bPredictionEligible: usize = 0x37A; // bool
                pub const m_bApplyLayerMatchIDToModel: usize = 0x37B; // bool
                pub const m_tokLayerMatchID: usize = 0x37C; // CUtlStringToken
                pub const m_nSubclassID: usize = 0x380; // CUtlStringToken
                pub const m_nSimulationTick: usize = 0x390; // int32
                pub const m_iCurrentThinkContext: usize = 0x394; // int32
                pub const m_aThinkFunctions: usize = 0x398; // CUtlVector<thinkfunc_t>
                pub const m_bDisabledContextThinks: usize = 0x3B0; // bool
                pub const m_flAnimTime: usize = 0x3B4; // float32
                pub const m_flSimulationTime: usize = 0x3B8; // float32
                pub const m_nSceneObjectOverrideFlags: usize = 0x3BC; // uint8
                pub const m_bHasSuccessfullyInterpolated: usize = 0x3BD; // bool
                pub const m_bHasAddedVarsToInterpolation: usize = 0x3BE; // bool
                pub const m_bRenderEvenWhenNotSuccessfullyInterpolated: usize = 0x3BF; // bool
                pub const m_nInterpolationLatchDirtyFlags: usize = 0x3C0; // int32[2]
                pub const m_ListEntry: usize = 0x3C8; // uint16[11]
                pub const m_flCreateTime: usize = 0x3E0; // GameTime_t
                pub const m_flSpeed: usize = 0x3E4; // float32
                pub const m_EntClientFlags: usize = 0x3E8; // uint16
                pub const m_bClientSideRagdoll: usize = 0x3EA; // bool
                pub const m_iTeamNum: usize = 0x3EB; // uint8
                pub const m_spawnflags: usize = 0x3EC; // uint32
                pub const m_nNextThinkTick: usize = 0x3F0; // GameTick_t
                pub const m_fFlags: usize = 0x3F8; // uint32
                pub const m_vecAbsVelocity: usize = 0x3FC; // Vector
                pub const m_vecServerVelocity: usize = 0x408; // CNetworkVelocityVector
                pub const m_vecVelocity: usize = 0x430; // CNetworkVelocityVector
                pub const m_vecBaseVelocity: usize = 0x510; // Vector
                pub const m_hEffectEntity: usize = 0x51C; // CHandle<C_BaseEntity>
                pub const m_hOwnerEntity: usize = 0x520; // CHandle<C_BaseEntity>
                pub const m_MoveCollide: usize = 0x524; // MoveCollide_t
                pub const m_MoveType: usize = 0x525; // MoveType_t
                pub const m_nActualMoveType: usize = 0x526; // MoveType_t
                pub const m_flWaterLevel: usize = 0x528; // float32
                pub const m_fEffects: usize = 0x52C; // uint32
                pub const m_hGroundEntity: usize = 0x530; // CHandle<C_BaseEntity>
                pub const m_nGroundBodyIndex: usize = 0x534; // int32
                pub const m_flFriction: usize = 0x538; // float32
                pub const m_flElasticity: usize = 0x53C; // float32
                pub const m_flGravityScale: usize = 0x540; // float32
                pub const m_flTimeScale: usize = 0x544; // float32
                pub const m_bAnimatedEveryTick: usize = 0x548; // bool
                pub const m_bGravityDisabled: usize = 0x549; // bool
                pub const m_flNavIgnoreUntilTime: usize = 0x54C; // GameTime_t
                pub const m_hThink: usize = 0x550; // uint16
                pub const m_fBBoxVisFlags: usize = 0x560; // uint8
                pub const m_flActualGravityScale: usize = 0x564; // float32
                pub const m_bGravityActuallyDisabled: usize = 0x568; // bool
                pub const m_bPredictable: usize = 0x569; // bool
                pub const m_bRenderWithViewModels: usize = 0x56A; // bool
                pub const m_nFirstPredictableCommand: usize = 0x56C; // int32
                pub const m_nLastPredictableCommand: usize = 0x570; // int32
                pub const m_hOldMoveParent: usize = 0x574; // CHandle<C_BaseEntity>
                pub const m_Particles: usize = 0x578; // CParticleProperty
                pub const m_vecAngVelocity: usize = 0x5A8; // QAngle
                pub const m_DataChangeEventRef: usize = 0x5B4; // int32
                pub const m_dependencies: usize = 0x5B8; // CUtlVector<CEntityHandle>
                pub const m_nCreationTick: usize = 0x5D0; // int32
                pub const m_bAnimTimeChanged: usize = 0x5DD; // bool
                pub const m_bSimulationTimeChanged: usize = 0x5DE; // bool
                pub const m_sUniqueHammerID: usize = 0x5E8; // CUtlString
                pub const m_nBloodType: usize = 0x5F0; // BloodType
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // NetworkVarNames: m_Handle (ModelConfigHandle_t)
            // NetworkVarNames: m_Name (string_t)
            // NetworkVarNames: m_AssociatedEntities (CHandle<C_BaseModelEntity>)
            // NetworkVarNames: m_AssociatedEntityNames (string_t)
            pub mod ActiveModelConfig_t {
                pub const m_Handle: usize = 0x30; // ModelConfigHandle_t
                pub const m_Name: usize = 0x38; // CUtlSymbolLarge
                pub const m_AssociatedEntities: usize = 0x40; // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
                pub const m_AssociatedEntityNames: usize = 0x58; // C_NetworkUtlVectorBase<CUtlSymbolLarge>
            }
            // Parent: CEnvSoundscape
            // Field count: 1
            pub mod CEnvSoundscapeProxy {
                pub const m_MainSoundscapeName: usize = 0x698; // CUtlSymbolLarge
            }
            // Parent: C_BaseEntity
            // Field count: 15
            pub mod C_SoundEventEntity {
                pub const m_bStartOnSpawn: usize = 0x5F8; // bool
                pub const m_bToLocalPlayer: usize = 0x5F9; // bool
                pub const m_bStopOnNew: usize = 0x5FA; // bool
                pub const m_bSaveRestore: usize = 0x5FB; // bool
                pub const m_bSavedIsPlaying: usize = 0x5FC; // bool
                pub const m_flSavedElapsedTime: usize = 0x600; // float32
                pub const m_iszSourceEntityName: usize = 0x608; // CUtlSymbolLarge
                pub const m_iszAttachmentName: usize = 0x610; // CUtlSymbolLarge
                pub const m_onGUIDChanged: usize = 0x618; // CEntityOutputTemplate<uint64>
                pub const m_onSoundFinished: usize = 0x640; // CEntityIOOutput
                pub const m_flClientCullRadius: usize = 0x668; // float32
                pub const m_iszSoundName: usize = 0x698; // CUtlSymbolLarge
                pub const m_hSource: usize = 0x6B4; // CEntityHandle
                pub const m_nEntityIndexSelection: usize = 0x6B8; // int32
                pub const m_bClientSideOnly: usize = 0x0; // bitfield:1
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Inflow_EventHandler {
                pub const m_EventName: usize = 0x80; // PulseSymbol_t
            }
            // Parent: C_CSWeaponBase
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_bFirstAttack (bool)
            pub mod C_Knife {
                pub const m_bFirstAttack: usize = 0x1F80; // bool
            }
            // Parent: C_CSGO_TeamPreviewCamera
            // Field count: 0
            pub mod C_CSGO_TerroristWingmanIntroCamera {
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
                pub const m_modelState: usize = 0x190; // CModelState
                pub const m_bIsAnimationEnabled: usize = 0x490; // bool
                pub const m_bUseParentRenderBounds: usize = 0x491; // bool
                pub const m_bDisableSolidCollisionsForHierarchy: usize = 0x492; // bool
                pub const m_bDirtyMotionType: usize = 0x0; // bitfield:1
                pub const m_bIsGeneratingLatchedParentSpaceState: usize = 0x0; // bitfield:1
                pub const m_materialGroup: usize = 0x494; // CUtlStringToken
                pub const m_nHitboxSet: usize = 0x498; // uint8
            }
            // Parent: None
            // Field count: 0
            pub mod CEntityComponent {
            }
            // Parent: CBaseAnimGraph
            // Field count: 0
            pub mod C_LateUpdatedAnimating {
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
            // Parent: C_BaseModelEntity
            // Field count: 4
            //
            // Metadata:
            // NetworkVarNames: m_bEnabled (bool)
            // NetworkVarNames: m_DialogXMLName (string_t)
            // NetworkVarNames: m_PanelClassName (string_t)
            // NetworkVarNames: m_PanelID (string_t)
            pub mod C_BaseClientUIEntity {
                pub const m_bEnabled: usize = 0xEB8; // bool
                pub const m_DialogXMLName: usize = 0xEC0; // CUtlSymbolLarge
                pub const m_PanelClassName: usize = 0xEC8; // CUtlSymbolLarge
                pub const m_PanelID: usize = 0xED0; // CUtlSymbolLarge
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
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            pub mod C_WeaponRevolver {
            }
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            pub mod C_WeaponElite {
            }
            // Parent: C_DynamicProp
            // Field count: 0
            pub mod C_DynamicPropAlias_cable_dynamic {
            }
            // Parent: CBaseAnimGraph
            // Field count: 4
            pub mod CBaseProp {
                pub const m_bModelOverrodeBlockLOS: usize = 0x1158; // bool
                pub const m_iShapeType: usize = 0x115C; // int32
                pub const m_bConformToCollisionBounds: usize = 0x1160; // bool
                pub const m_mPreferredCatchTransform: usize = 0x1170; // CTransform
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
            pub mod CInfoOffscreenPanoramaTexture {
                pub const m_bDisabled: usize = 0x5F8; // bool
                pub const m_nResolutionX: usize = 0x5FC; // int32
                pub const m_nResolutionY: usize = 0x600; // int32
                pub const m_szLayoutFileName: usize = 0x608; // CUtlSymbolLarge
                pub const m_RenderAttrName: usize = 0x610; // CUtlSymbolLarge
                pub const m_TargetEntities: usize = 0x618; // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
                pub const m_nTargetChangeCount: usize = 0x630; // int32
                pub const m_vecCSSClasses: usize = 0x638; // C_NetworkUtlVectorBase<CUtlSymbolLarge>
                pub const m_bCheckCSSClasses: usize = 0x7B0; // bool
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
            pub mod C_BaseCSGrenade {
                pub const m_bClientPredictDelete: usize = 0x1F80; // bool
                pub const m_bRedraw: usize = 0x1F81; // bool
                pub const m_bIsHeldByPlayer: usize = 0x1F82; // bool
                pub const m_bPinPulled: usize = 0x1F83; // bool
                pub const m_bJumpThrow: usize = 0x1F84; // bool
                pub const m_bThrowAnimating: usize = 0x1F85; // bool
                pub const m_fThrowTime: usize = 0x1F88; // GameTime_t
                pub const m_flThrowStrength: usize = 0x1F90; // float32
                pub const m_fDropTime: usize = 0x2008; // GameTime_t
                pub const m_fPinPullTime: usize = 0x200C; // GameTime_t
                pub const m_bJustPulledPin: usize = 0x2010; // bool
                pub const m_nNextHoldTick: usize = 0x2014; // GameTick_t
                pub const m_flNextHoldFrac: usize = 0x2018; // float32
                pub const m_hSwitchToWeaponAfterThrow: usize = 0x201C; // CHandle<C_CSWeaponBase>
            }
            // Parent: CBaseFilter
            // Field count: 1
            pub mod CFilterAttributeInt {
                pub const m_sAttributeName: usize = 0x650; // CUtlSymbolLarge
            }
            // Parent: CLogicalEntity
            // Field count: 11
            pub mod CPointTemplate {
                pub const m_iszWorldName: usize = 0x5F8; // CUtlSymbolLarge
                pub const m_iszSource2EntityLumpName: usize = 0x600; // CUtlSymbolLarge
                pub const m_iszEntityFilterName: usize = 0x608; // CUtlSymbolLarge
                pub const m_flTimeoutInterval: usize = 0x610; // float32
                pub const m_bAsynchronouslySpawnEntities: usize = 0x614; // bool
                pub const m_clientOnlyEntityBehavior: usize = 0x618; // PointTemplateClientOnlyEntityBehavior_t
                pub const m_ownerSpawnGroupType: usize = 0x61C; // PointTemplateOwnerSpawnGroupType_t
                pub const m_createdSpawnGroupHandles: usize = 0x620; // CUtlVector<uint32>
                pub const m_SpawnedEntityHandles: usize = 0x638; // CUtlVector<CEntityHandle>
                pub const m_ScriptSpawnCallback: usize = 0x650; // HSCRIPT
                pub const m_ScriptCallbackScope: usize = 0x658; // HSCRIPT
            }
            // Parent: CPlayerPawnComponent
            // Field count: 0
            pub mod CPlayer_FlashlightServices {
            }
            // Parent: C_CSWeaponBase
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_bSequenceInProgress (bool)
            // NetworkVarNames: m_bRedraw (bool)
            pub mod C_WeaponBaseItem {
                pub const m_bSequenceInProgress: usize = 0x1F80; // bool
                pub const m_bRedraw: usize = 0x1F81; // bool
            }
            // Parent: C_BaseModelEntity
            // Field count: 0
            pub mod CWaterSplasher {
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // NetworkVarNames: m_Transforms (CTransform)
            // NetworkVarNames: m_hOwner (EHANDLE)
            pub mod PhysicsRagdollPose_t {
                pub const m_Transforms: usize = 0x8; // C_NetworkUtlVectorBase<CTransform>
                pub const m_hOwner: usize = 0x20; // CHandle<C_BaseEntity>
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
            // Parent: C_CSWeaponBaseGun
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_bMagazineRemoved (bool)
            pub mod C_WeaponCZ75a {
                pub const m_bMagazineRemoved: usize = 0x1FB0; // bool
            }
            // Parent: C_CSGO_PreviewPlayer
            // Field count: 0
            pub mod C_CSGO_TeamPreviewModel {
            }
            // Parent: C_BaseCSGrenadeProjectile
            // Field count: 0
            pub mod C_FlashbangProjectile {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // NetworkVarNames: m_hOwner (CHandle<CBaseModelEntity>)
            // NetworkVarNames: m_nLastHitDamageLevel (int)
            pub mod CDestructiblePartsComponent {
                pub const __m_pChainEntity: usize = 0x0; // CNetworkVarChainer
                pub const m_vecDamageTakenByHitGroup: usize = 0x48; // CUtlVector<uint16>
                pub const m_hOwner: usize = 0x60; // CHandle<C_BaseModelEntity>
                pub const m_nLastHitDamageLevel: usize = 0x64; // int32
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
                pub const m_perRoundStats: usize = 0x40; // C_UtlVectorEmbeddedNetworkVar<CSPerRoundStats_t>
                pub const m_matchStats: usize = 0xA8; // CSMatchStats_t
                pub const m_iNumRoundKills: usize = 0x128; // int32
                pub const m_iNumRoundKillsHeadshots: usize = 0x12C; // int32
                pub const m_flTotalRoundDamageDealt: usize = 0x130; // float32
            }
            // Parent: CBodyComponentSkeletonInstance
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_animationController (CBaseAnimGraphController)
            pub mod CBodyComponentBaseAnimGraph {
                pub const m_animationController: usize = 0x5B0; // CBaseAnimGraphController
            }
            // Parent: C_BaseTrigger
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_flFluidDensity (float)
            pub mod C_TriggerBuoyancy {
                pub const m_BuoyancyHelper: usize = 0xFF0; // CBuoyancyHelper
                pub const m_flFluidDensity: usize = 0x1108; // float32
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
            }
            // Parent: C_BaseToggle
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_bIsUsable (bool)
            pub mod C_BaseDoor {
                pub const m_bIsUsable: usize = 0xEB0; // bool
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
            pub mod CSMatchStats_t {
                pub const m_iEnemy5Ks: usize = 0x68; // int32
                pub const m_iEnemy4Ks: usize = 0x6C; // int32
                pub const m_iEnemy3Ks: usize = 0x70; // int32
                pub const m_iEnemyKnifeKills: usize = 0x74; // int32
                pub const m_iEnemyTaserKills: usize = 0x78; // int32
            }
            // Parent: None
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
            // Parent: None
            // Field count: 0
            pub mod CFilterMultipleAPI {
            }
            // Parent: CHostageRescueZoneShim
            // Field count: 0
            pub mod CHostageRescueZone {
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
            pub mod CModelState {
                pub const m_hModel: usize = 0xD0; // CStrongHandle<InfoForResourceTypeCModel>
                pub const m_ModelName: usize = 0xD8; // CUtlSymbolLarge
                pub const m_bClientClothCreationSuppressed: usize = 0x1A9; // bool
                pub const m_MeshGroupMask: usize = 0x250; // uint64
                pub const m_nBodyGroupChoices: usize = 0x2A0; // C_NetworkUtlVectorBase<int32>
                pub const m_nIdealMotionType: usize = 0x2EA; // int8
                pub const m_nForceLOD: usize = 0x2EB; // int8
                pub const m_nClothUpdateFlags: usize = 0x2EC; // int8
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_LerpCameraSettings__CursorState_t {
                pub const m_hCamera: usize = 0x8; // CHandle<C_PointCamera>
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
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            pub mod C_WeaponP250 {
            }
            // Parent: C_PhysicsProp
            // Field count: 1
            //
            // Metadata:
            // MNetworkExcludeByName
            // NetworkVarNames: m_ShardDesc (shard_model_desc_t)
            pub mod C_ShatterGlassShardPhysics {
                pub const m_ShardDesc: usize = 0x1318; // shard_model_desc_t
            }
            // Parent: CBaseFilter
            // Field count: 1
            pub mod CFilterMassGreater {
                pub const m_fFilterMass: usize = 0x650; // float32
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
            pub mod C_EntityDissolve {
                pub const m_flStartTime: usize = 0xEB8; // GameTime_t
                pub const m_flFadeInStart: usize = 0xEBC; // float32
                pub const m_flFadeInLength: usize = 0xEC0; // float32
                pub const m_flFadeOutModelStart: usize = 0xEC4; // float32
                pub const m_flFadeOutModelLength: usize = 0xEC8; // float32
                pub const m_flFadeOutStart: usize = 0xECC; // float32
                pub const m_flFadeOutLength: usize = 0xED0; // float32
                pub const m_flNextSparkTime: usize = 0xED4; // GameTime_t
                pub const m_nDissolveType: usize = 0xED8; // EntityDisolveType_t
                pub const m_vDissolverOrigin: usize = 0xEDC; // Vector
                pub const m_nMagnitude: usize = 0xEE8; // uint32
                pub const m_bCoreExplode: usize = 0xEEC; // bool
                pub const m_bLinkedToServerEnt: usize = 0xEED; // bool
            }
            // Parent: C_SoundOpvarSetAABBEntity
            // Field count: 0
            pub mod C_SoundOpvarSetOBBEntity {
            }
            // Parent: CBaseAnimGraph
            // Field count: 14
            pub mod C_ClientRagdoll {
                pub const m_bFadeOut: usize = 0x1158; // bool
                pub const m_bImportant: usize = 0x1159; // bool
                pub const m_flEffectTime: usize = 0x115C; // GameTime_t
                pub const m_gibDespawnTime: usize = 0x1160; // GameTime_t
                pub const m_iCurrentFriction: usize = 0x1164; // int32
                pub const m_iMinFriction: usize = 0x1168; // int32
                pub const m_iMaxFriction: usize = 0x116C; // int32
                pub const m_iFrictionAnimState: usize = 0x1170; // int32
                pub const m_bReleaseRagdoll: usize = 0x1174; // bool
                pub const m_iEyeAttachment: usize = 0x1175; // AttachmentHandle_t
                pub const m_bFadingOut: usize = 0x1176; // bool
                pub const m_flScaleEnd: usize = 0x1178; // float32[10]
                pub const m_flScaleTimeStart: usize = 0x11A0; // GameTime_t[10]
                pub const m_flScaleTimeEnd: usize = 0x11C8; // GameTime_t[10]
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod PulseSelectorOutflowList_t {
                pub const m_Outflows: usize = 0x0; // CUtlVector<OutflowWithRequirements_t>
            }
            // Parent: CPlayerPawnComponent
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_vecSellbackPurchaseEntries (SellbackPurchaseEntry_t)
            pub mod CCSPlayer_BuyServices {
                pub const m_vecSellbackPurchaseEntries: usize = 0x40; // C_UtlVectorEmbeddedNetworkVar<SellbackPurchaseEntry_t>
            }
            // Parent: C_BaseEntity
            // Field count: 0
            pub mod C_PortraitWorldCallbackHandler {
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
            pub mod C_CSTeam {
                pub const m_szTeamMatchStat: usize = 0x6B0; // char[512]
                pub const m_numMapVictories: usize = 0x8B0; // int32
                pub const m_bSurrendered: usize = 0x8B4; // bool
                pub const m_scoreFirstHalf: usize = 0x8B8; // int32
                pub const m_scoreSecondHalf: usize = 0x8BC; // int32
                pub const m_scoreOvertime: usize = 0x8C0; // int32
                pub const m_szClanTeamname: usize = 0x8C4; // char[129]
                pub const m_iClanID: usize = 0x948; // uint32
                pub const m_szTeamFlagImage: usize = 0x94C; // char[8]
                pub const m_szTeamLogoImage: usize = 0x954; // char[8]
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
            pub mod C_TriggerPhysics {
                pub const m_gravityScale: usize = 0xFF0; // float32
                pub const m_linearLimit: usize = 0xFF4; // float32
                pub const m_linearDamping: usize = 0xFF8; // float32
                pub const m_angularLimit: usize = 0xFFC; // float32
                pub const m_angularDamping: usize = 0x1000; // float32
                pub const m_linearForce: usize = 0x1004; // float32
                pub const m_flFrequency: usize = 0x1008; // float32
                pub const m_flDampingRatio: usize = 0x100C; // float32
                pub const m_vecLinearForcePointAt: usize = 0x1010; // Vector
                pub const m_bCollapseToForcePoint: usize = 0x101C; // bool
                pub const m_vecLinearForcePointAtWorld: usize = 0x1020; // Vector
                pub const m_vecLinearForceDirection: usize = 0x102C; // Vector
                pub const m_bConvertToDebrisWhenPossible: usize = 0x1038; // bool
            }
            // Parent: C_BasePropDoor
            // Field count: 0
            pub mod C_PropDoorRotating {
            }
            // Parent: C_BaseEntity
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_Handle (CHandle<CBaseEntity>)
            // NetworkVarNames: m_bSendHandle (bool)
            pub mod C_HandleTest {
                pub const m_Handle: usize = 0x5F8; // CHandle<C_BaseEntity>
                pub const m_bSendHandle: usize = 0x5FC; // bool
            }
            // Parent: C_BaseEntity
            // Field count: 8
            //
            // Metadata:
            // NetworkVarNames: m_worldName (string_t)
            // NetworkVarNames: m_layerName (string_t)
            // NetworkVarNames: m_bWorldLayerVisible (bool)
            // NetworkVarNames: m_bEntitiesSpawned (bool)
            pub mod CInfoWorldLayer {
                pub const m_pOutputOnEntitiesSpawned: usize = 0x5F8; // CEntityIOOutput
                pub const m_worldName: usize = 0x620; // CUtlSymbolLarge
                pub const m_layerName: usize = 0x628; // CUtlSymbolLarge
                pub const m_bWorldLayerVisible: usize = 0x630; // bool
                pub const m_bEntitiesSpawned: usize = 0x631; // bool
                pub const m_bCreateAsChildSpawnGroup: usize = 0x632; // bool
                pub const m_hLayerSpawnGroup: usize = 0x634; // uint32
                pub const m_bWorldLayerActuallyVisible: usize = 0x638; // bool
            }
            // Parent: CBodyComponentSkeletonInstance
            // Field count: 0
            pub mod CBodyComponentBaseModelEntity {
            }
            // Parent: CBaseFilter
            // Field count: 1
            pub mod FilterDamageType {
                pub const m_iDamageType: usize = 0x650; // int32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_Attributes (CEconItemAttribute)
            pub mod CAttributeList {
                pub const m_Attributes: usize = 0x8; // C_UtlVectorEmbeddedNetworkVar<CEconItemAttribute>
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
            pub mod C_ParticleSystem {
                pub const m_szSnapshotFileName: usize = 0xEB0; // char[512]
                pub const m_bActive: usize = 0x10B0; // bool
                pub const m_bFrozen: usize = 0x10B1; // bool
                pub const m_flFreezeTransitionDuration: usize = 0x10B4; // float32
                pub const m_nStopType: usize = 0x10B8; // int32
                pub const m_bAnimateDuringGameplayPause: usize = 0x10BC; // bool
                pub const m_iEffectIndex: usize = 0x10C0; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                pub const m_flStartTime: usize = 0x10C8; // GameTime_t
                pub const m_flPreSimTime: usize = 0x10CC; // float32
                pub const m_vServerControlPoints: usize = 0x10D0; // Vector[4]
                pub const m_iServerControlPointAssignments: usize = 0x1100; // uint8[4]
                pub const m_hControlPointEnts: usize = 0x1104; // CHandle<C_BaseEntity>[64]
                pub const m_bNoSave: usize = 0x1204; // bool
                pub const m_bNoFreeze: usize = 0x1205; // bool
                pub const m_bNoRamp: usize = 0x1206; // bool
                pub const m_bStartActive: usize = 0x1207; // bool
                pub const m_iszEffectName: usize = 0x1208; // CUtlSymbolLarge
                pub const m_iszControlPointNames: usize = 0x1210; // CUtlSymbolLarge[64]
                pub const m_nDataCP: usize = 0x1410; // int32
                pub const m_vecDataCPValue: usize = 0x1414; // Vector
                pub const m_nTintCP: usize = 0x1420; // int32
                pub const m_clrTint: usize = 0x1424; // Color
                pub const m_bOldActive: usize = 0x1448; // bool
                pub const m_bOldFrozen: usize = 0x1449; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Outflow_CycleShuffled {
                pub const m_Outputs: usize = 0x48; // CUtlVector<CPulse_OutflowConnection>
            }
            // Parent: C_BaseCSGrenade
            // Field count: 0
            pub mod C_DecoyGrenade {
            }
            // Parent: CBaseAnimGraph
            // Field count: 0
            pub mod C_WaterBullet {
            }
            // Parent: CPlayerPawnComponent
            // Field count: 4
            //
            // Metadata:
            // NetworkVarNames: m_bIsRescuing (bool)
            // NetworkVarNames: m_weaponPurchasesThisMatch (WeaponPurchaseTracker_t)
            // NetworkVarNames: m_weaponPurchasesThisRound (WeaponPurchaseTracker_t)
            pub mod CCSPlayer_ActionTrackingServices {
                pub const m_hLastWeaponBeforeC4AutoSwitch: usize = 0x40; // CHandle<C_BasePlayerWeapon>
                pub const m_bIsRescuing: usize = 0x44; // bool
                pub const m_weaponPurchasesThisMatch: usize = 0x48; // WeaponPurchaseTracker_t
                pub const m_weaponPurchasesThisRound: usize = 0xB8; // WeaponPurchaseTracker_t
            }
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            pub mod C_WeaponHKP2000 {
            }
            // Parent: C_BaseTrigger
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_source (string_t)
            // NetworkVarNames: m_destination (string_t)
            pub mod C_FootstepControl {
                pub const m_source: usize = 0xFF0; // CUtlSymbolLarge
                pub const m_destination: usize = 0xFF8; // CUtlSymbolLarge
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
            pub mod CCitadelSoundOpvarSetOBB {
                pub const m_iszStackName: usize = 0x610; // CUtlSymbolLarge
                pub const m_iszOperatorName: usize = 0x618; // CUtlSymbolLarge
                pub const m_iszOpvarName: usize = 0x620; // CUtlSymbolLarge
                pub const m_vDistanceInnerMins: usize = 0x628; // Vector
                pub const m_vDistanceInnerMaxs: usize = 0x634; // Vector
                pub const m_vDistanceOuterMins: usize = 0x640; // Vector
                pub const m_vDistanceOuterMaxs: usize = 0x64C; // Vector
                pub const m_nAABBDirection: usize = 0x658; // int32
            }
            // Parent: C_CSGO_EndOfMatchLineupEndpoint
            // Field count: 0
            pub mod C_CSGO_EndOfMatchLineupStart {
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
            // Parent: C_DynamicProp
            // Field count: 0
            pub mod C_DynamicPropAlias_dynamic_prop {
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
            pub mod C_EconEntity {
                pub const m_flFlexDelayTime: usize = 0x1378; // float32
                pub const m_flFlexDelayedWeight: usize = 0x1380; // float32*
                pub const m_bAttributesInitialized: usize = 0x1388; // bool
                pub const m_AttributeManager: usize = 0x1390; // C_AttributeContainer
                pub const m_OriginalOwnerXuidLow: usize = 0x1868; // uint32
                pub const m_OriginalOwnerXuidHigh: usize = 0x186C; // uint32
                pub const m_nFallbackPaintKit: usize = 0x1870; // int32
                pub const m_nFallbackSeed: usize = 0x1874; // int32
                pub const m_flFallbackWear: usize = 0x1878; // float32
                pub const m_nFallbackStatTrak: usize = 0x187C; // int32
                pub const m_bClientside: usize = 0x1880; // bool
                pub const m_bParticleSystemsCreated: usize = 0x1881; // bool
                pub const m_vecAttachedParticles: usize = 0x1888; // CUtlVector<int32>
                pub const m_hViewmodelAttachment: usize = 0x18A0; // CHandle<CBaseAnimGraph>
                pub const m_iOldTeam: usize = 0x18A4; // int32
                pub const m_bAttachmentDirty: usize = 0x18A8; // bool
                pub const m_nUnloadedModelIndex: usize = 0x18AC; // int32
                pub const m_iNumOwnerValidationRetries: usize = 0x18B0; // int32
                pub const m_hOldProvidee: usize = 0x18C0; // CHandle<C_BaseEntity>
                pub const m_vecAttachedModels: usize = 0x18C8; // CUtlVector<C_EconEntity::AttachedModelData_t>
            }
            // Parent: CPlayerPawnComponent
            // Field count: 0
            pub mod CPlayer_UseServices {
            }
            // Parent: None
            // Field count: 1
            pub mod CPulseCell_Unknown {
                pub const m_UnknownKeys: usize = 0x48; // KeyValues3
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
            // Parent: C_LateUpdatedAnimating
            // Field count: 0
            pub mod C_CS2HudModelBase {
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
            pub mod C_GradientFog {
                pub const m_hGradientFogTexture: usize = 0x5F8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_flFogStartDistance: usize = 0x600; // float32
                pub const m_flFogEndDistance: usize = 0x604; // float32
                pub const m_bHeightFogEnabled: usize = 0x608; // bool
                pub const m_flFogStartHeight: usize = 0x60C; // float32
                pub const m_flFogEndHeight: usize = 0x610; // float32
                pub const m_flFarZ: usize = 0x614; // float32
                pub const m_flFogMaxOpacity: usize = 0x618; // float32
                pub const m_flFogFalloffExponent: usize = 0x61C; // float32
                pub const m_flFogVerticalExponent: usize = 0x620; // float32
                pub const m_fogColor: usize = 0x624; // Color
                pub const m_flFogStrength: usize = 0x628; // float32
                pub const m_flFadeTime: usize = 0x62C; // float32
                pub const m_bStartDisabled: usize = 0x630; // bool
                pub const m_bIsEnabled: usize = 0x631; // bool
                pub const m_bGradientFogNeedsTextures: usize = 0x632; // bool
            }
            // Parent: CPlayerControllerComponent
            // Field count: 4
            //
            // Metadata:
            // NetworkVarNames: m_iAccount (int)
            // NetworkVarNames: m_iStartAccount (int)
            // NetworkVarNames: m_iTotalCashSpent (int)
            // NetworkVarNames: m_iCashSpentThisRound (int)
            pub mod CCSPlayerController_InGameMoneyServices {
                pub const m_iAccount: usize = 0x40; // int32
                pub const m_iStartAccount: usize = 0x44; // int32
                pub const m_iTotalCashSpent: usize = 0x48; // int32
                pub const m_iCashSpentThisRound: usize = 0x4C; // int32
            }
            // Parent: CBaseFilter
            // Field count: 1
            pub mod CFilterModel {
                pub const m_iFilterModel: usize = 0x650; // CUtlSymbolLarge
            }
            // Parent: C_SoundAreaEntityBase
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_vMin (Vector)
            // NetworkVarNames: m_vMax (Vector)
            pub mod C_SoundAreaEntityOrientedBox {
                pub const m_vMin: usize = 0x620; // Vector
                pub const m_vMax: usize = 0x62C; // Vector
            }
            // Parent: C_SoundOpvarSetPointBase
            // Field count: 0
            pub mod C_SoundOpvarSetPointEntity {
            }
            // Parent: C_CSWeaponBase
            // Field count: 0
            pub mod C_CSWeaponBaseShotgun {
            }
            // Parent: C_CSPlayerPawn
            // Field count: 2
            pub mod C_CSGO_PreviewPlayer {
                pub const m_animgraphCharacterModeString: usize = 0x3F10; // CGlobalSymbol
                pub const m_flInitialModelScale: usize = 0x3F18; // float32
            }
            // Parent: C_BarnLight
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_bShowLight (bool)
            pub mod C_RectLight {
                pub const m_bShowLight: usize = 0x1200; // bool
            }
            // Parent: C_BaseModelEntity
            // Field count: 3
            pub mod C_FuncTrackTrain {
                pub const m_nLongAxis: usize = 0xEB0; // int32
                pub const m_flRadius: usize = 0xEB4; // float32
                pub const m_flLineLength: usize = 0xEB8; // float32
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
            pub mod C_Beam {
                pub const m_flFrameRate: usize = 0xEB0; // float32
                pub const m_flHDRColorScale: usize = 0xEB4; // float32
                pub const m_flFireTime: usize = 0xEB8; // GameTime_t
                pub const m_flDamage: usize = 0xEBC; // float32
                pub const m_nNumBeamEnts: usize = 0xEC0; // uint8
                pub const m_queryHandleHalo: usize = 0xEC4; // int32
                pub const m_hBaseMaterial: usize = 0xEE8; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_nHaloIndex: usize = 0xEF0; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_nBeamType: usize = 0xEF8; // BeamType_t
                pub const m_nBeamFlags: usize = 0xEFC; // uint32
                pub const m_hAttachEntity: usize = 0xF00; // CHandle<C_BaseEntity>[10]
                pub const m_nAttachIndex: usize = 0xF28; // AttachmentHandle_t[10]
                pub const m_fWidth: usize = 0xF34; // float32
                pub const m_fEndWidth: usize = 0xF38; // float32
                pub const m_fFadeLength: usize = 0xF3C; // float32
                pub const m_fHaloScale: usize = 0xF40; // float32
                pub const m_fAmplitude: usize = 0xF44; // float32
                pub const m_fStartFrame: usize = 0xF48; // float32
                pub const m_fSpeed: usize = 0xF4C; // float32
                pub const m_flFrame: usize = 0xF50; // float32
                pub const m_nClipStyle: usize = 0xF54; // BeamClipStyle_t
                pub const m_bTurnedOff: usize = 0xF58; // bool
                pub const m_vecEndPos: usize = 0xF5C; // VectorWS
                pub const m_hEndEntity: usize = 0xF68; // CHandle<C_BaseEntity>
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
            pub mod C_EnvLightProbeVolume {
                pub const m_Entity_hLightProbeTexture_AmbientCube: usize = 0x15F0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeTexture_SDF: usize = 0x15F8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeTexture_SH2_DC: usize = 0x1600; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeTexture_SH2_R: usize = 0x1608; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeTexture_SH2_G: usize = 0x1610; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeTexture_SH2_B: usize = 0x1618; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeDirectLightIndicesTexture: usize = 0x1620; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeDirectLightScalarsTexture: usize = 0x1628; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeDirectLightShadowsTexture: usize = 0x1630; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_vBoxMins: usize = 0x1638; // Vector
                pub const m_Entity_vBoxMaxs: usize = 0x1644; // Vector
                pub const m_Entity_bMoveable: usize = 0x1650; // bool
                pub const m_Entity_nHandshake: usize = 0x1654; // int32
                pub const m_Entity_nPriority: usize = 0x1658; // int32
                pub const m_Entity_bStartDisabled: usize = 0x165C; // bool
                pub const m_Entity_nLightProbeSizeX: usize = 0x1660; // int32
                pub const m_Entity_nLightProbeSizeY: usize = 0x1664; // int32
                pub const m_Entity_nLightProbeSizeZ: usize = 0x1668; // int32
                pub const m_Entity_nLightProbeAtlasX: usize = 0x166C; // int32
                pub const m_Entity_nLightProbeAtlasY: usize = 0x1670; // int32
                pub const m_Entity_nLightProbeAtlasZ: usize = 0x1674; // int32
                pub const m_Entity_bEnabled: usize = 0x1681; // bool
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
            pub mod C_FuncConveyor {
                pub const m_vecMoveDirEntitySpace: usize = 0xEB8; // Vector
                pub const m_flTargetSpeed: usize = 0xEC4; // float32
                pub const m_nTransitionStartTick: usize = 0xEC8; // GameTick_t
                pub const m_nTransitionDurationTicks: usize = 0xECC; // int32
                pub const m_flTransitionStartSpeed: usize = 0xED0; // float32
                pub const m_hConveyorModels: usize = 0xED8; // C_NetworkUtlVectorBase<CHandle<C_BaseEntity>>
                pub const m_flCurrentConveyorOffset: usize = 0xEF0; // float32
                pub const m_flCurrentConveyorSpeed: usize = 0xEF4; // float32
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
            pub mod C_PlantedC4 {
                pub const m_bBombTicking: usize = 0x1160; // bool
                pub const m_nBombSite: usize = 0x1164; // int32
                pub const m_nSourceSoundscapeHash: usize = 0x1168; // int32
                pub const m_entitySpottedState: usize = 0x1170; // EntitySpottedState_t
                pub const m_flNextGlow: usize = 0x1188; // GameTime_t
                pub const m_flNextBeep: usize = 0x118C; // GameTime_t
                pub const m_flC4Blow: usize = 0x1190; // GameTime_t
                pub const m_bCannotBeDefused: usize = 0x1194; // bool
                pub const m_bHasExploded: usize = 0x1195; // bool
                pub const m_flTimerLength: usize = 0x1198; // float32
                pub const m_bBeingDefused: usize = 0x119C; // bool
                pub const m_bTriggerWarning: usize = 0x11A0; // float32
                pub const m_bExplodeWarning: usize = 0x11A4; // float32
                pub const m_bC4Activated: usize = 0x11A8; // bool
                pub const m_bTenSecWarning: usize = 0x11A9; // bool
                pub const m_flDefuseLength: usize = 0x11AC; // float32
                pub const m_flDefuseCountDown: usize = 0x11B0; // GameTime_t
                pub const m_bBombDefused: usize = 0x11B4; // bool
                pub const m_hBombDefuser: usize = 0x11B8; // CHandle<C_CSPlayerPawn>
                pub const m_AttributeManager: usize = 0x11C0; // C_AttributeContainer
                pub const m_hDefuserMultimeter: usize = 0x1698; // CHandle<C_Multimeter>
                pub const m_flNextRadarFlashTime: usize = 0x169C; // GameTime_t
                pub const m_bRadarFlash: usize = 0x16A0; // bool
                pub const m_pBombDefuser: usize = 0x16A4; // CHandle<C_CSPlayerPawn>
                pub const m_fLastDefuseTime: usize = 0x16A8; // GameTime_t
                pub const m_pPredictionOwner: usize = 0x16B0; // CBasePlayerController*
                pub const m_vecC4ExplodeSpectatePos: usize = 0x16B8; // Vector
                pub const m_vecC4ExplodeSpectateAng: usize = 0x16C4; // QAngle
                pub const m_flC4ExplodeSpectateDuration: usize = 0x16D0; // float32
            }
            // Parent: C_CSGO_TeamIntroCharacterPosition
            // Field count: 0
            pub mod CCSGO_WingmanIntroCharacterPosition {
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
            pub mod C_RagdollProp {
                pub const m_ragEnabled: usize = 0x1160; // C_NetworkUtlVectorBase<bool>
                pub const m_ragPos: usize = 0x1178; // C_NetworkUtlVectorBase<Vector>
                pub const m_ragAngles: usize = 0x1190; // C_NetworkUtlVectorBase<QAngle>
                pub const m_flBlendWeight: usize = 0x11A8; // float32
                pub const m_hRagdollSource: usize = 0x11AC; // CHandle<C_BaseEntity>
                pub const m_iEyeAttachment: usize = 0x11B0; // AttachmentHandle_t
                pub const m_flBlendWeightCurrent: usize = 0x11B4; // float32
                pub const m_parentPhysicsBoneIndices: usize = 0x11B8; // CUtlVector<int32>
                pub const m_worldSpaceBoneComputationOrder: usize = 0x11D0; // CUtlVector<int32>
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
            // Parent: C_BaseModelEntity
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_CLightComponent (CLightComponent::Storage_t)
            pub mod C_LightEntity {
                pub const m_CLightComponent: usize = 0xEB0; // CLightComponent*
            }
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            pub mod C_WeaponNegev {
            }
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            pub mod C_WeaponFiveSeven {
            }
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            pub mod C_WeaponMP9 {
            }
            // Parent: C_DynamicProp
            // Field count: 0
            pub mod C_DynamicPropAlias_prop_dynamic_override {
            }
            // Parent: CEnvSoundscape
            // Field count: 0
            pub mod CEnvSoundscapeTriggerable {
            }
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            pub mod C_AK47 {
            }
            // Parent: C_BaseEntity
            // Field count: 10
            pub mod C_CSGO_MapPreviewCameraPathNode {
                pub const m_szParentPathUniqueID: usize = 0x5F8; // CUtlSymbolLarge
                pub const m_nPathIndex: usize = 0x600; // int32
                pub const m_vInTangentLocal: usize = 0x604; // Vector
                pub const m_vOutTangentLocal: usize = 0x610; // Vector
                pub const m_flFOV: usize = 0x61C; // float32
                pub const m_flCameraSpeed: usize = 0x620; // float32
                pub const m_flEaseIn: usize = 0x624; // float32
                pub const m_flEaseOut: usize = 0x628; // float32
                pub const m_vInTangentWorld: usize = 0x62C; // Vector
                pub const m_vOutTangentWorld: usize = 0x638; // Vector
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
            pub mod C_CSPlayerResource {
                pub const m_bHostageAlive: usize = 0x5F8; // bool[12]
                pub const m_isHostageFollowingSomeone: usize = 0x604; // bool[12]
                pub const m_iHostageEntityIDs: usize = 0x610; // CEntityIndex[12]
                pub const m_bombsiteCenterA: usize = 0x640; // Vector
                pub const m_bombsiteCenterB: usize = 0x64C; // Vector
                pub const m_hostageRescueX: usize = 0x658; // int32[4]
                pub const m_hostageRescueY: usize = 0x668; // int32[4]
                pub const m_hostageRescueZ: usize = 0x678; // int32[4]
                pub const m_bEndMatchNextMapAllVoted: usize = 0x688; // bool
                pub const m_foundGoalPositions: usize = 0x689; // bool
            }
            // Parent: C_BaseEntity
            // Field count: 2
            pub mod CSkyboxReference {
                pub const m_worldGroupId: usize = 0x5F8; // WorldGroupId_t
                pub const m_hSkyCamera: usize = 0x5FC; // CHandle<C_SkyCamera>
            }
            // Parent: C_PointEntity
            // Field count: 14
            pub mod CMapInfo {
                pub const m_iBuyingStatus: usize = 0x5F8; // int32
                pub const m_flBombRadius: usize = 0x5FC; // float32
                pub const m_iPetPopulation: usize = 0x600; // int32
                pub const m_bUseNormalSpawnsForDM: usize = 0x604; // bool
                pub const m_bDisableAutoGeneratedDMSpawns: usize = 0x605; // bool
                pub const m_flBotMaxVisionDistance: usize = 0x608; // float32
                pub const m_iHostageCount: usize = 0x60C; // int32
                pub const m_bFadePlayerVisibilityFarZ: usize = 0x610; // bool
                pub const m_bRainTraceToSkyEnabled: usize = 0x611; // bool
                pub const m_flEnvRainStrength: usize = 0x614; // float32
                pub const m_flEnvPuddleRippleStrength: usize = 0x618; // float32
                pub const m_flEnvPuddleRippleDirection: usize = 0x61C; // float32
                pub const m_flEnvWetnessCoverage: usize = 0x620; // float32
                pub const m_flEnvWetnessDryingAmount: usize = 0x624; // float32
            }
            // Parent: C_CSGO_TeamPreviewCamera
            // Field count: 0
            pub mod C_CSGO_EndOfMatchCamera {
            }
            // Parent: C_CS2HudModelBase
            // Field count: 0
            pub mod C_CS2HudModelArms {
            }
            // Parent: C_LightEntity
            // Field count: 0
            pub mod C_LightSpotEntity {
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
            pub mod C_PhysicsProp {
                pub const m_bAwake: usize = 0x1300; // bool
            }
            // Parent: CBaseFilter
            // Field count: 1
            pub mod CFilterTeam {
                pub const m_iFilterTeam: usize = 0x650; // int32
            }
            // Parent: C_CSGO_PreviewPlayer
            // Field count: 0
            pub mod C_CSGO_PreviewPlayerAlias_csgo_player_previewmodel {
            }
            // Parent: C_BaseCSGrenade
            // Field count: 0
            pub mod C_SmokeGrenade {
            }
            // Parent: None
            // Field count: 0
            pub mod CompositeMaterialInputLooseVariableType_t {
            }
            // Parent: None
            // Field count: 0
            pub mod PulseCursorCancelPriority_t {
            }
        }
    }
}
