// Generated using https://github.com/a2x/cs2-dumper
// 2024-04-04 13:40:42.514657500 UTC

namespace CS2Dumper.Schemas {
    // Module: worldrenderer.dll
    // Classes count: 47
    // Enums count: 0
    public static class WorldrendererDll {
        // Parent: None
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class EntityIOConnectionData_t {
            public const nint m_outputName = 0x0; // CUtlString
            public const nint m_targetType = 0x8; // uint32
            public const nint m_targetName = 0x10; // CUtlString
            public const nint m_inputName = 0x18; // CUtlString
            public const nint m_overrideParam = 0x20; // CUtlString
            public const nint m_flDelay = 0x28; // float32
            public const nint m_nTimesToFire = 0x2C; // int32
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class EntityKeyValueData_t {
            public const nint m_connections = 0x8; // CUtlVector<EntityIOConnectionData_t>
            public const nint m_keyValuesData = 0x20; // CUtlBinaryBlock
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class PermEntityLumpData_t {
            public const nint m_name = 0x8; // CUtlString
            public const nint m_hammerUniqueId = 0x10; // CUtlString
            public const nint m_childLumps = 0x18; // CUtlVector<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>>
            public const nint m_entityKeyValues = 0x30; // CUtlLeanVector<EntityKeyValueData_t>
        }
        // Parent: None
        // Fields count: 14
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class SceneObject_t {
            public const nint m_nObjectID = 0x0; // uint32
            public const nint m_vTransform = 0x4; // Vector4D[3]
            public const nint m_flFadeStartDistance = 0x34; // float32
            public const nint m_flFadeEndDistance = 0x38; // float32
            public const nint m_vTintColor = 0x3C; // Vector4D
            public const nint m_skin = 0x50; // CUtlString
            public const nint m_nObjectTypeFlags = 0x58; // ObjectTypeFlags_t
            public const nint m_vLightingOrigin = 0x5C; // 
            public const nint m_nOverlayRenderOrder = 0x68; // int16
            public const nint m_nLODOverride = 0x6A; // int16
            public const nint m_nCubeMapPrecomputedHandshake = 0x6C; // int32
            public const nint m_nLightProbeVolumePrecomputedHandshake = 0x70; // int32
            public const nint m_renderableModel = 0x78; // CStrongHandle<InfoForResourceTypeCModel>
            public const nint m_renderable = 0x80; // CStrongHandle<InfoForResourceTypeCRenderMesh>
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class BaseSceneObjectOverride_t {
            public const nint m_nSceneObjectIndex = 0x0; // uint32
        }
        // Parent: BaseSceneObjectOverride_t
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class ExtraVertexStreamOverride_t {
            public const nint m_nSubSceneObject = 0x4; // uint32
            public const nint m_nDrawCallIndex = 0x8; // uint32
            public const nint m_nAdditionalMeshDrawPrimitiveFlags = 0xC; // MeshDrawPrimitiveFlags_t
            public const nint m_extraBufferBinding = 0x10; // CRenderBufferBinding
        }
        // Parent: BaseSceneObjectOverride_t
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class MaterialOverride_t {
            public const nint m_nSubSceneObject = 0x4; // uint32
            public const nint m_nDrawCallIndex = 0x8; // uint32
            public const nint m_pMaterial = 0x10; // CStrongHandle<InfoForResourceTypeIMaterial2>
        }
        // Parent: None
        // Fields count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class InfoOverlayData_t {
            public const nint m_transform = 0x0; // matrix3x4_t
            public const nint m_flWidth = 0x30; // float32
            public const nint m_flHeight = 0x34; // float32
            public const nint m_flDepth = 0x38; // float32
            public const nint m_vUVStart = 0x3C; // Vector2D
            public const nint m_vUVEnd = 0x44; // Vector2D
            public const nint m_pMaterial = 0x50; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_nRenderOrder = 0x58; // int32
            public const nint m_vTintColor = 0x5C; // Vector4D
            public const nint m_nSequenceOverride = 0x6C; // int32
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class BakedLightingInfo_t {
            public const nint m_nLightmapVersionNumber = 0x0; // uint32
            public const nint m_nLightmapGameVersionNumber = 0x4; // uint32
            public const nint m_vLightmapUvScale = 0x8; // Vector2D
            public const nint m_bHasLightmaps = 0x10; // bool
            public const nint m_lightMaps = 0x18; // CUtlVector<CStrongHandle<InfoForResourceTypeCTextureBase>>
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class WorldNodeOnDiskBufferData_t {
            public const nint m_nElementCount = 0x0; // int32
            public const nint m_nElementSizeInBytes = 0x4; // int32
            public const nint m_inputLayoutFields = 0x8; // CUtlVector<RenderInputLayoutField_t>
            public const nint m_pData = 0x20; // CUtlVector<uint8>
        }
        // Parent: None
        // Fields count: 9
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class AggregateMeshInfo_t {
            public const nint m_nVisClusterMemberOffset = 0x0; // uint32
            public const nint m_nVisClusterMemberCount = 0x4; // uint8
            public const nint m_bHasTransform = 0x5; // bool
            public const nint m_nDrawCallIndex = 0x6; // int16
            public const nint m_nLODSetupIndex = 0x8; // int16
            public const nint m_nLODGroupMask = 0xA; // uint8
            public const nint m_vTintColor = 0xB; // Color
            public const nint m_objectFlags = 0x10; // ObjectTypeFlags_t
            public const nint m_nLightProbeVolumePrecomputedHandshake = 0x14; // int32
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class AggregateLODSetup_t {
            public const nint m_vLODOrigin = 0x0; // 
            public const nint m_fMaxObjectScale = 0xC; // float32
            public const nint m_fSwitchDistances = 0x10; // CUtlVectorFixedGrowable<float32>
        }
        // Parent: None
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class AggregateSceneObject_t {
            public const nint m_allFlags = 0x0; // ObjectTypeFlags_t
            public const nint m_anyFlags = 0x4; // ObjectTypeFlags_t
            public const nint m_nLayer = 0x8; // int16
            public const nint m_aggregateMeshes = 0x10; // CUtlVector<AggregateMeshInfo_t>
            public const nint m_lodSetups = 0x28; // CUtlVector<AggregateLODSetup_t>
            public const nint m_visClusterMembership = 0x40; // CUtlVector<uint16>
            public const nint m_fragmentTransforms = 0x58; // CUtlVector<matrix3x4_t>
            public const nint m_renderableModel = 0x70; // CStrongHandle<InfoForResourceTypeCModel>
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class ClutterTile_t {
            public const nint m_nFirstInstance = 0x0; // uint32
            public const nint m_nLastInstance = 0x4; // uint32
            public const nint m_BoundsWs = 0x8; // AABB_t
        }
        // Parent: None
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class ClutterSceneObject_t {
            public const nint m_Bounds = 0x0; // AABB_t
            public const nint m_flags = 0x18; // ObjectTypeFlags_t
            public const nint m_nLayer = 0x1C; // int16
            public const nint m_instancePositions = 0x20; // CUtlVector<Vector>
            public const nint m_instanceScales = 0x50; // CUtlVector<float32>
            public const nint m_instanceTintSrgb = 0x68; // CUtlVector<Color>
            public const nint m_tiles = 0x80; // CUtlVector<ClutterTile_t>
            public const nint m_renderableModel = 0x98; // CStrongHandle<InfoForResourceTypeCModel>
        }
        // Parent: None
        // Fields count: 13
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class WorldNode_t {
            public const nint m_sceneObjects = 0x0; // CUtlVector<SceneObject_t>
            public const nint m_infoOverlays = 0x18; // CUtlVector<InfoOverlayData_t>
            public const nint m_visClusterMembership = 0x30; // CUtlVector<uint16>
            public const nint m_aggregateSceneObjects = 0x48; // CUtlVector<AggregateSceneObject_t>
            public const nint m_clutterSceneObjects = 0x60; // CUtlVector<ClutterSceneObject_t>
            public const nint m_extraVertexStreamOverrides = 0x78; // CUtlVector<ExtraVertexStreamOverride_t>
            public const nint m_materialOverrides = 0x90; // CUtlVector<MaterialOverride_t>
            public const nint m_extraVertexStreams = 0xA8; // CUtlVector<WorldNodeOnDiskBufferData_t>
            public const nint m_layerNames = 0xC0; // CUtlVector<CUtlString>
            public const nint m_sceneObjectLayerIndices = 0xD8; // CUtlVector<uint8>
            public const nint m_overlayLayerIndices = 0xF0; // CUtlVector<uint8>
            public const nint m_grassFileName = 0x108; // CUtlString
            public const nint m_nodeLightingInfo = 0x110; // BakedLightingInfo_t
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class WorldBuilderParams_t {
            public const nint m_flMinDrawVolumeSize = 0x0; // float32
            public const nint m_bBuildBakedLighting = 0x4; // bool
            public const nint m_vLightmapUvScale = 0x8; // Vector2D
            public const nint m_nCompileTimestamp = 0x10; // uint64
            public const nint m_nCompileFingerprint = 0x18; // uint64
        }
        // Parent: None
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class NodeData_t {
            public const nint m_nParent = 0x0; // int32
            public const nint m_vOrigin = 0x4; // 
            public const nint m_vMinBounds = 0x10; // 
            public const nint m_vMaxBounds = 0x1C; // 
            public const nint m_flMinimumDistance = 0x28; // float32
            public const nint m_ChildNodeIndices = 0x30; // CUtlVector<int32>
            public const nint m_worldNodePrefix = 0x48; // CUtlString
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class World_t {
            public const nint m_builderParams = 0x0; // WorldBuilderParams_t
            public const nint m_worldNodes = 0x20; // CUtlVector<NodeData_t>
            public const nint m_worldLightingInfo = 0x38; // BakedLightingInfo_t
            public const nint m_entityLumps = 0x68; // CUtlVector<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>>
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VoxelVisBlockOffset_t {
            public const nint m_nOffset = 0x0; // uint32
            public const nint m_nElementCount = 0x4; // uint32
        }
        // Parent: None
        // Fields count: 13
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVoxelVisibility {
            public const nint m_nBaseClusterCount = 0x40; // uint32
            public const nint m_nPVSBytesPerCluster = 0x44; // uint32
            public const nint m_vMinBounds = 0x48; // 
            public const nint m_vMaxBounds = 0x54; // 
            public const nint m_flGridSize = 0x60; // float32
            public const nint m_nSkyVisibilityCluster = 0x64; // uint32
            public const nint m_nSunVisibilityCluster = 0x68; // uint32
            public const nint m_NodeBlock = 0x6C; // VoxelVisBlockOffset_t
            public const nint m_RegionBlock = 0x74; // VoxelVisBlockOffset_t
            public const nint m_EnclosedClusterListBlock = 0x7C; // VoxelVisBlockOffset_t
            public const nint m_EnclosedClustersBlock = 0x84; // VoxelVisBlockOffset_t
            public const nint m_MasksBlock = 0x8C; // VoxelVisBlockOffset_t
            public const nint m_nVisBlocks = 0x94; // VoxelVisBlockOffset_t
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeVMapResourceData_t {
        }
        // Parent: None
        // Fields count: 11
        //
        // Metadata:
        // NetworkVarNames: m_nameStringableIndex (int32)
        public static class CEntityIdentity {
            public const nint m_nameStringableIndex = 0x14; // int32
            public const nint m_name = 0x18; // CUtlSymbolLarge
            public const nint m_designerName = 0x20; // CUtlSymbolLarge
            public const nint m_flags = 0x30; // uint32
            public const nint m_worldGroupId = 0x38; // WorldGroupId_t
            public const nint m_fDataObjectTypes = 0x3C; // uint32
            public const nint m_PathIndex = 0x40; // ChangeAccessorFieldPathIndex_t
            public const nint m_pPrev = 0x58; // CEntityIdentity*
            public const nint m_pNext = 0x60; // CEntityIdentity*
            public const nint m_pPrevByClass = 0x68; // CEntityIdentity*
            public const nint m_pNextByClass = 0x70; // CEntityIdentity*
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // NetworkVarNames: m_pEntity (CEntityIdentity*)
        // NetworkVarNames: m_CScriptComponent (CScriptComponent::Storage_t)
        public static class CEntityInstance {
            public const nint m_iszPrivateVScripts = 0x8; // CUtlSymbolLarge
            public const nint m_pEntity = 0x10; // CEntityIdentity*
            public const nint m_CScriptComponent = 0x28; // CScriptComponent*
            public const nint m_bVisibleinPVS = 0x30; // bool
        }
        // Parent: CVoiceContainerBase
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVoiceContainerRandomSampler {
            public const nint m_flLoudAmplitude = 0x60; // float32
            public const nint m_flLoudAmplitudeJitter = 0x64; // float32
            public const nint m_flSoftAmplitude = 0x68; // float32
            public const nint m_flSoftAmplitudeJitter = 0x6C; // float32
            public const nint m_flLoudTimeJitter = 0x70; // float32
            public const nint m_flSoftTimeJitter = 0x74; // float32
            public const nint m_grainResources = 0x78; // CUtlVector<CStrongHandle<InfoForResourceTypeCVoiceContainerBase>>
        }
        // Parent: None
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VMixFilterDesc_t {
            public const nint m_nFilterType = 0x0; // VMixFilterType_t
            public const nint m_nFilterSlope = 0x2; // VMixFilterSlope_t
            public const nint m_bEnabled = 0x3; // bool
            public const nint m_fldbGain = 0x4; // float32
            public const nint m_flCutoffFreq = 0x8; // float32
            public const nint m_flQ = 0xC; // float32
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VMixEQ8Desc_t {
            public const nint m_stages = 0x0; // VMixFilterDesc_t[8]
        }
        // Parent: None
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VMixDelayDesc_t {
            public const nint m_feedbackFilter = 0x0; // VMixFilterDesc_t
            public const nint m_bEnableFilter = 0x10; // bool
            public const nint m_flDelay = 0x14; // float32
            public const nint m_flDirectGain = 0x18; // float32
            public const nint m_flDelayGain = 0x1C; // float32
            public const nint m_flFeedbackGain = 0x20; // float32
            public const nint m_flWidth = 0x24; // float32
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VMixPannerDesc_t {
            public const nint m_type = 0x0; // VMixPannerType_t
            public const nint m_flStrength = 0x4; // float32
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCWorldNode {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCPanoramaStyle {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCDACGameDefsData {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyCustomEditor
        public static class CParticleCollectionFloatInput {
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class ParticlePreviewBodyGroup_t {
            public const nint m_bodyGroupName = 0x0; // CUtlString
            public const nint m_nValue = 0x8; // int32
        }
        // Parent: None
        // Fields count: 16
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class ParticlePreviewState_t {
            public const nint m_previewModel = 0x0; // CUtlString
            public const nint m_nModSpecificData = 0x8; // uint32
            public const nint m_groundType = 0xC; // PetGroundType_t
            public const nint m_sequenceName = 0x10; // CUtlString
            public const nint m_nFireParticleOnSequenceFrame = 0x18; // int32
            public const nint m_hitboxSetName = 0x20; // CUtlString
            public const nint m_materialGroupName = 0x28; // CUtlString
            public const nint m_vecBodyGroups = 0x30; // CUtlVector<ParticlePreviewBodyGroup_t>
            public const nint m_flPlaybackSpeed = 0x48; // float32
            public const nint m_flParticleSimulationRate = 0x4C; // float32
            public const nint m_bShouldDrawHitboxes = 0x50; // bool
            public const nint m_bShouldDrawAttachments = 0x51; // bool
            public const nint m_bShouldDrawAttachmentNames = 0x52; // bool
            public const nint m_bShouldDrawControlPointAxes = 0x53; // bool
            public const nint m_bAnimationNonLooping = 0x54; // bool
            public const nint m_vecPreviewGravity = 0x58; // 
        }
        // Parent: None
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class ParticleControlPointDriver_t {
            public const nint m_iControlPoint = 0x0; // int32
            public const nint m_iAttachType = 0x4; // ParticleAttachment_t
            public const nint m_attachmentName = 0x8; // CUtlString
            public const nint m_vecOffset = 0x10; // 
            public const nint m_angOffset = 0x1C; // QAngle
            public const nint m_entityName = 0x28; // CUtlString
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class IParticleSystemDefinition {
        }
        // Parent: None
        // Fields count: 18
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CParticleVisibilityInputs {
            public const nint m_flCameraBias = 0x0; // float32
            public const nint m_nCPin = 0x4; // int32
            public const nint m_flProxyRadius = 0x8; // float32
            public const nint m_flInputMin = 0xC; // float32
            public const nint m_flInputMax = 0x10; // float32
            public const nint m_flNoPixelVisibilityFallback = 0x14; // float32
            public const nint m_flDistanceInputMin = 0x18; // float32
            public const nint m_flDistanceInputMax = 0x1C; // float32
            public const nint m_flDotInputMin = 0x20; // float32
            public const nint m_flDotInputMax = 0x24; // float32
            public const nint m_bDotCPAngles = 0x28; // bool
            public const nint m_bDotCameraAngles = 0x29; // bool
            public const nint m_flAlphaScaleMin = 0x2C; // float32
            public const nint m_flAlphaScaleMax = 0x30; // float32
            public const nint m_flRadiusScaleMin = 0x34; // float32
            public const nint m_flRadiusScaleMax = 0x38; // float32
            public const nint m_flRadiusScaleFOVBase = 0x3C; // float32
            public const nint m_bRightEye = 0x40; // bool
        }
        // Parent: None
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPathParameters {
            public const nint m_nStartControlPointNumber = 0x0; // int32
            public const nint m_nEndControlPointNumber = 0x4; // int32
            public const nint m_nBulgeControl = 0x8; // int32
            public const nint m_flBulge = 0xC; // float32
            public const nint m_flMidPoint = 0x10; // float32
            public const nint m_vStartPointOffset = 0x14; // 
            public const nint m_vMidPointOffset = 0x20; // 
            public const nint m_vEndOffset = 0x2C; // 
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class ParticleChildrenInfo_t {
            public const nint m_ChildRef = 0x0; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
            public const nint m_flDelay = 0x8; // float32
            public const nint m_bEndCap = 0xC; // bool
            public const nint m_bDisableChild = 0xD; // bool
            public const nint m_nDetailLevel = 0x10; // ParticleDetailLevel_t
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class ModelReference_t {
            public const nint m_model = 0x0; // CStrongHandle<InfoForResourceTypeCModel>
            public const nint m_flRelativeProbabilityOfSpawn = 0x8; // float32
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class SequenceWeightedList_t {
            public const nint m_nSequence = 0x0; // int32
            public const nint m_flRelativeWeight = 0x4; // float32
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CollisionGroupContext_t {
            public const nint m_nCollisionGroupNumber = 0x0; // int32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CParticleFunctionPreEmission {
            public const nint m_bRunOnce = 0x1C0; // bool
        }
        // Parent: CParticleFunction
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CParticleFunctionInitializer {
            public const nint m_nAssociatedEmitterIndex = 0x1B8; // int32
        }
        // Parent: CParticleFunction
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CParticleFunctionForce {
        }
        // Parent: CParticleFunction
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CParticleFunctionRenderer {
            public const nint VisibilityInputs = 0x1B8; // CParticleVisibilityInputs
            public const nint m_bCannotBeRefracted = 0x1FC; // bool
            public const nint m_bSkipRenderingOnMobile = 0x1FD; // bool
        }
    }
}
