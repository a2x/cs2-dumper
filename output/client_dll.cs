// Generated using https://github.com/a2x/cs2-dumper
// 2025-10-29 20:32:52.978018900 UTC

namespace CS2Dumper.Schemas {
    // Module: client.dll
    // Class count: 30
    // Enum count: 10
    public static class ClientDll {
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MPropertyElementNameFn
        public static class GeneratedTextureHandle_t {
            public const nint m_strBitmapName = 0x0; // CUtlString
        }
        // Parent: None
        // Field count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyElementNameFn
        public static class CompositeMaterialInputContainer_t {
            public const nint m_bEnabled = 0x0; // bool
            public const nint m_nCompositeMaterialInputContainerSourceType = 0x4; // CompositeMaterialInputContainerSourceType_t
            public const nint m_strSpecificContainerMaterial = 0x8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIMaterial2>>
            public const nint m_strAttrName = 0xE8; // CUtlString
            public const nint m_strAlias = 0xF0; // CUtlString
            public const nint m_vecLooseVariables = 0xF8; // CUtlVector<CompositeMaterialInputLooseVariable_t>
            public const nint m_strAttrNameForVar = 0x110; // CUtlString
            public const nint m_bExposeExternally = 0x118; // bool
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyElementNameFn
        public static class CompositeMaterialAssemblyProcedure_t {
            public const nint m_vecCompMatIncludes = 0x0; // CUtlVector<CResourceNameTyped<CWeakHandle<InfoForResourceTypeCCompositeMaterialKit>>>
            public const nint m_vecMatchFilters = 0x18; // CUtlVector<CompositeMaterialMatchFilter_t>
            public const nint m_vecCompositeInputContainers = 0x30; // CUtlVector<CompositeMaterialInputContainer_t>
            public const nint m_vecPropertyMutators = 0x48; // CUtlVector<CompMatPropertyMutator_t>
        }
        // Parent: None
        // Field count: 37
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyElementNameFn
        public static class CompositeMaterialInputLooseVariable_t {
            public const nint m_strName = 0x0; // CUtlString
            public const nint m_bExposeExternally = 0x8; // bool
            public const nint m_strExposedFriendlyName = 0x10; // CUtlString
            public const nint m_strExposedFriendlyGroupName = 0x18; // CUtlString
            public const nint m_bExposedVariableIsFixedRange = 0x20; // bool
            public const nint m_strExposedVisibleWhenTrue = 0x28; // CUtlString
            public const nint m_strExposedHiddenWhenTrue = 0x30; // CUtlString
            public const nint m_strExposedValueList = 0x38; // CUtlString
            public const nint m_nVariableType = 0x40; // CompositeMaterialInputLooseVariableType_t
            public const nint m_bValueBoolean = 0x44; // bool
            public const nint m_nValueIntX = 0x48; // int32
            public const nint m_nValueIntY = 0x4C; // int32
            public const nint m_nValueIntZ = 0x50; // int32
            public const nint m_nValueIntW = 0x54; // int32
            public const nint m_bHasFloatBounds = 0x58; // bool
            public const nint m_flValueFloatX = 0x5C; // float32
            public const nint m_flValueFloatX_Min = 0x60; // float32
            public const nint m_flValueFloatX_Max = 0x64; // float32
            public const nint m_flValueFloatY = 0x68; // float32
            public const nint m_flValueFloatY_Min = 0x6C; // float32
            public const nint m_flValueFloatY_Max = 0x70; // float32
            public const nint m_flValueFloatZ = 0x74; // float32
            public const nint m_flValueFloatZ_Min = 0x78; // float32
            public const nint m_flValueFloatZ_Max = 0x7C; // float32
            public const nint m_flValueFloatW = 0x80; // float32
            public const nint m_flValueFloatW_Min = 0x84; // float32
            public const nint m_flValueFloatW_Max = 0x88; // float32
            public const nint m_cValueColor4 = 0x8C; // Color
            public const nint m_nValueSystemVar = 0x90; // CompositeMaterialVarSystemVar_t
            public const nint m_strResourceMaterial = 0x98; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIMaterial2>>
            public const nint m_strTextureContentAssetPath = 0x178; // CUtlString
            public const nint m_strTextureRuntimeResourcePath = 0x180; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCTextureBase>>
            public const nint m_strTextureCompilationVtexTemplate = 0x260; // CUtlString
            public const nint m_nTextureType = 0x268; // CompositeMaterialInputTextureType_t
            public const nint m_strString = 0x270; // CUtlString
            public const nint m_strPanoramaPanelPath = 0x278; // CUtlString
            public const nint m_nPanoramaRenderRes = 0x280; // int32
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmEventConsumerHudModelArmsAttributes {
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class inv_image_light_barn_t {
            public const nint color = 0x0; // Vector
            public const nint angle = 0xC; // QAngle
            public const nint brightness = 0x18; // float32
            public const nint orbit_distance = 0x1C; // float32
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class inv_image_map_t {
            public const nint map_name = 0x0; // CUtlString
            public const nint map_rotation = 0x8; // float32
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class inv_image_light_fill_t {
            public const nint color = 0x0; // Vector
            public const nint angle = 0xC; // QAngle
            public const nint brightness = 0x18; // float32
        }
        // Parent: None
        // Field count: 5
        public static class CInterpolatedValue {
            public const nint m_flStartTime = 0x0; // float32
            public const nint m_flEndTime = 0x4; // float32
            public const nint m_flStartValue = 0x8; // float32
            public const nint m_flEndValue = 0xC; // float32
            public const nint m_nInterpType = 0x10; // int32
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class inv_image_item_t {
            public const nint position = 0x0; // Vector
            public const nint angle = 0xC; // QAngle
            public const nint pose_sequence = 0x18; // CUtlString
        }
        // Parent: None
        // Field count: 4
        public static class C_Chicken_GraphController {
            public const nint m_paramActivity = 0x268; // CAnimGraphParamRef<char*>
            public const nint m_paramEndActivityImmediately = 0x290; // CAnimGraphParamRef<bool>
            public const nint m_paramSnapToSquatting = 0x2B0; // CAnimGraphParamRef<bool>
            public const nint m_sActivityFinished = 0x2D0; // CAnimGraphTagRef
        }
        // Parent: None
        // Field count: 2
        public static class TimedEvent {
            public const nint m_TimeBetweenEvents = 0x0; // float32
            public const nint m_fNextEvent = 0x4; // float32
        }
        // Parent: None
        // Field count: 13
        public static class CFlashlightEffect {
            public const nint m_bIsOn = 0x10; // bool
            public const nint m_bMuzzleFlashEnabled = 0x20; // bool
            public const nint m_flMuzzleFlashBrightness = 0x24; // float32
            public const nint m_quatMuzzleFlashOrientation = 0x30; // Quaternion
            public const nint m_vecMuzzleFlashOrigin = 0x40; // Vector
            public const nint m_flFov = 0x4C; // float32
            public const nint m_flFarZ = 0x50; // float32
            public const nint m_flLinearAtten = 0x54; // float32
            public const nint m_bCastsShadows = 0x58; // bool
            public const nint m_flCurrentPullBackDist = 0x5C; // float32
            public const nint m_FlashlightTexture = 0x60; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_MuzzleFlashTexture = 0x68; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_textureName = 0x70; // char[64]
        }
        // Parent: None
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class inv_image_camera_t {
            public const nint angle = 0x0; // QAngle
            public const nint fov = 0xC; // float32
            public const nint znear = 0x10; // float32
            public const nint zfar = 0x14; // float32
            public const nint target = 0x18; // Vector
            public const nint target_nudge = 0x24; // Vector
            public const nint orbit_distance = 0x30; // float32
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
        public static class CInventoryImageData {
            public const nint m_nNodeType = 0x0; // InventoryNodeType_t
            public const nint name = 0x8; // CUtlString
            public const nint inventory_image_data = 0x10; // inv_image_data_t
        }
        // Parent: None
        // Field count: 8
        public static class C_CSGO_PreviewPlayer_GraphController {
            public const nint m_pszCharacterMode = 0x268; // CAnimGraphParamOptionalRef<char*>
            public const nint m_pszTeamPreviewVariant = 0x290; // CAnimGraphParamOptionalRef<char*>
            public const nint m_pszTeamPreviewPosition = 0x2B8; // CAnimGraphParamOptionalRef<char*>
            public const nint m_pszEndOfMatchCelebration = 0x2E0; // CAnimGraphParamOptionalRef<char*>
            public const nint m_nTeamPreviewRandom = 0x308; // CAnimGraphParamOptionalRef<int32>
            public const nint m_pszWeaponState = 0x328; // CAnimGraphParamOptionalRef<char*>
            public const nint m_pszWeaponType = 0x350; // CAnimGraphParamOptionalRef<char*>
            public const nint m_bCT = 0x378; // CAnimGraphParamOptionalRef<bool>
        }
        // Parent: None
        // Field count: 2
        public static class C_CommandContext {
            public const nint needsprocessing = 0x0; // bool
            public const nint command_number = 0xA0; // int32
        }
        // Parent: None
        // Field count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CompositeMaterialEditorPoint_t {
            public const nint m_ModelName = 0x0; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
            public const nint m_nSequenceIndex = 0xE0; // int32
            public const nint m_flCycle = 0xE4; // float32
            public const nint m_KVModelStateChoices = 0xE8; // KeyValues3
            public const nint m_bEnableChildModel = 0xF8; // bool
            public const nint m_ChildModelName = 0x100; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
            public const nint m_vecCompositeMaterialAssemblyProcedures = 0x1E0; // CUtlVector<CompositeMaterialAssemblyProcedure_t>
            public const nint m_vecCompositeMaterials = 0x1F8; // CUtlVector<CompositeMaterial_t>
        }
        // Parent: None
        // Field count: 0
        public static class CPlayerSprayDecalRenderHelper {
        }
        // Parent: None
        // Field count: 13
        public static class C_IronSightController {
            public const nint m_bIronSightAvailable = 0x10; // bool
            public const nint m_flIronSightAmount = 0x14; // float32
            public const nint m_flIronSightAmountGained = 0x18; // float32
            public const nint m_flIronSightAmountBiased = 0x1C; // float32
            public const nint m_flIronSightAmount_Interpolated = 0x20; // float32
            public const nint m_flIronSightAmountGained_Interpolated = 0x24; // float32
            public const nint m_flIronSightAmountBiased_Interpolated = 0x28; // float32
            public const nint m_flInterpolationLastUpdated = 0x2C; // float32
            public const nint m_angDeltaAverage = 0x30; // QAngle[8]
            public const nint m_angViewLast = 0x90; // QAngle
            public const nint m_vecDotCoords = 0x9C; // Vector2D
            public const nint m_flFiringInaccuracyExtraWidthMultiplier = 0xA4; // float32
            public const nint m_flSpeedRatio = 0xA8; // float32
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyElementNameFn
        public static class CompMatMutatorCondition_t {
            public const nint m_nMutatorCondition = 0x0; // CompMatPropertyMutatorConditionType_t
            public const nint m_strMutatorConditionContainerName = 0x8; // CUtlString
            public const nint m_strMutatorConditionContainerVarName = 0x10; // CUtlString
            public const nint m_strMutatorConditionContainerVarValue = 0x18; // CUtlString
            public const nint m_bPassWhenTrue = 0x20; // bool
        }
        // Parent: None
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class inv_image_data_t {
            public const nint map = 0x0; // inv_image_map_t
            public const nint item = 0x10; // inv_image_item_t
            public const nint camera = 0x30; // inv_image_camera_t
            public const nint lightsun = 0x64; // inv_image_light_sun_t
            public const nint lightfill = 0x80; // inv_image_light_fill_t
            public const nint light0 = 0x9C; // inv_image_light_barn_t
            public const nint light1 = 0xBC; // inv_image_light_barn_t
        }
        // Parent: None
        // Field count: 29
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyElementNameFn
        public static class CompMatPropertyMutator_t {
            public const nint m_bEnabled = 0x0; // bool
            public const nint m_nMutatorCommandType = 0x4; // CompMatPropertyMutatorType_t
            public const nint m_strInitWith_Container = 0x8; // CUtlString
            public const nint m_strCopyProperty_InputContainerSrc = 0x10; // CUtlString
            public const nint m_strCopyProperty_InputContainerProperty = 0x18; // CUtlString
            public const nint m_strCopyProperty_TargetProperty = 0x20; // CUtlString
            public const nint m_strRandomRollInputVars_SeedInputVar = 0x28; // CUtlString
            public const nint m_vecRandomRollInputVars_InputVarsToRoll = 0x30; // CUtlVector<CUtlString>
            public const nint m_strCopyMatchingKeys_InputContainerSrc = 0x48; // CUtlString
            public const nint m_strCopyKeysWithSuffix_InputContainerSrc = 0x50; // CUtlString
            public const nint m_strCopyKeysWithSuffix_FindSuffix = 0x58; // CUtlString
            public const nint m_strCopyKeysWithSuffix_ReplaceSuffix = 0x60; // CUtlString
            public const nint m_nSetValue_Value = 0x68; // CompositeMaterialInputLooseVariable_t
            public const nint m_strGenerateTexture_TargetParam = 0x2F0; // CUtlString
            public const nint m_strGenerateTexture_InitialContainer = 0x2F8; // CUtlString
            public const nint m_nResolution = 0x300; // int32
            public const nint m_bIsScratchTarget = 0x304; // bool
            public const nint m_strCompressionFormat = 0x308; // CUtlString
            public const nint m_bSplatDebugInfo = 0x310; // bool
            public const nint m_bCaptureInRenderDoc = 0x311; // bool
            public const nint m_vecTexGenInstructions = 0x318; // CUtlVector<CompMatPropertyMutator_t>
            public const nint m_vecConditionalMutators = 0x330; // CUtlVector<CompMatPropertyMutator_t>
            public const nint m_strPopInputQueue_Container = 0x348; // CUtlString
            public const nint m_strDrawText_InputContainerSrc = 0x350; // CUtlString
            public const nint m_strDrawText_InputContainerProperty = 0x358; // CUtlString
            public const nint m_vecDrawText_Position = 0x360; // Vector2D
            public const nint m_colDrawText_Color = 0x368; // Color
            public const nint m_strDrawText_Font = 0x370; // CUtlString
            public const nint m_vecConditions = 0x378; // CUtlVector<CompMatMutatorCondition_t>
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CCompositeMaterialEditorDoc {
            public const nint m_nVersion = 0x8; // int32
            public const nint m_Points = 0x10; // CUtlVector<CompositeMaterialEditorPoint_t>
            public const nint m_KVthumbnail = 0x28; // KeyValues3
        }
        // Parent: None
        // Field count: 13
        public static class CClientAlphaProperty {
            public const nint m_nRenderFX = 0x10; // uint8
            public const nint m_nRenderMode = 0x11; // uint8
            public const nint m_bAlphaOverride = 0x0; // bitfield:1
            public const nint m_bShadowAlphaOverride = 0x0; // bitfield:1
            public const nint m_nReserved = 0x0; // bitfield:6
            public const nint m_nAlpha = 0x13; // uint8
            public const nint m_nDesyncOffset = 0x14; // uint16
            public const nint m_nReserved2 = 0x16; // uint16
            public const nint m_nDistFadeStart = 0x18; // uint16
            public const nint m_nDistFadeEnd = 0x1A; // uint16
            public const nint m_flFadeScale = 0x1C; // float32
            public const nint m_flRenderFxStartTime = 0x20; // GameTime_t
            public const nint m_flRenderFxDuration = 0x24; // float32
        }
        // Parent: None
        // Field count: 43
        public static class CGlobalLightBase {
            public const nint m_bSpotLight = 0x10; // bool
            public const nint m_SpotLightOrigin = 0x14; // Vector
            public const nint m_SpotLightAngles = 0x20; // QAngle
            public const nint m_ShadowDirection = 0x2C; // Vector
            public const nint m_AmbientDirection = 0x38; // Vector
            public const nint m_SpecularDirection = 0x44; // Vector
            public const nint m_InspectorSpecularDirection = 0x50; // Vector
            public const nint m_flSpecularPower = 0x5C; // float32
            public const nint m_flSpecularIndependence = 0x60; // float32
            public const nint m_SpecularColor = 0x64; // Color
            public const nint m_bStartDisabled = 0x68; // bool
            public const nint m_bEnabled = 0x69; // bool
            public const nint m_LightColor = 0x6A; // Color
            public const nint m_AmbientColor1 = 0x6E; // Color
            public const nint m_AmbientColor2 = 0x72; // Color
            public const nint m_AmbientColor3 = 0x76; // Color
            public const nint m_flSunDistance = 0x7C; // float32
            public const nint m_flFOV = 0x80; // float32
            public const nint m_flNearZ = 0x84; // float32
            public const nint m_flFarZ = 0x88; // float32
            public const nint m_bEnableShadows = 0x8C; // bool
            public const nint m_bOldEnableShadows = 0x8D; // bool
            public const nint m_bBackgroundClearNotRequired = 0x8E; // bool
            public const nint m_flCloudScale = 0x90; // float32
            public const nint m_flCloud1Speed = 0x94; // float32
            public const nint m_flCloud1Direction = 0x98; // float32
            public const nint m_flCloud2Speed = 0x9C; // float32
            public const nint m_flCloud2Direction = 0xA0; // float32
            public const nint m_flAmbientScale1 = 0xB0; // float32
            public const nint m_flAmbientScale2 = 0xB4; // float32
            public const nint m_flGroundScale = 0xB8; // float32
            public const nint m_flLightScale = 0xBC; // float32
            public const nint m_flFoWDarkness = 0xC0; // float32
            public const nint m_bEnableSeparateSkyboxFog = 0xC4; // bool
            public const nint m_vFowColor = 0xC8; // Vector
            public const nint m_ViewOrigin = 0xD4; // Vector
            public const nint m_ViewAngles = 0xE0; // QAngle
            public const nint m_flViewFoV = 0xEC; // float32
            public const nint m_WorldPoints = 0xF0; // Vector[8]
            public const nint m_vFogOffsetLayer0 = 0x4A8; // Vector2D
            public const nint m_vFogOffsetLayer1 = 0x4B0; // Vector2D
            public const nint m_hEnvWind = 0x4B8; // CHandle<C_BaseEntity>
            public const nint m_hEnvSky = 0x4BC; // CHandle<C_BaseEntity>
        }
        // Parent: None
        // Field count: 0
        public static class IClientAlphaProperty {
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class inv_image_light_sun_t {
            public const nint color = 0x0; // Vector
            public const nint angle = 0xC; // QAngle
            public const nint brightness = 0x18; // float32
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyElementNameFn
        public static class CompositeMaterialMatchFilter_t {
            public const nint m_nCompositeMaterialMatchFilterType = 0x0; // CompositeMaterialMatchFilterType_t
            public const nint m_strMatchFilter = 0x8; // CUtlString
            public const nint m_strMatchValue = 0x10; // CUtlString
            public const nint m_bPassWhenTrue = 0x18; // bool
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MPropertyElementNameFn
        public static class CompositeMaterial_t {
            public const nint m_TargetKVs = 0x8; // KeyValues3
            public const nint m_PreGenerationKVs = 0x18; // KeyValues3
            public const nint m_FinalKVs = 0x58; // KeyValues3
            public const nint m_vecGeneratedTextures = 0x80; // CUtlVector<GeneratedTextureHandle_t>
        }
    }
}
