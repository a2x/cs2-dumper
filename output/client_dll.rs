// Generated using https://github.com/a2x/cs2-dumper
// 2025-10-29 20:32:52.978018900 UTC

#![allow(non_upper_case_globals, non_camel_case_types, non_snake_case, unused)]

pub mod cs2_dumper {
    pub mod schemas {
        // Module: client.dll
        // Class count: 30
        // Enum count: 10
        pub mod client_dll {
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MPropertyElementNameFn
            pub mod GeneratedTextureHandle_t {
                pub const m_strBitmapName: usize = 0x0; // CUtlString
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyElementNameFn
            pub mod CompositeMaterialInputContainer_t {
                pub const m_bEnabled: usize = 0x0; // bool
                pub const m_nCompositeMaterialInputContainerSourceType: usize = 0x4; // CompositeMaterialInputContainerSourceType_t
                pub const m_strSpecificContainerMaterial: usize = 0x8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIMaterial2>>
                pub const m_strAttrName: usize = 0xE8; // CUtlString
                pub const m_strAlias: usize = 0xF0; // CUtlString
                pub const m_vecLooseVariables: usize = 0xF8; // CUtlVector<CompositeMaterialInputLooseVariable_t>
                pub const m_strAttrNameForVar: usize = 0x110; // CUtlString
                pub const m_bExposeExternally: usize = 0x118; // bool
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyElementNameFn
            pub mod CompositeMaterialAssemblyProcedure_t {
                pub const m_vecCompMatIncludes: usize = 0x0; // CUtlVector<CResourceNameTyped<CWeakHandle<InfoForResourceTypeCCompositeMaterialKit>>>
                pub const m_vecMatchFilters: usize = 0x18; // CUtlVector<CompositeMaterialMatchFilter_t>
                pub const m_vecCompositeInputContainers: usize = 0x30; // CUtlVector<CompositeMaterialInputContainer_t>
                pub const m_vecPropertyMutators: usize = 0x48; // CUtlVector<CompMatPropertyMutator_t>
            }
            // Parent: None
            // Field count: 37
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyElementNameFn
            pub mod CompositeMaterialInputLooseVariable_t {
                pub const m_strName: usize = 0x0; // CUtlString
                pub const m_bExposeExternally: usize = 0x8; // bool
                pub const m_strExposedFriendlyName: usize = 0x10; // CUtlString
                pub const m_strExposedFriendlyGroupName: usize = 0x18; // CUtlString
                pub const m_bExposedVariableIsFixedRange: usize = 0x20; // bool
                pub const m_strExposedVisibleWhenTrue: usize = 0x28; // CUtlString
                pub const m_strExposedHiddenWhenTrue: usize = 0x30; // CUtlString
                pub const m_strExposedValueList: usize = 0x38; // CUtlString
                pub const m_nVariableType: usize = 0x40; // CompositeMaterialInputLooseVariableType_t
                pub const m_bValueBoolean: usize = 0x44; // bool
                pub const m_nValueIntX: usize = 0x48; // int32
                pub const m_nValueIntY: usize = 0x4C; // int32
                pub const m_nValueIntZ: usize = 0x50; // int32
                pub const m_nValueIntW: usize = 0x54; // int32
                pub const m_bHasFloatBounds: usize = 0x58; // bool
                pub const m_flValueFloatX: usize = 0x5C; // float32
                pub const m_flValueFloatX_Min: usize = 0x60; // float32
                pub const m_flValueFloatX_Max: usize = 0x64; // float32
                pub const m_flValueFloatY: usize = 0x68; // float32
                pub const m_flValueFloatY_Min: usize = 0x6C; // float32
                pub const m_flValueFloatY_Max: usize = 0x70; // float32
                pub const m_flValueFloatZ: usize = 0x74; // float32
                pub const m_flValueFloatZ_Min: usize = 0x78; // float32
                pub const m_flValueFloatZ_Max: usize = 0x7C; // float32
                pub const m_flValueFloatW: usize = 0x80; // float32
                pub const m_flValueFloatW_Min: usize = 0x84; // float32
                pub const m_flValueFloatW_Max: usize = 0x88; // float32
                pub const m_cValueColor4: usize = 0x8C; // Color
                pub const m_nValueSystemVar: usize = 0x90; // CompositeMaterialVarSystemVar_t
                pub const m_strResourceMaterial: usize = 0x98; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIMaterial2>>
                pub const m_strTextureContentAssetPath: usize = 0x178; // CUtlString
                pub const m_strTextureRuntimeResourcePath: usize = 0x180; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCTextureBase>>
                pub const m_strTextureCompilationVtexTemplate: usize = 0x260; // CUtlString
                pub const m_nTextureType: usize = 0x268; // CompositeMaterialInputTextureType_t
                pub const m_strString: usize = 0x270; // CUtlString
                pub const m_strPanoramaPanelPath: usize = 0x278; // CUtlString
                pub const m_nPanoramaRenderRes: usize = 0x280; // int32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmEventConsumerHudModelArmsAttributes {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod inv_image_light_barn_t {
                pub const color: usize = 0x0; // Vector
                pub const angle: usize = 0xC; // QAngle
                pub const brightness: usize = 0x18; // float32
                pub const orbit_distance: usize = 0x1C; // float32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod inv_image_map_t {
                pub const map_name: usize = 0x0; // CUtlString
                pub const map_rotation: usize = 0x8; // float32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod inv_image_light_fill_t {
                pub const color: usize = 0x0; // Vector
                pub const angle: usize = 0xC; // QAngle
                pub const brightness: usize = 0x18; // float32
            }
            // Parent: None
            // Field count: 5
            pub mod CInterpolatedValue {
                pub const m_flStartTime: usize = 0x0; // float32
                pub const m_flEndTime: usize = 0x4; // float32
                pub const m_flStartValue: usize = 0x8; // float32
                pub const m_flEndValue: usize = 0xC; // float32
                pub const m_nInterpType: usize = 0x10; // int32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod inv_image_item_t {
                pub const position: usize = 0x0; // Vector
                pub const angle: usize = 0xC; // QAngle
                pub const pose_sequence: usize = 0x18; // CUtlString
            }
            // Parent: None
            // Field count: 4
            pub mod C_Chicken_GraphController {
                pub const m_paramActivity: usize = 0x268; // CAnimGraphParamRef<char*>
                pub const m_paramEndActivityImmediately: usize = 0x290; // CAnimGraphParamRef<bool>
                pub const m_paramSnapToSquatting: usize = 0x2B0; // CAnimGraphParamRef<bool>
                pub const m_sActivityFinished: usize = 0x2D0; // CAnimGraphTagRef
            }
            // Parent: None
            // Field count: 2
            pub mod TimedEvent {
                pub const m_TimeBetweenEvents: usize = 0x0; // float32
                pub const m_fNextEvent: usize = 0x4; // float32
            }
            // Parent: None
            // Field count: 13
            pub mod CFlashlightEffect {
                pub const m_bIsOn: usize = 0x10; // bool
                pub const m_bMuzzleFlashEnabled: usize = 0x20; // bool
                pub const m_flMuzzleFlashBrightness: usize = 0x24; // float32
                pub const m_quatMuzzleFlashOrientation: usize = 0x30; // Quaternion
                pub const m_vecMuzzleFlashOrigin: usize = 0x40; // Vector
                pub const m_flFov: usize = 0x4C; // float32
                pub const m_flFarZ: usize = 0x50; // float32
                pub const m_flLinearAtten: usize = 0x54; // float32
                pub const m_bCastsShadows: usize = 0x58; // bool
                pub const m_flCurrentPullBackDist: usize = 0x5C; // float32
                pub const m_FlashlightTexture: usize = 0x60; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_MuzzleFlashTexture: usize = 0x68; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_textureName: usize = 0x70; // char[64]
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod inv_image_camera_t {
                pub const angle: usize = 0x0; // QAngle
                pub const fov: usize = 0xC; // float32
                pub const znear: usize = 0x10; // float32
                pub const zfar: usize = 0x14; // float32
                pub const target: usize = 0x18; // Vector
                pub const target_nudge: usize = 0x24; // Vector
                pub const orbit_distance: usize = 0x30; // float32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MVDataOutlinerDetailExpr
            // MVDataOverlayType
            // MVDataPreviewWidget
            // MVDataOutlinerLeafNameFn
            // MVDataOutlinerLeafColorFn
            // MVDataOutlinerLeafDetailFn
            // MVDataVirtualNodeFactoryFn
            // MVDataPreLoadFixupFn
            // MVDataPostSaveFixupFn
            pub mod CInventoryImageData {
                pub const m_nNodeType: usize = 0x0; // InventoryNodeType_t
                pub const name: usize = 0x8; // CUtlString
                pub const inventory_image_data: usize = 0x10; // inv_image_data_t
            }
            // Parent: None
            // Field count: 8
            pub mod C_CSGO_PreviewPlayer_GraphController {
                pub const m_pszCharacterMode: usize = 0x268; // CAnimGraphParamOptionalRef<char*>
                pub const m_pszTeamPreviewVariant: usize = 0x290; // CAnimGraphParamOptionalRef<char*>
                pub const m_pszTeamPreviewPosition: usize = 0x2B8; // CAnimGraphParamOptionalRef<char*>
                pub const m_pszEndOfMatchCelebration: usize = 0x2E0; // CAnimGraphParamOptionalRef<char*>
                pub const m_nTeamPreviewRandom: usize = 0x308; // CAnimGraphParamOptionalRef<int32>
                pub const m_pszWeaponState: usize = 0x328; // CAnimGraphParamOptionalRef<char*>
                pub const m_pszWeaponType: usize = 0x350; // CAnimGraphParamOptionalRef<char*>
                pub const m_bCT: usize = 0x378; // CAnimGraphParamOptionalRef<bool>
            }
            // Parent: None
            // Field count: 2
            pub mod C_CommandContext {
                pub const needsprocessing: usize = 0x0; // bool
                pub const command_number: usize = 0xA0; // int32
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CompositeMaterialEditorPoint_t {
                pub const m_ModelName: usize = 0x0; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                pub const m_nSequenceIndex: usize = 0xE0; // int32
                pub const m_flCycle: usize = 0xE4; // float32
                pub const m_KVModelStateChoices: usize = 0xE8; // KeyValues3
                pub const m_bEnableChildModel: usize = 0xF8; // bool
                pub const m_ChildModelName: usize = 0x100; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                pub const m_vecCompositeMaterialAssemblyProcedures: usize = 0x1E0; // CUtlVector<CompositeMaterialAssemblyProcedure_t>
                pub const m_vecCompositeMaterials: usize = 0x1F8; // CUtlVector<CompositeMaterial_t>
            }
            // Parent: None
            // Field count: 0
            pub mod CPlayerSprayDecalRenderHelper {
            }
            // Parent: None
            // Field count: 13
            pub mod C_IronSightController {
                pub const m_bIronSightAvailable: usize = 0x10; // bool
                pub const m_flIronSightAmount: usize = 0x14; // float32
                pub const m_flIronSightAmountGained: usize = 0x18; // float32
                pub const m_flIronSightAmountBiased: usize = 0x1C; // float32
                pub const m_flIronSightAmount_Interpolated: usize = 0x20; // float32
                pub const m_flIronSightAmountGained_Interpolated: usize = 0x24; // float32
                pub const m_flIronSightAmountBiased_Interpolated: usize = 0x28; // float32
                pub const m_flInterpolationLastUpdated: usize = 0x2C; // float32
                pub const m_angDeltaAverage: usize = 0x30; // QAngle[8]
                pub const m_angViewLast: usize = 0x90; // QAngle
                pub const m_vecDotCoords: usize = 0x9C; // Vector2D
                pub const m_flFiringInaccuracyExtraWidthMultiplier: usize = 0xA4; // float32
                pub const m_flSpeedRatio: usize = 0xA8; // float32
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyElementNameFn
            pub mod CompMatMutatorCondition_t {
                pub const m_nMutatorCondition: usize = 0x0; // CompMatPropertyMutatorConditionType_t
                pub const m_strMutatorConditionContainerName: usize = 0x8; // CUtlString
                pub const m_strMutatorConditionContainerVarName: usize = 0x10; // CUtlString
                pub const m_strMutatorConditionContainerVarValue: usize = 0x18; // CUtlString
                pub const m_bPassWhenTrue: usize = 0x20; // bool
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod inv_image_data_t {
                pub const map: usize = 0x0; // inv_image_map_t
                pub const item: usize = 0x10; // inv_image_item_t
                pub const camera: usize = 0x30; // inv_image_camera_t
                pub const lightsun: usize = 0x64; // inv_image_light_sun_t
                pub const lightfill: usize = 0x80; // inv_image_light_fill_t
                pub const light0: usize = 0x9C; // inv_image_light_barn_t
                pub const light1: usize = 0xBC; // inv_image_light_barn_t
            }
            // Parent: None
            // Field count: 29
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyElementNameFn
            pub mod CompMatPropertyMutator_t {
                pub const m_bEnabled: usize = 0x0; // bool
                pub const m_nMutatorCommandType: usize = 0x4; // CompMatPropertyMutatorType_t
                pub const m_strInitWith_Container: usize = 0x8; // CUtlString
                pub const m_strCopyProperty_InputContainerSrc: usize = 0x10; // CUtlString
                pub const m_strCopyProperty_InputContainerProperty: usize = 0x18; // CUtlString
                pub const m_strCopyProperty_TargetProperty: usize = 0x20; // CUtlString
                pub const m_strRandomRollInputVars_SeedInputVar: usize = 0x28; // CUtlString
                pub const m_vecRandomRollInputVars_InputVarsToRoll: usize = 0x30; // CUtlVector<CUtlString>
                pub const m_strCopyMatchingKeys_InputContainerSrc: usize = 0x48; // CUtlString
                pub const m_strCopyKeysWithSuffix_InputContainerSrc: usize = 0x50; // CUtlString
                pub const m_strCopyKeysWithSuffix_FindSuffix: usize = 0x58; // CUtlString
                pub const m_strCopyKeysWithSuffix_ReplaceSuffix: usize = 0x60; // CUtlString
                pub const m_nSetValue_Value: usize = 0x68; // CompositeMaterialInputLooseVariable_t
                pub const m_strGenerateTexture_TargetParam: usize = 0x2F0; // CUtlString
                pub const m_strGenerateTexture_InitialContainer: usize = 0x2F8; // CUtlString
                pub const m_nResolution: usize = 0x300; // int32
                pub const m_bIsScratchTarget: usize = 0x304; // bool
                pub const m_strCompressionFormat: usize = 0x308; // CUtlString
                pub const m_bSplatDebugInfo: usize = 0x310; // bool
                pub const m_bCaptureInRenderDoc: usize = 0x311; // bool
                pub const m_vecTexGenInstructions: usize = 0x318; // CUtlVector<CompMatPropertyMutator_t>
                pub const m_vecConditionalMutators: usize = 0x330; // CUtlVector<CompMatPropertyMutator_t>
                pub const m_strPopInputQueue_Container: usize = 0x348; // CUtlString
                pub const m_strDrawText_InputContainerSrc: usize = 0x350; // CUtlString
                pub const m_strDrawText_InputContainerProperty: usize = 0x358; // CUtlString
                pub const m_vecDrawText_Position: usize = 0x360; // Vector2D
                pub const m_colDrawText_Color: usize = 0x368; // Color
                pub const m_strDrawText_Font: usize = 0x370; // CUtlString
                pub const m_vecConditions: usize = 0x378; // CUtlVector<CompMatMutatorCondition_t>
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CCompositeMaterialEditorDoc {
                pub const m_nVersion: usize = 0x8; // int32
                pub const m_Points: usize = 0x10; // CUtlVector<CompositeMaterialEditorPoint_t>
                pub const m_KVthumbnail: usize = 0x28; // KeyValues3
            }
            // Parent: None
            // Field count: 13
            pub mod CClientAlphaProperty {
                pub const m_nRenderFX: usize = 0x10; // uint8
                pub const m_nRenderMode: usize = 0x11; // uint8
                pub const m_bAlphaOverride: usize = 0x0; // bitfield:1
                pub const m_bShadowAlphaOverride: usize = 0x0; // bitfield:1
                pub const m_nReserved: usize = 0x0; // bitfield:6
                pub const m_nAlpha: usize = 0x13; // uint8
                pub const m_nDesyncOffset: usize = 0x14; // uint16
                pub const m_nReserved2: usize = 0x16; // uint16
                pub const m_nDistFadeStart: usize = 0x18; // uint16
                pub const m_nDistFadeEnd: usize = 0x1A; // uint16
                pub const m_flFadeScale: usize = 0x1C; // float32
                pub const m_flRenderFxStartTime: usize = 0x20; // GameTime_t
                pub const m_flRenderFxDuration: usize = 0x24; // float32
            }
            // Parent: None
            // Field count: 43
            pub mod CGlobalLightBase {
                pub const m_bSpotLight: usize = 0x10; // bool
                pub const m_SpotLightOrigin: usize = 0x14; // Vector
                pub const m_SpotLightAngles: usize = 0x20; // QAngle
                pub const m_ShadowDirection: usize = 0x2C; // Vector
                pub const m_AmbientDirection: usize = 0x38; // Vector
                pub const m_SpecularDirection: usize = 0x44; // Vector
                pub const m_InspectorSpecularDirection: usize = 0x50; // Vector
                pub const m_flSpecularPower: usize = 0x5C; // float32
                pub const m_flSpecularIndependence: usize = 0x60; // float32
                pub const m_SpecularColor: usize = 0x64; // Color
                pub const m_bStartDisabled: usize = 0x68; // bool
                pub const m_bEnabled: usize = 0x69; // bool
                pub const m_LightColor: usize = 0x6A; // Color
                pub const m_AmbientColor1: usize = 0x6E; // Color
                pub const m_AmbientColor2: usize = 0x72; // Color
                pub const m_AmbientColor3: usize = 0x76; // Color
                pub const m_flSunDistance: usize = 0x7C; // float32
                pub const m_flFOV: usize = 0x80; // float32
                pub const m_flNearZ: usize = 0x84; // float32
                pub const m_flFarZ: usize = 0x88; // float32
                pub const m_bEnableShadows: usize = 0x8C; // bool
                pub const m_bOldEnableShadows: usize = 0x8D; // bool
                pub const m_bBackgroundClearNotRequired: usize = 0x8E; // bool
                pub const m_flCloudScale: usize = 0x90; // float32
                pub const m_flCloud1Speed: usize = 0x94; // float32
                pub const m_flCloud1Direction: usize = 0x98; // float32
                pub const m_flCloud2Speed: usize = 0x9C; // float32
                pub const m_flCloud2Direction: usize = 0xA0; // float32
                pub const m_flAmbientScale1: usize = 0xB0; // float32
                pub const m_flAmbientScale2: usize = 0xB4; // float32
                pub const m_flGroundScale: usize = 0xB8; // float32
                pub const m_flLightScale: usize = 0xBC; // float32
                pub const m_flFoWDarkness: usize = 0xC0; // float32
                pub const m_bEnableSeparateSkyboxFog: usize = 0xC4; // bool
                pub const m_vFowColor: usize = 0xC8; // Vector
                pub const m_ViewOrigin: usize = 0xD4; // Vector
                pub const m_ViewAngles: usize = 0xE0; // QAngle
                pub const m_flViewFoV: usize = 0xEC; // float32
                pub const m_WorldPoints: usize = 0xF0; // Vector[8]
                pub const m_vFogOffsetLayer0: usize = 0x4A8; // Vector2D
                pub const m_vFogOffsetLayer1: usize = 0x4B0; // Vector2D
                pub const m_hEnvWind: usize = 0x4B8; // CHandle<C_BaseEntity>
                pub const m_hEnvSky: usize = 0x4BC; // CHandle<C_BaseEntity>
            }
            // Parent: None
            // Field count: 0
            pub mod IClientAlphaProperty {
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod inv_image_light_sun_t {
                pub const color: usize = 0x0; // Vector
                pub const angle: usize = 0xC; // QAngle
                pub const brightness: usize = 0x18; // float32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyElementNameFn
            pub mod CompositeMaterialMatchFilter_t {
                pub const m_nCompositeMaterialMatchFilterType: usize = 0x0; // CompositeMaterialMatchFilterType_t
                pub const m_strMatchFilter: usize = 0x8; // CUtlString
                pub const m_strMatchValue: usize = 0x10; // CUtlString
                pub const m_bPassWhenTrue: usize = 0x18; // bool
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MPropertyElementNameFn
            pub mod CompositeMaterial_t {
                pub const m_TargetKVs: usize = 0x8; // KeyValues3
                pub const m_PreGenerationKVs: usize = 0x18; // KeyValues3
                pub const m_FinalKVs: usize = 0x58; // KeyValues3
                pub const m_vecGeneratedTextures: usize = 0x80; // CUtlVector<GeneratedTextureHandle_t>
            }
        }
    }
}
