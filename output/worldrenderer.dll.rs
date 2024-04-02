// Generated using https://github.com/a2x/cs2-dumper
// 2024-04-02 16:10:48.961749300 UTC

#![allow(non_upper_case_globals, non_camel_case_types, unused)]

pub mod cs2_dumper {
    pub mod schemas {
        // Module: worldrenderer.dll
        // Classes count: 24
        // Enums count: 1
        pub mod worldrenderer_dll {
            // Alignment: 4
            // Members count: 13
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
                OBJECT_TYPE_STATIC_CUBE_MAP = 0x8000
            }
            // Parent: None
            // Fields count: 7
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
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod EntityKeyValueData_t {
                pub const m_connections: usize = 0x8; // CUtlVector<EntityIOConnectionData_t>
                pub const m_keyValuesData: usize = 0x20; // CUtlBinaryBlock
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod PermEntityLumpData_t {
                pub const m_name: usize = 0x8; // CUtlString
                pub const m_hammerUniqueId: usize = 0x10; // CUtlString
                pub const m_childLumps: usize = 0x18; // CUtlVector<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>>
                pub const m_entityKeyValues: usize = 0x30; // CUtlLeanVector<EntityKeyValueData_t>
            }
            // Parent: None
            // Fields count: 14
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
                pub const m_vLightingOrigin: usize = 0x5C; // 
                pub const m_nOverlayRenderOrder: usize = 0x68; // int16
                pub const m_nLODOverride: usize = 0x6A; // int16
                pub const m_nCubeMapPrecomputedHandshake: usize = 0x6C; // int32
                pub const m_nLightProbeVolumePrecomputedHandshake: usize = 0x70; // int32
                pub const m_renderableModel: usize = 0x78; // CStrongHandle<InfoForResourceTypeCModel>
                pub const m_renderable: usize = 0x80; // CStrongHandle<InfoForResourceTypeCRenderMesh>
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod BaseSceneObjectOverride_t {
                pub const m_nSceneObjectIndex: usize = 0x0; // uint32
            }
            // Parent: BaseSceneObjectOverride_t
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod ExtraVertexStreamOverride_t {
                pub const m_nSubSceneObject: usize = 0x4; // uint32
                pub const m_nDrawCallIndex: usize = 0x8; // uint32
                pub const m_nAdditionalMeshDrawPrimitiveFlags: usize = 0xC; // MeshDrawPrimitiveFlags_t
                pub const m_extraBufferBinding: usize = 0x10; // CRenderBufferBinding
            }
            // Parent: BaseSceneObjectOverride_t
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod MaterialOverride_t {
                pub const m_nSubSceneObject: usize = 0x4; // uint32
                pub const m_nDrawCallIndex: usize = 0x8; // uint32
                pub const m_pMaterial: usize = 0x10; // CStrongHandle<InfoForResourceTypeIMaterial2>
            }
            // Parent: None
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod InfoOverlayData_t {
                pub const m_transform: usize = 0x0; // matrix3x4_t
                pub const m_flWidth: usize = 0x30; // float32
                pub const m_flHeight: usize = 0x34; // float32
                pub const m_flDepth: usize = 0x38; // float32
                pub const m_vUVStart: usize = 0x3C; // Vector2D
                pub const m_vUVEnd: usize = 0x44; // Vector2D
                pub const m_pMaterial: usize = 0x50; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_nRenderOrder: usize = 0x58; // int32
                pub const m_vTintColor: usize = 0x5C; // Vector4D
                pub const m_nSequenceOverride: usize = 0x6C; // int32
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod BakedLightingInfo_t {
                pub const m_nLightmapVersionNumber: usize = 0x0; // uint32
                pub const m_nLightmapGameVersionNumber: usize = 0x4; // uint32
                pub const m_vLightmapUvScale: usize = 0x8; // Vector2D
                pub const m_bHasLightmaps: usize = 0x10; // bool
                pub const m_lightMaps: usize = 0x18; // CUtlVector<CStrongHandle<InfoForResourceTypeCTextureBase>>
            }
            // Parent: None
            // Fields count: 4
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
            // Fields count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod AggregateMeshInfo_t {
                pub const m_nVisClusterMemberOffset: usize = 0x0; // uint32
                pub const m_nVisClusterMemberCount: usize = 0x4; // uint8
                pub const m_bHasTransform: usize = 0x5; // bool
                pub const m_nDrawCallIndex: usize = 0x6; // int16
                pub const m_nLODSetupIndex: usize = 0x8; // int16
                pub const m_nLODGroupMask: usize = 0xA; // uint8
                pub const m_vTintColor: usize = 0xB; // Color
                pub const m_objectFlags: usize = 0x10; // ObjectTypeFlags_t
                pub const m_nLightProbeVolumePrecomputedHandshake: usize = 0x14; // int32
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod AggregateLODSetup_t {
                pub const m_vLODOrigin: usize = 0x0; // 
                pub const m_fMaxObjectScale: usize = 0xC; // float32
                pub const m_fSwitchDistances: usize = 0x10; // CUtlVectorFixedGrowable<float32>
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod AggregateSceneObject_t {
                pub const m_allFlags: usize = 0x0; // ObjectTypeFlags_t
                pub const m_anyFlags: usize = 0x4; // ObjectTypeFlags_t
                pub const m_nLayer: usize = 0x8; // int16
                pub const m_aggregateMeshes: usize = 0x10; // CUtlVector<AggregateMeshInfo_t>
                pub const m_lodSetups: usize = 0x28; // CUtlVector<AggregateLODSetup_t>
                pub const m_visClusterMembership: usize = 0x40; // CUtlVector<uint16>
                pub const m_fragmentTransforms: usize = 0x58; // CUtlVector<matrix3x4_t>
                pub const m_renderableModel: usize = 0x70; // CStrongHandle<InfoForResourceTypeCModel>
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod ClutterTile_t {
                pub const m_nFirstInstance: usize = 0x0; // uint32
                pub const m_nLastInstance: usize = 0x4; // uint32
                pub const m_BoundsWs: usize = 0x8; // AABB_t
            }
            // Parent: None
            // Fields count: 8
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
            }
            // Parent: None
            // Fields count: 13
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod WorldNode_t {
                pub const m_sceneObjects: usize = 0x0; // CUtlVector<SceneObject_t>
                pub const m_infoOverlays: usize = 0x18; // CUtlVector<InfoOverlayData_t>
                pub const m_visClusterMembership: usize = 0x30; // CUtlVector<uint16>
                pub const m_aggregateSceneObjects: usize = 0x48; // CUtlVector<AggregateSceneObject_t>
                pub const m_clutterSceneObjects: usize = 0x60; // CUtlVector<ClutterSceneObject_t>
                pub const m_extraVertexStreamOverrides: usize = 0x78; // CUtlVector<ExtraVertexStreamOverride_t>
                pub const m_materialOverrides: usize = 0x90; // CUtlVector<MaterialOverride_t>
                pub const m_extraVertexStreams: usize = 0xA8; // CUtlVector<WorldNodeOnDiskBufferData_t>
                pub const m_layerNames: usize = 0xC0; // CUtlVector<CUtlString>
                pub const m_sceneObjectLayerIndices: usize = 0xD8; // CUtlVector<uint8>
                pub const m_overlayLayerIndices: usize = 0xF0; // CUtlVector<uint8>
                pub const m_grassFileName: usize = 0x108; // CUtlString
                pub const m_nodeLightingInfo: usize = 0x110; // BakedLightingInfo_t
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod WorldBuilderParams_t {
                pub const m_flMinDrawVolumeSize: usize = 0x0; // float32
                pub const m_bBuildBakedLighting: usize = 0x4; // bool
                pub const m_vLightmapUvScale: usize = 0x8; // Vector2D
                pub const m_nCompileTimestamp: usize = 0x10; // uint64
                pub const m_nCompileFingerprint: usize = 0x18; // uint64
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod NodeData_t {
                pub const m_nParent: usize = 0x0; // int32
                pub const m_vOrigin: usize = 0x4; // 
                pub const m_vMinBounds: usize = 0x10; // 
                pub const m_vMaxBounds: usize = 0x1C; // 
                pub const m_flMinimumDistance: usize = 0x28; // float32
                pub const m_ChildNodeIndices: usize = 0x30; // CUtlVector<int32>
                pub const m_worldNodePrefix: usize = 0x48; // CUtlString
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod World_t {
                pub const m_builderParams: usize = 0x0; // WorldBuilderParams_t
                pub const m_worldNodes: usize = 0x20; // CUtlVector<NodeData_t>
                pub const m_worldLightingInfo: usize = 0x38; // BakedLightingInfo_t
                pub const m_entityLumps: usize = 0x68; // CUtlVector<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>>
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod VoxelVisBlockOffset_t {
                pub const m_nOffset: usize = 0x0; // uint32
                pub const m_nElementCount: usize = 0x4; // uint32
            }
            // Parent: None
            // Fields count: 13
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CVoxelVisibility {
                pub const m_nBaseClusterCount: usize = 0x40; // uint32
                pub const m_nPVSBytesPerCluster: usize = 0x44; // uint32
                pub const m_vMinBounds: usize = 0x48; // 
                pub const m_vMaxBounds: usize = 0x54; // 
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
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeVMapResourceData_t {
            }
            // Parent: None
            // Fields count: 11
            //
            // Metadata:
            // NetworkVarNames: m_nameStringableIndex (int32)
            pub mod CEntityIdentity {
                pub const m_nameStringableIndex: usize = 0x14; // int32
                pub const m_name: usize = 0x18; // CUtlSymbolLarge
                pub const m_designerName: usize = 0x20; // CUtlSymbolLarge
                pub const m_flags: usize = 0x30; // uint32
                pub const m_worldGroupId: usize = 0x38; // WorldGroupId_t
                pub const m_fDataObjectTypes: usize = 0x3C; // uint32
                pub const m_PathIndex: usize = 0x40; // ChangeAccessorFieldPathIndex_t
                pub const m_pPrev: usize = 0x58; // CEntityIdentity*
                pub const m_pNext: usize = 0x60; // CEntityIdentity*
                pub const m_pPrevByClass: usize = 0x68; // CEntityIdentity*
                pub const m_pNextByClass: usize = 0x70; // CEntityIdentity*
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // NetworkVarNames: m_pEntity (CEntityIdentity*)
            // NetworkVarNames: m_CScriptComponent (CScriptComponent::Storage_t)
            pub mod CEntityInstance {
                pub const m_iszPrivateVScripts: usize = 0x8; // CUtlSymbolLarge
                pub const m_pEntity: usize = 0x10; // CEntityIdentity*
                pub const m_CScriptComponent: usize = 0x28; // CScriptComponent*
                pub const m_bVisibleinPVS: usize = 0x30; // bool
            }
        }
    }
}
