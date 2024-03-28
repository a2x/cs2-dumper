// Generated using https://github.com/a2x/cs2-dumper
// 2024-03-29 08:41:42.046663095 UTC

#pragma once

#include <cstddef>

namespace cs2_dumper {
    namespace schemas {
        // Module: libanimationsystem.so
        // Classes count: 255
        // Enums count: 0
        namespace libanimationsystem {
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace BoneDemoCaptureSettings_t {
                constexpr std::ptrdiff_t m_boneName = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_flChainLength = 0x8; // float32
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace IKDemoCaptureSettings_t {
                constexpr std::ptrdiff_t m_parentBoneName = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_eMode = 0x8; // IKChannelMode
                constexpr std::ptrdiff_t m_ikChainName = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_oneBoneStart = 0x18; // CUtlString
                constexpr std::ptrdiff_t m_oneBoneEnd = 0x20; // CUtlString
            }
            // Parent: None
            // Fields count: 16
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimDemoCaptureSettings {
                constexpr std::ptrdiff_t m_rangeBoneChainLength = 0x0; // Vector2D
                constexpr std::ptrdiff_t m_rangeMaxSplineErrorRotation = 0x8; // Vector2D
                constexpr std::ptrdiff_t m_flMaxSplineErrorTranslation = 0x10; // float32
                constexpr std::ptrdiff_t m_flMaxSplineErrorScale = 0x14; // float32
                constexpr std::ptrdiff_t m_flIkRotation_MaxSplineError = 0x18; // float32
                constexpr std::ptrdiff_t m_flIkTranslation_MaxSplineError = 0x1C; // float32
                constexpr std::ptrdiff_t m_flMaxQuantizationErrorRotation = 0x20; // float32
                constexpr std::ptrdiff_t m_flMaxQuantizationErrorTranslation = 0x24; // float32
                constexpr std::ptrdiff_t m_flMaxQuantizationErrorScale = 0x28; // float32
                constexpr std::ptrdiff_t m_flIkRotation_MaxQuantizationError = 0x2C; // float32
                constexpr std::ptrdiff_t m_flIkTranslation_MaxQuantizationError = 0x30; // float32
                constexpr std::ptrdiff_t m_baseSequence = 0x38; // CUtlString
                constexpr std::ptrdiff_t m_nBaseSequenceFrame = 0x40; // int32
                constexpr std::ptrdiff_t m_boneSelectionMode = 0x44; // EDemoBoneSelectionMode
                constexpr std::ptrdiff_t m_bones = 0x48; // CUtlVector<BoneDemoCaptureSettings_t>
                constexpr std::ptrdiff_t m_ikChains = 0x60; // CUtlVector<IKDemoCaptureSettings_t>
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimReplayFrame {
                constexpr std::ptrdiff_t m_inputDataBlocks = 0x10; // CUtlVector<CUtlBinaryBlock>
                constexpr std::ptrdiff_t m_instanceData = 0x28; // CUtlBinaryBlock
                constexpr std::ptrdiff_t m_startingLocalToWorldTransform = 0x40; // CTransform
                constexpr std::ptrdiff_t m_localToWorldTransform = 0x60; // CTransform
                constexpr std::ptrdiff_t m_timeStamp = 0x80; // float32
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimGraphDebugReplay {
                constexpr std::ptrdiff_t m_animGraphFileName = 0x40; // CUtlString
                constexpr std::ptrdiff_t m_frameList = 0x48; // CUtlVector<CSmartPtr<CAnimReplayFrame>>
                constexpr std::ptrdiff_t m_startIndex = 0x60; // int32
                constexpr std::ptrdiff_t m_writeIndex = 0x64; // int32
                constexpr std::ptrdiff_t m_frameCount = 0x68; // int32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimGraphModelBinding {
                constexpr std::ptrdiff_t m_modelName = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_pSharedData = 0x10; // CSmartPtr<CAnimUpdateSharedData>
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CAnimInputDamping {
                constexpr std::ptrdiff_t m_speedFunction = 0x8; // DampingSpeedFunction
                constexpr std::ptrdiff_t m_fSpeedScale = 0xC; // float32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimParamHandle {
                constexpr std::ptrdiff_t m_type = 0x0; // AnimParamType_t
                constexpr std::ptrdiff_t m_index = 0x1; // uint8
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimParamHandleMap {
                constexpr std::ptrdiff_t m_list = 0x0; // CUtlHashtable<uint16,int16>
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimParameterManagerUpdater {
                constexpr std::ptrdiff_t m_parameters = 0x18; // CUtlVector<CSmartPtr<CAnimParameterBase>>
                constexpr std::ptrdiff_t m_idToIndexMap = 0x30; // CUtlHashtable<AnimParamID,int32>
                constexpr std::ptrdiff_t m_nameToIndexMap = 0x50; // CUtlHashtable<CUtlString,int32>
                constexpr std::ptrdiff_t m_indexToHandle = 0x70; // CUtlVector<CAnimParamHandle>
                constexpr std::ptrdiff_t m_autoResetParams = 0x88; // CUtlVector<CUtlPair<CAnimParamHandle,CAnimVariant>>
                constexpr std::ptrdiff_t m_autoResetMap = 0xA0; // CUtlHashtable<CAnimParamHandle,int16>
            }
            // Parent: None
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimUpdateSharedData {
                constexpr std::ptrdiff_t m_nodes = 0x10; // CUtlVector<CSmartPtr<CAnimUpdateNodeBase>>
                constexpr std::ptrdiff_t m_nodeIndexMap = 0x28; // CUtlHashtable<CAnimNodePath,int32>
                constexpr std::ptrdiff_t m_components = 0x48; // CUtlVector<CSmartPtr<CAnimComponentUpdater>>
                constexpr std::ptrdiff_t m_pParamListUpdater = 0x60; // CSmartPtr<CAnimParameterManagerUpdater>
                constexpr std::ptrdiff_t m_pTagManagerUpdater = 0x68; // CSmartPtr<CAnimTagManagerUpdater>
                constexpr std::ptrdiff_t m_scriptManager = 0x70; // CSmartPtr<CAnimScriptManager>
                constexpr std::ptrdiff_t m_settings = 0x78; // CAnimGraphSettingsManager
                constexpr std::ptrdiff_t m_pStaticPoseCache = 0xA8; // CSmartPtr<CStaticPoseCacheBuilder>
                constexpr std::ptrdiff_t m_pSkeleton = 0xB0; // CSmartPtr<CAnimSkeleton>
                constexpr std::ptrdiff_t m_rootNodePath = 0xB8; // CAnimNodePath
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CBlendCurve {
                constexpr std::ptrdiff_t m_flControlPoint1 = 0x0; // float32
                constexpr std::ptrdiff_t m_flControlPoint2 = 0x4; // float32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace ParamSpanSample_t {
                constexpr std::ptrdiff_t m_value = 0x0; // CAnimVariant
                constexpr std::ptrdiff_t m_flCycle = 0x14; // float32
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace ParamSpan_t {
                constexpr std::ptrdiff_t m_samples = 0x0; // CUtlVector<ParamSpanSample_t>
                constexpr std::ptrdiff_t m_hParam = 0x18; // CAnimParamHandle
                constexpr std::ptrdiff_t m_eParamType = 0x1A; // AnimParamType_t
                constexpr std::ptrdiff_t m_flStartCycle = 0x1C; // float32
                constexpr std::ptrdiff_t m_flEndCycle = 0x20; // float32
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CParamSpanUpdater {
                constexpr std::ptrdiff_t m_spans = 0x0; // CUtlVector<ParamSpan_t>
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimGraphSettingsGroup {
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimGraphSettingsManager {
                constexpr std::ptrdiff_t m_settingsGroups = 0x18; // CUtlVector<CSmartPtr<CAnimGraphSettingsGroup>>
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCachedPose {
                constexpr std::ptrdiff_t m_transforms = 0x8; // CUtlVector<CTransform>
                constexpr std::ptrdiff_t m_morphWeights = 0x20; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_hSequence = 0x38; // HSequence
                constexpr std::ptrdiff_t m_flCycle = 0x3C; // float32
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CStaticPoseCache {
                constexpr std::ptrdiff_t m_poses = 0x10; // CUtlVector<CCachedPose>
                constexpr std::ptrdiff_t m_nBoneCount = 0x28; // int32
                constexpr std::ptrdiff_t m_nMorphCount = 0x2C; // int32
            }
            // Parent: CStaticPoseCache
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CStaticPoseCacheBuilder {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimActionUpdater {
            }
            // Parent: CAnimActionUpdater
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CEmitTagActionUpdater {
                constexpr std::ptrdiff_t m_nTagIndex = 0x18; // int32
                constexpr std::ptrdiff_t m_bIsZeroDuration = 0x1C; // bool
            }
            // Parent: CAnimActionUpdater
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSetParameterActionUpdater {
                constexpr std::ptrdiff_t m_hParam = 0x18; // CAnimParamHandle
                constexpr std::ptrdiff_t m_value = 0x1A; // CAnimVariant
            }
            // Parent: CAnimActionUpdater
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CToggleComponentActionUpdater {
                constexpr std::ptrdiff_t m_componentID = 0x18; // AnimComponentID
                constexpr std::ptrdiff_t m_bSetEnabled = 0x1C; // bool
            }
            // Parent: CAnimActionUpdater
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CExpressionActionUpdater {
                constexpr std::ptrdiff_t m_hParam = 0x18; // CAnimParamHandle
                constexpr std::ptrdiff_t m_eParamType = 0x1A; // AnimParamType_t
                constexpr std::ptrdiff_t m_hScript = 0x1C; // AnimScriptHandle
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimTagBase {
                constexpr std::ptrdiff_t m_name = 0x18; // CGlobalSymbol
                constexpr std::ptrdiff_t m_group = 0x20; // CGlobalSymbol
                constexpr std::ptrdiff_t m_tagID = 0x28; // AnimTagID
                constexpr std::ptrdiff_t m_bIsReferenced = 0x40; // bool
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimTagManagerUpdater {
                constexpr std::ptrdiff_t m_tags = 0x18; // CUtlVector<CSmartPtr<CAnimTagBase>>
            }
            // Parent: CAnimTagBase
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CAudioAnimTag {
                constexpr std::ptrdiff_t m_clipName = 0x50; // CUtlString
                constexpr std::ptrdiff_t m_attachmentName = 0x58; // CUtlString
                constexpr std::ptrdiff_t m_flVolume = 0x60; // float32
                constexpr std::ptrdiff_t m_bStopWhenTagEnds = 0x64; // bool
                constexpr std::ptrdiff_t m_bStopWhenGraphEnds = 0x65; // bool
                constexpr std::ptrdiff_t m_bPlayOnServer = 0x66; // bool
                constexpr std::ptrdiff_t m_bPlayOnClient = 0x67; // bool
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyElementNameFn
            namespace CBodyGroupSetting {
                constexpr std::ptrdiff_t m_BodyGroupName = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_nBodyGroupOption = 0x8; // int32
            }
            // Parent: CAnimTagBase
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CBodyGroupAnimTag {
                constexpr std::ptrdiff_t m_nPriority = 0x50; // int32
                constexpr std::ptrdiff_t m_bodyGroupSettings = 0x58; // CUtlVector<CBodyGroupSetting>
            }
            // Parent: CAnimTagBase
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CClothSettingsAnimTag {
                constexpr std::ptrdiff_t m_flStiffness = 0x50; // float32
                constexpr std::ptrdiff_t m_flEaseIn = 0x54; // float32
                constexpr std::ptrdiff_t m_flEaseOut = 0x58; // float32
                constexpr std::ptrdiff_t m_nVertexSet = 0x60; // CUtlString
            }
            // Parent: CAnimTagBase
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CFootFallAnimTag {
                constexpr std::ptrdiff_t m_foot = 0x50; // FootFallTagFoot_t
            }
            // Parent: CAnimTagBase
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CFootstepLandedAnimTag {
                constexpr std::ptrdiff_t m_FootstepType = 0x50; // FootstepLandedFootSoundType_t
                constexpr std::ptrdiff_t m_OverrideSoundName = 0x58; // CUtlString
                constexpr std::ptrdiff_t m_DebugAnimSourceString = 0x60; // CUtlString
                constexpr std::ptrdiff_t m_BoneName = 0x68; // CUtlString
            }
            // Parent: CAnimTagBase
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CMaterialAttributeAnimTag {
                constexpr std::ptrdiff_t m_AttributeName = 0x50; // CUtlString
                constexpr std::ptrdiff_t m_AttributeType = 0x58; // MatterialAttributeTagType_t
                constexpr std::ptrdiff_t m_flValue = 0x5C; // float32
                constexpr std::ptrdiff_t m_Color = 0x60; // Color
            }
            // Parent: CAnimTagBase
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CParticleAnimTag {
                constexpr std::ptrdiff_t m_hParticleSystem = 0x50; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                constexpr std::ptrdiff_t m_particleSystemName = 0x58; // CUtlString
                constexpr std::ptrdiff_t m_configName = 0x60; // CUtlString
                constexpr std::ptrdiff_t m_bDetachFromOwner = 0x68; // bool
                constexpr std::ptrdiff_t m_bStopWhenTagEnds = 0x69; // bool
                constexpr std::ptrdiff_t m_bTagEndStopIsInstant = 0x6A; // bool
                constexpr std::ptrdiff_t m_attachmentName = 0x70; // CUtlString
                constexpr std::ptrdiff_t m_attachmentType = 0x78; // ParticleAttachment_t
                constexpr std::ptrdiff_t m_attachmentCP1Name = 0x80; // CUtlString
                constexpr std::ptrdiff_t m_attachmentCP1Type = 0x88; // ParticleAttachment_t
            }
            // Parent: CAnimTagBase
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CRagdollAnimTag {
                constexpr std::ptrdiff_t m_nPoseControl = 0x50; // AnimPoseControl
                constexpr std::ptrdiff_t m_flFrequency = 0x54; // float32
                constexpr std::ptrdiff_t m_flDampingRatio = 0x58; // float32
                constexpr std::ptrdiff_t m_flDecayDuration = 0x5C; // float32
                constexpr std::ptrdiff_t m_flDecayBias = 0x60; // float32
                constexpr std::ptrdiff_t m_bDestroy = 0x64; // bool
            }
            // Parent: CAnimTagBase
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CSequenceFinishedAnimTag {
                constexpr std::ptrdiff_t m_sequenceName = 0x50; // CUtlString
            }
            // Parent: CAnimTagBase
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CStringAnimTag {
            }
            // Parent: CAnimTagBase
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CTaskStatusAnimTag {
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimComponentUpdater {
                constexpr std::ptrdiff_t m_name = 0x18; // CUtlString
                constexpr std::ptrdiff_t m_id = 0x20; // AnimComponentID
                constexpr std::ptrdiff_t m_networkMode = 0x24; // AnimNodeNetworkMode
                constexpr std::ptrdiff_t m_bStartEnabled = 0x28; // bool
            }
            // Parent: CAnimComponentUpdater
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimScriptComponentUpdater {
                constexpr std::ptrdiff_t m_hScript = 0x30; // AnimScriptHandle
            }
            // Parent: CAnimComponentUpdater
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCPPScriptComponentUpdater {
                constexpr std::ptrdiff_t m_scriptsToRun = 0x30; // CUtlVector<CGlobalSymbol>
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CDampedValueUpdateItem {
                constexpr std::ptrdiff_t m_damping = 0x0; // CAnimInputDamping
                constexpr std::ptrdiff_t m_hParamIn = 0x18; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hParamOut = 0x1A; // CAnimParamHandle
            }
            // Parent: CAnimComponentUpdater
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CDampedValueComponentUpdater {
                constexpr std::ptrdiff_t m_items = 0x30; // CUtlVector<CDampedValueUpdateItem>
            }
            // Parent: CAnimComponentUpdater
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CDemoSettingsComponentUpdater {
                constexpr std::ptrdiff_t m_settings = 0x30; // CAnimDemoCaptureSettings
            }
            // Parent: CAnimComponentUpdater
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CLODComponentUpdater {
                constexpr std::ptrdiff_t m_nServerLOD = 0x30; // int32
            }
            // Parent: CAnimComponentUpdater
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CLookComponentUpdater {
                constexpr std::ptrdiff_t m_hLookHeading = 0x34; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hLookHeadingVelocity = 0x36; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hLookPitch = 0x38; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hLookDistance = 0x3A; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hLookDirection = 0x3C; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hLookTarget = 0x3E; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hLookTargetWorldSpace = 0x40; // CAnimParamHandle
                constexpr std::ptrdiff_t m_bNetworkLookTarget = 0x42; // bool
            }
            // Parent: CAnimComponentUpdater
            // Fields count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CMovementComponentUpdater {
                constexpr std::ptrdiff_t m_motors = 0x30; // CUtlVector<CSmartPtr<CAnimMotorUpdaterBase>>
                constexpr std::ptrdiff_t m_facingDamping = 0x48; // CAnimInputDamping
                constexpr std::ptrdiff_t m_eDefaultFacingMode = 0x58; // FacingMode
                constexpr std::ptrdiff_t m_nDefaultMotorIndex = 0x64; // int32
                constexpr std::ptrdiff_t m_flDefaultRunSpeed = 0x68; // float32
                constexpr std::ptrdiff_t m_bMoveVarsDisabled = 0x6C; // bool
                constexpr std::ptrdiff_t m_bNetworkPath = 0x6D; // bool
                constexpr std::ptrdiff_t m_bNetworkFacing = 0x6E; // bool
                constexpr std::ptrdiff_t m_paramHandles = 0x6F; // CAnimParamHandle[30]
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace WeightList {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_weights = 0x8; // CUtlVector<float32>
            }
            // Parent: CAnimComponentUpdater
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CRagdollComponentUpdater {
                constexpr std::ptrdiff_t m_ragdollNodePaths = 0x30; // CUtlVector<CAnimNodePath>
                constexpr std::ptrdiff_t m_boneIndices = 0x48; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_boneNames = 0x60; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_weightLists = 0x78; // CUtlVector<WeightList>
                constexpr std::ptrdiff_t m_flSpringFrequencyMin = 0x90; // float32
                constexpr std::ptrdiff_t m_flSpringFrequencyMax = 0x94; // float32
                constexpr std::ptrdiff_t m_flMaxStretch = 0x98; // float32
                constexpr std::ptrdiff_t m_bSolidCollisionAtZeroWeight = 0x9C; // bool
            }
            // Parent: CAnimComponentUpdater
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSlopeComponentUpdater {
                constexpr std::ptrdiff_t m_flTraceDistance = 0x34; // float32
                constexpr std::ptrdiff_t m_hSlopeAngle = 0x38; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hSlopeAngleFront = 0x3A; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hSlopeAngleSide = 0x3C; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hSlopeHeading = 0x3E; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hSlopeNormal = 0x40; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hSlopeNormal_WorldSpace = 0x42; // CAnimParamHandle
            }
            // Parent: CAnimComponentUpdater
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CStateMachineComponentUpdater {
                constexpr std::ptrdiff_t m_stateMachine = 0x30; // CAnimStateMachineUpdater
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CMotionDataSet {
                constexpr std::ptrdiff_t m_groups = 0x0; // CUtlVector<CMotionGraphGroup>
                constexpr std::ptrdiff_t m_nDimensionCount = 0x18; // int32
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CMotionGraphGroup {
                constexpr std::ptrdiff_t m_searchDB = 0x0; // CMotionSearchDB
                constexpr std::ptrdiff_t m_motionGraphs = 0xB8; // CUtlVector<CSmartPtr<CMotionGraph>>
                constexpr std::ptrdiff_t m_motionGraphConfigs = 0xD0; // CUtlVector<CMotionGraphConfig>
                constexpr std::ptrdiff_t m_sampleToConfig = 0xE8; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_hIsActiveScript = 0x100; // AnimScriptHandle
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace SampleCode {
                constexpr std::ptrdiff_t m_subCode = 0x0; // uint8[8]
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace MotionDBIndex {
                constexpr std::ptrdiff_t m_nIndex = 0x0; // uint32
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVectorQuantizer {
                constexpr std::ptrdiff_t m_centroidVectors = 0x0; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_nCentroids = 0x18; // int32
                constexpr std::ptrdiff_t m_nDimensions = 0x1C; // int32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CProductQuantizer {
                constexpr std::ptrdiff_t m_subQuantizers = 0x0; // CUtlVector<CVectorQuantizer>
                constexpr std::ptrdiff_t m_nDimensions = 0x18; // int32
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CMotionSearchNode {
                constexpr std::ptrdiff_t m_children = 0x0; // CUtlVector<CMotionSearchNode*>
                constexpr std::ptrdiff_t m_quantizer = 0x18; // CVectorQuantizer
                constexpr std::ptrdiff_t m_sampleCodes = 0x38; // CUtlVector<CUtlVector<SampleCode>>
                constexpr std::ptrdiff_t m_sampleIndices = 0x50; // CUtlVector<CUtlVector<int32>>
                constexpr std::ptrdiff_t m_selectableSamples = 0x68; // CUtlVector<int32>
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CMotionSearchDB {
                constexpr std::ptrdiff_t m_rootNode = 0x0; // CMotionSearchNode
                constexpr std::ptrdiff_t m_residualQuantizer = 0x80; // CProductQuantizer
                constexpr std::ptrdiff_t m_codeIndices = 0xA0; // CUtlVector<MotionDBIndex>
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CMotionGraph {
                constexpr std::ptrdiff_t m_paramSpans = 0x10; // CParamSpanUpdater
                constexpr std::ptrdiff_t m_tags = 0x28; // CUtlVector<TagSpan_t>
                constexpr std::ptrdiff_t m_pRootNode = 0x40; // CSmartPtr<CMotionNode>
                constexpr std::ptrdiff_t m_nParameterCount = 0x48; // int32
                constexpr std::ptrdiff_t m_nConfigStartIndex = 0x4C; // int32
                constexpr std::ptrdiff_t m_nConfigCount = 0x50; // int32
                constexpr std::ptrdiff_t m_bLoop = 0x54; // bool
            }
            // Parent: CMotionGraph
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CEditableMotionGraph {
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CMotionNode {
                constexpr std::ptrdiff_t m_name = 0x18; // CUtlString
                constexpr std::ptrdiff_t m_id = 0x20; // AnimNodeID
            }
            // Parent: CMotionNode
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CMotionNodeSequence {
                constexpr std::ptrdiff_t m_tags = 0x28; // CUtlVector<TagSpan_t>
                constexpr std::ptrdiff_t m_hSequence = 0x40; // HSequence
                constexpr std::ptrdiff_t m_flPlaybackSpeed = 0x44; // float32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace MotionBlendItem {
                constexpr std::ptrdiff_t m_pChild = 0x0; // CSmartPtr<CMotionNode>
                constexpr std::ptrdiff_t m_flKeyValue = 0x8; // float32
            }
            // Parent: CMotionNode
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CMotionNodeBlend1D {
                constexpr std::ptrdiff_t m_blendItems = 0x28; // CUtlVector<MotionBlendItem>
                constexpr std::ptrdiff_t m_nParamIndex = 0x40; // int32
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CMotionMetricEvaluator {
                constexpr std::ptrdiff_t m_means = 0x18; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_standardDeviations = 0x30; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_flWeight = 0x48; // float32
                constexpr std::ptrdiff_t m_nDimensionStartIndex = 0x4C; // int32
            }
            // Parent: CMotionMetricEvaluator
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CBlockSelectionMetricEvaluator {
            }
            // Parent: CMotionMetricEvaluator
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CBonePositionMetricEvaluator {
                constexpr std::ptrdiff_t m_nBoneIndex = 0x50; // int32
            }
            // Parent: CMotionMetricEvaluator
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CBoneVelocityMetricEvaluator {
                constexpr std::ptrdiff_t m_nBoneIndex = 0x50; // int32
            }
            // Parent: CMotionMetricEvaluator
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCurrentRotationVelocityMetricEvaluator {
            }
            // Parent: CMotionMetricEvaluator
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCurrentVelocityMetricEvaluator {
            }
            // Parent: CMotionMetricEvaluator
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CDistanceRemainingMetricEvaluator {
                constexpr std::ptrdiff_t m_flMaxDistance = 0x50; // float32
                constexpr std::ptrdiff_t m_flMinDistance = 0x54; // float32
                constexpr std::ptrdiff_t m_flStartGoalFilterDistance = 0x58; // float32
                constexpr std::ptrdiff_t m_flMaxGoalOvershootScale = 0x5C; // float32
                constexpr std::ptrdiff_t m_bFilterFixedMinDistance = 0x60; // bool
                constexpr std::ptrdiff_t m_bFilterGoalDistance = 0x61; // bool
                constexpr std::ptrdiff_t m_bFilterGoalOvershoot = 0x62; // bool
            }
            // Parent: CMotionMetricEvaluator
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CFootCycleMetricEvaluator {
                constexpr std::ptrdiff_t m_footIndices = 0x50; // CUtlVector<int32>
            }
            // Parent: CMotionMetricEvaluator
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CFootPositionMetricEvaluator {
                constexpr std::ptrdiff_t m_footIndices = 0x50; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_bIgnoreSlope = 0x68; // bool
            }
            // Parent: CMotionMetricEvaluator
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CFutureFacingMetricEvaluator {
                constexpr std::ptrdiff_t m_flDistance = 0x50; // float32
                constexpr std::ptrdiff_t m_flTime = 0x54; // float32
            }
            // Parent: CMotionMetricEvaluator
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CFutureVelocityMetricEvaluator {
                constexpr std::ptrdiff_t m_flDistance = 0x50; // float32
                constexpr std::ptrdiff_t m_flStoppingDistance = 0x54; // float32
                constexpr std::ptrdiff_t m_flTargetSpeed = 0x58; // float32
                constexpr std::ptrdiff_t m_eMode = 0x5C; // VelocityMetricMode
            }
            // Parent: CMotionMetricEvaluator
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPathMetricEvaluator {
                constexpr std::ptrdiff_t m_pathTimeSamples = 0x50; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_flDistance = 0x68; // float32
                constexpr std::ptrdiff_t m_bExtrapolateMovement = 0x6C; // bool
                constexpr std::ptrdiff_t m_flMinExtrapolationSpeed = 0x70; // float32
            }
            // Parent: CMotionMetricEvaluator
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CStepsRemainingMetricEvaluator {
                constexpr std::ptrdiff_t m_footIndices = 0x50; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_flMinStepsRemaining = 0x68; // float32
            }
            // Parent: CMotionMetricEvaluator
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CTimeRemainingMetricEvaluator {
                constexpr std::ptrdiff_t m_bMatchByTimeRemaining = 0x50; // bool
                constexpr std::ptrdiff_t m_flMaxTimeRemaining = 0x54; // float32
                constexpr std::ptrdiff_t m_bFilterByTimeRemaining = 0x58; // bool
                constexpr std::ptrdiff_t m_flMinTimeRemaining = 0x5C; // float32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimMotorUpdaterBase {
                constexpr std::ptrdiff_t m_name = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_bDefault = 0x18; // bool
            }
            // Parent: CAnimMotorUpdaterBase
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPathAnimMotorUpdaterBase {
                constexpr std::ptrdiff_t m_bLockToPath = 0x19; // bool
            }
            // Parent: CPathAnimMotorUpdaterBase
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CDampedPathAnimMotorUpdater {
                constexpr std::ptrdiff_t m_flAnticipationTime = 0x20; // float32
                constexpr std::ptrdiff_t m_flMinSpeedScale = 0x24; // float32
                constexpr std::ptrdiff_t m_hAnticipationPosParam = 0x28; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hAnticipationHeadingParam = 0x2A; // CAnimParamHandle
                constexpr std::ptrdiff_t m_flSpringConstant = 0x2C; // float32
                constexpr std::ptrdiff_t m_flMinSpringTension = 0x30; // float32
                constexpr std::ptrdiff_t m_flMaxSpringTension = 0x34; // float32
            }
            // Parent: CPathAnimMotorUpdaterBase
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPathAnimMotorUpdater {
            }
            // Parent: CAnimMotorUpdaterBase
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPlayerInputAnimMotorUpdater {
                constexpr std::ptrdiff_t m_sampleTimes = 0x20; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_flSpringConstant = 0x3C; // float32
                constexpr std::ptrdiff_t m_flAnticipationDistance = 0x40; // float32
                constexpr std::ptrdiff_t m_hAnticipationPosParam = 0x44; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hAnticipationHeadingParam = 0x46; // CAnimParamHandle
                constexpr std::ptrdiff_t m_bUseAcceleration = 0x48; // bool
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace AimMatrixOpFixedSettings_t {
                constexpr std::ptrdiff_t m_attachment = 0x0; // CAnimAttachment
                constexpr std::ptrdiff_t m_damping = 0x80; // CAnimInputDamping
                constexpr std::ptrdiff_t m_poseCacheHandles = 0x90; // CPoseHandle[10]
                constexpr std::ptrdiff_t m_eBlendMode = 0xB8; // AimMatrixBlendMode
                constexpr std::ptrdiff_t m_fAngleIncrement = 0xBC; // float32
                constexpr std::ptrdiff_t m_nSequenceMaxFrame = 0xC0; // int32
                constexpr std::ptrdiff_t m_nBoneMaskIndex = 0xC4; // int32
                constexpr std::ptrdiff_t m_bTargetIsPosition = 0xC8; // bool
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FollowAttachmentSettings_t {
                constexpr std::ptrdiff_t m_attachment = 0x0; // CAnimAttachment
                constexpr std::ptrdiff_t m_boneIndex = 0x80; // int32
                constexpr std::ptrdiff_t m_bMatchTranslation = 0x84; // bool
                constexpr std::ptrdiff_t m_bMatchRotation = 0x85; // bool
            }
            // Parent: None
            // Fields count: 18
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FootLockPoseOpFixedSettings {
                constexpr std::ptrdiff_t m_footInfo = 0x0; // CUtlVector<FootFixedData_t>
                constexpr std::ptrdiff_t m_hipDampingSettings = 0x18; // CAnimInputDamping
                constexpr std::ptrdiff_t m_nHipBoneIndex = 0x28; // int32
                constexpr std::ptrdiff_t m_ikSolverType = 0x2C; // IKSolverType
                constexpr std::ptrdiff_t m_bApplyTilt = 0x30; // bool
                constexpr std::ptrdiff_t m_bApplyHipDrop = 0x31; // bool
                constexpr std::ptrdiff_t m_bAlwaysUseFallbackHinge = 0x32; // bool
                constexpr std::ptrdiff_t m_bApplyFootRotationLimits = 0x33; // bool
                constexpr std::ptrdiff_t m_bApplyLegTwistLimits = 0x34; // bool
                constexpr std::ptrdiff_t m_flMaxFootHeight = 0x38; // float32
                constexpr std::ptrdiff_t m_flExtensionScale = 0x3C; // float32
                constexpr std::ptrdiff_t m_flMaxLegTwist = 0x40; // float32
                constexpr std::ptrdiff_t m_bEnableLockBreaking = 0x44; // bool
                constexpr std::ptrdiff_t m_flLockBreakTolerance = 0x48; // float32
                constexpr std::ptrdiff_t m_flLockBlendTime = 0x4C; // float32
                constexpr std::ptrdiff_t m_bEnableStretching = 0x50; // bool
                constexpr std::ptrdiff_t m_flMaxStretchAmount = 0x54; // float32
                constexpr std::ptrdiff_t m_flStretchExtensionScale = 0x58; // float32
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FootPinningPoseOpFixedData_t {
                constexpr std::ptrdiff_t m_footInfo = 0x0; // CUtlVector<FootFixedData_t>
                constexpr std::ptrdiff_t m_flBlendTime = 0x18; // float32
                constexpr std::ptrdiff_t m_flLockBreakDistance = 0x1C; // float32
                constexpr std::ptrdiff_t m_flMaxLegTwist = 0x20; // float32
                constexpr std::ptrdiff_t m_nHipBoneIndex = 0x24; // int32
                constexpr std::ptrdiff_t m_bApplyLegTwistLimits = 0x28; // bool
                constexpr std::ptrdiff_t m_bApplyFootRotationLimits = 0x29; // bool
            }
            // Parent: None
            // Fields count: 17
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace HitReactFixedSettings_t {
                constexpr std::ptrdiff_t m_nWeightListIndex = 0x0; // int32
                constexpr std::ptrdiff_t m_nEffectedBoneCount = 0x4; // int32
                constexpr std::ptrdiff_t m_flMaxImpactForce = 0x8; // float32
                constexpr std::ptrdiff_t m_flMinImpactForce = 0xC; // float32
                constexpr std::ptrdiff_t m_flWhipImpactScale = 0x10; // float32
                constexpr std::ptrdiff_t m_flCounterRotationScale = 0x14; // float32
                constexpr std::ptrdiff_t m_flDistanceFadeScale = 0x18; // float32
                constexpr std::ptrdiff_t m_flPropagationScale = 0x1C; // float32
                constexpr std::ptrdiff_t m_flWhipDelay = 0x20; // float32
                constexpr std::ptrdiff_t m_flSpringStrength = 0x24; // float32
                constexpr std::ptrdiff_t m_flWhipSpringStrength = 0x28; // float32
                constexpr std::ptrdiff_t m_flMaxAngleRadians = 0x2C; // float32
                constexpr std::ptrdiff_t m_nHipBoneIndex = 0x30; // int32
                constexpr std::ptrdiff_t m_flHipBoneTranslationScale = 0x34; // float32
                constexpr std::ptrdiff_t m_flHipDipSpringStrength = 0x38; // float32
                constexpr std::ptrdiff_t m_flHipDipImpactScale = 0x3C; // float32
                constexpr std::ptrdiff_t m_flHipDipDelay = 0x40; // float32
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace JiggleBoneSettings_t {
                constexpr std::ptrdiff_t m_nBoneIndex = 0x0; // int32
                constexpr std::ptrdiff_t m_flSpringStrength = 0x4; // float32
                constexpr std::ptrdiff_t m_flMaxTimeStep = 0x8; // float32
                constexpr std::ptrdiff_t m_flDamping = 0xC; // float32
                constexpr std::ptrdiff_t m_vBoundsMaxLS = 0x10; // Vector
                constexpr std::ptrdiff_t m_vBoundsMinLS = 0x1C; // Vector
                constexpr std::ptrdiff_t m_eSimSpace = 0x28; // JiggleBoneSimSpace
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace JiggleBoneSettingsList_t {
                constexpr std::ptrdiff_t m_boneSettings = 0x0; // CUtlVector<JiggleBoneSettings_t>
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace LookAtBone_t {
                constexpr std::ptrdiff_t m_index = 0x0; // int32
                constexpr std::ptrdiff_t m_weight = 0x4; // float32
            }
            // Parent: None
            // Fields count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace LookAtOpFixedSettings_t {
                constexpr std::ptrdiff_t m_attachment = 0x0; // CAnimAttachment
                constexpr std::ptrdiff_t m_damping = 0x80; // CAnimInputDamping
                constexpr std::ptrdiff_t m_bones = 0x90; // CUtlVector<LookAtBone_t>
                constexpr std::ptrdiff_t m_flYawLimit = 0xA8; // float32
                constexpr std::ptrdiff_t m_flPitchLimit = 0xAC; // float32
                constexpr std::ptrdiff_t m_flHysteresisInnerAngle = 0xB0; // float32
                constexpr std::ptrdiff_t m_flHysteresisOuterAngle = 0xB4; // float32
                constexpr std::ptrdiff_t m_bRotateYawForward = 0xB8; // bool
                constexpr std::ptrdiff_t m_bMaintainUpDirection = 0xB9; // bool
                constexpr std::ptrdiff_t m_bTargetIsPosition = 0xBA; // bool
                constexpr std::ptrdiff_t m_bUseHysteresis = 0xBB; // bool
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace ChainToSolveData_t {
                constexpr std::ptrdiff_t m_nChainIndex = 0x0; // int32
                constexpr std::ptrdiff_t m_SolverSettings = 0x4; // IKSolverSettings_t
                constexpr std::ptrdiff_t m_TargetSettings = 0x10; // IKTargetSettings_t
                constexpr std::ptrdiff_t m_DebugSetting = 0x38; // SolveIKChainAnimNodeDebugSetting
                constexpr std::ptrdiff_t m_flDebugNormalizedValue = 0x3C; // float32
                constexpr std::ptrdiff_t m_vDebugOffset = 0x40; // VectorAligned
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace SolveIKChainPoseOpFixedSettings_t {
                constexpr std::ptrdiff_t m_ChainsToSolveData = 0x0; // CUtlVector<ChainToSolveData_t>
                constexpr std::ptrdiff_t m_bMatchTargetOrientation = 0x18; // bool
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimParameterBase {
                constexpr std::ptrdiff_t m_name = 0x18; // CGlobalSymbol
                constexpr std::ptrdiff_t m_group = 0x20; // CUtlString
                constexpr std::ptrdiff_t m_id = 0x28; // AnimParamID
                constexpr std::ptrdiff_t m_componentName = 0x40; // CUtlString
                constexpr std::ptrdiff_t m_bNetworkingRequested = 0x60; // bool
                constexpr std::ptrdiff_t m_bIsReferenced = 0x61; // bool
            }
            // Parent: CAnimParameterBase
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CConcreteAnimParameter {
                constexpr std::ptrdiff_t m_previewButton = 0x64; // AnimParamButton_t
                constexpr std::ptrdiff_t m_eNetworkSetting = 0x68; // AnimParamNetworkSetting
                constexpr std::ptrdiff_t m_bUseMostRecentValue = 0x6C; // bool
                constexpr std::ptrdiff_t m_bAutoReset = 0x6D; // bool
                constexpr std::ptrdiff_t m_bGameWritable = 0x6E; // bool
                constexpr std::ptrdiff_t m_bGraphWritable = 0x6F; // bool
            }
            // Parent: CAnimParameterBase
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVirtualAnimParameter {
                constexpr std::ptrdiff_t m_expressionString = 0x68; // CUtlString
                constexpr std::ptrdiff_t m_eParamType = 0x70; // AnimParamType_t
            }
            // Parent: CConcreteAnimParameter
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CBoolAnimParameter {
                constexpr std::ptrdiff_t m_bDefaultValue = 0x70; // bool
            }
            // Parent: CConcreteAnimParameter
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CEnumAnimParameter {
                constexpr std::ptrdiff_t m_defaultValue = 0x78; // uint8
                constexpr std::ptrdiff_t m_enumOptions = 0x80; // CUtlVector<CUtlString>
            }
            // Parent: CConcreteAnimParameter
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CIntAnimParameter {
                constexpr std::ptrdiff_t m_defaultValue = 0x70; // int32
                constexpr std::ptrdiff_t m_minValue = 0x74; // int32
                constexpr std::ptrdiff_t m_maxValue = 0x78; // int32
            }
            // Parent: CConcreteAnimParameter
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CFloatAnimParameter {
                constexpr std::ptrdiff_t m_fDefaultValue = 0x70; // float32
                constexpr std::ptrdiff_t m_fMinValue = 0x74; // float32
                constexpr std::ptrdiff_t m_fMaxValue = 0x78; // float32
                constexpr std::ptrdiff_t m_bInterpolate = 0x7C; // bool
            }
            // Parent: CConcreteAnimParameter
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CVectorAnimParameter {
                constexpr std::ptrdiff_t m_defaultValue = 0x70; // Vector
                constexpr std::ptrdiff_t m_bInterpolate = 0x7C; // bool
            }
            // Parent: CConcreteAnimParameter
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CQuaternionAnimParameter {
                constexpr std::ptrdiff_t m_defaultValue = 0x70; // Quaternion
                constexpr std::ptrdiff_t m_bInterpolate = 0x80; // bool
            }
            // Parent: CConcreteAnimParameter
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CSymbolAnimParameter {
                constexpr std::ptrdiff_t m_defaultValue = 0x70; // CGlobalSymbol
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace ScriptInfo_t {
                constexpr std::ptrdiff_t m_code = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_paramsModified = 0x8; // CUtlVector<CAnimParamHandle>
                constexpr std::ptrdiff_t m_proxyReadParams = 0x20; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_proxyWriteParams = 0x38; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_eScriptType = 0x50; // AnimScriptType
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimScriptManager {
                constexpr std::ptrdiff_t m_scriptInfo = 0x10; // CUtlVector<ScriptInfo_t>
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CStateActionUpdater {
                constexpr std::ptrdiff_t m_pAction = 0x0; // CSmartPtr<CAnimActionUpdater>
                constexpr std::ptrdiff_t m_eBehavior = 0x8; // StateActionBehavior
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CTransitionUpdateData {
                constexpr std::ptrdiff_t m_srcStateIndex = 0x0; // uint8
                constexpr std::ptrdiff_t m_destStateIndex = 0x1; // uint8
                constexpr std::ptrdiff_t m_bDisabled = 0x0; // bitfield:1
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CStateUpdateData {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_hScript = 0x8; // AnimScriptHandle
                constexpr std::ptrdiff_t m_transitionIndices = 0x10; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_actions = 0x28; // CUtlVector<CStateActionUpdater>
                constexpr std::ptrdiff_t m_stateID = 0x40; // AnimStateID
                constexpr std::ptrdiff_t m_bIsStartState = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bIsEndState = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bIsPassthrough = 0x0; // bitfield:1
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimStateMachineUpdater {
                constexpr std::ptrdiff_t m_states = 0x8; // CUtlVector<CStateUpdateData>
                constexpr std::ptrdiff_t m_transitions = 0x20; // CUtlVector<CTransitionUpdateData>
                constexpr std::ptrdiff_t m_startStateIndex = 0x50; // int32
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimUpdateNodeRef {
                constexpr std::ptrdiff_t m_nodeIndex = 0x8; // int32
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimUpdateNodeBase {
                constexpr std::ptrdiff_t m_nodePath = 0x14; // CAnimNodePath
                constexpr std::ptrdiff_t m_networkMode = 0x44; // AnimNodeNetworkMode
                constexpr std::ptrdiff_t m_name = 0x50; // CUtlString
            }
            // Parent: CAnimUpdateNodeBase
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CBinaryUpdateNode {
                constexpr std::ptrdiff_t m_pChild1 = 0x58; // CAnimUpdateNodeRef
                constexpr std::ptrdiff_t m_pChild2 = 0x68; // CAnimUpdateNodeRef
                constexpr std::ptrdiff_t m_timingBehavior = 0x78; // BinaryNodeTiming
                constexpr std::ptrdiff_t m_flTimingBlend = 0x7C; // float32
                constexpr std::ptrdiff_t m_bResetChild1 = 0x80; // bool
                constexpr std::ptrdiff_t m_bResetChild2 = 0x81; // bool
            }
            // Parent: CAnimUpdateNodeBase
            // Fields count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CBlendUpdateNode {
                constexpr std::ptrdiff_t m_children = 0x60; // CUtlVector<CAnimUpdateNodeRef>
                constexpr std::ptrdiff_t m_sortedOrder = 0x78; // CUtlVector<uint8>
                constexpr std::ptrdiff_t m_targetValues = 0x90; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_blendValueSource = 0xAC; // AnimValueSource
                constexpr std::ptrdiff_t m_paramIndex = 0xB0; // CAnimParamHandle
                constexpr std::ptrdiff_t m_damping = 0xB8; // CAnimInputDamping
                constexpr std::ptrdiff_t m_blendKeyType = 0xC8; // BlendKeyType
                constexpr std::ptrdiff_t m_bLockBlendOnReset = 0xCC; // bool
                constexpr std::ptrdiff_t m_bSyncCycles = 0xCD; // bool
                constexpr std::ptrdiff_t m_bLoop = 0xCE; // bool
                constexpr std::ptrdiff_t m_bLockWhenWaning = 0xCF; // bool
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace BlendItem_t {
                constexpr std::ptrdiff_t m_tags = 0x0; // CUtlVector<TagSpan_t>
                constexpr std::ptrdiff_t m_pChild = 0x18; // CAnimUpdateNodeRef
                constexpr std::ptrdiff_t m_hSequence = 0x28; // HSequence
                constexpr std::ptrdiff_t m_vPos = 0x2C; // Vector2D
                constexpr std::ptrdiff_t m_flDuration = 0x34; // float32
                constexpr std::ptrdiff_t m_bUseCustomDuration = 0x38; // bool
            }
            // Parent: CAnimUpdateNodeBase
            // Fields count: 15
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CBlend2DUpdateNode {
                constexpr std::ptrdiff_t m_items = 0x60; // CUtlVector<BlendItem_t>
                constexpr std::ptrdiff_t m_tags = 0x78; // CUtlVector<TagSpan_t>
                constexpr std::ptrdiff_t m_paramSpans = 0x90; // CParamSpanUpdater
                constexpr std::ptrdiff_t m_nodeItemIndices = 0xA8; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_damping = 0xC0; // CAnimInputDamping
                constexpr std::ptrdiff_t m_blendSourceX = 0xD0; // AnimValueSource
                constexpr std::ptrdiff_t m_paramX = 0xD4; // CAnimParamHandle
                constexpr std::ptrdiff_t m_blendSourceY = 0xD8; // AnimValueSource
                constexpr std::ptrdiff_t m_paramY = 0xDC; // CAnimParamHandle
                constexpr std::ptrdiff_t m_eBlendMode = 0xE0; // Blend2DMode
                constexpr std::ptrdiff_t m_playbackSpeed = 0xE4; // float32
                constexpr std::ptrdiff_t m_bLoop = 0xE8; // bool
                constexpr std::ptrdiff_t m_bLockBlendOnReset = 0xE9; // bool
                constexpr std::ptrdiff_t m_bLockWhenWaning = 0xEA; // bool
                constexpr std::ptrdiff_t m_bAnimEventsAndTagsOnMostWeightedOnly = 0xEB; // bool
            }
            // Parent: CBinaryUpdateNode
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CBoneMaskUpdateNode {
                constexpr std::ptrdiff_t m_nWeightListIndex = 0x88; // int32
                constexpr std::ptrdiff_t m_flRootMotionBlend = 0x8C; // float32
                constexpr std::ptrdiff_t m_blendSpace = 0x90; // BoneMaskBlendSpace
                constexpr std::ptrdiff_t m_footMotionTiming = 0x94; // BinaryNodeChildOption
                constexpr std::ptrdiff_t m_bUseBlendScale = 0x98; // bool
                constexpr std::ptrdiff_t m_blendValueSource = 0x9C; // AnimValueSource
                constexpr std::ptrdiff_t m_hBlendParameter = 0xA0; // CAnimParamHandle
            }
            // Parent: CAnimUpdateNodeBase
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CChoiceUpdateNode {
                constexpr std::ptrdiff_t m_children = 0x58; // CUtlVector<CAnimUpdateNodeRef>
                constexpr std::ptrdiff_t m_weights = 0x70; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_blendTimes = 0x88; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_choiceMethod = 0xA0; // ChoiceMethod
                constexpr std::ptrdiff_t m_choiceChangeMethod = 0xA4; // ChoiceChangeMethod
                constexpr std::ptrdiff_t m_blendMethod = 0xA8; // ChoiceBlendMethod
                constexpr std::ptrdiff_t m_blendTime = 0xAC; // float32
                constexpr std::ptrdiff_t m_bCrossFade = 0xB0; // bool
                constexpr std::ptrdiff_t m_bResetChosen = 0xB1; // bool
                constexpr std::ptrdiff_t m_bDontResetSameSelection = 0xB2; // bool
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CDirectPlaybackTagData {
                constexpr std::ptrdiff_t m_sequenceName = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_tags = 0x8; // CUtlVector<TagSpan_t>
            }
            // Parent: None
            // Fields count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FootFixedData_t {
                constexpr std::ptrdiff_t m_vToeOffset = 0x0; // VectorAligned
                constexpr std::ptrdiff_t m_vHeelOffset = 0x10; // VectorAligned
                constexpr std::ptrdiff_t m_nTargetBoneIndex = 0x20; // int32
                constexpr std::ptrdiff_t m_nAnkleBoneIndex = 0x24; // int32
                constexpr std::ptrdiff_t m_nIKAnchorBoneIndex = 0x28; // int32
                constexpr std::ptrdiff_t m_ikChainIndex = 0x2C; // int32
                constexpr std::ptrdiff_t m_flMaxIKLength = 0x30; // float32
                constexpr std::ptrdiff_t m_nFootIndex = 0x34; // int32
                constexpr std::ptrdiff_t m_nTagIndex = 0x38; // int32
                constexpr std::ptrdiff_t m_flMaxRotationLeft = 0x3C; // float32
                constexpr std::ptrdiff_t m_flMaxRotationRight = 0x40; // float32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace TraceSettings_t {
                constexpr std::ptrdiff_t m_flTraceHeight = 0x0; // float32
                constexpr std::ptrdiff_t m_flTraceRadius = 0x4; // float32
            }
            // Parent: None
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FootFixedSettings {
                constexpr std::ptrdiff_t m_traceSettings = 0x0; // TraceSettings_t
                constexpr std::ptrdiff_t m_vFootBaseBindPosePositionMS = 0x10; // VectorAligned
                constexpr std::ptrdiff_t m_flFootBaseLength = 0x20; // float32
                constexpr std::ptrdiff_t m_flMaxRotationLeft = 0x24; // float32
                constexpr std::ptrdiff_t m_flMaxRotationRight = 0x28; // float32
                constexpr std::ptrdiff_t m_footstepLandedTagIndex = 0x2C; // int32
                constexpr std::ptrdiff_t m_bEnableTracing = 0x30; // bool
                constexpr std::ptrdiff_t m_flTraceAngleBlend = 0x34; // float32
                constexpr std::ptrdiff_t m_nDisableTagIndex = 0x38; // int32
                constexpr std::ptrdiff_t m_nFootIndex = 0x3C; // int32
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FootStepTrigger {
                constexpr std::ptrdiff_t m_tags = 0x0; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_nFootIndex = 0x18; // int32
                constexpr std::ptrdiff_t m_triggerPhase = 0x1C; // StepPhase
            }
            // Parent: CAnimUpdateNodeBase
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CLeafUpdateNode {
            }
            // Parent: CLeafUpdateNode
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CLeanMatrixUpdateNode {
                constexpr std::ptrdiff_t m_frameCorners = 0x5C; // int32[3][3]
                constexpr std::ptrdiff_t m_poses = 0x80; // CPoseHandle[9]
                constexpr std::ptrdiff_t m_damping = 0xA8; // CAnimInputDamping
                constexpr std::ptrdiff_t m_blendSource = 0xB8; // AnimVectorSource
                constexpr std::ptrdiff_t m_paramIndex = 0xBC; // CAnimParamHandle
                constexpr std::ptrdiff_t m_verticalAxis = 0xC0; // Vector
                constexpr std::ptrdiff_t m_horizontalAxis = 0xCC; // Vector
                constexpr std::ptrdiff_t m_hSequence = 0xD8; // HSequence
                constexpr std::ptrdiff_t m_flMaxValue = 0xDC; // float32
                constexpr std::ptrdiff_t m_nSequenceMaxFrame = 0xE0; // int32
            }
            // Parent: CLeafUpdateNode
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CMotionGraphUpdateNode {
                constexpr std::ptrdiff_t m_pMotionGraph = 0x58; // CSmartPtr<CMotionGraph>
            }
            // Parent: CLeafUpdateNode
            // Fields count: 23
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CMotionMatchingUpdateNode {
                constexpr std::ptrdiff_t m_dataSet = 0x58; // CMotionDataSet
                constexpr std::ptrdiff_t m_metrics = 0x78; // CUtlVector<CSmartPtr<CMotionMetricEvaluator>>
                constexpr std::ptrdiff_t m_weights = 0x90; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_bSearchEveryTick = 0xE0; // bool
                constexpr std::ptrdiff_t m_flSearchInterval = 0xE4; // float32
                constexpr std::ptrdiff_t m_bSearchWhenClipEnds = 0xE8; // bool
                constexpr std::ptrdiff_t m_bSearchWhenGoalChanges = 0xE9; // bool
                constexpr std::ptrdiff_t m_blendCurve = 0xEC; // CBlendCurve
                constexpr std::ptrdiff_t m_flSampleRate = 0xF4; // float32
                constexpr std::ptrdiff_t m_flBlendTime = 0xF8; // float32
                constexpr std::ptrdiff_t m_bLockClipWhenWaning = 0xFC; // bool
                constexpr std::ptrdiff_t m_flSelectionThreshold = 0x100; // float32
                constexpr std::ptrdiff_t m_flReselectionTimeWindow = 0x104; // float32
                constexpr std::ptrdiff_t m_bEnableRotationCorrection = 0x108; // bool
                constexpr std::ptrdiff_t m_bGoalAssist = 0x109; // bool
                constexpr std::ptrdiff_t m_flGoalAssistDistance = 0x10C; // float32
                constexpr std::ptrdiff_t m_flGoalAssistTolerance = 0x110; // float32
                constexpr std::ptrdiff_t m_distanceScale_Damping = 0x118; // CAnimInputDamping
                constexpr std::ptrdiff_t m_flDistanceScale_OuterRadius = 0x128; // float32
                constexpr std::ptrdiff_t m_flDistanceScale_InnerRadius = 0x12C; // float32
                constexpr std::ptrdiff_t m_flDistanceScale_MaxScale = 0x130; // float32
                constexpr std::ptrdiff_t m_flDistanceScale_MinScale = 0x134; // float32
                constexpr std::ptrdiff_t m_bEnableDistanceScaling = 0x138; // bool
            }
            // Parent: CAnimUpdateNodeBase
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSelectorUpdateNode {
                constexpr std::ptrdiff_t m_children = 0x58; // CUtlVector<CAnimUpdateNodeRef>
                constexpr std::ptrdiff_t m_tags = 0x70; // CUtlVector<int8>
                constexpr std::ptrdiff_t m_blendCurve = 0x8C; // CBlendCurve
                constexpr std::ptrdiff_t m_flBlendTime = 0x94; // CAnimValue<float32>
                constexpr std::ptrdiff_t m_hParameter = 0x9C; // CAnimParamHandle
                constexpr std::ptrdiff_t m_eTagBehavior = 0xA0; // SelectorTagBehavior_t
                constexpr std::ptrdiff_t m_bResetOnChange = 0xA4; // bool
                constexpr std::ptrdiff_t m_bSyncCyclesOnChange = 0xA5; // bool
            }
            // Parent: CLeafUpdateNode
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSequenceUpdateNode {
                constexpr std::ptrdiff_t m_paramSpans = 0x60; // CParamSpanUpdater
                constexpr std::ptrdiff_t m_tags = 0x78; // CUtlVector<TagSpan_t>
                constexpr std::ptrdiff_t m_hSequence = 0x94; // HSequence
                constexpr std::ptrdiff_t m_playbackSpeed = 0x98; // float32
                constexpr std::ptrdiff_t m_duration = 0x9C; // float32
                constexpr std::ptrdiff_t m_bLoop = 0xA0; // bool
            }
            // Parent: CLeafUpdateNode
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSingleFrameUpdateNode {
                constexpr std::ptrdiff_t m_actions = 0x58; // CUtlVector<CSmartPtr<CAnimActionUpdater>>
                constexpr std::ptrdiff_t m_hPoseCacheHandle = 0x70; // CPoseHandle
                constexpr std::ptrdiff_t m_hSequence = 0x74; // HSequence
                constexpr std::ptrdiff_t m_flCycle = 0x78; // float32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSolveIKTargetHandle_t {
                constexpr std::ptrdiff_t m_positionHandle = 0x0; // CAnimParamHandle
                constexpr std::ptrdiff_t m_orientationHandle = 0x2; // CAnimParamHandle
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace StanceInfo_t {
                constexpr std::ptrdiff_t m_vPosition = 0x0; // Vector
                constexpr std::ptrdiff_t m_flDirection = 0xC; // float32
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CStateNodeTransitionData {
                constexpr std::ptrdiff_t m_curve = 0x0; // CBlendCurve
                constexpr std::ptrdiff_t m_blendDuration = 0x8; // CAnimValue<float32>
                constexpr std::ptrdiff_t m_resetCycleValue = 0x10; // CAnimValue<float32>
                constexpr std::ptrdiff_t m_bReset = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_resetCycleOption = 0x0; // bitfield:3
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CStateNodeStateData {
                constexpr std::ptrdiff_t m_pChild = 0x0; // CAnimUpdateNodeRef
                constexpr std::ptrdiff_t m_bExclusiveRootMotion = 0x0; // bitfield:1
            }
            // Parent: CAnimUpdateNodeBase
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CStateMachineUpdateNode {
                constexpr std::ptrdiff_t m_stateMachine = 0x68; // CAnimStateMachineUpdater
                constexpr std::ptrdiff_t m_stateData = 0xC0; // CUtlVector<CStateNodeStateData>
                constexpr std::ptrdiff_t m_transitionData = 0xD8; // CUtlVector<CStateNodeTransitionData>
                constexpr std::ptrdiff_t m_bBlockWaningTags = 0xF4; // bool
                constexpr std::ptrdiff_t m_bLockStateWhenWaning = 0xF5; // bool
            }
            // Parent: CBinaryUpdateNode
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSubtractUpdateNode {
                constexpr std::ptrdiff_t m_footMotionTiming = 0x88; // BinaryNodeChildOption
                constexpr std::ptrdiff_t m_bApplyToFootMotion = 0x8C; // bool
                constexpr std::ptrdiff_t m_bApplyChannelsSeparately = 0x8D; // bool
                constexpr std::ptrdiff_t m_bUseModelSpace = 0x8E; // bool
            }
            // Parent: None
            // Fields count: 15
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace TwoBoneIKSettings_t {
                constexpr std::ptrdiff_t m_endEffectorType = 0x0; // IkEndEffectorType
                constexpr std::ptrdiff_t m_endEffectorAttachment = 0x10; // CAnimAttachment
                constexpr std::ptrdiff_t m_targetType = 0x90; // IkTargetType
                constexpr std::ptrdiff_t m_targetAttachment = 0xA0; // CAnimAttachment
                constexpr std::ptrdiff_t m_targetBoneIndex = 0x120; // int32
                constexpr std::ptrdiff_t m_hPositionParam = 0x124; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hRotationParam = 0x126; // CAnimParamHandle
                constexpr std::ptrdiff_t m_bAlwaysUseFallbackHinge = 0x128; // bool
                constexpr std::ptrdiff_t m_vLsFallbackHingeAxis = 0x130; // VectorAligned
                constexpr std::ptrdiff_t m_nFixedBoneIndex = 0x140; // int32
                constexpr std::ptrdiff_t m_nMiddleBoneIndex = 0x144; // int32
                constexpr std::ptrdiff_t m_nEndBoneIndex = 0x148; // int32
                constexpr std::ptrdiff_t m_bMatchTargetOrientation = 0x14C; // bool
                constexpr std::ptrdiff_t m_bConstrainTwist = 0x14D; // bool
                constexpr std::ptrdiff_t m_flMaxTwist = 0x150; // float32
            }
            // Parent: CAnimUpdateNodeBase
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CUnaryUpdateNode {
                constexpr std::ptrdiff_t m_pChildNode = 0x58; // CAnimUpdateNodeRef
            }
            // Parent: CUnaryUpdateNode
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CWayPointHelperUpdateNode {
                constexpr std::ptrdiff_t m_flStartCycle = 0x6C; // float32
                constexpr std::ptrdiff_t m_flEndCycle = 0x70; // float32
                constexpr std::ptrdiff_t m_bOnlyGoals = 0x74; // bool
                constexpr std::ptrdiff_t m_bPreventOvershoot = 0x75; // bool
                constexpr std::ptrdiff_t m_bPreventUndershoot = 0x76; // bool
            }
            // Parent: CLeafUpdateNode
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CZeroPoseUpdateNode {
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace TagSpan_t {
                constexpr std::ptrdiff_t m_tagIndex = 0x0; // int32
                constexpr std::ptrdiff_t m_startCycle = 0x4; // float32
                constexpr std::ptrdiff_t m_endCycle = 0x8; // float32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimNodePath {
                constexpr std::ptrdiff_t m_path = 0x0; // AnimNodeID[11]
                constexpr std::ptrdiff_t m_nCount = 0x2C; // int32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace ConfigIndex {
                constexpr std::ptrdiff_t m_nGroup = 0x0; // uint16
                constexpr std::ptrdiff_t m_nConfig = 0x2; // uint16
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace MotionIndex {
                constexpr std::ptrdiff_t m_nGroup = 0x0; // uint16
                constexpr std::ptrdiff_t m_nMotion = 0x2; // uint16
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CMotionGraphConfig {
                constexpr std::ptrdiff_t m_paramValues = 0x0; // float32[4]
                constexpr std::ptrdiff_t m_flDuration = 0x10; // float32
                constexpr std::ptrdiff_t m_nMotionIndex = 0x14; // MotionIndex
                constexpr std::ptrdiff_t m_nSampleStart = 0x18; // int32
                constexpr std::ptrdiff_t m_nSampleCount = 0x1C; // int32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPoseHandle {
                constexpr std::ptrdiff_t m_nIndex = 0x0; // uint16
                constexpr std::ptrdiff_t m_eType = 0x2; // PoseType_t
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimationGraphVisualizerPrimitiveBase {
                constexpr std::ptrdiff_t m_Type = 0x8; // CAnimationGraphVisualizerPrimitiveType
                constexpr std::ptrdiff_t m_OwningAnimNodePaths = 0xC; // AnimNodeID[11]
                constexpr std::ptrdiff_t m_nOwningAnimNodePathCount = 0x38; // int32
            }
            // Parent: CAnimationGraphVisualizerPrimitiveBase
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimationGraphVisualizerText {
                constexpr std::ptrdiff_t m_vWsPosition = 0x40; // VectorAligned
                constexpr std::ptrdiff_t m_Color = 0x50; // Color
                constexpr std::ptrdiff_t m_Text = 0x58; // CUtlString
            }
            // Parent: CAnimationGraphVisualizerPrimitiveBase
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimationGraphVisualizerSphere {
                constexpr std::ptrdiff_t m_vWsPosition = 0x40; // VectorAligned
                constexpr std::ptrdiff_t m_flRadius = 0x50; // float32
                constexpr std::ptrdiff_t m_Color = 0x54; // Color
            }
            // Parent: CAnimationGraphVisualizerPrimitiveBase
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimationGraphVisualizerLine {
                constexpr std::ptrdiff_t m_vWsPositionStart = 0x40; // VectorAligned
                constexpr std::ptrdiff_t m_vWsPositionEnd = 0x50; // VectorAligned
                constexpr std::ptrdiff_t m_Color = 0x60; // Color
            }
            // Parent: CAnimationGraphVisualizerPrimitiveBase
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimationGraphVisualizerPie {
                constexpr std::ptrdiff_t m_vWsCenter = 0x40; // VectorAligned
                constexpr std::ptrdiff_t m_vWsStart = 0x50; // VectorAligned
                constexpr std::ptrdiff_t m_vWsEnd = 0x60; // VectorAligned
                constexpr std::ptrdiff_t m_Color = 0x70; // Color
            }
            // Parent: CAnimationGraphVisualizerPrimitiveBase
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimationGraphVisualizerAxis {
                constexpr std::ptrdiff_t m_xWsTransform = 0x40; // CTransform
                constexpr std::ptrdiff_t m_flAxisSize = 0x60; // float32
            }
            // Parent: None
            // Fields count: 1
            namespace IKBoneNameAndIndex_t {
                constexpr std::ptrdiff_t m_Name = 0x0; // CUtlString
            }
            // Parent: None
            // Fields count: 2
            namespace IKSolverSettings_t {
                constexpr std::ptrdiff_t m_SolverType = 0x0; // IKSolverType
                constexpr std::ptrdiff_t m_nNumIterations = 0x4; // int32
            }
            // Parent: None
            // Fields count: 5
            namespace IKTargetSettings_t {
                constexpr std::ptrdiff_t m_TargetSource = 0x0; // IKTargetSource
                constexpr std::ptrdiff_t m_Bone = 0x8; // IKBoneNameAndIndex_t
                constexpr std::ptrdiff_t m_AnimgraphParameterNamePosition = 0x18; // AnimParamID
                constexpr std::ptrdiff_t m_AnimgraphParameterNameOrientation = 0x1C; // AnimParamID
                constexpr std::ptrdiff_t m_TargetCoordSystem = 0x20; // IKTargetCoordinateSystem
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyEditClassAsString
            namespace AnimNodeID {
                constexpr std::ptrdiff_t m_id = 0x0; // uint32
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyEditClassAsString
            namespace AnimNodeOutputID {
                constexpr std::ptrdiff_t m_id = 0x0; // uint32
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyEditClassAsString
            namespace AnimStateID {
                constexpr std::ptrdiff_t m_id = 0x0; // uint32
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyEditClassAsString
            namespace AnimParamID {
                constexpr std::ptrdiff_t m_id = 0x0; // uint32
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyEditClassAsString
            namespace AnimTagID {
                constexpr std::ptrdiff_t m_id = 0x0; // uint32
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyEditClassAsString
            namespace AnimComponentID {
                constexpr std::ptrdiff_t m_id = 0x0; // uint32
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyEditClassAsString
            namespace AnimScriptHandle {
                constexpr std::ptrdiff_t m_id = 0x0; // uint32
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimAttachment {
                constexpr std::ptrdiff_t m_influenceRotations = 0x0; // Quaternion[3]
                constexpr std::ptrdiff_t m_influenceOffsets = 0x30; // VectorAligned[3]
                constexpr std::ptrdiff_t m_influenceIndices = 0x60; // int32[3]
                constexpr std::ptrdiff_t m_influenceWeights = 0x6C; // float32[3]
                constexpr std::ptrdiff_t m_numInfluences = 0x78; // uint8
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VPhysics2ShapeDef_t {
                constexpr std::ptrdiff_t m_spheres = 0x0; // CUtlVector<RnSphereDesc_t>
                constexpr std::ptrdiff_t m_capsules = 0x18; // CUtlVector<RnCapsuleDesc_t>
                constexpr std::ptrdiff_t m_hulls = 0x30; // CUtlVector<RnHullDesc_t>
                constexpr std::ptrdiff_t m_meshes = 0x48; // CUtlVector<RnMeshDesc_t>
                constexpr std::ptrdiff_t m_CollisionAttributeIndices = 0x60; // CUtlVector<uint16>
            }
            // Parent: None
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VPhysXBodyPart_t {
                constexpr std::ptrdiff_t m_nFlags = 0x0; // uint32
                constexpr std::ptrdiff_t m_flMass = 0x4; // float32
                constexpr std::ptrdiff_t m_rnShape = 0x8; // VPhysics2ShapeDef_t
                constexpr std::ptrdiff_t m_nCollisionAttributeIndex = 0x80; // uint16
                constexpr std::ptrdiff_t m_nReserved = 0x82; // uint16
                constexpr std::ptrdiff_t m_flInertiaScale = 0x84; // float32
                constexpr std::ptrdiff_t m_flLinearDamping = 0x88; // float32
                constexpr std::ptrdiff_t m_flAngularDamping = 0x8C; // float32
                constexpr std::ptrdiff_t m_bOverrideMassCenter = 0x90; // bool
                constexpr std::ptrdiff_t m_vMassCenterOverride = 0x94; // Vector
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VPhysXCollisionAttributes_t {
                constexpr std::ptrdiff_t m_CollisionGroup = 0x0; // uint32
                constexpr std::ptrdiff_t m_InteractAs = 0x8; // CUtlVector<uint32>
                constexpr std::ptrdiff_t m_InteractWith = 0x20; // CUtlVector<uint32>
                constexpr std::ptrdiff_t m_InteractExclude = 0x38; // CUtlVector<uint32>
                constexpr std::ptrdiff_t m_CollisionGroupString = 0x50; // CUtlString
                constexpr std::ptrdiff_t m_InteractAsStrings = 0x58; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_InteractWithStrings = 0x70; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_InteractExcludeStrings = 0x88; // CUtlVector<CUtlString>
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VPhysXRange_t {
                constexpr std::ptrdiff_t m_flMin = 0x0; // float32
                constexpr std::ptrdiff_t m_flMax = 0x4; // float32
            }
            // Parent: None
            // Fields count: 46
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VPhysXConstraintParams_t {
                constexpr std::ptrdiff_t m_nType = 0x0; // int8
                constexpr std::ptrdiff_t m_nTranslateMotion = 0x1; // int8
                constexpr std::ptrdiff_t m_nRotateMotion = 0x2; // int8
                constexpr std::ptrdiff_t m_nFlags = 0x3; // int8
                constexpr std::ptrdiff_t m_anchor = 0x4; // Vector[2]
                constexpr std::ptrdiff_t m_axes = 0x1C; // QuaternionStorage[2]
                constexpr std::ptrdiff_t m_maxForce = 0x3C; // float32
                constexpr std::ptrdiff_t m_maxTorque = 0x40; // float32
                constexpr std::ptrdiff_t m_linearLimitValue = 0x44; // float32
                constexpr std::ptrdiff_t m_linearLimitRestitution = 0x48; // float32
                constexpr std::ptrdiff_t m_linearLimitSpring = 0x4C; // float32
                constexpr std::ptrdiff_t m_linearLimitDamping = 0x50; // float32
                constexpr std::ptrdiff_t m_twistLowLimitValue = 0x54; // float32
                constexpr std::ptrdiff_t m_twistLowLimitRestitution = 0x58; // float32
                constexpr std::ptrdiff_t m_twistLowLimitSpring = 0x5C; // float32
                constexpr std::ptrdiff_t m_twistLowLimitDamping = 0x60; // float32
                constexpr std::ptrdiff_t m_twistHighLimitValue = 0x64; // float32
                constexpr std::ptrdiff_t m_twistHighLimitRestitution = 0x68; // float32
                constexpr std::ptrdiff_t m_twistHighLimitSpring = 0x6C; // float32
                constexpr std::ptrdiff_t m_twistHighLimitDamping = 0x70; // float32
                constexpr std::ptrdiff_t m_swing1LimitValue = 0x74; // float32
                constexpr std::ptrdiff_t m_swing1LimitRestitution = 0x78; // float32
                constexpr std::ptrdiff_t m_swing1LimitSpring = 0x7C; // float32
                constexpr std::ptrdiff_t m_swing1LimitDamping = 0x80; // float32
                constexpr std::ptrdiff_t m_swing2LimitValue = 0x84; // float32
                constexpr std::ptrdiff_t m_swing2LimitRestitution = 0x88; // float32
                constexpr std::ptrdiff_t m_swing2LimitSpring = 0x8C; // float32
                constexpr std::ptrdiff_t m_swing2LimitDamping = 0x90; // float32
                constexpr std::ptrdiff_t m_goalPosition = 0x94; // Vector
                constexpr std::ptrdiff_t m_goalOrientation = 0xA0; // QuaternionStorage
                constexpr std::ptrdiff_t m_goalAngularVelocity = 0xB0; // Vector
                constexpr std::ptrdiff_t m_driveSpringX = 0xBC; // float32
                constexpr std::ptrdiff_t m_driveSpringY = 0xC0; // float32
                constexpr std::ptrdiff_t m_driveSpringZ = 0xC4; // float32
                constexpr std::ptrdiff_t m_driveDampingX = 0xC8; // float32
                constexpr std::ptrdiff_t m_driveDampingY = 0xCC; // float32
                constexpr std::ptrdiff_t m_driveDampingZ = 0xD0; // float32
                constexpr std::ptrdiff_t m_driveSpringTwist = 0xD4; // float32
                constexpr std::ptrdiff_t m_driveSpringSwing = 0xD8; // float32
                constexpr std::ptrdiff_t m_driveSpringSlerp = 0xDC; // float32
                constexpr std::ptrdiff_t m_driveDampingTwist = 0xE0; // float32
                constexpr std::ptrdiff_t m_driveDampingSwing = 0xE4; // float32
                constexpr std::ptrdiff_t m_driveDampingSlerp = 0xE8; // float32
                constexpr std::ptrdiff_t m_solverIterationCount = 0xEC; // int32
                constexpr std::ptrdiff_t m_projectionLinearTolerance = 0xF0; // float32
                constexpr std::ptrdiff_t m_projectionAngularTolerance = 0xF4; // float32
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VPhysXConstraint2_t {
                constexpr std::ptrdiff_t m_nFlags = 0x0; // uint32
                constexpr std::ptrdiff_t m_nParent = 0x4; // uint16
                constexpr std::ptrdiff_t m_nChild = 0x6; // uint16
                constexpr std::ptrdiff_t m_params = 0x8; // VPhysXConstraintParams_t
            }
            // Parent: None
            // Fields count: 24
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VPhysXJoint_t {
                constexpr std::ptrdiff_t m_nType = 0x0; // uint16
                constexpr std::ptrdiff_t m_nBody1 = 0x2; // uint16
                constexpr std::ptrdiff_t m_nBody2 = 0x4; // uint16
                constexpr std::ptrdiff_t m_nFlags = 0x6; // uint16
                constexpr std::ptrdiff_t m_Frame1 = 0x10; // CTransform
                constexpr std::ptrdiff_t m_Frame2 = 0x30; // CTransform
                constexpr std::ptrdiff_t m_bEnableCollision = 0x50; // bool
                constexpr std::ptrdiff_t m_bEnableLinearLimit = 0x51; // bool
                constexpr std::ptrdiff_t m_LinearLimit = 0x54; // VPhysXRange_t
                constexpr std::ptrdiff_t m_bEnableLinearMotor = 0x5C; // bool
                constexpr std::ptrdiff_t m_vLinearTargetVelocity = 0x60; // Vector
                constexpr std::ptrdiff_t m_flMaxForce = 0x6C; // float32
                constexpr std::ptrdiff_t m_bEnableSwingLimit = 0x70; // bool
                constexpr std::ptrdiff_t m_SwingLimit = 0x74; // VPhysXRange_t
                constexpr std::ptrdiff_t m_bEnableTwistLimit = 0x7C; // bool
                constexpr std::ptrdiff_t m_TwistLimit = 0x80; // VPhysXRange_t
                constexpr std::ptrdiff_t m_bEnableAngularMotor = 0x88; // bool
                constexpr std::ptrdiff_t m_vAngularTargetVelocity = 0x8C; // Vector
                constexpr std::ptrdiff_t m_flMaxTorque = 0x98; // float32
                constexpr std::ptrdiff_t m_flLinearFrequency = 0x9C; // float32
                constexpr std::ptrdiff_t m_flLinearDampingRatio = 0xA0; // float32
                constexpr std::ptrdiff_t m_flAngularFrequency = 0xA4; // float32
                constexpr std::ptrdiff_t m_flAngularDampingRatio = 0xA8; // float32
                constexpr std::ptrdiff_t m_flFriction = 0xAC; // float32
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace PhysSoftbodyDesc_t {
                constexpr std::ptrdiff_t m_ParticleBoneHash = 0x0; // CUtlVector<uint32>
                constexpr std::ptrdiff_t m_Particles = 0x18; // CUtlVector<RnSoftbodyParticle_t>
                constexpr std::ptrdiff_t m_Springs = 0x30; // CUtlVector<RnSoftbodySpring_t>
                constexpr std::ptrdiff_t m_Capsules = 0x48; // CUtlVector<RnSoftbodyCapsule_t>
                constexpr std::ptrdiff_t m_InitPose = 0x60; // CUtlVector<CTransform>
                constexpr std::ptrdiff_t m_ParticleBoneName = 0x78; // CUtlVector<CUtlString>
            }
            // Parent: None
            // Fields count: 16
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VPhysXAggregateData_t {
                constexpr std::ptrdiff_t m_nFlags = 0x0; // uint16
                constexpr std::ptrdiff_t m_nRefCounter = 0x2; // uint16
                constexpr std::ptrdiff_t m_bonesHash = 0x8; // CUtlVector<uint32>
                constexpr std::ptrdiff_t m_boneNames = 0x20; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_indexNames = 0x38; // CUtlVector<uint16>
                constexpr std::ptrdiff_t m_indexHash = 0x50; // CUtlVector<uint16>
                constexpr std::ptrdiff_t m_bindPose = 0x68; // CUtlVector<matrix3x4a_t>
                constexpr std::ptrdiff_t m_parts = 0x80; // CUtlVector<VPhysXBodyPart_t>
                constexpr std::ptrdiff_t m_constraints2 = 0x98; // CUtlVector<VPhysXConstraint2_t>
                constexpr std::ptrdiff_t m_joints = 0xB0; // CUtlVector<VPhysXJoint_t>
                constexpr std::ptrdiff_t m_pFeModel = 0xC8; // PhysFeModelDesc_t*
                constexpr std::ptrdiff_t m_boneParents = 0xD0; // CUtlVector<uint16>
                constexpr std::ptrdiff_t m_surfacePropertyHashes = 0xE8; // CUtlVector<uint32>
                constexpr std::ptrdiff_t m_collisionAttributes = 0x100; // CUtlVector<VPhysXCollisionAttributes_t>
                constexpr std::ptrdiff_t m_debugPartNames = 0x118; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_embeddedKeyvalues = 0x130; // CUtlString
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPhysSurfacePropertiesPhysics {
                constexpr std::ptrdiff_t m_friction = 0x0; // float32
                constexpr std::ptrdiff_t m_elasticity = 0x4; // float32
                constexpr std::ptrdiff_t m_density = 0x8; // float32
                constexpr std::ptrdiff_t m_thickness = 0xC; // float32
                constexpr std::ptrdiff_t m_softContactFrequency = 0x10; // float32
                constexpr std::ptrdiff_t m_softContactDampingRatio = 0x14; // float32
                constexpr std::ptrdiff_t m_wheelDrag = 0x18; // float32
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPhysSurfacePropertiesAudio {
                constexpr std::ptrdiff_t m_reflectivity = 0x0; // float32
                constexpr std::ptrdiff_t m_hardnessFactor = 0x4; // float32
                constexpr std::ptrdiff_t m_roughnessFactor = 0x8; // float32
                constexpr std::ptrdiff_t m_roughThreshold = 0xC; // float32
                constexpr std::ptrdiff_t m_hardThreshold = 0x10; // float32
                constexpr std::ptrdiff_t m_hardVelocityThreshold = 0x14; // float32
                constexpr std::ptrdiff_t m_flStaticImpactVolume = 0x18; // float32
                constexpr std::ptrdiff_t m_flOcclusionFactor = 0x1C; // float32
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPhysSurfacePropertiesSoundNames {
                constexpr std::ptrdiff_t m_impactSoft = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_impactHard = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_scrapeSmooth = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_scrapeRough = 0x18; // CUtlString
                constexpr std::ptrdiff_t m_bulletImpact = 0x20; // CUtlString
                constexpr std::ptrdiff_t m_rolling = 0x28; // CUtlString
                constexpr std::ptrdiff_t m_break = 0x30; // CUtlString
                constexpr std::ptrdiff_t m_strain = 0x38; // CUtlString
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPhysSurfaceProperties {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_nameHash = 0x8; // uint32
                constexpr std::ptrdiff_t m_baseNameHash = 0xC; // uint32
                constexpr std::ptrdiff_t m_bHidden = 0x18; // bool
                constexpr std::ptrdiff_t m_description = 0x20; // CUtlString
                constexpr std::ptrdiff_t m_physics = 0x28; // CPhysSurfacePropertiesPhysics
                constexpr std::ptrdiff_t m_audioSounds = 0x48; // CPhysSurfacePropertiesSoundNames
                constexpr std::ptrdiff_t m_audioParams = 0x88; // CPhysSurfacePropertiesAudio
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVPhysXSurfacePropertiesList {
                constexpr std::ptrdiff_t m_surfacePropertiesList = 0x0; // CUtlVector<CPhysSurfaceProperties*>
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace MaterialGroup_t {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_materials = 0x8; // CUtlVector<CStrongHandle<InfoForResourceTypeIMaterial2>>
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace ModelSkeletonData_t {
                constexpr std::ptrdiff_t m_boneName = 0x0; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_nParent = 0x18; // CUtlVector<int16>
                constexpr std::ptrdiff_t m_boneSphere = 0x30; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_nFlag = 0x48; // CUtlVector<uint32>
                constexpr std::ptrdiff_t m_bonePosParent = 0x60; // CUtlVector<Vector>
                constexpr std::ptrdiff_t m_boneRotParent = 0x78; // CUtlVector<QuaternionStorage>
                constexpr std::ptrdiff_t m_boneScaleParent = 0x90; // CUtlVector<float32>
            }
            // Parent: None
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace PermModelInfo_t {
                constexpr std::ptrdiff_t m_nFlags = 0x0; // uint32
                constexpr std::ptrdiff_t m_vHullMin = 0x4; // Vector
                constexpr std::ptrdiff_t m_vHullMax = 0x10; // Vector
                constexpr std::ptrdiff_t m_vViewMin = 0x1C; // Vector
                constexpr std::ptrdiff_t m_vViewMax = 0x28; // Vector
                constexpr std::ptrdiff_t m_flMass = 0x34; // float32
                constexpr std::ptrdiff_t m_vEyePosition = 0x38; // Vector
                constexpr std::ptrdiff_t m_flMaxEyeDeflection = 0x44; // float32
                constexpr std::ptrdiff_t m_sSurfaceProperty = 0x48; // CUtlString
                constexpr std::ptrdiff_t m_keyValueText = 0x50; // CUtlString
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace PermModelExtPart_t {
                constexpr std::ptrdiff_t m_Transform = 0x0; // CTransform
                constexpr std::ptrdiff_t m_Name = 0x20; // CUtlString
                constexpr std::ptrdiff_t m_nParent = 0x28; // int32
                constexpr std::ptrdiff_t m_refModel = 0x30; // CStrongHandle<InfoForResourceTypeCModel>
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace ModelBoneFlexDriverControl_t {
                constexpr std::ptrdiff_t m_nBoneComponent = 0x0; // ModelBoneFlexComponent_t
                constexpr std::ptrdiff_t m_flexController = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_flexControllerToken = 0x10; // uint32
                constexpr std::ptrdiff_t m_flMin = 0x14; // float32
                constexpr std::ptrdiff_t m_flMax = 0x18; // float32
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace ModelBoneFlexDriver_t {
                constexpr std::ptrdiff_t m_boneName = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_boneNameToken = 0x8; // uint32
                constexpr std::ptrdiff_t m_controls = 0x10; // CUtlVector<ModelBoneFlexDriverControl_t>
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace PermModelDataAnimatedMaterialAttribute_t {
                constexpr std::ptrdiff_t m_AttributeName = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_nNumChannels = 0x8; // int32
            }
            // Parent: None
            // Fields count: 23
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace PermModelData_t {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_modelInfo = 0x8; // PermModelInfo_t
                constexpr std::ptrdiff_t m_ExtParts = 0x60; // CUtlVector<PermModelExtPart_t>
                constexpr std::ptrdiff_t m_refMeshes = 0x78; // CUtlVector<CStrongHandle<InfoForResourceTypeCRenderMesh>>
                constexpr std::ptrdiff_t m_refMeshGroupMasks = 0x90; // CUtlVector<uint64>
                constexpr std::ptrdiff_t m_refPhysGroupMasks = 0xA8; // CUtlVector<uint64>
                constexpr std::ptrdiff_t m_refLODGroupMasks = 0xC0; // CUtlVector<uint8>
                constexpr std::ptrdiff_t m_lodGroupSwitchDistances = 0xD8; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_refPhysicsData = 0xF0; // CUtlVector<CStrongHandle<InfoForResourceTypeCPhysAggregateData>>
                constexpr std::ptrdiff_t m_refPhysicsHitboxData = 0x108; // CUtlVector<CStrongHandle<InfoForResourceTypeCPhysAggregateData>>
                constexpr std::ptrdiff_t m_refAnimGroups = 0x120; // CUtlVector<CStrongHandle<InfoForResourceTypeCAnimationGroup>>
                constexpr std::ptrdiff_t m_refSequenceGroups = 0x138; // CUtlVector<CStrongHandle<InfoForResourceTypeCSequenceGroupData>>
                constexpr std::ptrdiff_t m_meshGroups = 0x150; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_materialGroups = 0x168; // CUtlVector<MaterialGroup_t>
                constexpr std::ptrdiff_t m_nDefaultMeshGroupMask = 0x180; // uint64
                constexpr std::ptrdiff_t m_modelSkeleton = 0x188; // ModelSkeletonData_t
                constexpr std::ptrdiff_t m_remappingTable = 0x230; // CUtlVector<int16>
                constexpr std::ptrdiff_t m_remappingTableStarts = 0x248; // CUtlVector<uint16>
                constexpr std::ptrdiff_t m_boneFlexDrivers = 0x260; // CUtlVector<ModelBoneFlexDriver_t>
                constexpr std::ptrdiff_t m_pModelConfigList = 0x278; // CModelConfigList*
                constexpr std::ptrdiff_t m_BodyGroupsHiddenInTools = 0x280; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_refAnimIncludeModels = 0x298; // CUtlVector<CStrongHandle<InfoForResourceTypeCModel>>
                constexpr std::ptrdiff_t m_AnimatedMaterialAttributes = 0x2B0; // CUtlVector<PermModelDataAnimatedMaterialAttribute_t>
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModelConfigElement {
                constexpr std::ptrdiff_t m_ElementName = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_NestedElements = 0x10; // CUtlVector<CModelConfigElement*>
            }
            // Parent: CModelConfigElement
            // Fields count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModelConfigElement_AttachedModel {
                constexpr std::ptrdiff_t m_InstanceName = 0x48; // CUtlString
                constexpr std::ptrdiff_t m_EntityClass = 0x50; // CUtlString
                constexpr std::ptrdiff_t m_hModel = 0x58; // CStrongHandle<InfoForResourceTypeCModel>
                constexpr std::ptrdiff_t m_vOffset = 0x60; // Vector
                constexpr std::ptrdiff_t m_aAngOffset = 0x6C; // QAngle
                constexpr std::ptrdiff_t m_AttachmentName = 0x78; // CUtlString
                constexpr std::ptrdiff_t m_LocalAttachmentOffsetName = 0x80; // CUtlString
                constexpr std::ptrdiff_t m_AttachmentType = 0x88; // ModelConfigAttachmentType_t
                constexpr std::ptrdiff_t m_bBoneMergeFlex = 0x8C; // bool
                constexpr std::ptrdiff_t m_bUserSpecifiedColor = 0x8D; // bool
                constexpr std::ptrdiff_t m_bUserSpecifiedMaterialGroup = 0x8E; // bool
                constexpr std::ptrdiff_t m_bAcceptParentMaterialDrivenDecals = 0x8F; // bool
                constexpr std::ptrdiff_t m_BodygroupOnOtherModels = 0x90; // CUtlString
                constexpr std::ptrdiff_t m_MaterialGroupOnOtherModels = 0x98; // CUtlString
            }
            // Parent: CModelConfigElement
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModelConfigElement_UserPick {
                constexpr std::ptrdiff_t m_Choices = 0x48; // CUtlVector<CUtlString>
            }
            // Parent: CModelConfigElement
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModelConfigElement_RandomPick {
                constexpr std::ptrdiff_t m_Choices = 0x48; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_ChoiceWeights = 0x60; // CUtlVector<float32>
            }
            // Parent: CModelConfigElement
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModelConfigElement_SetMaterialGroup {
                constexpr std::ptrdiff_t m_MaterialGroupName = 0x48; // CUtlString
            }
            // Parent: CModelConfigElement
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModelConfigElement_SetMaterialGroupOnAttachedModels {
                constexpr std::ptrdiff_t m_MaterialGroupName = 0x48; // CUtlString
            }
            // Parent: CModelConfigElement
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModelConfigElement_SetRenderColor {
                constexpr std::ptrdiff_t m_Color = 0x48; // Color
            }
            // Parent: CModelConfigElement
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModelConfigElement_RandomColor {
                constexpr std::ptrdiff_t m_Gradient = 0x48; // CColorGradient
            }
            // Parent: CModelConfigElement
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModelConfigElement_SetBodygroup {
                constexpr std::ptrdiff_t m_GroupName = 0x48; // CUtlString
                constexpr std::ptrdiff_t m_nChoice = 0x50; // int32
            }
            // Parent: CModelConfigElement
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModelConfigElement_SetBodygroupOnAttachedModels {
                constexpr std::ptrdiff_t m_GroupName = 0x48; // CUtlString
                constexpr std::ptrdiff_t m_nChoice = 0x50; // int32
            }
            // Parent: CModelConfigElement
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModelConfigElement_Command {
                constexpr std::ptrdiff_t m_Command = 0x48; // CUtlString
                constexpr std::ptrdiff_t m_Args = 0x50; // KeyValues3
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModelConfig {
                constexpr std::ptrdiff_t m_ConfigName = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_Elements = 0x8; // CUtlVector<CModelConfigElement*>
                constexpr std::ptrdiff_t m_bTopLevel = 0x20; // bool
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModelConfigList {
                constexpr std::ptrdiff_t m_bHideMaterialGroupInTools = 0x0; // bool
                constexpr std::ptrdiff_t m_bHideRenderColorInTools = 0x1; // bool
                constexpr std::ptrdiff_t m_Configs = 0x8; // CUtlVector<CModelConfig*>
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CRenderBufferBinding {
                constexpr std::ptrdiff_t m_hBuffer = 0x0; // uint64
                constexpr std::ptrdiff_t m_nBindOffsetBytes = 0x10; // uint32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace SkeletonBoneBounds_t {
                constexpr std::ptrdiff_t m_vecCenter = 0x0; // Vector
                constexpr std::ptrdiff_t m_vecSize = 0xC; // Vector
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace RenderSkeletonBone_t {
                constexpr std::ptrdiff_t m_boneName = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_parentName = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_invBindPose = 0x10; // matrix3x4_t
                constexpr std::ptrdiff_t m_bbox = 0x40; // SkeletonBoneBounds_t
                constexpr std::ptrdiff_t m_flSphereRadius = 0x58; // float32
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CRenderSkeleton {
                constexpr std::ptrdiff_t m_bones = 0x0; // CUtlVector<RenderSkeletonBone_t>
                constexpr std::ptrdiff_t m_boneParents = 0x30; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_nBoneWeightCount = 0x48; // int32
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CDrawCullingData {
                constexpr std::ptrdiff_t m_vConeApex = 0x0; // Vector
                constexpr std::ptrdiff_t m_ConeAxis = 0xC; // int8[3]
                constexpr std::ptrdiff_t m_ConeCutoff = 0xF; // int8
            }
            // Parent: None
            // Fields count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CMaterialDrawDescriptor {
                constexpr std::ptrdiff_t m_nPrimitiveType = 0x0; // RenderPrimitiveType_t
                constexpr std::ptrdiff_t m_nBaseVertex = 0x4; // int32
                constexpr std::ptrdiff_t m_nVertexCount = 0x8; // int32
                constexpr std::ptrdiff_t m_nStartIndex = 0xC; // int32
                constexpr std::ptrdiff_t m_nIndexCount = 0x10; // int32
                constexpr std::ptrdiff_t m_flUvDensity = 0x14; // float32
                constexpr std::ptrdiff_t m_vTintColor = 0x18; // Vector
                constexpr std::ptrdiff_t m_flAlpha = 0x24; // float32
                constexpr std::ptrdiff_t m_nFirstMeshlet = 0x2C; // uint32
                constexpr std::ptrdiff_t m_nNumMeshlets = 0x30; // uint16
                constexpr std::ptrdiff_t m_indexBuffer = 0xB8; // CRenderBufferBinding
                constexpr std::ptrdiff_t m_material = 0xE0; // CStrongHandle<InfoForResourceTypeIMaterial2>
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CMeshletDescriptor {
                constexpr std::ptrdiff_t m_PackedAABB = 0x0; // PackedAABB_t
                constexpr std::ptrdiff_t m_CullingData = 0x8; // CDrawCullingData
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSceneObjectData {
                constexpr std::ptrdiff_t m_vMinBounds = 0x0; // Vector
                constexpr std::ptrdiff_t m_vMaxBounds = 0xC; // Vector
                constexpr std::ptrdiff_t m_drawCalls = 0x18; // CUtlVector<CMaterialDrawDescriptor>
                constexpr std::ptrdiff_t m_drawBounds = 0x30; // CUtlVector<AABB_t>
                constexpr std::ptrdiff_t m_meshlets = 0x48; // CUtlVector<CMeshletDescriptor>
                constexpr std::ptrdiff_t m_vTintColor = 0x60; // Vector4D
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAttachment {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_influenceNames = 0x8; // CUtlString[3]
                constexpr std::ptrdiff_t m_vInfluenceRotations = 0x20; // Quaternion[3]
                constexpr std::ptrdiff_t m_vInfluenceOffsets = 0x50; // Vector[3]
                constexpr std::ptrdiff_t m_influenceWeights = 0x74; // float32[3]
                constexpr std::ptrdiff_t m_bInfluenceRootTransform = 0x80; // bool[3]
                constexpr std::ptrdiff_t m_nInfluences = 0x83; // uint8
                constexpr std::ptrdiff_t m_bIgnoreRotation = 0x84; // bool
            }
            // Parent: None
            // Fields count: 13
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CHitBox {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_sSurfaceProperty = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_sBoneName = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_vMinBounds = 0x18; // Vector
                constexpr std::ptrdiff_t m_vMaxBounds = 0x24; // Vector
                constexpr std::ptrdiff_t m_flShapeRadius = 0x30; // float32
                constexpr std::ptrdiff_t m_nBoneNameHash = 0x34; // uint32
                constexpr std::ptrdiff_t m_nGroupId = 0x38; // int32
                constexpr std::ptrdiff_t m_nShapeType = 0x3C; // uint8
                constexpr std::ptrdiff_t m_bTranslationOnly = 0x3D; // bool
                constexpr std::ptrdiff_t m_CRC = 0x40; // uint32
                constexpr std::ptrdiff_t m_cRenderColor = 0x44; // Color
                constexpr std::ptrdiff_t m_nHitBoxIndex = 0x48; // uint16
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CHitBoxSet {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_nNameHash = 0x8; // uint32
                constexpr std::ptrdiff_t m_HitBoxes = 0x10; // CUtlVector<CHitBox>
                constexpr std::ptrdiff_t m_SourceFilename = 0x28; // CUtlString
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CHitBoxSetList {
                constexpr std::ptrdiff_t m_HitBoxSets = 0x0; // CUtlVector<CHitBoxSet>
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace DynamicMeshDeformParams_t {
                constexpr std::ptrdiff_t m_flTensionCompressScale = 0x0; // float32
                constexpr std::ptrdiff_t m_flTensionStretchScale = 0x4; // float32
                constexpr std::ptrdiff_t m_bRecomputeSmoothNormalsAfterAnimation = 0x8; // bool
                constexpr std::ptrdiff_t m_bComputeDynamicMeshTensionAfterAnimation = 0x9; // bool
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace RenderHairStrandInfo_t {
                constexpr std::ptrdiff_t m_nGuideIdx = 0x0; // uint32[3]
                constexpr std::ptrdiff_t m_nBaseTriIdx = 0xC; // uint32
                constexpr std::ptrdiff_t m_vGuideBarycentric = 0x10; // Vector2D
                constexpr std::ptrdiff_t m_vBaseBarycentric = 0x18; // Vector2D
                constexpr std::ptrdiff_t m_vRootOffset_flLengthScale = 0x20; // uint16[4]
                constexpr std::ptrdiff_t m_nPackedBaseMeshUv = 0x28; // uint32
                constexpr std::ptrdiff_t m_nPad = 0x2C; // uint32
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CRenderGroom {
                constexpr std::ptrdiff_t m_nSegmentsPerHairStrand = 0x0; // int32
                constexpr std::ptrdiff_t m_nGuideHairCount = 0x4; // int32
                constexpr std::ptrdiff_t m_nHairCount = 0x8; // int32
                constexpr std::ptrdiff_t m_nGroomGroupID = 0xC; // int32
                constexpr std::ptrdiff_t m_nAttachBoneIdx = 0x10; // int32
                constexpr std::ptrdiff_t m_hairInfoBufferData = 0x18; // CUtlBinaryBlock
                constexpr std::ptrdiff_t m_hairs = 0x30; // CUtlVector<RenderHairStrandInfo_t>
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CRenderMesh {
                constexpr std::ptrdiff_t m_sceneObjects = 0x10; // CUtlVectorFixedGrowable<CSceneObjectData>
                constexpr std::ptrdiff_t m_constraints = 0xA0; // CUtlVector<CBaseConstraint*>
                constexpr std::ptrdiff_t m_skeleton = 0xB8; // CRenderSkeleton
                constexpr std::ptrdiff_t m_meshDeformParams = 0x1E0; // DynamicMeshDeformParams_t
                constexpr std::ptrdiff_t m_pGroomData = 0x1F0; // CRenderGroom*
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CConstraintTarget {
                constexpr std::ptrdiff_t m_qOffset = 0x20; // Quaternion
                constexpr std::ptrdiff_t m_vOffset = 0x30; // Vector
                constexpr std::ptrdiff_t m_nBoneHash = 0x3C; // uint32
                constexpr std::ptrdiff_t m_sName = 0x40; // CUtlString
                constexpr std::ptrdiff_t m_flWeight = 0x48; // float32
                constexpr std::ptrdiff_t m_bIsAttachment = 0x59; // bool
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CConstraintSlave {
                constexpr std::ptrdiff_t m_qBaseOrientation = 0x0; // Quaternion
                constexpr std::ptrdiff_t m_vBasePosition = 0x10; // Vector
                constexpr std::ptrdiff_t m_nBoneHash = 0x1C; // uint32
                constexpr std::ptrdiff_t m_flWeight = 0x20; // float32
                constexpr std::ptrdiff_t m_sName = 0x28; // CUtlString
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CBoneConstraintBase {
            }
            // Parent: CBoneConstraintBase
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CBaseConstraint {
                constexpr std::ptrdiff_t m_name = 0x28; // CUtlString
                constexpr std::ptrdiff_t m_vUpVector = 0x30; // Vector
                constexpr std::ptrdiff_t m_slaves = 0x40; // CUtlVector<CConstraintSlave>
                constexpr std::ptrdiff_t m_targets = 0x58; // CUtlVector<CConstraintTarget>
            }
            // Parent: CBaseConstraint
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPointConstraint {
            }
            // Parent: CBaseConstraint
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace COrientConstraint {
            }
            // Parent: CBaseConstraint
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAimConstraint {
                constexpr std::ptrdiff_t m_qAimOffset = 0x70; // Quaternion
                constexpr std::ptrdiff_t m_nUpType = 0x80; // uint32
            }
            // Parent: CBaseConstraint
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CTwistConstraint {
                constexpr std::ptrdiff_t m_bInverse = 0x70; // bool
                constexpr std::ptrdiff_t m_qParentBindRotation = 0x80; // Quaternion
                constexpr std::ptrdiff_t m_qChildBindRotation = 0x90; // Quaternion
            }
            // Parent: CBaseConstraint
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CTiltTwistConstraint {
                constexpr std::ptrdiff_t m_nTargetAxis = 0x70; // int32
                constexpr std::ptrdiff_t m_nSlaveAxis = 0x74; // int32
            }
            // Parent: CBaseConstraint
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CMorphConstraint {
                constexpr std::ptrdiff_t m_sTargetMorph = 0x70; // CUtlString
                constexpr std::ptrdiff_t m_nSlaveChannel = 0x78; // int32
                constexpr std::ptrdiff_t m_flMin = 0x7C; // float32
                constexpr std::ptrdiff_t m_flMax = 0x80; // float32
            }
            // Parent: CBaseConstraint
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CParentConstraint {
            }
            // Parent: CBoneConstraintBase
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CBoneConstraintPoseSpaceMorph {
                constexpr std::ptrdiff_t m_sBoneName = 0x28; // CUtlString
                constexpr std::ptrdiff_t m_sAttachmentName = 0x30; // CUtlString
                constexpr std::ptrdiff_t m_outputMorph = 0x38; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_inputList = 0x50; // CUtlVector<CBoneConstraintPoseSpaceMorph::Input_t>
                constexpr std::ptrdiff_t m_bClamp = 0x68; // bool
            }
            // Parent: None
            // Fields count: 2
            namespace CBoneConstraintPoseSpaceMorph__Input_t {
                constexpr std::ptrdiff_t m_inputValue = 0x0; // Vector
                constexpr std::ptrdiff_t m_outputWeightList = 0x10; // CUtlVector<float32>
            }
            // Parent: CBaseConstraint
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CBoneConstraintPoseSpaceBone {
                constexpr std::ptrdiff_t m_inputList = 0x70; // CUtlVector<CBoneConstraintPoseSpaceBone::Input_t>
            }
            // Parent: None
            // Fields count: 2
            namespace CBoneConstraintPoseSpaceBone__Input_t {
                constexpr std::ptrdiff_t m_inputValue = 0x0; // Vector
                constexpr std::ptrdiff_t m_outputTransformList = 0x10; // CUtlVector<CTransform>
            }
            // Parent: CBoneConstraintBase
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CBoneConstraintDotToMorph {
                constexpr std::ptrdiff_t m_sBoneName = 0x28; // CUtlString
                constexpr std::ptrdiff_t m_sTargetBoneName = 0x30; // CUtlString
                constexpr std::ptrdiff_t m_sMorphChannelName = 0x38; // CUtlString
                constexpr std::ptrdiff_t m_flRemap = 0x40; // float32[4]
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CFlexOp {
                constexpr std::ptrdiff_t m_OpCode = 0x0; // FlexOpCode_t
                constexpr std::ptrdiff_t m_Data = 0x4; // int32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CFlexRule {
                constexpr std::ptrdiff_t m_nFlex = 0x0; // int32
                constexpr std::ptrdiff_t m_FlexOps = 0x8; // CUtlVector<CFlexOp>
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CFlexDesc {
                constexpr std::ptrdiff_t m_szFacs = 0x0; // CUtlString
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CFlexController {
                constexpr std::ptrdiff_t m_szName = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_szType = 0x8; // CUtlString
                constexpr std::ptrdiff_t min = 0x10; // float32
                constexpr std::ptrdiff_t max = 0x14; // float32
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CMorphBundleData {
                constexpr std::ptrdiff_t m_flULeftSrc = 0x0; // float32
                constexpr std::ptrdiff_t m_flVTopSrc = 0x4; // float32
                constexpr std::ptrdiff_t m_offsets = 0x8; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_ranges = 0x20; // CUtlVector<float32>
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CMorphRectData {
                constexpr std::ptrdiff_t m_nXLeftDst = 0x0; // int16
                constexpr std::ptrdiff_t m_nYTopDst = 0x2; // int16
                constexpr std::ptrdiff_t m_flUWidthSrc = 0x4; // float32
                constexpr std::ptrdiff_t m_flVHeightSrc = 0x8; // float32
                constexpr std::ptrdiff_t m_bundleDatas = 0x10; // CUtlVector<CMorphBundleData>
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CMorphData {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_morphRectDatas = 0x8; // CUtlVector<CMorphRectData>
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CMorphSetData {
                constexpr std::ptrdiff_t m_nWidth = 0xC; // int32
                constexpr std::ptrdiff_t m_nHeight = 0x10; // int32
                constexpr std::ptrdiff_t m_bundleTypes = 0x18; // CUtlVector<MorphBundleType_t>
                constexpr std::ptrdiff_t m_morphDatas = 0x30; // CUtlVector<CMorphData>
                constexpr std::ptrdiff_t m_pTextureAtlas = 0x48; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_FlexDesc = 0x50; // CUtlVector<CFlexDesc>
                constexpr std::ptrdiff_t m_FlexControllers = 0x68; // CUtlVector<CFlexController>
                constexpr std::ptrdiff_t m_FlexRules = 0x80; // CUtlVector<CFlexRule>
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimFoot {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_vBallOffset = 0x8; // Vector
                constexpr std::ptrdiff_t m_vHeelOffset = 0x14; // Vector
                constexpr std::ptrdiff_t m_ankleBoneIndex = 0x20; // int32
                constexpr std::ptrdiff_t m_toeBoneIndex = 0x24; // int32
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimSkeleton {
                constexpr std::ptrdiff_t m_localSpaceTransforms = 0x10; // CUtlVector<CTransform>
                constexpr std::ptrdiff_t m_modelSpaceTransforms = 0x28; // CUtlVector<CTransform>
                constexpr std::ptrdiff_t m_boneNames = 0x40; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_children = 0x58; // CUtlVector<CUtlVector<int32>>
                constexpr std::ptrdiff_t m_parents = 0x70; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_feet = 0x88; // CUtlVector<CAnimFoot>
                constexpr std::ptrdiff_t m_morphNames = 0xA0; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_lodBoneCounts = 0xB8; // CUtlVector<int32>
            }
            // Parent: None
            // Fields count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CFootDefinition {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_ankleBoneName = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_toeBoneName = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_vBallOffset = 0x18; // Vector
                constexpr std::ptrdiff_t m_vHeelOffset = 0x24; // Vector
                constexpr std::ptrdiff_t m_flFootLength = 0x30; // float32
                constexpr std::ptrdiff_t m_flBindPoseDirectionMS = 0x34; // float32
                constexpr std::ptrdiff_t m_flTraceHeight = 0x38; // float32
                constexpr std::ptrdiff_t m_flTraceRadius = 0x3C; // float32
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCycleBase {
                constexpr std::ptrdiff_t m_flCycle = 0x0; // float32
            }
            // Parent: CCycleBase
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimCycle {
            }
            // Parent: CCycleBase
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CFootCycle {
            }
            // Parent: None
            // Fields count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CFootCycleDefinition {
                constexpr std::ptrdiff_t m_vStancePositionMS = 0x0; // Vector
                constexpr std::ptrdiff_t m_vMidpointPositionMS = 0xC; // Vector
                constexpr std::ptrdiff_t m_flStanceDirectionMS = 0x18; // float32
                constexpr std::ptrdiff_t m_vToStrideStartPos = 0x1C; // Vector
                constexpr std::ptrdiff_t m_stanceCycle = 0x28; // CAnimCycle
                constexpr std::ptrdiff_t m_footLiftCycle = 0x2C; // CFootCycle
                constexpr std::ptrdiff_t m_footOffCycle = 0x30; // CFootCycle
                constexpr std::ptrdiff_t m_footStrikeCycle = 0x34; // CFootCycle
                constexpr std::ptrdiff_t m_footLandCycle = 0x38; // CFootCycle
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CFootTrajectory {
                constexpr std::ptrdiff_t m_vOffset = 0x0; // Vector
                constexpr std::ptrdiff_t m_flRotationOffset = 0xC; // float32
                constexpr std::ptrdiff_t m_flProgression = 0x10; // float32
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CFootTrajectories {
                constexpr std::ptrdiff_t m_trajectories = 0x0; // CUtlVector<CFootTrajectory>
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CFootStride {
                constexpr std::ptrdiff_t m_definition = 0x0; // CFootCycleDefinition
                constexpr std::ptrdiff_t m_trajectories = 0x40; // CFootTrajectories
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CFootMotion {
                constexpr std::ptrdiff_t m_strides = 0x0; // CUtlVector<CFootStride>
                constexpr std::ptrdiff_t m_name = 0x18; // CUtlString
                constexpr std::ptrdiff_t m_bAdditive = 0x20; // bool
            }
            // Parent: None
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace SkeletonAnimCapture_t {
                constexpr std::ptrdiff_t m_nEntIndex = 0x0; // CEntityIndex
                constexpr std::ptrdiff_t m_nEntParent = 0x4; // CEntityIndex
                constexpr std::ptrdiff_t m_ImportedCollision = 0x8; // CUtlVector<CEntityIndex>
                constexpr std::ptrdiff_t m_ModelName = 0x20; // CUtlString
                constexpr std::ptrdiff_t m_CaptureName = 0x28; // CUtlString
                constexpr std::ptrdiff_t m_ModelBindPose = 0x30; // CUtlVector<SkeletonAnimCapture_t::Bone_t>
                constexpr std::ptrdiff_t m_FeModelInitPose = 0x48; // CUtlVector<SkeletonAnimCapture_t::Bone_t>
                constexpr std::ptrdiff_t m_nFlexControllers = 0x60; // int32
                constexpr std::ptrdiff_t m_bPredicted = 0x64; // bool
                constexpr std::ptrdiff_t m_Frames = 0xA8; // CUtlVector<SkeletonAnimCapture_t::Frame_t>
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace SkeletonAnimCapture_t__Bone_t {
                constexpr std::ptrdiff_t m_Name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_BindPose = 0x10; // CTransform
                constexpr std::ptrdiff_t m_nParent = 0x30; // int32
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace SkeletonAnimCapture_t__FrameStamp_t {
                constexpr std::ptrdiff_t m_flTime = 0x0; // float32
                constexpr std::ptrdiff_t m_flEntitySimTime = 0x4; // float32
                constexpr std::ptrdiff_t m_bTeleportTick = 0x8; // bool
                constexpr std::ptrdiff_t m_bPredicted = 0x9; // bool
                constexpr std::ptrdiff_t m_flCurTime = 0xC; // float32
                constexpr std::ptrdiff_t m_flRealTime = 0x10; // float32
                constexpr std::ptrdiff_t m_nFrameCount = 0x14; // int32
                constexpr std::ptrdiff_t m_nTickCount = 0x18; // int32
            }
            // Parent: None
            // Fields count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace SkeletonAnimCapture_t__Frame_t {
                constexpr std::ptrdiff_t m_flTime = 0x0; // float32
                constexpr std::ptrdiff_t m_Stamp = 0x4; // SkeletonAnimCapture_t::FrameStamp_t
                constexpr std::ptrdiff_t m_Transform = 0x20; // CTransform
                constexpr std::ptrdiff_t m_bTeleport = 0x40; // bool
                constexpr std::ptrdiff_t m_CompositeBones = 0x48; // CUtlVector<CTransform>
                constexpr std::ptrdiff_t m_SimStateBones = 0x60; // CUtlVector<CTransform>
                constexpr std::ptrdiff_t m_FeModelAnims = 0x78; // CUtlVector<CTransform>
                constexpr std::ptrdiff_t m_FeModelPos = 0x90; // CUtlVector<VectorAligned>
                constexpr std::ptrdiff_t m_FlexControllerWeights = 0xA8; // CUtlVector<float32>
            }
        }
        // Module: libclient.so
        // Classes count: 256
        // Enums count: 0
        namespace libclient {
            // Parent: None
            // Fields count: 0
            namespace CEntityComponent {
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
            // NetworkVarNames: m_pEntity (CEntityIdentity *)
            // NetworkVarNames: m_CScriptComponent (CScriptComponent::Storage_t)
            namespace CEntityInstance {
                constexpr std::ptrdiff_t m_iszPrivateVScripts = 0x8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_pEntity = 0x10; // CEntityIdentity*
                constexpr std::ptrdiff_t m_CScriptComponent = 0x28; // CScriptComponent*
                constexpr std::ptrdiff_t m_bVisibleinPVS = 0x30; // bool
            }
            // Parent: CEntityComponent
            // Fields count: 1
            namespace CScriptComponent {
                constexpr std::ptrdiff_t m_scriptClassName = 0x30; // CUtlSymbolLarge
            }
            // Parent: CEntityComponent
            // Fields count: 2
            namespace CBodyComponent {
                constexpr std::ptrdiff_t m_pSceneNode = 0x8; // CGameSceneNode*
                constexpr std::ptrdiff_t __m_pChainEntity = 0x28; // CNetworkVarChainer
            }
            // Parent: CBodyComponent
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_sceneNode (CGameSceneNode)
            namespace CBodyComponentPoint {
                constexpr std::ptrdiff_t m_sceneNode = 0x60; // CGameSceneNode
                constexpr std::ptrdiff_t __m_pChainEntity = 0x1C0; // CNetworkVarChainer
            }
            // Parent: CBodyComponent
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_skeletonInstance (CSkeletonInstance)
            namespace CBodyComponentSkeletonInstance {
                constexpr std::ptrdiff_t m_skeletonInstance = 0x60; // CSkeletonInstance
                constexpr std::ptrdiff_t __m_pChainEntity = 0x450; // CNetworkVarChainer
            }
            // Parent: CEntityComponent
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_bvDisabledHitGroups (uint32)
            namespace CHitboxComponent {
                constexpr std::ptrdiff_t m_bvDisabledHitGroups = 0x24; // uint32[1]
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
            namespace CLightComponent {
                constexpr std::ptrdiff_t __m_pChainEntity = 0x58; // CNetworkVarChainer
                constexpr std::ptrdiff_t m_Color = 0x95; // Color
                constexpr std::ptrdiff_t m_SecondaryColor = 0x99; // Color
                constexpr std::ptrdiff_t m_flBrightness = 0xA0; // float32
                constexpr std::ptrdiff_t m_flBrightnessScale = 0xA4; // float32
                constexpr std::ptrdiff_t m_flBrightnessMult = 0xA8; // float32
                constexpr std::ptrdiff_t m_flRange = 0xAC; // float32
                constexpr std::ptrdiff_t m_flFalloff = 0xB0; // float32
                constexpr std::ptrdiff_t m_flAttenuation0 = 0xB4; // float32
                constexpr std::ptrdiff_t m_flAttenuation1 = 0xB8; // float32
                constexpr std::ptrdiff_t m_flAttenuation2 = 0xBC; // float32
                constexpr std::ptrdiff_t m_flTheta = 0xC0; // float32
                constexpr std::ptrdiff_t m_flPhi = 0xC4; // float32
                constexpr std::ptrdiff_t m_hLightCookie = 0xC8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_nCascades = 0xD0; // int32
                constexpr std::ptrdiff_t m_nCastShadows = 0xD4; // int32
                constexpr std::ptrdiff_t m_nShadowWidth = 0xD8; // int32
                constexpr std::ptrdiff_t m_nShadowHeight = 0xDC; // int32
                constexpr std::ptrdiff_t m_bRenderDiffuse = 0xE0; // bool
                constexpr std::ptrdiff_t m_nRenderSpecular = 0xE4; // int32
                constexpr std::ptrdiff_t m_bRenderTransmissive = 0xE8; // bool
                constexpr std::ptrdiff_t m_flOrthoLightWidth = 0xEC; // float32
                constexpr std::ptrdiff_t m_flOrthoLightHeight = 0xF0; // float32
                constexpr std::ptrdiff_t m_nStyle = 0xF4; // int32
                constexpr std::ptrdiff_t m_Pattern = 0xF8; // CUtlString
                constexpr std::ptrdiff_t m_nCascadeRenderStaticObjects = 0x100; // int32
                constexpr std::ptrdiff_t m_flShadowCascadeCrossFade = 0x104; // float32
                constexpr std::ptrdiff_t m_flShadowCascadeDistanceFade = 0x108; // float32
                constexpr std::ptrdiff_t m_flShadowCascadeDistance0 = 0x10C; // float32
                constexpr std::ptrdiff_t m_flShadowCascadeDistance1 = 0x110; // float32
                constexpr std::ptrdiff_t m_flShadowCascadeDistance2 = 0x114; // float32
                constexpr std::ptrdiff_t m_flShadowCascadeDistance3 = 0x118; // float32
                constexpr std::ptrdiff_t m_nShadowCascadeResolution0 = 0x11C; // int32
                constexpr std::ptrdiff_t m_nShadowCascadeResolution1 = 0x120; // int32
                constexpr std::ptrdiff_t m_nShadowCascadeResolution2 = 0x124; // int32
                constexpr std::ptrdiff_t m_nShadowCascadeResolution3 = 0x128; // int32
                constexpr std::ptrdiff_t m_bUsesBakedShadowing = 0x12C; // bool
                constexpr std::ptrdiff_t m_nShadowPriority = 0x130; // int32
                constexpr std::ptrdiff_t m_nBakedShadowIndex = 0x134; // int32
                constexpr std::ptrdiff_t m_bRenderToCubemaps = 0x138; // bool
                constexpr std::ptrdiff_t m_nDirectLight = 0x13C; // int32
                constexpr std::ptrdiff_t m_nIndirectLight = 0x140; // int32
                constexpr std::ptrdiff_t m_flFadeMinDist = 0x144; // float32
                constexpr std::ptrdiff_t m_flFadeMaxDist = 0x148; // float32
                constexpr std::ptrdiff_t m_flShadowFadeMinDist = 0x14C; // float32
                constexpr std::ptrdiff_t m_flShadowFadeMaxDist = 0x150; // float32
                constexpr std::ptrdiff_t m_bEnabled = 0x154; // bool
                constexpr std::ptrdiff_t m_bFlicker = 0x155; // bool
                constexpr std::ptrdiff_t m_bPrecomputedFieldsValid = 0x156; // bool
                constexpr std::ptrdiff_t m_vPrecomputedBoundsMins = 0x158; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedBoundsMaxs = 0x164; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin = 0x170; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles = 0x17C; // QAngle
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent = 0x188; // Vector
                constexpr std::ptrdiff_t m_flPrecomputedMaxRange = 0x194; // float32
                constexpr std::ptrdiff_t m_nFogLightingMode = 0x198; // int32
                constexpr std::ptrdiff_t m_flFogContributionStength = 0x19C; // float32
                constexpr std::ptrdiff_t m_flNearClipPlane = 0x1A0; // float32
                constexpr std::ptrdiff_t m_SkyColor = 0x1A4; // Color
                constexpr std::ptrdiff_t m_flSkyIntensity = 0x1A8; // float32
                constexpr std::ptrdiff_t m_SkyAmbientBounce = 0x1AC; // Color
                constexpr std::ptrdiff_t m_bUseSecondaryColor = 0x1B0; // bool
                constexpr std::ptrdiff_t m_bMixedShadows = 0x1B1; // bool
                constexpr std::ptrdiff_t m_flLightStyleStartTime = 0x1B4; // GameTime_t
                constexpr std::ptrdiff_t m_flCapsuleLength = 0x1B8; // float32
                constexpr std::ptrdiff_t m_flMinRoughness = 0x1BC; // float32
            }
            // Parent: CEntityComponent
            // Fields count: 5
            namespace CRenderComponent {
                constexpr std::ptrdiff_t __m_pChainEntity = 0x10; // CNetworkVarChainer
                constexpr std::ptrdiff_t m_bIsRenderingWithViewModels = 0x50; // bool
                constexpr std::ptrdiff_t m_nSplitscreenFlags = 0x54; // uint32
                constexpr std::ptrdiff_t m_bEnableRendering = 0x60; // bool
                constexpr std::ptrdiff_t m_bInterpolationReadyToDraw = 0xC0; // bool
            }
            // Parent: None
            // Fields count: 1
            namespace CBuoyancyHelper {
                constexpr std::ptrdiff_t m_flFluidDensity = 0x18; // float32
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            namespace CBasePlayerControllerAPI {
            }
            // Parent: None
            // Fields count: 2
            namespace C_CommandContext {
                constexpr std::ptrdiff_t needsprocessing = 0x0; // bool
                constexpr std::ptrdiff_t command_number = 0x90; // int32
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // NetworkVarNames: nType (FixAngleSet_t)
            // NetworkVarNames: qAngle (QAngle)
            // NetworkVarNames: nIndex (uint32)
            namespace ViewAngleServerChange_t {
                constexpr std::ptrdiff_t nType = 0x30; // FixAngleSet_t
                constexpr std::ptrdiff_t qAngle = 0x34; // QAngle
                constexpr std::ptrdiff_t nIndex = 0x40; // uint32
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            namespace CDynamicPropAPI {
            }
            // Parent: CPlayerPawnComponent
            // Fields count: 0
            namespace CPlayer_AutoaimServices {
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
            namespace audioparams_t {
                constexpr std::ptrdiff_t localSound = 0x8; // Vector[8]
                constexpr std::ptrdiff_t soundscapeIndex = 0x68; // int32
                constexpr std::ptrdiff_t localBits = 0x6C; // uint8
                constexpr std::ptrdiff_t soundscapeEntityListIndex = 0x70; // int32
                constexpr std::ptrdiff_t soundEventHash = 0x74; // uint32
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
            namespace CPlayer_CameraServices {
                constexpr std::ptrdiff_t m_vecCsViewPunchAngle = 0x40; // QAngle
                constexpr std::ptrdiff_t m_nCsViewPunchAngleTick = 0x4C; // GameTick_t
                constexpr std::ptrdiff_t m_flCsViewPunchAngleTickRatio = 0x50; // float32
                constexpr std::ptrdiff_t m_PlayerFog = 0x58; // C_fogplayerparams_t
                constexpr std::ptrdiff_t m_hColorCorrectionCtrl = 0x98; // CHandle<C_ColorCorrection>
                constexpr std::ptrdiff_t m_hViewEntity = 0x9C; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_hTonemapController = 0xA0; // CHandle<C_TonemapController2>
                constexpr std::ptrdiff_t m_audio = 0xA8; // audioparams_t
                constexpr std::ptrdiff_t m_PostProcessingVolumes = 0x120; // C_NetworkUtlVectorBase<CHandle<C_PostProcessingVolume>>
                constexpr std::ptrdiff_t m_flOldPlayerZ = 0x138; // float32
                constexpr std::ptrdiff_t m_flOldPlayerViewOffsetZ = 0x13C; // float32
                constexpr std::ptrdiff_t m_CurrentFog = 0x140; // fogparams_t
                constexpr std::ptrdiff_t m_hOldFogController = 0x1A8; // CHandle<C_FogController>
                constexpr std::ptrdiff_t m_bOverrideFogColor = 0x1AC; // bool[5]
                constexpr std::ptrdiff_t m_OverrideFogColor = 0x1B1; // Color[5]
                constexpr std::ptrdiff_t m_bOverrideFogStartEnd = 0x1C5; // bool[5]
                constexpr std::ptrdiff_t m_fOverrideFogStart = 0x1CC; // float32[5]
                constexpr std::ptrdiff_t m_fOverrideFogEnd = 0x1E0; // float32[5]
                constexpr std::ptrdiff_t m_hActivePostProcessingVolume = 0x1F4; // CHandle<C_PostProcessingVolume>
                constexpr std::ptrdiff_t m_angDemoViewAngles = 0x1F8; // QAngle
            }
            // Parent: CPlayerPawnComponent
            // Fields count: 0
            namespace CPlayer_FlashlightServices {
            }
            // Parent: CPlayerPawnComponent
            // Fields count: 0
            namespace CPlayer_ItemServices {
            }
            // Parent: CPlayerPawnComponent
            // Fields count: 15
            //
            // Metadata:
            // NetworkVarNames: m_nToggleButtonDownMask (ButtonBitMask_t)
            // NetworkVarNames: m_flMaxspeed (float32)
            // NetworkVarNames: m_arrForceSubtickMoveWhen (float32)
            namespace CPlayer_MovementServices {
                constexpr std::ptrdiff_t m_nImpulse = 0x40; // int32
                constexpr std::ptrdiff_t m_nButtons = 0x48; // CInButtonState
                constexpr std::ptrdiff_t m_nQueuedButtonDownMask = 0x68; // uint64
                constexpr std::ptrdiff_t m_nQueuedButtonChangeMask = 0x70; // uint64
                constexpr std::ptrdiff_t m_nButtonDoublePressed = 0x78; // uint64
                constexpr std::ptrdiff_t m_pButtonPressedCmdNumber = 0x80; // uint32[64]
                constexpr std::ptrdiff_t m_nLastCommandNumberProcessed = 0x180; // uint32
                constexpr std::ptrdiff_t m_nToggleButtonDownMask = 0x188; // uint64
                constexpr std::ptrdiff_t m_flMaxspeed = 0x198; // float32
                constexpr std::ptrdiff_t m_arrForceSubtickMoveWhen = 0x19C; // float32[4]
                constexpr std::ptrdiff_t m_flForwardMove = 0x1AC; // float32
                constexpr std::ptrdiff_t m_flLeftMove = 0x1B0; // float32
                constexpr std::ptrdiff_t m_flUpMove = 0x1B4; // float32
                constexpr std::ptrdiff_t m_vecLastMovementImpulses = 0x1B8; // Vector
                constexpr std::ptrdiff_t m_vecOldViewAngles = 0x1C4; // QAngle
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
            namespace CPlayer_MovementServices_Humanoid {
                constexpr std::ptrdiff_t m_flStepSoundTime = 0x1D8; // float32
                constexpr std::ptrdiff_t m_flFallVelocity = 0x1DC; // float32
                constexpr std::ptrdiff_t m_bInCrouch = 0x1E0; // bool
                constexpr std::ptrdiff_t m_nCrouchState = 0x1E4; // uint32
                constexpr std::ptrdiff_t m_flCrouchTransitionStartTime = 0x1E8; // GameTime_t
                constexpr std::ptrdiff_t m_bDucked = 0x1EC; // bool
                constexpr std::ptrdiff_t m_bDucking = 0x1ED; // bool
                constexpr std::ptrdiff_t m_bInDuckJump = 0x1EE; // bool
                constexpr std::ptrdiff_t m_groundNormal = 0x1F0; // Vector
                constexpr std::ptrdiff_t m_flSurfaceFriction = 0x1FC; // float32
                constexpr std::ptrdiff_t m_surfaceProps = 0x200; // CUtlStringToken
                constexpr std::ptrdiff_t m_nStepside = 0x210; // int32
            }
            // Parent: CPlayerPawnComponent
            // Fields count: 6
            //
            // Metadata:
            // NetworkVarNames: m_iObserverMode (uint8)
            // NetworkVarNames: m_hObserverTarget (CHandle< CBaseEntity>)
            namespace CPlayer_ObserverServices {
                constexpr std::ptrdiff_t m_iObserverMode = 0x40; // uint8
                constexpr std::ptrdiff_t m_hObserverTarget = 0x44; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_iObserverLastMode = 0x48; // ObserverMode_t
                constexpr std::ptrdiff_t m_bForcedObserverMode = 0x4C; // bool
                constexpr std::ptrdiff_t m_flObserverChaseDistance = 0x50; // float32
                constexpr std::ptrdiff_t m_flObserverChaseDistanceCalcTime = 0x54; // GameTime_t
            }
            // Parent: CPlayerPawnComponent
            // Fields count: 0
            namespace CPlayer_UseServices {
            }
            // Parent: CPlayerPawnComponent
            // Fields count: 0
            namespace CPlayer_WaterServices {
            }
            // Parent: CPlayerPawnComponent
            // Fields count: 4
            //
            // Metadata:
            // NetworkVarNames: m_hMyWeapons (CHandle< C_BasePlayerWeapon >)
            // NetworkVarNames: m_hActiveWeapon (CHandle< CBasePlayerWeapon>)
            // NetworkVarNames: m_hLastWeapon (CHandle< CBasePlayerWeapon>)
            // NetworkVarNames: m_iAmmo (uint16)
            namespace CPlayer_WeaponServices {
                constexpr std::ptrdiff_t m_hMyWeapons = 0x40; // C_NetworkUtlVectorBase<CHandle<C_BasePlayerWeapon>>
                constexpr std::ptrdiff_t m_hActiveWeapon = 0x58; // CHandle<C_BasePlayerWeapon>
                constexpr std::ptrdiff_t m_hLastWeapon = 0x5C; // CHandle<C_BasePlayerWeapon>
                constexpr std::ptrdiff_t m_iAmmo = 0x60; // uint16[32]
            }
            // Parent: CBodyComponentSkeletonInstance
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_animationController (CBaseAnimGraphController)
            namespace CBodyComponentBaseAnimGraph {
                constexpr std::ptrdiff_t m_animationController = 0x478; // CBaseAnimGraphController
                constexpr std::ptrdiff_t __m_pChainEntity = 0x1C68; // CNetworkVarChainer
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_ID (CUtlStringToken)
            // NetworkVarNames: m_Values (Vector4D)
            namespace EntityRenderAttribute_t {
                constexpr std::ptrdiff_t m_ID = 0x30; // CUtlStringToken
                constexpr std::ptrdiff_t m_Values = 0x34; // Vector4D
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // NetworkVarNames: m_Handle (ModelConfigHandle_t)
            // NetworkVarNames: m_Name (string_t)
            // NetworkVarNames: m_AssociatedEntities (CHandle< C_BaseModelEntity >)
            // NetworkVarNames: m_AssociatedEntityNames (string_t)
            namespace ActiveModelConfig_t {
                constexpr std::ptrdiff_t m_Handle = 0x28; // ModelConfigHandle_t
                constexpr std::ptrdiff_t m_Name = 0x30; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_AssociatedEntities = 0x38; // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
                constexpr std::ptrdiff_t m_AssociatedEntityNames = 0x50; // C_NetworkUtlVectorBase<CUtlSymbolLarge>
            }
            // Parent: CBodyComponentSkeletonInstance
            // Fields count: 1
            namespace CBodyComponentBaseModelEntity {
                constexpr std::ptrdiff_t __m_pChainEntity = 0x478; // CNetworkVarChainer
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_hOwner (CEntityHandle)
            // NetworkVarNames: m_name (CUtlStringToken)
            namespace CGameSceneNodeHandle {
                constexpr std::ptrdiff_t m_hOwner = 0x8; // CEntityHandle
                constexpr std::ptrdiff_t m_name = 0xC; // CUtlStringToken
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
            namespace CGameSceneNode {
                constexpr std::ptrdiff_t m_nodeToWorld = 0x10; // CTransform
                constexpr std::ptrdiff_t m_pOwner = 0x30; // CEntityInstance*
                constexpr std::ptrdiff_t m_pParent = 0x38; // CGameSceneNode*
                constexpr std::ptrdiff_t m_pChild = 0x40; // CGameSceneNode*
                constexpr std::ptrdiff_t m_pNextSibling = 0x48; // CGameSceneNode*
                constexpr std::ptrdiff_t m_hParent = 0x70; // CGameSceneNodeHandle
                constexpr std::ptrdiff_t m_vecOrigin = 0x80; // CNetworkOriginCellCoordQuantizedVector
                constexpr std::ptrdiff_t m_angRotation = 0xB8; // QAngle
                constexpr std::ptrdiff_t m_flScale = 0xC4; // float32
                constexpr std::ptrdiff_t m_vecAbsOrigin = 0xC8; // Vector
                constexpr std::ptrdiff_t m_angAbsRotation = 0xD4; // QAngle
                constexpr std::ptrdiff_t m_flAbsScale = 0xE0; // float32
                constexpr std::ptrdiff_t m_nParentAttachmentOrBone = 0xE4; // int16
                constexpr std::ptrdiff_t m_bDebugAbsOriginChanges = 0xE6; // bool
                constexpr std::ptrdiff_t m_bDormant = 0xE7; // bool
                constexpr std::ptrdiff_t m_bForceParentToBeNetworked = 0xE8; // bool
                constexpr std::ptrdiff_t m_bDirtyHierarchy = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bDirtyBoneMergeInfo = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bNetworkedPositionChanged = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bNetworkedAnglesChanged = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bNetworkedScaleChanged = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bWillBeCallingPostDataUpdate = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bBoneMergeFlex = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_nLatchAbsOrigin = 0x0; // bitfield:2
                constexpr std::ptrdiff_t m_bDirtyBoneMergeBoneToRoot = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_nHierarchicalDepth = 0xEB; // uint8
                constexpr std::ptrdiff_t m_nHierarchyType = 0xEC; // uint8
                constexpr std::ptrdiff_t m_nDoNotSetAnimTimeInInvalidatePhysicsCount = 0xED; // uint8
                constexpr std::ptrdiff_t m_name = 0xF0; // CUtlStringToken
                constexpr std::ptrdiff_t m_hierarchyAttachName = 0x140; // CUtlStringToken
                constexpr std::ptrdiff_t m_flZOffset = 0x144; // float32
                constexpr std::ptrdiff_t m_vRenderOrigin = 0x148; // Vector
            }
            // Parent: None
            // Fields count: 6
            namespace SequenceHistory_t {
                constexpr std::ptrdiff_t m_hSequence = 0x0; // HSequence
                constexpr std::ptrdiff_t m_flSeqStartTime = 0x4; // GameTime_t
                constexpr std::ptrdiff_t m_flSeqFixedCycle = 0x8; // float32
                constexpr std::ptrdiff_t m_nSeqLoopMode = 0xC; // AnimLoopMode_t
                constexpr std::ptrdiff_t m_flPlaybackRate = 0x10; // float32
                constexpr std::ptrdiff_t m_flCyclesPerSecond = 0x14; // float32
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // NetworkVarNames: m_hSequence (HSequence)
            // NetworkVarNames: m_flPrevCycle (float32)
            // NetworkVarNames: m_flCycle (float32)
            namespace CNetworkedSequenceOperation {
                constexpr std::ptrdiff_t m_hSequence = 0x8; // HSequence
                constexpr std::ptrdiff_t m_flPrevCycle = 0xC; // float32
                constexpr std::ptrdiff_t m_flCycle = 0x10; // float32
                constexpr std::ptrdiff_t m_flWeight = 0x14; // CNetworkedQuantizedFloat
                constexpr std::ptrdiff_t m_bSequenceChangeNetworked = 0x1C; // bool
                constexpr std::ptrdiff_t m_bDiscontinuity = 0x1D; // bool
                constexpr std::ptrdiff_t m_flPrevCycleFromDiscontinuity = 0x20; // float32
                constexpr std::ptrdiff_t m_flPrevCycleForAnimEventDetection = 0x24; // float32
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // NetworkVarNames: m_hModel (HModelStrong)
            // NetworkVarNames: m_bClientClothCreationSuppressed (bool)
            // NetworkVarNames: m_MeshGroupMask (MeshGroupMask_t)
            // NetworkVarNames: m_nIdealMotionType (int8)
            namespace CModelState {
                constexpr std::ptrdiff_t m_hModel = 0xA0; // CStrongHandle<InfoForResourceTypeCModel>
                constexpr std::ptrdiff_t m_ModelName = 0xA8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bClientClothCreationSuppressed = 0xE8; // bool
                constexpr std::ptrdiff_t m_MeshGroupMask = 0x180; // uint64
                constexpr std::ptrdiff_t m_nIdealMotionType = 0x212; // int8
                constexpr std::ptrdiff_t m_nForceLOD = 0x213; // int8
                constexpr std::ptrdiff_t m_nClothUpdateFlags = 0x214; // int8
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
            namespace CSkeletonInstance {
                constexpr std::ptrdiff_t m_modelState = 0x160; // CModelState
                constexpr std::ptrdiff_t m_bIsAnimationEnabled = 0x380; // bool
                constexpr std::ptrdiff_t m_bUseParentRenderBounds = 0x381; // bool
                constexpr std::ptrdiff_t m_bDisableSolidCollisionsForHierarchy = 0x382; // bool
                constexpr std::ptrdiff_t m_bDirtyMotionType = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bIsGeneratingLatchedParentSpaceState = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_materialGroup = 0x384; // CUtlStringToken
                constexpr std::ptrdiff_t m_nHitboxSet = 0x388; // uint8
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_timestamp (GameTime_t)
            // NetworkVarNames: m_nWorldGroupId (WorldGroupId_t)
            namespace IntervalTimer {
                constexpr std::ptrdiff_t m_timestamp = 0x8; // GameTime_t
                constexpr std::ptrdiff_t m_nWorldGroupId = 0xC; // WorldGroupId_t
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // NetworkVarNames: m_duration (float32)
            // NetworkVarNames: m_timestamp (GameTime_t)
            // NetworkVarNames: m_timescale (float32)
            // NetworkVarNames: m_nWorldGroupId (WorldGroupId_t)
            namespace CountdownTimer {
                constexpr std::ptrdiff_t m_duration = 0x8; // float32
                constexpr std::ptrdiff_t m_timestamp = 0xC; // GameTime_t
                constexpr std::ptrdiff_t m_timescale = 0x10; // float32
                constexpr std::ptrdiff_t m_nWorldGroupId = 0x14; // WorldGroupId_t
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // NetworkVarNames: m_duration (float32)
            // NetworkVarNames: m_timestamp (float32)
            // NetworkVarNames: m_timescale (float32)
            namespace EngineCountdownTimer {
                constexpr std::ptrdiff_t m_duration = 0x8; // float32
                constexpr std::ptrdiff_t m_timestamp = 0xC; // float32
                constexpr std::ptrdiff_t m_timescale = 0x10; // float32
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
            namespace CTimeline {
                constexpr std::ptrdiff_t m_flValues = 0x10; // float32[64]
                constexpr std::ptrdiff_t m_nValueCounts = 0x110; // int32[64]
                constexpr std::ptrdiff_t m_nBucketCount = 0x210; // int32
                constexpr std::ptrdiff_t m_flInterval = 0x214; // float32
                constexpr std::ptrdiff_t m_flFinalValue = 0x218; // float32
                constexpr std::ptrdiff_t m_nCompressionType = 0x21C; // TimelineCompression_t
                constexpr std::ptrdiff_t m_bStopped = 0x220; // bool
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
            namespace CAnimGraphNetworkedVariables {
                constexpr std::ptrdiff_t m_PredNetBoolVariables = 0x8; // C_NetworkUtlVectorBase<uint32>
                constexpr std::ptrdiff_t m_PredNetByteVariables = 0x20; // C_NetworkUtlVectorBase<uint8>
                constexpr std::ptrdiff_t m_PredNetUInt16Variables = 0x38; // C_NetworkUtlVectorBase<uint16>
                constexpr std::ptrdiff_t m_PredNetIntVariables = 0x50; // C_NetworkUtlVectorBase<int32>
                constexpr std::ptrdiff_t m_PredNetUInt32Variables = 0x68; // C_NetworkUtlVectorBase<uint32>
                constexpr std::ptrdiff_t m_PredNetUInt64Variables = 0x80; // C_NetworkUtlVectorBase<uint64>
                constexpr std::ptrdiff_t m_PredNetFloatVariables = 0x98; // C_NetworkUtlVectorBase<float32>
                constexpr std::ptrdiff_t m_PredNetVectorVariables = 0xB0; // C_NetworkUtlVectorBase<Vector>
                constexpr std::ptrdiff_t m_PredNetQuaternionVariables = 0xC8; // C_NetworkUtlVectorBase<Quaternion>
                constexpr std::ptrdiff_t m_PredNetGlobalSymbolVariables = 0xE0; // C_NetworkUtlVectorBase<CGlobalSymbol>
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetBoolVariables = 0xF8; // C_NetworkUtlVectorBase<uint32>
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetByteVariables = 0x110; // C_NetworkUtlVectorBase<uint8>
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetUInt16Variables = 0x128; // C_NetworkUtlVectorBase<uint16>
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetIntVariables = 0x140; // C_NetworkUtlVectorBase<int32>
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetUInt32Variables = 0x158; // C_NetworkUtlVectorBase<uint32>
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetUInt64Variables = 0x170; // C_NetworkUtlVectorBase<uint64>
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetFloatVariables = 0x188; // C_NetworkUtlVectorBase<float32>
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetVectorVariables = 0x1A0; // C_NetworkUtlVectorBase<Vector>
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetQuaternionVariables = 0x1B8; // C_NetworkUtlVectorBase<Quaternion>
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetGlobalSymbolVariables = 0x1D0; // C_NetworkUtlVectorBase<CGlobalSymbol>
                constexpr std::ptrdiff_t m_nBoolVariablesCount = 0x1E8; // int32
                constexpr std::ptrdiff_t m_nOwnerOnlyBoolVariablesCount = 0x1EC; // int32
                constexpr std::ptrdiff_t m_nRandomSeedOffset = 0x1F0; // int32
                constexpr std::ptrdiff_t m_flLastTeleportTime = 0x1F4; // float32
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            namespace C_BaseEntityAPI {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            namespace CTakeDamageInfoAPI {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseLibraryBindings
            namespace CClientPointEntityAPI {
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MPulseInstanceDomainInfo
            // MPulseLibraryBindings
            // MPulseDomainOptInFeatureTag
            namespace CPulseGraphInstance_ClientEntity {
                constexpr std::ptrdiff_t m_pParent = 0xD8; // CClientScriptEntity*
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
            namespace C_BaseEntity {
                constexpr std::ptrdiff_t m_CBodyComponent = 0x38; // CBodyComponent*
                constexpr std::ptrdiff_t m_NetworkTransmitComponent = 0x40; // CNetworkTransmitComponent
                constexpr std::ptrdiff_t m_nLastThinkTick = 0x488; // GameTick_t
                constexpr std::ptrdiff_t m_pGameSceneNode = 0x490; // CGameSceneNode*
                constexpr std::ptrdiff_t m_pRenderComponent = 0x498; // CRenderComponent*
                constexpr std::ptrdiff_t m_pCollision = 0x4A0; // CCollisionProperty*
                constexpr std::ptrdiff_t m_iMaxHealth = 0x4A8; // int32
                constexpr std::ptrdiff_t m_iHealth = 0x4AC; // int32
                constexpr std::ptrdiff_t m_lifeState = 0x4B0; // uint8
                constexpr std::ptrdiff_t m_bTakesDamage = 0x4B1; // bool
                constexpr std::ptrdiff_t m_nTakeDamageFlags = 0x4B4; // TakeDamageFlags_t
                constexpr std::ptrdiff_t m_bIsPlatform = 0x4B8; // bool
                constexpr std::ptrdiff_t m_ubInterpolationFrame = 0x4B9; // uint8
                constexpr std::ptrdiff_t m_hSceneObjectController = 0x4BC; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_nNoInterpolationTick = 0x4C0; // int32
                constexpr std::ptrdiff_t m_nVisibilityNoInterpolationTick = 0x4C4; // int32
                constexpr std::ptrdiff_t m_flProxyRandomValue = 0x4C8; // float32
                constexpr std::ptrdiff_t m_iEFlags = 0x4CC; // int32
                constexpr std::ptrdiff_t m_nWaterType = 0x4D0; // uint8
                constexpr std::ptrdiff_t m_bInterpolateEvenWithNoModel = 0x4D1; // bool
                constexpr std::ptrdiff_t m_bPredictionEligible = 0x4D2; // bool
                constexpr std::ptrdiff_t m_bApplyLayerMatchIDToModel = 0x4D3; // bool
                constexpr std::ptrdiff_t m_tokLayerMatchID = 0x4D4; // CUtlStringToken
                constexpr std::ptrdiff_t m_nSubclassID = 0x4D8; // CUtlStringToken
                constexpr std::ptrdiff_t m_nSimulationTick = 0x4E8; // int32
                constexpr std::ptrdiff_t m_iCurrentThinkContext = 0x4EC; // int32
                constexpr std::ptrdiff_t m_aThinkFunctions = 0x4F0; // CUtlVector<thinkfunc_t>
                constexpr std::ptrdiff_t m_nDisableContextThinkStartTick = 0x508; // GameTick_t
                constexpr std::ptrdiff_t m_flAnimTime = 0x50C; // float32
                constexpr std::ptrdiff_t m_flSimulationTime = 0x510; // float32
                constexpr std::ptrdiff_t m_nSceneObjectOverrideFlags = 0x514; // uint8
                constexpr std::ptrdiff_t m_bHasSuccessfullyInterpolated = 0x515; // bool
                constexpr std::ptrdiff_t m_bHasAddedVarsToInterpolation = 0x516; // bool
                constexpr std::ptrdiff_t m_bRenderEvenWhenNotSuccessfullyInterpolated = 0x517; // bool
                constexpr std::ptrdiff_t m_nInterpolationLatchDirtyFlags = 0x518; // int32[2]
                constexpr std::ptrdiff_t m_ListEntry = 0x520; // uint16[11]
                constexpr std::ptrdiff_t m_flCreateTime = 0x538; // GameTime_t
                constexpr std::ptrdiff_t m_flSpeed = 0x53C; // float32
                constexpr std::ptrdiff_t m_EntClientFlags = 0x540; // uint16
                constexpr std::ptrdiff_t m_bClientSideRagdoll = 0x542; // bool
                constexpr std::ptrdiff_t m_iTeamNum = 0x543; // uint8
                constexpr std::ptrdiff_t m_spawnflags = 0x544; // uint32
                constexpr std::ptrdiff_t m_nNextThinkTick = 0x548; // GameTick_t
                constexpr std::ptrdiff_t m_fFlags = 0x54C; // uint32
                constexpr std::ptrdiff_t m_vecAbsVelocity = 0x550; // Vector
                constexpr std::ptrdiff_t m_vecVelocity = 0x560; // CNetworkVelocityVector
                constexpr std::ptrdiff_t m_vecBaseVelocity = 0x590; // Vector
                constexpr std::ptrdiff_t m_hEffectEntity = 0x59C; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_hOwnerEntity = 0x5A0; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_MoveCollide = 0x5A4; // MoveCollide_t
                constexpr std::ptrdiff_t m_MoveType = 0x5A5; // MoveType_t
                constexpr std::ptrdiff_t m_nActualMoveType = 0x5A6; // MoveType_t
                constexpr std::ptrdiff_t m_flWaterLevel = 0x5A8; // float32
                constexpr std::ptrdiff_t m_fEffects = 0x5AC; // uint32
                constexpr std::ptrdiff_t m_hGroundEntity = 0x5B0; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_flFriction = 0x5B4; // float32
                constexpr std::ptrdiff_t m_flElasticity = 0x5B8; // float32
                constexpr std::ptrdiff_t m_flGravityScale = 0x5BC; // float32
                constexpr std::ptrdiff_t m_flTimeScale = 0x5C0; // float32
                constexpr std::ptrdiff_t m_bAnimatedEveryTick = 0x5C4; // bool
                constexpr std::ptrdiff_t m_flNavIgnoreUntilTime = 0x5C8; // GameTime_t
                constexpr std::ptrdiff_t m_hThink = 0x5CC; // uint16
                constexpr std::ptrdiff_t m_fBBoxVisFlags = 0x5D8; // uint8
                constexpr std::ptrdiff_t m_bPredictable = 0x5D9; // bool
                constexpr std::ptrdiff_t m_bRenderWithViewModels = 0x5DA; // bool
                constexpr std::ptrdiff_t m_nSplitUserPlayerPredictionSlot = 0x5DC; // CSplitScreenSlot
                constexpr std::ptrdiff_t m_nFirstPredictableCommand = 0x5E0; // int32
                constexpr std::ptrdiff_t m_nLastPredictableCommand = 0x5E4; // int32
                constexpr std::ptrdiff_t m_hOldMoveParent = 0x5E8; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_Particles = 0x5F0; // CParticleProperty
                constexpr std::ptrdiff_t m_vecPredictedScriptFloats = 0x618; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_vecPredictedScriptFloatIDs = 0x630; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_nNextScriptVarRecordID = 0x660; // int32
                constexpr std::ptrdiff_t m_vecAngVelocity = 0x670; // QAngle
                constexpr std::ptrdiff_t m_DataChangeEventRef = 0x67C; // int32
                constexpr std::ptrdiff_t m_dependencies = 0x680; // CUtlVector<CEntityHandle>
                constexpr std::ptrdiff_t m_nCreationTick = 0x698; // int32
                constexpr std::ptrdiff_t m_bAnimTimeChanged = 0x6B9; // bool
                constexpr std::ptrdiff_t m_bSimulationTimeChanged = 0x6BA; // bool
                constexpr std::ptrdiff_t m_sUniqueHammerID = 0x6C8; // CUtlString
            }
            // Parent: C_BaseEntity
            // Fields count: 0
            namespace CLogicalEntity {
            }
            // Parent: None
            // Fields count: 5
            namespace C_BaseFlex__Emphasized_Phoneme {
                constexpr std::ptrdiff_t m_sClassName = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_flAmount = 0x18; // float32
                constexpr std::ptrdiff_t m_bRequired = 0x1C; // bool
                constexpr std::ptrdiff_t m_bBasechecked = 0x1D; // bool
                constexpr std::ptrdiff_t m_bValid = 0x1E; // bool
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
            namespace C_ColorCorrection {
                constexpr std::ptrdiff_t m_vecOrigin = 0x6D0; // Vector
                constexpr std::ptrdiff_t m_MinFalloff = 0x6DC; // float32
                constexpr std::ptrdiff_t m_MaxFalloff = 0x6E0; // float32
                constexpr std::ptrdiff_t m_flFadeInDuration = 0x6E4; // float32
                constexpr std::ptrdiff_t m_flFadeOutDuration = 0x6E8; // float32
                constexpr std::ptrdiff_t m_flMaxWeight = 0x6EC; // float32
                constexpr std::ptrdiff_t m_flCurWeight = 0x6F0; // float32
                constexpr std::ptrdiff_t m_netlookupFilename = 0x6F4; // char[512]
                constexpr std::ptrdiff_t m_bEnabled = 0x8F4; // bool
                constexpr std::ptrdiff_t m_bMaster = 0x8F5; // bool
                constexpr std::ptrdiff_t m_bClientSide = 0x8F6; // bool
                constexpr std::ptrdiff_t m_bExclusive = 0x8F7; // bool
                constexpr std::ptrdiff_t m_bEnabledOnClient = 0x8F8; // bool[1]
                constexpr std::ptrdiff_t m_flCurWeightOnClient = 0x8FC; // float32[1]
                constexpr std::ptrdiff_t m_bFadingIn = 0x900; // bool[1]
                constexpr std::ptrdiff_t m_flFadeStartWeight = 0x904; // float32[1]
                constexpr std::ptrdiff_t m_flFadeStartTime = 0x908; // float32[1]
                constexpr std::ptrdiff_t m_flFadeDuration = 0x90C; // float32[1]
            }
            // Parent: C_BaseEntity
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_EnvWindShared (CEnvWindShared)
            namespace C_EnvWindClientside {
                constexpr std::ptrdiff_t m_EnvWindShared = 0x6D0; // C_EnvWindShared
            }
            // Parent: C_BaseEntity
            // Fields count: 3
            //
            // Metadata:
            // NetworkVarNames: m_hEntAttached (CHandle< C_BaseEntity>)
            // NetworkVarNames: m_bCheapEffect (bool)
            namespace C_EntityFlame {
                constexpr std::ptrdiff_t m_hEntAttached = 0x6D0; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_hOldAttached = 0x6F8; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_bCheapEffect = 0x6FC; // bool
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
            namespace CProjectedTextureBase {
                constexpr std::ptrdiff_t m_hTargetEntity = 0xC; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_bState = 0x10; // bool
                constexpr std::ptrdiff_t m_bAlwaysUpdate = 0x11; // bool
                constexpr std::ptrdiff_t m_flLightFOV = 0x14; // float32
                constexpr std::ptrdiff_t m_bEnableShadows = 0x18; // bool
                constexpr std::ptrdiff_t m_bSimpleProjection = 0x19; // bool
                constexpr std::ptrdiff_t m_bLightOnlyTarget = 0x1A; // bool
                constexpr std::ptrdiff_t m_bLightWorld = 0x1B; // bool
                constexpr std::ptrdiff_t m_bCameraSpace = 0x1C; // bool
                constexpr std::ptrdiff_t m_flBrightnessScale = 0x20; // float32
                constexpr std::ptrdiff_t m_LightColor = 0x24; // Color
                constexpr std::ptrdiff_t m_flIntensity = 0x28; // float32
                constexpr std::ptrdiff_t m_flLinearAttenuation = 0x2C; // float32
                constexpr std::ptrdiff_t m_flQuadraticAttenuation = 0x30; // float32
                constexpr std::ptrdiff_t m_bVolumetric = 0x34; // bool
                constexpr std::ptrdiff_t m_flVolumetricIntensity = 0x38; // float32
                constexpr std::ptrdiff_t m_flNoiseStrength = 0x3C; // float32
                constexpr std::ptrdiff_t m_flFlashlightTime = 0x40; // float32
                constexpr std::ptrdiff_t m_nNumPlanes = 0x44; // uint32
                constexpr std::ptrdiff_t m_flPlaneOffset = 0x48; // float32
                constexpr std::ptrdiff_t m_flColorTransitionTime = 0x4C; // float32
                constexpr std::ptrdiff_t m_flAmbient = 0x50; // float32
                constexpr std::ptrdiff_t m_SpotlightTextureName = 0x54; // char[512]
                constexpr std::ptrdiff_t m_nSpotlightTextureFrame = 0x254; // int32
                constexpr std::ptrdiff_t m_nShadowQuality = 0x258; // uint32
                constexpr std::ptrdiff_t m_flNearZ = 0x25C; // float32
                constexpr std::ptrdiff_t m_flFarZ = 0x260; // float32
                constexpr std::ptrdiff_t m_flProjectionSize = 0x264; // float32
                constexpr std::ptrdiff_t m_flRotation = 0x268; // float32
                constexpr std::ptrdiff_t m_bFlipHorizontal = 0x26C; // bool
            }
            // Parent: C_BaseEntity
            // Fields count: 4
            //
            // Metadata:
            // NetworkVarNames: m_flScale (float32)
            // NetworkVarNames: m_flStartScale (float32)
            // NetworkVarNames: m_flScaleTime (float)
            // NetworkVarNames: m_nFlags (uint32)
            namespace C_BaseFire {
                constexpr std::ptrdiff_t m_flScale = 0x6D0; // float32
                constexpr std::ptrdiff_t m_flStartScale = 0x6D4; // float32
                constexpr std::ptrdiff_t m_flScaleTime = 0x6D8; // float32
                constexpr std::ptrdiff_t m_nFlags = 0x6DC; // uint32
            }
            // Parent: C_BaseFire
            // Fields count: 13
            //
            // Metadata:
            // MNetworkOverride
            // MNetworkOverride
            // NetworkVarNames: m_nFlameModelIndex (int32)
            // NetworkVarNames: m_nFlameFromAboveModelIndex (int32)
            namespace C_FireSmoke {
                constexpr std::ptrdiff_t m_nFlameModelIndex = 0x6E0; // int32
                constexpr std::ptrdiff_t m_nFlameFromAboveModelIndex = 0x6E4; // int32
                constexpr std::ptrdiff_t m_flScaleRegister = 0x6E8; // float32
                constexpr std::ptrdiff_t m_flScaleStart = 0x6EC; // float32
                constexpr std::ptrdiff_t m_flScaleEnd = 0x6F0; // float32
                constexpr std::ptrdiff_t m_flScaleTimeStart = 0x6F4; // GameTime_t
                constexpr std::ptrdiff_t m_flScaleTimeEnd = 0x6F8; // GameTime_t
                constexpr std::ptrdiff_t m_flChildFlameSpread = 0x6FC; // float32
                constexpr std::ptrdiff_t m_flClipPerc = 0x710; // float32
                constexpr std::ptrdiff_t m_bClipTested = 0x714; // bool
                constexpr std::ptrdiff_t m_bFadingOut = 0x715; // bool
                constexpr std::ptrdiff_t m_tParticleSpawn = 0x718; // TimedEvent
                constexpr std::ptrdiff_t m_pFireOverlay = 0x720; // CFireOverlay*
            }
            // Parent: None
            // Fields count: 1
            namespace C_RopeKeyframe__CPhysicsDelegate {
                constexpr std::ptrdiff_t m_pKeyframe = 0x8; // C_RopeKeyframe*
            }
            // Parent: None
            // Fields count: 1
            namespace C_SceneEntity__QueuedEvents_t {
                constexpr std::ptrdiff_t starttime = 0x0; // float32
            }
            // Parent: C_BaseEntity
            // Fields count: 0
            namespace C_TintController {
            }
            // Parent: None
            // Fields count: 13
            namespace CFlashlightEffect {
                constexpr std::ptrdiff_t m_bIsOn = 0x8; // bool
                constexpr std::ptrdiff_t m_bMuzzleFlashEnabled = 0x18; // bool
                constexpr std::ptrdiff_t m_flMuzzleFlashBrightness = 0x1C; // float32
                constexpr std::ptrdiff_t m_quatMuzzleFlashOrientation = 0x20; // Quaternion
                constexpr std::ptrdiff_t m_vecMuzzleFlashOrigin = 0x30; // Vector
                constexpr std::ptrdiff_t m_flFov = 0x3C; // float32
                constexpr std::ptrdiff_t m_flFarZ = 0x40; // float32
                constexpr std::ptrdiff_t m_flLinearAtten = 0x44; // float32
                constexpr std::ptrdiff_t m_bCastsShadows = 0x48; // bool
                constexpr std::ptrdiff_t m_flCurrentPullBackDist = 0x4C; // float32
                constexpr std::ptrdiff_t m_FlashlightTexture = 0x50; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_MuzzleFlashTexture = 0x58; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_textureName = 0x60; // char[64]
            }
            // Parent: None
            // Fields count: 5
            namespace CInterpolatedValue {
                constexpr std::ptrdiff_t m_flStartTime = 0x0; // float32
                constexpr std::ptrdiff_t m_flEndTime = 0x4; // float32
                constexpr std::ptrdiff_t m_flStartValue = 0x8; // float32
                constexpr std::ptrdiff_t m_flEndValue = 0xC; // float32
                constexpr std::ptrdiff_t m_nInterpType = 0x10; // int32
            }
            // Parent: None
            // Fields count: 4
            namespace CGlowSprite {
                constexpr std::ptrdiff_t m_vColor = 0x0; // Vector
                constexpr std::ptrdiff_t m_flHorzSize = 0xC; // float32
                constexpr std::ptrdiff_t m_flVertSize = 0x10; // float32
                constexpr std::ptrdiff_t m_hMaterial = 0x18; // CStrongHandle<InfoForResourceTypeIMaterial2>
            }
            // Parent: None
            // Fields count: 15
            namespace CGlowOverlay {
                constexpr std::ptrdiff_t m_vPos = 0x8; // Vector
                constexpr std::ptrdiff_t m_bDirectional = 0x14; // bool
                constexpr std::ptrdiff_t m_vDirection = 0x18; // Vector
                constexpr std::ptrdiff_t m_bInSky = 0x24; // bool
                constexpr std::ptrdiff_t m_skyObstructionScale = 0x28; // float32
                constexpr std::ptrdiff_t m_Sprites = 0x30; // CGlowSprite[4]
                constexpr std::ptrdiff_t m_nSprites = 0xB0; // int32
                constexpr std::ptrdiff_t m_flProxyRadius = 0xB4; // float32
                constexpr std::ptrdiff_t m_flHDRColorScale = 0xB8; // float32
                constexpr std::ptrdiff_t m_flGlowObstructionScale = 0xBC; // float32
                constexpr std::ptrdiff_t m_bCacheGlowObstruction = 0xC0; // bool
                constexpr std::ptrdiff_t m_bCacheSkyObstruction = 0xC1; // bool
                constexpr std::ptrdiff_t m_bActivated = 0xC2; // int16
                constexpr std::ptrdiff_t m_ListIndex = 0xC4; // uint16
                constexpr std::ptrdiff_t m_queryHandle = 0xC8; // int32
            }
            // Parent: None
            // Fields count: 0
            namespace IClientAlphaProperty {
            }
            // Parent: C_BaseEntity
            // Fields count: 2
            namespace CSkyboxReference {
                constexpr std::ptrdiff_t m_worldGroupId = 0x6D0; // WorldGroupId_t
                constexpr std::ptrdiff_t m_hSkyCamera = 0x6D4; // CHandle<C_SkyCamera>
            }
            // Parent: C_BaseEntity
            // Fields count: 4
            //
            // Metadata:
            // NetworkVarNames: m_skyboxData (sky3dparams_t)
            // NetworkVarNames: m_skyboxSlotToken (CUtlStringToken)
            namespace C_SkyCamera {
                constexpr std::ptrdiff_t m_skyboxData = 0x6D0; // sky3dparams_t
                constexpr std::ptrdiff_t m_skyboxSlotToken = 0x760; // CUtlStringToken
                constexpr std::ptrdiff_t m_bUseAngles = 0x764; // bool
                constexpr std::ptrdiff_t m_pNext = 0x768; // C_SkyCamera*
            }
            // Parent: None
            // Fields count: 2
            namespace TimedEvent {
                constexpr std::ptrdiff_t m_TimeBetweenEvents = 0x0; // float32
                constexpr std::ptrdiff_t m_fNextEvent = 0x4; // float32
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
            namespace VPhysicsCollisionAttribute_t {
                constexpr std::ptrdiff_t m_nInteractsAs = 0x8; // uint64
                constexpr std::ptrdiff_t m_nInteractsWith = 0x10; // uint64
                constexpr std::ptrdiff_t m_nInteractsExclude = 0x18; // uint64
                constexpr std::ptrdiff_t m_nEntityId = 0x20; // uint32
                constexpr std::ptrdiff_t m_nOwnerId = 0x24; // uint32
                constexpr std::ptrdiff_t m_nHierarchyId = 0x28; // uint16
                constexpr std::ptrdiff_t m_nCollisionGroup = 0x2A; // uint8
                constexpr std::ptrdiff_t m_nCollisionFunctionMask = 0x2B; // uint8
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
            namespace CCollisionProperty {
                constexpr std::ptrdiff_t m_collisionAttribute = 0x10; // VPhysicsCollisionAttribute_t
                constexpr std::ptrdiff_t m_vecMins = 0x40; // Vector
                constexpr std::ptrdiff_t m_vecMaxs = 0x4C; // Vector
                constexpr std::ptrdiff_t m_usSolidFlags = 0x5A; // uint8
                constexpr std::ptrdiff_t m_nSolidType = 0x5B; // SolidType_t
                constexpr std::ptrdiff_t m_triggerBloat = 0x5C; // uint8
                constexpr std::ptrdiff_t m_nSurroundType = 0x5D; // SurroundingBoundsType_t
                constexpr std::ptrdiff_t m_CollisionGroup = 0x5E; // uint8
                constexpr std::ptrdiff_t m_nEnablePhysics = 0x5F; // uint8
                constexpr std::ptrdiff_t m_flBoundingRadius = 0x60; // float32
                constexpr std::ptrdiff_t m_vecSpecifiedSurroundingMins = 0x64; // Vector
                constexpr std::ptrdiff_t m_vecSpecifiedSurroundingMaxs = 0x70; // Vector
                constexpr std::ptrdiff_t m_vecSurroundingMaxs = 0x7C; // Vector
                constexpr std::ptrdiff_t m_vecSurroundingMins = 0x88; // Vector
                constexpr std::ptrdiff_t m_vCapsuleCenter1 = 0x94; // Vector
                constexpr std::ptrdiff_t m_vCapsuleCenter2 = 0xA0; // Vector
                constexpr std::ptrdiff_t m_flCapsuleRadius = 0xAC; // float32
            }
            // Parent: None
            // Fields count: 12
            namespace CDecalInfo {
                constexpr std::ptrdiff_t m_flAnimationScale = 0x0; // float32
                constexpr std::ptrdiff_t m_flAnimationLifeSpan = 0x4; // float32
                constexpr std::ptrdiff_t m_flPlaceTime = 0x8; // float32
                constexpr std::ptrdiff_t m_flFadeStartTime = 0xC; // float32
                constexpr std::ptrdiff_t m_flFadeDuration = 0x10; // float32
                constexpr std::ptrdiff_t m_nVBSlot = 0x14; // int32
                constexpr std::ptrdiff_t m_nBoneIndex = 0x18; // int32
                constexpr std::ptrdiff_t m_vPosition = 0x28; // Vector
                constexpr std::ptrdiff_t m_flBoundingRadiusSqr = 0x34; // float32
                constexpr std::ptrdiff_t m_pNext = 0x40; // CDecalInfo*
                constexpr std::ptrdiff_t m_pPrev = 0x48; // CDecalInfo*
                constexpr std::ptrdiff_t m_nDecalMaterialIndex = 0xA8; // int32
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
            namespace CEffectData {
                constexpr std::ptrdiff_t m_vOrigin = 0x8; // Vector
                constexpr std::ptrdiff_t m_vStart = 0x14; // Vector
                constexpr std::ptrdiff_t m_vNormal = 0x20; // Vector
                constexpr std::ptrdiff_t m_vAngles = 0x2C; // QAngle
                constexpr std::ptrdiff_t m_hEntity = 0x38; // CEntityHandle
                constexpr std::ptrdiff_t m_hOtherEntity = 0x3C; // CEntityHandle
                constexpr std::ptrdiff_t m_flScale = 0x40; // float32
                constexpr std::ptrdiff_t m_flMagnitude = 0x44; // float32
                constexpr std::ptrdiff_t m_flRadius = 0x48; // float32
                constexpr std::ptrdiff_t m_nSurfaceProp = 0x4C; // CUtlStringToken
                constexpr std::ptrdiff_t m_nEffectIndex = 0x50; // CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>
                constexpr std::ptrdiff_t m_nDamageType = 0x58; // uint32
                constexpr std::ptrdiff_t m_nPenetrate = 0x5C; // uint8
                constexpr std::ptrdiff_t m_nMaterial = 0x5E; // uint16
                constexpr std::ptrdiff_t m_nHitBox = 0x60; // uint16
                constexpr std::ptrdiff_t m_nColor = 0x62; // uint8
                constexpr std::ptrdiff_t m_fFlags = 0x63; // uint8
                constexpr std::ptrdiff_t m_nAttachmentIndex = 0x64; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_nAttachmentName = 0x68; // CUtlStringToken
                constexpr std::ptrdiff_t m_iEffectName = 0x6C; // uint16
                constexpr std::ptrdiff_t m_nExplosionType = 0x6E; // uint8
            }
            // Parent: C_BaseEntity
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_flFadeStartDist (float32)
            // NetworkVarNames: m_flFadeEndDist (float32)
            namespace C_EnvDetailController {
                constexpr std::ptrdiff_t m_flFadeStartDist = 0x6D0; // float32
                constexpr std::ptrdiff_t m_flFadeEndDist = 0x6D4; // float32
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
            namespace C_EnvWindShared {
                constexpr std::ptrdiff_t m_flStartTime = 0x8; // GameTime_t
                constexpr std::ptrdiff_t m_iWindSeed = 0xC; // uint32
                constexpr std::ptrdiff_t m_iMinWind = 0x10; // uint16
                constexpr std::ptrdiff_t m_iMaxWind = 0x12; // uint16
                constexpr std::ptrdiff_t m_windRadius = 0x14; // int32
                constexpr std::ptrdiff_t m_iMinGust = 0x18; // uint16
                constexpr std::ptrdiff_t m_iMaxGust = 0x1A; // uint16
                constexpr std::ptrdiff_t m_flMinGustDelay = 0x1C; // float32
                constexpr std::ptrdiff_t m_flMaxGustDelay = 0x20; // float32
                constexpr std::ptrdiff_t m_flGustDuration = 0x24; // float32
                constexpr std::ptrdiff_t m_iGustDirChange = 0x28; // uint16
                constexpr std::ptrdiff_t m_location = 0x2C; // Vector
                constexpr std::ptrdiff_t m_iszGustSound = 0x38; // int32
                constexpr std::ptrdiff_t m_iWindDir = 0x3C; // int32
                constexpr std::ptrdiff_t m_flWindSpeed = 0x40; // float32
                constexpr std::ptrdiff_t m_currentWindVector = 0x44; // Vector
                constexpr std::ptrdiff_t m_CurrentSwayVector = 0x50; // Vector
                constexpr std::ptrdiff_t m_PrevSwayVector = 0x5C; // Vector
                constexpr std::ptrdiff_t m_iInitialWindDir = 0x68; // uint16
                constexpr std::ptrdiff_t m_flInitialWindSpeed = 0x6C; // float32
                constexpr std::ptrdiff_t m_flVariationTime = 0x70; // GameTime_t
                constexpr std::ptrdiff_t m_flSwayTime = 0x74; // GameTime_t
                constexpr std::ptrdiff_t m_flSimTime = 0x78; // GameTime_t
                constexpr std::ptrdiff_t m_flSwitchTime = 0x7C; // GameTime_t
                constexpr std::ptrdiff_t m_flAveWindSpeed = 0x80; // float32
                constexpr std::ptrdiff_t m_bGusting = 0x84; // bool
                constexpr std::ptrdiff_t m_flWindAngleVariation = 0x88; // float32
                constexpr std::ptrdiff_t m_flWindSpeedVariation = 0x8C; // float32
                constexpr std::ptrdiff_t m_iEntIndex = 0x90; // CEntityIndex
            }
            // Parent: None
            // Fields count: 2
            namespace C_EnvWindShared__WindAveEvent_t {
                constexpr std::ptrdiff_t m_flStartWindSpeed = 0x0; // float32
                constexpr std::ptrdiff_t m_flAveWindSpeed = 0x4; // float32
            }
            // Parent: None
            // Fields count: 2
            namespace C_EnvWindShared__WindVariationEvent_t {
                constexpr std::ptrdiff_t m_flWindAngleVariation = 0x0; // float32
                constexpr std::ptrdiff_t m_flWindSpeedVariation = 0x4; // float32
            }
            // Parent: C_BaseEntity
            // Fields count: 0
            namespace C_InfoLadderDismount {
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
            namespace shard_model_desc_t {
                constexpr std::ptrdiff_t m_nModelID = 0x8; // int32
                constexpr std::ptrdiff_t m_hMaterial = 0x10; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_solid = 0x18; // ShardSolid_t
                constexpr std::ptrdiff_t m_ShatterPanelMode = 0x19; // ShatterPanelMode
                constexpr std::ptrdiff_t m_vecPanelSize = 0x1C; // Vector2D
                constexpr std::ptrdiff_t m_vecStressPositionA = 0x24; // Vector2D
                constexpr std::ptrdiff_t m_vecStressPositionB = 0x2C; // Vector2D
                constexpr std::ptrdiff_t m_vecPanelVertices = 0x38; // C_NetworkUtlVectorBase<Vector2D>
                constexpr std::ptrdiff_t m_flGlassHalfThickness = 0x50; // float32
                constexpr std::ptrdiff_t m_bHasParent = 0x54; // bool
                constexpr std::ptrdiff_t m_bParentFrozen = 0x55; // bool
                constexpr std::ptrdiff_t m_SurfacePropStringToken = 0x58; // CUtlStringToken
            }
            // Parent: C_BaseEntity
            // Fields count: 0
            namespace C_GameRulesProxy {
            }
            // Parent: None
            // Fields count: 0
            namespace C_GameRules {
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
            namespace CGlowProperty {
                constexpr std::ptrdiff_t m_fGlowColor = 0x8; // Vector
                constexpr std::ptrdiff_t m_iGlowType = 0x30; // int32
                constexpr std::ptrdiff_t m_iGlowTeam = 0x34; // int32
                constexpr std::ptrdiff_t m_nGlowRange = 0x38; // int32
                constexpr std::ptrdiff_t m_nGlowRangeMin = 0x3C; // int32
                constexpr std::ptrdiff_t m_glowColorOverride = 0x40; // Color
                constexpr std::ptrdiff_t m_bFlashing = 0x44; // bool
                constexpr std::ptrdiff_t m_flGlowTime = 0x48; // float32
                constexpr std::ptrdiff_t m_flGlowStartTime = 0x4C; // float32
                constexpr std::ptrdiff_t m_bEligibleForScreenHighlight = 0x50; // bool
                constexpr std::ptrdiff_t m_bGlowing = 0x51; // bool
            }
            // Parent: C_GameRules
            // Fields count: 0
            namespace C_MultiplayRules {
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
            namespace fogparams_t {
                constexpr std::ptrdiff_t dirPrimary = 0x8; // Vector
                constexpr std::ptrdiff_t colorPrimary = 0x14; // Color
                constexpr std::ptrdiff_t colorSecondary = 0x18; // Color
                constexpr std::ptrdiff_t colorPrimaryLerpTo = 0x1C; // Color
                constexpr std::ptrdiff_t colorSecondaryLerpTo = 0x20; // Color
                constexpr std::ptrdiff_t start = 0x24; // float32
                constexpr std::ptrdiff_t end = 0x28; // float32
                constexpr std::ptrdiff_t farz = 0x2C; // float32
                constexpr std::ptrdiff_t maxdensity = 0x30; // float32
                constexpr std::ptrdiff_t exponent = 0x34; // float32
                constexpr std::ptrdiff_t HDRColorScale = 0x38; // float32
                constexpr std::ptrdiff_t skyboxFogFactor = 0x3C; // float32
                constexpr std::ptrdiff_t skyboxFogFactorLerpTo = 0x40; // float32
                constexpr std::ptrdiff_t startLerpTo = 0x44; // float32
                constexpr std::ptrdiff_t endLerpTo = 0x48; // float32
                constexpr std::ptrdiff_t maxdensityLerpTo = 0x4C; // float32
                constexpr std::ptrdiff_t lerptime = 0x50; // GameTime_t
                constexpr std::ptrdiff_t duration = 0x54; // float32
                constexpr std::ptrdiff_t blendtobackground = 0x58; // float32
                constexpr std::ptrdiff_t scattering = 0x5C; // float32
                constexpr std::ptrdiff_t locallightscale = 0x60; // float32
                constexpr std::ptrdiff_t enable = 0x64; // bool
                constexpr std::ptrdiff_t blend = 0x65; // bool
                constexpr std::ptrdiff_t m_bNoReflectionFog = 0x66; // bool
                constexpr std::ptrdiff_t m_bPadding = 0x67; // bool
            }
            // Parent: None
            // Fields count: 14
            //
            // Metadata:
            // NetworkVarNames: m_hCtrl (CHandle< CFogController>)
            namespace C_fogplayerparams_t {
                constexpr std::ptrdiff_t m_hCtrl = 0x8; // CHandle<C_FogController>
                constexpr std::ptrdiff_t m_flTransitionTime = 0xC; // float32
                constexpr std::ptrdiff_t m_OldColor = 0x10; // Color
                constexpr std::ptrdiff_t m_flOldStart = 0x14; // float32
                constexpr std::ptrdiff_t m_flOldEnd = 0x18; // float32
                constexpr std::ptrdiff_t m_flOldMaxDensity = 0x1C; // float32
                constexpr std::ptrdiff_t m_flOldHDRColorScale = 0x20; // float32
                constexpr std::ptrdiff_t m_flOldFarZ = 0x24; // float32
                constexpr std::ptrdiff_t m_NewColor = 0x28; // Color
                constexpr std::ptrdiff_t m_flNewStart = 0x2C; // float32
                constexpr std::ptrdiff_t m_flNewEnd = 0x30; // float32
                constexpr std::ptrdiff_t m_flNewMaxDensity = 0x34; // float32
                constexpr std::ptrdiff_t m_flNewHDRColorScale = 0x38; // float32
                constexpr std::ptrdiff_t m_flNewFarZ = 0x3C; // float32
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
            namespace sky3dparams_t {
                constexpr std::ptrdiff_t scale = 0x8; // int16
                constexpr std::ptrdiff_t origin = 0xC; // Vector
                constexpr std::ptrdiff_t bClip3DSkyBoxNearToWorldFar = 0x18; // bool
                constexpr std::ptrdiff_t flClip3DSkyBoxNearToWorldFarOffset = 0x1C; // float32
                constexpr std::ptrdiff_t fog = 0x20; // fogparams_t
                constexpr std::ptrdiff_t m_nWorldGroupID = 0x88; // WorldGroupId_t
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // NetworkVarNames: m_Transforms (CTransform)
            // NetworkVarNames: m_hOwner (EHANDLE)
            namespace PhysicsRagdollPose_t {
                constexpr std::ptrdiff_t __m_pChainEntity = 0x8; // CNetworkVarChainer
                constexpr std::ptrdiff_t m_Transforms = 0x30; // C_NetworkUtlVectorBase<CTransform>
                constexpr std::ptrdiff_t m_hOwner = 0x48; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_bDirty = 0x68; // bool
            }
            // Parent: C_GameRules
            // Fields count: 0
            namespace C_SingleplayRules {
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
            namespace C_SoundOpvarSetPointBase {
                constexpr std::ptrdiff_t m_iszStackName = 0x6D0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszOperatorName = 0x6D8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszOpvarName = 0x6E0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iOpvarIndex = 0x6E8; // int32
                constexpr std::ptrdiff_t m_bUseAutoCompare = 0x6EC; // bool
            }
            // Parent: C_SoundOpvarSetPointBase
            // Fields count: 0
            namespace C_SoundOpvarSetPointEntity {
            }
            // Parent: C_SoundOpvarSetPointEntity
            // Fields count: 0
            namespace C_SoundOpvarSetAABBEntity {
            }
            // Parent: C_SoundOpvarSetAABBEntity
            // Fields count: 0
            namespace C_SoundOpvarSetOBBEntity {
            }
            // Parent: C_SoundOpvarSetPointEntity
            // Fields count: 0
            namespace C_SoundOpvarSetPathCornerEntity {
            }
            // Parent: C_SoundOpvarSetPointEntity
            // Fields count: 0
            namespace C_SoundOpvarSetAutoRoomEntity {
            }
            // Parent: C_SoundOpvarSetPointBase
            // Fields count: 0
            namespace C_SoundOpvarSetOBBWindEntity {
            }
            // Parent: C_MultiplayRules
            // Fields count: 0
            namespace C_TeamplayRules {
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
            namespace C_TeamRoundTimer {
                constexpr std::ptrdiff_t m_bTimerPaused = 0x6D0; // bool
                constexpr std::ptrdiff_t m_flTimeRemaining = 0x6D4; // float32
                constexpr std::ptrdiff_t m_flTimerEndTime = 0x6D8; // GameTime_t
                constexpr std::ptrdiff_t m_bIsDisabled = 0x6DC; // bool
                constexpr std::ptrdiff_t m_bShowInHUD = 0x6DD; // bool
                constexpr std::ptrdiff_t m_nTimerLength = 0x6E0; // int32
                constexpr std::ptrdiff_t m_nTimerInitialLength = 0x6E4; // int32
                constexpr std::ptrdiff_t m_nTimerMaxLength = 0x6E8; // int32
                constexpr std::ptrdiff_t m_bAutoCountdown = 0x6EC; // bool
                constexpr std::ptrdiff_t m_nSetupTimeLength = 0x6F0; // int32
                constexpr std::ptrdiff_t m_nState = 0x6F4; // int32
                constexpr std::ptrdiff_t m_bStartPaused = 0x6F8; // bool
                constexpr std::ptrdiff_t m_bInCaptureWatchState = 0x6F9; // bool
                constexpr std::ptrdiff_t m_flTotalTime = 0x6FC; // float32
                constexpr std::ptrdiff_t m_bStopWatchTimer = 0x700; // bool
                constexpr std::ptrdiff_t m_bFireFinished = 0x701; // bool
                constexpr std::ptrdiff_t m_bFire5MinRemain = 0x702; // bool
                constexpr std::ptrdiff_t m_bFire4MinRemain = 0x703; // bool
                constexpr std::ptrdiff_t m_bFire3MinRemain = 0x704; // bool
                constexpr std::ptrdiff_t m_bFire2MinRemain = 0x705; // bool
                constexpr std::ptrdiff_t m_bFire1MinRemain = 0x706; // bool
                constexpr std::ptrdiff_t m_bFire30SecRemain = 0x707; // bool
                constexpr std::ptrdiff_t m_bFire10SecRemain = 0x708; // bool
                constexpr std::ptrdiff_t m_bFire5SecRemain = 0x709; // bool
                constexpr std::ptrdiff_t m_bFire4SecRemain = 0x70A; // bool
                constexpr std::ptrdiff_t m_bFire3SecRemain = 0x70B; // bool
                constexpr std::ptrdiff_t m_bFire2SecRemain = 0x70C; // bool
                constexpr std::ptrdiff_t m_bFire1SecRemain = 0x70D; // bool
                constexpr std::ptrdiff_t m_nOldTimerLength = 0x710; // int32
                constexpr std::ptrdiff_t m_nOldTimerState = 0x714; // int32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_Attributes (CEconItemAttribute)
            namespace CAttributeList {
                constexpr std::ptrdiff_t m_Attributes = 0x8; // C_UtlVectorEmbeddedNetworkVar<CEconItemAttribute>
                constexpr std::ptrdiff_t m_pManager = 0x58; // CAttributeManager*
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
            namespace CEconItemAttribute {
                constexpr std::ptrdiff_t m_iAttributeDefinitionIndex = 0x30; // uint16
                constexpr std::ptrdiff_t m_flValue = 0x34; // float32
                constexpr std::ptrdiff_t m_flInitialValue = 0x38; // float32
                constexpr std::ptrdiff_t m_nRefundableCurrency = 0x3C; // int32
                constexpr std::ptrdiff_t m_bSetBonus = 0x40; // bool
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // NetworkVarNames: m_iReapplyProvisionParity (int)
            // NetworkVarNames: m_hOuter (EHANDLE)
            // NetworkVarNames: m_ProviderType (attributeprovidertypes_t)
            namespace CAttributeManager {
                constexpr std::ptrdiff_t m_Providers = 0x8; // CUtlVector<CHandle<C_BaseEntity>>
                constexpr std::ptrdiff_t m_iReapplyProvisionParity = 0x20; // int32
                constexpr std::ptrdiff_t m_hOuter = 0x24; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_bPreventLoopback = 0x28; // bool
                constexpr std::ptrdiff_t m_ProviderType = 0x2C; // attributeprovidertypes_t
                constexpr std::ptrdiff_t m_CachedResults = 0x30; // CUtlVector<CAttributeManager::cached_attribute_float_t>
            }
            // Parent: None
            // Fields count: 3
            namespace CAttributeManager__cached_attribute_float_t {
                constexpr std::ptrdiff_t flIn = 0x0; // float32
                constexpr std::ptrdiff_t iAttribHook = 0x8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t flOut = 0x10; // float32
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
            namespace C_AttributeContainer {
                constexpr std::ptrdiff_t m_Item = 0x50; // C_EconItemView
                constexpr std::ptrdiff_t m_iExternalItemProviderRegisteredToken = 0x13A0; // int32
                constexpr std::ptrdiff_t m_ullRegisteredAsItemID = 0x13A8; // uint64
            }
            // Parent: None
            // Fields count: 1
            namespace C_EconEntity__AttachedModelData_t {
                constexpr std::ptrdiff_t m_iModelDisplayFlags = 0x0; // int32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_bSpotted (bool)
            // NetworkVarNames: m_bSpottedByMask (uint32)
            namespace EntitySpottedState_t {
                constexpr std::ptrdiff_t m_bSpotted = 0x8; // bool
                constexpr std::ptrdiff_t m_bSpottedByMask = 0xC; // uint32[2]
            }
            // Parent: C_GameRulesProxy
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_pGameRules (CCSGameRules*)
            namespace C_CSGameRulesProxy {
                constexpr std::ptrdiff_t m_pGameRules = 0x6D0; // C_CSGameRules*
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
            namespace C_CSGameRules {
                constexpr std::ptrdiff_t __m_pChainEntity = 0x8; // CNetworkVarChainer
                constexpr std::ptrdiff_t m_bFreezePeriod = 0x30; // bool
                constexpr std::ptrdiff_t m_bWarmupPeriod = 0x31; // bool
                constexpr std::ptrdiff_t m_fWarmupPeriodEnd = 0x34; // GameTime_t
                constexpr std::ptrdiff_t m_fWarmupPeriodStart = 0x38; // GameTime_t
                constexpr std::ptrdiff_t m_nTotalPausedTicks = 0x3C; // int32
                constexpr std::ptrdiff_t m_nPauseStartTick = 0x40; // int32
                constexpr std::ptrdiff_t m_bServerPaused = 0x44; // bool
                constexpr std::ptrdiff_t m_bGamePaused = 0x45; // bool
                constexpr std::ptrdiff_t m_bTerroristTimeOutActive = 0x46; // bool
                constexpr std::ptrdiff_t m_bCTTimeOutActive = 0x47; // bool
                constexpr std::ptrdiff_t m_flTerroristTimeOutRemaining = 0x48; // float32
                constexpr std::ptrdiff_t m_flCTTimeOutRemaining = 0x4C; // float32
                constexpr std::ptrdiff_t m_nTerroristTimeOuts = 0x50; // int32
                constexpr std::ptrdiff_t m_nCTTimeOuts = 0x54; // int32
                constexpr std::ptrdiff_t m_bTechnicalTimeOut = 0x58; // bool
                constexpr std::ptrdiff_t m_bMatchWaitingForResume = 0x59; // bool
                constexpr std::ptrdiff_t m_iRoundTime = 0x5C; // int32
                constexpr std::ptrdiff_t m_fMatchStartTime = 0x60; // float32
                constexpr std::ptrdiff_t m_fRoundStartTime = 0x64; // GameTime_t
                constexpr std::ptrdiff_t m_flRestartRoundTime = 0x68; // GameTime_t
                constexpr std::ptrdiff_t m_bGameRestart = 0x6C; // bool
                constexpr std::ptrdiff_t m_flGameStartTime = 0x70; // float32
                constexpr std::ptrdiff_t m_timeUntilNextPhaseStarts = 0x74; // float32
                constexpr std::ptrdiff_t m_gamePhase = 0x78; // int32
                constexpr std::ptrdiff_t m_totalRoundsPlayed = 0x7C; // int32
                constexpr std::ptrdiff_t m_nRoundsPlayedThisPhase = 0x80; // int32
                constexpr std::ptrdiff_t m_nOvertimePlaying = 0x84; // int32
                constexpr std::ptrdiff_t m_iHostagesRemaining = 0x88; // int32
                constexpr std::ptrdiff_t m_bAnyHostageReached = 0x8C; // bool
                constexpr std::ptrdiff_t m_bMapHasBombTarget = 0x8D; // bool
                constexpr std::ptrdiff_t m_bMapHasRescueZone = 0x8E; // bool
                constexpr std::ptrdiff_t m_bMapHasBuyZone = 0x8F; // bool
                constexpr std::ptrdiff_t m_bIsQueuedMatchmaking = 0x90; // bool
                constexpr std::ptrdiff_t m_nQueuedMatchmakingMode = 0x94; // int32
                constexpr std::ptrdiff_t m_bIsValveDS = 0x98; // bool
                constexpr std::ptrdiff_t m_bLogoMap = 0x99; // bool
                constexpr std::ptrdiff_t m_bPlayAllStepSoundsOnServer = 0x9A; // bool
                constexpr std::ptrdiff_t m_iSpectatorSlotCount = 0x9C; // int32
                constexpr std::ptrdiff_t m_MatchDevice = 0xA0; // int32
                constexpr std::ptrdiff_t m_bHasMatchStarted = 0xA4; // bool
                constexpr std::ptrdiff_t m_nNextMapInMapgroup = 0xA8; // int32
                constexpr std::ptrdiff_t m_szTournamentEventName = 0xAC; // char[512]
                constexpr std::ptrdiff_t m_szTournamentEventStage = 0x2AC; // char[512]
                constexpr std::ptrdiff_t m_szMatchStatTxt = 0x4AC; // char[512]
                constexpr std::ptrdiff_t m_szTournamentPredictionsTxt = 0x6AC; // char[512]
                constexpr std::ptrdiff_t m_nTournamentPredictionsPct = 0x8AC; // int32
                constexpr std::ptrdiff_t m_flCMMItemDropRevealStartTime = 0x8B0; // GameTime_t
                constexpr std::ptrdiff_t m_flCMMItemDropRevealEndTime = 0x8B4; // GameTime_t
                constexpr std::ptrdiff_t m_bIsDroppingItems = 0x8B8; // bool
                constexpr std::ptrdiff_t m_bIsQuestEligible = 0x8B9; // bool
                constexpr std::ptrdiff_t m_bIsHltvActive = 0x8BA; // bool
                constexpr std::ptrdiff_t m_nGuardianModeWaveNumber = 0x8BC; // int32
                constexpr std::ptrdiff_t m_nGuardianModeSpecialKillsRemaining = 0x8C0; // int32
                constexpr std::ptrdiff_t m_nGuardianModeSpecialWeaponNeeded = 0x8C4; // int32
                constexpr std::ptrdiff_t m_nGuardianGrenadesToGiveBots = 0x8C8; // int32
                constexpr std::ptrdiff_t m_nNumHeaviesToSpawn = 0x8CC; // int32
                constexpr std::ptrdiff_t m_numGlobalGiftsGiven = 0x8D0; // uint32
                constexpr std::ptrdiff_t m_numGlobalGifters = 0x8D4; // uint32
                constexpr std::ptrdiff_t m_numGlobalGiftsPeriodSeconds = 0x8D8; // uint32
                constexpr std::ptrdiff_t m_arrFeaturedGiftersAccounts = 0x8DC; // uint32[4]
                constexpr std::ptrdiff_t m_arrFeaturedGiftersGifts = 0x8EC; // uint32[4]
                constexpr std::ptrdiff_t m_arrProhibitedItemIndices = 0x8FC; // uint16[100]
                constexpr std::ptrdiff_t m_arrTournamentActiveCasterAccounts = 0x9C4; // uint32[4]
                constexpr std::ptrdiff_t m_numBestOfMaps = 0x9D4; // int32
                constexpr std::ptrdiff_t m_nHalloweenMaskListSeed = 0x9D8; // int32
                constexpr std::ptrdiff_t m_bBombDropped = 0x9DC; // bool
                constexpr std::ptrdiff_t m_bBombPlanted = 0x9DD; // bool
                constexpr std::ptrdiff_t m_iRoundWinStatus = 0x9E0; // int32
                constexpr std::ptrdiff_t m_eRoundWinReason = 0x9E4; // int32
                constexpr std::ptrdiff_t m_bTCantBuy = 0x9E8; // bool
                constexpr std::ptrdiff_t m_bCTCantBuy = 0x9E9; // bool
                constexpr std::ptrdiff_t m_flGuardianBuyUntilTime = 0x9EC; // GameTime_t
                constexpr std::ptrdiff_t m_iMatchStats_RoundResults = 0x9F0; // int32[30]
                constexpr std::ptrdiff_t m_iMatchStats_PlayersAlive_CT = 0xA68; // int32[30]
                constexpr std::ptrdiff_t m_iMatchStats_PlayersAlive_T = 0xAE0; // int32[30]
                constexpr std::ptrdiff_t m_TeamRespawnWaveTimes = 0xB58; // float32[32]
                constexpr std::ptrdiff_t m_flNextRespawnWave = 0xBD8; // GameTime_t[32]
                constexpr std::ptrdiff_t m_nServerQuestID = 0xC58; // int32
                constexpr std::ptrdiff_t m_vMinimapMins = 0xC5C; // Vector
                constexpr std::ptrdiff_t m_vMinimapMaxs = 0xC68; // Vector
                constexpr std::ptrdiff_t m_MinimapVerticalSectionHeights = 0xC74; // float32[8]
                constexpr std::ptrdiff_t m_bDontIncrementCoopWave = 0xC94; // bool
                constexpr std::ptrdiff_t m_bSpawnedTerrorHuntHeavy = 0xC95; // bool
                constexpr std::ptrdiff_t m_nEndMatchMapGroupVoteTypes = 0xC98; // int32[10]
                constexpr std::ptrdiff_t m_nEndMatchMapGroupVoteOptions = 0xCC0; // int32[10]
                constexpr std::ptrdiff_t m_nEndMatchMapVoteWinner = 0xCE8; // int32
                constexpr std::ptrdiff_t m_iNumConsecutiveCTLoses = 0xCEC; // int32
                constexpr std::ptrdiff_t m_iNumConsecutiveTerroristLoses = 0xCF0; // int32
                constexpr std::ptrdiff_t m_bMarkClientStopRecordAtRoundEnd = 0xD10; // bool
                constexpr std::ptrdiff_t m_nMatchAbortedEarlyReason = 0xD68; // int32
                constexpr std::ptrdiff_t m_bHasTriggeredRoundStartMusic = 0xD6C; // bool
                constexpr std::ptrdiff_t m_bHasTriggeredCoopSpawnReset = 0xD6D; // bool
                constexpr std::ptrdiff_t m_bSwitchingTeamsAtRoundReset = 0xD6E; // bool
                constexpr std::ptrdiff_t m_pGameModeRules = 0xD88; // CCSGameModeRules*
                constexpr std::ptrdiff_t m_RetakeRules = 0xD90; // C_RetakeGameRules
                constexpr std::ptrdiff_t m_nMatchEndCount = 0xEA8; // uint8
                constexpr std::ptrdiff_t m_nTTeamIntroVariant = 0xEAC; // int32
                constexpr std::ptrdiff_t m_nCTTeamIntroVariant = 0xEB0; // int32
                constexpr std::ptrdiff_t m_bTeamIntroPeriod = 0xEB4; // bool
                constexpr std::ptrdiff_t m_iRoundEndWinnerTeam = 0xEB8; // int32
                constexpr std::ptrdiff_t m_eRoundEndReason = 0xEBC; // int32
                constexpr std::ptrdiff_t m_bRoundEndShowTimerDefend = 0xEC0; // bool
                constexpr std::ptrdiff_t m_iRoundEndTimerTime = 0xEC4; // int32
                constexpr std::ptrdiff_t m_sRoundEndFunFactToken = 0xEC8; // CUtlString
                constexpr std::ptrdiff_t m_iRoundEndFunFactPlayerSlot = 0xED0; // CPlayerSlot
                constexpr std::ptrdiff_t m_iRoundEndFunFactData1 = 0xED4; // int32
                constexpr std::ptrdiff_t m_iRoundEndFunFactData2 = 0xED8; // int32
                constexpr std::ptrdiff_t m_iRoundEndFunFactData3 = 0xEDC; // int32
                constexpr std::ptrdiff_t m_sRoundEndMessage = 0xEE0; // CUtlString
                constexpr std::ptrdiff_t m_iRoundEndPlayerCount = 0xEE8; // int32
                constexpr std::ptrdiff_t m_bRoundEndNoMusic = 0xEEC; // bool
                constexpr std::ptrdiff_t m_iRoundEndLegacy = 0xEF0; // int32
                constexpr std::ptrdiff_t m_nRoundEndCount = 0xEF4; // uint8
                constexpr std::ptrdiff_t m_iRoundStartRoundNumber = 0xEF8; // int32
                constexpr std::ptrdiff_t m_nRoundStartCount = 0xEFC; // uint8
                constexpr std::ptrdiff_t m_flLastPerfSampleTime = 0x4F08; // float64
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            namespace CCSTakeDamageInfoAPI {
            }
            // Parent: None
            // Fields count: 1
            namespace CCSGameModeRules {
                constexpr std::ptrdiff_t __m_pChainEntity = 0x8; // CNetworkVarChainer
            }
            // Parent: CCSGameModeRules
            // Fields count: 0
            namespace CCSGameModeRules_Noop {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseInstanceDomainInfo
            // MPulseLibraryBindings
            // MPulseDomainOptInFeatureTag
            namespace CCSGameModeScript {
            }
            // Parent: CCSGameModeRules
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_WeaponSequence (CUtlString)
            namespace CCSGameModeRules_ArmsRace {
                constexpr std::ptrdiff_t m_WeaponSequence = 0x38; // C_NetworkUtlVectorBase<CUtlString>
            }
            // Parent: CCSGameModeScript
            // Fields count: 1
            //
            // Metadata:
            // MPulseInstanceDomainInfo
            // MPulseLibraryBindings
            // MPulseDomainOptInFeatureTag
            namespace CCSArmsRaceScript {
                constexpr std::ptrdiff_t m_pOuter = 0xD8; // CCSGameModeRules_ArmsRace*
            }
            // Parent: CCSGameModeRules
            // Fields count: 3
            //
            // Metadata:
            // NetworkVarNames: m_flDMBonusStartTime (GameTime_t)
            // NetworkVarNames: m_flDMBonusTimeLength (float)
            // NetworkVarNames: m_nDMBonusWeaponLoadoutSlot (int16)
            namespace CCSGameModeRules_Deathmatch {
                constexpr std::ptrdiff_t m_flDMBonusStartTime = 0x38; // GameTime_t
                constexpr std::ptrdiff_t m_flDMBonusTimeLength = 0x3C; // float32
                constexpr std::ptrdiff_t m_nDMBonusWeaponLoadoutSlot = 0x40; // int16
            }
            // Parent: CCSGameModeScript
            // Fields count: 1
            //
            // Metadata:
            // MPulseInstanceDomainInfo
            // MPulseLibraryBindings
            // MPulseDomainOptInFeatureTag
            namespace CCSDeathmatchScript {
                constexpr std::ptrdiff_t m_pOuter = 0xD8; // CCSGameModeRules_Deathmatch*
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
            namespace C_RetakeGameRules {
                constexpr std::ptrdiff_t m_nMatchSeed = 0xF8; // int32
                constexpr std::ptrdiff_t m_bBlockersPresent = 0xFC; // bool
                constexpr std::ptrdiff_t m_bRoundInProgress = 0xFD; // bool
                constexpr std::ptrdiff_t m_iFirstSecondHalfRound = 0x100; // int32
                constexpr std::ptrdiff_t m_iBombSite = 0x104; // int32
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
            namespace CSPerRoundStats_t {
                constexpr std::ptrdiff_t m_iKills = 0x30; // int32
                constexpr std::ptrdiff_t m_iDeaths = 0x34; // int32
                constexpr std::ptrdiff_t m_iAssists = 0x38; // int32
                constexpr std::ptrdiff_t m_iDamage = 0x3C; // int32
                constexpr std::ptrdiff_t m_iEquipmentValue = 0x40; // int32
                constexpr std::ptrdiff_t m_iMoneySaved = 0x44; // int32
                constexpr std::ptrdiff_t m_iKillReward = 0x48; // int32
                constexpr std::ptrdiff_t m_iLiveTime = 0x4C; // int32
                constexpr std::ptrdiff_t m_iHeadShotKills = 0x50; // int32
                constexpr std::ptrdiff_t m_iObjective = 0x54; // int32
                constexpr std::ptrdiff_t m_iCashEarned = 0x58; // int32
                constexpr std::ptrdiff_t m_iUtilityDamage = 0x5C; // int32
                constexpr std::ptrdiff_t m_iEnemiesFlashed = 0x60; // int32
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
            namespace CSMatchStats_t {
                constexpr std::ptrdiff_t m_iEnemy5Ks = 0x64; // int32
                constexpr std::ptrdiff_t m_iEnemy4Ks = 0x68; // int32
                constexpr std::ptrdiff_t m_iEnemy3Ks = 0x6C; // int32
                constexpr std::ptrdiff_t m_iEnemyKnifeKills = 0x70; // int32
                constexpr std::ptrdiff_t m_iEnemyTaserKills = 0x74; // int32
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
            namespace C_CSGO_TeamPreviewCharacterPosition {
                constexpr std::ptrdiff_t m_nVariant = 0x6D0; // int32
                constexpr std::ptrdiff_t m_nRandom = 0x6D4; // int32
                constexpr std::ptrdiff_t m_nOrdinal = 0x6D8; // int32
                constexpr std::ptrdiff_t m_sWeaponName = 0x6E0; // CUtlString
                constexpr std::ptrdiff_t m_xuid = 0x6E8; // uint64
                constexpr std::ptrdiff_t m_agentItem = 0x6F0; // C_EconItemView
                constexpr std::ptrdiff_t m_glovesItem = 0x1A40; // C_EconItemView
                constexpr std::ptrdiff_t m_weaponItem = 0x2D90; // C_EconItemView
            }
            // Parent: C_CSGO_TeamPreviewCharacterPosition
            // Fields count: 0
            namespace C_CSGO_TeamSelectCharacterPosition {
            }
            // Parent: C_CSGO_TeamSelectCharacterPosition
            // Fields count: 0
            namespace C_CSGO_TeamSelectTerroristPosition {
            }
            // Parent: C_CSGO_TeamSelectCharacterPosition
            // Fields count: 0
            namespace C_CSGO_TeamSelectCounterTerroristPosition {
            }
            // Parent: C_CSGO_TeamPreviewCharacterPosition
            // Fields count: 0
            namespace C_CSGO_TeamIntroCharacterPosition {
            }
            // Parent: C_CSGO_TeamIntroCharacterPosition
            // Fields count: 0
            namespace C_CSGO_TeamIntroTerroristPosition {
            }
            // Parent: C_CSGO_TeamIntroCharacterPosition
            // Fields count: 0
            namespace C_CSGO_TeamIntroCounterTerroristPosition {
            }
            // Parent: C_CSGO_TeamIntroCharacterPosition
            // Fields count: 0
            namespace CCSGO_WingmanIntroCharacterPosition {
            }
            // Parent: CCSGO_WingmanIntroCharacterPosition
            // Fields count: 0
            namespace CCSGO_WingmanIntroTerroristPosition {
            }
            // Parent: CCSGO_WingmanIntroCharacterPosition
            // Fields count: 0
            namespace CCSGO_WingmanIntroCounterTerroristPosition {
            }
            // Parent: C_BaseEntity
            // Fields count: 0
            namespace C_CSMinimapBoundary {
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
            namespace C_PlayerPing {
                constexpr std::ptrdiff_t m_hPlayer = 0x700; // CHandle<C_CSPlayerPawn>
                constexpr std::ptrdiff_t m_hPingedEntity = 0x704; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_iType = 0x708; // int32
                constexpr std::ptrdiff_t m_bUrgent = 0x70C; // bool
                constexpr std::ptrdiff_t m_szPlaceName = 0x70D; // char[18]
            }
            // Parent: CPlayerPawnComponent
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_hPlayerPing (CHandle< CBaseEntity>)
            namespace CCSPlayer_PingServices {
                constexpr std::ptrdiff_t m_hPlayerPing = 0x40; // CHandle<C_BaseEntity>
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
            namespace C_CSPlayerResource {
                constexpr std::ptrdiff_t m_bHostageAlive = 0x6D0; // bool[12]
                constexpr std::ptrdiff_t m_isHostageFollowingSomeone = 0x6DC; // bool[12]
                constexpr std::ptrdiff_t m_iHostageEntityIDs = 0x6E8; // CEntityIndex[12]
                constexpr std::ptrdiff_t m_bombsiteCenterA = 0x718; // Vector
                constexpr std::ptrdiff_t m_bombsiteCenterB = 0x724; // Vector
                constexpr std::ptrdiff_t m_hostageRescueX = 0x730; // int32[4]
                constexpr std::ptrdiff_t m_hostageRescueY = 0x740; // int32[4]
                constexpr std::ptrdiff_t m_hostageRescueZ = 0x750; // int32[4]
                constexpr std::ptrdiff_t m_bEndMatchNextMapAllVoted = 0x760; // bool
                constexpr std::ptrdiff_t m_foundGoalPositions = 0x761; // bool
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            namespace CCSPlayerControllerAPI {
            }
            // Parent: CPlayerPawnComponent
            // Fields count: 0
            namespace CPlayer_ViewModelServices {
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
            namespace CCSPlayerBase_CameraServices {
                constexpr std::ptrdiff_t m_iFOV = 0x210; // uint32
                constexpr std::ptrdiff_t m_iFOVStart = 0x214; // uint32
                constexpr std::ptrdiff_t m_flFOVTime = 0x218; // GameTime_t
                constexpr std::ptrdiff_t m_flFOVRate = 0x21C; // float32
                constexpr std::ptrdiff_t m_hZoomOwner = 0x220; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_flLastShotFOV = 0x224; // float32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_nItemDefIndex (uint16)
            // NetworkVarNames: m_nCount (uint16)
            namespace WeaponPurchaseCount_t {
                constexpr std::ptrdiff_t m_nItemDefIndex = 0x30; // uint16
                constexpr std::ptrdiff_t m_nCount = 0x32; // uint16
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_weaponPurchases (WeaponPurchaseCount_t)
            namespace WeaponPurchaseTracker_t {
                constexpr std::ptrdiff_t m_weaponPurchases = 0x8; // C_UtlVectorEmbeddedNetworkVar<WeaponPurchaseCount_t>
            }
            // Parent: CPlayerPawnComponent
            // Fields count: 4
            //
            // Metadata:
            // NetworkVarNames: m_bIsRescuing (bool)
            // NetworkVarNames: m_weaponPurchasesThisMatch (WeaponPurchaseTracker_t)
            // NetworkVarNames: m_weaponPurchasesThisRound (WeaponPurchaseTracker_t)
            namespace CCSPlayer_ActionTrackingServices {
                constexpr std::ptrdiff_t m_hLastWeaponBeforeC4AutoSwitch = 0x40; // CHandle<C_BasePlayerWeapon>
                constexpr std::ptrdiff_t m_bIsRescuing = 0x44; // bool
                constexpr std::ptrdiff_t m_weaponPurchasesThisMatch = 0x48; // WeaponPurchaseTracker_t
                constexpr std::ptrdiff_t m_weaponPurchasesThisRound = 0xA0; // WeaponPurchaseTracker_t
            }
            // Parent: CPlayerPawnComponent
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_totalHitsOnServer (int32)
            namespace CCSPlayer_BulletServices {
                constexpr std::ptrdiff_t m_totalHitsOnServer = 0x40; // int32
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
            namespace SellbackPurchaseEntry_t {
                constexpr std::ptrdiff_t m_unDefIdx = 0x30; // uint16
                constexpr std::ptrdiff_t m_nCost = 0x34; // int32
                constexpr std::ptrdiff_t m_nPrevArmor = 0x38; // int32
                constexpr std::ptrdiff_t m_bPrevHelmet = 0x3C; // bool
                constexpr std::ptrdiff_t m_hItem = 0x40; // CEntityHandle
            }
            // Parent: CPlayerPawnComponent
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_vecSellbackPurchaseEntries (SellbackPurchaseEntry_t)
            namespace CCSPlayer_BuyServices {
                constexpr std::ptrdiff_t m_vecSellbackPurchaseEntries = 0x40; // C_UtlVectorEmbeddedNetworkVar<SellbackPurchaseEntry_t>
            }
            // Parent: CCSPlayerBase_CameraServices
            // Fields count: 1
            namespace CCSPlayer_CameraServices {
                constexpr std::ptrdiff_t m_flDeathCamTilt = 0x228; // float32
            }
            // Parent: CPlayerPawnComponent
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_hCarriedHostage (CHandle< CBaseEntity>)
            // NetworkVarNames: m_hCarriedHostageProp (CHandle< CBaseEntity>)
            namespace CCSPlayer_HostageServices {
                constexpr std::ptrdiff_t m_hCarriedHostage = 0x40; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_hCarriedHostageProp = 0x44; // CHandle<C_BaseEntity>
            }
            // Parent: CPlayer_ItemServices
            // Fields count: 3
            //
            // Metadata:
            // NetworkVarNames: m_bHasDefuser (bool)
            // NetworkVarNames: m_bHasHelmet (bool)
            // NetworkVarNames: m_bHasHeavyArmor (bool)
            namespace CCSPlayer_ItemServices {
                constexpr std::ptrdiff_t m_bHasDefuser = 0x40; // bool
                constexpr std::ptrdiff_t m_bHasHelmet = 0x41; // bool
                constexpr std::ptrdiff_t m_bHasHeavyArmor = 0x42; // bool
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
            namespace CCSPlayer_MovementServices {
                constexpr std::ptrdiff_t m_flMaxFallVelocity = 0x214; // float32
                constexpr std::ptrdiff_t m_vecLadderNormal = 0x218; // Vector
                constexpr std::ptrdiff_t m_nLadderSurfacePropIndex = 0x224; // int32
                constexpr std::ptrdiff_t m_flDuckAmount = 0x228; // float32
                constexpr std::ptrdiff_t m_flDuckSpeed = 0x22C; // float32
                constexpr std::ptrdiff_t m_bDuckOverride = 0x230; // bool
                constexpr std::ptrdiff_t m_bDesiresDuck = 0x231; // bool
                constexpr std::ptrdiff_t m_flDuckOffset = 0x234; // float32
                constexpr std::ptrdiff_t m_nDuckTimeMsecs = 0x238; // uint32
                constexpr std::ptrdiff_t m_nDuckJumpTimeMsecs = 0x23C; // uint32
                constexpr std::ptrdiff_t m_nJumpTimeMsecs = 0x240; // uint32
                constexpr std::ptrdiff_t m_flLastDuckTime = 0x244; // float32
                constexpr std::ptrdiff_t m_vecLastPositionAtFullCrouchSpeed = 0x250; // Vector2D
                constexpr std::ptrdiff_t m_duckUntilOnGround = 0x258; // bool
                constexpr std::ptrdiff_t m_bHasWalkMovedSinceLastJump = 0x259; // bool
                constexpr std::ptrdiff_t m_bInStuckTest = 0x25A; // bool
                constexpr std::ptrdiff_t m_flStuckCheckTime = 0x268; // float32[64][2]
                constexpr std::ptrdiff_t m_nTraceCount = 0x468; // int32
                constexpr std::ptrdiff_t m_StuckLast = 0x46C; // int32
                constexpr std::ptrdiff_t m_bSpeedCropped = 0x470; // bool
                constexpr std::ptrdiff_t m_nOldWaterLevel = 0x474; // int32
                constexpr std::ptrdiff_t m_flWaterEntryTime = 0x478; // float32
                constexpr std::ptrdiff_t m_vecForward = 0x47C; // Vector
                constexpr std::ptrdiff_t m_vecLeft = 0x488; // Vector
                constexpr std::ptrdiff_t m_vecUp = 0x494; // Vector
                constexpr std::ptrdiff_t m_nGameCodeHasMovedPlayerAfterCommand = 0x4A0; // int32
                constexpr std::ptrdiff_t m_bOldJumpPressed = 0x4A4; // bool
                constexpr std::ptrdiff_t m_flJumpPressedTime = 0x4A8; // float32
                constexpr std::ptrdiff_t m_flJumpUntil = 0x4AC; // float32
                constexpr std::ptrdiff_t m_flJumpVel = 0x4B0; // float32
                constexpr std::ptrdiff_t m_fStashGrenadeParameterWhen = 0x4B4; // GameTime_t
                constexpr std::ptrdiff_t m_nButtonDownMaskPrev = 0x4B8; // uint64
                constexpr std::ptrdiff_t m_flOffsetTickCompleteTime = 0x4C0; // float32
                constexpr std::ptrdiff_t m_flOffsetTickStashedSpeed = 0x4C4; // float32
                constexpr std::ptrdiff_t m_flStamina = 0x4C8; // float32
                constexpr std::ptrdiff_t m_flHeightAtJumpStart = 0x4CC; // float32
                constexpr std::ptrdiff_t m_flMaxJumpHeightThisJump = 0x4D0; // float32
            }
            // Parent: CPlayer_UseServices
            // Fields count: 0
            namespace CCSPlayer_UseServices {
            }
            // Parent: CPlayer_ViewModelServices
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_hViewModel (CHandle< CBaseViewModel >)
            namespace CCSPlayer_ViewModelServices {
                constexpr std::ptrdiff_t m_hViewModel = 0x40; // CHandle<C_BaseViewModel>[3]
            }
            // Parent: CPlayer_WaterServices
            // Fields count: 3
            namespace CCSPlayer_WaterServices {
                constexpr std::ptrdiff_t m_flWaterJumpTime = 0x40; // float32
                constexpr std::ptrdiff_t m_vecWaterJumpVel = 0x44; // Vector
                constexpr std::ptrdiff_t m_flSwimSoundTime = 0x50; // float32
            }
            // Parent: CPlayer_WeaponServices
            // Fields count: 5
            //
            // Metadata:
            // NetworkVarNames: m_flNextAttack (GameTime_t)
            // NetworkVarNames: m_bIsLookingAtWeapon (bool)
            // NetworkVarNames: m_bIsHoldingLookAtWeapon (bool)
            namespace CCSPlayer_WeaponServices {
                constexpr std::ptrdiff_t m_flNextAttack = 0xB8; // GameTime_t
                constexpr std::ptrdiff_t m_bIsLookingAtWeapon = 0xBC; // bool
                constexpr std::ptrdiff_t m_bIsHoldingLookAtWeapon = 0xBD; // bool
                constexpr std::ptrdiff_t m_nOldShootPositionHistoryCount = 0xC0; // uint32
                constexpr std::ptrdiff_t m_nOldInputHistoryCount = 0x458; // uint32
            }
            // Parent: CPlayer_ObserverServices
            // Fields count: 8
            namespace CCSObserver_ObserverServices {
                constexpr std::ptrdiff_t m_hLastObserverTarget = 0x58; // CEntityHandle
                constexpr std::ptrdiff_t m_vecObserverInterpolateOffset = 0x5C; // Vector
                constexpr std::ptrdiff_t m_vecObserverInterpStartPos = 0x68; // Vector
                constexpr std::ptrdiff_t m_flObsInterp_PathLength = 0x74; // float32
                constexpr std::ptrdiff_t m_qObsInterp_OrientationStart = 0x80; // Quaternion
                constexpr std::ptrdiff_t m_qObsInterp_OrientationTravelDir = 0x90; // Quaternion
                constexpr std::ptrdiff_t m_obsInterpState = 0xA0; // ObserverInterpState_t
                constexpr std::ptrdiff_t m_bObserverInterpolationNeedsDeferredSetup = 0xA4; // bool
            }
            // Parent: CCSPlayerBase_CameraServices
            // Fields count: 0
            namespace CCSObserver_CameraServices {
            }
            // Parent: CPlayer_MovementServices
            // Fields count: 0
            namespace CCSObserver_MovementServices {
            }
            // Parent: CPlayer_UseServices
            // Fields count: 0
            namespace CCSObserver_UseServices {
            }
            // Parent: CPlayer_ViewModelServices
            // Fields count: 0
            namespace CCSObserver_ViewModelServices {
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
            namespace CCSPlayerController_ActionTrackingServices {
                constexpr std::ptrdiff_t m_perRoundStats = 0x40; // C_UtlVectorEmbeddedNetworkVar<CSPerRoundStats_t>
                constexpr std::ptrdiff_t m_matchStats = 0x90; // CSMatchStats_t
                constexpr std::ptrdiff_t m_iNumRoundKills = 0x108; // int32
                constexpr std::ptrdiff_t m_iNumRoundKillsHeadshots = 0x10C; // int32
                constexpr std::ptrdiff_t m_unTotalRoundDamageDealt = 0x110; // uint32
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
            namespace CDamageRecord {
                constexpr std::ptrdiff_t m_PlayerDamager = 0x28; // CHandle<C_CSPlayerPawnBase>
                constexpr std::ptrdiff_t m_PlayerRecipient = 0x2C; // CHandle<C_CSPlayerPawnBase>
                constexpr std::ptrdiff_t m_hPlayerControllerDamager = 0x30; // CHandle<CCSPlayerController>
                constexpr std::ptrdiff_t m_hPlayerControllerRecipient = 0x34; // CHandle<CCSPlayerController>
                constexpr std::ptrdiff_t m_szPlayerDamagerName = 0x38; // CUtlString
                constexpr std::ptrdiff_t m_szPlayerRecipientName = 0x40; // CUtlString
                constexpr std::ptrdiff_t m_DamagerXuid = 0x48; // uint64
                constexpr std::ptrdiff_t m_RecipientXuid = 0x50; // uint64
                constexpr std::ptrdiff_t m_iDamage = 0x58; // int32
                constexpr std::ptrdiff_t m_iActualHealthRemoved = 0x5C; // int32
                constexpr std::ptrdiff_t m_iNumHits = 0x60; // int32
                constexpr std::ptrdiff_t m_iLastBulletUpdate = 0x64; // int32
                constexpr std::ptrdiff_t m_bIsOtherEnemy = 0x68; // bool
                constexpr std::ptrdiff_t m_killType = 0x69; // EKillTypes_t
            }
            // Parent: CPlayerControllerComponent
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_nSendUpdate (int)
            // NetworkVarNames: m_DamageList (CDamageRecord)
            namespace CCSPlayerController_DamageServices {
                constexpr std::ptrdiff_t m_nSendUpdate = 0x40; // int32
                constexpr std::ptrdiff_t m_DamageList = 0x48; // C_UtlVectorEmbeddedNetworkVar<CDamageRecord>
            }
            // Parent: CPlayerControllerComponent
            // Fields count: 5
            //
            // Metadata:
            // NetworkVarNames: m_iAccount (int)
            // NetworkVarNames: m_iStartAccount (int)
            // NetworkVarNames: m_iTotalCashSpent (int)
            // NetworkVarNames: m_iCashSpentThisRound (int)
            namespace CCSPlayerController_InGameMoneyServices {
                constexpr std::ptrdiff_t m_iAccount = 0x40; // int32
                constexpr std::ptrdiff_t m_iStartAccount = 0x44; // int32
                constexpr std::ptrdiff_t m_iTotalCashSpent = 0x48; // int32
                constexpr std::ptrdiff_t m_iCashSpentThisRound = 0x4C; // int32
                constexpr std::ptrdiff_t m_nPreviousAccount = 0x50; // int32
            }
            // Parent: None
            // Fields count: 3
            namespace ServerAuthoritativeWeaponSlot_t {
                constexpr std::ptrdiff_t unClass = 0x28; // uint16
                constexpr std::ptrdiff_t unSlot = 0x2A; // uint16
                constexpr std::ptrdiff_t unItemDefIdx = 0x2C; // uint16
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
            namespace CCSPlayerController_InventoryServices {
                constexpr std::ptrdiff_t m_unMusicID = 0x40; // uint16
                constexpr std::ptrdiff_t m_rank = 0x44; // MedalRank_t[6]
                constexpr std::ptrdiff_t m_nPersonaDataPublicLevel = 0x5C; // int32
                constexpr std::ptrdiff_t m_nPersonaDataPublicCommendsLeader = 0x60; // int32
                constexpr std::ptrdiff_t m_nPersonaDataPublicCommendsTeacher = 0x64; // int32
                constexpr std::ptrdiff_t m_nPersonaDataPublicCommendsFriendly = 0x68; // int32
                constexpr std::ptrdiff_t m_nPersonaDataXpTrailLevel = 0x6C; // int32
                constexpr std::ptrdiff_t m_vecServerAuthoritativeWeaponSlots = 0x70; // C_UtlVectorEmbeddedNetworkVar<ServerAuthoritativeWeaponSlot_t>
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            namespace CCSWeaponBaseVDataAPI {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            namespace CCSWeaponBaseAPI {
            }
            // Parent: None
            // Fields count: 13
            namespace C_IronSightController {
                constexpr std::ptrdiff_t m_bIronSightAvailable = 0x10; // bool
                constexpr std::ptrdiff_t m_flIronSightAmount = 0x14; // float32
                constexpr std::ptrdiff_t m_flIronSightAmountGained = 0x18; // float32
                constexpr std::ptrdiff_t m_flIronSightAmountBiased = 0x1C; // float32
                constexpr std::ptrdiff_t m_flIronSightAmount_Interpolated = 0x20; // float32
                constexpr std::ptrdiff_t m_flIronSightAmountGained_Interpolated = 0x24; // float32
                constexpr std::ptrdiff_t m_flIronSightAmountBiased_Interpolated = 0x28; // float32
                constexpr std::ptrdiff_t m_flInterpolationLastUpdated = 0x2C; // float32
                constexpr std::ptrdiff_t m_angDeltaAverage = 0x30; // QAngle[8]
                constexpr std::ptrdiff_t m_angViewLast = 0x90; // QAngle
                constexpr std::ptrdiff_t m_vecDotCoords = 0x9C; // Vector2D
                constexpr std::ptrdiff_t m_flDotBlur = 0xA4; // float32
                constexpr std::ptrdiff_t m_flSpeedRatio = 0xA8; // float32
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyElementNameFn
            namespace CompositeMaterialMatchFilter_t {
                constexpr std::ptrdiff_t m_nCompositeMaterialMatchFilterType = 0x0; // CompositeMaterialMatchFilterType_t
                constexpr std::ptrdiff_t m_strMatchFilter = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_strMatchValue = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_bPassWhenTrue = 0x18; // bool
            }
            // Parent: None
            // Fields count: 34
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyElementNameFn
            namespace CompositeMaterialInputLooseVariable_t {
                constexpr std::ptrdiff_t m_strName = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_bExposeExternally = 0x8; // bool
                constexpr std::ptrdiff_t m_strExposedFriendlyName = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_strExposedFriendlyGroupName = 0x18; // CUtlString
                constexpr std::ptrdiff_t m_bExposedVariableIsFixedRange = 0x20; // bool
                constexpr std::ptrdiff_t m_strExposedVisibleWhenTrue = 0x28; // CUtlString
                constexpr std::ptrdiff_t m_strExposedHiddenWhenTrue = 0x30; // CUtlString
                constexpr std::ptrdiff_t m_nVariableType = 0x38; // CompositeMaterialInputLooseVariableType_t
                constexpr std::ptrdiff_t m_bValueBoolean = 0x3C; // bool
                constexpr std::ptrdiff_t m_nValueIntX = 0x40; // int32
                constexpr std::ptrdiff_t m_nValueIntY = 0x44; // int32
                constexpr std::ptrdiff_t m_nValueIntZ = 0x48; // int32
                constexpr std::ptrdiff_t m_nValueIntW = 0x4C; // int32
                constexpr std::ptrdiff_t m_bHasFloatBounds = 0x50; // bool
                constexpr std::ptrdiff_t m_flValueFloatX = 0x54; // float32
                constexpr std::ptrdiff_t m_flValueFloatX_Min = 0x58; // float32
                constexpr std::ptrdiff_t m_flValueFloatX_Max = 0x5C; // float32
                constexpr std::ptrdiff_t m_flValueFloatY = 0x60; // float32
                constexpr std::ptrdiff_t m_flValueFloatY_Min = 0x64; // float32
                constexpr std::ptrdiff_t m_flValueFloatY_Max = 0x68; // float32
                constexpr std::ptrdiff_t m_flValueFloatZ = 0x6C; // float32
                constexpr std::ptrdiff_t m_flValueFloatZ_Min = 0x70; // float32
                constexpr std::ptrdiff_t m_flValueFloatZ_Max = 0x74; // float32
                constexpr std::ptrdiff_t m_flValueFloatW = 0x78; // float32
                constexpr std::ptrdiff_t m_flValueFloatW_Min = 0x7C; // float32
                constexpr std::ptrdiff_t m_flValueFloatW_Max = 0x80; // float32
                constexpr std::ptrdiff_t m_cValueColor4 = 0x84; // Color
                constexpr std::ptrdiff_t m_nValueSystemVar = 0x88; // CompositeMaterialVarSystemVar_t
                constexpr std::ptrdiff_t m_strResourceMaterial = 0x90; // CResourceName
                constexpr std::ptrdiff_t m_strTextureContentAssetPath = 0x170; // CUtlString
                constexpr std::ptrdiff_t m_strTextureRuntimeResourcePath = 0x178; // CResourceName
                constexpr std::ptrdiff_t m_strTextureCompilationVtexTemplate = 0x258; // CUtlString
                constexpr std::ptrdiff_t m_nTextureType = 0x260; // CompositeMaterialInputTextureType_t
                constexpr std::ptrdiff_t m_strString = 0x268; // CUtlString
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyElementNameFn
            namespace CompMatMutatorCondition_t {
                constexpr std::ptrdiff_t m_nMutatorCondition = 0x0; // CompMatPropertyMutatorConditionType_t
                constexpr std::ptrdiff_t m_strMutatorConditionContainerName = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_strMutatorConditionContainerVarName = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_strMutatorConditionContainerVarValue = 0x18; // CUtlString
                constexpr std::ptrdiff_t m_bPassWhenTrue = 0x20; // bool
            }
            // Parent: None
            // Fields count: 28
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyElementNameFn
            namespace CompMatPropertyMutator_t {
                constexpr std::ptrdiff_t m_bEnabled = 0x0; // bool
                constexpr std::ptrdiff_t m_nMutatorCommandType = 0x4; // CompMatPropertyMutatorType_t
                constexpr std::ptrdiff_t m_strInitWith_Container = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_strCopyProperty_InputContainerSrc = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_strCopyProperty_InputContainerProperty = 0x18; // CUtlString
                constexpr std::ptrdiff_t m_strCopyProperty_TargetProperty = 0x20; // CUtlString
                constexpr std::ptrdiff_t m_strRandomRollInputVars_SeedInputVar = 0x28; // CUtlString
                constexpr std::ptrdiff_t m_vecRandomRollInputVars_InputVarsToRoll = 0x30; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_strCopyMatchingKeys_InputContainerSrc = 0x48; // CUtlString
                constexpr std::ptrdiff_t m_strCopyKeysWithSuffix_InputContainerSrc = 0x50; // CUtlString
                constexpr std::ptrdiff_t m_strCopyKeysWithSuffix_FindSuffix = 0x58; // CUtlString
                constexpr std::ptrdiff_t m_strCopyKeysWithSuffix_ReplaceSuffix = 0x60; // CUtlString
                constexpr std::ptrdiff_t m_nSetValue_Value = 0x68; // CompositeMaterialInputLooseVariable_t
                constexpr std::ptrdiff_t m_strGenerateTexture_TargetParam = 0x2D8; // CUtlString
                constexpr std::ptrdiff_t m_strGenerateTexture_InitialContainer = 0x2E0; // CUtlString
                constexpr std::ptrdiff_t m_nResolution = 0x2E8; // int32
                constexpr std::ptrdiff_t m_bIsScratchTarget = 0x2EC; // bool
                constexpr std::ptrdiff_t m_bSplatDebugInfo = 0x2ED; // bool
                constexpr std::ptrdiff_t m_bCaptureInRenderDoc = 0x2EE; // bool
                constexpr std::ptrdiff_t m_vecTexGenInstructions = 0x2F0; // CUtlVector<CompMatPropertyMutator_t>
                constexpr std::ptrdiff_t m_vecConditionalMutators = 0x308; // CUtlVector<CompMatPropertyMutator_t>
                constexpr std::ptrdiff_t m_strPopInputQueue_Container = 0x320; // CUtlString
                constexpr std::ptrdiff_t m_strDrawText_InputContainerSrc = 0x328; // CUtlString
                constexpr std::ptrdiff_t m_strDrawText_InputContainerProperty = 0x330; // CUtlString
                constexpr std::ptrdiff_t m_vecDrawText_Position = 0x338; // Vector2D
                constexpr std::ptrdiff_t m_colDrawText_Color = 0x340; // Color
                constexpr std::ptrdiff_t m_strDrawText_Font = 0x348; // CUtlString
                constexpr std::ptrdiff_t m_vecConditions = 0x350; // CUtlVector<CompMatMutatorCondition_t>
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyElementNameFn
            namespace CompositeMaterialInputContainer_t {
                constexpr std::ptrdiff_t m_bEnabled = 0x0; // bool
                constexpr std::ptrdiff_t m_nCompositeMaterialInputContainerSourceType = 0x4; // CompositeMaterialInputContainerSourceType_t
                constexpr std::ptrdiff_t m_strSpecificContainerMaterial = 0x8; // CResourceName
                constexpr std::ptrdiff_t m_strAttrName = 0xE8; // CUtlString
                constexpr std::ptrdiff_t m_strAlias = 0xF0; // CUtlString
                constexpr std::ptrdiff_t m_vecLooseVariables = 0xF8; // CUtlVector<CompositeMaterialInputLooseVariable_t>
                constexpr std::ptrdiff_t m_strAttrNameForVar = 0x110; // CUtlString
                constexpr std::ptrdiff_t m_bExposeExternally = 0x118; // bool
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyElementNameFn
            namespace CompositeMaterialAssemblyProcedure_t {
                constexpr std::ptrdiff_t m_vecCompMatIncludes = 0x0; // CUtlVector<CResourceName>
                constexpr std::ptrdiff_t m_vecMatchFilters = 0x18; // CUtlVector<CompositeMaterialMatchFilter_t>
                constexpr std::ptrdiff_t m_vecCompositeInputContainers = 0x30; // CUtlVector<CompositeMaterialInputContainer_t>
                constexpr std::ptrdiff_t m_vecPropertyMutators = 0x48; // CUtlVector<CompMatPropertyMutator_t>
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MPropertyElementNameFn
            namespace GeneratedTextureHandle_t {
                constexpr std::ptrdiff_t m_strBitmapName = 0x0; // CUtlString
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MPropertyElementNameFn
            namespace CompositeMaterial_t {
                constexpr std::ptrdiff_t m_TargetKVs = 0x8; // KeyValues3
                constexpr std::ptrdiff_t m_PreGenerationKVs = 0x18; // KeyValues3
                constexpr std::ptrdiff_t m_FinalKVs = 0x28; // KeyValues3
                constexpr std::ptrdiff_t m_vecGeneratedTextures = 0x40; // CUtlVector<GeneratedTextureHandle_t>
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CompositeMaterialEditorPoint_t {
                constexpr std::ptrdiff_t m_ModelName = 0x0; // CResourceName
                constexpr std::ptrdiff_t m_nSequenceIndex = 0xE0; // int32
                constexpr std::ptrdiff_t m_flCycle = 0xE4; // float32
                constexpr std::ptrdiff_t m_KVModelStateChoices = 0xE8; // KeyValues3
                constexpr std::ptrdiff_t m_bEnableChildModel = 0xF8; // bool
                constexpr std::ptrdiff_t m_ChildModelName = 0x100; // CResourceName
                constexpr std::ptrdiff_t m_vecCompositeMaterialAssemblyProcedures = 0x1E0; // CUtlVector<CompositeMaterialAssemblyProcedure_t>
                constexpr std::ptrdiff_t m_vecCompositeMaterials = 0x1F8; // CUtlVector<CompositeMaterial_t>
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCompositeMaterialEditorDoc {
                constexpr std::ptrdiff_t m_nVersion = 0x8; // int32
                constexpr std::ptrdiff_t m_Points = 0x10; // CUtlVector<CompositeMaterialEditorPoint_t>
                constexpr std::ptrdiff_t m_KVthumbnail = 0x28; // KeyValues3
            }
            // Parent: None
            // Fields count: 43
            namespace CGlobalLightBase {
                constexpr std::ptrdiff_t m_bSpotLight = 0x10; // bool
                constexpr std::ptrdiff_t m_SpotLightOrigin = 0x14; // Vector
                constexpr std::ptrdiff_t m_SpotLightAngles = 0x20; // QAngle
                constexpr std::ptrdiff_t m_ShadowDirection = 0x2C; // Vector
                constexpr std::ptrdiff_t m_AmbientDirection = 0x38; // Vector
                constexpr std::ptrdiff_t m_SpecularDirection = 0x44; // Vector
                constexpr std::ptrdiff_t m_InspectorSpecularDirection = 0x50; // Vector
                constexpr std::ptrdiff_t m_flSpecularPower = 0x5C; // float32
                constexpr std::ptrdiff_t m_flSpecularIndependence = 0x60; // float32
                constexpr std::ptrdiff_t m_SpecularColor = 0x64; // Color
                constexpr std::ptrdiff_t m_bStartDisabled = 0x68; // bool
                constexpr std::ptrdiff_t m_bEnabled = 0x69; // bool
                constexpr std::ptrdiff_t m_LightColor = 0x6A; // Color
                constexpr std::ptrdiff_t m_AmbientColor1 = 0x6E; // Color
                constexpr std::ptrdiff_t m_AmbientColor2 = 0x72; // Color
                constexpr std::ptrdiff_t m_AmbientColor3 = 0x76; // Color
                constexpr std::ptrdiff_t m_flSunDistance = 0x7C; // float32
                constexpr std::ptrdiff_t m_flFOV = 0x80; // float32
                constexpr std::ptrdiff_t m_flNearZ = 0x84; // float32
                constexpr std::ptrdiff_t m_flFarZ = 0x88; // float32
                constexpr std::ptrdiff_t m_bEnableShadows = 0x8C; // bool
                constexpr std::ptrdiff_t m_bOldEnableShadows = 0x8D; // bool
                constexpr std::ptrdiff_t m_bBackgroundClearNotRequired = 0x8E; // bool
                constexpr std::ptrdiff_t m_flCloudScale = 0x90; // float32
                constexpr std::ptrdiff_t m_flCloud1Speed = 0x94; // float32
                constexpr std::ptrdiff_t m_flCloud1Direction = 0x98; // float32
                constexpr std::ptrdiff_t m_flCloud2Speed = 0x9C; // float32
                constexpr std::ptrdiff_t m_flCloud2Direction = 0xA0; // float32
                constexpr std::ptrdiff_t m_flAmbientScale1 = 0xB0; // float32
                constexpr std::ptrdiff_t m_flAmbientScale2 = 0xB4; // float32
                constexpr std::ptrdiff_t m_flGroundScale = 0xB8; // float32
                constexpr std::ptrdiff_t m_flLightScale = 0xBC; // float32
                constexpr std::ptrdiff_t m_flFoWDarkness = 0xC0; // float32
                constexpr std::ptrdiff_t m_bEnableSeparateSkyboxFog = 0xC4; // bool
                constexpr std::ptrdiff_t m_vFowColor = 0xC8; // Vector
                constexpr std::ptrdiff_t m_ViewOrigin = 0xD4; // Vector
                constexpr std::ptrdiff_t m_ViewAngles = 0xE0; // QAngle
                constexpr std::ptrdiff_t m_flViewFoV = 0xEC; // float32
                constexpr std::ptrdiff_t m_WorldPoints = 0xF0; // Vector[8]
                constexpr std::ptrdiff_t m_vFogOffsetLayer0 = 0x4A8; // Vector2D
                constexpr std::ptrdiff_t m_vFogOffsetLayer1 = 0x4B0; // Vector2D
                constexpr std::ptrdiff_t m_hEnvWind = 0x4B8; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_hEnvSky = 0x4BC; // CHandle<C_BaseEntity>
            }
            // Parent: C_BaseEntity
            // Fields count: 1
            namespace C_GlobalLight {
                constexpr std::ptrdiff_t m_WindClothForceHandle = 0xB90; // uint16
            }
            // Parent: CAnimGraphControllerBase
            // Fields count: 4
            namespace C_CSGO_PreviewModel_GraphController {
                constexpr std::ptrdiff_t m_pszCharacterMode = 0x18; // CAnimGraphParamOptionalRef<char*>
                constexpr std::ptrdiff_t m_pszWeaponState = 0x38; // CAnimGraphParamOptionalRef<char*>
                constexpr std::ptrdiff_t m_pszWeaponType = 0x58; // CAnimGraphParamOptionalRef<char*>
                constexpr std::ptrdiff_t m_pszEndOfMatchCelebration = 0x78; // CAnimGraphParamOptionalRef<char*>
            }
            // Parent: CAnimGraphControllerBase
            // Fields count: 8
            namespace C_CSGO_PreviewPlayer_GraphController {
                constexpr std::ptrdiff_t m_pszCharacterMode = 0x18; // CAnimGraphParamOptionalRef<char*>
                constexpr std::ptrdiff_t m_pszTeamPreviewVariant = 0x38; // CAnimGraphParamOptionalRef<char*>
                constexpr std::ptrdiff_t m_pszTeamPreviewPosition = 0x58; // CAnimGraphParamOptionalRef<char*>
                constexpr std::ptrdiff_t m_pszEndOfMatchCelebration = 0x78; // CAnimGraphParamOptionalRef<char*>
                constexpr std::ptrdiff_t m_nTeamPreviewRandom = 0x98; // CAnimGraphParamOptionalRef<int32>
                constexpr std::ptrdiff_t m_pszWeaponState = 0xB0; // CAnimGraphParamOptionalRef<char*>
                constexpr std::ptrdiff_t m_pszWeaponType = 0xD0; // CAnimGraphParamOptionalRef<char*>
                constexpr std::ptrdiff_t m_bCT = 0xF0; // CAnimGraphParamOptionalRef<bool>
            }
            // Parent: C_BaseEntity
            // Fields count: 10
            namespace C_CSGO_MapPreviewCameraPathNode {
                constexpr std::ptrdiff_t m_szParentPathUniqueID = 0x6D0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_nPathIndex = 0x6D8; // int32
                constexpr std::ptrdiff_t m_vInTangentLocal = 0x6DC; // Vector
                constexpr std::ptrdiff_t m_vOutTangentLocal = 0x6E8; // Vector
                constexpr std::ptrdiff_t m_flFOV = 0x6F4; // float32
                constexpr std::ptrdiff_t m_flSpeed = 0x6F8; // float32
                constexpr std::ptrdiff_t m_flEaseIn = 0x6FC; // float32
                constexpr std::ptrdiff_t m_flEaseOut = 0x700; // float32
                constexpr std::ptrdiff_t m_vInTangentWorld = 0x704; // Vector
                constexpr std::ptrdiff_t m_vOutTangentWorld = 0x710; // Vector
            }
            // Parent: C_BaseEntity
            // Fields count: 8
            namespace C_CSGO_MapPreviewCameraPath {
                constexpr std::ptrdiff_t m_flZFar = 0x6D0; // float32
                constexpr std::ptrdiff_t m_flZNear = 0x6D4; // float32
                constexpr std::ptrdiff_t m_bLoop = 0x6D8; // bool
                constexpr std::ptrdiff_t m_bVerticalFOV = 0x6D9; // bool
                constexpr std::ptrdiff_t m_bConstantSpeed = 0x6DA; // bool
                constexpr std::ptrdiff_t m_flDuration = 0x6DC; // float32
                constexpr std::ptrdiff_t m_flPathLength = 0x720; // float32
                constexpr std::ptrdiff_t m_flPathDuration = 0x724; // float32
            }
            // Parent: CPlayerPawnComponent
            // Fields count: 0
            namespace CCSPlayer_GlowServices {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            namespace C_CSObserverPawnAPI {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            namespace C_CSPlayerPawnAPI {
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
            namespace C_VoteController {
                constexpr std::ptrdiff_t m_iActiveIssueIndex = 0x6DC; // int32
                constexpr std::ptrdiff_t m_iOnlyTeamToVote = 0x6E0; // int32
                constexpr std::ptrdiff_t m_nVoteOptionCount = 0x6E4; // int32[5]
                constexpr std::ptrdiff_t m_nPotentialVotes = 0x6F8; // int32
                constexpr std::ptrdiff_t m_bVotesDirty = 0x6FC; // bool
                constexpr std::ptrdiff_t m_bTypeDirty = 0x6FD; // bool
                constexpr std::ptrdiff_t m_bIsYesNoVote = 0x6FE; // bool
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
            namespace C_MapVetoPickController {
                constexpr std::ptrdiff_t m_nDraftType = 0x6DC; // int32
                constexpr std::ptrdiff_t m_nTeamWinningCoinToss = 0x6E0; // int32
                constexpr std::ptrdiff_t m_nTeamWithFirstChoice = 0x6E4; // int32[64]
                constexpr std::ptrdiff_t m_nVoteMapIdsList = 0x7E4; // int32[7]
                constexpr std::ptrdiff_t m_nAccountIDs = 0x800; // int32[64]
                constexpr std::ptrdiff_t m_nMapId0 = 0x900; // int32[64]
                constexpr std::ptrdiff_t m_nMapId1 = 0xA00; // int32[64]
                constexpr std::ptrdiff_t m_nMapId2 = 0xB00; // int32[64]
                constexpr std::ptrdiff_t m_nMapId3 = 0xC00; // int32[64]
                constexpr std::ptrdiff_t m_nMapId4 = 0xD00; // int32[64]
                constexpr std::ptrdiff_t m_nMapId5 = 0xE00; // int32[64]
                constexpr std::ptrdiff_t m_nStartingSide0 = 0xF00; // int32[64]
                constexpr std::ptrdiff_t m_nCurrentPhase = 0x1000; // int32
                constexpr std::ptrdiff_t m_nPhaseStartTick = 0x1004; // int32
                constexpr std::ptrdiff_t m_nPhaseDurationTicks = 0x1008; // int32
                constexpr std::ptrdiff_t m_nPostDataUpdateTick = 0x100C; // int32
                constexpr std::ptrdiff_t m_bDisabledHud = 0x1010; // bool
            }
            // Parent: None
            // Fields count: 0
            namespace CPlayerSprayDecalRenderHelper {
            }
            // Parent: C_CSGO_MapPreviewCameraPath
            // Fields count: 7
            namespace C_CSGO_TeamPreviewCamera {
                constexpr std::ptrdiff_t m_nVariant = 0x730; // int32
                constexpr std::ptrdiff_t m_bDofEnabled = 0x734; // bool
                constexpr std::ptrdiff_t m_flDofNearBlurry = 0x738; // float32
                constexpr std::ptrdiff_t m_flDofNearCrisp = 0x73C; // float32
                constexpr std::ptrdiff_t m_flDofFarCrisp = 0x740; // float32
                constexpr std::ptrdiff_t m_flDofFarBlurry = 0x744; // float32
                constexpr std::ptrdiff_t m_flDofTiltToGround = 0x748; // float32
            }
            // Parent: C_CSGO_TeamPreviewCamera
            // Fields count: 0
            namespace C_CSGO_TeamSelectCamera {
            }
            // Parent: C_CSGO_TeamPreviewCamera
            // Fields count: 0
            namespace C_CSGO_TerroristTeamIntroCamera {
            }
            // Parent: C_CSGO_TeamPreviewCamera
            // Fields count: 0
            namespace C_CSGO_TerroristWingmanIntroCamera {
            }
            // Parent: C_CSGO_TeamPreviewCamera
            // Fields count: 0
            namespace C_CSGO_CounterTerroristTeamIntroCamera {
            }
            // Parent: C_CSGO_TeamPreviewCamera
            // Fields count: 0
            namespace C_CSGO_CounterTerroristWingmanIntroCamera {
            }
            // Parent: C_CSGO_TeamPreviewCamera
            // Fields count: 0
            namespace C_CSGO_EndOfMatchCamera {
            }
            // Parent: C_CSGO_TeamPreviewCharacterPosition
            // Fields count: 0
            namespace C_CSGO_EndOfMatchCharacterPosition {
            }
            // Parent: C_BaseEntity
            // Fields count: 0
            namespace C_CSGO_EndOfMatchLineupEndpoint {
            }
            // Parent: C_CSGO_EndOfMatchLineupEndpoint
            // Fields count: 0
            namespace C_CSGO_EndOfMatchLineupStart {
            }
            // Parent: C_CSGO_EndOfMatchLineupEndpoint
            // Fields count: 0
            namespace C_CSGO_EndOfMatchLineupEnd {
            }
            // Parent: C_BaseEntity
            // Fields count: 2
            namespace C_CsmFovOverride {
                constexpr std::ptrdiff_t m_cameraName = 0x6D0; // CUtlString
                constexpr std::ptrdiff_t m_flCsmFovOverrideValue = 0x6D8; // float32
            }
            // Parent: C_BaseEntity
            // Fields count: 0
            namespace C_PointEntity {
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
            namespace C_EnvCombinedLightProbeVolume {
                constexpr std::ptrdiff_t m_Color = 0x1728; // Color
                constexpr std::ptrdiff_t m_flBrightness = 0x172C; // float32
                constexpr std::ptrdiff_t m_hCubemapTexture = 0x1730; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_bCustomCubemapTexture = 0x1738; // bool
                constexpr std::ptrdiff_t m_hLightProbeTexture = 0x1740; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_hLightProbeDirectLightIndicesTexture = 0x1748; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_hLightProbeDirectLightScalarsTexture = 0x1750; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_hLightProbeDirectLightShadowsTexture = 0x1758; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_vBoxMins = 0x1760; // Vector
                constexpr std::ptrdiff_t m_vBoxMaxs = 0x176C; // Vector
                constexpr std::ptrdiff_t m_bMoveable = 0x1778; // bool
                constexpr std::ptrdiff_t m_nHandshake = 0x177C; // int32
                constexpr std::ptrdiff_t m_nEnvCubeMapArrayIndex = 0x1780; // int32
                constexpr std::ptrdiff_t m_nPriority = 0x1784; // int32
                constexpr std::ptrdiff_t m_bStartDisabled = 0x1788; // bool
                constexpr std::ptrdiff_t m_flEdgeFadeDist = 0x178C; // float32
                constexpr std::ptrdiff_t m_vEdgeFadeDists = 0x1790; // Vector
                constexpr std::ptrdiff_t m_nLightProbeSizeX = 0x179C; // int32
                constexpr std::ptrdiff_t m_nLightProbeSizeY = 0x17A0; // int32
                constexpr std::ptrdiff_t m_nLightProbeSizeZ = 0x17A4; // int32
                constexpr std::ptrdiff_t m_nLightProbeAtlasX = 0x17A8; // int32
                constexpr std::ptrdiff_t m_nLightProbeAtlasY = 0x17AC; // int32
                constexpr std::ptrdiff_t m_nLightProbeAtlasZ = 0x17B0; // int32
                constexpr std::ptrdiff_t m_bEnabled = 0x17C9; // bool
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
            namespace C_EnvCubemap {
                constexpr std::ptrdiff_t m_hCubemapTexture = 0x750; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_bCustomCubemapTexture = 0x758; // bool
                constexpr std::ptrdiff_t m_flInfluenceRadius = 0x75C; // float32
                constexpr std::ptrdiff_t m_vBoxProjectMins = 0x760; // Vector
                constexpr std::ptrdiff_t m_vBoxProjectMaxs = 0x76C; // Vector
                constexpr std::ptrdiff_t m_bMoveable = 0x778; // bool
                constexpr std::ptrdiff_t m_nHandshake = 0x77C; // int32
                constexpr std::ptrdiff_t m_nEnvCubeMapArrayIndex = 0x780; // int32
                constexpr std::ptrdiff_t m_nPriority = 0x784; // int32
                constexpr std::ptrdiff_t m_flEdgeFadeDist = 0x788; // float32
                constexpr std::ptrdiff_t m_vEdgeFadeDists = 0x78C; // Vector
                constexpr std::ptrdiff_t m_flDiffuseScale = 0x798; // float32
                constexpr std::ptrdiff_t m_bStartDisabled = 0x79C; // bool
                constexpr std::ptrdiff_t m_bDefaultEnvMap = 0x79D; // bool
                constexpr std::ptrdiff_t m_bDefaultSpecEnvMap = 0x79E; // bool
                constexpr std::ptrdiff_t m_bIndoorCubeMap = 0x79F; // bool
                constexpr std::ptrdiff_t m_bCopyDiffuseFromDefaultCubemap = 0x7A0; // bool
                constexpr std::ptrdiff_t m_bEnabled = 0x7B0; // bool
            }
            // Parent: C_EnvCubemap
            // Fields count: 0
            namespace C_EnvCubemapBox {
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
            namespace C_EnvCubemapFog {
                constexpr std::ptrdiff_t m_flEndDistance = 0x6D0; // float32
                constexpr std::ptrdiff_t m_flStartDistance = 0x6D4; // float32
                constexpr std::ptrdiff_t m_flFogFalloffExponent = 0x6D8; // float32
                constexpr std::ptrdiff_t m_bHeightFogEnabled = 0x6DC; // bool
                constexpr std::ptrdiff_t m_flFogHeightWidth = 0x6E0; // float32
                constexpr std::ptrdiff_t m_flFogHeightEnd = 0x6E4; // float32
                constexpr std::ptrdiff_t m_flFogHeightStart = 0x6E8; // float32
                constexpr std::ptrdiff_t m_flFogHeightExponent = 0x6EC; // float32
                constexpr std::ptrdiff_t m_flLODBias = 0x6F0; // float32
                constexpr std::ptrdiff_t m_bActive = 0x6F4; // bool
                constexpr std::ptrdiff_t m_bStartDisabled = 0x6F5; // bool
                constexpr std::ptrdiff_t m_flFogMaxOpacity = 0x6F8; // float32
                constexpr std::ptrdiff_t m_nCubemapSourceType = 0x6FC; // int32
                constexpr std::ptrdiff_t m_hSkyMaterial = 0x700; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_iszSkyEntity = 0x708; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hFogCubemapTexture = 0x710; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_bHasHeightFogEnd = 0x718; // bool
                constexpr std::ptrdiff_t m_bFirstTime = 0x719; // bool
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
            namespace C_GradientFog {
                constexpr std::ptrdiff_t m_hGradientFogTexture = 0x6D0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_flFogStartDistance = 0x6D8; // float32
                constexpr std::ptrdiff_t m_flFogEndDistance = 0x6DC; // float32
                constexpr std::ptrdiff_t m_bHeightFogEnabled = 0x6E0; // bool
                constexpr std::ptrdiff_t m_flFogStartHeight = 0x6E4; // float32
                constexpr std::ptrdiff_t m_flFogEndHeight = 0x6E8; // float32
                constexpr std::ptrdiff_t m_flFarZ = 0x6EC; // float32
                constexpr std::ptrdiff_t m_flFogMaxOpacity = 0x6F0; // float32
                constexpr std::ptrdiff_t m_flFogFalloffExponent = 0x6F4; // float32
                constexpr std::ptrdiff_t m_flFogVerticalExponent = 0x6F8; // float32
                constexpr std::ptrdiff_t m_fogColor = 0x6FC; // Color
                constexpr std::ptrdiff_t m_flFogStrength = 0x700; // float32
                constexpr std::ptrdiff_t m_flFadeTime = 0x704; // float32
                constexpr std::ptrdiff_t m_bStartDisabled = 0x708; // bool
                constexpr std::ptrdiff_t m_bIsEnabled = 0x709; // bool
                constexpr std::ptrdiff_t m_bGradientFogNeedsTextures = 0x70A; // bool
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
            namespace C_EnvLightProbeVolume {
                constexpr std::ptrdiff_t m_hLightProbeTexture = 0x16A8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_hLightProbeDirectLightIndicesTexture = 0x16B0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_hLightProbeDirectLightScalarsTexture = 0x16B8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_hLightProbeDirectLightShadowsTexture = 0x16C0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_vBoxMins = 0x16C8; // Vector
                constexpr std::ptrdiff_t m_vBoxMaxs = 0x16D4; // Vector
                constexpr std::ptrdiff_t m_bMoveable = 0x16E0; // bool
                constexpr std::ptrdiff_t m_nHandshake = 0x16E4; // int32
                constexpr std::ptrdiff_t m_nPriority = 0x16E8; // int32
                constexpr std::ptrdiff_t m_bStartDisabled = 0x16EC; // bool
                constexpr std::ptrdiff_t m_nLightProbeSizeX = 0x16F0; // int32
                constexpr std::ptrdiff_t m_nLightProbeSizeY = 0x16F4; // int32
                constexpr std::ptrdiff_t m_nLightProbeSizeZ = 0x16F8; // int32
                constexpr std::ptrdiff_t m_nLightProbeAtlasX = 0x16FC; // int32
                constexpr std::ptrdiff_t m_nLightProbeAtlasY = 0x1700; // int32
                constexpr std::ptrdiff_t m_nLightProbeAtlasZ = 0x1704; // int32
                constexpr std::ptrdiff_t m_bEnabled = 0x1711; // bool
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
            namespace C_PlayerVisibility {
                constexpr std::ptrdiff_t m_flVisibilityStrength = 0x6D0; // float32
                constexpr std::ptrdiff_t m_flFogDistanceMultiplier = 0x6D4; // float32
                constexpr std::ptrdiff_t m_flFogMaxDensityMultiplier = 0x6D8; // float32
                constexpr std::ptrdiff_t m_flFadeTime = 0x6DC; // float32
                constexpr std::ptrdiff_t m_bStartDisabled = 0x6E0; // bool
                constexpr std::ptrdiff_t m_bIsEnabled = 0x6E1; // bool
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
            namespace C_TonemapController2 {
                constexpr std::ptrdiff_t m_flAutoExposureMin = 0x6D0; // float32
                constexpr std::ptrdiff_t m_flAutoExposureMax = 0x6D4; // float32
                constexpr std::ptrdiff_t m_flTonemapPercentTarget = 0x6D8; // float32
                constexpr std::ptrdiff_t m_flTonemapPercentBrightPixels = 0x6DC; // float32
                constexpr std::ptrdiff_t m_flTonemapMinAvgLum = 0x6E0; // float32
                constexpr std::ptrdiff_t m_flExposureAdaptationSpeedUp = 0x6E4; // float32
                constexpr std::ptrdiff_t m_flExposureAdaptationSpeedDown = 0x6E8; // float32
                constexpr std::ptrdiff_t m_flTonemapEVSmoothingRange = 0x6EC; // float32
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
            namespace C_EnvVolumetricFogController {
                constexpr std::ptrdiff_t m_flScattering = 0x6D0; // float32
                constexpr std::ptrdiff_t m_flAnisotropy = 0x6D4; // float32
                constexpr std::ptrdiff_t m_flFadeSpeed = 0x6D8; // float32
                constexpr std::ptrdiff_t m_flDrawDistance = 0x6DC; // float32
                constexpr std::ptrdiff_t m_flFadeInStart = 0x6E0; // float32
                constexpr std::ptrdiff_t m_flFadeInEnd = 0x6E4; // float32
                constexpr std::ptrdiff_t m_flIndirectStrength = 0x6E8; // float32
                constexpr std::ptrdiff_t m_nIndirectTextureDimX = 0x6EC; // int32
                constexpr std::ptrdiff_t m_nIndirectTextureDimY = 0x6F0; // int32
                constexpr std::ptrdiff_t m_nIndirectTextureDimZ = 0x6F4; // int32
                constexpr std::ptrdiff_t m_vBoxMins = 0x6F8; // Vector
                constexpr std::ptrdiff_t m_vBoxMaxs = 0x704; // Vector
                constexpr std::ptrdiff_t m_bActive = 0x710; // bool
                constexpr std::ptrdiff_t m_flStartAnisoTime = 0x714; // GameTime_t
                constexpr std::ptrdiff_t m_flStartScatterTime = 0x718; // GameTime_t
                constexpr std::ptrdiff_t m_flStartDrawDistanceTime = 0x71C; // GameTime_t
                constexpr std::ptrdiff_t m_flStartAnisotropy = 0x720; // float32
                constexpr std::ptrdiff_t m_flStartScattering = 0x724; // float32
                constexpr std::ptrdiff_t m_flStartDrawDistance = 0x728; // float32
                constexpr std::ptrdiff_t m_flDefaultAnisotropy = 0x72C; // float32
                constexpr std::ptrdiff_t m_flDefaultScattering = 0x730; // float32
                constexpr std::ptrdiff_t m_flDefaultDrawDistance = 0x734; // float32
                constexpr std::ptrdiff_t m_bStartDisabled = 0x738; // bool
                constexpr std::ptrdiff_t m_bEnableIndirect = 0x739; // bool
                constexpr std::ptrdiff_t m_bIsMaster = 0x73A; // bool
                constexpr std::ptrdiff_t m_hFogIndirectTexture = 0x740; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_nForceRefreshCount = 0x748; // int32
                constexpr std::ptrdiff_t m_bFirstTime = 0x74C; // bool
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
            namespace C_EnvVolumetricFogVolume {
                constexpr std::ptrdiff_t m_bActive = 0x6D0; // bool
                constexpr std::ptrdiff_t m_vBoxMins = 0x6D4; // Vector
                constexpr std::ptrdiff_t m_vBoxMaxs = 0x6E0; // Vector
                constexpr std::ptrdiff_t m_bStartDisabled = 0x6EC; // bool
                constexpr std::ptrdiff_t m_flStrength = 0x6F0; // float32
                constexpr std::ptrdiff_t m_nFalloffShape = 0x6F4; // int32
                constexpr std::ptrdiff_t m_flFalloffExponent = 0x6F8; // float32
            }
            // Parent: C_BaseEntity
            // Fields count: 3
            //
            // Metadata:
            // NetworkVarNames: m_fog (fogparams_t)
            namespace C_FogController {
                constexpr std::ptrdiff_t m_fog = 0x6D0; // fogparams_t
                constexpr std::ptrdiff_t m_bUseAngles = 0x738; // bool
                constexpr std::ptrdiff_t m_iChangedVariables = 0x73C; // int32
            }
            // Parent: C_PointEntity
            // Fields count: 0
            namespace CInfoTarget {
            }
            // Parent: C_PointEntity
            // Fields count: 0
            namespace CInfoParticleTarget {
            }
            // Parent: C_BaseEntity
            // Fields count: 3
            //
            // Metadata:
            // NetworkVarNames: m_nMode (int)
            // NetworkVarNames: m_vBoxSize (Vector)
            // NetworkVarNames: m_bEnabled (bool)
            namespace C_InfoVisibilityBox {
                constexpr std::ptrdiff_t m_nMode = 0x6D4; // int32
                constexpr std::ptrdiff_t m_vBoxSize = 0x6D8; // Vector
                constexpr std::ptrdiff_t m_bEnabled = 0x6E4; // bool
            }
            // Parent: C_BaseEntity
            // Fields count: 8
            //
            // Metadata:
            // NetworkVarNames: m_worldName (string_t)
            // NetworkVarNames: m_layerName (string_t)
            // NetworkVarNames: m_bWorldLayerVisible (bool)
            // NetworkVarNames: m_bEntitiesSpawned (bool)
            namespace CInfoWorldLayer {
                constexpr std::ptrdiff_t m_pOutputOnEntitiesSpawned = 0x6D0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_worldName = 0x6F8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_layerName = 0x700; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bWorldLayerVisible = 0x708; // bool
                constexpr std::ptrdiff_t m_bEntitiesSpawned = 0x709; // bool
                constexpr std::ptrdiff_t m_bCreateAsChildSpawnGroup = 0x70A; // bool
                constexpr std::ptrdiff_t m_hLayerSpawnGroup = 0x70C; // uint32
                constexpr std::ptrdiff_t m_bWorldLayerActuallyVisible = 0x710; // bool
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
            namespace C_PointCamera {
                constexpr std::ptrdiff_t m_FOV = 0x6D0; // float32
                constexpr std::ptrdiff_t m_Resolution = 0x6D4; // float32
                constexpr std::ptrdiff_t m_bFogEnable = 0x6D8; // bool
                constexpr std::ptrdiff_t m_FogColor = 0x6D9; // Color
                constexpr std::ptrdiff_t m_flFogStart = 0x6E0; // float32
                constexpr std::ptrdiff_t m_flFogEnd = 0x6E4; // float32
                constexpr std::ptrdiff_t m_flFogMaxDensity = 0x6E8; // float32
                constexpr std::ptrdiff_t m_bActive = 0x6EC; // bool
                constexpr std::ptrdiff_t m_bUseScreenAspectRatio = 0x6ED; // bool
                constexpr std::ptrdiff_t m_flAspectRatio = 0x6F0; // float32
                constexpr std::ptrdiff_t m_bNoSky = 0x6F4; // bool
                constexpr std::ptrdiff_t m_fBrightness = 0x6F8; // float32
                constexpr std::ptrdiff_t m_flZFar = 0x6FC; // float32
                constexpr std::ptrdiff_t m_flZNear = 0x700; // float32
                constexpr std::ptrdiff_t m_bCanHLTVUse = 0x704; // bool
                constexpr std::ptrdiff_t m_bDofEnabled = 0x705; // bool
                constexpr std::ptrdiff_t m_flDofNearBlurry = 0x708; // float32
                constexpr std::ptrdiff_t m_flDofNearCrisp = 0x70C; // float32
                constexpr std::ptrdiff_t m_flDofFarCrisp = 0x710; // float32
                constexpr std::ptrdiff_t m_flDofFarBlurry = 0x714; // float32
                constexpr std::ptrdiff_t m_flDofTiltToGround = 0x718; // float32
                constexpr std::ptrdiff_t m_TargetFOV = 0x71C; // float32
                constexpr std::ptrdiff_t m_DegreesPerSecond = 0x720; // float32
                constexpr std::ptrdiff_t m_bIsOn = 0x724; // bool
                constexpr std::ptrdiff_t m_pNext = 0x728; // C_PointCamera*
            }
            // Parent: C_PointCamera
            // Fields count: 1
            namespace C_PointCameraVFOV {
                constexpr std::ptrdiff_t m_flVerticalFOV = 0x730; // float32
            }
            // Parent: CLogicalEntity
            // Fields count: 12
            namespace CPointTemplate {
                constexpr std::ptrdiff_t m_iszWorldName = 0x6D0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszSource2EntityLumpName = 0x6D8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszEntityFilterName = 0x6E0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_flTimeoutInterval = 0x6E8; // float32
                constexpr std::ptrdiff_t m_bAsynchronouslySpawnEntities = 0x6EC; // bool
                constexpr std::ptrdiff_t m_pOutputOnSpawned = 0x6F0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_clientOnlyEntityBehavior = 0x718; // PointTemplateClientOnlyEntityBehavior_t
                constexpr std::ptrdiff_t m_ownerSpawnGroupType = 0x71C; // PointTemplateOwnerSpawnGroupType_t
                constexpr std::ptrdiff_t m_createdSpawnGroupHandles = 0x720; // CUtlVector<uint32>
                constexpr std::ptrdiff_t m_SpawnedEntityHandles = 0x738; // CUtlVector<CEntityHandle>
                constexpr std::ptrdiff_t m_ScriptSpawnCallback = 0x750; // HSCRIPT
                constexpr std::ptrdiff_t m_ScriptCallbackScope = 0x758; // HSCRIPT
            }
            // Parent: C_BaseEntity
            // Fields count: 4
            //
            // Metadata:
            // NetworkVarNames: m_bDisabled (bool)
            // NetworkVarNames: m_iszSoundAreaType (string_t)
            // NetworkVarNames: m_vPos (Vector)
            namespace C_SoundAreaEntityBase {
                constexpr std::ptrdiff_t m_bDisabled = 0x6D0; // bool
                constexpr std::ptrdiff_t m_bWasEnabled = 0x6D8; // bool
                constexpr std::ptrdiff_t m_iszSoundAreaType = 0x6E0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_vPos = 0x6E8; // Vector
            }
            // Parent: C_SoundAreaEntityBase
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_flRadius (float)
            namespace C_SoundAreaEntitySphere {
                constexpr std::ptrdiff_t m_flRadius = 0x6F4; // float32
            }
            // Parent: C_SoundAreaEntityBase
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_vMin (Vector)
            // NetworkVarNames: m_vMax (Vector)
            namespace C_SoundAreaEntityOrientedBox {
                constexpr std::ptrdiff_t m_vMin = 0x6F4; // Vector
                constexpr std::ptrdiff_t m_vMax = 0x700; // Vector
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
            namespace C_Team {
                constexpr std::ptrdiff_t m_aPlayerControllers = 0x6D0; // C_NetworkUtlVectorBase<CHandle<CBasePlayerController>>
                constexpr std::ptrdiff_t m_aPlayers = 0x6E8; // C_NetworkUtlVectorBase<CHandle<C_BasePlayerPawn>>
                constexpr std::ptrdiff_t m_iScore = 0x700; // int32
                constexpr std::ptrdiff_t m_szTeamname = 0x704; // char[129]
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
            namespace CBasePlayerController {
                constexpr std::ptrdiff_t m_nFinalPredictedTick = 0x6D8; // int32
                constexpr std::ptrdiff_t m_CommandContext = 0x6E0; // C_CommandContext
                constexpr std::ptrdiff_t m_nInButtonsWhichAreToggles = 0x778; // uint64
                constexpr std::ptrdiff_t m_nTickBase = 0x780; // uint32
                constexpr std::ptrdiff_t m_hPawn = 0x784; // CHandle<C_BasePlayerPawn>
                constexpr std::ptrdiff_t m_hPredictedPawn = 0x788; // CHandle<C_BasePlayerPawn>
                constexpr std::ptrdiff_t m_nSplitScreenSlot = 0x78C; // CSplitScreenSlot
                constexpr std::ptrdiff_t m_hSplitOwner = 0x790; // CHandle<CBasePlayerController>
                constexpr std::ptrdiff_t m_hSplitScreenPlayers = 0x798; // CUtlVector<CHandle<CBasePlayerController>>
                constexpr std::ptrdiff_t m_bIsHLTV = 0x7B0; // bool
                constexpr std::ptrdiff_t m_iConnected = 0x7B4; // PlayerConnectedState
                constexpr std::ptrdiff_t m_iszPlayerName = 0x7B8; // char[128]
                constexpr std::ptrdiff_t m_steamID = 0x840; // uint64
                constexpr std::ptrdiff_t m_bIsLocalPlayerController = 0x848; // bool
                constexpr std::ptrdiff_t m_iDesiredFOV = 0x84C; // uint32
            }
            // Parent: None
            // Fields count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CBasePlayerVData {
                constexpr std::ptrdiff_t m_sModelName = 0x28; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                constexpr std::ptrdiff_t m_flHeadDamageMultiplier = 0x108; // CSkillFloat
                constexpr std::ptrdiff_t m_flChestDamageMultiplier = 0x118; // CSkillFloat
                constexpr std::ptrdiff_t m_flStomachDamageMultiplier = 0x128; // CSkillFloat
                constexpr std::ptrdiff_t m_flArmDamageMultiplier = 0x138; // CSkillFloat
                constexpr std::ptrdiff_t m_flLegDamageMultiplier = 0x148; // CSkillFloat
                constexpr std::ptrdiff_t m_flHoldBreathTime = 0x158; // float32
                constexpr std::ptrdiff_t m_flDrowningDamageInterval = 0x15C; // float32
                constexpr std::ptrdiff_t m_nDrowningDamageInitial = 0x160; // int32
                constexpr std::ptrdiff_t m_nDrowningDamageMax = 0x164; // int32
                constexpr std::ptrdiff_t m_nWaterSpeed = 0x168; // int32
                constexpr std::ptrdiff_t m_flUseRange = 0x16C; // float32
                constexpr std::ptrdiff_t m_flUseAngleTolerance = 0x170; // float32
                constexpr std::ptrdiff_t m_flCrouchTime = 0x174; // float32
            }
            // Parent: None
            // Fields count: 20
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CBasePlayerWeaponVData {
                constexpr std::ptrdiff_t m_szWorldModel = 0x28; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                constexpr std::ptrdiff_t m_bBuiltRightHanded = 0x108; // bool
                constexpr std::ptrdiff_t m_bAllowFlipping = 0x109; // bool
                constexpr std::ptrdiff_t m_sMuzzleAttachment = 0x110; // CUtlString
                constexpr std::ptrdiff_t m_szMuzzleFlashParticle = 0x118; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_iFlags = 0x1F8; // ItemFlagTypes_t
                constexpr std::ptrdiff_t m_nPrimaryAmmoType = 0x1F9; // AmmoIndex_t
                constexpr std::ptrdiff_t m_nSecondaryAmmoType = 0x1FA; // AmmoIndex_t
                constexpr std::ptrdiff_t m_iMaxClip1 = 0x1FC; // int32
                constexpr std::ptrdiff_t m_iMaxClip2 = 0x200; // int32
                constexpr std::ptrdiff_t m_iDefaultClip1 = 0x204; // int32
                constexpr std::ptrdiff_t m_iDefaultClip2 = 0x208; // int32
                constexpr std::ptrdiff_t m_iWeight = 0x20C; // int32
                constexpr std::ptrdiff_t m_bAutoSwitchTo = 0x210; // bool
                constexpr std::ptrdiff_t m_bAutoSwitchFrom = 0x211; // bool
                constexpr std::ptrdiff_t m_iRumbleEffect = 0x214; // RumbleEffect_t
                constexpr std::ptrdiff_t m_bLinkedCooldowns = 0x218; // bool
                constexpr std::ptrdiff_t m_aShootSounds = 0x220; // CUtlMap<WeaponSound_t,CSoundEventName>
                constexpr std::ptrdiff_t m_iSlot = 0x240; // int32
                constexpr std::ptrdiff_t m_iPosition = 0x244; // int32
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
            namespace CBaseAnimGraphController {
                constexpr std::ptrdiff_t m_animGraphNetworkedVars = 0x18; // CAnimGraphNetworkedVariables
                constexpr std::ptrdiff_t m_bSequenceFinished = 0x14A8; // bool
                constexpr std::ptrdiff_t m_flSoundSyncTime = 0x14AC; // float32
                constexpr std::ptrdiff_t m_hSequence = 0x14B0; // HSequence
                constexpr std::ptrdiff_t m_flSeqStartTime = 0x14B4; // GameTime_t
                constexpr std::ptrdiff_t m_flSeqFixedCycle = 0x14B8; // float32
                constexpr std::ptrdiff_t m_nAnimLoopMode = 0x14BC; // AnimLoopMode_t
                constexpr std::ptrdiff_t m_flPlaybackRate = 0x14C0; // CNetworkedQuantizedFloat
                constexpr std::ptrdiff_t m_nNotifyState = 0x14CC; // SequenceFinishNotifyState_t
                constexpr std::ptrdiff_t m_bNetworkedAnimationInputsChanged = 0x14CE; // bool
                constexpr std::ptrdiff_t m_bNetworkedSequenceChanged = 0x14CF; // bool
                constexpr std::ptrdiff_t m_bLastUpdateSkipped = 0x14D0; // bool
                constexpr std::ptrdiff_t m_flPrevAnimUpdateTime = 0x14D4; // GameTime_t
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
            namespace C_BaseModelEntity {
                constexpr std::ptrdiff_t m_CRenderComponent = 0x9A0; // CRenderComponent*
                constexpr std::ptrdiff_t m_CHitboxComponent = 0x9A8; // CHitboxComponent
                constexpr std::ptrdiff_t m_bInitModelEffects = 0x9F0; // bool
                constexpr std::ptrdiff_t m_bIsStaticProp = 0x9F1; // bool
                constexpr std::ptrdiff_t m_nLastAddDecal = 0x9F4; // int32
                constexpr std::ptrdiff_t m_nDecalsAdded = 0x9F8; // int32
                constexpr std::ptrdiff_t m_iOldHealth = 0x9FC; // int32
                constexpr std::ptrdiff_t m_nRenderMode = 0xA00; // RenderMode_t
                constexpr std::ptrdiff_t m_nRenderFX = 0xA01; // RenderFx_t
                constexpr std::ptrdiff_t m_bAllowFadeInView = 0xA02; // bool
                constexpr std::ptrdiff_t m_clrRender = 0xA03; // Color
                constexpr std::ptrdiff_t m_vecRenderAttributes = 0xA08; // C_UtlVectorEmbeddedNetworkVar<EntityRenderAttribute_t>
                constexpr std::ptrdiff_t m_bRenderToCubemaps = 0xA70; // bool
                constexpr std::ptrdiff_t m_Collision = 0xA78; // CCollisionProperty
                constexpr std::ptrdiff_t m_Glow = 0xB28; // CGlowProperty
                constexpr std::ptrdiff_t m_flGlowBackfaceMult = 0xB80; // float32
                constexpr std::ptrdiff_t m_fadeMinDist = 0xB84; // float32
                constexpr std::ptrdiff_t m_fadeMaxDist = 0xB88; // float32
                constexpr std::ptrdiff_t m_flFadeScale = 0xB8C; // float32
                constexpr std::ptrdiff_t m_flShadowStrength = 0xB90; // float32
                constexpr std::ptrdiff_t m_nObjectCulling = 0xB94; // uint8
                constexpr std::ptrdiff_t m_nAddDecal = 0xB98; // int32
                constexpr std::ptrdiff_t m_vDecalPosition = 0xB9C; // Vector
                constexpr std::ptrdiff_t m_vDecalForwardAxis = 0xBA8; // Vector
                constexpr std::ptrdiff_t m_flDecalHealBloodRate = 0xBB4; // float32
                constexpr std::ptrdiff_t m_flDecalHealHeightRate = 0xBB8; // float32
                constexpr std::ptrdiff_t m_ConfigEntitiesToPropagateMaterialDecalsTo = 0xBC0; // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
                constexpr std::ptrdiff_t m_vecViewOffset = 0xBD8; // CNetworkViewOffsetVector
                constexpr std::ptrdiff_t m_pClientAlphaProperty = 0xC08; // CClientAlphaProperty*
                constexpr std::ptrdiff_t m_ClientOverrideTint = 0xC10; // Color
                constexpr std::ptrdiff_t m_bUseClientOverrideTint = 0xC14; // bool
            }
            // Parent: C_BaseModelEntity
            // Fields count: 0
            namespace CServerOnlyModelEntity {
            }
            // Parent: C_BaseModelEntity
            // Fields count: 0
            namespace C_ModelPointEntity {
            }
            // Parent: CLogicalEntity
            // Fields count: 7
            namespace CLogicRelay {
                constexpr std::ptrdiff_t m_OnTrigger = 0x6D0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnSpawn = 0x6F8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_bDisabled = 0x720; // bool
                constexpr std::ptrdiff_t m_bWaitForRefire = 0x721; // bool
                constexpr std::ptrdiff_t m_bTriggerOnce = 0x722; // bool
                constexpr std::ptrdiff_t m_bFastRetrigger = 0x723; // bool
                constexpr std::ptrdiff_t m_bPassthoughCaller = 0x724; // bool
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
            namespace C_ParticleSystem {
                constexpr std::ptrdiff_t m_szSnapshotFileName = 0xC50; // char[512]
                constexpr std::ptrdiff_t m_bActive = 0xE50; // bool
                constexpr std::ptrdiff_t m_bFrozen = 0xE51; // bool
                constexpr std::ptrdiff_t m_flFreezeTransitionDuration = 0xE54; // float32
                constexpr std::ptrdiff_t m_nStopType = 0xE58; // int32
                constexpr std::ptrdiff_t m_bAnimateDuringGameplayPause = 0xE5C; // bool
                constexpr std::ptrdiff_t m_iEffectIndex = 0xE60; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                constexpr std::ptrdiff_t m_flStartTime = 0xE68; // GameTime_t
                constexpr std::ptrdiff_t m_flPreSimTime = 0xE6C; // float32
                constexpr std::ptrdiff_t m_vServerControlPoints = 0xE70; // Vector[4]
                constexpr std::ptrdiff_t m_iServerControlPointAssignments = 0xEA0; // uint8[4]
                constexpr std::ptrdiff_t m_hControlPointEnts = 0xEA4; // CHandle<C_BaseEntity>[64]
                constexpr std::ptrdiff_t m_bNoSave = 0xFA4; // bool
                constexpr std::ptrdiff_t m_bNoFreeze = 0xFA5; // bool
                constexpr std::ptrdiff_t m_bNoRamp = 0xFA6; // bool
                constexpr std::ptrdiff_t m_bStartActive = 0xFA7; // bool
                constexpr std::ptrdiff_t m_iszEffectName = 0xFA8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszControlPointNames = 0xFB0; // CUtlSymbolLarge[64]
                constexpr std::ptrdiff_t m_nDataCP = 0x11B0; // int32
                constexpr std::ptrdiff_t m_vecDataCPValue = 0x11B4; // Vector
                constexpr std::ptrdiff_t m_nTintCP = 0x11C0; // int32
                constexpr std::ptrdiff_t m_clrTint = 0x11C4; // Color
                constexpr std::ptrdiff_t m_bOldActive = 0x11E8; // bool
                constexpr std::ptrdiff_t m_bOldFrozen = 0x11E9; // bool
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
            namespace C_PathParticleRope {
                constexpr std::ptrdiff_t m_bStartActive = 0x6D0; // bool
                constexpr std::ptrdiff_t m_flMaxSimulationTime = 0x6D4; // float32
                constexpr std::ptrdiff_t m_iszEffectName = 0x6D8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_PathNodes_Name = 0x6E0; // CUtlVector<CUtlSymbolLarge>
                constexpr std::ptrdiff_t m_flParticleSpacing = 0x6F8; // float32
                constexpr std::ptrdiff_t m_flSlack = 0x6FC; // float32
                constexpr std::ptrdiff_t m_flRadius = 0x700; // float32
                constexpr std::ptrdiff_t m_ColorTint = 0x704; // Color
                constexpr std::ptrdiff_t m_nEffectState = 0x708; // int32
                constexpr std::ptrdiff_t m_iEffectIndex = 0x710; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                constexpr std::ptrdiff_t m_PathNodes_Position = 0x718; // C_NetworkUtlVectorBase<Vector>
                constexpr std::ptrdiff_t m_PathNodes_TangentIn = 0x730; // C_NetworkUtlVectorBase<Vector>
                constexpr std::ptrdiff_t m_PathNodes_TangentOut = 0x748; // C_NetworkUtlVectorBase<Vector>
                constexpr std::ptrdiff_t m_PathNodes_Color = 0x760; // C_NetworkUtlVectorBase<Vector>
                constexpr std::ptrdiff_t m_PathNodes_PinEnabled = 0x778; // C_NetworkUtlVectorBase<bool>
                constexpr std::ptrdiff_t m_PathNodes_RadiusScale = 0x790; // C_NetworkUtlVectorBase<float32>
            }
            // Parent: C_PathParticleRope
            // Fields count: 0
            namespace C_PathParticleRopeAlias_path_particle_rope_clientside {
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
            namespace C_DynamicLight {
                constexpr std::ptrdiff_t m_Flags = 0xC50; // uint8
                constexpr std::ptrdiff_t m_LightStyle = 0xC51; // uint8
                constexpr std::ptrdiff_t m_Radius = 0xC54; // float32
                constexpr std::ptrdiff_t m_Exponent = 0xC58; // int32
                constexpr std::ptrdiff_t m_InnerAngle = 0xC5C; // float32
                constexpr std::ptrdiff_t m_OuterAngle = 0xC60; // float32
                constexpr std::ptrdiff_t m_SpotRadius = 0xC64; // float32
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
            namespace C_EnvScreenOverlay {
                constexpr std::ptrdiff_t m_iszOverlayNames = 0x6D0; // CUtlSymbolLarge[10]
                constexpr std::ptrdiff_t m_flOverlayTimes = 0x720; // float32[10]
                constexpr std::ptrdiff_t m_flStartTime = 0x748; // GameTime_t
                constexpr std::ptrdiff_t m_iDesiredOverlay = 0x74C; // int32
                constexpr std::ptrdiff_t m_bIsActive = 0x750; // bool
                constexpr std::ptrdiff_t m_bWasActive = 0x751; // bool
                constexpr std::ptrdiff_t m_iCachedDesiredOverlay = 0x754; // int32
                constexpr std::ptrdiff_t m_iCurrentOverlay = 0x758; // int32
                constexpr std::ptrdiff_t m_flCurrentOverlayTime = 0x75C; // GameTime_t
            }
            // Parent: C_BaseModelEntity
            // Fields count: 3
            namespace C_FuncTrackTrain {
                constexpr std::ptrdiff_t m_nLongAxis = 0xC50; // int32
                constexpr std::ptrdiff_t m_flRadius = 0xC54; // float32
                constexpr std::ptrdiff_t m_flLineLength = 0xC58; // float32
            }
            // Parent: CGlowOverlay
            // Fields count: 7
            namespace C_LightGlowOverlay {
                constexpr std::ptrdiff_t m_vecOrigin = 0xCC; // Vector
                constexpr std::ptrdiff_t m_vecDirection = 0xD8; // Vector
                constexpr std::ptrdiff_t m_nMinDist = 0xE4; // int32
                constexpr std::ptrdiff_t m_nMaxDist = 0xE8; // int32
                constexpr std::ptrdiff_t m_nOuterMaxDist = 0xEC; // int32
                constexpr std::ptrdiff_t m_bOneSided = 0xF0; // bool
                constexpr std::ptrdiff_t m_bModulateByDot = 0xF1; // bool
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
            namespace C_LightGlow {
                constexpr std::ptrdiff_t m_nHorizontalSize = 0xC50; // uint32
                constexpr std::ptrdiff_t m_nVerticalSize = 0xC54; // uint32
                constexpr std::ptrdiff_t m_nMinDist = 0xC58; // uint32
                constexpr std::ptrdiff_t m_nMaxDist = 0xC5C; // uint32
                constexpr std::ptrdiff_t m_nOuterMaxDist = 0xC60; // uint32
                constexpr std::ptrdiff_t m_flGlowProxySize = 0xC64; // float32
                constexpr std::ptrdiff_t m_flHDRColorScale = 0xC68; // float32
                constexpr std::ptrdiff_t m_Glow = 0xC70; // C_LightGlowOverlay
            }
            // Parent: C_BaseEntity
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_iCurrentMaxRagdollCount (int8)
            namespace C_RagdollManager {
                constexpr std::ptrdiff_t m_iCurrentMaxRagdollCount = 0x6D0; // int8
            }
            // Parent: C_BaseModelEntity
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_flLightScale (float32)
            // NetworkVarNames: m_Radius (float32)
            namespace C_SpotlightEnd {
                constexpr std::ptrdiff_t m_flLightScale = 0xC50; // float32
                constexpr std::ptrdiff_t m_Radius = 0xC54; // float32
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
            namespace C_PointValueRemapper {
                constexpr std::ptrdiff_t m_bDisabled = 0x6D0; // bool
                constexpr std::ptrdiff_t m_bDisabledOld = 0x6D1; // bool
                constexpr std::ptrdiff_t m_bUpdateOnClient = 0x6D2; // bool
                constexpr std::ptrdiff_t m_nInputType = 0x6D4; // ValueRemapperInputType_t
                constexpr std::ptrdiff_t m_hRemapLineStart = 0x6D8; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_hRemapLineEnd = 0x6DC; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_flMaximumChangePerSecond = 0x6E0; // float32
                constexpr std::ptrdiff_t m_flDisengageDistance = 0x6E4; // float32
                constexpr std::ptrdiff_t m_flEngageDistance = 0x6E8; // float32
                constexpr std::ptrdiff_t m_bRequiresUseKey = 0x6EC; // bool
                constexpr std::ptrdiff_t m_nOutputType = 0x6F0; // ValueRemapperOutputType_t
                constexpr std::ptrdiff_t m_hOutputEntities = 0x6F8; // C_NetworkUtlVectorBase<CHandle<C_BaseEntity>>
                constexpr std::ptrdiff_t m_nHapticsType = 0x710; // ValueRemapperHapticsType_t
                constexpr std::ptrdiff_t m_nMomentumType = 0x714; // ValueRemapperMomentumType_t
                constexpr std::ptrdiff_t m_flMomentumModifier = 0x718; // float32
                constexpr std::ptrdiff_t m_flSnapValue = 0x71C; // float32
                constexpr std::ptrdiff_t m_flCurrentMomentum = 0x720; // float32
                constexpr std::ptrdiff_t m_nRatchetType = 0x724; // ValueRemapperRatchetType_t
                constexpr std::ptrdiff_t m_flRatchetOffset = 0x728; // float32
                constexpr std::ptrdiff_t m_flInputOffset = 0x72C; // float32
                constexpr std::ptrdiff_t m_bEngaged = 0x730; // bool
                constexpr std::ptrdiff_t m_bFirstUpdate = 0x731; // bool
                constexpr std::ptrdiff_t m_flPreviousValue = 0x734; // float32
                constexpr std::ptrdiff_t m_flPreviousUpdateTickTime = 0x738; // GameTime_t
                constexpr std::ptrdiff_t m_vecPreviousTestPoint = 0x73C; // Vector
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
            namespace C_PointWorldText {
                constexpr std::ptrdiff_t m_bForceRecreateNextUpdate = 0xC58; // bool
                constexpr std::ptrdiff_t m_messageText = 0xC68; // char[512]
                constexpr std::ptrdiff_t m_FontName = 0xE68; // char[64]
                constexpr std::ptrdiff_t m_bEnabled = 0xEA8; // bool
                constexpr std::ptrdiff_t m_bFullbright = 0xEA9; // bool
                constexpr std::ptrdiff_t m_flWorldUnitsPerPx = 0xEAC; // float32
                constexpr std::ptrdiff_t m_flFontSize = 0xEB0; // float32
                constexpr std::ptrdiff_t m_flDepthOffset = 0xEB4; // float32
                constexpr std::ptrdiff_t m_Color = 0xEB8; // Color
                constexpr std::ptrdiff_t m_nJustifyHorizontal = 0xEBC; // PointWorldTextJustifyHorizontal_t
                constexpr std::ptrdiff_t m_nJustifyVertical = 0xEC0; // PointWorldTextJustifyVertical_t
                constexpr std::ptrdiff_t m_nReorientMode = 0xEC4; // PointWorldTextReorientMode_t
            }
            // Parent: C_BaseEntity
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_Handle (CHandle< CBaseEntity>)
            // NetworkVarNames: m_bSendHandle (bool)
            namespace C_HandleTest {
                constexpr std::ptrdiff_t m_Handle = 0x6D0; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_bSendHandle = 0x6D4; // bool
            }
            // Parent: C_BaseEntity
            // Fields count: 0
            namespace CClientScriptEntity {
            }
            // Parent: C_BaseEntity
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_EnvWindShared (CEnvWindShared)
            namespace C_EnvWind {
                constexpr std::ptrdiff_t m_EnvWindShared = 0x6D0; // C_EnvWindShared
            }
            // Parent: C_BaseModelEntity
            // Fields count: 0
            namespace C_BaseToggle {
            }
            // Parent: C_BaseToggle
            // Fields count: 3
            //
            // Metadata:
            // NetworkVarNames: m_glowEntity (CHandle< C_BaseModelEntity>)
            // NetworkVarNames: m_usable (bool)
            // NetworkVarNames: m_szDisplayText (string_t)
            namespace C_BaseButton {
                constexpr std::ptrdiff_t m_glowEntity = 0xC50; // CHandle<C_BaseModelEntity>
                constexpr std::ptrdiff_t m_usable = 0xC54; // bool
                constexpr std::ptrdiff_t m_szDisplayText = 0xC58; // CUtlSymbolLarge
            }
            // Parent: C_BaseModelEntity
            // Fields count: 0
            namespace C_PrecipitationBlocker {
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
            namespace C_EntityDissolve {
                constexpr std::ptrdiff_t m_flStartTime = 0xC58; // GameTime_t
                constexpr std::ptrdiff_t m_flFadeInStart = 0xC5C; // float32
                constexpr std::ptrdiff_t m_flFadeInLength = 0xC60; // float32
                constexpr std::ptrdiff_t m_flFadeOutModelStart = 0xC64; // float32
                constexpr std::ptrdiff_t m_flFadeOutModelLength = 0xC68; // float32
                constexpr std::ptrdiff_t m_flFadeOutStart = 0xC6C; // float32
                constexpr std::ptrdiff_t m_flFadeOutLength = 0xC70; // float32
                constexpr std::ptrdiff_t m_flNextSparkTime = 0xC74; // GameTime_t
                constexpr std::ptrdiff_t m_nDissolveType = 0xC78; // EntityDisolveType_t
                constexpr std::ptrdiff_t m_vDissolverOrigin = 0xC7C; // Vector
                constexpr std::ptrdiff_t m_nMagnitude = 0xC88; // uint32
                constexpr std::ptrdiff_t m_bCoreExplode = 0xC8C; // bool
                constexpr std::ptrdiff_t m_bLinkedToServerEnt = 0xC8D; // bool
            }
            // Parent: C_ModelPointEntity
            // Fields count: 0
            namespace C_EnvProjectedTexture {
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
            namespace C_EnvDecal {
                constexpr std::ptrdiff_t m_hDecalMaterial = 0xC50; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_flWidth = 0xC58; // float32
                constexpr std::ptrdiff_t m_flHeight = 0xC5C; // float32
                constexpr std::ptrdiff_t m_flDepth = 0xC60; // float32
                constexpr std::ptrdiff_t m_nRenderOrder = 0xC64; // uint32
                constexpr std::ptrdiff_t m_bProjectOnWorld = 0xC68; // bool
                constexpr std::ptrdiff_t m_bProjectOnCharacters = 0xC69; // bool
                constexpr std::ptrdiff_t m_bProjectOnWater = 0xC6A; // bool
                constexpr std::ptrdiff_t m_flDepthSortBias = 0xC6C; // float32
            }
            // Parent: CGlowOverlay
            // Fields count: 4
            namespace CFireOverlay {
                constexpr std::ptrdiff_t m_pOwner = 0xD0; // C_FireSmoke*
                constexpr std::ptrdiff_t m_vBaseColors = 0xD8; // Vector[4]
                constexpr std::ptrdiff_t m_flScale = 0x108; // float32
                constexpr std::ptrdiff_t m_nGUID = 0x10C; // int32
            }
            // Parent: C_BaseModelEntity
            // Fields count: 0
            namespace C_FuncBrush {
            }
            // Parent: C_FuncBrush
            // Fields count: 3
            //
            // Metadata:
            // NetworkVarNames: m_EffectName (string_t)
            // NetworkVarNames: m_bState (bool)
            namespace C_FuncElectrifiedVolume {
                constexpr std::ptrdiff_t m_nAmbientEffect = 0xC50; // ParticleIndex_t
                constexpr std::ptrdiff_t m_EffectName = 0xC58; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bState = 0xC60; // bool
            }
            // Parent: C_BaseModelEntity
            // Fields count: 0
            //
            // Metadata:
            // MNetworkOverride
            // MNetworkOverride
            namespace C_FuncRotating {
            }
            // Parent: C_BaseModelEntity
            // Fields count: 0
            namespace C_Breakable {
            }
            // Parent: C_Breakable
            // Fields count: 0
            namespace C_PhysBox {
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
            namespace C_RopeKeyframe {
                constexpr std::ptrdiff_t m_LinksTouchingSomething = 0xC58; // CBitVec<10>
                constexpr std::ptrdiff_t m_nLinksTouchingSomething = 0xC5C; // int32
                constexpr std::ptrdiff_t m_bApplyWind = 0xC60; // bool
                constexpr std::ptrdiff_t m_fPrevLockedPoints = 0xC64; // int32
                constexpr std::ptrdiff_t m_iForcePointMoveCounter = 0xC68; // int32
                constexpr std::ptrdiff_t m_bPrevEndPointPos = 0xC6C; // bool[2]
                constexpr std::ptrdiff_t m_vPrevEndPointPos = 0xC70; // Vector[2]
                constexpr std::ptrdiff_t m_flCurScroll = 0xC88; // float32
                constexpr std::ptrdiff_t m_flScrollSpeed = 0xC8C; // float32
                constexpr std::ptrdiff_t m_RopeFlags = 0xC90; // uint16
                constexpr std::ptrdiff_t m_iRopeMaterialModelIndex = 0xC98; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_LightValues = 0xF10; // Vector[10]
                constexpr std::ptrdiff_t m_nSegments = 0xF88; // uint8
                constexpr std::ptrdiff_t m_hStartPoint = 0xF8C; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_hEndPoint = 0xF90; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_iStartAttachment = 0xF94; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_iEndAttachment = 0xF95; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_Subdiv = 0xF96; // uint8
                constexpr std::ptrdiff_t m_RopeLength = 0xF98; // int16
                constexpr std::ptrdiff_t m_Slack = 0xF9A; // int16
                constexpr std::ptrdiff_t m_TextureScale = 0xF9C; // float32
                constexpr std::ptrdiff_t m_fLockedPoints = 0xFA0; // uint8
                constexpr std::ptrdiff_t m_nChangeCount = 0xFA1; // uint8
                constexpr std::ptrdiff_t m_Width = 0xFA4; // float32
                constexpr std::ptrdiff_t m_PhysicsDelegate = 0xFA8; // C_RopeKeyframe::CPhysicsDelegate
                constexpr std::ptrdiff_t m_hMaterial = 0xFB8; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_TextureHeight = 0xFC0; // int32
                constexpr std::ptrdiff_t m_vecImpulse = 0xFC4; // Vector
                constexpr std::ptrdiff_t m_vecPreviousImpulse = 0xFD0; // Vector
                constexpr std::ptrdiff_t m_flCurrentGustTimer = 0xFDC; // float32
                constexpr std::ptrdiff_t m_flCurrentGustLifetime = 0xFE0; // float32
                constexpr std::ptrdiff_t m_flTimeToNextGust = 0xFE4; // float32
                constexpr std::ptrdiff_t m_vWindDir = 0xFE8; // Vector
                constexpr std::ptrdiff_t m_vColorMod = 0xFF4; // Vector
                constexpr std::ptrdiff_t m_vCachedEndPointAttachmentPos = 0x1000; // Vector[2]
                constexpr std::ptrdiff_t m_vCachedEndPointAttachmentAngle = 0x1018; // QAngle[2]
                constexpr std::ptrdiff_t m_bConstrainBetweenEndpoints = 0x1030; // bool
                constexpr std::ptrdiff_t m_bEndPointAttachmentPositionsDirty = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bEndPointAttachmentAnglesDirty = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bNewDataThisFrame = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bPhysicsInitted = 0x0; // bitfield:1
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
            namespace C_SceneEntity {
                constexpr std::ptrdiff_t m_bIsPlayingBack = 0x6D8; // bool
                constexpr std::ptrdiff_t m_bPaused = 0x6D9; // bool
                constexpr std::ptrdiff_t m_bMultiplayer = 0x6DA; // bool
                constexpr std::ptrdiff_t m_bAutogenerated = 0x6DB; // bool
                constexpr std::ptrdiff_t m_flForceClientTime = 0x6DC; // float32
                constexpr std::ptrdiff_t m_nSceneStringIndex = 0x6E0; // uint16
                constexpr std::ptrdiff_t m_bClientOnly = 0x6E2; // bool
                constexpr std::ptrdiff_t m_hOwner = 0x6E4; // CHandle<C_BaseFlex>
                constexpr std::ptrdiff_t m_hActorList = 0x6E8; // C_NetworkUtlVectorBase<CHandle<C_BaseFlex>>
                constexpr std::ptrdiff_t m_bWasPlaying = 0x700; // bool
                constexpr std::ptrdiff_t m_QueuedEvents = 0x710; // CUtlVector<C_SceneEntity::QueuedEvents_t>
                constexpr std::ptrdiff_t m_flCurrentTime = 0x728; // float32
            }
            // Parent: CGlowOverlay
            // Fields count: 1
            namespace C_SunGlowOverlay {
                constexpr std::ptrdiff_t m_bModulateByDot = 0xCC; // bool
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
            namespace C_Sun {
                constexpr std::ptrdiff_t m_fxSSSunFlareEffectIndex = 0xC50; // ParticleIndex_t
                constexpr std::ptrdiff_t m_fxSunFlareEffectIndex = 0xC54; // ParticleIndex_t
                constexpr std::ptrdiff_t m_fdistNormalize = 0xC58; // float32
                constexpr std::ptrdiff_t m_vSunPos = 0xC5C; // Vector
                constexpr std::ptrdiff_t m_vDirection = 0xC68; // Vector
                constexpr std::ptrdiff_t m_iszEffectName = 0xC78; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszSSEffectName = 0xC80; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_clrOverlay = 0xC88; // Color
                constexpr std::ptrdiff_t m_bOn = 0xC8C; // bool
                constexpr std::ptrdiff_t m_bmaxColor = 0xC8D; // bool
                constexpr std::ptrdiff_t m_flSize = 0xC90; // float32
                constexpr std::ptrdiff_t m_flHazeScale = 0xC94; // float32
                constexpr std::ptrdiff_t m_flRotation = 0xC98; // float32
                constexpr std::ptrdiff_t m_flHDRColorScale = 0xC9C; // float32
                constexpr std::ptrdiff_t m_flAlphaHaze = 0xCA0; // float32
                constexpr std::ptrdiff_t m_flAlphaScale = 0xCA4; // float32
                constexpr std::ptrdiff_t m_flAlphaHdr = 0xCA8; // float32
                constexpr std::ptrdiff_t m_flFarZScale = 0xCAC; // float32
            }
            // Parent: C_BaseToggle
            // Fields count: 2
            //
            // Metadata:
            // MNetworkIncludeByName
            // NetworkVarNames: m_bDisabled (bool)
            // NetworkVarNames: m_bClientSidePredicted (bool)
            namespace C_BaseTrigger {
                constexpr std::ptrdiff_t m_bDisabled = 0xC50; // bool
                constexpr std::ptrdiff_t m_bClientSidePredicted = 0xC51; // bool
            }
            // Parent: C_BaseModelEntity
            // Fields count: 0
            namespace C_TriggerVolume {
            }
        }
        // Module: libengine2.so
        // Classes count: 48
        // Enums count: 0
        namespace libengine2 {
            // Parent: None
            // Fields count: 1
            namespace CNetworkVarChainer {
                constexpr std::ptrdiff_t m_PathIndex = 0x20; // ChangeAccessorFieldPathIndex_t
            }
            // Parent: None
            // Fields count: 0
            namespace CVariantDefaultAllocator {
            }
            // Parent: None
            // Fields count: 0
            namespace EntOutput_t {
            }
            // Parent: None
            // Fields count: 7
            namespace EntComponentInfo_t {
                constexpr std::ptrdiff_t m_pName = 0x0; // char*
                constexpr std::ptrdiff_t m_pCPPClassname = 0x8; // char*
                constexpr std::ptrdiff_t m_pNetworkDataReferencedDescription = 0x10; // char*
                constexpr std::ptrdiff_t m_pNetworkDataReferencedPtrPropDescription = 0x18; // char*
                constexpr std::ptrdiff_t m_nRuntimeIndex = 0x20; // int32
                constexpr std::ptrdiff_t m_nFlags = 0x24; // uint32
                constexpr std::ptrdiff_t m_pBaseClassComponentHelper = 0x60; // CEntityComponentHelper*
            }
            // Parent: None
            // Fields count: 0
            namespace CEntityComponent {
            }
            // Parent: None
            // Fields count: 0
            namespace EntInput_t {
            }
            // Parent: None
            // Fields count: 4
            namespace CEntityComponentHelper {
                constexpr std::ptrdiff_t m_flags = 0x8; // uint32
                constexpr std::ptrdiff_t m_pInfo = 0x10; // EntComponentInfo_t*
                constexpr std::ptrdiff_t m_nPriority = 0x18; // int32
                constexpr std::ptrdiff_t m_pNext = 0x20; // CEntityComponentHelper*
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
            // Fields count: 0
            namespace CEmptyEntityInstance {
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // NetworkVarNames: m_pEntity (CEntityIdentity *)
            // NetworkVarNames: m_CScriptComponent (CScriptComponent::Storage_t)
            namespace CEntityInstance {
                constexpr std::ptrdiff_t m_iszPrivateVScripts = 0x8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_pEntity = 0x10; // CEntityIdentity*
                constexpr std::ptrdiff_t m_CScriptComponent = 0x28; // CScriptComponent*
                constexpr std::ptrdiff_t m_bVisibleinPVS = 0x30; // bool
            }
            // Parent: None
            // Fields count: 1
            namespace CEntityIOOutput {
                constexpr std::ptrdiff_t m_Value = 0x18; // CVariantBase<CVariantDefaultAllocator>
            }
            // Parent: CEntityComponent
            // Fields count: 1
            namespace CScriptComponent {
                constexpr std::ptrdiff_t m_scriptClassName = 0x30; // CUtlSymbolLarge
            }
            // Parent: None
            // Fields count: 4
            namespace EngineLoopState_t {
                constexpr std::ptrdiff_t m_nPlatWindowWidth = 0x18; // int32
                constexpr std::ptrdiff_t m_nPlatWindowHeight = 0x1C; // int32
                constexpr std::ptrdiff_t m_nRenderWidth = 0x20; // int32
                constexpr std::ptrdiff_t m_nRenderHeight = 0x24; // int32
            }
            // Parent: None
            // Fields count: 0
            namespace EventModInitialized_t {
            }
            // Parent: None
            // Fields count: 1
            namespace EventFrameBoundary_t {
                constexpr std::ptrdiff_t m_flFrameTime = 0x0; // float32
            }
            // Parent: None
            // Fields count: 1
            namespace EventProfileStorageAvailable_t {
                constexpr std::ptrdiff_t m_nSplitScreenSlot = 0x0; // CSplitScreenSlot
            }
            // Parent: None
            // Fields count: 0
            namespace EventSplitScreenStateChanged_t {
            }
            // Parent: None
            // Fields count: 8
            namespace EventSetTime_t {
                constexpr std::ptrdiff_t m_LoopState = 0x0; // EngineLoopState_t
                constexpr std::ptrdiff_t m_nClientOutputFrames = 0x28; // int32
                constexpr std::ptrdiff_t m_flRealTime = 0x30; // float64
                constexpr std::ptrdiff_t m_flRenderTime = 0x38; // float64
                constexpr std::ptrdiff_t m_flRenderFrameTime = 0x40; // float64
                constexpr std::ptrdiff_t m_flRenderFrameTimeUnbounded = 0x48; // float64
                constexpr std::ptrdiff_t m_flRenderFrameTimeUnscaled = 0x50; // float64
                constexpr std::ptrdiff_t m_flTickRemainder = 0x58; // float64
            }
            // Parent: None
            // Fields count: 2
            namespace EventClientPollInput_t {
                constexpr std::ptrdiff_t m_LoopState = 0x0; // EngineLoopState_t
                constexpr std::ptrdiff_t m_flRealTime = 0x28; // float32
            }
            // Parent: None
            // Fields count: 4
            namespace EventClientProcessInput_t {
                constexpr std::ptrdiff_t m_LoopState = 0x0; // EngineLoopState_t
                constexpr std::ptrdiff_t m_flRealTime = 0x28; // float32
                constexpr std::ptrdiff_t m_flTickInterval = 0x2C; // float32
                constexpr std::ptrdiff_t m_flTickStartTime = 0x30; // float64
            }
            // Parent: None
            // Fields count: 3
            namespace EventClientProcessGameInput_t {
                constexpr std::ptrdiff_t m_LoopState = 0x0; // EngineLoopState_t
                constexpr std::ptrdiff_t m_flRealTime = 0x28; // float32
                constexpr std::ptrdiff_t m_flFrameTime = 0x2C; // float32
            }
            // Parent: None
            // Fields count: 6
            namespace EventClientPreOutput_t {
                constexpr std::ptrdiff_t m_LoopState = 0x0; // EngineLoopState_t
                constexpr std::ptrdiff_t m_flRenderTime = 0x28; // float64
                constexpr std::ptrdiff_t m_flRenderFrameTime = 0x30; // float64
                constexpr std::ptrdiff_t m_flRenderFrameTimeUnbounded = 0x38; // float64
                constexpr std::ptrdiff_t m_flRealTime = 0x40; // float32
                constexpr std::ptrdiff_t m_bRenderOnly = 0x44; // bool
            }
            // Parent: None
            // Fields count: 1
            namespace EventClientSceneSystemThreadStateChange_t {
                constexpr std::ptrdiff_t m_bThreadsActive = 0x0; // bool
            }
            // Parent: None
            // Fields count: 5
            namespace EventClientOutput_t {
                constexpr std::ptrdiff_t m_LoopState = 0x0; // EngineLoopState_t
                constexpr std::ptrdiff_t m_flRenderTime = 0x28; // float32
                constexpr std::ptrdiff_t m_flRealTime = 0x2C; // float32
                constexpr std::ptrdiff_t m_flRenderFrameTimeUnbounded = 0x30; // float32
                constexpr std::ptrdiff_t m_bRenderOnly = 0x34; // bool
            }
            // Parent: None
            // Fields count: 5
            namespace EventClientPostOutput_t {
                constexpr std::ptrdiff_t m_LoopState = 0x0; // EngineLoopState_t
                constexpr std::ptrdiff_t m_flRenderTime = 0x28; // float64
                constexpr std::ptrdiff_t m_flRenderFrameTime = 0x30; // float32
                constexpr std::ptrdiff_t m_flRenderFrameTimeUnbounded = 0x34; // float32
                constexpr std::ptrdiff_t m_bRenderOnly = 0x38; // bool
            }
            // Parent: None
            // Fields count: 4
            namespace EventClientFrameSimulate_t {
                constexpr std::ptrdiff_t m_LoopState = 0x0; // EngineLoopState_t
                constexpr std::ptrdiff_t m_flRealTime = 0x28; // float32
                constexpr std::ptrdiff_t m_flFrameTime = 0x2C; // float32
                constexpr std::ptrdiff_t m_flWhenScheduleSendTickPacket = 0x30; // float64
            }
            // Parent: None
            // Fields count: 3
            namespace EventSimpleLoopFrameUpdate_t {
                constexpr std::ptrdiff_t m_LoopState = 0x0; // EngineLoopState_t
                constexpr std::ptrdiff_t m_flRealTime = 0x28; // float32
                constexpr std::ptrdiff_t m_flFrameTime = 0x2C; // float32
            }
            // Parent: None
            // Fields count: 3
            namespace EventSimulate_t {
                constexpr std::ptrdiff_t m_LoopState = 0x0; // EngineLoopState_t
                constexpr std::ptrdiff_t m_bFirstTick = 0x28; // bool
                constexpr std::ptrdiff_t m_bLastTick = 0x29; // bool
            }
            // Parent: EventSimulate_t
            // Fields count: 4
            namespace EventAdvanceTick_t {
                constexpr std::ptrdiff_t m_nCurrentTick = 0x2C; // int32
                constexpr std::ptrdiff_t m_nCurrentTickThisFrame = 0x30; // int32
                constexpr std::ptrdiff_t m_nTotalTicksThisFrame = 0x34; // int32
                constexpr std::ptrdiff_t m_nTotalTicks = 0x38; // int32
            }
            // Parent: EventSimulate_t
            // Fields count: 4
            namespace EventPostAdvanceTick_t {
                constexpr std::ptrdiff_t m_nCurrentTick = 0x2C; // int32
                constexpr std::ptrdiff_t m_nCurrentTickThisFrame = 0x30; // int32
                constexpr std::ptrdiff_t m_nTotalTicksThisFrame = 0x34; // int32
                constexpr std::ptrdiff_t m_nTotalTicks = 0x38; // int32
            }
            // Parent: EventAdvanceTick_t
            // Fields count: 0
            namespace EventServerAdvanceTick_t {
            }
            // Parent: EventPostAdvanceTick_t
            // Fields count: 0
            namespace EventServerPostAdvanceTick_t {
            }
            // Parent: EventAdvanceTick_t
            // Fields count: 0
            namespace EventClientAdvanceTick_t {
            }
            // Parent: EventPostAdvanceTick_t
            // Fields count: 0
            namespace EventClientPostAdvanceTick_t {
            }
            // Parent: None
            // Fields count: 0
            namespace EventClientPredictionPostNetupdate_t {
            }
            // Parent: None
            // Fields count: 1
            namespace EventClientPollNetworking_t {
                constexpr std::ptrdiff_t m_nTickCount = 0x0; // int32
            }
            // Parent: None
            // Fields count: 0
            namespace EventClientProcessNetworking_t {
            }
            // Parent: EventSimulate_t
            // Fields count: 0
            namespace EventClientPreSimulate_t {
            }
            // Parent: EventSimulate_t
            // Fields count: 0
            namespace EventClientSimulate_t {
            }
            // Parent: EventSimulate_t
            // Fields count: 0
            namespace EventServerPollNetworking_t {
            }
            // Parent: EventSimulate_t
            // Fields count: 0
            namespace EventServerProcessNetworking_t {
            }
            // Parent: EventSimulate_t
            // Fields count: 0
            namespace EventServerSimulate_t {
            }
            // Parent: EventSimulate_t
            // Fields count: 0
            namespace EventServerPostSimulate_t {
            }
            // Parent: EventSimulate_t
            // Fields count: 0
            namespace EventClientPostSimulate_t {
            }
            // Parent: EventSimulate_t
            // Fields count: 0
            namespace EventClientPauseSimulate_t {
            }
            // Parent: None
            // Fields count: 1
            namespace EventPostDataUpdate_t {
                constexpr std::ptrdiff_t m_nCount = 0x0; // int32
            }
            // Parent: None
            // Fields count: 1
            namespace EventPreDataUpdate_t {
                constexpr std::ptrdiff_t m_nCount = 0x0; // int32
            }
            // Parent: None
            // Fields count: 1
            namespace EventAppShutdown_t {
                constexpr std::ptrdiff_t m_nDummy0 = 0x0; // int32
            }
        }
        // Module: libhost.so
        // Classes count: 2
        // Enums count: 0
        namespace libhost {
            // Parent: None
            // Fields count: 1
            namespace CAnimScriptBase {
                constexpr std::ptrdiff_t m_bIsValid = 0x8; // bool
            }
            // Parent: CAnimScriptBase
            // Fields count: 1
            namespace EmptyTestScript {
                constexpr std::ptrdiff_t m_hTest = 0x10; // CAnimScriptParam<float32>
            }
        }
        // Module: libmaterialsystem2.so
        // Classes count: 13
        // Enums count: 0
        namespace libmaterialsystem2 {
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace MaterialParam_t {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
            }
            // Parent: MaterialParam_t
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace MaterialParamInt_t {
                constexpr std::ptrdiff_t m_nValue = 0x8; // int32
            }
            // Parent: MaterialParam_t
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace MaterialParamFloat_t {
                constexpr std::ptrdiff_t m_flValue = 0x8; // float32
            }
            // Parent: MaterialParam_t
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace MaterialParamVector_t {
                constexpr std::ptrdiff_t m_value = 0x8; // Vector4D
            }
            // Parent: MaterialParam_t
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace MaterialParamTexture_t {
                constexpr std::ptrdiff_t m_pValue = 0x8; // CStrongHandle<InfoForResourceTypeCTextureBase>
            }
            // Parent: MaterialParam_t
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace MaterialParamString_t {
                constexpr std::ptrdiff_t m_value = 0x8; // CUtlString
            }
            // Parent: MaterialParam_t
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace MaterialParamBuffer_t {
                constexpr std::ptrdiff_t m_value = 0x8; // CUtlBinaryBlock
            }
            // Parent: None
            // Fields count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace MaterialResourceData_t {
                constexpr std::ptrdiff_t m_materialName = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_shaderName = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_intParams = 0x10; // CUtlVector<MaterialParamInt_t>
                constexpr std::ptrdiff_t m_floatParams = 0x28; // CUtlVector<MaterialParamFloat_t>
                constexpr std::ptrdiff_t m_vectorParams = 0x40; // CUtlVector<MaterialParamVector_t>
                constexpr std::ptrdiff_t m_textureParams = 0x58; // CUtlVector<MaterialParamTexture_t>
                constexpr std::ptrdiff_t m_dynamicParams = 0x70; // CUtlVector<MaterialParamBuffer_t>
                constexpr std::ptrdiff_t m_dynamicTextureParams = 0x88; // CUtlVector<MaterialParamBuffer_t>
                constexpr std::ptrdiff_t m_intAttributes = 0xA0; // CUtlVector<MaterialParamInt_t>
                constexpr std::ptrdiff_t m_floatAttributes = 0xB8; // CUtlVector<MaterialParamFloat_t>
                constexpr std::ptrdiff_t m_vectorAttributes = 0xD0; // CUtlVector<MaterialParamVector_t>
                constexpr std::ptrdiff_t m_textureAttributes = 0xE8; // CUtlVector<MaterialParamTexture_t>
                constexpr std::ptrdiff_t m_stringAttributes = 0x100; // CUtlVector<MaterialParamString_t>
                constexpr std::ptrdiff_t m_renderAttributesUsed = 0x118; // CUtlVector<CUtlString>
            }
            // Parent: None
            // Fields count: 15
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace PostProcessingTonemapParameters_t {
                constexpr std::ptrdiff_t m_flExposureBias = 0x0; // float32
                constexpr std::ptrdiff_t m_flShoulderStrength = 0x4; // float32
                constexpr std::ptrdiff_t m_flLinearStrength = 0x8; // float32
                constexpr std::ptrdiff_t m_flLinearAngle = 0xC; // float32
                constexpr std::ptrdiff_t m_flToeStrength = 0x10; // float32
                constexpr std::ptrdiff_t m_flToeNum = 0x14; // float32
                constexpr std::ptrdiff_t m_flToeDenom = 0x18; // float32
                constexpr std::ptrdiff_t m_flWhitePoint = 0x1C; // float32
                constexpr std::ptrdiff_t m_flLuminanceSource = 0x20; // float32
                constexpr std::ptrdiff_t m_flExposureBiasShadows = 0x24; // float32
                constexpr std::ptrdiff_t m_flExposureBiasHighlights = 0x28; // float32
                constexpr std::ptrdiff_t m_flMinShadowLum = 0x2C; // float32
                constexpr std::ptrdiff_t m_flMaxShadowLum = 0x30; // float32
                constexpr std::ptrdiff_t m_flMinHighlightLum = 0x34; // float32
                constexpr std::ptrdiff_t m_flMaxHighlightLum = 0x38; // float32
            }
            // Parent: None
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace PostProcessingBloomParameters_t {
                constexpr std::ptrdiff_t m_blendMode = 0x0; // BloomBlendMode_t
                constexpr std::ptrdiff_t m_flBloomStrength = 0x4; // float32
                constexpr std::ptrdiff_t m_flScreenBloomStrength = 0x8; // float32
                constexpr std::ptrdiff_t m_flBlurBloomStrength = 0xC; // float32
                constexpr std::ptrdiff_t m_flBloomThreshold = 0x10; // float32
                constexpr std::ptrdiff_t m_flBloomThresholdWidth = 0x14; // float32
                constexpr std::ptrdiff_t m_flSkyboxBloomStrength = 0x18; // float32
                constexpr std::ptrdiff_t m_flBloomStartValue = 0x1C; // float32
                constexpr std::ptrdiff_t m_flBlurWeight = 0x20; // float32[5]
                constexpr std::ptrdiff_t m_vBlurTint = 0x34; // Vector[5]
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace PostProcessingVignetteParameters_t {
                constexpr std::ptrdiff_t m_flVignetteStrength = 0x0; // float32
                constexpr std::ptrdiff_t m_vCenter = 0x4; // Vector2D
                constexpr std::ptrdiff_t m_flRadius = 0xC; // float32
                constexpr std::ptrdiff_t m_flRoundness = 0x10; // float32
                constexpr std::ptrdiff_t m_flFeather = 0x14; // float32
                constexpr std::ptrdiff_t m_vColorTint = 0x18; // Vector
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace PostProcessingLocalContrastParameters_t {
                constexpr std::ptrdiff_t m_flLocalContrastStrength = 0x0; // float32
                constexpr std::ptrdiff_t m_flLocalContrastEdgeStrength = 0x4; // float32
                constexpr std::ptrdiff_t m_flLocalContrastVignetteStart = 0x8; // float32
                constexpr std::ptrdiff_t m_flLocalContrastVignetteEnd = 0xC; // float32
                constexpr std::ptrdiff_t m_flLocalContrastVignetteBlur = 0x10; // float32
            }
            // Parent: None
            // Fields count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace PostProcessingResource_t {
                constexpr std::ptrdiff_t m_bHasTonemapParams = 0x0; // bool
                constexpr std::ptrdiff_t m_toneMapParams = 0x4; // PostProcessingTonemapParameters_t
                constexpr std::ptrdiff_t m_bHasBloomParams = 0x40; // bool
                constexpr std::ptrdiff_t m_bloomParams = 0x44; // PostProcessingBloomParameters_t
                constexpr std::ptrdiff_t m_bHasVignetteParams = 0xB4; // bool
                constexpr std::ptrdiff_t m_vignetteParams = 0xB8; // PostProcessingVignetteParameters_t
                constexpr std::ptrdiff_t m_bHasLocalContrastParams = 0xDC; // bool
                constexpr std::ptrdiff_t m_localConstrastParams = 0xE0; // PostProcessingLocalContrastParameters_t
                constexpr std::ptrdiff_t m_nColorCorrectionVolumeDim = 0xF4; // int32
                constexpr std::ptrdiff_t m_colorCorrectionVolumeData = 0xF8; // CUtlBinaryBlock
                constexpr std::ptrdiff_t m_bHasColorCorrection = 0x110; // bool
            }
        }
        // Module: libmeshsystem.so
        // Classes count: 0
        // Enums count: 0
        namespace libmeshsystem {
        }
        // Module: libnetworksystem.so
        // Classes count: 1
        // Enums count: 0
        namespace libnetworksystem {
            // Parent: None
            // Fields count: 1
            namespace ChangeAccessorFieldPathIndex_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // int16
            }
        }
        // Module: libpanorama.so
        // Classes count: 0
        // Enums count: 0
        namespace libpanorama {
        }
        // Module: libparticles.so
        // Classes count: 250
        // Enums count: 0
        namespace libparticles {
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CParticleInput {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyCustomEditor
            namespace CPerParticleFloatInput {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyCustomEditor
            namespace CParticleCollectionFloatInput {
            }
            // Parent: CParticleCollectionFloatInput
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyCustomEditor
            namespace CParticleCollectionRendererFloatInput {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyCustomEditor
            namespace CParticleRemapFloatInput {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyCustomEditor
            namespace CPerParticleVecInput {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyCustomEditor
            namespace CParticleCollectionVecInput {
            }
            // Parent: CParticleCollectionVecInput
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyCustomEditor
            namespace CParticleCollectionRendererVecInput {
            }
            // Parent: None
            // Fields count: 1
            namespace PARTICLE_EHANDLE__ {
                constexpr std::ptrdiff_t unused = 0x0; // int32
            }
            // Parent: None
            // Fields count: 1
            namespace PARTICLE_WORLD_HANDLE__ {
                constexpr std::ptrdiff_t unused = 0x0; // int32
            }
            // Parent: None
            // Fields count: 0
            namespace IParticleEffect {
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace ParticleNamedValueConfiguration_t {
                constexpr std::ptrdiff_t m_ConfigName = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_ConfigValue = 0x8; // KeyValues3
                constexpr std::ptrdiff_t m_iAttachType = 0x18; // ParticleAttachment_t
                constexpr std::ptrdiff_t m_BoundEntityPath = 0x20; // CUtlString
                constexpr std::ptrdiff_t m_strEntityScope = 0x28; // CUtlString
                constexpr std::ptrdiff_t m_strAttachmentName = 0x30; // CUtlString
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace ParticleNamedValueSource_t {
                constexpr std::ptrdiff_t m_Name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_IsPublic = 0x8; // bool
                constexpr std::ptrdiff_t m_ValueType = 0xC; // PulseValueType_t
                constexpr std::ptrdiff_t m_DefaultConfig = 0x10; // ParticleNamedValueConfiguration_t
                constexpr std::ptrdiff_t m_NamedConfigs = 0x48; // CUtlVector<ParticleNamedValueConfiguration_t>
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyCustomEditor
            namespace CParticleVariableRef {
                constexpr std::ptrdiff_t m_variableName = 0x0; // CKV3MemberNameWithStorage
                constexpr std::ptrdiff_t m_variableType = 0x38; // PulseValueType_t
            }
            // Parent: None
            // Fields count: 0
            namespace CParticleProperty {
            }
            // Parent: IParticleEffect
            // Fields count: 32
            namespace CNewParticleEffect {
                constexpr std::ptrdiff_t m_pNext = 0x10; // CNewParticleEffect*
                constexpr std::ptrdiff_t m_pPrev = 0x18; // CNewParticleEffect*
                constexpr std::ptrdiff_t m_pParticles = 0x20; // IParticleCollection*
                constexpr std::ptrdiff_t m_pDebugName = 0x28; // char*
                constexpr std::ptrdiff_t m_bDontRemove = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bRemove = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bNeedsBBoxUpdate = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bIsFirstFrame = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bAutoUpdateBBox = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bAllocated = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bSimulate = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bShouldPerformCullCheck = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bForceNoDraw = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bShouldSave = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bDisableAggregation = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bShouldSimulateDuringGamePaused = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bShouldCheckFoW = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_vSortOrigin = 0x40; // Vector
                constexpr std::ptrdiff_t m_flScale = 0x4C; // float32
                constexpr std::ptrdiff_t m_hOwner = 0x50; // PARTICLE_EHANDLE__*
                constexpr std::ptrdiff_t m_pOwningParticleProperty = 0x58; // CParticleProperty*
                constexpr std::ptrdiff_t m_flFreezeTransitionStart = 0x70; // float32
                constexpr std::ptrdiff_t m_flFreezeTransitionDuration = 0x74; // float32
                constexpr std::ptrdiff_t m_flFreezeTransitionOverride = 0x78; // float32
                constexpr std::ptrdiff_t m_bFreezeTransitionActive = 0x7C; // bool
                constexpr std::ptrdiff_t m_bFreezeTargetState = 0x7D; // bool
                constexpr std::ptrdiff_t m_bCanFreeze = 0x7E; // bool
                constexpr std::ptrdiff_t m_LastMin = 0x80; // Vector
                constexpr std::ptrdiff_t m_LastMax = 0x8C; // Vector
                constexpr std::ptrdiff_t m_nSplitScreenUser = 0x98; // CSplitScreenSlot
                constexpr std::ptrdiff_t m_vecAggregationCenter = 0x9C; // Vector
                constexpr std::ptrdiff_t m_RefCount = 0xC0; // int32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CRandomNumberGeneratorParameters {
                constexpr std::ptrdiff_t m_bDistributeEvenly = 0x0; // bool
                constexpr std::ptrdiff_t m_nSeed = 0x4; // int32
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace MaterialVariable_t {
                constexpr std::ptrdiff_t m_strVariable = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_nVariableField = 0x8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flScale = 0xC; // float32
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace RenderProjectedMaterial_t {
                constexpr std::ptrdiff_t m_hMaterial = 0x0; // CStrongHandle<InfoForResourceTypeIMaterial2>
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace ParticlePreviewBodyGroup_t {
                constexpr std::ptrdiff_t m_bodyGroupName = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_nValue = 0x8; // int32
            }
            // Parent: None
            // Fields count: 16
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace ParticlePreviewState_t {
                constexpr std::ptrdiff_t m_previewModel = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_nModSpecificData = 0x8; // uint32
                constexpr std::ptrdiff_t m_groundType = 0xC; // PetGroundType_t
                constexpr std::ptrdiff_t m_sequenceName = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_nFireParticleOnSequenceFrame = 0x18; // int32
                constexpr std::ptrdiff_t m_hitboxSetName = 0x20; // CUtlString
                constexpr std::ptrdiff_t m_materialGroupName = 0x28; // CUtlString
                constexpr std::ptrdiff_t m_vecBodyGroups = 0x30; // CUtlVector<ParticlePreviewBodyGroup_t>
                constexpr std::ptrdiff_t m_flPlaybackSpeed = 0x48; // float32
                constexpr std::ptrdiff_t m_flParticleSimulationRate = 0x4C; // float32
                constexpr std::ptrdiff_t m_bShouldDrawHitboxes = 0x50; // bool
                constexpr std::ptrdiff_t m_bShouldDrawAttachments = 0x51; // bool
                constexpr std::ptrdiff_t m_bShouldDrawAttachmentNames = 0x52; // bool
                constexpr std::ptrdiff_t m_bShouldDrawControlPointAxes = 0x53; // bool
                constexpr std::ptrdiff_t m_bAnimationNonLooping = 0x54; // bool
                constexpr std::ptrdiff_t m_vecPreviewGravity = 0x58; // Vector
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace ParticleControlPointDriver_t {
                constexpr std::ptrdiff_t m_iControlPoint = 0x0; // int32
                constexpr std::ptrdiff_t m_iAttachType = 0x4; // ParticleAttachment_t
                constexpr std::ptrdiff_t m_attachmentName = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_vecOffset = 0x10; // Vector
                constexpr std::ptrdiff_t m_angOffset = 0x1C; // QAngle
                constexpr std::ptrdiff_t m_entityName = 0x28; // CUtlString
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace ParticleControlPointConfiguration_t {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_drivers = 0x8; // CUtlVector<ParticleControlPointDriver_t>
                constexpr std::ptrdiff_t m_previewState = 0x20; // ParticlePreviewState_t
            }
            // Parent: None
            // Fields count: 0
            namespace IParticleCollection {
            }
            // Parent: None
            // Fields count: 0
            namespace IControlPointEditorData {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace IParticleSystemDefinition {
            }
            // Parent: None
            // Fields count: 18
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CParticleVisibilityInputs {
                constexpr std::ptrdiff_t m_flCameraBias = 0x0; // float32
                constexpr std::ptrdiff_t m_nCPin = 0x4; // int32
                constexpr std::ptrdiff_t m_flProxyRadius = 0x8; // float32
                constexpr std::ptrdiff_t m_flInputMin = 0xC; // float32
                constexpr std::ptrdiff_t m_flInputMax = 0x10; // float32
                constexpr std::ptrdiff_t m_flNoPixelVisibilityFallback = 0x14; // float32
                constexpr std::ptrdiff_t m_flDistanceInputMin = 0x18; // float32
                constexpr std::ptrdiff_t m_flDistanceInputMax = 0x1C; // float32
                constexpr std::ptrdiff_t m_flDotInputMin = 0x20; // float32
                constexpr std::ptrdiff_t m_flDotInputMax = 0x24; // float32
                constexpr std::ptrdiff_t m_bDotCPAngles = 0x28; // bool
                constexpr std::ptrdiff_t m_bDotCameraAngles = 0x29; // bool
                constexpr std::ptrdiff_t m_flAlphaScaleMin = 0x2C; // float32
                constexpr std::ptrdiff_t m_flAlphaScaleMax = 0x30; // float32
                constexpr std::ptrdiff_t m_flRadiusScaleMin = 0x34; // float32
                constexpr std::ptrdiff_t m_flRadiusScaleMax = 0x38; // float32
                constexpr std::ptrdiff_t m_flRadiusScaleFOVBase = 0x3C; // float32
                constexpr std::ptrdiff_t m_bRightEye = 0x40; // bool
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPathParameters {
                constexpr std::ptrdiff_t m_nStartControlPointNumber = 0x0; // int32
                constexpr std::ptrdiff_t m_nEndControlPointNumber = 0x4; // int32
                constexpr std::ptrdiff_t m_nBulgeControl = 0x8; // int32
                constexpr std::ptrdiff_t m_flBulge = 0xC; // float32
                constexpr std::ptrdiff_t m_flMidPoint = 0x10; // float32
                constexpr std::ptrdiff_t m_vStartPointOffset = 0x14; // Vector
                constexpr std::ptrdiff_t m_vMidPointOffset = 0x20; // Vector
                constexpr std::ptrdiff_t m_vEndOffset = 0x2C; // Vector
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace ParticleChildrenInfo_t {
                constexpr std::ptrdiff_t m_ChildRef = 0x0; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                constexpr std::ptrdiff_t m_flDelay = 0x8; // float32
                constexpr std::ptrdiff_t m_bEndCap = 0xC; // bool
                constexpr std::ptrdiff_t m_bDisableChild = 0xD; // bool
                constexpr std::ptrdiff_t m_nDetailLevel = 0x10; // ParticleDetailLevel_t
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace ControlPointReference_t {
                constexpr std::ptrdiff_t m_controlPointNameString = 0x0; // int32
                constexpr std::ptrdiff_t m_vOffsetFromControlPoint = 0x4; // Vector
                constexpr std::ptrdiff_t m_bOffsetInLocalSpace = 0x10; // bool
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace ModelReference_t {
                constexpr std::ptrdiff_t m_model = 0x0; // CStrongHandle<InfoForResourceTypeCModel>
                constexpr std::ptrdiff_t m_flRelativeProbabilityOfSpawn = 0x8; // float32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace SequenceWeightedList_t {
                constexpr std::ptrdiff_t m_nSequence = 0x0; // int32
                constexpr std::ptrdiff_t m_flRelativeWeight = 0x4; // float32
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CollisionGroupContext_t {
                constexpr std::ptrdiff_t m_nCollisionGroupNumber = 0x0; // int32
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace PointDefinition_t {
                constexpr std::ptrdiff_t m_nControlPoint = 0x0; // int32
                constexpr std::ptrdiff_t m_bLocalCoords = 0x4; // bool
                constexpr std::ptrdiff_t m_vOffset = 0x8; // Vector
            }
            // Parent: PointDefinition_t
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace PointDefinitionWithTimeValues_t {
                constexpr std::ptrdiff_t m_flTimeDuration = 0x14; // float32
            }
            // Parent: IParticleSystemDefinition
            // Fields count: 64
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CParticleSystemDefinition {
                constexpr std::ptrdiff_t m_nBehaviorVersion = 0x8; // int32
                constexpr std::ptrdiff_t m_PreEmissionOperators = 0x10; // CUtlVector<CParticleFunctionPreEmission*>
                constexpr std::ptrdiff_t m_Emitters = 0x28; // CUtlVector<CParticleFunctionEmitter*>
                constexpr std::ptrdiff_t m_Initializers = 0x40; // CUtlVector<CParticleFunctionInitializer*>
                constexpr std::ptrdiff_t m_Operators = 0x58; // CUtlVector<CParticleFunctionOperator*>
                constexpr std::ptrdiff_t m_ForceGenerators = 0x70; // CUtlVector<CParticleFunctionForce*>
                constexpr std::ptrdiff_t m_Constraints = 0x88; // CUtlVector<CParticleFunctionConstraint*>
                constexpr std::ptrdiff_t m_Renderers = 0xA0; // CUtlVector<CParticleFunctionRenderer*>
                constexpr std::ptrdiff_t m_Children = 0xB8; // CUtlVector<ParticleChildrenInfo_t>
                constexpr std::ptrdiff_t m_nFirstMultipleOverride_BackwardCompat = 0x178; // int32
                constexpr std::ptrdiff_t m_nInitialParticles = 0x210; // int32
                constexpr std::ptrdiff_t m_nMaxParticles = 0x214; // int32
                constexpr std::ptrdiff_t m_nGroupID = 0x218; // int32
                constexpr std::ptrdiff_t m_BoundingBoxMin = 0x21C; // Vector
                constexpr std::ptrdiff_t m_BoundingBoxMax = 0x228; // Vector
                constexpr std::ptrdiff_t m_flDepthSortBias = 0x234; // float32
                constexpr std::ptrdiff_t m_nSortOverridePositionCP = 0x238; // int32
                constexpr std::ptrdiff_t m_bInfiniteBounds = 0x23C; // bool
                constexpr std::ptrdiff_t m_bEnableNamedValues = 0x23D; // bool
                constexpr std::ptrdiff_t m_NamedValueDomain = 0x240; // CUtlString
                constexpr std::ptrdiff_t m_NamedValueLocals = 0x248; // CUtlVector<ParticleNamedValueSource_t*>
                constexpr std::ptrdiff_t m_ConstantColor = 0x260; // Color
                constexpr std::ptrdiff_t m_ConstantNormal = 0x264; // Vector
                constexpr std::ptrdiff_t m_flConstantRadius = 0x270; // float32
                constexpr std::ptrdiff_t m_flConstantRotation = 0x274; // float32
                constexpr std::ptrdiff_t m_flConstantRotationSpeed = 0x278; // float32
                constexpr std::ptrdiff_t m_flConstantLifespan = 0x27C; // float32
                constexpr std::ptrdiff_t m_nConstantSequenceNumber = 0x280; // int32
                constexpr std::ptrdiff_t m_nConstantSequenceNumber1 = 0x284; // int32
                constexpr std::ptrdiff_t m_nSnapshotControlPoint = 0x288; // int32
                constexpr std::ptrdiff_t m_hSnapshot = 0x290; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
                constexpr std::ptrdiff_t m_pszCullReplacementName = 0x298; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                constexpr std::ptrdiff_t m_flCullRadius = 0x2A0; // float32
                constexpr std::ptrdiff_t m_flCullFillCost = 0x2A4; // float32
                constexpr std::ptrdiff_t m_nCullControlPoint = 0x2A8; // int32
                constexpr std::ptrdiff_t m_hFallback = 0x2B0; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                constexpr std::ptrdiff_t m_nFallbackMaxCount = 0x2B8; // int32
                constexpr std::ptrdiff_t m_hLowViolenceDef = 0x2C0; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                constexpr std::ptrdiff_t m_hReferenceReplacement = 0x2C8; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                constexpr std::ptrdiff_t m_flPreSimulationTime = 0x2D0; // float32
                constexpr std::ptrdiff_t m_flStopSimulationAfterTime = 0x2D4; // float32
                constexpr std::ptrdiff_t m_flMaximumTimeStep = 0x2D8; // float32
                constexpr std::ptrdiff_t m_flMaximumSimTime = 0x2DC; // float32
                constexpr std::ptrdiff_t m_flMinimumSimTime = 0x2E0; // float32
                constexpr std::ptrdiff_t m_flMinimumTimeStep = 0x2E4; // float32
                constexpr std::ptrdiff_t m_nMinimumFrames = 0x2E8; // int32
                constexpr std::ptrdiff_t m_nMinCPULevel = 0x2EC; // int32
                constexpr std::ptrdiff_t m_nMinGPULevel = 0x2F0; // int32
                constexpr std::ptrdiff_t m_flNoDrawTimeToGoToSleep = 0x2F4; // float32
                constexpr std::ptrdiff_t m_flMaxDrawDistance = 0x2F8; // float32
                constexpr std::ptrdiff_t m_flStartFadeDistance = 0x2FC; // float32
                constexpr std::ptrdiff_t m_flMaxCreationDistance = 0x300; // float32
                constexpr std::ptrdiff_t m_nAggregationMinAvailableParticles = 0x304; // int32
                constexpr std::ptrdiff_t m_flAggregateRadius = 0x308; // float32
                constexpr std::ptrdiff_t m_bShouldBatch = 0x30C; // bool
                constexpr std::ptrdiff_t m_bShouldHitboxesFallbackToRenderBounds = 0x30D; // bool
                constexpr std::ptrdiff_t m_bShouldHitboxesFallbackToSnapshot = 0x30E; // bool
                constexpr std::ptrdiff_t m_nViewModelEffect = 0x310; // InheritableBoolType_t
                constexpr std::ptrdiff_t m_bScreenSpaceEffect = 0x314; // bool
                constexpr std::ptrdiff_t m_pszTargetLayerID = 0x318; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_nSkipRenderControlPoint = 0x320; // int32
                constexpr std::ptrdiff_t m_nAllowRenderControlPoint = 0x324; // int32
                constexpr std::ptrdiff_t m_bShouldSort = 0x328; // bool
                constexpr std::ptrdiff_t m_controlPointConfigurations = 0x370; // CUtlVector<ParticleControlPointConfiguration_t>
            }
            // Parent: None
            // Fields count: 16
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CParticleFunction {
                constexpr std::ptrdiff_t m_flOpStrength = 0x8; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_nOpEndCapState = 0x158; // ParticleEndcapMode_t
                constexpr std::ptrdiff_t m_flOpStartFadeInTime = 0x15C; // float32
                constexpr std::ptrdiff_t m_flOpEndFadeInTime = 0x160; // float32
                constexpr std::ptrdiff_t m_flOpStartFadeOutTime = 0x164; // float32
                constexpr std::ptrdiff_t m_flOpEndFadeOutTime = 0x168; // float32
                constexpr std::ptrdiff_t m_flOpFadeOscillatePeriod = 0x16C; // float32
                constexpr std::ptrdiff_t m_bNormalizeToStopTime = 0x170; // bool
                constexpr std::ptrdiff_t m_flOpTimeOffsetMin = 0x174; // float32
                constexpr std::ptrdiff_t m_flOpTimeOffsetMax = 0x178; // float32
                constexpr std::ptrdiff_t m_nOpTimeOffsetSeed = 0x17C; // int32
                constexpr std::ptrdiff_t m_nOpTimeScaleSeed = 0x180; // int32
                constexpr std::ptrdiff_t m_flOpTimeScaleMin = 0x184; // float32
                constexpr std::ptrdiff_t m_flOpTimeScaleMax = 0x188; // float32
                constexpr std::ptrdiff_t m_bDisableOperator = 0x18E; // bool
                constexpr std::ptrdiff_t m_Notes = 0x190; // CUtlString
            }
            // Parent: CParticleFunction
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CParticleFunctionInitializer {
                constexpr std::ptrdiff_t m_nAssociatedEmitterIndex = 0x1B0; // int32
            }
            // Parent: CParticleFunction
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CParticleFunctionEmitter {
                constexpr std::ptrdiff_t m_nEmitterIndex = 0x1B0; // int32
            }
            // Parent: CParticleFunction
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CParticleFunctionConstraint {
            }
            // Parent: CParticleFunction
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CParticleFunctionOperator {
            }
            // Parent: CParticleFunction
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CParticleFunctionForce {
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CParticleFunctionPreEmission {
                constexpr std::ptrdiff_t m_bRunOnce = 0x1B0; // bool
            }
            // Parent: CParticleFunction
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CParticleFunctionRenderer {
                constexpr std::ptrdiff_t VisibilityInputs = 0x1B0; // CParticleVisibilityInputs
                constexpr std::ptrdiff_t m_bCannotBeRefracted = 0x1F4; // bool
                constexpr std::ptrdiff_t m_bSkipRenderingOnMobile = 0x1F5; // bool
            }
            // Parent: None
            // Fields count: 16
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace TextureControls_t {
                constexpr std::ptrdiff_t m_flFinalTextureScaleU = 0x0; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_flFinalTextureScaleV = 0x150; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_flFinalTextureOffsetU = 0x2A0; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_flFinalTextureOffsetV = 0x3F0; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_flFinalTextureUVRotation = 0x540; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_flZoomScale = 0x690; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_flDistortion = 0x7E0; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_bRandomizeOffsets = 0x930; // bool
                constexpr std::ptrdiff_t m_bClampUVs = 0x931; // bool
                constexpr std::ptrdiff_t m_nPerParticleBlend = 0x934; // SpriteCardPerParticleScale_t
                constexpr std::ptrdiff_t m_nPerParticleScale = 0x938; // SpriteCardPerParticleScale_t
                constexpr std::ptrdiff_t m_nPerParticleOffsetU = 0x93C; // SpriteCardPerParticleScale_t
                constexpr std::ptrdiff_t m_nPerParticleOffsetV = 0x940; // SpriteCardPerParticleScale_t
                constexpr std::ptrdiff_t m_nPerParticleRotation = 0x944; // SpriteCardPerParticleScale_t
                constexpr std::ptrdiff_t m_nPerParticleZoom = 0x948; // SpriteCardPerParticleScale_t
                constexpr std::ptrdiff_t m_nPerParticleDistortion = 0x94C; // SpriteCardPerParticleScale_t
            }
            // Parent: None
            // Fields count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace TextureGroup_t {
                constexpr std::ptrdiff_t m_bEnabled = 0x0; // bool
                constexpr std::ptrdiff_t m_bReplaceTextureWithGradient = 0x1; // bool
                constexpr std::ptrdiff_t m_hTexture = 0x8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Gradient = 0x10; // CColorGradient
                constexpr std::ptrdiff_t m_nTextureType = 0x28; // SpriteCardTextureType_t
                constexpr std::ptrdiff_t m_nTextureChannels = 0x2C; // SpriteCardTextureChannel_t
                constexpr std::ptrdiff_t m_nTextureBlendMode = 0x30; // ParticleTextureLayerBlendType_t
                constexpr std::ptrdiff_t m_flTextureBlend = 0x38; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_TextureControls = 0x188; // TextureControls_t
            }
            // Parent: CParticleFunctionRenderer
            // Fields count: 62
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CBaseRendererSource2 {
                constexpr std::ptrdiff_t m_flRadiusScale = 0x1F8; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_flAlphaScale = 0x348; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_flRollScale = 0x498; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_nAlpha2Field = 0x5E8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_vecColorScale = 0x5F0; // CParticleCollectionRendererVecInput
                constexpr std::ptrdiff_t m_nColorBlendType = 0xC20; // ParticleColorBlendType_t
                constexpr std::ptrdiff_t m_nShaderType = 0xC24; // SpriteCardShaderType_t
                constexpr std::ptrdiff_t m_strShaderOverride = 0xC28; // CUtlString
                constexpr std::ptrdiff_t m_flCenterXOffset = 0xC30; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_flCenterYOffset = 0xD80; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_flBumpStrength = 0xED0; // float32
                constexpr std::ptrdiff_t m_nCropTextureOverride = 0xED4; // ParticleSequenceCropOverride_t
                constexpr std::ptrdiff_t m_vecTexturesInput = 0xED8; // CUtlVector<TextureGroup_t>
                constexpr std::ptrdiff_t m_flAnimationRate = 0xEF0; // float32
                constexpr std::ptrdiff_t m_nAnimationType = 0xEF4; // AnimationType_t
                constexpr std::ptrdiff_t m_bAnimateInFPS = 0xEF8; // bool
                constexpr std::ptrdiff_t m_flSelfIllumAmount = 0xF00; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_flDiffuseAmount = 0x1050; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_flDiffuseClamp = 0x11A0; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_nLightingControlPoint = 0x12F0; // int32
                constexpr std::ptrdiff_t m_nSelfIllumPerParticle = 0x12F4; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nOutputBlendMode = 0x12F8; // ParticleOutputBlendMode_t
                constexpr std::ptrdiff_t m_bGammaCorrectVertexColors = 0x12FC; // bool
                constexpr std::ptrdiff_t m_bSaturateColorPreAlphaBlend = 0x12FD; // bool
                constexpr std::ptrdiff_t m_flAddSelfAmount = 0x1300; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_flDesaturation = 0x1450; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_flOverbrightFactor = 0x15A0; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_nHSVShiftControlPoint = 0x16F0; // int32
                constexpr std::ptrdiff_t m_nFogType = 0x16F4; // ParticleFogType_t
                constexpr std::ptrdiff_t m_flFogAmount = 0x16F8; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_bTintByFOW = 0x1848; // bool
                constexpr std::ptrdiff_t m_bTintByGlobalLight = 0x1849; // bool
                constexpr std::ptrdiff_t m_nPerParticleAlphaReference = 0x184C; // SpriteCardPerParticleScale_t
                constexpr std::ptrdiff_t m_nPerParticleAlphaRefWindow = 0x1850; // SpriteCardPerParticleScale_t
                constexpr std::ptrdiff_t m_nAlphaReferenceType = 0x1854; // ParticleAlphaReferenceType_t
                constexpr std::ptrdiff_t m_flAlphaReferenceSoftness = 0x1858; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_flSourceAlphaValueToMapToZero = 0x19A8; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_flSourceAlphaValueToMapToOne = 0x1AF8; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_bRefract = 0x1C48; // bool
                constexpr std::ptrdiff_t m_bRefractSolid = 0x1C49; // bool
                constexpr std::ptrdiff_t m_flRefractAmount = 0x1C50; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_nRefractBlurRadius = 0x1DA0; // int32
                constexpr std::ptrdiff_t m_nRefractBlurType = 0x1DA4; // BlurFilterType_t
                constexpr std::ptrdiff_t m_bOnlyRenderInEffectsBloomPass = 0x1DA8; // bool
                constexpr std::ptrdiff_t m_bOnlyRenderInEffectsWaterPass = 0x1DA9; // bool
                constexpr std::ptrdiff_t m_bUseMixedResolutionRendering = 0x1DAA; // bool
                constexpr std::ptrdiff_t m_bOnlyRenderInEffecsGameOverlay = 0x1DAB; // bool
                constexpr std::ptrdiff_t m_stencilTestID = 0x1DAC; // char[128]
                constexpr std::ptrdiff_t m_bStencilTestExclude = 0x1E2C; // bool
                constexpr std::ptrdiff_t m_stencilWriteID = 0x1E2D; // char[128]
                constexpr std::ptrdiff_t m_bWriteStencilOnDepthPass = 0x1EAD; // bool
                constexpr std::ptrdiff_t m_bWriteStencilOnDepthFail = 0x1EAE; // bool
                constexpr std::ptrdiff_t m_bReverseZBuffering = 0x1EAF; // bool
                constexpr std::ptrdiff_t m_bDisableZBuffering = 0x1EB0; // bool
                constexpr std::ptrdiff_t m_nFeatheringMode = 0x1EB4; // ParticleDepthFeatheringMode_t
                constexpr std::ptrdiff_t m_flFeatheringMinDist = 0x1EB8; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_flFeatheringMaxDist = 0x2008; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_flFeatheringFilter = 0x2158; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_flDepthBias = 0x22A8; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_nSortMethod = 0x23F8; // ParticleSortingChoiceList_t
                constexpr std::ptrdiff_t m_bBlendFramesSeq0 = 0x23FC; // bool
                constexpr std::ptrdiff_t m_bMaxLuminanceBlendingSequence0 = 0x23FD; // bool
            }
            // Parent: CBaseRendererSource2
            // Fields count: 27
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RenderSprites {
                constexpr std::ptrdiff_t m_nSequenceOverride = 0x2638; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_nOrientationType = 0x2788; // ParticleOrientationChoiceList_t
                constexpr std::ptrdiff_t m_nOrientationControlPoint = 0x278C; // int32
                constexpr std::ptrdiff_t m_bUseYawWithNormalAligned = 0x2790; // bool
                constexpr std::ptrdiff_t m_flMinSize = 0x2798; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_flMaxSize = 0x28E8; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_flAlphaAdjustWithSizeAdjust = 0x2A38; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_flStartFadeSize = 0x2B88; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_flEndFadeSize = 0x2CD8; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_flStartFadeDot = 0x2E28; // float32
                constexpr std::ptrdiff_t m_flEndFadeDot = 0x2E2C; // float32
                constexpr std::ptrdiff_t m_bDistanceAlpha = 0x2E30; // bool
                constexpr std::ptrdiff_t m_bSoftEdges = 0x2E31; // bool
                constexpr std::ptrdiff_t m_flEdgeSoftnessStart = 0x2E34; // float32
                constexpr std::ptrdiff_t m_flEdgeSoftnessEnd = 0x2E38; // float32
                constexpr std::ptrdiff_t m_bOutline = 0x2E3C; // bool
                constexpr std::ptrdiff_t m_OutlineColor = 0x2E3D; // Color
                constexpr std::ptrdiff_t m_nOutlineAlpha = 0x2E44; // int32
                constexpr std::ptrdiff_t m_flOutlineStart0 = 0x2E48; // float32
                constexpr std::ptrdiff_t m_flOutlineStart1 = 0x2E4C; // float32
                constexpr std::ptrdiff_t m_flOutlineEnd0 = 0x2E50; // float32
                constexpr std::ptrdiff_t m_flOutlineEnd1 = 0x2E54; // float32
                constexpr std::ptrdiff_t m_nLightingMode = 0x2E58; // ParticleLightingQuality_t
                constexpr std::ptrdiff_t m_flLightingTessellation = 0x2E60; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_flLightingDirectionality = 0x2FB0; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_bParticleShadows = 0x3100; // bool
                constexpr std::ptrdiff_t m_flShadowDensity = 0x3104; // float32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FloatInputMaterialVariable_t {
                constexpr std::ptrdiff_t m_strVariable = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_flInput = 0x8; // CParticleCollectionFloatInput
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VecInputMaterialVariable_t {
                constexpr std::ptrdiff_t m_strVariable = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_vecInput = 0x8; // CParticleCollectionVecInput
            }
            // Parent: CParticleFunctionRenderer
            // Fields count: 22
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RenderCables {
                constexpr std::ptrdiff_t m_flRadiusScale = 0x1F8; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flAlphaScale = 0x348; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_vecColorScale = 0x498; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_nColorBlendType = 0xAC8; // ParticleColorBlendType_t
                constexpr std::ptrdiff_t m_hMaterial = 0xAD0; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_nTextureRepetitionMode = 0xAD8; // TextureRepetitionMode_t
                constexpr std::ptrdiff_t m_flTextureRepeatsPerSegment = 0xAE0; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flTextureRepeatsCircumference = 0xC30; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flColorMapOffsetV = 0xD80; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flColorMapOffsetU = 0xED0; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flNormalMapOffsetV = 0x1020; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flNormalMapOffsetU = 0x1170; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_bDrawCableCaps = 0x12C0; // bool
                constexpr std::ptrdiff_t m_flCapRoundness = 0x12C4; // float32
                constexpr std::ptrdiff_t m_flCapOffsetAmount = 0x12C8; // float32
                constexpr std::ptrdiff_t m_flTessScale = 0x12CC; // float32
                constexpr std::ptrdiff_t m_nMinTesselation = 0x12D0; // int32
                constexpr std::ptrdiff_t m_nMaxTesselation = 0x12D4; // int32
                constexpr std::ptrdiff_t m_nRoundness = 0x12D8; // int32
                constexpr std::ptrdiff_t m_LightingTransform = 0x12E0; // CParticleTransformInput
                constexpr std::ptrdiff_t m_MaterialFloatVars = 0x1340; // CUtlVector<FloatInputMaterialVariable_t>
                constexpr std::ptrdiff_t m_MaterialVecVars = 0x1370; // CUtlVector<VecInputMaterialVariable_t>
            }
            // Parent: CParticleFunctionConstraint
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_ConstrainDistance {
                constexpr std::ptrdiff_t m_fMinDistance = 0x1B0; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_fMaxDistance = 0x300; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x450; // int32
                constexpr std::ptrdiff_t m_CenterOffset = 0x454; // Vector
                constexpr std::ptrdiff_t m_bGlobalCenter = 0x460; // bool
            }
            // Parent: CParticleFunctionConstraint
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_CollideWithSelf {
                constexpr std::ptrdiff_t m_flRadiusScale = 0x1B0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flMinimumSpeed = 0x300; // CPerParticleFloatInput
            }
            // Parent: CParticleFunctionConstraint
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_CollideWithParentParticles {
                constexpr std::ptrdiff_t m_flParentRadiusScale = 0x1B0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flRadiusScale = 0x300; // CPerParticleFloatInput
            }
            // Parent: CParticleFunctionConstraint
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_ConstrainDistanceToPath {
                constexpr std::ptrdiff_t m_fMinDistance = 0x1B0; // float32
                constexpr std::ptrdiff_t m_flMaxDistance0 = 0x1B4; // float32
                constexpr std::ptrdiff_t m_flMaxDistanceMid = 0x1B8; // float32
                constexpr std::ptrdiff_t m_flMaxDistance1 = 0x1BC; // float32
                constexpr std::ptrdiff_t m_PathParameters = 0x1C0; // CPathParameters
                constexpr std::ptrdiff_t m_flTravelTime = 0x200; // float32
                constexpr std::ptrdiff_t m_nFieldScale = 0x204; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nManualTField = 0x208; // ParticleAttributeIndex_t
            }
            // Parent: CParticleFunctionConstraint
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_ConstrainDistanceToUserSpecifiedPath {
                constexpr std::ptrdiff_t m_fMinDistance = 0x1B0; // float32
                constexpr std::ptrdiff_t m_flMaxDistance = 0x1B4; // float32
                constexpr std::ptrdiff_t m_flTimeScale = 0x1B8; // float32
                constexpr std::ptrdiff_t m_bLoopedPath = 0x1BC; // bool
                constexpr std::ptrdiff_t m_pointList = 0x1C0; // CUtlVector<PointDefinitionWithTimeValues_t>
            }
            // Parent: CParticleFunctionConstraint
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_PlanarConstraint {
                constexpr std::ptrdiff_t m_PointOnPlane = 0x1B0; // Vector
                constexpr std::ptrdiff_t m_PlaneNormal = 0x1BC; // Vector
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1C8; // int32
                constexpr std::ptrdiff_t m_bGlobalOrigin = 0x1CC; // bool
                constexpr std::ptrdiff_t m_bGlobalNormal = 0x1CD; // bool
                constexpr std::ptrdiff_t m_flRadiusScale = 0x1D0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flMaximumDistanceToCP = 0x320; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_bUseOldCode = 0x470; // bool
            }
            // Parent: CParticleFunctionConstraint
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_WorldCollideConstraint {
            }
            // Parent: CParticleFunctionConstraint
            // Fields count: 27
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_WorldTraceConstraint {
                constexpr std::ptrdiff_t m_nCP = 0x1B0; // int32
                constexpr std::ptrdiff_t m_vecCpOffset = 0x1B4; // Vector
                constexpr std::ptrdiff_t m_nCollisionMode = 0x1C0; // ParticleCollisionMode_t
                constexpr std::ptrdiff_t m_nCollisionModeMin = 0x1C4; // ParticleCollisionMode_t
                constexpr std::ptrdiff_t m_nTraceSet = 0x1C8; // ParticleTraceSet_t
                constexpr std::ptrdiff_t m_CollisionGroupName = 0x1CC; // char[128]
                constexpr std::ptrdiff_t m_bWorldOnly = 0x24C; // bool
                constexpr std::ptrdiff_t m_bBrushOnly = 0x24D; // bool
                constexpr std::ptrdiff_t m_bIncludeWater = 0x24E; // bool
                constexpr std::ptrdiff_t m_nIgnoreCP = 0x250; // int32
                constexpr std::ptrdiff_t m_flCpMovementTolerance = 0x254; // float32
                constexpr std::ptrdiff_t m_flRetestRate = 0x258; // float32
                constexpr std::ptrdiff_t m_flTraceTolerance = 0x25C; // float32
                constexpr std::ptrdiff_t m_flCollisionConfirmationSpeed = 0x260; // float32
                constexpr std::ptrdiff_t m_nMaxTracesPerFrame = 0x264; // float32
                constexpr std::ptrdiff_t m_flRadiusScale = 0x268; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flBounceAmount = 0x3B8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flSlideAmount = 0x508; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flRandomDirScale = 0x658; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_bDecayBounce = 0x7A8; // bool
                constexpr std::ptrdiff_t m_bKillonContact = 0x7A9; // bool
                constexpr std::ptrdiff_t m_flMinSpeed = 0x7AC; // float32
                constexpr std::ptrdiff_t m_bSetNormal = 0x7B0; // bool
                constexpr std::ptrdiff_t m_nStickOnCollisionField = 0x7B4; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flStopSpeed = 0x7B8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_nEntityStickDataField = 0x908; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nEntityStickNormalField = 0x90C; // ParticleAttributeIndex_t
            }
            // Parent: CParticleFunctionConstraint
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_BoxConstraint {
                constexpr std::ptrdiff_t m_vecMin = 0x1B0; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_vecMax = 0x7E0; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_nCP = 0xE10; // int32
                constexpr std::ptrdiff_t m_bLocalSpace = 0xE14; // bool
                constexpr std::ptrdiff_t m_bAccountForRadius = 0xE15; // bool
            }
            // Parent: CParticleFunctionConstraint
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_ShapeMatchingConstraint {
                constexpr std::ptrdiff_t m_flShapeRestorationTime = 0x1B0; // float32
            }
            // Parent: CParticleFunctionConstraint
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RopeSpringConstraint {
                constexpr std::ptrdiff_t m_flRestLength = 0x1B0; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flMinDistance = 0x300; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flMaxDistance = 0x450; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flAdjustmentScale = 0x5A0; // float32
                constexpr std::ptrdiff_t m_flInitialRestingLength = 0x5A8; // CParticleCollectionFloatInput
            }
            // Parent: CParticleFunctionConstraint
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SpringToVectorConstraint {
                constexpr std::ptrdiff_t m_flRestLength = 0x1B0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flMinDistance = 0x300; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flMaxDistance = 0x450; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flRestingLength = 0x5A0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_vecAnchorVector = 0x6F0; // CPerParticleVecInput
            }
            // Parent: CParticleFunctionConstraint
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_ConstrainLineLength {
                constexpr std::ptrdiff_t m_flMinDistance = 0x1B0; // float32
                constexpr std::ptrdiff_t m_flMaxDistance = 0x1B4; // float32
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RingWave {
                constexpr std::ptrdiff_t m_TransformInput = 0x1B8; // CParticleTransformInput
                constexpr std::ptrdiff_t m_flParticlesPerOrbit = 0x218; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flInitialRadius = 0x368; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flThickness = 0x4B8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flInitialSpeedMin = 0x608; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flInitialSpeedMax = 0x758; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flRoll = 0x8A8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flPitch = 0x9F8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flYaw = 0xB48; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_bEvenDistribution = 0xC98; // bool
                constexpr std::ptrdiff_t m_bXYVelocityOnly = 0xC99; // bool
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_CreateSpiralSphere {
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1B4; // int32
                constexpr std::ptrdiff_t m_nOverrideCP = 0x1B8; // int32
                constexpr std::ptrdiff_t m_nDensity = 0x1BC; // int32
                constexpr std::ptrdiff_t m_flInitialRadius = 0x1C0; // float32
                constexpr std::ptrdiff_t m_flInitialSpeedMin = 0x1C4; // float32
                constexpr std::ptrdiff_t m_flInitialSpeedMax = 0x1C8; // float32
                constexpr std::ptrdiff_t m_bUseParticleCount = 0x1CC; // bool
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_CreateInEpitrochoid {
                constexpr std::ptrdiff_t m_nComponent1 = 0x1B4; // int32
                constexpr std::ptrdiff_t m_nComponent2 = 0x1B8; // int32
                constexpr std::ptrdiff_t m_TransformInput = 0x1C0; // CParticleTransformInput
                constexpr std::ptrdiff_t m_flParticleDensity = 0x220; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flOffset = 0x370; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flRadius1 = 0x4C0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flRadius2 = 0x610; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_bUseCount = 0x760; // bool
                constexpr std::ptrdiff_t m_bUseLocalCoords = 0x761; // bool
                constexpr std::ptrdiff_t m_bOffsetExistingPos = 0x762; // bool
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_CreatePhyllotaxis {
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1B4; // int32
                constexpr std::ptrdiff_t m_nScaleCP = 0x1B8; // int32
                constexpr std::ptrdiff_t m_nComponent = 0x1BC; // int32
                constexpr std::ptrdiff_t m_fRadCentCore = 0x1C0; // float32
                constexpr std::ptrdiff_t m_fRadPerPoint = 0x1C4; // float32
                constexpr std::ptrdiff_t m_fRadPerPointTo = 0x1C8; // float32
                constexpr std::ptrdiff_t m_fpointAngle = 0x1CC; // float32
                constexpr std::ptrdiff_t m_fsizeOverall = 0x1D0; // float32
                constexpr std::ptrdiff_t m_fRadBias = 0x1D4; // float32
                constexpr std::ptrdiff_t m_fMinRad = 0x1D8; // float32
                constexpr std::ptrdiff_t m_fDistBias = 0x1DC; // float32
                constexpr std::ptrdiff_t m_bUseLocalCoords = 0x1E0; // bool
                constexpr std::ptrdiff_t m_bUseWithContEmit = 0x1E1; // bool
                constexpr std::ptrdiff_t m_bUseOrigRadius = 0x1E2; // bool
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_CreateOnModel {
                constexpr std::ptrdiff_t m_modelInput = 0x1B8; // CParticleModelInput
                constexpr std::ptrdiff_t m_transformInput = 0x210; // CParticleTransformInput
                constexpr std::ptrdiff_t m_nForceInModel = 0x270; // int32
                constexpr std::ptrdiff_t m_nDesiredHitbox = 0x274; // int32
                constexpr std::ptrdiff_t m_nHitboxValueFromControlPointIndex = 0x278; // int32
                constexpr std::ptrdiff_t m_vecHitBoxScale = 0x280; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_flBoneVelocity = 0x8B0; // float32
                constexpr std::ptrdiff_t m_flMaxBoneVelocity = 0x8B4; // float32
                constexpr std::ptrdiff_t m_vecDirectionBias = 0x8B8; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_HitboxSetName = 0xEE8; // char[128]
                constexpr std::ptrdiff_t m_bLocalCoords = 0xF68; // bool
                constexpr std::ptrdiff_t m_bUseBones = 0xF69; // bool
                constexpr std::ptrdiff_t m_bUseMesh = 0xF6A; // bool
                constexpr std::ptrdiff_t m_flShellSize = 0xF70; // CParticleCollectionFloatInput
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_CreateOnModelAtHeight {
                constexpr std::ptrdiff_t m_bUseBones = 0x1B4; // bool
                constexpr std::ptrdiff_t m_bForceZ = 0x1B5; // bool
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1B8; // int32
                constexpr std::ptrdiff_t m_nHeightCP = 0x1BC; // int32
                constexpr std::ptrdiff_t m_bUseWaterHeight = 0x1C0; // bool
                constexpr std::ptrdiff_t m_flDesiredHeight = 0x1C8; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_vecHitBoxScale = 0x318; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_vecDirectionBias = 0x948; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_nBiasType = 0xF78; // ParticleHitboxBiasType_t
                constexpr std::ptrdiff_t m_bLocalCoords = 0xF7C; // bool
                constexpr std::ptrdiff_t m_bPreferMovingBoxes = 0xF7D; // bool
                constexpr std::ptrdiff_t m_HitboxSetName = 0xF7E; // char[128]
                constexpr std::ptrdiff_t m_flHitboxVelocityScale = 0x1000; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flMaxBoneVelocity = 0x1150; // CParticleCollectionFloatInput
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_SetHitboxToClosest {
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1B4; // int32
                constexpr std::ptrdiff_t m_nDesiredHitbox = 0x1B8; // int32
                constexpr std::ptrdiff_t m_vecHitBoxScale = 0x1C0; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_HitboxSetName = 0x7F0; // char[128]
                constexpr std::ptrdiff_t m_bUseBones = 0x870; // bool
                constexpr std::ptrdiff_t m_bUseClosestPointOnHitbox = 0x871; // bool
                constexpr std::ptrdiff_t m_nTestType = 0x874; // ClosestPointTestType_t
                constexpr std::ptrdiff_t m_flHybridRatio = 0x878; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_bUpdatePosition = 0x9C8; // bool
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_SetHitboxToModel {
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1B4; // int32
                constexpr std::ptrdiff_t m_nForceInModel = 0x1B8; // int32
                constexpr std::ptrdiff_t m_nDesiredHitbox = 0x1BC; // int32
                constexpr std::ptrdiff_t m_vecHitBoxScale = 0x1C0; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_vecDirectionBias = 0x7F0; // Vector
                constexpr std::ptrdiff_t m_bMaintainHitbox = 0x7FC; // bool
                constexpr std::ptrdiff_t m_bUseBones = 0x7FD; // bool
                constexpr std::ptrdiff_t m_HitboxSetName = 0x7FE; // char[128]
                constexpr std::ptrdiff_t m_flShellSize = 0x880; // CParticleCollectionFloatInput
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_CreateWithinSphereTransform {
                constexpr std::ptrdiff_t m_fRadiusMin = 0x1B8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_fRadiusMax = 0x308; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_vecDistanceBias = 0x458; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_vecDistanceBiasAbs = 0xA88; // Vector
                constexpr std::ptrdiff_t m_TransformInput = 0xA98; // CParticleTransformInput
                constexpr std::ptrdiff_t m_fSpeedMin = 0xAF8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_fSpeedMax = 0xC48; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_fSpeedRandExp = 0xD98; // float32
                constexpr std::ptrdiff_t m_bLocalCoords = 0xD9C; // bool
                constexpr std::ptrdiff_t m_flEndCPGrowthTime = 0xDA0; // float32
                constexpr std::ptrdiff_t m_LocalCoordinateSystemSpeedMin = 0xDA8; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_LocalCoordinateSystemSpeedMax = 0x13D8; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1A08; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nFieldVelocity = 0x1A0C; // ParticleAttributeIndex_t
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_CreateWithinBox {
                constexpr std::ptrdiff_t m_vecMin = 0x1B8; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_vecMax = 0x7E8; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_nControlPointNumber = 0xE18; // int32
                constexpr std::ptrdiff_t m_bLocalSpace = 0xE1C; // bool
                constexpr std::ptrdiff_t m_randomnessParameters = 0xE20; // CRandomNumberGeneratorParameters
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_CreateOnGrid {
                constexpr std::ptrdiff_t m_nXCount = 0x1B8; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_nYCount = 0x308; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_nZCount = 0x458; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_nXSpacing = 0x5A8; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_nYSpacing = 0x6F8; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_nZSpacing = 0x848; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x998; // int32
                constexpr std::ptrdiff_t m_bLocalSpace = 0x99C; // bool
                constexpr std::ptrdiff_t m_bCenter = 0x99D; // bool
                constexpr std::ptrdiff_t m_bHollow = 0x99E; // bool
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_PositionOffset {
                constexpr std::ptrdiff_t m_OffsetMin = 0x1B8; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_OffsetMax = 0x7E8; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_TransformInput = 0xE18; // CParticleTransformInput
                constexpr std::ptrdiff_t m_bLocalCoords = 0xE78; // bool
                constexpr std::ptrdiff_t m_bProportional = 0xE79; // bool
                constexpr std::ptrdiff_t m_randomnessParameters = 0xE7C; // CRandomNumberGeneratorParameters
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_PositionOffsetToCP {
                constexpr std::ptrdiff_t m_nControlPointNumberStart = 0x1B4; // int32
                constexpr std::ptrdiff_t m_nControlPointNumberEnd = 0x1B8; // int32
                constexpr std::ptrdiff_t m_bLocalCoords = 0x1BC; // bool
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 13
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_PositionPlaceOnGround {
                constexpr std::ptrdiff_t m_flOffset = 0x1B8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flMaxTraceLength = 0x308; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_CollisionGroupName = 0x458; // char[128]
                constexpr std::ptrdiff_t m_nTraceSet = 0x4D8; // ParticleTraceSet_t
                constexpr std::ptrdiff_t m_nTraceMissBehavior = 0x4E8; // ParticleTraceMissBehavior_t
                constexpr std::ptrdiff_t m_bIncludeWater = 0x4EC; // bool
                constexpr std::ptrdiff_t m_bSetNormal = 0x4ED; // bool
                constexpr std::ptrdiff_t m_bSetPXYZOnly = 0x4EE; // bool
                constexpr std::ptrdiff_t m_bTraceAlongNormal = 0x4EF; // bool
                constexpr std::ptrdiff_t m_bOffsetonColOnly = 0x4F0; // bool
                constexpr std::ptrdiff_t m_flOffsetByRadiusFactor = 0x4F4; // float32
                constexpr std::ptrdiff_t m_nPreserveOffsetCP = 0x4F8; // int32
                constexpr std::ptrdiff_t m_nIgnoreCP = 0x4FC; // int32
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_VelocityFromNormal {
                constexpr std::ptrdiff_t m_fSpeedMin = 0x1B4; // float32
                constexpr std::ptrdiff_t m_fSpeedMax = 0x1B8; // float32
                constexpr std::ptrdiff_t m_bIgnoreDt = 0x1BC; // bool
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_VelocityRandom {
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1B4; // int32
                constexpr std::ptrdiff_t m_fSpeedMin = 0x1B8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_fSpeedMax = 0x308; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_LocalCoordinateSystemSpeedMin = 0x458; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_LocalCoordinateSystemSpeedMax = 0xA88; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_bIgnoreDT = 0x10B8; // bool
                constexpr std::ptrdiff_t m_randomnessParameters = 0x10BC; // CRandomNumberGeneratorParameters
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_InitialVelocityNoise {
                constexpr std::ptrdiff_t m_vecAbsVal = 0x1B4; // Vector
                constexpr std::ptrdiff_t m_vecAbsValInv = 0x1C0; // Vector
                constexpr std::ptrdiff_t m_vecOffsetLoc = 0x1D0; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_flOffset = 0x800; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_vecOutputMin = 0x950; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_vecOutputMax = 0xF80; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_flNoiseScale = 0x15B0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flNoiseScaleLoc = 0x1700; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_TransformInput = 0x1850; // CParticleTransformInput
                constexpr std::ptrdiff_t m_bIgnoreDt = 0x18B0; // bool
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_InitialVelocityFromHitbox {
                constexpr std::ptrdiff_t m_flVelocityMin = 0x1B4; // float32
                constexpr std::ptrdiff_t m_flVelocityMax = 0x1B8; // float32
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1BC; // int32
                constexpr std::ptrdiff_t m_HitboxSetName = 0x1C0; // char[128]
                constexpr std::ptrdiff_t m_bUseBones = 0x240; // bool
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_VelocityRadialRandom {
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1B4; // int32
                constexpr std::ptrdiff_t m_fSpeedMin = 0x1B8; // float32
                constexpr std::ptrdiff_t m_fSpeedMax = 0x1BC; // float32
                constexpr std::ptrdiff_t m_vecLocalCoordinateSystemSpeedScale = 0x1C0; // Vector
                constexpr std::ptrdiff_t m_bIgnoreDelta = 0x1CD; // bool
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RandomLifeTime {
                constexpr std::ptrdiff_t m_fLifetimeMin = 0x1B4; // float32
                constexpr std::ptrdiff_t m_fLifetimeMax = 0x1B8; // float32
                constexpr std::ptrdiff_t m_fLifetimeRandExponent = 0x1BC; // float32
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RandomScalar {
                constexpr std::ptrdiff_t m_flMin = 0x1B4; // float32
                constexpr std::ptrdiff_t m_flMax = 0x1B8; // float32
                constexpr std::ptrdiff_t m_flExponent = 0x1BC; // float32
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1C0; // ParticleAttributeIndex_t
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RandomVector {
                constexpr std::ptrdiff_t m_vecMin = 0x1B4; // Vector
                constexpr std::ptrdiff_t m_vecMax = 0x1C0; // Vector
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1CC; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_randomnessParameters = 0x1D0; // CRandomNumberGeneratorParameters
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RandomVectorComponent {
                constexpr std::ptrdiff_t m_flMin = 0x1B4; // float32
                constexpr std::ptrdiff_t m_flMax = 0x1B8; // float32
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1BC; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nComponent = 0x1C0; // int32
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_AddVectorToVector {
                constexpr std::ptrdiff_t m_vecScale = 0x1B4; // Vector
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1C0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nFieldInput = 0x1C4; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_vOffsetMin = 0x1C8; // Vector
                constexpr std::ptrdiff_t m_vOffsetMax = 0x1D4; // Vector
                constexpr std::ptrdiff_t m_randomnessParameters = 0x1E0; // CRandomNumberGeneratorParameters
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RandomAlphaWindowThreshold {
                constexpr std::ptrdiff_t m_flMin = 0x1B4; // float32
                constexpr std::ptrdiff_t m_flMax = 0x1B8; // float32
                constexpr std::ptrdiff_t m_flExponent = 0x1BC; // float32
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RandomRadius {
                constexpr std::ptrdiff_t m_flRadiusMin = 0x1B4; // float32
                constexpr std::ptrdiff_t m_flRadiusMax = 0x1B8; // float32
                constexpr std::ptrdiff_t m_flRadiusRandExponent = 0x1BC; // float32
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RandomAlpha {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nAlphaMin = 0x1B8; // int32
                constexpr std::ptrdiff_t m_nAlphaMax = 0x1BC; // int32
                constexpr std::ptrdiff_t m_flAlphaRandExponent = 0x1C8; // float32
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CGeneralRandomRotation {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flDegrees = 0x1B8; // float32
                constexpr std::ptrdiff_t m_flDegreesMin = 0x1BC; // float32
                constexpr std::ptrdiff_t m_flDegreesMax = 0x1C0; // float32
                constexpr std::ptrdiff_t m_flRotationRandExponent = 0x1C4; // float32
                constexpr std::ptrdiff_t m_bRandomlyFlipDirection = 0x1C8; // bool
            }
            // Parent: CGeneralRandomRotation
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RandomRotation {
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_Orient2DRelToCP {
                constexpr std::ptrdiff_t m_nCP = 0x1B4; // int32
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1B8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flRotOffset = 0x1BC; // float32
            }
            // Parent: CGeneralRandomRotation
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RandomRotationSpeed {
            }
            // Parent: CGeneralRandomRotation
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RandomYaw {
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RandomColor {
                constexpr std::ptrdiff_t m_ColorMin = 0x1D0; // Color
                constexpr std::ptrdiff_t m_ColorMax = 0x1D4; // Color
                constexpr std::ptrdiff_t m_TintMin = 0x1D8; // Color
                constexpr std::ptrdiff_t m_TintMax = 0x1DC; // Color
                constexpr std::ptrdiff_t m_flTintPerc = 0x1E0; // float32
                constexpr std::ptrdiff_t m_flUpdateThreshold = 0x1E4; // float32
                constexpr std::ptrdiff_t m_nTintCP = 0x1E8; // int32
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1EC; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nTintBlendMode = 0x1F0; // ParticleColorBlendMode_t
                constexpr std::ptrdiff_t m_flLightAmplification = 0x1F4; // float32
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_ColorLitPerParticle {
                constexpr std::ptrdiff_t m_ColorMin = 0x1CC; // Color
                constexpr std::ptrdiff_t m_ColorMax = 0x1D0; // Color
                constexpr std::ptrdiff_t m_TintMin = 0x1D4; // Color
                constexpr std::ptrdiff_t m_TintMax = 0x1D8; // Color
                constexpr std::ptrdiff_t m_flTintPerc = 0x1DC; // float32
                constexpr std::ptrdiff_t m_nTintBlendMode = 0x1E0; // ParticleColorBlendMode_t
                constexpr std::ptrdiff_t m_flLightAmplification = 0x1E4; // float32
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RandomTrailLength {
                constexpr std::ptrdiff_t m_flMinLength = 0x1B4; // float32
                constexpr std::ptrdiff_t m_flMaxLength = 0x1B8; // float32
                constexpr std::ptrdiff_t m_flLengthRandExponent = 0x1BC; // float32
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RandomSequence {
                constexpr std::ptrdiff_t m_nSequenceMin = 0x1B4; // int32
                constexpr std::ptrdiff_t m_nSequenceMax = 0x1B8; // int32
                constexpr std::ptrdiff_t m_bShuffle = 0x1BC; // bool
                constexpr std::ptrdiff_t m_bLinear = 0x1BD; // bool
                constexpr std::ptrdiff_t m_WeightedList = 0x1C0; // CUtlVector<SequenceWeightedList_t>
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_SequenceFromCP {
                constexpr std::ptrdiff_t m_bKillUnused = 0x1B4; // bool
                constexpr std::ptrdiff_t m_bRadiusScale = 0x1B5; // bool
                constexpr std::ptrdiff_t m_nCP = 0x1B8; // int32
                constexpr std::ptrdiff_t m_vecOffset = 0x1BC; // Vector
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RandomModelSequence {
                constexpr std::ptrdiff_t m_ActivityName = 0x1B4; // char[256]
                constexpr std::ptrdiff_t m_SequenceName = 0x2B4; // char[256]
                constexpr std::ptrdiff_t m_hModel = 0x3B8; // CStrongHandle<InfoForResourceTypeCModel>
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_ScaleVelocity {
                constexpr std::ptrdiff_t m_vecScale = 0x1B8; // CParticleCollectionVecInput
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_PositionWarp {
                constexpr std::ptrdiff_t m_vecWarpMin = 0x1B8; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_vecWarpMax = 0x7E8; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_nScaleControlPointNumber = 0xE18; // int32
                constexpr std::ptrdiff_t m_nControlPointNumber = 0xE1C; // int32
                constexpr std::ptrdiff_t m_nRadiusComponent = 0xE20; // int32
                constexpr std::ptrdiff_t m_flWarpTime = 0xE24; // float32
                constexpr std::ptrdiff_t m_flWarpStartTime = 0xE28; // float32
                constexpr std::ptrdiff_t m_flPrevPosScale = 0xE2C; // float32
                constexpr std::ptrdiff_t m_bInvertWarp = 0xE30; // bool
                constexpr std::ptrdiff_t m_bUseCount = 0xE31; // bool
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_PositionWarpScalar {
                constexpr std::ptrdiff_t m_vecWarpMin = 0x1B4; // Vector
                constexpr std::ptrdiff_t m_vecWarpMax = 0x1C0; // Vector
                constexpr std::ptrdiff_t m_InputValue = 0x1D0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flPrevPosScale = 0x320; // float32
                constexpr std::ptrdiff_t m_nScaleControlPointNumber = 0x324; // int32
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x328; // int32
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_CreationNoise {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_bAbsVal = 0x1B8; // bool
                constexpr std::ptrdiff_t m_bAbsValInv = 0x1B9; // bool
                constexpr std::ptrdiff_t m_flOffset = 0x1BC; // float32
                constexpr std::ptrdiff_t m_flOutputMin = 0x1C0; // float32
                constexpr std::ptrdiff_t m_flOutputMax = 0x1C4; // float32
                constexpr std::ptrdiff_t m_flNoiseScale = 0x1C8; // float32
                constexpr std::ptrdiff_t m_flNoiseScaleLoc = 0x1CC; // float32
                constexpr std::ptrdiff_t m_vecOffsetLoc = 0x1D0; // Vector
                constexpr std::ptrdiff_t m_flWorldTimeScale = 0x1DC; // float32
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_CreateAlongPath {
                constexpr std::ptrdiff_t m_fMaxDistance = 0x1B4; // float32
                constexpr std::ptrdiff_t m_PathParams = 0x1C0; // CPathParameters
                constexpr std::ptrdiff_t m_bUseRandomCPs = 0x200; // bool
                constexpr std::ptrdiff_t m_vEndOffset = 0x204; // Vector
                constexpr std::ptrdiff_t m_bSaveOffset = 0x210; // bool
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_MoveBetweenPoints {
                constexpr std::ptrdiff_t m_flSpeedMin = 0x1B8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flSpeedMax = 0x308; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flEndSpread = 0x458; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flStartOffset = 0x5A8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flEndOffset = 0x6F8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_nEndControlPointNumber = 0x848; // int32
                constexpr std::ptrdiff_t m_bTrailBias = 0x84C; // bool
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RemapScalar {
                constexpr std::ptrdiff_t m_nFieldInput = 0x1B4; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1B8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flInputMin = 0x1BC; // float32
                constexpr std::ptrdiff_t m_flInputMax = 0x1C0; // float32
                constexpr std::ptrdiff_t m_flOutputMin = 0x1C4; // float32
                constexpr std::ptrdiff_t m_flOutputMax = 0x1C8; // float32
                constexpr std::ptrdiff_t m_flStartTime = 0x1CC; // float32
                constexpr std::ptrdiff_t m_flEndTime = 0x1D0; // float32
                constexpr std::ptrdiff_t m_nSetMethod = 0x1D4; // ParticleSetMethod_t
                constexpr std::ptrdiff_t m_bActiveRange = 0x1D8; // bool
                constexpr std::ptrdiff_t m_flRemapBias = 0x1DC; // float32
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RemapParticleCountToScalar {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nInputMin = 0x1B8; // int32
                constexpr std::ptrdiff_t m_nInputMax = 0x1BC; // int32
                constexpr std::ptrdiff_t m_nScaleControlPoint = 0x1C0; // int32
                constexpr std::ptrdiff_t m_nScaleControlPointField = 0x1C4; // int32
                constexpr std::ptrdiff_t m_flOutputMin = 0x1C8; // float32
                constexpr std::ptrdiff_t m_flOutputMax = 0x1CC; // float32
                constexpr std::ptrdiff_t m_nSetMethod = 0x1D0; // ParticleSetMethod_t
                constexpr std::ptrdiff_t m_bActiveRange = 0x1D4; // bool
                constexpr std::ptrdiff_t m_bInvert = 0x1D5; // bool
                constexpr std::ptrdiff_t m_bWrap = 0x1D6; // bool
                constexpr std::ptrdiff_t m_flRemapBias = 0x1D8; // float32
            }
            // Parent: C_INIT_RemapParticleCountToScalar
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RemapParticleCountToNamedModelElementScalar {
                constexpr std::ptrdiff_t m_hModel = 0x1E0; // CStrongHandle<InfoForResourceTypeCModel>
                constexpr std::ptrdiff_t m_outputMinName = 0x1E8; // CUtlString
                constexpr std::ptrdiff_t m_outputMaxName = 0x1F0; // CUtlString
                constexpr std::ptrdiff_t m_bModelFromRenderer = 0x1F8; // bool
            }
            // Parent: C_INIT_RemapParticleCountToNamedModelElementScalar
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RemapParticleCountToNamedModelSequenceScalar {
            }
            // Parent: C_INIT_RemapParticleCountToNamedModelElementScalar
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RemapParticleCountToNamedModelBodyPartScalar {
            }
            // Parent: C_INIT_RemapParticleCountToNamedModelElementScalar
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RemapParticleCountToNamedModelMeshGroupScalar {
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_InheritVelocity {
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1B4; // int32
                constexpr std::ptrdiff_t m_flVelocityScale = 0x1B8; // float32
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_VelocityFromCP {
                constexpr std::ptrdiff_t m_velocityInput = 0x1B8; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_transformInput = 0x7E8; // CParticleTransformInput
                constexpr std::ptrdiff_t m_flVelocityScale = 0x848; // float32
                constexpr std::ptrdiff_t m_bDirectionOnly = 0x84C; // bool
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_AgeNoise {
                constexpr std::ptrdiff_t m_bAbsVal = 0x1B4; // bool
                constexpr std::ptrdiff_t m_bAbsValInv = 0x1B5; // bool
                constexpr std::ptrdiff_t m_flOffset = 0x1B8; // float32
                constexpr std::ptrdiff_t m_flAgeMin = 0x1BC; // float32
                constexpr std::ptrdiff_t m_flAgeMax = 0x1C0; // float32
                constexpr std::ptrdiff_t m_flNoiseScale = 0x1C4; // float32
                constexpr std::ptrdiff_t m_flNoiseScaleLoc = 0x1C8; // float32
                constexpr std::ptrdiff_t m_vecOffsetLoc = 0x1CC; // Vector
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_SequenceLifeTime {
                constexpr std::ptrdiff_t m_flFramerate = 0x1B4; // float32
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RemapScalarToVector {
                constexpr std::ptrdiff_t m_nFieldInput = 0x1B4; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1B8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flInputMin = 0x1BC; // float32
                constexpr std::ptrdiff_t m_flInputMax = 0x1C0; // float32
                constexpr std::ptrdiff_t m_vecOutputMin = 0x1C4; // Vector
                constexpr std::ptrdiff_t m_vecOutputMax = 0x1D0; // Vector
                constexpr std::ptrdiff_t m_flStartTime = 0x1DC; // float32
                constexpr std::ptrdiff_t m_flEndTime = 0x1E0; // float32
                constexpr std::ptrdiff_t m_nSetMethod = 0x1E4; // ParticleSetMethod_t
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1E8; // int32
                constexpr std::ptrdiff_t m_bLocalCoords = 0x1EC; // bool
                constexpr std::ptrdiff_t m_flRemapBias = 0x1F0; // float32
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_OffsetVectorToVector {
                constexpr std::ptrdiff_t m_nFieldInput = 0x1B4; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1B8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_vecOutputMin = 0x1BC; // Vector
                constexpr std::ptrdiff_t m_vecOutputMax = 0x1C8; // Vector
                constexpr std::ptrdiff_t m_randomnessParameters = 0x1D4; // CRandomNumberGeneratorParameters
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 6
            //
            // Metadata:
            // MParticleMinVersion
            // MGetKV3ClassDefaults
            namespace C_INIT_CreateSequentialPathV2 {
                constexpr std::ptrdiff_t m_fMaxDistance = 0x1B8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flNumToAssign = 0x308; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_bLoop = 0x458; // bool
                constexpr std::ptrdiff_t m_bCPPairs = 0x459; // bool
                constexpr std::ptrdiff_t m_bSaveOffset = 0x45A; // bool
                constexpr std::ptrdiff_t m_PathParams = 0x460; // CPathParameters
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 6
            //
            // Metadata:
            // MParticleMaxVersion
            // MParticleReplacementOp
            // MGetKV3ClassDefaults
            namespace C_INIT_CreateSequentialPath {
                constexpr std::ptrdiff_t m_fMaxDistance = 0x1B4; // float32
                constexpr std::ptrdiff_t m_flNumToAssign = 0x1B8; // float32
                constexpr std::ptrdiff_t m_bLoop = 0x1BC; // bool
                constexpr std::ptrdiff_t m_bCPPairs = 0x1BD; // bool
                constexpr std::ptrdiff_t m_bSaveOffset = 0x1BE; // bool
                constexpr std::ptrdiff_t m_PathParams = 0x1C0; // CPathParameters
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 13
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_InitialRepulsionVelocity {
                constexpr std::ptrdiff_t m_CollisionGroupName = 0x1B4; // char[128]
                constexpr std::ptrdiff_t m_nTraceSet = 0x234; // ParticleTraceSet_t
                constexpr std::ptrdiff_t m_vecOutputMin = 0x238; // Vector
                constexpr std::ptrdiff_t m_vecOutputMax = 0x244; // Vector
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x250; // int32
                constexpr std::ptrdiff_t m_bPerParticle = 0x254; // bool
                constexpr std::ptrdiff_t m_bTranslate = 0x255; // bool
                constexpr std::ptrdiff_t m_bProportional = 0x256; // bool
                constexpr std::ptrdiff_t m_flTraceLength = 0x258; // float32
                constexpr std::ptrdiff_t m_bPerParticleTR = 0x25C; // bool
                constexpr std::ptrdiff_t m_bInherit = 0x25D; // bool
                constexpr std::ptrdiff_t m_nChildCP = 0x260; // int32
                constexpr std::ptrdiff_t m_nChildGroupID = 0x264; // int32
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RandomYawFlip {
                constexpr std::ptrdiff_t m_flPercent = 0x1B4; // float32
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RandomSecondSequence {
                constexpr std::ptrdiff_t m_nSequenceMin = 0x1B4; // int32
                constexpr std::ptrdiff_t m_nSequenceMax = 0x1B8; // int32
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RemapCPtoScalar {
                constexpr std::ptrdiff_t m_nCPInput = 0x1B4; // int32
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1B8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nField = 0x1BC; // int32
                constexpr std::ptrdiff_t m_flInputMin = 0x1C0; // float32
                constexpr std::ptrdiff_t m_flInputMax = 0x1C4; // float32
                constexpr std::ptrdiff_t m_flOutputMin = 0x1C8; // float32
                constexpr std::ptrdiff_t m_flOutputMax = 0x1CC; // float32
                constexpr std::ptrdiff_t m_flStartTime = 0x1D0; // float32
                constexpr std::ptrdiff_t m_flEndTime = 0x1D4; // float32
                constexpr std::ptrdiff_t m_nSetMethod = 0x1D8; // ParticleSetMethod_t
                constexpr std::ptrdiff_t m_flRemapBias = 0x1DC; // float32
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 13
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RemapTransformToVector {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_vInputMin = 0x1B8; // Vector
                constexpr std::ptrdiff_t m_vInputMax = 0x1C4; // Vector
                constexpr std::ptrdiff_t m_vOutputMin = 0x1D0; // Vector
                constexpr std::ptrdiff_t m_vOutputMax = 0x1DC; // Vector
                constexpr std::ptrdiff_t m_TransformInput = 0x1E8; // CParticleTransformInput
                constexpr std::ptrdiff_t m_LocalSpaceTransform = 0x248; // CParticleTransformInput
                constexpr std::ptrdiff_t m_flStartTime = 0x2A8; // float32
                constexpr std::ptrdiff_t m_flEndTime = 0x2AC; // float32
                constexpr std::ptrdiff_t m_nSetMethod = 0x2B0; // ParticleSetMethod_t
                constexpr std::ptrdiff_t m_bOffset = 0x2B4; // bool
                constexpr std::ptrdiff_t m_bAccelerate = 0x2B5; // bool
                constexpr std::ptrdiff_t m_flRemapBias = 0x2B8; // float32
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_ChaoticAttractor {
                constexpr std::ptrdiff_t m_flAParm = 0x1B4; // float32
                constexpr std::ptrdiff_t m_flBParm = 0x1B8; // float32
                constexpr std::ptrdiff_t m_flCParm = 0x1BC; // float32
                constexpr std::ptrdiff_t m_flDParm = 0x1C0; // float32
                constexpr std::ptrdiff_t m_flScale = 0x1C4; // float32
                constexpr std::ptrdiff_t m_flSpeedMin = 0x1C8; // float32
                constexpr std::ptrdiff_t m_flSpeedMax = 0x1CC; // float32
                constexpr std::ptrdiff_t m_nBaseCP = 0x1D0; // int32
                constexpr std::ptrdiff_t m_bUniformSpeed = 0x1D4; // bool
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_CreateFromParentParticles {
                constexpr std::ptrdiff_t m_flVelocityScale = 0x1B4; // float32
                constexpr std::ptrdiff_t m_flIncrement = 0x1B8; // float32
                constexpr std::ptrdiff_t m_bRandomDistribution = 0x1BC; // bool
                constexpr std::ptrdiff_t m_nRandomSeed = 0x1C0; // int32
                constexpr std::ptrdiff_t m_bSubFrame = 0x1C4; // bool
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_InheritFromParentParticles {
                constexpr std::ptrdiff_t m_flScale = 0x1B4; // float32
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1B8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nIncrement = 0x1BC; // int32
                constexpr std::ptrdiff_t m_bRandomDistribution = 0x1C0; // bool
                constexpr std::ptrdiff_t m_nRandomSeed = 0x1C4; // int32
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_CreateFromCPs {
                constexpr std::ptrdiff_t m_nIncrement = 0x1B4; // int32
                constexpr std::ptrdiff_t m_nMinCP = 0x1B8; // int32
                constexpr std::ptrdiff_t m_nMaxCP = 0x1BC; // int32
                constexpr std::ptrdiff_t m_nDynamicCPCount = 0x1C0; // CParticleCollectionFloatInput
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 15
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_DistanceToCPInit {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flInputMin = 0x1B8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flInputMax = 0x308; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flOutputMin = 0x458; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flOutputMax = 0x5A8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_nStartCP = 0x6F8; // int32
                constexpr std::ptrdiff_t m_bLOS = 0x6FC; // bool
                constexpr std::ptrdiff_t m_CollisionGroupName = 0x6FD; // char[128]
                constexpr std::ptrdiff_t m_nTraceSet = 0x780; // ParticleTraceSet_t
                constexpr std::ptrdiff_t m_flMaxTraceLength = 0x788; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flLOSScale = 0x8D8; // float32
                constexpr std::ptrdiff_t m_nSetMethod = 0x8DC; // ParticleSetMethod_t
                constexpr std::ptrdiff_t m_bActiveRange = 0x8E0; // bool
                constexpr std::ptrdiff_t m_vecDistanceScale = 0x8E4; // Vector
                constexpr std::ptrdiff_t m_flRemapBias = 0x8F0; // float32
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_LifespanFromVelocity {
                constexpr std::ptrdiff_t m_vecComponentScale = 0x1B4; // Vector
                constexpr std::ptrdiff_t m_flTraceOffset = 0x1C0; // float32
                constexpr std::ptrdiff_t m_flMaxTraceLength = 0x1C4; // float32
                constexpr std::ptrdiff_t m_flTraceTolerance = 0x1C8; // float32
                constexpr std::ptrdiff_t m_nMaxPlanes = 0x1CC; // int32
                constexpr std::ptrdiff_t m_CollisionGroupName = 0x1D4; // char[128]
                constexpr std::ptrdiff_t m_nTraceSet = 0x254; // ParticleTraceSet_t
                constexpr std::ptrdiff_t m_bIncludeWater = 0x260; // bool
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_CreateFromPlaneCache {
                constexpr std::ptrdiff_t m_vecOffsetMin = 0x1B4; // Vector
                constexpr std::ptrdiff_t m_vecOffsetMax = 0x1C0; // Vector
                constexpr std::ptrdiff_t m_bUseNormal = 0x1CD; // bool
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_ModelCull {
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1B4; // int32
                constexpr std::ptrdiff_t m_bBoundBox = 0x1B8; // bool
                constexpr std::ptrdiff_t m_bCullOutside = 0x1B9; // bool
                constexpr std::ptrdiff_t m_bUseBones = 0x1BA; // bool
                constexpr std::ptrdiff_t m_HitboxSetName = 0x1BB; // char[128]
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_DistanceCull {
                constexpr std::ptrdiff_t m_nControlPoint = 0x1B4; // int32
                constexpr std::ptrdiff_t m_flDistance = 0x1B8; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_bCullInside = 0x308; // bool
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_PlaneCull {
                constexpr std::ptrdiff_t m_nControlPoint = 0x1B4; // int32
                constexpr std::ptrdiff_t m_flDistance = 0x1B8; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_bCullInside = 0x308; // bool
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_DistanceToNeighborCull {
                constexpr std::ptrdiff_t m_flDistance = 0x1B8; // CPerParticleFloatInput
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RtEnvCull {
                constexpr std::ptrdiff_t m_vecTestDir = 0x1B4; // Vector
                constexpr std::ptrdiff_t m_vecTestNormal = 0x1C0; // Vector
                constexpr std::ptrdiff_t m_bUseVelocity = 0x1CC; // bool
                constexpr std::ptrdiff_t m_bCullOnMiss = 0x1CD; // bool
                constexpr std::ptrdiff_t m_bLifeAdjust = 0x1CE; // bool
                constexpr std::ptrdiff_t m_RtEnvName = 0x1CF; // char[128]
                constexpr std::ptrdiff_t m_nRTEnvCP = 0x250; // int32
                constexpr std::ptrdiff_t m_nComponent = 0x254; // int32
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_NormalAlignToCP {
                constexpr std::ptrdiff_t m_transformInput = 0x1B8; // CParticleTransformInput
                constexpr std::ptrdiff_t m_nControlPointAxis = 0x218; // ParticleControlPointAxis_t
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_NormalOffset {
                constexpr std::ptrdiff_t m_OffsetMin = 0x1B4; // Vector
                constexpr std::ptrdiff_t m_OffsetMax = 0x1C0; // Vector
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1CC; // int32
                constexpr std::ptrdiff_t m_bLocalCoords = 0x1D0; // bool
                constexpr std::ptrdiff_t m_bNormalize = 0x1D1; // bool
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RemapSpeedToScalar {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1B8; // int32
                constexpr std::ptrdiff_t m_flStartTime = 0x1BC; // float32
                constexpr std::ptrdiff_t m_flEndTime = 0x1C0; // float32
                constexpr std::ptrdiff_t m_flInputMin = 0x1C4; // float32
                constexpr std::ptrdiff_t m_flInputMax = 0x1C8; // float32
                constexpr std::ptrdiff_t m_flOutputMin = 0x1CC; // float32
                constexpr std::ptrdiff_t m_flOutputMax = 0x1D0; // float32
                constexpr std::ptrdiff_t m_nSetMethod = 0x1D4; // ParticleSetMethod_t
                constexpr std::ptrdiff_t m_bPerParticle = 0x1D8; // bool
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_InitFromCPSnapshot {
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1B4; // int32
                constexpr std::ptrdiff_t m_nAttributeToRead = 0x1B8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nAttributeToWrite = 0x1BC; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nLocalSpaceCP = 0x1C0; // int32
                constexpr std::ptrdiff_t m_bRandom = 0x1C4; // bool
                constexpr std::ptrdiff_t m_bReverse = 0x1C5; // bool
                constexpr std::ptrdiff_t m_nSnapShotIncrement = 0x1C8; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_nManualSnapshotIndex = 0x318; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_nRandomSeed = 0x468; // int32
                constexpr std::ptrdiff_t m_bLocalSpaceAngles = 0x46C; // bool
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 19
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_InitSkinnedPositionFromCPSnapshot {
                constexpr std::ptrdiff_t m_nSnapshotControlPointNumber = 0x1B4; // int32
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1B8; // int32
                constexpr std::ptrdiff_t m_bRandom = 0x1BC; // bool
                constexpr std::ptrdiff_t m_nRandomSeed = 0x1C0; // int32
                constexpr std::ptrdiff_t m_bRigid = 0x1C4; // bool
                constexpr std::ptrdiff_t m_bSetNormal = 0x1C5; // bool
                constexpr std::ptrdiff_t m_bIgnoreDt = 0x1C6; // bool
                constexpr std::ptrdiff_t m_flMinNormalVelocity = 0x1C8; // float32
                constexpr std::ptrdiff_t m_flMaxNormalVelocity = 0x1CC; // float32
                constexpr std::ptrdiff_t m_nIndexType = 0x1D0; // SnapshotIndexType_t
                constexpr std::ptrdiff_t m_flReadIndex = 0x1D8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flIncrement = 0x328; // float32
                constexpr std::ptrdiff_t m_nFullLoopIncrement = 0x32C; // int32
                constexpr std::ptrdiff_t m_nSnapShotStartPoint = 0x330; // int32
                constexpr std::ptrdiff_t m_flBoneVelocity = 0x334; // float32
                constexpr std::ptrdiff_t m_flBoneVelocityMax = 0x338; // float32
                constexpr std::ptrdiff_t m_bCopyColor = 0x33C; // bool
                constexpr std::ptrdiff_t m_bCopyAlpha = 0x33D; // bool
                constexpr std::ptrdiff_t m_bSetRadius = 0x33E; // bool
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_InitFromParentKilled {
                constexpr std::ptrdiff_t m_nAttributeToCopy = 0x1B4; // ParticleAttributeIndex_t
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_InitFromVectorFieldSnapshot {
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1B4; // int32
                constexpr std::ptrdiff_t m_nLocalSpaceCP = 0x1B8; // int32
                constexpr std::ptrdiff_t m_nWeightUpdateCP = 0x1BC; // int32
                constexpr std::ptrdiff_t m_bUseVerticalVelocity = 0x1C0; // bool
                constexpr std::ptrdiff_t m_vecScale = 0x1C8; // CPerParticleVecInput
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RemapInitialDirectionToTransformToVector {
                constexpr std::ptrdiff_t m_TransformInput = 0x1B8; // CParticleTransformInput
                constexpr std::ptrdiff_t m_nFieldOutput = 0x218; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flScale = 0x21C; // float32
                constexpr std::ptrdiff_t m_flOffsetRot = 0x220; // float32
                constexpr std::ptrdiff_t m_vecOffsetAxis = 0x224; // Vector
                constexpr std::ptrdiff_t m_bNormalize = 0x230; // bool
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RemapInitialTransformDirectionToRotation {
                constexpr std::ptrdiff_t m_TransformInput = 0x1B8; // CParticleTransformInput
                constexpr std::ptrdiff_t m_nFieldOutput = 0x218; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flOffsetRot = 0x21C; // float32
                constexpr std::ptrdiff_t m_nComponent = 0x220; // int32
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RemapQAnglesToRotation {
                constexpr std::ptrdiff_t m_TransformInput = 0x1B8; // CParticleTransformInput
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RemapTransformOrientationToRotations {
                constexpr std::ptrdiff_t m_TransformInput = 0x1B8; // CParticleTransformInput
                constexpr std::ptrdiff_t m_vecRotation = 0x218; // Vector
                constexpr std::ptrdiff_t m_bUseQuat = 0x224; // bool
                constexpr std::ptrdiff_t m_bWriteNormal = 0x225; // bool
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_SetRigidAttachment {
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1B4; // int32
                constexpr std::ptrdiff_t m_nFieldInput = 0x1B8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1BC; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_bLocalSpace = 0x1C0; // bool
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RemapInitialVisibilityScalar {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1B8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flInputMin = 0x1BC; // float32
                constexpr std::ptrdiff_t m_flInputMax = 0x1C0; // float32
                constexpr std::ptrdiff_t m_flOutputMin = 0x1C4; // float32
                constexpr std::ptrdiff_t m_flOutputMax = 0x1C8; // float32
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RadiusFromCPObject {
                constexpr std::ptrdiff_t m_nControlPoint = 0x1B4; // int32
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_InitialSequenceFromModel {
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1B4; // int32
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1B8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nFieldOutputAnim = 0x1BC; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flInputMin = 0x1C0; // float32
                constexpr std::ptrdiff_t m_flInputMax = 0x1C4; // float32
                constexpr std::ptrdiff_t m_flOutputMin = 0x1C8; // float32
                constexpr std::ptrdiff_t m_flOutputMax = 0x1CC; // float32
                constexpr std::ptrdiff_t m_nSetMethod = 0x1D0; // ParticleSetMethod_t
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_GlobalScale {
                constexpr std::ptrdiff_t m_flScale = 0x1B4; // float32
                constexpr std::ptrdiff_t m_nScaleControlPointNumber = 0x1B8; // int32
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1BC; // int32
                constexpr std::ptrdiff_t m_bScaleRadius = 0x1C0; // bool
                constexpr std::ptrdiff_t m_bScalePosition = 0x1C1; // bool
                constexpr std::ptrdiff_t m_bScaleVelocity = 0x1C2; // bool
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_PointList {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_pointList = 0x1B8; // CUtlVector<PointDefinition_t>
                constexpr std::ptrdiff_t m_bPlaceAlongPath = 0x1D0; // bool
                constexpr std::ptrdiff_t m_bClosedLoop = 0x1D1; // bool
                constexpr std::ptrdiff_t m_nNumPointsAlongPath = 0x1D4; // int32
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RandomNamedModelElement {
                constexpr std::ptrdiff_t m_hModel = 0x1B8; // CStrongHandle<InfoForResourceTypeCModel>
                constexpr std::ptrdiff_t m_names = 0x1C0; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_bShuffle = 0x1D8; // bool
                constexpr std::ptrdiff_t m_bLinear = 0x1D9; // bool
                constexpr std::ptrdiff_t m_bModelFromRenderer = 0x1DA; // bool
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1DC; // ParticleAttributeIndex_t
            }
            // Parent: C_INIT_RandomNamedModelElement
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RandomNamedModelSequence {
            }
            // Parent: C_INIT_RandomNamedModelElement
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RandomNamedModelBodyPart {
            }
            // Parent: C_INIT_RandomNamedModelElement
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RandomNamedModelMeshGroup {
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RemapNamedModelElementToScalar {
                constexpr std::ptrdiff_t m_hModel = 0x1B8; // CStrongHandle<InfoForResourceTypeCModel>
                constexpr std::ptrdiff_t m_names = 0x1C0; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_values = 0x1D8; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_nFieldInput = 0x1F0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1F4; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nSetMethod = 0x1F8; // ParticleSetMethod_t
                constexpr std::ptrdiff_t m_bModelFromRenderer = 0x1FC; // bool
            }
            // Parent: C_INIT_RemapNamedModelElementToScalar
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RemapNamedModelSequenceToScalar {
            }
            // Parent: C_INIT_RemapNamedModelElementToScalar
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RemapNamedModelBodyPartToScalar {
            }
            // Parent: C_INIT_RemapNamedModelElementToScalar
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RemapNamedModelMeshGroupToScalar {
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 18
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_StatusEffect {
                constexpr std::ptrdiff_t m_nDetail2Combo = 0x1B4; // Detail2Combo_t
                constexpr std::ptrdiff_t m_flDetail2Rotation = 0x1B8; // float32
                constexpr std::ptrdiff_t m_flDetail2Scale = 0x1BC; // float32
                constexpr std::ptrdiff_t m_flDetail2BlendFactor = 0x1C0; // float32
                constexpr std::ptrdiff_t m_flColorWarpIntensity = 0x1C4; // float32
                constexpr std::ptrdiff_t m_flDiffuseWarpBlendToFull = 0x1C8; // float32
                constexpr std::ptrdiff_t m_flEnvMapIntensity = 0x1CC; // float32
                constexpr std::ptrdiff_t m_flAmbientScale = 0x1D0; // float32
                constexpr std::ptrdiff_t m_specularColor = 0x1D4; // Color
                constexpr std::ptrdiff_t m_flSpecularScale = 0x1D8; // float32
                constexpr std::ptrdiff_t m_flSpecularExponent = 0x1DC; // float32
                constexpr std::ptrdiff_t m_flSpecularExponentBlendToFull = 0x1E0; // float32
                constexpr std::ptrdiff_t m_flSpecularBlendToFull = 0x1E4; // float32
                constexpr std::ptrdiff_t m_rimLightColor = 0x1E8; // Color
                constexpr std::ptrdiff_t m_flRimLightScale = 0x1EC; // float32
                constexpr std::ptrdiff_t m_flReflectionsTintByBaseBlendToNone = 0x1F0; // float32
                constexpr std::ptrdiff_t m_flMetalnessBlendToFull = 0x1F4; // float32
                constexpr std::ptrdiff_t m_flSelfIllumBlendToFull = 0x1F8; // float32
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 19
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_StatusEffectCitadel {
                constexpr std::ptrdiff_t m_flSFXColorWarpAmount = 0x1B4; // float32
                constexpr std::ptrdiff_t m_flSFXNormalAmount = 0x1B8; // float32
                constexpr std::ptrdiff_t m_flSFXMetalnessAmount = 0x1BC; // float32
                constexpr std::ptrdiff_t m_flSFXRoughnessAmount = 0x1C0; // float32
                constexpr std::ptrdiff_t m_flSFXSelfIllumAmount = 0x1C4; // float32
                constexpr std::ptrdiff_t m_flSFXSScale = 0x1C8; // float32
                constexpr std::ptrdiff_t m_flSFXSScrollX = 0x1CC; // float32
                constexpr std::ptrdiff_t m_flSFXSScrollY = 0x1D0; // float32
                constexpr std::ptrdiff_t m_flSFXSScrollZ = 0x1D4; // float32
                constexpr std::ptrdiff_t m_flSFXSOffsetX = 0x1D8; // float32
                constexpr std::ptrdiff_t m_flSFXSOffsetY = 0x1DC; // float32
                constexpr std::ptrdiff_t m_flSFXSOffsetZ = 0x1E0; // float32
                constexpr std::ptrdiff_t m_nDetailCombo = 0x1E4; // DetailCombo_t
                constexpr std::ptrdiff_t m_flSFXSDetailAmount = 0x1E8; // float32
                constexpr std::ptrdiff_t m_flSFXSDetailScale = 0x1EC; // float32
                constexpr std::ptrdiff_t m_flSFXSDetailScrollX = 0x1F0; // float32
                constexpr std::ptrdiff_t m_flSFXSDetailScrollY = 0x1F4; // float32
                constexpr std::ptrdiff_t m_flSFXSDetailScrollZ = 0x1F8; // float32
                constexpr std::ptrdiff_t m_flSFXSUseModelUVs = 0x1FC; // float32
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_CreateParticleImpulse {
                constexpr std::ptrdiff_t m_InputRadius = 0x1B8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_InputMagnitude = 0x308; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_nFalloffFunction = 0x458; // ParticleFalloffFunction_t
                constexpr std::ptrdiff_t m_InputFalloffExp = 0x460; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_nImpulseType = 0x5B0; // ParticleImpulseType_t
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_QuantizeFloat {
                constexpr std::ptrdiff_t m_InputValue = 0x1B8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_nOutputField = 0x308; // ParticleAttributeIndex_t
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_SetAttributeToScalarExpression {
                constexpr std::ptrdiff_t m_nExpression = 0x1B4; // ScalarExpressionType_t
                constexpr std::ptrdiff_t m_flInput1 = 0x1B8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flInput2 = 0x308; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flOutputRemap = 0x458; // CParticleRemapFloatInput
                constexpr std::ptrdiff_t m_nOutputField = 0x5A8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nSetMethod = 0x5AC; // ParticleSetMethod_t
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_SetVectorAttributeToVectorExpression {
                constexpr std::ptrdiff_t m_nExpression = 0x1B4; // VectorExpressionType_t
                constexpr std::ptrdiff_t m_vInput1 = 0x1B8; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_vInput2 = 0x7E8; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_nOutputField = 0xE18; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nSetMethod = 0xE1C; // ParticleSetMethod_t
                constexpr std::ptrdiff_t m_bNormalizedOutput = 0xE20; // bool
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_InitFloatCollection {
                constexpr std::ptrdiff_t m_InputValue = 0x1B8; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_nOutputField = 0x308; // ParticleAttributeIndex_t
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_InitFloat {
                constexpr std::ptrdiff_t m_InputValue = 0x1B8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_nOutputField = 0x308; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nSetMethod = 0x30C; // ParticleSetMethod_t
                constexpr std::ptrdiff_t m_InputStrength = 0x310; // CPerParticleFloatInput
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_InitVecCollection {
                constexpr std::ptrdiff_t m_InputValue = 0x1B8; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_nOutputField = 0x7E8; // ParticleAttributeIndex_t
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_InitVec {
                constexpr std::ptrdiff_t m_InputValue = 0x1B8; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_nOutputField = 0x7E8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nSetMethod = 0x7EC; // ParticleSetMethod_t
                constexpr std::ptrdiff_t m_bNormalizedOutput = 0x7F0; // bool
                constexpr std::ptrdiff_t m_bWritePreviousPosition = 0x7F1; // bool
            }
            // Parent: CParticleFunctionEmitter
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_InstantaneousEmitter {
                constexpr std::ptrdiff_t m_nParticlesToEmit = 0x1B8; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flStartTime = 0x308; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flInitFromKilledParentParticles = 0x458; // float32
                constexpr std::ptrdiff_t m_flParentParticleScale = 0x460; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_nMaxEmittedPerFrame = 0x5B0; // int32
                constexpr std::ptrdiff_t m_nSnapshotControlPoint = 0x5B4; // int32
            }
            // Parent: CParticleFunctionEmitter
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_ContinuousEmitter {
                constexpr std::ptrdiff_t m_flEmissionDuration = 0x1B8; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flStartTime = 0x308; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flEmitRate = 0x458; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flEmissionScale = 0x5A8; // float32
                constexpr std::ptrdiff_t m_flScalePerParentParticle = 0x5AC; // float32
                constexpr std::ptrdiff_t m_bInitFromKilledParentParticles = 0x5B0; // bool
                constexpr std::ptrdiff_t m_nSnapshotControlPoint = 0x5B4; // int32
                constexpr std::ptrdiff_t m_nLimitPerUpdate = 0x5B8; // int32
                constexpr std::ptrdiff_t m_bForceEmitOnFirstUpdate = 0x5BC; // bool
                constexpr std::ptrdiff_t m_bForceEmitOnLastUpdate = 0x5BD; // bool
            }
            // Parent: CParticleFunctionEmitter
            // Fields count: 15
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_NoiseEmitter {
                constexpr std::ptrdiff_t m_flEmissionDuration = 0x1B4; // float32
                constexpr std::ptrdiff_t m_flStartTime = 0x1B8; // float32
                constexpr std::ptrdiff_t m_flEmissionScale = 0x1BC; // float32
                constexpr std::ptrdiff_t m_nScaleControlPoint = 0x1C0; // int32
                constexpr std::ptrdiff_t m_nScaleControlPointField = 0x1C4; // int32
                constexpr std::ptrdiff_t m_nWorldNoisePoint = 0x1C8; // int32
                constexpr std::ptrdiff_t m_bAbsVal = 0x1CC; // bool
                constexpr std::ptrdiff_t m_bAbsValInv = 0x1CD; // bool
                constexpr std::ptrdiff_t m_flOffset = 0x1D0; // float32
                constexpr std::ptrdiff_t m_flOutputMin = 0x1D4; // float32
                constexpr std::ptrdiff_t m_flOutputMax = 0x1D8; // float32
                constexpr std::ptrdiff_t m_flNoiseScale = 0x1DC; // float32
                constexpr std::ptrdiff_t m_flWorldNoiseScale = 0x1E0; // float32
                constexpr std::ptrdiff_t m_vecOffsetLoc = 0x1E4; // Vector
                constexpr std::ptrdiff_t m_flWorldTimeScale = 0x1F0; // float32
            }
            // Parent: CParticleFunctionEmitter
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_MaintainEmitter {
                constexpr std::ptrdiff_t m_nParticlesToMaintain = 0x1B8; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flStartTime = 0x308; // float32
                constexpr std::ptrdiff_t m_flEmissionDuration = 0x310; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flEmissionRate = 0x460; // float32
                constexpr std::ptrdiff_t m_nSnapshotControlPoint = 0x464; // int32
                constexpr std::ptrdiff_t m_bEmitInstantaneously = 0x468; // bool
                constexpr std::ptrdiff_t m_bFinalEmitOnStop = 0x469; // bool
                constexpr std::ptrdiff_t m_flScale = 0x470; // CParticleCollectionFloatInput
            }
            // Parent: CParticleFunctionForce
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RandomForce {
                constexpr std::ptrdiff_t m_MinForce = 0x1BC; // Vector
                constexpr std::ptrdiff_t m_MaxForce = 0x1C8; // Vector
            }
            // Parent: CParticleFunctionForce
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_CPVelocityForce {
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1BC; // int32
                constexpr std::ptrdiff_t m_flScale = 0x1C0; // CPerParticleFloatInput
            }
            // Parent: CParticleFunctionForce
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_ParentVortices {
                constexpr std::ptrdiff_t m_flForceScale = 0x1BC; // float32
                constexpr std::ptrdiff_t m_vecTwistAxis = 0x1C0; // Vector
                constexpr std::ptrdiff_t m_bFlipBasedOnYaw = 0x1CC; // bool
            }
            // Parent: CParticleFunctionForce
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_TwistAroundAxis {
                constexpr std::ptrdiff_t m_fForceAmount = 0x1BC; // float32
                constexpr std::ptrdiff_t m_TwistAxis = 0x1C0; // Vector
                constexpr std::ptrdiff_t m_bLocalSpace = 0x1CC; // bool
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1D0; // int32
            }
            // Parent: CParticleFunctionForce
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_AttractToControlPoint {
                constexpr std::ptrdiff_t m_vecComponentScale = 0x1BC; // Vector
                constexpr std::ptrdiff_t m_fForceAmount = 0x1C8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_fFalloffPower = 0x318; // float32
                constexpr std::ptrdiff_t m_TransformInput = 0x320; // CParticleTransformInput
                constexpr std::ptrdiff_t m_fForceAmountMin = 0x380; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_bApplyMinForce = 0x4D0; // bool
            }
            // Parent: CParticleFunctionForce
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_ForceBasedOnDistanceToPlane {
                constexpr std::ptrdiff_t m_flMinDist = 0x1BC; // float32
                constexpr std::ptrdiff_t m_vecForceAtMinDist = 0x1C0; // Vector
                constexpr std::ptrdiff_t m_flMaxDist = 0x1CC; // float32
                constexpr std::ptrdiff_t m_vecForceAtMaxDist = 0x1D0; // Vector
                constexpr std::ptrdiff_t m_vecPlaneNormal = 0x1DC; // Vector
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1E8; // int32
                constexpr std::ptrdiff_t m_flExponent = 0x1EC; // float32
            }
            // Parent: CParticleFunctionForce
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_TimeVaryingForce {
                constexpr std::ptrdiff_t m_flStartLerpTime = 0x1BC; // float32
                constexpr std::ptrdiff_t m_StartingForce = 0x1C0; // Vector
                constexpr std::ptrdiff_t m_flEndLerpTime = 0x1CC; // float32
                constexpr std::ptrdiff_t m_EndingForce = 0x1D0; // Vector
            }
            // Parent: CParticleFunctionForce
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_TurbulenceForce {
                constexpr std::ptrdiff_t m_flNoiseCoordScale0 = 0x1BC; // float32
                constexpr std::ptrdiff_t m_flNoiseCoordScale1 = 0x1C0; // float32
                constexpr std::ptrdiff_t m_flNoiseCoordScale2 = 0x1C4; // float32
                constexpr std::ptrdiff_t m_flNoiseCoordScale3 = 0x1C8; // float32
                constexpr std::ptrdiff_t m_vecNoiseAmount0 = 0x1CC; // Vector
                constexpr std::ptrdiff_t m_vecNoiseAmount1 = 0x1D8; // Vector
                constexpr std::ptrdiff_t m_vecNoiseAmount2 = 0x1E4; // Vector
                constexpr std::ptrdiff_t m_vecNoiseAmount3 = 0x1F0; // Vector
            }
            // Parent: CParticleFunctionForce
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_CurlNoiseForce {
                constexpr std::ptrdiff_t m_nNoiseType = 0x1BC; // ParticleDirectionNoiseType_t
                constexpr std::ptrdiff_t m_vecNoiseFreq = 0x1C0; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_vecNoiseScale = 0x7F0; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_vecOffset = 0xE20; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_vecOffsetRate = 0x1450; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_flWorleySeed = 0x1A80; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flWorleyJitter = 0x1BD0; // CPerParticleFloatInput
            }
            // Parent: CParticleFunctionForce
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_PerParticleForce {
                constexpr std::ptrdiff_t m_flForceScale = 0x1C0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_vForce = 0x310; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_nCP = 0x940; // int32
            }
            // Parent: CParticleFunctionForce
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_WindForce {
                constexpr std::ptrdiff_t m_vForce = 0x1BC; // Vector
            }
            // Parent: CParticleFunctionForce
            // Fields count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_ExternalWindForce {
                constexpr std::ptrdiff_t m_vecSamplePosition = 0x1C0; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_vecScale = 0x7F0; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_bSampleWind = 0xE20; // bool
                constexpr std::ptrdiff_t m_bSampleWater = 0xE21; // bool
                constexpr std::ptrdiff_t m_bDampenNearWaterPlane = 0xE22; // bool
                constexpr std::ptrdiff_t m_bSampleGravity = 0xE23; // bool
                constexpr std::ptrdiff_t m_vecGravityForce = 0xE28; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_bUseBasicMovementGravity = 0x1458; // bool
                constexpr std::ptrdiff_t m_flLocalGravityScale = 0x1460; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flLocalBuoyancyScale = 0x15B0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_vecBuoyancyForce = 0x1700; // CPerParticleVecInput
            }
            // Parent: CParticleFunctionForce
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_ExternalGameImpulseForce {
                constexpr std::ptrdiff_t m_flForceScale = 0x1C0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_bRopes = 0x310; // bool
                constexpr std::ptrdiff_t m_bRopesZOnly = 0x311; // bool
                constexpr std::ptrdiff_t m_bExplosions = 0x312; // bool
                constexpr std::ptrdiff_t m_bParticles = 0x313; // bool
            }
            // Parent: CParticleFunctionForce
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_LocalAccelerationForce {
                constexpr std::ptrdiff_t m_nCP = 0x1BC; // int32
                constexpr std::ptrdiff_t m_nScaleCP = 0x1C0; // int32
                constexpr std::ptrdiff_t m_vecAccel = 0x1C8; // CParticleCollectionVecInput
            }
            // Parent: CParticleFunctionForce
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_DensityForce {
                constexpr std::ptrdiff_t m_flRadiusScale = 0x1BC; // float32
                constexpr std::ptrdiff_t m_flForceScale = 0x1C0; // float32
                constexpr std::ptrdiff_t m_flTargetDensity = 0x1C4; // float32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_BasicMovement {
                constexpr std::ptrdiff_t m_Gravity = 0x1B0; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_fDrag = 0x7E0; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_nMaxConstraintPasses = 0x930; // int32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_FadeAndKill {
                constexpr std::ptrdiff_t m_flStartFadeInTime = 0x1B0; // float32
                constexpr std::ptrdiff_t m_flEndFadeInTime = 0x1B4; // float32
                constexpr std::ptrdiff_t m_flStartFadeOutTime = 0x1B8; // float32
                constexpr std::ptrdiff_t m_flEndFadeOutTime = 0x1BC; // float32
                constexpr std::ptrdiff_t m_flStartAlpha = 0x1C0; // float32
                constexpr std::ptrdiff_t m_flEndAlpha = 0x1C4; // float32
                constexpr std::ptrdiff_t m_bForcePreserveParticleOrder = 0x1C8; // bool
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_FadeAndKillForTracers {
                constexpr std::ptrdiff_t m_flStartFadeInTime = 0x1B0; // float32
                constexpr std::ptrdiff_t m_flEndFadeInTime = 0x1B4; // float32
                constexpr std::ptrdiff_t m_flStartFadeOutTime = 0x1B8; // float32
                constexpr std::ptrdiff_t m_flEndFadeOutTime = 0x1BC; // float32
                constexpr std::ptrdiff_t m_flStartAlpha = 0x1C0; // float32
                constexpr std::ptrdiff_t m_flEndAlpha = 0x1C4; // float32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_FadeIn {
                constexpr std::ptrdiff_t m_flFadeInTimeMin = 0x1B0; // float32
                constexpr std::ptrdiff_t m_flFadeInTimeMax = 0x1B4; // float32
                constexpr std::ptrdiff_t m_flFadeInTimeExp = 0x1B8; // float32
                constexpr std::ptrdiff_t m_bProportional = 0x1BC; // bool
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_FadeOut {
                constexpr std::ptrdiff_t m_flFadeOutTimeMin = 0x1B0; // float32
                constexpr std::ptrdiff_t m_flFadeOutTimeMax = 0x1B4; // float32
                constexpr std::ptrdiff_t m_flFadeOutTimeExp = 0x1B8; // float32
                constexpr std::ptrdiff_t m_flFadeBias = 0x1BC; // float32
                constexpr std::ptrdiff_t m_bProportional = 0x1F0; // bool
                constexpr std::ptrdiff_t m_bEaseInAndOut = 0x1F1; // bool
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_FadeInSimple {
                constexpr std::ptrdiff_t m_flFadeInTime = 0x1B0; // float32
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_FadeOutSimple {
                constexpr std::ptrdiff_t m_flFadeOutTime = 0x1B0; // float32
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_ClampScalar {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flOutputMin = 0x1B8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flOutputMax = 0x308; // CPerParticleFloatInput
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_ClampVector {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_vecOutputMin = 0x1B8; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_vecOutputMax = 0x7E8; // CPerParticleVecInput
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 13
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_OscillateScalar {
                constexpr std::ptrdiff_t m_RateMin = 0x1B0; // float32
                constexpr std::ptrdiff_t m_RateMax = 0x1B4; // float32
                constexpr std::ptrdiff_t m_FrequencyMin = 0x1B8; // float32
                constexpr std::ptrdiff_t m_FrequencyMax = 0x1BC; // float32
                constexpr std::ptrdiff_t m_nField = 0x1C0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_bProportional = 0x1C4; // bool
                constexpr std::ptrdiff_t m_bProportionalOp = 0x1C5; // bool
                constexpr std::ptrdiff_t m_flStartTime_min = 0x1C8; // float32
                constexpr std::ptrdiff_t m_flStartTime_max = 0x1CC; // float32
                constexpr std::ptrdiff_t m_flEndTime_min = 0x1D0; // float32
                constexpr std::ptrdiff_t m_flEndTime_max = 0x1D4; // float32
                constexpr std::ptrdiff_t m_flOscMult = 0x1D8; // float32
                constexpr std::ptrdiff_t m_flOscAdd = 0x1DC; // float32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_OscillateScalarSimple {
                constexpr std::ptrdiff_t m_Rate = 0x1B0; // float32
                constexpr std::ptrdiff_t m_Frequency = 0x1B4; // float32
                constexpr std::ptrdiff_t m_nField = 0x1B8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flOscMult = 0x1BC; // float32
                constexpr std::ptrdiff_t m_flOscAdd = 0x1C0; // float32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 15
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_OscillateVector {
                constexpr std::ptrdiff_t m_RateMin = 0x1B0; // Vector
                constexpr std::ptrdiff_t m_RateMax = 0x1BC; // Vector
                constexpr std::ptrdiff_t m_FrequencyMin = 0x1C8; // Vector
                constexpr std::ptrdiff_t m_FrequencyMax = 0x1D4; // Vector
                constexpr std::ptrdiff_t m_nField = 0x1E0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_bProportional = 0x1E4; // bool
                constexpr std::ptrdiff_t m_bProportionalOp = 0x1E5; // bool
                constexpr std::ptrdiff_t m_bOffset = 0x1E6; // bool
                constexpr std::ptrdiff_t m_flStartTime_min = 0x1E8; // float32
                constexpr std::ptrdiff_t m_flStartTime_max = 0x1EC; // float32
                constexpr std::ptrdiff_t m_flEndTime_min = 0x1F0; // float32
                constexpr std::ptrdiff_t m_flEndTime_max = 0x1F4; // float32
                constexpr std::ptrdiff_t m_flOscMult = 0x1F8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flOscAdd = 0x348; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flRateScale = 0x498; // CPerParticleFloatInput
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_OscillateVectorSimple {
                constexpr std::ptrdiff_t m_Rate = 0x1B0; // Vector
                constexpr std::ptrdiff_t m_Frequency = 0x1BC; // Vector
                constexpr std::ptrdiff_t m_nField = 0x1C8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flOscMult = 0x1CC; // float32
                constexpr std::ptrdiff_t m_flOscAdd = 0x1D0; // float32
                constexpr std::ptrdiff_t m_bOffset = 0x1D4; // bool
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_DifferencePreviousParticle {
                constexpr std::ptrdiff_t m_nFieldInput = 0x1B0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flInputMin = 0x1B8; // float32
                constexpr std::ptrdiff_t m_flInputMax = 0x1BC; // float32
                constexpr std::ptrdiff_t m_flOutputMin = 0x1C0; // float32
                constexpr std::ptrdiff_t m_flOutputMax = 0x1C4; // float32
                constexpr std::ptrdiff_t m_nSetMethod = 0x1C8; // ParticleSetMethod_t
                constexpr std::ptrdiff_t m_bActiveRange = 0x1CC; // bool
                constexpr std::ptrdiff_t m_bSetPreviousParticle = 0x1CD; // bool
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_PointVectorAtNextParticle {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flInterpolation = 0x1B8; // CPerParticleFloatInput
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapScalar {
                constexpr std::ptrdiff_t m_nFieldInput = 0x1B0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flInputMin = 0x1B8; // float32
                constexpr std::ptrdiff_t m_flInputMax = 0x1BC; // float32
                constexpr std::ptrdiff_t m_flOutputMin = 0x1C0; // float32
                constexpr std::ptrdiff_t m_flOutputMax = 0x1C4; // float32
                constexpr std::ptrdiff_t m_bOldCode = 0x1C8; // bool
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapDensityToVector {
                constexpr std::ptrdiff_t m_flRadiusScale = 0x1B0; // float32
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flDensityMin = 0x1B8; // float32
                constexpr std::ptrdiff_t m_flDensityMax = 0x1BC; // float32
                constexpr std::ptrdiff_t m_vecOutputMin = 0x1C0; // Vector
                constexpr std::ptrdiff_t m_vecOutputMax = 0x1CC; // Vector
                constexpr std::ptrdiff_t m_bUseParentDensity = 0x1D8; // bool
                constexpr std::ptrdiff_t m_nVoxelGridResolution = 0x1DC; // int32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_Diffusion {
                constexpr std::ptrdiff_t m_flRadiusScale = 0x1B0; // float32
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nVoxelGridResolution = 0x1B8; // int32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapScalarEndCap {
                constexpr std::ptrdiff_t m_nFieldInput = 0x1B0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flInputMin = 0x1B8; // float32
                constexpr std::ptrdiff_t m_flInputMax = 0x1BC; // float32
                constexpr std::ptrdiff_t m_flOutputMin = 0x1C0; // float32
                constexpr std::ptrdiff_t m_flOutputMax = 0x1C4; // float32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_ReinitializeScalarEndCap {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flOutputMin = 0x1B4; // float32
                constexpr std::ptrdiff_t m_flOutputMax = 0x1B8; // float32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapScalarOnceTimed {
                constexpr std::ptrdiff_t m_bProportional = 0x1B0; // bool
                constexpr std::ptrdiff_t m_nFieldInput = 0x1B4; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1B8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flInputMin = 0x1BC; // float32
                constexpr std::ptrdiff_t m_flInputMax = 0x1C0; // float32
                constexpr std::ptrdiff_t m_flOutputMin = 0x1C4; // float32
                constexpr std::ptrdiff_t m_flOutputMax = 0x1C8; // float32
                constexpr std::ptrdiff_t m_flRemapTime = 0x1CC; // float32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapParticleCountOnScalarEndCap {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nInputMin = 0x1B4; // int32
                constexpr std::ptrdiff_t m_nInputMax = 0x1B8; // int32
                constexpr std::ptrdiff_t m_flOutputMin = 0x1BC; // float32
                constexpr std::ptrdiff_t m_flOutputMax = 0x1C0; // float32
                constexpr std::ptrdiff_t m_bBackwards = 0x1C4; // bool
                constexpr std::ptrdiff_t m_nSetMethod = 0x1C8; // ParticleSetMethod_t
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapParticleCountToScalar {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nInputMin = 0x1B8; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_nInputMax = 0x308; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flOutputMin = 0x458; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flOutputMax = 0x5A8; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_bActiveRange = 0x6F8; // bool
                constexpr std::ptrdiff_t m_nSetMethod = 0x6FC; // ParticleSetMethod_t
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapVisibilityScalar {
                constexpr std::ptrdiff_t m_nFieldInput = 0x1B0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flInputMin = 0x1B8; // float32
                constexpr std::ptrdiff_t m_flInputMax = 0x1BC; // float32
                constexpr std::ptrdiff_t m_flOutputMin = 0x1C0; // float32
                constexpr std::ptrdiff_t m_flOutputMax = 0x1C4; // float32
                constexpr std::ptrdiff_t m_flRadiusScale = 0x1C8; // float32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapTransformVisibilityToScalar {
                constexpr std::ptrdiff_t m_nSetMethod = 0x1B0; // ParticleSetMethod_t
                constexpr std::ptrdiff_t m_TransformInput = 0x1B8; // CParticleTransformInput
                constexpr std::ptrdiff_t m_nFieldOutput = 0x218; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flInputMin = 0x21C; // float32
                constexpr std::ptrdiff_t m_flInputMax = 0x220; // float32
                constexpr std::ptrdiff_t m_flOutputMin = 0x224; // float32
                constexpr std::ptrdiff_t m_flOutputMax = 0x228; // float32
                constexpr std::ptrdiff_t m_flRadius = 0x22C; // float32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapTransformVisibilityToVector {
                constexpr std::ptrdiff_t m_nSetMethod = 0x1B0; // ParticleSetMethod_t
                constexpr std::ptrdiff_t m_TransformInput = 0x1B8; // CParticleTransformInput
                constexpr std::ptrdiff_t m_nFieldOutput = 0x218; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flInputMin = 0x21C; // float32
                constexpr std::ptrdiff_t m_flInputMax = 0x220; // float32
                constexpr std::ptrdiff_t m_vecOutputMin = 0x224; // Vector
                constexpr std::ptrdiff_t m_vecOutputMax = 0x230; // Vector
                constexpr std::ptrdiff_t m_flRadius = 0x23C; // float32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_LerpScalar {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flOutput = 0x1B8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flStartTime = 0x308; // float32
                constexpr std::ptrdiff_t m_flEndTime = 0x30C; // float32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_LerpEndCapScalar {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flOutput = 0x1B4; // float32
                constexpr std::ptrdiff_t m_flLerpTime = 0x1B8; // float32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_LerpEndCapVector {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_vecOutput = 0x1B4; // Vector
                constexpr std::ptrdiff_t m_flLerpTime = 0x1C0; // float32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_LerpVector {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_vecOutput = 0x1B4; // Vector
                constexpr std::ptrdiff_t m_flStartTime = 0x1C0; // float32
                constexpr std::ptrdiff_t m_flEndTime = 0x1C4; // float32
                constexpr std::ptrdiff_t m_nSetMethod = 0x1C8; // ParticleSetMethod_t
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_LerpToOtherAttribute {
                constexpr std::ptrdiff_t m_flInterpolation = 0x1B0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_nFieldInputFrom = 0x300; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nFieldInput = 0x304; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nFieldOutput = 0x308; // ParticleAttributeIndex_t
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapSpeed {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flInputMin = 0x1B4; // float32
                constexpr std::ptrdiff_t m_flInputMax = 0x1B8; // float32
                constexpr std::ptrdiff_t m_flOutputMin = 0x1BC; // float32
                constexpr std::ptrdiff_t m_flOutputMax = 0x1C0; // float32
                constexpr std::ptrdiff_t m_nSetMethod = 0x1C4; // ParticleSetMethod_t
                constexpr std::ptrdiff_t m_bIgnoreDelta = 0x1C8; // bool
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapVectortoCP {
                constexpr std::ptrdiff_t m_nOutControlPointNumber = 0x1B0; // int32
                constexpr std::ptrdiff_t m_nFieldInput = 0x1B4; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nParticleNumber = 0x1B8; // int32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RampScalarLinear {
                constexpr std::ptrdiff_t m_RateMin = 0x1B0; // float32
                constexpr std::ptrdiff_t m_RateMax = 0x1B4; // float32
                constexpr std::ptrdiff_t m_flStartTime_min = 0x1B8; // float32
                constexpr std::ptrdiff_t m_flStartTime_max = 0x1BC; // float32
                constexpr std::ptrdiff_t m_flEndTime_min = 0x1C0; // float32
                constexpr std::ptrdiff_t m_flEndTime_max = 0x1C4; // float32
                constexpr std::ptrdiff_t m_nField = 0x1F0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_bProportionalOp = 0x1F4; // bool
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RampScalarSpline {
                constexpr std::ptrdiff_t m_RateMin = 0x1B0; // float32
                constexpr std::ptrdiff_t m_RateMax = 0x1B4; // float32
                constexpr std::ptrdiff_t m_flStartTime_min = 0x1B8; // float32
                constexpr std::ptrdiff_t m_flStartTime_max = 0x1BC; // float32
                constexpr std::ptrdiff_t m_flEndTime_min = 0x1C0; // float32
                constexpr std::ptrdiff_t m_flEndTime_max = 0x1C4; // float32
                constexpr std::ptrdiff_t m_flBias = 0x1C8; // float32
                constexpr std::ptrdiff_t m_nField = 0x1F0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_bProportionalOp = 0x1F4; // bool
                constexpr std::ptrdiff_t m_bEaseOut = 0x1F5; // bool
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RampScalarLinearSimple {
                constexpr std::ptrdiff_t m_Rate = 0x1B0; // float32
                constexpr std::ptrdiff_t m_flStartTime = 0x1B4; // float32
                constexpr std::ptrdiff_t m_flEndTime = 0x1B8; // float32
                constexpr std::ptrdiff_t m_nField = 0x1E0; // ParticleAttributeIndex_t
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RampScalarSplineSimple {
                constexpr std::ptrdiff_t m_Rate = 0x1B0; // float32
                constexpr std::ptrdiff_t m_flStartTime = 0x1B4; // float32
                constexpr std::ptrdiff_t m_flEndTime = 0x1B8; // float32
                constexpr std::ptrdiff_t m_nField = 0x1E0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_bEaseOut = 0x1E4; // bool
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_ChladniWave {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flInputMin = 0x1B8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flInputMax = 0x308; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flOutputMin = 0x458; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flOutputMax = 0x5A8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_vecWaveLength = 0x6F8; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_vecHarmonics = 0xD28; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_nSetMethod = 0x1358; // ParticleSetMethod_t
                constexpr std::ptrdiff_t m_nLocalSpaceControlPoint = 0x135C; // int32
                constexpr std::ptrdiff_t m_b3D = 0x1360; // bool
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_Noise {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flOutputMin = 0x1B4; // float32
                constexpr std::ptrdiff_t m_flOutputMax = 0x1B8; // float32
                constexpr std::ptrdiff_t m_fl4NoiseScale = 0x1BC; // float32
                constexpr std::ptrdiff_t m_bAdditive = 0x1C0; // bool
                constexpr std::ptrdiff_t m_flNoiseAnimationTimeScale = 0x1C4; // float32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_VectorNoise {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_vecOutputMin = 0x1B4; // Vector
                constexpr std::ptrdiff_t m_vecOutputMax = 0x1C0; // Vector
                constexpr std::ptrdiff_t m_fl4NoiseScale = 0x1CC; // float32
                constexpr std::ptrdiff_t m_bAdditive = 0x1D0; // bool
                constexpr std::ptrdiff_t m_bOffset = 0x1D1; // bool
                constexpr std::ptrdiff_t m_flNoiseAnimationTimeScale = 0x1D4; // float32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_Decay {
                constexpr std::ptrdiff_t m_bRopeDecay = 0x1B0; // bool
                constexpr std::ptrdiff_t m_bForcePreserveParticleOrder = 0x1B1; // bool
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_DecayOffscreen {
                constexpr std::ptrdiff_t m_flOffscreenTime = 0x1B0; // CParticleCollectionFloatInput
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_EndCapTimedFreeze {
                constexpr std::ptrdiff_t m_flFreezeTime = 0x1B0; // CParticleCollectionFloatInput
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_EndCapTimedDecay {
                constexpr std::ptrdiff_t m_flDecayTime = 0x1B0; // float32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_EndCapDecay {
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_VelocityDecay {
                constexpr std::ptrdiff_t m_flMinVelocity = 0x1B0; // float32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_AlphaDecay {
                constexpr std::ptrdiff_t m_flMinAlpha = 0x1B0; // float32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RadiusDecay {
                constexpr std::ptrdiff_t m_flMinRadius = 0x1B0; // float32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_DecayMaintainCount {
                constexpr std::ptrdiff_t m_nParticlesToMaintain = 0x1B0; // int32
                constexpr std::ptrdiff_t m_flDecayDelay = 0x1B4; // float32
                constexpr std::ptrdiff_t m_nSnapshotControlPoint = 0x1B8; // int32
                constexpr std::ptrdiff_t m_bLifespanDecay = 0x1BC; // bool
                constexpr std::ptrdiff_t m_flScale = 0x1C0; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_bKillNewest = 0x310; // bool
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_DecayClampCount {
                constexpr std::ptrdiff_t m_nCount = 0x1B0; // CParticleCollectionFloatInput
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_Cull {
                constexpr std::ptrdiff_t m_flCullPerc = 0x1B0; // float32
                constexpr std::ptrdiff_t m_flCullStart = 0x1B4; // float32
                constexpr std::ptrdiff_t m_flCullEnd = 0x1B8; // float32
                constexpr std::ptrdiff_t m_flCullExp = 0x1BC; // float32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CGeneralSpin {
                constexpr std::ptrdiff_t m_nSpinRateDegrees = 0x1B0; // int32
                constexpr std::ptrdiff_t m_nSpinRateMinDegrees = 0x1B4; // int32
                constexpr std::ptrdiff_t m_fSpinRateStopTime = 0x1BC; // float32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSpinUpdateBase {
            }
            // Parent: CGeneralSpin
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_Spin {
            }
            // Parent: CSpinUpdateBase
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SpinUpdate {
            }
            // Parent: CGeneralSpin
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SpinYaw {
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_InterpolateRadius {
                constexpr std::ptrdiff_t m_flStartTime = 0x1B0; // float32
                constexpr std::ptrdiff_t m_flEndTime = 0x1B4; // float32
                constexpr std::ptrdiff_t m_flStartScale = 0x1B8; // float32
                constexpr std::ptrdiff_t m_flEndScale = 0x1BC; // float32
                constexpr std::ptrdiff_t m_bEaseInAndOut = 0x1C0; // bool
                constexpr std::ptrdiff_t m_flBias = 0x1C4; // float32
            }
        }
        // Module: libpulse_system.so
        // Classes count: 51
        // Enums count: 0
        namespace libpulse_system {
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            namespace FakeEntity_tAPI {
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulse_RegisterInfo {
                constexpr std::ptrdiff_t m_nReg = 0x0; // PulseRuntimeRegisterIndex_t
                constexpr std::ptrdiff_t m_Type = 0x8; // CPulseValueFullType
                constexpr std::ptrdiff_t m_OriginName = 0x18; // CKV3MemberNameWithStorage
                constexpr std::ptrdiff_t m_nWrittenByInstruction = 0x50; // int32
                constexpr std::ptrdiff_t m_nLastReadByInstruction = 0x54; // int32
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulse_Chunk {
                constexpr std::ptrdiff_t m_Instructions = 0x0; // CUtlLeanVector<PGDInstruction_t>
                constexpr std::ptrdiff_t m_Registers = 0x10; // CUtlLeanVector<CPulse_RegisterInfo>
                constexpr std::ptrdiff_t m_InstructionEditorIDs = 0x20; // CUtlLeanVector<PulseDocNodeID_t>
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulse_Variable {
                constexpr std::ptrdiff_t m_Name = 0x0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_Description = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_Type = 0x10; // CPulseValueFullType
                constexpr std::ptrdiff_t m_DefaultValue = 0x20; // KeyValues3
                constexpr std::ptrdiff_t m_bIsPublic = 0x32; // bool
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulse_Constant {
                constexpr std::ptrdiff_t m_Type = 0x0; // CPulseValueFullType
                constexpr std::ptrdiff_t m_Value = 0x10; // KeyValues3
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulse_PublicOutput {
                constexpr std::ptrdiff_t m_Name = 0x0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_Description = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_ParamType = 0x10; // CPulseValueFullType
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulse_OutputConnection {
                constexpr std::ptrdiff_t m_SourceOutput = 0x0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_TargetEntity = 0x8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_TargetInput = 0x10; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_Param = 0x18; // CUtlSymbolLarge
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulse_InvokeBinding {
                constexpr std::ptrdiff_t m_RegisterMap = 0x0; // PulseRegisterMap_t
                constexpr std::ptrdiff_t m_FuncName = 0x20; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_nCellIndex = 0x28; // PulseRuntimeCellIndex_t
                constexpr std::ptrdiff_t m_nSrcChunk = 0x2C; // PulseRuntimeChunkIndex_t
                constexpr std::ptrdiff_t m_nSrcInstruction = 0x30; // int32
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulse_CallInfo {
                constexpr std::ptrdiff_t m_PortName = 0x0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_nEditorNodeID = 0x8; // PulseDocNodeID_t
                constexpr std::ptrdiff_t m_RegisterMap = 0x10; // PulseRegisterMap_t
                constexpr std::ptrdiff_t m_CallMethodID = 0x30; // PulseDocNodeID_t
                constexpr std::ptrdiff_t m_nSrcChunk = 0x34; // PulseRuntimeChunkIndex_t
                constexpr std::ptrdiff_t m_nSrcInstruction = 0x38; // int32
            }
            // Parent: None
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseGraphDef {
                constexpr std::ptrdiff_t m_DomainIdentifier = 0x8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_ParentMapName = 0x10; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_Chunks = 0x18; // CUtlVector<CPulse_Chunk*>
                constexpr std::ptrdiff_t m_Cells = 0x30; // CUtlVector<CPulseCell_Base*>
                constexpr std::ptrdiff_t m_Vars = 0x48; // CUtlVector<CPulse_Variable>
                constexpr std::ptrdiff_t m_PublicOutputs = 0x60; // CUtlVector<CPulse_PublicOutput>
                constexpr std::ptrdiff_t m_InvokeBindings = 0x78; // CUtlVector<CPulse_InvokeBinding*>
                constexpr std::ptrdiff_t m_CallInfos = 0x90; // CUtlVector<CPulse_CallInfo*>
                constexpr std::ptrdiff_t m_Constants = 0xA8; // CUtlVector<CPulse_Constant>
                constexpr std::ptrdiff_t m_OutputConnections = 0xC0; // CUtlVector<CPulse_OutputConnection*>
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseLibraryBindings
            // MPropertyDescription
            namespace CPulseMathlib {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseLibraryBindings
            // MPropertyDescription
            namespace CPulseTestScriptLib {
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace PulseRegisterMap_t {
                constexpr std::ptrdiff_t m_Inparams = 0x0; // KeyValues3
                constexpr std::ptrdiff_t m_Outparams = 0x10; // KeyValues3
            }
            // Parent: None
            // Fields count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace PGDInstruction_t {
                constexpr std::ptrdiff_t m_nCode = 0x0; // PulseInstructionCode_t
                constexpr std::ptrdiff_t m_nVar = 0x4; // PulseRuntimeVarIndex_t
                constexpr std::ptrdiff_t m_nReg0 = 0x8; // PulseRuntimeRegisterIndex_t
                constexpr std::ptrdiff_t m_nReg1 = 0xA; // PulseRuntimeRegisterIndex_t
                constexpr std::ptrdiff_t m_nReg2 = 0xC; // PulseRuntimeRegisterIndex_t
                constexpr std::ptrdiff_t m_nInvokeBindingIndex = 0x10; // PulseRuntimeInvokeIndex_t
                constexpr std::ptrdiff_t m_nChunk = 0x14; // PulseRuntimeChunkIndex_t
                constexpr std::ptrdiff_t m_nDestInstruction = 0x18; // int32
                constexpr std::ptrdiff_t m_nCallInfoIndex = 0x1C; // PulseRuntimeCallInfoIndex_t
                constexpr std::ptrdiff_t m_nConstIdx = 0x20; // PulseRuntimeConstantIndex_t
                constexpr std::ptrdiff_t m_DomainValue = 0x28; // CBufferString
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulse_OutflowConnection {
                constexpr std::ptrdiff_t m_SourceOutflowName = 0x0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_nDestChunk = 0x8; // PulseRuntimeChunkIndex_t
                constexpr std::ptrdiff_t m_nInstruction = 0xC; // int32
            }
            // Parent: CPulse_OutflowConnection
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulse_ResumePoint {
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Base {
                constexpr std::ptrdiff_t m_nEditorNodeID = 0x8; // PulseDocNodeID_t
            }
            // Parent: CPulseCell_Base
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_BaseFlow {
            }
            // Parent: CPulseCell_BaseFlow
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Inflow_BaseEntrypoint {
                constexpr std::ptrdiff_t m_EntryChunk = 0x48; // PulseRuntimeChunkIndex_t
                constexpr std::ptrdiff_t m_RegisterMap = 0x50; // PulseRegisterMap_t
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseRuntimeMethodArg {
                constexpr std::ptrdiff_t m_Name = 0x0; // CKV3MemberNameWithStorage
                constexpr std::ptrdiff_t m_Description = 0x38; // CUtlString
                constexpr std::ptrdiff_t m_Type = 0x40; // CPulseValueFullType
            }
            // Parent: CPulseCell_BaseFlow
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_BaseYieldingInflow {
            }
            // Parent: CPulseCell_Base
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_BaseValue {
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
            namespace CPulseCell_Inflow_Wait {
                constexpr std::ptrdiff_t m_WakeResume = 0x48; // CPulse_ResumePoint
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Outflow_CycleOrdered__InstanceState_t {
                constexpr std::ptrdiff_t m_nNextIndex = 0x0; // int32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Outflow_CycleShuffled__InstanceState_t {
                constexpr std::ptrdiff_t m_Shuffle = 0x0; // CUtlVectorFixedGrowable<uint8>
                constexpr std::ptrdiff_t m_nNextShuffle = 0x20; // int32
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
            namespace CPulseCell_Outflow_TestRandomYesNo {
                constexpr std::ptrdiff_t m_Yes = 0x48; // CPulse_OutflowConnection
                constexpr std::ptrdiff_t m_No = 0x58; // CPulse_OutflowConnection
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
            namespace CPulseCell_Outflow_TestExplicitYesNo {
                constexpr std::ptrdiff_t m_Yes = 0x48; // CPulse_OutflowConnection
                constexpr std::ptrdiff_t m_No = 0x58; // CPulse_OutflowConnection
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
            namespace CPulseCell_Value_TestValue50 {
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
            namespace CPulseCell_Value_RandomInt {
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Timeline__TimelineEvent_t {
                constexpr std::ptrdiff_t m_flTimeFromPrevious = 0x0; // float32
                constexpr std::ptrdiff_t m_bPauseForPreviousEvents = 0x4; // bool
                constexpr std::ptrdiff_t m_bCallModeSync = 0x5; // bool
                constexpr std::ptrdiff_t m_EventOutflow = 0x8; // CPulse_OutflowConnection
            }
            // Parent: None
            // Fields count: 7
            namespace FakeEntity_t {
                constexpr std::ptrdiff_t m_nHandle = 0x0; // PulseTestEHandle_t
                constexpr std::ptrdiff_t m_Name = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_Class = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_bDestroyed = 0x18; // bool
                constexpr std::ptrdiff_t m_pAssociatedGraphInstance = 0x20; // CPulseGraphInstance_TestDomain*
                constexpr std::ptrdiff_t m_bFuncWasCalled = 0x28; // bool
                constexpr std::ptrdiff_t m_fValue = 0x2C; // float32
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // MPulseInstanceDomainInfo
            // MPulseLibraryBindings
            // MPulseDomainOptInFeatureTag
            namespace CPulseGraphInstance_TestDomain {
                constexpr std::ptrdiff_t m_bIsRunningUnitTests = 0xD8; // bool
                constexpr std::ptrdiff_t m_bExplicitTimeStepping = 0xD9; // bool
                constexpr std::ptrdiff_t m_bExpectingToDestroyWithYieldedCursors = 0xDA; // bool
                constexpr std::ptrdiff_t m_nNextValidateIndex = 0xDC; // int32
                constexpr std::ptrdiff_t m_Tracepoints = 0xE0; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_bTestYesOrNoPath = 0xF8; // bool
            }
            // Parent: CPulseCell_BaseFlow
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPropertyFriendlyName
            namespace CPulseCell_Step_TestDomainTracepoint {
            }
            // Parent: CPulseCell_BaseFlow
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPropertyFriendlyName
            namespace CPulseCell_Step_TestDomainCreateFakeEntity {
            }
            // Parent: CPulseCell_BaseFlow
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPropertyFriendlyName
            namespace CPulseCell_Step_TestDomainDestroyFakeEntity {
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
            namespace CPulseCell_Step_TestDomainEntFire {
                constexpr std::ptrdiff_t m_Input = 0x48; // CUtlString
            }
            // Parent: CPulseCell_BaseValue
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPropertyFriendlyName
            namespace CPulseCell_Val_TestDomainGetEntityName {
            }
            // Parent: CPulseCell_BaseValue
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPropertyFriendlyName
            namespace CPulseCell_Val_TestDomainFindEntityByName {
            }
            // Parent: CPulseCell_BaseYieldingInflow
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            namespace CPulseCell_TestWaitWithCursorState {
                constexpr std::ptrdiff_t m_WakeResume = 0x48; // CPulse_ResumePoint
                constexpr std::ptrdiff_t m_WakeCancel = 0x58; // CPulse_ResumePoint
                constexpr std::ptrdiff_t m_WakeFail = 0x68; // CPulse_ResumePoint
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_TestWaitWithCursorState__CursorState_t {
                constexpr std::ptrdiff_t flWaitValue = 0x0; // float32
                constexpr std::ptrdiff_t bFailOnCancel = 0x4; // bool
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseLibraryBindings
            // MPropertyDescription
            namespace CPulseTestFuncs_DerivedDomain {
            }
            // Parent: CPulseCell_BaseFlow
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            namespace CPulseCell_Test_NoInflow {
            }
            // Parent: CPulseCell_BaseFlow
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            namespace CPulseCell_Test_MultiInflow_WithDefault {
            }
            // Parent: CPulseCell_BaseFlow
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            namespace CPulseCell_Test_MultiInflow_NoDefault {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseInstanceDomainInfo
            // MPulseLibraryBindings
            namespace CPulseGraphInstance_TurtleGraphics {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseLibraryBindings
            // MPropertyDescription
            namespace CPulseCursorFuncs {
            }
            // Parent: CPulseCell_BaseYieldingInflow
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_WaitForCursorsWithTagBase {
                constexpr std::ptrdiff_t m_nCursorsAllowedToWait = 0x48; // int32
                constexpr std::ptrdiff_t m_WaitComplete = 0x50; // CPulse_ResumePoint
            }
            // Parent: None
            // Fields count: 1
            namespace CPulseCell_WaitForCursorsWithTagBase__CursorState_t {
                constexpr std::ptrdiff_t m_TagName = 0x0; // CUtlSymbolLarge
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
            namespace CPulseCell_WaitForCursorsWithTag {
                constexpr std::ptrdiff_t m_bTagSelfWhenComplete = 0x60; // bool
                constexpr std::ptrdiff_t m_nDesiredKillPriority = 0x64; // PulseCursorCancelPriority_t
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
            namespace CPulseCell_CursorQueue {
                constexpr std::ptrdiff_t m_nCursorsAllowedToRunParallel = 0x60; // int32
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseLibraryBindings
            // MPropertyDescription
            namespace CPulseTestFuncs_LibraryA {
            }
        }
        // Module: librendersystemvulkan.so
        // Classes count: 3
        // Enums count: 0
        namespace librendersystemvulkan {
            // Parent: None
            // Fields count: 7
            namespace RenderInputLayoutField_t {
                constexpr std::ptrdiff_t m_pSemanticName = 0x0; // uint8[32]
                constexpr std::ptrdiff_t m_nSemanticIndex = 0x20; // int32
                constexpr std::ptrdiff_t m_Format = 0x24; // uint32
                constexpr std::ptrdiff_t m_nOffset = 0x28; // int32
                constexpr std::ptrdiff_t m_nSlot = 0x2C; // int32
                constexpr std::ptrdiff_t m_nSlotType = 0x30; // RenderSlotType_t
                constexpr std::ptrdiff_t m_nInstanceStepRate = 0x34; // int32
            }
            // Parent: None
            // Fields count: 4
            namespace VsInputSignatureElement_t {
                constexpr std::ptrdiff_t m_pName = 0x0; // char[64]
                constexpr std::ptrdiff_t m_pSemantic = 0x40; // char[64]
                constexpr std::ptrdiff_t m_pD3DSemanticName = 0x80; // char[64]
                constexpr std::ptrdiff_t m_nD3DSemanticIndex = 0xC0; // int32
            }
            // Parent: None
            // Fields count: 1
            namespace VsInputSignature_t {
                constexpr std::ptrdiff_t m_elems = 0x0; // CUtlVector<VsInputSignatureElement_t>
            }
        }
        // Module: libresourcesystem.so
        // Classes count: 57
        // Enums count: 0
        namespace libresourcesystem {
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace ConstantInfo_t {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_nameToken = 0x8; // CUtlStringToken
                constexpr std::ptrdiff_t m_flValue = 0xC; // float32
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VariableInfo_t {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_nameToken = 0x8; // CUtlStringToken
                constexpr std::ptrdiff_t m_nIndex = 0xC; // FuseVariableIndex_t
                constexpr std::ptrdiff_t m_nNumComponents = 0xE; // uint8
                constexpr std::ptrdiff_t m_eVarType = 0xF; // FuseVariableType_t
                constexpr std::ptrdiff_t m_eAccess = 0x10; // FuseVariableAccess_t
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FunctionInfo_t {
                constexpr std::ptrdiff_t m_name = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_nameToken = 0x10; // CUtlStringToken
                constexpr std::ptrdiff_t m_nParamCount = 0x14; // int32
                constexpr std::ptrdiff_t m_nIndex = 0x18; // FuseFunctionIndex_t
                constexpr std::ptrdiff_t m_bIsPure = 0x1A; // bool
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CFuseProgram {
                constexpr std::ptrdiff_t m_programBuffer = 0x0; // CUtlVector<uint8>
                constexpr std::ptrdiff_t m_variablesRead = 0x18; // CUtlVector<FuseVariableIndex_t>
                constexpr std::ptrdiff_t m_variablesWritten = 0x30; // CUtlVector<FuseVariableIndex_t>
                constexpr std::ptrdiff_t m_nMaxTempVarsUsed = 0x48; // int32
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CFuseSymbolTable {
                constexpr std::ptrdiff_t m_constants = 0x0; // CUtlVector<ConstantInfo_t>
                constexpr std::ptrdiff_t m_variables = 0x18; // CUtlVector<VariableInfo_t>
                constexpr std::ptrdiff_t m_functions = 0x30; // CUtlVector<FunctionInfo_t>
                constexpr std::ptrdiff_t m_constantMap = 0x48; // CUtlHashtable<CUtlStringToken,int32>
                constexpr std::ptrdiff_t m_variableMap = 0x68; // CUtlHashtable<CUtlStringToken,int32>
                constexpr std::ptrdiff_t m_functionMap = 0x88; // CUtlHashtable<CUtlStringToken,int32>
            }
            // Parent: None
            // Fields count: 2
            namespace AABB_t {
                constexpr std::ptrdiff_t m_vMinBounds = 0x0; // Vector
                constexpr std::ptrdiff_t m_vMaxBounds = 0xC; // Vector
            }
            // Parent: None
            // Fields count: 2
            namespace PackedAABB_t {
                constexpr std::ptrdiff_t m_nPackedMin = 0x0; // uint32
                constexpr std::ptrdiff_t m_nPackedMax = 0x4; // uint32
            }
            // Parent: None
            // Fields count: 4
            namespace FourQuaternions {
                constexpr std::ptrdiff_t x = 0x0; // fltx4
                constexpr std::ptrdiff_t y = 0x10; // fltx4
                constexpr std::ptrdiff_t z = 0x20; // fltx4
                constexpr std::ptrdiff_t w = 0x30; // fltx4
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace TestResource_t {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeTestResource_t {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeProceduralTestResource_t {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeManifestTestResource_t {
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace ManifestTestResource_t {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_child = 0x8; // CStrongHandle<InfoForResourceTypeManifestTestResource_t>
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCVDataResource {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeIPulseGraphDef {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCTypeScriptResource {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCJavaScriptResource {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeIParticleSystemDefinition {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeIParticleSnapshot {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCAnimData {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCAnimationGroup {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCSequenceGroupData {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeIMaterial2 {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCMorphSetData {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCRenderMesh {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCModel {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCTextureBase {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeIVectorGraphic {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCVSoundEventScriptList {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCVSoundStackScriptList {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCVoiceContainerBase {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCVMixListResource {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCPhysAggregateData {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCVPhysXSurfacePropertiesList {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCEntityLump {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCWorldNode {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeWorld_t {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCVoxelVisibility {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCPostProcessingResource {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCPanoramaStyle {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCPanoramaLayout {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCPanoramaDynamicImages {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCDotaItemDefinitionResource {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCDOTAPatchNotesList {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCDOTANovelsList {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeIAnimGraphModelBinding {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCChoreoSceneFileData {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCDACGameDefsData {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCCompositeMaterialKit {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCGcExportableExternalData {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCSmartProp {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCCSGOEconItem {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCResponseRulesList {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCNmSkeleton {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCNmClip {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCNmGraph {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCNmGraphDataSet {
            }
        }
        // Module: libscenefilecache.so
        // Classes count: 0
        // Enums count: 0
        namespace libscenefilecache {
        }
        // Module: libscenesystem.so
        // Classes count: 9
        // Enums count: 0
        namespace libscenesystem {
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSSDSEndFrameViewInfo {
                constexpr std::ptrdiff_t m_nViewId = 0x0; // uint64
                constexpr std::ptrdiff_t m_ViewName = 0x8; // CUtlString
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSSDSMsg_EndFrame {
                constexpr std::ptrdiff_t m_Views = 0x0; // CUtlVector<CSSDSEndFrameViewInfo>
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace SceneViewId_t {
                constexpr std::ptrdiff_t m_nViewId = 0x0; // uint64
                constexpr std::ptrdiff_t m_nFrameCount = 0x8; // uint64
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSSDSMsg_ViewRender {
                constexpr std::ptrdiff_t m_viewId = 0x0; // SceneViewId_t
                constexpr std::ptrdiff_t m_ViewName = 0x10; // CUtlString
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSSDSMsg_LayerBase {
                constexpr std::ptrdiff_t m_viewId = 0x0; // SceneViewId_t
                constexpr std::ptrdiff_t m_ViewName = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_nLayerIndex = 0x18; // int32
                constexpr std::ptrdiff_t m_nLayerId = 0x20; // uint64
                constexpr std::ptrdiff_t m_LayerName = 0x28; // CUtlString
                constexpr std::ptrdiff_t m_displayText = 0x30; // CUtlString
            }
            // Parent: None
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSSDSMsg_ViewTarget {
                constexpr std::ptrdiff_t m_Name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_TextureId = 0x8; // uint64
                constexpr std::ptrdiff_t m_nWidth = 0x10; // int32
                constexpr std::ptrdiff_t m_nHeight = 0x14; // int32
                constexpr std::ptrdiff_t m_nRequestedWidth = 0x18; // int32
                constexpr std::ptrdiff_t m_nRequestedHeight = 0x1C; // int32
                constexpr std::ptrdiff_t m_nNumMipLevels = 0x20; // int32
                constexpr std::ptrdiff_t m_nDepth = 0x24; // int32
                constexpr std::ptrdiff_t m_nMultisampleNumSamples = 0x28; // int32
                constexpr std::ptrdiff_t m_nFormat = 0x2C; // int32
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSSDSMsg_ViewTargetList {
                constexpr std::ptrdiff_t m_viewId = 0x0; // SceneViewId_t
                constexpr std::ptrdiff_t m_ViewName = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_Targets = 0x18; // CUtlVector<CSSDSMsg_ViewTarget>
            }
            // Parent: CSSDSMsg_LayerBase
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSSDSMsg_PreLayer {
            }
            // Parent: CSSDSMsg_LayerBase
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSSDSMsg_PostLayer {
            }
        }
        // Module: libschemasystem.so
        // Classes count: 6
        // Enums count: 0
        namespace libschemasystem {
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCResourceManifestInternal {
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CExampleSchemaVData_Monomorphic {
                constexpr std::ptrdiff_t m_nExample1 = 0x0; // int32
                constexpr std::ptrdiff_t m_nExample2 = 0x4; // int32
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CExampleSchemaVData_PolymorphicBase {
                constexpr std::ptrdiff_t m_nBase = 0x8; // int32
            }
            // Parent: CExampleSchemaVData_PolymorphicBase
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CExampleSchemaVData_PolymorphicDerivedA {
                constexpr std::ptrdiff_t m_nDerivedA = 0xC; // int32
            }
            // Parent: CExampleSchemaVData_PolymorphicBase
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CExampleSchemaVData_PolymorphicDerivedB {
                constexpr std::ptrdiff_t m_nDerivedB = 0xC; // int32
            }
            // Parent: None
            // Fields count: 22
            namespace CSchemaSystemInternalRegistration {
                constexpr std::ptrdiff_t m_Vector2D = 0x0; // Vector2D
                constexpr std::ptrdiff_t m_Vector = 0x8; // Vector
                constexpr std::ptrdiff_t m_VectorAligned = 0x20; // VectorAligned
                constexpr std::ptrdiff_t m_Quaternion = 0x30; // Quaternion
                constexpr std::ptrdiff_t m_QAngle = 0x40; // QAngle
                constexpr std::ptrdiff_t m_RotationVector = 0x4C; // RotationVector
                constexpr std::ptrdiff_t m_RadianEuler = 0x58; // RadianEuler
                constexpr std::ptrdiff_t m_DegreeEuler = 0x64; // DegreeEuler
                constexpr std::ptrdiff_t m_QuaternionStorage = 0x70; // QuaternionStorage
                constexpr std::ptrdiff_t m_matrix3x4_t = 0x80; // matrix3x4_t
                constexpr std::ptrdiff_t m_matrix3x4a_t = 0xB0; // matrix3x4a_t
                constexpr std::ptrdiff_t m_Color = 0xE0; // Color
                constexpr std::ptrdiff_t m_Vector4D = 0xE4; // Vector4D
                constexpr std::ptrdiff_t m_CTransform = 0x100; // CTransform
                constexpr std::ptrdiff_t m_pKeyValues = 0x120; // KeyValues*
                constexpr std::ptrdiff_t m_CUtlBinaryBlock = 0x128; // CUtlBinaryBlock
                constexpr std::ptrdiff_t m_CUtlString = 0x140; // CUtlString
                constexpr std::ptrdiff_t m_CUtlSymbol = 0x148; // CUtlSymbol
                constexpr std::ptrdiff_t m_stringToken = 0x14C; // CUtlStringToken
                constexpr std::ptrdiff_t m_stringTokenWithStorage = 0x150; // CUtlStringTokenWithStorage
                constexpr std::ptrdiff_t m_ResourceTypes = 0x168; // CResourceArray<CResourcePointer<CResourceString>>
                constexpr std::ptrdiff_t m_KV3 = 0x170; // KeyValues3
            }
        }
        // Module: libserver.so
        // Classes count: 233
        // Enums count: 0
        namespace libserver {
            // Parent: None
            // Fields count: 2
            namespace Extent {
                constexpr std::ptrdiff_t lo = 0x0; // Vector
                constexpr std::ptrdiff_t hi = 0xC; // Vector
            }
            // Parent: None
            // Fields count: 2
            namespace NavGravity_t {
                constexpr std::ptrdiff_t m_vGravity = 0x0; // Vector
                constexpr std::ptrdiff_t m_bDefault = 0xC; // bool
            }
            // Parent: None
            // Fields count: 0
            namespace CNavVolume {
            }
            // Parent: CNavVolume
            // Fields count: 1
            namespace CNavVolumeVector {
                constexpr std::ptrdiff_t m_bHasBeenPreFiltered = 0x58; // bool
            }
            // Parent: CNavVolumeVector
            // Fields count: 0
            namespace CNavVolumeAll {
            }
            // Parent: CNavVolume
            // Fields count: 2
            namespace CNavVolumeSphere {
                constexpr std::ptrdiff_t m_vCenter = 0x50; // Vector
                constexpr std::ptrdiff_t m_flRadius = 0x5C; // float32
            }
            // Parent: CNavVolumeSphere
            // Fields count: 1
            namespace CNavVolumeSphericalShell {
                constexpr std::ptrdiff_t m_flRadiusInner = 0x60; // float32
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MPropertyCustomEditor
            namespace CRangeFloat {
                constexpr std::ptrdiff_t m_pValue = 0x0; // float32[2]
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MPropertyCustomEditor
            namespace CRangeInt {
                constexpr std::ptrdiff_t m_pValue = 0x0; // int32[2]
            }
            // Parent: None
            // Fields count: 0
            namespace CEntityComponent {
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
            // NetworkVarNames: m_pEntity (CEntityIdentity *)
            // NetworkVarNames: m_CScriptComponent (CScriptComponent::Storage_t)
            namespace CEntityInstance {
                constexpr std::ptrdiff_t m_iszPrivateVScripts = 0x8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_pEntity = 0x10; // CEntityIdentity*
                constexpr std::ptrdiff_t m_CScriptComponent = 0x28; // CScriptComponent*
                constexpr std::ptrdiff_t m_bVisibleinPVS = 0x30; // bool
            }
            // Parent: CEntityComponent
            // Fields count: 1
            namespace CScriptComponent {
                constexpr std::ptrdiff_t m_scriptClassName = 0x30; // CUtlSymbolLarge
            }
            // Parent: CEntityComponent
            // Fields count: 2
            namespace CBodyComponent {
                constexpr std::ptrdiff_t m_pSceneNode = 0x8; // CGameSceneNode*
                constexpr std::ptrdiff_t __m_pChainEntity = 0x28; // CNetworkVarChainer
            }
            // Parent: CBodyComponent
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_sceneNode (CGameSceneNode)
            namespace CBodyComponentPoint {
                constexpr std::ptrdiff_t m_sceneNode = 0x60; // CGameSceneNode
                constexpr std::ptrdiff_t __m_pChainEntity = 0x1C0; // CNetworkVarChainer
            }
            // Parent: CBodyComponent
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_skeletonInstance (CSkeletonInstance)
            namespace CBodyComponentSkeletonInstance {
                constexpr std::ptrdiff_t m_skeletonInstance = 0x60; // CSkeletonInstance
                constexpr std::ptrdiff_t __m_pChainEntity = 0x450; // CNetworkVarChainer
            }
            // Parent: CEntityComponent
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_bvDisabledHitGroups (uint32)
            namespace CHitboxComponent {
                constexpr std::ptrdiff_t m_bvDisabledHitGroups = 0x24; // uint32[1]
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
            namespace CLightComponent {
                constexpr std::ptrdiff_t __m_pChainEntity = 0x58; // CNetworkVarChainer
                constexpr std::ptrdiff_t m_Color = 0x95; // Color
                constexpr std::ptrdiff_t m_SecondaryColor = 0x99; // Color
                constexpr std::ptrdiff_t m_flBrightness = 0xA0; // float32
                constexpr std::ptrdiff_t m_flBrightnessScale = 0xA4; // float32
                constexpr std::ptrdiff_t m_flBrightnessMult = 0xA8; // float32
                constexpr std::ptrdiff_t m_flRange = 0xAC; // float32
                constexpr std::ptrdiff_t m_flFalloff = 0xB0; // float32
                constexpr std::ptrdiff_t m_flAttenuation0 = 0xB4; // float32
                constexpr std::ptrdiff_t m_flAttenuation1 = 0xB8; // float32
                constexpr std::ptrdiff_t m_flAttenuation2 = 0xBC; // float32
                constexpr std::ptrdiff_t m_flTheta = 0xC0; // float32
                constexpr std::ptrdiff_t m_flPhi = 0xC4; // float32
                constexpr std::ptrdiff_t m_hLightCookie = 0xC8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_nCascades = 0xD0; // int32
                constexpr std::ptrdiff_t m_nCastShadows = 0xD4; // int32
                constexpr std::ptrdiff_t m_nShadowWidth = 0xD8; // int32
                constexpr std::ptrdiff_t m_nShadowHeight = 0xDC; // int32
                constexpr std::ptrdiff_t m_bRenderDiffuse = 0xE0; // bool
                constexpr std::ptrdiff_t m_nRenderSpecular = 0xE4; // int32
                constexpr std::ptrdiff_t m_bRenderTransmissive = 0xE8; // bool
                constexpr std::ptrdiff_t m_flOrthoLightWidth = 0xEC; // float32
                constexpr std::ptrdiff_t m_flOrthoLightHeight = 0xF0; // float32
                constexpr std::ptrdiff_t m_nStyle = 0xF4; // int32
                constexpr std::ptrdiff_t m_Pattern = 0xF8; // CUtlString
                constexpr std::ptrdiff_t m_nCascadeRenderStaticObjects = 0x100; // int32
                constexpr std::ptrdiff_t m_flShadowCascadeCrossFade = 0x104; // float32
                constexpr std::ptrdiff_t m_flShadowCascadeDistanceFade = 0x108; // float32
                constexpr std::ptrdiff_t m_flShadowCascadeDistance0 = 0x10C; // float32
                constexpr std::ptrdiff_t m_flShadowCascadeDistance1 = 0x110; // float32
                constexpr std::ptrdiff_t m_flShadowCascadeDistance2 = 0x114; // float32
                constexpr std::ptrdiff_t m_flShadowCascadeDistance3 = 0x118; // float32
                constexpr std::ptrdiff_t m_nShadowCascadeResolution0 = 0x11C; // int32
                constexpr std::ptrdiff_t m_nShadowCascadeResolution1 = 0x120; // int32
                constexpr std::ptrdiff_t m_nShadowCascadeResolution2 = 0x124; // int32
                constexpr std::ptrdiff_t m_nShadowCascadeResolution3 = 0x128; // int32
                constexpr std::ptrdiff_t m_bUsesBakedShadowing = 0x12C; // bool
                constexpr std::ptrdiff_t m_nShadowPriority = 0x130; // int32
                constexpr std::ptrdiff_t m_nBakedShadowIndex = 0x134; // int32
                constexpr std::ptrdiff_t m_bRenderToCubemaps = 0x138; // bool
                constexpr std::ptrdiff_t m_nDirectLight = 0x13C; // int32
                constexpr std::ptrdiff_t m_nIndirectLight = 0x140; // int32
                constexpr std::ptrdiff_t m_flFadeMinDist = 0x144; // float32
                constexpr std::ptrdiff_t m_flFadeMaxDist = 0x148; // float32
                constexpr std::ptrdiff_t m_flShadowFadeMinDist = 0x14C; // float32
                constexpr std::ptrdiff_t m_flShadowFadeMaxDist = 0x150; // float32
                constexpr std::ptrdiff_t m_bEnabled = 0x154; // bool
                constexpr std::ptrdiff_t m_bFlicker = 0x155; // bool
                constexpr std::ptrdiff_t m_bPrecomputedFieldsValid = 0x156; // bool
                constexpr std::ptrdiff_t m_vPrecomputedBoundsMins = 0x158; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedBoundsMaxs = 0x164; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin = 0x170; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles = 0x17C; // QAngle
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent = 0x188; // Vector
                constexpr std::ptrdiff_t m_flPrecomputedMaxRange = 0x194; // float32
                constexpr std::ptrdiff_t m_nFogLightingMode = 0x198; // int32
                constexpr std::ptrdiff_t m_flFogContributionStength = 0x19C; // float32
                constexpr std::ptrdiff_t m_flNearClipPlane = 0x1A0; // float32
                constexpr std::ptrdiff_t m_SkyColor = 0x1A4; // Color
                constexpr std::ptrdiff_t m_flSkyIntensity = 0x1A8; // float32
                constexpr std::ptrdiff_t m_SkyAmbientBounce = 0x1AC; // Color
                constexpr std::ptrdiff_t m_bUseSecondaryColor = 0x1B0; // bool
                constexpr std::ptrdiff_t m_bMixedShadows = 0x1B1; // bool
                constexpr std::ptrdiff_t m_flLightStyleStartTime = 0x1B4; // GameTime_t
                constexpr std::ptrdiff_t m_flCapsuleLength = 0x1B8; // float32
                constexpr std::ptrdiff_t m_flMinRoughness = 0x1BC; // float32
                constexpr std::ptrdiff_t m_bPvsModifyEntity = 0x1D0; // bool
            }
            // Parent: None
            // Fields count: 1
            namespace CNetworkTransmitComponent {
                constexpr std::ptrdiff_t m_nTransmitStateOwnedCounter = 0x2C4; // uint8
            }
            // Parent: CEntityComponent
            // Fields count: 5
            namespace CRenderComponent {
                constexpr std::ptrdiff_t __m_pChainEntity = 0x10; // CNetworkVarChainer
                constexpr std::ptrdiff_t m_bIsRenderingWithViewModels = 0x50; // bool
                constexpr std::ptrdiff_t m_nSplitscreenFlags = 0x54; // uint32
                constexpr std::ptrdiff_t m_bEnableRendering = 0x60; // bool
                constexpr std::ptrdiff_t m_bInterpolationReadyToDraw = 0xC0; // bool
            }
            // Parent: None
            // Fields count: 0
            namespace CAnimEventListenerBase {
            }
            // Parent: CAnimEventListenerBase
            // Fields count: 0
            namespace CAnimEventListener {
            }
            // Parent: CAnimEventListenerBase
            // Fields count: 0
            namespace CAnimEventQueueListener {
            }
            // Parent: None
            // Fields count: 1
            namespace CBuoyancyHelper {
                constexpr std::ptrdiff_t m_flFluidDensity = 0x18; // float32
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MPropertyCustomEditor
            namespace CSkillFloat {
                constexpr std::ptrdiff_t m_pValue = 0x0; // float32[4]
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MPropertyCustomEditor
            namespace CSkillInt {
                constexpr std::ptrdiff_t m_pValue = 0x0; // int32[4]
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSkillDamage {
                constexpr std::ptrdiff_t m_flDamage = 0x0; // CSkillFloat
                constexpr std::ptrdiff_t m_flPhysicsForceDamage = 0x10; // float32
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MPropertyCustomEditor
            namespace CRemapFloat {
                constexpr std::ptrdiff_t m_pValue = 0x0; // float32[4]
            }
            // Parent: None
            // Fields count: 2
            namespace CScriptUniformRandomStream {
                constexpr std::ptrdiff_t m_hScriptScope = 0x8; // HSCRIPT
                constexpr std::ptrdiff_t m_nInitialSeed = 0x9C; // int32
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            namespace CBasePlayerControllerAPI {
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // NetworkVarNames: nType (FixAngleSet_t)
            // NetworkVarNames: qAngle (QAngle)
            // NetworkVarNames: nIndex (uint32)
            namespace ViewAngleServerChange_t {
                constexpr std::ptrdiff_t nType = 0x30; // FixAngleSet_t
                constexpr std::ptrdiff_t qAngle = 0x34; // QAngle
                constexpr std::ptrdiff_t nIndex = 0x40; // uint32
            }
            // Parent: None
            // Fields count: 2
            namespace CBreakableStageHelper {
                constexpr std::ptrdiff_t m_nCurrentStage = 0x8; // int32
                constexpr std::ptrdiff_t m_nStageCount = 0xC; // int32
            }
            // Parent: None
            // Fields count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CommandToolCommand_t {
                constexpr std::ptrdiff_t m_bEnabled = 0x0; // bool
                constexpr std::ptrdiff_t m_bOpened = 0x1; // bool
                constexpr std::ptrdiff_t m_InternalId = 0x4; // uint32
                constexpr std::ptrdiff_t m_ShortName = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_ExecMode = 0x10; // CommandExecMode_t
                constexpr std::ptrdiff_t m_SpawnGroup = 0x18; // CUtlString
                constexpr std::ptrdiff_t m_PeriodicExecDelay = 0x20; // float32
                constexpr std::ptrdiff_t m_SpecType = 0x24; // CommandEntitySpecType_t
                constexpr std::ptrdiff_t m_EntitySpec = 0x28; // CUtlString
                constexpr std::ptrdiff_t m_Commands = 0x30; // CUtlString
                constexpr std::ptrdiff_t m_SetDebugBits = 0x38; // DebugOverlayBits_t
                constexpr std::ptrdiff_t m_ClearDebugBits = 0x40; // DebugOverlayBits_t
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            namespace CDynamicPropAPI {
            }
            // Parent: None
            // Fields count: 1
            namespace CPlayerPawnComponent {
                constexpr std::ptrdiff_t __m_pChainEntity = 0x8; // CNetworkVarChainer
            }
            // Parent: None
            // Fields count: 1
            namespace CPlayerControllerComponent {
                constexpr std::ptrdiff_t __m_pChainEntity = 0x8; // CNetworkVarChainer
            }
            // Parent: CPlayerPawnComponent
            // Fields count: 0
            namespace CPlayer_AutoaimServices {
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
            namespace audioparams_t {
                constexpr std::ptrdiff_t localSound = 0x8; // Vector[8]
                constexpr std::ptrdiff_t soundscapeIndex = 0x68; // int32
                constexpr std::ptrdiff_t localBits = 0x6C; // uint8
                constexpr std::ptrdiff_t soundscapeEntityListIndex = 0x70; // int32
                constexpr std::ptrdiff_t soundEventHash = 0x74; // uint32
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
            namespace CPlayer_CameraServices {
                constexpr std::ptrdiff_t m_vecCsViewPunchAngle = 0x40; // QAngle
                constexpr std::ptrdiff_t m_nCsViewPunchAngleTick = 0x4C; // GameTick_t
                constexpr std::ptrdiff_t m_flCsViewPunchAngleTickRatio = 0x50; // float32
                constexpr std::ptrdiff_t m_PlayerFog = 0x58; // fogplayerparams_t
                constexpr std::ptrdiff_t m_hColorCorrectionCtrl = 0x98; // CHandle<CColorCorrection>
                constexpr std::ptrdiff_t m_hViewEntity = 0x9C; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hTonemapController = 0xA0; // CHandle<CTonemapController2>
                constexpr std::ptrdiff_t m_audio = 0xA8; // audioparams_t
                constexpr std::ptrdiff_t m_PostProcessingVolumes = 0x120; // CNetworkUtlVectorBase<CHandle<CPostProcessingVolume>>
                constexpr std::ptrdiff_t m_flOldPlayerZ = 0x138; // float32
                constexpr std::ptrdiff_t m_flOldPlayerViewOffsetZ = 0x13C; // float32
                constexpr std::ptrdiff_t m_hTriggerSoundscapeList = 0x158; // CUtlVector<CHandle<CEnvSoundscapeTriggerable>>
            }
            // Parent: CPlayerPawnComponent
            // Fields count: 0
            namespace CPlayer_FlashlightServices {
            }
            // Parent: CPlayerPawnComponent
            // Fields count: 0
            namespace CPlayer_ItemServices {
            }
            // Parent: CPlayerPawnComponent
            // Fields count: 15
            //
            // Metadata:
            // NetworkVarNames: m_nToggleButtonDownMask (ButtonBitMask_t)
            // NetworkVarNames: m_flMaxspeed (float32)
            // NetworkVarNames: m_arrForceSubtickMoveWhen (float32)
            namespace CPlayer_MovementServices {
                constexpr std::ptrdiff_t m_nImpulse = 0x40; // int32
                constexpr std::ptrdiff_t m_nButtons = 0x48; // CInButtonState
                constexpr std::ptrdiff_t m_nQueuedButtonDownMask = 0x68; // uint64
                constexpr std::ptrdiff_t m_nQueuedButtonChangeMask = 0x70; // uint64
                constexpr std::ptrdiff_t m_nButtonDoublePressed = 0x78; // uint64
                constexpr std::ptrdiff_t m_pButtonPressedCmdNumber = 0x80; // uint32[64]
                constexpr std::ptrdiff_t m_nLastCommandNumberProcessed = 0x180; // uint32
                constexpr std::ptrdiff_t m_nToggleButtonDownMask = 0x188; // uint64
                constexpr std::ptrdiff_t m_flMaxspeed = 0x198; // float32
                constexpr std::ptrdiff_t m_arrForceSubtickMoveWhen = 0x19C; // float32[4]
                constexpr std::ptrdiff_t m_flForwardMove = 0x1AC; // float32
                constexpr std::ptrdiff_t m_flLeftMove = 0x1B0; // float32
                constexpr std::ptrdiff_t m_flUpMove = 0x1B4; // float32
                constexpr std::ptrdiff_t m_vecLastMovementImpulses = 0x1B8; // Vector
                constexpr std::ptrdiff_t m_vecOldViewAngles = 0x1C4; // QAngle
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
            namespace CPlayer_MovementServices_Humanoid {
                constexpr std::ptrdiff_t m_flStepSoundTime = 0x1D8; // float32
                constexpr std::ptrdiff_t m_flFallVelocity = 0x1DC; // float32
                constexpr std::ptrdiff_t m_bInCrouch = 0x1E0; // bool
                constexpr std::ptrdiff_t m_nCrouchState = 0x1E4; // uint32
                constexpr std::ptrdiff_t m_flCrouchTransitionStartTime = 0x1E8; // GameTime_t
                constexpr std::ptrdiff_t m_bDucked = 0x1EC; // bool
                constexpr std::ptrdiff_t m_bDucking = 0x1ED; // bool
                constexpr std::ptrdiff_t m_bInDuckJump = 0x1EE; // bool
                constexpr std::ptrdiff_t m_groundNormal = 0x1F0; // Vector
                constexpr std::ptrdiff_t m_flSurfaceFriction = 0x1FC; // float32
                constexpr std::ptrdiff_t m_surfaceProps = 0x200; // CUtlStringToken
                constexpr std::ptrdiff_t m_nStepside = 0x210; // int32
                constexpr std::ptrdiff_t m_iTargetVolume = 0x214; // int32
                constexpr std::ptrdiff_t m_vecSmoothedVelocity = 0x218; // Vector
            }
            // Parent: CPlayerPawnComponent
            // Fields count: 4
            //
            // Metadata:
            // NetworkVarNames: m_iObserverMode (uint8)
            // NetworkVarNames: m_hObserverTarget (CHandle< CBaseEntity>)
            namespace CPlayer_ObserverServices {
                constexpr std::ptrdiff_t m_iObserverMode = 0x40; // uint8
                constexpr std::ptrdiff_t m_hObserverTarget = 0x44; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_iObserverLastMode = 0x48; // ObserverMode_t
                constexpr std::ptrdiff_t m_bForcedObserverMode = 0x4C; // bool
            }
            // Parent: CPlayerPawnComponent
            // Fields count: 0
            namespace CPlayer_UseServices {
            }
            // Parent: CPlayerPawnComponent
            // Fields count: 0
            namespace CPlayer_WaterServices {
            }
            // Parent: CPlayerPawnComponent
            // Fields count: 5
            //
            // Metadata:
            // NetworkVarNames: m_hMyWeapons (CHandle< CBasePlayerWeapon >)
            // NetworkVarNames: m_hActiveWeapon (CHandle< CBasePlayerWeapon>)
            // NetworkVarNames: m_hLastWeapon (CHandle< CBasePlayerWeapon>)
            // NetworkVarNames: m_iAmmo (uint16)
            namespace CPlayer_WeaponServices {
                constexpr std::ptrdiff_t m_hMyWeapons = 0x40; // CNetworkUtlVectorBase<CHandle<CBasePlayerWeapon>>
                constexpr std::ptrdiff_t m_hActiveWeapon = 0x58; // CHandle<CBasePlayerWeapon>
                constexpr std::ptrdiff_t m_hLastWeapon = 0x5C; // CHandle<CBasePlayerWeapon>
                constexpr std::ptrdiff_t m_iAmmo = 0x60; // uint16[32]
                constexpr std::ptrdiff_t m_bPreventWeaponPickup = 0xA0; // bool
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace AmmoTypeInfo_t {
                constexpr std::ptrdiff_t m_nMaxCarry = 0x10; // int32
                constexpr std::ptrdiff_t m_nSplashSize = 0x1C; // CRangeInt
                constexpr std::ptrdiff_t m_nFlags = 0x24; // AmmoFlags_t
                constexpr std::ptrdiff_t m_flMass = 0x28; // float32
                constexpr std::ptrdiff_t m_flSpeed = 0x2C; // CRangeFloat
            }
            // Parent: None
            // Fields count: 0
            namespace CAnimGraphControllerBase {
            }
            // Parent: CBodyComponentSkeletonInstance
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_animationController (CBaseAnimGraphController)
            namespace CBodyComponentBaseAnimGraph {
                constexpr std::ptrdiff_t m_animationController = 0x478; // CBaseAnimGraphController
                constexpr std::ptrdiff_t __m_pChainEntity = 0x980; // CNetworkVarChainer
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_ID (CUtlStringToken)
            // NetworkVarNames: m_Values (Vector4D)
            namespace EntityRenderAttribute_t {
                constexpr std::ptrdiff_t m_ID = 0x30; // CUtlStringToken
                constexpr std::ptrdiff_t m_Values = 0x34; // Vector4D
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // NetworkVarNames: m_Handle (ModelConfigHandle_t)
            // NetworkVarNames: m_Name (string_t)
            // NetworkVarNames: m_AssociatedEntities (CHandle< CBaseModelEntity >)
            // NetworkVarNames: m_AssociatedEntityNames (string_t)
            namespace ActiveModelConfig_t {
                constexpr std::ptrdiff_t m_Handle = 0x28; // ModelConfigHandle_t
                constexpr std::ptrdiff_t m_Name = 0x30; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_AssociatedEntities = 0x38; // CNetworkUtlVectorBase<CHandle<CBaseModelEntity>>
                constexpr std::ptrdiff_t m_AssociatedEntityNames = 0x50; // CNetworkUtlVectorBase<CUtlSymbolLarge>
            }
            // Parent: CBodyComponentSkeletonInstance
            // Fields count: 1
            namespace CBodyComponentBaseModelEntity {
                constexpr std::ptrdiff_t __m_pChainEntity = 0x478; // CNetworkVarChainer
            }
            // Parent: None
            // Fields count: 2
            namespace CRopeOverlapHit {
                constexpr std::ptrdiff_t m_hEntity = 0x0; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_vecOverlappingLinks = 0x8; // CUtlVector<int32>
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_hOwner (CEntityHandle)
            // NetworkVarNames: m_name (CUtlStringToken)
            namespace CGameSceneNodeHandle {
                constexpr std::ptrdiff_t m_hOwner = 0x8; // CEntityHandle
                constexpr std::ptrdiff_t m_name = 0xC; // CUtlStringToken
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
            namespace CGameSceneNode {
                constexpr std::ptrdiff_t m_nodeToWorld = 0x10; // CTransform
                constexpr std::ptrdiff_t m_pOwner = 0x30; // CEntityInstance*
                constexpr std::ptrdiff_t m_pParent = 0x38; // CGameSceneNode*
                constexpr std::ptrdiff_t m_pChild = 0x40; // CGameSceneNode*
                constexpr std::ptrdiff_t m_pNextSibling = 0x48; // CGameSceneNode*
                constexpr std::ptrdiff_t m_hParent = 0x70; // CGameSceneNodeHandle
                constexpr std::ptrdiff_t m_vecOrigin = 0x80; // CNetworkOriginCellCoordQuantizedVector
                constexpr std::ptrdiff_t m_angRotation = 0xB8; // QAngle
                constexpr std::ptrdiff_t m_flScale = 0xC4; // float32
                constexpr std::ptrdiff_t m_vecAbsOrigin = 0xC8; // Vector
                constexpr std::ptrdiff_t m_angAbsRotation = 0xD4; // QAngle
                constexpr std::ptrdiff_t m_flAbsScale = 0xE0; // float32
                constexpr std::ptrdiff_t m_nParentAttachmentOrBone = 0xE4; // int16
                constexpr std::ptrdiff_t m_bDebugAbsOriginChanges = 0xE6; // bool
                constexpr std::ptrdiff_t m_bDormant = 0xE7; // bool
                constexpr std::ptrdiff_t m_bForceParentToBeNetworked = 0xE8; // bool
                constexpr std::ptrdiff_t m_bDirtyHierarchy = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bDirtyBoneMergeInfo = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bNetworkedPositionChanged = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bNetworkedAnglesChanged = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bNetworkedScaleChanged = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bWillBeCallingPostDataUpdate = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bBoneMergeFlex = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_nLatchAbsOrigin = 0x0; // bitfield:2
                constexpr std::ptrdiff_t m_bDirtyBoneMergeBoneToRoot = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_nHierarchicalDepth = 0xEB; // uint8
                constexpr std::ptrdiff_t m_nHierarchyType = 0xEC; // uint8
                constexpr std::ptrdiff_t m_nDoNotSetAnimTimeInInvalidatePhysicsCount = 0xED; // uint8
                constexpr std::ptrdiff_t m_name = 0xF0; // CUtlStringToken
                constexpr std::ptrdiff_t m_hierarchyAttachName = 0x140; // CUtlStringToken
                constexpr std::ptrdiff_t m_flZOffset = 0x144; // float32
                constexpr std::ptrdiff_t m_vRenderOrigin = 0x148; // Vector
            }
            // Parent: None
            // Fields count: 0
            namespace IChoreoServices {
            }
            // Parent: None
            // Fields count: 1
            namespace CInButtonState {
                constexpr std::ptrdiff_t m_pButtonStates = 0x8; // uint64[3]
            }
            // Parent: None
            // Fields count: 6
            namespace SequenceHistory_t {
                constexpr std::ptrdiff_t m_hSequence = 0x0; // HSequence
                constexpr std::ptrdiff_t m_flSeqStartTime = 0x4; // GameTime_t
                constexpr std::ptrdiff_t m_flSeqFixedCycle = 0x8; // float32
                constexpr std::ptrdiff_t m_nSeqLoopMode = 0xC; // AnimLoopMode_t
                constexpr std::ptrdiff_t m_flPlaybackRate = 0x10; // float32
                constexpr std::ptrdiff_t m_flCyclesPerSecond = 0x14; // float32
            }
            // Parent: None
            // Fields count: 0
            namespace ISkeletonAnimationController {
            }
            // Parent: ISkeletonAnimationController
            // Fields count: 1
            namespace CSkeletonAnimationController {
                constexpr std::ptrdiff_t m_pSkeletonInstance = 0x8; // CSkeletonInstance*
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // NetworkVarNames: m_hSequence (HSequence)
            // NetworkVarNames: m_flPrevCycle (float32)
            // NetworkVarNames: m_flCycle (float32)
            namespace CNetworkedSequenceOperation {
                constexpr std::ptrdiff_t m_hSequence = 0x8; // HSequence
                constexpr std::ptrdiff_t m_flPrevCycle = 0xC; // float32
                constexpr std::ptrdiff_t m_flCycle = 0x10; // float32
                constexpr std::ptrdiff_t m_flWeight = 0x14; // CNetworkedQuantizedFloat
                constexpr std::ptrdiff_t m_bSequenceChangeNetworked = 0x1C; // bool
                constexpr std::ptrdiff_t m_bDiscontinuity = 0x1D; // bool
                constexpr std::ptrdiff_t m_flPrevCycleFromDiscontinuity = 0x20; // float32
                constexpr std::ptrdiff_t m_flPrevCycleForAnimEventDetection = 0x24; // float32
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // NetworkVarNames: m_hModel (HModelStrong)
            // NetworkVarNames: m_bClientClothCreationSuppressed (bool)
            // NetworkVarNames: m_MeshGroupMask (MeshGroupMask_t)
            // NetworkVarNames: m_nIdealMotionType (int8)
            namespace CModelState {
                constexpr std::ptrdiff_t m_hModel = 0xA0; // CStrongHandle<InfoForResourceTypeCModel>
                constexpr std::ptrdiff_t m_ModelName = 0xA8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bClientClothCreationSuppressed = 0xE8; // bool
                constexpr std::ptrdiff_t m_MeshGroupMask = 0x180; // uint64
                constexpr std::ptrdiff_t m_nIdealMotionType = 0x212; // int8
                constexpr std::ptrdiff_t m_nForceLOD = 0x213; // int8
                constexpr std::ptrdiff_t m_nClothUpdateFlags = 0x214; // int8
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
            namespace CSkeletonInstance {
                constexpr std::ptrdiff_t m_modelState = 0x160; // CModelState
                constexpr std::ptrdiff_t m_bIsAnimationEnabled = 0x380; // bool
                constexpr std::ptrdiff_t m_bUseParentRenderBounds = 0x381; // bool
                constexpr std::ptrdiff_t m_bDisableSolidCollisionsForHierarchy = 0x382; // bool
                constexpr std::ptrdiff_t m_bDirtyMotionType = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bIsGeneratingLatchedParentSpaceState = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_materialGroup = 0x384; // CUtlStringToken
                constexpr std::ptrdiff_t m_nHitboxSet = 0x388; // uint8
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_timestamp (GameTime_t)
            // NetworkVarNames: m_nWorldGroupId (WorldGroupId_t)
            namespace IntervalTimer {
                constexpr std::ptrdiff_t m_timestamp = 0x8; // GameTime_t
                constexpr std::ptrdiff_t m_nWorldGroupId = 0xC; // WorldGroupId_t
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // NetworkVarNames: m_duration (float32)
            // NetworkVarNames: m_timestamp (GameTime_t)
            // NetworkVarNames: m_timescale (float32)
            // NetworkVarNames: m_nWorldGroupId (WorldGroupId_t)
            namespace CountdownTimer {
                constexpr std::ptrdiff_t m_duration = 0x8; // float32
                constexpr std::ptrdiff_t m_timestamp = 0xC; // GameTime_t
                constexpr std::ptrdiff_t m_timescale = 0x10; // float32
                constexpr std::ptrdiff_t m_nWorldGroupId = 0x14; // WorldGroupId_t
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // NetworkVarNames: m_duration (float32)
            // NetworkVarNames: m_timestamp (float32)
            // NetworkVarNames: m_timescale (float32)
            namespace EngineCountdownTimer {
                constexpr std::ptrdiff_t m_duration = 0x8; // float32
                constexpr std::ptrdiff_t m_timestamp = 0xC; // float32
                constexpr std::ptrdiff_t m_timescale = 0x10; // float32
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
            namespace CTimeline {
                constexpr std::ptrdiff_t m_flValues = 0x10; // float32[64]
                constexpr std::ptrdiff_t m_nValueCounts = 0x110; // int32[64]
                constexpr std::ptrdiff_t m_nBucketCount = 0x210; // int32
                constexpr std::ptrdiff_t m_flInterval = 0x214; // float32
                constexpr std::ptrdiff_t m_flFinalValue = 0x218; // float32
                constexpr std::ptrdiff_t m_nCompressionType = 0x21C; // TimelineCompression_t
                constexpr std::ptrdiff_t m_bStopped = 0x220; // bool
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
            namespace CAnimGraphNetworkedVariables {
                constexpr std::ptrdiff_t m_PredNetBoolVariables = 0x8; // CNetworkUtlVectorBase<uint32>
                constexpr std::ptrdiff_t m_PredNetByteVariables = 0x20; // CNetworkUtlVectorBase<uint8>
                constexpr std::ptrdiff_t m_PredNetUInt16Variables = 0x38; // CNetworkUtlVectorBase<uint16>
                constexpr std::ptrdiff_t m_PredNetIntVariables = 0x50; // CNetworkUtlVectorBase<int32>
                constexpr std::ptrdiff_t m_PredNetUInt32Variables = 0x68; // CNetworkUtlVectorBase<uint32>
                constexpr std::ptrdiff_t m_PredNetUInt64Variables = 0x80; // CNetworkUtlVectorBase<uint64>
                constexpr std::ptrdiff_t m_PredNetFloatVariables = 0x98; // CNetworkUtlVectorBase<float32>
                constexpr std::ptrdiff_t m_PredNetVectorVariables = 0xB0; // CNetworkUtlVectorBase<Vector>
                constexpr std::ptrdiff_t m_PredNetQuaternionVariables = 0xC8; // CNetworkUtlVectorBase<Quaternion>
                constexpr std::ptrdiff_t m_PredNetGlobalSymbolVariables = 0xE0; // CNetworkUtlVectorBase<CGlobalSymbol>
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetBoolVariables = 0xF8; // CNetworkUtlVectorBase<uint32>
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetByteVariables = 0x110; // CNetworkUtlVectorBase<uint8>
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetUInt16Variables = 0x128; // CNetworkUtlVectorBase<uint16>
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetIntVariables = 0x140; // CNetworkUtlVectorBase<int32>
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetUInt32Variables = 0x158; // CNetworkUtlVectorBase<uint32>
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetUInt64Variables = 0x170; // CNetworkUtlVectorBase<uint64>
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetFloatVariables = 0x188; // CNetworkUtlVectorBase<float32>
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetVectorVariables = 0x1A0; // CNetworkUtlVectorBase<Vector>
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetQuaternionVariables = 0x1B8; // CNetworkUtlVectorBase<Quaternion>
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetGlobalSymbolVariables = 0x1D0; // CNetworkUtlVectorBase<CGlobalSymbol>
                constexpr std::ptrdiff_t m_nBoolVariablesCount = 0x1E8; // int32
                constexpr std::ptrdiff_t m_nOwnerOnlyBoolVariablesCount = 0x1EC; // int32
                constexpr std::ptrdiff_t m_nRandomSeedOffset = 0x1F0; // int32
                constexpr std::ptrdiff_t m_flLastTeleportTime = 0x1F4; // float32
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPropertyCustomFGDType
            namespace CFootstepTableHandle {
            }
            // Parent: None
            // Fields count: 8
            namespace ResponseFollowup {
                constexpr std::ptrdiff_t followup_concept = 0x0; // char*
                constexpr std::ptrdiff_t followup_contexts = 0x8; // char*
                constexpr std::ptrdiff_t followup_delay = 0x10; // float32
                constexpr std::ptrdiff_t followup_target = 0x14; // char*
                constexpr std::ptrdiff_t followup_entityiotarget = 0x1C; // char*
                constexpr std::ptrdiff_t followup_entityioinput = 0x24; // char*
                constexpr std::ptrdiff_t followup_entityiodelay = 0x2C; // float32
                constexpr std::ptrdiff_t bFired = 0x30; // bool
            }
            // Parent: None
            // Fields count: 3
            namespace ResponseParams {
                constexpr std::ptrdiff_t odds = 0x10; // int16
                constexpr std::ptrdiff_t flags = 0x12; // int16
                constexpr std::ptrdiff_t m_pFollowup = 0x14; // ResponseFollowup*
            }
            // Parent: None
            // Fields count: 2
            namespace CResponseCriteriaSet {
                constexpr std::ptrdiff_t m_nNumPrefixedContexts = 0x28; // int32
                constexpr std::ptrdiff_t m_bOverrideOnAppend = 0x2C; // bool
            }
            // Parent: None
            // Fields count: 10
            namespace CRR_Response {
                constexpr std::ptrdiff_t m_Type = 0x0; // uint8
                constexpr std::ptrdiff_t m_szResponseName = 0x1; // char[192]
                constexpr std::ptrdiff_t m_szMatchingRule = 0xC1; // char[128]
                constexpr std::ptrdiff_t m_Params = 0x141; // ResponseParams
                constexpr std::ptrdiff_t m_fMatchScore = 0x160; // float32
                constexpr std::ptrdiff_t m_szSpeakerContext = 0x168; // char*
                constexpr std::ptrdiff_t m_szWorldContext = 0x170; // char*
                constexpr std::ptrdiff_t m_Followup = 0x178; // ResponseFollowup
                constexpr std::ptrdiff_t m_pchCriteriaNames = 0x1B0; // CUtlVector<CUtlSymbol>
                constexpr std::ptrdiff_t m_pchCriteriaValues = 0x1C8; // CUtlVector<char*>
            }
            // Parent: None
            // Fields count: 2
            namespace ConceptHistory_t {
                constexpr std::ptrdiff_t timeSpoken = 0x0; // float32
                constexpr std::ptrdiff_t m_response = 0x8; // CRR_Response
            }
            // Parent: None
            // Fields count: 9
            namespace CAI_Expresser {
                constexpr std::ptrdiff_t m_flStopTalkTime = 0x38; // GameTime_t
                constexpr std::ptrdiff_t m_flStopTalkTimeWithoutDelay = 0x3C; // GameTime_t
                constexpr std::ptrdiff_t m_flBlockedTalkTime = 0x40; // GameTime_t
                constexpr std::ptrdiff_t m_voicePitch = 0x44; // int32
                constexpr std::ptrdiff_t m_flLastTimeAcceptedSpeak = 0x48; // GameTime_t
                constexpr std::ptrdiff_t m_bAllowSpeakingInterrupts = 0x4C; // bool
                constexpr std::ptrdiff_t m_bConsiderSceneInvolvementAsSpeech = 0x4D; // bool
                constexpr std::ptrdiff_t m_nLastSpokenPriority = 0x50; // int32
                constexpr std::ptrdiff_t m_pOuter = 0x58; // CBaseFlex*
            }
            // Parent: None
            // Fields count: 1
            namespace CResponseQueue {
                constexpr std::ptrdiff_t m_ExpresserTargets = 0x48; // CUtlVector<CAI_Expresser*>
            }
            // Parent: None
            // Fields count: 5
            namespace CResponseQueue__CDeferredResponse {
                constexpr std::ptrdiff_t m_contexts = 0x8; // CResponseCriteriaSet
                constexpr std::ptrdiff_t m_fDispatchTime = 0x38; // float32
                constexpr std::ptrdiff_t m_hIssuer = 0x3C; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_response = 0x48; // CRR_Response
                constexpr std::ptrdiff_t m_bResponseValid = 0x228; // bool
            }
            // Parent: CAI_Expresser
            // Fields count: 1
            namespace CAI_ExpresserWithFollowup {
                constexpr std::ptrdiff_t m_pPostponedFollowup = 0x60; // ResponseFollowup*
            }
            // Parent: CAI_ExpresserWithFollowup
            // Fields count: 1
            namespace CMultiplayer_Expresser {
                constexpr std::ptrdiff_t m_bAllowMultipleScenes = 0x70; // bool
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            namespace CBaseEntityAPI {
            }
            // Parent: None
            // Fields count: 10
            namespace CCommentarySystem {
                constexpr std::ptrdiff_t m_bCommentaryConvarsChanging = 0x11; // bool
                constexpr std::ptrdiff_t m_bCommentaryEnabledMidGame = 0x12; // bool
                constexpr std::ptrdiff_t m_flNextTeleportTime = 0x14; // GameTime_t
                constexpr std::ptrdiff_t m_iTeleportStage = 0x18; // int32
                constexpr std::ptrdiff_t m_bCheatState = 0x1C; // bool
                constexpr std::ptrdiff_t m_bIsFirstSpawnGroupToLoad = 0x1D; // bool
                constexpr std::ptrdiff_t m_hCurrentNode = 0x38; // CHandle<CPointCommentaryNode>
                constexpr std::ptrdiff_t m_hActiveCommentaryNode = 0x3C; // CHandle<CPointCommentaryNode>
                constexpr std::ptrdiff_t m_hLastCommentaryNode = 0x40; // CHandle<CPointCommentaryNode>
                constexpr std::ptrdiff_t m_vecNodes = 0x48; // CUtlVector<CHandle<CPointCommentaryNode>>
            }
            // Parent: None
            // Fields count: 1
            namespace CPhysicsShake {
                constexpr std::ptrdiff_t m_force = 0x8; // Vector
            }
            // Parent: None
            // Fields count: 16
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CGameScriptedMoveData {
                constexpr std::ptrdiff_t m_vAccumulatedRootMotion = 0x0; // Vector
                constexpr std::ptrdiff_t m_vDest = 0xC; // Vector
                constexpr std::ptrdiff_t m_vSrc = 0x18; // Vector
                constexpr std::ptrdiff_t m_angSrc = 0x24; // QAngle
                constexpr std::ptrdiff_t m_angDst = 0x30; // QAngle
                constexpr std::ptrdiff_t m_angCurrent = 0x3C; // QAngle
                constexpr std::ptrdiff_t m_flAngRate = 0x48; // float32
                constexpr std::ptrdiff_t m_flDuration = 0x4C; // float32
                constexpr std::ptrdiff_t m_flStartTime = 0x50; // GameTime_t
                constexpr std::ptrdiff_t m_bActive = 0x54; // bool
                constexpr std::ptrdiff_t m_bTeleportOnEnd = 0x55; // bool
                constexpr std::ptrdiff_t m_bIgnoreRotation = 0x56; // bool
                constexpr std::ptrdiff_t m_nType = 0x58; // ScriptedMoveType_t
                constexpr std::ptrdiff_t m_bSuccess = 0x5C; // bool
                constexpr std::ptrdiff_t m_nForcedCrouchState = 0x60; // ForcedCrouchState_t
                constexpr std::ptrdiff_t m_bIgnoreCollisions = 0x64; // bool
            }
            // Parent: IChoreoServices
            // Fields count: 5
            namespace CGameChoreoServices {
                constexpr std::ptrdiff_t m_hOwner = 0x8; // CHandle<CBaseAnimGraph>
                constexpr std::ptrdiff_t m_hScriptedSequence = 0xC; // CHandle<CScriptedSequence>
                constexpr std::ptrdiff_t m_scriptState = 0x10; // IChoreoServices::ScriptState_t
                constexpr std::ptrdiff_t m_choreoState = 0x14; // IChoreoServices::ChoreoState_t
                constexpr std::ptrdiff_t m_flTimeStartedState = 0x18; // GameTime_t
            }
            // Parent: None
            // Fields count: 10
            namespace HullFlags_t {
                constexpr std::ptrdiff_t m_bHull_Human = 0x0; // bool
                constexpr std::ptrdiff_t m_bHull_SmallCentered = 0x1; // bool
                constexpr std::ptrdiff_t m_bHull_WideHuman = 0x2; // bool
                constexpr std::ptrdiff_t m_bHull_Tiny = 0x3; // bool
                constexpr std::ptrdiff_t m_bHull_Medium = 0x4; // bool
                constexpr std::ptrdiff_t m_bHull_TinyCentered = 0x5; // bool
                constexpr std::ptrdiff_t m_bHull_Large = 0x6; // bool
                constexpr std::ptrdiff_t m_bHull_LargeCentered = 0x7; // bool
                constexpr std::ptrdiff_t m_bHull_MediumTall = 0x8; // bool
                constexpr std::ptrdiff_t m_bHull_Small = 0x9; // bool
            }
            // Parent: None
            // Fields count: 4
            namespace CConstantForceController {
                constexpr std::ptrdiff_t m_linear = 0xC; // Vector
                constexpr std::ptrdiff_t m_angular = 0x18; // RotationVector
                constexpr std::ptrdiff_t m_linearSave = 0x24; // Vector
                constexpr std::ptrdiff_t m_angularSave = 0x30; // RotationVector
            }
            // Parent: None
            // Fields count: 4
            namespace CMotorController {
                constexpr std::ptrdiff_t m_speed = 0x8; // float32
                constexpr std::ptrdiff_t m_maxTorque = 0xC; // float32
                constexpr std::ptrdiff_t m_axis = 0x10; // Vector
                constexpr std::ptrdiff_t m_inertiaFactor = 0x1C; // float32
            }
            // Parent: None
            // Fields count: 4
            namespace CSoundEnvelope {
                constexpr std::ptrdiff_t m_current = 0x0; // float32
                constexpr std::ptrdiff_t m_target = 0x4; // float32
                constexpr std::ptrdiff_t m_rate = 0x8; // float32
                constexpr std::ptrdiff_t m_forceupdate = 0xC; // bool
            }
            // Parent: None
            // Fields count: 2
            namespace CCopyRecipientFilter {
                constexpr std::ptrdiff_t m_Flags = 0x8; // int32
                constexpr std::ptrdiff_t m_Recipients = 0x10; // CUtlVector<CPlayerSlot>
            }
            // Parent: None
            // Fields count: 13
            namespace CSoundPatch {
                constexpr std::ptrdiff_t m_pitch = 0x8; // CSoundEnvelope
                constexpr std::ptrdiff_t m_volume = 0x18; // CSoundEnvelope
                constexpr std::ptrdiff_t m_shutdownTime = 0x30; // float32
                constexpr std::ptrdiff_t m_flLastTime = 0x34; // float32
                constexpr std::ptrdiff_t m_iszSoundScriptName = 0x38; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hEnt = 0x40; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_soundEntityIndex = 0x44; // CEntityIndex
                constexpr std::ptrdiff_t m_soundOrigin = 0x48; // Vector
                constexpr std::ptrdiff_t m_isPlaying = 0x54; // int32
                constexpr std::ptrdiff_t m_Filter = 0x58; // CCopyRecipientFilter
                constexpr std::ptrdiff_t m_flCloseCaptionDuration = 0x80; // float32
                constexpr std::ptrdiff_t m_bUpdatedSoundOrigin = 0x84; // bool
                constexpr std::ptrdiff_t m_iszClassName = 0x88; // CUtlSymbolLarge
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            namespace CTakeDamageInfoAPI {
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MPulseInstanceDomainInfo
            // MPulseLibraryBindings
            // MPulseDomainOptInFeatureTag
            namespace CPulseGraphInstance_ServerEntity {
                constexpr std::ptrdiff_t m_pComponent = 0xD8; // CPulseGraphComponentBase*
            }
            // Parent: None
            // Fields count: 4
            namespace CPulseGraphComponentBase {
                constexpr std::ptrdiff_t m_hOwner = 0x8; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_sNameFixupStaticPrefix = 0x10; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_sNameFixupParent = 0x18; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_sNameFixupLocal = 0x20; // CUtlSymbolLarge
            }
            // Parent: CPulseGraphComponentBase
            // Fields count: 0
            namespace CPulseGraphComponentPointServer {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseLibraryBindings
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CPulseServerFuncs {
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
            namespace CPulseCell_SoundEventStart {
                constexpr std::ptrdiff_t m_Type = 0x48; // SoundEventStartType_t
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseLibraryBindings
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CPulseServerFuncs_Sounds {
            }
            // Parent: CPulseCell_BaseYieldingInflow
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Outflow_PlaySceneBase {
                constexpr std::ptrdiff_t m_OnFinished = 0x48; // CPulse_ResumePoint
                constexpr std::ptrdiff_t m_OnCanceled = 0x58; // CPulse_ResumePoint
                constexpr std::ptrdiff_t m_Triggers = 0x68; // CUtlVector<CPulse_OutflowConnection>
            }
            // Parent: None
            // Fields count: 1
            namespace CPulseCell_Outflow_PlaySceneBase__CursorState_t {
                constexpr std::ptrdiff_t m_sceneInstance = 0x0; // CHandle<CBaseEntity>
            }
            // Parent: None
            // Fields count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace PulseScriptedSequenceData_t {
                constexpr std::ptrdiff_t m_nActorID = 0x0; // int32
                constexpr std::ptrdiff_t m_szPreIdleSequence = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_szEntrySequence = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_szSequence = 0x18; // CUtlString
                constexpr std::ptrdiff_t m_szExitSequence = 0x20; // CUtlString
                constexpr std::ptrdiff_t m_bLoopPreIdleSequence = 0x28; // bool
                constexpr std::ptrdiff_t m_bLoopActionSequence = 0x29; // bool
                constexpr std::ptrdiff_t m_bLoopPostIdleSequence = 0x2A; // bool
                constexpr std::ptrdiff_t m_bIgnoreLookAt = 0x2B; // bool
            }
            // Parent: None
            // Fields count: 1
            namespace CPulseCell_Outflow_ScriptedSequence__CursorState_t {
                constexpr std::ptrdiff_t m_scriptedSequence = 0x0; // CHandle<CBaseEntity>
            }
            // Parent: CEntityComponent
            // Fields count: 0
            namespace CTouchExpansionComponent {
            }
            // Parent: None
            // Fields count: 25
            namespace dynpitchvol_base_t {
                constexpr std::ptrdiff_t preset = 0x0; // int32
                constexpr std::ptrdiff_t pitchrun = 0x4; // int32
                constexpr std::ptrdiff_t pitchstart = 0x8; // int32
                constexpr std::ptrdiff_t spinup = 0xC; // int32
                constexpr std::ptrdiff_t spindown = 0x10; // int32
                constexpr std::ptrdiff_t volrun = 0x14; // int32
                constexpr std::ptrdiff_t volstart = 0x18; // int32
                constexpr std::ptrdiff_t fadein = 0x1C; // int32
                constexpr std::ptrdiff_t fadeout = 0x20; // int32
                constexpr std::ptrdiff_t lfotype = 0x24; // int32
                constexpr std::ptrdiff_t lforate = 0x28; // int32
                constexpr std::ptrdiff_t lfomodpitch = 0x2C; // int32
                constexpr std::ptrdiff_t lfomodvol = 0x30; // int32
                constexpr std::ptrdiff_t cspinup = 0x34; // int32
                constexpr std::ptrdiff_t cspincount = 0x38; // int32
                constexpr std::ptrdiff_t pitch = 0x3C; // int32
                constexpr std::ptrdiff_t spinupsav = 0x40; // int32
                constexpr std::ptrdiff_t spindownsav = 0x44; // int32
                constexpr std::ptrdiff_t pitchfrac = 0x48; // int32
                constexpr std::ptrdiff_t vol = 0x4C; // int32
                constexpr std::ptrdiff_t fadeinsav = 0x50; // int32
                constexpr std::ptrdiff_t fadeoutsav = 0x54; // int32
                constexpr std::ptrdiff_t volfrac = 0x58; // int32
                constexpr std::ptrdiff_t lfofrac = 0x5C; // int32
                constexpr std::ptrdiff_t lfomult = 0x60; // int32
            }
            // Parent: dynpitchvol_base_t
            // Fields count: 0
            namespace dynpitchvol_t {
            }
            // Parent: None
            // Fields count: 3
            namespace ResponseContext_t {
                constexpr std::ptrdiff_t m_iszName = 0x0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszValue = 0x8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_fExpirationTime = 0x10; // GameTime_t
            }
            // Parent: None
            // Fields count: 2
            namespace Relationship_t {
                constexpr std::ptrdiff_t disposition = 0x0; // Disposition_t
                constexpr std::ptrdiff_t priority = 0x4; // int32
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
            namespace CBaseEntity {
                constexpr std::ptrdiff_t m_CBodyComponent = 0x38; // CBodyComponent*
                constexpr std::ptrdiff_t m_NetworkTransmitComponent = 0x40; // CNetworkTransmitComponent
                constexpr std::ptrdiff_t m_aThinkFunctions = 0x4F0; // CUtlVector<thinkfunc_t>
                constexpr std::ptrdiff_t m_iCurrentThinkContext = 0x508; // int32
                constexpr std::ptrdiff_t m_nLastThinkTick = 0x50C; // GameTick_t
                constexpr std::ptrdiff_t m_nDisableContextThinkStartTick = 0x510; // GameTick_t
                constexpr std::ptrdiff_t m_isSteadyState = 0x520; // CBitVec<64>
                constexpr std::ptrdiff_t m_lastNetworkChange = 0x528; // float32
                constexpr std::ptrdiff_t m_ResponseContexts = 0x540; // CUtlVector<ResponseContext_t>
                constexpr std::ptrdiff_t m_iszResponseContext = 0x558; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iHealth = 0x5A0; // int32
                constexpr std::ptrdiff_t m_iMaxHealth = 0x5A4; // int32
                constexpr std::ptrdiff_t m_lifeState = 0x5A8; // uint8
                constexpr std::ptrdiff_t m_flDamageAccumulator = 0x5AC; // float32
                constexpr std::ptrdiff_t m_bTakesDamage = 0x5B0; // bool
                constexpr std::ptrdiff_t m_nTakeDamageFlags = 0x5B4; // TakeDamageFlags_t
                constexpr std::ptrdiff_t m_bIsPlatform = 0x5B8; // bool
                constexpr std::ptrdiff_t m_MoveCollide = 0x5BA; // MoveCollide_t
                constexpr std::ptrdiff_t m_MoveType = 0x5BB; // MoveType_t
                constexpr std::ptrdiff_t m_nActualMoveType = 0x5BC; // MoveType_t
                constexpr std::ptrdiff_t m_nWaterTouch = 0x5BD; // uint8
                constexpr std::ptrdiff_t m_nSlimeTouch = 0x5BE; // uint8
                constexpr std::ptrdiff_t m_bRestoreInHierarchy = 0x5BF; // bool
                constexpr std::ptrdiff_t m_target = 0x5C0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hDamageFilter = 0x5C8; // CHandle<CBaseFilter>
                constexpr std::ptrdiff_t m_iszDamageFilterName = 0x5D0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_flMoveDoneTime = 0x5D8; // float32
                constexpr std::ptrdiff_t m_nSubclassID = 0x5DC; // CUtlStringToken
                constexpr std::ptrdiff_t m_flAnimTime = 0x5E8; // float32
                constexpr std::ptrdiff_t m_flSimulationTime = 0x5EC; // float32
                constexpr std::ptrdiff_t m_flCreateTime = 0x5F0; // GameTime_t
                constexpr std::ptrdiff_t m_bClientSideRagdoll = 0x5F4; // bool
                constexpr std::ptrdiff_t m_ubInterpolationFrame = 0x5F5; // uint8
                constexpr std::ptrdiff_t m_vPrevVPhysicsUpdatePos = 0x5F8; // Vector
                constexpr std::ptrdiff_t m_iTeamNum = 0x604; // uint8
                constexpr std::ptrdiff_t m_iGlobalname = 0x608; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iSentToClients = 0x610; // int32
                constexpr std::ptrdiff_t m_flSpeed = 0x614; // float32
                constexpr std::ptrdiff_t m_sUniqueHammerID = 0x618; // CUtlString
                constexpr std::ptrdiff_t m_spawnflags = 0x620; // uint32
                constexpr std::ptrdiff_t m_nNextThinkTick = 0x624; // GameTick_t
                constexpr std::ptrdiff_t m_nSimulationTick = 0x628; // int32
                constexpr std::ptrdiff_t m_OnKilled = 0x630; // CEntityIOOutput
                constexpr std::ptrdiff_t m_fFlags = 0x658; // uint32
                constexpr std::ptrdiff_t m_vecAbsVelocity = 0x65C; // Vector
                constexpr std::ptrdiff_t m_vecVelocity = 0x668; // CNetworkVelocityVector
                constexpr std::ptrdiff_t m_vecBaseVelocity = 0x698; // Vector
                constexpr std::ptrdiff_t m_nPushEnumCount = 0x6A4; // int32
                constexpr std::ptrdiff_t m_pCollision = 0x6A8; // CCollisionProperty*
                constexpr std::ptrdiff_t m_hEffectEntity = 0x6B0; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hOwnerEntity = 0x6B4; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_fEffects = 0x6B8; // uint32
                constexpr std::ptrdiff_t m_hGroundEntity = 0x6BC; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_flFriction = 0x6C0; // float32
                constexpr std::ptrdiff_t m_flElasticity = 0x6C4; // float32
                constexpr std::ptrdiff_t m_flGravityScale = 0x6C8; // float32
                constexpr std::ptrdiff_t m_flTimeScale = 0x6CC; // float32
                constexpr std::ptrdiff_t m_flWaterLevel = 0x6D0; // float32
                constexpr std::ptrdiff_t m_bAnimatedEveryTick = 0x6D4; // bool
                constexpr std::ptrdiff_t m_bDisableLowViolence = 0x6D5; // bool
                constexpr std::ptrdiff_t m_nWaterType = 0x6D6; // uint8
                constexpr std::ptrdiff_t m_iEFlags = 0x6D8; // int32
                constexpr std::ptrdiff_t m_OnUser1 = 0x6E0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnUser2 = 0x708; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnUser3 = 0x730; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnUser4 = 0x758; // CEntityIOOutput
                constexpr std::ptrdiff_t m_iInitialTeamNum = 0x780; // int32
                constexpr std::ptrdiff_t m_flNavIgnoreUntilTime = 0x784; // GameTime_t
                constexpr std::ptrdiff_t m_vecAngVelocity = 0x788; // QAngle
                constexpr std::ptrdiff_t m_bNetworkQuantizeOriginAndAngles = 0x794; // bool
                constexpr std::ptrdiff_t m_bLagCompensate = 0x795; // bool
                constexpr std::ptrdiff_t m_flOverriddenFriction = 0x798; // float32
                constexpr std::ptrdiff_t m_pBlocker = 0x79C; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_flLocalTime = 0x7A0; // float32
                constexpr std::ptrdiff_t m_flVPhysicsUpdateLocalTime = 0x7A4; // float32
            }
            // Parent: CBaseEntity
            // Fields count: 0
            namespace CServerOnlyEntity {
            }
            // Parent: CServerOnlyEntity
            // Fields count: 0
            namespace CServerOnlyPointEntity {
            }
            // Parent: CServerOnlyEntity
            // Fields count: 0
            namespace CLogicalEntity {
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
            namespace CColorCorrection {
                constexpr std::ptrdiff_t m_flFadeInDuration = 0x7A8; // float32
                constexpr std::ptrdiff_t m_flFadeOutDuration = 0x7AC; // float32
                constexpr std::ptrdiff_t m_flStartFadeInWeight = 0x7B0; // float32
                constexpr std::ptrdiff_t m_flStartFadeOutWeight = 0x7B4; // float32
                constexpr std::ptrdiff_t m_flTimeStartFadeIn = 0x7B8; // GameTime_t
                constexpr std::ptrdiff_t m_flTimeStartFadeOut = 0x7BC; // GameTime_t
                constexpr std::ptrdiff_t m_flMaxWeight = 0x7C0; // float32
                constexpr std::ptrdiff_t m_bStartDisabled = 0x7C4; // bool
                constexpr std::ptrdiff_t m_bEnabled = 0x7C5; // bool
                constexpr std::ptrdiff_t m_bMaster = 0x7C6; // bool
                constexpr std::ptrdiff_t m_bClientSide = 0x7C7; // bool
                constexpr std::ptrdiff_t m_bExclusive = 0x7C8; // bool
                constexpr std::ptrdiff_t m_MinFalloff = 0x7CC; // float32
                constexpr std::ptrdiff_t m_MaxFalloff = 0x7D0; // float32
                constexpr std::ptrdiff_t m_flCurWeight = 0x7D4; // float32
                constexpr std::ptrdiff_t m_netlookupFilename = 0x7D8; // char[512]
                constexpr std::ptrdiff_t m_lookupFilename = 0x9D8; // CUtlSymbolLarge
            }
            // Parent: CBaseEntity
            // Fields count: 11
            //
            // Metadata:
            // NetworkVarNames: m_hEntAttached (CHandle< CBaseEntity>)
            // NetworkVarNames: m_bCheapEffect (bool)
            namespace CEntityFlame {
                constexpr std::ptrdiff_t m_hEntAttached = 0x7A8; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_bCheapEffect = 0x7AC; // bool
                constexpr std::ptrdiff_t m_flSize = 0x7B0; // float32
                constexpr std::ptrdiff_t m_bUseHitboxes = 0x7B4; // bool
                constexpr std::ptrdiff_t m_iNumHitboxFires = 0x7B8; // int32
                constexpr std::ptrdiff_t m_flHitboxFireScale = 0x7BC; // float32
                constexpr std::ptrdiff_t m_flLifetime = 0x7C0; // GameTime_t
                constexpr std::ptrdiff_t m_hAttacker = 0x7C4; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_iDangerSound = 0x7C8; // int32
                constexpr std::ptrdiff_t m_flDirectDamagePerSecond = 0x7CC; // float32
                constexpr std::ptrdiff_t m_iCustomDamageType = 0x7D0; // int32
            }
            // Parent: CLogicalEntity
            // Fields count: 3
            namespace CBaseFilter {
                constexpr std::ptrdiff_t m_bNegated = 0x7A8; // bool
                constexpr std::ptrdiff_t m_OnPass = 0x7B0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnFail = 0x7D8; // CEntityIOOutput
            }
            // Parent: CBaseFilter
            // Fields count: 4
            namespace CFilterMultiple {
                constexpr std::ptrdiff_t m_nFilterType = 0x800; // filter_t
                constexpr std::ptrdiff_t m_iFilterName = 0x808; // CUtlSymbolLarge[10]
                constexpr std::ptrdiff_t m_hFilter = 0x858; // CHandle<CBaseEntity>[10]
                constexpr std::ptrdiff_t m_nFilterCount = 0x880; // int32
            }
            // Parent: CBaseFilter
            // Fields count: 1
            namespace CFilterProximity {
                constexpr std::ptrdiff_t m_flRadius = 0x800; // float32
            }
            // Parent: CBaseFilter
            // Fields count: 0
            namespace CFilterLOS {
            }
            // Parent: CBaseFilter
            // Fields count: 1
            namespace CFilterClass {
                constexpr std::ptrdiff_t m_iFilterClass = 0x800; // CUtlSymbolLarge
            }
            // Parent: CBaseEntity
            // Fields count: 4
            //
            // Metadata:
            // NetworkVarNames: m_flScale (float32)
            // NetworkVarNames: m_flStartScale (float32)
            // NetworkVarNames: m_flScaleTime (float32)
            // NetworkVarNames: m_nFlags (uint32)
            namespace CBaseFire {
                constexpr std::ptrdiff_t m_flScale = 0x7A8; // float32
                constexpr std::ptrdiff_t m_flStartScale = 0x7AC; // float32
                constexpr std::ptrdiff_t m_flScaleTime = 0x7B0; // float32
                constexpr std::ptrdiff_t m_nFlags = 0x7B4; // uint32
            }
            // Parent: CBaseFire
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_nFlameModelIndex (int32)
            // NetworkVarNames: m_nFlameFromAboveModelIndex (int32)
            namespace CFireSmoke {
                constexpr std::ptrdiff_t m_nFlameModelIndex = 0x7B8; // int32
                constexpr std::ptrdiff_t m_nFlameFromAboveModelIndex = 0x7BC; // int32
            }
            // Parent: CBaseEntity
            // Fields count: 7
            namespace CFishPool {
                constexpr std::ptrdiff_t m_fishCount = 0x7B4; // int32
                constexpr std::ptrdiff_t m_maxRange = 0x7B8; // float32
                constexpr std::ptrdiff_t m_swimDepth = 0x7BC; // float32
                constexpr std::ptrdiff_t m_waterLevel = 0x7C0; // float32
                constexpr std::ptrdiff_t m_isDormant = 0x7C4; // bool
                constexpr std::ptrdiff_t m_fishes = 0x7C8; // CUtlVector<CHandle<CFish>>
                constexpr std::ptrdiff_t m_visTimer = 0x7E0; // CountdownTimer
            }
            // Parent: CServerOnlyEntity
            // Fields count: 0
            namespace CInfoData {
            }
            // Parent: None
            // Fields count: 3
            namespace locksound_t {
                constexpr std::ptrdiff_t sLockedSound = 0x8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t sUnlockedSound = 0x10; // CUtlSymbolLarge
                constexpr std::ptrdiff_t flwaitSound = 0x18; // GameTime_t
            }
            // Parent: CLogicalEntity
            // Fields count: 4
            namespace CLogicBranch {
                constexpr std::ptrdiff_t m_bInValue = 0x7A8; // bool
                constexpr std::ptrdiff_t m_Listeners = 0x7B0; // CUtlVector<CHandle<CBaseEntity>>
                constexpr std::ptrdiff_t m_OnTrue = 0x7C8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnFalse = 0x7F0; // CEntityIOOutput
            }
            // Parent: CLogicalEntity
            // Fields count: 7
            namespace CLogicDistanceCheck {
                constexpr std::ptrdiff_t m_iszEntityA = 0x7A8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszEntityB = 0x7B0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_flZone1Distance = 0x7B8; // float32
                constexpr std::ptrdiff_t m_flZone2Distance = 0x7BC; // float32
                constexpr std::ptrdiff_t m_InZone1 = 0x7C0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_InZone2 = 0x7E8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_InZone3 = 0x810; // CEntityIOOutput
            }
            // Parent: None
            // Fields count: 3
            namespace VelocitySampler {
                constexpr std::ptrdiff_t m_prevSample = 0x0; // Vector
                constexpr std::ptrdiff_t m_fPrevSampleTime = 0xC; // GameTime_t
                constexpr std::ptrdiff_t m_fIdealSampleRate = 0x10; // float32
            }
            // Parent: None
            // Fields count: 3
            namespace SimpleConstraintSoundProfile {
                constexpr std::ptrdiff_t eKeypoints = 0x8; // SimpleConstraintSoundProfile::SimpleConstraintsSoundProfileKeypoints_t
                constexpr std::ptrdiff_t m_keyPoints = 0xC; // float32[2]
                constexpr std::ptrdiff_t m_reversalSoundThresholds = 0x14; // float32[3]
            }
            // Parent: None
            // Fields count: 8
            namespace ConstraintSoundInfo {
                constexpr std::ptrdiff_t m_vSampler = 0x8; // VelocitySampler
                constexpr std::ptrdiff_t m_soundProfile = 0x20; // SimpleConstraintSoundProfile
                constexpr std::ptrdiff_t m_forwardAxis = 0x40; // Vector
                constexpr std::ptrdiff_t m_iszTravelSoundFwd = 0x50; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszTravelSoundBack = 0x58; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszReversalSounds = 0x68; // CUtlSymbolLarge[3]
                constexpr std::ptrdiff_t m_bPlayTravelSound = 0x80; // bool
                constexpr std::ptrdiff_t m_bPlayReversalSound = 0x81; // bool
            }
            // Parent: None
            // Fields count: 5
            namespace CSmoothFunc {
                constexpr std::ptrdiff_t m_flSmoothAmplitude = 0x8; // float32
                constexpr std::ptrdiff_t m_flSmoothBias = 0xC; // float32
                constexpr std::ptrdiff_t m_flSmoothDuration = 0x10; // float32
                constexpr std::ptrdiff_t m_flSmoothRemainingTime = 0x14; // float32
                constexpr std::ptrdiff_t m_nSmoothDir = 0x18; // int32
            }
            // Parent: None
            // Fields count: 1
            namespace magnetted_objects_t {
                constexpr std::ptrdiff_t hEntity = 0x8; // CHandle<CBaseEntity>
            }
            // Parent: CServerOnlyPointEntity
            // Fields count: 6
            namespace CPointPrefab {
                constexpr std::ptrdiff_t m_targetMapName = 0x7A8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_forceWorldGroupID = 0x7B0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_associatedRelayTargetName = 0x7B8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_fixupNames = 0x7C0; // bool
                constexpr std::ptrdiff_t m_bLoadDynamic = 0x7C1; // bool
                constexpr std::ptrdiff_t m_associatedRelayEntity = 0x7C4; // CHandle<CPointPrefab>
            }
            // Parent: CBaseEntity
            // Fields count: 2
            namespace CSkyboxReference {
                constexpr std::ptrdiff_t m_worldGroupId = 0x7A8; // WorldGroupId_t
                constexpr std::ptrdiff_t m_hSkyCamera = 0x7AC; // CHandle<CSkyCamera>
            }
            // Parent: CBaseEntity
            // Fields count: 4
            //
            // Metadata:
            // NetworkVarNames: m_skyboxData (sky3dparams_t)
            // NetworkVarNames: m_skyboxSlotToken (CUtlStringToken)
            namespace CSkyCamera {
                constexpr std::ptrdiff_t m_skyboxData = 0x7A8; // sky3dparams_t
                constexpr std::ptrdiff_t m_skyboxSlotToken = 0x838; // CUtlStringToken
                constexpr std::ptrdiff_t m_bUseAngles = 0x83C; // bool
                constexpr std::ptrdiff_t m_pNext = 0x840; // CSkyCamera*
            }
            // Parent: None
            // Fields count: 12
            namespace CSound {
                constexpr std::ptrdiff_t m_hOwner = 0x0; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hTarget = 0x4; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_iVolume = 0x8; // int32
                constexpr std::ptrdiff_t m_flOcclusionScale = 0xC; // float32
                constexpr std::ptrdiff_t m_iType = 0x10; // int32
                constexpr std::ptrdiff_t m_iNextAudible = 0x14; // int32
                constexpr std::ptrdiff_t m_flExpireTime = 0x18; // GameTime_t
                constexpr std::ptrdiff_t m_iNext = 0x1C; // int16
                constexpr std::ptrdiff_t m_bNoExpirationTime = 0x1E; // bool
                constexpr std::ptrdiff_t m_ownerChannelIndex = 0x20; // int32
                constexpr std::ptrdiff_t m_vecOrigin = 0x24; // Vector
                constexpr std::ptrdiff_t m_bHasOwner = 0x30; // bool
            }
            // Parent: CServerOnlyEntity
            // Fields count: 11
            namespace CEnvSoundscape {
                constexpr std::ptrdiff_t m_OnPlay = 0x7A8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_flRadius = 0x7D0; // float32
                constexpr std::ptrdiff_t m_soundscapeName = 0x7D8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_soundEventName = 0x7E0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bOverrideWithEvent = 0x7E8; // bool
                constexpr std::ptrdiff_t m_soundscapeIndex = 0x7EC; // int32
                constexpr std::ptrdiff_t m_soundscapeEntityListId = 0x7F0; // int32
                constexpr std::ptrdiff_t m_soundEventHash = 0x7F4; // uint32
                constexpr std::ptrdiff_t m_positionNames = 0x7F8; // CUtlSymbolLarge[8]
                constexpr std::ptrdiff_t m_hProxySoundscape = 0x838; // CHandle<CEnvSoundscape>
                constexpr std::ptrdiff_t m_bDisabled = 0x83C; // bool
            }
            // Parent: CEnvSoundscape
            // Fields count: 1
            namespace CEnvSoundscapeProxy {
                constexpr std::ptrdiff_t m_MainSoundscapeName = 0x840; // CUtlSymbolLarge
            }
            // Parent: CEnvSoundscape
            // Fields count: 0
            namespace CEnvSoundscapeTriggerable {
            }
            // Parent: None
            // Fields count: 6
            namespace lerpdata_t {
                constexpr std::ptrdiff_t m_hEnt = 0x0; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_MoveType = 0x4; // MoveType_t
                constexpr std::ptrdiff_t m_flStartTime = 0x8; // GameTime_t
                constexpr std::ptrdiff_t m_vecStartOrigin = 0xC; // Vector
                constexpr std::ptrdiff_t m_qStartRot = 0x20; // Quaternion
                constexpr std::ptrdiff_t m_nFXIndex = 0x30; // ParticleIndex_t
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNavLinkAnimgraphVar {
                constexpr std::ptrdiff_t m_strAnimgraphVar = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_unAlignmentDegrees = 0x8; // uint32
            }
            // Parent: CNavVolume
            // Fields count: 0
            namespace CNavVolumeMarkupVolume {
            }
            // Parent: CNavVolume
            // Fields count: 0
            namespace CNavVolumeCalculatedVector {
            }
            // Parent: CNavVolumeCalculatedVector
            // Fields count: 2
            namespace CNavVolumeBreadthFirstSearch {
                constexpr std::ptrdiff_t m_vStartPos = 0x80; // Vector
                constexpr std::ptrdiff_t m_flSearchDist = 0x8C; // float32
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
            namespace VPhysicsCollisionAttribute_t {
                constexpr std::ptrdiff_t m_nInteractsAs = 0x8; // uint64
                constexpr std::ptrdiff_t m_nInteractsWith = 0x10; // uint64
                constexpr std::ptrdiff_t m_nInteractsExclude = 0x18; // uint64
                constexpr std::ptrdiff_t m_nEntityId = 0x20; // uint32
                constexpr std::ptrdiff_t m_nOwnerId = 0x24; // uint32
                constexpr std::ptrdiff_t m_nHierarchyId = 0x28; // uint16
                constexpr std::ptrdiff_t m_nCollisionGroup = 0x2A; // uint8
                constexpr std::ptrdiff_t m_nCollisionFunctionMask = 0x2B; // uint8
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
            namespace CCollisionProperty {
                constexpr std::ptrdiff_t m_collisionAttribute = 0x10; // VPhysicsCollisionAttribute_t
                constexpr std::ptrdiff_t m_vecMins = 0x40; // Vector
                constexpr std::ptrdiff_t m_vecMaxs = 0x4C; // Vector
                constexpr std::ptrdiff_t m_usSolidFlags = 0x5A; // uint8
                constexpr std::ptrdiff_t m_nSolidType = 0x5B; // SolidType_t
                constexpr std::ptrdiff_t m_triggerBloat = 0x5C; // uint8
                constexpr std::ptrdiff_t m_nSurroundType = 0x5D; // SurroundingBoundsType_t
                constexpr std::ptrdiff_t m_CollisionGroup = 0x5E; // uint8
                constexpr std::ptrdiff_t m_nEnablePhysics = 0x5F; // uint8
                constexpr std::ptrdiff_t m_flBoundingRadius = 0x60; // float32
                constexpr std::ptrdiff_t m_vecSpecifiedSurroundingMins = 0x64; // Vector
                constexpr std::ptrdiff_t m_vecSpecifiedSurroundingMaxs = 0x70; // Vector
                constexpr std::ptrdiff_t m_vecSurroundingMaxs = 0x7C; // Vector
                constexpr std::ptrdiff_t m_vecSurroundingMins = 0x88; // Vector
                constexpr std::ptrdiff_t m_vCapsuleCenter1 = 0x94; // Vector
                constexpr std::ptrdiff_t m_vCapsuleCenter2 = 0xA0; // Vector
                constexpr std::ptrdiff_t m_flCapsuleRadius = 0xAC; // float32
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
            namespace CEffectData {
                constexpr std::ptrdiff_t m_vOrigin = 0x8; // Vector
                constexpr std::ptrdiff_t m_vStart = 0x14; // Vector
                constexpr std::ptrdiff_t m_vNormal = 0x20; // Vector
                constexpr std::ptrdiff_t m_vAngles = 0x2C; // QAngle
                constexpr std::ptrdiff_t m_hEntity = 0x38; // CEntityHandle
                constexpr std::ptrdiff_t m_hOtherEntity = 0x3C; // CEntityHandle
                constexpr std::ptrdiff_t m_flScale = 0x40; // float32
                constexpr std::ptrdiff_t m_flMagnitude = 0x44; // float32
                constexpr std::ptrdiff_t m_flRadius = 0x48; // float32
                constexpr std::ptrdiff_t m_nSurfaceProp = 0x4C; // CUtlStringToken
                constexpr std::ptrdiff_t m_nEffectIndex = 0x50; // CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>
                constexpr std::ptrdiff_t m_nDamageType = 0x58; // uint32
                constexpr std::ptrdiff_t m_nPenetrate = 0x5C; // uint8
                constexpr std::ptrdiff_t m_nMaterial = 0x5E; // uint16
                constexpr std::ptrdiff_t m_nHitBox = 0x60; // uint16
                constexpr std::ptrdiff_t m_nColor = 0x62; // uint8
                constexpr std::ptrdiff_t m_fFlags = 0x63; // uint8
                constexpr std::ptrdiff_t m_nAttachmentIndex = 0x64; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_nAttachmentName = 0x68; // CUtlStringToken
                constexpr std::ptrdiff_t m_iEffectName = 0x6C; // uint16
                constexpr std::ptrdiff_t m_nExplosionType = 0x6E; // uint8
            }
            // Parent: CBaseEntity
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_flFadeStartDist (float32)
            // NetworkVarNames: m_flFadeEndDist (float32)
            namespace CEnvDetailController {
                constexpr std::ptrdiff_t m_flFadeStartDist = 0x7A8; // float32
                constexpr std::ptrdiff_t m_flFadeEndDist = 0x7AC; // float32
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
            namespace CEnvWindShared {
                constexpr std::ptrdiff_t m_flStartTime = 0x8; // GameTime_t
                constexpr std::ptrdiff_t m_iWindSeed = 0xC; // uint32
                constexpr std::ptrdiff_t m_iMinWind = 0x10; // uint16
                constexpr std::ptrdiff_t m_iMaxWind = 0x12; // uint16
                constexpr std::ptrdiff_t m_windRadius = 0x14; // int32
                constexpr std::ptrdiff_t m_iMinGust = 0x18; // uint16
                constexpr std::ptrdiff_t m_iMaxGust = 0x1A; // uint16
                constexpr std::ptrdiff_t m_flMinGustDelay = 0x1C; // float32
                constexpr std::ptrdiff_t m_flMaxGustDelay = 0x20; // float32
                constexpr std::ptrdiff_t m_flGustDuration = 0x24; // float32
                constexpr std::ptrdiff_t m_iGustDirChange = 0x28; // uint16
                constexpr std::ptrdiff_t m_location = 0x2C; // Vector
                constexpr std::ptrdiff_t m_iszGustSound = 0x38; // int32
                constexpr std::ptrdiff_t m_iWindDir = 0x3C; // int32
                constexpr std::ptrdiff_t m_flWindSpeed = 0x40; // float32
                constexpr std::ptrdiff_t m_currentWindVector = 0x44; // Vector
                constexpr std::ptrdiff_t m_CurrentSwayVector = 0x50; // Vector
                constexpr std::ptrdiff_t m_PrevSwayVector = 0x5C; // Vector
                constexpr std::ptrdiff_t m_iInitialWindDir = 0x68; // uint16
                constexpr std::ptrdiff_t m_flInitialWindSpeed = 0x6C; // float32
                constexpr std::ptrdiff_t m_OnGustStart = 0x70; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnGustEnd = 0x98; // CEntityIOOutput
                constexpr std::ptrdiff_t m_flVariationTime = 0xC0; // GameTime_t
                constexpr std::ptrdiff_t m_flSwayTime = 0xC4; // GameTime_t
                constexpr std::ptrdiff_t m_flSimTime = 0xC8; // GameTime_t
                constexpr std::ptrdiff_t m_flSwitchTime = 0xCC; // GameTime_t
                constexpr std::ptrdiff_t m_flAveWindSpeed = 0xD0; // float32
                constexpr std::ptrdiff_t m_bGusting = 0xD4; // bool
                constexpr std::ptrdiff_t m_flWindAngleVariation = 0xD8; // float32
                constexpr std::ptrdiff_t m_flWindSpeedVariation = 0xDC; // float32
                constexpr std::ptrdiff_t m_iEntIndex = 0xE0; // CEntityIndex
            }
            // Parent: None
            // Fields count: 2
            namespace CEnvWindShared__WindAveEvent_t {
                constexpr std::ptrdiff_t m_flStartWindSpeed = 0x0; // float32
                constexpr std::ptrdiff_t m_flAveWindSpeed = 0x4; // float32
            }
            // Parent: None
            // Fields count: 2
            namespace CEnvWindShared__WindVariationEvent_t {
                constexpr std::ptrdiff_t m_flWindAngleVariation = 0x0; // float32
                constexpr std::ptrdiff_t m_flWindSpeedVariation = 0x4; // float32
            }
            // Parent: CBaseEntity
            // Fields count: 0
            namespace CInfoLadderDismount {
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
            namespace shard_model_desc_t {
                constexpr std::ptrdiff_t m_nModelID = 0x8; // int32
                constexpr std::ptrdiff_t m_hMaterial = 0x10; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_solid = 0x18; // ShardSolid_t
                constexpr std::ptrdiff_t m_ShatterPanelMode = 0x19; // ShatterPanelMode
                constexpr std::ptrdiff_t m_vecPanelSize = 0x1C; // Vector2D
                constexpr std::ptrdiff_t m_vecStressPositionA = 0x24; // Vector2D
                constexpr std::ptrdiff_t m_vecStressPositionB = 0x2C; // Vector2D
                constexpr std::ptrdiff_t m_vecPanelVertices = 0x38; // CNetworkUtlVectorBase<Vector2D>
                constexpr std::ptrdiff_t m_flGlassHalfThickness = 0x50; // float32
                constexpr std::ptrdiff_t m_bHasParent = 0x54; // bool
                constexpr std::ptrdiff_t m_bParentFrozen = 0x55; // bool
                constexpr std::ptrdiff_t m_SurfacePropStringToken = 0x58; // CUtlStringToken
            }
            // Parent: None
            // Fields count: 30
            namespace CShatterGlassShard {
                constexpr std::ptrdiff_t m_hShardHandle = 0x8; // uint32
                constexpr std::ptrdiff_t m_vecPanelVertices = 0x10; // CUtlVector<Vector2D>
                constexpr std::ptrdiff_t m_vLocalPanelSpaceOrigin = 0x28; // Vector2D
                constexpr std::ptrdiff_t m_hModel = 0x30; // CStrongHandle<InfoForResourceTypeCModel>
                constexpr std::ptrdiff_t m_hPhysicsEntity = 0x38; // CHandle<CShatterGlassShardPhysics>
                constexpr std::ptrdiff_t m_hParentPanel = 0x3C; // CHandle<CFuncShatterglass>
                constexpr std::ptrdiff_t m_hParentShard = 0x40; // uint32
                constexpr std::ptrdiff_t m_ShatterStressType = 0x44; // ShatterGlassStressType
                constexpr std::ptrdiff_t m_vecStressVelocity = 0x48; // Vector
                constexpr std::ptrdiff_t m_bCreatedModel = 0x54; // bool
                constexpr std::ptrdiff_t m_flLongestEdge = 0x58; // float32
                constexpr std::ptrdiff_t m_flShortestEdge = 0x5C; // float32
                constexpr std::ptrdiff_t m_flLongestAcross = 0x60; // float32
                constexpr std::ptrdiff_t m_flShortestAcross = 0x64; // float32
                constexpr std::ptrdiff_t m_flSumOfAllEdges = 0x68; // float32
                constexpr std::ptrdiff_t m_flArea = 0x6C; // float32
                constexpr std::ptrdiff_t m_nOnFrameEdge = 0x70; // OnFrame
                constexpr std::ptrdiff_t m_nParentPanelsNthShard = 0x74; // int32
                constexpr std::ptrdiff_t m_nSubShardGeneration = 0x78; // int32
                constexpr std::ptrdiff_t m_vecAverageVertPosition = 0x7C; // Vector2D
                constexpr std::ptrdiff_t m_bAverageVertPositionIsValid = 0x84; // bool
                constexpr std::ptrdiff_t m_vecPanelSpaceStressPositionA = 0x88; // Vector2D
                constexpr std::ptrdiff_t m_vecPanelSpaceStressPositionB = 0x90; // Vector2D
                constexpr std::ptrdiff_t m_bStressPositionAIsValid = 0x98; // bool
                constexpr std::ptrdiff_t m_bStressPositionBIsValid = 0x99; // bool
                constexpr std::ptrdiff_t m_bFlaggedForRemoval = 0x9A; // bool
                constexpr std::ptrdiff_t m_flPhysicsEntitySpawnedAtTime = 0x9C; // GameTime_t
                constexpr std::ptrdiff_t m_bShatterRateLimited = 0xA0; // bool
                constexpr std::ptrdiff_t m_hEntityHittingMe = 0xA4; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_vecNeighbors = 0xA8; // CUtlVector<uint32>
            }
            // Parent: CBaseEntity
            // Fields count: 0
            namespace CGameRulesProxy {
            }
            // Parent: None
            // Fields count: 2
            namespace CGameRules {
                constexpr std::ptrdiff_t m_szQuestName = 0x8; // char[128]
                constexpr std::ptrdiff_t m_nQuestPhase = 0x88; // int32
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
            namespace CGlowProperty {
                constexpr std::ptrdiff_t m_fGlowColor = 0x8; // Vector
                constexpr std::ptrdiff_t m_iGlowType = 0x30; // int32
                constexpr std::ptrdiff_t m_iGlowTeam = 0x34; // int32
                constexpr std::ptrdiff_t m_nGlowRange = 0x38; // int32
                constexpr std::ptrdiff_t m_nGlowRangeMin = 0x3C; // int32
                constexpr std::ptrdiff_t m_glowColorOverride = 0x40; // Color
                constexpr std::ptrdiff_t m_bFlashing = 0x44; // bool
                constexpr std::ptrdiff_t m_flGlowTime = 0x48; // float32
                constexpr std::ptrdiff_t m_flGlowStartTime = 0x4C; // float32
                constexpr std::ptrdiff_t m_bEligibleForScreenHighlight = 0x50; // bool
                constexpr std::ptrdiff_t m_bGlowing = 0x51; // bool
            }
            // Parent: CGameRules
            // Fields count: 0
            namespace CMultiplayRules {
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
            namespace fogparams_t {
                constexpr std::ptrdiff_t dirPrimary = 0x8; // Vector
                constexpr std::ptrdiff_t colorPrimary = 0x14; // Color
                constexpr std::ptrdiff_t colorSecondary = 0x18; // Color
                constexpr std::ptrdiff_t colorPrimaryLerpTo = 0x1C; // Color
                constexpr std::ptrdiff_t colorSecondaryLerpTo = 0x20; // Color
                constexpr std::ptrdiff_t start = 0x24; // float32
                constexpr std::ptrdiff_t end = 0x28; // float32
                constexpr std::ptrdiff_t farz = 0x2C; // float32
                constexpr std::ptrdiff_t maxdensity = 0x30; // float32
                constexpr std::ptrdiff_t exponent = 0x34; // float32
                constexpr std::ptrdiff_t HDRColorScale = 0x38; // float32
                constexpr std::ptrdiff_t skyboxFogFactor = 0x3C; // float32
                constexpr std::ptrdiff_t skyboxFogFactorLerpTo = 0x40; // float32
                constexpr std::ptrdiff_t startLerpTo = 0x44; // float32
                constexpr std::ptrdiff_t endLerpTo = 0x48; // float32
                constexpr std::ptrdiff_t maxdensityLerpTo = 0x4C; // float32
                constexpr std::ptrdiff_t lerptime = 0x50; // GameTime_t
                constexpr std::ptrdiff_t duration = 0x54; // float32
                constexpr std::ptrdiff_t blendtobackground = 0x58; // float32
                constexpr std::ptrdiff_t scattering = 0x5C; // float32
                constexpr std::ptrdiff_t locallightscale = 0x60; // float32
                constexpr std::ptrdiff_t enable = 0x64; // bool
                constexpr std::ptrdiff_t blend = 0x65; // bool
                constexpr std::ptrdiff_t m_bNoReflectionFog = 0x66; // bool
                constexpr std::ptrdiff_t m_bPadding = 0x67; // bool
            }
            // Parent: None
            // Fields count: 14
            //
            // Metadata:
            // NetworkVarNames: m_hCtrl (CHandle< CFogController>)
            namespace fogplayerparams_t {
                constexpr std::ptrdiff_t m_hCtrl = 0x8; // CHandle<CFogController>
                constexpr std::ptrdiff_t m_flTransitionTime = 0xC; // float32
                constexpr std::ptrdiff_t m_OldColor = 0x10; // Color
                constexpr std::ptrdiff_t m_flOldStart = 0x14; // float32
                constexpr std::ptrdiff_t m_flOldEnd = 0x18; // float32
                constexpr std::ptrdiff_t m_flOldMaxDensity = 0x1C; // float32
                constexpr std::ptrdiff_t m_flOldHDRColorScale = 0x20; // float32
                constexpr std::ptrdiff_t m_flOldFarZ = 0x24; // float32
                constexpr std::ptrdiff_t m_NewColor = 0x28; // Color
                constexpr std::ptrdiff_t m_flNewStart = 0x2C; // float32
                constexpr std::ptrdiff_t m_flNewEnd = 0x30; // float32
                constexpr std::ptrdiff_t m_flNewMaxDensity = 0x34; // float32
                constexpr std::ptrdiff_t m_flNewHDRColorScale = 0x38; // float32
                constexpr std::ptrdiff_t m_flNewFarZ = 0x3C; // float32
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
            namespace sky3dparams_t {
                constexpr std::ptrdiff_t scale = 0x8; // int16
                constexpr std::ptrdiff_t origin = 0xC; // Vector
                constexpr std::ptrdiff_t bClip3DSkyBoxNearToWorldFar = 0x18; // bool
                constexpr std::ptrdiff_t flClip3DSkyBoxNearToWorldFarOffset = 0x1C; // float32
                constexpr std::ptrdiff_t fog = 0x20; // fogparams_t
                constexpr std::ptrdiff_t m_nWorldGroupID = 0x88; // WorldGroupId_t
            }
            // Parent: None
            // Fields count: 5
            namespace sndopvarlatchdata_t {
                constexpr std::ptrdiff_t m_iszStack = 0x8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszOperator = 0x10; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszOpvar = 0x18; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_flVal = 0x20; // float32
                constexpr std::ptrdiff_t m_vPos = 0x24; // Vector
            }
            // Parent: None
            // Fields count: 0
            namespace IRagdoll {
            }
            // Parent: None
            // Fields count: 3
            namespace ragdollelement_t {
                constexpr std::ptrdiff_t originParentSpace = 0x0; // Vector
                constexpr std::ptrdiff_t parentIndex = 0x20; // int32
                constexpr std::ptrdiff_t m_flRadius = 0x24; // float32
            }
            // Parent: None
            // Fields count: 4
            namespace ragdoll_t {
                constexpr std::ptrdiff_t list = 0x0; // CUtlVector<ragdollelement_t>
                constexpr std::ptrdiff_t boneIndex = 0x18; // CUtlVector<int32>
                constexpr std::ptrdiff_t allowStretch = 0x30; // bool
                constexpr std::ptrdiff_t unused = 0x31; // bool
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // NetworkVarNames: m_Transforms (CTransform)
            // NetworkVarNames: m_hOwner (EHANDLE)
            namespace PhysicsRagdollPose_t {
                constexpr std::ptrdiff_t __m_pChainEntity = 0x8; // CNetworkVarChainer
                constexpr std::ptrdiff_t m_Transforms = 0x30; // CNetworkUtlVectorBase<CTransform>
                constexpr std::ptrdiff_t m_hOwner = 0x48; // CHandle<CBaseEntity>
            }
            // Parent: None
            // Fields count: 13
            namespace CSceneEventInfo {
                constexpr std::ptrdiff_t m_iLayer = 0x0; // int32
                constexpr std::ptrdiff_t m_iPriority = 0x4; // int32
                constexpr std::ptrdiff_t m_hSequence = 0x8; // HSequence
                constexpr std::ptrdiff_t m_flWeight = 0xC; // float32
                constexpr std::ptrdiff_t m_bHasArrived = 0x10; // bool
                constexpr std::ptrdiff_t m_nType = 0x14; // int32
                constexpr std::ptrdiff_t m_flNext = 0x18; // GameTime_t
                constexpr std::ptrdiff_t m_bIsGesture = 0x1C; // bool
                constexpr std::ptrdiff_t m_bShouldRemove = 0x1D; // bool
                constexpr std::ptrdiff_t m_hTarget = 0x44; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_nSceneEventId = 0x48; // uint32
                constexpr std::ptrdiff_t m_bClientSide = 0x4C; // bool
                constexpr std::ptrdiff_t m_bStarted = 0x4D; // bool
            }
            // Parent: None
            // Fields count: 4
            namespace thinkfunc_t {
                constexpr std::ptrdiff_t m_hFn = 0x10; // HSCRIPT
                constexpr std::ptrdiff_t m_nContext = 0x18; // CUtlStringToken
                constexpr std::ptrdiff_t m_nNextThinkTick = 0x1C; // GameTick_t
                constexpr std::ptrdiff_t m_nLastThinkTick = 0x20; // GameTick_t
            }
            // Parent: None
            // Fields count: 2
            namespace RagdollCreationParams_t {
                constexpr std::ptrdiff_t m_vForce = 0x0; // Vector
                constexpr std::ptrdiff_t m_nForceBone = 0xC; // int32
            }
            // Parent: None
            // Fields count: 6
            namespace hudtextparms_t {
                constexpr std::ptrdiff_t color1 = 0x0; // Color
                constexpr std::ptrdiff_t color2 = 0x4; // Color
                constexpr std::ptrdiff_t effect = 0x8; // uint8
                constexpr std::ptrdiff_t channel = 0x9; // uint8
                constexpr std::ptrdiff_t x = 0xC; // float32
                constexpr std::ptrdiff_t y = 0x10; // float32
            }
            // Parent: None
            // Fields count: 2
            namespace CSimpleSimTimer {
                constexpr std::ptrdiff_t m_next = 0x0; // GameTime_t
                constexpr std::ptrdiff_t m_nWorldGroupId = 0x4; // WorldGroupId_t
            }
            // Parent: CSimpleSimTimer
            // Fields count: 1
            namespace CSimTimer {
                constexpr std::ptrdiff_t m_interval = 0x8; // float32
            }
            // Parent: CSimpleSimTimer
            // Fields count: 2
            namespace CRandSimTimer {
                constexpr std::ptrdiff_t m_minInterval = 0x8; // float32
                constexpr std::ptrdiff_t m_maxInterval = 0xC; // float32
            }
            // Parent: CSimpleSimTimer
            // Fields count: 1
            namespace CStopwatchBase {
                constexpr std::ptrdiff_t m_fIsRunning = 0x8; // bool
            }
            // Parent: CStopwatchBase
            // Fields count: 0
            namespace CSimpleStopwatch {
            }
            // Parent: CStopwatchBase
            // Fields count: 1
            namespace CStopwatch {
                constexpr std::ptrdiff_t m_interval = 0xC; // float32
            }
            // Parent: CStopwatchBase
            // Fields count: 2
            namespace CRandStopwatch {
                constexpr std::ptrdiff_t m_minInterval = 0xC; // float32
                constexpr std::ptrdiff_t m_maxInterval = 0x10; // float32
            }
            // Parent: CGameRules
            // Fields count: 1
            namespace CSingleplayRules {
                constexpr std::ptrdiff_t m_bSinglePlayerGameEnding = 0x8C; // bool
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
            namespace CSoundOpvarSetPointBase {
                constexpr std::ptrdiff_t m_bDisabled = 0x7A8; // bool
                constexpr std::ptrdiff_t m_hSource = 0x7AC; // CEntityHandle
                constexpr std::ptrdiff_t m_iszSourceEntityName = 0x7B8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_vLastPosition = 0x810; // Vector
                constexpr std::ptrdiff_t m_iszStackName = 0x820; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszOperatorName = 0x828; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszOpvarName = 0x830; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iOpvarIndex = 0x838; // int32
                constexpr std::ptrdiff_t m_bUseAutoCompare = 0x83C; // bool
            }
            // Parent: CSoundOpvarSetPointBase
            // Fields count: 23
            namespace CSoundOpvarSetPointEntity {
                constexpr std::ptrdiff_t m_OnEnter = 0x840; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnExit = 0x868; // CEntityIOOutput
                constexpr std::ptrdiff_t m_bAutoDisable = 0x890; // bool
                constexpr std::ptrdiff_t m_flDistanceMin = 0x8D4; // float32
                constexpr std::ptrdiff_t m_flDistanceMax = 0x8D8; // float32
                constexpr std::ptrdiff_t m_flDistanceMapMin = 0x8DC; // float32
                constexpr std::ptrdiff_t m_flDistanceMapMax = 0x8E0; // float32
                constexpr std::ptrdiff_t m_flOcclusionRadius = 0x8E4; // float32
                constexpr std::ptrdiff_t m_flOcclusionMin = 0x8E8; // float32
                constexpr std::ptrdiff_t m_flOcclusionMax = 0x8EC; // float32
                constexpr std::ptrdiff_t m_flValSetOnDisable = 0x8F0; // float32
                constexpr std::ptrdiff_t m_bSetValueOnDisable = 0x8F4; // bool
                constexpr std::ptrdiff_t m_nSimulationMode = 0x8F8; // int32
                constexpr std::ptrdiff_t m_nVisibilitySamples = 0x8FC; // int32
                constexpr std::ptrdiff_t m_vDynamicProxyPoint = 0x900; // Vector
                constexpr std::ptrdiff_t m_flDynamicMaximumOcclusion = 0x90C; // float32
                constexpr std::ptrdiff_t m_hDynamicEntity = 0x910; // CEntityHandle
                constexpr std::ptrdiff_t m_iszDynamicEntityName = 0x918; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_flPathingDistanceNormFactor = 0x920; // float32
                constexpr std::ptrdiff_t m_vPathingSourcePos = 0x924; // Vector
                constexpr std::ptrdiff_t m_vPathingListenerPos = 0x930; // Vector
                constexpr std::ptrdiff_t m_vPathingDirection = 0x93C; // Vector
                constexpr std::ptrdiff_t m_nPathingSourceIndex = 0x948; // int32
            }
            // Parent: CSoundOpvarSetPointEntity
            // Fields count: 9
            namespace CSoundOpvarSetAABBEntity {
                constexpr std::ptrdiff_t m_vDistanceInnerMins = 0x94C; // Vector
                constexpr std::ptrdiff_t m_vDistanceInnerMaxs = 0x958; // Vector
                constexpr std::ptrdiff_t m_vDistanceOuterMins = 0x964; // Vector
                constexpr std::ptrdiff_t m_vDistanceOuterMaxs = 0x970; // Vector
                constexpr std::ptrdiff_t m_nAABBDirection = 0x97C; // int32
                constexpr std::ptrdiff_t m_vInnerMins = 0x980; // Vector
                constexpr std::ptrdiff_t m_vInnerMaxs = 0x98C; // Vector
                constexpr std::ptrdiff_t m_vOuterMins = 0x998; // Vector
                constexpr std::ptrdiff_t m_vOuterMaxs = 0x9A4; // Vector
            }
            // Parent: CSoundOpvarSetAABBEntity
            // Fields count: 0
            namespace CSoundOpvarSetOBBEntity {
            }
            // Parent: CSoundOpvarSetPointEntity
            // Fields count: 3
            namespace CSoundOpvarSetPathCornerEntity {
                constexpr std::ptrdiff_t m_flDistMinSqr = 0x968; // float32
                constexpr std::ptrdiff_t m_flDistMaxSqr = 0x96C; // float32
                constexpr std::ptrdiff_t m_iszPathCornerEntityName = 0x970; // CUtlSymbolLarge
            }
            // Parent: None
            // Fields count: 3
            namespace SoundOpvarTraceResult_t {
                constexpr std::ptrdiff_t vPos = 0x0; // Vector
                constexpr std::ptrdiff_t bDidHit = 0xC; // bool
                constexpr std::ptrdiff_t flDistSqrToCenter = 0x10; // float32
            }
            // Parent: CSoundOpvarSetPointEntity
            // Fields count: 4
            namespace CSoundOpvarSetAutoRoomEntity {
                constexpr std::ptrdiff_t m_traceResults = 0x950; // CUtlVector<SoundOpvarTraceResult_t>
                constexpr std::ptrdiff_t m_flSize = 0x980; // float32
                constexpr std::ptrdiff_t m_flHeightTolerance = 0x984; // float32
                constexpr std::ptrdiff_t m_flSizeSqr = 0x988; // float32
            }
            // Parent: CSoundOpvarSetPointBase
            // Fields count: 8
            namespace CSoundOpvarSetOBBWindEntity {
                constexpr std::ptrdiff_t m_vMins = 0x840; // Vector
                constexpr std::ptrdiff_t m_vMaxs = 0x84C; // Vector
                constexpr std::ptrdiff_t m_vDistanceMins = 0x858; // Vector
                constexpr std::ptrdiff_t m_vDistanceMaxs = 0x864; // Vector
                constexpr std::ptrdiff_t m_flWindMin = 0x870; // float32
                constexpr std::ptrdiff_t m_flWindMax = 0x874; // float32
                constexpr std::ptrdiff_t m_flWindMapMin = 0x878; // float32
                constexpr std::ptrdiff_t m_flWindMapMax = 0x87C; // float32
            }
            // Parent: None
            // Fields count: 18
            namespace CTakeDamageInfo {
                constexpr std::ptrdiff_t m_vecDamageForce = 0x8; // Vector
                constexpr std::ptrdiff_t m_vecDamagePosition = 0x14; // Vector
                constexpr std::ptrdiff_t m_vecReportedPosition = 0x20; // Vector
                constexpr std::ptrdiff_t m_vecDamageDirection = 0x2C; // Vector
                constexpr std::ptrdiff_t m_hInflictor = 0x38; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hAttacker = 0x3C; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hAbility = 0x40; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_flDamage = 0x44; // float32
                constexpr std::ptrdiff_t m_bitsDamageType = 0x48; // int32
                constexpr std::ptrdiff_t m_iDamageCustom = 0x4C; // int32
                constexpr std::ptrdiff_t m_iAmmoType = 0x50; // AmmoIndex_t
                constexpr std::ptrdiff_t m_flOriginalDamage = 0x60; // float32
                constexpr std::ptrdiff_t m_bShouldBleed = 0x64; // bool
                constexpr std::ptrdiff_t m_bShouldSpark = 0x65; // bool
                constexpr std::ptrdiff_t m_nDamageFlags = 0x70; // TakeDamageFlags_t
                constexpr std::ptrdiff_t m_nNumObjectsPenetrated = 0x74; // int32
                constexpr std::ptrdiff_t m_hScriptInstance = 0x78; // HSCRIPT
                constexpr std::ptrdiff_t m_bInTakeDamageFlow = 0x94; // bool
            }
            // Parent: None
            // Fields count: 2
            namespace CTakeDamageResult {
                constexpr std::ptrdiff_t m_nHealthLost = 0x0; // int32
                constexpr std::ptrdiff_t m_nDamageTaken = 0x4; // int32
            }
            // Parent: None
            // Fields count: 4
            namespace SummaryTakeDamageInfo_t {
                constexpr std::ptrdiff_t nSummarisedCount = 0x0; // int32
                constexpr std::ptrdiff_t info = 0x8; // CTakeDamageInfo
                constexpr std::ptrdiff_t result = 0xA0; // CTakeDamageResult
                constexpr std::ptrdiff_t hTarget = 0xA8; // CHandle<CBaseEntity>
            }
            // Parent: None
            // Fields count: 1
            namespace CTakeDamageSummaryScopeGuard {
                constexpr std::ptrdiff_t m_vecSummaries = 0x8; // CUtlVector<SummaryTakeDamageInfo_t*>
            }
            // Parent: CMultiplayRules
            // Fields count: 0
            namespace CTeamplayRules {
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_Attributes (CEconItemAttribute)
            namespace CAttributeList {
                constexpr std::ptrdiff_t m_Attributes = 0x8; // CUtlVectorEmbeddedNetworkVar<CEconItemAttribute>
                constexpr std::ptrdiff_t m_pManager = 0x58; // CAttributeManager*
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
            namespace CEconItemAttribute {
                constexpr std::ptrdiff_t m_iAttributeDefinitionIndex = 0x30; // uint16
                constexpr std::ptrdiff_t m_flValue = 0x34; // float32
                constexpr std::ptrdiff_t m_flInitialValue = 0x38; // float32
                constexpr std::ptrdiff_t m_nRefundableCurrency = 0x3C; // int32
                constexpr std::ptrdiff_t m_bSetBonus = 0x40; // bool
            }
            // Parent: None
            // Fields count: 0
            namespace IEconItemInterface {
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // NetworkVarNames: m_iReapplyProvisionParity (int)
            // NetworkVarNames: m_hOuter (EHANDLE)
            // NetworkVarNames: m_ProviderType (attributeprovidertypes_t)
            namespace CAttributeManager {
                constexpr std::ptrdiff_t m_Providers = 0x8; // CUtlVector<CHandle<CBaseEntity>>
                constexpr std::ptrdiff_t m_iReapplyProvisionParity = 0x20; // int32
                constexpr std::ptrdiff_t m_hOuter = 0x24; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_bPreventLoopback = 0x28; // bool
                constexpr std::ptrdiff_t m_ProviderType = 0x2C; // attributeprovidertypes_t
                constexpr std::ptrdiff_t m_CachedResults = 0x30; // CUtlVector<CAttributeManager::cached_attribute_float_t>
            }
            // Parent: None
            // Fields count: 3
            namespace CAttributeManager__cached_attribute_float_t {
                constexpr std::ptrdiff_t flIn = 0x0; // float32
                constexpr std::ptrdiff_t iAttribHook = 0x8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t flOut = 0x10; // float32
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
            namespace CAttributeContainer {
                constexpr std::ptrdiff_t m_Item = 0x50; // CEconItemView
            }
            // Parent: None
            // Fields count: 0
            namespace IHasAttributes {
            }
            // Parent: AmmoTypeInfo_t
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace GameAmmoTypeInfo_t {
                constexpr std::ptrdiff_t m_nBuySize = 0x34; // int32
                constexpr std::ptrdiff_t m_nCost = 0x38; // int32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_bSpotted (bool)
            // NetworkVarNames: m_bSpottedByMask (uint32)
            namespace EntitySpottedState_t {
                constexpr std::ptrdiff_t m_bSpotted = 0x8; // bool
                constexpr std::ptrdiff_t m_bSpottedByMask = 0xC; // uint32[2]
            }
            // Parent: CServerOnlyPointEntity
            // Fields count: 3
            namespace SpawnPoint {
                constexpr std::ptrdiff_t m_iPriority = 0x7A8; // int32
                constexpr std::ptrdiff_t m_bEnabled = 0x7AC; // bool
                constexpr std::ptrdiff_t m_nType = 0x7B0; // int32
            }
            // Parent: SpawnPoint
            // Fields count: 9
            namespace SpawnPointCoopEnemy {
                constexpr std::ptrdiff_t m_szWeaponsToGive = 0x7B8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_szPlayerModelToUse = 0x7C0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_nArmorToSpawnWith = 0x7C8; // int32
                constexpr std::ptrdiff_t m_nDefaultBehavior = 0x7CC; // SpawnPointCoopEnemy::BotDefaultBehavior_t
                constexpr std::ptrdiff_t m_nBotDifficulty = 0x7D0; // int32
                constexpr std::ptrdiff_t m_bIsAgressive = 0x7D4; // bool
                constexpr std::ptrdiff_t m_bStartAsleep = 0x7D5; // bool
                constexpr std::ptrdiff_t m_flHideRadius = 0x7D8; // float32
                constexpr std::ptrdiff_t m_szBehaviorTreeFile = 0x7E8; // CUtlSymbolLarge
            }
            // Parent: CGameRulesProxy
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_pGameRules (CCSGameRules*)
            namespace CCSGameRulesProxy {
                constexpr std::ptrdiff_t m_pGameRules = 0x7A8; // CCSGameRules*
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
            namespace CCSGameRules {
                constexpr std::ptrdiff_t __m_pChainEntity = 0x98; // CNetworkVarChainer
                constexpr std::ptrdiff_t m_coopMissionManager = 0xC0; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_bFreezePeriod = 0xC4; // bool
                constexpr std::ptrdiff_t m_bWarmupPeriod = 0xC5; // bool
                constexpr std::ptrdiff_t m_fWarmupPeriodEnd = 0xC8; // GameTime_t
                constexpr std::ptrdiff_t m_fWarmupPeriodStart = 0xCC; // GameTime_t
                constexpr std::ptrdiff_t m_nTotalPausedTicks = 0xD0; // int32
                constexpr std::ptrdiff_t m_nPauseStartTick = 0xD4; // int32
                constexpr std::ptrdiff_t m_bServerPaused = 0xD8; // bool
                constexpr std::ptrdiff_t m_bGamePaused = 0xD9; // bool
                constexpr std::ptrdiff_t m_bTerroristTimeOutActive = 0xDA; // bool
                constexpr std::ptrdiff_t m_bCTTimeOutActive = 0xDB; // bool
                constexpr std::ptrdiff_t m_flTerroristTimeOutRemaining = 0xDC; // float32
                constexpr std::ptrdiff_t m_flCTTimeOutRemaining = 0xE0; // float32
                constexpr std::ptrdiff_t m_nTerroristTimeOuts = 0xE4; // int32
                constexpr std::ptrdiff_t m_nCTTimeOuts = 0xE8; // int32
                constexpr std::ptrdiff_t m_bTechnicalTimeOut = 0xEC; // bool
                constexpr std::ptrdiff_t m_bMatchWaitingForResume = 0xED; // bool
                constexpr std::ptrdiff_t m_iRoundTime = 0xF0; // int32
                constexpr std::ptrdiff_t m_fMatchStartTime = 0xF4; // float32
                constexpr std::ptrdiff_t m_fRoundStartTime = 0xF8; // GameTime_t
                constexpr std::ptrdiff_t m_flRestartRoundTime = 0xFC; // GameTime_t
                constexpr std::ptrdiff_t m_bGameRestart = 0x100; // bool
                constexpr std::ptrdiff_t m_flGameStartTime = 0x104; // float32
                constexpr std::ptrdiff_t m_timeUntilNextPhaseStarts = 0x108; // float32
                constexpr std::ptrdiff_t m_gamePhase = 0x10C; // int32
                constexpr std::ptrdiff_t m_totalRoundsPlayed = 0x110; // int32
                constexpr std::ptrdiff_t m_nRoundsPlayedThisPhase = 0x114; // int32
                constexpr std::ptrdiff_t m_nOvertimePlaying = 0x118; // int32
                constexpr std::ptrdiff_t m_iHostagesRemaining = 0x11C; // int32
                constexpr std::ptrdiff_t m_bAnyHostageReached = 0x120; // bool
                constexpr std::ptrdiff_t m_bMapHasBombTarget = 0x121; // bool
                constexpr std::ptrdiff_t m_bMapHasRescueZone = 0x122; // bool
                constexpr std::ptrdiff_t m_bMapHasBuyZone = 0x123; // bool
                constexpr std::ptrdiff_t m_bIsQueuedMatchmaking = 0x124; // bool
                constexpr std::ptrdiff_t m_nQueuedMatchmakingMode = 0x128; // int32
                constexpr std::ptrdiff_t m_bIsValveDS = 0x12C; // bool
                constexpr std::ptrdiff_t m_bLogoMap = 0x12D; // bool
                constexpr std::ptrdiff_t m_bPlayAllStepSoundsOnServer = 0x12E; // bool
                constexpr std::ptrdiff_t m_iSpectatorSlotCount = 0x130; // int32
                constexpr std::ptrdiff_t m_MatchDevice = 0x134; // int32
                constexpr std::ptrdiff_t m_bHasMatchStarted = 0x138; // bool
                constexpr std::ptrdiff_t m_nNextMapInMapgroup = 0x13C; // int32
                constexpr std::ptrdiff_t m_szTournamentEventName = 0x140; // char[512]
                constexpr std::ptrdiff_t m_szTournamentEventStage = 0x340; // char[512]
                constexpr std::ptrdiff_t m_szMatchStatTxt = 0x540; // char[512]
                constexpr std::ptrdiff_t m_szTournamentPredictionsTxt = 0x740; // char[512]
                constexpr std::ptrdiff_t m_nTournamentPredictionsPct = 0x940; // int32
                constexpr std::ptrdiff_t m_flCMMItemDropRevealStartTime = 0x944; // GameTime_t
                constexpr std::ptrdiff_t m_flCMMItemDropRevealEndTime = 0x948; // GameTime_t
                constexpr std::ptrdiff_t m_bIsDroppingItems = 0x94C; // bool
                constexpr std::ptrdiff_t m_bIsQuestEligible = 0x94D; // bool
                constexpr std::ptrdiff_t m_bIsHltvActive = 0x94E; // bool
                constexpr std::ptrdiff_t m_nGuardianModeWaveNumber = 0x950; // int32
                constexpr std::ptrdiff_t m_nGuardianModeSpecialKillsRemaining = 0x954; // int32
                constexpr std::ptrdiff_t m_nGuardianModeSpecialWeaponNeeded = 0x958; // int32
                constexpr std::ptrdiff_t m_nGuardianGrenadesToGiveBots = 0x95C; // int32
                constexpr std::ptrdiff_t m_nNumHeaviesToSpawn = 0x960; // int32
                constexpr std::ptrdiff_t m_numGlobalGiftsGiven = 0x964; // uint32
                constexpr std::ptrdiff_t m_numGlobalGifters = 0x968; // uint32
                constexpr std::ptrdiff_t m_numGlobalGiftsPeriodSeconds = 0x96C; // uint32
                constexpr std::ptrdiff_t m_arrFeaturedGiftersAccounts = 0x970; // uint32[4]
                constexpr std::ptrdiff_t m_arrFeaturedGiftersGifts = 0x980; // uint32[4]
                constexpr std::ptrdiff_t m_arrProhibitedItemIndices = 0x990; // uint16[100]
                constexpr std::ptrdiff_t m_arrTournamentActiveCasterAccounts = 0xA58; // uint32[4]
                constexpr std::ptrdiff_t m_numBestOfMaps = 0xA68; // int32
                constexpr std::ptrdiff_t m_nHalloweenMaskListSeed = 0xA6C; // int32
                constexpr std::ptrdiff_t m_bBombDropped = 0xA70; // bool
                constexpr std::ptrdiff_t m_bBombPlanted = 0xA71; // bool
                constexpr std::ptrdiff_t m_iRoundWinStatus = 0xA74; // int32
                constexpr std::ptrdiff_t m_eRoundWinReason = 0xA78; // int32
                constexpr std::ptrdiff_t m_bTCantBuy = 0xA7C; // bool
                constexpr std::ptrdiff_t m_bCTCantBuy = 0xA7D; // bool
                constexpr std::ptrdiff_t m_flGuardianBuyUntilTime = 0xA80; // GameTime_t
                constexpr std::ptrdiff_t m_iMatchStats_RoundResults = 0xA84; // int32[30]
                constexpr std::ptrdiff_t m_iMatchStats_PlayersAlive_CT = 0xAFC; // int32[30]
                constexpr std::ptrdiff_t m_iMatchStats_PlayersAlive_T = 0xB74; // int32[30]
                constexpr std::ptrdiff_t m_TeamRespawnWaveTimes = 0xBEC; // float32[32]
                constexpr std::ptrdiff_t m_flNextRespawnWave = 0xC6C; // GameTime_t[32]
                constexpr std::ptrdiff_t m_nServerQuestID = 0xCEC; // int32
                constexpr std::ptrdiff_t m_vMinimapMins = 0xCF0; // Vector
                constexpr std::ptrdiff_t m_vMinimapMaxs = 0xCFC; // Vector
                constexpr std::ptrdiff_t m_MinimapVerticalSectionHeights = 0xD08; // float32[8]
                constexpr std::ptrdiff_t m_bDontIncrementCoopWave = 0xD28; // bool
                constexpr std::ptrdiff_t m_bSpawnedTerrorHuntHeavy = 0xD29; // bool
                constexpr std::ptrdiff_t m_nEndMatchMapGroupVoteTypes = 0xD2C; // int32[10]
                constexpr std::ptrdiff_t m_nEndMatchMapGroupVoteOptions = 0xD54; // int32[10]
                constexpr std::ptrdiff_t m_nEndMatchMapVoteWinner = 0xD7C; // int32
                constexpr std::ptrdiff_t m_iNumConsecutiveCTLoses = 0xD80; // int32
                constexpr std::ptrdiff_t m_iNumConsecutiveTerroristLoses = 0xD84; // int32
                constexpr std::ptrdiff_t m_bHasHostageBeenTouched = 0xDA0; // bool
                constexpr std::ptrdiff_t m_flIntermissionStartTime = 0xDA4; // GameTime_t
                constexpr std::ptrdiff_t m_flIntermissionEndTime = 0xDA8; // GameTime_t
                constexpr std::ptrdiff_t m_bLevelInitialized = 0xDAC; // bool
                constexpr std::ptrdiff_t m_iTotalRoundsPlayed = 0xDB0; // int32
                constexpr std::ptrdiff_t m_iUnBalancedRounds = 0xDB4; // int32
                constexpr std::ptrdiff_t m_endMatchOnRoundReset = 0xDB8; // bool
                constexpr std::ptrdiff_t m_endMatchOnThink = 0xDB9; // bool
                constexpr std::ptrdiff_t m_iFreezeTime = 0xDBC; // int32
                constexpr std::ptrdiff_t m_iNumTerrorist = 0xDC0; // int32
                constexpr std::ptrdiff_t m_iNumCT = 0xDC4; // int32
                constexpr std::ptrdiff_t m_iNumSpawnableTerrorist = 0xDC8; // int32
                constexpr std::ptrdiff_t m_iNumSpawnableCT = 0xDCC; // int32
                constexpr std::ptrdiff_t m_arrSelectedHostageSpawnIndices = 0xDD0; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_nSpawnPointsRandomSeed = 0xDE8; // int32
                constexpr std::ptrdiff_t m_bFirstConnected = 0xDEC; // bool
                constexpr std::ptrdiff_t m_bCompleteReset = 0xDED; // bool
                constexpr std::ptrdiff_t m_bPickNewTeamsOnReset = 0xDEE; // bool
                constexpr std::ptrdiff_t m_bScrambleTeamsOnRestart = 0xDEF; // bool
                constexpr std::ptrdiff_t m_bSwapTeamsOnRestart = 0xDF0; // bool
                constexpr std::ptrdiff_t m_nEndMatchTiedVotes = 0xDF8; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_bNeedToAskPlayersForContinueVote = 0xE14; // bool
                constexpr std::ptrdiff_t m_numQueuedMatchmakingAccounts = 0xE18; // uint32
                constexpr std::ptrdiff_t m_pQueuedMatchmakingReservationString = 0xE20; // char*
                constexpr std::ptrdiff_t m_numTotalTournamentDrops = 0xE28; // uint32
                constexpr std::ptrdiff_t m_numSpectatorsCountMax = 0xE2C; // uint32
                constexpr std::ptrdiff_t m_numSpectatorsCountMaxTV = 0xE30; // uint32
                constexpr std::ptrdiff_t m_numSpectatorsCountMaxLnk = 0xE34; // uint32
                constexpr std::ptrdiff_t m_bForceTeamChangeSilent = 0xE40; // bool
                constexpr std::ptrdiff_t m_bLoadingRoundBackupData = 0xE41; // bool
                constexpr std::ptrdiff_t m_nMatchInfoShowType = 0xE78; // int32
                constexpr std::ptrdiff_t m_flMatchInfoDecidedTime = 0xE7C; // float32
                constexpr std::ptrdiff_t m_flCoopRespawnAndHealTime = 0xE98; // float32
                constexpr std::ptrdiff_t m_coopBonusCoinsFound = 0xE9C; // int32
                constexpr std::ptrdiff_t m_coopBonusPistolsOnly = 0xEA0; // bool
                constexpr std::ptrdiff_t m_coopPlayersInDeploymentZone = 0xEA1; // bool
                constexpr std::ptrdiff_t m_coopMissionDeadPlayerRespawnEnabled = 0xEA2; // bool
                constexpr std::ptrdiff_t mTeamDMLastWinningTeamNumber = 0xEA4; // int32
                constexpr std::ptrdiff_t mTeamDMLastThinkTime = 0xEA8; // float32
                constexpr std::ptrdiff_t m_flTeamDMLastAnnouncementTime = 0xEAC; // float32
                constexpr std::ptrdiff_t m_iAccountTerrorist = 0xEB0; // int32
                constexpr std::ptrdiff_t m_iAccountCT = 0xEB4; // int32
                constexpr std::ptrdiff_t m_iSpawnPointCount_Terrorist = 0xEB8; // int32
                constexpr std::ptrdiff_t m_iSpawnPointCount_CT = 0xEBC; // int32
                constexpr std::ptrdiff_t m_iMaxNumTerrorists = 0xEC0; // int32
                constexpr std::ptrdiff_t m_iMaxNumCTs = 0xEC4; // int32
                constexpr std::ptrdiff_t m_iLoserBonus = 0xEC8; // int32
                constexpr std::ptrdiff_t m_iLoserBonusMostRecentTeam = 0xECC; // int32
                constexpr std::ptrdiff_t m_tmNextPeriodicThink = 0xED0; // float32
                constexpr std::ptrdiff_t m_bVoiceWonMatchBragFired = 0xED4; // bool
                constexpr std::ptrdiff_t m_fWarmupNextChatNoticeTime = 0xED8; // float32
                constexpr std::ptrdiff_t m_iHostagesRescued = 0xEE0; // int32
                constexpr std::ptrdiff_t m_iHostagesTouched = 0xEE4; // int32
                constexpr std::ptrdiff_t m_flNextHostageAnnouncement = 0xEE8; // float32
                constexpr std::ptrdiff_t m_bNoTerroristsKilled = 0xEEC; // bool
                constexpr std::ptrdiff_t m_bNoCTsKilled = 0xEED; // bool
                constexpr std::ptrdiff_t m_bNoEnemiesKilled = 0xEEE; // bool
                constexpr std::ptrdiff_t m_bCanDonateWeapons = 0xEEF; // bool
                constexpr std::ptrdiff_t m_firstKillTime = 0xEF4; // float32
                constexpr std::ptrdiff_t m_firstBloodTime = 0xEFC; // float32
                constexpr std::ptrdiff_t m_hostageWasInjured = 0xF18; // bool
                constexpr std::ptrdiff_t m_hostageWasKilled = 0xF19; // bool
                constexpr std::ptrdiff_t m_bVoteCalled = 0xF28; // bool
                constexpr std::ptrdiff_t m_bServerVoteOnReset = 0xF29; // bool
                constexpr std::ptrdiff_t m_flVoteCheckThrottle = 0xF2C; // float32
                constexpr std::ptrdiff_t m_bBuyTimeEnded = 0xF30; // bool
                constexpr std::ptrdiff_t m_nLastFreezeEndBeep = 0xF34; // int32
                constexpr std::ptrdiff_t m_bTargetBombed = 0xF38; // bool
                constexpr std::ptrdiff_t m_bBombDefused = 0xF39; // bool
                constexpr std::ptrdiff_t m_bMapHasBombZone = 0xF3A; // bool
                constexpr std::ptrdiff_t m_vecMainCTSpawnPos = 0xF58; // Vector
                constexpr std::ptrdiff_t m_CTSpawnPointsMasterList = 0xF68; // CUtlVector<SpawnPoint*>
                constexpr std::ptrdiff_t m_TerroristSpawnPointsMasterList = 0xF80; // CUtlVector<SpawnPoint*>
                constexpr std::ptrdiff_t m_bRespawningAllRespawnablePlayers = 0xF98; // bool
                constexpr std::ptrdiff_t m_iNextCTSpawnPoint = 0xF9C; // int32
                constexpr std::ptrdiff_t m_flCTSpawnPointUsedTime = 0xFA0; // float32
                constexpr std::ptrdiff_t m_iNextTerroristSpawnPoint = 0xFA4; // int32
                constexpr std::ptrdiff_t m_flTerroristSpawnPointUsedTime = 0xFA8; // float32
                constexpr std::ptrdiff_t m_CTSpawnPoints = 0xFB0; // CUtlVector<SpawnPoint*>
                constexpr std::ptrdiff_t m_TerroristSpawnPoints = 0xFC8; // CUtlVector<SpawnPoint*>
                constexpr std::ptrdiff_t m_bIsUnreservedGameServer = 0xFE0; // bool
                constexpr std::ptrdiff_t m_fAutobalanceDisplayTime = 0xFE4; // float32
                constexpr std::ptrdiff_t m_bAllowWeaponSwitch = 0x1250; // bool
                constexpr std::ptrdiff_t m_bRoundTimeWarningTriggered = 0x1251; // bool
                constexpr std::ptrdiff_t m_phaseChangeAnnouncementTime = 0x1254; // GameTime_t
                constexpr std::ptrdiff_t m_fNextUpdateTeamClanNamesTime = 0x1258; // float32
                constexpr std::ptrdiff_t m_flLastThinkTime = 0x125C; // GameTime_t
                constexpr std::ptrdiff_t m_fAccumulatedRoundOffDamage = 0x1260; // float32
                constexpr std::ptrdiff_t m_nShorthandedBonusLastEvalRound = 0x1264; // int32
                constexpr std::ptrdiff_t m_nMatchAbortedEarlyReason = 0x14E0; // int32
                constexpr std::ptrdiff_t m_bHasTriggeredRoundStartMusic = 0x14E4; // bool
                constexpr std::ptrdiff_t m_bHasTriggeredCoopSpawnReset = 0x14E5; // bool
                constexpr std::ptrdiff_t m_bSwitchingTeamsAtRoundReset = 0x14E6; // bool
                constexpr std::ptrdiff_t m_pGameModeRules = 0x1500; // CCSGameModeRules*
                constexpr std::ptrdiff_t m_BtGlobalBlackboard = 0x1508; // KeyValues3
                constexpr std::ptrdiff_t m_hPlayerResource = 0x1568; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_RetakeRules = 0x1570; // CRetakeGameRules
                constexpr std::ptrdiff_t m_GuardianBotSkillLevelMax = 0x1754; // int32
                constexpr std::ptrdiff_t m_GuardianBotSkillLevelMin = 0x1758; // int32
                constexpr std::ptrdiff_t m_arrTeamUniqueKillWeaponsMatch = 0x1760; // CUtlVector<int32>[4]
                constexpr std::ptrdiff_t m_bTeamLastKillUsedUniqueWeaponMatch = 0x17C0; // bool[4]
                constexpr std::ptrdiff_t m_nMatchEndCount = 0x17E8; // uint8
                constexpr std::ptrdiff_t m_nTTeamIntroVariant = 0x17EC; // int32
                constexpr std::ptrdiff_t m_nCTTeamIntroVariant = 0x17F0; // int32
                constexpr std::ptrdiff_t m_bTeamIntroPeriod = 0x17F4; // bool
                constexpr std::ptrdiff_t m_fTeamIntroPeriodEnd = 0x17F8; // GameTime_t
                constexpr std::ptrdiff_t m_bPlayedTeamIntroVO = 0x17FC; // bool
                constexpr std::ptrdiff_t m_iRoundEndWinnerTeam = 0x1800; // int32
                constexpr std::ptrdiff_t m_eRoundEndReason = 0x1804; // int32
                constexpr std::ptrdiff_t m_bRoundEndShowTimerDefend = 0x1808; // bool
                constexpr std::ptrdiff_t m_iRoundEndTimerTime = 0x180C; // int32
                constexpr std::ptrdiff_t m_sRoundEndFunFactToken = 0x1810; // CUtlString
                constexpr std::ptrdiff_t m_iRoundEndFunFactPlayerSlot = 0x1818; // CPlayerSlot
                constexpr std::ptrdiff_t m_iRoundEndFunFactData1 = 0x181C; // int32
                constexpr std::ptrdiff_t m_iRoundEndFunFactData2 = 0x1820; // int32
                constexpr std::ptrdiff_t m_iRoundEndFunFactData3 = 0x1824; // int32
                constexpr std::ptrdiff_t m_sRoundEndMessage = 0x1828; // CUtlString
                constexpr std::ptrdiff_t m_iRoundEndPlayerCount = 0x1830; // int32
                constexpr std::ptrdiff_t m_bRoundEndNoMusic = 0x1834; // bool
                constexpr std::ptrdiff_t m_iRoundEndLegacy = 0x1838; // int32
                constexpr std::ptrdiff_t m_nRoundEndCount = 0x183C; // uint8
                constexpr std::ptrdiff_t m_iRoundStartRoundNumber = 0x1840; // int32
                constexpr std::ptrdiff_t m_nRoundStartCount = 0x1844; // uint8
                constexpr std::ptrdiff_t m_flLastPerfSampleTime = 0x5850; // float64
                constexpr std::ptrdiff_t m_bSkipNextServerPerfSample = 0x5858; // bool
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            namespace CCSTakeDamageInfoAPI {
            }
            // Parent: None
            // Fields count: 1
            namespace CCSGameModeRules {
                constexpr std::ptrdiff_t __m_pChainEntity = 0x8; // CNetworkVarChainer
            }
            // Parent: CCSGameModeRules
            // Fields count: 0
            namespace CCSGameModeRules_Noop {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseInstanceDomainInfo
            // MPulseLibraryBindings
            // MPulseDomainOptInFeatureTag
            namespace CCSGameModeScript {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseLibraryBindings
            namespace CCSGameModeScript_ConVars {
            }
            // Parent: CCSGameModeRules
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_WeaponSequence (CUtlString)
            namespace CCSGameModeRules_ArmsRace {
                constexpr std::ptrdiff_t m_WeaponSequence = 0x38; // CNetworkUtlVectorBase<CUtlString>
            }
            // Parent: CCSGameModeScript
            // Fields count: 1
            //
            // Metadata:
            // MPulseInstanceDomainInfo
            // MPulseLibraryBindings
            // MPulseDomainOptInFeatureTag
            namespace CCSArmsRaceScript {
                constexpr std::ptrdiff_t m_pOuter = 0xD8; // CCSGameModeRules_ArmsRace*
            }
            // Parent: CCSGameModeRules
            // Fields count: 3
            //
            // Metadata:
            // NetworkVarNames: m_flDMBonusStartTime (GameTime_t)
            // NetworkVarNames: m_flDMBonusTimeLength (float)
            // NetworkVarNames: m_nDMBonusWeaponLoadoutSlot (int16)
            namespace CCSGameModeRules_Deathmatch {
                constexpr std::ptrdiff_t m_flDMBonusStartTime = 0x38; // GameTime_t
                constexpr std::ptrdiff_t m_flDMBonusTimeLength = 0x3C; // float32
                constexpr std::ptrdiff_t m_nDMBonusWeaponLoadoutSlot = 0x40; // int16
            }
            // Parent: CCSGameModeScript
            // Fields count: 1
            //
            // Metadata:
            // MPulseInstanceDomainInfo
            // MPulseLibraryBindings
            // MPulseDomainOptInFeatureTag
            namespace CCSDeathmatchScript {
                constexpr std::ptrdiff_t m_pOuter = 0xD8; // CCSGameModeRules_Deathmatch*
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseLibraryBindings
            namespace CCSDeathmatchScript_ConVars {
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
            namespace CRetakeGameRules {
                constexpr std::ptrdiff_t m_nMatchSeed = 0xF8; // int32
                constexpr std::ptrdiff_t m_bBlockersPresent = 0xFC; // bool
                constexpr std::ptrdiff_t m_bRoundInProgress = 0xFD; // bool
                constexpr std::ptrdiff_t m_iFirstSecondHalfRound = 0x100; // int32
                constexpr std::ptrdiff_t m_iBombSite = 0x104; // int32
            }
            // Parent: None
            // Fields count: 0
            namespace QuestProgress {
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
            namespace CSPerRoundStats_t {
                constexpr std::ptrdiff_t m_iKills = 0x30; // int32
                constexpr std::ptrdiff_t m_iDeaths = 0x34; // int32
                constexpr std::ptrdiff_t m_iAssists = 0x38; // int32
                constexpr std::ptrdiff_t m_iDamage = 0x3C; // int32
                constexpr std::ptrdiff_t m_iEquipmentValue = 0x40; // int32
                constexpr std::ptrdiff_t m_iMoneySaved = 0x44; // int32
                constexpr std::ptrdiff_t m_iKillReward = 0x48; // int32
                constexpr std::ptrdiff_t m_iLiveTime = 0x4C; // int32
                constexpr std::ptrdiff_t m_iHeadShotKills = 0x50; // int32
                constexpr std::ptrdiff_t m_iObjective = 0x54; // int32
                constexpr std::ptrdiff_t m_iCashEarned = 0x58; // int32
                constexpr std::ptrdiff_t m_iUtilityDamage = 0x5C; // int32
                constexpr std::ptrdiff_t m_iEnemiesFlashed = 0x60; // int32
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
            namespace CSMatchStats_t {
                constexpr std::ptrdiff_t m_iEnemy5Ks = 0x64; // int32
                constexpr std::ptrdiff_t m_iEnemy4Ks = 0x68; // int32
                constexpr std::ptrdiff_t m_iEnemy3Ks = 0x6C; // int32
                constexpr std::ptrdiff_t m_iEnemyKnifeKills = 0x70; // int32
                constexpr std::ptrdiff_t m_iEnemyTaserKills = 0x74; // int32
                constexpr std::ptrdiff_t m_iEnemy2Ks = 0x78; // int32
                constexpr std::ptrdiff_t m_iUtility_Count = 0x7C; // int32
                constexpr std::ptrdiff_t m_iUtility_Successes = 0x80; // int32
                constexpr std::ptrdiff_t m_iUtility_Enemies = 0x84; // int32
                constexpr std::ptrdiff_t m_iFlash_Count = 0x88; // int32
                constexpr std::ptrdiff_t m_iFlash_Successes = 0x8C; // int32
                constexpr std::ptrdiff_t m_nHealthPointsRemovedTotal = 0x90; // int32
                constexpr std::ptrdiff_t m_nHealthPointsDealtTotal = 0x94; // int32
                constexpr std::ptrdiff_t m_nShotsFiredTotal = 0x98; // int32
                constexpr std::ptrdiff_t m_nShotsOnTargetTotal = 0x9C; // int32
                constexpr std::ptrdiff_t m_i1v1Count = 0xA0; // int32
                constexpr std::ptrdiff_t m_i1v1Wins = 0xA4; // int32
                constexpr std::ptrdiff_t m_i1v2Count = 0xA8; // int32
                constexpr std::ptrdiff_t m_i1v2Wins = 0xAC; // int32
                constexpr std::ptrdiff_t m_iEntryCount = 0xB0; // int32
                constexpr std::ptrdiff_t m_iEntryWins = 0xB4; // int32
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
            namespace CCSGO_TeamPreviewCharacterPosition {
                constexpr std::ptrdiff_t m_nVariant = 0x7A8; // int32
                constexpr std::ptrdiff_t m_nRandom = 0x7AC; // int32
                constexpr std::ptrdiff_t m_nOrdinal = 0x7B0; // int32
                constexpr std::ptrdiff_t m_sWeaponName = 0x7B8; // CUtlString
                constexpr std::ptrdiff_t m_xuid = 0x7C0; // uint64
                constexpr std::ptrdiff_t m_agentItem = 0x7C8; // CEconItemView
                constexpr std::ptrdiff_t m_glovesItem = 0xA40; // CEconItemView
                constexpr std::ptrdiff_t m_weaponItem = 0xCB8; // CEconItemView
            }
            // Parent: CCSGO_TeamPreviewCharacterPosition
            // Fields count: 0
            namespace CCSGO_TeamSelectCharacterPosition {
            }
            // Parent: CCSGO_TeamSelectCharacterPosition
            // Fields count: 0
            namespace CCSGO_TeamSelectTerroristPosition {
            }
            // Parent: CCSGO_TeamSelectCharacterPosition
            // Fields count: 0
            namespace CCSGO_TeamSelectCounterTerroristPosition {
            }
            // Parent: CCSGO_TeamPreviewCharacterPosition
            // Fields count: 0
            namespace CCSGO_TeamIntroCharacterPosition {
            }
            // Parent: CCSGO_TeamIntroCharacterPosition
            // Fields count: 0
            namespace CCSGO_TeamIntroTerroristPosition {
            }
            // Parent: CCSGO_TeamIntroCharacterPosition
            // Fields count: 0
            namespace CCSGO_TeamIntroCounterTerroristPosition {
            }
            // Parent: CCSGO_TeamIntroCharacterPosition
            // Fields count: 0
            namespace CCSGO_WingmanIntroCharacterPosition {
            }
            // Parent: CCSGO_WingmanIntroCharacterPosition
            // Fields count: 0
            namespace CCSGO_WingmanIntroTerroristPosition {
            }
            // Parent: CCSGO_WingmanIntroCharacterPosition
            // Fields count: 0
            namespace CCSGO_WingmanIntroCounterTerroristPosition {
            }
            // Parent: CBaseEntity
            // Fields count: 0
            namespace CCSMinimapBoundary {
            }
            // Parent: None
            // Fields count: 0
            namespace CCSGOPlayerAnimGraphState {
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
            namespace CPlayerPing {
                constexpr std::ptrdiff_t m_hPlayer = 0x7B0; // CHandle<CCSPlayerPawn>
                constexpr std::ptrdiff_t m_hPingedEntity = 0x7B4; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_iType = 0x7B8; // int32
                constexpr std::ptrdiff_t m_bUrgent = 0x7BC; // bool
                constexpr std::ptrdiff_t m_szPlaceName = 0x7BD; // char[18]
            }
            // Parent: CPlayerPawnComponent
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_hPlayerPing (CHandle< CBaseEntity>)
            namespace CCSPlayer_PingServices {
                constexpr std::ptrdiff_t m_flPlayerPingTokens = 0x40; // GameTime_t[5]
                constexpr std::ptrdiff_t m_hPlayerPing = 0x54; // CHandle<CBaseEntity>
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
            namespace CCSPlayerResource {
                constexpr std::ptrdiff_t m_bHostageAlive = 0x7A8; // bool[12]
                constexpr std::ptrdiff_t m_isHostageFollowingSomeone = 0x7B4; // bool[12]
                constexpr std::ptrdiff_t m_iHostageEntityIDs = 0x7C0; // CEntityIndex[12]
                constexpr std::ptrdiff_t m_bombsiteCenterA = 0x7F0; // Vector
                constexpr std::ptrdiff_t m_bombsiteCenterB = 0x7FC; // Vector
                constexpr std::ptrdiff_t m_hostageRescueX = 0x808; // int32[4]
                constexpr std::ptrdiff_t m_hostageRescueY = 0x818; // int32[4]
                constexpr std::ptrdiff_t m_hostageRescueZ = 0x828; // int32[4]
                constexpr std::ptrdiff_t m_bEndMatchNextMapAllVoted = 0x838; // bool
                constexpr std::ptrdiff_t m_foundGoalPositions = 0x839; // bool
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            namespace CCSPlayerControllerAPI {
            }
            // Parent: CPlayerPawnComponent
            // Fields count: 0
            namespace CPlayer_ViewModelServices {
            }
        }
        // Module: libsoundsystem.so
        // Classes count: 50
        // Enums count: 0
        namespace libsoundsystem {
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVoiceContainerBase {
                constexpr std::ptrdiff_t m_curves = 0x20; // CUtlDict<CPiecewiseCurve,F(size=1)>
            }
            // Parent: CVoiceContainerBase
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVoiceContainerDefault {
            }
            // Parent: CVoiceContainerBase
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVoiceContainerWavFileReader {
                constexpr std::ptrdiff_t m_wavFilePath = 0x60; // CUtlString
            }
            // Parent: CVoiceContainerWavFileReader
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVoiceContainerTestConstant {
                constexpr std::ptrdiff_t m_flTestConstantParam = 0x68; // bool
            }
            // Parent: CVoiceContainerBase
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVoiceContainerTestNestedDynamic {
                constexpr std::ptrdiff_t m_SoundToPlay = 0x60; // CStrongHandle<InfoForResourceTypeCVoiceContainerBase>
                constexpr std::ptrdiff_t m_flTestConstantParam = 0x68; // float32
            }
            // Parent: CVoiceContainerBase
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVoiceContainerDecayingSineWave {
                constexpr std::ptrdiff_t m_flFrequency = 0x60; // float32
                constexpr std::ptrdiff_t m_flDecayTime = 0x64; // float32
            }
            // Parent: CVoiceContainerDecayingSineWave
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVoiceContainerAmpedDecayingSineWave {
                constexpr std::ptrdiff_t m_flGainAmount = 0x68; // float32
            }
            // Parent: CVoiceContainerBase
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVoiceContainerRealtimeFMSineWave {
                constexpr std::ptrdiff_t m_flCarrierFrequency = 0x60; // float32
                constexpr std::ptrdiff_t m_flModulatorFrequency = 0x64; // float32
                constexpr std::ptrdiff_t m_flModulatorAmount = 0x68; // float32
            }
            // Parent: CVoiceContainerBase
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVoiceContainerBlend {
                constexpr std::ptrdiff_t m_hSoundOne = 0x60; // CStrongHandle<InfoForResourceTypeCVoiceContainerBase>
                constexpr std::ptrdiff_t m_hSoundTwo = 0x68; // CStrongHandle<InfoForResourceTypeCVoiceContainerBase>
                constexpr std::ptrdiff_t m_flBlendAmount = 0x70; // float32
            }
            // Parent: CVoiceContainerBase
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVoiceContainerEngineSound {
                constexpr std::ptrdiff_t m_SoundToPlay = 0x60; // CStrongHandle<InfoForResourceTypeCVoiceContainerBase>
                constexpr std::ptrdiff_t m_flTestConstantParam = 0x68; // float32
                constexpr std::ptrdiff_t m_flTestSoundEventBoundParam = 0x6C; // float32
                constexpr std::ptrdiff_t m_flEngineRPM = 0x70; // float32
            }
            // Parent: CVoiceContainerWavFileReader
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVoiceContainerEnvelopeAnalyzer {
                constexpr std::ptrdiff_t m_envBuffer = 0x68; // CUtlVector<float32>
            }
            // Parent: CVoiceContainerBase
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVoiceContainerRandomSampler {
                constexpr std::ptrdiff_t m_flLoudAmplitude = 0x60; // float32
                constexpr std::ptrdiff_t m_flLoudAmplitudeJitter = 0x64; // float32
                constexpr std::ptrdiff_t m_flSoftAmplitude = 0x68; // float32
                constexpr std::ptrdiff_t m_flSoftAmplitudeJitter = 0x6C; // float32
                constexpr std::ptrdiff_t m_flLoudTimeJitter = 0x70; // float32
                constexpr std::ptrdiff_t m_flSoftTimeJitter = 0x74; // float32
                constexpr std::ptrdiff_t m_grainResources = 0x78; // CUtlVector<CStrongHandle<InfoForResourceTypeCVoiceContainerBase>>
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VMixFilterDesc_t {
                constexpr std::ptrdiff_t m_nFilterType = 0x0; // VMixFilterType_t
                constexpr std::ptrdiff_t m_nFilterSlope = 0x2; // VMixFilterSlope_t
                constexpr std::ptrdiff_t m_bEnabled = 0x3; // bool
                constexpr std::ptrdiff_t m_fldbGain = 0x4; // float32
                constexpr std::ptrdiff_t m_flCutoffFreq = 0x8; // float32
                constexpr std::ptrdiff_t m_flQ = 0xC; // float32
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VMixEQ8Desc_t {
                constexpr std::ptrdiff_t m_stages = 0x0; // VMixFilterDesc_t[8]
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VMixDelayDesc_t {
                constexpr std::ptrdiff_t m_feedbackFilter = 0x0; // VMixFilterDesc_t
                constexpr std::ptrdiff_t m_bEnableFilter = 0x10; // bool
                constexpr std::ptrdiff_t m_flDelay = 0x14; // float32
                constexpr std::ptrdiff_t m_flDirectGain = 0x18; // float32
                constexpr std::ptrdiff_t m_flDelayGain = 0x1C; // float32
                constexpr std::ptrdiff_t m_flFeedbackGain = 0x20; // float32
                constexpr std::ptrdiff_t m_flWidth = 0x24; // float32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VMixPannerDesc_t {
                constexpr std::ptrdiff_t m_type = 0x0; // VMixPannerType_t
                constexpr std::ptrdiff_t m_flStrength = 0x4; // float32
            }
            // Parent: None
            // Fields count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VMixModDelayDesc_t {
                constexpr std::ptrdiff_t m_feedbackFilter = 0x0; // VMixFilterDesc_t
                constexpr std::ptrdiff_t m_bPhaseInvert = 0x10; // bool
                constexpr std::ptrdiff_t m_flGlideTime = 0x14; // float32
                constexpr std::ptrdiff_t m_flDelay = 0x18; // float32
                constexpr std::ptrdiff_t m_flOutputGain = 0x1C; // float32
                constexpr std::ptrdiff_t m_flFeedbackGain = 0x20; // float32
                constexpr std::ptrdiff_t m_flModRate = 0x24; // float32
                constexpr std::ptrdiff_t m_flModDepth = 0x28; // float32
                constexpr std::ptrdiff_t m_bApplyAntialiasing = 0x2C; // bool
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VMixDiffusorDesc_t {
                constexpr std::ptrdiff_t m_flSize = 0x0; // float32
                constexpr std::ptrdiff_t m_flComplexity = 0x4; // float32
                constexpr std::ptrdiff_t m_flFeedback = 0x8; // float32
                constexpr std::ptrdiff_t m_flOutputGain = 0xC; // float32
            }
            // Parent: None
            // Fields count: 17
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VMixBoxverbDesc_t {
                constexpr std::ptrdiff_t m_flSizeMax = 0x0; // float32
                constexpr std::ptrdiff_t m_flSizeMin = 0x4; // float32
                constexpr std::ptrdiff_t m_flComplexity = 0x8; // float32
                constexpr std::ptrdiff_t m_flDiffusion = 0xC; // float32
                constexpr std::ptrdiff_t m_flModDepth = 0x10; // float32
                constexpr std::ptrdiff_t m_flModRate = 0x14; // float32
                constexpr std::ptrdiff_t m_bParallel = 0x18; // bool
                constexpr std::ptrdiff_t m_filterType = 0x1C; // VMixFilterDesc_t
                constexpr std::ptrdiff_t m_flWidth = 0x2C; // float32
                constexpr std::ptrdiff_t m_flHeight = 0x30; // float32
                constexpr std::ptrdiff_t m_flDepth = 0x34; // float32
                constexpr std::ptrdiff_t m_flFeedbackScale = 0x38; // float32
                constexpr std::ptrdiff_t m_flFeedbackWidth = 0x3C; // float32
                constexpr std::ptrdiff_t m_flFeedbackHeight = 0x40; // float32
                constexpr std::ptrdiff_t m_flFeedbackDepth = 0x44; // float32
                constexpr std::ptrdiff_t m_flOutputGain = 0x48; // float32
                constexpr std::ptrdiff_t m_flTaps = 0x4C; // float32
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VMixFreeverbDesc_t {
                constexpr std::ptrdiff_t m_flRoomSize = 0x0; // float32
                constexpr std::ptrdiff_t m_flDamp = 0x4; // float32
                constexpr std::ptrdiff_t m_flWidth = 0x8; // float32
                constexpr std::ptrdiff_t m_flLateReflections = 0xC; // float32
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VMixPlateverbDesc_t {
                constexpr std::ptrdiff_t m_flPrefilter = 0x0; // float32
                constexpr std::ptrdiff_t m_flInputDiffusion1 = 0x4; // float32
                constexpr std::ptrdiff_t m_flInputDiffusion2 = 0x8; // float32
                constexpr std::ptrdiff_t m_flDecay = 0xC; // float32
                constexpr std::ptrdiff_t m_flDamp = 0x10; // float32
                constexpr std::ptrdiff_t m_flFeedbackDiffusion1 = 0x14; // float32
                constexpr std::ptrdiff_t m_flFeedbackDiffusion2 = 0x18; // float32
            }
            // Parent: None
            // Fields count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VMixDynamicsDesc_t {
                constexpr std::ptrdiff_t m_fldbGain = 0x0; // float32
                constexpr std::ptrdiff_t m_fldbNoiseGateThreshold = 0x4; // float32
                constexpr std::ptrdiff_t m_fldbCompressionThreshold = 0x8; // float32
                constexpr std::ptrdiff_t m_fldbLimiterThreshold = 0xC; // float32
                constexpr std::ptrdiff_t m_fldbKneeWidth = 0x10; // float32
                constexpr std::ptrdiff_t m_flRatio = 0x14; // float32
                constexpr std::ptrdiff_t m_flLimiterRatio = 0x18; // float32
                constexpr std::ptrdiff_t m_flAttackTimeMS = 0x1C; // float32
                constexpr std::ptrdiff_t m_flReleaseTimeMS = 0x20; // float32
                constexpr std::ptrdiff_t m_flRMSTimeMS = 0x24; // float32
                constexpr std::ptrdiff_t m_flWetMix = 0x28; // float32
                constexpr std::ptrdiff_t m_bPeakMode = 0x2C; // bool
            }
            // Parent: None
            // Fields count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VMixDynamicsCompressorDesc_t {
                constexpr std::ptrdiff_t m_fldbOutputGain = 0x0; // float32
                constexpr std::ptrdiff_t m_fldbCompressionThreshold = 0x4; // float32
                constexpr std::ptrdiff_t m_fldbKneeWidth = 0x8; // float32
                constexpr std::ptrdiff_t m_flCompressionRatio = 0xC; // float32
                constexpr std::ptrdiff_t m_flAttackTimeMS = 0x10; // float32
                constexpr std::ptrdiff_t m_flReleaseTimeMS = 0x14; // float32
                constexpr std::ptrdiff_t m_flRMSTimeMS = 0x18; // float32
                constexpr std::ptrdiff_t m_flWetMix = 0x1C; // float32
                constexpr std::ptrdiff_t m_bPeakMode = 0x20; // bool
            }
            // Parent: None
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VMixDynamicsBand_t {
                constexpr std::ptrdiff_t m_fldbGainInput = 0x0; // float32
                constexpr std::ptrdiff_t m_fldbGainOutput = 0x4; // float32
                constexpr std::ptrdiff_t m_fldbThresholdBelow = 0x8; // float32
                constexpr std::ptrdiff_t m_fldbThresholdAbove = 0xC; // float32
                constexpr std::ptrdiff_t m_flRatioBelow = 0x10; // float32
                constexpr std::ptrdiff_t m_flRatioAbove = 0x14; // float32
                constexpr std::ptrdiff_t m_flAttackTimeMS = 0x18; // float32
                constexpr std::ptrdiff_t m_flReleaseTimeMS = 0x1C; // float32
                constexpr std::ptrdiff_t m_bEnable = 0x20; // bool
                constexpr std::ptrdiff_t m_bSolo = 0x21; // bool
            }
            // Parent: None
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VMixDynamics3BandDesc_t {
                constexpr std::ptrdiff_t m_fldbGainOutput = 0x0; // float32
                constexpr std::ptrdiff_t m_flRMSTimeMS = 0x4; // float32
                constexpr std::ptrdiff_t m_fldbKneeWidth = 0x8; // float32
                constexpr std::ptrdiff_t m_flDepth = 0xC; // float32
                constexpr std::ptrdiff_t m_flWetMix = 0x10; // float32
                constexpr std::ptrdiff_t m_flTimeScale = 0x14; // float32
                constexpr std::ptrdiff_t m_flLowCutoffFreq = 0x18; // float32
                constexpr std::ptrdiff_t m_flHighCutoffFreq = 0x1C; // float32
                constexpr std::ptrdiff_t m_bPeakMode = 0x20; // bool
                constexpr std::ptrdiff_t m_bandDesc = 0x24; // VMixDynamicsBand_t[3]
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VMixEnvelopeDesc_t {
                constexpr std::ptrdiff_t m_flAttackTimeMS = 0x0; // float32
                constexpr std::ptrdiff_t m_flHoldTimeMS = 0x4; // float32
                constexpr std::ptrdiff_t m_flReleaseTimeMS = 0x8; // float32
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VMixPitchShiftDesc_t {
                constexpr std::ptrdiff_t m_nGrainSampleCount = 0x0; // int32
                constexpr std::ptrdiff_t m_flPitchShift = 0x4; // float32
                constexpr std::ptrdiff_t m_nQuality = 0x8; // int32
                constexpr std::ptrdiff_t m_nProcType = 0xC; // int32
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VMixConvolutionDesc_t {
                constexpr std::ptrdiff_t m_fldbGain = 0x0; // float32
                constexpr std::ptrdiff_t m_flPreDelayMS = 0x4; // float32
                constexpr std::ptrdiff_t m_flWetMix = 0x8; // float32
                constexpr std::ptrdiff_t m_fldbLow = 0xC; // float32
                constexpr std::ptrdiff_t m_fldbMid = 0x10; // float32
                constexpr std::ptrdiff_t m_fldbHigh = 0x14; // float32
                constexpr std::ptrdiff_t m_flLowCutoffFreq = 0x18; // float32
                constexpr std::ptrdiff_t m_flHighCutoffFreq = 0x1C; // float32
            }
            // Parent: None
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VMixVocoderDesc_t {
                constexpr std::ptrdiff_t m_nBandCount = 0x0; // int32
                constexpr std::ptrdiff_t m_flBandwidth = 0x4; // float32
                constexpr std::ptrdiff_t m_fldBModGain = 0x8; // float32
                constexpr std::ptrdiff_t m_flFreqRangeStart = 0xC; // float32
                constexpr std::ptrdiff_t m_flFreqRangeEnd = 0x10; // float32
                constexpr std::ptrdiff_t m_fldBUnvoicedGain = 0x14; // float32
                constexpr std::ptrdiff_t m_flAttackTimeMS = 0x18; // float32
                constexpr std::ptrdiff_t m_flReleaseTimeMS = 0x1C; // float32
                constexpr std::ptrdiff_t m_nDebugBand = 0x20; // int32
                constexpr std::ptrdiff_t m_bPeakMode = 0x24; // bool
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VMixShaperDesc_t {
                constexpr std::ptrdiff_t m_nShape = 0x0; // int32
                constexpr std::ptrdiff_t m_fldbDrive = 0x4; // float32
                constexpr std::ptrdiff_t m_fldbOutputGain = 0x8; // float32
                constexpr std::ptrdiff_t m_flWetMix = 0xC; // float32
                constexpr std::ptrdiff_t m_nOversampleFactor = 0x10; // int32
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VMixUtilityDesc_t {
                constexpr std::ptrdiff_t m_nOp = 0x0; // VMixChannelOperation_t
                constexpr std::ptrdiff_t m_flInputPan = 0x4; // float32
                constexpr std::ptrdiff_t m_flOutputBalance = 0x8; // float32
                constexpr std::ptrdiff_t m_fldbOutputGain = 0xC; // float32
                constexpr std::ptrdiff_t m_bBassMono = 0x10; // bool
                constexpr std::ptrdiff_t m_flBassFreq = 0x14; // float32
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VMixAutoFilterDesc_t {
                constexpr std::ptrdiff_t m_flEnvelopeAmount = 0x0; // float32
                constexpr std::ptrdiff_t m_flAttackTimeMS = 0x4; // float32
                constexpr std::ptrdiff_t m_flReleaseTimeMS = 0x8; // float32
                constexpr std::ptrdiff_t m_filter = 0xC; // VMixFilterDesc_t
                constexpr std::ptrdiff_t m_flLFOAmount = 0x1C; // float32
                constexpr std::ptrdiff_t m_flLFORate = 0x20; // float32
                constexpr std::ptrdiff_t m_flPhase = 0x24; // float32
                constexpr std::ptrdiff_t m_nLFOShape = 0x28; // VMixLFOShape_t
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VMixOscDesc_t {
                constexpr std::ptrdiff_t oscType = 0x0; // VMixLFOShape_t
                constexpr std::ptrdiff_t m_freq = 0x4; // float32
                constexpr std::ptrdiff_t m_flPhase = 0x8; // float32
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VMixEffectChainDesc_t {
                constexpr std::ptrdiff_t m_flCrossfadeTime = 0x0; // float32
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VMixSubgraphSwitchDesc_t {
                constexpr std::ptrdiff_t m_interpolationMode = 0x0; // VMixSubgraphSwitchInterpolationType_t
                constexpr std::ptrdiff_t m_bOnlyTailsOnFadeOut = 0x4; // bool
                constexpr std::ptrdiff_t m_flInterpolationTime = 0x8; // float32
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyElementNameFn
            namespace CSosGroupActionSchema {
                constexpr std::ptrdiff_t m_name = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_actionType = 0x10; // ActionType_t
                constexpr std::ptrdiff_t m_actionInstanceType = 0x14; // ActionType_t
            }
            // Parent: CSosGroupActionSchema
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSosGroupActionLimitSchema {
                constexpr std::ptrdiff_t m_nMaxCount = 0x18; // int32
                constexpr std::ptrdiff_t m_nStopType = 0x1C; // SosActionStopType_t
                constexpr std::ptrdiff_t m_nSortType = 0x20; // SosActionSortType_t
            }
            // Parent: CSosGroupActionSchema
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSosGroupActionTimeLimitSchema {
                constexpr std::ptrdiff_t m_flMaxDuration = 0x18; // float32
            }
            // Parent: CSosGroupActionSchema
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSosGroupActionTimeBlockLimitSchema {
                constexpr std::ptrdiff_t m_nMaxCount = 0x18; // int32
                constexpr std::ptrdiff_t m_flMaxDuration = 0x1C; // float32
            }
            // Parent: CSosGroupActionSchema
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSosGroupActionSetSoundeventParameterSchema {
                constexpr std::ptrdiff_t m_nMaxCount = 0x18; // int32
                constexpr std::ptrdiff_t m_flMinValue = 0x1C; // float32
                constexpr std::ptrdiff_t m_flMaxValue = 0x20; // float32
                constexpr std::ptrdiff_t m_opvarName = 0x28; // CUtlString
                constexpr std::ptrdiff_t m_nSortType = 0x30; // SosActionSortType_t
            }
            // Parent: CSosGroupActionSchema
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSosGroupActionSoundeventClusterSchema {
                constexpr std::ptrdiff_t m_nMinNearby = 0x18; // int32
                constexpr std::ptrdiff_t m_flClusterEpsilon = 0x1C; // float32
                constexpr std::ptrdiff_t m_shouldPlayOpvar = 0x20; // CUtlString
                constexpr std::ptrdiff_t m_shouldPlayClusterChild = 0x28; // CUtlString
                constexpr std::ptrdiff_t m_clusterSizeOpvar = 0x30; // CUtlString
                constexpr std::ptrdiff_t m_groupBoundingBoxMinsOpvar = 0x38; // CUtlString
                constexpr std::ptrdiff_t m_groupBoundingBoxMaxsOpvar = 0x40; // CUtlString
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSosGroupBranchPattern {
                constexpr std::ptrdiff_t m_bMatchEventName = 0x8; // bool
                constexpr std::ptrdiff_t m_bMatchEventSubString = 0x9; // bool
                constexpr std::ptrdiff_t m_bMatchEntIndex = 0xA; // bool
                constexpr std::ptrdiff_t m_bMatchOpvar = 0xB; // bool
            }
            // Parent: CSosGroupBranchPattern
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSosGroupMatchPattern {
                constexpr std::ptrdiff_t m_matchSoundEventName = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_matchSoundEventSubString = 0x18; // CUtlString
                constexpr std::ptrdiff_t m_flEntIndex = 0x20; // float32
                constexpr std::ptrdiff_t m_flOpvar = 0x24; // float32
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyElementNameFn
            namespace CSosSoundEventGroupSchema {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_nType = 0x8; // SosGroupType_t
                constexpr std::ptrdiff_t m_bIsBlocking = 0xC; // bool
                constexpr std::ptrdiff_t m_nBlockMaxCount = 0x10; // int32
                constexpr std::ptrdiff_t m_bInvertMatch = 0x14; // bool
                constexpr std::ptrdiff_t m_matchPattern = 0x18; // CSosGroupMatchPattern
                constexpr std::ptrdiff_t m_branchPattern = 0x40; // CSosGroupBranchPattern
                constexpr std::ptrdiff_t m_vActions = 0xB0; // CSosGroupActionSchema*[4]
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSosSoundEventGroupListSchema {
                constexpr std::ptrdiff_t m_groupList = 0x0; // CUtlVector<CSosSoundEventGroupSchema>
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace SosEditItemInfo_t {
                constexpr std::ptrdiff_t itemType = 0x0; // SosEditItemType_t
                constexpr std::ptrdiff_t itemName = 0x8; // CUtlString
                constexpr std::ptrdiff_t itemTypeName = 0x10; // CUtlString
                constexpr std::ptrdiff_t itemKVString = 0x20; // CUtlString
                constexpr std::ptrdiff_t itemPos = 0x28; // Vector2D
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace SelectedEditItemInfo_t {
                constexpr std::ptrdiff_t m_EditItems = 0x0; // CUtlVector<SosEditItemInfo_t>
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSoundEventMetaData {
                constexpr std::ptrdiff_t m_soundEventVMix = 0x0; // CStrongHandle<InfoForResourceTypeCVMixListResource>
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CDSPMixgroupModifier {
                constexpr std::ptrdiff_t m_mixgroup = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_flModifier = 0x8; // float32
                constexpr std::ptrdiff_t m_flModifierMin = 0xC; // float32
                constexpr std::ptrdiff_t m_flSourceModifier = 0x10; // float32
                constexpr std::ptrdiff_t m_flSourceModifierMin = 0x14; // float32
                constexpr std::ptrdiff_t m_flListenerReverbModifierWhenSourceReverbIsActive = 0x18; // float32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CDspPresetModifierList {
                constexpr std::ptrdiff_t m_dspName = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_modifiers = 0x8; // CUtlVector<CDSPMixgroupModifier>
            }
        }
        // Module: libvphysics2.so
        // Classes count: 88
        // Enums count: 0
        namespace libvphysics2 {
            // Parent: None
            // Fields count: 35
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CFeJiggleBone {
                constexpr std::ptrdiff_t m_nFlags = 0x0; // uint32
                constexpr std::ptrdiff_t m_flLength = 0x4; // float32
                constexpr std::ptrdiff_t m_flTipMass = 0x8; // float32
                constexpr std::ptrdiff_t m_flYawStiffness = 0xC; // float32
                constexpr std::ptrdiff_t m_flYawDamping = 0x10; // float32
                constexpr std::ptrdiff_t m_flPitchStiffness = 0x14; // float32
                constexpr std::ptrdiff_t m_flPitchDamping = 0x18; // float32
                constexpr std::ptrdiff_t m_flAlongStiffness = 0x1C; // float32
                constexpr std::ptrdiff_t m_flAlongDamping = 0x20; // float32
                constexpr std::ptrdiff_t m_flAngleLimit = 0x24; // float32
                constexpr std::ptrdiff_t m_flMinYaw = 0x28; // float32
                constexpr std::ptrdiff_t m_flMaxYaw = 0x2C; // float32
                constexpr std::ptrdiff_t m_flYawFriction = 0x30; // float32
                constexpr std::ptrdiff_t m_flYawBounce = 0x34; // float32
                constexpr std::ptrdiff_t m_flMinPitch = 0x38; // float32
                constexpr std::ptrdiff_t m_flMaxPitch = 0x3C; // float32
                constexpr std::ptrdiff_t m_flPitchFriction = 0x40; // float32
                constexpr std::ptrdiff_t m_flPitchBounce = 0x44; // float32
                constexpr std::ptrdiff_t m_flBaseMass = 0x48; // float32
                constexpr std::ptrdiff_t m_flBaseStiffness = 0x4C; // float32
                constexpr std::ptrdiff_t m_flBaseDamping = 0x50; // float32
                constexpr std::ptrdiff_t m_flBaseMinLeft = 0x54; // float32
                constexpr std::ptrdiff_t m_flBaseMaxLeft = 0x58; // float32
                constexpr std::ptrdiff_t m_flBaseLeftFriction = 0x5C; // float32
                constexpr std::ptrdiff_t m_flBaseMinUp = 0x60; // float32
                constexpr std::ptrdiff_t m_flBaseMaxUp = 0x64; // float32
                constexpr std::ptrdiff_t m_flBaseUpFriction = 0x68; // float32
                constexpr std::ptrdiff_t m_flBaseMinForward = 0x6C; // float32
                constexpr std::ptrdiff_t m_flBaseMaxForward = 0x70; // float32
                constexpr std::ptrdiff_t m_flBaseForwardFriction = 0x74; // float32
                constexpr std::ptrdiff_t m_flRadius0 = 0x78; // float32
                constexpr std::ptrdiff_t m_flRadius1 = 0x7C; // float32
                constexpr std::ptrdiff_t m_vPoint0 = 0x80; // Vector
                constexpr std::ptrdiff_t m_vPoint1 = 0x8C; // Vector
                constexpr std::ptrdiff_t m_nCollisionMask = 0x98; // uint16
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CFeNamedJiggleBone {
                constexpr std::ptrdiff_t m_strParentBone = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_transform = 0x10; // CTransform
                constexpr std::ptrdiff_t m_nJiggleParent = 0x30; // uint32
                constexpr std::ptrdiff_t m_jiggleBone = 0x34; // CFeJiggleBone
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CFeIndexedJiggleBone {
                constexpr std::ptrdiff_t m_nNode = 0x0; // uint32
                constexpr std::ptrdiff_t m_nJiggleParent = 0x4; // uint32
                constexpr std::ptrdiff_t m_jiggleBone = 0x8; // CFeJiggleBone
            }
            // Parent: None
            // Fields count: 100
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace PhysFeModelDesc_t {
                constexpr std::ptrdiff_t m_CtrlHash = 0x0; // CUtlVector<uint32>
                constexpr std::ptrdiff_t m_CtrlName = 0x18; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_nStaticNodeFlags = 0x30; // uint32
                constexpr std::ptrdiff_t m_nDynamicNodeFlags = 0x34; // uint32
                constexpr std::ptrdiff_t m_flLocalForce = 0x38; // float32
                constexpr std::ptrdiff_t m_flLocalRotation = 0x3C; // float32
                constexpr std::ptrdiff_t m_nNodeCount = 0x40; // uint16
                constexpr std::ptrdiff_t m_nStaticNodes = 0x42; // uint16
                constexpr std::ptrdiff_t m_nRotLockStaticNodes = 0x44; // uint16
                constexpr std::ptrdiff_t m_nFirstPositionDrivenNode = 0x46; // uint16
                constexpr std::ptrdiff_t m_nSimdTriCount1 = 0x48; // uint16
                constexpr std::ptrdiff_t m_nSimdTriCount2 = 0x4A; // uint16
                constexpr std::ptrdiff_t m_nSimdQuadCount1 = 0x4C; // uint16
                constexpr std::ptrdiff_t m_nSimdQuadCount2 = 0x4E; // uint16
                constexpr std::ptrdiff_t m_nQuadCount1 = 0x50; // uint16
                constexpr std::ptrdiff_t m_nQuadCount2 = 0x52; // uint16
                constexpr std::ptrdiff_t m_nTreeDepth = 0x54; // uint16
                constexpr std::ptrdiff_t m_nNodeBaseJiggleboneDependsCount = 0x56; // uint16
                constexpr std::ptrdiff_t m_nRopeCount = 0x58; // uint16
                constexpr std::ptrdiff_t m_Ropes = 0x60; // CUtlVector<uint16>
                constexpr std::ptrdiff_t m_NodeBases = 0x78; // CUtlVector<FeNodeBase_t>
                constexpr std::ptrdiff_t m_SimdNodeBases = 0x90; // CUtlVector<FeSimdNodeBase_t>
                constexpr std::ptrdiff_t m_Quads = 0xA8; // CUtlVector<FeQuad_t>
                constexpr std::ptrdiff_t m_SimdQuads = 0xC0; // CUtlVector<FeSimdQuad_t>
                constexpr std::ptrdiff_t m_SimdTris = 0xD8; // CUtlVector<FeSimdTri_t>
                constexpr std::ptrdiff_t m_SimdRods = 0xF0; // CUtlVector<FeSimdRodConstraint_t>
                constexpr std::ptrdiff_t m_SimdRodsAnim = 0x108; // CUtlVector<FeSimdRodConstraintAnim_t>
                constexpr std::ptrdiff_t m_InitPose = 0x120; // CUtlVector<CTransform>
                constexpr std::ptrdiff_t m_Rods = 0x138; // CUtlVector<FeRodConstraint_t>
                constexpr std::ptrdiff_t m_Twists = 0x150; // CUtlVector<FeTwistConstraint_t>
                constexpr std::ptrdiff_t m_AxialEdges = 0x168; // CUtlVector<FeAxialEdgeBend_t>
                constexpr std::ptrdiff_t m_NodeInvMasses = 0x180; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_CtrlOffsets = 0x198; // CUtlVector<FeCtrlOffset_t>
                constexpr std::ptrdiff_t m_CtrlOsOffsets = 0x1B0; // CUtlVector<FeCtrlOsOffset_t>
                constexpr std::ptrdiff_t m_FollowNodes = 0x1C8; // CUtlVector<FeFollowNode_t>
                constexpr std::ptrdiff_t m_CollisionPlanes = 0x1E0; // CUtlVector<FeCollisionPlane_t>
                constexpr std::ptrdiff_t m_NodeIntegrator = 0x1F8; // CUtlVector<FeNodeIntegrator_t>
                constexpr std::ptrdiff_t m_SpringIntegrator = 0x210; // CUtlVector<FeSpringIntegrator_t>
                constexpr std::ptrdiff_t m_SimdSpringIntegrator = 0x228; // CUtlVector<FeSimdSpringIntegrator_t>
                constexpr std::ptrdiff_t m_WorldCollisionParams = 0x240; // CUtlVector<FeWorldCollisionParams_t>
                constexpr std::ptrdiff_t m_LegacyStretchForce = 0x258; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_NodeCollisionRadii = 0x270; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_DynNodeFriction = 0x288; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_LocalRotation = 0x2A0; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_LocalForce = 0x2B8; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_TaperedCapsuleStretches = 0x2D0; // CUtlVector<FeTaperedCapsuleStretch_t>
                constexpr std::ptrdiff_t m_TaperedCapsuleRigids = 0x2E8; // CUtlVector<FeTaperedCapsuleRigid_t>
                constexpr std::ptrdiff_t m_SphereRigids = 0x300; // CUtlVector<FeSphereRigid_t>
                constexpr std::ptrdiff_t m_WorldCollisionNodes = 0x318; // CUtlVector<uint16>
                constexpr std::ptrdiff_t m_TreeParents = 0x330; // CUtlVector<uint16>
                constexpr std::ptrdiff_t m_TreeCollisionMasks = 0x348; // CUtlVector<uint16>
                constexpr std::ptrdiff_t m_TreeChildren = 0x360; // CUtlVector<FeTreeChildren_t>
                constexpr std::ptrdiff_t m_FreeNodes = 0x378; // CUtlVector<uint16>
                constexpr std::ptrdiff_t m_FitMatrices = 0x390; // CUtlVector<FeFitMatrix_t>
                constexpr std::ptrdiff_t m_FitWeights = 0x3A8; // CUtlVector<FeFitWeight_t>
                constexpr std::ptrdiff_t m_ReverseOffsets = 0x3C0; // CUtlVector<FeNodeReverseOffset_t>
                constexpr std::ptrdiff_t m_AnimStrayRadii = 0x3D8; // CUtlVector<FeAnimStrayRadius_t>
                constexpr std::ptrdiff_t m_SimdAnimStrayRadii = 0x3F0; // CUtlVector<FeSimdAnimStrayRadius_t>
                constexpr std::ptrdiff_t m_KelagerBends = 0x408; // CUtlVector<FeKelagerBend2_t>
                constexpr std::ptrdiff_t m_CtrlSoftOffsets = 0x420; // CUtlVector<FeCtrlSoftOffset_t>
                constexpr std::ptrdiff_t m_JiggleBones = 0x438; // CUtlVector<CFeIndexedJiggleBone>
                constexpr std::ptrdiff_t m_SourceElems = 0x450; // CUtlVector<uint16>
                constexpr std::ptrdiff_t m_GoalDampedSpringIntegrators = 0x468; // CUtlVector<uint32>
                constexpr std::ptrdiff_t m_Tris = 0x480; // CUtlVector<FeTri_t>
                constexpr std::ptrdiff_t m_nTriCount1 = 0x498; // uint16
                constexpr std::ptrdiff_t m_nTriCount2 = 0x49A; // uint16
                constexpr std::ptrdiff_t m_nReservedUint8 = 0x49C; // uint8
                constexpr std::ptrdiff_t m_nExtraPressureIterations = 0x49D; // uint8
                constexpr std::ptrdiff_t m_nExtraGoalIterations = 0x49E; // uint8
                constexpr std::ptrdiff_t m_nExtraIterations = 0x49F; // uint8
                constexpr std::ptrdiff_t m_BoxRigids = 0x4A0; // CUtlVector<FeBoxRigid_t>
                constexpr std::ptrdiff_t m_DynNodeVertexSet = 0x4B8; // CUtlVector<uint8>
                constexpr std::ptrdiff_t m_VertexSetNames = 0x4D0; // CUtlVector<uint32>
                constexpr std::ptrdiff_t m_RigidColliderPriorities = 0x4E8; // CUtlVector<FeRigidColliderIndices_t>
                constexpr std::ptrdiff_t m_MorphLayers = 0x500; // CUtlVector<FeMorphLayerDepr_t>
                constexpr std::ptrdiff_t m_MorphSetData = 0x518; // CUtlVector<uint8>
                constexpr std::ptrdiff_t m_VertexMaps = 0x530; // CUtlVector<FeVertexMapDesc_t>
                constexpr std::ptrdiff_t m_VertexMapValues = 0x548; // CUtlVector<uint8>
                constexpr std::ptrdiff_t m_Effects = 0x560; // CUtlVector<FeEffectDesc_t>
                constexpr std::ptrdiff_t m_LockToParent = 0x578; // CUtlVector<FeCtrlOffset_t>
                constexpr std::ptrdiff_t m_LockToGoal = 0x590; // CUtlVector<uint16>
                constexpr std::ptrdiff_t m_SkelParents = 0x5A8; // CUtlVector<int16>
                constexpr std::ptrdiff_t m_DynNodeWindBases = 0x5C0; // CUtlVector<FeNodeWindBase_t>
                constexpr std::ptrdiff_t m_flInternalPressure = 0x5D8; // float32
                constexpr std::ptrdiff_t m_flDefaultTimeDilation = 0x5DC; // float32
                constexpr std::ptrdiff_t m_flWindage = 0x5E0; // float32
                constexpr std::ptrdiff_t m_flWindDrag = 0x5E4; // float32
                constexpr std::ptrdiff_t m_flDefaultSurfaceStretch = 0x5E8; // float32
                constexpr std::ptrdiff_t m_flDefaultThreadStretch = 0x5EC; // float32
                constexpr std::ptrdiff_t m_flDefaultGravityScale = 0x5F0; // float32
                constexpr std::ptrdiff_t m_flDefaultVelAirDrag = 0x5F4; // float32
                constexpr std::ptrdiff_t m_flDefaultExpAirDrag = 0x5F8; // float32
                constexpr std::ptrdiff_t m_flDefaultVelQuadAirDrag = 0x5FC; // float32
                constexpr std::ptrdiff_t m_flDefaultExpQuadAirDrag = 0x600; // float32
                constexpr std::ptrdiff_t m_flRodVelocitySmoothRate = 0x604; // float32
                constexpr std::ptrdiff_t m_flQuadVelocitySmoothRate = 0x608; // float32
                constexpr std::ptrdiff_t m_flAddWorldCollisionRadius = 0x60C; // float32
                constexpr std::ptrdiff_t m_flDefaultVolumetricSolveAmount = 0x610; // float32
                constexpr std::ptrdiff_t m_nRodVelocitySmoothIterations = 0x614; // uint16
                constexpr std::ptrdiff_t m_nQuadVelocitySmoothIterations = 0x616; // uint16
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FourVectors2D {
                constexpr std::ptrdiff_t x = 0x0; // fltx4
                constexpr std::ptrdiff_t y = 0x10; // fltx4
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeEdgeDesc_t {
                constexpr std::ptrdiff_t nEdge = 0x0; // uint16[2]
                constexpr std::ptrdiff_t nSide = 0x4; // uint16[2][2]
                constexpr std::ptrdiff_t nVirtElem = 0xC; // uint16[2]
            }
            // Parent: None
            // Fields count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace OldFeEdge_t {
                constexpr std::ptrdiff_t m_flK = 0x0; // float32[3]
                constexpr std::ptrdiff_t invA = 0xC; // float32
                constexpr std::ptrdiff_t t = 0x10; // float32
                constexpr std::ptrdiff_t flThetaRelaxed = 0x14; // float32
                constexpr std::ptrdiff_t flThetaFactor = 0x18; // float32
                constexpr std::ptrdiff_t c01 = 0x1C; // float32
                constexpr std::ptrdiff_t c02 = 0x20; // float32
                constexpr std::ptrdiff_t c03 = 0x24; // float32
                constexpr std::ptrdiff_t c04 = 0x28; // float32
                constexpr std::ptrdiff_t flAxialModelDist = 0x2C; // float32
                constexpr std::ptrdiff_t flAxialModelWeights = 0x30; // float32[4]
                constexpr std::ptrdiff_t m_nNode = 0x40; // uint16[4]
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeWeightedNode_t {
                constexpr std::ptrdiff_t nNode = 0x0; // uint16
                constexpr std::ptrdiff_t nWeight = 0x2; // uint16
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeKelagerBend2_t {
                constexpr std::ptrdiff_t flWeight = 0x0; // float32[3]
                constexpr std::ptrdiff_t flHeight0 = 0xC; // float32
                constexpr std::ptrdiff_t nNode = 0x10; // uint16[3]
                constexpr std::ptrdiff_t nReserved = 0x16; // uint16
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeStiffHingeBuild_t {
                constexpr std::ptrdiff_t flMaxAngle = 0x0; // float32
                constexpr std::ptrdiff_t flStrength = 0x4; // float32
                constexpr std::ptrdiff_t flMotionBias = 0x8; // float32[3]
                constexpr std::ptrdiff_t nNode = 0x14; // uint16[3]
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeTri_t {
                constexpr std::ptrdiff_t nNode = 0x0; // uint16[3]
                constexpr std::ptrdiff_t w1 = 0x8; // float32
                constexpr std::ptrdiff_t w2 = 0xC; // float32
                constexpr std::ptrdiff_t v1x = 0x10; // float32
                constexpr std::ptrdiff_t v2 = 0x14; // Vector2D
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeSimdTri_t {
                constexpr std::ptrdiff_t nNode = 0x0; // uint32[4][3]
                constexpr std::ptrdiff_t w1 = 0x30; // fltx4
                constexpr std::ptrdiff_t w2 = 0x40; // fltx4
                constexpr std::ptrdiff_t v1x = 0x50; // fltx4
                constexpr std::ptrdiff_t v2 = 0x60; // FourVectors2D
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeQuad_t {
                constexpr std::ptrdiff_t nNode = 0x0; // uint16[4]
                constexpr std::ptrdiff_t flSlack = 0x8; // float32
                constexpr std::ptrdiff_t vShape = 0xC; // Vector4D[4]
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeNodeBase_t {
                constexpr std::ptrdiff_t nNode = 0x0; // uint16
                constexpr std::ptrdiff_t nDummy = 0x2; // uint16[3]
                constexpr std::ptrdiff_t nNodeX0 = 0x8; // uint16
                constexpr std::ptrdiff_t nNodeX1 = 0xA; // uint16
                constexpr std::ptrdiff_t nNodeY0 = 0xC; // uint16
                constexpr std::ptrdiff_t nNodeY1 = 0xE; // uint16
                constexpr std::ptrdiff_t qAdjust = 0x10; // QuaternionStorage
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeNodeWindBase_t {
                constexpr std::ptrdiff_t nNodeX0 = 0x0; // uint16
                constexpr std::ptrdiff_t nNodeX1 = 0x2; // uint16
                constexpr std::ptrdiff_t nNodeY0 = 0x4; // uint16
                constexpr std::ptrdiff_t nNodeY1 = 0x6; // uint16
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeNodeReverseOffset_t {
                constexpr std::ptrdiff_t vOffset = 0x0; // Vector
                constexpr std::ptrdiff_t nBoneCtrl = 0xC; // uint16
                constexpr std::ptrdiff_t nTargetNode = 0xE; // uint16
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeSimdQuad_t {
                constexpr std::ptrdiff_t nNode = 0x0; // uint16[4][4]
                constexpr std::ptrdiff_t f4Slack = 0x20; // fltx4
                constexpr std::ptrdiff_t vShape = 0x30; // FourVectors[4]
                constexpr std::ptrdiff_t f4Weights = 0xF0; // fltx4[4]
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeAxialEdgeBend_t {
                constexpr std::ptrdiff_t te = 0x0; // float32
                constexpr std::ptrdiff_t tv = 0x4; // float32
                constexpr std::ptrdiff_t flDist = 0x8; // float32
                constexpr std::ptrdiff_t flWeight = 0xC; // float32[4]
                constexpr std::ptrdiff_t nNode = 0x1C; // uint16[6]
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeBandBendLimit_t {
                constexpr std::ptrdiff_t flDistMin = 0x0; // float32
                constexpr std::ptrdiff_t flDistMax = 0x4; // float32
                constexpr std::ptrdiff_t nNode = 0x8; // uint16[6]
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeRodConstraint_t {
                constexpr std::ptrdiff_t nNode = 0x0; // uint16[2]
                constexpr std::ptrdiff_t flMaxDist = 0x4; // float32
                constexpr std::ptrdiff_t flMinDist = 0x8; // float32
                constexpr std::ptrdiff_t flWeight0 = 0xC; // float32
                constexpr std::ptrdiff_t flRelaxationFactor = 0x10; // float32
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeTwistConstraint_t {
                constexpr std::ptrdiff_t nNodeOrient = 0x0; // uint16
                constexpr std::ptrdiff_t nNodeEnd = 0x2; // uint16
                constexpr std::ptrdiff_t flTwistRelax = 0x4; // float32
                constexpr std::ptrdiff_t flSwingRelax = 0x8; // float32
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeSimdRodConstraint_t {
                constexpr std::ptrdiff_t nNode = 0x0; // uint16[4][2]
                constexpr std::ptrdiff_t f4MaxDist = 0x10; // fltx4
                constexpr std::ptrdiff_t f4MinDist = 0x20; // fltx4
                constexpr std::ptrdiff_t f4Weight0 = 0x30; // fltx4
                constexpr std::ptrdiff_t f4RelaxationFactor = 0x40; // fltx4
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeSimdRodConstraintAnim_t {
                constexpr std::ptrdiff_t nNode = 0x0; // uint16[4][2]
                constexpr std::ptrdiff_t f4Weight0 = 0x10; // fltx4
                constexpr std::ptrdiff_t f4RelaxationFactor = 0x20; // fltx4
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeAnimStrayRadius_t {
                constexpr std::ptrdiff_t nNode = 0x0; // uint16[2]
                constexpr std::ptrdiff_t flMaxDist = 0x4; // float32
                constexpr std::ptrdiff_t flRelaxationFactor = 0x8; // float32
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeSimdAnimStrayRadius_t {
                constexpr std::ptrdiff_t nNode = 0x0; // uint16[4][2]
                constexpr std::ptrdiff_t flMaxDist = 0x10; // fltx4
                constexpr std::ptrdiff_t flRelaxationFactor = 0x20; // fltx4
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeSimdNodeBase_t {
                constexpr std::ptrdiff_t nNode = 0x0; // uint16[4]
                constexpr std::ptrdiff_t nNodeX0 = 0x8; // uint16[4]
                constexpr std::ptrdiff_t nNodeX1 = 0x10; // uint16[4]
                constexpr std::ptrdiff_t nNodeY0 = 0x18; // uint16[4]
                constexpr std::ptrdiff_t nNodeY1 = 0x20; // uint16[4]
                constexpr std::ptrdiff_t nDummy = 0x28; // uint16[4]
                constexpr std::ptrdiff_t qAdjust = 0x30; // FourQuaternions
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeNodeIntegrator_t {
                constexpr std::ptrdiff_t flPointDamping = 0x0; // float32
                constexpr std::ptrdiff_t flAnimationForceAttraction = 0x4; // float32
                constexpr std::ptrdiff_t flAnimationVertexAttraction = 0x8; // float32
                constexpr std::ptrdiff_t flGravity = 0xC; // float32
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeSpringIntegrator_t {
                constexpr std::ptrdiff_t nNode = 0x0; // uint16[2]
                constexpr std::ptrdiff_t flSpringRestLength = 0x4; // float32
                constexpr std::ptrdiff_t flSpringConstant = 0x8; // float32
                constexpr std::ptrdiff_t flSpringDamping = 0xC; // float32
                constexpr std::ptrdiff_t flNodeWeight0 = 0x10; // float32
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeSimdSpringIntegrator_t {
                constexpr std::ptrdiff_t nNode = 0x0; // uint16[4][2]
                constexpr std::ptrdiff_t flSpringRestLength = 0x10; // fltx4
                constexpr std::ptrdiff_t flSpringConstant = 0x20; // fltx4
                constexpr std::ptrdiff_t flSpringDamping = 0x30; // fltx4
                constexpr std::ptrdiff_t flNodeWeight0 = 0x40; // fltx4
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeCtrlOffset_t {
                constexpr std::ptrdiff_t vOffset = 0x0; // Vector
                constexpr std::ptrdiff_t nCtrlParent = 0xC; // uint16
                constexpr std::ptrdiff_t nCtrlChild = 0xE; // uint16
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeSoftParent_t {
                constexpr std::ptrdiff_t nParent = 0x0; // int32
                constexpr std::ptrdiff_t flAlpha = 0x4; // float32
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeCtrlSoftOffset_t {
                constexpr std::ptrdiff_t nCtrlParent = 0x0; // uint16
                constexpr std::ptrdiff_t nCtrlChild = 0x2; // uint16
                constexpr std::ptrdiff_t vOffset = 0x4; // Vector
                constexpr std::ptrdiff_t flAlpha = 0x10; // float32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeCtrlOsOffset_t {
                constexpr std::ptrdiff_t nCtrlParent = 0x0; // uint16
                constexpr std::ptrdiff_t nCtrlChild = 0x2; // uint16
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeFollowNode_t {
                constexpr std::ptrdiff_t nParentNode = 0x0; // uint16
                constexpr std::ptrdiff_t nChildNode = 0x2; // uint16
                constexpr std::ptrdiff_t flWeight = 0x4; // float32
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeCollisionPlane_t {
                constexpr std::ptrdiff_t nCtrlParent = 0x0; // uint16
                constexpr std::ptrdiff_t nChildNode = 0x2; // uint16
                constexpr std::ptrdiff_t m_Plane = 0x4; // RnPlane_t
                constexpr std::ptrdiff_t flStrength = 0x14; // float32
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeWorldCollisionParams_t {
                constexpr std::ptrdiff_t flWorldFriction = 0x0; // float32
                constexpr std::ptrdiff_t flGroundFriction = 0x4; // float32
                constexpr std::ptrdiff_t nListBegin = 0x8; // uint16
                constexpr std::ptrdiff_t nListEnd = 0xA; // uint16
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeTreeChildren_t {
                constexpr std::ptrdiff_t nChild = 0x0; // uint16[2]
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeTaperedCapsuleRigid_t {
                constexpr std::ptrdiff_t vSphere = 0x0; // fltx4[2]
                constexpr std::ptrdiff_t nNode = 0x20; // uint16
                constexpr std::ptrdiff_t nCollisionMask = 0x22; // uint16
                constexpr std::ptrdiff_t nVertexMapIndex = 0x24; // uint16
                constexpr std::ptrdiff_t nFlags = 0x26; // uint16
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeSphereRigid_t {
                constexpr std::ptrdiff_t vSphere = 0x0; // fltx4
                constexpr std::ptrdiff_t nNode = 0x10; // uint16
                constexpr std::ptrdiff_t nCollisionMask = 0x12; // uint16
                constexpr std::ptrdiff_t nVertexMapIndex = 0x14; // uint16
                constexpr std::ptrdiff_t nFlags = 0x16; // uint16
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeTaperedCapsuleStretch_t {
                constexpr std::ptrdiff_t nNode = 0x0; // uint16[2]
                constexpr std::ptrdiff_t nCollisionMask = 0x4; // uint16
                constexpr std::ptrdiff_t nDummy = 0x6; // uint16
                constexpr std::ptrdiff_t flRadius = 0x8; // float32[2]
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeBoxRigid_t {
                constexpr std::ptrdiff_t tmFrame2 = 0x0; // CTransform
                constexpr std::ptrdiff_t nNode = 0x20; // uint16
                constexpr std::ptrdiff_t nCollisionMask = 0x22; // uint16
                constexpr std::ptrdiff_t vSize = 0x24; // Vector
                constexpr std::ptrdiff_t nVertexMapIndex = 0x30; // uint16
                constexpr std::ptrdiff_t nFlags = 0x32; // uint16
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CovMatrix3 {
                constexpr std::ptrdiff_t m_vDiag = 0x0; // Vector
                constexpr std::ptrdiff_t m_flXY = 0xC; // float32
                constexpr std::ptrdiff_t m_flXZ = 0x10; // float32
                constexpr std::ptrdiff_t m_flYZ = 0x14; // float32
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FourCovMatrices3 {
                constexpr std::ptrdiff_t m_vDiag = 0x0; // FourVectors
                constexpr std::ptrdiff_t m_flXY = 0x30; // fltx4
                constexpr std::ptrdiff_t m_flXZ = 0x40; // fltx4
                constexpr std::ptrdiff_t m_flYZ = 0x50; // fltx4
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeFitWeight_t {
                constexpr std::ptrdiff_t flWeight = 0x0; // float32
                constexpr std::ptrdiff_t nNode = 0x4; // uint16
                constexpr std::ptrdiff_t nDummy = 0x6; // uint16
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeFitInfluence_t {
                constexpr std::ptrdiff_t nVertexNode = 0x0; // uint32
                constexpr std::ptrdiff_t flWeight = 0x4; // float32
                constexpr std::ptrdiff_t nMatrixNode = 0x8; // uint32
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeFitMatrix_t {
                constexpr std::ptrdiff_t bone = 0x0; // CTransform
                constexpr std::ptrdiff_t vCenter = 0x20; // Vector
                constexpr std::ptrdiff_t nEnd = 0x2C; // uint16
                constexpr std::ptrdiff_t nNode = 0x2E; // uint16
                constexpr std::ptrdiff_t nBeginDynamic = 0x30; // uint16
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeRigidColliderIndices_t {
                constexpr std::ptrdiff_t m_nTaperedCapsuleRigidIndex = 0x0; // uint16
                constexpr std::ptrdiff_t m_nSphereRigidIndex = 0x2; // uint16
                constexpr std::ptrdiff_t m_nBoxRigidIndex = 0x4; // uint16
                constexpr std::ptrdiff_t m_nCollisionPlaneIndex = 0x6; // uint16
            }
            // Parent: FeTaperedCapsuleRigid_t
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeBuildTaperedCapsuleRigid_t {
                constexpr std::ptrdiff_t m_nPriority = 0x30; // int32
                constexpr std::ptrdiff_t m_nVertexMapHash = 0x34; // uint32
            }
            // Parent: FeBoxRigid_t
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeBuildBoxRigid_t {
                constexpr std::ptrdiff_t m_nPriority = 0x34; // int32
                constexpr std::ptrdiff_t m_nVertexMapHash = 0x38; // uint32
            }
            // Parent: FeSphereRigid_t
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeBuildSphereRigid_t {
                constexpr std::ptrdiff_t m_nPriority = 0x20; // int32
                constexpr std::ptrdiff_t m_nVertexMapHash = 0x24; // uint32
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeSourceEdge_t {
                constexpr std::ptrdiff_t nNode = 0x0; // uint16[2]
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeEffectDesc_t {
                constexpr std::ptrdiff_t sName = 0x0; // CUtlString
                constexpr std::ptrdiff_t nNameHash = 0x8; // uint32
                constexpr std::ptrdiff_t nType = 0xC; // int32
                constexpr std::ptrdiff_t m_Params = 0x10; // KeyValues3
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeVertexMapBuild_t {
                constexpr std::ptrdiff_t m_VertexMapName = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_nNameHash = 0x8; // uint32
                constexpr std::ptrdiff_t m_Color = 0xC; // Color
                constexpr std::ptrdiff_t m_flVolumetricSolveStrength = 0x10; // float32
                constexpr std::ptrdiff_t m_nScaleSourceNode = 0x14; // int32
                constexpr std::ptrdiff_t m_Weights = 0x18; // CUtlVector<float32>
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CFeVertexMapBuildArray {
                constexpr std::ptrdiff_t m_Array = 0x0; // CUtlVector<FeVertexMapBuild_t*>
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeProxyVertexMap_t {
                constexpr std::ptrdiff_t m_Name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_flWeight = 0x8; // float32
            }
            // Parent: None
            // Fields count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeVertexMapDesc_t {
                constexpr std::ptrdiff_t sName = 0x0; // CUtlString
                constexpr std::ptrdiff_t nNameHash = 0x8; // uint32
                constexpr std::ptrdiff_t nColor = 0xC; // uint32
                constexpr std::ptrdiff_t nFlags = 0x10; // uint32
                constexpr std::ptrdiff_t nVertexBase = 0x14; // uint16
                constexpr std::ptrdiff_t nVertexCount = 0x16; // uint16
                constexpr std::ptrdiff_t nMapOffset = 0x18; // uint32
                constexpr std::ptrdiff_t nNodeListOffset = 0x1C; // uint32
                constexpr std::ptrdiff_t vCenterOfMass = 0x20; // Vector
                constexpr std::ptrdiff_t flVolumetricSolveStrength = 0x2C; // float32
                constexpr std::ptrdiff_t nScaleSourceNode = 0x30; // int16
                constexpr std::ptrdiff_t nNodeListCount = 0x32; // uint16
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeMorphLayerDepr_t {
                constexpr std::ptrdiff_t m_Name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_nNameHash = 0x8; // uint32
                constexpr std::ptrdiff_t m_Nodes = 0x10; // CUtlVector<uint16>
                constexpr std::ptrdiff_t m_InitPos = 0x28; // CUtlVector<Vector>
                constexpr std::ptrdiff_t m_Gravity = 0x40; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_GoalStrength = 0x58; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_GoalDamping = 0x70; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_nFlags = 0x88; // uint32
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CFeMorphLayer {
                constexpr std::ptrdiff_t m_Name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_nNameHash = 0x8; // uint32
                constexpr std::ptrdiff_t m_Nodes = 0x10; // CUtlVector<uint16>
                constexpr std::ptrdiff_t m_InitPos = 0x28; // CUtlVector<Vector>
                constexpr std::ptrdiff_t m_Gravity = 0x40; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_GoalStrength = 0x58; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_GoalDamping = 0x70; // CUtlVector<float32>
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace Dop26_t {
                constexpr std::ptrdiff_t m_flSupport = 0x0; // float32[26]
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace RnCapsule_t {
                constexpr std::ptrdiff_t m_vCenter = 0x0; // Vector[2]
                constexpr std::ptrdiff_t m_flRadius = 0x18; // float32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace RnPlane_t {
                constexpr std::ptrdiff_t m_vNormal = 0x0; // Vector
                constexpr std::ptrdiff_t m_flOffset = 0xC; // float32
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace RnVertex_t {
                constexpr std::ptrdiff_t m_nEdge = 0x0; // uint8
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace RnHalfEdge_t {
                constexpr std::ptrdiff_t m_nNext = 0x0; // uint8
                constexpr std::ptrdiff_t m_nTwin = 0x1; // uint8
                constexpr std::ptrdiff_t m_nOrigin = 0x2; // uint8
                constexpr std::ptrdiff_t m_nFace = 0x3; // uint8
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace RnFace_t {
                constexpr std::ptrdiff_t m_nEdge = 0x0; // uint8
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CRegionSVM {
                constexpr std::ptrdiff_t m_Planes = 0x0; // CUtlVector<RnPlane_t>
                constexpr std::ptrdiff_t m_Nodes = 0x18; // CUtlVector<uint32>
            }
            // Parent: None
            // Fields count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace RnHull_t {
                constexpr std::ptrdiff_t m_vCentroid = 0x0; // Vector
                constexpr std::ptrdiff_t m_flMaxAngularRadius = 0xC; // float32
                constexpr std::ptrdiff_t m_Bounds = 0x10; // AABB_t
                constexpr std::ptrdiff_t m_vOrthographicAreas = 0x28; // Vector
                constexpr std::ptrdiff_t m_MassProperties = 0x34; // matrix3x4_t
                constexpr std::ptrdiff_t m_flVolume = 0x64; // float32
                constexpr std::ptrdiff_t m_flSurfaceArea = 0x68; // float32
                constexpr std::ptrdiff_t m_Vertices = 0x70; // CUtlVector<RnVertex_t>
                constexpr std::ptrdiff_t m_VertexPositions = 0x88; // CUtlVector<Vector>
                constexpr std::ptrdiff_t m_Edges = 0xA0; // CUtlVector<RnHalfEdge_t>
                constexpr std::ptrdiff_t m_Faces = 0xB8; // CUtlVector<RnFace_t>
                constexpr std::ptrdiff_t m_FacePlanes = 0xD0; // CUtlVector<RnPlane_t>
                constexpr std::ptrdiff_t m_nFlags = 0xE8; // uint32
                constexpr std::ptrdiff_t m_pRegionSVM = 0xF0; // CRegionSVM*
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace RnTriangle_t {
                constexpr std::ptrdiff_t m_nIndex = 0x0; // int32[3]
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace RnWing_t {
                constexpr std::ptrdiff_t m_nIndex = 0x0; // int32[3]
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace RnNode_t {
                constexpr std::ptrdiff_t m_vMin = 0x0; // Vector
                constexpr std::ptrdiff_t m_nChildren = 0xC; // uint32
                constexpr std::ptrdiff_t m_vMax = 0x10; // Vector
                constexpr std::ptrdiff_t m_nTriangleOffset = 0x1C; // uint32
            }
            // Parent: None
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace RnMesh_t {
                constexpr std::ptrdiff_t m_vMin = 0x0; // Vector
                constexpr std::ptrdiff_t m_vMax = 0xC; // Vector
                constexpr std::ptrdiff_t m_Nodes = 0x18; // CUtlVector<RnNode_t>
                constexpr std::ptrdiff_t m_Vertices = 0x30; // CUtlVectorSIMDPaddedVector
                constexpr std::ptrdiff_t m_Triangles = 0x48; // CUtlVector<RnTriangle_t>
                constexpr std::ptrdiff_t m_Wings = 0x60; // CUtlVector<RnWing_t>
                constexpr std::ptrdiff_t m_Materials = 0x78; // CUtlVector<uint8>
                constexpr std::ptrdiff_t m_vOrthographicAreas = 0x90; // Vector
                constexpr std::ptrdiff_t m_nFlags = 0x9C; // uint32
                constexpr std::ptrdiff_t m_nDebugFlags = 0xA0; // uint32
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace RnShapeDesc_t {
                constexpr std::ptrdiff_t m_nCollisionAttributeIndex = 0x0; // uint32
                constexpr std::ptrdiff_t m_nSurfacePropertyIndex = 0x4; // uint32
                constexpr std::ptrdiff_t m_UserFriendlyName = 0x8; // CUtlString
            }
            // Parent: RnShapeDesc_t
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace RnSphereDesc_t {
                constexpr std::ptrdiff_t m_Sphere = 0x10; // SphereBase_t<float32>
            }
            // Parent: RnShapeDesc_t
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace RnCapsuleDesc_t {
                constexpr std::ptrdiff_t m_Capsule = 0x10; // RnCapsule_t
            }
            // Parent: RnShapeDesc_t
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace RnHullDesc_t {
                constexpr std::ptrdiff_t m_Hull = 0x10; // RnHull_t
            }
            // Parent: RnShapeDesc_t
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace RnMeshDesc_t {
                constexpr std::ptrdiff_t m_Mesh = 0x10; // RnMesh_t
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace RnSoftbodyParticle_t {
                constexpr std::ptrdiff_t m_flMassInv = 0x0; // float32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace RnSoftbodySpring_t {
                constexpr std::ptrdiff_t m_nParticle = 0x0; // uint16[2]
                constexpr std::ptrdiff_t m_flLength = 0x4; // float32
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace RnSoftbodyCapsule_t {
                constexpr std::ptrdiff_t m_vCenter = 0x0; // Vector[2]
                constexpr std::ptrdiff_t m_flRadius = 0x18; // float32
                constexpr std::ptrdiff_t m_nParticle = 0x1C; // uint16[2]
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace RnBlendVertex_t {
                constexpr std::ptrdiff_t m_nWeight0 = 0x0; // uint16
                constexpr std::ptrdiff_t m_nIndex0 = 0x2; // uint16
                constexpr std::ptrdiff_t m_nWeight1 = 0x4; // uint16
                constexpr std::ptrdiff_t m_nIndex1 = 0x6; // uint16
                constexpr std::ptrdiff_t m_nWeight2 = 0x8; // uint16
                constexpr std::ptrdiff_t m_nIndex2 = 0xA; // uint16
                constexpr std::ptrdiff_t m_nFlags = 0xC; // uint16
                constexpr std::ptrdiff_t m_nTargetIndex = 0xE; // uint16
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CastSphereSATParams_t {
                constexpr std::ptrdiff_t m_vRayStart = 0x0; // Vector
                constexpr std::ptrdiff_t m_vRayDelta = 0xC; // Vector
                constexpr std::ptrdiff_t m_flRadius = 0x18; // float32
                constexpr std::ptrdiff_t m_flMaxFraction = 0x1C; // float32
                constexpr std::ptrdiff_t m_flScale = 0x20; // float32
                constexpr std::ptrdiff_t m_pHull = 0x28; // RnHull_t*
            }
            // Parent: None
            // Fields count: 35
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace RnBodyDesc_t {
                constexpr std::ptrdiff_t m_sDebugName = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_vPosition = 0x8; // Vector
                constexpr std::ptrdiff_t m_qOrientation = 0x14; // QuaternionStorage
                constexpr std::ptrdiff_t m_vLinearVelocity = 0x24; // Vector
                constexpr std::ptrdiff_t m_vAngularVelocity = 0x30; // Vector
                constexpr std::ptrdiff_t m_vLocalMassCenter = 0x3C; // Vector
                constexpr std::ptrdiff_t m_LocalInertiaInv = 0x48; // Vector[3]
                constexpr std::ptrdiff_t m_flMassInv = 0x6C; // float32
                constexpr std::ptrdiff_t m_flGameMass = 0x70; // float32
                constexpr std::ptrdiff_t m_flInertiaScaleInv = 0x74; // float32
                constexpr std::ptrdiff_t m_flLinearDamping = 0x78; // float32
                constexpr std::ptrdiff_t m_flAngularDamping = 0x7C; // float32
                constexpr std::ptrdiff_t m_flLinearDrag = 0x80; // float32
                constexpr std::ptrdiff_t m_flAngularDrag = 0x84; // float32
                constexpr std::ptrdiff_t m_flLinearBuoyancyDrag = 0x88; // float32
                constexpr std::ptrdiff_t m_flAngularBuoyancyDrag = 0x8C; // float32
                constexpr std::ptrdiff_t m_vLastAwakeForceAccum = 0x90; // Vector
                constexpr std::ptrdiff_t m_vLastAwakeTorqueAccum = 0x9C; // Vector
                constexpr std::ptrdiff_t m_flBuoyancyFactor = 0xA8; // float32
                constexpr std::ptrdiff_t m_flGravityScale = 0xAC; // float32
                constexpr std::ptrdiff_t m_flTimeScale = 0xB0; // float32
                constexpr std::ptrdiff_t m_nBodyType = 0xB4; // int32
                constexpr std::ptrdiff_t m_nGameIndex = 0xB8; // uint32
                constexpr std::ptrdiff_t m_nGameFlags = 0xBC; // uint32
                constexpr std::ptrdiff_t m_nMinVelocityIterations = 0xC0; // int8
                constexpr std::ptrdiff_t m_nMinPositionIterations = 0xC1; // int8
                constexpr std::ptrdiff_t m_nMassPriority = 0xC2; // int8
                constexpr std::ptrdiff_t m_bEnabled = 0xC3; // bool
                constexpr std::ptrdiff_t m_bSleeping = 0xC4; // bool
                constexpr std::ptrdiff_t m_bIsContinuousEnabled = 0xC5; // bool
                constexpr std::ptrdiff_t m_bDragEnabled = 0xC6; // bool
                constexpr std::ptrdiff_t m_bBuoyancyDragEnabled = 0xC7; // bool
                constexpr std::ptrdiff_t m_bGravityDisabled = 0xC8; // bool
                constexpr std::ptrdiff_t m_bSpeculativeEnabled = 0xC9; // bool
                constexpr std::ptrdiff_t m_bHasShadowController = 0xCA; // bool
            }
            // Parent: None
            // Fields count: 2
            namespace VertexPositionNormal_t {
                constexpr std::ptrdiff_t m_vPosition = 0x0; // Vector
                constexpr std::ptrdiff_t m_vNormal = 0xC; // Vector
            }
            // Parent: None
            // Fields count: 1
            namespace VertexPositionColor_t {
                constexpr std::ptrdiff_t m_vPosition = 0x0; // Vector
            }
            // Parent: None
            // Fields count: 5
            namespace constraint_breakableparams_t {
                constexpr std::ptrdiff_t strength = 0x0; // float32
                constexpr std::ptrdiff_t forceLimit = 0x4; // float32
                constexpr std::ptrdiff_t torqueLimit = 0x8; // float32
                constexpr std::ptrdiff_t bodyMassScale = 0xC; // float32[2]
                constexpr std::ptrdiff_t isActive = 0x14; // bool
            }
            // Parent: None
            // Fields count: 4
            namespace constraint_axislimit_t {
                constexpr std::ptrdiff_t flMinRotation = 0x0; // float32
                constexpr std::ptrdiff_t flMaxRotation = 0x4; // float32
                constexpr std::ptrdiff_t flMotorTargetAngSpeed = 0x8; // float32
                constexpr std::ptrdiff_t flMotorMaxTorque = 0xC; // float32
            }
            // Parent: None
            // Fields count: 4
            namespace constraint_hingeparams_t {
                constexpr std::ptrdiff_t worldPosition = 0x0; // Vector
                constexpr std::ptrdiff_t worldAxisDirection = 0xC; // Vector
                constexpr std::ptrdiff_t hingeAxis = 0x18; // constraint_axislimit_t
                constexpr std::ptrdiff_t constraint = 0x28; // constraint_breakableparams_t
            }
            // Parent: None
            // Fields count: 0
            namespace IPhysicsPlayerController {
            }
            // Parent: RnBodyDesc_t
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace vphysics_save_cphysicsbody_t {
                constexpr std::ptrdiff_t m_nOldPointer = 0xD0; // uint64
            }
        }
        // Module: libworldrenderer.so
        // Classes count: 27
        // Enums count: 0
        namespace libworldrenderer {
            // Parent: None
            // Fields count: 0
            namespace CEntityComponent {
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
            // NetworkVarNames: m_pEntity (CEntityIdentity *)
            // NetworkVarNames: m_CScriptComponent (CScriptComponent::Storage_t)
            namespace CEntityInstance {
                constexpr std::ptrdiff_t m_iszPrivateVScripts = 0x8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_pEntity = 0x10; // CEntityIdentity*
                constexpr std::ptrdiff_t m_CScriptComponent = 0x28; // CScriptComponent*
                constexpr std::ptrdiff_t m_bVisibleinPVS = 0x30; // bool
            }
            // Parent: CEntityComponent
            // Fields count: 1
            namespace CScriptComponent {
                constexpr std::ptrdiff_t m_scriptClassName = 0x30; // CUtlSymbolLarge
            }
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
                constexpr std::ptrdiff_t m_vLightingOrigin = 0x5C; // Vector
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
                constexpr std::ptrdiff_t m_vLODOrigin = 0x0; // Vector
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
                constexpr std::ptrdiff_t m_vOrigin = 0x4; // Vector
                constexpr std::ptrdiff_t m_vMinBounds = 0x10; // Vector
                constexpr std::ptrdiff_t m_vMaxBounds = 0x1C; // Vector
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
            // Parent: None
            // Fields count: 0
            namespace VMapResourceData_t {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeVMapResourceData_t {
            }
        }
    }
}
