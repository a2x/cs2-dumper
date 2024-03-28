// Generated using https://github.com/a2x/cs2-dumper
// 2024-03-29 08:41:42.046663095 UTC

namespace CS2Dumper.Schemas {
    // Module: libanimationsystem.so
    // Classes count: 255
    // Enums count: 0
    public static class Libanimationsystem {
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class BoneDemoCaptureSettings_t {
            public const nint m_boneName = 0x0; // CUtlString
            public const nint m_flChainLength = 0x8; // float32
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class IKDemoCaptureSettings_t {
            public const nint m_parentBoneName = 0x0; // CUtlString
            public const nint m_eMode = 0x8; // IKChannelMode
            public const nint m_ikChainName = 0x10; // CUtlString
            public const nint m_oneBoneStart = 0x18; // CUtlString
            public const nint m_oneBoneEnd = 0x20; // CUtlString
        }
        // Parent: None
        // Fields count: 16
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimDemoCaptureSettings {
            public const nint m_rangeBoneChainLength = 0x0; // Vector2D
            public const nint m_rangeMaxSplineErrorRotation = 0x8; // Vector2D
            public const nint m_flMaxSplineErrorTranslation = 0x10; // float32
            public const nint m_flMaxSplineErrorScale = 0x14; // float32
            public const nint m_flIkRotation_MaxSplineError = 0x18; // float32
            public const nint m_flIkTranslation_MaxSplineError = 0x1C; // float32
            public const nint m_flMaxQuantizationErrorRotation = 0x20; // float32
            public const nint m_flMaxQuantizationErrorTranslation = 0x24; // float32
            public const nint m_flMaxQuantizationErrorScale = 0x28; // float32
            public const nint m_flIkRotation_MaxQuantizationError = 0x2C; // float32
            public const nint m_flIkTranslation_MaxQuantizationError = 0x30; // float32
            public const nint m_baseSequence = 0x38; // CUtlString
            public const nint m_nBaseSequenceFrame = 0x40; // int32
            public const nint m_boneSelectionMode = 0x44; // EDemoBoneSelectionMode
            public const nint m_bones = 0x48; // CUtlVector<BoneDemoCaptureSettings_t>
            public const nint m_ikChains = 0x60; // CUtlVector<IKDemoCaptureSettings_t>
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimReplayFrame {
            public const nint m_inputDataBlocks = 0x10; // CUtlVector<CUtlBinaryBlock>
            public const nint m_instanceData = 0x28; // CUtlBinaryBlock
            public const nint m_startingLocalToWorldTransform = 0x40; // CTransform
            public const nint m_localToWorldTransform = 0x60; // CTransform
            public const nint m_timeStamp = 0x80; // float32
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimGraphDebugReplay {
            public const nint m_animGraphFileName = 0x40; // CUtlString
            public const nint m_frameList = 0x48; // CUtlVector<CSmartPtr<CAnimReplayFrame>>
            public const nint m_startIndex = 0x60; // int32
            public const nint m_writeIndex = 0x64; // int32
            public const nint m_frameCount = 0x68; // int32
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimGraphModelBinding {
            public const nint m_modelName = 0x8; // CUtlString
            public const nint m_pSharedData = 0x10; // CSmartPtr<CAnimUpdateSharedData>
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CAnimInputDamping {
            public const nint m_speedFunction = 0x8; // DampingSpeedFunction
            public const nint m_fSpeedScale = 0xC; // float32
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimParamHandle {
            public const nint m_type = 0x0; // AnimParamType_t
            public const nint m_index = 0x1; // uint8
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimParamHandleMap {
            public const nint m_list = 0x0; // CUtlHashtable<uint16,int16>
        }
        // Parent: None
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimParameterManagerUpdater {
            public const nint m_parameters = 0x18; // CUtlVector<CSmartPtr<CAnimParameterBase>>
            public const nint m_idToIndexMap = 0x30; // CUtlHashtable<AnimParamID,int32>
            public const nint m_nameToIndexMap = 0x50; // CUtlHashtable<CUtlString,int32>
            public const nint m_indexToHandle = 0x70; // CUtlVector<CAnimParamHandle>
            public const nint m_autoResetParams = 0x88; // CUtlVector<CUtlPair<CAnimParamHandle,CAnimVariant>>
            public const nint m_autoResetMap = 0xA0; // CUtlHashtable<CAnimParamHandle,int16>
        }
        // Parent: None
        // Fields count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimUpdateSharedData {
            public const nint m_nodes = 0x10; // CUtlVector<CSmartPtr<CAnimUpdateNodeBase>>
            public const nint m_nodeIndexMap = 0x28; // CUtlHashtable<CAnimNodePath,int32>
            public const nint m_components = 0x48; // CUtlVector<CSmartPtr<CAnimComponentUpdater>>
            public const nint m_pParamListUpdater = 0x60; // CSmartPtr<CAnimParameterManagerUpdater>
            public const nint m_pTagManagerUpdater = 0x68; // CSmartPtr<CAnimTagManagerUpdater>
            public const nint m_scriptManager = 0x70; // CSmartPtr<CAnimScriptManager>
            public const nint m_settings = 0x78; // CAnimGraphSettingsManager
            public const nint m_pStaticPoseCache = 0xA8; // CSmartPtr<CStaticPoseCacheBuilder>
            public const nint m_pSkeleton = 0xB0; // CSmartPtr<CAnimSkeleton>
            public const nint m_rootNodePath = 0xB8; // CAnimNodePath
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CBlendCurve {
            public const nint m_flControlPoint1 = 0x0; // float32
            public const nint m_flControlPoint2 = 0x4; // float32
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class ParamSpanSample_t {
            public const nint m_value = 0x0; // CAnimVariant
            public const nint m_flCycle = 0x14; // float32
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class ParamSpan_t {
            public const nint m_samples = 0x0; // CUtlVector<ParamSpanSample_t>
            public const nint m_hParam = 0x18; // CAnimParamHandle
            public const nint m_eParamType = 0x1A; // AnimParamType_t
            public const nint m_flStartCycle = 0x1C; // float32
            public const nint m_flEndCycle = 0x20; // float32
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CParamSpanUpdater {
            public const nint m_spans = 0x0; // CUtlVector<ParamSpan_t>
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimGraphSettingsGroup {
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimGraphSettingsManager {
            public const nint m_settingsGroups = 0x18; // CUtlVector<CSmartPtr<CAnimGraphSettingsGroup>>
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CCachedPose {
            public const nint m_transforms = 0x8; // CUtlVector<CTransform>
            public const nint m_morphWeights = 0x20; // CUtlVector<float32>
            public const nint m_hSequence = 0x38; // HSequence
            public const nint m_flCycle = 0x3C; // float32
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CStaticPoseCache {
            public const nint m_poses = 0x10; // CUtlVector<CCachedPose>
            public const nint m_nBoneCount = 0x28; // int32
            public const nint m_nMorphCount = 0x2C; // int32
        }
        // Parent: CStaticPoseCache
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CStaticPoseCacheBuilder {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimActionUpdater {
        }
        // Parent: CAnimActionUpdater
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CEmitTagActionUpdater {
            public const nint m_nTagIndex = 0x18; // int32
            public const nint m_bIsZeroDuration = 0x1C; // bool
        }
        // Parent: CAnimActionUpdater
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSetParameterActionUpdater {
            public const nint m_hParam = 0x18; // CAnimParamHandle
            public const nint m_value = 0x1A; // CAnimVariant
        }
        // Parent: CAnimActionUpdater
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CToggleComponentActionUpdater {
            public const nint m_componentID = 0x18; // AnimComponentID
            public const nint m_bSetEnabled = 0x1C; // bool
        }
        // Parent: CAnimActionUpdater
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CExpressionActionUpdater {
            public const nint m_hParam = 0x18; // CAnimParamHandle
            public const nint m_eParamType = 0x1A; // AnimParamType_t
            public const nint m_hScript = 0x1C; // AnimScriptHandle
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimTagBase {
            public const nint m_name = 0x18; // CGlobalSymbol
            public const nint m_group = 0x20; // CGlobalSymbol
            public const nint m_tagID = 0x28; // AnimTagID
            public const nint m_bIsReferenced = 0x40; // bool
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimTagManagerUpdater {
            public const nint m_tags = 0x18; // CUtlVector<CSmartPtr<CAnimTagBase>>
        }
        // Parent: CAnimTagBase
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CAudioAnimTag {
            public const nint m_clipName = 0x50; // CUtlString
            public const nint m_attachmentName = 0x58; // CUtlString
            public const nint m_flVolume = 0x60; // float32
            public const nint m_bStopWhenTagEnds = 0x64; // bool
            public const nint m_bStopWhenGraphEnds = 0x65; // bool
            public const nint m_bPlayOnServer = 0x66; // bool
            public const nint m_bPlayOnClient = 0x67; // bool
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyElementNameFn
        public static class CBodyGroupSetting {
            public const nint m_BodyGroupName = 0x0; // CUtlString
            public const nint m_nBodyGroupOption = 0x8; // int32
        }
        // Parent: CAnimTagBase
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CBodyGroupAnimTag {
            public const nint m_nPriority = 0x50; // int32
            public const nint m_bodyGroupSettings = 0x58; // CUtlVector<CBodyGroupSetting>
        }
        // Parent: CAnimTagBase
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CClothSettingsAnimTag {
            public const nint m_flStiffness = 0x50; // float32
            public const nint m_flEaseIn = 0x54; // float32
            public const nint m_flEaseOut = 0x58; // float32
            public const nint m_nVertexSet = 0x60; // CUtlString
        }
        // Parent: CAnimTagBase
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CFootFallAnimTag {
            public const nint m_foot = 0x50; // FootFallTagFoot_t
        }
        // Parent: CAnimTagBase
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CFootstepLandedAnimTag {
            public const nint m_FootstepType = 0x50; // FootstepLandedFootSoundType_t
            public const nint m_OverrideSoundName = 0x58; // CUtlString
            public const nint m_DebugAnimSourceString = 0x60; // CUtlString
            public const nint m_BoneName = 0x68; // CUtlString
        }
        // Parent: CAnimTagBase
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CMaterialAttributeAnimTag {
            public const nint m_AttributeName = 0x50; // CUtlString
            public const nint m_AttributeType = 0x58; // MatterialAttributeTagType_t
            public const nint m_flValue = 0x5C; // float32
            public const nint m_Color = 0x60; // Color
        }
        // Parent: CAnimTagBase
        // Fields count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CParticleAnimTag {
            public const nint m_hParticleSystem = 0x50; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
            public const nint m_particleSystemName = 0x58; // CUtlString
            public const nint m_configName = 0x60; // CUtlString
            public const nint m_bDetachFromOwner = 0x68; // bool
            public const nint m_bStopWhenTagEnds = 0x69; // bool
            public const nint m_bTagEndStopIsInstant = 0x6A; // bool
            public const nint m_attachmentName = 0x70; // CUtlString
            public const nint m_attachmentType = 0x78; // ParticleAttachment_t
            public const nint m_attachmentCP1Name = 0x80; // CUtlString
            public const nint m_attachmentCP1Type = 0x88; // ParticleAttachment_t
        }
        // Parent: CAnimTagBase
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CRagdollAnimTag {
            public const nint m_nPoseControl = 0x50; // AnimPoseControl
            public const nint m_flFrequency = 0x54; // float32
            public const nint m_flDampingRatio = 0x58; // float32
            public const nint m_flDecayDuration = 0x5C; // float32
            public const nint m_flDecayBias = 0x60; // float32
            public const nint m_bDestroy = 0x64; // bool
        }
        // Parent: CAnimTagBase
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CSequenceFinishedAnimTag {
            public const nint m_sequenceName = 0x50; // CUtlString
        }
        // Parent: CAnimTagBase
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CStringAnimTag {
        }
        // Parent: CAnimTagBase
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CTaskStatusAnimTag {
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimComponentUpdater {
            public const nint m_name = 0x18; // CUtlString
            public const nint m_id = 0x20; // AnimComponentID
            public const nint m_networkMode = 0x24; // AnimNodeNetworkMode
            public const nint m_bStartEnabled = 0x28; // bool
        }
        // Parent: CAnimComponentUpdater
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimScriptComponentUpdater {
            public const nint m_hScript = 0x30; // AnimScriptHandle
        }
        // Parent: CAnimComponentUpdater
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CCPPScriptComponentUpdater {
            public const nint m_scriptsToRun = 0x30; // CUtlVector<CGlobalSymbol>
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CDampedValueUpdateItem {
            public const nint m_damping = 0x0; // CAnimInputDamping
            public const nint m_hParamIn = 0x18; // CAnimParamHandle
            public const nint m_hParamOut = 0x1A; // CAnimParamHandle
        }
        // Parent: CAnimComponentUpdater
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CDampedValueComponentUpdater {
            public const nint m_items = 0x30; // CUtlVector<CDampedValueUpdateItem>
        }
        // Parent: CAnimComponentUpdater
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CDemoSettingsComponentUpdater {
            public const nint m_settings = 0x30; // CAnimDemoCaptureSettings
        }
        // Parent: CAnimComponentUpdater
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CLODComponentUpdater {
            public const nint m_nServerLOD = 0x30; // int32
        }
        // Parent: CAnimComponentUpdater
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CLookComponentUpdater {
            public const nint m_hLookHeading = 0x34; // CAnimParamHandle
            public const nint m_hLookHeadingVelocity = 0x36; // CAnimParamHandle
            public const nint m_hLookPitch = 0x38; // CAnimParamHandle
            public const nint m_hLookDistance = 0x3A; // CAnimParamHandle
            public const nint m_hLookDirection = 0x3C; // CAnimParamHandle
            public const nint m_hLookTarget = 0x3E; // CAnimParamHandle
            public const nint m_hLookTargetWorldSpace = 0x40; // CAnimParamHandle
            public const nint m_bNetworkLookTarget = 0x42; // bool
        }
        // Parent: CAnimComponentUpdater
        // Fields count: 9
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CMovementComponentUpdater {
            public const nint m_motors = 0x30; // CUtlVector<CSmartPtr<CAnimMotorUpdaterBase>>
            public const nint m_facingDamping = 0x48; // CAnimInputDamping
            public const nint m_eDefaultFacingMode = 0x58; // FacingMode
            public const nint m_nDefaultMotorIndex = 0x64; // int32
            public const nint m_flDefaultRunSpeed = 0x68; // float32
            public const nint m_bMoveVarsDisabled = 0x6C; // bool
            public const nint m_bNetworkPath = 0x6D; // bool
            public const nint m_bNetworkFacing = 0x6E; // bool
            public const nint m_paramHandles = 0x6F; // CAnimParamHandle[30]
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class WeightList {
            public const nint m_name = 0x0; // CUtlString
            public const nint m_weights = 0x8; // CUtlVector<float32>
        }
        // Parent: CAnimComponentUpdater
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CRagdollComponentUpdater {
            public const nint m_ragdollNodePaths = 0x30; // CUtlVector<CAnimNodePath>
            public const nint m_boneIndices = 0x48; // CUtlVector<int32>
            public const nint m_boneNames = 0x60; // CUtlVector<CUtlString>
            public const nint m_weightLists = 0x78; // CUtlVector<WeightList>
            public const nint m_flSpringFrequencyMin = 0x90; // float32
            public const nint m_flSpringFrequencyMax = 0x94; // float32
            public const nint m_flMaxStretch = 0x98; // float32
            public const nint m_bSolidCollisionAtZeroWeight = 0x9C; // bool
        }
        // Parent: CAnimComponentUpdater
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSlopeComponentUpdater {
            public const nint m_flTraceDistance = 0x34; // float32
            public const nint m_hSlopeAngle = 0x38; // CAnimParamHandle
            public const nint m_hSlopeAngleFront = 0x3A; // CAnimParamHandle
            public const nint m_hSlopeAngleSide = 0x3C; // CAnimParamHandle
            public const nint m_hSlopeHeading = 0x3E; // CAnimParamHandle
            public const nint m_hSlopeNormal = 0x40; // CAnimParamHandle
            public const nint m_hSlopeNormal_WorldSpace = 0x42; // CAnimParamHandle
        }
        // Parent: CAnimComponentUpdater
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CStateMachineComponentUpdater {
            public const nint m_stateMachine = 0x30; // CAnimStateMachineUpdater
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CMotionDataSet {
            public const nint m_groups = 0x0; // CUtlVector<CMotionGraphGroup>
            public const nint m_nDimensionCount = 0x18; // int32
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CMotionGraphGroup {
            public const nint m_searchDB = 0x0; // CMotionSearchDB
            public const nint m_motionGraphs = 0xB8; // CUtlVector<CSmartPtr<CMotionGraph>>
            public const nint m_motionGraphConfigs = 0xD0; // CUtlVector<CMotionGraphConfig>
            public const nint m_sampleToConfig = 0xE8; // CUtlVector<int32>
            public const nint m_hIsActiveScript = 0x100; // AnimScriptHandle
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class SampleCode {
            public const nint m_subCode = 0x0; // uint8[8]
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class MotionDBIndex {
            public const nint m_nIndex = 0x0; // uint32
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVectorQuantizer {
            public const nint m_centroidVectors = 0x0; // CUtlVector<float32>
            public const nint m_nCentroids = 0x18; // int32
            public const nint m_nDimensions = 0x1C; // int32
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CProductQuantizer {
            public const nint m_subQuantizers = 0x0; // CUtlVector<CVectorQuantizer>
            public const nint m_nDimensions = 0x18; // int32
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CMotionSearchNode {
            public const nint m_children = 0x0; // CUtlVector<CMotionSearchNode*>
            public const nint m_quantizer = 0x18; // CVectorQuantizer
            public const nint m_sampleCodes = 0x38; // CUtlVector<CUtlVector<SampleCode>>
            public const nint m_sampleIndices = 0x50; // CUtlVector<CUtlVector<int32>>
            public const nint m_selectableSamples = 0x68; // CUtlVector<int32>
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CMotionSearchDB {
            public const nint m_rootNode = 0x0; // CMotionSearchNode
            public const nint m_residualQuantizer = 0x80; // CProductQuantizer
            public const nint m_codeIndices = 0xA0; // CUtlVector<MotionDBIndex>
        }
        // Parent: None
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CMotionGraph {
            public const nint m_paramSpans = 0x10; // CParamSpanUpdater
            public const nint m_tags = 0x28; // CUtlVector<TagSpan_t>
            public const nint m_pRootNode = 0x40; // CSmartPtr<CMotionNode>
            public const nint m_nParameterCount = 0x48; // int32
            public const nint m_nConfigStartIndex = 0x4C; // int32
            public const nint m_nConfigCount = 0x50; // int32
            public const nint m_bLoop = 0x54; // bool
        }
        // Parent: CMotionGraph
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CEditableMotionGraph {
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CMotionNode {
            public const nint m_name = 0x18; // CUtlString
            public const nint m_id = 0x20; // AnimNodeID
        }
        // Parent: CMotionNode
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CMotionNodeSequence {
            public const nint m_tags = 0x28; // CUtlVector<TagSpan_t>
            public const nint m_hSequence = 0x40; // HSequence
            public const nint m_flPlaybackSpeed = 0x44; // float32
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class MotionBlendItem {
            public const nint m_pChild = 0x0; // CSmartPtr<CMotionNode>
            public const nint m_flKeyValue = 0x8; // float32
        }
        // Parent: CMotionNode
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CMotionNodeBlend1D {
            public const nint m_blendItems = 0x28; // CUtlVector<MotionBlendItem>
            public const nint m_nParamIndex = 0x40; // int32
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CMotionMetricEvaluator {
            public const nint m_means = 0x18; // CUtlVector<float32>
            public const nint m_standardDeviations = 0x30; // CUtlVector<float32>
            public const nint m_flWeight = 0x48; // float32
            public const nint m_nDimensionStartIndex = 0x4C; // int32
        }
        // Parent: CMotionMetricEvaluator
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CBlockSelectionMetricEvaluator {
        }
        // Parent: CMotionMetricEvaluator
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CBonePositionMetricEvaluator {
            public const nint m_nBoneIndex = 0x50; // int32
        }
        // Parent: CMotionMetricEvaluator
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CBoneVelocityMetricEvaluator {
            public const nint m_nBoneIndex = 0x50; // int32
        }
        // Parent: CMotionMetricEvaluator
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CCurrentRotationVelocityMetricEvaluator {
        }
        // Parent: CMotionMetricEvaluator
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CCurrentVelocityMetricEvaluator {
        }
        // Parent: CMotionMetricEvaluator
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CDistanceRemainingMetricEvaluator {
            public const nint m_flMaxDistance = 0x50; // float32
            public const nint m_flMinDistance = 0x54; // float32
            public const nint m_flStartGoalFilterDistance = 0x58; // float32
            public const nint m_flMaxGoalOvershootScale = 0x5C; // float32
            public const nint m_bFilterFixedMinDistance = 0x60; // bool
            public const nint m_bFilterGoalDistance = 0x61; // bool
            public const nint m_bFilterGoalOvershoot = 0x62; // bool
        }
        // Parent: CMotionMetricEvaluator
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CFootCycleMetricEvaluator {
            public const nint m_footIndices = 0x50; // CUtlVector<int32>
        }
        // Parent: CMotionMetricEvaluator
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CFootPositionMetricEvaluator {
            public const nint m_footIndices = 0x50; // CUtlVector<int32>
            public const nint m_bIgnoreSlope = 0x68; // bool
        }
        // Parent: CMotionMetricEvaluator
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CFutureFacingMetricEvaluator {
            public const nint m_flDistance = 0x50; // float32
            public const nint m_flTime = 0x54; // float32
        }
        // Parent: CMotionMetricEvaluator
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CFutureVelocityMetricEvaluator {
            public const nint m_flDistance = 0x50; // float32
            public const nint m_flStoppingDistance = 0x54; // float32
            public const nint m_flTargetSpeed = 0x58; // float32
            public const nint m_eMode = 0x5C; // VelocityMetricMode
        }
        // Parent: CMotionMetricEvaluator
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPathMetricEvaluator {
            public const nint m_pathTimeSamples = 0x50; // CUtlVector<float32>
            public const nint m_flDistance = 0x68; // float32
            public const nint m_bExtrapolateMovement = 0x6C; // bool
            public const nint m_flMinExtrapolationSpeed = 0x70; // float32
        }
        // Parent: CMotionMetricEvaluator
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CStepsRemainingMetricEvaluator {
            public const nint m_footIndices = 0x50; // CUtlVector<int32>
            public const nint m_flMinStepsRemaining = 0x68; // float32
        }
        // Parent: CMotionMetricEvaluator
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CTimeRemainingMetricEvaluator {
            public const nint m_bMatchByTimeRemaining = 0x50; // bool
            public const nint m_flMaxTimeRemaining = 0x54; // float32
            public const nint m_bFilterByTimeRemaining = 0x58; // bool
            public const nint m_flMinTimeRemaining = 0x5C; // float32
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimMotorUpdaterBase {
            public const nint m_name = 0x10; // CUtlString
            public const nint m_bDefault = 0x18; // bool
        }
        // Parent: CAnimMotorUpdaterBase
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPathAnimMotorUpdaterBase {
            public const nint m_bLockToPath = 0x19; // bool
        }
        // Parent: CPathAnimMotorUpdaterBase
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CDampedPathAnimMotorUpdater {
            public const nint m_flAnticipationTime = 0x20; // float32
            public const nint m_flMinSpeedScale = 0x24; // float32
            public const nint m_hAnticipationPosParam = 0x28; // CAnimParamHandle
            public const nint m_hAnticipationHeadingParam = 0x2A; // CAnimParamHandle
            public const nint m_flSpringConstant = 0x2C; // float32
            public const nint m_flMinSpringTension = 0x30; // float32
            public const nint m_flMaxSpringTension = 0x34; // float32
        }
        // Parent: CPathAnimMotorUpdaterBase
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPathAnimMotorUpdater {
        }
        // Parent: CAnimMotorUpdaterBase
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPlayerInputAnimMotorUpdater {
            public const nint m_sampleTimes = 0x20; // CUtlVector<float32>
            public const nint m_flSpringConstant = 0x3C; // float32
            public const nint m_flAnticipationDistance = 0x40; // float32
            public const nint m_hAnticipationPosParam = 0x44; // CAnimParamHandle
            public const nint m_hAnticipationHeadingParam = 0x46; // CAnimParamHandle
            public const nint m_bUseAcceleration = 0x48; // bool
        }
        // Parent: None
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class AimMatrixOpFixedSettings_t {
            public const nint m_attachment = 0x0; // CAnimAttachment
            public const nint m_damping = 0x80; // CAnimInputDamping
            public const nint m_poseCacheHandles = 0x90; // CPoseHandle[10]
            public const nint m_eBlendMode = 0xB8; // AimMatrixBlendMode
            public const nint m_fAngleIncrement = 0xBC; // float32
            public const nint m_nSequenceMaxFrame = 0xC0; // int32
            public const nint m_nBoneMaskIndex = 0xC4; // int32
            public const nint m_bTargetIsPosition = 0xC8; // bool
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FollowAttachmentSettings_t {
            public const nint m_attachment = 0x0; // CAnimAttachment
            public const nint m_boneIndex = 0x80; // int32
            public const nint m_bMatchTranslation = 0x84; // bool
            public const nint m_bMatchRotation = 0x85; // bool
        }
        // Parent: None
        // Fields count: 18
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FootLockPoseOpFixedSettings {
            public const nint m_footInfo = 0x0; // CUtlVector<FootFixedData_t>
            public const nint m_hipDampingSettings = 0x18; // CAnimInputDamping
            public const nint m_nHipBoneIndex = 0x28; // int32
            public const nint m_ikSolverType = 0x2C; // IKSolverType
            public const nint m_bApplyTilt = 0x30; // bool
            public const nint m_bApplyHipDrop = 0x31; // bool
            public const nint m_bAlwaysUseFallbackHinge = 0x32; // bool
            public const nint m_bApplyFootRotationLimits = 0x33; // bool
            public const nint m_bApplyLegTwistLimits = 0x34; // bool
            public const nint m_flMaxFootHeight = 0x38; // float32
            public const nint m_flExtensionScale = 0x3C; // float32
            public const nint m_flMaxLegTwist = 0x40; // float32
            public const nint m_bEnableLockBreaking = 0x44; // bool
            public const nint m_flLockBreakTolerance = 0x48; // float32
            public const nint m_flLockBlendTime = 0x4C; // float32
            public const nint m_bEnableStretching = 0x50; // bool
            public const nint m_flMaxStretchAmount = 0x54; // float32
            public const nint m_flStretchExtensionScale = 0x58; // float32
        }
        // Parent: None
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FootPinningPoseOpFixedData_t {
            public const nint m_footInfo = 0x0; // CUtlVector<FootFixedData_t>
            public const nint m_flBlendTime = 0x18; // float32
            public const nint m_flLockBreakDistance = 0x1C; // float32
            public const nint m_flMaxLegTwist = 0x20; // float32
            public const nint m_nHipBoneIndex = 0x24; // int32
            public const nint m_bApplyLegTwistLimits = 0x28; // bool
            public const nint m_bApplyFootRotationLimits = 0x29; // bool
        }
        // Parent: None
        // Fields count: 17
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class HitReactFixedSettings_t {
            public const nint m_nWeightListIndex = 0x0; // int32
            public const nint m_nEffectedBoneCount = 0x4; // int32
            public const nint m_flMaxImpactForce = 0x8; // float32
            public const nint m_flMinImpactForce = 0xC; // float32
            public const nint m_flWhipImpactScale = 0x10; // float32
            public const nint m_flCounterRotationScale = 0x14; // float32
            public const nint m_flDistanceFadeScale = 0x18; // float32
            public const nint m_flPropagationScale = 0x1C; // float32
            public const nint m_flWhipDelay = 0x20; // float32
            public const nint m_flSpringStrength = 0x24; // float32
            public const nint m_flWhipSpringStrength = 0x28; // float32
            public const nint m_flMaxAngleRadians = 0x2C; // float32
            public const nint m_nHipBoneIndex = 0x30; // int32
            public const nint m_flHipBoneTranslationScale = 0x34; // float32
            public const nint m_flHipDipSpringStrength = 0x38; // float32
            public const nint m_flHipDipImpactScale = 0x3C; // float32
            public const nint m_flHipDipDelay = 0x40; // float32
        }
        // Parent: None
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class JiggleBoneSettings_t {
            public const nint m_nBoneIndex = 0x0; // int32
            public const nint m_flSpringStrength = 0x4; // float32
            public const nint m_flMaxTimeStep = 0x8; // float32
            public const nint m_flDamping = 0xC; // float32
            public const nint m_vBoundsMaxLS = 0x10; // Vector
            public const nint m_vBoundsMinLS = 0x1C; // Vector
            public const nint m_eSimSpace = 0x28; // JiggleBoneSimSpace
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class JiggleBoneSettingsList_t {
            public const nint m_boneSettings = 0x0; // CUtlVector<JiggleBoneSettings_t>
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class LookAtBone_t {
            public const nint m_index = 0x0; // int32
            public const nint m_weight = 0x4; // float32
        }
        // Parent: None
        // Fields count: 11
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class LookAtOpFixedSettings_t {
            public const nint m_attachment = 0x0; // CAnimAttachment
            public const nint m_damping = 0x80; // CAnimInputDamping
            public const nint m_bones = 0x90; // CUtlVector<LookAtBone_t>
            public const nint m_flYawLimit = 0xA8; // float32
            public const nint m_flPitchLimit = 0xAC; // float32
            public const nint m_flHysteresisInnerAngle = 0xB0; // float32
            public const nint m_flHysteresisOuterAngle = 0xB4; // float32
            public const nint m_bRotateYawForward = 0xB8; // bool
            public const nint m_bMaintainUpDirection = 0xB9; // bool
            public const nint m_bTargetIsPosition = 0xBA; // bool
            public const nint m_bUseHysteresis = 0xBB; // bool
        }
        // Parent: None
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class ChainToSolveData_t {
            public const nint m_nChainIndex = 0x0; // int32
            public const nint m_SolverSettings = 0x4; // IKSolverSettings_t
            public const nint m_TargetSettings = 0x10; // IKTargetSettings_t
            public const nint m_DebugSetting = 0x38; // SolveIKChainAnimNodeDebugSetting
            public const nint m_flDebugNormalizedValue = 0x3C; // float32
            public const nint m_vDebugOffset = 0x40; // VectorAligned
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class SolveIKChainPoseOpFixedSettings_t {
            public const nint m_ChainsToSolveData = 0x0; // CUtlVector<ChainToSolveData_t>
            public const nint m_bMatchTargetOrientation = 0x18; // bool
        }
        // Parent: None
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimParameterBase {
            public const nint m_name = 0x18; // CGlobalSymbol
            public const nint m_group = 0x20; // CUtlString
            public const nint m_id = 0x28; // AnimParamID
            public const nint m_componentName = 0x40; // CUtlString
            public const nint m_bNetworkingRequested = 0x60; // bool
            public const nint m_bIsReferenced = 0x61; // bool
        }
        // Parent: CAnimParameterBase
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CConcreteAnimParameter {
            public const nint m_previewButton = 0x64; // AnimParamButton_t
            public const nint m_eNetworkSetting = 0x68; // AnimParamNetworkSetting
            public const nint m_bUseMostRecentValue = 0x6C; // bool
            public const nint m_bAutoReset = 0x6D; // bool
            public const nint m_bGameWritable = 0x6E; // bool
            public const nint m_bGraphWritable = 0x6F; // bool
        }
        // Parent: CAnimParameterBase
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVirtualAnimParameter {
            public const nint m_expressionString = 0x68; // CUtlString
            public const nint m_eParamType = 0x70; // AnimParamType_t
        }
        // Parent: CConcreteAnimParameter
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CBoolAnimParameter {
            public const nint m_bDefaultValue = 0x70; // bool
        }
        // Parent: CConcreteAnimParameter
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CEnumAnimParameter {
            public const nint m_defaultValue = 0x78; // uint8
            public const nint m_enumOptions = 0x80; // CUtlVector<CUtlString>
        }
        // Parent: CConcreteAnimParameter
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CIntAnimParameter {
            public const nint m_defaultValue = 0x70; // int32
            public const nint m_minValue = 0x74; // int32
            public const nint m_maxValue = 0x78; // int32
        }
        // Parent: CConcreteAnimParameter
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CFloatAnimParameter {
            public const nint m_fDefaultValue = 0x70; // float32
            public const nint m_fMinValue = 0x74; // float32
            public const nint m_fMaxValue = 0x78; // float32
            public const nint m_bInterpolate = 0x7C; // bool
        }
        // Parent: CConcreteAnimParameter
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CVectorAnimParameter {
            public const nint m_defaultValue = 0x70; // Vector
            public const nint m_bInterpolate = 0x7C; // bool
        }
        // Parent: CConcreteAnimParameter
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CQuaternionAnimParameter {
            public const nint m_defaultValue = 0x70; // Quaternion
            public const nint m_bInterpolate = 0x80; // bool
        }
        // Parent: CConcreteAnimParameter
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CSymbolAnimParameter {
            public const nint m_defaultValue = 0x70; // CGlobalSymbol
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class ScriptInfo_t {
            public const nint m_code = 0x0; // CUtlString
            public const nint m_paramsModified = 0x8; // CUtlVector<CAnimParamHandle>
            public const nint m_proxyReadParams = 0x20; // CUtlVector<int32>
            public const nint m_proxyWriteParams = 0x38; // CUtlVector<int32>
            public const nint m_eScriptType = 0x50; // AnimScriptType
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimScriptManager {
            public const nint m_scriptInfo = 0x10; // CUtlVector<ScriptInfo_t>
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CStateActionUpdater {
            public const nint m_pAction = 0x0; // CSmartPtr<CAnimActionUpdater>
            public const nint m_eBehavior = 0x8; // StateActionBehavior
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CTransitionUpdateData {
            public const nint m_srcStateIndex = 0x0; // uint8
            public const nint m_destStateIndex = 0x1; // uint8
            public const nint m_bDisabled = 0x0; // bitfield:1
        }
        // Parent: None
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CStateUpdateData {
            public const nint m_name = 0x0; // CUtlString
            public const nint m_hScript = 0x8; // AnimScriptHandle
            public const nint m_transitionIndices = 0x10; // CUtlVector<int32>
            public const nint m_actions = 0x28; // CUtlVector<CStateActionUpdater>
            public const nint m_stateID = 0x40; // AnimStateID
            public const nint m_bIsStartState = 0x0; // bitfield:1
            public const nint m_bIsEndState = 0x0; // bitfield:1
            public const nint m_bIsPassthrough = 0x0; // bitfield:1
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimStateMachineUpdater {
            public const nint m_states = 0x8; // CUtlVector<CStateUpdateData>
            public const nint m_transitions = 0x20; // CUtlVector<CTransitionUpdateData>
            public const nint m_startStateIndex = 0x50; // int32
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimUpdateNodeRef {
            public const nint m_nodeIndex = 0x8; // int32
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimUpdateNodeBase {
            public const nint m_nodePath = 0x14; // CAnimNodePath
            public const nint m_networkMode = 0x44; // AnimNodeNetworkMode
            public const nint m_name = 0x50; // CUtlString
        }
        // Parent: CAnimUpdateNodeBase
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CBinaryUpdateNode {
            public const nint m_pChild1 = 0x58; // CAnimUpdateNodeRef
            public const nint m_pChild2 = 0x68; // CAnimUpdateNodeRef
            public const nint m_timingBehavior = 0x78; // BinaryNodeTiming
            public const nint m_flTimingBlend = 0x7C; // float32
            public const nint m_bResetChild1 = 0x80; // bool
            public const nint m_bResetChild2 = 0x81; // bool
        }
        // Parent: CAnimUpdateNodeBase
        // Fields count: 11
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CBlendUpdateNode {
            public const nint m_children = 0x60; // CUtlVector<CAnimUpdateNodeRef>
            public const nint m_sortedOrder = 0x78; // CUtlVector<uint8>
            public const nint m_targetValues = 0x90; // CUtlVector<float32>
            public const nint m_blendValueSource = 0xAC; // AnimValueSource
            public const nint m_paramIndex = 0xB0; // CAnimParamHandle
            public const nint m_damping = 0xB8; // CAnimInputDamping
            public const nint m_blendKeyType = 0xC8; // BlendKeyType
            public const nint m_bLockBlendOnReset = 0xCC; // bool
            public const nint m_bSyncCycles = 0xCD; // bool
            public const nint m_bLoop = 0xCE; // bool
            public const nint m_bLockWhenWaning = 0xCF; // bool
        }
        // Parent: None
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class BlendItem_t {
            public const nint m_tags = 0x0; // CUtlVector<TagSpan_t>
            public const nint m_pChild = 0x18; // CAnimUpdateNodeRef
            public const nint m_hSequence = 0x28; // HSequence
            public const nint m_vPos = 0x2C; // Vector2D
            public const nint m_flDuration = 0x34; // float32
            public const nint m_bUseCustomDuration = 0x38; // bool
        }
        // Parent: CAnimUpdateNodeBase
        // Fields count: 15
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CBlend2DUpdateNode {
            public const nint m_items = 0x60; // CUtlVector<BlendItem_t>
            public const nint m_tags = 0x78; // CUtlVector<TagSpan_t>
            public const nint m_paramSpans = 0x90; // CParamSpanUpdater
            public const nint m_nodeItemIndices = 0xA8; // CUtlVector<int32>
            public const nint m_damping = 0xC0; // CAnimInputDamping
            public const nint m_blendSourceX = 0xD0; // AnimValueSource
            public const nint m_paramX = 0xD4; // CAnimParamHandle
            public const nint m_blendSourceY = 0xD8; // AnimValueSource
            public const nint m_paramY = 0xDC; // CAnimParamHandle
            public const nint m_eBlendMode = 0xE0; // Blend2DMode
            public const nint m_playbackSpeed = 0xE4; // float32
            public const nint m_bLoop = 0xE8; // bool
            public const nint m_bLockBlendOnReset = 0xE9; // bool
            public const nint m_bLockWhenWaning = 0xEA; // bool
            public const nint m_bAnimEventsAndTagsOnMostWeightedOnly = 0xEB; // bool
        }
        // Parent: CBinaryUpdateNode
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CBoneMaskUpdateNode {
            public const nint m_nWeightListIndex = 0x88; // int32
            public const nint m_flRootMotionBlend = 0x8C; // float32
            public const nint m_blendSpace = 0x90; // BoneMaskBlendSpace
            public const nint m_footMotionTiming = 0x94; // BinaryNodeChildOption
            public const nint m_bUseBlendScale = 0x98; // bool
            public const nint m_blendValueSource = 0x9C; // AnimValueSource
            public const nint m_hBlendParameter = 0xA0; // CAnimParamHandle
        }
        // Parent: CAnimUpdateNodeBase
        // Fields count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CChoiceUpdateNode {
            public const nint m_children = 0x58; // CUtlVector<CAnimUpdateNodeRef>
            public const nint m_weights = 0x70; // CUtlVector<float32>
            public const nint m_blendTimes = 0x88; // CUtlVector<float32>
            public const nint m_choiceMethod = 0xA0; // ChoiceMethod
            public const nint m_choiceChangeMethod = 0xA4; // ChoiceChangeMethod
            public const nint m_blendMethod = 0xA8; // ChoiceBlendMethod
            public const nint m_blendTime = 0xAC; // float32
            public const nint m_bCrossFade = 0xB0; // bool
            public const nint m_bResetChosen = 0xB1; // bool
            public const nint m_bDontResetSameSelection = 0xB2; // bool
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CDirectPlaybackTagData {
            public const nint m_sequenceName = 0x0; // CUtlString
            public const nint m_tags = 0x8; // CUtlVector<TagSpan_t>
        }
        // Parent: None
        // Fields count: 11
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FootFixedData_t {
            public const nint m_vToeOffset = 0x0; // VectorAligned
            public const nint m_vHeelOffset = 0x10; // VectorAligned
            public const nint m_nTargetBoneIndex = 0x20; // int32
            public const nint m_nAnkleBoneIndex = 0x24; // int32
            public const nint m_nIKAnchorBoneIndex = 0x28; // int32
            public const nint m_ikChainIndex = 0x2C; // int32
            public const nint m_flMaxIKLength = 0x30; // float32
            public const nint m_nFootIndex = 0x34; // int32
            public const nint m_nTagIndex = 0x38; // int32
            public const nint m_flMaxRotationLeft = 0x3C; // float32
            public const nint m_flMaxRotationRight = 0x40; // float32
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class TraceSettings_t {
            public const nint m_flTraceHeight = 0x0; // float32
            public const nint m_flTraceRadius = 0x4; // float32
        }
        // Parent: None
        // Fields count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FootFixedSettings {
            public const nint m_traceSettings = 0x0; // TraceSettings_t
            public const nint m_vFootBaseBindPosePositionMS = 0x10; // VectorAligned
            public const nint m_flFootBaseLength = 0x20; // float32
            public const nint m_flMaxRotationLeft = 0x24; // float32
            public const nint m_flMaxRotationRight = 0x28; // float32
            public const nint m_footstepLandedTagIndex = 0x2C; // int32
            public const nint m_bEnableTracing = 0x30; // bool
            public const nint m_flTraceAngleBlend = 0x34; // float32
            public const nint m_nDisableTagIndex = 0x38; // int32
            public const nint m_nFootIndex = 0x3C; // int32
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FootStepTrigger {
            public const nint m_tags = 0x0; // CUtlVector<int32>
            public const nint m_nFootIndex = 0x18; // int32
            public const nint m_triggerPhase = 0x1C; // StepPhase
        }
        // Parent: CAnimUpdateNodeBase
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CLeafUpdateNode {
        }
        // Parent: CLeafUpdateNode
        // Fields count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CLeanMatrixUpdateNode {
            public const nint m_frameCorners = 0x5C; // int32[3][3]
            public const nint m_poses = 0x80; // CPoseHandle[9]
            public const nint m_damping = 0xA8; // CAnimInputDamping
            public const nint m_blendSource = 0xB8; // AnimVectorSource
            public const nint m_paramIndex = 0xBC; // CAnimParamHandle
            public const nint m_verticalAxis = 0xC0; // Vector
            public const nint m_horizontalAxis = 0xCC; // Vector
            public const nint m_hSequence = 0xD8; // HSequence
            public const nint m_flMaxValue = 0xDC; // float32
            public const nint m_nSequenceMaxFrame = 0xE0; // int32
        }
        // Parent: CLeafUpdateNode
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CMotionGraphUpdateNode {
            public const nint m_pMotionGraph = 0x58; // CSmartPtr<CMotionGraph>
        }
        // Parent: CLeafUpdateNode
        // Fields count: 23
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CMotionMatchingUpdateNode {
            public const nint m_dataSet = 0x58; // CMotionDataSet
            public const nint m_metrics = 0x78; // CUtlVector<CSmartPtr<CMotionMetricEvaluator>>
            public const nint m_weights = 0x90; // CUtlVector<float32>
            public const nint m_bSearchEveryTick = 0xE0; // bool
            public const nint m_flSearchInterval = 0xE4; // float32
            public const nint m_bSearchWhenClipEnds = 0xE8; // bool
            public const nint m_bSearchWhenGoalChanges = 0xE9; // bool
            public const nint m_blendCurve = 0xEC; // CBlendCurve
            public const nint m_flSampleRate = 0xF4; // float32
            public const nint m_flBlendTime = 0xF8; // float32
            public const nint m_bLockClipWhenWaning = 0xFC; // bool
            public const nint m_flSelectionThreshold = 0x100; // float32
            public const nint m_flReselectionTimeWindow = 0x104; // float32
            public const nint m_bEnableRotationCorrection = 0x108; // bool
            public const nint m_bGoalAssist = 0x109; // bool
            public const nint m_flGoalAssistDistance = 0x10C; // float32
            public const nint m_flGoalAssistTolerance = 0x110; // float32
            public const nint m_distanceScale_Damping = 0x118; // CAnimInputDamping
            public const nint m_flDistanceScale_OuterRadius = 0x128; // float32
            public const nint m_flDistanceScale_InnerRadius = 0x12C; // float32
            public const nint m_flDistanceScale_MaxScale = 0x130; // float32
            public const nint m_flDistanceScale_MinScale = 0x134; // float32
            public const nint m_bEnableDistanceScaling = 0x138; // bool
        }
        // Parent: CAnimUpdateNodeBase
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSelectorUpdateNode {
            public const nint m_children = 0x58; // CUtlVector<CAnimUpdateNodeRef>
            public const nint m_tags = 0x70; // CUtlVector<int8>
            public const nint m_blendCurve = 0x8C; // CBlendCurve
            public const nint m_flBlendTime = 0x94; // CAnimValue<float32>
            public const nint m_hParameter = 0x9C; // CAnimParamHandle
            public const nint m_eTagBehavior = 0xA0; // SelectorTagBehavior_t
            public const nint m_bResetOnChange = 0xA4; // bool
            public const nint m_bSyncCyclesOnChange = 0xA5; // bool
        }
        // Parent: CLeafUpdateNode
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSequenceUpdateNode {
            public const nint m_paramSpans = 0x60; // CParamSpanUpdater
            public const nint m_tags = 0x78; // CUtlVector<TagSpan_t>
            public const nint m_hSequence = 0x94; // HSequence
            public const nint m_playbackSpeed = 0x98; // float32
            public const nint m_duration = 0x9C; // float32
            public const nint m_bLoop = 0xA0; // bool
        }
        // Parent: CLeafUpdateNode
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSingleFrameUpdateNode {
            public const nint m_actions = 0x58; // CUtlVector<CSmartPtr<CAnimActionUpdater>>
            public const nint m_hPoseCacheHandle = 0x70; // CPoseHandle
            public const nint m_hSequence = 0x74; // HSequence
            public const nint m_flCycle = 0x78; // float32
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSolveIKTargetHandle_t {
            public const nint m_positionHandle = 0x0; // CAnimParamHandle
            public const nint m_orientationHandle = 0x2; // CAnimParamHandle
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class StanceInfo_t {
            public const nint m_vPosition = 0x0; // Vector
            public const nint m_flDirection = 0xC; // float32
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CStateNodeTransitionData {
            public const nint m_curve = 0x0; // CBlendCurve
            public const nint m_blendDuration = 0x8; // CAnimValue<float32>
            public const nint m_resetCycleValue = 0x10; // CAnimValue<float32>
            public const nint m_bReset = 0x0; // bitfield:1
            public const nint m_resetCycleOption = 0x0; // bitfield:3
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CStateNodeStateData {
            public const nint m_pChild = 0x0; // CAnimUpdateNodeRef
            public const nint m_bExclusiveRootMotion = 0x0; // bitfield:1
        }
        // Parent: CAnimUpdateNodeBase
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CStateMachineUpdateNode {
            public const nint m_stateMachine = 0x68; // CAnimStateMachineUpdater
            public const nint m_stateData = 0xC0; // CUtlVector<CStateNodeStateData>
            public const nint m_transitionData = 0xD8; // CUtlVector<CStateNodeTransitionData>
            public const nint m_bBlockWaningTags = 0xF4; // bool
            public const nint m_bLockStateWhenWaning = 0xF5; // bool
        }
        // Parent: CBinaryUpdateNode
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSubtractUpdateNode {
            public const nint m_footMotionTiming = 0x88; // BinaryNodeChildOption
            public const nint m_bApplyToFootMotion = 0x8C; // bool
            public const nint m_bApplyChannelsSeparately = 0x8D; // bool
            public const nint m_bUseModelSpace = 0x8E; // bool
        }
        // Parent: None
        // Fields count: 15
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class TwoBoneIKSettings_t {
            public const nint m_endEffectorType = 0x0; // IkEndEffectorType
            public const nint m_endEffectorAttachment = 0x10; // CAnimAttachment
            public const nint m_targetType = 0x90; // IkTargetType
            public const nint m_targetAttachment = 0xA0; // CAnimAttachment
            public const nint m_targetBoneIndex = 0x120; // int32
            public const nint m_hPositionParam = 0x124; // CAnimParamHandle
            public const nint m_hRotationParam = 0x126; // CAnimParamHandle
            public const nint m_bAlwaysUseFallbackHinge = 0x128; // bool
            public const nint m_vLsFallbackHingeAxis = 0x130; // VectorAligned
            public const nint m_nFixedBoneIndex = 0x140; // int32
            public const nint m_nMiddleBoneIndex = 0x144; // int32
            public const nint m_nEndBoneIndex = 0x148; // int32
            public const nint m_bMatchTargetOrientation = 0x14C; // bool
            public const nint m_bConstrainTwist = 0x14D; // bool
            public const nint m_flMaxTwist = 0x150; // float32
        }
        // Parent: CAnimUpdateNodeBase
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CUnaryUpdateNode {
            public const nint m_pChildNode = 0x58; // CAnimUpdateNodeRef
        }
        // Parent: CUnaryUpdateNode
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CWayPointHelperUpdateNode {
            public const nint m_flStartCycle = 0x6C; // float32
            public const nint m_flEndCycle = 0x70; // float32
            public const nint m_bOnlyGoals = 0x74; // bool
            public const nint m_bPreventOvershoot = 0x75; // bool
            public const nint m_bPreventUndershoot = 0x76; // bool
        }
        // Parent: CLeafUpdateNode
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CZeroPoseUpdateNode {
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class TagSpan_t {
            public const nint m_tagIndex = 0x0; // int32
            public const nint m_startCycle = 0x4; // float32
            public const nint m_endCycle = 0x8; // float32
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimNodePath {
            public const nint m_path = 0x0; // AnimNodeID[11]
            public const nint m_nCount = 0x2C; // int32
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class ConfigIndex {
            public const nint m_nGroup = 0x0; // uint16
            public const nint m_nConfig = 0x2; // uint16
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class MotionIndex {
            public const nint m_nGroup = 0x0; // uint16
            public const nint m_nMotion = 0x2; // uint16
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CMotionGraphConfig {
            public const nint m_paramValues = 0x0; // float32[4]
            public const nint m_flDuration = 0x10; // float32
            public const nint m_nMotionIndex = 0x14; // MotionIndex
            public const nint m_nSampleStart = 0x18; // int32
            public const nint m_nSampleCount = 0x1C; // int32
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPoseHandle {
            public const nint m_nIndex = 0x0; // uint16
            public const nint m_eType = 0x2; // PoseType_t
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimationGraphVisualizerPrimitiveBase {
            public const nint m_Type = 0x8; // CAnimationGraphVisualizerPrimitiveType
            public const nint m_OwningAnimNodePaths = 0xC; // AnimNodeID[11]
            public const nint m_nOwningAnimNodePathCount = 0x38; // int32
        }
        // Parent: CAnimationGraphVisualizerPrimitiveBase
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimationGraphVisualizerText {
            public const nint m_vWsPosition = 0x40; // VectorAligned
            public const nint m_Color = 0x50; // Color
            public const nint m_Text = 0x58; // CUtlString
        }
        // Parent: CAnimationGraphVisualizerPrimitiveBase
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimationGraphVisualizerSphere {
            public const nint m_vWsPosition = 0x40; // VectorAligned
            public const nint m_flRadius = 0x50; // float32
            public const nint m_Color = 0x54; // Color
        }
        // Parent: CAnimationGraphVisualizerPrimitiveBase
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimationGraphVisualizerLine {
            public const nint m_vWsPositionStart = 0x40; // VectorAligned
            public const nint m_vWsPositionEnd = 0x50; // VectorAligned
            public const nint m_Color = 0x60; // Color
        }
        // Parent: CAnimationGraphVisualizerPrimitiveBase
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimationGraphVisualizerPie {
            public const nint m_vWsCenter = 0x40; // VectorAligned
            public const nint m_vWsStart = 0x50; // VectorAligned
            public const nint m_vWsEnd = 0x60; // VectorAligned
            public const nint m_Color = 0x70; // Color
        }
        // Parent: CAnimationGraphVisualizerPrimitiveBase
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimationGraphVisualizerAxis {
            public const nint m_xWsTransform = 0x40; // CTransform
            public const nint m_flAxisSize = 0x60; // float32
        }
        // Parent: None
        // Fields count: 1
        public static class IKBoneNameAndIndex_t {
            public const nint m_Name = 0x0; // CUtlString
        }
        // Parent: None
        // Fields count: 2
        public static class IKSolverSettings_t {
            public const nint m_SolverType = 0x0; // IKSolverType
            public const nint m_nNumIterations = 0x4; // int32
        }
        // Parent: None
        // Fields count: 5
        public static class IKTargetSettings_t {
            public const nint m_TargetSource = 0x0; // IKTargetSource
            public const nint m_Bone = 0x8; // IKBoneNameAndIndex_t
            public const nint m_AnimgraphParameterNamePosition = 0x18; // AnimParamID
            public const nint m_AnimgraphParameterNameOrientation = 0x1C; // AnimParamID
            public const nint m_TargetCoordSystem = 0x20; // IKTargetCoordinateSystem
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyEditClassAsString
        public static class AnimNodeID {
            public const nint m_id = 0x0; // uint32
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyEditClassAsString
        public static class AnimNodeOutputID {
            public const nint m_id = 0x0; // uint32
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyEditClassAsString
        public static class AnimStateID {
            public const nint m_id = 0x0; // uint32
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyEditClassAsString
        public static class AnimParamID {
            public const nint m_id = 0x0; // uint32
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyEditClassAsString
        public static class AnimTagID {
            public const nint m_id = 0x0; // uint32
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyEditClassAsString
        public static class AnimComponentID {
            public const nint m_id = 0x0; // uint32
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyEditClassAsString
        public static class AnimScriptHandle {
            public const nint m_id = 0x0; // uint32
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimAttachment {
            public const nint m_influenceRotations = 0x0; // Quaternion[3]
            public const nint m_influenceOffsets = 0x30; // VectorAligned[3]
            public const nint m_influenceIndices = 0x60; // int32[3]
            public const nint m_influenceWeights = 0x6C; // float32[3]
            public const nint m_numInfluences = 0x78; // uint8
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VPhysics2ShapeDef_t {
            public const nint m_spheres = 0x0; // CUtlVector<RnSphereDesc_t>
            public const nint m_capsules = 0x18; // CUtlVector<RnCapsuleDesc_t>
            public const nint m_hulls = 0x30; // CUtlVector<RnHullDesc_t>
            public const nint m_meshes = 0x48; // CUtlVector<RnMeshDesc_t>
            public const nint m_CollisionAttributeIndices = 0x60; // CUtlVector<uint16>
        }
        // Parent: None
        // Fields count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VPhysXBodyPart_t {
            public const nint m_nFlags = 0x0; // uint32
            public const nint m_flMass = 0x4; // float32
            public const nint m_rnShape = 0x8; // VPhysics2ShapeDef_t
            public const nint m_nCollisionAttributeIndex = 0x80; // uint16
            public const nint m_nReserved = 0x82; // uint16
            public const nint m_flInertiaScale = 0x84; // float32
            public const nint m_flLinearDamping = 0x88; // float32
            public const nint m_flAngularDamping = 0x8C; // float32
            public const nint m_bOverrideMassCenter = 0x90; // bool
            public const nint m_vMassCenterOverride = 0x94; // Vector
        }
        // Parent: None
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VPhysXCollisionAttributes_t {
            public const nint m_CollisionGroup = 0x0; // uint32
            public const nint m_InteractAs = 0x8; // CUtlVector<uint32>
            public const nint m_InteractWith = 0x20; // CUtlVector<uint32>
            public const nint m_InteractExclude = 0x38; // CUtlVector<uint32>
            public const nint m_CollisionGroupString = 0x50; // CUtlString
            public const nint m_InteractAsStrings = 0x58; // CUtlVector<CUtlString>
            public const nint m_InteractWithStrings = 0x70; // CUtlVector<CUtlString>
            public const nint m_InteractExcludeStrings = 0x88; // CUtlVector<CUtlString>
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VPhysXRange_t {
            public const nint m_flMin = 0x0; // float32
            public const nint m_flMax = 0x4; // float32
        }
        // Parent: None
        // Fields count: 46
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VPhysXConstraintParams_t {
            public const nint m_nType = 0x0; // int8
            public const nint m_nTranslateMotion = 0x1; // int8
            public const nint m_nRotateMotion = 0x2; // int8
            public const nint m_nFlags = 0x3; // int8
            public const nint m_anchor = 0x4; // Vector[2]
            public const nint m_axes = 0x1C; // QuaternionStorage[2]
            public const nint m_maxForce = 0x3C; // float32
            public const nint m_maxTorque = 0x40; // float32
            public const nint m_linearLimitValue = 0x44; // float32
            public const nint m_linearLimitRestitution = 0x48; // float32
            public const nint m_linearLimitSpring = 0x4C; // float32
            public const nint m_linearLimitDamping = 0x50; // float32
            public const nint m_twistLowLimitValue = 0x54; // float32
            public const nint m_twistLowLimitRestitution = 0x58; // float32
            public const nint m_twistLowLimitSpring = 0x5C; // float32
            public const nint m_twistLowLimitDamping = 0x60; // float32
            public const nint m_twistHighLimitValue = 0x64; // float32
            public const nint m_twistHighLimitRestitution = 0x68; // float32
            public const nint m_twistHighLimitSpring = 0x6C; // float32
            public const nint m_twistHighLimitDamping = 0x70; // float32
            public const nint m_swing1LimitValue = 0x74; // float32
            public const nint m_swing1LimitRestitution = 0x78; // float32
            public const nint m_swing1LimitSpring = 0x7C; // float32
            public const nint m_swing1LimitDamping = 0x80; // float32
            public const nint m_swing2LimitValue = 0x84; // float32
            public const nint m_swing2LimitRestitution = 0x88; // float32
            public const nint m_swing2LimitSpring = 0x8C; // float32
            public const nint m_swing2LimitDamping = 0x90; // float32
            public const nint m_goalPosition = 0x94; // Vector
            public const nint m_goalOrientation = 0xA0; // QuaternionStorage
            public const nint m_goalAngularVelocity = 0xB0; // Vector
            public const nint m_driveSpringX = 0xBC; // float32
            public const nint m_driveSpringY = 0xC0; // float32
            public const nint m_driveSpringZ = 0xC4; // float32
            public const nint m_driveDampingX = 0xC8; // float32
            public const nint m_driveDampingY = 0xCC; // float32
            public const nint m_driveDampingZ = 0xD0; // float32
            public const nint m_driveSpringTwist = 0xD4; // float32
            public const nint m_driveSpringSwing = 0xD8; // float32
            public const nint m_driveSpringSlerp = 0xDC; // float32
            public const nint m_driveDampingTwist = 0xE0; // float32
            public const nint m_driveDampingSwing = 0xE4; // float32
            public const nint m_driveDampingSlerp = 0xE8; // float32
            public const nint m_solverIterationCount = 0xEC; // int32
            public const nint m_projectionLinearTolerance = 0xF0; // float32
            public const nint m_projectionAngularTolerance = 0xF4; // float32
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VPhysXConstraint2_t {
            public const nint m_nFlags = 0x0; // uint32
            public const nint m_nParent = 0x4; // uint16
            public const nint m_nChild = 0x6; // uint16
            public const nint m_params = 0x8; // VPhysXConstraintParams_t
        }
        // Parent: None
        // Fields count: 24
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VPhysXJoint_t {
            public const nint m_nType = 0x0; // uint16
            public const nint m_nBody1 = 0x2; // uint16
            public const nint m_nBody2 = 0x4; // uint16
            public const nint m_nFlags = 0x6; // uint16
            public const nint m_Frame1 = 0x10; // CTransform
            public const nint m_Frame2 = 0x30; // CTransform
            public const nint m_bEnableCollision = 0x50; // bool
            public const nint m_bEnableLinearLimit = 0x51; // bool
            public const nint m_LinearLimit = 0x54; // VPhysXRange_t
            public const nint m_bEnableLinearMotor = 0x5C; // bool
            public const nint m_vLinearTargetVelocity = 0x60; // Vector
            public const nint m_flMaxForce = 0x6C; // float32
            public const nint m_bEnableSwingLimit = 0x70; // bool
            public const nint m_SwingLimit = 0x74; // VPhysXRange_t
            public const nint m_bEnableTwistLimit = 0x7C; // bool
            public const nint m_TwistLimit = 0x80; // VPhysXRange_t
            public const nint m_bEnableAngularMotor = 0x88; // bool
            public const nint m_vAngularTargetVelocity = 0x8C; // Vector
            public const nint m_flMaxTorque = 0x98; // float32
            public const nint m_flLinearFrequency = 0x9C; // float32
            public const nint m_flLinearDampingRatio = 0xA0; // float32
            public const nint m_flAngularFrequency = 0xA4; // float32
            public const nint m_flAngularDampingRatio = 0xA8; // float32
            public const nint m_flFriction = 0xAC; // float32
        }
        // Parent: None
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class PhysSoftbodyDesc_t {
            public const nint m_ParticleBoneHash = 0x0; // CUtlVector<uint32>
            public const nint m_Particles = 0x18; // CUtlVector<RnSoftbodyParticle_t>
            public const nint m_Springs = 0x30; // CUtlVector<RnSoftbodySpring_t>
            public const nint m_Capsules = 0x48; // CUtlVector<RnSoftbodyCapsule_t>
            public const nint m_InitPose = 0x60; // CUtlVector<CTransform>
            public const nint m_ParticleBoneName = 0x78; // CUtlVector<CUtlString>
        }
        // Parent: None
        // Fields count: 16
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VPhysXAggregateData_t {
            public const nint m_nFlags = 0x0; // uint16
            public const nint m_nRefCounter = 0x2; // uint16
            public const nint m_bonesHash = 0x8; // CUtlVector<uint32>
            public const nint m_boneNames = 0x20; // CUtlVector<CUtlString>
            public const nint m_indexNames = 0x38; // CUtlVector<uint16>
            public const nint m_indexHash = 0x50; // CUtlVector<uint16>
            public const nint m_bindPose = 0x68; // CUtlVector<matrix3x4a_t>
            public const nint m_parts = 0x80; // CUtlVector<VPhysXBodyPart_t>
            public const nint m_constraints2 = 0x98; // CUtlVector<VPhysXConstraint2_t>
            public const nint m_joints = 0xB0; // CUtlVector<VPhysXJoint_t>
            public const nint m_pFeModel = 0xC8; // PhysFeModelDesc_t*
            public const nint m_boneParents = 0xD0; // CUtlVector<uint16>
            public const nint m_surfacePropertyHashes = 0xE8; // CUtlVector<uint32>
            public const nint m_collisionAttributes = 0x100; // CUtlVector<VPhysXCollisionAttributes_t>
            public const nint m_debugPartNames = 0x118; // CUtlVector<CUtlString>
            public const nint m_embeddedKeyvalues = 0x130; // CUtlString
        }
        // Parent: None
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPhysSurfacePropertiesPhysics {
            public const nint m_friction = 0x0; // float32
            public const nint m_elasticity = 0x4; // float32
            public const nint m_density = 0x8; // float32
            public const nint m_thickness = 0xC; // float32
            public const nint m_softContactFrequency = 0x10; // float32
            public const nint m_softContactDampingRatio = 0x14; // float32
            public const nint m_wheelDrag = 0x18; // float32
        }
        // Parent: None
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPhysSurfacePropertiesAudio {
            public const nint m_reflectivity = 0x0; // float32
            public const nint m_hardnessFactor = 0x4; // float32
            public const nint m_roughnessFactor = 0x8; // float32
            public const nint m_roughThreshold = 0xC; // float32
            public const nint m_hardThreshold = 0x10; // float32
            public const nint m_hardVelocityThreshold = 0x14; // float32
            public const nint m_flStaticImpactVolume = 0x18; // float32
            public const nint m_flOcclusionFactor = 0x1C; // float32
        }
        // Parent: None
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPhysSurfacePropertiesSoundNames {
            public const nint m_impactSoft = 0x0; // CUtlString
            public const nint m_impactHard = 0x8; // CUtlString
            public const nint m_scrapeSmooth = 0x10; // CUtlString
            public const nint m_scrapeRough = 0x18; // CUtlString
            public const nint m_bulletImpact = 0x20; // CUtlString
            public const nint m_rolling = 0x28; // CUtlString
            public const nint m_break = 0x30; // CUtlString
            public const nint m_strain = 0x38; // CUtlString
        }
        // Parent: None
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPhysSurfaceProperties {
            public const nint m_name = 0x0; // CUtlString
            public const nint m_nameHash = 0x8; // uint32
            public const nint m_baseNameHash = 0xC; // uint32
            public const nint m_bHidden = 0x18; // bool
            public const nint m_description = 0x20; // CUtlString
            public const nint m_physics = 0x28; // CPhysSurfacePropertiesPhysics
            public const nint m_audioSounds = 0x48; // CPhysSurfacePropertiesSoundNames
            public const nint m_audioParams = 0x88; // CPhysSurfacePropertiesAudio
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVPhysXSurfacePropertiesList {
            public const nint m_surfacePropertiesList = 0x0; // CUtlVector<CPhysSurfaceProperties*>
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class MaterialGroup_t {
            public const nint m_name = 0x0; // CUtlString
            public const nint m_materials = 0x8; // CUtlVector<CStrongHandle<InfoForResourceTypeIMaterial2>>
        }
        // Parent: None
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class ModelSkeletonData_t {
            public const nint m_boneName = 0x0; // CUtlVector<CUtlString>
            public const nint m_nParent = 0x18; // CUtlVector<int16>
            public const nint m_boneSphere = 0x30; // CUtlVector<float32>
            public const nint m_nFlag = 0x48; // CUtlVector<uint32>
            public const nint m_bonePosParent = 0x60; // CUtlVector<Vector>
            public const nint m_boneRotParent = 0x78; // CUtlVector<QuaternionStorage>
            public const nint m_boneScaleParent = 0x90; // CUtlVector<float32>
        }
        // Parent: None
        // Fields count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class PermModelInfo_t {
            public const nint m_nFlags = 0x0; // uint32
            public const nint m_vHullMin = 0x4; // Vector
            public const nint m_vHullMax = 0x10; // Vector
            public const nint m_vViewMin = 0x1C; // Vector
            public const nint m_vViewMax = 0x28; // Vector
            public const nint m_flMass = 0x34; // float32
            public const nint m_vEyePosition = 0x38; // Vector
            public const nint m_flMaxEyeDeflection = 0x44; // float32
            public const nint m_sSurfaceProperty = 0x48; // CUtlString
            public const nint m_keyValueText = 0x50; // CUtlString
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class PermModelExtPart_t {
            public const nint m_Transform = 0x0; // CTransform
            public const nint m_Name = 0x20; // CUtlString
            public const nint m_nParent = 0x28; // int32
            public const nint m_refModel = 0x30; // CStrongHandle<InfoForResourceTypeCModel>
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class ModelBoneFlexDriverControl_t {
            public const nint m_nBoneComponent = 0x0; // ModelBoneFlexComponent_t
            public const nint m_flexController = 0x8; // CUtlString
            public const nint m_flexControllerToken = 0x10; // uint32
            public const nint m_flMin = 0x14; // float32
            public const nint m_flMax = 0x18; // float32
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class ModelBoneFlexDriver_t {
            public const nint m_boneName = 0x0; // CUtlString
            public const nint m_boneNameToken = 0x8; // uint32
            public const nint m_controls = 0x10; // CUtlVector<ModelBoneFlexDriverControl_t>
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class PermModelDataAnimatedMaterialAttribute_t {
            public const nint m_AttributeName = 0x0; // CUtlString
            public const nint m_nNumChannels = 0x8; // int32
        }
        // Parent: None
        // Fields count: 23
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class PermModelData_t {
            public const nint m_name = 0x0; // CUtlString
            public const nint m_modelInfo = 0x8; // PermModelInfo_t
            public const nint m_ExtParts = 0x60; // CUtlVector<PermModelExtPart_t>
            public const nint m_refMeshes = 0x78; // CUtlVector<CStrongHandle<InfoForResourceTypeCRenderMesh>>
            public const nint m_refMeshGroupMasks = 0x90; // CUtlVector<uint64>
            public const nint m_refPhysGroupMasks = 0xA8; // CUtlVector<uint64>
            public const nint m_refLODGroupMasks = 0xC0; // CUtlVector<uint8>
            public const nint m_lodGroupSwitchDistances = 0xD8; // CUtlVector<float32>
            public const nint m_refPhysicsData = 0xF0; // CUtlVector<CStrongHandle<InfoForResourceTypeCPhysAggregateData>>
            public const nint m_refPhysicsHitboxData = 0x108; // CUtlVector<CStrongHandle<InfoForResourceTypeCPhysAggregateData>>
            public const nint m_refAnimGroups = 0x120; // CUtlVector<CStrongHandle<InfoForResourceTypeCAnimationGroup>>
            public const nint m_refSequenceGroups = 0x138; // CUtlVector<CStrongHandle<InfoForResourceTypeCSequenceGroupData>>
            public const nint m_meshGroups = 0x150; // CUtlVector<CUtlString>
            public const nint m_materialGroups = 0x168; // CUtlVector<MaterialGroup_t>
            public const nint m_nDefaultMeshGroupMask = 0x180; // uint64
            public const nint m_modelSkeleton = 0x188; // ModelSkeletonData_t
            public const nint m_remappingTable = 0x230; // CUtlVector<int16>
            public const nint m_remappingTableStarts = 0x248; // CUtlVector<uint16>
            public const nint m_boneFlexDrivers = 0x260; // CUtlVector<ModelBoneFlexDriver_t>
            public const nint m_pModelConfigList = 0x278; // CModelConfigList*
            public const nint m_BodyGroupsHiddenInTools = 0x280; // CUtlVector<CUtlString>
            public const nint m_refAnimIncludeModels = 0x298; // CUtlVector<CStrongHandle<InfoForResourceTypeCModel>>
            public const nint m_AnimatedMaterialAttributes = 0x2B0; // CUtlVector<PermModelDataAnimatedMaterialAttribute_t>
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CModelConfigElement {
            public const nint m_ElementName = 0x8; // CUtlString
            public const nint m_NestedElements = 0x10; // CUtlVector<CModelConfigElement*>
        }
        // Parent: CModelConfigElement
        // Fields count: 14
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CModelConfigElement_AttachedModel {
            public const nint m_InstanceName = 0x48; // CUtlString
            public const nint m_EntityClass = 0x50; // CUtlString
            public const nint m_hModel = 0x58; // CStrongHandle<InfoForResourceTypeCModel>
            public const nint m_vOffset = 0x60; // Vector
            public const nint m_aAngOffset = 0x6C; // QAngle
            public const nint m_AttachmentName = 0x78; // CUtlString
            public const nint m_LocalAttachmentOffsetName = 0x80; // CUtlString
            public const nint m_AttachmentType = 0x88; // ModelConfigAttachmentType_t
            public const nint m_bBoneMergeFlex = 0x8C; // bool
            public const nint m_bUserSpecifiedColor = 0x8D; // bool
            public const nint m_bUserSpecifiedMaterialGroup = 0x8E; // bool
            public const nint m_bAcceptParentMaterialDrivenDecals = 0x8F; // bool
            public const nint m_BodygroupOnOtherModels = 0x90; // CUtlString
            public const nint m_MaterialGroupOnOtherModels = 0x98; // CUtlString
        }
        // Parent: CModelConfigElement
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CModelConfigElement_UserPick {
            public const nint m_Choices = 0x48; // CUtlVector<CUtlString>
        }
        // Parent: CModelConfigElement
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CModelConfigElement_RandomPick {
            public const nint m_Choices = 0x48; // CUtlVector<CUtlString>
            public const nint m_ChoiceWeights = 0x60; // CUtlVector<float32>
        }
        // Parent: CModelConfigElement
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CModelConfigElement_SetMaterialGroup {
            public const nint m_MaterialGroupName = 0x48; // CUtlString
        }
        // Parent: CModelConfigElement
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CModelConfigElement_SetMaterialGroupOnAttachedModels {
            public const nint m_MaterialGroupName = 0x48; // CUtlString
        }
        // Parent: CModelConfigElement
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CModelConfigElement_SetRenderColor {
            public const nint m_Color = 0x48; // Color
        }
        // Parent: CModelConfigElement
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CModelConfigElement_RandomColor {
            public const nint m_Gradient = 0x48; // CColorGradient
        }
        // Parent: CModelConfigElement
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CModelConfigElement_SetBodygroup {
            public const nint m_GroupName = 0x48; // CUtlString
            public const nint m_nChoice = 0x50; // int32
        }
        // Parent: CModelConfigElement
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CModelConfigElement_SetBodygroupOnAttachedModels {
            public const nint m_GroupName = 0x48; // CUtlString
            public const nint m_nChoice = 0x50; // int32
        }
        // Parent: CModelConfigElement
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CModelConfigElement_Command {
            public const nint m_Command = 0x48; // CUtlString
            public const nint m_Args = 0x50; // KeyValues3
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CModelConfig {
            public const nint m_ConfigName = 0x0; // CUtlString
            public const nint m_Elements = 0x8; // CUtlVector<CModelConfigElement*>
            public const nint m_bTopLevel = 0x20; // bool
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CModelConfigList {
            public const nint m_bHideMaterialGroupInTools = 0x0; // bool
            public const nint m_bHideRenderColorInTools = 0x1; // bool
            public const nint m_Configs = 0x8; // CUtlVector<CModelConfig*>
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CRenderBufferBinding {
            public const nint m_hBuffer = 0x0; // uint64
            public const nint m_nBindOffsetBytes = 0x10; // uint32
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class SkeletonBoneBounds_t {
            public const nint m_vecCenter = 0x0; // Vector
            public const nint m_vecSize = 0xC; // Vector
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RenderSkeletonBone_t {
            public const nint m_boneName = 0x0; // CUtlString
            public const nint m_parentName = 0x8; // CUtlString
            public const nint m_invBindPose = 0x10; // matrix3x4_t
            public const nint m_bbox = 0x40; // SkeletonBoneBounds_t
            public const nint m_flSphereRadius = 0x58; // float32
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CRenderSkeleton {
            public const nint m_bones = 0x0; // CUtlVector<RenderSkeletonBone_t>
            public const nint m_boneParents = 0x30; // CUtlVector<int32>
            public const nint m_nBoneWeightCount = 0x48; // int32
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CDrawCullingData {
            public const nint m_vConeApex = 0x0; // Vector
            public const nint m_ConeAxis = 0xC; // int8[3]
            public const nint m_ConeCutoff = 0xF; // int8
        }
        // Parent: None
        // Fields count: 12
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CMaterialDrawDescriptor {
            public const nint m_nPrimitiveType = 0x0; // RenderPrimitiveType_t
            public const nint m_nBaseVertex = 0x4; // int32
            public const nint m_nVertexCount = 0x8; // int32
            public const nint m_nStartIndex = 0xC; // int32
            public const nint m_nIndexCount = 0x10; // int32
            public const nint m_flUvDensity = 0x14; // float32
            public const nint m_vTintColor = 0x18; // Vector
            public const nint m_flAlpha = 0x24; // float32
            public const nint m_nFirstMeshlet = 0x2C; // uint32
            public const nint m_nNumMeshlets = 0x30; // uint16
            public const nint m_indexBuffer = 0xB8; // CRenderBufferBinding
            public const nint m_material = 0xE0; // CStrongHandle<InfoForResourceTypeIMaterial2>
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CMeshletDescriptor {
            public const nint m_PackedAABB = 0x0; // PackedAABB_t
            public const nint m_CullingData = 0x8; // CDrawCullingData
        }
        // Parent: None
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSceneObjectData {
            public const nint m_vMinBounds = 0x0; // Vector
            public const nint m_vMaxBounds = 0xC; // Vector
            public const nint m_drawCalls = 0x18; // CUtlVector<CMaterialDrawDescriptor>
            public const nint m_drawBounds = 0x30; // CUtlVector<AABB_t>
            public const nint m_meshlets = 0x48; // CUtlVector<CMeshletDescriptor>
            public const nint m_vTintColor = 0x60; // Vector4D
        }
        // Parent: None
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAttachment {
            public const nint m_name = 0x0; // CUtlString
            public const nint m_influenceNames = 0x8; // CUtlString[3]
            public const nint m_vInfluenceRotations = 0x20; // Quaternion[3]
            public const nint m_vInfluenceOffsets = 0x50; // Vector[3]
            public const nint m_influenceWeights = 0x74; // float32[3]
            public const nint m_bInfluenceRootTransform = 0x80; // bool[3]
            public const nint m_nInfluences = 0x83; // uint8
            public const nint m_bIgnoreRotation = 0x84; // bool
        }
        // Parent: None
        // Fields count: 13
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CHitBox {
            public const nint m_name = 0x0; // CUtlString
            public const nint m_sSurfaceProperty = 0x8; // CUtlString
            public const nint m_sBoneName = 0x10; // CUtlString
            public const nint m_vMinBounds = 0x18; // Vector
            public const nint m_vMaxBounds = 0x24; // Vector
            public const nint m_flShapeRadius = 0x30; // float32
            public const nint m_nBoneNameHash = 0x34; // uint32
            public const nint m_nGroupId = 0x38; // int32
            public const nint m_nShapeType = 0x3C; // uint8
            public const nint m_bTranslationOnly = 0x3D; // bool
            public const nint m_CRC = 0x40; // uint32
            public const nint m_cRenderColor = 0x44; // Color
            public const nint m_nHitBoxIndex = 0x48; // uint16
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CHitBoxSet {
            public const nint m_name = 0x0; // CUtlString
            public const nint m_nNameHash = 0x8; // uint32
            public const nint m_HitBoxes = 0x10; // CUtlVector<CHitBox>
            public const nint m_SourceFilename = 0x28; // CUtlString
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CHitBoxSetList {
            public const nint m_HitBoxSets = 0x0; // CUtlVector<CHitBoxSet>
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class DynamicMeshDeformParams_t {
            public const nint m_flTensionCompressScale = 0x0; // float32
            public const nint m_flTensionStretchScale = 0x4; // float32
            public const nint m_bRecomputeSmoothNormalsAfterAnimation = 0x8; // bool
            public const nint m_bComputeDynamicMeshTensionAfterAnimation = 0x9; // bool
        }
        // Parent: None
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RenderHairStrandInfo_t {
            public const nint m_nGuideIdx = 0x0; // uint32[3]
            public const nint m_nBaseTriIdx = 0xC; // uint32
            public const nint m_vGuideBarycentric = 0x10; // Vector2D
            public const nint m_vBaseBarycentric = 0x18; // Vector2D
            public const nint m_vRootOffset_flLengthScale = 0x20; // uint16[4]
            public const nint m_nPackedBaseMeshUv = 0x28; // uint32
            public const nint m_nPad = 0x2C; // uint32
        }
        // Parent: None
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CRenderGroom {
            public const nint m_nSegmentsPerHairStrand = 0x0; // int32
            public const nint m_nGuideHairCount = 0x4; // int32
            public const nint m_nHairCount = 0x8; // int32
            public const nint m_nGroomGroupID = 0xC; // int32
            public const nint m_nAttachBoneIdx = 0x10; // int32
            public const nint m_hairInfoBufferData = 0x18; // CUtlBinaryBlock
            public const nint m_hairs = 0x30; // CUtlVector<RenderHairStrandInfo_t>
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CRenderMesh {
            public const nint m_sceneObjects = 0x10; // CUtlVectorFixedGrowable<CSceneObjectData>
            public const nint m_constraints = 0xA0; // CUtlVector<CBaseConstraint*>
            public const nint m_skeleton = 0xB8; // CRenderSkeleton
            public const nint m_meshDeformParams = 0x1E0; // DynamicMeshDeformParams_t
            public const nint m_pGroomData = 0x1F0; // CRenderGroom*
        }
        // Parent: None
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CConstraintTarget {
            public const nint m_qOffset = 0x20; // Quaternion
            public const nint m_vOffset = 0x30; // Vector
            public const nint m_nBoneHash = 0x3C; // uint32
            public const nint m_sName = 0x40; // CUtlString
            public const nint m_flWeight = 0x48; // float32
            public const nint m_bIsAttachment = 0x59; // bool
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CConstraintSlave {
            public const nint m_qBaseOrientation = 0x0; // Quaternion
            public const nint m_vBasePosition = 0x10; // Vector
            public const nint m_nBoneHash = 0x1C; // uint32
            public const nint m_flWeight = 0x20; // float32
            public const nint m_sName = 0x28; // CUtlString
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CBoneConstraintBase {
        }
        // Parent: CBoneConstraintBase
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CBaseConstraint {
            public const nint m_name = 0x28; // CUtlString
            public const nint m_vUpVector = 0x30; // Vector
            public const nint m_slaves = 0x40; // CUtlVector<CConstraintSlave>
            public const nint m_targets = 0x58; // CUtlVector<CConstraintTarget>
        }
        // Parent: CBaseConstraint
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPointConstraint {
        }
        // Parent: CBaseConstraint
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class COrientConstraint {
        }
        // Parent: CBaseConstraint
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAimConstraint {
            public const nint m_qAimOffset = 0x70; // Quaternion
            public const nint m_nUpType = 0x80; // uint32
        }
        // Parent: CBaseConstraint
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CTwistConstraint {
            public const nint m_bInverse = 0x70; // bool
            public const nint m_qParentBindRotation = 0x80; // Quaternion
            public const nint m_qChildBindRotation = 0x90; // Quaternion
        }
        // Parent: CBaseConstraint
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CTiltTwistConstraint {
            public const nint m_nTargetAxis = 0x70; // int32
            public const nint m_nSlaveAxis = 0x74; // int32
        }
        // Parent: CBaseConstraint
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CMorphConstraint {
            public const nint m_sTargetMorph = 0x70; // CUtlString
            public const nint m_nSlaveChannel = 0x78; // int32
            public const nint m_flMin = 0x7C; // float32
            public const nint m_flMax = 0x80; // float32
        }
        // Parent: CBaseConstraint
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CParentConstraint {
        }
        // Parent: CBoneConstraintBase
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CBoneConstraintPoseSpaceMorph {
            public const nint m_sBoneName = 0x28; // CUtlString
            public const nint m_sAttachmentName = 0x30; // CUtlString
            public const nint m_outputMorph = 0x38; // CUtlVector<CUtlString>
            public const nint m_inputList = 0x50; // CUtlVector<CBoneConstraintPoseSpaceMorph::Input_t>
            public const nint m_bClamp = 0x68; // bool
        }
        // Parent: None
        // Fields count: 2
        public static class CBoneConstraintPoseSpaceMorph__Input_t {
            public const nint m_inputValue = 0x0; // Vector
            public const nint m_outputWeightList = 0x10; // CUtlVector<float32>
        }
        // Parent: CBaseConstraint
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CBoneConstraintPoseSpaceBone {
            public const nint m_inputList = 0x70; // CUtlVector<CBoneConstraintPoseSpaceBone::Input_t>
        }
        // Parent: None
        // Fields count: 2
        public static class CBoneConstraintPoseSpaceBone__Input_t {
            public const nint m_inputValue = 0x0; // Vector
            public const nint m_outputTransformList = 0x10; // CUtlVector<CTransform>
        }
        // Parent: CBoneConstraintBase
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CBoneConstraintDotToMorph {
            public const nint m_sBoneName = 0x28; // CUtlString
            public const nint m_sTargetBoneName = 0x30; // CUtlString
            public const nint m_sMorphChannelName = 0x38; // CUtlString
            public const nint m_flRemap = 0x40; // float32[4]
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CFlexOp {
            public const nint m_OpCode = 0x0; // FlexOpCode_t
            public const nint m_Data = 0x4; // int32
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CFlexRule {
            public const nint m_nFlex = 0x0; // int32
            public const nint m_FlexOps = 0x8; // CUtlVector<CFlexOp>
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CFlexDesc {
            public const nint m_szFacs = 0x0; // CUtlString
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CFlexController {
            public const nint m_szName = 0x0; // CUtlString
            public const nint m_szType = 0x8; // CUtlString
            public const nint min = 0x10; // float32
            public const nint max = 0x14; // float32
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CMorphBundleData {
            public const nint m_flULeftSrc = 0x0; // float32
            public const nint m_flVTopSrc = 0x4; // float32
            public const nint m_offsets = 0x8; // CUtlVector<float32>
            public const nint m_ranges = 0x20; // CUtlVector<float32>
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CMorphRectData {
            public const nint m_nXLeftDst = 0x0; // int16
            public const nint m_nYTopDst = 0x2; // int16
            public const nint m_flUWidthSrc = 0x4; // float32
            public const nint m_flVHeightSrc = 0x8; // float32
            public const nint m_bundleDatas = 0x10; // CUtlVector<CMorphBundleData>
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CMorphData {
            public const nint m_name = 0x0; // CUtlString
            public const nint m_morphRectDatas = 0x8; // CUtlVector<CMorphRectData>
        }
        // Parent: None
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CMorphSetData {
            public const nint m_nWidth = 0xC; // int32
            public const nint m_nHeight = 0x10; // int32
            public const nint m_bundleTypes = 0x18; // CUtlVector<MorphBundleType_t>
            public const nint m_morphDatas = 0x30; // CUtlVector<CMorphData>
            public const nint m_pTextureAtlas = 0x48; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_FlexDesc = 0x50; // CUtlVector<CFlexDesc>
            public const nint m_FlexControllers = 0x68; // CUtlVector<CFlexController>
            public const nint m_FlexRules = 0x80; // CUtlVector<CFlexRule>
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimFoot {
            public const nint m_name = 0x0; // CUtlString
            public const nint m_vBallOffset = 0x8; // Vector
            public const nint m_vHeelOffset = 0x14; // Vector
            public const nint m_ankleBoneIndex = 0x20; // int32
            public const nint m_toeBoneIndex = 0x24; // int32
        }
        // Parent: None
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimSkeleton {
            public const nint m_localSpaceTransforms = 0x10; // CUtlVector<CTransform>
            public const nint m_modelSpaceTransforms = 0x28; // CUtlVector<CTransform>
            public const nint m_boneNames = 0x40; // CUtlVector<CUtlString>
            public const nint m_children = 0x58; // CUtlVector<CUtlVector<int32>>
            public const nint m_parents = 0x70; // CUtlVector<int32>
            public const nint m_feet = 0x88; // CUtlVector<CAnimFoot>
            public const nint m_morphNames = 0xA0; // CUtlVector<CUtlString>
            public const nint m_lodBoneCounts = 0xB8; // CUtlVector<int32>
        }
        // Parent: None
        // Fields count: 9
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CFootDefinition {
            public const nint m_name = 0x0; // CUtlString
            public const nint m_ankleBoneName = 0x8; // CUtlString
            public const nint m_toeBoneName = 0x10; // CUtlString
            public const nint m_vBallOffset = 0x18; // Vector
            public const nint m_vHeelOffset = 0x24; // Vector
            public const nint m_flFootLength = 0x30; // float32
            public const nint m_flBindPoseDirectionMS = 0x34; // float32
            public const nint m_flTraceHeight = 0x38; // float32
            public const nint m_flTraceRadius = 0x3C; // float32
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CCycleBase {
            public const nint m_flCycle = 0x0; // float32
        }
        // Parent: CCycleBase
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimCycle {
        }
        // Parent: CCycleBase
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CFootCycle {
        }
        // Parent: None
        // Fields count: 9
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CFootCycleDefinition {
            public const nint m_vStancePositionMS = 0x0; // Vector
            public const nint m_vMidpointPositionMS = 0xC; // Vector
            public const nint m_flStanceDirectionMS = 0x18; // float32
            public const nint m_vToStrideStartPos = 0x1C; // Vector
            public const nint m_stanceCycle = 0x28; // CAnimCycle
            public const nint m_footLiftCycle = 0x2C; // CFootCycle
            public const nint m_footOffCycle = 0x30; // CFootCycle
            public const nint m_footStrikeCycle = 0x34; // CFootCycle
            public const nint m_footLandCycle = 0x38; // CFootCycle
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CFootTrajectory {
            public const nint m_vOffset = 0x0; // Vector
            public const nint m_flRotationOffset = 0xC; // float32
            public const nint m_flProgression = 0x10; // float32
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CFootTrajectories {
            public const nint m_trajectories = 0x0; // CUtlVector<CFootTrajectory>
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CFootStride {
            public const nint m_definition = 0x0; // CFootCycleDefinition
            public const nint m_trajectories = 0x40; // CFootTrajectories
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CFootMotion {
            public const nint m_strides = 0x0; // CUtlVector<CFootStride>
            public const nint m_name = 0x18; // CUtlString
            public const nint m_bAdditive = 0x20; // bool
        }
        // Parent: None
        // Fields count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class SkeletonAnimCapture_t {
            public const nint m_nEntIndex = 0x0; // CEntityIndex
            public const nint m_nEntParent = 0x4; // CEntityIndex
            public const nint m_ImportedCollision = 0x8; // CUtlVector<CEntityIndex>
            public const nint m_ModelName = 0x20; // CUtlString
            public const nint m_CaptureName = 0x28; // CUtlString
            public const nint m_ModelBindPose = 0x30; // CUtlVector<SkeletonAnimCapture_t::Bone_t>
            public const nint m_FeModelInitPose = 0x48; // CUtlVector<SkeletonAnimCapture_t::Bone_t>
            public const nint m_nFlexControllers = 0x60; // int32
            public const nint m_bPredicted = 0x64; // bool
            public const nint m_Frames = 0xA8; // CUtlVector<SkeletonAnimCapture_t::Frame_t>
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class SkeletonAnimCapture_t__Bone_t {
            public const nint m_Name = 0x0; // CUtlString
            public const nint m_BindPose = 0x10; // CTransform
            public const nint m_nParent = 0x30; // int32
        }
        // Parent: None
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class SkeletonAnimCapture_t__FrameStamp_t {
            public const nint m_flTime = 0x0; // float32
            public const nint m_flEntitySimTime = 0x4; // float32
            public const nint m_bTeleportTick = 0x8; // bool
            public const nint m_bPredicted = 0x9; // bool
            public const nint m_flCurTime = 0xC; // float32
            public const nint m_flRealTime = 0x10; // float32
            public const nint m_nFrameCount = 0x14; // int32
            public const nint m_nTickCount = 0x18; // int32
        }
        // Parent: None
        // Fields count: 9
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class SkeletonAnimCapture_t__Frame_t {
            public const nint m_flTime = 0x0; // float32
            public const nint m_Stamp = 0x4; // SkeletonAnimCapture_t::FrameStamp_t
            public const nint m_Transform = 0x20; // CTransform
            public const nint m_bTeleport = 0x40; // bool
            public const nint m_CompositeBones = 0x48; // CUtlVector<CTransform>
            public const nint m_SimStateBones = 0x60; // CUtlVector<CTransform>
            public const nint m_FeModelAnims = 0x78; // CUtlVector<CTransform>
            public const nint m_FeModelPos = 0x90; // CUtlVector<VectorAligned>
            public const nint m_FlexControllerWeights = 0xA8; // CUtlVector<float32>
        }
    }
    // Module: libclient.so
    // Classes count: 256
    // Enums count: 0
    public static class Libclient {
        // Parent: None
        // Fields count: 0
        public static class CEntityComponent {
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
        // NetworkVarNames: m_pEntity (CEntityIdentity *)
        // NetworkVarNames: m_CScriptComponent (CScriptComponent::Storage_t)
        public static class CEntityInstance {
            public const nint m_iszPrivateVScripts = 0x8; // CUtlSymbolLarge
            public const nint m_pEntity = 0x10; // CEntityIdentity*
            public const nint m_CScriptComponent = 0x28; // CScriptComponent*
            public const nint m_bVisibleinPVS = 0x30; // bool
        }
        // Parent: CEntityComponent
        // Fields count: 1
        public static class CScriptComponent {
            public const nint m_scriptClassName = 0x30; // CUtlSymbolLarge
        }
        // Parent: CEntityComponent
        // Fields count: 2
        public static class CBodyComponent {
            public const nint m_pSceneNode = 0x8; // CGameSceneNode*
            public const nint __m_pChainEntity = 0x28; // CNetworkVarChainer
        }
        // Parent: CBodyComponent
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_sceneNode (CGameSceneNode)
        public static class CBodyComponentPoint {
            public const nint m_sceneNode = 0x60; // CGameSceneNode
            public const nint __m_pChainEntity = 0x1C0; // CNetworkVarChainer
        }
        // Parent: CBodyComponent
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_skeletonInstance (CSkeletonInstance)
        public static class CBodyComponentSkeletonInstance {
            public const nint m_skeletonInstance = 0x60; // CSkeletonInstance
            public const nint __m_pChainEntity = 0x450; // CNetworkVarChainer
        }
        // Parent: CEntityComponent
        // Fields count: 1
        //
        // Metadata:
        // NetworkVarNames: m_bvDisabledHitGroups (uint32)
        public static class CHitboxComponent {
            public const nint m_bvDisabledHitGroups = 0x24; // uint32[1]
        }
        // Parent: CEntityComponent
        // Fields count: 66
        //
        // Metadata:
        // NetworkVarNames: m_Color (Color)
        // NetworkVarNames: m_SecondaryColor (Color)
        // NetworkVarNames: m_flBrightness (float)
        // NetworkVarNames: m_flBrightnessScale (float)
        // NetworkVarNames: m_flBrightnessMult (float)
        // NetworkVarNames: m_flRange (float)
        // NetworkVarNames: m_flFalloff (float)
        // NetworkVarNames: m_flAttenuation0 (float)
        // NetworkVarNames: m_flAttenuation1 (float)
        // NetworkVarNames: m_flAttenuation2 (float)
        // NetworkVarNames: m_flTheta (float)
        // NetworkVarNames: m_flPhi (float)
        // NetworkVarNames: m_hLightCookie (HRenderTextureStrong)
        // NetworkVarNames: m_nCascades (int)
        // NetworkVarNames: m_nCastShadows (int)
        // NetworkVarNames: m_nShadowWidth (int)
        // NetworkVarNames: m_nShadowHeight (int)
        // NetworkVarNames: m_bRenderDiffuse (bool)
        // NetworkVarNames: m_nRenderSpecular (int)
        // NetworkVarNames: m_bRenderTransmissive (bool)
        // NetworkVarNames: m_flOrthoLightWidth (float)
        // NetworkVarNames: m_flOrthoLightHeight (float)
        // NetworkVarNames: m_nStyle (int)
        // NetworkVarNames: m_Pattern (CUtlString)
        // NetworkVarNames: m_nCascadeRenderStaticObjects (int)
        // NetworkVarNames: m_flShadowCascadeCrossFade (float)
        // NetworkVarNames: m_flShadowCascadeDistanceFade (float)
        // NetworkVarNames: m_flShadowCascadeDistance0 (float)
        // NetworkVarNames: m_flShadowCascadeDistance1 (float)
        // NetworkVarNames: m_flShadowCascadeDistance2 (float)
        // NetworkVarNames: m_flShadowCascadeDistance3 (float)
        // NetworkVarNames: m_nShadowCascadeResolution0 (int)
        // NetworkVarNames: m_nShadowCascadeResolution1 (int)
        // NetworkVarNames: m_nShadowCascadeResolution2 (int)
        // NetworkVarNames: m_nShadowCascadeResolution3 (int)
        // NetworkVarNames: m_bUsesBakedShadowing (bool)
        // NetworkVarNames: m_nShadowPriority (int)
        // NetworkVarNames: m_nBakedShadowIndex (int)
        // NetworkVarNames: m_bRenderToCubemaps (bool)
        // NetworkVarNames: m_nDirectLight (int)
        // NetworkVarNames: m_nIndirectLight (int)
        // NetworkVarNames: m_flFadeMinDist (float)
        // NetworkVarNames: m_flFadeMaxDist (float)
        // NetworkVarNames: m_flShadowFadeMinDist (float)
        // NetworkVarNames: m_flShadowFadeMaxDist (float)
        // NetworkVarNames: m_bEnabled (bool)
        // NetworkVarNames: m_bFlicker (bool)
        // NetworkVarNames: m_bPrecomputedFieldsValid (bool)
        // NetworkVarNames: m_vPrecomputedBoundsMins (Vector)
        // NetworkVarNames: m_vPrecomputedBoundsMaxs (Vector)
        // NetworkVarNames: m_vPrecomputedOBBOrigin (Vector)
        // NetworkVarNames: m_vPrecomputedOBBAngles (QAngle)
        // NetworkVarNames: m_vPrecomputedOBBExtent (Vector)
        // NetworkVarNames: m_flPrecomputedMaxRange (float)
        // NetworkVarNames: m_nFogLightingMode (int)
        // NetworkVarNames: m_flFogContributionStength (float)
        // NetworkVarNames: m_flNearClipPlane (float)
        // NetworkVarNames: m_SkyColor (Color)
        // NetworkVarNames: m_flSkyIntensity (float)
        // NetworkVarNames: m_SkyAmbientBounce (Color)
        // NetworkVarNames: m_bUseSecondaryColor (bool)
        // NetworkVarNames: m_bMixedShadows (bool)
        // NetworkVarNames: m_flLightStyleStartTime (GameTime_t)
        // NetworkVarNames: m_flCapsuleLength (float)
        // NetworkVarNames: m_flMinRoughness (float)
        public static class CLightComponent {
            public const nint __m_pChainEntity = 0x58; // CNetworkVarChainer
            public const nint m_Color = 0x95; // Color
            public const nint m_SecondaryColor = 0x99; // Color
            public const nint m_flBrightness = 0xA0; // float32
            public const nint m_flBrightnessScale = 0xA4; // float32
            public const nint m_flBrightnessMult = 0xA8; // float32
            public const nint m_flRange = 0xAC; // float32
            public const nint m_flFalloff = 0xB0; // float32
            public const nint m_flAttenuation0 = 0xB4; // float32
            public const nint m_flAttenuation1 = 0xB8; // float32
            public const nint m_flAttenuation2 = 0xBC; // float32
            public const nint m_flTheta = 0xC0; // float32
            public const nint m_flPhi = 0xC4; // float32
            public const nint m_hLightCookie = 0xC8; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_nCascades = 0xD0; // int32
            public const nint m_nCastShadows = 0xD4; // int32
            public const nint m_nShadowWidth = 0xD8; // int32
            public const nint m_nShadowHeight = 0xDC; // int32
            public const nint m_bRenderDiffuse = 0xE0; // bool
            public const nint m_nRenderSpecular = 0xE4; // int32
            public const nint m_bRenderTransmissive = 0xE8; // bool
            public const nint m_flOrthoLightWidth = 0xEC; // float32
            public const nint m_flOrthoLightHeight = 0xF0; // float32
            public const nint m_nStyle = 0xF4; // int32
            public const nint m_Pattern = 0xF8; // CUtlString
            public const nint m_nCascadeRenderStaticObjects = 0x100; // int32
            public const nint m_flShadowCascadeCrossFade = 0x104; // float32
            public const nint m_flShadowCascadeDistanceFade = 0x108; // float32
            public const nint m_flShadowCascadeDistance0 = 0x10C; // float32
            public const nint m_flShadowCascadeDistance1 = 0x110; // float32
            public const nint m_flShadowCascadeDistance2 = 0x114; // float32
            public const nint m_flShadowCascadeDistance3 = 0x118; // float32
            public const nint m_nShadowCascadeResolution0 = 0x11C; // int32
            public const nint m_nShadowCascadeResolution1 = 0x120; // int32
            public const nint m_nShadowCascadeResolution2 = 0x124; // int32
            public const nint m_nShadowCascadeResolution3 = 0x128; // int32
            public const nint m_bUsesBakedShadowing = 0x12C; // bool
            public const nint m_nShadowPriority = 0x130; // int32
            public const nint m_nBakedShadowIndex = 0x134; // int32
            public const nint m_bRenderToCubemaps = 0x138; // bool
            public const nint m_nDirectLight = 0x13C; // int32
            public const nint m_nIndirectLight = 0x140; // int32
            public const nint m_flFadeMinDist = 0x144; // float32
            public const nint m_flFadeMaxDist = 0x148; // float32
            public const nint m_flShadowFadeMinDist = 0x14C; // float32
            public const nint m_flShadowFadeMaxDist = 0x150; // float32
            public const nint m_bEnabled = 0x154; // bool
            public const nint m_bFlicker = 0x155; // bool
            public const nint m_bPrecomputedFieldsValid = 0x156; // bool
            public const nint m_vPrecomputedBoundsMins = 0x158; // Vector
            public const nint m_vPrecomputedBoundsMaxs = 0x164; // Vector
            public const nint m_vPrecomputedOBBOrigin = 0x170; // Vector
            public const nint m_vPrecomputedOBBAngles = 0x17C; // QAngle
            public const nint m_vPrecomputedOBBExtent = 0x188; // Vector
            public const nint m_flPrecomputedMaxRange = 0x194; // float32
            public const nint m_nFogLightingMode = 0x198; // int32
            public const nint m_flFogContributionStength = 0x19C; // float32
            public const nint m_flNearClipPlane = 0x1A0; // float32
            public const nint m_SkyColor = 0x1A4; // Color
            public const nint m_flSkyIntensity = 0x1A8; // float32
            public const nint m_SkyAmbientBounce = 0x1AC; // Color
            public const nint m_bUseSecondaryColor = 0x1B0; // bool
            public const nint m_bMixedShadows = 0x1B1; // bool
            public const nint m_flLightStyleStartTime = 0x1B4; // GameTime_t
            public const nint m_flCapsuleLength = 0x1B8; // float32
            public const nint m_flMinRoughness = 0x1BC; // float32
        }
        // Parent: CEntityComponent
        // Fields count: 5
        public static class CRenderComponent {
            public const nint __m_pChainEntity = 0x10; // CNetworkVarChainer
            public const nint m_bIsRenderingWithViewModels = 0x50; // bool
            public const nint m_nSplitscreenFlags = 0x54; // uint32
            public const nint m_bEnableRendering = 0x60; // bool
            public const nint m_bInterpolationReadyToDraw = 0xC0; // bool
        }
        // Parent: None
        // Fields count: 1
        public static class CBuoyancyHelper {
            public const nint m_flFluidDensity = 0x18; // float32
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseProvideFeatureTag
        // MPulseLibraryBindings
        public static class CBasePlayerControllerAPI {
        }
        // Parent: None
        // Fields count: 2
        public static class C_CommandContext {
            public const nint needsprocessing = 0x0; // bool
            public const nint command_number = 0x90; // int32
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // NetworkVarNames: nType (FixAngleSet_t)
        // NetworkVarNames: qAngle (QAngle)
        // NetworkVarNames: nIndex (uint32)
        public static class ViewAngleServerChange_t {
            public const nint nType = 0x30; // FixAngleSet_t
            public const nint qAngle = 0x34; // QAngle
            public const nint nIndex = 0x40; // uint32
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseProvideFeatureTag
        // MPulseLibraryBindings
        public static class CDynamicPropAPI {
        }
        // Parent: CPlayerPawnComponent
        // Fields count: 0
        public static class CPlayer_AutoaimServices {
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // NetworkVarNames: localSound (Vector)
        // NetworkVarNames: soundscapeIndex (int32)
        // NetworkVarNames: localBits (uint8)
        // NetworkVarNames: soundscapeEntityListIndex (int)
        // NetworkVarNames: soundEventHash (uint32)
        public static class audioparams_t {
            public const nint localSound = 0x8; // Vector[8]
            public const nint soundscapeIndex = 0x68; // int32
            public const nint localBits = 0x6C; // uint8
            public const nint soundscapeEntityListIndex = 0x70; // int32
            public const nint soundEventHash = 0x74; // uint32
        }
        // Parent: CPlayerPawnComponent
        // Fields count: 20
        //
        // Metadata:
        // NetworkVarNames: m_vecCsViewPunchAngle (QAngle)
        // NetworkVarNames: m_nCsViewPunchAngleTick (GameTick_t)
        // NetworkVarNames: m_flCsViewPunchAngleTickRatio (float32)
        // NetworkVarNames: m_PlayerFog (fogplayerparams_t)
        // NetworkVarNames: m_hColorCorrectionCtrl (CHandle< CColorCorrection>)
        // NetworkVarNames: m_hViewEntity (CHandle< CBaseEntity>)
        // NetworkVarNames: m_hTonemapController (CHandle< CTonemapController2>)
        // NetworkVarNames: m_audio (audioparams_t)
        // NetworkVarNames: m_PostProcessingVolumes (CHandle<C_PostProcessingVolume>)
        public static class CPlayer_CameraServices {
            public const nint m_vecCsViewPunchAngle = 0x40; // QAngle
            public const nint m_nCsViewPunchAngleTick = 0x4C; // GameTick_t
            public const nint m_flCsViewPunchAngleTickRatio = 0x50; // float32
            public const nint m_PlayerFog = 0x58; // C_fogplayerparams_t
            public const nint m_hColorCorrectionCtrl = 0x98; // CHandle<C_ColorCorrection>
            public const nint m_hViewEntity = 0x9C; // CHandle<C_BaseEntity>
            public const nint m_hTonemapController = 0xA0; // CHandle<C_TonemapController2>
            public const nint m_audio = 0xA8; // audioparams_t
            public const nint m_PostProcessingVolumes = 0x120; // C_NetworkUtlVectorBase<CHandle<C_PostProcessingVolume>>
            public const nint m_flOldPlayerZ = 0x138; // float32
            public const nint m_flOldPlayerViewOffsetZ = 0x13C; // float32
            public const nint m_CurrentFog = 0x140; // fogparams_t
            public const nint m_hOldFogController = 0x1A8; // CHandle<C_FogController>
            public const nint m_bOverrideFogColor = 0x1AC; // bool[5]
            public const nint m_OverrideFogColor = 0x1B1; // Color[5]
            public const nint m_bOverrideFogStartEnd = 0x1C5; // bool[5]
            public const nint m_fOverrideFogStart = 0x1CC; // float32[5]
            public const nint m_fOverrideFogEnd = 0x1E0; // float32[5]
            public const nint m_hActivePostProcessingVolume = 0x1F4; // CHandle<C_PostProcessingVolume>
            public const nint m_angDemoViewAngles = 0x1F8; // QAngle
        }
        // Parent: CPlayerPawnComponent
        // Fields count: 0
        public static class CPlayer_FlashlightServices {
        }
        // Parent: CPlayerPawnComponent
        // Fields count: 0
        public static class CPlayer_ItemServices {
        }
        // Parent: CPlayerPawnComponent
        // Fields count: 15
        //
        // Metadata:
        // NetworkVarNames: m_nToggleButtonDownMask (ButtonBitMask_t)
        // NetworkVarNames: m_flMaxspeed (float32)
        // NetworkVarNames: m_arrForceSubtickMoveWhen (float32)
        public static class CPlayer_MovementServices {
            public const nint m_nImpulse = 0x40; // int32
            public const nint m_nButtons = 0x48; // CInButtonState
            public const nint m_nQueuedButtonDownMask = 0x68; // uint64
            public const nint m_nQueuedButtonChangeMask = 0x70; // uint64
            public const nint m_nButtonDoublePressed = 0x78; // uint64
            public const nint m_pButtonPressedCmdNumber = 0x80; // uint32[64]
            public const nint m_nLastCommandNumberProcessed = 0x180; // uint32
            public const nint m_nToggleButtonDownMask = 0x188; // uint64
            public const nint m_flMaxspeed = 0x198; // float32
            public const nint m_arrForceSubtickMoveWhen = 0x19C; // float32[4]
            public const nint m_flForwardMove = 0x1AC; // float32
            public const nint m_flLeftMove = 0x1B0; // float32
            public const nint m_flUpMove = 0x1B4; // float32
            public const nint m_vecLastMovementImpulses = 0x1B8; // Vector
            public const nint m_vecOldViewAngles = 0x1C4; // QAngle
        }
        // Parent: CPlayer_MovementServices
        // Fields count: 12
        //
        // Metadata:
        // NetworkVarNames: m_flFallVelocity (float32)
        // NetworkVarNames: m_bInCrouch (bool)
        // NetworkVarNames: m_nCrouchState (uint32)
        // NetworkVarNames: m_flCrouchTransitionStartTime (GameTime_t)
        // NetworkVarNames: m_bDucked (bool)
        // NetworkVarNames: m_bDucking (bool)
        // NetworkVarNames: m_bInDuckJump (bool)
        public static class CPlayer_MovementServices_Humanoid {
            public const nint m_flStepSoundTime = 0x1D8; // float32
            public const nint m_flFallVelocity = 0x1DC; // float32
            public const nint m_bInCrouch = 0x1E0; // bool
            public const nint m_nCrouchState = 0x1E4; // uint32
            public const nint m_flCrouchTransitionStartTime = 0x1E8; // GameTime_t
            public const nint m_bDucked = 0x1EC; // bool
            public const nint m_bDucking = 0x1ED; // bool
            public const nint m_bInDuckJump = 0x1EE; // bool
            public const nint m_groundNormal = 0x1F0; // Vector
            public const nint m_flSurfaceFriction = 0x1FC; // float32
            public const nint m_surfaceProps = 0x200; // CUtlStringToken
            public const nint m_nStepside = 0x210; // int32
        }
        // Parent: CPlayerPawnComponent
        // Fields count: 6
        //
        // Metadata:
        // NetworkVarNames: m_iObserverMode (uint8)
        // NetworkVarNames: m_hObserverTarget (CHandle< CBaseEntity>)
        public static class CPlayer_ObserverServices {
            public const nint m_iObserverMode = 0x40; // uint8
            public const nint m_hObserverTarget = 0x44; // CHandle<C_BaseEntity>
            public const nint m_iObserverLastMode = 0x48; // ObserverMode_t
            public const nint m_bForcedObserverMode = 0x4C; // bool
            public const nint m_flObserverChaseDistance = 0x50; // float32
            public const nint m_flObserverChaseDistanceCalcTime = 0x54; // GameTime_t
        }
        // Parent: CPlayerPawnComponent
        // Fields count: 0
        public static class CPlayer_UseServices {
        }
        // Parent: CPlayerPawnComponent
        // Fields count: 0
        public static class CPlayer_WaterServices {
        }
        // Parent: CPlayerPawnComponent
        // Fields count: 4
        //
        // Metadata:
        // NetworkVarNames: m_hMyWeapons (CHandle< C_BasePlayerWeapon >)
        // NetworkVarNames: m_hActiveWeapon (CHandle< CBasePlayerWeapon>)
        // NetworkVarNames: m_hLastWeapon (CHandle< CBasePlayerWeapon>)
        // NetworkVarNames: m_iAmmo (uint16)
        public static class CPlayer_WeaponServices {
            public const nint m_hMyWeapons = 0x40; // C_NetworkUtlVectorBase<CHandle<C_BasePlayerWeapon>>
            public const nint m_hActiveWeapon = 0x58; // CHandle<C_BasePlayerWeapon>
            public const nint m_hLastWeapon = 0x5C; // CHandle<C_BasePlayerWeapon>
            public const nint m_iAmmo = 0x60; // uint16[32]
        }
        // Parent: CBodyComponentSkeletonInstance
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_animationController (CBaseAnimGraphController)
        public static class CBodyComponentBaseAnimGraph {
            public const nint m_animationController = 0x478; // CBaseAnimGraphController
            public const nint __m_pChainEntity = 0x1C68; // CNetworkVarChainer
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_ID (CUtlStringToken)
        // NetworkVarNames: m_Values (Vector4D)
        public static class EntityRenderAttribute_t {
            public const nint m_ID = 0x30; // CUtlStringToken
            public const nint m_Values = 0x34; // Vector4D
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // NetworkVarNames: m_Handle (ModelConfigHandle_t)
        // NetworkVarNames: m_Name (string_t)
        // NetworkVarNames: m_AssociatedEntities (CHandle< C_BaseModelEntity >)
        // NetworkVarNames: m_AssociatedEntityNames (string_t)
        public static class ActiveModelConfig_t {
            public const nint m_Handle = 0x28; // ModelConfigHandle_t
            public const nint m_Name = 0x30; // CUtlSymbolLarge
            public const nint m_AssociatedEntities = 0x38; // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
            public const nint m_AssociatedEntityNames = 0x50; // C_NetworkUtlVectorBase<CUtlSymbolLarge>
        }
        // Parent: CBodyComponentSkeletonInstance
        // Fields count: 1
        public static class CBodyComponentBaseModelEntity {
            public const nint __m_pChainEntity = 0x478; // CNetworkVarChainer
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_hOwner (CEntityHandle)
        // NetworkVarNames: m_name (CUtlStringToken)
        public static class CGameSceneNodeHandle {
            public const nint m_hOwner = 0x8; // CEntityHandle
            public const nint m_name = 0xC; // CUtlStringToken
        }
        // Parent: None
        // Fields count: 32
        //
        // Metadata:
        // NetworkVarNames: m_hParent (CGameSceneNodeHandle)
        // NetworkVarNames: m_vecOrigin (CNetworkOriginCellCoordQuantizedVector)
        // NetworkVarNames: m_angRotation (QAngle)
        // NetworkVarNames: m_flScale (float)
        // NetworkVarNames: m_name (CUtlStringToken)
        // NetworkVarNames: m_hierarchyAttachName (CUtlStringToken)
        public static class CGameSceneNode {
            public const nint m_nodeToWorld = 0x10; // CTransform
            public const nint m_pOwner = 0x30; // CEntityInstance*
            public const nint m_pParent = 0x38; // CGameSceneNode*
            public const nint m_pChild = 0x40; // CGameSceneNode*
            public const nint m_pNextSibling = 0x48; // CGameSceneNode*
            public const nint m_hParent = 0x70; // CGameSceneNodeHandle
            public const nint m_vecOrigin = 0x80; // CNetworkOriginCellCoordQuantizedVector
            public const nint m_angRotation = 0xB8; // QAngle
            public const nint m_flScale = 0xC4; // float32
            public const nint m_vecAbsOrigin = 0xC8; // Vector
            public const nint m_angAbsRotation = 0xD4; // QAngle
            public const nint m_flAbsScale = 0xE0; // float32
            public const nint m_nParentAttachmentOrBone = 0xE4; // int16
            public const nint m_bDebugAbsOriginChanges = 0xE6; // bool
            public const nint m_bDormant = 0xE7; // bool
            public const nint m_bForceParentToBeNetworked = 0xE8; // bool
            public const nint m_bDirtyHierarchy = 0x0; // bitfield:1
            public const nint m_bDirtyBoneMergeInfo = 0x0; // bitfield:1
            public const nint m_bNetworkedPositionChanged = 0x0; // bitfield:1
            public const nint m_bNetworkedAnglesChanged = 0x0; // bitfield:1
            public const nint m_bNetworkedScaleChanged = 0x0; // bitfield:1
            public const nint m_bWillBeCallingPostDataUpdate = 0x0; // bitfield:1
            public const nint m_bBoneMergeFlex = 0x0; // bitfield:1
            public const nint m_nLatchAbsOrigin = 0x0; // bitfield:2
            public const nint m_bDirtyBoneMergeBoneToRoot = 0x0; // bitfield:1
            public const nint m_nHierarchicalDepth = 0xEB; // uint8
            public const nint m_nHierarchyType = 0xEC; // uint8
            public const nint m_nDoNotSetAnimTimeInInvalidatePhysicsCount = 0xED; // uint8
            public const nint m_name = 0xF0; // CUtlStringToken
            public const nint m_hierarchyAttachName = 0x140; // CUtlStringToken
            public const nint m_flZOffset = 0x144; // float32
            public const nint m_vRenderOrigin = 0x148; // Vector
        }
        // Parent: None
        // Fields count: 6
        public static class SequenceHistory_t {
            public const nint m_hSequence = 0x0; // HSequence
            public const nint m_flSeqStartTime = 0x4; // GameTime_t
            public const nint m_flSeqFixedCycle = 0x8; // float32
            public const nint m_nSeqLoopMode = 0xC; // AnimLoopMode_t
            public const nint m_flPlaybackRate = 0x10; // float32
            public const nint m_flCyclesPerSecond = 0x14; // float32
        }
        // Parent: None
        // Fields count: 8
        //
        // Metadata:
        // NetworkVarNames: m_hSequence (HSequence)
        // NetworkVarNames: m_flPrevCycle (float32)
        // NetworkVarNames: m_flCycle (float32)
        public static class CNetworkedSequenceOperation {
            public const nint m_hSequence = 0x8; // HSequence
            public const nint m_flPrevCycle = 0xC; // float32
            public const nint m_flCycle = 0x10; // float32
            public const nint m_flWeight = 0x14; // CNetworkedQuantizedFloat
            public const nint m_bSequenceChangeNetworked = 0x1C; // bool
            public const nint m_bDiscontinuity = 0x1D; // bool
            public const nint m_flPrevCycleFromDiscontinuity = 0x20; // float32
            public const nint m_flPrevCycleForAnimEventDetection = 0x24; // float32
        }
        // Parent: None
        // Fields count: 7
        //
        // Metadata:
        // NetworkVarNames: m_hModel (HModelStrong)
        // NetworkVarNames: m_bClientClothCreationSuppressed (bool)
        // NetworkVarNames: m_MeshGroupMask (MeshGroupMask_t)
        // NetworkVarNames: m_nIdealMotionType (int8)
        public static class CModelState {
            public const nint m_hModel = 0xA0; // CStrongHandle<InfoForResourceTypeCModel>
            public const nint m_ModelName = 0xA8; // CUtlSymbolLarge
            public const nint m_bClientClothCreationSuppressed = 0xE8; // bool
            public const nint m_MeshGroupMask = 0x180; // uint64
            public const nint m_nIdealMotionType = 0x212; // int8
            public const nint m_nForceLOD = 0x213; // int8
            public const nint m_nClothUpdateFlags = 0x214; // int8
        }
        // Parent: CGameSceneNode
        // Fields count: 8
        //
        // Metadata:
        // NetworkVarNames: m_modelState (CModelState)
        // NetworkVarNames: m_bIsAnimationEnabled (bool)
        // NetworkVarNames: m_bUseParentRenderBounds (bool)
        // NetworkVarNames: m_materialGroup (CUtlStringToken)
        // NetworkVarNames: m_nHitboxSet (uint8)
        public static class CSkeletonInstance {
            public const nint m_modelState = 0x160; // CModelState
            public const nint m_bIsAnimationEnabled = 0x380; // bool
            public const nint m_bUseParentRenderBounds = 0x381; // bool
            public const nint m_bDisableSolidCollisionsForHierarchy = 0x382; // bool
            public const nint m_bDirtyMotionType = 0x0; // bitfield:1
            public const nint m_bIsGeneratingLatchedParentSpaceState = 0x0; // bitfield:1
            public const nint m_materialGroup = 0x384; // CUtlStringToken
            public const nint m_nHitboxSet = 0x388; // uint8
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_timestamp (GameTime_t)
        // NetworkVarNames: m_nWorldGroupId (WorldGroupId_t)
        public static class IntervalTimer {
            public const nint m_timestamp = 0x8; // GameTime_t
            public const nint m_nWorldGroupId = 0xC; // WorldGroupId_t
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // NetworkVarNames: m_duration (float32)
        // NetworkVarNames: m_timestamp (GameTime_t)
        // NetworkVarNames: m_timescale (float32)
        // NetworkVarNames: m_nWorldGroupId (WorldGroupId_t)
        public static class CountdownTimer {
            public const nint m_duration = 0x8; // float32
            public const nint m_timestamp = 0xC; // GameTime_t
            public const nint m_timescale = 0x10; // float32
            public const nint m_nWorldGroupId = 0x14; // WorldGroupId_t
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // NetworkVarNames: m_duration (float32)
        // NetworkVarNames: m_timestamp (float32)
        // NetworkVarNames: m_timescale (float32)
        public static class EngineCountdownTimer {
            public const nint m_duration = 0x8; // float32
            public const nint m_timestamp = 0xC; // float32
            public const nint m_timescale = 0x10; // float32
        }
        // Parent: IntervalTimer
        // Fields count: 7
        //
        // Metadata:
        // NetworkVarNames: m_flValues (float)
        // NetworkVarNames: m_nValueCounts (int)
        // NetworkVarNames: m_nBucketCount (int)
        // NetworkVarNames: m_flInterval (float)
        // NetworkVarNames: m_flFinalValue (float)
        // NetworkVarNames: m_nCompressionType (TimelineCompression_t)
        // NetworkVarNames: m_bStopped (bool)
        public static class CTimeline {
            public const nint m_flValues = 0x10; // float32[64]
            public const nint m_nValueCounts = 0x110; // int32[64]
            public const nint m_nBucketCount = 0x210; // int32
            public const nint m_flInterval = 0x214; // float32
            public const nint m_flFinalValue = 0x218; // float32
            public const nint m_nCompressionType = 0x21C; // TimelineCompression_t
            public const nint m_bStopped = 0x220; // bool
        }
        // Parent: None
        // Fields count: 24
        //
        // Metadata:
        // NetworkVarNames: m_PredNetBoolVariables (uint32)
        // NetworkVarNames: m_PredNetByteVariables (byte)
        // NetworkVarNames: m_PredNetUInt16Variables (uint16)
        // NetworkVarNames: m_PredNetIntVariables (int32)
        // NetworkVarNames: m_PredNetUInt32Variables (uint32)
        // NetworkVarNames: m_PredNetUInt64Variables (uint64)
        // NetworkVarNames: m_PredNetFloatVariables (float)
        // NetworkVarNames: m_PredNetVectorVariables (Vector)
        // NetworkVarNames: m_PredNetQuaternionVariables (Quaternion)
        // NetworkVarNames: m_PredNetGlobalSymbolVariables (CGlobalSymbol)
        // NetworkVarNames: m_OwnerOnlyPredNetBoolVariables (uint32)
        // NetworkVarNames: m_OwnerOnlyPredNetByteVariables (byte)
        // NetworkVarNames: m_OwnerOnlyPredNetUInt16Variables (uint16)
        // NetworkVarNames: m_OwnerOnlyPredNetIntVariables (int32)
        // NetworkVarNames: m_OwnerOnlyPredNetUInt32Variables (uint32)
        // NetworkVarNames: m_OwnerOnlyPredNetUInt64Variables (uint64)
        // NetworkVarNames: m_OwnerOnlyPredNetFloatVariables (float)
        // NetworkVarNames: m_OwnerOnlyPredNetVectorVariables (Vector)
        // NetworkVarNames: m_OwnerOnlyPredNetQuaternionVariables (Quaternion)
        // NetworkVarNames: m_OwnerOnlyPredNetGlobalSymbolVariables (CGlobalSymbol)
        // NetworkVarNames: m_nBoolVariablesCount (int)
        // NetworkVarNames: m_nOwnerOnlyBoolVariablesCount (int)
        // NetworkVarNames: m_nRandomSeedOffset (int)
        // NetworkVarNames: m_flLastTeleportTime (float)
        public static class CAnimGraphNetworkedVariables {
            public const nint m_PredNetBoolVariables = 0x8; // C_NetworkUtlVectorBase<uint32>
            public const nint m_PredNetByteVariables = 0x20; // C_NetworkUtlVectorBase<uint8>
            public const nint m_PredNetUInt16Variables = 0x38; // C_NetworkUtlVectorBase<uint16>
            public const nint m_PredNetIntVariables = 0x50; // C_NetworkUtlVectorBase<int32>
            public const nint m_PredNetUInt32Variables = 0x68; // C_NetworkUtlVectorBase<uint32>
            public const nint m_PredNetUInt64Variables = 0x80; // C_NetworkUtlVectorBase<uint64>
            public const nint m_PredNetFloatVariables = 0x98; // C_NetworkUtlVectorBase<float32>
            public const nint m_PredNetVectorVariables = 0xB0; // C_NetworkUtlVectorBase<Vector>
            public const nint m_PredNetQuaternionVariables = 0xC8; // C_NetworkUtlVectorBase<Quaternion>
            public const nint m_PredNetGlobalSymbolVariables = 0xE0; // C_NetworkUtlVectorBase<CGlobalSymbol>
            public const nint m_OwnerOnlyPredNetBoolVariables = 0xF8; // C_NetworkUtlVectorBase<uint32>
            public const nint m_OwnerOnlyPredNetByteVariables = 0x110; // C_NetworkUtlVectorBase<uint8>
            public const nint m_OwnerOnlyPredNetUInt16Variables = 0x128; // C_NetworkUtlVectorBase<uint16>
            public const nint m_OwnerOnlyPredNetIntVariables = 0x140; // C_NetworkUtlVectorBase<int32>
            public const nint m_OwnerOnlyPredNetUInt32Variables = 0x158; // C_NetworkUtlVectorBase<uint32>
            public const nint m_OwnerOnlyPredNetUInt64Variables = 0x170; // C_NetworkUtlVectorBase<uint64>
            public const nint m_OwnerOnlyPredNetFloatVariables = 0x188; // C_NetworkUtlVectorBase<float32>
            public const nint m_OwnerOnlyPredNetVectorVariables = 0x1A0; // C_NetworkUtlVectorBase<Vector>
            public const nint m_OwnerOnlyPredNetQuaternionVariables = 0x1B8; // C_NetworkUtlVectorBase<Quaternion>
            public const nint m_OwnerOnlyPredNetGlobalSymbolVariables = 0x1D0; // C_NetworkUtlVectorBase<CGlobalSymbol>
            public const nint m_nBoolVariablesCount = 0x1E8; // int32
            public const nint m_nOwnerOnlyBoolVariablesCount = 0x1EC; // int32
            public const nint m_nRandomSeedOffset = 0x1F0; // int32
            public const nint m_flLastTeleportTime = 0x1F4; // float32
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseProvideFeatureTag
        // MPulseLibraryBindings
        public static class C_BaseEntityAPI {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseProvideFeatureTag
        // MPulseLibraryBindings
        public static class CTakeDamageInfoAPI {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseLibraryBindings
        public static class CClientPointEntityAPI {
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MPulseInstanceDomainInfo
        // MPulseLibraryBindings
        // MPulseDomainOptInFeatureTag
        public static class CPulseGraphInstance_ClientEntity {
            public const nint m_pParent = 0xD8; // CClientScriptEntity*
        }
        // Parent: CEntityInstance
        // Fields count: 80
        //
        // Metadata:
        // MNetworkExcludeByName
        // MNetworkExcludeByName
        // MNetworkExcludeByUserGroup
        // MNetworkExcludeByUserGroup
        // MNetworkExcludeByUserGroup
        // MNetworkExcludeByName
        // MNetworkExcludeByName
        // MNetworkExcludeByName
        // MNetworkExcludeByName
        // NetworkVarNames: m_CBodyComponent (CBodyComponent::Storage_t)
        // NetworkVarNames: m_iMaxHealth (int32)
        // NetworkVarNames: m_iHealth (int32)
        // NetworkVarNames: m_lifeState (uint8)
        // NetworkVarNames: m_bTakesDamage (bool)
        // NetworkVarNames: m_nTakeDamageFlags (TakeDamageFlags_t)
        // NetworkVarNames: m_bIsPlatform (bool)
        // NetworkVarNames: m_ubInterpolationFrame (uint8)
        // NetworkVarNames: m_nSubclassID (EntitySubclassID_t)
        // NetworkVarNames: m_flAnimTime (float32)
        // NetworkVarNames: m_flSimulationTime (float32)
        // NetworkVarNames: m_flCreateTime (GameTime_t)
        // NetworkVarNames: m_bClientSideRagdoll (bool)
        // NetworkVarNames: m_iTeamNum (uint8)
        // NetworkVarNames: m_spawnflags (uint32)
        // NetworkVarNames: m_nNextThinkTick (GameTick_t)
        // NetworkVarNames: m_fFlags (uint32)
        // NetworkVarNames: m_vecBaseVelocity (Vector)
        // NetworkVarNames: m_hEffectEntity (CHandle< CBaseEntity>)
        // NetworkVarNames: m_hOwnerEntity (CHandle< CBaseEntity>)
        // NetworkVarNames: m_MoveCollide (MoveCollide_t)
        // NetworkVarNames: m_MoveType (MoveType_t)
        // NetworkVarNames: m_flWaterLevel (float32)
        // NetworkVarNames: m_fEffects (uint32)
        // NetworkVarNames: m_hGroundEntity (CHandle< CBaseEntity>)
        // NetworkVarNames: m_flFriction (float32)
        // NetworkVarNames: m_flElasticity (float32)
        // NetworkVarNames: m_flGravityScale (float32)
        // NetworkVarNames: m_flTimeScale (float32)
        // NetworkVarNames: m_bAnimatedEveryTick (bool)
        // NetworkVarNames: m_flNavIgnoreUntilTime (GameTime_t)
        public static class C_BaseEntity {
            public const nint m_CBodyComponent = 0x38; // CBodyComponent*
            public const nint m_NetworkTransmitComponent = 0x40; // CNetworkTransmitComponent
            public const nint m_nLastThinkTick = 0x488; // GameTick_t
            public const nint m_pGameSceneNode = 0x490; // CGameSceneNode*
            public const nint m_pRenderComponent = 0x498; // CRenderComponent*
            public const nint m_pCollision = 0x4A0; // CCollisionProperty*
            public const nint m_iMaxHealth = 0x4A8; // int32
            public const nint m_iHealth = 0x4AC; // int32
            public const nint m_lifeState = 0x4B0; // uint8
            public const nint m_bTakesDamage = 0x4B1; // bool
            public const nint m_nTakeDamageFlags = 0x4B4; // TakeDamageFlags_t
            public const nint m_bIsPlatform = 0x4B8; // bool
            public const nint m_ubInterpolationFrame = 0x4B9; // uint8
            public const nint m_hSceneObjectController = 0x4BC; // CHandle<C_BaseEntity>
            public const nint m_nNoInterpolationTick = 0x4C0; // int32
            public const nint m_nVisibilityNoInterpolationTick = 0x4C4; // int32
            public const nint m_flProxyRandomValue = 0x4C8; // float32
            public const nint m_iEFlags = 0x4CC; // int32
            public const nint m_nWaterType = 0x4D0; // uint8
            public const nint m_bInterpolateEvenWithNoModel = 0x4D1; // bool
            public const nint m_bPredictionEligible = 0x4D2; // bool
            public const nint m_bApplyLayerMatchIDToModel = 0x4D3; // bool
            public const nint m_tokLayerMatchID = 0x4D4; // CUtlStringToken
            public const nint m_nSubclassID = 0x4D8; // CUtlStringToken
            public const nint m_nSimulationTick = 0x4E8; // int32
            public const nint m_iCurrentThinkContext = 0x4EC; // int32
            public const nint m_aThinkFunctions = 0x4F0; // CUtlVector<thinkfunc_t>
            public const nint m_nDisableContextThinkStartTick = 0x508; // GameTick_t
            public const nint m_flAnimTime = 0x50C; // float32
            public const nint m_flSimulationTime = 0x510; // float32
            public const nint m_nSceneObjectOverrideFlags = 0x514; // uint8
            public const nint m_bHasSuccessfullyInterpolated = 0x515; // bool
            public const nint m_bHasAddedVarsToInterpolation = 0x516; // bool
            public const nint m_bRenderEvenWhenNotSuccessfullyInterpolated = 0x517; // bool
            public const nint m_nInterpolationLatchDirtyFlags = 0x518; // int32[2]
            public const nint m_ListEntry = 0x520; // uint16[11]
            public const nint m_flCreateTime = 0x538; // GameTime_t
            public const nint m_flSpeed = 0x53C; // float32
            public const nint m_EntClientFlags = 0x540; // uint16
            public const nint m_bClientSideRagdoll = 0x542; // bool
            public const nint m_iTeamNum = 0x543; // uint8
            public const nint m_spawnflags = 0x544; // uint32
            public const nint m_nNextThinkTick = 0x548; // GameTick_t
            public const nint m_fFlags = 0x54C; // uint32
            public const nint m_vecAbsVelocity = 0x550; // Vector
            public const nint m_vecVelocity = 0x560; // CNetworkVelocityVector
            public const nint m_vecBaseVelocity = 0x590; // Vector
            public const nint m_hEffectEntity = 0x59C; // CHandle<C_BaseEntity>
            public const nint m_hOwnerEntity = 0x5A0; // CHandle<C_BaseEntity>
            public const nint m_MoveCollide = 0x5A4; // MoveCollide_t
            public const nint m_MoveType = 0x5A5; // MoveType_t
            public const nint m_nActualMoveType = 0x5A6; // MoveType_t
            public const nint m_flWaterLevel = 0x5A8; // float32
            public const nint m_fEffects = 0x5AC; // uint32
            public const nint m_hGroundEntity = 0x5B0; // CHandle<C_BaseEntity>
            public const nint m_flFriction = 0x5B4; // float32
            public const nint m_flElasticity = 0x5B8; // float32
            public const nint m_flGravityScale = 0x5BC; // float32
            public const nint m_flTimeScale = 0x5C0; // float32
            public const nint m_bAnimatedEveryTick = 0x5C4; // bool
            public const nint m_flNavIgnoreUntilTime = 0x5C8; // GameTime_t
            public const nint m_hThink = 0x5CC; // uint16
            public const nint m_fBBoxVisFlags = 0x5D8; // uint8
            public const nint m_bPredictable = 0x5D9; // bool
            public const nint m_bRenderWithViewModels = 0x5DA; // bool
            public const nint m_nSplitUserPlayerPredictionSlot = 0x5DC; // CSplitScreenSlot
            public const nint m_nFirstPredictableCommand = 0x5E0; // int32
            public const nint m_nLastPredictableCommand = 0x5E4; // int32
            public const nint m_hOldMoveParent = 0x5E8; // CHandle<C_BaseEntity>
            public const nint m_Particles = 0x5F0; // CParticleProperty
            public const nint m_vecPredictedScriptFloats = 0x618; // CUtlVector<float32>
            public const nint m_vecPredictedScriptFloatIDs = 0x630; // CUtlVector<int32>
            public const nint m_nNextScriptVarRecordID = 0x660; // int32
            public const nint m_vecAngVelocity = 0x670; // QAngle
            public const nint m_DataChangeEventRef = 0x67C; // int32
            public const nint m_dependencies = 0x680; // CUtlVector<CEntityHandle>
            public const nint m_nCreationTick = 0x698; // int32
            public const nint m_bAnimTimeChanged = 0x6B9; // bool
            public const nint m_bSimulationTimeChanged = 0x6BA; // bool
            public const nint m_sUniqueHammerID = 0x6C8; // CUtlString
        }
        // Parent: C_BaseEntity
        // Fields count: 0
        public static class CLogicalEntity {
        }
        // Parent: None
        // Fields count: 5
        public static class C_BaseFlex__Emphasized_Phoneme {
            public const nint m_sClassName = 0x0; // CUtlString
            public const nint m_flAmount = 0x18; // float32
            public const nint m_bRequired = 0x1C; // bool
            public const nint m_bBasechecked = 0x1D; // bool
            public const nint m_bValid = 0x1E; // bool
        }
        // Parent: C_BaseEntity
        // Fields count: 18
        //
        // Metadata:
        // MNetworkIncludeByUserGroup
        // NetworkVarNames: m_MinFalloff (float32)
        // NetworkVarNames: m_MaxFalloff (float32)
        // NetworkVarNames: m_flFadeInDuration (float32)
        // NetworkVarNames: m_flFadeOutDuration (float32)
        // NetworkVarNames: m_flMaxWeight (float32)
        // NetworkVarNames: m_flCurWeight (float32)
        // NetworkVarNames: m_netlookupFilename (char)
        // NetworkVarNames: m_bEnabled (bool)
        // NetworkVarNames: m_bMaster (bool)
        // NetworkVarNames: m_bClientSide (bool)
        // NetworkVarNames: m_bExclusive (bool)
        public static class C_ColorCorrection {
            public const nint m_vecOrigin = 0x6D0; // Vector
            public const nint m_MinFalloff = 0x6DC; // float32
            public const nint m_MaxFalloff = 0x6E0; // float32
            public const nint m_flFadeInDuration = 0x6E4; // float32
            public const nint m_flFadeOutDuration = 0x6E8; // float32
            public const nint m_flMaxWeight = 0x6EC; // float32
            public const nint m_flCurWeight = 0x6F0; // float32
            public const nint m_netlookupFilename = 0x6F4; // char[512]
            public const nint m_bEnabled = 0x8F4; // bool
            public const nint m_bMaster = 0x8F5; // bool
            public const nint m_bClientSide = 0x8F6; // bool
            public const nint m_bExclusive = 0x8F7; // bool
            public const nint m_bEnabledOnClient = 0x8F8; // bool[1]
            public const nint m_flCurWeightOnClient = 0x8FC; // float32[1]
            public const nint m_bFadingIn = 0x900; // bool[1]
            public const nint m_flFadeStartWeight = 0x904; // float32[1]
            public const nint m_flFadeStartTime = 0x908; // float32[1]
            public const nint m_flFadeDuration = 0x90C; // float32[1]
        }
        // Parent: C_BaseEntity
        // Fields count: 1
        //
        // Metadata:
        // NetworkVarNames: m_EnvWindShared (CEnvWindShared)
        public static class C_EnvWindClientside {
            public const nint m_EnvWindShared = 0x6D0; // C_EnvWindShared
        }
        // Parent: C_BaseEntity
        // Fields count: 3
        //
        // Metadata:
        // NetworkVarNames: m_hEntAttached (CHandle< C_BaseEntity>)
        // NetworkVarNames: m_bCheapEffect (bool)
        public static class C_EntityFlame {
            public const nint m_hEntAttached = 0x6D0; // CHandle<C_BaseEntity>
            public const nint m_hOldAttached = 0x6F8; // CHandle<C_BaseEntity>
            public const nint m_bCheapEffect = 0x6FC; // bool
        }
        // Parent: None
        // Fields count: 30
        //
        // Metadata:
        // NetworkVarNames: m_hTargetEntity (CHandle< C_BaseEntity>)
        // NetworkVarNames: m_bState (bool)
        // NetworkVarNames: m_bAlwaysUpdate (bool)
        // NetworkVarNames: m_flLightFOV (float32)
        // NetworkVarNames: m_bEnableShadows (bool)
        // NetworkVarNames: m_bSimpleProjection (bool)
        // NetworkVarNames: m_bLightOnlyTarget (bool)
        // NetworkVarNames: m_bLightWorld (bool)
        // NetworkVarNames: m_bCameraSpace (bool)
        // NetworkVarNames: m_flBrightnessScale (float32)
        // NetworkVarNames: m_LightColor (Color)
        // NetworkVarNames: m_flIntensity (float32)
        // NetworkVarNames: m_flLinearAttenuation (float32)
        // NetworkVarNames: m_flQuadraticAttenuation (float32)
        // NetworkVarNames: m_bVolumetric (bool)
        // NetworkVarNames: m_flVolumetricIntensity (float32)
        // NetworkVarNames: m_flNoiseStrength (float32)
        // NetworkVarNames: m_flFlashlightTime (float32)
        // NetworkVarNames: m_nNumPlanes (uint32)
        // NetworkVarNames: m_flPlaneOffset (float32)
        // NetworkVarNames: m_flColorTransitionTime (float32)
        // NetworkVarNames: m_flAmbient (float32)
        // NetworkVarNames: m_SpotlightTextureName (char)
        // NetworkVarNames: m_nSpotlightTextureFrame (int32)
        // NetworkVarNames: m_nShadowQuality (uint32)
        // NetworkVarNames: m_flNearZ (float32)
        // NetworkVarNames: m_flFarZ (float32)
        // NetworkVarNames: m_flProjectionSize (float32)
        // NetworkVarNames: m_flRotation (float32)
        // NetworkVarNames: m_bFlipHorizontal (bool)
        public static class CProjectedTextureBase {
            public const nint m_hTargetEntity = 0xC; // CHandle<C_BaseEntity>
            public const nint m_bState = 0x10; // bool
            public const nint m_bAlwaysUpdate = 0x11; // bool
            public const nint m_flLightFOV = 0x14; // float32
            public const nint m_bEnableShadows = 0x18; // bool
            public const nint m_bSimpleProjection = 0x19; // bool
            public const nint m_bLightOnlyTarget = 0x1A; // bool
            public const nint m_bLightWorld = 0x1B; // bool
            public const nint m_bCameraSpace = 0x1C; // bool
            public const nint m_flBrightnessScale = 0x20; // float32
            public const nint m_LightColor = 0x24; // Color
            public const nint m_flIntensity = 0x28; // float32
            public const nint m_flLinearAttenuation = 0x2C; // float32
            public const nint m_flQuadraticAttenuation = 0x30; // float32
            public const nint m_bVolumetric = 0x34; // bool
            public const nint m_flVolumetricIntensity = 0x38; // float32
            public const nint m_flNoiseStrength = 0x3C; // float32
            public const nint m_flFlashlightTime = 0x40; // float32
            public const nint m_nNumPlanes = 0x44; // uint32
            public const nint m_flPlaneOffset = 0x48; // float32
            public const nint m_flColorTransitionTime = 0x4C; // float32
            public const nint m_flAmbient = 0x50; // float32
            public const nint m_SpotlightTextureName = 0x54; // char[512]
            public const nint m_nSpotlightTextureFrame = 0x254; // int32
            public const nint m_nShadowQuality = 0x258; // uint32
            public const nint m_flNearZ = 0x25C; // float32
            public const nint m_flFarZ = 0x260; // float32
            public const nint m_flProjectionSize = 0x264; // float32
            public const nint m_flRotation = 0x268; // float32
            public const nint m_bFlipHorizontal = 0x26C; // bool
        }
        // Parent: C_BaseEntity
        // Fields count: 4
        //
        // Metadata:
        // NetworkVarNames: m_flScale (float32)
        // NetworkVarNames: m_flStartScale (float32)
        // NetworkVarNames: m_flScaleTime (float)
        // NetworkVarNames: m_nFlags (uint32)
        public static class C_BaseFire {
            public const nint m_flScale = 0x6D0; // float32
            public const nint m_flStartScale = 0x6D4; // float32
            public const nint m_flScaleTime = 0x6D8; // float32
            public const nint m_nFlags = 0x6DC; // uint32
        }
        // Parent: C_BaseFire
        // Fields count: 13
        //
        // Metadata:
        // MNetworkOverride
        // MNetworkOverride
        // NetworkVarNames: m_nFlameModelIndex (int32)
        // NetworkVarNames: m_nFlameFromAboveModelIndex (int32)
        public static class C_FireSmoke {
            public const nint m_nFlameModelIndex = 0x6E0; // int32
            public const nint m_nFlameFromAboveModelIndex = 0x6E4; // int32
            public const nint m_flScaleRegister = 0x6E8; // float32
            public const nint m_flScaleStart = 0x6EC; // float32
            public const nint m_flScaleEnd = 0x6F0; // float32
            public const nint m_flScaleTimeStart = 0x6F4; // GameTime_t
            public const nint m_flScaleTimeEnd = 0x6F8; // GameTime_t
            public const nint m_flChildFlameSpread = 0x6FC; // float32
            public const nint m_flClipPerc = 0x710; // float32
            public const nint m_bClipTested = 0x714; // bool
            public const nint m_bFadingOut = 0x715; // bool
            public const nint m_tParticleSpawn = 0x718; // TimedEvent
            public const nint m_pFireOverlay = 0x720; // CFireOverlay*
        }
        // Parent: None
        // Fields count: 1
        public static class C_RopeKeyframe__CPhysicsDelegate {
            public const nint m_pKeyframe = 0x8; // C_RopeKeyframe*
        }
        // Parent: None
        // Fields count: 1
        public static class C_SceneEntity__QueuedEvents_t {
            public const nint starttime = 0x0; // float32
        }
        // Parent: C_BaseEntity
        // Fields count: 0
        public static class C_TintController {
        }
        // Parent: None
        // Fields count: 13
        public static class CFlashlightEffect {
            public const nint m_bIsOn = 0x8; // bool
            public const nint m_bMuzzleFlashEnabled = 0x18; // bool
            public const nint m_flMuzzleFlashBrightness = 0x1C; // float32
            public const nint m_quatMuzzleFlashOrientation = 0x20; // Quaternion
            public const nint m_vecMuzzleFlashOrigin = 0x30; // Vector
            public const nint m_flFov = 0x3C; // float32
            public const nint m_flFarZ = 0x40; // float32
            public const nint m_flLinearAtten = 0x44; // float32
            public const nint m_bCastsShadows = 0x48; // bool
            public const nint m_flCurrentPullBackDist = 0x4C; // float32
            public const nint m_FlashlightTexture = 0x50; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_MuzzleFlashTexture = 0x58; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_textureName = 0x60; // char[64]
        }
        // Parent: None
        // Fields count: 5
        public static class CInterpolatedValue {
            public const nint m_flStartTime = 0x0; // float32
            public const nint m_flEndTime = 0x4; // float32
            public const nint m_flStartValue = 0x8; // float32
            public const nint m_flEndValue = 0xC; // float32
            public const nint m_nInterpType = 0x10; // int32
        }
        // Parent: None
        // Fields count: 4
        public static class CGlowSprite {
            public const nint m_vColor = 0x0; // Vector
            public const nint m_flHorzSize = 0xC; // float32
            public const nint m_flVertSize = 0x10; // float32
            public const nint m_hMaterial = 0x18; // CStrongHandle<InfoForResourceTypeIMaterial2>
        }
        // Parent: None
        // Fields count: 15
        public static class CGlowOverlay {
            public const nint m_vPos = 0x8; // Vector
            public const nint m_bDirectional = 0x14; // bool
            public const nint m_vDirection = 0x18; // Vector
            public const nint m_bInSky = 0x24; // bool
            public const nint m_skyObstructionScale = 0x28; // float32
            public const nint m_Sprites = 0x30; // CGlowSprite[4]
            public const nint m_nSprites = 0xB0; // int32
            public const nint m_flProxyRadius = 0xB4; // float32
            public const nint m_flHDRColorScale = 0xB8; // float32
            public const nint m_flGlowObstructionScale = 0xBC; // float32
            public const nint m_bCacheGlowObstruction = 0xC0; // bool
            public const nint m_bCacheSkyObstruction = 0xC1; // bool
            public const nint m_bActivated = 0xC2; // int16
            public const nint m_ListIndex = 0xC4; // uint16
            public const nint m_queryHandle = 0xC8; // int32
        }
        // Parent: None
        // Fields count: 0
        public static class IClientAlphaProperty {
        }
        // Parent: C_BaseEntity
        // Fields count: 2
        public static class CSkyboxReference {
            public const nint m_worldGroupId = 0x6D0; // WorldGroupId_t
            public const nint m_hSkyCamera = 0x6D4; // CHandle<C_SkyCamera>
        }
        // Parent: C_BaseEntity
        // Fields count: 4
        //
        // Metadata:
        // NetworkVarNames: m_skyboxData (sky3dparams_t)
        // NetworkVarNames: m_skyboxSlotToken (CUtlStringToken)
        public static class C_SkyCamera {
            public const nint m_skyboxData = 0x6D0; // sky3dparams_t
            public const nint m_skyboxSlotToken = 0x760; // CUtlStringToken
            public const nint m_bUseAngles = 0x764; // bool
            public const nint m_pNext = 0x768; // C_SkyCamera*
        }
        // Parent: None
        // Fields count: 2
        public static class TimedEvent {
            public const nint m_TimeBetweenEvents = 0x0; // float32
            public const nint m_fNextEvent = 0x4; // float32
        }
        // Parent: None
        // Fields count: 8
        //
        // Metadata:
        // NetworkVarNames: m_nInteractsAs (uint64)
        // NetworkVarNames: m_nInteractsWith (uint64)
        // NetworkVarNames: m_nInteractsExclude (uint64)
        // NetworkVarNames: m_nEntityId (uint32)
        // NetworkVarNames: m_nOwnerId (uint32)
        // NetworkVarNames: m_nHierarchyId (uint16)
        // NetworkVarNames: m_nCollisionGroup (uint8)
        // NetworkVarNames: m_nCollisionFunctionMask (uint8)
        public static class VPhysicsCollisionAttribute_t {
            public const nint m_nInteractsAs = 0x8; // uint64
            public const nint m_nInteractsWith = 0x10; // uint64
            public const nint m_nInteractsExclude = 0x18; // uint64
            public const nint m_nEntityId = 0x20; // uint32
            public const nint m_nOwnerId = 0x24; // uint32
            public const nint m_nHierarchyId = 0x28; // uint16
            public const nint m_nCollisionGroup = 0x2A; // uint8
            public const nint m_nCollisionFunctionMask = 0x2B; // uint8
        }
        // Parent: None
        // Fields count: 17
        //
        // Metadata:
        // NetworkVarNames: m_collisionAttribute (VPhysicsCollisionAttribute_t)
        // NetworkVarNames: m_vecMins (Vector)
        // NetworkVarNames: m_vecMaxs (Vector)
        // NetworkVarNames: m_usSolidFlags (uint8)
        // NetworkVarNames: m_nSolidType (SolidType_t)
        // NetworkVarNames: m_triggerBloat (uint8)
        // NetworkVarNames: m_nSurroundType (SurroundingBoundsType_t)
        // NetworkVarNames: m_CollisionGroup (uint8)
        // NetworkVarNames: m_nEnablePhysics (uint8)
        // NetworkVarNames: m_vecSpecifiedSurroundingMins (Vector)
        // NetworkVarNames: m_vecSpecifiedSurroundingMaxs (Vector)
        // NetworkVarNames: m_vCapsuleCenter1 (Vector)
        // NetworkVarNames: m_vCapsuleCenter2 (Vector)
        // NetworkVarNames: m_flCapsuleRadius (float)
        public static class CCollisionProperty {
            public const nint m_collisionAttribute = 0x10; // VPhysicsCollisionAttribute_t
            public const nint m_vecMins = 0x40; // Vector
            public const nint m_vecMaxs = 0x4C; // Vector
            public const nint m_usSolidFlags = 0x5A; // uint8
            public const nint m_nSolidType = 0x5B; // SolidType_t
            public const nint m_triggerBloat = 0x5C; // uint8
            public const nint m_nSurroundType = 0x5D; // SurroundingBoundsType_t
            public const nint m_CollisionGroup = 0x5E; // uint8
            public const nint m_nEnablePhysics = 0x5F; // uint8
            public const nint m_flBoundingRadius = 0x60; // float32
            public const nint m_vecSpecifiedSurroundingMins = 0x64; // Vector
            public const nint m_vecSpecifiedSurroundingMaxs = 0x70; // Vector
            public const nint m_vecSurroundingMaxs = 0x7C; // Vector
            public const nint m_vecSurroundingMins = 0x88; // Vector
            public const nint m_vCapsuleCenter1 = 0x94; // Vector
            public const nint m_vCapsuleCenter2 = 0xA0; // Vector
            public const nint m_flCapsuleRadius = 0xAC; // float32
        }
        // Parent: None
        // Fields count: 12
        public static class CDecalInfo {
            public const nint m_flAnimationScale = 0x0; // float32
            public const nint m_flAnimationLifeSpan = 0x4; // float32
            public const nint m_flPlaceTime = 0x8; // float32
            public const nint m_flFadeStartTime = 0xC; // float32
            public const nint m_flFadeDuration = 0x10; // float32
            public const nint m_nVBSlot = 0x14; // int32
            public const nint m_nBoneIndex = 0x18; // int32
            public const nint m_vPosition = 0x28; // Vector
            public const nint m_flBoundingRadiusSqr = 0x34; // float32
            public const nint m_pNext = 0x40; // CDecalInfo*
            public const nint m_pPrev = 0x48; // CDecalInfo*
            public const nint m_nDecalMaterialIndex = 0xA8; // int32
        }
        // Parent: None
        // Fields count: 21
        //
        // Metadata:
        // NetworkVarNames: m_vOrigin (Vector)
        // NetworkVarNames: m_vStart (Vector)
        // NetworkVarNames: m_vNormal (Vector)
        // NetworkVarNames: m_vAngles (QAngle)
        // NetworkVarNames: m_hEntity (CEntityHandle)
        // NetworkVarNames: m_hOtherEntity (CEntityHandle)
        // NetworkVarNames: m_flScale (float32)
        // NetworkVarNames: m_flMagnitude (float32)
        // NetworkVarNames: m_flRadius (float32)
        // NetworkVarNames: m_nSurfaceProp (CUtlStringToken)
        // NetworkVarNames: m_nEffectIndex (HParticleSystemDefinition)
        // NetworkVarNames: m_nDamageType (uint32)
        // NetworkVarNames: m_nPenetrate (uint8)
        // NetworkVarNames: m_nMaterial (uint16)
        // NetworkVarNames: m_nHitBox (uint16)
        // NetworkVarNames: m_nColor (uint8)
        // NetworkVarNames: m_fFlags (uint8)
        // NetworkVarNames: m_nAttachmentIndex (AttachmentHandle_t)
        // NetworkVarNames: m_nAttachmentName (CUtlStringToken)
        // NetworkVarNames: m_iEffectName (uint16)
        // NetworkVarNames: m_nExplosionType (uint8)
        public static class CEffectData {
            public const nint m_vOrigin = 0x8; // Vector
            public const nint m_vStart = 0x14; // Vector
            public const nint m_vNormal = 0x20; // Vector
            public const nint m_vAngles = 0x2C; // QAngle
            public const nint m_hEntity = 0x38; // CEntityHandle
            public const nint m_hOtherEntity = 0x3C; // CEntityHandle
            public const nint m_flScale = 0x40; // float32
            public const nint m_flMagnitude = 0x44; // float32
            public const nint m_flRadius = 0x48; // float32
            public const nint m_nSurfaceProp = 0x4C; // CUtlStringToken
            public const nint m_nEffectIndex = 0x50; // CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>
            public const nint m_nDamageType = 0x58; // uint32
            public const nint m_nPenetrate = 0x5C; // uint8
            public const nint m_nMaterial = 0x5E; // uint16
            public const nint m_nHitBox = 0x60; // uint16
            public const nint m_nColor = 0x62; // uint8
            public const nint m_fFlags = 0x63; // uint8
            public const nint m_nAttachmentIndex = 0x64; // AttachmentHandle_t
            public const nint m_nAttachmentName = 0x68; // CUtlStringToken
            public const nint m_iEffectName = 0x6C; // uint16
            public const nint m_nExplosionType = 0x6E; // uint8
        }
        // Parent: C_BaseEntity
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_flFadeStartDist (float32)
        // NetworkVarNames: m_flFadeEndDist (float32)
        public static class C_EnvDetailController {
            public const nint m_flFadeStartDist = 0x6D0; // float32
            public const nint m_flFadeEndDist = 0x6D4; // float32
        }
        // Parent: None
        // Fields count: 29
        //
        // Metadata:
        // NetworkVarNames: m_flStartTime (GameTime_t)
        // NetworkVarNames: m_iWindSeed (uint32)
        // NetworkVarNames: m_iMinWind (uint16)
        // NetworkVarNames: m_iMaxWind (uint16)
        // NetworkVarNames: m_windRadius (int32)
        // NetworkVarNames: m_iMinGust (uint16)
        // NetworkVarNames: m_iMaxGust (uint16)
        // NetworkVarNames: m_flMinGustDelay (float32)
        // NetworkVarNames: m_flMaxGustDelay (float32)
        // NetworkVarNames: m_flGustDuration (float32)
        // NetworkVarNames: m_iGustDirChange (uint16)
        // NetworkVarNames: m_location (Vector)
        // NetworkVarNames: m_iInitialWindDir (uint16)
        // NetworkVarNames: m_flInitialWindSpeed (float32)
        public static class C_EnvWindShared {
            public const nint m_flStartTime = 0x8; // GameTime_t
            public const nint m_iWindSeed = 0xC; // uint32
            public const nint m_iMinWind = 0x10; // uint16
            public const nint m_iMaxWind = 0x12; // uint16
            public const nint m_windRadius = 0x14; // int32
            public const nint m_iMinGust = 0x18; // uint16
            public const nint m_iMaxGust = 0x1A; // uint16
            public const nint m_flMinGustDelay = 0x1C; // float32
            public const nint m_flMaxGustDelay = 0x20; // float32
            public const nint m_flGustDuration = 0x24; // float32
            public const nint m_iGustDirChange = 0x28; // uint16
            public const nint m_location = 0x2C; // Vector
            public const nint m_iszGustSound = 0x38; // int32
            public const nint m_iWindDir = 0x3C; // int32
            public const nint m_flWindSpeed = 0x40; // float32
            public const nint m_currentWindVector = 0x44; // Vector
            public const nint m_CurrentSwayVector = 0x50; // Vector
            public const nint m_PrevSwayVector = 0x5C; // Vector
            public const nint m_iInitialWindDir = 0x68; // uint16
            public const nint m_flInitialWindSpeed = 0x6C; // float32
            public const nint m_flVariationTime = 0x70; // GameTime_t
            public const nint m_flSwayTime = 0x74; // GameTime_t
            public const nint m_flSimTime = 0x78; // GameTime_t
            public const nint m_flSwitchTime = 0x7C; // GameTime_t
            public const nint m_flAveWindSpeed = 0x80; // float32
            public const nint m_bGusting = 0x84; // bool
            public const nint m_flWindAngleVariation = 0x88; // float32
            public const nint m_flWindSpeedVariation = 0x8C; // float32
            public const nint m_iEntIndex = 0x90; // CEntityIndex
        }
        // Parent: None
        // Fields count: 2
        public static class C_EnvWindShared__WindAveEvent_t {
            public const nint m_flStartWindSpeed = 0x0; // float32
            public const nint m_flAveWindSpeed = 0x4; // float32
        }
        // Parent: None
        // Fields count: 2
        public static class C_EnvWindShared__WindVariationEvent_t {
            public const nint m_flWindAngleVariation = 0x0; // float32
            public const nint m_flWindSpeedVariation = 0x4; // float32
        }
        // Parent: C_BaseEntity
        // Fields count: 0
        public static class C_InfoLadderDismount {
        }
        // Parent: None
        // Fields count: 12
        //
        // Metadata:
        // NetworkVarNames: m_nModelID (int32)
        // NetworkVarNames: m_hMaterial (HMaterialStrong)
        // NetworkVarNames: m_solid (ShardSolid_t)
        // NetworkVarNames: m_ShatterPanelMode (ShatterPanelMode)
        // NetworkVarNames: m_vecPanelSize (Vector2D)
        // NetworkVarNames: m_vecStressPositionA (Vector2D)
        // NetworkVarNames: m_vecStressPositionB (Vector2D)
        // NetworkVarNames: m_vecPanelVertices (Vector2D)
        // NetworkVarNames: m_flGlassHalfThickness (float)
        // NetworkVarNames: m_bHasParent (bool)
        // NetworkVarNames: m_bParentFrozen (bool)
        // NetworkVarNames: m_SurfacePropStringToken (CUtlStringToken)
        public static class shard_model_desc_t {
            public const nint m_nModelID = 0x8; // int32
            public const nint m_hMaterial = 0x10; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_solid = 0x18; // ShardSolid_t
            public const nint m_ShatterPanelMode = 0x19; // ShatterPanelMode
            public const nint m_vecPanelSize = 0x1C; // Vector2D
            public const nint m_vecStressPositionA = 0x24; // Vector2D
            public const nint m_vecStressPositionB = 0x2C; // Vector2D
            public const nint m_vecPanelVertices = 0x38; // C_NetworkUtlVectorBase<Vector2D>
            public const nint m_flGlassHalfThickness = 0x50; // float32
            public const nint m_bHasParent = 0x54; // bool
            public const nint m_bParentFrozen = 0x55; // bool
            public const nint m_SurfacePropStringToken = 0x58; // CUtlStringToken
        }
        // Parent: C_BaseEntity
        // Fields count: 0
        public static class C_GameRulesProxy {
        }
        // Parent: None
        // Fields count: 0
        public static class C_GameRules {
        }
        // Parent: None
        // Fields count: 11
        //
        // Metadata:
        // NetworkVarNames: m_iGlowType (int32)
        // NetworkVarNames: m_iGlowTeam (int32)
        // NetworkVarNames: m_nGlowRange (int32)
        // NetworkVarNames: m_nGlowRangeMin (int32)
        // NetworkVarNames: m_glowColorOverride (Color)
        // NetworkVarNames: m_bFlashing (bool)
        // NetworkVarNames: m_flGlowTime (float)
        // NetworkVarNames: m_flGlowStartTime (float)
        // NetworkVarNames: m_bEligibleForScreenHighlight (bool)
        public static class CGlowProperty {
            public const nint m_fGlowColor = 0x8; // Vector
            public const nint m_iGlowType = 0x30; // int32
            public const nint m_iGlowTeam = 0x34; // int32
            public const nint m_nGlowRange = 0x38; // int32
            public const nint m_nGlowRangeMin = 0x3C; // int32
            public const nint m_glowColorOverride = 0x40; // Color
            public const nint m_bFlashing = 0x44; // bool
            public const nint m_flGlowTime = 0x48; // float32
            public const nint m_flGlowStartTime = 0x4C; // float32
            public const nint m_bEligibleForScreenHighlight = 0x50; // bool
            public const nint m_bGlowing = 0x51; // bool
        }
        // Parent: C_GameRules
        // Fields count: 0
        public static class C_MultiplayRules {
        }
        // Parent: None
        // Fields count: 25
        //
        // Metadata:
        // NetworkVarNames: dirPrimary (Vector)
        // NetworkVarNames: colorPrimary (Color)
        // NetworkVarNames: colorSecondary (Color)
        // NetworkVarNames: colorPrimaryLerpTo (Color)
        // NetworkVarNames: colorSecondaryLerpTo (Color)
        // NetworkVarNames: start (float32)
        // NetworkVarNames: end (float32)
        // NetworkVarNames: farz (float32)
        // NetworkVarNames: maxdensity (float32)
        // NetworkVarNames: exponent (float32)
        // NetworkVarNames: HDRColorScale (float32)
        // NetworkVarNames: skyboxFogFactor (float32)
        // NetworkVarNames: skyboxFogFactorLerpTo (float32)
        // NetworkVarNames: startLerpTo (float32)
        // NetworkVarNames: endLerpTo (float32)
        // NetworkVarNames: maxdensityLerpTo (float32)
        // NetworkVarNames: lerptime (GameTime_t)
        // NetworkVarNames: duration (float32)
        // NetworkVarNames: blendtobackground (float32)
        // NetworkVarNames: scattering (float32)
        // NetworkVarNames: locallightscale (float32)
        // NetworkVarNames: enable (bool)
        // NetworkVarNames: blend (bool)
        // NetworkVarNames: m_bNoReflectionFog (bool)
        public static class fogparams_t {
            public const nint dirPrimary = 0x8; // Vector
            public const nint colorPrimary = 0x14; // Color
            public const nint colorSecondary = 0x18; // Color
            public const nint colorPrimaryLerpTo = 0x1C; // Color
            public const nint colorSecondaryLerpTo = 0x20; // Color
            public const nint start = 0x24; // float32
            public const nint end = 0x28; // float32
            public const nint farz = 0x2C; // float32
            public const nint maxdensity = 0x30; // float32
            public const nint exponent = 0x34; // float32
            public const nint HDRColorScale = 0x38; // float32
            public const nint skyboxFogFactor = 0x3C; // float32
            public const nint skyboxFogFactorLerpTo = 0x40; // float32
            public const nint startLerpTo = 0x44; // float32
            public const nint endLerpTo = 0x48; // float32
            public const nint maxdensityLerpTo = 0x4C; // float32
            public const nint lerptime = 0x50; // GameTime_t
            public const nint duration = 0x54; // float32
            public const nint blendtobackground = 0x58; // float32
            public const nint scattering = 0x5C; // float32
            public const nint locallightscale = 0x60; // float32
            public const nint enable = 0x64; // bool
            public const nint blend = 0x65; // bool
            public const nint m_bNoReflectionFog = 0x66; // bool
            public const nint m_bPadding = 0x67; // bool
        }
        // Parent: None
        // Fields count: 14
        //
        // Metadata:
        // NetworkVarNames: m_hCtrl (CHandle< CFogController>)
        public static class C_fogplayerparams_t {
            public const nint m_hCtrl = 0x8; // CHandle<C_FogController>
            public const nint m_flTransitionTime = 0xC; // float32
            public const nint m_OldColor = 0x10; // Color
            public const nint m_flOldStart = 0x14; // float32
            public const nint m_flOldEnd = 0x18; // float32
            public const nint m_flOldMaxDensity = 0x1C; // float32
            public const nint m_flOldHDRColorScale = 0x20; // float32
            public const nint m_flOldFarZ = 0x24; // float32
            public const nint m_NewColor = 0x28; // Color
            public const nint m_flNewStart = 0x2C; // float32
            public const nint m_flNewEnd = 0x30; // float32
            public const nint m_flNewMaxDensity = 0x34; // float32
            public const nint m_flNewHDRColorScale = 0x38; // float32
            public const nint m_flNewFarZ = 0x3C; // float32
        }
        // Parent: None
        // Fields count: 6
        //
        // Metadata:
        // NetworkVarNames: scale (int16)
        // NetworkVarNames: origin (Vector)
        // NetworkVarNames: bClip3DSkyBoxNearToWorldFar (bool)
        // NetworkVarNames: flClip3DSkyBoxNearToWorldFarOffset (float32)
        // NetworkVarNames: fog (fogparams_t)
        // NetworkVarNames: m_nWorldGroupID (WorldGroupId_t)
        public static class sky3dparams_t {
            public const nint scale = 0x8; // int16
            public const nint origin = 0xC; // Vector
            public const nint bClip3DSkyBoxNearToWorldFar = 0x18; // bool
            public const nint flClip3DSkyBoxNearToWorldFarOffset = 0x1C; // float32
            public const nint fog = 0x20; // fogparams_t
            public const nint m_nWorldGroupID = 0x88; // WorldGroupId_t
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // NetworkVarNames: m_Transforms (CTransform)
        // NetworkVarNames: m_hOwner (EHANDLE)
        public static class PhysicsRagdollPose_t {
            public const nint __m_pChainEntity = 0x8; // CNetworkVarChainer
            public const nint m_Transforms = 0x30; // C_NetworkUtlVectorBase<CTransform>
            public const nint m_hOwner = 0x48; // CHandle<C_BaseEntity>
            public const nint m_bDirty = 0x68; // bool
        }
        // Parent: C_GameRules
        // Fields count: 0
        public static class C_SingleplayRules {
        }
        // Parent: C_BaseEntity
        // Fields count: 5
        //
        // Metadata:
        // NetworkVarNames: m_iszStackName (string_t)
        // NetworkVarNames: m_iszOperatorName (string_t)
        // NetworkVarNames: m_iszOpvarName (string_t)
        // NetworkVarNames: m_iOpvarIndex (int)
        // NetworkVarNames: m_bUseAutoCompare (bool)
        public static class C_SoundOpvarSetPointBase {
            public const nint m_iszStackName = 0x6D0; // CUtlSymbolLarge
            public const nint m_iszOperatorName = 0x6D8; // CUtlSymbolLarge
            public const nint m_iszOpvarName = 0x6E0; // CUtlSymbolLarge
            public const nint m_iOpvarIndex = 0x6E8; // int32
            public const nint m_bUseAutoCompare = 0x6EC; // bool
        }
        // Parent: C_SoundOpvarSetPointBase
        // Fields count: 0
        public static class C_SoundOpvarSetPointEntity {
        }
        // Parent: C_SoundOpvarSetPointEntity
        // Fields count: 0
        public static class C_SoundOpvarSetAABBEntity {
        }
        // Parent: C_SoundOpvarSetAABBEntity
        // Fields count: 0
        public static class C_SoundOpvarSetOBBEntity {
        }
        // Parent: C_SoundOpvarSetPointEntity
        // Fields count: 0
        public static class C_SoundOpvarSetPathCornerEntity {
        }
        // Parent: C_SoundOpvarSetPointEntity
        // Fields count: 0
        public static class C_SoundOpvarSetAutoRoomEntity {
        }
        // Parent: C_SoundOpvarSetPointBase
        // Fields count: 0
        public static class C_SoundOpvarSetOBBWindEntity {
        }
        // Parent: C_MultiplayRules
        // Fields count: 0
        public static class C_TeamplayRules {
        }
        // Parent: C_BaseEntity
        // Fields count: 30
        //
        // Metadata:
        // NetworkVarNames: m_bTimerPaused (bool)
        // NetworkVarNames: m_flTimeRemaining (float)
        // NetworkVarNames: m_flTimerEndTime (GameTime_t)
        // NetworkVarNames: m_bIsDisabled (bool)
        // NetworkVarNames: m_bShowInHUD (bool)
        // NetworkVarNames: m_nTimerLength (int)
        // NetworkVarNames: m_nTimerInitialLength (int)
        // NetworkVarNames: m_nTimerMaxLength (int)
        // NetworkVarNames: m_bAutoCountdown (bool)
        // NetworkVarNames: m_nSetupTimeLength (int)
        // NetworkVarNames: m_nState (int)
        // NetworkVarNames: m_bStartPaused (bool)
        // NetworkVarNames: m_bInCaptureWatchState (bool)
        // NetworkVarNames: m_flTotalTime (float)
        // NetworkVarNames: m_bStopWatchTimer (bool)
        public static class C_TeamRoundTimer {
            public const nint m_bTimerPaused = 0x6D0; // bool
            public const nint m_flTimeRemaining = 0x6D4; // float32
            public const nint m_flTimerEndTime = 0x6D8; // GameTime_t
            public const nint m_bIsDisabled = 0x6DC; // bool
            public const nint m_bShowInHUD = 0x6DD; // bool
            public const nint m_nTimerLength = 0x6E0; // int32
            public const nint m_nTimerInitialLength = 0x6E4; // int32
            public const nint m_nTimerMaxLength = 0x6E8; // int32
            public const nint m_bAutoCountdown = 0x6EC; // bool
            public const nint m_nSetupTimeLength = 0x6F0; // int32
            public const nint m_nState = 0x6F4; // int32
            public const nint m_bStartPaused = 0x6F8; // bool
            public const nint m_bInCaptureWatchState = 0x6F9; // bool
            public const nint m_flTotalTime = 0x6FC; // float32
            public const nint m_bStopWatchTimer = 0x700; // bool
            public const nint m_bFireFinished = 0x701; // bool
            public const nint m_bFire5MinRemain = 0x702; // bool
            public const nint m_bFire4MinRemain = 0x703; // bool
            public const nint m_bFire3MinRemain = 0x704; // bool
            public const nint m_bFire2MinRemain = 0x705; // bool
            public const nint m_bFire1MinRemain = 0x706; // bool
            public const nint m_bFire30SecRemain = 0x707; // bool
            public const nint m_bFire10SecRemain = 0x708; // bool
            public const nint m_bFire5SecRemain = 0x709; // bool
            public const nint m_bFire4SecRemain = 0x70A; // bool
            public const nint m_bFire3SecRemain = 0x70B; // bool
            public const nint m_bFire2SecRemain = 0x70C; // bool
            public const nint m_bFire1SecRemain = 0x70D; // bool
            public const nint m_nOldTimerLength = 0x710; // int32
            public const nint m_nOldTimerState = 0x714; // int32
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_Attributes (CEconItemAttribute)
        public static class CAttributeList {
            public const nint m_Attributes = 0x8; // C_UtlVectorEmbeddedNetworkVar<CEconItemAttribute>
            public const nint m_pManager = 0x58; // CAttributeManager*
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // NetworkVarNames: m_iAttributeDefinitionIndex (attrib_definition_index_t)
        // NetworkVarNames: m_flValue (float)
        // NetworkVarNames: m_flInitialValue (float)
        // NetworkVarNames: m_nRefundableCurrency (int)
        // NetworkVarNames: m_bSetBonus (bool)
        public static class CEconItemAttribute {
            public const nint m_iAttributeDefinitionIndex = 0x30; // uint16
            public const nint m_flValue = 0x34; // float32
            public const nint m_flInitialValue = 0x38; // float32
            public const nint m_nRefundableCurrency = 0x3C; // int32
            public const nint m_bSetBonus = 0x40; // bool
        }
        // Parent: None
        // Fields count: 6
        //
        // Metadata:
        // NetworkVarNames: m_iReapplyProvisionParity (int)
        // NetworkVarNames: m_hOuter (EHANDLE)
        // NetworkVarNames: m_ProviderType (attributeprovidertypes_t)
        public static class CAttributeManager {
            public const nint m_Providers = 0x8; // CUtlVector<CHandle<C_BaseEntity>>
            public const nint m_iReapplyProvisionParity = 0x20; // int32
            public const nint m_hOuter = 0x24; // CHandle<C_BaseEntity>
            public const nint m_bPreventLoopback = 0x28; // bool
            public const nint m_ProviderType = 0x2C; // attributeprovidertypes_t
            public const nint m_CachedResults = 0x30; // CUtlVector<CAttributeManager::cached_attribute_float_t>
        }
        // Parent: None
        // Fields count: 3
        public static class CAttributeManager__cached_attribute_float_t {
            public const nint flIn = 0x0; // float32
            public const nint iAttribHook = 0x8; // CUtlSymbolLarge
            public const nint flOut = 0x10; // float32
        }
        // Parent: CAttributeManager
        // Fields count: 3
        //
        // Metadata:
        // MNetworkIncludeByName
        // MNetworkIncludeByName
        // MNetworkIncludeByName
        // MNetworkIncludeByName
        // NetworkVarNames: m_Item (CEconItemView)
        public static class C_AttributeContainer {
            public const nint m_Item = 0x50; // C_EconItemView
            public const nint m_iExternalItemProviderRegisteredToken = 0x13A0; // int32
            public const nint m_ullRegisteredAsItemID = 0x13A8; // uint64
        }
        // Parent: None
        // Fields count: 1
        public static class C_EconEntity__AttachedModelData_t {
            public const nint m_iModelDisplayFlags = 0x0; // int32
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_bSpotted (bool)
        // NetworkVarNames: m_bSpottedByMask (uint32)
        public static class EntitySpottedState_t {
            public const nint m_bSpotted = 0x8; // bool
            public const nint m_bSpottedByMask = 0xC; // uint32[2]
        }
        // Parent: C_GameRulesProxy
        // Fields count: 1
        //
        // Metadata:
        // NetworkVarNames: m_pGameRules (CCSGameRules*)
        public static class C_CSGameRulesProxy {
            public const nint m_pGameRules = 0x6D0; // C_CSGameRules*
        }
        // Parent: C_TeamplayRules
        // Fields count: 117
        //
        // Metadata:
        // NetworkVarNames: m_bFreezePeriod (bool)
        // NetworkVarNames: m_bWarmupPeriod (bool)
        // NetworkVarNames: m_fWarmupPeriodEnd (GameTime_t)
        // NetworkVarNames: m_fWarmupPeriodStart (GameTime_t)
        // NetworkVarNames: m_nTotalPausedTicks (int)
        // NetworkVarNames: m_nPauseStartTick (int)
        // NetworkVarNames: m_bServerPaused (bool)
        // NetworkVarNames: m_bGamePaused (bool)
        // NetworkVarNames: m_bTerroristTimeOutActive (bool)
        // NetworkVarNames: m_bCTTimeOutActive (bool)
        // NetworkVarNames: m_flTerroristTimeOutRemaining (float)
        // NetworkVarNames: m_flCTTimeOutRemaining (float)
        // NetworkVarNames: m_nTerroristTimeOuts (int)
        // NetworkVarNames: m_nCTTimeOuts (int)
        // NetworkVarNames: m_bTechnicalTimeOut (bool)
        // NetworkVarNames: m_bMatchWaitingForResume (bool)
        // NetworkVarNames: m_iRoundTime (int)
        // NetworkVarNames: m_fMatchStartTime (float)
        // NetworkVarNames: m_fRoundStartTime (GameTime_t)
        // NetworkVarNames: m_flRestartRoundTime (GameTime_t)
        // NetworkVarNames: m_bGameRestart (bool)
        // NetworkVarNames: m_flGameStartTime (float)
        // NetworkVarNames: m_timeUntilNextPhaseStarts (float)
        // NetworkVarNames: m_gamePhase (int)
        // NetworkVarNames: m_totalRoundsPlayed (int)
        // NetworkVarNames: m_nRoundsPlayedThisPhase (int)
        // NetworkVarNames: m_nOvertimePlaying (int)
        // NetworkVarNames: m_iHostagesRemaining (int)
        // NetworkVarNames: m_bAnyHostageReached (bool)
        // NetworkVarNames: m_bMapHasBombTarget (bool)
        // NetworkVarNames: m_bMapHasRescueZone (bool)
        // NetworkVarNames: m_bMapHasBuyZone (bool)
        // NetworkVarNames: m_bIsQueuedMatchmaking (bool)
        // NetworkVarNames: m_nQueuedMatchmakingMode (int)
        // NetworkVarNames: m_bIsValveDS (bool)
        // NetworkVarNames: m_bLogoMap (bool)
        // NetworkVarNames: m_bPlayAllStepSoundsOnServer (bool)
        // NetworkVarNames: m_iSpectatorSlotCount (int)
        // NetworkVarNames: m_MatchDevice (int)
        // NetworkVarNames: m_bHasMatchStarted (bool)
        // NetworkVarNames: m_nNextMapInMapgroup (int)
        // NetworkVarNames: m_szTournamentEventName (char)
        // NetworkVarNames: m_szTournamentEventStage (char)
        // NetworkVarNames: m_szMatchStatTxt (char)
        // NetworkVarNames: m_szTournamentPredictionsTxt (char)
        // NetworkVarNames: m_nTournamentPredictionsPct (int)
        // NetworkVarNames: m_flCMMItemDropRevealStartTime (GameTime_t)
        // NetworkVarNames: m_flCMMItemDropRevealEndTime (GameTime_t)
        // NetworkVarNames: m_bIsDroppingItems (bool)
        // NetworkVarNames: m_bIsQuestEligible (bool)
        // NetworkVarNames: m_bIsHltvActive (bool)
        // NetworkVarNames: m_nGuardianModeWaveNumber (int)
        // NetworkVarNames: m_nGuardianModeSpecialKillsRemaining (int)
        // NetworkVarNames: m_nGuardianModeSpecialWeaponNeeded (int)
        // NetworkVarNames: m_numGlobalGiftsGiven (uint32)
        // NetworkVarNames: m_numGlobalGifters (uint32)
        // NetworkVarNames: m_numGlobalGiftsPeriodSeconds (uint32)
        // NetworkVarNames: m_arrFeaturedGiftersAccounts (uint32)
        // NetworkVarNames: m_arrFeaturedGiftersGifts (uint32)
        // NetworkVarNames: m_arrProhibitedItemIndices (uint16)
        // NetworkVarNames: m_arrTournamentActiveCasterAccounts (uint32)
        // NetworkVarNames: m_numBestOfMaps (int)
        // NetworkVarNames: m_nHalloweenMaskListSeed (int)
        // NetworkVarNames: m_bBombDropped (bool)
        // NetworkVarNames: m_bBombPlanted (bool)
        // NetworkVarNames: m_iRoundWinStatus (int)
        // NetworkVarNames: m_eRoundWinReason (int)
        // NetworkVarNames: m_bTCantBuy (bool)
        // NetworkVarNames: m_bCTCantBuy (bool)
        // NetworkVarNames: m_flGuardianBuyUntilTime (GameTime_t)
        // NetworkVarNames: m_iMatchStats_RoundResults (int)
        // NetworkVarNames: m_iMatchStats_PlayersAlive_CT (int)
        // NetworkVarNames: m_iMatchStats_PlayersAlive_T (int)
        // NetworkVarNames: m_TeamRespawnWaveTimes (float)
        // NetworkVarNames: m_flNextRespawnWave (GameTime_t)
        // NetworkVarNames: m_nServerQuestID (int)
        // NetworkVarNames: m_vMinimapMins (Vector)
        // NetworkVarNames: m_vMinimapMaxs (Vector)
        // NetworkVarNames: m_MinimapVerticalSectionHeights (float)
        // NetworkVarNames: m_nEndMatchMapGroupVoteTypes (int)
        // NetworkVarNames: m_nEndMatchMapGroupVoteOptions (int)
        // NetworkVarNames: m_nEndMatchMapVoteWinner (int)
        // NetworkVarNames: m_iNumConsecutiveCTLoses (int)
        // NetworkVarNames: m_iNumConsecutiveTerroristLoses (int)
        // NetworkVarNames: m_nMatchAbortedEarlyReason (int)
        // NetworkVarNames: m_pGameModeRules (CCSGameModeRules *)
        // NetworkVarNames: m_RetakeRules (CRetakeGameRules)
        // NetworkVarNames: m_nMatchEndCount (uint8)
        // NetworkVarNames: m_nTTeamIntroVariant (int)
        // NetworkVarNames: m_nCTTeamIntroVariant (int)
        // NetworkVarNames: m_bTeamIntroPeriod (bool)
        // NetworkVarNames: m_iRoundEndWinnerTeam (int)
        // NetworkVarNames: m_eRoundEndReason (int)
        // NetworkVarNames: m_bRoundEndShowTimerDefend (bool)
        // NetworkVarNames: m_iRoundEndTimerTime (int)
        // NetworkVarNames: m_sRoundEndFunFactToken (CUtlString)
        // NetworkVarNames: m_iRoundEndFunFactPlayerSlot (CPlayerSlot)
        // NetworkVarNames: m_iRoundEndFunFactData1 (int)
        // NetworkVarNames: m_iRoundEndFunFactData2 (int)
        // NetworkVarNames: m_iRoundEndFunFactData3 (int)
        // NetworkVarNames: m_sRoundEndMessage (CUtlString)
        // NetworkVarNames: m_iRoundEndPlayerCount (int)
        // NetworkVarNames: m_bRoundEndNoMusic (bool)
        // NetworkVarNames: m_iRoundEndLegacy (int)
        // NetworkVarNames: m_nRoundEndCount (uint8)
        // NetworkVarNames: m_iRoundStartRoundNumber (int)
        // NetworkVarNames: m_nRoundStartCount (uint8)
        public static class C_CSGameRules {
            public const nint __m_pChainEntity = 0x8; // CNetworkVarChainer
            public const nint m_bFreezePeriod = 0x30; // bool
            public const nint m_bWarmupPeriod = 0x31; // bool
            public const nint m_fWarmupPeriodEnd = 0x34; // GameTime_t
            public const nint m_fWarmupPeriodStart = 0x38; // GameTime_t
            public const nint m_nTotalPausedTicks = 0x3C; // int32
            public const nint m_nPauseStartTick = 0x40; // int32
            public const nint m_bServerPaused = 0x44; // bool
            public const nint m_bGamePaused = 0x45; // bool
            public const nint m_bTerroristTimeOutActive = 0x46; // bool
            public const nint m_bCTTimeOutActive = 0x47; // bool
            public const nint m_flTerroristTimeOutRemaining = 0x48; // float32
            public const nint m_flCTTimeOutRemaining = 0x4C; // float32
            public const nint m_nTerroristTimeOuts = 0x50; // int32
            public const nint m_nCTTimeOuts = 0x54; // int32
            public const nint m_bTechnicalTimeOut = 0x58; // bool
            public const nint m_bMatchWaitingForResume = 0x59; // bool
            public const nint m_iRoundTime = 0x5C; // int32
            public const nint m_fMatchStartTime = 0x60; // float32
            public const nint m_fRoundStartTime = 0x64; // GameTime_t
            public const nint m_flRestartRoundTime = 0x68; // GameTime_t
            public const nint m_bGameRestart = 0x6C; // bool
            public const nint m_flGameStartTime = 0x70; // float32
            public const nint m_timeUntilNextPhaseStarts = 0x74; // float32
            public const nint m_gamePhase = 0x78; // int32
            public const nint m_totalRoundsPlayed = 0x7C; // int32
            public const nint m_nRoundsPlayedThisPhase = 0x80; // int32
            public const nint m_nOvertimePlaying = 0x84; // int32
            public const nint m_iHostagesRemaining = 0x88; // int32
            public const nint m_bAnyHostageReached = 0x8C; // bool
            public const nint m_bMapHasBombTarget = 0x8D; // bool
            public const nint m_bMapHasRescueZone = 0x8E; // bool
            public const nint m_bMapHasBuyZone = 0x8F; // bool
            public const nint m_bIsQueuedMatchmaking = 0x90; // bool
            public const nint m_nQueuedMatchmakingMode = 0x94; // int32
            public const nint m_bIsValveDS = 0x98; // bool
            public const nint m_bLogoMap = 0x99; // bool
            public const nint m_bPlayAllStepSoundsOnServer = 0x9A; // bool
            public const nint m_iSpectatorSlotCount = 0x9C; // int32
            public const nint m_MatchDevice = 0xA0; // int32
            public const nint m_bHasMatchStarted = 0xA4; // bool
            public const nint m_nNextMapInMapgroup = 0xA8; // int32
            public const nint m_szTournamentEventName = 0xAC; // char[512]
            public const nint m_szTournamentEventStage = 0x2AC; // char[512]
            public const nint m_szMatchStatTxt = 0x4AC; // char[512]
            public const nint m_szTournamentPredictionsTxt = 0x6AC; // char[512]
            public const nint m_nTournamentPredictionsPct = 0x8AC; // int32
            public const nint m_flCMMItemDropRevealStartTime = 0x8B0; // GameTime_t
            public const nint m_flCMMItemDropRevealEndTime = 0x8B4; // GameTime_t
            public const nint m_bIsDroppingItems = 0x8B8; // bool
            public const nint m_bIsQuestEligible = 0x8B9; // bool
            public const nint m_bIsHltvActive = 0x8BA; // bool
            public const nint m_nGuardianModeWaveNumber = 0x8BC; // int32
            public const nint m_nGuardianModeSpecialKillsRemaining = 0x8C0; // int32
            public const nint m_nGuardianModeSpecialWeaponNeeded = 0x8C4; // int32
            public const nint m_nGuardianGrenadesToGiveBots = 0x8C8; // int32
            public const nint m_nNumHeaviesToSpawn = 0x8CC; // int32
            public const nint m_numGlobalGiftsGiven = 0x8D0; // uint32
            public const nint m_numGlobalGifters = 0x8D4; // uint32
            public const nint m_numGlobalGiftsPeriodSeconds = 0x8D8; // uint32
            public const nint m_arrFeaturedGiftersAccounts = 0x8DC; // uint32[4]
            public const nint m_arrFeaturedGiftersGifts = 0x8EC; // uint32[4]
            public const nint m_arrProhibitedItemIndices = 0x8FC; // uint16[100]
            public const nint m_arrTournamentActiveCasterAccounts = 0x9C4; // uint32[4]
            public const nint m_numBestOfMaps = 0x9D4; // int32
            public const nint m_nHalloweenMaskListSeed = 0x9D8; // int32
            public const nint m_bBombDropped = 0x9DC; // bool
            public const nint m_bBombPlanted = 0x9DD; // bool
            public const nint m_iRoundWinStatus = 0x9E0; // int32
            public const nint m_eRoundWinReason = 0x9E4; // int32
            public const nint m_bTCantBuy = 0x9E8; // bool
            public const nint m_bCTCantBuy = 0x9E9; // bool
            public const nint m_flGuardianBuyUntilTime = 0x9EC; // GameTime_t
            public const nint m_iMatchStats_RoundResults = 0x9F0; // int32[30]
            public const nint m_iMatchStats_PlayersAlive_CT = 0xA68; // int32[30]
            public const nint m_iMatchStats_PlayersAlive_T = 0xAE0; // int32[30]
            public const nint m_TeamRespawnWaveTimes = 0xB58; // float32[32]
            public const nint m_flNextRespawnWave = 0xBD8; // GameTime_t[32]
            public const nint m_nServerQuestID = 0xC58; // int32
            public const nint m_vMinimapMins = 0xC5C; // Vector
            public const nint m_vMinimapMaxs = 0xC68; // Vector
            public const nint m_MinimapVerticalSectionHeights = 0xC74; // float32[8]
            public const nint m_bDontIncrementCoopWave = 0xC94; // bool
            public const nint m_bSpawnedTerrorHuntHeavy = 0xC95; // bool
            public const nint m_nEndMatchMapGroupVoteTypes = 0xC98; // int32[10]
            public const nint m_nEndMatchMapGroupVoteOptions = 0xCC0; // int32[10]
            public const nint m_nEndMatchMapVoteWinner = 0xCE8; // int32
            public const nint m_iNumConsecutiveCTLoses = 0xCEC; // int32
            public const nint m_iNumConsecutiveTerroristLoses = 0xCF0; // int32
            public const nint m_bMarkClientStopRecordAtRoundEnd = 0xD10; // bool
            public const nint m_nMatchAbortedEarlyReason = 0xD68; // int32
            public const nint m_bHasTriggeredRoundStartMusic = 0xD6C; // bool
            public const nint m_bHasTriggeredCoopSpawnReset = 0xD6D; // bool
            public const nint m_bSwitchingTeamsAtRoundReset = 0xD6E; // bool
            public const nint m_pGameModeRules = 0xD88; // CCSGameModeRules*
            public const nint m_RetakeRules = 0xD90; // C_RetakeGameRules
            public const nint m_nMatchEndCount = 0xEA8; // uint8
            public const nint m_nTTeamIntroVariant = 0xEAC; // int32
            public const nint m_nCTTeamIntroVariant = 0xEB0; // int32
            public const nint m_bTeamIntroPeriod = 0xEB4; // bool
            public const nint m_iRoundEndWinnerTeam = 0xEB8; // int32
            public const nint m_eRoundEndReason = 0xEBC; // int32
            public const nint m_bRoundEndShowTimerDefend = 0xEC0; // bool
            public const nint m_iRoundEndTimerTime = 0xEC4; // int32
            public const nint m_sRoundEndFunFactToken = 0xEC8; // CUtlString
            public const nint m_iRoundEndFunFactPlayerSlot = 0xED0; // CPlayerSlot
            public const nint m_iRoundEndFunFactData1 = 0xED4; // int32
            public const nint m_iRoundEndFunFactData2 = 0xED8; // int32
            public const nint m_iRoundEndFunFactData3 = 0xEDC; // int32
            public const nint m_sRoundEndMessage = 0xEE0; // CUtlString
            public const nint m_iRoundEndPlayerCount = 0xEE8; // int32
            public const nint m_bRoundEndNoMusic = 0xEEC; // bool
            public const nint m_iRoundEndLegacy = 0xEF0; // int32
            public const nint m_nRoundEndCount = 0xEF4; // uint8
            public const nint m_iRoundStartRoundNumber = 0xEF8; // int32
            public const nint m_nRoundStartCount = 0xEFC; // uint8
            public const nint m_flLastPerfSampleTime = 0x4F08; // float64
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseProvideFeatureTag
        // MPulseLibraryBindings
        public static class CCSTakeDamageInfoAPI {
        }
        // Parent: None
        // Fields count: 1
        public static class CCSGameModeRules {
            public const nint __m_pChainEntity = 0x8; // CNetworkVarChainer
        }
        // Parent: CCSGameModeRules
        // Fields count: 0
        public static class CCSGameModeRules_Noop {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseInstanceDomainInfo
        // MPulseLibraryBindings
        // MPulseDomainOptInFeatureTag
        public static class CCSGameModeScript {
        }
        // Parent: CCSGameModeRules
        // Fields count: 1
        //
        // Metadata:
        // NetworkVarNames: m_WeaponSequence (CUtlString)
        public static class CCSGameModeRules_ArmsRace {
            public const nint m_WeaponSequence = 0x38; // C_NetworkUtlVectorBase<CUtlString>
        }
        // Parent: CCSGameModeScript
        // Fields count: 1
        //
        // Metadata:
        // MPulseInstanceDomainInfo
        // MPulseLibraryBindings
        // MPulseDomainOptInFeatureTag
        public static class CCSArmsRaceScript {
            public const nint m_pOuter = 0xD8; // CCSGameModeRules_ArmsRace*
        }
        // Parent: CCSGameModeRules
        // Fields count: 3
        //
        // Metadata:
        // NetworkVarNames: m_flDMBonusStartTime (GameTime_t)
        // NetworkVarNames: m_flDMBonusTimeLength (float)
        // NetworkVarNames: m_nDMBonusWeaponLoadoutSlot (int16)
        public static class CCSGameModeRules_Deathmatch {
            public const nint m_flDMBonusStartTime = 0x38; // GameTime_t
            public const nint m_flDMBonusTimeLength = 0x3C; // float32
            public const nint m_nDMBonusWeaponLoadoutSlot = 0x40; // int16
        }
        // Parent: CCSGameModeScript
        // Fields count: 1
        //
        // Metadata:
        // MPulseInstanceDomainInfo
        // MPulseLibraryBindings
        // MPulseDomainOptInFeatureTag
        public static class CCSDeathmatchScript {
            public const nint m_pOuter = 0xD8; // CCSGameModeRules_Deathmatch*
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // NetworkVarNames: m_nMatchSeed (int)
        // NetworkVarNames: m_bBlockersPresent (bool)
        // NetworkVarNames: m_bRoundInProgress (bool)
        // NetworkVarNames: m_iFirstSecondHalfRound (int)
        // NetworkVarNames: m_iBombSite (int)
        public static class C_RetakeGameRules {
            public const nint m_nMatchSeed = 0xF8; // int32
            public const nint m_bBlockersPresent = 0xFC; // bool
            public const nint m_bRoundInProgress = 0xFD; // bool
            public const nint m_iFirstSecondHalfRound = 0x100; // int32
            public const nint m_iBombSite = 0x104; // int32
        }
        // Parent: None
        // Fields count: 13
        //
        // Metadata:
        // NetworkVarNames: m_iKills (int)
        // NetworkVarNames: m_iDeaths (int)
        // NetworkVarNames: m_iAssists (int)
        // NetworkVarNames: m_iDamage (int)
        // NetworkVarNames: m_iEquipmentValue (int)
        // NetworkVarNames: m_iMoneySaved (int)
        // NetworkVarNames: m_iKillReward (int)
        // NetworkVarNames: m_iLiveTime (int)
        // NetworkVarNames: m_iHeadShotKills (int)
        // NetworkVarNames: m_iObjective (int)
        // NetworkVarNames: m_iCashEarned (int)
        // NetworkVarNames: m_iUtilityDamage (int)
        // NetworkVarNames: m_iEnemiesFlashed (int)
        public static class CSPerRoundStats_t {
            public const nint m_iKills = 0x30; // int32
            public const nint m_iDeaths = 0x34; // int32
            public const nint m_iAssists = 0x38; // int32
            public const nint m_iDamage = 0x3C; // int32
            public const nint m_iEquipmentValue = 0x40; // int32
            public const nint m_iMoneySaved = 0x44; // int32
            public const nint m_iKillReward = 0x48; // int32
            public const nint m_iLiveTime = 0x4C; // int32
            public const nint m_iHeadShotKills = 0x50; // int32
            public const nint m_iObjective = 0x54; // int32
            public const nint m_iCashEarned = 0x58; // int32
            public const nint m_iUtilityDamage = 0x5C; // int32
            public const nint m_iEnemiesFlashed = 0x60; // int32
        }
        // Parent: CSPerRoundStats_t
        // Fields count: 5
        //
        // Metadata:
        // NetworkVarNames: m_iEnemy5Ks (int)
        // NetworkVarNames: m_iEnemy4Ks (int)
        // NetworkVarNames: m_iEnemy3Ks (int)
        // NetworkVarNames: m_iEnemyKnifeKills (int)
        // NetworkVarNames: m_iEnemyTaserKills (int)
        public static class CSMatchStats_t {
            public const nint m_iEnemy5Ks = 0x64; // int32
            public const nint m_iEnemy4Ks = 0x68; // int32
            public const nint m_iEnemy3Ks = 0x6C; // int32
            public const nint m_iEnemyKnifeKills = 0x70; // int32
            public const nint m_iEnemyTaserKills = 0x74; // int32
        }
        // Parent: C_BaseEntity
        // Fields count: 8
        //
        // Metadata:
        // NetworkVarNames: m_nVariant (int)
        // NetworkVarNames: m_nRandom (int)
        // NetworkVarNames: m_nOrdinal (int)
        // NetworkVarNames: m_sWeaponName (CUtlString)
        // NetworkVarNames: m_xuid (XUID)
        // NetworkVarNames: m_agentItem (CEconItemView)
        // NetworkVarNames: m_glovesItem (CEconItemView)
        // NetworkVarNames: m_weaponItem (CEconItemView)
        public static class C_CSGO_TeamPreviewCharacterPosition {
            public const nint m_nVariant = 0x6D0; // int32
            public const nint m_nRandom = 0x6D4; // int32
            public const nint m_nOrdinal = 0x6D8; // int32
            public const nint m_sWeaponName = 0x6E0; // CUtlString
            public const nint m_xuid = 0x6E8; // uint64
            public const nint m_agentItem = 0x6F0; // C_EconItemView
            public const nint m_glovesItem = 0x1A40; // C_EconItemView
            public const nint m_weaponItem = 0x2D90; // C_EconItemView
        }
        // Parent: C_CSGO_TeamPreviewCharacterPosition
        // Fields count: 0
        public static class C_CSGO_TeamSelectCharacterPosition {
        }
        // Parent: C_CSGO_TeamSelectCharacterPosition
        // Fields count: 0
        public static class C_CSGO_TeamSelectTerroristPosition {
        }
        // Parent: C_CSGO_TeamSelectCharacterPosition
        // Fields count: 0
        public static class C_CSGO_TeamSelectCounterTerroristPosition {
        }
        // Parent: C_CSGO_TeamPreviewCharacterPosition
        // Fields count: 0
        public static class C_CSGO_TeamIntroCharacterPosition {
        }
        // Parent: C_CSGO_TeamIntroCharacterPosition
        // Fields count: 0
        public static class C_CSGO_TeamIntroTerroristPosition {
        }
        // Parent: C_CSGO_TeamIntroCharacterPosition
        // Fields count: 0
        public static class C_CSGO_TeamIntroCounterTerroristPosition {
        }
        // Parent: C_CSGO_TeamIntroCharacterPosition
        // Fields count: 0
        public static class CCSGO_WingmanIntroCharacterPosition {
        }
        // Parent: CCSGO_WingmanIntroCharacterPosition
        // Fields count: 0
        public static class CCSGO_WingmanIntroTerroristPosition {
        }
        // Parent: CCSGO_WingmanIntroCharacterPosition
        // Fields count: 0
        public static class CCSGO_WingmanIntroCounterTerroristPosition {
        }
        // Parent: C_BaseEntity
        // Fields count: 0
        public static class C_CSMinimapBoundary {
        }
        // Parent: C_BaseEntity
        // Fields count: 5
        //
        // Metadata:
        // NetworkVarNames: m_hPlayer (CHandle< CCSPlayerPawn>)
        // NetworkVarNames: m_hPingedEntity (CHandle< CBaseEntity>)
        // NetworkVarNames: m_iType (int)
        // NetworkVarNames: m_bUrgent (bool)
        // NetworkVarNames: m_szPlaceName (char)
        public static class C_PlayerPing {
            public const nint m_hPlayer = 0x700; // CHandle<C_CSPlayerPawn>
            public const nint m_hPingedEntity = 0x704; // CHandle<C_BaseEntity>
            public const nint m_iType = 0x708; // int32
            public const nint m_bUrgent = 0x70C; // bool
            public const nint m_szPlaceName = 0x70D; // char[18]
        }
        // Parent: CPlayerPawnComponent
        // Fields count: 1
        //
        // Metadata:
        // NetworkVarNames: m_hPlayerPing (CHandle< CBaseEntity>)
        public static class CCSPlayer_PingServices {
            public const nint m_hPlayerPing = 0x40; // CHandle<C_BaseEntity>
        }
        // Parent: C_BaseEntity
        // Fields count: 10
        //
        // Metadata:
        // NetworkVarNames: m_bHostageAlive (bool)
        // NetworkVarNames: m_isHostageFollowingSomeone (bool)
        // NetworkVarNames: m_iHostageEntityIDs (CEntityIndex)
        // NetworkVarNames: m_bombsiteCenterA (Vector)
        // NetworkVarNames: m_bombsiteCenterB (Vector)
        // NetworkVarNames: m_hostageRescueX (int)
        // NetworkVarNames: m_hostageRescueY (int)
        // NetworkVarNames: m_hostageRescueZ (int)
        // NetworkVarNames: m_bEndMatchNextMapAllVoted (bool)
        public static class C_CSPlayerResource {
            public const nint m_bHostageAlive = 0x6D0; // bool[12]
            public const nint m_isHostageFollowingSomeone = 0x6DC; // bool[12]
            public const nint m_iHostageEntityIDs = 0x6E8; // CEntityIndex[12]
            public const nint m_bombsiteCenterA = 0x718; // Vector
            public const nint m_bombsiteCenterB = 0x724; // Vector
            public const nint m_hostageRescueX = 0x730; // int32[4]
            public const nint m_hostageRescueY = 0x740; // int32[4]
            public const nint m_hostageRescueZ = 0x750; // int32[4]
            public const nint m_bEndMatchNextMapAllVoted = 0x760; // bool
            public const nint m_foundGoalPositions = 0x761; // bool
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseProvideFeatureTag
        // MPulseLibraryBindings
        public static class CCSPlayerControllerAPI {
        }
        // Parent: CPlayerPawnComponent
        // Fields count: 0
        public static class CPlayer_ViewModelServices {
        }
        // Parent: CPlayer_CameraServices
        // Fields count: 6
        //
        // Metadata:
        // NetworkVarNames: m_iFOV (uint32)
        // NetworkVarNames: m_iFOVStart (uint32)
        // NetworkVarNames: m_flFOVTime (GameTime_t)
        // NetworkVarNames: m_flFOVRate (float32)
        // NetworkVarNames: m_hZoomOwner (CHandle< CBaseEntity>)
        public static class CCSPlayerBase_CameraServices {
            public const nint m_iFOV = 0x210; // uint32
            public const nint m_iFOVStart = 0x214; // uint32
            public const nint m_flFOVTime = 0x218; // GameTime_t
            public const nint m_flFOVRate = 0x21C; // float32
            public const nint m_hZoomOwner = 0x220; // CHandle<C_BaseEntity>
            public const nint m_flLastShotFOV = 0x224; // float32
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_nItemDefIndex (uint16)
        // NetworkVarNames: m_nCount (uint16)
        public static class WeaponPurchaseCount_t {
            public const nint m_nItemDefIndex = 0x30; // uint16
            public const nint m_nCount = 0x32; // uint16
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // NetworkVarNames: m_weaponPurchases (WeaponPurchaseCount_t)
        public static class WeaponPurchaseTracker_t {
            public const nint m_weaponPurchases = 0x8; // C_UtlVectorEmbeddedNetworkVar<WeaponPurchaseCount_t>
        }
        // Parent: CPlayerPawnComponent
        // Fields count: 4
        //
        // Metadata:
        // NetworkVarNames: m_bIsRescuing (bool)
        // NetworkVarNames: m_weaponPurchasesThisMatch (WeaponPurchaseTracker_t)
        // NetworkVarNames: m_weaponPurchasesThisRound (WeaponPurchaseTracker_t)
        public static class CCSPlayer_ActionTrackingServices {
            public const nint m_hLastWeaponBeforeC4AutoSwitch = 0x40; // CHandle<C_BasePlayerWeapon>
            public const nint m_bIsRescuing = 0x44; // bool
            public const nint m_weaponPurchasesThisMatch = 0x48; // WeaponPurchaseTracker_t
            public const nint m_weaponPurchasesThisRound = 0xA0; // WeaponPurchaseTracker_t
        }
        // Parent: CPlayerPawnComponent
        // Fields count: 1
        //
        // Metadata:
        // NetworkVarNames: m_totalHitsOnServer (int32)
        public static class CCSPlayer_BulletServices {
            public const nint m_totalHitsOnServer = 0x40; // int32
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // NetworkVarNames: m_unDefIdx (item_definition_index_t)
        // NetworkVarNames: m_nCost (int)
        // NetworkVarNames: m_nPrevArmor (int)
        // NetworkVarNames: m_bPrevHelmet (bool)
        // NetworkVarNames: m_hItem (CEntityHandle)
        public static class SellbackPurchaseEntry_t {
            public const nint m_unDefIdx = 0x30; // uint16
            public const nint m_nCost = 0x34; // int32
            public const nint m_nPrevArmor = 0x38; // int32
            public const nint m_bPrevHelmet = 0x3C; // bool
            public const nint m_hItem = 0x40; // CEntityHandle
        }
        // Parent: CPlayerPawnComponent
        // Fields count: 1
        //
        // Metadata:
        // NetworkVarNames: m_vecSellbackPurchaseEntries (SellbackPurchaseEntry_t)
        public static class CCSPlayer_BuyServices {
            public const nint m_vecSellbackPurchaseEntries = 0x40; // C_UtlVectorEmbeddedNetworkVar<SellbackPurchaseEntry_t>
        }
        // Parent: CCSPlayerBase_CameraServices
        // Fields count: 1
        public static class CCSPlayer_CameraServices {
            public const nint m_flDeathCamTilt = 0x228; // float32
        }
        // Parent: CPlayerPawnComponent
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_hCarriedHostage (CHandle< CBaseEntity>)
        // NetworkVarNames: m_hCarriedHostageProp (CHandle< CBaseEntity>)
        public static class CCSPlayer_HostageServices {
            public const nint m_hCarriedHostage = 0x40; // CHandle<C_BaseEntity>
            public const nint m_hCarriedHostageProp = 0x44; // CHandle<C_BaseEntity>
        }
        // Parent: CPlayer_ItemServices
        // Fields count: 3
        //
        // Metadata:
        // NetworkVarNames: m_bHasDefuser (bool)
        // NetworkVarNames: m_bHasHelmet (bool)
        // NetworkVarNames: m_bHasHeavyArmor (bool)
        public static class CCSPlayer_ItemServices {
            public const nint m_bHasDefuser = 0x40; // bool
            public const nint m_bHasHelmet = 0x41; // bool
            public const nint m_bHasHeavyArmor = 0x42; // bool
        }
        // Parent: CPlayer_MovementServices_Humanoid
        // Fields count: 37
        //
        // Metadata:
        // NetworkVarNames: m_flMaxFallVelocity (float)
        // NetworkVarNames: m_vecLadderNormal (Vector)
        // NetworkVarNames: m_nLadderSurfacePropIndex (int)
        // NetworkVarNames: m_flDuckAmount (float)
        // NetworkVarNames: m_flDuckSpeed (float)
        // NetworkVarNames: m_bDuckOverride (bool)
        // NetworkVarNames: m_bDesiresDuck (bool)
        // NetworkVarNames: m_nDuckTimeMsecs (uint32)
        // NetworkVarNames: m_nDuckJumpTimeMsecs (uint32)
        // NetworkVarNames: m_nJumpTimeMsecs (uint32)
        // NetworkVarNames: m_flLastDuckTime (float)
        // NetworkVarNames: m_nGameCodeHasMovedPlayerAfterCommand (int)
        // NetworkVarNames: m_bOldJumpPressed (bool)
        // NetworkVarNames: m_flJumpUntil (float)
        // NetworkVarNames: m_flJumpVel (float)
        // NetworkVarNames: m_fStashGrenadeParameterWhen (GameTime_t)
        // NetworkVarNames: m_nButtonDownMaskPrev (ButtonBitMask_t)
        // NetworkVarNames: m_flOffsetTickCompleteTime (float)
        // NetworkVarNames: m_flOffsetTickStashedSpeed (float)
        // NetworkVarNames: m_flStamina (float)
        public static class CCSPlayer_MovementServices {
            public const nint m_flMaxFallVelocity = 0x214; // float32
            public const nint m_vecLadderNormal = 0x218; // Vector
            public const nint m_nLadderSurfacePropIndex = 0x224; // int32
            public const nint m_flDuckAmount = 0x228; // float32
            public const nint m_flDuckSpeed = 0x22C; // float32
            public const nint m_bDuckOverride = 0x230; // bool
            public const nint m_bDesiresDuck = 0x231; // bool
            public const nint m_flDuckOffset = 0x234; // float32
            public const nint m_nDuckTimeMsecs = 0x238; // uint32
            public const nint m_nDuckJumpTimeMsecs = 0x23C; // uint32
            public const nint m_nJumpTimeMsecs = 0x240; // uint32
            public const nint m_flLastDuckTime = 0x244; // float32
            public const nint m_vecLastPositionAtFullCrouchSpeed = 0x250; // Vector2D
            public const nint m_duckUntilOnGround = 0x258; // bool
            public const nint m_bHasWalkMovedSinceLastJump = 0x259; // bool
            public const nint m_bInStuckTest = 0x25A; // bool
            public const nint m_flStuckCheckTime = 0x268; // float32[64][2]
            public const nint m_nTraceCount = 0x468; // int32
            public const nint m_StuckLast = 0x46C; // int32
            public const nint m_bSpeedCropped = 0x470; // bool
            public const nint m_nOldWaterLevel = 0x474; // int32
            public const nint m_flWaterEntryTime = 0x478; // float32
            public const nint m_vecForward = 0x47C; // Vector
            public const nint m_vecLeft = 0x488; // Vector
            public const nint m_vecUp = 0x494; // Vector
            public const nint m_nGameCodeHasMovedPlayerAfterCommand = 0x4A0; // int32
            public const nint m_bOldJumpPressed = 0x4A4; // bool
            public const nint m_flJumpPressedTime = 0x4A8; // float32
            public const nint m_flJumpUntil = 0x4AC; // float32
            public const nint m_flJumpVel = 0x4B0; // float32
            public const nint m_fStashGrenadeParameterWhen = 0x4B4; // GameTime_t
            public const nint m_nButtonDownMaskPrev = 0x4B8; // uint64
            public const nint m_flOffsetTickCompleteTime = 0x4C0; // float32
            public const nint m_flOffsetTickStashedSpeed = 0x4C4; // float32
            public const nint m_flStamina = 0x4C8; // float32
            public const nint m_flHeightAtJumpStart = 0x4CC; // float32
            public const nint m_flMaxJumpHeightThisJump = 0x4D0; // float32
        }
        // Parent: CPlayer_UseServices
        // Fields count: 0
        public static class CCSPlayer_UseServices {
        }
        // Parent: CPlayer_ViewModelServices
        // Fields count: 1
        //
        // Metadata:
        // NetworkVarNames: m_hViewModel (CHandle< CBaseViewModel >)
        public static class CCSPlayer_ViewModelServices {
            public const nint m_hViewModel = 0x40; // CHandle<C_BaseViewModel>[3]
        }
        // Parent: CPlayer_WaterServices
        // Fields count: 3
        public static class CCSPlayer_WaterServices {
            public const nint m_flWaterJumpTime = 0x40; // float32
            public const nint m_vecWaterJumpVel = 0x44; // Vector
            public const nint m_flSwimSoundTime = 0x50; // float32
        }
        // Parent: CPlayer_WeaponServices
        // Fields count: 5
        //
        // Metadata:
        // NetworkVarNames: m_flNextAttack (GameTime_t)
        // NetworkVarNames: m_bIsLookingAtWeapon (bool)
        // NetworkVarNames: m_bIsHoldingLookAtWeapon (bool)
        public static class CCSPlayer_WeaponServices {
            public const nint m_flNextAttack = 0xB8; // GameTime_t
            public const nint m_bIsLookingAtWeapon = 0xBC; // bool
            public const nint m_bIsHoldingLookAtWeapon = 0xBD; // bool
            public const nint m_nOldShootPositionHistoryCount = 0xC0; // uint32
            public const nint m_nOldInputHistoryCount = 0x458; // uint32
        }
        // Parent: CPlayer_ObserverServices
        // Fields count: 8
        public static class CCSObserver_ObserverServices {
            public const nint m_hLastObserverTarget = 0x58; // CEntityHandle
            public const nint m_vecObserverInterpolateOffset = 0x5C; // Vector
            public const nint m_vecObserverInterpStartPos = 0x68; // Vector
            public const nint m_flObsInterp_PathLength = 0x74; // float32
            public const nint m_qObsInterp_OrientationStart = 0x80; // Quaternion
            public const nint m_qObsInterp_OrientationTravelDir = 0x90; // Quaternion
            public const nint m_obsInterpState = 0xA0; // ObserverInterpState_t
            public const nint m_bObserverInterpolationNeedsDeferredSetup = 0xA4; // bool
        }
        // Parent: CCSPlayerBase_CameraServices
        // Fields count: 0
        public static class CCSObserver_CameraServices {
        }
        // Parent: CPlayer_MovementServices
        // Fields count: 0
        public static class CCSObserver_MovementServices {
        }
        // Parent: CPlayer_UseServices
        // Fields count: 0
        public static class CCSObserver_UseServices {
        }
        // Parent: CPlayer_ViewModelServices
        // Fields count: 0
        public static class CCSObserver_ViewModelServices {
        }
        // Parent: CPlayerControllerComponent
        // Fields count: 5
        //
        // Metadata:
        // NetworkVarNames: m_perRoundStats (CSPerRoundStats_t)
        // NetworkVarNames: m_matchStats (CSMatchStats_t)
        // NetworkVarNames: m_iNumRoundKills (int)
        // NetworkVarNames: m_iNumRoundKillsHeadshots (int)
        // NetworkVarNames: m_unTotalRoundDamageDealt (uint32)
        public static class CCSPlayerController_ActionTrackingServices {
            public const nint m_perRoundStats = 0x40; // C_UtlVectorEmbeddedNetworkVar<CSPerRoundStats_t>
            public const nint m_matchStats = 0x90; // CSMatchStats_t
            public const nint m_iNumRoundKills = 0x108; // int32
            public const nint m_iNumRoundKillsHeadshots = 0x10C; // int32
            public const nint m_unTotalRoundDamageDealt = 0x110; // uint32
        }
        // Parent: None
        // Fields count: 14
        //
        // Metadata:
        // NetworkVarNames: m_PlayerDamager (CHandle< CCSPlayerPawnBase >)
        // NetworkVarNames: m_PlayerRecipient (CHandle< CCSPlayerPawnBase >)
        // NetworkVarNames: m_hPlayerControllerDamager (CHandle< CCSPlayerController >)
        // NetworkVarNames: m_hPlayerControllerRecipient (CHandle< CCSPlayerController >)
        // NetworkVarNames: m_szPlayerDamagerName (CUtlString)
        // NetworkVarNames: m_szPlayerRecipientName (CUtlString)
        // NetworkVarNames: m_DamagerXuid (uint64)
        // NetworkVarNames: m_RecipientXuid (uint64)
        // NetworkVarNames: m_iDamage (int)
        // NetworkVarNames: m_iActualHealthRemoved (int)
        // NetworkVarNames: m_iNumHits (int)
        // NetworkVarNames: m_iLastBulletUpdate (int)
        // NetworkVarNames: m_bIsOtherEnemy (bool)
        // NetworkVarNames: m_killType (EKillTypes_t)
        public static class CDamageRecord {
            public const nint m_PlayerDamager = 0x28; // CHandle<C_CSPlayerPawnBase>
            public const nint m_PlayerRecipient = 0x2C; // CHandle<C_CSPlayerPawnBase>
            public const nint m_hPlayerControllerDamager = 0x30; // CHandle<CCSPlayerController>
            public const nint m_hPlayerControllerRecipient = 0x34; // CHandle<CCSPlayerController>
            public const nint m_szPlayerDamagerName = 0x38; // CUtlString
            public const nint m_szPlayerRecipientName = 0x40; // CUtlString
            public const nint m_DamagerXuid = 0x48; // uint64
            public const nint m_RecipientXuid = 0x50; // uint64
            public const nint m_iDamage = 0x58; // int32
            public const nint m_iActualHealthRemoved = 0x5C; // int32
            public const nint m_iNumHits = 0x60; // int32
            public const nint m_iLastBulletUpdate = 0x64; // int32
            public const nint m_bIsOtherEnemy = 0x68; // bool
            public const nint m_killType = 0x69; // EKillTypes_t
        }
        // Parent: CPlayerControllerComponent
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_nSendUpdate (int)
        // NetworkVarNames: m_DamageList (CDamageRecord)
        public static class CCSPlayerController_DamageServices {
            public const nint m_nSendUpdate = 0x40; // int32
            public const nint m_DamageList = 0x48; // C_UtlVectorEmbeddedNetworkVar<CDamageRecord>
        }
        // Parent: CPlayerControllerComponent
        // Fields count: 5
        //
        // Metadata:
        // NetworkVarNames: m_iAccount (int)
        // NetworkVarNames: m_iStartAccount (int)
        // NetworkVarNames: m_iTotalCashSpent (int)
        // NetworkVarNames: m_iCashSpentThisRound (int)
        public static class CCSPlayerController_InGameMoneyServices {
            public const nint m_iAccount = 0x40; // int32
            public const nint m_iStartAccount = 0x44; // int32
            public const nint m_iTotalCashSpent = 0x48; // int32
            public const nint m_iCashSpentThisRound = 0x4C; // int32
            public const nint m_nPreviousAccount = 0x50; // int32
        }
        // Parent: None
        // Fields count: 3
        public static class ServerAuthoritativeWeaponSlot_t {
            public const nint unClass = 0x28; // uint16
            public const nint unSlot = 0x2A; // uint16
            public const nint unItemDefIdx = 0x2C; // uint16
        }
        // Parent: CPlayerControllerComponent
        // Fields count: 8
        //
        // Metadata:
        // NetworkVarNames: m_unMusicID (item_definition_index_t)
        // NetworkVarNames: m_rank (MedalRank_t)
        // NetworkVarNames: m_nPersonaDataPublicLevel (int)
        // NetworkVarNames: m_nPersonaDataPublicCommendsLeader (int)
        // NetworkVarNames: m_nPersonaDataPublicCommendsTeacher (int)
        // NetworkVarNames: m_nPersonaDataPublicCommendsFriendly (int)
        // NetworkVarNames: m_nPersonaDataXpTrailLevel (int)
        // NetworkVarNames: m_vecServerAuthoritativeWeaponSlots (ServerAuthoritativeWeaponSlot_t)
        public static class CCSPlayerController_InventoryServices {
            public const nint m_unMusicID = 0x40; // uint16
            public const nint m_rank = 0x44; // MedalRank_t[6]
            public const nint m_nPersonaDataPublicLevel = 0x5C; // int32
            public const nint m_nPersonaDataPublicCommendsLeader = 0x60; // int32
            public const nint m_nPersonaDataPublicCommendsTeacher = 0x64; // int32
            public const nint m_nPersonaDataPublicCommendsFriendly = 0x68; // int32
            public const nint m_nPersonaDataXpTrailLevel = 0x6C; // int32
            public const nint m_vecServerAuthoritativeWeaponSlots = 0x70; // C_UtlVectorEmbeddedNetworkVar<ServerAuthoritativeWeaponSlot_t>
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseProvideFeatureTag
        // MPulseLibraryBindings
        public static class CCSWeaponBaseVDataAPI {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseProvideFeatureTag
        // MPulseLibraryBindings
        public static class CCSWeaponBaseAPI {
        }
        // Parent: None
        // Fields count: 13
        public static class C_IronSightController {
            public const nint m_bIronSightAvailable = 0x10; // bool
            public const nint m_flIronSightAmount = 0x14; // float32
            public const nint m_flIronSightAmountGained = 0x18; // float32
            public const nint m_flIronSightAmountBiased = 0x1C; // float32
            public const nint m_flIronSightAmount_Interpolated = 0x20; // float32
            public const nint m_flIronSightAmountGained_Interpolated = 0x24; // float32
            public const nint m_flIronSightAmountBiased_Interpolated = 0x28; // float32
            public const nint m_flInterpolationLastUpdated = 0x2C; // float32
            public const nint m_angDeltaAverage = 0x30; // QAngle[8]
            public const nint m_angViewLast = 0x90; // QAngle
            public const nint m_vecDotCoords = 0x9C; // Vector2D
            public const nint m_flDotBlur = 0xA4; // float32
            public const nint m_flSpeedRatio = 0xA8; // float32
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyElementNameFn
        public static class CompositeMaterialMatchFilter_t {
            public const nint m_nCompositeMaterialMatchFilterType = 0x0; // CompositeMaterialMatchFilterType_t
            public const nint m_strMatchFilter = 0x8; // CUtlString
            public const nint m_strMatchValue = 0x10; // CUtlString
            public const nint m_bPassWhenTrue = 0x18; // bool
        }
        // Parent: None
        // Fields count: 34
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyElementNameFn
        public static class CompositeMaterialInputLooseVariable_t {
            public const nint m_strName = 0x0; // CUtlString
            public const nint m_bExposeExternally = 0x8; // bool
            public const nint m_strExposedFriendlyName = 0x10; // CUtlString
            public const nint m_strExposedFriendlyGroupName = 0x18; // CUtlString
            public const nint m_bExposedVariableIsFixedRange = 0x20; // bool
            public const nint m_strExposedVisibleWhenTrue = 0x28; // CUtlString
            public const nint m_strExposedHiddenWhenTrue = 0x30; // CUtlString
            public const nint m_nVariableType = 0x38; // CompositeMaterialInputLooseVariableType_t
            public const nint m_bValueBoolean = 0x3C; // bool
            public const nint m_nValueIntX = 0x40; // int32
            public const nint m_nValueIntY = 0x44; // int32
            public const nint m_nValueIntZ = 0x48; // int32
            public const nint m_nValueIntW = 0x4C; // int32
            public const nint m_bHasFloatBounds = 0x50; // bool
            public const nint m_flValueFloatX = 0x54; // float32
            public const nint m_flValueFloatX_Min = 0x58; // float32
            public const nint m_flValueFloatX_Max = 0x5C; // float32
            public const nint m_flValueFloatY = 0x60; // float32
            public const nint m_flValueFloatY_Min = 0x64; // float32
            public const nint m_flValueFloatY_Max = 0x68; // float32
            public const nint m_flValueFloatZ = 0x6C; // float32
            public const nint m_flValueFloatZ_Min = 0x70; // float32
            public const nint m_flValueFloatZ_Max = 0x74; // float32
            public const nint m_flValueFloatW = 0x78; // float32
            public const nint m_flValueFloatW_Min = 0x7C; // float32
            public const nint m_flValueFloatW_Max = 0x80; // float32
            public const nint m_cValueColor4 = 0x84; // Color
            public const nint m_nValueSystemVar = 0x88; // CompositeMaterialVarSystemVar_t
            public const nint m_strResourceMaterial = 0x90; // CResourceName
            public const nint m_strTextureContentAssetPath = 0x170; // CUtlString
            public const nint m_strTextureRuntimeResourcePath = 0x178; // CResourceName
            public const nint m_strTextureCompilationVtexTemplate = 0x258; // CUtlString
            public const nint m_nTextureType = 0x260; // CompositeMaterialInputTextureType_t
            public const nint m_strString = 0x268; // CUtlString
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyElementNameFn
        public static class CompMatMutatorCondition_t {
            public const nint m_nMutatorCondition = 0x0; // CompMatPropertyMutatorConditionType_t
            public const nint m_strMutatorConditionContainerName = 0x8; // CUtlString
            public const nint m_strMutatorConditionContainerVarName = 0x10; // CUtlString
            public const nint m_strMutatorConditionContainerVarValue = 0x18; // CUtlString
            public const nint m_bPassWhenTrue = 0x20; // bool
        }
        // Parent: None
        // Fields count: 28
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyElementNameFn
        public static class CompMatPropertyMutator_t {
            public const nint m_bEnabled = 0x0; // bool
            public const nint m_nMutatorCommandType = 0x4; // CompMatPropertyMutatorType_t
            public const nint m_strInitWith_Container = 0x8; // CUtlString
            public const nint m_strCopyProperty_InputContainerSrc = 0x10; // CUtlString
            public const nint m_strCopyProperty_InputContainerProperty = 0x18; // CUtlString
            public const nint m_strCopyProperty_TargetProperty = 0x20; // CUtlString
            public const nint m_strRandomRollInputVars_SeedInputVar = 0x28; // CUtlString
            public const nint m_vecRandomRollInputVars_InputVarsToRoll = 0x30; // CUtlVector<CUtlString>
            public const nint m_strCopyMatchingKeys_InputContainerSrc = 0x48; // CUtlString
            public const nint m_strCopyKeysWithSuffix_InputContainerSrc = 0x50; // CUtlString
            public const nint m_strCopyKeysWithSuffix_FindSuffix = 0x58; // CUtlString
            public const nint m_strCopyKeysWithSuffix_ReplaceSuffix = 0x60; // CUtlString
            public const nint m_nSetValue_Value = 0x68; // CompositeMaterialInputLooseVariable_t
            public const nint m_strGenerateTexture_TargetParam = 0x2D8; // CUtlString
            public const nint m_strGenerateTexture_InitialContainer = 0x2E0; // CUtlString
            public const nint m_nResolution = 0x2E8; // int32
            public const nint m_bIsScratchTarget = 0x2EC; // bool
            public const nint m_bSplatDebugInfo = 0x2ED; // bool
            public const nint m_bCaptureInRenderDoc = 0x2EE; // bool
            public const nint m_vecTexGenInstructions = 0x2F0; // CUtlVector<CompMatPropertyMutator_t>
            public const nint m_vecConditionalMutators = 0x308; // CUtlVector<CompMatPropertyMutator_t>
            public const nint m_strPopInputQueue_Container = 0x320; // CUtlString
            public const nint m_strDrawText_InputContainerSrc = 0x328; // CUtlString
            public const nint m_strDrawText_InputContainerProperty = 0x330; // CUtlString
            public const nint m_vecDrawText_Position = 0x338; // Vector2D
            public const nint m_colDrawText_Color = 0x340; // Color
            public const nint m_strDrawText_Font = 0x348; // CUtlString
            public const nint m_vecConditions = 0x350; // CUtlVector<CompMatMutatorCondition_t>
        }
        // Parent: None
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyElementNameFn
        public static class CompositeMaterialInputContainer_t {
            public const nint m_bEnabled = 0x0; // bool
            public const nint m_nCompositeMaterialInputContainerSourceType = 0x4; // CompositeMaterialInputContainerSourceType_t
            public const nint m_strSpecificContainerMaterial = 0x8; // CResourceName
            public const nint m_strAttrName = 0xE8; // CUtlString
            public const nint m_strAlias = 0xF0; // CUtlString
            public const nint m_vecLooseVariables = 0xF8; // CUtlVector<CompositeMaterialInputLooseVariable_t>
            public const nint m_strAttrNameForVar = 0x110; // CUtlString
            public const nint m_bExposeExternally = 0x118; // bool
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyElementNameFn
        public static class CompositeMaterialAssemblyProcedure_t {
            public const nint m_vecCompMatIncludes = 0x0; // CUtlVector<CResourceName>
            public const nint m_vecMatchFilters = 0x18; // CUtlVector<CompositeMaterialMatchFilter_t>
            public const nint m_vecCompositeInputContainers = 0x30; // CUtlVector<CompositeMaterialInputContainer_t>
            public const nint m_vecPropertyMutators = 0x48; // CUtlVector<CompMatPropertyMutator_t>
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MPropertyElementNameFn
        public static class GeneratedTextureHandle_t {
            public const nint m_strBitmapName = 0x0; // CUtlString
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // MPropertyElementNameFn
        public static class CompositeMaterial_t {
            public const nint m_TargetKVs = 0x8; // KeyValues3
            public const nint m_PreGenerationKVs = 0x18; // KeyValues3
            public const nint m_FinalKVs = 0x28; // KeyValues3
            public const nint m_vecGeneratedTextures = 0x40; // CUtlVector<GeneratedTextureHandle_t>
        }
        // Parent: None
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CompositeMaterialEditorPoint_t {
            public const nint m_ModelName = 0x0; // CResourceName
            public const nint m_nSequenceIndex = 0xE0; // int32
            public const nint m_flCycle = 0xE4; // float32
            public const nint m_KVModelStateChoices = 0xE8; // KeyValues3
            public const nint m_bEnableChildModel = 0xF8; // bool
            public const nint m_ChildModelName = 0x100; // CResourceName
            public const nint m_vecCompositeMaterialAssemblyProcedures = 0x1E0; // CUtlVector<CompositeMaterialAssemblyProcedure_t>
            public const nint m_vecCompositeMaterials = 0x1F8; // CUtlVector<CompositeMaterial_t>
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CCompositeMaterialEditorDoc {
            public const nint m_nVersion = 0x8; // int32
            public const nint m_Points = 0x10; // CUtlVector<CompositeMaterialEditorPoint_t>
            public const nint m_KVthumbnail = 0x28; // KeyValues3
        }
        // Parent: None
        // Fields count: 43
        public static class CGlobalLightBase {
            public const nint m_bSpotLight = 0x10; // bool
            public const nint m_SpotLightOrigin = 0x14; // Vector
            public const nint m_SpotLightAngles = 0x20; // QAngle
            public const nint m_ShadowDirection = 0x2C; // Vector
            public const nint m_AmbientDirection = 0x38; // Vector
            public const nint m_SpecularDirection = 0x44; // Vector
            public const nint m_InspectorSpecularDirection = 0x50; // Vector
            public const nint m_flSpecularPower = 0x5C; // float32
            public const nint m_flSpecularIndependence = 0x60; // float32
            public const nint m_SpecularColor = 0x64; // Color
            public const nint m_bStartDisabled = 0x68; // bool
            public const nint m_bEnabled = 0x69; // bool
            public const nint m_LightColor = 0x6A; // Color
            public const nint m_AmbientColor1 = 0x6E; // Color
            public const nint m_AmbientColor2 = 0x72; // Color
            public const nint m_AmbientColor3 = 0x76; // Color
            public const nint m_flSunDistance = 0x7C; // float32
            public const nint m_flFOV = 0x80; // float32
            public const nint m_flNearZ = 0x84; // float32
            public const nint m_flFarZ = 0x88; // float32
            public const nint m_bEnableShadows = 0x8C; // bool
            public const nint m_bOldEnableShadows = 0x8D; // bool
            public const nint m_bBackgroundClearNotRequired = 0x8E; // bool
            public const nint m_flCloudScale = 0x90; // float32
            public const nint m_flCloud1Speed = 0x94; // float32
            public const nint m_flCloud1Direction = 0x98; // float32
            public const nint m_flCloud2Speed = 0x9C; // float32
            public const nint m_flCloud2Direction = 0xA0; // float32
            public const nint m_flAmbientScale1 = 0xB0; // float32
            public const nint m_flAmbientScale2 = 0xB4; // float32
            public const nint m_flGroundScale = 0xB8; // float32
            public const nint m_flLightScale = 0xBC; // float32
            public const nint m_flFoWDarkness = 0xC0; // float32
            public const nint m_bEnableSeparateSkyboxFog = 0xC4; // bool
            public const nint m_vFowColor = 0xC8; // Vector
            public const nint m_ViewOrigin = 0xD4; // Vector
            public const nint m_ViewAngles = 0xE0; // QAngle
            public const nint m_flViewFoV = 0xEC; // float32
            public const nint m_WorldPoints = 0xF0; // Vector[8]
            public const nint m_vFogOffsetLayer0 = 0x4A8; // Vector2D
            public const nint m_vFogOffsetLayer1 = 0x4B0; // Vector2D
            public const nint m_hEnvWind = 0x4B8; // CHandle<C_BaseEntity>
            public const nint m_hEnvSky = 0x4BC; // CHandle<C_BaseEntity>
        }
        // Parent: C_BaseEntity
        // Fields count: 1
        public static class C_GlobalLight {
            public const nint m_WindClothForceHandle = 0xB90; // uint16
        }
        // Parent: CAnimGraphControllerBase
        // Fields count: 4
        public static class C_CSGO_PreviewModel_GraphController {
            public const nint m_pszCharacterMode = 0x18; // CAnimGraphParamOptionalRef<char*>
            public const nint m_pszWeaponState = 0x38; // CAnimGraphParamOptionalRef<char*>
            public const nint m_pszWeaponType = 0x58; // CAnimGraphParamOptionalRef<char*>
            public const nint m_pszEndOfMatchCelebration = 0x78; // CAnimGraphParamOptionalRef<char*>
        }
        // Parent: CAnimGraphControllerBase
        // Fields count: 8
        public static class C_CSGO_PreviewPlayer_GraphController {
            public const nint m_pszCharacterMode = 0x18; // CAnimGraphParamOptionalRef<char*>
            public const nint m_pszTeamPreviewVariant = 0x38; // CAnimGraphParamOptionalRef<char*>
            public const nint m_pszTeamPreviewPosition = 0x58; // CAnimGraphParamOptionalRef<char*>
            public const nint m_pszEndOfMatchCelebration = 0x78; // CAnimGraphParamOptionalRef<char*>
            public const nint m_nTeamPreviewRandom = 0x98; // CAnimGraphParamOptionalRef<int32>
            public const nint m_pszWeaponState = 0xB0; // CAnimGraphParamOptionalRef<char*>
            public const nint m_pszWeaponType = 0xD0; // CAnimGraphParamOptionalRef<char*>
            public const nint m_bCT = 0xF0; // CAnimGraphParamOptionalRef<bool>
        }
        // Parent: C_BaseEntity
        // Fields count: 10
        public static class C_CSGO_MapPreviewCameraPathNode {
            public const nint m_szParentPathUniqueID = 0x6D0; // CUtlSymbolLarge
            public const nint m_nPathIndex = 0x6D8; // int32
            public const nint m_vInTangentLocal = 0x6DC; // Vector
            public const nint m_vOutTangentLocal = 0x6E8; // Vector
            public const nint m_flFOV = 0x6F4; // float32
            public const nint m_flSpeed = 0x6F8; // float32
            public const nint m_flEaseIn = 0x6FC; // float32
            public const nint m_flEaseOut = 0x700; // float32
            public const nint m_vInTangentWorld = 0x704; // Vector
            public const nint m_vOutTangentWorld = 0x710; // Vector
        }
        // Parent: C_BaseEntity
        // Fields count: 8
        public static class C_CSGO_MapPreviewCameraPath {
            public const nint m_flZFar = 0x6D0; // float32
            public const nint m_flZNear = 0x6D4; // float32
            public const nint m_bLoop = 0x6D8; // bool
            public const nint m_bVerticalFOV = 0x6D9; // bool
            public const nint m_bConstantSpeed = 0x6DA; // bool
            public const nint m_flDuration = 0x6DC; // float32
            public const nint m_flPathLength = 0x720; // float32
            public const nint m_flPathDuration = 0x724; // float32
        }
        // Parent: CPlayerPawnComponent
        // Fields count: 0
        public static class CCSPlayer_GlowServices {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseProvideFeatureTag
        // MPulseLibraryBindings
        public static class C_CSObserverPawnAPI {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseProvideFeatureTag
        // MPulseLibraryBindings
        public static class C_CSPlayerPawnAPI {
        }
        // Parent: C_BaseEntity
        // Fields count: 7
        //
        // Metadata:
        // NetworkVarNames: m_iActiveIssueIndex (int)
        // NetworkVarNames: m_iOnlyTeamToVote (int)
        // NetworkVarNames: m_nVoteOptionCount (int)
        // NetworkVarNames: m_nPotentialVotes (int)
        // NetworkVarNames: m_bIsYesNoVote (bool)
        public static class C_VoteController {
            public const nint m_iActiveIssueIndex = 0x6DC; // int32
            public const nint m_iOnlyTeamToVote = 0x6E0; // int32
            public const nint m_nVoteOptionCount = 0x6E4; // int32[5]
            public const nint m_nPotentialVotes = 0x6F8; // int32
            public const nint m_bVotesDirty = 0x6FC; // bool
            public const nint m_bTypeDirty = 0x6FD; // bool
            public const nint m_bIsYesNoVote = 0x6FE; // bool
        }
        // Parent: C_BaseEntity
        // Fields count: 17
        //
        // Metadata:
        // NetworkVarNames: m_nDraftType (int)
        // NetworkVarNames: m_nTeamWinningCoinToss (int)
        // NetworkVarNames: m_nTeamWithFirstChoice (int)
        // NetworkVarNames: m_nVoteMapIdsList (int)
        // NetworkVarNames: m_nAccountIDs (int)
        // NetworkVarNames: m_nMapId0 (int)
        // NetworkVarNames: m_nMapId1 (int)
        // NetworkVarNames: m_nMapId2 (int)
        // NetworkVarNames: m_nMapId3 (int)
        // NetworkVarNames: m_nMapId4 (int)
        // NetworkVarNames: m_nMapId5 (int)
        // NetworkVarNames: m_nStartingSide0 (int)
        // NetworkVarNames: m_nCurrentPhase (int)
        // NetworkVarNames: m_nPhaseStartTick (int)
        // NetworkVarNames: m_nPhaseDurationTicks (int)
        public static class C_MapVetoPickController {
            public const nint m_nDraftType = 0x6DC; // int32
            public const nint m_nTeamWinningCoinToss = 0x6E0; // int32
            public const nint m_nTeamWithFirstChoice = 0x6E4; // int32[64]
            public const nint m_nVoteMapIdsList = 0x7E4; // int32[7]
            public const nint m_nAccountIDs = 0x800; // int32[64]
            public const nint m_nMapId0 = 0x900; // int32[64]
            public const nint m_nMapId1 = 0xA00; // int32[64]
            public const nint m_nMapId2 = 0xB00; // int32[64]
            public const nint m_nMapId3 = 0xC00; // int32[64]
            public const nint m_nMapId4 = 0xD00; // int32[64]
            public const nint m_nMapId5 = 0xE00; // int32[64]
            public const nint m_nStartingSide0 = 0xF00; // int32[64]
            public const nint m_nCurrentPhase = 0x1000; // int32
            public const nint m_nPhaseStartTick = 0x1004; // int32
            public const nint m_nPhaseDurationTicks = 0x1008; // int32
            public const nint m_nPostDataUpdateTick = 0x100C; // int32
            public const nint m_bDisabledHud = 0x1010; // bool
        }
        // Parent: None
        // Fields count: 0
        public static class CPlayerSprayDecalRenderHelper {
        }
        // Parent: C_CSGO_MapPreviewCameraPath
        // Fields count: 7
        public static class C_CSGO_TeamPreviewCamera {
            public const nint m_nVariant = 0x730; // int32
            public const nint m_bDofEnabled = 0x734; // bool
            public const nint m_flDofNearBlurry = 0x738; // float32
            public const nint m_flDofNearCrisp = 0x73C; // float32
            public const nint m_flDofFarCrisp = 0x740; // float32
            public const nint m_flDofFarBlurry = 0x744; // float32
            public const nint m_flDofTiltToGround = 0x748; // float32
        }
        // Parent: C_CSGO_TeamPreviewCamera
        // Fields count: 0
        public static class C_CSGO_TeamSelectCamera {
        }
        // Parent: C_CSGO_TeamPreviewCamera
        // Fields count: 0
        public static class C_CSGO_TerroristTeamIntroCamera {
        }
        // Parent: C_CSGO_TeamPreviewCamera
        // Fields count: 0
        public static class C_CSGO_TerroristWingmanIntroCamera {
        }
        // Parent: C_CSGO_TeamPreviewCamera
        // Fields count: 0
        public static class C_CSGO_CounterTerroristTeamIntroCamera {
        }
        // Parent: C_CSGO_TeamPreviewCamera
        // Fields count: 0
        public static class C_CSGO_CounterTerroristWingmanIntroCamera {
        }
        // Parent: C_CSGO_TeamPreviewCamera
        // Fields count: 0
        public static class C_CSGO_EndOfMatchCamera {
        }
        // Parent: C_CSGO_TeamPreviewCharacterPosition
        // Fields count: 0
        public static class C_CSGO_EndOfMatchCharacterPosition {
        }
        // Parent: C_BaseEntity
        // Fields count: 0
        public static class C_CSGO_EndOfMatchLineupEndpoint {
        }
        // Parent: C_CSGO_EndOfMatchLineupEndpoint
        // Fields count: 0
        public static class C_CSGO_EndOfMatchLineupStart {
        }
        // Parent: C_CSGO_EndOfMatchLineupEndpoint
        // Fields count: 0
        public static class C_CSGO_EndOfMatchLineupEnd {
        }
        // Parent: C_BaseEntity
        // Fields count: 2
        public static class C_CsmFovOverride {
            public const nint m_cameraName = 0x6D0; // CUtlString
            public const nint m_flCsmFovOverrideValue = 0x6D8; // float32
        }
        // Parent: C_BaseEntity
        // Fields count: 0
        public static class C_PointEntity {
        }
        // Parent: C_BaseEntity
        // Fields count: 24
        //
        // Metadata:
        // NetworkVarNames: m_Color (Color)
        // NetworkVarNames: m_flBrightness (float)
        // NetworkVarNames: m_hCubemapTexture (HRenderTextureStrong)
        // NetworkVarNames: m_bCustomCubemapTexture (bool)
        // NetworkVarNames: m_hLightProbeTexture (HRenderTextureStrong)
        // NetworkVarNames: m_hLightProbeDirectLightIndicesTexture (HRenderTextureStrong)
        // NetworkVarNames: m_hLightProbeDirectLightScalarsTexture (HRenderTextureStrong)
        // NetworkVarNames: m_hLightProbeDirectLightShadowsTexture (HRenderTextureStrong)
        // NetworkVarNames: m_vBoxMins (Vector)
        // NetworkVarNames: m_vBoxMaxs (Vector)
        // NetworkVarNames: m_bMoveable (bool)
        // NetworkVarNames: m_nHandshake (int)
        // NetworkVarNames: m_nEnvCubeMapArrayIndex (int)
        // NetworkVarNames: m_nPriority (int)
        // NetworkVarNames: m_bStartDisabled (bool)
        // NetworkVarNames: m_flEdgeFadeDist (float)
        // NetworkVarNames: m_vEdgeFadeDists (Vector)
        // NetworkVarNames: m_nLightProbeSizeX (int)
        // NetworkVarNames: m_nLightProbeSizeY (int)
        // NetworkVarNames: m_nLightProbeSizeZ (int)
        // NetworkVarNames: m_nLightProbeAtlasX (int)
        // NetworkVarNames: m_nLightProbeAtlasY (int)
        // NetworkVarNames: m_nLightProbeAtlasZ (int)
        // NetworkVarNames: m_bEnabled (bool)
        public static class C_EnvCombinedLightProbeVolume {
            public const nint m_Color = 0x1728; // Color
            public const nint m_flBrightness = 0x172C; // float32
            public const nint m_hCubemapTexture = 0x1730; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_bCustomCubemapTexture = 0x1738; // bool
            public const nint m_hLightProbeTexture = 0x1740; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_hLightProbeDirectLightIndicesTexture = 0x1748; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_hLightProbeDirectLightScalarsTexture = 0x1750; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_hLightProbeDirectLightShadowsTexture = 0x1758; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_vBoxMins = 0x1760; // Vector
            public const nint m_vBoxMaxs = 0x176C; // Vector
            public const nint m_bMoveable = 0x1778; // bool
            public const nint m_nHandshake = 0x177C; // int32
            public const nint m_nEnvCubeMapArrayIndex = 0x1780; // int32
            public const nint m_nPriority = 0x1784; // int32
            public const nint m_bStartDisabled = 0x1788; // bool
            public const nint m_flEdgeFadeDist = 0x178C; // float32
            public const nint m_vEdgeFadeDists = 0x1790; // Vector
            public const nint m_nLightProbeSizeX = 0x179C; // int32
            public const nint m_nLightProbeSizeY = 0x17A0; // int32
            public const nint m_nLightProbeSizeZ = 0x17A4; // int32
            public const nint m_nLightProbeAtlasX = 0x17A8; // int32
            public const nint m_nLightProbeAtlasY = 0x17AC; // int32
            public const nint m_nLightProbeAtlasZ = 0x17B0; // int32
            public const nint m_bEnabled = 0x17C9; // bool
        }
        // Parent: C_BaseEntity
        // Fields count: 18
        //
        // Metadata:
        // NetworkVarNames: m_hCubemapTexture (HRenderTextureStrong)
        // NetworkVarNames: m_bCustomCubemapTexture (bool)
        // NetworkVarNames: m_flInfluenceRadius (float)
        // NetworkVarNames: m_vBoxProjectMins (Vector)
        // NetworkVarNames: m_vBoxProjectMaxs (Vector)
        // NetworkVarNames: m_bMoveable (bool)
        // NetworkVarNames: m_nHandshake (int)
        // NetworkVarNames: m_nEnvCubeMapArrayIndex (int)
        // NetworkVarNames: m_nPriority (int)
        // NetworkVarNames: m_flEdgeFadeDist (float)
        // NetworkVarNames: m_vEdgeFadeDists (Vector)
        // NetworkVarNames: m_flDiffuseScale (float)
        // NetworkVarNames: m_bStartDisabled (bool)
        // NetworkVarNames: m_bDefaultEnvMap (bool)
        // NetworkVarNames: m_bDefaultSpecEnvMap (bool)
        // NetworkVarNames: m_bIndoorCubeMap (bool)
        // NetworkVarNames: m_bCopyDiffuseFromDefaultCubemap (bool)
        // NetworkVarNames: m_bEnabled (bool)
        public static class C_EnvCubemap {
            public const nint m_hCubemapTexture = 0x750; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_bCustomCubemapTexture = 0x758; // bool
            public const nint m_flInfluenceRadius = 0x75C; // float32
            public const nint m_vBoxProjectMins = 0x760; // Vector
            public const nint m_vBoxProjectMaxs = 0x76C; // Vector
            public const nint m_bMoveable = 0x778; // bool
            public const nint m_nHandshake = 0x77C; // int32
            public const nint m_nEnvCubeMapArrayIndex = 0x780; // int32
            public const nint m_nPriority = 0x784; // int32
            public const nint m_flEdgeFadeDist = 0x788; // float32
            public const nint m_vEdgeFadeDists = 0x78C; // Vector
            public const nint m_flDiffuseScale = 0x798; // float32
            public const nint m_bStartDisabled = 0x79C; // bool
            public const nint m_bDefaultEnvMap = 0x79D; // bool
            public const nint m_bDefaultSpecEnvMap = 0x79E; // bool
            public const nint m_bIndoorCubeMap = 0x79F; // bool
            public const nint m_bCopyDiffuseFromDefaultCubemap = 0x7A0; // bool
            public const nint m_bEnabled = 0x7B0; // bool
        }
        // Parent: C_EnvCubemap
        // Fields count: 0
        public static class C_EnvCubemapBox {
        }
        // Parent: C_BaseEntity
        // Fields count: 18
        //
        // Metadata:
        // NetworkVarNames: m_flEndDistance (float)
        // NetworkVarNames: m_flStartDistance (float)
        // NetworkVarNames: m_flFogFalloffExponent (float)
        // NetworkVarNames: m_bHeightFogEnabled (bool)
        // NetworkVarNames: m_flFogHeightWidth (float)
        // NetworkVarNames: m_flFogHeightEnd (float)
        // NetworkVarNames: m_flFogHeightStart (float)
        // NetworkVarNames: m_flFogHeightExponent (float)
        // NetworkVarNames: m_flLODBias (float)
        // NetworkVarNames: m_bActive (bool)
        // NetworkVarNames: m_bStartDisabled (bool)
        // NetworkVarNames: m_flFogMaxOpacity (float)
        // NetworkVarNames: m_nCubemapSourceType (int)
        // NetworkVarNames: m_hSkyMaterial (HMaterialStrong)
        // NetworkVarNames: m_iszSkyEntity (string_t)
        // NetworkVarNames: m_hFogCubemapTexture (HRenderTextureStrong)
        // NetworkVarNames: m_bHasHeightFogEnd (bool)
        public static class C_EnvCubemapFog {
            public const nint m_flEndDistance = 0x6D0; // float32
            public const nint m_flStartDistance = 0x6D4; // float32
            public const nint m_flFogFalloffExponent = 0x6D8; // float32
            public const nint m_bHeightFogEnabled = 0x6DC; // bool
            public const nint m_flFogHeightWidth = 0x6E0; // float32
            public const nint m_flFogHeightEnd = 0x6E4; // float32
            public const nint m_flFogHeightStart = 0x6E8; // float32
            public const nint m_flFogHeightExponent = 0x6EC; // float32
            public const nint m_flLODBias = 0x6F0; // float32
            public const nint m_bActive = 0x6F4; // bool
            public const nint m_bStartDisabled = 0x6F5; // bool
            public const nint m_flFogMaxOpacity = 0x6F8; // float32
            public const nint m_nCubemapSourceType = 0x6FC; // int32
            public const nint m_hSkyMaterial = 0x700; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_iszSkyEntity = 0x708; // CUtlSymbolLarge
            public const nint m_hFogCubemapTexture = 0x710; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_bHasHeightFogEnd = 0x718; // bool
            public const nint m_bFirstTime = 0x719; // bool
        }
        // Parent: C_BaseEntity
        // Fields count: 16
        //
        // Metadata:
        // NetworkVarNames: m_hGradientFogTexture (HRenderTextureStrong)
        // NetworkVarNames: m_flFogStartDistance (float)
        // NetworkVarNames: m_flFogEndDistance (float)
        // NetworkVarNames: m_bHeightFogEnabled (bool)
        // NetworkVarNames: m_flFogStartHeight (float)
        // NetworkVarNames: m_flFogEndHeight (float)
        // NetworkVarNames: m_flFarZ (float)
        // NetworkVarNames: m_flFogMaxOpacity (float)
        // NetworkVarNames: m_flFogFalloffExponent (float)
        // NetworkVarNames: m_flFogVerticalExponent (float)
        // NetworkVarNames: m_fogColor (Color)
        // NetworkVarNames: m_flFogStrength (float)
        // NetworkVarNames: m_flFadeTime (float)
        // NetworkVarNames: m_bStartDisabled (bool)
        // NetworkVarNames: m_bIsEnabled (bool)
        public static class C_GradientFog {
            public const nint m_hGradientFogTexture = 0x6D0; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_flFogStartDistance = 0x6D8; // float32
            public const nint m_flFogEndDistance = 0x6DC; // float32
            public const nint m_bHeightFogEnabled = 0x6E0; // bool
            public const nint m_flFogStartHeight = 0x6E4; // float32
            public const nint m_flFogEndHeight = 0x6E8; // float32
            public const nint m_flFarZ = 0x6EC; // float32
            public const nint m_flFogMaxOpacity = 0x6F0; // float32
            public const nint m_flFogFalloffExponent = 0x6F4; // float32
            public const nint m_flFogVerticalExponent = 0x6F8; // float32
            public const nint m_fogColor = 0x6FC; // Color
            public const nint m_flFogStrength = 0x700; // float32
            public const nint m_flFadeTime = 0x704; // float32
            public const nint m_bStartDisabled = 0x708; // bool
            public const nint m_bIsEnabled = 0x709; // bool
            public const nint m_bGradientFogNeedsTextures = 0x70A; // bool
        }
        // Parent: C_BaseEntity
        // Fields count: 17
        //
        // Metadata:
        // NetworkVarNames: m_hLightProbeTexture (HRenderTextureStrong)
        // NetworkVarNames: m_hLightProbeDirectLightIndicesTexture (HRenderTextureStrong)
        // NetworkVarNames: m_hLightProbeDirectLightScalarsTexture (HRenderTextureStrong)
        // NetworkVarNames: m_hLightProbeDirectLightShadowsTexture (HRenderTextureStrong)
        // NetworkVarNames: m_vBoxMins (Vector)
        // NetworkVarNames: m_vBoxMaxs (Vector)
        // NetworkVarNames: m_bMoveable (bool)
        // NetworkVarNames: m_nHandshake (int)
        // NetworkVarNames: m_nPriority (int)
        // NetworkVarNames: m_bStartDisabled (bool)
        // NetworkVarNames: m_nLightProbeSizeX (int)
        // NetworkVarNames: m_nLightProbeSizeY (int)
        // NetworkVarNames: m_nLightProbeSizeZ (int)
        // NetworkVarNames: m_nLightProbeAtlasX (int)
        // NetworkVarNames: m_nLightProbeAtlasY (int)
        // NetworkVarNames: m_nLightProbeAtlasZ (int)
        // NetworkVarNames: m_bEnabled (bool)
        public static class C_EnvLightProbeVolume {
            public const nint m_hLightProbeTexture = 0x16A8; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_hLightProbeDirectLightIndicesTexture = 0x16B0; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_hLightProbeDirectLightScalarsTexture = 0x16B8; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_hLightProbeDirectLightShadowsTexture = 0x16C0; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_vBoxMins = 0x16C8; // Vector
            public const nint m_vBoxMaxs = 0x16D4; // Vector
            public const nint m_bMoveable = 0x16E0; // bool
            public const nint m_nHandshake = 0x16E4; // int32
            public const nint m_nPriority = 0x16E8; // int32
            public const nint m_bStartDisabled = 0x16EC; // bool
            public const nint m_nLightProbeSizeX = 0x16F0; // int32
            public const nint m_nLightProbeSizeY = 0x16F4; // int32
            public const nint m_nLightProbeSizeZ = 0x16F8; // int32
            public const nint m_nLightProbeAtlasX = 0x16FC; // int32
            public const nint m_nLightProbeAtlasY = 0x1700; // int32
            public const nint m_nLightProbeAtlasZ = 0x1704; // int32
            public const nint m_bEnabled = 0x1711; // bool
        }
        // Parent: C_BaseEntity
        // Fields count: 6
        //
        // Metadata:
        // NetworkVarNames: m_flVisibilityStrength (float)
        // NetworkVarNames: m_flFogDistanceMultiplier (float)
        // NetworkVarNames: m_flFogMaxDensityMultiplier (float)
        // NetworkVarNames: m_flFadeTime (float)
        // NetworkVarNames: m_bStartDisabled (bool)
        // NetworkVarNames: m_bIsEnabled (bool)
        public static class C_PlayerVisibility {
            public const nint m_flVisibilityStrength = 0x6D0; // float32
            public const nint m_flFogDistanceMultiplier = 0x6D4; // float32
            public const nint m_flFogMaxDensityMultiplier = 0x6D8; // float32
            public const nint m_flFadeTime = 0x6DC; // float32
            public const nint m_bStartDisabled = 0x6E0; // bool
            public const nint m_bIsEnabled = 0x6E1; // bool
        }
        // Parent: C_BaseEntity
        // Fields count: 8
        //
        // Metadata:
        // NetworkVarNames: m_flAutoExposureMin (float)
        // NetworkVarNames: m_flAutoExposureMax (float)
        // NetworkVarNames: m_flTonemapPercentTarget (float)
        // NetworkVarNames: m_flTonemapPercentBrightPixels (float)
        // NetworkVarNames: m_flTonemapMinAvgLum (float)
        // NetworkVarNames: m_flExposureAdaptationSpeedUp (float)
        // NetworkVarNames: m_flExposureAdaptationSpeedDown (float)
        // NetworkVarNames: m_flTonemapEVSmoothingRange (float)
        public static class C_TonemapController2 {
            public const nint m_flAutoExposureMin = 0x6D0; // float32
            public const nint m_flAutoExposureMax = 0x6D4; // float32
            public const nint m_flTonemapPercentTarget = 0x6D8; // float32
            public const nint m_flTonemapPercentBrightPixels = 0x6DC; // float32
            public const nint m_flTonemapMinAvgLum = 0x6E0; // float32
            public const nint m_flExposureAdaptationSpeedUp = 0x6E4; // float32
            public const nint m_flExposureAdaptationSpeedDown = 0x6E8; // float32
            public const nint m_flTonemapEVSmoothingRange = 0x6EC; // float32
        }
        // Parent: C_BaseEntity
        // Fields count: 28
        //
        // Metadata:
        // NetworkVarNames: m_flScattering (float)
        // NetworkVarNames: m_flAnisotropy (float)
        // NetworkVarNames: m_flFadeSpeed (float)
        // NetworkVarNames: m_flDrawDistance (float)
        // NetworkVarNames: m_flFadeInStart (float)
        // NetworkVarNames: m_flFadeInEnd (float)
        // NetworkVarNames: m_flIndirectStrength (float)
        // NetworkVarNames: m_nIndirectTextureDimX (int)
        // NetworkVarNames: m_nIndirectTextureDimY (int)
        // NetworkVarNames: m_nIndirectTextureDimZ (int)
        // NetworkVarNames: m_vBoxMins (Vector)
        // NetworkVarNames: m_vBoxMaxs (Vector)
        // NetworkVarNames: m_bActive (bool)
        // NetworkVarNames: m_flStartAnisoTime (GameTime_t)
        // NetworkVarNames: m_flStartScatterTime (GameTime_t)
        // NetworkVarNames: m_flStartDrawDistanceTime (GameTime_t)
        // NetworkVarNames: m_flStartAnisotropy (float)
        // NetworkVarNames: m_flStartScattering (float)
        // NetworkVarNames: m_flStartDrawDistance (float)
        // NetworkVarNames: m_flDefaultAnisotropy (float)
        // NetworkVarNames: m_flDefaultScattering (float)
        // NetworkVarNames: m_flDefaultDrawDistance (float)
        // NetworkVarNames: m_bStartDisabled (bool)
        // NetworkVarNames: m_bEnableIndirect (bool)
        // NetworkVarNames: m_bIsMaster (bool)
        // NetworkVarNames: m_hFogIndirectTexture (HRenderTextureStrong)
        // NetworkVarNames: m_nForceRefreshCount (int)
        public static class C_EnvVolumetricFogController {
            public const nint m_flScattering = 0x6D0; // float32
            public const nint m_flAnisotropy = 0x6D4; // float32
            public const nint m_flFadeSpeed = 0x6D8; // float32
            public const nint m_flDrawDistance = 0x6DC; // float32
            public const nint m_flFadeInStart = 0x6E0; // float32
            public const nint m_flFadeInEnd = 0x6E4; // float32
            public const nint m_flIndirectStrength = 0x6E8; // float32
            public const nint m_nIndirectTextureDimX = 0x6EC; // int32
            public const nint m_nIndirectTextureDimY = 0x6F0; // int32
            public const nint m_nIndirectTextureDimZ = 0x6F4; // int32
            public const nint m_vBoxMins = 0x6F8; // Vector
            public const nint m_vBoxMaxs = 0x704; // Vector
            public const nint m_bActive = 0x710; // bool
            public const nint m_flStartAnisoTime = 0x714; // GameTime_t
            public const nint m_flStartScatterTime = 0x718; // GameTime_t
            public const nint m_flStartDrawDistanceTime = 0x71C; // GameTime_t
            public const nint m_flStartAnisotropy = 0x720; // float32
            public const nint m_flStartScattering = 0x724; // float32
            public const nint m_flStartDrawDistance = 0x728; // float32
            public const nint m_flDefaultAnisotropy = 0x72C; // float32
            public const nint m_flDefaultScattering = 0x730; // float32
            public const nint m_flDefaultDrawDistance = 0x734; // float32
            public const nint m_bStartDisabled = 0x738; // bool
            public const nint m_bEnableIndirect = 0x739; // bool
            public const nint m_bIsMaster = 0x73A; // bool
            public const nint m_hFogIndirectTexture = 0x740; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_nForceRefreshCount = 0x748; // int32
            public const nint m_bFirstTime = 0x74C; // bool
        }
        // Parent: C_BaseEntity
        // Fields count: 7
        //
        // Metadata:
        // NetworkVarNames: m_bActive (bool)
        // NetworkVarNames: m_vBoxMins (Vector)
        // NetworkVarNames: m_vBoxMaxs (Vector)
        // NetworkVarNames: m_bStartDisabled (bool)
        // NetworkVarNames: m_flStrength (float)
        // NetworkVarNames: m_nFalloffShape (int)
        // NetworkVarNames: m_flFalloffExponent (float)
        public static class C_EnvVolumetricFogVolume {
            public const nint m_bActive = 0x6D0; // bool
            public const nint m_vBoxMins = 0x6D4; // Vector
            public const nint m_vBoxMaxs = 0x6E0; // Vector
            public const nint m_bStartDisabled = 0x6EC; // bool
            public const nint m_flStrength = 0x6F0; // float32
            public const nint m_nFalloffShape = 0x6F4; // int32
            public const nint m_flFalloffExponent = 0x6F8; // float32
        }
        // Parent: C_BaseEntity
        // Fields count: 3
        //
        // Metadata:
        // NetworkVarNames: m_fog (fogparams_t)
        public static class C_FogController {
            public const nint m_fog = 0x6D0; // fogparams_t
            public const nint m_bUseAngles = 0x738; // bool
            public const nint m_iChangedVariables = 0x73C; // int32
        }
        // Parent: C_PointEntity
        // Fields count: 0
        public static class CInfoTarget {
        }
        // Parent: C_PointEntity
        // Fields count: 0
        public static class CInfoParticleTarget {
        }
        // Parent: C_BaseEntity
        // Fields count: 3
        //
        // Metadata:
        // NetworkVarNames: m_nMode (int)
        // NetworkVarNames: m_vBoxSize (Vector)
        // NetworkVarNames: m_bEnabled (bool)
        public static class C_InfoVisibilityBox {
            public const nint m_nMode = 0x6D4; // int32
            public const nint m_vBoxSize = 0x6D8; // Vector
            public const nint m_bEnabled = 0x6E4; // bool
        }
        // Parent: C_BaseEntity
        // Fields count: 8
        //
        // Metadata:
        // NetworkVarNames: m_worldName (string_t)
        // NetworkVarNames: m_layerName (string_t)
        // NetworkVarNames: m_bWorldLayerVisible (bool)
        // NetworkVarNames: m_bEntitiesSpawned (bool)
        public static class CInfoWorldLayer {
            public const nint m_pOutputOnEntitiesSpawned = 0x6D0; // CEntityIOOutput
            public const nint m_worldName = 0x6F8; // CUtlSymbolLarge
            public const nint m_layerName = 0x700; // CUtlSymbolLarge
            public const nint m_bWorldLayerVisible = 0x708; // bool
            public const nint m_bEntitiesSpawned = 0x709; // bool
            public const nint m_bCreateAsChildSpawnGroup = 0x70A; // bool
            public const nint m_hLayerSpawnGroup = 0x70C; // uint32
            public const nint m_bWorldLayerActuallyVisible = 0x710; // bool
        }
        // Parent: C_BaseEntity
        // Fields count: 25
        //
        // Metadata:
        // NetworkVarNames: m_FOV (float)
        // NetworkVarNames: m_Resolution (float)
        // NetworkVarNames: m_bFogEnable (bool)
        // NetworkVarNames: m_FogColor (Color)
        // NetworkVarNames: m_flFogStart (float)
        // NetworkVarNames: m_flFogEnd (float)
        // NetworkVarNames: m_flFogMaxDensity (float)
        // NetworkVarNames: m_bActive (bool)
        // NetworkVarNames: m_bUseScreenAspectRatio (bool)
        // NetworkVarNames: m_flAspectRatio (float)
        // NetworkVarNames: m_bNoSky (bool)
        // NetworkVarNames: m_fBrightness (float)
        // NetworkVarNames: m_flZFar (float)
        // NetworkVarNames: m_flZNear (float)
        // NetworkVarNames: m_bCanHLTVUse (bool)
        // NetworkVarNames: m_bDofEnabled (bool)
        // NetworkVarNames: m_flDofNearBlurry (float)
        // NetworkVarNames: m_flDofNearCrisp (float)
        // NetworkVarNames: m_flDofFarCrisp (float)
        // NetworkVarNames: m_flDofFarBlurry (float)
        // NetworkVarNames: m_flDofTiltToGround (float)
        public static class C_PointCamera {
            public const nint m_FOV = 0x6D0; // float32
            public const nint m_Resolution = 0x6D4; // float32
            public const nint m_bFogEnable = 0x6D8; // bool
            public const nint m_FogColor = 0x6D9; // Color
            public const nint m_flFogStart = 0x6E0; // float32
            public const nint m_flFogEnd = 0x6E4; // float32
            public const nint m_flFogMaxDensity = 0x6E8; // float32
            public const nint m_bActive = 0x6EC; // bool
            public const nint m_bUseScreenAspectRatio = 0x6ED; // bool
            public const nint m_flAspectRatio = 0x6F0; // float32
            public const nint m_bNoSky = 0x6F4; // bool
            public const nint m_fBrightness = 0x6F8; // float32
            public const nint m_flZFar = 0x6FC; // float32
            public const nint m_flZNear = 0x700; // float32
            public const nint m_bCanHLTVUse = 0x704; // bool
            public const nint m_bDofEnabled = 0x705; // bool
            public const nint m_flDofNearBlurry = 0x708; // float32
            public const nint m_flDofNearCrisp = 0x70C; // float32
            public const nint m_flDofFarCrisp = 0x710; // float32
            public const nint m_flDofFarBlurry = 0x714; // float32
            public const nint m_flDofTiltToGround = 0x718; // float32
            public const nint m_TargetFOV = 0x71C; // float32
            public const nint m_DegreesPerSecond = 0x720; // float32
            public const nint m_bIsOn = 0x724; // bool
            public const nint m_pNext = 0x728; // C_PointCamera*
        }
        // Parent: C_PointCamera
        // Fields count: 1
        public static class C_PointCameraVFOV {
            public const nint m_flVerticalFOV = 0x730; // float32
        }
        // Parent: CLogicalEntity
        // Fields count: 12
        public static class CPointTemplate {
            public const nint m_iszWorldName = 0x6D0; // CUtlSymbolLarge
            public const nint m_iszSource2EntityLumpName = 0x6D8; // CUtlSymbolLarge
            public const nint m_iszEntityFilterName = 0x6E0; // CUtlSymbolLarge
            public const nint m_flTimeoutInterval = 0x6E8; // float32
            public const nint m_bAsynchronouslySpawnEntities = 0x6EC; // bool
            public const nint m_pOutputOnSpawned = 0x6F0; // CEntityIOOutput
            public const nint m_clientOnlyEntityBehavior = 0x718; // PointTemplateClientOnlyEntityBehavior_t
            public const nint m_ownerSpawnGroupType = 0x71C; // PointTemplateOwnerSpawnGroupType_t
            public const nint m_createdSpawnGroupHandles = 0x720; // CUtlVector<uint32>
            public const nint m_SpawnedEntityHandles = 0x738; // CUtlVector<CEntityHandle>
            public const nint m_ScriptSpawnCallback = 0x750; // HSCRIPT
            public const nint m_ScriptCallbackScope = 0x758; // HSCRIPT
        }
        // Parent: C_BaseEntity
        // Fields count: 4
        //
        // Metadata:
        // NetworkVarNames: m_bDisabled (bool)
        // NetworkVarNames: m_iszSoundAreaType (string_t)
        // NetworkVarNames: m_vPos (Vector)
        public static class C_SoundAreaEntityBase {
            public const nint m_bDisabled = 0x6D0; // bool
            public const nint m_bWasEnabled = 0x6D8; // bool
            public const nint m_iszSoundAreaType = 0x6E0; // CUtlSymbolLarge
            public const nint m_vPos = 0x6E8; // Vector
        }
        // Parent: C_SoundAreaEntityBase
        // Fields count: 1
        //
        // Metadata:
        // NetworkVarNames: m_flRadius (float)
        public static class C_SoundAreaEntitySphere {
            public const nint m_flRadius = 0x6F4; // float32
        }
        // Parent: C_SoundAreaEntityBase
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_vMin (Vector)
        // NetworkVarNames: m_vMax (Vector)
        public static class C_SoundAreaEntityOrientedBox {
            public const nint m_vMin = 0x6F4; // Vector
            public const nint m_vMax = 0x700; // Vector
        }
        // Parent: C_BaseEntity
        // Fields count: 4
        //
        // Metadata:
        // MNetworkIncludeByName
        // NetworkVarNames: m_aPlayerControllers (CHandle< CBasePlayerController >)
        // NetworkVarNames: m_aPlayers (CHandle< C_BasePlayerPawn >)
        // NetworkVarNames: m_iScore (int32)
        // NetworkVarNames: m_szTeamname (char)
        public static class C_Team {
            public const nint m_aPlayerControllers = 0x6D0; // C_NetworkUtlVectorBase<CHandle<CBasePlayerController>>
            public const nint m_aPlayers = 0x6E8; // C_NetworkUtlVectorBase<CHandle<C_BasePlayerPawn>>
            public const nint m_iScore = 0x700; // int32
            public const nint m_szTeamname = 0x704; // char[129]
        }
        // Parent: C_BaseEntity
        // Fields count: 15
        //
        // Metadata:
        // MNetworkIncludeByName
        // MNetworkIncludeByName
        // MNetworkIncludeByName
        // MNetworkIncludeByName
        // MNetworkIncludeByName
        // MNetworkIncludeByName
        // MNetworkUserGroupProxy
        // MNetworkUserGroupProxy
        // MNetworkIncludeByUserGroup
        // NetworkVarNames: m_nTickBase (uint32)
        // NetworkVarNames: m_hPawn (CHandle< CBasePlayerPawn>)
        // NetworkVarNames: m_iConnected (PlayerConnectedState)
        // NetworkVarNames: m_iszPlayerName (char)
        // NetworkVarNames: m_steamID (uint64)
        // NetworkVarNames: m_iDesiredFOV (uint32)
        // MNetworkReplayCompatField
        public static class CBasePlayerController {
            public const nint m_nFinalPredictedTick = 0x6D8; // int32
            public const nint m_CommandContext = 0x6E0; // C_CommandContext
            public const nint m_nInButtonsWhichAreToggles = 0x778; // uint64
            public const nint m_nTickBase = 0x780; // uint32
            public const nint m_hPawn = 0x784; // CHandle<C_BasePlayerPawn>
            public const nint m_hPredictedPawn = 0x788; // CHandle<C_BasePlayerPawn>
            public const nint m_nSplitScreenSlot = 0x78C; // CSplitScreenSlot
            public const nint m_hSplitOwner = 0x790; // CHandle<CBasePlayerController>
            public const nint m_hSplitScreenPlayers = 0x798; // CUtlVector<CHandle<CBasePlayerController>>
            public const nint m_bIsHLTV = 0x7B0; // bool
            public const nint m_iConnected = 0x7B4; // PlayerConnectedState
            public const nint m_iszPlayerName = 0x7B8; // char[128]
            public const nint m_steamID = 0x840; // uint64
            public const nint m_bIsLocalPlayerController = 0x848; // bool
            public const nint m_iDesiredFOV = 0x84C; // uint32
        }
        // Parent: None
        // Fields count: 14
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CBasePlayerVData {
            public const nint m_sModelName = 0x28; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
            public const nint m_flHeadDamageMultiplier = 0x108; // CSkillFloat
            public const nint m_flChestDamageMultiplier = 0x118; // CSkillFloat
            public const nint m_flStomachDamageMultiplier = 0x128; // CSkillFloat
            public const nint m_flArmDamageMultiplier = 0x138; // CSkillFloat
            public const nint m_flLegDamageMultiplier = 0x148; // CSkillFloat
            public const nint m_flHoldBreathTime = 0x158; // float32
            public const nint m_flDrowningDamageInterval = 0x15C; // float32
            public const nint m_nDrowningDamageInitial = 0x160; // int32
            public const nint m_nDrowningDamageMax = 0x164; // int32
            public const nint m_nWaterSpeed = 0x168; // int32
            public const nint m_flUseRange = 0x16C; // float32
            public const nint m_flUseAngleTolerance = 0x170; // float32
            public const nint m_flCrouchTime = 0x174; // float32
        }
        // Parent: None
        // Fields count: 20
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CBasePlayerWeaponVData {
            public const nint m_szWorldModel = 0x28; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
            public const nint m_bBuiltRightHanded = 0x108; // bool
            public const nint m_bAllowFlipping = 0x109; // bool
            public const nint m_sMuzzleAttachment = 0x110; // CUtlString
            public const nint m_szMuzzleFlashParticle = 0x118; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            public const nint m_iFlags = 0x1F8; // ItemFlagTypes_t
            public const nint m_nPrimaryAmmoType = 0x1F9; // AmmoIndex_t
            public const nint m_nSecondaryAmmoType = 0x1FA; // AmmoIndex_t
            public const nint m_iMaxClip1 = 0x1FC; // int32
            public const nint m_iMaxClip2 = 0x200; // int32
            public const nint m_iDefaultClip1 = 0x204; // int32
            public const nint m_iDefaultClip2 = 0x208; // int32
            public const nint m_iWeight = 0x20C; // int32
            public const nint m_bAutoSwitchTo = 0x210; // bool
            public const nint m_bAutoSwitchFrom = 0x211; // bool
            public const nint m_iRumbleEffect = 0x214; // RumbleEffect_t
            public const nint m_bLinkedCooldowns = 0x218; // bool
            public const nint m_aShootSounds = 0x220; // CUtlMap<WeaponSound_t,CSoundEventName>
            public const nint m_iSlot = 0x240; // int32
            public const nint m_iPosition = 0x244; // int32
        }
        // Parent: CSkeletonAnimationController
        // Fields count: 13
        //
        // Metadata:
        // NetworkVarNames: m_animGraphNetworkedVars (CAnimGraphNetworkedVariables)
        // NetworkVarNames: m_hSequence (HSequence)
        // NetworkVarNames: m_flSeqStartTime (GameTime_t)
        // NetworkVarNames: m_flSeqFixedCycle (float)
        // NetworkVarNames: m_nAnimLoopMode (AnimLoopMode_t)
        public static class CBaseAnimGraphController {
            public const nint m_animGraphNetworkedVars = 0x18; // CAnimGraphNetworkedVariables
            public const nint m_bSequenceFinished = 0x14A8; // bool
            public const nint m_flSoundSyncTime = 0x14AC; // float32
            public const nint m_hSequence = 0x14B0; // HSequence
            public const nint m_flSeqStartTime = 0x14B4; // GameTime_t
            public const nint m_flSeqFixedCycle = 0x14B8; // float32
            public const nint m_nAnimLoopMode = 0x14BC; // AnimLoopMode_t
            public const nint m_flPlaybackRate = 0x14C0; // CNetworkedQuantizedFloat
            public const nint m_nNotifyState = 0x14CC; // SequenceFinishNotifyState_t
            public const nint m_bNetworkedAnimationInputsChanged = 0x14CE; // bool
            public const nint m_bNetworkedSequenceChanged = 0x14CF; // bool
            public const nint m_bLastUpdateSkipped = 0x14D0; // bool
            public const nint m_flPrevAnimUpdateTime = 0x14D4; // GameTime_t
        }
        // Parent: C_BaseEntity
        // Fields count: 31
        //
        // Metadata:
        // NetworkVarNames: m_CRenderComponent (CRenderComponent::Storage_t)
        // NetworkVarNames: m_CHitboxComponent (CHitboxComponent::Storage_t)
        // NetworkVarNames: m_nRenderMode (RenderMode_t)
        // NetworkVarNames: m_nRenderFX (RenderFx_t)
        // NetworkVarNames: m_clrRender (Color)
        // NetworkVarNames: m_vecRenderAttributes (EntityRenderAttribute_t)
        // NetworkVarNames: m_bRenderToCubemaps (bool)
        // NetworkVarNames: m_Collision (CCollisionProperty)
        // NetworkVarNames: m_Glow (CGlowProperty)
        // NetworkVarNames: m_flGlowBackfaceMult (float)
        // NetworkVarNames: m_fadeMinDist (float32)
        // NetworkVarNames: m_fadeMaxDist (float32)
        // NetworkVarNames: m_flFadeScale (float32)
        // NetworkVarNames: m_flShadowStrength (float32)
        // NetworkVarNames: m_nObjectCulling (uint8)
        // NetworkVarNames: m_nAddDecal (int)
        // NetworkVarNames: m_vDecalPosition (Vector)
        // NetworkVarNames: m_vDecalForwardAxis (Vector)
        // NetworkVarNames: m_flDecalHealBloodRate (float)
        // NetworkVarNames: m_flDecalHealHeightRate (float)
        // NetworkVarNames: m_ConfigEntitiesToPropagateMaterialDecalsTo (CHandle< C_BaseModelEntity >)
        public static class C_BaseModelEntity {
            public const nint m_CRenderComponent = 0x9A0; // CRenderComponent*
            public const nint m_CHitboxComponent = 0x9A8; // CHitboxComponent
            public const nint m_bInitModelEffects = 0x9F0; // bool
            public const nint m_bIsStaticProp = 0x9F1; // bool
            public const nint m_nLastAddDecal = 0x9F4; // int32
            public const nint m_nDecalsAdded = 0x9F8; // int32
            public const nint m_iOldHealth = 0x9FC; // int32
            public const nint m_nRenderMode = 0xA00; // RenderMode_t
            public const nint m_nRenderFX = 0xA01; // RenderFx_t
            public const nint m_bAllowFadeInView = 0xA02; // bool
            public const nint m_clrRender = 0xA03; // Color
            public const nint m_vecRenderAttributes = 0xA08; // C_UtlVectorEmbeddedNetworkVar<EntityRenderAttribute_t>
            public const nint m_bRenderToCubemaps = 0xA70; // bool
            public const nint m_Collision = 0xA78; // CCollisionProperty
            public const nint m_Glow = 0xB28; // CGlowProperty
            public const nint m_flGlowBackfaceMult = 0xB80; // float32
            public const nint m_fadeMinDist = 0xB84; // float32
            public const nint m_fadeMaxDist = 0xB88; // float32
            public const nint m_flFadeScale = 0xB8C; // float32
            public const nint m_flShadowStrength = 0xB90; // float32
            public const nint m_nObjectCulling = 0xB94; // uint8
            public const nint m_nAddDecal = 0xB98; // int32
            public const nint m_vDecalPosition = 0xB9C; // Vector
            public const nint m_vDecalForwardAxis = 0xBA8; // Vector
            public const nint m_flDecalHealBloodRate = 0xBB4; // float32
            public const nint m_flDecalHealHeightRate = 0xBB8; // float32
            public const nint m_ConfigEntitiesToPropagateMaterialDecalsTo = 0xBC0; // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
            public const nint m_vecViewOffset = 0xBD8; // CNetworkViewOffsetVector
            public const nint m_pClientAlphaProperty = 0xC08; // CClientAlphaProperty*
            public const nint m_ClientOverrideTint = 0xC10; // Color
            public const nint m_bUseClientOverrideTint = 0xC14; // bool
        }
        // Parent: C_BaseModelEntity
        // Fields count: 0
        public static class CServerOnlyModelEntity {
        }
        // Parent: C_BaseModelEntity
        // Fields count: 0
        public static class C_ModelPointEntity {
        }
        // Parent: CLogicalEntity
        // Fields count: 7
        public static class CLogicRelay {
            public const nint m_OnTrigger = 0x6D0; // CEntityIOOutput
            public const nint m_OnSpawn = 0x6F8; // CEntityIOOutput
            public const nint m_bDisabled = 0x720; // bool
            public const nint m_bWaitForRefire = 0x721; // bool
            public const nint m_bTriggerOnce = 0x722; // bool
            public const nint m_bFastRetrigger = 0x723; // bool
            public const nint m_bPassthoughCaller = 0x724; // bool
        }
        // Parent: C_BaseModelEntity
        // Fields count: 24
        //
        // Metadata:
        // MNetworkIncludeByUserGroup
        // MNetworkIncludeByName
        // MNetworkIncludeByName
        // MNetworkIncludeByName
        // MNetworkIncludeByName
        // MNetworkIncludeByName
        // NetworkVarNames: m_szSnapshotFileName (char)
        // NetworkVarNames: m_bActive (bool)
        // NetworkVarNames: m_bFrozen (bool)
        // NetworkVarNames: m_flFreezeTransitionDuration (float)
        // NetworkVarNames: m_nStopType (int)
        // NetworkVarNames: m_bAnimateDuringGameplayPause (bool)
        // NetworkVarNames: m_iEffectIndex (HParticleSystemDefinitionStrong)
        // NetworkVarNames: m_flStartTime (GameTime_t)
        // NetworkVarNames: m_flPreSimTime (float32)
        // NetworkVarNames: m_vServerControlPoints (Vector)
        // NetworkVarNames: m_iServerControlPointAssignments (uint8)
        // NetworkVarNames: m_hControlPointEnts (CHandle< CBaseEntity >)
        // NetworkVarNames: m_bNoSave (bool)
        // NetworkVarNames: m_bNoFreeze (bool)
        // NetworkVarNames: m_bNoRamp (bool)
        public static class C_ParticleSystem {
            public const nint m_szSnapshotFileName = 0xC50; // char[512]
            public const nint m_bActive = 0xE50; // bool
            public const nint m_bFrozen = 0xE51; // bool
            public const nint m_flFreezeTransitionDuration = 0xE54; // float32
            public const nint m_nStopType = 0xE58; // int32
            public const nint m_bAnimateDuringGameplayPause = 0xE5C; // bool
            public const nint m_iEffectIndex = 0xE60; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
            public const nint m_flStartTime = 0xE68; // GameTime_t
            public const nint m_flPreSimTime = 0xE6C; // float32
            public const nint m_vServerControlPoints = 0xE70; // Vector[4]
            public const nint m_iServerControlPointAssignments = 0xEA0; // uint8[4]
            public const nint m_hControlPointEnts = 0xEA4; // CHandle<C_BaseEntity>[64]
            public const nint m_bNoSave = 0xFA4; // bool
            public const nint m_bNoFreeze = 0xFA5; // bool
            public const nint m_bNoRamp = 0xFA6; // bool
            public const nint m_bStartActive = 0xFA7; // bool
            public const nint m_iszEffectName = 0xFA8; // CUtlSymbolLarge
            public const nint m_iszControlPointNames = 0xFB0; // CUtlSymbolLarge[64]
            public const nint m_nDataCP = 0x11B0; // int32
            public const nint m_vecDataCPValue = 0x11B4; // Vector
            public const nint m_nTintCP = 0x11C0; // int32
            public const nint m_clrTint = 0x11C4; // Color
            public const nint m_bOldActive = 0x11E8; // bool
            public const nint m_bOldFrozen = 0x11E9; // bool
        }
        // Parent: C_BaseEntity
        // Fields count: 16
        //
        // Metadata:
        // NetworkVarNames: m_flParticleSpacing (float)
        // NetworkVarNames: m_flSlack (float)
        // NetworkVarNames: m_flRadius (float)
        // NetworkVarNames: m_ColorTint (Color)
        // NetworkVarNames: m_nEffectState (int)
        // NetworkVarNames: m_iEffectIndex (HParticleSystemDefinitionStrong)
        // NetworkVarNames: m_PathNodes_Position (Vector)
        // NetworkVarNames: m_PathNodes_TangentIn (Vector)
        // NetworkVarNames: m_PathNodes_TangentOut (Vector)
        // NetworkVarNames: m_PathNodes_Color (Vector)
        // NetworkVarNames: m_PathNodes_PinEnabled (bool)
        // NetworkVarNames: m_PathNodes_RadiusScale (float)
        public static class C_PathParticleRope {
            public const nint m_bStartActive = 0x6D0; // bool
            public const nint m_flMaxSimulationTime = 0x6D4; // float32
            public const nint m_iszEffectName = 0x6D8; // CUtlSymbolLarge
            public const nint m_PathNodes_Name = 0x6E0; // CUtlVector<CUtlSymbolLarge>
            public const nint m_flParticleSpacing = 0x6F8; // float32
            public const nint m_flSlack = 0x6FC; // float32
            public const nint m_flRadius = 0x700; // float32
            public const nint m_ColorTint = 0x704; // Color
            public const nint m_nEffectState = 0x708; // int32
            public const nint m_iEffectIndex = 0x710; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
            public const nint m_PathNodes_Position = 0x718; // C_NetworkUtlVectorBase<Vector>
            public const nint m_PathNodes_TangentIn = 0x730; // C_NetworkUtlVectorBase<Vector>
            public const nint m_PathNodes_TangentOut = 0x748; // C_NetworkUtlVectorBase<Vector>
            public const nint m_PathNodes_Color = 0x760; // C_NetworkUtlVectorBase<Vector>
            public const nint m_PathNodes_PinEnabled = 0x778; // C_NetworkUtlVectorBase<bool>
            public const nint m_PathNodes_RadiusScale = 0x790; // C_NetworkUtlVectorBase<float32>
        }
        // Parent: C_PathParticleRope
        // Fields count: 0
        public static class C_PathParticleRopeAlias_path_particle_rope_clientside {
        }
        // Parent: C_BaseModelEntity
        // Fields count: 7
        //
        // Metadata:
        // NetworkVarNames: m_Flags (uint8)
        // NetworkVarNames: m_LightStyle (uint8)
        // NetworkVarNames: m_Radius (float32)
        // NetworkVarNames: m_Exponent (int32)
        // NetworkVarNames: m_InnerAngle (float32)
        // NetworkVarNames: m_OuterAngle (float32)
        // NetworkVarNames: m_SpotRadius (float32)
        public static class C_DynamicLight {
            public const nint m_Flags = 0xC50; // uint8
            public const nint m_LightStyle = 0xC51; // uint8
            public const nint m_Radius = 0xC54; // float32
            public const nint m_Exponent = 0xC58; // int32
            public const nint m_InnerAngle = 0xC5C; // float32
            public const nint m_OuterAngle = 0xC60; // float32
            public const nint m_SpotRadius = 0xC64; // float32
        }
        // Parent: C_PointEntity
        // Fields count: 9
        //
        // Metadata:
        // NetworkVarNames: m_iszOverlayNames (string_t)
        // NetworkVarNames: m_flOverlayTimes (float32)
        // NetworkVarNames: m_flStartTime (GameTime_t)
        // NetworkVarNames: m_iDesiredOverlay (int32)
        // NetworkVarNames: m_bIsActive (bool)
        public static class C_EnvScreenOverlay {
            public const nint m_iszOverlayNames = 0x6D0; // CUtlSymbolLarge[10]
            public const nint m_flOverlayTimes = 0x720; // float32[10]
            public const nint m_flStartTime = 0x748; // GameTime_t
            public const nint m_iDesiredOverlay = 0x74C; // int32
            public const nint m_bIsActive = 0x750; // bool
            public const nint m_bWasActive = 0x751; // bool
            public const nint m_iCachedDesiredOverlay = 0x754; // int32
            public const nint m_iCurrentOverlay = 0x758; // int32
            public const nint m_flCurrentOverlayTime = 0x75C; // GameTime_t
        }
        // Parent: C_BaseModelEntity
        // Fields count: 3
        public static class C_FuncTrackTrain {
            public const nint m_nLongAxis = 0xC50; // int32
            public const nint m_flRadius = 0xC54; // float32
            public const nint m_flLineLength = 0xC58; // float32
        }
        // Parent: CGlowOverlay
        // Fields count: 7
        public static class C_LightGlowOverlay {
            public const nint m_vecOrigin = 0xCC; // Vector
            public const nint m_vecDirection = 0xD8; // Vector
            public const nint m_nMinDist = 0xE4; // int32
            public const nint m_nMaxDist = 0xE8; // int32
            public const nint m_nOuterMaxDist = 0xEC; // int32
            public const nint m_bOneSided = 0xF0; // bool
            public const nint m_bModulateByDot = 0xF1; // bool
        }
        // Parent: C_BaseModelEntity
        // Fields count: 8
        //
        // Metadata:
        // MNetworkIncludeByUserGroup
        // MNetworkIncludeByName
        // MNetworkIncludeByName
        // MNetworkIncludeByName
        // MNetworkIncludeByName
        // NetworkVarNames: m_nHorizontalSize (uint32)
        // NetworkVarNames: m_nVerticalSize (uint32)
        // NetworkVarNames: m_nMinDist (uint32)
        // NetworkVarNames: m_nMaxDist (uint32)
        // NetworkVarNames: m_nOuterMaxDist (uint32)
        // NetworkVarNames: m_flGlowProxySize (float32)
        // NetworkVarNames: m_flHDRColorScale (float32)
        public static class C_LightGlow {
            public const nint m_nHorizontalSize = 0xC50; // uint32
            public const nint m_nVerticalSize = 0xC54; // uint32
            public const nint m_nMinDist = 0xC58; // uint32
            public const nint m_nMaxDist = 0xC5C; // uint32
            public const nint m_nOuterMaxDist = 0xC60; // uint32
            public const nint m_flGlowProxySize = 0xC64; // float32
            public const nint m_flHDRColorScale = 0xC68; // float32
            public const nint m_Glow = 0xC70; // C_LightGlowOverlay
        }
        // Parent: C_BaseEntity
        // Fields count: 1
        //
        // Metadata:
        // NetworkVarNames: m_iCurrentMaxRagdollCount (int8)
        public static class C_RagdollManager {
            public const nint m_iCurrentMaxRagdollCount = 0x6D0; // int8
        }
        // Parent: C_BaseModelEntity
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_flLightScale (float32)
        // NetworkVarNames: m_Radius (float32)
        public static class C_SpotlightEnd {
            public const nint m_flLightScale = 0xC50; // float32
            public const nint m_Radius = 0xC54; // float32
        }
        // Parent: C_BaseEntity
        // Fields count: 25
        //
        // Metadata:
        // NetworkVarNames: m_bDisabled (bool)
        // NetworkVarNames: m_bUpdateOnClient (bool)
        // NetworkVarNames: m_nInputType (ValueRemapperInputType_t)
        // NetworkVarNames: m_hRemapLineStart (CHandle< CBaseEntity>)
        // NetworkVarNames: m_hRemapLineEnd (CHandle< CBaseEntity>)
        // NetworkVarNames: m_flMaximumChangePerSecond (float)
        // NetworkVarNames: m_flDisengageDistance (float)
        // NetworkVarNames: m_flEngageDistance (float)
        // NetworkVarNames: m_bRequiresUseKey (bool)
        // NetworkVarNames: m_nOutputType (ValueRemapperOutputType_t)
        // NetworkVarNames: m_hOutputEntities (CHandle< C_BaseEntity >)
        // NetworkVarNames: m_nHapticsType (ValueRemapperHapticsType_t)
        // NetworkVarNames: m_nMomentumType (ValueRemapperMomentumType_t)
        // NetworkVarNames: m_flMomentumModifier (float)
        // NetworkVarNames: m_flSnapValue (float)
        // NetworkVarNames: m_nRatchetType (ValueRemapperRatchetType_t)
        // NetworkVarNames: m_flInputOffset (float)
        public static class C_PointValueRemapper {
            public const nint m_bDisabled = 0x6D0; // bool
            public const nint m_bDisabledOld = 0x6D1; // bool
            public const nint m_bUpdateOnClient = 0x6D2; // bool
            public const nint m_nInputType = 0x6D4; // ValueRemapperInputType_t
            public const nint m_hRemapLineStart = 0x6D8; // CHandle<C_BaseEntity>
            public const nint m_hRemapLineEnd = 0x6DC; // CHandle<C_BaseEntity>
            public const nint m_flMaximumChangePerSecond = 0x6E0; // float32
            public const nint m_flDisengageDistance = 0x6E4; // float32
            public const nint m_flEngageDistance = 0x6E8; // float32
            public const nint m_bRequiresUseKey = 0x6EC; // bool
            public const nint m_nOutputType = 0x6F0; // ValueRemapperOutputType_t
            public const nint m_hOutputEntities = 0x6F8; // C_NetworkUtlVectorBase<CHandle<C_BaseEntity>>
            public const nint m_nHapticsType = 0x710; // ValueRemapperHapticsType_t
            public const nint m_nMomentumType = 0x714; // ValueRemapperMomentumType_t
            public const nint m_flMomentumModifier = 0x718; // float32
            public const nint m_flSnapValue = 0x71C; // float32
            public const nint m_flCurrentMomentum = 0x720; // float32
            public const nint m_nRatchetType = 0x724; // ValueRemapperRatchetType_t
            public const nint m_flRatchetOffset = 0x728; // float32
            public const nint m_flInputOffset = 0x72C; // float32
            public const nint m_bEngaged = 0x730; // bool
            public const nint m_bFirstUpdate = 0x731; // bool
            public const nint m_flPreviousValue = 0x734; // float32
            public const nint m_flPreviousUpdateTickTime = 0x738; // GameTime_t
            public const nint m_vecPreviousTestPoint = 0x73C; // Vector
        }
        // Parent: C_ModelPointEntity
        // Fields count: 12
        //
        // Metadata:
        // NetworkVarNames: m_messageText (char)
        // NetworkVarNames: m_FontName (char)
        // NetworkVarNames: m_bEnabled (bool)
        // NetworkVarNames: m_bFullbright (bool)
        // NetworkVarNames: m_flWorldUnitsPerPx (float)
        // NetworkVarNames: m_flFontSize (float)
        // NetworkVarNames: m_flDepthOffset (float)
        // NetworkVarNames: m_Color (Color)
        // NetworkVarNames: m_nJustifyHorizontal (PointWorldTextJustifyHorizontal_t)
        // NetworkVarNames: m_nJustifyVertical (PointWorldTextJustifyVertical_t)
        // NetworkVarNames: m_nReorientMode (PointWorldTextReorientMode_t)
        public static class C_PointWorldText {
            public const nint m_bForceRecreateNextUpdate = 0xC58; // bool
            public const nint m_messageText = 0xC68; // char[512]
            public const nint m_FontName = 0xE68; // char[64]
            public const nint m_bEnabled = 0xEA8; // bool
            public const nint m_bFullbright = 0xEA9; // bool
            public const nint m_flWorldUnitsPerPx = 0xEAC; // float32
            public const nint m_flFontSize = 0xEB0; // float32
            public const nint m_flDepthOffset = 0xEB4; // float32
            public const nint m_Color = 0xEB8; // Color
            public const nint m_nJustifyHorizontal = 0xEBC; // PointWorldTextJustifyHorizontal_t
            public const nint m_nJustifyVertical = 0xEC0; // PointWorldTextJustifyVertical_t
            public const nint m_nReorientMode = 0xEC4; // PointWorldTextReorientMode_t
        }
        // Parent: C_BaseEntity
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_Handle (CHandle< CBaseEntity>)
        // NetworkVarNames: m_bSendHandle (bool)
        public static class C_HandleTest {
            public const nint m_Handle = 0x6D0; // CHandle<C_BaseEntity>
            public const nint m_bSendHandle = 0x6D4; // bool
        }
        // Parent: C_BaseEntity
        // Fields count: 0
        public static class CClientScriptEntity {
        }
        // Parent: C_BaseEntity
        // Fields count: 1
        //
        // Metadata:
        // NetworkVarNames: m_EnvWindShared (CEnvWindShared)
        public static class C_EnvWind {
            public const nint m_EnvWindShared = 0x6D0; // C_EnvWindShared
        }
        // Parent: C_BaseModelEntity
        // Fields count: 0
        public static class C_BaseToggle {
        }
        // Parent: C_BaseToggle
        // Fields count: 3
        //
        // Metadata:
        // NetworkVarNames: m_glowEntity (CHandle< C_BaseModelEntity>)
        // NetworkVarNames: m_usable (bool)
        // NetworkVarNames: m_szDisplayText (string_t)
        public static class C_BaseButton {
            public const nint m_glowEntity = 0xC50; // CHandle<C_BaseModelEntity>
            public const nint m_usable = 0xC54; // bool
            public const nint m_szDisplayText = 0xC58; // CUtlSymbolLarge
        }
        // Parent: C_BaseModelEntity
        // Fields count: 0
        public static class C_PrecipitationBlocker {
        }
        // Parent: C_BaseModelEntity
        // Fields count: 13
        //
        // Metadata:
        // NetworkVarNames: m_flStartTime (GameTime_t)
        // NetworkVarNames: m_flFadeInStart (float32)
        // NetworkVarNames: m_flFadeInLength (float32)
        // NetworkVarNames: m_flFadeOutModelStart (float32)
        // NetworkVarNames: m_flFadeOutModelLength (float32)
        // NetworkVarNames: m_flFadeOutStart (float32)
        // NetworkVarNames: m_flFadeOutLength (float32)
        // NetworkVarNames: m_nDissolveType (EntityDisolveType_t)
        // NetworkVarNames: m_vDissolverOrigin (Vector)
        // NetworkVarNames: m_nMagnitude (uint32)
        public static class C_EntityDissolve {
            public const nint m_flStartTime = 0xC58; // GameTime_t
            public const nint m_flFadeInStart = 0xC5C; // float32
            public const nint m_flFadeInLength = 0xC60; // float32
            public const nint m_flFadeOutModelStart = 0xC64; // float32
            public const nint m_flFadeOutModelLength = 0xC68; // float32
            public const nint m_flFadeOutStart = 0xC6C; // float32
            public const nint m_flFadeOutLength = 0xC70; // float32
            public const nint m_flNextSparkTime = 0xC74; // GameTime_t
            public const nint m_nDissolveType = 0xC78; // EntityDisolveType_t
            public const nint m_vDissolverOrigin = 0xC7C; // Vector
            public const nint m_nMagnitude = 0xC88; // uint32
            public const nint m_bCoreExplode = 0xC8C; // bool
            public const nint m_bLinkedToServerEnt = 0xC8D; // bool
        }
        // Parent: C_ModelPointEntity
        // Fields count: 0
        public static class C_EnvProjectedTexture {
        }
        // Parent: C_BaseModelEntity
        // Fields count: 9
        //
        // Metadata:
        // NetworkVarNames: m_hDecalMaterial (HMaterialStrong)
        // NetworkVarNames: m_flWidth (float)
        // NetworkVarNames: m_flHeight (float)
        // NetworkVarNames: m_flDepth (float)
        // NetworkVarNames: m_nRenderOrder (uint32)
        // NetworkVarNames: m_bProjectOnWorld (bool)
        // NetworkVarNames: m_bProjectOnCharacters (bool)
        // NetworkVarNames: m_bProjectOnWater (bool)
        // NetworkVarNames: m_flDepthSortBias (float)
        public static class C_EnvDecal {
            public const nint m_hDecalMaterial = 0xC50; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_flWidth = 0xC58; // float32
            public const nint m_flHeight = 0xC5C; // float32
            public const nint m_flDepth = 0xC60; // float32
            public const nint m_nRenderOrder = 0xC64; // uint32
            public const nint m_bProjectOnWorld = 0xC68; // bool
            public const nint m_bProjectOnCharacters = 0xC69; // bool
            public const nint m_bProjectOnWater = 0xC6A; // bool
            public const nint m_flDepthSortBias = 0xC6C; // float32
        }
        // Parent: CGlowOverlay
        // Fields count: 4
        public static class CFireOverlay {
            public const nint m_pOwner = 0xD0; // C_FireSmoke*
            public const nint m_vBaseColors = 0xD8; // Vector[4]
            public const nint m_flScale = 0x108; // float32
            public const nint m_nGUID = 0x10C; // int32
        }
        // Parent: C_BaseModelEntity
        // Fields count: 0
        public static class C_FuncBrush {
        }
        // Parent: C_FuncBrush
        // Fields count: 3
        //
        // Metadata:
        // NetworkVarNames: m_EffectName (string_t)
        // NetworkVarNames: m_bState (bool)
        public static class C_FuncElectrifiedVolume {
            public const nint m_nAmbientEffect = 0xC50; // ParticleIndex_t
            public const nint m_EffectName = 0xC58; // CUtlSymbolLarge
            public const nint m_bState = 0xC60; // bool
        }
        // Parent: C_BaseModelEntity
        // Fields count: 0
        //
        // Metadata:
        // MNetworkOverride
        // MNetworkOverride
        public static class C_FuncRotating {
        }
        // Parent: C_BaseModelEntity
        // Fields count: 0
        public static class C_Breakable {
        }
        // Parent: C_Breakable
        // Fields count: 0
        public static class C_PhysBox {
        }
        // Parent: C_BaseModelEntity
        // Fields count: 41
        //
        // Metadata:
        // MNetworkIncludeByUserGroup
        // MNetworkIncludeByName
        // MNetworkIncludeByName
        // MNetworkIncludeByName
        // MNetworkIncludeByName
        // MNetworkIncludeByName
        // MNetworkIncludeByName
        // NetworkVarNames: m_flScrollSpeed (float32)
        // NetworkVarNames: m_RopeFlags (uint16)
        // NetworkVarNames: m_iRopeMaterialModelIndex (HMaterialStrong)
        // NetworkVarNames: m_nSegments (uint8)
        // NetworkVarNames: m_hStartPoint (CHandle< C_BaseEntity>)
        // NetworkVarNames: m_hEndPoint (CHandle< C_BaseEntity>)
        // NetworkVarNames: m_iStartAttachment (AttachmentHandle_t)
        // NetworkVarNames: m_iEndAttachment (AttachmentHandle_t)
        // NetworkVarNames: m_Subdiv (uint8)
        // NetworkVarNames: m_RopeLength (int16)
        // NetworkVarNames: m_Slack (int16)
        // NetworkVarNames: m_TextureScale (float32)
        // NetworkVarNames: m_fLockedPoints (uint8)
        // NetworkVarNames: m_nChangeCount (uint8)
        // NetworkVarNames: m_Width (float32)
        // NetworkVarNames: m_bConstrainBetweenEndpoints (bool)
        public static class C_RopeKeyframe {
            public const nint m_LinksTouchingSomething = 0xC58; // CBitVec<10>
            public const nint m_nLinksTouchingSomething = 0xC5C; // int32
            public const nint m_bApplyWind = 0xC60; // bool
            public const nint m_fPrevLockedPoints = 0xC64; // int32
            public const nint m_iForcePointMoveCounter = 0xC68; // int32
            public const nint m_bPrevEndPointPos = 0xC6C; // bool[2]
            public const nint m_vPrevEndPointPos = 0xC70; // Vector[2]
            public const nint m_flCurScroll = 0xC88; // float32
            public const nint m_flScrollSpeed = 0xC8C; // float32
            public const nint m_RopeFlags = 0xC90; // uint16
            public const nint m_iRopeMaterialModelIndex = 0xC98; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_LightValues = 0xF10; // Vector[10]
            public const nint m_nSegments = 0xF88; // uint8
            public const nint m_hStartPoint = 0xF8C; // CHandle<C_BaseEntity>
            public const nint m_hEndPoint = 0xF90; // CHandle<C_BaseEntity>
            public const nint m_iStartAttachment = 0xF94; // AttachmentHandle_t
            public const nint m_iEndAttachment = 0xF95; // AttachmentHandle_t
            public const nint m_Subdiv = 0xF96; // uint8
            public const nint m_RopeLength = 0xF98; // int16
            public const nint m_Slack = 0xF9A; // int16
            public const nint m_TextureScale = 0xF9C; // float32
            public const nint m_fLockedPoints = 0xFA0; // uint8
            public const nint m_nChangeCount = 0xFA1; // uint8
            public const nint m_Width = 0xFA4; // float32
            public const nint m_PhysicsDelegate = 0xFA8; // C_RopeKeyframe::CPhysicsDelegate
            public const nint m_hMaterial = 0xFB8; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_TextureHeight = 0xFC0; // int32
            public const nint m_vecImpulse = 0xFC4; // Vector
            public const nint m_vecPreviousImpulse = 0xFD0; // Vector
            public const nint m_flCurrentGustTimer = 0xFDC; // float32
            public const nint m_flCurrentGustLifetime = 0xFE0; // float32
            public const nint m_flTimeToNextGust = 0xFE4; // float32
            public const nint m_vWindDir = 0xFE8; // Vector
            public const nint m_vColorMod = 0xFF4; // Vector
            public const nint m_vCachedEndPointAttachmentPos = 0x1000; // Vector[2]
            public const nint m_vCachedEndPointAttachmentAngle = 0x1018; // QAngle[2]
            public const nint m_bConstrainBetweenEndpoints = 0x1030; // bool
            public const nint m_bEndPointAttachmentPositionsDirty = 0x0; // bitfield:1
            public const nint m_bEndPointAttachmentAnglesDirty = 0x0; // bitfield:1
            public const nint m_bNewDataThisFrame = 0x0; // bitfield:1
            public const nint m_bPhysicsInitted = 0x0; // bitfield:1
        }
        // Parent: C_PointEntity
        // Fields count: 12
        //
        // Metadata:
        // NetworkVarNames: m_bIsPlayingBack (bool)
        // NetworkVarNames: m_bPaused (bool)
        // NetworkVarNames: m_bMultiplayer (bool)
        // NetworkVarNames: m_bAutogenerated (bool)
        // NetworkVarNames: m_flForceClientTime (float32)
        // NetworkVarNames: m_nSceneStringIndex (uint16)
        // NetworkVarNames: m_hActorList (CHandle< C_BaseFlex >)
        public static class C_SceneEntity {
            public const nint m_bIsPlayingBack = 0x6D8; // bool
            public const nint m_bPaused = 0x6D9; // bool
            public const nint m_bMultiplayer = 0x6DA; // bool
            public const nint m_bAutogenerated = 0x6DB; // bool
            public const nint m_flForceClientTime = 0x6DC; // float32
            public const nint m_nSceneStringIndex = 0x6E0; // uint16
            public const nint m_bClientOnly = 0x6E2; // bool
            public const nint m_hOwner = 0x6E4; // CHandle<C_BaseFlex>
            public const nint m_hActorList = 0x6E8; // C_NetworkUtlVectorBase<CHandle<C_BaseFlex>>
            public const nint m_bWasPlaying = 0x700; // bool
            public const nint m_QueuedEvents = 0x710; // CUtlVector<C_SceneEntity::QueuedEvents_t>
            public const nint m_flCurrentTime = 0x728; // float32
        }
        // Parent: CGlowOverlay
        // Fields count: 1
        public static class C_SunGlowOverlay {
            public const nint m_bModulateByDot = 0xCC; // bool
        }
        // Parent: C_BaseModelEntity
        // Fields count: 18
        //
        // Metadata:
        // MNetworkIncludeByName
        // MNetworkExcludeByName
        // MNetworkIncludeByUserGroup
        // MNetworkIncludeByName
        // MNetworkIncludeByName
        // MNetworkIncludeByName
        // NetworkVarNames: m_vDirection (Vector)
        // NetworkVarNames: m_iszEffectName (string_t)
        // NetworkVarNames: m_iszSSEffectName (string_t)
        // NetworkVarNames: m_clrOverlay (Color)
        // NetworkVarNames: m_bOn (bool)
        // NetworkVarNames: m_bmaxColor (bool)
        // NetworkVarNames: m_flSize (float32)
        // NetworkVarNames: m_flHazeScale (float32)
        // NetworkVarNames: m_flRotation (float32)
        // NetworkVarNames: m_flHDRColorScale (float32)
        // NetworkVarNames: m_flAlphaHaze (float32)
        // NetworkVarNames: m_flAlphaScale (float32)
        // NetworkVarNames: m_flAlphaHdr (float32)
        // NetworkVarNames: m_flFarZScale (float32)
        public static class C_Sun {
            public const nint m_fxSSSunFlareEffectIndex = 0xC50; // ParticleIndex_t
            public const nint m_fxSunFlareEffectIndex = 0xC54; // ParticleIndex_t
            public const nint m_fdistNormalize = 0xC58; // float32
            public const nint m_vSunPos = 0xC5C; // Vector
            public const nint m_vDirection = 0xC68; // Vector
            public const nint m_iszEffectName = 0xC78; // CUtlSymbolLarge
            public const nint m_iszSSEffectName = 0xC80; // CUtlSymbolLarge
            public const nint m_clrOverlay = 0xC88; // Color
            public const nint m_bOn = 0xC8C; // bool
            public const nint m_bmaxColor = 0xC8D; // bool
            public const nint m_flSize = 0xC90; // float32
            public const nint m_flHazeScale = 0xC94; // float32
            public const nint m_flRotation = 0xC98; // float32
            public const nint m_flHDRColorScale = 0xC9C; // float32
            public const nint m_flAlphaHaze = 0xCA0; // float32
            public const nint m_flAlphaScale = 0xCA4; // float32
            public const nint m_flAlphaHdr = 0xCA8; // float32
            public const nint m_flFarZScale = 0xCAC; // float32
        }
        // Parent: C_BaseToggle
        // Fields count: 2
        //
        // Metadata:
        // MNetworkIncludeByName
        // NetworkVarNames: m_bDisabled (bool)
        // NetworkVarNames: m_bClientSidePredicted (bool)
        public static class C_BaseTrigger {
            public const nint m_bDisabled = 0xC50; // bool
            public const nint m_bClientSidePredicted = 0xC51; // bool
        }
        // Parent: C_BaseModelEntity
        // Fields count: 0
        public static class C_TriggerVolume {
        }
    }
    // Module: libengine2.so
    // Classes count: 48
    // Enums count: 0
    public static class Libengine2 {
        // Parent: None
        // Fields count: 1
        public static class CNetworkVarChainer {
            public const nint m_PathIndex = 0x20; // ChangeAccessorFieldPathIndex_t
        }
        // Parent: None
        // Fields count: 0
        public static class CVariantDefaultAllocator {
        }
        // Parent: None
        // Fields count: 0
        public static class EntOutput_t {
        }
        // Parent: None
        // Fields count: 7
        public static class EntComponentInfo_t {
            public const nint m_pName = 0x0; // char*
            public const nint m_pCPPClassname = 0x8; // char*
            public const nint m_pNetworkDataReferencedDescription = 0x10; // char*
            public const nint m_pNetworkDataReferencedPtrPropDescription = 0x18; // char*
            public const nint m_nRuntimeIndex = 0x20; // int32
            public const nint m_nFlags = 0x24; // uint32
            public const nint m_pBaseClassComponentHelper = 0x60; // CEntityComponentHelper*
        }
        // Parent: None
        // Fields count: 0
        public static class CEntityComponent {
        }
        // Parent: None
        // Fields count: 0
        public static class EntInput_t {
        }
        // Parent: None
        // Fields count: 4
        public static class CEntityComponentHelper {
            public const nint m_flags = 0x8; // uint32
            public const nint m_pInfo = 0x10; // EntComponentInfo_t*
            public const nint m_nPriority = 0x18; // int32
            public const nint m_pNext = 0x20; // CEntityComponentHelper*
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
        // Fields count: 0
        public static class CEmptyEntityInstance {
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // NetworkVarNames: m_pEntity (CEntityIdentity *)
        // NetworkVarNames: m_CScriptComponent (CScriptComponent::Storage_t)
        public static class CEntityInstance {
            public const nint m_iszPrivateVScripts = 0x8; // CUtlSymbolLarge
            public const nint m_pEntity = 0x10; // CEntityIdentity*
            public const nint m_CScriptComponent = 0x28; // CScriptComponent*
            public const nint m_bVisibleinPVS = 0x30; // bool
        }
        // Parent: None
        // Fields count: 1
        public static class CEntityIOOutput {
            public const nint m_Value = 0x18; // CVariantBase<CVariantDefaultAllocator>
        }
        // Parent: CEntityComponent
        // Fields count: 1
        public static class CScriptComponent {
            public const nint m_scriptClassName = 0x30; // CUtlSymbolLarge
        }
        // Parent: None
        // Fields count: 4
        public static class EngineLoopState_t {
            public const nint m_nPlatWindowWidth = 0x18; // int32
            public const nint m_nPlatWindowHeight = 0x1C; // int32
            public const nint m_nRenderWidth = 0x20; // int32
            public const nint m_nRenderHeight = 0x24; // int32
        }
        // Parent: None
        // Fields count: 0
        public static class EventModInitialized_t {
        }
        // Parent: None
        // Fields count: 1
        public static class EventFrameBoundary_t {
            public const nint m_flFrameTime = 0x0; // float32
        }
        // Parent: None
        // Fields count: 1
        public static class EventProfileStorageAvailable_t {
            public const nint m_nSplitScreenSlot = 0x0; // CSplitScreenSlot
        }
        // Parent: None
        // Fields count: 0
        public static class EventSplitScreenStateChanged_t {
        }
        // Parent: None
        // Fields count: 8
        public static class EventSetTime_t {
            public const nint m_LoopState = 0x0; // EngineLoopState_t
            public const nint m_nClientOutputFrames = 0x28; // int32
            public const nint m_flRealTime = 0x30; // float64
            public const nint m_flRenderTime = 0x38; // float64
            public const nint m_flRenderFrameTime = 0x40; // float64
            public const nint m_flRenderFrameTimeUnbounded = 0x48; // float64
            public const nint m_flRenderFrameTimeUnscaled = 0x50; // float64
            public const nint m_flTickRemainder = 0x58; // float64
        }
        // Parent: None
        // Fields count: 2
        public static class EventClientPollInput_t {
            public const nint m_LoopState = 0x0; // EngineLoopState_t
            public const nint m_flRealTime = 0x28; // float32
        }
        // Parent: None
        // Fields count: 4
        public static class EventClientProcessInput_t {
            public const nint m_LoopState = 0x0; // EngineLoopState_t
            public const nint m_flRealTime = 0x28; // float32
            public const nint m_flTickInterval = 0x2C; // float32
            public const nint m_flTickStartTime = 0x30; // float64
        }
        // Parent: None
        // Fields count: 3
        public static class EventClientProcessGameInput_t {
            public const nint m_LoopState = 0x0; // EngineLoopState_t
            public const nint m_flRealTime = 0x28; // float32
            public const nint m_flFrameTime = 0x2C; // float32
        }
        // Parent: None
        // Fields count: 6
        public static class EventClientPreOutput_t {
            public const nint m_LoopState = 0x0; // EngineLoopState_t
            public const nint m_flRenderTime = 0x28; // float64
            public const nint m_flRenderFrameTime = 0x30; // float64
            public const nint m_flRenderFrameTimeUnbounded = 0x38; // float64
            public const nint m_flRealTime = 0x40; // float32
            public const nint m_bRenderOnly = 0x44; // bool
        }
        // Parent: None
        // Fields count: 1
        public static class EventClientSceneSystemThreadStateChange_t {
            public const nint m_bThreadsActive = 0x0; // bool
        }
        // Parent: None
        // Fields count: 5
        public static class EventClientOutput_t {
            public const nint m_LoopState = 0x0; // EngineLoopState_t
            public const nint m_flRenderTime = 0x28; // float32
            public const nint m_flRealTime = 0x2C; // float32
            public const nint m_flRenderFrameTimeUnbounded = 0x30; // float32
            public const nint m_bRenderOnly = 0x34; // bool
        }
        // Parent: None
        // Fields count: 5
        public static class EventClientPostOutput_t {
            public const nint m_LoopState = 0x0; // EngineLoopState_t
            public const nint m_flRenderTime = 0x28; // float64
            public const nint m_flRenderFrameTime = 0x30; // float32
            public const nint m_flRenderFrameTimeUnbounded = 0x34; // float32
            public const nint m_bRenderOnly = 0x38; // bool
        }
        // Parent: None
        // Fields count: 4
        public static class EventClientFrameSimulate_t {
            public const nint m_LoopState = 0x0; // EngineLoopState_t
            public const nint m_flRealTime = 0x28; // float32
            public const nint m_flFrameTime = 0x2C; // float32
            public const nint m_flWhenScheduleSendTickPacket = 0x30; // float64
        }
        // Parent: None
        // Fields count: 3
        public static class EventSimpleLoopFrameUpdate_t {
            public const nint m_LoopState = 0x0; // EngineLoopState_t
            public const nint m_flRealTime = 0x28; // float32
            public const nint m_flFrameTime = 0x2C; // float32
        }
        // Parent: None
        // Fields count: 3
        public static class EventSimulate_t {
            public const nint m_LoopState = 0x0; // EngineLoopState_t
            public const nint m_bFirstTick = 0x28; // bool
            public const nint m_bLastTick = 0x29; // bool
        }
        // Parent: EventSimulate_t
        // Fields count: 4
        public static class EventAdvanceTick_t {
            public const nint m_nCurrentTick = 0x2C; // int32
            public const nint m_nCurrentTickThisFrame = 0x30; // int32
            public const nint m_nTotalTicksThisFrame = 0x34; // int32
            public const nint m_nTotalTicks = 0x38; // int32
        }
        // Parent: EventSimulate_t
        // Fields count: 4
        public static class EventPostAdvanceTick_t {
            public const nint m_nCurrentTick = 0x2C; // int32
            public const nint m_nCurrentTickThisFrame = 0x30; // int32
            public const nint m_nTotalTicksThisFrame = 0x34; // int32
            public const nint m_nTotalTicks = 0x38; // int32
        }
        // Parent: EventAdvanceTick_t
        // Fields count: 0
        public static class EventServerAdvanceTick_t {
        }
        // Parent: EventPostAdvanceTick_t
        // Fields count: 0
        public static class EventServerPostAdvanceTick_t {
        }
        // Parent: EventAdvanceTick_t
        // Fields count: 0
        public static class EventClientAdvanceTick_t {
        }
        // Parent: EventPostAdvanceTick_t
        // Fields count: 0
        public static class EventClientPostAdvanceTick_t {
        }
        // Parent: None
        // Fields count: 0
        public static class EventClientPredictionPostNetupdate_t {
        }
        // Parent: None
        // Fields count: 1
        public static class EventClientPollNetworking_t {
            public const nint m_nTickCount = 0x0; // int32
        }
        // Parent: None
        // Fields count: 0
        public static class EventClientProcessNetworking_t {
        }
        // Parent: EventSimulate_t
        // Fields count: 0
        public static class EventClientPreSimulate_t {
        }
        // Parent: EventSimulate_t
        // Fields count: 0
        public static class EventClientSimulate_t {
        }
        // Parent: EventSimulate_t
        // Fields count: 0
        public static class EventServerPollNetworking_t {
        }
        // Parent: EventSimulate_t
        // Fields count: 0
        public static class EventServerProcessNetworking_t {
        }
        // Parent: EventSimulate_t
        // Fields count: 0
        public static class EventServerSimulate_t {
        }
        // Parent: EventSimulate_t
        // Fields count: 0
        public static class EventServerPostSimulate_t {
        }
        // Parent: EventSimulate_t
        // Fields count: 0
        public static class EventClientPostSimulate_t {
        }
        // Parent: EventSimulate_t
        // Fields count: 0
        public static class EventClientPauseSimulate_t {
        }
        // Parent: None
        // Fields count: 1
        public static class EventPostDataUpdate_t {
            public const nint m_nCount = 0x0; // int32
        }
        // Parent: None
        // Fields count: 1
        public static class EventPreDataUpdate_t {
            public const nint m_nCount = 0x0; // int32
        }
        // Parent: None
        // Fields count: 1
        public static class EventAppShutdown_t {
            public const nint m_nDummy0 = 0x0; // int32
        }
    }
    // Module: libhost.so
    // Classes count: 2
    // Enums count: 0
    public static class Libhost {
        // Parent: None
        // Fields count: 1
        public static class CAnimScriptBase {
            public const nint m_bIsValid = 0x8; // bool
        }
        // Parent: CAnimScriptBase
        // Fields count: 1
        public static class EmptyTestScript {
            public const nint m_hTest = 0x10; // CAnimScriptParam<float32>
        }
    }
    // Module: libmaterialsystem2.so
    // Classes count: 13
    // Enums count: 0
    public static class Libmaterialsystem2 {
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class MaterialParam_t {
            public const nint m_name = 0x0; // CUtlString
        }
        // Parent: MaterialParam_t
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class MaterialParamInt_t {
            public const nint m_nValue = 0x8; // int32
        }
        // Parent: MaterialParam_t
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class MaterialParamFloat_t {
            public const nint m_flValue = 0x8; // float32
        }
        // Parent: MaterialParam_t
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class MaterialParamVector_t {
            public const nint m_value = 0x8; // Vector4D
        }
        // Parent: MaterialParam_t
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class MaterialParamTexture_t {
            public const nint m_pValue = 0x8; // CStrongHandle<InfoForResourceTypeCTextureBase>
        }
        // Parent: MaterialParam_t
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class MaterialParamString_t {
            public const nint m_value = 0x8; // CUtlString
        }
        // Parent: MaterialParam_t
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class MaterialParamBuffer_t {
            public const nint m_value = 0x8; // CUtlBinaryBlock
        }
        // Parent: None
        // Fields count: 14
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class MaterialResourceData_t {
            public const nint m_materialName = 0x0; // CUtlString
            public const nint m_shaderName = 0x8; // CUtlString
            public const nint m_intParams = 0x10; // CUtlVector<MaterialParamInt_t>
            public const nint m_floatParams = 0x28; // CUtlVector<MaterialParamFloat_t>
            public const nint m_vectorParams = 0x40; // CUtlVector<MaterialParamVector_t>
            public const nint m_textureParams = 0x58; // CUtlVector<MaterialParamTexture_t>
            public const nint m_dynamicParams = 0x70; // CUtlVector<MaterialParamBuffer_t>
            public const nint m_dynamicTextureParams = 0x88; // CUtlVector<MaterialParamBuffer_t>
            public const nint m_intAttributes = 0xA0; // CUtlVector<MaterialParamInt_t>
            public const nint m_floatAttributes = 0xB8; // CUtlVector<MaterialParamFloat_t>
            public const nint m_vectorAttributes = 0xD0; // CUtlVector<MaterialParamVector_t>
            public const nint m_textureAttributes = 0xE8; // CUtlVector<MaterialParamTexture_t>
            public const nint m_stringAttributes = 0x100; // CUtlVector<MaterialParamString_t>
            public const nint m_renderAttributesUsed = 0x118; // CUtlVector<CUtlString>
        }
        // Parent: None
        // Fields count: 15
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class PostProcessingTonemapParameters_t {
            public const nint m_flExposureBias = 0x0; // float32
            public const nint m_flShoulderStrength = 0x4; // float32
            public const nint m_flLinearStrength = 0x8; // float32
            public const nint m_flLinearAngle = 0xC; // float32
            public const nint m_flToeStrength = 0x10; // float32
            public const nint m_flToeNum = 0x14; // float32
            public const nint m_flToeDenom = 0x18; // float32
            public const nint m_flWhitePoint = 0x1C; // float32
            public const nint m_flLuminanceSource = 0x20; // float32
            public const nint m_flExposureBiasShadows = 0x24; // float32
            public const nint m_flExposureBiasHighlights = 0x28; // float32
            public const nint m_flMinShadowLum = 0x2C; // float32
            public const nint m_flMaxShadowLum = 0x30; // float32
            public const nint m_flMinHighlightLum = 0x34; // float32
            public const nint m_flMaxHighlightLum = 0x38; // float32
        }
        // Parent: None
        // Fields count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class PostProcessingBloomParameters_t {
            public const nint m_blendMode = 0x0; // BloomBlendMode_t
            public const nint m_flBloomStrength = 0x4; // float32
            public const nint m_flScreenBloomStrength = 0x8; // float32
            public const nint m_flBlurBloomStrength = 0xC; // float32
            public const nint m_flBloomThreshold = 0x10; // float32
            public const nint m_flBloomThresholdWidth = 0x14; // float32
            public const nint m_flSkyboxBloomStrength = 0x18; // float32
            public const nint m_flBloomStartValue = 0x1C; // float32
            public const nint m_flBlurWeight = 0x20; // float32[5]
            public const nint m_vBlurTint = 0x34; // Vector[5]
        }
        // Parent: None
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class PostProcessingVignetteParameters_t {
            public const nint m_flVignetteStrength = 0x0; // float32
            public const nint m_vCenter = 0x4; // Vector2D
            public const nint m_flRadius = 0xC; // float32
            public const nint m_flRoundness = 0x10; // float32
            public const nint m_flFeather = 0x14; // float32
            public const nint m_vColorTint = 0x18; // Vector
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class PostProcessingLocalContrastParameters_t {
            public const nint m_flLocalContrastStrength = 0x0; // float32
            public const nint m_flLocalContrastEdgeStrength = 0x4; // float32
            public const nint m_flLocalContrastVignetteStart = 0x8; // float32
            public const nint m_flLocalContrastVignetteEnd = 0xC; // float32
            public const nint m_flLocalContrastVignetteBlur = 0x10; // float32
        }
        // Parent: None
        // Fields count: 11
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class PostProcessingResource_t {
            public const nint m_bHasTonemapParams = 0x0; // bool
            public const nint m_toneMapParams = 0x4; // PostProcessingTonemapParameters_t
            public const nint m_bHasBloomParams = 0x40; // bool
            public const nint m_bloomParams = 0x44; // PostProcessingBloomParameters_t
            public const nint m_bHasVignetteParams = 0xB4; // bool
            public const nint m_vignetteParams = 0xB8; // PostProcessingVignetteParameters_t
            public const nint m_bHasLocalContrastParams = 0xDC; // bool
            public const nint m_localConstrastParams = 0xE0; // PostProcessingLocalContrastParameters_t
            public const nint m_nColorCorrectionVolumeDim = 0xF4; // int32
            public const nint m_colorCorrectionVolumeData = 0xF8; // CUtlBinaryBlock
            public const nint m_bHasColorCorrection = 0x110; // bool
        }
    }
    // Module: libmeshsystem.so
    // Classes count: 0
    // Enums count: 0
    public static class Libmeshsystem {
    }
    // Module: libnetworksystem.so
    // Classes count: 1
    // Enums count: 0
    public static class Libnetworksystem {
        // Parent: None
        // Fields count: 1
        public static class ChangeAccessorFieldPathIndex_t {
            public const nint m_Value = 0x0; // int16
        }
    }
    // Module: libpanorama.so
    // Classes count: 0
    // Enums count: 0
    public static class Libpanorama {
    }
    // Module: libparticles.so
    // Classes count: 250
    // Enums count: 0
    public static class Libparticles {
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CParticleInput {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyCustomEditor
        public static class CPerParticleFloatInput {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyCustomEditor
        public static class CParticleCollectionFloatInput {
        }
        // Parent: CParticleCollectionFloatInput
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyCustomEditor
        public static class CParticleCollectionRendererFloatInput {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyCustomEditor
        public static class CParticleRemapFloatInput {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyCustomEditor
        public static class CPerParticleVecInput {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyCustomEditor
        public static class CParticleCollectionVecInput {
        }
        // Parent: CParticleCollectionVecInput
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyCustomEditor
        public static class CParticleCollectionRendererVecInput {
        }
        // Parent: None
        // Fields count: 1
        public static class PARTICLE_EHANDLE__ {
            public const nint unused = 0x0; // int32
        }
        // Parent: None
        // Fields count: 1
        public static class PARTICLE_WORLD_HANDLE__ {
            public const nint unused = 0x0; // int32
        }
        // Parent: None
        // Fields count: 0
        public static class IParticleEffect {
        }
        // Parent: None
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class ParticleNamedValueConfiguration_t {
            public const nint m_ConfigName = 0x0; // CUtlString
            public const nint m_ConfigValue = 0x8; // KeyValues3
            public const nint m_iAttachType = 0x18; // ParticleAttachment_t
            public const nint m_BoundEntityPath = 0x20; // CUtlString
            public const nint m_strEntityScope = 0x28; // CUtlString
            public const nint m_strAttachmentName = 0x30; // CUtlString
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class ParticleNamedValueSource_t {
            public const nint m_Name = 0x0; // CUtlString
            public const nint m_IsPublic = 0x8; // bool
            public const nint m_ValueType = 0xC; // PulseValueType_t
            public const nint m_DefaultConfig = 0x10; // ParticleNamedValueConfiguration_t
            public const nint m_NamedConfigs = 0x48; // CUtlVector<ParticleNamedValueConfiguration_t>
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyCustomEditor
        public static class CParticleVariableRef {
            public const nint m_variableName = 0x0; // CKV3MemberNameWithStorage
            public const nint m_variableType = 0x38; // PulseValueType_t
        }
        // Parent: None
        // Fields count: 0
        public static class CParticleProperty {
        }
        // Parent: IParticleEffect
        // Fields count: 32
        public static class CNewParticleEffect {
            public const nint m_pNext = 0x10; // CNewParticleEffect*
            public const nint m_pPrev = 0x18; // CNewParticleEffect*
            public const nint m_pParticles = 0x20; // IParticleCollection*
            public const nint m_pDebugName = 0x28; // char*
            public const nint m_bDontRemove = 0x0; // bitfield:1
            public const nint m_bRemove = 0x0; // bitfield:1
            public const nint m_bNeedsBBoxUpdate = 0x0; // bitfield:1
            public const nint m_bIsFirstFrame = 0x0; // bitfield:1
            public const nint m_bAutoUpdateBBox = 0x0; // bitfield:1
            public const nint m_bAllocated = 0x0; // bitfield:1
            public const nint m_bSimulate = 0x0; // bitfield:1
            public const nint m_bShouldPerformCullCheck = 0x0; // bitfield:1
            public const nint m_bForceNoDraw = 0x0; // bitfield:1
            public const nint m_bShouldSave = 0x0; // bitfield:1
            public const nint m_bDisableAggregation = 0x0; // bitfield:1
            public const nint m_bShouldSimulateDuringGamePaused = 0x0; // bitfield:1
            public const nint m_bShouldCheckFoW = 0x0; // bitfield:1
            public const nint m_vSortOrigin = 0x40; // Vector
            public const nint m_flScale = 0x4C; // float32
            public const nint m_hOwner = 0x50; // PARTICLE_EHANDLE__*
            public const nint m_pOwningParticleProperty = 0x58; // CParticleProperty*
            public const nint m_flFreezeTransitionStart = 0x70; // float32
            public const nint m_flFreezeTransitionDuration = 0x74; // float32
            public const nint m_flFreezeTransitionOverride = 0x78; // float32
            public const nint m_bFreezeTransitionActive = 0x7C; // bool
            public const nint m_bFreezeTargetState = 0x7D; // bool
            public const nint m_bCanFreeze = 0x7E; // bool
            public const nint m_LastMin = 0x80; // Vector
            public const nint m_LastMax = 0x8C; // Vector
            public const nint m_nSplitScreenUser = 0x98; // CSplitScreenSlot
            public const nint m_vecAggregationCenter = 0x9C; // Vector
            public const nint m_RefCount = 0xC0; // int32
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CRandomNumberGeneratorParameters {
            public const nint m_bDistributeEvenly = 0x0; // bool
            public const nint m_nSeed = 0x4; // int32
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class MaterialVariable_t {
            public const nint m_strVariable = 0x0; // CUtlString
            public const nint m_nVariableField = 0x8; // ParticleAttributeIndex_t
            public const nint m_flScale = 0xC; // float32
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RenderProjectedMaterial_t {
            public const nint m_hMaterial = 0x0; // CStrongHandle<InfoForResourceTypeIMaterial2>
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
            public const nint m_vecPreviewGravity = 0x58; // Vector
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
            public const nint m_vecOffset = 0x10; // Vector
            public const nint m_angOffset = 0x1C; // QAngle
            public const nint m_entityName = 0x28; // CUtlString
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class ParticleControlPointConfiguration_t {
            public const nint m_name = 0x0; // CUtlString
            public const nint m_drivers = 0x8; // CUtlVector<ParticleControlPointDriver_t>
            public const nint m_previewState = 0x20; // ParticlePreviewState_t
        }
        // Parent: None
        // Fields count: 0
        public static class IParticleCollection {
        }
        // Parent: None
        // Fields count: 0
        public static class IControlPointEditorData {
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
            public const nint m_vStartPointOffset = 0x14; // Vector
            public const nint m_vMidPointOffset = 0x20; // Vector
            public const nint m_vEndOffset = 0x2C; // Vector
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
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class ControlPointReference_t {
            public const nint m_controlPointNameString = 0x0; // int32
            public const nint m_vOffsetFromControlPoint = 0x4; // Vector
            public const nint m_bOffsetInLocalSpace = 0x10; // bool
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
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class PointDefinition_t {
            public const nint m_nControlPoint = 0x0; // int32
            public const nint m_bLocalCoords = 0x4; // bool
            public const nint m_vOffset = 0x8; // Vector
        }
        // Parent: PointDefinition_t
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class PointDefinitionWithTimeValues_t {
            public const nint m_flTimeDuration = 0x14; // float32
        }
        // Parent: IParticleSystemDefinition
        // Fields count: 64
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CParticleSystemDefinition {
            public const nint m_nBehaviorVersion = 0x8; // int32
            public const nint m_PreEmissionOperators = 0x10; // CUtlVector<CParticleFunctionPreEmission*>
            public const nint m_Emitters = 0x28; // CUtlVector<CParticleFunctionEmitter*>
            public const nint m_Initializers = 0x40; // CUtlVector<CParticleFunctionInitializer*>
            public const nint m_Operators = 0x58; // CUtlVector<CParticleFunctionOperator*>
            public const nint m_ForceGenerators = 0x70; // CUtlVector<CParticleFunctionForce*>
            public const nint m_Constraints = 0x88; // CUtlVector<CParticleFunctionConstraint*>
            public const nint m_Renderers = 0xA0; // CUtlVector<CParticleFunctionRenderer*>
            public const nint m_Children = 0xB8; // CUtlVector<ParticleChildrenInfo_t>
            public const nint m_nFirstMultipleOverride_BackwardCompat = 0x178; // int32
            public const nint m_nInitialParticles = 0x210; // int32
            public const nint m_nMaxParticles = 0x214; // int32
            public const nint m_nGroupID = 0x218; // int32
            public const nint m_BoundingBoxMin = 0x21C; // Vector
            public const nint m_BoundingBoxMax = 0x228; // Vector
            public const nint m_flDepthSortBias = 0x234; // float32
            public const nint m_nSortOverridePositionCP = 0x238; // int32
            public const nint m_bInfiniteBounds = 0x23C; // bool
            public const nint m_bEnableNamedValues = 0x23D; // bool
            public const nint m_NamedValueDomain = 0x240; // CUtlString
            public const nint m_NamedValueLocals = 0x248; // CUtlVector<ParticleNamedValueSource_t*>
            public const nint m_ConstantColor = 0x260; // Color
            public const nint m_ConstantNormal = 0x264; // Vector
            public const nint m_flConstantRadius = 0x270; // float32
            public const nint m_flConstantRotation = 0x274; // float32
            public const nint m_flConstantRotationSpeed = 0x278; // float32
            public const nint m_flConstantLifespan = 0x27C; // float32
            public const nint m_nConstantSequenceNumber = 0x280; // int32
            public const nint m_nConstantSequenceNumber1 = 0x284; // int32
            public const nint m_nSnapshotControlPoint = 0x288; // int32
            public const nint m_hSnapshot = 0x290; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
            public const nint m_pszCullReplacementName = 0x298; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
            public const nint m_flCullRadius = 0x2A0; // float32
            public const nint m_flCullFillCost = 0x2A4; // float32
            public const nint m_nCullControlPoint = 0x2A8; // int32
            public const nint m_hFallback = 0x2B0; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
            public const nint m_nFallbackMaxCount = 0x2B8; // int32
            public const nint m_hLowViolenceDef = 0x2C0; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
            public const nint m_hReferenceReplacement = 0x2C8; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
            public const nint m_flPreSimulationTime = 0x2D0; // float32
            public const nint m_flStopSimulationAfterTime = 0x2D4; // float32
            public const nint m_flMaximumTimeStep = 0x2D8; // float32
            public const nint m_flMaximumSimTime = 0x2DC; // float32
            public const nint m_flMinimumSimTime = 0x2E0; // float32
            public const nint m_flMinimumTimeStep = 0x2E4; // float32
            public const nint m_nMinimumFrames = 0x2E8; // int32
            public const nint m_nMinCPULevel = 0x2EC; // int32
            public const nint m_nMinGPULevel = 0x2F0; // int32
            public const nint m_flNoDrawTimeToGoToSleep = 0x2F4; // float32
            public const nint m_flMaxDrawDistance = 0x2F8; // float32
            public const nint m_flStartFadeDistance = 0x2FC; // float32
            public const nint m_flMaxCreationDistance = 0x300; // float32
            public const nint m_nAggregationMinAvailableParticles = 0x304; // int32
            public const nint m_flAggregateRadius = 0x308; // float32
            public const nint m_bShouldBatch = 0x30C; // bool
            public const nint m_bShouldHitboxesFallbackToRenderBounds = 0x30D; // bool
            public const nint m_bShouldHitboxesFallbackToSnapshot = 0x30E; // bool
            public const nint m_nViewModelEffect = 0x310; // InheritableBoolType_t
            public const nint m_bScreenSpaceEffect = 0x314; // bool
            public const nint m_pszTargetLayerID = 0x318; // CUtlSymbolLarge
            public const nint m_nSkipRenderControlPoint = 0x320; // int32
            public const nint m_nAllowRenderControlPoint = 0x324; // int32
            public const nint m_bShouldSort = 0x328; // bool
            public const nint m_controlPointConfigurations = 0x370; // CUtlVector<ParticleControlPointConfiguration_t>
        }
        // Parent: None
        // Fields count: 16
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CParticleFunction {
            public const nint m_flOpStrength = 0x8; // CParticleCollectionFloatInput
            public const nint m_nOpEndCapState = 0x158; // ParticleEndcapMode_t
            public const nint m_flOpStartFadeInTime = 0x15C; // float32
            public const nint m_flOpEndFadeInTime = 0x160; // float32
            public const nint m_flOpStartFadeOutTime = 0x164; // float32
            public const nint m_flOpEndFadeOutTime = 0x168; // float32
            public const nint m_flOpFadeOscillatePeriod = 0x16C; // float32
            public const nint m_bNormalizeToStopTime = 0x170; // bool
            public const nint m_flOpTimeOffsetMin = 0x174; // float32
            public const nint m_flOpTimeOffsetMax = 0x178; // float32
            public const nint m_nOpTimeOffsetSeed = 0x17C; // int32
            public const nint m_nOpTimeScaleSeed = 0x180; // int32
            public const nint m_flOpTimeScaleMin = 0x184; // float32
            public const nint m_flOpTimeScaleMax = 0x188; // float32
            public const nint m_bDisableOperator = 0x18E; // bool
            public const nint m_Notes = 0x190; // CUtlString
        }
        // Parent: CParticleFunction
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CParticleFunctionInitializer {
            public const nint m_nAssociatedEmitterIndex = 0x1B0; // int32
        }
        // Parent: CParticleFunction
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CParticleFunctionEmitter {
            public const nint m_nEmitterIndex = 0x1B0; // int32
        }
        // Parent: CParticleFunction
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CParticleFunctionConstraint {
        }
        // Parent: CParticleFunction
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CParticleFunctionOperator {
        }
        // Parent: CParticleFunction
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CParticleFunctionForce {
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CParticleFunctionPreEmission {
            public const nint m_bRunOnce = 0x1B0; // bool
        }
        // Parent: CParticleFunction
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CParticleFunctionRenderer {
            public const nint VisibilityInputs = 0x1B0; // CParticleVisibilityInputs
            public const nint m_bCannotBeRefracted = 0x1F4; // bool
            public const nint m_bSkipRenderingOnMobile = 0x1F5; // bool
        }
        // Parent: None
        // Fields count: 16
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class TextureControls_t {
            public const nint m_flFinalTextureScaleU = 0x0; // CParticleCollectionRendererFloatInput
            public const nint m_flFinalTextureScaleV = 0x150; // CParticleCollectionRendererFloatInput
            public const nint m_flFinalTextureOffsetU = 0x2A0; // CParticleCollectionRendererFloatInput
            public const nint m_flFinalTextureOffsetV = 0x3F0; // CParticleCollectionRendererFloatInput
            public const nint m_flFinalTextureUVRotation = 0x540; // CParticleCollectionRendererFloatInput
            public const nint m_flZoomScale = 0x690; // CParticleCollectionRendererFloatInput
            public const nint m_flDistortion = 0x7E0; // CParticleCollectionRendererFloatInput
            public const nint m_bRandomizeOffsets = 0x930; // bool
            public const nint m_bClampUVs = 0x931; // bool
            public const nint m_nPerParticleBlend = 0x934; // SpriteCardPerParticleScale_t
            public const nint m_nPerParticleScale = 0x938; // SpriteCardPerParticleScale_t
            public const nint m_nPerParticleOffsetU = 0x93C; // SpriteCardPerParticleScale_t
            public const nint m_nPerParticleOffsetV = 0x940; // SpriteCardPerParticleScale_t
            public const nint m_nPerParticleRotation = 0x944; // SpriteCardPerParticleScale_t
            public const nint m_nPerParticleZoom = 0x948; // SpriteCardPerParticleScale_t
            public const nint m_nPerParticleDistortion = 0x94C; // SpriteCardPerParticleScale_t
        }
        // Parent: None
        // Fields count: 9
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class TextureGroup_t {
            public const nint m_bEnabled = 0x0; // bool
            public const nint m_bReplaceTextureWithGradient = 0x1; // bool
            public const nint m_hTexture = 0x8; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Gradient = 0x10; // CColorGradient
            public const nint m_nTextureType = 0x28; // SpriteCardTextureType_t
            public const nint m_nTextureChannels = 0x2C; // SpriteCardTextureChannel_t
            public const nint m_nTextureBlendMode = 0x30; // ParticleTextureLayerBlendType_t
            public const nint m_flTextureBlend = 0x38; // CParticleCollectionRendererFloatInput
            public const nint m_TextureControls = 0x188; // TextureControls_t
        }
        // Parent: CParticleFunctionRenderer
        // Fields count: 62
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CBaseRendererSource2 {
            public const nint m_flRadiusScale = 0x1F8; // CParticleCollectionRendererFloatInput
            public const nint m_flAlphaScale = 0x348; // CParticleCollectionRendererFloatInput
            public const nint m_flRollScale = 0x498; // CParticleCollectionRendererFloatInput
            public const nint m_nAlpha2Field = 0x5E8; // ParticleAttributeIndex_t
            public const nint m_vecColorScale = 0x5F0; // CParticleCollectionRendererVecInput
            public const nint m_nColorBlendType = 0xC20; // ParticleColorBlendType_t
            public const nint m_nShaderType = 0xC24; // SpriteCardShaderType_t
            public const nint m_strShaderOverride = 0xC28; // CUtlString
            public const nint m_flCenterXOffset = 0xC30; // CParticleCollectionRendererFloatInput
            public const nint m_flCenterYOffset = 0xD80; // CParticleCollectionRendererFloatInput
            public const nint m_flBumpStrength = 0xED0; // float32
            public const nint m_nCropTextureOverride = 0xED4; // ParticleSequenceCropOverride_t
            public const nint m_vecTexturesInput = 0xED8; // CUtlVector<TextureGroup_t>
            public const nint m_flAnimationRate = 0xEF0; // float32
            public const nint m_nAnimationType = 0xEF4; // AnimationType_t
            public const nint m_bAnimateInFPS = 0xEF8; // bool
            public const nint m_flSelfIllumAmount = 0xF00; // CParticleCollectionRendererFloatInput
            public const nint m_flDiffuseAmount = 0x1050; // CParticleCollectionRendererFloatInput
            public const nint m_flDiffuseClamp = 0x11A0; // CParticleCollectionRendererFloatInput
            public const nint m_nLightingControlPoint = 0x12F0; // int32
            public const nint m_nSelfIllumPerParticle = 0x12F4; // ParticleAttributeIndex_t
            public const nint m_nOutputBlendMode = 0x12F8; // ParticleOutputBlendMode_t
            public const nint m_bGammaCorrectVertexColors = 0x12FC; // bool
            public const nint m_bSaturateColorPreAlphaBlend = 0x12FD; // bool
            public const nint m_flAddSelfAmount = 0x1300; // CParticleCollectionRendererFloatInput
            public const nint m_flDesaturation = 0x1450; // CParticleCollectionRendererFloatInput
            public const nint m_flOverbrightFactor = 0x15A0; // CParticleCollectionRendererFloatInput
            public const nint m_nHSVShiftControlPoint = 0x16F0; // int32
            public const nint m_nFogType = 0x16F4; // ParticleFogType_t
            public const nint m_flFogAmount = 0x16F8; // CParticleCollectionRendererFloatInput
            public const nint m_bTintByFOW = 0x1848; // bool
            public const nint m_bTintByGlobalLight = 0x1849; // bool
            public const nint m_nPerParticleAlphaReference = 0x184C; // SpriteCardPerParticleScale_t
            public const nint m_nPerParticleAlphaRefWindow = 0x1850; // SpriteCardPerParticleScale_t
            public const nint m_nAlphaReferenceType = 0x1854; // ParticleAlphaReferenceType_t
            public const nint m_flAlphaReferenceSoftness = 0x1858; // CParticleCollectionRendererFloatInput
            public const nint m_flSourceAlphaValueToMapToZero = 0x19A8; // CParticleCollectionRendererFloatInput
            public const nint m_flSourceAlphaValueToMapToOne = 0x1AF8; // CParticleCollectionRendererFloatInput
            public const nint m_bRefract = 0x1C48; // bool
            public const nint m_bRefractSolid = 0x1C49; // bool
            public const nint m_flRefractAmount = 0x1C50; // CParticleCollectionRendererFloatInput
            public const nint m_nRefractBlurRadius = 0x1DA0; // int32
            public const nint m_nRefractBlurType = 0x1DA4; // BlurFilterType_t
            public const nint m_bOnlyRenderInEffectsBloomPass = 0x1DA8; // bool
            public const nint m_bOnlyRenderInEffectsWaterPass = 0x1DA9; // bool
            public const nint m_bUseMixedResolutionRendering = 0x1DAA; // bool
            public const nint m_bOnlyRenderInEffecsGameOverlay = 0x1DAB; // bool
            public const nint m_stencilTestID = 0x1DAC; // char[128]
            public const nint m_bStencilTestExclude = 0x1E2C; // bool
            public const nint m_stencilWriteID = 0x1E2D; // char[128]
            public const nint m_bWriteStencilOnDepthPass = 0x1EAD; // bool
            public const nint m_bWriteStencilOnDepthFail = 0x1EAE; // bool
            public const nint m_bReverseZBuffering = 0x1EAF; // bool
            public const nint m_bDisableZBuffering = 0x1EB0; // bool
            public const nint m_nFeatheringMode = 0x1EB4; // ParticleDepthFeatheringMode_t
            public const nint m_flFeatheringMinDist = 0x1EB8; // CParticleCollectionRendererFloatInput
            public const nint m_flFeatheringMaxDist = 0x2008; // CParticleCollectionRendererFloatInput
            public const nint m_flFeatheringFilter = 0x2158; // CParticleCollectionRendererFloatInput
            public const nint m_flDepthBias = 0x22A8; // CParticleCollectionRendererFloatInput
            public const nint m_nSortMethod = 0x23F8; // ParticleSortingChoiceList_t
            public const nint m_bBlendFramesSeq0 = 0x23FC; // bool
            public const nint m_bMaxLuminanceBlendingSequence0 = 0x23FD; // bool
        }
        // Parent: CBaseRendererSource2
        // Fields count: 27
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RenderSprites {
            public const nint m_nSequenceOverride = 0x2638; // CParticleCollectionRendererFloatInput
            public const nint m_nOrientationType = 0x2788; // ParticleOrientationChoiceList_t
            public const nint m_nOrientationControlPoint = 0x278C; // int32
            public const nint m_bUseYawWithNormalAligned = 0x2790; // bool
            public const nint m_flMinSize = 0x2798; // CParticleCollectionRendererFloatInput
            public const nint m_flMaxSize = 0x28E8; // CParticleCollectionRendererFloatInput
            public const nint m_flAlphaAdjustWithSizeAdjust = 0x2A38; // CParticleCollectionRendererFloatInput
            public const nint m_flStartFadeSize = 0x2B88; // CParticleCollectionRendererFloatInput
            public const nint m_flEndFadeSize = 0x2CD8; // CParticleCollectionRendererFloatInput
            public const nint m_flStartFadeDot = 0x2E28; // float32
            public const nint m_flEndFadeDot = 0x2E2C; // float32
            public const nint m_bDistanceAlpha = 0x2E30; // bool
            public const nint m_bSoftEdges = 0x2E31; // bool
            public const nint m_flEdgeSoftnessStart = 0x2E34; // float32
            public const nint m_flEdgeSoftnessEnd = 0x2E38; // float32
            public const nint m_bOutline = 0x2E3C; // bool
            public const nint m_OutlineColor = 0x2E3D; // Color
            public const nint m_nOutlineAlpha = 0x2E44; // int32
            public const nint m_flOutlineStart0 = 0x2E48; // float32
            public const nint m_flOutlineStart1 = 0x2E4C; // float32
            public const nint m_flOutlineEnd0 = 0x2E50; // float32
            public const nint m_flOutlineEnd1 = 0x2E54; // float32
            public const nint m_nLightingMode = 0x2E58; // ParticleLightingQuality_t
            public const nint m_flLightingTessellation = 0x2E60; // CParticleCollectionRendererFloatInput
            public const nint m_flLightingDirectionality = 0x2FB0; // CParticleCollectionRendererFloatInput
            public const nint m_bParticleShadows = 0x3100; // bool
            public const nint m_flShadowDensity = 0x3104; // float32
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FloatInputMaterialVariable_t {
            public const nint m_strVariable = 0x0; // CUtlString
            public const nint m_flInput = 0x8; // CParticleCollectionFloatInput
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VecInputMaterialVariable_t {
            public const nint m_strVariable = 0x0; // CUtlString
            public const nint m_vecInput = 0x8; // CParticleCollectionVecInput
        }
        // Parent: CParticleFunctionRenderer
        // Fields count: 22
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RenderCables {
            public const nint m_flRadiusScale = 0x1F8; // CParticleCollectionFloatInput
            public const nint m_flAlphaScale = 0x348; // CParticleCollectionFloatInput
            public const nint m_vecColorScale = 0x498; // CParticleCollectionVecInput
            public const nint m_nColorBlendType = 0xAC8; // ParticleColorBlendType_t
            public const nint m_hMaterial = 0xAD0; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_nTextureRepetitionMode = 0xAD8; // TextureRepetitionMode_t
            public const nint m_flTextureRepeatsPerSegment = 0xAE0; // CParticleCollectionFloatInput
            public const nint m_flTextureRepeatsCircumference = 0xC30; // CParticleCollectionFloatInput
            public const nint m_flColorMapOffsetV = 0xD80; // CParticleCollectionFloatInput
            public const nint m_flColorMapOffsetU = 0xED0; // CParticleCollectionFloatInput
            public const nint m_flNormalMapOffsetV = 0x1020; // CParticleCollectionFloatInput
            public const nint m_flNormalMapOffsetU = 0x1170; // CParticleCollectionFloatInput
            public const nint m_bDrawCableCaps = 0x12C0; // bool
            public const nint m_flCapRoundness = 0x12C4; // float32
            public const nint m_flCapOffsetAmount = 0x12C8; // float32
            public const nint m_flTessScale = 0x12CC; // float32
            public const nint m_nMinTesselation = 0x12D0; // int32
            public const nint m_nMaxTesselation = 0x12D4; // int32
            public const nint m_nRoundness = 0x12D8; // int32
            public const nint m_LightingTransform = 0x12E0; // CParticleTransformInput
            public const nint m_MaterialFloatVars = 0x1340; // CUtlVector<FloatInputMaterialVariable_t>
            public const nint m_MaterialVecVars = 0x1370; // CUtlVector<VecInputMaterialVariable_t>
        }
        // Parent: CParticleFunctionConstraint
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_ConstrainDistance {
            public const nint m_fMinDistance = 0x1B0; // CParticleCollectionFloatInput
            public const nint m_fMaxDistance = 0x300; // CParticleCollectionFloatInput
            public const nint m_nControlPointNumber = 0x450; // int32
            public const nint m_CenterOffset = 0x454; // Vector
            public const nint m_bGlobalCenter = 0x460; // bool
        }
        // Parent: CParticleFunctionConstraint
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_CollideWithSelf {
            public const nint m_flRadiusScale = 0x1B0; // CPerParticleFloatInput
            public const nint m_flMinimumSpeed = 0x300; // CPerParticleFloatInput
        }
        // Parent: CParticleFunctionConstraint
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_CollideWithParentParticles {
            public const nint m_flParentRadiusScale = 0x1B0; // CPerParticleFloatInput
            public const nint m_flRadiusScale = 0x300; // CPerParticleFloatInput
        }
        // Parent: CParticleFunctionConstraint
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_ConstrainDistanceToPath {
            public const nint m_fMinDistance = 0x1B0; // float32
            public const nint m_flMaxDistance0 = 0x1B4; // float32
            public const nint m_flMaxDistanceMid = 0x1B8; // float32
            public const nint m_flMaxDistance1 = 0x1BC; // float32
            public const nint m_PathParameters = 0x1C0; // CPathParameters
            public const nint m_flTravelTime = 0x200; // float32
            public const nint m_nFieldScale = 0x204; // ParticleAttributeIndex_t
            public const nint m_nManualTField = 0x208; // ParticleAttributeIndex_t
        }
        // Parent: CParticleFunctionConstraint
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_ConstrainDistanceToUserSpecifiedPath {
            public const nint m_fMinDistance = 0x1B0; // float32
            public const nint m_flMaxDistance = 0x1B4; // float32
            public const nint m_flTimeScale = 0x1B8; // float32
            public const nint m_bLoopedPath = 0x1BC; // bool
            public const nint m_pointList = 0x1C0; // CUtlVector<PointDefinitionWithTimeValues_t>
        }
        // Parent: CParticleFunctionConstraint
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_PlanarConstraint {
            public const nint m_PointOnPlane = 0x1B0; // Vector
            public const nint m_PlaneNormal = 0x1BC; // Vector
            public const nint m_nControlPointNumber = 0x1C8; // int32
            public const nint m_bGlobalOrigin = 0x1CC; // bool
            public const nint m_bGlobalNormal = 0x1CD; // bool
            public const nint m_flRadiusScale = 0x1D0; // CPerParticleFloatInput
            public const nint m_flMaximumDistanceToCP = 0x320; // CParticleCollectionFloatInput
            public const nint m_bUseOldCode = 0x470; // bool
        }
        // Parent: CParticleFunctionConstraint
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_WorldCollideConstraint {
        }
        // Parent: CParticleFunctionConstraint
        // Fields count: 27
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_WorldTraceConstraint {
            public const nint m_nCP = 0x1B0; // int32
            public const nint m_vecCpOffset = 0x1B4; // Vector
            public const nint m_nCollisionMode = 0x1C0; // ParticleCollisionMode_t
            public const nint m_nCollisionModeMin = 0x1C4; // ParticleCollisionMode_t
            public const nint m_nTraceSet = 0x1C8; // ParticleTraceSet_t
            public const nint m_CollisionGroupName = 0x1CC; // char[128]
            public const nint m_bWorldOnly = 0x24C; // bool
            public const nint m_bBrushOnly = 0x24D; // bool
            public const nint m_bIncludeWater = 0x24E; // bool
            public const nint m_nIgnoreCP = 0x250; // int32
            public const nint m_flCpMovementTolerance = 0x254; // float32
            public const nint m_flRetestRate = 0x258; // float32
            public const nint m_flTraceTolerance = 0x25C; // float32
            public const nint m_flCollisionConfirmationSpeed = 0x260; // float32
            public const nint m_nMaxTracesPerFrame = 0x264; // float32
            public const nint m_flRadiusScale = 0x268; // CPerParticleFloatInput
            public const nint m_flBounceAmount = 0x3B8; // CPerParticleFloatInput
            public const nint m_flSlideAmount = 0x508; // CPerParticleFloatInput
            public const nint m_flRandomDirScale = 0x658; // CPerParticleFloatInput
            public const nint m_bDecayBounce = 0x7A8; // bool
            public const nint m_bKillonContact = 0x7A9; // bool
            public const nint m_flMinSpeed = 0x7AC; // float32
            public const nint m_bSetNormal = 0x7B0; // bool
            public const nint m_nStickOnCollisionField = 0x7B4; // ParticleAttributeIndex_t
            public const nint m_flStopSpeed = 0x7B8; // CPerParticleFloatInput
            public const nint m_nEntityStickDataField = 0x908; // ParticleAttributeIndex_t
            public const nint m_nEntityStickNormalField = 0x90C; // ParticleAttributeIndex_t
        }
        // Parent: CParticleFunctionConstraint
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_BoxConstraint {
            public const nint m_vecMin = 0x1B0; // CParticleCollectionVecInput
            public const nint m_vecMax = 0x7E0; // CParticleCollectionVecInput
            public const nint m_nCP = 0xE10; // int32
            public const nint m_bLocalSpace = 0xE14; // bool
            public const nint m_bAccountForRadius = 0xE15; // bool
        }
        // Parent: CParticleFunctionConstraint
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_ShapeMatchingConstraint {
            public const nint m_flShapeRestorationTime = 0x1B0; // float32
        }
        // Parent: CParticleFunctionConstraint
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RopeSpringConstraint {
            public const nint m_flRestLength = 0x1B0; // CParticleCollectionFloatInput
            public const nint m_flMinDistance = 0x300; // CParticleCollectionFloatInput
            public const nint m_flMaxDistance = 0x450; // CParticleCollectionFloatInput
            public const nint m_flAdjustmentScale = 0x5A0; // float32
            public const nint m_flInitialRestingLength = 0x5A8; // CParticleCollectionFloatInput
        }
        // Parent: CParticleFunctionConstraint
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SpringToVectorConstraint {
            public const nint m_flRestLength = 0x1B0; // CPerParticleFloatInput
            public const nint m_flMinDistance = 0x300; // CPerParticleFloatInput
            public const nint m_flMaxDistance = 0x450; // CPerParticleFloatInput
            public const nint m_flRestingLength = 0x5A0; // CPerParticleFloatInput
            public const nint m_vecAnchorVector = 0x6F0; // CPerParticleVecInput
        }
        // Parent: CParticleFunctionConstraint
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_ConstrainLineLength {
            public const nint m_flMinDistance = 0x1B0; // float32
            public const nint m_flMaxDistance = 0x1B4; // float32
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 11
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RingWave {
            public const nint m_TransformInput = 0x1B8; // CParticleTransformInput
            public const nint m_flParticlesPerOrbit = 0x218; // CParticleCollectionFloatInput
            public const nint m_flInitialRadius = 0x368; // CPerParticleFloatInput
            public const nint m_flThickness = 0x4B8; // CPerParticleFloatInput
            public const nint m_flInitialSpeedMin = 0x608; // CPerParticleFloatInput
            public const nint m_flInitialSpeedMax = 0x758; // CPerParticleFloatInput
            public const nint m_flRoll = 0x8A8; // CPerParticleFloatInput
            public const nint m_flPitch = 0x9F8; // CPerParticleFloatInput
            public const nint m_flYaw = 0xB48; // CPerParticleFloatInput
            public const nint m_bEvenDistribution = 0xC98; // bool
            public const nint m_bXYVelocityOnly = 0xC99; // bool
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_CreateSpiralSphere {
            public const nint m_nControlPointNumber = 0x1B4; // int32
            public const nint m_nOverrideCP = 0x1B8; // int32
            public const nint m_nDensity = 0x1BC; // int32
            public const nint m_flInitialRadius = 0x1C0; // float32
            public const nint m_flInitialSpeedMin = 0x1C4; // float32
            public const nint m_flInitialSpeedMax = 0x1C8; // float32
            public const nint m_bUseParticleCount = 0x1CC; // bool
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_CreateInEpitrochoid {
            public const nint m_nComponent1 = 0x1B4; // int32
            public const nint m_nComponent2 = 0x1B8; // int32
            public const nint m_TransformInput = 0x1C0; // CParticleTransformInput
            public const nint m_flParticleDensity = 0x220; // CPerParticleFloatInput
            public const nint m_flOffset = 0x370; // CPerParticleFloatInput
            public const nint m_flRadius1 = 0x4C0; // CPerParticleFloatInput
            public const nint m_flRadius2 = 0x610; // CPerParticleFloatInput
            public const nint m_bUseCount = 0x760; // bool
            public const nint m_bUseLocalCoords = 0x761; // bool
            public const nint m_bOffsetExistingPos = 0x762; // bool
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 14
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_CreatePhyllotaxis {
            public const nint m_nControlPointNumber = 0x1B4; // int32
            public const nint m_nScaleCP = 0x1B8; // int32
            public const nint m_nComponent = 0x1BC; // int32
            public const nint m_fRadCentCore = 0x1C0; // float32
            public const nint m_fRadPerPoint = 0x1C4; // float32
            public const nint m_fRadPerPointTo = 0x1C8; // float32
            public const nint m_fpointAngle = 0x1CC; // float32
            public const nint m_fsizeOverall = 0x1D0; // float32
            public const nint m_fRadBias = 0x1D4; // float32
            public const nint m_fMinRad = 0x1D8; // float32
            public const nint m_fDistBias = 0x1DC; // float32
            public const nint m_bUseLocalCoords = 0x1E0; // bool
            public const nint m_bUseWithContEmit = 0x1E1; // bool
            public const nint m_bUseOrigRadius = 0x1E2; // bool
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 14
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_CreateOnModel {
            public const nint m_modelInput = 0x1B8; // CParticleModelInput
            public const nint m_transformInput = 0x210; // CParticleTransformInput
            public const nint m_nForceInModel = 0x270; // int32
            public const nint m_nDesiredHitbox = 0x274; // int32
            public const nint m_nHitboxValueFromControlPointIndex = 0x278; // int32
            public const nint m_vecHitBoxScale = 0x280; // CParticleCollectionVecInput
            public const nint m_flBoneVelocity = 0x8B0; // float32
            public const nint m_flMaxBoneVelocity = 0x8B4; // float32
            public const nint m_vecDirectionBias = 0x8B8; // CParticleCollectionVecInput
            public const nint m_HitboxSetName = 0xEE8; // char[128]
            public const nint m_bLocalCoords = 0xF68; // bool
            public const nint m_bUseBones = 0xF69; // bool
            public const nint m_bUseMesh = 0xF6A; // bool
            public const nint m_flShellSize = 0xF70; // CParticleCollectionFloatInput
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 14
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_CreateOnModelAtHeight {
            public const nint m_bUseBones = 0x1B4; // bool
            public const nint m_bForceZ = 0x1B5; // bool
            public const nint m_nControlPointNumber = 0x1B8; // int32
            public const nint m_nHeightCP = 0x1BC; // int32
            public const nint m_bUseWaterHeight = 0x1C0; // bool
            public const nint m_flDesiredHeight = 0x1C8; // CParticleCollectionFloatInput
            public const nint m_vecHitBoxScale = 0x318; // CParticleCollectionVecInput
            public const nint m_vecDirectionBias = 0x948; // CParticleCollectionVecInput
            public const nint m_nBiasType = 0xF78; // ParticleHitboxBiasType_t
            public const nint m_bLocalCoords = 0xF7C; // bool
            public const nint m_bPreferMovingBoxes = 0xF7D; // bool
            public const nint m_HitboxSetName = 0xF7E; // char[128]
            public const nint m_flHitboxVelocityScale = 0x1000; // CParticleCollectionFloatInput
            public const nint m_flMaxBoneVelocity = 0x1150; // CParticleCollectionFloatInput
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 9
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_SetHitboxToClosest {
            public const nint m_nControlPointNumber = 0x1B4; // int32
            public const nint m_nDesiredHitbox = 0x1B8; // int32
            public const nint m_vecHitBoxScale = 0x1C0; // CParticleCollectionVecInput
            public const nint m_HitboxSetName = 0x7F0; // char[128]
            public const nint m_bUseBones = 0x870; // bool
            public const nint m_bUseClosestPointOnHitbox = 0x871; // bool
            public const nint m_nTestType = 0x874; // ClosestPointTestType_t
            public const nint m_flHybridRatio = 0x878; // CParticleCollectionFloatInput
            public const nint m_bUpdatePosition = 0x9C8; // bool
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 9
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_SetHitboxToModel {
            public const nint m_nControlPointNumber = 0x1B4; // int32
            public const nint m_nForceInModel = 0x1B8; // int32
            public const nint m_nDesiredHitbox = 0x1BC; // int32
            public const nint m_vecHitBoxScale = 0x1C0; // CParticleCollectionVecInput
            public const nint m_vecDirectionBias = 0x7F0; // Vector
            public const nint m_bMaintainHitbox = 0x7FC; // bool
            public const nint m_bUseBones = 0x7FD; // bool
            public const nint m_HitboxSetName = 0x7FE; // char[128]
            public const nint m_flShellSize = 0x880; // CParticleCollectionFloatInput
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 14
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_CreateWithinSphereTransform {
            public const nint m_fRadiusMin = 0x1B8; // CPerParticleFloatInput
            public const nint m_fRadiusMax = 0x308; // CPerParticleFloatInput
            public const nint m_vecDistanceBias = 0x458; // CPerParticleVecInput
            public const nint m_vecDistanceBiasAbs = 0xA88; // Vector
            public const nint m_TransformInput = 0xA98; // CParticleTransformInput
            public const nint m_fSpeedMin = 0xAF8; // CPerParticleFloatInput
            public const nint m_fSpeedMax = 0xC48; // CPerParticleFloatInput
            public const nint m_fSpeedRandExp = 0xD98; // float32
            public const nint m_bLocalCoords = 0xD9C; // bool
            public const nint m_flEndCPGrowthTime = 0xDA0; // float32
            public const nint m_LocalCoordinateSystemSpeedMin = 0xDA8; // CPerParticleVecInput
            public const nint m_LocalCoordinateSystemSpeedMax = 0x13D8; // CPerParticleVecInput
            public const nint m_nFieldOutput = 0x1A08; // ParticleAttributeIndex_t
            public const nint m_nFieldVelocity = 0x1A0C; // ParticleAttributeIndex_t
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_CreateWithinBox {
            public const nint m_vecMin = 0x1B8; // CPerParticleVecInput
            public const nint m_vecMax = 0x7E8; // CPerParticleVecInput
            public const nint m_nControlPointNumber = 0xE18; // int32
            public const nint m_bLocalSpace = 0xE1C; // bool
            public const nint m_randomnessParameters = 0xE20; // CRandomNumberGeneratorParameters
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_CreateOnGrid {
            public const nint m_nXCount = 0x1B8; // CParticleCollectionFloatInput
            public const nint m_nYCount = 0x308; // CParticleCollectionFloatInput
            public const nint m_nZCount = 0x458; // CParticleCollectionFloatInput
            public const nint m_nXSpacing = 0x5A8; // CParticleCollectionFloatInput
            public const nint m_nYSpacing = 0x6F8; // CParticleCollectionFloatInput
            public const nint m_nZSpacing = 0x848; // CParticleCollectionFloatInput
            public const nint m_nControlPointNumber = 0x998; // int32
            public const nint m_bLocalSpace = 0x99C; // bool
            public const nint m_bCenter = 0x99D; // bool
            public const nint m_bHollow = 0x99E; // bool
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_PositionOffset {
            public const nint m_OffsetMin = 0x1B8; // CPerParticleVecInput
            public const nint m_OffsetMax = 0x7E8; // CPerParticleVecInput
            public const nint m_TransformInput = 0xE18; // CParticleTransformInput
            public const nint m_bLocalCoords = 0xE78; // bool
            public const nint m_bProportional = 0xE79; // bool
            public const nint m_randomnessParameters = 0xE7C; // CRandomNumberGeneratorParameters
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_PositionOffsetToCP {
            public const nint m_nControlPointNumberStart = 0x1B4; // int32
            public const nint m_nControlPointNumberEnd = 0x1B8; // int32
            public const nint m_bLocalCoords = 0x1BC; // bool
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 13
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_PositionPlaceOnGround {
            public const nint m_flOffset = 0x1B8; // CPerParticleFloatInput
            public const nint m_flMaxTraceLength = 0x308; // CPerParticleFloatInput
            public const nint m_CollisionGroupName = 0x458; // char[128]
            public const nint m_nTraceSet = 0x4D8; // ParticleTraceSet_t
            public const nint m_nTraceMissBehavior = 0x4E8; // ParticleTraceMissBehavior_t
            public const nint m_bIncludeWater = 0x4EC; // bool
            public const nint m_bSetNormal = 0x4ED; // bool
            public const nint m_bSetPXYZOnly = 0x4EE; // bool
            public const nint m_bTraceAlongNormal = 0x4EF; // bool
            public const nint m_bOffsetonColOnly = 0x4F0; // bool
            public const nint m_flOffsetByRadiusFactor = 0x4F4; // float32
            public const nint m_nPreserveOffsetCP = 0x4F8; // int32
            public const nint m_nIgnoreCP = 0x4FC; // int32
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_VelocityFromNormal {
            public const nint m_fSpeedMin = 0x1B4; // float32
            public const nint m_fSpeedMax = 0x1B8; // float32
            public const nint m_bIgnoreDt = 0x1BC; // bool
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_VelocityRandom {
            public const nint m_nControlPointNumber = 0x1B4; // int32
            public const nint m_fSpeedMin = 0x1B8; // CPerParticleFloatInput
            public const nint m_fSpeedMax = 0x308; // CPerParticleFloatInput
            public const nint m_LocalCoordinateSystemSpeedMin = 0x458; // CPerParticleVecInput
            public const nint m_LocalCoordinateSystemSpeedMax = 0xA88; // CPerParticleVecInput
            public const nint m_bIgnoreDT = 0x10B8; // bool
            public const nint m_randomnessParameters = 0x10BC; // CRandomNumberGeneratorParameters
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_InitialVelocityNoise {
            public const nint m_vecAbsVal = 0x1B4; // Vector
            public const nint m_vecAbsValInv = 0x1C0; // Vector
            public const nint m_vecOffsetLoc = 0x1D0; // CPerParticleVecInput
            public const nint m_flOffset = 0x800; // CPerParticleFloatInput
            public const nint m_vecOutputMin = 0x950; // CPerParticleVecInput
            public const nint m_vecOutputMax = 0xF80; // CPerParticleVecInput
            public const nint m_flNoiseScale = 0x15B0; // CPerParticleFloatInput
            public const nint m_flNoiseScaleLoc = 0x1700; // CPerParticleFloatInput
            public const nint m_TransformInput = 0x1850; // CParticleTransformInput
            public const nint m_bIgnoreDt = 0x18B0; // bool
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_InitialVelocityFromHitbox {
            public const nint m_flVelocityMin = 0x1B4; // float32
            public const nint m_flVelocityMax = 0x1B8; // float32
            public const nint m_nControlPointNumber = 0x1BC; // int32
            public const nint m_HitboxSetName = 0x1C0; // char[128]
            public const nint m_bUseBones = 0x240; // bool
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_VelocityRadialRandom {
            public const nint m_nControlPointNumber = 0x1B4; // int32
            public const nint m_fSpeedMin = 0x1B8; // float32
            public const nint m_fSpeedMax = 0x1BC; // float32
            public const nint m_vecLocalCoordinateSystemSpeedScale = 0x1C0; // Vector
            public const nint m_bIgnoreDelta = 0x1CD; // bool
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RandomLifeTime {
            public const nint m_fLifetimeMin = 0x1B4; // float32
            public const nint m_fLifetimeMax = 0x1B8; // float32
            public const nint m_fLifetimeRandExponent = 0x1BC; // float32
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RandomScalar {
            public const nint m_flMin = 0x1B4; // float32
            public const nint m_flMax = 0x1B8; // float32
            public const nint m_flExponent = 0x1BC; // float32
            public const nint m_nFieldOutput = 0x1C0; // ParticleAttributeIndex_t
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RandomVector {
            public const nint m_vecMin = 0x1B4; // Vector
            public const nint m_vecMax = 0x1C0; // Vector
            public const nint m_nFieldOutput = 0x1CC; // ParticleAttributeIndex_t
            public const nint m_randomnessParameters = 0x1D0; // CRandomNumberGeneratorParameters
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RandomVectorComponent {
            public const nint m_flMin = 0x1B4; // float32
            public const nint m_flMax = 0x1B8; // float32
            public const nint m_nFieldOutput = 0x1BC; // ParticleAttributeIndex_t
            public const nint m_nComponent = 0x1C0; // int32
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_AddVectorToVector {
            public const nint m_vecScale = 0x1B4; // Vector
            public const nint m_nFieldOutput = 0x1C0; // ParticleAttributeIndex_t
            public const nint m_nFieldInput = 0x1C4; // ParticleAttributeIndex_t
            public const nint m_vOffsetMin = 0x1C8; // Vector
            public const nint m_vOffsetMax = 0x1D4; // Vector
            public const nint m_randomnessParameters = 0x1E0; // CRandomNumberGeneratorParameters
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RandomAlphaWindowThreshold {
            public const nint m_flMin = 0x1B4; // float32
            public const nint m_flMax = 0x1B8; // float32
            public const nint m_flExponent = 0x1BC; // float32
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RandomRadius {
            public const nint m_flRadiusMin = 0x1B4; // float32
            public const nint m_flRadiusMax = 0x1B8; // float32
            public const nint m_flRadiusRandExponent = 0x1BC; // float32
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RandomAlpha {
            public const nint m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
            public const nint m_nAlphaMin = 0x1B8; // int32
            public const nint m_nAlphaMax = 0x1BC; // int32
            public const nint m_flAlphaRandExponent = 0x1C8; // float32
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CGeneralRandomRotation {
            public const nint m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
            public const nint m_flDegrees = 0x1B8; // float32
            public const nint m_flDegreesMin = 0x1BC; // float32
            public const nint m_flDegreesMax = 0x1C0; // float32
            public const nint m_flRotationRandExponent = 0x1C4; // float32
            public const nint m_bRandomlyFlipDirection = 0x1C8; // bool
        }
        // Parent: CGeneralRandomRotation
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RandomRotation {
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_Orient2DRelToCP {
            public const nint m_nCP = 0x1B4; // int32
            public const nint m_nFieldOutput = 0x1B8; // ParticleAttributeIndex_t
            public const nint m_flRotOffset = 0x1BC; // float32
        }
        // Parent: CGeneralRandomRotation
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RandomRotationSpeed {
        }
        // Parent: CGeneralRandomRotation
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RandomYaw {
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RandomColor {
            public const nint m_ColorMin = 0x1D0; // Color
            public const nint m_ColorMax = 0x1D4; // Color
            public const nint m_TintMin = 0x1D8; // Color
            public const nint m_TintMax = 0x1DC; // Color
            public const nint m_flTintPerc = 0x1E0; // float32
            public const nint m_flUpdateThreshold = 0x1E4; // float32
            public const nint m_nTintCP = 0x1E8; // int32
            public const nint m_nFieldOutput = 0x1EC; // ParticleAttributeIndex_t
            public const nint m_nTintBlendMode = 0x1F0; // ParticleColorBlendMode_t
            public const nint m_flLightAmplification = 0x1F4; // float32
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_ColorLitPerParticle {
            public const nint m_ColorMin = 0x1CC; // Color
            public const nint m_ColorMax = 0x1D0; // Color
            public const nint m_TintMin = 0x1D4; // Color
            public const nint m_TintMax = 0x1D8; // Color
            public const nint m_flTintPerc = 0x1DC; // float32
            public const nint m_nTintBlendMode = 0x1E0; // ParticleColorBlendMode_t
            public const nint m_flLightAmplification = 0x1E4; // float32
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RandomTrailLength {
            public const nint m_flMinLength = 0x1B4; // float32
            public const nint m_flMaxLength = 0x1B8; // float32
            public const nint m_flLengthRandExponent = 0x1BC; // float32
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RandomSequence {
            public const nint m_nSequenceMin = 0x1B4; // int32
            public const nint m_nSequenceMax = 0x1B8; // int32
            public const nint m_bShuffle = 0x1BC; // bool
            public const nint m_bLinear = 0x1BD; // bool
            public const nint m_WeightedList = 0x1C0; // CUtlVector<SequenceWeightedList_t>
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_SequenceFromCP {
            public const nint m_bKillUnused = 0x1B4; // bool
            public const nint m_bRadiusScale = 0x1B5; // bool
            public const nint m_nCP = 0x1B8; // int32
            public const nint m_vecOffset = 0x1BC; // Vector
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RandomModelSequence {
            public const nint m_ActivityName = 0x1B4; // char[256]
            public const nint m_SequenceName = 0x2B4; // char[256]
            public const nint m_hModel = 0x3B8; // CStrongHandle<InfoForResourceTypeCModel>
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_ScaleVelocity {
            public const nint m_vecScale = 0x1B8; // CParticleCollectionVecInput
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_PositionWarp {
            public const nint m_vecWarpMin = 0x1B8; // CParticleCollectionVecInput
            public const nint m_vecWarpMax = 0x7E8; // CParticleCollectionVecInput
            public const nint m_nScaleControlPointNumber = 0xE18; // int32
            public const nint m_nControlPointNumber = 0xE1C; // int32
            public const nint m_nRadiusComponent = 0xE20; // int32
            public const nint m_flWarpTime = 0xE24; // float32
            public const nint m_flWarpStartTime = 0xE28; // float32
            public const nint m_flPrevPosScale = 0xE2C; // float32
            public const nint m_bInvertWarp = 0xE30; // bool
            public const nint m_bUseCount = 0xE31; // bool
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_PositionWarpScalar {
            public const nint m_vecWarpMin = 0x1B4; // Vector
            public const nint m_vecWarpMax = 0x1C0; // Vector
            public const nint m_InputValue = 0x1D0; // CPerParticleFloatInput
            public const nint m_flPrevPosScale = 0x320; // float32
            public const nint m_nScaleControlPointNumber = 0x324; // int32
            public const nint m_nControlPointNumber = 0x328; // int32
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_CreationNoise {
            public const nint m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
            public const nint m_bAbsVal = 0x1B8; // bool
            public const nint m_bAbsValInv = 0x1B9; // bool
            public const nint m_flOffset = 0x1BC; // float32
            public const nint m_flOutputMin = 0x1C0; // float32
            public const nint m_flOutputMax = 0x1C4; // float32
            public const nint m_flNoiseScale = 0x1C8; // float32
            public const nint m_flNoiseScaleLoc = 0x1CC; // float32
            public const nint m_vecOffsetLoc = 0x1D0; // Vector
            public const nint m_flWorldTimeScale = 0x1DC; // float32
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_CreateAlongPath {
            public const nint m_fMaxDistance = 0x1B4; // float32
            public const nint m_PathParams = 0x1C0; // CPathParameters
            public const nint m_bUseRandomCPs = 0x200; // bool
            public const nint m_vEndOffset = 0x204; // Vector
            public const nint m_bSaveOffset = 0x210; // bool
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_MoveBetweenPoints {
            public const nint m_flSpeedMin = 0x1B8; // CPerParticleFloatInput
            public const nint m_flSpeedMax = 0x308; // CPerParticleFloatInput
            public const nint m_flEndSpread = 0x458; // CPerParticleFloatInput
            public const nint m_flStartOffset = 0x5A8; // CPerParticleFloatInput
            public const nint m_flEndOffset = 0x6F8; // CPerParticleFloatInput
            public const nint m_nEndControlPointNumber = 0x848; // int32
            public const nint m_bTrailBias = 0x84C; // bool
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 11
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RemapScalar {
            public const nint m_nFieldInput = 0x1B4; // ParticleAttributeIndex_t
            public const nint m_nFieldOutput = 0x1B8; // ParticleAttributeIndex_t
            public const nint m_flInputMin = 0x1BC; // float32
            public const nint m_flInputMax = 0x1C0; // float32
            public const nint m_flOutputMin = 0x1C4; // float32
            public const nint m_flOutputMax = 0x1C8; // float32
            public const nint m_flStartTime = 0x1CC; // float32
            public const nint m_flEndTime = 0x1D0; // float32
            public const nint m_nSetMethod = 0x1D4; // ParticleSetMethod_t
            public const nint m_bActiveRange = 0x1D8; // bool
            public const nint m_flRemapBias = 0x1DC; // float32
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 12
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RemapParticleCountToScalar {
            public const nint m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
            public const nint m_nInputMin = 0x1B8; // int32
            public const nint m_nInputMax = 0x1BC; // int32
            public const nint m_nScaleControlPoint = 0x1C0; // int32
            public const nint m_nScaleControlPointField = 0x1C4; // int32
            public const nint m_flOutputMin = 0x1C8; // float32
            public const nint m_flOutputMax = 0x1CC; // float32
            public const nint m_nSetMethod = 0x1D0; // ParticleSetMethod_t
            public const nint m_bActiveRange = 0x1D4; // bool
            public const nint m_bInvert = 0x1D5; // bool
            public const nint m_bWrap = 0x1D6; // bool
            public const nint m_flRemapBias = 0x1D8; // float32
        }
        // Parent: C_INIT_RemapParticleCountToScalar
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RemapParticleCountToNamedModelElementScalar {
            public const nint m_hModel = 0x1E0; // CStrongHandle<InfoForResourceTypeCModel>
            public const nint m_outputMinName = 0x1E8; // CUtlString
            public const nint m_outputMaxName = 0x1F0; // CUtlString
            public const nint m_bModelFromRenderer = 0x1F8; // bool
        }
        // Parent: C_INIT_RemapParticleCountToNamedModelElementScalar
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RemapParticleCountToNamedModelSequenceScalar {
        }
        // Parent: C_INIT_RemapParticleCountToNamedModelElementScalar
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RemapParticleCountToNamedModelBodyPartScalar {
        }
        // Parent: C_INIT_RemapParticleCountToNamedModelElementScalar
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RemapParticleCountToNamedModelMeshGroupScalar {
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_InheritVelocity {
            public const nint m_nControlPointNumber = 0x1B4; // int32
            public const nint m_flVelocityScale = 0x1B8; // float32
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_VelocityFromCP {
            public const nint m_velocityInput = 0x1B8; // CParticleCollectionVecInput
            public const nint m_transformInput = 0x7E8; // CParticleTransformInput
            public const nint m_flVelocityScale = 0x848; // float32
            public const nint m_bDirectionOnly = 0x84C; // bool
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_AgeNoise {
            public const nint m_bAbsVal = 0x1B4; // bool
            public const nint m_bAbsValInv = 0x1B5; // bool
            public const nint m_flOffset = 0x1B8; // float32
            public const nint m_flAgeMin = 0x1BC; // float32
            public const nint m_flAgeMax = 0x1C0; // float32
            public const nint m_flNoiseScale = 0x1C4; // float32
            public const nint m_flNoiseScaleLoc = 0x1C8; // float32
            public const nint m_vecOffsetLoc = 0x1CC; // Vector
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_SequenceLifeTime {
            public const nint m_flFramerate = 0x1B4; // float32
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 12
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RemapScalarToVector {
            public const nint m_nFieldInput = 0x1B4; // ParticleAttributeIndex_t
            public const nint m_nFieldOutput = 0x1B8; // ParticleAttributeIndex_t
            public const nint m_flInputMin = 0x1BC; // float32
            public const nint m_flInputMax = 0x1C0; // float32
            public const nint m_vecOutputMin = 0x1C4; // Vector
            public const nint m_vecOutputMax = 0x1D0; // Vector
            public const nint m_flStartTime = 0x1DC; // float32
            public const nint m_flEndTime = 0x1E0; // float32
            public const nint m_nSetMethod = 0x1E4; // ParticleSetMethod_t
            public const nint m_nControlPointNumber = 0x1E8; // int32
            public const nint m_bLocalCoords = 0x1EC; // bool
            public const nint m_flRemapBias = 0x1F0; // float32
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_OffsetVectorToVector {
            public const nint m_nFieldInput = 0x1B4; // ParticleAttributeIndex_t
            public const nint m_nFieldOutput = 0x1B8; // ParticleAttributeIndex_t
            public const nint m_vecOutputMin = 0x1BC; // Vector
            public const nint m_vecOutputMax = 0x1C8; // Vector
            public const nint m_randomnessParameters = 0x1D4; // CRandomNumberGeneratorParameters
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 6
        //
        // Metadata:
        // MParticleMinVersion
        // MGetKV3ClassDefaults
        public static class C_INIT_CreateSequentialPathV2 {
            public const nint m_fMaxDistance = 0x1B8; // CPerParticleFloatInput
            public const nint m_flNumToAssign = 0x308; // CParticleCollectionFloatInput
            public const nint m_bLoop = 0x458; // bool
            public const nint m_bCPPairs = 0x459; // bool
            public const nint m_bSaveOffset = 0x45A; // bool
            public const nint m_PathParams = 0x460; // CPathParameters
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 6
        //
        // Metadata:
        // MParticleMaxVersion
        // MParticleReplacementOp
        // MGetKV3ClassDefaults
        public static class C_INIT_CreateSequentialPath {
            public const nint m_fMaxDistance = 0x1B4; // float32
            public const nint m_flNumToAssign = 0x1B8; // float32
            public const nint m_bLoop = 0x1BC; // bool
            public const nint m_bCPPairs = 0x1BD; // bool
            public const nint m_bSaveOffset = 0x1BE; // bool
            public const nint m_PathParams = 0x1C0; // CPathParameters
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 13
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_InitialRepulsionVelocity {
            public const nint m_CollisionGroupName = 0x1B4; // char[128]
            public const nint m_nTraceSet = 0x234; // ParticleTraceSet_t
            public const nint m_vecOutputMin = 0x238; // Vector
            public const nint m_vecOutputMax = 0x244; // Vector
            public const nint m_nControlPointNumber = 0x250; // int32
            public const nint m_bPerParticle = 0x254; // bool
            public const nint m_bTranslate = 0x255; // bool
            public const nint m_bProportional = 0x256; // bool
            public const nint m_flTraceLength = 0x258; // float32
            public const nint m_bPerParticleTR = 0x25C; // bool
            public const nint m_bInherit = 0x25D; // bool
            public const nint m_nChildCP = 0x260; // int32
            public const nint m_nChildGroupID = 0x264; // int32
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RandomYawFlip {
            public const nint m_flPercent = 0x1B4; // float32
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RandomSecondSequence {
            public const nint m_nSequenceMin = 0x1B4; // int32
            public const nint m_nSequenceMax = 0x1B8; // int32
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 11
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RemapCPtoScalar {
            public const nint m_nCPInput = 0x1B4; // int32
            public const nint m_nFieldOutput = 0x1B8; // ParticleAttributeIndex_t
            public const nint m_nField = 0x1BC; // int32
            public const nint m_flInputMin = 0x1C0; // float32
            public const nint m_flInputMax = 0x1C4; // float32
            public const nint m_flOutputMin = 0x1C8; // float32
            public const nint m_flOutputMax = 0x1CC; // float32
            public const nint m_flStartTime = 0x1D0; // float32
            public const nint m_flEndTime = 0x1D4; // float32
            public const nint m_nSetMethod = 0x1D8; // ParticleSetMethod_t
            public const nint m_flRemapBias = 0x1DC; // float32
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 13
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RemapTransformToVector {
            public const nint m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
            public const nint m_vInputMin = 0x1B8; // Vector
            public const nint m_vInputMax = 0x1C4; // Vector
            public const nint m_vOutputMin = 0x1D0; // Vector
            public const nint m_vOutputMax = 0x1DC; // Vector
            public const nint m_TransformInput = 0x1E8; // CParticleTransformInput
            public const nint m_LocalSpaceTransform = 0x248; // CParticleTransformInput
            public const nint m_flStartTime = 0x2A8; // float32
            public const nint m_flEndTime = 0x2AC; // float32
            public const nint m_nSetMethod = 0x2B0; // ParticleSetMethod_t
            public const nint m_bOffset = 0x2B4; // bool
            public const nint m_bAccelerate = 0x2B5; // bool
            public const nint m_flRemapBias = 0x2B8; // float32
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 9
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_ChaoticAttractor {
            public const nint m_flAParm = 0x1B4; // float32
            public const nint m_flBParm = 0x1B8; // float32
            public const nint m_flCParm = 0x1BC; // float32
            public const nint m_flDParm = 0x1C0; // float32
            public const nint m_flScale = 0x1C4; // float32
            public const nint m_flSpeedMin = 0x1C8; // float32
            public const nint m_flSpeedMax = 0x1CC; // float32
            public const nint m_nBaseCP = 0x1D0; // int32
            public const nint m_bUniformSpeed = 0x1D4; // bool
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_CreateFromParentParticles {
            public const nint m_flVelocityScale = 0x1B4; // float32
            public const nint m_flIncrement = 0x1B8; // float32
            public const nint m_bRandomDistribution = 0x1BC; // bool
            public const nint m_nRandomSeed = 0x1C0; // int32
            public const nint m_bSubFrame = 0x1C4; // bool
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_InheritFromParentParticles {
            public const nint m_flScale = 0x1B4; // float32
            public const nint m_nFieldOutput = 0x1B8; // ParticleAttributeIndex_t
            public const nint m_nIncrement = 0x1BC; // int32
            public const nint m_bRandomDistribution = 0x1C0; // bool
            public const nint m_nRandomSeed = 0x1C4; // int32
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_CreateFromCPs {
            public const nint m_nIncrement = 0x1B4; // int32
            public const nint m_nMinCP = 0x1B8; // int32
            public const nint m_nMaxCP = 0x1BC; // int32
            public const nint m_nDynamicCPCount = 0x1C0; // CParticleCollectionFloatInput
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 15
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_DistanceToCPInit {
            public const nint m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
            public const nint m_flInputMin = 0x1B8; // CPerParticleFloatInput
            public const nint m_flInputMax = 0x308; // CPerParticleFloatInput
            public const nint m_flOutputMin = 0x458; // CPerParticleFloatInput
            public const nint m_flOutputMax = 0x5A8; // CPerParticleFloatInput
            public const nint m_nStartCP = 0x6F8; // int32
            public const nint m_bLOS = 0x6FC; // bool
            public const nint m_CollisionGroupName = 0x6FD; // char[128]
            public const nint m_nTraceSet = 0x780; // ParticleTraceSet_t
            public const nint m_flMaxTraceLength = 0x788; // CPerParticleFloatInput
            public const nint m_flLOSScale = 0x8D8; // float32
            public const nint m_nSetMethod = 0x8DC; // ParticleSetMethod_t
            public const nint m_bActiveRange = 0x8E0; // bool
            public const nint m_vecDistanceScale = 0x8E4; // Vector
            public const nint m_flRemapBias = 0x8F0; // float32
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_LifespanFromVelocity {
            public const nint m_vecComponentScale = 0x1B4; // Vector
            public const nint m_flTraceOffset = 0x1C0; // float32
            public const nint m_flMaxTraceLength = 0x1C4; // float32
            public const nint m_flTraceTolerance = 0x1C8; // float32
            public const nint m_nMaxPlanes = 0x1CC; // int32
            public const nint m_CollisionGroupName = 0x1D4; // char[128]
            public const nint m_nTraceSet = 0x254; // ParticleTraceSet_t
            public const nint m_bIncludeWater = 0x260; // bool
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_CreateFromPlaneCache {
            public const nint m_vecOffsetMin = 0x1B4; // Vector
            public const nint m_vecOffsetMax = 0x1C0; // Vector
            public const nint m_bUseNormal = 0x1CD; // bool
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_ModelCull {
            public const nint m_nControlPointNumber = 0x1B4; // int32
            public const nint m_bBoundBox = 0x1B8; // bool
            public const nint m_bCullOutside = 0x1B9; // bool
            public const nint m_bUseBones = 0x1BA; // bool
            public const nint m_HitboxSetName = 0x1BB; // char[128]
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_DistanceCull {
            public const nint m_nControlPoint = 0x1B4; // int32
            public const nint m_flDistance = 0x1B8; // CParticleCollectionFloatInput
            public const nint m_bCullInside = 0x308; // bool
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_PlaneCull {
            public const nint m_nControlPoint = 0x1B4; // int32
            public const nint m_flDistance = 0x1B8; // CParticleCollectionFloatInput
            public const nint m_bCullInside = 0x308; // bool
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_DistanceToNeighborCull {
            public const nint m_flDistance = 0x1B8; // CPerParticleFloatInput
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RtEnvCull {
            public const nint m_vecTestDir = 0x1B4; // Vector
            public const nint m_vecTestNormal = 0x1C0; // Vector
            public const nint m_bUseVelocity = 0x1CC; // bool
            public const nint m_bCullOnMiss = 0x1CD; // bool
            public const nint m_bLifeAdjust = 0x1CE; // bool
            public const nint m_RtEnvName = 0x1CF; // char[128]
            public const nint m_nRTEnvCP = 0x250; // int32
            public const nint m_nComponent = 0x254; // int32
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_NormalAlignToCP {
            public const nint m_transformInput = 0x1B8; // CParticleTransformInput
            public const nint m_nControlPointAxis = 0x218; // ParticleControlPointAxis_t
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_NormalOffset {
            public const nint m_OffsetMin = 0x1B4; // Vector
            public const nint m_OffsetMax = 0x1C0; // Vector
            public const nint m_nControlPointNumber = 0x1CC; // int32
            public const nint m_bLocalCoords = 0x1D0; // bool
            public const nint m_bNormalize = 0x1D1; // bool
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RemapSpeedToScalar {
            public const nint m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
            public const nint m_nControlPointNumber = 0x1B8; // int32
            public const nint m_flStartTime = 0x1BC; // float32
            public const nint m_flEndTime = 0x1C0; // float32
            public const nint m_flInputMin = 0x1C4; // float32
            public const nint m_flInputMax = 0x1C8; // float32
            public const nint m_flOutputMin = 0x1CC; // float32
            public const nint m_flOutputMax = 0x1D0; // float32
            public const nint m_nSetMethod = 0x1D4; // ParticleSetMethod_t
            public const nint m_bPerParticle = 0x1D8; // bool
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_InitFromCPSnapshot {
            public const nint m_nControlPointNumber = 0x1B4; // int32
            public const nint m_nAttributeToRead = 0x1B8; // ParticleAttributeIndex_t
            public const nint m_nAttributeToWrite = 0x1BC; // ParticleAttributeIndex_t
            public const nint m_nLocalSpaceCP = 0x1C0; // int32
            public const nint m_bRandom = 0x1C4; // bool
            public const nint m_bReverse = 0x1C5; // bool
            public const nint m_nSnapShotIncrement = 0x1C8; // CParticleCollectionFloatInput
            public const nint m_nManualSnapshotIndex = 0x318; // CPerParticleFloatInput
            public const nint m_nRandomSeed = 0x468; // int32
            public const nint m_bLocalSpaceAngles = 0x46C; // bool
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 19
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_InitSkinnedPositionFromCPSnapshot {
            public const nint m_nSnapshotControlPointNumber = 0x1B4; // int32
            public const nint m_nControlPointNumber = 0x1B8; // int32
            public const nint m_bRandom = 0x1BC; // bool
            public const nint m_nRandomSeed = 0x1C0; // int32
            public const nint m_bRigid = 0x1C4; // bool
            public const nint m_bSetNormal = 0x1C5; // bool
            public const nint m_bIgnoreDt = 0x1C6; // bool
            public const nint m_flMinNormalVelocity = 0x1C8; // float32
            public const nint m_flMaxNormalVelocity = 0x1CC; // float32
            public const nint m_nIndexType = 0x1D0; // SnapshotIndexType_t
            public const nint m_flReadIndex = 0x1D8; // CPerParticleFloatInput
            public const nint m_flIncrement = 0x328; // float32
            public const nint m_nFullLoopIncrement = 0x32C; // int32
            public const nint m_nSnapShotStartPoint = 0x330; // int32
            public const nint m_flBoneVelocity = 0x334; // float32
            public const nint m_flBoneVelocityMax = 0x338; // float32
            public const nint m_bCopyColor = 0x33C; // bool
            public const nint m_bCopyAlpha = 0x33D; // bool
            public const nint m_bSetRadius = 0x33E; // bool
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_InitFromParentKilled {
            public const nint m_nAttributeToCopy = 0x1B4; // ParticleAttributeIndex_t
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_InitFromVectorFieldSnapshot {
            public const nint m_nControlPointNumber = 0x1B4; // int32
            public const nint m_nLocalSpaceCP = 0x1B8; // int32
            public const nint m_nWeightUpdateCP = 0x1BC; // int32
            public const nint m_bUseVerticalVelocity = 0x1C0; // bool
            public const nint m_vecScale = 0x1C8; // CPerParticleVecInput
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RemapInitialDirectionToTransformToVector {
            public const nint m_TransformInput = 0x1B8; // CParticleTransformInput
            public const nint m_nFieldOutput = 0x218; // ParticleAttributeIndex_t
            public const nint m_flScale = 0x21C; // float32
            public const nint m_flOffsetRot = 0x220; // float32
            public const nint m_vecOffsetAxis = 0x224; // Vector
            public const nint m_bNormalize = 0x230; // bool
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RemapInitialTransformDirectionToRotation {
            public const nint m_TransformInput = 0x1B8; // CParticleTransformInput
            public const nint m_nFieldOutput = 0x218; // ParticleAttributeIndex_t
            public const nint m_flOffsetRot = 0x21C; // float32
            public const nint m_nComponent = 0x220; // int32
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RemapQAnglesToRotation {
            public const nint m_TransformInput = 0x1B8; // CParticleTransformInput
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RemapTransformOrientationToRotations {
            public const nint m_TransformInput = 0x1B8; // CParticleTransformInput
            public const nint m_vecRotation = 0x218; // Vector
            public const nint m_bUseQuat = 0x224; // bool
            public const nint m_bWriteNormal = 0x225; // bool
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_SetRigidAttachment {
            public const nint m_nControlPointNumber = 0x1B4; // int32
            public const nint m_nFieldInput = 0x1B8; // ParticleAttributeIndex_t
            public const nint m_nFieldOutput = 0x1BC; // ParticleAttributeIndex_t
            public const nint m_bLocalSpace = 0x1C0; // bool
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RemapInitialVisibilityScalar {
            public const nint m_nFieldOutput = 0x1B8; // ParticleAttributeIndex_t
            public const nint m_flInputMin = 0x1BC; // float32
            public const nint m_flInputMax = 0x1C0; // float32
            public const nint m_flOutputMin = 0x1C4; // float32
            public const nint m_flOutputMax = 0x1C8; // float32
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RadiusFromCPObject {
            public const nint m_nControlPoint = 0x1B4; // int32
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_InitialSequenceFromModel {
            public const nint m_nControlPointNumber = 0x1B4; // int32
            public const nint m_nFieldOutput = 0x1B8; // ParticleAttributeIndex_t
            public const nint m_nFieldOutputAnim = 0x1BC; // ParticleAttributeIndex_t
            public const nint m_flInputMin = 0x1C0; // float32
            public const nint m_flInputMax = 0x1C4; // float32
            public const nint m_flOutputMin = 0x1C8; // float32
            public const nint m_flOutputMax = 0x1CC; // float32
            public const nint m_nSetMethod = 0x1D0; // ParticleSetMethod_t
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_GlobalScale {
            public const nint m_flScale = 0x1B4; // float32
            public const nint m_nScaleControlPointNumber = 0x1B8; // int32
            public const nint m_nControlPointNumber = 0x1BC; // int32
            public const nint m_bScaleRadius = 0x1C0; // bool
            public const nint m_bScalePosition = 0x1C1; // bool
            public const nint m_bScaleVelocity = 0x1C2; // bool
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_PointList {
            public const nint m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
            public const nint m_pointList = 0x1B8; // CUtlVector<PointDefinition_t>
            public const nint m_bPlaceAlongPath = 0x1D0; // bool
            public const nint m_bClosedLoop = 0x1D1; // bool
            public const nint m_nNumPointsAlongPath = 0x1D4; // int32
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RandomNamedModelElement {
            public const nint m_hModel = 0x1B8; // CStrongHandle<InfoForResourceTypeCModel>
            public const nint m_names = 0x1C0; // CUtlVector<CUtlString>
            public const nint m_bShuffle = 0x1D8; // bool
            public const nint m_bLinear = 0x1D9; // bool
            public const nint m_bModelFromRenderer = 0x1DA; // bool
            public const nint m_nFieldOutput = 0x1DC; // ParticleAttributeIndex_t
        }
        // Parent: C_INIT_RandomNamedModelElement
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RandomNamedModelSequence {
        }
        // Parent: C_INIT_RandomNamedModelElement
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RandomNamedModelBodyPart {
        }
        // Parent: C_INIT_RandomNamedModelElement
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RandomNamedModelMeshGroup {
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RemapNamedModelElementToScalar {
            public const nint m_hModel = 0x1B8; // CStrongHandle<InfoForResourceTypeCModel>
            public const nint m_names = 0x1C0; // CUtlVector<CUtlString>
            public const nint m_values = 0x1D8; // CUtlVector<float32>
            public const nint m_nFieldInput = 0x1F0; // ParticleAttributeIndex_t
            public const nint m_nFieldOutput = 0x1F4; // ParticleAttributeIndex_t
            public const nint m_nSetMethod = 0x1F8; // ParticleSetMethod_t
            public const nint m_bModelFromRenderer = 0x1FC; // bool
        }
        // Parent: C_INIT_RemapNamedModelElementToScalar
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RemapNamedModelSequenceToScalar {
        }
        // Parent: C_INIT_RemapNamedModelElementToScalar
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RemapNamedModelBodyPartToScalar {
        }
        // Parent: C_INIT_RemapNamedModelElementToScalar
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RemapNamedModelMeshGroupToScalar {
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 18
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_StatusEffect {
            public const nint m_nDetail2Combo = 0x1B4; // Detail2Combo_t
            public const nint m_flDetail2Rotation = 0x1B8; // float32
            public const nint m_flDetail2Scale = 0x1BC; // float32
            public const nint m_flDetail2BlendFactor = 0x1C0; // float32
            public const nint m_flColorWarpIntensity = 0x1C4; // float32
            public const nint m_flDiffuseWarpBlendToFull = 0x1C8; // float32
            public const nint m_flEnvMapIntensity = 0x1CC; // float32
            public const nint m_flAmbientScale = 0x1D0; // float32
            public const nint m_specularColor = 0x1D4; // Color
            public const nint m_flSpecularScale = 0x1D8; // float32
            public const nint m_flSpecularExponent = 0x1DC; // float32
            public const nint m_flSpecularExponentBlendToFull = 0x1E0; // float32
            public const nint m_flSpecularBlendToFull = 0x1E4; // float32
            public const nint m_rimLightColor = 0x1E8; // Color
            public const nint m_flRimLightScale = 0x1EC; // float32
            public const nint m_flReflectionsTintByBaseBlendToNone = 0x1F0; // float32
            public const nint m_flMetalnessBlendToFull = 0x1F4; // float32
            public const nint m_flSelfIllumBlendToFull = 0x1F8; // float32
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 19
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_StatusEffectCitadel {
            public const nint m_flSFXColorWarpAmount = 0x1B4; // float32
            public const nint m_flSFXNormalAmount = 0x1B8; // float32
            public const nint m_flSFXMetalnessAmount = 0x1BC; // float32
            public const nint m_flSFXRoughnessAmount = 0x1C0; // float32
            public const nint m_flSFXSelfIllumAmount = 0x1C4; // float32
            public const nint m_flSFXSScale = 0x1C8; // float32
            public const nint m_flSFXSScrollX = 0x1CC; // float32
            public const nint m_flSFXSScrollY = 0x1D0; // float32
            public const nint m_flSFXSScrollZ = 0x1D4; // float32
            public const nint m_flSFXSOffsetX = 0x1D8; // float32
            public const nint m_flSFXSOffsetY = 0x1DC; // float32
            public const nint m_flSFXSOffsetZ = 0x1E0; // float32
            public const nint m_nDetailCombo = 0x1E4; // DetailCombo_t
            public const nint m_flSFXSDetailAmount = 0x1E8; // float32
            public const nint m_flSFXSDetailScale = 0x1EC; // float32
            public const nint m_flSFXSDetailScrollX = 0x1F0; // float32
            public const nint m_flSFXSDetailScrollY = 0x1F4; // float32
            public const nint m_flSFXSDetailScrollZ = 0x1F8; // float32
            public const nint m_flSFXSUseModelUVs = 0x1FC; // float32
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_CreateParticleImpulse {
            public const nint m_InputRadius = 0x1B8; // CPerParticleFloatInput
            public const nint m_InputMagnitude = 0x308; // CPerParticleFloatInput
            public const nint m_nFalloffFunction = 0x458; // ParticleFalloffFunction_t
            public const nint m_InputFalloffExp = 0x460; // CPerParticleFloatInput
            public const nint m_nImpulseType = 0x5B0; // ParticleImpulseType_t
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_QuantizeFloat {
            public const nint m_InputValue = 0x1B8; // CPerParticleFloatInput
            public const nint m_nOutputField = 0x308; // ParticleAttributeIndex_t
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_SetAttributeToScalarExpression {
            public const nint m_nExpression = 0x1B4; // ScalarExpressionType_t
            public const nint m_flInput1 = 0x1B8; // CPerParticleFloatInput
            public const nint m_flInput2 = 0x308; // CPerParticleFloatInput
            public const nint m_flOutputRemap = 0x458; // CParticleRemapFloatInput
            public const nint m_nOutputField = 0x5A8; // ParticleAttributeIndex_t
            public const nint m_nSetMethod = 0x5AC; // ParticleSetMethod_t
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_SetVectorAttributeToVectorExpression {
            public const nint m_nExpression = 0x1B4; // VectorExpressionType_t
            public const nint m_vInput1 = 0x1B8; // CPerParticleVecInput
            public const nint m_vInput2 = 0x7E8; // CPerParticleVecInput
            public const nint m_nOutputField = 0xE18; // ParticleAttributeIndex_t
            public const nint m_nSetMethod = 0xE1C; // ParticleSetMethod_t
            public const nint m_bNormalizedOutput = 0xE20; // bool
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_InitFloatCollection {
            public const nint m_InputValue = 0x1B8; // CParticleCollectionFloatInput
            public const nint m_nOutputField = 0x308; // ParticleAttributeIndex_t
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_InitFloat {
            public const nint m_InputValue = 0x1B8; // CPerParticleFloatInput
            public const nint m_nOutputField = 0x308; // ParticleAttributeIndex_t
            public const nint m_nSetMethod = 0x30C; // ParticleSetMethod_t
            public const nint m_InputStrength = 0x310; // CPerParticleFloatInput
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_InitVecCollection {
            public const nint m_InputValue = 0x1B8; // CParticleCollectionVecInput
            public const nint m_nOutputField = 0x7E8; // ParticleAttributeIndex_t
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_InitVec {
            public const nint m_InputValue = 0x1B8; // CPerParticleVecInput
            public const nint m_nOutputField = 0x7E8; // ParticleAttributeIndex_t
            public const nint m_nSetMethod = 0x7EC; // ParticleSetMethod_t
            public const nint m_bNormalizedOutput = 0x7F0; // bool
            public const nint m_bWritePreviousPosition = 0x7F1; // bool
        }
        // Parent: CParticleFunctionEmitter
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_InstantaneousEmitter {
            public const nint m_nParticlesToEmit = 0x1B8; // CParticleCollectionFloatInput
            public const nint m_flStartTime = 0x308; // CParticleCollectionFloatInput
            public const nint m_flInitFromKilledParentParticles = 0x458; // float32
            public const nint m_flParentParticleScale = 0x460; // CParticleCollectionFloatInput
            public const nint m_nMaxEmittedPerFrame = 0x5B0; // int32
            public const nint m_nSnapshotControlPoint = 0x5B4; // int32
        }
        // Parent: CParticleFunctionEmitter
        // Fields count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_ContinuousEmitter {
            public const nint m_flEmissionDuration = 0x1B8; // CParticleCollectionFloatInput
            public const nint m_flStartTime = 0x308; // CParticleCollectionFloatInput
            public const nint m_flEmitRate = 0x458; // CParticleCollectionFloatInput
            public const nint m_flEmissionScale = 0x5A8; // float32
            public const nint m_flScalePerParentParticle = 0x5AC; // float32
            public const nint m_bInitFromKilledParentParticles = 0x5B0; // bool
            public const nint m_nSnapshotControlPoint = 0x5B4; // int32
            public const nint m_nLimitPerUpdate = 0x5B8; // int32
            public const nint m_bForceEmitOnFirstUpdate = 0x5BC; // bool
            public const nint m_bForceEmitOnLastUpdate = 0x5BD; // bool
        }
        // Parent: CParticleFunctionEmitter
        // Fields count: 15
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_NoiseEmitter {
            public const nint m_flEmissionDuration = 0x1B4; // float32
            public const nint m_flStartTime = 0x1B8; // float32
            public const nint m_flEmissionScale = 0x1BC; // float32
            public const nint m_nScaleControlPoint = 0x1C0; // int32
            public const nint m_nScaleControlPointField = 0x1C4; // int32
            public const nint m_nWorldNoisePoint = 0x1C8; // int32
            public const nint m_bAbsVal = 0x1CC; // bool
            public const nint m_bAbsValInv = 0x1CD; // bool
            public const nint m_flOffset = 0x1D0; // float32
            public const nint m_flOutputMin = 0x1D4; // float32
            public const nint m_flOutputMax = 0x1D8; // float32
            public const nint m_flNoiseScale = 0x1DC; // float32
            public const nint m_flWorldNoiseScale = 0x1E0; // float32
            public const nint m_vecOffsetLoc = 0x1E4; // Vector
            public const nint m_flWorldTimeScale = 0x1F0; // float32
        }
        // Parent: CParticleFunctionEmitter
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_MaintainEmitter {
            public const nint m_nParticlesToMaintain = 0x1B8; // CParticleCollectionFloatInput
            public const nint m_flStartTime = 0x308; // float32
            public const nint m_flEmissionDuration = 0x310; // CParticleCollectionFloatInput
            public const nint m_flEmissionRate = 0x460; // float32
            public const nint m_nSnapshotControlPoint = 0x464; // int32
            public const nint m_bEmitInstantaneously = 0x468; // bool
            public const nint m_bFinalEmitOnStop = 0x469; // bool
            public const nint m_flScale = 0x470; // CParticleCollectionFloatInput
        }
        // Parent: CParticleFunctionForce
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RandomForce {
            public const nint m_MinForce = 0x1BC; // Vector
            public const nint m_MaxForce = 0x1C8; // Vector
        }
        // Parent: CParticleFunctionForce
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_CPVelocityForce {
            public const nint m_nControlPointNumber = 0x1BC; // int32
            public const nint m_flScale = 0x1C0; // CPerParticleFloatInput
        }
        // Parent: CParticleFunctionForce
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_ParentVortices {
            public const nint m_flForceScale = 0x1BC; // float32
            public const nint m_vecTwistAxis = 0x1C0; // Vector
            public const nint m_bFlipBasedOnYaw = 0x1CC; // bool
        }
        // Parent: CParticleFunctionForce
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_TwistAroundAxis {
            public const nint m_fForceAmount = 0x1BC; // float32
            public const nint m_TwistAxis = 0x1C0; // Vector
            public const nint m_bLocalSpace = 0x1CC; // bool
            public const nint m_nControlPointNumber = 0x1D0; // int32
        }
        // Parent: CParticleFunctionForce
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_AttractToControlPoint {
            public const nint m_vecComponentScale = 0x1BC; // Vector
            public const nint m_fForceAmount = 0x1C8; // CPerParticleFloatInput
            public const nint m_fFalloffPower = 0x318; // float32
            public const nint m_TransformInput = 0x320; // CParticleTransformInput
            public const nint m_fForceAmountMin = 0x380; // CPerParticleFloatInput
            public const nint m_bApplyMinForce = 0x4D0; // bool
        }
        // Parent: CParticleFunctionForce
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_ForceBasedOnDistanceToPlane {
            public const nint m_flMinDist = 0x1BC; // float32
            public const nint m_vecForceAtMinDist = 0x1C0; // Vector
            public const nint m_flMaxDist = 0x1CC; // float32
            public const nint m_vecForceAtMaxDist = 0x1D0; // Vector
            public const nint m_vecPlaneNormal = 0x1DC; // Vector
            public const nint m_nControlPointNumber = 0x1E8; // int32
            public const nint m_flExponent = 0x1EC; // float32
        }
        // Parent: CParticleFunctionForce
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_TimeVaryingForce {
            public const nint m_flStartLerpTime = 0x1BC; // float32
            public const nint m_StartingForce = 0x1C0; // Vector
            public const nint m_flEndLerpTime = 0x1CC; // float32
            public const nint m_EndingForce = 0x1D0; // Vector
        }
        // Parent: CParticleFunctionForce
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_TurbulenceForce {
            public const nint m_flNoiseCoordScale0 = 0x1BC; // float32
            public const nint m_flNoiseCoordScale1 = 0x1C0; // float32
            public const nint m_flNoiseCoordScale2 = 0x1C4; // float32
            public const nint m_flNoiseCoordScale3 = 0x1C8; // float32
            public const nint m_vecNoiseAmount0 = 0x1CC; // Vector
            public const nint m_vecNoiseAmount1 = 0x1D8; // Vector
            public const nint m_vecNoiseAmount2 = 0x1E4; // Vector
            public const nint m_vecNoiseAmount3 = 0x1F0; // Vector
        }
        // Parent: CParticleFunctionForce
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_CurlNoiseForce {
            public const nint m_nNoiseType = 0x1BC; // ParticleDirectionNoiseType_t
            public const nint m_vecNoiseFreq = 0x1C0; // CPerParticleVecInput
            public const nint m_vecNoiseScale = 0x7F0; // CPerParticleVecInput
            public const nint m_vecOffset = 0xE20; // CPerParticleVecInput
            public const nint m_vecOffsetRate = 0x1450; // CPerParticleVecInput
            public const nint m_flWorleySeed = 0x1A80; // CPerParticleFloatInput
            public const nint m_flWorleyJitter = 0x1BD0; // CPerParticleFloatInput
        }
        // Parent: CParticleFunctionForce
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_PerParticleForce {
            public const nint m_flForceScale = 0x1C0; // CPerParticleFloatInput
            public const nint m_vForce = 0x310; // CPerParticleVecInput
            public const nint m_nCP = 0x940; // int32
        }
        // Parent: CParticleFunctionForce
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_WindForce {
            public const nint m_vForce = 0x1BC; // Vector
        }
        // Parent: CParticleFunctionForce
        // Fields count: 11
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_ExternalWindForce {
            public const nint m_vecSamplePosition = 0x1C0; // CPerParticleVecInput
            public const nint m_vecScale = 0x7F0; // CPerParticleVecInput
            public const nint m_bSampleWind = 0xE20; // bool
            public const nint m_bSampleWater = 0xE21; // bool
            public const nint m_bDampenNearWaterPlane = 0xE22; // bool
            public const nint m_bSampleGravity = 0xE23; // bool
            public const nint m_vecGravityForce = 0xE28; // CPerParticleVecInput
            public const nint m_bUseBasicMovementGravity = 0x1458; // bool
            public const nint m_flLocalGravityScale = 0x1460; // CPerParticleFloatInput
            public const nint m_flLocalBuoyancyScale = 0x15B0; // CPerParticleFloatInput
            public const nint m_vecBuoyancyForce = 0x1700; // CPerParticleVecInput
        }
        // Parent: CParticleFunctionForce
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_ExternalGameImpulseForce {
            public const nint m_flForceScale = 0x1C0; // CPerParticleFloatInput
            public const nint m_bRopes = 0x310; // bool
            public const nint m_bRopesZOnly = 0x311; // bool
            public const nint m_bExplosions = 0x312; // bool
            public const nint m_bParticles = 0x313; // bool
        }
        // Parent: CParticleFunctionForce
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_LocalAccelerationForce {
            public const nint m_nCP = 0x1BC; // int32
            public const nint m_nScaleCP = 0x1C0; // int32
            public const nint m_vecAccel = 0x1C8; // CParticleCollectionVecInput
        }
        // Parent: CParticleFunctionForce
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_DensityForce {
            public const nint m_flRadiusScale = 0x1BC; // float32
            public const nint m_flForceScale = 0x1C0; // float32
            public const nint m_flTargetDensity = 0x1C4; // float32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_BasicMovement {
            public const nint m_Gravity = 0x1B0; // CParticleCollectionVecInput
            public const nint m_fDrag = 0x7E0; // CParticleCollectionFloatInput
            public const nint m_nMaxConstraintPasses = 0x930; // int32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_FadeAndKill {
            public const nint m_flStartFadeInTime = 0x1B0; // float32
            public const nint m_flEndFadeInTime = 0x1B4; // float32
            public const nint m_flStartFadeOutTime = 0x1B8; // float32
            public const nint m_flEndFadeOutTime = 0x1BC; // float32
            public const nint m_flStartAlpha = 0x1C0; // float32
            public const nint m_flEndAlpha = 0x1C4; // float32
            public const nint m_bForcePreserveParticleOrder = 0x1C8; // bool
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_FadeAndKillForTracers {
            public const nint m_flStartFadeInTime = 0x1B0; // float32
            public const nint m_flEndFadeInTime = 0x1B4; // float32
            public const nint m_flStartFadeOutTime = 0x1B8; // float32
            public const nint m_flEndFadeOutTime = 0x1BC; // float32
            public const nint m_flStartAlpha = 0x1C0; // float32
            public const nint m_flEndAlpha = 0x1C4; // float32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_FadeIn {
            public const nint m_flFadeInTimeMin = 0x1B0; // float32
            public const nint m_flFadeInTimeMax = 0x1B4; // float32
            public const nint m_flFadeInTimeExp = 0x1B8; // float32
            public const nint m_bProportional = 0x1BC; // bool
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_FadeOut {
            public const nint m_flFadeOutTimeMin = 0x1B0; // float32
            public const nint m_flFadeOutTimeMax = 0x1B4; // float32
            public const nint m_flFadeOutTimeExp = 0x1B8; // float32
            public const nint m_flFadeBias = 0x1BC; // float32
            public const nint m_bProportional = 0x1F0; // bool
            public const nint m_bEaseInAndOut = 0x1F1; // bool
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_FadeInSimple {
            public const nint m_flFadeInTime = 0x1B0; // float32
            public const nint m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_FadeOutSimple {
            public const nint m_flFadeOutTime = 0x1B0; // float32
            public const nint m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_ClampScalar {
            public const nint m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
            public const nint m_flOutputMin = 0x1B8; // CPerParticleFloatInput
            public const nint m_flOutputMax = 0x308; // CPerParticleFloatInput
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_ClampVector {
            public const nint m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
            public const nint m_vecOutputMin = 0x1B8; // CPerParticleVecInput
            public const nint m_vecOutputMax = 0x7E8; // CPerParticleVecInput
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 13
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_OscillateScalar {
            public const nint m_RateMin = 0x1B0; // float32
            public const nint m_RateMax = 0x1B4; // float32
            public const nint m_FrequencyMin = 0x1B8; // float32
            public const nint m_FrequencyMax = 0x1BC; // float32
            public const nint m_nField = 0x1C0; // ParticleAttributeIndex_t
            public const nint m_bProportional = 0x1C4; // bool
            public const nint m_bProportionalOp = 0x1C5; // bool
            public const nint m_flStartTime_min = 0x1C8; // float32
            public const nint m_flStartTime_max = 0x1CC; // float32
            public const nint m_flEndTime_min = 0x1D0; // float32
            public const nint m_flEndTime_max = 0x1D4; // float32
            public const nint m_flOscMult = 0x1D8; // float32
            public const nint m_flOscAdd = 0x1DC; // float32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_OscillateScalarSimple {
            public const nint m_Rate = 0x1B0; // float32
            public const nint m_Frequency = 0x1B4; // float32
            public const nint m_nField = 0x1B8; // ParticleAttributeIndex_t
            public const nint m_flOscMult = 0x1BC; // float32
            public const nint m_flOscAdd = 0x1C0; // float32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 15
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_OscillateVector {
            public const nint m_RateMin = 0x1B0; // Vector
            public const nint m_RateMax = 0x1BC; // Vector
            public const nint m_FrequencyMin = 0x1C8; // Vector
            public const nint m_FrequencyMax = 0x1D4; // Vector
            public const nint m_nField = 0x1E0; // ParticleAttributeIndex_t
            public const nint m_bProportional = 0x1E4; // bool
            public const nint m_bProportionalOp = 0x1E5; // bool
            public const nint m_bOffset = 0x1E6; // bool
            public const nint m_flStartTime_min = 0x1E8; // float32
            public const nint m_flStartTime_max = 0x1EC; // float32
            public const nint m_flEndTime_min = 0x1F0; // float32
            public const nint m_flEndTime_max = 0x1F4; // float32
            public const nint m_flOscMult = 0x1F8; // CPerParticleFloatInput
            public const nint m_flOscAdd = 0x348; // CPerParticleFloatInput
            public const nint m_flRateScale = 0x498; // CPerParticleFloatInput
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_OscillateVectorSimple {
            public const nint m_Rate = 0x1B0; // Vector
            public const nint m_Frequency = 0x1BC; // Vector
            public const nint m_nField = 0x1C8; // ParticleAttributeIndex_t
            public const nint m_flOscMult = 0x1CC; // float32
            public const nint m_flOscAdd = 0x1D0; // float32
            public const nint m_bOffset = 0x1D4; // bool
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 9
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_DifferencePreviousParticle {
            public const nint m_nFieldInput = 0x1B0; // ParticleAttributeIndex_t
            public const nint m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
            public const nint m_flInputMin = 0x1B8; // float32
            public const nint m_flInputMax = 0x1BC; // float32
            public const nint m_flOutputMin = 0x1C0; // float32
            public const nint m_flOutputMax = 0x1C4; // float32
            public const nint m_nSetMethod = 0x1C8; // ParticleSetMethod_t
            public const nint m_bActiveRange = 0x1CC; // bool
            public const nint m_bSetPreviousParticle = 0x1CD; // bool
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_PointVectorAtNextParticle {
            public const nint m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
            public const nint m_flInterpolation = 0x1B8; // CPerParticleFloatInput
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapScalar {
            public const nint m_nFieldInput = 0x1B0; // ParticleAttributeIndex_t
            public const nint m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
            public const nint m_flInputMin = 0x1B8; // float32
            public const nint m_flInputMax = 0x1BC; // float32
            public const nint m_flOutputMin = 0x1C0; // float32
            public const nint m_flOutputMax = 0x1C4; // float32
            public const nint m_bOldCode = 0x1C8; // bool
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapDensityToVector {
            public const nint m_flRadiusScale = 0x1B0; // float32
            public const nint m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
            public const nint m_flDensityMin = 0x1B8; // float32
            public const nint m_flDensityMax = 0x1BC; // float32
            public const nint m_vecOutputMin = 0x1C0; // Vector
            public const nint m_vecOutputMax = 0x1CC; // Vector
            public const nint m_bUseParentDensity = 0x1D8; // bool
            public const nint m_nVoxelGridResolution = 0x1DC; // int32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_Diffusion {
            public const nint m_flRadiusScale = 0x1B0; // float32
            public const nint m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
            public const nint m_nVoxelGridResolution = 0x1B8; // int32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapScalarEndCap {
            public const nint m_nFieldInput = 0x1B0; // ParticleAttributeIndex_t
            public const nint m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
            public const nint m_flInputMin = 0x1B8; // float32
            public const nint m_flInputMax = 0x1BC; // float32
            public const nint m_flOutputMin = 0x1C0; // float32
            public const nint m_flOutputMax = 0x1C4; // float32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_ReinitializeScalarEndCap {
            public const nint m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
            public const nint m_flOutputMin = 0x1B4; // float32
            public const nint m_flOutputMax = 0x1B8; // float32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapScalarOnceTimed {
            public const nint m_bProportional = 0x1B0; // bool
            public const nint m_nFieldInput = 0x1B4; // ParticleAttributeIndex_t
            public const nint m_nFieldOutput = 0x1B8; // ParticleAttributeIndex_t
            public const nint m_flInputMin = 0x1BC; // float32
            public const nint m_flInputMax = 0x1C0; // float32
            public const nint m_flOutputMin = 0x1C4; // float32
            public const nint m_flOutputMax = 0x1C8; // float32
            public const nint m_flRemapTime = 0x1CC; // float32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapParticleCountOnScalarEndCap {
            public const nint m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
            public const nint m_nInputMin = 0x1B4; // int32
            public const nint m_nInputMax = 0x1B8; // int32
            public const nint m_flOutputMin = 0x1BC; // float32
            public const nint m_flOutputMax = 0x1C0; // float32
            public const nint m_bBackwards = 0x1C4; // bool
            public const nint m_nSetMethod = 0x1C8; // ParticleSetMethod_t
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapParticleCountToScalar {
            public const nint m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
            public const nint m_nInputMin = 0x1B8; // CParticleCollectionFloatInput
            public const nint m_nInputMax = 0x308; // CParticleCollectionFloatInput
            public const nint m_flOutputMin = 0x458; // CParticleCollectionFloatInput
            public const nint m_flOutputMax = 0x5A8; // CParticleCollectionFloatInput
            public const nint m_bActiveRange = 0x6F8; // bool
            public const nint m_nSetMethod = 0x6FC; // ParticleSetMethod_t
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapVisibilityScalar {
            public const nint m_nFieldInput = 0x1B0; // ParticleAttributeIndex_t
            public const nint m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
            public const nint m_flInputMin = 0x1B8; // float32
            public const nint m_flInputMax = 0x1BC; // float32
            public const nint m_flOutputMin = 0x1C0; // float32
            public const nint m_flOutputMax = 0x1C4; // float32
            public const nint m_flRadiusScale = 0x1C8; // float32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapTransformVisibilityToScalar {
            public const nint m_nSetMethod = 0x1B0; // ParticleSetMethod_t
            public const nint m_TransformInput = 0x1B8; // CParticleTransformInput
            public const nint m_nFieldOutput = 0x218; // ParticleAttributeIndex_t
            public const nint m_flInputMin = 0x21C; // float32
            public const nint m_flInputMax = 0x220; // float32
            public const nint m_flOutputMin = 0x224; // float32
            public const nint m_flOutputMax = 0x228; // float32
            public const nint m_flRadius = 0x22C; // float32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapTransformVisibilityToVector {
            public const nint m_nSetMethod = 0x1B0; // ParticleSetMethod_t
            public const nint m_TransformInput = 0x1B8; // CParticleTransformInput
            public const nint m_nFieldOutput = 0x218; // ParticleAttributeIndex_t
            public const nint m_flInputMin = 0x21C; // float32
            public const nint m_flInputMax = 0x220; // float32
            public const nint m_vecOutputMin = 0x224; // Vector
            public const nint m_vecOutputMax = 0x230; // Vector
            public const nint m_flRadius = 0x23C; // float32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_LerpScalar {
            public const nint m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
            public const nint m_flOutput = 0x1B8; // CPerParticleFloatInput
            public const nint m_flStartTime = 0x308; // float32
            public const nint m_flEndTime = 0x30C; // float32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_LerpEndCapScalar {
            public const nint m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
            public const nint m_flOutput = 0x1B4; // float32
            public const nint m_flLerpTime = 0x1B8; // float32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_LerpEndCapVector {
            public const nint m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
            public const nint m_vecOutput = 0x1B4; // Vector
            public const nint m_flLerpTime = 0x1C0; // float32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_LerpVector {
            public const nint m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
            public const nint m_vecOutput = 0x1B4; // Vector
            public const nint m_flStartTime = 0x1C0; // float32
            public const nint m_flEndTime = 0x1C4; // float32
            public const nint m_nSetMethod = 0x1C8; // ParticleSetMethod_t
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_LerpToOtherAttribute {
            public const nint m_flInterpolation = 0x1B0; // CPerParticleFloatInput
            public const nint m_nFieldInputFrom = 0x300; // ParticleAttributeIndex_t
            public const nint m_nFieldInput = 0x304; // ParticleAttributeIndex_t
            public const nint m_nFieldOutput = 0x308; // ParticleAttributeIndex_t
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapSpeed {
            public const nint m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
            public const nint m_flInputMin = 0x1B4; // float32
            public const nint m_flInputMax = 0x1B8; // float32
            public const nint m_flOutputMin = 0x1BC; // float32
            public const nint m_flOutputMax = 0x1C0; // float32
            public const nint m_nSetMethod = 0x1C4; // ParticleSetMethod_t
            public const nint m_bIgnoreDelta = 0x1C8; // bool
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapVectortoCP {
            public const nint m_nOutControlPointNumber = 0x1B0; // int32
            public const nint m_nFieldInput = 0x1B4; // ParticleAttributeIndex_t
            public const nint m_nParticleNumber = 0x1B8; // int32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RampScalarLinear {
            public const nint m_RateMin = 0x1B0; // float32
            public const nint m_RateMax = 0x1B4; // float32
            public const nint m_flStartTime_min = 0x1B8; // float32
            public const nint m_flStartTime_max = 0x1BC; // float32
            public const nint m_flEndTime_min = 0x1C0; // float32
            public const nint m_flEndTime_max = 0x1C4; // float32
            public const nint m_nField = 0x1F0; // ParticleAttributeIndex_t
            public const nint m_bProportionalOp = 0x1F4; // bool
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RampScalarSpline {
            public const nint m_RateMin = 0x1B0; // float32
            public const nint m_RateMax = 0x1B4; // float32
            public const nint m_flStartTime_min = 0x1B8; // float32
            public const nint m_flStartTime_max = 0x1BC; // float32
            public const nint m_flEndTime_min = 0x1C0; // float32
            public const nint m_flEndTime_max = 0x1C4; // float32
            public const nint m_flBias = 0x1C8; // float32
            public const nint m_nField = 0x1F0; // ParticleAttributeIndex_t
            public const nint m_bProportionalOp = 0x1F4; // bool
            public const nint m_bEaseOut = 0x1F5; // bool
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RampScalarLinearSimple {
            public const nint m_Rate = 0x1B0; // float32
            public const nint m_flStartTime = 0x1B4; // float32
            public const nint m_flEndTime = 0x1B8; // float32
            public const nint m_nField = 0x1E0; // ParticleAttributeIndex_t
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RampScalarSplineSimple {
            public const nint m_Rate = 0x1B0; // float32
            public const nint m_flStartTime = 0x1B4; // float32
            public const nint m_flEndTime = 0x1B8; // float32
            public const nint m_nField = 0x1E0; // ParticleAttributeIndex_t
            public const nint m_bEaseOut = 0x1E4; // bool
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_ChladniWave {
            public const nint m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
            public const nint m_flInputMin = 0x1B8; // CPerParticleFloatInput
            public const nint m_flInputMax = 0x308; // CPerParticleFloatInput
            public const nint m_flOutputMin = 0x458; // CPerParticleFloatInput
            public const nint m_flOutputMax = 0x5A8; // CPerParticleFloatInput
            public const nint m_vecWaveLength = 0x6F8; // CPerParticleVecInput
            public const nint m_vecHarmonics = 0xD28; // CPerParticleVecInput
            public const nint m_nSetMethod = 0x1358; // ParticleSetMethod_t
            public const nint m_nLocalSpaceControlPoint = 0x135C; // int32
            public const nint m_b3D = 0x1360; // bool
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_Noise {
            public const nint m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
            public const nint m_flOutputMin = 0x1B4; // float32
            public const nint m_flOutputMax = 0x1B8; // float32
            public const nint m_fl4NoiseScale = 0x1BC; // float32
            public const nint m_bAdditive = 0x1C0; // bool
            public const nint m_flNoiseAnimationTimeScale = 0x1C4; // float32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_VectorNoise {
            public const nint m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
            public const nint m_vecOutputMin = 0x1B4; // Vector
            public const nint m_vecOutputMax = 0x1C0; // Vector
            public const nint m_fl4NoiseScale = 0x1CC; // float32
            public const nint m_bAdditive = 0x1D0; // bool
            public const nint m_bOffset = 0x1D1; // bool
            public const nint m_flNoiseAnimationTimeScale = 0x1D4; // float32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_Decay {
            public const nint m_bRopeDecay = 0x1B0; // bool
            public const nint m_bForcePreserveParticleOrder = 0x1B1; // bool
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_DecayOffscreen {
            public const nint m_flOffscreenTime = 0x1B0; // CParticleCollectionFloatInput
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_EndCapTimedFreeze {
            public const nint m_flFreezeTime = 0x1B0; // CParticleCollectionFloatInput
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_EndCapTimedDecay {
            public const nint m_flDecayTime = 0x1B0; // float32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_EndCapDecay {
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_VelocityDecay {
            public const nint m_flMinVelocity = 0x1B0; // float32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_AlphaDecay {
            public const nint m_flMinAlpha = 0x1B0; // float32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RadiusDecay {
            public const nint m_flMinRadius = 0x1B0; // float32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_DecayMaintainCount {
            public const nint m_nParticlesToMaintain = 0x1B0; // int32
            public const nint m_flDecayDelay = 0x1B4; // float32
            public const nint m_nSnapshotControlPoint = 0x1B8; // int32
            public const nint m_bLifespanDecay = 0x1BC; // bool
            public const nint m_flScale = 0x1C0; // CParticleCollectionFloatInput
            public const nint m_bKillNewest = 0x310; // bool
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_DecayClampCount {
            public const nint m_nCount = 0x1B0; // CParticleCollectionFloatInput
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_Cull {
            public const nint m_flCullPerc = 0x1B0; // float32
            public const nint m_flCullStart = 0x1B4; // float32
            public const nint m_flCullEnd = 0x1B8; // float32
            public const nint m_flCullExp = 0x1BC; // float32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CGeneralSpin {
            public const nint m_nSpinRateDegrees = 0x1B0; // int32
            public const nint m_nSpinRateMinDegrees = 0x1B4; // int32
            public const nint m_fSpinRateStopTime = 0x1BC; // float32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSpinUpdateBase {
        }
        // Parent: CGeneralSpin
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_Spin {
        }
        // Parent: CSpinUpdateBase
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SpinUpdate {
        }
        // Parent: CGeneralSpin
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SpinYaw {
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_InterpolateRadius {
            public const nint m_flStartTime = 0x1B0; // float32
            public const nint m_flEndTime = 0x1B4; // float32
            public const nint m_flStartScale = 0x1B8; // float32
            public const nint m_flEndScale = 0x1BC; // float32
            public const nint m_bEaseInAndOut = 0x1C0; // bool
            public const nint m_flBias = 0x1C4; // float32
        }
    }
    // Module: libpulse_system.so
    // Classes count: 51
    // Enums count: 0
    public static class LibpulseSystem {
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseProvideFeatureTag
        // MPulseLibraryBindings
        public static class FakeEntity_tAPI {
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulse_RegisterInfo {
            public const nint m_nReg = 0x0; // PulseRuntimeRegisterIndex_t
            public const nint m_Type = 0x8; // CPulseValueFullType
            public const nint m_OriginName = 0x18; // CKV3MemberNameWithStorage
            public const nint m_nWrittenByInstruction = 0x50; // int32
            public const nint m_nLastReadByInstruction = 0x54; // int32
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulse_Chunk {
            public const nint m_Instructions = 0x0; // CUtlLeanVector<PGDInstruction_t>
            public const nint m_Registers = 0x10; // CUtlLeanVector<CPulse_RegisterInfo>
            public const nint m_InstructionEditorIDs = 0x20; // CUtlLeanVector<PulseDocNodeID_t>
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulse_Variable {
            public const nint m_Name = 0x0; // CUtlSymbolLarge
            public const nint m_Description = 0x8; // CUtlString
            public const nint m_Type = 0x10; // CPulseValueFullType
            public const nint m_DefaultValue = 0x20; // KeyValues3
            public const nint m_bIsPublic = 0x32; // bool
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulse_Constant {
            public const nint m_Type = 0x0; // CPulseValueFullType
            public const nint m_Value = 0x10; // KeyValues3
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulse_PublicOutput {
            public const nint m_Name = 0x0; // CUtlSymbolLarge
            public const nint m_Description = 0x8; // CUtlString
            public const nint m_ParamType = 0x10; // CPulseValueFullType
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulse_OutputConnection {
            public const nint m_SourceOutput = 0x0; // CUtlSymbolLarge
            public const nint m_TargetEntity = 0x8; // CUtlSymbolLarge
            public const nint m_TargetInput = 0x10; // CUtlSymbolLarge
            public const nint m_Param = 0x18; // CUtlSymbolLarge
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulse_InvokeBinding {
            public const nint m_RegisterMap = 0x0; // PulseRegisterMap_t
            public const nint m_FuncName = 0x20; // CUtlSymbolLarge
            public const nint m_nCellIndex = 0x28; // PulseRuntimeCellIndex_t
            public const nint m_nSrcChunk = 0x2C; // PulseRuntimeChunkIndex_t
            public const nint m_nSrcInstruction = 0x30; // int32
        }
        // Parent: None
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulse_CallInfo {
            public const nint m_PortName = 0x0; // CUtlSymbolLarge
            public const nint m_nEditorNodeID = 0x8; // PulseDocNodeID_t
            public const nint m_RegisterMap = 0x10; // PulseRegisterMap_t
            public const nint m_CallMethodID = 0x30; // PulseDocNodeID_t
            public const nint m_nSrcChunk = 0x34; // PulseRuntimeChunkIndex_t
            public const nint m_nSrcInstruction = 0x38; // int32
        }
        // Parent: None
        // Fields count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseGraphDef {
            public const nint m_DomainIdentifier = 0x8; // CUtlSymbolLarge
            public const nint m_ParentMapName = 0x10; // CUtlSymbolLarge
            public const nint m_Chunks = 0x18; // CUtlVector<CPulse_Chunk*>
            public const nint m_Cells = 0x30; // CUtlVector<CPulseCell_Base*>
            public const nint m_Vars = 0x48; // CUtlVector<CPulse_Variable>
            public const nint m_PublicOutputs = 0x60; // CUtlVector<CPulse_PublicOutput>
            public const nint m_InvokeBindings = 0x78; // CUtlVector<CPulse_InvokeBinding*>
            public const nint m_CallInfos = 0x90; // CUtlVector<CPulse_CallInfo*>
            public const nint m_Constants = 0xA8; // CUtlVector<CPulse_Constant>
            public const nint m_OutputConnections = 0xC0; // CUtlVector<CPulse_OutputConnection*>
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseLibraryBindings
        // MPropertyDescription
        public static class CPulseMathlib {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseLibraryBindings
        // MPropertyDescription
        public static class CPulseTestScriptLib {
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class PulseRegisterMap_t {
            public const nint m_Inparams = 0x0; // KeyValues3
            public const nint m_Outparams = 0x10; // KeyValues3
        }
        // Parent: None
        // Fields count: 11
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class PGDInstruction_t {
            public const nint m_nCode = 0x0; // PulseInstructionCode_t
            public const nint m_nVar = 0x4; // PulseRuntimeVarIndex_t
            public const nint m_nReg0 = 0x8; // PulseRuntimeRegisterIndex_t
            public const nint m_nReg1 = 0xA; // PulseRuntimeRegisterIndex_t
            public const nint m_nReg2 = 0xC; // PulseRuntimeRegisterIndex_t
            public const nint m_nInvokeBindingIndex = 0x10; // PulseRuntimeInvokeIndex_t
            public const nint m_nChunk = 0x14; // PulseRuntimeChunkIndex_t
            public const nint m_nDestInstruction = 0x18; // int32
            public const nint m_nCallInfoIndex = 0x1C; // PulseRuntimeCallInfoIndex_t
            public const nint m_nConstIdx = 0x20; // PulseRuntimeConstantIndex_t
            public const nint m_DomainValue = 0x28; // CBufferString
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulse_OutflowConnection {
            public const nint m_SourceOutflowName = 0x0; // CUtlSymbolLarge
            public const nint m_nDestChunk = 0x8; // PulseRuntimeChunkIndex_t
            public const nint m_nInstruction = 0xC; // int32
        }
        // Parent: CPulse_OutflowConnection
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulse_ResumePoint {
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Base {
            public const nint m_nEditorNodeID = 0x8; // PulseDocNodeID_t
        }
        // Parent: CPulseCell_Base
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_BaseFlow {
        }
        // Parent: CPulseCell_BaseFlow
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Inflow_BaseEntrypoint {
            public const nint m_EntryChunk = 0x48; // PulseRuntimeChunkIndex_t
            public const nint m_RegisterMap = 0x50; // PulseRegisterMap_t
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseRuntimeMethodArg {
            public const nint m_Name = 0x0; // CKV3MemberNameWithStorage
            public const nint m_Description = 0x38; // CUtlString
            public const nint m_Type = 0x40; // CPulseValueFullType
        }
        // Parent: CPulseCell_BaseFlow
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_BaseYieldingInflow {
        }
        // Parent: CPulseCell_Base
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_BaseValue {
        }
        // Parent: CPulseCell_BaseYieldingInflow
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        // MPropertyFriendlyName
        // MPropertyDescription
        // MPulseEditorHeaderIcon
        public static class CPulseCell_Inflow_Wait {
            public const nint m_WakeResume = 0x48; // CPulse_ResumePoint
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Outflow_CycleOrdered__InstanceState_t {
            public const nint m_nNextIndex = 0x0; // int32
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Outflow_CycleShuffled__InstanceState_t {
            public const nint m_Shuffle = 0x0; // CUtlVectorFixedGrowable<uint8>
            public const nint m_nNextShuffle = 0x20; // int32
        }
        // Parent: CPulseCell_BaseFlow
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CPulseCell_Outflow_TestRandomYesNo {
            public const nint m_Yes = 0x48; // CPulse_OutflowConnection
            public const nint m_No = 0x58; // CPulse_OutflowConnection
        }
        // Parent: CPulseCell_BaseFlow
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CPulseCell_Outflow_TestExplicitYesNo {
            public const nint m_Yes = 0x48; // CPulse_OutflowConnection
            public const nint m_No = 0x58; // CPulse_OutflowConnection
        }
        // Parent: CPulseCell_BaseValue
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CPulseCell_Value_TestValue50 {
        }
        // Parent: CPulseCell_BaseValue
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        // MPropertyFriendlyName
        // MPropertyDescription
        // MPulseEditorHeaderIcon
        public static class CPulseCell_Value_RandomInt {
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Timeline__TimelineEvent_t {
            public const nint m_flTimeFromPrevious = 0x0; // float32
            public const nint m_bPauseForPreviousEvents = 0x4; // bool
            public const nint m_bCallModeSync = 0x5; // bool
            public const nint m_EventOutflow = 0x8; // CPulse_OutflowConnection
        }
        // Parent: None
        // Fields count: 7
        public static class FakeEntity_t {
            public const nint m_nHandle = 0x0; // PulseTestEHandle_t
            public const nint m_Name = 0x8; // CUtlString
            public const nint m_Class = 0x10; // CUtlString
            public const nint m_bDestroyed = 0x18; // bool
            public const nint m_pAssociatedGraphInstance = 0x20; // CPulseGraphInstance_TestDomain*
            public const nint m_bFuncWasCalled = 0x28; // bool
            public const nint m_fValue = 0x2C; // float32
        }
        // Parent: None
        // Fields count: 6
        //
        // Metadata:
        // MPulseInstanceDomainInfo
        // MPulseLibraryBindings
        // MPulseDomainOptInFeatureTag
        public static class CPulseGraphInstance_TestDomain {
            public const nint m_bIsRunningUnitTests = 0xD8; // bool
            public const nint m_bExplicitTimeStepping = 0xD9; // bool
            public const nint m_bExpectingToDestroyWithYieldedCursors = 0xDA; // bool
            public const nint m_nNextValidateIndex = 0xDC; // int32
            public const nint m_Tracepoints = 0xE0; // CUtlVector<CUtlString>
            public const nint m_bTestYesOrNoPath = 0xF8; // bool
        }
        // Parent: CPulseCell_BaseFlow
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        // MPropertyFriendlyName
        public static class CPulseCell_Step_TestDomainTracepoint {
        }
        // Parent: CPulseCell_BaseFlow
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        // MPropertyFriendlyName
        public static class CPulseCell_Step_TestDomainCreateFakeEntity {
        }
        // Parent: CPulseCell_BaseFlow
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        // MPropertyFriendlyName
        public static class CPulseCell_Step_TestDomainDestroyFakeEntity {
        }
        // Parent: CPulseCell_BaseFlow
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        // MPropertyFriendlyName
        // MPulseEditorHeaderText
        public static class CPulseCell_Step_TestDomainEntFire {
            public const nint m_Input = 0x48; // CUtlString
        }
        // Parent: CPulseCell_BaseValue
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        // MPropertyFriendlyName
        public static class CPulseCell_Val_TestDomainGetEntityName {
        }
        // Parent: CPulseCell_BaseValue
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        // MPropertyFriendlyName
        public static class CPulseCell_Val_TestDomainFindEntityByName {
        }
        // Parent: CPulseCell_BaseYieldingInflow
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        public static class CPulseCell_TestWaitWithCursorState {
            public const nint m_WakeResume = 0x48; // CPulse_ResumePoint
            public const nint m_WakeCancel = 0x58; // CPulse_ResumePoint
            public const nint m_WakeFail = 0x68; // CPulse_ResumePoint
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_TestWaitWithCursorState__CursorState_t {
            public const nint flWaitValue = 0x0; // float32
            public const nint bFailOnCancel = 0x4; // bool
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseLibraryBindings
        // MPropertyDescription
        public static class CPulseTestFuncs_DerivedDomain {
        }
        // Parent: CPulseCell_BaseFlow
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        public static class CPulseCell_Test_NoInflow {
        }
        // Parent: CPulseCell_BaseFlow
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        public static class CPulseCell_Test_MultiInflow_WithDefault {
        }
        // Parent: CPulseCell_BaseFlow
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        public static class CPulseCell_Test_MultiInflow_NoDefault {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseInstanceDomainInfo
        // MPulseLibraryBindings
        public static class CPulseGraphInstance_TurtleGraphics {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseLibraryBindings
        // MPropertyDescription
        public static class CPulseCursorFuncs {
        }
        // Parent: CPulseCell_BaseYieldingInflow
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_WaitForCursorsWithTagBase {
            public const nint m_nCursorsAllowedToWait = 0x48; // int32
            public const nint m_WaitComplete = 0x50; // CPulse_ResumePoint
        }
        // Parent: None
        // Fields count: 1
        public static class CPulseCell_WaitForCursorsWithTagBase__CursorState_t {
            public const nint m_TagName = 0x0; // CUtlSymbolLarge
        }
        // Parent: CPulseCell_WaitForCursorsWithTagBase
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        // MPropertyFriendlyName
        // MPropertyDescription
        // MPulseEditorHeaderIcon
        public static class CPulseCell_WaitForCursorsWithTag {
            public const nint m_bTagSelfWhenComplete = 0x60; // bool
            public const nint m_nDesiredKillPriority = 0x64; // PulseCursorCancelPriority_t
        }
        // Parent: CPulseCell_WaitForCursorsWithTagBase
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        // MPropertyFriendlyName
        // MPropertyDescription
        // MPulseEditorHeaderIcon
        public static class CPulseCell_CursorQueue {
            public const nint m_nCursorsAllowedToRunParallel = 0x60; // int32
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseLibraryBindings
        // MPropertyDescription
        public static class CPulseTestFuncs_LibraryA {
        }
    }
    // Module: librendersystemvulkan.so
    // Classes count: 3
    // Enums count: 0
    public static class Librendersystemvulkan {
        // Parent: None
        // Fields count: 7
        public static class RenderInputLayoutField_t {
            public const nint m_pSemanticName = 0x0; // uint8[32]
            public const nint m_nSemanticIndex = 0x20; // int32
            public const nint m_Format = 0x24; // uint32
            public const nint m_nOffset = 0x28; // int32
            public const nint m_nSlot = 0x2C; // int32
            public const nint m_nSlotType = 0x30; // RenderSlotType_t
            public const nint m_nInstanceStepRate = 0x34; // int32
        }
        // Parent: None
        // Fields count: 4
        public static class VsInputSignatureElement_t {
            public const nint m_pName = 0x0; // char[64]
            public const nint m_pSemantic = 0x40; // char[64]
            public const nint m_pD3DSemanticName = 0x80; // char[64]
            public const nint m_nD3DSemanticIndex = 0xC0; // int32
        }
        // Parent: None
        // Fields count: 1
        public static class VsInputSignature_t {
            public const nint m_elems = 0x0; // CUtlVector<VsInputSignatureElement_t>
        }
    }
    // Module: libresourcesystem.so
    // Classes count: 57
    // Enums count: 0
    public static class Libresourcesystem {
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class ConstantInfo_t {
            public const nint m_name = 0x0; // CUtlString
            public const nint m_nameToken = 0x8; // CUtlStringToken
            public const nint m_flValue = 0xC; // float32
        }
        // Parent: None
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VariableInfo_t {
            public const nint m_name = 0x0; // CUtlString
            public const nint m_nameToken = 0x8; // CUtlStringToken
            public const nint m_nIndex = 0xC; // FuseVariableIndex_t
            public const nint m_nNumComponents = 0xE; // uint8
            public const nint m_eVarType = 0xF; // FuseVariableType_t
            public const nint m_eAccess = 0x10; // FuseVariableAccess_t
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FunctionInfo_t {
            public const nint m_name = 0x8; // CUtlString
            public const nint m_nameToken = 0x10; // CUtlStringToken
            public const nint m_nParamCount = 0x14; // int32
            public const nint m_nIndex = 0x18; // FuseFunctionIndex_t
            public const nint m_bIsPure = 0x1A; // bool
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CFuseProgram {
            public const nint m_programBuffer = 0x0; // CUtlVector<uint8>
            public const nint m_variablesRead = 0x18; // CUtlVector<FuseVariableIndex_t>
            public const nint m_variablesWritten = 0x30; // CUtlVector<FuseVariableIndex_t>
            public const nint m_nMaxTempVarsUsed = 0x48; // int32
        }
        // Parent: None
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CFuseSymbolTable {
            public const nint m_constants = 0x0; // CUtlVector<ConstantInfo_t>
            public const nint m_variables = 0x18; // CUtlVector<VariableInfo_t>
            public const nint m_functions = 0x30; // CUtlVector<FunctionInfo_t>
            public const nint m_constantMap = 0x48; // CUtlHashtable<CUtlStringToken,int32>
            public const nint m_variableMap = 0x68; // CUtlHashtable<CUtlStringToken,int32>
            public const nint m_functionMap = 0x88; // CUtlHashtable<CUtlStringToken,int32>
        }
        // Parent: None
        // Fields count: 2
        public static class AABB_t {
            public const nint m_vMinBounds = 0x0; // Vector
            public const nint m_vMaxBounds = 0xC; // Vector
        }
        // Parent: None
        // Fields count: 2
        public static class PackedAABB_t {
            public const nint m_nPackedMin = 0x0; // uint32
            public const nint m_nPackedMax = 0x4; // uint32
        }
        // Parent: None
        // Fields count: 4
        public static class FourQuaternions {
            public const nint x = 0x0; // fltx4
            public const nint y = 0x10; // fltx4
            public const nint z = 0x20; // fltx4
            public const nint w = 0x30; // fltx4
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class TestResource_t {
            public const nint m_name = 0x0; // CUtlString
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeTestResource_t {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeProceduralTestResource_t {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeManifestTestResource_t {
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class ManifestTestResource_t {
            public const nint m_name = 0x0; // CUtlString
            public const nint m_child = 0x8; // CStrongHandle<InfoForResourceTypeManifestTestResource_t>
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCVDataResource {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeIPulseGraphDef {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCTypeScriptResource {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCJavaScriptResource {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeIParticleSystemDefinition {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeIParticleSnapshot {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCAnimData {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCAnimationGroup {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCSequenceGroupData {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeIMaterial2 {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCMorphSetData {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCRenderMesh {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCModel {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCTextureBase {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeIVectorGraphic {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCVSoundEventScriptList {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCVSoundStackScriptList {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCVoiceContainerBase {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCVMixListResource {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCPhysAggregateData {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCVPhysXSurfacePropertiesList {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCEntityLump {
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
        public static class InfoForResourceTypeWorld_t {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCVoxelVisibility {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCPostProcessingResource {
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
        public static class InfoForResourceTypeCPanoramaLayout {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCPanoramaDynamicImages {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCDotaItemDefinitionResource {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCDOTAPatchNotesList {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCDOTANovelsList {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeIAnimGraphModelBinding {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCChoreoSceneFileData {
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
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCCompositeMaterialKit {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCGcExportableExternalData {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCSmartProp {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCCSGOEconItem {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCResponseRulesList {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCNmSkeleton {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCNmClip {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCNmGraph {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCNmGraphDataSet {
        }
    }
    // Module: libscenefilecache.so
    // Classes count: 0
    // Enums count: 0
    public static class Libscenefilecache {
    }
    // Module: libscenesystem.so
    // Classes count: 9
    // Enums count: 0
    public static class Libscenesystem {
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSSDSEndFrameViewInfo {
            public const nint m_nViewId = 0x0; // uint64
            public const nint m_ViewName = 0x8; // CUtlString
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSSDSMsg_EndFrame {
            public const nint m_Views = 0x0; // CUtlVector<CSSDSEndFrameViewInfo>
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class SceneViewId_t {
            public const nint m_nViewId = 0x0; // uint64
            public const nint m_nFrameCount = 0x8; // uint64
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSSDSMsg_ViewRender {
            public const nint m_viewId = 0x0; // SceneViewId_t
            public const nint m_ViewName = 0x10; // CUtlString
        }
        // Parent: None
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSSDSMsg_LayerBase {
            public const nint m_viewId = 0x0; // SceneViewId_t
            public const nint m_ViewName = 0x10; // CUtlString
            public const nint m_nLayerIndex = 0x18; // int32
            public const nint m_nLayerId = 0x20; // uint64
            public const nint m_LayerName = 0x28; // CUtlString
            public const nint m_displayText = 0x30; // CUtlString
        }
        // Parent: None
        // Fields count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSSDSMsg_ViewTarget {
            public const nint m_Name = 0x0; // CUtlString
            public const nint m_TextureId = 0x8; // uint64
            public const nint m_nWidth = 0x10; // int32
            public const nint m_nHeight = 0x14; // int32
            public const nint m_nRequestedWidth = 0x18; // int32
            public const nint m_nRequestedHeight = 0x1C; // int32
            public const nint m_nNumMipLevels = 0x20; // int32
            public const nint m_nDepth = 0x24; // int32
            public const nint m_nMultisampleNumSamples = 0x28; // int32
            public const nint m_nFormat = 0x2C; // int32
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSSDSMsg_ViewTargetList {
            public const nint m_viewId = 0x0; // SceneViewId_t
            public const nint m_ViewName = 0x10; // CUtlString
            public const nint m_Targets = 0x18; // CUtlVector<CSSDSMsg_ViewTarget>
        }
        // Parent: CSSDSMsg_LayerBase
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSSDSMsg_PreLayer {
        }
        // Parent: CSSDSMsg_LayerBase
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSSDSMsg_PostLayer {
        }
    }
    // Module: libschemasystem.so
    // Classes count: 6
    // Enums count: 0
    public static class Libschemasystem {
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCResourceManifestInternal {
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CExampleSchemaVData_Monomorphic {
            public const nint m_nExample1 = 0x0; // int32
            public const nint m_nExample2 = 0x4; // int32
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CExampleSchemaVData_PolymorphicBase {
            public const nint m_nBase = 0x8; // int32
        }
        // Parent: CExampleSchemaVData_PolymorphicBase
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CExampleSchemaVData_PolymorphicDerivedA {
            public const nint m_nDerivedA = 0xC; // int32
        }
        // Parent: CExampleSchemaVData_PolymorphicBase
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CExampleSchemaVData_PolymorphicDerivedB {
            public const nint m_nDerivedB = 0xC; // int32
        }
        // Parent: None
        // Fields count: 22
        public static class CSchemaSystemInternalRegistration {
            public const nint m_Vector2D = 0x0; // Vector2D
            public const nint m_Vector = 0x8; // Vector
            public const nint m_VectorAligned = 0x20; // VectorAligned
            public const nint m_Quaternion = 0x30; // Quaternion
            public const nint m_QAngle = 0x40; // QAngle
            public const nint m_RotationVector = 0x4C; // RotationVector
            public const nint m_RadianEuler = 0x58; // RadianEuler
            public const nint m_DegreeEuler = 0x64; // DegreeEuler
            public const nint m_QuaternionStorage = 0x70; // QuaternionStorage
            public const nint m_matrix3x4_t = 0x80; // matrix3x4_t
            public const nint m_matrix3x4a_t = 0xB0; // matrix3x4a_t
            public const nint m_Color = 0xE0; // Color
            public const nint m_Vector4D = 0xE4; // Vector4D
            public const nint m_CTransform = 0x100; // CTransform
            public const nint m_pKeyValues = 0x120; // KeyValues*
            public const nint m_CUtlBinaryBlock = 0x128; // CUtlBinaryBlock
            public const nint m_CUtlString = 0x140; // CUtlString
            public const nint m_CUtlSymbol = 0x148; // CUtlSymbol
            public const nint m_stringToken = 0x14C; // CUtlStringToken
            public const nint m_stringTokenWithStorage = 0x150; // CUtlStringTokenWithStorage
            public const nint m_ResourceTypes = 0x168; // CResourceArray<CResourcePointer<CResourceString>>
            public const nint m_KV3 = 0x170; // KeyValues3
        }
    }
    // Module: libserver.so
    // Classes count: 233
    // Enums count: 0
    public static class Libserver {
        // Parent: None
        // Fields count: 2
        public static class Extent {
            public const nint lo = 0x0; // Vector
            public const nint hi = 0xC; // Vector
        }
        // Parent: None
        // Fields count: 2
        public static class NavGravity_t {
            public const nint m_vGravity = 0x0; // Vector
            public const nint m_bDefault = 0xC; // bool
        }
        // Parent: None
        // Fields count: 0
        public static class CNavVolume {
        }
        // Parent: CNavVolume
        // Fields count: 1
        public static class CNavVolumeVector {
            public const nint m_bHasBeenPreFiltered = 0x58; // bool
        }
        // Parent: CNavVolumeVector
        // Fields count: 0
        public static class CNavVolumeAll {
        }
        // Parent: CNavVolume
        // Fields count: 2
        public static class CNavVolumeSphere {
            public const nint m_vCenter = 0x50; // Vector
            public const nint m_flRadius = 0x5C; // float32
        }
        // Parent: CNavVolumeSphere
        // Fields count: 1
        public static class CNavVolumeSphericalShell {
            public const nint m_flRadiusInner = 0x60; // float32
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MPropertyCustomEditor
        public static class CRangeFloat {
            public const nint m_pValue = 0x0; // float32[2]
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MPropertyCustomEditor
        public static class CRangeInt {
            public const nint m_pValue = 0x0; // int32[2]
        }
        // Parent: None
        // Fields count: 0
        public static class CEntityComponent {
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
        // NetworkVarNames: m_pEntity (CEntityIdentity *)
        // NetworkVarNames: m_CScriptComponent (CScriptComponent::Storage_t)
        public static class CEntityInstance {
            public const nint m_iszPrivateVScripts = 0x8; // CUtlSymbolLarge
            public const nint m_pEntity = 0x10; // CEntityIdentity*
            public const nint m_CScriptComponent = 0x28; // CScriptComponent*
            public const nint m_bVisibleinPVS = 0x30; // bool
        }
        // Parent: CEntityComponent
        // Fields count: 1
        public static class CScriptComponent {
            public const nint m_scriptClassName = 0x30; // CUtlSymbolLarge
        }
        // Parent: CEntityComponent
        // Fields count: 2
        public static class CBodyComponent {
            public const nint m_pSceneNode = 0x8; // CGameSceneNode*
            public const nint __m_pChainEntity = 0x28; // CNetworkVarChainer
        }
        // Parent: CBodyComponent
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_sceneNode (CGameSceneNode)
        public static class CBodyComponentPoint {
            public const nint m_sceneNode = 0x60; // CGameSceneNode
            public const nint __m_pChainEntity = 0x1C0; // CNetworkVarChainer
        }
        // Parent: CBodyComponent
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_skeletonInstance (CSkeletonInstance)
        public static class CBodyComponentSkeletonInstance {
            public const nint m_skeletonInstance = 0x60; // CSkeletonInstance
            public const nint __m_pChainEntity = 0x450; // CNetworkVarChainer
        }
        // Parent: CEntityComponent
        // Fields count: 1
        //
        // Metadata:
        // NetworkVarNames: m_bvDisabledHitGroups (uint32)
        public static class CHitboxComponent {
            public const nint m_bvDisabledHitGroups = 0x24; // uint32[1]
        }
        // Parent: CEntityComponent
        // Fields count: 67
        //
        // Metadata:
        // NetworkVarNames: m_Color (Color)
        // NetworkVarNames: m_SecondaryColor (Color)
        // NetworkVarNames: m_flBrightness (float)
        // NetworkVarNames: m_flBrightnessScale (float)
        // NetworkVarNames: m_flBrightnessMult (float)
        // NetworkVarNames: m_flRange (float)
        // NetworkVarNames: m_flFalloff (float)
        // NetworkVarNames: m_flAttenuation0 (float)
        // NetworkVarNames: m_flAttenuation1 (float)
        // NetworkVarNames: m_flAttenuation2 (float)
        // NetworkVarNames: m_flTheta (float)
        // NetworkVarNames: m_flPhi (float)
        // NetworkVarNames: m_hLightCookie (HRenderTextureStrong)
        // NetworkVarNames: m_nCascades (int)
        // NetworkVarNames: m_nCastShadows (int)
        // NetworkVarNames: m_nShadowWidth (int)
        // NetworkVarNames: m_nShadowHeight (int)
        // NetworkVarNames: m_bRenderDiffuse (bool)
        // NetworkVarNames: m_nRenderSpecular (int)
        // NetworkVarNames: m_bRenderTransmissive (bool)
        // NetworkVarNames: m_flOrthoLightWidth (float)
        // NetworkVarNames: m_flOrthoLightHeight (float)
        // NetworkVarNames: m_nStyle (int)
        // NetworkVarNames: m_Pattern (CUtlString)
        // NetworkVarNames: m_nCascadeRenderStaticObjects (int)
        // NetworkVarNames: m_flShadowCascadeCrossFade (float)
        // NetworkVarNames: m_flShadowCascadeDistanceFade (float)
        // NetworkVarNames: m_flShadowCascadeDistance0 (float)
        // NetworkVarNames: m_flShadowCascadeDistance1 (float)
        // NetworkVarNames: m_flShadowCascadeDistance2 (float)
        // NetworkVarNames: m_flShadowCascadeDistance3 (float)
        // NetworkVarNames: m_nShadowCascadeResolution0 (int)
        // NetworkVarNames: m_nShadowCascadeResolution1 (int)
        // NetworkVarNames: m_nShadowCascadeResolution2 (int)
        // NetworkVarNames: m_nShadowCascadeResolution3 (int)
        // NetworkVarNames: m_bUsesBakedShadowing (bool)
        // NetworkVarNames: m_nShadowPriority (int)
        // NetworkVarNames: m_nBakedShadowIndex (int)
        // NetworkVarNames: m_bRenderToCubemaps (bool)
        // NetworkVarNames: m_nDirectLight (int)
        // NetworkVarNames: m_nIndirectLight (int)
        // NetworkVarNames: m_flFadeMinDist (float)
        // NetworkVarNames: m_flFadeMaxDist (float)
        // NetworkVarNames: m_flShadowFadeMinDist (float)
        // NetworkVarNames: m_flShadowFadeMaxDist (float)
        // NetworkVarNames: m_bEnabled (bool)
        // NetworkVarNames: m_bFlicker (bool)
        // NetworkVarNames: m_bPrecomputedFieldsValid (bool)
        // NetworkVarNames: m_vPrecomputedBoundsMins (Vector)
        // NetworkVarNames: m_vPrecomputedBoundsMaxs (Vector)
        // NetworkVarNames: m_vPrecomputedOBBOrigin (Vector)
        // NetworkVarNames: m_vPrecomputedOBBAngles (QAngle)
        // NetworkVarNames: m_vPrecomputedOBBExtent (Vector)
        // NetworkVarNames: m_flPrecomputedMaxRange (float)
        // NetworkVarNames: m_nFogLightingMode (int)
        // NetworkVarNames: m_flFogContributionStength (float)
        // NetworkVarNames: m_flNearClipPlane (float)
        // NetworkVarNames: m_SkyColor (Color)
        // NetworkVarNames: m_flSkyIntensity (float)
        // NetworkVarNames: m_SkyAmbientBounce (Color)
        // NetworkVarNames: m_bUseSecondaryColor (bool)
        // NetworkVarNames: m_bMixedShadows (bool)
        // NetworkVarNames: m_flLightStyleStartTime (GameTime_t)
        // NetworkVarNames: m_flCapsuleLength (float)
        // NetworkVarNames: m_flMinRoughness (float)
        public static class CLightComponent {
            public const nint __m_pChainEntity = 0x58; // CNetworkVarChainer
            public const nint m_Color = 0x95; // Color
            public const nint m_SecondaryColor = 0x99; // Color
            public const nint m_flBrightness = 0xA0; // float32
            public const nint m_flBrightnessScale = 0xA4; // float32
            public const nint m_flBrightnessMult = 0xA8; // float32
            public const nint m_flRange = 0xAC; // float32
            public const nint m_flFalloff = 0xB0; // float32
            public const nint m_flAttenuation0 = 0xB4; // float32
            public const nint m_flAttenuation1 = 0xB8; // float32
            public const nint m_flAttenuation2 = 0xBC; // float32
            public const nint m_flTheta = 0xC0; // float32
            public const nint m_flPhi = 0xC4; // float32
            public const nint m_hLightCookie = 0xC8; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_nCascades = 0xD0; // int32
            public const nint m_nCastShadows = 0xD4; // int32
            public const nint m_nShadowWidth = 0xD8; // int32
            public const nint m_nShadowHeight = 0xDC; // int32
            public const nint m_bRenderDiffuse = 0xE0; // bool
            public const nint m_nRenderSpecular = 0xE4; // int32
            public const nint m_bRenderTransmissive = 0xE8; // bool
            public const nint m_flOrthoLightWidth = 0xEC; // float32
            public const nint m_flOrthoLightHeight = 0xF0; // float32
            public const nint m_nStyle = 0xF4; // int32
            public const nint m_Pattern = 0xF8; // CUtlString
            public const nint m_nCascadeRenderStaticObjects = 0x100; // int32
            public const nint m_flShadowCascadeCrossFade = 0x104; // float32
            public const nint m_flShadowCascadeDistanceFade = 0x108; // float32
            public const nint m_flShadowCascadeDistance0 = 0x10C; // float32
            public const nint m_flShadowCascadeDistance1 = 0x110; // float32
            public const nint m_flShadowCascadeDistance2 = 0x114; // float32
            public const nint m_flShadowCascadeDistance3 = 0x118; // float32
            public const nint m_nShadowCascadeResolution0 = 0x11C; // int32
            public const nint m_nShadowCascadeResolution1 = 0x120; // int32
            public const nint m_nShadowCascadeResolution2 = 0x124; // int32
            public const nint m_nShadowCascadeResolution3 = 0x128; // int32
            public const nint m_bUsesBakedShadowing = 0x12C; // bool
            public const nint m_nShadowPriority = 0x130; // int32
            public const nint m_nBakedShadowIndex = 0x134; // int32
            public const nint m_bRenderToCubemaps = 0x138; // bool
            public const nint m_nDirectLight = 0x13C; // int32
            public const nint m_nIndirectLight = 0x140; // int32
            public const nint m_flFadeMinDist = 0x144; // float32
            public const nint m_flFadeMaxDist = 0x148; // float32
            public const nint m_flShadowFadeMinDist = 0x14C; // float32
            public const nint m_flShadowFadeMaxDist = 0x150; // float32
            public const nint m_bEnabled = 0x154; // bool
            public const nint m_bFlicker = 0x155; // bool
            public const nint m_bPrecomputedFieldsValid = 0x156; // bool
            public const nint m_vPrecomputedBoundsMins = 0x158; // Vector
            public const nint m_vPrecomputedBoundsMaxs = 0x164; // Vector
            public const nint m_vPrecomputedOBBOrigin = 0x170; // Vector
            public const nint m_vPrecomputedOBBAngles = 0x17C; // QAngle
            public const nint m_vPrecomputedOBBExtent = 0x188; // Vector
            public const nint m_flPrecomputedMaxRange = 0x194; // float32
            public const nint m_nFogLightingMode = 0x198; // int32
            public const nint m_flFogContributionStength = 0x19C; // float32
            public const nint m_flNearClipPlane = 0x1A0; // float32
            public const nint m_SkyColor = 0x1A4; // Color
            public const nint m_flSkyIntensity = 0x1A8; // float32
            public const nint m_SkyAmbientBounce = 0x1AC; // Color
            public const nint m_bUseSecondaryColor = 0x1B0; // bool
            public const nint m_bMixedShadows = 0x1B1; // bool
            public const nint m_flLightStyleStartTime = 0x1B4; // GameTime_t
            public const nint m_flCapsuleLength = 0x1B8; // float32
            public const nint m_flMinRoughness = 0x1BC; // float32
            public const nint m_bPvsModifyEntity = 0x1D0; // bool
        }
        // Parent: None
        // Fields count: 1
        public static class CNetworkTransmitComponent {
            public const nint m_nTransmitStateOwnedCounter = 0x2C4; // uint8
        }
        // Parent: CEntityComponent
        // Fields count: 5
        public static class CRenderComponent {
            public const nint __m_pChainEntity = 0x10; // CNetworkVarChainer
            public const nint m_bIsRenderingWithViewModels = 0x50; // bool
            public const nint m_nSplitscreenFlags = 0x54; // uint32
            public const nint m_bEnableRendering = 0x60; // bool
            public const nint m_bInterpolationReadyToDraw = 0xC0; // bool
        }
        // Parent: None
        // Fields count: 0
        public static class CAnimEventListenerBase {
        }
        // Parent: CAnimEventListenerBase
        // Fields count: 0
        public static class CAnimEventListener {
        }
        // Parent: CAnimEventListenerBase
        // Fields count: 0
        public static class CAnimEventQueueListener {
        }
        // Parent: None
        // Fields count: 1
        public static class CBuoyancyHelper {
            public const nint m_flFluidDensity = 0x18; // float32
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MPropertyCustomEditor
        public static class CSkillFloat {
            public const nint m_pValue = 0x0; // float32[4]
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MPropertyCustomEditor
        public static class CSkillInt {
            public const nint m_pValue = 0x0; // int32[4]
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSkillDamage {
            public const nint m_flDamage = 0x0; // CSkillFloat
            public const nint m_flPhysicsForceDamage = 0x10; // float32
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MPropertyCustomEditor
        public static class CRemapFloat {
            public const nint m_pValue = 0x0; // float32[4]
        }
        // Parent: None
        // Fields count: 2
        public static class CScriptUniformRandomStream {
            public const nint m_hScriptScope = 0x8; // HSCRIPT
            public const nint m_nInitialSeed = 0x9C; // int32
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseProvideFeatureTag
        // MPulseLibraryBindings
        public static class CBasePlayerControllerAPI {
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // NetworkVarNames: nType (FixAngleSet_t)
        // NetworkVarNames: qAngle (QAngle)
        // NetworkVarNames: nIndex (uint32)
        public static class ViewAngleServerChange_t {
            public const nint nType = 0x30; // FixAngleSet_t
            public const nint qAngle = 0x34; // QAngle
            public const nint nIndex = 0x40; // uint32
        }
        // Parent: None
        // Fields count: 2
        public static class CBreakableStageHelper {
            public const nint m_nCurrentStage = 0x8; // int32
            public const nint m_nStageCount = 0xC; // int32
        }
        // Parent: None
        // Fields count: 12
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CommandToolCommand_t {
            public const nint m_bEnabled = 0x0; // bool
            public const nint m_bOpened = 0x1; // bool
            public const nint m_InternalId = 0x4; // uint32
            public const nint m_ShortName = 0x8; // CUtlString
            public const nint m_ExecMode = 0x10; // CommandExecMode_t
            public const nint m_SpawnGroup = 0x18; // CUtlString
            public const nint m_PeriodicExecDelay = 0x20; // float32
            public const nint m_SpecType = 0x24; // CommandEntitySpecType_t
            public const nint m_EntitySpec = 0x28; // CUtlString
            public const nint m_Commands = 0x30; // CUtlString
            public const nint m_SetDebugBits = 0x38; // DebugOverlayBits_t
            public const nint m_ClearDebugBits = 0x40; // DebugOverlayBits_t
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseProvideFeatureTag
        // MPulseLibraryBindings
        public static class CDynamicPropAPI {
        }
        // Parent: None
        // Fields count: 1
        public static class CPlayerPawnComponent {
            public const nint __m_pChainEntity = 0x8; // CNetworkVarChainer
        }
        // Parent: None
        // Fields count: 1
        public static class CPlayerControllerComponent {
            public const nint __m_pChainEntity = 0x8; // CNetworkVarChainer
        }
        // Parent: CPlayerPawnComponent
        // Fields count: 0
        public static class CPlayer_AutoaimServices {
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // NetworkVarNames: localSound (Vector)
        // NetworkVarNames: soundscapeIndex (int32)
        // NetworkVarNames: localBits (uint8)
        // NetworkVarNames: soundscapeEntityListIndex (int)
        // NetworkVarNames: soundEventHash (uint32)
        public static class audioparams_t {
            public const nint localSound = 0x8; // Vector[8]
            public const nint soundscapeIndex = 0x68; // int32
            public const nint localBits = 0x6C; // uint8
            public const nint soundscapeEntityListIndex = 0x70; // int32
            public const nint soundEventHash = 0x74; // uint32
        }
        // Parent: CPlayerPawnComponent
        // Fields count: 12
        //
        // Metadata:
        // NetworkVarNames: m_vecCsViewPunchAngle (QAngle)
        // NetworkVarNames: m_nCsViewPunchAngleTick (GameTick_t)
        // NetworkVarNames: m_flCsViewPunchAngleTickRatio (float32)
        // NetworkVarNames: m_PlayerFog (fogplayerparams_t)
        // NetworkVarNames: m_hColorCorrectionCtrl (CHandle< CColorCorrection>)
        // NetworkVarNames: m_hViewEntity (CHandle< CBaseEntity>)
        // NetworkVarNames: m_hTonemapController (CHandle< CTonemapController2>)
        // NetworkVarNames: m_audio (audioparams_t)
        // NetworkVarNames: m_PostProcessingVolumes (CHandle<CPostProcessingVolume>)
        public static class CPlayer_CameraServices {
            public const nint m_vecCsViewPunchAngle = 0x40; // QAngle
            public const nint m_nCsViewPunchAngleTick = 0x4C; // GameTick_t
            public const nint m_flCsViewPunchAngleTickRatio = 0x50; // float32
            public const nint m_PlayerFog = 0x58; // fogplayerparams_t
            public const nint m_hColorCorrectionCtrl = 0x98; // CHandle<CColorCorrection>
            public const nint m_hViewEntity = 0x9C; // CHandle<CBaseEntity>
            public const nint m_hTonemapController = 0xA0; // CHandle<CTonemapController2>
            public const nint m_audio = 0xA8; // audioparams_t
            public const nint m_PostProcessingVolumes = 0x120; // CNetworkUtlVectorBase<CHandle<CPostProcessingVolume>>
            public const nint m_flOldPlayerZ = 0x138; // float32
            public const nint m_flOldPlayerViewOffsetZ = 0x13C; // float32
            public const nint m_hTriggerSoundscapeList = 0x158; // CUtlVector<CHandle<CEnvSoundscapeTriggerable>>
        }
        // Parent: CPlayerPawnComponent
        // Fields count: 0
        public static class CPlayer_FlashlightServices {
        }
        // Parent: CPlayerPawnComponent
        // Fields count: 0
        public static class CPlayer_ItemServices {
        }
        // Parent: CPlayerPawnComponent
        // Fields count: 15
        //
        // Metadata:
        // NetworkVarNames: m_nToggleButtonDownMask (ButtonBitMask_t)
        // NetworkVarNames: m_flMaxspeed (float32)
        // NetworkVarNames: m_arrForceSubtickMoveWhen (float32)
        public static class CPlayer_MovementServices {
            public const nint m_nImpulse = 0x40; // int32
            public const nint m_nButtons = 0x48; // CInButtonState
            public const nint m_nQueuedButtonDownMask = 0x68; // uint64
            public const nint m_nQueuedButtonChangeMask = 0x70; // uint64
            public const nint m_nButtonDoublePressed = 0x78; // uint64
            public const nint m_pButtonPressedCmdNumber = 0x80; // uint32[64]
            public const nint m_nLastCommandNumberProcessed = 0x180; // uint32
            public const nint m_nToggleButtonDownMask = 0x188; // uint64
            public const nint m_flMaxspeed = 0x198; // float32
            public const nint m_arrForceSubtickMoveWhen = 0x19C; // float32[4]
            public const nint m_flForwardMove = 0x1AC; // float32
            public const nint m_flLeftMove = 0x1B0; // float32
            public const nint m_flUpMove = 0x1B4; // float32
            public const nint m_vecLastMovementImpulses = 0x1B8; // Vector
            public const nint m_vecOldViewAngles = 0x1C4; // QAngle
        }
        // Parent: CPlayer_MovementServices
        // Fields count: 14
        //
        // Metadata:
        // NetworkVarNames: m_flFallVelocity (float32)
        // NetworkVarNames: m_bInCrouch (bool)
        // NetworkVarNames: m_nCrouchState (uint32)
        // NetworkVarNames: m_flCrouchTransitionStartTime (GameTime_t)
        // NetworkVarNames: m_bDucked (bool)
        // NetworkVarNames: m_bDucking (bool)
        // NetworkVarNames: m_bInDuckJump (bool)
        public static class CPlayer_MovementServices_Humanoid {
            public const nint m_flStepSoundTime = 0x1D8; // float32
            public const nint m_flFallVelocity = 0x1DC; // float32
            public const nint m_bInCrouch = 0x1E0; // bool
            public const nint m_nCrouchState = 0x1E4; // uint32
            public const nint m_flCrouchTransitionStartTime = 0x1E8; // GameTime_t
            public const nint m_bDucked = 0x1EC; // bool
            public const nint m_bDucking = 0x1ED; // bool
            public const nint m_bInDuckJump = 0x1EE; // bool
            public const nint m_groundNormal = 0x1F0; // Vector
            public const nint m_flSurfaceFriction = 0x1FC; // float32
            public const nint m_surfaceProps = 0x200; // CUtlStringToken
            public const nint m_nStepside = 0x210; // int32
            public const nint m_iTargetVolume = 0x214; // int32
            public const nint m_vecSmoothedVelocity = 0x218; // Vector
        }
        // Parent: CPlayerPawnComponent
        // Fields count: 4
        //
        // Metadata:
        // NetworkVarNames: m_iObserverMode (uint8)
        // NetworkVarNames: m_hObserverTarget (CHandle< CBaseEntity>)
        public static class CPlayer_ObserverServices {
            public const nint m_iObserverMode = 0x40; // uint8
            public const nint m_hObserverTarget = 0x44; // CHandle<CBaseEntity>
            public const nint m_iObserverLastMode = 0x48; // ObserverMode_t
            public const nint m_bForcedObserverMode = 0x4C; // bool
        }
        // Parent: CPlayerPawnComponent
        // Fields count: 0
        public static class CPlayer_UseServices {
        }
        // Parent: CPlayerPawnComponent
        // Fields count: 0
        public static class CPlayer_WaterServices {
        }
        // Parent: CPlayerPawnComponent
        // Fields count: 5
        //
        // Metadata:
        // NetworkVarNames: m_hMyWeapons (CHandle< CBasePlayerWeapon >)
        // NetworkVarNames: m_hActiveWeapon (CHandle< CBasePlayerWeapon>)
        // NetworkVarNames: m_hLastWeapon (CHandle< CBasePlayerWeapon>)
        // NetworkVarNames: m_iAmmo (uint16)
        public static class CPlayer_WeaponServices {
            public const nint m_hMyWeapons = 0x40; // CNetworkUtlVectorBase<CHandle<CBasePlayerWeapon>>
            public const nint m_hActiveWeapon = 0x58; // CHandle<CBasePlayerWeapon>
            public const nint m_hLastWeapon = 0x5C; // CHandle<CBasePlayerWeapon>
            public const nint m_iAmmo = 0x60; // uint16[32]
            public const nint m_bPreventWeaponPickup = 0xA0; // bool
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class AmmoTypeInfo_t {
            public const nint m_nMaxCarry = 0x10; // int32
            public const nint m_nSplashSize = 0x1C; // CRangeInt
            public const nint m_nFlags = 0x24; // AmmoFlags_t
            public const nint m_flMass = 0x28; // float32
            public const nint m_flSpeed = 0x2C; // CRangeFloat
        }
        // Parent: None
        // Fields count: 0
        public static class CAnimGraphControllerBase {
        }
        // Parent: CBodyComponentSkeletonInstance
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_animationController (CBaseAnimGraphController)
        public static class CBodyComponentBaseAnimGraph {
            public const nint m_animationController = 0x478; // CBaseAnimGraphController
            public const nint __m_pChainEntity = 0x980; // CNetworkVarChainer
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_ID (CUtlStringToken)
        // NetworkVarNames: m_Values (Vector4D)
        public static class EntityRenderAttribute_t {
            public const nint m_ID = 0x30; // CUtlStringToken
            public const nint m_Values = 0x34; // Vector4D
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // NetworkVarNames: m_Handle (ModelConfigHandle_t)
        // NetworkVarNames: m_Name (string_t)
        // NetworkVarNames: m_AssociatedEntities (CHandle< CBaseModelEntity >)
        // NetworkVarNames: m_AssociatedEntityNames (string_t)
        public static class ActiveModelConfig_t {
            public const nint m_Handle = 0x28; // ModelConfigHandle_t
            public const nint m_Name = 0x30; // CUtlSymbolLarge
            public const nint m_AssociatedEntities = 0x38; // CNetworkUtlVectorBase<CHandle<CBaseModelEntity>>
            public const nint m_AssociatedEntityNames = 0x50; // CNetworkUtlVectorBase<CUtlSymbolLarge>
        }
        // Parent: CBodyComponentSkeletonInstance
        // Fields count: 1
        public static class CBodyComponentBaseModelEntity {
            public const nint __m_pChainEntity = 0x478; // CNetworkVarChainer
        }
        // Parent: None
        // Fields count: 2
        public static class CRopeOverlapHit {
            public const nint m_hEntity = 0x0; // CHandle<CBaseEntity>
            public const nint m_vecOverlappingLinks = 0x8; // CUtlVector<int32>
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_hOwner (CEntityHandle)
        // NetworkVarNames: m_name (CUtlStringToken)
        public static class CGameSceneNodeHandle {
            public const nint m_hOwner = 0x8; // CEntityHandle
            public const nint m_name = 0xC; // CUtlStringToken
        }
        // Parent: None
        // Fields count: 32
        //
        // Metadata:
        // NetworkVarNames: m_hParent (CGameSceneNodeHandle)
        // NetworkVarNames: m_vecOrigin (CNetworkOriginCellCoordQuantizedVector)
        // NetworkVarNames: m_angRotation (QAngle)
        // NetworkVarNames: m_flScale (float)
        // NetworkVarNames: m_name (CUtlStringToken)
        // NetworkVarNames: m_hierarchyAttachName (CUtlStringToken)
        public static class CGameSceneNode {
            public const nint m_nodeToWorld = 0x10; // CTransform
            public const nint m_pOwner = 0x30; // CEntityInstance*
            public const nint m_pParent = 0x38; // CGameSceneNode*
            public const nint m_pChild = 0x40; // CGameSceneNode*
            public const nint m_pNextSibling = 0x48; // CGameSceneNode*
            public const nint m_hParent = 0x70; // CGameSceneNodeHandle
            public const nint m_vecOrigin = 0x80; // CNetworkOriginCellCoordQuantizedVector
            public const nint m_angRotation = 0xB8; // QAngle
            public const nint m_flScale = 0xC4; // float32
            public const nint m_vecAbsOrigin = 0xC8; // Vector
            public const nint m_angAbsRotation = 0xD4; // QAngle
            public const nint m_flAbsScale = 0xE0; // float32
            public const nint m_nParentAttachmentOrBone = 0xE4; // int16
            public const nint m_bDebugAbsOriginChanges = 0xE6; // bool
            public const nint m_bDormant = 0xE7; // bool
            public const nint m_bForceParentToBeNetworked = 0xE8; // bool
            public const nint m_bDirtyHierarchy = 0x0; // bitfield:1
            public const nint m_bDirtyBoneMergeInfo = 0x0; // bitfield:1
            public const nint m_bNetworkedPositionChanged = 0x0; // bitfield:1
            public const nint m_bNetworkedAnglesChanged = 0x0; // bitfield:1
            public const nint m_bNetworkedScaleChanged = 0x0; // bitfield:1
            public const nint m_bWillBeCallingPostDataUpdate = 0x0; // bitfield:1
            public const nint m_bBoneMergeFlex = 0x0; // bitfield:1
            public const nint m_nLatchAbsOrigin = 0x0; // bitfield:2
            public const nint m_bDirtyBoneMergeBoneToRoot = 0x0; // bitfield:1
            public const nint m_nHierarchicalDepth = 0xEB; // uint8
            public const nint m_nHierarchyType = 0xEC; // uint8
            public const nint m_nDoNotSetAnimTimeInInvalidatePhysicsCount = 0xED; // uint8
            public const nint m_name = 0xF0; // CUtlStringToken
            public const nint m_hierarchyAttachName = 0x140; // CUtlStringToken
            public const nint m_flZOffset = 0x144; // float32
            public const nint m_vRenderOrigin = 0x148; // Vector
        }
        // Parent: None
        // Fields count: 0
        public static class IChoreoServices {
        }
        // Parent: None
        // Fields count: 1
        public static class CInButtonState {
            public const nint m_pButtonStates = 0x8; // uint64[3]
        }
        // Parent: None
        // Fields count: 6
        public static class SequenceHistory_t {
            public const nint m_hSequence = 0x0; // HSequence
            public const nint m_flSeqStartTime = 0x4; // GameTime_t
            public const nint m_flSeqFixedCycle = 0x8; // float32
            public const nint m_nSeqLoopMode = 0xC; // AnimLoopMode_t
            public const nint m_flPlaybackRate = 0x10; // float32
            public const nint m_flCyclesPerSecond = 0x14; // float32
        }
        // Parent: None
        // Fields count: 0
        public static class ISkeletonAnimationController {
        }
        // Parent: ISkeletonAnimationController
        // Fields count: 1
        public static class CSkeletonAnimationController {
            public const nint m_pSkeletonInstance = 0x8; // CSkeletonInstance*
        }
        // Parent: None
        // Fields count: 8
        //
        // Metadata:
        // NetworkVarNames: m_hSequence (HSequence)
        // NetworkVarNames: m_flPrevCycle (float32)
        // NetworkVarNames: m_flCycle (float32)
        public static class CNetworkedSequenceOperation {
            public const nint m_hSequence = 0x8; // HSequence
            public const nint m_flPrevCycle = 0xC; // float32
            public const nint m_flCycle = 0x10; // float32
            public const nint m_flWeight = 0x14; // CNetworkedQuantizedFloat
            public const nint m_bSequenceChangeNetworked = 0x1C; // bool
            public const nint m_bDiscontinuity = 0x1D; // bool
            public const nint m_flPrevCycleFromDiscontinuity = 0x20; // float32
            public const nint m_flPrevCycleForAnimEventDetection = 0x24; // float32
        }
        // Parent: None
        // Fields count: 7
        //
        // Metadata:
        // NetworkVarNames: m_hModel (HModelStrong)
        // NetworkVarNames: m_bClientClothCreationSuppressed (bool)
        // NetworkVarNames: m_MeshGroupMask (MeshGroupMask_t)
        // NetworkVarNames: m_nIdealMotionType (int8)
        public static class CModelState {
            public const nint m_hModel = 0xA0; // CStrongHandle<InfoForResourceTypeCModel>
            public const nint m_ModelName = 0xA8; // CUtlSymbolLarge
            public const nint m_bClientClothCreationSuppressed = 0xE8; // bool
            public const nint m_MeshGroupMask = 0x180; // uint64
            public const nint m_nIdealMotionType = 0x212; // int8
            public const nint m_nForceLOD = 0x213; // int8
            public const nint m_nClothUpdateFlags = 0x214; // int8
        }
        // Parent: CGameSceneNode
        // Fields count: 8
        //
        // Metadata:
        // NetworkVarNames: m_modelState (CModelState)
        // NetworkVarNames: m_bIsAnimationEnabled (bool)
        // NetworkVarNames: m_bUseParentRenderBounds (bool)
        // NetworkVarNames: m_materialGroup (CUtlStringToken)
        // NetworkVarNames: m_nHitboxSet (uint8)
        public static class CSkeletonInstance {
            public const nint m_modelState = 0x160; // CModelState
            public const nint m_bIsAnimationEnabled = 0x380; // bool
            public const nint m_bUseParentRenderBounds = 0x381; // bool
            public const nint m_bDisableSolidCollisionsForHierarchy = 0x382; // bool
            public const nint m_bDirtyMotionType = 0x0; // bitfield:1
            public const nint m_bIsGeneratingLatchedParentSpaceState = 0x0; // bitfield:1
            public const nint m_materialGroup = 0x384; // CUtlStringToken
            public const nint m_nHitboxSet = 0x388; // uint8
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_timestamp (GameTime_t)
        // NetworkVarNames: m_nWorldGroupId (WorldGroupId_t)
        public static class IntervalTimer {
            public const nint m_timestamp = 0x8; // GameTime_t
            public const nint m_nWorldGroupId = 0xC; // WorldGroupId_t
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // NetworkVarNames: m_duration (float32)
        // NetworkVarNames: m_timestamp (GameTime_t)
        // NetworkVarNames: m_timescale (float32)
        // NetworkVarNames: m_nWorldGroupId (WorldGroupId_t)
        public static class CountdownTimer {
            public const nint m_duration = 0x8; // float32
            public const nint m_timestamp = 0xC; // GameTime_t
            public const nint m_timescale = 0x10; // float32
            public const nint m_nWorldGroupId = 0x14; // WorldGroupId_t
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // NetworkVarNames: m_duration (float32)
        // NetworkVarNames: m_timestamp (float32)
        // NetworkVarNames: m_timescale (float32)
        public static class EngineCountdownTimer {
            public const nint m_duration = 0x8; // float32
            public const nint m_timestamp = 0xC; // float32
            public const nint m_timescale = 0x10; // float32
        }
        // Parent: IntervalTimer
        // Fields count: 7
        //
        // Metadata:
        // NetworkVarNames: m_flValues (float)
        // NetworkVarNames: m_nValueCounts (int)
        // NetworkVarNames: m_nBucketCount (int)
        // NetworkVarNames: m_flInterval (float)
        // NetworkVarNames: m_flFinalValue (float)
        // NetworkVarNames: m_nCompressionType (TimelineCompression_t)
        // NetworkVarNames: m_bStopped (bool)
        public static class CTimeline {
            public const nint m_flValues = 0x10; // float32[64]
            public const nint m_nValueCounts = 0x110; // int32[64]
            public const nint m_nBucketCount = 0x210; // int32
            public const nint m_flInterval = 0x214; // float32
            public const nint m_flFinalValue = 0x218; // float32
            public const nint m_nCompressionType = 0x21C; // TimelineCompression_t
            public const nint m_bStopped = 0x220; // bool
        }
        // Parent: None
        // Fields count: 24
        //
        // Metadata:
        // NetworkVarNames: m_PredNetBoolVariables (uint32)
        // NetworkVarNames: m_PredNetByteVariables (byte)
        // NetworkVarNames: m_PredNetUInt16Variables (uint16)
        // NetworkVarNames: m_PredNetIntVariables (int32)
        // NetworkVarNames: m_PredNetUInt32Variables (uint32)
        // NetworkVarNames: m_PredNetUInt64Variables (uint64)
        // NetworkVarNames: m_PredNetFloatVariables (float)
        // NetworkVarNames: m_PredNetVectorVariables (Vector)
        // NetworkVarNames: m_PredNetQuaternionVariables (Quaternion)
        // NetworkVarNames: m_PredNetGlobalSymbolVariables (CGlobalSymbol)
        // NetworkVarNames: m_OwnerOnlyPredNetBoolVariables (uint32)
        // NetworkVarNames: m_OwnerOnlyPredNetByteVariables (byte)
        // NetworkVarNames: m_OwnerOnlyPredNetUInt16Variables (uint16)
        // NetworkVarNames: m_OwnerOnlyPredNetIntVariables (int32)
        // NetworkVarNames: m_OwnerOnlyPredNetUInt32Variables (uint32)
        // NetworkVarNames: m_OwnerOnlyPredNetUInt64Variables (uint64)
        // NetworkVarNames: m_OwnerOnlyPredNetFloatVariables (float)
        // NetworkVarNames: m_OwnerOnlyPredNetVectorVariables (Vector)
        // NetworkVarNames: m_OwnerOnlyPredNetQuaternionVariables (Quaternion)
        // NetworkVarNames: m_OwnerOnlyPredNetGlobalSymbolVariables (CGlobalSymbol)
        // NetworkVarNames: m_nBoolVariablesCount (int)
        // NetworkVarNames: m_nOwnerOnlyBoolVariablesCount (int)
        // NetworkVarNames: m_nRandomSeedOffset (int)
        // NetworkVarNames: m_flLastTeleportTime (float)
        public static class CAnimGraphNetworkedVariables {
            public const nint m_PredNetBoolVariables = 0x8; // CNetworkUtlVectorBase<uint32>
            public const nint m_PredNetByteVariables = 0x20; // CNetworkUtlVectorBase<uint8>
            public const nint m_PredNetUInt16Variables = 0x38; // CNetworkUtlVectorBase<uint16>
            public const nint m_PredNetIntVariables = 0x50; // CNetworkUtlVectorBase<int32>
            public const nint m_PredNetUInt32Variables = 0x68; // CNetworkUtlVectorBase<uint32>
            public const nint m_PredNetUInt64Variables = 0x80; // CNetworkUtlVectorBase<uint64>
            public const nint m_PredNetFloatVariables = 0x98; // CNetworkUtlVectorBase<float32>
            public const nint m_PredNetVectorVariables = 0xB0; // CNetworkUtlVectorBase<Vector>
            public const nint m_PredNetQuaternionVariables = 0xC8; // CNetworkUtlVectorBase<Quaternion>
            public const nint m_PredNetGlobalSymbolVariables = 0xE0; // CNetworkUtlVectorBase<CGlobalSymbol>
            public const nint m_OwnerOnlyPredNetBoolVariables = 0xF8; // CNetworkUtlVectorBase<uint32>
            public const nint m_OwnerOnlyPredNetByteVariables = 0x110; // CNetworkUtlVectorBase<uint8>
            public const nint m_OwnerOnlyPredNetUInt16Variables = 0x128; // CNetworkUtlVectorBase<uint16>
            public const nint m_OwnerOnlyPredNetIntVariables = 0x140; // CNetworkUtlVectorBase<int32>
            public const nint m_OwnerOnlyPredNetUInt32Variables = 0x158; // CNetworkUtlVectorBase<uint32>
            public const nint m_OwnerOnlyPredNetUInt64Variables = 0x170; // CNetworkUtlVectorBase<uint64>
            public const nint m_OwnerOnlyPredNetFloatVariables = 0x188; // CNetworkUtlVectorBase<float32>
            public const nint m_OwnerOnlyPredNetVectorVariables = 0x1A0; // CNetworkUtlVectorBase<Vector>
            public const nint m_OwnerOnlyPredNetQuaternionVariables = 0x1B8; // CNetworkUtlVectorBase<Quaternion>
            public const nint m_OwnerOnlyPredNetGlobalSymbolVariables = 0x1D0; // CNetworkUtlVectorBase<CGlobalSymbol>
            public const nint m_nBoolVariablesCount = 0x1E8; // int32
            public const nint m_nOwnerOnlyBoolVariablesCount = 0x1EC; // int32
            public const nint m_nRandomSeedOffset = 0x1F0; // int32
            public const nint m_flLastTeleportTime = 0x1F4; // float32
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPropertyCustomFGDType
        public static class CFootstepTableHandle {
        }
        // Parent: None
        // Fields count: 8
        public static class ResponseFollowup {
            public const nint followup_concept = 0x0; // char*
            public const nint followup_contexts = 0x8; // char*
            public const nint followup_delay = 0x10; // float32
            public const nint followup_target = 0x14; // char*
            public const nint followup_entityiotarget = 0x1C; // char*
            public const nint followup_entityioinput = 0x24; // char*
            public const nint followup_entityiodelay = 0x2C; // float32
            public const nint bFired = 0x30; // bool
        }
        // Parent: None
        // Fields count: 3
        public static class ResponseParams {
            public const nint odds = 0x10; // int16
            public const nint flags = 0x12; // int16
            public const nint m_pFollowup = 0x14; // ResponseFollowup*
        }
        // Parent: None
        // Fields count: 2
        public static class CResponseCriteriaSet {
            public const nint m_nNumPrefixedContexts = 0x28; // int32
            public const nint m_bOverrideOnAppend = 0x2C; // bool
        }
        // Parent: None
        // Fields count: 10
        public static class CRR_Response {
            public const nint m_Type = 0x0; // uint8
            public const nint m_szResponseName = 0x1; // char[192]
            public const nint m_szMatchingRule = 0xC1; // char[128]
            public const nint m_Params = 0x141; // ResponseParams
            public const nint m_fMatchScore = 0x160; // float32
            public const nint m_szSpeakerContext = 0x168; // char*
            public const nint m_szWorldContext = 0x170; // char*
            public const nint m_Followup = 0x178; // ResponseFollowup
            public const nint m_pchCriteriaNames = 0x1B0; // CUtlVector<CUtlSymbol>
            public const nint m_pchCriteriaValues = 0x1C8; // CUtlVector<char*>
        }
        // Parent: None
        // Fields count: 2
        public static class ConceptHistory_t {
            public const nint timeSpoken = 0x0; // float32
            public const nint m_response = 0x8; // CRR_Response
        }
        // Parent: None
        // Fields count: 9
        public static class CAI_Expresser {
            public const nint m_flStopTalkTime = 0x38; // GameTime_t
            public const nint m_flStopTalkTimeWithoutDelay = 0x3C; // GameTime_t
            public const nint m_flBlockedTalkTime = 0x40; // GameTime_t
            public const nint m_voicePitch = 0x44; // int32
            public const nint m_flLastTimeAcceptedSpeak = 0x48; // GameTime_t
            public const nint m_bAllowSpeakingInterrupts = 0x4C; // bool
            public const nint m_bConsiderSceneInvolvementAsSpeech = 0x4D; // bool
            public const nint m_nLastSpokenPriority = 0x50; // int32
            public const nint m_pOuter = 0x58; // CBaseFlex*
        }
        // Parent: None
        // Fields count: 1
        public static class CResponseQueue {
            public const nint m_ExpresserTargets = 0x48; // CUtlVector<CAI_Expresser*>
        }
        // Parent: None
        // Fields count: 5
        public static class CResponseQueue__CDeferredResponse {
            public const nint m_contexts = 0x8; // CResponseCriteriaSet
            public const nint m_fDispatchTime = 0x38; // float32
            public const nint m_hIssuer = 0x3C; // CHandle<CBaseEntity>
            public const nint m_response = 0x48; // CRR_Response
            public const nint m_bResponseValid = 0x228; // bool
        }
        // Parent: CAI_Expresser
        // Fields count: 1
        public static class CAI_ExpresserWithFollowup {
            public const nint m_pPostponedFollowup = 0x60; // ResponseFollowup*
        }
        // Parent: CAI_ExpresserWithFollowup
        // Fields count: 1
        public static class CMultiplayer_Expresser {
            public const nint m_bAllowMultipleScenes = 0x70; // bool
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseProvideFeatureTag
        // MPulseLibraryBindings
        public static class CBaseEntityAPI {
        }
        // Parent: None
        // Fields count: 10
        public static class CCommentarySystem {
            public const nint m_bCommentaryConvarsChanging = 0x11; // bool
            public const nint m_bCommentaryEnabledMidGame = 0x12; // bool
            public const nint m_flNextTeleportTime = 0x14; // GameTime_t
            public const nint m_iTeleportStage = 0x18; // int32
            public const nint m_bCheatState = 0x1C; // bool
            public const nint m_bIsFirstSpawnGroupToLoad = 0x1D; // bool
            public const nint m_hCurrentNode = 0x38; // CHandle<CPointCommentaryNode>
            public const nint m_hActiveCommentaryNode = 0x3C; // CHandle<CPointCommentaryNode>
            public const nint m_hLastCommentaryNode = 0x40; // CHandle<CPointCommentaryNode>
            public const nint m_vecNodes = 0x48; // CUtlVector<CHandle<CPointCommentaryNode>>
        }
        // Parent: None
        // Fields count: 1
        public static class CPhysicsShake {
            public const nint m_force = 0x8; // Vector
        }
        // Parent: None
        // Fields count: 16
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CGameScriptedMoveData {
            public const nint m_vAccumulatedRootMotion = 0x0; // Vector
            public const nint m_vDest = 0xC; // Vector
            public const nint m_vSrc = 0x18; // Vector
            public const nint m_angSrc = 0x24; // QAngle
            public const nint m_angDst = 0x30; // QAngle
            public const nint m_angCurrent = 0x3C; // QAngle
            public const nint m_flAngRate = 0x48; // float32
            public const nint m_flDuration = 0x4C; // float32
            public const nint m_flStartTime = 0x50; // GameTime_t
            public const nint m_bActive = 0x54; // bool
            public const nint m_bTeleportOnEnd = 0x55; // bool
            public const nint m_bIgnoreRotation = 0x56; // bool
            public const nint m_nType = 0x58; // ScriptedMoveType_t
            public const nint m_bSuccess = 0x5C; // bool
            public const nint m_nForcedCrouchState = 0x60; // ForcedCrouchState_t
            public const nint m_bIgnoreCollisions = 0x64; // bool
        }
        // Parent: IChoreoServices
        // Fields count: 5
        public static class CGameChoreoServices {
            public const nint m_hOwner = 0x8; // CHandle<CBaseAnimGraph>
            public const nint m_hScriptedSequence = 0xC; // CHandle<CScriptedSequence>
            public const nint m_scriptState = 0x10; // IChoreoServices::ScriptState_t
            public const nint m_choreoState = 0x14; // IChoreoServices::ChoreoState_t
            public const nint m_flTimeStartedState = 0x18; // GameTime_t
        }
        // Parent: None
        // Fields count: 10
        public static class HullFlags_t {
            public const nint m_bHull_Human = 0x0; // bool
            public const nint m_bHull_SmallCentered = 0x1; // bool
            public const nint m_bHull_WideHuman = 0x2; // bool
            public const nint m_bHull_Tiny = 0x3; // bool
            public const nint m_bHull_Medium = 0x4; // bool
            public const nint m_bHull_TinyCentered = 0x5; // bool
            public const nint m_bHull_Large = 0x6; // bool
            public const nint m_bHull_LargeCentered = 0x7; // bool
            public const nint m_bHull_MediumTall = 0x8; // bool
            public const nint m_bHull_Small = 0x9; // bool
        }
        // Parent: None
        // Fields count: 4
        public static class CConstantForceController {
            public const nint m_linear = 0xC; // Vector
            public const nint m_angular = 0x18; // RotationVector
            public const nint m_linearSave = 0x24; // Vector
            public const nint m_angularSave = 0x30; // RotationVector
        }
        // Parent: None
        // Fields count: 4
        public static class CMotorController {
            public const nint m_speed = 0x8; // float32
            public const nint m_maxTorque = 0xC; // float32
            public const nint m_axis = 0x10; // Vector
            public const nint m_inertiaFactor = 0x1C; // float32
        }
        // Parent: None
        // Fields count: 4
        public static class CSoundEnvelope {
            public const nint m_current = 0x0; // float32
            public const nint m_target = 0x4; // float32
            public const nint m_rate = 0x8; // float32
            public const nint m_forceupdate = 0xC; // bool
        }
        // Parent: None
        // Fields count: 2
        public static class CCopyRecipientFilter {
            public const nint m_Flags = 0x8; // int32
            public const nint m_Recipients = 0x10; // CUtlVector<CPlayerSlot>
        }
        // Parent: None
        // Fields count: 13
        public static class CSoundPatch {
            public const nint m_pitch = 0x8; // CSoundEnvelope
            public const nint m_volume = 0x18; // CSoundEnvelope
            public const nint m_shutdownTime = 0x30; // float32
            public const nint m_flLastTime = 0x34; // float32
            public const nint m_iszSoundScriptName = 0x38; // CUtlSymbolLarge
            public const nint m_hEnt = 0x40; // CHandle<CBaseEntity>
            public const nint m_soundEntityIndex = 0x44; // CEntityIndex
            public const nint m_soundOrigin = 0x48; // Vector
            public const nint m_isPlaying = 0x54; // int32
            public const nint m_Filter = 0x58; // CCopyRecipientFilter
            public const nint m_flCloseCaptionDuration = 0x80; // float32
            public const nint m_bUpdatedSoundOrigin = 0x84; // bool
            public const nint m_iszClassName = 0x88; // CUtlSymbolLarge
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseProvideFeatureTag
        // MPulseLibraryBindings
        public static class CTakeDamageInfoAPI {
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MPulseInstanceDomainInfo
        // MPulseLibraryBindings
        // MPulseDomainOptInFeatureTag
        public static class CPulseGraphInstance_ServerEntity {
            public const nint m_pComponent = 0xD8; // CPulseGraphComponentBase*
        }
        // Parent: None
        // Fields count: 4
        public static class CPulseGraphComponentBase {
            public const nint m_hOwner = 0x8; // CHandle<CBaseEntity>
            public const nint m_sNameFixupStaticPrefix = 0x10; // CUtlSymbolLarge
            public const nint m_sNameFixupParent = 0x18; // CUtlSymbolLarge
            public const nint m_sNameFixupLocal = 0x20; // CUtlSymbolLarge
        }
        // Parent: CPulseGraphComponentBase
        // Fields count: 0
        public static class CPulseGraphComponentPointServer {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseLibraryBindings
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CPulseServerFuncs {
        }
        // Parent: CPulseCell_BaseFlow
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CPulseCell_SoundEventStart {
            public const nint m_Type = 0x48; // SoundEventStartType_t
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseLibraryBindings
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CPulseServerFuncs_Sounds {
        }
        // Parent: CPulseCell_BaseYieldingInflow
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Outflow_PlaySceneBase {
            public const nint m_OnFinished = 0x48; // CPulse_ResumePoint
            public const nint m_OnCanceled = 0x58; // CPulse_ResumePoint
            public const nint m_Triggers = 0x68; // CUtlVector<CPulse_OutflowConnection>
        }
        // Parent: None
        // Fields count: 1
        public static class CPulseCell_Outflow_PlaySceneBase__CursorState_t {
            public const nint m_sceneInstance = 0x0; // CHandle<CBaseEntity>
        }
        // Parent: None
        // Fields count: 9
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class PulseScriptedSequenceData_t {
            public const nint m_nActorID = 0x0; // int32
            public const nint m_szPreIdleSequence = 0x8; // CUtlString
            public const nint m_szEntrySequence = 0x10; // CUtlString
            public const nint m_szSequence = 0x18; // CUtlString
            public const nint m_szExitSequence = 0x20; // CUtlString
            public const nint m_bLoopPreIdleSequence = 0x28; // bool
            public const nint m_bLoopActionSequence = 0x29; // bool
            public const nint m_bLoopPostIdleSequence = 0x2A; // bool
            public const nint m_bIgnoreLookAt = 0x2B; // bool
        }
        // Parent: None
        // Fields count: 1
        public static class CPulseCell_Outflow_ScriptedSequence__CursorState_t {
            public const nint m_scriptedSequence = 0x0; // CHandle<CBaseEntity>
        }
        // Parent: CEntityComponent
        // Fields count: 0
        public static class CTouchExpansionComponent {
        }
        // Parent: None
        // Fields count: 25
        public static class dynpitchvol_base_t {
            public const nint preset = 0x0; // int32
            public const nint pitchrun = 0x4; // int32
            public const nint pitchstart = 0x8; // int32
            public const nint spinup = 0xC; // int32
            public const nint spindown = 0x10; // int32
            public const nint volrun = 0x14; // int32
            public const nint volstart = 0x18; // int32
            public const nint fadein = 0x1C; // int32
            public const nint fadeout = 0x20; // int32
            public const nint lfotype = 0x24; // int32
            public const nint lforate = 0x28; // int32
            public const nint lfomodpitch = 0x2C; // int32
            public const nint lfomodvol = 0x30; // int32
            public const nint cspinup = 0x34; // int32
            public const nint cspincount = 0x38; // int32
            public const nint pitch = 0x3C; // int32
            public const nint spinupsav = 0x40; // int32
            public const nint spindownsav = 0x44; // int32
            public const nint pitchfrac = 0x48; // int32
            public const nint vol = 0x4C; // int32
            public const nint fadeinsav = 0x50; // int32
            public const nint fadeoutsav = 0x54; // int32
            public const nint volfrac = 0x58; // int32
            public const nint lfofrac = 0x5C; // int32
            public const nint lfomult = 0x60; // int32
        }
        // Parent: dynpitchvol_base_t
        // Fields count: 0
        public static class dynpitchvol_t {
        }
        // Parent: None
        // Fields count: 3
        public static class ResponseContext_t {
            public const nint m_iszName = 0x0; // CUtlSymbolLarge
            public const nint m_iszValue = 0x8; // CUtlSymbolLarge
            public const nint m_fExpirationTime = 0x10; // GameTime_t
        }
        // Parent: None
        // Fields count: 2
        public static class Relationship_t {
            public const nint disposition = 0x0; // Disposition_t
            public const nint priority = 0x4; // int32
        }
        // Parent: CEntityInstance
        // Fields count: 75
        //
        // Metadata:
        // MNetworkExcludeByName
        // MNetworkExcludeByName
        // MNetworkExcludeByUserGroup
        // MNetworkExcludeByUserGroup
        // MNetworkExcludeByUserGroup
        // MNetworkExcludeByName
        // MNetworkExcludeByName
        // MNetworkExcludeByName
        // NetworkVarNames: m_CBodyComponent (CBodyComponent::Storage_t)
        // NetworkVarNames: m_iHealth (int32)
        // NetworkVarNames: m_iMaxHealth (int32)
        // NetworkVarNames: m_lifeState (uint8)
        // NetworkVarNames: m_bTakesDamage (bool)
        // NetworkVarNames: m_nTakeDamageFlags (TakeDamageFlags_t)
        // NetworkVarNames: m_bIsPlatform (bool)
        // NetworkVarNames: m_MoveCollide (MoveCollide_t)
        // NetworkVarNames: m_MoveType (MoveType_t)
        // NetworkVarNames: m_nSubclassID (EntitySubclassID_t)
        // NetworkVarNames: m_flAnimTime (float32)
        // NetworkVarNames: m_flSimulationTime (float32)
        // NetworkVarNames: m_flCreateTime (GameTime_t)
        // NetworkVarNames: m_bClientSideRagdoll (bool)
        // NetworkVarNames: m_ubInterpolationFrame (uint8)
        // NetworkVarNames: m_iTeamNum (uint8)
        // NetworkVarNames: m_spawnflags (uint32)
        // NetworkVarNames: m_nNextThinkTick (GameTick_t)
        // NetworkVarNames: m_fFlags (uint32)
        // NetworkVarNames: m_vecVelocity (CNetworkVelocityVector)
        // NetworkVarNames: m_vecBaseVelocity (Vector)
        // NetworkVarNames: m_hEffectEntity (CHandle< CBaseEntity>)
        // NetworkVarNames: m_hOwnerEntity (CHandle< CBaseEntity>)
        // NetworkVarNames: m_fEffects (uint32)
        // NetworkVarNames: m_hGroundEntity (CHandle< CBaseEntity>)
        // NetworkVarNames: m_flFriction (float32)
        // NetworkVarNames: m_flElasticity (float32)
        // NetworkVarNames: m_flGravityScale (float32)
        // NetworkVarNames: m_flTimeScale (float32)
        // NetworkVarNames: m_flWaterLevel (float)
        // NetworkVarNames: m_bAnimatedEveryTick (bool)
        // NetworkVarNames: m_flNavIgnoreUntilTime (GameTime_t)
        public static class CBaseEntity {
            public const nint m_CBodyComponent = 0x38; // CBodyComponent*
            public const nint m_NetworkTransmitComponent = 0x40; // CNetworkTransmitComponent
            public const nint m_aThinkFunctions = 0x4F0; // CUtlVector<thinkfunc_t>
            public const nint m_iCurrentThinkContext = 0x508; // int32
            public const nint m_nLastThinkTick = 0x50C; // GameTick_t
            public const nint m_nDisableContextThinkStartTick = 0x510; // GameTick_t
            public const nint m_isSteadyState = 0x520; // CBitVec<64>
            public const nint m_lastNetworkChange = 0x528; // float32
            public const nint m_ResponseContexts = 0x540; // CUtlVector<ResponseContext_t>
            public const nint m_iszResponseContext = 0x558; // CUtlSymbolLarge
            public const nint m_iHealth = 0x5A0; // int32
            public const nint m_iMaxHealth = 0x5A4; // int32
            public const nint m_lifeState = 0x5A8; // uint8
            public const nint m_flDamageAccumulator = 0x5AC; // float32
            public const nint m_bTakesDamage = 0x5B0; // bool
            public const nint m_nTakeDamageFlags = 0x5B4; // TakeDamageFlags_t
            public const nint m_bIsPlatform = 0x5B8; // bool
            public const nint m_MoveCollide = 0x5BA; // MoveCollide_t
            public const nint m_MoveType = 0x5BB; // MoveType_t
            public const nint m_nActualMoveType = 0x5BC; // MoveType_t
            public const nint m_nWaterTouch = 0x5BD; // uint8
            public const nint m_nSlimeTouch = 0x5BE; // uint8
            public const nint m_bRestoreInHierarchy = 0x5BF; // bool
            public const nint m_target = 0x5C0; // CUtlSymbolLarge
            public const nint m_hDamageFilter = 0x5C8; // CHandle<CBaseFilter>
            public const nint m_iszDamageFilterName = 0x5D0; // CUtlSymbolLarge
            public const nint m_flMoveDoneTime = 0x5D8; // float32
            public const nint m_nSubclassID = 0x5DC; // CUtlStringToken
            public const nint m_flAnimTime = 0x5E8; // float32
            public const nint m_flSimulationTime = 0x5EC; // float32
            public const nint m_flCreateTime = 0x5F0; // GameTime_t
            public const nint m_bClientSideRagdoll = 0x5F4; // bool
            public const nint m_ubInterpolationFrame = 0x5F5; // uint8
            public const nint m_vPrevVPhysicsUpdatePos = 0x5F8; // Vector
            public const nint m_iTeamNum = 0x604; // uint8
            public const nint m_iGlobalname = 0x608; // CUtlSymbolLarge
            public const nint m_iSentToClients = 0x610; // int32
            public const nint m_flSpeed = 0x614; // float32
            public const nint m_sUniqueHammerID = 0x618; // CUtlString
            public const nint m_spawnflags = 0x620; // uint32
            public const nint m_nNextThinkTick = 0x624; // GameTick_t
            public const nint m_nSimulationTick = 0x628; // int32
            public const nint m_OnKilled = 0x630; // CEntityIOOutput
            public const nint m_fFlags = 0x658; // uint32
            public const nint m_vecAbsVelocity = 0x65C; // Vector
            public const nint m_vecVelocity = 0x668; // CNetworkVelocityVector
            public const nint m_vecBaseVelocity = 0x698; // Vector
            public const nint m_nPushEnumCount = 0x6A4; // int32
            public const nint m_pCollision = 0x6A8; // CCollisionProperty*
            public const nint m_hEffectEntity = 0x6B0; // CHandle<CBaseEntity>
            public const nint m_hOwnerEntity = 0x6B4; // CHandle<CBaseEntity>
            public const nint m_fEffects = 0x6B8; // uint32
            public const nint m_hGroundEntity = 0x6BC; // CHandle<CBaseEntity>
            public const nint m_flFriction = 0x6C0; // float32
            public const nint m_flElasticity = 0x6C4; // float32
            public const nint m_flGravityScale = 0x6C8; // float32
            public const nint m_flTimeScale = 0x6CC; // float32
            public const nint m_flWaterLevel = 0x6D0; // float32
            public const nint m_bAnimatedEveryTick = 0x6D4; // bool
            public const nint m_bDisableLowViolence = 0x6D5; // bool
            public const nint m_nWaterType = 0x6D6; // uint8
            public const nint m_iEFlags = 0x6D8; // int32
            public const nint m_OnUser1 = 0x6E0; // CEntityIOOutput
            public const nint m_OnUser2 = 0x708; // CEntityIOOutput
            public const nint m_OnUser3 = 0x730; // CEntityIOOutput
            public const nint m_OnUser4 = 0x758; // CEntityIOOutput
            public const nint m_iInitialTeamNum = 0x780; // int32
            public const nint m_flNavIgnoreUntilTime = 0x784; // GameTime_t
            public const nint m_vecAngVelocity = 0x788; // QAngle
            public const nint m_bNetworkQuantizeOriginAndAngles = 0x794; // bool
            public const nint m_bLagCompensate = 0x795; // bool
            public const nint m_flOverriddenFriction = 0x798; // float32
            public const nint m_pBlocker = 0x79C; // CHandle<CBaseEntity>
            public const nint m_flLocalTime = 0x7A0; // float32
            public const nint m_flVPhysicsUpdateLocalTime = 0x7A4; // float32
        }
        // Parent: CBaseEntity
        // Fields count: 0
        public static class CServerOnlyEntity {
        }
        // Parent: CServerOnlyEntity
        // Fields count: 0
        public static class CServerOnlyPointEntity {
        }
        // Parent: CServerOnlyEntity
        // Fields count: 0
        public static class CLogicalEntity {
        }
        // Parent: CBaseEntity
        // Fields count: 17
        //
        // Metadata:
        // MNetworkIncludeByUserGroup
        // NetworkVarNames: m_flFadeInDuration (float32)
        // NetworkVarNames: m_flFadeOutDuration (float32)
        // NetworkVarNames: m_flMaxWeight (float32)
        // NetworkVarNames: m_bEnabled (bool)
        // NetworkVarNames: m_bMaster (bool)
        // NetworkVarNames: m_bClientSide (bool)
        // NetworkVarNames: m_bExclusive (bool)
        // NetworkVarNames: m_MinFalloff (float32)
        // NetworkVarNames: m_MaxFalloff (float32)
        // NetworkVarNames: m_flCurWeight (float32)
        // NetworkVarNames: m_netlookupFilename (char)
        public static class CColorCorrection {
            public const nint m_flFadeInDuration = 0x7A8; // float32
            public const nint m_flFadeOutDuration = 0x7AC; // float32
            public const nint m_flStartFadeInWeight = 0x7B0; // float32
            public const nint m_flStartFadeOutWeight = 0x7B4; // float32
            public const nint m_flTimeStartFadeIn = 0x7B8; // GameTime_t
            public const nint m_flTimeStartFadeOut = 0x7BC; // GameTime_t
            public const nint m_flMaxWeight = 0x7C0; // float32
            public const nint m_bStartDisabled = 0x7C4; // bool
            public const nint m_bEnabled = 0x7C5; // bool
            public const nint m_bMaster = 0x7C6; // bool
            public const nint m_bClientSide = 0x7C7; // bool
            public const nint m_bExclusive = 0x7C8; // bool
            public const nint m_MinFalloff = 0x7CC; // float32
            public const nint m_MaxFalloff = 0x7D0; // float32
            public const nint m_flCurWeight = 0x7D4; // float32
            public const nint m_netlookupFilename = 0x7D8; // char[512]
            public const nint m_lookupFilename = 0x9D8; // CUtlSymbolLarge
        }
        // Parent: CBaseEntity
        // Fields count: 11
        //
        // Metadata:
        // NetworkVarNames: m_hEntAttached (CHandle< CBaseEntity>)
        // NetworkVarNames: m_bCheapEffect (bool)
        public static class CEntityFlame {
            public const nint m_hEntAttached = 0x7A8; // CHandle<CBaseEntity>
            public const nint m_bCheapEffect = 0x7AC; // bool
            public const nint m_flSize = 0x7B0; // float32
            public const nint m_bUseHitboxes = 0x7B4; // bool
            public const nint m_iNumHitboxFires = 0x7B8; // int32
            public const nint m_flHitboxFireScale = 0x7BC; // float32
            public const nint m_flLifetime = 0x7C0; // GameTime_t
            public const nint m_hAttacker = 0x7C4; // CHandle<CBaseEntity>
            public const nint m_iDangerSound = 0x7C8; // int32
            public const nint m_flDirectDamagePerSecond = 0x7CC; // float32
            public const nint m_iCustomDamageType = 0x7D0; // int32
        }
        // Parent: CLogicalEntity
        // Fields count: 3
        public static class CBaseFilter {
            public const nint m_bNegated = 0x7A8; // bool
            public const nint m_OnPass = 0x7B0; // CEntityIOOutput
            public const nint m_OnFail = 0x7D8; // CEntityIOOutput
        }
        // Parent: CBaseFilter
        // Fields count: 4
        public static class CFilterMultiple {
            public const nint m_nFilterType = 0x800; // filter_t
            public const nint m_iFilterName = 0x808; // CUtlSymbolLarge[10]
            public const nint m_hFilter = 0x858; // CHandle<CBaseEntity>[10]
            public const nint m_nFilterCount = 0x880; // int32
        }
        // Parent: CBaseFilter
        // Fields count: 1
        public static class CFilterProximity {
            public const nint m_flRadius = 0x800; // float32
        }
        // Parent: CBaseFilter
        // Fields count: 0
        public static class CFilterLOS {
        }
        // Parent: CBaseFilter
        // Fields count: 1
        public static class CFilterClass {
            public const nint m_iFilterClass = 0x800; // CUtlSymbolLarge
        }
        // Parent: CBaseEntity
        // Fields count: 4
        //
        // Metadata:
        // NetworkVarNames: m_flScale (float32)
        // NetworkVarNames: m_flStartScale (float32)
        // NetworkVarNames: m_flScaleTime (float32)
        // NetworkVarNames: m_nFlags (uint32)
        public static class CBaseFire {
            public const nint m_flScale = 0x7A8; // float32
            public const nint m_flStartScale = 0x7AC; // float32
            public const nint m_flScaleTime = 0x7B0; // float32
            public const nint m_nFlags = 0x7B4; // uint32
        }
        // Parent: CBaseFire
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_nFlameModelIndex (int32)
        // NetworkVarNames: m_nFlameFromAboveModelIndex (int32)
        public static class CFireSmoke {
            public const nint m_nFlameModelIndex = 0x7B8; // int32
            public const nint m_nFlameFromAboveModelIndex = 0x7BC; // int32
        }
        // Parent: CBaseEntity
        // Fields count: 7
        public static class CFishPool {
            public const nint m_fishCount = 0x7B4; // int32
            public const nint m_maxRange = 0x7B8; // float32
            public const nint m_swimDepth = 0x7BC; // float32
            public const nint m_waterLevel = 0x7C0; // float32
            public const nint m_isDormant = 0x7C4; // bool
            public const nint m_fishes = 0x7C8; // CUtlVector<CHandle<CFish>>
            public const nint m_visTimer = 0x7E0; // CountdownTimer
        }
        // Parent: CServerOnlyEntity
        // Fields count: 0
        public static class CInfoData {
        }
        // Parent: None
        // Fields count: 3
        public static class locksound_t {
            public const nint sLockedSound = 0x8; // CUtlSymbolLarge
            public const nint sUnlockedSound = 0x10; // CUtlSymbolLarge
            public const nint flwaitSound = 0x18; // GameTime_t
        }
        // Parent: CLogicalEntity
        // Fields count: 4
        public static class CLogicBranch {
            public const nint m_bInValue = 0x7A8; // bool
            public const nint m_Listeners = 0x7B0; // CUtlVector<CHandle<CBaseEntity>>
            public const nint m_OnTrue = 0x7C8; // CEntityIOOutput
            public const nint m_OnFalse = 0x7F0; // CEntityIOOutput
        }
        // Parent: CLogicalEntity
        // Fields count: 7
        public static class CLogicDistanceCheck {
            public const nint m_iszEntityA = 0x7A8; // CUtlSymbolLarge
            public const nint m_iszEntityB = 0x7B0; // CUtlSymbolLarge
            public const nint m_flZone1Distance = 0x7B8; // float32
            public const nint m_flZone2Distance = 0x7BC; // float32
            public const nint m_InZone1 = 0x7C0; // CEntityIOOutput
            public const nint m_InZone2 = 0x7E8; // CEntityIOOutput
            public const nint m_InZone3 = 0x810; // CEntityIOOutput
        }
        // Parent: None
        // Fields count: 3
        public static class VelocitySampler {
            public const nint m_prevSample = 0x0; // Vector
            public const nint m_fPrevSampleTime = 0xC; // GameTime_t
            public const nint m_fIdealSampleRate = 0x10; // float32
        }
        // Parent: None
        // Fields count: 3
        public static class SimpleConstraintSoundProfile {
            public const nint eKeypoints = 0x8; // SimpleConstraintSoundProfile::SimpleConstraintsSoundProfileKeypoints_t
            public const nint m_keyPoints = 0xC; // float32[2]
            public const nint m_reversalSoundThresholds = 0x14; // float32[3]
        }
        // Parent: None
        // Fields count: 8
        public static class ConstraintSoundInfo {
            public const nint m_vSampler = 0x8; // VelocitySampler
            public const nint m_soundProfile = 0x20; // SimpleConstraintSoundProfile
            public const nint m_forwardAxis = 0x40; // Vector
            public const nint m_iszTravelSoundFwd = 0x50; // CUtlSymbolLarge
            public const nint m_iszTravelSoundBack = 0x58; // CUtlSymbolLarge
            public const nint m_iszReversalSounds = 0x68; // CUtlSymbolLarge[3]
            public const nint m_bPlayTravelSound = 0x80; // bool
            public const nint m_bPlayReversalSound = 0x81; // bool
        }
        // Parent: None
        // Fields count: 5
        public static class CSmoothFunc {
            public const nint m_flSmoothAmplitude = 0x8; // float32
            public const nint m_flSmoothBias = 0xC; // float32
            public const nint m_flSmoothDuration = 0x10; // float32
            public const nint m_flSmoothRemainingTime = 0x14; // float32
            public const nint m_nSmoothDir = 0x18; // int32
        }
        // Parent: None
        // Fields count: 1
        public static class magnetted_objects_t {
            public const nint hEntity = 0x8; // CHandle<CBaseEntity>
        }
        // Parent: CServerOnlyPointEntity
        // Fields count: 6
        public static class CPointPrefab {
            public const nint m_targetMapName = 0x7A8; // CUtlSymbolLarge
            public const nint m_forceWorldGroupID = 0x7B0; // CUtlSymbolLarge
            public const nint m_associatedRelayTargetName = 0x7B8; // CUtlSymbolLarge
            public const nint m_fixupNames = 0x7C0; // bool
            public const nint m_bLoadDynamic = 0x7C1; // bool
            public const nint m_associatedRelayEntity = 0x7C4; // CHandle<CPointPrefab>
        }
        // Parent: CBaseEntity
        // Fields count: 2
        public static class CSkyboxReference {
            public const nint m_worldGroupId = 0x7A8; // WorldGroupId_t
            public const nint m_hSkyCamera = 0x7AC; // CHandle<CSkyCamera>
        }
        // Parent: CBaseEntity
        // Fields count: 4
        //
        // Metadata:
        // NetworkVarNames: m_skyboxData (sky3dparams_t)
        // NetworkVarNames: m_skyboxSlotToken (CUtlStringToken)
        public static class CSkyCamera {
            public const nint m_skyboxData = 0x7A8; // sky3dparams_t
            public const nint m_skyboxSlotToken = 0x838; // CUtlStringToken
            public const nint m_bUseAngles = 0x83C; // bool
            public const nint m_pNext = 0x840; // CSkyCamera*
        }
        // Parent: None
        // Fields count: 12
        public static class CSound {
            public const nint m_hOwner = 0x0; // CHandle<CBaseEntity>
            public const nint m_hTarget = 0x4; // CHandle<CBaseEntity>
            public const nint m_iVolume = 0x8; // int32
            public const nint m_flOcclusionScale = 0xC; // float32
            public const nint m_iType = 0x10; // int32
            public const nint m_iNextAudible = 0x14; // int32
            public const nint m_flExpireTime = 0x18; // GameTime_t
            public const nint m_iNext = 0x1C; // int16
            public const nint m_bNoExpirationTime = 0x1E; // bool
            public const nint m_ownerChannelIndex = 0x20; // int32
            public const nint m_vecOrigin = 0x24; // Vector
            public const nint m_bHasOwner = 0x30; // bool
        }
        // Parent: CServerOnlyEntity
        // Fields count: 11
        public static class CEnvSoundscape {
            public const nint m_OnPlay = 0x7A8; // CEntityIOOutput
            public const nint m_flRadius = 0x7D0; // float32
            public const nint m_soundscapeName = 0x7D8; // CUtlSymbolLarge
            public const nint m_soundEventName = 0x7E0; // CUtlSymbolLarge
            public const nint m_bOverrideWithEvent = 0x7E8; // bool
            public const nint m_soundscapeIndex = 0x7EC; // int32
            public const nint m_soundscapeEntityListId = 0x7F0; // int32
            public const nint m_soundEventHash = 0x7F4; // uint32
            public const nint m_positionNames = 0x7F8; // CUtlSymbolLarge[8]
            public const nint m_hProxySoundscape = 0x838; // CHandle<CEnvSoundscape>
            public const nint m_bDisabled = 0x83C; // bool
        }
        // Parent: CEnvSoundscape
        // Fields count: 1
        public static class CEnvSoundscapeProxy {
            public const nint m_MainSoundscapeName = 0x840; // CUtlSymbolLarge
        }
        // Parent: CEnvSoundscape
        // Fields count: 0
        public static class CEnvSoundscapeTriggerable {
        }
        // Parent: None
        // Fields count: 6
        public static class lerpdata_t {
            public const nint m_hEnt = 0x0; // CHandle<CBaseEntity>
            public const nint m_MoveType = 0x4; // MoveType_t
            public const nint m_flStartTime = 0x8; // GameTime_t
            public const nint m_vecStartOrigin = 0xC; // Vector
            public const nint m_qStartRot = 0x20; // Quaternion
            public const nint m_nFXIndex = 0x30; // ParticleIndex_t
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNavLinkAnimgraphVar {
            public const nint m_strAnimgraphVar = 0x0; // CUtlString
            public const nint m_unAlignmentDegrees = 0x8; // uint32
        }
        // Parent: CNavVolume
        // Fields count: 0
        public static class CNavVolumeMarkupVolume {
        }
        // Parent: CNavVolume
        // Fields count: 0
        public static class CNavVolumeCalculatedVector {
        }
        // Parent: CNavVolumeCalculatedVector
        // Fields count: 2
        public static class CNavVolumeBreadthFirstSearch {
            public const nint m_vStartPos = 0x80; // Vector
            public const nint m_flSearchDist = 0x8C; // float32
        }
        // Parent: None
        // Fields count: 8
        //
        // Metadata:
        // NetworkVarNames: m_nInteractsAs (uint64)
        // NetworkVarNames: m_nInteractsWith (uint64)
        // NetworkVarNames: m_nInteractsExclude (uint64)
        // NetworkVarNames: m_nEntityId (uint32)
        // NetworkVarNames: m_nOwnerId (uint32)
        // NetworkVarNames: m_nHierarchyId (uint16)
        // NetworkVarNames: m_nCollisionGroup (uint8)
        // NetworkVarNames: m_nCollisionFunctionMask (uint8)
        public static class VPhysicsCollisionAttribute_t {
            public const nint m_nInteractsAs = 0x8; // uint64
            public const nint m_nInteractsWith = 0x10; // uint64
            public const nint m_nInteractsExclude = 0x18; // uint64
            public const nint m_nEntityId = 0x20; // uint32
            public const nint m_nOwnerId = 0x24; // uint32
            public const nint m_nHierarchyId = 0x28; // uint16
            public const nint m_nCollisionGroup = 0x2A; // uint8
            public const nint m_nCollisionFunctionMask = 0x2B; // uint8
        }
        // Parent: None
        // Fields count: 17
        //
        // Metadata:
        // NetworkVarNames: m_collisionAttribute (VPhysicsCollisionAttribute_t)
        // NetworkVarNames: m_vecMins (Vector)
        // NetworkVarNames: m_vecMaxs (Vector)
        // NetworkVarNames: m_usSolidFlags (uint8)
        // NetworkVarNames: m_nSolidType (SolidType_t)
        // NetworkVarNames: m_triggerBloat (uint8)
        // NetworkVarNames: m_nSurroundType (SurroundingBoundsType_t)
        // NetworkVarNames: m_CollisionGroup (uint8)
        // NetworkVarNames: m_nEnablePhysics (uint8)
        // NetworkVarNames: m_vecSpecifiedSurroundingMins (Vector)
        // NetworkVarNames: m_vecSpecifiedSurroundingMaxs (Vector)
        // NetworkVarNames: m_vCapsuleCenter1 (Vector)
        // NetworkVarNames: m_vCapsuleCenter2 (Vector)
        // NetworkVarNames: m_flCapsuleRadius (float)
        public static class CCollisionProperty {
            public const nint m_collisionAttribute = 0x10; // VPhysicsCollisionAttribute_t
            public const nint m_vecMins = 0x40; // Vector
            public const nint m_vecMaxs = 0x4C; // Vector
            public const nint m_usSolidFlags = 0x5A; // uint8
            public const nint m_nSolidType = 0x5B; // SolidType_t
            public const nint m_triggerBloat = 0x5C; // uint8
            public const nint m_nSurroundType = 0x5D; // SurroundingBoundsType_t
            public const nint m_CollisionGroup = 0x5E; // uint8
            public const nint m_nEnablePhysics = 0x5F; // uint8
            public const nint m_flBoundingRadius = 0x60; // float32
            public const nint m_vecSpecifiedSurroundingMins = 0x64; // Vector
            public const nint m_vecSpecifiedSurroundingMaxs = 0x70; // Vector
            public const nint m_vecSurroundingMaxs = 0x7C; // Vector
            public const nint m_vecSurroundingMins = 0x88; // Vector
            public const nint m_vCapsuleCenter1 = 0x94; // Vector
            public const nint m_vCapsuleCenter2 = 0xA0; // Vector
            public const nint m_flCapsuleRadius = 0xAC; // float32
        }
        // Parent: None
        // Fields count: 21
        //
        // Metadata:
        // NetworkVarNames: m_vOrigin (Vector)
        // NetworkVarNames: m_vStart (Vector)
        // NetworkVarNames: m_vNormal (Vector)
        // NetworkVarNames: m_vAngles (QAngle)
        // NetworkVarNames: m_hEntity (CEntityHandle)
        // NetworkVarNames: m_hOtherEntity (CEntityHandle)
        // NetworkVarNames: m_flScale (float32)
        // NetworkVarNames: m_flMagnitude (float32)
        // NetworkVarNames: m_flRadius (float32)
        // NetworkVarNames: m_nSurfaceProp (CUtlStringToken)
        // NetworkVarNames: m_nEffectIndex (HParticleSystemDefinition)
        // NetworkVarNames: m_nDamageType (uint32)
        // NetworkVarNames: m_nPenetrate (uint8)
        // NetworkVarNames: m_nMaterial (uint16)
        // NetworkVarNames: m_nHitBox (uint16)
        // NetworkVarNames: m_nColor (uint8)
        // NetworkVarNames: m_fFlags (uint8)
        // NetworkVarNames: m_nAttachmentIndex (AttachmentHandle_t)
        // NetworkVarNames: m_nAttachmentName (CUtlStringToken)
        // NetworkVarNames: m_iEffectName (uint16)
        // NetworkVarNames: m_nExplosionType (uint8)
        public static class CEffectData {
            public const nint m_vOrigin = 0x8; // Vector
            public const nint m_vStart = 0x14; // Vector
            public const nint m_vNormal = 0x20; // Vector
            public const nint m_vAngles = 0x2C; // QAngle
            public const nint m_hEntity = 0x38; // CEntityHandle
            public const nint m_hOtherEntity = 0x3C; // CEntityHandle
            public const nint m_flScale = 0x40; // float32
            public const nint m_flMagnitude = 0x44; // float32
            public const nint m_flRadius = 0x48; // float32
            public const nint m_nSurfaceProp = 0x4C; // CUtlStringToken
            public const nint m_nEffectIndex = 0x50; // CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>
            public const nint m_nDamageType = 0x58; // uint32
            public const nint m_nPenetrate = 0x5C; // uint8
            public const nint m_nMaterial = 0x5E; // uint16
            public const nint m_nHitBox = 0x60; // uint16
            public const nint m_nColor = 0x62; // uint8
            public const nint m_fFlags = 0x63; // uint8
            public const nint m_nAttachmentIndex = 0x64; // AttachmentHandle_t
            public const nint m_nAttachmentName = 0x68; // CUtlStringToken
            public const nint m_iEffectName = 0x6C; // uint16
            public const nint m_nExplosionType = 0x6E; // uint8
        }
        // Parent: CBaseEntity
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_flFadeStartDist (float32)
        // NetworkVarNames: m_flFadeEndDist (float32)
        public static class CEnvDetailController {
            public const nint m_flFadeStartDist = 0x7A8; // float32
            public const nint m_flFadeEndDist = 0x7AC; // float32
        }
        // Parent: None
        // Fields count: 31
        //
        // Metadata:
        // NetworkVarNames: m_flStartTime (GameTime_t)
        // NetworkVarNames: m_iWindSeed (uint32)
        // NetworkVarNames: m_iMinWind (uint16)
        // NetworkVarNames: m_iMaxWind (uint16)
        // NetworkVarNames: m_windRadius (int32)
        // NetworkVarNames: m_iMinGust (uint16)
        // NetworkVarNames: m_iMaxGust (uint16)
        // NetworkVarNames: m_flMinGustDelay (float32)
        // NetworkVarNames: m_flMaxGustDelay (float32)
        // NetworkVarNames: m_flGustDuration (float32)
        // NetworkVarNames: m_iGustDirChange (uint16)
        // NetworkVarNames: m_location (Vector)
        // NetworkVarNames: m_iInitialWindDir (uint16)
        // NetworkVarNames: m_flInitialWindSpeed (float32)
        public static class CEnvWindShared {
            public const nint m_flStartTime = 0x8; // GameTime_t
            public const nint m_iWindSeed = 0xC; // uint32
            public const nint m_iMinWind = 0x10; // uint16
            public const nint m_iMaxWind = 0x12; // uint16
            public const nint m_windRadius = 0x14; // int32
            public const nint m_iMinGust = 0x18; // uint16
            public const nint m_iMaxGust = 0x1A; // uint16
            public const nint m_flMinGustDelay = 0x1C; // float32
            public const nint m_flMaxGustDelay = 0x20; // float32
            public const nint m_flGustDuration = 0x24; // float32
            public const nint m_iGustDirChange = 0x28; // uint16
            public const nint m_location = 0x2C; // Vector
            public const nint m_iszGustSound = 0x38; // int32
            public const nint m_iWindDir = 0x3C; // int32
            public const nint m_flWindSpeed = 0x40; // float32
            public const nint m_currentWindVector = 0x44; // Vector
            public const nint m_CurrentSwayVector = 0x50; // Vector
            public const nint m_PrevSwayVector = 0x5C; // Vector
            public const nint m_iInitialWindDir = 0x68; // uint16
            public const nint m_flInitialWindSpeed = 0x6C; // float32
            public const nint m_OnGustStart = 0x70; // CEntityIOOutput
            public const nint m_OnGustEnd = 0x98; // CEntityIOOutput
            public const nint m_flVariationTime = 0xC0; // GameTime_t
            public const nint m_flSwayTime = 0xC4; // GameTime_t
            public const nint m_flSimTime = 0xC8; // GameTime_t
            public const nint m_flSwitchTime = 0xCC; // GameTime_t
            public const nint m_flAveWindSpeed = 0xD0; // float32
            public const nint m_bGusting = 0xD4; // bool
            public const nint m_flWindAngleVariation = 0xD8; // float32
            public const nint m_flWindSpeedVariation = 0xDC; // float32
            public const nint m_iEntIndex = 0xE0; // CEntityIndex
        }
        // Parent: None
        // Fields count: 2
        public static class CEnvWindShared__WindAveEvent_t {
            public const nint m_flStartWindSpeed = 0x0; // float32
            public const nint m_flAveWindSpeed = 0x4; // float32
        }
        // Parent: None
        // Fields count: 2
        public static class CEnvWindShared__WindVariationEvent_t {
            public const nint m_flWindAngleVariation = 0x0; // float32
            public const nint m_flWindSpeedVariation = 0x4; // float32
        }
        // Parent: CBaseEntity
        // Fields count: 0
        public static class CInfoLadderDismount {
        }
        // Parent: None
        // Fields count: 12
        //
        // Metadata:
        // NetworkVarNames: m_nModelID (int32)
        // NetworkVarNames: m_hMaterial (HMaterialStrong)
        // NetworkVarNames: m_solid (ShardSolid_t)
        // NetworkVarNames: m_ShatterPanelMode (ShatterPanelMode)
        // NetworkVarNames: m_vecPanelSize (Vector2D)
        // NetworkVarNames: m_vecStressPositionA (Vector2D)
        // NetworkVarNames: m_vecStressPositionB (Vector2D)
        // NetworkVarNames: m_vecPanelVertices (Vector2D)
        // NetworkVarNames: m_flGlassHalfThickness (float)
        // NetworkVarNames: m_bHasParent (bool)
        // NetworkVarNames: m_bParentFrozen (bool)
        // NetworkVarNames: m_SurfacePropStringToken (CUtlStringToken)
        public static class shard_model_desc_t {
            public const nint m_nModelID = 0x8; // int32
            public const nint m_hMaterial = 0x10; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_solid = 0x18; // ShardSolid_t
            public const nint m_ShatterPanelMode = 0x19; // ShatterPanelMode
            public const nint m_vecPanelSize = 0x1C; // Vector2D
            public const nint m_vecStressPositionA = 0x24; // Vector2D
            public const nint m_vecStressPositionB = 0x2C; // Vector2D
            public const nint m_vecPanelVertices = 0x38; // CNetworkUtlVectorBase<Vector2D>
            public const nint m_flGlassHalfThickness = 0x50; // float32
            public const nint m_bHasParent = 0x54; // bool
            public const nint m_bParentFrozen = 0x55; // bool
            public const nint m_SurfacePropStringToken = 0x58; // CUtlStringToken
        }
        // Parent: None
        // Fields count: 30
        public static class CShatterGlassShard {
            public const nint m_hShardHandle = 0x8; // uint32
            public const nint m_vecPanelVertices = 0x10; // CUtlVector<Vector2D>
            public const nint m_vLocalPanelSpaceOrigin = 0x28; // Vector2D
            public const nint m_hModel = 0x30; // CStrongHandle<InfoForResourceTypeCModel>
            public const nint m_hPhysicsEntity = 0x38; // CHandle<CShatterGlassShardPhysics>
            public const nint m_hParentPanel = 0x3C; // CHandle<CFuncShatterglass>
            public const nint m_hParentShard = 0x40; // uint32
            public const nint m_ShatterStressType = 0x44; // ShatterGlassStressType
            public const nint m_vecStressVelocity = 0x48; // Vector
            public const nint m_bCreatedModel = 0x54; // bool
            public const nint m_flLongestEdge = 0x58; // float32
            public const nint m_flShortestEdge = 0x5C; // float32
            public const nint m_flLongestAcross = 0x60; // float32
            public const nint m_flShortestAcross = 0x64; // float32
            public const nint m_flSumOfAllEdges = 0x68; // float32
            public const nint m_flArea = 0x6C; // float32
            public const nint m_nOnFrameEdge = 0x70; // OnFrame
            public const nint m_nParentPanelsNthShard = 0x74; // int32
            public const nint m_nSubShardGeneration = 0x78; // int32
            public const nint m_vecAverageVertPosition = 0x7C; // Vector2D
            public const nint m_bAverageVertPositionIsValid = 0x84; // bool
            public const nint m_vecPanelSpaceStressPositionA = 0x88; // Vector2D
            public const nint m_vecPanelSpaceStressPositionB = 0x90; // Vector2D
            public const nint m_bStressPositionAIsValid = 0x98; // bool
            public const nint m_bStressPositionBIsValid = 0x99; // bool
            public const nint m_bFlaggedForRemoval = 0x9A; // bool
            public const nint m_flPhysicsEntitySpawnedAtTime = 0x9C; // GameTime_t
            public const nint m_bShatterRateLimited = 0xA0; // bool
            public const nint m_hEntityHittingMe = 0xA4; // CHandle<CBaseEntity>
            public const nint m_vecNeighbors = 0xA8; // CUtlVector<uint32>
        }
        // Parent: CBaseEntity
        // Fields count: 0
        public static class CGameRulesProxy {
        }
        // Parent: None
        // Fields count: 2
        public static class CGameRules {
            public const nint m_szQuestName = 0x8; // char[128]
            public const nint m_nQuestPhase = 0x88; // int32
        }
        // Parent: None
        // Fields count: 11
        //
        // Metadata:
        // NetworkVarNames: m_iGlowType (int32)
        // NetworkVarNames: m_iGlowTeam (int32)
        // NetworkVarNames: m_nGlowRange (int32)
        // NetworkVarNames: m_nGlowRangeMin (int32)
        // NetworkVarNames: m_glowColorOverride (Color)
        // NetworkVarNames: m_bFlashing (bool)
        // NetworkVarNames: m_flGlowTime (float)
        // NetworkVarNames: m_flGlowStartTime (float)
        // NetworkVarNames: m_bEligibleForScreenHighlight (bool)
        public static class CGlowProperty {
            public const nint m_fGlowColor = 0x8; // Vector
            public const nint m_iGlowType = 0x30; // int32
            public const nint m_iGlowTeam = 0x34; // int32
            public const nint m_nGlowRange = 0x38; // int32
            public const nint m_nGlowRangeMin = 0x3C; // int32
            public const nint m_glowColorOverride = 0x40; // Color
            public const nint m_bFlashing = 0x44; // bool
            public const nint m_flGlowTime = 0x48; // float32
            public const nint m_flGlowStartTime = 0x4C; // float32
            public const nint m_bEligibleForScreenHighlight = 0x50; // bool
            public const nint m_bGlowing = 0x51; // bool
        }
        // Parent: CGameRules
        // Fields count: 0
        public static class CMultiplayRules {
        }
        // Parent: None
        // Fields count: 25
        //
        // Metadata:
        // NetworkVarNames: dirPrimary (Vector)
        // NetworkVarNames: colorPrimary (Color)
        // NetworkVarNames: colorSecondary (Color)
        // NetworkVarNames: colorPrimaryLerpTo (Color)
        // NetworkVarNames: colorSecondaryLerpTo (Color)
        // NetworkVarNames: start (float32)
        // NetworkVarNames: end (float32)
        // NetworkVarNames: farz (float32)
        // NetworkVarNames: maxdensity (float32)
        // NetworkVarNames: exponent (float32)
        // NetworkVarNames: HDRColorScale (float32)
        // NetworkVarNames: skyboxFogFactor (float32)
        // NetworkVarNames: skyboxFogFactorLerpTo (float32)
        // NetworkVarNames: startLerpTo (float32)
        // NetworkVarNames: endLerpTo (float32)
        // NetworkVarNames: maxdensityLerpTo (float32)
        // NetworkVarNames: lerptime (GameTime_t)
        // NetworkVarNames: duration (float32)
        // NetworkVarNames: blendtobackground (float32)
        // NetworkVarNames: scattering (float32)
        // NetworkVarNames: locallightscale (float32)
        // NetworkVarNames: enable (bool)
        // NetworkVarNames: blend (bool)
        // NetworkVarNames: m_bNoReflectionFog (bool)
        public static class fogparams_t {
            public const nint dirPrimary = 0x8; // Vector
            public const nint colorPrimary = 0x14; // Color
            public const nint colorSecondary = 0x18; // Color
            public const nint colorPrimaryLerpTo = 0x1C; // Color
            public const nint colorSecondaryLerpTo = 0x20; // Color
            public const nint start = 0x24; // float32
            public const nint end = 0x28; // float32
            public const nint farz = 0x2C; // float32
            public const nint maxdensity = 0x30; // float32
            public const nint exponent = 0x34; // float32
            public const nint HDRColorScale = 0x38; // float32
            public const nint skyboxFogFactor = 0x3C; // float32
            public const nint skyboxFogFactorLerpTo = 0x40; // float32
            public const nint startLerpTo = 0x44; // float32
            public const nint endLerpTo = 0x48; // float32
            public const nint maxdensityLerpTo = 0x4C; // float32
            public const nint lerptime = 0x50; // GameTime_t
            public const nint duration = 0x54; // float32
            public const nint blendtobackground = 0x58; // float32
            public const nint scattering = 0x5C; // float32
            public const nint locallightscale = 0x60; // float32
            public const nint enable = 0x64; // bool
            public const nint blend = 0x65; // bool
            public const nint m_bNoReflectionFog = 0x66; // bool
            public const nint m_bPadding = 0x67; // bool
        }
        // Parent: None
        // Fields count: 14
        //
        // Metadata:
        // NetworkVarNames: m_hCtrl (CHandle< CFogController>)
        public static class fogplayerparams_t {
            public const nint m_hCtrl = 0x8; // CHandle<CFogController>
            public const nint m_flTransitionTime = 0xC; // float32
            public const nint m_OldColor = 0x10; // Color
            public const nint m_flOldStart = 0x14; // float32
            public const nint m_flOldEnd = 0x18; // float32
            public const nint m_flOldMaxDensity = 0x1C; // float32
            public const nint m_flOldHDRColorScale = 0x20; // float32
            public const nint m_flOldFarZ = 0x24; // float32
            public const nint m_NewColor = 0x28; // Color
            public const nint m_flNewStart = 0x2C; // float32
            public const nint m_flNewEnd = 0x30; // float32
            public const nint m_flNewMaxDensity = 0x34; // float32
            public const nint m_flNewHDRColorScale = 0x38; // float32
            public const nint m_flNewFarZ = 0x3C; // float32
        }
        // Parent: None
        // Fields count: 6
        //
        // Metadata:
        // NetworkVarNames: scale (int16)
        // NetworkVarNames: origin (Vector)
        // NetworkVarNames: bClip3DSkyBoxNearToWorldFar (bool)
        // NetworkVarNames: flClip3DSkyBoxNearToWorldFarOffset (float32)
        // NetworkVarNames: fog (fogparams_t)
        // NetworkVarNames: m_nWorldGroupID (WorldGroupId_t)
        public static class sky3dparams_t {
            public const nint scale = 0x8; // int16
            public const nint origin = 0xC; // Vector
            public const nint bClip3DSkyBoxNearToWorldFar = 0x18; // bool
            public const nint flClip3DSkyBoxNearToWorldFarOffset = 0x1C; // float32
            public const nint fog = 0x20; // fogparams_t
            public const nint m_nWorldGroupID = 0x88; // WorldGroupId_t
        }
        // Parent: None
        // Fields count: 5
        public static class sndopvarlatchdata_t {
            public const nint m_iszStack = 0x8; // CUtlSymbolLarge
            public const nint m_iszOperator = 0x10; // CUtlSymbolLarge
            public const nint m_iszOpvar = 0x18; // CUtlSymbolLarge
            public const nint m_flVal = 0x20; // float32
            public const nint m_vPos = 0x24; // Vector
        }
        // Parent: None
        // Fields count: 0
        public static class IRagdoll {
        }
        // Parent: None
        // Fields count: 3
        public static class ragdollelement_t {
            public const nint originParentSpace = 0x0; // Vector
            public const nint parentIndex = 0x20; // int32
            public const nint m_flRadius = 0x24; // float32
        }
        // Parent: None
        // Fields count: 4
        public static class ragdoll_t {
            public const nint list = 0x0; // CUtlVector<ragdollelement_t>
            public const nint boneIndex = 0x18; // CUtlVector<int32>
            public const nint allowStretch = 0x30; // bool
            public const nint unused = 0x31; // bool
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // NetworkVarNames: m_Transforms (CTransform)
        // NetworkVarNames: m_hOwner (EHANDLE)
        public static class PhysicsRagdollPose_t {
            public const nint __m_pChainEntity = 0x8; // CNetworkVarChainer
            public const nint m_Transforms = 0x30; // CNetworkUtlVectorBase<CTransform>
            public const nint m_hOwner = 0x48; // CHandle<CBaseEntity>
        }
        // Parent: None
        // Fields count: 13
        public static class CSceneEventInfo {
            public const nint m_iLayer = 0x0; // int32
            public const nint m_iPriority = 0x4; // int32
            public const nint m_hSequence = 0x8; // HSequence
            public const nint m_flWeight = 0xC; // float32
            public const nint m_bHasArrived = 0x10; // bool
            public const nint m_nType = 0x14; // int32
            public const nint m_flNext = 0x18; // GameTime_t
            public const nint m_bIsGesture = 0x1C; // bool
            public const nint m_bShouldRemove = 0x1D; // bool
            public const nint m_hTarget = 0x44; // CHandle<CBaseEntity>
            public const nint m_nSceneEventId = 0x48; // uint32
            public const nint m_bClientSide = 0x4C; // bool
            public const nint m_bStarted = 0x4D; // bool
        }
        // Parent: None
        // Fields count: 4
        public static class thinkfunc_t {
            public const nint m_hFn = 0x10; // HSCRIPT
            public const nint m_nContext = 0x18; // CUtlStringToken
            public const nint m_nNextThinkTick = 0x1C; // GameTick_t
            public const nint m_nLastThinkTick = 0x20; // GameTick_t
        }
        // Parent: None
        // Fields count: 2
        public static class RagdollCreationParams_t {
            public const nint m_vForce = 0x0; // Vector
            public const nint m_nForceBone = 0xC; // int32
        }
        // Parent: None
        // Fields count: 6
        public static class hudtextparms_t {
            public const nint color1 = 0x0; // Color
            public const nint color2 = 0x4; // Color
            public const nint effect = 0x8; // uint8
            public const nint channel = 0x9; // uint8
            public const nint x = 0xC; // float32
            public const nint y = 0x10; // float32
        }
        // Parent: None
        // Fields count: 2
        public static class CSimpleSimTimer {
            public const nint m_next = 0x0; // GameTime_t
            public const nint m_nWorldGroupId = 0x4; // WorldGroupId_t
        }
        // Parent: CSimpleSimTimer
        // Fields count: 1
        public static class CSimTimer {
            public const nint m_interval = 0x8; // float32
        }
        // Parent: CSimpleSimTimer
        // Fields count: 2
        public static class CRandSimTimer {
            public const nint m_minInterval = 0x8; // float32
            public const nint m_maxInterval = 0xC; // float32
        }
        // Parent: CSimpleSimTimer
        // Fields count: 1
        public static class CStopwatchBase {
            public const nint m_fIsRunning = 0x8; // bool
        }
        // Parent: CStopwatchBase
        // Fields count: 0
        public static class CSimpleStopwatch {
        }
        // Parent: CStopwatchBase
        // Fields count: 1
        public static class CStopwatch {
            public const nint m_interval = 0xC; // float32
        }
        // Parent: CStopwatchBase
        // Fields count: 2
        public static class CRandStopwatch {
            public const nint m_minInterval = 0xC; // float32
            public const nint m_maxInterval = 0x10; // float32
        }
        // Parent: CGameRules
        // Fields count: 1
        public static class CSingleplayRules {
            public const nint m_bSinglePlayerGameEnding = 0x8C; // bool
        }
        // Parent: CBaseEntity
        // Fields count: 9
        //
        // Metadata:
        // NetworkVarNames: m_iszStackName (string_t)
        // NetworkVarNames: m_iszOperatorName (string_t)
        // NetworkVarNames: m_iszOpvarName (string_t)
        // NetworkVarNames: m_iOpvarIndex (int)
        // NetworkVarNames: m_bUseAutoCompare (bool)
        public static class CSoundOpvarSetPointBase {
            public const nint m_bDisabled = 0x7A8; // bool
            public const nint m_hSource = 0x7AC; // CEntityHandle
            public const nint m_iszSourceEntityName = 0x7B8; // CUtlSymbolLarge
            public const nint m_vLastPosition = 0x810; // Vector
            public const nint m_iszStackName = 0x820; // CUtlSymbolLarge
            public const nint m_iszOperatorName = 0x828; // CUtlSymbolLarge
            public const nint m_iszOpvarName = 0x830; // CUtlSymbolLarge
            public const nint m_iOpvarIndex = 0x838; // int32
            public const nint m_bUseAutoCompare = 0x83C; // bool
        }
        // Parent: CSoundOpvarSetPointBase
        // Fields count: 23
        public static class CSoundOpvarSetPointEntity {
            public const nint m_OnEnter = 0x840; // CEntityIOOutput
            public const nint m_OnExit = 0x868; // CEntityIOOutput
            public const nint m_bAutoDisable = 0x890; // bool
            public const nint m_flDistanceMin = 0x8D4; // float32
            public const nint m_flDistanceMax = 0x8D8; // float32
            public const nint m_flDistanceMapMin = 0x8DC; // float32
            public const nint m_flDistanceMapMax = 0x8E0; // float32
            public const nint m_flOcclusionRadius = 0x8E4; // float32
            public const nint m_flOcclusionMin = 0x8E8; // float32
            public const nint m_flOcclusionMax = 0x8EC; // float32
            public const nint m_flValSetOnDisable = 0x8F0; // float32
            public const nint m_bSetValueOnDisable = 0x8F4; // bool
            public const nint m_nSimulationMode = 0x8F8; // int32
            public const nint m_nVisibilitySamples = 0x8FC; // int32
            public const nint m_vDynamicProxyPoint = 0x900; // Vector
            public const nint m_flDynamicMaximumOcclusion = 0x90C; // float32
            public const nint m_hDynamicEntity = 0x910; // CEntityHandle
            public const nint m_iszDynamicEntityName = 0x918; // CUtlSymbolLarge
            public const nint m_flPathingDistanceNormFactor = 0x920; // float32
            public const nint m_vPathingSourcePos = 0x924; // Vector
            public const nint m_vPathingListenerPos = 0x930; // Vector
            public const nint m_vPathingDirection = 0x93C; // Vector
            public const nint m_nPathingSourceIndex = 0x948; // int32
        }
        // Parent: CSoundOpvarSetPointEntity
        // Fields count: 9
        public static class CSoundOpvarSetAABBEntity {
            public const nint m_vDistanceInnerMins = 0x94C; // Vector
            public const nint m_vDistanceInnerMaxs = 0x958; // Vector
            public const nint m_vDistanceOuterMins = 0x964; // Vector
            public const nint m_vDistanceOuterMaxs = 0x970; // Vector
            public const nint m_nAABBDirection = 0x97C; // int32
            public const nint m_vInnerMins = 0x980; // Vector
            public const nint m_vInnerMaxs = 0x98C; // Vector
            public const nint m_vOuterMins = 0x998; // Vector
            public const nint m_vOuterMaxs = 0x9A4; // Vector
        }
        // Parent: CSoundOpvarSetAABBEntity
        // Fields count: 0
        public static class CSoundOpvarSetOBBEntity {
        }
        // Parent: CSoundOpvarSetPointEntity
        // Fields count: 3
        public static class CSoundOpvarSetPathCornerEntity {
            public const nint m_flDistMinSqr = 0x968; // float32
            public const nint m_flDistMaxSqr = 0x96C; // float32
            public const nint m_iszPathCornerEntityName = 0x970; // CUtlSymbolLarge
        }
        // Parent: None
        // Fields count: 3
        public static class SoundOpvarTraceResult_t {
            public const nint vPos = 0x0; // Vector
            public const nint bDidHit = 0xC; // bool
            public const nint flDistSqrToCenter = 0x10; // float32
        }
        // Parent: CSoundOpvarSetPointEntity
        // Fields count: 4
        public static class CSoundOpvarSetAutoRoomEntity {
            public const nint m_traceResults = 0x950; // CUtlVector<SoundOpvarTraceResult_t>
            public const nint m_flSize = 0x980; // float32
            public const nint m_flHeightTolerance = 0x984; // float32
            public const nint m_flSizeSqr = 0x988; // float32
        }
        // Parent: CSoundOpvarSetPointBase
        // Fields count: 8
        public static class CSoundOpvarSetOBBWindEntity {
            public const nint m_vMins = 0x840; // Vector
            public const nint m_vMaxs = 0x84C; // Vector
            public const nint m_vDistanceMins = 0x858; // Vector
            public const nint m_vDistanceMaxs = 0x864; // Vector
            public const nint m_flWindMin = 0x870; // float32
            public const nint m_flWindMax = 0x874; // float32
            public const nint m_flWindMapMin = 0x878; // float32
            public const nint m_flWindMapMax = 0x87C; // float32
        }
        // Parent: None
        // Fields count: 18
        public static class CTakeDamageInfo {
            public const nint m_vecDamageForce = 0x8; // Vector
            public const nint m_vecDamagePosition = 0x14; // Vector
            public const nint m_vecReportedPosition = 0x20; // Vector
            public const nint m_vecDamageDirection = 0x2C; // Vector
            public const nint m_hInflictor = 0x38; // CHandle<CBaseEntity>
            public const nint m_hAttacker = 0x3C; // CHandle<CBaseEntity>
            public const nint m_hAbility = 0x40; // CHandle<CBaseEntity>
            public const nint m_flDamage = 0x44; // float32
            public const nint m_bitsDamageType = 0x48; // int32
            public const nint m_iDamageCustom = 0x4C; // int32
            public const nint m_iAmmoType = 0x50; // AmmoIndex_t
            public const nint m_flOriginalDamage = 0x60; // float32
            public const nint m_bShouldBleed = 0x64; // bool
            public const nint m_bShouldSpark = 0x65; // bool
            public const nint m_nDamageFlags = 0x70; // TakeDamageFlags_t
            public const nint m_nNumObjectsPenetrated = 0x74; // int32
            public const nint m_hScriptInstance = 0x78; // HSCRIPT
            public const nint m_bInTakeDamageFlow = 0x94; // bool
        }
        // Parent: None
        // Fields count: 2
        public static class CTakeDamageResult {
            public const nint m_nHealthLost = 0x0; // int32
            public const nint m_nDamageTaken = 0x4; // int32
        }
        // Parent: None
        // Fields count: 4
        public static class SummaryTakeDamageInfo_t {
            public const nint nSummarisedCount = 0x0; // int32
            public const nint info = 0x8; // CTakeDamageInfo
            public const nint result = 0xA0; // CTakeDamageResult
            public const nint hTarget = 0xA8; // CHandle<CBaseEntity>
        }
        // Parent: None
        // Fields count: 1
        public static class CTakeDamageSummaryScopeGuard {
            public const nint m_vecSummaries = 0x8; // CUtlVector<SummaryTakeDamageInfo_t*>
        }
        // Parent: CMultiplayRules
        // Fields count: 0
        public static class CTeamplayRules {
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_Attributes (CEconItemAttribute)
        public static class CAttributeList {
            public const nint m_Attributes = 0x8; // CUtlVectorEmbeddedNetworkVar<CEconItemAttribute>
            public const nint m_pManager = 0x58; // CAttributeManager*
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // NetworkVarNames: m_iAttributeDefinitionIndex (attrib_definition_index_t)
        // NetworkVarNames: m_flValue (float)
        // NetworkVarNames: m_flInitialValue (float)
        // NetworkVarNames: m_nRefundableCurrency (int)
        // NetworkVarNames: m_bSetBonus (bool)
        public static class CEconItemAttribute {
            public const nint m_iAttributeDefinitionIndex = 0x30; // uint16
            public const nint m_flValue = 0x34; // float32
            public const nint m_flInitialValue = 0x38; // float32
            public const nint m_nRefundableCurrency = 0x3C; // int32
            public const nint m_bSetBonus = 0x40; // bool
        }
        // Parent: None
        // Fields count: 0
        public static class IEconItemInterface {
        }
        // Parent: None
        // Fields count: 6
        //
        // Metadata:
        // NetworkVarNames: m_iReapplyProvisionParity (int)
        // NetworkVarNames: m_hOuter (EHANDLE)
        // NetworkVarNames: m_ProviderType (attributeprovidertypes_t)
        public static class CAttributeManager {
            public const nint m_Providers = 0x8; // CUtlVector<CHandle<CBaseEntity>>
            public const nint m_iReapplyProvisionParity = 0x20; // int32
            public const nint m_hOuter = 0x24; // CHandle<CBaseEntity>
            public const nint m_bPreventLoopback = 0x28; // bool
            public const nint m_ProviderType = 0x2C; // attributeprovidertypes_t
            public const nint m_CachedResults = 0x30; // CUtlVector<CAttributeManager::cached_attribute_float_t>
        }
        // Parent: None
        // Fields count: 3
        public static class CAttributeManager__cached_attribute_float_t {
            public const nint flIn = 0x0; // float32
            public const nint iAttribHook = 0x8; // CUtlSymbolLarge
            public const nint flOut = 0x10; // float32
        }
        // Parent: CAttributeManager
        // Fields count: 1
        //
        // Metadata:
        // MNetworkIncludeByName
        // MNetworkIncludeByName
        // MNetworkIncludeByName
        // MNetworkIncludeByName
        // NetworkVarNames: m_Item (CEconItemView)
        public static class CAttributeContainer {
            public const nint m_Item = 0x50; // CEconItemView
        }
        // Parent: None
        // Fields count: 0
        public static class IHasAttributes {
        }
        // Parent: AmmoTypeInfo_t
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class GameAmmoTypeInfo_t {
            public const nint m_nBuySize = 0x34; // int32
            public const nint m_nCost = 0x38; // int32
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_bSpotted (bool)
        // NetworkVarNames: m_bSpottedByMask (uint32)
        public static class EntitySpottedState_t {
            public const nint m_bSpotted = 0x8; // bool
            public const nint m_bSpottedByMask = 0xC; // uint32[2]
        }
        // Parent: CServerOnlyPointEntity
        // Fields count: 3
        public static class SpawnPoint {
            public const nint m_iPriority = 0x7A8; // int32
            public const nint m_bEnabled = 0x7AC; // bool
            public const nint m_nType = 0x7B0; // int32
        }
        // Parent: SpawnPoint
        // Fields count: 9
        public static class SpawnPointCoopEnemy {
            public const nint m_szWeaponsToGive = 0x7B8; // CUtlSymbolLarge
            public const nint m_szPlayerModelToUse = 0x7C0; // CUtlSymbolLarge
            public const nint m_nArmorToSpawnWith = 0x7C8; // int32
            public const nint m_nDefaultBehavior = 0x7CC; // SpawnPointCoopEnemy::BotDefaultBehavior_t
            public const nint m_nBotDifficulty = 0x7D0; // int32
            public const nint m_bIsAgressive = 0x7D4; // bool
            public const nint m_bStartAsleep = 0x7D5; // bool
            public const nint m_flHideRadius = 0x7D8; // float32
            public const nint m_szBehaviorTreeFile = 0x7E8; // CUtlSymbolLarge
        }
        // Parent: CGameRulesProxy
        // Fields count: 1
        //
        // Metadata:
        // NetworkVarNames: m_pGameRules (CCSGameRules*)
        public static class CCSGameRulesProxy {
            public const nint m_pGameRules = 0x7A8; // CCSGameRules*
        }
        // Parent: CTeamplayRules
        // Fields count: 215
        //
        // Metadata:
        // NetworkVarNames: m_bFreezePeriod (bool)
        // NetworkVarNames: m_bWarmupPeriod (bool)
        // NetworkVarNames: m_fWarmupPeriodEnd (GameTime_t)
        // NetworkVarNames: m_fWarmupPeriodStart (GameTime_t)
        // NetworkVarNames: m_nTotalPausedTicks (int)
        // NetworkVarNames: m_nPauseStartTick (int)
        // NetworkVarNames: m_bServerPaused (bool)
        // NetworkVarNames: m_bGamePaused (bool)
        // NetworkVarNames: m_bTerroristTimeOutActive (bool)
        // NetworkVarNames: m_bCTTimeOutActive (bool)
        // NetworkVarNames: m_flTerroristTimeOutRemaining (float)
        // NetworkVarNames: m_flCTTimeOutRemaining (float)
        // NetworkVarNames: m_nTerroristTimeOuts (int)
        // NetworkVarNames: m_nCTTimeOuts (int)
        // NetworkVarNames: m_bTechnicalTimeOut (bool)
        // NetworkVarNames: m_bMatchWaitingForResume (bool)
        // NetworkVarNames: m_iRoundTime (int)
        // NetworkVarNames: m_fMatchStartTime (float)
        // NetworkVarNames: m_fRoundStartTime (GameTime_t)
        // NetworkVarNames: m_flRestartRoundTime (GameTime_t)
        // NetworkVarNames: m_bGameRestart (bool)
        // NetworkVarNames: m_flGameStartTime (float)
        // NetworkVarNames: m_timeUntilNextPhaseStarts (float)
        // NetworkVarNames: m_gamePhase (int)
        // NetworkVarNames: m_totalRoundsPlayed (int)
        // NetworkVarNames: m_nRoundsPlayedThisPhase (int)
        // NetworkVarNames: m_nOvertimePlaying (int)
        // NetworkVarNames: m_iHostagesRemaining (int)
        // NetworkVarNames: m_bAnyHostageReached (bool)
        // NetworkVarNames: m_bMapHasBombTarget (bool)
        // NetworkVarNames: m_bMapHasRescueZone (bool)
        // NetworkVarNames: m_bMapHasBuyZone (bool)
        // NetworkVarNames: m_bIsQueuedMatchmaking (bool)
        // NetworkVarNames: m_nQueuedMatchmakingMode (int)
        // NetworkVarNames: m_bIsValveDS (bool)
        // NetworkVarNames: m_bLogoMap (bool)
        // NetworkVarNames: m_bPlayAllStepSoundsOnServer (bool)
        // NetworkVarNames: m_iSpectatorSlotCount (int)
        // NetworkVarNames: m_MatchDevice (int)
        // NetworkVarNames: m_bHasMatchStarted (bool)
        // NetworkVarNames: m_nNextMapInMapgroup (int)
        // NetworkVarNames: m_szTournamentEventName (char)
        // NetworkVarNames: m_szTournamentEventStage (char)
        // NetworkVarNames: m_szMatchStatTxt (char)
        // NetworkVarNames: m_szTournamentPredictionsTxt (char)
        // NetworkVarNames: m_nTournamentPredictionsPct (int)
        // NetworkVarNames: m_flCMMItemDropRevealStartTime (GameTime_t)
        // NetworkVarNames: m_flCMMItemDropRevealEndTime (GameTime_t)
        // NetworkVarNames: m_bIsDroppingItems (bool)
        // NetworkVarNames: m_bIsQuestEligible (bool)
        // NetworkVarNames: m_bIsHltvActive (bool)
        // NetworkVarNames: m_nGuardianModeWaveNumber (int)
        // NetworkVarNames: m_nGuardianModeSpecialKillsRemaining (int)
        // NetworkVarNames: m_nGuardianModeSpecialWeaponNeeded (int)
        // NetworkVarNames: m_numGlobalGiftsGiven (uint32)
        // NetworkVarNames: m_numGlobalGifters (uint32)
        // NetworkVarNames: m_numGlobalGiftsPeriodSeconds (uint32)
        // NetworkVarNames: m_arrFeaturedGiftersAccounts (uint32)
        // NetworkVarNames: m_arrFeaturedGiftersGifts (uint32)
        // NetworkVarNames: m_arrProhibitedItemIndices (uint16)
        // NetworkVarNames: m_arrTournamentActiveCasterAccounts (uint32)
        // NetworkVarNames: m_numBestOfMaps (int)
        // NetworkVarNames: m_nHalloweenMaskListSeed (int)
        // NetworkVarNames: m_bBombDropped (bool)
        // NetworkVarNames: m_bBombPlanted (bool)
        // NetworkVarNames: m_iRoundWinStatus (int)
        // NetworkVarNames: m_eRoundWinReason (int)
        // NetworkVarNames: m_bTCantBuy (bool)
        // NetworkVarNames: m_bCTCantBuy (bool)
        // NetworkVarNames: m_flGuardianBuyUntilTime (GameTime_t)
        // NetworkVarNames: m_iMatchStats_RoundResults (int)
        // NetworkVarNames: m_iMatchStats_PlayersAlive_CT (int)
        // NetworkVarNames: m_iMatchStats_PlayersAlive_T (int)
        // NetworkVarNames: m_TeamRespawnWaveTimes (float)
        // NetworkVarNames: m_flNextRespawnWave (GameTime_t)
        // NetworkVarNames: m_nServerQuestID (int)
        // NetworkVarNames: m_vMinimapMins (Vector)
        // NetworkVarNames: m_vMinimapMaxs (Vector)
        // NetworkVarNames: m_MinimapVerticalSectionHeights (float)
        // NetworkVarNames: m_nEndMatchMapGroupVoteTypes (int)
        // NetworkVarNames: m_nEndMatchMapGroupVoteOptions (int)
        // NetworkVarNames: m_nEndMatchMapVoteWinner (int)
        // NetworkVarNames: m_iNumConsecutiveCTLoses (int)
        // NetworkVarNames: m_iNumConsecutiveTerroristLoses (int)
        // NetworkVarNames: m_nMatchAbortedEarlyReason (int)
        // NetworkVarNames: m_pGameModeRules (CCSGameModeRules *)
        // NetworkVarNames: m_RetakeRules (CRetakeGameRules)
        // NetworkVarNames: m_nMatchEndCount (uint8)
        // NetworkVarNames: m_nTTeamIntroVariant (int)
        // NetworkVarNames: m_nCTTeamIntroVariant (int)
        // NetworkVarNames: m_bTeamIntroPeriod (bool)
        // NetworkVarNames: m_iRoundEndWinnerTeam (int)
        // NetworkVarNames: m_eRoundEndReason (int)
        // NetworkVarNames: m_bRoundEndShowTimerDefend (bool)
        // NetworkVarNames: m_iRoundEndTimerTime (int)
        // NetworkVarNames: m_sRoundEndFunFactToken (CUtlString)
        // NetworkVarNames: m_iRoundEndFunFactPlayerSlot (CPlayerSlot)
        // NetworkVarNames: m_iRoundEndFunFactData1 (int)
        // NetworkVarNames: m_iRoundEndFunFactData2 (int)
        // NetworkVarNames: m_iRoundEndFunFactData3 (int)
        // NetworkVarNames: m_sRoundEndMessage (CUtlString)
        // NetworkVarNames: m_iRoundEndPlayerCount (int)
        // NetworkVarNames: m_bRoundEndNoMusic (bool)
        // NetworkVarNames: m_iRoundEndLegacy (int)
        // NetworkVarNames: m_nRoundEndCount (uint8)
        // NetworkVarNames: m_iRoundStartRoundNumber (int)
        // NetworkVarNames: m_nRoundStartCount (uint8)
        public static class CCSGameRules {
            public const nint __m_pChainEntity = 0x98; // CNetworkVarChainer
            public const nint m_coopMissionManager = 0xC0; // CHandle<CBaseEntity>
            public const nint m_bFreezePeriod = 0xC4; // bool
            public const nint m_bWarmupPeriod = 0xC5; // bool
            public const nint m_fWarmupPeriodEnd = 0xC8; // GameTime_t
            public const nint m_fWarmupPeriodStart = 0xCC; // GameTime_t
            public const nint m_nTotalPausedTicks = 0xD0; // int32
            public const nint m_nPauseStartTick = 0xD4; // int32
            public const nint m_bServerPaused = 0xD8; // bool
            public const nint m_bGamePaused = 0xD9; // bool
            public const nint m_bTerroristTimeOutActive = 0xDA; // bool
            public const nint m_bCTTimeOutActive = 0xDB; // bool
            public const nint m_flTerroristTimeOutRemaining = 0xDC; // float32
            public const nint m_flCTTimeOutRemaining = 0xE0; // float32
            public const nint m_nTerroristTimeOuts = 0xE4; // int32
            public const nint m_nCTTimeOuts = 0xE8; // int32
            public const nint m_bTechnicalTimeOut = 0xEC; // bool
            public const nint m_bMatchWaitingForResume = 0xED; // bool
            public const nint m_iRoundTime = 0xF0; // int32
            public const nint m_fMatchStartTime = 0xF4; // float32
            public const nint m_fRoundStartTime = 0xF8; // GameTime_t
            public const nint m_flRestartRoundTime = 0xFC; // GameTime_t
            public const nint m_bGameRestart = 0x100; // bool
            public const nint m_flGameStartTime = 0x104; // float32
            public const nint m_timeUntilNextPhaseStarts = 0x108; // float32
            public const nint m_gamePhase = 0x10C; // int32
            public const nint m_totalRoundsPlayed = 0x110; // int32
            public const nint m_nRoundsPlayedThisPhase = 0x114; // int32
            public const nint m_nOvertimePlaying = 0x118; // int32
            public const nint m_iHostagesRemaining = 0x11C; // int32
            public const nint m_bAnyHostageReached = 0x120; // bool
            public const nint m_bMapHasBombTarget = 0x121; // bool
            public const nint m_bMapHasRescueZone = 0x122; // bool
            public const nint m_bMapHasBuyZone = 0x123; // bool
            public const nint m_bIsQueuedMatchmaking = 0x124; // bool
            public const nint m_nQueuedMatchmakingMode = 0x128; // int32
            public const nint m_bIsValveDS = 0x12C; // bool
            public const nint m_bLogoMap = 0x12D; // bool
            public const nint m_bPlayAllStepSoundsOnServer = 0x12E; // bool
            public const nint m_iSpectatorSlotCount = 0x130; // int32
            public const nint m_MatchDevice = 0x134; // int32
            public const nint m_bHasMatchStarted = 0x138; // bool
            public const nint m_nNextMapInMapgroup = 0x13C; // int32
            public const nint m_szTournamentEventName = 0x140; // char[512]
            public const nint m_szTournamentEventStage = 0x340; // char[512]
            public const nint m_szMatchStatTxt = 0x540; // char[512]
            public const nint m_szTournamentPredictionsTxt = 0x740; // char[512]
            public const nint m_nTournamentPredictionsPct = 0x940; // int32
            public const nint m_flCMMItemDropRevealStartTime = 0x944; // GameTime_t
            public const nint m_flCMMItemDropRevealEndTime = 0x948; // GameTime_t
            public const nint m_bIsDroppingItems = 0x94C; // bool
            public const nint m_bIsQuestEligible = 0x94D; // bool
            public const nint m_bIsHltvActive = 0x94E; // bool
            public const nint m_nGuardianModeWaveNumber = 0x950; // int32
            public const nint m_nGuardianModeSpecialKillsRemaining = 0x954; // int32
            public const nint m_nGuardianModeSpecialWeaponNeeded = 0x958; // int32
            public const nint m_nGuardianGrenadesToGiveBots = 0x95C; // int32
            public const nint m_nNumHeaviesToSpawn = 0x960; // int32
            public const nint m_numGlobalGiftsGiven = 0x964; // uint32
            public const nint m_numGlobalGifters = 0x968; // uint32
            public const nint m_numGlobalGiftsPeriodSeconds = 0x96C; // uint32
            public const nint m_arrFeaturedGiftersAccounts = 0x970; // uint32[4]
            public const nint m_arrFeaturedGiftersGifts = 0x980; // uint32[4]
            public const nint m_arrProhibitedItemIndices = 0x990; // uint16[100]
            public const nint m_arrTournamentActiveCasterAccounts = 0xA58; // uint32[4]
            public const nint m_numBestOfMaps = 0xA68; // int32
            public const nint m_nHalloweenMaskListSeed = 0xA6C; // int32
            public const nint m_bBombDropped = 0xA70; // bool
            public const nint m_bBombPlanted = 0xA71; // bool
            public const nint m_iRoundWinStatus = 0xA74; // int32
            public const nint m_eRoundWinReason = 0xA78; // int32
            public const nint m_bTCantBuy = 0xA7C; // bool
            public const nint m_bCTCantBuy = 0xA7D; // bool
            public const nint m_flGuardianBuyUntilTime = 0xA80; // GameTime_t
            public const nint m_iMatchStats_RoundResults = 0xA84; // int32[30]
            public const nint m_iMatchStats_PlayersAlive_CT = 0xAFC; // int32[30]
            public const nint m_iMatchStats_PlayersAlive_T = 0xB74; // int32[30]
            public const nint m_TeamRespawnWaveTimes = 0xBEC; // float32[32]
            public const nint m_flNextRespawnWave = 0xC6C; // GameTime_t[32]
            public const nint m_nServerQuestID = 0xCEC; // int32
            public const nint m_vMinimapMins = 0xCF0; // Vector
            public const nint m_vMinimapMaxs = 0xCFC; // Vector
            public const nint m_MinimapVerticalSectionHeights = 0xD08; // float32[8]
            public const nint m_bDontIncrementCoopWave = 0xD28; // bool
            public const nint m_bSpawnedTerrorHuntHeavy = 0xD29; // bool
            public const nint m_nEndMatchMapGroupVoteTypes = 0xD2C; // int32[10]
            public const nint m_nEndMatchMapGroupVoteOptions = 0xD54; // int32[10]
            public const nint m_nEndMatchMapVoteWinner = 0xD7C; // int32
            public const nint m_iNumConsecutiveCTLoses = 0xD80; // int32
            public const nint m_iNumConsecutiveTerroristLoses = 0xD84; // int32
            public const nint m_bHasHostageBeenTouched = 0xDA0; // bool
            public const nint m_flIntermissionStartTime = 0xDA4; // GameTime_t
            public const nint m_flIntermissionEndTime = 0xDA8; // GameTime_t
            public const nint m_bLevelInitialized = 0xDAC; // bool
            public const nint m_iTotalRoundsPlayed = 0xDB0; // int32
            public const nint m_iUnBalancedRounds = 0xDB4; // int32
            public const nint m_endMatchOnRoundReset = 0xDB8; // bool
            public const nint m_endMatchOnThink = 0xDB9; // bool
            public const nint m_iFreezeTime = 0xDBC; // int32
            public const nint m_iNumTerrorist = 0xDC0; // int32
            public const nint m_iNumCT = 0xDC4; // int32
            public const nint m_iNumSpawnableTerrorist = 0xDC8; // int32
            public const nint m_iNumSpawnableCT = 0xDCC; // int32
            public const nint m_arrSelectedHostageSpawnIndices = 0xDD0; // CUtlVector<int32>
            public const nint m_nSpawnPointsRandomSeed = 0xDE8; // int32
            public const nint m_bFirstConnected = 0xDEC; // bool
            public const nint m_bCompleteReset = 0xDED; // bool
            public const nint m_bPickNewTeamsOnReset = 0xDEE; // bool
            public const nint m_bScrambleTeamsOnRestart = 0xDEF; // bool
            public const nint m_bSwapTeamsOnRestart = 0xDF0; // bool
            public const nint m_nEndMatchTiedVotes = 0xDF8; // CUtlVector<int32>
            public const nint m_bNeedToAskPlayersForContinueVote = 0xE14; // bool
            public const nint m_numQueuedMatchmakingAccounts = 0xE18; // uint32
            public const nint m_pQueuedMatchmakingReservationString = 0xE20; // char*
            public const nint m_numTotalTournamentDrops = 0xE28; // uint32
            public const nint m_numSpectatorsCountMax = 0xE2C; // uint32
            public const nint m_numSpectatorsCountMaxTV = 0xE30; // uint32
            public const nint m_numSpectatorsCountMaxLnk = 0xE34; // uint32
            public const nint m_bForceTeamChangeSilent = 0xE40; // bool
            public const nint m_bLoadingRoundBackupData = 0xE41; // bool
            public const nint m_nMatchInfoShowType = 0xE78; // int32
            public const nint m_flMatchInfoDecidedTime = 0xE7C; // float32
            public const nint m_flCoopRespawnAndHealTime = 0xE98; // float32
            public const nint m_coopBonusCoinsFound = 0xE9C; // int32
            public const nint m_coopBonusPistolsOnly = 0xEA0; // bool
            public const nint m_coopPlayersInDeploymentZone = 0xEA1; // bool
            public const nint m_coopMissionDeadPlayerRespawnEnabled = 0xEA2; // bool
            public const nint mTeamDMLastWinningTeamNumber = 0xEA4; // int32
            public const nint mTeamDMLastThinkTime = 0xEA8; // float32
            public const nint m_flTeamDMLastAnnouncementTime = 0xEAC; // float32
            public const nint m_iAccountTerrorist = 0xEB0; // int32
            public const nint m_iAccountCT = 0xEB4; // int32
            public const nint m_iSpawnPointCount_Terrorist = 0xEB8; // int32
            public const nint m_iSpawnPointCount_CT = 0xEBC; // int32
            public const nint m_iMaxNumTerrorists = 0xEC0; // int32
            public const nint m_iMaxNumCTs = 0xEC4; // int32
            public const nint m_iLoserBonus = 0xEC8; // int32
            public const nint m_iLoserBonusMostRecentTeam = 0xECC; // int32
            public const nint m_tmNextPeriodicThink = 0xED0; // float32
            public const nint m_bVoiceWonMatchBragFired = 0xED4; // bool
            public const nint m_fWarmupNextChatNoticeTime = 0xED8; // float32
            public const nint m_iHostagesRescued = 0xEE0; // int32
            public const nint m_iHostagesTouched = 0xEE4; // int32
            public const nint m_flNextHostageAnnouncement = 0xEE8; // float32
            public const nint m_bNoTerroristsKilled = 0xEEC; // bool
            public const nint m_bNoCTsKilled = 0xEED; // bool
            public const nint m_bNoEnemiesKilled = 0xEEE; // bool
            public const nint m_bCanDonateWeapons = 0xEEF; // bool
            public const nint m_firstKillTime = 0xEF4; // float32
            public const nint m_firstBloodTime = 0xEFC; // float32
            public const nint m_hostageWasInjured = 0xF18; // bool
            public const nint m_hostageWasKilled = 0xF19; // bool
            public const nint m_bVoteCalled = 0xF28; // bool
            public const nint m_bServerVoteOnReset = 0xF29; // bool
            public const nint m_flVoteCheckThrottle = 0xF2C; // float32
            public const nint m_bBuyTimeEnded = 0xF30; // bool
            public const nint m_nLastFreezeEndBeep = 0xF34; // int32
            public const nint m_bTargetBombed = 0xF38; // bool
            public const nint m_bBombDefused = 0xF39; // bool
            public const nint m_bMapHasBombZone = 0xF3A; // bool
            public const nint m_vecMainCTSpawnPos = 0xF58; // Vector
            public const nint m_CTSpawnPointsMasterList = 0xF68; // CUtlVector<SpawnPoint*>
            public const nint m_TerroristSpawnPointsMasterList = 0xF80; // CUtlVector<SpawnPoint*>
            public const nint m_bRespawningAllRespawnablePlayers = 0xF98; // bool
            public const nint m_iNextCTSpawnPoint = 0xF9C; // int32
            public const nint m_flCTSpawnPointUsedTime = 0xFA0; // float32
            public const nint m_iNextTerroristSpawnPoint = 0xFA4; // int32
            public const nint m_flTerroristSpawnPointUsedTime = 0xFA8; // float32
            public const nint m_CTSpawnPoints = 0xFB0; // CUtlVector<SpawnPoint*>
            public const nint m_TerroristSpawnPoints = 0xFC8; // CUtlVector<SpawnPoint*>
            public const nint m_bIsUnreservedGameServer = 0xFE0; // bool
            public const nint m_fAutobalanceDisplayTime = 0xFE4; // float32
            public const nint m_bAllowWeaponSwitch = 0x1250; // bool
            public const nint m_bRoundTimeWarningTriggered = 0x1251; // bool
            public const nint m_phaseChangeAnnouncementTime = 0x1254; // GameTime_t
            public const nint m_fNextUpdateTeamClanNamesTime = 0x1258; // float32
            public const nint m_flLastThinkTime = 0x125C; // GameTime_t
            public const nint m_fAccumulatedRoundOffDamage = 0x1260; // float32
            public const nint m_nShorthandedBonusLastEvalRound = 0x1264; // int32
            public const nint m_nMatchAbortedEarlyReason = 0x14E0; // int32
            public const nint m_bHasTriggeredRoundStartMusic = 0x14E4; // bool
            public const nint m_bHasTriggeredCoopSpawnReset = 0x14E5; // bool
            public const nint m_bSwitchingTeamsAtRoundReset = 0x14E6; // bool
            public const nint m_pGameModeRules = 0x1500; // CCSGameModeRules*
            public const nint m_BtGlobalBlackboard = 0x1508; // KeyValues3
            public const nint m_hPlayerResource = 0x1568; // CHandle<CBaseEntity>
            public const nint m_RetakeRules = 0x1570; // CRetakeGameRules
            public const nint m_GuardianBotSkillLevelMax = 0x1754; // int32
            public const nint m_GuardianBotSkillLevelMin = 0x1758; // int32
            public const nint m_arrTeamUniqueKillWeaponsMatch = 0x1760; // CUtlVector<int32>[4]
            public const nint m_bTeamLastKillUsedUniqueWeaponMatch = 0x17C0; // bool[4]
            public const nint m_nMatchEndCount = 0x17E8; // uint8
            public const nint m_nTTeamIntroVariant = 0x17EC; // int32
            public const nint m_nCTTeamIntroVariant = 0x17F0; // int32
            public const nint m_bTeamIntroPeriod = 0x17F4; // bool
            public const nint m_fTeamIntroPeriodEnd = 0x17F8; // GameTime_t
            public const nint m_bPlayedTeamIntroVO = 0x17FC; // bool
            public const nint m_iRoundEndWinnerTeam = 0x1800; // int32
            public const nint m_eRoundEndReason = 0x1804; // int32
            public const nint m_bRoundEndShowTimerDefend = 0x1808; // bool
            public const nint m_iRoundEndTimerTime = 0x180C; // int32
            public const nint m_sRoundEndFunFactToken = 0x1810; // CUtlString
            public const nint m_iRoundEndFunFactPlayerSlot = 0x1818; // CPlayerSlot
            public const nint m_iRoundEndFunFactData1 = 0x181C; // int32
            public const nint m_iRoundEndFunFactData2 = 0x1820; // int32
            public const nint m_iRoundEndFunFactData3 = 0x1824; // int32
            public const nint m_sRoundEndMessage = 0x1828; // CUtlString
            public const nint m_iRoundEndPlayerCount = 0x1830; // int32
            public const nint m_bRoundEndNoMusic = 0x1834; // bool
            public const nint m_iRoundEndLegacy = 0x1838; // int32
            public const nint m_nRoundEndCount = 0x183C; // uint8
            public const nint m_iRoundStartRoundNumber = 0x1840; // int32
            public const nint m_nRoundStartCount = 0x1844; // uint8
            public const nint m_flLastPerfSampleTime = 0x5850; // float64
            public const nint m_bSkipNextServerPerfSample = 0x5858; // bool
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseProvideFeatureTag
        // MPulseLibraryBindings
        public static class CCSTakeDamageInfoAPI {
        }
        // Parent: None
        // Fields count: 1
        public static class CCSGameModeRules {
            public const nint __m_pChainEntity = 0x8; // CNetworkVarChainer
        }
        // Parent: CCSGameModeRules
        // Fields count: 0
        public static class CCSGameModeRules_Noop {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseInstanceDomainInfo
        // MPulseLibraryBindings
        // MPulseDomainOptInFeatureTag
        public static class CCSGameModeScript {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseLibraryBindings
        public static class CCSGameModeScript_ConVars {
        }
        // Parent: CCSGameModeRules
        // Fields count: 1
        //
        // Metadata:
        // NetworkVarNames: m_WeaponSequence (CUtlString)
        public static class CCSGameModeRules_ArmsRace {
            public const nint m_WeaponSequence = 0x38; // CNetworkUtlVectorBase<CUtlString>
        }
        // Parent: CCSGameModeScript
        // Fields count: 1
        //
        // Metadata:
        // MPulseInstanceDomainInfo
        // MPulseLibraryBindings
        // MPulseDomainOptInFeatureTag
        public static class CCSArmsRaceScript {
            public const nint m_pOuter = 0xD8; // CCSGameModeRules_ArmsRace*
        }
        // Parent: CCSGameModeRules
        // Fields count: 3
        //
        // Metadata:
        // NetworkVarNames: m_flDMBonusStartTime (GameTime_t)
        // NetworkVarNames: m_flDMBonusTimeLength (float)
        // NetworkVarNames: m_nDMBonusWeaponLoadoutSlot (int16)
        public static class CCSGameModeRules_Deathmatch {
            public const nint m_flDMBonusStartTime = 0x38; // GameTime_t
            public const nint m_flDMBonusTimeLength = 0x3C; // float32
            public const nint m_nDMBonusWeaponLoadoutSlot = 0x40; // int16
        }
        // Parent: CCSGameModeScript
        // Fields count: 1
        //
        // Metadata:
        // MPulseInstanceDomainInfo
        // MPulseLibraryBindings
        // MPulseDomainOptInFeatureTag
        public static class CCSDeathmatchScript {
            public const nint m_pOuter = 0xD8; // CCSGameModeRules_Deathmatch*
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseLibraryBindings
        public static class CCSDeathmatchScript_ConVars {
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // NetworkVarNames: m_nMatchSeed (int)
        // NetworkVarNames: m_bBlockersPresent (bool)
        // NetworkVarNames: m_bRoundInProgress (bool)
        // NetworkVarNames: m_iFirstSecondHalfRound (int)
        // NetworkVarNames: m_iBombSite (int)
        public static class CRetakeGameRules {
            public const nint m_nMatchSeed = 0xF8; // int32
            public const nint m_bBlockersPresent = 0xFC; // bool
            public const nint m_bRoundInProgress = 0xFD; // bool
            public const nint m_iFirstSecondHalfRound = 0x100; // int32
            public const nint m_iBombSite = 0x104; // int32
        }
        // Parent: None
        // Fields count: 0
        public static class QuestProgress {
        }
        // Parent: None
        // Fields count: 13
        //
        // Metadata:
        // NetworkVarNames: m_iKills (int)
        // NetworkVarNames: m_iDeaths (int)
        // NetworkVarNames: m_iAssists (int)
        // NetworkVarNames: m_iDamage (int)
        // NetworkVarNames: m_iEquipmentValue (int)
        // NetworkVarNames: m_iMoneySaved (int)
        // NetworkVarNames: m_iKillReward (int)
        // NetworkVarNames: m_iLiveTime (int)
        // NetworkVarNames: m_iHeadShotKills (int)
        // NetworkVarNames: m_iObjective (int)
        // NetworkVarNames: m_iCashEarned (int)
        // NetworkVarNames: m_iUtilityDamage (int)
        // NetworkVarNames: m_iEnemiesFlashed (int)
        public static class CSPerRoundStats_t {
            public const nint m_iKills = 0x30; // int32
            public const nint m_iDeaths = 0x34; // int32
            public const nint m_iAssists = 0x38; // int32
            public const nint m_iDamage = 0x3C; // int32
            public const nint m_iEquipmentValue = 0x40; // int32
            public const nint m_iMoneySaved = 0x44; // int32
            public const nint m_iKillReward = 0x48; // int32
            public const nint m_iLiveTime = 0x4C; // int32
            public const nint m_iHeadShotKills = 0x50; // int32
            public const nint m_iObjective = 0x54; // int32
            public const nint m_iCashEarned = 0x58; // int32
            public const nint m_iUtilityDamage = 0x5C; // int32
            public const nint m_iEnemiesFlashed = 0x60; // int32
        }
        // Parent: CSPerRoundStats_t
        // Fields count: 21
        //
        // Metadata:
        // NetworkVarNames: m_iEnemy5Ks (int)
        // NetworkVarNames: m_iEnemy4Ks (int)
        // NetworkVarNames: m_iEnemy3Ks (int)
        // NetworkVarNames: m_iEnemyKnifeKills (int)
        // NetworkVarNames: m_iEnemyTaserKills (int)
        public static class CSMatchStats_t {
            public const nint m_iEnemy5Ks = 0x64; // int32
            public const nint m_iEnemy4Ks = 0x68; // int32
            public const nint m_iEnemy3Ks = 0x6C; // int32
            public const nint m_iEnemyKnifeKills = 0x70; // int32
            public const nint m_iEnemyTaserKills = 0x74; // int32
            public const nint m_iEnemy2Ks = 0x78; // int32
            public const nint m_iUtility_Count = 0x7C; // int32
            public const nint m_iUtility_Successes = 0x80; // int32
            public const nint m_iUtility_Enemies = 0x84; // int32
            public const nint m_iFlash_Count = 0x88; // int32
            public const nint m_iFlash_Successes = 0x8C; // int32
            public const nint m_nHealthPointsRemovedTotal = 0x90; // int32
            public const nint m_nHealthPointsDealtTotal = 0x94; // int32
            public const nint m_nShotsFiredTotal = 0x98; // int32
            public const nint m_nShotsOnTargetTotal = 0x9C; // int32
            public const nint m_i1v1Count = 0xA0; // int32
            public const nint m_i1v1Wins = 0xA4; // int32
            public const nint m_i1v2Count = 0xA8; // int32
            public const nint m_i1v2Wins = 0xAC; // int32
            public const nint m_iEntryCount = 0xB0; // int32
            public const nint m_iEntryWins = 0xB4; // int32
        }
        // Parent: CBaseEntity
        // Fields count: 8
        //
        // Metadata:
        // NetworkVarNames: m_nVariant (int)
        // NetworkVarNames: m_nRandom (int)
        // NetworkVarNames: m_nOrdinal (int)
        // NetworkVarNames: m_sWeaponName (CUtlString)
        // NetworkVarNames: m_xuid (XUID)
        // NetworkVarNames: m_agentItem (CEconItemView)
        // NetworkVarNames: m_glovesItem (CEconItemView)
        // NetworkVarNames: m_weaponItem (CEconItemView)
        public static class CCSGO_TeamPreviewCharacterPosition {
            public const nint m_nVariant = 0x7A8; // int32
            public const nint m_nRandom = 0x7AC; // int32
            public const nint m_nOrdinal = 0x7B0; // int32
            public const nint m_sWeaponName = 0x7B8; // CUtlString
            public const nint m_xuid = 0x7C0; // uint64
            public const nint m_agentItem = 0x7C8; // CEconItemView
            public const nint m_glovesItem = 0xA40; // CEconItemView
            public const nint m_weaponItem = 0xCB8; // CEconItemView
        }
        // Parent: CCSGO_TeamPreviewCharacterPosition
        // Fields count: 0
        public static class CCSGO_TeamSelectCharacterPosition {
        }
        // Parent: CCSGO_TeamSelectCharacterPosition
        // Fields count: 0
        public static class CCSGO_TeamSelectTerroristPosition {
        }
        // Parent: CCSGO_TeamSelectCharacterPosition
        // Fields count: 0
        public static class CCSGO_TeamSelectCounterTerroristPosition {
        }
        // Parent: CCSGO_TeamPreviewCharacterPosition
        // Fields count: 0
        public static class CCSGO_TeamIntroCharacterPosition {
        }
        // Parent: CCSGO_TeamIntroCharacterPosition
        // Fields count: 0
        public static class CCSGO_TeamIntroTerroristPosition {
        }
        // Parent: CCSGO_TeamIntroCharacterPosition
        // Fields count: 0
        public static class CCSGO_TeamIntroCounterTerroristPosition {
        }
        // Parent: CCSGO_TeamIntroCharacterPosition
        // Fields count: 0
        public static class CCSGO_WingmanIntroCharacterPosition {
        }
        // Parent: CCSGO_WingmanIntroCharacterPosition
        // Fields count: 0
        public static class CCSGO_WingmanIntroTerroristPosition {
        }
        // Parent: CCSGO_WingmanIntroCharacterPosition
        // Fields count: 0
        public static class CCSGO_WingmanIntroCounterTerroristPosition {
        }
        // Parent: CBaseEntity
        // Fields count: 0
        public static class CCSMinimapBoundary {
        }
        // Parent: None
        // Fields count: 0
        public static class CCSGOPlayerAnimGraphState {
        }
        // Parent: CBaseEntity
        // Fields count: 5
        //
        // Metadata:
        // NetworkVarNames: m_hPlayer (CHandle< CCSPlayerPawn>)
        // NetworkVarNames: m_hPingedEntity (CHandle< CBaseEntity>)
        // NetworkVarNames: m_iType (int)
        // NetworkVarNames: m_bUrgent (bool)
        // NetworkVarNames: m_szPlaceName (char)
        public static class CPlayerPing {
            public const nint m_hPlayer = 0x7B0; // CHandle<CCSPlayerPawn>
            public const nint m_hPingedEntity = 0x7B4; // CHandle<CBaseEntity>
            public const nint m_iType = 0x7B8; // int32
            public const nint m_bUrgent = 0x7BC; // bool
            public const nint m_szPlaceName = 0x7BD; // char[18]
        }
        // Parent: CPlayerPawnComponent
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_hPlayerPing (CHandle< CBaseEntity>)
        public static class CCSPlayer_PingServices {
            public const nint m_flPlayerPingTokens = 0x40; // GameTime_t[5]
            public const nint m_hPlayerPing = 0x54; // CHandle<CBaseEntity>
        }
        // Parent: CBaseEntity
        // Fields count: 10
        //
        // Metadata:
        // NetworkVarNames: m_bHostageAlive (bool)
        // NetworkVarNames: m_isHostageFollowingSomeone (bool)
        // NetworkVarNames: m_iHostageEntityIDs (CEntityIndex)
        // NetworkVarNames: m_bombsiteCenterA (Vector)
        // NetworkVarNames: m_bombsiteCenterB (Vector)
        // NetworkVarNames: m_hostageRescueX (int)
        // NetworkVarNames: m_hostageRescueY (int)
        // NetworkVarNames: m_hostageRescueZ (int)
        // NetworkVarNames: m_bEndMatchNextMapAllVoted (bool)
        public static class CCSPlayerResource {
            public const nint m_bHostageAlive = 0x7A8; // bool[12]
            public const nint m_isHostageFollowingSomeone = 0x7B4; // bool[12]
            public const nint m_iHostageEntityIDs = 0x7C0; // CEntityIndex[12]
            public const nint m_bombsiteCenterA = 0x7F0; // Vector
            public const nint m_bombsiteCenterB = 0x7FC; // Vector
            public const nint m_hostageRescueX = 0x808; // int32[4]
            public const nint m_hostageRescueY = 0x818; // int32[4]
            public const nint m_hostageRescueZ = 0x828; // int32[4]
            public const nint m_bEndMatchNextMapAllVoted = 0x838; // bool
            public const nint m_foundGoalPositions = 0x839; // bool
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseProvideFeatureTag
        // MPulseLibraryBindings
        public static class CCSPlayerControllerAPI {
        }
        // Parent: CPlayerPawnComponent
        // Fields count: 0
        public static class CPlayer_ViewModelServices {
        }
    }
    // Module: libsoundsystem.so
    // Classes count: 50
    // Enums count: 0
    public static class Libsoundsystem {
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVoiceContainerBase {
            public const nint m_curves = 0x20; // CUtlDict<CPiecewiseCurve,F(size=1)>
        }
        // Parent: CVoiceContainerBase
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVoiceContainerDefault {
        }
        // Parent: CVoiceContainerBase
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVoiceContainerWavFileReader {
            public const nint m_wavFilePath = 0x60; // CUtlString
        }
        // Parent: CVoiceContainerWavFileReader
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVoiceContainerTestConstant {
            public const nint m_flTestConstantParam = 0x68; // bool
        }
        // Parent: CVoiceContainerBase
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVoiceContainerTestNestedDynamic {
            public const nint m_SoundToPlay = 0x60; // CStrongHandle<InfoForResourceTypeCVoiceContainerBase>
            public const nint m_flTestConstantParam = 0x68; // float32
        }
        // Parent: CVoiceContainerBase
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVoiceContainerDecayingSineWave {
            public const nint m_flFrequency = 0x60; // float32
            public const nint m_flDecayTime = 0x64; // float32
        }
        // Parent: CVoiceContainerDecayingSineWave
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVoiceContainerAmpedDecayingSineWave {
            public const nint m_flGainAmount = 0x68; // float32
        }
        // Parent: CVoiceContainerBase
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVoiceContainerRealtimeFMSineWave {
            public const nint m_flCarrierFrequency = 0x60; // float32
            public const nint m_flModulatorFrequency = 0x64; // float32
            public const nint m_flModulatorAmount = 0x68; // float32
        }
        // Parent: CVoiceContainerBase
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVoiceContainerBlend {
            public const nint m_hSoundOne = 0x60; // CStrongHandle<InfoForResourceTypeCVoiceContainerBase>
            public const nint m_hSoundTwo = 0x68; // CStrongHandle<InfoForResourceTypeCVoiceContainerBase>
            public const nint m_flBlendAmount = 0x70; // float32
        }
        // Parent: CVoiceContainerBase
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVoiceContainerEngineSound {
            public const nint m_SoundToPlay = 0x60; // CStrongHandle<InfoForResourceTypeCVoiceContainerBase>
            public const nint m_flTestConstantParam = 0x68; // float32
            public const nint m_flTestSoundEventBoundParam = 0x6C; // float32
            public const nint m_flEngineRPM = 0x70; // float32
        }
        // Parent: CVoiceContainerWavFileReader
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVoiceContainerEnvelopeAnalyzer {
            public const nint m_envBuffer = 0x68; // CUtlVector<float32>
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
        // Fields count: 9
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VMixModDelayDesc_t {
            public const nint m_feedbackFilter = 0x0; // VMixFilterDesc_t
            public const nint m_bPhaseInvert = 0x10; // bool
            public const nint m_flGlideTime = 0x14; // float32
            public const nint m_flDelay = 0x18; // float32
            public const nint m_flOutputGain = 0x1C; // float32
            public const nint m_flFeedbackGain = 0x20; // float32
            public const nint m_flModRate = 0x24; // float32
            public const nint m_flModDepth = 0x28; // float32
            public const nint m_bApplyAntialiasing = 0x2C; // bool
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VMixDiffusorDesc_t {
            public const nint m_flSize = 0x0; // float32
            public const nint m_flComplexity = 0x4; // float32
            public const nint m_flFeedback = 0x8; // float32
            public const nint m_flOutputGain = 0xC; // float32
        }
        // Parent: None
        // Fields count: 17
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VMixBoxverbDesc_t {
            public const nint m_flSizeMax = 0x0; // float32
            public const nint m_flSizeMin = 0x4; // float32
            public const nint m_flComplexity = 0x8; // float32
            public const nint m_flDiffusion = 0xC; // float32
            public const nint m_flModDepth = 0x10; // float32
            public const nint m_flModRate = 0x14; // float32
            public const nint m_bParallel = 0x18; // bool
            public const nint m_filterType = 0x1C; // VMixFilterDesc_t
            public const nint m_flWidth = 0x2C; // float32
            public const nint m_flHeight = 0x30; // float32
            public const nint m_flDepth = 0x34; // float32
            public const nint m_flFeedbackScale = 0x38; // float32
            public const nint m_flFeedbackWidth = 0x3C; // float32
            public const nint m_flFeedbackHeight = 0x40; // float32
            public const nint m_flFeedbackDepth = 0x44; // float32
            public const nint m_flOutputGain = 0x48; // float32
            public const nint m_flTaps = 0x4C; // float32
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VMixFreeverbDesc_t {
            public const nint m_flRoomSize = 0x0; // float32
            public const nint m_flDamp = 0x4; // float32
            public const nint m_flWidth = 0x8; // float32
            public const nint m_flLateReflections = 0xC; // float32
        }
        // Parent: None
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VMixPlateverbDesc_t {
            public const nint m_flPrefilter = 0x0; // float32
            public const nint m_flInputDiffusion1 = 0x4; // float32
            public const nint m_flInputDiffusion2 = 0x8; // float32
            public const nint m_flDecay = 0xC; // float32
            public const nint m_flDamp = 0x10; // float32
            public const nint m_flFeedbackDiffusion1 = 0x14; // float32
            public const nint m_flFeedbackDiffusion2 = 0x18; // float32
        }
        // Parent: None
        // Fields count: 12
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VMixDynamicsDesc_t {
            public const nint m_fldbGain = 0x0; // float32
            public const nint m_fldbNoiseGateThreshold = 0x4; // float32
            public const nint m_fldbCompressionThreshold = 0x8; // float32
            public const nint m_fldbLimiterThreshold = 0xC; // float32
            public const nint m_fldbKneeWidth = 0x10; // float32
            public const nint m_flRatio = 0x14; // float32
            public const nint m_flLimiterRatio = 0x18; // float32
            public const nint m_flAttackTimeMS = 0x1C; // float32
            public const nint m_flReleaseTimeMS = 0x20; // float32
            public const nint m_flRMSTimeMS = 0x24; // float32
            public const nint m_flWetMix = 0x28; // float32
            public const nint m_bPeakMode = 0x2C; // bool
        }
        // Parent: None
        // Fields count: 9
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VMixDynamicsCompressorDesc_t {
            public const nint m_fldbOutputGain = 0x0; // float32
            public const nint m_fldbCompressionThreshold = 0x4; // float32
            public const nint m_fldbKneeWidth = 0x8; // float32
            public const nint m_flCompressionRatio = 0xC; // float32
            public const nint m_flAttackTimeMS = 0x10; // float32
            public const nint m_flReleaseTimeMS = 0x14; // float32
            public const nint m_flRMSTimeMS = 0x18; // float32
            public const nint m_flWetMix = 0x1C; // float32
            public const nint m_bPeakMode = 0x20; // bool
        }
        // Parent: None
        // Fields count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VMixDynamicsBand_t {
            public const nint m_fldbGainInput = 0x0; // float32
            public const nint m_fldbGainOutput = 0x4; // float32
            public const nint m_fldbThresholdBelow = 0x8; // float32
            public const nint m_fldbThresholdAbove = 0xC; // float32
            public const nint m_flRatioBelow = 0x10; // float32
            public const nint m_flRatioAbove = 0x14; // float32
            public const nint m_flAttackTimeMS = 0x18; // float32
            public const nint m_flReleaseTimeMS = 0x1C; // float32
            public const nint m_bEnable = 0x20; // bool
            public const nint m_bSolo = 0x21; // bool
        }
        // Parent: None
        // Fields count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VMixDynamics3BandDesc_t {
            public const nint m_fldbGainOutput = 0x0; // float32
            public const nint m_flRMSTimeMS = 0x4; // float32
            public const nint m_fldbKneeWidth = 0x8; // float32
            public const nint m_flDepth = 0xC; // float32
            public const nint m_flWetMix = 0x10; // float32
            public const nint m_flTimeScale = 0x14; // float32
            public const nint m_flLowCutoffFreq = 0x18; // float32
            public const nint m_flHighCutoffFreq = 0x1C; // float32
            public const nint m_bPeakMode = 0x20; // bool
            public const nint m_bandDesc = 0x24; // VMixDynamicsBand_t[3]
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VMixEnvelopeDesc_t {
            public const nint m_flAttackTimeMS = 0x0; // float32
            public const nint m_flHoldTimeMS = 0x4; // float32
            public const nint m_flReleaseTimeMS = 0x8; // float32
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VMixPitchShiftDesc_t {
            public const nint m_nGrainSampleCount = 0x0; // int32
            public const nint m_flPitchShift = 0x4; // float32
            public const nint m_nQuality = 0x8; // int32
            public const nint m_nProcType = 0xC; // int32
        }
        // Parent: None
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VMixConvolutionDesc_t {
            public const nint m_fldbGain = 0x0; // float32
            public const nint m_flPreDelayMS = 0x4; // float32
            public const nint m_flWetMix = 0x8; // float32
            public const nint m_fldbLow = 0xC; // float32
            public const nint m_fldbMid = 0x10; // float32
            public const nint m_fldbHigh = 0x14; // float32
            public const nint m_flLowCutoffFreq = 0x18; // float32
            public const nint m_flHighCutoffFreq = 0x1C; // float32
        }
        // Parent: None
        // Fields count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VMixVocoderDesc_t {
            public const nint m_nBandCount = 0x0; // int32
            public const nint m_flBandwidth = 0x4; // float32
            public const nint m_fldBModGain = 0x8; // float32
            public const nint m_flFreqRangeStart = 0xC; // float32
            public const nint m_flFreqRangeEnd = 0x10; // float32
            public const nint m_fldBUnvoicedGain = 0x14; // float32
            public const nint m_flAttackTimeMS = 0x18; // float32
            public const nint m_flReleaseTimeMS = 0x1C; // float32
            public const nint m_nDebugBand = 0x20; // int32
            public const nint m_bPeakMode = 0x24; // bool
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VMixShaperDesc_t {
            public const nint m_nShape = 0x0; // int32
            public const nint m_fldbDrive = 0x4; // float32
            public const nint m_fldbOutputGain = 0x8; // float32
            public const nint m_flWetMix = 0xC; // float32
            public const nint m_nOversampleFactor = 0x10; // int32
        }
        // Parent: None
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VMixUtilityDesc_t {
            public const nint m_nOp = 0x0; // VMixChannelOperation_t
            public const nint m_flInputPan = 0x4; // float32
            public const nint m_flOutputBalance = 0x8; // float32
            public const nint m_fldbOutputGain = 0xC; // float32
            public const nint m_bBassMono = 0x10; // bool
            public const nint m_flBassFreq = 0x14; // float32
        }
        // Parent: None
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VMixAutoFilterDesc_t {
            public const nint m_flEnvelopeAmount = 0x0; // float32
            public const nint m_flAttackTimeMS = 0x4; // float32
            public const nint m_flReleaseTimeMS = 0x8; // float32
            public const nint m_filter = 0xC; // VMixFilterDesc_t
            public const nint m_flLFOAmount = 0x1C; // float32
            public const nint m_flLFORate = 0x20; // float32
            public const nint m_flPhase = 0x24; // float32
            public const nint m_nLFOShape = 0x28; // VMixLFOShape_t
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VMixOscDesc_t {
            public const nint oscType = 0x0; // VMixLFOShape_t
            public const nint m_freq = 0x4; // float32
            public const nint m_flPhase = 0x8; // float32
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VMixEffectChainDesc_t {
            public const nint m_flCrossfadeTime = 0x0; // float32
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VMixSubgraphSwitchDesc_t {
            public const nint m_interpolationMode = 0x0; // VMixSubgraphSwitchInterpolationType_t
            public const nint m_bOnlyTailsOnFadeOut = 0x4; // bool
            public const nint m_flInterpolationTime = 0x8; // float32
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyElementNameFn
        public static class CSosGroupActionSchema {
            public const nint m_name = 0x8; // CUtlString
            public const nint m_actionType = 0x10; // ActionType_t
            public const nint m_actionInstanceType = 0x14; // ActionType_t
        }
        // Parent: CSosGroupActionSchema
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSosGroupActionLimitSchema {
            public const nint m_nMaxCount = 0x18; // int32
            public const nint m_nStopType = 0x1C; // SosActionStopType_t
            public const nint m_nSortType = 0x20; // SosActionSortType_t
        }
        // Parent: CSosGroupActionSchema
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSosGroupActionTimeLimitSchema {
            public const nint m_flMaxDuration = 0x18; // float32
        }
        // Parent: CSosGroupActionSchema
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSosGroupActionTimeBlockLimitSchema {
            public const nint m_nMaxCount = 0x18; // int32
            public const nint m_flMaxDuration = 0x1C; // float32
        }
        // Parent: CSosGroupActionSchema
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSosGroupActionSetSoundeventParameterSchema {
            public const nint m_nMaxCount = 0x18; // int32
            public const nint m_flMinValue = 0x1C; // float32
            public const nint m_flMaxValue = 0x20; // float32
            public const nint m_opvarName = 0x28; // CUtlString
            public const nint m_nSortType = 0x30; // SosActionSortType_t
        }
        // Parent: CSosGroupActionSchema
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSosGroupActionSoundeventClusterSchema {
            public const nint m_nMinNearby = 0x18; // int32
            public const nint m_flClusterEpsilon = 0x1C; // float32
            public const nint m_shouldPlayOpvar = 0x20; // CUtlString
            public const nint m_shouldPlayClusterChild = 0x28; // CUtlString
            public const nint m_clusterSizeOpvar = 0x30; // CUtlString
            public const nint m_groupBoundingBoxMinsOpvar = 0x38; // CUtlString
            public const nint m_groupBoundingBoxMaxsOpvar = 0x40; // CUtlString
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSosGroupBranchPattern {
            public const nint m_bMatchEventName = 0x8; // bool
            public const nint m_bMatchEventSubString = 0x9; // bool
            public const nint m_bMatchEntIndex = 0xA; // bool
            public const nint m_bMatchOpvar = 0xB; // bool
        }
        // Parent: CSosGroupBranchPattern
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSosGroupMatchPattern {
            public const nint m_matchSoundEventName = 0x10; // CUtlString
            public const nint m_matchSoundEventSubString = 0x18; // CUtlString
            public const nint m_flEntIndex = 0x20; // float32
            public const nint m_flOpvar = 0x24; // float32
        }
        // Parent: None
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyElementNameFn
        public static class CSosSoundEventGroupSchema {
            public const nint m_name = 0x0; // CUtlString
            public const nint m_nType = 0x8; // SosGroupType_t
            public const nint m_bIsBlocking = 0xC; // bool
            public const nint m_nBlockMaxCount = 0x10; // int32
            public const nint m_bInvertMatch = 0x14; // bool
            public const nint m_matchPattern = 0x18; // CSosGroupMatchPattern
            public const nint m_branchPattern = 0x40; // CSosGroupBranchPattern
            public const nint m_vActions = 0xB0; // CSosGroupActionSchema*[4]
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSosSoundEventGroupListSchema {
            public const nint m_groupList = 0x0; // CUtlVector<CSosSoundEventGroupSchema>
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class SosEditItemInfo_t {
            public const nint itemType = 0x0; // SosEditItemType_t
            public const nint itemName = 0x8; // CUtlString
            public const nint itemTypeName = 0x10; // CUtlString
            public const nint itemKVString = 0x20; // CUtlString
            public const nint itemPos = 0x28; // Vector2D
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class SelectedEditItemInfo_t {
            public const nint m_EditItems = 0x0; // CUtlVector<SosEditItemInfo_t>
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSoundEventMetaData {
            public const nint m_soundEventVMix = 0x0; // CStrongHandle<InfoForResourceTypeCVMixListResource>
        }
        // Parent: None
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CDSPMixgroupModifier {
            public const nint m_mixgroup = 0x0; // CUtlString
            public const nint m_flModifier = 0x8; // float32
            public const nint m_flModifierMin = 0xC; // float32
            public const nint m_flSourceModifier = 0x10; // float32
            public const nint m_flSourceModifierMin = 0x14; // float32
            public const nint m_flListenerReverbModifierWhenSourceReverbIsActive = 0x18; // float32
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CDspPresetModifierList {
            public const nint m_dspName = 0x0; // CUtlString
            public const nint m_modifiers = 0x8; // CUtlVector<CDSPMixgroupModifier>
        }
    }
    // Module: libvphysics2.so
    // Classes count: 88
    // Enums count: 0
    public static class Libvphysics2 {
        // Parent: None
        // Fields count: 35
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CFeJiggleBone {
            public const nint m_nFlags = 0x0; // uint32
            public const nint m_flLength = 0x4; // float32
            public const nint m_flTipMass = 0x8; // float32
            public const nint m_flYawStiffness = 0xC; // float32
            public const nint m_flYawDamping = 0x10; // float32
            public const nint m_flPitchStiffness = 0x14; // float32
            public const nint m_flPitchDamping = 0x18; // float32
            public const nint m_flAlongStiffness = 0x1C; // float32
            public const nint m_flAlongDamping = 0x20; // float32
            public const nint m_flAngleLimit = 0x24; // float32
            public const nint m_flMinYaw = 0x28; // float32
            public const nint m_flMaxYaw = 0x2C; // float32
            public const nint m_flYawFriction = 0x30; // float32
            public const nint m_flYawBounce = 0x34; // float32
            public const nint m_flMinPitch = 0x38; // float32
            public const nint m_flMaxPitch = 0x3C; // float32
            public const nint m_flPitchFriction = 0x40; // float32
            public const nint m_flPitchBounce = 0x44; // float32
            public const nint m_flBaseMass = 0x48; // float32
            public const nint m_flBaseStiffness = 0x4C; // float32
            public const nint m_flBaseDamping = 0x50; // float32
            public const nint m_flBaseMinLeft = 0x54; // float32
            public const nint m_flBaseMaxLeft = 0x58; // float32
            public const nint m_flBaseLeftFriction = 0x5C; // float32
            public const nint m_flBaseMinUp = 0x60; // float32
            public const nint m_flBaseMaxUp = 0x64; // float32
            public const nint m_flBaseUpFriction = 0x68; // float32
            public const nint m_flBaseMinForward = 0x6C; // float32
            public const nint m_flBaseMaxForward = 0x70; // float32
            public const nint m_flBaseForwardFriction = 0x74; // float32
            public const nint m_flRadius0 = 0x78; // float32
            public const nint m_flRadius1 = 0x7C; // float32
            public const nint m_vPoint0 = 0x80; // Vector
            public const nint m_vPoint1 = 0x8C; // Vector
            public const nint m_nCollisionMask = 0x98; // uint16
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CFeNamedJiggleBone {
            public const nint m_strParentBone = 0x0; // CUtlString
            public const nint m_transform = 0x10; // CTransform
            public const nint m_nJiggleParent = 0x30; // uint32
            public const nint m_jiggleBone = 0x34; // CFeJiggleBone
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CFeIndexedJiggleBone {
            public const nint m_nNode = 0x0; // uint32
            public const nint m_nJiggleParent = 0x4; // uint32
            public const nint m_jiggleBone = 0x8; // CFeJiggleBone
        }
        // Parent: None
        // Fields count: 100
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class PhysFeModelDesc_t {
            public const nint m_CtrlHash = 0x0; // CUtlVector<uint32>
            public const nint m_CtrlName = 0x18; // CUtlVector<CUtlString>
            public const nint m_nStaticNodeFlags = 0x30; // uint32
            public const nint m_nDynamicNodeFlags = 0x34; // uint32
            public const nint m_flLocalForce = 0x38; // float32
            public const nint m_flLocalRotation = 0x3C; // float32
            public const nint m_nNodeCount = 0x40; // uint16
            public const nint m_nStaticNodes = 0x42; // uint16
            public const nint m_nRotLockStaticNodes = 0x44; // uint16
            public const nint m_nFirstPositionDrivenNode = 0x46; // uint16
            public const nint m_nSimdTriCount1 = 0x48; // uint16
            public const nint m_nSimdTriCount2 = 0x4A; // uint16
            public const nint m_nSimdQuadCount1 = 0x4C; // uint16
            public const nint m_nSimdQuadCount2 = 0x4E; // uint16
            public const nint m_nQuadCount1 = 0x50; // uint16
            public const nint m_nQuadCount2 = 0x52; // uint16
            public const nint m_nTreeDepth = 0x54; // uint16
            public const nint m_nNodeBaseJiggleboneDependsCount = 0x56; // uint16
            public const nint m_nRopeCount = 0x58; // uint16
            public const nint m_Ropes = 0x60; // CUtlVector<uint16>
            public const nint m_NodeBases = 0x78; // CUtlVector<FeNodeBase_t>
            public const nint m_SimdNodeBases = 0x90; // CUtlVector<FeSimdNodeBase_t>
            public const nint m_Quads = 0xA8; // CUtlVector<FeQuad_t>
            public const nint m_SimdQuads = 0xC0; // CUtlVector<FeSimdQuad_t>
            public const nint m_SimdTris = 0xD8; // CUtlVector<FeSimdTri_t>
            public const nint m_SimdRods = 0xF0; // CUtlVector<FeSimdRodConstraint_t>
            public const nint m_SimdRodsAnim = 0x108; // CUtlVector<FeSimdRodConstraintAnim_t>
            public const nint m_InitPose = 0x120; // CUtlVector<CTransform>
            public const nint m_Rods = 0x138; // CUtlVector<FeRodConstraint_t>
            public const nint m_Twists = 0x150; // CUtlVector<FeTwistConstraint_t>
            public const nint m_AxialEdges = 0x168; // CUtlVector<FeAxialEdgeBend_t>
            public const nint m_NodeInvMasses = 0x180; // CUtlVector<float32>
            public const nint m_CtrlOffsets = 0x198; // CUtlVector<FeCtrlOffset_t>
            public const nint m_CtrlOsOffsets = 0x1B0; // CUtlVector<FeCtrlOsOffset_t>
            public const nint m_FollowNodes = 0x1C8; // CUtlVector<FeFollowNode_t>
            public const nint m_CollisionPlanes = 0x1E0; // CUtlVector<FeCollisionPlane_t>
            public const nint m_NodeIntegrator = 0x1F8; // CUtlVector<FeNodeIntegrator_t>
            public const nint m_SpringIntegrator = 0x210; // CUtlVector<FeSpringIntegrator_t>
            public const nint m_SimdSpringIntegrator = 0x228; // CUtlVector<FeSimdSpringIntegrator_t>
            public const nint m_WorldCollisionParams = 0x240; // CUtlVector<FeWorldCollisionParams_t>
            public const nint m_LegacyStretchForce = 0x258; // CUtlVector<float32>
            public const nint m_NodeCollisionRadii = 0x270; // CUtlVector<float32>
            public const nint m_DynNodeFriction = 0x288; // CUtlVector<float32>
            public const nint m_LocalRotation = 0x2A0; // CUtlVector<float32>
            public const nint m_LocalForce = 0x2B8; // CUtlVector<float32>
            public const nint m_TaperedCapsuleStretches = 0x2D0; // CUtlVector<FeTaperedCapsuleStretch_t>
            public const nint m_TaperedCapsuleRigids = 0x2E8; // CUtlVector<FeTaperedCapsuleRigid_t>
            public const nint m_SphereRigids = 0x300; // CUtlVector<FeSphereRigid_t>
            public const nint m_WorldCollisionNodes = 0x318; // CUtlVector<uint16>
            public const nint m_TreeParents = 0x330; // CUtlVector<uint16>
            public const nint m_TreeCollisionMasks = 0x348; // CUtlVector<uint16>
            public const nint m_TreeChildren = 0x360; // CUtlVector<FeTreeChildren_t>
            public const nint m_FreeNodes = 0x378; // CUtlVector<uint16>
            public const nint m_FitMatrices = 0x390; // CUtlVector<FeFitMatrix_t>
            public const nint m_FitWeights = 0x3A8; // CUtlVector<FeFitWeight_t>
            public const nint m_ReverseOffsets = 0x3C0; // CUtlVector<FeNodeReverseOffset_t>
            public const nint m_AnimStrayRadii = 0x3D8; // CUtlVector<FeAnimStrayRadius_t>
            public const nint m_SimdAnimStrayRadii = 0x3F0; // CUtlVector<FeSimdAnimStrayRadius_t>
            public const nint m_KelagerBends = 0x408; // CUtlVector<FeKelagerBend2_t>
            public const nint m_CtrlSoftOffsets = 0x420; // CUtlVector<FeCtrlSoftOffset_t>
            public const nint m_JiggleBones = 0x438; // CUtlVector<CFeIndexedJiggleBone>
            public const nint m_SourceElems = 0x450; // CUtlVector<uint16>
            public const nint m_GoalDampedSpringIntegrators = 0x468; // CUtlVector<uint32>
            public const nint m_Tris = 0x480; // CUtlVector<FeTri_t>
            public const nint m_nTriCount1 = 0x498; // uint16
            public const nint m_nTriCount2 = 0x49A; // uint16
            public const nint m_nReservedUint8 = 0x49C; // uint8
            public const nint m_nExtraPressureIterations = 0x49D; // uint8
            public const nint m_nExtraGoalIterations = 0x49E; // uint8
            public const nint m_nExtraIterations = 0x49F; // uint8
            public const nint m_BoxRigids = 0x4A0; // CUtlVector<FeBoxRigid_t>
            public const nint m_DynNodeVertexSet = 0x4B8; // CUtlVector<uint8>
            public const nint m_VertexSetNames = 0x4D0; // CUtlVector<uint32>
            public const nint m_RigidColliderPriorities = 0x4E8; // CUtlVector<FeRigidColliderIndices_t>
            public const nint m_MorphLayers = 0x500; // CUtlVector<FeMorphLayerDepr_t>
            public const nint m_MorphSetData = 0x518; // CUtlVector<uint8>
            public const nint m_VertexMaps = 0x530; // CUtlVector<FeVertexMapDesc_t>
            public const nint m_VertexMapValues = 0x548; // CUtlVector<uint8>
            public const nint m_Effects = 0x560; // CUtlVector<FeEffectDesc_t>
            public const nint m_LockToParent = 0x578; // CUtlVector<FeCtrlOffset_t>
            public const nint m_LockToGoal = 0x590; // CUtlVector<uint16>
            public const nint m_SkelParents = 0x5A8; // CUtlVector<int16>
            public const nint m_DynNodeWindBases = 0x5C0; // CUtlVector<FeNodeWindBase_t>
            public const nint m_flInternalPressure = 0x5D8; // float32
            public const nint m_flDefaultTimeDilation = 0x5DC; // float32
            public const nint m_flWindage = 0x5E0; // float32
            public const nint m_flWindDrag = 0x5E4; // float32
            public const nint m_flDefaultSurfaceStretch = 0x5E8; // float32
            public const nint m_flDefaultThreadStretch = 0x5EC; // float32
            public const nint m_flDefaultGravityScale = 0x5F0; // float32
            public const nint m_flDefaultVelAirDrag = 0x5F4; // float32
            public const nint m_flDefaultExpAirDrag = 0x5F8; // float32
            public const nint m_flDefaultVelQuadAirDrag = 0x5FC; // float32
            public const nint m_flDefaultExpQuadAirDrag = 0x600; // float32
            public const nint m_flRodVelocitySmoothRate = 0x604; // float32
            public const nint m_flQuadVelocitySmoothRate = 0x608; // float32
            public const nint m_flAddWorldCollisionRadius = 0x60C; // float32
            public const nint m_flDefaultVolumetricSolveAmount = 0x610; // float32
            public const nint m_nRodVelocitySmoothIterations = 0x614; // uint16
            public const nint m_nQuadVelocitySmoothIterations = 0x616; // uint16
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FourVectors2D {
            public const nint x = 0x0; // fltx4
            public const nint y = 0x10; // fltx4
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeEdgeDesc_t {
            public const nint nEdge = 0x0; // uint16[2]
            public const nint nSide = 0x4; // uint16[2][2]
            public const nint nVirtElem = 0xC; // uint16[2]
        }
        // Parent: None
        // Fields count: 12
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class OldFeEdge_t {
            public const nint m_flK = 0x0; // float32[3]
            public const nint invA = 0xC; // float32
            public const nint t = 0x10; // float32
            public const nint flThetaRelaxed = 0x14; // float32
            public const nint flThetaFactor = 0x18; // float32
            public const nint c01 = 0x1C; // float32
            public const nint c02 = 0x20; // float32
            public const nint c03 = 0x24; // float32
            public const nint c04 = 0x28; // float32
            public const nint flAxialModelDist = 0x2C; // float32
            public const nint flAxialModelWeights = 0x30; // float32[4]
            public const nint m_nNode = 0x40; // uint16[4]
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeWeightedNode_t {
            public const nint nNode = 0x0; // uint16
            public const nint nWeight = 0x2; // uint16
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeKelagerBend2_t {
            public const nint flWeight = 0x0; // float32[3]
            public const nint flHeight0 = 0xC; // float32
            public const nint nNode = 0x10; // uint16[3]
            public const nint nReserved = 0x16; // uint16
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeStiffHingeBuild_t {
            public const nint flMaxAngle = 0x0; // float32
            public const nint flStrength = 0x4; // float32
            public const nint flMotionBias = 0x8; // float32[3]
            public const nint nNode = 0x14; // uint16[3]
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeTri_t {
            public const nint nNode = 0x0; // uint16[3]
            public const nint w1 = 0x8; // float32
            public const nint w2 = 0xC; // float32
            public const nint v1x = 0x10; // float32
            public const nint v2 = 0x14; // Vector2D
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeSimdTri_t {
            public const nint nNode = 0x0; // uint32[4][3]
            public const nint w1 = 0x30; // fltx4
            public const nint w2 = 0x40; // fltx4
            public const nint v1x = 0x50; // fltx4
            public const nint v2 = 0x60; // FourVectors2D
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeQuad_t {
            public const nint nNode = 0x0; // uint16[4]
            public const nint flSlack = 0x8; // float32
            public const nint vShape = 0xC; // Vector4D[4]
        }
        // Parent: None
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeNodeBase_t {
            public const nint nNode = 0x0; // uint16
            public const nint nDummy = 0x2; // uint16[3]
            public const nint nNodeX0 = 0x8; // uint16
            public const nint nNodeX1 = 0xA; // uint16
            public const nint nNodeY0 = 0xC; // uint16
            public const nint nNodeY1 = 0xE; // uint16
            public const nint qAdjust = 0x10; // QuaternionStorage
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeNodeWindBase_t {
            public const nint nNodeX0 = 0x0; // uint16
            public const nint nNodeX1 = 0x2; // uint16
            public const nint nNodeY0 = 0x4; // uint16
            public const nint nNodeY1 = 0x6; // uint16
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeNodeReverseOffset_t {
            public const nint vOffset = 0x0; // Vector
            public const nint nBoneCtrl = 0xC; // uint16
            public const nint nTargetNode = 0xE; // uint16
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeSimdQuad_t {
            public const nint nNode = 0x0; // uint16[4][4]
            public const nint f4Slack = 0x20; // fltx4
            public const nint vShape = 0x30; // FourVectors[4]
            public const nint f4Weights = 0xF0; // fltx4[4]
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeAxialEdgeBend_t {
            public const nint te = 0x0; // float32
            public const nint tv = 0x4; // float32
            public const nint flDist = 0x8; // float32
            public const nint flWeight = 0xC; // float32[4]
            public const nint nNode = 0x1C; // uint16[6]
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeBandBendLimit_t {
            public const nint flDistMin = 0x0; // float32
            public const nint flDistMax = 0x4; // float32
            public const nint nNode = 0x8; // uint16[6]
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeRodConstraint_t {
            public const nint nNode = 0x0; // uint16[2]
            public const nint flMaxDist = 0x4; // float32
            public const nint flMinDist = 0x8; // float32
            public const nint flWeight0 = 0xC; // float32
            public const nint flRelaxationFactor = 0x10; // float32
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeTwistConstraint_t {
            public const nint nNodeOrient = 0x0; // uint16
            public const nint nNodeEnd = 0x2; // uint16
            public const nint flTwistRelax = 0x4; // float32
            public const nint flSwingRelax = 0x8; // float32
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeSimdRodConstraint_t {
            public const nint nNode = 0x0; // uint16[4][2]
            public const nint f4MaxDist = 0x10; // fltx4
            public const nint f4MinDist = 0x20; // fltx4
            public const nint f4Weight0 = 0x30; // fltx4
            public const nint f4RelaxationFactor = 0x40; // fltx4
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeSimdRodConstraintAnim_t {
            public const nint nNode = 0x0; // uint16[4][2]
            public const nint f4Weight0 = 0x10; // fltx4
            public const nint f4RelaxationFactor = 0x20; // fltx4
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeAnimStrayRadius_t {
            public const nint nNode = 0x0; // uint16[2]
            public const nint flMaxDist = 0x4; // float32
            public const nint flRelaxationFactor = 0x8; // float32
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeSimdAnimStrayRadius_t {
            public const nint nNode = 0x0; // uint16[4][2]
            public const nint flMaxDist = 0x10; // fltx4
            public const nint flRelaxationFactor = 0x20; // fltx4
        }
        // Parent: None
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeSimdNodeBase_t {
            public const nint nNode = 0x0; // uint16[4]
            public const nint nNodeX0 = 0x8; // uint16[4]
            public const nint nNodeX1 = 0x10; // uint16[4]
            public const nint nNodeY0 = 0x18; // uint16[4]
            public const nint nNodeY1 = 0x20; // uint16[4]
            public const nint nDummy = 0x28; // uint16[4]
            public const nint qAdjust = 0x30; // FourQuaternions
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeNodeIntegrator_t {
            public const nint flPointDamping = 0x0; // float32
            public const nint flAnimationForceAttraction = 0x4; // float32
            public const nint flAnimationVertexAttraction = 0x8; // float32
            public const nint flGravity = 0xC; // float32
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeSpringIntegrator_t {
            public const nint nNode = 0x0; // uint16[2]
            public const nint flSpringRestLength = 0x4; // float32
            public const nint flSpringConstant = 0x8; // float32
            public const nint flSpringDamping = 0xC; // float32
            public const nint flNodeWeight0 = 0x10; // float32
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeSimdSpringIntegrator_t {
            public const nint nNode = 0x0; // uint16[4][2]
            public const nint flSpringRestLength = 0x10; // fltx4
            public const nint flSpringConstant = 0x20; // fltx4
            public const nint flSpringDamping = 0x30; // fltx4
            public const nint flNodeWeight0 = 0x40; // fltx4
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeCtrlOffset_t {
            public const nint vOffset = 0x0; // Vector
            public const nint nCtrlParent = 0xC; // uint16
            public const nint nCtrlChild = 0xE; // uint16
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeSoftParent_t {
            public const nint nParent = 0x0; // int32
            public const nint flAlpha = 0x4; // float32
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeCtrlSoftOffset_t {
            public const nint nCtrlParent = 0x0; // uint16
            public const nint nCtrlChild = 0x2; // uint16
            public const nint vOffset = 0x4; // Vector
            public const nint flAlpha = 0x10; // float32
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeCtrlOsOffset_t {
            public const nint nCtrlParent = 0x0; // uint16
            public const nint nCtrlChild = 0x2; // uint16
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeFollowNode_t {
            public const nint nParentNode = 0x0; // uint16
            public const nint nChildNode = 0x2; // uint16
            public const nint flWeight = 0x4; // float32
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeCollisionPlane_t {
            public const nint nCtrlParent = 0x0; // uint16
            public const nint nChildNode = 0x2; // uint16
            public const nint m_Plane = 0x4; // RnPlane_t
            public const nint flStrength = 0x14; // float32
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeWorldCollisionParams_t {
            public const nint flWorldFriction = 0x0; // float32
            public const nint flGroundFriction = 0x4; // float32
            public const nint nListBegin = 0x8; // uint16
            public const nint nListEnd = 0xA; // uint16
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeTreeChildren_t {
            public const nint nChild = 0x0; // uint16[2]
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeTaperedCapsuleRigid_t {
            public const nint vSphere = 0x0; // fltx4[2]
            public const nint nNode = 0x20; // uint16
            public const nint nCollisionMask = 0x22; // uint16
            public const nint nVertexMapIndex = 0x24; // uint16
            public const nint nFlags = 0x26; // uint16
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeSphereRigid_t {
            public const nint vSphere = 0x0; // fltx4
            public const nint nNode = 0x10; // uint16
            public const nint nCollisionMask = 0x12; // uint16
            public const nint nVertexMapIndex = 0x14; // uint16
            public const nint nFlags = 0x16; // uint16
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeTaperedCapsuleStretch_t {
            public const nint nNode = 0x0; // uint16[2]
            public const nint nCollisionMask = 0x4; // uint16
            public const nint nDummy = 0x6; // uint16
            public const nint flRadius = 0x8; // float32[2]
        }
        // Parent: None
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeBoxRigid_t {
            public const nint tmFrame2 = 0x0; // CTransform
            public const nint nNode = 0x20; // uint16
            public const nint nCollisionMask = 0x22; // uint16
            public const nint vSize = 0x24; // Vector
            public const nint nVertexMapIndex = 0x30; // uint16
            public const nint nFlags = 0x32; // uint16
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CovMatrix3 {
            public const nint m_vDiag = 0x0; // Vector
            public const nint m_flXY = 0xC; // float32
            public const nint m_flXZ = 0x10; // float32
            public const nint m_flYZ = 0x14; // float32
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FourCovMatrices3 {
            public const nint m_vDiag = 0x0; // FourVectors
            public const nint m_flXY = 0x30; // fltx4
            public const nint m_flXZ = 0x40; // fltx4
            public const nint m_flYZ = 0x50; // fltx4
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeFitWeight_t {
            public const nint flWeight = 0x0; // float32
            public const nint nNode = 0x4; // uint16
            public const nint nDummy = 0x6; // uint16
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeFitInfluence_t {
            public const nint nVertexNode = 0x0; // uint32
            public const nint flWeight = 0x4; // float32
            public const nint nMatrixNode = 0x8; // uint32
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeFitMatrix_t {
            public const nint bone = 0x0; // CTransform
            public const nint vCenter = 0x20; // Vector
            public const nint nEnd = 0x2C; // uint16
            public const nint nNode = 0x2E; // uint16
            public const nint nBeginDynamic = 0x30; // uint16
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeRigidColliderIndices_t {
            public const nint m_nTaperedCapsuleRigidIndex = 0x0; // uint16
            public const nint m_nSphereRigidIndex = 0x2; // uint16
            public const nint m_nBoxRigidIndex = 0x4; // uint16
            public const nint m_nCollisionPlaneIndex = 0x6; // uint16
        }
        // Parent: FeTaperedCapsuleRigid_t
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeBuildTaperedCapsuleRigid_t {
            public const nint m_nPriority = 0x30; // int32
            public const nint m_nVertexMapHash = 0x34; // uint32
        }
        // Parent: FeBoxRigid_t
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeBuildBoxRigid_t {
            public const nint m_nPriority = 0x34; // int32
            public const nint m_nVertexMapHash = 0x38; // uint32
        }
        // Parent: FeSphereRigid_t
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeBuildSphereRigid_t {
            public const nint m_nPriority = 0x20; // int32
            public const nint m_nVertexMapHash = 0x24; // uint32
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeSourceEdge_t {
            public const nint nNode = 0x0; // uint16[2]
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeEffectDesc_t {
            public const nint sName = 0x0; // CUtlString
            public const nint nNameHash = 0x8; // uint32
            public const nint nType = 0xC; // int32
            public const nint m_Params = 0x10; // KeyValues3
        }
        // Parent: None
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeVertexMapBuild_t {
            public const nint m_VertexMapName = 0x0; // CUtlString
            public const nint m_nNameHash = 0x8; // uint32
            public const nint m_Color = 0xC; // Color
            public const nint m_flVolumetricSolveStrength = 0x10; // float32
            public const nint m_nScaleSourceNode = 0x14; // int32
            public const nint m_Weights = 0x18; // CUtlVector<float32>
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CFeVertexMapBuildArray {
            public const nint m_Array = 0x0; // CUtlVector<FeVertexMapBuild_t*>
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeProxyVertexMap_t {
            public const nint m_Name = 0x0; // CUtlString
            public const nint m_flWeight = 0x8; // float32
        }
        // Parent: None
        // Fields count: 12
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeVertexMapDesc_t {
            public const nint sName = 0x0; // CUtlString
            public const nint nNameHash = 0x8; // uint32
            public const nint nColor = 0xC; // uint32
            public const nint nFlags = 0x10; // uint32
            public const nint nVertexBase = 0x14; // uint16
            public const nint nVertexCount = 0x16; // uint16
            public const nint nMapOffset = 0x18; // uint32
            public const nint nNodeListOffset = 0x1C; // uint32
            public const nint vCenterOfMass = 0x20; // Vector
            public const nint flVolumetricSolveStrength = 0x2C; // float32
            public const nint nScaleSourceNode = 0x30; // int16
            public const nint nNodeListCount = 0x32; // uint16
        }
        // Parent: None
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeMorphLayerDepr_t {
            public const nint m_Name = 0x0; // CUtlString
            public const nint m_nNameHash = 0x8; // uint32
            public const nint m_Nodes = 0x10; // CUtlVector<uint16>
            public const nint m_InitPos = 0x28; // CUtlVector<Vector>
            public const nint m_Gravity = 0x40; // CUtlVector<float32>
            public const nint m_GoalStrength = 0x58; // CUtlVector<float32>
            public const nint m_GoalDamping = 0x70; // CUtlVector<float32>
            public const nint m_nFlags = 0x88; // uint32
        }
        // Parent: None
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CFeMorphLayer {
            public const nint m_Name = 0x0; // CUtlString
            public const nint m_nNameHash = 0x8; // uint32
            public const nint m_Nodes = 0x10; // CUtlVector<uint16>
            public const nint m_InitPos = 0x28; // CUtlVector<Vector>
            public const nint m_Gravity = 0x40; // CUtlVector<float32>
            public const nint m_GoalStrength = 0x58; // CUtlVector<float32>
            public const nint m_GoalDamping = 0x70; // CUtlVector<float32>
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class Dop26_t {
            public const nint m_flSupport = 0x0; // float32[26]
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RnCapsule_t {
            public const nint m_vCenter = 0x0; // Vector[2]
            public const nint m_flRadius = 0x18; // float32
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RnPlane_t {
            public const nint m_vNormal = 0x0; // Vector
            public const nint m_flOffset = 0xC; // float32
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RnVertex_t {
            public const nint m_nEdge = 0x0; // uint8
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RnHalfEdge_t {
            public const nint m_nNext = 0x0; // uint8
            public const nint m_nTwin = 0x1; // uint8
            public const nint m_nOrigin = 0x2; // uint8
            public const nint m_nFace = 0x3; // uint8
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RnFace_t {
            public const nint m_nEdge = 0x0; // uint8
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CRegionSVM {
            public const nint m_Planes = 0x0; // CUtlVector<RnPlane_t>
            public const nint m_Nodes = 0x18; // CUtlVector<uint32>
        }
        // Parent: None
        // Fields count: 14
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RnHull_t {
            public const nint m_vCentroid = 0x0; // Vector
            public const nint m_flMaxAngularRadius = 0xC; // float32
            public const nint m_Bounds = 0x10; // AABB_t
            public const nint m_vOrthographicAreas = 0x28; // Vector
            public const nint m_MassProperties = 0x34; // matrix3x4_t
            public const nint m_flVolume = 0x64; // float32
            public const nint m_flSurfaceArea = 0x68; // float32
            public const nint m_Vertices = 0x70; // CUtlVector<RnVertex_t>
            public const nint m_VertexPositions = 0x88; // CUtlVector<Vector>
            public const nint m_Edges = 0xA0; // CUtlVector<RnHalfEdge_t>
            public const nint m_Faces = 0xB8; // CUtlVector<RnFace_t>
            public const nint m_FacePlanes = 0xD0; // CUtlVector<RnPlane_t>
            public const nint m_nFlags = 0xE8; // uint32
            public const nint m_pRegionSVM = 0xF0; // CRegionSVM*
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RnTriangle_t {
            public const nint m_nIndex = 0x0; // int32[3]
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RnWing_t {
            public const nint m_nIndex = 0x0; // int32[3]
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RnNode_t {
            public const nint m_vMin = 0x0; // Vector
            public const nint m_nChildren = 0xC; // uint32
            public const nint m_vMax = 0x10; // Vector
            public const nint m_nTriangleOffset = 0x1C; // uint32
        }
        // Parent: None
        // Fields count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RnMesh_t {
            public const nint m_vMin = 0x0; // Vector
            public const nint m_vMax = 0xC; // Vector
            public const nint m_Nodes = 0x18; // CUtlVector<RnNode_t>
            public const nint m_Vertices = 0x30; // CUtlVectorSIMDPaddedVector
            public const nint m_Triangles = 0x48; // CUtlVector<RnTriangle_t>
            public const nint m_Wings = 0x60; // CUtlVector<RnWing_t>
            public const nint m_Materials = 0x78; // CUtlVector<uint8>
            public const nint m_vOrthographicAreas = 0x90; // Vector
            public const nint m_nFlags = 0x9C; // uint32
            public const nint m_nDebugFlags = 0xA0; // uint32
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RnShapeDesc_t {
            public const nint m_nCollisionAttributeIndex = 0x0; // uint32
            public const nint m_nSurfacePropertyIndex = 0x4; // uint32
            public const nint m_UserFriendlyName = 0x8; // CUtlString
        }
        // Parent: RnShapeDesc_t
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RnSphereDesc_t {
            public const nint m_Sphere = 0x10; // SphereBase_t<float32>
        }
        // Parent: RnShapeDesc_t
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RnCapsuleDesc_t {
            public const nint m_Capsule = 0x10; // RnCapsule_t
        }
        // Parent: RnShapeDesc_t
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RnHullDesc_t {
            public const nint m_Hull = 0x10; // RnHull_t
        }
        // Parent: RnShapeDesc_t
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RnMeshDesc_t {
            public const nint m_Mesh = 0x10; // RnMesh_t
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RnSoftbodyParticle_t {
            public const nint m_flMassInv = 0x0; // float32
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RnSoftbodySpring_t {
            public const nint m_nParticle = 0x0; // uint16[2]
            public const nint m_flLength = 0x4; // float32
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RnSoftbodyCapsule_t {
            public const nint m_vCenter = 0x0; // Vector[2]
            public const nint m_flRadius = 0x18; // float32
            public const nint m_nParticle = 0x1C; // uint16[2]
        }
        // Parent: None
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RnBlendVertex_t {
            public const nint m_nWeight0 = 0x0; // uint16
            public const nint m_nIndex0 = 0x2; // uint16
            public const nint m_nWeight1 = 0x4; // uint16
            public const nint m_nIndex1 = 0x6; // uint16
            public const nint m_nWeight2 = 0x8; // uint16
            public const nint m_nIndex2 = 0xA; // uint16
            public const nint m_nFlags = 0xC; // uint16
            public const nint m_nTargetIndex = 0xE; // uint16
        }
        // Parent: None
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CastSphereSATParams_t {
            public const nint m_vRayStart = 0x0; // Vector
            public const nint m_vRayDelta = 0xC; // Vector
            public const nint m_flRadius = 0x18; // float32
            public const nint m_flMaxFraction = 0x1C; // float32
            public const nint m_flScale = 0x20; // float32
            public const nint m_pHull = 0x28; // RnHull_t*
        }
        // Parent: None
        // Fields count: 35
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RnBodyDesc_t {
            public const nint m_sDebugName = 0x0; // CUtlString
            public const nint m_vPosition = 0x8; // Vector
            public const nint m_qOrientation = 0x14; // QuaternionStorage
            public const nint m_vLinearVelocity = 0x24; // Vector
            public const nint m_vAngularVelocity = 0x30; // Vector
            public const nint m_vLocalMassCenter = 0x3C; // Vector
            public const nint m_LocalInertiaInv = 0x48; // Vector[3]
            public const nint m_flMassInv = 0x6C; // float32
            public const nint m_flGameMass = 0x70; // float32
            public const nint m_flInertiaScaleInv = 0x74; // float32
            public const nint m_flLinearDamping = 0x78; // float32
            public const nint m_flAngularDamping = 0x7C; // float32
            public const nint m_flLinearDrag = 0x80; // float32
            public const nint m_flAngularDrag = 0x84; // float32
            public const nint m_flLinearBuoyancyDrag = 0x88; // float32
            public const nint m_flAngularBuoyancyDrag = 0x8C; // float32
            public const nint m_vLastAwakeForceAccum = 0x90; // Vector
            public const nint m_vLastAwakeTorqueAccum = 0x9C; // Vector
            public const nint m_flBuoyancyFactor = 0xA8; // float32
            public const nint m_flGravityScale = 0xAC; // float32
            public const nint m_flTimeScale = 0xB0; // float32
            public const nint m_nBodyType = 0xB4; // int32
            public const nint m_nGameIndex = 0xB8; // uint32
            public const nint m_nGameFlags = 0xBC; // uint32
            public const nint m_nMinVelocityIterations = 0xC0; // int8
            public const nint m_nMinPositionIterations = 0xC1; // int8
            public const nint m_nMassPriority = 0xC2; // int8
            public const nint m_bEnabled = 0xC3; // bool
            public const nint m_bSleeping = 0xC4; // bool
            public const nint m_bIsContinuousEnabled = 0xC5; // bool
            public const nint m_bDragEnabled = 0xC6; // bool
            public const nint m_bBuoyancyDragEnabled = 0xC7; // bool
            public const nint m_bGravityDisabled = 0xC8; // bool
            public const nint m_bSpeculativeEnabled = 0xC9; // bool
            public const nint m_bHasShadowController = 0xCA; // bool
        }
        // Parent: None
        // Fields count: 2
        public static class VertexPositionNormal_t {
            public const nint m_vPosition = 0x0; // Vector
            public const nint m_vNormal = 0xC; // Vector
        }
        // Parent: None
        // Fields count: 1
        public static class VertexPositionColor_t {
            public const nint m_vPosition = 0x0; // Vector
        }
        // Parent: None
        // Fields count: 5
        public static class constraint_breakableparams_t {
            public const nint strength = 0x0; // float32
            public const nint forceLimit = 0x4; // float32
            public const nint torqueLimit = 0x8; // float32
            public const nint bodyMassScale = 0xC; // float32[2]
            public const nint isActive = 0x14; // bool
        }
        // Parent: None
        // Fields count: 4
        public static class constraint_axislimit_t {
            public const nint flMinRotation = 0x0; // float32
            public const nint flMaxRotation = 0x4; // float32
            public const nint flMotorTargetAngSpeed = 0x8; // float32
            public const nint flMotorMaxTorque = 0xC; // float32
        }
        // Parent: None
        // Fields count: 4
        public static class constraint_hingeparams_t {
            public const nint worldPosition = 0x0; // Vector
            public const nint worldAxisDirection = 0xC; // Vector
            public const nint hingeAxis = 0x18; // constraint_axislimit_t
            public const nint constraint = 0x28; // constraint_breakableparams_t
        }
        // Parent: None
        // Fields count: 0
        public static class IPhysicsPlayerController {
        }
        // Parent: RnBodyDesc_t
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class vphysics_save_cphysicsbody_t {
            public const nint m_nOldPointer = 0xD0; // uint64
        }
    }
    // Module: libworldrenderer.so
    // Classes count: 27
    // Enums count: 0
    public static class Libworldrenderer {
        // Parent: None
        // Fields count: 0
        public static class CEntityComponent {
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
        // NetworkVarNames: m_pEntity (CEntityIdentity *)
        // NetworkVarNames: m_CScriptComponent (CScriptComponent::Storage_t)
        public static class CEntityInstance {
            public const nint m_iszPrivateVScripts = 0x8; // CUtlSymbolLarge
            public const nint m_pEntity = 0x10; // CEntityIdentity*
            public const nint m_CScriptComponent = 0x28; // CScriptComponent*
            public const nint m_bVisibleinPVS = 0x30; // bool
        }
        // Parent: CEntityComponent
        // Fields count: 1
        public static class CScriptComponent {
            public const nint m_scriptClassName = 0x30; // CUtlSymbolLarge
        }
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
            public const nint m_vLightingOrigin = 0x5C; // Vector
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
            public const nint m_vLODOrigin = 0x0; // Vector
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
            public const nint m_vOrigin = 0x4; // Vector
            public const nint m_vMinBounds = 0x10; // Vector
            public const nint m_vMaxBounds = 0x1C; // Vector
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
            public const nint m_vMinBounds = 0x48; // Vector
            public const nint m_vMaxBounds = 0x54; // Vector
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
        public static class VMapResourceData_t {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeVMapResourceData_t {
        }
    }
}
