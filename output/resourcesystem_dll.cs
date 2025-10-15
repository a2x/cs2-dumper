// Generated using https://github.com/a2x/cs2-dumper
// 2025-10-14 23:58:25.486779500 UTC

namespace CS2Dumper.Schemas {
    // Module: resourcesystem.dll
    // Class count: 59
    // Enum count: 2
    public static class ResourcesystemDll {
        // Alignment: 1
        // Member count: 9
        public enum FuseVariableType_t : byte {
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
        public enum FuseVariableAccess_t : byte {
            WRITABLE = 0x0,
            READ_ONLY = 0x1
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCNmIKRig {
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCResponseRulesList {
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCDotaItemDefinitionResource {
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCMorphSetData {
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCVSoundStackScriptList {
        }
        // Parent: None
        // Field count: 2
        public static class PackedAABB_t {
            public const nint m_nPackedMin = 0x0; // uint32
            public const nint m_nPackedMax = 0x4; // uint32
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCVPhysXSurfacePropertiesList {
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeManifestTestResource_t {
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class ConstantInfo_t {
            public const nint m_name = 0x0; // CUtlString
            public const nint m_nameToken = 0x8; // CUtlStringToken
            public const nint m_flValue = 0xC; // float32
        }
        // Parent: None
        // Field count: 1
        public static class FuseFunctionIndex_t {
            public const nint m_Value = 0x0; // uint16
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCGcExportableExternalData {
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeIAnimGraphModelBinding {
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCJavaScriptResource {
        }
        // Parent: None
        // Field count: 6
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
        // Field count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCRenderMesh {
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCVoxelVisibility {
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCPhysAggregateData {
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCNmClip {
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeWorld_t {
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeProceduralTestResource_t {
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCChoreoSceneFileList {
        }
        // Parent: None
        // Field count: 2
        public static class AABB_t {
            public const nint m_vMinBounds = 0x0; // Vector
            public const nint m_vMaxBounds = 0xC; // Vector
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCPostProcessingResource {
        }
        // Parent: None
        // Field count: 6
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
        // Field count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeIParticleSnapshot {
        }
        // Parent: None
        // Field count: 4
        public static class FourQuaternions {
            public const nint x = 0x0; // fltx4
            public const nint y = 0x10; // fltx4
            public const nint z = 0x20; // fltx4
            public const nint w = 0x30; // fltx4
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCPanoramaLayout {
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCTypeScriptResource {
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCChoreoSceneResource {
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCNmSkeleton {
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCTestResourceData {
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCAnimationGroup {
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCVSoundEventScriptList {
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCVoiceContainerBase {
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCPanoramaStyle {
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCWorldNode {
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCSurfaceGraph {
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCCSGOEconItem {
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCNmGraphDefinition {
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCSmartProp {
        }
        // Parent: None
        // Field count: 4
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
        // Field count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCCompositeMaterialKit {
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCVMixListResource {
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCAnimData {
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeIMaterial2 {
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeIVectorGraphic {
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCPanoramaDynamicImages {
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeIPulseGraphDef {
        }
        // Parent: None
        // Field count: 5
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
        // Field count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCVDataResource {
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCModel {
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCDOTANovelsList {
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCTextureBase {
        }
        // Parent: None
        // Field count: 1
        public static class FuseVariableIndex_t {
            public const nint m_Value = 0x0; // uint16
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeIParticleSystemDefinition {
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCSequenceGroupData {
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class ManifestTestResource_t {
            public const nint m_name = 0x0; // CUtlString
            public const nint m_child = 0x8; // CStrongHandle<InfoForResourceTypeManifestTestResource_t>
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCEntityLump {
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCDOTAPatchNotesList {
        }
    }
}
