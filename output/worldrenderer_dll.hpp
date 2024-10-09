// Generated using https://github.com/a2x/cs2-dumper
// 2024-10-09 00:40:16.266688100 UTC

#pragma once

#include <cstddef>

namespace cs2_dumper {
    namespace schemas {
        // Module: worldrenderer.dll
        // Class count: 23
        // Enum count: 1
        namespace worldrenderer_dll {
            // Alignment: 4
            // Member count: 15
            enum class ObjectTypeFlags_t : uint32_t {
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
                OBJECT_TYPE_STATIC_CUBE_MAP = 0x8000,
                OBJECT_TYPE_DISABLE_VIS_CULLING = 0x10000,
                OBJECT_TYPE_BAKED_GEOMETRY = 0x20000
            };
            // Parent: None
            // Field count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace SceneObject_t {
                constexpr std::ptrdiff_t m_nObjectID = 0x0; // 
                constexpr std::ptrdiff_t m_vTransform = 0x4; // 
                constexpr std::ptrdiff_t m_flFadeStartDistance = 0x34; // 
                constexpr std::ptrdiff_t m_flFadeEndDistance = 0x38; // 
                constexpr std::ptrdiff_t m_vTintColor = 0x3C; // 
                constexpr std::ptrdiff_t m_skin = 0x50; // 
                constexpr std::ptrdiff_t m_nObjectTypeFlags = 0x58; // 
                constexpr std::ptrdiff_t m_vLightingOrigin = 0x5C; // 
                constexpr std::ptrdiff_t m_nOverlayRenderOrder = 0x68; // 
                constexpr std::ptrdiff_t m_nLODOverride = 0x6A; // 
                constexpr std::ptrdiff_t m_nCubeMapPrecomputedHandshake = 0x6C; // 
                constexpr std::ptrdiff_t m_nLightProbeVolumePrecomputedHandshake = 0x70; // 
                constexpr std::ptrdiff_t m_renderableModel = 0x78; // 
                constexpr std::ptrdiff_t m_renderable = 0x80; // CStrongHandle<InfoForResourceTypeCRenderMesh>
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace AggregateLODSetup_t {
                constexpr std::ptrdiff_t m_vLODOrigin = 0x0; // 
                constexpr std::ptrdiff_t m_fMaxObjectScale = 0xC; // 
                constexpr std::ptrdiff_t m_fSwitchDistances = 0x10; // 
            }
            // Parent: BaseSceneObjectOverride_t
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace ExtraVertexStreamOverride_t {
                constexpr std::ptrdiff_t m_nSubSceneObject = 0x4; // 
                constexpr std::ptrdiff_t m_nDrawCallIndex = 0x8; // 
                constexpr std::ptrdiff_t m_nAdditionalMeshDrawPrimitiveFlags = 0xC; // 
                constexpr std::ptrdiff_t m_extraBufferBinding = 0x10; // 
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace ClutterTile_t {
                constexpr std::ptrdiff_t m_nFirstInstance = 0x0; // 
                constexpr std::ptrdiff_t m_nLastInstance = 0x4; // 
                constexpr std::ptrdiff_t m_BoundsWs = 0x8; // 
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace AggregateSceneObject_t {
                constexpr std::ptrdiff_t m_allFlags = 0x0; // 
                constexpr std::ptrdiff_t m_anyFlags = 0x4; // 
                constexpr std::ptrdiff_t m_nLayer = 0x8; // 
                constexpr std::ptrdiff_t m_aggregateMeshes = 0x10; // 
                constexpr std::ptrdiff_t m_lodSetups = 0x28; // 
                constexpr std::ptrdiff_t m_visClusterMembership = 0x40; // 
                constexpr std::ptrdiff_t m_fragmentTransforms = 0x58; // 
                constexpr std::ptrdiff_t m_renderableModel = 0x70; // 
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace NodeData_t {
                constexpr std::ptrdiff_t m_nParent = 0x0; // 
                constexpr std::ptrdiff_t m_vOrigin = 0x4; // 
                constexpr std::ptrdiff_t m_vMinBounds = 0x10; // 
                constexpr std::ptrdiff_t m_vMaxBounds = 0x1C; // 
                constexpr std::ptrdiff_t m_flMinimumDistance = 0x28; // 
                constexpr std::ptrdiff_t m_ChildNodeIndices = 0x30; // 
                constexpr std::ptrdiff_t m_worldNodePrefix = 0x48; // 
            }
            // Parent: None
            // Field count: 0
            namespace VMapResourceData_t {
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace ClutterSceneObject_t {
                constexpr std::ptrdiff_t m_Bounds = 0x0; // 
                constexpr std::ptrdiff_t m_flags = 0x18; // 
                constexpr std::ptrdiff_t m_nLayer = 0x1C; // 
                constexpr std::ptrdiff_t m_instancePositions = 0x20; // 
                constexpr std::ptrdiff_t m_instanceScales = 0x50; // 
                constexpr std::ptrdiff_t m_instanceTintSrgb = 0x68; // 
                constexpr std::ptrdiff_t m_tiles = 0x80; // 
                constexpr std::ptrdiff_t m_renderableModel = 0x98; // 
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace WorldBuilderParams_t {
                constexpr std::ptrdiff_t m_flMinDrawVolumeSize = 0x0; // 
                constexpr std::ptrdiff_t m_bBuildBakedLighting = 0x4; // 
                constexpr std::ptrdiff_t m_bakedLightingInfo = 0x8; // 
                constexpr std::ptrdiff_t m_nCompileTimestamp = 0x38; // 
                constexpr std::ptrdiff_t m_nCompileFingerprint = 0x40; // 
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace PermEntityLumpData_t {
                constexpr std::ptrdiff_t m_name = 0x8; // 
                constexpr std::ptrdiff_t m_childLumps = 0x10; // CUtlVector<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>>
                constexpr std::ptrdiff_t m_entityKeyValues = 0x28; // CUtlLeanVector<EntityKeyValueData_t>
            }
            // Parent: None
            // Field count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace WorldNode_t {
                constexpr std::ptrdiff_t m_sceneObjects = 0x0; // 
                constexpr std::ptrdiff_t m_infoOverlays = 0x18; // 
                constexpr std::ptrdiff_t m_visClusterMembership = 0x30; // 
                constexpr std::ptrdiff_t m_aggregateSceneObjects = 0x48; // 
                constexpr std::ptrdiff_t m_clutterSceneObjects = 0x60; // 
                constexpr std::ptrdiff_t m_extraVertexStreamOverrides = 0x78; // 
                constexpr std::ptrdiff_t m_materialOverrides = 0x90; // 
                constexpr std::ptrdiff_t m_extraVertexStreams = 0xA8; // 
                constexpr std::ptrdiff_t m_layerNames = 0xC0; // 
                constexpr std::ptrdiff_t m_sceneObjectLayerIndices = 0xD8; // 
                constexpr std::ptrdiff_t m_overlayLayerIndices = 0xF0; // 
                constexpr std::ptrdiff_t m_grassFileName = 0x108; // 
                constexpr std::ptrdiff_t m_nodeLightingInfo = 0x110; // 
                constexpr std::ptrdiff_t m_bHasBakedGeometryFlag = 0x140; // 
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace BaseSceneObjectOverride_t {
                constexpr std::ptrdiff_t m_nSceneObjectIndex = 0x0; // 
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace EntityIOConnectionData_t {
                constexpr std::ptrdiff_t m_outputName = 0x0; // 
                constexpr std::ptrdiff_t m_targetType = 0x8; // 
                constexpr std::ptrdiff_t m_targetName = 0x10; // 
                constexpr std::ptrdiff_t m_inputName = 0x18; // 
                constexpr std::ptrdiff_t m_overrideParam = 0x20; // 
                constexpr std::ptrdiff_t m_flDelay = 0x28; // 
                constexpr std::ptrdiff_t m_nTimesToFire = 0x2C; // 
            }
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace BakedLightingInfo_t {
                constexpr std::ptrdiff_t m_nLightmapVersionNumber = 0x0; // 
                constexpr std::ptrdiff_t m_nLightmapGameVersionNumber = 0x4; // 
                constexpr std::ptrdiff_t m_vLightmapUvScale = 0x8; // 
                constexpr std::ptrdiff_t m_bHasLightmaps = 0x10; // 
                constexpr std::ptrdiff_t m_bBakedShadowsGamma20 = 0x11; // 
                constexpr std::ptrdiff_t m_bCompressionEnabled = 0x12; // 
                constexpr std::ptrdiff_t m_nChartPackIterations = 0x13; // 
                constexpr std::ptrdiff_t m_nVradQuality = 0x14; // 
                constexpr std::ptrdiff_t m_lightMaps = 0x18; // 
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VoxelVisBlockOffset_t {
                constexpr std::ptrdiff_t m_nOffset = 0x0; // 
                constexpr std::ptrdiff_t m_nElementCount = 0x4; // 
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeVMapResourceData_t {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace WorldNodeOnDiskBufferData_t {
                constexpr std::ptrdiff_t m_nElementCount = 0x0; // 
                constexpr std::ptrdiff_t m_nElementSizeInBytes = 0x4; // 
                constexpr std::ptrdiff_t m_inputLayoutFields = 0x8; // 
                constexpr std::ptrdiff_t m_pData = 0x20; // 
            }
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace AggregateMeshInfo_t {
                constexpr std::ptrdiff_t m_nVisClusterMemberOffset = 0x0; // 
                constexpr std::ptrdiff_t m_nVisClusterMemberCount = 0x4; // 
                constexpr std::ptrdiff_t m_bHasTransform = 0x5; // 
                constexpr std::ptrdiff_t m_nDrawCallIndex = 0x6; // 
                constexpr std::ptrdiff_t m_nLODSetupIndex = 0x8; // 
                constexpr std::ptrdiff_t m_nLODGroupMask = 0xA; // 
                constexpr std::ptrdiff_t m_vTintColor = 0xB; // 
                constexpr std::ptrdiff_t m_objectFlags = 0x10; // 
                constexpr std::ptrdiff_t m_nLightProbeVolumePrecomputedHandshake = 0x14; // 
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace World_t {
                constexpr std::ptrdiff_t m_builderParams = 0x0; // 
                constexpr std::ptrdiff_t m_worldNodes = 0x48; // 
                constexpr std::ptrdiff_t m_worldLightingInfo = 0x60; // 
                constexpr std::ptrdiff_t m_entityLumps = 0x90; // CUtlVector<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>>
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace InfoOverlayData_t {
                constexpr std::ptrdiff_t m_transform = 0x0; // 
                constexpr std::ptrdiff_t m_flWidth = 0x30; // 
                constexpr std::ptrdiff_t m_flHeight = 0x34; // 
                constexpr std::ptrdiff_t m_flDepth = 0x38; // 
                constexpr std::ptrdiff_t m_vUVStart = 0x3C; // 
                constexpr std::ptrdiff_t m_vUVEnd = 0x44; // 
                constexpr std::ptrdiff_t m_pMaterial = 0x50; // 
                constexpr std::ptrdiff_t m_nRenderOrder = 0x58; // 
                constexpr std::ptrdiff_t m_vTintColor = 0x5C; // 
                constexpr std::ptrdiff_t m_nSequenceOverride = 0x6C; // 
            }
            // Parent: BaseSceneObjectOverride_t
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace MaterialOverride_t {
                constexpr std::ptrdiff_t m_nSubSceneObject = 0x4; // 
                constexpr std::ptrdiff_t m_nDrawCallIndex = 0x8; // 
                constexpr std::ptrdiff_t m_pMaterial = 0x10; // 
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace EntityKeyValueData_t {
                constexpr std::ptrdiff_t m_connections = 0x8; // CUtlVector<EntityIOConnectionData_t>
                constexpr std::ptrdiff_t m_keyValuesData = 0x20; // 
            }
            // Parent: None
            // Field count: 13
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVoxelVisibility {
                constexpr std::ptrdiff_t m_nBaseClusterCount = 0x40; // 
                constexpr std::ptrdiff_t m_nPVSBytesPerCluster = 0x44; // 
                constexpr std::ptrdiff_t m_vMinBounds = 0x48; // 
                constexpr std::ptrdiff_t m_vMaxBounds = 0x54; // 
                constexpr std::ptrdiff_t m_flGridSize = 0x60; // 
                constexpr std::ptrdiff_t m_nSkyVisibilityCluster = 0x64; // 
                constexpr std::ptrdiff_t m_nSunVisibilityCluster = 0x68; // 
                constexpr std::ptrdiff_t m_NodeBlock = 0x6C; // 
                constexpr std::ptrdiff_t m_RegionBlock = 0x74; // 
                constexpr std::ptrdiff_t m_EnclosedClusterListBlock = 0x7C; // 
                constexpr std::ptrdiff_t m_EnclosedClustersBlock = 0x84; // 
                constexpr std::ptrdiff_t m_MasksBlock = 0x8C; // 
                constexpr std::ptrdiff_t m_nVisBlocks = 0x94; // 
            }
        }
    }
}
