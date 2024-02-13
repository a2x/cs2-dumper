'''
Created using https://github.com/a2x/cs2-dumper
Tue, 13 Feb 2024 02:41:13 +0000
'''

class AggregateLODSetup_t:
    m_vLODOrigin = 0x0 # Vector
    m_fMaxObjectScale = 0xC # float
    m_fSwitchDistances = 0x10 # CUtlVectorFixedGrowable<float>

class AggregateMeshInfo_t:
    m_nVisClusterMemberOffset = 0x0 # uint32_t
    m_nVisClusterMemberCount = 0x4 # uint8_t
    m_bHasTransform = 0x5 # bool
    m_nDrawCallIndex = 0x6 # int16_t
    m_nLODSetupIndex = 0x8 # int16_t
    m_nLODGroupMask = 0xA # uint8_t
    m_vTintColor = 0xB # Color
    m_objectFlags = 0x10 # ObjectTypeFlags_t
    m_nLightProbeVolumePrecomputedHandshake = 0x14 # int32_t

class AggregateSceneObject_t:
    m_allFlags = 0x0 # ObjectTypeFlags_t
    m_anyFlags = 0x4 # ObjectTypeFlags_t
    m_nLayer = 0x8 # int16_t
    m_aggregateMeshes = 0x10 # CUtlVector<AggregateMeshInfo_t>
    m_lodSetups = 0x28 # CUtlVector<AggregateLODSetup_t>
    m_visClusterMembership = 0x40 # CUtlVector<uint16_t>
    m_fragmentTransforms = 0x58 # CUtlVector<matrix3x4_t>
    m_renderableModel = 0x70 # CStrongHandle<InfoForResourceTypeCModel>

class BakedLightingInfo_t:
    m_nLightmapVersionNumber = 0x0 # uint32_t
    m_nLightmapGameVersionNumber = 0x4 # uint32_t
    m_vLightmapUvScale = 0x8 # Vector2D
    m_bHasLightmaps = 0x10 # bool
    m_lightMaps = 0x18 # CUtlVector<CStrongHandle<InfoForResourceTypeCTextureBase>>

class BaseSceneObjectOverride_t:
    m_nSceneObjectIndex = 0x0 # uint32_t

class CEntityComponent:

class CEntityIdentity:
    m_nameStringableIndex = 0x14 # int32_t
    m_name = 0x18 # CUtlSymbolLarge
    m_designerName = 0x20 # CUtlSymbolLarge
    m_flags = 0x30 # uint32_t
    m_worldGroupId = 0x38 # WorldGroupId_t
    m_fDataObjectTypes = 0x3C # uint32_t
    m_PathIndex = 0x40 # ChangeAccessorFieldPathIndex_t
    m_pPrev = 0x58 # CEntityIdentity*
    m_pNext = 0x60 # CEntityIdentity*
    m_pPrevByClass = 0x68 # CEntityIdentity*
    m_pNextByClass = 0x70 # CEntityIdentity*

class CEntityInstance:
    m_iszPrivateVScripts = 0x8 # CUtlSymbolLarge
    m_pEntity = 0x10 # CEntityIdentity*
    m_CScriptComponent = 0x28 # CScriptComponent*
    m_bVisibleinPVS = 0x30 # bool

class CScriptComponent: # CEntityComponent
    m_scriptClassName = 0x30 # CUtlSymbolLarge

class CVoxelVisibility:
    m_nBaseClusterCount = 0x40 # uint32_t
    m_nPVSBytesPerCluster = 0x44 # uint32_t
    m_vMinBounds = 0x48 # Vector
    m_vMaxBounds = 0x54 # Vector
    m_flGridSize = 0x60 # float
    m_nSkyVisibilityCluster = 0x64 # uint32_t
    m_nSunVisibilityCluster = 0x68 # uint32_t
    m_NodeBlock = 0x6C # VoxelVisBlockOffset_t
    m_RegionBlock = 0x74 # VoxelVisBlockOffset_t
    m_EnclosedClusterListBlock = 0x7C # VoxelVisBlockOffset_t
    m_EnclosedClustersBlock = 0x84 # VoxelVisBlockOffset_t
    m_MasksBlock = 0x8C # VoxelVisBlockOffset_t
    m_nVisBlocks = 0x94 # VoxelVisBlockOffset_t

class ClutterSceneObject_t:
    m_Bounds = 0x0 # AABB_t
    m_flags = 0x18 # ObjectTypeFlags_t
    m_nLayer = 0x1C # int16_t
    m_instancePositions = 0x20 # CUtlVector<Vector>
    m_instanceScales = 0x50 # CUtlVector<float>
    m_instanceTintSrgb = 0x68 # CUtlVector<Color>
    m_tiles = 0x80 # CUtlVector<ClutterTile_t>
    m_renderableModel = 0x98 # CStrongHandle<InfoForResourceTypeCModel>

class ClutterTile_t:
    m_nFirstInstance = 0x0 # uint32_t
    m_nLastInstance = 0x4 # uint32_t
    m_BoundsWs = 0x8 # AABB_t

class EntityIOConnectionData_t:
    m_outputName = 0x0 # CUtlString
    m_targetType = 0x8 # uint32_t
    m_targetName = 0x10 # CUtlString
    m_inputName = 0x18 # CUtlString
    m_overrideParam = 0x20 # CUtlString
    m_flDelay = 0x28 # float
    m_nTimesToFire = 0x2C # int32_t

class EntityKeyValueData_t:
    m_connections = 0x8 # CUtlVector<EntityIOConnectionData_t>
    m_keyValuesData = 0x20 # CUtlBinaryBlock

class ExtraVertexStreamOverride_t: # BaseSceneObjectOverride_t
    m_nSubSceneObject = 0x4 # uint32_t
    m_nDrawCallIndex = 0x8 # uint32_t
    m_nAdditionalMeshDrawPrimitiveFlags = 0xC # MeshDrawPrimitiveFlags_t
    m_extraBufferBinding = 0x10 # CRenderBufferBinding

class InfoForResourceTypeVMapResourceData_t:

class InfoOverlayData_t:
    m_transform = 0x0 # matrix3x4_t
    m_flWidth = 0x30 # float
    m_flHeight = 0x34 # float
    m_flDepth = 0x38 # float
    m_vUVStart = 0x3C # Vector2D
    m_vUVEnd = 0x44 # Vector2D
    m_pMaterial = 0x50 # CStrongHandle<InfoForResourceTypeIMaterial2>
    m_nRenderOrder = 0x58 # int32_t
    m_vTintColor = 0x5C # Vector4D
    m_nSequenceOverride = 0x6C # int32_t

class MaterialOverride_t: # BaseSceneObjectOverride_t
    m_nSubSceneObject = 0x4 # uint32_t
    m_nDrawCallIndex = 0x8 # uint32_t
    m_pMaterial = 0x10 # CStrongHandle<InfoForResourceTypeIMaterial2>

class NodeData_t:
    m_nParent = 0x0 # int32_t
    m_vOrigin = 0x4 # Vector
    m_vMinBounds = 0x10 # Vector
    m_vMaxBounds = 0x1C # Vector
    m_flMinimumDistance = 0x28 # float
    m_ChildNodeIndices = 0x30 # CUtlVector<int32_t>
    m_worldNodePrefix = 0x48 # CUtlString

class PermEntityLumpData_t:
    m_name = 0x8 # CUtlString
    m_hammerUniqueId = 0x10 # CUtlString
    m_childLumps = 0x18 # CUtlVector<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>>
    m_entityKeyValues = 0x30 # CUtlLeanVector<EntityKeyValueData_t>

class SceneObject_t:
    m_nObjectID = 0x0 # uint32_t
    m_vTransform = 0x4 # Vector4D[3]
    m_flFadeStartDistance = 0x34 # float
    m_flFadeEndDistance = 0x38 # float
    m_vTintColor = 0x3C # Vector4D
    m_skin = 0x50 # CUtlString
    m_nObjectTypeFlags = 0x58 # ObjectTypeFlags_t
    m_vLightingOrigin = 0x5C # Vector
    m_nOverlayRenderOrder = 0x68 # int16_t
    m_nLODOverride = 0x6A # int16_t
    m_nCubeMapPrecomputedHandshake = 0x6C # int32_t
    m_nLightProbeVolumePrecomputedHandshake = 0x70 # int32_t
    m_renderableModel = 0x78 # CStrongHandle<InfoForResourceTypeCModel>
    m_renderable = 0x80 # CStrongHandle<InfoForResourceTypeCRenderMesh>

class VMapResourceData_t:

class VoxelVisBlockOffset_t:
    m_nOffset = 0x0 # uint32_t
    m_nElementCount = 0x4 # uint32_t

class WorldBuilderParams_t:
    m_flMinDrawVolumeSize = 0x0 # float
    m_bBuildBakedLighting = 0x4 # bool
    m_vLightmapUvScale = 0x8 # Vector2D
    m_nCompileTimestamp = 0x10 # uint64_t
    m_nCompileFingerprint = 0x18 # uint64_t

class WorldNodeOnDiskBufferData_t:
    m_nElementCount = 0x0 # int32_t
    m_nElementSizeInBytes = 0x4 # int32_t
    m_inputLayoutFields = 0x8 # CUtlVector<RenderInputLayoutField_t>
    m_pData = 0x20 # CUtlVector<uint8_t>

class WorldNode_t:
    m_sceneObjects = 0x0 # CUtlVector<SceneObject_t>
    m_infoOverlays = 0x18 # CUtlVector<InfoOverlayData_t>
    m_visClusterMembership = 0x30 # CUtlVector<uint16_t>
    m_aggregateSceneObjects = 0x48 # CUtlVector<AggregateSceneObject_t>
    m_clutterSceneObjects = 0x60 # CUtlVector<ClutterSceneObject_t>
    m_extraVertexStreamOverrides = 0x78 # CUtlVector<ExtraVertexStreamOverride_t>
    m_materialOverrides = 0x90 # CUtlVector<MaterialOverride_t>
    m_extraVertexStreams = 0xA8 # CUtlVector<WorldNodeOnDiskBufferData_t>
    m_layerNames = 0xC0 # CUtlVector<CUtlString>
    m_sceneObjectLayerIndices = 0xD8 # CUtlVector<uint8_t>
    m_overlayLayerIndices = 0xF0 # CUtlVector<uint8_t>
    m_grassFileName = 0x108 # CUtlString
    m_nodeLightingInfo = 0x110 # BakedLightingInfo_t

class World_t:
    m_builderParams = 0x0 # WorldBuilderParams_t
    m_worldNodes = 0x20 # CUtlVector<NodeData_t>
    m_worldLightingInfo = 0x38 # BakedLightingInfo_t
    m_entityLumps = 0x68 # CUtlVector<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>>
