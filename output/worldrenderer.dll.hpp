// Generated using https://github.com/a2x/cs2-dumper
// 2024-04-02 16:10:48.961749300 UTC

#pragma once

#include <cstddef>

namespace cs2_dumper {
    namespace schemas {
        // Module: worldrenderer.dll
        // Classes count: 24
        // Enums count: 1
        namespace worldrenderer_dll {
            // Alignment: 4
            // Members count: 13
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
                OBJECT_TYPE_STATIC_CUBE_MAP = 0x8000
            };
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace EntityIOConnectionData_t {
                constexpr std::ptrdiff_t m_outputName = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_targetType = 0x8; // uint32
                constexpr std::ptrdiff_t m_targetName = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_inputName = 0x18; // CUtlString
                constexpr std::ptrdiff_t m_overrideParam = 0x20; // CUtlString
                constexpr std::ptrdiff_t m_flDelay = 0x28; // float32
                constexpr std::ptrdiff_t m_nTimesToFire = 0x2C; // int32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace EntityKeyValueData_t {
                constexpr std::ptrdiff_t m_connections = 0x8; // CUtlVector<EntityIOConnectionData_t>
                constexpr std::ptrdiff_t m_keyValuesData = 0x20; // CUtlBinaryBlock
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace PermEntityLumpData_t {
                constexpr std::ptrdiff_t m_name = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_hammerUniqueId = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_childLumps = 0x18; // CUtlVector<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>>
                constexpr std::ptrdiff_t m_entityKeyValues = 0x30; // CUtlLeanVector<EntityKeyValueData_t>
            }
            // Parent: None
            // Fields count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace SceneObject_t {
                constexpr std::ptrdiff_t m_nObjectID = 0x0; // uint32
                constexpr std::ptrdiff_t m_vTransform = 0x4; // Vector4D[3]
                constexpr std::ptrdiff_t m_flFadeStartDistance = 0x34; // float32
                constexpr std::ptrdiff_t m_flFadeEndDistance = 0x38; // float32
                constexpr std::ptrdiff_t m_vTintColor = 0x3C; // Vector4D
                constexpr std::ptrdiff_t m_skin = 0x50; // CUtlString
                constexpr std::ptrdiff_t m_nObjectTypeFlags = 0x58; // ObjectTypeFlags_t
                constexpr std::ptrdiff_t m_vLightingOrigin = 0x5C; // 
                constexpr std::ptrdiff_t m_nOverlayRenderOrder = 0x68; // int16
                constexpr std::ptrdiff_t m_nLODOverride = 0x6A; // int16
                constexpr std::ptrdiff_t m_nCubeMapPrecomputedHandshake = 0x6C; // int32
                constexpr std::ptrdiff_t m_nLightProbeVolumePrecomputedHandshake = 0x70; // int32
                constexpr std::ptrdiff_t m_renderableModel = 0x78; // CStrongHandle<InfoForResourceTypeCModel>
                constexpr std::ptrdiff_t m_renderable = 0x80; // CStrongHandle<InfoForResourceTypeCRenderMesh>
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace BaseSceneObjectOverride_t {
                constexpr std::ptrdiff_t m_nSceneObjectIndex = 0x0; // uint32
            }
            // Parent: BaseSceneObjectOverride_t
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace ExtraVertexStreamOverride_t {
                constexpr std::ptrdiff_t m_nSubSceneObject = 0x4; // uint32
                constexpr std::ptrdiff_t m_nDrawCallIndex = 0x8; // uint32
                constexpr std::ptrdiff_t m_nAdditionalMeshDrawPrimitiveFlags = 0xC; // MeshDrawPrimitiveFlags_t
                constexpr std::ptrdiff_t m_extraBufferBinding = 0x10; // CRenderBufferBinding
            }
            // Parent: BaseSceneObjectOverride_t
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace MaterialOverride_t {
                constexpr std::ptrdiff_t m_nSubSceneObject = 0x4; // uint32
                constexpr std::ptrdiff_t m_nDrawCallIndex = 0x8; // uint32
                constexpr std::ptrdiff_t m_pMaterial = 0x10; // CStrongHandle<InfoForResourceTypeIMaterial2>
            }
            // Parent: None
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace InfoOverlayData_t {
                constexpr std::ptrdiff_t m_transform = 0x0; // matrix3x4_t
                constexpr std::ptrdiff_t m_flWidth = 0x30; // float32
                constexpr std::ptrdiff_t m_flHeight = 0x34; // float32
                constexpr std::ptrdiff_t m_flDepth = 0x38; // float32
                constexpr std::ptrdiff_t m_vUVStart = 0x3C; // Vector2D
                constexpr std::ptrdiff_t m_vUVEnd = 0x44; // Vector2D
                constexpr std::ptrdiff_t m_pMaterial = 0x50; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_nRenderOrder = 0x58; // int32
                constexpr std::ptrdiff_t m_vTintColor = 0x5C; // Vector4D
                constexpr std::ptrdiff_t m_nSequenceOverride = 0x6C; // int32
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace BakedLightingInfo_t {
                constexpr std::ptrdiff_t m_nLightmapVersionNumber = 0x0; // uint32
                constexpr std::ptrdiff_t m_nLightmapGameVersionNumber = 0x4; // uint32
                constexpr std::ptrdiff_t m_vLightmapUvScale = 0x8; // Vector2D
                constexpr std::ptrdiff_t m_bHasLightmaps = 0x10; // bool
                constexpr std::ptrdiff_t m_lightMaps = 0x18; // CUtlVector<CStrongHandle<InfoForResourceTypeCTextureBase>>
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace WorldNodeOnDiskBufferData_t {
                constexpr std::ptrdiff_t m_nElementCount = 0x0; // int32
                constexpr std::ptrdiff_t m_nElementSizeInBytes = 0x4; // int32
                constexpr std::ptrdiff_t m_inputLayoutFields = 0x8; // CUtlVector<RenderInputLayoutField_t>
                constexpr std::ptrdiff_t m_pData = 0x20; // CUtlVector<uint8>
            }
            // Parent: None
            // Fields count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace AggregateMeshInfo_t {
                constexpr std::ptrdiff_t m_nVisClusterMemberOffset = 0x0; // uint32
                constexpr std::ptrdiff_t m_nVisClusterMemberCount = 0x4; // uint8
                constexpr std::ptrdiff_t m_bHasTransform = 0x5; // bool
                constexpr std::ptrdiff_t m_nDrawCallIndex = 0x6; // int16
                constexpr std::ptrdiff_t m_nLODSetupIndex = 0x8; // int16
                constexpr std::ptrdiff_t m_nLODGroupMask = 0xA; // uint8
                constexpr std::ptrdiff_t m_vTintColor = 0xB; // Color
                constexpr std::ptrdiff_t m_objectFlags = 0x10; // ObjectTypeFlags_t
                constexpr std::ptrdiff_t m_nLightProbeVolumePrecomputedHandshake = 0x14; // int32
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace AggregateLODSetup_t {
                constexpr std::ptrdiff_t m_vLODOrigin = 0x0; // 
                constexpr std::ptrdiff_t m_fMaxObjectScale = 0xC; // float32
                constexpr std::ptrdiff_t m_fSwitchDistances = 0x10; // CUtlVectorFixedGrowable<float32>
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace AggregateSceneObject_t {
                constexpr std::ptrdiff_t m_allFlags = 0x0; // ObjectTypeFlags_t
                constexpr std::ptrdiff_t m_anyFlags = 0x4; // ObjectTypeFlags_t
                constexpr std::ptrdiff_t m_nLayer = 0x8; // int16
                constexpr std::ptrdiff_t m_aggregateMeshes = 0x10; // CUtlVector<AggregateMeshInfo_t>
                constexpr std::ptrdiff_t m_lodSetups = 0x28; // CUtlVector<AggregateLODSetup_t>
                constexpr std::ptrdiff_t m_visClusterMembership = 0x40; // CUtlVector<uint16>
                constexpr std::ptrdiff_t m_fragmentTransforms = 0x58; // CUtlVector<matrix3x4_t>
                constexpr std::ptrdiff_t m_renderableModel = 0x70; // CStrongHandle<InfoForResourceTypeCModel>
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace ClutterTile_t {
                constexpr std::ptrdiff_t m_nFirstInstance = 0x0; // uint32
                constexpr std::ptrdiff_t m_nLastInstance = 0x4; // uint32
                constexpr std::ptrdiff_t m_BoundsWs = 0x8; // AABB_t
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace ClutterSceneObject_t {
                constexpr std::ptrdiff_t m_Bounds = 0x0; // AABB_t
                constexpr std::ptrdiff_t m_flags = 0x18; // ObjectTypeFlags_t
                constexpr std::ptrdiff_t m_nLayer = 0x1C; // int16
                constexpr std::ptrdiff_t m_instancePositions = 0x20; // CUtlVector<Vector>
                constexpr std::ptrdiff_t m_instanceScales = 0x50; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_instanceTintSrgb = 0x68; // CUtlVector<Color>
                constexpr std::ptrdiff_t m_tiles = 0x80; // CUtlVector<ClutterTile_t>
                constexpr std::ptrdiff_t m_renderableModel = 0x98; // CStrongHandle<InfoForResourceTypeCModel>
            }
            // Parent: None
            // Fields count: 13
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace WorldNode_t {
                constexpr std::ptrdiff_t m_sceneObjects = 0x0; // CUtlVector<SceneObject_t>
                constexpr std::ptrdiff_t m_infoOverlays = 0x18; // CUtlVector<InfoOverlayData_t>
                constexpr std::ptrdiff_t m_visClusterMembership = 0x30; // CUtlVector<uint16>
                constexpr std::ptrdiff_t m_aggregateSceneObjects = 0x48; // CUtlVector<AggregateSceneObject_t>
                constexpr std::ptrdiff_t m_clutterSceneObjects = 0x60; // CUtlVector<ClutterSceneObject_t>
                constexpr std::ptrdiff_t m_extraVertexStreamOverrides = 0x78; // CUtlVector<ExtraVertexStreamOverride_t>
                constexpr std::ptrdiff_t m_materialOverrides = 0x90; // CUtlVector<MaterialOverride_t>
                constexpr std::ptrdiff_t m_extraVertexStreams = 0xA8; // CUtlVector<WorldNodeOnDiskBufferData_t>
                constexpr std::ptrdiff_t m_layerNames = 0xC0; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_sceneObjectLayerIndices = 0xD8; // CUtlVector<uint8>
                constexpr std::ptrdiff_t m_overlayLayerIndices = 0xF0; // CUtlVector<uint8>
                constexpr std::ptrdiff_t m_grassFileName = 0x108; // CUtlString
                constexpr std::ptrdiff_t m_nodeLightingInfo = 0x110; // BakedLightingInfo_t
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace WorldBuilderParams_t {
                constexpr std::ptrdiff_t m_flMinDrawVolumeSize = 0x0; // float32
                constexpr std::ptrdiff_t m_bBuildBakedLighting = 0x4; // bool
                constexpr std::ptrdiff_t m_vLightmapUvScale = 0x8; // Vector2D
                constexpr std::ptrdiff_t m_nCompileTimestamp = 0x10; // uint64
                constexpr std::ptrdiff_t m_nCompileFingerprint = 0x18; // uint64
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace NodeData_t {
                constexpr std::ptrdiff_t m_nParent = 0x0; // int32
                constexpr std::ptrdiff_t m_vOrigin = 0x4; // 
                constexpr std::ptrdiff_t m_vMinBounds = 0x10; // 
                constexpr std::ptrdiff_t m_vMaxBounds = 0x1C; // 
                constexpr std::ptrdiff_t m_flMinimumDistance = 0x28; // float32
                constexpr std::ptrdiff_t m_ChildNodeIndices = 0x30; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_worldNodePrefix = 0x48; // CUtlString
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace World_t {
                constexpr std::ptrdiff_t m_builderParams = 0x0; // WorldBuilderParams_t
                constexpr std::ptrdiff_t m_worldNodes = 0x20; // CUtlVector<NodeData_t>
                constexpr std::ptrdiff_t m_worldLightingInfo = 0x38; // BakedLightingInfo_t
                constexpr std::ptrdiff_t m_entityLumps = 0x68; // CUtlVector<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>>
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VoxelVisBlockOffset_t {
                constexpr std::ptrdiff_t m_nOffset = 0x0; // uint32
                constexpr std::ptrdiff_t m_nElementCount = 0x4; // uint32
            }
            // Parent: None
            // Fields count: 13
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVoxelVisibility {
                constexpr std::ptrdiff_t m_nBaseClusterCount = 0x40; // uint32
                constexpr std::ptrdiff_t m_nPVSBytesPerCluster = 0x44; // uint32
                constexpr std::ptrdiff_t m_vMinBounds = 0x48; // 
                constexpr std::ptrdiff_t m_vMaxBounds = 0x54; // 
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
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeVMapResourceData_t {
            }
            // Parent: None
            // Fields count: 11
            //
            // Metadata:
            // NetworkVarNames: m_nameStringableIndex (int32)
            namespace CEntityIdentity {
                constexpr std::ptrdiff_t m_nameStringableIndex = 0x14; // int32
                constexpr std::ptrdiff_t m_name = 0x18; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_designerName = 0x20; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_flags = 0x30; // uint32
                constexpr std::ptrdiff_t m_worldGroupId = 0x38; // WorldGroupId_t
                constexpr std::ptrdiff_t m_fDataObjectTypes = 0x3C; // uint32
                constexpr std::ptrdiff_t m_PathIndex = 0x40; // ChangeAccessorFieldPathIndex_t
                constexpr std::ptrdiff_t m_pPrev = 0x58; // CEntityIdentity*
                constexpr std::ptrdiff_t m_pNext = 0x60; // CEntityIdentity*
                constexpr std::ptrdiff_t m_pPrevByClass = 0x68; // CEntityIdentity*
                constexpr std::ptrdiff_t m_pNextByClass = 0x70; // CEntityIdentity*
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // NetworkVarNames: m_pEntity (CEntityIdentity*)
            // NetworkVarNames: m_CScriptComponent (CScriptComponent::Storage_t)
            namespace CEntityInstance {
                constexpr std::ptrdiff_t m_iszPrivateVScripts = 0x8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_pEntity = 0x10; // CEntityIdentity*
                constexpr std::ptrdiff_t m_CScriptComponent = 0x28; // CScriptComponent*
                constexpr std::ptrdiff_t m_bVisibleinPVS = 0x30; // bool
            }
        }
    }
}
