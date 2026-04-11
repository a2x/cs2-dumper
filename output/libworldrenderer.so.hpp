// Generated using https://github.com/a2x/cs2-dumper
// 2026-04-11 10:20:28.886370999 UTC

#pragma once

#include <cstddef>

namespace cs2_dumper {
    namespace schemas {
        // Module: libworldrenderer.so
        // Classes count: 28
        // Enums count: 0
        namespace libworldrenderer_so {
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // ���x.
            namespace RTProxyInstanceInfo_t {
                constexpr std::ptrdiff_t m_nFlags = 0x0; // RTProxyInstanceFlags_t
                constexpr std::ptrdiff_t m_albedoFormat = 0x1; // VertexAlbedoFormat_t
                constexpr std::ptrdiff_t m_nBLASCount = 0x2; // uint16
                constexpr std::ptrdiff_t m_nBLASIndex = 0x4; // uint32
                constexpr std::ptrdiff_t m_nVertexAlbedoByteOffset = 0x8; // uint32
                constexpr std::ptrdiff_t m_mWorldFromLocal = 0xC; // matrix3x4_t
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // ���x.
            namespace AggregateVertexAlbedoStreamOnDiskData_t {
                constexpr std::ptrdiff_t m_BufferData = 0x0; // CUtlBinaryBlock
            }
            // Parent: None
            // Fields count: 14
            //
            // Metadata:
            // ���x.
            namespace SceneObject_t {
                constexpr std::ptrdiff_t m_nObjectID = 0x0; // uint32
                constexpr std::ptrdiff_t m_vTransform = 0x4; // Vector4D[3]
                constexpr std::ptrdiff_t m_flFadeStartDistance = 0x34; // float32
                constexpr std::ptrdiff_t m_flFadeEndDistance = 0x38; // float32
                constexpr std::ptrdiff_t m_vTintColor = 0x3C; // Vector4D
                constexpr std::ptrdiff_t m_skin = 0x50; // CUtlString
                constexpr std::ptrdiff_t m_nObjectTypeFlags = 0x58; // ObjectTypeFlags_t
                constexpr std::ptrdiff_t m_vLightingOrigin = 0x5C; // Vector
                constexpr std::ptrdiff_t m_nOverlayRenderOrder = 0x68; // int16
                constexpr std::ptrdiff_t m_nLODOverride = 0x6A; // int16
                constexpr std::ptrdiff_t m_nCubeMapPrecomputedHandshake = 0x6C; // int32
                constexpr std::ptrdiff_t m_nLightProbeVolumePrecomputedHandshake = 0x70; // int32
                constexpr std::ptrdiff_t m_renderableModel = 0x78; // CStrongHandle<InfoForResourceTypeCModel>
                constexpr std::ptrdiff_t m_renderable = 0x80; // CStrongHandle<InfoForResourceTypeCRenderMesh>
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            namespace AggregateLODSetup_t {
                constexpr std::ptrdiff_t m_vLODOrigin = 0x0; // Vector
                constexpr std::ptrdiff_t m_fMaxObjectScale = 0xC; // float32
                constexpr std::ptrdiff_t m_fSwitchDistances = 0x10; // CUtlVector<float32>
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace ExtraVertexStreamOverride_t {
                constexpr std::ptrdiff_t m_nSubSceneObject = 0x4; // uint32
                constexpr std::ptrdiff_t m_nDrawCallIndex = 0x8; // uint32
                constexpr std::ptrdiff_t m_nAdditionalMeshDrawPrimitiveFlags = 0xC; // MeshDrawPrimitiveFlags_t
                constexpr std::ptrdiff_t m_extraBufferBinding = 0x10; // CRenderBufferBinding
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            namespace ClutterTile_t {
                constexpr std::ptrdiff_t m_nFirstInstance = 0x0; // uint32
                constexpr std::ptrdiff_t m_nLastInstance = 0x4; // uint32
                constexpr std::ptrdiff_t m_BoundsWs = 0x8; // AABB_t
            }
            // Parent: None
            // Fields count: 10
            //
            // Metadata:
            // ���x.
            namespace AggregateSceneObject_t {
                constexpr std::ptrdiff_t m_allFlags = 0x0; // ObjectTypeFlags_t
                constexpr std::ptrdiff_t m_anyFlags = 0x4; // ObjectTypeFlags_t
                constexpr std::ptrdiff_t m_nLayer = 0x8; // int16
                constexpr std::ptrdiff_t m_instanceStream = 0xA; // int16
                constexpr std::ptrdiff_t m_vertexAlbedoStream = 0xC; // int16
                constexpr std::ptrdiff_t m_aggregateMeshes = 0x10; // CUtlVector<AggregateMeshInfo_t>
                constexpr std::ptrdiff_t m_lodSetups = 0x28; // CUtlVector<AggregateLODSetup_t>
                constexpr std::ptrdiff_t m_visClusterMembership = 0x40; // CUtlVector<uint16>
                constexpr std::ptrdiff_t m_fragmentTransforms = 0x58; // CUtlVector<matrix3x4_t>
                constexpr std::ptrdiff_t m_renderableModel = 0x70; // CStrongHandle<InfoForResourceTypeCModel>
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // ���x.
            namespace NodeData_t {
                constexpr std::ptrdiff_t m_nParent = 0x0; // int32
                constexpr std::ptrdiff_t m_vOrigin = 0x4; // Vector
                constexpr std::ptrdiff_t m_vMinBounds = 0x10; // Vector
                constexpr std::ptrdiff_t m_vMaxBounds = 0x1C; // Vector
                constexpr std::ptrdiff_t m_flMinimumDistance = 0x28; // float32
                constexpr std::ptrdiff_t m_ChildNodeIndices = 0x30; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_worldNodePrefix = 0x48; // CUtlString
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace VMapResourceData_t {
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            namespace AggregateInstanceStreamOnDiskData_t {
                constexpr std::ptrdiff_t m_DecodedSize = 0x0; // uint32
                constexpr std::ptrdiff_t m_BufferData = 0x8; // CUtlBinaryBlock
            }
            // Parent: None
            // Fields count: 9
            //
            // Metadata:
            // ���x.
            namespace RTProxyBLAS_t {
                constexpr std::ptrdiff_t m_nFirstIndex = 0x0; // uint32
                constexpr std::ptrdiff_t m_nIndexCount = 0x4; // uint32
                constexpr std::ptrdiff_t m_nVBByteOffset = 0x8; // uint32
                constexpr std::ptrdiff_t m_nBaseVertex = 0xC; // uint32
                constexpr std::ptrdiff_t m_nVertexCount = 0x10; // uint16
                constexpr std::ptrdiff_t m_albedoFormat = 0x12; // VertexAlbedoFormat_t
                constexpr std::ptrdiff_t m_boundLs = 0x14; // AABB_t
                constexpr std::ptrdiff_t m_vVertexOriginLs = 0x2C; // Vector
                constexpr std::ptrdiff_t m_vVertexExtentLs = 0x38; // Vector
            }
            // Parent: None
            // Fields count: 11
            //
            // Metadata:
            // ���x.
            namespace ClutterSceneObject_t {
                constexpr std::ptrdiff_t m_Bounds = 0x0; // AABB_t
                constexpr std::ptrdiff_t m_flags = 0x18; // ObjectTypeFlags_t
                constexpr std::ptrdiff_t m_nLayer = 0x1C; // int16
                constexpr std::ptrdiff_t m_instancePositions = 0x20; // CUtlVector<Vector>
                constexpr std::ptrdiff_t m_instanceScales = 0x50; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_instanceTintSrgb = 0x68; // CUtlVector<Color>
                constexpr std::ptrdiff_t m_tiles = 0x80; // CUtlVector<ClutterTile_t>
                constexpr std::ptrdiff_t m_renderableModel = 0x98; // CStrongHandle<InfoForResourceTypeCModel>
                constexpr std::ptrdiff_t m_materialGroup = 0xA0; // CUtlStringToken
                constexpr std::ptrdiff_t m_flBeginCullSize = 0xA4; // float32
                constexpr std::ptrdiff_t m_flEndCullSize = 0xA8; // float32
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // ���x.
            namespace WorldBuilderParams_t {
                constexpr std::ptrdiff_t m_flMinDrawVolumeSize = 0x0; // float32
                constexpr std::ptrdiff_t m_bBuildBakedLighting = 0x4; // bool
                constexpr std::ptrdiff_t m_bAggregateInstanceStreams = 0x5; // bool
                constexpr std::ptrdiff_t m_bakedLightingInfo = 0x8; // BakedLightingInfo_t
                constexpr std::ptrdiff_t m_nCompileTimestamp = 0x50; // uint64
                constexpr std::ptrdiff_t m_nCompileFingerprint = 0x58; // uint64
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            namespace PermEntityLumpData_t {
                constexpr std::ptrdiff_t m_name = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_childLumps = 0x10; // CUtlVector<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>>
                constexpr std::ptrdiff_t m_entityKeyValues = 0x28; // CUtlLeanVector<EntityKeyValueData_t>
            }
            // Parent: None
            // Fields count: 15
            //
            // Metadata:
            // ���x.
            namespace WorldNode_t {
                constexpr std::ptrdiff_t m_sceneObjects = 0x0; // CUtlVector<SceneObject_t>
                constexpr std::ptrdiff_t m_visClusterMembership = 0x18; // CUtlVector<uint16>
                constexpr std::ptrdiff_t m_aggregateSceneObjects = 0x30; // CUtlVector<AggregateSceneObject_t>
                constexpr std::ptrdiff_t m_clutterSceneObjects = 0x48; // CUtlVector<ClutterSceneObject_t>
                constexpr std::ptrdiff_t m_rtProxies = 0x60; // CUtlVector<AggregateRTProxySceneObject_t>
                constexpr std::ptrdiff_t m_extraVertexStreamOverrides = 0x78; // CUtlVector<ExtraVertexStreamOverride_t>
                constexpr std::ptrdiff_t m_materialOverrides = 0x90; // CUtlVector<MaterialOverride_t>
                constexpr std::ptrdiff_t m_extraVertexStreams = 0xA8; // CUtlVector<WorldNodeOnDiskBufferData_t>
                constexpr std::ptrdiff_t m_aggregateInstanceStreams = 0xC0; // CUtlVector<AggregateInstanceStreamOnDiskData_t>
                constexpr std::ptrdiff_t m_vertexAlbedoStreams = 0xD8; // CUtlVector<AggregateVertexAlbedoStreamOnDiskData_t>
                constexpr std::ptrdiff_t m_layerNames = 0xF0; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_sceneObjectLayerIndices = 0x108; // CUtlVector<uint8>
                constexpr std::ptrdiff_t m_grassFileName = 0x120; // CUtlString
                constexpr std::ptrdiff_t m_nodeLightingInfo = 0x128; // BakedLightingInfo_t
                constexpr std::ptrdiff_t m_bHasBakedGeometryFlag = 0x170; // bool
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // ���x.
            namespace BaseSceneObjectOverride_t {
                constexpr std::ptrdiff_t m_nSceneObjectIndex = 0x0; // uint32
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // ���x.
            namespace EntityIOConnectionData_t {
                constexpr std::ptrdiff_t m_outputName = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_targetType = 0x8; // uint32
                constexpr std::ptrdiff_t m_targetName = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_inputName = 0x18; // CUtlString
                constexpr std::ptrdiff_t m_overrideParam = 0x20; // CUtlString
                constexpr std::ptrdiff_t m_flDelay = 0x28; // float32
                constexpr std::ptrdiff_t m_nTimesToFire = 0x2C; // int32
                constexpr std::ptrdiff_t m_paramMap = 0x30; // KeyValues3
            }
            // Parent: None
            // Fields count: 11
            //
            // Metadata:
            // ���x.
            namespace BakedLightingInfo_t {
                constexpr std::ptrdiff_t m_nLightmapVersionNumber = 0x0; // uint32
                constexpr std::ptrdiff_t m_nLightmapGameVersionNumber = 0x4; // uint32
                constexpr std::ptrdiff_t m_vLightmapUvScale = 0x8; // Vector2D
                constexpr std::ptrdiff_t m_bHasLightmaps = 0x10; // bool
                constexpr std::ptrdiff_t m_bBakedShadowsGamma20 = 0x11; // bool
                constexpr std::ptrdiff_t m_bCompressionEnabled = 0x12; // bool
                constexpr std::ptrdiff_t m_bSHLightmaps = 0x13; // bool
                constexpr std::ptrdiff_t m_nChartPackIterations = 0x14; // uint8
                constexpr std::ptrdiff_t m_nVradQuality = 0x15; // uint8
                constexpr std::ptrdiff_t m_lightMaps = 0x18; // CUtlVector<CStrongHandle<InfoForResourceTypeCTextureBase>>
                constexpr std::ptrdiff_t m_bakedShadows = 0x30; // CUtlVector<BakedLightingInfo_t::BakedShadowAssignment_t>
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            namespace VoxelVisBlockOffset_t {
                constexpr std::ptrdiff_t m_nOffset = 0x0; // uint32
                constexpr std::ptrdiff_t m_nElementCount = 0x4; // uint32
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace InfoForResourceTypeVMapResourceData_t {
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // ���x.
            namespace WorldNodeOnDiskBufferData_t {
                constexpr std::ptrdiff_t m_nElementCount = 0x0; // int32
                constexpr std::ptrdiff_t m_nElementSizeInBytes = 0x4; // int32
                constexpr std::ptrdiff_t m_inputLayoutFields = 0x8; // CUtlVector<RenderInputLayoutField_t>
                constexpr std::ptrdiff_t m_pData = 0x20; // CUtlVector<uint8>
            }
            // Parent: None
            // Fields count: 12
            //
            // Metadata:
            // ���x.
            namespace AggregateMeshInfo_t {
                constexpr std::ptrdiff_t m_nVisClusterMemberOffset = 0x0; // uint32
                constexpr std::ptrdiff_t m_nVisClusterMemberCount = 0x4; // uint8
                constexpr std::ptrdiff_t m_bHasTransform = 0x5; // bool
                constexpr std::ptrdiff_t m_nLODGroupMask = 0x6; // uint8
                constexpr std::ptrdiff_t m_nDrawCallIndex = 0x8; // int16
                constexpr std::ptrdiff_t m_nLODSetupIndex = 0xA; // int16
                constexpr std::ptrdiff_t m_vTintColor = 0xC; // Color
                constexpr std::ptrdiff_t m_objectFlags = 0x10; // ObjectTypeFlags_t
                constexpr std::ptrdiff_t m_nLightProbeVolumePrecomputedHandshake = 0x14; // int32
                constexpr std::ptrdiff_t m_nInstanceStreamOffset = 0x18; // uint32
                constexpr std::ptrdiff_t m_nVertexAlbedoStreamOffset = 0x1C; // uint32
                constexpr std::ptrdiff_t m_instanceStreams = 0x20; // AggregateInstanceStream_t
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // ���x.
            namespace World_t {
                constexpr std::ptrdiff_t m_builderParams = 0x0; // WorldBuilderParams_t
                constexpr std::ptrdiff_t m_worldNodes = 0x60; // CUtlVector<NodeData_t>
                constexpr std::ptrdiff_t m_worldLightingInfo = 0x78; // BakedLightingInfo_t
                constexpr std::ptrdiff_t m_entityLumps = 0xC0; // CUtlVector<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>>
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            namespace BakedLightingInfo_t__BakedShadowAssignment_t {
                constexpr std::ptrdiff_t m_nLightHash = 0x0; // uint32
                constexpr std::ptrdiff_t m_nMapHash = 0x4; // uint32
                constexpr std::ptrdiff_t m_nShadowChannel = 0x8; // int8
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace MaterialOverride_t {
                constexpr std::ptrdiff_t m_nSubSceneObject = 0x4; // uint32
                constexpr std::ptrdiff_t m_nDrawCallIndex = 0x8; // uint32
                constexpr std::ptrdiff_t m_pMaterial = 0x10; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_vLinearTintColor = 0x18; // Vector
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // ���x.
            namespace AggregateRTProxySceneObject_t {
                constexpr std::ptrdiff_t m_nLayer = 0x0; // int16
                constexpr std::ptrdiff_t m_BLASes = 0x8; // CUtlVector<RTProxyBLAS_t>
                constexpr std::ptrdiff_t m_Instances = 0x20; // CUtlVector<RTProxyInstanceInfo_t>
                constexpr std::ptrdiff_t m_VBData = 0x38; // CUtlBinaryBlock
                constexpr std::ptrdiff_t m_IBData = 0x48; // CUtlBinaryBlock
                constexpr std::ptrdiff_t m_InstanceAlbedoData = 0x58; // CUtlBinaryBlock
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            namespace EntityKeyValueData_t {
                constexpr std::ptrdiff_t m_connections = 0x8; // CUtlVector<EntityIOConnectionData_t>
                constexpr std::ptrdiff_t m_keyValuesData = 0x20; // CUtlBinaryBlock
            }
            // Parent: None
            // Fields count: 13
            //
            // Metadata:
            // ���x.
            namespace CVoxelVisibility {
                constexpr std::ptrdiff_t m_nBaseClusterCount = 0x40; // uint32
                constexpr std::ptrdiff_t m_nPVSBytesPerCluster = 0x44; // uint32
                constexpr std::ptrdiff_t m_vMinBounds = 0x48; // Vector
                constexpr std::ptrdiff_t m_vMaxBounds = 0x54; // Vector
                constexpr std::ptrdiff_t m_flGridSize = 0x60; // float32
                constexpr std::ptrdiff_t m_nSkyVisibilityCluster = 0x64; // uint32
                constexpr std::ptrdiff_t m_nSunVisibilityCluster = 0x68; // uint32
                constexpr std::ptrdiff_t m_NodeBlock = 0x6C; // VoxelVisBlockOffset_t
                constexpr std::ptrdiff_t m_RegionBlock = 0x74; // VoxelVisBlockOffset_t
                constexpr std::ptrdiff_t m_EnclosedClusterListBlock = 0x7C; // VoxelVisBlockOffset_t
                constexpr std::ptrdiff_t m_EnclosedClustersBlock = 0x84; // VoxelVisBlockOffset_t
                constexpr std::ptrdiff_t m_MasksBlock = 0x8C; // VoxelVisBlockOffset_t
                constexpr std::ptrdiff_t m_nVisBlocks = 0x94; // VoxelVisBlockOffset_t
            }
        }
    }
}
