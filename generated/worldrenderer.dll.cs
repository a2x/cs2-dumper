/*
 * Generated using https://github.com/a2x/cs2-dumper
 * Sat, 23 Mar 2024 05:02:03 +0000
 */

public static class AggregateLODSetup_t {
    public const nint m_vLODOrigin = 0x0; // Vector
    public const nint m_fMaxObjectScale = 0xC; // float
    public const nint m_fSwitchDistances = 0x10; // CUtlVectorFixedGrowable<float>
}

public static class AggregateMeshInfo_t {
    public const nint m_nVisClusterMemberOffset = 0x0; // uint32_t
    public const nint m_nVisClusterMemberCount = 0x4; // uint8_t
    public const nint m_bHasTransform = 0x5; // bool
    public const nint m_nDrawCallIndex = 0x6; // int16_t
    public const nint m_nLODSetupIndex = 0x8; // int16_t
    public const nint m_nLODGroupMask = 0xA; // uint8_t
    public const nint m_vTintColor = 0xB; // Color
    public const nint m_objectFlags = 0x10; // ObjectTypeFlags_t
    public const nint m_nLightProbeVolumePrecomputedHandshake = 0x14; // int32_t
}

public static class AggregateSceneObject_t {
    public const nint m_allFlags = 0x0; // ObjectTypeFlags_t
    public const nint m_anyFlags = 0x4; // ObjectTypeFlags_t
    public const nint m_nLayer = 0x8; // int16_t
    public const nint m_aggregateMeshes = 0x10; // CUtlVector<AggregateMeshInfo_t>
    public const nint m_lodSetups = 0x28; // CUtlVector<AggregateLODSetup_t>
    public const nint m_visClusterMembership = 0x40; // CUtlVector<uint16_t>
    public const nint m_fragmentTransforms = 0x58; // CUtlVector<matrix3x4_t>
    public const nint m_renderableModel = 0x70; // CStrongHandle<InfoForResourceTypeCModel>
}

public static class BakedLightingInfo_t {
    public const nint m_nLightmapVersionNumber = 0x0; // uint32_t
    public const nint m_nLightmapGameVersionNumber = 0x4; // uint32_t
    public const nint m_vLightmapUvScale = 0x8; // Vector2D
    public const nint m_bHasLightmaps = 0x10; // bool
    public const nint m_lightMaps = 0x18; // CUtlVector<CStrongHandle<InfoForResourceTypeCTextureBase>>
}

public static class BaseSceneObjectOverride_t {
    public const nint m_nSceneObjectIndex = 0x0; // uint32_t
}

public static class CEntityComponent {
}

public static class CEntityIdentity {
    public const nint m_nameStringableIndex = 0x14; // int32_t
    public const nint m_name = 0x18; // CUtlSymbolLarge
    public const nint m_designerName = 0x20; // CUtlSymbolLarge
    public const nint m_flags = 0x30; // uint32_t
    public const nint m_worldGroupId = 0x38; // WorldGroupId_t
    public const nint m_fDataObjectTypes = 0x3C; // uint32_t
    public const nint m_PathIndex = 0x40; // ChangeAccessorFieldPathIndex_t
    public const nint m_pPrev = 0x58; // CEntityIdentity*
    public const nint m_pNext = 0x60; // CEntityIdentity*
    public const nint m_pPrevByClass = 0x68; // CEntityIdentity*
    public const nint m_pNextByClass = 0x70; // CEntityIdentity*
}

public static class CEntityInstance {
    public const nint m_iszPrivateVScripts = 0x8; // CUtlSymbolLarge
    public const nint m_pEntity = 0x10; // CEntityIdentity*
    public const nint m_CScriptComponent = 0x28; // CScriptComponent*
    public const nint m_bVisibleinPVS = 0x30; // bool
}

public static class CScriptComponent { // CEntityComponent
    public const nint m_scriptClassName = 0x30; // CUtlSymbolLarge
}

public static class CVoxelVisibility {
    public const nint m_nBaseClusterCount = 0x40; // uint32_t
    public const nint m_nPVSBytesPerCluster = 0x44; // uint32_t
    public const nint m_vMinBounds = 0x48; // Vector
    public const nint m_vMaxBounds = 0x54; // Vector
    public const nint m_flGridSize = 0x60; // float
    public const nint m_nSkyVisibilityCluster = 0x64; // uint32_t
    public const nint m_nSunVisibilityCluster = 0x68; // uint32_t
    public const nint m_NodeBlock = 0x6C; // VoxelVisBlockOffset_t
    public const nint m_RegionBlock = 0x74; // VoxelVisBlockOffset_t
    public const nint m_EnclosedClusterListBlock = 0x7C; // VoxelVisBlockOffset_t
    public const nint m_EnclosedClustersBlock = 0x84; // VoxelVisBlockOffset_t
    public const nint m_MasksBlock = 0x8C; // VoxelVisBlockOffset_t
    public const nint m_nVisBlocks = 0x94; // VoxelVisBlockOffset_t
}

public static class ClutterSceneObject_t {
    public const nint m_Bounds = 0x0; // AABB_t
    public const nint m_flags = 0x18; // ObjectTypeFlags_t
    public const nint m_nLayer = 0x1C; // int16_t
    public const nint m_instancePositions = 0x20; // CUtlVector<Vector>
    public const nint m_instanceScales = 0x50; // CUtlVector<float>
    public const nint m_instanceTintSrgb = 0x68; // CUtlVector<Color>
    public const nint m_tiles = 0x80; // CUtlVector<ClutterTile_t>
    public const nint m_renderableModel = 0x98; // CStrongHandle<InfoForResourceTypeCModel>
}

public static class ClutterTile_t {
    public const nint m_nFirstInstance = 0x0; // uint32_t
    public const nint m_nLastInstance = 0x4; // uint32_t
    public const nint m_BoundsWs = 0x8; // AABB_t
}

public static class EntityIOConnectionData_t {
    public const nint m_outputName = 0x0; // CUtlString
    public const nint m_targetType = 0x8; // uint32_t
    public const nint m_targetName = 0x10; // CUtlString
    public const nint m_inputName = 0x18; // CUtlString
    public const nint m_overrideParam = 0x20; // CUtlString
    public const nint m_flDelay = 0x28; // float
    public const nint m_nTimesToFire = 0x2C; // int32_t
}

public static class EntityKeyValueData_t {
    public const nint m_connections = 0x8; // CUtlVector<EntityIOConnectionData_t>
    public const nint m_keyValuesData = 0x20; // CUtlBinaryBlock
}

public static class ExtraVertexStreamOverride_t { // BaseSceneObjectOverride_t
    public const nint m_nSubSceneObject = 0x4; // uint32_t
    public const nint m_nDrawCallIndex = 0x8; // uint32_t
    public const nint m_nAdditionalMeshDrawPrimitiveFlags = 0xC; // MeshDrawPrimitiveFlags_t
    public const nint m_extraBufferBinding = 0x10; // CRenderBufferBinding
}

public static class InfoForResourceTypeVMapResourceData_t {
}

public static class InfoOverlayData_t {
    public const nint m_transform = 0x0; // matrix3x4_t
    public const nint m_flWidth = 0x30; // float
    public const nint m_flHeight = 0x34; // float
    public const nint m_flDepth = 0x38; // float
    public const nint m_vUVStart = 0x3C; // Vector2D
    public const nint m_vUVEnd = 0x44; // Vector2D
    public const nint m_pMaterial = 0x50; // CStrongHandle<InfoForResourceTypeIMaterial2>
    public const nint m_nRenderOrder = 0x58; // int32_t
    public const nint m_vTintColor = 0x5C; // Vector4D
    public const nint m_nSequenceOverride = 0x6C; // int32_t
}

public static class MaterialOverride_t { // BaseSceneObjectOverride_t
    public const nint m_nSubSceneObject = 0x4; // uint32_t
    public const nint m_nDrawCallIndex = 0x8; // uint32_t
    public const nint m_pMaterial = 0x10; // CStrongHandle<InfoForResourceTypeIMaterial2>
}

public static class NodeData_t {
    public const nint m_nParent = 0x0; // int32_t
    public const nint m_vOrigin = 0x4; // Vector
    public const nint m_vMinBounds = 0x10; // Vector
    public const nint m_vMaxBounds = 0x1C; // Vector
    public const nint m_flMinimumDistance = 0x28; // float
    public const nint m_ChildNodeIndices = 0x30; // CUtlVector<int32_t>
    public const nint m_worldNodePrefix = 0x48; // CUtlString
}

public static class PermEntityLumpData_t {
    public const nint m_name = 0x8; // CUtlString
    public const nint m_hammerUniqueId = 0x10; // CUtlString
    public const nint m_childLumps = 0x18; // CUtlVector<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>>
    public const nint m_entityKeyValues = 0x30; // CUtlLeanVector<EntityKeyValueData_t>
}

public static class SceneObject_t {
    public const nint m_nObjectID = 0x0; // uint32_t
    public const nint m_vTransform = 0x4; // Vector4D[3]
    public const nint m_flFadeStartDistance = 0x34; // float
    public const nint m_flFadeEndDistance = 0x38; // float
    public const nint m_vTintColor = 0x3C; // Vector4D
    public const nint m_skin = 0x50; // CUtlString
    public const nint m_nObjectTypeFlags = 0x58; // ObjectTypeFlags_t
    public const nint m_vLightingOrigin = 0x5C; // Vector
    public const nint m_nOverlayRenderOrder = 0x68; // int16_t
    public const nint m_nLODOverride = 0x6A; // int16_t
    public const nint m_nCubeMapPrecomputedHandshake = 0x6C; // int32_t
    public const nint m_nLightProbeVolumePrecomputedHandshake = 0x70; // int32_t
    public const nint m_renderableModel = 0x78; // CStrongHandle<InfoForResourceTypeCModel>
    public const nint m_renderable = 0x80; // CStrongHandle<InfoForResourceTypeCRenderMesh>
}

public static class VMapResourceData_t {
}

public static class VoxelVisBlockOffset_t {
    public const nint m_nOffset = 0x0; // uint32_t
    public const nint m_nElementCount = 0x4; // uint32_t
}

public static class WorldBuilderParams_t {
    public const nint m_flMinDrawVolumeSize = 0x0; // float
    public const nint m_bBuildBakedLighting = 0x4; // bool
    public const nint m_vLightmapUvScale = 0x8; // Vector2D
    public const nint m_nCompileTimestamp = 0x10; // uint64_t
    public const nint m_nCompileFingerprint = 0x18; // uint64_t
}

public static class WorldNodeOnDiskBufferData_t {
    public const nint m_nElementCount = 0x0; // int32_t
    public const nint m_nElementSizeInBytes = 0x4; // int32_t
    public const nint m_inputLayoutFields = 0x8; // CUtlVector<RenderInputLayoutField_t>
    public const nint m_pData = 0x20; // CUtlVector<uint8_t>
}

public static class WorldNode_t {
    public const nint m_sceneObjects = 0x0; // CUtlVector<SceneObject_t>
    public const nint m_infoOverlays = 0x18; // CUtlVector<InfoOverlayData_t>
    public const nint m_visClusterMembership = 0x30; // CUtlVector<uint16_t>
    public const nint m_aggregateSceneObjects = 0x48; // CUtlVector<AggregateSceneObject_t>
    public const nint m_clutterSceneObjects = 0x60; // CUtlVector<ClutterSceneObject_t>
    public const nint m_extraVertexStreamOverrides = 0x78; // CUtlVector<ExtraVertexStreamOverride_t>
    public const nint m_materialOverrides = 0x90; // CUtlVector<MaterialOverride_t>
    public const nint m_extraVertexStreams = 0xA8; // CUtlVector<WorldNodeOnDiskBufferData_t>
    public const nint m_layerNames = 0xC0; // CUtlVector<CUtlString>
    public const nint m_sceneObjectLayerIndices = 0xD8; // CUtlVector<uint8_t>
    public const nint m_overlayLayerIndices = 0xF0; // CUtlVector<uint8_t>
    public const nint m_grassFileName = 0x108; // CUtlString
    public const nint m_nodeLightingInfo = 0x110; // BakedLightingInfo_t
}

public static class World_t {
    public const nint m_builderParams = 0x0; // WorldBuilderParams_t
    public const nint m_worldNodes = 0x20; // CUtlVector<NodeData_t>
    public const nint m_worldLightingInfo = 0x38; // BakedLightingInfo_t
    public const nint m_entityLumps = 0x68; // CUtlVector<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>>
}