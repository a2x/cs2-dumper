/*
 * Generated using https://github.com/a2x/cs2-dumper
 * Sat, 23 Mar 2024 05:02:03 +0000
 */

#pragma once

#include <cstddef>

namespace AimMatrixOpFixedSettings_t {
    constexpr std::ptrdiff_t m_attachment = 0x0; // CAnimAttachment
    constexpr std::ptrdiff_t m_damping = 0x80; // CAnimInputDamping
    constexpr std::ptrdiff_t m_poseCacheHandles = 0x90; // CPoseHandle[10]
    constexpr std::ptrdiff_t m_eBlendMode = 0xB8; // AimMatrixBlendMode
    constexpr std::ptrdiff_t m_fAngleIncrement = 0xBC; // float
    constexpr std::ptrdiff_t m_nSequenceMaxFrame = 0xC0; // int32_t
    constexpr std::ptrdiff_t m_nBoneMaskIndex = 0xC4; // int32_t
    constexpr std::ptrdiff_t m_bTargetIsPosition = 0xC8; // bool
}

namespace AnimComponentID {
    constexpr std::ptrdiff_t m_id = 0x0; // uint32_t
}

namespace AnimNodeID {
    constexpr std::ptrdiff_t m_id = 0x0; // uint32_t
}

namespace AnimNodeOutputID {
    constexpr std::ptrdiff_t m_id = 0x0; // uint32_t
}

namespace AnimParamID {
    constexpr std::ptrdiff_t m_id = 0x0; // uint32_t
}

namespace AnimScriptHandle {
    constexpr std::ptrdiff_t m_id = 0x0; // uint32_t
}

namespace AnimStateID {
    constexpr std::ptrdiff_t m_id = 0x0; // uint32_t
}

namespace AnimTagID {
    constexpr std::ptrdiff_t m_id = 0x0; // uint32_t
}

namespace AnimationDecodeDebugDumpElement_t {
    constexpr std::ptrdiff_t m_nEntityIndex = 0x0; // int32_t
    constexpr std::ptrdiff_t m_modelName = 0x8; // CUtlString
    constexpr std::ptrdiff_t m_poseParams = 0x10; // CUtlVector<CUtlString>
    constexpr std::ptrdiff_t m_decodeOps = 0x28; // CUtlVector<CUtlString>
    constexpr std::ptrdiff_t m_internalOps = 0x40; // CUtlVector<CUtlString>
    constexpr std::ptrdiff_t m_decodedAnims = 0x58; // CUtlVector<CUtlString>
}

namespace AnimationDecodeDebugDump_t {
    constexpr std::ptrdiff_t m_processingType = 0x0; // AnimationProcessingType_t
    constexpr std::ptrdiff_t m_elems = 0x8; // CUtlVector<AnimationDecodeDebugDumpElement_t>
}

namespace AnimationSnapshotBase_t {
    constexpr std::ptrdiff_t m_flRealTime = 0x0; // float
    constexpr std::ptrdiff_t m_rootToWorld = 0x10; // matrix3x4a_t
    constexpr std::ptrdiff_t m_bBonesInWorldSpace = 0x40; // bool
    constexpr std::ptrdiff_t m_boneSetupMask = 0x48; // CUtlVector<uint32_t>
    constexpr std::ptrdiff_t m_boneTransforms = 0x60; // CUtlVector<matrix3x4a_t>
    constexpr std::ptrdiff_t m_flexControllers = 0x78; // CUtlVector<float>
    constexpr std::ptrdiff_t m_SnapshotType = 0x90; // AnimationSnapshotType_t
    constexpr std::ptrdiff_t m_bHasDecodeDump = 0x94; // bool
    constexpr std::ptrdiff_t m_DecodeDump = 0x98; // AnimationDecodeDebugDumpElement_t
}

namespace AnimationSnapshot_t { // AnimationSnapshotBase_t
    constexpr std::ptrdiff_t m_nEntIndex = 0x110; // int32_t
    constexpr std::ptrdiff_t m_modelName = 0x118; // CUtlString
}

namespace AttachmentHandle_t {
    constexpr std::ptrdiff_t m_Value = 0x0; // uint8_t
}

namespace BlendItem_t {
    constexpr std::ptrdiff_t m_tags = 0x0; // CUtlVector<TagSpan_t>
    constexpr std::ptrdiff_t m_pChild = 0x18; // CAnimUpdateNodeRef
    constexpr std::ptrdiff_t m_hSequence = 0x28; // HSequence
    constexpr std::ptrdiff_t m_vPos = 0x2C; // Vector2D
    constexpr std::ptrdiff_t m_flDuration = 0x34; // float
    constexpr std::ptrdiff_t m_bUseCustomDuration = 0x38; // bool
}

namespace BoneDemoCaptureSettings_t {
    constexpr std::ptrdiff_t m_boneName = 0x0; // CUtlString
    constexpr std::ptrdiff_t m_flChainLength = 0x8; // float
}

namespace CActionComponentUpdater { // CAnimComponentUpdater
    constexpr std::ptrdiff_t m_actions = 0x30; // CUtlVector<CSmartPtr<CAnimActionUpdater>>
}

namespace CAddUpdateNode { // CBinaryUpdateNode
    constexpr std::ptrdiff_t m_footMotionTiming = 0x8C; // BinaryNodeChildOption
    constexpr std::ptrdiff_t m_bApplyToFootMotion = 0x90; // bool
    constexpr std::ptrdiff_t m_bApplyChannelsSeparately = 0x91; // bool
    constexpr std::ptrdiff_t m_bUseModelSpace = 0x92; // bool
}

namespace CAimConstraint { // CBaseConstraint
    constexpr std::ptrdiff_t m_qAimOffset = 0x70; // Quaternion
    constexpr std::ptrdiff_t m_nUpType = 0x80; // uint32_t
}

namespace CAimMatrixUpdateNode { // CUnaryUpdateNode
    constexpr std::ptrdiff_t m_opFixedSettings = 0x70; // AimMatrixOpFixedSettings_t
    constexpr std::ptrdiff_t m_target = 0x148; // AnimVectorSource
    constexpr std::ptrdiff_t m_paramIndex = 0x14C; // CAnimParamHandle
    constexpr std::ptrdiff_t m_hSequence = 0x150; // HSequence
    constexpr std::ptrdiff_t m_bResetChild = 0x154; // bool
    constexpr std::ptrdiff_t m_bLockWhenWaning = 0x155; // bool
}

namespace CAnimActionUpdater {
}

namespace CAnimActivity {
    constexpr std::ptrdiff_t m_name = 0x0; // CBufferString
    constexpr std::ptrdiff_t m_nActivity = 0x10; // int32_t
    constexpr std::ptrdiff_t m_nFlags = 0x14; // int32_t
    constexpr std::ptrdiff_t m_nWeight = 0x18; // int32_t
}

namespace CAnimAttachment {
    constexpr std::ptrdiff_t m_influenceRotations = 0x0; // Quaternion[3]
    constexpr std::ptrdiff_t m_influenceOffsets = 0x30; // VectorAligned[3]
    constexpr std::ptrdiff_t m_influenceIndices = 0x60; // int32_t[3]
    constexpr std::ptrdiff_t m_influenceWeights = 0x6C; // float[3]
    constexpr std::ptrdiff_t m_numInfluences = 0x78; // uint8_t
}

namespace CAnimBone {
    constexpr std::ptrdiff_t m_name = 0x0; // CBufferString
    constexpr std::ptrdiff_t m_parent = 0x10; // int32_t
    constexpr std::ptrdiff_t m_pos = 0x14; // Vector
    constexpr std::ptrdiff_t m_quat = 0x20; // QuaternionStorage
    constexpr std::ptrdiff_t m_scale = 0x30; // float
    constexpr std::ptrdiff_t m_qAlignment = 0x34; // QuaternionStorage
    constexpr std::ptrdiff_t m_flags = 0x44; // int32_t
}

namespace CAnimBoneDifference {
    constexpr std::ptrdiff_t m_name = 0x0; // CBufferString
    constexpr std::ptrdiff_t m_parent = 0x10; // CBufferString
    constexpr std::ptrdiff_t m_posError = 0x20; // Vector
    constexpr std::ptrdiff_t m_bHasRotation = 0x2C; // bool
    constexpr std::ptrdiff_t m_bHasMovement = 0x2D; // bool
}

namespace CAnimComponentUpdater {
    constexpr std::ptrdiff_t m_name = 0x18; // CUtlString
    constexpr std::ptrdiff_t m_id = 0x20; // AnimComponentID
    constexpr std::ptrdiff_t m_networkMode = 0x24; // AnimNodeNetworkMode
    constexpr std::ptrdiff_t m_bStartEnabled = 0x28; // bool
}

namespace CAnimCycle { // CCycleBase
}

namespace CAnimData {
    constexpr std::ptrdiff_t m_name = 0x10; // CBufferString
    constexpr std::ptrdiff_t m_animArray = 0x20; // CUtlVector<CAnimDesc>
    constexpr std::ptrdiff_t m_decoderArray = 0x38; // CUtlVector<CAnimDecoder>
    constexpr std::ptrdiff_t m_nMaxUniqueFrameIndex = 0x50; // int32_t
    constexpr std::ptrdiff_t m_segmentArray = 0x58; // CUtlVector<CAnimFrameSegment>
}

namespace CAnimDataChannelDesc {
    constexpr std::ptrdiff_t m_szChannelClass = 0x0; // CBufferString
    constexpr std::ptrdiff_t m_szVariableName = 0x10; // CBufferString
    constexpr std::ptrdiff_t m_nFlags = 0x20; // int32_t
    constexpr std::ptrdiff_t m_nType = 0x24; // int32_t
    constexpr std::ptrdiff_t m_szGrouping = 0x28; // CBufferString
    constexpr std::ptrdiff_t m_szDescription = 0x38; // CBufferString
    constexpr std::ptrdiff_t m_szElementNameArray = 0x48; // CUtlVector<CBufferString>
    constexpr std::ptrdiff_t m_nElementIndexArray = 0x60; // CUtlVector<int32_t>
    constexpr std::ptrdiff_t m_nElementMaskArray = 0x78; // CUtlVector<uint32_t>
}

namespace CAnimDecoder {
    constexpr std::ptrdiff_t m_szName = 0x0; // CBufferString
    constexpr std::ptrdiff_t m_nVersion = 0x10; // int32_t
    constexpr std::ptrdiff_t m_nType = 0x14; // int32_t
}

namespace CAnimDemoCaptureSettings {
    constexpr std::ptrdiff_t m_rangeBoneChainLength = 0x0; // Vector2D
    constexpr std::ptrdiff_t m_rangeMaxSplineErrorRotation = 0x8; // Vector2D
    constexpr std::ptrdiff_t m_flMaxSplineErrorTranslation = 0x10; // float
    constexpr std::ptrdiff_t m_flMaxSplineErrorScale = 0x14; // float
    constexpr std::ptrdiff_t m_flIkRotation_MaxSplineError = 0x18; // float
    constexpr std::ptrdiff_t m_flIkTranslation_MaxSplineError = 0x1C; // float
    constexpr std::ptrdiff_t m_flMaxQuantizationErrorRotation = 0x20; // float
    constexpr std::ptrdiff_t m_flMaxQuantizationErrorTranslation = 0x24; // float
    constexpr std::ptrdiff_t m_flMaxQuantizationErrorScale = 0x28; // float
    constexpr std::ptrdiff_t m_flIkRotation_MaxQuantizationError = 0x2C; // float
    constexpr std::ptrdiff_t m_flIkTranslation_MaxQuantizationError = 0x30; // float
    constexpr std::ptrdiff_t m_baseSequence = 0x38; // CUtlString
    constexpr std::ptrdiff_t m_nBaseSequenceFrame = 0x40; // int32_t
    constexpr std::ptrdiff_t m_boneSelectionMode = 0x44; // EDemoBoneSelectionMode
    constexpr std::ptrdiff_t m_bones = 0x48; // CUtlVector<BoneDemoCaptureSettings_t>
    constexpr std::ptrdiff_t m_ikChains = 0x60; // CUtlVector<IKDemoCaptureSettings_t>
}

namespace CAnimDesc {
    constexpr std::ptrdiff_t m_name = 0x0; // CBufferString
    constexpr std::ptrdiff_t m_flags = 0x10; // CAnimDesc_Flag
    constexpr std::ptrdiff_t fps = 0x18; // float
    constexpr std::ptrdiff_t m_Data = 0x20; // CAnimEncodedFrames
    constexpr std::ptrdiff_t m_movementArray = 0xF8; // CUtlVector<CAnimMovement>
    constexpr std::ptrdiff_t m_eventArray = 0x110; // CUtlVector<CAnimEventDefinition>
    constexpr std::ptrdiff_t m_activityArray = 0x128; // CUtlVector<CAnimActivity>
    constexpr std::ptrdiff_t m_hierarchyArray = 0x140; // CUtlVector<CAnimLocalHierarchy>
    constexpr std::ptrdiff_t framestalltime = 0x158; // float
    constexpr std::ptrdiff_t m_vecRootMin = 0x15C; // Vector
    constexpr std::ptrdiff_t m_vecRootMax = 0x168; // Vector
    constexpr std::ptrdiff_t m_vecBoneWorldMin = 0x178; // CUtlVector<Vector>
    constexpr std::ptrdiff_t m_vecBoneWorldMax = 0x190; // CUtlVector<Vector>
    constexpr std::ptrdiff_t m_sequenceParams = 0x1A8; // CAnimSequenceParams
}

namespace CAnimDesc_Flag {
    constexpr std::ptrdiff_t m_bLooping = 0x0; // bool
    constexpr std::ptrdiff_t m_bAllZeros = 0x1; // bool
    constexpr std::ptrdiff_t m_bHidden = 0x2; // bool
    constexpr std::ptrdiff_t m_bDelta = 0x3; // bool
    constexpr std::ptrdiff_t m_bLegacyWorldspace = 0x4; // bool
    constexpr std::ptrdiff_t m_bModelDoc = 0x5; // bool
    constexpr std::ptrdiff_t m_bImplicitSeqIgnoreDelta = 0x6; // bool
    constexpr std::ptrdiff_t m_bAnimGraphAdditive = 0x7; // bool
}

namespace CAnimEncodeDifference {
    constexpr std::ptrdiff_t m_boneArray = 0x0; // CUtlVector<CAnimBoneDifference>
    constexpr std::ptrdiff_t m_morphArray = 0x18; // CUtlVector<CAnimMorphDifference>
    constexpr std::ptrdiff_t m_userArray = 0x30; // CUtlVector<CAnimUserDifference>
    constexpr std::ptrdiff_t m_bHasRotationBitArray = 0x48; // CUtlVector<uint8_t>
    constexpr std::ptrdiff_t m_bHasMovementBitArray = 0x60; // CUtlVector<uint8_t>
    constexpr std::ptrdiff_t m_bHasMorphBitArray = 0x78; // CUtlVector<uint8_t>
    constexpr std::ptrdiff_t m_bHasUserBitArray = 0x90; // CUtlVector<uint8_t>
}

namespace CAnimEncodedFrames {
    constexpr std::ptrdiff_t m_fileName = 0x0; // CBufferString
    constexpr std::ptrdiff_t m_nFrames = 0x10; // int32_t
    constexpr std::ptrdiff_t m_nFramesPerBlock = 0x14; // int32_t
    constexpr std::ptrdiff_t m_frameblockArray = 0x18; // CUtlVector<CAnimFrameBlockAnim>
    constexpr std::ptrdiff_t m_usageDifferences = 0x30; // CAnimEncodeDifference
}

namespace CAnimEnum {
    constexpr std::ptrdiff_t m_value = 0x0; // uint8_t
}

namespace CAnimEventDefinition {
    constexpr std::ptrdiff_t m_nFrame = 0x8; // int32_t
    constexpr std::ptrdiff_t m_flCycle = 0xC; // float
    constexpr std::ptrdiff_t m_EventData = 0x10; // KeyValues3
    constexpr std::ptrdiff_t m_sLegacyOptions = 0x20; // CBufferString
    constexpr std::ptrdiff_t m_sEventName = 0x30; // CGlobalSymbol
}

namespace CAnimFoot {
    constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
    constexpr std::ptrdiff_t m_vBallOffset = 0x8; // Vector
    constexpr std::ptrdiff_t m_vHeelOffset = 0x14; // Vector
    constexpr std::ptrdiff_t m_ankleBoneIndex = 0x20; // int32_t
    constexpr std::ptrdiff_t m_toeBoneIndex = 0x24; // int32_t
}

namespace CAnimFrameBlockAnim {
    constexpr std::ptrdiff_t m_nStartFrame = 0x0; // int32_t
    constexpr std::ptrdiff_t m_nEndFrame = 0x4; // int32_t
    constexpr std::ptrdiff_t m_segmentIndexArray = 0x8; // CUtlVector<int32_t>
}

namespace CAnimFrameSegment {
    constexpr std::ptrdiff_t m_nUniqueFrameIndex = 0x0; // int32_t
    constexpr std::ptrdiff_t m_nLocalElementMasks = 0x4; // uint32_t
    constexpr std::ptrdiff_t m_nLocalChannel = 0x8; // int32_t
    constexpr std::ptrdiff_t m_container = 0x10; // CUtlBinaryBlock
}

namespace CAnimGraphDebugReplay {
    constexpr std::ptrdiff_t m_animGraphFileName = 0x40; // CUtlString
    constexpr std::ptrdiff_t m_frameList = 0x48; // CUtlVector<CSmartPtr<CAnimReplayFrame>>
    constexpr std::ptrdiff_t m_startIndex = 0x60; // int32_t
    constexpr std::ptrdiff_t m_writeIndex = 0x64; // int32_t
    constexpr std::ptrdiff_t m_frameCount = 0x68; // int32_t
}

namespace CAnimGraphModelBinding {
    constexpr std::ptrdiff_t m_modelName = 0x8; // CUtlString
    constexpr std::ptrdiff_t m_pSharedData = 0x10; // CSmartPtr<CAnimUpdateSharedData>
}

namespace CAnimGraphNetworkSettings { // CAnimGraphSettingsGroup
    constexpr std::ptrdiff_t m_bNetworkingEnabled = 0x20; // bool
}

namespace CAnimGraphSettingsGroup {
}

namespace CAnimGraphSettingsManager {
    constexpr std::ptrdiff_t m_settingsGroups = 0x18; // CUtlVector<CSmartPtr<CAnimGraphSettingsGroup>>
}

namespace CAnimInputDamping {
    constexpr std::ptrdiff_t m_speedFunction = 0x8; // DampingSpeedFunction
    constexpr std::ptrdiff_t m_fSpeedScale = 0xC; // float
}

namespace CAnimKeyData {
    constexpr std::ptrdiff_t m_name = 0x0; // CBufferString
    constexpr std::ptrdiff_t m_boneArray = 0x10; // CUtlVector<CAnimBone>
    constexpr std::ptrdiff_t m_userArray = 0x28; // CUtlVector<CAnimUser>
    constexpr std::ptrdiff_t m_morphArray = 0x40; // CUtlVector<CBufferString>
    constexpr std::ptrdiff_t m_nChannelElements = 0x58; // int32_t
    constexpr std::ptrdiff_t m_dataChannelArray = 0x60; // CUtlVector<CAnimDataChannelDesc>
}

namespace CAnimLocalHierarchy {
    constexpr std::ptrdiff_t m_sBone = 0x0; // CBufferString
    constexpr std::ptrdiff_t m_sNewParent = 0x10; // CBufferString
    constexpr std::ptrdiff_t m_nStartFrame = 0x20; // int32_t
    constexpr std::ptrdiff_t m_nPeakFrame = 0x24; // int32_t
    constexpr std::ptrdiff_t m_nTailFrame = 0x28; // int32_t
    constexpr std::ptrdiff_t m_nEndFrame = 0x2C; // int32_t
}

namespace CAnimMorphDifference {
    constexpr std::ptrdiff_t m_name = 0x0; // CBufferString
}

namespace CAnimMotorUpdaterBase {
    constexpr std::ptrdiff_t m_name = 0x10; // CUtlString
    constexpr std::ptrdiff_t m_bDefault = 0x18; // bool
}

namespace CAnimMovement {
    constexpr std::ptrdiff_t endframe = 0x0; // int32_t
    constexpr std::ptrdiff_t motionflags = 0x4; // int32_t
    constexpr std::ptrdiff_t v0 = 0x8; // float
    constexpr std::ptrdiff_t v1 = 0xC; // float
    constexpr std::ptrdiff_t angle = 0x10; // float
    constexpr std::ptrdiff_t vector = 0x14; // Vector
    constexpr std::ptrdiff_t position = 0x20; // Vector
}

namespace CAnimNodePath {
    constexpr std::ptrdiff_t m_path = 0x0; // AnimNodeID[11]
    constexpr std::ptrdiff_t m_nCount = 0x2C; // int32_t
}

namespace CAnimParamHandle {
    constexpr std::ptrdiff_t m_type = 0x0; // AnimParamType_t
    constexpr std::ptrdiff_t m_index = 0x1; // uint8_t
}

namespace CAnimParamHandleMap {
    constexpr std::ptrdiff_t m_list = 0x0; // CUtlHashtable<uint16_t,int16_t>
}

namespace CAnimParameterBase {
    constexpr std::ptrdiff_t m_name = 0x18; // CGlobalSymbol
    constexpr std::ptrdiff_t m_group = 0x20; // CUtlString
    constexpr std::ptrdiff_t m_id = 0x28; // AnimParamID
    constexpr std::ptrdiff_t m_componentName = 0x40; // CUtlString
    constexpr std::ptrdiff_t m_bNetworkingRequested = 0x60; // bool
    constexpr std::ptrdiff_t m_bIsReferenced = 0x61; // bool
}

namespace CAnimParameterManagerUpdater {
    constexpr std::ptrdiff_t m_parameters = 0x18; // CUtlVector<CSmartPtr<CAnimParameterBase>>
    constexpr std::ptrdiff_t m_idToIndexMap = 0x30; // CUtlHashtable<AnimParamID,int32_t>
    constexpr std::ptrdiff_t m_nameToIndexMap = 0x50; // CUtlHashtable<CUtlString,int32_t>
    constexpr std::ptrdiff_t m_indexToHandle = 0x70; // CUtlVector<CAnimParamHandle>
    constexpr std::ptrdiff_t m_autoResetParams = 0x88; // CUtlVector<CUtlPair<CAnimParamHandle,CAnimVariant>>
    constexpr std::ptrdiff_t m_autoResetMap = 0xA0; // CUtlHashtable<CAnimParamHandle,int16_t>
}

namespace CAnimReplayFrame {
    constexpr std::ptrdiff_t m_inputDataBlocks = 0x10; // CUtlVector<CUtlBinaryBlock>
    constexpr std::ptrdiff_t m_instanceData = 0x28; // CUtlBinaryBlock
    constexpr std::ptrdiff_t m_startingLocalToWorldTransform = 0x40; // CTransform
    constexpr std::ptrdiff_t m_localToWorldTransform = 0x60; // CTransform
    constexpr std::ptrdiff_t m_timeStamp = 0x80; // float
}

namespace CAnimScriptComponentUpdater { // CAnimComponentUpdater
    constexpr std::ptrdiff_t m_hScript = 0x30; // AnimScriptHandle
}

namespace CAnimScriptManager {
    constexpr std::ptrdiff_t m_scriptInfo = 0x10; // CUtlVector<ScriptInfo_t>
}

namespace CAnimSequenceParams {
    constexpr std::ptrdiff_t m_flFadeInTime = 0x0; // float
    constexpr std::ptrdiff_t m_flFadeOutTime = 0x4; // float
}

namespace CAnimSkeleton {
    constexpr std::ptrdiff_t m_localSpaceTransforms = 0x10; // CUtlVector<CTransform>
    constexpr std::ptrdiff_t m_modelSpaceTransforms = 0x28; // CUtlVector<CTransform>
    constexpr std::ptrdiff_t m_boneNames = 0x40; // CUtlVector<CUtlString>
    constexpr std::ptrdiff_t m_children = 0x58; // CUtlVector<CUtlVector<int32_t>>
    constexpr std::ptrdiff_t m_parents = 0x70; // CUtlVector<int32_t>
    constexpr std::ptrdiff_t m_feet = 0x88; // CUtlVector<CAnimFoot>
    constexpr std::ptrdiff_t m_morphNames = 0xA0; // CUtlVector<CUtlString>
    constexpr std::ptrdiff_t m_lodBoneCounts = 0xB8; // CUtlVector<int32_t>
}

namespace CAnimStateMachineUpdater {
    constexpr std::ptrdiff_t m_states = 0x8; // CUtlVector<CStateUpdateData>
    constexpr std::ptrdiff_t m_transitions = 0x20; // CUtlVector<CTransitionUpdateData>
    constexpr std::ptrdiff_t m_startStateIndex = 0x50; // int32_t
}

namespace CAnimTagBase {
    constexpr std::ptrdiff_t m_name = 0x18; // CGlobalSymbol
    constexpr std::ptrdiff_t m_group = 0x20; // CGlobalSymbol
    constexpr std::ptrdiff_t m_tagID = 0x28; // AnimTagID
    constexpr std::ptrdiff_t m_bIsReferenced = 0x40; // bool
}

namespace CAnimTagManagerUpdater {
    constexpr std::ptrdiff_t m_tags = 0x18; // CUtlVector<CSmartPtr<CAnimTagBase>>
}

namespace CAnimUpdateNodeBase {
    constexpr std::ptrdiff_t m_nodePath = 0x18; // CAnimNodePath
    constexpr std::ptrdiff_t m_networkMode = 0x48; // AnimNodeNetworkMode
    constexpr std::ptrdiff_t m_name = 0x50; // CUtlString
}

namespace CAnimUpdateNodeRef {
    constexpr std::ptrdiff_t m_nodeIndex = 0x8; // int32_t
}

namespace CAnimUpdateSharedData {
    constexpr std::ptrdiff_t m_nodes = 0x10; // CUtlVector<CSmartPtr<CAnimUpdateNodeBase>>
    constexpr std::ptrdiff_t m_nodeIndexMap = 0x28; // CUtlHashtable<CAnimNodePath,int32_t>
    constexpr std::ptrdiff_t m_components = 0x48; // CUtlVector<CSmartPtr<CAnimComponentUpdater>>
    constexpr std::ptrdiff_t m_pParamListUpdater = 0x60; // CSmartPtr<CAnimParameterManagerUpdater>
    constexpr std::ptrdiff_t m_pTagManagerUpdater = 0x68; // CSmartPtr<CAnimTagManagerUpdater>
    constexpr std::ptrdiff_t m_scriptManager = 0x70; // CSmartPtr<CAnimScriptManager>
    constexpr std::ptrdiff_t m_settings = 0x78; // CAnimGraphSettingsManager
    constexpr std::ptrdiff_t m_pStaticPoseCache = 0xA8; // CSmartPtr<CStaticPoseCacheBuilder>
    constexpr std::ptrdiff_t m_pSkeleton = 0xB0; // CSmartPtr<CAnimSkeleton>
    constexpr std::ptrdiff_t m_rootNodePath = 0xB8; // CAnimNodePath
}

namespace CAnimUser {
    constexpr std::ptrdiff_t m_name = 0x0; // CBufferString
    constexpr std::ptrdiff_t m_nType = 0x10; // int32_t
}

namespace CAnimUserDifference {
    constexpr std::ptrdiff_t m_name = 0x0; // CBufferString
    constexpr std::ptrdiff_t m_nType = 0x10; // int32_t
}

namespace CAnimationGraphVisualizerAxis { // CAnimationGraphVisualizerPrimitiveBase
    constexpr std::ptrdiff_t m_xWsTransform = 0x40; // CTransform
    constexpr std::ptrdiff_t m_flAxisSize = 0x60; // float
}

namespace CAnimationGraphVisualizerLine { // CAnimationGraphVisualizerPrimitiveBase
    constexpr std::ptrdiff_t m_vWsPositionStart = 0x40; // VectorAligned
    constexpr std::ptrdiff_t m_vWsPositionEnd = 0x50; // VectorAligned
    constexpr std::ptrdiff_t m_Color = 0x60; // Color
}

namespace CAnimationGraphVisualizerPie { // CAnimationGraphVisualizerPrimitiveBase
    constexpr std::ptrdiff_t m_vWsCenter = 0x40; // VectorAligned
    constexpr std::ptrdiff_t m_vWsStart = 0x50; // VectorAligned
    constexpr std::ptrdiff_t m_vWsEnd = 0x60; // VectorAligned
    constexpr std::ptrdiff_t m_Color = 0x70; // Color
}

namespace CAnimationGraphVisualizerPrimitiveBase {
    constexpr std::ptrdiff_t m_Type = 0x8; // CAnimationGraphVisualizerPrimitiveType
    constexpr std::ptrdiff_t m_OwningAnimNodePaths = 0xC; // AnimNodeID[11]
    constexpr std::ptrdiff_t m_nOwningAnimNodePathCount = 0x38; // int32_t
}

namespace CAnimationGraphVisualizerSphere { // CAnimationGraphVisualizerPrimitiveBase
    constexpr std::ptrdiff_t m_vWsPosition = 0x40; // VectorAligned
    constexpr std::ptrdiff_t m_flRadius = 0x50; // float
    constexpr std::ptrdiff_t m_Color = 0x54; // Color
}

namespace CAnimationGraphVisualizerText { // CAnimationGraphVisualizerPrimitiveBase
    constexpr std::ptrdiff_t m_vWsPosition = 0x40; // VectorAligned
    constexpr std::ptrdiff_t m_Color = 0x50; // Color
    constexpr std::ptrdiff_t m_Text = 0x58; // CUtlString
}

namespace CAnimationGroup {
    constexpr std::ptrdiff_t m_nFlags = 0x10; // uint32_t
    constexpr std::ptrdiff_t m_name = 0x18; // CBufferString
    constexpr std::ptrdiff_t m_localHAnimArray_Handle = 0x60; // CUtlVector<CStrongHandle<InfoForResourceTypeCAnimData>>
    constexpr std::ptrdiff_t m_includedGroupArray_Handle = 0x78; // CUtlVector<CStrongHandle<InfoForResourceTypeCAnimationGroup>>
    constexpr std::ptrdiff_t m_directHSeqGroup_Handle = 0x90; // CStrongHandle<InfoForResourceTypeCSequenceGroupData>
    constexpr std::ptrdiff_t m_decodeKey = 0x98; // CAnimKeyData
    constexpr std::ptrdiff_t m_szScripts = 0x110; // CUtlVector<CBufferString>
}

namespace CAttachment {
    constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
    constexpr std::ptrdiff_t m_influenceNames = 0x8; // CUtlString[3]
    constexpr std::ptrdiff_t m_vInfluenceRotations = 0x20; // Quaternion[3]
    constexpr std::ptrdiff_t m_vInfluenceOffsets = 0x50; // Vector[3]
    constexpr std::ptrdiff_t m_influenceWeights = 0x74; // float[3]
    constexpr std::ptrdiff_t m_bInfluenceRootTransform = 0x80; // bool[3]
    constexpr std::ptrdiff_t m_nInfluences = 0x83; // uint8_t
    constexpr std::ptrdiff_t m_bIgnoreRotation = 0x84; // bool
}

namespace CAudioAnimTag { // CAnimTagBase
    constexpr std::ptrdiff_t m_clipName = 0x50; // CUtlString
    constexpr std::ptrdiff_t m_attachmentName = 0x58; // CUtlString
    constexpr std::ptrdiff_t m_flVolume = 0x60; // float
    constexpr std::ptrdiff_t m_bStopWhenTagEnds = 0x64; // bool
    constexpr std::ptrdiff_t m_bStopWhenGraphEnds = 0x65; // bool
    constexpr std::ptrdiff_t m_bPlayOnServer = 0x66; // bool
    constexpr std::ptrdiff_t m_bPlayOnClient = 0x67; // bool
}

namespace CBaseConstraint { // CBoneConstraintBase
    constexpr std::ptrdiff_t m_name = 0x28; // CUtlString
    constexpr std::ptrdiff_t m_vUpVector = 0x30; // Vector
    constexpr std::ptrdiff_t m_slaves = 0x40; // CUtlVector<CConstraintSlave>
    constexpr std::ptrdiff_t m_targets = 0x58; // CUtlVector<CConstraintTarget>
}

namespace CBinaryUpdateNode { // CAnimUpdateNodeBase
    constexpr std::ptrdiff_t m_pChild1 = 0x58; // CAnimUpdateNodeRef
    constexpr std::ptrdiff_t m_pChild2 = 0x68; // CAnimUpdateNodeRef
    constexpr std::ptrdiff_t m_timingBehavior = 0x78; // BinaryNodeTiming
    constexpr std::ptrdiff_t m_flTimingBlend = 0x7C; // float
    constexpr std::ptrdiff_t m_bResetChild1 = 0x80; // bool
    constexpr std::ptrdiff_t m_bResetChild2 = 0x81; // bool
}

namespace CBindPoseUpdateNode { // CLeafUpdateNode
}

namespace CBlend2DUpdateNode { // CAnimUpdateNodeBase
    constexpr std::ptrdiff_t m_items = 0x60; // CUtlVector<BlendItem_t>
    constexpr std::ptrdiff_t m_tags = 0x78; // CUtlVector<TagSpan_t>
    constexpr std::ptrdiff_t m_paramSpans = 0x90; // CParamSpanUpdater
    constexpr std::ptrdiff_t m_nodeItemIndices = 0xA8; // CUtlVector<int32_t>
    constexpr std::ptrdiff_t m_damping = 0xC0; // CAnimInputDamping
    constexpr std::ptrdiff_t m_blendSourceX = 0xD0; // AnimValueSource
    constexpr std::ptrdiff_t m_paramX = 0xD4; // CAnimParamHandle
    constexpr std::ptrdiff_t m_blendSourceY = 0xD8; // AnimValueSource
    constexpr std::ptrdiff_t m_paramY = 0xDC; // CAnimParamHandle
    constexpr std::ptrdiff_t m_eBlendMode = 0xE0; // Blend2DMode
    constexpr std::ptrdiff_t m_playbackSpeed = 0xE4; // float
    constexpr std::ptrdiff_t m_bLoop = 0xE8; // bool
    constexpr std::ptrdiff_t m_bLockBlendOnReset = 0xE9; // bool
    constexpr std::ptrdiff_t m_bLockWhenWaning = 0xEA; // bool
    constexpr std::ptrdiff_t m_bAnimEventsAndTagsOnMostWeightedOnly = 0xEB; // bool
}

namespace CBlendCurve {
    constexpr std::ptrdiff_t m_flControlPoint1 = 0x0; // float
    constexpr std::ptrdiff_t m_flControlPoint2 = 0x4; // float
}

namespace CBlendUpdateNode { // CAnimUpdateNodeBase
    constexpr std::ptrdiff_t m_children = 0x60; // CUtlVector<CAnimUpdateNodeRef>
    constexpr std::ptrdiff_t m_sortedOrder = 0x78; // CUtlVector<uint8_t>
    constexpr std::ptrdiff_t m_targetValues = 0x90; // CUtlVector<float>
    constexpr std::ptrdiff_t m_blendValueSource = 0xAC; // AnimValueSource
    constexpr std::ptrdiff_t m_paramIndex = 0xB0; // CAnimParamHandle
    constexpr std::ptrdiff_t m_damping = 0xB8; // CAnimInputDamping
    constexpr std::ptrdiff_t m_blendKeyType = 0xC8; // BlendKeyType
    constexpr std::ptrdiff_t m_bLockBlendOnReset = 0xCC; // bool
    constexpr std::ptrdiff_t m_bSyncCycles = 0xCD; // bool
    constexpr std::ptrdiff_t m_bLoop = 0xCE; // bool
    constexpr std::ptrdiff_t m_bLockWhenWaning = 0xCF; // bool
}

namespace CBlockSelectionMetricEvaluator { // CMotionMetricEvaluator
}

namespace CBodyGroupAnimTag { // CAnimTagBase
    constexpr std::ptrdiff_t m_nPriority = 0x50; // int32_t
    constexpr std::ptrdiff_t m_bodyGroupSettings = 0x58; // CUtlVector<CBodyGroupSetting>
}

namespace CBodyGroupSetting {
    constexpr std::ptrdiff_t m_BodyGroupName = 0x0; // CUtlString
    constexpr std::ptrdiff_t m_nBodyGroupOption = 0x8; // int32_t
}

namespace CBoneConstraintBase {
}

namespace CBoneConstraintDotToMorph { // CBoneConstraintBase
    constexpr std::ptrdiff_t m_sBoneName = 0x28; // CUtlString
    constexpr std::ptrdiff_t m_sTargetBoneName = 0x30; // CUtlString
    constexpr std::ptrdiff_t m_sMorphChannelName = 0x38; // CUtlString
    constexpr std::ptrdiff_t m_flRemap = 0x40; // float[4]
}

namespace CBoneConstraintPoseSpaceBone { // CBaseConstraint
    constexpr std::ptrdiff_t m_inputList = 0x70; // CUtlVector<CBoneConstraintPoseSpaceBone::Input_t>
}

namespace CBoneConstraintPoseSpaceBone_Input_t {
    constexpr std::ptrdiff_t m_inputValue = 0x0; // Vector
    constexpr std::ptrdiff_t m_outputTransformList = 0x10; // CUtlVector<CTransform>
}

namespace CBoneConstraintPoseSpaceMorph { // CBoneConstraintBase
    constexpr std::ptrdiff_t m_sBoneName = 0x28; // CUtlString
    constexpr std::ptrdiff_t m_sAttachmentName = 0x30; // CUtlString
    constexpr std::ptrdiff_t m_outputMorph = 0x38; // CUtlVector<CUtlString>
    constexpr std::ptrdiff_t m_inputList = 0x50; // CUtlVector<CBoneConstraintPoseSpaceMorph::Input_t>
    constexpr std::ptrdiff_t m_bClamp = 0x68; // bool
}

namespace CBoneConstraintPoseSpaceMorph_Input_t {
    constexpr std::ptrdiff_t m_inputValue = 0x0; // Vector
    constexpr std::ptrdiff_t m_outputWeightList = 0x10; // CUtlVector<float>
}

namespace CBoneMaskUpdateNode { // CBinaryUpdateNode
    constexpr std::ptrdiff_t m_nWeightListIndex = 0x8C; // int32_t
    constexpr std::ptrdiff_t m_flRootMotionBlend = 0x90; // float
    constexpr std::ptrdiff_t m_blendSpace = 0x94; // BoneMaskBlendSpace
    constexpr std::ptrdiff_t m_footMotionTiming = 0x98; // BinaryNodeChildOption
    constexpr std::ptrdiff_t m_bUseBlendScale = 0x9C; // bool
    constexpr std::ptrdiff_t m_blendValueSource = 0xA0; // AnimValueSource
    constexpr std::ptrdiff_t m_hBlendParameter = 0xA4; // CAnimParamHandle
}

namespace CBonePositionMetricEvaluator { // CMotionMetricEvaluator
    constexpr std::ptrdiff_t m_nBoneIndex = 0x50; // int32_t
}

namespace CBoneVelocityMetricEvaluator { // CMotionMetricEvaluator
    constexpr std::ptrdiff_t m_nBoneIndex = 0x50; // int32_t
}

namespace CBoolAnimParameter { // CConcreteAnimParameter
    constexpr std::ptrdiff_t m_bDefaultValue = 0x78; // bool
}

namespace CCPPScriptComponentUpdater { // CAnimComponentUpdater
    constexpr std::ptrdiff_t m_scriptsToRun = 0x30; // CUtlVector<CGlobalSymbol>
}

namespace CCachedPose {
    constexpr std::ptrdiff_t m_transforms = 0x8; // CUtlVector<CTransform>
    constexpr std::ptrdiff_t m_morphWeights = 0x20; // CUtlVector<float>
    constexpr std::ptrdiff_t m_hSequence = 0x38; // HSequence
    constexpr std::ptrdiff_t m_flCycle = 0x3C; // float
}

namespace CChoiceUpdateNode { // CAnimUpdateNodeBase
    constexpr std::ptrdiff_t m_children = 0x58; // CUtlVector<CAnimUpdateNodeRef>
    constexpr std::ptrdiff_t m_weights = 0x70; // CUtlVector<float>
    constexpr std::ptrdiff_t m_blendTimes = 0x88; // CUtlVector<float>
    constexpr std::ptrdiff_t m_choiceMethod = 0xA0; // ChoiceMethod
    constexpr std::ptrdiff_t m_choiceChangeMethod = 0xA4; // ChoiceChangeMethod
    constexpr std::ptrdiff_t m_blendMethod = 0xA8; // ChoiceBlendMethod
    constexpr std::ptrdiff_t m_blendTime = 0xAC; // float
    constexpr std::ptrdiff_t m_bCrossFade = 0xB0; // bool
    constexpr std::ptrdiff_t m_bResetChosen = 0xB1; // bool
    constexpr std::ptrdiff_t m_bDontResetSameSelection = 0xB2; // bool
}

namespace CChoreoUpdateNode { // CUnaryUpdateNode
}

namespace CClothSettingsAnimTag { // CAnimTagBase
    constexpr std::ptrdiff_t m_flStiffness = 0x50; // float
    constexpr std::ptrdiff_t m_flEaseIn = 0x54; // float
    constexpr std::ptrdiff_t m_flEaseOut = 0x58; // float
    constexpr std::ptrdiff_t m_nVertexSet = 0x60; // CUtlString
}

namespace CCompressorGroup {
    constexpr std::ptrdiff_t m_nTotalElementCount = 0x0; // int32_t
    constexpr std::ptrdiff_t m_szChannelClass = 0x8; // CUtlVector<char*>
    constexpr std::ptrdiff_t m_szVariableName = 0x20; // CUtlVector<char*>
    constexpr std::ptrdiff_t m_nType = 0x38; // CUtlVector<fieldtype_t>
    constexpr std::ptrdiff_t m_nFlags = 0x50; // CUtlVector<int32_t>
    constexpr std::ptrdiff_t m_szGrouping = 0x68; // CUtlVector<CUtlString>
    constexpr std::ptrdiff_t m_nCompressorIndex = 0x80; // CUtlVector<int32_t>
    constexpr std::ptrdiff_t m_szElementNames = 0x98; // CUtlVector<CUtlVector<char*>>
    constexpr std::ptrdiff_t m_nElementUniqueID = 0xB0; // CUtlVector<CUtlVector<int32_t>>
    constexpr std::ptrdiff_t m_nElementMask = 0xC8; // CUtlVector<uint32_t>
    constexpr std::ptrdiff_t m_vectorCompressor = 0xF8; // CUtlVector<CCompressor<Vector>*>
    constexpr std::ptrdiff_t m_quaternionCompressor = 0x110; // CUtlVector<CCompressor<QuaternionStorage>*>
    constexpr std::ptrdiff_t m_intCompressor = 0x128; // CUtlVector<CCompressor<int32_t>*>
    constexpr std::ptrdiff_t m_boolCompressor = 0x140; // CUtlVector<CCompressor<bool>*>
    constexpr std::ptrdiff_t m_colorCompressor = 0x158; // CUtlVector<CCompressor<Color>*>
    constexpr std::ptrdiff_t m_vector2DCompressor = 0x170; // CUtlVector<CCompressor<Vector2D>*>
    constexpr std::ptrdiff_t m_vector4DCompressor = 0x188; // CUtlVector<CCompressor<Vector4D>*>
}

namespace CConcreteAnimParameter { // CAnimParameterBase
    constexpr std::ptrdiff_t m_previewButton = 0x68; // AnimParamButton_t
    constexpr std::ptrdiff_t m_eNetworkSetting = 0x6C; // AnimParamNetworkSetting
    constexpr std::ptrdiff_t m_bUseMostRecentValue = 0x70; // bool
    constexpr std::ptrdiff_t m_bAutoReset = 0x71; // bool
    constexpr std::ptrdiff_t m_bGameWritable = 0x72; // bool
    constexpr std::ptrdiff_t m_bGraphWritable = 0x73; // bool
}

namespace CConstraintSlave {
    constexpr std::ptrdiff_t m_qBaseOrientation = 0x0; // Quaternion
    constexpr std::ptrdiff_t m_vBasePosition = 0x10; // Vector
    constexpr std::ptrdiff_t m_nBoneHash = 0x1C; // uint32_t
    constexpr std::ptrdiff_t m_flWeight = 0x20; // float
    constexpr std::ptrdiff_t m_sName = 0x28; // CUtlString
}

namespace CConstraintTarget {
    constexpr std::ptrdiff_t m_qOffset = 0x20; // Quaternion
    constexpr std::ptrdiff_t m_vOffset = 0x30; // Vector
    constexpr std::ptrdiff_t m_nBoneHash = 0x3C; // uint32_t
    constexpr std::ptrdiff_t m_sName = 0x40; // CUtlString
    constexpr std::ptrdiff_t m_flWeight = 0x48; // float
    constexpr std::ptrdiff_t m_bIsAttachment = 0x59; // bool
}

namespace CCurrentRotationVelocityMetricEvaluator { // CMotionMetricEvaluator
}

namespace CCurrentVelocityMetricEvaluator { // CMotionMetricEvaluator
}

namespace CCycleBase {
    constexpr std::ptrdiff_t m_flCycle = 0x0; // float
}

namespace CCycleControlClipUpdateNode { // CLeafUpdateNode
    constexpr std::ptrdiff_t m_tags = 0x60; // CUtlVector<TagSpan_t>
    constexpr std::ptrdiff_t m_hSequence = 0x7C; // HSequence
    constexpr std::ptrdiff_t m_duration = 0x80; // float
    constexpr std::ptrdiff_t m_valueSource = 0x84; // AnimValueSource
    constexpr std::ptrdiff_t m_paramIndex = 0x88; // CAnimParamHandle
}

namespace CCycleControlUpdateNode { // CUnaryUpdateNode
    constexpr std::ptrdiff_t m_valueSource = 0x68; // AnimValueSource
    constexpr std::ptrdiff_t m_paramIndex = 0x6C; // CAnimParamHandle
}

namespace CDampedPathAnimMotorUpdater { // CPathAnimMotorUpdaterBase
    constexpr std::ptrdiff_t m_flAnticipationTime = 0x2C; // float
    constexpr std::ptrdiff_t m_flMinSpeedScale = 0x30; // float
    constexpr std::ptrdiff_t m_hAnticipationPosParam = 0x34; // CAnimParamHandle
    constexpr std::ptrdiff_t m_hAnticipationHeadingParam = 0x36; // CAnimParamHandle
    constexpr std::ptrdiff_t m_flSpringConstant = 0x38; // float
    constexpr std::ptrdiff_t m_flMinSpringTension = 0x3C; // float
    constexpr std::ptrdiff_t m_flMaxSpringTension = 0x40; // float
}

namespace CDampedValueComponentUpdater { // CAnimComponentUpdater
    constexpr std::ptrdiff_t m_items = 0x30; // CUtlVector<CDampedValueUpdateItem>
}

namespace CDampedValueUpdateItem {
    constexpr std::ptrdiff_t m_damping = 0x0; // CAnimInputDamping
    constexpr std::ptrdiff_t m_hParamIn = 0x18; // CAnimParamHandle
    constexpr std::ptrdiff_t m_hParamOut = 0x1A; // CAnimParamHandle
}

namespace CDemoSettingsComponentUpdater { // CAnimComponentUpdater
    constexpr std::ptrdiff_t m_settings = 0x30; // CAnimDemoCaptureSettings
}

namespace CDirectPlaybackTagData {
    constexpr std::ptrdiff_t m_sequenceName = 0x0; // CUtlString
    constexpr std::ptrdiff_t m_tags = 0x8; // CUtlVector<TagSpan_t>
}

namespace CDirectPlaybackUpdateNode { // CUnaryUpdateNode
    constexpr std::ptrdiff_t m_bFinishEarly = 0x6C; // bool
    constexpr std::ptrdiff_t m_bResetOnFinish = 0x6D; // bool
    constexpr std::ptrdiff_t m_allTags = 0x70; // CUtlVector<CDirectPlaybackTagData>
}

namespace CDirectionalBlendUpdateNode { // CLeafUpdateNode
    constexpr std::ptrdiff_t m_hSequences = 0x5C; // HSequence[8]
    constexpr std::ptrdiff_t m_damping = 0x80; // CAnimInputDamping
    constexpr std::ptrdiff_t m_blendValueSource = 0x90; // AnimValueSource
    constexpr std::ptrdiff_t m_paramIndex = 0x94; // CAnimParamHandle
    constexpr std::ptrdiff_t m_playbackSpeed = 0x98; // float
    constexpr std::ptrdiff_t m_duration = 0x9C; // float
    constexpr std::ptrdiff_t m_bLoop = 0xA0; // bool
    constexpr std::ptrdiff_t m_bLockBlendOnReset = 0xA1; // bool
}

namespace CDistanceRemainingMetricEvaluator { // CMotionMetricEvaluator
    constexpr std::ptrdiff_t m_flMaxDistance = 0x50; // float
    constexpr std::ptrdiff_t m_flMinDistance = 0x54; // float
    constexpr std::ptrdiff_t m_flStartGoalFilterDistance = 0x58; // float
    constexpr std::ptrdiff_t m_flMaxGoalOvershootScale = 0x5C; // float
    constexpr std::ptrdiff_t m_bFilterFixedMinDistance = 0x60; // bool
    constexpr std::ptrdiff_t m_bFilterGoalDistance = 0x61; // bool
    constexpr std::ptrdiff_t m_bFilterGoalOvershoot = 0x62; // bool
}

namespace CDrawCullingData {
    constexpr std::ptrdiff_t m_vConeApex = 0x0; // Vector
    constexpr std::ptrdiff_t m_ConeAxis = 0xC; // int8_t[3]
    constexpr std::ptrdiff_t m_ConeCutoff = 0xF; // int8_t
}

namespace CEditableMotionGraph { // CMotionGraph
}

namespace CEmitTagActionUpdater { // CAnimActionUpdater
    constexpr std::ptrdiff_t m_nTagIndex = 0x18; // int32_t
    constexpr std::ptrdiff_t m_bIsZeroDuration = 0x1C; // bool
}

namespace CEnumAnimParameter { // CConcreteAnimParameter
    constexpr std::ptrdiff_t m_defaultValue = 0x80; // uint8_t
    constexpr std::ptrdiff_t m_enumOptions = 0x88; // CUtlVector<CUtlString>
}

namespace CExpressionActionUpdater { // CAnimActionUpdater
    constexpr std::ptrdiff_t m_hParam = 0x18; // CAnimParamHandle
    constexpr std::ptrdiff_t m_eParamType = 0x1A; // AnimParamType_t
    constexpr std::ptrdiff_t m_hScript = 0x1C; // AnimScriptHandle
}

namespace CFlexController {
    constexpr std::ptrdiff_t m_szName = 0x0; // CUtlString
    constexpr std::ptrdiff_t m_szType = 0x8; // CUtlString
    constexpr std::ptrdiff_t min = 0x10; // float
    constexpr std::ptrdiff_t max = 0x14; // float
}

namespace CFlexDesc {
    constexpr std::ptrdiff_t m_szFacs = 0x0; // CUtlString
}

namespace CFlexOp {
    constexpr std::ptrdiff_t m_OpCode = 0x0; // FlexOpCode_t
    constexpr std::ptrdiff_t m_Data = 0x4; // int32_t
}

namespace CFlexRule {
    constexpr std::ptrdiff_t m_nFlex = 0x0; // int32_t
    constexpr std::ptrdiff_t m_FlexOps = 0x8; // CUtlVector<CFlexOp>
}

namespace CFloatAnimParameter { // CConcreteAnimParameter
    constexpr std::ptrdiff_t m_fDefaultValue = 0x78; // float
    constexpr std::ptrdiff_t m_fMinValue = 0x7C; // float
    constexpr std::ptrdiff_t m_fMaxValue = 0x80; // float
    constexpr std::ptrdiff_t m_bInterpolate = 0x84; // bool
}

namespace CFollowAttachmentUpdateNode { // CUnaryUpdateNode
    constexpr std::ptrdiff_t m_opFixedData = 0x70; // FollowAttachmentSettings_t
}

namespace CFollowPathUpdateNode { // CUnaryUpdateNode
    constexpr std::ptrdiff_t m_flBlendOutTime = 0x6C; // float
    constexpr std::ptrdiff_t m_bBlockNonPathMovement = 0x70; // bool
    constexpr std::ptrdiff_t m_bStopFeetAtGoal = 0x71; // bool
    constexpr std::ptrdiff_t m_bScaleSpeed = 0x72; // bool
    constexpr std::ptrdiff_t m_flScale = 0x74; // float
    constexpr std::ptrdiff_t m_flMinAngle = 0x78; // float
    constexpr std::ptrdiff_t m_flMaxAngle = 0x7C; // float
    constexpr std::ptrdiff_t m_flSpeedScaleBlending = 0x80; // float
    constexpr std::ptrdiff_t m_turnDamping = 0x88; // CAnimInputDamping
    constexpr std::ptrdiff_t m_facingTarget = 0x98; // AnimValueSource
    constexpr std::ptrdiff_t m_hParam = 0x9C; // CAnimParamHandle
    constexpr std::ptrdiff_t m_flTurnToFaceOffset = 0xA0; // float
    constexpr std::ptrdiff_t m_bTurnToFace = 0xA4; // bool
}

namespace CFootAdjustmentUpdateNode { // CUnaryUpdateNode
    constexpr std::ptrdiff_t m_clips = 0x70; // CUtlVector<HSequence>
    constexpr std::ptrdiff_t m_hBasePoseCacheHandle = 0x88; // CPoseHandle
    constexpr std::ptrdiff_t m_facingTarget = 0x8C; // CAnimParamHandle
    constexpr std::ptrdiff_t m_flTurnTimeMin = 0x90; // float
    constexpr std::ptrdiff_t m_flTurnTimeMax = 0x94; // float
    constexpr std::ptrdiff_t m_flStepHeightMax = 0x98; // float
    constexpr std::ptrdiff_t m_flStepHeightMaxAngle = 0x9C; // float
    constexpr std::ptrdiff_t m_bResetChild = 0xA0; // bool
    constexpr std::ptrdiff_t m_bAnimationDriven = 0xA1; // bool
}

namespace CFootCycle { // CCycleBase
}

namespace CFootCycleDefinition {
    constexpr std::ptrdiff_t m_vStancePositionMS = 0x0; // Vector
    constexpr std::ptrdiff_t m_vMidpointPositionMS = 0xC; // Vector
    constexpr std::ptrdiff_t m_flStanceDirectionMS = 0x18; // float
    constexpr std::ptrdiff_t m_vToStrideStartPos = 0x1C; // Vector
    constexpr std::ptrdiff_t m_stanceCycle = 0x28; // CAnimCycle
    constexpr std::ptrdiff_t m_footLiftCycle = 0x2C; // CFootCycle
    constexpr std::ptrdiff_t m_footOffCycle = 0x30; // CFootCycle
    constexpr std::ptrdiff_t m_footStrikeCycle = 0x34; // CFootCycle
    constexpr std::ptrdiff_t m_footLandCycle = 0x38; // CFootCycle
}

namespace CFootCycleMetricEvaluator { // CMotionMetricEvaluator
    constexpr std::ptrdiff_t m_footIndices = 0x50; // CUtlVector<int32_t>
}

namespace CFootDefinition {
    constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
    constexpr std::ptrdiff_t m_ankleBoneName = 0x8; // CUtlString
    constexpr std::ptrdiff_t m_toeBoneName = 0x10; // CUtlString
    constexpr std::ptrdiff_t m_vBallOffset = 0x18; // Vector
    constexpr std::ptrdiff_t m_vHeelOffset = 0x24; // Vector
    constexpr std::ptrdiff_t m_flFootLength = 0x30; // float
    constexpr std::ptrdiff_t m_flBindPoseDirectionMS = 0x34; // float
    constexpr std::ptrdiff_t m_flTraceHeight = 0x38; // float
    constexpr std::ptrdiff_t m_flTraceRadius = 0x3C; // float
}

namespace CFootFallAnimTag { // CAnimTagBase
    constexpr std::ptrdiff_t m_foot = 0x50; // FootFallTagFoot_t
}

namespace CFootLockUpdateNode { // CUnaryUpdateNode
    constexpr std::ptrdiff_t m_opFixedSettings = 0x68; // FootLockPoseOpFixedSettings
    constexpr std::ptrdiff_t m_footSettings = 0xD0; // CUtlVector<FootFixedSettings>
    constexpr std::ptrdiff_t m_hipShiftDamping = 0xE8; // CAnimInputDamping
    constexpr std::ptrdiff_t m_rootHeightDamping = 0xF8; // CAnimInputDamping
    constexpr std::ptrdiff_t m_flStrideCurveScale = 0x108; // float
    constexpr std::ptrdiff_t m_flStrideCurveLimitScale = 0x10C; // float
    constexpr std::ptrdiff_t m_flStepHeightIncreaseScale = 0x110; // float
    constexpr std::ptrdiff_t m_flStepHeightDecreaseScale = 0x114; // float
    constexpr std::ptrdiff_t m_flHipShiftScale = 0x118; // float
    constexpr std::ptrdiff_t m_flBlendTime = 0x11C; // float
    constexpr std::ptrdiff_t m_flMaxRootHeightOffset = 0x120; // float
    constexpr std::ptrdiff_t m_flMinRootHeightOffset = 0x124; // float
    constexpr std::ptrdiff_t m_flTiltPlanePitchSpringStrength = 0x128; // float
    constexpr std::ptrdiff_t m_flTiltPlaneRollSpringStrength = 0x12C; // float
    constexpr std::ptrdiff_t m_bApplyFootRotationLimits = 0x130; // bool
    constexpr std::ptrdiff_t m_bApplyHipShift = 0x131; // bool
    constexpr std::ptrdiff_t m_bModulateStepHeight = 0x132; // bool
    constexpr std::ptrdiff_t m_bResetChild = 0x133; // bool
    constexpr std::ptrdiff_t m_bEnableVerticalCurvedPaths = 0x134; // bool
    constexpr std::ptrdiff_t m_bEnableRootHeightDamping = 0x135; // bool
}

namespace CFootMotion {
    constexpr std::ptrdiff_t m_strides = 0x0; // CUtlVector<CFootStride>
    constexpr std::ptrdiff_t m_name = 0x18; // CUtlString
    constexpr std::ptrdiff_t m_bAdditive = 0x20; // bool
}

namespace CFootPinningUpdateNode { // CUnaryUpdateNode
    constexpr std::ptrdiff_t m_poseOpFixedData = 0x70; // FootPinningPoseOpFixedData_t
    constexpr std::ptrdiff_t m_eTimingSource = 0xA0; // FootPinningTimingSource
    constexpr std::ptrdiff_t m_params = 0xA8; // CUtlVector<CAnimParamHandle>
    constexpr std::ptrdiff_t m_bResetChild = 0xC0; // bool
}

namespace CFootPositionMetricEvaluator { // CMotionMetricEvaluator
    constexpr std::ptrdiff_t m_footIndices = 0x50; // CUtlVector<int32_t>
    constexpr std::ptrdiff_t m_bIgnoreSlope = 0x68; // bool
}

namespace CFootStepTriggerUpdateNode { // CUnaryUpdateNode
    constexpr std::ptrdiff_t m_triggers = 0x68; // CUtlVector<FootStepTrigger>
    constexpr std::ptrdiff_t m_flTolerance = 0x84; // float
}

namespace CFootStride {
    constexpr std::ptrdiff_t m_definition = 0x0; // CFootCycleDefinition
    constexpr std::ptrdiff_t m_trajectories = 0x40; // CFootTrajectories
}

namespace CFootTrajectories {
    constexpr std::ptrdiff_t m_trajectories = 0x0; // CUtlVector<CFootTrajectory>
}

namespace CFootTrajectory {
    constexpr std::ptrdiff_t m_vOffset = 0x0; // Vector
    constexpr std::ptrdiff_t m_flRotationOffset = 0xC; // float
    constexpr std::ptrdiff_t m_flProgression = 0x10; // float
}

namespace CFootstepLandedAnimTag { // CAnimTagBase
    constexpr std::ptrdiff_t m_FootstepType = 0x50; // FootstepLandedFootSoundType_t
    constexpr std::ptrdiff_t m_OverrideSoundName = 0x58; // CUtlString
    constexpr std::ptrdiff_t m_DebugAnimSourceString = 0x60; // CUtlString
    constexpr std::ptrdiff_t m_BoneName = 0x68; // CUtlString
}

namespace CFutureFacingMetricEvaluator { // CMotionMetricEvaluator
    constexpr std::ptrdiff_t m_flDistance = 0x50; // float
    constexpr std::ptrdiff_t m_flTime = 0x54; // float
}

namespace CFutureVelocityMetricEvaluator { // CMotionMetricEvaluator
    constexpr std::ptrdiff_t m_flDistance = 0x50; // float
    constexpr std::ptrdiff_t m_flStoppingDistance = 0x54; // float
    constexpr std::ptrdiff_t m_flTargetSpeed = 0x58; // float
    constexpr std::ptrdiff_t m_eMode = 0x5C; // VelocityMetricMode
}

namespace CHitBox {
    constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
    constexpr std::ptrdiff_t m_sSurfaceProperty = 0x8; // CUtlString
    constexpr std::ptrdiff_t m_sBoneName = 0x10; // CUtlString
    constexpr std::ptrdiff_t m_vMinBounds = 0x18; // Vector
    constexpr std::ptrdiff_t m_vMaxBounds = 0x24; // Vector
    constexpr std::ptrdiff_t m_flShapeRadius = 0x30; // float
    constexpr std::ptrdiff_t m_nBoneNameHash = 0x34; // uint32_t
    constexpr std::ptrdiff_t m_nGroupId = 0x38; // int32_t
    constexpr std::ptrdiff_t m_nShapeType = 0x3C; // uint8_t
    constexpr std::ptrdiff_t m_bTranslationOnly = 0x3D; // bool
    constexpr std::ptrdiff_t m_CRC = 0x40; // uint32_t
    constexpr std::ptrdiff_t m_cRenderColor = 0x44; // Color
    constexpr std::ptrdiff_t m_nHitBoxIndex = 0x48; // uint16_t
}

namespace CHitBoxSet {
    constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
    constexpr std::ptrdiff_t m_nNameHash = 0x8; // uint32_t
    constexpr std::ptrdiff_t m_HitBoxes = 0x10; // CUtlVector<CHitBox>
    constexpr std::ptrdiff_t m_SourceFilename = 0x28; // CUtlString
}

namespace CHitBoxSetList {
    constexpr std::ptrdiff_t m_HitBoxSets = 0x0; // CUtlVector<CHitBoxSet>
}

namespace CHitReactUpdateNode { // CUnaryUpdateNode
    constexpr std::ptrdiff_t m_opFixedSettings = 0x68; // HitReactFixedSettings_t
    constexpr std::ptrdiff_t m_triggerParam = 0xB4; // CAnimParamHandle
    constexpr std::ptrdiff_t m_hitBoneParam = 0xB6; // CAnimParamHandle
    constexpr std::ptrdiff_t m_hitOffsetParam = 0xB8; // CAnimParamHandle
    constexpr std::ptrdiff_t m_hitDirectionParam = 0xBA; // CAnimParamHandle
    constexpr std::ptrdiff_t m_hitStrengthParam = 0xBC; // CAnimParamHandle
    constexpr std::ptrdiff_t m_flMinDelayBetweenHits = 0xC0; // float
    constexpr std::ptrdiff_t m_bResetChild = 0xC4; // bool
}

namespace CInputStreamUpdateNode { // CLeafUpdateNode
}

namespace CIntAnimParameter { // CConcreteAnimParameter
    constexpr std::ptrdiff_t m_defaultValue = 0x78; // int32_t
    constexpr std::ptrdiff_t m_minValue = 0x7C; // int32_t
    constexpr std::ptrdiff_t m_maxValue = 0x80; // int32_t
}

namespace CJiggleBoneUpdateNode { // CUnaryUpdateNode
    constexpr std::ptrdiff_t m_opFixedData = 0x68; // JiggleBoneSettingsList_t
}

namespace CJumpHelperUpdateNode { // CSequenceUpdateNode
    constexpr std::ptrdiff_t m_hTargetParam = 0xA8; // CAnimParamHandle
    constexpr std::ptrdiff_t m_flOriginalJumpMovement = 0xAC; // Vector
    constexpr std::ptrdiff_t m_flOriginalJumpDuration = 0xB8; // float
    constexpr std::ptrdiff_t m_flJumpStartCycle = 0xBC; // float
    constexpr std::ptrdiff_t m_flJumpEndCycle = 0xC0; // float
    constexpr std::ptrdiff_t m_eCorrectionMethod = 0xC4; // JumpCorrectionMethod
    constexpr std::ptrdiff_t m_bTranslationAxis = 0xC8; // bool[3]
    constexpr std::ptrdiff_t m_bScaleSpeed = 0xCB; // bool
}

namespace CLODComponentUpdater { // CAnimComponentUpdater
    constexpr std::ptrdiff_t m_nServerLOD = 0x30; // int32_t
}

namespace CLeafUpdateNode { // CAnimUpdateNodeBase
}

namespace CLeanMatrixUpdateNode { // CLeafUpdateNode
    constexpr std::ptrdiff_t m_frameCorners = 0x5C; // int32_t[3][3]
    constexpr std::ptrdiff_t m_poses = 0x80; // CPoseHandle[9]
    constexpr std::ptrdiff_t m_damping = 0xA8; // CAnimInputDamping
    constexpr std::ptrdiff_t m_blendSource = 0xB8; // AnimVectorSource
    constexpr std::ptrdiff_t m_paramIndex = 0xBC; // CAnimParamHandle
    constexpr std::ptrdiff_t m_verticalAxis = 0xC0; // Vector
    constexpr std::ptrdiff_t m_horizontalAxis = 0xCC; // Vector
    constexpr std::ptrdiff_t m_hSequence = 0xD8; // HSequence
    constexpr std::ptrdiff_t m_flMaxValue = 0xDC; // float
    constexpr std::ptrdiff_t m_nSequenceMaxFrame = 0xE0; // int32_t
}

namespace CLookAtUpdateNode { // CUnaryUpdateNode
    constexpr std::ptrdiff_t m_opFixedSettings = 0x70; // LookAtOpFixedSettings_t
    constexpr std::ptrdiff_t m_target = 0x138; // AnimVectorSource
    constexpr std::ptrdiff_t m_paramIndex = 0x13C; // CAnimParamHandle
    constexpr std::ptrdiff_t m_weightParamIndex = 0x13E; // CAnimParamHandle
    constexpr std::ptrdiff_t m_bResetChild = 0x140; // bool
    constexpr std::ptrdiff_t m_bLockWhenWaning = 0x141; // bool
}

namespace CLookComponentUpdater { // CAnimComponentUpdater
    constexpr std::ptrdiff_t m_hLookHeading = 0x34; // CAnimParamHandle
    constexpr std::ptrdiff_t m_hLookHeadingVelocity = 0x36; // CAnimParamHandle
    constexpr std::ptrdiff_t m_hLookPitch = 0x38; // CAnimParamHandle
    constexpr std::ptrdiff_t m_hLookDistance = 0x3A; // CAnimParamHandle
    constexpr std::ptrdiff_t m_hLookDirection = 0x3C; // CAnimParamHandle
    constexpr std::ptrdiff_t m_hLookTarget = 0x3E; // CAnimParamHandle
    constexpr std::ptrdiff_t m_hLookTargetWorldSpace = 0x40; // CAnimParamHandle
    constexpr std::ptrdiff_t m_bNetworkLookTarget = 0x42; // bool
}

namespace CMaterialAttributeAnimTag { // CAnimTagBase
    constexpr std::ptrdiff_t m_AttributeName = 0x50; // CUtlString
    constexpr std::ptrdiff_t m_AttributeType = 0x58; // MatterialAttributeTagType_t
    constexpr std::ptrdiff_t m_flValue = 0x5C; // float
    constexpr std::ptrdiff_t m_Color = 0x60; // Color
}

namespace CMaterialDrawDescriptor {
    constexpr std::ptrdiff_t m_nPrimitiveType = 0x0; // RenderPrimitiveType_t
    constexpr std::ptrdiff_t m_nBaseVertex = 0x4; // int32_t
    constexpr std::ptrdiff_t m_nVertexCount = 0x8; // int32_t
    constexpr std::ptrdiff_t m_nStartIndex = 0xC; // int32_t
    constexpr std::ptrdiff_t m_nIndexCount = 0x10; // int32_t
    constexpr std::ptrdiff_t m_flUvDensity = 0x14; // float
    constexpr std::ptrdiff_t m_vTintColor = 0x18; // Vector
    constexpr std::ptrdiff_t m_flAlpha = 0x24; // float
    constexpr std::ptrdiff_t m_nFirstMeshlet = 0x2C; // uint32_t
    constexpr std::ptrdiff_t m_nNumMeshlets = 0x30; // uint16_t
    constexpr std::ptrdiff_t m_indexBuffer = 0xB8; // CRenderBufferBinding
    constexpr std::ptrdiff_t m_material = 0xE0; // CStrongHandle<InfoForResourceTypeIMaterial2>
}

namespace CMeshletDescriptor {
    constexpr std::ptrdiff_t m_PackedAABB = 0x0; // PackedAABB_t
    constexpr std::ptrdiff_t m_CullingData = 0x8; // CDrawCullingData
}

namespace CModelConfig {
    constexpr std::ptrdiff_t m_ConfigName = 0x0; // CUtlString
    constexpr std::ptrdiff_t m_Elements = 0x8; // CUtlVector<CModelConfigElement*>
    constexpr std::ptrdiff_t m_bTopLevel = 0x20; // bool
}

namespace CModelConfigElement {
    constexpr std::ptrdiff_t m_ElementName = 0x8; // CUtlString
    constexpr std::ptrdiff_t m_NestedElements = 0x10; // CUtlVector<CModelConfigElement*>
}

namespace CModelConfigElement_AttachedModel { // CModelConfigElement
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

namespace CModelConfigElement_Command { // CModelConfigElement
    constexpr std::ptrdiff_t m_Command = 0x48; // CUtlString
    constexpr std::ptrdiff_t m_Args = 0x50; // KeyValues3
}

namespace CModelConfigElement_RandomColor { // CModelConfigElement
    constexpr std::ptrdiff_t m_Gradient = 0x48; // CColorGradient
}

namespace CModelConfigElement_RandomPick { // CModelConfigElement
    constexpr std::ptrdiff_t m_Choices = 0x48; // CUtlVector<CUtlString>
    constexpr std::ptrdiff_t m_ChoiceWeights = 0x60; // CUtlVector<float>
}

namespace CModelConfigElement_SetBodygroup { // CModelConfigElement
    constexpr std::ptrdiff_t m_GroupName = 0x48; // CUtlString
    constexpr std::ptrdiff_t m_nChoice = 0x50; // int32_t
}

namespace CModelConfigElement_SetBodygroupOnAttachedModels { // CModelConfigElement
    constexpr std::ptrdiff_t m_GroupName = 0x48; // CUtlString
    constexpr std::ptrdiff_t m_nChoice = 0x50; // int32_t
}

namespace CModelConfigElement_SetMaterialGroup { // CModelConfigElement
    constexpr std::ptrdiff_t m_MaterialGroupName = 0x48; // CUtlString
}

namespace CModelConfigElement_SetMaterialGroupOnAttachedModels { // CModelConfigElement
    constexpr std::ptrdiff_t m_MaterialGroupName = 0x48; // CUtlString
}

namespace CModelConfigElement_SetRenderColor { // CModelConfigElement
    constexpr std::ptrdiff_t m_Color = 0x48; // Color
}

namespace CModelConfigElement_UserPick { // CModelConfigElement
    constexpr std::ptrdiff_t m_Choices = 0x48; // CUtlVector<CUtlString>
}

namespace CModelConfigList {
    constexpr std::ptrdiff_t m_bHideMaterialGroupInTools = 0x0; // bool
    constexpr std::ptrdiff_t m_bHideRenderColorInTools = 0x1; // bool
    constexpr std::ptrdiff_t m_Configs = 0x8; // CUtlVector<CModelConfig*>
}

namespace CMoodVData {
    constexpr std::ptrdiff_t m_sModelName = 0x0; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
    constexpr std::ptrdiff_t m_nMoodType = 0xE0; // MoodType_t
    constexpr std::ptrdiff_t m_animationLayers = 0xE8; // CUtlVector<MoodAnimationLayer_t>
}

namespace CMorphBundleData {
    constexpr std::ptrdiff_t m_flULeftSrc = 0x0; // float
    constexpr std::ptrdiff_t m_flVTopSrc = 0x4; // float
    constexpr std::ptrdiff_t m_offsets = 0x8; // CUtlVector<float>
    constexpr std::ptrdiff_t m_ranges = 0x20; // CUtlVector<float>
}

namespace CMorphConstraint { // CBaseConstraint
    constexpr std::ptrdiff_t m_sTargetMorph = 0x70; // CUtlString
    constexpr std::ptrdiff_t m_nSlaveChannel = 0x78; // int32_t
    constexpr std::ptrdiff_t m_flMin = 0x7C; // float
    constexpr std::ptrdiff_t m_flMax = 0x80; // float
}

namespace CMorphData {
    constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
    constexpr std::ptrdiff_t m_morphRectDatas = 0x8; // CUtlVector<CMorphRectData>
}

namespace CMorphRectData {
    constexpr std::ptrdiff_t m_nXLeftDst = 0x0; // int16_t
    constexpr std::ptrdiff_t m_nYTopDst = 0x2; // int16_t
    constexpr std::ptrdiff_t m_flUWidthSrc = 0x4; // float
    constexpr std::ptrdiff_t m_flVHeightSrc = 0x8; // float
    constexpr std::ptrdiff_t m_bundleDatas = 0x10; // CUtlVector<CMorphBundleData>
}

namespace CMorphSetData {
    constexpr std::ptrdiff_t m_nWidth = 0x10; // int32_t
    constexpr std::ptrdiff_t m_nHeight = 0x14; // int32_t
    constexpr std::ptrdiff_t m_bundleTypes = 0x18; // CUtlVector<MorphBundleType_t>
    constexpr std::ptrdiff_t m_morphDatas = 0x30; // CUtlVector<CMorphData>
    constexpr std::ptrdiff_t m_pTextureAtlas = 0x48; // CStrongHandle<InfoForResourceTypeCTextureBase>
    constexpr std::ptrdiff_t m_FlexDesc = 0x50; // CUtlVector<CFlexDesc>
    constexpr std::ptrdiff_t m_FlexControllers = 0x68; // CUtlVector<CFlexController>
    constexpr std::ptrdiff_t m_FlexRules = 0x80; // CUtlVector<CFlexRule>
}

namespace CMotionDataSet {
    constexpr std::ptrdiff_t m_groups = 0x0; // CUtlVector<CMotionGraphGroup>
    constexpr std::ptrdiff_t m_nDimensionCount = 0x18; // int32_t
}

namespace CMotionGraph {
    constexpr std::ptrdiff_t m_paramSpans = 0x10; // CParamSpanUpdater
    constexpr std::ptrdiff_t m_tags = 0x28; // CUtlVector<TagSpan_t>
    constexpr std::ptrdiff_t m_pRootNode = 0x40; // CSmartPtr<CMotionNode>
    constexpr std::ptrdiff_t m_nParameterCount = 0x48; // int32_t
    constexpr std::ptrdiff_t m_nConfigStartIndex = 0x4C; // int32_t
    constexpr std::ptrdiff_t m_nConfigCount = 0x50; // int32_t
    constexpr std::ptrdiff_t m_bLoop = 0x54; // bool
}

namespace CMotionGraphConfig {
    constexpr std::ptrdiff_t m_paramValues = 0x0; // float[4]
    constexpr std::ptrdiff_t m_flDuration = 0x10; // float
    constexpr std::ptrdiff_t m_nMotionIndex = 0x14; // MotionIndex
    constexpr std::ptrdiff_t m_nSampleStart = 0x18; // int32_t
    constexpr std::ptrdiff_t m_nSampleCount = 0x1C; // int32_t
}

namespace CMotionGraphGroup {
    constexpr std::ptrdiff_t m_searchDB = 0x0; // CMotionSearchDB
    constexpr std::ptrdiff_t m_motionGraphs = 0xB8; // CUtlVector<CSmartPtr<CMotionGraph>>
    constexpr std::ptrdiff_t m_motionGraphConfigs = 0xD0; // CUtlVector<CMotionGraphConfig>
    constexpr std::ptrdiff_t m_sampleToConfig = 0xE8; // CUtlVector<int32_t>
    constexpr std::ptrdiff_t m_hIsActiveScript = 0x100; // AnimScriptHandle
}

namespace CMotionGraphUpdateNode { // CLeafUpdateNode
    constexpr std::ptrdiff_t m_pMotionGraph = 0x58; // CSmartPtr<CMotionGraph>
}

namespace CMotionMatchingUpdateNode { // CLeafUpdateNode
    constexpr std::ptrdiff_t m_dataSet = 0x58; // CMotionDataSet
    constexpr std::ptrdiff_t m_metrics = 0x78; // CUtlVector<CSmartPtr<CMotionMetricEvaluator>>
    constexpr std::ptrdiff_t m_weights = 0x90; // CUtlVector<float>
    constexpr std::ptrdiff_t m_bSearchEveryTick = 0xE0; // bool
    constexpr std::ptrdiff_t m_flSearchInterval = 0xE4; // float
    constexpr std::ptrdiff_t m_bSearchWhenClipEnds = 0xE8; // bool
    constexpr std::ptrdiff_t m_bSearchWhenGoalChanges = 0xE9; // bool
    constexpr std::ptrdiff_t m_blendCurve = 0xEC; // CBlendCurve
    constexpr std::ptrdiff_t m_flSampleRate = 0xF4; // float
    constexpr std::ptrdiff_t m_flBlendTime = 0xF8; // float
    constexpr std::ptrdiff_t m_bLockClipWhenWaning = 0xFC; // bool
    constexpr std::ptrdiff_t m_flSelectionThreshold = 0x100; // float
    constexpr std::ptrdiff_t m_flReselectionTimeWindow = 0x104; // float
    constexpr std::ptrdiff_t m_bEnableRotationCorrection = 0x108; // bool
    constexpr std::ptrdiff_t m_bGoalAssist = 0x109; // bool
    constexpr std::ptrdiff_t m_flGoalAssistDistance = 0x10C; // float
    constexpr std::ptrdiff_t m_flGoalAssistTolerance = 0x110; // float
    constexpr std::ptrdiff_t m_distanceScale_Damping = 0x118; // CAnimInputDamping
    constexpr std::ptrdiff_t m_flDistanceScale_OuterRadius = 0x128; // float
    constexpr std::ptrdiff_t m_flDistanceScale_InnerRadius = 0x12C; // float
    constexpr std::ptrdiff_t m_flDistanceScale_MaxScale = 0x130; // float
    constexpr std::ptrdiff_t m_flDistanceScale_MinScale = 0x134; // float
    constexpr std::ptrdiff_t m_bEnableDistanceScaling = 0x138; // bool
}

namespace CMotionMetricEvaluator {
    constexpr std::ptrdiff_t m_means = 0x18; // CUtlVector<float>
    constexpr std::ptrdiff_t m_standardDeviations = 0x30; // CUtlVector<float>
    constexpr std::ptrdiff_t m_flWeight = 0x48; // float
    constexpr std::ptrdiff_t m_nDimensionStartIndex = 0x4C; // int32_t
}

namespace CMotionNode {
    constexpr std::ptrdiff_t m_name = 0x18; // CUtlString
    constexpr std::ptrdiff_t m_id = 0x20; // AnimNodeID
}

namespace CMotionNodeBlend1D { // CMotionNode
    constexpr std::ptrdiff_t m_blendItems = 0x28; // CUtlVector<MotionBlendItem>
    constexpr std::ptrdiff_t m_nParamIndex = 0x40; // int32_t
}

namespace CMotionNodeSequence { // CMotionNode
    constexpr std::ptrdiff_t m_tags = 0x28; // CUtlVector<TagSpan_t>
    constexpr std::ptrdiff_t m_hSequence = 0x40; // HSequence
    constexpr std::ptrdiff_t m_flPlaybackSpeed = 0x44; // float
}

namespace CMotionSearchDB {
    constexpr std::ptrdiff_t m_rootNode = 0x0; // CMotionSearchNode
    constexpr std::ptrdiff_t m_residualQuantizer = 0x80; // CProductQuantizer
    constexpr std::ptrdiff_t m_codeIndices = 0xA0; // CUtlVector<MotionDBIndex>
}

namespace CMotionSearchNode {
    constexpr std::ptrdiff_t m_children = 0x0; // CUtlVector<CMotionSearchNode*>
    constexpr std::ptrdiff_t m_quantizer = 0x18; // CVectorQuantizer
    constexpr std::ptrdiff_t m_sampleCodes = 0x38; // CUtlVector<CUtlVector<SampleCode>>
    constexpr std::ptrdiff_t m_sampleIndices = 0x50; // CUtlVector<CUtlVector<int32_t>>
    constexpr std::ptrdiff_t m_selectableSamples = 0x68; // CUtlVector<int32_t>
}

namespace CMovementComponentUpdater { // CAnimComponentUpdater
    constexpr std::ptrdiff_t m_motors = 0x30; // CUtlVector<CSmartPtr<CAnimMotorUpdaterBase>>
    constexpr std::ptrdiff_t m_facingDamping = 0x48; // CAnimInputDamping
    constexpr std::ptrdiff_t m_eDefaultFacingMode = 0x58; // FacingMode
    constexpr std::ptrdiff_t m_nDefaultMotorIndex = 0x64; // int32_t
    constexpr std::ptrdiff_t m_flDefaultRunSpeed = 0x68; // float
    constexpr std::ptrdiff_t m_bMoveVarsDisabled = 0x6C; // bool
    constexpr std::ptrdiff_t m_bNetworkPath = 0x6D; // bool
    constexpr std::ptrdiff_t m_bNetworkFacing = 0x6E; // bool
    constexpr std::ptrdiff_t m_paramHandles = 0x6F; // CAnimParamHandle[30]
}

namespace CMoverUpdateNode { // CUnaryUpdateNode
    constexpr std::ptrdiff_t m_damping = 0x70; // CAnimInputDamping
    constexpr std::ptrdiff_t m_facingTarget = 0x80; // AnimValueSource
    constexpr std::ptrdiff_t m_hMoveVecParam = 0x84; // CAnimParamHandle
    constexpr std::ptrdiff_t m_hMoveHeadingParam = 0x86; // CAnimParamHandle
    constexpr std::ptrdiff_t m_hTurnToFaceParam = 0x88; // CAnimParamHandle
    constexpr std::ptrdiff_t m_flTurnToFaceOffset = 0x8C; // float
    constexpr std::ptrdiff_t m_flTurnToFaceLimit = 0x90; // float
    constexpr std::ptrdiff_t m_bAdditive = 0x94; // bool
    constexpr std::ptrdiff_t m_bApplyMovement = 0x95; // bool
    constexpr std::ptrdiff_t m_bOrientMovement = 0x96; // bool
    constexpr std::ptrdiff_t m_bApplyRotation = 0x97; // bool
    constexpr std::ptrdiff_t m_bLimitOnly = 0x98; // bool
}

namespace CNmBoneMask {
    constexpr std::ptrdiff_t m_ID = 0x0; // CGlobalSymbol
    constexpr std::ptrdiff_t m_weightInfo = 0x8; // CNmBoneMask::WeightInfo_t
    constexpr std::ptrdiff_t m_weights = 0x18; // CUtlVector<float>
}

namespace CNmClip {
    constexpr std::ptrdiff_t m_skeleton = 0x0; // CStrongHandle<InfoForResourceTypeCNmSkeleton>
    constexpr std::ptrdiff_t m_nNumFrames = 0x8; // uint32_t
    constexpr std::ptrdiff_t m_flDuration = 0xC; // float
    constexpr std::ptrdiff_t m_compressedPoseData = 0x10; // CUtlBinaryBlock
    constexpr std::ptrdiff_t m_trackCompressionSettings = 0x28; // CUtlVector<NmCompressionSettings_t>
    constexpr std::ptrdiff_t m_compressedPoseOffsets = 0x40; // CUtlVector<uint32_t>
    constexpr std::ptrdiff_t m_syncTrack = 0xA0; // CNmSyncTrack
    constexpr std::ptrdiff_t m_rootMotion = 0x150; // CNmRootMotionData
    constexpr std::ptrdiff_t m_bIsAdditive = 0x1A0; // bool
}

namespace CNmEvent {
    constexpr std::ptrdiff_t m_flStartTime = 0x8; // float
    constexpr std::ptrdiff_t m_flDuration = 0xC; // float
}

namespace CNmFootEvent { // CNmEvent
    constexpr std::ptrdiff_t m_phase = 0x10; // NmFootPhase_t
}

namespace CNmFrameSnapEvent { // CNmEvent
    constexpr std::ptrdiff_t m_frameSnapMode = 0x10; // NmFrameSnapEventMode_t
}

namespace CNmGraph {
    constexpr std::ptrdiff_t m_persistentNodeIndices = 0x0; // CUtlVector<int16_t>
    constexpr std::ptrdiff_t m_instanceNodeStartOffsets = 0x18; // CUtlVector<uint32_t>
    constexpr std::ptrdiff_t m_instanceRequiredMemory = 0x30; // uint32_t
    constexpr std::ptrdiff_t m_instanceRequiredAlignment = 0x34; // uint32_t
    constexpr std::ptrdiff_t m_rootNodeIdx = 0x38; // int16_t
    constexpr std::ptrdiff_t m_controlParameterIDs = 0x40; // CUtlVector<CGlobalSymbol>
    constexpr std::ptrdiff_t m_virtualParameterIDs = 0x58; // CUtlVector<CGlobalSymbol>
    constexpr std::ptrdiff_t m_virtualParameterNodeIndices = 0x70; // CUtlVector<int16_t>
    constexpr std::ptrdiff_t m_childGraphSlots = 0x88; // CUtlVector<CNmGraph::ChildGraphSlot_t>
    constexpr std::ptrdiff_t m_externalGraphSlots = 0xA0; // CUtlVector<CNmGraph::ExternalGraphSlot_t>
}

namespace CNmGraphDataSet {
    constexpr std::ptrdiff_t m_variationID = 0x0; // CGlobalSymbol
    constexpr std::ptrdiff_t m_skeleton = 0x8; // CStrongHandle<InfoForResourceTypeCNmSkeleton>
    constexpr std::ptrdiff_t m_resources = 0x10; // CUtlVector<CStrongHandleVoid>
}

namespace CNmGraphVariation {
    constexpr std::ptrdiff_t m_graph = 0x0; // CStrongHandle<InfoForResourceTypeCNmGraph>
    constexpr std::ptrdiff_t m_dataSet = 0x8; // CStrongHandle<InfoForResourceTypeCNmGraphDataSet>
}

namespace CNmGraph_ChildGraphSlot_t {
    constexpr std::ptrdiff_t m_nNodeIdx = 0x0; // int16_t
    constexpr std::ptrdiff_t m_dataSlotIdx = 0x2; // int16_t
}

namespace CNmGraph_ExternalGraphSlot_t {
    constexpr std::ptrdiff_t m_nNodeIdx = 0x0; // int16_t
    constexpr std::ptrdiff_t m_slotID = 0x8; // CGlobalSymbol
}

namespace CNmIDEvent { // CNmEvent
    constexpr std::ptrdiff_t m_ID = 0x10; // CGlobalSymbol
}

namespace CNmLegacyEvent { // CNmEvent
}

namespace CNmRootMotionData {
    constexpr std::ptrdiff_t m_transforms = 0x0; // CUtlVector<CTransform>
    constexpr std::ptrdiff_t m_nNumFrames = 0x18; // int32_t
    constexpr std::ptrdiff_t m_flAverageLinearVelocity = 0x1C; // float
    constexpr std::ptrdiff_t m_flAverageAngularVelocityRadians = 0x20; // float
    constexpr std::ptrdiff_t m_totalDelta = 0x30; // CTransform
}

namespace CNmSkeleton {
    constexpr std::ptrdiff_t m_ID = 0x0; // CGlobalSymbol
    constexpr std::ptrdiff_t m_boneIDs = 0x8; // CUtlLeanVector<CGlobalSymbol>
    constexpr std::ptrdiff_t m_parentIndices = 0x18; // CUtlVector<int32_t>
    constexpr std::ptrdiff_t m_parentSpaceReferencePose = 0x30; // CUtlVector<CTransform>
    constexpr std::ptrdiff_t m_modelSpaceReferencePose = 0x48; // CUtlVector<CTransform>
    constexpr std::ptrdiff_t m_numBonesToSampleAtLowLOD = 0x60; // int32_t
    constexpr std::ptrdiff_t m_boneMasks = 0x68; // CUtlLeanVector<CNmBoneMask>
}

namespace CNmSyncTrack {
    constexpr std::ptrdiff_t m_syncEvents = 0x0; // CUtlLeanVectorFixedGrowable<CNmSyncTrack::Event_t>
    constexpr std::ptrdiff_t m_nStartEventOffset = 0xA8; // int32_t
}

namespace CNmSyncTrack_EventMarker_t {
    constexpr std::ptrdiff_t m_startTime = 0x0; // NmPercent_t
    constexpr std::ptrdiff_t m_ID = 0x8; // CGlobalSymbol
}

namespace CNmSyncTrack_Event_t {
    constexpr std::ptrdiff_t m_ID = 0x0; // CGlobalSymbol
    constexpr std::ptrdiff_t m_startTime = 0x8; // NmPercent_t
    constexpr std::ptrdiff_t m_duration = 0xC; // NmPercent_t
}

namespace CNmTransitionEvent { // CNmEvent
    constexpr std::ptrdiff_t m_rule = 0x10; // NmTransitionRule_t
    constexpr std::ptrdiff_t m_ID = 0x18; // CGlobalSymbol
}

namespace COrientConstraint { // CBaseConstraint
}

namespace CParamSpanUpdater {
    constexpr std::ptrdiff_t m_spans = 0x0; // CUtlVector<ParamSpan_t>
}

namespace CParentConstraint { // CBaseConstraint
}

namespace CParticleAnimTag { // CAnimTagBase
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

namespace CPathAnimMotorUpdater { // CPathAnimMotorUpdaterBase
}

namespace CPathAnimMotorUpdaterBase { // CAnimMotorUpdaterBase
    constexpr std::ptrdiff_t m_bLockToPath = 0x20; // bool
}

namespace CPathHelperUpdateNode { // CUnaryUpdateNode
    constexpr std::ptrdiff_t m_flStoppingRadius = 0x68; // float
    constexpr std::ptrdiff_t m_flStoppingSpeedScale = 0x6C; // float
}

namespace CPathMetricEvaluator { // CMotionMetricEvaluator
    constexpr std::ptrdiff_t m_pathTimeSamples = 0x50; // CUtlVector<float>
    constexpr std::ptrdiff_t m_flDistance = 0x68; // float
    constexpr std::ptrdiff_t m_bExtrapolateMovement = 0x6C; // bool
    constexpr std::ptrdiff_t m_flMinExtrapolationSpeed = 0x70; // float
}

namespace CPhysSurfaceProperties {
    constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
    constexpr std::ptrdiff_t m_nameHash = 0x8; // uint32_t
    constexpr std::ptrdiff_t m_baseNameHash = 0xC; // uint32_t
    constexpr std::ptrdiff_t m_bHidden = 0x18; // bool
    constexpr std::ptrdiff_t m_description = 0x20; // CUtlString
    constexpr std::ptrdiff_t m_physics = 0x28; // CPhysSurfacePropertiesPhysics
    constexpr std::ptrdiff_t m_audioSounds = 0x48; // CPhysSurfacePropertiesSoundNames
    constexpr std::ptrdiff_t m_audioParams = 0x88; // CPhysSurfacePropertiesAudio
}

namespace CPhysSurfacePropertiesAudio {
    constexpr std::ptrdiff_t m_reflectivity = 0x0; // float
    constexpr std::ptrdiff_t m_hardnessFactor = 0x4; // float
    constexpr std::ptrdiff_t m_roughnessFactor = 0x8; // float
    constexpr std::ptrdiff_t m_roughThreshold = 0xC; // float
    constexpr std::ptrdiff_t m_hardThreshold = 0x10; // float
    constexpr std::ptrdiff_t m_hardVelocityThreshold = 0x14; // float
    constexpr std::ptrdiff_t m_flStaticImpactVolume = 0x18; // float
    constexpr std::ptrdiff_t m_flOcclusionFactor = 0x1C; // float
}

namespace CPhysSurfacePropertiesPhysics {
    constexpr std::ptrdiff_t m_friction = 0x0; // float
    constexpr std::ptrdiff_t m_elasticity = 0x4; // float
    constexpr std::ptrdiff_t m_density = 0x8; // float
    constexpr std::ptrdiff_t m_thickness = 0xC; // float
    constexpr std::ptrdiff_t m_softContactFrequency = 0x10; // float
    constexpr std::ptrdiff_t m_softContactDampingRatio = 0x14; // float
    constexpr std::ptrdiff_t m_wheelDrag = 0x18; // float
}

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

namespace CPlayerInputAnimMotorUpdater { // CAnimMotorUpdaterBase
    constexpr std::ptrdiff_t m_sampleTimes = 0x20; // CUtlVector<float>
    constexpr std::ptrdiff_t m_flSpringConstant = 0x3C; // float
    constexpr std::ptrdiff_t m_flAnticipationDistance = 0x40; // float
    constexpr std::ptrdiff_t m_hAnticipationPosParam = 0x44; // CAnimParamHandle
    constexpr std::ptrdiff_t m_hAnticipationHeadingParam = 0x46; // CAnimParamHandle
    constexpr std::ptrdiff_t m_bUseAcceleration = 0x48; // bool
}

namespace CPointConstraint { // CBaseConstraint
}

namespace CPoseHandle {
    constexpr std::ptrdiff_t m_nIndex = 0x0; // uint16_t
    constexpr std::ptrdiff_t m_eType = 0x2; // PoseType_t
}

namespace CProductQuantizer {
    constexpr std::ptrdiff_t m_subQuantizers = 0x0; // CUtlVector<CVectorQuantizer>
    constexpr std::ptrdiff_t m_nDimensions = 0x18; // int32_t
}

namespace CQuaternionAnimParameter { // CConcreteAnimParameter
    constexpr std::ptrdiff_t m_defaultValue = 0x80; // Quaternion
    constexpr std::ptrdiff_t m_bInterpolate = 0x90; // bool
}

namespace CRagdollAnimTag { // CAnimTagBase
    constexpr std::ptrdiff_t m_nPoseControl = 0x50; // AnimPoseControl
    constexpr std::ptrdiff_t m_flFrequency = 0x54; // float
    constexpr std::ptrdiff_t m_flDampingRatio = 0x58; // float
    constexpr std::ptrdiff_t m_flDecayDuration = 0x5C; // float
    constexpr std::ptrdiff_t m_flDecayBias = 0x60; // float
    constexpr std::ptrdiff_t m_bDestroy = 0x64; // bool
}

namespace CRagdollComponentUpdater { // CAnimComponentUpdater
    constexpr std::ptrdiff_t m_ragdollNodePaths = 0x30; // CUtlVector<CAnimNodePath>
    constexpr std::ptrdiff_t m_boneIndices = 0x48; // CUtlVector<int32_t>
    constexpr std::ptrdiff_t m_boneNames = 0x60; // CUtlVector<CUtlString>
    constexpr std::ptrdiff_t m_weightLists = 0x78; // CUtlVector<WeightList>
    constexpr std::ptrdiff_t m_flSpringFrequencyMin = 0x90; // float
    constexpr std::ptrdiff_t m_flSpringFrequencyMax = 0x94; // float
    constexpr std::ptrdiff_t m_flMaxStretch = 0x98; // float
    constexpr std::ptrdiff_t m_bSolidCollisionAtZeroWeight = 0x9C; // bool
}

namespace CRagdollUpdateNode { // CUnaryUpdateNode
    constexpr std::ptrdiff_t m_nWeightListIndex = 0x68; // int32_t
    constexpr std::ptrdiff_t m_poseControlMethod = 0x6C; // RagdollPoseControl
}

namespace CRenderBufferBinding {
    constexpr std::ptrdiff_t m_hBuffer = 0x0; // uint64_t
    constexpr std::ptrdiff_t m_nBindOffsetBytes = 0x10; // uint32_t
}

namespace CRenderGroom {
    constexpr std::ptrdiff_t m_nSegmentsPerHairStrand = 0x0; // int32_t
    constexpr std::ptrdiff_t m_nGuideHairCount = 0x4; // int32_t
    constexpr std::ptrdiff_t m_nHairCount = 0x8; // int32_t
    constexpr std::ptrdiff_t m_nGroomGroupID = 0xC; // int32_t
    constexpr std::ptrdiff_t m_nAttachBoneIdx = 0x10; // int32_t
    constexpr std::ptrdiff_t m_hairInfoBufferData = 0x18; // CUtlBinaryBlock
    constexpr std::ptrdiff_t m_hairs = 0x30; // CUtlVector<RenderHairStrandInfo_t>
}

namespace CRenderMesh {
    constexpr std::ptrdiff_t m_sceneObjects = 0x10; // CUtlVectorFixedGrowable<CSceneObjectData>
    constexpr std::ptrdiff_t m_constraints = 0xA0; // CUtlVector<CBaseConstraint*>
    constexpr std::ptrdiff_t m_skeleton = 0xB8; // CRenderSkeleton
    constexpr std::ptrdiff_t m_meshDeformParams = 0x1E0; // DynamicMeshDeformParams_t
    constexpr std::ptrdiff_t m_pGroomData = 0x1F0; // CRenderGroom*
}

namespace CRenderSkeleton {
    constexpr std::ptrdiff_t m_bones = 0x0; // CUtlVector<RenderSkeletonBone_t>
    constexpr std::ptrdiff_t m_boneParents = 0x30; // CUtlVector<int32_t>
    constexpr std::ptrdiff_t m_nBoneWeightCount = 0x48; // int32_t
}

namespace CRootUpdateNode { // CUnaryUpdateNode
}

namespace CSceneObjectData {
    constexpr std::ptrdiff_t m_vMinBounds = 0x0; // Vector
    constexpr std::ptrdiff_t m_vMaxBounds = 0xC; // Vector
    constexpr std::ptrdiff_t m_drawCalls = 0x18; // CUtlVector<CMaterialDrawDescriptor>
    constexpr std::ptrdiff_t m_drawBounds = 0x30; // CUtlVector<AABB_t>
    constexpr std::ptrdiff_t m_meshlets = 0x48; // CUtlVector<CMeshletDescriptor>
    constexpr std::ptrdiff_t m_vTintColor = 0x60; // Vector4D
}

namespace CSelectorUpdateNode { // CAnimUpdateNodeBase
    constexpr std::ptrdiff_t m_children = 0x58; // CUtlVector<CAnimUpdateNodeRef>
    constexpr std::ptrdiff_t m_tags = 0x70; // CUtlVector<int8_t>
    constexpr std::ptrdiff_t m_blendCurve = 0x8C; // CBlendCurve
    constexpr std::ptrdiff_t m_flBlendTime = 0x94; // CAnimValue<float>
    constexpr std::ptrdiff_t m_hParameter = 0x9C; // CAnimParamHandle
    constexpr std::ptrdiff_t m_eTagBehavior = 0xA0; // SelectorTagBehavior_t
    constexpr std::ptrdiff_t m_bResetOnChange = 0xA4; // bool
    constexpr std::ptrdiff_t m_bSyncCyclesOnChange = 0xA5; // bool
}

namespace CSeqAutoLayer {
    constexpr std::ptrdiff_t m_nLocalReference = 0x0; // int16_t
    constexpr std::ptrdiff_t m_nLocalPose = 0x2; // int16_t
    constexpr std::ptrdiff_t m_flags = 0x4; // CSeqAutoLayerFlag
    constexpr std::ptrdiff_t m_start = 0xC; // float
    constexpr std::ptrdiff_t m_peak = 0x10; // float
    constexpr std::ptrdiff_t m_tail = 0x14; // float
    constexpr std::ptrdiff_t m_end = 0x18; // float
}

namespace CSeqAutoLayerFlag {
    constexpr std::ptrdiff_t m_bPost = 0x0; // bool
    constexpr std::ptrdiff_t m_bSpline = 0x1; // bool
    constexpr std::ptrdiff_t m_bXFade = 0x2; // bool
    constexpr std::ptrdiff_t m_bNoBlend = 0x3; // bool
    constexpr std::ptrdiff_t m_bLocal = 0x4; // bool
    constexpr std::ptrdiff_t m_bPose = 0x5; // bool
    constexpr std::ptrdiff_t m_bFetchFrame = 0x6; // bool
    constexpr std::ptrdiff_t m_bSubtract = 0x7; // bool
}

namespace CSeqBoneMaskList {
    constexpr std::ptrdiff_t m_sName = 0x0; // CBufferString
    constexpr std::ptrdiff_t m_nLocalBoneArray = 0x10; // CUtlVector<int16_t>
    constexpr std::ptrdiff_t m_flBoneWeightArray = 0x28; // CUtlVector<float>
    constexpr std::ptrdiff_t m_flDefaultMorphCtrlWeight = 0x40; // float
    constexpr std::ptrdiff_t m_morphCtrlWeightArray = 0x48; // CUtlVector<CUtlPair<CBufferString,float>>
}

namespace CSeqCmdLayer {
    constexpr std::ptrdiff_t m_cmd = 0x0; // int16_t
    constexpr std::ptrdiff_t m_nLocalReference = 0x2; // int16_t
    constexpr std::ptrdiff_t m_nLocalBonemask = 0x4; // int16_t
    constexpr std::ptrdiff_t m_nDstResult = 0x6; // int16_t
    constexpr std::ptrdiff_t m_nSrcResult = 0x8; // int16_t
    constexpr std::ptrdiff_t m_bSpline = 0xA; // bool
    constexpr std::ptrdiff_t m_flVar1 = 0xC; // float
    constexpr std::ptrdiff_t m_flVar2 = 0x10; // float
    constexpr std::ptrdiff_t m_nLineNumber = 0x14; // int16_t
}

namespace CSeqCmdSeqDesc {
    constexpr std::ptrdiff_t m_sName = 0x0; // CBufferString
    constexpr std::ptrdiff_t m_flags = 0x10; // CSeqSeqDescFlag
    constexpr std::ptrdiff_t m_transition = 0x1C; // CSeqTransition
    constexpr std::ptrdiff_t m_nFrameRangeSequence = 0x24; // int16_t
    constexpr std::ptrdiff_t m_nFrameCount = 0x26; // int16_t
    constexpr std::ptrdiff_t m_flFPS = 0x28; // float
    constexpr std::ptrdiff_t m_nSubCycles = 0x2C; // int16_t
    constexpr std::ptrdiff_t m_numLocalResults = 0x2E; // int16_t
    constexpr std::ptrdiff_t m_cmdLayerArray = 0x30; // CUtlVector<CSeqCmdLayer>
    constexpr std::ptrdiff_t m_eventArray = 0x48; // CUtlVector<CAnimEventDefinition>
    constexpr std::ptrdiff_t m_activityArray = 0x60; // CUtlVector<CAnimActivity>
    constexpr std::ptrdiff_t m_poseSettingArray = 0x78; // CUtlVector<CSeqPoseSetting>
}

namespace CSeqIKLock {
    constexpr std::ptrdiff_t m_flPosWeight = 0x0; // float
    constexpr std::ptrdiff_t m_flAngleWeight = 0x4; // float
    constexpr std::ptrdiff_t m_nLocalBone = 0x8; // int16_t
    constexpr std::ptrdiff_t m_bBonesOrientedAlongPositiveX = 0xA; // bool
}

namespace CSeqMultiFetch {
    constexpr std::ptrdiff_t m_flags = 0x0; // CSeqMultiFetchFlag
    constexpr std::ptrdiff_t m_localReferenceArray = 0x8; // CUtlVector<int16_t>
    constexpr std::ptrdiff_t m_nGroupSize = 0x20; // int32_t[2]
    constexpr std::ptrdiff_t m_nLocalPose = 0x28; // int32_t[2]
    constexpr std::ptrdiff_t m_poseKeyArray0 = 0x30; // CUtlVector<float>
    constexpr std::ptrdiff_t m_poseKeyArray1 = 0x48; // CUtlVector<float>
    constexpr std::ptrdiff_t m_nLocalCyclePoseParameter = 0x60; // int32_t
    constexpr std::ptrdiff_t m_bCalculatePoseParameters = 0x64; // bool
    constexpr std::ptrdiff_t m_bFixedBlendWeight = 0x65; // bool
    constexpr std::ptrdiff_t m_flFixedBlendWeightVals = 0x68; // float[2]
}

namespace CSeqMultiFetchFlag {
    constexpr std::ptrdiff_t m_bRealtime = 0x0; // bool
    constexpr std::ptrdiff_t m_bCylepose = 0x1; // bool
    constexpr std::ptrdiff_t m_b0D = 0x2; // bool
    constexpr std::ptrdiff_t m_b1D = 0x3; // bool
    constexpr std::ptrdiff_t m_b2D = 0x4; // bool
    constexpr std::ptrdiff_t m_b2D_TRI = 0x5; // bool
}

namespace CSeqPoseParamDesc {
    constexpr std::ptrdiff_t m_sName = 0x0; // CBufferString
    constexpr std::ptrdiff_t m_flStart = 0x10; // float
    constexpr std::ptrdiff_t m_flEnd = 0x14; // float
    constexpr std::ptrdiff_t m_flLoop = 0x18; // float
    constexpr std::ptrdiff_t m_bLooping = 0x1C; // bool
}

namespace CSeqPoseSetting {
    constexpr std::ptrdiff_t m_sPoseParameter = 0x0; // CBufferString
    constexpr std::ptrdiff_t m_sAttachment = 0x10; // CBufferString
    constexpr std::ptrdiff_t m_sReferenceSequence = 0x20; // CBufferString
    constexpr std::ptrdiff_t m_flValue = 0x30; // float
    constexpr std::ptrdiff_t m_bX = 0x34; // bool
    constexpr std::ptrdiff_t m_bY = 0x35; // bool
    constexpr std::ptrdiff_t m_bZ = 0x36; // bool
    constexpr std::ptrdiff_t m_eType = 0x38; // int32_t
}

namespace CSeqS1SeqDesc {
    constexpr std::ptrdiff_t m_sName = 0x0; // CBufferString
    constexpr std::ptrdiff_t m_flags = 0x10; // CSeqSeqDescFlag
    constexpr std::ptrdiff_t m_fetch = 0x20; // CSeqMultiFetch
    constexpr std::ptrdiff_t m_nLocalWeightlist = 0x90; // int32_t
    constexpr std::ptrdiff_t m_autoLayerArray = 0x98; // CUtlVector<CSeqAutoLayer>
    constexpr std::ptrdiff_t m_IKLockArray = 0xB0; // CUtlVector<CSeqIKLock>
    constexpr std::ptrdiff_t m_transition = 0xC8; // CSeqTransition
    constexpr std::ptrdiff_t m_SequenceKeys = 0xD0; // KeyValues3
    constexpr std::ptrdiff_t m_LegacyKeyValueText = 0xE0; // CBufferString
    constexpr std::ptrdiff_t m_activityArray = 0xF0; // CUtlVector<CAnimActivity>
    constexpr std::ptrdiff_t m_footMotion = 0x108; // CUtlVector<CFootMotion>
}

namespace CSeqScaleSet {
    constexpr std::ptrdiff_t m_sName = 0x0; // CBufferString
    constexpr std::ptrdiff_t m_bRootOffset = 0x10; // bool
    constexpr std::ptrdiff_t m_vRootOffset = 0x14; // Vector
    constexpr std::ptrdiff_t m_nLocalBoneArray = 0x20; // CUtlVector<int16_t>
    constexpr std::ptrdiff_t m_flBoneScaleArray = 0x38; // CUtlVector<float>
}

namespace CSeqSeqDescFlag {
    constexpr std::ptrdiff_t m_bLooping = 0x0; // bool
    constexpr std::ptrdiff_t m_bSnap = 0x1; // bool
    constexpr std::ptrdiff_t m_bAutoplay = 0x2; // bool
    constexpr std::ptrdiff_t m_bPost = 0x3; // bool
    constexpr std::ptrdiff_t m_bHidden = 0x4; // bool
    constexpr std::ptrdiff_t m_bMulti = 0x5; // bool
    constexpr std::ptrdiff_t m_bLegacyDelta = 0x6; // bool
    constexpr std::ptrdiff_t m_bLegacyWorldspace = 0x7; // bool
    constexpr std::ptrdiff_t m_bLegacyCyclepose = 0x8; // bool
    constexpr std::ptrdiff_t m_bLegacyRealtime = 0x9; // bool
    constexpr std::ptrdiff_t m_bModelDoc = 0xA; // bool
}

namespace CSeqSynthAnimDesc {
    constexpr std::ptrdiff_t m_sName = 0x0; // CBufferString
    constexpr std::ptrdiff_t m_flags = 0x10; // CSeqSeqDescFlag
    constexpr std::ptrdiff_t m_transition = 0x1C; // CSeqTransition
    constexpr std::ptrdiff_t m_nLocalBaseReference = 0x24; // int16_t
    constexpr std::ptrdiff_t m_nLocalBoneMask = 0x26; // int16_t
    constexpr std::ptrdiff_t m_activityArray = 0x28; // CUtlVector<CAnimActivity>
}

namespace CSeqTransition {
    constexpr std::ptrdiff_t m_flFadeInTime = 0x0; // float
    constexpr std::ptrdiff_t m_flFadeOutTime = 0x4; // float
}

namespace CSequenceFinishedAnimTag { // CAnimTagBase
    constexpr std::ptrdiff_t m_sequenceName = 0x50; // CUtlString
}

namespace CSequenceGroupData {
    constexpr std::ptrdiff_t m_sName = 0x10; // CBufferString
    constexpr std::ptrdiff_t m_nFlags = 0x20; // uint32_t
    constexpr std::ptrdiff_t m_localSequenceNameArray = 0x28; // CUtlVector<CBufferString>
    constexpr std::ptrdiff_t m_localS1SeqDescArray = 0x40; // CUtlVector<CSeqS1SeqDesc>
    constexpr std::ptrdiff_t m_localMultiSeqDescArray = 0x58; // CUtlVector<CSeqS1SeqDesc>
    constexpr std::ptrdiff_t m_localSynthAnimDescArray = 0x70; // CUtlVector<CSeqSynthAnimDesc>
    constexpr std::ptrdiff_t m_localCmdSeqDescArray = 0x88; // CUtlVector<CSeqCmdSeqDesc>
    constexpr std::ptrdiff_t m_localBoneMaskArray = 0xA0; // CUtlVector<CSeqBoneMaskList>
    constexpr std::ptrdiff_t m_localScaleSetArray = 0xB8; // CUtlVector<CSeqScaleSet>
    constexpr std::ptrdiff_t m_localBoneNameArray = 0xD0; // CUtlVector<CBufferString>
    constexpr std::ptrdiff_t m_localNodeName = 0xE8; // CBufferString
    constexpr std::ptrdiff_t m_localPoseParamArray = 0xF8; // CUtlVector<CSeqPoseParamDesc>
    constexpr std::ptrdiff_t m_keyValues = 0x110; // KeyValues3
    constexpr std::ptrdiff_t m_localIKAutoplayLockArray = 0x120; // CUtlVector<CSeqIKLock>
}

namespace CSequenceUpdateNode { // CLeafUpdateNode
    constexpr std::ptrdiff_t m_paramSpans = 0x60; // CParamSpanUpdater
    constexpr std::ptrdiff_t m_tags = 0x78; // CUtlVector<TagSpan_t>
    constexpr std::ptrdiff_t m_hSequence = 0x94; // HSequence
    constexpr std::ptrdiff_t m_playbackSpeed = 0x98; // float
    constexpr std::ptrdiff_t m_duration = 0x9C; // float
    constexpr std::ptrdiff_t m_bLoop = 0xA0; // bool
}

namespace CSetFacingUpdateNode { // CUnaryUpdateNode
    constexpr std::ptrdiff_t m_facingMode = 0x68; // FacingMode
    constexpr std::ptrdiff_t m_bResetChild = 0x6C; // bool
}

namespace CSetParameterActionUpdater { // CAnimActionUpdater
    constexpr std::ptrdiff_t m_hParam = 0x18; // CAnimParamHandle
    constexpr std::ptrdiff_t m_value = 0x1A; // CAnimVariant
}

namespace CSingleFrameUpdateNode { // CLeafUpdateNode
    constexpr std::ptrdiff_t m_actions = 0x58; // CUtlVector<CSmartPtr<CAnimActionUpdater>>
    constexpr std::ptrdiff_t m_hPoseCacheHandle = 0x70; // CPoseHandle
    constexpr std::ptrdiff_t m_hSequence = 0x74; // HSequence
    constexpr std::ptrdiff_t m_flCycle = 0x78; // float
}

namespace CSlopeComponentUpdater { // CAnimComponentUpdater
    constexpr std::ptrdiff_t m_flTraceDistance = 0x34; // float
    constexpr std::ptrdiff_t m_hSlopeAngle = 0x38; // CAnimParamHandle
    constexpr std::ptrdiff_t m_hSlopeAngleFront = 0x3A; // CAnimParamHandle
    constexpr std::ptrdiff_t m_hSlopeAngleSide = 0x3C; // CAnimParamHandle
    constexpr std::ptrdiff_t m_hSlopeHeading = 0x3E; // CAnimParamHandle
    constexpr std::ptrdiff_t m_hSlopeNormal = 0x40; // CAnimParamHandle
    constexpr std::ptrdiff_t m_hSlopeNormal_WorldSpace = 0x42; // CAnimParamHandle
}

namespace CSlowDownOnSlopesUpdateNode { // CUnaryUpdateNode
    constexpr std::ptrdiff_t m_flSlowDownStrength = 0x68; // float
}

namespace CSolveIKChainUpdateNode { // CUnaryUpdateNode
    constexpr std::ptrdiff_t m_targetHandles = 0x68; // CUtlVector<CSolveIKTargetHandle_t>
    constexpr std::ptrdiff_t m_opFixedData = 0x80; // SolveIKChainPoseOpFixedSettings_t
}

namespace CSolveIKTargetHandle_t {
    constexpr std::ptrdiff_t m_positionHandle = 0x0; // CAnimParamHandle
    constexpr std::ptrdiff_t m_orientationHandle = 0x2; // CAnimParamHandle
}

namespace CSpeedScaleUpdateNode { // CUnaryUpdateNode
    constexpr std::ptrdiff_t m_paramIndex = 0x68; // CAnimParamHandle
}

namespace CStanceOverrideUpdateNode { // CUnaryUpdateNode
    constexpr std::ptrdiff_t m_footStanceInfo = 0x68; // CUtlVector<StanceInfo_t>
    constexpr std::ptrdiff_t m_pStanceSourceNode = 0x80; // CAnimUpdateNodeRef
    constexpr std::ptrdiff_t m_hParameter = 0x90; // CAnimParamHandle
    constexpr std::ptrdiff_t m_eMode = 0x94; // StanceOverrideMode
}

namespace CStanceScaleUpdateNode { // CUnaryUpdateNode
    constexpr std::ptrdiff_t m_hParam = 0x68; // CAnimParamHandle
}

namespace CStateActionUpdater {
    constexpr std::ptrdiff_t m_pAction = 0x0; // CSmartPtr<CAnimActionUpdater>
    constexpr std::ptrdiff_t m_eBehavior = 0x8; // StateActionBehavior
}

namespace CStateMachineComponentUpdater { // CAnimComponentUpdater
    constexpr std::ptrdiff_t m_stateMachine = 0x30; // CAnimStateMachineUpdater
}

namespace CStateMachineUpdateNode { // CAnimUpdateNodeBase
    constexpr std::ptrdiff_t m_stateMachine = 0x68; // CAnimStateMachineUpdater
    constexpr std::ptrdiff_t m_stateData = 0xC0; // CUtlVector<CStateNodeStateData>
    constexpr std::ptrdiff_t m_transitionData = 0xD8; // CUtlVector<CStateNodeTransitionData>
    constexpr std::ptrdiff_t m_bBlockWaningTags = 0xF4; // bool
    constexpr std::ptrdiff_t m_bLockStateWhenWaning = 0xF5; // bool
}

namespace CStateNodeStateData {
    constexpr std::ptrdiff_t m_pChild = 0x0; // CAnimUpdateNodeRef
    constexpr std::ptrdiff_t m_bExclusiveRootMotion = 0x0; // bitfield:1
}

namespace CStateNodeTransitionData {
    constexpr std::ptrdiff_t m_curve = 0x0; // CBlendCurve
    constexpr std::ptrdiff_t m_blendDuration = 0x8; // CAnimValue<float>
    constexpr std::ptrdiff_t m_resetCycleValue = 0x10; // CAnimValue<float>
    constexpr std::ptrdiff_t m_bReset = 0x0; // bitfield:1
    constexpr std::ptrdiff_t m_resetCycleOption = 0x0; // bitfield:3
}

namespace CStateUpdateData {
    constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
    constexpr std::ptrdiff_t m_hScript = 0x8; // AnimScriptHandle
    constexpr std::ptrdiff_t m_transitionIndices = 0x10; // CUtlVector<int32_t>
    constexpr std::ptrdiff_t m_actions = 0x28; // CUtlVector<CStateActionUpdater>
    constexpr std::ptrdiff_t m_stateID = 0x40; // AnimStateID
    constexpr std::ptrdiff_t m_bIsStartState = 0x0; // bitfield:1
    constexpr std::ptrdiff_t m_bIsEndState = 0x0; // bitfield:1
    constexpr std::ptrdiff_t m_bIsPassthrough = 0x0; // bitfield:1
}

namespace CStaticPoseCache {
    constexpr std::ptrdiff_t m_poses = 0x10; // CUtlVector<CCachedPose>
    constexpr std::ptrdiff_t m_nBoneCount = 0x28; // int32_t
    constexpr std::ptrdiff_t m_nMorphCount = 0x2C; // int32_t
}

namespace CStaticPoseCacheBuilder { // CStaticPoseCache
}

namespace CStepsRemainingMetricEvaluator { // CMotionMetricEvaluator
    constexpr std::ptrdiff_t m_footIndices = 0x50; // CUtlVector<int32_t>
    constexpr std::ptrdiff_t m_flMinStepsRemaining = 0x68; // float
}

namespace CStopAtGoalUpdateNode { // CUnaryUpdateNode
    constexpr std::ptrdiff_t m_flOuterRadius = 0x6C; // float
    constexpr std::ptrdiff_t m_flInnerRadius = 0x70; // float
    constexpr std::ptrdiff_t m_flMaxScale = 0x74; // float
    constexpr std::ptrdiff_t m_flMinScale = 0x78; // float
    constexpr std::ptrdiff_t m_damping = 0x80; // CAnimInputDamping
}

namespace CStringAnimTag { // CAnimTagBase
}

namespace CSubtractUpdateNode { // CBinaryUpdateNode
    constexpr std::ptrdiff_t m_footMotionTiming = 0x8C; // BinaryNodeChildOption
    constexpr std::ptrdiff_t m_bApplyToFootMotion = 0x90; // bool
    constexpr std::ptrdiff_t m_bApplyChannelsSeparately = 0x91; // bool
    constexpr std::ptrdiff_t m_bUseModelSpace = 0x92; // bool
}

namespace CSymbolAnimParameter { // CConcreteAnimParameter
    constexpr std::ptrdiff_t m_defaultValue = 0x78; // CGlobalSymbol
}

namespace CTaskStatusAnimTag { // CAnimTagBase
}

namespace CTiltTwistConstraint { // CBaseConstraint
    constexpr std::ptrdiff_t m_nTargetAxis = 0x70; // int32_t
    constexpr std::ptrdiff_t m_nSlaveAxis = 0x74; // int32_t
}

namespace CTimeRemainingMetricEvaluator { // CMotionMetricEvaluator
    constexpr std::ptrdiff_t m_bMatchByTimeRemaining = 0x50; // bool
    constexpr std::ptrdiff_t m_flMaxTimeRemaining = 0x54; // float
    constexpr std::ptrdiff_t m_bFilterByTimeRemaining = 0x58; // bool
    constexpr std::ptrdiff_t m_flMinTimeRemaining = 0x5C; // float
}

namespace CToggleComponentActionUpdater { // CAnimActionUpdater
    constexpr std::ptrdiff_t m_componentID = 0x18; // AnimComponentID
    constexpr std::ptrdiff_t m_bSetEnabled = 0x1C; // bool
}

namespace CTransitionUpdateData {
    constexpr std::ptrdiff_t m_srcStateIndex = 0x0; // uint8_t
    constexpr std::ptrdiff_t m_destStateIndex = 0x1; // uint8_t
    constexpr std::ptrdiff_t m_bDisabled = 0x0; // bitfield:1
}

namespace CTurnHelperUpdateNode { // CUnaryUpdateNode
    constexpr std::ptrdiff_t m_facingTarget = 0x6C; // AnimValueSource
    constexpr std::ptrdiff_t m_turnStartTimeOffset = 0x70; // float
    constexpr std::ptrdiff_t m_turnDuration = 0x74; // float
    constexpr std::ptrdiff_t m_bMatchChildDuration = 0x78; // bool
    constexpr std::ptrdiff_t m_manualTurnOffset = 0x7C; // float
    constexpr std::ptrdiff_t m_bUseManualTurnOffset = 0x80; // bool
}

namespace CTwistConstraint { // CBaseConstraint
    constexpr std::ptrdiff_t m_bInverse = 0x70; // bool
    constexpr std::ptrdiff_t m_qParentBindRotation = 0x80; // Quaternion
    constexpr std::ptrdiff_t m_qChildBindRotation = 0x90; // Quaternion
}

namespace CTwoBoneIKUpdateNode { // CUnaryUpdateNode
    constexpr std::ptrdiff_t m_opFixedData = 0x70; // TwoBoneIKSettings_t
}

namespace CUnaryUpdateNode { // CAnimUpdateNodeBase
    constexpr std::ptrdiff_t m_pChildNode = 0x58; // CAnimUpdateNodeRef
}

namespace CVPhysXSurfacePropertiesList {
    constexpr std::ptrdiff_t m_surfacePropertiesList = 0x0; // CUtlVector<CPhysSurfaceProperties*>
}

namespace CVectorAnimParameter { // CConcreteAnimParameter
    constexpr std::ptrdiff_t m_defaultValue = 0x78; // Vector
    constexpr std::ptrdiff_t m_bInterpolate = 0x84; // bool
}

namespace CVectorQuantizer {
    constexpr std::ptrdiff_t m_centroidVectors = 0x0; // CUtlVector<float>
    constexpr std::ptrdiff_t m_nCentroids = 0x18; // int32_t
    constexpr std::ptrdiff_t m_nDimensions = 0x1C; // int32_t
}

namespace CVirtualAnimParameter { // CAnimParameterBase
    constexpr std::ptrdiff_t m_expressionString = 0x68; // CUtlString
    constexpr std::ptrdiff_t m_eParamType = 0x70; // AnimParamType_t
}

namespace CWayPointHelperUpdateNode { // CUnaryUpdateNode
    constexpr std::ptrdiff_t m_flStartCycle = 0x6C; // float
    constexpr std::ptrdiff_t m_flEndCycle = 0x70; // float
    constexpr std::ptrdiff_t m_bOnlyGoals = 0x74; // bool
    constexpr std::ptrdiff_t m_bPreventOvershoot = 0x75; // bool
    constexpr std::ptrdiff_t m_bPreventUndershoot = 0x76; // bool
}

namespace CZeroPoseUpdateNode { // CLeafUpdateNode
}

namespace ChainToSolveData_t {
    constexpr std::ptrdiff_t m_nChainIndex = 0x0; // int32_t
    constexpr std::ptrdiff_t m_SolverSettings = 0x4; // IKSolverSettings_t
    constexpr std::ptrdiff_t m_TargetSettings = 0x10; // IKTargetSettings_t
    constexpr std::ptrdiff_t m_DebugSetting = 0x38; // SolveIKChainAnimNodeDebugSetting
    constexpr std::ptrdiff_t m_flDebugNormalizedValue = 0x3C; // float
    constexpr std::ptrdiff_t m_vDebugOffset = 0x40; // VectorAligned
}

namespace ConfigIndex {
    constexpr std::ptrdiff_t m_nGroup = 0x0; // uint16_t
    constexpr std::ptrdiff_t m_nConfig = 0x2; // uint16_t
}

namespace DynamicMeshDeformParams_t {
    constexpr std::ptrdiff_t m_flTensionCompressScale = 0x0; // float
    constexpr std::ptrdiff_t m_flTensionStretchScale = 0x4; // float
    constexpr std::ptrdiff_t m_bRecomputeSmoothNormalsAfterAnimation = 0x8; // bool
    constexpr std::ptrdiff_t m_bComputeDynamicMeshTensionAfterAnimation = 0x9; // bool
}

namespace FollowAttachmentSettings_t {
    constexpr std::ptrdiff_t m_attachment = 0x0; // CAnimAttachment
    constexpr std::ptrdiff_t m_boneIndex = 0x80; // int32_t
    constexpr std::ptrdiff_t m_bMatchTranslation = 0x84; // bool
    constexpr std::ptrdiff_t m_bMatchRotation = 0x85; // bool
}

namespace FootFixedData_t {
    constexpr std::ptrdiff_t m_vToeOffset = 0x0; // VectorAligned
    constexpr std::ptrdiff_t m_vHeelOffset = 0x10; // VectorAligned
    constexpr std::ptrdiff_t m_nTargetBoneIndex = 0x20; // int32_t
    constexpr std::ptrdiff_t m_nAnkleBoneIndex = 0x24; // int32_t
    constexpr std::ptrdiff_t m_nIKAnchorBoneIndex = 0x28; // int32_t
    constexpr std::ptrdiff_t m_ikChainIndex = 0x2C; // int32_t
    constexpr std::ptrdiff_t m_flMaxIKLength = 0x30; // float
    constexpr std::ptrdiff_t m_nFootIndex = 0x34; // int32_t
    constexpr std::ptrdiff_t m_nTagIndex = 0x38; // int32_t
    constexpr std::ptrdiff_t m_flMaxRotationLeft = 0x3C; // float
    constexpr std::ptrdiff_t m_flMaxRotationRight = 0x40; // float
}

namespace FootFixedSettings {
    constexpr std::ptrdiff_t m_traceSettings = 0x0; // TraceSettings_t
    constexpr std::ptrdiff_t m_vFootBaseBindPosePositionMS = 0x10; // VectorAligned
    constexpr std::ptrdiff_t m_flFootBaseLength = 0x20; // float
    constexpr std::ptrdiff_t m_flMaxRotationLeft = 0x24; // float
    constexpr std::ptrdiff_t m_flMaxRotationRight = 0x28; // float
    constexpr std::ptrdiff_t m_footstepLandedTagIndex = 0x2C; // int32_t
    constexpr std::ptrdiff_t m_bEnableTracing = 0x30; // bool
    constexpr std::ptrdiff_t m_flTraceAngleBlend = 0x34; // float
    constexpr std::ptrdiff_t m_nDisableTagIndex = 0x38; // int32_t
    constexpr std::ptrdiff_t m_nFootIndex = 0x3C; // int32_t
}

namespace FootLockPoseOpFixedSettings {
    constexpr std::ptrdiff_t m_footInfo = 0x0; // CUtlVector<FootFixedData_t>
    constexpr std::ptrdiff_t m_hipDampingSettings = 0x18; // CAnimInputDamping
    constexpr std::ptrdiff_t m_nHipBoneIndex = 0x28; // int32_t
    constexpr std::ptrdiff_t m_ikSolverType = 0x2C; // IKSolverType
    constexpr std::ptrdiff_t m_bApplyTilt = 0x30; // bool
    constexpr std::ptrdiff_t m_bApplyHipDrop = 0x31; // bool
    constexpr std::ptrdiff_t m_bAlwaysUseFallbackHinge = 0x32; // bool
    constexpr std::ptrdiff_t m_bApplyFootRotationLimits = 0x33; // bool
    constexpr std::ptrdiff_t m_bApplyLegTwistLimits = 0x34; // bool
    constexpr std::ptrdiff_t m_flMaxFootHeight = 0x38; // float
    constexpr std::ptrdiff_t m_flExtensionScale = 0x3C; // float
    constexpr std::ptrdiff_t m_flMaxLegTwist = 0x40; // float
    constexpr std::ptrdiff_t m_bEnableLockBreaking = 0x44; // bool
    constexpr std::ptrdiff_t m_flLockBreakTolerance = 0x48; // float
    constexpr std::ptrdiff_t m_flLockBlendTime = 0x4C; // float
    constexpr std::ptrdiff_t m_bEnableStretching = 0x50; // bool
    constexpr std::ptrdiff_t m_flMaxStretchAmount = 0x54; // float
    constexpr std::ptrdiff_t m_flStretchExtensionScale = 0x58; // float
}

namespace FootPinningPoseOpFixedData_t {
    constexpr std::ptrdiff_t m_footInfo = 0x0; // CUtlVector<FootFixedData_t>
    constexpr std::ptrdiff_t m_flBlendTime = 0x18; // float
    constexpr std::ptrdiff_t m_flLockBreakDistance = 0x1C; // float
    constexpr std::ptrdiff_t m_flMaxLegTwist = 0x20; // float
    constexpr std::ptrdiff_t m_nHipBoneIndex = 0x24; // int32_t
    constexpr std::ptrdiff_t m_bApplyLegTwistLimits = 0x28; // bool
    constexpr std::ptrdiff_t m_bApplyFootRotationLimits = 0x29; // bool
}

namespace FootStepTrigger {
    constexpr std::ptrdiff_t m_tags = 0x0; // CUtlVector<int32_t>
    constexpr std::ptrdiff_t m_nFootIndex = 0x18; // int32_t
    constexpr std::ptrdiff_t m_triggerPhase = 0x1C; // StepPhase
}

namespace HSequence {
    constexpr std::ptrdiff_t m_Value = 0x0; // int32_t
}

namespace HitReactFixedSettings_t {
    constexpr std::ptrdiff_t m_nWeightListIndex = 0x0; // int32_t
    constexpr std::ptrdiff_t m_nEffectedBoneCount = 0x4; // int32_t
    constexpr std::ptrdiff_t m_flMaxImpactForce = 0x8; // float
    constexpr std::ptrdiff_t m_flMinImpactForce = 0xC; // float
    constexpr std::ptrdiff_t m_flWhipImpactScale = 0x10; // float
    constexpr std::ptrdiff_t m_flCounterRotationScale = 0x14; // float
    constexpr std::ptrdiff_t m_flDistanceFadeScale = 0x18; // float
    constexpr std::ptrdiff_t m_flPropagationScale = 0x1C; // float
    constexpr std::ptrdiff_t m_flWhipDelay = 0x20; // float
    constexpr std::ptrdiff_t m_flSpringStrength = 0x24; // float
    constexpr std::ptrdiff_t m_flWhipSpringStrength = 0x28; // float
    constexpr std::ptrdiff_t m_flMaxAngleRadians = 0x2C; // float
    constexpr std::ptrdiff_t m_nHipBoneIndex = 0x30; // int32_t
    constexpr std::ptrdiff_t m_flHipBoneTranslationScale = 0x34; // float
    constexpr std::ptrdiff_t m_flHipDipSpringStrength = 0x38; // float
    constexpr std::ptrdiff_t m_flHipDipImpactScale = 0x3C; // float
    constexpr std::ptrdiff_t m_flHipDipDelay = 0x40; // float
}

namespace IKBoneNameAndIndex_t {
    constexpr std::ptrdiff_t m_Name = 0x0; // CUtlString
}

namespace IKDemoCaptureSettings_t {
    constexpr std::ptrdiff_t m_parentBoneName = 0x0; // CUtlString
    constexpr std::ptrdiff_t m_eMode = 0x8; // IKChannelMode
    constexpr std::ptrdiff_t m_ikChainName = 0x10; // CUtlString
    constexpr std::ptrdiff_t m_oneBoneStart = 0x18; // CUtlString
    constexpr std::ptrdiff_t m_oneBoneEnd = 0x20; // CUtlString
}

namespace IKSolverSettings_t {
    constexpr std::ptrdiff_t m_SolverType = 0x0; // IKSolverType
    constexpr std::ptrdiff_t m_nNumIterations = 0x4; // int32_t
}

namespace IKTargetSettings_t {
    constexpr std::ptrdiff_t m_TargetSource = 0x0; // IKTargetSource
    constexpr std::ptrdiff_t m_Bone = 0x8; // IKBoneNameAndIndex_t
    constexpr std::ptrdiff_t m_AnimgraphParameterNamePosition = 0x18; // AnimParamID
    constexpr std::ptrdiff_t m_AnimgraphParameterNameOrientation = 0x1C; // AnimParamID
    constexpr std::ptrdiff_t m_TargetCoordSystem = 0x20; // IKTargetCoordinateSystem
}

namespace JiggleBoneSettingsList_t {
    constexpr std::ptrdiff_t m_boneSettings = 0x0; // CUtlVector<JiggleBoneSettings_t>
}

namespace JiggleBoneSettings_t {
    constexpr std::ptrdiff_t m_nBoneIndex = 0x0; // int32_t
    constexpr std::ptrdiff_t m_flSpringStrength = 0x4; // float
    constexpr std::ptrdiff_t m_flMaxTimeStep = 0x8; // float
    constexpr std::ptrdiff_t m_flDamping = 0xC; // float
    constexpr std::ptrdiff_t m_vBoundsMaxLS = 0x10; // Vector
    constexpr std::ptrdiff_t m_vBoundsMinLS = 0x1C; // Vector
    constexpr std::ptrdiff_t m_eSimSpace = 0x28; // JiggleBoneSimSpace
}

namespace LookAtBone_t {
    constexpr std::ptrdiff_t m_index = 0x0; // int32_t
    constexpr std::ptrdiff_t m_weight = 0x4; // float
}

namespace LookAtOpFixedSettings_t {
    constexpr std::ptrdiff_t m_attachment = 0x0; // CAnimAttachment
    constexpr std::ptrdiff_t m_damping = 0x80; // CAnimInputDamping
    constexpr std::ptrdiff_t m_bones = 0x90; // CUtlVector<LookAtBone_t>
    constexpr std::ptrdiff_t m_flYawLimit = 0xA8; // float
    constexpr std::ptrdiff_t m_flPitchLimit = 0xAC; // float
    constexpr std::ptrdiff_t m_flHysteresisInnerAngle = 0xB0; // float
    constexpr std::ptrdiff_t m_flHysteresisOuterAngle = 0xB4; // float
    constexpr std::ptrdiff_t m_bRotateYawForward = 0xB8; // bool
    constexpr std::ptrdiff_t m_bMaintainUpDirection = 0xB9; // bool
    constexpr std::ptrdiff_t m_bTargetIsPosition = 0xBA; // bool
    constexpr std::ptrdiff_t m_bUseHysteresis = 0xBB; // bool
}

namespace MaterialGroup_t {
    constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
    constexpr std::ptrdiff_t m_materials = 0x8; // CUtlVector<CStrongHandle<InfoForResourceTypeIMaterial2>>
}

namespace ModelBoneFlexDriverControl_t {
    constexpr std::ptrdiff_t m_nBoneComponent = 0x0; // ModelBoneFlexComponent_t
    constexpr std::ptrdiff_t m_flexController = 0x8; // CUtlString
    constexpr std::ptrdiff_t m_flexControllerToken = 0x10; // uint32_t
    constexpr std::ptrdiff_t m_flMin = 0x14; // float
    constexpr std::ptrdiff_t m_flMax = 0x18; // float
}

namespace ModelBoneFlexDriver_t {
    constexpr std::ptrdiff_t m_boneName = 0x0; // CUtlString
    constexpr std::ptrdiff_t m_boneNameToken = 0x8; // uint32_t
    constexpr std::ptrdiff_t m_controls = 0x10; // CUtlVector<ModelBoneFlexDriverControl_t>
}

namespace ModelSkeletonData_t {
    constexpr std::ptrdiff_t m_boneName = 0x0; // CUtlVector<CUtlString>
    constexpr std::ptrdiff_t m_nParent = 0x18; // CUtlVector<int16_t>
    constexpr std::ptrdiff_t m_boneSphere = 0x30; // CUtlVector<float>
    constexpr std::ptrdiff_t m_nFlag = 0x48; // CUtlVector<uint32_t>
    constexpr std::ptrdiff_t m_bonePosParent = 0x60; // CUtlVector<Vector>
    constexpr std::ptrdiff_t m_boneRotParent = 0x78; // CUtlVector<QuaternionStorage>
    constexpr std::ptrdiff_t m_boneScaleParent = 0x90; // CUtlVector<float>
}

namespace MoodAnimationLayer_t {
    constexpr std::ptrdiff_t m_sName = 0x0; // CUtlString
    constexpr std::ptrdiff_t m_bActiveListening = 0x8; // bool
    constexpr std::ptrdiff_t m_bActiveTalking = 0x9; // bool
    constexpr std::ptrdiff_t m_layerAnimations = 0x10; // CUtlVector<MoodAnimation_t>
    constexpr std::ptrdiff_t m_flIntensity = 0x28; // CRangeFloat
    constexpr std::ptrdiff_t m_flDurationScale = 0x30; // CRangeFloat
    constexpr std::ptrdiff_t m_bScaleWithInts = 0x38; // bool
    constexpr std::ptrdiff_t m_flNextStart = 0x3C; // CRangeFloat
    constexpr std::ptrdiff_t m_flStartOffset = 0x44; // CRangeFloat
    constexpr std::ptrdiff_t m_flEndOffset = 0x4C; // CRangeFloat
    constexpr std::ptrdiff_t m_flFadeIn = 0x54; // float
    constexpr std::ptrdiff_t m_flFadeOut = 0x58; // float
}

namespace MoodAnimation_t {
    constexpr std::ptrdiff_t m_sName = 0x0; // CUtlString
    constexpr std::ptrdiff_t m_flWeight = 0x8; // float
}

namespace MotionBlendItem {
    constexpr std::ptrdiff_t m_pChild = 0x0; // CSmartPtr<CMotionNode>
    constexpr std::ptrdiff_t m_flKeyValue = 0x8; // float
}

namespace MotionDBIndex {
    constexpr std::ptrdiff_t m_nIndex = 0x0; // uint32_t
}

namespace MotionIndex {
    constexpr std::ptrdiff_t m_nGroup = 0x0; // uint16_t
    constexpr std::ptrdiff_t m_nMotion = 0x2; // uint16_t
}

namespace NmCompressionSettings_t {
    constexpr std::ptrdiff_t m_translationRangeX = 0x0; // NmCompressionSettings_t::QuantizationRange_t
    constexpr std::ptrdiff_t m_translationRangeY = 0x8; // NmCompressionSettings_t::QuantizationRange_t
    constexpr std::ptrdiff_t m_translationRangeZ = 0x10; // NmCompressionSettings_t::QuantizationRange_t
    constexpr std::ptrdiff_t m_scaleRange = 0x18; // NmCompressionSettings_t::QuantizationRange_t
    constexpr std::ptrdiff_t m_constantRotation = 0x20; // Quaternion
    constexpr std::ptrdiff_t m_bIsRotationStatic = 0x30; // bool
    constexpr std::ptrdiff_t m_bIsTranslationStatic = 0x31; // bool
    constexpr std::ptrdiff_t m_bIsScaleStatic = 0x32; // bool
}

namespace NmCompressionSettings_t_QuantizationRange_t {
    constexpr std::ptrdiff_t m_flRangeStart = 0x0; // float
    constexpr std::ptrdiff_t m_flRangeLength = 0x4; // float
}

namespace NmPercent_t {
    constexpr std::ptrdiff_t m_flValue = 0x0; // float
}

namespace NmSyncTrackTimeRange_t {
    constexpr std::ptrdiff_t m_startTime = 0x0; // NmSyncTrackTime_t
    constexpr std::ptrdiff_t m_endTime = 0x8; // NmSyncTrackTime_t
}

namespace NmSyncTrackTime_t {
    constexpr std::ptrdiff_t m_nEventIdx = 0x0; // int32_t
    constexpr std::ptrdiff_t m_percentageThrough = 0x4; // NmPercent_t
}

namespace ParamSpanSample_t {
    constexpr std::ptrdiff_t m_value = 0x0; // CAnimVariant
    constexpr std::ptrdiff_t m_flCycle = 0x14; // float
}

namespace ParamSpan_t {
    constexpr std::ptrdiff_t m_samples = 0x0; // CUtlVector<ParamSpanSample_t>
    constexpr std::ptrdiff_t m_hParam = 0x18; // CAnimParamHandle
    constexpr std::ptrdiff_t m_eParamType = 0x1A; // AnimParamType_t
    constexpr std::ptrdiff_t m_flStartCycle = 0x1C; // float
    constexpr std::ptrdiff_t m_flEndCycle = 0x20; // float
}

namespace PermModelDataAnimatedMaterialAttribute_t {
    constexpr std::ptrdiff_t m_AttributeName = 0x0; // CUtlString
    constexpr std::ptrdiff_t m_nNumChannels = 0x8; // int32_t
}

namespace PermModelData_t {
    constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
    constexpr std::ptrdiff_t m_modelInfo = 0x8; // PermModelInfo_t
    constexpr std::ptrdiff_t m_ExtParts = 0x60; // CUtlVector<PermModelExtPart_t>
    constexpr std::ptrdiff_t m_refMeshes = 0x78; // CUtlVector<CStrongHandle<InfoForResourceTypeCRenderMesh>>
    constexpr std::ptrdiff_t m_refMeshGroupMasks = 0x90; // CUtlVector<uint64_t>
    constexpr std::ptrdiff_t m_refPhysGroupMasks = 0xA8; // CUtlVector<uint64_t>
    constexpr std::ptrdiff_t m_refLODGroupMasks = 0xC0; // CUtlVector<uint8_t>
    constexpr std::ptrdiff_t m_lodGroupSwitchDistances = 0xD8; // CUtlVector<float>
    constexpr std::ptrdiff_t m_refPhysicsData = 0xF0; // CUtlVector<CStrongHandle<InfoForResourceTypeCPhysAggregateData>>
    constexpr std::ptrdiff_t m_refPhysicsHitboxData = 0x108; // CUtlVector<CStrongHandle<InfoForResourceTypeCPhysAggregateData>>
    constexpr std::ptrdiff_t m_refAnimGroups = 0x120; // CUtlVector<CStrongHandle<InfoForResourceTypeCAnimationGroup>>
    constexpr std::ptrdiff_t m_refSequenceGroups = 0x138; // CUtlVector<CStrongHandle<InfoForResourceTypeCSequenceGroupData>>
    constexpr std::ptrdiff_t m_meshGroups = 0x150; // CUtlVector<CUtlString>
    constexpr std::ptrdiff_t m_materialGroups = 0x168; // CUtlVector<MaterialGroup_t>
    constexpr std::ptrdiff_t m_nDefaultMeshGroupMask = 0x180; // uint64_t
    constexpr std::ptrdiff_t m_modelSkeleton = 0x188; // ModelSkeletonData_t
    constexpr std::ptrdiff_t m_remappingTable = 0x230; // CUtlVector<int16_t>
    constexpr std::ptrdiff_t m_remappingTableStarts = 0x248; // CUtlVector<uint16_t>
    constexpr std::ptrdiff_t m_boneFlexDrivers = 0x260; // CUtlVector<ModelBoneFlexDriver_t>
    constexpr std::ptrdiff_t m_pModelConfigList = 0x278; // CModelConfigList*
    constexpr std::ptrdiff_t m_BodyGroupsHiddenInTools = 0x280; // CUtlVector<CUtlString>
    constexpr std::ptrdiff_t m_refAnimIncludeModels = 0x298; // CUtlVector<CStrongHandle<InfoForResourceTypeCModel>>
    constexpr std::ptrdiff_t m_AnimatedMaterialAttributes = 0x2B0; // CUtlVector<PermModelDataAnimatedMaterialAttribute_t>
}

namespace PermModelExtPart_t {
    constexpr std::ptrdiff_t m_Transform = 0x0; // CTransform
    constexpr std::ptrdiff_t m_Name = 0x20; // CUtlString
    constexpr std::ptrdiff_t m_nParent = 0x28; // int32_t
    constexpr std::ptrdiff_t m_refModel = 0x30; // CStrongHandle<InfoForResourceTypeCModel>
}

namespace PermModelInfo_t {
    constexpr std::ptrdiff_t m_nFlags = 0x0; // uint32_t
    constexpr std::ptrdiff_t m_vHullMin = 0x4; // Vector
    constexpr std::ptrdiff_t m_vHullMax = 0x10; // Vector
    constexpr std::ptrdiff_t m_vViewMin = 0x1C; // Vector
    constexpr std::ptrdiff_t m_vViewMax = 0x28; // Vector
    constexpr std::ptrdiff_t m_flMass = 0x34; // float
    constexpr std::ptrdiff_t m_vEyePosition = 0x38; // Vector
    constexpr std::ptrdiff_t m_flMaxEyeDeflection = 0x44; // float
    constexpr std::ptrdiff_t m_sSurfaceProperty = 0x48; // CUtlString
    constexpr std::ptrdiff_t m_keyValueText = 0x50; // CUtlString
}

namespace PhysSoftbodyDesc_t {
    constexpr std::ptrdiff_t m_ParticleBoneHash = 0x0; // CUtlVector<uint32_t>
    constexpr std::ptrdiff_t m_Particles = 0x18; // CUtlVector<RnSoftbodyParticle_t>
    constexpr std::ptrdiff_t m_Springs = 0x30; // CUtlVector<RnSoftbodySpring_t>
    constexpr std::ptrdiff_t m_Capsules = 0x48; // CUtlVector<RnSoftbodyCapsule_t>
    constexpr std::ptrdiff_t m_InitPose = 0x60; // CUtlVector<CTransform>
    constexpr std::ptrdiff_t m_ParticleBoneName = 0x78; // CUtlVector<CUtlString>
}

namespace RenderHairStrandInfo_t {
    constexpr std::ptrdiff_t m_nGuideIdx = 0x0; // uint32_t[3]
    constexpr std::ptrdiff_t m_nBaseTriIdx = 0xC; // uint32_t
    constexpr std::ptrdiff_t m_vGuideBarycentric = 0x10; // Vector2D
    constexpr std::ptrdiff_t m_vBaseBarycentric = 0x18; // Vector2D
    constexpr std::ptrdiff_t m_vRootOffset_flLengthScale = 0x20; // uint16_t[4]
    constexpr std::ptrdiff_t m_nPackedBaseMeshUv = 0x28; // uint32_t
    constexpr std::ptrdiff_t m_nPad = 0x2C; // uint32_t
}

namespace RenderSkeletonBone_t {
    constexpr std::ptrdiff_t m_boneName = 0x0; // CUtlString
    constexpr std::ptrdiff_t m_parentName = 0x8; // CUtlString
    constexpr std::ptrdiff_t m_invBindPose = 0x10; // matrix3x4_t
    constexpr std::ptrdiff_t m_bbox = 0x40; // SkeletonBoneBounds_t
    constexpr std::ptrdiff_t m_flSphereRadius = 0x58; // float
}

namespace SampleCode {
    constexpr std::ptrdiff_t m_subCode = 0x0; // uint8_t[8]
}

namespace ScriptInfo_t {
    constexpr std::ptrdiff_t m_code = 0x0; // CUtlString
    constexpr std::ptrdiff_t m_paramsModified = 0x8; // CUtlVector<CAnimParamHandle>
    constexpr std::ptrdiff_t m_proxyReadParams = 0x20; // CUtlVector<int32_t>
    constexpr std::ptrdiff_t m_proxyWriteParams = 0x38; // CUtlVector<int32_t>
    constexpr std::ptrdiff_t m_eScriptType = 0x50; // AnimScriptType
}

namespace SkeletonAnimCapture_t {
    constexpr std::ptrdiff_t m_nEntIndex = 0x0; // CEntityIndex
    constexpr std::ptrdiff_t m_nEntParent = 0x4; // CEntityIndex
    constexpr std::ptrdiff_t m_ImportedCollision = 0x8; // CUtlVector<CEntityIndex>
    constexpr std::ptrdiff_t m_ModelName = 0x20; // CUtlString
    constexpr std::ptrdiff_t m_CaptureName = 0x28; // CUtlString
    constexpr std::ptrdiff_t m_ModelBindPose = 0x30; // CUtlVector<SkeletonAnimCapture_t::Bone_t>
    constexpr std::ptrdiff_t m_FeModelInitPose = 0x48; // CUtlVector<SkeletonAnimCapture_t::Bone_t>
    constexpr std::ptrdiff_t m_nFlexControllers = 0x60; // int32_t
    constexpr std::ptrdiff_t m_bPredicted = 0x64; // bool
    constexpr std::ptrdiff_t m_Frames = 0xA8; // CUtlVector<SkeletonAnimCapture_t::Frame_t>
}

namespace SkeletonAnimCapture_t_Bone_t {
    constexpr std::ptrdiff_t m_Name = 0x0; // CUtlString
    constexpr std::ptrdiff_t m_BindPose = 0x10; // CTransform
    constexpr std::ptrdiff_t m_nParent = 0x30; // int32_t
}

namespace SkeletonAnimCapture_t_Camera_t {
    constexpr std::ptrdiff_t m_tmCamera = 0x0; // CTransform
    constexpr std::ptrdiff_t m_flTime = 0x20; // float
}

namespace SkeletonAnimCapture_t_FrameStamp_t {
    constexpr std::ptrdiff_t m_flTime = 0x0; // float
    constexpr std::ptrdiff_t m_flEntitySimTime = 0x4; // float
    constexpr std::ptrdiff_t m_bTeleportTick = 0x8; // bool
    constexpr std::ptrdiff_t m_bPredicted = 0x9; // bool
    constexpr std::ptrdiff_t m_flCurTime = 0xC; // float
    constexpr std::ptrdiff_t m_flRealTime = 0x10; // float
    constexpr std::ptrdiff_t m_nFrameCount = 0x14; // int32_t
    constexpr std::ptrdiff_t m_nTickCount = 0x18; // int32_t
}

namespace SkeletonAnimCapture_t_Frame_t {
    constexpr std::ptrdiff_t m_flTime = 0x0; // float
    constexpr std::ptrdiff_t m_Stamp = 0x4; // SkeletonAnimCapture_t::FrameStamp_t
    constexpr std::ptrdiff_t m_Transform = 0x20; // CTransform
    constexpr std::ptrdiff_t m_bTeleport = 0x40; // bool
    constexpr std::ptrdiff_t m_CompositeBones = 0x48; // CUtlVector<CTransform>
    constexpr std::ptrdiff_t m_SimStateBones = 0x60; // CUtlVector<CTransform>
    constexpr std::ptrdiff_t m_FeModelAnims = 0x78; // CUtlVector<CTransform>
    constexpr std::ptrdiff_t m_FeModelPos = 0x90; // CUtlVector<VectorAligned>
    constexpr std::ptrdiff_t m_FlexControllerWeights = 0xA8; // CUtlVector<float>
}

namespace SkeletonBoneBounds_t {
    constexpr std::ptrdiff_t m_vecCenter = 0x0; // Vector
    constexpr std::ptrdiff_t m_vecSize = 0xC; // Vector
}

namespace SkeletonDemoDb_t {
    constexpr std::ptrdiff_t m_AnimCaptures = 0x0; // CUtlVector<SkeletonAnimCapture_t*>
    constexpr std::ptrdiff_t m_CameraTrack = 0x18; // CUtlVector<SkeletonAnimCapture_t::Camera_t>
    constexpr std::ptrdiff_t m_flRecordingTime = 0x30; // float
}

namespace SolveIKChainPoseOpFixedSettings_t {
    constexpr std::ptrdiff_t m_ChainsToSolveData = 0x0; // CUtlVector<ChainToSolveData_t>
    constexpr std::ptrdiff_t m_bMatchTargetOrientation = 0x18; // bool
}

namespace StanceInfo_t {
    constexpr std::ptrdiff_t m_vPosition = 0x0; // Vector
    constexpr std::ptrdiff_t m_flDirection = 0xC; // float
}

namespace TagSpan_t {
    constexpr std::ptrdiff_t m_tagIndex = 0x0; // int32_t
    constexpr std::ptrdiff_t m_startCycle = 0x4; // float
    constexpr std::ptrdiff_t m_endCycle = 0x8; // float
}

namespace TraceSettings_t {
    constexpr std::ptrdiff_t m_flTraceHeight = 0x0; // float
    constexpr std::ptrdiff_t m_flTraceRadius = 0x4; // float
}

namespace TwoBoneIKSettings_t {
    constexpr std::ptrdiff_t m_endEffectorType = 0x0; // IkEndEffectorType
    constexpr std::ptrdiff_t m_endEffectorAttachment = 0x10; // CAnimAttachment
    constexpr std::ptrdiff_t m_targetType = 0x90; // IkTargetType
    constexpr std::ptrdiff_t m_targetAttachment = 0xA0; // CAnimAttachment
    constexpr std::ptrdiff_t m_targetBoneIndex = 0x120; // int32_t
    constexpr std::ptrdiff_t m_hPositionParam = 0x124; // CAnimParamHandle
    constexpr std::ptrdiff_t m_hRotationParam = 0x126; // CAnimParamHandle
    constexpr std::ptrdiff_t m_bAlwaysUseFallbackHinge = 0x128; // bool
    constexpr std::ptrdiff_t m_vLsFallbackHingeAxis = 0x130; // VectorAligned
    constexpr std::ptrdiff_t m_nFixedBoneIndex = 0x140; // int32_t
    constexpr std::ptrdiff_t m_nMiddleBoneIndex = 0x144; // int32_t
    constexpr std::ptrdiff_t m_nEndBoneIndex = 0x148; // int32_t
    constexpr std::ptrdiff_t m_bMatchTargetOrientation = 0x14C; // bool
    constexpr std::ptrdiff_t m_bConstrainTwist = 0x14D; // bool
    constexpr std::ptrdiff_t m_flMaxTwist = 0x150; // float
}

namespace VPhysXAggregateData_t {
    constexpr std::ptrdiff_t m_nFlags = 0x0; // uint16_t
    constexpr std::ptrdiff_t m_nRefCounter = 0x2; // uint16_t
    constexpr std::ptrdiff_t m_bonesHash = 0x8; // CUtlVector<uint32_t>
    constexpr std::ptrdiff_t m_boneNames = 0x20; // CUtlVector<CUtlString>
    constexpr std::ptrdiff_t m_indexNames = 0x38; // CUtlVector<uint16_t>
    constexpr std::ptrdiff_t m_indexHash = 0x50; // CUtlVector<uint16_t>
    constexpr std::ptrdiff_t m_bindPose = 0x68; // CUtlVector<matrix3x4a_t>
    constexpr std::ptrdiff_t m_parts = 0x80; // CUtlVector<VPhysXBodyPart_t>
    constexpr std::ptrdiff_t m_constraints2 = 0x98; // CUtlVector<VPhysXConstraint2_t>
    constexpr std::ptrdiff_t m_joints = 0xB0; // CUtlVector<VPhysXJoint_t>
    constexpr std::ptrdiff_t m_pFeModel = 0xC8; // PhysFeModelDesc_t*
    constexpr std::ptrdiff_t m_boneParents = 0xD0; // CUtlVector<uint16_t>
    constexpr std::ptrdiff_t m_surfacePropertyHashes = 0xE8; // CUtlVector<uint32_t>
    constexpr std::ptrdiff_t m_collisionAttributes = 0x100; // CUtlVector<VPhysXCollisionAttributes_t>
    constexpr std::ptrdiff_t m_debugPartNames = 0x118; // CUtlVector<CUtlString>
    constexpr std::ptrdiff_t m_embeddedKeyvalues = 0x130; // CUtlString
}

namespace VPhysXBodyPart_t {
    constexpr std::ptrdiff_t m_nFlags = 0x0; // uint32_t
    constexpr std::ptrdiff_t m_flMass = 0x4; // float
    constexpr std::ptrdiff_t m_rnShape = 0x8; // VPhysics2ShapeDef_t
    constexpr std::ptrdiff_t m_nCollisionAttributeIndex = 0x80; // uint16_t
    constexpr std::ptrdiff_t m_nReserved = 0x82; // uint16_t
    constexpr std::ptrdiff_t m_flInertiaScale = 0x84; // float
    constexpr std::ptrdiff_t m_flLinearDamping = 0x88; // float
    constexpr std::ptrdiff_t m_flAngularDamping = 0x8C; // float
    constexpr std::ptrdiff_t m_bOverrideMassCenter = 0x90; // bool
    constexpr std::ptrdiff_t m_vMassCenterOverride = 0x94; // Vector
}

namespace VPhysXCollisionAttributes_t {
    constexpr std::ptrdiff_t m_CollisionGroup = 0x0; // uint32_t
    constexpr std::ptrdiff_t m_InteractAs = 0x8; // CUtlVector<uint32_t>
    constexpr std::ptrdiff_t m_InteractWith = 0x20; // CUtlVector<uint32_t>
    constexpr std::ptrdiff_t m_InteractExclude = 0x38; // CUtlVector<uint32_t>
    constexpr std::ptrdiff_t m_CollisionGroupString = 0x50; // CUtlString
    constexpr std::ptrdiff_t m_InteractAsStrings = 0x58; // CUtlVector<CUtlString>
    constexpr std::ptrdiff_t m_InteractWithStrings = 0x70; // CUtlVector<CUtlString>
    constexpr std::ptrdiff_t m_InteractExcludeStrings = 0x88; // CUtlVector<CUtlString>
}

namespace VPhysXConstraint2_t {
    constexpr std::ptrdiff_t m_nFlags = 0x0; // uint32_t
    constexpr std::ptrdiff_t m_nParent = 0x4; // uint16_t
    constexpr std::ptrdiff_t m_nChild = 0x6; // uint16_t
    constexpr std::ptrdiff_t m_params = 0x8; // VPhysXConstraintParams_t
}

namespace VPhysXConstraintParams_t {
    constexpr std::ptrdiff_t m_nType = 0x0; // int8_t
    constexpr std::ptrdiff_t m_nTranslateMotion = 0x1; // int8_t
    constexpr std::ptrdiff_t m_nRotateMotion = 0x2; // int8_t
    constexpr std::ptrdiff_t m_nFlags = 0x3; // int8_t
    constexpr std::ptrdiff_t m_anchor = 0x4; // Vector[2]
    constexpr std::ptrdiff_t m_axes = 0x1C; // QuaternionStorage[2]
    constexpr std::ptrdiff_t m_maxForce = 0x3C; // float
    constexpr std::ptrdiff_t m_maxTorque = 0x40; // float
    constexpr std::ptrdiff_t m_linearLimitValue = 0x44; // float
    constexpr std::ptrdiff_t m_linearLimitRestitution = 0x48; // float
    constexpr std::ptrdiff_t m_linearLimitSpring = 0x4C; // float
    constexpr std::ptrdiff_t m_linearLimitDamping = 0x50; // float
    constexpr std::ptrdiff_t m_twistLowLimitValue = 0x54; // float
    constexpr std::ptrdiff_t m_twistLowLimitRestitution = 0x58; // float
    constexpr std::ptrdiff_t m_twistLowLimitSpring = 0x5C; // float
    constexpr std::ptrdiff_t m_twistLowLimitDamping = 0x60; // float
    constexpr std::ptrdiff_t m_twistHighLimitValue = 0x64; // float
    constexpr std::ptrdiff_t m_twistHighLimitRestitution = 0x68; // float
    constexpr std::ptrdiff_t m_twistHighLimitSpring = 0x6C; // float
    constexpr std::ptrdiff_t m_twistHighLimitDamping = 0x70; // float
    constexpr std::ptrdiff_t m_swing1LimitValue = 0x74; // float
    constexpr std::ptrdiff_t m_swing1LimitRestitution = 0x78; // float
    constexpr std::ptrdiff_t m_swing1LimitSpring = 0x7C; // float
    constexpr std::ptrdiff_t m_swing1LimitDamping = 0x80; // float
    constexpr std::ptrdiff_t m_swing2LimitValue = 0x84; // float
    constexpr std::ptrdiff_t m_swing2LimitRestitution = 0x88; // float
    constexpr std::ptrdiff_t m_swing2LimitSpring = 0x8C; // float
    constexpr std::ptrdiff_t m_swing2LimitDamping = 0x90; // float
    constexpr std::ptrdiff_t m_goalPosition = 0x94; // Vector
    constexpr std::ptrdiff_t m_goalOrientation = 0xA0; // QuaternionStorage
    constexpr std::ptrdiff_t m_goalAngularVelocity = 0xB0; // Vector
    constexpr std::ptrdiff_t m_driveSpringX = 0xBC; // float
    constexpr std::ptrdiff_t m_driveSpringY = 0xC0; // float
    constexpr std::ptrdiff_t m_driveSpringZ = 0xC4; // float
    constexpr std::ptrdiff_t m_driveDampingX = 0xC8; // float
    constexpr std::ptrdiff_t m_driveDampingY = 0xCC; // float
    constexpr std::ptrdiff_t m_driveDampingZ = 0xD0; // float
    constexpr std::ptrdiff_t m_driveSpringTwist = 0xD4; // float
    constexpr std::ptrdiff_t m_driveSpringSwing = 0xD8; // float
    constexpr std::ptrdiff_t m_driveSpringSlerp = 0xDC; // float
    constexpr std::ptrdiff_t m_driveDampingTwist = 0xE0; // float
    constexpr std::ptrdiff_t m_driveDampingSwing = 0xE4; // float
    constexpr std::ptrdiff_t m_driveDampingSlerp = 0xE8; // float
    constexpr std::ptrdiff_t m_solverIterationCount = 0xEC; // int32_t
    constexpr std::ptrdiff_t m_projectionLinearTolerance = 0xF0; // float
    constexpr std::ptrdiff_t m_projectionAngularTolerance = 0xF4; // float
}

namespace VPhysXJoint_t {
    constexpr std::ptrdiff_t m_nType = 0x0; // uint16_t
    constexpr std::ptrdiff_t m_nBody1 = 0x2; // uint16_t
    constexpr std::ptrdiff_t m_nBody2 = 0x4; // uint16_t
    constexpr std::ptrdiff_t m_nFlags = 0x6; // uint16_t
    constexpr std::ptrdiff_t m_Frame1 = 0x10; // CTransform
    constexpr std::ptrdiff_t m_Frame2 = 0x30; // CTransform
    constexpr std::ptrdiff_t m_bEnableCollision = 0x50; // bool
    constexpr std::ptrdiff_t m_bEnableLinearLimit = 0x51; // bool
    constexpr std::ptrdiff_t m_LinearLimit = 0x54; // VPhysXRange_t
    constexpr std::ptrdiff_t m_bEnableLinearMotor = 0x5C; // bool
    constexpr std::ptrdiff_t m_vLinearTargetVelocity = 0x60; // Vector
    constexpr std::ptrdiff_t m_flMaxForce = 0x6C; // float
    constexpr std::ptrdiff_t m_bEnableSwingLimit = 0x70; // bool
    constexpr std::ptrdiff_t m_SwingLimit = 0x74; // VPhysXRange_t
    constexpr std::ptrdiff_t m_bEnableTwistLimit = 0x7C; // bool
    constexpr std::ptrdiff_t m_TwistLimit = 0x80; // VPhysXRange_t
    constexpr std::ptrdiff_t m_bEnableAngularMotor = 0x88; // bool
    constexpr std::ptrdiff_t m_vAngularTargetVelocity = 0x8C; // Vector
    constexpr std::ptrdiff_t m_flMaxTorque = 0x98; // float
    constexpr std::ptrdiff_t m_flLinearFrequency = 0x9C; // float
    constexpr std::ptrdiff_t m_flLinearDampingRatio = 0xA0; // float
    constexpr std::ptrdiff_t m_flAngularFrequency = 0xA4; // float
    constexpr std::ptrdiff_t m_flAngularDampingRatio = 0xA8; // float
    constexpr std::ptrdiff_t m_flFriction = 0xAC; // float
}

namespace VPhysXRange_t {
    constexpr std::ptrdiff_t m_flMin = 0x0; // float
    constexpr std::ptrdiff_t m_flMax = 0x4; // float
}

namespace VPhysics2ShapeDef_t {
    constexpr std::ptrdiff_t m_spheres = 0x0; // CUtlVector<RnSphereDesc_t>
    constexpr std::ptrdiff_t m_capsules = 0x18; // CUtlVector<RnCapsuleDesc_t>
    constexpr std::ptrdiff_t m_hulls = 0x30; // CUtlVector<RnHullDesc_t>
    constexpr std::ptrdiff_t m_meshes = 0x48; // CUtlVector<RnMeshDesc_t>
    constexpr std::ptrdiff_t m_CollisionAttributeIndices = 0x60; // CUtlVector<uint16_t>
}

namespace WeightList {
    constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
    constexpr std::ptrdiff_t m_weights = 0x8; // CUtlVector<float>
}