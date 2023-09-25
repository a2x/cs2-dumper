public static class AimMatrixOpFixedSettings_t {
    public const nint m_attachment = 0x0;
    public const nint m_damping = 0x80;
    public const nint m_poseCacheHandles = 0x90;
    public const nint m_eBlendMode = 0xB8;
    public const nint m_fAngleIncrement = 0xBC;
    public const nint m_nSequenceMaxFrame = 0xC0;
    public const nint m_nBoneMaskIndex = 0xC4;
    public const nint m_bTargetIsPosition = 0xC8;
}

public static class AnimComponentID {
    public const nint m_id = 0x0;
}

public static class AnimNodeID {
    public const nint m_id = 0x0;
}

public static class AnimNodeOutputID {
    public const nint m_id = 0x0;
}

public static class AnimParamID {
    public const nint m_id = 0x0;
}

public static class AnimScriptHandle {
    public const nint m_id = 0x0;
}

public static class AnimStateID {
    public const nint m_id = 0x0;
}

public static class AnimTagID {
    public const nint m_id = 0x0;
}

public static class AnimationDecodeDebugDumpElement_t {
    public const nint m_nEntityIndex = 0x0;
    public const nint m_modelName = 0x8;
    public const nint m_poseParams = 0x10;
    public const nint m_decodeOps = 0x28;
    public const nint m_internalOps = 0x40;
    public const nint m_decodedAnims = 0x58;
}

public static class AnimationDecodeDebugDump_t {
    public const nint m_processingType = 0x0;
    public const nint m_elems = 0x8;
}

public static class AnimationSnapshotBase_t {
    public const nint m_flRealTime = 0x0;
    public const nint m_rootToWorld = 0x10;
    public const nint m_bBonesInWorldSpace = 0x40;
    public const nint m_boneSetupMask = 0x48;
    public const nint m_boneTransforms = 0x60;
    public const nint m_flexControllers = 0x78;
    public const nint m_SnapshotType = 0x90;
    public const nint m_bHasDecodeDump = 0x94;
    public const nint m_DecodeDump = 0x98;
}

public static class AnimationSnapshot_t {
    public const nint m_nEntIndex = 0x110;
    public const nint m_modelName = 0x118;
}

public static class AttachmentHandle_t {
    public const nint m_Value = 0x0;
}

public static class BlendItem_t {
    public const nint m_tags = 0x0;
    public const nint m_pChild = 0x18;
    public const nint m_hSequence = 0x28;
    public const nint m_vPos = 0x2C;
    public const nint m_flDuration = 0x34;
    public const nint m_bUseCustomDuration = 0x38;
}

public static class BoneDemoCaptureSettings_t {
    public const nint m_boneName = 0x0;
}

public static class CActionComponentUpdater {
    public const nint m_actions = 0x30;
}

public static class CAddUpdateNode {
    public const nint m_footMotionTiming = 0x8C;
    public const nint m_bApplyToFootMotion = 0x90;
    public const nint m_bApplyChannelsSeparately = 0x91;
    public const nint m_bUseModelSpace = 0x92;
}

public static class CAimConstraint {
    public const nint m_qAimOffset = 0x70;
    public const nint m_nUpType = 0x80;
}

public static class CAimMatrixUpdateNode {
    public const nint m_opFixedSettings = 0x70;
    public const nint m_target = 0x148;
    public const nint m_paramIndex = 0x14C;
    public const nint m_hSequence = 0x150;
    public const nint m_bResetChild = 0x154;
    public const nint m_bLockWhenWaning = 0x155;
}

public static class CAnimActivity {
    public const nint m_name = 0x0;
    public const nint m_nActivity = 0x10;
    public const nint m_nFlags = 0x14;
    public const nint m_nWeight = 0x18;
}

public static class CAnimAttachment {
    public const nint m_influenceRotations = 0x0;
    public const nint m_influenceOffsets = 0x30;
    public const nint m_influenceIndices = 0x60;
    public const nint m_influenceWeights = 0x6C;
    public const nint m_numInfluences = 0x78;
}

public static class CAnimBone {
    public const nint m_name = 0x0;
    public const nint m_parent = 0x10;
    public const nint m_pos = 0x14;
    public const nint m_quat = 0x20;
    public const nint m_scale = 0x30;
    public const nint m_qAlignment = 0x34;
    public const nint m_flags = 0x44;
}

public static class CAnimBoneDifference {
    public const nint m_name = 0x0;
    public const nint m_parent = 0x10;
    public const nint m_posError = 0x20;
    public const nint m_bHasRotation = 0x2C;
    public const nint m_bHasMovement = 0x2D;
}

public static class CAnimComponentUpdater {
    public const nint m_name = 0x18;
    public const nint m_id = 0x20;
    public const nint m_networkMode = 0x24;
    public const nint m_bStartEnabled = 0x28;
}

public static class CAnimData {
    public const nint m_name = 0x10;
    public const nint m_animArray = 0x20;
    public const nint m_decoderArray = 0x38;
    public const nint m_nMaxUniqueFrameIndex = 0x50;
    public const nint m_segmentArray = 0x58;
}

public static class CAnimDataChannelDesc {
    public const nint m_szChannelClass = 0x0;
    public const nint m_szVariableName = 0x10;
    public const nint m_nFlags = 0x20;
    public const nint m_nType = 0x24;
    public const nint m_szGrouping = 0x28;
    public const nint m_szDescription = 0x38;
    public const nint m_szElementNameArray = 0x48;
    public const nint m_nElementIndexArray = 0x60;
    public const nint m_nElementMaskArray = 0x78;
}

public static class CAnimDecoder {
    public const nint m_szName = 0x0;
    public const nint m_nVersion = 0x10;
    public const nint m_nType = 0x14;
}

public static class CAnimDemoCaptureSettings {
    public const nint m_flMaxSplineErrorRotation = 0x0;
    public const nint m_flMaxSplineErrorTranslation = 0x4;
    public const nint m_flMaxSplineErrorScale = 0x8;
    public const nint m_flIkRotation_MaxSplineError = 0xC;
    public const nint m_flIkTranslation_MaxSplineError = 0x10;
    public const nint m_flMaxQuantizationErrorRotation = 0x14;
    public const nint m_flMaxQuantizationErrorTranslation = 0x18;
    public const nint m_flMaxQuantizationErrorScale = 0x1C;
    public const nint m_flIkRotation_MaxQuantizationError = 0x20;
    public const nint m_flIkTranslation_MaxQuantizationError = 0x24;
    public const nint m_baseSequence = 0x28;
    public const nint m_nBaseSequenceFrame = 0x30;
    public const nint m_boneSelectionMode = 0x34;
    public const nint m_bones = 0x38;
    public const nint m_ikChains = 0x50;
}

public static class CAnimDesc {
    public const nint m_name = 0x0;
    public const nint m_flags = 0x10;
    public const nint fps = 0x18;
    public const nint m_Data = 0x20;
    public const nint m_movementArray = 0xF8;
    public const nint m_eventArray = 0x110;
    public const nint m_activityArray = 0x128;
    public const nint m_hierarchyArray = 0x140;
    public const nint framestalltime = 0x158;
    public const nint m_vecRootMin = 0x15C;
    public const nint m_vecRootMax = 0x168;
    public const nint m_vecBoneWorldMin = 0x178;
    public const nint m_vecBoneWorldMax = 0x190;
    public const nint m_sequenceParams = 0x1A8;
}

public static class CAnimDesc_Flag {
    public const nint m_bLooping = 0x0;
    public const nint m_bAllZeros = 0x1;
    public const nint m_bHidden = 0x2;
    public const nint m_bDelta = 0x3;
    public const nint m_bLegacyWorldspace = 0x4;
    public const nint m_bModelDoc = 0x5;
    public const nint m_bImplicitSeqIgnoreDelta = 0x6;
    public const nint m_bAnimGraphAdditive = 0x7;
}

public static class CAnimEncodeDifference {
    public const nint m_boneArray = 0x0;
    public const nint m_morphArray = 0x18;
    public const nint m_userArray = 0x30;
    public const nint m_bHasRotationBitArray = 0x48;
    public const nint m_bHasMovementBitArray = 0x60;
    public const nint m_bHasMorphBitArray = 0x78;
    public const nint m_bHasUserBitArray = 0x90;
}

public static class CAnimEncodedFrames {
    public const nint m_fileName = 0x0;
    public const nint m_nFrames = 0x10;
    public const nint m_nFramesPerBlock = 0x14;
    public const nint m_frameblockArray = 0x18;
    public const nint m_usageDifferences = 0x30;
}

public static class CAnimEnum {
    public const nint m_value = 0x0;
}

public static class CAnimEventDefinition {
    public const nint m_nFrame = 0x8;
    public const nint m_flCycle = 0xC;
    public const nint m_EventData = 0x10;
    public const nint m_sLegacyOptions = 0x20;
    public const nint m_sEventName = 0x30;
}

public static class CAnimFoot {
    public const nint m_name = 0x0;
    public const nint m_vBallOffset = 0x8;
    public const nint m_vHeelOffset = 0x14;
    public const nint m_ankleBoneIndex = 0x20;
    public const nint m_toeBoneIndex = 0x24;
}

public static class CAnimFrameBlockAnim {
    public const nint m_nStartFrame = 0x0;
    public const nint m_nEndFrame = 0x4;
    public const nint m_segmentIndexArray = 0x8;
}

public static class CAnimFrameSegment {
    public const nint m_nUniqueFrameIndex = 0x0;
    public const nint m_nLocalElementMasks = 0x4;
    public const nint m_nLocalChannel = 0x8;
    public const nint m_container = 0x10;
}

public static class CAnimGraphDebugReplay {
    public const nint m_animGraphFileName = 0x40;
    public const nint m_frameList = 0x48;
    public const nint m_startIndex = 0x60;
    public const nint m_writeIndex = 0x64;
    public const nint m_frameCount = 0x68;
}

public static class CAnimGraphModelBinding {
    public const nint m_modelName = 0x8;
    public const nint m_pSharedData = 0x10;
}

public static class CAnimGraphNetworkSettings {
    public const nint m_bNetworkingEnabled = 0x20;
}

public static class CAnimGraphSettingsManager {
    public const nint m_settingsGroups = 0x18;
}

public static class CAnimInputDamping {
    public const nint m_speedFunction = 0x8;
    public const nint m_fSpeedScale = 0xC;
}

public static class CAnimKeyData {
    public const nint m_name = 0x0;
    public const nint m_boneArray = 0x10;
    public const nint m_userArray = 0x28;
    public const nint m_morphArray = 0x40;
    public const nint m_nChannelElements = 0x58;
    public const nint m_dataChannelArray = 0x60;
}

public static class CAnimLocalHierarchy {
    public const nint m_sBone = 0x0;
    public const nint m_sNewParent = 0x10;
    public const nint m_nStartFrame = 0x20;
    public const nint m_nPeakFrame = 0x24;
    public const nint m_nTailFrame = 0x28;
    public const nint m_nEndFrame = 0x2C;
}

public static class CAnimMorphDifference {
    public const nint m_name = 0x0;
}

public static class CAnimMotorUpdaterBase {
    public const nint m_name = 0x10;
    public const nint m_bDefault = 0x18;
}

public static class CAnimMovement {
    public const nint endframe = 0x0;
    public const nint motionflags = 0x4;
    public const nint v0 = 0x8;
    public const nint v1 = 0xC;
    public const nint angle = 0x10;
    public const nint vector = 0x14;
    public const nint position = 0x20;
}

public static class CAnimNodePath {
    public const nint m_path = 0x0;
    public const nint m_nCount = 0x2C;
}

public static class CAnimParamHandle {
    public const nint m_type = 0x0;
    public const nint m_index = 0x1;
}

public static class CAnimParamHandleMap {
    public const nint m_list = 0x0;
}

public static class CAnimParameterBase {
    public const nint m_name = 0x18;
    public const nint m_group = 0x20;
    public const nint m_id = 0x28;
    public const nint m_componentName = 0x40;
    public const nint m_bNetworkingRequested = 0x4C;
    public const nint m_bIsReferenced = 0x4D;
}

public static class CAnimParameterManagerUpdater {
    public const nint m_parameters = 0x18;
    public const nint m_idToIndexMap = 0x30;
    public const nint m_nameToIndexMap = 0x50;
    public const nint m_indexToHandle = 0x70;
    public const nint m_autoResetParams = 0x88;
    public const nint m_autoResetMap = 0xA0;
}

public static class CAnimReplayFrame {
    public const nint m_inputDataBlocks = 0x10;
    public const nint m_instanceData = 0x28;
    public const nint m_startingLocalToWorldTransform = 0x40;
    public const nint m_localToWorldTransform = 0x60;
    public const nint m_timeStamp = 0x80;
}

public static class CAnimScriptComponentUpdater {
    public const nint m_hScript = 0x30;
}

public static class CAnimScriptManager {
    public const nint m_scriptInfo = 0x10;
}

public static class CAnimSequenceParams {
    public const nint m_flFadeInTime = 0x0;
    public const nint m_flFadeOutTime = 0x4;
}

public static class CAnimSkeleton {
    public const nint m_localSpaceTransforms = 0x10;
    public const nint m_modelSpaceTransforms = 0x28;
    public const nint m_boneNames = 0x40;
    public const nint m_children = 0x58;
    public const nint m_parents = 0x70;
    public const nint m_feet = 0x88;
    public const nint m_morphNames = 0xA0;
    public const nint m_lodBoneCounts = 0xB8;
}

public static class CAnimStateMachineUpdater {
    public const nint m_states = 0x8;
    public const nint m_transitions = 0x20;
    public const nint m_startStateIndex = 0x50;
}

public static class CAnimTagBase {
    public const nint m_name = 0x18;
    public const nint m_group = 0x20;
    public const nint m_tagID = 0x28;
    public const nint m_bIsReferenced = 0x2C;
}

public static class CAnimTagManagerUpdater {
    public const nint m_tags = 0x18;
}

public static class CAnimUpdateNodeBase {
    public const nint m_nodePath = 0x18;
    public const nint m_networkMode = 0x48;
    public const nint m_name = 0x50;
}

public static class CAnimUpdateNodeRef {
    public const nint m_nodeIndex = 0x8;
}

public static class CAnimUpdateSharedData {
    public const nint m_nodes = 0x10;
    public const nint m_nodeIndexMap = 0x28;
    public const nint m_components = 0x48;
    public const nint m_pParamListUpdater = 0x60;
    public const nint m_pTagManagerUpdater = 0x68;
    public const nint m_scriptManager = 0x70;
    public const nint m_settings = 0x78;
    public const nint m_pStaticPoseCache = 0xA8;
    public const nint m_pSkeleton = 0xB0;
    public const nint m_rootNodePath = 0xB8;
}

public static class CAnimUser {
    public const nint m_name = 0x0;
    public const nint m_nType = 0x10;
}

public static class CAnimUserDifference {
    public const nint m_name = 0x0;
    public const nint m_nType = 0x10;
}

public static class CAnimationGraphVisualizerAxis {
    public const nint m_xWsTransform = 0x40;
    public const nint m_flAxisSize = 0x60;
}

public static class CAnimationGraphVisualizerLine {
    public const nint m_vWsPositionStart = 0x40;
    public const nint m_vWsPositionEnd = 0x50;
    public const nint m_Color = 0x60;
}

public static class CAnimationGraphVisualizerPie {
    public const nint m_vWsCenter = 0x40;
    public const nint m_vWsStart = 0x50;
    public const nint m_vWsEnd = 0x60;
    public const nint m_Color = 0x70;
}

public static class CAnimationGraphVisualizerPrimitiveBase {
    public const nint m_Type = 0x8;
    public const nint m_OwningAnimNodePaths = 0xC;
    public const nint m_nOwningAnimNodePathCount = 0x38;
}

public static class CAnimationGraphVisualizerSphere {
    public const nint m_vWsPosition = 0x40;
    public const nint m_flRadius = 0x50;
    public const nint m_Color = 0x54;
}

public static class CAnimationGraphVisualizerText {
    public const nint m_vWsPosition = 0x40;
    public const nint m_Color = 0x50;
    public const nint m_Text = 0x58;
}

public static class CAnimationGroup {
    public const nint m_nFlags = 0x10;
    public const nint m_name = 0x18;
    public const nint m_localHAnimArray_Handle = 0x60;
    public const nint m_includedGroupArray_Handle = 0x78;
    public const nint m_directHSeqGroup_Handle = 0x90;
    public const nint m_decodeKey = 0x98;
    public const nint m_szScripts = 0x110;
}

public static class CAttachment {
    public const nint m_name = 0x0;
    public const nint m_influenceNames = 0x8;
    public const nint m_vInfluenceRotations = 0x20;
    public const nint m_vInfluenceOffsets = 0x50;
    public const nint m_influenceWeights = 0x74;
    public const nint m_bInfluenceRootTransform = 0x80;
    public const nint m_nInfluences = 0x83;
    public const nint m_bIgnoreRotation = 0x84;
}

public static class CAudioAnimTag {
    public const nint m_clipName = 0x38;
    public const nint m_attachmentName = 0x40;
    public const nint m_flVolume = 0x48;
    public const nint m_bStopWhenTagEnds = 0x4C;
    public const nint m_bStopWhenGraphEnds = 0x4D;
    public const nint m_bPlayOnServer = 0x4E;
    public const nint m_bPlayOnClient = 0x4F;
}

public static class CBaseConstraint {
    public const nint m_name = 0x28;
    public const nint m_vUpVector = 0x30;
    public const nint m_slaves = 0x40;
    public const nint m_targets = 0x58;
}

public static class CBinaryUpdateNode {
    public const nint m_pChild1 = 0x58;
    public const nint m_pChild2 = 0x68;
    public const nint m_timingBehavior = 0x78;
    public const nint m_flTimingBlend = 0x7C;
    public const nint m_bResetChild1 = 0x80;
    public const nint m_bResetChild2 = 0x81;
}

public static class CBlend2DUpdateNode {
    public const nint m_items = 0x60;
    public const nint m_tags = 0x78;
    public const nint m_paramSpans = 0x90;
    public const nint m_nodeItemIndices = 0xA8;
    public const nint m_damping = 0xC0;
    public const nint m_blendSourceX = 0xD0;
    public const nint m_paramX = 0xD4;
    public const nint m_blendSourceY = 0xD8;
    public const nint m_paramY = 0xDC;
    public const nint m_eBlendMode = 0xE0;
    public const nint m_playbackSpeed = 0xE4;
    public const nint m_bLoop = 0xE8;
    public const nint m_bLockBlendOnReset = 0xE9;
    public const nint m_bLockWhenWaning = 0xEA;
    public const nint m_bAnimEventsAndTagsOnMostWeightedOnly = 0xEB;
}

public static class CBlendCurve {
    public const nint m_flControlPoint1 = 0x0;
    public const nint m_flControlPoint2 = 0x4;
}

public static class CBlendUpdateNode {
    public const nint m_children = 0x60;
    public const nint m_sortedOrder = 0x78;
    public const nint m_targetValues = 0x90;
    public const nint m_blendValueSource = 0xAC;
    public const nint m_paramIndex = 0xB0;
    public const nint m_damping = 0xB8;
    public const nint m_blendKeyType = 0xC8;
    public const nint m_bLockBlendOnReset = 0xCC;
    public const nint m_bSyncCycles = 0xCD;
    public const nint m_bLoop = 0xCE;
    public const nint m_bLockWhenWaning = 0xCF;
}

public static class CBodyGroupAnimTag {
    public const nint m_nPriority = 0x38;
    public const nint m_bodyGroupSettings = 0x40;
}

public static class CBodyGroupSetting {
    public const nint m_BodyGroupName = 0x0;
    public const nint m_nBodyGroupOption = 0x8;
}

public static class CBoneConstraintDotToMorph {
    public const nint m_sBoneName = 0x28;
    public const nint m_sTargetBoneName = 0x30;
    public const nint m_sMorphChannelName = 0x38;
    public const nint m_flRemap = 0x40;
}

public static class CBoneConstraintPoseSpaceBone {
    public const nint m_inputList = 0x70;
}

public static class CBoneConstraintPoseSpaceBone_Input_t {
    public const nint m_inputValue = 0x0;
    public const nint m_outputTransformList = 0x10;
}

public static class CBoneConstraintPoseSpaceMorph {
    public const nint m_sBoneName = 0x28;
    public const nint m_sAttachmentName = 0x30;
    public const nint m_outputMorph = 0x38;
    public const nint m_inputList = 0x50;
    public const nint m_bClamp = 0x68;
}

public static class CBoneConstraintPoseSpaceMorph_Input_t {
    public const nint m_inputValue = 0x0;
    public const nint m_outputWeightList = 0x10;
}

public static class CBoneMaskUpdateNode {
    public const nint m_nWeightListIndex = 0x8C;
    public const nint m_flRootMotionBlend = 0x90;
    public const nint m_blendSpace = 0x94;
    public const nint m_footMotionTiming = 0x98;
    public const nint m_bUseBlendScale = 0x9C;
    public const nint m_blendValueSource = 0xA0;
    public const nint m_hBlendParameter = 0xA4;
}

public static class CBonePositionMetricEvaluator {
    public const nint m_nBoneIndex = 0x50;
}

public static class CBoneVelocityMetricEvaluator {
    public const nint m_nBoneIndex = 0x50;
}

public static class CBoolAnimParameter {
    public const nint m_bDefaultValue = 0x60;
}

public static class CCPPScriptComponentUpdater {
    public const nint m_scriptsToRun = 0x30;
}

public static class CCachedPose {
    public const nint m_transforms = 0x8;
    public const nint m_morphWeights = 0x20;
    public const nint m_hSequence = 0x38;
    public const nint m_flCycle = 0x3C;
}

public static class CChoiceUpdateNode {
    public const nint m_children = 0x58;
    public const nint m_weights = 0x70;
    public const nint m_blendTimes = 0x88;
    public const nint m_choiceMethod = 0xA0;
    public const nint m_choiceChangeMethod = 0xA4;
    public const nint m_blendMethod = 0xA8;
    public const nint m_blendTime = 0xAC;
    public const nint m_bCrossFade = 0xB0;
    public const nint m_bResetChosen = 0xB1;
    public const nint m_bDontResetSameSelection = 0xB2;
}

public static class CClothSettingsAnimTag {
    public const nint m_flStiffness = 0x38;
    public const nint m_flEaseIn = 0x3C;
    public const nint m_flEaseOut = 0x40;
    public const nint m_nVertexSet = 0x48;
}

public static class CCompressorGroup {
    public const nint m_nTotalElementCount = 0x0;
    public const nint m_szChannelClass = 0x8;
    public const nint m_szVariableName = 0x20;
    public const nint m_nType = 0x38;
    public const nint m_nFlags = 0x50;
    public const nint m_szGrouping = 0x68;
    public const nint m_nCompressorIndex = 0x80;
    public const nint m_szElementNames = 0x98;
    public const nint m_nElementUniqueID = 0xB0;
    public const nint m_nElementMask = 0xC8;
    public const nint m_vectorCompressor = 0xF8;
    public const nint m_quaternionCompressor = 0x110;
    public const nint m_intCompressor = 0x128;
    public const nint m_boolCompressor = 0x140;
    public const nint m_colorCompressor = 0x158;
    public const nint m_vector2DCompressor = 0x170;
    public const nint m_vector4DCompressor = 0x188;
}

public static class CConcreteAnimParameter {
    public const nint m_previewButton = 0x50;
    public const nint m_eNetworkSetting = 0x54;
    public const nint m_bUseMostRecentValue = 0x58;
    public const nint m_bAutoReset = 0x59;
    public const nint m_bGameWritable = 0x5A;
    public const nint m_bGraphWritable = 0x5B;
}

public static class CConstraintSlave {
    public const nint m_qBaseOrientation = 0x0;
    public const nint m_vBasePosition = 0x10;
    public const nint m_nBoneHash = 0x1C;
    public const nint m_flWeight = 0x20;
    public const nint m_sName = 0x28;
}

public static class CConstraintTarget {
    public const nint m_qOffset = 0x20;
    public const nint m_vOffset = 0x30;
    public const nint m_nBoneHash = 0x3C;
    public const nint m_sName = 0x40;
    public const nint m_flWeight = 0x48;
    public const nint m_bIsAttachment = 0x59;
}

public static class CCycleBase {
    public const nint m_flCycle = 0x0;
}

public static class CCycleControlClipUpdateNode {
    public const nint m_tags = 0x60;
    public const nint m_hSequence = 0x7C;
    public const nint m_duration = 0x80;
    public const nint m_valueSource = 0x84;
    public const nint m_paramIndex = 0x88;
}

public static class CCycleControlUpdateNode {
    public const nint m_valueSource = 0x68;
    public const nint m_paramIndex = 0x6C;
}

public static class CDampedPathAnimMotorUpdater {
    public const nint m_flAnticipationTime = 0x2C;
    public const nint m_flMinSpeedScale = 0x30;
    public const nint m_hAnticipationPosParam = 0x34;
    public const nint m_hAnticipationHeadingParam = 0x36;
    public const nint m_flSpringConstant = 0x38;
    public const nint m_flMinSpringTension = 0x3C;
    public const nint m_flMaxSpringTension = 0x40;
}

public static class CDampedValueComponentUpdater {
    public const nint m_items = 0x30;
}

public static class CDampedValueUpdateItem {
    public const nint m_damping = 0x0;
    public const nint m_hParamIn = 0x18;
    public const nint m_hParamOut = 0x1A;
}

public static class CDemoSettingsComponentUpdater {
    public const nint m_settings = 0x30;
}

public static class CDirectPlaybackTagData {
    public const nint m_sequenceName = 0x0;
    public const nint m_tags = 0x8;
}

public static class CDirectPlaybackUpdateNode {
    public const nint m_bFinishEarly = 0x6C;
    public const nint m_bResetOnFinish = 0x6D;
    public const nint m_allTags = 0x70;
}

public static class CDirectionalBlendUpdateNode {
    public const nint m_hSequences = 0x5C;
    public const nint m_damping = 0x80;
    public const nint m_blendValueSource = 0x90;
    public const nint m_paramIndex = 0x94;
    public const nint m_playbackSpeed = 0x98;
    public const nint m_duration = 0x9C;
    public const nint m_bLoop = 0xA0;
    public const nint m_bLockBlendOnReset = 0xA1;
}

public static class CDistanceRemainingMetricEvaluator {
    public const nint m_flMaxDistance = 0x50;
    public const nint m_flMinDistance = 0x54;
    public const nint m_flStartGoalFilterDistance = 0x58;
    public const nint m_flMaxGoalOvershootScale = 0x5C;
    public const nint m_bFilterFixedMinDistance = 0x60;
    public const nint m_bFilterGoalDistance = 0x61;
    public const nint m_bFilterGoalOvershoot = 0x62;
}

public static class CDrawCullingData {
    public const nint m_vConeApex = 0x0;
    public const nint m_ConeAxis = 0xC;
    public const nint m_ConeCutoff = 0xF;
}

public static class CEmitTagActionUpdater {
    public const nint m_nTagIndex = 0x18;
    public const nint m_bIsZeroDuration = 0x1C;
}

public static class CEnumAnimParameter {
    public const nint m_defaultValue = 0x68;
    public const nint m_enumOptions = 0x70;
}

public static class CExpressionActionUpdater {
    public const nint m_hParam = 0x18;
    public const nint m_eParamType = 0x1A;
    public const nint m_hScript = 0x1C;
}

public static class CFingerBone {
    public const nint m_boneName = 0x0;
    public const nint m_hingeAxis = 0x8;
    public const nint m_vCapsulePos1 = 0x14;
    public const nint m_vCapsulePos2 = 0x20;
    public const nint m_flMinAngle = 0x2C;
    public const nint m_flMaxAngle = 0x30;
    public const nint m_flRadius = 0x34;
}

public static class CFingerChain {
    public const nint m_targets = 0x0;
    public const nint m_bones = 0x18;
    public const nint m_name = 0x30;
    public const nint m_tipParentBoneName = 0x38;
    public const nint m_vTipOffset = 0x40;
    public const nint m_metacarpalBoneName = 0x50;
    public const nint m_vSplayHingeAxis = 0x58;
    public const nint m_flSplayMinAngle = 0x64;
    public const nint m_flSplayMaxAngle = 0x68;
    public const nint m_flFingerScaleRatio = 0x6C;
}

public static class CFingerSource {
    public const nint m_nFingerIndex = 0x0;
    public const nint m_flFingerWeight = 0x4;
}

public static class CFlexController {
    public const nint m_szName = 0x0;
    public const nint m_szType = 0x8;
    public const nint min = 0x10;
    public const nint max = 0x14;
}

public static class CFlexDesc {
    public const nint m_szFacs = 0x0;
}

public static class CFlexOp {
    public const nint m_OpCode = 0x0;
    public const nint m_Data = 0x4;
}

public static class CFlexRule {
    public const nint m_nFlex = 0x0;
    public const nint m_FlexOps = 0x8;
}

public static class CFloatAnimParameter {
    public const nint m_fDefaultValue = 0x60;
    public const nint m_fMinValue = 0x64;
    public const nint m_fMaxValue = 0x68;
    public const nint m_bInterpolate = 0x6C;
}

public static class CFollowAttachmentUpdateNode {
    public const nint m_opFixedData = 0x70;
}

public static class CFollowPathUpdateNode {
    public const nint m_flBlendOutTime = 0x6C;
    public const nint m_bBlockNonPathMovement = 0x70;
    public const nint m_bStopFeetAtGoal = 0x71;
    public const nint m_bScaleSpeed = 0x72;
    public const nint m_flScale = 0x74;
    public const nint m_flMinAngle = 0x78;
    public const nint m_flMaxAngle = 0x7C;
    public const nint m_flSpeedScaleBlending = 0x80;
    public const nint m_turnDamping = 0x88;
    public const nint m_facingTarget = 0x98;
    public const nint m_hParam = 0x9C;
    public const nint m_flTurnToFaceOffset = 0xA0;
    public const nint m_bTurnToFace = 0xA4;
}

public static class CFootAdjustmentUpdateNode {
    public const nint m_clips = 0x70;
    public const nint m_hBasePoseCacheHandle = 0x88;
    public const nint m_facingTarget = 0x8C;
    public const nint m_flTurnTimeMin = 0x90;
    public const nint m_flTurnTimeMax = 0x94;
    public const nint m_flStepHeightMax = 0x98;
    public const nint m_flStepHeightMaxAngle = 0x9C;
    public const nint m_bResetChild = 0xA0;
    public const nint m_bAnimationDriven = 0xA1;
}

public static class CFootCycleDefinition {
    public const nint m_vStancePositionMS = 0x0;
    public const nint m_vMidpointPositionMS = 0xC;
    public const nint m_flStanceDirectionMS = 0x18;
    public const nint m_vToStrideStartPos = 0x1C;
    public const nint m_stanceCycle = 0x28;
    public const nint m_footLiftCycle = 0x2C;
    public const nint m_footOffCycle = 0x30;
    public const nint m_footStrikeCycle = 0x34;
    public const nint m_footLandCycle = 0x38;
}

public static class CFootCycleMetricEvaluator {
    public const nint m_footIndices = 0x50;
}

public static class CFootDefinition {
    public const nint m_name = 0x0;
    public const nint m_ankleBoneName = 0x8;
    public const nint m_toeBoneName = 0x10;
    public const nint m_vBallOffset = 0x18;
    public const nint m_vHeelOffset = 0x24;
    public const nint m_flFootLength = 0x30;
    public const nint m_flBindPoseDirectionMS = 0x34;
    public const nint m_flTraceHeight = 0x38;
    public const nint m_flTraceRadius = 0x3C;
}

public static class CFootFallAnimTag {
    public const nint m_foot = 0x38;
}

public static class CFootLockUpdateNode {
    public const nint m_opFixedSettings = 0x68;
    public const nint m_footSettings = 0xD0;
    public const nint m_hipShiftDamping = 0xE8;
    public const nint m_rootHeightDamping = 0xF8;
    public const nint m_flStrideCurveScale = 0x108;
    public const nint m_flStrideCurveLimitScale = 0x10C;
    public const nint m_flStepHeightIncreaseScale = 0x110;
    public const nint m_flStepHeightDecreaseScale = 0x114;
    public const nint m_flHipShiftScale = 0x118;
    public const nint m_flBlendTime = 0x11C;
    public const nint m_flMaxRootHeightOffset = 0x120;
    public const nint m_flMinRootHeightOffset = 0x124;
    public const nint m_flTiltPlanePitchSpringStrength = 0x128;
    public const nint m_flTiltPlaneRollSpringStrength = 0x12C;
    public const nint m_bApplyFootRotationLimits = 0x130;
    public const nint m_bApplyHipShift = 0x131;
    public const nint m_bModulateStepHeight = 0x132;
    public const nint m_bResetChild = 0x133;
    public const nint m_bEnableVerticalCurvedPaths = 0x134;
    public const nint m_bEnableRootHeightDamping = 0x135;
}

public static class CFootMotion {
    public const nint m_strides = 0x0;
    public const nint m_name = 0x18;
    public const nint m_bAdditive = 0x20;
}

public static class CFootPinningUpdateNode {
    public const nint m_poseOpFixedData = 0x70;
    public const nint m_eTimingSource = 0xA0;
    public const nint m_params = 0xA8;
    public const nint m_bResetChild = 0xC0;
}

public static class CFootPositionMetricEvaluator {
    public const nint m_footIndices = 0x50;
    public const nint m_bIgnoreSlope = 0x68;
}

public static class CFootStepTriggerUpdateNode {
    public const nint m_triggers = 0x68;
    public const nint m_flTolerance = 0x84;
}

public static class CFootStride {
    public const nint m_definition = 0x0;
    public const nint m_trajectories = 0x40;
}

public static class CFootTrajectories {
    public const nint m_trajectories = 0x0;
}

public static class CFootTrajectory {
    public const nint m_vOffset = 0x0;
    public const nint m_flRotationOffset = 0xC;
    public const nint m_flProgression = 0x10;
}

public static class CFootstepLandedAnimTag {
    public const nint m_FootstepType = 0x38;
    public const nint m_OverrideSoundName = 0x40;
    public const nint m_DebugAnimSourceString = 0x48;
    public const nint m_BoneName = 0x50;
}

public static class CFutureFacingMetricEvaluator {
    public const nint m_flDistance = 0x50;
    public const nint m_flTime = 0x54;
}

public static class CFutureVelocityMetricEvaluator {
    public const nint m_flDistance = 0x50;
    public const nint m_flStoppingDistance = 0x54;
    public const nint m_flTargetSpeed = 0x58;
    public const nint m_eMode = 0x5C;
}

public static class CHitBox {
    public const nint m_name = 0x0;
    public const nint m_sSurfaceProperty = 0x8;
    public const nint m_sBoneName = 0x10;
    public const nint m_vMinBounds = 0x18;
    public const nint m_vMaxBounds = 0x24;
    public const nint m_flShapeRadius = 0x30;
    public const nint m_nBoneNameHash = 0x34;
    public const nint m_nGroupId = 0x38;
    public const nint m_nShapeType = 0x3C;
    public const nint m_bTranslationOnly = 0x3D;
    public const nint m_CRC = 0x40;
    public const nint m_cRenderColor = 0x44;
    public const nint m_nHitBoxIndex = 0x48;
}

public static class CHitBoxSet {
    public const nint m_name = 0x0;
    public const nint m_nNameHash = 0x8;
    public const nint m_HitBoxes = 0x10;
    public const nint m_SourceFilename = 0x28;
}

public static class CHitBoxSetList {
    public const nint m_HitBoxSets = 0x0;
}

public static class CHitReactUpdateNode {
    public const nint m_opFixedSettings = 0x68;
    public const nint m_triggerParam = 0xB4;
    public const nint m_hitBoneParam = 0xB6;
    public const nint m_hitOffsetParam = 0xB8;
    public const nint m_hitDirectionParam = 0xBA;
    public const nint m_hitStrengthParam = 0xBC;
    public const nint m_flMinDelayBetweenHits = 0xC0;
    public const nint m_bResetChild = 0xC4;
}

public static class CIntAnimParameter {
    public const nint m_defaultValue = 0x60;
    public const nint m_minValue = 0x64;
    public const nint m_maxValue = 0x68;
}

public static class CJiggleBoneUpdateNode {
    public const nint m_opFixedData = 0x68;
}

public static class CJumpHelperUpdateNode {
    public const nint m_hTargetParam = 0xA8;
    public const nint m_flOriginalJumpMovement = 0xAC;
    public const nint m_flOriginalJumpDuration = 0xB8;
    public const nint m_flJumpStartCycle = 0xBC;
    public const nint m_flJumpEndCycle = 0xC0;
    public const nint m_eCorrectionMethod = 0xC4;
    public const nint m_bTranslationAxis = 0xC8;
    public const nint m_bScaleSpeed = 0xCB;
}

public static class CLODComponentUpdater {
    public const nint m_nServerLOD = 0x30;
}

public static class CLeanMatrixUpdateNode {
    public const nint m_frameCorners = 0x5C;
    public const nint m_poses = 0x80;
    public const nint m_damping = 0xA8;
    public const nint m_blendSource = 0xB8;
    public const nint m_paramIndex = 0xBC;
    public const nint m_verticalAxis = 0xC0;
    public const nint m_horizontalAxis = 0xCC;
    public const nint m_hSequence = 0xD8;
    public const nint m_flMaxValue = 0xDC;
    public const nint m_nSequenceMaxFrame = 0xE0;
}

public static class CLookAtUpdateNode {
    public const nint m_opFixedSettings = 0x70;
    public const nint m_target = 0x138;
    public const nint m_paramIndex = 0x13C;
    public const nint m_weightParamIndex = 0x13E;
    public const nint m_bResetChild = 0x140;
    public const nint m_bLockWhenWaning = 0x141;
}

public static class CLookComponentUpdater {
    public const nint m_hLookHeading = 0x34;
    public const nint m_hLookHeadingVelocity = 0x36;
    public const nint m_hLookPitch = 0x38;
    public const nint m_hLookDistance = 0x3A;
    public const nint m_hLookDirection = 0x3C;
    public const nint m_hLookTarget = 0x3E;
    public const nint m_hLookTargetWorldSpace = 0x40;
    public const nint m_bNetworkLookTarget = 0x42;
}

public static class CMaterialAttributeAnimTag {
    public const nint m_AttributeName = 0x38;
    public const nint m_AttributeType = 0x40;
    public const nint m_flValue = 0x44;
    public const nint m_Color = 0x48;
}

public static class CMaterialDrawDescriptor {
    public const nint m_nPrimitiveType = 0x0;
    public const nint m_nBaseVertex = 0x4;
    public const nint m_nVertexCount = 0x8;
    public const nint m_nStartIndex = 0xC;
    public const nint m_nIndexCount = 0x10;
    public const nint m_flUvDensity = 0x14;
    public const nint m_vTintColor = 0x18;
    public const nint m_flAlpha = 0x24;
    public const nint m_nFirstMeshlet = 0x2C;
    public const nint m_nNumMeshlets = 0x30;
    public const nint m_indexBuffer = 0xB8;
    public const nint m_material = 0xE0;
}

public static class CMeshletDescriptor {
    public const nint m_PackedAABB = 0x0;
    public const nint m_CullingData = 0x8;
}

public static class CModelConfig {
    public const nint m_ConfigName = 0x0;
    public const nint m_Elements = 0x8;
    public const nint m_bTopLevel = 0x20;
}

public static class CModelConfigElement {
    public const nint m_ElementName = 0x8;
    public const nint m_NestedElements = 0x10;
}

public static class CModelConfigElement_AttachedModel {
    public const nint m_InstanceName = 0x48;
    public const nint m_EntityClass = 0x50;
    public const nint m_hModel = 0x58;
    public const nint m_vOffset = 0x60;
    public const nint m_aAngOffset = 0x6C;
    public const nint m_AttachmentName = 0x78;
    public const nint m_LocalAttachmentOffsetName = 0x80;
    public const nint m_AttachmentType = 0x88;
    public const nint m_bBoneMergeFlex = 0x8C;
    public const nint m_bUserSpecifiedColor = 0x8D;
    public const nint m_bUserSpecifiedMaterialGroup = 0x8E;
    public const nint m_bAcceptParentMaterialDrivenDecals = 0x8F;
    public const nint m_BodygroupOnOtherModels = 0x90;
    public const nint m_MaterialGroupOnOtherModels = 0x98;
}

public static class CModelConfigElement_Command {
    public const nint m_Command = 0x48;
    public const nint m_Args = 0x50;
}

public static class CModelConfigElement_RandomColor {
    public const nint m_Gradient = 0x48;
}

public static class CModelConfigElement_RandomPick {
    public const nint m_Choices = 0x48;
    public const nint m_ChoiceWeights = 0x60;
}

public static class CModelConfigElement_SetBodygroup {
    public const nint m_GroupName = 0x48;
    public const nint m_nChoice = 0x50;
}

public static class CModelConfigElement_SetBodygroupOnAttachedModels {
    public const nint m_GroupName = 0x48;
    public const nint m_nChoice = 0x50;
}

public static class CModelConfigElement_SetMaterialGroup {
    public const nint m_MaterialGroupName = 0x48;
}

public static class CModelConfigElement_SetMaterialGroupOnAttachedModels {
    public const nint m_MaterialGroupName = 0x48;
}

public static class CModelConfigElement_SetRenderColor {
    public const nint m_Color = 0x48;
}

public static class CModelConfigElement_UserPick {
    public const nint m_Choices = 0x48;
}

public static class CModelConfigList {
    public const nint m_bHideMaterialGroupInTools = 0x0;
    public const nint m_bHideRenderColorInTools = 0x1;
    public const nint m_Configs = 0x8;
}

public static class CMoodVData {
    public const nint m_sModelName = 0x0;
    public const nint m_nMoodType = 0xE0;
    public const nint m_animationLayers = 0xE8;
}

public static class CMorphBundleData {
    public const nint m_flULeftSrc = 0x0;
    public const nint m_flVTopSrc = 0x4;
    public const nint m_offsets = 0x8;
    public const nint m_ranges = 0x20;
}

public static class CMorphConstraint {
    public const nint m_sTargetMorph = 0x70;
    public const nint m_nSlaveChannel = 0x78;
    public const nint m_flMin = 0x7C;
    public const nint m_flMax = 0x80;
}

public static class CMorphData {
    public const nint m_name = 0x0;
    public const nint m_morphRectDatas = 0x8;
}

public static class CMorphRectData {
    public const nint m_nXLeftDst = 0x0;
    public const nint m_nYTopDst = 0x2;
    public const nint m_flUWidthSrc = 0x4;
    public const nint m_flVHeightSrc = 0x8;
    public const nint m_bundleDatas = 0x10;
}

public static class CMorphSetData {
    public const nint m_nWidth = 0x10;
    public const nint m_nHeight = 0x14;
    public const nint m_bundleTypes = 0x18;
    public const nint m_morphDatas = 0x30;
    public const nint m_pTextureAtlas = 0x48;
    public const nint m_FlexDesc = 0x50;
    public const nint m_FlexControllers = 0x68;
    public const nint m_FlexRules = 0x80;
}

public static class CMotionDataSet {
    public const nint m_groups = 0x0;
    public const nint m_nDimensionCount = 0x18;
}

public static class CMotionGraph {
    public const nint m_paramSpans = 0x10;
    public const nint m_tags = 0x28;
    public const nint m_pRootNode = 0x40;
    public const nint m_nParameterCount = 0x48;
    public const nint m_nConfigStartIndex = 0x4C;
    public const nint m_nConfigCount = 0x50;
    public const nint m_bLoop = 0x54;
}

public static class CMotionGraphConfig {
    public const nint m_paramValues = 0x0;
    public const nint m_flDuration = 0x10;
    public const nint m_nMotionIndex = 0x14;
    public const nint m_nSampleStart = 0x18;
    public const nint m_nSampleCount = 0x1C;
}

public static class CMotionGraphGroup {
    public const nint m_searchDB = 0x0;
    public const nint m_motionGraphs = 0xB8;
    public const nint m_motionGraphConfigs = 0xD0;
    public const nint m_sampleToConfig = 0xE8;
    public const nint m_hIsActiveScript = 0x100;
}

public static class CMotionGraphUpdateNode {
    public const nint m_pMotionGraph = 0x58;
}

public static class CMotionMatchingUpdateNode {
    public const nint m_dataSet = 0x58;
    public const nint m_metrics = 0x78;
    public const nint m_weights = 0x90;
    public const nint m_bSearchEveryTick = 0xE0;
    public const nint m_flSearchInterval = 0xE4;
    public const nint m_bSearchWhenClipEnds = 0xE8;
    public const nint m_bSearchWhenGoalChanges = 0xE9;
    public const nint m_blendCurve = 0xEC;
    public const nint m_flSampleRate = 0xF4;
    public const nint m_flBlendTime = 0xF8;
    public const nint m_bLockClipWhenWaning = 0xFC;
    public const nint m_flSelectionThreshold = 0x100;
    public const nint m_flReselectionTimeWindow = 0x104;
    public const nint m_bEnableRotationCorrection = 0x108;
    public const nint m_bGoalAssist = 0x109;
    public const nint m_flGoalAssistDistance = 0x10C;
    public const nint m_flGoalAssistTolerance = 0x110;
    public const nint m_distanceScale_Damping = 0x118;
    public const nint m_flDistanceScale_OuterRadius = 0x128;
    public const nint m_flDistanceScale_InnerRadius = 0x12C;
    public const nint m_flDistanceScale_MaxScale = 0x130;
    public const nint m_flDistanceScale_MinScale = 0x134;
    public const nint m_bEnableDistanceScaling = 0x138;
}

public static class CMotionMetricEvaluator {
    public const nint m_means = 0x18;
    public const nint m_standardDeviations = 0x30;
    public const nint m_flWeight = 0x48;
    public const nint m_nDimensionStartIndex = 0x4C;
}

public static class CMotionNode {
    public const nint m_name = 0x18;
    public const nint m_id = 0x20;
}

public static class CMotionNodeBlend1D {
    public const nint m_blendItems = 0x28;
    public const nint m_nParamIndex = 0x40;
}

public static class CMotionNodeSequence {
    public const nint m_tags = 0x28;
    public const nint m_hSequence = 0x40;
    public const nint m_flPlaybackSpeed = 0x44;
}

public static class CMotionSearchDB {
    public const nint m_rootNode = 0x0;
    public const nint m_residualQuantizer = 0x80;
    public const nint m_codeIndices = 0xA0;
}

public static class CMotionSearchNode {
    public const nint m_children = 0x0;
    public const nint m_quantizer = 0x18;
    public const nint m_sampleCodes = 0x38;
    public const nint m_sampleIndices = 0x50;
    public const nint m_selectableSamples = 0x68;
}

public static class CMovementComponentUpdater {
    public const nint m_movementModes = 0x30;
    public const nint m_motors = 0x48;
    public const nint m_facingDamping = 0x60;
    public const nint m_eDefaultFacingMode = 0x70;
    public const nint m_nDefaultMotorIndex = 0x7C;
    public const nint m_bMoveVarsDisabled = 0x80;
    public const nint m_bNetworkPath = 0x81;
    public const nint m_bNetworkFacing = 0x82;
    public const nint m_paramHandles = 0x83;
}

public static class CMovementMode {
    public const nint m_name = 0x0;
    public const nint m_flSpeed = 0x8;
}

public static class CMoverUpdateNode {
    public const nint m_damping = 0x70;
    public const nint m_facingTarget = 0x80;
    public const nint m_hMoveVecParam = 0x84;
    public const nint m_hMoveHeadingParam = 0x86;
    public const nint m_hTurnToFaceParam = 0x88;
    public const nint m_flTurnToFaceOffset = 0x8C;
    public const nint m_flTurnToFaceLimit = 0x90;
    public const nint m_bAdditive = 0x94;
    public const nint m_bApplyMovement = 0x95;
    public const nint m_bOrientMovement = 0x96;
    public const nint m_bApplyRotation = 0x97;
    public const nint m_bLimitOnly = 0x98;
}

public static class CParamSpanUpdater {
    public const nint m_spans = 0x0;
}

public static class CParticleAnimTag {
    public const nint m_hParticleSystem = 0x38;
    public const nint m_particleSystemName = 0x40;
    public const nint m_configName = 0x48;
    public const nint m_bDetachFromOwner = 0x50;
    public const nint m_bStopWhenTagEnds = 0x51;
    public const nint m_bTagEndStopIsInstant = 0x52;
    public const nint m_attachmentName = 0x58;
    public const nint m_attachmentType = 0x60;
    public const nint m_attachmentCP1Name = 0x68;
    public const nint m_attachmentCP1Type = 0x70;
}

public static class CPathAnimMotorUpdaterBase {
    public const nint m_bLockToPath = 0x20;
}

public static class CPathHelperUpdateNode {
    public const nint m_flStoppingRadius = 0x68;
    public const nint m_flStoppingSpeedScale = 0x6C;
}

public static class CPathMetricEvaluator {
    public const nint m_pathTimeSamples = 0x50;
    public const nint m_flDistance = 0x68;
    public const nint m_bExtrapolateMovement = 0x6C;
    public const nint m_flMinExtrapolationSpeed = 0x70;
}

public static class CPhysSurfaceProperties {
    public const nint m_name = 0x0;
    public const nint m_nameHash = 0x8;
    public const nint m_baseNameHash = 0xC;
    public const nint m_bHidden = 0x18;
    public const nint m_description = 0x20;
    public const nint m_physics = 0x28;
    public const nint m_audioSounds = 0x48;
    public const nint m_audioParams = 0x88;
}

public static class CPhysSurfacePropertiesAudio {
    public const nint m_reflectivity = 0x0;
    public const nint m_hardnessFactor = 0x4;
    public const nint m_roughnessFactor = 0x8;
    public const nint m_roughThreshold = 0xC;
    public const nint m_hardThreshold = 0x10;
    public const nint m_hardVelocityThreshold = 0x14;
    public const nint m_flStaticImpactVolume = 0x18;
    public const nint m_flOcclusionFactor = 0x1C;
}

public static class CPhysSurfacePropertiesPhysics {
    public const nint m_friction = 0x0;
    public const nint m_elasticity = 0x4;
    public const nint m_density = 0x8;
    public const nint m_thickness = 0xC;
    public const nint m_softContactFrequency = 0x10;
    public const nint m_softContactDampingRatio = 0x14;
    public const nint m_wheelDrag = 0x18;
}

public static class CPhysSurfacePropertiesSoundNames {
    public const nint m_impactSoft = 0x0;
    public const nint m_impactHard = 0x8;
    public const nint m_scrapeSmooth = 0x10;
    public const nint m_scrapeRough = 0x18;
    public const nint m_bulletImpact = 0x20;
    public const nint m_rolling = 0x28;
    public const nint m_break = 0x30;
    public const nint m_strain = 0x38;
}

public static class CPlayerInputAnimMotorUpdater {
    public const nint m_sampleTimes = 0x20;
    public const nint m_flSpringConstant = 0x3C;
    public const nint m_flAnticipationDistance = 0x40;
    public const nint m_hAnticipationPosParam = 0x44;
    public const nint m_hAnticipationHeadingParam = 0x46;
    public const nint m_bUseAcceleration = 0x48;
}

public static class CPoseHandle {
    public const nint m_nIndex = 0x0;
    public const nint m_eType = 0x2;
}

public static class CProductQuantizer {
    public const nint m_subQuantizers = 0x0;
    public const nint m_nDimensions = 0x18;
}

public static class CQuaternionAnimParameter {
    public const nint m_defaultValue = 0x60;
    public const nint m_bInterpolate = 0x70;
}

public static class CRagdollAnimTag {
    public const nint m_nPoseControl = 0x38;
    public const nint m_flFrequency = 0x3C;
    public const nint m_flDampingRatio = 0x40;
    public const nint m_flDecayDuration = 0x44;
    public const nint m_flDecayBias = 0x48;
    public const nint m_bDestroy = 0x4C;
}

public static class CRagdollComponentUpdater {
    public const nint m_ragdollNodePaths = 0x30;
    public const nint m_boneIndices = 0x48;
    public const nint m_boneNames = 0x60;
    public const nint m_weightLists = 0x78;
    public const nint m_flSpringFrequencyMin = 0x90;
    public const nint m_flSpringFrequencyMax = 0x94;
    public const nint m_flMaxStretch = 0x98;
}

public static class CRagdollUpdateNode {
    public const nint m_nWeightListIndex = 0x68;
    public const nint m_poseControlMethod = 0x6C;
}

public static class CRenderBufferBinding {
    public const nint m_hBuffer = 0x0;
    public const nint m_nBindOffsetBytes = 0x10;
}

public static class CRenderMesh {
    public const nint m_sceneObjects = 0x10;
    public const nint m_constraints = 0xA0;
    public const nint m_skeleton = 0xB8;
}

public static class CRenderSkeleton {
    public const nint m_bones = 0x0;
    public const nint m_boneParents = 0x30;
    public const nint m_nBoneWeightCount = 0x48;
}

public static class CSceneObjectData {
    public const nint m_vMinBounds = 0x0;
    public const nint m_vMaxBounds = 0xC;
    public const nint m_drawCalls = 0x18;
    public const nint m_drawBounds = 0x30;
    public const nint m_meshlets = 0x48;
    public const nint m_vTintColor = 0x60;
}

public static class CSelectorUpdateNode {
    public const nint m_children = 0x58;
    public const nint m_tags = 0x70;
    public const nint m_blendCurve = 0x8C;
    public const nint m_flBlendTime = 0x94;
    public const nint m_hParameter = 0x9C;
    public const nint m_eTagBehavior = 0xA0;
    public const nint m_bResetOnChange = 0xA4;
    public const nint m_bSyncCyclesOnChange = 0xA5;
}

public static class CSeqAutoLayer {
    public const nint m_nLocalReference = 0x0;
    public const nint m_nLocalPose = 0x2;
    public const nint m_flags = 0x4;
    public const nint m_start = 0xC;
    public const nint m_peak = 0x10;
    public const nint m_tail = 0x14;
    public const nint m_end = 0x18;
}

public static class CSeqAutoLayerFlag {
    public const nint m_bPost = 0x0;
    public const nint m_bSpline = 0x1;
    public const nint m_bXFade = 0x2;
    public const nint m_bNoBlend = 0x3;
    public const nint m_bLocal = 0x4;
    public const nint m_bPose = 0x5;
    public const nint m_bFetchFrame = 0x6;
    public const nint m_bSubtract = 0x7;
}

public static class CSeqBoneMaskList {
    public const nint m_sName = 0x0;
    public const nint m_nLocalBoneArray = 0x10;
    public const nint m_flBoneWeightArray = 0x28;
    public const nint m_flDefaultMorphCtrlWeight = 0x40;
    public const nint m_morphCtrlWeightArray = 0x48;
}

public static class CSeqCmdLayer {
    public const nint m_cmd = 0x0;
    public const nint m_nLocalReference = 0x2;
    public const nint m_nLocalBonemask = 0x4;
    public const nint m_nDstResult = 0x6;
    public const nint m_nSrcResult = 0x8;
    public const nint m_bSpline = 0xA;
    public const nint m_flVar1 = 0xC;
    public const nint m_flVar2 = 0x10;
    public const nint m_nLineNumber = 0x14;
}

public static class CSeqCmdSeqDesc {
    public const nint m_sName = 0x0;
    public const nint m_flags = 0x10;
    public const nint m_transition = 0x1C;
    public const nint m_nFrameRangeSequence = 0x24;
    public const nint m_nFrameCount = 0x26;
    public const nint m_flFPS = 0x28;
    public const nint m_nSubCycles = 0x2C;
    public const nint m_numLocalResults = 0x2E;
    public const nint m_cmdLayerArray = 0x30;
    public const nint m_eventArray = 0x48;
    public const nint m_activityArray = 0x60;
    public const nint m_poseSettingArray = 0x78;
}

public static class CSeqIKLock {
    public const nint m_flPosWeight = 0x0;
    public const nint m_flAngleWeight = 0x4;
    public const nint m_nLocalBone = 0x8;
    public const nint m_bBonesOrientedAlongPositiveX = 0xA;
}

public static class CSeqMultiFetch {
    public const nint m_flags = 0x0;
    public const nint m_localReferenceArray = 0x8;
    public const nint m_nGroupSize = 0x20;
    public const nint m_nLocalPose = 0x28;
    public const nint m_poseKeyArray0 = 0x30;
    public const nint m_poseKeyArray1 = 0x48;
    public const nint m_nLocalCyclePoseParameter = 0x60;
    public const nint m_bCalculatePoseParameters = 0x64;
}

public static class CSeqMultiFetchFlag {
    public const nint m_bRealtime = 0x0;
    public const nint m_bCylepose = 0x1;
    public const nint m_b0D = 0x2;
    public const nint m_b1D = 0x3;
    public const nint m_b2D = 0x4;
    public const nint m_b2D_TRI = 0x5;
}

public static class CSeqPoseParamDesc {
    public const nint m_sName = 0x0;
    public const nint m_flStart = 0x10;
    public const nint m_flEnd = 0x14;
    public const nint m_flLoop = 0x18;
    public const nint m_bLooping = 0x1C;
}

public static class CSeqPoseSetting {
    public const nint m_sPoseParameter = 0x0;
    public const nint m_sAttachment = 0x10;
    public const nint m_sReferenceSequence = 0x20;
    public const nint m_flValue = 0x30;
    public const nint m_bX = 0x34;
    public const nint m_bY = 0x35;
    public const nint m_bZ = 0x36;
    public const nint m_eType = 0x38;
}

public static class CSeqS1SeqDesc {
    public const nint m_sName = 0x0;
    public const nint m_flags = 0x10;
    public const nint m_fetch = 0x20;
    public const nint m_nLocalWeightlist = 0x88;
    public const nint m_autoLayerArray = 0x90;
    public const nint m_IKLockArray = 0xA8;
    public const nint m_transition = 0xC0;
    public const nint m_SequenceKeys = 0xC8;
    public const nint m_LegacyKeyValueText = 0xD8;
    public const nint m_activityArray = 0xE8;
    public const nint m_footMotion = 0x100;
}

public static class CSeqScaleSet {
    public const nint m_sName = 0x0;
    public const nint m_bRootOffset = 0x10;
    public const nint m_vRootOffset = 0x14;
    public const nint m_nLocalBoneArray = 0x20;
    public const nint m_flBoneScaleArray = 0x38;
}

public static class CSeqSeqDescFlag {
    public const nint m_bLooping = 0x0;
    public const nint m_bSnap = 0x1;
    public const nint m_bAutoplay = 0x2;
    public const nint m_bPost = 0x3;
    public const nint m_bHidden = 0x4;
    public const nint m_bMulti = 0x5;
    public const nint m_bLegacyDelta = 0x6;
    public const nint m_bLegacyWorldspace = 0x7;
    public const nint m_bLegacyCyclepose = 0x8;
    public const nint m_bLegacyRealtime = 0x9;
    public const nint m_bModelDoc = 0xA;
}

public static class CSeqSynthAnimDesc {
    public const nint m_sName = 0x0;
    public const nint m_flags = 0x10;
    public const nint m_transition = 0x1C;
    public const nint m_nLocalBaseReference = 0x24;
    public const nint m_nLocalBoneMask = 0x26;
    public const nint m_activityArray = 0x28;
}

public static class CSeqTransition {
    public const nint m_flFadeInTime = 0x0;
    public const nint m_flFadeOutTime = 0x4;
}

public static class CSequenceFinishedAnimTag {
    public const nint m_sequenceName = 0x38;
}

public static class CSequenceGroupData {
    public const nint m_sName = 0x10;
    public const nint m_nFlags = 0x20;
    public const nint m_localSequenceNameArray = 0x28;
    public const nint m_localS1SeqDescArray = 0x40;
    public const nint m_localMultiSeqDescArray = 0x58;
    public const nint m_localSynthAnimDescArray = 0x70;
    public const nint m_localCmdSeqDescArray = 0x88;
    public const nint m_localBoneMaskArray = 0xA0;
    public const nint m_localScaleSetArray = 0xB8;
    public const nint m_localBoneNameArray = 0xD0;
    public const nint m_localNodeName = 0xE8;
    public const nint m_localPoseParamArray = 0xF8;
    public const nint m_keyValues = 0x110;
    public const nint m_localIKAutoplayLockArray = 0x120;
}

public static class CSequenceUpdateNode {
    public const nint m_paramSpans = 0x60;
    public const nint m_tags = 0x78;
    public const nint m_hSequence = 0x94;
    public const nint m_playbackSpeed = 0x98;
    public const nint m_duration = 0x9C;
    public const nint m_bLoop = 0xA0;
}

public static class CSetFacingUpdateNode {
    public const nint m_facingMode = 0x68;
    public const nint m_bResetChild = 0x6C;
}

public static class CSetParameterActionUpdater {
    public const nint m_hParam = 0x18;
    public const nint m_value = 0x1A;
}

public static class CSingleFrameUpdateNode {
    public const nint m_actions = 0x58;
    public const nint m_hPoseCacheHandle = 0x70;
    public const nint m_hSequence = 0x74;
    public const nint m_flCycle = 0x78;
}

public static class CSkeletalInputUpdateNode {
    public const nint m_fixedOpData = 0x58;
}

public static class CSlopeComponentUpdater {
    public const nint m_flTraceDistance = 0x34;
    public const nint m_hSlopeAngle = 0x38;
    public const nint m_hSlopeAngleFront = 0x3A;
    public const nint m_hSlopeAngleSide = 0x3C;
    public const nint m_hSlopeHeading = 0x3E;
    public const nint m_hSlopeNormal = 0x40;
    public const nint m_hSlopeNormal_WorldSpace = 0x42;
}

public static class CSlowDownOnSlopesUpdateNode {
    public const nint m_flSlowDownStrength = 0x68;
}

public static class CSolveIKChainUpdateNode {
    public const nint m_targetHandles = 0x68;
    public const nint m_opFixedData = 0x80;
}

public static class CSolveIKTargetHandle_t {
    public const nint m_positionHandle = 0x0;
    public const nint m_orientationHandle = 0x2;
}

public static class CSpeedScaleUpdateNode {
    public const nint m_paramIndex = 0x68;
}

public static class CStanceOverrideUpdateNode {
    public const nint m_footStanceInfo = 0x68;
    public const nint m_pStanceSourceNode = 0x80;
    public const nint m_hParameter = 0x90;
    public const nint m_eMode = 0x94;
}

public static class CStanceScaleUpdateNode {
    public const nint m_hParam = 0x68;
}

public static class CStateActionUpdater {
    public const nint m_pAction = 0x0;
    public const nint m_eBehavior = 0x8;
}

public static class CStateMachineComponentUpdater {
    public const nint m_stateMachine = 0x30;
}

public static class CStateMachineUpdateNode {
    public const nint m_stateMachine = 0x68;
    public const nint m_stateData = 0xC0;
    public const nint m_transitionData = 0xD8;
    public const nint m_bBlockWaningTags = 0xF4;
    public const nint m_bLockStateWhenWaning = 0xF5;
}

public static class CStateNodeStateData {
    public const nint m_pChild = 0x0;
    public const nint m_bExclusiveRootMotion = 0x0;
}

public static class CStateNodeTransitionData {
    public const nint m_curve = 0x0;
    public const nint m_blendDuration = 0x8;
    public const nint m_resetCycleValue = 0x10;
    public const nint m_bReset = 0x0;
    public const nint m_resetCycleOption = 0x0;
}

public static class CStateUpdateData {
    public const nint m_name = 0x0;
    public const nint m_hScript = 0x8;
    public const nint m_transitionIndices = 0x10;
    public const nint m_actions = 0x28;
    public const nint m_stateID = 0x40;
    public const nint m_bIsStartState = 0x0;
    public const nint m_bIsEndState = 0x0;
    public const nint m_bIsPassthrough = 0x0;
}

public static class CStaticPoseCache {
    public const nint m_poses = 0x10;
    public const nint m_nBoneCount = 0x28;
    public const nint m_nMorphCount = 0x2C;
}

public static class CStepsRemainingMetricEvaluator {
    public const nint m_footIndices = 0x50;
    public const nint m_flMinStepsRemaining = 0x68;
}

public static class CStopAtGoalUpdateNode {
    public const nint m_flOuterRadius = 0x6C;
    public const nint m_flInnerRadius = 0x70;
    public const nint m_flMaxScale = 0x74;
    public const nint m_flMinScale = 0x78;
    public const nint m_damping = 0x80;
}

public static class CSubtractUpdateNode {
    public const nint m_footMotionTiming = 0x8C;
    public const nint m_bApplyToFootMotion = 0x90;
    public const nint m_bApplyChannelsSeparately = 0x91;
    public const nint m_bUseModelSpace = 0x92;
}

public static class CTiltTwistConstraint {
    public const nint m_nTargetAxis = 0x70;
    public const nint m_nSlaveAxis = 0x74;
}

public static class CTimeRemainingMetricEvaluator {
    public const nint m_bMatchByTimeRemaining = 0x50;
    public const nint m_flMaxTimeRemaining = 0x54;
    public const nint m_bFilterByTimeRemaining = 0x58;
    public const nint m_flMinTimeRemaining = 0x5C;
}

public static class CToggleComponentActionUpdater {
    public const nint m_componentID = 0x18;
    public const nint m_bSetEnabled = 0x1C;
}

public static class CTransitionUpdateData {
    public const nint m_srcStateIndex = 0x0;
    public const nint m_destStateIndex = 0x1;
    public const nint m_bDisabled = 0x0;
}

public static class CTurnHelperUpdateNode {
    public const nint m_facingTarget = 0x6C;
    public const nint m_turnStartTimeOffset = 0x70;
    public const nint m_turnDuration = 0x74;
    public const nint m_bMatchChildDuration = 0x78;
    public const nint m_manualTurnOffset = 0x7C;
    public const nint m_bUseManualTurnOffset = 0x80;
}

public static class CTwistConstraint {
    public const nint m_bInverse = 0x70;
    public const nint m_qParentBindRotation = 0x80;
    public const nint m_qChildBindRotation = 0x90;
}

public static class CTwoBoneIKUpdateNode {
    public const nint m_opFixedData = 0x70;
}

public static class CUnaryUpdateNode {
    public const nint m_pChildNode = 0x58;
}

public static class CVPhysXSurfacePropertiesList {
    public const nint m_surfacePropertiesList = 0x0;
}

public static class CVRInputComponentUpdater {
    public const nint m_FingerCurl_Thumb = 0x34;
    public const nint m_FingerCurl_Index = 0x36;
    public const nint m_FingerCurl_Middle = 0x38;
    public const nint m_FingerCurl_Ring = 0x3A;
    public const nint m_FingerCurl_Pinky = 0x3C;
    public const nint m_FingerSplay_Thumb_Index = 0x3E;
    public const nint m_FingerSplay_Index_Middle = 0x40;
    public const nint m_FingerSplay_Middle_Ring = 0x42;
    public const nint m_FingerSplay_Ring_Pinky = 0x44;
}

public static class CVectorAnimParameter {
    public const nint m_defaultValue = 0x60;
    public const nint m_bInterpolate = 0x6C;
}

public static class CVectorQuantizer {
    public const nint m_centroidVectors = 0x0;
    public const nint m_nCentroids = 0x18;
    public const nint m_nDimensions = 0x1C;
}

public static class CVirtualAnimParameter {
    public const nint m_expressionString = 0x50;
    public const nint m_eParamType = 0x58;
}

public static class CVrSkeletalInputSettings {
    public const nint m_wristBones = 0x0;
    public const nint m_fingers = 0x18;
    public const nint m_name = 0x30;
    public const nint m_outerKnuckle1 = 0x38;
    public const nint m_outerKnuckle2 = 0x40;
    public const nint m_eHand = 0x48;
}

public static class CWayPointHelperUpdateNode {
    public const nint m_flStartCycle = 0x6C;
    public const nint m_flEndCycle = 0x70;
    public const nint m_bOnlyGoals = 0x74;
    public const nint m_bPreventOvershoot = 0x75;
    public const nint m_bPreventUndershoot = 0x76;
}

public static class CWristBone {
    public const nint m_name = 0x0;
    public const nint m_vForwardLS = 0x8;
    public const nint m_vUpLS = 0x14;
    public const nint m_vOffset = 0x20;
}

public static class ChainToSolveData_t {
    public const nint m_nChainIndex = 0x0;
    public const nint m_SolverSettings = 0x4;
    public const nint m_TargetSettings = 0x10;
    public const nint m_DebugSetting = 0x38;
    public const nint m_flDebugNormalizedValue = 0x3C;
    public const nint m_vDebugOffset = 0x40;
}

public static class ConfigIndex {
    public const nint m_nGroup = 0x0;
    public const nint m_nConfig = 0x2;
}

public static class FingerBone_t {
    public const nint m_boneIndex = 0x0;
    public const nint m_hingeAxis = 0x4;
    public const nint m_vCapsulePos1 = 0x10;
    public const nint m_vCapsulePos2 = 0x1C;
    public const nint m_flMinAngle = 0x28;
    public const nint m_flMaxAngle = 0x2C;
    public const nint m_flRadius = 0x30;
}

public static class FingerChain_t {
    public const nint m_targets = 0x0;
    public const nint m_bones = 0x18;
    public const nint m_vTipOffset = 0x30;
    public const nint m_vSplayHingeAxis = 0x3C;
    public const nint m_tipParentBoneIndex = 0x48;
    public const nint m_metacarpalBoneIndex = 0x4C;
    public const nint m_flSplayMinAngle = 0x50;
    public const nint m_flSplayMaxAngle = 0x54;
    public const nint m_flFingerScaleRatio = 0x58;
}

public static class FingerSource_t {
    public const nint m_nFingerIndex = 0x0;
    public const nint m_flFingerWeight = 0x4;
}

public static class FollowAttachmentSettings_t {
    public const nint m_attachment = 0x0;
    public const nint m_boneIndex = 0x80;
    public const nint m_bMatchTranslation = 0x84;
    public const nint m_bMatchRotation = 0x85;
}

public static class FootFixedData_t {
    public const nint m_vToeOffset = 0x0;
    public const nint m_vHeelOffset = 0x10;
    public const nint m_nTargetBoneIndex = 0x20;
    public const nint m_nAnkleBoneIndex = 0x24;
    public const nint m_nIKAnchorBoneIndex = 0x28;
    public const nint m_ikChainIndex = 0x2C;
    public const nint m_flMaxIKLength = 0x30;
    public const nint m_nFootIndex = 0x34;
    public const nint m_nTagIndex = 0x38;
    public const nint m_flMaxRotationLeft = 0x3C;
    public const nint m_flMaxRotationRight = 0x40;
}

public static class FootFixedSettings {
    public const nint m_traceSettings = 0x0;
    public const nint m_vFootBaseBindPosePositionMS = 0x10;
    public const nint m_flFootBaseLength = 0x20;
    public const nint m_flMaxRotationLeft = 0x24;
    public const nint m_flMaxRotationRight = 0x28;
    public const nint m_footstepLandedTagIndex = 0x2C;
    public const nint m_bEnableTracing = 0x30;
    public const nint m_flTraceAngleBlend = 0x34;
    public const nint m_nDisableTagIndex = 0x38;
    public const nint m_nFootIndex = 0x3C;
}

public static class FootLockPoseOpFixedSettings {
    public const nint m_footInfo = 0x0;
    public const nint m_hipDampingSettings = 0x18;
    public const nint m_nHipBoneIndex = 0x28;
    public const nint m_ikSolverType = 0x2C;
    public const nint m_bApplyTilt = 0x30;
    public const nint m_bApplyHipDrop = 0x31;
    public const nint m_bAlwaysUseFallbackHinge = 0x32;
    public const nint m_bApplyFootRotationLimits = 0x33;
    public const nint m_bApplyLegTwistLimits = 0x34;
    public const nint m_flMaxFootHeight = 0x38;
    public const nint m_flExtensionScale = 0x3C;
    public const nint m_flMaxLegTwist = 0x40;
    public const nint m_bEnableLockBreaking = 0x44;
    public const nint m_flLockBreakTolerance = 0x48;
    public const nint m_flLockBlendTime = 0x4C;
    public const nint m_bEnableStretching = 0x50;
    public const nint m_flMaxStretchAmount = 0x54;
    public const nint m_flStretchExtensionScale = 0x58;
}

public static class FootPinningPoseOpFixedData_t {
    public const nint m_footInfo = 0x0;
    public const nint m_flBlendTime = 0x18;
    public const nint m_flLockBreakDistance = 0x1C;
    public const nint m_flMaxLegTwist = 0x20;
    public const nint m_nHipBoneIndex = 0x24;
    public const nint m_bApplyLegTwistLimits = 0x28;
    public const nint m_bApplyFootRotationLimits = 0x29;
}

public static class FootStepTrigger {
    public const nint m_tags = 0x0;
    public const nint m_nFootIndex = 0x18;
    public const nint m_triggerPhase = 0x1C;
}

public static class HSequence {
    public const nint m_Value = 0x0;
}

public static class HitReactFixedSettings_t {
    public const nint m_nWeightListIndex = 0x0;
    public const nint m_nEffectedBoneCount = 0x4;
    public const nint m_flMaxImpactForce = 0x8;
    public const nint m_flMinImpactForce = 0xC;
    public const nint m_flWhipImpactScale = 0x10;
    public const nint m_flCounterRotationScale = 0x14;
    public const nint m_flDistanceFadeScale = 0x18;
    public const nint m_flPropagationScale = 0x1C;
    public const nint m_flWhipDelay = 0x20;
    public const nint m_flSpringStrength = 0x24;
    public const nint m_flWhipSpringStrength = 0x28;
    public const nint m_flMaxAngleRadians = 0x2C;
    public const nint m_nHipBoneIndex = 0x30;
    public const nint m_flHipBoneTranslationScale = 0x34;
    public const nint m_flHipDipSpringStrength = 0x38;
    public const nint m_flHipDipImpactScale = 0x3C;
    public const nint m_flHipDipDelay = 0x40;
}

public static class IKBoneNameAndIndex_t {
    public const nint m_Name = 0x0;
}

public static class IKDemoCaptureSettings_t {
    public const nint m_parentBoneName = 0x0;
    public const nint m_eMode = 0x8;
    public const nint m_ikChainName = 0x10;
    public const nint m_oneBoneStart = 0x18;
    public const nint m_oneBoneEnd = 0x20;
}

public static class IKSolverSettings_t {
    public const nint m_SolverType = 0x0;
    public const nint m_nNumIterations = 0x4;
}

public static class IKTargetSettings_t {
    public const nint m_TargetSource = 0x0;
    public const nint m_Bone = 0x8;
    public const nint m_AnimgraphParameterNamePosition = 0x18;
    public const nint m_AnimgraphParameterNameOrientation = 0x1C;
    public const nint m_TargetCoordSystem = 0x20;
}

public static class JiggleBoneSettingsList_t {
    public const nint m_boneSettings = 0x0;
}

public static class JiggleBoneSettings_t {
    public const nint m_nBoneIndex = 0x0;
    public const nint m_flSpringStrength = 0x4;
    public const nint m_flMaxTimeStep = 0x8;
    public const nint m_flDamping = 0xC;
    public const nint m_vBoundsMaxLS = 0x10;
    public const nint m_vBoundsMinLS = 0x1C;
    public const nint m_eSimSpace = 0x28;
}

public static class LookAtBone_t {
    public const nint m_index = 0x0;
    public const nint m_weight = 0x4;
}

public static class LookAtOpFixedSettings_t {
    public const nint m_attachment = 0x0;
    public const nint m_damping = 0x80;
    public const nint m_bones = 0x90;
    public const nint m_flYawLimit = 0xA8;
    public const nint m_flPitchLimit = 0xAC;
    public const nint m_flHysteresisInnerAngle = 0xB0;
    public const nint m_flHysteresisOuterAngle = 0xB4;
    public const nint m_bRotateYawForward = 0xB8;
    public const nint m_bMaintainUpDirection = 0xB9;
    public const nint m_bTargetIsPosition = 0xBA;
    public const nint m_bUseHysteresis = 0xBB;
}

public static class MaterialGroup_t {
    public const nint m_name = 0x0;
    public const nint m_materials = 0x8;
}

public static class ModelBoneFlexDriverControl_t {
    public const nint m_nBoneComponent = 0x0;
    public const nint m_flexController = 0x8;
    public const nint m_flexControllerToken = 0x10;
    public const nint m_flMin = 0x14;
    public const nint m_flMax = 0x18;
}

public static class ModelBoneFlexDriver_t {
    public const nint m_boneName = 0x0;
    public const nint m_boneNameToken = 0x8;
    public const nint m_controls = 0x10;
}

public static class ModelSkeletonData_t {
    public const nint m_boneName = 0x0;
    public const nint m_nParent = 0x18;
    public const nint m_boneSphere = 0x30;
    public const nint m_nFlag = 0x48;
    public const nint m_bonePosParent = 0x60;
    public const nint m_boneRotParent = 0x78;
    public const nint m_boneScaleParent = 0x90;
}

public static class MoodAnimationLayer_t {
    public const nint m_sName = 0x0;
    public const nint m_bActiveListening = 0x8;
    public const nint m_bActiveTalking = 0x9;
    public const nint m_layerAnimations = 0x10;
    public const nint m_flIntensity = 0x28;
    public const nint m_flDurationScale = 0x30;
    public const nint m_bScaleWithInts = 0x38;
    public const nint m_flNextStart = 0x3C;
    public const nint m_flStartOffset = 0x44;
    public const nint m_flEndOffset = 0x4C;
    public const nint m_flFadeIn = 0x54;
    public const nint m_flFadeOut = 0x58;
}

public static class MoodAnimation_t {
    public const nint m_sName = 0x0;
    public const nint m_flWeight = 0x8;
}

public static class MotionBlendItem {
    public const nint m_pChild = 0x0;
    public const nint m_flKeyValue = 0x8;
}

public static class MotionDBIndex {
    public const nint m_nIndex = 0x0;
}

public static class MotionIndex {
    public const nint m_nGroup = 0x0;
    public const nint m_nMotion = 0x2;
}

public static class ParamSpanSample_t {
    public const nint m_value = 0x0;
    public const nint m_flCycle = 0x14;
}

public static class ParamSpan_t {
    public const nint m_samples = 0x0;
    public const nint m_hParam = 0x18;
    public const nint m_eParamType = 0x1A;
    public const nint m_flStartCycle = 0x1C;
    public const nint m_flEndCycle = 0x20;
}

public static class PermModelDataAnimatedMaterialAttribute_t {
    public const nint m_AttributeName = 0x0;
    public const nint m_nNumChannels = 0x8;
}

public static class PermModelData_t {
    public const nint m_name = 0x0;
    public const nint m_modelInfo = 0x8;
    public const nint m_ExtParts = 0x60;
    public const nint m_refMeshes = 0x78;
    public const nint m_refMeshGroupMasks = 0x90;
    public const nint m_refPhysGroupMasks = 0xA8;
    public const nint m_refLODGroupMasks = 0xC0;
    public const nint m_lodGroupSwitchDistances = 0xD8;
    public const nint m_refPhysicsData = 0xF0;
    public const nint m_refPhysicsHitboxData = 0x108;
    public const nint m_refAnimGroups = 0x120;
    public const nint m_refSequenceGroups = 0x138;
    public const nint m_meshGroups = 0x150;
    public const nint m_materialGroups = 0x168;
    public const nint m_nDefaultMeshGroupMask = 0x180;
    public const nint m_modelSkeleton = 0x188;
    public const nint m_remappingTable = 0x230;
    public const nint m_remappingTableStarts = 0x248;
    public const nint m_boneFlexDrivers = 0x260;
    public const nint m_pModelConfigList = 0x278;
    public const nint m_BodyGroupsHiddenInTools = 0x280;
    public const nint m_refAnimIncludeModels = 0x298;
    public const nint m_AnimatedMaterialAttributes = 0x2B0;
}

public static class PermModelExtPart_t {
    public const nint m_Transform = 0x0;
    public const nint m_Name = 0x20;
    public const nint m_nParent = 0x28;
    public const nint m_refModel = 0x30;
}

public static class PermModelInfo_t {
    public const nint m_nFlags = 0x0;
    public const nint m_vHullMin = 0x4;
    public const nint m_vHullMax = 0x10;
    public const nint m_vViewMin = 0x1C;
    public const nint m_vViewMax = 0x28;
    public const nint m_flMass = 0x34;
    public const nint m_vEyePosition = 0x38;
    public const nint m_flMaxEyeDeflection = 0x44;
    public const nint m_sSurfaceProperty = 0x48;
    public const nint m_keyValueText = 0x50;
}

public static class PhysSoftbodyDesc_t {
    public const nint m_ParticleBoneHash = 0x0;
    public const nint m_Particles = 0x18;
    public const nint m_Springs = 0x30;
    public const nint m_Capsules = 0x48;
    public const nint m_InitPose = 0x60;
    public const nint m_ParticleBoneName = 0x78;
}

public static class RenderSkeletonBone_t {
    public const nint m_boneName = 0x0;
    public const nint m_parentName = 0x8;
    public const nint m_invBindPose = 0x10;
    public const nint m_bbox = 0x40;
    public const nint m_flSphereRadius = 0x58;
}

public static class SampleCode {
    public const nint m_subCode = 0x0;
}

public static class ScriptInfo_t {
    public const nint m_code = 0x0;
    public const nint m_paramsModified = 0x8;
    public const nint m_proxyReadParams = 0x20;
    public const nint m_proxyWriteParams = 0x38;
    public const nint m_eScriptType = 0x50;
}

public static class SkeletalInputOpFixedSettings_t {
    public const nint m_wristBones = 0x0;
    public const nint m_fingers = 0x18;
    public const nint m_outerKnuckle1 = 0x30;
    public const nint m_outerKnuckle2 = 0x34;
    public const nint m_eHand = 0x38;
    public const nint m_eMotionRange = 0x3C;
    public const nint m_eTransformSource = 0x40;
    public const nint m_bEnableIK = 0x44;
    public const nint m_bEnableCollision = 0x45;
}

public static class SkeletonBoneBounds_t {
    public const nint m_vecCenter = 0x0;
    public const nint m_vecSize = 0xC;
}

public static class SolveIKChainPoseOpFixedSettings_t {
    public const nint m_ChainsToSolveData = 0x0;
    public const nint m_bMatchTargetOrientation = 0x18;
}

public static class StanceInfo_t {
    public const nint m_vPosition = 0x0;
    public const nint m_flDirection = 0xC;
}

public static class TagSpan_t {
    public const nint m_tagIndex = 0x0;
    public const nint m_startCycle = 0x4;
    public const nint m_endCycle = 0x8;
}

public static class TraceSettings_t {
    public const nint m_flTraceHeight = 0x0;
    public const nint m_flTraceRadius = 0x4;
}

public static class TwoBoneIKSettings_t {
    public const nint m_endEffectorType = 0x0;
    public const nint m_endEffectorAttachment = 0x10;
    public const nint m_targetType = 0x90;
    public const nint m_targetAttachment = 0xA0;
    public const nint m_targetBoneIndex = 0x120;
    public const nint m_hPositionParam = 0x124;
    public const nint m_hRotationParam = 0x126;
    public const nint m_bAlwaysUseFallbackHinge = 0x128;
    public const nint m_vLsFallbackHingeAxis = 0x130;
    public const nint m_nFixedBoneIndex = 0x140;
    public const nint m_nMiddleBoneIndex = 0x144;
    public const nint m_nEndBoneIndex = 0x148;
    public const nint m_bMatchTargetOrientation = 0x14C;
    public const nint m_bConstrainTwist = 0x14D;
    public const nint m_flMaxTwist = 0x150;
}

public static class VPhysXAggregateData_t {
    public const nint m_nFlags = 0x0;
    public const nint m_nRefCounter = 0x2;
    public const nint m_bonesHash = 0x8;
    public const nint m_boneNames = 0x20;
    public const nint m_indexNames = 0x38;
    public const nint m_indexHash = 0x50;
    public const nint m_bindPose = 0x68;
    public const nint m_parts = 0x80;
    public const nint m_constraints2 = 0x98;
    public const nint m_joints = 0xB0;
    public const nint m_pFeModel = 0xC8;
    public const nint m_boneParents = 0xD0;
    public const nint m_surfacePropertyHashes = 0xE8;
    public const nint m_collisionAttributes = 0x100;
    public const nint m_debugPartNames = 0x118;
    public const nint m_embeddedKeyvalues = 0x130;
}

public static class VPhysXBodyPart_t {
    public const nint m_nFlags = 0x0;
    public const nint m_flMass = 0x4;
    public const nint m_rnShape = 0x8;
    public const nint m_nCollisionAttributeIndex = 0x80;
    public const nint m_nReserved = 0x82;
    public const nint m_flInertiaScale = 0x84;
    public const nint m_flLinearDamping = 0x88;
    public const nint m_flAngularDamping = 0x8C;
    public const nint m_bOverrideMassCenter = 0x90;
    public const nint m_vMassCenterOverride = 0x94;
}

public static class VPhysXCollisionAttributes_t {
    public const nint m_CollisionGroup = 0x0;
    public const nint m_InteractAs = 0x8;
    public const nint m_InteractWith = 0x20;
    public const nint m_InteractExclude = 0x38;
    public const nint m_CollisionGroupString = 0x50;
    public const nint m_InteractAsStrings = 0x58;
    public const nint m_InteractWithStrings = 0x70;
    public const nint m_InteractExcludeStrings = 0x88;
}

public static class VPhysXConstraint2_t {
    public const nint m_nFlags = 0x0;
    public const nint m_nParent = 0x4;
    public const nint m_nChild = 0x6;
    public const nint m_params = 0x8;
}

public static class VPhysXConstraintParams_t {
    public const nint m_nType = 0x0;
    public const nint m_nTranslateMotion = 0x1;
    public const nint m_nRotateMotion = 0x2;
    public const nint m_nFlags = 0x3;
    public const nint m_anchor = 0x4;
    public const nint m_axes = 0x1C;
    public const nint m_maxForce = 0x3C;
    public const nint m_maxTorque = 0x40;
    public const nint m_linearLimitValue = 0x44;
    public const nint m_linearLimitRestitution = 0x48;
    public const nint m_linearLimitSpring = 0x4C;
    public const nint m_linearLimitDamping = 0x50;
    public const nint m_twistLowLimitValue = 0x54;
    public const nint m_twistLowLimitRestitution = 0x58;
    public const nint m_twistLowLimitSpring = 0x5C;
    public const nint m_twistLowLimitDamping = 0x60;
    public const nint m_twistHighLimitValue = 0x64;
    public const nint m_twistHighLimitRestitution = 0x68;
    public const nint m_twistHighLimitSpring = 0x6C;
    public const nint m_twistHighLimitDamping = 0x70;
    public const nint m_swing1LimitValue = 0x74;
    public const nint m_swing1LimitRestitution = 0x78;
    public const nint m_swing1LimitSpring = 0x7C;
    public const nint m_swing1LimitDamping = 0x80;
    public const nint m_swing2LimitValue = 0x84;
    public const nint m_swing2LimitRestitution = 0x88;
    public const nint m_swing2LimitSpring = 0x8C;
    public const nint m_swing2LimitDamping = 0x90;
    public const nint m_goalPosition = 0x94;
    public const nint m_goalOrientation = 0xA0;
    public const nint m_goalAngularVelocity = 0xB0;
    public const nint m_driveSpringX = 0xBC;
    public const nint m_driveSpringY = 0xC0;
    public const nint m_driveSpringZ = 0xC4;
    public const nint m_driveDampingX = 0xC8;
    public const nint m_driveDampingY = 0xCC;
    public const nint m_driveDampingZ = 0xD0;
    public const nint m_driveSpringTwist = 0xD4;
    public const nint m_driveSpringSwing = 0xD8;
    public const nint m_driveSpringSlerp = 0xDC;
    public const nint m_driveDampingTwist = 0xE0;
    public const nint m_driveDampingSwing = 0xE4;
    public const nint m_driveDampingSlerp = 0xE8;
    public const nint m_solverIterationCount = 0xEC;
    public const nint m_projectionLinearTolerance = 0xF0;
    public const nint m_projectionAngularTolerance = 0xF4;
}

public static class VPhysXJoint_t {
    public const nint m_nType = 0x0;
    public const nint m_nBody1 = 0x2;
    public const nint m_nBody2 = 0x4;
    public const nint m_nFlags = 0x6;
    public const nint m_Frame1 = 0x10;
    public const nint m_Frame2 = 0x30;
    public const nint m_bEnableCollision = 0x50;
    public const nint m_bEnableLinearLimit = 0x51;
    public const nint m_LinearLimit = 0x54;
    public const nint m_bEnableLinearMotor = 0x5C;
    public const nint m_vLinearTargetVelocity = 0x60;
    public const nint m_flMaxForce = 0x6C;
    public const nint m_bEnableSwingLimit = 0x70;
    public const nint m_SwingLimit = 0x74;
    public const nint m_bEnableTwistLimit = 0x7C;
    public const nint m_TwistLimit = 0x80;
    public const nint m_bEnableAngularMotor = 0x88;
    public const nint m_vAngularTargetVelocity = 0x8C;
    public const nint m_flMaxTorque = 0x98;
    public const nint m_flLinearFrequency = 0x9C;
    public const nint m_flLinearDampingRatio = 0xA0;
    public const nint m_flAngularFrequency = 0xA4;
    public const nint m_flAngularDampingRatio = 0xA8;
    public const nint m_flFriction = 0xAC;
}

public static class VPhysXRange_t {
    public const nint m_flMin = 0x0;
    public const nint m_flMax = 0x4;
}

public static class VPhysics2ShapeDef_t {
    public const nint m_spheres = 0x0;
    public const nint m_capsules = 0x18;
    public const nint m_hulls = 0x30;
    public const nint m_meshes = 0x48;
    public const nint m_CollisionAttributeIndices = 0x60;
}

public static class WeightList {
    public const nint m_name = 0x0;
    public const nint m_weights = 0x8;
}

public static class WristBone_t {
    public const nint m_xOffsetTransformMS = 0x0;
    public const nint m_boneIndex = 0x20;
}