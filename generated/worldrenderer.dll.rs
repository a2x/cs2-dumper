/*
 * Generated using https://github.com/a2x/cs2-dumper
 * Sat, 23 Mar 2024 05:02:03 +0000
 */

#![allow(non_snake_case, non_upper_case_globals)]

pub mod AggregateLODSetup_t {
    pub const m_vLODOrigin: usize = 0x0; // Vector
    pub const m_fMaxObjectScale: usize = 0xC; // float
    pub const m_fSwitchDistances: usize = 0x10; // CUtlVectorFixedGrowable<float>
}

pub mod AggregateMeshInfo_t {
    pub const m_nVisClusterMemberOffset: usize = 0x0; // uint32_t
    pub const m_nVisClusterMemberCount: usize = 0x4; // uint8_t
    pub const m_bHasTransform: usize = 0x5; // bool
    pub const m_nDrawCallIndex: usize = 0x6; // int16_t
    pub const m_nLODSetupIndex: usize = 0x8; // int16_t
    pub const m_nLODGroupMask: usize = 0xA; // uint8_t
    pub const m_vTintColor: usize = 0xB; // Color
    pub const m_objectFlags: usize = 0x10; // ObjectTypeFlags_t
    pub const m_nLightProbeVolumePrecomputedHandshake: usize = 0x14; // int32_t
}

pub mod AggregateSceneObject_t {
    pub const m_allFlags: usize = 0x0; // ObjectTypeFlags_t
    pub const m_anyFlags: usize = 0x4; // ObjectTypeFlags_t
    pub const m_nLayer: usize = 0x8; // int16_t
    pub const m_aggregateMeshes: usize = 0x10; // CUtlVector<AggregateMeshInfo_t>
    pub const m_lodSetups: usize = 0x28; // CUtlVector<AggregateLODSetup_t>
    pub const m_visClusterMembership: usize = 0x40; // CUtlVector<uint16_t>
    pub const m_fragmentTransforms: usize = 0x58; // CUtlVector<matrix3x4_t>
    pub const m_renderableModel: usize = 0x70; // CStrongHandle<InfoForResourceTypeCModel>
}

pub mod BakedLightingInfo_t {
    pub const m_nLightmapVersionNumber: usize = 0x0; // uint32_t
    pub const m_nLightmapGameVersionNumber: usize = 0x4; // uint32_t
    pub const m_vLightmapUvScale: usize = 0x8; // Vector2D
    pub const m_bHasLightmaps: usize = 0x10; // bool
    pub const m_lightMaps: usize = 0x18; // CUtlVector<CStrongHandle<InfoForResourceTypeCTextureBase>>
}

pub mod BaseSceneObjectOverride_t {
    pub const m_nSceneObjectIndex: usize = 0x0; // uint32_t
}

pub mod CEntityComponent {
}

pub mod CEntityIdentity {
    pub const m_nameStringableIndex: usize = 0x14; // int32_t
    pub const m_name: usize = 0x18; // CUtlSymbolLarge
    pub const m_designerName: usize = 0x20; // CUtlSymbolLarge
    pub const m_flags: usize = 0x30; // uint32_t
    pub const m_worldGroupId: usize = 0x38; // WorldGroupId_t
    pub const m_fDataObjectTypes: usize = 0x3C; // uint32_t
    pub const m_PathIndex: usize = 0x40; // ChangeAccessorFieldPathIndex_t
    pub const m_pPrev: usize = 0x58; // CEntityIdentity*
    pub const m_pNext: usize = 0x60; // CEntityIdentity*
    pub const m_pPrevByClass: usize = 0x68; // CEntityIdentity*
    pub const m_pNextByClass: usize = 0x70; // CEntityIdentity*
}

pub mod CEntityInstance {
    pub const m_iszPrivateVScripts: usize = 0x8; // CUtlSymbolLarge
    pub const m_pEntity: usize = 0x10; // CEntityIdentity*
    pub const m_CScriptComponent: usize = 0x28; // CScriptComponent*
    pub const m_bVisibleinPVS: usize = 0x30; // bool
}

pub mod CScriptComponent { // CEntityComponent
    pub const m_scriptClassName: usize = 0x30; // CUtlSymbolLarge
}

pub mod CVoxelVisibility {
    pub const m_nBaseClusterCount: usize = 0x40; // uint32_t
    pub const m_nPVSBytesPerCluster: usize = 0x44; // uint32_t
    pub const m_vMinBounds: usize = 0x48; // Vector
    pub const m_vMaxBounds: usize = 0x54; // Vector
    pub const m_flGridSize: usize = 0x60; // float
    pub const m_nSkyVisibilityCluster: usize = 0x64; // uint32_t
    pub const m_nSunVisibilityCluster: usize = 0x68; // uint32_t
    pub const m_NodeBlock: usize = 0x6C; // VoxelVisBlockOffset_t
    pub const m_RegionBlock: usize = 0x74; // VoxelVisBlockOffset_t
    pub const m_EnclosedClusterListBlock: usize = 0x7C; // VoxelVisBlockOffset_t
    pub const m_EnclosedClustersBlock: usize = 0x84; // VoxelVisBlockOffset_t
    pub const m_MasksBlock: usize = 0x8C; // VoxelVisBlockOffset_t
    pub const m_nVisBlocks: usize = 0x94; // VoxelVisBlockOffset_t
}

pub mod ClutterSceneObject_t {
    pub const m_Bounds: usize = 0x0; // AABB_t
    pub const m_flags: usize = 0x18; // ObjectTypeFlags_t
    pub const m_nLayer: usize = 0x1C; // int16_t
    pub const m_instancePositions: usize = 0x20; // CUtlVector<Vector>
    pub const m_instanceScales: usize = 0x50; // CUtlVector<float>
    pub const m_instanceTintSrgb: usize = 0x68; // CUtlVector<Color>
    pub const m_tiles: usize = 0x80; // CUtlVector<ClutterTile_t>
    pub const m_renderableModel: usize = 0x98; // CStrongHandle<InfoForResourceTypeCModel>
}

pub mod ClutterTile_t {
    pub const m_nFirstInstance: usize = 0x0; // uint32_t
    pub const m_nLastInstance: usize = 0x4; // uint32_t
    pub const m_BoundsWs: usize = 0x8; // AABB_t
}

pub mod EntityIOConnectionData_t {
    pub const m_outputName: usize = 0x0; // CUtlString
    pub const m_targetType: usize = 0x8; // uint32_t
    pub const m_targetName: usize = 0x10; // CUtlString
    pub const m_inputName: usize = 0x18; // CUtlString
    pub const m_overrideParam: usize = 0x20; // CUtlString
    pub const m_flDelay: usize = 0x28; // float
    pub const m_nTimesToFire: usize = 0x2C; // int32_t
}

pub mod EntityKeyValueData_t {
    pub const m_connections: usize = 0x8; // CUtlVector<EntityIOConnectionData_t>
    pub const m_keyValuesData: usize = 0x20; // CUtlBinaryBlock
}

pub mod ExtraVertexStreamOverride_t { // BaseSceneObjectOverride_t
    pub const m_nSubSceneObject: usize = 0x4; // uint32_t
    pub const m_nDrawCallIndex: usize = 0x8; // uint32_t
    pub const m_nAdditionalMeshDrawPrimitiveFlags: usize = 0xC; // MeshDrawPrimitiveFlags_t
    pub const m_extraBufferBinding: usize = 0x10; // CRenderBufferBinding
}

pub mod InfoForResourceTypeVMapResourceData_t {
}

pub mod InfoOverlayData_t {
    pub const m_transform: usize = 0x0; // matrix3x4_t
    pub const m_flWidth: usize = 0x30; // float
    pub const m_flHeight: usize = 0x34; // float
    pub const m_flDepth: usize = 0x38; // float
    pub const m_vUVStart: usize = 0x3C; // Vector2D
    pub const m_vUVEnd: usize = 0x44; // Vector2D
    pub const m_pMaterial: usize = 0x50; // CStrongHandle<InfoForResourceTypeIMaterial2>
    pub const m_nRenderOrder: usize = 0x58; // int32_t
    pub const m_vTintColor: usize = 0x5C; // Vector4D
    pub const m_nSequenceOverride: usize = 0x6C; // int32_t
}

pub mod MaterialOverride_t { // BaseSceneObjectOverride_t
    pub const m_nSubSceneObject: usize = 0x4; // uint32_t
    pub const m_nDrawCallIndex: usize = 0x8; // uint32_t
    pub const m_pMaterial: usize = 0x10; // CStrongHandle<InfoForResourceTypeIMaterial2>
}

pub mod NodeData_t {
    pub const m_nParent: usize = 0x0; // int32_t
    pub const m_vOrigin: usize = 0x4; // Vector
    pub const m_vMinBounds: usize = 0x10; // Vector
    pub const m_vMaxBounds: usize = 0x1C; // Vector
    pub const m_flMinimumDistance: usize = 0x28; // float
    pub const m_ChildNodeIndices: usize = 0x30; // CUtlVector<int32_t>
    pub const m_worldNodePrefix: usize = 0x48; // CUtlString
}

pub mod PermEntityLumpData_t {
    pub const m_name: usize = 0x8; // CUtlString
    pub const m_hammerUniqueId: usize = 0x10; // CUtlString
    pub const m_childLumps: usize = 0x18; // CUtlVector<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>>
    pub const m_entityKeyValues: usize = 0x30; // CUtlLeanVector<EntityKeyValueData_t>
}

pub mod SceneObject_t {
    pub const m_nObjectID: usize = 0x0; // uint32_t
    pub const m_vTransform: usize = 0x4; // Vector4D[3]
    pub const m_flFadeStartDistance: usize = 0x34; // float
    pub const m_flFadeEndDistance: usize = 0x38; // float
    pub const m_vTintColor: usize = 0x3C; // Vector4D
    pub const m_skin: usize = 0x50; // CUtlString
    pub const m_nObjectTypeFlags: usize = 0x58; // ObjectTypeFlags_t
    pub const m_vLightingOrigin: usize = 0x5C; // Vector
    pub const m_nOverlayRenderOrder: usize = 0x68; // int16_t
    pub const m_nLODOverride: usize = 0x6A; // int16_t
    pub const m_nCubeMapPrecomputedHandshake: usize = 0x6C; // int32_t
    pub const m_nLightProbeVolumePrecomputedHandshake: usize = 0x70; // int32_t
    pub const m_renderableModel: usize = 0x78; // CStrongHandle<InfoForResourceTypeCModel>
    pub const m_renderable: usize = 0x80; // CStrongHandle<InfoForResourceTypeCRenderMesh>
}

pub mod VMapResourceData_t {
}

pub mod VoxelVisBlockOffset_t {
    pub const m_nOffset: usize = 0x0; // uint32_t
    pub const m_nElementCount: usize = 0x4; // uint32_t
}

pub mod WorldBuilderParams_t {
    pub const m_flMinDrawVolumeSize: usize = 0x0; // float
    pub const m_bBuildBakedLighting: usize = 0x4; // bool
    pub const m_vLightmapUvScale: usize = 0x8; // Vector2D
    pub const m_nCompileTimestamp: usize = 0x10; // uint64_t
    pub const m_nCompileFingerprint: usize = 0x18; // uint64_t
}

pub mod WorldNodeOnDiskBufferData_t {
    pub const m_nElementCount: usize = 0x0; // int32_t
    pub const m_nElementSizeInBytes: usize = 0x4; // int32_t
    pub const m_inputLayoutFields: usize = 0x8; // CUtlVector<RenderInputLayoutField_t>
    pub const m_pData: usize = 0x20; // CUtlVector<uint8_t>
}

pub mod WorldNode_t {
    pub const m_sceneObjects: usize = 0x0; // CUtlVector<SceneObject_t>
    pub const m_infoOverlays: usize = 0x18; // CUtlVector<InfoOverlayData_t>
    pub const m_visClusterMembership: usize = 0x30; // CUtlVector<uint16_t>
    pub const m_aggregateSceneObjects: usize = 0x48; // CUtlVector<AggregateSceneObject_t>
    pub const m_clutterSceneObjects: usize = 0x60; // CUtlVector<ClutterSceneObject_t>
    pub const m_extraVertexStreamOverrides: usize = 0x78; // CUtlVector<ExtraVertexStreamOverride_t>
    pub const m_materialOverrides: usize = 0x90; // CUtlVector<MaterialOverride_t>
    pub const m_extraVertexStreams: usize = 0xA8; // CUtlVector<WorldNodeOnDiskBufferData_t>
    pub const m_layerNames: usize = 0xC0; // CUtlVector<CUtlString>
    pub const m_sceneObjectLayerIndices: usize = 0xD8; // CUtlVector<uint8_t>
    pub const m_overlayLayerIndices: usize = 0xF0; // CUtlVector<uint8_t>
    pub const m_grassFileName: usize = 0x108; // CUtlString
    pub const m_nodeLightingInfo: usize = 0x110; // BakedLightingInfo_t
}

pub mod World_t {
    pub const m_builderParams: usize = 0x0; // WorldBuilderParams_t
    pub const m_worldNodes: usize = 0x20; // CUtlVector<NodeData_t>
    pub const m_worldLightingInfo: usize = 0x38; // BakedLightingInfo_t
    pub const m_entityLumps: usize = 0x68; // CUtlVector<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>>
}