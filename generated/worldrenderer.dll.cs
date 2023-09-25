public static class AggregateLODSetup_t {
    public const nint m_vLODOrigin = 0x0;
    public const nint m_fMaxObjectScale = 0xC;
    public const nint m_nLODMask = 0x10;
    public const nint m_fSwitchDistances = 0x18;
}

public static class AggregateMeshInfo_t {
    public const nint m_nVisClusterMemberOffset = 0x0;
    public const nint m_nVisClusterMemberCount = 0x4;
    public const nint m_bHasTransform = 0x5;
    public const nint m_nDrawCallIndex = 0x6;
    public const nint m_nLODSetupIndex = 0x8;
    public const nint m_nLODGroupMask = 0xA;
    public const nint m_vTintColor = 0xB;
    public const nint m_objectFlags = 0x10;
    public const nint m_nLightProbeVolumePrecomputedHandshake = 0x14;
}

public static class AggregateSceneObject_t {
    public const nint m_allFlags = 0x0;
    public const nint m_anyFlags = 0x4;
    public const nint m_nLayer = 0x8;
    public const nint m_aggregateMeshes = 0x10;
    public const nint m_lodSetups = 0x28;
    public const nint m_visClusterMembership = 0x40;
    public const nint m_fragmentTransforms = 0x58;
    public const nint m_renderableModel = 0x70;
}

public static class BakedLightingInfo_t {
    public const nint m_nLightmapVersionNumber = 0x0;
    public const nint m_nLightmapGameVersionNumber = 0x4;
    public const nint m_vLightmapUvScale = 0x8;
    public const nint m_bHasLightmaps = 0x10;
    public const nint m_lightMaps = 0x18;
}

public static class BaseSceneObjectOverride_t {
    public const nint m_nSceneObjectIndex = 0x0;
}

public static class CEntityIdentity {
    public const nint m_nameStringableIndex = 0x14;
    public const nint m_name = 0x18;
    public const nint m_designerName = 0x20;
    public const nint m_flags = 0x30;
    public const nint m_worldGroupId = 0x38;
    public const nint m_fDataObjectTypes = 0x3C;
    public const nint m_PathIndex = 0x40;
    public const nint m_pPrev = 0x58;
    public const nint m_pNext = 0x60;
    public const nint m_pPrevByClass = 0x68;
    public const nint m_pNextByClass = 0x70;
}

public static class CEntityInstance {
    public const nint m_iszPrivateVScripts = 0x8;
    public const nint m_pEntity = 0x10;
    public const nint m_CScriptComponent = 0x28;
}

public static class CScriptComponent {
    public const nint m_scriptClassName = 0x30;
}

public static class CVoxelVisibility {
    public const nint m_nBaseClusterCount = 0x40;
    public const nint m_nPVSBytesPerCluster = 0x44;
    public const nint m_vMinBounds = 0x48;
    public const nint m_vMaxBounds = 0x54;
    public const nint m_flGridSize = 0x60;
    public const nint m_nSkyVisibilityCluster = 0x64;
    public const nint m_nSunVisibilityCluster = 0x68;
    public const nint m_NodeBlock = 0x6C;
    public const nint m_RegionBlock = 0x74;
    public const nint m_EnclosedClusterListBlock = 0x7C;
    public const nint m_EnclosedClustersBlock = 0x84;
    public const nint m_MasksBlock = 0x8C;
    public const nint m_nVisBlocks = 0x94;
}

public static class ClutterSceneObject_t {
    public const nint m_Bounds = 0x0;
    public const nint m_flags = 0x18;
    public const nint m_nLayer = 0x1C;
    public const nint m_instancePositions = 0x20;
    public const nint m_instanceScales = 0x50;
    public const nint m_instanceTintSrgb = 0x68;
    public const nint m_tiles = 0x80;
    public const nint m_renderableModel = 0x98;
}

public static class ClutterTile_t {
    public const nint m_nFirstInstance = 0x0;
    public const nint m_nLastInstance = 0x4;
    public const nint m_BoundsWs = 0x8;
}

public static class EntityIOConnectionData_t {
    public const nint m_outputName = 0x0;
    public const nint m_targetType = 0x8;
    public const nint m_targetName = 0x10;
    public const nint m_inputName = 0x18;
    public const nint m_overrideParam = 0x20;
    public const nint m_flDelay = 0x28;
    public const nint m_nTimesToFire = 0x2C;
}

public static class EntityKeyValueData_t {
    public const nint m_connections = 0x8;
    public const nint m_keyValuesData = 0x20;
}

public static class ExtraVertexStreamOverride_t {
    public const nint m_nSubSceneObject = 0x4;
    public const nint m_nDrawCallIndex = 0x8;
    public const nint m_nAdditionalMeshDrawPrimitiveFlags = 0xC;
    public const nint m_extraBufferBinding = 0x10;
}

public static class InfoOverlayData_t {
    public const nint m_transform = 0x0;
    public const nint m_flWidth = 0x30;
    public const nint m_flHeight = 0x34;
    public const nint m_flDepth = 0x38;
    public const nint m_vUVStart = 0x3C;
    public const nint m_vUVEnd = 0x44;
    public const nint m_pMaterial = 0x50;
    public const nint m_nRenderOrder = 0x58;
    public const nint m_vTintColor = 0x5C;
    public const nint m_nSequenceOverride = 0x6C;
}

public static class MaterialOverride_t {
    public const nint m_nSubSceneObject = 0x4;
    public const nint m_nDrawCallIndex = 0x8;
    public const nint m_pMaterial = 0x10;
}

public static class NodeData_t {
    public const nint m_nParent = 0x0;
    public const nint m_vOrigin = 0x4;
    public const nint m_vMinBounds = 0x10;
    public const nint m_vMaxBounds = 0x1C;
    public const nint m_flMinimumDistance = 0x28;
    public const nint m_ChildNodeIndices = 0x30;
    public const nint m_worldNodePrefix = 0x48;
}

public static class PermEntityLumpData_t {
    public const nint m_name = 0x8;
    public const nint m_hammerUniqueId = 0x10;
    public const nint m_childLumps = 0x18;
    public const nint m_entityKeyValues = 0x30;
}

public static class SceneObject_t {
    public const nint m_nObjectID = 0x0;
    public const nint m_vTransform = 0x4;
    public const nint m_flFadeStartDistance = 0x34;
    public const nint m_flFadeEndDistance = 0x38;
    public const nint m_vTintColor = 0x3C;
    public const nint m_skin = 0x50;
    public const nint m_nObjectTypeFlags = 0x58;
    public const nint m_vLightingOrigin = 0x5C;
    public const nint m_nLightGroup = 0x68;
    public const nint m_nOverlayRenderOrder = 0x6C;
    public const nint m_nLODOverride = 0x6E;
    public const nint m_nCubeMapPrecomputedHandshake = 0x70;
    public const nint m_nLightProbeVolumePrecomputedHandshake = 0x74;
    public const nint m_renderableModel = 0x80;
    public const nint m_renderable = 0x88;
}

public static class VoxelVisBlockOffset_t {
    public const nint m_nOffset = 0x0;
    public const nint m_nElementCount = 0x4;
}

public static class WorldBuilderParams_t {
    public const nint m_flMinDrawVolumeSize = 0x0;
    public const nint m_bBuildBakedLighting = 0x4;
    public const nint m_vLightmapUvScale = 0x8;
    public const nint m_nCompileTimestamp = 0x10;
    public const nint m_nCompileFingerprint = 0x18;
}

public static class WorldNodeOnDiskBufferData_t {
    public const nint m_nElementCount = 0x0;
    public const nint m_nElementSizeInBytes = 0x4;
    public const nint m_inputLayoutFields = 0x8;
    public const nint m_pData = 0x20;
}

public static class WorldNode_t {
    public const nint m_sceneObjects = 0x0;
    public const nint m_infoOverlays = 0x18;
    public const nint m_visClusterMembership = 0x30;
    public const nint m_aggregateSceneObjects = 0x48;
    public const nint m_clutterSceneObjects = 0x60;
    public const nint m_extraVertexStreamOverrides = 0x78;
    public const nint m_materialOverrides = 0x90;
    public const nint m_extraVertexStreams = 0xA8;
    public const nint m_layerNames = 0xC0;
    public const nint m_sceneObjectLayerIndices = 0xD8;
    public const nint m_overlayLayerIndices = 0xF0;
    public const nint m_grassFileName = 0x108;
    public const nint m_nodeLightingInfo = 0x110;
}

public static class World_t {
    public const nint m_builderParams = 0x0;
    public const nint m_worldNodes = 0x20;
    public const nint m_worldLightingInfo = 0x38;
    public const nint m_entityLumps = 0x68;
}