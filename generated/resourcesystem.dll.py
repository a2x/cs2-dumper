'''
Generated using https://github.com/a2x/cs2-dumper
Sat, 23 Mar 2024 05:02:03 +0000
'''

class AABB_t:
    m_vMinBounds = 0x0 # Vector
    m_vMaxBounds = 0xC # Vector

class CFuseProgram:
    m_programBuffer = 0x0 # CUtlVector<uint8_t>
    m_variablesRead = 0x18 # CUtlVector<FuseVariableIndex_t>
    m_variablesWritten = 0x30 # CUtlVector<FuseVariableIndex_t>
    m_nMaxTempVarsUsed = 0x48 # int32_t

class CFuseSymbolTable:
    m_constants = 0x0 # CUtlVector<ConstantInfo_t>
    m_variables = 0x18 # CUtlVector<VariableInfo_t>
    m_functions = 0x30 # CUtlVector<FunctionInfo_t>
    m_constantMap = 0x48 # CUtlHashtable<CUtlStringToken,int32_t>
    m_variableMap = 0x68 # CUtlHashtable<CUtlStringToken,int32_t>
    m_functionMap = 0x88 # CUtlHashtable<CUtlStringToken,int32_t>

class ConstantInfo_t:
    m_name = 0x0 # CUtlString
    m_nameToken = 0x8 # CUtlStringToken
    m_flValue = 0xC # float

class FourQuaternions:
    x = 0x0 # fltx4
    y = 0x10 # fltx4
    z = 0x20 # fltx4
    w = 0x30 # fltx4

class FunctionInfo_t:
    m_name = 0x8 # CUtlString
    m_nameToken = 0x10 # CUtlStringToken
    m_nParamCount = 0x14 # int32_t
    m_nIndex = 0x18 # FuseFunctionIndex_t
    m_bIsPure = 0x1A # bool

class FuseFunctionIndex_t:
    m_Value = 0x0 # uint16_t

class FuseVariableIndex_t:
    m_Value = 0x0 # uint16_t

class InfoForResourceTypeCAnimData:

class InfoForResourceTypeCAnimationGroup:

class InfoForResourceTypeCCSGOEconItem:

class InfoForResourceTypeCChoreoSceneFileData:

class InfoForResourceTypeCCompositeMaterialKit:

class InfoForResourceTypeCDACGameDefsData:

class InfoForResourceTypeCDOTANovelsList:

class InfoForResourceTypeCDOTAPatchNotesList:

class InfoForResourceTypeCDotaItemDefinitionResource:

class InfoForResourceTypeCEntityLump:

class InfoForResourceTypeCGcExportableExternalData:

class InfoForResourceTypeCJavaScriptResource:

class InfoForResourceTypeCModel:

class InfoForResourceTypeCMorphSetData:

class InfoForResourceTypeCNmClip:

class InfoForResourceTypeCNmGraph:

class InfoForResourceTypeCNmGraphDataSet:

class InfoForResourceTypeCNmSkeleton:

class InfoForResourceTypeCPanoramaDynamicImages:

class InfoForResourceTypeCPanoramaLayout:

class InfoForResourceTypeCPanoramaStyle:

class InfoForResourceTypeCPhysAggregateData:

class InfoForResourceTypeCPostProcessingResource:

class InfoForResourceTypeCRenderMesh:

class InfoForResourceTypeCResponseRulesList:

class InfoForResourceTypeCSequenceGroupData:

class InfoForResourceTypeCSmartProp:

class InfoForResourceTypeCTextureBase:

class InfoForResourceTypeCTypeScriptResource:

class InfoForResourceTypeCVDataResource:

class InfoForResourceTypeCVMixListResource:

class InfoForResourceTypeCVPhysXSurfacePropertiesList:

class InfoForResourceTypeCVSoundEventScriptList:

class InfoForResourceTypeCVSoundStackScriptList:

class InfoForResourceTypeCVoiceContainerBase:

class InfoForResourceTypeCVoxelVisibility:

class InfoForResourceTypeCWorldNode:

class InfoForResourceTypeIAnimGraphModelBinding:

class InfoForResourceTypeIMaterial2:

class InfoForResourceTypeIParticleSnapshot:

class InfoForResourceTypeIParticleSystemDefinition:

class InfoForResourceTypeIPulseGraphDef:

class InfoForResourceTypeIVectorGraphic:

class InfoForResourceTypeManifestTestResource_t:

class InfoForResourceTypeProceduralTestResource_t:

class InfoForResourceTypeTestResource_t:

class InfoForResourceTypeWorld_t:

class ManifestTestResource_t:
    m_name = 0x0 # CUtlString
    m_child = 0x8 # CStrongHandle<InfoForResourceTypeManifestTestResource_t>

class PackedAABB_t:
    m_nPackedMin = 0x0 # uint32_t
    m_nPackedMax = 0x4 # uint32_t

class TestResource_t:
    m_name = 0x0 # CUtlString

class VariableInfo_t:
    m_name = 0x0 # CUtlString
    m_nameToken = 0x8 # CUtlStringToken
    m_nIndex = 0xC # FuseVariableIndex_t
    m_nNumComponents = 0xE # uint8_t
    m_eVarType = 0xF # FuseVariableType_t
    m_eAccess = 0x10 # FuseVariableAccess_t
