/*
 * Generated using https://github.com/a2x/cs2-dumper
 * Sat, 23 Mar 2024 05:02:03 +0000
 */

#![allow(non_snake_case, non_upper_case_globals)]

pub mod AABB_t {
    pub const m_vMinBounds: usize = 0x0; // Vector
    pub const m_vMaxBounds: usize = 0xC; // Vector
}

pub mod CFuseProgram {
    pub const m_programBuffer: usize = 0x0; // CUtlVector<uint8_t>
    pub const m_variablesRead: usize = 0x18; // CUtlVector<FuseVariableIndex_t>
    pub const m_variablesWritten: usize = 0x30; // CUtlVector<FuseVariableIndex_t>
    pub const m_nMaxTempVarsUsed: usize = 0x48; // int32_t
}

pub mod CFuseSymbolTable {
    pub const m_constants: usize = 0x0; // CUtlVector<ConstantInfo_t>
    pub const m_variables: usize = 0x18; // CUtlVector<VariableInfo_t>
    pub const m_functions: usize = 0x30; // CUtlVector<FunctionInfo_t>
    pub const m_constantMap: usize = 0x48; // CUtlHashtable<CUtlStringToken,int32_t>
    pub const m_variableMap: usize = 0x68; // CUtlHashtable<CUtlStringToken,int32_t>
    pub const m_functionMap: usize = 0x88; // CUtlHashtable<CUtlStringToken,int32_t>
}

pub mod ConstantInfo_t {
    pub const m_name: usize = 0x0; // CUtlString
    pub const m_nameToken: usize = 0x8; // CUtlStringToken
    pub const m_flValue: usize = 0xC; // float
}

pub mod FourQuaternions {
    pub const x: usize = 0x0; // fltx4
    pub const y: usize = 0x10; // fltx4
    pub const z: usize = 0x20; // fltx4
    pub const w: usize = 0x30; // fltx4
}

pub mod FunctionInfo_t {
    pub const m_name: usize = 0x8; // CUtlString
    pub const m_nameToken: usize = 0x10; // CUtlStringToken
    pub const m_nParamCount: usize = 0x14; // int32_t
    pub const m_nIndex: usize = 0x18; // FuseFunctionIndex_t
    pub const m_bIsPure: usize = 0x1A; // bool
}

pub mod FuseFunctionIndex_t {
    pub const m_Value: usize = 0x0; // uint16_t
}

pub mod FuseVariableIndex_t {
    pub const m_Value: usize = 0x0; // uint16_t
}

pub mod InfoForResourceTypeCAnimData {
}

pub mod InfoForResourceTypeCAnimationGroup {
}

pub mod InfoForResourceTypeCCSGOEconItem {
}

pub mod InfoForResourceTypeCChoreoSceneFileData {
}

pub mod InfoForResourceTypeCCompositeMaterialKit {
}

pub mod InfoForResourceTypeCDACGameDefsData {
}

pub mod InfoForResourceTypeCDOTANovelsList {
}

pub mod InfoForResourceTypeCDOTAPatchNotesList {
}

pub mod InfoForResourceTypeCDotaItemDefinitionResource {
}

pub mod InfoForResourceTypeCEntityLump {
}

pub mod InfoForResourceTypeCGcExportableExternalData {
}

pub mod InfoForResourceTypeCJavaScriptResource {
}

pub mod InfoForResourceTypeCModel {
}

pub mod InfoForResourceTypeCMorphSetData {
}

pub mod InfoForResourceTypeCNmClip {
}

pub mod InfoForResourceTypeCNmGraph {
}

pub mod InfoForResourceTypeCNmGraphDataSet {
}

pub mod InfoForResourceTypeCNmSkeleton {
}

pub mod InfoForResourceTypeCPanoramaDynamicImages {
}

pub mod InfoForResourceTypeCPanoramaLayout {
}

pub mod InfoForResourceTypeCPanoramaStyle {
}

pub mod InfoForResourceTypeCPhysAggregateData {
}

pub mod InfoForResourceTypeCPostProcessingResource {
}

pub mod InfoForResourceTypeCRenderMesh {
}

pub mod InfoForResourceTypeCResponseRulesList {
}

pub mod InfoForResourceTypeCSequenceGroupData {
}

pub mod InfoForResourceTypeCSmartProp {
}

pub mod InfoForResourceTypeCTextureBase {
}

pub mod InfoForResourceTypeCTypeScriptResource {
}

pub mod InfoForResourceTypeCVDataResource {
}

pub mod InfoForResourceTypeCVMixListResource {
}

pub mod InfoForResourceTypeCVPhysXSurfacePropertiesList {
}

pub mod InfoForResourceTypeCVSoundEventScriptList {
}

pub mod InfoForResourceTypeCVSoundStackScriptList {
}

pub mod InfoForResourceTypeCVoiceContainerBase {
}

pub mod InfoForResourceTypeCVoxelVisibility {
}

pub mod InfoForResourceTypeCWorldNode {
}

pub mod InfoForResourceTypeIAnimGraphModelBinding {
}

pub mod InfoForResourceTypeIMaterial2 {
}

pub mod InfoForResourceTypeIParticleSnapshot {
}

pub mod InfoForResourceTypeIParticleSystemDefinition {
}

pub mod InfoForResourceTypeIPulseGraphDef {
}

pub mod InfoForResourceTypeIVectorGraphic {
}

pub mod InfoForResourceTypeManifestTestResource_t {
}

pub mod InfoForResourceTypeProceduralTestResource_t {
}

pub mod InfoForResourceTypeTestResource_t {
}

pub mod InfoForResourceTypeWorld_t {
}

pub mod ManifestTestResource_t {
    pub const m_name: usize = 0x0; // CUtlString
    pub const m_child: usize = 0x8; // CStrongHandle<InfoForResourceTypeManifestTestResource_t>
}

pub mod PackedAABB_t {
    pub const m_nPackedMin: usize = 0x0; // uint32_t
    pub const m_nPackedMax: usize = 0x4; // uint32_t
}

pub mod TestResource_t {
    pub const m_name: usize = 0x0; // CUtlString
}

pub mod VariableInfo_t {
    pub const m_name: usize = 0x0; // CUtlString
    pub const m_nameToken: usize = 0x8; // CUtlStringToken
    pub const m_nIndex: usize = 0xC; // FuseVariableIndex_t
    pub const m_nNumComponents: usize = 0xE; // uint8_t
    pub const m_eVarType: usize = 0xF; // FuseVariableType_t
    pub const m_eAccess: usize = 0x10; // FuseVariableAccess_t
}