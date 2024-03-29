// Generated using https://github.com/a2x/cs2-dumper
// 2024-03-29 21:16:02.890657436 UTC

namespace CS2Dumper.Schemas {
    // Module: libresourcesystem.so
    // Classes count: 54
    // Enums count: 0
    public static class Libresourcesystem {
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class ConstantInfo_t {
            public const nint m_name = 0x0; // CUtlString
            public const nint m_nameToken = 0x8; // CUtlStringToken
            public const nint m_flValue = 0xC; // float32
        }
        // Parent: None
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VariableInfo_t {
            public const nint m_name = 0x0; // CUtlString
            public const nint m_nameToken = 0x8; // CUtlStringToken
            public const nint m_nIndex = 0xC; // FuseVariableIndex_t
            public const nint m_nNumComponents = 0xE; // uint8
            public const nint m_eVarType = 0xF; // FuseVariableType_t
            public const nint m_eAccess = 0x10; // FuseVariableAccess_t
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FunctionInfo_t {
            public const nint m_name = 0x8; // CUtlString
            public const nint m_nameToken = 0x10; // CUtlStringToken
            public const nint m_nParamCount = 0x14; // int32
            public const nint m_nIndex = 0x18; // FuseFunctionIndex_t
            public const nint m_bIsPure = 0x1A; // bool
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CFuseProgram {
            public const nint m_programBuffer = 0x0; // CUtlVector<uint8>
            public const nint m_variablesRead = 0x18; // CUtlVector<FuseVariableIndex_t>
            public const nint m_variablesWritten = 0x30; // CUtlVector<FuseVariableIndex_t>
            public const nint m_nMaxTempVarsUsed = 0x48; // int32
        }
        // Parent: None
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CFuseSymbolTable {
            public const nint m_constants = 0x0; // CUtlVector<ConstantInfo_t>
            public const nint m_variables = 0x18; // CUtlVector<VariableInfo_t>
            public const nint m_functions = 0x30; // CUtlVector<FunctionInfo_t>
            public const nint m_constantMap = 0x48; // CUtlHashtable<CUtlStringToken,int32>
            public const nint m_variableMap = 0x68; // CUtlHashtable<CUtlStringToken,int32>
            public const nint m_functionMap = 0x88; // CUtlHashtable<CUtlStringToken,int32>
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class TestResource_t {
            public const nint m_name = 0x0; // CUtlString
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeTestResource_t {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeProceduralTestResource_t {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeManifestTestResource_t {
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class ManifestTestResource_t {
            public const nint m_name = 0x0; // CUtlString
            public const nint m_child = 0x8; // CStrongHandle<InfoForResourceTypeManifestTestResource_t>
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCVDataResource {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeIPulseGraphDef {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCTypeScriptResource {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCJavaScriptResource {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeIParticleSystemDefinition {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeIParticleSnapshot {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCAnimData {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCAnimationGroup {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCSequenceGroupData {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeIMaterial2 {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCMorphSetData {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCRenderMesh {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCModel {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCTextureBase {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeIVectorGraphic {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCVSoundEventScriptList {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCVSoundStackScriptList {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCVoiceContainerBase {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCVMixListResource {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCPhysAggregateData {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCVPhysXSurfacePropertiesList {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCEntityLump {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCWorldNode {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeWorld_t {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCVoxelVisibility {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCPostProcessingResource {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCPanoramaStyle {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCPanoramaLayout {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCPanoramaDynamicImages {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCDotaItemDefinitionResource {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCDOTAPatchNotesList {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCDOTANovelsList {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeIAnimGraphModelBinding {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCChoreoSceneFileData {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCDACGameDefsData {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCCompositeMaterialKit {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCGcExportableExternalData {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCSmartProp {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCCSGOEconItem {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCResponseRulesList {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCNmSkeleton {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCNmClip {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCNmGraph {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCNmGraphDataSet {
        }
    }
}
