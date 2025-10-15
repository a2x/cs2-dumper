// Generated using https://github.com/a2x/cs2-dumper
// 2025-10-14 23:58:25.486779500 UTC

#![allow(non_upper_case_globals, non_camel_case_types, non_snake_case, unused)]

pub mod cs2_dumper {
    pub mod schemas {
        // Module: worldrenderer.dll
        // Class count: 25
        // Enum count: 2
        pub mod worldrenderer_dll {
            // Alignment: 4
            // Member count: 15
            #[repr(u32)]
            pub enum ObjectTypeFlags_t {
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
            }
            // Alignment: 1
            // Member count: 4
            #[repr(u8)]
            pub enum AggregateInstanceStream_t {
                AGGREGATE_INSTANCE_STREAM_NONE = 0x0,
                AGGREGATE_INSTANCE_STREAM_LIGHTMAPUV_UNORM16 = 0x1,
                AGGREGATE_INSTANCE_STREAM_VERTEXTINT_UNORM8 = 0x2,
                AGGREGATE_INSTANCE_STREAM_VERTEXBLEND_UNORM8 = 0x4
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod AggregateVertexAlbedoStreamOnDiskData_t {
                pub const m_BufferData: usize = 0x0; // CUtlBinaryBlock
            }
            // Parent: None
            // Field count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod SceneObject_t {
                pub const m_nObjectID: usize = 0x0; // uint32
                pub const m_vTransform: usize = 0x4; // Vector4D[3]
                pub const m_flFadeStartDistance: usize = 0x34; // float32
                pub const m_flFadeEndDistance: usize = 0x38; // float32
                pub const m_vTintColor: usize = 0x3C; // Vector4D
                pub const m_skin: usize = 0x50; // CUtlString
                pub const m_nObjectTypeFlags: usize = 0x58; // ObjectTypeFlags_t
                pub const m_vLightingOrigin: usize = 0x5C; // Vector
                pub const m_nOverlayRenderOrder: usize = 0x68; // int16
                pub const m_nLODOverride: usize = 0x6A; // int16
                pub const m_nCubeMapPrecomputedHandshake: usize = 0x6C; // int32
                pub const m_nLightProbeVolumePrecomputedHandshake: usize = 0x70; // int32
                pub const m_renderableModel: usize = 0x78; // CStrongHandle<InfoForResourceTypeCModel>
                pub const m_renderable: usize = 0x80; // CStrongHandle<InfoForResourceTypeCRenderMesh>
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod AggregateLODSetup_t {
                pub const m_vLODOrigin: usize = 0x0; // Vector
                pub const m_fMaxObjectScale: usize = 0xC; // float32
                pub const m_fSwitchDistances: usize = 0x10; // CUtlVector<float32>
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod ExtraVertexStreamOverride_t {
                pub const m_nSubSceneObject: usize = 0x4; // uint32
                pub const m_nDrawCallIndex: usize = 0x8; // uint32
                pub const m_nAdditionalMeshDrawPrimitiveFlags: usize = 0xC; // MeshDrawPrimitiveFlags_t
                pub const m_extraBufferBinding: usize = 0x10; // CRenderBufferBinding
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod ClutterTile_t {
                pub const m_nFirstInstance: usize = 0x0; // uint32
                pub const m_nLastInstance: usize = 0x4; // uint32
                pub const m_BoundsWs: usize = 0x8; // AABB_t
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod AggregateSceneObject_t {
                pub const m_allFlags: usize = 0x0; // ObjectTypeFlags_t
                pub const m_anyFlags: usize = 0x4; // ObjectTypeFlags_t
                pub const m_nLayer: usize = 0x8; // int16
                pub const m_instanceStream: usize = 0xA; // int16
                pub const m_vertexAlbedoStream: usize = 0xC; // int16
                pub const m_aggregateMeshes: usize = 0x10; // CUtlVector<AggregateMeshInfo_t>
                pub const m_lodSetups: usize = 0x28; // CUtlVector<AggregateLODSetup_t>
                pub const m_visClusterMembership: usize = 0x40; // CUtlVector<uint16>
                pub const m_fragmentTransforms: usize = 0x58; // CUtlVector<matrix3x4_t>
                pub const m_renderableModel: usize = 0x70; // CStrongHandle<InfoForResourceTypeCModel>
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod NodeData_t {
                pub const m_nParent: usize = 0x0; // int32
                pub const m_vOrigin: usize = 0x4; // Vector
                pub const m_vMinBounds: usize = 0x10; // Vector
                pub const m_vMaxBounds: usize = 0x1C; // Vector
                pub const m_flMinimumDistance: usize = 0x28; // float32
                pub const m_ChildNodeIndices: usize = 0x30; // CUtlVector<int32>
                pub const m_worldNodePrefix: usize = 0x48; // CUtlString
            }
            // Parent: None
            // Field count: 0
            pub mod VMapResourceData_t {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod AggregateInstanceStreamOnDiskData_t {
                pub const m_DecodedSize: usize = 0x0; // uint32
                pub const m_BufferData: usize = 0x8; // CUtlBinaryBlock
            }
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod ClutterSceneObject_t {
                pub const m_Bounds: usize = 0x0; // AABB_t
                pub const m_flags: usize = 0x18; // ObjectTypeFlags_t
                pub const m_nLayer: usize = 0x1C; // int16
                pub const m_instancePositions: usize = 0x20; // CUtlVector<Vector>
                pub const m_instanceScales: usize = 0x50; // CUtlVector<float32>
                pub const m_instanceTintSrgb: usize = 0x68; // CUtlVector<Color>
                pub const m_tiles: usize = 0x80; // CUtlVector<ClutterTile_t>
                pub const m_renderableModel: usize = 0x98; // CStrongHandle<InfoForResourceTypeCModel>
                pub const m_materialGroup: usize = 0xA0; // CUtlStringToken
                pub const m_flBeginCullSize: usize = 0xA4; // float32
                pub const m_flEndCullSize: usize = 0xA8; // float32
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod WorldBuilderParams_t {
                pub const m_flMinDrawVolumeSize: usize = 0x0; // float32
                pub const m_bBuildBakedLighting: usize = 0x4; // bool
                pub const m_bAggregateInstanceStreams: usize = 0x5; // bool
                pub const m_bakedLightingInfo: usize = 0x8; // BakedLightingInfo_t
                pub const m_nCompileTimestamp: usize = 0x50; // uint64
                pub const m_nCompileFingerprint: usize = 0x58; // uint64
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod PermEntityLumpData_t {
                pub const m_name: usize = 0x8; // CUtlString
                pub const m_childLumps: usize = 0x10; // CUtlVector<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>>
                pub const m_entityKeyValues: usize = 0x28; // CUtlLeanVector<EntityKeyValueData_t>
            }
            // Parent: None
            // Field count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod WorldNode_t {
                pub const m_sceneObjects: usize = 0x0; // CUtlVector<SceneObject_t>
                pub const m_visClusterMembership: usize = 0x18; // CUtlVector<uint16>
                pub const m_aggregateSceneObjects: usize = 0x30; // CUtlVector<AggregateSceneObject_t>
                pub const m_clutterSceneObjects: usize = 0x48; // CUtlVector<ClutterSceneObject_t>
                pub const m_extraVertexStreamOverrides: usize = 0x60; // CUtlVector<ExtraVertexStreamOverride_t>
                pub const m_materialOverrides: usize = 0x78; // CUtlVector<MaterialOverride_t>
                pub const m_extraVertexStreams: usize = 0x90; // CUtlVector<WorldNodeOnDiskBufferData_t>
                pub const m_aggregateInstanceStreams: usize = 0xA8; // CUtlVector<AggregateInstanceStreamOnDiskData_t>
                pub const m_vertexAlbedoStreams: usize = 0xC0; // CUtlVector<AggregateVertexAlbedoStreamOnDiskData_t>
                pub const m_layerNames: usize = 0xD8; // CUtlVector<CUtlString>
                pub const m_sceneObjectLayerIndices: usize = 0xF0; // CUtlVector<uint8>
                pub const m_grassFileName: usize = 0x108; // CUtlString
                pub const m_nodeLightingInfo: usize = 0x110; // BakedLightingInfo_t
                pub const m_bHasBakedGeometryFlag: usize = 0x158; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod BaseSceneObjectOverride_t {
                pub const m_nSceneObjectIndex: usize = 0x0; // uint32
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod EntityIOConnectionData_t {
                pub const m_outputName: usize = 0x0; // CUtlString
                pub const m_targetType: usize = 0x8; // uint32
                pub const m_targetName: usize = 0x10; // CUtlString
                pub const m_inputName: usize = 0x18; // CUtlString
                pub const m_overrideParam: usize = 0x20; // CUtlString
                pub const m_flDelay: usize = 0x28; // float32
                pub const m_nTimesToFire: usize = 0x2C; // int32
                pub const m_paramMap: usize = 0x30; // KeyValues3
            }
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod BakedLightingInfo_t {
                pub const m_nLightmapVersionNumber: usize = 0x0; // uint32
                pub const m_nLightmapGameVersionNumber: usize = 0x4; // uint32
                pub const m_vLightmapUvScale: usize = 0x8; // Vector2D
                pub const m_bHasLightmaps: usize = 0x10; // bool
                pub const m_bBakedShadowsGamma20: usize = 0x11; // bool
                pub const m_bCompressionEnabled: usize = 0x12; // bool
                pub const m_bSHLightmaps: usize = 0x13; // bool
                pub const m_nChartPackIterations: usize = 0x14; // uint8
                pub const m_nVradQuality: usize = 0x15; // uint8
                pub const m_lightMaps: usize = 0x18; // CUtlVector<CStrongHandle<InfoForResourceTypeCTextureBase>>
                pub const m_bakedShadows: usize = 0x30; // CUtlVector<BakedLightingInfo_t::BakedShadowAssignment_t>
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod VoxelVisBlockOffset_t {
                pub const m_nOffset: usize = 0x0; // uint32
                pub const m_nElementCount: usize = 0x4; // uint32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeVMapResourceData_t {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod WorldNodeOnDiskBufferData_t {
                pub const m_nElementCount: usize = 0x0; // int32
                pub const m_nElementSizeInBytes: usize = 0x4; // int32
                pub const m_inputLayoutFields: usize = 0x8; // CUtlVector<RenderInputLayoutField_t>
                pub const m_pData: usize = 0x20; // CUtlVector<uint8>
            }
            // Parent: None
            // Field count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod AggregateMeshInfo_t {
                pub const m_nVisClusterMemberOffset: usize = 0x0; // uint32
                pub const m_nVisClusterMemberCount: usize = 0x4; // uint8
                pub const m_bHasTransform: usize = 0x5; // bool
                pub const m_nLODGroupMask: usize = 0x6; // uint8
                pub const m_nDrawCallIndex: usize = 0x8; // int16
                pub const m_nLODSetupIndex: usize = 0xA; // int16
                pub const m_vTintColor: usize = 0xC; // Color
                pub const m_objectFlags: usize = 0x10; // ObjectTypeFlags_t
                pub const m_nLightProbeVolumePrecomputedHandshake: usize = 0x14; // int32
                pub const m_nInstanceStreamOffset: usize = 0x18; // uint32
                pub const m_nVertexAlbedoStreamOffset: usize = 0x1C; // uint32
                pub const m_instanceStreams: usize = 0x20; // AggregateInstanceStream_t
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod World_t {
                pub const m_builderParams: usize = 0x0; // WorldBuilderParams_t
                pub const m_worldNodes: usize = 0x60; // CUtlVector<NodeData_t>
                pub const m_worldLightingInfo: usize = 0x78; // BakedLightingInfo_t
                pub const m_entityLumps: usize = 0xC0; // CUtlVector<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>>
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod BakedLightingInfo_t__BakedShadowAssignment_t {
                pub const m_nLightHash: usize = 0x0; // uint32
                pub const m_nMapHash: usize = 0x4; // uint32
                pub const m_nShadowChannel: usize = 0x8; // int8
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod MaterialOverride_t {
                pub const m_nSubSceneObject: usize = 0x4; // uint32
                pub const m_nDrawCallIndex: usize = 0x8; // uint32
                pub const m_pMaterial: usize = 0x10; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_vLinearTintColor: usize = 0x18; // Vector
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod EntityKeyValueData_t {
                pub const m_connections: usize = 0x8; // CUtlVector<EntityIOConnectionData_t>
                pub const m_keyValuesData: usize = 0x20; // CUtlBinaryBlock
            }
            // Parent: None
            // Field count: 13
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CVoxelVisibility {
                pub const m_nBaseClusterCount: usize = 0x40; // uint32
                pub const m_nPVSBytesPerCluster: usize = 0x44; // uint32
                pub const m_vMinBounds: usize = 0x48; // Vector
                pub const m_vMaxBounds: usize = 0x54; // Vector
                pub const m_flGridSize: usize = 0x60; // float32
                pub const m_nSkyVisibilityCluster: usize = 0x64; // uint32
                pub const m_nSunVisibilityCluster: usize = 0x68; // uint32
                pub const m_NodeBlock: usize = 0x6C; // VoxelVisBlockOffset_t
                pub const m_RegionBlock: usize = 0x74; // VoxelVisBlockOffset_t
                pub const m_EnclosedClusterListBlock: usize = 0x7C; // VoxelVisBlockOffset_t
                pub const m_EnclosedClustersBlock: usize = 0x84; // VoxelVisBlockOffset_t
                pub const m_MasksBlock: usize = 0x8C; // VoxelVisBlockOffset_t
                pub const m_nVisBlocks: usize = 0x94; // VoxelVisBlockOffset_t
            }
        }
    }
}
