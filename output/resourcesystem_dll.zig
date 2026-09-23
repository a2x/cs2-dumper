// Generated using https://github.com/a2x/cs2-dumper
// 2026-09-23 13:05:49.580295900 UTC

pub const cs2_dumper = struct {
    pub const schemas = struct {
        // Module: resourcesystem.dll
        // Class count: 62
        // Enum count: 5
        pub const resourcesystem_dll = struct {
            // Alignment: 4
            // Member count: 4
            pub const NoiseStreamModifier_t = enum(u32) {
                NOISE_STREAM_MODIFIER_NONE = 0x0,
                NOISE_STREAM_MODIFIER_LINES = 0x1,
                NOISE_STREAM_MODIFIER_CLUMPS = 0x2,
                NOISE_STREAM_MODIFIER_RINGS = 0x3
            };
            // Alignment: 4
            // Member count: 6
            pub const NoiseStreamTurbulence_t = enum(u32) {
                NOISE_STREAM_TURB_NONE = 0x0,
                NOISE_STREAM_TURB_HIGHLIGHT = 0x1,
                NOISE_STREAM_TURB_FEEDBACK = 0x2,
                NOISE_STREAM_TURB_LOOPY = 0x3,
                NOISE_STREAM_TURB_CONTRAST = 0x4,
                NOISE_STREAM_TURB_ALTERNATE = 0x5
            };
            // Alignment: 4
            // Member count: 5
            pub const NoiseStreamType_t = enum(u32) {
                NOISE_STREAM_TYPE_PERLIN = 0x0,
                NOISE_STREAM_TYPE_SIMPLEX = 0x1,
                NOISE_STREAM_TYPE_WORLEY = 0x2,
                NOISE_STREAM_TYPE_CURL = 0x3,
                NOISE_STREAM_TYPE_NONE = 0x4
            };
            // Alignment: 1
            // Member count: 9
            pub const FuseVariableType_t = enum(u8) {
                INVALID = 0x0,
                BOOL = 0x1,
                INT8 = 0x2,
                INT16 = 0x3,
                INT32 = 0x4,
                UINT8 = 0x5,
                UINT16 = 0x6,
                UINT32 = 0x7,
                FLOAT32 = 0x8
            };
            // Alignment: 1
            // Member count: 2
            pub const FuseVariableAccess_t = enum(u8) {
                WRITABLE = 0x0,
                READ_ONLY = 0x1
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub const InfoForResourceTypeCResponseRulesList = struct {
            };
            // Parent: None
            // Field count: 2
            pub const AABBWS_t = struct {
                pub const m_vMinBounds: usize = 0x0; // VectorWS
                pub const m_vMaxBounds: usize = 0xC; // VectorWS
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub const InfoForResourceTypeCDotaItemDefinitionResource = struct {
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub const InfoForResourceTypeCMorphSetData = struct {
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub const InfoForResourceTypeCVSoundStackScriptList = struct {
            };
            // Parent: None
            // Field count: 2
            pub const PackedAABB_t = struct {
                pub const m_nPackedMin: usize = 0x0; // uint32
                pub const m_nPackedMax: usize = 0x4; // uint32
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub const InfoForResourceTypeCVPhysXSurfacePropertiesList = struct {
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub const InfoForResourceTypeManifestTestResource_t = struct {
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const ConstantInfo_t = struct {
                pub const m_name: usize = 0x0; // CUtlString
                pub const m_nameToken: usize = 0x8; // CUtlStringToken
                pub const m_flValue: usize = 0xC; // float32
            };
            // Parent: None
            // Field count: 1
            pub const FuseFunctionIndex_t = struct {
                pub const m_Value: usize = 0x0; // uint16
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub const InfoForResourceTypeCGcExportableExternalData = struct {
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub const InfoForResourceTypeIAnimGraphModelBinding = struct {
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub const InfoForResourceTypeCJavaScriptResource = struct {
            };
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CFuseSymbolTable = struct {
                pub const m_constants: usize = 0x0; // CUtlVector<ConstantInfo_t>
                pub const m_variables: usize = 0x18; // CUtlVector<VariableInfo_t>
                pub const m_functions: usize = 0x30; // CUtlVector<FunctionInfo_t>
                pub const m_constantMap: usize = 0x48; // CUtlHashtable<CUtlStringToken,int32>
                pub const m_variableMap: usize = 0x68; // CUtlHashtable<CUtlStringToken,int32>
                pub const m_functionMap: usize = 0x88; // CUtlHashtable<CUtlStringToken,int32>
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub const InfoForResourceTypeCRenderMesh = struct {
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub const InfoForResourceTypeCVoxelVisibility = struct {
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub const InfoForResourceTypeISmartProp = struct {
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub const InfoForResourceTypeCPhysAggregateData = struct {
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub const InfoForResourceTypeCNmClip = struct {
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub const InfoForResourceTypeWorld_t = struct {
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub const InfoForResourceTypeProceduralTestResource_t = struct {
            };
            // Parent: None
            // Field count: 2
            pub const AABB_t = struct {
                pub const m_vMinBounds: usize = 0x0; // Vector
                pub const m_vMaxBounds: usize = 0xC; // Vector
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub const InfoForResourceTypeCPostProcessingResource = struct {
            };
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const VariableInfo_t = struct {
                pub const m_name: usize = 0x0; // CUtlString
                pub const m_nameToken: usize = 0x8; // CUtlStringToken
                pub const m_nIndex: usize = 0xC; // FuseVariableIndex_t
                pub const m_nNumComponents: usize = 0xE; // uint8
                pub const m_eVarType: usize = 0xF; // FuseVariableType_t
                pub const m_eAccess: usize = 0x10; // FuseVariableAccess_t
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub const InfoForResourceTypeIParticleSnapshot = struct {
            };
            // Parent: None
            // Field count: 4
            pub const FourQuaternions = struct {
                pub const x: usize = 0x0; // fltx4
                pub const y: usize = 0x10; // fltx4
                pub const z: usize = 0x20; // fltx4
                pub const w: usize = 0x30; // fltx4
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub const InfoForResourceTypeCPanoramaLayout = struct {
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub const InfoForResourceTypeCTypeScriptResource = struct {
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub const InfoForResourceTypeCChoreoSceneResource = struct {
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub const InfoForResourceTypeCNmSkeleton = struct {
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub const InfoForResourceTypeCTestResourceData = struct {
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub const InfoForResourceTypeCAnimationGroup = struct {
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub const InfoForResourceTypeCVSoundEventScriptList = struct {
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub const InfoForResourceTypeCVoiceContainerBase = struct {
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub const InfoForResourceTypeCPanoramaStyle = struct {
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub const InfoForResourceTypeCWorldNode = struct {
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub const InfoForResourceTypeCSurfaceGraph = struct {
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub const InfoForResourceTypeCCSGOEconItem = struct {
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub const InfoForResourceTypeCNmGraphDefinition = struct {
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CFuseProgram = struct {
                pub const m_programBuffer: usize = 0x0; // CUtlVector<uint8>
                pub const m_variablesRead: usize = 0x18; // CUtlVector<FuseVariableIndex_t>
                pub const m_variablesWritten: usize = 0x30; // CUtlVector<FuseVariableIndex_t>
                pub const m_nMaxTempVarsUsed: usize = 0x48; // int32
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub const InfoForResourceTypeCCompositeMaterialKit = struct {
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub const InfoForResourceTypeCVMixListResource = struct {
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub const InfoForResourceTypeCAnimData = struct {
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub const InfoForResourceTypeIMaterial2 = struct {
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub const InfoForResourceTypeCVDSPResource = struct {
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub const InfoForResourceTypeIVectorGraphic = struct {
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub const InfoForResourceTypeCPanoramaDynamicImages = struct {
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub const InfoForResourceTypeIPulseGraphDef = struct {
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub const InfoForResourceTypeCVDataItemDefs = struct {
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const FunctionInfo_t = struct {
                pub const m_name: usize = 0x8; // CUtlString
                pub const m_nameToken: usize = 0x10; // CUtlStringToken
                pub const m_nParamCount: usize = 0x14; // int32
                pub const m_nIndex: usize = 0x18; // FuseFunctionIndex_t
                pub const m_bIsPure: usize = 0x1A; // bool
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub const InfoForResourceTypeCVDataResource = struct {
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const NoiseOscillatorDef_t = struct {
                pub const m_flPhase: usize = 0x0; // float32
                pub const m_flFrequency: usize = 0x4; // float32
                pub const m_flAmplitude: usize = 0x8; // float32
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub const InfoForResourceTypeCModel = struct {
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub const InfoForResourceTypeCDOTANovelsList = struct {
            };
            // Parent: None
            // Field count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const NoiseStreamDef_t = struct {
                pub const m_nType: usize = 0x0; // NoiseStreamType_t
                pub const m_nModifier: usize = 0x4; // NoiseStreamModifier_t
                pub const m_nTurbulence: usize = 0x8; // NoiseStreamTurbulence_t
                pub const m_flOutputMin: usize = 0xC; // float32
                pub const m_flOutputMax: usize = 0x10; // float32
                pub const m_flScale: usize = 0x14; // float32
                pub const m_vOffsetRate: usize = 0x18; // Vector
                pub const m_flOffset: usize = 0x24; // float32
                pub const m_nOctaves: usize = 0x28; // int32
                pub const m_flTurbulenceScale: usize = 0x2C; // float32
                pub const m_flTurbulenceMix: usize = 0x30; // float32
                pub const m_Oscillators: usize = 0x38; // CUtlVector<NoiseOscillatorDef_t>
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub const InfoForResourceTypeCTextureBase = struct {
            };
            // Parent: None
            // Field count: 1
            pub const FuseVariableIndex_t = struct {
                pub const m_Value: usize = 0x0; // uint16
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub const InfoForResourceTypeIParticleSystemDefinition = struct {
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub const InfoForResourceTypeCSequenceGroupData = struct {
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const ManifestTestResource_t = struct {
                pub const m_name: usize = 0x0; // CUtlString
                pub const m_child: usize = 0x8; // CStrongHandle<InfoForResourceTypeManifestTestResource_t>
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub const InfoForResourceTypeCEntityLump = struct {
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub const InfoForResourceTypeCDOTAPatchNotesList = struct {
            };
        };
    };
};
