public static class AggregateLODSetup_t {
    public const ulong m_vLODOrigin = 0x0;
    public const ulong m_fMaxObjectScale = 0xc;
    public const ulong m_nLODMask = 0x10;
    public const ulong m_fSwitchDistances = 0x18;
}

public static class AggregateMeshInfo_t {
    public const ulong m_nVisClusterMemberOffset = 0x0;
    public const ulong m_nVisClusterMemberCount = 0x4;
    public const ulong m_bHasTransform = 0x5;
    public const ulong m_nDrawCallIndex = 0x6;
    public const ulong m_nLODSetupIndex = 0x8;
    public const ulong m_nLODGroupMask = 0xa;
    public const ulong m_vTintColor = 0xb;
    public const ulong m_objectFlags = 0x10;
    public const ulong m_nLightProbeVolumePrecomputedHandshake = 0x14;
}

public static class AggregateSceneObject_t {
    public const ulong m_allFlags = 0x0;
    public const ulong m_anyFlags = 0x4;
    public const ulong m_nLayer = 0x8;
    public const ulong m_aggregateMeshes = 0x10;
    public const ulong m_lodSetups = 0x28;
    public const ulong m_visClusterMembership = 0x40;
    public const ulong m_fragmentTransforms = 0x58;
    public const ulong m_renderableModel = 0x70;
}

public static class BakedLightingInfo_t {
    public const ulong m_nLightmapVersionNumber = 0x0;
    public const ulong m_nLightmapGameVersionNumber = 0x4;
    public const ulong m_vLightmapUvScale = 0x8;
    public const ulong m_bHasLightmaps = 0x10;
    public const ulong m_lightMaps = 0x18;
}

public static class BaseSceneObjectOverride_t {
    public const ulong m_nSceneObjectIndex = 0x0;
}

public static class CEntityIdentity {
    public const ulong m_nameStringableIndex = 0x14;
    public const ulong m_name = 0x18;
    public const ulong m_designerName = 0x20;
    public const ulong m_flags = 0x30;
    public const ulong m_worldGroupId = 0x38;
    public const ulong m_fDataObjectTypes = 0x3c;
    public const ulong m_PathIndex = 0x40;
    public const ulong m_pPrev = 0x58;
    public const ulong m_pNext = 0x60;
    public const ulong m_pPrevByClass = 0x68;
    public const ulong m_pNextByClass = 0x70;
}

public static class CEntityInstance {
    public const ulong m_iszPrivateVScripts = 0x8;
    public const ulong m_pEntity = 0x10;
    public const ulong m_CScriptComponent = 0x28;
}

public static class CScriptComponent {
    public const ulong m_scriptClassName = 0x30;
}

public static class CVoxelVisibility {
    public const ulong m_nBaseClusterCount = 0x40;
    public const ulong m_nPVSBytesPerCluster = 0x44;
    public const ulong m_vMinBounds = 0x48;
    public const ulong m_vMaxBounds = 0x54;
    public const ulong m_flGridSize = 0x60;
    public const ulong m_nSkyVisibilityCluster = 0x64;
    public const ulong m_nSunVisibilityCluster = 0x68;
    public const ulong m_NodeBlock = 0x6c;
    public const ulong m_RegionBlock = 0x74;
    public const ulong m_EnclosedClusterListBlock = 0x7c;
    public const ulong m_EnclosedClustersBlock = 0x84;
    public const ulong m_MasksBlock = 0x8c;
    public const ulong m_nVisBlocks = 0x94;
}

public static class ClutterSceneObject_t {
    public const ulong m_Bounds = 0x0;
    public const ulong m_flags = 0x18;
    public const ulong m_nLayer = 0x1c;
    public const ulong m_instancePositions = 0x20;
    public const ulong m_instanceScales = 0x50;
    public const ulong m_instanceTintSrgb = 0x68;
    public const ulong m_tiles = 0x80;
    public const ulong m_renderableModel = 0x98;
}

public static class ClutterTile_t {
    public const ulong m_nFirstInstance = 0x0;
    public const ulong m_nLastInstance = 0x4;
    public const ulong m_BoundsWs = 0x8;
}

public static class EntityIOConnectionData_t {
    public const ulong m_outputName = 0x0;
    public const ulong m_targetType = 0x8;
    public const ulong m_targetName = 0x10;
    public const ulong m_inputName = 0x18;
    public const ulong m_overrideParam = 0x20;
    public const ulong m_flDelay = 0x28;
    public const ulong m_nTimesToFire = 0x2c;
}

public static class EntityKeyValueData_t {
    public const ulong m_connections = 0x8;
    public const ulong m_keyValuesData = 0x20;
}

public static class ExtraVertexStreamOverride_t {
    public const ulong m_nSubSceneObject = 0x4;
    public const ulong m_nDrawCallIndex = 0x8;
    public const ulong m_nAdditionalMeshDrawPrimitiveFlags = 0xc;
    public const ulong m_extraBufferBinding = 0x10;
}

public static class InfoOverlayData_t {
    public const ulong m_transform = 0x0;
    public const ulong m_flWidth = 0x30;
    public const ulong m_flHeight = 0x34;
    public const ulong m_flDepth = 0x38;
    public const ulong m_vUVStart = 0x3c;
    public const ulong m_vUVEnd = 0x44;
    public const ulong m_pMaterial = 0x50;
    public const ulong m_nRenderOrder = 0x58;
    public const ulong m_vTintColor = 0x5c;
    public const ulong m_nSequenceOverride = 0x6c;
}

public static class MaterialOverride_t {
    public const ulong m_nSubSceneObject = 0x4;
    public const ulong m_nDrawCallIndex = 0x8;
    public const ulong m_pMaterial = 0x10;
}

public static class NodeData_t {
    public const ulong m_nParent = 0x0;
    public const ulong m_vOrigin = 0x4;
    public const ulong m_vMinBounds = 0x10;
    public const ulong m_vMaxBounds = 0x1c;
    public const ulong m_flMinimumDistance = 0x28;
    public const ulong m_ChildNodeIndices = 0x30;
    public const ulong m_worldNodePrefix = 0x48;
}

public static class PermEntityLumpData_t {
    public const ulong m_name = 0x8;
    public const ulong m_hammerUniqueId = 0x10;
    public const ulong m_childLumps = 0x18;
    public const ulong m_entityKeyValues = 0x30;
}

public static class SceneObject_t {
    public const ulong m_nObjectID = 0x0;
    public const ulong m_vTransform = 0x4;
    public const ulong m_flFadeStartDistance = 0x34;
    public const ulong m_flFadeEndDistance = 0x38;
    public const ulong m_vTintColor = 0x3c;
    public const ulong m_skin = 0x50;
    public const ulong m_nObjectTypeFlags = 0x58;
    public const ulong m_vLightingOrigin = 0x5c;
    public const ulong m_nLightGroup = 0x68;
    public const ulong m_nOverlayRenderOrder = 0x6c;
    public const ulong m_nLODOverride = 0x6e;
    public const ulong m_nCubeMapPrecomputedHandshake = 0x70;
    public const ulong m_nLightProbeVolumePrecomputedHandshake = 0x74;
    public const ulong m_renderableModel = 0x80;
    public const ulong m_renderable = 0x88;
}

public static class VoxelVisBlockOffset_t {
    public const ulong m_nOffset = 0x0;
    public const ulong m_nElementCount = 0x4;
}

public static class WorldBuilderParams_t {
    public const ulong m_flMinDrawVolumeSize = 0x0;
    public const ulong m_bBuildBakedLighting = 0x4;
    public const ulong m_vLightmapUvScale = 0x8;
    public const ulong m_nCompileTimestamp = 0x10;
    public const ulong m_nCompileFingerprint = 0x18;
}

public static class WorldNodeOnDiskBufferData_t {
    public const ulong m_nElementCount = 0x0;
    public const ulong m_nElementSizeInBytes = 0x4;
    public const ulong m_inputLayoutFields = 0x8;
    public const ulong m_pData = 0x20;
}

public static class WorldNode_t {
    public const ulong m_sceneObjects = 0x0;
    public const ulong m_infoOverlays = 0x18;
    public const ulong m_visClusterMembership = 0x30;
    public const ulong m_aggregateSceneObjects = 0x48;
    public const ulong m_clutterSceneObjects = 0x60;
    public const ulong m_extraVertexStreamOverrides = 0x78;
    public const ulong m_materialOverrides = 0x90;
    public const ulong m_extraVertexStreams = 0xa8;
    public const ulong m_layerNames = 0xc0;
    public const ulong m_sceneObjectLayerIndices = 0xd8;
    public const ulong m_overlayLayerIndices = 0xf0;
    public const ulong m_grassFileName = 0x108;
    public const ulong m_nodeLightingInfo = 0x110;
}

public static class World_t {
    public const ulong m_builderParams = 0x0;
    public const ulong m_worldNodes = 0x20;
    public const ulong m_worldLightingInfo = 0x38;
    public const ulong m_entityLumps = 0x68;
}