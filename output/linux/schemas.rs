// Generated using https://github.com/a2x/cs2-dumper
// 2024-03-29 08:41:42.046663095 UTC

#![allow(non_upper_case_globals, unused)]

pub mod cs2_dumper {
    pub mod schemas {
        // Module: libanimationsystem.so
        // Classes count: 255
        // Enums count: 0
        pub mod libanimationsystem {
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod BoneDemoCaptureSettings_t {
                pub const m_boneName: usize = 0x0; // CUtlString
                pub const m_flChainLength: usize = 0x8; // float32
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod IKDemoCaptureSettings_t {
                pub const m_parentBoneName: usize = 0x0; // CUtlString
                pub const m_eMode: usize = 0x8; // IKChannelMode
                pub const m_ikChainName: usize = 0x10; // CUtlString
                pub const m_oneBoneStart: usize = 0x18; // CUtlString
                pub const m_oneBoneEnd: usize = 0x20; // CUtlString
            }
            // Parent: None
            // Fields count: 16
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CAnimDemoCaptureSettings {
                pub const m_rangeBoneChainLength: usize = 0x0; // Vector2D
                pub const m_rangeMaxSplineErrorRotation: usize = 0x8; // Vector2D
                pub const m_flMaxSplineErrorTranslation: usize = 0x10; // float32
                pub const m_flMaxSplineErrorScale: usize = 0x14; // float32
                pub const m_flIkRotation_MaxSplineError: usize = 0x18; // float32
                pub const m_flIkTranslation_MaxSplineError: usize = 0x1C; // float32
                pub const m_flMaxQuantizationErrorRotation: usize = 0x20; // float32
                pub const m_flMaxQuantizationErrorTranslation: usize = 0x24; // float32
                pub const m_flMaxQuantizationErrorScale: usize = 0x28; // float32
                pub const m_flIkRotation_MaxQuantizationError: usize = 0x2C; // float32
                pub const m_flIkTranslation_MaxQuantizationError: usize = 0x30; // float32
                pub const m_baseSequence: usize = 0x38; // CUtlString
                pub const m_nBaseSequenceFrame: usize = 0x40; // int32
                pub const m_boneSelectionMode: usize = 0x44; // EDemoBoneSelectionMode
                pub const m_bones: usize = 0x48; // CUtlVector<BoneDemoCaptureSettings_t>
                pub const m_ikChains: usize = 0x60; // CUtlVector<IKDemoCaptureSettings_t>
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CAnimReplayFrame {
                pub const m_inputDataBlocks: usize = 0x10; // CUtlVector<CUtlBinaryBlock>
                pub const m_instanceData: usize = 0x28; // CUtlBinaryBlock
                pub const m_startingLocalToWorldTransform: usize = 0x40; // CTransform
                pub const m_localToWorldTransform: usize = 0x60; // CTransform
                pub const m_timeStamp: usize = 0x80; // float32
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CAnimGraphDebugReplay {
                pub const m_animGraphFileName: usize = 0x40; // CUtlString
                pub const m_frameList: usize = 0x48; // CUtlVector<CSmartPtr<CAnimReplayFrame>>
                pub const m_startIndex: usize = 0x60; // int32
                pub const m_writeIndex: usize = 0x64; // int32
                pub const m_frameCount: usize = 0x68; // int32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CAnimGraphModelBinding {
                pub const m_modelName: usize = 0x8; // CUtlString
                pub const m_pSharedData: usize = 0x10; // CSmartPtr<CAnimUpdateSharedData>
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CAnimInputDamping {
                pub const m_speedFunction: usize = 0x8; // DampingSpeedFunction
                pub const m_fSpeedScale: usize = 0xC; // float32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CAnimParamHandle {
                pub const m_type: usize = 0x0; // AnimParamType_t
                pub const m_index: usize = 0x1; // uint8
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CAnimParamHandleMap {
                pub const m_list: usize = 0x0; // CUtlHashtable<uint16,int16>
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CAnimParameterManagerUpdater {
                pub const m_parameters: usize = 0x18; // CUtlVector<CSmartPtr<CAnimParameterBase>>
                pub const m_idToIndexMap: usize = 0x30; // CUtlHashtable<AnimParamID,int32>
                pub const m_nameToIndexMap: usize = 0x50; // CUtlHashtable<CUtlString,int32>
                pub const m_indexToHandle: usize = 0x70; // CUtlVector<CAnimParamHandle>
                pub const m_autoResetParams: usize = 0x88; // CUtlVector<CUtlPair<CAnimParamHandle,CAnimVariant>>
                pub const m_autoResetMap: usize = 0xA0; // CUtlHashtable<CAnimParamHandle,int16>
            }
            // Parent: None
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CAnimUpdateSharedData {
                pub const m_nodes: usize = 0x10; // CUtlVector<CSmartPtr<CAnimUpdateNodeBase>>
                pub const m_nodeIndexMap: usize = 0x28; // CUtlHashtable<CAnimNodePath,int32>
                pub const m_components: usize = 0x48; // CUtlVector<CSmartPtr<CAnimComponentUpdater>>
                pub const m_pParamListUpdater: usize = 0x60; // CSmartPtr<CAnimParameterManagerUpdater>
                pub const m_pTagManagerUpdater: usize = 0x68; // CSmartPtr<CAnimTagManagerUpdater>
                pub const m_scriptManager: usize = 0x70; // CSmartPtr<CAnimScriptManager>
                pub const m_settings: usize = 0x78; // CAnimGraphSettingsManager
                pub const m_pStaticPoseCache: usize = 0xA8; // CSmartPtr<CStaticPoseCacheBuilder>
                pub const m_pSkeleton: usize = 0xB0; // CSmartPtr<CAnimSkeleton>
                pub const m_rootNodePath: usize = 0xB8; // CAnimNodePath
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CBlendCurve {
                pub const m_flControlPoint1: usize = 0x0; // float32
                pub const m_flControlPoint2: usize = 0x4; // float32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod ParamSpanSample_t {
                pub const m_value: usize = 0x0; // CAnimVariant
                pub const m_flCycle: usize = 0x14; // float32
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod ParamSpan_t {
                pub const m_samples: usize = 0x0; // CUtlVector<ParamSpanSample_t>
                pub const m_hParam: usize = 0x18; // CAnimParamHandle
                pub const m_eParamType: usize = 0x1A; // AnimParamType_t
                pub const m_flStartCycle: usize = 0x1C; // float32
                pub const m_flEndCycle: usize = 0x20; // float32
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CParamSpanUpdater {
                pub const m_spans: usize = 0x0; // CUtlVector<ParamSpan_t>
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CAnimGraphSettingsGroup {
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CAnimGraphSettingsManager {
                pub const m_settingsGroups: usize = 0x18; // CUtlVector<CSmartPtr<CAnimGraphSettingsGroup>>
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CCachedPose {
                pub const m_transforms: usize = 0x8; // CUtlVector<CTransform>
                pub const m_morphWeights: usize = 0x20; // CUtlVector<float32>
                pub const m_hSequence: usize = 0x38; // HSequence
                pub const m_flCycle: usize = 0x3C; // float32
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CStaticPoseCache {
                pub const m_poses: usize = 0x10; // CUtlVector<CCachedPose>
                pub const m_nBoneCount: usize = 0x28; // int32
                pub const m_nMorphCount: usize = 0x2C; // int32
            }
            // Parent: CStaticPoseCache
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CStaticPoseCacheBuilder {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CAnimActionUpdater {
            }
            // Parent: CAnimActionUpdater
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CEmitTagActionUpdater {
                pub const m_nTagIndex: usize = 0x18; // int32
                pub const m_bIsZeroDuration: usize = 0x1C; // bool
            }
            // Parent: CAnimActionUpdater
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CSetParameterActionUpdater {
                pub const m_hParam: usize = 0x18; // CAnimParamHandle
                pub const m_value: usize = 0x1A; // CAnimVariant
            }
            // Parent: CAnimActionUpdater
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CToggleComponentActionUpdater {
                pub const m_componentID: usize = 0x18; // AnimComponentID
                pub const m_bSetEnabled: usize = 0x1C; // bool
            }
            // Parent: CAnimActionUpdater
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CExpressionActionUpdater {
                pub const m_hParam: usize = 0x18; // CAnimParamHandle
                pub const m_eParamType: usize = 0x1A; // AnimParamType_t
                pub const m_hScript: usize = 0x1C; // AnimScriptHandle
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CAnimTagBase {
                pub const m_name: usize = 0x18; // CGlobalSymbol
                pub const m_group: usize = 0x20; // CGlobalSymbol
                pub const m_tagID: usize = 0x28; // AnimTagID
                pub const m_bIsReferenced: usize = 0x40; // bool
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CAnimTagManagerUpdater {
                pub const m_tags: usize = 0x18; // CUtlVector<CSmartPtr<CAnimTagBase>>
            }
            // Parent: CAnimTagBase
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CAudioAnimTag {
                pub const m_clipName: usize = 0x50; // CUtlString
                pub const m_attachmentName: usize = 0x58; // CUtlString
                pub const m_flVolume: usize = 0x60; // float32
                pub const m_bStopWhenTagEnds: usize = 0x64; // bool
                pub const m_bStopWhenGraphEnds: usize = 0x65; // bool
                pub const m_bPlayOnServer: usize = 0x66; // bool
                pub const m_bPlayOnClient: usize = 0x67; // bool
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyElementNameFn
            pub mod CBodyGroupSetting {
                pub const m_BodyGroupName: usize = 0x0; // CUtlString
                pub const m_nBodyGroupOption: usize = 0x8; // int32
            }
            // Parent: CAnimTagBase
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CBodyGroupAnimTag {
                pub const m_nPriority: usize = 0x50; // int32
                pub const m_bodyGroupSettings: usize = 0x58; // CUtlVector<CBodyGroupSetting>
            }
            // Parent: CAnimTagBase
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CClothSettingsAnimTag {
                pub const m_flStiffness: usize = 0x50; // float32
                pub const m_flEaseIn: usize = 0x54; // float32
                pub const m_flEaseOut: usize = 0x58; // float32
                pub const m_nVertexSet: usize = 0x60; // CUtlString
            }
            // Parent: CAnimTagBase
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CFootFallAnimTag {
                pub const m_foot: usize = 0x50; // FootFallTagFoot_t
            }
            // Parent: CAnimTagBase
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CFootstepLandedAnimTag {
                pub const m_FootstepType: usize = 0x50; // FootstepLandedFootSoundType_t
                pub const m_OverrideSoundName: usize = 0x58; // CUtlString
                pub const m_DebugAnimSourceString: usize = 0x60; // CUtlString
                pub const m_BoneName: usize = 0x68; // CUtlString
            }
            // Parent: CAnimTagBase
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CMaterialAttributeAnimTag {
                pub const m_AttributeName: usize = 0x50; // CUtlString
                pub const m_AttributeType: usize = 0x58; // MatterialAttributeTagType_t
                pub const m_flValue: usize = 0x5C; // float32
                pub const m_Color: usize = 0x60; // Color
            }
            // Parent: CAnimTagBase
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CParticleAnimTag {
                pub const m_hParticleSystem: usize = 0x50; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                pub const m_particleSystemName: usize = 0x58; // CUtlString
                pub const m_configName: usize = 0x60; // CUtlString
                pub const m_bDetachFromOwner: usize = 0x68; // bool
                pub const m_bStopWhenTagEnds: usize = 0x69; // bool
                pub const m_bTagEndStopIsInstant: usize = 0x6A; // bool
                pub const m_attachmentName: usize = 0x70; // CUtlString
                pub const m_attachmentType: usize = 0x78; // ParticleAttachment_t
                pub const m_attachmentCP1Name: usize = 0x80; // CUtlString
                pub const m_attachmentCP1Type: usize = 0x88; // ParticleAttachment_t
            }
            // Parent: CAnimTagBase
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CRagdollAnimTag {
                pub const m_nPoseControl: usize = 0x50; // AnimPoseControl
                pub const m_flFrequency: usize = 0x54; // float32
                pub const m_flDampingRatio: usize = 0x58; // float32
                pub const m_flDecayDuration: usize = 0x5C; // float32
                pub const m_flDecayBias: usize = 0x60; // float32
                pub const m_bDestroy: usize = 0x64; // bool
            }
            // Parent: CAnimTagBase
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CSequenceFinishedAnimTag {
                pub const m_sequenceName: usize = 0x50; // CUtlString
            }
            // Parent: CAnimTagBase
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CStringAnimTag {
            }
            // Parent: CAnimTagBase
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CTaskStatusAnimTag {
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CAnimComponentUpdater {
                pub const m_name: usize = 0x18; // CUtlString
                pub const m_id: usize = 0x20; // AnimComponentID
                pub const m_networkMode: usize = 0x24; // AnimNodeNetworkMode
                pub const m_bStartEnabled: usize = 0x28; // bool
            }
            // Parent: CAnimComponentUpdater
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CAnimScriptComponentUpdater {
                pub const m_hScript: usize = 0x30; // AnimScriptHandle
            }
            // Parent: CAnimComponentUpdater
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CCPPScriptComponentUpdater {
                pub const m_scriptsToRun: usize = 0x30; // CUtlVector<CGlobalSymbol>
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CDampedValueUpdateItem {
                pub const m_damping: usize = 0x0; // CAnimInputDamping
                pub const m_hParamIn: usize = 0x18; // CAnimParamHandle
                pub const m_hParamOut: usize = 0x1A; // CAnimParamHandle
            }
            // Parent: CAnimComponentUpdater
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CDampedValueComponentUpdater {
                pub const m_items: usize = 0x30; // CUtlVector<CDampedValueUpdateItem>
            }
            // Parent: CAnimComponentUpdater
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CDemoSettingsComponentUpdater {
                pub const m_settings: usize = 0x30; // CAnimDemoCaptureSettings
            }
            // Parent: CAnimComponentUpdater
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CLODComponentUpdater {
                pub const m_nServerLOD: usize = 0x30; // int32
            }
            // Parent: CAnimComponentUpdater
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CLookComponentUpdater {
                pub const m_hLookHeading: usize = 0x34; // CAnimParamHandle
                pub const m_hLookHeadingVelocity: usize = 0x36; // CAnimParamHandle
                pub const m_hLookPitch: usize = 0x38; // CAnimParamHandle
                pub const m_hLookDistance: usize = 0x3A; // CAnimParamHandle
                pub const m_hLookDirection: usize = 0x3C; // CAnimParamHandle
                pub const m_hLookTarget: usize = 0x3E; // CAnimParamHandle
                pub const m_hLookTargetWorldSpace: usize = 0x40; // CAnimParamHandle
                pub const m_bNetworkLookTarget: usize = 0x42; // bool
            }
            // Parent: CAnimComponentUpdater
            // Fields count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CMovementComponentUpdater {
                pub const m_motors: usize = 0x30; // CUtlVector<CSmartPtr<CAnimMotorUpdaterBase>>
                pub const m_facingDamping: usize = 0x48; // CAnimInputDamping
                pub const m_eDefaultFacingMode: usize = 0x58; // FacingMode
                pub const m_nDefaultMotorIndex: usize = 0x64; // int32
                pub const m_flDefaultRunSpeed: usize = 0x68; // float32
                pub const m_bMoveVarsDisabled: usize = 0x6C; // bool
                pub const m_bNetworkPath: usize = 0x6D; // bool
                pub const m_bNetworkFacing: usize = 0x6E; // bool
                pub const m_paramHandles: usize = 0x6F; // CAnimParamHandle[30]
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod WeightList {
                pub const m_name: usize = 0x0; // CUtlString
                pub const m_weights: usize = 0x8; // CUtlVector<float32>
            }
            // Parent: CAnimComponentUpdater
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CRagdollComponentUpdater {
                pub const m_ragdollNodePaths: usize = 0x30; // CUtlVector<CAnimNodePath>
                pub const m_boneIndices: usize = 0x48; // CUtlVector<int32>
                pub const m_boneNames: usize = 0x60; // CUtlVector<CUtlString>
                pub const m_weightLists: usize = 0x78; // CUtlVector<WeightList>
                pub const m_flSpringFrequencyMin: usize = 0x90; // float32
                pub const m_flSpringFrequencyMax: usize = 0x94; // float32
                pub const m_flMaxStretch: usize = 0x98; // float32
                pub const m_bSolidCollisionAtZeroWeight: usize = 0x9C; // bool
            }
            // Parent: CAnimComponentUpdater
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CSlopeComponentUpdater {
                pub const m_flTraceDistance: usize = 0x34; // float32
                pub const m_hSlopeAngle: usize = 0x38; // CAnimParamHandle
                pub const m_hSlopeAngleFront: usize = 0x3A; // CAnimParamHandle
                pub const m_hSlopeAngleSide: usize = 0x3C; // CAnimParamHandle
                pub const m_hSlopeHeading: usize = 0x3E; // CAnimParamHandle
                pub const m_hSlopeNormal: usize = 0x40; // CAnimParamHandle
                pub const m_hSlopeNormal_WorldSpace: usize = 0x42; // CAnimParamHandle
            }
            // Parent: CAnimComponentUpdater
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CStateMachineComponentUpdater {
                pub const m_stateMachine: usize = 0x30; // CAnimStateMachineUpdater
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CMotionDataSet {
                pub const m_groups: usize = 0x0; // CUtlVector<CMotionGraphGroup>
                pub const m_nDimensionCount: usize = 0x18; // int32
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CMotionGraphGroup {
                pub const m_searchDB: usize = 0x0; // CMotionSearchDB
                pub const m_motionGraphs: usize = 0xB8; // CUtlVector<CSmartPtr<CMotionGraph>>
                pub const m_motionGraphConfigs: usize = 0xD0; // CUtlVector<CMotionGraphConfig>
                pub const m_sampleToConfig: usize = 0xE8; // CUtlVector<int32>
                pub const m_hIsActiveScript: usize = 0x100; // AnimScriptHandle
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod SampleCode {
                pub const m_subCode: usize = 0x0; // uint8[8]
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod MotionDBIndex {
                pub const m_nIndex: usize = 0x0; // uint32
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CVectorQuantizer {
                pub const m_centroidVectors: usize = 0x0; // CUtlVector<float32>
                pub const m_nCentroids: usize = 0x18; // int32
                pub const m_nDimensions: usize = 0x1C; // int32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CProductQuantizer {
                pub const m_subQuantizers: usize = 0x0; // CUtlVector<CVectorQuantizer>
                pub const m_nDimensions: usize = 0x18; // int32
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CMotionSearchNode {
                pub const m_children: usize = 0x0; // CUtlVector<CMotionSearchNode*>
                pub const m_quantizer: usize = 0x18; // CVectorQuantizer
                pub const m_sampleCodes: usize = 0x38; // CUtlVector<CUtlVector<SampleCode>>
                pub const m_sampleIndices: usize = 0x50; // CUtlVector<CUtlVector<int32>>
                pub const m_selectableSamples: usize = 0x68; // CUtlVector<int32>
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CMotionSearchDB {
                pub const m_rootNode: usize = 0x0; // CMotionSearchNode
                pub const m_residualQuantizer: usize = 0x80; // CProductQuantizer
                pub const m_codeIndices: usize = 0xA0; // CUtlVector<MotionDBIndex>
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CMotionGraph {
                pub const m_paramSpans: usize = 0x10; // CParamSpanUpdater
                pub const m_tags: usize = 0x28; // CUtlVector<TagSpan_t>
                pub const m_pRootNode: usize = 0x40; // CSmartPtr<CMotionNode>
                pub const m_nParameterCount: usize = 0x48; // int32
                pub const m_nConfigStartIndex: usize = 0x4C; // int32
                pub const m_nConfigCount: usize = 0x50; // int32
                pub const m_bLoop: usize = 0x54; // bool
            }
            // Parent: CMotionGraph
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CEditableMotionGraph {
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CMotionNode {
                pub const m_name: usize = 0x18; // CUtlString
                pub const m_id: usize = 0x20; // AnimNodeID
            }
            // Parent: CMotionNode
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CMotionNodeSequence {
                pub const m_tags: usize = 0x28; // CUtlVector<TagSpan_t>
                pub const m_hSequence: usize = 0x40; // HSequence
                pub const m_flPlaybackSpeed: usize = 0x44; // float32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod MotionBlendItem {
                pub const m_pChild: usize = 0x0; // CSmartPtr<CMotionNode>
                pub const m_flKeyValue: usize = 0x8; // float32
            }
            // Parent: CMotionNode
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CMotionNodeBlend1D {
                pub const m_blendItems: usize = 0x28; // CUtlVector<MotionBlendItem>
                pub const m_nParamIndex: usize = 0x40; // int32
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CMotionMetricEvaluator {
                pub const m_means: usize = 0x18; // CUtlVector<float32>
                pub const m_standardDeviations: usize = 0x30; // CUtlVector<float32>
                pub const m_flWeight: usize = 0x48; // float32
                pub const m_nDimensionStartIndex: usize = 0x4C; // int32
            }
            // Parent: CMotionMetricEvaluator
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CBlockSelectionMetricEvaluator {
            }
            // Parent: CMotionMetricEvaluator
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CBonePositionMetricEvaluator {
                pub const m_nBoneIndex: usize = 0x50; // int32
            }
            // Parent: CMotionMetricEvaluator
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CBoneVelocityMetricEvaluator {
                pub const m_nBoneIndex: usize = 0x50; // int32
            }
            // Parent: CMotionMetricEvaluator
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CCurrentRotationVelocityMetricEvaluator {
            }
            // Parent: CMotionMetricEvaluator
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CCurrentVelocityMetricEvaluator {
            }
            // Parent: CMotionMetricEvaluator
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CDistanceRemainingMetricEvaluator {
                pub const m_flMaxDistance: usize = 0x50; // float32
                pub const m_flMinDistance: usize = 0x54; // float32
                pub const m_flStartGoalFilterDistance: usize = 0x58; // float32
                pub const m_flMaxGoalOvershootScale: usize = 0x5C; // float32
                pub const m_bFilterFixedMinDistance: usize = 0x60; // bool
                pub const m_bFilterGoalDistance: usize = 0x61; // bool
                pub const m_bFilterGoalOvershoot: usize = 0x62; // bool
            }
            // Parent: CMotionMetricEvaluator
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CFootCycleMetricEvaluator {
                pub const m_footIndices: usize = 0x50; // CUtlVector<int32>
            }
            // Parent: CMotionMetricEvaluator
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CFootPositionMetricEvaluator {
                pub const m_footIndices: usize = 0x50; // CUtlVector<int32>
                pub const m_bIgnoreSlope: usize = 0x68; // bool
            }
            // Parent: CMotionMetricEvaluator
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CFutureFacingMetricEvaluator {
                pub const m_flDistance: usize = 0x50; // float32
                pub const m_flTime: usize = 0x54; // float32
            }
            // Parent: CMotionMetricEvaluator
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CFutureVelocityMetricEvaluator {
                pub const m_flDistance: usize = 0x50; // float32
                pub const m_flStoppingDistance: usize = 0x54; // float32
                pub const m_flTargetSpeed: usize = 0x58; // float32
                pub const m_eMode: usize = 0x5C; // VelocityMetricMode
            }
            // Parent: CMotionMetricEvaluator
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPathMetricEvaluator {
                pub const m_pathTimeSamples: usize = 0x50; // CUtlVector<float32>
                pub const m_flDistance: usize = 0x68; // float32
                pub const m_bExtrapolateMovement: usize = 0x6C; // bool
                pub const m_flMinExtrapolationSpeed: usize = 0x70; // float32
            }
            // Parent: CMotionMetricEvaluator
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CStepsRemainingMetricEvaluator {
                pub const m_footIndices: usize = 0x50; // CUtlVector<int32>
                pub const m_flMinStepsRemaining: usize = 0x68; // float32
            }
            // Parent: CMotionMetricEvaluator
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CTimeRemainingMetricEvaluator {
                pub const m_bMatchByTimeRemaining: usize = 0x50; // bool
                pub const m_flMaxTimeRemaining: usize = 0x54; // float32
                pub const m_bFilterByTimeRemaining: usize = 0x58; // bool
                pub const m_flMinTimeRemaining: usize = 0x5C; // float32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CAnimMotorUpdaterBase {
                pub const m_name: usize = 0x10; // CUtlString
                pub const m_bDefault: usize = 0x18; // bool
            }
            // Parent: CAnimMotorUpdaterBase
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPathAnimMotorUpdaterBase {
                pub const m_bLockToPath: usize = 0x19; // bool
            }
            // Parent: CPathAnimMotorUpdaterBase
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CDampedPathAnimMotorUpdater {
                pub const m_flAnticipationTime: usize = 0x20; // float32
                pub const m_flMinSpeedScale: usize = 0x24; // float32
                pub const m_hAnticipationPosParam: usize = 0x28; // CAnimParamHandle
                pub const m_hAnticipationHeadingParam: usize = 0x2A; // CAnimParamHandle
                pub const m_flSpringConstant: usize = 0x2C; // float32
                pub const m_flMinSpringTension: usize = 0x30; // float32
                pub const m_flMaxSpringTension: usize = 0x34; // float32
            }
            // Parent: CPathAnimMotorUpdaterBase
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPathAnimMotorUpdater {
            }
            // Parent: CAnimMotorUpdaterBase
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPlayerInputAnimMotorUpdater {
                pub const m_sampleTimes: usize = 0x20; // CUtlVector<float32>
                pub const m_flSpringConstant: usize = 0x3C; // float32
                pub const m_flAnticipationDistance: usize = 0x40; // float32
                pub const m_hAnticipationPosParam: usize = 0x44; // CAnimParamHandle
                pub const m_hAnticipationHeadingParam: usize = 0x46; // CAnimParamHandle
                pub const m_bUseAcceleration: usize = 0x48; // bool
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod AimMatrixOpFixedSettings_t {
                pub const m_attachment: usize = 0x0; // CAnimAttachment
                pub const m_damping: usize = 0x80; // CAnimInputDamping
                pub const m_poseCacheHandles: usize = 0x90; // CPoseHandle[10]
                pub const m_eBlendMode: usize = 0xB8; // AimMatrixBlendMode
                pub const m_fAngleIncrement: usize = 0xBC; // float32
                pub const m_nSequenceMaxFrame: usize = 0xC0; // int32
                pub const m_nBoneMaskIndex: usize = 0xC4; // int32
                pub const m_bTargetIsPosition: usize = 0xC8; // bool
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FollowAttachmentSettings_t {
                pub const m_attachment: usize = 0x0; // CAnimAttachment
                pub const m_boneIndex: usize = 0x80; // int32
                pub const m_bMatchTranslation: usize = 0x84; // bool
                pub const m_bMatchRotation: usize = 0x85; // bool
            }
            // Parent: None
            // Fields count: 18
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FootLockPoseOpFixedSettings {
                pub const m_footInfo: usize = 0x0; // CUtlVector<FootFixedData_t>
                pub const m_hipDampingSettings: usize = 0x18; // CAnimInputDamping
                pub const m_nHipBoneIndex: usize = 0x28; // int32
                pub const m_ikSolverType: usize = 0x2C; // IKSolverType
                pub const m_bApplyTilt: usize = 0x30; // bool
                pub const m_bApplyHipDrop: usize = 0x31; // bool
                pub const m_bAlwaysUseFallbackHinge: usize = 0x32; // bool
                pub const m_bApplyFootRotationLimits: usize = 0x33; // bool
                pub const m_bApplyLegTwistLimits: usize = 0x34; // bool
                pub const m_flMaxFootHeight: usize = 0x38; // float32
                pub const m_flExtensionScale: usize = 0x3C; // float32
                pub const m_flMaxLegTwist: usize = 0x40; // float32
                pub const m_bEnableLockBreaking: usize = 0x44; // bool
                pub const m_flLockBreakTolerance: usize = 0x48; // float32
                pub const m_flLockBlendTime: usize = 0x4C; // float32
                pub const m_bEnableStretching: usize = 0x50; // bool
                pub const m_flMaxStretchAmount: usize = 0x54; // float32
                pub const m_flStretchExtensionScale: usize = 0x58; // float32
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FootPinningPoseOpFixedData_t {
                pub const m_footInfo: usize = 0x0; // CUtlVector<FootFixedData_t>
                pub const m_flBlendTime: usize = 0x18; // float32
                pub const m_flLockBreakDistance: usize = 0x1C; // float32
                pub const m_flMaxLegTwist: usize = 0x20; // float32
                pub const m_nHipBoneIndex: usize = 0x24; // int32
                pub const m_bApplyLegTwistLimits: usize = 0x28; // bool
                pub const m_bApplyFootRotationLimits: usize = 0x29; // bool
            }
            // Parent: None
            // Fields count: 17
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod HitReactFixedSettings_t {
                pub const m_nWeightListIndex: usize = 0x0; // int32
                pub const m_nEffectedBoneCount: usize = 0x4; // int32
                pub const m_flMaxImpactForce: usize = 0x8; // float32
                pub const m_flMinImpactForce: usize = 0xC; // float32
                pub const m_flWhipImpactScale: usize = 0x10; // float32
                pub const m_flCounterRotationScale: usize = 0x14; // float32
                pub const m_flDistanceFadeScale: usize = 0x18; // float32
                pub const m_flPropagationScale: usize = 0x1C; // float32
                pub const m_flWhipDelay: usize = 0x20; // float32
                pub const m_flSpringStrength: usize = 0x24; // float32
                pub const m_flWhipSpringStrength: usize = 0x28; // float32
                pub const m_flMaxAngleRadians: usize = 0x2C; // float32
                pub const m_nHipBoneIndex: usize = 0x30; // int32
                pub const m_flHipBoneTranslationScale: usize = 0x34; // float32
                pub const m_flHipDipSpringStrength: usize = 0x38; // float32
                pub const m_flHipDipImpactScale: usize = 0x3C; // float32
                pub const m_flHipDipDelay: usize = 0x40; // float32
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod JiggleBoneSettings_t {
                pub const m_nBoneIndex: usize = 0x0; // int32
                pub const m_flSpringStrength: usize = 0x4; // float32
                pub const m_flMaxTimeStep: usize = 0x8; // float32
                pub const m_flDamping: usize = 0xC; // float32
                pub const m_vBoundsMaxLS: usize = 0x10; // Vector
                pub const m_vBoundsMinLS: usize = 0x1C; // Vector
                pub const m_eSimSpace: usize = 0x28; // JiggleBoneSimSpace
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod JiggleBoneSettingsList_t {
                pub const m_boneSettings: usize = 0x0; // CUtlVector<JiggleBoneSettings_t>
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod LookAtBone_t {
                pub const m_index: usize = 0x0; // int32
                pub const m_weight: usize = 0x4; // float32
            }
            // Parent: None
            // Fields count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod LookAtOpFixedSettings_t {
                pub const m_attachment: usize = 0x0; // CAnimAttachment
                pub const m_damping: usize = 0x80; // CAnimInputDamping
                pub const m_bones: usize = 0x90; // CUtlVector<LookAtBone_t>
                pub const m_flYawLimit: usize = 0xA8; // float32
                pub const m_flPitchLimit: usize = 0xAC; // float32
                pub const m_flHysteresisInnerAngle: usize = 0xB0; // float32
                pub const m_flHysteresisOuterAngle: usize = 0xB4; // float32
                pub const m_bRotateYawForward: usize = 0xB8; // bool
                pub const m_bMaintainUpDirection: usize = 0xB9; // bool
                pub const m_bTargetIsPosition: usize = 0xBA; // bool
                pub const m_bUseHysteresis: usize = 0xBB; // bool
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod ChainToSolveData_t {
                pub const m_nChainIndex: usize = 0x0; // int32
                pub const m_SolverSettings: usize = 0x4; // IKSolverSettings_t
                pub const m_TargetSettings: usize = 0x10; // IKTargetSettings_t
                pub const m_DebugSetting: usize = 0x38; // SolveIKChainAnimNodeDebugSetting
                pub const m_flDebugNormalizedValue: usize = 0x3C; // float32
                pub const m_vDebugOffset: usize = 0x40; // VectorAligned
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod SolveIKChainPoseOpFixedSettings_t {
                pub const m_ChainsToSolveData: usize = 0x0; // CUtlVector<ChainToSolveData_t>
                pub const m_bMatchTargetOrientation: usize = 0x18; // bool
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CAnimParameterBase {
                pub const m_name: usize = 0x18; // CGlobalSymbol
                pub const m_group: usize = 0x20; // CUtlString
                pub const m_id: usize = 0x28; // AnimParamID
                pub const m_componentName: usize = 0x40; // CUtlString
                pub const m_bNetworkingRequested: usize = 0x60; // bool
                pub const m_bIsReferenced: usize = 0x61; // bool
            }
            // Parent: CAnimParameterBase
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CConcreteAnimParameter {
                pub const m_previewButton: usize = 0x64; // AnimParamButton_t
                pub const m_eNetworkSetting: usize = 0x68; // AnimParamNetworkSetting
                pub const m_bUseMostRecentValue: usize = 0x6C; // bool
                pub const m_bAutoReset: usize = 0x6D; // bool
                pub const m_bGameWritable: usize = 0x6E; // bool
                pub const m_bGraphWritable: usize = 0x6F; // bool
            }
            // Parent: CAnimParameterBase
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CVirtualAnimParameter {
                pub const m_expressionString: usize = 0x68; // CUtlString
                pub const m_eParamType: usize = 0x70; // AnimParamType_t
            }
            // Parent: CConcreteAnimParameter
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CBoolAnimParameter {
                pub const m_bDefaultValue: usize = 0x70; // bool
            }
            // Parent: CConcreteAnimParameter
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CEnumAnimParameter {
                pub const m_defaultValue: usize = 0x78; // uint8
                pub const m_enumOptions: usize = 0x80; // CUtlVector<CUtlString>
            }
            // Parent: CConcreteAnimParameter
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CIntAnimParameter {
                pub const m_defaultValue: usize = 0x70; // int32
                pub const m_minValue: usize = 0x74; // int32
                pub const m_maxValue: usize = 0x78; // int32
            }
            // Parent: CConcreteAnimParameter
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CFloatAnimParameter {
                pub const m_fDefaultValue: usize = 0x70; // float32
                pub const m_fMinValue: usize = 0x74; // float32
                pub const m_fMaxValue: usize = 0x78; // float32
                pub const m_bInterpolate: usize = 0x7C; // bool
            }
            // Parent: CConcreteAnimParameter
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CVectorAnimParameter {
                pub const m_defaultValue: usize = 0x70; // Vector
                pub const m_bInterpolate: usize = 0x7C; // bool
            }
            // Parent: CConcreteAnimParameter
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CQuaternionAnimParameter {
                pub const m_defaultValue: usize = 0x70; // Quaternion
                pub const m_bInterpolate: usize = 0x80; // bool
            }
            // Parent: CConcreteAnimParameter
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CSymbolAnimParameter {
                pub const m_defaultValue: usize = 0x70; // CGlobalSymbol
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod ScriptInfo_t {
                pub const m_code: usize = 0x0; // CUtlString
                pub const m_paramsModified: usize = 0x8; // CUtlVector<CAnimParamHandle>
                pub const m_proxyReadParams: usize = 0x20; // CUtlVector<int32>
                pub const m_proxyWriteParams: usize = 0x38; // CUtlVector<int32>
                pub const m_eScriptType: usize = 0x50; // AnimScriptType
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CAnimScriptManager {
                pub const m_scriptInfo: usize = 0x10; // CUtlVector<ScriptInfo_t>
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CStateActionUpdater {
                pub const m_pAction: usize = 0x0; // CSmartPtr<CAnimActionUpdater>
                pub const m_eBehavior: usize = 0x8; // StateActionBehavior
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CTransitionUpdateData {
                pub const m_srcStateIndex: usize = 0x0; // uint8
                pub const m_destStateIndex: usize = 0x1; // uint8
                pub const m_bDisabled: usize = 0x0; // bitfield:1
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CStateUpdateData {
                pub const m_name: usize = 0x0; // CUtlString
                pub const m_hScript: usize = 0x8; // AnimScriptHandle
                pub const m_transitionIndices: usize = 0x10; // CUtlVector<int32>
                pub const m_actions: usize = 0x28; // CUtlVector<CStateActionUpdater>
                pub const m_stateID: usize = 0x40; // AnimStateID
                pub const m_bIsStartState: usize = 0x0; // bitfield:1
                pub const m_bIsEndState: usize = 0x0; // bitfield:1
                pub const m_bIsPassthrough: usize = 0x0; // bitfield:1
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CAnimStateMachineUpdater {
                pub const m_states: usize = 0x8; // CUtlVector<CStateUpdateData>
                pub const m_transitions: usize = 0x20; // CUtlVector<CTransitionUpdateData>
                pub const m_startStateIndex: usize = 0x50; // int32
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CAnimUpdateNodeRef {
                pub const m_nodeIndex: usize = 0x8; // int32
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CAnimUpdateNodeBase {
                pub const m_nodePath: usize = 0x14; // CAnimNodePath
                pub const m_networkMode: usize = 0x44; // AnimNodeNetworkMode
                pub const m_name: usize = 0x50; // CUtlString
            }
            // Parent: CAnimUpdateNodeBase
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CBinaryUpdateNode {
                pub const m_pChild1: usize = 0x58; // CAnimUpdateNodeRef
                pub const m_pChild2: usize = 0x68; // CAnimUpdateNodeRef
                pub const m_timingBehavior: usize = 0x78; // BinaryNodeTiming
                pub const m_flTimingBlend: usize = 0x7C; // float32
                pub const m_bResetChild1: usize = 0x80; // bool
                pub const m_bResetChild2: usize = 0x81; // bool
            }
            // Parent: CAnimUpdateNodeBase
            // Fields count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CBlendUpdateNode {
                pub const m_children: usize = 0x60; // CUtlVector<CAnimUpdateNodeRef>
                pub const m_sortedOrder: usize = 0x78; // CUtlVector<uint8>
                pub const m_targetValues: usize = 0x90; // CUtlVector<float32>
                pub const m_blendValueSource: usize = 0xAC; // AnimValueSource
                pub const m_paramIndex: usize = 0xB0; // CAnimParamHandle
                pub const m_damping: usize = 0xB8; // CAnimInputDamping
                pub const m_blendKeyType: usize = 0xC8; // BlendKeyType
                pub const m_bLockBlendOnReset: usize = 0xCC; // bool
                pub const m_bSyncCycles: usize = 0xCD; // bool
                pub const m_bLoop: usize = 0xCE; // bool
                pub const m_bLockWhenWaning: usize = 0xCF; // bool
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod BlendItem_t {
                pub const m_tags: usize = 0x0; // CUtlVector<TagSpan_t>
                pub const m_pChild: usize = 0x18; // CAnimUpdateNodeRef
                pub const m_hSequence: usize = 0x28; // HSequence
                pub const m_vPos: usize = 0x2C; // Vector2D
                pub const m_flDuration: usize = 0x34; // float32
                pub const m_bUseCustomDuration: usize = 0x38; // bool
            }
            // Parent: CAnimUpdateNodeBase
            // Fields count: 15
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CBlend2DUpdateNode {
                pub const m_items: usize = 0x60; // CUtlVector<BlendItem_t>
                pub const m_tags: usize = 0x78; // CUtlVector<TagSpan_t>
                pub const m_paramSpans: usize = 0x90; // CParamSpanUpdater
                pub const m_nodeItemIndices: usize = 0xA8; // CUtlVector<int32>
                pub const m_damping: usize = 0xC0; // CAnimInputDamping
                pub const m_blendSourceX: usize = 0xD0; // AnimValueSource
                pub const m_paramX: usize = 0xD4; // CAnimParamHandle
                pub const m_blendSourceY: usize = 0xD8; // AnimValueSource
                pub const m_paramY: usize = 0xDC; // CAnimParamHandle
                pub const m_eBlendMode: usize = 0xE0; // Blend2DMode
                pub const m_playbackSpeed: usize = 0xE4; // float32
                pub const m_bLoop: usize = 0xE8; // bool
                pub const m_bLockBlendOnReset: usize = 0xE9; // bool
                pub const m_bLockWhenWaning: usize = 0xEA; // bool
                pub const m_bAnimEventsAndTagsOnMostWeightedOnly: usize = 0xEB; // bool
            }
            // Parent: CBinaryUpdateNode
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CBoneMaskUpdateNode {
                pub const m_nWeightListIndex: usize = 0x88; // int32
                pub const m_flRootMotionBlend: usize = 0x8C; // float32
                pub const m_blendSpace: usize = 0x90; // BoneMaskBlendSpace
                pub const m_footMotionTiming: usize = 0x94; // BinaryNodeChildOption
                pub const m_bUseBlendScale: usize = 0x98; // bool
                pub const m_blendValueSource: usize = 0x9C; // AnimValueSource
                pub const m_hBlendParameter: usize = 0xA0; // CAnimParamHandle
            }
            // Parent: CAnimUpdateNodeBase
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CChoiceUpdateNode {
                pub const m_children: usize = 0x58; // CUtlVector<CAnimUpdateNodeRef>
                pub const m_weights: usize = 0x70; // CUtlVector<float32>
                pub const m_blendTimes: usize = 0x88; // CUtlVector<float32>
                pub const m_choiceMethod: usize = 0xA0; // ChoiceMethod
                pub const m_choiceChangeMethod: usize = 0xA4; // ChoiceChangeMethod
                pub const m_blendMethod: usize = 0xA8; // ChoiceBlendMethod
                pub const m_blendTime: usize = 0xAC; // float32
                pub const m_bCrossFade: usize = 0xB0; // bool
                pub const m_bResetChosen: usize = 0xB1; // bool
                pub const m_bDontResetSameSelection: usize = 0xB2; // bool
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CDirectPlaybackTagData {
                pub const m_sequenceName: usize = 0x0; // CUtlString
                pub const m_tags: usize = 0x8; // CUtlVector<TagSpan_t>
            }
            // Parent: None
            // Fields count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FootFixedData_t {
                pub const m_vToeOffset: usize = 0x0; // VectorAligned
                pub const m_vHeelOffset: usize = 0x10; // VectorAligned
                pub const m_nTargetBoneIndex: usize = 0x20; // int32
                pub const m_nAnkleBoneIndex: usize = 0x24; // int32
                pub const m_nIKAnchorBoneIndex: usize = 0x28; // int32
                pub const m_ikChainIndex: usize = 0x2C; // int32
                pub const m_flMaxIKLength: usize = 0x30; // float32
                pub const m_nFootIndex: usize = 0x34; // int32
                pub const m_nTagIndex: usize = 0x38; // int32
                pub const m_flMaxRotationLeft: usize = 0x3C; // float32
                pub const m_flMaxRotationRight: usize = 0x40; // float32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod TraceSettings_t {
                pub const m_flTraceHeight: usize = 0x0; // float32
                pub const m_flTraceRadius: usize = 0x4; // float32
            }
            // Parent: None
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FootFixedSettings {
                pub const m_traceSettings: usize = 0x0; // TraceSettings_t
                pub const m_vFootBaseBindPosePositionMS: usize = 0x10; // VectorAligned
                pub const m_flFootBaseLength: usize = 0x20; // float32
                pub const m_flMaxRotationLeft: usize = 0x24; // float32
                pub const m_flMaxRotationRight: usize = 0x28; // float32
                pub const m_footstepLandedTagIndex: usize = 0x2C; // int32
                pub const m_bEnableTracing: usize = 0x30; // bool
                pub const m_flTraceAngleBlend: usize = 0x34; // float32
                pub const m_nDisableTagIndex: usize = 0x38; // int32
                pub const m_nFootIndex: usize = 0x3C; // int32
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FootStepTrigger {
                pub const m_tags: usize = 0x0; // CUtlVector<int32>
                pub const m_nFootIndex: usize = 0x18; // int32
                pub const m_triggerPhase: usize = 0x1C; // StepPhase
            }
            // Parent: CAnimUpdateNodeBase
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CLeafUpdateNode {
            }
            // Parent: CLeafUpdateNode
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CLeanMatrixUpdateNode {
                pub const m_frameCorners: usize = 0x5C; // int32[3][3]
                pub const m_poses: usize = 0x80; // CPoseHandle[9]
                pub const m_damping: usize = 0xA8; // CAnimInputDamping
                pub const m_blendSource: usize = 0xB8; // AnimVectorSource
                pub const m_paramIndex: usize = 0xBC; // CAnimParamHandle
                pub const m_verticalAxis: usize = 0xC0; // Vector
                pub const m_horizontalAxis: usize = 0xCC; // Vector
                pub const m_hSequence: usize = 0xD8; // HSequence
                pub const m_flMaxValue: usize = 0xDC; // float32
                pub const m_nSequenceMaxFrame: usize = 0xE0; // int32
            }
            // Parent: CLeafUpdateNode
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CMotionGraphUpdateNode {
                pub const m_pMotionGraph: usize = 0x58; // CSmartPtr<CMotionGraph>
            }
            // Parent: CLeafUpdateNode
            // Fields count: 23
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CMotionMatchingUpdateNode {
                pub const m_dataSet: usize = 0x58; // CMotionDataSet
                pub const m_metrics: usize = 0x78; // CUtlVector<CSmartPtr<CMotionMetricEvaluator>>
                pub const m_weights: usize = 0x90; // CUtlVector<float32>
                pub const m_bSearchEveryTick: usize = 0xE0; // bool
                pub const m_flSearchInterval: usize = 0xE4; // float32
                pub const m_bSearchWhenClipEnds: usize = 0xE8; // bool
                pub const m_bSearchWhenGoalChanges: usize = 0xE9; // bool
                pub const m_blendCurve: usize = 0xEC; // CBlendCurve
                pub const m_flSampleRate: usize = 0xF4; // float32
                pub const m_flBlendTime: usize = 0xF8; // float32
                pub const m_bLockClipWhenWaning: usize = 0xFC; // bool
                pub const m_flSelectionThreshold: usize = 0x100; // float32
                pub const m_flReselectionTimeWindow: usize = 0x104; // float32
                pub const m_bEnableRotationCorrection: usize = 0x108; // bool
                pub const m_bGoalAssist: usize = 0x109; // bool
                pub const m_flGoalAssistDistance: usize = 0x10C; // float32
                pub const m_flGoalAssistTolerance: usize = 0x110; // float32
                pub const m_distanceScale_Damping: usize = 0x118; // CAnimInputDamping
                pub const m_flDistanceScale_OuterRadius: usize = 0x128; // float32
                pub const m_flDistanceScale_InnerRadius: usize = 0x12C; // float32
                pub const m_flDistanceScale_MaxScale: usize = 0x130; // float32
                pub const m_flDistanceScale_MinScale: usize = 0x134; // float32
                pub const m_bEnableDistanceScaling: usize = 0x138; // bool
            }
            // Parent: CAnimUpdateNodeBase
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CSelectorUpdateNode {
                pub const m_children: usize = 0x58; // CUtlVector<CAnimUpdateNodeRef>
                pub const m_tags: usize = 0x70; // CUtlVector<int8>
                pub const m_blendCurve: usize = 0x8C; // CBlendCurve
                pub const m_flBlendTime: usize = 0x94; // CAnimValue<float32>
                pub const m_hParameter: usize = 0x9C; // CAnimParamHandle
                pub const m_eTagBehavior: usize = 0xA0; // SelectorTagBehavior_t
                pub const m_bResetOnChange: usize = 0xA4; // bool
                pub const m_bSyncCyclesOnChange: usize = 0xA5; // bool
            }
            // Parent: CLeafUpdateNode
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CSequenceUpdateNode {
                pub const m_paramSpans: usize = 0x60; // CParamSpanUpdater
                pub const m_tags: usize = 0x78; // CUtlVector<TagSpan_t>
                pub const m_hSequence: usize = 0x94; // HSequence
                pub const m_playbackSpeed: usize = 0x98; // float32
                pub const m_duration: usize = 0x9C; // float32
                pub const m_bLoop: usize = 0xA0; // bool
            }
            // Parent: CLeafUpdateNode
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CSingleFrameUpdateNode {
                pub const m_actions: usize = 0x58; // CUtlVector<CSmartPtr<CAnimActionUpdater>>
                pub const m_hPoseCacheHandle: usize = 0x70; // CPoseHandle
                pub const m_hSequence: usize = 0x74; // HSequence
                pub const m_flCycle: usize = 0x78; // float32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CSolveIKTargetHandle_t {
                pub const m_positionHandle: usize = 0x0; // CAnimParamHandle
                pub const m_orientationHandle: usize = 0x2; // CAnimParamHandle
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod StanceInfo_t {
                pub const m_vPosition: usize = 0x0; // Vector
                pub const m_flDirection: usize = 0xC; // float32
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CStateNodeTransitionData {
                pub const m_curve: usize = 0x0; // CBlendCurve
                pub const m_blendDuration: usize = 0x8; // CAnimValue<float32>
                pub const m_resetCycleValue: usize = 0x10; // CAnimValue<float32>
                pub const m_bReset: usize = 0x0; // bitfield:1
                pub const m_resetCycleOption: usize = 0x0; // bitfield:3
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CStateNodeStateData {
                pub const m_pChild: usize = 0x0; // CAnimUpdateNodeRef
                pub const m_bExclusiveRootMotion: usize = 0x0; // bitfield:1
            }
            // Parent: CAnimUpdateNodeBase
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CStateMachineUpdateNode {
                pub const m_stateMachine: usize = 0x68; // CAnimStateMachineUpdater
                pub const m_stateData: usize = 0xC0; // CUtlVector<CStateNodeStateData>
                pub const m_transitionData: usize = 0xD8; // CUtlVector<CStateNodeTransitionData>
                pub const m_bBlockWaningTags: usize = 0xF4; // bool
                pub const m_bLockStateWhenWaning: usize = 0xF5; // bool
            }
            // Parent: CBinaryUpdateNode
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CSubtractUpdateNode {
                pub const m_footMotionTiming: usize = 0x88; // BinaryNodeChildOption
                pub const m_bApplyToFootMotion: usize = 0x8C; // bool
                pub const m_bApplyChannelsSeparately: usize = 0x8D; // bool
                pub const m_bUseModelSpace: usize = 0x8E; // bool
            }
            // Parent: None
            // Fields count: 15
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod TwoBoneIKSettings_t {
                pub const m_endEffectorType: usize = 0x0; // IkEndEffectorType
                pub const m_endEffectorAttachment: usize = 0x10; // CAnimAttachment
                pub const m_targetType: usize = 0x90; // IkTargetType
                pub const m_targetAttachment: usize = 0xA0; // CAnimAttachment
                pub const m_targetBoneIndex: usize = 0x120; // int32
                pub const m_hPositionParam: usize = 0x124; // CAnimParamHandle
                pub const m_hRotationParam: usize = 0x126; // CAnimParamHandle
                pub const m_bAlwaysUseFallbackHinge: usize = 0x128; // bool
                pub const m_vLsFallbackHingeAxis: usize = 0x130; // VectorAligned
                pub const m_nFixedBoneIndex: usize = 0x140; // int32
                pub const m_nMiddleBoneIndex: usize = 0x144; // int32
                pub const m_nEndBoneIndex: usize = 0x148; // int32
                pub const m_bMatchTargetOrientation: usize = 0x14C; // bool
                pub const m_bConstrainTwist: usize = 0x14D; // bool
                pub const m_flMaxTwist: usize = 0x150; // float32
            }
            // Parent: CAnimUpdateNodeBase
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CUnaryUpdateNode {
                pub const m_pChildNode: usize = 0x58; // CAnimUpdateNodeRef
            }
            // Parent: CUnaryUpdateNode
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CWayPointHelperUpdateNode {
                pub const m_flStartCycle: usize = 0x6C; // float32
                pub const m_flEndCycle: usize = 0x70; // float32
                pub const m_bOnlyGoals: usize = 0x74; // bool
                pub const m_bPreventOvershoot: usize = 0x75; // bool
                pub const m_bPreventUndershoot: usize = 0x76; // bool
            }
            // Parent: CLeafUpdateNode
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CZeroPoseUpdateNode {
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod TagSpan_t {
                pub const m_tagIndex: usize = 0x0; // int32
                pub const m_startCycle: usize = 0x4; // float32
                pub const m_endCycle: usize = 0x8; // float32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CAnimNodePath {
                pub const m_path: usize = 0x0; // AnimNodeID[11]
                pub const m_nCount: usize = 0x2C; // int32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod ConfigIndex {
                pub const m_nGroup: usize = 0x0; // uint16
                pub const m_nConfig: usize = 0x2; // uint16
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod MotionIndex {
                pub const m_nGroup: usize = 0x0; // uint16
                pub const m_nMotion: usize = 0x2; // uint16
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CMotionGraphConfig {
                pub const m_paramValues: usize = 0x0; // float32[4]
                pub const m_flDuration: usize = 0x10; // float32
                pub const m_nMotionIndex: usize = 0x14; // MotionIndex
                pub const m_nSampleStart: usize = 0x18; // int32
                pub const m_nSampleCount: usize = 0x1C; // int32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPoseHandle {
                pub const m_nIndex: usize = 0x0; // uint16
                pub const m_eType: usize = 0x2; // PoseType_t
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CAnimationGraphVisualizerPrimitiveBase {
                pub const m_Type: usize = 0x8; // CAnimationGraphVisualizerPrimitiveType
                pub const m_OwningAnimNodePaths: usize = 0xC; // AnimNodeID[11]
                pub const m_nOwningAnimNodePathCount: usize = 0x38; // int32
            }
            // Parent: CAnimationGraphVisualizerPrimitiveBase
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CAnimationGraphVisualizerText {
                pub const m_vWsPosition: usize = 0x40; // VectorAligned
                pub const m_Color: usize = 0x50; // Color
                pub const m_Text: usize = 0x58; // CUtlString
            }
            // Parent: CAnimationGraphVisualizerPrimitiveBase
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CAnimationGraphVisualizerSphere {
                pub const m_vWsPosition: usize = 0x40; // VectorAligned
                pub const m_flRadius: usize = 0x50; // float32
                pub const m_Color: usize = 0x54; // Color
            }
            // Parent: CAnimationGraphVisualizerPrimitiveBase
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CAnimationGraphVisualizerLine {
                pub const m_vWsPositionStart: usize = 0x40; // VectorAligned
                pub const m_vWsPositionEnd: usize = 0x50; // VectorAligned
                pub const m_Color: usize = 0x60; // Color
            }
            // Parent: CAnimationGraphVisualizerPrimitiveBase
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CAnimationGraphVisualizerPie {
                pub const m_vWsCenter: usize = 0x40; // VectorAligned
                pub const m_vWsStart: usize = 0x50; // VectorAligned
                pub const m_vWsEnd: usize = 0x60; // VectorAligned
                pub const m_Color: usize = 0x70; // Color
            }
            // Parent: CAnimationGraphVisualizerPrimitiveBase
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CAnimationGraphVisualizerAxis {
                pub const m_xWsTransform: usize = 0x40; // CTransform
                pub const m_flAxisSize: usize = 0x60; // float32
            }
            // Parent: None
            // Fields count: 1
            pub mod IKBoneNameAndIndex_t {
                pub const m_Name: usize = 0x0; // CUtlString
            }
            // Parent: None
            // Fields count: 2
            pub mod IKSolverSettings_t {
                pub const m_SolverType: usize = 0x0; // IKSolverType
                pub const m_nNumIterations: usize = 0x4; // int32
            }
            // Parent: None
            // Fields count: 5
            pub mod IKTargetSettings_t {
                pub const m_TargetSource: usize = 0x0; // IKTargetSource
                pub const m_Bone: usize = 0x8; // IKBoneNameAndIndex_t
                pub const m_AnimgraphParameterNamePosition: usize = 0x18; // AnimParamID
                pub const m_AnimgraphParameterNameOrientation: usize = 0x1C; // AnimParamID
                pub const m_TargetCoordSystem: usize = 0x20; // IKTargetCoordinateSystem
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyEditClassAsString
            pub mod AnimNodeID {
                pub const m_id: usize = 0x0; // uint32
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyEditClassAsString
            pub mod AnimNodeOutputID {
                pub const m_id: usize = 0x0; // uint32
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyEditClassAsString
            pub mod AnimStateID {
                pub const m_id: usize = 0x0; // uint32
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyEditClassAsString
            pub mod AnimParamID {
                pub const m_id: usize = 0x0; // uint32
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyEditClassAsString
            pub mod AnimTagID {
                pub const m_id: usize = 0x0; // uint32
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyEditClassAsString
            pub mod AnimComponentID {
                pub const m_id: usize = 0x0; // uint32
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyEditClassAsString
            pub mod AnimScriptHandle {
                pub const m_id: usize = 0x0; // uint32
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CAnimAttachment {
                pub const m_influenceRotations: usize = 0x0; // Quaternion[3]
                pub const m_influenceOffsets: usize = 0x30; // VectorAligned[3]
                pub const m_influenceIndices: usize = 0x60; // int32[3]
                pub const m_influenceWeights: usize = 0x6C; // float32[3]
                pub const m_numInfluences: usize = 0x78; // uint8
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod VPhysics2ShapeDef_t {
                pub const m_spheres: usize = 0x0; // CUtlVector<RnSphereDesc_t>
                pub const m_capsules: usize = 0x18; // CUtlVector<RnCapsuleDesc_t>
                pub const m_hulls: usize = 0x30; // CUtlVector<RnHullDesc_t>
                pub const m_meshes: usize = 0x48; // CUtlVector<RnMeshDesc_t>
                pub const m_CollisionAttributeIndices: usize = 0x60; // CUtlVector<uint16>
            }
            // Parent: None
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod VPhysXBodyPart_t {
                pub const m_nFlags: usize = 0x0; // uint32
                pub const m_flMass: usize = 0x4; // float32
                pub const m_rnShape: usize = 0x8; // VPhysics2ShapeDef_t
                pub const m_nCollisionAttributeIndex: usize = 0x80; // uint16
                pub const m_nReserved: usize = 0x82; // uint16
                pub const m_flInertiaScale: usize = 0x84; // float32
                pub const m_flLinearDamping: usize = 0x88; // float32
                pub const m_flAngularDamping: usize = 0x8C; // float32
                pub const m_bOverrideMassCenter: usize = 0x90; // bool
                pub const m_vMassCenterOverride: usize = 0x94; // Vector
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod VPhysXCollisionAttributes_t {
                pub const m_CollisionGroup: usize = 0x0; // uint32
                pub const m_InteractAs: usize = 0x8; // CUtlVector<uint32>
                pub const m_InteractWith: usize = 0x20; // CUtlVector<uint32>
                pub const m_InteractExclude: usize = 0x38; // CUtlVector<uint32>
                pub const m_CollisionGroupString: usize = 0x50; // CUtlString
                pub const m_InteractAsStrings: usize = 0x58; // CUtlVector<CUtlString>
                pub const m_InteractWithStrings: usize = 0x70; // CUtlVector<CUtlString>
                pub const m_InteractExcludeStrings: usize = 0x88; // CUtlVector<CUtlString>
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod VPhysXRange_t {
                pub const m_flMin: usize = 0x0; // float32
                pub const m_flMax: usize = 0x4; // float32
            }
            // Parent: None
            // Fields count: 46
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod VPhysXConstraintParams_t {
                pub const m_nType: usize = 0x0; // int8
                pub const m_nTranslateMotion: usize = 0x1; // int8
                pub const m_nRotateMotion: usize = 0x2; // int8
                pub const m_nFlags: usize = 0x3; // int8
                pub const m_anchor: usize = 0x4; // Vector[2]
                pub const m_axes: usize = 0x1C; // QuaternionStorage[2]
                pub const m_maxForce: usize = 0x3C; // float32
                pub const m_maxTorque: usize = 0x40; // float32
                pub const m_linearLimitValue: usize = 0x44; // float32
                pub const m_linearLimitRestitution: usize = 0x48; // float32
                pub const m_linearLimitSpring: usize = 0x4C; // float32
                pub const m_linearLimitDamping: usize = 0x50; // float32
                pub const m_twistLowLimitValue: usize = 0x54; // float32
                pub const m_twistLowLimitRestitution: usize = 0x58; // float32
                pub const m_twistLowLimitSpring: usize = 0x5C; // float32
                pub const m_twistLowLimitDamping: usize = 0x60; // float32
                pub const m_twistHighLimitValue: usize = 0x64; // float32
                pub const m_twistHighLimitRestitution: usize = 0x68; // float32
                pub const m_twistHighLimitSpring: usize = 0x6C; // float32
                pub const m_twistHighLimitDamping: usize = 0x70; // float32
                pub const m_swing1LimitValue: usize = 0x74; // float32
                pub const m_swing1LimitRestitution: usize = 0x78; // float32
                pub const m_swing1LimitSpring: usize = 0x7C; // float32
                pub const m_swing1LimitDamping: usize = 0x80; // float32
                pub const m_swing2LimitValue: usize = 0x84; // float32
                pub const m_swing2LimitRestitution: usize = 0x88; // float32
                pub const m_swing2LimitSpring: usize = 0x8C; // float32
                pub const m_swing2LimitDamping: usize = 0x90; // float32
                pub const m_goalPosition: usize = 0x94; // Vector
                pub const m_goalOrientation: usize = 0xA0; // QuaternionStorage
                pub const m_goalAngularVelocity: usize = 0xB0; // Vector
                pub const m_driveSpringX: usize = 0xBC; // float32
                pub const m_driveSpringY: usize = 0xC0; // float32
                pub const m_driveSpringZ: usize = 0xC4; // float32
                pub const m_driveDampingX: usize = 0xC8; // float32
                pub const m_driveDampingY: usize = 0xCC; // float32
                pub const m_driveDampingZ: usize = 0xD0; // float32
                pub const m_driveSpringTwist: usize = 0xD4; // float32
                pub const m_driveSpringSwing: usize = 0xD8; // float32
                pub const m_driveSpringSlerp: usize = 0xDC; // float32
                pub const m_driveDampingTwist: usize = 0xE0; // float32
                pub const m_driveDampingSwing: usize = 0xE4; // float32
                pub const m_driveDampingSlerp: usize = 0xE8; // float32
                pub const m_solverIterationCount: usize = 0xEC; // int32
                pub const m_projectionLinearTolerance: usize = 0xF0; // float32
                pub const m_projectionAngularTolerance: usize = 0xF4; // float32
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod VPhysXConstraint2_t {
                pub const m_nFlags: usize = 0x0; // uint32
                pub const m_nParent: usize = 0x4; // uint16
                pub const m_nChild: usize = 0x6; // uint16
                pub const m_params: usize = 0x8; // VPhysXConstraintParams_t
            }
            // Parent: None
            // Fields count: 24
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod VPhysXJoint_t {
                pub const m_nType: usize = 0x0; // uint16
                pub const m_nBody1: usize = 0x2; // uint16
                pub const m_nBody2: usize = 0x4; // uint16
                pub const m_nFlags: usize = 0x6; // uint16
                pub const m_Frame1: usize = 0x10; // CTransform
                pub const m_Frame2: usize = 0x30; // CTransform
                pub const m_bEnableCollision: usize = 0x50; // bool
                pub const m_bEnableLinearLimit: usize = 0x51; // bool
                pub const m_LinearLimit: usize = 0x54; // VPhysXRange_t
                pub const m_bEnableLinearMotor: usize = 0x5C; // bool
                pub const m_vLinearTargetVelocity: usize = 0x60; // Vector
                pub const m_flMaxForce: usize = 0x6C; // float32
                pub const m_bEnableSwingLimit: usize = 0x70; // bool
                pub const m_SwingLimit: usize = 0x74; // VPhysXRange_t
                pub const m_bEnableTwistLimit: usize = 0x7C; // bool
                pub const m_TwistLimit: usize = 0x80; // VPhysXRange_t
                pub const m_bEnableAngularMotor: usize = 0x88; // bool
                pub const m_vAngularTargetVelocity: usize = 0x8C; // Vector
                pub const m_flMaxTorque: usize = 0x98; // float32
                pub const m_flLinearFrequency: usize = 0x9C; // float32
                pub const m_flLinearDampingRatio: usize = 0xA0; // float32
                pub const m_flAngularFrequency: usize = 0xA4; // float32
                pub const m_flAngularDampingRatio: usize = 0xA8; // float32
                pub const m_flFriction: usize = 0xAC; // float32
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod PhysSoftbodyDesc_t {
                pub const m_ParticleBoneHash: usize = 0x0; // CUtlVector<uint32>
                pub const m_Particles: usize = 0x18; // CUtlVector<RnSoftbodyParticle_t>
                pub const m_Springs: usize = 0x30; // CUtlVector<RnSoftbodySpring_t>
                pub const m_Capsules: usize = 0x48; // CUtlVector<RnSoftbodyCapsule_t>
                pub const m_InitPose: usize = 0x60; // CUtlVector<CTransform>
                pub const m_ParticleBoneName: usize = 0x78; // CUtlVector<CUtlString>
            }
            // Parent: None
            // Fields count: 16
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod VPhysXAggregateData_t {
                pub const m_nFlags: usize = 0x0; // uint16
                pub const m_nRefCounter: usize = 0x2; // uint16
                pub const m_bonesHash: usize = 0x8; // CUtlVector<uint32>
                pub const m_boneNames: usize = 0x20; // CUtlVector<CUtlString>
                pub const m_indexNames: usize = 0x38; // CUtlVector<uint16>
                pub const m_indexHash: usize = 0x50; // CUtlVector<uint16>
                pub const m_bindPose: usize = 0x68; // CUtlVector<matrix3x4a_t>
                pub const m_parts: usize = 0x80; // CUtlVector<VPhysXBodyPart_t>
                pub const m_constraints2: usize = 0x98; // CUtlVector<VPhysXConstraint2_t>
                pub const m_joints: usize = 0xB0; // CUtlVector<VPhysXJoint_t>
                pub const m_pFeModel: usize = 0xC8; // PhysFeModelDesc_t*
                pub const m_boneParents: usize = 0xD0; // CUtlVector<uint16>
                pub const m_surfacePropertyHashes: usize = 0xE8; // CUtlVector<uint32>
                pub const m_collisionAttributes: usize = 0x100; // CUtlVector<VPhysXCollisionAttributes_t>
                pub const m_debugPartNames: usize = 0x118; // CUtlVector<CUtlString>
                pub const m_embeddedKeyvalues: usize = 0x130; // CUtlString
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPhysSurfacePropertiesPhysics {
                pub const m_friction: usize = 0x0; // float32
                pub const m_elasticity: usize = 0x4; // float32
                pub const m_density: usize = 0x8; // float32
                pub const m_thickness: usize = 0xC; // float32
                pub const m_softContactFrequency: usize = 0x10; // float32
                pub const m_softContactDampingRatio: usize = 0x14; // float32
                pub const m_wheelDrag: usize = 0x18; // float32
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPhysSurfacePropertiesAudio {
                pub const m_reflectivity: usize = 0x0; // float32
                pub const m_hardnessFactor: usize = 0x4; // float32
                pub const m_roughnessFactor: usize = 0x8; // float32
                pub const m_roughThreshold: usize = 0xC; // float32
                pub const m_hardThreshold: usize = 0x10; // float32
                pub const m_hardVelocityThreshold: usize = 0x14; // float32
                pub const m_flStaticImpactVolume: usize = 0x18; // float32
                pub const m_flOcclusionFactor: usize = 0x1C; // float32
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPhysSurfacePropertiesSoundNames {
                pub const m_impactSoft: usize = 0x0; // CUtlString
                pub const m_impactHard: usize = 0x8; // CUtlString
                pub const m_scrapeSmooth: usize = 0x10; // CUtlString
                pub const m_scrapeRough: usize = 0x18; // CUtlString
                pub const m_bulletImpact: usize = 0x20; // CUtlString
                pub const m_rolling: usize = 0x28; // CUtlString
                pub const m_break: usize = 0x30; // CUtlString
                pub const m_strain: usize = 0x38; // CUtlString
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPhysSurfaceProperties {
                pub const m_name: usize = 0x0; // CUtlString
                pub const m_nameHash: usize = 0x8; // uint32
                pub const m_baseNameHash: usize = 0xC; // uint32
                pub const m_bHidden: usize = 0x18; // bool
                pub const m_description: usize = 0x20; // CUtlString
                pub const m_physics: usize = 0x28; // CPhysSurfacePropertiesPhysics
                pub const m_audioSounds: usize = 0x48; // CPhysSurfacePropertiesSoundNames
                pub const m_audioParams: usize = 0x88; // CPhysSurfacePropertiesAudio
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CVPhysXSurfacePropertiesList {
                pub const m_surfacePropertiesList: usize = 0x0; // CUtlVector<CPhysSurfaceProperties*>
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod MaterialGroup_t {
                pub const m_name: usize = 0x0; // CUtlString
                pub const m_materials: usize = 0x8; // CUtlVector<CStrongHandle<InfoForResourceTypeIMaterial2>>
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod ModelSkeletonData_t {
                pub const m_boneName: usize = 0x0; // CUtlVector<CUtlString>
                pub const m_nParent: usize = 0x18; // CUtlVector<int16>
                pub const m_boneSphere: usize = 0x30; // CUtlVector<float32>
                pub const m_nFlag: usize = 0x48; // CUtlVector<uint32>
                pub const m_bonePosParent: usize = 0x60; // CUtlVector<Vector>
                pub const m_boneRotParent: usize = 0x78; // CUtlVector<QuaternionStorage>
                pub const m_boneScaleParent: usize = 0x90; // CUtlVector<float32>
            }
            // Parent: None
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod PermModelInfo_t {
                pub const m_nFlags: usize = 0x0; // uint32
                pub const m_vHullMin: usize = 0x4; // Vector
                pub const m_vHullMax: usize = 0x10; // Vector
                pub const m_vViewMin: usize = 0x1C; // Vector
                pub const m_vViewMax: usize = 0x28; // Vector
                pub const m_flMass: usize = 0x34; // float32
                pub const m_vEyePosition: usize = 0x38; // Vector
                pub const m_flMaxEyeDeflection: usize = 0x44; // float32
                pub const m_sSurfaceProperty: usize = 0x48; // CUtlString
                pub const m_keyValueText: usize = 0x50; // CUtlString
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod PermModelExtPart_t {
                pub const m_Transform: usize = 0x0; // CTransform
                pub const m_Name: usize = 0x20; // CUtlString
                pub const m_nParent: usize = 0x28; // int32
                pub const m_refModel: usize = 0x30; // CStrongHandle<InfoForResourceTypeCModel>
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod ModelBoneFlexDriverControl_t {
                pub const m_nBoneComponent: usize = 0x0; // ModelBoneFlexComponent_t
                pub const m_flexController: usize = 0x8; // CUtlString
                pub const m_flexControllerToken: usize = 0x10; // uint32
                pub const m_flMin: usize = 0x14; // float32
                pub const m_flMax: usize = 0x18; // float32
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod ModelBoneFlexDriver_t {
                pub const m_boneName: usize = 0x0; // CUtlString
                pub const m_boneNameToken: usize = 0x8; // uint32
                pub const m_controls: usize = 0x10; // CUtlVector<ModelBoneFlexDriverControl_t>
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod PermModelDataAnimatedMaterialAttribute_t {
                pub const m_AttributeName: usize = 0x0; // CUtlString
                pub const m_nNumChannels: usize = 0x8; // int32
            }
            // Parent: None
            // Fields count: 23
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod PermModelData_t {
                pub const m_name: usize = 0x0; // CUtlString
                pub const m_modelInfo: usize = 0x8; // PermModelInfo_t
                pub const m_ExtParts: usize = 0x60; // CUtlVector<PermModelExtPart_t>
                pub const m_refMeshes: usize = 0x78; // CUtlVector<CStrongHandle<InfoForResourceTypeCRenderMesh>>
                pub const m_refMeshGroupMasks: usize = 0x90; // CUtlVector<uint64>
                pub const m_refPhysGroupMasks: usize = 0xA8; // CUtlVector<uint64>
                pub const m_refLODGroupMasks: usize = 0xC0; // CUtlVector<uint8>
                pub const m_lodGroupSwitchDistances: usize = 0xD8; // CUtlVector<float32>
                pub const m_refPhysicsData: usize = 0xF0; // CUtlVector<CStrongHandle<InfoForResourceTypeCPhysAggregateData>>
                pub const m_refPhysicsHitboxData: usize = 0x108; // CUtlVector<CStrongHandle<InfoForResourceTypeCPhysAggregateData>>
                pub const m_refAnimGroups: usize = 0x120; // CUtlVector<CStrongHandle<InfoForResourceTypeCAnimationGroup>>
                pub const m_refSequenceGroups: usize = 0x138; // CUtlVector<CStrongHandle<InfoForResourceTypeCSequenceGroupData>>
                pub const m_meshGroups: usize = 0x150; // CUtlVector<CUtlString>
                pub const m_materialGroups: usize = 0x168; // CUtlVector<MaterialGroup_t>
                pub const m_nDefaultMeshGroupMask: usize = 0x180; // uint64
                pub const m_modelSkeleton: usize = 0x188; // ModelSkeletonData_t
                pub const m_remappingTable: usize = 0x230; // CUtlVector<int16>
                pub const m_remappingTableStarts: usize = 0x248; // CUtlVector<uint16>
                pub const m_boneFlexDrivers: usize = 0x260; // CUtlVector<ModelBoneFlexDriver_t>
                pub const m_pModelConfigList: usize = 0x278; // CModelConfigList*
                pub const m_BodyGroupsHiddenInTools: usize = 0x280; // CUtlVector<CUtlString>
                pub const m_refAnimIncludeModels: usize = 0x298; // CUtlVector<CStrongHandle<InfoForResourceTypeCModel>>
                pub const m_AnimatedMaterialAttributes: usize = 0x2B0; // CUtlVector<PermModelDataAnimatedMaterialAttribute_t>
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CModelConfigElement {
                pub const m_ElementName: usize = 0x8; // CUtlString
                pub const m_NestedElements: usize = 0x10; // CUtlVector<CModelConfigElement*>
            }
            // Parent: CModelConfigElement
            // Fields count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CModelConfigElement_AttachedModel {
                pub const m_InstanceName: usize = 0x48; // CUtlString
                pub const m_EntityClass: usize = 0x50; // CUtlString
                pub const m_hModel: usize = 0x58; // CStrongHandle<InfoForResourceTypeCModel>
                pub const m_vOffset: usize = 0x60; // Vector
                pub const m_aAngOffset: usize = 0x6C; // QAngle
                pub const m_AttachmentName: usize = 0x78; // CUtlString
                pub const m_LocalAttachmentOffsetName: usize = 0x80; // CUtlString
                pub const m_AttachmentType: usize = 0x88; // ModelConfigAttachmentType_t
                pub const m_bBoneMergeFlex: usize = 0x8C; // bool
                pub const m_bUserSpecifiedColor: usize = 0x8D; // bool
                pub const m_bUserSpecifiedMaterialGroup: usize = 0x8E; // bool
                pub const m_bAcceptParentMaterialDrivenDecals: usize = 0x8F; // bool
                pub const m_BodygroupOnOtherModels: usize = 0x90; // CUtlString
                pub const m_MaterialGroupOnOtherModels: usize = 0x98; // CUtlString
            }
            // Parent: CModelConfigElement
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CModelConfigElement_UserPick {
                pub const m_Choices: usize = 0x48; // CUtlVector<CUtlString>
            }
            // Parent: CModelConfigElement
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CModelConfigElement_RandomPick {
                pub const m_Choices: usize = 0x48; // CUtlVector<CUtlString>
                pub const m_ChoiceWeights: usize = 0x60; // CUtlVector<float32>
            }
            // Parent: CModelConfigElement
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CModelConfigElement_SetMaterialGroup {
                pub const m_MaterialGroupName: usize = 0x48; // CUtlString
            }
            // Parent: CModelConfigElement
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CModelConfigElement_SetMaterialGroupOnAttachedModels {
                pub const m_MaterialGroupName: usize = 0x48; // CUtlString
            }
            // Parent: CModelConfigElement
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CModelConfigElement_SetRenderColor {
                pub const m_Color: usize = 0x48; // Color
            }
            // Parent: CModelConfigElement
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CModelConfigElement_RandomColor {
                pub const m_Gradient: usize = 0x48; // CColorGradient
            }
            // Parent: CModelConfigElement
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CModelConfigElement_SetBodygroup {
                pub const m_GroupName: usize = 0x48; // CUtlString
                pub const m_nChoice: usize = 0x50; // int32
            }
            // Parent: CModelConfigElement
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CModelConfigElement_SetBodygroupOnAttachedModels {
                pub const m_GroupName: usize = 0x48; // CUtlString
                pub const m_nChoice: usize = 0x50; // int32
            }
            // Parent: CModelConfigElement
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CModelConfigElement_Command {
                pub const m_Command: usize = 0x48; // CUtlString
                pub const m_Args: usize = 0x50; // KeyValues3
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CModelConfig {
                pub const m_ConfigName: usize = 0x0; // CUtlString
                pub const m_Elements: usize = 0x8; // CUtlVector<CModelConfigElement*>
                pub const m_bTopLevel: usize = 0x20; // bool
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CModelConfigList {
                pub const m_bHideMaterialGroupInTools: usize = 0x0; // bool
                pub const m_bHideRenderColorInTools: usize = 0x1; // bool
                pub const m_Configs: usize = 0x8; // CUtlVector<CModelConfig*>
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CRenderBufferBinding {
                pub const m_hBuffer: usize = 0x0; // uint64
                pub const m_nBindOffsetBytes: usize = 0x10; // uint32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod SkeletonBoneBounds_t {
                pub const m_vecCenter: usize = 0x0; // Vector
                pub const m_vecSize: usize = 0xC; // Vector
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod RenderSkeletonBone_t {
                pub const m_boneName: usize = 0x0; // CUtlString
                pub const m_parentName: usize = 0x8; // CUtlString
                pub const m_invBindPose: usize = 0x10; // matrix3x4_t
                pub const m_bbox: usize = 0x40; // SkeletonBoneBounds_t
                pub const m_flSphereRadius: usize = 0x58; // float32
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CRenderSkeleton {
                pub const m_bones: usize = 0x0; // CUtlVector<RenderSkeletonBone_t>
                pub const m_boneParents: usize = 0x30; // CUtlVector<int32>
                pub const m_nBoneWeightCount: usize = 0x48; // int32
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CDrawCullingData {
                pub const m_vConeApex: usize = 0x0; // Vector
                pub const m_ConeAxis: usize = 0xC; // int8[3]
                pub const m_ConeCutoff: usize = 0xF; // int8
            }
            // Parent: None
            // Fields count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CMaterialDrawDescriptor {
                pub const m_nPrimitiveType: usize = 0x0; // RenderPrimitiveType_t
                pub const m_nBaseVertex: usize = 0x4; // int32
                pub const m_nVertexCount: usize = 0x8; // int32
                pub const m_nStartIndex: usize = 0xC; // int32
                pub const m_nIndexCount: usize = 0x10; // int32
                pub const m_flUvDensity: usize = 0x14; // float32
                pub const m_vTintColor: usize = 0x18; // Vector
                pub const m_flAlpha: usize = 0x24; // float32
                pub const m_nFirstMeshlet: usize = 0x2C; // uint32
                pub const m_nNumMeshlets: usize = 0x30; // uint16
                pub const m_indexBuffer: usize = 0xB8; // CRenderBufferBinding
                pub const m_material: usize = 0xE0; // CStrongHandle<InfoForResourceTypeIMaterial2>
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CMeshletDescriptor {
                pub const m_PackedAABB: usize = 0x0; // PackedAABB_t
                pub const m_CullingData: usize = 0x8; // CDrawCullingData
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CSceneObjectData {
                pub const m_vMinBounds: usize = 0x0; // Vector
                pub const m_vMaxBounds: usize = 0xC; // Vector
                pub const m_drawCalls: usize = 0x18; // CUtlVector<CMaterialDrawDescriptor>
                pub const m_drawBounds: usize = 0x30; // CUtlVector<AABB_t>
                pub const m_meshlets: usize = 0x48; // CUtlVector<CMeshletDescriptor>
                pub const m_vTintColor: usize = 0x60; // Vector4D
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CAttachment {
                pub const m_name: usize = 0x0; // CUtlString
                pub const m_influenceNames: usize = 0x8; // CUtlString[3]
                pub const m_vInfluenceRotations: usize = 0x20; // Quaternion[3]
                pub const m_vInfluenceOffsets: usize = 0x50; // Vector[3]
                pub const m_influenceWeights: usize = 0x74; // float32[3]
                pub const m_bInfluenceRootTransform: usize = 0x80; // bool[3]
                pub const m_nInfluences: usize = 0x83; // uint8
                pub const m_bIgnoreRotation: usize = 0x84; // bool
            }
            // Parent: None
            // Fields count: 13
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CHitBox {
                pub const m_name: usize = 0x0; // CUtlString
                pub const m_sSurfaceProperty: usize = 0x8; // CUtlString
                pub const m_sBoneName: usize = 0x10; // CUtlString
                pub const m_vMinBounds: usize = 0x18; // Vector
                pub const m_vMaxBounds: usize = 0x24; // Vector
                pub const m_flShapeRadius: usize = 0x30; // float32
                pub const m_nBoneNameHash: usize = 0x34; // uint32
                pub const m_nGroupId: usize = 0x38; // int32
                pub const m_nShapeType: usize = 0x3C; // uint8
                pub const m_bTranslationOnly: usize = 0x3D; // bool
                pub const m_CRC: usize = 0x40; // uint32
                pub const m_cRenderColor: usize = 0x44; // Color
                pub const m_nHitBoxIndex: usize = 0x48; // uint16
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CHitBoxSet {
                pub const m_name: usize = 0x0; // CUtlString
                pub const m_nNameHash: usize = 0x8; // uint32
                pub const m_HitBoxes: usize = 0x10; // CUtlVector<CHitBox>
                pub const m_SourceFilename: usize = 0x28; // CUtlString
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CHitBoxSetList {
                pub const m_HitBoxSets: usize = 0x0; // CUtlVector<CHitBoxSet>
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod DynamicMeshDeformParams_t {
                pub const m_flTensionCompressScale: usize = 0x0; // float32
                pub const m_flTensionStretchScale: usize = 0x4; // float32
                pub const m_bRecomputeSmoothNormalsAfterAnimation: usize = 0x8; // bool
                pub const m_bComputeDynamicMeshTensionAfterAnimation: usize = 0x9; // bool
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod RenderHairStrandInfo_t {
                pub const m_nGuideIdx: usize = 0x0; // uint32[3]
                pub const m_nBaseTriIdx: usize = 0xC; // uint32
                pub const m_vGuideBarycentric: usize = 0x10; // Vector2D
                pub const m_vBaseBarycentric: usize = 0x18; // Vector2D
                pub const m_vRootOffset_flLengthScale: usize = 0x20; // uint16[4]
                pub const m_nPackedBaseMeshUv: usize = 0x28; // uint32
                pub const m_nPad: usize = 0x2C; // uint32
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CRenderGroom {
                pub const m_nSegmentsPerHairStrand: usize = 0x0; // int32
                pub const m_nGuideHairCount: usize = 0x4; // int32
                pub const m_nHairCount: usize = 0x8; // int32
                pub const m_nGroomGroupID: usize = 0xC; // int32
                pub const m_nAttachBoneIdx: usize = 0x10; // int32
                pub const m_hairInfoBufferData: usize = 0x18; // CUtlBinaryBlock
                pub const m_hairs: usize = 0x30; // CUtlVector<RenderHairStrandInfo_t>
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CRenderMesh {
                pub const m_sceneObjects: usize = 0x10; // CUtlVectorFixedGrowable<CSceneObjectData>
                pub const m_constraints: usize = 0xA0; // CUtlVector<CBaseConstraint*>
                pub const m_skeleton: usize = 0xB8; // CRenderSkeleton
                pub const m_meshDeformParams: usize = 0x1E0; // DynamicMeshDeformParams_t
                pub const m_pGroomData: usize = 0x1F0; // CRenderGroom*
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CConstraintTarget {
                pub const m_qOffset: usize = 0x20; // Quaternion
                pub const m_vOffset: usize = 0x30; // Vector
                pub const m_nBoneHash: usize = 0x3C; // uint32
                pub const m_sName: usize = 0x40; // CUtlString
                pub const m_flWeight: usize = 0x48; // float32
                pub const m_bIsAttachment: usize = 0x59; // bool
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CConstraintSlave {
                pub const m_qBaseOrientation: usize = 0x0; // Quaternion
                pub const m_vBasePosition: usize = 0x10; // Vector
                pub const m_nBoneHash: usize = 0x1C; // uint32
                pub const m_flWeight: usize = 0x20; // float32
                pub const m_sName: usize = 0x28; // CUtlString
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CBoneConstraintBase {
            }
            // Parent: CBoneConstraintBase
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CBaseConstraint {
                pub const m_name: usize = 0x28; // CUtlString
                pub const m_vUpVector: usize = 0x30; // Vector
                pub const m_slaves: usize = 0x40; // CUtlVector<CConstraintSlave>
                pub const m_targets: usize = 0x58; // CUtlVector<CConstraintTarget>
            }
            // Parent: CBaseConstraint
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPointConstraint {
            }
            // Parent: CBaseConstraint
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod COrientConstraint {
            }
            // Parent: CBaseConstraint
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CAimConstraint {
                pub const m_qAimOffset: usize = 0x70; // Quaternion
                pub const m_nUpType: usize = 0x80; // uint32
            }
            // Parent: CBaseConstraint
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CTwistConstraint {
                pub const m_bInverse: usize = 0x70; // bool
                pub const m_qParentBindRotation: usize = 0x80; // Quaternion
                pub const m_qChildBindRotation: usize = 0x90; // Quaternion
            }
            // Parent: CBaseConstraint
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CTiltTwistConstraint {
                pub const m_nTargetAxis: usize = 0x70; // int32
                pub const m_nSlaveAxis: usize = 0x74; // int32
            }
            // Parent: CBaseConstraint
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CMorphConstraint {
                pub const m_sTargetMorph: usize = 0x70; // CUtlString
                pub const m_nSlaveChannel: usize = 0x78; // int32
                pub const m_flMin: usize = 0x7C; // float32
                pub const m_flMax: usize = 0x80; // float32
            }
            // Parent: CBaseConstraint
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CParentConstraint {
            }
            // Parent: CBoneConstraintBase
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CBoneConstraintPoseSpaceMorph {
                pub const m_sBoneName: usize = 0x28; // CUtlString
                pub const m_sAttachmentName: usize = 0x30; // CUtlString
                pub const m_outputMorph: usize = 0x38; // CUtlVector<CUtlString>
                pub const m_inputList: usize = 0x50; // CUtlVector<CBoneConstraintPoseSpaceMorph::Input_t>
                pub const m_bClamp: usize = 0x68; // bool
            }
            // Parent: None
            // Fields count: 2
            pub mod CBoneConstraintPoseSpaceMorph__Input_t {
                pub const m_inputValue: usize = 0x0; // Vector
                pub const m_outputWeightList: usize = 0x10; // CUtlVector<float32>
            }
            // Parent: CBaseConstraint
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CBoneConstraintPoseSpaceBone {
                pub const m_inputList: usize = 0x70; // CUtlVector<CBoneConstraintPoseSpaceBone::Input_t>
            }
            // Parent: None
            // Fields count: 2
            pub mod CBoneConstraintPoseSpaceBone__Input_t {
                pub const m_inputValue: usize = 0x0; // Vector
                pub const m_outputTransformList: usize = 0x10; // CUtlVector<CTransform>
            }
            // Parent: CBoneConstraintBase
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CBoneConstraintDotToMorph {
                pub const m_sBoneName: usize = 0x28; // CUtlString
                pub const m_sTargetBoneName: usize = 0x30; // CUtlString
                pub const m_sMorphChannelName: usize = 0x38; // CUtlString
                pub const m_flRemap: usize = 0x40; // float32[4]
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CFlexOp {
                pub const m_OpCode: usize = 0x0; // FlexOpCode_t
                pub const m_Data: usize = 0x4; // int32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CFlexRule {
                pub const m_nFlex: usize = 0x0; // int32
                pub const m_FlexOps: usize = 0x8; // CUtlVector<CFlexOp>
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CFlexDesc {
                pub const m_szFacs: usize = 0x0; // CUtlString
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CFlexController {
                pub const m_szName: usize = 0x0; // CUtlString
                pub const m_szType: usize = 0x8; // CUtlString
                pub const min: usize = 0x10; // float32
                pub const max: usize = 0x14; // float32
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CMorphBundleData {
                pub const m_flULeftSrc: usize = 0x0; // float32
                pub const m_flVTopSrc: usize = 0x4; // float32
                pub const m_offsets: usize = 0x8; // CUtlVector<float32>
                pub const m_ranges: usize = 0x20; // CUtlVector<float32>
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CMorphRectData {
                pub const m_nXLeftDst: usize = 0x0; // int16
                pub const m_nYTopDst: usize = 0x2; // int16
                pub const m_flUWidthSrc: usize = 0x4; // float32
                pub const m_flVHeightSrc: usize = 0x8; // float32
                pub const m_bundleDatas: usize = 0x10; // CUtlVector<CMorphBundleData>
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CMorphData {
                pub const m_name: usize = 0x0; // CUtlString
                pub const m_morphRectDatas: usize = 0x8; // CUtlVector<CMorphRectData>
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CMorphSetData {
                pub const m_nWidth: usize = 0xC; // int32
                pub const m_nHeight: usize = 0x10; // int32
                pub const m_bundleTypes: usize = 0x18; // CUtlVector<MorphBundleType_t>
                pub const m_morphDatas: usize = 0x30; // CUtlVector<CMorphData>
                pub const m_pTextureAtlas: usize = 0x48; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_FlexDesc: usize = 0x50; // CUtlVector<CFlexDesc>
                pub const m_FlexControllers: usize = 0x68; // CUtlVector<CFlexController>
                pub const m_FlexRules: usize = 0x80; // CUtlVector<CFlexRule>
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CAnimFoot {
                pub const m_name: usize = 0x0; // CUtlString
                pub const m_vBallOffset: usize = 0x8; // Vector
                pub const m_vHeelOffset: usize = 0x14; // Vector
                pub const m_ankleBoneIndex: usize = 0x20; // int32
                pub const m_toeBoneIndex: usize = 0x24; // int32
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CAnimSkeleton {
                pub const m_localSpaceTransforms: usize = 0x10; // CUtlVector<CTransform>
                pub const m_modelSpaceTransforms: usize = 0x28; // CUtlVector<CTransform>
                pub const m_boneNames: usize = 0x40; // CUtlVector<CUtlString>
                pub const m_children: usize = 0x58; // CUtlVector<CUtlVector<int32>>
                pub const m_parents: usize = 0x70; // CUtlVector<int32>
                pub const m_feet: usize = 0x88; // CUtlVector<CAnimFoot>
                pub const m_morphNames: usize = 0xA0; // CUtlVector<CUtlString>
                pub const m_lodBoneCounts: usize = 0xB8; // CUtlVector<int32>
            }
            // Parent: None
            // Fields count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CFootDefinition {
                pub const m_name: usize = 0x0; // CUtlString
                pub const m_ankleBoneName: usize = 0x8; // CUtlString
                pub const m_toeBoneName: usize = 0x10; // CUtlString
                pub const m_vBallOffset: usize = 0x18; // Vector
                pub const m_vHeelOffset: usize = 0x24; // Vector
                pub const m_flFootLength: usize = 0x30; // float32
                pub const m_flBindPoseDirectionMS: usize = 0x34; // float32
                pub const m_flTraceHeight: usize = 0x38; // float32
                pub const m_flTraceRadius: usize = 0x3C; // float32
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CCycleBase {
                pub const m_flCycle: usize = 0x0; // float32
            }
            // Parent: CCycleBase
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CAnimCycle {
            }
            // Parent: CCycleBase
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CFootCycle {
            }
            // Parent: None
            // Fields count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CFootCycleDefinition {
                pub const m_vStancePositionMS: usize = 0x0; // Vector
                pub const m_vMidpointPositionMS: usize = 0xC; // Vector
                pub const m_flStanceDirectionMS: usize = 0x18; // float32
                pub const m_vToStrideStartPos: usize = 0x1C; // Vector
                pub const m_stanceCycle: usize = 0x28; // CAnimCycle
                pub const m_footLiftCycle: usize = 0x2C; // CFootCycle
                pub const m_footOffCycle: usize = 0x30; // CFootCycle
                pub const m_footStrikeCycle: usize = 0x34; // CFootCycle
                pub const m_footLandCycle: usize = 0x38; // CFootCycle
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CFootTrajectory {
                pub const m_vOffset: usize = 0x0; // Vector
                pub const m_flRotationOffset: usize = 0xC; // float32
                pub const m_flProgression: usize = 0x10; // float32
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CFootTrajectories {
                pub const m_trajectories: usize = 0x0; // CUtlVector<CFootTrajectory>
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CFootStride {
                pub const m_definition: usize = 0x0; // CFootCycleDefinition
                pub const m_trajectories: usize = 0x40; // CFootTrajectories
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CFootMotion {
                pub const m_strides: usize = 0x0; // CUtlVector<CFootStride>
                pub const m_name: usize = 0x18; // CUtlString
                pub const m_bAdditive: usize = 0x20; // bool
            }
            // Parent: None
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod SkeletonAnimCapture_t {
                pub const m_nEntIndex: usize = 0x0; // CEntityIndex
                pub const m_nEntParent: usize = 0x4; // CEntityIndex
                pub const m_ImportedCollision: usize = 0x8; // CUtlVector<CEntityIndex>
                pub const m_ModelName: usize = 0x20; // CUtlString
                pub const m_CaptureName: usize = 0x28; // CUtlString
                pub const m_ModelBindPose: usize = 0x30; // CUtlVector<SkeletonAnimCapture_t::Bone_t>
                pub const m_FeModelInitPose: usize = 0x48; // CUtlVector<SkeletonAnimCapture_t::Bone_t>
                pub const m_nFlexControllers: usize = 0x60; // int32
                pub const m_bPredicted: usize = 0x64; // bool
                pub const m_Frames: usize = 0xA8; // CUtlVector<SkeletonAnimCapture_t::Frame_t>
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod SkeletonAnimCapture_t__Bone_t {
                pub const m_Name: usize = 0x0; // CUtlString
                pub const m_BindPose: usize = 0x10; // CTransform
                pub const m_nParent: usize = 0x30; // int32
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod SkeletonAnimCapture_t__FrameStamp_t {
                pub const m_flTime: usize = 0x0; // float32
                pub const m_flEntitySimTime: usize = 0x4; // float32
                pub const m_bTeleportTick: usize = 0x8; // bool
                pub const m_bPredicted: usize = 0x9; // bool
                pub const m_flCurTime: usize = 0xC; // float32
                pub const m_flRealTime: usize = 0x10; // float32
                pub const m_nFrameCount: usize = 0x14; // int32
                pub const m_nTickCount: usize = 0x18; // int32
            }
            // Parent: None
            // Fields count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod SkeletonAnimCapture_t__Frame_t {
                pub const m_flTime: usize = 0x0; // float32
                pub const m_Stamp: usize = 0x4; // SkeletonAnimCapture_t::FrameStamp_t
                pub const m_Transform: usize = 0x20; // CTransform
                pub const m_bTeleport: usize = 0x40; // bool
                pub const m_CompositeBones: usize = 0x48; // CUtlVector<CTransform>
                pub const m_SimStateBones: usize = 0x60; // CUtlVector<CTransform>
                pub const m_FeModelAnims: usize = 0x78; // CUtlVector<CTransform>
                pub const m_FeModelPos: usize = 0x90; // CUtlVector<VectorAligned>
                pub const m_FlexControllerWeights: usize = 0xA8; // CUtlVector<float32>
            }
        }
        // Module: libclient.so
        // Classes count: 256
        // Enums count: 0
        pub mod libclient {
            // Parent: None
            // Fields count: 0
            pub mod CEntityComponent {
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
            // NetworkVarNames: m_pEntity (CEntityIdentity *)
            // NetworkVarNames: m_CScriptComponent (CScriptComponent::Storage_t)
            pub mod CEntityInstance {
                pub const m_iszPrivateVScripts: usize = 0x8; // CUtlSymbolLarge
                pub const m_pEntity: usize = 0x10; // CEntityIdentity*
                pub const m_CScriptComponent: usize = 0x28; // CScriptComponent*
                pub const m_bVisibleinPVS: usize = 0x30; // bool
            }
            // Parent: CEntityComponent
            // Fields count: 1
            pub mod CScriptComponent {
                pub const m_scriptClassName: usize = 0x30; // CUtlSymbolLarge
            }
            // Parent: CEntityComponent
            // Fields count: 2
            pub mod CBodyComponent {
                pub const m_pSceneNode: usize = 0x8; // CGameSceneNode*
                pub const __m_pChainEntity: usize = 0x28; // CNetworkVarChainer
            }
            // Parent: CBodyComponent
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_sceneNode (CGameSceneNode)
            pub mod CBodyComponentPoint {
                pub const m_sceneNode: usize = 0x60; // CGameSceneNode
                pub const __m_pChainEntity: usize = 0x1C0; // CNetworkVarChainer
            }
            // Parent: CBodyComponent
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_skeletonInstance (CSkeletonInstance)
            pub mod CBodyComponentSkeletonInstance {
                pub const m_skeletonInstance: usize = 0x60; // CSkeletonInstance
                pub const __m_pChainEntity: usize = 0x450; // CNetworkVarChainer
            }
            // Parent: CEntityComponent
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_bvDisabledHitGroups (uint32)
            pub mod CHitboxComponent {
                pub const m_bvDisabledHitGroups: usize = 0x24; // uint32[1]
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
            pub mod CLightComponent {
                pub const __m_pChainEntity: usize = 0x58; // CNetworkVarChainer
                pub const m_Color: usize = 0x95; // Color
                pub const m_SecondaryColor: usize = 0x99; // Color
                pub const m_flBrightness: usize = 0xA0; // float32
                pub const m_flBrightnessScale: usize = 0xA4; // float32
                pub const m_flBrightnessMult: usize = 0xA8; // float32
                pub const m_flRange: usize = 0xAC; // float32
                pub const m_flFalloff: usize = 0xB0; // float32
                pub const m_flAttenuation0: usize = 0xB4; // float32
                pub const m_flAttenuation1: usize = 0xB8; // float32
                pub const m_flAttenuation2: usize = 0xBC; // float32
                pub const m_flTheta: usize = 0xC0; // float32
                pub const m_flPhi: usize = 0xC4; // float32
                pub const m_hLightCookie: usize = 0xC8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_nCascades: usize = 0xD0; // int32
                pub const m_nCastShadows: usize = 0xD4; // int32
                pub const m_nShadowWidth: usize = 0xD8; // int32
                pub const m_nShadowHeight: usize = 0xDC; // int32
                pub const m_bRenderDiffuse: usize = 0xE0; // bool
                pub const m_nRenderSpecular: usize = 0xE4; // int32
                pub const m_bRenderTransmissive: usize = 0xE8; // bool
                pub const m_flOrthoLightWidth: usize = 0xEC; // float32
                pub const m_flOrthoLightHeight: usize = 0xF0; // float32
                pub const m_nStyle: usize = 0xF4; // int32
                pub const m_Pattern: usize = 0xF8; // CUtlString
                pub const m_nCascadeRenderStaticObjects: usize = 0x100; // int32
                pub const m_flShadowCascadeCrossFade: usize = 0x104; // float32
                pub const m_flShadowCascadeDistanceFade: usize = 0x108; // float32
                pub const m_flShadowCascadeDistance0: usize = 0x10C; // float32
                pub const m_flShadowCascadeDistance1: usize = 0x110; // float32
                pub const m_flShadowCascadeDistance2: usize = 0x114; // float32
                pub const m_flShadowCascadeDistance3: usize = 0x118; // float32
                pub const m_nShadowCascadeResolution0: usize = 0x11C; // int32
                pub const m_nShadowCascadeResolution1: usize = 0x120; // int32
                pub const m_nShadowCascadeResolution2: usize = 0x124; // int32
                pub const m_nShadowCascadeResolution3: usize = 0x128; // int32
                pub const m_bUsesBakedShadowing: usize = 0x12C; // bool
                pub const m_nShadowPriority: usize = 0x130; // int32
                pub const m_nBakedShadowIndex: usize = 0x134; // int32
                pub const m_bRenderToCubemaps: usize = 0x138; // bool
                pub const m_nDirectLight: usize = 0x13C; // int32
                pub const m_nIndirectLight: usize = 0x140; // int32
                pub const m_flFadeMinDist: usize = 0x144; // float32
                pub const m_flFadeMaxDist: usize = 0x148; // float32
                pub const m_flShadowFadeMinDist: usize = 0x14C; // float32
                pub const m_flShadowFadeMaxDist: usize = 0x150; // float32
                pub const m_bEnabled: usize = 0x154; // bool
                pub const m_bFlicker: usize = 0x155; // bool
                pub const m_bPrecomputedFieldsValid: usize = 0x156; // bool
                pub const m_vPrecomputedBoundsMins: usize = 0x158; // Vector
                pub const m_vPrecomputedBoundsMaxs: usize = 0x164; // Vector
                pub const m_vPrecomputedOBBOrigin: usize = 0x170; // Vector
                pub const m_vPrecomputedOBBAngles: usize = 0x17C; // QAngle
                pub const m_vPrecomputedOBBExtent: usize = 0x188; // Vector
                pub const m_flPrecomputedMaxRange: usize = 0x194; // float32
                pub const m_nFogLightingMode: usize = 0x198; // int32
                pub const m_flFogContributionStength: usize = 0x19C; // float32
                pub const m_flNearClipPlane: usize = 0x1A0; // float32
                pub const m_SkyColor: usize = 0x1A4; // Color
                pub const m_flSkyIntensity: usize = 0x1A8; // float32
                pub const m_SkyAmbientBounce: usize = 0x1AC; // Color
                pub const m_bUseSecondaryColor: usize = 0x1B0; // bool
                pub const m_bMixedShadows: usize = 0x1B1; // bool
                pub const m_flLightStyleStartTime: usize = 0x1B4; // GameTime_t
                pub const m_flCapsuleLength: usize = 0x1B8; // float32
                pub const m_flMinRoughness: usize = 0x1BC; // float32
            }
            // Parent: CEntityComponent
            // Fields count: 5
            pub mod CRenderComponent {
                pub const __m_pChainEntity: usize = 0x10; // CNetworkVarChainer
                pub const m_bIsRenderingWithViewModels: usize = 0x50; // bool
                pub const m_nSplitscreenFlags: usize = 0x54; // uint32
                pub const m_bEnableRendering: usize = 0x60; // bool
                pub const m_bInterpolationReadyToDraw: usize = 0xC0; // bool
            }
            // Parent: None
            // Fields count: 1
            pub mod CBuoyancyHelper {
                pub const m_flFluidDensity: usize = 0x18; // float32
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            pub mod CBasePlayerControllerAPI {
            }
            // Parent: None
            // Fields count: 2
            pub mod C_CommandContext {
                pub const needsprocessing: usize = 0x0; // bool
                pub const command_number: usize = 0x90; // int32
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // NetworkVarNames: nType (FixAngleSet_t)
            // NetworkVarNames: qAngle (QAngle)
            // NetworkVarNames: nIndex (uint32)
            pub mod ViewAngleServerChange_t {
                pub const nType: usize = 0x30; // FixAngleSet_t
                pub const qAngle: usize = 0x34; // QAngle
                pub const nIndex: usize = 0x40; // uint32
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            pub mod CDynamicPropAPI {
            }
            // Parent: CPlayerPawnComponent
            // Fields count: 0
            pub mod CPlayer_AutoaimServices {
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
            pub mod audioparams_t {
                pub const localSound: usize = 0x8; // Vector[8]
                pub const soundscapeIndex: usize = 0x68; // int32
                pub const localBits: usize = 0x6C; // uint8
                pub const soundscapeEntityListIndex: usize = 0x70; // int32
                pub const soundEventHash: usize = 0x74; // uint32
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
            pub mod CPlayer_CameraServices {
                pub const m_vecCsViewPunchAngle: usize = 0x40; // QAngle
                pub const m_nCsViewPunchAngleTick: usize = 0x4C; // GameTick_t
                pub const m_flCsViewPunchAngleTickRatio: usize = 0x50; // float32
                pub const m_PlayerFog: usize = 0x58; // C_fogplayerparams_t
                pub const m_hColorCorrectionCtrl: usize = 0x98; // CHandle<C_ColorCorrection>
                pub const m_hViewEntity: usize = 0x9C; // CHandle<C_BaseEntity>
                pub const m_hTonemapController: usize = 0xA0; // CHandle<C_TonemapController2>
                pub const m_audio: usize = 0xA8; // audioparams_t
                pub const m_PostProcessingVolumes: usize = 0x120; // C_NetworkUtlVectorBase<CHandle<C_PostProcessingVolume>>
                pub const m_flOldPlayerZ: usize = 0x138; // float32
                pub const m_flOldPlayerViewOffsetZ: usize = 0x13C; // float32
                pub const m_CurrentFog: usize = 0x140; // fogparams_t
                pub const m_hOldFogController: usize = 0x1A8; // CHandle<C_FogController>
                pub const m_bOverrideFogColor: usize = 0x1AC; // bool[5]
                pub const m_OverrideFogColor: usize = 0x1B1; // Color[5]
                pub const m_bOverrideFogStartEnd: usize = 0x1C5; // bool[5]
                pub const m_fOverrideFogStart: usize = 0x1CC; // float32[5]
                pub const m_fOverrideFogEnd: usize = 0x1E0; // float32[5]
                pub const m_hActivePostProcessingVolume: usize = 0x1F4; // CHandle<C_PostProcessingVolume>
                pub const m_angDemoViewAngles: usize = 0x1F8; // QAngle
            }
            // Parent: CPlayerPawnComponent
            // Fields count: 0
            pub mod CPlayer_FlashlightServices {
            }
            // Parent: CPlayerPawnComponent
            // Fields count: 0
            pub mod CPlayer_ItemServices {
            }
            // Parent: CPlayerPawnComponent
            // Fields count: 15
            //
            // Metadata:
            // NetworkVarNames: m_nToggleButtonDownMask (ButtonBitMask_t)
            // NetworkVarNames: m_flMaxspeed (float32)
            // NetworkVarNames: m_arrForceSubtickMoveWhen (float32)
            pub mod CPlayer_MovementServices {
                pub const m_nImpulse: usize = 0x40; // int32
                pub const m_nButtons: usize = 0x48; // CInButtonState
                pub const m_nQueuedButtonDownMask: usize = 0x68; // uint64
                pub const m_nQueuedButtonChangeMask: usize = 0x70; // uint64
                pub const m_nButtonDoublePressed: usize = 0x78; // uint64
                pub const m_pButtonPressedCmdNumber: usize = 0x80; // uint32[64]
                pub const m_nLastCommandNumberProcessed: usize = 0x180; // uint32
                pub const m_nToggleButtonDownMask: usize = 0x188; // uint64
                pub const m_flMaxspeed: usize = 0x198; // float32
                pub const m_arrForceSubtickMoveWhen: usize = 0x19C; // float32[4]
                pub const m_flForwardMove: usize = 0x1AC; // float32
                pub const m_flLeftMove: usize = 0x1B0; // float32
                pub const m_flUpMove: usize = 0x1B4; // float32
                pub const m_vecLastMovementImpulses: usize = 0x1B8; // Vector
                pub const m_vecOldViewAngles: usize = 0x1C4; // QAngle
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
            pub mod CPlayer_MovementServices_Humanoid {
                pub const m_flStepSoundTime: usize = 0x1D8; // float32
                pub const m_flFallVelocity: usize = 0x1DC; // float32
                pub const m_bInCrouch: usize = 0x1E0; // bool
                pub const m_nCrouchState: usize = 0x1E4; // uint32
                pub const m_flCrouchTransitionStartTime: usize = 0x1E8; // GameTime_t
                pub const m_bDucked: usize = 0x1EC; // bool
                pub const m_bDucking: usize = 0x1ED; // bool
                pub const m_bInDuckJump: usize = 0x1EE; // bool
                pub const m_groundNormal: usize = 0x1F0; // Vector
                pub const m_flSurfaceFriction: usize = 0x1FC; // float32
                pub const m_surfaceProps: usize = 0x200; // CUtlStringToken
                pub const m_nStepside: usize = 0x210; // int32
            }
            // Parent: CPlayerPawnComponent
            // Fields count: 6
            //
            // Metadata:
            // NetworkVarNames: m_iObserverMode (uint8)
            // NetworkVarNames: m_hObserverTarget (CHandle< CBaseEntity>)
            pub mod CPlayer_ObserverServices {
                pub const m_iObserverMode: usize = 0x40; // uint8
                pub const m_hObserverTarget: usize = 0x44; // CHandle<C_BaseEntity>
                pub const m_iObserverLastMode: usize = 0x48; // ObserverMode_t
                pub const m_bForcedObserverMode: usize = 0x4C; // bool
                pub const m_flObserverChaseDistance: usize = 0x50; // float32
                pub const m_flObserverChaseDistanceCalcTime: usize = 0x54; // GameTime_t
            }
            // Parent: CPlayerPawnComponent
            // Fields count: 0
            pub mod CPlayer_UseServices {
            }
            // Parent: CPlayerPawnComponent
            // Fields count: 0
            pub mod CPlayer_WaterServices {
            }
            // Parent: CPlayerPawnComponent
            // Fields count: 4
            //
            // Metadata:
            // NetworkVarNames: m_hMyWeapons (CHandle< C_BasePlayerWeapon >)
            // NetworkVarNames: m_hActiveWeapon (CHandle< CBasePlayerWeapon>)
            // NetworkVarNames: m_hLastWeapon (CHandle< CBasePlayerWeapon>)
            // NetworkVarNames: m_iAmmo (uint16)
            pub mod CPlayer_WeaponServices {
                pub const m_hMyWeapons: usize = 0x40; // C_NetworkUtlVectorBase<CHandle<C_BasePlayerWeapon>>
                pub const m_hActiveWeapon: usize = 0x58; // CHandle<C_BasePlayerWeapon>
                pub const m_hLastWeapon: usize = 0x5C; // CHandle<C_BasePlayerWeapon>
                pub const m_iAmmo: usize = 0x60; // uint16[32]
            }
            // Parent: CBodyComponentSkeletonInstance
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_animationController (CBaseAnimGraphController)
            pub mod CBodyComponentBaseAnimGraph {
                pub const m_animationController: usize = 0x478; // CBaseAnimGraphController
                pub const __m_pChainEntity: usize = 0x1C68; // CNetworkVarChainer
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_ID (CUtlStringToken)
            // NetworkVarNames: m_Values (Vector4D)
            pub mod EntityRenderAttribute_t {
                pub const m_ID: usize = 0x30; // CUtlStringToken
                pub const m_Values: usize = 0x34; // Vector4D
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // NetworkVarNames: m_Handle (ModelConfigHandle_t)
            // NetworkVarNames: m_Name (string_t)
            // NetworkVarNames: m_AssociatedEntities (CHandle< C_BaseModelEntity >)
            // NetworkVarNames: m_AssociatedEntityNames (string_t)
            pub mod ActiveModelConfig_t {
                pub const m_Handle: usize = 0x28; // ModelConfigHandle_t
                pub const m_Name: usize = 0x30; // CUtlSymbolLarge
                pub const m_AssociatedEntities: usize = 0x38; // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
                pub const m_AssociatedEntityNames: usize = 0x50; // C_NetworkUtlVectorBase<CUtlSymbolLarge>
            }
            // Parent: CBodyComponentSkeletonInstance
            // Fields count: 1
            pub mod CBodyComponentBaseModelEntity {
                pub const __m_pChainEntity: usize = 0x478; // CNetworkVarChainer
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_hOwner (CEntityHandle)
            // NetworkVarNames: m_name (CUtlStringToken)
            pub mod CGameSceneNodeHandle {
                pub const m_hOwner: usize = 0x8; // CEntityHandle
                pub const m_name: usize = 0xC; // CUtlStringToken
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
            pub mod CGameSceneNode {
                pub const m_nodeToWorld: usize = 0x10; // CTransform
                pub const m_pOwner: usize = 0x30; // CEntityInstance*
                pub const m_pParent: usize = 0x38; // CGameSceneNode*
                pub const m_pChild: usize = 0x40; // CGameSceneNode*
                pub const m_pNextSibling: usize = 0x48; // CGameSceneNode*
                pub const m_hParent: usize = 0x70; // CGameSceneNodeHandle
                pub const m_vecOrigin: usize = 0x80; // CNetworkOriginCellCoordQuantizedVector
                pub const m_angRotation: usize = 0xB8; // QAngle
                pub const m_flScale: usize = 0xC4; // float32
                pub const m_vecAbsOrigin: usize = 0xC8; // Vector
                pub const m_angAbsRotation: usize = 0xD4; // QAngle
                pub const m_flAbsScale: usize = 0xE0; // float32
                pub const m_nParentAttachmentOrBone: usize = 0xE4; // int16
                pub const m_bDebugAbsOriginChanges: usize = 0xE6; // bool
                pub const m_bDormant: usize = 0xE7; // bool
                pub const m_bForceParentToBeNetworked: usize = 0xE8; // bool
                pub const m_bDirtyHierarchy: usize = 0x0; // bitfield:1
                pub const m_bDirtyBoneMergeInfo: usize = 0x0; // bitfield:1
                pub const m_bNetworkedPositionChanged: usize = 0x0; // bitfield:1
                pub const m_bNetworkedAnglesChanged: usize = 0x0; // bitfield:1
                pub const m_bNetworkedScaleChanged: usize = 0x0; // bitfield:1
                pub const m_bWillBeCallingPostDataUpdate: usize = 0x0; // bitfield:1
                pub const m_bBoneMergeFlex: usize = 0x0; // bitfield:1
                pub const m_nLatchAbsOrigin: usize = 0x0; // bitfield:2
                pub const m_bDirtyBoneMergeBoneToRoot: usize = 0x0; // bitfield:1
                pub const m_nHierarchicalDepth: usize = 0xEB; // uint8
                pub const m_nHierarchyType: usize = 0xEC; // uint8
                pub const m_nDoNotSetAnimTimeInInvalidatePhysicsCount: usize = 0xED; // uint8
                pub const m_name: usize = 0xF0; // CUtlStringToken
                pub const m_hierarchyAttachName: usize = 0x140; // CUtlStringToken
                pub const m_flZOffset: usize = 0x144; // float32
                pub const m_vRenderOrigin: usize = 0x148; // Vector
            }
            // Parent: None
            // Fields count: 6
            pub mod SequenceHistory_t {
                pub const m_hSequence: usize = 0x0; // HSequence
                pub const m_flSeqStartTime: usize = 0x4; // GameTime_t
                pub const m_flSeqFixedCycle: usize = 0x8; // float32
                pub const m_nSeqLoopMode: usize = 0xC; // AnimLoopMode_t
                pub const m_flPlaybackRate: usize = 0x10; // float32
                pub const m_flCyclesPerSecond: usize = 0x14; // float32
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // NetworkVarNames: m_hSequence (HSequence)
            // NetworkVarNames: m_flPrevCycle (float32)
            // NetworkVarNames: m_flCycle (float32)
            pub mod CNetworkedSequenceOperation {
                pub const m_hSequence: usize = 0x8; // HSequence
                pub const m_flPrevCycle: usize = 0xC; // float32
                pub const m_flCycle: usize = 0x10; // float32
                pub const m_flWeight: usize = 0x14; // CNetworkedQuantizedFloat
                pub const m_bSequenceChangeNetworked: usize = 0x1C; // bool
                pub const m_bDiscontinuity: usize = 0x1D; // bool
                pub const m_flPrevCycleFromDiscontinuity: usize = 0x20; // float32
                pub const m_flPrevCycleForAnimEventDetection: usize = 0x24; // float32
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // NetworkVarNames: m_hModel (HModelStrong)
            // NetworkVarNames: m_bClientClothCreationSuppressed (bool)
            // NetworkVarNames: m_MeshGroupMask (MeshGroupMask_t)
            // NetworkVarNames: m_nIdealMotionType (int8)
            pub mod CModelState {
                pub const m_hModel: usize = 0xA0; // CStrongHandle<InfoForResourceTypeCModel>
                pub const m_ModelName: usize = 0xA8; // CUtlSymbolLarge
                pub const m_bClientClothCreationSuppressed: usize = 0xE8; // bool
                pub const m_MeshGroupMask: usize = 0x180; // uint64
                pub const m_nIdealMotionType: usize = 0x212; // int8
                pub const m_nForceLOD: usize = 0x213; // int8
                pub const m_nClothUpdateFlags: usize = 0x214; // int8
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
            pub mod CSkeletonInstance {
                pub const m_modelState: usize = 0x160; // CModelState
                pub const m_bIsAnimationEnabled: usize = 0x380; // bool
                pub const m_bUseParentRenderBounds: usize = 0x381; // bool
                pub const m_bDisableSolidCollisionsForHierarchy: usize = 0x382; // bool
                pub const m_bDirtyMotionType: usize = 0x0; // bitfield:1
                pub const m_bIsGeneratingLatchedParentSpaceState: usize = 0x0; // bitfield:1
                pub const m_materialGroup: usize = 0x384; // CUtlStringToken
                pub const m_nHitboxSet: usize = 0x388; // uint8
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_timestamp (GameTime_t)
            // NetworkVarNames: m_nWorldGroupId (WorldGroupId_t)
            pub mod IntervalTimer {
                pub const m_timestamp: usize = 0x8; // GameTime_t
                pub const m_nWorldGroupId: usize = 0xC; // WorldGroupId_t
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // NetworkVarNames: m_duration (float32)
            // NetworkVarNames: m_timestamp (GameTime_t)
            // NetworkVarNames: m_timescale (float32)
            // NetworkVarNames: m_nWorldGroupId (WorldGroupId_t)
            pub mod CountdownTimer {
                pub const m_duration: usize = 0x8; // float32
                pub const m_timestamp: usize = 0xC; // GameTime_t
                pub const m_timescale: usize = 0x10; // float32
                pub const m_nWorldGroupId: usize = 0x14; // WorldGroupId_t
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // NetworkVarNames: m_duration (float32)
            // NetworkVarNames: m_timestamp (float32)
            // NetworkVarNames: m_timescale (float32)
            pub mod EngineCountdownTimer {
                pub const m_duration: usize = 0x8; // float32
                pub const m_timestamp: usize = 0xC; // float32
                pub const m_timescale: usize = 0x10; // float32
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
            pub mod CTimeline {
                pub const m_flValues: usize = 0x10; // float32[64]
                pub const m_nValueCounts: usize = 0x110; // int32[64]
                pub const m_nBucketCount: usize = 0x210; // int32
                pub const m_flInterval: usize = 0x214; // float32
                pub const m_flFinalValue: usize = 0x218; // float32
                pub const m_nCompressionType: usize = 0x21C; // TimelineCompression_t
                pub const m_bStopped: usize = 0x220; // bool
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
            pub mod CAnimGraphNetworkedVariables {
                pub const m_PredNetBoolVariables: usize = 0x8; // C_NetworkUtlVectorBase<uint32>
                pub const m_PredNetByteVariables: usize = 0x20; // C_NetworkUtlVectorBase<uint8>
                pub const m_PredNetUInt16Variables: usize = 0x38; // C_NetworkUtlVectorBase<uint16>
                pub const m_PredNetIntVariables: usize = 0x50; // C_NetworkUtlVectorBase<int32>
                pub const m_PredNetUInt32Variables: usize = 0x68; // C_NetworkUtlVectorBase<uint32>
                pub const m_PredNetUInt64Variables: usize = 0x80; // C_NetworkUtlVectorBase<uint64>
                pub const m_PredNetFloatVariables: usize = 0x98; // C_NetworkUtlVectorBase<float32>
                pub const m_PredNetVectorVariables: usize = 0xB0; // C_NetworkUtlVectorBase<Vector>
                pub const m_PredNetQuaternionVariables: usize = 0xC8; // C_NetworkUtlVectorBase<Quaternion>
                pub const m_PredNetGlobalSymbolVariables: usize = 0xE0; // C_NetworkUtlVectorBase<CGlobalSymbol>
                pub const m_OwnerOnlyPredNetBoolVariables: usize = 0xF8; // C_NetworkUtlVectorBase<uint32>
                pub const m_OwnerOnlyPredNetByteVariables: usize = 0x110; // C_NetworkUtlVectorBase<uint8>
                pub const m_OwnerOnlyPredNetUInt16Variables: usize = 0x128; // C_NetworkUtlVectorBase<uint16>
                pub const m_OwnerOnlyPredNetIntVariables: usize = 0x140; // C_NetworkUtlVectorBase<int32>
                pub const m_OwnerOnlyPredNetUInt32Variables: usize = 0x158; // C_NetworkUtlVectorBase<uint32>
                pub const m_OwnerOnlyPredNetUInt64Variables: usize = 0x170; // C_NetworkUtlVectorBase<uint64>
                pub const m_OwnerOnlyPredNetFloatVariables: usize = 0x188; // C_NetworkUtlVectorBase<float32>
                pub const m_OwnerOnlyPredNetVectorVariables: usize = 0x1A0; // C_NetworkUtlVectorBase<Vector>
                pub const m_OwnerOnlyPredNetQuaternionVariables: usize = 0x1B8; // C_NetworkUtlVectorBase<Quaternion>
                pub const m_OwnerOnlyPredNetGlobalSymbolVariables: usize = 0x1D0; // C_NetworkUtlVectorBase<CGlobalSymbol>
                pub const m_nBoolVariablesCount: usize = 0x1E8; // int32
                pub const m_nOwnerOnlyBoolVariablesCount: usize = 0x1EC; // int32
                pub const m_nRandomSeedOffset: usize = 0x1F0; // int32
                pub const m_flLastTeleportTime: usize = 0x1F4; // float32
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            pub mod C_BaseEntityAPI {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            pub mod CTakeDamageInfoAPI {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseLibraryBindings
            pub mod CClientPointEntityAPI {
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MPulseInstanceDomainInfo
            // MPulseLibraryBindings
            // MPulseDomainOptInFeatureTag
            pub mod CPulseGraphInstance_ClientEntity {
                pub const m_pParent: usize = 0xD8; // CClientScriptEntity*
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
            pub mod C_BaseEntity {
                pub const m_CBodyComponent: usize = 0x38; // CBodyComponent*
                pub const m_NetworkTransmitComponent: usize = 0x40; // CNetworkTransmitComponent
                pub const m_nLastThinkTick: usize = 0x488; // GameTick_t
                pub const m_pGameSceneNode: usize = 0x490; // CGameSceneNode*
                pub const m_pRenderComponent: usize = 0x498; // CRenderComponent*
                pub const m_pCollision: usize = 0x4A0; // CCollisionProperty*
                pub const m_iMaxHealth: usize = 0x4A8; // int32
                pub const m_iHealth: usize = 0x4AC; // int32
                pub const m_lifeState: usize = 0x4B0; // uint8
                pub const m_bTakesDamage: usize = 0x4B1; // bool
                pub const m_nTakeDamageFlags: usize = 0x4B4; // TakeDamageFlags_t
                pub const m_bIsPlatform: usize = 0x4B8; // bool
                pub const m_ubInterpolationFrame: usize = 0x4B9; // uint8
                pub const m_hSceneObjectController: usize = 0x4BC; // CHandle<C_BaseEntity>
                pub const m_nNoInterpolationTick: usize = 0x4C0; // int32
                pub const m_nVisibilityNoInterpolationTick: usize = 0x4C4; // int32
                pub const m_flProxyRandomValue: usize = 0x4C8; // float32
                pub const m_iEFlags: usize = 0x4CC; // int32
                pub const m_nWaterType: usize = 0x4D0; // uint8
                pub const m_bInterpolateEvenWithNoModel: usize = 0x4D1; // bool
                pub const m_bPredictionEligible: usize = 0x4D2; // bool
                pub const m_bApplyLayerMatchIDToModel: usize = 0x4D3; // bool
                pub const m_tokLayerMatchID: usize = 0x4D4; // CUtlStringToken
                pub const m_nSubclassID: usize = 0x4D8; // CUtlStringToken
                pub const m_nSimulationTick: usize = 0x4E8; // int32
                pub const m_iCurrentThinkContext: usize = 0x4EC; // int32
                pub const m_aThinkFunctions: usize = 0x4F0; // CUtlVector<thinkfunc_t>
                pub const m_nDisableContextThinkStartTick: usize = 0x508; // GameTick_t
                pub const m_flAnimTime: usize = 0x50C; // float32
                pub const m_flSimulationTime: usize = 0x510; // float32
                pub const m_nSceneObjectOverrideFlags: usize = 0x514; // uint8
                pub const m_bHasSuccessfullyInterpolated: usize = 0x515; // bool
                pub const m_bHasAddedVarsToInterpolation: usize = 0x516; // bool
                pub const m_bRenderEvenWhenNotSuccessfullyInterpolated: usize = 0x517; // bool
                pub const m_nInterpolationLatchDirtyFlags: usize = 0x518; // int32[2]
                pub const m_ListEntry: usize = 0x520; // uint16[11]
                pub const m_flCreateTime: usize = 0x538; // GameTime_t
                pub const m_flSpeed: usize = 0x53C; // float32
                pub const m_EntClientFlags: usize = 0x540; // uint16
                pub const m_bClientSideRagdoll: usize = 0x542; // bool
                pub const m_iTeamNum: usize = 0x543; // uint8
                pub const m_spawnflags: usize = 0x544; // uint32
                pub const m_nNextThinkTick: usize = 0x548; // GameTick_t
                pub const m_fFlags: usize = 0x54C; // uint32
                pub const m_vecAbsVelocity: usize = 0x550; // Vector
                pub const m_vecVelocity: usize = 0x560; // CNetworkVelocityVector
                pub const m_vecBaseVelocity: usize = 0x590; // Vector
                pub const m_hEffectEntity: usize = 0x59C; // CHandle<C_BaseEntity>
                pub const m_hOwnerEntity: usize = 0x5A0; // CHandle<C_BaseEntity>
                pub const m_MoveCollide: usize = 0x5A4; // MoveCollide_t
                pub const m_MoveType: usize = 0x5A5; // MoveType_t
                pub const m_nActualMoveType: usize = 0x5A6; // MoveType_t
                pub const m_flWaterLevel: usize = 0x5A8; // float32
                pub const m_fEffects: usize = 0x5AC; // uint32
                pub const m_hGroundEntity: usize = 0x5B0; // CHandle<C_BaseEntity>
                pub const m_flFriction: usize = 0x5B4; // float32
                pub const m_flElasticity: usize = 0x5B8; // float32
                pub const m_flGravityScale: usize = 0x5BC; // float32
                pub const m_flTimeScale: usize = 0x5C0; // float32
                pub const m_bAnimatedEveryTick: usize = 0x5C4; // bool
                pub const m_flNavIgnoreUntilTime: usize = 0x5C8; // GameTime_t
                pub const m_hThink: usize = 0x5CC; // uint16
                pub const m_fBBoxVisFlags: usize = 0x5D8; // uint8
                pub const m_bPredictable: usize = 0x5D9; // bool
                pub const m_bRenderWithViewModels: usize = 0x5DA; // bool
                pub const m_nSplitUserPlayerPredictionSlot: usize = 0x5DC; // CSplitScreenSlot
                pub const m_nFirstPredictableCommand: usize = 0x5E0; // int32
                pub const m_nLastPredictableCommand: usize = 0x5E4; // int32
                pub const m_hOldMoveParent: usize = 0x5E8; // CHandle<C_BaseEntity>
                pub const m_Particles: usize = 0x5F0; // CParticleProperty
                pub const m_vecPredictedScriptFloats: usize = 0x618; // CUtlVector<float32>
                pub const m_vecPredictedScriptFloatIDs: usize = 0x630; // CUtlVector<int32>
                pub const m_nNextScriptVarRecordID: usize = 0x660; // int32
                pub const m_vecAngVelocity: usize = 0x670; // QAngle
                pub const m_DataChangeEventRef: usize = 0x67C; // int32
                pub const m_dependencies: usize = 0x680; // CUtlVector<CEntityHandle>
                pub const m_nCreationTick: usize = 0x698; // int32
                pub const m_bAnimTimeChanged: usize = 0x6B9; // bool
                pub const m_bSimulationTimeChanged: usize = 0x6BA; // bool
                pub const m_sUniqueHammerID: usize = 0x6C8; // CUtlString
            }
            // Parent: C_BaseEntity
            // Fields count: 0
            pub mod CLogicalEntity {
            }
            // Parent: None
            // Fields count: 5
            pub mod C_BaseFlex__Emphasized_Phoneme {
                pub const m_sClassName: usize = 0x0; // CUtlString
                pub const m_flAmount: usize = 0x18; // float32
                pub const m_bRequired: usize = 0x1C; // bool
                pub const m_bBasechecked: usize = 0x1D; // bool
                pub const m_bValid: usize = 0x1E; // bool
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
            pub mod C_ColorCorrection {
                pub const m_vecOrigin: usize = 0x6D0; // Vector
                pub const m_MinFalloff: usize = 0x6DC; // float32
                pub const m_MaxFalloff: usize = 0x6E0; // float32
                pub const m_flFadeInDuration: usize = 0x6E4; // float32
                pub const m_flFadeOutDuration: usize = 0x6E8; // float32
                pub const m_flMaxWeight: usize = 0x6EC; // float32
                pub const m_flCurWeight: usize = 0x6F0; // float32
                pub const m_netlookupFilename: usize = 0x6F4; // char[512]
                pub const m_bEnabled: usize = 0x8F4; // bool
                pub const m_bMaster: usize = 0x8F5; // bool
                pub const m_bClientSide: usize = 0x8F6; // bool
                pub const m_bExclusive: usize = 0x8F7; // bool
                pub const m_bEnabledOnClient: usize = 0x8F8; // bool[1]
                pub const m_flCurWeightOnClient: usize = 0x8FC; // float32[1]
                pub const m_bFadingIn: usize = 0x900; // bool[1]
                pub const m_flFadeStartWeight: usize = 0x904; // float32[1]
                pub const m_flFadeStartTime: usize = 0x908; // float32[1]
                pub const m_flFadeDuration: usize = 0x90C; // float32[1]
            }
            // Parent: C_BaseEntity
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_EnvWindShared (CEnvWindShared)
            pub mod C_EnvWindClientside {
                pub const m_EnvWindShared: usize = 0x6D0; // C_EnvWindShared
            }
            // Parent: C_BaseEntity
            // Fields count: 3
            //
            // Metadata:
            // NetworkVarNames: m_hEntAttached (CHandle< C_BaseEntity>)
            // NetworkVarNames: m_bCheapEffect (bool)
            pub mod C_EntityFlame {
                pub const m_hEntAttached: usize = 0x6D0; // CHandle<C_BaseEntity>
                pub const m_hOldAttached: usize = 0x6F8; // CHandle<C_BaseEntity>
                pub const m_bCheapEffect: usize = 0x6FC; // bool
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
            pub mod CProjectedTextureBase {
                pub const m_hTargetEntity: usize = 0xC; // CHandle<C_BaseEntity>
                pub const m_bState: usize = 0x10; // bool
                pub const m_bAlwaysUpdate: usize = 0x11; // bool
                pub const m_flLightFOV: usize = 0x14; // float32
                pub const m_bEnableShadows: usize = 0x18; // bool
                pub const m_bSimpleProjection: usize = 0x19; // bool
                pub const m_bLightOnlyTarget: usize = 0x1A; // bool
                pub const m_bLightWorld: usize = 0x1B; // bool
                pub const m_bCameraSpace: usize = 0x1C; // bool
                pub const m_flBrightnessScale: usize = 0x20; // float32
                pub const m_LightColor: usize = 0x24; // Color
                pub const m_flIntensity: usize = 0x28; // float32
                pub const m_flLinearAttenuation: usize = 0x2C; // float32
                pub const m_flQuadraticAttenuation: usize = 0x30; // float32
                pub const m_bVolumetric: usize = 0x34; // bool
                pub const m_flVolumetricIntensity: usize = 0x38; // float32
                pub const m_flNoiseStrength: usize = 0x3C; // float32
                pub const m_flFlashlightTime: usize = 0x40; // float32
                pub const m_nNumPlanes: usize = 0x44; // uint32
                pub const m_flPlaneOffset: usize = 0x48; // float32
                pub const m_flColorTransitionTime: usize = 0x4C; // float32
                pub const m_flAmbient: usize = 0x50; // float32
                pub const m_SpotlightTextureName: usize = 0x54; // char[512]
                pub const m_nSpotlightTextureFrame: usize = 0x254; // int32
                pub const m_nShadowQuality: usize = 0x258; // uint32
                pub const m_flNearZ: usize = 0x25C; // float32
                pub const m_flFarZ: usize = 0x260; // float32
                pub const m_flProjectionSize: usize = 0x264; // float32
                pub const m_flRotation: usize = 0x268; // float32
                pub const m_bFlipHorizontal: usize = 0x26C; // bool
            }
            // Parent: C_BaseEntity
            // Fields count: 4
            //
            // Metadata:
            // NetworkVarNames: m_flScale (float32)
            // NetworkVarNames: m_flStartScale (float32)
            // NetworkVarNames: m_flScaleTime (float)
            // NetworkVarNames: m_nFlags (uint32)
            pub mod C_BaseFire {
                pub const m_flScale: usize = 0x6D0; // float32
                pub const m_flStartScale: usize = 0x6D4; // float32
                pub const m_flScaleTime: usize = 0x6D8; // float32
                pub const m_nFlags: usize = 0x6DC; // uint32
            }
            // Parent: C_BaseFire
            // Fields count: 13
            //
            // Metadata:
            // MNetworkOverride
            // MNetworkOverride
            // NetworkVarNames: m_nFlameModelIndex (int32)
            // NetworkVarNames: m_nFlameFromAboveModelIndex (int32)
            pub mod C_FireSmoke {
                pub const m_nFlameModelIndex: usize = 0x6E0; // int32
                pub const m_nFlameFromAboveModelIndex: usize = 0x6E4; // int32
                pub const m_flScaleRegister: usize = 0x6E8; // float32
                pub const m_flScaleStart: usize = 0x6EC; // float32
                pub const m_flScaleEnd: usize = 0x6F0; // float32
                pub const m_flScaleTimeStart: usize = 0x6F4; // GameTime_t
                pub const m_flScaleTimeEnd: usize = 0x6F8; // GameTime_t
                pub const m_flChildFlameSpread: usize = 0x6FC; // float32
                pub const m_flClipPerc: usize = 0x710; // float32
                pub const m_bClipTested: usize = 0x714; // bool
                pub const m_bFadingOut: usize = 0x715; // bool
                pub const m_tParticleSpawn: usize = 0x718; // TimedEvent
                pub const m_pFireOverlay: usize = 0x720; // CFireOverlay*
            }
            // Parent: None
            // Fields count: 1
            pub mod C_RopeKeyframe__CPhysicsDelegate {
                pub const m_pKeyframe: usize = 0x8; // C_RopeKeyframe*
            }
            // Parent: None
            // Fields count: 1
            pub mod C_SceneEntity__QueuedEvents_t {
                pub const starttime: usize = 0x0; // float32
            }
            // Parent: C_BaseEntity
            // Fields count: 0
            pub mod C_TintController {
            }
            // Parent: None
            // Fields count: 13
            pub mod CFlashlightEffect {
                pub const m_bIsOn: usize = 0x8; // bool
                pub const m_bMuzzleFlashEnabled: usize = 0x18; // bool
                pub const m_flMuzzleFlashBrightness: usize = 0x1C; // float32
                pub const m_quatMuzzleFlashOrientation: usize = 0x20; // Quaternion
                pub const m_vecMuzzleFlashOrigin: usize = 0x30; // Vector
                pub const m_flFov: usize = 0x3C; // float32
                pub const m_flFarZ: usize = 0x40; // float32
                pub const m_flLinearAtten: usize = 0x44; // float32
                pub const m_bCastsShadows: usize = 0x48; // bool
                pub const m_flCurrentPullBackDist: usize = 0x4C; // float32
                pub const m_FlashlightTexture: usize = 0x50; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_MuzzleFlashTexture: usize = 0x58; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_textureName: usize = 0x60; // char[64]
            }
            // Parent: None
            // Fields count: 5
            pub mod CInterpolatedValue {
                pub const m_flStartTime: usize = 0x0; // float32
                pub const m_flEndTime: usize = 0x4; // float32
                pub const m_flStartValue: usize = 0x8; // float32
                pub const m_flEndValue: usize = 0xC; // float32
                pub const m_nInterpType: usize = 0x10; // int32
            }
            // Parent: None
            // Fields count: 4
            pub mod CGlowSprite {
                pub const m_vColor: usize = 0x0; // Vector
                pub const m_flHorzSize: usize = 0xC; // float32
                pub const m_flVertSize: usize = 0x10; // float32
                pub const m_hMaterial: usize = 0x18; // CStrongHandle<InfoForResourceTypeIMaterial2>
            }
            // Parent: None
            // Fields count: 15
            pub mod CGlowOverlay {
                pub const m_vPos: usize = 0x8; // Vector
                pub const m_bDirectional: usize = 0x14; // bool
                pub const m_vDirection: usize = 0x18; // Vector
                pub const m_bInSky: usize = 0x24; // bool
                pub const m_skyObstructionScale: usize = 0x28; // float32
                pub const m_Sprites: usize = 0x30; // CGlowSprite[4]
                pub const m_nSprites: usize = 0xB0; // int32
                pub const m_flProxyRadius: usize = 0xB4; // float32
                pub const m_flHDRColorScale: usize = 0xB8; // float32
                pub const m_flGlowObstructionScale: usize = 0xBC; // float32
                pub const m_bCacheGlowObstruction: usize = 0xC0; // bool
                pub const m_bCacheSkyObstruction: usize = 0xC1; // bool
                pub const m_bActivated: usize = 0xC2; // int16
                pub const m_ListIndex: usize = 0xC4; // uint16
                pub const m_queryHandle: usize = 0xC8; // int32
            }
            // Parent: None
            // Fields count: 0
            pub mod IClientAlphaProperty {
            }
            // Parent: C_BaseEntity
            // Fields count: 2
            pub mod CSkyboxReference {
                pub const m_worldGroupId: usize = 0x6D0; // WorldGroupId_t
                pub const m_hSkyCamera: usize = 0x6D4; // CHandle<C_SkyCamera>
            }
            // Parent: C_BaseEntity
            // Fields count: 4
            //
            // Metadata:
            // NetworkVarNames: m_skyboxData (sky3dparams_t)
            // NetworkVarNames: m_skyboxSlotToken (CUtlStringToken)
            pub mod C_SkyCamera {
                pub const m_skyboxData: usize = 0x6D0; // sky3dparams_t
                pub const m_skyboxSlotToken: usize = 0x760; // CUtlStringToken
                pub const m_bUseAngles: usize = 0x764; // bool
                pub const m_pNext: usize = 0x768; // C_SkyCamera*
            }
            // Parent: None
            // Fields count: 2
            pub mod TimedEvent {
                pub const m_TimeBetweenEvents: usize = 0x0; // float32
                pub const m_fNextEvent: usize = 0x4; // float32
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
            pub mod VPhysicsCollisionAttribute_t {
                pub const m_nInteractsAs: usize = 0x8; // uint64
                pub const m_nInteractsWith: usize = 0x10; // uint64
                pub const m_nInteractsExclude: usize = 0x18; // uint64
                pub const m_nEntityId: usize = 0x20; // uint32
                pub const m_nOwnerId: usize = 0x24; // uint32
                pub const m_nHierarchyId: usize = 0x28; // uint16
                pub const m_nCollisionGroup: usize = 0x2A; // uint8
                pub const m_nCollisionFunctionMask: usize = 0x2B; // uint8
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
            pub mod CCollisionProperty {
                pub const m_collisionAttribute: usize = 0x10; // VPhysicsCollisionAttribute_t
                pub const m_vecMins: usize = 0x40; // Vector
                pub const m_vecMaxs: usize = 0x4C; // Vector
                pub const m_usSolidFlags: usize = 0x5A; // uint8
                pub const m_nSolidType: usize = 0x5B; // SolidType_t
                pub const m_triggerBloat: usize = 0x5C; // uint8
                pub const m_nSurroundType: usize = 0x5D; // SurroundingBoundsType_t
                pub const m_CollisionGroup: usize = 0x5E; // uint8
                pub const m_nEnablePhysics: usize = 0x5F; // uint8
                pub const m_flBoundingRadius: usize = 0x60; // float32
                pub const m_vecSpecifiedSurroundingMins: usize = 0x64; // Vector
                pub const m_vecSpecifiedSurroundingMaxs: usize = 0x70; // Vector
                pub const m_vecSurroundingMaxs: usize = 0x7C; // Vector
                pub const m_vecSurroundingMins: usize = 0x88; // Vector
                pub const m_vCapsuleCenter1: usize = 0x94; // Vector
                pub const m_vCapsuleCenter2: usize = 0xA0; // Vector
                pub const m_flCapsuleRadius: usize = 0xAC; // float32
            }
            // Parent: None
            // Fields count: 12
            pub mod CDecalInfo {
                pub const m_flAnimationScale: usize = 0x0; // float32
                pub const m_flAnimationLifeSpan: usize = 0x4; // float32
                pub const m_flPlaceTime: usize = 0x8; // float32
                pub const m_flFadeStartTime: usize = 0xC; // float32
                pub const m_flFadeDuration: usize = 0x10; // float32
                pub const m_nVBSlot: usize = 0x14; // int32
                pub const m_nBoneIndex: usize = 0x18; // int32
                pub const m_vPosition: usize = 0x28; // Vector
                pub const m_flBoundingRadiusSqr: usize = 0x34; // float32
                pub const m_pNext: usize = 0x40; // CDecalInfo*
                pub const m_pPrev: usize = 0x48; // CDecalInfo*
                pub const m_nDecalMaterialIndex: usize = 0xA8; // int32
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
            pub mod CEffectData {
                pub const m_vOrigin: usize = 0x8; // Vector
                pub const m_vStart: usize = 0x14; // Vector
                pub const m_vNormal: usize = 0x20; // Vector
                pub const m_vAngles: usize = 0x2C; // QAngle
                pub const m_hEntity: usize = 0x38; // CEntityHandle
                pub const m_hOtherEntity: usize = 0x3C; // CEntityHandle
                pub const m_flScale: usize = 0x40; // float32
                pub const m_flMagnitude: usize = 0x44; // float32
                pub const m_flRadius: usize = 0x48; // float32
                pub const m_nSurfaceProp: usize = 0x4C; // CUtlStringToken
                pub const m_nEffectIndex: usize = 0x50; // CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>
                pub const m_nDamageType: usize = 0x58; // uint32
                pub const m_nPenetrate: usize = 0x5C; // uint8
                pub const m_nMaterial: usize = 0x5E; // uint16
                pub const m_nHitBox: usize = 0x60; // uint16
                pub const m_nColor: usize = 0x62; // uint8
                pub const m_fFlags: usize = 0x63; // uint8
                pub const m_nAttachmentIndex: usize = 0x64; // AttachmentHandle_t
                pub const m_nAttachmentName: usize = 0x68; // CUtlStringToken
                pub const m_iEffectName: usize = 0x6C; // uint16
                pub const m_nExplosionType: usize = 0x6E; // uint8
            }
            // Parent: C_BaseEntity
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_flFadeStartDist (float32)
            // NetworkVarNames: m_flFadeEndDist (float32)
            pub mod C_EnvDetailController {
                pub const m_flFadeStartDist: usize = 0x6D0; // float32
                pub const m_flFadeEndDist: usize = 0x6D4; // float32
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
            pub mod C_EnvWindShared {
                pub const m_flStartTime: usize = 0x8; // GameTime_t
                pub const m_iWindSeed: usize = 0xC; // uint32
                pub const m_iMinWind: usize = 0x10; // uint16
                pub const m_iMaxWind: usize = 0x12; // uint16
                pub const m_windRadius: usize = 0x14; // int32
                pub const m_iMinGust: usize = 0x18; // uint16
                pub const m_iMaxGust: usize = 0x1A; // uint16
                pub const m_flMinGustDelay: usize = 0x1C; // float32
                pub const m_flMaxGustDelay: usize = 0x20; // float32
                pub const m_flGustDuration: usize = 0x24; // float32
                pub const m_iGustDirChange: usize = 0x28; // uint16
                pub const m_location: usize = 0x2C; // Vector
                pub const m_iszGustSound: usize = 0x38; // int32
                pub const m_iWindDir: usize = 0x3C; // int32
                pub const m_flWindSpeed: usize = 0x40; // float32
                pub const m_currentWindVector: usize = 0x44; // Vector
                pub const m_CurrentSwayVector: usize = 0x50; // Vector
                pub const m_PrevSwayVector: usize = 0x5C; // Vector
                pub const m_iInitialWindDir: usize = 0x68; // uint16
                pub const m_flInitialWindSpeed: usize = 0x6C; // float32
                pub const m_flVariationTime: usize = 0x70; // GameTime_t
                pub const m_flSwayTime: usize = 0x74; // GameTime_t
                pub const m_flSimTime: usize = 0x78; // GameTime_t
                pub const m_flSwitchTime: usize = 0x7C; // GameTime_t
                pub const m_flAveWindSpeed: usize = 0x80; // float32
                pub const m_bGusting: usize = 0x84; // bool
                pub const m_flWindAngleVariation: usize = 0x88; // float32
                pub const m_flWindSpeedVariation: usize = 0x8C; // float32
                pub const m_iEntIndex: usize = 0x90; // CEntityIndex
            }
            // Parent: None
            // Fields count: 2
            pub mod C_EnvWindShared__WindAveEvent_t {
                pub const m_flStartWindSpeed: usize = 0x0; // float32
                pub const m_flAveWindSpeed: usize = 0x4; // float32
            }
            // Parent: None
            // Fields count: 2
            pub mod C_EnvWindShared__WindVariationEvent_t {
                pub const m_flWindAngleVariation: usize = 0x0; // float32
                pub const m_flWindSpeedVariation: usize = 0x4; // float32
            }
            // Parent: C_BaseEntity
            // Fields count: 0
            pub mod C_InfoLadderDismount {
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
            pub mod shard_model_desc_t {
                pub const m_nModelID: usize = 0x8; // int32
                pub const m_hMaterial: usize = 0x10; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_solid: usize = 0x18; // ShardSolid_t
                pub const m_ShatterPanelMode: usize = 0x19; // ShatterPanelMode
                pub const m_vecPanelSize: usize = 0x1C; // Vector2D
                pub const m_vecStressPositionA: usize = 0x24; // Vector2D
                pub const m_vecStressPositionB: usize = 0x2C; // Vector2D
                pub const m_vecPanelVertices: usize = 0x38; // C_NetworkUtlVectorBase<Vector2D>
                pub const m_flGlassHalfThickness: usize = 0x50; // float32
                pub const m_bHasParent: usize = 0x54; // bool
                pub const m_bParentFrozen: usize = 0x55; // bool
                pub const m_SurfacePropStringToken: usize = 0x58; // CUtlStringToken
            }
            // Parent: C_BaseEntity
            // Fields count: 0
            pub mod C_GameRulesProxy {
            }
            // Parent: None
            // Fields count: 0
            pub mod C_GameRules {
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
            pub mod CGlowProperty {
                pub const m_fGlowColor: usize = 0x8; // Vector
                pub const m_iGlowType: usize = 0x30; // int32
                pub const m_iGlowTeam: usize = 0x34; // int32
                pub const m_nGlowRange: usize = 0x38; // int32
                pub const m_nGlowRangeMin: usize = 0x3C; // int32
                pub const m_glowColorOverride: usize = 0x40; // Color
                pub const m_bFlashing: usize = 0x44; // bool
                pub const m_flGlowTime: usize = 0x48; // float32
                pub const m_flGlowStartTime: usize = 0x4C; // float32
                pub const m_bEligibleForScreenHighlight: usize = 0x50; // bool
                pub const m_bGlowing: usize = 0x51; // bool
            }
            // Parent: C_GameRules
            // Fields count: 0
            pub mod C_MultiplayRules {
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
            pub mod fogparams_t {
                pub const dirPrimary: usize = 0x8; // Vector
                pub const colorPrimary: usize = 0x14; // Color
                pub const colorSecondary: usize = 0x18; // Color
                pub const colorPrimaryLerpTo: usize = 0x1C; // Color
                pub const colorSecondaryLerpTo: usize = 0x20; // Color
                pub const start: usize = 0x24; // float32
                pub const end: usize = 0x28; // float32
                pub const farz: usize = 0x2C; // float32
                pub const maxdensity: usize = 0x30; // float32
                pub const exponent: usize = 0x34; // float32
                pub const HDRColorScale: usize = 0x38; // float32
                pub const skyboxFogFactor: usize = 0x3C; // float32
                pub const skyboxFogFactorLerpTo: usize = 0x40; // float32
                pub const startLerpTo: usize = 0x44; // float32
                pub const endLerpTo: usize = 0x48; // float32
                pub const maxdensityLerpTo: usize = 0x4C; // float32
                pub const lerptime: usize = 0x50; // GameTime_t
                pub const duration: usize = 0x54; // float32
                pub const blendtobackground: usize = 0x58; // float32
                pub const scattering: usize = 0x5C; // float32
                pub const locallightscale: usize = 0x60; // float32
                pub const enable: usize = 0x64; // bool
                pub const blend: usize = 0x65; // bool
                pub const m_bNoReflectionFog: usize = 0x66; // bool
                pub const m_bPadding: usize = 0x67; // bool
            }
            // Parent: None
            // Fields count: 14
            //
            // Metadata:
            // NetworkVarNames: m_hCtrl (CHandle< CFogController>)
            pub mod C_fogplayerparams_t {
                pub const m_hCtrl: usize = 0x8; // CHandle<C_FogController>
                pub const m_flTransitionTime: usize = 0xC; // float32
                pub const m_OldColor: usize = 0x10; // Color
                pub const m_flOldStart: usize = 0x14; // float32
                pub const m_flOldEnd: usize = 0x18; // float32
                pub const m_flOldMaxDensity: usize = 0x1C; // float32
                pub const m_flOldHDRColorScale: usize = 0x20; // float32
                pub const m_flOldFarZ: usize = 0x24; // float32
                pub const m_NewColor: usize = 0x28; // Color
                pub const m_flNewStart: usize = 0x2C; // float32
                pub const m_flNewEnd: usize = 0x30; // float32
                pub const m_flNewMaxDensity: usize = 0x34; // float32
                pub const m_flNewHDRColorScale: usize = 0x38; // float32
                pub const m_flNewFarZ: usize = 0x3C; // float32
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
            pub mod sky3dparams_t {
                pub const scale: usize = 0x8; // int16
                pub const origin: usize = 0xC; // Vector
                pub const bClip3DSkyBoxNearToWorldFar: usize = 0x18; // bool
                pub const flClip3DSkyBoxNearToWorldFarOffset: usize = 0x1C; // float32
                pub const fog: usize = 0x20; // fogparams_t
                pub const m_nWorldGroupID: usize = 0x88; // WorldGroupId_t
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // NetworkVarNames: m_Transforms (CTransform)
            // NetworkVarNames: m_hOwner (EHANDLE)
            pub mod PhysicsRagdollPose_t {
                pub const __m_pChainEntity: usize = 0x8; // CNetworkVarChainer
                pub const m_Transforms: usize = 0x30; // C_NetworkUtlVectorBase<CTransform>
                pub const m_hOwner: usize = 0x48; // CHandle<C_BaseEntity>
                pub const m_bDirty: usize = 0x68; // bool
            }
            // Parent: C_GameRules
            // Fields count: 0
            pub mod C_SingleplayRules {
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
            pub mod C_SoundOpvarSetPointBase {
                pub const m_iszStackName: usize = 0x6D0; // CUtlSymbolLarge
                pub const m_iszOperatorName: usize = 0x6D8; // CUtlSymbolLarge
                pub const m_iszOpvarName: usize = 0x6E0; // CUtlSymbolLarge
                pub const m_iOpvarIndex: usize = 0x6E8; // int32
                pub const m_bUseAutoCompare: usize = 0x6EC; // bool
            }
            // Parent: C_SoundOpvarSetPointBase
            // Fields count: 0
            pub mod C_SoundOpvarSetPointEntity {
            }
            // Parent: C_SoundOpvarSetPointEntity
            // Fields count: 0
            pub mod C_SoundOpvarSetAABBEntity {
            }
            // Parent: C_SoundOpvarSetAABBEntity
            // Fields count: 0
            pub mod C_SoundOpvarSetOBBEntity {
            }
            // Parent: C_SoundOpvarSetPointEntity
            // Fields count: 0
            pub mod C_SoundOpvarSetPathCornerEntity {
            }
            // Parent: C_SoundOpvarSetPointEntity
            // Fields count: 0
            pub mod C_SoundOpvarSetAutoRoomEntity {
            }
            // Parent: C_SoundOpvarSetPointBase
            // Fields count: 0
            pub mod C_SoundOpvarSetOBBWindEntity {
            }
            // Parent: C_MultiplayRules
            // Fields count: 0
            pub mod C_TeamplayRules {
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
            pub mod C_TeamRoundTimer {
                pub const m_bTimerPaused: usize = 0x6D0; // bool
                pub const m_flTimeRemaining: usize = 0x6D4; // float32
                pub const m_flTimerEndTime: usize = 0x6D8; // GameTime_t
                pub const m_bIsDisabled: usize = 0x6DC; // bool
                pub const m_bShowInHUD: usize = 0x6DD; // bool
                pub const m_nTimerLength: usize = 0x6E0; // int32
                pub const m_nTimerInitialLength: usize = 0x6E4; // int32
                pub const m_nTimerMaxLength: usize = 0x6E8; // int32
                pub const m_bAutoCountdown: usize = 0x6EC; // bool
                pub const m_nSetupTimeLength: usize = 0x6F0; // int32
                pub const m_nState: usize = 0x6F4; // int32
                pub const m_bStartPaused: usize = 0x6F8; // bool
                pub const m_bInCaptureWatchState: usize = 0x6F9; // bool
                pub const m_flTotalTime: usize = 0x6FC; // float32
                pub const m_bStopWatchTimer: usize = 0x700; // bool
                pub const m_bFireFinished: usize = 0x701; // bool
                pub const m_bFire5MinRemain: usize = 0x702; // bool
                pub const m_bFire4MinRemain: usize = 0x703; // bool
                pub const m_bFire3MinRemain: usize = 0x704; // bool
                pub const m_bFire2MinRemain: usize = 0x705; // bool
                pub const m_bFire1MinRemain: usize = 0x706; // bool
                pub const m_bFire30SecRemain: usize = 0x707; // bool
                pub const m_bFire10SecRemain: usize = 0x708; // bool
                pub const m_bFire5SecRemain: usize = 0x709; // bool
                pub const m_bFire4SecRemain: usize = 0x70A; // bool
                pub const m_bFire3SecRemain: usize = 0x70B; // bool
                pub const m_bFire2SecRemain: usize = 0x70C; // bool
                pub const m_bFire1SecRemain: usize = 0x70D; // bool
                pub const m_nOldTimerLength: usize = 0x710; // int32
                pub const m_nOldTimerState: usize = 0x714; // int32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_Attributes (CEconItemAttribute)
            pub mod CAttributeList {
                pub const m_Attributes: usize = 0x8; // C_UtlVectorEmbeddedNetworkVar<CEconItemAttribute>
                pub const m_pManager: usize = 0x58; // CAttributeManager*
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
            pub mod CEconItemAttribute {
                pub const m_iAttributeDefinitionIndex: usize = 0x30; // uint16
                pub const m_flValue: usize = 0x34; // float32
                pub const m_flInitialValue: usize = 0x38; // float32
                pub const m_nRefundableCurrency: usize = 0x3C; // int32
                pub const m_bSetBonus: usize = 0x40; // bool
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // NetworkVarNames: m_iReapplyProvisionParity (int)
            // NetworkVarNames: m_hOuter (EHANDLE)
            // NetworkVarNames: m_ProviderType (attributeprovidertypes_t)
            pub mod CAttributeManager {
                pub const m_Providers: usize = 0x8; // CUtlVector<CHandle<C_BaseEntity>>
                pub const m_iReapplyProvisionParity: usize = 0x20; // int32
                pub const m_hOuter: usize = 0x24; // CHandle<C_BaseEntity>
                pub const m_bPreventLoopback: usize = 0x28; // bool
                pub const m_ProviderType: usize = 0x2C; // attributeprovidertypes_t
                pub const m_CachedResults: usize = 0x30; // CUtlVector<CAttributeManager::cached_attribute_float_t>
            }
            // Parent: None
            // Fields count: 3
            pub mod CAttributeManager__cached_attribute_float_t {
                pub const flIn: usize = 0x0; // float32
                pub const iAttribHook: usize = 0x8; // CUtlSymbolLarge
                pub const flOut: usize = 0x10; // float32
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
            pub mod C_AttributeContainer {
                pub const m_Item: usize = 0x50; // C_EconItemView
                pub const m_iExternalItemProviderRegisteredToken: usize = 0x13A0; // int32
                pub const m_ullRegisteredAsItemID: usize = 0x13A8; // uint64
            }
            // Parent: None
            // Fields count: 1
            pub mod C_EconEntity__AttachedModelData_t {
                pub const m_iModelDisplayFlags: usize = 0x0; // int32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_bSpotted (bool)
            // NetworkVarNames: m_bSpottedByMask (uint32)
            pub mod EntitySpottedState_t {
                pub const m_bSpotted: usize = 0x8; // bool
                pub const m_bSpottedByMask: usize = 0xC; // uint32[2]
            }
            // Parent: C_GameRulesProxy
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_pGameRules (CCSGameRules*)
            pub mod C_CSGameRulesProxy {
                pub const m_pGameRules: usize = 0x6D0; // C_CSGameRules*
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
            pub mod C_CSGameRules {
                pub const __m_pChainEntity: usize = 0x8; // CNetworkVarChainer
                pub const m_bFreezePeriod: usize = 0x30; // bool
                pub const m_bWarmupPeriod: usize = 0x31; // bool
                pub const m_fWarmupPeriodEnd: usize = 0x34; // GameTime_t
                pub const m_fWarmupPeriodStart: usize = 0x38; // GameTime_t
                pub const m_nTotalPausedTicks: usize = 0x3C; // int32
                pub const m_nPauseStartTick: usize = 0x40; // int32
                pub const m_bServerPaused: usize = 0x44; // bool
                pub const m_bGamePaused: usize = 0x45; // bool
                pub const m_bTerroristTimeOutActive: usize = 0x46; // bool
                pub const m_bCTTimeOutActive: usize = 0x47; // bool
                pub const m_flTerroristTimeOutRemaining: usize = 0x48; // float32
                pub const m_flCTTimeOutRemaining: usize = 0x4C; // float32
                pub const m_nTerroristTimeOuts: usize = 0x50; // int32
                pub const m_nCTTimeOuts: usize = 0x54; // int32
                pub const m_bTechnicalTimeOut: usize = 0x58; // bool
                pub const m_bMatchWaitingForResume: usize = 0x59; // bool
                pub const m_iRoundTime: usize = 0x5C; // int32
                pub const m_fMatchStartTime: usize = 0x60; // float32
                pub const m_fRoundStartTime: usize = 0x64; // GameTime_t
                pub const m_flRestartRoundTime: usize = 0x68; // GameTime_t
                pub const m_bGameRestart: usize = 0x6C; // bool
                pub const m_flGameStartTime: usize = 0x70; // float32
                pub const m_timeUntilNextPhaseStarts: usize = 0x74; // float32
                pub const m_gamePhase: usize = 0x78; // int32
                pub const m_totalRoundsPlayed: usize = 0x7C; // int32
                pub const m_nRoundsPlayedThisPhase: usize = 0x80; // int32
                pub const m_nOvertimePlaying: usize = 0x84; // int32
                pub const m_iHostagesRemaining: usize = 0x88; // int32
                pub const m_bAnyHostageReached: usize = 0x8C; // bool
                pub const m_bMapHasBombTarget: usize = 0x8D; // bool
                pub const m_bMapHasRescueZone: usize = 0x8E; // bool
                pub const m_bMapHasBuyZone: usize = 0x8F; // bool
                pub const m_bIsQueuedMatchmaking: usize = 0x90; // bool
                pub const m_nQueuedMatchmakingMode: usize = 0x94; // int32
                pub const m_bIsValveDS: usize = 0x98; // bool
                pub const m_bLogoMap: usize = 0x99; // bool
                pub const m_bPlayAllStepSoundsOnServer: usize = 0x9A; // bool
                pub const m_iSpectatorSlotCount: usize = 0x9C; // int32
                pub const m_MatchDevice: usize = 0xA0; // int32
                pub const m_bHasMatchStarted: usize = 0xA4; // bool
                pub const m_nNextMapInMapgroup: usize = 0xA8; // int32
                pub const m_szTournamentEventName: usize = 0xAC; // char[512]
                pub const m_szTournamentEventStage: usize = 0x2AC; // char[512]
                pub const m_szMatchStatTxt: usize = 0x4AC; // char[512]
                pub const m_szTournamentPredictionsTxt: usize = 0x6AC; // char[512]
                pub const m_nTournamentPredictionsPct: usize = 0x8AC; // int32
                pub const m_flCMMItemDropRevealStartTime: usize = 0x8B0; // GameTime_t
                pub const m_flCMMItemDropRevealEndTime: usize = 0x8B4; // GameTime_t
                pub const m_bIsDroppingItems: usize = 0x8B8; // bool
                pub const m_bIsQuestEligible: usize = 0x8B9; // bool
                pub const m_bIsHltvActive: usize = 0x8BA; // bool
                pub const m_nGuardianModeWaveNumber: usize = 0x8BC; // int32
                pub const m_nGuardianModeSpecialKillsRemaining: usize = 0x8C0; // int32
                pub const m_nGuardianModeSpecialWeaponNeeded: usize = 0x8C4; // int32
                pub const m_nGuardianGrenadesToGiveBots: usize = 0x8C8; // int32
                pub const m_nNumHeaviesToSpawn: usize = 0x8CC; // int32
                pub const m_numGlobalGiftsGiven: usize = 0x8D0; // uint32
                pub const m_numGlobalGifters: usize = 0x8D4; // uint32
                pub const m_numGlobalGiftsPeriodSeconds: usize = 0x8D8; // uint32
                pub const m_arrFeaturedGiftersAccounts: usize = 0x8DC; // uint32[4]
                pub const m_arrFeaturedGiftersGifts: usize = 0x8EC; // uint32[4]
                pub const m_arrProhibitedItemIndices: usize = 0x8FC; // uint16[100]
                pub const m_arrTournamentActiveCasterAccounts: usize = 0x9C4; // uint32[4]
                pub const m_numBestOfMaps: usize = 0x9D4; // int32
                pub const m_nHalloweenMaskListSeed: usize = 0x9D8; // int32
                pub const m_bBombDropped: usize = 0x9DC; // bool
                pub const m_bBombPlanted: usize = 0x9DD; // bool
                pub const m_iRoundWinStatus: usize = 0x9E0; // int32
                pub const m_eRoundWinReason: usize = 0x9E4; // int32
                pub const m_bTCantBuy: usize = 0x9E8; // bool
                pub const m_bCTCantBuy: usize = 0x9E9; // bool
                pub const m_flGuardianBuyUntilTime: usize = 0x9EC; // GameTime_t
                pub const m_iMatchStats_RoundResults: usize = 0x9F0; // int32[30]
                pub const m_iMatchStats_PlayersAlive_CT: usize = 0xA68; // int32[30]
                pub const m_iMatchStats_PlayersAlive_T: usize = 0xAE0; // int32[30]
                pub const m_TeamRespawnWaveTimes: usize = 0xB58; // float32[32]
                pub const m_flNextRespawnWave: usize = 0xBD8; // GameTime_t[32]
                pub const m_nServerQuestID: usize = 0xC58; // int32
                pub const m_vMinimapMins: usize = 0xC5C; // Vector
                pub const m_vMinimapMaxs: usize = 0xC68; // Vector
                pub const m_MinimapVerticalSectionHeights: usize = 0xC74; // float32[8]
                pub const m_bDontIncrementCoopWave: usize = 0xC94; // bool
                pub const m_bSpawnedTerrorHuntHeavy: usize = 0xC95; // bool
                pub const m_nEndMatchMapGroupVoteTypes: usize = 0xC98; // int32[10]
                pub const m_nEndMatchMapGroupVoteOptions: usize = 0xCC0; // int32[10]
                pub const m_nEndMatchMapVoteWinner: usize = 0xCE8; // int32
                pub const m_iNumConsecutiveCTLoses: usize = 0xCEC; // int32
                pub const m_iNumConsecutiveTerroristLoses: usize = 0xCF0; // int32
                pub const m_bMarkClientStopRecordAtRoundEnd: usize = 0xD10; // bool
                pub const m_nMatchAbortedEarlyReason: usize = 0xD68; // int32
                pub const m_bHasTriggeredRoundStartMusic: usize = 0xD6C; // bool
                pub const m_bHasTriggeredCoopSpawnReset: usize = 0xD6D; // bool
                pub const m_bSwitchingTeamsAtRoundReset: usize = 0xD6E; // bool
                pub const m_pGameModeRules: usize = 0xD88; // CCSGameModeRules*
                pub const m_RetakeRules: usize = 0xD90; // C_RetakeGameRules
                pub const m_nMatchEndCount: usize = 0xEA8; // uint8
                pub const m_nTTeamIntroVariant: usize = 0xEAC; // int32
                pub const m_nCTTeamIntroVariant: usize = 0xEB0; // int32
                pub const m_bTeamIntroPeriod: usize = 0xEB4; // bool
                pub const m_iRoundEndWinnerTeam: usize = 0xEB8; // int32
                pub const m_eRoundEndReason: usize = 0xEBC; // int32
                pub const m_bRoundEndShowTimerDefend: usize = 0xEC0; // bool
                pub const m_iRoundEndTimerTime: usize = 0xEC4; // int32
                pub const m_sRoundEndFunFactToken: usize = 0xEC8; // CUtlString
                pub const m_iRoundEndFunFactPlayerSlot: usize = 0xED0; // CPlayerSlot
                pub const m_iRoundEndFunFactData1: usize = 0xED4; // int32
                pub const m_iRoundEndFunFactData2: usize = 0xED8; // int32
                pub const m_iRoundEndFunFactData3: usize = 0xEDC; // int32
                pub const m_sRoundEndMessage: usize = 0xEE0; // CUtlString
                pub const m_iRoundEndPlayerCount: usize = 0xEE8; // int32
                pub const m_bRoundEndNoMusic: usize = 0xEEC; // bool
                pub const m_iRoundEndLegacy: usize = 0xEF0; // int32
                pub const m_nRoundEndCount: usize = 0xEF4; // uint8
                pub const m_iRoundStartRoundNumber: usize = 0xEF8; // int32
                pub const m_nRoundStartCount: usize = 0xEFC; // uint8
                pub const m_flLastPerfSampleTime: usize = 0x4F08; // float64
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            pub mod CCSTakeDamageInfoAPI {
            }
            // Parent: None
            // Fields count: 1
            pub mod CCSGameModeRules {
                pub const __m_pChainEntity: usize = 0x8; // CNetworkVarChainer
            }
            // Parent: CCSGameModeRules
            // Fields count: 0
            pub mod CCSGameModeRules_Noop {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseInstanceDomainInfo
            // MPulseLibraryBindings
            // MPulseDomainOptInFeatureTag
            pub mod CCSGameModeScript {
            }
            // Parent: CCSGameModeRules
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_WeaponSequence (CUtlString)
            pub mod CCSGameModeRules_ArmsRace {
                pub const m_WeaponSequence: usize = 0x38; // C_NetworkUtlVectorBase<CUtlString>
            }
            // Parent: CCSGameModeScript
            // Fields count: 1
            //
            // Metadata:
            // MPulseInstanceDomainInfo
            // MPulseLibraryBindings
            // MPulseDomainOptInFeatureTag
            pub mod CCSArmsRaceScript {
                pub const m_pOuter: usize = 0xD8; // CCSGameModeRules_ArmsRace*
            }
            // Parent: CCSGameModeRules
            // Fields count: 3
            //
            // Metadata:
            // NetworkVarNames: m_flDMBonusStartTime (GameTime_t)
            // NetworkVarNames: m_flDMBonusTimeLength (float)
            // NetworkVarNames: m_nDMBonusWeaponLoadoutSlot (int16)
            pub mod CCSGameModeRules_Deathmatch {
                pub const m_flDMBonusStartTime: usize = 0x38; // GameTime_t
                pub const m_flDMBonusTimeLength: usize = 0x3C; // float32
                pub const m_nDMBonusWeaponLoadoutSlot: usize = 0x40; // int16
            }
            // Parent: CCSGameModeScript
            // Fields count: 1
            //
            // Metadata:
            // MPulseInstanceDomainInfo
            // MPulseLibraryBindings
            // MPulseDomainOptInFeatureTag
            pub mod CCSDeathmatchScript {
                pub const m_pOuter: usize = 0xD8; // CCSGameModeRules_Deathmatch*
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
            pub mod C_RetakeGameRules {
                pub const m_nMatchSeed: usize = 0xF8; // int32
                pub const m_bBlockersPresent: usize = 0xFC; // bool
                pub const m_bRoundInProgress: usize = 0xFD; // bool
                pub const m_iFirstSecondHalfRound: usize = 0x100; // int32
                pub const m_iBombSite: usize = 0x104; // int32
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
            pub mod CSPerRoundStats_t {
                pub const m_iKills: usize = 0x30; // int32
                pub const m_iDeaths: usize = 0x34; // int32
                pub const m_iAssists: usize = 0x38; // int32
                pub const m_iDamage: usize = 0x3C; // int32
                pub const m_iEquipmentValue: usize = 0x40; // int32
                pub const m_iMoneySaved: usize = 0x44; // int32
                pub const m_iKillReward: usize = 0x48; // int32
                pub const m_iLiveTime: usize = 0x4C; // int32
                pub const m_iHeadShotKills: usize = 0x50; // int32
                pub const m_iObjective: usize = 0x54; // int32
                pub const m_iCashEarned: usize = 0x58; // int32
                pub const m_iUtilityDamage: usize = 0x5C; // int32
                pub const m_iEnemiesFlashed: usize = 0x60; // int32
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
            pub mod CSMatchStats_t {
                pub const m_iEnemy5Ks: usize = 0x64; // int32
                pub const m_iEnemy4Ks: usize = 0x68; // int32
                pub const m_iEnemy3Ks: usize = 0x6C; // int32
                pub const m_iEnemyKnifeKills: usize = 0x70; // int32
                pub const m_iEnemyTaserKills: usize = 0x74; // int32
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
            pub mod C_CSGO_TeamPreviewCharacterPosition {
                pub const m_nVariant: usize = 0x6D0; // int32
                pub const m_nRandom: usize = 0x6D4; // int32
                pub const m_nOrdinal: usize = 0x6D8; // int32
                pub const m_sWeaponName: usize = 0x6E0; // CUtlString
                pub const m_xuid: usize = 0x6E8; // uint64
                pub const m_agentItem: usize = 0x6F0; // C_EconItemView
                pub const m_glovesItem: usize = 0x1A40; // C_EconItemView
                pub const m_weaponItem: usize = 0x2D90; // C_EconItemView
            }
            // Parent: C_CSGO_TeamPreviewCharacterPosition
            // Fields count: 0
            pub mod C_CSGO_TeamSelectCharacterPosition {
            }
            // Parent: C_CSGO_TeamSelectCharacterPosition
            // Fields count: 0
            pub mod C_CSGO_TeamSelectTerroristPosition {
            }
            // Parent: C_CSGO_TeamSelectCharacterPosition
            // Fields count: 0
            pub mod C_CSGO_TeamSelectCounterTerroristPosition {
            }
            // Parent: C_CSGO_TeamPreviewCharacterPosition
            // Fields count: 0
            pub mod C_CSGO_TeamIntroCharacterPosition {
            }
            // Parent: C_CSGO_TeamIntroCharacterPosition
            // Fields count: 0
            pub mod C_CSGO_TeamIntroTerroristPosition {
            }
            // Parent: C_CSGO_TeamIntroCharacterPosition
            // Fields count: 0
            pub mod C_CSGO_TeamIntroCounterTerroristPosition {
            }
            // Parent: C_CSGO_TeamIntroCharacterPosition
            // Fields count: 0
            pub mod CCSGO_WingmanIntroCharacterPosition {
            }
            // Parent: CCSGO_WingmanIntroCharacterPosition
            // Fields count: 0
            pub mod CCSGO_WingmanIntroTerroristPosition {
            }
            // Parent: CCSGO_WingmanIntroCharacterPosition
            // Fields count: 0
            pub mod CCSGO_WingmanIntroCounterTerroristPosition {
            }
            // Parent: C_BaseEntity
            // Fields count: 0
            pub mod C_CSMinimapBoundary {
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
            pub mod C_PlayerPing {
                pub const m_hPlayer: usize = 0x700; // CHandle<C_CSPlayerPawn>
                pub const m_hPingedEntity: usize = 0x704; // CHandle<C_BaseEntity>
                pub const m_iType: usize = 0x708; // int32
                pub const m_bUrgent: usize = 0x70C; // bool
                pub const m_szPlaceName: usize = 0x70D; // char[18]
            }
            // Parent: CPlayerPawnComponent
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_hPlayerPing (CHandle< CBaseEntity>)
            pub mod CCSPlayer_PingServices {
                pub const m_hPlayerPing: usize = 0x40; // CHandle<C_BaseEntity>
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
            pub mod C_CSPlayerResource {
                pub const m_bHostageAlive: usize = 0x6D0; // bool[12]
                pub const m_isHostageFollowingSomeone: usize = 0x6DC; // bool[12]
                pub const m_iHostageEntityIDs: usize = 0x6E8; // CEntityIndex[12]
                pub const m_bombsiteCenterA: usize = 0x718; // Vector
                pub const m_bombsiteCenterB: usize = 0x724; // Vector
                pub const m_hostageRescueX: usize = 0x730; // int32[4]
                pub const m_hostageRescueY: usize = 0x740; // int32[4]
                pub const m_hostageRescueZ: usize = 0x750; // int32[4]
                pub const m_bEndMatchNextMapAllVoted: usize = 0x760; // bool
                pub const m_foundGoalPositions: usize = 0x761; // bool
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            pub mod CCSPlayerControllerAPI {
            }
            // Parent: CPlayerPawnComponent
            // Fields count: 0
            pub mod CPlayer_ViewModelServices {
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
            pub mod CCSPlayerBase_CameraServices {
                pub const m_iFOV: usize = 0x210; // uint32
                pub const m_iFOVStart: usize = 0x214; // uint32
                pub const m_flFOVTime: usize = 0x218; // GameTime_t
                pub const m_flFOVRate: usize = 0x21C; // float32
                pub const m_hZoomOwner: usize = 0x220; // CHandle<C_BaseEntity>
                pub const m_flLastShotFOV: usize = 0x224; // float32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_nItemDefIndex (uint16)
            // NetworkVarNames: m_nCount (uint16)
            pub mod WeaponPurchaseCount_t {
                pub const m_nItemDefIndex: usize = 0x30; // uint16
                pub const m_nCount: usize = 0x32; // uint16
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_weaponPurchases (WeaponPurchaseCount_t)
            pub mod WeaponPurchaseTracker_t {
                pub const m_weaponPurchases: usize = 0x8; // C_UtlVectorEmbeddedNetworkVar<WeaponPurchaseCount_t>
            }
            // Parent: CPlayerPawnComponent
            // Fields count: 4
            //
            // Metadata:
            // NetworkVarNames: m_bIsRescuing (bool)
            // NetworkVarNames: m_weaponPurchasesThisMatch (WeaponPurchaseTracker_t)
            // NetworkVarNames: m_weaponPurchasesThisRound (WeaponPurchaseTracker_t)
            pub mod CCSPlayer_ActionTrackingServices {
                pub const m_hLastWeaponBeforeC4AutoSwitch: usize = 0x40; // CHandle<C_BasePlayerWeapon>
                pub const m_bIsRescuing: usize = 0x44; // bool
                pub const m_weaponPurchasesThisMatch: usize = 0x48; // WeaponPurchaseTracker_t
                pub const m_weaponPurchasesThisRound: usize = 0xA0; // WeaponPurchaseTracker_t
            }
            // Parent: CPlayerPawnComponent
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_totalHitsOnServer (int32)
            pub mod CCSPlayer_BulletServices {
                pub const m_totalHitsOnServer: usize = 0x40; // int32
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
            pub mod SellbackPurchaseEntry_t {
                pub const m_unDefIdx: usize = 0x30; // uint16
                pub const m_nCost: usize = 0x34; // int32
                pub const m_nPrevArmor: usize = 0x38; // int32
                pub const m_bPrevHelmet: usize = 0x3C; // bool
                pub const m_hItem: usize = 0x40; // CEntityHandle
            }
            // Parent: CPlayerPawnComponent
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_vecSellbackPurchaseEntries (SellbackPurchaseEntry_t)
            pub mod CCSPlayer_BuyServices {
                pub const m_vecSellbackPurchaseEntries: usize = 0x40; // C_UtlVectorEmbeddedNetworkVar<SellbackPurchaseEntry_t>
            }
            // Parent: CCSPlayerBase_CameraServices
            // Fields count: 1
            pub mod CCSPlayer_CameraServices {
                pub const m_flDeathCamTilt: usize = 0x228; // float32
            }
            // Parent: CPlayerPawnComponent
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_hCarriedHostage (CHandle< CBaseEntity>)
            // NetworkVarNames: m_hCarriedHostageProp (CHandle< CBaseEntity>)
            pub mod CCSPlayer_HostageServices {
                pub const m_hCarriedHostage: usize = 0x40; // CHandle<C_BaseEntity>
                pub const m_hCarriedHostageProp: usize = 0x44; // CHandle<C_BaseEntity>
            }
            // Parent: CPlayer_ItemServices
            // Fields count: 3
            //
            // Metadata:
            // NetworkVarNames: m_bHasDefuser (bool)
            // NetworkVarNames: m_bHasHelmet (bool)
            // NetworkVarNames: m_bHasHeavyArmor (bool)
            pub mod CCSPlayer_ItemServices {
                pub const m_bHasDefuser: usize = 0x40; // bool
                pub const m_bHasHelmet: usize = 0x41; // bool
                pub const m_bHasHeavyArmor: usize = 0x42; // bool
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
            pub mod CCSPlayer_MovementServices {
                pub const m_flMaxFallVelocity: usize = 0x214; // float32
                pub const m_vecLadderNormal: usize = 0x218; // Vector
                pub const m_nLadderSurfacePropIndex: usize = 0x224; // int32
                pub const m_flDuckAmount: usize = 0x228; // float32
                pub const m_flDuckSpeed: usize = 0x22C; // float32
                pub const m_bDuckOverride: usize = 0x230; // bool
                pub const m_bDesiresDuck: usize = 0x231; // bool
                pub const m_flDuckOffset: usize = 0x234; // float32
                pub const m_nDuckTimeMsecs: usize = 0x238; // uint32
                pub const m_nDuckJumpTimeMsecs: usize = 0x23C; // uint32
                pub const m_nJumpTimeMsecs: usize = 0x240; // uint32
                pub const m_flLastDuckTime: usize = 0x244; // float32
                pub const m_vecLastPositionAtFullCrouchSpeed: usize = 0x250; // Vector2D
                pub const m_duckUntilOnGround: usize = 0x258; // bool
                pub const m_bHasWalkMovedSinceLastJump: usize = 0x259; // bool
                pub const m_bInStuckTest: usize = 0x25A; // bool
                pub const m_flStuckCheckTime: usize = 0x268; // float32[64][2]
                pub const m_nTraceCount: usize = 0x468; // int32
                pub const m_StuckLast: usize = 0x46C; // int32
                pub const m_bSpeedCropped: usize = 0x470; // bool
                pub const m_nOldWaterLevel: usize = 0x474; // int32
                pub const m_flWaterEntryTime: usize = 0x478; // float32
                pub const m_vecForward: usize = 0x47C; // Vector
                pub const m_vecLeft: usize = 0x488; // Vector
                pub const m_vecUp: usize = 0x494; // Vector
                pub const m_nGameCodeHasMovedPlayerAfterCommand: usize = 0x4A0; // int32
                pub const m_bOldJumpPressed: usize = 0x4A4; // bool
                pub const m_flJumpPressedTime: usize = 0x4A8; // float32
                pub const m_flJumpUntil: usize = 0x4AC; // float32
                pub const m_flJumpVel: usize = 0x4B0; // float32
                pub const m_fStashGrenadeParameterWhen: usize = 0x4B4; // GameTime_t
                pub const m_nButtonDownMaskPrev: usize = 0x4B8; // uint64
                pub const m_flOffsetTickCompleteTime: usize = 0x4C0; // float32
                pub const m_flOffsetTickStashedSpeed: usize = 0x4C4; // float32
                pub const m_flStamina: usize = 0x4C8; // float32
                pub const m_flHeightAtJumpStart: usize = 0x4CC; // float32
                pub const m_flMaxJumpHeightThisJump: usize = 0x4D0; // float32
            }
            // Parent: CPlayer_UseServices
            // Fields count: 0
            pub mod CCSPlayer_UseServices {
            }
            // Parent: CPlayer_ViewModelServices
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_hViewModel (CHandle< CBaseViewModel >)
            pub mod CCSPlayer_ViewModelServices {
                pub const m_hViewModel: usize = 0x40; // CHandle<C_BaseViewModel>[3]
            }
            // Parent: CPlayer_WaterServices
            // Fields count: 3
            pub mod CCSPlayer_WaterServices {
                pub const m_flWaterJumpTime: usize = 0x40; // float32
                pub const m_vecWaterJumpVel: usize = 0x44; // Vector
                pub const m_flSwimSoundTime: usize = 0x50; // float32
            }
            // Parent: CPlayer_WeaponServices
            // Fields count: 5
            //
            // Metadata:
            // NetworkVarNames: m_flNextAttack (GameTime_t)
            // NetworkVarNames: m_bIsLookingAtWeapon (bool)
            // NetworkVarNames: m_bIsHoldingLookAtWeapon (bool)
            pub mod CCSPlayer_WeaponServices {
                pub const m_flNextAttack: usize = 0xB8; // GameTime_t
                pub const m_bIsLookingAtWeapon: usize = 0xBC; // bool
                pub const m_bIsHoldingLookAtWeapon: usize = 0xBD; // bool
                pub const m_nOldShootPositionHistoryCount: usize = 0xC0; // uint32
                pub const m_nOldInputHistoryCount: usize = 0x458; // uint32
            }
            // Parent: CPlayer_ObserverServices
            // Fields count: 8
            pub mod CCSObserver_ObserverServices {
                pub const m_hLastObserverTarget: usize = 0x58; // CEntityHandle
                pub const m_vecObserverInterpolateOffset: usize = 0x5C; // Vector
                pub const m_vecObserverInterpStartPos: usize = 0x68; // Vector
                pub const m_flObsInterp_PathLength: usize = 0x74; // float32
                pub const m_qObsInterp_OrientationStart: usize = 0x80; // Quaternion
                pub const m_qObsInterp_OrientationTravelDir: usize = 0x90; // Quaternion
                pub const m_obsInterpState: usize = 0xA0; // ObserverInterpState_t
                pub const m_bObserverInterpolationNeedsDeferredSetup: usize = 0xA4; // bool
            }
            // Parent: CCSPlayerBase_CameraServices
            // Fields count: 0
            pub mod CCSObserver_CameraServices {
            }
            // Parent: CPlayer_MovementServices
            // Fields count: 0
            pub mod CCSObserver_MovementServices {
            }
            // Parent: CPlayer_UseServices
            // Fields count: 0
            pub mod CCSObserver_UseServices {
            }
            // Parent: CPlayer_ViewModelServices
            // Fields count: 0
            pub mod CCSObserver_ViewModelServices {
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
            pub mod CCSPlayerController_ActionTrackingServices {
                pub const m_perRoundStats: usize = 0x40; // C_UtlVectorEmbeddedNetworkVar<CSPerRoundStats_t>
                pub const m_matchStats: usize = 0x90; // CSMatchStats_t
                pub const m_iNumRoundKills: usize = 0x108; // int32
                pub const m_iNumRoundKillsHeadshots: usize = 0x10C; // int32
                pub const m_unTotalRoundDamageDealt: usize = 0x110; // uint32
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
            pub mod CDamageRecord {
                pub const m_PlayerDamager: usize = 0x28; // CHandle<C_CSPlayerPawnBase>
                pub const m_PlayerRecipient: usize = 0x2C; // CHandle<C_CSPlayerPawnBase>
                pub const m_hPlayerControllerDamager: usize = 0x30; // CHandle<CCSPlayerController>
                pub const m_hPlayerControllerRecipient: usize = 0x34; // CHandle<CCSPlayerController>
                pub const m_szPlayerDamagerName: usize = 0x38; // CUtlString
                pub const m_szPlayerRecipientName: usize = 0x40; // CUtlString
                pub const m_DamagerXuid: usize = 0x48; // uint64
                pub const m_RecipientXuid: usize = 0x50; // uint64
                pub const m_iDamage: usize = 0x58; // int32
                pub const m_iActualHealthRemoved: usize = 0x5C; // int32
                pub const m_iNumHits: usize = 0x60; // int32
                pub const m_iLastBulletUpdate: usize = 0x64; // int32
                pub const m_bIsOtherEnemy: usize = 0x68; // bool
                pub const m_killType: usize = 0x69; // EKillTypes_t
            }
            // Parent: CPlayerControllerComponent
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_nSendUpdate (int)
            // NetworkVarNames: m_DamageList (CDamageRecord)
            pub mod CCSPlayerController_DamageServices {
                pub const m_nSendUpdate: usize = 0x40; // int32
                pub const m_DamageList: usize = 0x48; // C_UtlVectorEmbeddedNetworkVar<CDamageRecord>
            }
            // Parent: CPlayerControllerComponent
            // Fields count: 5
            //
            // Metadata:
            // NetworkVarNames: m_iAccount (int)
            // NetworkVarNames: m_iStartAccount (int)
            // NetworkVarNames: m_iTotalCashSpent (int)
            // NetworkVarNames: m_iCashSpentThisRound (int)
            pub mod CCSPlayerController_InGameMoneyServices {
                pub const m_iAccount: usize = 0x40; // int32
                pub const m_iStartAccount: usize = 0x44; // int32
                pub const m_iTotalCashSpent: usize = 0x48; // int32
                pub const m_iCashSpentThisRound: usize = 0x4C; // int32
                pub const m_nPreviousAccount: usize = 0x50; // int32
            }
            // Parent: None
            // Fields count: 3
            pub mod ServerAuthoritativeWeaponSlot_t {
                pub const unClass: usize = 0x28; // uint16
                pub const unSlot: usize = 0x2A; // uint16
                pub const unItemDefIdx: usize = 0x2C; // uint16
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
            pub mod CCSPlayerController_InventoryServices {
                pub const m_unMusicID: usize = 0x40; // uint16
                pub const m_rank: usize = 0x44; // MedalRank_t[6]
                pub const m_nPersonaDataPublicLevel: usize = 0x5C; // int32
                pub const m_nPersonaDataPublicCommendsLeader: usize = 0x60; // int32
                pub const m_nPersonaDataPublicCommendsTeacher: usize = 0x64; // int32
                pub const m_nPersonaDataPublicCommendsFriendly: usize = 0x68; // int32
                pub const m_nPersonaDataXpTrailLevel: usize = 0x6C; // int32
                pub const m_vecServerAuthoritativeWeaponSlots: usize = 0x70; // C_UtlVectorEmbeddedNetworkVar<ServerAuthoritativeWeaponSlot_t>
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            pub mod CCSWeaponBaseVDataAPI {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            pub mod CCSWeaponBaseAPI {
            }
            // Parent: None
            // Fields count: 13
            pub mod C_IronSightController {
                pub const m_bIronSightAvailable: usize = 0x10; // bool
                pub const m_flIronSightAmount: usize = 0x14; // float32
                pub const m_flIronSightAmountGained: usize = 0x18; // float32
                pub const m_flIronSightAmountBiased: usize = 0x1C; // float32
                pub const m_flIronSightAmount_Interpolated: usize = 0x20; // float32
                pub const m_flIronSightAmountGained_Interpolated: usize = 0x24; // float32
                pub const m_flIronSightAmountBiased_Interpolated: usize = 0x28; // float32
                pub const m_flInterpolationLastUpdated: usize = 0x2C; // float32
                pub const m_angDeltaAverage: usize = 0x30; // QAngle[8]
                pub const m_angViewLast: usize = 0x90; // QAngle
                pub const m_vecDotCoords: usize = 0x9C; // Vector2D
                pub const m_flDotBlur: usize = 0xA4; // float32
                pub const m_flSpeedRatio: usize = 0xA8; // float32
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyElementNameFn
            pub mod CompositeMaterialMatchFilter_t {
                pub const m_nCompositeMaterialMatchFilterType: usize = 0x0; // CompositeMaterialMatchFilterType_t
                pub const m_strMatchFilter: usize = 0x8; // CUtlString
                pub const m_strMatchValue: usize = 0x10; // CUtlString
                pub const m_bPassWhenTrue: usize = 0x18; // bool
            }
            // Parent: None
            // Fields count: 34
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyElementNameFn
            pub mod CompositeMaterialInputLooseVariable_t {
                pub const m_strName: usize = 0x0; // CUtlString
                pub const m_bExposeExternally: usize = 0x8; // bool
                pub const m_strExposedFriendlyName: usize = 0x10; // CUtlString
                pub const m_strExposedFriendlyGroupName: usize = 0x18; // CUtlString
                pub const m_bExposedVariableIsFixedRange: usize = 0x20; // bool
                pub const m_strExposedVisibleWhenTrue: usize = 0x28; // CUtlString
                pub const m_strExposedHiddenWhenTrue: usize = 0x30; // CUtlString
                pub const m_nVariableType: usize = 0x38; // CompositeMaterialInputLooseVariableType_t
                pub const m_bValueBoolean: usize = 0x3C; // bool
                pub const m_nValueIntX: usize = 0x40; // int32
                pub const m_nValueIntY: usize = 0x44; // int32
                pub const m_nValueIntZ: usize = 0x48; // int32
                pub const m_nValueIntW: usize = 0x4C; // int32
                pub const m_bHasFloatBounds: usize = 0x50; // bool
                pub const m_flValueFloatX: usize = 0x54; // float32
                pub const m_flValueFloatX_Min: usize = 0x58; // float32
                pub const m_flValueFloatX_Max: usize = 0x5C; // float32
                pub const m_flValueFloatY: usize = 0x60; // float32
                pub const m_flValueFloatY_Min: usize = 0x64; // float32
                pub const m_flValueFloatY_Max: usize = 0x68; // float32
                pub const m_flValueFloatZ: usize = 0x6C; // float32
                pub const m_flValueFloatZ_Min: usize = 0x70; // float32
                pub const m_flValueFloatZ_Max: usize = 0x74; // float32
                pub const m_flValueFloatW: usize = 0x78; // float32
                pub const m_flValueFloatW_Min: usize = 0x7C; // float32
                pub const m_flValueFloatW_Max: usize = 0x80; // float32
                pub const m_cValueColor4: usize = 0x84; // Color
                pub const m_nValueSystemVar: usize = 0x88; // CompositeMaterialVarSystemVar_t
                pub const m_strResourceMaterial: usize = 0x90; // CResourceName
                pub const m_strTextureContentAssetPath: usize = 0x170; // CUtlString
                pub const m_strTextureRuntimeResourcePath: usize = 0x178; // CResourceName
                pub const m_strTextureCompilationVtexTemplate: usize = 0x258; // CUtlString
                pub const m_nTextureType: usize = 0x260; // CompositeMaterialInputTextureType_t
                pub const m_strString: usize = 0x268; // CUtlString
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyElementNameFn
            pub mod CompMatMutatorCondition_t {
                pub const m_nMutatorCondition: usize = 0x0; // CompMatPropertyMutatorConditionType_t
                pub const m_strMutatorConditionContainerName: usize = 0x8; // CUtlString
                pub const m_strMutatorConditionContainerVarName: usize = 0x10; // CUtlString
                pub const m_strMutatorConditionContainerVarValue: usize = 0x18; // CUtlString
                pub const m_bPassWhenTrue: usize = 0x20; // bool
            }
            // Parent: None
            // Fields count: 28
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyElementNameFn
            pub mod CompMatPropertyMutator_t {
                pub const m_bEnabled: usize = 0x0; // bool
                pub const m_nMutatorCommandType: usize = 0x4; // CompMatPropertyMutatorType_t
                pub const m_strInitWith_Container: usize = 0x8; // CUtlString
                pub const m_strCopyProperty_InputContainerSrc: usize = 0x10; // CUtlString
                pub const m_strCopyProperty_InputContainerProperty: usize = 0x18; // CUtlString
                pub const m_strCopyProperty_TargetProperty: usize = 0x20; // CUtlString
                pub const m_strRandomRollInputVars_SeedInputVar: usize = 0x28; // CUtlString
                pub const m_vecRandomRollInputVars_InputVarsToRoll: usize = 0x30; // CUtlVector<CUtlString>
                pub const m_strCopyMatchingKeys_InputContainerSrc: usize = 0x48; // CUtlString
                pub const m_strCopyKeysWithSuffix_InputContainerSrc: usize = 0x50; // CUtlString
                pub const m_strCopyKeysWithSuffix_FindSuffix: usize = 0x58; // CUtlString
                pub const m_strCopyKeysWithSuffix_ReplaceSuffix: usize = 0x60; // CUtlString
                pub const m_nSetValue_Value: usize = 0x68; // CompositeMaterialInputLooseVariable_t
                pub const m_strGenerateTexture_TargetParam: usize = 0x2D8; // CUtlString
                pub const m_strGenerateTexture_InitialContainer: usize = 0x2E0; // CUtlString
                pub const m_nResolution: usize = 0x2E8; // int32
                pub const m_bIsScratchTarget: usize = 0x2EC; // bool
                pub const m_bSplatDebugInfo: usize = 0x2ED; // bool
                pub const m_bCaptureInRenderDoc: usize = 0x2EE; // bool
                pub const m_vecTexGenInstructions: usize = 0x2F0; // CUtlVector<CompMatPropertyMutator_t>
                pub const m_vecConditionalMutators: usize = 0x308; // CUtlVector<CompMatPropertyMutator_t>
                pub const m_strPopInputQueue_Container: usize = 0x320; // CUtlString
                pub const m_strDrawText_InputContainerSrc: usize = 0x328; // CUtlString
                pub const m_strDrawText_InputContainerProperty: usize = 0x330; // CUtlString
                pub const m_vecDrawText_Position: usize = 0x338; // Vector2D
                pub const m_colDrawText_Color: usize = 0x340; // Color
                pub const m_strDrawText_Font: usize = 0x348; // CUtlString
                pub const m_vecConditions: usize = 0x350; // CUtlVector<CompMatMutatorCondition_t>
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyElementNameFn
            pub mod CompositeMaterialInputContainer_t {
                pub const m_bEnabled: usize = 0x0; // bool
                pub const m_nCompositeMaterialInputContainerSourceType: usize = 0x4; // CompositeMaterialInputContainerSourceType_t
                pub const m_strSpecificContainerMaterial: usize = 0x8; // CResourceName
                pub const m_strAttrName: usize = 0xE8; // CUtlString
                pub const m_strAlias: usize = 0xF0; // CUtlString
                pub const m_vecLooseVariables: usize = 0xF8; // CUtlVector<CompositeMaterialInputLooseVariable_t>
                pub const m_strAttrNameForVar: usize = 0x110; // CUtlString
                pub const m_bExposeExternally: usize = 0x118; // bool
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyElementNameFn
            pub mod CompositeMaterialAssemblyProcedure_t {
                pub const m_vecCompMatIncludes: usize = 0x0; // CUtlVector<CResourceName>
                pub const m_vecMatchFilters: usize = 0x18; // CUtlVector<CompositeMaterialMatchFilter_t>
                pub const m_vecCompositeInputContainers: usize = 0x30; // CUtlVector<CompositeMaterialInputContainer_t>
                pub const m_vecPropertyMutators: usize = 0x48; // CUtlVector<CompMatPropertyMutator_t>
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MPropertyElementNameFn
            pub mod GeneratedTextureHandle_t {
                pub const m_strBitmapName: usize = 0x0; // CUtlString
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MPropertyElementNameFn
            pub mod CompositeMaterial_t {
                pub const m_TargetKVs: usize = 0x8; // KeyValues3
                pub const m_PreGenerationKVs: usize = 0x18; // KeyValues3
                pub const m_FinalKVs: usize = 0x28; // KeyValues3
                pub const m_vecGeneratedTextures: usize = 0x40; // CUtlVector<GeneratedTextureHandle_t>
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CompositeMaterialEditorPoint_t {
                pub const m_ModelName: usize = 0x0; // CResourceName
                pub const m_nSequenceIndex: usize = 0xE0; // int32
                pub const m_flCycle: usize = 0xE4; // float32
                pub const m_KVModelStateChoices: usize = 0xE8; // KeyValues3
                pub const m_bEnableChildModel: usize = 0xF8; // bool
                pub const m_ChildModelName: usize = 0x100; // CResourceName
                pub const m_vecCompositeMaterialAssemblyProcedures: usize = 0x1E0; // CUtlVector<CompositeMaterialAssemblyProcedure_t>
                pub const m_vecCompositeMaterials: usize = 0x1F8; // CUtlVector<CompositeMaterial_t>
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CCompositeMaterialEditorDoc {
                pub const m_nVersion: usize = 0x8; // int32
                pub const m_Points: usize = 0x10; // CUtlVector<CompositeMaterialEditorPoint_t>
                pub const m_KVthumbnail: usize = 0x28; // KeyValues3
            }
            // Parent: None
            // Fields count: 43
            pub mod CGlobalLightBase {
                pub const m_bSpotLight: usize = 0x10; // bool
                pub const m_SpotLightOrigin: usize = 0x14; // Vector
                pub const m_SpotLightAngles: usize = 0x20; // QAngle
                pub const m_ShadowDirection: usize = 0x2C; // Vector
                pub const m_AmbientDirection: usize = 0x38; // Vector
                pub const m_SpecularDirection: usize = 0x44; // Vector
                pub const m_InspectorSpecularDirection: usize = 0x50; // Vector
                pub const m_flSpecularPower: usize = 0x5C; // float32
                pub const m_flSpecularIndependence: usize = 0x60; // float32
                pub const m_SpecularColor: usize = 0x64; // Color
                pub const m_bStartDisabled: usize = 0x68; // bool
                pub const m_bEnabled: usize = 0x69; // bool
                pub const m_LightColor: usize = 0x6A; // Color
                pub const m_AmbientColor1: usize = 0x6E; // Color
                pub const m_AmbientColor2: usize = 0x72; // Color
                pub const m_AmbientColor3: usize = 0x76; // Color
                pub const m_flSunDistance: usize = 0x7C; // float32
                pub const m_flFOV: usize = 0x80; // float32
                pub const m_flNearZ: usize = 0x84; // float32
                pub const m_flFarZ: usize = 0x88; // float32
                pub const m_bEnableShadows: usize = 0x8C; // bool
                pub const m_bOldEnableShadows: usize = 0x8D; // bool
                pub const m_bBackgroundClearNotRequired: usize = 0x8E; // bool
                pub const m_flCloudScale: usize = 0x90; // float32
                pub const m_flCloud1Speed: usize = 0x94; // float32
                pub const m_flCloud1Direction: usize = 0x98; // float32
                pub const m_flCloud2Speed: usize = 0x9C; // float32
                pub const m_flCloud2Direction: usize = 0xA0; // float32
                pub const m_flAmbientScale1: usize = 0xB0; // float32
                pub const m_flAmbientScale2: usize = 0xB4; // float32
                pub const m_flGroundScale: usize = 0xB8; // float32
                pub const m_flLightScale: usize = 0xBC; // float32
                pub const m_flFoWDarkness: usize = 0xC0; // float32
                pub const m_bEnableSeparateSkyboxFog: usize = 0xC4; // bool
                pub const m_vFowColor: usize = 0xC8; // Vector
                pub const m_ViewOrigin: usize = 0xD4; // Vector
                pub const m_ViewAngles: usize = 0xE0; // QAngle
                pub const m_flViewFoV: usize = 0xEC; // float32
                pub const m_WorldPoints: usize = 0xF0; // Vector[8]
                pub const m_vFogOffsetLayer0: usize = 0x4A8; // Vector2D
                pub const m_vFogOffsetLayer1: usize = 0x4B0; // Vector2D
                pub const m_hEnvWind: usize = 0x4B8; // CHandle<C_BaseEntity>
                pub const m_hEnvSky: usize = 0x4BC; // CHandle<C_BaseEntity>
            }
            // Parent: C_BaseEntity
            // Fields count: 1
            pub mod C_GlobalLight {
                pub const m_WindClothForceHandle: usize = 0xB90; // uint16
            }
            // Parent: CAnimGraphControllerBase
            // Fields count: 4
            pub mod C_CSGO_PreviewModel_GraphController {
                pub const m_pszCharacterMode: usize = 0x18; // CAnimGraphParamOptionalRef<char*>
                pub const m_pszWeaponState: usize = 0x38; // CAnimGraphParamOptionalRef<char*>
                pub const m_pszWeaponType: usize = 0x58; // CAnimGraphParamOptionalRef<char*>
                pub const m_pszEndOfMatchCelebration: usize = 0x78; // CAnimGraphParamOptionalRef<char*>
            }
            // Parent: CAnimGraphControllerBase
            // Fields count: 8
            pub mod C_CSGO_PreviewPlayer_GraphController {
                pub const m_pszCharacterMode: usize = 0x18; // CAnimGraphParamOptionalRef<char*>
                pub const m_pszTeamPreviewVariant: usize = 0x38; // CAnimGraphParamOptionalRef<char*>
                pub const m_pszTeamPreviewPosition: usize = 0x58; // CAnimGraphParamOptionalRef<char*>
                pub const m_pszEndOfMatchCelebration: usize = 0x78; // CAnimGraphParamOptionalRef<char*>
                pub const m_nTeamPreviewRandom: usize = 0x98; // CAnimGraphParamOptionalRef<int32>
                pub const m_pszWeaponState: usize = 0xB0; // CAnimGraphParamOptionalRef<char*>
                pub const m_pszWeaponType: usize = 0xD0; // CAnimGraphParamOptionalRef<char*>
                pub const m_bCT: usize = 0xF0; // CAnimGraphParamOptionalRef<bool>
            }
            // Parent: C_BaseEntity
            // Fields count: 10
            pub mod C_CSGO_MapPreviewCameraPathNode {
                pub const m_szParentPathUniqueID: usize = 0x6D0; // CUtlSymbolLarge
                pub const m_nPathIndex: usize = 0x6D8; // int32
                pub const m_vInTangentLocal: usize = 0x6DC; // Vector
                pub const m_vOutTangentLocal: usize = 0x6E8; // Vector
                pub const m_flFOV: usize = 0x6F4; // float32
                pub const m_flSpeed: usize = 0x6F8; // float32
                pub const m_flEaseIn: usize = 0x6FC; // float32
                pub const m_flEaseOut: usize = 0x700; // float32
                pub const m_vInTangentWorld: usize = 0x704; // Vector
                pub const m_vOutTangentWorld: usize = 0x710; // Vector
            }
            // Parent: C_BaseEntity
            // Fields count: 8
            pub mod C_CSGO_MapPreviewCameraPath {
                pub const m_flZFar: usize = 0x6D0; // float32
                pub const m_flZNear: usize = 0x6D4; // float32
                pub const m_bLoop: usize = 0x6D8; // bool
                pub const m_bVerticalFOV: usize = 0x6D9; // bool
                pub const m_bConstantSpeed: usize = 0x6DA; // bool
                pub const m_flDuration: usize = 0x6DC; // float32
                pub const m_flPathLength: usize = 0x720; // float32
                pub const m_flPathDuration: usize = 0x724; // float32
            }
            // Parent: CPlayerPawnComponent
            // Fields count: 0
            pub mod CCSPlayer_GlowServices {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            pub mod C_CSObserverPawnAPI {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            pub mod C_CSPlayerPawnAPI {
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
            pub mod C_VoteController {
                pub const m_iActiveIssueIndex: usize = 0x6DC; // int32
                pub const m_iOnlyTeamToVote: usize = 0x6E0; // int32
                pub const m_nVoteOptionCount: usize = 0x6E4; // int32[5]
                pub const m_nPotentialVotes: usize = 0x6F8; // int32
                pub const m_bVotesDirty: usize = 0x6FC; // bool
                pub const m_bTypeDirty: usize = 0x6FD; // bool
                pub const m_bIsYesNoVote: usize = 0x6FE; // bool
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
            pub mod C_MapVetoPickController {
                pub const m_nDraftType: usize = 0x6DC; // int32
                pub const m_nTeamWinningCoinToss: usize = 0x6E0; // int32
                pub const m_nTeamWithFirstChoice: usize = 0x6E4; // int32[64]
                pub const m_nVoteMapIdsList: usize = 0x7E4; // int32[7]
                pub const m_nAccountIDs: usize = 0x800; // int32[64]
                pub const m_nMapId0: usize = 0x900; // int32[64]
                pub const m_nMapId1: usize = 0xA00; // int32[64]
                pub const m_nMapId2: usize = 0xB00; // int32[64]
                pub const m_nMapId3: usize = 0xC00; // int32[64]
                pub const m_nMapId4: usize = 0xD00; // int32[64]
                pub const m_nMapId5: usize = 0xE00; // int32[64]
                pub const m_nStartingSide0: usize = 0xF00; // int32[64]
                pub const m_nCurrentPhase: usize = 0x1000; // int32
                pub const m_nPhaseStartTick: usize = 0x1004; // int32
                pub const m_nPhaseDurationTicks: usize = 0x1008; // int32
                pub const m_nPostDataUpdateTick: usize = 0x100C; // int32
                pub const m_bDisabledHud: usize = 0x1010; // bool
            }
            // Parent: None
            // Fields count: 0
            pub mod CPlayerSprayDecalRenderHelper {
            }
            // Parent: C_CSGO_MapPreviewCameraPath
            // Fields count: 7
            pub mod C_CSGO_TeamPreviewCamera {
                pub const m_nVariant: usize = 0x730; // int32
                pub const m_bDofEnabled: usize = 0x734; // bool
                pub const m_flDofNearBlurry: usize = 0x738; // float32
                pub const m_flDofNearCrisp: usize = 0x73C; // float32
                pub const m_flDofFarCrisp: usize = 0x740; // float32
                pub const m_flDofFarBlurry: usize = 0x744; // float32
                pub const m_flDofTiltToGround: usize = 0x748; // float32
            }
            // Parent: C_CSGO_TeamPreviewCamera
            // Fields count: 0
            pub mod C_CSGO_TeamSelectCamera {
            }
            // Parent: C_CSGO_TeamPreviewCamera
            // Fields count: 0
            pub mod C_CSGO_TerroristTeamIntroCamera {
            }
            // Parent: C_CSGO_TeamPreviewCamera
            // Fields count: 0
            pub mod C_CSGO_TerroristWingmanIntroCamera {
            }
            // Parent: C_CSGO_TeamPreviewCamera
            // Fields count: 0
            pub mod C_CSGO_CounterTerroristTeamIntroCamera {
            }
            // Parent: C_CSGO_TeamPreviewCamera
            // Fields count: 0
            pub mod C_CSGO_CounterTerroristWingmanIntroCamera {
            }
            // Parent: C_CSGO_TeamPreviewCamera
            // Fields count: 0
            pub mod C_CSGO_EndOfMatchCamera {
            }
            // Parent: C_CSGO_TeamPreviewCharacterPosition
            // Fields count: 0
            pub mod C_CSGO_EndOfMatchCharacterPosition {
            }
            // Parent: C_BaseEntity
            // Fields count: 0
            pub mod C_CSGO_EndOfMatchLineupEndpoint {
            }
            // Parent: C_CSGO_EndOfMatchLineupEndpoint
            // Fields count: 0
            pub mod C_CSGO_EndOfMatchLineupStart {
            }
            // Parent: C_CSGO_EndOfMatchLineupEndpoint
            // Fields count: 0
            pub mod C_CSGO_EndOfMatchLineupEnd {
            }
            // Parent: C_BaseEntity
            // Fields count: 2
            pub mod C_CsmFovOverride {
                pub const m_cameraName: usize = 0x6D0; // CUtlString
                pub const m_flCsmFovOverrideValue: usize = 0x6D8; // float32
            }
            // Parent: C_BaseEntity
            // Fields count: 0
            pub mod C_PointEntity {
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
            pub mod C_EnvCombinedLightProbeVolume {
                pub const m_Color: usize = 0x1728; // Color
                pub const m_flBrightness: usize = 0x172C; // float32
                pub const m_hCubemapTexture: usize = 0x1730; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_bCustomCubemapTexture: usize = 0x1738; // bool
                pub const m_hLightProbeTexture: usize = 0x1740; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_hLightProbeDirectLightIndicesTexture: usize = 0x1748; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_hLightProbeDirectLightScalarsTexture: usize = 0x1750; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_hLightProbeDirectLightShadowsTexture: usize = 0x1758; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_vBoxMins: usize = 0x1760; // Vector
                pub const m_vBoxMaxs: usize = 0x176C; // Vector
                pub const m_bMoveable: usize = 0x1778; // bool
                pub const m_nHandshake: usize = 0x177C; // int32
                pub const m_nEnvCubeMapArrayIndex: usize = 0x1780; // int32
                pub const m_nPriority: usize = 0x1784; // int32
                pub const m_bStartDisabled: usize = 0x1788; // bool
                pub const m_flEdgeFadeDist: usize = 0x178C; // float32
                pub const m_vEdgeFadeDists: usize = 0x1790; // Vector
                pub const m_nLightProbeSizeX: usize = 0x179C; // int32
                pub const m_nLightProbeSizeY: usize = 0x17A0; // int32
                pub const m_nLightProbeSizeZ: usize = 0x17A4; // int32
                pub const m_nLightProbeAtlasX: usize = 0x17A8; // int32
                pub const m_nLightProbeAtlasY: usize = 0x17AC; // int32
                pub const m_nLightProbeAtlasZ: usize = 0x17B0; // int32
                pub const m_bEnabled: usize = 0x17C9; // bool
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
            pub mod C_EnvCubemap {
                pub const m_hCubemapTexture: usize = 0x750; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_bCustomCubemapTexture: usize = 0x758; // bool
                pub const m_flInfluenceRadius: usize = 0x75C; // float32
                pub const m_vBoxProjectMins: usize = 0x760; // Vector
                pub const m_vBoxProjectMaxs: usize = 0x76C; // Vector
                pub const m_bMoveable: usize = 0x778; // bool
                pub const m_nHandshake: usize = 0x77C; // int32
                pub const m_nEnvCubeMapArrayIndex: usize = 0x780; // int32
                pub const m_nPriority: usize = 0x784; // int32
                pub const m_flEdgeFadeDist: usize = 0x788; // float32
                pub const m_vEdgeFadeDists: usize = 0x78C; // Vector
                pub const m_flDiffuseScale: usize = 0x798; // float32
                pub const m_bStartDisabled: usize = 0x79C; // bool
                pub const m_bDefaultEnvMap: usize = 0x79D; // bool
                pub const m_bDefaultSpecEnvMap: usize = 0x79E; // bool
                pub const m_bIndoorCubeMap: usize = 0x79F; // bool
                pub const m_bCopyDiffuseFromDefaultCubemap: usize = 0x7A0; // bool
                pub const m_bEnabled: usize = 0x7B0; // bool
            }
            // Parent: C_EnvCubemap
            // Fields count: 0
            pub mod C_EnvCubemapBox {
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
            pub mod C_EnvCubemapFog {
                pub const m_flEndDistance: usize = 0x6D0; // float32
                pub const m_flStartDistance: usize = 0x6D4; // float32
                pub const m_flFogFalloffExponent: usize = 0x6D8; // float32
                pub const m_bHeightFogEnabled: usize = 0x6DC; // bool
                pub const m_flFogHeightWidth: usize = 0x6E0; // float32
                pub const m_flFogHeightEnd: usize = 0x6E4; // float32
                pub const m_flFogHeightStart: usize = 0x6E8; // float32
                pub const m_flFogHeightExponent: usize = 0x6EC; // float32
                pub const m_flLODBias: usize = 0x6F0; // float32
                pub const m_bActive: usize = 0x6F4; // bool
                pub const m_bStartDisabled: usize = 0x6F5; // bool
                pub const m_flFogMaxOpacity: usize = 0x6F8; // float32
                pub const m_nCubemapSourceType: usize = 0x6FC; // int32
                pub const m_hSkyMaterial: usize = 0x700; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_iszSkyEntity: usize = 0x708; // CUtlSymbolLarge
                pub const m_hFogCubemapTexture: usize = 0x710; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_bHasHeightFogEnd: usize = 0x718; // bool
                pub const m_bFirstTime: usize = 0x719; // bool
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
            pub mod C_GradientFog {
                pub const m_hGradientFogTexture: usize = 0x6D0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_flFogStartDistance: usize = 0x6D8; // float32
                pub const m_flFogEndDistance: usize = 0x6DC; // float32
                pub const m_bHeightFogEnabled: usize = 0x6E0; // bool
                pub const m_flFogStartHeight: usize = 0x6E4; // float32
                pub const m_flFogEndHeight: usize = 0x6E8; // float32
                pub const m_flFarZ: usize = 0x6EC; // float32
                pub const m_flFogMaxOpacity: usize = 0x6F0; // float32
                pub const m_flFogFalloffExponent: usize = 0x6F4; // float32
                pub const m_flFogVerticalExponent: usize = 0x6F8; // float32
                pub const m_fogColor: usize = 0x6FC; // Color
                pub const m_flFogStrength: usize = 0x700; // float32
                pub const m_flFadeTime: usize = 0x704; // float32
                pub const m_bStartDisabled: usize = 0x708; // bool
                pub const m_bIsEnabled: usize = 0x709; // bool
                pub const m_bGradientFogNeedsTextures: usize = 0x70A; // bool
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
            pub mod C_EnvLightProbeVolume {
                pub const m_hLightProbeTexture: usize = 0x16A8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_hLightProbeDirectLightIndicesTexture: usize = 0x16B0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_hLightProbeDirectLightScalarsTexture: usize = 0x16B8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_hLightProbeDirectLightShadowsTexture: usize = 0x16C0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_vBoxMins: usize = 0x16C8; // Vector
                pub const m_vBoxMaxs: usize = 0x16D4; // Vector
                pub const m_bMoveable: usize = 0x16E0; // bool
                pub const m_nHandshake: usize = 0x16E4; // int32
                pub const m_nPriority: usize = 0x16E8; // int32
                pub const m_bStartDisabled: usize = 0x16EC; // bool
                pub const m_nLightProbeSizeX: usize = 0x16F0; // int32
                pub const m_nLightProbeSizeY: usize = 0x16F4; // int32
                pub const m_nLightProbeSizeZ: usize = 0x16F8; // int32
                pub const m_nLightProbeAtlasX: usize = 0x16FC; // int32
                pub const m_nLightProbeAtlasY: usize = 0x1700; // int32
                pub const m_nLightProbeAtlasZ: usize = 0x1704; // int32
                pub const m_bEnabled: usize = 0x1711; // bool
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
            pub mod C_PlayerVisibility {
                pub const m_flVisibilityStrength: usize = 0x6D0; // float32
                pub const m_flFogDistanceMultiplier: usize = 0x6D4; // float32
                pub const m_flFogMaxDensityMultiplier: usize = 0x6D8; // float32
                pub const m_flFadeTime: usize = 0x6DC; // float32
                pub const m_bStartDisabled: usize = 0x6E0; // bool
                pub const m_bIsEnabled: usize = 0x6E1; // bool
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
            pub mod C_TonemapController2 {
                pub const m_flAutoExposureMin: usize = 0x6D0; // float32
                pub const m_flAutoExposureMax: usize = 0x6D4; // float32
                pub const m_flTonemapPercentTarget: usize = 0x6D8; // float32
                pub const m_flTonemapPercentBrightPixels: usize = 0x6DC; // float32
                pub const m_flTonemapMinAvgLum: usize = 0x6E0; // float32
                pub const m_flExposureAdaptationSpeedUp: usize = 0x6E4; // float32
                pub const m_flExposureAdaptationSpeedDown: usize = 0x6E8; // float32
                pub const m_flTonemapEVSmoothingRange: usize = 0x6EC; // float32
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
            pub mod C_EnvVolumetricFogController {
                pub const m_flScattering: usize = 0x6D0; // float32
                pub const m_flAnisotropy: usize = 0x6D4; // float32
                pub const m_flFadeSpeed: usize = 0x6D8; // float32
                pub const m_flDrawDistance: usize = 0x6DC; // float32
                pub const m_flFadeInStart: usize = 0x6E0; // float32
                pub const m_flFadeInEnd: usize = 0x6E4; // float32
                pub const m_flIndirectStrength: usize = 0x6E8; // float32
                pub const m_nIndirectTextureDimX: usize = 0x6EC; // int32
                pub const m_nIndirectTextureDimY: usize = 0x6F0; // int32
                pub const m_nIndirectTextureDimZ: usize = 0x6F4; // int32
                pub const m_vBoxMins: usize = 0x6F8; // Vector
                pub const m_vBoxMaxs: usize = 0x704; // Vector
                pub const m_bActive: usize = 0x710; // bool
                pub const m_flStartAnisoTime: usize = 0x714; // GameTime_t
                pub const m_flStartScatterTime: usize = 0x718; // GameTime_t
                pub const m_flStartDrawDistanceTime: usize = 0x71C; // GameTime_t
                pub const m_flStartAnisotropy: usize = 0x720; // float32
                pub const m_flStartScattering: usize = 0x724; // float32
                pub const m_flStartDrawDistance: usize = 0x728; // float32
                pub const m_flDefaultAnisotropy: usize = 0x72C; // float32
                pub const m_flDefaultScattering: usize = 0x730; // float32
                pub const m_flDefaultDrawDistance: usize = 0x734; // float32
                pub const m_bStartDisabled: usize = 0x738; // bool
                pub const m_bEnableIndirect: usize = 0x739; // bool
                pub const m_bIsMaster: usize = 0x73A; // bool
                pub const m_hFogIndirectTexture: usize = 0x740; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_nForceRefreshCount: usize = 0x748; // int32
                pub const m_bFirstTime: usize = 0x74C; // bool
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
            pub mod C_EnvVolumetricFogVolume {
                pub const m_bActive: usize = 0x6D0; // bool
                pub const m_vBoxMins: usize = 0x6D4; // Vector
                pub const m_vBoxMaxs: usize = 0x6E0; // Vector
                pub const m_bStartDisabled: usize = 0x6EC; // bool
                pub const m_flStrength: usize = 0x6F0; // float32
                pub const m_nFalloffShape: usize = 0x6F4; // int32
                pub const m_flFalloffExponent: usize = 0x6F8; // float32
            }
            // Parent: C_BaseEntity
            // Fields count: 3
            //
            // Metadata:
            // NetworkVarNames: m_fog (fogparams_t)
            pub mod C_FogController {
                pub const m_fog: usize = 0x6D0; // fogparams_t
                pub const m_bUseAngles: usize = 0x738; // bool
                pub const m_iChangedVariables: usize = 0x73C; // int32
            }
            // Parent: C_PointEntity
            // Fields count: 0
            pub mod CInfoTarget {
            }
            // Parent: C_PointEntity
            // Fields count: 0
            pub mod CInfoParticleTarget {
            }
            // Parent: C_BaseEntity
            // Fields count: 3
            //
            // Metadata:
            // NetworkVarNames: m_nMode (int)
            // NetworkVarNames: m_vBoxSize (Vector)
            // NetworkVarNames: m_bEnabled (bool)
            pub mod C_InfoVisibilityBox {
                pub const m_nMode: usize = 0x6D4; // int32
                pub const m_vBoxSize: usize = 0x6D8; // Vector
                pub const m_bEnabled: usize = 0x6E4; // bool
            }
            // Parent: C_BaseEntity
            // Fields count: 8
            //
            // Metadata:
            // NetworkVarNames: m_worldName (string_t)
            // NetworkVarNames: m_layerName (string_t)
            // NetworkVarNames: m_bWorldLayerVisible (bool)
            // NetworkVarNames: m_bEntitiesSpawned (bool)
            pub mod CInfoWorldLayer {
                pub const m_pOutputOnEntitiesSpawned: usize = 0x6D0; // CEntityIOOutput
                pub const m_worldName: usize = 0x6F8; // CUtlSymbolLarge
                pub const m_layerName: usize = 0x700; // CUtlSymbolLarge
                pub const m_bWorldLayerVisible: usize = 0x708; // bool
                pub const m_bEntitiesSpawned: usize = 0x709; // bool
                pub const m_bCreateAsChildSpawnGroup: usize = 0x70A; // bool
                pub const m_hLayerSpawnGroup: usize = 0x70C; // uint32
                pub const m_bWorldLayerActuallyVisible: usize = 0x710; // bool
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
            pub mod C_PointCamera {
                pub const m_FOV: usize = 0x6D0; // float32
                pub const m_Resolution: usize = 0x6D4; // float32
                pub const m_bFogEnable: usize = 0x6D8; // bool
                pub const m_FogColor: usize = 0x6D9; // Color
                pub const m_flFogStart: usize = 0x6E0; // float32
                pub const m_flFogEnd: usize = 0x6E4; // float32
                pub const m_flFogMaxDensity: usize = 0x6E8; // float32
                pub const m_bActive: usize = 0x6EC; // bool
                pub const m_bUseScreenAspectRatio: usize = 0x6ED; // bool
                pub const m_flAspectRatio: usize = 0x6F0; // float32
                pub const m_bNoSky: usize = 0x6F4; // bool
                pub const m_fBrightness: usize = 0x6F8; // float32
                pub const m_flZFar: usize = 0x6FC; // float32
                pub const m_flZNear: usize = 0x700; // float32
                pub const m_bCanHLTVUse: usize = 0x704; // bool
                pub const m_bDofEnabled: usize = 0x705; // bool
                pub const m_flDofNearBlurry: usize = 0x708; // float32
                pub const m_flDofNearCrisp: usize = 0x70C; // float32
                pub const m_flDofFarCrisp: usize = 0x710; // float32
                pub const m_flDofFarBlurry: usize = 0x714; // float32
                pub const m_flDofTiltToGround: usize = 0x718; // float32
                pub const m_TargetFOV: usize = 0x71C; // float32
                pub const m_DegreesPerSecond: usize = 0x720; // float32
                pub const m_bIsOn: usize = 0x724; // bool
                pub const m_pNext: usize = 0x728; // C_PointCamera*
            }
            // Parent: C_PointCamera
            // Fields count: 1
            pub mod C_PointCameraVFOV {
                pub const m_flVerticalFOV: usize = 0x730; // float32
            }
            // Parent: CLogicalEntity
            // Fields count: 12
            pub mod CPointTemplate {
                pub const m_iszWorldName: usize = 0x6D0; // CUtlSymbolLarge
                pub const m_iszSource2EntityLumpName: usize = 0x6D8; // CUtlSymbolLarge
                pub const m_iszEntityFilterName: usize = 0x6E0; // CUtlSymbolLarge
                pub const m_flTimeoutInterval: usize = 0x6E8; // float32
                pub const m_bAsynchronouslySpawnEntities: usize = 0x6EC; // bool
                pub const m_pOutputOnSpawned: usize = 0x6F0; // CEntityIOOutput
                pub const m_clientOnlyEntityBehavior: usize = 0x718; // PointTemplateClientOnlyEntityBehavior_t
                pub const m_ownerSpawnGroupType: usize = 0x71C; // PointTemplateOwnerSpawnGroupType_t
                pub const m_createdSpawnGroupHandles: usize = 0x720; // CUtlVector<uint32>
                pub const m_SpawnedEntityHandles: usize = 0x738; // CUtlVector<CEntityHandle>
                pub const m_ScriptSpawnCallback: usize = 0x750; // HSCRIPT
                pub const m_ScriptCallbackScope: usize = 0x758; // HSCRIPT
            }
            // Parent: C_BaseEntity
            // Fields count: 4
            //
            // Metadata:
            // NetworkVarNames: m_bDisabled (bool)
            // NetworkVarNames: m_iszSoundAreaType (string_t)
            // NetworkVarNames: m_vPos (Vector)
            pub mod C_SoundAreaEntityBase {
                pub const m_bDisabled: usize = 0x6D0; // bool
                pub const m_bWasEnabled: usize = 0x6D8; // bool
                pub const m_iszSoundAreaType: usize = 0x6E0; // CUtlSymbolLarge
                pub const m_vPos: usize = 0x6E8; // Vector
            }
            // Parent: C_SoundAreaEntityBase
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_flRadius (float)
            pub mod C_SoundAreaEntitySphere {
                pub const m_flRadius: usize = 0x6F4; // float32
            }
            // Parent: C_SoundAreaEntityBase
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_vMin (Vector)
            // NetworkVarNames: m_vMax (Vector)
            pub mod C_SoundAreaEntityOrientedBox {
                pub const m_vMin: usize = 0x6F4; // Vector
                pub const m_vMax: usize = 0x700; // Vector
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
            pub mod C_Team {
                pub const m_aPlayerControllers: usize = 0x6D0; // C_NetworkUtlVectorBase<CHandle<CBasePlayerController>>
                pub const m_aPlayers: usize = 0x6E8; // C_NetworkUtlVectorBase<CHandle<C_BasePlayerPawn>>
                pub const m_iScore: usize = 0x700; // int32
                pub const m_szTeamname: usize = 0x704; // char[129]
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
            pub mod CBasePlayerController {
                pub const m_nFinalPredictedTick: usize = 0x6D8; // int32
                pub const m_CommandContext: usize = 0x6E0; // C_CommandContext
                pub const m_nInButtonsWhichAreToggles: usize = 0x778; // uint64
                pub const m_nTickBase: usize = 0x780; // uint32
                pub const m_hPawn: usize = 0x784; // CHandle<C_BasePlayerPawn>
                pub const m_hPredictedPawn: usize = 0x788; // CHandle<C_BasePlayerPawn>
                pub const m_nSplitScreenSlot: usize = 0x78C; // CSplitScreenSlot
                pub const m_hSplitOwner: usize = 0x790; // CHandle<CBasePlayerController>
                pub const m_hSplitScreenPlayers: usize = 0x798; // CUtlVector<CHandle<CBasePlayerController>>
                pub const m_bIsHLTV: usize = 0x7B0; // bool
                pub const m_iConnected: usize = 0x7B4; // PlayerConnectedState
                pub const m_iszPlayerName: usize = 0x7B8; // char[128]
                pub const m_steamID: usize = 0x840; // uint64
                pub const m_bIsLocalPlayerController: usize = 0x848; // bool
                pub const m_iDesiredFOV: usize = 0x84C; // uint32
            }
            // Parent: None
            // Fields count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CBasePlayerVData {
                pub const m_sModelName: usize = 0x28; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                pub const m_flHeadDamageMultiplier: usize = 0x108; // CSkillFloat
                pub const m_flChestDamageMultiplier: usize = 0x118; // CSkillFloat
                pub const m_flStomachDamageMultiplier: usize = 0x128; // CSkillFloat
                pub const m_flArmDamageMultiplier: usize = 0x138; // CSkillFloat
                pub const m_flLegDamageMultiplier: usize = 0x148; // CSkillFloat
                pub const m_flHoldBreathTime: usize = 0x158; // float32
                pub const m_flDrowningDamageInterval: usize = 0x15C; // float32
                pub const m_nDrowningDamageInitial: usize = 0x160; // int32
                pub const m_nDrowningDamageMax: usize = 0x164; // int32
                pub const m_nWaterSpeed: usize = 0x168; // int32
                pub const m_flUseRange: usize = 0x16C; // float32
                pub const m_flUseAngleTolerance: usize = 0x170; // float32
                pub const m_flCrouchTime: usize = 0x174; // float32
            }
            // Parent: None
            // Fields count: 20
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CBasePlayerWeaponVData {
                pub const m_szWorldModel: usize = 0x28; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                pub const m_bBuiltRightHanded: usize = 0x108; // bool
                pub const m_bAllowFlipping: usize = 0x109; // bool
                pub const m_sMuzzleAttachment: usize = 0x110; // CUtlString
                pub const m_szMuzzleFlashParticle: usize = 0x118; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                pub const m_iFlags: usize = 0x1F8; // ItemFlagTypes_t
                pub const m_nPrimaryAmmoType: usize = 0x1F9; // AmmoIndex_t
                pub const m_nSecondaryAmmoType: usize = 0x1FA; // AmmoIndex_t
                pub const m_iMaxClip1: usize = 0x1FC; // int32
                pub const m_iMaxClip2: usize = 0x200; // int32
                pub const m_iDefaultClip1: usize = 0x204; // int32
                pub const m_iDefaultClip2: usize = 0x208; // int32
                pub const m_iWeight: usize = 0x20C; // int32
                pub const m_bAutoSwitchTo: usize = 0x210; // bool
                pub const m_bAutoSwitchFrom: usize = 0x211; // bool
                pub const m_iRumbleEffect: usize = 0x214; // RumbleEffect_t
                pub const m_bLinkedCooldowns: usize = 0x218; // bool
                pub const m_aShootSounds: usize = 0x220; // CUtlMap<WeaponSound_t,CSoundEventName>
                pub const m_iSlot: usize = 0x240; // int32
                pub const m_iPosition: usize = 0x244; // int32
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
            pub mod CBaseAnimGraphController {
                pub const m_animGraphNetworkedVars: usize = 0x18; // CAnimGraphNetworkedVariables
                pub const m_bSequenceFinished: usize = 0x14A8; // bool
                pub const m_flSoundSyncTime: usize = 0x14AC; // float32
                pub const m_hSequence: usize = 0x14B0; // HSequence
                pub const m_flSeqStartTime: usize = 0x14B4; // GameTime_t
                pub const m_flSeqFixedCycle: usize = 0x14B8; // float32
                pub const m_nAnimLoopMode: usize = 0x14BC; // AnimLoopMode_t
                pub const m_flPlaybackRate: usize = 0x14C0; // CNetworkedQuantizedFloat
                pub const m_nNotifyState: usize = 0x14CC; // SequenceFinishNotifyState_t
                pub const m_bNetworkedAnimationInputsChanged: usize = 0x14CE; // bool
                pub const m_bNetworkedSequenceChanged: usize = 0x14CF; // bool
                pub const m_bLastUpdateSkipped: usize = 0x14D0; // bool
                pub const m_flPrevAnimUpdateTime: usize = 0x14D4; // GameTime_t
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
            pub mod C_BaseModelEntity {
                pub const m_CRenderComponent: usize = 0x9A0; // CRenderComponent*
                pub const m_CHitboxComponent: usize = 0x9A8; // CHitboxComponent
                pub const m_bInitModelEffects: usize = 0x9F0; // bool
                pub const m_bIsStaticProp: usize = 0x9F1; // bool
                pub const m_nLastAddDecal: usize = 0x9F4; // int32
                pub const m_nDecalsAdded: usize = 0x9F8; // int32
                pub const m_iOldHealth: usize = 0x9FC; // int32
                pub const m_nRenderMode: usize = 0xA00; // RenderMode_t
                pub const m_nRenderFX: usize = 0xA01; // RenderFx_t
                pub const m_bAllowFadeInView: usize = 0xA02; // bool
                pub const m_clrRender: usize = 0xA03; // Color
                pub const m_vecRenderAttributes: usize = 0xA08; // C_UtlVectorEmbeddedNetworkVar<EntityRenderAttribute_t>
                pub const m_bRenderToCubemaps: usize = 0xA70; // bool
                pub const m_Collision: usize = 0xA78; // CCollisionProperty
                pub const m_Glow: usize = 0xB28; // CGlowProperty
                pub const m_flGlowBackfaceMult: usize = 0xB80; // float32
                pub const m_fadeMinDist: usize = 0xB84; // float32
                pub const m_fadeMaxDist: usize = 0xB88; // float32
                pub const m_flFadeScale: usize = 0xB8C; // float32
                pub const m_flShadowStrength: usize = 0xB90; // float32
                pub const m_nObjectCulling: usize = 0xB94; // uint8
                pub const m_nAddDecal: usize = 0xB98; // int32
                pub const m_vDecalPosition: usize = 0xB9C; // Vector
                pub const m_vDecalForwardAxis: usize = 0xBA8; // Vector
                pub const m_flDecalHealBloodRate: usize = 0xBB4; // float32
                pub const m_flDecalHealHeightRate: usize = 0xBB8; // float32
                pub const m_ConfigEntitiesToPropagateMaterialDecalsTo: usize = 0xBC0; // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
                pub const m_vecViewOffset: usize = 0xBD8; // CNetworkViewOffsetVector
                pub const m_pClientAlphaProperty: usize = 0xC08; // CClientAlphaProperty*
                pub const m_ClientOverrideTint: usize = 0xC10; // Color
                pub const m_bUseClientOverrideTint: usize = 0xC14; // bool
            }
            // Parent: C_BaseModelEntity
            // Fields count: 0
            pub mod CServerOnlyModelEntity {
            }
            // Parent: C_BaseModelEntity
            // Fields count: 0
            pub mod C_ModelPointEntity {
            }
            // Parent: CLogicalEntity
            // Fields count: 7
            pub mod CLogicRelay {
                pub const m_OnTrigger: usize = 0x6D0; // CEntityIOOutput
                pub const m_OnSpawn: usize = 0x6F8; // CEntityIOOutput
                pub const m_bDisabled: usize = 0x720; // bool
                pub const m_bWaitForRefire: usize = 0x721; // bool
                pub const m_bTriggerOnce: usize = 0x722; // bool
                pub const m_bFastRetrigger: usize = 0x723; // bool
                pub const m_bPassthoughCaller: usize = 0x724; // bool
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
            pub mod C_ParticleSystem {
                pub const m_szSnapshotFileName: usize = 0xC50; // char[512]
                pub const m_bActive: usize = 0xE50; // bool
                pub const m_bFrozen: usize = 0xE51; // bool
                pub const m_flFreezeTransitionDuration: usize = 0xE54; // float32
                pub const m_nStopType: usize = 0xE58; // int32
                pub const m_bAnimateDuringGameplayPause: usize = 0xE5C; // bool
                pub const m_iEffectIndex: usize = 0xE60; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                pub const m_flStartTime: usize = 0xE68; // GameTime_t
                pub const m_flPreSimTime: usize = 0xE6C; // float32
                pub const m_vServerControlPoints: usize = 0xE70; // Vector[4]
                pub const m_iServerControlPointAssignments: usize = 0xEA0; // uint8[4]
                pub const m_hControlPointEnts: usize = 0xEA4; // CHandle<C_BaseEntity>[64]
                pub const m_bNoSave: usize = 0xFA4; // bool
                pub const m_bNoFreeze: usize = 0xFA5; // bool
                pub const m_bNoRamp: usize = 0xFA6; // bool
                pub const m_bStartActive: usize = 0xFA7; // bool
                pub const m_iszEffectName: usize = 0xFA8; // CUtlSymbolLarge
                pub const m_iszControlPointNames: usize = 0xFB0; // CUtlSymbolLarge[64]
                pub const m_nDataCP: usize = 0x11B0; // int32
                pub const m_vecDataCPValue: usize = 0x11B4; // Vector
                pub const m_nTintCP: usize = 0x11C0; // int32
                pub const m_clrTint: usize = 0x11C4; // Color
                pub const m_bOldActive: usize = 0x11E8; // bool
                pub const m_bOldFrozen: usize = 0x11E9; // bool
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
            pub mod C_PathParticleRope {
                pub const m_bStartActive: usize = 0x6D0; // bool
                pub const m_flMaxSimulationTime: usize = 0x6D4; // float32
                pub const m_iszEffectName: usize = 0x6D8; // CUtlSymbolLarge
                pub const m_PathNodes_Name: usize = 0x6E0; // CUtlVector<CUtlSymbolLarge>
                pub const m_flParticleSpacing: usize = 0x6F8; // float32
                pub const m_flSlack: usize = 0x6FC; // float32
                pub const m_flRadius: usize = 0x700; // float32
                pub const m_ColorTint: usize = 0x704; // Color
                pub const m_nEffectState: usize = 0x708; // int32
                pub const m_iEffectIndex: usize = 0x710; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                pub const m_PathNodes_Position: usize = 0x718; // C_NetworkUtlVectorBase<Vector>
                pub const m_PathNodes_TangentIn: usize = 0x730; // C_NetworkUtlVectorBase<Vector>
                pub const m_PathNodes_TangentOut: usize = 0x748; // C_NetworkUtlVectorBase<Vector>
                pub const m_PathNodes_Color: usize = 0x760; // C_NetworkUtlVectorBase<Vector>
                pub const m_PathNodes_PinEnabled: usize = 0x778; // C_NetworkUtlVectorBase<bool>
                pub const m_PathNodes_RadiusScale: usize = 0x790; // C_NetworkUtlVectorBase<float32>
            }
            // Parent: C_PathParticleRope
            // Fields count: 0
            pub mod C_PathParticleRopeAlias_path_particle_rope_clientside {
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
            pub mod C_DynamicLight {
                pub const m_Flags: usize = 0xC50; // uint8
                pub const m_LightStyle: usize = 0xC51; // uint8
                pub const m_Radius: usize = 0xC54; // float32
                pub const m_Exponent: usize = 0xC58; // int32
                pub const m_InnerAngle: usize = 0xC5C; // float32
                pub const m_OuterAngle: usize = 0xC60; // float32
                pub const m_SpotRadius: usize = 0xC64; // float32
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
            pub mod C_EnvScreenOverlay {
                pub const m_iszOverlayNames: usize = 0x6D0; // CUtlSymbolLarge[10]
                pub const m_flOverlayTimes: usize = 0x720; // float32[10]
                pub const m_flStartTime: usize = 0x748; // GameTime_t
                pub const m_iDesiredOverlay: usize = 0x74C; // int32
                pub const m_bIsActive: usize = 0x750; // bool
                pub const m_bWasActive: usize = 0x751; // bool
                pub const m_iCachedDesiredOverlay: usize = 0x754; // int32
                pub const m_iCurrentOverlay: usize = 0x758; // int32
                pub const m_flCurrentOverlayTime: usize = 0x75C; // GameTime_t
            }
            // Parent: C_BaseModelEntity
            // Fields count: 3
            pub mod C_FuncTrackTrain {
                pub const m_nLongAxis: usize = 0xC50; // int32
                pub const m_flRadius: usize = 0xC54; // float32
                pub const m_flLineLength: usize = 0xC58; // float32
            }
            // Parent: CGlowOverlay
            // Fields count: 7
            pub mod C_LightGlowOverlay {
                pub const m_vecOrigin: usize = 0xCC; // Vector
                pub const m_vecDirection: usize = 0xD8; // Vector
                pub const m_nMinDist: usize = 0xE4; // int32
                pub const m_nMaxDist: usize = 0xE8; // int32
                pub const m_nOuterMaxDist: usize = 0xEC; // int32
                pub const m_bOneSided: usize = 0xF0; // bool
                pub const m_bModulateByDot: usize = 0xF1; // bool
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
            pub mod C_LightGlow {
                pub const m_nHorizontalSize: usize = 0xC50; // uint32
                pub const m_nVerticalSize: usize = 0xC54; // uint32
                pub const m_nMinDist: usize = 0xC58; // uint32
                pub const m_nMaxDist: usize = 0xC5C; // uint32
                pub const m_nOuterMaxDist: usize = 0xC60; // uint32
                pub const m_flGlowProxySize: usize = 0xC64; // float32
                pub const m_flHDRColorScale: usize = 0xC68; // float32
                pub const m_Glow: usize = 0xC70; // C_LightGlowOverlay
            }
            // Parent: C_BaseEntity
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_iCurrentMaxRagdollCount (int8)
            pub mod C_RagdollManager {
                pub const m_iCurrentMaxRagdollCount: usize = 0x6D0; // int8
            }
            // Parent: C_BaseModelEntity
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_flLightScale (float32)
            // NetworkVarNames: m_Radius (float32)
            pub mod C_SpotlightEnd {
                pub const m_flLightScale: usize = 0xC50; // float32
                pub const m_Radius: usize = 0xC54; // float32
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
            pub mod C_PointValueRemapper {
                pub const m_bDisabled: usize = 0x6D0; // bool
                pub const m_bDisabledOld: usize = 0x6D1; // bool
                pub const m_bUpdateOnClient: usize = 0x6D2; // bool
                pub const m_nInputType: usize = 0x6D4; // ValueRemapperInputType_t
                pub const m_hRemapLineStart: usize = 0x6D8; // CHandle<C_BaseEntity>
                pub const m_hRemapLineEnd: usize = 0x6DC; // CHandle<C_BaseEntity>
                pub const m_flMaximumChangePerSecond: usize = 0x6E0; // float32
                pub const m_flDisengageDistance: usize = 0x6E4; // float32
                pub const m_flEngageDistance: usize = 0x6E8; // float32
                pub const m_bRequiresUseKey: usize = 0x6EC; // bool
                pub const m_nOutputType: usize = 0x6F0; // ValueRemapperOutputType_t
                pub const m_hOutputEntities: usize = 0x6F8; // C_NetworkUtlVectorBase<CHandle<C_BaseEntity>>
                pub const m_nHapticsType: usize = 0x710; // ValueRemapperHapticsType_t
                pub const m_nMomentumType: usize = 0x714; // ValueRemapperMomentumType_t
                pub const m_flMomentumModifier: usize = 0x718; // float32
                pub const m_flSnapValue: usize = 0x71C; // float32
                pub const m_flCurrentMomentum: usize = 0x720; // float32
                pub const m_nRatchetType: usize = 0x724; // ValueRemapperRatchetType_t
                pub const m_flRatchetOffset: usize = 0x728; // float32
                pub const m_flInputOffset: usize = 0x72C; // float32
                pub const m_bEngaged: usize = 0x730; // bool
                pub const m_bFirstUpdate: usize = 0x731; // bool
                pub const m_flPreviousValue: usize = 0x734; // float32
                pub const m_flPreviousUpdateTickTime: usize = 0x738; // GameTime_t
                pub const m_vecPreviousTestPoint: usize = 0x73C; // Vector
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
            pub mod C_PointWorldText {
                pub const m_bForceRecreateNextUpdate: usize = 0xC58; // bool
                pub const m_messageText: usize = 0xC68; // char[512]
                pub const m_FontName: usize = 0xE68; // char[64]
                pub const m_bEnabled: usize = 0xEA8; // bool
                pub const m_bFullbright: usize = 0xEA9; // bool
                pub const m_flWorldUnitsPerPx: usize = 0xEAC; // float32
                pub const m_flFontSize: usize = 0xEB0; // float32
                pub const m_flDepthOffset: usize = 0xEB4; // float32
                pub const m_Color: usize = 0xEB8; // Color
                pub const m_nJustifyHorizontal: usize = 0xEBC; // PointWorldTextJustifyHorizontal_t
                pub const m_nJustifyVertical: usize = 0xEC0; // PointWorldTextJustifyVertical_t
                pub const m_nReorientMode: usize = 0xEC4; // PointWorldTextReorientMode_t
            }
            // Parent: C_BaseEntity
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_Handle (CHandle< CBaseEntity>)
            // NetworkVarNames: m_bSendHandle (bool)
            pub mod C_HandleTest {
                pub const m_Handle: usize = 0x6D0; // CHandle<C_BaseEntity>
                pub const m_bSendHandle: usize = 0x6D4; // bool
            }
            // Parent: C_BaseEntity
            // Fields count: 0
            pub mod CClientScriptEntity {
            }
            // Parent: C_BaseEntity
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_EnvWindShared (CEnvWindShared)
            pub mod C_EnvWind {
                pub const m_EnvWindShared: usize = 0x6D0; // C_EnvWindShared
            }
            // Parent: C_BaseModelEntity
            // Fields count: 0
            pub mod C_BaseToggle {
            }
            // Parent: C_BaseToggle
            // Fields count: 3
            //
            // Metadata:
            // NetworkVarNames: m_glowEntity (CHandle< C_BaseModelEntity>)
            // NetworkVarNames: m_usable (bool)
            // NetworkVarNames: m_szDisplayText (string_t)
            pub mod C_BaseButton {
                pub const m_glowEntity: usize = 0xC50; // CHandle<C_BaseModelEntity>
                pub const m_usable: usize = 0xC54; // bool
                pub const m_szDisplayText: usize = 0xC58; // CUtlSymbolLarge
            }
            // Parent: C_BaseModelEntity
            // Fields count: 0
            pub mod C_PrecipitationBlocker {
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
            pub mod C_EntityDissolve {
                pub const m_flStartTime: usize = 0xC58; // GameTime_t
                pub const m_flFadeInStart: usize = 0xC5C; // float32
                pub const m_flFadeInLength: usize = 0xC60; // float32
                pub const m_flFadeOutModelStart: usize = 0xC64; // float32
                pub const m_flFadeOutModelLength: usize = 0xC68; // float32
                pub const m_flFadeOutStart: usize = 0xC6C; // float32
                pub const m_flFadeOutLength: usize = 0xC70; // float32
                pub const m_flNextSparkTime: usize = 0xC74; // GameTime_t
                pub const m_nDissolveType: usize = 0xC78; // EntityDisolveType_t
                pub const m_vDissolverOrigin: usize = 0xC7C; // Vector
                pub const m_nMagnitude: usize = 0xC88; // uint32
                pub const m_bCoreExplode: usize = 0xC8C; // bool
                pub const m_bLinkedToServerEnt: usize = 0xC8D; // bool
            }
            // Parent: C_ModelPointEntity
            // Fields count: 0
            pub mod C_EnvProjectedTexture {
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
            pub mod C_EnvDecal {
                pub const m_hDecalMaterial: usize = 0xC50; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_flWidth: usize = 0xC58; // float32
                pub const m_flHeight: usize = 0xC5C; // float32
                pub const m_flDepth: usize = 0xC60; // float32
                pub const m_nRenderOrder: usize = 0xC64; // uint32
                pub const m_bProjectOnWorld: usize = 0xC68; // bool
                pub const m_bProjectOnCharacters: usize = 0xC69; // bool
                pub const m_bProjectOnWater: usize = 0xC6A; // bool
                pub const m_flDepthSortBias: usize = 0xC6C; // float32
            }
            // Parent: CGlowOverlay
            // Fields count: 4
            pub mod CFireOverlay {
                pub const m_pOwner: usize = 0xD0; // C_FireSmoke*
                pub const m_vBaseColors: usize = 0xD8; // Vector[4]
                pub const m_flScale: usize = 0x108; // float32
                pub const m_nGUID: usize = 0x10C; // int32
            }
            // Parent: C_BaseModelEntity
            // Fields count: 0
            pub mod C_FuncBrush {
            }
            // Parent: C_FuncBrush
            // Fields count: 3
            //
            // Metadata:
            // NetworkVarNames: m_EffectName (string_t)
            // NetworkVarNames: m_bState (bool)
            pub mod C_FuncElectrifiedVolume {
                pub const m_nAmbientEffect: usize = 0xC50; // ParticleIndex_t
                pub const m_EffectName: usize = 0xC58; // CUtlSymbolLarge
                pub const m_bState: usize = 0xC60; // bool
            }
            // Parent: C_BaseModelEntity
            // Fields count: 0
            //
            // Metadata:
            // MNetworkOverride
            // MNetworkOverride
            pub mod C_FuncRotating {
            }
            // Parent: C_BaseModelEntity
            // Fields count: 0
            pub mod C_Breakable {
            }
            // Parent: C_Breakable
            // Fields count: 0
            pub mod C_PhysBox {
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
            pub mod C_RopeKeyframe {
                pub const m_LinksTouchingSomething: usize = 0xC58; // CBitVec<10>
                pub const m_nLinksTouchingSomething: usize = 0xC5C; // int32
                pub const m_bApplyWind: usize = 0xC60; // bool
                pub const m_fPrevLockedPoints: usize = 0xC64; // int32
                pub const m_iForcePointMoveCounter: usize = 0xC68; // int32
                pub const m_bPrevEndPointPos: usize = 0xC6C; // bool[2]
                pub const m_vPrevEndPointPos: usize = 0xC70; // Vector[2]
                pub const m_flCurScroll: usize = 0xC88; // float32
                pub const m_flScrollSpeed: usize = 0xC8C; // float32
                pub const m_RopeFlags: usize = 0xC90; // uint16
                pub const m_iRopeMaterialModelIndex: usize = 0xC98; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_LightValues: usize = 0xF10; // Vector[10]
                pub const m_nSegments: usize = 0xF88; // uint8
                pub const m_hStartPoint: usize = 0xF8C; // CHandle<C_BaseEntity>
                pub const m_hEndPoint: usize = 0xF90; // CHandle<C_BaseEntity>
                pub const m_iStartAttachment: usize = 0xF94; // AttachmentHandle_t
                pub const m_iEndAttachment: usize = 0xF95; // AttachmentHandle_t
                pub const m_Subdiv: usize = 0xF96; // uint8
                pub const m_RopeLength: usize = 0xF98; // int16
                pub const m_Slack: usize = 0xF9A; // int16
                pub const m_TextureScale: usize = 0xF9C; // float32
                pub const m_fLockedPoints: usize = 0xFA0; // uint8
                pub const m_nChangeCount: usize = 0xFA1; // uint8
                pub const m_Width: usize = 0xFA4; // float32
                pub const m_PhysicsDelegate: usize = 0xFA8; // C_RopeKeyframe::CPhysicsDelegate
                pub const m_hMaterial: usize = 0xFB8; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_TextureHeight: usize = 0xFC0; // int32
                pub const m_vecImpulse: usize = 0xFC4; // Vector
                pub const m_vecPreviousImpulse: usize = 0xFD0; // Vector
                pub const m_flCurrentGustTimer: usize = 0xFDC; // float32
                pub const m_flCurrentGustLifetime: usize = 0xFE0; // float32
                pub const m_flTimeToNextGust: usize = 0xFE4; // float32
                pub const m_vWindDir: usize = 0xFE8; // Vector
                pub const m_vColorMod: usize = 0xFF4; // Vector
                pub const m_vCachedEndPointAttachmentPos: usize = 0x1000; // Vector[2]
                pub const m_vCachedEndPointAttachmentAngle: usize = 0x1018; // QAngle[2]
                pub const m_bConstrainBetweenEndpoints: usize = 0x1030; // bool
                pub const m_bEndPointAttachmentPositionsDirty: usize = 0x0; // bitfield:1
                pub const m_bEndPointAttachmentAnglesDirty: usize = 0x0; // bitfield:1
                pub const m_bNewDataThisFrame: usize = 0x0; // bitfield:1
                pub const m_bPhysicsInitted: usize = 0x0; // bitfield:1
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
            pub mod C_SceneEntity {
                pub const m_bIsPlayingBack: usize = 0x6D8; // bool
                pub const m_bPaused: usize = 0x6D9; // bool
                pub const m_bMultiplayer: usize = 0x6DA; // bool
                pub const m_bAutogenerated: usize = 0x6DB; // bool
                pub const m_flForceClientTime: usize = 0x6DC; // float32
                pub const m_nSceneStringIndex: usize = 0x6E0; // uint16
                pub const m_bClientOnly: usize = 0x6E2; // bool
                pub const m_hOwner: usize = 0x6E4; // CHandle<C_BaseFlex>
                pub const m_hActorList: usize = 0x6E8; // C_NetworkUtlVectorBase<CHandle<C_BaseFlex>>
                pub const m_bWasPlaying: usize = 0x700; // bool
                pub const m_QueuedEvents: usize = 0x710; // CUtlVector<C_SceneEntity::QueuedEvents_t>
                pub const m_flCurrentTime: usize = 0x728; // float32
            }
            // Parent: CGlowOverlay
            // Fields count: 1
            pub mod C_SunGlowOverlay {
                pub const m_bModulateByDot: usize = 0xCC; // bool
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
            pub mod C_Sun {
                pub const m_fxSSSunFlareEffectIndex: usize = 0xC50; // ParticleIndex_t
                pub const m_fxSunFlareEffectIndex: usize = 0xC54; // ParticleIndex_t
                pub const m_fdistNormalize: usize = 0xC58; // float32
                pub const m_vSunPos: usize = 0xC5C; // Vector
                pub const m_vDirection: usize = 0xC68; // Vector
                pub const m_iszEffectName: usize = 0xC78; // CUtlSymbolLarge
                pub const m_iszSSEffectName: usize = 0xC80; // CUtlSymbolLarge
                pub const m_clrOverlay: usize = 0xC88; // Color
                pub const m_bOn: usize = 0xC8C; // bool
                pub const m_bmaxColor: usize = 0xC8D; // bool
                pub const m_flSize: usize = 0xC90; // float32
                pub const m_flHazeScale: usize = 0xC94; // float32
                pub const m_flRotation: usize = 0xC98; // float32
                pub const m_flHDRColorScale: usize = 0xC9C; // float32
                pub const m_flAlphaHaze: usize = 0xCA0; // float32
                pub const m_flAlphaScale: usize = 0xCA4; // float32
                pub const m_flAlphaHdr: usize = 0xCA8; // float32
                pub const m_flFarZScale: usize = 0xCAC; // float32
            }
            // Parent: C_BaseToggle
            // Fields count: 2
            //
            // Metadata:
            // MNetworkIncludeByName
            // NetworkVarNames: m_bDisabled (bool)
            // NetworkVarNames: m_bClientSidePredicted (bool)
            pub mod C_BaseTrigger {
                pub const m_bDisabled: usize = 0xC50; // bool
                pub const m_bClientSidePredicted: usize = 0xC51; // bool
            }
            // Parent: C_BaseModelEntity
            // Fields count: 0
            pub mod C_TriggerVolume {
            }
        }
        // Module: libengine2.so
        // Classes count: 48
        // Enums count: 0
        pub mod libengine2 {
            // Parent: None
            // Fields count: 1
            pub mod CNetworkVarChainer {
                pub const m_PathIndex: usize = 0x20; // ChangeAccessorFieldPathIndex_t
            }
            // Parent: None
            // Fields count: 0
            pub mod CVariantDefaultAllocator {
            }
            // Parent: None
            // Fields count: 0
            pub mod EntOutput_t {
            }
            // Parent: None
            // Fields count: 7
            pub mod EntComponentInfo_t {
                pub const m_pName: usize = 0x0; // char*
                pub const m_pCPPClassname: usize = 0x8; // char*
                pub const m_pNetworkDataReferencedDescription: usize = 0x10; // char*
                pub const m_pNetworkDataReferencedPtrPropDescription: usize = 0x18; // char*
                pub const m_nRuntimeIndex: usize = 0x20; // int32
                pub const m_nFlags: usize = 0x24; // uint32
                pub const m_pBaseClassComponentHelper: usize = 0x60; // CEntityComponentHelper*
            }
            // Parent: None
            // Fields count: 0
            pub mod CEntityComponent {
            }
            // Parent: None
            // Fields count: 0
            pub mod EntInput_t {
            }
            // Parent: None
            // Fields count: 4
            pub mod CEntityComponentHelper {
                pub const m_flags: usize = 0x8; // uint32
                pub const m_pInfo: usize = 0x10; // EntComponentInfo_t*
                pub const m_nPriority: usize = 0x18; // int32
                pub const m_pNext: usize = 0x20; // CEntityComponentHelper*
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
            // Fields count: 0
            pub mod CEmptyEntityInstance {
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // NetworkVarNames: m_pEntity (CEntityIdentity *)
            // NetworkVarNames: m_CScriptComponent (CScriptComponent::Storage_t)
            pub mod CEntityInstance {
                pub const m_iszPrivateVScripts: usize = 0x8; // CUtlSymbolLarge
                pub const m_pEntity: usize = 0x10; // CEntityIdentity*
                pub const m_CScriptComponent: usize = 0x28; // CScriptComponent*
                pub const m_bVisibleinPVS: usize = 0x30; // bool
            }
            // Parent: None
            // Fields count: 1
            pub mod CEntityIOOutput {
                pub const m_Value: usize = 0x18; // CVariantBase<CVariantDefaultAllocator>
            }
            // Parent: CEntityComponent
            // Fields count: 1
            pub mod CScriptComponent {
                pub const m_scriptClassName: usize = 0x30; // CUtlSymbolLarge
            }
            // Parent: None
            // Fields count: 4
            pub mod EngineLoopState_t {
                pub const m_nPlatWindowWidth: usize = 0x18; // int32
                pub const m_nPlatWindowHeight: usize = 0x1C; // int32
                pub const m_nRenderWidth: usize = 0x20; // int32
                pub const m_nRenderHeight: usize = 0x24; // int32
            }
            // Parent: None
            // Fields count: 0
            pub mod EventModInitialized_t {
            }
            // Parent: None
            // Fields count: 1
            pub mod EventFrameBoundary_t {
                pub const m_flFrameTime: usize = 0x0; // float32
            }
            // Parent: None
            // Fields count: 1
            pub mod EventProfileStorageAvailable_t {
                pub const m_nSplitScreenSlot: usize = 0x0; // CSplitScreenSlot
            }
            // Parent: None
            // Fields count: 0
            pub mod EventSplitScreenStateChanged_t {
            }
            // Parent: None
            // Fields count: 8
            pub mod EventSetTime_t {
                pub const m_LoopState: usize = 0x0; // EngineLoopState_t
                pub const m_nClientOutputFrames: usize = 0x28; // int32
                pub const m_flRealTime: usize = 0x30; // float64
                pub const m_flRenderTime: usize = 0x38; // float64
                pub const m_flRenderFrameTime: usize = 0x40; // float64
                pub const m_flRenderFrameTimeUnbounded: usize = 0x48; // float64
                pub const m_flRenderFrameTimeUnscaled: usize = 0x50; // float64
                pub const m_flTickRemainder: usize = 0x58; // float64
            }
            // Parent: None
            // Fields count: 2
            pub mod EventClientPollInput_t {
                pub const m_LoopState: usize = 0x0; // EngineLoopState_t
                pub const m_flRealTime: usize = 0x28; // float32
            }
            // Parent: None
            // Fields count: 4
            pub mod EventClientProcessInput_t {
                pub const m_LoopState: usize = 0x0; // EngineLoopState_t
                pub const m_flRealTime: usize = 0x28; // float32
                pub const m_flTickInterval: usize = 0x2C; // float32
                pub const m_flTickStartTime: usize = 0x30; // float64
            }
            // Parent: None
            // Fields count: 3
            pub mod EventClientProcessGameInput_t {
                pub const m_LoopState: usize = 0x0; // EngineLoopState_t
                pub const m_flRealTime: usize = 0x28; // float32
                pub const m_flFrameTime: usize = 0x2C; // float32
            }
            // Parent: None
            // Fields count: 6
            pub mod EventClientPreOutput_t {
                pub const m_LoopState: usize = 0x0; // EngineLoopState_t
                pub const m_flRenderTime: usize = 0x28; // float64
                pub const m_flRenderFrameTime: usize = 0x30; // float64
                pub const m_flRenderFrameTimeUnbounded: usize = 0x38; // float64
                pub const m_flRealTime: usize = 0x40; // float32
                pub const m_bRenderOnly: usize = 0x44; // bool
            }
            // Parent: None
            // Fields count: 1
            pub mod EventClientSceneSystemThreadStateChange_t {
                pub const m_bThreadsActive: usize = 0x0; // bool
            }
            // Parent: None
            // Fields count: 5
            pub mod EventClientOutput_t {
                pub const m_LoopState: usize = 0x0; // EngineLoopState_t
                pub const m_flRenderTime: usize = 0x28; // float32
                pub const m_flRealTime: usize = 0x2C; // float32
                pub const m_flRenderFrameTimeUnbounded: usize = 0x30; // float32
                pub const m_bRenderOnly: usize = 0x34; // bool
            }
            // Parent: None
            // Fields count: 5
            pub mod EventClientPostOutput_t {
                pub const m_LoopState: usize = 0x0; // EngineLoopState_t
                pub const m_flRenderTime: usize = 0x28; // float64
                pub const m_flRenderFrameTime: usize = 0x30; // float32
                pub const m_flRenderFrameTimeUnbounded: usize = 0x34; // float32
                pub const m_bRenderOnly: usize = 0x38; // bool
            }
            // Parent: None
            // Fields count: 4
            pub mod EventClientFrameSimulate_t {
                pub const m_LoopState: usize = 0x0; // EngineLoopState_t
                pub const m_flRealTime: usize = 0x28; // float32
                pub const m_flFrameTime: usize = 0x2C; // float32
                pub const m_flWhenScheduleSendTickPacket: usize = 0x30; // float64
            }
            // Parent: None
            // Fields count: 3
            pub mod EventSimpleLoopFrameUpdate_t {
                pub const m_LoopState: usize = 0x0; // EngineLoopState_t
                pub const m_flRealTime: usize = 0x28; // float32
                pub const m_flFrameTime: usize = 0x2C; // float32
            }
            // Parent: None
            // Fields count: 3
            pub mod EventSimulate_t {
                pub const m_LoopState: usize = 0x0; // EngineLoopState_t
                pub const m_bFirstTick: usize = 0x28; // bool
                pub const m_bLastTick: usize = 0x29; // bool
            }
            // Parent: EventSimulate_t
            // Fields count: 4
            pub mod EventAdvanceTick_t {
                pub const m_nCurrentTick: usize = 0x2C; // int32
                pub const m_nCurrentTickThisFrame: usize = 0x30; // int32
                pub const m_nTotalTicksThisFrame: usize = 0x34; // int32
                pub const m_nTotalTicks: usize = 0x38; // int32
            }
            // Parent: EventSimulate_t
            // Fields count: 4
            pub mod EventPostAdvanceTick_t {
                pub const m_nCurrentTick: usize = 0x2C; // int32
                pub const m_nCurrentTickThisFrame: usize = 0x30; // int32
                pub const m_nTotalTicksThisFrame: usize = 0x34; // int32
                pub const m_nTotalTicks: usize = 0x38; // int32
            }
            // Parent: EventAdvanceTick_t
            // Fields count: 0
            pub mod EventServerAdvanceTick_t {
            }
            // Parent: EventPostAdvanceTick_t
            // Fields count: 0
            pub mod EventServerPostAdvanceTick_t {
            }
            // Parent: EventAdvanceTick_t
            // Fields count: 0
            pub mod EventClientAdvanceTick_t {
            }
            // Parent: EventPostAdvanceTick_t
            // Fields count: 0
            pub mod EventClientPostAdvanceTick_t {
            }
            // Parent: None
            // Fields count: 0
            pub mod EventClientPredictionPostNetupdate_t {
            }
            // Parent: None
            // Fields count: 1
            pub mod EventClientPollNetworking_t {
                pub const m_nTickCount: usize = 0x0; // int32
            }
            // Parent: None
            // Fields count: 0
            pub mod EventClientProcessNetworking_t {
            }
            // Parent: EventSimulate_t
            // Fields count: 0
            pub mod EventClientPreSimulate_t {
            }
            // Parent: EventSimulate_t
            // Fields count: 0
            pub mod EventClientSimulate_t {
            }
            // Parent: EventSimulate_t
            // Fields count: 0
            pub mod EventServerPollNetworking_t {
            }
            // Parent: EventSimulate_t
            // Fields count: 0
            pub mod EventServerProcessNetworking_t {
            }
            // Parent: EventSimulate_t
            // Fields count: 0
            pub mod EventServerSimulate_t {
            }
            // Parent: EventSimulate_t
            // Fields count: 0
            pub mod EventServerPostSimulate_t {
            }
            // Parent: EventSimulate_t
            // Fields count: 0
            pub mod EventClientPostSimulate_t {
            }
            // Parent: EventSimulate_t
            // Fields count: 0
            pub mod EventClientPauseSimulate_t {
            }
            // Parent: None
            // Fields count: 1
            pub mod EventPostDataUpdate_t {
                pub const m_nCount: usize = 0x0; // int32
            }
            // Parent: None
            // Fields count: 1
            pub mod EventPreDataUpdate_t {
                pub const m_nCount: usize = 0x0; // int32
            }
            // Parent: None
            // Fields count: 1
            pub mod EventAppShutdown_t {
                pub const m_nDummy0: usize = 0x0; // int32
            }
        }
        // Module: libhost.so
        // Classes count: 2
        // Enums count: 0
        pub mod libhost {
            // Parent: None
            // Fields count: 1
            pub mod CAnimScriptBase {
                pub const m_bIsValid: usize = 0x8; // bool
            }
            // Parent: CAnimScriptBase
            // Fields count: 1
            pub mod EmptyTestScript {
                pub const m_hTest: usize = 0x10; // CAnimScriptParam<float32>
            }
        }
        // Module: libmaterialsystem2.so
        // Classes count: 13
        // Enums count: 0
        pub mod libmaterialsystem2 {
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod MaterialParam_t {
                pub const m_name: usize = 0x0; // CUtlString
            }
            // Parent: MaterialParam_t
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod MaterialParamInt_t {
                pub const m_nValue: usize = 0x8; // int32
            }
            // Parent: MaterialParam_t
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod MaterialParamFloat_t {
                pub const m_flValue: usize = 0x8; // float32
            }
            // Parent: MaterialParam_t
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod MaterialParamVector_t {
                pub const m_value: usize = 0x8; // Vector4D
            }
            // Parent: MaterialParam_t
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod MaterialParamTexture_t {
                pub const m_pValue: usize = 0x8; // CStrongHandle<InfoForResourceTypeCTextureBase>
            }
            // Parent: MaterialParam_t
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod MaterialParamString_t {
                pub const m_value: usize = 0x8; // CUtlString
            }
            // Parent: MaterialParam_t
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod MaterialParamBuffer_t {
                pub const m_value: usize = 0x8; // CUtlBinaryBlock
            }
            // Parent: None
            // Fields count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod MaterialResourceData_t {
                pub const m_materialName: usize = 0x0; // CUtlString
                pub const m_shaderName: usize = 0x8; // CUtlString
                pub const m_intParams: usize = 0x10; // CUtlVector<MaterialParamInt_t>
                pub const m_floatParams: usize = 0x28; // CUtlVector<MaterialParamFloat_t>
                pub const m_vectorParams: usize = 0x40; // CUtlVector<MaterialParamVector_t>
                pub const m_textureParams: usize = 0x58; // CUtlVector<MaterialParamTexture_t>
                pub const m_dynamicParams: usize = 0x70; // CUtlVector<MaterialParamBuffer_t>
                pub const m_dynamicTextureParams: usize = 0x88; // CUtlVector<MaterialParamBuffer_t>
                pub const m_intAttributes: usize = 0xA0; // CUtlVector<MaterialParamInt_t>
                pub const m_floatAttributes: usize = 0xB8; // CUtlVector<MaterialParamFloat_t>
                pub const m_vectorAttributes: usize = 0xD0; // CUtlVector<MaterialParamVector_t>
                pub const m_textureAttributes: usize = 0xE8; // CUtlVector<MaterialParamTexture_t>
                pub const m_stringAttributes: usize = 0x100; // CUtlVector<MaterialParamString_t>
                pub const m_renderAttributesUsed: usize = 0x118; // CUtlVector<CUtlString>
            }
            // Parent: None
            // Fields count: 15
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod PostProcessingTonemapParameters_t {
                pub const m_flExposureBias: usize = 0x0; // float32
                pub const m_flShoulderStrength: usize = 0x4; // float32
                pub const m_flLinearStrength: usize = 0x8; // float32
                pub const m_flLinearAngle: usize = 0xC; // float32
                pub const m_flToeStrength: usize = 0x10; // float32
                pub const m_flToeNum: usize = 0x14; // float32
                pub const m_flToeDenom: usize = 0x18; // float32
                pub const m_flWhitePoint: usize = 0x1C; // float32
                pub const m_flLuminanceSource: usize = 0x20; // float32
                pub const m_flExposureBiasShadows: usize = 0x24; // float32
                pub const m_flExposureBiasHighlights: usize = 0x28; // float32
                pub const m_flMinShadowLum: usize = 0x2C; // float32
                pub const m_flMaxShadowLum: usize = 0x30; // float32
                pub const m_flMinHighlightLum: usize = 0x34; // float32
                pub const m_flMaxHighlightLum: usize = 0x38; // float32
            }
            // Parent: None
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod PostProcessingBloomParameters_t {
                pub const m_blendMode: usize = 0x0; // BloomBlendMode_t
                pub const m_flBloomStrength: usize = 0x4; // float32
                pub const m_flScreenBloomStrength: usize = 0x8; // float32
                pub const m_flBlurBloomStrength: usize = 0xC; // float32
                pub const m_flBloomThreshold: usize = 0x10; // float32
                pub const m_flBloomThresholdWidth: usize = 0x14; // float32
                pub const m_flSkyboxBloomStrength: usize = 0x18; // float32
                pub const m_flBloomStartValue: usize = 0x1C; // float32
                pub const m_flBlurWeight: usize = 0x20; // float32[5]
                pub const m_vBlurTint: usize = 0x34; // Vector[5]
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod PostProcessingVignetteParameters_t {
                pub const m_flVignetteStrength: usize = 0x0; // float32
                pub const m_vCenter: usize = 0x4; // Vector2D
                pub const m_flRadius: usize = 0xC; // float32
                pub const m_flRoundness: usize = 0x10; // float32
                pub const m_flFeather: usize = 0x14; // float32
                pub const m_vColorTint: usize = 0x18; // Vector
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod PostProcessingLocalContrastParameters_t {
                pub const m_flLocalContrastStrength: usize = 0x0; // float32
                pub const m_flLocalContrastEdgeStrength: usize = 0x4; // float32
                pub const m_flLocalContrastVignetteStart: usize = 0x8; // float32
                pub const m_flLocalContrastVignetteEnd: usize = 0xC; // float32
                pub const m_flLocalContrastVignetteBlur: usize = 0x10; // float32
            }
            // Parent: None
            // Fields count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod PostProcessingResource_t {
                pub const m_bHasTonemapParams: usize = 0x0; // bool
                pub const m_toneMapParams: usize = 0x4; // PostProcessingTonemapParameters_t
                pub const m_bHasBloomParams: usize = 0x40; // bool
                pub const m_bloomParams: usize = 0x44; // PostProcessingBloomParameters_t
                pub const m_bHasVignetteParams: usize = 0xB4; // bool
                pub const m_vignetteParams: usize = 0xB8; // PostProcessingVignetteParameters_t
                pub const m_bHasLocalContrastParams: usize = 0xDC; // bool
                pub const m_localConstrastParams: usize = 0xE0; // PostProcessingLocalContrastParameters_t
                pub const m_nColorCorrectionVolumeDim: usize = 0xF4; // int32
                pub const m_colorCorrectionVolumeData: usize = 0xF8; // CUtlBinaryBlock
                pub const m_bHasColorCorrection: usize = 0x110; // bool
            }
        }
        // Module: libmeshsystem.so
        // Classes count: 0
        // Enums count: 0
        pub mod libmeshsystem {
        }
        // Module: libnetworksystem.so
        // Classes count: 1
        // Enums count: 0
        pub mod libnetworksystem {
            // Parent: None
            // Fields count: 1
            pub mod ChangeAccessorFieldPathIndex_t {
                pub const m_Value: usize = 0x0; // int16
            }
        }
        // Module: libpanorama.so
        // Classes count: 0
        // Enums count: 0
        pub mod libpanorama {
        }
        // Module: libparticles.so
        // Classes count: 250
        // Enums count: 0
        pub mod libparticles {
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CParticleInput {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyCustomEditor
            pub mod CPerParticleFloatInput {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyCustomEditor
            pub mod CParticleCollectionFloatInput {
            }
            // Parent: CParticleCollectionFloatInput
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyCustomEditor
            pub mod CParticleCollectionRendererFloatInput {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyCustomEditor
            pub mod CParticleRemapFloatInput {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyCustomEditor
            pub mod CPerParticleVecInput {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyCustomEditor
            pub mod CParticleCollectionVecInput {
            }
            // Parent: CParticleCollectionVecInput
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyCustomEditor
            pub mod CParticleCollectionRendererVecInput {
            }
            // Parent: None
            // Fields count: 1
            pub mod PARTICLE_EHANDLE__ {
                pub const unused: usize = 0x0; // int32
            }
            // Parent: None
            // Fields count: 1
            pub mod PARTICLE_WORLD_HANDLE__ {
                pub const unused: usize = 0x0; // int32
            }
            // Parent: None
            // Fields count: 0
            pub mod IParticleEffect {
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod ParticleNamedValueConfiguration_t {
                pub const m_ConfigName: usize = 0x0; // CUtlString
                pub const m_ConfigValue: usize = 0x8; // KeyValues3
                pub const m_iAttachType: usize = 0x18; // ParticleAttachment_t
                pub const m_BoundEntityPath: usize = 0x20; // CUtlString
                pub const m_strEntityScope: usize = 0x28; // CUtlString
                pub const m_strAttachmentName: usize = 0x30; // CUtlString
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod ParticleNamedValueSource_t {
                pub const m_Name: usize = 0x0; // CUtlString
                pub const m_IsPublic: usize = 0x8; // bool
                pub const m_ValueType: usize = 0xC; // PulseValueType_t
                pub const m_DefaultConfig: usize = 0x10; // ParticleNamedValueConfiguration_t
                pub const m_NamedConfigs: usize = 0x48; // CUtlVector<ParticleNamedValueConfiguration_t>
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyCustomEditor
            pub mod CParticleVariableRef {
                pub const m_variableName: usize = 0x0; // CKV3MemberNameWithStorage
                pub const m_variableType: usize = 0x38; // PulseValueType_t
            }
            // Parent: None
            // Fields count: 0
            pub mod CParticleProperty {
            }
            // Parent: IParticleEffect
            // Fields count: 32
            pub mod CNewParticleEffect {
                pub const m_pNext: usize = 0x10; // CNewParticleEffect*
                pub const m_pPrev: usize = 0x18; // CNewParticleEffect*
                pub const m_pParticles: usize = 0x20; // IParticleCollection*
                pub const m_pDebugName: usize = 0x28; // char*
                pub const m_bDontRemove: usize = 0x0; // bitfield:1
                pub const m_bRemove: usize = 0x0; // bitfield:1
                pub const m_bNeedsBBoxUpdate: usize = 0x0; // bitfield:1
                pub const m_bIsFirstFrame: usize = 0x0; // bitfield:1
                pub const m_bAutoUpdateBBox: usize = 0x0; // bitfield:1
                pub const m_bAllocated: usize = 0x0; // bitfield:1
                pub const m_bSimulate: usize = 0x0; // bitfield:1
                pub const m_bShouldPerformCullCheck: usize = 0x0; // bitfield:1
                pub const m_bForceNoDraw: usize = 0x0; // bitfield:1
                pub const m_bShouldSave: usize = 0x0; // bitfield:1
                pub const m_bDisableAggregation: usize = 0x0; // bitfield:1
                pub const m_bShouldSimulateDuringGamePaused: usize = 0x0; // bitfield:1
                pub const m_bShouldCheckFoW: usize = 0x0; // bitfield:1
                pub const m_vSortOrigin: usize = 0x40; // Vector
                pub const m_flScale: usize = 0x4C; // float32
                pub const m_hOwner: usize = 0x50; // PARTICLE_EHANDLE__*
                pub const m_pOwningParticleProperty: usize = 0x58; // CParticleProperty*
                pub const m_flFreezeTransitionStart: usize = 0x70; // float32
                pub const m_flFreezeTransitionDuration: usize = 0x74; // float32
                pub const m_flFreezeTransitionOverride: usize = 0x78; // float32
                pub const m_bFreezeTransitionActive: usize = 0x7C; // bool
                pub const m_bFreezeTargetState: usize = 0x7D; // bool
                pub const m_bCanFreeze: usize = 0x7E; // bool
                pub const m_LastMin: usize = 0x80; // Vector
                pub const m_LastMax: usize = 0x8C; // Vector
                pub const m_nSplitScreenUser: usize = 0x98; // CSplitScreenSlot
                pub const m_vecAggregationCenter: usize = 0x9C; // Vector
                pub const m_RefCount: usize = 0xC0; // int32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CRandomNumberGeneratorParameters {
                pub const m_bDistributeEvenly: usize = 0x0; // bool
                pub const m_nSeed: usize = 0x4; // int32
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod MaterialVariable_t {
                pub const m_strVariable: usize = 0x0; // CUtlString
                pub const m_nVariableField: usize = 0x8; // ParticleAttributeIndex_t
                pub const m_flScale: usize = 0xC; // float32
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod RenderProjectedMaterial_t {
                pub const m_hMaterial: usize = 0x0; // CStrongHandle<InfoForResourceTypeIMaterial2>
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod ParticlePreviewBodyGroup_t {
                pub const m_bodyGroupName: usize = 0x0; // CUtlString
                pub const m_nValue: usize = 0x8; // int32
            }
            // Parent: None
            // Fields count: 16
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod ParticlePreviewState_t {
                pub const m_previewModel: usize = 0x0; // CUtlString
                pub const m_nModSpecificData: usize = 0x8; // uint32
                pub const m_groundType: usize = 0xC; // PetGroundType_t
                pub const m_sequenceName: usize = 0x10; // CUtlString
                pub const m_nFireParticleOnSequenceFrame: usize = 0x18; // int32
                pub const m_hitboxSetName: usize = 0x20; // CUtlString
                pub const m_materialGroupName: usize = 0x28; // CUtlString
                pub const m_vecBodyGroups: usize = 0x30; // CUtlVector<ParticlePreviewBodyGroup_t>
                pub const m_flPlaybackSpeed: usize = 0x48; // float32
                pub const m_flParticleSimulationRate: usize = 0x4C; // float32
                pub const m_bShouldDrawHitboxes: usize = 0x50; // bool
                pub const m_bShouldDrawAttachments: usize = 0x51; // bool
                pub const m_bShouldDrawAttachmentNames: usize = 0x52; // bool
                pub const m_bShouldDrawControlPointAxes: usize = 0x53; // bool
                pub const m_bAnimationNonLooping: usize = 0x54; // bool
                pub const m_vecPreviewGravity: usize = 0x58; // Vector
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod ParticleControlPointDriver_t {
                pub const m_iControlPoint: usize = 0x0; // int32
                pub const m_iAttachType: usize = 0x4; // ParticleAttachment_t
                pub const m_attachmentName: usize = 0x8; // CUtlString
                pub const m_vecOffset: usize = 0x10; // Vector
                pub const m_angOffset: usize = 0x1C; // QAngle
                pub const m_entityName: usize = 0x28; // CUtlString
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod ParticleControlPointConfiguration_t {
                pub const m_name: usize = 0x0; // CUtlString
                pub const m_drivers: usize = 0x8; // CUtlVector<ParticleControlPointDriver_t>
                pub const m_previewState: usize = 0x20; // ParticlePreviewState_t
            }
            // Parent: None
            // Fields count: 0
            pub mod IParticleCollection {
            }
            // Parent: None
            // Fields count: 0
            pub mod IControlPointEditorData {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod IParticleSystemDefinition {
            }
            // Parent: None
            // Fields count: 18
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CParticleVisibilityInputs {
                pub const m_flCameraBias: usize = 0x0; // float32
                pub const m_nCPin: usize = 0x4; // int32
                pub const m_flProxyRadius: usize = 0x8; // float32
                pub const m_flInputMin: usize = 0xC; // float32
                pub const m_flInputMax: usize = 0x10; // float32
                pub const m_flNoPixelVisibilityFallback: usize = 0x14; // float32
                pub const m_flDistanceInputMin: usize = 0x18; // float32
                pub const m_flDistanceInputMax: usize = 0x1C; // float32
                pub const m_flDotInputMin: usize = 0x20; // float32
                pub const m_flDotInputMax: usize = 0x24; // float32
                pub const m_bDotCPAngles: usize = 0x28; // bool
                pub const m_bDotCameraAngles: usize = 0x29; // bool
                pub const m_flAlphaScaleMin: usize = 0x2C; // float32
                pub const m_flAlphaScaleMax: usize = 0x30; // float32
                pub const m_flRadiusScaleMin: usize = 0x34; // float32
                pub const m_flRadiusScaleMax: usize = 0x38; // float32
                pub const m_flRadiusScaleFOVBase: usize = 0x3C; // float32
                pub const m_bRightEye: usize = 0x40; // bool
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPathParameters {
                pub const m_nStartControlPointNumber: usize = 0x0; // int32
                pub const m_nEndControlPointNumber: usize = 0x4; // int32
                pub const m_nBulgeControl: usize = 0x8; // int32
                pub const m_flBulge: usize = 0xC; // float32
                pub const m_flMidPoint: usize = 0x10; // float32
                pub const m_vStartPointOffset: usize = 0x14; // Vector
                pub const m_vMidPointOffset: usize = 0x20; // Vector
                pub const m_vEndOffset: usize = 0x2C; // Vector
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod ParticleChildrenInfo_t {
                pub const m_ChildRef: usize = 0x0; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                pub const m_flDelay: usize = 0x8; // float32
                pub const m_bEndCap: usize = 0xC; // bool
                pub const m_bDisableChild: usize = 0xD; // bool
                pub const m_nDetailLevel: usize = 0x10; // ParticleDetailLevel_t
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod ControlPointReference_t {
                pub const m_controlPointNameString: usize = 0x0; // int32
                pub const m_vOffsetFromControlPoint: usize = 0x4; // Vector
                pub const m_bOffsetInLocalSpace: usize = 0x10; // bool
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod ModelReference_t {
                pub const m_model: usize = 0x0; // CStrongHandle<InfoForResourceTypeCModel>
                pub const m_flRelativeProbabilityOfSpawn: usize = 0x8; // float32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod SequenceWeightedList_t {
                pub const m_nSequence: usize = 0x0; // int32
                pub const m_flRelativeWeight: usize = 0x4; // float32
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CollisionGroupContext_t {
                pub const m_nCollisionGroupNumber: usize = 0x0; // int32
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod PointDefinition_t {
                pub const m_nControlPoint: usize = 0x0; // int32
                pub const m_bLocalCoords: usize = 0x4; // bool
                pub const m_vOffset: usize = 0x8; // Vector
            }
            // Parent: PointDefinition_t
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod PointDefinitionWithTimeValues_t {
                pub const m_flTimeDuration: usize = 0x14; // float32
            }
            // Parent: IParticleSystemDefinition
            // Fields count: 64
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CParticleSystemDefinition {
                pub const m_nBehaviorVersion: usize = 0x8; // int32
                pub const m_PreEmissionOperators: usize = 0x10; // CUtlVector<CParticleFunctionPreEmission*>
                pub const m_Emitters: usize = 0x28; // CUtlVector<CParticleFunctionEmitter*>
                pub const m_Initializers: usize = 0x40; // CUtlVector<CParticleFunctionInitializer*>
                pub const m_Operators: usize = 0x58; // CUtlVector<CParticleFunctionOperator*>
                pub const m_ForceGenerators: usize = 0x70; // CUtlVector<CParticleFunctionForce*>
                pub const m_Constraints: usize = 0x88; // CUtlVector<CParticleFunctionConstraint*>
                pub const m_Renderers: usize = 0xA0; // CUtlVector<CParticleFunctionRenderer*>
                pub const m_Children: usize = 0xB8; // CUtlVector<ParticleChildrenInfo_t>
                pub const m_nFirstMultipleOverride_BackwardCompat: usize = 0x178; // int32
                pub const m_nInitialParticles: usize = 0x210; // int32
                pub const m_nMaxParticles: usize = 0x214; // int32
                pub const m_nGroupID: usize = 0x218; // int32
                pub const m_BoundingBoxMin: usize = 0x21C; // Vector
                pub const m_BoundingBoxMax: usize = 0x228; // Vector
                pub const m_flDepthSortBias: usize = 0x234; // float32
                pub const m_nSortOverridePositionCP: usize = 0x238; // int32
                pub const m_bInfiniteBounds: usize = 0x23C; // bool
                pub const m_bEnableNamedValues: usize = 0x23D; // bool
                pub const m_NamedValueDomain: usize = 0x240; // CUtlString
                pub const m_NamedValueLocals: usize = 0x248; // CUtlVector<ParticleNamedValueSource_t*>
                pub const m_ConstantColor: usize = 0x260; // Color
                pub const m_ConstantNormal: usize = 0x264; // Vector
                pub const m_flConstantRadius: usize = 0x270; // float32
                pub const m_flConstantRotation: usize = 0x274; // float32
                pub const m_flConstantRotationSpeed: usize = 0x278; // float32
                pub const m_flConstantLifespan: usize = 0x27C; // float32
                pub const m_nConstantSequenceNumber: usize = 0x280; // int32
                pub const m_nConstantSequenceNumber1: usize = 0x284; // int32
                pub const m_nSnapshotControlPoint: usize = 0x288; // int32
                pub const m_hSnapshot: usize = 0x290; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
                pub const m_pszCullReplacementName: usize = 0x298; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                pub const m_flCullRadius: usize = 0x2A0; // float32
                pub const m_flCullFillCost: usize = 0x2A4; // float32
                pub const m_nCullControlPoint: usize = 0x2A8; // int32
                pub const m_hFallback: usize = 0x2B0; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                pub const m_nFallbackMaxCount: usize = 0x2B8; // int32
                pub const m_hLowViolenceDef: usize = 0x2C0; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                pub const m_hReferenceReplacement: usize = 0x2C8; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                pub const m_flPreSimulationTime: usize = 0x2D0; // float32
                pub const m_flStopSimulationAfterTime: usize = 0x2D4; // float32
                pub const m_flMaximumTimeStep: usize = 0x2D8; // float32
                pub const m_flMaximumSimTime: usize = 0x2DC; // float32
                pub const m_flMinimumSimTime: usize = 0x2E0; // float32
                pub const m_flMinimumTimeStep: usize = 0x2E4; // float32
                pub const m_nMinimumFrames: usize = 0x2E8; // int32
                pub const m_nMinCPULevel: usize = 0x2EC; // int32
                pub const m_nMinGPULevel: usize = 0x2F0; // int32
                pub const m_flNoDrawTimeToGoToSleep: usize = 0x2F4; // float32
                pub const m_flMaxDrawDistance: usize = 0x2F8; // float32
                pub const m_flStartFadeDistance: usize = 0x2FC; // float32
                pub const m_flMaxCreationDistance: usize = 0x300; // float32
                pub const m_nAggregationMinAvailableParticles: usize = 0x304; // int32
                pub const m_flAggregateRadius: usize = 0x308; // float32
                pub const m_bShouldBatch: usize = 0x30C; // bool
                pub const m_bShouldHitboxesFallbackToRenderBounds: usize = 0x30D; // bool
                pub const m_bShouldHitboxesFallbackToSnapshot: usize = 0x30E; // bool
                pub const m_nViewModelEffect: usize = 0x310; // InheritableBoolType_t
                pub const m_bScreenSpaceEffect: usize = 0x314; // bool
                pub const m_pszTargetLayerID: usize = 0x318; // CUtlSymbolLarge
                pub const m_nSkipRenderControlPoint: usize = 0x320; // int32
                pub const m_nAllowRenderControlPoint: usize = 0x324; // int32
                pub const m_bShouldSort: usize = 0x328; // bool
                pub const m_controlPointConfigurations: usize = 0x370; // CUtlVector<ParticleControlPointConfiguration_t>
            }
            // Parent: None
            // Fields count: 16
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CParticleFunction {
                pub const m_flOpStrength: usize = 0x8; // CParticleCollectionFloatInput
                pub const m_nOpEndCapState: usize = 0x158; // ParticleEndcapMode_t
                pub const m_flOpStartFadeInTime: usize = 0x15C; // float32
                pub const m_flOpEndFadeInTime: usize = 0x160; // float32
                pub const m_flOpStartFadeOutTime: usize = 0x164; // float32
                pub const m_flOpEndFadeOutTime: usize = 0x168; // float32
                pub const m_flOpFadeOscillatePeriod: usize = 0x16C; // float32
                pub const m_bNormalizeToStopTime: usize = 0x170; // bool
                pub const m_flOpTimeOffsetMin: usize = 0x174; // float32
                pub const m_flOpTimeOffsetMax: usize = 0x178; // float32
                pub const m_nOpTimeOffsetSeed: usize = 0x17C; // int32
                pub const m_nOpTimeScaleSeed: usize = 0x180; // int32
                pub const m_flOpTimeScaleMin: usize = 0x184; // float32
                pub const m_flOpTimeScaleMax: usize = 0x188; // float32
                pub const m_bDisableOperator: usize = 0x18E; // bool
                pub const m_Notes: usize = 0x190; // CUtlString
            }
            // Parent: CParticleFunction
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CParticleFunctionInitializer {
                pub const m_nAssociatedEmitterIndex: usize = 0x1B0; // int32
            }
            // Parent: CParticleFunction
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CParticleFunctionEmitter {
                pub const m_nEmitterIndex: usize = 0x1B0; // int32
            }
            // Parent: CParticleFunction
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CParticleFunctionConstraint {
            }
            // Parent: CParticleFunction
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CParticleFunctionOperator {
            }
            // Parent: CParticleFunction
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CParticleFunctionForce {
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CParticleFunctionPreEmission {
                pub const m_bRunOnce: usize = 0x1B0; // bool
            }
            // Parent: CParticleFunction
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CParticleFunctionRenderer {
                pub const VisibilityInputs: usize = 0x1B0; // CParticleVisibilityInputs
                pub const m_bCannotBeRefracted: usize = 0x1F4; // bool
                pub const m_bSkipRenderingOnMobile: usize = 0x1F5; // bool
            }
            // Parent: None
            // Fields count: 16
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod TextureControls_t {
                pub const m_flFinalTextureScaleU: usize = 0x0; // CParticleCollectionRendererFloatInput
                pub const m_flFinalTextureScaleV: usize = 0x150; // CParticleCollectionRendererFloatInput
                pub const m_flFinalTextureOffsetU: usize = 0x2A0; // CParticleCollectionRendererFloatInput
                pub const m_flFinalTextureOffsetV: usize = 0x3F0; // CParticleCollectionRendererFloatInput
                pub const m_flFinalTextureUVRotation: usize = 0x540; // CParticleCollectionRendererFloatInput
                pub const m_flZoomScale: usize = 0x690; // CParticleCollectionRendererFloatInput
                pub const m_flDistortion: usize = 0x7E0; // CParticleCollectionRendererFloatInput
                pub const m_bRandomizeOffsets: usize = 0x930; // bool
                pub const m_bClampUVs: usize = 0x931; // bool
                pub const m_nPerParticleBlend: usize = 0x934; // SpriteCardPerParticleScale_t
                pub const m_nPerParticleScale: usize = 0x938; // SpriteCardPerParticleScale_t
                pub const m_nPerParticleOffsetU: usize = 0x93C; // SpriteCardPerParticleScale_t
                pub const m_nPerParticleOffsetV: usize = 0x940; // SpriteCardPerParticleScale_t
                pub const m_nPerParticleRotation: usize = 0x944; // SpriteCardPerParticleScale_t
                pub const m_nPerParticleZoom: usize = 0x948; // SpriteCardPerParticleScale_t
                pub const m_nPerParticleDistortion: usize = 0x94C; // SpriteCardPerParticleScale_t
            }
            // Parent: None
            // Fields count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod TextureGroup_t {
                pub const m_bEnabled: usize = 0x0; // bool
                pub const m_bReplaceTextureWithGradient: usize = 0x1; // bool
                pub const m_hTexture: usize = 0x8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Gradient: usize = 0x10; // CColorGradient
                pub const m_nTextureType: usize = 0x28; // SpriteCardTextureType_t
                pub const m_nTextureChannels: usize = 0x2C; // SpriteCardTextureChannel_t
                pub const m_nTextureBlendMode: usize = 0x30; // ParticleTextureLayerBlendType_t
                pub const m_flTextureBlend: usize = 0x38; // CParticleCollectionRendererFloatInput
                pub const m_TextureControls: usize = 0x188; // TextureControls_t
            }
            // Parent: CParticleFunctionRenderer
            // Fields count: 62
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CBaseRendererSource2 {
                pub const m_flRadiusScale: usize = 0x1F8; // CParticleCollectionRendererFloatInput
                pub const m_flAlphaScale: usize = 0x348; // CParticleCollectionRendererFloatInput
                pub const m_flRollScale: usize = 0x498; // CParticleCollectionRendererFloatInput
                pub const m_nAlpha2Field: usize = 0x5E8; // ParticleAttributeIndex_t
                pub const m_vecColorScale: usize = 0x5F0; // CParticleCollectionRendererVecInput
                pub const m_nColorBlendType: usize = 0xC20; // ParticleColorBlendType_t
                pub const m_nShaderType: usize = 0xC24; // SpriteCardShaderType_t
                pub const m_strShaderOverride: usize = 0xC28; // CUtlString
                pub const m_flCenterXOffset: usize = 0xC30; // CParticleCollectionRendererFloatInput
                pub const m_flCenterYOffset: usize = 0xD80; // CParticleCollectionRendererFloatInput
                pub const m_flBumpStrength: usize = 0xED0; // float32
                pub const m_nCropTextureOverride: usize = 0xED4; // ParticleSequenceCropOverride_t
                pub const m_vecTexturesInput: usize = 0xED8; // CUtlVector<TextureGroup_t>
                pub const m_flAnimationRate: usize = 0xEF0; // float32
                pub const m_nAnimationType: usize = 0xEF4; // AnimationType_t
                pub const m_bAnimateInFPS: usize = 0xEF8; // bool
                pub const m_flSelfIllumAmount: usize = 0xF00; // CParticleCollectionRendererFloatInput
                pub const m_flDiffuseAmount: usize = 0x1050; // CParticleCollectionRendererFloatInput
                pub const m_flDiffuseClamp: usize = 0x11A0; // CParticleCollectionRendererFloatInput
                pub const m_nLightingControlPoint: usize = 0x12F0; // int32
                pub const m_nSelfIllumPerParticle: usize = 0x12F4; // ParticleAttributeIndex_t
                pub const m_nOutputBlendMode: usize = 0x12F8; // ParticleOutputBlendMode_t
                pub const m_bGammaCorrectVertexColors: usize = 0x12FC; // bool
                pub const m_bSaturateColorPreAlphaBlend: usize = 0x12FD; // bool
                pub const m_flAddSelfAmount: usize = 0x1300; // CParticleCollectionRendererFloatInput
                pub const m_flDesaturation: usize = 0x1450; // CParticleCollectionRendererFloatInput
                pub const m_flOverbrightFactor: usize = 0x15A0; // CParticleCollectionRendererFloatInput
                pub const m_nHSVShiftControlPoint: usize = 0x16F0; // int32
                pub const m_nFogType: usize = 0x16F4; // ParticleFogType_t
                pub const m_flFogAmount: usize = 0x16F8; // CParticleCollectionRendererFloatInput
                pub const m_bTintByFOW: usize = 0x1848; // bool
                pub const m_bTintByGlobalLight: usize = 0x1849; // bool
                pub const m_nPerParticleAlphaReference: usize = 0x184C; // SpriteCardPerParticleScale_t
                pub const m_nPerParticleAlphaRefWindow: usize = 0x1850; // SpriteCardPerParticleScale_t
                pub const m_nAlphaReferenceType: usize = 0x1854; // ParticleAlphaReferenceType_t
                pub const m_flAlphaReferenceSoftness: usize = 0x1858; // CParticleCollectionRendererFloatInput
                pub const m_flSourceAlphaValueToMapToZero: usize = 0x19A8; // CParticleCollectionRendererFloatInput
                pub const m_flSourceAlphaValueToMapToOne: usize = 0x1AF8; // CParticleCollectionRendererFloatInput
                pub const m_bRefract: usize = 0x1C48; // bool
                pub const m_bRefractSolid: usize = 0x1C49; // bool
                pub const m_flRefractAmount: usize = 0x1C50; // CParticleCollectionRendererFloatInput
                pub const m_nRefractBlurRadius: usize = 0x1DA0; // int32
                pub const m_nRefractBlurType: usize = 0x1DA4; // BlurFilterType_t
                pub const m_bOnlyRenderInEffectsBloomPass: usize = 0x1DA8; // bool
                pub const m_bOnlyRenderInEffectsWaterPass: usize = 0x1DA9; // bool
                pub const m_bUseMixedResolutionRendering: usize = 0x1DAA; // bool
                pub const m_bOnlyRenderInEffecsGameOverlay: usize = 0x1DAB; // bool
                pub const m_stencilTestID: usize = 0x1DAC; // char[128]
                pub const m_bStencilTestExclude: usize = 0x1E2C; // bool
                pub const m_stencilWriteID: usize = 0x1E2D; // char[128]
                pub const m_bWriteStencilOnDepthPass: usize = 0x1EAD; // bool
                pub const m_bWriteStencilOnDepthFail: usize = 0x1EAE; // bool
                pub const m_bReverseZBuffering: usize = 0x1EAF; // bool
                pub const m_bDisableZBuffering: usize = 0x1EB0; // bool
                pub const m_nFeatheringMode: usize = 0x1EB4; // ParticleDepthFeatheringMode_t
                pub const m_flFeatheringMinDist: usize = 0x1EB8; // CParticleCollectionRendererFloatInput
                pub const m_flFeatheringMaxDist: usize = 0x2008; // CParticleCollectionRendererFloatInput
                pub const m_flFeatheringFilter: usize = 0x2158; // CParticleCollectionRendererFloatInput
                pub const m_flDepthBias: usize = 0x22A8; // CParticleCollectionRendererFloatInput
                pub const m_nSortMethod: usize = 0x23F8; // ParticleSortingChoiceList_t
                pub const m_bBlendFramesSeq0: usize = 0x23FC; // bool
                pub const m_bMaxLuminanceBlendingSequence0: usize = 0x23FD; // bool
            }
            // Parent: CBaseRendererSource2
            // Fields count: 27
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RenderSprites {
                pub const m_nSequenceOverride: usize = 0x2638; // CParticleCollectionRendererFloatInput
                pub const m_nOrientationType: usize = 0x2788; // ParticleOrientationChoiceList_t
                pub const m_nOrientationControlPoint: usize = 0x278C; // int32
                pub const m_bUseYawWithNormalAligned: usize = 0x2790; // bool
                pub const m_flMinSize: usize = 0x2798; // CParticleCollectionRendererFloatInput
                pub const m_flMaxSize: usize = 0x28E8; // CParticleCollectionRendererFloatInput
                pub const m_flAlphaAdjustWithSizeAdjust: usize = 0x2A38; // CParticleCollectionRendererFloatInput
                pub const m_flStartFadeSize: usize = 0x2B88; // CParticleCollectionRendererFloatInput
                pub const m_flEndFadeSize: usize = 0x2CD8; // CParticleCollectionRendererFloatInput
                pub const m_flStartFadeDot: usize = 0x2E28; // float32
                pub const m_flEndFadeDot: usize = 0x2E2C; // float32
                pub const m_bDistanceAlpha: usize = 0x2E30; // bool
                pub const m_bSoftEdges: usize = 0x2E31; // bool
                pub const m_flEdgeSoftnessStart: usize = 0x2E34; // float32
                pub const m_flEdgeSoftnessEnd: usize = 0x2E38; // float32
                pub const m_bOutline: usize = 0x2E3C; // bool
                pub const m_OutlineColor: usize = 0x2E3D; // Color
                pub const m_nOutlineAlpha: usize = 0x2E44; // int32
                pub const m_flOutlineStart0: usize = 0x2E48; // float32
                pub const m_flOutlineStart1: usize = 0x2E4C; // float32
                pub const m_flOutlineEnd0: usize = 0x2E50; // float32
                pub const m_flOutlineEnd1: usize = 0x2E54; // float32
                pub const m_nLightingMode: usize = 0x2E58; // ParticleLightingQuality_t
                pub const m_flLightingTessellation: usize = 0x2E60; // CParticleCollectionRendererFloatInput
                pub const m_flLightingDirectionality: usize = 0x2FB0; // CParticleCollectionRendererFloatInput
                pub const m_bParticleShadows: usize = 0x3100; // bool
                pub const m_flShadowDensity: usize = 0x3104; // float32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FloatInputMaterialVariable_t {
                pub const m_strVariable: usize = 0x0; // CUtlString
                pub const m_flInput: usize = 0x8; // CParticleCollectionFloatInput
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod VecInputMaterialVariable_t {
                pub const m_strVariable: usize = 0x0; // CUtlString
                pub const m_vecInput: usize = 0x8; // CParticleCollectionVecInput
            }
            // Parent: CParticleFunctionRenderer
            // Fields count: 22
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RenderCables {
                pub const m_flRadiusScale: usize = 0x1F8; // CParticleCollectionFloatInput
                pub const m_flAlphaScale: usize = 0x348; // CParticleCollectionFloatInput
                pub const m_vecColorScale: usize = 0x498; // CParticleCollectionVecInput
                pub const m_nColorBlendType: usize = 0xAC8; // ParticleColorBlendType_t
                pub const m_hMaterial: usize = 0xAD0; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_nTextureRepetitionMode: usize = 0xAD8; // TextureRepetitionMode_t
                pub const m_flTextureRepeatsPerSegment: usize = 0xAE0; // CParticleCollectionFloatInput
                pub const m_flTextureRepeatsCircumference: usize = 0xC30; // CParticleCollectionFloatInput
                pub const m_flColorMapOffsetV: usize = 0xD80; // CParticleCollectionFloatInput
                pub const m_flColorMapOffsetU: usize = 0xED0; // CParticleCollectionFloatInput
                pub const m_flNormalMapOffsetV: usize = 0x1020; // CParticleCollectionFloatInput
                pub const m_flNormalMapOffsetU: usize = 0x1170; // CParticleCollectionFloatInput
                pub const m_bDrawCableCaps: usize = 0x12C0; // bool
                pub const m_flCapRoundness: usize = 0x12C4; // float32
                pub const m_flCapOffsetAmount: usize = 0x12C8; // float32
                pub const m_flTessScale: usize = 0x12CC; // float32
                pub const m_nMinTesselation: usize = 0x12D0; // int32
                pub const m_nMaxTesselation: usize = 0x12D4; // int32
                pub const m_nRoundness: usize = 0x12D8; // int32
                pub const m_LightingTransform: usize = 0x12E0; // CParticleTransformInput
                pub const m_MaterialFloatVars: usize = 0x1340; // CUtlVector<FloatInputMaterialVariable_t>
                pub const m_MaterialVecVars: usize = 0x1370; // CUtlVector<VecInputMaterialVariable_t>
            }
            // Parent: CParticleFunctionConstraint
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_ConstrainDistance {
                pub const m_fMinDistance: usize = 0x1B0; // CParticleCollectionFloatInput
                pub const m_fMaxDistance: usize = 0x300; // CParticleCollectionFloatInput
                pub const m_nControlPointNumber: usize = 0x450; // int32
                pub const m_CenterOffset: usize = 0x454; // Vector
                pub const m_bGlobalCenter: usize = 0x460; // bool
            }
            // Parent: CParticleFunctionConstraint
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_CollideWithSelf {
                pub const m_flRadiusScale: usize = 0x1B0; // CPerParticleFloatInput
                pub const m_flMinimumSpeed: usize = 0x300; // CPerParticleFloatInput
            }
            // Parent: CParticleFunctionConstraint
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_CollideWithParentParticles {
                pub const m_flParentRadiusScale: usize = 0x1B0; // CPerParticleFloatInput
                pub const m_flRadiusScale: usize = 0x300; // CPerParticleFloatInput
            }
            // Parent: CParticleFunctionConstraint
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_ConstrainDistanceToPath {
                pub const m_fMinDistance: usize = 0x1B0; // float32
                pub const m_flMaxDistance0: usize = 0x1B4; // float32
                pub const m_flMaxDistanceMid: usize = 0x1B8; // float32
                pub const m_flMaxDistance1: usize = 0x1BC; // float32
                pub const m_PathParameters: usize = 0x1C0; // CPathParameters
                pub const m_flTravelTime: usize = 0x200; // float32
                pub const m_nFieldScale: usize = 0x204; // ParticleAttributeIndex_t
                pub const m_nManualTField: usize = 0x208; // ParticleAttributeIndex_t
            }
            // Parent: CParticleFunctionConstraint
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_ConstrainDistanceToUserSpecifiedPath {
                pub const m_fMinDistance: usize = 0x1B0; // float32
                pub const m_flMaxDistance: usize = 0x1B4; // float32
                pub const m_flTimeScale: usize = 0x1B8; // float32
                pub const m_bLoopedPath: usize = 0x1BC; // bool
                pub const m_pointList: usize = 0x1C0; // CUtlVector<PointDefinitionWithTimeValues_t>
            }
            // Parent: CParticleFunctionConstraint
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_PlanarConstraint {
                pub const m_PointOnPlane: usize = 0x1B0; // Vector
                pub const m_PlaneNormal: usize = 0x1BC; // Vector
                pub const m_nControlPointNumber: usize = 0x1C8; // int32
                pub const m_bGlobalOrigin: usize = 0x1CC; // bool
                pub const m_bGlobalNormal: usize = 0x1CD; // bool
                pub const m_flRadiusScale: usize = 0x1D0; // CPerParticleFloatInput
                pub const m_flMaximumDistanceToCP: usize = 0x320; // CParticleCollectionFloatInput
                pub const m_bUseOldCode: usize = 0x470; // bool
            }
            // Parent: CParticleFunctionConstraint
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_WorldCollideConstraint {
            }
            // Parent: CParticleFunctionConstraint
            // Fields count: 27
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_WorldTraceConstraint {
                pub const m_nCP: usize = 0x1B0; // int32
                pub const m_vecCpOffset: usize = 0x1B4; // Vector
                pub const m_nCollisionMode: usize = 0x1C0; // ParticleCollisionMode_t
                pub const m_nCollisionModeMin: usize = 0x1C4; // ParticleCollisionMode_t
                pub const m_nTraceSet: usize = 0x1C8; // ParticleTraceSet_t
                pub const m_CollisionGroupName: usize = 0x1CC; // char[128]
                pub const m_bWorldOnly: usize = 0x24C; // bool
                pub const m_bBrushOnly: usize = 0x24D; // bool
                pub const m_bIncludeWater: usize = 0x24E; // bool
                pub const m_nIgnoreCP: usize = 0x250; // int32
                pub const m_flCpMovementTolerance: usize = 0x254; // float32
                pub const m_flRetestRate: usize = 0x258; // float32
                pub const m_flTraceTolerance: usize = 0x25C; // float32
                pub const m_flCollisionConfirmationSpeed: usize = 0x260; // float32
                pub const m_nMaxTracesPerFrame: usize = 0x264; // float32
                pub const m_flRadiusScale: usize = 0x268; // CPerParticleFloatInput
                pub const m_flBounceAmount: usize = 0x3B8; // CPerParticleFloatInput
                pub const m_flSlideAmount: usize = 0x508; // CPerParticleFloatInput
                pub const m_flRandomDirScale: usize = 0x658; // CPerParticleFloatInput
                pub const m_bDecayBounce: usize = 0x7A8; // bool
                pub const m_bKillonContact: usize = 0x7A9; // bool
                pub const m_flMinSpeed: usize = 0x7AC; // float32
                pub const m_bSetNormal: usize = 0x7B0; // bool
                pub const m_nStickOnCollisionField: usize = 0x7B4; // ParticleAttributeIndex_t
                pub const m_flStopSpeed: usize = 0x7B8; // CPerParticleFloatInput
                pub const m_nEntityStickDataField: usize = 0x908; // ParticleAttributeIndex_t
                pub const m_nEntityStickNormalField: usize = 0x90C; // ParticleAttributeIndex_t
            }
            // Parent: CParticleFunctionConstraint
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_BoxConstraint {
                pub const m_vecMin: usize = 0x1B0; // CParticleCollectionVecInput
                pub const m_vecMax: usize = 0x7E0; // CParticleCollectionVecInput
                pub const m_nCP: usize = 0xE10; // int32
                pub const m_bLocalSpace: usize = 0xE14; // bool
                pub const m_bAccountForRadius: usize = 0xE15; // bool
            }
            // Parent: CParticleFunctionConstraint
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_ShapeMatchingConstraint {
                pub const m_flShapeRestorationTime: usize = 0x1B0; // float32
            }
            // Parent: CParticleFunctionConstraint
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RopeSpringConstraint {
                pub const m_flRestLength: usize = 0x1B0; // CParticleCollectionFloatInput
                pub const m_flMinDistance: usize = 0x300; // CParticleCollectionFloatInput
                pub const m_flMaxDistance: usize = 0x450; // CParticleCollectionFloatInput
                pub const m_flAdjustmentScale: usize = 0x5A0; // float32
                pub const m_flInitialRestingLength: usize = 0x5A8; // CParticleCollectionFloatInput
            }
            // Parent: CParticleFunctionConstraint
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_SpringToVectorConstraint {
                pub const m_flRestLength: usize = 0x1B0; // CPerParticleFloatInput
                pub const m_flMinDistance: usize = 0x300; // CPerParticleFloatInput
                pub const m_flMaxDistance: usize = 0x450; // CPerParticleFloatInput
                pub const m_flRestingLength: usize = 0x5A0; // CPerParticleFloatInput
                pub const m_vecAnchorVector: usize = 0x6F0; // CPerParticleVecInput
            }
            // Parent: CParticleFunctionConstraint
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_ConstrainLineLength {
                pub const m_flMinDistance: usize = 0x1B0; // float32
                pub const m_flMaxDistance: usize = 0x1B4; // float32
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_RingWave {
                pub const m_TransformInput: usize = 0x1B8; // CParticleTransformInput
                pub const m_flParticlesPerOrbit: usize = 0x218; // CParticleCollectionFloatInput
                pub const m_flInitialRadius: usize = 0x368; // CPerParticleFloatInput
                pub const m_flThickness: usize = 0x4B8; // CPerParticleFloatInput
                pub const m_flInitialSpeedMin: usize = 0x608; // CPerParticleFloatInput
                pub const m_flInitialSpeedMax: usize = 0x758; // CPerParticleFloatInput
                pub const m_flRoll: usize = 0x8A8; // CPerParticleFloatInput
                pub const m_flPitch: usize = 0x9F8; // CPerParticleFloatInput
                pub const m_flYaw: usize = 0xB48; // CPerParticleFloatInput
                pub const m_bEvenDistribution: usize = 0xC98; // bool
                pub const m_bXYVelocityOnly: usize = 0xC99; // bool
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_CreateSpiralSphere {
                pub const m_nControlPointNumber: usize = 0x1B4; // int32
                pub const m_nOverrideCP: usize = 0x1B8; // int32
                pub const m_nDensity: usize = 0x1BC; // int32
                pub const m_flInitialRadius: usize = 0x1C0; // float32
                pub const m_flInitialSpeedMin: usize = 0x1C4; // float32
                pub const m_flInitialSpeedMax: usize = 0x1C8; // float32
                pub const m_bUseParticleCount: usize = 0x1CC; // bool
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_CreateInEpitrochoid {
                pub const m_nComponent1: usize = 0x1B4; // int32
                pub const m_nComponent2: usize = 0x1B8; // int32
                pub const m_TransformInput: usize = 0x1C0; // CParticleTransformInput
                pub const m_flParticleDensity: usize = 0x220; // CPerParticleFloatInput
                pub const m_flOffset: usize = 0x370; // CPerParticleFloatInput
                pub const m_flRadius1: usize = 0x4C0; // CPerParticleFloatInput
                pub const m_flRadius2: usize = 0x610; // CPerParticleFloatInput
                pub const m_bUseCount: usize = 0x760; // bool
                pub const m_bUseLocalCoords: usize = 0x761; // bool
                pub const m_bOffsetExistingPos: usize = 0x762; // bool
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_CreatePhyllotaxis {
                pub const m_nControlPointNumber: usize = 0x1B4; // int32
                pub const m_nScaleCP: usize = 0x1B8; // int32
                pub const m_nComponent: usize = 0x1BC; // int32
                pub const m_fRadCentCore: usize = 0x1C0; // float32
                pub const m_fRadPerPoint: usize = 0x1C4; // float32
                pub const m_fRadPerPointTo: usize = 0x1C8; // float32
                pub const m_fpointAngle: usize = 0x1CC; // float32
                pub const m_fsizeOverall: usize = 0x1D0; // float32
                pub const m_fRadBias: usize = 0x1D4; // float32
                pub const m_fMinRad: usize = 0x1D8; // float32
                pub const m_fDistBias: usize = 0x1DC; // float32
                pub const m_bUseLocalCoords: usize = 0x1E0; // bool
                pub const m_bUseWithContEmit: usize = 0x1E1; // bool
                pub const m_bUseOrigRadius: usize = 0x1E2; // bool
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_CreateOnModel {
                pub const m_modelInput: usize = 0x1B8; // CParticleModelInput
                pub const m_transformInput: usize = 0x210; // CParticleTransformInput
                pub const m_nForceInModel: usize = 0x270; // int32
                pub const m_nDesiredHitbox: usize = 0x274; // int32
                pub const m_nHitboxValueFromControlPointIndex: usize = 0x278; // int32
                pub const m_vecHitBoxScale: usize = 0x280; // CParticleCollectionVecInput
                pub const m_flBoneVelocity: usize = 0x8B0; // float32
                pub const m_flMaxBoneVelocity: usize = 0x8B4; // float32
                pub const m_vecDirectionBias: usize = 0x8B8; // CParticleCollectionVecInput
                pub const m_HitboxSetName: usize = 0xEE8; // char[128]
                pub const m_bLocalCoords: usize = 0xF68; // bool
                pub const m_bUseBones: usize = 0xF69; // bool
                pub const m_bUseMesh: usize = 0xF6A; // bool
                pub const m_flShellSize: usize = 0xF70; // CParticleCollectionFloatInput
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_CreateOnModelAtHeight {
                pub const m_bUseBones: usize = 0x1B4; // bool
                pub const m_bForceZ: usize = 0x1B5; // bool
                pub const m_nControlPointNumber: usize = 0x1B8; // int32
                pub const m_nHeightCP: usize = 0x1BC; // int32
                pub const m_bUseWaterHeight: usize = 0x1C0; // bool
                pub const m_flDesiredHeight: usize = 0x1C8; // CParticleCollectionFloatInput
                pub const m_vecHitBoxScale: usize = 0x318; // CParticleCollectionVecInput
                pub const m_vecDirectionBias: usize = 0x948; // CParticleCollectionVecInput
                pub const m_nBiasType: usize = 0xF78; // ParticleHitboxBiasType_t
                pub const m_bLocalCoords: usize = 0xF7C; // bool
                pub const m_bPreferMovingBoxes: usize = 0xF7D; // bool
                pub const m_HitboxSetName: usize = 0xF7E; // char[128]
                pub const m_flHitboxVelocityScale: usize = 0x1000; // CParticleCollectionFloatInput
                pub const m_flMaxBoneVelocity: usize = 0x1150; // CParticleCollectionFloatInput
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_SetHitboxToClosest {
                pub const m_nControlPointNumber: usize = 0x1B4; // int32
                pub const m_nDesiredHitbox: usize = 0x1B8; // int32
                pub const m_vecHitBoxScale: usize = 0x1C0; // CParticleCollectionVecInput
                pub const m_HitboxSetName: usize = 0x7F0; // char[128]
                pub const m_bUseBones: usize = 0x870; // bool
                pub const m_bUseClosestPointOnHitbox: usize = 0x871; // bool
                pub const m_nTestType: usize = 0x874; // ClosestPointTestType_t
                pub const m_flHybridRatio: usize = 0x878; // CParticleCollectionFloatInput
                pub const m_bUpdatePosition: usize = 0x9C8; // bool
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_SetHitboxToModel {
                pub const m_nControlPointNumber: usize = 0x1B4; // int32
                pub const m_nForceInModel: usize = 0x1B8; // int32
                pub const m_nDesiredHitbox: usize = 0x1BC; // int32
                pub const m_vecHitBoxScale: usize = 0x1C0; // CParticleCollectionVecInput
                pub const m_vecDirectionBias: usize = 0x7F0; // Vector
                pub const m_bMaintainHitbox: usize = 0x7FC; // bool
                pub const m_bUseBones: usize = 0x7FD; // bool
                pub const m_HitboxSetName: usize = 0x7FE; // char[128]
                pub const m_flShellSize: usize = 0x880; // CParticleCollectionFloatInput
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_CreateWithinSphereTransform {
                pub const m_fRadiusMin: usize = 0x1B8; // CPerParticleFloatInput
                pub const m_fRadiusMax: usize = 0x308; // CPerParticleFloatInput
                pub const m_vecDistanceBias: usize = 0x458; // CPerParticleVecInput
                pub const m_vecDistanceBiasAbs: usize = 0xA88; // Vector
                pub const m_TransformInput: usize = 0xA98; // CParticleTransformInput
                pub const m_fSpeedMin: usize = 0xAF8; // CPerParticleFloatInput
                pub const m_fSpeedMax: usize = 0xC48; // CPerParticleFloatInput
                pub const m_fSpeedRandExp: usize = 0xD98; // float32
                pub const m_bLocalCoords: usize = 0xD9C; // bool
                pub const m_flEndCPGrowthTime: usize = 0xDA0; // float32
                pub const m_LocalCoordinateSystemSpeedMin: usize = 0xDA8; // CPerParticleVecInput
                pub const m_LocalCoordinateSystemSpeedMax: usize = 0x13D8; // CPerParticleVecInput
                pub const m_nFieldOutput: usize = 0x1A08; // ParticleAttributeIndex_t
                pub const m_nFieldVelocity: usize = 0x1A0C; // ParticleAttributeIndex_t
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_CreateWithinBox {
                pub const m_vecMin: usize = 0x1B8; // CPerParticleVecInput
                pub const m_vecMax: usize = 0x7E8; // CPerParticleVecInput
                pub const m_nControlPointNumber: usize = 0xE18; // int32
                pub const m_bLocalSpace: usize = 0xE1C; // bool
                pub const m_randomnessParameters: usize = 0xE20; // CRandomNumberGeneratorParameters
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_CreateOnGrid {
                pub const m_nXCount: usize = 0x1B8; // CParticleCollectionFloatInput
                pub const m_nYCount: usize = 0x308; // CParticleCollectionFloatInput
                pub const m_nZCount: usize = 0x458; // CParticleCollectionFloatInput
                pub const m_nXSpacing: usize = 0x5A8; // CParticleCollectionFloatInput
                pub const m_nYSpacing: usize = 0x6F8; // CParticleCollectionFloatInput
                pub const m_nZSpacing: usize = 0x848; // CParticleCollectionFloatInput
                pub const m_nControlPointNumber: usize = 0x998; // int32
                pub const m_bLocalSpace: usize = 0x99C; // bool
                pub const m_bCenter: usize = 0x99D; // bool
                pub const m_bHollow: usize = 0x99E; // bool
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_PositionOffset {
                pub const m_OffsetMin: usize = 0x1B8; // CPerParticleVecInput
                pub const m_OffsetMax: usize = 0x7E8; // CPerParticleVecInput
                pub const m_TransformInput: usize = 0xE18; // CParticleTransformInput
                pub const m_bLocalCoords: usize = 0xE78; // bool
                pub const m_bProportional: usize = 0xE79; // bool
                pub const m_randomnessParameters: usize = 0xE7C; // CRandomNumberGeneratorParameters
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_PositionOffsetToCP {
                pub const m_nControlPointNumberStart: usize = 0x1B4; // int32
                pub const m_nControlPointNumberEnd: usize = 0x1B8; // int32
                pub const m_bLocalCoords: usize = 0x1BC; // bool
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 13
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_PositionPlaceOnGround {
                pub const m_flOffset: usize = 0x1B8; // CPerParticleFloatInput
                pub const m_flMaxTraceLength: usize = 0x308; // CPerParticleFloatInput
                pub const m_CollisionGroupName: usize = 0x458; // char[128]
                pub const m_nTraceSet: usize = 0x4D8; // ParticleTraceSet_t
                pub const m_nTraceMissBehavior: usize = 0x4E8; // ParticleTraceMissBehavior_t
                pub const m_bIncludeWater: usize = 0x4EC; // bool
                pub const m_bSetNormal: usize = 0x4ED; // bool
                pub const m_bSetPXYZOnly: usize = 0x4EE; // bool
                pub const m_bTraceAlongNormal: usize = 0x4EF; // bool
                pub const m_bOffsetonColOnly: usize = 0x4F0; // bool
                pub const m_flOffsetByRadiusFactor: usize = 0x4F4; // float32
                pub const m_nPreserveOffsetCP: usize = 0x4F8; // int32
                pub const m_nIgnoreCP: usize = 0x4FC; // int32
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_VelocityFromNormal {
                pub const m_fSpeedMin: usize = 0x1B4; // float32
                pub const m_fSpeedMax: usize = 0x1B8; // float32
                pub const m_bIgnoreDt: usize = 0x1BC; // bool
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_VelocityRandom {
                pub const m_nControlPointNumber: usize = 0x1B4; // int32
                pub const m_fSpeedMin: usize = 0x1B8; // CPerParticleFloatInput
                pub const m_fSpeedMax: usize = 0x308; // CPerParticleFloatInput
                pub const m_LocalCoordinateSystemSpeedMin: usize = 0x458; // CPerParticleVecInput
                pub const m_LocalCoordinateSystemSpeedMax: usize = 0xA88; // CPerParticleVecInput
                pub const m_bIgnoreDT: usize = 0x10B8; // bool
                pub const m_randomnessParameters: usize = 0x10BC; // CRandomNumberGeneratorParameters
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_InitialVelocityNoise {
                pub const m_vecAbsVal: usize = 0x1B4; // Vector
                pub const m_vecAbsValInv: usize = 0x1C0; // Vector
                pub const m_vecOffsetLoc: usize = 0x1D0; // CPerParticleVecInput
                pub const m_flOffset: usize = 0x800; // CPerParticleFloatInput
                pub const m_vecOutputMin: usize = 0x950; // CPerParticleVecInput
                pub const m_vecOutputMax: usize = 0xF80; // CPerParticleVecInput
                pub const m_flNoiseScale: usize = 0x15B0; // CPerParticleFloatInput
                pub const m_flNoiseScaleLoc: usize = 0x1700; // CPerParticleFloatInput
                pub const m_TransformInput: usize = 0x1850; // CParticleTransformInput
                pub const m_bIgnoreDt: usize = 0x18B0; // bool
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_InitialVelocityFromHitbox {
                pub const m_flVelocityMin: usize = 0x1B4; // float32
                pub const m_flVelocityMax: usize = 0x1B8; // float32
                pub const m_nControlPointNumber: usize = 0x1BC; // int32
                pub const m_HitboxSetName: usize = 0x1C0; // char[128]
                pub const m_bUseBones: usize = 0x240; // bool
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_VelocityRadialRandom {
                pub const m_nControlPointNumber: usize = 0x1B4; // int32
                pub const m_fSpeedMin: usize = 0x1B8; // float32
                pub const m_fSpeedMax: usize = 0x1BC; // float32
                pub const m_vecLocalCoordinateSystemSpeedScale: usize = 0x1C0; // Vector
                pub const m_bIgnoreDelta: usize = 0x1CD; // bool
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_RandomLifeTime {
                pub const m_fLifetimeMin: usize = 0x1B4; // float32
                pub const m_fLifetimeMax: usize = 0x1B8; // float32
                pub const m_fLifetimeRandExponent: usize = 0x1BC; // float32
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_RandomScalar {
                pub const m_flMin: usize = 0x1B4; // float32
                pub const m_flMax: usize = 0x1B8; // float32
                pub const m_flExponent: usize = 0x1BC; // float32
                pub const m_nFieldOutput: usize = 0x1C0; // ParticleAttributeIndex_t
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_RandomVector {
                pub const m_vecMin: usize = 0x1B4; // Vector
                pub const m_vecMax: usize = 0x1C0; // Vector
                pub const m_nFieldOutput: usize = 0x1CC; // ParticleAttributeIndex_t
                pub const m_randomnessParameters: usize = 0x1D0; // CRandomNumberGeneratorParameters
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_RandomVectorComponent {
                pub const m_flMin: usize = 0x1B4; // float32
                pub const m_flMax: usize = 0x1B8; // float32
                pub const m_nFieldOutput: usize = 0x1BC; // ParticleAttributeIndex_t
                pub const m_nComponent: usize = 0x1C0; // int32
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_AddVectorToVector {
                pub const m_vecScale: usize = 0x1B4; // Vector
                pub const m_nFieldOutput: usize = 0x1C0; // ParticleAttributeIndex_t
                pub const m_nFieldInput: usize = 0x1C4; // ParticleAttributeIndex_t
                pub const m_vOffsetMin: usize = 0x1C8; // Vector
                pub const m_vOffsetMax: usize = 0x1D4; // Vector
                pub const m_randomnessParameters: usize = 0x1E0; // CRandomNumberGeneratorParameters
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_RandomAlphaWindowThreshold {
                pub const m_flMin: usize = 0x1B4; // float32
                pub const m_flMax: usize = 0x1B8; // float32
                pub const m_flExponent: usize = 0x1BC; // float32
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_RandomRadius {
                pub const m_flRadiusMin: usize = 0x1B4; // float32
                pub const m_flRadiusMax: usize = 0x1B8; // float32
                pub const m_flRadiusRandExponent: usize = 0x1BC; // float32
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_RandomAlpha {
                pub const m_nFieldOutput: usize = 0x1B4; // ParticleAttributeIndex_t
                pub const m_nAlphaMin: usize = 0x1B8; // int32
                pub const m_nAlphaMax: usize = 0x1BC; // int32
                pub const m_flAlphaRandExponent: usize = 0x1C8; // float32
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CGeneralRandomRotation {
                pub const m_nFieldOutput: usize = 0x1B4; // ParticleAttributeIndex_t
                pub const m_flDegrees: usize = 0x1B8; // float32
                pub const m_flDegreesMin: usize = 0x1BC; // float32
                pub const m_flDegreesMax: usize = 0x1C0; // float32
                pub const m_flRotationRandExponent: usize = 0x1C4; // float32
                pub const m_bRandomlyFlipDirection: usize = 0x1C8; // bool
            }
            // Parent: CGeneralRandomRotation
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_RandomRotation {
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_Orient2DRelToCP {
                pub const m_nCP: usize = 0x1B4; // int32
                pub const m_nFieldOutput: usize = 0x1B8; // ParticleAttributeIndex_t
                pub const m_flRotOffset: usize = 0x1BC; // float32
            }
            // Parent: CGeneralRandomRotation
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_RandomRotationSpeed {
            }
            // Parent: CGeneralRandomRotation
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_RandomYaw {
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_RandomColor {
                pub const m_ColorMin: usize = 0x1D0; // Color
                pub const m_ColorMax: usize = 0x1D4; // Color
                pub const m_TintMin: usize = 0x1D8; // Color
                pub const m_TintMax: usize = 0x1DC; // Color
                pub const m_flTintPerc: usize = 0x1E0; // float32
                pub const m_flUpdateThreshold: usize = 0x1E4; // float32
                pub const m_nTintCP: usize = 0x1E8; // int32
                pub const m_nFieldOutput: usize = 0x1EC; // ParticleAttributeIndex_t
                pub const m_nTintBlendMode: usize = 0x1F0; // ParticleColorBlendMode_t
                pub const m_flLightAmplification: usize = 0x1F4; // float32
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_ColorLitPerParticle {
                pub const m_ColorMin: usize = 0x1CC; // Color
                pub const m_ColorMax: usize = 0x1D0; // Color
                pub const m_TintMin: usize = 0x1D4; // Color
                pub const m_TintMax: usize = 0x1D8; // Color
                pub const m_flTintPerc: usize = 0x1DC; // float32
                pub const m_nTintBlendMode: usize = 0x1E0; // ParticleColorBlendMode_t
                pub const m_flLightAmplification: usize = 0x1E4; // float32
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_RandomTrailLength {
                pub const m_flMinLength: usize = 0x1B4; // float32
                pub const m_flMaxLength: usize = 0x1B8; // float32
                pub const m_flLengthRandExponent: usize = 0x1BC; // float32
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_RandomSequence {
                pub const m_nSequenceMin: usize = 0x1B4; // int32
                pub const m_nSequenceMax: usize = 0x1B8; // int32
                pub const m_bShuffle: usize = 0x1BC; // bool
                pub const m_bLinear: usize = 0x1BD; // bool
                pub const m_WeightedList: usize = 0x1C0; // CUtlVector<SequenceWeightedList_t>
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_SequenceFromCP {
                pub const m_bKillUnused: usize = 0x1B4; // bool
                pub const m_bRadiusScale: usize = 0x1B5; // bool
                pub const m_nCP: usize = 0x1B8; // int32
                pub const m_vecOffset: usize = 0x1BC; // Vector
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_RandomModelSequence {
                pub const m_ActivityName: usize = 0x1B4; // char[256]
                pub const m_SequenceName: usize = 0x2B4; // char[256]
                pub const m_hModel: usize = 0x3B8; // CStrongHandle<InfoForResourceTypeCModel>
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_ScaleVelocity {
                pub const m_vecScale: usize = 0x1B8; // CParticleCollectionVecInput
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_PositionWarp {
                pub const m_vecWarpMin: usize = 0x1B8; // CParticleCollectionVecInput
                pub const m_vecWarpMax: usize = 0x7E8; // CParticleCollectionVecInput
                pub const m_nScaleControlPointNumber: usize = 0xE18; // int32
                pub const m_nControlPointNumber: usize = 0xE1C; // int32
                pub const m_nRadiusComponent: usize = 0xE20; // int32
                pub const m_flWarpTime: usize = 0xE24; // float32
                pub const m_flWarpStartTime: usize = 0xE28; // float32
                pub const m_flPrevPosScale: usize = 0xE2C; // float32
                pub const m_bInvertWarp: usize = 0xE30; // bool
                pub const m_bUseCount: usize = 0xE31; // bool
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_PositionWarpScalar {
                pub const m_vecWarpMin: usize = 0x1B4; // Vector
                pub const m_vecWarpMax: usize = 0x1C0; // Vector
                pub const m_InputValue: usize = 0x1D0; // CPerParticleFloatInput
                pub const m_flPrevPosScale: usize = 0x320; // float32
                pub const m_nScaleControlPointNumber: usize = 0x324; // int32
                pub const m_nControlPointNumber: usize = 0x328; // int32
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_CreationNoise {
                pub const m_nFieldOutput: usize = 0x1B4; // ParticleAttributeIndex_t
                pub const m_bAbsVal: usize = 0x1B8; // bool
                pub const m_bAbsValInv: usize = 0x1B9; // bool
                pub const m_flOffset: usize = 0x1BC; // float32
                pub const m_flOutputMin: usize = 0x1C0; // float32
                pub const m_flOutputMax: usize = 0x1C4; // float32
                pub const m_flNoiseScale: usize = 0x1C8; // float32
                pub const m_flNoiseScaleLoc: usize = 0x1CC; // float32
                pub const m_vecOffsetLoc: usize = 0x1D0; // Vector
                pub const m_flWorldTimeScale: usize = 0x1DC; // float32
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_CreateAlongPath {
                pub const m_fMaxDistance: usize = 0x1B4; // float32
                pub const m_PathParams: usize = 0x1C0; // CPathParameters
                pub const m_bUseRandomCPs: usize = 0x200; // bool
                pub const m_vEndOffset: usize = 0x204; // Vector
                pub const m_bSaveOffset: usize = 0x210; // bool
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_MoveBetweenPoints {
                pub const m_flSpeedMin: usize = 0x1B8; // CPerParticleFloatInput
                pub const m_flSpeedMax: usize = 0x308; // CPerParticleFloatInput
                pub const m_flEndSpread: usize = 0x458; // CPerParticleFloatInput
                pub const m_flStartOffset: usize = 0x5A8; // CPerParticleFloatInput
                pub const m_flEndOffset: usize = 0x6F8; // CPerParticleFloatInput
                pub const m_nEndControlPointNumber: usize = 0x848; // int32
                pub const m_bTrailBias: usize = 0x84C; // bool
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_RemapScalar {
                pub const m_nFieldInput: usize = 0x1B4; // ParticleAttributeIndex_t
                pub const m_nFieldOutput: usize = 0x1B8; // ParticleAttributeIndex_t
                pub const m_flInputMin: usize = 0x1BC; // float32
                pub const m_flInputMax: usize = 0x1C0; // float32
                pub const m_flOutputMin: usize = 0x1C4; // float32
                pub const m_flOutputMax: usize = 0x1C8; // float32
                pub const m_flStartTime: usize = 0x1CC; // float32
                pub const m_flEndTime: usize = 0x1D0; // float32
                pub const m_nSetMethod: usize = 0x1D4; // ParticleSetMethod_t
                pub const m_bActiveRange: usize = 0x1D8; // bool
                pub const m_flRemapBias: usize = 0x1DC; // float32
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_RemapParticleCountToScalar {
                pub const m_nFieldOutput: usize = 0x1B4; // ParticleAttributeIndex_t
                pub const m_nInputMin: usize = 0x1B8; // int32
                pub const m_nInputMax: usize = 0x1BC; // int32
                pub const m_nScaleControlPoint: usize = 0x1C0; // int32
                pub const m_nScaleControlPointField: usize = 0x1C4; // int32
                pub const m_flOutputMin: usize = 0x1C8; // float32
                pub const m_flOutputMax: usize = 0x1CC; // float32
                pub const m_nSetMethod: usize = 0x1D0; // ParticleSetMethod_t
                pub const m_bActiveRange: usize = 0x1D4; // bool
                pub const m_bInvert: usize = 0x1D5; // bool
                pub const m_bWrap: usize = 0x1D6; // bool
                pub const m_flRemapBias: usize = 0x1D8; // float32
            }
            // Parent: C_INIT_RemapParticleCountToScalar
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_RemapParticleCountToNamedModelElementScalar {
                pub const m_hModel: usize = 0x1E0; // CStrongHandle<InfoForResourceTypeCModel>
                pub const m_outputMinName: usize = 0x1E8; // CUtlString
                pub const m_outputMaxName: usize = 0x1F0; // CUtlString
                pub const m_bModelFromRenderer: usize = 0x1F8; // bool
            }
            // Parent: C_INIT_RemapParticleCountToNamedModelElementScalar
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_RemapParticleCountToNamedModelSequenceScalar {
            }
            // Parent: C_INIT_RemapParticleCountToNamedModelElementScalar
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_RemapParticleCountToNamedModelBodyPartScalar {
            }
            // Parent: C_INIT_RemapParticleCountToNamedModelElementScalar
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_RemapParticleCountToNamedModelMeshGroupScalar {
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_InheritVelocity {
                pub const m_nControlPointNumber: usize = 0x1B4; // int32
                pub const m_flVelocityScale: usize = 0x1B8; // float32
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_VelocityFromCP {
                pub const m_velocityInput: usize = 0x1B8; // CParticleCollectionVecInput
                pub const m_transformInput: usize = 0x7E8; // CParticleTransformInput
                pub const m_flVelocityScale: usize = 0x848; // float32
                pub const m_bDirectionOnly: usize = 0x84C; // bool
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_AgeNoise {
                pub const m_bAbsVal: usize = 0x1B4; // bool
                pub const m_bAbsValInv: usize = 0x1B5; // bool
                pub const m_flOffset: usize = 0x1B8; // float32
                pub const m_flAgeMin: usize = 0x1BC; // float32
                pub const m_flAgeMax: usize = 0x1C0; // float32
                pub const m_flNoiseScale: usize = 0x1C4; // float32
                pub const m_flNoiseScaleLoc: usize = 0x1C8; // float32
                pub const m_vecOffsetLoc: usize = 0x1CC; // Vector
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_SequenceLifeTime {
                pub const m_flFramerate: usize = 0x1B4; // float32
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_RemapScalarToVector {
                pub const m_nFieldInput: usize = 0x1B4; // ParticleAttributeIndex_t
                pub const m_nFieldOutput: usize = 0x1B8; // ParticleAttributeIndex_t
                pub const m_flInputMin: usize = 0x1BC; // float32
                pub const m_flInputMax: usize = 0x1C0; // float32
                pub const m_vecOutputMin: usize = 0x1C4; // Vector
                pub const m_vecOutputMax: usize = 0x1D0; // Vector
                pub const m_flStartTime: usize = 0x1DC; // float32
                pub const m_flEndTime: usize = 0x1E0; // float32
                pub const m_nSetMethod: usize = 0x1E4; // ParticleSetMethod_t
                pub const m_nControlPointNumber: usize = 0x1E8; // int32
                pub const m_bLocalCoords: usize = 0x1EC; // bool
                pub const m_flRemapBias: usize = 0x1F0; // float32
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_OffsetVectorToVector {
                pub const m_nFieldInput: usize = 0x1B4; // ParticleAttributeIndex_t
                pub const m_nFieldOutput: usize = 0x1B8; // ParticleAttributeIndex_t
                pub const m_vecOutputMin: usize = 0x1BC; // Vector
                pub const m_vecOutputMax: usize = 0x1C8; // Vector
                pub const m_randomnessParameters: usize = 0x1D4; // CRandomNumberGeneratorParameters
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 6
            //
            // Metadata:
            // MParticleMinVersion
            // MGetKV3ClassDefaults
            pub mod C_INIT_CreateSequentialPathV2 {
                pub const m_fMaxDistance: usize = 0x1B8; // CPerParticleFloatInput
                pub const m_flNumToAssign: usize = 0x308; // CParticleCollectionFloatInput
                pub const m_bLoop: usize = 0x458; // bool
                pub const m_bCPPairs: usize = 0x459; // bool
                pub const m_bSaveOffset: usize = 0x45A; // bool
                pub const m_PathParams: usize = 0x460; // CPathParameters
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 6
            //
            // Metadata:
            // MParticleMaxVersion
            // MParticleReplacementOp
            // MGetKV3ClassDefaults
            pub mod C_INIT_CreateSequentialPath {
                pub const m_fMaxDistance: usize = 0x1B4; // float32
                pub const m_flNumToAssign: usize = 0x1B8; // float32
                pub const m_bLoop: usize = 0x1BC; // bool
                pub const m_bCPPairs: usize = 0x1BD; // bool
                pub const m_bSaveOffset: usize = 0x1BE; // bool
                pub const m_PathParams: usize = 0x1C0; // CPathParameters
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 13
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_InitialRepulsionVelocity {
                pub const m_CollisionGroupName: usize = 0x1B4; // char[128]
                pub const m_nTraceSet: usize = 0x234; // ParticleTraceSet_t
                pub const m_vecOutputMin: usize = 0x238; // Vector
                pub const m_vecOutputMax: usize = 0x244; // Vector
                pub const m_nControlPointNumber: usize = 0x250; // int32
                pub const m_bPerParticle: usize = 0x254; // bool
                pub const m_bTranslate: usize = 0x255; // bool
                pub const m_bProportional: usize = 0x256; // bool
                pub const m_flTraceLength: usize = 0x258; // float32
                pub const m_bPerParticleTR: usize = 0x25C; // bool
                pub const m_bInherit: usize = 0x25D; // bool
                pub const m_nChildCP: usize = 0x260; // int32
                pub const m_nChildGroupID: usize = 0x264; // int32
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_RandomYawFlip {
                pub const m_flPercent: usize = 0x1B4; // float32
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_RandomSecondSequence {
                pub const m_nSequenceMin: usize = 0x1B4; // int32
                pub const m_nSequenceMax: usize = 0x1B8; // int32
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_RemapCPtoScalar {
                pub const m_nCPInput: usize = 0x1B4; // int32
                pub const m_nFieldOutput: usize = 0x1B8; // ParticleAttributeIndex_t
                pub const m_nField: usize = 0x1BC; // int32
                pub const m_flInputMin: usize = 0x1C0; // float32
                pub const m_flInputMax: usize = 0x1C4; // float32
                pub const m_flOutputMin: usize = 0x1C8; // float32
                pub const m_flOutputMax: usize = 0x1CC; // float32
                pub const m_flStartTime: usize = 0x1D0; // float32
                pub const m_flEndTime: usize = 0x1D4; // float32
                pub const m_nSetMethod: usize = 0x1D8; // ParticleSetMethod_t
                pub const m_flRemapBias: usize = 0x1DC; // float32
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 13
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_RemapTransformToVector {
                pub const m_nFieldOutput: usize = 0x1B4; // ParticleAttributeIndex_t
                pub const m_vInputMin: usize = 0x1B8; // Vector
                pub const m_vInputMax: usize = 0x1C4; // Vector
                pub const m_vOutputMin: usize = 0x1D0; // Vector
                pub const m_vOutputMax: usize = 0x1DC; // Vector
                pub const m_TransformInput: usize = 0x1E8; // CParticleTransformInput
                pub const m_LocalSpaceTransform: usize = 0x248; // CParticleTransformInput
                pub const m_flStartTime: usize = 0x2A8; // float32
                pub const m_flEndTime: usize = 0x2AC; // float32
                pub const m_nSetMethod: usize = 0x2B0; // ParticleSetMethod_t
                pub const m_bOffset: usize = 0x2B4; // bool
                pub const m_bAccelerate: usize = 0x2B5; // bool
                pub const m_flRemapBias: usize = 0x2B8; // float32
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_ChaoticAttractor {
                pub const m_flAParm: usize = 0x1B4; // float32
                pub const m_flBParm: usize = 0x1B8; // float32
                pub const m_flCParm: usize = 0x1BC; // float32
                pub const m_flDParm: usize = 0x1C0; // float32
                pub const m_flScale: usize = 0x1C4; // float32
                pub const m_flSpeedMin: usize = 0x1C8; // float32
                pub const m_flSpeedMax: usize = 0x1CC; // float32
                pub const m_nBaseCP: usize = 0x1D0; // int32
                pub const m_bUniformSpeed: usize = 0x1D4; // bool
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_CreateFromParentParticles {
                pub const m_flVelocityScale: usize = 0x1B4; // float32
                pub const m_flIncrement: usize = 0x1B8; // float32
                pub const m_bRandomDistribution: usize = 0x1BC; // bool
                pub const m_nRandomSeed: usize = 0x1C0; // int32
                pub const m_bSubFrame: usize = 0x1C4; // bool
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_InheritFromParentParticles {
                pub const m_flScale: usize = 0x1B4; // float32
                pub const m_nFieldOutput: usize = 0x1B8; // ParticleAttributeIndex_t
                pub const m_nIncrement: usize = 0x1BC; // int32
                pub const m_bRandomDistribution: usize = 0x1C0; // bool
                pub const m_nRandomSeed: usize = 0x1C4; // int32
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_CreateFromCPs {
                pub const m_nIncrement: usize = 0x1B4; // int32
                pub const m_nMinCP: usize = 0x1B8; // int32
                pub const m_nMaxCP: usize = 0x1BC; // int32
                pub const m_nDynamicCPCount: usize = 0x1C0; // CParticleCollectionFloatInput
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 15
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_DistanceToCPInit {
                pub const m_nFieldOutput: usize = 0x1B4; // ParticleAttributeIndex_t
                pub const m_flInputMin: usize = 0x1B8; // CPerParticleFloatInput
                pub const m_flInputMax: usize = 0x308; // CPerParticleFloatInput
                pub const m_flOutputMin: usize = 0x458; // CPerParticleFloatInput
                pub const m_flOutputMax: usize = 0x5A8; // CPerParticleFloatInput
                pub const m_nStartCP: usize = 0x6F8; // int32
                pub const m_bLOS: usize = 0x6FC; // bool
                pub const m_CollisionGroupName: usize = 0x6FD; // char[128]
                pub const m_nTraceSet: usize = 0x780; // ParticleTraceSet_t
                pub const m_flMaxTraceLength: usize = 0x788; // CPerParticleFloatInput
                pub const m_flLOSScale: usize = 0x8D8; // float32
                pub const m_nSetMethod: usize = 0x8DC; // ParticleSetMethod_t
                pub const m_bActiveRange: usize = 0x8E0; // bool
                pub const m_vecDistanceScale: usize = 0x8E4; // Vector
                pub const m_flRemapBias: usize = 0x8F0; // float32
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_LifespanFromVelocity {
                pub const m_vecComponentScale: usize = 0x1B4; // Vector
                pub const m_flTraceOffset: usize = 0x1C0; // float32
                pub const m_flMaxTraceLength: usize = 0x1C4; // float32
                pub const m_flTraceTolerance: usize = 0x1C8; // float32
                pub const m_nMaxPlanes: usize = 0x1CC; // int32
                pub const m_CollisionGroupName: usize = 0x1D4; // char[128]
                pub const m_nTraceSet: usize = 0x254; // ParticleTraceSet_t
                pub const m_bIncludeWater: usize = 0x260; // bool
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_CreateFromPlaneCache {
                pub const m_vecOffsetMin: usize = 0x1B4; // Vector
                pub const m_vecOffsetMax: usize = 0x1C0; // Vector
                pub const m_bUseNormal: usize = 0x1CD; // bool
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_ModelCull {
                pub const m_nControlPointNumber: usize = 0x1B4; // int32
                pub const m_bBoundBox: usize = 0x1B8; // bool
                pub const m_bCullOutside: usize = 0x1B9; // bool
                pub const m_bUseBones: usize = 0x1BA; // bool
                pub const m_HitboxSetName: usize = 0x1BB; // char[128]
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_DistanceCull {
                pub const m_nControlPoint: usize = 0x1B4; // int32
                pub const m_flDistance: usize = 0x1B8; // CParticleCollectionFloatInput
                pub const m_bCullInside: usize = 0x308; // bool
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_PlaneCull {
                pub const m_nControlPoint: usize = 0x1B4; // int32
                pub const m_flDistance: usize = 0x1B8; // CParticleCollectionFloatInput
                pub const m_bCullInside: usize = 0x308; // bool
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_DistanceToNeighborCull {
                pub const m_flDistance: usize = 0x1B8; // CPerParticleFloatInput
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_RtEnvCull {
                pub const m_vecTestDir: usize = 0x1B4; // Vector
                pub const m_vecTestNormal: usize = 0x1C0; // Vector
                pub const m_bUseVelocity: usize = 0x1CC; // bool
                pub const m_bCullOnMiss: usize = 0x1CD; // bool
                pub const m_bLifeAdjust: usize = 0x1CE; // bool
                pub const m_RtEnvName: usize = 0x1CF; // char[128]
                pub const m_nRTEnvCP: usize = 0x250; // int32
                pub const m_nComponent: usize = 0x254; // int32
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_NormalAlignToCP {
                pub const m_transformInput: usize = 0x1B8; // CParticleTransformInput
                pub const m_nControlPointAxis: usize = 0x218; // ParticleControlPointAxis_t
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_NormalOffset {
                pub const m_OffsetMin: usize = 0x1B4; // Vector
                pub const m_OffsetMax: usize = 0x1C0; // Vector
                pub const m_nControlPointNumber: usize = 0x1CC; // int32
                pub const m_bLocalCoords: usize = 0x1D0; // bool
                pub const m_bNormalize: usize = 0x1D1; // bool
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_RemapSpeedToScalar {
                pub const m_nFieldOutput: usize = 0x1B4; // ParticleAttributeIndex_t
                pub const m_nControlPointNumber: usize = 0x1B8; // int32
                pub const m_flStartTime: usize = 0x1BC; // float32
                pub const m_flEndTime: usize = 0x1C0; // float32
                pub const m_flInputMin: usize = 0x1C4; // float32
                pub const m_flInputMax: usize = 0x1C8; // float32
                pub const m_flOutputMin: usize = 0x1CC; // float32
                pub const m_flOutputMax: usize = 0x1D0; // float32
                pub const m_nSetMethod: usize = 0x1D4; // ParticleSetMethod_t
                pub const m_bPerParticle: usize = 0x1D8; // bool
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_InitFromCPSnapshot {
                pub const m_nControlPointNumber: usize = 0x1B4; // int32
                pub const m_nAttributeToRead: usize = 0x1B8; // ParticleAttributeIndex_t
                pub const m_nAttributeToWrite: usize = 0x1BC; // ParticleAttributeIndex_t
                pub const m_nLocalSpaceCP: usize = 0x1C0; // int32
                pub const m_bRandom: usize = 0x1C4; // bool
                pub const m_bReverse: usize = 0x1C5; // bool
                pub const m_nSnapShotIncrement: usize = 0x1C8; // CParticleCollectionFloatInput
                pub const m_nManualSnapshotIndex: usize = 0x318; // CPerParticleFloatInput
                pub const m_nRandomSeed: usize = 0x468; // int32
                pub const m_bLocalSpaceAngles: usize = 0x46C; // bool
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 19
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_InitSkinnedPositionFromCPSnapshot {
                pub const m_nSnapshotControlPointNumber: usize = 0x1B4; // int32
                pub const m_nControlPointNumber: usize = 0x1B8; // int32
                pub const m_bRandom: usize = 0x1BC; // bool
                pub const m_nRandomSeed: usize = 0x1C0; // int32
                pub const m_bRigid: usize = 0x1C4; // bool
                pub const m_bSetNormal: usize = 0x1C5; // bool
                pub const m_bIgnoreDt: usize = 0x1C6; // bool
                pub const m_flMinNormalVelocity: usize = 0x1C8; // float32
                pub const m_flMaxNormalVelocity: usize = 0x1CC; // float32
                pub const m_nIndexType: usize = 0x1D0; // SnapshotIndexType_t
                pub const m_flReadIndex: usize = 0x1D8; // CPerParticleFloatInput
                pub const m_flIncrement: usize = 0x328; // float32
                pub const m_nFullLoopIncrement: usize = 0x32C; // int32
                pub const m_nSnapShotStartPoint: usize = 0x330; // int32
                pub const m_flBoneVelocity: usize = 0x334; // float32
                pub const m_flBoneVelocityMax: usize = 0x338; // float32
                pub const m_bCopyColor: usize = 0x33C; // bool
                pub const m_bCopyAlpha: usize = 0x33D; // bool
                pub const m_bSetRadius: usize = 0x33E; // bool
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_InitFromParentKilled {
                pub const m_nAttributeToCopy: usize = 0x1B4; // ParticleAttributeIndex_t
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_InitFromVectorFieldSnapshot {
                pub const m_nControlPointNumber: usize = 0x1B4; // int32
                pub const m_nLocalSpaceCP: usize = 0x1B8; // int32
                pub const m_nWeightUpdateCP: usize = 0x1BC; // int32
                pub const m_bUseVerticalVelocity: usize = 0x1C0; // bool
                pub const m_vecScale: usize = 0x1C8; // CPerParticleVecInput
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_RemapInitialDirectionToTransformToVector {
                pub const m_TransformInput: usize = 0x1B8; // CParticleTransformInput
                pub const m_nFieldOutput: usize = 0x218; // ParticleAttributeIndex_t
                pub const m_flScale: usize = 0x21C; // float32
                pub const m_flOffsetRot: usize = 0x220; // float32
                pub const m_vecOffsetAxis: usize = 0x224; // Vector
                pub const m_bNormalize: usize = 0x230; // bool
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_RemapInitialTransformDirectionToRotation {
                pub const m_TransformInput: usize = 0x1B8; // CParticleTransformInput
                pub const m_nFieldOutput: usize = 0x218; // ParticleAttributeIndex_t
                pub const m_flOffsetRot: usize = 0x21C; // float32
                pub const m_nComponent: usize = 0x220; // int32
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_RemapQAnglesToRotation {
                pub const m_TransformInput: usize = 0x1B8; // CParticleTransformInput
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_RemapTransformOrientationToRotations {
                pub const m_TransformInput: usize = 0x1B8; // CParticleTransformInput
                pub const m_vecRotation: usize = 0x218; // Vector
                pub const m_bUseQuat: usize = 0x224; // bool
                pub const m_bWriteNormal: usize = 0x225; // bool
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_SetRigidAttachment {
                pub const m_nControlPointNumber: usize = 0x1B4; // int32
                pub const m_nFieldInput: usize = 0x1B8; // ParticleAttributeIndex_t
                pub const m_nFieldOutput: usize = 0x1BC; // ParticleAttributeIndex_t
                pub const m_bLocalSpace: usize = 0x1C0; // bool
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_RemapInitialVisibilityScalar {
                pub const m_nFieldOutput: usize = 0x1B8; // ParticleAttributeIndex_t
                pub const m_flInputMin: usize = 0x1BC; // float32
                pub const m_flInputMax: usize = 0x1C0; // float32
                pub const m_flOutputMin: usize = 0x1C4; // float32
                pub const m_flOutputMax: usize = 0x1C8; // float32
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_RadiusFromCPObject {
                pub const m_nControlPoint: usize = 0x1B4; // int32
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_InitialSequenceFromModel {
                pub const m_nControlPointNumber: usize = 0x1B4; // int32
                pub const m_nFieldOutput: usize = 0x1B8; // ParticleAttributeIndex_t
                pub const m_nFieldOutputAnim: usize = 0x1BC; // ParticleAttributeIndex_t
                pub const m_flInputMin: usize = 0x1C0; // float32
                pub const m_flInputMax: usize = 0x1C4; // float32
                pub const m_flOutputMin: usize = 0x1C8; // float32
                pub const m_flOutputMax: usize = 0x1CC; // float32
                pub const m_nSetMethod: usize = 0x1D0; // ParticleSetMethod_t
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_GlobalScale {
                pub const m_flScale: usize = 0x1B4; // float32
                pub const m_nScaleControlPointNumber: usize = 0x1B8; // int32
                pub const m_nControlPointNumber: usize = 0x1BC; // int32
                pub const m_bScaleRadius: usize = 0x1C0; // bool
                pub const m_bScalePosition: usize = 0x1C1; // bool
                pub const m_bScaleVelocity: usize = 0x1C2; // bool
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_PointList {
                pub const m_nFieldOutput: usize = 0x1B4; // ParticleAttributeIndex_t
                pub const m_pointList: usize = 0x1B8; // CUtlVector<PointDefinition_t>
                pub const m_bPlaceAlongPath: usize = 0x1D0; // bool
                pub const m_bClosedLoop: usize = 0x1D1; // bool
                pub const m_nNumPointsAlongPath: usize = 0x1D4; // int32
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_RandomNamedModelElement {
                pub const m_hModel: usize = 0x1B8; // CStrongHandle<InfoForResourceTypeCModel>
                pub const m_names: usize = 0x1C0; // CUtlVector<CUtlString>
                pub const m_bShuffle: usize = 0x1D8; // bool
                pub const m_bLinear: usize = 0x1D9; // bool
                pub const m_bModelFromRenderer: usize = 0x1DA; // bool
                pub const m_nFieldOutput: usize = 0x1DC; // ParticleAttributeIndex_t
            }
            // Parent: C_INIT_RandomNamedModelElement
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_RandomNamedModelSequence {
            }
            // Parent: C_INIT_RandomNamedModelElement
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_RandomNamedModelBodyPart {
            }
            // Parent: C_INIT_RandomNamedModelElement
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_RandomNamedModelMeshGroup {
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_RemapNamedModelElementToScalar {
                pub const m_hModel: usize = 0x1B8; // CStrongHandle<InfoForResourceTypeCModel>
                pub const m_names: usize = 0x1C0; // CUtlVector<CUtlString>
                pub const m_values: usize = 0x1D8; // CUtlVector<float32>
                pub const m_nFieldInput: usize = 0x1F0; // ParticleAttributeIndex_t
                pub const m_nFieldOutput: usize = 0x1F4; // ParticleAttributeIndex_t
                pub const m_nSetMethod: usize = 0x1F8; // ParticleSetMethod_t
                pub const m_bModelFromRenderer: usize = 0x1FC; // bool
            }
            // Parent: C_INIT_RemapNamedModelElementToScalar
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_RemapNamedModelSequenceToScalar {
            }
            // Parent: C_INIT_RemapNamedModelElementToScalar
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_RemapNamedModelBodyPartToScalar {
            }
            // Parent: C_INIT_RemapNamedModelElementToScalar
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_RemapNamedModelMeshGroupToScalar {
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 18
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_StatusEffect {
                pub const m_nDetail2Combo: usize = 0x1B4; // Detail2Combo_t
                pub const m_flDetail2Rotation: usize = 0x1B8; // float32
                pub const m_flDetail2Scale: usize = 0x1BC; // float32
                pub const m_flDetail2BlendFactor: usize = 0x1C0; // float32
                pub const m_flColorWarpIntensity: usize = 0x1C4; // float32
                pub const m_flDiffuseWarpBlendToFull: usize = 0x1C8; // float32
                pub const m_flEnvMapIntensity: usize = 0x1CC; // float32
                pub const m_flAmbientScale: usize = 0x1D0; // float32
                pub const m_specularColor: usize = 0x1D4; // Color
                pub const m_flSpecularScale: usize = 0x1D8; // float32
                pub const m_flSpecularExponent: usize = 0x1DC; // float32
                pub const m_flSpecularExponentBlendToFull: usize = 0x1E0; // float32
                pub const m_flSpecularBlendToFull: usize = 0x1E4; // float32
                pub const m_rimLightColor: usize = 0x1E8; // Color
                pub const m_flRimLightScale: usize = 0x1EC; // float32
                pub const m_flReflectionsTintByBaseBlendToNone: usize = 0x1F0; // float32
                pub const m_flMetalnessBlendToFull: usize = 0x1F4; // float32
                pub const m_flSelfIllumBlendToFull: usize = 0x1F8; // float32
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 19
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_StatusEffectCitadel {
                pub const m_flSFXColorWarpAmount: usize = 0x1B4; // float32
                pub const m_flSFXNormalAmount: usize = 0x1B8; // float32
                pub const m_flSFXMetalnessAmount: usize = 0x1BC; // float32
                pub const m_flSFXRoughnessAmount: usize = 0x1C0; // float32
                pub const m_flSFXSelfIllumAmount: usize = 0x1C4; // float32
                pub const m_flSFXSScale: usize = 0x1C8; // float32
                pub const m_flSFXSScrollX: usize = 0x1CC; // float32
                pub const m_flSFXSScrollY: usize = 0x1D0; // float32
                pub const m_flSFXSScrollZ: usize = 0x1D4; // float32
                pub const m_flSFXSOffsetX: usize = 0x1D8; // float32
                pub const m_flSFXSOffsetY: usize = 0x1DC; // float32
                pub const m_flSFXSOffsetZ: usize = 0x1E0; // float32
                pub const m_nDetailCombo: usize = 0x1E4; // DetailCombo_t
                pub const m_flSFXSDetailAmount: usize = 0x1E8; // float32
                pub const m_flSFXSDetailScale: usize = 0x1EC; // float32
                pub const m_flSFXSDetailScrollX: usize = 0x1F0; // float32
                pub const m_flSFXSDetailScrollY: usize = 0x1F4; // float32
                pub const m_flSFXSDetailScrollZ: usize = 0x1F8; // float32
                pub const m_flSFXSUseModelUVs: usize = 0x1FC; // float32
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_CreateParticleImpulse {
                pub const m_InputRadius: usize = 0x1B8; // CPerParticleFloatInput
                pub const m_InputMagnitude: usize = 0x308; // CPerParticleFloatInput
                pub const m_nFalloffFunction: usize = 0x458; // ParticleFalloffFunction_t
                pub const m_InputFalloffExp: usize = 0x460; // CPerParticleFloatInput
                pub const m_nImpulseType: usize = 0x5B0; // ParticleImpulseType_t
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_QuantizeFloat {
                pub const m_InputValue: usize = 0x1B8; // CPerParticleFloatInput
                pub const m_nOutputField: usize = 0x308; // ParticleAttributeIndex_t
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_SetAttributeToScalarExpression {
                pub const m_nExpression: usize = 0x1B4; // ScalarExpressionType_t
                pub const m_flInput1: usize = 0x1B8; // CPerParticleFloatInput
                pub const m_flInput2: usize = 0x308; // CPerParticleFloatInput
                pub const m_flOutputRemap: usize = 0x458; // CParticleRemapFloatInput
                pub const m_nOutputField: usize = 0x5A8; // ParticleAttributeIndex_t
                pub const m_nSetMethod: usize = 0x5AC; // ParticleSetMethod_t
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_SetVectorAttributeToVectorExpression {
                pub const m_nExpression: usize = 0x1B4; // VectorExpressionType_t
                pub const m_vInput1: usize = 0x1B8; // CPerParticleVecInput
                pub const m_vInput2: usize = 0x7E8; // CPerParticleVecInput
                pub const m_nOutputField: usize = 0xE18; // ParticleAttributeIndex_t
                pub const m_nSetMethod: usize = 0xE1C; // ParticleSetMethod_t
                pub const m_bNormalizedOutput: usize = 0xE20; // bool
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_InitFloatCollection {
                pub const m_InputValue: usize = 0x1B8; // CParticleCollectionFloatInput
                pub const m_nOutputField: usize = 0x308; // ParticleAttributeIndex_t
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_InitFloat {
                pub const m_InputValue: usize = 0x1B8; // CPerParticleFloatInput
                pub const m_nOutputField: usize = 0x308; // ParticleAttributeIndex_t
                pub const m_nSetMethod: usize = 0x30C; // ParticleSetMethod_t
                pub const m_InputStrength: usize = 0x310; // CPerParticleFloatInput
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_InitVecCollection {
                pub const m_InputValue: usize = 0x1B8; // CParticleCollectionVecInput
                pub const m_nOutputField: usize = 0x7E8; // ParticleAttributeIndex_t
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_InitVec {
                pub const m_InputValue: usize = 0x1B8; // CPerParticleVecInput
                pub const m_nOutputField: usize = 0x7E8; // ParticleAttributeIndex_t
                pub const m_nSetMethod: usize = 0x7EC; // ParticleSetMethod_t
                pub const m_bNormalizedOutput: usize = 0x7F0; // bool
                pub const m_bWritePreviousPosition: usize = 0x7F1; // bool
            }
            // Parent: CParticleFunctionEmitter
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_InstantaneousEmitter {
                pub const m_nParticlesToEmit: usize = 0x1B8; // CParticleCollectionFloatInput
                pub const m_flStartTime: usize = 0x308; // CParticleCollectionFloatInput
                pub const m_flInitFromKilledParentParticles: usize = 0x458; // float32
                pub const m_flParentParticleScale: usize = 0x460; // CParticleCollectionFloatInput
                pub const m_nMaxEmittedPerFrame: usize = 0x5B0; // int32
                pub const m_nSnapshotControlPoint: usize = 0x5B4; // int32
            }
            // Parent: CParticleFunctionEmitter
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_ContinuousEmitter {
                pub const m_flEmissionDuration: usize = 0x1B8; // CParticleCollectionFloatInput
                pub const m_flStartTime: usize = 0x308; // CParticleCollectionFloatInput
                pub const m_flEmitRate: usize = 0x458; // CParticleCollectionFloatInput
                pub const m_flEmissionScale: usize = 0x5A8; // float32
                pub const m_flScalePerParentParticle: usize = 0x5AC; // float32
                pub const m_bInitFromKilledParentParticles: usize = 0x5B0; // bool
                pub const m_nSnapshotControlPoint: usize = 0x5B4; // int32
                pub const m_nLimitPerUpdate: usize = 0x5B8; // int32
                pub const m_bForceEmitOnFirstUpdate: usize = 0x5BC; // bool
                pub const m_bForceEmitOnLastUpdate: usize = 0x5BD; // bool
            }
            // Parent: CParticleFunctionEmitter
            // Fields count: 15
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_NoiseEmitter {
                pub const m_flEmissionDuration: usize = 0x1B4; // float32
                pub const m_flStartTime: usize = 0x1B8; // float32
                pub const m_flEmissionScale: usize = 0x1BC; // float32
                pub const m_nScaleControlPoint: usize = 0x1C0; // int32
                pub const m_nScaleControlPointField: usize = 0x1C4; // int32
                pub const m_nWorldNoisePoint: usize = 0x1C8; // int32
                pub const m_bAbsVal: usize = 0x1CC; // bool
                pub const m_bAbsValInv: usize = 0x1CD; // bool
                pub const m_flOffset: usize = 0x1D0; // float32
                pub const m_flOutputMin: usize = 0x1D4; // float32
                pub const m_flOutputMax: usize = 0x1D8; // float32
                pub const m_flNoiseScale: usize = 0x1DC; // float32
                pub const m_flWorldNoiseScale: usize = 0x1E0; // float32
                pub const m_vecOffsetLoc: usize = 0x1E4; // Vector
                pub const m_flWorldTimeScale: usize = 0x1F0; // float32
            }
            // Parent: CParticleFunctionEmitter
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_MaintainEmitter {
                pub const m_nParticlesToMaintain: usize = 0x1B8; // CParticleCollectionFloatInput
                pub const m_flStartTime: usize = 0x308; // float32
                pub const m_flEmissionDuration: usize = 0x310; // CParticleCollectionFloatInput
                pub const m_flEmissionRate: usize = 0x460; // float32
                pub const m_nSnapshotControlPoint: usize = 0x464; // int32
                pub const m_bEmitInstantaneously: usize = 0x468; // bool
                pub const m_bFinalEmitOnStop: usize = 0x469; // bool
                pub const m_flScale: usize = 0x470; // CParticleCollectionFloatInput
            }
            // Parent: CParticleFunctionForce
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RandomForce {
                pub const m_MinForce: usize = 0x1BC; // Vector
                pub const m_MaxForce: usize = 0x1C8; // Vector
            }
            // Parent: CParticleFunctionForce
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_CPVelocityForce {
                pub const m_nControlPointNumber: usize = 0x1BC; // int32
                pub const m_flScale: usize = 0x1C0; // CPerParticleFloatInput
            }
            // Parent: CParticleFunctionForce
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_ParentVortices {
                pub const m_flForceScale: usize = 0x1BC; // float32
                pub const m_vecTwistAxis: usize = 0x1C0; // Vector
                pub const m_bFlipBasedOnYaw: usize = 0x1CC; // bool
            }
            // Parent: CParticleFunctionForce
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_TwistAroundAxis {
                pub const m_fForceAmount: usize = 0x1BC; // float32
                pub const m_TwistAxis: usize = 0x1C0; // Vector
                pub const m_bLocalSpace: usize = 0x1CC; // bool
                pub const m_nControlPointNumber: usize = 0x1D0; // int32
            }
            // Parent: CParticleFunctionForce
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_AttractToControlPoint {
                pub const m_vecComponentScale: usize = 0x1BC; // Vector
                pub const m_fForceAmount: usize = 0x1C8; // CPerParticleFloatInput
                pub const m_fFalloffPower: usize = 0x318; // float32
                pub const m_TransformInput: usize = 0x320; // CParticleTransformInput
                pub const m_fForceAmountMin: usize = 0x380; // CPerParticleFloatInput
                pub const m_bApplyMinForce: usize = 0x4D0; // bool
            }
            // Parent: CParticleFunctionForce
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_ForceBasedOnDistanceToPlane {
                pub const m_flMinDist: usize = 0x1BC; // float32
                pub const m_vecForceAtMinDist: usize = 0x1C0; // Vector
                pub const m_flMaxDist: usize = 0x1CC; // float32
                pub const m_vecForceAtMaxDist: usize = 0x1D0; // Vector
                pub const m_vecPlaneNormal: usize = 0x1DC; // Vector
                pub const m_nControlPointNumber: usize = 0x1E8; // int32
                pub const m_flExponent: usize = 0x1EC; // float32
            }
            // Parent: CParticleFunctionForce
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_TimeVaryingForce {
                pub const m_flStartLerpTime: usize = 0x1BC; // float32
                pub const m_StartingForce: usize = 0x1C0; // Vector
                pub const m_flEndLerpTime: usize = 0x1CC; // float32
                pub const m_EndingForce: usize = 0x1D0; // Vector
            }
            // Parent: CParticleFunctionForce
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_TurbulenceForce {
                pub const m_flNoiseCoordScale0: usize = 0x1BC; // float32
                pub const m_flNoiseCoordScale1: usize = 0x1C0; // float32
                pub const m_flNoiseCoordScale2: usize = 0x1C4; // float32
                pub const m_flNoiseCoordScale3: usize = 0x1C8; // float32
                pub const m_vecNoiseAmount0: usize = 0x1CC; // Vector
                pub const m_vecNoiseAmount1: usize = 0x1D8; // Vector
                pub const m_vecNoiseAmount2: usize = 0x1E4; // Vector
                pub const m_vecNoiseAmount3: usize = 0x1F0; // Vector
            }
            // Parent: CParticleFunctionForce
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_CurlNoiseForce {
                pub const m_nNoiseType: usize = 0x1BC; // ParticleDirectionNoiseType_t
                pub const m_vecNoiseFreq: usize = 0x1C0; // CPerParticleVecInput
                pub const m_vecNoiseScale: usize = 0x7F0; // CPerParticleVecInput
                pub const m_vecOffset: usize = 0xE20; // CPerParticleVecInput
                pub const m_vecOffsetRate: usize = 0x1450; // CPerParticleVecInput
                pub const m_flWorleySeed: usize = 0x1A80; // CPerParticleFloatInput
                pub const m_flWorleyJitter: usize = 0x1BD0; // CPerParticleFloatInput
            }
            // Parent: CParticleFunctionForce
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_PerParticleForce {
                pub const m_flForceScale: usize = 0x1C0; // CPerParticleFloatInput
                pub const m_vForce: usize = 0x310; // CPerParticleVecInput
                pub const m_nCP: usize = 0x940; // int32
            }
            // Parent: CParticleFunctionForce
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_WindForce {
                pub const m_vForce: usize = 0x1BC; // Vector
            }
            // Parent: CParticleFunctionForce
            // Fields count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_ExternalWindForce {
                pub const m_vecSamplePosition: usize = 0x1C0; // CPerParticleVecInput
                pub const m_vecScale: usize = 0x7F0; // CPerParticleVecInput
                pub const m_bSampleWind: usize = 0xE20; // bool
                pub const m_bSampleWater: usize = 0xE21; // bool
                pub const m_bDampenNearWaterPlane: usize = 0xE22; // bool
                pub const m_bSampleGravity: usize = 0xE23; // bool
                pub const m_vecGravityForce: usize = 0xE28; // CPerParticleVecInput
                pub const m_bUseBasicMovementGravity: usize = 0x1458; // bool
                pub const m_flLocalGravityScale: usize = 0x1460; // CPerParticleFloatInput
                pub const m_flLocalBuoyancyScale: usize = 0x15B0; // CPerParticleFloatInput
                pub const m_vecBuoyancyForce: usize = 0x1700; // CPerParticleVecInput
            }
            // Parent: CParticleFunctionForce
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_ExternalGameImpulseForce {
                pub const m_flForceScale: usize = 0x1C0; // CPerParticleFloatInput
                pub const m_bRopes: usize = 0x310; // bool
                pub const m_bRopesZOnly: usize = 0x311; // bool
                pub const m_bExplosions: usize = 0x312; // bool
                pub const m_bParticles: usize = 0x313; // bool
            }
            // Parent: CParticleFunctionForce
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_LocalAccelerationForce {
                pub const m_nCP: usize = 0x1BC; // int32
                pub const m_nScaleCP: usize = 0x1C0; // int32
                pub const m_vecAccel: usize = 0x1C8; // CParticleCollectionVecInput
            }
            // Parent: CParticleFunctionForce
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_DensityForce {
                pub const m_flRadiusScale: usize = 0x1BC; // float32
                pub const m_flForceScale: usize = 0x1C0; // float32
                pub const m_flTargetDensity: usize = 0x1C4; // float32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_BasicMovement {
                pub const m_Gravity: usize = 0x1B0; // CParticleCollectionVecInput
                pub const m_fDrag: usize = 0x7E0; // CParticleCollectionFloatInput
                pub const m_nMaxConstraintPasses: usize = 0x930; // int32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_FadeAndKill {
                pub const m_flStartFadeInTime: usize = 0x1B0; // float32
                pub const m_flEndFadeInTime: usize = 0x1B4; // float32
                pub const m_flStartFadeOutTime: usize = 0x1B8; // float32
                pub const m_flEndFadeOutTime: usize = 0x1BC; // float32
                pub const m_flStartAlpha: usize = 0x1C0; // float32
                pub const m_flEndAlpha: usize = 0x1C4; // float32
                pub const m_bForcePreserveParticleOrder: usize = 0x1C8; // bool
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_FadeAndKillForTracers {
                pub const m_flStartFadeInTime: usize = 0x1B0; // float32
                pub const m_flEndFadeInTime: usize = 0x1B4; // float32
                pub const m_flStartFadeOutTime: usize = 0x1B8; // float32
                pub const m_flEndFadeOutTime: usize = 0x1BC; // float32
                pub const m_flStartAlpha: usize = 0x1C0; // float32
                pub const m_flEndAlpha: usize = 0x1C4; // float32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_FadeIn {
                pub const m_flFadeInTimeMin: usize = 0x1B0; // float32
                pub const m_flFadeInTimeMax: usize = 0x1B4; // float32
                pub const m_flFadeInTimeExp: usize = 0x1B8; // float32
                pub const m_bProportional: usize = 0x1BC; // bool
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_FadeOut {
                pub const m_flFadeOutTimeMin: usize = 0x1B0; // float32
                pub const m_flFadeOutTimeMax: usize = 0x1B4; // float32
                pub const m_flFadeOutTimeExp: usize = 0x1B8; // float32
                pub const m_flFadeBias: usize = 0x1BC; // float32
                pub const m_bProportional: usize = 0x1F0; // bool
                pub const m_bEaseInAndOut: usize = 0x1F1; // bool
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_FadeInSimple {
                pub const m_flFadeInTime: usize = 0x1B0; // float32
                pub const m_nFieldOutput: usize = 0x1B4; // ParticleAttributeIndex_t
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_FadeOutSimple {
                pub const m_flFadeOutTime: usize = 0x1B0; // float32
                pub const m_nFieldOutput: usize = 0x1B4; // ParticleAttributeIndex_t
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_ClampScalar {
                pub const m_nFieldOutput: usize = 0x1B0; // ParticleAttributeIndex_t
                pub const m_flOutputMin: usize = 0x1B8; // CPerParticleFloatInput
                pub const m_flOutputMax: usize = 0x308; // CPerParticleFloatInput
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_ClampVector {
                pub const m_nFieldOutput: usize = 0x1B0; // ParticleAttributeIndex_t
                pub const m_vecOutputMin: usize = 0x1B8; // CPerParticleVecInput
                pub const m_vecOutputMax: usize = 0x7E8; // CPerParticleVecInput
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 13
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_OscillateScalar {
                pub const m_RateMin: usize = 0x1B0; // float32
                pub const m_RateMax: usize = 0x1B4; // float32
                pub const m_FrequencyMin: usize = 0x1B8; // float32
                pub const m_FrequencyMax: usize = 0x1BC; // float32
                pub const m_nField: usize = 0x1C0; // ParticleAttributeIndex_t
                pub const m_bProportional: usize = 0x1C4; // bool
                pub const m_bProportionalOp: usize = 0x1C5; // bool
                pub const m_flStartTime_min: usize = 0x1C8; // float32
                pub const m_flStartTime_max: usize = 0x1CC; // float32
                pub const m_flEndTime_min: usize = 0x1D0; // float32
                pub const m_flEndTime_max: usize = 0x1D4; // float32
                pub const m_flOscMult: usize = 0x1D8; // float32
                pub const m_flOscAdd: usize = 0x1DC; // float32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_OscillateScalarSimple {
                pub const m_Rate: usize = 0x1B0; // float32
                pub const m_Frequency: usize = 0x1B4; // float32
                pub const m_nField: usize = 0x1B8; // ParticleAttributeIndex_t
                pub const m_flOscMult: usize = 0x1BC; // float32
                pub const m_flOscAdd: usize = 0x1C0; // float32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 15
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_OscillateVector {
                pub const m_RateMin: usize = 0x1B0; // Vector
                pub const m_RateMax: usize = 0x1BC; // Vector
                pub const m_FrequencyMin: usize = 0x1C8; // Vector
                pub const m_FrequencyMax: usize = 0x1D4; // Vector
                pub const m_nField: usize = 0x1E0; // ParticleAttributeIndex_t
                pub const m_bProportional: usize = 0x1E4; // bool
                pub const m_bProportionalOp: usize = 0x1E5; // bool
                pub const m_bOffset: usize = 0x1E6; // bool
                pub const m_flStartTime_min: usize = 0x1E8; // float32
                pub const m_flStartTime_max: usize = 0x1EC; // float32
                pub const m_flEndTime_min: usize = 0x1F0; // float32
                pub const m_flEndTime_max: usize = 0x1F4; // float32
                pub const m_flOscMult: usize = 0x1F8; // CPerParticleFloatInput
                pub const m_flOscAdd: usize = 0x348; // CPerParticleFloatInput
                pub const m_flRateScale: usize = 0x498; // CPerParticleFloatInput
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_OscillateVectorSimple {
                pub const m_Rate: usize = 0x1B0; // Vector
                pub const m_Frequency: usize = 0x1BC; // Vector
                pub const m_nField: usize = 0x1C8; // ParticleAttributeIndex_t
                pub const m_flOscMult: usize = 0x1CC; // float32
                pub const m_flOscAdd: usize = 0x1D0; // float32
                pub const m_bOffset: usize = 0x1D4; // bool
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_DifferencePreviousParticle {
                pub const m_nFieldInput: usize = 0x1B0; // ParticleAttributeIndex_t
                pub const m_nFieldOutput: usize = 0x1B4; // ParticleAttributeIndex_t
                pub const m_flInputMin: usize = 0x1B8; // float32
                pub const m_flInputMax: usize = 0x1BC; // float32
                pub const m_flOutputMin: usize = 0x1C0; // float32
                pub const m_flOutputMax: usize = 0x1C4; // float32
                pub const m_nSetMethod: usize = 0x1C8; // ParticleSetMethod_t
                pub const m_bActiveRange: usize = 0x1CC; // bool
                pub const m_bSetPreviousParticle: usize = 0x1CD; // bool
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_PointVectorAtNextParticle {
                pub const m_nFieldOutput: usize = 0x1B0; // ParticleAttributeIndex_t
                pub const m_flInterpolation: usize = 0x1B8; // CPerParticleFloatInput
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RemapScalar {
                pub const m_nFieldInput: usize = 0x1B0; // ParticleAttributeIndex_t
                pub const m_nFieldOutput: usize = 0x1B4; // ParticleAttributeIndex_t
                pub const m_flInputMin: usize = 0x1B8; // float32
                pub const m_flInputMax: usize = 0x1BC; // float32
                pub const m_flOutputMin: usize = 0x1C0; // float32
                pub const m_flOutputMax: usize = 0x1C4; // float32
                pub const m_bOldCode: usize = 0x1C8; // bool
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RemapDensityToVector {
                pub const m_flRadiusScale: usize = 0x1B0; // float32
                pub const m_nFieldOutput: usize = 0x1B4; // ParticleAttributeIndex_t
                pub const m_flDensityMin: usize = 0x1B8; // float32
                pub const m_flDensityMax: usize = 0x1BC; // float32
                pub const m_vecOutputMin: usize = 0x1C0; // Vector
                pub const m_vecOutputMax: usize = 0x1CC; // Vector
                pub const m_bUseParentDensity: usize = 0x1D8; // bool
                pub const m_nVoxelGridResolution: usize = 0x1DC; // int32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_Diffusion {
                pub const m_flRadiusScale: usize = 0x1B0; // float32
                pub const m_nFieldOutput: usize = 0x1B4; // ParticleAttributeIndex_t
                pub const m_nVoxelGridResolution: usize = 0x1B8; // int32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RemapScalarEndCap {
                pub const m_nFieldInput: usize = 0x1B0; // ParticleAttributeIndex_t
                pub const m_nFieldOutput: usize = 0x1B4; // ParticleAttributeIndex_t
                pub const m_flInputMin: usize = 0x1B8; // float32
                pub const m_flInputMax: usize = 0x1BC; // float32
                pub const m_flOutputMin: usize = 0x1C0; // float32
                pub const m_flOutputMax: usize = 0x1C4; // float32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_ReinitializeScalarEndCap {
                pub const m_nFieldOutput: usize = 0x1B0; // ParticleAttributeIndex_t
                pub const m_flOutputMin: usize = 0x1B4; // float32
                pub const m_flOutputMax: usize = 0x1B8; // float32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RemapScalarOnceTimed {
                pub const m_bProportional: usize = 0x1B0; // bool
                pub const m_nFieldInput: usize = 0x1B4; // ParticleAttributeIndex_t
                pub const m_nFieldOutput: usize = 0x1B8; // ParticleAttributeIndex_t
                pub const m_flInputMin: usize = 0x1BC; // float32
                pub const m_flInputMax: usize = 0x1C0; // float32
                pub const m_flOutputMin: usize = 0x1C4; // float32
                pub const m_flOutputMax: usize = 0x1C8; // float32
                pub const m_flRemapTime: usize = 0x1CC; // float32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RemapParticleCountOnScalarEndCap {
                pub const m_nFieldOutput: usize = 0x1B0; // ParticleAttributeIndex_t
                pub const m_nInputMin: usize = 0x1B4; // int32
                pub const m_nInputMax: usize = 0x1B8; // int32
                pub const m_flOutputMin: usize = 0x1BC; // float32
                pub const m_flOutputMax: usize = 0x1C0; // float32
                pub const m_bBackwards: usize = 0x1C4; // bool
                pub const m_nSetMethod: usize = 0x1C8; // ParticleSetMethod_t
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RemapParticleCountToScalar {
                pub const m_nFieldOutput: usize = 0x1B0; // ParticleAttributeIndex_t
                pub const m_nInputMin: usize = 0x1B8; // CParticleCollectionFloatInput
                pub const m_nInputMax: usize = 0x308; // CParticleCollectionFloatInput
                pub const m_flOutputMin: usize = 0x458; // CParticleCollectionFloatInput
                pub const m_flOutputMax: usize = 0x5A8; // CParticleCollectionFloatInput
                pub const m_bActiveRange: usize = 0x6F8; // bool
                pub const m_nSetMethod: usize = 0x6FC; // ParticleSetMethod_t
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RemapVisibilityScalar {
                pub const m_nFieldInput: usize = 0x1B0; // ParticleAttributeIndex_t
                pub const m_nFieldOutput: usize = 0x1B4; // ParticleAttributeIndex_t
                pub const m_flInputMin: usize = 0x1B8; // float32
                pub const m_flInputMax: usize = 0x1BC; // float32
                pub const m_flOutputMin: usize = 0x1C0; // float32
                pub const m_flOutputMax: usize = 0x1C4; // float32
                pub const m_flRadiusScale: usize = 0x1C8; // float32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RemapTransformVisibilityToScalar {
                pub const m_nSetMethod: usize = 0x1B0; // ParticleSetMethod_t
                pub const m_TransformInput: usize = 0x1B8; // CParticleTransformInput
                pub const m_nFieldOutput: usize = 0x218; // ParticleAttributeIndex_t
                pub const m_flInputMin: usize = 0x21C; // float32
                pub const m_flInputMax: usize = 0x220; // float32
                pub const m_flOutputMin: usize = 0x224; // float32
                pub const m_flOutputMax: usize = 0x228; // float32
                pub const m_flRadius: usize = 0x22C; // float32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RemapTransformVisibilityToVector {
                pub const m_nSetMethod: usize = 0x1B0; // ParticleSetMethod_t
                pub const m_TransformInput: usize = 0x1B8; // CParticleTransformInput
                pub const m_nFieldOutput: usize = 0x218; // ParticleAttributeIndex_t
                pub const m_flInputMin: usize = 0x21C; // float32
                pub const m_flInputMax: usize = 0x220; // float32
                pub const m_vecOutputMin: usize = 0x224; // Vector
                pub const m_vecOutputMax: usize = 0x230; // Vector
                pub const m_flRadius: usize = 0x23C; // float32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_LerpScalar {
                pub const m_nFieldOutput: usize = 0x1B0; // ParticleAttributeIndex_t
                pub const m_flOutput: usize = 0x1B8; // CPerParticleFloatInput
                pub const m_flStartTime: usize = 0x308; // float32
                pub const m_flEndTime: usize = 0x30C; // float32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_LerpEndCapScalar {
                pub const m_nFieldOutput: usize = 0x1B0; // ParticleAttributeIndex_t
                pub const m_flOutput: usize = 0x1B4; // float32
                pub const m_flLerpTime: usize = 0x1B8; // float32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_LerpEndCapVector {
                pub const m_nFieldOutput: usize = 0x1B0; // ParticleAttributeIndex_t
                pub const m_vecOutput: usize = 0x1B4; // Vector
                pub const m_flLerpTime: usize = 0x1C0; // float32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_LerpVector {
                pub const m_nFieldOutput: usize = 0x1B0; // ParticleAttributeIndex_t
                pub const m_vecOutput: usize = 0x1B4; // Vector
                pub const m_flStartTime: usize = 0x1C0; // float32
                pub const m_flEndTime: usize = 0x1C4; // float32
                pub const m_nSetMethod: usize = 0x1C8; // ParticleSetMethod_t
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_LerpToOtherAttribute {
                pub const m_flInterpolation: usize = 0x1B0; // CPerParticleFloatInput
                pub const m_nFieldInputFrom: usize = 0x300; // ParticleAttributeIndex_t
                pub const m_nFieldInput: usize = 0x304; // ParticleAttributeIndex_t
                pub const m_nFieldOutput: usize = 0x308; // ParticleAttributeIndex_t
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RemapSpeed {
                pub const m_nFieldOutput: usize = 0x1B0; // ParticleAttributeIndex_t
                pub const m_flInputMin: usize = 0x1B4; // float32
                pub const m_flInputMax: usize = 0x1B8; // float32
                pub const m_flOutputMin: usize = 0x1BC; // float32
                pub const m_flOutputMax: usize = 0x1C0; // float32
                pub const m_nSetMethod: usize = 0x1C4; // ParticleSetMethod_t
                pub const m_bIgnoreDelta: usize = 0x1C8; // bool
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RemapVectortoCP {
                pub const m_nOutControlPointNumber: usize = 0x1B0; // int32
                pub const m_nFieldInput: usize = 0x1B4; // ParticleAttributeIndex_t
                pub const m_nParticleNumber: usize = 0x1B8; // int32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RampScalarLinear {
                pub const m_RateMin: usize = 0x1B0; // float32
                pub const m_RateMax: usize = 0x1B4; // float32
                pub const m_flStartTime_min: usize = 0x1B8; // float32
                pub const m_flStartTime_max: usize = 0x1BC; // float32
                pub const m_flEndTime_min: usize = 0x1C0; // float32
                pub const m_flEndTime_max: usize = 0x1C4; // float32
                pub const m_nField: usize = 0x1F0; // ParticleAttributeIndex_t
                pub const m_bProportionalOp: usize = 0x1F4; // bool
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RampScalarSpline {
                pub const m_RateMin: usize = 0x1B0; // float32
                pub const m_RateMax: usize = 0x1B4; // float32
                pub const m_flStartTime_min: usize = 0x1B8; // float32
                pub const m_flStartTime_max: usize = 0x1BC; // float32
                pub const m_flEndTime_min: usize = 0x1C0; // float32
                pub const m_flEndTime_max: usize = 0x1C4; // float32
                pub const m_flBias: usize = 0x1C8; // float32
                pub const m_nField: usize = 0x1F0; // ParticleAttributeIndex_t
                pub const m_bProportionalOp: usize = 0x1F4; // bool
                pub const m_bEaseOut: usize = 0x1F5; // bool
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RampScalarLinearSimple {
                pub const m_Rate: usize = 0x1B0; // float32
                pub const m_flStartTime: usize = 0x1B4; // float32
                pub const m_flEndTime: usize = 0x1B8; // float32
                pub const m_nField: usize = 0x1E0; // ParticleAttributeIndex_t
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RampScalarSplineSimple {
                pub const m_Rate: usize = 0x1B0; // float32
                pub const m_flStartTime: usize = 0x1B4; // float32
                pub const m_flEndTime: usize = 0x1B8; // float32
                pub const m_nField: usize = 0x1E0; // ParticleAttributeIndex_t
                pub const m_bEaseOut: usize = 0x1E4; // bool
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_ChladniWave {
                pub const m_nFieldOutput: usize = 0x1B0; // ParticleAttributeIndex_t
                pub const m_flInputMin: usize = 0x1B8; // CPerParticleFloatInput
                pub const m_flInputMax: usize = 0x308; // CPerParticleFloatInput
                pub const m_flOutputMin: usize = 0x458; // CPerParticleFloatInput
                pub const m_flOutputMax: usize = 0x5A8; // CPerParticleFloatInput
                pub const m_vecWaveLength: usize = 0x6F8; // CPerParticleVecInput
                pub const m_vecHarmonics: usize = 0xD28; // CPerParticleVecInput
                pub const m_nSetMethod: usize = 0x1358; // ParticleSetMethod_t
                pub const m_nLocalSpaceControlPoint: usize = 0x135C; // int32
                pub const m_b3D: usize = 0x1360; // bool
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_Noise {
                pub const m_nFieldOutput: usize = 0x1B0; // ParticleAttributeIndex_t
                pub const m_flOutputMin: usize = 0x1B4; // float32
                pub const m_flOutputMax: usize = 0x1B8; // float32
                pub const m_fl4NoiseScale: usize = 0x1BC; // float32
                pub const m_bAdditive: usize = 0x1C0; // bool
                pub const m_flNoiseAnimationTimeScale: usize = 0x1C4; // float32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_VectorNoise {
                pub const m_nFieldOutput: usize = 0x1B0; // ParticleAttributeIndex_t
                pub const m_vecOutputMin: usize = 0x1B4; // Vector
                pub const m_vecOutputMax: usize = 0x1C0; // Vector
                pub const m_fl4NoiseScale: usize = 0x1CC; // float32
                pub const m_bAdditive: usize = 0x1D0; // bool
                pub const m_bOffset: usize = 0x1D1; // bool
                pub const m_flNoiseAnimationTimeScale: usize = 0x1D4; // float32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_Decay {
                pub const m_bRopeDecay: usize = 0x1B0; // bool
                pub const m_bForcePreserveParticleOrder: usize = 0x1B1; // bool
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_DecayOffscreen {
                pub const m_flOffscreenTime: usize = 0x1B0; // CParticleCollectionFloatInput
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_EndCapTimedFreeze {
                pub const m_flFreezeTime: usize = 0x1B0; // CParticleCollectionFloatInput
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_EndCapTimedDecay {
                pub const m_flDecayTime: usize = 0x1B0; // float32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_EndCapDecay {
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_VelocityDecay {
                pub const m_flMinVelocity: usize = 0x1B0; // float32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_AlphaDecay {
                pub const m_flMinAlpha: usize = 0x1B0; // float32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RadiusDecay {
                pub const m_flMinRadius: usize = 0x1B0; // float32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_DecayMaintainCount {
                pub const m_nParticlesToMaintain: usize = 0x1B0; // int32
                pub const m_flDecayDelay: usize = 0x1B4; // float32
                pub const m_nSnapshotControlPoint: usize = 0x1B8; // int32
                pub const m_bLifespanDecay: usize = 0x1BC; // bool
                pub const m_flScale: usize = 0x1C0; // CParticleCollectionFloatInput
                pub const m_bKillNewest: usize = 0x310; // bool
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_DecayClampCount {
                pub const m_nCount: usize = 0x1B0; // CParticleCollectionFloatInput
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_Cull {
                pub const m_flCullPerc: usize = 0x1B0; // float32
                pub const m_flCullStart: usize = 0x1B4; // float32
                pub const m_flCullEnd: usize = 0x1B8; // float32
                pub const m_flCullExp: usize = 0x1BC; // float32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CGeneralSpin {
                pub const m_nSpinRateDegrees: usize = 0x1B0; // int32
                pub const m_nSpinRateMinDegrees: usize = 0x1B4; // int32
                pub const m_fSpinRateStopTime: usize = 0x1BC; // float32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CSpinUpdateBase {
            }
            // Parent: CGeneralSpin
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_Spin {
            }
            // Parent: CSpinUpdateBase
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_SpinUpdate {
            }
            // Parent: CGeneralSpin
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_SpinYaw {
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_InterpolateRadius {
                pub const m_flStartTime: usize = 0x1B0; // float32
                pub const m_flEndTime: usize = 0x1B4; // float32
                pub const m_flStartScale: usize = 0x1B8; // float32
                pub const m_flEndScale: usize = 0x1BC; // float32
                pub const m_bEaseInAndOut: usize = 0x1C0; // bool
                pub const m_flBias: usize = 0x1C4; // float32
            }
        }
        // Module: libpulse_system.so
        // Classes count: 51
        // Enums count: 0
        pub mod libpulse_system {
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            pub mod FakeEntity_tAPI {
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulse_RegisterInfo {
                pub const m_nReg: usize = 0x0; // PulseRuntimeRegisterIndex_t
                pub const m_Type: usize = 0x8; // CPulseValueFullType
                pub const m_OriginName: usize = 0x18; // CKV3MemberNameWithStorage
                pub const m_nWrittenByInstruction: usize = 0x50; // int32
                pub const m_nLastReadByInstruction: usize = 0x54; // int32
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulse_Chunk {
                pub const m_Instructions: usize = 0x0; // CUtlLeanVector<PGDInstruction_t>
                pub const m_Registers: usize = 0x10; // CUtlLeanVector<CPulse_RegisterInfo>
                pub const m_InstructionEditorIDs: usize = 0x20; // CUtlLeanVector<PulseDocNodeID_t>
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulse_Variable {
                pub const m_Name: usize = 0x0; // CUtlSymbolLarge
                pub const m_Description: usize = 0x8; // CUtlString
                pub const m_Type: usize = 0x10; // CPulseValueFullType
                pub const m_DefaultValue: usize = 0x20; // KeyValues3
                pub const m_bIsPublic: usize = 0x32; // bool
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulse_Constant {
                pub const m_Type: usize = 0x0; // CPulseValueFullType
                pub const m_Value: usize = 0x10; // KeyValues3
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulse_PublicOutput {
                pub const m_Name: usize = 0x0; // CUtlSymbolLarge
                pub const m_Description: usize = 0x8; // CUtlString
                pub const m_ParamType: usize = 0x10; // CPulseValueFullType
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulse_OutputConnection {
                pub const m_SourceOutput: usize = 0x0; // CUtlSymbolLarge
                pub const m_TargetEntity: usize = 0x8; // CUtlSymbolLarge
                pub const m_TargetInput: usize = 0x10; // CUtlSymbolLarge
                pub const m_Param: usize = 0x18; // CUtlSymbolLarge
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulse_InvokeBinding {
                pub const m_RegisterMap: usize = 0x0; // PulseRegisterMap_t
                pub const m_FuncName: usize = 0x20; // CUtlSymbolLarge
                pub const m_nCellIndex: usize = 0x28; // PulseRuntimeCellIndex_t
                pub const m_nSrcChunk: usize = 0x2C; // PulseRuntimeChunkIndex_t
                pub const m_nSrcInstruction: usize = 0x30; // int32
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulse_CallInfo {
                pub const m_PortName: usize = 0x0; // CUtlSymbolLarge
                pub const m_nEditorNodeID: usize = 0x8; // PulseDocNodeID_t
                pub const m_RegisterMap: usize = 0x10; // PulseRegisterMap_t
                pub const m_CallMethodID: usize = 0x30; // PulseDocNodeID_t
                pub const m_nSrcChunk: usize = 0x34; // PulseRuntimeChunkIndex_t
                pub const m_nSrcInstruction: usize = 0x38; // int32
            }
            // Parent: None
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseGraphDef {
                pub const m_DomainIdentifier: usize = 0x8; // CUtlSymbolLarge
                pub const m_ParentMapName: usize = 0x10; // CUtlSymbolLarge
                pub const m_Chunks: usize = 0x18; // CUtlVector<CPulse_Chunk*>
                pub const m_Cells: usize = 0x30; // CUtlVector<CPulseCell_Base*>
                pub const m_Vars: usize = 0x48; // CUtlVector<CPulse_Variable>
                pub const m_PublicOutputs: usize = 0x60; // CUtlVector<CPulse_PublicOutput>
                pub const m_InvokeBindings: usize = 0x78; // CUtlVector<CPulse_InvokeBinding*>
                pub const m_CallInfos: usize = 0x90; // CUtlVector<CPulse_CallInfo*>
                pub const m_Constants: usize = 0xA8; // CUtlVector<CPulse_Constant>
                pub const m_OutputConnections: usize = 0xC0; // CUtlVector<CPulse_OutputConnection*>
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseLibraryBindings
            // MPropertyDescription
            pub mod CPulseMathlib {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseLibraryBindings
            // MPropertyDescription
            pub mod CPulseTestScriptLib {
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod PulseRegisterMap_t {
                pub const m_Inparams: usize = 0x0; // KeyValues3
                pub const m_Outparams: usize = 0x10; // KeyValues3
            }
            // Parent: None
            // Fields count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod PGDInstruction_t {
                pub const m_nCode: usize = 0x0; // PulseInstructionCode_t
                pub const m_nVar: usize = 0x4; // PulseRuntimeVarIndex_t
                pub const m_nReg0: usize = 0x8; // PulseRuntimeRegisterIndex_t
                pub const m_nReg1: usize = 0xA; // PulseRuntimeRegisterIndex_t
                pub const m_nReg2: usize = 0xC; // PulseRuntimeRegisterIndex_t
                pub const m_nInvokeBindingIndex: usize = 0x10; // PulseRuntimeInvokeIndex_t
                pub const m_nChunk: usize = 0x14; // PulseRuntimeChunkIndex_t
                pub const m_nDestInstruction: usize = 0x18; // int32
                pub const m_nCallInfoIndex: usize = 0x1C; // PulseRuntimeCallInfoIndex_t
                pub const m_nConstIdx: usize = 0x20; // PulseRuntimeConstantIndex_t
                pub const m_DomainValue: usize = 0x28; // CBufferString
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulse_OutflowConnection {
                pub const m_SourceOutflowName: usize = 0x0; // CUtlSymbolLarge
                pub const m_nDestChunk: usize = 0x8; // PulseRuntimeChunkIndex_t
                pub const m_nInstruction: usize = 0xC; // int32
            }
            // Parent: CPulse_OutflowConnection
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulse_ResumePoint {
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Base {
                pub const m_nEditorNodeID: usize = 0x8; // PulseDocNodeID_t
            }
            // Parent: CPulseCell_Base
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_BaseFlow {
            }
            // Parent: CPulseCell_BaseFlow
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Inflow_BaseEntrypoint {
                pub const m_EntryChunk: usize = 0x48; // PulseRuntimeChunkIndex_t
                pub const m_RegisterMap: usize = 0x50; // PulseRegisterMap_t
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseRuntimeMethodArg {
                pub const m_Name: usize = 0x0; // CKV3MemberNameWithStorage
                pub const m_Description: usize = 0x38; // CUtlString
                pub const m_Type: usize = 0x40; // CPulseValueFullType
            }
            // Parent: CPulseCell_BaseFlow
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_BaseYieldingInflow {
            }
            // Parent: CPulseCell_Base
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_BaseValue {
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
            pub mod CPulseCell_Inflow_Wait {
                pub const m_WakeResume: usize = 0x48; // CPulse_ResumePoint
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Outflow_CycleOrdered__InstanceState_t {
                pub const m_nNextIndex: usize = 0x0; // int32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Outflow_CycleShuffled__InstanceState_t {
                pub const m_Shuffle: usize = 0x0; // CUtlVectorFixedGrowable<uint8>
                pub const m_nNextShuffle: usize = 0x20; // int32
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
            pub mod CPulseCell_Outflow_TestRandomYesNo {
                pub const m_Yes: usize = 0x48; // CPulse_OutflowConnection
                pub const m_No: usize = 0x58; // CPulse_OutflowConnection
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
            pub mod CPulseCell_Outflow_TestExplicitYesNo {
                pub const m_Yes: usize = 0x48; // CPulse_OutflowConnection
                pub const m_No: usize = 0x58; // CPulse_OutflowConnection
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
            pub mod CPulseCell_Value_TestValue50 {
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
            pub mod CPulseCell_Value_RandomInt {
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Timeline__TimelineEvent_t {
                pub const m_flTimeFromPrevious: usize = 0x0; // float32
                pub const m_bPauseForPreviousEvents: usize = 0x4; // bool
                pub const m_bCallModeSync: usize = 0x5; // bool
                pub const m_EventOutflow: usize = 0x8; // CPulse_OutflowConnection
            }
            // Parent: None
            // Fields count: 7
            pub mod FakeEntity_t {
                pub const m_nHandle: usize = 0x0; // PulseTestEHandle_t
                pub const m_Name: usize = 0x8; // CUtlString
                pub const m_Class: usize = 0x10; // CUtlString
                pub const m_bDestroyed: usize = 0x18; // bool
                pub const m_pAssociatedGraphInstance: usize = 0x20; // CPulseGraphInstance_TestDomain*
                pub const m_bFuncWasCalled: usize = 0x28; // bool
                pub const m_fValue: usize = 0x2C; // float32
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // MPulseInstanceDomainInfo
            // MPulseLibraryBindings
            // MPulseDomainOptInFeatureTag
            pub mod CPulseGraphInstance_TestDomain {
                pub const m_bIsRunningUnitTests: usize = 0xD8; // bool
                pub const m_bExplicitTimeStepping: usize = 0xD9; // bool
                pub const m_bExpectingToDestroyWithYieldedCursors: usize = 0xDA; // bool
                pub const m_nNextValidateIndex: usize = 0xDC; // int32
                pub const m_Tracepoints: usize = 0xE0; // CUtlVector<CUtlString>
                pub const m_bTestYesOrNoPath: usize = 0xF8; // bool
            }
            // Parent: CPulseCell_BaseFlow
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPropertyFriendlyName
            pub mod CPulseCell_Step_TestDomainTracepoint {
            }
            // Parent: CPulseCell_BaseFlow
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPropertyFriendlyName
            pub mod CPulseCell_Step_TestDomainCreateFakeEntity {
            }
            // Parent: CPulseCell_BaseFlow
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPropertyFriendlyName
            pub mod CPulseCell_Step_TestDomainDestroyFakeEntity {
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
            pub mod CPulseCell_Step_TestDomainEntFire {
                pub const m_Input: usize = 0x48; // CUtlString
            }
            // Parent: CPulseCell_BaseValue
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPropertyFriendlyName
            pub mod CPulseCell_Val_TestDomainGetEntityName {
            }
            // Parent: CPulseCell_BaseValue
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPropertyFriendlyName
            pub mod CPulseCell_Val_TestDomainFindEntityByName {
            }
            // Parent: CPulseCell_BaseYieldingInflow
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            pub mod CPulseCell_TestWaitWithCursorState {
                pub const m_WakeResume: usize = 0x48; // CPulse_ResumePoint
                pub const m_WakeCancel: usize = 0x58; // CPulse_ResumePoint
                pub const m_WakeFail: usize = 0x68; // CPulse_ResumePoint
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_TestWaitWithCursorState__CursorState_t {
                pub const flWaitValue: usize = 0x0; // float32
                pub const bFailOnCancel: usize = 0x4; // bool
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseLibraryBindings
            // MPropertyDescription
            pub mod CPulseTestFuncs_DerivedDomain {
            }
            // Parent: CPulseCell_BaseFlow
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            pub mod CPulseCell_Test_NoInflow {
            }
            // Parent: CPulseCell_BaseFlow
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            pub mod CPulseCell_Test_MultiInflow_WithDefault {
            }
            // Parent: CPulseCell_BaseFlow
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            pub mod CPulseCell_Test_MultiInflow_NoDefault {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseInstanceDomainInfo
            // MPulseLibraryBindings
            pub mod CPulseGraphInstance_TurtleGraphics {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseLibraryBindings
            // MPropertyDescription
            pub mod CPulseCursorFuncs {
            }
            // Parent: CPulseCell_BaseYieldingInflow
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_WaitForCursorsWithTagBase {
                pub const m_nCursorsAllowedToWait: usize = 0x48; // int32
                pub const m_WaitComplete: usize = 0x50; // CPulse_ResumePoint
            }
            // Parent: None
            // Fields count: 1
            pub mod CPulseCell_WaitForCursorsWithTagBase__CursorState_t {
                pub const m_TagName: usize = 0x0; // CUtlSymbolLarge
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
            pub mod CPulseCell_WaitForCursorsWithTag {
                pub const m_bTagSelfWhenComplete: usize = 0x60; // bool
                pub const m_nDesiredKillPriority: usize = 0x64; // PulseCursorCancelPriority_t
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
            pub mod CPulseCell_CursorQueue {
                pub const m_nCursorsAllowedToRunParallel: usize = 0x60; // int32
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseLibraryBindings
            // MPropertyDescription
            pub mod CPulseTestFuncs_LibraryA {
            }
        }
        // Module: librendersystemvulkan.so
        // Classes count: 3
        // Enums count: 0
        pub mod librendersystemvulkan {
            // Parent: None
            // Fields count: 7
            pub mod RenderInputLayoutField_t {
                pub const m_pSemanticName: usize = 0x0; // uint8[32]
                pub const m_nSemanticIndex: usize = 0x20; // int32
                pub const m_Format: usize = 0x24; // uint32
                pub const m_nOffset: usize = 0x28; // int32
                pub const m_nSlot: usize = 0x2C; // int32
                pub const m_nSlotType: usize = 0x30; // RenderSlotType_t
                pub const m_nInstanceStepRate: usize = 0x34; // int32
            }
            // Parent: None
            // Fields count: 4
            pub mod VsInputSignatureElement_t {
                pub const m_pName: usize = 0x0; // char[64]
                pub const m_pSemantic: usize = 0x40; // char[64]
                pub const m_pD3DSemanticName: usize = 0x80; // char[64]
                pub const m_nD3DSemanticIndex: usize = 0xC0; // int32
            }
            // Parent: None
            // Fields count: 1
            pub mod VsInputSignature_t {
                pub const m_elems: usize = 0x0; // CUtlVector<VsInputSignatureElement_t>
            }
        }
        // Module: libresourcesystem.so
        // Classes count: 57
        // Enums count: 0
        pub mod libresourcesystem {
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod ConstantInfo_t {
                pub const m_name: usize = 0x0; // CUtlString
                pub const m_nameToken: usize = 0x8; // CUtlStringToken
                pub const m_flValue: usize = 0xC; // float32
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod VariableInfo_t {
                pub const m_name: usize = 0x0; // CUtlString
                pub const m_nameToken: usize = 0x8; // CUtlStringToken
                pub const m_nIndex: usize = 0xC; // FuseVariableIndex_t
                pub const m_nNumComponents: usize = 0xE; // uint8
                pub const m_eVarType: usize = 0xF; // FuseVariableType_t
                pub const m_eAccess: usize = 0x10; // FuseVariableAccess_t
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FunctionInfo_t {
                pub const m_name: usize = 0x8; // CUtlString
                pub const m_nameToken: usize = 0x10; // CUtlStringToken
                pub const m_nParamCount: usize = 0x14; // int32
                pub const m_nIndex: usize = 0x18; // FuseFunctionIndex_t
                pub const m_bIsPure: usize = 0x1A; // bool
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CFuseProgram {
                pub const m_programBuffer: usize = 0x0; // CUtlVector<uint8>
                pub const m_variablesRead: usize = 0x18; // CUtlVector<FuseVariableIndex_t>
                pub const m_variablesWritten: usize = 0x30; // CUtlVector<FuseVariableIndex_t>
                pub const m_nMaxTempVarsUsed: usize = 0x48; // int32
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CFuseSymbolTable {
                pub const m_constants: usize = 0x0; // CUtlVector<ConstantInfo_t>
                pub const m_variables: usize = 0x18; // CUtlVector<VariableInfo_t>
                pub const m_functions: usize = 0x30; // CUtlVector<FunctionInfo_t>
                pub const m_constantMap: usize = 0x48; // CUtlHashtable<CUtlStringToken,int32>
                pub const m_variableMap: usize = 0x68; // CUtlHashtable<CUtlStringToken,int32>
                pub const m_functionMap: usize = 0x88; // CUtlHashtable<CUtlStringToken,int32>
            }
            // Parent: None
            // Fields count: 2
            pub mod AABB_t {
                pub const m_vMinBounds: usize = 0x0; // Vector
                pub const m_vMaxBounds: usize = 0xC; // Vector
            }
            // Parent: None
            // Fields count: 2
            pub mod PackedAABB_t {
                pub const m_nPackedMin: usize = 0x0; // uint32
                pub const m_nPackedMax: usize = 0x4; // uint32
            }
            // Parent: None
            // Fields count: 4
            pub mod FourQuaternions {
                pub const x: usize = 0x0; // fltx4
                pub const y: usize = 0x10; // fltx4
                pub const z: usize = 0x20; // fltx4
                pub const w: usize = 0x30; // fltx4
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod TestResource_t {
                pub const m_name: usize = 0x0; // CUtlString
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeTestResource_t {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeProceduralTestResource_t {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeManifestTestResource_t {
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod ManifestTestResource_t {
                pub const m_name: usize = 0x0; // CUtlString
                pub const m_child: usize = 0x8; // CStrongHandle<InfoForResourceTypeManifestTestResource_t>
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeCVDataResource {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeIPulseGraphDef {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeCTypeScriptResource {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeCJavaScriptResource {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeIParticleSystemDefinition {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeIParticleSnapshot {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeCAnimData {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeCAnimationGroup {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeCSequenceGroupData {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeIMaterial2 {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeCMorphSetData {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeCRenderMesh {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeCModel {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeCTextureBase {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeIVectorGraphic {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeCVSoundEventScriptList {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeCVSoundStackScriptList {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeCVoiceContainerBase {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeCVMixListResource {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeCPhysAggregateData {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeCVPhysXSurfacePropertiesList {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeCEntityLump {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeCWorldNode {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeWorld_t {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeCVoxelVisibility {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeCPostProcessingResource {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeCPanoramaStyle {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeCPanoramaLayout {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeCPanoramaDynamicImages {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeCDotaItemDefinitionResource {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeCDOTAPatchNotesList {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeCDOTANovelsList {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeIAnimGraphModelBinding {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeCChoreoSceneFileData {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeCDACGameDefsData {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeCCompositeMaterialKit {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeCGcExportableExternalData {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeCSmartProp {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeCCSGOEconItem {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeCResponseRulesList {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeCNmSkeleton {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeCNmClip {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeCNmGraph {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeCNmGraphDataSet {
            }
        }
        // Module: libscenefilecache.so
        // Classes count: 0
        // Enums count: 0
        pub mod libscenefilecache {
        }
        // Module: libscenesystem.so
        // Classes count: 9
        // Enums count: 0
        pub mod libscenesystem {
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CSSDSEndFrameViewInfo {
                pub const m_nViewId: usize = 0x0; // uint64
                pub const m_ViewName: usize = 0x8; // CUtlString
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CSSDSMsg_EndFrame {
                pub const m_Views: usize = 0x0; // CUtlVector<CSSDSEndFrameViewInfo>
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod SceneViewId_t {
                pub const m_nViewId: usize = 0x0; // uint64
                pub const m_nFrameCount: usize = 0x8; // uint64
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CSSDSMsg_ViewRender {
                pub const m_viewId: usize = 0x0; // SceneViewId_t
                pub const m_ViewName: usize = 0x10; // CUtlString
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CSSDSMsg_LayerBase {
                pub const m_viewId: usize = 0x0; // SceneViewId_t
                pub const m_ViewName: usize = 0x10; // CUtlString
                pub const m_nLayerIndex: usize = 0x18; // int32
                pub const m_nLayerId: usize = 0x20; // uint64
                pub const m_LayerName: usize = 0x28; // CUtlString
                pub const m_displayText: usize = 0x30; // CUtlString
            }
            // Parent: None
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CSSDSMsg_ViewTarget {
                pub const m_Name: usize = 0x0; // CUtlString
                pub const m_TextureId: usize = 0x8; // uint64
                pub const m_nWidth: usize = 0x10; // int32
                pub const m_nHeight: usize = 0x14; // int32
                pub const m_nRequestedWidth: usize = 0x18; // int32
                pub const m_nRequestedHeight: usize = 0x1C; // int32
                pub const m_nNumMipLevels: usize = 0x20; // int32
                pub const m_nDepth: usize = 0x24; // int32
                pub const m_nMultisampleNumSamples: usize = 0x28; // int32
                pub const m_nFormat: usize = 0x2C; // int32
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CSSDSMsg_ViewTargetList {
                pub const m_viewId: usize = 0x0; // SceneViewId_t
                pub const m_ViewName: usize = 0x10; // CUtlString
                pub const m_Targets: usize = 0x18; // CUtlVector<CSSDSMsg_ViewTarget>
            }
            // Parent: CSSDSMsg_LayerBase
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CSSDSMsg_PreLayer {
            }
            // Parent: CSSDSMsg_LayerBase
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CSSDSMsg_PostLayer {
            }
        }
        // Module: libschemasystem.so
        // Classes count: 6
        // Enums count: 0
        pub mod libschemasystem {
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeCResourceManifestInternal {
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CExampleSchemaVData_Monomorphic {
                pub const m_nExample1: usize = 0x0; // int32
                pub const m_nExample2: usize = 0x4; // int32
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CExampleSchemaVData_PolymorphicBase {
                pub const m_nBase: usize = 0x8; // int32
            }
            // Parent: CExampleSchemaVData_PolymorphicBase
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CExampleSchemaVData_PolymorphicDerivedA {
                pub const m_nDerivedA: usize = 0xC; // int32
            }
            // Parent: CExampleSchemaVData_PolymorphicBase
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CExampleSchemaVData_PolymorphicDerivedB {
                pub const m_nDerivedB: usize = 0xC; // int32
            }
            // Parent: None
            // Fields count: 22
            pub mod CSchemaSystemInternalRegistration {
                pub const m_Vector2D: usize = 0x0; // Vector2D
                pub const m_Vector: usize = 0x8; // Vector
                pub const m_VectorAligned: usize = 0x20; // VectorAligned
                pub const m_Quaternion: usize = 0x30; // Quaternion
                pub const m_QAngle: usize = 0x40; // QAngle
                pub const m_RotationVector: usize = 0x4C; // RotationVector
                pub const m_RadianEuler: usize = 0x58; // RadianEuler
                pub const m_DegreeEuler: usize = 0x64; // DegreeEuler
                pub const m_QuaternionStorage: usize = 0x70; // QuaternionStorage
                pub const m_matrix3x4_t: usize = 0x80; // matrix3x4_t
                pub const m_matrix3x4a_t: usize = 0xB0; // matrix3x4a_t
                pub const m_Color: usize = 0xE0; // Color
                pub const m_Vector4D: usize = 0xE4; // Vector4D
                pub const m_CTransform: usize = 0x100; // CTransform
                pub const m_pKeyValues: usize = 0x120; // KeyValues*
                pub const m_CUtlBinaryBlock: usize = 0x128; // CUtlBinaryBlock
                pub const m_CUtlString: usize = 0x140; // CUtlString
                pub const m_CUtlSymbol: usize = 0x148; // CUtlSymbol
                pub const m_stringToken: usize = 0x14C; // CUtlStringToken
                pub const m_stringTokenWithStorage: usize = 0x150; // CUtlStringTokenWithStorage
                pub const m_ResourceTypes: usize = 0x168; // CResourceArray<CResourcePointer<CResourceString>>
                pub const m_KV3: usize = 0x170; // KeyValues3
            }
        }
        // Module: libserver.so
        // Classes count: 233
        // Enums count: 0
        pub mod libserver {
            // Parent: None
            // Fields count: 2
            pub mod Extent {
                pub const lo: usize = 0x0; // Vector
                pub const hi: usize = 0xC; // Vector
            }
            // Parent: None
            // Fields count: 2
            pub mod NavGravity_t {
                pub const m_vGravity: usize = 0x0; // Vector
                pub const m_bDefault: usize = 0xC; // bool
            }
            // Parent: None
            // Fields count: 0
            pub mod CNavVolume {
            }
            // Parent: CNavVolume
            // Fields count: 1
            pub mod CNavVolumeVector {
                pub const m_bHasBeenPreFiltered: usize = 0x58; // bool
            }
            // Parent: CNavVolumeVector
            // Fields count: 0
            pub mod CNavVolumeAll {
            }
            // Parent: CNavVolume
            // Fields count: 2
            pub mod CNavVolumeSphere {
                pub const m_vCenter: usize = 0x50; // Vector
                pub const m_flRadius: usize = 0x5C; // float32
            }
            // Parent: CNavVolumeSphere
            // Fields count: 1
            pub mod CNavVolumeSphericalShell {
                pub const m_flRadiusInner: usize = 0x60; // float32
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MPropertyCustomEditor
            pub mod CRangeFloat {
                pub const m_pValue: usize = 0x0; // float32[2]
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MPropertyCustomEditor
            pub mod CRangeInt {
                pub const m_pValue: usize = 0x0; // int32[2]
            }
            // Parent: None
            // Fields count: 0
            pub mod CEntityComponent {
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
            // NetworkVarNames: m_pEntity (CEntityIdentity *)
            // NetworkVarNames: m_CScriptComponent (CScriptComponent::Storage_t)
            pub mod CEntityInstance {
                pub const m_iszPrivateVScripts: usize = 0x8; // CUtlSymbolLarge
                pub const m_pEntity: usize = 0x10; // CEntityIdentity*
                pub const m_CScriptComponent: usize = 0x28; // CScriptComponent*
                pub const m_bVisibleinPVS: usize = 0x30; // bool
            }
            // Parent: CEntityComponent
            // Fields count: 1
            pub mod CScriptComponent {
                pub const m_scriptClassName: usize = 0x30; // CUtlSymbolLarge
            }
            // Parent: CEntityComponent
            // Fields count: 2
            pub mod CBodyComponent {
                pub const m_pSceneNode: usize = 0x8; // CGameSceneNode*
                pub const __m_pChainEntity: usize = 0x28; // CNetworkVarChainer
            }
            // Parent: CBodyComponent
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_sceneNode (CGameSceneNode)
            pub mod CBodyComponentPoint {
                pub const m_sceneNode: usize = 0x60; // CGameSceneNode
                pub const __m_pChainEntity: usize = 0x1C0; // CNetworkVarChainer
            }
            // Parent: CBodyComponent
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_skeletonInstance (CSkeletonInstance)
            pub mod CBodyComponentSkeletonInstance {
                pub const m_skeletonInstance: usize = 0x60; // CSkeletonInstance
                pub const __m_pChainEntity: usize = 0x450; // CNetworkVarChainer
            }
            // Parent: CEntityComponent
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_bvDisabledHitGroups (uint32)
            pub mod CHitboxComponent {
                pub const m_bvDisabledHitGroups: usize = 0x24; // uint32[1]
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
            pub mod CLightComponent {
                pub const __m_pChainEntity: usize = 0x58; // CNetworkVarChainer
                pub const m_Color: usize = 0x95; // Color
                pub const m_SecondaryColor: usize = 0x99; // Color
                pub const m_flBrightness: usize = 0xA0; // float32
                pub const m_flBrightnessScale: usize = 0xA4; // float32
                pub const m_flBrightnessMult: usize = 0xA8; // float32
                pub const m_flRange: usize = 0xAC; // float32
                pub const m_flFalloff: usize = 0xB0; // float32
                pub const m_flAttenuation0: usize = 0xB4; // float32
                pub const m_flAttenuation1: usize = 0xB8; // float32
                pub const m_flAttenuation2: usize = 0xBC; // float32
                pub const m_flTheta: usize = 0xC0; // float32
                pub const m_flPhi: usize = 0xC4; // float32
                pub const m_hLightCookie: usize = 0xC8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_nCascades: usize = 0xD0; // int32
                pub const m_nCastShadows: usize = 0xD4; // int32
                pub const m_nShadowWidth: usize = 0xD8; // int32
                pub const m_nShadowHeight: usize = 0xDC; // int32
                pub const m_bRenderDiffuse: usize = 0xE0; // bool
                pub const m_nRenderSpecular: usize = 0xE4; // int32
                pub const m_bRenderTransmissive: usize = 0xE8; // bool
                pub const m_flOrthoLightWidth: usize = 0xEC; // float32
                pub const m_flOrthoLightHeight: usize = 0xF0; // float32
                pub const m_nStyle: usize = 0xF4; // int32
                pub const m_Pattern: usize = 0xF8; // CUtlString
                pub const m_nCascadeRenderStaticObjects: usize = 0x100; // int32
                pub const m_flShadowCascadeCrossFade: usize = 0x104; // float32
                pub const m_flShadowCascadeDistanceFade: usize = 0x108; // float32
                pub const m_flShadowCascadeDistance0: usize = 0x10C; // float32
                pub const m_flShadowCascadeDistance1: usize = 0x110; // float32
                pub const m_flShadowCascadeDistance2: usize = 0x114; // float32
                pub const m_flShadowCascadeDistance3: usize = 0x118; // float32
                pub const m_nShadowCascadeResolution0: usize = 0x11C; // int32
                pub const m_nShadowCascadeResolution1: usize = 0x120; // int32
                pub const m_nShadowCascadeResolution2: usize = 0x124; // int32
                pub const m_nShadowCascadeResolution3: usize = 0x128; // int32
                pub const m_bUsesBakedShadowing: usize = 0x12C; // bool
                pub const m_nShadowPriority: usize = 0x130; // int32
                pub const m_nBakedShadowIndex: usize = 0x134; // int32
                pub const m_bRenderToCubemaps: usize = 0x138; // bool
                pub const m_nDirectLight: usize = 0x13C; // int32
                pub const m_nIndirectLight: usize = 0x140; // int32
                pub const m_flFadeMinDist: usize = 0x144; // float32
                pub const m_flFadeMaxDist: usize = 0x148; // float32
                pub const m_flShadowFadeMinDist: usize = 0x14C; // float32
                pub const m_flShadowFadeMaxDist: usize = 0x150; // float32
                pub const m_bEnabled: usize = 0x154; // bool
                pub const m_bFlicker: usize = 0x155; // bool
                pub const m_bPrecomputedFieldsValid: usize = 0x156; // bool
                pub const m_vPrecomputedBoundsMins: usize = 0x158; // Vector
                pub const m_vPrecomputedBoundsMaxs: usize = 0x164; // Vector
                pub const m_vPrecomputedOBBOrigin: usize = 0x170; // Vector
                pub const m_vPrecomputedOBBAngles: usize = 0x17C; // QAngle
                pub const m_vPrecomputedOBBExtent: usize = 0x188; // Vector
                pub const m_flPrecomputedMaxRange: usize = 0x194; // float32
                pub const m_nFogLightingMode: usize = 0x198; // int32
                pub const m_flFogContributionStength: usize = 0x19C; // float32
                pub const m_flNearClipPlane: usize = 0x1A0; // float32
                pub const m_SkyColor: usize = 0x1A4; // Color
                pub const m_flSkyIntensity: usize = 0x1A8; // float32
                pub const m_SkyAmbientBounce: usize = 0x1AC; // Color
                pub const m_bUseSecondaryColor: usize = 0x1B0; // bool
                pub const m_bMixedShadows: usize = 0x1B1; // bool
                pub const m_flLightStyleStartTime: usize = 0x1B4; // GameTime_t
                pub const m_flCapsuleLength: usize = 0x1B8; // float32
                pub const m_flMinRoughness: usize = 0x1BC; // float32
                pub const m_bPvsModifyEntity: usize = 0x1D0; // bool
            }
            // Parent: None
            // Fields count: 1
            pub mod CNetworkTransmitComponent {
                pub const m_nTransmitStateOwnedCounter: usize = 0x2C4; // uint8
            }
            // Parent: CEntityComponent
            // Fields count: 5
            pub mod CRenderComponent {
                pub const __m_pChainEntity: usize = 0x10; // CNetworkVarChainer
                pub const m_bIsRenderingWithViewModels: usize = 0x50; // bool
                pub const m_nSplitscreenFlags: usize = 0x54; // uint32
                pub const m_bEnableRendering: usize = 0x60; // bool
                pub const m_bInterpolationReadyToDraw: usize = 0xC0; // bool
            }
            // Parent: None
            // Fields count: 0
            pub mod CAnimEventListenerBase {
            }
            // Parent: CAnimEventListenerBase
            // Fields count: 0
            pub mod CAnimEventListener {
            }
            // Parent: CAnimEventListenerBase
            // Fields count: 0
            pub mod CAnimEventQueueListener {
            }
            // Parent: None
            // Fields count: 1
            pub mod CBuoyancyHelper {
                pub const m_flFluidDensity: usize = 0x18; // float32
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MPropertyCustomEditor
            pub mod CSkillFloat {
                pub const m_pValue: usize = 0x0; // float32[4]
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MPropertyCustomEditor
            pub mod CSkillInt {
                pub const m_pValue: usize = 0x0; // int32[4]
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CSkillDamage {
                pub const m_flDamage: usize = 0x0; // CSkillFloat
                pub const m_flPhysicsForceDamage: usize = 0x10; // float32
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MPropertyCustomEditor
            pub mod CRemapFloat {
                pub const m_pValue: usize = 0x0; // float32[4]
            }
            // Parent: None
            // Fields count: 2
            pub mod CScriptUniformRandomStream {
                pub const m_hScriptScope: usize = 0x8; // HSCRIPT
                pub const m_nInitialSeed: usize = 0x9C; // int32
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            pub mod CBasePlayerControllerAPI {
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // NetworkVarNames: nType (FixAngleSet_t)
            // NetworkVarNames: qAngle (QAngle)
            // NetworkVarNames: nIndex (uint32)
            pub mod ViewAngleServerChange_t {
                pub const nType: usize = 0x30; // FixAngleSet_t
                pub const qAngle: usize = 0x34; // QAngle
                pub const nIndex: usize = 0x40; // uint32
            }
            // Parent: None
            // Fields count: 2
            pub mod CBreakableStageHelper {
                pub const m_nCurrentStage: usize = 0x8; // int32
                pub const m_nStageCount: usize = 0xC; // int32
            }
            // Parent: None
            // Fields count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CommandToolCommand_t {
                pub const m_bEnabled: usize = 0x0; // bool
                pub const m_bOpened: usize = 0x1; // bool
                pub const m_InternalId: usize = 0x4; // uint32
                pub const m_ShortName: usize = 0x8; // CUtlString
                pub const m_ExecMode: usize = 0x10; // CommandExecMode_t
                pub const m_SpawnGroup: usize = 0x18; // CUtlString
                pub const m_PeriodicExecDelay: usize = 0x20; // float32
                pub const m_SpecType: usize = 0x24; // CommandEntitySpecType_t
                pub const m_EntitySpec: usize = 0x28; // CUtlString
                pub const m_Commands: usize = 0x30; // CUtlString
                pub const m_SetDebugBits: usize = 0x38; // DebugOverlayBits_t
                pub const m_ClearDebugBits: usize = 0x40; // DebugOverlayBits_t
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            pub mod CDynamicPropAPI {
            }
            // Parent: None
            // Fields count: 1
            pub mod CPlayerPawnComponent {
                pub const __m_pChainEntity: usize = 0x8; // CNetworkVarChainer
            }
            // Parent: None
            // Fields count: 1
            pub mod CPlayerControllerComponent {
                pub const __m_pChainEntity: usize = 0x8; // CNetworkVarChainer
            }
            // Parent: CPlayerPawnComponent
            // Fields count: 0
            pub mod CPlayer_AutoaimServices {
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
            pub mod audioparams_t {
                pub const localSound: usize = 0x8; // Vector[8]
                pub const soundscapeIndex: usize = 0x68; // int32
                pub const localBits: usize = 0x6C; // uint8
                pub const soundscapeEntityListIndex: usize = 0x70; // int32
                pub const soundEventHash: usize = 0x74; // uint32
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
            pub mod CPlayer_CameraServices {
                pub const m_vecCsViewPunchAngle: usize = 0x40; // QAngle
                pub const m_nCsViewPunchAngleTick: usize = 0x4C; // GameTick_t
                pub const m_flCsViewPunchAngleTickRatio: usize = 0x50; // float32
                pub const m_PlayerFog: usize = 0x58; // fogplayerparams_t
                pub const m_hColorCorrectionCtrl: usize = 0x98; // CHandle<CColorCorrection>
                pub const m_hViewEntity: usize = 0x9C; // CHandle<CBaseEntity>
                pub const m_hTonemapController: usize = 0xA0; // CHandle<CTonemapController2>
                pub const m_audio: usize = 0xA8; // audioparams_t
                pub const m_PostProcessingVolumes: usize = 0x120; // CNetworkUtlVectorBase<CHandle<CPostProcessingVolume>>
                pub const m_flOldPlayerZ: usize = 0x138; // float32
                pub const m_flOldPlayerViewOffsetZ: usize = 0x13C; // float32
                pub const m_hTriggerSoundscapeList: usize = 0x158; // CUtlVector<CHandle<CEnvSoundscapeTriggerable>>
            }
            // Parent: CPlayerPawnComponent
            // Fields count: 0
            pub mod CPlayer_FlashlightServices {
            }
            // Parent: CPlayerPawnComponent
            // Fields count: 0
            pub mod CPlayer_ItemServices {
            }
            // Parent: CPlayerPawnComponent
            // Fields count: 15
            //
            // Metadata:
            // NetworkVarNames: m_nToggleButtonDownMask (ButtonBitMask_t)
            // NetworkVarNames: m_flMaxspeed (float32)
            // NetworkVarNames: m_arrForceSubtickMoveWhen (float32)
            pub mod CPlayer_MovementServices {
                pub const m_nImpulse: usize = 0x40; // int32
                pub const m_nButtons: usize = 0x48; // CInButtonState
                pub const m_nQueuedButtonDownMask: usize = 0x68; // uint64
                pub const m_nQueuedButtonChangeMask: usize = 0x70; // uint64
                pub const m_nButtonDoublePressed: usize = 0x78; // uint64
                pub const m_pButtonPressedCmdNumber: usize = 0x80; // uint32[64]
                pub const m_nLastCommandNumberProcessed: usize = 0x180; // uint32
                pub const m_nToggleButtonDownMask: usize = 0x188; // uint64
                pub const m_flMaxspeed: usize = 0x198; // float32
                pub const m_arrForceSubtickMoveWhen: usize = 0x19C; // float32[4]
                pub const m_flForwardMove: usize = 0x1AC; // float32
                pub const m_flLeftMove: usize = 0x1B0; // float32
                pub const m_flUpMove: usize = 0x1B4; // float32
                pub const m_vecLastMovementImpulses: usize = 0x1B8; // Vector
                pub const m_vecOldViewAngles: usize = 0x1C4; // QAngle
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
            pub mod CPlayer_MovementServices_Humanoid {
                pub const m_flStepSoundTime: usize = 0x1D8; // float32
                pub const m_flFallVelocity: usize = 0x1DC; // float32
                pub const m_bInCrouch: usize = 0x1E0; // bool
                pub const m_nCrouchState: usize = 0x1E4; // uint32
                pub const m_flCrouchTransitionStartTime: usize = 0x1E8; // GameTime_t
                pub const m_bDucked: usize = 0x1EC; // bool
                pub const m_bDucking: usize = 0x1ED; // bool
                pub const m_bInDuckJump: usize = 0x1EE; // bool
                pub const m_groundNormal: usize = 0x1F0; // Vector
                pub const m_flSurfaceFriction: usize = 0x1FC; // float32
                pub const m_surfaceProps: usize = 0x200; // CUtlStringToken
                pub const m_nStepside: usize = 0x210; // int32
                pub const m_iTargetVolume: usize = 0x214; // int32
                pub const m_vecSmoothedVelocity: usize = 0x218; // Vector
            }
            // Parent: CPlayerPawnComponent
            // Fields count: 4
            //
            // Metadata:
            // NetworkVarNames: m_iObserverMode (uint8)
            // NetworkVarNames: m_hObserverTarget (CHandle< CBaseEntity>)
            pub mod CPlayer_ObserverServices {
                pub const m_iObserverMode: usize = 0x40; // uint8
                pub const m_hObserverTarget: usize = 0x44; // CHandle<CBaseEntity>
                pub const m_iObserverLastMode: usize = 0x48; // ObserverMode_t
                pub const m_bForcedObserverMode: usize = 0x4C; // bool
            }
            // Parent: CPlayerPawnComponent
            // Fields count: 0
            pub mod CPlayer_UseServices {
            }
            // Parent: CPlayerPawnComponent
            // Fields count: 0
            pub mod CPlayer_WaterServices {
            }
            // Parent: CPlayerPawnComponent
            // Fields count: 5
            //
            // Metadata:
            // NetworkVarNames: m_hMyWeapons (CHandle< CBasePlayerWeapon >)
            // NetworkVarNames: m_hActiveWeapon (CHandle< CBasePlayerWeapon>)
            // NetworkVarNames: m_hLastWeapon (CHandle< CBasePlayerWeapon>)
            // NetworkVarNames: m_iAmmo (uint16)
            pub mod CPlayer_WeaponServices {
                pub const m_hMyWeapons: usize = 0x40; // CNetworkUtlVectorBase<CHandle<CBasePlayerWeapon>>
                pub const m_hActiveWeapon: usize = 0x58; // CHandle<CBasePlayerWeapon>
                pub const m_hLastWeapon: usize = 0x5C; // CHandle<CBasePlayerWeapon>
                pub const m_iAmmo: usize = 0x60; // uint16[32]
                pub const m_bPreventWeaponPickup: usize = 0xA0; // bool
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod AmmoTypeInfo_t {
                pub const m_nMaxCarry: usize = 0x10; // int32
                pub const m_nSplashSize: usize = 0x1C; // CRangeInt
                pub const m_nFlags: usize = 0x24; // AmmoFlags_t
                pub const m_flMass: usize = 0x28; // float32
                pub const m_flSpeed: usize = 0x2C; // CRangeFloat
            }
            // Parent: None
            // Fields count: 0
            pub mod CAnimGraphControllerBase {
            }
            // Parent: CBodyComponentSkeletonInstance
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_animationController (CBaseAnimGraphController)
            pub mod CBodyComponentBaseAnimGraph {
                pub const m_animationController: usize = 0x478; // CBaseAnimGraphController
                pub const __m_pChainEntity: usize = 0x980; // CNetworkVarChainer
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_ID (CUtlStringToken)
            // NetworkVarNames: m_Values (Vector4D)
            pub mod EntityRenderAttribute_t {
                pub const m_ID: usize = 0x30; // CUtlStringToken
                pub const m_Values: usize = 0x34; // Vector4D
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // NetworkVarNames: m_Handle (ModelConfigHandle_t)
            // NetworkVarNames: m_Name (string_t)
            // NetworkVarNames: m_AssociatedEntities (CHandle< CBaseModelEntity >)
            // NetworkVarNames: m_AssociatedEntityNames (string_t)
            pub mod ActiveModelConfig_t {
                pub const m_Handle: usize = 0x28; // ModelConfigHandle_t
                pub const m_Name: usize = 0x30; // CUtlSymbolLarge
                pub const m_AssociatedEntities: usize = 0x38; // CNetworkUtlVectorBase<CHandle<CBaseModelEntity>>
                pub const m_AssociatedEntityNames: usize = 0x50; // CNetworkUtlVectorBase<CUtlSymbolLarge>
            }
            // Parent: CBodyComponentSkeletonInstance
            // Fields count: 1
            pub mod CBodyComponentBaseModelEntity {
                pub const __m_pChainEntity: usize = 0x478; // CNetworkVarChainer
            }
            // Parent: None
            // Fields count: 2
            pub mod CRopeOverlapHit {
                pub const m_hEntity: usize = 0x0; // CHandle<CBaseEntity>
                pub const m_vecOverlappingLinks: usize = 0x8; // CUtlVector<int32>
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_hOwner (CEntityHandle)
            // NetworkVarNames: m_name (CUtlStringToken)
            pub mod CGameSceneNodeHandle {
                pub const m_hOwner: usize = 0x8; // CEntityHandle
                pub const m_name: usize = 0xC; // CUtlStringToken
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
            pub mod CGameSceneNode {
                pub const m_nodeToWorld: usize = 0x10; // CTransform
                pub const m_pOwner: usize = 0x30; // CEntityInstance*
                pub const m_pParent: usize = 0x38; // CGameSceneNode*
                pub const m_pChild: usize = 0x40; // CGameSceneNode*
                pub const m_pNextSibling: usize = 0x48; // CGameSceneNode*
                pub const m_hParent: usize = 0x70; // CGameSceneNodeHandle
                pub const m_vecOrigin: usize = 0x80; // CNetworkOriginCellCoordQuantizedVector
                pub const m_angRotation: usize = 0xB8; // QAngle
                pub const m_flScale: usize = 0xC4; // float32
                pub const m_vecAbsOrigin: usize = 0xC8; // Vector
                pub const m_angAbsRotation: usize = 0xD4; // QAngle
                pub const m_flAbsScale: usize = 0xE0; // float32
                pub const m_nParentAttachmentOrBone: usize = 0xE4; // int16
                pub const m_bDebugAbsOriginChanges: usize = 0xE6; // bool
                pub const m_bDormant: usize = 0xE7; // bool
                pub const m_bForceParentToBeNetworked: usize = 0xE8; // bool
                pub const m_bDirtyHierarchy: usize = 0x0; // bitfield:1
                pub const m_bDirtyBoneMergeInfo: usize = 0x0; // bitfield:1
                pub const m_bNetworkedPositionChanged: usize = 0x0; // bitfield:1
                pub const m_bNetworkedAnglesChanged: usize = 0x0; // bitfield:1
                pub const m_bNetworkedScaleChanged: usize = 0x0; // bitfield:1
                pub const m_bWillBeCallingPostDataUpdate: usize = 0x0; // bitfield:1
                pub const m_bBoneMergeFlex: usize = 0x0; // bitfield:1
                pub const m_nLatchAbsOrigin: usize = 0x0; // bitfield:2
                pub const m_bDirtyBoneMergeBoneToRoot: usize = 0x0; // bitfield:1
                pub const m_nHierarchicalDepth: usize = 0xEB; // uint8
                pub const m_nHierarchyType: usize = 0xEC; // uint8
                pub const m_nDoNotSetAnimTimeInInvalidatePhysicsCount: usize = 0xED; // uint8
                pub const m_name: usize = 0xF0; // CUtlStringToken
                pub const m_hierarchyAttachName: usize = 0x140; // CUtlStringToken
                pub const m_flZOffset: usize = 0x144; // float32
                pub const m_vRenderOrigin: usize = 0x148; // Vector
            }
            // Parent: None
            // Fields count: 0
            pub mod IChoreoServices {
            }
            // Parent: None
            // Fields count: 1
            pub mod CInButtonState {
                pub const m_pButtonStates: usize = 0x8; // uint64[3]
            }
            // Parent: None
            // Fields count: 6
            pub mod SequenceHistory_t {
                pub const m_hSequence: usize = 0x0; // HSequence
                pub const m_flSeqStartTime: usize = 0x4; // GameTime_t
                pub const m_flSeqFixedCycle: usize = 0x8; // float32
                pub const m_nSeqLoopMode: usize = 0xC; // AnimLoopMode_t
                pub const m_flPlaybackRate: usize = 0x10; // float32
                pub const m_flCyclesPerSecond: usize = 0x14; // float32
            }
            // Parent: None
            // Fields count: 0
            pub mod ISkeletonAnimationController {
            }
            // Parent: ISkeletonAnimationController
            // Fields count: 1
            pub mod CSkeletonAnimationController {
                pub const m_pSkeletonInstance: usize = 0x8; // CSkeletonInstance*
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // NetworkVarNames: m_hSequence (HSequence)
            // NetworkVarNames: m_flPrevCycle (float32)
            // NetworkVarNames: m_flCycle (float32)
            pub mod CNetworkedSequenceOperation {
                pub const m_hSequence: usize = 0x8; // HSequence
                pub const m_flPrevCycle: usize = 0xC; // float32
                pub const m_flCycle: usize = 0x10; // float32
                pub const m_flWeight: usize = 0x14; // CNetworkedQuantizedFloat
                pub const m_bSequenceChangeNetworked: usize = 0x1C; // bool
                pub const m_bDiscontinuity: usize = 0x1D; // bool
                pub const m_flPrevCycleFromDiscontinuity: usize = 0x20; // float32
                pub const m_flPrevCycleForAnimEventDetection: usize = 0x24; // float32
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // NetworkVarNames: m_hModel (HModelStrong)
            // NetworkVarNames: m_bClientClothCreationSuppressed (bool)
            // NetworkVarNames: m_MeshGroupMask (MeshGroupMask_t)
            // NetworkVarNames: m_nIdealMotionType (int8)
            pub mod CModelState {
                pub const m_hModel: usize = 0xA0; // CStrongHandle<InfoForResourceTypeCModel>
                pub const m_ModelName: usize = 0xA8; // CUtlSymbolLarge
                pub const m_bClientClothCreationSuppressed: usize = 0xE8; // bool
                pub const m_MeshGroupMask: usize = 0x180; // uint64
                pub const m_nIdealMotionType: usize = 0x212; // int8
                pub const m_nForceLOD: usize = 0x213; // int8
                pub const m_nClothUpdateFlags: usize = 0x214; // int8
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
            pub mod CSkeletonInstance {
                pub const m_modelState: usize = 0x160; // CModelState
                pub const m_bIsAnimationEnabled: usize = 0x380; // bool
                pub const m_bUseParentRenderBounds: usize = 0x381; // bool
                pub const m_bDisableSolidCollisionsForHierarchy: usize = 0x382; // bool
                pub const m_bDirtyMotionType: usize = 0x0; // bitfield:1
                pub const m_bIsGeneratingLatchedParentSpaceState: usize = 0x0; // bitfield:1
                pub const m_materialGroup: usize = 0x384; // CUtlStringToken
                pub const m_nHitboxSet: usize = 0x388; // uint8
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_timestamp (GameTime_t)
            // NetworkVarNames: m_nWorldGroupId (WorldGroupId_t)
            pub mod IntervalTimer {
                pub const m_timestamp: usize = 0x8; // GameTime_t
                pub const m_nWorldGroupId: usize = 0xC; // WorldGroupId_t
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // NetworkVarNames: m_duration (float32)
            // NetworkVarNames: m_timestamp (GameTime_t)
            // NetworkVarNames: m_timescale (float32)
            // NetworkVarNames: m_nWorldGroupId (WorldGroupId_t)
            pub mod CountdownTimer {
                pub const m_duration: usize = 0x8; // float32
                pub const m_timestamp: usize = 0xC; // GameTime_t
                pub const m_timescale: usize = 0x10; // float32
                pub const m_nWorldGroupId: usize = 0x14; // WorldGroupId_t
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // NetworkVarNames: m_duration (float32)
            // NetworkVarNames: m_timestamp (float32)
            // NetworkVarNames: m_timescale (float32)
            pub mod EngineCountdownTimer {
                pub const m_duration: usize = 0x8; // float32
                pub const m_timestamp: usize = 0xC; // float32
                pub const m_timescale: usize = 0x10; // float32
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
            pub mod CTimeline {
                pub const m_flValues: usize = 0x10; // float32[64]
                pub const m_nValueCounts: usize = 0x110; // int32[64]
                pub const m_nBucketCount: usize = 0x210; // int32
                pub const m_flInterval: usize = 0x214; // float32
                pub const m_flFinalValue: usize = 0x218; // float32
                pub const m_nCompressionType: usize = 0x21C; // TimelineCompression_t
                pub const m_bStopped: usize = 0x220; // bool
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
            pub mod CAnimGraphNetworkedVariables {
                pub const m_PredNetBoolVariables: usize = 0x8; // CNetworkUtlVectorBase<uint32>
                pub const m_PredNetByteVariables: usize = 0x20; // CNetworkUtlVectorBase<uint8>
                pub const m_PredNetUInt16Variables: usize = 0x38; // CNetworkUtlVectorBase<uint16>
                pub const m_PredNetIntVariables: usize = 0x50; // CNetworkUtlVectorBase<int32>
                pub const m_PredNetUInt32Variables: usize = 0x68; // CNetworkUtlVectorBase<uint32>
                pub const m_PredNetUInt64Variables: usize = 0x80; // CNetworkUtlVectorBase<uint64>
                pub const m_PredNetFloatVariables: usize = 0x98; // CNetworkUtlVectorBase<float32>
                pub const m_PredNetVectorVariables: usize = 0xB0; // CNetworkUtlVectorBase<Vector>
                pub const m_PredNetQuaternionVariables: usize = 0xC8; // CNetworkUtlVectorBase<Quaternion>
                pub const m_PredNetGlobalSymbolVariables: usize = 0xE0; // CNetworkUtlVectorBase<CGlobalSymbol>
                pub const m_OwnerOnlyPredNetBoolVariables: usize = 0xF8; // CNetworkUtlVectorBase<uint32>
                pub const m_OwnerOnlyPredNetByteVariables: usize = 0x110; // CNetworkUtlVectorBase<uint8>
                pub const m_OwnerOnlyPredNetUInt16Variables: usize = 0x128; // CNetworkUtlVectorBase<uint16>
                pub const m_OwnerOnlyPredNetIntVariables: usize = 0x140; // CNetworkUtlVectorBase<int32>
                pub const m_OwnerOnlyPredNetUInt32Variables: usize = 0x158; // CNetworkUtlVectorBase<uint32>
                pub const m_OwnerOnlyPredNetUInt64Variables: usize = 0x170; // CNetworkUtlVectorBase<uint64>
                pub const m_OwnerOnlyPredNetFloatVariables: usize = 0x188; // CNetworkUtlVectorBase<float32>
                pub const m_OwnerOnlyPredNetVectorVariables: usize = 0x1A0; // CNetworkUtlVectorBase<Vector>
                pub const m_OwnerOnlyPredNetQuaternionVariables: usize = 0x1B8; // CNetworkUtlVectorBase<Quaternion>
                pub const m_OwnerOnlyPredNetGlobalSymbolVariables: usize = 0x1D0; // CNetworkUtlVectorBase<CGlobalSymbol>
                pub const m_nBoolVariablesCount: usize = 0x1E8; // int32
                pub const m_nOwnerOnlyBoolVariablesCount: usize = 0x1EC; // int32
                pub const m_nRandomSeedOffset: usize = 0x1F0; // int32
                pub const m_flLastTeleportTime: usize = 0x1F4; // float32
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPropertyCustomFGDType
            pub mod CFootstepTableHandle {
            }
            // Parent: None
            // Fields count: 8
            pub mod ResponseFollowup {
                pub const followup_concept: usize = 0x0; // char*
                pub const followup_contexts: usize = 0x8; // char*
                pub const followup_delay: usize = 0x10; // float32
                pub const followup_target: usize = 0x14; // char*
                pub const followup_entityiotarget: usize = 0x1C; // char*
                pub const followup_entityioinput: usize = 0x24; // char*
                pub const followup_entityiodelay: usize = 0x2C; // float32
                pub const bFired: usize = 0x30; // bool
            }
            // Parent: None
            // Fields count: 3
            pub mod ResponseParams {
                pub const odds: usize = 0x10; // int16
                pub const flags: usize = 0x12; // int16
                pub const m_pFollowup: usize = 0x14; // ResponseFollowup*
            }
            // Parent: None
            // Fields count: 2
            pub mod CResponseCriteriaSet {
                pub const m_nNumPrefixedContexts: usize = 0x28; // int32
                pub const m_bOverrideOnAppend: usize = 0x2C; // bool
            }
            // Parent: None
            // Fields count: 10
            pub mod CRR_Response {
                pub const m_Type: usize = 0x0; // uint8
                pub const m_szResponseName: usize = 0x1; // char[192]
                pub const m_szMatchingRule: usize = 0xC1; // char[128]
                pub const m_Params: usize = 0x141; // ResponseParams
                pub const m_fMatchScore: usize = 0x160; // float32
                pub const m_szSpeakerContext: usize = 0x168; // char*
                pub const m_szWorldContext: usize = 0x170; // char*
                pub const m_Followup: usize = 0x178; // ResponseFollowup
                pub const m_pchCriteriaNames: usize = 0x1B0; // CUtlVector<CUtlSymbol>
                pub const m_pchCriteriaValues: usize = 0x1C8; // CUtlVector<char*>
            }
            // Parent: None
            // Fields count: 2
            pub mod ConceptHistory_t {
                pub const timeSpoken: usize = 0x0; // float32
                pub const m_response: usize = 0x8; // CRR_Response
            }
            // Parent: None
            // Fields count: 9
            pub mod CAI_Expresser {
                pub const m_flStopTalkTime: usize = 0x38; // GameTime_t
                pub const m_flStopTalkTimeWithoutDelay: usize = 0x3C; // GameTime_t
                pub const m_flBlockedTalkTime: usize = 0x40; // GameTime_t
                pub const m_voicePitch: usize = 0x44; // int32
                pub const m_flLastTimeAcceptedSpeak: usize = 0x48; // GameTime_t
                pub const m_bAllowSpeakingInterrupts: usize = 0x4C; // bool
                pub const m_bConsiderSceneInvolvementAsSpeech: usize = 0x4D; // bool
                pub const m_nLastSpokenPriority: usize = 0x50; // int32
                pub const m_pOuter: usize = 0x58; // CBaseFlex*
            }
            // Parent: None
            // Fields count: 1
            pub mod CResponseQueue {
                pub const m_ExpresserTargets: usize = 0x48; // CUtlVector<CAI_Expresser*>
            }
            // Parent: None
            // Fields count: 5
            pub mod CResponseQueue__CDeferredResponse {
                pub const m_contexts: usize = 0x8; // CResponseCriteriaSet
                pub const m_fDispatchTime: usize = 0x38; // float32
                pub const m_hIssuer: usize = 0x3C; // CHandle<CBaseEntity>
                pub const m_response: usize = 0x48; // CRR_Response
                pub const m_bResponseValid: usize = 0x228; // bool
            }
            // Parent: CAI_Expresser
            // Fields count: 1
            pub mod CAI_ExpresserWithFollowup {
                pub const m_pPostponedFollowup: usize = 0x60; // ResponseFollowup*
            }
            // Parent: CAI_ExpresserWithFollowup
            // Fields count: 1
            pub mod CMultiplayer_Expresser {
                pub const m_bAllowMultipleScenes: usize = 0x70; // bool
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            pub mod CBaseEntityAPI {
            }
            // Parent: None
            // Fields count: 10
            pub mod CCommentarySystem {
                pub const m_bCommentaryConvarsChanging: usize = 0x11; // bool
                pub const m_bCommentaryEnabledMidGame: usize = 0x12; // bool
                pub const m_flNextTeleportTime: usize = 0x14; // GameTime_t
                pub const m_iTeleportStage: usize = 0x18; // int32
                pub const m_bCheatState: usize = 0x1C; // bool
                pub const m_bIsFirstSpawnGroupToLoad: usize = 0x1D; // bool
                pub const m_hCurrentNode: usize = 0x38; // CHandle<CPointCommentaryNode>
                pub const m_hActiveCommentaryNode: usize = 0x3C; // CHandle<CPointCommentaryNode>
                pub const m_hLastCommentaryNode: usize = 0x40; // CHandle<CPointCommentaryNode>
                pub const m_vecNodes: usize = 0x48; // CUtlVector<CHandle<CPointCommentaryNode>>
            }
            // Parent: None
            // Fields count: 1
            pub mod CPhysicsShake {
                pub const m_force: usize = 0x8; // Vector
            }
            // Parent: None
            // Fields count: 16
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CGameScriptedMoveData {
                pub const m_vAccumulatedRootMotion: usize = 0x0; // Vector
                pub const m_vDest: usize = 0xC; // Vector
                pub const m_vSrc: usize = 0x18; // Vector
                pub const m_angSrc: usize = 0x24; // QAngle
                pub const m_angDst: usize = 0x30; // QAngle
                pub const m_angCurrent: usize = 0x3C; // QAngle
                pub const m_flAngRate: usize = 0x48; // float32
                pub const m_flDuration: usize = 0x4C; // float32
                pub const m_flStartTime: usize = 0x50; // GameTime_t
                pub const m_bActive: usize = 0x54; // bool
                pub const m_bTeleportOnEnd: usize = 0x55; // bool
                pub const m_bIgnoreRotation: usize = 0x56; // bool
                pub const m_nType: usize = 0x58; // ScriptedMoveType_t
                pub const m_bSuccess: usize = 0x5C; // bool
                pub const m_nForcedCrouchState: usize = 0x60; // ForcedCrouchState_t
                pub const m_bIgnoreCollisions: usize = 0x64; // bool
            }
            // Parent: IChoreoServices
            // Fields count: 5
            pub mod CGameChoreoServices {
                pub const m_hOwner: usize = 0x8; // CHandle<CBaseAnimGraph>
                pub const m_hScriptedSequence: usize = 0xC; // CHandle<CScriptedSequence>
                pub const m_scriptState: usize = 0x10; // IChoreoServices::ScriptState_t
                pub const m_choreoState: usize = 0x14; // IChoreoServices::ChoreoState_t
                pub const m_flTimeStartedState: usize = 0x18; // GameTime_t
            }
            // Parent: None
            // Fields count: 10
            pub mod HullFlags_t {
                pub const m_bHull_Human: usize = 0x0; // bool
                pub const m_bHull_SmallCentered: usize = 0x1; // bool
                pub const m_bHull_WideHuman: usize = 0x2; // bool
                pub const m_bHull_Tiny: usize = 0x3; // bool
                pub const m_bHull_Medium: usize = 0x4; // bool
                pub const m_bHull_TinyCentered: usize = 0x5; // bool
                pub const m_bHull_Large: usize = 0x6; // bool
                pub const m_bHull_LargeCentered: usize = 0x7; // bool
                pub const m_bHull_MediumTall: usize = 0x8; // bool
                pub const m_bHull_Small: usize = 0x9; // bool
            }
            // Parent: None
            // Fields count: 4
            pub mod CConstantForceController {
                pub const m_linear: usize = 0xC; // Vector
                pub const m_angular: usize = 0x18; // RotationVector
                pub const m_linearSave: usize = 0x24; // Vector
                pub const m_angularSave: usize = 0x30; // RotationVector
            }
            // Parent: None
            // Fields count: 4
            pub mod CMotorController {
                pub const m_speed: usize = 0x8; // float32
                pub const m_maxTorque: usize = 0xC; // float32
                pub const m_axis: usize = 0x10; // Vector
                pub const m_inertiaFactor: usize = 0x1C; // float32
            }
            // Parent: None
            // Fields count: 4
            pub mod CSoundEnvelope {
                pub const m_current: usize = 0x0; // float32
                pub const m_target: usize = 0x4; // float32
                pub const m_rate: usize = 0x8; // float32
                pub const m_forceupdate: usize = 0xC; // bool
            }
            // Parent: None
            // Fields count: 2
            pub mod CCopyRecipientFilter {
                pub const m_Flags: usize = 0x8; // int32
                pub const m_Recipients: usize = 0x10; // CUtlVector<CPlayerSlot>
            }
            // Parent: None
            // Fields count: 13
            pub mod CSoundPatch {
                pub const m_pitch: usize = 0x8; // CSoundEnvelope
                pub const m_volume: usize = 0x18; // CSoundEnvelope
                pub const m_shutdownTime: usize = 0x30; // float32
                pub const m_flLastTime: usize = 0x34; // float32
                pub const m_iszSoundScriptName: usize = 0x38; // CUtlSymbolLarge
                pub const m_hEnt: usize = 0x40; // CHandle<CBaseEntity>
                pub const m_soundEntityIndex: usize = 0x44; // CEntityIndex
                pub const m_soundOrigin: usize = 0x48; // Vector
                pub const m_isPlaying: usize = 0x54; // int32
                pub const m_Filter: usize = 0x58; // CCopyRecipientFilter
                pub const m_flCloseCaptionDuration: usize = 0x80; // float32
                pub const m_bUpdatedSoundOrigin: usize = 0x84; // bool
                pub const m_iszClassName: usize = 0x88; // CUtlSymbolLarge
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            pub mod CTakeDamageInfoAPI {
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MPulseInstanceDomainInfo
            // MPulseLibraryBindings
            // MPulseDomainOptInFeatureTag
            pub mod CPulseGraphInstance_ServerEntity {
                pub const m_pComponent: usize = 0xD8; // CPulseGraphComponentBase*
            }
            // Parent: None
            // Fields count: 4
            pub mod CPulseGraphComponentBase {
                pub const m_hOwner: usize = 0x8; // CHandle<CBaseEntity>
                pub const m_sNameFixupStaticPrefix: usize = 0x10; // CUtlSymbolLarge
                pub const m_sNameFixupParent: usize = 0x18; // CUtlSymbolLarge
                pub const m_sNameFixupLocal: usize = 0x20; // CUtlSymbolLarge
            }
            // Parent: CPulseGraphComponentBase
            // Fields count: 0
            pub mod CPulseGraphComponentPointServer {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseLibraryBindings
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CPulseServerFuncs {
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
            pub mod CPulseCell_SoundEventStart {
                pub const m_Type: usize = 0x48; // SoundEventStartType_t
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseLibraryBindings
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CPulseServerFuncs_Sounds {
            }
            // Parent: CPulseCell_BaseYieldingInflow
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Outflow_PlaySceneBase {
                pub const m_OnFinished: usize = 0x48; // CPulse_ResumePoint
                pub const m_OnCanceled: usize = 0x58; // CPulse_ResumePoint
                pub const m_Triggers: usize = 0x68; // CUtlVector<CPulse_OutflowConnection>
            }
            // Parent: None
            // Fields count: 1
            pub mod CPulseCell_Outflow_PlaySceneBase__CursorState_t {
                pub const m_sceneInstance: usize = 0x0; // CHandle<CBaseEntity>
            }
            // Parent: None
            // Fields count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod PulseScriptedSequenceData_t {
                pub const m_nActorID: usize = 0x0; // int32
                pub const m_szPreIdleSequence: usize = 0x8; // CUtlString
                pub const m_szEntrySequence: usize = 0x10; // CUtlString
                pub const m_szSequence: usize = 0x18; // CUtlString
                pub const m_szExitSequence: usize = 0x20; // CUtlString
                pub const m_bLoopPreIdleSequence: usize = 0x28; // bool
                pub const m_bLoopActionSequence: usize = 0x29; // bool
                pub const m_bLoopPostIdleSequence: usize = 0x2A; // bool
                pub const m_bIgnoreLookAt: usize = 0x2B; // bool
            }
            // Parent: None
            // Fields count: 1
            pub mod CPulseCell_Outflow_ScriptedSequence__CursorState_t {
                pub const m_scriptedSequence: usize = 0x0; // CHandle<CBaseEntity>
            }
            // Parent: CEntityComponent
            // Fields count: 0
            pub mod CTouchExpansionComponent {
            }
            // Parent: None
            // Fields count: 25
            pub mod dynpitchvol_base_t {
                pub const preset: usize = 0x0; // int32
                pub const pitchrun: usize = 0x4; // int32
                pub const pitchstart: usize = 0x8; // int32
                pub const spinup: usize = 0xC; // int32
                pub const spindown: usize = 0x10; // int32
                pub const volrun: usize = 0x14; // int32
                pub const volstart: usize = 0x18; // int32
                pub const fadein: usize = 0x1C; // int32
                pub const fadeout: usize = 0x20; // int32
                pub const lfotype: usize = 0x24; // int32
                pub const lforate: usize = 0x28; // int32
                pub const lfomodpitch: usize = 0x2C; // int32
                pub const lfomodvol: usize = 0x30; // int32
                pub const cspinup: usize = 0x34; // int32
                pub const cspincount: usize = 0x38; // int32
                pub const pitch: usize = 0x3C; // int32
                pub const spinupsav: usize = 0x40; // int32
                pub const spindownsav: usize = 0x44; // int32
                pub const pitchfrac: usize = 0x48; // int32
                pub const vol: usize = 0x4C; // int32
                pub const fadeinsav: usize = 0x50; // int32
                pub const fadeoutsav: usize = 0x54; // int32
                pub const volfrac: usize = 0x58; // int32
                pub const lfofrac: usize = 0x5C; // int32
                pub const lfomult: usize = 0x60; // int32
            }
            // Parent: dynpitchvol_base_t
            // Fields count: 0
            pub mod dynpitchvol_t {
            }
            // Parent: None
            // Fields count: 3
            pub mod ResponseContext_t {
                pub const m_iszName: usize = 0x0; // CUtlSymbolLarge
                pub const m_iszValue: usize = 0x8; // CUtlSymbolLarge
                pub const m_fExpirationTime: usize = 0x10; // GameTime_t
            }
            // Parent: None
            // Fields count: 2
            pub mod Relationship_t {
                pub const disposition: usize = 0x0; // Disposition_t
                pub const priority: usize = 0x4; // int32
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
            pub mod CBaseEntity {
                pub const m_CBodyComponent: usize = 0x38; // CBodyComponent*
                pub const m_NetworkTransmitComponent: usize = 0x40; // CNetworkTransmitComponent
                pub const m_aThinkFunctions: usize = 0x4F0; // CUtlVector<thinkfunc_t>
                pub const m_iCurrentThinkContext: usize = 0x508; // int32
                pub const m_nLastThinkTick: usize = 0x50C; // GameTick_t
                pub const m_nDisableContextThinkStartTick: usize = 0x510; // GameTick_t
                pub const m_isSteadyState: usize = 0x520; // CBitVec<64>
                pub const m_lastNetworkChange: usize = 0x528; // float32
                pub const m_ResponseContexts: usize = 0x540; // CUtlVector<ResponseContext_t>
                pub const m_iszResponseContext: usize = 0x558; // CUtlSymbolLarge
                pub const m_iHealth: usize = 0x5A0; // int32
                pub const m_iMaxHealth: usize = 0x5A4; // int32
                pub const m_lifeState: usize = 0x5A8; // uint8
                pub const m_flDamageAccumulator: usize = 0x5AC; // float32
                pub const m_bTakesDamage: usize = 0x5B0; // bool
                pub const m_nTakeDamageFlags: usize = 0x5B4; // TakeDamageFlags_t
                pub const m_bIsPlatform: usize = 0x5B8; // bool
                pub const m_MoveCollide: usize = 0x5BA; // MoveCollide_t
                pub const m_MoveType: usize = 0x5BB; // MoveType_t
                pub const m_nActualMoveType: usize = 0x5BC; // MoveType_t
                pub const m_nWaterTouch: usize = 0x5BD; // uint8
                pub const m_nSlimeTouch: usize = 0x5BE; // uint8
                pub const m_bRestoreInHierarchy: usize = 0x5BF; // bool
                pub const m_target: usize = 0x5C0; // CUtlSymbolLarge
                pub const m_hDamageFilter: usize = 0x5C8; // CHandle<CBaseFilter>
                pub const m_iszDamageFilterName: usize = 0x5D0; // CUtlSymbolLarge
                pub const m_flMoveDoneTime: usize = 0x5D8; // float32
                pub const m_nSubclassID: usize = 0x5DC; // CUtlStringToken
                pub const m_flAnimTime: usize = 0x5E8; // float32
                pub const m_flSimulationTime: usize = 0x5EC; // float32
                pub const m_flCreateTime: usize = 0x5F0; // GameTime_t
                pub const m_bClientSideRagdoll: usize = 0x5F4; // bool
                pub const m_ubInterpolationFrame: usize = 0x5F5; // uint8
                pub const m_vPrevVPhysicsUpdatePos: usize = 0x5F8; // Vector
                pub const m_iTeamNum: usize = 0x604; // uint8
                pub const m_iGlobalname: usize = 0x608; // CUtlSymbolLarge
                pub const m_iSentToClients: usize = 0x610; // int32
                pub const m_flSpeed: usize = 0x614; // float32
                pub const m_sUniqueHammerID: usize = 0x618; // CUtlString
                pub const m_spawnflags: usize = 0x620; // uint32
                pub const m_nNextThinkTick: usize = 0x624; // GameTick_t
                pub const m_nSimulationTick: usize = 0x628; // int32
                pub const m_OnKilled: usize = 0x630; // CEntityIOOutput
                pub const m_fFlags: usize = 0x658; // uint32
                pub const m_vecAbsVelocity: usize = 0x65C; // Vector
                pub const m_vecVelocity: usize = 0x668; // CNetworkVelocityVector
                pub const m_vecBaseVelocity: usize = 0x698; // Vector
                pub const m_nPushEnumCount: usize = 0x6A4; // int32
                pub const m_pCollision: usize = 0x6A8; // CCollisionProperty*
                pub const m_hEffectEntity: usize = 0x6B0; // CHandle<CBaseEntity>
                pub const m_hOwnerEntity: usize = 0x6B4; // CHandle<CBaseEntity>
                pub const m_fEffects: usize = 0x6B8; // uint32
                pub const m_hGroundEntity: usize = 0x6BC; // CHandle<CBaseEntity>
                pub const m_flFriction: usize = 0x6C0; // float32
                pub const m_flElasticity: usize = 0x6C4; // float32
                pub const m_flGravityScale: usize = 0x6C8; // float32
                pub const m_flTimeScale: usize = 0x6CC; // float32
                pub const m_flWaterLevel: usize = 0x6D0; // float32
                pub const m_bAnimatedEveryTick: usize = 0x6D4; // bool
                pub const m_bDisableLowViolence: usize = 0x6D5; // bool
                pub const m_nWaterType: usize = 0x6D6; // uint8
                pub const m_iEFlags: usize = 0x6D8; // int32
                pub const m_OnUser1: usize = 0x6E0; // CEntityIOOutput
                pub const m_OnUser2: usize = 0x708; // CEntityIOOutput
                pub const m_OnUser3: usize = 0x730; // CEntityIOOutput
                pub const m_OnUser4: usize = 0x758; // CEntityIOOutput
                pub const m_iInitialTeamNum: usize = 0x780; // int32
                pub const m_flNavIgnoreUntilTime: usize = 0x784; // GameTime_t
                pub const m_vecAngVelocity: usize = 0x788; // QAngle
                pub const m_bNetworkQuantizeOriginAndAngles: usize = 0x794; // bool
                pub const m_bLagCompensate: usize = 0x795; // bool
                pub const m_flOverriddenFriction: usize = 0x798; // float32
                pub const m_pBlocker: usize = 0x79C; // CHandle<CBaseEntity>
                pub const m_flLocalTime: usize = 0x7A0; // float32
                pub const m_flVPhysicsUpdateLocalTime: usize = 0x7A4; // float32
            }
            // Parent: CBaseEntity
            // Fields count: 0
            pub mod CServerOnlyEntity {
            }
            // Parent: CServerOnlyEntity
            // Fields count: 0
            pub mod CServerOnlyPointEntity {
            }
            // Parent: CServerOnlyEntity
            // Fields count: 0
            pub mod CLogicalEntity {
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
            pub mod CColorCorrection {
                pub const m_flFadeInDuration: usize = 0x7A8; // float32
                pub const m_flFadeOutDuration: usize = 0x7AC; // float32
                pub const m_flStartFadeInWeight: usize = 0x7B0; // float32
                pub const m_flStartFadeOutWeight: usize = 0x7B4; // float32
                pub const m_flTimeStartFadeIn: usize = 0x7B8; // GameTime_t
                pub const m_flTimeStartFadeOut: usize = 0x7BC; // GameTime_t
                pub const m_flMaxWeight: usize = 0x7C0; // float32
                pub const m_bStartDisabled: usize = 0x7C4; // bool
                pub const m_bEnabled: usize = 0x7C5; // bool
                pub const m_bMaster: usize = 0x7C6; // bool
                pub const m_bClientSide: usize = 0x7C7; // bool
                pub const m_bExclusive: usize = 0x7C8; // bool
                pub const m_MinFalloff: usize = 0x7CC; // float32
                pub const m_MaxFalloff: usize = 0x7D0; // float32
                pub const m_flCurWeight: usize = 0x7D4; // float32
                pub const m_netlookupFilename: usize = 0x7D8; // char[512]
                pub const m_lookupFilename: usize = 0x9D8; // CUtlSymbolLarge
            }
            // Parent: CBaseEntity
            // Fields count: 11
            //
            // Metadata:
            // NetworkVarNames: m_hEntAttached (CHandle< CBaseEntity>)
            // NetworkVarNames: m_bCheapEffect (bool)
            pub mod CEntityFlame {
                pub const m_hEntAttached: usize = 0x7A8; // CHandle<CBaseEntity>
                pub const m_bCheapEffect: usize = 0x7AC; // bool
                pub const m_flSize: usize = 0x7B0; // float32
                pub const m_bUseHitboxes: usize = 0x7B4; // bool
                pub const m_iNumHitboxFires: usize = 0x7B8; // int32
                pub const m_flHitboxFireScale: usize = 0x7BC; // float32
                pub const m_flLifetime: usize = 0x7C0; // GameTime_t
                pub const m_hAttacker: usize = 0x7C4; // CHandle<CBaseEntity>
                pub const m_iDangerSound: usize = 0x7C8; // int32
                pub const m_flDirectDamagePerSecond: usize = 0x7CC; // float32
                pub const m_iCustomDamageType: usize = 0x7D0; // int32
            }
            // Parent: CLogicalEntity
            // Fields count: 3
            pub mod CBaseFilter {
                pub const m_bNegated: usize = 0x7A8; // bool
                pub const m_OnPass: usize = 0x7B0; // CEntityIOOutput
                pub const m_OnFail: usize = 0x7D8; // CEntityIOOutput
            }
            // Parent: CBaseFilter
            // Fields count: 4
            pub mod CFilterMultiple {
                pub const m_nFilterType: usize = 0x800; // filter_t
                pub const m_iFilterName: usize = 0x808; // CUtlSymbolLarge[10]
                pub const m_hFilter: usize = 0x858; // CHandle<CBaseEntity>[10]
                pub const m_nFilterCount: usize = 0x880; // int32
            }
            // Parent: CBaseFilter
            // Fields count: 1
            pub mod CFilterProximity {
                pub const m_flRadius: usize = 0x800; // float32
            }
            // Parent: CBaseFilter
            // Fields count: 0
            pub mod CFilterLOS {
            }
            // Parent: CBaseFilter
            // Fields count: 1
            pub mod CFilterClass {
                pub const m_iFilterClass: usize = 0x800; // CUtlSymbolLarge
            }
            // Parent: CBaseEntity
            // Fields count: 4
            //
            // Metadata:
            // NetworkVarNames: m_flScale (float32)
            // NetworkVarNames: m_flStartScale (float32)
            // NetworkVarNames: m_flScaleTime (float32)
            // NetworkVarNames: m_nFlags (uint32)
            pub mod CBaseFire {
                pub const m_flScale: usize = 0x7A8; // float32
                pub const m_flStartScale: usize = 0x7AC; // float32
                pub const m_flScaleTime: usize = 0x7B0; // float32
                pub const m_nFlags: usize = 0x7B4; // uint32
            }
            // Parent: CBaseFire
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_nFlameModelIndex (int32)
            // NetworkVarNames: m_nFlameFromAboveModelIndex (int32)
            pub mod CFireSmoke {
                pub const m_nFlameModelIndex: usize = 0x7B8; // int32
                pub const m_nFlameFromAboveModelIndex: usize = 0x7BC; // int32
            }
            // Parent: CBaseEntity
            // Fields count: 7
            pub mod CFishPool {
                pub const m_fishCount: usize = 0x7B4; // int32
                pub const m_maxRange: usize = 0x7B8; // float32
                pub const m_swimDepth: usize = 0x7BC; // float32
                pub const m_waterLevel: usize = 0x7C0; // float32
                pub const m_isDormant: usize = 0x7C4; // bool
                pub const m_fishes: usize = 0x7C8; // CUtlVector<CHandle<CFish>>
                pub const m_visTimer: usize = 0x7E0; // CountdownTimer
            }
            // Parent: CServerOnlyEntity
            // Fields count: 0
            pub mod CInfoData {
            }
            // Parent: None
            // Fields count: 3
            pub mod locksound_t {
                pub const sLockedSound: usize = 0x8; // CUtlSymbolLarge
                pub const sUnlockedSound: usize = 0x10; // CUtlSymbolLarge
                pub const flwaitSound: usize = 0x18; // GameTime_t
            }
            // Parent: CLogicalEntity
            // Fields count: 4
            pub mod CLogicBranch {
                pub const m_bInValue: usize = 0x7A8; // bool
                pub const m_Listeners: usize = 0x7B0; // CUtlVector<CHandle<CBaseEntity>>
                pub const m_OnTrue: usize = 0x7C8; // CEntityIOOutput
                pub const m_OnFalse: usize = 0x7F0; // CEntityIOOutput
            }
            // Parent: CLogicalEntity
            // Fields count: 7
            pub mod CLogicDistanceCheck {
                pub const m_iszEntityA: usize = 0x7A8; // CUtlSymbolLarge
                pub const m_iszEntityB: usize = 0x7B0; // CUtlSymbolLarge
                pub const m_flZone1Distance: usize = 0x7B8; // float32
                pub const m_flZone2Distance: usize = 0x7BC; // float32
                pub const m_InZone1: usize = 0x7C0; // CEntityIOOutput
                pub const m_InZone2: usize = 0x7E8; // CEntityIOOutput
                pub const m_InZone3: usize = 0x810; // CEntityIOOutput
            }
            // Parent: None
            // Fields count: 3
            pub mod VelocitySampler {
                pub const m_prevSample: usize = 0x0; // Vector
                pub const m_fPrevSampleTime: usize = 0xC; // GameTime_t
                pub const m_fIdealSampleRate: usize = 0x10; // float32
            }
            // Parent: None
            // Fields count: 3
            pub mod SimpleConstraintSoundProfile {
                pub const eKeypoints: usize = 0x8; // SimpleConstraintSoundProfile::SimpleConstraintsSoundProfileKeypoints_t
                pub const m_keyPoints: usize = 0xC; // float32[2]
                pub const m_reversalSoundThresholds: usize = 0x14; // float32[3]
            }
            // Parent: None
            // Fields count: 8
            pub mod ConstraintSoundInfo {
                pub const m_vSampler: usize = 0x8; // VelocitySampler
                pub const m_soundProfile: usize = 0x20; // SimpleConstraintSoundProfile
                pub const m_forwardAxis: usize = 0x40; // Vector
                pub const m_iszTravelSoundFwd: usize = 0x50; // CUtlSymbolLarge
                pub const m_iszTravelSoundBack: usize = 0x58; // CUtlSymbolLarge
                pub const m_iszReversalSounds: usize = 0x68; // CUtlSymbolLarge[3]
                pub const m_bPlayTravelSound: usize = 0x80; // bool
                pub const m_bPlayReversalSound: usize = 0x81; // bool
            }
            // Parent: None
            // Fields count: 5
            pub mod CSmoothFunc {
                pub const m_flSmoothAmplitude: usize = 0x8; // float32
                pub const m_flSmoothBias: usize = 0xC; // float32
                pub const m_flSmoothDuration: usize = 0x10; // float32
                pub const m_flSmoothRemainingTime: usize = 0x14; // float32
                pub const m_nSmoothDir: usize = 0x18; // int32
            }
            // Parent: None
            // Fields count: 1
            pub mod magnetted_objects_t {
                pub const hEntity: usize = 0x8; // CHandle<CBaseEntity>
            }
            // Parent: CServerOnlyPointEntity
            // Fields count: 6
            pub mod CPointPrefab {
                pub const m_targetMapName: usize = 0x7A8; // CUtlSymbolLarge
                pub const m_forceWorldGroupID: usize = 0x7B0; // CUtlSymbolLarge
                pub const m_associatedRelayTargetName: usize = 0x7B8; // CUtlSymbolLarge
                pub const m_fixupNames: usize = 0x7C0; // bool
                pub const m_bLoadDynamic: usize = 0x7C1; // bool
                pub const m_associatedRelayEntity: usize = 0x7C4; // CHandle<CPointPrefab>
            }
            // Parent: CBaseEntity
            // Fields count: 2
            pub mod CSkyboxReference {
                pub const m_worldGroupId: usize = 0x7A8; // WorldGroupId_t
                pub const m_hSkyCamera: usize = 0x7AC; // CHandle<CSkyCamera>
            }
            // Parent: CBaseEntity
            // Fields count: 4
            //
            // Metadata:
            // NetworkVarNames: m_skyboxData (sky3dparams_t)
            // NetworkVarNames: m_skyboxSlotToken (CUtlStringToken)
            pub mod CSkyCamera {
                pub const m_skyboxData: usize = 0x7A8; // sky3dparams_t
                pub const m_skyboxSlotToken: usize = 0x838; // CUtlStringToken
                pub const m_bUseAngles: usize = 0x83C; // bool
                pub const m_pNext: usize = 0x840; // CSkyCamera*
            }
            // Parent: None
            // Fields count: 12
            pub mod CSound {
                pub const m_hOwner: usize = 0x0; // CHandle<CBaseEntity>
                pub const m_hTarget: usize = 0x4; // CHandle<CBaseEntity>
                pub const m_iVolume: usize = 0x8; // int32
                pub const m_flOcclusionScale: usize = 0xC; // float32
                pub const m_iType: usize = 0x10; // int32
                pub const m_iNextAudible: usize = 0x14; // int32
                pub const m_flExpireTime: usize = 0x18; // GameTime_t
                pub const m_iNext: usize = 0x1C; // int16
                pub const m_bNoExpirationTime: usize = 0x1E; // bool
                pub const m_ownerChannelIndex: usize = 0x20; // int32
                pub const m_vecOrigin: usize = 0x24; // Vector
                pub const m_bHasOwner: usize = 0x30; // bool
            }
            // Parent: CServerOnlyEntity
            // Fields count: 11
            pub mod CEnvSoundscape {
                pub const m_OnPlay: usize = 0x7A8; // CEntityIOOutput
                pub const m_flRadius: usize = 0x7D0; // float32
                pub const m_soundscapeName: usize = 0x7D8; // CUtlSymbolLarge
                pub const m_soundEventName: usize = 0x7E0; // CUtlSymbolLarge
                pub const m_bOverrideWithEvent: usize = 0x7E8; // bool
                pub const m_soundscapeIndex: usize = 0x7EC; // int32
                pub const m_soundscapeEntityListId: usize = 0x7F0; // int32
                pub const m_soundEventHash: usize = 0x7F4; // uint32
                pub const m_positionNames: usize = 0x7F8; // CUtlSymbolLarge[8]
                pub const m_hProxySoundscape: usize = 0x838; // CHandle<CEnvSoundscape>
                pub const m_bDisabled: usize = 0x83C; // bool
            }
            // Parent: CEnvSoundscape
            // Fields count: 1
            pub mod CEnvSoundscapeProxy {
                pub const m_MainSoundscapeName: usize = 0x840; // CUtlSymbolLarge
            }
            // Parent: CEnvSoundscape
            // Fields count: 0
            pub mod CEnvSoundscapeTriggerable {
            }
            // Parent: None
            // Fields count: 6
            pub mod lerpdata_t {
                pub const m_hEnt: usize = 0x0; // CHandle<CBaseEntity>
                pub const m_MoveType: usize = 0x4; // MoveType_t
                pub const m_flStartTime: usize = 0x8; // GameTime_t
                pub const m_vecStartOrigin: usize = 0xC; // Vector
                pub const m_qStartRot: usize = 0x20; // Quaternion
                pub const m_nFXIndex: usize = 0x30; // ParticleIndex_t
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNavLinkAnimgraphVar {
                pub const m_strAnimgraphVar: usize = 0x0; // CUtlString
                pub const m_unAlignmentDegrees: usize = 0x8; // uint32
            }
            // Parent: CNavVolume
            // Fields count: 0
            pub mod CNavVolumeMarkupVolume {
            }
            // Parent: CNavVolume
            // Fields count: 0
            pub mod CNavVolumeCalculatedVector {
            }
            // Parent: CNavVolumeCalculatedVector
            // Fields count: 2
            pub mod CNavVolumeBreadthFirstSearch {
                pub const m_vStartPos: usize = 0x80; // Vector
                pub const m_flSearchDist: usize = 0x8C; // float32
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
            pub mod VPhysicsCollisionAttribute_t {
                pub const m_nInteractsAs: usize = 0x8; // uint64
                pub const m_nInteractsWith: usize = 0x10; // uint64
                pub const m_nInteractsExclude: usize = 0x18; // uint64
                pub const m_nEntityId: usize = 0x20; // uint32
                pub const m_nOwnerId: usize = 0x24; // uint32
                pub const m_nHierarchyId: usize = 0x28; // uint16
                pub const m_nCollisionGroup: usize = 0x2A; // uint8
                pub const m_nCollisionFunctionMask: usize = 0x2B; // uint8
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
            pub mod CCollisionProperty {
                pub const m_collisionAttribute: usize = 0x10; // VPhysicsCollisionAttribute_t
                pub const m_vecMins: usize = 0x40; // Vector
                pub const m_vecMaxs: usize = 0x4C; // Vector
                pub const m_usSolidFlags: usize = 0x5A; // uint8
                pub const m_nSolidType: usize = 0x5B; // SolidType_t
                pub const m_triggerBloat: usize = 0x5C; // uint8
                pub const m_nSurroundType: usize = 0x5D; // SurroundingBoundsType_t
                pub const m_CollisionGroup: usize = 0x5E; // uint8
                pub const m_nEnablePhysics: usize = 0x5F; // uint8
                pub const m_flBoundingRadius: usize = 0x60; // float32
                pub const m_vecSpecifiedSurroundingMins: usize = 0x64; // Vector
                pub const m_vecSpecifiedSurroundingMaxs: usize = 0x70; // Vector
                pub const m_vecSurroundingMaxs: usize = 0x7C; // Vector
                pub const m_vecSurroundingMins: usize = 0x88; // Vector
                pub const m_vCapsuleCenter1: usize = 0x94; // Vector
                pub const m_vCapsuleCenter2: usize = 0xA0; // Vector
                pub const m_flCapsuleRadius: usize = 0xAC; // float32
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
            pub mod CEffectData {
                pub const m_vOrigin: usize = 0x8; // Vector
                pub const m_vStart: usize = 0x14; // Vector
                pub const m_vNormal: usize = 0x20; // Vector
                pub const m_vAngles: usize = 0x2C; // QAngle
                pub const m_hEntity: usize = 0x38; // CEntityHandle
                pub const m_hOtherEntity: usize = 0x3C; // CEntityHandle
                pub const m_flScale: usize = 0x40; // float32
                pub const m_flMagnitude: usize = 0x44; // float32
                pub const m_flRadius: usize = 0x48; // float32
                pub const m_nSurfaceProp: usize = 0x4C; // CUtlStringToken
                pub const m_nEffectIndex: usize = 0x50; // CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>
                pub const m_nDamageType: usize = 0x58; // uint32
                pub const m_nPenetrate: usize = 0x5C; // uint8
                pub const m_nMaterial: usize = 0x5E; // uint16
                pub const m_nHitBox: usize = 0x60; // uint16
                pub const m_nColor: usize = 0x62; // uint8
                pub const m_fFlags: usize = 0x63; // uint8
                pub const m_nAttachmentIndex: usize = 0x64; // AttachmentHandle_t
                pub const m_nAttachmentName: usize = 0x68; // CUtlStringToken
                pub const m_iEffectName: usize = 0x6C; // uint16
                pub const m_nExplosionType: usize = 0x6E; // uint8
            }
            // Parent: CBaseEntity
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_flFadeStartDist (float32)
            // NetworkVarNames: m_flFadeEndDist (float32)
            pub mod CEnvDetailController {
                pub const m_flFadeStartDist: usize = 0x7A8; // float32
                pub const m_flFadeEndDist: usize = 0x7AC; // float32
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
            pub mod CEnvWindShared {
                pub const m_flStartTime: usize = 0x8; // GameTime_t
                pub const m_iWindSeed: usize = 0xC; // uint32
                pub const m_iMinWind: usize = 0x10; // uint16
                pub const m_iMaxWind: usize = 0x12; // uint16
                pub const m_windRadius: usize = 0x14; // int32
                pub const m_iMinGust: usize = 0x18; // uint16
                pub const m_iMaxGust: usize = 0x1A; // uint16
                pub const m_flMinGustDelay: usize = 0x1C; // float32
                pub const m_flMaxGustDelay: usize = 0x20; // float32
                pub const m_flGustDuration: usize = 0x24; // float32
                pub const m_iGustDirChange: usize = 0x28; // uint16
                pub const m_location: usize = 0x2C; // Vector
                pub const m_iszGustSound: usize = 0x38; // int32
                pub const m_iWindDir: usize = 0x3C; // int32
                pub const m_flWindSpeed: usize = 0x40; // float32
                pub const m_currentWindVector: usize = 0x44; // Vector
                pub const m_CurrentSwayVector: usize = 0x50; // Vector
                pub const m_PrevSwayVector: usize = 0x5C; // Vector
                pub const m_iInitialWindDir: usize = 0x68; // uint16
                pub const m_flInitialWindSpeed: usize = 0x6C; // float32
                pub const m_OnGustStart: usize = 0x70; // CEntityIOOutput
                pub const m_OnGustEnd: usize = 0x98; // CEntityIOOutput
                pub const m_flVariationTime: usize = 0xC0; // GameTime_t
                pub const m_flSwayTime: usize = 0xC4; // GameTime_t
                pub const m_flSimTime: usize = 0xC8; // GameTime_t
                pub const m_flSwitchTime: usize = 0xCC; // GameTime_t
                pub const m_flAveWindSpeed: usize = 0xD0; // float32
                pub const m_bGusting: usize = 0xD4; // bool
                pub const m_flWindAngleVariation: usize = 0xD8; // float32
                pub const m_flWindSpeedVariation: usize = 0xDC; // float32
                pub const m_iEntIndex: usize = 0xE0; // CEntityIndex
            }
            // Parent: None
            // Fields count: 2
            pub mod CEnvWindShared__WindAveEvent_t {
                pub const m_flStartWindSpeed: usize = 0x0; // float32
                pub const m_flAveWindSpeed: usize = 0x4; // float32
            }
            // Parent: None
            // Fields count: 2
            pub mod CEnvWindShared__WindVariationEvent_t {
                pub const m_flWindAngleVariation: usize = 0x0; // float32
                pub const m_flWindSpeedVariation: usize = 0x4; // float32
            }
            // Parent: CBaseEntity
            // Fields count: 0
            pub mod CInfoLadderDismount {
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
            pub mod shard_model_desc_t {
                pub const m_nModelID: usize = 0x8; // int32
                pub const m_hMaterial: usize = 0x10; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_solid: usize = 0x18; // ShardSolid_t
                pub const m_ShatterPanelMode: usize = 0x19; // ShatterPanelMode
                pub const m_vecPanelSize: usize = 0x1C; // Vector2D
                pub const m_vecStressPositionA: usize = 0x24; // Vector2D
                pub const m_vecStressPositionB: usize = 0x2C; // Vector2D
                pub const m_vecPanelVertices: usize = 0x38; // CNetworkUtlVectorBase<Vector2D>
                pub const m_flGlassHalfThickness: usize = 0x50; // float32
                pub const m_bHasParent: usize = 0x54; // bool
                pub const m_bParentFrozen: usize = 0x55; // bool
                pub const m_SurfacePropStringToken: usize = 0x58; // CUtlStringToken
            }
            // Parent: None
            // Fields count: 30
            pub mod CShatterGlassShard {
                pub const m_hShardHandle: usize = 0x8; // uint32
                pub const m_vecPanelVertices: usize = 0x10; // CUtlVector<Vector2D>
                pub const m_vLocalPanelSpaceOrigin: usize = 0x28; // Vector2D
                pub const m_hModel: usize = 0x30; // CStrongHandle<InfoForResourceTypeCModel>
                pub const m_hPhysicsEntity: usize = 0x38; // CHandle<CShatterGlassShardPhysics>
                pub const m_hParentPanel: usize = 0x3C; // CHandle<CFuncShatterglass>
                pub const m_hParentShard: usize = 0x40; // uint32
                pub const m_ShatterStressType: usize = 0x44; // ShatterGlassStressType
                pub const m_vecStressVelocity: usize = 0x48; // Vector
                pub const m_bCreatedModel: usize = 0x54; // bool
                pub const m_flLongestEdge: usize = 0x58; // float32
                pub const m_flShortestEdge: usize = 0x5C; // float32
                pub const m_flLongestAcross: usize = 0x60; // float32
                pub const m_flShortestAcross: usize = 0x64; // float32
                pub const m_flSumOfAllEdges: usize = 0x68; // float32
                pub const m_flArea: usize = 0x6C; // float32
                pub const m_nOnFrameEdge: usize = 0x70; // OnFrame
                pub const m_nParentPanelsNthShard: usize = 0x74; // int32
                pub const m_nSubShardGeneration: usize = 0x78; // int32
                pub const m_vecAverageVertPosition: usize = 0x7C; // Vector2D
                pub const m_bAverageVertPositionIsValid: usize = 0x84; // bool
                pub const m_vecPanelSpaceStressPositionA: usize = 0x88; // Vector2D
                pub const m_vecPanelSpaceStressPositionB: usize = 0x90; // Vector2D
                pub const m_bStressPositionAIsValid: usize = 0x98; // bool
                pub const m_bStressPositionBIsValid: usize = 0x99; // bool
                pub const m_bFlaggedForRemoval: usize = 0x9A; // bool
                pub const m_flPhysicsEntitySpawnedAtTime: usize = 0x9C; // GameTime_t
                pub const m_bShatterRateLimited: usize = 0xA0; // bool
                pub const m_hEntityHittingMe: usize = 0xA4; // CHandle<CBaseEntity>
                pub const m_vecNeighbors: usize = 0xA8; // CUtlVector<uint32>
            }
            // Parent: CBaseEntity
            // Fields count: 0
            pub mod CGameRulesProxy {
            }
            // Parent: None
            // Fields count: 2
            pub mod CGameRules {
                pub const m_szQuestName: usize = 0x8; // char[128]
                pub const m_nQuestPhase: usize = 0x88; // int32
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
            pub mod CGlowProperty {
                pub const m_fGlowColor: usize = 0x8; // Vector
                pub const m_iGlowType: usize = 0x30; // int32
                pub const m_iGlowTeam: usize = 0x34; // int32
                pub const m_nGlowRange: usize = 0x38; // int32
                pub const m_nGlowRangeMin: usize = 0x3C; // int32
                pub const m_glowColorOverride: usize = 0x40; // Color
                pub const m_bFlashing: usize = 0x44; // bool
                pub const m_flGlowTime: usize = 0x48; // float32
                pub const m_flGlowStartTime: usize = 0x4C; // float32
                pub const m_bEligibleForScreenHighlight: usize = 0x50; // bool
                pub const m_bGlowing: usize = 0x51; // bool
            }
            // Parent: CGameRules
            // Fields count: 0
            pub mod CMultiplayRules {
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
            pub mod fogparams_t {
                pub const dirPrimary: usize = 0x8; // Vector
                pub const colorPrimary: usize = 0x14; // Color
                pub const colorSecondary: usize = 0x18; // Color
                pub const colorPrimaryLerpTo: usize = 0x1C; // Color
                pub const colorSecondaryLerpTo: usize = 0x20; // Color
                pub const start: usize = 0x24; // float32
                pub const end: usize = 0x28; // float32
                pub const farz: usize = 0x2C; // float32
                pub const maxdensity: usize = 0x30; // float32
                pub const exponent: usize = 0x34; // float32
                pub const HDRColorScale: usize = 0x38; // float32
                pub const skyboxFogFactor: usize = 0x3C; // float32
                pub const skyboxFogFactorLerpTo: usize = 0x40; // float32
                pub const startLerpTo: usize = 0x44; // float32
                pub const endLerpTo: usize = 0x48; // float32
                pub const maxdensityLerpTo: usize = 0x4C; // float32
                pub const lerptime: usize = 0x50; // GameTime_t
                pub const duration: usize = 0x54; // float32
                pub const blendtobackground: usize = 0x58; // float32
                pub const scattering: usize = 0x5C; // float32
                pub const locallightscale: usize = 0x60; // float32
                pub const enable: usize = 0x64; // bool
                pub const blend: usize = 0x65; // bool
                pub const m_bNoReflectionFog: usize = 0x66; // bool
                pub const m_bPadding: usize = 0x67; // bool
            }
            // Parent: None
            // Fields count: 14
            //
            // Metadata:
            // NetworkVarNames: m_hCtrl (CHandle< CFogController>)
            pub mod fogplayerparams_t {
                pub const m_hCtrl: usize = 0x8; // CHandle<CFogController>
                pub const m_flTransitionTime: usize = 0xC; // float32
                pub const m_OldColor: usize = 0x10; // Color
                pub const m_flOldStart: usize = 0x14; // float32
                pub const m_flOldEnd: usize = 0x18; // float32
                pub const m_flOldMaxDensity: usize = 0x1C; // float32
                pub const m_flOldHDRColorScale: usize = 0x20; // float32
                pub const m_flOldFarZ: usize = 0x24; // float32
                pub const m_NewColor: usize = 0x28; // Color
                pub const m_flNewStart: usize = 0x2C; // float32
                pub const m_flNewEnd: usize = 0x30; // float32
                pub const m_flNewMaxDensity: usize = 0x34; // float32
                pub const m_flNewHDRColorScale: usize = 0x38; // float32
                pub const m_flNewFarZ: usize = 0x3C; // float32
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
            pub mod sky3dparams_t {
                pub const scale: usize = 0x8; // int16
                pub const origin: usize = 0xC; // Vector
                pub const bClip3DSkyBoxNearToWorldFar: usize = 0x18; // bool
                pub const flClip3DSkyBoxNearToWorldFarOffset: usize = 0x1C; // float32
                pub const fog: usize = 0x20; // fogparams_t
                pub const m_nWorldGroupID: usize = 0x88; // WorldGroupId_t
            }
            // Parent: None
            // Fields count: 5
            pub mod sndopvarlatchdata_t {
                pub const m_iszStack: usize = 0x8; // CUtlSymbolLarge
                pub const m_iszOperator: usize = 0x10; // CUtlSymbolLarge
                pub const m_iszOpvar: usize = 0x18; // CUtlSymbolLarge
                pub const m_flVal: usize = 0x20; // float32
                pub const m_vPos: usize = 0x24; // Vector
            }
            // Parent: None
            // Fields count: 0
            pub mod IRagdoll {
            }
            // Parent: None
            // Fields count: 3
            pub mod ragdollelement_t {
                pub const originParentSpace: usize = 0x0; // Vector
                pub const parentIndex: usize = 0x20; // int32
                pub const m_flRadius: usize = 0x24; // float32
            }
            // Parent: None
            // Fields count: 4
            pub mod ragdoll_t {
                pub const list: usize = 0x0; // CUtlVector<ragdollelement_t>
                pub const boneIndex: usize = 0x18; // CUtlVector<int32>
                pub const allowStretch: usize = 0x30; // bool
                pub const unused: usize = 0x31; // bool
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // NetworkVarNames: m_Transforms (CTransform)
            // NetworkVarNames: m_hOwner (EHANDLE)
            pub mod PhysicsRagdollPose_t {
                pub const __m_pChainEntity: usize = 0x8; // CNetworkVarChainer
                pub const m_Transforms: usize = 0x30; // CNetworkUtlVectorBase<CTransform>
                pub const m_hOwner: usize = 0x48; // CHandle<CBaseEntity>
            }
            // Parent: None
            // Fields count: 13
            pub mod CSceneEventInfo {
                pub const m_iLayer: usize = 0x0; // int32
                pub const m_iPriority: usize = 0x4; // int32
                pub const m_hSequence: usize = 0x8; // HSequence
                pub const m_flWeight: usize = 0xC; // float32
                pub const m_bHasArrived: usize = 0x10; // bool
                pub const m_nType: usize = 0x14; // int32
                pub const m_flNext: usize = 0x18; // GameTime_t
                pub const m_bIsGesture: usize = 0x1C; // bool
                pub const m_bShouldRemove: usize = 0x1D; // bool
                pub const m_hTarget: usize = 0x44; // CHandle<CBaseEntity>
                pub const m_nSceneEventId: usize = 0x48; // uint32
                pub const m_bClientSide: usize = 0x4C; // bool
                pub const m_bStarted: usize = 0x4D; // bool
            }
            // Parent: None
            // Fields count: 4
            pub mod thinkfunc_t {
                pub const m_hFn: usize = 0x10; // HSCRIPT
                pub const m_nContext: usize = 0x18; // CUtlStringToken
                pub const m_nNextThinkTick: usize = 0x1C; // GameTick_t
                pub const m_nLastThinkTick: usize = 0x20; // GameTick_t
            }
            // Parent: None
            // Fields count: 2
            pub mod RagdollCreationParams_t {
                pub const m_vForce: usize = 0x0; // Vector
                pub const m_nForceBone: usize = 0xC; // int32
            }
            // Parent: None
            // Fields count: 6
            pub mod hudtextparms_t {
                pub const color1: usize = 0x0; // Color
                pub const color2: usize = 0x4; // Color
                pub const effect: usize = 0x8; // uint8
                pub const channel: usize = 0x9; // uint8
                pub const x: usize = 0xC; // float32
                pub const y: usize = 0x10; // float32
            }
            // Parent: None
            // Fields count: 2
            pub mod CSimpleSimTimer {
                pub const m_next: usize = 0x0; // GameTime_t
                pub const m_nWorldGroupId: usize = 0x4; // WorldGroupId_t
            }
            // Parent: CSimpleSimTimer
            // Fields count: 1
            pub mod CSimTimer {
                pub const m_interval: usize = 0x8; // float32
            }
            // Parent: CSimpleSimTimer
            // Fields count: 2
            pub mod CRandSimTimer {
                pub const m_minInterval: usize = 0x8; // float32
                pub const m_maxInterval: usize = 0xC; // float32
            }
            // Parent: CSimpleSimTimer
            // Fields count: 1
            pub mod CStopwatchBase {
                pub const m_fIsRunning: usize = 0x8; // bool
            }
            // Parent: CStopwatchBase
            // Fields count: 0
            pub mod CSimpleStopwatch {
            }
            // Parent: CStopwatchBase
            // Fields count: 1
            pub mod CStopwatch {
                pub const m_interval: usize = 0xC; // float32
            }
            // Parent: CStopwatchBase
            // Fields count: 2
            pub mod CRandStopwatch {
                pub const m_minInterval: usize = 0xC; // float32
                pub const m_maxInterval: usize = 0x10; // float32
            }
            // Parent: CGameRules
            // Fields count: 1
            pub mod CSingleplayRules {
                pub const m_bSinglePlayerGameEnding: usize = 0x8C; // bool
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
            pub mod CSoundOpvarSetPointBase {
                pub const m_bDisabled: usize = 0x7A8; // bool
                pub const m_hSource: usize = 0x7AC; // CEntityHandle
                pub const m_iszSourceEntityName: usize = 0x7B8; // CUtlSymbolLarge
                pub const m_vLastPosition: usize = 0x810; // Vector
                pub const m_iszStackName: usize = 0x820; // CUtlSymbolLarge
                pub const m_iszOperatorName: usize = 0x828; // CUtlSymbolLarge
                pub const m_iszOpvarName: usize = 0x830; // CUtlSymbolLarge
                pub const m_iOpvarIndex: usize = 0x838; // int32
                pub const m_bUseAutoCompare: usize = 0x83C; // bool
            }
            // Parent: CSoundOpvarSetPointBase
            // Fields count: 23
            pub mod CSoundOpvarSetPointEntity {
                pub const m_OnEnter: usize = 0x840; // CEntityIOOutput
                pub const m_OnExit: usize = 0x868; // CEntityIOOutput
                pub const m_bAutoDisable: usize = 0x890; // bool
                pub const m_flDistanceMin: usize = 0x8D4; // float32
                pub const m_flDistanceMax: usize = 0x8D8; // float32
                pub const m_flDistanceMapMin: usize = 0x8DC; // float32
                pub const m_flDistanceMapMax: usize = 0x8E0; // float32
                pub const m_flOcclusionRadius: usize = 0x8E4; // float32
                pub const m_flOcclusionMin: usize = 0x8E8; // float32
                pub const m_flOcclusionMax: usize = 0x8EC; // float32
                pub const m_flValSetOnDisable: usize = 0x8F0; // float32
                pub const m_bSetValueOnDisable: usize = 0x8F4; // bool
                pub const m_nSimulationMode: usize = 0x8F8; // int32
                pub const m_nVisibilitySamples: usize = 0x8FC; // int32
                pub const m_vDynamicProxyPoint: usize = 0x900; // Vector
                pub const m_flDynamicMaximumOcclusion: usize = 0x90C; // float32
                pub const m_hDynamicEntity: usize = 0x910; // CEntityHandle
                pub const m_iszDynamicEntityName: usize = 0x918; // CUtlSymbolLarge
                pub const m_flPathingDistanceNormFactor: usize = 0x920; // float32
                pub const m_vPathingSourcePos: usize = 0x924; // Vector
                pub const m_vPathingListenerPos: usize = 0x930; // Vector
                pub const m_vPathingDirection: usize = 0x93C; // Vector
                pub const m_nPathingSourceIndex: usize = 0x948; // int32
            }
            // Parent: CSoundOpvarSetPointEntity
            // Fields count: 9
            pub mod CSoundOpvarSetAABBEntity {
                pub const m_vDistanceInnerMins: usize = 0x94C; // Vector
                pub const m_vDistanceInnerMaxs: usize = 0x958; // Vector
                pub const m_vDistanceOuterMins: usize = 0x964; // Vector
                pub const m_vDistanceOuterMaxs: usize = 0x970; // Vector
                pub const m_nAABBDirection: usize = 0x97C; // int32
                pub const m_vInnerMins: usize = 0x980; // Vector
                pub const m_vInnerMaxs: usize = 0x98C; // Vector
                pub const m_vOuterMins: usize = 0x998; // Vector
                pub const m_vOuterMaxs: usize = 0x9A4; // Vector
            }
            // Parent: CSoundOpvarSetAABBEntity
            // Fields count: 0
            pub mod CSoundOpvarSetOBBEntity {
            }
            // Parent: CSoundOpvarSetPointEntity
            // Fields count: 3
            pub mod CSoundOpvarSetPathCornerEntity {
                pub const m_flDistMinSqr: usize = 0x968; // float32
                pub const m_flDistMaxSqr: usize = 0x96C; // float32
                pub const m_iszPathCornerEntityName: usize = 0x970; // CUtlSymbolLarge
            }
            // Parent: None
            // Fields count: 3
            pub mod SoundOpvarTraceResult_t {
                pub const vPos: usize = 0x0; // Vector
                pub const bDidHit: usize = 0xC; // bool
                pub const flDistSqrToCenter: usize = 0x10; // float32
            }
            // Parent: CSoundOpvarSetPointEntity
            // Fields count: 4
            pub mod CSoundOpvarSetAutoRoomEntity {
                pub const m_traceResults: usize = 0x950; // CUtlVector<SoundOpvarTraceResult_t>
                pub const m_flSize: usize = 0x980; // float32
                pub const m_flHeightTolerance: usize = 0x984; // float32
                pub const m_flSizeSqr: usize = 0x988; // float32
            }
            // Parent: CSoundOpvarSetPointBase
            // Fields count: 8
            pub mod CSoundOpvarSetOBBWindEntity {
                pub const m_vMins: usize = 0x840; // Vector
                pub const m_vMaxs: usize = 0x84C; // Vector
                pub const m_vDistanceMins: usize = 0x858; // Vector
                pub const m_vDistanceMaxs: usize = 0x864; // Vector
                pub const m_flWindMin: usize = 0x870; // float32
                pub const m_flWindMax: usize = 0x874; // float32
                pub const m_flWindMapMin: usize = 0x878; // float32
                pub const m_flWindMapMax: usize = 0x87C; // float32
            }
            // Parent: None
            // Fields count: 18
            pub mod CTakeDamageInfo {
                pub const m_vecDamageForce: usize = 0x8; // Vector
                pub const m_vecDamagePosition: usize = 0x14; // Vector
                pub const m_vecReportedPosition: usize = 0x20; // Vector
                pub const m_vecDamageDirection: usize = 0x2C; // Vector
                pub const m_hInflictor: usize = 0x38; // CHandle<CBaseEntity>
                pub const m_hAttacker: usize = 0x3C; // CHandle<CBaseEntity>
                pub const m_hAbility: usize = 0x40; // CHandle<CBaseEntity>
                pub const m_flDamage: usize = 0x44; // float32
                pub const m_bitsDamageType: usize = 0x48; // int32
                pub const m_iDamageCustom: usize = 0x4C; // int32
                pub const m_iAmmoType: usize = 0x50; // AmmoIndex_t
                pub const m_flOriginalDamage: usize = 0x60; // float32
                pub const m_bShouldBleed: usize = 0x64; // bool
                pub const m_bShouldSpark: usize = 0x65; // bool
                pub const m_nDamageFlags: usize = 0x70; // TakeDamageFlags_t
                pub const m_nNumObjectsPenetrated: usize = 0x74; // int32
                pub const m_hScriptInstance: usize = 0x78; // HSCRIPT
                pub const m_bInTakeDamageFlow: usize = 0x94; // bool
            }
            // Parent: None
            // Fields count: 2
            pub mod CTakeDamageResult {
                pub const m_nHealthLost: usize = 0x0; // int32
                pub const m_nDamageTaken: usize = 0x4; // int32
            }
            // Parent: None
            // Fields count: 4
            pub mod SummaryTakeDamageInfo_t {
                pub const nSummarisedCount: usize = 0x0; // int32
                pub const info: usize = 0x8; // CTakeDamageInfo
                pub const result: usize = 0xA0; // CTakeDamageResult
                pub const hTarget: usize = 0xA8; // CHandle<CBaseEntity>
            }
            // Parent: None
            // Fields count: 1
            pub mod CTakeDamageSummaryScopeGuard {
                pub const m_vecSummaries: usize = 0x8; // CUtlVector<SummaryTakeDamageInfo_t*>
            }
            // Parent: CMultiplayRules
            // Fields count: 0
            pub mod CTeamplayRules {
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_Attributes (CEconItemAttribute)
            pub mod CAttributeList {
                pub const m_Attributes: usize = 0x8; // CUtlVectorEmbeddedNetworkVar<CEconItemAttribute>
                pub const m_pManager: usize = 0x58; // CAttributeManager*
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
            pub mod CEconItemAttribute {
                pub const m_iAttributeDefinitionIndex: usize = 0x30; // uint16
                pub const m_flValue: usize = 0x34; // float32
                pub const m_flInitialValue: usize = 0x38; // float32
                pub const m_nRefundableCurrency: usize = 0x3C; // int32
                pub const m_bSetBonus: usize = 0x40; // bool
            }
            // Parent: None
            // Fields count: 0
            pub mod IEconItemInterface {
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // NetworkVarNames: m_iReapplyProvisionParity (int)
            // NetworkVarNames: m_hOuter (EHANDLE)
            // NetworkVarNames: m_ProviderType (attributeprovidertypes_t)
            pub mod CAttributeManager {
                pub const m_Providers: usize = 0x8; // CUtlVector<CHandle<CBaseEntity>>
                pub const m_iReapplyProvisionParity: usize = 0x20; // int32
                pub const m_hOuter: usize = 0x24; // CHandle<CBaseEntity>
                pub const m_bPreventLoopback: usize = 0x28; // bool
                pub const m_ProviderType: usize = 0x2C; // attributeprovidertypes_t
                pub const m_CachedResults: usize = 0x30; // CUtlVector<CAttributeManager::cached_attribute_float_t>
            }
            // Parent: None
            // Fields count: 3
            pub mod CAttributeManager__cached_attribute_float_t {
                pub const flIn: usize = 0x0; // float32
                pub const iAttribHook: usize = 0x8; // CUtlSymbolLarge
                pub const flOut: usize = 0x10; // float32
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
            pub mod CAttributeContainer {
                pub const m_Item: usize = 0x50; // CEconItemView
            }
            // Parent: None
            // Fields count: 0
            pub mod IHasAttributes {
            }
            // Parent: AmmoTypeInfo_t
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod GameAmmoTypeInfo_t {
                pub const m_nBuySize: usize = 0x34; // int32
                pub const m_nCost: usize = 0x38; // int32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_bSpotted (bool)
            // NetworkVarNames: m_bSpottedByMask (uint32)
            pub mod EntitySpottedState_t {
                pub const m_bSpotted: usize = 0x8; // bool
                pub const m_bSpottedByMask: usize = 0xC; // uint32[2]
            }
            // Parent: CServerOnlyPointEntity
            // Fields count: 3
            pub mod SpawnPoint {
                pub const m_iPriority: usize = 0x7A8; // int32
                pub const m_bEnabled: usize = 0x7AC; // bool
                pub const m_nType: usize = 0x7B0; // int32
            }
            // Parent: SpawnPoint
            // Fields count: 9
            pub mod SpawnPointCoopEnemy {
                pub const m_szWeaponsToGive: usize = 0x7B8; // CUtlSymbolLarge
                pub const m_szPlayerModelToUse: usize = 0x7C0; // CUtlSymbolLarge
                pub const m_nArmorToSpawnWith: usize = 0x7C8; // int32
                pub const m_nDefaultBehavior: usize = 0x7CC; // SpawnPointCoopEnemy::BotDefaultBehavior_t
                pub const m_nBotDifficulty: usize = 0x7D0; // int32
                pub const m_bIsAgressive: usize = 0x7D4; // bool
                pub const m_bStartAsleep: usize = 0x7D5; // bool
                pub const m_flHideRadius: usize = 0x7D8; // float32
                pub const m_szBehaviorTreeFile: usize = 0x7E8; // CUtlSymbolLarge
            }
            // Parent: CGameRulesProxy
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_pGameRules (CCSGameRules*)
            pub mod CCSGameRulesProxy {
                pub const m_pGameRules: usize = 0x7A8; // CCSGameRules*
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
            pub mod CCSGameRules {
                pub const __m_pChainEntity: usize = 0x98; // CNetworkVarChainer
                pub const m_coopMissionManager: usize = 0xC0; // CHandle<CBaseEntity>
                pub const m_bFreezePeriod: usize = 0xC4; // bool
                pub const m_bWarmupPeriod: usize = 0xC5; // bool
                pub const m_fWarmupPeriodEnd: usize = 0xC8; // GameTime_t
                pub const m_fWarmupPeriodStart: usize = 0xCC; // GameTime_t
                pub const m_nTotalPausedTicks: usize = 0xD0; // int32
                pub const m_nPauseStartTick: usize = 0xD4; // int32
                pub const m_bServerPaused: usize = 0xD8; // bool
                pub const m_bGamePaused: usize = 0xD9; // bool
                pub const m_bTerroristTimeOutActive: usize = 0xDA; // bool
                pub const m_bCTTimeOutActive: usize = 0xDB; // bool
                pub const m_flTerroristTimeOutRemaining: usize = 0xDC; // float32
                pub const m_flCTTimeOutRemaining: usize = 0xE0; // float32
                pub const m_nTerroristTimeOuts: usize = 0xE4; // int32
                pub const m_nCTTimeOuts: usize = 0xE8; // int32
                pub const m_bTechnicalTimeOut: usize = 0xEC; // bool
                pub const m_bMatchWaitingForResume: usize = 0xED; // bool
                pub const m_iRoundTime: usize = 0xF0; // int32
                pub const m_fMatchStartTime: usize = 0xF4; // float32
                pub const m_fRoundStartTime: usize = 0xF8; // GameTime_t
                pub const m_flRestartRoundTime: usize = 0xFC; // GameTime_t
                pub const m_bGameRestart: usize = 0x100; // bool
                pub const m_flGameStartTime: usize = 0x104; // float32
                pub const m_timeUntilNextPhaseStarts: usize = 0x108; // float32
                pub const m_gamePhase: usize = 0x10C; // int32
                pub const m_totalRoundsPlayed: usize = 0x110; // int32
                pub const m_nRoundsPlayedThisPhase: usize = 0x114; // int32
                pub const m_nOvertimePlaying: usize = 0x118; // int32
                pub const m_iHostagesRemaining: usize = 0x11C; // int32
                pub const m_bAnyHostageReached: usize = 0x120; // bool
                pub const m_bMapHasBombTarget: usize = 0x121; // bool
                pub const m_bMapHasRescueZone: usize = 0x122; // bool
                pub const m_bMapHasBuyZone: usize = 0x123; // bool
                pub const m_bIsQueuedMatchmaking: usize = 0x124; // bool
                pub const m_nQueuedMatchmakingMode: usize = 0x128; // int32
                pub const m_bIsValveDS: usize = 0x12C; // bool
                pub const m_bLogoMap: usize = 0x12D; // bool
                pub const m_bPlayAllStepSoundsOnServer: usize = 0x12E; // bool
                pub const m_iSpectatorSlotCount: usize = 0x130; // int32
                pub const m_MatchDevice: usize = 0x134; // int32
                pub const m_bHasMatchStarted: usize = 0x138; // bool
                pub const m_nNextMapInMapgroup: usize = 0x13C; // int32
                pub const m_szTournamentEventName: usize = 0x140; // char[512]
                pub const m_szTournamentEventStage: usize = 0x340; // char[512]
                pub const m_szMatchStatTxt: usize = 0x540; // char[512]
                pub const m_szTournamentPredictionsTxt: usize = 0x740; // char[512]
                pub const m_nTournamentPredictionsPct: usize = 0x940; // int32
                pub const m_flCMMItemDropRevealStartTime: usize = 0x944; // GameTime_t
                pub const m_flCMMItemDropRevealEndTime: usize = 0x948; // GameTime_t
                pub const m_bIsDroppingItems: usize = 0x94C; // bool
                pub const m_bIsQuestEligible: usize = 0x94D; // bool
                pub const m_bIsHltvActive: usize = 0x94E; // bool
                pub const m_nGuardianModeWaveNumber: usize = 0x950; // int32
                pub const m_nGuardianModeSpecialKillsRemaining: usize = 0x954; // int32
                pub const m_nGuardianModeSpecialWeaponNeeded: usize = 0x958; // int32
                pub const m_nGuardianGrenadesToGiveBots: usize = 0x95C; // int32
                pub const m_nNumHeaviesToSpawn: usize = 0x960; // int32
                pub const m_numGlobalGiftsGiven: usize = 0x964; // uint32
                pub const m_numGlobalGifters: usize = 0x968; // uint32
                pub const m_numGlobalGiftsPeriodSeconds: usize = 0x96C; // uint32
                pub const m_arrFeaturedGiftersAccounts: usize = 0x970; // uint32[4]
                pub const m_arrFeaturedGiftersGifts: usize = 0x980; // uint32[4]
                pub const m_arrProhibitedItemIndices: usize = 0x990; // uint16[100]
                pub const m_arrTournamentActiveCasterAccounts: usize = 0xA58; // uint32[4]
                pub const m_numBestOfMaps: usize = 0xA68; // int32
                pub const m_nHalloweenMaskListSeed: usize = 0xA6C; // int32
                pub const m_bBombDropped: usize = 0xA70; // bool
                pub const m_bBombPlanted: usize = 0xA71; // bool
                pub const m_iRoundWinStatus: usize = 0xA74; // int32
                pub const m_eRoundWinReason: usize = 0xA78; // int32
                pub const m_bTCantBuy: usize = 0xA7C; // bool
                pub const m_bCTCantBuy: usize = 0xA7D; // bool
                pub const m_flGuardianBuyUntilTime: usize = 0xA80; // GameTime_t
                pub const m_iMatchStats_RoundResults: usize = 0xA84; // int32[30]
                pub const m_iMatchStats_PlayersAlive_CT: usize = 0xAFC; // int32[30]
                pub const m_iMatchStats_PlayersAlive_T: usize = 0xB74; // int32[30]
                pub const m_TeamRespawnWaveTimes: usize = 0xBEC; // float32[32]
                pub const m_flNextRespawnWave: usize = 0xC6C; // GameTime_t[32]
                pub const m_nServerQuestID: usize = 0xCEC; // int32
                pub const m_vMinimapMins: usize = 0xCF0; // Vector
                pub const m_vMinimapMaxs: usize = 0xCFC; // Vector
                pub const m_MinimapVerticalSectionHeights: usize = 0xD08; // float32[8]
                pub const m_bDontIncrementCoopWave: usize = 0xD28; // bool
                pub const m_bSpawnedTerrorHuntHeavy: usize = 0xD29; // bool
                pub const m_nEndMatchMapGroupVoteTypes: usize = 0xD2C; // int32[10]
                pub const m_nEndMatchMapGroupVoteOptions: usize = 0xD54; // int32[10]
                pub const m_nEndMatchMapVoteWinner: usize = 0xD7C; // int32
                pub const m_iNumConsecutiveCTLoses: usize = 0xD80; // int32
                pub const m_iNumConsecutiveTerroristLoses: usize = 0xD84; // int32
                pub const m_bHasHostageBeenTouched: usize = 0xDA0; // bool
                pub const m_flIntermissionStartTime: usize = 0xDA4; // GameTime_t
                pub const m_flIntermissionEndTime: usize = 0xDA8; // GameTime_t
                pub const m_bLevelInitialized: usize = 0xDAC; // bool
                pub const m_iTotalRoundsPlayed: usize = 0xDB0; // int32
                pub const m_iUnBalancedRounds: usize = 0xDB4; // int32
                pub const m_endMatchOnRoundReset: usize = 0xDB8; // bool
                pub const m_endMatchOnThink: usize = 0xDB9; // bool
                pub const m_iFreezeTime: usize = 0xDBC; // int32
                pub const m_iNumTerrorist: usize = 0xDC0; // int32
                pub const m_iNumCT: usize = 0xDC4; // int32
                pub const m_iNumSpawnableTerrorist: usize = 0xDC8; // int32
                pub const m_iNumSpawnableCT: usize = 0xDCC; // int32
                pub const m_arrSelectedHostageSpawnIndices: usize = 0xDD0; // CUtlVector<int32>
                pub const m_nSpawnPointsRandomSeed: usize = 0xDE8; // int32
                pub const m_bFirstConnected: usize = 0xDEC; // bool
                pub const m_bCompleteReset: usize = 0xDED; // bool
                pub const m_bPickNewTeamsOnReset: usize = 0xDEE; // bool
                pub const m_bScrambleTeamsOnRestart: usize = 0xDEF; // bool
                pub const m_bSwapTeamsOnRestart: usize = 0xDF0; // bool
                pub const m_nEndMatchTiedVotes: usize = 0xDF8; // CUtlVector<int32>
                pub const m_bNeedToAskPlayersForContinueVote: usize = 0xE14; // bool
                pub const m_numQueuedMatchmakingAccounts: usize = 0xE18; // uint32
                pub const m_pQueuedMatchmakingReservationString: usize = 0xE20; // char*
                pub const m_numTotalTournamentDrops: usize = 0xE28; // uint32
                pub const m_numSpectatorsCountMax: usize = 0xE2C; // uint32
                pub const m_numSpectatorsCountMaxTV: usize = 0xE30; // uint32
                pub const m_numSpectatorsCountMaxLnk: usize = 0xE34; // uint32
                pub const m_bForceTeamChangeSilent: usize = 0xE40; // bool
                pub const m_bLoadingRoundBackupData: usize = 0xE41; // bool
                pub const m_nMatchInfoShowType: usize = 0xE78; // int32
                pub const m_flMatchInfoDecidedTime: usize = 0xE7C; // float32
                pub const m_flCoopRespawnAndHealTime: usize = 0xE98; // float32
                pub const m_coopBonusCoinsFound: usize = 0xE9C; // int32
                pub const m_coopBonusPistolsOnly: usize = 0xEA0; // bool
                pub const m_coopPlayersInDeploymentZone: usize = 0xEA1; // bool
                pub const m_coopMissionDeadPlayerRespawnEnabled: usize = 0xEA2; // bool
                pub const mTeamDMLastWinningTeamNumber: usize = 0xEA4; // int32
                pub const mTeamDMLastThinkTime: usize = 0xEA8; // float32
                pub const m_flTeamDMLastAnnouncementTime: usize = 0xEAC; // float32
                pub const m_iAccountTerrorist: usize = 0xEB0; // int32
                pub const m_iAccountCT: usize = 0xEB4; // int32
                pub const m_iSpawnPointCount_Terrorist: usize = 0xEB8; // int32
                pub const m_iSpawnPointCount_CT: usize = 0xEBC; // int32
                pub const m_iMaxNumTerrorists: usize = 0xEC0; // int32
                pub const m_iMaxNumCTs: usize = 0xEC4; // int32
                pub const m_iLoserBonus: usize = 0xEC8; // int32
                pub const m_iLoserBonusMostRecentTeam: usize = 0xECC; // int32
                pub const m_tmNextPeriodicThink: usize = 0xED0; // float32
                pub const m_bVoiceWonMatchBragFired: usize = 0xED4; // bool
                pub const m_fWarmupNextChatNoticeTime: usize = 0xED8; // float32
                pub const m_iHostagesRescued: usize = 0xEE0; // int32
                pub const m_iHostagesTouched: usize = 0xEE4; // int32
                pub const m_flNextHostageAnnouncement: usize = 0xEE8; // float32
                pub const m_bNoTerroristsKilled: usize = 0xEEC; // bool
                pub const m_bNoCTsKilled: usize = 0xEED; // bool
                pub const m_bNoEnemiesKilled: usize = 0xEEE; // bool
                pub const m_bCanDonateWeapons: usize = 0xEEF; // bool
                pub const m_firstKillTime: usize = 0xEF4; // float32
                pub const m_firstBloodTime: usize = 0xEFC; // float32
                pub const m_hostageWasInjured: usize = 0xF18; // bool
                pub const m_hostageWasKilled: usize = 0xF19; // bool
                pub const m_bVoteCalled: usize = 0xF28; // bool
                pub const m_bServerVoteOnReset: usize = 0xF29; // bool
                pub const m_flVoteCheckThrottle: usize = 0xF2C; // float32
                pub const m_bBuyTimeEnded: usize = 0xF30; // bool
                pub const m_nLastFreezeEndBeep: usize = 0xF34; // int32
                pub const m_bTargetBombed: usize = 0xF38; // bool
                pub const m_bBombDefused: usize = 0xF39; // bool
                pub const m_bMapHasBombZone: usize = 0xF3A; // bool
                pub const m_vecMainCTSpawnPos: usize = 0xF58; // Vector
                pub const m_CTSpawnPointsMasterList: usize = 0xF68; // CUtlVector<SpawnPoint*>
                pub const m_TerroristSpawnPointsMasterList: usize = 0xF80; // CUtlVector<SpawnPoint*>
                pub const m_bRespawningAllRespawnablePlayers: usize = 0xF98; // bool
                pub const m_iNextCTSpawnPoint: usize = 0xF9C; // int32
                pub const m_flCTSpawnPointUsedTime: usize = 0xFA0; // float32
                pub const m_iNextTerroristSpawnPoint: usize = 0xFA4; // int32
                pub const m_flTerroristSpawnPointUsedTime: usize = 0xFA8; // float32
                pub const m_CTSpawnPoints: usize = 0xFB0; // CUtlVector<SpawnPoint*>
                pub const m_TerroristSpawnPoints: usize = 0xFC8; // CUtlVector<SpawnPoint*>
                pub const m_bIsUnreservedGameServer: usize = 0xFE0; // bool
                pub const m_fAutobalanceDisplayTime: usize = 0xFE4; // float32
                pub const m_bAllowWeaponSwitch: usize = 0x1250; // bool
                pub const m_bRoundTimeWarningTriggered: usize = 0x1251; // bool
                pub const m_phaseChangeAnnouncementTime: usize = 0x1254; // GameTime_t
                pub const m_fNextUpdateTeamClanNamesTime: usize = 0x1258; // float32
                pub const m_flLastThinkTime: usize = 0x125C; // GameTime_t
                pub const m_fAccumulatedRoundOffDamage: usize = 0x1260; // float32
                pub const m_nShorthandedBonusLastEvalRound: usize = 0x1264; // int32
                pub const m_nMatchAbortedEarlyReason: usize = 0x14E0; // int32
                pub const m_bHasTriggeredRoundStartMusic: usize = 0x14E4; // bool
                pub const m_bHasTriggeredCoopSpawnReset: usize = 0x14E5; // bool
                pub const m_bSwitchingTeamsAtRoundReset: usize = 0x14E6; // bool
                pub const m_pGameModeRules: usize = 0x1500; // CCSGameModeRules*
                pub const m_BtGlobalBlackboard: usize = 0x1508; // KeyValues3
                pub const m_hPlayerResource: usize = 0x1568; // CHandle<CBaseEntity>
                pub const m_RetakeRules: usize = 0x1570; // CRetakeGameRules
                pub const m_GuardianBotSkillLevelMax: usize = 0x1754; // int32
                pub const m_GuardianBotSkillLevelMin: usize = 0x1758; // int32
                pub const m_arrTeamUniqueKillWeaponsMatch: usize = 0x1760; // CUtlVector<int32>[4]
                pub const m_bTeamLastKillUsedUniqueWeaponMatch: usize = 0x17C0; // bool[4]
                pub const m_nMatchEndCount: usize = 0x17E8; // uint8
                pub const m_nTTeamIntroVariant: usize = 0x17EC; // int32
                pub const m_nCTTeamIntroVariant: usize = 0x17F0; // int32
                pub const m_bTeamIntroPeriod: usize = 0x17F4; // bool
                pub const m_fTeamIntroPeriodEnd: usize = 0x17F8; // GameTime_t
                pub const m_bPlayedTeamIntroVO: usize = 0x17FC; // bool
                pub const m_iRoundEndWinnerTeam: usize = 0x1800; // int32
                pub const m_eRoundEndReason: usize = 0x1804; // int32
                pub const m_bRoundEndShowTimerDefend: usize = 0x1808; // bool
                pub const m_iRoundEndTimerTime: usize = 0x180C; // int32
                pub const m_sRoundEndFunFactToken: usize = 0x1810; // CUtlString
                pub const m_iRoundEndFunFactPlayerSlot: usize = 0x1818; // CPlayerSlot
                pub const m_iRoundEndFunFactData1: usize = 0x181C; // int32
                pub const m_iRoundEndFunFactData2: usize = 0x1820; // int32
                pub const m_iRoundEndFunFactData3: usize = 0x1824; // int32
                pub const m_sRoundEndMessage: usize = 0x1828; // CUtlString
                pub const m_iRoundEndPlayerCount: usize = 0x1830; // int32
                pub const m_bRoundEndNoMusic: usize = 0x1834; // bool
                pub const m_iRoundEndLegacy: usize = 0x1838; // int32
                pub const m_nRoundEndCount: usize = 0x183C; // uint8
                pub const m_iRoundStartRoundNumber: usize = 0x1840; // int32
                pub const m_nRoundStartCount: usize = 0x1844; // uint8
                pub const m_flLastPerfSampleTime: usize = 0x5850; // float64
                pub const m_bSkipNextServerPerfSample: usize = 0x5858; // bool
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            pub mod CCSTakeDamageInfoAPI {
            }
            // Parent: None
            // Fields count: 1
            pub mod CCSGameModeRules {
                pub const __m_pChainEntity: usize = 0x8; // CNetworkVarChainer
            }
            // Parent: CCSGameModeRules
            // Fields count: 0
            pub mod CCSGameModeRules_Noop {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseInstanceDomainInfo
            // MPulseLibraryBindings
            // MPulseDomainOptInFeatureTag
            pub mod CCSGameModeScript {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseLibraryBindings
            pub mod CCSGameModeScript_ConVars {
            }
            // Parent: CCSGameModeRules
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_WeaponSequence (CUtlString)
            pub mod CCSGameModeRules_ArmsRace {
                pub const m_WeaponSequence: usize = 0x38; // CNetworkUtlVectorBase<CUtlString>
            }
            // Parent: CCSGameModeScript
            // Fields count: 1
            //
            // Metadata:
            // MPulseInstanceDomainInfo
            // MPulseLibraryBindings
            // MPulseDomainOptInFeatureTag
            pub mod CCSArmsRaceScript {
                pub const m_pOuter: usize = 0xD8; // CCSGameModeRules_ArmsRace*
            }
            // Parent: CCSGameModeRules
            // Fields count: 3
            //
            // Metadata:
            // NetworkVarNames: m_flDMBonusStartTime (GameTime_t)
            // NetworkVarNames: m_flDMBonusTimeLength (float)
            // NetworkVarNames: m_nDMBonusWeaponLoadoutSlot (int16)
            pub mod CCSGameModeRules_Deathmatch {
                pub const m_flDMBonusStartTime: usize = 0x38; // GameTime_t
                pub const m_flDMBonusTimeLength: usize = 0x3C; // float32
                pub const m_nDMBonusWeaponLoadoutSlot: usize = 0x40; // int16
            }
            // Parent: CCSGameModeScript
            // Fields count: 1
            //
            // Metadata:
            // MPulseInstanceDomainInfo
            // MPulseLibraryBindings
            // MPulseDomainOptInFeatureTag
            pub mod CCSDeathmatchScript {
                pub const m_pOuter: usize = 0xD8; // CCSGameModeRules_Deathmatch*
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseLibraryBindings
            pub mod CCSDeathmatchScript_ConVars {
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
            pub mod CRetakeGameRules {
                pub const m_nMatchSeed: usize = 0xF8; // int32
                pub const m_bBlockersPresent: usize = 0xFC; // bool
                pub const m_bRoundInProgress: usize = 0xFD; // bool
                pub const m_iFirstSecondHalfRound: usize = 0x100; // int32
                pub const m_iBombSite: usize = 0x104; // int32
            }
            // Parent: None
            // Fields count: 0
            pub mod QuestProgress {
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
            pub mod CSPerRoundStats_t {
                pub const m_iKills: usize = 0x30; // int32
                pub const m_iDeaths: usize = 0x34; // int32
                pub const m_iAssists: usize = 0x38; // int32
                pub const m_iDamage: usize = 0x3C; // int32
                pub const m_iEquipmentValue: usize = 0x40; // int32
                pub const m_iMoneySaved: usize = 0x44; // int32
                pub const m_iKillReward: usize = 0x48; // int32
                pub const m_iLiveTime: usize = 0x4C; // int32
                pub const m_iHeadShotKills: usize = 0x50; // int32
                pub const m_iObjective: usize = 0x54; // int32
                pub const m_iCashEarned: usize = 0x58; // int32
                pub const m_iUtilityDamage: usize = 0x5C; // int32
                pub const m_iEnemiesFlashed: usize = 0x60; // int32
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
            pub mod CSMatchStats_t {
                pub const m_iEnemy5Ks: usize = 0x64; // int32
                pub const m_iEnemy4Ks: usize = 0x68; // int32
                pub const m_iEnemy3Ks: usize = 0x6C; // int32
                pub const m_iEnemyKnifeKills: usize = 0x70; // int32
                pub const m_iEnemyTaserKills: usize = 0x74; // int32
                pub const m_iEnemy2Ks: usize = 0x78; // int32
                pub const m_iUtility_Count: usize = 0x7C; // int32
                pub const m_iUtility_Successes: usize = 0x80; // int32
                pub const m_iUtility_Enemies: usize = 0x84; // int32
                pub const m_iFlash_Count: usize = 0x88; // int32
                pub const m_iFlash_Successes: usize = 0x8C; // int32
                pub const m_nHealthPointsRemovedTotal: usize = 0x90; // int32
                pub const m_nHealthPointsDealtTotal: usize = 0x94; // int32
                pub const m_nShotsFiredTotal: usize = 0x98; // int32
                pub const m_nShotsOnTargetTotal: usize = 0x9C; // int32
                pub const m_i1v1Count: usize = 0xA0; // int32
                pub const m_i1v1Wins: usize = 0xA4; // int32
                pub const m_i1v2Count: usize = 0xA8; // int32
                pub const m_i1v2Wins: usize = 0xAC; // int32
                pub const m_iEntryCount: usize = 0xB0; // int32
                pub const m_iEntryWins: usize = 0xB4; // int32
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
            pub mod CCSGO_TeamPreviewCharacterPosition {
                pub const m_nVariant: usize = 0x7A8; // int32
                pub const m_nRandom: usize = 0x7AC; // int32
                pub const m_nOrdinal: usize = 0x7B0; // int32
                pub const m_sWeaponName: usize = 0x7B8; // CUtlString
                pub const m_xuid: usize = 0x7C0; // uint64
                pub const m_agentItem: usize = 0x7C8; // CEconItemView
                pub const m_glovesItem: usize = 0xA40; // CEconItemView
                pub const m_weaponItem: usize = 0xCB8; // CEconItemView
            }
            // Parent: CCSGO_TeamPreviewCharacterPosition
            // Fields count: 0
            pub mod CCSGO_TeamSelectCharacterPosition {
            }
            // Parent: CCSGO_TeamSelectCharacterPosition
            // Fields count: 0
            pub mod CCSGO_TeamSelectTerroristPosition {
            }
            // Parent: CCSGO_TeamSelectCharacterPosition
            // Fields count: 0
            pub mod CCSGO_TeamSelectCounterTerroristPosition {
            }
            // Parent: CCSGO_TeamPreviewCharacterPosition
            // Fields count: 0
            pub mod CCSGO_TeamIntroCharacterPosition {
            }
            // Parent: CCSGO_TeamIntroCharacterPosition
            // Fields count: 0
            pub mod CCSGO_TeamIntroTerroristPosition {
            }
            // Parent: CCSGO_TeamIntroCharacterPosition
            // Fields count: 0
            pub mod CCSGO_TeamIntroCounterTerroristPosition {
            }
            // Parent: CCSGO_TeamIntroCharacterPosition
            // Fields count: 0
            pub mod CCSGO_WingmanIntroCharacterPosition {
            }
            // Parent: CCSGO_WingmanIntroCharacterPosition
            // Fields count: 0
            pub mod CCSGO_WingmanIntroTerroristPosition {
            }
            // Parent: CCSGO_WingmanIntroCharacterPosition
            // Fields count: 0
            pub mod CCSGO_WingmanIntroCounterTerroristPosition {
            }
            // Parent: CBaseEntity
            // Fields count: 0
            pub mod CCSMinimapBoundary {
            }
            // Parent: None
            // Fields count: 0
            pub mod CCSGOPlayerAnimGraphState {
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
            pub mod CPlayerPing {
                pub const m_hPlayer: usize = 0x7B0; // CHandle<CCSPlayerPawn>
                pub const m_hPingedEntity: usize = 0x7B4; // CHandle<CBaseEntity>
                pub const m_iType: usize = 0x7B8; // int32
                pub const m_bUrgent: usize = 0x7BC; // bool
                pub const m_szPlaceName: usize = 0x7BD; // char[18]
            }
            // Parent: CPlayerPawnComponent
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_hPlayerPing (CHandle< CBaseEntity>)
            pub mod CCSPlayer_PingServices {
                pub const m_flPlayerPingTokens: usize = 0x40; // GameTime_t[5]
                pub const m_hPlayerPing: usize = 0x54; // CHandle<CBaseEntity>
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
            pub mod CCSPlayerResource {
                pub const m_bHostageAlive: usize = 0x7A8; // bool[12]
                pub const m_isHostageFollowingSomeone: usize = 0x7B4; // bool[12]
                pub const m_iHostageEntityIDs: usize = 0x7C0; // CEntityIndex[12]
                pub const m_bombsiteCenterA: usize = 0x7F0; // Vector
                pub const m_bombsiteCenterB: usize = 0x7FC; // Vector
                pub const m_hostageRescueX: usize = 0x808; // int32[4]
                pub const m_hostageRescueY: usize = 0x818; // int32[4]
                pub const m_hostageRescueZ: usize = 0x828; // int32[4]
                pub const m_bEndMatchNextMapAllVoted: usize = 0x838; // bool
                pub const m_foundGoalPositions: usize = 0x839; // bool
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            pub mod CCSPlayerControllerAPI {
            }
            // Parent: CPlayerPawnComponent
            // Fields count: 0
            pub mod CPlayer_ViewModelServices {
            }
        }
        // Module: libsoundsystem.so
        // Classes count: 50
        // Enums count: 0
        pub mod libsoundsystem {
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CVoiceContainerBase {
                pub const m_curves: usize = 0x20; // CUtlDict<CPiecewiseCurve,F(size=1)>
            }
            // Parent: CVoiceContainerBase
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CVoiceContainerDefault {
            }
            // Parent: CVoiceContainerBase
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CVoiceContainerWavFileReader {
                pub const m_wavFilePath: usize = 0x60; // CUtlString
            }
            // Parent: CVoiceContainerWavFileReader
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CVoiceContainerTestConstant {
                pub const m_flTestConstantParam: usize = 0x68; // bool
            }
            // Parent: CVoiceContainerBase
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CVoiceContainerTestNestedDynamic {
                pub const m_SoundToPlay: usize = 0x60; // CStrongHandle<InfoForResourceTypeCVoiceContainerBase>
                pub const m_flTestConstantParam: usize = 0x68; // float32
            }
            // Parent: CVoiceContainerBase
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CVoiceContainerDecayingSineWave {
                pub const m_flFrequency: usize = 0x60; // float32
                pub const m_flDecayTime: usize = 0x64; // float32
            }
            // Parent: CVoiceContainerDecayingSineWave
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CVoiceContainerAmpedDecayingSineWave {
                pub const m_flGainAmount: usize = 0x68; // float32
            }
            // Parent: CVoiceContainerBase
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CVoiceContainerRealtimeFMSineWave {
                pub const m_flCarrierFrequency: usize = 0x60; // float32
                pub const m_flModulatorFrequency: usize = 0x64; // float32
                pub const m_flModulatorAmount: usize = 0x68; // float32
            }
            // Parent: CVoiceContainerBase
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CVoiceContainerBlend {
                pub const m_hSoundOne: usize = 0x60; // CStrongHandle<InfoForResourceTypeCVoiceContainerBase>
                pub const m_hSoundTwo: usize = 0x68; // CStrongHandle<InfoForResourceTypeCVoiceContainerBase>
                pub const m_flBlendAmount: usize = 0x70; // float32
            }
            // Parent: CVoiceContainerBase
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CVoiceContainerEngineSound {
                pub const m_SoundToPlay: usize = 0x60; // CStrongHandle<InfoForResourceTypeCVoiceContainerBase>
                pub const m_flTestConstantParam: usize = 0x68; // float32
                pub const m_flTestSoundEventBoundParam: usize = 0x6C; // float32
                pub const m_flEngineRPM: usize = 0x70; // float32
            }
            // Parent: CVoiceContainerWavFileReader
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CVoiceContainerEnvelopeAnalyzer {
                pub const m_envBuffer: usize = 0x68; // CUtlVector<float32>
            }
            // Parent: CVoiceContainerBase
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CVoiceContainerRandomSampler {
                pub const m_flLoudAmplitude: usize = 0x60; // float32
                pub const m_flLoudAmplitudeJitter: usize = 0x64; // float32
                pub const m_flSoftAmplitude: usize = 0x68; // float32
                pub const m_flSoftAmplitudeJitter: usize = 0x6C; // float32
                pub const m_flLoudTimeJitter: usize = 0x70; // float32
                pub const m_flSoftTimeJitter: usize = 0x74; // float32
                pub const m_grainResources: usize = 0x78; // CUtlVector<CStrongHandle<InfoForResourceTypeCVoiceContainerBase>>
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod VMixFilterDesc_t {
                pub const m_nFilterType: usize = 0x0; // VMixFilterType_t
                pub const m_nFilterSlope: usize = 0x2; // VMixFilterSlope_t
                pub const m_bEnabled: usize = 0x3; // bool
                pub const m_fldbGain: usize = 0x4; // float32
                pub const m_flCutoffFreq: usize = 0x8; // float32
                pub const m_flQ: usize = 0xC; // float32
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod VMixEQ8Desc_t {
                pub const m_stages: usize = 0x0; // VMixFilterDesc_t[8]
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod VMixDelayDesc_t {
                pub const m_feedbackFilter: usize = 0x0; // VMixFilterDesc_t
                pub const m_bEnableFilter: usize = 0x10; // bool
                pub const m_flDelay: usize = 0x14; // float32
                pub const m_flDirectGain: usize = 0x18; // float32
                pub const m_flDelayGain: usize = 0x1C; // float32
                pub const m_flFeedbackGain: usize = 0x20; // float32
                pub const m_flWidth: usize = 0x24; // float32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod VMixPannerDesc_t {
                pub const m_type: usize = 0x0; // VMixPannerType_t
                pub const m_flStrength: usize = 0x4; // float32
            }
            // Parent: None
            // Fields count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod VMixModDelayDesc_t {
                pub const m_feedbackFilter: usize = 0x0; // VMixFilterDesc_t
                pub const m_bPhaseInvert: usize = 0x10; // bool
                pub const m_flGlideTime: usize = 0x14; // float32
                pub const m_flDelay: usize = 0x18; // float32
                pub const m_flOutputGain: usize = 0x1C; // float32
                pub const m_flFeedbackGain: usize = 0x20; // float32
                pub const m_flModRate: usize = 0x24; // float32
                pub const m_flModDepth: usize = 0x28; // float32
                pub const m_bApplyAntialiasing: usize = 0x2C; // bool
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod VMixDiffusorDesc_t {
                pub const m_flSize: usize = 0x0; // float32
                pub const m_flComplexity: usize = 0x4; // float32
                pub const m_flFeedback: usize = 0x8; // float32
                pub const m_flOutputGain: usize = 0xC; // float32
            }
            // Parent: None
            // Fields count: 17
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod VMixBoxverbDesc_t {
                pub const m_flSizeMax: usize = 0x0; // float32
                pub const m_flSizeMin: usize = 0x4; // float32
                pub const m_flComplexity: usize = 0x8; // float32
                pub const m_flDiffusion: usize = 0xC; // float32
                pub const m_flModDepth: usize = 0x10; // float32
                pub const m_flModRate: usize = 0x14; // float32
                pub const m_bParallel: usize = 0x18; // bool
                pub const m_filterType: usize = 0x1C; // VMixFilterDesc_t
                pub const m_flWidth: usize = 0x2C; // float32
                pub const m_flHeight: usize = 0x30; // float32
                pub const m_flDepth: usize = 0x34; // float32
                pub const m_flFeedbackScale: usize = 0x38; // float32
                pub const m_flFeedbackWidth: usize = 0x3C; // float32
                pub const m_flFeedbackHeight: usize = 0x40; // float32
                pub const m_flFeedbackDepth: usize = 0x44; // float32
                pub const m_flOutputGain: usize = 0x48; // float32
                pub const m_flTaps: usize = 0x4C; // float32
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod VMixFreeverbDesc_t {
                pub const m_flRoomSize: usize = 0x0; // float32
                pub const m_flDamp: usize = 0x4; // float32
                pub const m_flWidth: usize = 0x8; // float32
                pub const m_flLateReflections: usize = 0xC; // float32
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod VMixPlateverbDesc_t {
                pub const m_flPrefilter: usize = 0x0; // float32
                pub const m_flInputDiffusion1: usize = 0x4; // float32
                pub const m_flInputDiffusion2: usize = 0x8; // float32
                pub const m_flDecay: usize = 0xC; // float32
                pub const m_flDamp: usize = 0x10; // float32
                pub const m_flFeedbackDiffusion1: usize = 0x14; // float32
                pub const m_flFeedbackDiffusion2: usize = 0x18; // float32
            }
            // Parent: None
            // Fields count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod VMixDynamicsDesc_t {
                pub const m_fldbGain: usize = 0x0; // float32
                pub const m_fldbNoiseGateThreshold: usize = 0x4; // float32
                pub const m_fldbCompressionThreshold: usize = 0x8; // float32
                pub const m_fldbLimiterThreshold: usize = 0xC; // float32
                pub const m_fldbKneeWidth: usize = 0x10; // float32
                pub const m_flRatio: usize = 0x14; // float32
                pub const m_flLimiterRatio: usize = 0x18; // float32
                pub const m_flAttackTimeMS: usize = 0x1C; // float32
                pub const m_flReleaseTimeMS: usize = 0x20; // float32
                pub const m_flRMSTimeMS: usize = 0x24; // float32
                pub const m_flWetMix: usize = 0x28; // float32
                pub const m_bPeakMode: usize = 0x2C; // bool
            }
            // Parent: None
            // Fields count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod VMixDynamicsCompressorDesc_t {
                pub const m_fldbOutputGain: usize = 0x0; // float32
                pub const m_fldbCompressionThreshold: usize = 0x4; // float32
                pub const m_fldbKneeWidth: usize = 0x8; // float32
                pub const m_flCompressionRatio: usize = 0xC; // float32
                pub const m_flAttackTimeMS: usize = 0x10; // float32
                pub const m_flReleaseTimeMS: usize = 0x14; // float32
                pub const m_flRMSTimeMS: usize = 0x18; // float32
                pub const m_flWetMix: usize = 0x1C; // float32
                pub const m_bPeakMode: usize = 0x20; // bool
            }
            // Parent: None
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod VMixDynamicsBand_t {
                pub const m_fldbGainInput: usize = 0x0; // float32
                pub const m_fldbGainOutput: usize = 0x4; // float32
                pub const m_fldbThresholdBelow: usize = 0x8; // float32
                pub const m_fldbThresholdAbove: usize = 0xC; // float32
                pub const m_flRatioBelow: usize = 0x10; // float32
                pub const m_flRatioAbove: usize = 0x14; // float32
                pub const m_flAttackTimeMS: usize = 0x18; // float32
                pub const m_flReleaseTimeMS: usize = 0x1C; // float32
                pub const m_bEnable: usize = 0x20; // bool
                pub const m_bSolo: usize = 0x21; // bool
            }
            // Parent: None
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod VMixDynamics3BandDesc_t {
                pub const m_fldbGainOutput: usize = 0x0; // float32
                pub const m_flRMSTimeMS: usize = 0x4; // float32
                pub const m_fldbKneeWidth: usize = 0x8; // float32
                pub const m_flDepth: usize = 0xC; // float32
                pub const m_flWetMix: usize = 0x10; // float32
                pub const m_flTimeScale: usize = 0x14; // float32
                pub const m_flLowCutoffFreq: usize = 0x18; // float32
                pub const m_flHighCutoffFreq: usize = 0x1C; // float32
                pub const m_bPeakMode: usize = 0x20; // bool
                pub const m_bandDesc: usize = 0x24; // VMixDynamicsBand_t[3]
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod VMixEnvelopeDesc_t {
                pub const m_flAttackTimeMS: usize = 0x0; // float32
                pub const m_flHoldTimeMS: usize = 0x4; // float32
                pub const m_flReleaseTimeMS: usize = 0x8; // float32
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod VMixPitchShiftDesc_t {
                pub const m_nGrainSampleCount: usize = 0x0; // int32
                pub const m_flPitchShift: usize = 0x4; // float32
                pub const m_nQuality: usize = 0x8; // int32
                pub const m_nProcType: usize = 0xC; // int32
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod VMixConvolutionDesc_t {
                pub const m_fldbGain: usize = 0x0; // float32
                pub const m_flPreDelayMS: usize = 0x4; // float32
                pub const m_flWetMix: usize = 0x8; // float32
                pub const m_fldbLow: usize = 0xC; // float32
                pub const m_fldbMid: usize = 0x10; // float32
                pub const m_fldbHigh: usize = 0x14; // float32
                pub const m_flLowCutoffFreq: usize = 0x18; // float32
                pub const m_flHighCutoffFreq: usize = 0x1C; // float32
            }
            // Parent: None
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod VMixVocoderDesc_t {
                pub const m_nBandCount: usize = 0x0; // int32
                pub const m_flBandwidth: usize = 0x4; // float32
                pub const m_fldBModGain: usize = 0x8; // float32
                pub const m_flFreqRangeStart: usize = 0xC; // float32
                pub const m_flFreqRangeEnd: usize = 0x10; // float32
                pub const m_fldBUnvoicedGain: usize = 0x14; // float32
                pub const m_flAttackTimeMS: usize = 0x18; // float32
                pub const m_flReleaseTimeMS: usize = 0x1C; // float32
                pub const m_nDebugBand: usize = 0x20; // int32
                pub const m_bPeakMode: usize = 0x24; // bool
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod VMixShaperDesc_t {
                pub const m_nShape: usize = 0x0; // int32
                pub const m_fldbDrive: usize = 0x4; // float32
                pub const m_fldbOutputGain: usize = 0x8; // float32
                pub const m_flWetMix: usize = 0xC; // float32
                pub const m_nOversampleFactor: usize = 0x10; // int32
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod VMixUtilityDesc_t {
                pub const m_nOp: usize = 0x0; // VMixChannelOperation_t
                pub const m_flInputPan: usize = 0x4; // float32
                pub const m_flOutputBalance: usize = 0x8; // float32
                pub const m_fldbOutputGain: usize = 0xC; // float32
                pub const m_bBassMono: usize = 0x10; // bool
                pub const m_flBassFreq: usize = 0x14; // float32
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod VMixAutoFilterDesc_t {
                pub const m_flEnvelopeAmount: usize = 0x0; // float32
                pub const m_flAttackTimeMS: usize = 0x4; // float32
                pub const m_flReleaseTimeMS: usize = 0x8; // float32
                pub const m_filter: usize = 0xC; // VMixFilterDesc_t
                pub const m_flLFOAmount: usize = 0x1C; // float32
                pub const m_flLFORate: usize = 0x20; // float32
                pub const m_flPhase: usize = 0x24; // float32
                pub const m_nLFOShape: usize = 0x28; // VMixLFOShape_t
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod VMixOscDesc_t {
                pub const oscType: usize = 0x0; // VMixLFOShape_t
                pub const m_freq: usize = 0x4; // float32
                pub const m_flPhase: usize = 0x8; // float32
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod VMixEffectChainDesc_t {
                pub const m_flCrossfadeTime: usize = 0x0; // float32
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod VMixSubgraphSwitchDesc_t {
                pub const m_interpolationMode: usize = 0x0; // VMixSubgraphSwitchInterpolationType_t
                pub const m_bOnlyTailsOnFadeOut: usize = 0x4; // bool
                pub const m_flInterpolationTime: usize = 0x8; // float32
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyElementNameFn
            pub mod CSosGroupActionSchema {
                pub const m_name: usize = 0x8; // CUtlString
                pub const m_actionType: usize = 0x10; // ActionType_t
                pub const m_actionInstanceType: usize = 0x14; // ActionType_t
            }
            // Parent: CSosGroupActionSchema
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CSosGroupActionLimitSchema {
                pub const m_nMaxCount: usize = 0x18; // int32
                pub const m_nStopType: usize = 0x1C; // SosActionStopType_t
                pub const m_nSortType: usize = 0x20; // SosActionSortType_t
            }
            // Parent: CSosGroupActionSchema
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CSosGroupActionTimeLimitSchema {
                pub const m_flMaxDuration: usize = 0x18; // float32
            }
            // Parent: CSosGroupActionSchema
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CSosGroupActionTimeBlockLimitSchema {
                pub const m_nMaxCount: usize = 0x18; // int32
                pub const m_flMaxDuration: usize = 0x1C; // float32
            }
            // Parent: CSosGroupActionSchema
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CSosGroupActionSetSoundeventParameterSchema {
                pub const m_nMaxCount: usize = 0x18; // int32
                pub const m_flMinValue: usize = 0x1C; // float32
                pub const m_flMaxValue: usize = 0x20; // float32
                pub const m_opvarName: usize = 0x28; // CUtlString
                pub const m_nSortType: usize = 0x30; // SosActionSortType_t
            }
            // Parent: CSosGroupActionSchema
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CSosGroupActionSoundeventClusterSchema {
                pub const m_nMinNearby: usize = 0x18; // int32
                pub const m_flClusterEpsilon: usize = 0x1C; // float32
                pub const m_shouldPlayOpvar: usize = 0x20; // CUtlString
                pub const m_shouldPlayClusterChild: usize = 0x28; // CUtlString
                pub const m_clusterSizeOpvar: usize = 0x30; // CUtlString
                pub const m_groupBoundingBoxMinsOpvar: usize = 0x38; // CUtlString
                pub const m_groupBoundingBoxMaxsOpvar: usize = 0x40; // CUtlString
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CSosGroupBranchPattern {
                pub const m_bMatchEventName: usize = 0x8; // bool
                pub const m_bMatchEventSubString: usize = 0x9; // bool
                pub const m_bMatchEntIndex: usize = 0xA; // bool
                pub const m_bMatchOpvar: usize = 0xB; // bool
            }
            // Parent: CSosGroupBranchPattern
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CSosGroupMatchPattern {
                pub const m_matchSoundEventName: usize = 0x10; // CUtlString
                pub const m_matchSoundEventSubString: usize = 0x18; // CUtlString
                pub const m_flEntIndex: usize = 0x20; // float32
                pub const m_flOpvar: usize = 0x24; // float32
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyElementNameFn
            pub mod CSosSoundEventGroupSchema {
                pub const m_name: usize = 0x0; // CUtlString
                pub const m_nType: usize = 0x8; // SosGroupType_t
                pub const m_bIsBlocking: usize = 0xC; // bool
                pub const m_nBlockMaxCount: usize = 0x10; // int32
                pub const m_bInvertMatch: usize = 0x14; // bool
                pub const m_matchPattern: usize = 0x18; // CSosGroupMatchPattern
                pub const m_branchPattern: usize = 0x40; // CSosGroupBranchPattern
                pub const m_vActions: usize = 0xB0; // CSosGroupActionSchema*[4]
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CSosSoundEventGroupListSchema {
                pub const m_groupList: usize = 0x0; // CUtlVector<CSosSoundEventGroupSchema>
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod SosEditItemInfo_t {
                pub const itemType: usize = 0x0; // SosEditItemType_t
                pub const itemName: usize = 0x8; // CUtlString
                pub const itemTypeName: usize = 0x10; // CUtlString
                pub const itemKVString: usize = 0x20; // CUtlString
                pub const itemPos: usize = 0x28; // Vector2D
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod SelectedEditItemInfo_t {
                pub const m_EditItems: usize = 0x0; // CUtlVector<SosEditItemInfo_t>
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CSoundEventMetaData {
                pub const m_soundEventVMix: usize = 0x0; // CStrongHandle<InfoForResourceTypeCVMixListResource>
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CDSPMixgroupModifier {
                pub const m_mixgroup: usize = 0x0; // CUtlString
                pub const m_flModifier: usize = 0x8; // float32
                pub const m_flModifierMin: usize = 0xC; // float32
                pub const m_flSourceModifier: usize = 0x10; // float32
                pub const m_flSourceModifierMin: usize = 0x14; // float32
                pub const m_flListenerReverbModifierWhenSourceReverbIsActive: usize = 0x18; // float32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CDspPresetModifierList {
                pub const m_dspName: usize = 0x0; // CUtlString
                pub const m_modifiers: usize = 0x8; // CUtlVector<CDSPMixgroupModifier>
            }
        }
        // Module: libvphysics2.so
        // Classes count: 88
        // Enums count: 0
        pub mod libvphysics2 {
            // Parent: None
            // Fields count: 35
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CFeJiggleBone {
                pub const m_nFlags: usize = 0x0; // uint32
                pub const m_flLength: usize = 0x4; // float32
                pub const m_flTipMass: usize = 0x8; // float32
                pub const m_flYawStiffness: usize = 0xC; // float32
                pub const m_flYawDamping: usize = 0x10; // float32
                pub const m_flPitchStiffness: usize = 0x14; // float32
                pub const m_flPitchDamping: usize = 0x18; // float32
                pub const m_flAlongStiffness: usize = 0x1C; // float32
                pub const m_flAlongDamping: usize = 0x20; // float32
                pub const m_flAngleLimit: usize = 0x24; // float32
                pub const m_flMinYaw: usize = 0x28; // float32
                pub const m_flMaxYaw: usize = 0x2C; // float32
                pub const m_flYawFriction: usize = 0x30; // float32
                pub const m_flYawBounce: usize = 0x34; // float32
                pub const m_flMinPitch: usize = 0x38; // float32
                pub const m_flMaxPitch: usize = 0x3C; // float32
                pub const m_flPitchFriction: usize = 0x40; // float32
                pub const m_flPitchBounce: usize = 0x44; // float32
                pub const m_flBaseMass: usize = 0x48; // float32
                pub const m_flBaseStiffness: usize = 0x4C; // float32
                pub const m_flBaseDamping: usize = 0x50; // float32
                pub const m_flBaseMinLeft: usize = 0x54; // float32
                pub const m_flBaseMaxLeft: usize = 0x58; // float32
                pub const m_flBaseLeftFriction: usize = 0x5C; // float32
                pub const m_flBaseMinUp: usize = 0x60; // float32
                pub const m_flBaseMaxUp: usize = 0x64; // float32
                pub const m_flBaseUpFriction: usize = 0x68; // float32
                pub const m_flBaseMinForward: usize = 0x6C; // float32
                pub const m_flBaseMaxForward: usize = 0x70; // float32
                pub const m_flBaseForwardFriction: usize = 0x74; // float32
                pub const m_flRadius0: usize = 0x78; // float32
                pub const m_flRadius1: usize = 0x7C; // float32
                pub const m_vPoint0: usize = 0x80; // Vector
                pub const m_vPoint1: usize = 0x8C; // Vector
                pub const m_nCollisionMask: usize = 0x98; // uint16
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CFeNamedJiggleBone {
                pub const m_strParentBone: usize = 0x0; // CUtlString
                pub const m_transform: usize = 0x10; // CTransform
                pub const m_nJiggleParent: usize = 0x30; // uint32
                pub const m_jiggleBone: usize = 0x34; // CFeJiggleBone
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CFeIndexedJiggleBone {
                pub const m_nNode: usize = 0x0; // uint32
                pub const m_nJiggleParent: usize = 0x4; // uint32
                pub const m_jiggleBone: usize = 0x8; // CFeJiggleBone
            }
            // Parent: None
            // Fields count: 100
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod PhysFeModelDesc_t {
                pub const m_CtrlHash: usize = 0x0; // CUtlVector<uint32>
                pub const m_CtrlName: usize = 0x18; // CUtlVector<CUtlString>
                pub const m_nStaticNodeFlags: usize = 0x30; // uint32
                pub const m_nDynamicNodeFlags: usize = 0x34; // uint32
                pub const m_flLocalForce: usize = 0x38; // float32
                pub const m_flLocalRotation: usize = 0x3C; // float32
                pub const m_nNodeCount: usize = 0x40; // uint16
                pub const m_nStaticNodes: usize = 0x42; // uint16
                pub const m_nRotLockStaticNodes: usize = 0x44; // uint16
                pub const m_nFirstPositionDrivenNode: usize = 0x46; // uint16
                pub const m_nSimdTriCount1: usize = 0x48; // uint16
                pub const m_nSimdTriCount2: usize = 0x4A; // uint16
                pub const m_nSimdQuadCount1: usize = 0x4C; // uint16
                pub const m_nSimdQuadCount2: usize = 0x4E; // uint16
                pub const m_nQuadCount1: usize = 0x50; // uint16
                pub const m_nQuadCount2: usize = 0x52; // uint16
                pub const m_nTreeDepth: usize = 0x54; // uint16
                pub const m_nNodeBaseJiggleboneDependsCount: usize = 0x56; // uint16
                pub const m_nRopeCount: usize = 0x58; // uint16
                pub const m_Ropes: usize = 0x60; // CUtlVector<uint16>
                pub const m_NodeBases: usize = 0x78; // CUtlVector<FeNodeBase_t>
                pub const m_SimdNodeBases: usize = 0x90; // CUtlVector<FeSimdNodeBase_t>
                pub const m_Quads: usize = 0xA8; // CUtlVector<FeQuad_t>
                pub const m_SimdQuads: usize = 0xC0; // CUtlVector<FeSimdQuad_t>
                pub const m_SimdTris: usize = 0xD8; // CUtlVector<FeSimdTri_t>
                pub const m_SimdRods: usize = 0xF0; // CUtlVector<FeSimdRodConstraint_t>
                pub const m_SimdRodsAnim: usize = 0x108; // CUtlVector<FeSimdRodConstraintAnim_t>
                pub const m_InitPose: usize = 0x120; // CUtlVector<CTransform>
                pub const m_Rods: usize = 0x138; // CUtlVector<FeRodConstraint_t>
                pub const m_Twists: usize = 0x150; // CUtlVector<FeTwistConstraint_t>
                pub const m_AxialEdges: usize = 0x168; // CUtlVector<FeAxialEdgeBend_t>
                pub const m_NodeInvMasses: usize = 0x180; // CUtlVector<float32>
                pub const m_CtrlOffsets: usize = 0x198; // CUtlVector<FeCtrlOffset_t>
                pub const m_CtrlOsOffsets: usize = 0x1B0; // CUtlVector<FeCtrlOsOffset_t>
                pub const m_FollowNodes: usize = 0x1C8; // CUtlVector<FeFollowNode_t>
                pub const m_CollisionPlanes: usize = 0x1E0; // CUtlVector<FeCollisionPlane_t>
                pub const m_NodeIntegrator: usize = 0x1F8; // CUtlVector<FeNodeIntegrator_t>
                pub const m_SpringIntegrator: usize = 0x210; // CUtlVector<FeSpringIntegrator_t>
                pub const m_SimdSpringIntegrator: usize = 0x228; // CUtlVector<FeSimdSpringIntegrator_t>
                pub const m_WorldCollisionParams: usize = 0x240; // CUtlVector<FeWorldCollisionParams_t>
                pub const m_LegacyStretchForce: usize = 0x258; // CUtlVector<float32>
                pub const m_NodeCollisionRadii: usize = 0x270; // CUtlVector<float32>
                pub const m_DynNodeFriction: usize = 0x288; // CUtlVector<float32>
                pub const m_LocalRotation: usize = 0x2A0; // CUtlVector<float32>
                pub const m_LocalForce: usize = 0x2B8; // CUtlVector<float32>
                pub const m_TaperedCapsuleStretches: usize = 0x2D0; // CUtlVector<FeTaperedCapsuleStretch_t>
                pub const m_TaperedCapsuleRigids: usize = 0x2E8; // CUtlVector<FeTaperedCapsuleRigid_t>
                pub const m_SphereRigids: usize = 0x300; // CUtlVector<FeSphereRigid_t>
                pub const m_WorldCollisionNodes: usize = 0x318; // CUtlVector<uint16>
                pub const m_TreeParents: usize = 0x330; // CUtlVector<uint16>
                pub const m_TreeCollisionMasks: usize = 0x348; // CUtlVector<uint16>
                pub const m_TreeChildren: usize = 0x360; // CUtlVector<FeTreeChildren_t>
                pub const m_FreeNodes: usize = 0x378; // CUtlVector<uint16>
                pub const m_FitMatrices: usize = 0x390; // CUtlVector<FeFitMatrix_t>
                pub const m_FitWeights: usize = 0x3A8; // CUtlVector<FeFitWeight_t>
                pub const m_ReverseOffsets: usize = 0x3C0; // CUtlVector<FeNodeReverseOffset_t>
                pub const m_AnimStrayRadii: usize = 0x3D8; // CUtlVector<FeAnimStrayRadius_t>
                pub const m_SimdAnimStrayRadii: usize = 0x3F0; // CUtlVector<FeSimdAnimStrayRadius_t>
                pub const m_KelagerBends: usize = 0x408; // CUtlVector<FeKelagerBend2_t>
                pub const m_CtrlSoftOffsets: usize = 0x420; // CUtlVector<FeCtrlSoftOffset_t>
                pub const m_JiggleBones: usize = 0x438; // CUtlVector<CFeIndexedJiggleBone>
                pub const m_SourceElems: usize = 0x450; // CUtlVector<uint16>
                pub const m_GoalDampedSpringIntegrators: usize = 0x468; // CUtlVector<uint32>
                pub const m_Tris: usize = 0x480; // CUtlVector<FeTri_t>
                pub const m_nTriCount1: usize = 0x498; // uint16
                pub const m_nTriCount2: usize = 0x49A; // uint16
                pub const m_nReservedUint8: usize = 0x49C; // uint8
                pub const m_nExtraPressureIterations: usize = 0x49D; // uint8
                pub const m_nExtraGoalIterations: usize = 0x49E; // uint8
                pub const m_nExtraIterations: usize = 0x49F; // uint8
                pub const m_BoxRigids: usize = 0x4A0; // CUtlVector<FeBoxRigid_t>
                pub const m_DynNodeVertexSet: usize = 0x4B8; // CUtlVector<uint8>
                pub const m_VertexSetNames: usize = 0x4D0; // CUtlVector<uint32>
                pub const m_RigidColliderPriorities: usize = 0x4E8; // CUtlVector<FeRigidColliderIndices_t>
                pub const m_MorphLayers: usize = 0x500; // CUtlVector<FeMorphLayerDepr_t>
                pub const m_MorphSetData: usize = 0x518; // CUtlVector<uint8>
                pub const m_VertexMaps: usize = 0x530; // CUtlVector<FeVertexMapDesc_t>
                pub const m_VertexMapValues: usize = 0x548; // CUtlVector<uint8>
                pub const m_Effects: usize = 0x560; // CUtlVector<FeEffectDesc_t>
                pub const m_LockToParent: usize = 0x578; // CUtlVector<FeCtrlOffset_t>
                pub const m_LockToGoal: usize = 0x590; // CUtlVector<uint16>
                pub const m_SkelParents: usize = 0x5A8; // CUtlVector<int16>
                pub const m_DynNodeWindBases: usize = 0x5C0; // CUtlVector<FeNodeWindBase_t>
                pub const m_flInternalPressure: usize = 0x5D8; // float32
                pub const m_flDefaultTimeDilation: usize = 0x5DC; // float32
                pub const m_flWindage: usize = 0x5E0; // float32
                pub const m_flWindDrag: usize = 0x5E4; // float32
                pub const m_flDefaultSurfaceStretch: usize = 0x5E8; // float32
                pub const m_flDefaultThreadStretch: usize = 0x5EC; // float32
                pub const m_flDefaultGravityScale: usize = 0x5F0; // float32
                pub const m_flDefaultVelAirDrag: usize = 0x5F4; // float32
                pub const m_flDefaultExpAirDrag: usize = 0x5F8; // float32
                pub const m_flDefaultVelQuadAirDrag: usize = 0x5FC; // float32
                pub const m_flDefaultExpQuadAirDrag: usize = 0x600; // float32
                pub const m_flRodVelocitySmoothRate: usize = 0x604; // float32
                pub const m_flQuadVelocitySmoothRate: usize = 0x608; // float32
                pub const m_flAddWorldCollisionRadius: usize = 0x60C; // float32
                pub const m_flDefaultVolumetricSolveAmount: usize = 0x610; // float32
                pub const m_nRodVelocitySmoothIterations: usize = 0x614; // uint16
                pub const m_nQuadVelocitySmoothIterations: usize = 0x616; // uint16
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FourVectors2D {
                pub const x: usize = 0x0; // fltx4
                pub const y: usize = 0x10; // fltx4
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeEdgeDesc_t {
                pub const nEdge: usize = 0x0; // uint16[2]
                pub const nSide: usize = 0x4; // uint16[2][2]
                pub const nVirtElem: usize = 0xC; // uint16[2]
            }
            // Parent: None
            // Fields count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod OldFeEdge_t {
                pub const m_flK: usize = 0x0; // float32[3]
                pub const invA: usize = 0xC; // float32
                pub const t: usize = 0x10; // float32
                pub const flThetaRelaxed: usize = 0x14; // float32
                pub const flThetaFactor: usize = 0x18; // float32
                pub const c01: usize = 0x1C; // float32
                pub const c02: usize = 0x20; // float32
                pub const c03: usize = 0x24; // float32
                pub const c04: usize = 0x28; // float32
                pub const flAxialModelDist: usize = 0x2C; // float32
                pub const flAxialModelWeights: usize = 0x30; // float32[4]
                pub const m_nNode: usize = 0x40; // uint16[4]
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeWeightedNode_t {
                pub const nNode: usize = 0x0; // uint16
                pub const nWeight: usize = 0x2; // uint16
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeKelagerBend2_t {
                pub const flWeight: usize = 0x0; // float32[3]
                pub const flHeight0: usize = 0xC; // float32
                pub const nNode: usize = 0x10; // uint16[3]
                pub const nReserved: usize = 0x16; // uint16
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeStiffHingeBuild_t {
                pub const flMaxAngle: usize = 0x0; // float32
                pub const flStrength: usize = 0x4; // float32
                pub const flMotionBias: usize = 0x8; // float32[3]
                pub const nNode: usize = 0x14; // uint16[3]
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeTri_t {
                pub const nNode: usize = 0x0; // uint16[3]
                pub const w1: usize = 0x8; // float32
                pub const w2: usize = 0xC; // float32
                pub const v1x: usize = 0x10; // float32
                pub const v2: usize = 0x14; // Vector2D
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeSimdTri_t {
                pub const nNode: usize = 0x0; // uint32[4][3]
                pub const w1: usize = 0x30; // fltx4
                pub const w2: usize = 0x40; // fltx4
                pub const v1x: usize = 0x50; // fltx4
                pub const v2: usize = 0x60; // FourVectors2D
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeQuad_t {
                pub const nNode: usize = 0x0; // uint16[4]
                pub const flSlack: usize = 0x8; // float32
                pub const vShape: usize = 0xC; // Vector4D[4]
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeNodeBase_t {
                pub const nNode: usize = 0x0; // uint16
                pub const nDummy: usize = 0x2; // uint16[3]
                pub const nNodeX0: usize = 0x8; // uint16
                pub const nNodeX1: usize = 0xA; // uint16
                pub const nNodeY0: usize = 0xC; // uint16
                pub const nNodeY1: usize = 0xE; // uint16
                pub const qAdjust: usize = 0x10; // QuaternionStorage
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeNodeWindBase_t {
                pub const nNodeX0: usize = 0x0; // uint16
                pub const nNodeX1: usize = 0x2; // uint16
                pub const nNodeY0: usize = 0x4; // uint16
                pub const nNodeY1: usize = 0x6; // uint16
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeNodeReverseOffset_t {
                pub const vOffset: usize = 0x0; // Vector
                pub const nBoneCtrl: usize = 0xC; // uint16
                pub const nTargetNode: usize = 0xE; // uint16
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeSimdQuad_t {
                pub const nNode: usize = 0x0; // uint16[4][4]
                pub const f4Slack: usize = 0x20; // fltx4
                pub const vShape: usize = 0x30; // FourVectors[4]
                pub const f4Weights: usize = 0xF0; // fltx4[4]
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeAxialEdgeBend_t {
                pub const te: usize = 0x0; // float32
                pub const tv: usize = 0x4; // float32
                pub const flDist: usize = 0x8; // float32
                pub const flWeight: usize = 0xC; // float32[4]
                pub const nNode: usize = 0x1C; // uint16[6]
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeBandBendLimit_t {
                pub const flDistMin: usize = 0x0; // float32
                pub const flDistMax: usize = 0x4; // float32
                pub const nNode: usize = 0x8; // uint16[6]
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeRodConstraint_t {
                pub const nNode: usize = 0x0; // uint16[2]
                pub const flMaxDist: usize = 0x4; // float32
                pub const flMinDist: usize = 0x8; // float32
                pub const flWeight0: usize = 0xC; // float32
                pub const flRelaxationFactor: usize = 0x10; // float32
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeTwistConstraint_t {
                pub const nNodeOrient: usize = 0x0; // uint16
                pub const nNodeEnd: usize = 0x2; // uint16
                pub const flTwistRelax: usize = 0x4; // float32
                pub const flSwingRelax: usize = 0x8; // float32
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeSimdRodConstraint_t {
                pub const nNode: usize = 0x0; // uint16[4][2]
                pub const f4MaxDist: usize = 0x10; // fltx4
                pub const f4MinDist: usize = 0x20; // fltx4
                pub const f4Weight0: usize = 0x30; // fltx4
                pub const f4RelaxationFactor: usize = 0x40; // fltx4
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeSimdRodConstraintAnim_t {
                pub const nNode: usize = 0x0; // uint16[4][2]
                pub const f4Weight0: usize = 0x10; // fltx4
                pub const f4RelaxationFactor: usize = 0x20; // fltx4
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeAnimStrayRadius_t {
                pub const nNode: usize = 0x0; // uint16[2]
                pub const flMaxDist: usize = 0x4; // float32
                pub const flRelaxationFactor: usize = 0x8; // float32
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeSimdAnimStrayRadius_t {
                pub const nNode: usize = 0x0; // uint16[4][2]
                pub const flMaxDist: usize = 0x10; // fltx4
                pub const flRelaxationFactor: usize = 0x20; // fltx4
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeSimdNodeBase_t {
                pub const nNode: usize = 0x0; // uint16[4]
                pub const nNodeX0: usize = 0x8; // uint16[4]
                pub const nNodeX1: usize = 0x10; // uint16[4]
                pub const nNodeY0: usize = 0x18; // uint16[4]
                pub const nNodeY1: usize = 0x20; // uint16[4]
                pub const nDummy: usize = 0x28; // uint16[4]
                pub const qAdjust: usize = 0x30; // FourQuaternions
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeNodeIntegrator_t {
                pub const flPointDamping: usize = 0x0; // float32
                pub const flAnimationForceAttraction: usize = 0x4; // float32
                pub const flAnimationVertexAttraction: usize = 0x8; // float32
                pub const flGravity: usize = 0xC; // float32
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeSpringIntegrator_t {
                pub const nNode: usize = 0x0; // uint16[2]
                pub const flSpringRestLength: usize = 0x4; // float32
                pub const flSpringConstant: usize = 0x8; // float32
                pub const flSpringDamping: usize = 0xC; // float32
                pub const flNodeWeight0: usize = 0x10; // float32
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeSimdSpringIntegrator_t {
                pub const nNode: usize = 0x0; // uint16[4][2]
                pub const flSpringRestLength: usize = 0x10; // fltx4
                pub const flSpringConstant: usize = 0x20; // fltx4
                pub const flSpringDamping: usize = 0x30; // fltx4
                pub const flNodeWeight0: usize = 0x40; // fltx4
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeCtrlOffset_t {
                pub const vOffset: usize = 0x0; // Vector
                pub const nCtrlParent: usize = 0xC; // uint16
                pub const nCtrlChild: usize = 0xE; // uint16
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeSoftParent_t {
                pub const nParent: usize = 0x0; // int32
                pub const flAlpha: usize = 0x4; // float32
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeCtrlSoftOffset_t {
                pub const nCtrlParent: usize = 0x0; // uint16
                pub const nCtrlChild: usize = 0x2; // uint16
                pub const vOffset: usize = 0x4; // Vector
                pub const flAlpha: usize = 0x10; // float32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeCtrlOsOffset_t {
                pub const nCtrlParent: usize = 0x0; // uint16
                pub const nCtrlChild: usize = 0x2; // uint16
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeFollowNode_t {
                pub const nParentNode: usize = 0x0; // uint16
                pub const nChildNode: usize = 0x2; // uint16
                pub const flWeight: usize = 0x4; // float32
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeCollisionPlane_t {
                pub const nCtrlParent: usize = 0x0; // uint16
                pub const nChildNode: usize = 0x2; // uint16
                pub const m_Plane: usize = 0x4; // RnPlane_t
                pub const flStrength: usize = 0x14; // float32
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeWorldCollisionParams_t {
                pub const flWorldFriction: usize = 0x0; // float32
                pub const flGroundFriction: usize = 0x4; // float32
                pub const nListBegin: usize = 0x8; // uint16
                pub const nListEnd: usize = 0xA; // uint16
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeTreeChildren_t {
                pub const nChild: usize = 0x0; // uint16[2]
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeTaperedCapsuleRigid_t {
                pub const vSphere: usize = 0x0; // fltx4[2]
                pub const nNode: usize = 0x20; // uint16
                pub const nCollisionMask: usize = 0x22; // uint16
                pub const nVertexMapIndex: usize = 0x24; // uint16
                pub const nFlags: usize = 0x26; // uint16
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeSphereRigid_t {
                pub const vSphere: usize = 0x0; // fltx4
                pub const nNode: usize = 0x10; // uint16
                pub const nCollisionMask: usize = 0x12; // uint16
                pub const nVertexMapIndex: usize = 0x14; // uint16
                pub const nFlags: usize = 0x16; // uint16
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeTaperedCapsuleStretch_t {
                pub const nNode: usize = 0x0; // uint16[2]
                pub const nCollisionMask: usize = 0x4; // uint16
                pub const nDummy: usize = 0x6; // uint16
                pub const flRadius: usize = 0x8; // float32[2]
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeBoxRigid_t {
                pub const tmFrame2: usize = 0x0; // CTransform
                pub const nNode: usize = 0x20; // uint16
                pub const nCollisionMask: usize = 0x22; // uint16
                pub const vSize: usize = 0x24; // Vector
                pub const nVertexMapIndex: usize = 0x30; // uint16
                pub const nFlags: usize = 0x32; // uint16
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CovMatrix3 {
                pub const m_vDiag: usize = 0x0; // Vector
                pub const m_flXY: usize = 0xC; // float32
                pub const m_flXZ: usize = 0x10; // float32
                pub const m_flYZ: usize = 0x14; // float32
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FourCovMatrices3 {
                pub const m_vDiag: usize = 0x0; // FourVectors
                pub const m_flXY: usize = 0x30; // fltx4
                pub const m_flXZ: usize = 0x40; // fltx4
                pub const m_flYZ: usize = 0x50; // fltx4
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeFitWeight_t {
                pub const flWeight: usize = 0x0; // float32
                pub const nNode: usize = 0x4; // uint16
                pub const nDummy: usize = 0x6; // uint16
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeFitInfluence_t {
                pub const nVertexNode: usize = 0x0; // uint32
                pub const flWeight: usize = 0x4; // float32
                pub const nMatrixNode: usize = 0x8; // uint32
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeFitMatrix_t {
                pub const bone: usize = 0x0; // CTransform
                pub const vCenter: usize = 0x20; // Vector
                pub const nEnd: usize = 0x2C; // uint16
                pub const nNode: usize = 0x2E; // uint16
                pub const nBeginDynamic: usize = 0x30; // uint16
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeRigidColliderIndices_t {
                pub const m_nTaperedCapsuleRigidIndex: usize = 0x0; // uint16
                pub const m_nSphereRigidIndex: usize = 0x2; // uint16
                pub const m_nBoxRigidIndex: usize = 0x4; // uint16
                pub const m_nCollisionPlaneIndex: usize = 0x6; // uint16
            }
            // Parent: FeTaperedCapsuleRigid_t
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeBuildTaperedCapsuleRigid_t {
                pub const m_nPriority: usize = 0x30; // int32
                pub const m_nVertexMapHash: usize = 0x34; // uint32
            }
            // Parent: FeBoxRigid_t
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeBuildBoxRigid_t {
                pub const m_nPriority: usize = 0x34; // int32
                pub const m_nVertexMapHash: usize = 0x38; // uint32
            }
            // Parent: FeSphereRigid_t
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeBuildSphereRigid_t {
                pub const m_nPriority: usize = 0x20; // int32
                pub const m_nVertexMapHash: usize = 0x24; // uint32
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeSourceEdge_t {
                pub const nNode: usize = 0x0; // uint16[2]
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeEffectDesc_t {
                pub const sName: usize = 0x0; // CUtlString
                pub const nNameHash: usize = 0x8; // uint32
                pub const nType: usize = 0xC; // int32
                pub const m_Params: usize = 0x10; // KeyValues3
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeVertexMapBuild_t {
                pub const m_VertexMapName: usize = 0x0; // CUtlString
                pub const m_nNameHash: usize = 0x8; // uint32
                pub const m_Color: usize = 0xC; // Color
                pub const m_flVolumetricSolveStrength: usize = 0x10; // float32
                pub const m_nScaleSourceNode: usize = 0x14; // int32
                pub const m_Weights: usize = 0x18; // CUtlVector<float32>
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CFeVertexMapBuildArray {
                pub const m_Array: usize = 0x0; // CUtlVector<FeVertexMapBuild_t*>
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeProxyVertexMap_t {
                pub const m_Name: usize = 0x0; // CUtlString
                pub const m_flWeight: usize = 0x8; // float32
            }
            // Parent: None
            // Fields count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeVertexMapDesc_t {
                pub const sName: usize = 0x0; // CUtlString
                pub const nNameHash: usize = 0x8; // uint32
                pub const nColor: usize = 0xC; // uint32
                pub const nFlags: usize = 0x10; // uint32
                pub const nVertexBase: usize = 0x14; // uint16
                pub const nVertexCount: usize = 0x16; // uint16
                pub const nMapOffset: usize = 0x18; // uint32
                pub const nNodeListOffset: usize = 0x1C; // uint32
                pub const vCenterOfMass: usize = 0x20; // Vector
                pub const flVolumetricSolveStrength: usize = 0x2C; // float32
                pub const nScaleSourceNode: usize = 0x30; // int16
                pub const nNodeListCount: usize = 0x32; // uint16
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeMorphLayerDepr_t {
                pub const m_Name: usize = 0x0; // CUtlString
                pub const m_nNameHash: usize = 0x8; // uint32
                pub const m_Nodes: usize = 0x10; // CUtlVector<uint16>
                pub const m_InitPos: usize = 0x28; // CUtlVector<Vector>
                pub const m_Gravity: usize = 0x40; // CUtlVector<float32>
                pub const m_GoalStrength: usize = 0x58; // CUtlVector<float32>
                pub const m_GoalDamping: usize = 0x70; // CUtlVector<float32>
                pub const m_nFlags: usize = 0x88; // uint32
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CFeMorphLayer {
                pub const m_Name: usize = 0x0; // CUtlString
                pub const m_nNameHash: usize = 0x8; // uint32
                pub const m_Nodes: usize = 0x10; // CUtlVector<uint16>
                pub const m_InitPos: usize = 0x28; // CUtlVector<Vector>
                pub const m_Gravity: usize = 0x40; // CUtlVector<float32>
                pub const m_GoalStrength: usize = 0x58; // CUtlVector<float32>
                pub const m_GoalDamping: usize = 0x70; // CUtlVector<float32>
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod Dop26_t {
                pub const m_flSupport: usize = 0x0; // float32[26]
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod RnCapsule_t {
                pub const m_vCenter: usize = 0x0; // Vector[2]
                pub const m_flRadius: usize = 0x18; // float32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod RnPlane_t {
                pub const m_vNormal: usize = 0x0; // Vector
                pub const m_flOffset: usize = 0xC; // float32
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod RnVertex_t {
                pub const m_nEdge: usize = 0x0; // uint8
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod RnHalfEdge_t {
                pub const m_nNext: usize = 0x0; // uint8
                pub const m_nTwin: usize = 0x1; // uint8
                pub const m_nOrigin: usize = 0x2; // uint8
                pub const m_nFace: usize = 0x3; // uint8
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod RnFace_t {
                pub const m_nEdge: usize = 0x0; // uint8
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CRegionSVM {
                pub const m_Planes: usize = 0x0; // CUtlVector<RnPlane_t>
                pub const m_Nodes: usize = 0x18; // CUtlVector<uint32>
            }
            // Parent: None
            // Fields count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod RnHull_t {
                pub const m_vCentroid: usize = 0x0; // Vector
                pub const m_flMaxAngularRadius: usize = 0xC; // float32
                pub const m_Bounds: usize = 0x10; // AABB_t
                pub const m_vOrthographicAreas: usize = 0x28; // Vector
                pub const m_MassProperties: usize = 0x34; // matrix3x4_t
                pub const m_flVolume: usize = 0x64; // float32
                pub const m_flSurfaceArea: usize = 0x68; // float32
                pub const m_Vertices: usize = 0x70; // CUtlVector<RnVertex_t>
                pub const m_VertexPositions: usize = 0x88; // CUtlVector<Vector>
                pub const m_Edges: usize = 0xA0; // CUtlVector<RnHalfEdge_t>
                pub const m_Faces: usize = 0xB8; // CUtlVector<RnFace_t>
                pub const m_FacePlanes: usize = 0xD0; // CUtlVector<RnPlane_t>
                pub const m_nFlags: usize = 0xE8; // uint32
                pub const m_pRegionSVM: usize = 0xF0; // CRegionSVM*
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod RnTriangle_t {
                pub const m_nIndex: usize = 0x0; // int32[3]
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod RnWing_t {
                pub const m_nIndex: usize = 0x0; // int32[3]
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod RnNode_t {
                pub const m_vMin: usize = 0x0; // Vector
                pub const m_nChildren: usize = 0xC; // uint32
                pub const m_vMax: usize = 0x10; // Vector
                pub const m_nTriangleOffset: usize = 0x1C; // uint32
            }
            // Parent: None
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod RnMesh_t {
                pub const m_vMin: usize = 0x0; // Vector
                pub const m_vMax: usize = 0xC; // Vector
                pub const m_Nodes: usize = 0x18; // CUtlVector<RnNode_t>
                pub const m_Vertices: usize = 0x30; // CUtlVectorSIMDPaddedVector
                pub const m_Triangles: usize = 0x48; // CUtlVector<RnTriangle_t>
                pub const m_Wings: usize = 0x60; // CUtlVector<RnWing_t>
                pub const m_Materials: usize = 0x78; // CUtlVector<uint8>
                pub const m_vOrthographicAreas: usize = 0x90; // Vector
                pub const m_nFlags: usize = 0x9C; // uint32
                pub const m_nDebugFlags: usize = 0xA0; // uint32
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod RnShapeDesc_t {
                pub const m_nCollisionAttributeIndex: usize = 0x0; // uint32
                pub const m_nSurfacePropertyIndex: usize = 0x4; // uint32
                pub const m_UserFriendlyName: usize = 0x8; // CUtlString
            }
            // Parent: RnShapeDesc_t
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod RnSphereDesc_t {
                pub const m_Sphere: usize = 0x10; // SphereBase_t<float32>
            }
            // Parent: RnShapeDesc_t
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod RnCapsuleDesc_t {
                pub const m_Capsule: usize = 0x10; // RnCapsule_t
            }
            // Parent: RnShapeDesc_t
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod RnHullDesc_t {
                pub const m_Hull: usize = 0x10; // RnHull_t
            }
            // Parent: RnShapeDesc_t
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod RnMeshDesc_t {
                pub const m_Mesh: usize = 0x10; // RnMesh_t
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod RnSoftbodyParticle_t {
                pub const m_flMassInv: usize = 0x0; // float32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod RnSoftbodySpring_t {
                pub const m_nParticle: usize = 0x0; // uint16[2]
                pub const m_flLength: usize = 0x4; // float32
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod RnSoftbodyCapsule_t {
                pub const m_vCenter: usize = 0x0; // Vector[2]
                pub const m_flRadius: usize = 0x18; // float32
                pub const m_nParticle: usize = 0x1C; // uint16[2]
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod RnBlendVertex_t {
                pub const m_nWeight0: usize = 0x0; // uint16
                pub const m_nIndex0: usize = 0x2; // uint16
                pub const m_nWeight1: usize = 0x4; // uint16
                pub const m_nIndex1: usize = 0x6; // uint16
                pub const m_nWeight2: usize = 0x8; // uint16
                pub const m_nIndex2: usize = 0xA; // uint16
                pub const m_nFlags: usize = 0xC; // uint16
                pub const m_nTargetIndex: usize = 0xE; // uint16
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CastSphereSATParams_t {
                pub const m_vRayStart: usize = 0x0; // Vector
                pub const m_vRayDelta: usize = 0xC; // Vector
                pub const m_flRadius: usize = 0x18; // float32
                pub const m_flMaxFraction: usize = 0x1C; // float32
                pub const m_flScale: usize = 0x20; // float32
                pub const m_pHull: usize = 0x28; // RnHull_t*
            }
            // Parent: None
            // Fields count: 35
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod RnBodyDesc_t {
                pub const m_sDebugName: usize = 0x0; // CUtlString
                pub const m_vPosition: usize = 0x8; // Vector
                pub const m_qOrientation: usize = 0x14; // QuaternionStorage
                pub const m_vLinearVelocity: usize = 0x24; // Vector
                pub const m_vAngularVelocity: usize = 0x30; // Vector
                pub const m_vLocalMassCenter: usize = 0x3C; // Vector
                pub const m_LocalInertiaInv: usize = 0x48; // Vector[3]
                pub const m_flMassInv: usize = 0x6C; // float32
                pub const m_flGameMass: usize = 0x70; // float32
                pub const m_flInertiaScaleInv: usize = 0x74; // float32
                pub const m_flLinearDamping: usize = 0x78; // float32
                pub const m_flAngularDamping: usize = 0x7C; // float32
                pub const m_flLinearDrag: usize = 0x80; // float32
                pub const m_flAngularDrag: usize = 0x84; // float32
                pub const m_flLinearBuoyancyDrag: usize = 0x88; // float32
                pub const m_flAngularBuoyancyDrag: usize = 0x8C; // float32
                pub const m_vLastAwakeForceAccum: usize = 0x90; // Vector
                pub const m_vLastAwakeTorqueAccum: usize = 0x9C; // Vector
                pub const m_flBuoyancyFactor: usize = 0xA8; // float32
                pub const m_flGravityScale: usize = 0xAC; // float32
                pub const m_flTimeScale: usize = 0xB0; // float32
                pub const m_nBodyType: usize = 0xB4; // int32
                pub const m_nGameIndex: usize = 0xB8; // uint32
                pub const m_nGameFlags: usize = 0xBC; // uint32
                pub const m_nMinVelocityIterations: usize = 0xC0; // int8
                pub const m_nMinPositionIterations: usize = 0xC1; // int8
                pub const m_nMassPriority: usize = 0xC2; // int8
                pub const m_bEnabled: usize = 0xC3; // bool
                pub const m_bSleeping: usize = 0xC4; // bool
                pub const m_bIsContinuousEnabled: usize = 0xC5; // bool
                pub const m_bDragEnabled: usize = 0xC6; // bool
                pub const m_bBuoyancyDragEnabled: usize = 0xC7; // bool
                pub const m_bGravityDisabled: usize = 0xC8; // bool
                pub const m_bSpeculativeEnabled: usize = 0xC9; // bool
                pub const m_bHasShadowController: usize = 0xCA; // bool
            }
            // Parent: None
            // Fields count: 2
            pub mod VertexPositionNormal_t {
                pub const m_vPosition: usize = 0x0; // Vector
                pub const m_vNormal: usize = 0xC; // Vector
            }
            // Parent: None
            // Fields count: 1
            pub mod VertexPositionColor_t {
                pub const m_vPosition: usize = 0x0; // Vector
            }
            // Parent: None
            // Fields count: 5
            pub mod constraint_breakableparams_t {
                pub const strength: usize = 0x0; // float32
                pub const forceLimit: usize = 0x4; // float32
                pub const torqueLimit: usize = 0x8; // float32
                pub const bodyMassScale: usize = 0xC; // float32[2]
                pub const isActive: usize = 0x14; // bool
            }
            // Parent: None
            // Fields count: 4
            pub mod constraint_axislimit_t {
                pub const flMinRotation: usize = 0x0; // float32
                pub const flMaxRotation: usize = 0x4; // float32
                pub const flMotorTargetAngSpeed: usize = 0x8; // float32
                pub const flMotorMaxTorque: usize = 0xC; // float32
            }
            // Parent: None
            // Fields count: 4
            pub mod constraint_hingeparams_t {
                pub const worldPosition: usize = 0x0; // Vector
                pub const worldAxisDirection: usize = 0xC; // Vector
                pub const hingeAxis: usize = 0x18; // constraint_axislimit_t
                pub const constraint: usize = 0x28; // constraint_breakableparams_t
            }
            // Parent: None
            // Fields count: 0
            pub mod IPhysicsPlayerController {
            }
            // Parent: RnBodyDesc_t
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod vphysics_save_cphysicsbody_t {
                pub const m_nOldPointer: usize = 0xD0; // uint64
            }
        }
        // Module: libworldrenderer.so
        // Classes count: 27
        // Enums count: 0
        pub mod libworldrenderer {
            // Parent: None
            // Fields count: 0
            pub mod CEntityComponent {
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
            // NetworkVarNames: m_pEntity (CEntityIdentity *)
            // NetworkVarNames: m_CScriptComponent (CScriptComponent::Storage_t)
            pub mod CEntityInstance {
                pub const m_iszPrivateVScripts: usize = 0x8; // CUtlSymbolLarge
                pub const m_pEntity: usize = 0x10; // CEntityIdentity*
                pub const m_CScriptComponent: usize = 0x28; // CScriptComponent*
                pub const m_bVisibleinPVS: usize = 0x30; // bool
            }
            // Parent: CEntityComponent
            // Fields count: 1
            pub mod CScriptComponent {
                pub const m_scriptClassName: usize = 0x30; // CUtlSymbolLarge
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
                pub const m_vLightingOrigin: usize = 0x5C; // Vector
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
                pub const m_vLODOrigin: usize = 0x0; // Vector
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
                pub const m_vOrigin: usize = 0x4; // Vector
                pub const m_vMinBounds: usize = 0x10; // Vector
                pub const m_vMaxBounds: usize = 0x1C; // Vector
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
            // Parent: None
            // Fields count: 0
            pub mod VMapResourceData_t {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeVMapResourceData_t {
            }
        }
    }
}
