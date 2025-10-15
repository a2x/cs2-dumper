// Generated using https://github.com/a2x/cs2-dumper
// 2025-10-14 23:58:25.486779500 UTC

#![allow(non_upper_case_globals, non_camel_case_types, non_snake_case, unused)]

pub mod cs2_dumper {
    pub mod schemas {
        // Module: resourcesystem.dll
        // Class count: 59
        // Enum count: 2
        pub mod resourcesystem_dll {
            // Alignment: 1
            // Member count: 9
            #[repr(u8)]
            pub enum FuseVariableType_t {
                INVALID = 0x0,
                BOOL = 0x1,
                INT8 = 0x2,
                INT16 = 0x3,
                INT32 = 0x4,
                UINT8 = 0x5,
                UINT16 = 0x6,
                UINT32 = 0x7,
                FLOAT32 = 0x8
            }
            // Alignment: 1
            // Member count: 2
            #[repr(u8)]
            pub enum FuseVariableAccess_t {
                WRITABLE = 0x0,
                READ_ONLY = 0x1
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeCNmIKRig {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeCResponseRulesList {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeCDotaItemDefinitionResource {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeCMorphSetData {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeCVSoundStackScriptList {
            }
            // Parent: None
            // Field count: 2
            pub mod PackedAABB_t {
                pub const m_nPackedMin: usize = 0x0; // uint32
                pub const m_nPackedMax: usize = 0x4; // uint32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeCVPhysXSurfacePropertiesList {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeManifestTestResource_t {
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod ConstantInfo_t {
                pub const m_name: usize = 0x0; // CUtlString
                pub const m_nameToken: usize = 0x8; // CUtlStringToken
                pub const m_flValue: usize = 0xC; // float32
            }
            // Parent: None
            // Field count: 1
            pub mod FuseFunctionIndex_t {
                pub const m_Value: usize = 0x0; // uint16
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeCGcExportableExternalData {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeIAnimGraphModelBinding {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeCJavaScriptResource {
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CFuseSymbolTable {
                pub const m_constants: usize = 0x0; // CUtlVector<ConstantInfo_t>
                pub const m_variables: usize = 0x18; // CUtlVector<VariableInfo_t>
                pub const m_functions: usize = 0x30; // CUtlVector<FunctionInfo_t>
                pub const m_constantMap: usize = 0x48; // CUtlHashtable<CUtlStringToken,int32>
                pub const m_variableMap: usize = 0x68; // CUtlHashtable<CUtlStringToken,int32>
                pub const m_functionMap: usize = 0x88; // CUtlHashtable<CUtlStringToken,int32>
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeCRenderMesh {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeCVoxelVisibility {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeCPhysAggregateData {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeCNmClip {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeWorld_t {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeProceduralTestResource_t {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeCChoreoSceneFileList {
            }
            // Parent: None
            // Field count: 2
            pub mod AABB_t {
                pub const m_vMinBounds: usize = 0x0; // Vector
                pub const m_vMaxBounds: usize = 0xC; // Vector
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeCPostProcessingResource {
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod VariableInfo_t {
                pub const m_name: usize = 0x0; // CUtlString
                pub const m_nameToken: usize = 0x8; // CUtlStringToken
                pub const m_nIndex: usize = 0xC; // FuseVariableIndex_t
                pub const m_nNumComponents: usize = 0xE; // uint8
                pub const m_eVarType: usize = 0xF; // FuseVariableType_t
                pub const m_eAccess: usize = 0x10; // FuseVariableAccess_t
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeIParticleSnapshot {
            }
            // Parent: None
            // Field count: 4
            pub mod FourQuaternions {
                pub const x: usize = 0x0; // fltx4
                pub const y: usize = 0x10; // fltx4
                pub const z: usize = 0x20; // fltx4
                pub const w: usize = 0x30; // fltx4
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeCPanoramaLayout {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeCTypeScriptResource {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeCChoreoSceneResource {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeCNmSkeleton {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeCTestResourceData {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeCAnimationGroup {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeCVSoundEventScriptList {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeCVoiceContainerBase {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeCPanoramaStyle {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeCWorldNode {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeCSurfaceGraph {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeCCSGOEconItem {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeCNmGraphDefinition {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeCSmartProp {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CFuseProgram {
                pub const m_programBuffer: usize = 0x0; // CUtlVector<uint8>
                pub const m_variablesRead: usize = 0x18; // CUtlVector<FuseVariableIndex_t>
                pub const m_variablesWritten: usize = 0x30; // CUtlVector<FuseVariableIndex_t>
                pub const m_nMaxTempVarsUsed: usize = 0x48; // int32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeCCompositeMaterialKit {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeCVMixListResource {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeCAnimData {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeIMaterial2 {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeIVectorGraphic {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeCPanoramaDynamicImages {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeIPulseGraphDef {
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FunctionInfo_t {
                pub const m_name: usize = 0x8; // CUtlString
                pub const m_nameToken: usize = 0x10; // CUtlStringToken
                pub const m_nParamCount: usize = 0x14; // int32
                pub const m_nIndex: usize = 0x18; // FuseFunctionIndex_t
                pub const m_bIsPure: usize = 0x1A; // bool
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeCVDataResource {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeCModel {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeCDOTANovelsList {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeCTextureBase {
            }
            // Parent: None
            // Field count: 1
            pub mod FuseVariableIndex_t {
                pub const m_Value: usize = 0x0; // uint16
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeIParticleSystemDefinition {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeCSequenceGroupData {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod ManifestTestResource_t {
                pub const m_name: usize = 0x0; // CUtlString
                pub const m_child: usize = 0x8; // CStrongHandle<InfoForResourceTypeManifestTestResource_t>
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeCEntityLump {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeCDOTAPatchNotesList {
            }
        }
    }
}
