/*
 * Generated using https://github.com/a2x/cs2-dumper
 * Sat, 23 Mar 2024 05:02:03 +0000
 */

public static class AimMatrixOpFixedSettings_t {
    public const nint m_attachment = 0x0; // CAnimAttachment
    public const nint m_damping = 0x80; // CAnimInputDamping
    public const nint m_poseCacheHandles = 0x90; // CPoseHandle[10]
    public const nint m_eBlendMode = 0xB8; // AimMatrixBlendMode
    public const nint m_fAngleIncrement = 0xBC; // float
    public const nint m_nSequenceMaxFrame = 0xC0; // int32_t
    public const nint m_nBoneMaskIndex = 0xC4; // int32_t
    public const nint m_bTargetIsPosition = 0xC8; // bool
}

public static class AnimComponentID {
    public const nint m_id = 0x0; // uint32_t
}

public static class AnimNodeID {
    public const nint m_id = 0x0; // uint32_t
}

public static class AnimNodeOutputID {
    public const nint m_id = 0x0; // uint32_t
}

public static class AnimParamID {
    public const nint m_id = 0x0; // uint32_t
}

public static class AnimScriptHandle {
    public const nint m_id = 0x0; // uint32_t
}

public static class AnimStateID {
    public const nint m_id = 0x0; // uint32_t
}

public static class AnimTagID {
    public const nint m_id = 0x0; // uint32_t
}

public static class AnimationDecodeDebugDumpElement_t {
    public const nint m_nEntityIndex = 0x0; // int32_t
    public const nint m_modelName = 0x8; // CUtlString
    public const nint m_poseParams = 0x10; // CUtlVector<CUtlString>
    public const nint m_decodeOps = 0x28; // CUtlVector<CUtlString>
    public const nint m_internalOps = 0x40; // CUtlVector<CUtlString>
    public const nint m_decodedAnims = 0x58; // CUtlVector<CUtlString>
}

public static class AnimationDecodeDebugDump_t {
    public const nint m_processingType = 0x0; // AnimationProcessingType_t
    public const nint m_elems = 0x8; // CUtlVector<AnimationDecodeDebugDumpElement_t>
}

public static class AnimationSnapshotBase_t {
    public const nint m_flRealTime = 0x0; // float
    public const nint m_rootToWorld = 0x10; // matrix3x4a_t
    public const nint m_bBonesInWorldSpace = 0x40; // bool
    public const nint m_boneSetupMask = 0x48; // CUtlVector<uint32_t>
    public const nint m_boneTransforms = 0x60; // CUtlVector<matrix3x4a_t>
    public const nint m_flexControllers = 0x78; // CUtlVector<float>
    public const nint m_SnapshotType = 0x90; // AnimationSnapshotType_t
    public const nint m_bHasDecodeDump = 0x94; // bool
    public const nint m_DecodeDump = 0x98; // AnimationDecodeDebugDumpElement_t
}

public static class AnimationSnapshot_t { // AnimationSnapshotBase_t
    public const nint m_nEntIndex = 0x110; // int32_t
    public const nint m_modelName = 0x118; // CUtlString
}

public static class AttachmentHandle_t {
    public const nint m_Value = 0x0; // uint8_t
}

public static class BlendItem_t {
    public const nint m_tags = 0x0; // CUtlVector<TagSpan_t>
    public const nint m_pChild = 0x18; // CAnimUpdateNodeRef
    public const nint m_hSequence = 0x28; // HSequence
    public const nint m_vPos = 0x2C; // Vector2D
    public const nint m_flDuration = 0x34; // float
    public const nint m_bUseCustomDuration = 0x38; // bool
}

public static class BoneDemoCaptureSettings_t {
    public const nint m_boneName = 0x0; // CUtlString
    public const nint m_flChainLength = 0x8; // float
}

public static class CActionComponentUpdater { // CAnimComponentUpdater
    public const nint m_actions = 0x30; // CUtlVector<CSmartPtr<CAnimActionUpdater>>
}

public static class CAddUpdateNode { // CBinaryUpdateNode
    public const nint m_footMotionTiming = 0x8C; // BinaryNodeChildOption
    public const nint m_bApplyToFootMotion = 0x90; // bool
    public const nint m_bApplyChannelsSeparately = 0x91; // bool
    public const nint m_bUseModelSpace = 0x92; // bool
}

public static class CAimConstraint { // CBaseConstraint
    public const nint m_qAimOffset = 0x70; // Quaternion
    public const nint m_nUpType = 0x80; // uint32_t
}

public static class CAimMatrixUpdateNode { // CUnaryUpdateNode
    public const nint m_opFixedSettings = 0x70; // AimMatrixOpFixedSettings_t
    public const nint m_target = 0x148; // AnimVectorSource
    public const nint m_paramIndex = 0x14C; // CAnimParamHandle
    public const nint m_hSequence = 0x150; // HSequence
    public const nint m_bResetChild = 0x154; // bool
    public const nint m_bLockWhenWaning = 0x155; // bool
}

public static class CAnimActionUpdater {
}

public static class CAnimActivity {
    public const nint m_name = 0x0; // CBufferString
    public const nint m_nActivity = 0x10; // int32_t
    public const nint m_nFlags = 0x14; // int32_t
    public const nint m_nWeight = 0x18; // int32_t
}

public static class CAnimAttachment {
    public const nint m_influenceRotations = 0x0; // Quaternion[3]
    public const nint m_influenceOffsets = 0x30; // VectorAligned[3]
    public const nint m_influenceIndices = 0x60; // int32_t[3]
    public const nint m_influenceWeights = 0x6C; // float[3]
    public const nint m_numInfluences = 0x78; // uint8_t
}

public static class CAnimBone {
    public const nint m_name = 0x0; // CBufferString
    public const nint m_parent = 0x10; // int32_t
    public const nint m_pos = 0x14; // Vector
    public const nint m_quat = 0x20; // QuaternionStorage
    public const nint m_scale = 0x30; // float
    public const nint m_qAlignment = 0x34; // QuaternionStorage
    public const nint m_flags = 0x44; // int32_t
}

public static class CAnimBoneDifference {
    public const nint m_name = 0x0; // CBufferString
    public const nint m_parent = 0x10; // CBufferString
    public const nint m_posError = 0x20; // Vector
    public const nint m_bHasRotation = 0x2C; // bool
    public const nint m_bHasMovement = 0x2D; // bool
}

public static class CAnimComponentUpdater {
    public const nint m_name = 0x18; // CUtlString
    public const nint m_id = 0x20; // AnimComponentID
    public const nint m_networkMode = 0x24; // AnimNodeNetworkMode
    public const nint m_bStartEnabled = 0x28; // bool
}

public static class CAnimCycle { // CCycleBase
}

public static class CAnimData {
    public const nint m_name = 0x10; // CBufferString
    public const nint m_animArray = 0x20; // CUtlVector<CAnimDesc>
    public const nint m_decoderArray = 0x38; // CUtlVector<CAnimDecoder>
    public const nint m_nMaxUniqueFrameIndex = 0x50; // int32_t
    public const nint m_segmentArray = 0x58; // CUtlVector<CAnimFrameSegment>
}

public static class CAnimDataChannelDesc {
    public const nint m_szChannelClass = 0x0; // CBufferString
    public const nint m_szVariableName = 0x10; // CBufferString
    public const nint m_nFlags = 0x20; // int32_t
    public const nint m_nType = 0x24; // int32_t
    public const nint m_szGrouping = 0x28; // CBufferString
    public const nint m_szDescription = 0x38; // CBufferString
    public const nint m_szElementNameArray = 0x48; // CUtlVector<CBufferString>
    public const nint m_nElementIndexArray = 0x60; // CUtlVector<int32_t>
    public const nint m_nElementMaskArray = 0x78; // CUtlVector<uint32_t>
}

public static class CAnimDecoder {
    public const nint m_szName = 0x0; // CBufferString
    public const nint m_nVersion = 0x10; // int32_t
    public const nint m_nType = 0x14; // int32_t
}

public static class CAnimDemoCaptureSettings {
    public const nint m_rangeBoneChainLength = 0x0; // Vector2D
    public const nint m_rangeMaxSplineErrorRotation = 0x8; // Vector2D
    public const nint m_flMaxSplineErrorTranslation = 0x10; // float
    public const nint m_flMaxSplineErrorScale = 0x14; // float
    public const nint m_flIkRotation_MaxSplineError = 0x18; // float
    public const nint m_flIkTranslation_MaxSplineError = 0x1C; // float
    public const nint m_flMaxQuantizationErrorRotation = 0x20; // float
    public const nint m_flMaxQuantizationErrorTranslation = 0x24; // float
    public const nint m_flMaxQuantizationErrorScale = 0x28; // float
    public const nint m_flIkRotation_MaxQuantizationError = 0x2C; // float
    public const nint m_flIkTranslation_MaxQuantizationError = 0x30; // float
    public const nint m_baseSequence = 0x38; // CUtlString
    public const nint m_nBaseSequenceFrame = 0x40; // int32_t
    public const nint m_boneSelectionMode = 0x44; // EDemoBoneSelectionMode
    public const nint m_bones = 0x48; // CUtlVector<BoneDemoCaptureSettings_t>
    public const nint m_ikChains = 0x60; // CUtlVector<IKDemoCaptureSettings_t>
}

public static class CAnimDesc {
    public const nint m_name = 0x0; // CBufferString
    public const nint m_flags = 0x10; // CAnimDesc_Flag
    public const nint fps = 0x18; // float
    public const nint m_Data = 0x20; // CAnimEncodedFrames
    public const nint m_movementArray = 0xF8; // CUtlVector<CAnimMovement>
    public const nint m_eventArray = 0x110; // CUtlVector<CAnimEventDefinition>
    public const nint m_activityArray = 0x128; // CUtlVector<CAnimActivity>
    public const nint m_hierarchyArray = 0x140; // CUtlVector<CAnimLocalHierarchy>
    public const nint framestalltime = 0x158; // float
    public const nint m_vecRootMin = 0x15C; // Vector
    public const nint m_vecRootMax = 0x168; // Vector
    public const nint m_vecBoneWorldMin = 0x178; // CUtlVector<Vector>
    public const nint m_vecBoneWorldMax = 0x190; // CUtlVector<Vector>
    public const nint m_sequenceParams = 0x1A8; // CAnimSequenceParams
}

public static class CAnimDesc_Flag {
    public const nint m_bLooping = 0x0; // bool
    public const nint m_bAllZeros = 0x1; // bool
    public const nint m_bHidden = 0x2; // bool
    public const nint m_bDelta = 0x3; // bool
    public const nint m_bLegacyWorldspace = 0x4; // bool
    public const nint m_bModelDoc = 0x5; // bool
    public const nint m_bImplicitSeqIgnoreDelta = 0x6; // bool
    public const nint m_bAnimGraphAdditive = 0x7; // bool
}

public static class CAnimEncodeDifference {
    public const nint m_boneArray = 0x0; // CUtlVector<CAnimBoneDifference>
    public const nint m_morphArray = 0x18; // CUtlVector<CAnimMorphDifference>
    public const nint m_userArray = 0x30; // CUtlVector<CAnimUserDifference>
    public const nint m_bHasRotationBitArray = 0x48; // CUtlVector<uint8_t>
    public const nint m_bHasMovementBitArray = 0x60; // CUtlVector<uint8_t>
    public const nint m_bHasMorphBitArray = 0x78; // CUtlVector<uint8_t>
    public const nint m_bHasUserBitArray = 0x90; // CUtlVector<uint8_t>
}

public static class CAnimEncodedFrames {
    public const nint m_fileName = 0x0; // CBufferString
    public const nint m_nFrames = 0x10; // int32_t
    public const nint m_nFramesPerBlock = 0x14; // int32_t
    public const nint m_frameblockArray = 0x18; // CUtlVector<CAnimFrameBlockAnim>
    public const nint m_usageDifferences = 0x30; // CAnimEncodeDifference
}

public static class CAnimEnum {
    public const nint m_value = 0x0; // uint8_t
}

public static class CAnimEventDefinition {
    public const nint m_nFrame = 0x8; // int32_t
    public const nint m_flCycle = 0xC; // float
    public const nint m_EventData = 0x10; // KeyValues3
    public const nint m_sLegacyOptions = 0x20; // CBufferString
    public const nint m_sEventName = 0x30; // CGlobalSymbol
}

public static class CAnimFoot {
    public const nint m_name = 0x0; // CUtlString
    public const nint m_vBallOffset = 0x8; // Vector
    public const nint m_vHeelOffset = 0x14; // Vector
    public const nint m_ankleBoneIndex = 0x20; // int32_t
    public const nint m_toeBoneIndex = 0x24; // int32_t
}

public static class CAnimFrameBlockAnim {
    public const nint m_nStartFrame = 0x0; // int32_t
    public const nint m_nEndFrame = 0x4; // int32_t
    public const nint m_segmentIndexArray = 0x8; // CUtlVector<int32_t>
}

public static class CAnimFrameSegment {
    public const nint m_nUniqueFrameIndex = 0x0; // int32_t
    public const nint m_nLocalElementMasks = 0x4; // uint32_t
    public const nint m_nLocalChannel = 0x8; // int32_t
    public const nint m_container = 0x10; // CUtlBinaryBlock
}

public static class CAnimGraphDebugReplay {
    public const nint m_animGraphFileName = 0x40; // CUtlString
    public const nint m_frameList = 0x48; // CUtlVector<CSmartPtr<CAnimReplayFrame>>
    public const nint m_startIndex = 0x60; // int32_t
    public const nint m_writeIndex = 0x64; // int32_t
    public const nint m_frameCount = 0x68; // int32_t
}

public static class CAnimGraphModelBinding {
    public const nint m_modelName = 0x8; // CUtlString
    public const nint m_pSharedData = 0x10; // CSmartPtr<CAnimUpdateSharedData>
}

public static class CAnimGraphNetworkSettings { // CAnimGraphSettingsGroup
    public const nint m_bNetworkingEnabled = 0x20; // bool
}

public static class CAnimGraphSettingsGroup {
}

public static class CAnimGraphSettingsManager {
    public const nint m_settingsGroups = 0x18; // CUtlVector<CSmartPtr<CAnimGraphSettingsGroup>>
}

public static class CAnimInputDamping {
    public const nint m_speedFunction = 0x8; // DampingSpeedFunction
    public const nint m_fSpeedScale = 0xC; // float
}

public static class CAnimKeyData {
    public const nint m_name = 0x0; // CBufferString
    public const nint m_boneArray = 0x10; // CUtlVector<CAnimBone>
    public const nint m_userArray = 0x28; // CUtlVector<CAnimUser>
    public const nint m_morphArray = 0x40; // CUtlVector<CBufferString>
    public const nint m_nChannelElements = 0x58; // int32_t
    public const nint m_dataChannelArray = 0x60; // CUtlVector<CAnimDataChannelDesc>
}

public static class CAnimLocalHierarchy {
    public const nint m_sBone = 0x0; // CBufferString
    public const nint m_sNewParent = 0x10; // CBufferString
    public const nint m_nStartFrame = 0x20; // int32_t
    public const nint m_nPeakFrame = 0x24; // int32_t
    public const nint m_nTailFrame = 0x28; // int32_t
    public const nint m_nEndFrame = 0x2C; // int32_t
}

public static class CAnimMorphDifference {
    public const nint m_name = 0x0; // CBufferString
}

public static class CAnimMotorUpdaterBase {
    public const nint m_name = 0x10; // CUtlString
    public const nint m_bDefault = 0x18; // bool
}

public static class CAnimMovement {
    public const nint endframe = 0x0; // int32_t
    public const nint motionflags = 0x4; // int32_t
    public const nint v0 = 0x8; // float
    public const nint v1 = 0xC; // float
    public const nint angle = 0x10; // float
    public const nint vector = 0x14; // Vector
    public const nint position = 0x20; // Vector
}

public static class CAnimNodePath {
    public const nint m_path = 0x0; // AnimNodeID[11]
    public const nint m_nCount = 0x2C; // int32_t
}

public static class CAnimParamHandle {
    public const nint m_type = 0x0; // AnimParamType_t
    public const nint m_index = 0x1; // uint8_t
}

public static class CAnimParamHandleMap {
    public const nint m_list = 0x0; // CUtlHashtable<uint16_t,int16_t>
}

public static class CAnimParameterBase {
    public const nint m_name = 0x18; // CGlobalSymbol
    public const nint m_group = 0x20; // CUtlString
    public const nint m_id = 0x28; // AnimParamID
    public const nint m_componentName = 0x40; // CUtlString
    public const nint m_bNetworkingRequested = 0x60; // bool
    public const nint m_bIsReferenced = 0x61; // bool
}

public static class CAnimParameterManagerUpdater {
    public const nint m_parameters = 0x18; // CUtlVector<CSmartPtr<CAnimParameterBase>>
    public const nint m_idToIndexMap = 0x30; // CUtlHashtable<AnimParamID,int32_t>
    public const nint m_nameToIndexMap = 0x50; // CUtlHashtable<CUtlString,int32_t>
    public const nint m_indexToHandle = 0x70; // CUtlVector<CAnimParamHandle>
    public const nint m_autoResetParams = 0x88; // CUtlVector<CUtlPair<CAnimParamHandle,CAnimVariant>>
    public const nint m_autoResetMap = 0xA0; // CUtlHashtable<CAnimParamHandle,int16_t>
}

public static class CAnimReplayFrame {
    public const nint m_inputDataBlocks = 0x10; // CUtlVector<CUtlBinaryBlock>
    public const nint m_instanceData = 0x28; // CUtlBinaryBlock
    public const nint m_startingLocalToWorldTransform = 0x40; // CTransform
    public const nint m_localToWorldTransform = 0x60; // CTransform
    public const nint m_timeStamp = 0x80; // float
}

public static class CAnimScriptComponentUpdater { // CAnimComponentUpdater
    public const nint m_hScript = 0x30; // AnimScriptHandle
}

public static class CAnimScriptManager {
    public const nint m_scriptInfo = 0x10; // CUtlVector<ScriptInfo_t>
}

public static class CAnimSequenceParams {
    public const nint m_flFadeInTime = 0x0; // float
    public const nint m_flFadeOutTime = 0x4; // float
}

public static class CAnimSkeleton {
    public const nint m_localSpaceTransforms = 0x10; // CUtlVector<CTransform>
    public const nint m_modelSpaceTransforms = 0x28; // CUtlVector<CTransform>
    public const nint m_boneNames = 0x40; // CUtlVector<CUtlString>
    public const nint m_children = 0x58; // CUtlVector<CUtlVector<int32_t>>
    public const nint m_parents = 0x70; // CUtlVector<int32_t>
    public const nint m_feet = 0x88; // CUtlVector<CAnimFoot>
    public const nint m_morphNames = 0xA0; // CUtlVector<CUtlString>
    public const nint m_lodBoneCounts = 0xB8; // CUtlVector<int32_t>
}

public static class CAnimStateMachineUpdater {
    public const nint m_states = 0x8; // CUtlVector<CStateUpdateData>
    public const nint m_transitions = 0x20; // CUtlVector<CTransitionUpdateData>
    public const nint m_startStateIndex = 0x50; // int32_t
}

public static class CAnimTagBase {
    public const nint m_name = 0x18; // CGlobalSymbol
    public const nint m_group = 0x20; // CGlobalSymbol
    public const nint m_tagID = 0x28; // AnimTagID
    public const nint m_bIsReferenced = 0x40; // bool
}

public static class CAnimTagManagerUpdater {
    public const nint m_tags = 0x18; // CUtlVector<CSmartPtr<CAnimTagBase>>
}

public static class CAnimUpdateNodeBase {
    public const nint m_nodePath = 0x18; // CAnimNodePath
    public const nint m_networkMode = 0x48; // AnimNodeNetworkMode
    public const nint m_name = 0x50; // CUtlString
}

public static class CAnimUpdateNodeRef {
    public const nint m_nodeIndex = 0x8; // int32_t
}

public static class CAnimUpdateSharedData {
    public const nint m_nodes = 0x10; // CUtlVector<CSmartPtr<CAnimUpdateNodeBase>>
    public const nint m_nodeIndexMap = 0x28; // CUtlHashtable<CAnimNodePath,int32_t>
    public const nint m_components = 0x48; // CUtlVector<CSmartPtr<CAnimComponentUpdater>>
    public const nint m_pParamListUpdater = 0x60; // CSmartPtr<CAnimParameterManagerUpdater>
    public const nint m_pTagManagerUpdater = 0x68; // CSmartPtr<CAnimTagManagerUpdater>
    public const nint m_scriptManager = 0x70; // CSmartPtr<CAnimScriptManager>
    public const nint m_settings = 0x78; // CAnimGraphSettingsManager
    public const nint m_pStaticPoseCache = 0xA8; // CSmartPtr<CStaticPoseCacheBuilder>
    public const nint m_pSkeleton = 0xB0; // CSmartPtr<CAnimSkeleton>
    public const nint m_rootNodePath = 0xB8; // CAnimNodePath
}

public static class CAnimUser {
    public const nint m_name = 0x0; // CBufferString
    public const nint m_nType = 0x10; // int32_t
}

public static class CAnimUserDifference {
    public const nint m_name = 0x0; // CBufferString
    public const nint m_nType = 0x10; // int32_t
}

public static class CAnimationGraphVisualizerAxis { // CAnimationGraphVisualizerPrimitiveBase
    public const nint m_xWsTransform = 0x40; // CTransform
    public const nint m_flAxisSize = 0x60; // float
}

public static class CAnimationGraphVisualizerLine { // CAnimationGraphVisualizerPrimitiveBase
    public const nint m_vWsPositionStart = 0x40; // VectorAligned
    public const nint m_vWsPositionEnd = 0x50; // VectorAligned
    public const nint m_Color = 0x60; // Color
}

public static class CAnimationGraphVisualizerPie { // CAnimationGraphVisualizerPrimitiveBase
    public const nint m_vWsCenter = 0x40; // VectorAligned
    public const nint m_vWsStart = 0x50; // VectorAligned
    public const nint m_vWsEnd = 0x60; // VectorAligned
    public const nint m_Color = 0x70; // Color
}

public static class CAnimationGraphVisualizerPrimitiveBase {
    public const nint m_Type = 0x8; // CAnimationGraphVisualizerPrimitiveType
    public const nint m_OwningAnimNodePaths = 0xC; // AnimNodeID[11]
    public const nint m_nOwningAnimNodePathCount = 0x38; // int32_t
}

public static class CAnimationGraphVisualizerSphere { // CAnimationGraphVisualizerPrimitiveBase
    public const nint m_vWsPosition = 0x40; // VectorAligned
    public const nint m_flRadius = 0x50; // float
    public const nint m_Color = 0x54; // Color
}

public static class CAnimationGraphVisualizerText { // CAnimationGraphVisualizerPrimitiveBase
    public const nint m_vWsPosition = 0x40; // VectorAligned
    public const nint m_Color = 0x50; // Color
    public const nint m_Text = 0x58; // CUtlString
}

public static class CAnimationGroup {
    public const nint m_nFlags = 0x10; // uint32_t
    public const nint m_name = 0x18; // CBufferString
    public const nint m_localHAnimArray_Handle = 0x60; // CUtlVector<CStrongHandle<InfoForResourceTypeCAnimData>>
    public const nint m_includedGroupArray_Handle = 0x78; // CUtlVector<CStrongHandle<InfoForResourceTypeCAnimationGroup>>
    public const nint m_directHSeqGroup_Handle = 0x90; // CStrongHandle<InfoForResourceTypeCSequenceGroupData>
    public const nint m_decodeKey = 0x98; // CAnimKeyData
    public const nint m_szScripts = 0x110; // CUtlVector<CBufferString>
}

public static class CAttachment {
    public const nint m_name = 0x0; // CUtlString
    public const nint m_influenceNames = 0x8; // CUtlString[3]
    public const nint m_vInfluenceRotations = 0x20; // Quaternion[3]
    public const nint m_vInfluenceOffsets = 0x50; // Vector[3]
    public const nint m_influenceWeights = 0x74; // float[3]
    public const nint m_bInfluenceRootTransform = 0x80; // bool[3]
    public const nint m_nInfluences = 0x83; // uint8_t
    public const nint m_bIgnoreRotation = 0x84; // bool
}

public static class CAudioAnimTag { // CAnimTagBase
    public const nint m_clipName = 0x50; // CUtlString
    public const nint m_attachmentName = 0x58; // CUtlString
    public const nint m_flVolume = 0x60; // float
    public const nint m_bStopWhenTagEnds = 0x64; // bool
    public const nint m_bStopWhenGraphEnds = 0x65; // bool
    public const nint m_bPlayOnServer = 0x66; // bool
    public const nint m_bPlayOnClient = 0x67; // bool
}

public static class CBaseConstraint { // CBoneConstraintBase
    public const nint m_name = 0x28; // CUtlString
    public const nint m_vUpVector = 0x30; // Vector
    public const nint m_slaves = 0x40; // CUtlVector<CConstraintSlave>
    public const nint m_targets = 0x58; // CUtlVector<CConstraintTarget>
}

public static class CBinaryUpdateNode { // CAnimUpdateNodeBase
    public const nint m_pChild1 = 0x58; // CAnimUpdateNodeRef
    public const nint m_pChild2 = 0x68; // CAnimUpdateNodeRef
    public const nint m_timingBehavior = 0x78; // BinaryNodeTiming
    public const nint m_flTimingBlend = 0x7C; // float
    public const nint m_bResetChild1 = 0x80; // bool
    public const nint m_bResetChild2 = 0x81; // bool
}

public static class CBindPoseUpdateNode { // CLeafUpdateNode
}

public static class CBlend2DUpdateNode { // CAnimUpdateNodeBase
    public const nint m_items = 0x60; // CUtlVector<BlendItem_t>
    public const nint m_tags = 0x78; // CUtlVector<TagSpan_t>
    public const nint m_paramSpans = 0x90; // CParamSpanUpdater
    public const nint m_nodeItemIndices = 0xA8; // CUtlVector<int32_t>
    public const nint m_damping = 0xC0; // CAnimInputDamping
    public const nint m_blendSourceX = 0xD0; // AnimValueSource
    public const nint m_paramX = 0xD4; // CAnimParamHandle
    public const nint m_blendSourceY = 0xD8; // AnimValueSource
    public const nint m_paramY = 0xDC; // CAnimParamHandle
    public const nint m_eBlendMode = 0xE0; // Blend2DMode
    public const nint m_playbackSpeed = 0xE4; // float
    public const nint m_bLoop = 0xE8; // bool
    public const nint m_bLockBlendOnReset = 0xE9; // bool
    public const nint m_bLockWhenWaning = 0xEA; // bool
    public const nint m_bAnimEventsAndTagsOnMostWeightedOnly = 0xEB; // bool
}

public static class CBlendCurve {
    public const nint m_flControlPoint1 = 0x0; // float
    public const nint m_flControlPoint2 = 0x4; // float
}

public static class CBlendUpdateNode { // CAnimUpdateNodeBase
    public const nint m_children = 0x60; // CUtlVector<CAnimUpdateNodeRef>
    public const nint m_sortedOrder = 0x78; // CUtlVector<uint8_t>
    public const nint m_targetValues = 0x90; // CUtlVector<float>
    public const nint m_blendValueSource = 0xAC; // AnimValueSource
    public const nint m_paramIndex = 0xB0; // CAnimParamHandle
    public const nint m_damping = 0xB8; // CAnimInputDamping
    public const nint m_blendKeyType = 0xC8; // BlendKeyType
    public const nint m_bLockBlendOnReset = 0xCC; // bool
    public const nint m_bSyncCycles = 0xCD; // bool
    public const nint m_bLoop = 0xCE; // bool
    public const nint m_bLockWhenWaning = 0xCF; // bool
}

public static class CBlockSelectionMetricEvaluator { // CMotionMetricEvaluator
}

public static class CBodyGroupAnimTag { // CAnimTagBase
    public const nint m_nPriority = 0x50; // int32_t
    public const nint m_bodyGroupSettings = 0x58; // CUtlVector<CBodyGroupSetting>
}

public static class CBodyGroupSetting {
    public const nint m_BodyGroupName = 0x0; // CUtlString
    public const nint m_nBodyGroupOption = 0x8; // int32_t
}

public static class CBoneConstraintBase {
}

public static class CBoneConstraintDotToMorph { // CBoneConstraintBase
    public const nint m_sBoneName = 0x28; // CUtlString
    public const nint m_sTargetBoneName = 0x30; // CUtlString
    public const nint m_sMorphChannelName = 0x38; // CUtlString
    public const nint m_flRemap = 0x40; // float[4]
}

public static class CBoneConstraintPoseSpaceBone { // CBaseConstraint
    public const nint m_inputList = 0x70; // CUtlVector<CBoneConstraintPoseSpaceBone::Input_t>
}

public static class CBoneConstraintPoseSpaceBone_Input_t {
    public const nint m_inputValue = 0x0; // Vector
    public const nint m_outputTransformList = 0x10; // CUtlVector<CTransform>
}

public static class CBoneConstraintPoseSpaceMorph { // CBoneConstraintBase
    public const nint m_sBoneName = 0x28; // CUtlString
    public const nint m_sAttachmentName = 0x30; // CUtlString
    public const nint m_outputMorph = 0x38; // CUtlVector<CUtlString>
    public const nint m_inputList = 0x50; // CUtlVector<CBoneConstraintPoseSpaceMorph::Input_t>
    public const nint m_bClamp = 0x68; // bool
}

public static class CBoneConstraintPoseSpaceMorph_Input_t {
    public const nint m_inputValue = 0x0; // Vector
    public const nint m_outputWeightList = 0x10; // CUtlVector<float>
}

public static class CBoneMaskUpdateNode { // CBinaryUpdateNode
    public const nint m_nWeightListIndex = 0x8C; // int32_t
    public const nint m_flRootMotionBlend = 0x90; // float
    public const nint m_blendSpace = 0x94; // BoneMaskBlendSpace
    public const nint m_footMotionTiming = 0x98; // BinaryNodeChildOption
    public const nint m_bUseBlendScale = 0x9C; // bool
    public const nint m_blendValueSource = 0xA0; // AnimValueSource
    public const nint m_hBlendParameter = 0xA4; // CAnimParamHandle
}

public static class CBonePositionMetricEvaluator { // CMotionMetricEvaluator
    public const nint m_nBoneIndex = 0x50; // int32_t
}

public static class CBoneVelocityMetricEvaluator { // CMotionMetricEvaluator
    public const nint m_nBoneIndex = 0x50; // int32_t
}

public static class CBoolAnimParameter { // CConcreteAnimParameter
    public const nint m_bDefaultValue = 0x78; // bool
}

public static class CCPPScriptComponentUpdater { // CAnimComponentUpdater
    public const nint m_scriptsToRun = 0x30; // CUtlVector<CGlobalSymbol>
}

public static class CCachedPose {
    public const nint m_transforms = 0x8; // CUtlVector<CTransform>
    public const nint m_morphWeights = 0x20; // CUtlVector<float>
    public const nint m_hSequence = 0x38; // HSequence
    public const nint m_flCycle = 0x3C; // float
}

public static class CChoiceUpdateNode { // CAnimUpdateNodeBase
    public const nint m_children = 0x58; // CUtlVector<CAnimUpdateNodeRef>
    public const nint m_weights = 0x70; // CUtlVector<float>
    public const nint m_blendTimes = 0x88; // CUtlVector<float>
    public const nint m_choiceMethod = 0xA0; // ChoiceMethod
    public const nint m_choiceChangeMethod = 0xA4; // ChoiceChangeMethod
    public const nint m_blendMethod = 0xA8; // ChoiceBlendMethod
    public const nint m_blendTime = 0xAC; // float
    public const nint m_bCrossFade = 0xB0; // bool
    public const nint m_bResetChosen = 0xB1; // bool
    public const nint m_bDontResetSameSelection = 0xB2; // bool
}

public static class CChoreoUpdateNode { // CUnaryUpdateNode
}

public static class CClothSettingsAnimTag { // CAnimTagBase
    public const nint m_flStiffness = 0x50; // float
    public const nint m_flEaseIn = 0x54; // float
    public const nint m_flEaseOut = 0x58; // float
    public const nint m_nVertexSet = 0x60; // CUtlString
}

public static class CCompressorGroup {
    public const nint m_nTotalElementCount = 0x0; // int32_t
    public const nint m_szChannelClass = 0x8; // CUtlVector<char*>
    public const nint m_szVariableName = 0x20; // CUtlVector<char*>
    public const nint m_nType = 0x38; // CUtlVector<fieldtype_t>
    public const nint m_nFlags = 0x50; // CUtlVector<int32_t>
    public const nint m_szGrouping = 0x68; // CUtlVector<CUtlString>
    public const nint m_nCompressorIndex = 0x80; // CUtlVector<int32_t>
    public const nint m_szElementNames = 0x98; // CUtlVector<CUtlVector<char*>>
    public const nint m_nElementUniqueID = 0xB0; // CUtlVector<CUtlVector<int32_t>>
    public const nint m_nElementMask = 0xC8; // CUtlVector<uint32_t>
    public const nint m_vectorCompressor = 0xF8; // CUtlVector<CCompressor<Vector>*>
    public const nint m_quaternionCompressor = 0x110; // CUtlVector<CCompressor<QuaternionStorage>*>
    public const nint m_intCompressor = 0x128; // CUtlVector<CCompressor<int32_t>*>
    public const nint m_boolCompressor = 0x140; // CUtlVector<CCompressor<bool>*>
    public const nint m_colorCompressor = 0x158; // CUtlVector<CCompressor<Color>*>
    public const nint m_vector2DCompressor = 0x170; // CUtlVector<CCompressor<Vector2D>*>
    public const nint m_vector4DCompressor = 0x188; // CUtlVector<CCompressor<Vector4D>*>
}

public static class CConcreteAnimParameter { // CAnimParameterBase
    public const nint m_previewButton = 0x68; // AnimParamButton_t
    public const nint m_eNetworkSetting = 0x6C; // AnimParamNetworkSetting
    public const nint m_bUseMostRecentValue = 0x70; // bool
    public const nint m_bAutoReset = 0x71; // bool
    public const nint m_bGameWritable = 0x72; // bool
    public const nint m_bGraphWritable = 0x73; // bool
}

public static class CConstraintSlave {
    public const nint m_qBaseOrientation = 0x0; // Quaternion
    public const nint m_vBasePosition = 0x10; // Vector
    public const nint m_nBoneHash = 0x1C; // uint32_t
    public const nint m_flWeight = 0x20; // float
    public const nint m_sName = 0x28; // CUtlString
}

public static class CConstraintTarget {
    public const nint m_qOffset = 0x20; // Quaternion
    public const nint m_vOffset = 0x30; // Vector
    public const nint m_nBoneHash = 0x3C; // uint32_t
    public const nint m_sName = 0x40; // CUtlString
    public const nint m_flWeight = 0x48; // float
    public const nint m_bIsAttachment = 0x59; // bool
}

public static class CCurrentRotationVelocityMetricEvaluator { // CMotionMetricEvaluator
}

public static class CCurrentVelocityMetricEvaluator { // CMotionMetricEvaluator
}

public static class CCycleBase {
    public const nint m_flCycle = 0x0; // float
}

public static class CCycleControlClipUpdateNode { // CLeafUpdateNode
    public const nint m_tags = 0x60; // CUtlVector<TagSpan_t>
    public const nint m_hSequence = 0x7C; // HSequence
    public const nint m_duration = 0x80; // float
    public const nint m_valueSource = 0x84; // AnimValueSource
    public const nint m_paramIndex = 0x88; // CAnimParamHandle
}

public static class CCycleControlUpdateNode { // CUnaryUpdateNode
    public const nint m_valueSource = 0x68; // AnimValueSource
    public const nint m_paramIndex = 0x6C; // CAnimParamHandle
}

public static class CDampedPathAnimMotorUpdater { // CPathAnimMotorUpdaterBase
    public const nint m_flAnticipationTime = 0x2C; // float
    public const nint m_flMinSpeedScale = 0x30; // float
    public const nint m_hAnticipationPosParam = 0x34; // CAnimParamHandle
    public const nint m_hAnticipationHeadingParam = 0x36; // CAnimParamHandle
    public const nint m_flSpringConstant = 0x38; // float
    public const nint m_flMinSpringTension = 0x3C; // float
    public const nint m_flMaxSpringTension = 0x40; // float
}

public static class CDampedValueComponentUpdater { // CAnimComponentUpdater
    public const nint m_items = 0x30; // CUtlVector<CDampedValueUpdateItem>
}

public static class CDampedValueUpdateItem {
    public const nint m_damping = 0x0; // CAnimInputDamping
    public const nint m_hParamIn = 0x18; // CAnimParamHandle
    public const nint m_hParamOut = 0x1A; // CAnimParamHandle
}

public static class CDemoSettingsComponentUpdater { // CAnimComponentUpdater
    public const nint m_settings = 0x30; // CAnimDemoCaptureSettings
}

public static class CDirectPlaybackTagData {
    public const nint m_sequenceName = 0x0; // CUtlString
    public const nint m_tags = 0x8; // CUtlVector<TagSpan_t>
}

public static class CDirectPlaybackUpdateNode { // CUnaryUpdateNode
    public const nint m_bFinishEarly = 0x6C; // bool
    public const nint m_bResetOnFinish = 0x6D; // bool
    public const nint m_allTags = 0x70; // CUtlVector<CDirectPlaybackTagData>
}

public static class CDirectionalBlendUpdateNode { // CLeafUpdateNode
    public const nint m_hSequences = 0x5C; // HSequence[8]
    public const nint m_damping = 0x80; // CAnimInputDamping
    public const nint m_blendValueSource = 0x90; // AnimValueSource
    public const nint m_paramIndex = 0x94; // CAnimParamHandle
    public const nint m_playbackSpeed = 0x98; // float
    public const nint m_duration = 0x9C; // float
    public const nint m_bLoop = 0xA0; // bool
    public const nint m_bLockBlendOnReset = 0xA1; // bool
}

public static class CDistanceRemainingMetricEvaluator { // CMotionMetricEvaluator
    public const nint m_flMaxDistance = 0x50; // float
    public const nint m_flMinDistance = 0x54; // float
    public const nint m_flStartGoalFilterDistance = 0x58; // float
    public const nint m_flMaxGoalOvershootScale = 0x5C; // float
    public const nint m_bFilterFixedMinDistance = 0x60; // bool
    public const nint m_bFilterGoalDistance = 0x61; // bool
    public const nint m_bFilterGoalOvershoot = 0x62; // bool
}

public static class CDrawCullingData {
    public const nint m_vConeApex = 0x0; // Vector
    public const nint m_ConeAxis = 0xC; // int8_t[3]
    public const nint m_ConeCutoff = 0xF; // int8_t
}

public static class CEditableMotionGraph { // CMotionGraph
}

public static class CEmitTagActionUpdater { // CAnimActionUpdater
    public const nint m_nTagIndex = 0x18; // int32_t
    public const nint m_bIsZeroDuration = 0x1C; // bool
}

public static class CEnumAnimParameter { // CConcreteAnimParameter
    public const nint m_defaultValue = 0x80; // uint8_t
    public const nint m_enumOptions = 0x88; // CUtlVector<CUtlString>
}

public static class CExpressionActionUpdater { // CAnimActionUpdater
    public const nint m_hParam = 0x18; // CAnimParamHandle
    public const nint m_eParamType = 0x1A; // AnimParamType_t
    public const nint m_hScript = 0x1C; // AnimScriptHandle
}

public static class CFlexController {
    public const nint m_szName = 0x0; // CUtlString
    public const nint m_szType = 0x8; // CUtlString
    public const nint min = 0x10; // float
    public const nint max = 0x14; // float
}

public static class CFlexDesc {
    public const nint m_szFacs = 0x0; // CUtlString
}

public static class CFlexOp {
    public const nint m_OpCode = 0x0; // FlexOpCode_t
    public const nint m_Data = 0x4; // int32_t
}

public static class CFlexRule {
    public const nint m_nFlex = 0x0; // int32_t
    public const nint m_FlexOps = 0x8; // CUtlVector<CFlexOp>
}

public static class CFloatAnimParameter { // CConcreteAnimParameter
    public const nint m_fDefaultValue = 0x78; // float
    public const nint m_fMinValue = 0x7C; // float
    public const nint m_fMaxValue = 0x80; // float
    public const nint m_bInterpolate = 0x84; // bool
}

public static class CFollowAttachmentUpdateNode { // CUnaryUpdateNode
    public const nint m_opFixedData = 0x70; // FollowAttachmentSettings_t
}

public static class CFollowPathUpdateNode { // CUnaryUpdateNode
    public const nint m_flBlendOutTime = 0x6C; // float
    public const nint m_bBlockNonPathMovement = 0x70; // bool
    public const nint m_bStopFeetAtGoal = 0x71; // bool
    public const nint m_bScaleSpeed = 0x72; // bool
    public const nint m_flScale = 0x74; // float
    public const nint m_flMinAngle = 0x78; // float
    public const nint m_flMaxAngle = 0x7C; // float
    public const nint m_flSpeedScaleBlending = 0x80; // float
    public const nint m_turnDamping = 0x88; // CAnimInputDamping
    public const nint m_facingTarget = 0x98; // AnimValueSource
    public const nint m_hParam = 0x9C; // CAnimParamHandle
    public const nint m_flTurnToFaceOffset = 0xA0; // float
    public const nint m_bTurnToFace = 0xA4; // bool
}

public static class CFootAdjustmentUpdateNode { // CUnaryUpdateNode
    public const nint m_clips = 0x70; // CUtlVector<HSequence>
    public const nint m_hBasePoseCacheHandle = 0x88; // CPoseHandle
    public const nint m_facingTarget = 0x8C; // CAnimParamHandle
    public const nint m_flTurnTimeMin = 0x90; // float
    public const nint m_flTurnTimeMax = 0x94; // float
    public const nint m_flStepHeightMax = 0x98; // float
    public const nint m_flStepHeightMaxAngle = 0x9C; // float
    public const nint m_bResetChild = 0xA0; // bool
    public const nint m_bAnimationDriven = 0xA1; // bool
}

public static class CFootCycle { // CCycleBase
}

public static class CFootCycleDefinition {
    public const nint m_vStancePositionMS = 0x0; // Vector
    public const nint m_vMidpointPositionMS = 0xC; // Vector
    public const nint m_flStanceDirectionMS = 0x18; // float
    public const nint m_vToStrideStartPos = 0x1C; // Vector
    public const nint m_stanceCycle = 0x28; // CAnimCycle
    public const nint m_footLiftCycle = 0x2C; // CFootCycle
    public const nint m_footOffCycle = 0x30; // CFootCycle
    public const nint m_footStrikeCycle = 0x34; // CFootCycle
    public const nint m_footLandCycle = 0x38; // CFootCycle
}

public static class CFootCycleMetricEvaluator { // CMotionMetricEvaluator
    public const nint m_footIndices = 0x50; // CUtlVector<int32_t>
}

public static class CFootDefinition {
    public const nint m_name = 0x0; // CUtlString
    public const nint m_ankleBoneName = 0x8; // CUtlString
    public const nint m_toeBoneName = 0x10; // CUtlString
    public const nint m_vBallOffset = 0x18; // Vector
    public const nint m_vHeelOffset = 0x24; // Vector
    public const nint m_flFootLength = 0x30; // float
    public const nint m_flBindPoseDirectionMS = 0x34; // float
    public const nint m_flTraceHeight = 0x38; // float
    public const nint m_flTraceRadius = 0x3C; // float
}

public static class CFootFallAnimTag { // CAnimTagBase
    public const nint m_foot = 0x50; // FootFallTagFoot_t
}

public static class CFootLockUpdateNode { // CUnaryUpdateNode
    public const nint m_opFixedSettings = 0x68; // FootLockPoseOpFixedSettings
    public const nint m_footSettings = 0xD0; // CUtlVector<FootFixedSettings>
    public const nint m_hipShiftDamping = 0xE8; // CAnimInputDamping
    public const nint m_rootHeightDamping = 0xF8; // CAnimInputDamping
    public const nint m_flStrideCurveScale = 0x108; // float
    public const nint m_flStrideCurveLimitScale = 0x10C; // float
    public const nint m_flStepHeightIncreaseScale = 0x110; // float
    public const nint m_flStepHeightDecreaseScale = 0x114; // float
    public const nint m_flHipShiftScale = 0x118; // float
    public const nint m_flBlendTime = 0x11C; // float
    public const nint m_flMaxRootHeightOffset = 0x120; // float
    public const nint m_flMinRootHeightOffset = 0x124; // float
    public const nint m_flTiltPlanePitchSpringStrength = 0x128; // float
    public const nint m_flTiltPlaneRollSpringStrength = 0x12C; // float
    public const nint m_bApplyFootRotationLimits = 0x130; // bool
    public const nint m_bApplyHipShift = 0x131; // bool
    public const nint m_bModulateStepHeight = 0x132; // bool
    public const nint m_bResetChild = 0x133; // bool
    public const nint m_bEnableVerticalCurvedPaths = 0x134; // bool
    public const nint m_bEnableRootHeightDamping = 0x135; // bool
}

public static class CFootMotion {
    public const nint m_strides = 0x0; // CUtlVector<CFootStride>
    public const nint m_name = 0x18; // CUtlString
    public const nint m_bAdditive = 0x20; // bool
}

public static class CFootPinningUpdateNode { // CUnaryUpdateNode
    public const nint m_poseOpFixedData = 0x70; // FootPinningPoseOpFixedData_t
    public const nint m_eTimingSource = 0xA0; // FootPinningTimingSource
    public const nint m_params = 0xA8; // CUtlVector<CAnimParamHandle>
    public const nint m_bResetChild = 0xC0; // bool
}

public static class CFootPositionMetricEvaluator { // CMotionMetricEvaluator
    public const nint m_footIndices = 0x50; // CUtlVector<int32_t>
    public const nint m_bIgnoreSlope = 0x68; // bool
}

public static class CFootStepTriggerUpdateNode { // CUnaryUpdateNode
    public const nint m_triggers = 0x68; // CUtlVector<FootStepTrigger>
    public const nint m_flTolerance = 0x84; // float
}

public static class CFootStride {
    public const nint m_definition = 0x0; // CFootCycleDefinition
    public const nint m_trajectories = 0x40; // CFootTrajectories
}

public static class CFootTrajectories {
    public const nint m_trajectories = 0x0; // CUtlVector<CFootTrajectory>
}

public static class CFootTrajectory {
    public const nint m_vOffset = 0x0; // Vector
    public const nint m_flRotationOffset = 0xC; // float
    public const nint m_flProgression = 0x10; // float
}

public static class CFootstepLandedAnimTag { // CAnimTagBase
    public const nint m_FootstepType = 0x50; // FootstepLandedFootSoundType_t
    public const nint m_OverrideSoundName = 0x58; // CUtlString
    public const nint m_DebugAnimSourceString = 0x60; // CUtlString
    public const nint m_BoneName = 0x68; // CUtlString
}

public static class CFutureFacingMetricEvaluator { // CMotionMetricEvaluator
    public const nint m_flDistance = 0x50; // float
    public const nint m_flTime = 0x54; // float
}

public static class CFutureVelocityMetricEvaluator { // CMotionMetricEvaluator
    public const nint m_flDistance = 0x50; // float
    public const nint m_flStoppingDistance = 0x54; // float
    public const nint m_flTargetSpeed = 0x58; // float
    public const nint m_eMode = 0x5C; // VelocityMetricMode
}

public static class CHitBox {
    public const nint m_name = 0x0; // CUtlString
    public const nint m_sSurfaceProperty = 0x8; // CUtlString
    public const nint m_sBoneName = 0x10; // CUtlString
    public const nint m_vMinBounds = 0x18; // Vector
    public const nint m_vMaxBounds = 0x24; // Vector
    public const nint m_flShapeRadius = 0x30; // float
    public const nint m_nBoneNameHash = 0x34; // uint32_t
    public const nint m_nGroupId = 0x38; // int32_t
    public const nint m_nShapeType = 0x3C; // uint8_t
    public const nint m_bTranslationOnly = 0x3D; // bool
    public const nint m_CRC = 0x40; // uint32_t
    public const nint m_cRenderColor = 0x44; // Color
    public const nint m_nHitBoxIndex = 0x48; // uint16_t
}

public static class CHitBoxSet {
    public const nint m_name = 0x0; // CUtlString
    public const nint m_nNameHash = 0x8; // uint32_t
    public const nint m_HitBoxes = 0x10; // CUtlVector<CHitBox>
    public const nint m_SourceFilename = 0x28; // CUtlString
}

public static class CHitBoxSetList {
    public const nint m_HitBoxSets = 0x0; // CUtlVector<CHitBoxSet>
}

public static class CHitReactUpdateNode { // CUnaryUpdateNode
    public const nint m_opFixedSettings = 0x68; // HitReactFixedSettings_t
    public const nint m_triggerParam = 0xB4; // CAnimParamHandle
    public const nint m_hitBoneParam = 0xB6; // CAnimParamHandle
    public const nint m_hitOffsetParam = 0xB8; // CAnimParamHandle
    public const nint m_hitDirectionParam = 0xBA; // CAnimParamHandle
    public const nint m_hitStrengthParam = 0xBC; // CAnimParamHandle
    public const nint m_flMinDelayBetweenHits = 0xC0; // float
    public const nint m_bResetChild = 0xC4; // bool
}

public static class CInputStreamUpdateNode { // CLeafUpdateNode
}

public static class CIntAnimParameter { // CConcreteAnimParameter
    public const nint m_defaultValue = 0x78; // int32_t
    public const nint m_minValue = 0x7C; // int32_t
    public const nint m_maxValue = 0x80; // int32_t
}

public static class CJiggleBoneUpdateNode { // CUnaryUpdateNode
    public const nint m_opFixedData = 0x68; // JiggleBoneSettingsList_t
}

public static class CJumpHelperUpdateNode { // CSequenceUpdateNode
    public const nint m_hTargetParam = 0xA8; // CAnimParamHandle
    public const nint m_flOriginalJumpMovement = 0xAC; // Vector
    public const nint m_flOriginalJumpDuration = 0xB8; // float
    public const nint m_flJumpStartCycle = 0xBC; // float
    public const nint m_flJumpEndCycle = 0xC0; // float
    public const nint m_eCorrectionMethod = 0xC4; // JumpCorrectionMethod
    public const nint m_bTranslationAxis = 0xC8; // bool[3]
    public const nint m_bScaleSpeed = 0xCB; // bool
}

public static class CLODComponentUpdater { // CAnimComponentUpdater
    public const nint m_nServerLOD = 0x30; // int32_t
}

public static class CLeafUpdateNode { // CAnimUpdateNodeBase
}

public static class CLeanMatrixUpdateNode { // CLeafUpdateNode
    public const nint m_frameCorners = 0x5C; // int32_t[3][3]
    public const nint m_poses = 0x80; // CPoseHandle[9]
    public const nint m_damping = 0xA8; // CAnimInputDamping
    public const nint m_blendSource = 0xB8; // AnimVectorSource
    public const nint m_paramIndex = 0xBC; // CAnimParamHandle
    public const nint m_verticalAxis = 0xC0; // Vector
    public const nint m_horizontalAxis = 0xCC; // Vector
    public const nint m_hSequence = 0xD8; // HSequence
    public const nint m_flMaxValue = 0xDC; // float
    public const nint m_nSequenceMaxFrame = 0xE0; // int32_t
}

public static class CLookAtUpdateNode { // CUnaryUpdateNode
    public const nint m_opFixedSettings = 0x70; // LookAtOpFixedSettings_t
    public const nint m_target = 0x138; // AnimVectorSource
    public const nint m_paramIndex = 0x13C; // CAnimParamHandle
    public const nint m_weightParamIndex = 0x13E; // CAnimParamHandle
    public const nint m_bResetChild = 0x140; // bool
    public const nint m_bLockWhenWaning = 0x141; // bool
}

public static class CLookComponentUpdater { // CAnimComponentUpdater
    public const nint m_hLookHeading = 0x34; // CAnimParamHandle
    public const nint m_hLookHeadingVelocity = 0x36; // CAnimParamHandle
    public const nint m_hLookPitch = 0x38; // CAnimParamHandle
    public const nint m_hLookDistance = 0x3A; // CAnimParamHandle
    public const nint m_hLookDirection = 0x3C; // CAnimParamHandle
    public const nint m_hLookTarget = 0x3E; // CAnimParamHandle
    public const nint m_hLookTargetWorldSpace = 0x40; // CAnimParamHandle
    public const nint m_bNetworkLookTarget = 0x42; // bool
}

public static class CMaterialAttributeAnimTag { // CAnimTagBase
    public const nint m_AttributeName = 0x50; // CUtlString
    public const nint m_AttributeType = 0x58; // MatterialAttributeTagType_t
    public const nint m_flValue = 0x5C; // float
    public const nint m_Color = 0x60; // Color
}

public static class CMaterialDrawDescriptor {
    public const nint m_nPrimitiveType = 0x0; // RenderPrimitiveType_t
    public const nint m_nBaseVertex = 0x4; // int32_t
    public const nint m_nVertexCount = 0x8; // int32_t
    public const nint m_nStartIndex = 0xC; // int32_t
    public const nint m_nIndexCount = 0x10; // int32_t
    public const nint m_flUvDensity = 0x14; // float
    public const nint m_vTintColor = 0x18; // Vector
    public const nint m_flAlpha = 0x24; // float
    public const nint m_nFirstMeshlet = 0x2C; // uint32_t
    public const nint m_nNumMeshlets = 0x30; // uint16_t
    public const nint m_indexBuffer = 0xB8; // CRenderBufferBinding
    public const nint m_material = 0xE0; // CStrongHandle<InfoForResourceTypeIMaterial2>
}

public static class CMeshletDescriptor {
    public const nint m_PackedAABB = 0x0; // PackedAABB_t
    public const nint m_CullingData = 0x8; // CDrawCullingData
}

public static class CModelConfig {
    public const nint m_ConfigName = 0x0; // CUtlString
    public const nint m_Elements = 0x8; // CUtlVector<CModelConfigElement*>
    public const nint m_bTopLevel = 0x20; // bool
}

public static class CModelConfigElement {
    public const nint m_ElementName = 0x8; // CUtlString
    public const nint m_NestedElements = 0x10; // CUtlVector<CModelConfigElement*>
}

public static class CModelConfigElement_AttachedModel { // CModelConfigElement
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

public static class CModelConfigElement_Command { // CModelConfigElement
    public const nint m_Command = 0x48; // CUtlString
    public const nint m_Args = 0x50; // KeyValues3
}

public static class CModelConfigElement_RandomColor { // CModelConfigElement
    public const nint m_Gradient = 0x48; // CColorGradient
}

public static class CModelConfigElement_RandomPick { // CModelConfigElement
    public const nint m_Choices = 0x48; // CUtlVector<CUtlString>
    public const nint m_ChoiceWeights = 0x60; // CUtlVector<float>
}

public static class CModelConfigElement_SetBodygroup { // CModelConfigElement
    public const nint m_GroupName = 0x48; // CUtlString
    public const nint m_nChoice = 0x50; // int32_t
}

public static class CModelConfigElement_SetBodygroupOnAttachedModels { // CModelConfigElement
    public const nint m_GroupName = 0x48; // CUtlString
    public const nint m_nChoice = 0x50; // int32_t
}

public static class CModelConfigElement_SetMaterialGroup { // CModelConfigElement
    public const nint m_MaterialGroupName = 0x48; // CUtlString
}

public static class CModelConfigElement_SetMaterialGroupOnAttachedModels { // CModelConfigElement
    public const nint m_MaterialGroupName = 0x48; // CUtlString
}

public static class CModelConfigElement_SetRenderColor { // CModelConfigElement
    public const nint m_Color = 0x48; // Color
}

public static class CModelConfigElement_UserPick { // CModelConfigElement
    public const nint m_Choices = 0x48; // CUtlVector<CUtlString>
}

public static class CModelConfigList {
    public const nint m_bHideMaterialGroupInTools = 0x0; // bool
    public const nint m_bHideRenderColorInTools = 0x1; // bool
    public const nint m_Configs = 0x8; // CUtlVector<CModelConfig*>
}

public static class CMoodVData {
    public const nint m_sModelName = 0x0; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
    public const nint m_nMoodType = 0xE0; // MoodType_t
    public const nint m_animationLayers = 0xE8; // CUtlVector<MoodAnimationLayer_t>
}

public static class CMorphBundleData {
    public const nint m_flULeftSrc = 0x0; // float
    public const nint m_flVTopSrc = 0x4; // float
    public const nint m_offsets = 0x8; // CUtlVector<float>
    public const nint m_ranges = 0x20; // CUtlVector<float>
}

public static class CMorphConstraint { // CBaseConstraint
    public const nint m_sTargetMorph = 0x70; // CUtlString
    public const nint m_nSlaveChannel = 0x78; // int32_t
    public const nint m_flMin = 0x7C; // float
    public const nint m_flMax = 0x80; // float
}

public static class CMorphData {
    public const nint m_name = 0x0; // CUtlString
    public const nint m_morphRectDatas = 0x8; // CUtlVector<CMorphRectData>
}

public static class CMorphRectData {
    public const nint m_nXLeftDst = 0x0; // int16_t
    public const nint m_nYTopDst = 0x2; // int16_t
    public const nint m_flUWidthSrc = 0x4; // float
    public const nint m_flVHeightSrc = 0x8; // float
    public const nint m_bundleDatas = 0x10; // CUtlVector<CMorphBundleData>
}

public static class CMorphSetData {
    public const nint m_nWidth = 0x10; // int32_t
    public const nint m_nHeight = 0x14; // int32_t
    public const nint m_bundleTypes = 0x18; // CUtlVector<MorphBundleType_t>
    public const nint m_morphDatas = 0x30; // CUtlVector<CMorphData>
    public const nint m_pTextureAtlas = 0x48; // CStrongHandle<InfoForResourceTypeCTextureBase>
    public const nint m_FlexDesc = 0x50; // CUtlVector<CFlexDesc>
    public const nint m_FlexControllers = 0x68; // CUtlVector<CFlexController>
    public const nint m_FlexRules = 0x80; // CUtlVector<CFlexRule>
}

public static class CMotionDataSet {
    public const nint m_groups = 0x0; // CUtlVector<CMotionGraphGroup>
    public const nint m_nDimensionCount = 0x18; // int32_t
}

public static class CMotionGraph {
    public const nint m_paramSpans = 0x10; // CParamSpanUpdater
    public const nint m_tags = 0x28; // CUtlVector<TagSpan_t>
    public const nint m_pRootNode = 0x40; // CSmartPtr<CMotionNode>
    public const nint m_nParameterCount = 0x48; // int32_t
    public const nint m_nConfigStartIndex = 0x4C; // int32_t
    public const nint m_nConfigCount = 0x50; // int32_t
    public const nint m_bLoop = 0x54; // bool
}

public static class CMotionGraphConfig {
    public const nint m_paramValues = 0x0; // float[4]
    public const nint m_flDuration = 0x10; // float
    public const nint m_nMotionIndex = 0x14; // MotionIndex
    public const nint m_nSampleStart = 0x18; // int32_t
    public const nint m_nSampleCount = 0x1C; // int32_t
}

public static class CMotionGraphGroup {
    public const nint m_searchDB = 0x0; // CMotionSearchDB
    public const nint m_motionGraphs = 0xB8; // CUtlVector<CSmartPtr<CMotionGraph>>
    public const nint m_motionGraphConfigs = 0xD0; // CUtlVector<CMotionGraphConfig>
    public const nint m_sampleToConfig = 0xE8; // CUtlVector<int32_t>
    public const nint m_hIsActiveScript = 0x100; // AnimScriptHandle
}

public static class CMotionGraphUpdateNode { // CLeafUpdateNode
    public const nint m_pMotionGraph = 0x58; // CSmartPtr<CMotionGraph>
}

public static class CMotionMatchingUpdateNode { // CLeafUpdateNode
    public const nint m_dataSet = 0x58; // CMotionDataSet
    public const nint m_metrics = 0x78; // CUtlVector<CSmartPtr<CMotionMetricEvaluator>>
    public const nint m_weights = 0x90; // CUtlVector<float>
    public const nint m_bSearchEveryTick = 0xE0; // bool
    public const nint m_flSearchInterval = 0xE4; // float
    public const nint m_bSearchWhenClipEnds = 0xE8; // bool
    public const nint m_bSearchWhenGoalChanges = 0xE9; // bool
    public const nint m_blendCurve = 0xEC; // CBlendCurve
    public const nint m_flSampleRate = 0xF4; // float
    public const nint m_flBlendTime = 0xF8; // float
    public const nint m_bLockClipWhenWaning = 0xFC; // bool
    public const nint m_flSelectionThreshold = 0x100; // float
    public const nint m_flReselectionTimeWindow = 0x104; // float
    public const nint m_bEnableRotationCorrection = 0x108; // bool
    public const nint m_bGoalAssist = 0x109; // bool
    public const nint m_flGoalAssistDistance = 0x10C; // float
    public const nint m_flGoalAssistTolerance = 0x110; // float
    public const nint m_distanceScale_Damping = 0x118; // CAnimInputDamping
    public const nint m_flDistanceScale_OuterRadius = 0x128; // float
    public const nint m_flDistanceScale_InnerRadius = 0x12C; // float
    public const nint m_flDistanceScale_MaxScale = 0x130; // float
    public const nint m_flDistanceScale_MinScale = 0x134; // float
    public const nint m_bEnableDistanceScaling = 0x138; // bool
}

public static class CMotionMetricEvaluator {
    public const nint m_means = 0x18; // CUtlVector<float>
    public const nint m_standardDeviations = 0x30; // CUtlVector<float>
    public const nint m_flWeight = 0x48; // float
    public const nint m_nDimensionStartIndex = 0x4C; // int32_t
}

public static class CMotionNode {
    public const nint m_name = 0x18; // CUtlString
    public const nint m_id = 0x20; // AnimNodeID
}

public static class CMotionNodeBlend1D { // CMotionNode
    public const nint m_blendItems = 0x28; // CUtlVector<MotionBlendItem>
    public const nint m_nParamIndex = 0x40; // int32_t
}

public static class CMotionNodeSequence { // CMotionNode
    public const nint m_tags = 0x28; // CUtlVector<TagSpan_t>
    public const nint m_hSequence = 0x40; // HSequence
    public const nint m_flPlaybackSpeed = 0x44; // float
}

public static class CMotionSearchDB {
    public const nint m_rootNode = 0x0; // CMotionSearchNode
    public const nint m_residualQuantizer = 0x80; // CProductQuantizer
    public const nint m_codeIndices = 0xA0; // CUtlVector<MotionDBIndex>
}

public static class CMotionSearchNode {
    public const nint m_children = 0x0; // CUtlVector<CMotionSearchNode*>
    public const nint m_quantizer = 0x18; // CVectorQuantizer
    public const nint m_sampleCodes = 0x38; // CUtlVector<CUtlVector<SampleCode>>
    public const nint m_sampleIndices = 0x50; // CUtlVector<CUtlVector<int32_t>>
    public const nint m_selectableSamples = 0x68; // CUtlVector<int32_t>
}

public static class CMovementComponentUpdater { // CAnimComponentUpdater
    public const nint m_motors = 0x30; // CUtlVector<CSmartPtr<CAnimMotorUpdaterBase>>
    public const nint m_facingDamping = 0x48; // CAnimInputDamping
    public const nint m_eDefaultFacingMode = 0x58; // FacingMode
    public const nint m_nDefaultMotorIndex = 0x64; // int32_t
    public const nint m_flDefaultRunSpeed = 0x68; // float
    public const nint m_bMoveVarsDisabled = 0x6C; // bool
    public const nint m_bNetworkPath = 0x6D; // bool
    public const nint m_bNetworkFacing = 0x6E; // bool
    public const nint m_paramHandles = 0x6F; // CAnimParamHandle[30]
}

public static class CMoverUpdateNode { // CUnaryUpdateNode
    public const nint m_damping = 0x70; // CAnimInputDamping
    public const nint m_facingTarget = 0x80; // AnimValueSource
    public const nint m_hMoveVecParam = 0x84; // CAnimParamHandle
    public const nint m_hMoveHeadingParam = 0x86; // CAnimParamHandle
    public const nint m_hTurnToFaceParam = 0x88; // CAnimParamHandle
    public const nint m_flTurnToFaceOffset = 0x8C; // float
    public const nint m_flTurnToFaceLimit = 0x90; // float
    public const nint m_bAdditive = 0x94; // bool
    public const nint m_bApplyMovement = 0x95; // bool
    public const nint m_bOrientMovement = 0x96; // bool
    public const nint m_bApplyRotation = 0x97; // bool
    public const nint m_bLimitOnly = 0x98; // bool
}

public static class CNmBoneMask {
    public const nint m_ID = 0x0; // CGlobalSymbol
    public const nint m_weightInfo = 0x8; // CNmBoneMask::WeightInfo_t
    public const nint m_weights = 0x18; // CUtlVector<float>
}

public static class CNmClip {
    public const nint m_skeleton = 0x0; // CStrongHandle<InfoForResourceTypeCNmSkeleton>
    public const nint m_nNumFrames = 0x8; // uint32_t
    public const nint m_flDuration = 0xC; // float
    public const nint m_compressedPoseData = 0x10; // CUtlBinaryBlock
    public const nint m_trackCompressionSettings = 0x28; // CUtlVector<NmCompressionSettings_t>
    public const nint m_compressedPoseOffsets = 0x40; // CUtlVector<uint32_t>
    public const nint m_syncTrack = 0xA0; // CNmSyncTrack
    public const nint m_rootMotion = 0x150; // CNmRootMotionData
    public const nint m_bIsAdditive = 0x1A0; // bool
}

public static class CNmEvent {
    public const nint m_flStartTime = 0x8; // float
    public const nint m_flDuration = 0xC; // float
}

public static class CNmFootEvent { // CNmEvent
    public const nint m_phase = 0x10; // NmFootPhase_t
}

public static class CNmFrameSnapEvent { // CNmEvent
    public const nint m_frameSnapMode = 0x10; // NmFrameSnapEventMode_t
}

public static class CNmGraph {
    public const nint m_persistentNodeIndices = 0x0; // CUtlVector<int16_t>
    public const nint m_instanceNodeStartOffsets = 0x18; // CUtlVector<uint32_t>
    public const nint m_instanceRequiredMemory = 0x30; // uint32_t
    public const nint m_instanceRequiredAlignment = 0x34; // uint32_t
    public const nint m_rootNodeIdx = 0x38; // int16_t
    public const nint m_controlParameterIDs = 0x40; // CUtlVector<CGlobalSymbol>
    public const nint m_virtualParameterIDs = 0x58; // CUtlVector<CGlobalSymbol>
    public const nint m_virtualParameterNodeIndices = 0x70; // CUtlVector<int16_t>
    public const nint m_childGraphSlots = 0x88; // CUtlVector<CNmGraph::ChildGraphSlot_t>
    public const nint m_externalGraphSlots = 0xA0; // CUtlVector<CNmGraph::ExternalGraphSlot_t>
}

public static class CNmGraphDataSet {
    public const nint m_variationID = 0x0; // CGlobalSymbol
    public const nint m_skeleton = 0x8; // CStrongHandle<InfoForResourceTypeCNmSkeleton>
    public const nint m_resources = 0x10; // CUtlVector<CStrongHandleVoid>
}

public static class CNmGraphVariation {
    public const nint m_graph = 0x0; // CStrongHandle<InfoForResourceTypeCNmGraph>
    public const nint m_dataSet = 0x8; // CStrongHandle<InfoForResourceTypeCNmGraphDataSet>
}

public static class CNmGraph_ChildGraphSlot_t {
    public const nint m_nNodeIdx = 0x0; // int16_t
    public const nint m_dataSlotIdx = 0x2; // int16_t
}

public static class CNmGraph_ExternalGraphSlot_t {
    public const nint m_nNodeIdx = 0x0; // int16_t
    public const nint m_slotID = 0x8; // CGlobalSymbol
}

public static class CNmIDEvent { // CNmEvent
    public const nint m_ID = 0x10; // CGlobalSymbol
}

public static class CNmLegacyEvent { // CNmEvent
}

public static class CNmRootMotionData {
    public const nint m_transforms = 0x0; // CUtlVector<CTransform>
    public const nint m_nNumFrames = 0x18; // int32_t
    public const nint m_flAverageLinearVelocity = 0x1C; // float
    public const nint m_flAverageAngularVelocityRadians = 0x20; // float
    public const nint m_totalDelta = 0x30; // CTransform
}

public static class CNmSkeleton {
    public const nint m_ID = 0x0; // CGlobalSymbol
    public const nint m_boneIDs = 0x8; // CUtlLeanVector<CGlobalSymbol>
    public const nint m_parentIndices = 0x18; // CUtlVector<int32_t>
    public const nint m_parentSpaceReferencePose = 0x30; // CUtlVector<CTransform>
    public const nint m_modelSpaceReferencePose = 0x48; // CUtlVector<CTransform>
    public const nint m_numBonesToSampleAtLowLOD = 0x60; // int32_t
    public const nint m_boneMasks = 0x68; // CUtlLeanVector<CNmBoneMask>
}

public static class CNmSyncTrack {
    public const nint m_syncEvents = 0x0; // CUtlLeanVectorFixedGrowable<CNmSyncTrack::Event_t>
    public const nint m_nStartEventOffset = 0xA8; // int32_t
}

public static class CNmSyncTrack_EventMarker_t {
    public const nint m_startTime = 0x0; // NmPercent_t
    public const nint m_ID = 0x8; // CGlobalSymbol
}

public static class CNmSyncTrack_Event_t {
    public const nint m_ID = 0x0; // CGlobalSymbol
    public const nint m_startTime = 0x8; // NmPercent_t
    public const nint m_duration = 0xC; // NmPercent_t
}

public static class CNmTransitionEvent { // CNmEvent
    public const nint m_rule = 0x10; // NmTransitionRule_t
    public const nint m_ID = 0x18; // CGlobalSymbol
}

public static class COrientConstraint { // CBaseConstraint
}

public static class CParamSpanUpdater {
    public const nint m_spans = 0x0; // CUtlVector<ParamSpan_t>
}

public static class CParentConstraint { // CBaseConstraint
}

public static class CParticleAnimTag { // CAnimTagBase
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

public static class CPathAnimMotorUpdater { // CPathAnimMotorUpdaterBase
}

public static class CPathAnimMotorUpdaterBase { // CAnimMotorUpdaterBase
    public const nint m_bLockToPath = 0x20; // bool
}

public static class CPathHelperUpdateNode { // CUnaryUpdateNode
    public const nint m_flStoppingRadius = 0x68; // float
    public const nint m_flStoppingSpeedScale = 0x6C; // float
}

public static class CPathMetricEvaluator { // CMotionMetricEvaluator
    public const nint m_pathTimeSamples = 0x50; // CUtlVector<float>
    public const nint m_flDistance = 0x68; // float
    public const nint m_bExtrapolateMovement = 0x6C; // bool
    public const nint m_flMinExtrapolationSpeed = 0x70; // float
}

public static class CPhysSurfaceProperties {
    public const nint m_name = 0x0; // CUtlString
    public const nint m_nameHash = 0x8; // uint32_t
    public const nint m_baseNameHash = 0xC; // uint32_t
    public const nint m_bHidden = 0x18; // bool
    public const nint m_description = 0x20; // CUtlString
    public const nint m_physics = 0x28; // CPhysSurfacePropertiesPhysics
    public const nint m_audioSounds = 0x48; // CPhysSurfacePropertiesSoundNames
    public const nint m_audioParams = 0x88; // CPhysSurfacePropertiesAudio
}

public static class CPhysSurfacePropertiesAudio {
    public const nint m_reflectivity = 0x0; // float
    public const nint m_hardnessFactor = 0x4; // float
    public const nint m_roughnessFactor = 0x8; // float
    public const nint m_roughThreshold = 0xC; // float
    public const nint m_hardThreshold = 0x10; // float
    public const nint m_hardVelocityThreshold = 0x14; // float
    public const nint m_flStaticImpactVolume = 0x18; // float
    public const nint m_flOcclusionFactor = 0x1C; // float
}

public static class CPhysSurfacePropertiesPhysics {
    public const nint m_friction = 0x0; // float
    public const nint m_elasticity = 0x4; // float
    public const nint m_density = 0x8; // float
    public const nint m_thickness = 0xC; // float
    public const nint m_softContactFrequency = 0x10; // float
    public const nint m_softContactDampingRatio = 0x14; // float
    public const nint m_wheelDrag = 0x18; // float
}

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

public static class CPlayerInputAnimMotorUpdater { // CAnimMotorUpdaterBase
    public const nint m_sampleTimes = 0x20; // CUtlVector<float>
    public const nint m_flSpringConstant = 0x3C; // float
    public const nint m_flAnticipationDistance = 0x40; // float
    public const nint m_hAnticipationPosParam = 0x44; // CAnimParamHandle
    public const nint m_hAnticipationHeadingParam = 0x46; // CAnimParamHandle
    public const nint m_bUseAcceleration = 0x48; // bool
}

public static class CPointConstraint { // CBaseConstraint
}

public static class CPoseHandle {
    public const nint m_nIndex = 0x0; // uint16_t
    public const nint m_eType = 0x2; // PoseType_t
}

public static class CProductQuantizer {
    public const nint m_subQuantizers = 0x0; // CUtlVector<CVectorQuantizer>
    public const nint m_nDimensions = 0x18; // int32_t
}

public static class CQuaternionAnimParameter { // CConcreteAnimParameter
    public const nint m_defaultValue = 0x80; // Quaternion
    public const nint m_bInterpolate = 0x90; // bool
}

public static class CRagdollAnimTag { // CAnimTagBase
    public const nint m_nPoseControl = 0x50; // AnimPoseControl
    public const nint m_flFrequency = 0x54; // float
    public const nint m_flDampingRatio = 0x58; // float
    public const nint m_flDecayDuration = 0x5C; // float
    public const nint m_flDecayBias = 0x60; // float
    public const nint m_bDestroy = 0x64; // bool
}

public static class CRagdollComponentUpdater { // CAnimComponentUpdater
    public const nint m_ragdollNodePaths = 0x30; // CUtlVector<CAnimNodePath>
    public const nint m_boneIndices = 0x48; // CUtlVector<int32_t>
    public const nint m_boneNames = 0x60; // CUtlVector<CUtlString>
    public const nint m_weightLists = 0x78; // CUtlVector<WeightList>
    public const nint m_flSpringFrequencyMin = 0x90; // float
    public const nint m_flSpringFrequencyMax = 0x94; // float
    public const nint m_flMaxStretch = 0x98; // float
    public const nint m_bSolidCollisionAtZeroWeight = 0x9C; // bool
}

public static class CRagdollUpdateNode { // CUnaryUpdateNode
    public const nint m_nWeightListIndex = 0x68; // int32_t
    public const nint m_poseControlMethod = 0x6C; // RagdollPoseControl
}

public static class CRenderBufferBinding {
    public const nint m_hBuffer = 0x0; // uint64_t
    public const nint m_nBindOffsetBytes = 0x10; // uint32_t
}

public static class CRenderGroom {
    public const nint m_nSegmentsPerHairStrand = 0x0; // int32_t
    public const nint m_nGuideHairCount = 0x4; // int32_t
    public const nint m_nHairCount = 0x8; // int32_t
    public const nint m_nGroomGroupID = 0xC; // int32_t
    public const nint m_nAttachBoneIdx = 0x10; // int32_t
    public const nint m_hairInfoBufferData = 0x18; // CUtlBinaryBlock
    public const nint m_hairs = 0x30; // CUtlVector<RenderHairStrandInfo_t>
}

public static class CRenderMesh {
    public const nint m_sceneObjects = 0x10; // CUtlVectorFixedGrowable<CSceneObjectData>
    public const nint m_constraints = 0xA0; // CUtlVector<CBaseConstraint*>
    public const nint m_skeleton = 0xB8; // CRenderSkeleton
    public const nint m_meshDeformParams = 0x1E0; // DynamicMeshDeformParams_t
    public const nint m_pGroomData = 0x1F0; // CRenderGroom*
}

public static class CRenderSkeleton {
    public const nint m_bones = 0x0; // CUtlVector<RenderSkeletonBone_t>
    public const nint m_boneParents = 0x30; // CUtlVector<int32_t>
    public const nint m_nBoneWeightCount = 0x48; // int32_t
}

public static class CRootUpdateNode { // CUnaryUpdateNode
}

public static class CSceneObjectData {
    public const nint m_vMinBounds = 0x0; // Vector
    public const nint m_vMaxBounds = 0xC; // Vector
    public const nint m_drawCalls = 0x18; // CUtlVector<CMaterialDrawDescriptor>
    public const nint m_drawBounds = 0x30; // CUtlVector<AABB_t>
    public const nint m_meshlets = 0x48; // CUtlVector<CMeshletDescriptor>
    public const nint m_vTintColor = 0x60; // Vector4D
}

public static class CSelectorUpdateNode { // CAnimUpdateNodeBase
    public const nint m_children = 0x58; // CUtlVector<CAnimUpdateNodeRef>
    public const nint m_tags = 0x70; // CUtlVector<int8_t>
    public const nint m_blendCurve = 0x8C; // CBlendCurve
    public const nint m_flBlendTime = 0x94; // CAnimValue<float>
    public const nint m_hParameter = 0x9C; // CAnimParamHandle
    public const nint m_eTagBehavior = 0xA0; // SelectorTagBehavior_t
    public const nint m_bResetOnChange = 0xA4; // bool
    public const nint m_bSyncCyclesOnChange = 0xA5; // bool
}

public static class CSeqAutoLayer {
    public const nint m_nLocalReference = 0x0; // int16_t
    public const nint m_nLocalPose = 0x2; // int16_t
    public const nint m_flags = 0x4; // CSeqAutoLayerFlag
    public const nint m_start = 0xC; // float
    public const nint m_peak = 0x10; // float
    public const nint m_tail = 0x14; // float
    public const nint m_end = 0x18; // float
}

public static class CSeqAutoLayerFlag {
    public const nint m_bPost = 0x0; // bool
    public const nint m_bSpline = 0x1; // bool
    public const nint m_bXFade = 0x2; // bool
    public const nint m_bNoBlend = 0x3; // bool
    public const nint m_bLocal = 0x4; // bool
    public const nint m_bPose = 0x5; // bool
    public const nint m_bFetchFrame = 0x6; // bool
    public const nint m_bSubtract = 0x7; // bool
}

public static class CSeqBoneMaskList {
    public const nint m_sName = 0x0; // CBufferString
    public const nint m_nLocalBoneArray = 0x10; // CUtlVector<int16_t>
    public const nint m_flBoneWeightArray = 0x28; // CUtlVector<float>
    public const nint m_flDefaultMorphCtrlWeight = 0x40; // float
    public const nint m_morphCtrlWeightArray = 0x48; // CUtlVector<CUtlPair<CBufferString,float>>
}

public static class CSeqCmdLayer {
    public const nint m_cmd = 0x0; // int16_t
    public const nint m_nLocalReference = 0x2; // int16_t
    public const nint m_nLocalBonemask = 0x4; // int16_t
    public const nint m_nDstResult = 0x6; // int16_t
    public const nint m_nSrcResult = 0x8; // int16_t
    public const nint m_bSpline = 0xA; // bool
    public const nint m_flVar1 = 0xC; // float
    public const nint m_flVar2 = 0x10; // float
    public const nint m_nLineNumber = 0x14; // int16_t
}

public static class CSeqCmdSeqDesc {
    public const nint m_sName = 0x0; // CBufferString
    public const nint m_flags = 0x10; // CSeqSeqDescFlag
    public const nint m_transition = 0x1C; // CSeqTransition
    public const nint m_nFrameRangeSequence = 0x24; // int16_t
    public const nint m_nFrameCount = 0x26; // int16_t
    public const nint m_flFPS = 0x28; // float
    public const nint m_nSubCycles = 0x2C; // int16_t
    public const nint m_numLocalResults = 0x2E; // int16_t
    public const nint m_cmdLayerArray = 0x30; // CUtlVector<CSeqCmdLayer>
    public const nint m_eventArray = 0x48; // CUtlVector<CAnimEventDefinition>
    public const nint m_activityArray = 0x60; // CUtlVector<CAnimActivity>
    public const nint m_poseSettingArray = 0x78; // CUtlVector<CSeqPoseSetting>
}

public static class CSeqIKLock {
    public const nint m_flPosWeight = 0x0; // float
    public const nint m_flAngleWeight = 0x4; // float
    public const nint m_nLocalBone = 0x8; // int16_t
    public const nint m_bBonesOrientedAlongPositiveX = 0xA; // bool
}

public static class CSeqMultiFetch {
    public const nint m_flags = 0x0; // CSeqMultiFetchFlag
    public const nint m_localReferenceArray = 0x8; // CUtlVector<int16_t>
    public const nint m_nGroupSize = 0x20; // int32_t[2]
    public const nint m_nLocalPose = 0x28; // int32_t[2]
    public const nint m_poseKeyArray0 = 0x30; // CUtlVector<float>
    public const nint m_poseKeyArray1 = 0x48; // CUtlVector<float>
    public const nint m_nLocalCyclePoseParameter = 0x60; // int32_t
    public const nint m_bCalculatePoseParameters = 0x64; // bool
    public const nint m_bFixedBlendWeight = 0x65; // bool
    public const nint m_flFixedBlendWeightVals = 0x68; // float[2]
}

public static class CSeqMultiFetchFlag {
    public const nint m_bRealtime = 0x0; // bool
    public const nint m_bCylepose = 0x1; // bool
    public const nint m_b0D = 0x2; // bool
    public const nint m_b1D = 0x3; // bool
    public const nint m_b2D = 0x4; // bool
    public const nint m_b2D_TRI = 0x5; // bool
}

public static class CSeqPoseParamDesc {
    public const nint m_sName = 0x0; // CBufferString
    public const nint m_flStart = 0x10; // float
    public const nint m_flEnd = 0x14; // float
    public const nint m_flLoop = 0x18; // float
    public const nint m_bLooping = 0x1C; // bool
}

public static class CSeqPoseSetting {
    public const nint m_sPoseParameter = 0x0; // CBufferString
    public const nint m_sAttachment = 0x10; // CBufferString
    public const nint m_sReferenceSequence = 0x20; // CBufferString
    public const nint m_flValue = 0x30; // float
    public const nint m_bX = 0x34; // bool
    public const nint m_bY = 0x35; // bool
    public const nint m_bZ = 0x36; // bool
    public const nint m_eType = 0x38; // int32_t
}

public static class CSeqS1SeqDesc {
    public const nint m_sName = 0x0; // CBufferString
    public const nint m_flags = 0x10; // CSeqSeqDescFlag
    public const nint m_fetch = 0x20; // CSeqMultiFetch
    public const nint m_nLocalWeightlist = 0x90; // int32_t
    public const nint m_autoLayerArray = 0x98; // CUtlVector<CSeqAutoLayer>
    public const nint m_IKLockArray = 0xB0; // CUtlVector<CSeqIKLock>
    public const nint m_transition = 0xC8; // CSeqTransition
    public const nint m_SequenceKeys = 0xD0; // KeyValues3
    public const nint m_LegacyKeyValueText = 0xE0; // CBufferString
    public const nint m_activityArray = 0xF0; // CUtlVector<CAnimActivity>
    public const nint m_footMotion = 0x108; // CUtlVector<CFootMotion>
}

public static class CSeqScaleSet {
    public const nint m_sName = 0x0; // CBufferString
    public const nint m_bRootOffset = 0x10; // bool
    public const nint m_vRootOffset = 0x14; // Vector
    public const nint m_nLocalBoneArray = 0x20; // CUtlVector<int16_t>
    public const nint m_flBoneScaleArray = 0x38; // CUtlVector<float>
}

public static class CSeqSeqDescFlag {
    public const nint m_bLooping = 0x0; // bool
    public const nint m_bSnap = 0x1; // bool
    public const nint m_bAutoplay = 0x2; // bool
    public const nint m_bPost = 0x3; // bool
    public const nint m_bHidden = 0x4; // bool
    public const nint m_bMulti = 0x5; // bool
    public const nint m_bLegacyDelta = 0x6; // bool
    public const nint m_bLegacyWorldspace = 0x7; // bool
    public const nint m_bLegacyCyclepose = 0x8; // bool
    public const nint m_bLegacyRealtime = 0x9; // bool
    public const nint m_bModelDoc = 0xA; // bool
}

public static class CSeqSynthAnimDesc {
    public const nint m_sName = 0x0; // CBufferString
    public const nint m_flags = 0x10; // CSeqSeqDescFlag
    public const nint m_transition = 0x1C; // CSeqTransition
    public const nint m_nLocalBaseReference = 0x24; // int16_t
    public const nint m_nLocalBoneMask = 0x26; // int16_t
    public const nint m_activityArray = 0x28; // CUtlVector<CAnimActivity>
}

public static class CSeqTransition {
    public const nint m_flFadeInTime = 0x0; // float
    public const nint m_flFadeOutTime = 0x4; // float
}

public static class CSequenceFinishedAnimTag { // CAnimTagBase
    public const nint m_sequenceName = 0x50; // CUtlString
}

public static class CSequenceGroupData {
    public const nint m_sName = 0x10; // CBufferString
    public const nint m_nFlags = 0x20; // uint32_t
    public const nint m_localSequenceNameArray = 0x28; // CUtlVector<CBufferString>
    public const nint m_localS1SeqDescArray = 0x40; // CUtlVector<CSeqS1SeqDesc>
    public const nint m_localMultiSeqDescArray = 0x58; // CUtlVector<CSeqS1SeqDesc>
    public const nint m_localSynthAnimDescArray = 0x70; // CUtlVector<CSeqSynthAnimDesc>
    public const nint m_localCmdSeqDescArray = 0x88; // CUtlVector<CSeqCmdSeqDesc>
    public const nint m_localBoneMaskArray = 0xA0; // CUtlVector<CSeqBoneMaskList>
    public const nint m_localScaleSetArray = 0xB8; // CUtlVector<CSeqScaleSet>
    public const nint m_localBoneNameArray = 0xD0; // CUtlVector<CBufferString>
    public const nint m_localNodeName = 0xE8; // CBufferString
    public const nint m_localPoseParamArray = 0xF8; // CUtlVector<CSeqPoseParamDesc>
    public const nint m_keyValues = 0x110; // KeyValues3
    public const nint m_localIKAutoplayLockArray = 0x120; // CUtlVector<CSeqIKLock>
}

public static class CSequenceUpdateNode { // CLeafUpdateNode
    public const nint m_paramSpans = 0x60; // CParamSpanUpdater
    public const nint m_tags = 0x78; // CUtlVector<TagSpan_t>
    public const nint m_hSequence = 0x94; // HSequence
    public const nint m_playbackSpeed = 0x98; // float
    public const nint m_duration = 0x9C; // float
    public const nint m_bLoop = 0xA0; // bool
}

public static class CSetFacingUpdateNode { // CUnaryUpdateNode
    public const nint m_facingMode = 0x68; // FacingMode
    public const nint m_bResetChild = 0x6C; // bool
}

public static class CSetParameterActionUpdater { // CAnimActionUpdater
    public const nint m_hParam = 0x18; // CAnimParamHandle
    public const nint m_value = 0x1A; // CAnimVariant
}

public static class CSingleFrameUpdateNode { // CLeafUpdateNode
    public const nint m_actions = 0x58; // CUtlVector<CSmartPtr<CAnimActionUpdater>>
    public const nint m_hPoseCacheHandle = 0x70; // CPoseHandle
    public const nint m_hSequence = 0x74; // HSequence
    public const nint m_flCycle = 0x78; // float
}

public static class CSlopeComponentUpdater { // CAnimComponentUpdater
    public const nint m_flTraceDistance = 0x34; // float
    public const nint m_hSlopeAngle = 0x38; // CAnimParamHandle
    public const nint m_hSlopeAngleFront = 0x3A; // CAnimParamHandle
    public const nint m_hSlopeAngleSide = 0x3C; // CAnimParamHandle
    public const nint m_hSlopeHeading = 0x3E; // CAnimParamHandle
    public const nint m_hSlopeNormal = 0x40; // CAnimParamHandle
    public const nint m_hSlopeNormal_WorldSpace = 0x42; // CAnimParamHandle
}

public static class CSlowDownOnSlopesUpdateNode { // CUnaryUpdateNode
    public const nint m_flSlowDownStrength = 0x68; // float
}

public static class CSolveIKChainUpdateNode { // CUnaryUpdateNode
    public const nint m_targetHandles = 0x68; // CUtlVector<CSolveIKTargetHandle_t>
    public const nint m_opFixedData = 0x80; // SolveIKChainPoseOpFixedSettings_t
}

public static class CSolveIKTargetHandle_t {
    public const nint m_positionHandle = 0x0; // CAnimParamHandle
    public const nint m_orientationHandle = 0x2; // CAnimParamHandle
}

public static class CSpeedScaleUpdateNode { // CUnaryUpdateNode
    public const nint m_paramIndex = 0x68; // CAnimParamHandle
}

public static class CStanceOverrideUpdateNode { // CUnaryUpdateNode
    public const nint m_footStanceInfo = 0x68; // CUtlVector<StanceInfo_t>
    public const nint m_pStanceSourceNode = 0x80; // CAnimUpdateNodeRef
    public const nint m_hParameter = 0x90; // CAnimParamHandle
    public const nint m_eMode = 0x94; // StanceOverrideMode
}

public static class CStanceScaleUpdateNode { // CUnaryUpdateNode
    public const nint m_hParam = 0x68; // CAnimParamHandle
}

public static class CStateActionUpdater {
    public const nint m_pAction = 0x0; // CSmartPtr<CAnimActionUpdater>
    public const nint m_eBehavior = 0x8; // StateActionBehavior
}

public static class CStateMachineComponentUpdater { // CAnimComponentUpdater
    public const nint m_stateMachine = 0x30; // CAnimStateMachineUpdater
}

public static class CStateMachineUpdateNode { // CAnimUpdateNodeBase
    public const nint m_stateMachine = 0x68; // CAnimStateMachineUpdater
    public const nint m_stateData = 0xC0; // CUtlVector<CStateNodeStateData>
    public const nint m_transitionData = 0xD8; // CUtlVector<CStateNodeTransitionData>
    public const nint m_bBlockWaningTags = 0xF4; // bool
    public const nint m_bLockStateWhenWaning = 0xF5; // bool
}

public static class CStateNodeStateData {
    public const nint m_pChild = 0x0; // CAnimUpdateNodeRef
    public const nint m_bExclusiveRootMotion = 0x0; // bitfield:1
}

public static class CStateNodeTransitionData {
    public const nint m_curve = 0x0; // CBlendCurve
    public const nint m_blendDuration = 0x8; // CAnimValue<float>
    public const nint m_resetCycleValue = 0x10; // CAnimValue<float>
    public const nint m_bReset = 0x0; // bitfield:1
    public const nint m_resetCycleOption = 0x0; // bitfield:3
}

public static class CStateUpdateData {
    public const nint m_name = 0x0; // CUtlString
    public const nint m_hScript = 0x8; // AnimScriptHandle
    public const nint m_transitionIndices = 0x10; // CUtlVector<int32_t>
    public const nint m_actions = 0x28; // CUtlVector<CStateActionUpdater>
    public const nint m_stateID = 0x40; // AnimStateID
    public const nint m_bIsStartState = 0x0; // bitfield:1
    public const nint m_bIsEndState = 0x0; // bitfield:1
    public const nint m_bIsPassthrough = 0x0; // bitfield:1
}

public static class CStaticPoseCache {
    public const nint m_poses = 0x10; // CUtlVector<CCachedPose>
    public const nint m_nBoneCount = 0x28; // int32_t
    public const nint m_nMorphCount = 0x2C; // int32_t
}

public static class CStaticPoseCacheBuilder { // CStaticPoseCache
}

public static class CStepsRemainingMetricEvaluator { // CMotionMetricEvaluator
    public const nint m_footIndices = 0x50; // CUtlVector<int32_t>
    public const nint m_flMinStepsRemaining = 0x68; // float
}

public static class CStopAtGoalUpdateNode { // CUnaryUpdateNode
    public const nint m_flOuterRadius = 0x6C; // float
    public const nint m_flInnerRadius = 0x70; // float
    public const nint m_flMaxScale = 0x74; // float
    public const nint m_flMinScale = 0x78; // float
    public const nint m_damping = 0x80; // CAnimInputDamping
}

public static class CStringAnimTag { // CAnimTagBase
}

public static class CSubtractUpdateNode { // CBinaryUpdateNode
    public const nint m_footMotionTiming = 0x8C; // BinaryNodeChildOption
    public const nint m_bApplyToFootMotion = 0x90; // bool
    public const nint m_bApplyChannelsSeparately = 0x91; // bool
    public const nint m_bUseModelSpace = 0x92; // bool
}

public static class CSymbolAnimParameter { // CConcreteAnimParameter
    public const nint m_defaultValue = 0x78; // CGlobalSymbol
}

public static class CTaskStatusAnimTag { // CAnimTagBase
}

public static class CTiltTwistConstraint { // CBaseConstraint
    public const nint m_nTargetAxis = 0x70; // int32_t
    public const nint m_nSlaveAxis = 0x74; // int32_t
}

public static class CTimeRemainingMetricEvaluator { // CMotionMetricEvaluator
    public const nint m_bMatchByTimeRemaining = 0x50; // bool
    public const nint m_flMaxTimeRemaining = 0x54; // float
    public const nint m_bFilterByTimeRemaining = 0x58; // bool
    public const nint m_flMinTimeRemaining = 0x5C; // float
}

public static class CToggleComponentActionUpdater { // CAnimActionUpdater
    public const nint m_componentID = 0x18; // AnimComponentID
    public const nint m_bSetEnabled = 0x1C; // bool
}

public static class CTransitionUpdateData {
    public const nint m_srcStateIndex = 0x0; // uint8_t
    public const nint m_destStateIndex = 0x1; // uint8_t
    public const nint m_bDisabled = 0x0; // bitfield:1
}

public static class CTurnHelperUpdateNode { // CUnaryUpdateNode
    public const nint m_facingTarget = 0x6C; // AnimValueSource
    public const nint m_turnStartTimeOffset = 0x70; // float
    public const nint m_turnDuration = 0x74; // float
    public const nint m_bMatchChildDuration = 0x78; // bool
    public const nint m_manualTurnOffset = 0x7C; // float
    public const nint m_bUseManualTurnOffset = 0x80; // bool
}

public static class CTwistConstraint { // CBaseConstraint
    public const nint m_bInverse = 0x70; // bool
    public const nint m_qParentBindRotation = 0x80; // Quaternion
    public const nint m_qChildBindRotation = 0x90; // Quaternion
}

public static class CTwoBoneIKUpdateNode { // CUnaryUpdateNode
    public const nint m_opFixedData = 0x70; // TwoBoneIKSettings_t
}

public static class CUnaryUpdateNode { // CAnimUpdateNodeBase
    public const nint m_pChildNode = 0x58; // CAnimUpdateNodeRef
}

public static class CVPhysXSurfacePropertiesList {
    public const nint m_surfacePropertiesList = 0x0; // CUtlVector<CPhysSurfaceProperties*>
}

public static class CVectorAnimParameter { // CConcreteAnimParameter
    public const nint m_defaultValue = 0x78; // Vector
    public const nint m_bInterpolate = 0x84; // bool
}

public static class CVectorQuantizer {
    public const nint m_centroidVectors = 0x0; // CUtlVector<float>
    public const nint m_nCentroids = 0x18; // int32_t
    public const nint m_nDimensions = 0x1C; // int32_t
}

public static class CVirtualAnimParameter { // CAnimParameterBase
    public const nint m_expressionString = 0x68; // CUtlString
    public const nint m_eParamType = 0x70; // AnimParamType_t
}

public static class CWayPointHelperUpdateNode { // CUnaryUpdateNode
    public const nint m_flStartCycle = 0x6C; // float
    public const nint m_flEndCycle = 0x70; // float
    public const nint m_bOnlyGoals = 0x74; // bool
    public const nint m_bPreventOvershoot = 0x75; // bool
    public const nint m_bPreventUndershoot = 0x76; // bool
}

public static class CZeroPoseUpdateNode { // CLeafUpdateNode
}

public static class ChainToSolveData_t {
    public const nint m_nChainIndex = 0x0; // int32_t
    public const nint m_SolverSettings = 0x4; // IKSolverSettings_t
    public const nint m_TargetSettings = 0x10; // IKTargetSettings_t
    public const nint m_DebugSetting = 0x38; // SolveIKChainAnimNodeDebugSetting
    public const nint m_flDebugNormalizedValue = 0x3C; // float
    public const nint m_vDebugOffset = 0x40; // VectorAligned
}

public static class ConfigIndex {
    public const nint m_nGroup = 0x0; // uint16_t
    public const nint m_nConfig = 0x2; // uint16_t
}

public static class DynamicMeshDeformParams_t {
    public const nint m_flTensionCompressScale = 0x0; // float
    public const nint m_flTensionStretchScale = 0x4; // float
    public const nint m_bRecomputeSmoothNormalsAfterAnimation = 0x8; // bool
    public const nint m_bComputeDynamicMeshTensionAfterAnimation = 0x9; // bool
}

public static class FollowAttachmentSettings_t {
    public const nint m_attachment = 0x0; // CAnimAttachment
    public const nint m_boneIndex = 0x80; // int32_t
    public const nint m_bMatchTranslation = 0x84; // bool
    public const nint m_bMatchRotation = 0x85; // bool
}

public static class FootFixedData_t {
    public const nint m_vToeOffset = 0x0; // VectorAligned
    public const nint m_vHeelOffset = 0x10; // VectorAligned
    public const nint m_nTargetBoneIndex = 0x20; // int32_t
    public const nint m_nAnkleBoneIndex = 0x24; // int32_t
    public const nint m_nIKAnchorBoneIndex = 0x28; // int32_t
    public const nint m_ikChainIndex = 0x2C; // int32_t
    public const nint m_flMaxIKLength = 0x30; // float
    public const nint m_nFootIndex = 0x34; // int32_t
    public const nint m_nTagIndex = 0x38; // int32_t
    public const nint m_flMaxRotationLeft = 0x3C; // float
    public const nint m_flMaxRotationRight = 0x40; // float
}

public static class FootFixedSettings {
    public const nint m_traceSettings = 0x0; // TraceSettings_t
    public const nint m_vFootBaseBindPosePositionMS = 0x10; // VectorAligned
    public const nint m_flFootBaseLength = 0x20; // float
    public const nint m_flMaxRotationLeft = 0x24; // float
    public const nint m_flMaxRotationRight = 0x28; // float
    public const nint m_footstepLandedTagIndex = 0x2C; // int32_t
    public const nint m_bEnableTracing = 0x30; // bool
    public const nint m_flTraceAngleBlend = 0x34; // float
    public const nint m_nDisableTagIndex = 0x38; // int32_t
    public const nint m_nFootIndex = 0x3C; // int32_t
}

public static class FootLockPoseOpFixedSettings {
    public const nint m_footInfo = 0x0; // CUtlVector<FootFixedData_t>
    public const nint m_hipDampingSettings = 0x18; // CAnimInputDamping
    public const nint m_nHipBoneIndex = 0x28; // int32_t
    public const nint m_ikSolverType = 0x2C; // IKSolverType
    public const nint m_bApplyTilt = 0x30; // bool
    public const nint m_bApplyHipDrop = 0x31; // bool
    public const nint m_bAlwaysUseFallbackHinge = 0x32; // bool
    public const nint m_bApplyFootRotationLimits = 0x33; // bool
    public const nint m_bApplyLegTwistLimits = 0x34; // bool
    public const nint m_flMaxFootHeight = 0x38; // float
    public const nint m_flExtensionScale = 0x3C; // float
    public const nint m_flMaxLegTwist = 0x40; // float
    public const nint m_bEnableLockBreaking = 0x44; // bool
    public const nint m_flLockBreakTolerance = 0x48; // float
    public const nint m_flLockBlendTime = 0x4C; // float
    public const nint m_bEnableStretching = 0x50; // bool
    public const nint m_flMaxStretchAmount = 0x54; // float
    public const nint m_flStretchExtensionScale = 0x58; // float
}

public static class FootPinningPoseOpFixedData_t {
    public const nint m_footInfo = 0x0; // CUtlVector<FootFixedData_t>
    public const nint m_flBlendTime = 0x18; // float
    public const nint m_flLockBreakDistance = 0x1C; // float
    public const nint m_flMaxLegTwist = 0x20; // float
    public const nint m_nHipBoneIndex = 0x24; // int32_t
    public const nint m_bApplyLegTwistLimits = 0x28; // bool
    public const nint m_bApplyFootRotationLimits = 0x29; // bool
}

public static class FootStepTrigger {
    public const nint m_tags = 0x0; // CUtlVector<int32_t>
    public const nint m_nFootIndex = 0x18; // int32_t
    public const nint m_triggerPhase = 0x1C; // StepPhase
}

public static class HSequence {
    public const nint m_Value = 0x0; // int32_t
}

public static class HitReactFixedSettings_t {
    public const nint m_nWeightListIndex = 0x0; // int32_t
    public const nint m_nEffectedBoneCount = 0x4; // int32_t
    public const nint m_flMaxImpactForce = 0x8; // float
    public const nint m_flMinImpactForce = 0xC; // float
    public const nint m_flWhipImpactScale = 0x10; // float
    public const nint m_flCounterRotationScale = 0x14; // float
    public const nint m_flDistanceFadeScale = 0x18; // float
    public const nint m_flPropagationScale = 0x1C; // float
    public const nint m_flWhipDelay = 0x20; // float
    public const nint m_flSpringStrength = 0x24; // float
    public const nint m_flWhipSpringStrength = 0x28; // float
    public const nint m_flMaxAngleRadians = 0x2C; // float
    public const nint m_nHipBoneIndex = 0x30; // int32_t
    public const nint m_flHipBoneTranslationScale = 0x34; // float
    public const nint m_flHipDipSpringStrength = 0x38; // float
    public const nint m_flHipDipImpactScale = 0x3C; // float
    public const nint m_flHipDipDelay = 0x40; // float
}

public static class IKBoneNameAndIndex_t {
    public const nint m_Name = 0x0; // CUtlString
}

public static class IKDemoCaptureSettings_t {
    public const nint m_parentBoneName = 0x0; // CUtlString
    public const nint m_eMode = 0x8; // IKChannelMode
    public const nint m_ikChainName = 0x10; // CUtlString
    public const nint m_oneBoneStart = 0x18; // CUtlString
    public const nint m_oneBoneEnd = 0x20; // CUtlString
}

public static class IKSolverSettings_t {
    public const nint m_SolverType = 0x0; // IKSolverType
    public const nint m_nNumIterations = 0x4; // int32_t
}

public static class IKTargetSettings_t {
    public const nint m_TargetSource = 0x0; // IKTargetSource
    public const nint m_Bone = 0x8; // IKBoneNameAndIndex_t
    public const nint m_AnimgraphParameterNamePosition = 0x18; // AnimParamID
    public const nint m_AnimgraphParameterNameOrientation = 0x1C; // AnimParamID
    public const nint m_TargetCoordSystem = 0x20; // IKTargetCoordinateSystem
}

public static class JiggleBoneSettingsList_t {
    public const nint m_boneSettings = 0x0; // CUtlVector<JiggleBoneSettings_t>
}

public static class JiggleBoneSettings_t {
    public const nint m_nBoneIndex = 0x0; // int32_t
    public const nint m_flSpringStrength = 0x4; // float
    public const nint m_flMaxTimeStep = 0x8; // float
    public const nint m_flDamping = 0xC; // float
    public const nint m_vBoundsMaxLS = 0x10; // Vector
    public const nint m_vBoundsMinLS = 0x1C; // Vector
    public const nint m_eSimSpace = 0x28; // JiggleBoneSimSpace
}

public static class LookAtBone_t {
    public const nint m_index = 0x0; // int32_t
    public const nint m_weight = 0x4; // float
}

public static class LookAtOpFixedSettings_t {
    public const nint m_attachment = 0x0; // CAnimAttachment
    public const nint m_damping = 0x80; // CAnimInputDamping
    public const nint m_bones = 0x90; // CUtlVector<LookAtBone_t>
    public const nint m_flYawLimit = 0xA8; // float
    public const nint m_flPitchLimit = 0xAC; // float
    public const nint m_flHysteresisInnerAngle = 0xB0; // float
    public const nint m_flHysteresisOuterAngle = 0xB4; // float
    public const nint m_bRotateYawForward = 0xB8; // bool
    public const nint m_bMaintainUpDirection = 0xB9; // bool
    public const nint m_bTargetIsPosition = 0xBA; // bool
    public const nint m_bUseHysteresis = 0xBB; // bool
}

public static class MaterialGroup_t {
    public const nint m_name = 0x0; // CUtlString
    public const nint m_materials = 0x8; // CUtlVector<CStrongHandle<InfoForResourceTypeIMaterial2>>
}

public static class ModelBoneFlexDriverControl_t {
    public const nint m_nBoneComponent = 0x0; // ModelBoneFlexComponent_t
    public const nint m_flexController = 0x8; // CUtlString
    public const nint m_flexControllerToken = 0x10; // uint32_t
    public const nint m_flMin = 0x14; // float
    public const nint m_flMax = 0x18; // float
}

public static class ModelBoneFlexDriver_t {
    public const nint m_boneName = 0x0; // CUtlString
    public const nint m_boneNameToken = 0x8; // uint32_t
    public const nint m_controls = 0x10; // CUtlVector<ModelBoneFlexDriverControl_t>
}

public static class ModelSkeletonData_t {
    public const nint m_boneName = 0x0; // CUtlVector<CUtlString>
    public const nint m_nParent = 0x18; // CUtlVector<int16_t>
    public const nint m_boneSphere = 0x30; // CUtlVector<float>
    public const nint m_nFlag = 0x48; // CUtlVector<uint32_t>
    public const nint m_bonePosParent = 0x60; // CUtlVector<Vector>
    public const nint m_boneRotParent = 0x78; // CUtlVector<QuaternionStorage>
    public const nint m_boneScaleParent = 0x90; // CUtlVector<float>
}

public static class MoodAnimationLayer_t {
    public const nint m_sName = 0x0; // CUtlString
    public const nint m_bActiveListening = 0x8; // bool
    public const nint m_bActiveTalking = 0x9; // bool
    public const nint m_layerAnimations = 0x10; // CUtlVector<MoodAnimation_t>
    public const nint m_flIntensity = 0x28; // CRangeFloat
    public const nint m_flDurationScale = 0x30; // CRangeFloat
    public const nint m_bScaleWithInts = 0x38; // bool
    public const nint m_flNextStart = 0x3C; // CRangeFloat
    public const nint m_flStartOffset = 0x44; // CRangeFloat
    public const nint m_flEndOffset = 0x4C; // CRangeFloat
    public const nint m_flFadeIn = 0x54; // float
    public const nint m_flFadeOut = 0x58; // float
}

public static class MoodAnimation_t {
    public const nint m_sName = 0x0; // CUtlString
    public const nint m_flWeight = 0x8; // float
}

public static class MotionBlendItem {
    public const nint m_pChild = 0x0; // CSmartPtr<CMotionNode>
    public const nint m_flKeyValue = 0x8; // float
}

public static class MotionDBIndex {
    public const nint m_nIndex = 0x0; // uint32_t
}

public static class MotionIndex {
    public const nint m_nGroup = 0x0; // uint16_t
    public const nint m_nMotion = 0x2; // uint16_t
}

public static class NmCompressionSettings_t {
    public const nint m_translationRangeX = 0x0; // NmCompressionSettings_t::QuantizationRange_t
    public const nint m_translationRangeY = 0x8; // NmCompressionSettings_t::QuantizationRange_t
    public const nint m_translationRangeZ = 0x10; // NmCompressionSettings_t::QuantizationRange_t
    public const nint m_scaleRange = 0x18; // NmCompressionSettings_t::QuantizationRange_t
    public const nint m_constantRotation = 0x20; // Quaternion
    public const nint m_bIsRotationStatic = 0x30; // bool
    public const nint m_bIsTranslationStatic = 0x31; // bool
    public const nint m_bIsScaleStatic = 0x32; // bool
}

public static class NmCompressionSettings_t_QuantizationRange_t {
    public const nint m_flRangeStart = 0x0; // float
    public const nint m_flRangeLength = 0x4; // float
}

public static class NmPercent_t {
    public const nint m_flValue = 0x0; // float
}

public static class NmSyncTrackTimeRange_t {
    public const nint m_startTime = 0x0; // NmSyncTrackTime_t
    public const nint m_endTime = 0x8; // NmSyncTrackTime_t
}

public static class NmSyncTrackTime_t {
    public const nint m_nEventIdx = 0x0; // int32_t
    public const nint m_percentageThrough = 0x4; // NmPercent_t
}

public static class ParamSpanSample_t {
    public const nint m_value = 0x0; // CAnimVariant
    public const nint m_flCycle = 0x14; // float
}

public static class ParamSpan_t {
    public const nint m_samples = 0x0; // CUtlVector<ParamSpanSample_t>
    public const nint m_hParam = 0x18; // CAnimParamHandle
    public const nint m_eParamType = 0x1A; // AnimParamType_t
    public const nint m_flStartCycle = 0x1C; // float
    public const nint m_flEndCycle = 0x20; // float
}

public static class PermModelDataAnimatedMaterialAttribute_t {
    public const nint m_AttributeName = 0x0; // CUtlString
    public const nint m_nNumChannels = 0x8; // int32_t
}

public static class PermModelData_t {
    public const nint m_name = 0x0; // CUtlString
    public const nint m_modelInfo = 0x8; // PermModelInfo_t
    public const nint m_ExtParts = 0x60; // CUtlVector<PermModelExtPart_t>
    public const nint m_refMeshes = 0x78; // CUtlVector<CStrongHandle<InfoForResourceTypeCRenderMesh>>
    public const nint m_refMeshGroupMasks = 0x90; // CUtlVector<uint64_t>
    public const nint m_refPhysGroupMasks = 0xA8; // CUtlVector<uint64_t>
    public const nint m_refLODGroupMasks = 0xC0; // CUtlVector<uint8_t>
    public const nint m_lodGroupSwitchDistances = 0xD8; // CUtlVector<float>
    public const nint m_refPhysicsData = 0xF0; // CUtlVector<CStrongHandle<InfoForResourceTypeCPhysAggregateData>>
    public const nint m_refPhysicsHitboxData = 0x108; // CUtlVector<CStrongHandle<InfoForResourceTypeCPhysAggregateData>>
    public const nint m_refAnimGroups = 0x120; // CUtlVector<CStrongHandle<InfoForResourceTypeCAnimationGroup>>
    public const nint m_refSequenceGroups = 0x138; // CUtlVector<CStrongHandle<InfoForResourceTypeCSequenceGroupData>>
    public const nint m_meshGroups = 0x150; // CUtlVector<CUtlString>
    public const nint m_materialGroups = 0x168; // CUtlVector<MaterialGroup_t>
    public const nint m_nDefaultMeshGroupMask = 0x180; // uint64_t
    public const nint m_modelSkeleton = 0x188; // ModelSkeletonData_t
    public const nint m_remappingTable = 0x230; // CUtlVector<int16_t>
    public const nint m_remappingTableStarts = 0x248; // CUtlVector<uint16_t>
    public const nint m_boneFlexDrivers = 0x260; // CUtlVector<ModelBoneFlexDriver_t>
    public const nint m_pModelConfigList = 0x278; // CModelConfigList*
    public const nint m_BodyGroupsHiddenInTools = 0x280; // CUtlVector<CUtlString>
    public const nint m_refAnimIncludeModels = 0x298; // CUtlVector<CStrongHandle<InfoForResourceTypeCModel>>
    public const nint m_AnimatedMaterialAttributes = 0x2B0; // CUtlVector<PermModelDataAnimatedMaterialAttribute_t>
}

public static class PermModelExtPart_t {
    public const nint m_Transform = 0x0; // CTransform
    public const nint m_Name = 0x20; // CUtlString
    public const nint m_nParent = 0x28; // int32_t
    public const nint m_refModel = 0x30; // CStrongHandle<InfoForResourceTypeCModel>
}

public static class PermModelInfo_t {
    public const nint m_nFlags = 0x0; // uint32_t
    public const nint m_vHullMin = 0x4; // Vector
    public const nint m_vHullMax = 0x10; // Vector
    public const nint m_vViewMin = 0x1C; // Vector
    public const nint m_vViewMax = 0x28; // Vector
    public const nint m_flMass = 0x34; // float
    public const nint m_vEyePosition = 0x38; // Vector
    public const nint m_flMaxEyeDeflection = 0x44; // float
    public const nint m_sSurfaceProperty = 0x48; // CUtlString
    public const nint m_keyValueText = 0x50; // CUtlString
}

public static class PhysSoftbodyDesc_t {
    public const nint m_ParticleBoneHash = 0x0; // CUtlVector<uint32_t>
    public const nint m_Particles = 0x18; // CUtlVector<RnSoftbodyParticle_t>
    public const nint m_Springs = 0x30; // CUtlVector<RnSoftbodySpring_t>
    public const nint m_Capsules = 0x48; // CUtlVector<RnSoftbodyCapsule_t>
    public const nint m_InitPose = 0x60; // CUtlVector<CTransform>
    public const nint m_ParticleBoneName = 0x78; // CUtlVector<CUtlString>
}

public static class RenderHairStrandInfo_t {
    public const nint m_nGuideIdx = 0x0; // uint32_t[3]
    public const nint m_nBaseTriIdx = 0xC; // uint32_t
    public const nint m_vGuideBarycentric = 0x10; // Vector2D
    public const nint m_vBaseBarycentric = 0x18; // Vector2D
    public const nint m_vRootOffset_flLengthScale = 0x20; // uint16_t[4]
    public const nint m_nPackedBaseMeshUv = 0x28; // uint32_t
    public const nint m_nPad = 0x2C; // uint32_t
}

public static class RenderSkeletonBone_t {
    public const nint m_boneName = 0x0; // CUtlString
    public const nint m_parentName = 0x8; // CUtlString
    public const nint m_invBindPose = 0x10; // matrix3x4_t
    public const nint m_bbox = 0x40; // SkeletonBoneBounds_t
    public const nint m_flSphereRadius = 0x58; // float
}

public static class SampleCode {
    public const nint m_subCode = 0x0; // uint8_t[8]
}

public static class ScriptInfo_t {
    public const nint m_code = 0x0; // CUtlString
    public const nint m_paramsModified = 0x8; // CUtlVector<CAnimParamHandle>
    public const nint m_proxyReadParams = 0x20; // CUtlVector<int32_t>
    public const nint m_proxyWriteParams = 0x38; // CUtlVector<int32_t>
    public const nint m_eScriptType = 0x50; // AnimScriptType
}

public static class SkeletonAnimCapture_t {
    public const nint m_nEntIndex = 0x0; // CEntityIndex
    public const nint m_nEntParent = 0x4; // CEntityIndex
    public const nint m_ImportedCollision = 0x8; // CUtlVector<CEntityIndex>
    public const nint m_ModelName = 0x20; // CUtlString
    public const nint m_CaptureName = 0x28; // CUtlString
    public const nint m_ModelBindPose = 0x30; // CUtlVector<SkeletonAnimCapture_t::Bone_t>
    public const nint m_FeModelInitPose = 0x48; // CUtlVector<SkeletonAnimCapture_t::Bone_t>
    public const nint m_nFlexControllers = 0x60; // int32_t
    public const nint m_bPredicted = 0x64; // bool
    public const nint m_Frames = 0xA8; // CUtlVector<SkeletonAnimCapture_t::Frame_t>
}

public static class SkeletonAnimCapture_t_Bone_t {
    public const nint m_Name = 0x0; // CUtlString
    public const nint m_BindPose = 0x10; // CTransform
    public const nint m_nParent = 0x30; // int32_t
}

public static class SkeletonAnimCapture_t_Camera_t {
    public const nint m_tmCamera = 0x0; // CTransform
    public const nint m_flTime = 0x20; // float
}

public static class SkeletonAnimCapture_t_FrameStamp_t {
    public const nint m_flTime = 0x0; // float
    public const nint m_flEntitySimTime = 0x4; // float
    public const nint m_bTeleportTick = 0x8; // bool
    public const nint m_bPredicted = 0x9; // bool
    public const nint m_flCurTime = 0xC; // float
    public const nint m_flRealTime = 0x10; // float
    public const nint m_nFrameCount = 0x14; // int32_t
    public const nint m_nTickCount = 0x18; // int32_t
}

public static class SkeletonAnimCapture_t_Frame_t {
    public const nint m_flTime = 0x0; // float
    public const nint m_Stamp = 0x4; // SkeletonAnimCapture_t::FrameStamp_t
    public const nint m_Transform = 0x20; // CTransform
    public const nint m_bTeleport = 0x40; // bool
    public const nint m_CompositeBones = 0x48; // CUtlVector<CTransform>
    public const nint m_SimStateBones = 0x60; // CUtlVector<CTransform>
    public const nint m_FeModelAnims = 0x78; // CUtlVector<CTransform>
    public const nint m_FeModelPos = 0x90; // CUtlVector<VectorAligned>
    public const nint m_FlexControllerWeights = 0xA8; // CUtlVector<float>
}

public static class SkeletonBoneBounds_t {
    public const nint m_vecCenter = 0x0; // Vector
    public const nint m_vecSize = 0xC; // Vector
}

public static class SkeletonDemoDb_t {
    public const nint m_AnimCaptures = 0x0; // CUtlVector<SkeletonAnimCapture_t*>
    public const nint m_CameraTrack = 0x18; // CUtlVector<SkeletonAnimCapture_t::Camera_t>
    public const nint m_flRecordingTime = 0x30; // float
}

public static class SolveIKChainPoseOpFixedSettings_t {
    public const nint m_ChainsToSolveData = 0x0; // CUtlVector<ChainToSolveData_t>
    public const nint m_bMatchTargetOrientation = 0x18; // bool
}

public static class StanceInfo_t {
    public const nint m_vPosition = 0x0; // Vector
    public const nint m_flDirection = 0xC; // float
}

public static class TagSpan_t {
    public const nint m_tagIndex = 0x0; // int32_t
    public const nint m_startCycle = 0x4; // float
    public const nint m_endCycle = 0x8; // float
}

public static class TraceSettings_t {
    public const nint m_flTraceHeight = 0x0; // float
    public const nint m_flTraceRadius = 0x4; // float
}

public static class TwoBoneIKSettings_t {
    public const nint m_endEffectorType = 0x0; // IkEndEffectorType
    public const nint m_endEffectorAttachment = 0x10; // CAnimAttachment
    public const nint m_targetType = 0x90; // IkTargetType
    public const nint m_targetAttachment = 0xA0; // CAnimAttachment
    public const nint m_targetBoneIndex = 0x120; // int32_t
    public const nint m_hPositionParam = 0x124; // CAnimParamHandle
    public const nint m_hRotationParam = 0x126; // CAnimParamHandle
    public const nint m_bAlwaysUseFallbackHinge = 0x128; // bool
    public const nint m_vLsFallbackHingeAxis = 0x130; // VectorAligned
    public const nint m_nFixedBoneIndex = 0x140; // int32_t
    public const nint m_nMiddleBoneIndex = 0x144; // int32_t
    public const nint m_nEndBoneIndex = 0x148; // int32_t
    public const nint m_bMatchTargetOrientation = 0x14C; // bool
    public const nint m_bConstrainTwist = 0x14D; // bool
    public const nint m_flMaxTwist = 0x150; // float
}

public static class VPhysXAggregateData_t {
    public const nint m_nFlags = 0x0; // uint16_t
    public const nint m_nRefCounter = 0x2; // uint16_t
    public const nint m_bonesHash = 0x8; // CUtlVector<uint32_t>
    public const nint m_boneNames = 0x20; // CUtlVector<CUtlString>
    public const nint m_indexNames = 0x38; // CUtlVector<uint16_t>
    public const nint m_indexHash = 0x50; // CUtlVector<uint16_t>
    public const nint m_bindPose = 0x68; // CUtlVector<matrix3x4a_t>
    public const nint m_parts = 0x80; // CUtlVector<VPhysXBodyPart_t>
    public const nint m_constraints2 = 0x98; // CUtlVector<VPhysXConstraint2_t>
    public const nint m_joints = 0xB0; // CUtlVector<VPhysXJoint_t>
    public const nint m_pFeModel = 0xC8; // PhysFeModelDesc_t*
    public const nint m_boneParents = 0xD0; // CUtlVector<uint16_t>
    public const nint m_surfacePropertyHashes = 0xE8; // CUtlVector<uint32_t>
    public const nint m_collisionAttributes = 0x100; // CUtlVector<VPhysXCollisionAttributes_t>
    public const nint m_debugPartNames = 0x118; // CUtlVector<CUtlString>
    public const nint m_embeddedKeyvalues = 0x130; // CUtlString
}

public static class VPhysXBodyPart_t {
    public const nint m_nFlags = 0x0; // uint32_t
    public const nint m_flMass = 0x4; // float
    public const nint m_rnShape = 0x8; // VPhysics2ShapeDef_t
    public const nint m_nCollisionAttributeIndex = 0x80; // uint16_t
    public const nint m_nReserved = 0x82; // uint16_t
    public const nint m_flInertiaScale = 0x84; // float
    public const nint m_flLinearDamping = 0x88; // float
    public const nint m_flAngularDamping = 0x8C; // float
    public const nint m_bOverrideMassCenter = 0x90; // bool
    public const nint m_vMassCenterOverride = 0x94; // Vector
}

public static class VPhysXCollisionAttributes_t {
    public const nint m_CollisionGroup = 0x0; // uint32_t
    public const nint m_InteractAs = 0x8; // CUtlVector<uint32_t>
    public const nint m_InteractWith = 0x20; // CUtlVector<uint32_t>
    public const nint m_InteractExclude = 0x38; // CUtlVector<uint32_t>
    public const nint m_CollisionGroupString = 0x50; // CUtlString
    public const nint m_InteractAsStrings = 0x58; // CUtlVector<CUtlString>
    public const nint m_InteractWithStrings = 0x70; // CUtlVector<CUtlString>
    public const nint m_InteractExcludeStrings = 0x88; // CUtlVector<CUtlString>
}

public static class VPhysXConstraint2_t {
    public const nint m_nFlags = 0x0; // uint32_t
    public const nint m_nParent = 0x4; // uint16_t
    public const nint m_nChild = 0x6; // uint16_t
    public const nint m_params = 0x8; // VPhysXConstraintParams_t
}

public static class VPhysXConstraintParams_t {
    public const nint m_nType = 0x0; // int8_t
    public const nint m_nTranslateMotion = 0x1; // int8_t
    public const nint m_nRotateMotion = 0x2; // int8_t
    public const nint m_nFlags = 0x3; // int8_t
    public const nint m_anchor = 0x4; // Vector[2]
    public const nint m_axes = 0x1C; // QuaternionStorage[2]
    public const nint m_maxForce = 0x3C; // float
    public const nint m_maxTorque = 0x40; // float
    public const nint m_linearLimitValue = 0x44; // float
    public const nint m_linearLimitRestitution = 0x48; // float
    public const nint m_linearLimitSpring = 0x4C; // float
    public const nint m_linearLimitDamping = 0x50; // float
    public const nint m_twistLowLimitValue = 0x54; // float
    public const nint m_twistLowLimitRestitution = 0x58; // float
    public const nint m_twistLowLimitSpring = 0x5C; // float
    public const nint m_twistLowLimitDamping = 0x60; // float
    public const nint m_twistHighLimitValue = 0x64; // float
    public const nint m_twistHighLimitRestitution = 0x68; // float
    public const nint m_twistHighLimitSpring = 0x6C; // float
    public const nint m_twistHighLimitDamping = 0x70; // float
    public const nint m_swing1LimitValue = 0x74; // float
    public const nint m_swing1LimitRestitution = 0x78; // float
    public const nint m_swing1LimitSpring = 0x7C; // float
    public const nint m_swing1LimitDamping = 0x80; // float
    public const nint m_swing2LimitValue = 0x84; // float
    public const nint m_swing2LimitRestitution = 0x88; // float
    public const nint m_swing2LimitSpring = 0x8C; // float
    public const nint m_swing2LimitDamping = 0x90; // float
    public const nint m_goalPosition = 0x94; // Vector
    public const nint m_goalOrientation = 0xA0; // QuaternionStorage
    public const nint m_goalAngularVelocity = 0xB0; // Vector
    public const nint m_driveSpringX = 0xBC; // float
    public const nint m_driveSpringY = 0xC0; // float
    public const nint m_driveSpringZ = 0xC4; // float
    public const nint m_driveDampingX = 0xC8; // float
    public const nint m_driveDampingY = 0xCC; // float
    public const nint m_driveDampingZ = 0xD0; // float
    public const nint m_driveSpringTwist = 0xD4; // float
    public const nint m_driveSpringSwing = 0xD8; // float
    public const nint m_driveSpringSlerp = 0xDC; // float
    public const nint m_driveDampingTwist = 0xE0; // float
    public const nint m_driveDampingSwing = 0xE4; // float
    public const nint m_driveDampingSlerp = 0xE8; // float
    public const nint m_solverIterationCount = 0xEC; // int32_t
    public const nint m_projectionLinearTolerance = 0xF0; // float
    public const nint m_projectionAngularTolerance = 0xF4; // float
}

public static class VPhysXJoint_t {
    public const nint m_nType = 0x0; // uint16_t
    public const nint m_nBody1 = 0x2; // uint16_t
    public const nint m_nBody2 = 0x4; // uint16_t
    public const nint m_nFlags = 0x6; // uint16_t
    public const nint m_Frame1 = 0x10; // CTransform
    public const nint m_Frame2 = 0x30; // CTransform
    public const nint m_bEnableCollision = 0x50; // bool
    public const nint m_bEnableLinearLimit = 0x51; // bool
    public const nint m_LinearLimit = 0x54; // VPhysXRange_t
    public const nint m_bEnableLinearMotor = 0x5C; // bool
    public const nint m_vLinearTargetVelocity = 0x60; // Vector
    public const nint m_flMaxForce = 0x6C; // float
    public const nint m_bEnableSwingLimit = 0x70; // bool
    public const nint m_SwingLimit = 0x74; // VPhysXRange_t
    public const nint m_bEnableTwistLimit = 0x7C; // bool
    public const nint m_TwistLimit = 0x80; // VPhysXRange_t
    public const nint m_bEnableAngularMotor = 0x88; // bool
    public const nint m_vAngularTargetVelocity = 0x8C; // Vector
    public const nint m_flMaxTorque = 0x98; // float
    public const nint m_flLinearFrequency = 0x9C; // float
    public const nint m_flLinearDampingRatio = 0xA0; // float
    public const nint m_flAngularFrequency = 0xA4; // float
    public const nint m_flAngularDampingRatio = 0xA8; // float
    public const nint m_flFriction = 0xAC; // float
}

public static class VPhysXRange_t {
    public const nint m_flMin = 0x0; // float
    public const nint m_flMax = 0x4; // float
}

public static class VPhysics2ShapeDef_t {
    public const nint m_spheres = 0x0; // CUtlVector<RnSphereDesc_t>
    public const nint m_capsules = 0x18; // CUtlVector<RnCapsuleDesc_t>
    public const nint m_hulls = 0x30; // CUtlVector<RnHullDesc_t>
    public const nint m_meshes = 0x48; // CUtlVector<RnMeshDesc_t>
    public const nint m_CollisionAttributeIndices = 0x60; // CUtlVector<uint16_t>
}

public static class WeightList {
    public const nint m_name = 0x0; // CUtlString
    public const nint m_weights = 0x8; // CUtlVector<float>
}