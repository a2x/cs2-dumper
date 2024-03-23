/*
 * Generated using https://github.com/a2x/cs2-dumper
 * Sat, 23 Mar 2024 05:02:03 +0000
 */

public static class AABB_t {
    public const nint m_vMinBounds = 0x0; // Vector
    public const nint m_vMaxBounds = 0xC; // Vector
}

public static class CFuseProgram {
    public const nint m_programBuffer = 0x0; // CUtlVector<uint8_t>
    public const nint m_variablesRead = 0x18; // CUtlVector<FuseVariableIndex_t>
    public const nint m_variablesWritten = 0x30; // CUtlVector<FuseVariableIndex_t>
    public const nint m_nMaxTempVarsUsed = 0x48; // int32_t
}

public static class CFuseSymbolTable {
    public const nint m_constants = 0x0; // CUtlVector<ConstantInfo_t>
    public const nint m_variables = 0x18; // CUtlVector<VariableInfo_t>
    public const nint m_functions = 0x30; // CUtlVector<FunctionInfo_t>
    public const nint m_constantMap = 0x48; // CUtlHashtable<CUtlStringToken,int32_t>
    public const nint m_variableMap = 0x68; // CUtlHashtable<CUtlStringToken,int32_t>
    public const nint m_functionMap = 0x88; // CUtlHashtable<CUtlStringToken,int32_t>
}

public static class ConstantInfo_t {
    public const nint m_name = 0x0; // CUtlString
    public const nint m_nameToken = 0x8; // CUtlStringToken
    public const nint m_flValue = 0xC; // float
}

public static class FourQuaternions {
    public const nint x = 0x0; // fltx4
    public const nint y = 0x10; // fltx4
    public const nint z = 0x20; // fltx4
    public const nint w = 0x30; // fltx4
}

public static class FunctionInfo_t {
    public const nint m_name = 0x8; // CUtlString
    public const nint m_nameToken = 0x10; // CUtlStringToken
    public const nint m_nParamCount = 0x14; // int32_t
    public const nint m_nIndex = 0x18; // FuseFunctionIndex_t
    public const nint m_bIsPure = 0x1A; // bool
}

public static class FuseFunctionIndex_t {
    public const nint m_Value = 0x0; // uint16_t
}

public static class FuseVariableIndex_t {
    public const nint m_Value = 0x0; // uint16_t
}

public static class InfoForResourceTypeCAnimData {
}

public static class InfoForResourceTypeCAnimationGroup {
}

public static class InfoForResourceTypeCCSGOEconItem {
}

public static class InfoForResourceTypeCChoreoSceneFileData {
}

public static class InfoForResourceTypeCCompositeMaterialKit {
}

public static class InfoForResourceTypeCDACGameDefsData {
}

public static class InfoForResourceTypeCDOTANovelsList {
}

public static class InfoForResourceTypeCDOTAPatchNotesList {
}

public static class InfoForResourceTypeCDotaItemDefinitionResource {
}

public static class InfoForResourceTypeCEntityLump {
}

public static class InfoForResourceTypeCGcExportableExternalData {
}

public static class InfoForResourceTypeCJavaScriptResource {
}

public static class InfoForResourceTypeCModel {
}

public static class InfoForResourceTypeCMorphSetData {
}

public static class InfoForResourceTypeCNmClip {
}

public static class InfoForResourceTypeCNmGraph {
}

public static class InfoForResourceTypeCNmGraphDataSet {
}

public static class InfoForResourceTypeCNmSkeleton {
}

public static class InfoForResourceTypeCPanoramaDynamicImages {
}

public static class InfoForResourceTypeCPanoramaLayout {
}

public static class InfoForResourceTypeCPanoramaStyle {
}

public static class InfoForResourceTypeCPhysAggregateData {
}

public static class InfoForResourceTypeCPostProcessingResource {
}

public static class InfoForResourceTypeCRenderMesh {
}

public static class InfoForResourceTypeCResponseRulesList {
}

public static class InfoForResourceTypeCSequenceGroupData {
}

public static class InfoForResourceTypeCSmartProp {
}

public static class InfoForResourceTypeCTextureBase {
}

public static class InfoForResourceTypeCTypeScriptResource {
}

public static class InfoForResourceTypeCVDataResource {
}

public static class InfoForResourceTypeCVMixListResource {
}

public static class InfoForResourceTypeCVPhysXSurfacePropertiesList {
}

public static class InfoForResourceTypeCVSoundEventScriptList {
}

public static class InfoForResourceTypeCVSoundStackScriptList {
}

public static class InfoForResourceTypeCVoiceContainerBase {
}

public static class InfoForResourceTypeCVoxelVisibility {
}

public static class InfoForResourceTypeCWorldNode {
}

public static class InfoForResourceTypeIAnimGraphModelBinding {
}

public static class InfoForResourceTypeIMaterial2 {
}

public static class InfoForResourceTypeIParticleSnapshot {
}

public static class InfoForResourceTypeIParticleSystemDefinition {
}

public static class InfoForResourceTypeIPulseGraphDef {
}

public static class InfoForResourceTypeIVectorGraphic {
}

public static class InfoForResourceTypeManifestTestResource_t {
}

public static class InfoForResourceTypeProceduralTestResource_t {
}

public static class InfoForResourceTypeTestResource_t {
}

public static class InfoForResourceTypeWorld_t {
}

public static class ManifestTestResource_t {
    public const nint m_name = 0x0; // CUtlString
    public const nint m_child = 0x8; // CStrongHandle<InfoForResourceTypeManifestTestResource_t>
}

public static class PackedAABB_t {
    public const nint m_nPackedMin = 0x0; // uint32_t
    public const nint m_nPackedMax = 0x4; // uint32_t
}

public static class TestResource_t {
    public const nint m_name = 0x0; // CUtlString
}

public static class VariableInfo_t {
    public const nint m_name = 0x0; // CUtlString
    public const nint m_nameToken = 0x8; // CUtlStringToken
    public const nint m_nIndex = 0xC; // FuseVariableIndex_t
    public const nint m_nNumComponents = 0xE; // uint8_t
    public const nint m_eVarType = 0xF; // FuseVariableType_t
    public const nint m_eAccess = 0x10; // FuseVariableAccess_t
}