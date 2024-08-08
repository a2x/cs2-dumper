// Generated using https://github.com/a2x/cs2-dumper
// 2024-08-08 22:44:32.016601800 UTC

namespace CS2Dumper.Schemas {
    // Module: worldrenderer.dll
    // Classes count: 23
    // Enums count: 1
    public static class WorldrendererDll {
        // Alignment: 4
        // Member count: 13
        public enum ObjectTypeFlags_t : uint {
            OBJECT_TYPE_NONE = 0x0,
            OBJECT_TYPE_MODEL = 0x8,
            OBJECT_TYPE_BLOCK_LIGHT = 0x10,
            OBJECT_TYPE_NO_SHADOWS = 0x20,
            OBJECT_TYPE_WORLDSPACE_TEXURE_BLEND = 0x40,
            OBJECT_TYPE_DISABLED_IN_LOW_QUALITY = 0x80,
            OBJECT_TYPE_NO_SUN_SHADOWS = 0x100,
            OBJECT_TYPE_RENDER_WITH_DYNAMIC = 0x200,
            OBJECT_TYPE_RENDER_TO_CUBEMAPS = 0x400,
            OBJECT_TYPE_MODEL_HAS_LODS = 0x800,
            OBJECT_TYPE_OVERLAY = 0x2000,
            OBJECT_TYPE_PRECOMPUTED_VISMEMBERS = 0x4000,
            OBJECT_TYPE_STATIC_CUBE_MAP = 0x8000
        }
        // Parent: None
        // Field count: 14
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class SceneObject_t {
            public const nint m_nObjectID = 0x0; // 
            public const nint m_vTransform = 0x4; // 
            public const nint m_flFadeStartDistance = 0x34; // 
            public const nint m_flFadeEndDistance = 0x38; // 
            public const nint m_vTintColor = 0x3C; // 
            public const nint m_skin = 0x50; // 
            public const nint m_nObjectTypeFlags = 0x58; // 
            public const nint m_vLightingOrigin = 0x5C; // 
            public const nint m_nOverlayRenderOrder = 0x68; // 
            public const nint m_nLODOverride = 0x6A; // 
            public const nint m_nCubeMapPrecomputedHandshake = 0x6C; // 
            public const nint m_nLightProbeVolumePrecomputedHandshake = 0x70; // 
            public const nint m_renderableModel = 0x78; // CStrongHandle<InfoForResourceTypeCModel>
            public const nint m_renderable = 0x80; // CStrongHandle<InfoForResourceTypeCRenderMesh>
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class AggregateLODSetup_t {
            public const nint m_vLODOrigin = 0x0; // 
            public const nint m_fMaxObjectScale = 0xC; // 
            public const nint m_fSwitchDistances = 0x10; // 
        }
        // Parent: BaseSceneObjectOverride_t
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class ExtraVertexStreamOverride_t {
            public const nint m_nSubSceneObject = 0x4; // 
            public const nint m_nDrawCallIndex = 0x8; // 
            public const nint m_nAdditionalMeshDrawPrimitiveFlags = 0xC; // 
            public const nint m_extraBufferBinding = 0x10; // 
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class ClutterTile_t {
            public const nint m_nFirstInstance = 0x0; // 
            public const nint m_nLastInstance = 0x4; // 
            public const nint m_BoundsWs = 0x8; // 
        }
        // Parent: None
        // Field count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class AggregateSceneObject_t {
            public const nint m_allFlags = 0x0; // 
            public const nint m_anyFlags = 0x4; // 
            public const nint m_nLayer = 0x8; // 
            public const nint m_aggregateMeshes = 0x10; // CUtlVector<AggregateMeshInfo_t>
            public const nint m_lodSetups = 0x28; // CUtlVector<AggregateLODSetup_t>
            public const nint m_visClusterMembership = 0x40; // 
            public const nint m_fragmentTransforms = 0x58; // 
            public const nint m_renderableModel = 0x70; // CStrongHandle<InfoForResourceTypeCModel>
        }
        // Parent: None
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class NodeData_t {
            public const nint m_nParent = 0x0; // 
            public const nint m_vOrigin = 0x4; // 
            public const nint m_vMinBounds = 0x10; // 
            public const nint m_vMaxBounds = 0x1C; // 
            public const nint m_flMinimumDistance = 0x28; // 
            public const nint m_ChildNodeIndices = 0x30; // 
            public const nint m_worldNodePrefix = 0x48; // 
        }
        // Parent: None
        // Field count: 0
        public static class VMapResourceData_t {
        }
        // Parent: None
        // Field count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class ClutterSceneObject_t {
            public const nint m_Bounds = 0x0; // 
            public const nint m_flags = 0x18; // 
            public const nint m_nLayer = 0x1C; // 
            public const nint m_instancePositions = 0x20; // 
            public const nint m_instanceScales = 0x50; // 
            public const nint m_instanceTintSrgb = 0x68; // 
            public const nint m_tiles = 0x80; // 
            public const nint m_renderableModel = 0x98; // CStrongHandle<InfoForResourceTypeCModel>
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class WorldBuilderParams_t {
            public const nint m_flMinDrawVolumeSize = 0x0; // 
            public const nint m_bBuildBakedLighting = 0x4; // 
            public const nint m_bakedLightingInfo = 0x8; // 
            public const nint m_nCompileTimestamp = 0x38; // 
            public const nint m_nCompileFingerprint = 0x40; // 
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class PermEntityLumpData_t {
            public const nint m_name = 0x8; // 
            public const nint m_childLumps = 0x10; // CUtlVector<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>>
            public const nint m_entityKeyValues = 0x28; // CUtlLeanVector<EntityKeyValueData_t>
        }
        // Parent: None
        // Field count: 13
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class WorldNode_t {
            public const nint m_sceneObjects = 0x0; // 
            public const nint m_infoOverlays = 0x18; // 
            public const nint m_visClusterMembership = 0x30; // 
            public const nint m_aggregateSceneObjects = 0x48; // CUtlVector<AggregateSceneObject_t>
            public const nint m_clutterSceneObjects = 0x60; // CUtlVector<ClutterSceneObject_t>
            public const nint m_extraVertexStreamOverrides = 0x78; // CUtlVector<ExtraVertexStreamOverride_t>
            public const nint m_materialOverrides = 0x90; // CUtlVector<MaterialOverride_t>
            public const nint m_extraVertexStreams = 0xA8; // CUtlVector<WorldNodeOnDiskBufferData_t>
            public const nint m_layerNames = 0xC0; // 
            public const nint m_sceneObjectLayerIndices = 0xD8; // 
            public const nint m_overlayLayerIndices = 0xF0; // 
            public const nint m_grassFileName = 0x108; // 
            public const nint m_nodeLightingInfo = 0x110; // 
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class BaseSceneObjectOverride_t {
            public const nint m_nSceneObjectIndex = 0x0; // 
        }
        // Parent: None
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class EntityIOConnectionData_t {
            public const nint m_outputName = 0x0; // 
            public const nint m_targetType = 0x8; // 
            public const nint m_targetName = 0x10; // 
            public const nint m_inputName = 0x18; // 
            public const nint m_overrideParam = 0x20; // 
            public const nint m_flDelay = 0x28; // 
            public const nint m_nTimesToFire = 0x2C; // 
        }
        // Parent: None
        // Field count: 9
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class BakedLightingInfo_t {
            public const nint m_nLightmapVersionNumber = 0x0; // 
            public const nint m_nLightmapGameVersionNumber = 0x4; // 
            public const nint m_vLightmapUvScale = 0x8; // 
            public const nint m_bHasLightmaps = 0x10; // 
            public const nint m_bBakedShadowsGamma20 = 0x11; // 
            public const nint m_bCompressionEnabled = 0x12; // 
            public const nint m_nChartPackIterations = 0x13; // 
            public const nint m_nVradQuality = 0x14; // 
            public const nint m_lightMaps = 0x18; // 
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VoxelVisBlockOffset_t {
            public const nint m_nOffset = 0x0; // 
            public const nint m_nElementCount = 0x4; // 
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeVMapResourceData_t {
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class WorldNodeOnDiskBufferData_t {
            public const nint m_nElementCount = 0x0; // 
            public const nint m_nElementSizeInBytes = 0x4; // 
            public const nint m_inputLayoutFields = 0x8; // CUtlVector<RenderInputLayoutField_t>
            public const nint m_pData = 0x20; // 
        }
        // Parent: None
        // Field count: 9
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class AggregateMeshInfo_t {
            public const nint m_nVisClusterMemberOffset = 0x0; // 
            public const nint m_nVisClusterMemberCount = 0x4; // 
            public const nint m_bHasTransform = 0x5; // 
            public const nint m_nDrawCallIndex = 0x6; // 
            public const nint m_nLODSetupIndex = 0x8; // 
            public const nint m_nLODGroupMask = 0xA; // 
            public const nint m_vTintColor = 0xB; // 
            public const nint m_objectFlags = 0x10; // 
            public const nint m_nLightProbeVolumePrecomputedHandshake = 0x14; // 
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class World_t {
            public const nint m_builderParams = 0x0; // 
            public const nint m_worldNodes = 0x48; // 
            public const nint m_worldLightingInfo = 0x60; // 
            public const nint m_entityLumps = 0x90; // CUtlVector<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>>
        }
        // Parent: None
        // Field count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class InfoOverlayData_t {
            public const nint m_transform = 0x0; // 
            public const nint m_flWidth = 0x30; // 
            public const nint m_flHeight = 0x34; // 
            public const nint m_flDepth = 0x38; // 
            public const nint m_vUVStart = 0x3C; // 
            public const nint m_vUVEnd = 0x44; // 
            public const nint m_pMaterial = 0x50; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_nRenderOrder = 0x58; // 
            public const nint m_vTintColor = 0x5C; // 
            public const nint m_nSequenceOverride = 0x6C; // 
        }
        // Parent: BaseSceneObjectOverride_t
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class MaterialOverride_t {
            public const nint m_nSubSceneObject = 0x4; // 
            public const nint m_nDrawCallIndex = 0x8; // 
            public const nint m_pMaterial = 0x10; // CStrongHandle<InfoForResourceTypeIMaterial2>
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class EntityKeyValueData_t {
            public const nint m_connections = 0x8; // CUtlVector<EntityIOConnectionData_t>
            public const nint m_keyValuesData = 0x20; // 
        }
        // Parent: None
        // Field count: 13
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVoxelVisibility {
            public const nint m_nBaseClusterCount = 0x40; // 
            public const nint m_nPVSBytesPerCluster = 0x44; // 
            public const nint m_vMinBounds = 0x48; // 
            public const nint m_vMaxBounds = 0x54; // 
            public const nint m_flGridSize = 0x60; // 
            public const nint m_nSkyVisibilityCluster = 0x64; // 
            public const nint m_nSunVisibilityCluster = 0x68; // 
            public const nint m_NodeBlock = 0x6C; // 
            public const nint m_RegionBlock = 0x74; // 
            public const nint m_EnclosedClusterListBlock = 0x7C; // 
            public const nint m_EnclosedClustersBlock = 0x84; // 
            public const nint m_MasksBlock = 0x8C; // 
            public const nint m_nVisBlocks = 0x94; // 
        }
    }
}
