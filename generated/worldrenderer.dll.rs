#[allow(non_snake_case, non_upper_case_globals)]
pub mod AggregateLODSetup_t {
    pub const m_vLODOrigin: usize = 0x0;
    pub const m_fMaxObjectScale: usize = 0xc;
    pub const m_nLODMask: usize = 0x10;
    pub const m_fSwitchDistances: usize = 0x18;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod AggregateMeshInfo_t {
    pub const m_nVisClusterMemberOffset: usize = 0x0;
    pub const m_nVisClusterMemberCount: usize = 0x4;
    pub const m_bHasTransform: usize = 0x5;
    pub const m_nDrawCallIndex: usize = 0x6;
    pub const m_nLODSetupIndex: usize = 0x8;
    pub const m_nLODGroupMask: usize = 0xa;
    pub const m_vTintColor: usize = 0xb;
    pub const m_objectFlags: usize = 0x10;
    pub const m_nLightProbeVolumePrecomputedHandshake: usize = 0x14;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod AggregateSceneObject_t {
    pub const m_allFlags: usize = 0x0;
    pub const m_anyFlags: usize = 0x4;
    pub const m_nLayer: usize = 0x8;
    pub const m_aggregateMeshes: usize = 0x10;
    pub const m_lodSetups: usize = 0x28;
    pub const m_visClusterMembership: usize = 0x40;
    pub const m_fragmentTransforms: usize = 0x58;
    pub const m_renderableModel: usize = 0x70;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod BakedLightingInfo_t {
    pub const m_nLightmapVersionNumber: usize = 0x0;
    pub const m_nLightmapGameVersionNumber: usize = 0x4;
    pub const m_vLightmapUvScale: usize = 0x8;
    pub const m_bHasLightmaps: usize = 0x10;
    pub const m_lightMaps: usize = 0x18;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod BaseSceneObjectOverride_t {
    pub const m_nSceneObjectIndex: usize = 0x0;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod CEntityIdentity {
    pub const m_nameStringableIndex: usize = 0x14;
    pub const m_name: usize = 0x18;
    pub const m_designerName: usize = 0x20;
    pub const m_flags: usize = 0x30;
    pub const m_worldGroupId: usize = 0x38;
    pub const m_fDataObjectTypes: usize = 0x3c;
    pub const m_PathIndex: usize = 0x40;
    pub const m_pPrev: usize = 0x58;
    pub const m_pNext: usize = 0x60;
    pub const m_pPrevByClass: usize = 0x68;
    pub const m_pNextByClass: usize = 0x70;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod CEntityInstance {
    pub const m_iszPrivateVScripts: usize = 0x8;
    pub const m_pEntity: usize = 0x10;
    pub const m_CScriptComponent: usize = 0x28;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod CScriptComponent {
    pub const m_scriptClassName: usize = 0x30;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod CVoxelVisibility {
    pub const m_nBaseClusterCount: usize = 0x40;
    pub const m_nPVSBytesPerCluster: usize = 0x44;
    pub const m_vMinBounds: usize = 0x48;
    pub const m_vMaxBounds: usize = 0x54;
    pub const m_flGridSize: usize = 0x60;
    pub const m_nSkyVisibilityCluster: usize = 0x64;
    pub const m_nSunVisibilityCluster: usize = 0x68;
    pub const m_NodeBlock: usize = 0x6c;
    pub const m_RegionBlock: usize = 0x74;
    pub const m_EnclosedClusterListBlock: usize = 0x7c;
    pub const m_EnclosedClustersBlock: usize = 0x84;
    pub const m_MasksBlock: usize = 0x8c;
    pub const m_nVisBlocks: usize = 0x94;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod ClutterSceneObject_t {
    pub const m_Bounds: usize = 0x0;
    pub const m_flags: usize = 0x18;
    pub const m_nLayer: usize = 0x1c;
    pub const m_instancePositions: usize = 0x20;
    pub const m_instanceScales: usize = 0x50;
    pub const m_instanceTintSrgb: usize = 0x68;
    pub const m_tiles: usize = 0x80;
    pub const m_renderableModel: usize = 0x98;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod ClutterTile_t {
    pub const m_nFirstInstance: usize = 0x0;
    pub const m_nLastInstance: usize = 0x4;
    pub const m_BoundsWs: usize = 0x8;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod EntityIOConnectionData_t {
    pub const m_outputName: usize = 0x0;
    pub const m_targetType: usize = 0x8;
    pub const m_targetName: usize = 0x10;
    pub const m_inputName: usize = 0x18;
    pub const m_overrideParam: usize = 0x20;
    pub const m_flDelay: usize = 0x28;
    pub const m_nTimesToFire: usize = 0x2c;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod EntityKeyValueData_t {
    pub const m_connections: usize = 0x8;
    pub const m_keyValuesData: usize = 0x20;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod ExtraVertexStreamOverride_t {
    pub const m_nSubSceneObject: usize = 0x4;
    pub const m_nDrawCallIndex: usize = 0x8;
    pub const m_nAdditionalMeshDrawPrimitiveFlags: usize = 0xc;
    pub const m_extraBufferBinding: usize = 0x10;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod InfoOverlayData_t {
    pub const m_transform: usize = 0x0;
    pub const m_flWidth: usize = 0x30;
    pub const m_flHeight: usize = 0x34;
    pub const m_flDepth: usize = 0x38;
    pub const m_vUVStart: usize = 0x3c;
    pub const m_vUVEnd: usize = 0x44;
    pub const m_pMaterial: usize = 0x50;
    pub const m_nRenderOrder: usize = 0x58;
    pub const m_vTintColor: usize = 0x5c;
    pub const m_nSequenceOverride: usize = 0x6c;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod MaterialOverride_t {
    pub const m_nSubSceneObject: usize = 0x4;
    pub const m_nDrawCallIndex: usize = 0x8;
    pub const m_pMaterial: usize = 0x10;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod NodeData_t {
    pub const m_nParent: usize = 0x0;
    pub const m_vOrigin: usize = 0x4;
    pub const m_vMinBounds: usize = 0x10;
    pub const m_vMaxBounds: usize = 0x1c;
    pub const m_flMinimumDistance: usize = 0x28;
    pub const m_ChildNodeIndices: usize = 0x30;
    pub const m_worldNodePrefix: usize = 0x48;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod PermEntityLumpData_t {
    pub const m_name: usize = 0x8;
    pub const m_hammerUniqueId: usize = 0x10;
    pub const m_childLumps: usize = 0x18;
    pub const m_entityKeyValues: usize = 0x30;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod SceneObject_t {
    pub const m_nObjectID: usize = 0x0;
    pub const m_vTransform: usize = 0x4;
    pub const m_flFadeStartDistance: usize = 0x34;
    pub const m_flFadeEndDistance: usize = 0x38;
    pub const m_vTintColor: usize = 0x3c;
    pub const m_skin: usize = 0x50;
    pub const m_nObjectTypeFlags: usize = 0x58;
    pub const m_vLightingOrigin: usize = 0x5c;
    pub const m_nLightGroup: usize = 0x68;
    pub const m_nOverlayRenderOrder: usize = 0x6c;
    pub const m_nLODOverride: usize = 0x6e;
    pub const m_nCubeMapPrecomputedHandshake: usize = 0x70;
    pub const m_nLightProbeVolumePrecomputedHandshake: usize = 0x74;
    pub const m_renderableModel: usize = 0x80;
    pub const m_renderable: usize = 0x88;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod VoxelVisBlockOffset_t {
    pub const m_nOffset: usize = 0x0;
    pub const m_nElementCount: usize = 0x4;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod WorldBuilderParams_t {
    pub const m_flMinDrawVolumeSize: usize = 0x0;
    pub const m_bBuildBakedLighting: usize = 0x4;
    pub const m_vLightmapUvScale: usize = 0x8;
    pub const m_nCompileTimestamp: usize = 0x10;
    pub const m_nCompileFingerprint: usize = 0x18;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod WorldNodeOnDiskBufferData_t {
    pub const m_nElementCount: usize = 0x0;
    pub const m_nElementSizeInBytes: usize = 0x4;
    pub const m_inputLayoutFields: usize = 0x8;
    pub const m_pData: usize = 0x20;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod WorldNode_t {
    pub const m_sceneObjects: usize = 0x0;
    pub const m_infoOverlays: usize = 0x18;
    pub const m_visClusterMembership: usize = 0x30;
    pub const m_aggregateSceneObjects: usize = 0x48;
    pub const m_clutterSceneObjects: usize = 0x60;
    pub const m_extraVertexStreamOverrides: usize = 0x78;
    pub const m_materialOverrides: usize = 0x90;
    pub const m_extraVertexStreams: usize = 0xa8;
    pub const m_layerNames: usize = 0xc0;
    pub const m_sceneObjectLayerIndices: usize = 0xd8;
    pub const m_overlayLayerIndices: usize = 0xf0;
    pub const m_grassFileName: usize = 0x108;
    pub const m_nodeLightingInfo: usize = 0x110;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod World_t {
    pub const m_builderParams: usize = 0x0;
    pub const m_worldNodes: usize = 0x20;
    pub const m_worldLightingInfo: usize = 0x38;
    pub const m_entityLumps: usize = 0x68;
}