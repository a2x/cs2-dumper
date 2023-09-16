public static class AimMatrixOpFixedSettings_t {
    public const ulong m_attachment = 0x0;
    public const ulong m_damping = 0x80;
    public const ulong m_poseCacheHandles = 0x90;
    public const ulong m_eBlendMode = 0xb8;
    public const ulong m_fAngleIncrement = 0xbc;
    public const ulong m_nSequenceMaxFrame = 0xc0;
    public const ulong m_nBoneMaskIndex = 0xc4;
    public const ulong m_bTargetIsPosition = 0xc8;
}

public static class AnimComponentID {
    public const ulong m_id = 0x0;
}

public static class AnimNodeID {
    public const ulong m_id = 0x0;
}

public static class AnimNodeOutputID {
    public const ulong m_id = 0x0;
}

public static class AnimParamID {
    public const ulong m_id = 0x0;
}

public static class AnimScriptHandle {
    public const ulong m_id = 0x0;
}

public static class AnimStateID {
    public const ulong m_id = 0x0;
}

public static class AnimTagID {
    public const ulong m_id = 0x0;
}

public static class AnimationDecodeDebugDumpElement_t {
    public const ulong m_nEntityIndex = 0x0;
    public const ulong m_modelName = 0x8;
    public const ulong m_poseParams = 0x10;
    public const ulong m_decodeOps = 0x28;
    public const ulong m_internalOps = 0x40;
    public const ulong m_decodedAnims = 0x58;
}

public static class AnimationDecodeDebugDump_t {
    public const ulong m_processingType = 0x0;
    public const ulong m_elems = 0x8;
}

public static class AnimationSnapshotBase_t {
    public const ulong m_flRealTime = 0x0;
    public const ulong m_rootToWorld = 0x10;
    public const ulong m_bBonesInWorldSpace = 0x40;
    public const ulong m_boneSetupMask = 0x48;
    public const ulong m_boneTransforms = 0x60;
    public const ulong m_flexControllers = 0x78;
    public const ulong m_SnapshotType = 0x90;
    public const ulong m_bHasDecodeDump = 0x94;
    public const ulong m_DecodeDump = 0x98;
}

public static class AnimationSnapshot_t {
    public const ulong m_nEntIndex = 0x110;
    public const ulong m_modelName = 0x118;
}

public static class AttachmentHandle_t {
    public const ulong m_Value = 0x0;
}

public static class BlendItem_t {
    public const ulong m_tags = 0x0;
    public const ulong m_pChild = 0x18;
    public const ulong m_hSequence = 0x28;
    public const ulong m_vPos = 0x2c;
    public const ulong m_flDuration = 0x34;
    public const ulong m_bUseCustomDuration = 0x38;
}

public static class BoneDemoCaptureSettings_t {
    public const ulong m_boneName = 0x0;
}

public static class CActionComponentUpdater {
    public const ulong m_actions = 0x30;
}

public static class CAddUpdateNode {
    public const ulong m_footMotionTiming = 0x8c;
    public const ulong m_bApplyToFootMotion = 0x90;
    public const ulong m_bApplyChannelsSeparately = 0x91;
    public const ulong m_bUseModelSpace = 0x92;
}

public static class CAimConstraint {
    public const ulong m_qAimOffset = 0x70;
    public const ulong m_nUpType = 0x80;
}

public static class CAimMatrixUpdateNode {
    public const ulong m_opFixedSettings = 0x70;
    public const ulong m_target = 0x148;
    public const ulong m_paramIndex = 0x14c;
    public const ulong m_hSequence = 0x150;
    public const ulong m_bResetChild = 0x154;
    public const ulong m_bLockWhenWaning = 0x155;
}

public static class CAnimActivity {
    public const ulong m_name = 0x0;
    public const ulong m_nActivity = 0x10;
    public const ulong m_nFlags = 0x14;
    public const ulong m_nWeight = 0x18;
}

public static class CAnimAttachment {
    public const ulong m_influenceRotations = 0x0;
    public const ulong m_influenceOffsets = 0x30;
    public const ulong m_influenceIndices = 0x60;
    public const ulong m_influenceWeights = 0x6c;
    public const ulong m_numInfluences = 0x78;
}

public static class CAnimBone {
    public const ulong m_name = 0x0;
    public const ulong m_parent = 0x10;
    public const ulong m_pos = 0x14;
    public const ulong m_quat = 0x20;
    public const ulong m_scale = 0x30;
    public const ulong m_qAlignment = 0x34;
    public const ulong m_flags = 0x44;
}

public static class CAnimBoneDifference {
    public const ulong m_name = 0x0;
    public const ulong m_parent = 0x10;
    public const ulong m_posError = 0x20;
    public const ulong m_bHasRotation = 0x2c;
    public const ulong m_bHasMovement = 0x2d;
}

public static class CAnimComponentUpdater {
    public const ulong m_name = 0x18;
    public const ulong m_id = 0x20;
    public const ulong m_networkMode = 0x24;
    public const ulong m_bStartEnabled = 0x28;
}

public static class CAnimData {
    public const ulong m_name = 0x10;
    public const ulong m_animArray = 0x20;
    public const ulong m_decoderArray = 0x38;
    public const ulong m_nMaxUniqueFrameIndex = 0x50;
    public const ulong m_segmentArray = 0x58;
}

public static class CAnimDataChannelDesc {
    public const ulong m_szChannelClass = 0x0;
    public const ulong m_szVariableName = 0x10;
    public const ulong m_nFlags = 0x20;
    public const ulong m_nType = 0x24;
    public const ulong m_szGrouping = 0x28;
    public const ulong m_szDescription = 0x38;
    public const ulong m_szElementNameArray = 0x48;
    public const ulong m_nElementIndexArray = 0x60;
    public const ulong m_nElementMaskArray = 0x78;
}

public static class CAnimDecoder {
    public const ulong m_szName = 0x0;
    public const ulong m_nVersion = 0x10;
    public const ulong m_nType = 0x14;
}

public static class CAnimDemoCaptureSettings {
    public const ulong m_flMaxSplineErrorRotation = 0x0;
    public const ulong m_flMaxSplineErrorTranslation = 0x4;
    public const ulong m_flMaxSplineErrorScale = 0x8;
    public const ulong m_flIkRotation_MaxSplineError = 0xc;
    public const ulong m_flIkTranslation_MaxSplineError = 0x10;
    public const ulong m_flMaxQuantizationErrorRotation = 0x14;
    public const ulong m_flMaxQuantizationErrorTranslation = 0x18;
    public const ulong m_flMaxQuantizationErrorScale = 0x1c;
    public const ulong m_flIkRotation_MaxQuantizationError = 0x20;
    public const ulong m_flIkTranslation_MaxQuantizationError = 0x24;
    public const ulong m_baseSequence = 0x28;
    public const ulong m_nBaseSequenceFrame = 0x30;
    public const ulong m_boneSelectionMode = 0x34;
    public const ulong m_bones = 0x38;
    public const ulong m_ikChains = 0x50;
}

public static class CAnimDesc {
    public const ulong m_name = 0x0;
    public const ulong m_flags = 0x10;
    public const ulong fps = 0x18;
    public const ulong m_Data = 0x20;
    public const ulong m_movementArray = 0xf8;
    public const ulong m_eventArray = 0x110;
    public const ulong m_activityArray = 0x128;
    public const ulong m_hierarchyArray = 0x140;
    public const ulong framestalltime = 0x158;
    public const ulong m_vecRootMin = 0x15c;
    public const ulong m_vecRootMax = 0x168;
    public const ulong m_vecBoneWorldMin = 0x178;
    public const ulong m_vecBoneWorldMax = 0x190;
    public const ulong m_sequenceParams = 0x1a8;
}

public static class CAnimDesc_Flag {
    public const ulong m_bLooping = 0x0;
    public const ulong m_bAllZeros = 0x1;
    public const ulong m_bHidden = 0x2;
    public const ulong m_bDelta = 0x3;
    public const ulong m_bLegacyWorldspace = 0x4;
    public const ulong m_bModelDoc = 0x5;
    public const ulong m_bImplicitSeqIgnoreDelta = 0x6;
    public const ulong m_bAnimGraphAdditive = 0x7;
}

public static class CAnimEncodeDifference {
    public const ulong m_boneArray = 0x0;
    public const ulong m_morphArray = 0x18;
    public const ulong m_userArray = 0x30;
    public const ulong m_bHasRotationBitArray = 0x48;
    public const ulong m_bHasMovementBitArray = 0x60;
    public const ulong m_bHasMorphBitArray = 0x78;
    public const ulong m_bHasUserBitArray = 0x90;
}

public static class CAnimEncodedFrames {
    public const ulong m_fileName = 0x0;
    public const ulong m_nFrames = 0x10;
    public const ulong m_nFramesPerBlock = 0x14;
    public const ulong m_frameblockArray = 0x18;
    public const ulong m_usageDifferences = 0x30;
}

public static class CAnimEnum {
    public const ulong m_value = 0x0;
}

public static class CAnimEventDefinition {
    public const ulong m_nFrame = 0x8;
    public const ulong m_flCycle = 0xc;
    public const ulong m_EventData = 0x10;
    public const ulong m_sLegacyOptions = 0x20;
    public const ulong m_sEventName = 0x30;
}

public static class CAnimFoot {
    public const ulong m_name = 0x0;
    public const ulong m_vBallOffset = 0x8;
    public const ulong m_vHeelOffset = 0x14;
    public const ulong m_ankleBoneIndex = 0x20;
    public const ulong m_toeBoneIndex = 0x24;
}

public static class CAnimFrameBlockAnim {
    public const ulong m_nStartFrame = 0x0;
    public const ulong m_nEndFrame = 0x4;
    public const ulong m_segmentIndexArray = 0x8;
}

public static class CAnimFrameSegment {
    public const ulong m_nUniqueFrameIndex = 0x0;
    public const ulong m_nLocalElementMasks = 0x4;
    public const ulong m_nLocalChannel = 0x8;
    public const ulong m_container = 0x10;
}

public static class CAnimGraphDebugReplay {
    public const ulong m_animGraphFileName = 0x40;
    public const ulong m_frameList = 0x48;
    public const ulong m_startIndex = 0x60;
    public const ulong m_writeIndex = 0x64;
    public const ulong m_frameCount = 0x68;
}

public static class CAnimGraphModelBinding {
    public const ulong m_modelName = 0x8;
    public const ulong m_pSharedData = 0x10;
}

public static class CAnimGraphNetworkSettings {
    public const ulong m_bNetworkingEnabled = 0x20;
}

public static class CAnimGraphSettingsManager {
    public const ulong m_settingsGroups = 0x18;
}

public static class CAnimInputDamping {
    public const ulong m_speedFunction = 0x8;
    public const ulong m_fSpeedScale = 0xc;
}

public static class CAnimKeyData {
    public const ulong m_name = 0x0;
    public const ulong m_boneArray = 0x10;
    public const ulong m_userArray = 0x28;
    public const ulong m_morphArray = 0x40;
    public const ulong m_nChannelElements = 0x58;
    public const ulong m_dataChannelArray = 0x60;
}

public static class CAnimLocalHierarchy {
    public const ulong m_sBone = 0x0;
    public const ulong m_sNewParent = 0x10;
    public const ulong m_nStartFrame = 0x20;
    public const ulong m_nPeakFrame = 0x24;
    public const ulong m_nTailFrame = 0x28;
    public const ulong m_nEndFrame = 0x2c;
}

public static class CAnimMorphDifference {
    public const ulong m_name = 0x0;
}

public static class CAnimMotorUpdaterBase {
    public const ulong m_name = 0x10;
    public const ulong m_bDefault = 0x18;
}

public static class CAnimMovement {
    public const ulong endframe = 0x0;
    public const ulong motionflags = 0x4;
    public const ulong v0 = 0x8;
    public const ulong v1 = 0xc;
    public const ulong angle = 0x10;
    public const ulong vector = 0x14;
    public const ulong position = 0x20;
}

public static class CAnimNodePath {
    public const ulong m_path = 0x0;
    public const ulong m_nCount = 0x2c;
}

public static class CAnimParamHandle {
    public const ulong m_type = 0x0;
    public const ulong m_index = 0x1;
}

public static class CAnimParamHandleMap {
    public const ulong m_list = 0x0;
}

public static class CAnimParameterBase {
    public const ulong m_name = 0x18;
    public const ulong m_group = 0x20;
    public const ulong m_id = 0x28;
    public const ulong m_componentName = 0x40;
    public const ulong m_bNetworkingRequested = 0x4c;
    public const ulong m_bIsReferenced = 0x4d;
}

public static class CAnimParameterManagerUpdater {
    public const ulong m_parameters = 0x18;
    public const ulong m_idToIndexMap = 0x30;
    public const ulong m_nameToIndexMap = 0x50;
    public const ulong m_indexToHandle = 0x70;
    public const ulong m_autoResetParams = 0x88;
    public const ulong m_autoResetMap = 0xa0;
}

public static class CAnimReplayFrame {
    public const ulong m_inputDataBlocks = 0x10;
    public const ulong m_instanceData = 0x28;
    public const ulong m_startingLocalToWorldTransform = 0x40;
    public const ulong m_localToWorldTransform = 0x60;
    public const ulong m_timeStamp = 0x80;
}

public static class CAnimScriptComponentUpdater {
    public const ulong m_hScript = 0x30;
}

public static class CAnimScriptManager {
    public const ulong m_scriptInfo = 0x10;
}

public static class CAnimSequenceParams {
    public const ulong m_flFadeInTime = 0x0;
    public const ulong m_flFadeOutTime = 0x4;
}

public static class CAnimSkeleton {
    public const ulong m_localSpaceTransforms = 0x10;
    public const ulong m_modelSpaceTransforms = 0x28;
    public const ulong m_boneNames = 0x40;
    public const ulong m_children = 0x58;
    public const ulong m_parents = 0x70;
    public const ulong m_feet = 0x88;
    public const ulong m_morphNames = 0xa0;
    public const ulong m_lodBoneCounts = 0xb8;
}

public static class CAnimStateMachineUpdater {
    public const ulong m_states = 0x8;
    public const ulong m_transitions = 0x20;
    public const ulong m_startStateIndex = 0x50;
}

public static class CAnimTagBase {
    public const ulong m_name = 0x18;
    public const ulong m_group = 0x20;
    public const ulong m_tagID = 0x28;
    public const ulong m_bIsReferenced = 0x2c;
}

public static class CAnimTagManagerUpdater {
    public const ulong m_tags = 0x18;
}

public static class CAnimUpdateNodeBase {
    public const ulong m_nodePath = 0x18;
    public const ulong m_networkMode = 0x48;
    public const ulong m_name = 0x50;
}

public static class CAnimUpdateNodeRef {
    public const ulong m_nodeIndex = 0x8;
}

public static class CAnimUpdateSharedData {
    public const ulong m_nodes = 0x10;
    public const ulong m_nodeIndexMap = 0x28;
    public const ulong m_components = 0x48;
    public const ulong m_pParamListUpdater = 0x60;
    public const ulong m_pTagManagerUpdater = 0x68;
    public const ulong m_scriptManager = 0x70;
    public const ulong m_settings = 0x78;
    public const ulong m_pStaticPoseCache = 0xa8;
    public const ulong m_pSkeleton = 0xb0;
    public const ulong m_rootNodePath = 0xb8;
}

public static class CAnimUser {
    public const ulong m_name = 0x0;
    public const ulong m_nType = 0x10;
}

public static class CAnimUserDifference {
    public const ulong m_name = 0x0;
    public const ulong m_nType = 0x10;
}

public static class CAnimationGraphVisualizerAxis {
    public const ulong m_xWsTransform = 0x40;
    public const ulong m_flAxisSize = 0x60;
}

public static class CAnimationGraphVisualizerLine {
    public const ulong m_vWsPositionStart = 0x40;
    public const ulong m_vWsPositionEnd = 0x50;
    public const ulong m_Color = 0x60;
}

public static class CAnimationGraphVisualizerPie {
    public const ulong m_vWsCenter = 0x40;
    public const ulong m_vWsStart = 0x50;
    public const ulong m_vWsEnd = 0x60;
    public const ulong m_Color = 0x70;
}

public static class CAnimationGraphVisualizerPrimitiveBase {
    public const ulong m_Type = 0x8;
    public const ulong m_OwningAnimNodePaths = 0xc;
    public const ulong m_nOwningAnimNodePathCount = 0x38;
}

public static class CAnimationGraphVisualizerSphere {
    public const ulong m_vWsPosition = 0x40;
    public const ulong m_flRadius = 0x50;
    public const ulong m_Color = 0x54;
}

public static class CAnimationGraphVisualizerText {
    public const ulong m_vWsPosition = 0x40;
    public const ulong m_Color = 0x50;
    public const ulong m_Text = 0x58;
}

public static class CAnimationGroup {
    public const ulong m_nFlags = 0x10;
    public const ulong m_name = 0x18;
    public const ulong m_localHAnimArray_Handle = 0x60;
    public const ulong m_includedGroupArray_Handle = 0x78;
    public const ulong m_directHSeqGroup_Handle = 0x90;
    public const ulong m_decodeKey = 0x98;
    public const ulong m_szScripts = 0x110;
}

public static class CAttachment {
    public const ulong m_name = 0x0;
    public const ulong m_influenceNames = 0x8;
    public const ulong m_vInfluenceRotations = 0x20;
    public const ulong m_vInfluenceOffsets = 0x50;
    public const ulong m_influenceWeights = 0x74;
    public const ulong m_bInfluenceRootTransform = 0x80;
    public const ulong m_nInfluences = 0x83;
    public const ulong m_bIgnoreRotation = 0x84;
}

public static class CAudioAnimTag {
    public const ulong m_clipName = 0x38;
    public const ulong m_attachmentName = 0x40;
    public const ulong m_flVolume = 0x48;
    public const ulong m_bStopWhenTagEnds = 0x4c;
    public const ulong m_bStopWhenGraphEnds = 0x4d;
    public const ulong m_bPlayOnServer = 0x4e;
    public const ulong m_bPlayOnClient = 0x4f;
}

public static class CBaseConstraint {
    public const ulong m_name = 0x28;
    public const ulong m_vUpVector = 0x30;
    public const ulong m_slaves = 0x40;
    public const ulong m_targets = 0x58;
}

public static class CBinaryUpdateNode {
    public const ulong m_pChild1 = 0x58;
    public const ulong m_pChild2 = 0x68;
    public const ulong m_timingBehavior = 0x78;
    public const ulong m_flTimingBlend = 0x7c;
    public const ulong m_bResetChild1 = 0x80;
    public const ulong m_bResetChild2 = 0x81;
}

public static class CBlend2DUpdateNode {
    public const ulong m_items = 0x60;
    public const ulong m_tags = 0x78;
    public const ulong m_paramSpans = 0x90;
    public const ulong m_nodeItemIndices = 0xa8;
    public const ulong m_damping = 0xc0;
    public const ulong m_blendSourceX = 0xd0;
    public const ulong m_paramX = 0xd4;
    public const ulong m_blendSourceY = 0xd8;
    public const ulong m_paramY = 0xdc;
    public const ulong m_eBlendMode = 0xe0;
    public const ulong m_playbackSpeed = 0xe4;
    public const ulong m_bLoop = 0xe8;
    public const ulong m_bLockBlendOnReset = 0xe9;
    public const ulong m_bLockWhenWaning = 0xea;
    public const ulong m_bAnimEventsAndTagsOnMostWeightedOnly = 0xeb;
}

public static class CBlendCurve {
    public const ulong m_flControlPoint1 = 0x0;
    public const ulong m_flControlPoint2 = 0x4;
}

public static class CBlendUpdateNode {
    public const ulong m_children = 0x60;
    public const ulong m_sortedOrder = 0x78;
    public const ulong m_targetValues = 0x90;
    public const ulong m_blendValueSource = 0xac;
    public const ulong m_paramIndex = 0xb0;
    public const ulong m_damping = 0xb8;
    public const ulong m_blendKeyType = 0xc8;
    public const ulong m_bLockBlendOnReset = 0xcc;
    public const ulong m_bSyncCycles = 0xcd;
    public const ulong m_bLoop = 0xce;
    public const ulong m_bLockWhenWaning = 0xcf;
}

public static class CBodyGroupAnimTag {
    public const ulong m_nPriority = 0x38;
    public const ulong m_bodyGroupSettings = 0x40;
}

public static class CBodyGroupSetting {
    public const ulong m_BodyGroupName = 0x0;
    public const ulong m_nBodyGroupOption = 0x8;
}

public static class CBoneConstraintDotToMorph {
    public const ulong m_sBoneName = 0x28;
    public const ulong m_sTargetBoneName = 0x30;
    public const ulong m_sMorphChannelName = 0x38;
    public const ulong m_flRemap = 0x40;
}

public static class CBoneConstraintPoseSpaceBone {
    public const ulong m_inputList = 0x70;
}

public static class CBoneConstraintPoseSpaceBone_Input_t {
    public const ulong m_inputValue = 0x0;
    public const ulong m_outputTransformList = 0x10;
}

public static class CBoneConstraintPoseSpaceMorph {
    public const ulong m_sBoneName = 0x28;
    public const ulong m_sAttachmentName = 0x30;
    public const ulong m_outputMorph = 0x38;
    public const ulong m_inputList = 0x50;
    public const ulong m_bClamp = 0x68;
}

public static class CBoneConstraintPoseSpaceMorph_Input_t {
    public const ulong m_inputValue = 0x0;
    public const ulong m_outputWeightList = 0x10;
}

public static class CBoneMaskUpdateNode {
    public const ulong m_nWeightListIndex = 0x8c;
    public const ulong m_flRootMotionBlend = 0x90;
    public const ulong m_blendSpace = 0x94;
    public const ulong m_footMotionTiming = 0x98;
    public const ulong m_bUseBlendScale = 0x9c;
    public const ulong m_blendValueSource = 0xa0;
    public const ulong m_hBlendParameter = 0xa4;
}

public static class CBonePositionMetricEvaluator {
    public const ulong m_nBoneIndex = 0x50;
}

public static class CBoneVelocityMetricEvaluator {
    public const ulong m_nBoneIndex = 0x50;
}

public static class CBoolAnimParameter {
    public const ulong m_bDefaultValue = 0x60;
}

public static class CCPPScriptComponentUpdater {
    public const ulong m_scriptsToRun = 0x30;
}

public static class CCachedPose {
    public const ulong m_transforms = 0x8;
    public const ulong m_morphWeights = 0x20;
    public const ulong m_hSequence = 0x38;
    public const ulong m_flCycle = 0x3c;
}

public static class CChoiceUpdateNode {
    public const ulong m_children = 0x58;
    public const ulong m_weights = 0x70;
    public const ulong m_blendTimes = 0x88;
    public const ulong m_choiceMethod = 0xa0;
    public const ulong m_choiceChangeMethod = 0xa4;
    public const ulong m_blendMethod = 0xa8;
    public const ulong m_blendTime = 0xac;
    public const ulong m_bCrossFade = 0xb0;
    public const ulong m_bResetChosen = 0xb1;
    public const ulong m_bDontResetSameSelection = 0xb2;
}

public static class CClothSettingsAnimTag {
    public const ulong m_flStiffness = 0x38;
    public const ulong m_flEaseIn = 0x3c;
    public const ulong m_flEaseOut = 0x40;
    public const ulong m_nVertexSet = 0x48;
}

public static class CCompressorGroup {
    public const ulong m_nTotalElementCount = 0x0;
    public const ulong m_szChannelClass = 0x8;
    public const ulong m_szVariableName = 0x20;
    public const ulong m_nType = 0x38;
    public const ulong m_nFlags = 0x50;
    public const ulong m_szGrouping = 0x68;
    public const ulong m_nCompressorIndex = 0x80;
    public const ulong m_szElementNames = 0x98;
    public const ulong m_nElementUniqueID = 0xb0;
    public const ulong m_nElementMask = 0xc8;
    public const ulong m_vectorCompressor = 0xf8;
    public const ulong m_quaternionCompressor = 0x110;
    public const ulong m_intCompressor = 0x128;
    public const ulong m_boolCompressor = 0x140;
    public const ulong m_colorCompressor = 0x158;
    public const ulong m_vector2DCompressor = 0x170;
    public const ulong m_vector4DCompressor = 0x188;
}

public static class CConcreteAnimParameter {
    public const ulong m_previewButton = 0x50;
    public const ulong m_eNetworkSetting = 0x54;
    public const ulong m_bUseMostRecentValue = 0x58;
    public const ulong m_bAutoReset = 0x59;
    public const ulong m_bGameWritable = 0x5a;
    public const ulong m_bGraphWritable = 0x5b;
}

public static class CConstraintSlave {
    public const ulong m_qBaseOrientation = 0x0;
    public const ulong m_vBasePosition = 0x10;
    public const ulong m_nBoneHash = 0x1c;
    public const ulong m_flWeight = 0x20;
    public const ulong m_sName = 0x28;
}

public static class CConstraintTarget {
    public const ulong m_qOffset = 0x20;
    public const ulong m_vOffset = 0x30;
    public const ulong m_nBoneHash = 0x3c;
    public const ulong m_sName = 0x40;
    public const ulong m_flWeight = 0x48;
    public const ulong m_bIsAttachment = 0x59;
}

public static class CCycleBase {
    public const ulong m_flCycle = 0x0;
}

public static class CCycleControlClipUpdateNode {
    public const ulong m_tags = 0x60;
    public const ulong m_hSequence = 0x7c;
    public const ulong m_duration = 0x80;
    public const ulong m_valueSource = 0x84;
    public const ulong m_paramIndex = 0x88;
}

public static class CCycleControlUpdateNode {
    public const ulong m_valueSource = 0x68;
    public const ulong m_paramIndex = 0x6c;
}

public static class CDampedPathAnimMotorUpdater {
    public const ulong m_flAnticipationTime = 0x2c;
    public const ulong m_flMinSpeedScale = 0x30;
    public const ulong m_hAnticipationPosParam = 0x34;
    public const ulong m_hAnticipationHeadingParam = 0x36;
    public const ulong m_flSpringConstant = 0x38;
    public const ulong m_flMinSpringTension = 0x3c;
    public const ulong m_flMaxSpringTension = 0x40;
}

public static class CDampedValueComponentUpdater {
    public const ulong m_items = 0x30;
}

public static class CDampedValueUpdateItem {
    public const ulong m_damping = 0x0;
    public const ulong m_hParamIn = 0x18;
    public const ulong m_hParamOut = 0x1a;
}

public static class CDemoSettingsComponentUpdater {
    public const ulong m_settings = 0x30;
}

public static class CDirectPlaybackTagData {
    public const ulong m_sequenceName = 0x0;
    public const ulong m_tags = 0x8;
}

public static class CDirectPlaybackUpdateNode {
    public const ulong m_bFinishEarly = 0x6c;
    public const ulong m_bResetOnFinish = 0x6d;
    public const ulong m_allTags = 0x70;
}

public static class CDirectionalBlendUpdateNode {
    public const ulong m_hSequences = 0x5c;
    public const ulong m_damping = 0x80;
    public const ulong m_blendValueSource = 0x90;
    public const ulong m_paramIndex = 0x94;
    public const ulong m_playbackSpeed = 0x98;
    public const ulong m_duration = 0x9c;
    public const ulong m_bLoop = 0xa0;
    public const ulong m_bLockBlendOnReset = 0xa1;
}

public static class CDistanceRemainingMetricEvaluator {
    public const ulong m_flMaxDistance = 0x50;
    public const ulong m_flMinDistance = 0x54;
    public const ulong m_flStartGoalFilterDistance = 0x58;
    public const ulong m_flMaxGoalOvershootScale = 0x5c;
    public const ulong m_bFilterFixedMinDistance = 0x60;
    public const ulong m_bFilterGoalDistance = 0x61;
    public const ulong m_bFilterGoalOvershoot = 0x62;
}

public static class CDrawCullingData {
    public const ulong m_vConeApex = 0x0;
    public const ulong m_ConeAxis = 0xc;
    public const ulong m_ConeCutoff = 0xf;
}

public static class CEmitTagActionUpdater {
    public const ulong m_nTagIndex = 0x18;
    public const ulong m_bIsZeroDuration = 0x1c;
}

public static class CEnumAnimParameter {
    public const ulong m_defaultValue = 0x68;
    public const ulong m_enumOptions = 0x70;
}

public static class CExpressionActionUpdater {
    public const ulong m_hParam = 0x18;
    public const ulong m_eParamType = 0x1a;
    public const ulong m_hScript = 0x1c;
}

public static class CFingerBone {
    public const ulong m_boneName = 0x0;
    public const ulong m_hingeAxis = 0x8;
    public const ulong m_vCapsulePos1 = 0x14;
    public const ulong m_vCapsulePos2 = 0x20;
    public const ulong m_flMinAngle = 0x2c;
    public const ulong m_flMaxAngle = 0x30;
    public const ulong m_flRadius = 0x34;
}

public static class CFingerChain {
    public const ulong m_targets = 0x0;
    public const ulong m_bones = 0x18;
    public const ulong m_name = 0x30;
    public const ulong m_tipParentBoneName = 0x38;
    public const ulong m_vTipOffset = 0x40;
    public const ulong m_metacarpalBoneName = 0x50;
    public const ulong m_vSplayHingeAxis = 0x58;
    public const ulong m_flSplayMinAngle = 0x64;
    public const ulong m_flSplayMaxAngle = 0x68;
    public const ulong m_flFingerScaleRatio = 0x6c;
}

public static class CFingerSource {
    public const ulong m_nFingerIndex = 0x0;
    public const ulong m_flFingerWeight = 0x4;
}

public static class CFlexController {
    public const ulong m_szName = 0x0;
    public const ulong m_szType = 0x8;
    public const ulong min = 0x10;
    public const ulong max = 0x14;
}

public static class CFlexDesc {
    public const ulong m_szFacs = 0x0;
}

public static class CFlexOp {
    public const ulong m_OpCode = 0x0;
    public const ulong m_Data = 0x4;
}

public static class CFlexRule {
    public const ulong m_nFlex = 0x0;
    public const ulong m_FlexOps = 0x8;
}

public static class CFloatAnimParameter {
    public const ulong m_fDefaultValue = 0x60;
    public const ulong m_fMinValue = 0x64;
    public const ulong m_fMaxValue = 0x68;
    public const ulong m_bInterpolate = 0x6c;
}

public static class CFollowAttachmentUpdateNode {
    public const ulong m_opFixedData = 0x70;
}

public static class CFollowPathUpdateNode {
    public const ulong m_flBlendOutTime = 0x6c;
    public const ulong m_bBlockNonPathMovement = 0x70;
    public const ulong m_bStopFeetAtGoal = 0x71;
    public const ulong m_bScaleSpeed = 0x72;
    public const ulong m_flScale = 0x74;
    public const ulong m_flMinAngle = 0x78;
    public const ulong m_flMaxAngle = 0x7c;
    public const ulong m_flSpeedScaleBlending = 0x80;
    public const ulong m_turnDamping = 0x88;
    public const ulong m_facingTarget = 0x98;
    public const ulong m_hParam = 0x9c;
    public const ulong m_flTurnToFaceOffset = 0xa0;
    public const ulong m_bTurnToFace = 0xa4;
}

public static class CFootAdjustmentUpdateNode {
    public const ulong m_clips = 0x70;
    public const ulong m_hBasePoseCacheHandle = 0x88;
    public const ulong m_facingTarget = 0x8c;
    public const ulong m_flTurnTimeMin = 0x90;
    public const ulong m_flTurnTimeMax = 0x94;
    public const ulong m_flStepHeightMax = 0x98;
    public const ulong m_flStepHeightMaxAngle = 0x9c;
    public const ulong m_bResetChild = 0xa0;
    public const ulong m_bAnimationDriven = 0xa1;
}

public static class CFootCycleDefinition {
    public const ulong m_vStancePositionMS = 0x0;
    public const ulong m_vMidpointPositionMS = 0xc;
    public const ulong m_flStanceDirectionMS = 0x18;
    public const ulong m_vToStrideStartPos = 0x1c;
    public const ulong m_stanceCycle = 0x28;
    public const ulong m_footLiftCycle = 0x2c;
    public const ulong m_footOffCycle = 0x30;
    public const ulong m_footStrikeCycle = 0x34;
    public const ulong m_footLandCycle = 0x38;
}

public static class CFootCycleMetricEvaluator {
    public const ulong m_footIndices = 0x50;
}

public static class CFootDefinition {
    public const ulong m_name = 0x0;
    public const ulong m_ankleBoneName = 0x8;
    public const ulong m_toeBoneName = 0x10;
    public const ulong m_vBallOffset = 0x18;
    public const ulong m_vHeelOffset = 0x24;
    public const ulong m_flFootLength = 0x30;
    public const ulong m_flBindPoseDirectionMS = 0x34;
    public const ulong m_flTraceHeight = 0x38;
    public const ulong m_flTraceRadius = 0x3c;
}

public static class CFootFallAnimTag {
    public const ulong m_foot = 0x38;
}

public static class CFootLockUpdateNode {
    public const ulong m_opFixedSettings = 0x68;
    public const ulong m_footSettings = 0xd0;
    public const ulong m_hipShiftDamping = 0xe8;
    public const ulong m_rootHeightDamping = 0xf8;
    public const ulong m_flStrideCurveScale = 0x108;
    public const ulong m_flStrideCurveLimitScale = 0x10c;
    public const ulong m_flStepHeightIncreaseScale = 0x110;
    public const ulong m_flStepHeightDecreaseScale = 0x114;
    public const ulong m_flHipShiftScale = 0x118;
    public const ulong m_flBlendTime = 0x11c;
    public const ulong m_flMaxRootHeightOffset = 0x120;
    public const ulong m_flMinRootHeightOffset = 0x124;
    public const ulong m_flTiltPlanePitchSpringStrength = 0x128;
    public const ulong m_flTiltPlaneRollSpringStrength = 0x12c;
    public const ulong m_bApplyFootRotationLimits = 0x130;
    public const ulong m_bApplyHipShift = 0x131;
    public const ulong m_bModulateStepHeight = 0x132;
    public const ulong m_bResetChild = 0x133;
    public const ulong m_bEnableVerticalCurvedPaths = 0x134;
    public const ulong m_bEnableRootHeightDamping = 0x135;
}

public static class CFootMotion {
    public const ulong m_strides = 0x0;
    public const ulong m_name = 0x18;
    public const ulong m_bAdditive = 0x20;
}

public static class CFootPinningUpdateNode {
    public const ulong m_poseOpFixedData = 0x70;
    public const ulong m_eTimingSource = 0xa0;
    public const ulong m_params = 0xa8;
    public const ulong m_bResetChild = 0xc0;
}

public static class CFootPositionMetricEvaluator {
    public const ulong m_footIndices = 0x50;
    public const ulong m_bIgnoreSlope = 0x68;
}

public static class CFootStepTriggerUpdateNode {
    public const ulong m_triggers = 0x68;
    public const ulong m_flTolerance = 0x84;
}

public static class CFootStride {
    public const ulong m_definition = 0x0;
    public const ulong m_trajectories = 0x40;
}

public static class CFootTrajectories {
    public const ulong m_trajectories = 0x0;
}

public static class CFootTrajectory {
    public const ulong m_vOffset = 0x0;
    public const ulong m_flRotationOffset = 0xc;
    public const ulong m_flProgression = 0x10;
}

public static class CFootstepLandedAnimTag {
    public const ulong m_FootstepType = 0x38;
    public const ulong m_OverrideSoundName = 0x40;
    public const ulong m_DebugAnimSourceString = 0x48;
    public const ulong m_BoneName = 0x50;
}

public static class CFutureFacingMetricEvaluator {
    public const ulong m_flDistance = 0x50;
    public const ulong m_flTime = 0x54;
}

public static class CFutureVelocityMetricEvaluator {
    public const ulong m_flDistance = 0x50;
    public const ulong m_flStoppingDistance = 0x54;
    public const ulong m_flTargetSpeed = 0x58;
    public const ulong m_eMode = 0x5c;
}

public static class CHitBox {
    public const ulong m_name = 0x0;
    public const ulong m_sSurfaceProperty = 0x8;
    public const ulong m_sBoneName = 0x10;
    public const ulong m_vMinBounds = 0x18;
    public const ulong m_vMaxBounds = 0x24;
    public const ulong m_flShapeRadius = 0x30;
    public const ulong m_nBoneNameHash = 0x34;
    public const ulong m_nGroupId = 0x38;
    public const ulong m_nShapeType = 0x3c;
    public const ulong m_bTranslationOnly = 0x3d;
    public const ulong m_CRC = 0x40;
    public const ulong m_cRenderColor = 0x44;
    public const ulong m_nHitBoxIndex = 0x48;
}

public static class CHitBoxSet {
    public const ulong m_name = 0x0;
    public const ulong m_nNameHash = 0x8;
    public const ulong m_HitBoxes = 0x10;
    public const ulong m_SourceFilename = 0x28;
}

public static class CHitBoxSetList {
    public const ulong m_HitBoxSets = 0x0;
}

public static class CHitReactUpdateNode {
    public const ulong m_opFixedSettings = 0x68;
    public const ulong m_triggerParam = 0xb4;
    public const ulong m_hitBoneParam = 0xb6;
    public const ulong m_hitOffsetParam = 0xb8;
    public const ulong m_hitDirectionParam = 0xba;
    public const ulong m_hitStrengthParam = 0xbc;
    public const ulong m_flMinDelayBetweenHits = 0xc0;
    public const ulong m_bResetChild = 0xc4;
}

public static class CIntAnimParameter {
    public const ulong m_defaultValue = 0x60;
    public const ulong m_minValue = 0x64;
    public const ulong m_maxValue = 0x68;
}

public static class CJiggleBoneUpdateNode {
    public const ulong m_opFixedData = 0x68;
}

public static class CJumpHelperUpdateNode {
    public const ulong m_hTargetParam = 0xa8;
    public const ulong m_flOriginalJumpMovement = 0xac;
    public const ulong m_flOriginalJumpDuration = 0xb8;
    public const ulong m_flJumpStartCycle = 0xbc;
    public const ulong m_flJumpEndCycle = 0xc0;
    public const ulong m_eCorrectionMethod = 0xc4;
    public const ulong m_bTranslationAxis = 0xc8;
    public const ulong m_bScaleSpeed = 0xcb;
}

public static class CLODComponentUpdater {
    public const ulong m_nServerLOD = 0x30;
}

public static class CLeanMatrixUpdateNode {
    public const ulong m_frameCorners = 0x5c;
    public const ulong m_poses = 0x80;
    public const ulong m_damping = 0xa8;
    public const ulong m_blendSource = 0xb8;
    public const ulong m_paramIndex = 0xbc;
    public const ulong m_verticalAxis = 0xc0;
    public const ulong m_horizontalAxis = 0xcc;
    public const ulong m_hSequence = 0xd8;
    public const ulong m_flMaxValue = 0xdc;
    public const ulong m_nSequenceMaxFrame = 0xe0;
}

public static class CLookAtUpdateNode {
    public const ulong m_opFixedSettings = 0x70;
    public const ulong m_target = 0x138;
    public const ulong m_paramIndex = 0x13c;
    public const ulong m_weightParamIndex = 0x13e;
    public const ulong m_bResetChild = 0x140;
    public const ulong m_bLockWhenWaning = 0x141;
}

public static class CLookComponentUpdater {
    public const ulong m_hLookHeading = 0x34;
    public const ulong m_hLookHeadingVelocity = 0x36;
    public const ulong m_hLookPitch = 0x38;
    public const ulong m_hLookDistance = 0x3a;
    public const ulong m_hLookDirection = 0x3c;
    public const ulong m_hLookTarget = 0x3e;
    public const ulong m_hLookTargetWorldSpace = 0x40;
    public const ulong m_bNetworkLookTarget = 0x42;
}

public static class CMaterialAttributeAnimTag {
    public const ulong m_AttributeName = 0x38;
    public const ulong m_AttributeType = 0x40;
    public const ulong m_flValue = 0x44;
    public const ulong m_Color = 0x48;
}

public static class CMaterialDrawDescriptor {
    public const ulong m_nPrimitiveType = 0x0;
    public const ulong m_nBaseVertex = 0x4;
    public const ulong m_nVertexCount = 0x8;
    public const ulong m_nStartIndex = 0xc;
    public const ulong m_nIndexCount = 0x10;
    public const ulong m_flUvDensity = 0x14;
    public const ulong m_vTintColor = 0x18;
    public const ulong m_flAlpha = 0x24;
    public const ulong m_nFirstMeshlet = 0x2c;
    public const ulong m_nNumMeshlets = 0x30;
    public const ulong m_indexBuffer = 0xb8;
    public const ulong m_material = 0xe0;
}

public static class CMeshletDescriptor {
    public const ulong m_PackedAABB = 0x0;
    public const ulong m_CullingData = 0x8;
}

public static class CModelConfig {
    public const ulong m_ConfigName = 0x0;
    public const ulong m_Elements = 0x8;
    public const ulong m_bTopLevel = 0x20;
}

public static class CModelConfigElement {
    public const ulong m_ElementName = 0x8;
    public const ulong m_NestedElements = 0x10;
}

public static class CModelConfigElement_AttachedModel {
    public const ulong m_InstanceName = 0x48;
    public const ulong m_EntityClass = 0x50;
    public const ulong m_hModel = 0x58;
    public const ulong m_vOffset = 0x60;
    public const ulong m_aAngOffset = 0x6c;
    public const ulong m_AttachmentName = 0x78;
    public const ulong m_LocalAttachmentOffsetName = 0x80;
    public const ulong m_AttachmentType = 0x88;
    public const ulong m_bBoneMergeFlex = 0x8c;
    public const ulong m_bUserSpecifiedColor = 0x8d;
    public const ulong m_bUserSpecifiedMaterialGroup = 0x8e;
    public const ulong m_bAcceptParentMaterialDrivenDecals = 0x8f;
    public const ulong m_BodygroupOnOtherModels = 0x90;
    public const ulong m_MaterialGroupOnOtherModels = 0x98;
}

public static class CModelConfigElement_Command {
    public const ulong m_Command = 0x48;
    public const ulong m_Args = 0x50;
}

public static class CModelConfigElement_RandomColor {
    public const ulong m_Gradient = 0x48;
}

public static class CModelConfigElement_RandomPick {
    public const ulong m_Choices = 0x48;
    public const ulong m_ChoiceWeights = 0x60;
}

public static class CModelConfigElement_SetBodygroup {
    public const ulong m_GroupName = 0x48;
    public const ulong m_nChoice = 0x50;
}

public static class CModelConfigElement_SetBodygroupOnAttachedModels {
    public const ulong m_GroupName = 0x48;
    public const ulong m_nChoice = 0x50;
}

public static class CModelConfigElement_SetMaterialGroup {
    public const ulong m_MaterialGroupName = 0x48;
}

public static class CModelConfigElement_SetMaterialGroupOnAttachedModels {
    public const ulong m_MaterialGroupName = 0x48;
}

public static class CModelConfigElement_SetRenderColor {
    public const ulong m_Color = 0x48;
}

public static class CModelConfigElement_UserPick {
    public const ulong m_Choices = 0x48;
}

public static class CModelConfigList {
    public const ulong m_bHideMaterialGroupInTools = 0x0;
    public const ulong m_bHideRenderColorInTools = 0x1;
    public const ulong m_Configs = 0x8;
}

public static class CMoodVData {
    public const ulong m_sModelName = 0x0;
    public const ulong m_nMoodType = 0xe0;
    public const ulong m_animationLayers = 0xe8;
}

public static class CMorphBundleData {
    public const ulong m_flULeftSrc = 0x0;
    public const ulong m_flVTopSrc = 0x4;
    public const ulong m_offsets = 0x8;
    public const ulong m_ranges = 0x20;
}

public static class CMorphConstraint {
    public const ulong m_sTargetMorph = 0x70;
    public const ulong m_nSlaveChannel = 0x78;
    public const ulong m_flMin = 0x7c;
    public const ulong m_flMax = 0x80;
}

public static class CMorphData {
    public const ulong m_name = 0x0;
    public const ulong m_morphRectDatas = 0x8;
}

public static class CMorphRectData {
    public const ulong m_nXLeftDst = 0x0;
    public const ulong m_nYTopDst = 0x2;
    public const ulong m_flUWidthSrc = 0x4;
    public const ulong m_flVHeightSrc = 0x8;
    public const ulong m_bundleDatas = 0x10;
}

public static class CMorphSetData {
    public const ulong m_nWidth = 0x10;
    public const ulong m_nHeight = 0x14;
    public const ulong m_bundleTypes = 0x18;
    public const ulong m_morphDatas = 0x30;
    public const ulong m_pTextureAtlas = 0x48;
    public const ulong m_FlexDesc = 0x50;
    public const ulong m_FlexControllers = 0x68;
    public const ulong m_FlexRules = 0x80;
}

public static class CMotionDataSet {
    public const ulong m_groups = 0x0;
    public const ulong m_nDimensionCount = 0x18;
}

public static class CMotionGraph {
    public const ulong m_paramSpans = 0x10;
    public const ulong m_tags = 0x28;
    public const ulong m_pRootNode = 0x40;
    public const ulong m_nParameterCount = 0x48;
    public const ulong m_nConfigStartIndex = 0x4c;
    public const ulong m_nConfigCount = 0x50;
    public const ulong m_bLoop = 0x54;
}

public static class CMotionGraphConfig {
    public const ulong m_paramValues = 0x0;
    public const ulong m_flDuration = 0x10;
    public const ulong m_nMotionIndex = 0x14;
    public const ulong m_nSampleStart = 0x18;
    public const ulong m_nSampleCount = 0x1c;
}

public static class CMotionGraphGroup {
    public const ulong m_searchDB = 0x0;
    public const ulong m_motionGraphs = 0xb8;
    public const ulong m_motionGraphConfigs = 0xd0;
    public const ulong m_sampleToConfig = 0xe8;
    public const ulong m_hIsActiveScript = 0x100;
}

public static class CMotionGraphUpdateNode {
    public const ulong m_pMotionGraph = 0x58;
}

public static class CMotionMatchingUpdateNode {
    public const ulong m_dataSet = 0x58;
    public const ulong m_metrics = 0x78;
    public const ulong m_weights = 0x90;
    public const ulong m_bSearchEveryTick = 0xe0;
    public const ulong m_flSearchInterval = 0xe4;
    public const ulong m_bSearchWhenClipEnds = 0xe8;
    public const ulong m_bSearchWhenGoalChanges = 0xe9;
    public const ulong m_blendCurve = 0xec;
    public const ulong m_flSampleRate = 0xf4;
    public const ulong m_flBlendTime = 0xf8;
    public const ulong m_bLockClipWhenWaning = 0xfc;
    public const ulong m_flSelectionThreshold = 0x100;
    public const ulong m_flReselectionTimeWindow = 0x104;
    public const ulong m_bEnableRotationCorrection = 0x108;
    public const ulong m_bGoalAssist = 0x109;
    public const ulong m_flGoalAssistDistance = 0x10c;
    public const ulong m_flGoalAssistTolerance = 0x110;
    public const ulong m_distanceScale_Damping = 0x118;
    public const ulong m_flDistanceScale_OuterRadius = 0x128;
    public const ulong m_flDistanceScale_InnerRadius = 0x12c;
    public const ulong m_flDistanceScale_MaxScale = 0x130;
    public const ulong m_flDistanceScale_MinScale = 0x134;
    public const ulong m_bEnableDistanceScaling = 0x138;
}

public static class CMotionMetricEvaluator {
    public const ulong m_means = 0x18;
    public const ulong m_standardDeviations = 0x30;
    public const ulong m_flWeight = 0x48;
    public const ulong m_nDimensionStartIndex = 0x4c;
}

public static class CMotionNode {
    public const ulong m_name = 0x18;
    public const ulong m_id = 0x20;
}

public static class CMotionNodeBlend1D {
    public const ulong m_blendItems = 0x28;
    public const ulong m_nParamIndex = 0x40;
}

public static class CMotionNodeSequence {
    public const ulong m_tags = 0x28;
    public const ulong m_hSequence = 0x40;
    public const ulong m_flPlaybackSpeed = 0x44;
}

public static class CMotionSearchDB {
    public const ulong m_rootNode = 0x0;
    public const ulong m_residualQuantizer = 0x80;
    public const ulong m_codeIndices = 0xa0;
}

public static class CMotionSearchNode {
    public const ulong m_children = 0x0;
    public const ulong m_quantizer = 0x18;
    public const ulong m_sampleCodes = 0x38;
    public const ulong m_sampleIndices = 0x50;
    public const ulong m_selectableSamples = 0x68;
}

public static class CMovementComponentUpdater {
    public const ulong m_movementModes = 0x30;
    public const ulong m_motors = 0x48;
    public const ulong m_facingDamping = 0x60;
    public const ulong m_eDefaultFacingMode = 0x70;
    public const ulong m_nDefaultMotorIndex = 0x7c;
    public const ulong m_bMoveVarsDisabled = 0x80;
    public const ulong m_bNetworkPath = 0x81;
    public const ulong m_bNetworkFacing = 0x82;
    public const ulong m_paramHandles = 0x83;
}

public static class CMovementMode {
    public const ulong m_name = 0x0;
    public const ulong m_flSpeed = 0x8;
}

public static class CMoverUpdateNode {
    public const ulong m_damping = 0x70;
    public const ulong m_facingTarget = 0x80;
    public const ulong m_hMoveVecParam = 0x84;
    public const ulong m_hMoveHeadingParam = 0x86;
    public const ulong m_hTurnToFaceParam = 0x88;
    public const ulong m_flTurnToFaceOffset = 0x8c;
    public const ulong m_flTurnToFaceLimit = 0x90;
    public const ulong m_bAdditive = 0x94;
    public const ulong m_bApplyMovement = 0x95;
    public const ulong m_bOrientMovement = 0x96;
    public const ulong m_bApplyRotation = 0x97;
    public const ulong m_bLimitOnly = 0x98;
}

public static class CParamSpanUpdater {
    public const ulong m_spans = 0x0;
}

public static class CParticleAnimTag {
    public const ulong m_hParticleSystem = 0x38;
    public const ulong m_particleSystemName = 0x40;
    public const ulong m_configName = 0x48;
    public const ulong m_bDetachFromOwner = 0x50;
    public const ulong m_bStopWhenTagEnds = 0x51;
    public const ulong m_bTagEndStopIsInstant = 0x52;
    public const ulong m_attachmentName = 0x58;
    public const ulong m_attachmentType = 0x60;
    public const ulong m_attachmentCP1Name = 0x68;
    public const ulong m_attachmentCP1Type = 0x70;
}

public static class CPathAnimMotorUpdaterBase {
    public const ulong m_bLockToPath = 0x20;
}

public static class CPathHelperUpdateNode {
    public const ulong m_flStoppingRadius = 0x68;
    public const ulong m_flStoppingSpeedScale = 0x6c;
}

public static class CPathMetricEvaluator {
    public const ulong m_pathTimeSamples = 0x50;
    public const ulong m_flDistance = 0x68;
    public const ulong m_bExtrapolateMovement = 0x6c;
    public const ulong m_flMinExtrapolationSpeed = 0x70;
}

public static class CPhysSurfaceProperties {
    public const ulong m_name = 0x0;
    public const ulong m_nameHash = 0x8;
    public const ulong m_baseNameHash = 0xc;
    public const ulong m_bHidden = 0x18;
    public const ulong m_description = 0x20;
    public const ulong m_physics = 0x28;
    public const ulong m_audioSounds = 0x48;
    public const ulong m_audioParams = 0x88;
}

public static class CPhysSurfacePropertiesAudio {
    public const ulong m_reflectivity = 0x0;
    public const ulong m_hardnessFactor = 0x4;
    public const ulong m_roughnessFactor = 0x8;
    public const ulong m_roughThreshold = 0xc;
    public const ulong m_hardThreshold = 0x10;
    public const ulong m_hardVelocityThreshold = 0x14;
    public const ulong m_flStaticImpactVolume = 0x18;
    public const ulong m_flOcclusionFactor = 0x1c;
}

public static class CPhysSurfacePropertiesPhysics {
    public const ulong m_friction = 0x0;
    public const ulong m_elasticity = 0x4;
    public const ulong m_density = 0x8;
    public const ulong m_thickness = 0xc;
    public const ulong m_softContactFrequency = 0x10;
    public const ulong m_softContactDampingRatio = 0x14;
    public const ulong m_wheelDrag = 0x18;
}

public static class CPhysSurfacePropertiesSoundNames {
    public const ulong m_impactSoft = 0x0;
    public const ulong m_impactHard = 0x8;
    public const ulong m_scrapeSmooth = 0x10;
    public const ulong m_scrapeRough = 0x18;
    public const ulong m_bulletImpact = 0x20;
    public const ulong m_rolling = 0x28;
    public const ulong m_break = 0x30;
    public const ulong m_strain = 0x38;
}

public static class CPlayerInputAnimMotorUpdater {
    public const ulong m_sampleTimes = 0x20;
    public const ulong m_flSpringConstant = 0x3c;
    public const ulong m_flAnticipationDistance = 0x40;
    public const ulong m_hAnticipationPosParam = 0x44;
    public const ulong m_hAnticipationHeadingParam = 0x46;
    public const ulong m_bUseAcceleration = 0x48;
}

public static class CPoseHandle {
    public const ulong m_nIndex = 0x0;
    public const ulong m_eType = 0x2;
}

public static class CProductQuantizer {
    public const ulong m_subQuantizers = 0x0;
    public const ulong m_nDimensions = 0x18;
}

public static class CQuaternionAnimParameter {
    public const ulong m_defaultValue = 0x60;
    public const ulong m_bInterpolate = 0x70;
}

public static class CRagdollAnimTag {
    public const ulong m_nPoseControl = 0x38;
    public const ulong m_flFrequency = 0x3c;
    public const ulong m_flDampingRatio = 0x40;
    public const ulong m_flDecayDuration = 0x44;
    public const ulong m_flDecayBias = 0x48;
    public const ulong m_bDestroy = 0x4c;
}

public static class CRagdollComponentUpdater {
    public const ulong m_ragdollNodePaths = 0x30;
    public const ulong m_boneIndices = 0x48;
    public const ulong m_boneNames = 0x60;
    public const ulong m_weightLists = 0x78;
    public const ulong m_flSpringFrequencyMin = 0x90;
    public const ulong m_flSpringFrequencyMax = 0x94;
    public const ulong m_flMaxStretch = 0x98;
}

public static class CRagdollUpdateNode {
    public const ulong m_nWeightListIndex = 0x68;
    public const ulong m_poseControlMethod = 0x6c;
}

public static class CRenderBufferBinding {
    public const ulong m_hBuffer = 0x0;
    public const ulong m_nBindOffsetBytes = 0x10;
}

public static class CRenderMesh {
    public const ulong m_sceneObjects = 0x10;
    public const ulong m_constraints = 0xa0;
    public const ulong m_skeleton = 0xb8;
}

public static class CRenderSkeleton {
    public const ulong m_bones = 0x0;
    public const ulong m_boneParents = 0x30;
    public const ulong m_nBoneWeightCount = 0x48;
}

public static class CSceneObjectData {
    public const ulong m_vMinBounds = 0x0;
    public const ulong m_vMaxBounds = 0xc;
    public const ulong m_drawCalls = 0x18;
    public const ulong m_drawBounds = 0x30;
    public const ulong m_meshlets = 0x48;
    public const ulong m_vTintColor = 0x60;
}

public static class CSelectorUpdateNode {
    public const ulong m_children = 0x58;
    public const ulong m_tags = 0x70;
    public const ulong m_blendCurve = 0x8c;
    public const ulong m_flBlendTime = 0x94;
    public const ulong m_hParameter = 0x9c;
    public const ulong m_eTagBehavior = 0xa0;
    public const ulong m_bResetOnChange = 0xa4;
    public const ulong m_bSyncCyclesOnChange = 0xa5;
}

public static class CSeqAutoLayer {
    public const ulong m_nLocalReference = 0x0;
    public const ulong m_nLocalPose = 0x2;
    public const ulong m_flags = 0x4;
    public const ulong m_start = 0xc;
    public const ulong m_peak = 0x10;
    public const ulong m_tail = 0x14;
    public const ulong m_end = 0x18;
}

public static class CSeqAutoLayerFlag {
    public const ulong m_bPost = 0x0;
    public const ulong m_bSpline = 0x1;
    public const ulong m_bXFade = 0x2;
    public const ulong m_bNoBlend = 0x3;
    public const ulong m_bLocal = 0x4;
    public const ulong m_bPose = 0x5;
    public const ulong m_bFetchFrame = 0x6;
    public const ulong m_bSubtract = 0x7;
}

public static class CSeqBoneMaskList {
    public const ulong m_sName = 0x0;
    public const ulong m_nLocalBoneArray = 0x10;
    public const ulong m_flBoneWeightArray = 0x28;
    public const ulong m_flDefaultMorphCtrlWeight = 0x40;
    public const ulong m_morphCtrlWeightArray = 0x48;
}

public static class CSeqCmdLayer {
    public const ulong m_cmd = 0x0;
    public const ulong m_nLocalReference = 0x2;
    public const ulong m_nLocalBonemask = 0x4;
    public const ulong m_nDstResult = 0x6;
    public const ulong m_nSrcResult = 0x8;
    public const ulong m_bSpline = 0xa;
    public const ulong m_flVar1 = 0xc;
    public const ulong m_flVar2 = 0x10;
    public const ulong m_nLineNumber = 0x14;
}

public static class CSeqCmdSeqDesc {
    public const ulong m_sName = 0x0;
    public const ulong m_flags = 0x10;
    public const ulong m_transition = 0x1c;
    public const ulong m_nFrameRangeSequence = 0x24;
    public const ulong m_nFrameCount = 0x26;
    public const ulong m_flFPS = 0x28;
    public const ulong m_nSubCycles = 0x2c;
    public const ulong m_numLocalResults = 0x2e;
    public const ulong m_cmdLayerArray = 0x30;
    public const ulong m_eventArray = 0x48;
    public const ulong m_activityArray = 0x60;
    public const ulong m_poseSettingArray = 0x78;
}

public static class CSeqIKLock {
    public const ulong m_flPosWeight = 0x0;
    public const ulong m_flAngleWeight = 0x4;
    public const ulong m_nLocalBone = 0x8;
    public const ulong m_bBonesOrientedAlongPositiveX = 0xa;
}

public static class CSeqMultiFetch {
    public const ulong m_flags = 0x0;
    public const ulong m_localReferenceArray = 0x8;
    public const ulong m_nGroupSize = 0x20;
    public const ulong m_nLocalPose = 0x28;
    public const ulong m_poseKeyArray0 = 0x30;
    public const ulong m_poseKeyArray1 = 0x48;
    public const ulong m_nLocalCyclePoseParameter = 0x60;
    public const ulong m_bCalculatePoseParameters = 0x64;
}

public static class CSeqMultiFetchFlag {
    public const ulong m_bRealtime = 0x0;
    public const ulong m_bCylepose = 0x1;
    public const ulong m_b0D = 0x2;
    public const ulong m_b1D = 0x3;
    public const ulong m_b2D = 0x4;
    public const ulong m_b2D_TRI = 0x5;
}

public static class CSeqPoseParamDesc {
    public const ulong m_sName = 0x0;
    public const ulong m_flStart = 0x10;
    public const ulong m_flEnd = 0x14;
    public const ulong m_flLoop = 0x18;
    public const ulong m_bLooping = 0x1c;
}

public static class CSeqPoseSetting {
    public const ulong m_sPoseParameter = 0x0;
    public const ulong m_sAttachment = 0x10;
    public const ulong m_sReferenceSequence = 0x20;
    public const ulong m_flValue = 0x30;
    public const ulong m_bX = 0x34;
    public const ulong m_bY = 0x35;
    public const ulong m_bZ = 0x36;
    public const ulong m_eType = 0x38;
}

public static class CSeqS1SeqDesc {
    public const ulong m_sName = 0x0;
    public const ulong m_flags = 0x10;
    public const ulong m_fetch = 0x20;
    public const ulong m_nLocalWeightlist = 0x88;
    public const ulong m_autoLayerArray = 0x90;
    public const ulong m_IKLockArray = 0xa8;
    public const ulong m_transition = 0xc0;
    public const ulong m_SequenceKeys = 0xc8;
    public const ulong m_LegacyKeyValueText = 0xd8;
    public const ulong m_activityArray = 0xe8;
    public const ulong m_footMotion = 0x100;
}

public static class CSeqScaleSet {
    public const ulong m_sName = 0x0;
    public const ulong m_bRootOffset = 0x10;
    public const ulong m_vRootOffset = 0x14;
    public const ulong m_nLocalBoneArray = 0x20;
    public const ulong m_flBoneScaleArray = 0x38;
}

public static class CSeqSeqDescFlag {
    public const ulong m_bLooping = 0x0;
    public const ulong m_bSnap = 0x1;
    public const ulong m_bAutoplay = 0x2;
    public const ulong m_bPost = 0x3;
    public const ulong m_bHidden = 0x4;
    public const ulong m_bMulti = 0x5;
    public const ulong m_bLegacyDelta = 0x6;
    public const ulong m_bLegacyWorldspace = 0x7;
    public const ulong m_bLegacyCyclepose = 0x8;
    public const ulong m_bLegacyRealtime = 0x9;
    public const ulong m_bModelDoc = 0xa;
}

public static class CSeqSynthAnimDesc {
    public const ulong m_sName = 0x0;
    public const ulong m_flags = 0x10;
    public const ulong m_transition = 0x1c;
    public const ulong m_nLocalBaseReference = 0x24;
    public const ulong m_nLocalBoneMask = 0x26;
    public const ulong m_activityArray = 0x28;
}

public static class CSeqTransition {
    public const ulong m_flFadeInTime = 0x0;
    public const ulong m_flFadeOutTime = 0x4;
}

public static class CSequenceFinishedAnimTag {
    public const ulong m_sequenceName = 0x38;
}

public static class CSequenceGroupData {
    public const ulong m_sName = 0x10;
    public const ulong m_nFlags = 0x20;
    public const ulong m_localSequenceNameArray = 0x28;
    public const ulong m_localS1SeqDescArray = 0x40;
    public const ulong m_localMultiSeqDescArray = 0x58;
    public const ulong m_localSynthAnimDescArray = 0x70;
    public const ulong m_localCmdSeqDescArray = 0x88;
    public const ulong m_localBoneMaskArray = 0xa0;
    public const ulong m_localScaleSetArray = 0xb8;
    public const ulong m_localBoneNameArray = 0xd0;
    public const ulong m_localNodeName = 0xe8;
    public const ulong m_localPoseParamArray = 0xf8;
    public const ulong m_keyValues = 0x110;
    public const ulong m_localIKAutoplayLockArray = 0x120;
}

public static class CSequenceUpdateNode {
    public const ulong m_paramSpans = 0x60;
    public const ulong m_tags = 0x78;
    public const ulong m_hSequence = 0x94;
    public const ulong m_playbackSpeed = 0x98;
    public const ulong m_duration = 0x9c;
    public const ulong m_bLoop = 0xa0;
}

public static class CSetFacingUpdateNode {
    public const ulong m_facingMode = 0x68;
    public const ulong m_bResetChild = 0x6c;
}

public static class CSetParameterActionUpdater {
    public const ulong m_hParam = 0x18;
    public const ulong m_value = 0x1a;
}

public static class CSingleFrameUpdateNode {
    public const ulong m_actions = 0x58;
    public const ulong m_hPoseCacheHandle = 0x70;
    public const ulong m_hSequence = 0x74;
    public const ulong m_flCycle = 0x78;
}

public static class CSkeletalInputUpdateNode {
    public const ulong m_fixedOpData = 0x58;
}

public static class CSlopeComponentUpdater {
    public const ulong m_flTraceDistance = 0x34;
    public const ulong m_hSlopeAngle = 0x38;
    public const ulong m_hSlopeAngleFront = 0x3a;
    public const ulong m_hSlopeAngleSide = 0x3c;
    public const ulong m_hSlopeHeading = 0x3e;
    public const ulong m_hSlopeNormal = 0x40;
    public const ulong m_hSlopeNormal_WorldSpace = 0x42;
}

public static class CSlowDownOnSlopesUpdateNode {
    public const ulong m_flSlowDownStrength = 0x68;
}

public static class CSolveIKChainUpdateNode {
    public const ulong m_targetHandles = 0x68;
    public const ulong m_opFixedData = 0x80;
}

public static class CSolveIKTargetHandle_t {
    public const ulong m_positionHandle = 0x0;
    public const ulong m_orientationHandle = 0x2;
}

public static class CSpeedScaleUpdateNode {
    public const ulong m_paramIndex = 0x68;
}

public static class CStanceOverrideUpdateNode {
    public const ulong m_footStanceInfo = 0x68;
    public const ulong m_pStanceSourceNode = 0x80;
    public const ulong m_hParameter = 0x90;
    public const ulong m_eMode = 0x94;
}

public static class CStanceScaleUpdateNode {
    public const ulong m_hParam = 0x68;
}

public static class CStateActionUpdater {
    public const ulong m_pAction = 0x0;
    public const ulong m_eBehavior = 0x8;
}

public static class CStateMachineComponentUpdater {
    public const ulong m_stateMachine = 0x30;
}

public static class CStateMachineUpdateNode {
    public const ulong m_stateMachine = 0x68;
    public const ulong m_stateData = 0xc0;
    public const ulong m_transitionData = 0xd8;
    public const ulong m_bBlockWaningTags = 0xf4;
    public const ulong m_bLockStateWhenWaning = 0xf5;
}

public static class CStateNodeStateData {
    public const ulong m_pChild = 0x0;
    public const ulong m_bExclusiveRootMotion = 0x0;
}

public static class CStateNodeTransitionData {
    public const ulong m_curve = 0x0;
    public const ulong m_blendDuration = 0x8;
    public const ulong m_resetCycleValue = 0x10;
    public const ulong m_bReset = 0x0;
    public const ulong m_resetCycleOption = 0x0;
}

public static class CStateUpdateData {
    public const ulong m_name = 0x0;
    public const ulong m_hScript = 0x8;
    public const ulong m_transitionIndices = 0x10;
    public const ulong m_actions = 0x28;
    public const ulong m_stateID = 0x40;
    public const ulong m_bIsStartState = 0x0;
    public const ulong m_bIsEndState = 0x0;
    public const ulong m_bIsPassthrough = 0x0;
}

public static class CStaticPoseCache {
    public const ulong m_poses = 0x10;
    public const ulong m_nBoneCount = 0x28;
    public const ulong m_nMorphCount = 0x2c;
}

public static class CStepsRemainingMetricEvaluator {
    public const ulong m_footIndices = 0x50;
    public const ulong m_flMinStepsRemaining = 0x68;
}

public static class CStopAtGoalUpdateNode {
    public const ulong m_flOuterRadius = 0x6c;
    public const ulong m_flInnerRadius = 0x70;
    public const ulong m_flMaxScale = 0x74;
    public const ulong m_flMinScale = 0x78;
    public const ulong m_damping = 0x80;
}

public static class CSubtractUpdateNode {
    public const ulong m_footMotionTiming = 0x8c;
    public const ulong m_bApplyToFootMotion = 0x90;
    public const ulong m_bApplyChannelsSeparately = 0x91;
    public const ulong m_bUseModelSpace = 0x92;
}

public static class CTiltTwistConstraint {
    public const ulong m_nTargetAxis = 0x70;
    public const ulong m_nSlaveAxis = 0x74;
}

public static class CTimeRemainingMetricEvaluator {
    public const ulong m_bMatchByTimeRemaining = 0x50;
    public const ulong m_flMaxTimeRemaining = 0x54;
    public const ulong m_bFilterByTimeRemaining = 0x58;
    public const ulong m_flMinTimeRemaining = 0x5c;
}

public static class CToggleComponentActionUpdater {
    public const ulong m_componentID = 0x18;
    public const ulong m_bSetEnabled = 0x1c;
}

public static class CTransitionUpdateData {
    public const ulong m_srcStateIndex = 0x0;
    public const ulong m_destStateIndex = 0x1;
    public const ulong m_bDisabled = 0x0;
}

public static class CTurnHelperUpdateNode {
    public const ulong m_facingTarget = 0x6c;
    public const ulong m_turnStartTimeOffset = 0x70;
    public const ulong m_turnDuration = 0x74;
    public const ulong m_bMatchChildDuration = 0x78;
    public const ulong m_manualTurnOffset = 0x7c;
    public const ulong m_bUseManualTurnOffset = 0x80;
}

public static class CTwistConstraint {
    public const ulong m_bInverse = 0x70;
    public const ulong m_qParentBindRotation = 0x80;
    public const ulong m_qChildBindRotation = 0x90;
}

public static class CTwoBoneIKUpdateNode {
    public const ulong m_opFixedData = 0x70;
}

public static class CUnaryUpdateNode {
    public const ulong m_pChildNode = 0x58;
}

public static class CVPhysXSurfacePropertiesList {
    public const ulong m_surfacePropertiesList = 0x0;
}

public static class CVRInputComponentUpdater {
    public const ulong m_FingerCurl_Thumb = 0x34;
    public const ulong m_FingerCurl_Index = 0x36;
    public const ulong m_FingerCurl_Middle = 0x38;
    public const ulong m_FingerCurl_Ring = 0x3a;
    public const ulong m_FingerCurl_Pinky = 0x3c;
    public const ulong m_FingerSplay_Thumb_Index = 0x3e;
    public const ulong m_FingerSplay_Index_Middle = 0x40;
    public const ulong m_FingerSplay_Middle_Ring = 0x42;
    public const ulong m_FingerSplay_Ring_Pinky = 0x44;
}

public static class CVectorAnimParameter {
    public const ulong m_defaultValue = 0x60;
    public const ulong m_bInterpolate = 0x6c;
}

public static class CVectorQuantizer {
    public const ulong m_centroidVectors = 0x0;
    public const ulong m_nCentroids = 0x18;
    public const ulong m_nDimensions = 0x1c;
}

public static class CVirtualAnimParameter {
    public const ulong m_expressionString = 0x50;
    public const ulong m_eParamType = 0x58;
}

public static class CVrSkeletalInputSettings {
    public const ulong m_wristBones = 0x0;
    public const ulong m_fingers = 0x18;
    public const ulong m_name = 0x30;
    public const ulong m_outerKnuckle1 = 0x38;
    public const ulong m_outerKnuckle2 = 0x40;
    public const ulong m_eHand = 0x48;
}

public static class CWayPointHelperUpdateNode {
    public const ulong m_flStartCycle = 0x6c;
    public const ulong m_flEndCycle = 0x70;
    public const ulong m_bOnlyGoals = 0x74;
    public const ulong m_bPreventOvershoot = 0x75;
    public const ulong m_bPreventUndershoot = 0x76;
}

public static class CWristBone {
    public const ulong m_name = 0x0;
    public const ulong m_vForwardLS = 0x8;
    public const ulong m_vUpLS = 0x14;
    public const ulong m_vOffset = 0x20;
}

public static class ChainToSolveData_t {
    public const ulong m_nChainIndex = 0x0;
    public const ulong m_SolverSettings = 0x4;
    public const ulong m_TargetSettings = 0x10;
    public const ulong m_DebugSetting = 0x38;
    public const ulong m_flDebugNormalizedValue = 0x3c;
    public const ulong m_vDebugOffset = 0x40;
}

public static class ConfigIndex {
    public const ulong m_nGroup = 0x0;
    public const ulong m_nConfig = 0x2;
}

public static class FingerBone_t {
    public const ulong m_boneIndex = 0x0;
    public const ulong m_hingeAxis = 0x4;
    public const ulong m_vCapsulePos1 = 0x10;
    public const ulong m_vCapsulePos2 = 0x1c;
    public const ulong m_flMinAngle = 0x28;
    public const ulong m_flMaxAngle = 0x2c;
    public const ulong m_flRadius = 0x30;
}

public static class FingerChain_t {
    public const ulong m_targets = 0x0;
    public const ulong m_bones = 0x18;
    public const ulong m_vTipOffset = 0x30;
    public const ulong m_vSplayHingeAxis = 0x3c;
    public const ulong m_tipParentBoneIndex = 0x48;
    public const ulong m_metacarpalBoneIndex = 0x4c;
    public const ulong m_flSplayMinAngle = 0x50;
    public const ulong m_flSplayMaxAngle = 0x54;
    public const ulong m_flFingerScaleRatio = 0x58;
}

public static class FingerSource_t {
    public const ulong m_nFingerIndex = 0x0;
    public const ulong m_flFingerWeight = 0x4;
}

public static class FollowAttachmentSettings_t {
    public const ulong m_attachment = 0x0;
    public const ulong m_boneIndex = 0x80;
    public const ulong m_bMatchTranslation = 0x84;
    public const ulong m_bMatchRotation = 0x85;
}

public static class FootFixedData_t {
    public const ulong m_vToeOffset = 0x0;
    public const ulong m_vHeelOffset = 0x10;
    public const ulong m_nTargetBoneIndex = 0x20;
    public const ulong m_nAnkleBoneIndex = 0x24;
    public const ulong m_nIKAnchorBoneIndex = 0x28;
    public const ulong m_ikChainIndex = 0x2c;
    public const ulong m_flMaxIKLength = 0x30;
    public const ulong m_nFootIndex = 0x34;
    public const ulong m_nTagIndex = 0x38;
    public const ulong m_flMaxRotationLeft = 0x3c;
    public const ulong m_flMaxRotationRight = 0x40;
}

public static class FootFixedSettings {
    public const ulong m_traceSettings = 0x0;
    public const ulong m_vFootBaseBindPosePositionMS = 0x10;
    public const ulong m_flFootBaseLength = 0x20;
    public const ulong m_flMaxRotationLeft = 0x24;
    public const ulong m_flMaxRotationRight = 0x28;
    public const ulong m_footstepLandedTagIndex = 0x2c;
    public const ulong m_bEnableTracing = 0x30;
    public const ulong m_flTraceAngleBlend = 0x34;
    public const ulong m_nDisableTagIndex = 0x38;
    public const ulong m_nFootIndex = 0x3c;
}

public static class FootLockPoseOpFixedSettings {
    public const ulong m_footInfo = 0x0;
    public const ulong m_hipDampingSettings = 0x18;
    public const ulong m_nHipBoneIndex = 0x28;
    public const ulong m_ikSolverType = 0x2c;
    public const ulong m_bApplyTilt = 0x30;
    public const ulong m_bApplyHipDrop = 0x31;
    public const ulong m_bAlwaysUseFallbackHinge = 0x32;
    public const ulong m_bApplyFootRotationLimits = 0x33;
    public const ulong m_bApplyLegTwistLimits = 0x34;
    public const ulong m_flMaxFootHeight = 0x38;
    public const ulong m_flExtensionScale = 0x3c;
    public const ulong m_flMaxLegTwist = 0x40;
    public const ulong m_bEnableLockBreaking = 0x44;
    public const ulong m_flLockBreakTolerance = 0x48;
    public const ulong m_flLockBlendTime = 0x4c;
    public const ulong m_bEnableStretching = 0x50;
    public const ulong m_flMaxStretchAmount = 0x54;
    public const ulong m_flStretchExtensionScale = 0x58;
}

public static class FootPinningPoseOpFixedData_t {
    public const ulong m_footInfo = 0x0;
    public const ulong m_flBlendTime = 0x18;
    public const ulong m_flLockBreakDistance = 0x1c;
    public const ulong m_flMaxLegTwist = 0x20;
    public const ulong m_nHipBoneIndex = 0x24;
    public const ulong m_bApplyLegTwistLimits = 0x28;
    public const ulong m_bApplyFootRotationLimits = 0x29;
}

public static class FootStepTrigger {
    public const ulong m_tags = 0x0;
    public const ulong m_nFootIndex = 0x18;
    public const ulong m_triggerPhase = 0x1c;
}

public static class HSequence {
    public const ulong m_Value = 0x0;
}

public static class HitReactFixedSettings_t {
    public const ulong m_nWeightListIndex = 0x0;
    public const ulong m_nEffectedBoneCount = 0x4;
    public const ulong m_flMaxImpactForce = 0x8;
    public const ulong m_flMinImpactForce = 0xc;
    public const ulong m_flWhipImpactScale = 0x10;
    public const ulong m_flCounterRotationScale = 0x14;
    public const ulong m_flDistanceFadeScale = 0x18;
    public const ulong m_flPropagationScale = 0x1c;
    public const ulong m_flWhipDelay = 0x20;
    public const ulong m_flSpringStrength = 0x24;
    public const ulong m_flWhipSpringStrength = 0x28;
    public const ulong m_flMaxAngleRadians = 0x2c;
    public const ulong m_nHipBoneIndex = 0x30;
    public const ulong m_flHipBoneTranslationScale = 0x34;
    public const ulong m_flHipDipSpringStrength = 0x38;
    public const ulong m_flHipDipImpactScale = 0x3c;
    public const ulong m_flHipDipDelay = 0x40;
}

public static class IKBoneNameAndIndex_t {
    public const ulong m_Name = 0x0;
}

public static class IKDemoCaptureSettings_t {
    public const ulong m_parentBoneName = 0x0;
    public const ulong m_eMode = 0x8;
    public const ulong m_ikChainName = 0x10;
    public const ulong m_oneBoneStart = 0x18;
    public const ulong m_oneBoneEnd = 0x20;
}

public static class IKSolverSettings_t {
    public const ulong m_SolverType = 0x0;
    public const ulong m_nNumIterations = 0x4;
}

public static class IKTargetSettings_t {
    public const ulong m_TargetSource = 0x0;
    public const ulong m_Bone = 0x8;
    public const ulong m_AnimgraphParameterNamePosition = 0x18;
    public const ulong m_AnimgraphParameterNameOrientation = 0x1c;
    public const ulong m_TargetCoordSystem = 0x20;
}

public static class JiggleBoneSettingsList_t {
    public const ulong m_boneSettings = 0x0;
}

public static class JiggleBoneSettings_t {
    public const ulong m_nBoneIndex = 0x0;
    public const ulong m_flSpringStrength = 0x4;
    public const ulong m_flMaxTimeStep = 0x8;
    public const ulong m_flDamping = 0xc;
    public const ulong m_vBoundsMaxLS = 0x10;
    public const ulong m_vBoundsMinLS = 0x1c;
    public const ulong m_eSimSpace = 0x28;
}

public static class LookAtBone_t {
    public const ulong m_index = 0x0;
    public const ulong m_weight = 0x4;
}

public static class LookAtOpFixedSettings_t {
    public const ulong m_attachment = 0x0;
    public const ulong m_damping = 0x80;
    public const ulong m_bones = 0x90;
    public const ulong m_flYawLimit = 0xa8;
    public const ulong m_flPitchLimit = 0xac;
    public const ulong m_flHysteresisInnerAngle = 0xb0;
    public const ulong m_flHysteresisOuterAngle = 0xb4;
    public const ulong m_bRotateYawForward = 0xb8;
    public const ulong m_bMaintainUpDirection = 0xb9;
    public const ulong m_bTargetIsPosition = 0xba;
    public const ulong m_bUseHysteresis = 0xbb;
}

public static class MaterialGroup_t {
    public const ulong m_name = 0x0;
    public const ulong m_materials = 0x8;
}

public static class ModelBoneFlexDriverControl_t {
    public const ulong m_nBoneComponent = 0x0;
    public const ulong m_flexController = 0x8;
    public const ulong m_flexControllerToken = 0x10;
    public const ulong m_flMin = 0x14;
    public const ulong m_flMax = 0x18;
}

public static class ModelBoneFlexDriver_t {
    public const ulong m_boneName = 0x0;
    public const ulong m_boneNameToken = 0x8;
    public const ulong m_controls = 0x10;
}

public static class ModelSkeletonData_t {
    public const ulong m_boneName = 0x0;
    public const ulong m_nParent = 0x18;
    public const ulong m_boneSphere = 0x30;
    public const ulong m_nFlag = 0x48;
    public const ulong m_bonePosParent = 0x60;
    public const ulong m_boneRotParent = 0x78;
    public const ulong m_boneScaleParent = 0x90;
}

public static class MoodAnimationLayer_t {
    public const ulong m_sName = 0x0;
    public const ulong m_bActiveListening = 0x8;
    public const ulong m_bActiveTalking = 0x9;
    public const ulong m_layerAnimations = 0x10;
    public const ulong m_flIntensity = 0x28;
    public const ulong m_flDurationScale = 0x30;
    public const ulong m_bScaleWithInts = 0x38;
    public const ulong m_flNextStart = 0x3c;
    public const ulong m_flStartOffset = 0x44;
    public const ulong m_flEndOffset = 0x4c;
    public const ulong m_flFadeIn = 0x54;
    public const ulong m_flFadeOut = 0x58;
}

public static class MoodAnimation_t {
    public const ulong m_sName = 0x0;
    public const ulong m_flWeight = 0x8;
}

public static class MotionBlendItem {
    public const ulong m_pChild = 0x0;
    public const ulong m_flKeyValue = 0x8;
}

public static class MotionDBIndex {
    public const ulong m_nIndex = 0x0;
}

public static class MotionIndex {
    public const ulong m_nGroup = 0x0;
    public const ulong m_nMotion = 0x2;
}

public static class ParamSpanSample_t {
    public const ulong m_value = 0x0;
    public const ulong m_flCycle = 0x14;
}

public static class ParamSpan_t {
    public const ulong m_samples = 0x0;
    public const ulong m_hParam = 0x18;
    public const ulong m_eParamType = 0x1a;
    public const ulong m_flStartCycle = 0x1c;
    public const ulong m_flEndCycle = 0x20;
}

public static class PermModelDataAnimatedMaterialAttribute_t {
    public const ulong m_AttributeName = 0x0;
    public const ulong m_nNumChannels = 0x8;
}

public static class PermModelData_t {
    public const ulong m_name = 0x0;
    public const ulong m_modelInfo = 0x8;
    public const ulong m_ExtParts = 0x60;
    public const ulong m_refMeshes = 0x78;
    public const ulong m_refMeshGroupMasks = 0x90;
    public const ulong m_refPhysGroupMasks = 0xa8;
    public const ulong m_refLODGroupMasks = 0xc0;
    public const ulong m_lodGroupSwitchDistances = 0xd8;
    public const ulong m_refPhysicsData = 0xf0;
    public const ulong m_refPhysicsHitboxData = 0x108;
    public const ulong m_refAnimGroups = 0x120;
    public const ulong m_refSequenceGroups = 0x138;
    public const ulong m_meshGroups = 0x150;
    public const ulong m_materialGroups = 0x168;
    public const ulong m_nDefaultMeshGroupMask = 0x180;
    public const ulong m_modelSkeleton = 0x188;
    public const ulong m_remappingTable = 0x230;
    public const ulong m_remappingTableStarts = 0x248;
    public const ulong m_boneFlexDrivers = 0x260;
    public const ulong m_pModelConfigList = 0x278;
    public const ulong m_BodyGroupsHiddenInTools = 0x280;
    public const ulong m_refAnimIncludeModels = 0x298;
    public const ulong m_AnimatedMaterialAttributes = 0x2b0;
}

public static class PermModelExtPart_t {
    public const ulong m_Transform = 0x0;
    public const ulong m_Name = 0x20;
    public const ulong m_nParent = 0x28;
    public const ulong m_refModel = 0x30;
}

public static class PermModelInfo_t {
    public const ulong m_nFlags = 0x0;
    public const ulong m_vHullMin = 0x4;
    public const ulong m_vHullMax = 0x10;
    public const ulong m_vViewMin = 0x1c;
    public const ulong m_vViewMax = 0x28;
    public const ulong m_flMass = 0x34;
    public const ulong m_vEyePosition = 0x38;
    public const ulong m_flMaxEyeDeflection = 0x44;
    public const ulong m_sSurfaceProperty = 0x48;
    public const ulong m_keyValueText = 0x50;
}

public static class PhysSoftbodyDesc_t {
    public const ulong m_ParticleBoneHash = 0x0;
    public const ulong m_Particles = 0x18;
    public const ulong m_Springs = 0x30;
    public const ulong m_Capsules = 0x48;
    public const ulong m_InitPose = 0x60;
    public const ulong m_ParticleBoneName = 0x78;
}

public static class RenderSkeletonBone_t {
    public const ulong m_boneName = 0x0;
    public const ulong m_parentName = 0x8;
    public const ulong m_invBindPose = 0x10;
    public const ulong m_bbox = 0x40;
    public const ulong m_flSphereRadius = 0x58;
}

public static class SampleCode {
    public const ulong m_subCode = 0x0;
}

public static class ScriptInfo_t {
    public const ulong m_code = 0x0;
    public const ulong m_paramsModified = 0x8;
    public const ulong m_proxyReadParams = 0x20;
    public const ulong m_proxyWriteParams = 0x38;
    public const ulong m_eScriptType = 0x50;
}

public static class SkeletalInputOpFixedSettings_t {
    public const ulong m_wristBones = 0x0;
    public const ulong m_fingers = 0x18;
    public const ulong m_outerKnuckle1 = 0x30;
    public const ulong m_outerKnuckle2 = 0x34;
    public const ulong m_eHand = 0x38;
    public const ulong m_eMotionRange = 0x3c;
    public const ulong m_eTransformSource = 0x40;
    public const ulong m_bEnableIK = 0x44;
    public const ulong m_bEnableCollision = 0x45;
}

public static class SkeletonBoneBounds_t {
    public const ulong m_vecCenter = 0x0;
    public const ulong m_vecSize = 0xc;
}

public static class SolveIKChainPoseOpFixedSettings_t {
    public const ulong m_ChainsToSolveData = 0x0;
    public const ulong m_bMatchTargetOrientation = 0x18;
}

public static class StanceInfo_t {
    public const ulong m_vPosition = 0x0;
    public const ulong m_flDirection = 0xc;
}

public static class TagSpan_t {
    public const ulong m_tagIndex = 0x0;
    public const ulong m_startCycle = 0x4;
    public const ulong m_endCycle = 0x8;
}

public static class TraceSettings_t {
    public const ulong m_flTraceHeight = 0x0;
    public const ulong m_flTraceRadius = 0x4;
}

public static class TwoBoneIKSettings_t {
    public const ulong m_endEffectorType = 0x0;
    public const ulong m_endEffectorAttachment = 0x10;
    public const ulong m_targetType = 0x90;
    public const ulong m_targetAttachment = 0xa0;
    public const ulong m_targetBoneIndex = 0x120;
    public const ulong m_hPositionParam = 0x124;
    public const ulong m_hRotationParam = 0x126;
    public const ulong m_bAlwaysUseFallbackHinge = 0x128;
    public const ulong m_vLsFallbackHingeAxis = 0x130;
    public const ulong m_nFixedBoneIndex = 0x140;
    public const ulong m_nMiddleBoneIndex = 0x144;
    public const ulong m_nEndBoneIndex = 0x148;
    public const ulong m_bMatchTargetOrientation = 0x14c;
    public const ulong m_bConstrainTwist = 0x14d;
    public const ulong m_flMaxTwist = 0x150;
}

public static class VPhysXAggregateData_t {
    public const ulong m_nFlags = 0x0;
    public const ulong m_nRefCounter = 0x2;
    public const ulong m_bonesHash = 0x8;
    public const ulong m_boneNames = 0x20;
    public const ulong m_indexNames = 0x38;
    public const ulong m_indexHash = 0x50;
    public const ulong m_bindPose = 0x68;
    public const ulong m_parts = 0x80;
    public const ulong m_constraints2 = 0x98;
    public const ulong m_joints = 0xb0;
    public const ulong m_pFeModel = 0xc8;
    public const ulong m_boneParents = 0xd0;
    public const ulong m_surfacePropertyHashes = 0xe8;
    public const ulong m_collisionAttributes = 0x100;
    public const ulong m_debugPartNames = 0x118;
    public const ulong m_embeddedKeyvalues = 0x130;
}

public static class VPhysXBodyPart_t {
    public const ulong m_nFlags = 0x0;
    public const ulong m_flMass = 0x4;
    public const ulong m_rnShape = 0x8;
    public const ulong m_nCollisionAttributeIndex = 0x80;
    public const ulong m_nReserved = 0x82;
    public const ulong m_flInertiaScale = 0x84;
    public const ulong m_flLinearDamping = 0x88;
    public const ulong m_flAngularDamping = 0x8c;
    public const ulong m_bOverrideMassCenter = 0x90;
    public const ulong m_vMassCenterOverride = 0x94;
}

public static class VPhysXCollisionAttributes_t {
    public const ulong m_CollisionGroup = 0x0;
    public const ulong m_InteractAs = 0x8;
    public const ulong m_InteractWith = 0x20;
    public const ulong m_InteractExclude = 0x38;
    public const ulong m_CollisionGroupString = 0x50;
    public const ulong m_InteractAsStrings = 0x58;
    public const ulong m_InteractWithStrings = 0x70;
    public const ulong m_InteractExcludeStrings = 0x88;
}

public static class VPhysXConstraint2_t {
    public const ulong m_nFlags = 0x0;
    public const ulong m_nParent = 0x4;
    public const ulong m_nChild = 0x6;
    public const ulong m_params = 0x8;
}

public static class VPhysXConstraintParams_t {
    public const ulong m_nType = 0x0;
    public const ulong m_nTranslateMotion = 0x1;
    public const ulong m_nRotateMotion = 0x2;
    public const ulong m_nFlags = 0x3;
    public const ulong m_anchor = 0x4;
    public const ulong m_axes = 0x1c;
    public const ulong m_maxForce = 0x3c;
    public const ulong m_maxTorque = 0x40;
    public const ulong m_linearLimitValue = 0x44;
    public const ulong m_linearLimitRestitution = 0x48;
    public const ulong m_linearLimitSpring = 0x4c;
    public const ulong m_linearLimitDamping = 0x50;
    public const ulong m_twistLowLimitValue = 0x54;
    public const ulong m_twistLowLimitRestitution = 0x58;
    public const ulong m_twistLowLimitSpring = 0x5c;
    public const ulong m_twistLowLimitDamping = 0x60;
    public const ulong m_twistHighLimitValue = 0x64;
    public const ulong m_twistHighLimitRestitution = 0x68;
    public const ulong m_twistHighLimitSpring = 0x6c;
    public const ulong m_twistHighLimitDamping = 0x70;
    public const ulong m_swing1LimitValue = 0x74;
    public const ulong m_swing1LimitRestitution = 0x78;
    public const ulong m_swing1LimitSpring = 0x7c;
    public const ulong m_swing1LimitDamping = 0x80;
    public const ulong m_swing2LimitValue = 0x84;
    public const ulong m_swing2LimitRestitution = 0x88;
    public const ulong m_swing2LimitSpring = 0x8c;
    public const ulong m_swing2LimitDamping = 0x90;
    public const ulong m_goalPosition = 0x94;
    public const ulong m_goalOrientation = 0xa0;
    public const ulong m_goalAngularVelocity = 0xb0;
    public const ulong m_driveSpringX = 0xbc;
    public const ulong m_driveSpringY = 0xc0;
    public const ulong m_driveSpringZ = 0xc4;
    public const ulong m_driveDampingX = 0xc8;
    public const ulong m_driveDampingY = 0xcc;
    public const ulong m_driveDampingZ = 0xd0;
    public const ulong m_driveSpringTwist = 0xd4;
    public const ulong m_driveSpringSwing = 0xd8;
    public const ulong m_driveSpringSlerp = 0xdc;
    public const ulong m_driveDampingTwist = 0xe0;
    public const ulong m_driveDampingSwing = 0xe4;
    public const ulong m_driveDampingSlerp = 0xe8;
    public const ulong m_solverIterationCount = 0xec;
    public const ulong m_projectionLinearTolerance = 0xf0;
    public const ulong m_projectionAngularTolerance = 0xf4;
}

public static class VPhysXJoint_t {
    public const ulong m_nType = 0x0;
    public const ulong m_nBody1 = 0x2;
    public const ulong m_nBody2 = 0x4;
    public const ulong m_nFlags = 0x6;
    public const ulong m_Frame1 = 0x10;
    public const ulong m_Frame2 = 0x30;
    public const ulong m_bEnableCollision = 0x50;
    public const ulong m_bEnableLinearLimit = 0x51;
    public const ulong m_LinearLimit = 0x54;
    public const ulong m_bEnableLinearMotor = 0x5c;
    public const ulong m_vLinearTargetVelocity = 0x60;
    public const ulong m_flMaxForce = 0x6c;
    public const ulong m_bEnableSwingLimit = 0x70;
    public const ulong m_SwingLimit = 0x74;
    public const ulong m_bEnableTwistLimit = 0x7c;
    public const ulong m_TwistLimit = 0x80;
    public const ulong m_bEnableAngularMotor = 0x88;
    public const ulong m_vAngularTargetVelocity = 0x8c;
    public const ulong m_flMaxTorque = 0x98;
    public const ulong m_flLinearFrequency = 0x9c;
    public const ulong m_flLinearDampingRatio = 0xa0;
    public const ulong m_flAngularFrequency = 0xa4;
    public const ulong m_flAngularDampingRatio = 0xa8;
    public const ulong m_flFriction = 0xac;
}

public static class VPhysXRange_t {
    public const ulong m_flMin = 0x0;
    public const ulong m_flMax = 0x4;
}

public static class VPhysics2ShapeDef_t {
    public const ulong m_spheres = 0x0;
    public const ulong m_capsules = 0x18;
    public const ulong m_hulls = 0x30;
    public const ulong m_meshes = 0x48;
    public const ulong m_CollisionAttributeIndices = 0x60;
}

public static class WeightList {
    public const ulong m_name = 0x0;
    public const ulong m_weights = 0x8;
}

public static class WristBone_t {
    public const ulong m_xOffsetTransformMS = 0x0;
    public const ulong m_boneIndex = 0x20;
}