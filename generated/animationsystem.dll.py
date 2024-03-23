'''
Generated using https://github.com/a2x/cs2-dumper
Sat, 23 Mar 2024 05:02:03 +0000
'''

class AimMatrixOpFixedSettings_t:
    m_attachment = 0x0 # CAnimAttachment
    m_damping = 0x80 # CAnimInputDamping
    m_poseCacheHandles = 0x90 # CPoseHandle[10]
    m_eBlendMode = 0xB8 # AimMatrixBlendMode
    m_fAngleIncrement = 0xBC # float
    m_nSequenceMaxFrame = 0xC0 # int32_t
    m_nBoneMaskIndex = 0xC4 # int32_t
    m_bTargetIsPosition = 0xC8 # bool

class AnimComponentID:
    m_id = 0x0 # uint32_t

class AnimNodeID:
    m_id = 0x0 # uint32_t

class AnimNodeOutputID:
    m_id = 0x0 # uint32_t

class AnimParamID:
    m_id = 0x0 # uint32_t

class AnimScriptHandle:
    m_id = 0x0 # uint32_t

class AnimStateID:
    m_id = 0x0 # uint32_t

class AnimTagID:
    m_id = 0x0 # uint32_t

class AnimationDecodeDebugDumpElement_t:
    m_nEntityIndex = 0x0 # int32_t
    m_modelName = 0x8 # CUtlString
    m_poseParams = 0x10 # CUtlVector<CUtlString>
    m_decodeOps = 0x28 # CUtlVector<CUtlString>
    m_internalOps = 0x40 # CUtlVector<CUtlString>
    m_decodedAnims = 0x58 # CUtlVector<CUtlString>

class AnimationDecodeDebugDump_t:
    m_processingType = 0x0 # AnimationProcessingType_t
    m_elems = 0x8 # CUtlVector<AnimationDecodeDebugDumpElement_t>

class AnimationSnapshotBase_t:
    m_flRealTime = 0x0 # float
    m_rootToWorld = 0x10 # matrix3x4a_t
    m_bBonesInWorldSpace = 0x40 # bool
    m_boneSetupMask = 0x48 # CUtlVector<uint32_t>
    m_boneTransforms = 0x60 # CUtlVector<matrix3x4a_t>
    m_flexControllers = 0x78 # CUtlVector<float>
    m_SnapshotType = 0x90 # AnimationSnapshotType_t
    m_bHasDecodeDump = 0x94 # bool
    m_DecodeDump = 0x98 # AnimationDecodeDebugDumpElement_t

class AnimationSnapshot_t: # AnimationSnapshotBase_t
    m_nEntIndex = 0x110 # int32_t
    m_modelName = 0x118 # CUtlString

class AttachmentHandle_t:
    m_Value = 0x0 # uint8_t

class BlendItem_t:
    m_tags = 0x0 # CUtlVector<TagSpan_t>
    m_pChild = 0x18 # CAnimUpdateNodeRef
    m_hSequence = 0x28 # HSequence
    m_vPos = 0x2C # Vector2D
    m_flDuration = 0x34 # float
    m_bUseCustomDuration = 0x38 # bool

class BoneDemoCaptureSettings_t:
    m_boneName = 0x0 # CUtlString
    m_flChainLength = 0x8 # float

class CActionComponentUpdater: # CAnimComponentUpdater
    m_actions = 0x30 # CUtlVector<CSmartPtr<CAnimActionUpdater>>

class CAddUpdateNode: # CBinaryUpdateNode
    m_footMotionTiming = 0x8C # BinaryNodeChildOption
    m_bApplyToFootMotion = 0x90 # bool
    m_bApplyChannelsSeparately = 0x91 # bool
    m_bUseModelSpace = 0x92 # bool

class CAimConstraint: # CBaseConstraint
    m_qAimOffset = 0x70 # Quaternion
    m_nUpType = 0x80 # uint32_t

class CAimMatrixUpdateNode: # CUnaryUpdateNode
    m_opFixedSettings = 0x70 # AimMatrixOpFixedSettings_t
    m_target = 0x148 # AnimVectorSource
    m_paramIndex = 0x14C # CAnimParamHandle
    m_hSequence = 0x150 # HSequence
    m_bResetChild = 0x154 # bool
    m_bLockWhenWaning = 0x155 # bool

class CAnimActionUpdater:

class CAnimActivity:
    m_name = 0x0 # CBufferString
    m_nActivity = 0x10 # int32_t
    m_nFlags = 0x14 # int32_t
    m_nWeight = 0x18 # int32_t

class CAnimAttachment:
    m_influenceRotations = 0x0 # Quaternion[3]
    m_influenceOffsets = 0x30 # VectorAligned[3]
    m_influenceIndices = 0x60 # int32_t[3]
    m_influenceWeights = 0x6C # float[3]
    m_numInfluences = 0x78 # uint8_t

class CAnimBone:
    m_name = 0x0 # CBufferString
    m_parent = 0x10 # int32_t
    m_pos = 0x14 # Vector
    m_quat = 0x20 # QuaternionStorage
    m_scale = 0x30 # float
    m_qAlignment = 0x34 # QuaternionStorage
    m_flags = 0x44 # int32_t

class CAnimBoneDifference:
    m_name = 0x0 # CBufferString
    m_parent = 0x10 # CBufferString
    m_posError = 0x20 # Vector
    m_bHasRotation = 0x2C # bool
    m_bHasMovement = 0x2D # bool

class CAnimComponentUpdater:
    m_name = 0x18 # CUtlString
    m_id = 0x20 # AnimComponentID
    m_networkMode = 0x24 # AnimNodeNetworkMode
    m_bStartEnabled = 0x28 # bool

class CAnimCycle: # CCycleBase

class CAnimData:
    m_name = 0x10 # CBufferString
    m_animArray = 0x20 # CUtlVector<CAnimDesc>
    m_decoderArray = 0x38 # CUtlVector<CAnimDecoder>
    m_nMaxUniqueFrameIndex = 0x50 # int32_t
    m_segmentArray = 0x58 # CUtlVector<CAnimFrameSegment>

class CAnimDataChannelDesc:
    m_szChannelClass = 0x0 # CBufferString
    m_szVariableName = 0x10 # CBufferString
    m_nFlags = 0x20 # int32_t
    m_nType = 0x24 # int32_t
    m_szGrouping = 0x28 # CBufferString
    m_szDescription = 0x38 # CBufferString
    m_szElementNameArray = 0x48 # CUtlVector<CBufferString>
    m_nElementIndexArray = 0x60 # CUtlVector<int32_t>
    m_nElementMaskArray = 0x78 # CUtlVector<uint32_t>

class CAnimDecoder:
    m_szName = 0x0 # CBufferString
    m_nVersion = 0x10 # int32_t
    m_nType = 0x14 # int32_t

class CAnimDemoCaptureSettings:
    m_rangeBoneChainLength = 0x0 # Vector2D
    m_rangeMaxSplineErrorRotation = 0x8 # Vector2D
    m_flMaxSplineErrorTranslation = 0x10 # float
    m_flMaxSplineErrorScale = 0x14 # float
    m_flIkRotation_MaxSplineError = 0x18 # float
    m_flIkTranslation_MaxSplineError = 0x1C # float
    m_flMaxQuantizationErrorRotation = 0x20 # float
    m_flMaxQuantizationErrorTranslation = 0x24 # float
    m_flMaxQuantizationErrorScale = 0x28 # float
    m_flIkRotation_MaxQuantizationError = 0x2C # float
    m_flIkTranslation_MaxQuantizationError = 0x30 # float
    m_baseSequence = 0x38 # CUtlString
    m_nBaseSequenceFrame = 0x40 # int32_t
    m_boneSelectionMode = 0x44 # EDemoBoneSelectionMode
    m_bones = 0x48 # CUtlVector<BoneDemoCaptureSettings_t>
    m_ikChains = 0x60 # CUtlVector<IKDemoCaptureSettings_t>

class CAnimDesc:
    m_name = 0x0 # CBufferString
    m_flags = 0x10 # CAnimDesc_Flag
    fps = 0x18 # float
    m_Data = 0x20 # CAnimEncodedFrames
    m_movementArray = 0xF8 # CUtlVector<CAnimMovement>
    m_eventArray = 0x110 # CUtlVector<CAnimEventDefinition>
    m_activityArray = 0x128 # CUtlVector<CAnimActivity>
    m_hierarchyArray = 0x140 # CUtlVector<CAnimLocalHierarchy>
    framestalltime = 0x158 # float
    m_vecRootMin = 0x15C # Vector
    m_vecRootMax = 0x168 # Vector
    m_vecBoneWorldMin = 0x178 # CUtlVector<Vector>
    m_vecBoneWorldMax = 0x190 # CUtlVector<Vector>
    m_sequenceParams = 0x1A8 # CAnimSequenceParams

class CAnimDesc_Flag:
    m_bLooping = 0x0 # bool
    m_bAllZeros = 0x1 # bool
    m_bHidden = 0x2 # bool
    m_bDelta = 0x3 # bool
    m_bLegacyWorldspace = 0x4 # bool
    m_bModelDoc = 0x5 # bool
    m_bImplicitSeqIgnoreDelta = 0x6 # bool
    m_bAnimGraphAdditive = 0x7 # bool

class CAnimEncodeDifference:
    m_boneArray = 0x0 # CUtlVector<CAnimBoneDifference>
    m_morphArray = 0x18 # CUtlVector<CAnimMorphDifference>
    m_userArray = 0x30 # CUtlVector<CAnimUserDifference>
    m_bHasRotationBitArray = 0x48 # CUtlVector<uint8_t>
    m_bHasMovementBitArray = 0x60 # CUtlVector<uint8_t>
    m_bHasMorphBitArray = 0x78 # CUtlVector<uint8_t>
    m_bHasUserBitArray = 0x90 # CUtlVector<uint8_t>

class CAnimEncodedFrames:
    m_fileName = 0x0 # CBufferString
    m_nFrames = 0x10 # int32_t
    m_nFramesPerBlock = 0x14 # int32_t
    m_frameblockArray = 0x18 # CUtlVector<CAnimFrameBlockAnim>
    m_usageDifferences = 0x30 # CAnimEncodeDifference

class CAnimEnum:
    m_value = 0x0 # uint8_t

class CAnimEventDefinition:
    m_nFrame = 0x8 # int32_t
    m_flCycle = 0xC # float
    m_EventData = 0x10 # KeyValues3
    m_sLegacyOptions = 0x20 # CBufferString
    m_sEventName = 0x30 # CGlobalSymbol

class CAnimFoot:
    m_name = 0x0 # CUtlString
    m_vBallOffset = 0x8 # Vector
    m_vHeelOffset = 0x14 # Vector
    m_ankleBoneIndex = 0x20 # int32_t
    m_toeBoneIndex = 0x24 # int32_t

class CAnimFrameBlockAnim:
    m_nStartFrame = 0x0 # int32_t
    m_nEndFrame = 0x4 # int32_t
    m_segmentIndexArray = 0x8 # CUtlVector<int32_t>

class CAnimFrameSegment:
    m_nUniqueFrameIndex = 0x0 # int32_t
    m_nLocalElementMasks = 0x4 # uint32_t
    m_nLocalChannel = 0x8 # int32_t
    m_container = 0x10 # CUtlBinaryBlock

class CAnimGraphDebugReplay:
    m_animGraphFileName = 0x40 # CUtlString
    m_frameList = 0x48 # CUtlVector<CSmartPtr<CAnimReplayFrame>>
    m_startIndex = 0x60 # int32_t
    m_writeIndex = 0x64 # int32_t
    m_frameCount = 0x68 # int32_t

class CAnimGraphModelBinding:
    m_modelName = 0x8 # CUtlString
    m_pSharedData = 0x10 # CSmartPtr<CAnimUpdateSharedData>

class CAnimGraphNetworkSettings: # CAnimGraphSettingsGroup
    m_bNetworkingEnabled = 0x20 # bool

class CAnimGraphSettingsGroup:

class CAnimGraphSettingsManager:
    m_settingsGroups = 0x18 # CUtlVector<CSmartPtr<CAnimGraphSettingsGroup>>

class CAnimInputDamping:
    m_speedFunction = 0x8 # DampingSpeedFunction
    m_fSpeedScale = 0xC # float

class CAnimKeyData:
    m_name = 0x0 # CBufferString
    m_boneArray = 0x10 # CUtlVector<CAnimBone>
    m_userArray = 0x28 # CUtlVector<CAnimUser>
    m_morphArray = 0x40 # CUtlVector<CBufferString>
    m_nChannelElements = 0x58 # int32_t
    m_dataChannelArray = 0x60 # CUtlVector<CAnimDataChannelDesc>

class CAnimLocalHierarchy:
    m_sBone = 0x0 # CBufferString
    m_sNewParent = 0x10 # CBufferString
    m_nStartFrame = 0x20 # int32_t
    m_nPeakFrame = 0x24 # int32_t
    m_nTailFrame = 0x28 # int32_t
    m_nEndFrame = 0x2C # int32_t

class CAnimMorphDifference:
    m_name = 0x0 # CBufferString

class CAnimMotorUpdaterBase:
    m_name = 0x10 # CUtlString
    m_bDefault = 0x18 # bool

class CAnimMovement:
    endframe = 0x0 # int32_t
    motionflags = 0x4 # int32_t
    v0 = 0x8 # float
    v1 = 0xC # float
    angle = 0x10 # float
    vector = 0x14 # Vector
    position = 0x20 # Vector

class CAnimNodePath:
    m_path = 0x0 # AnimNodeID[11]
    m_nCount = 0x2C # int32_t

class CAnimParamHandle:
    m_type = 0x0 # AnimParamType_t
    m_index = 0x1 # uint8_t

class CAnimParamHandleMap:
    m_list = 0x0 # CUtlHashtable<uint16_t,int16_t>

class CAnimParameterBase:
    m_name = 0x18 # CGlobalSymbol
    m_group = 0x20 # CUtlString
    m_id = 0x28 # AnimParamID
    m_componentName = 0x40 # CUtlString
    m_bNetworkingRequested = 0x60 # bool
    m_bIsReferenced = 0x61 # bool

class CAnimParameterManagerUpdater:
    m_parameters = 0x18 # CUtlVector<CSmartPtr<CAnimParameterBase>>
    m_idToIndexMap = 0x30 # CUtlHashtable<AnimParamID,int32_t>
    m_nameToIndexMap = 0x50 # CUtlHashtable<CUtlString,int32_t>
    m_indexToHandle = 0x70 # CUtlVector<CAnimParamHandle>
    m_autoResetParams = 0x88 # CUtlVector<CUtlPair<CAnimParamHandle,CAnimVariant>>
    m_autoResetMap = 0xA0 # CUtlHashtable<CAnimParamHandle,int16_t>

class CAnimReplayFrame:
    m_inputDataBlocks = 0x10 # CUtlVector<CUtlBinaryBlock>
    m_instanceData = 0x28 # CUtlBinaryBlock
    m_startingLocalToWorldTransform = 0x40 # CTransform
    m_localToWorldTransform = 0x60 # CTransform
    m_timeStamp = 0x80 # float

class CAnimScriptComponentUpdater: # CAnimComponentUpdater
    m_hScript = 0x30 # AnimScriptHandle

class CAnimScriptManager:
    m_scriptInfo = 0x10 # CUtlVector<ScriptInfo_t>

class CAnimSequenceParams:
    m_flFadeInTime = 0x0 # float
    m_flFadeOutTime = 0x4 # float

class CAnimSkeleton:
    m_localSpaceTransforms = 0x10 # CUtlVector<CTransform>
    m_modelSpaceTransforms = 0x28 # CUtlVector<CTransform>
    m_boneNames = 0x40 # CUtlVector<CUtlString>
    m_children = 0x58 # CUtlVector<CUtlVector<int32_t>>
    m_parents = 0x70 # CUtlVector<int32_t>
    m_feet = 0x88 # CUtlVector<CAnimFoot>
    m_morphNames = 0xA0 # CUtlVector<CUtlString>
    m_lodBoneCounts = 0xB8 # CUtlVector<int32_t>

class CAnimStateMachineUpdater:
    m_states = 0x8 # CUtlVector<CStateUpdateData>
    m_transitions = 0x20 # CUtlVector<CTransitionUpdateData>
    m_startStateIndex = 0x50 # int32_t

class CAnimTagBase:
    m_name = 0x18 # CGlobalSymbol
    m_group = 0x20 # CGlobalSymbol
    m_tagID = 0x28 # AnimTagID
    m_bIsReferenced = 0x40 # bool

class CAnimTagManagerUpdater:
    m_tags = 0x18 # CUtlVector<CSmartPtr<CAnimTagBase>>

class CAnimUpdateNodeBase:
    m_nodePath = 0x18 # CAnimNodePath
    m_networkMode = 0x48 # AnimNodeNetworkMode
    m_name = 0x50 # CUtlString

class CAnimUpdateNodeRef:
    m_nodeIndex = 0x8 # int32_t

class CAnimUpdateSharedData:
    m_nodes = 0x10 # CUtlVector<CSmartPtr<CAnimUpdateNodeBase>>
    m_nodeIndexMap = 0x28 # CUtlHashtable<CAnimNodePath,int32_t>
    m_components = 0x48 # CUtlVector<CSmartPtr<CAnimComponentUpdater>>
    m_pParamListUpdater = 0x60 # CSmartPtr<CAnimParameterManagerUpdater>
    m_pTagManagerUpdater = 0x68 # CSmartPtr<CAnimTagManagerUpdater>
    m_scriptManager = 0x70 # CSmartPtr<CAnimScriptManager>
    m_settings = 0x78 # CAnimGraphSettingsManager
    m_pStaticPoseCache = 0xA8 # CSmartPtr<CStaticPoseCacheBuilder>
    m_pSkeleton = 0xB0 # CSmartPtr<CAnimSkeleton>
    m_rootNodePath = 0xB8 # CAnimNodePath

class CAnimUser:
    m_name = 0x0 # CBufferString
    m_nType = 0x10 # int32_t

class CAnimUserDifference:
    m_name = 0x0 # CBufferString
    m_nType = 0x10 # int32_t

class CAnimationGraphVisualizerAxis: # CAnimationGraphVisualizerPrimitiveBase
    m_xWsTransform = 0x40 # CTransform
    m_flAxisSize = 0x60 # float

class CAnimationGraphVisualizerLine: # CAnimationGraphVisualizerPrimitiveBase
    m_vWsPositionStart = 0x40 # VectorAligned
    m_vWsPositionEnd = 0x50 # VectorAligned
    m_Color = 0x60 # Color

class CAnimationGraphVisualizerPie: # CAnimationGraphVisualizerPrimitiveBase
    m_vWsCenter = 0x40 # VectorAligned
    m_vWsStart = 0x50 # VectorAligned
    m_vWsEnd = 0x60 # VectorAligned
    m_Color = 0x70 # Color

class CAnimationGraphVisualizerPrimitiveBase:
    m_Type = 0x8 # CAnimationGraphVisualizerPrimitiveType
    m_OwningAnimNodePaths = 0xC # AnimNodeID[11]
    m_nOwningAnimNodePathCount = 0x38 # int32_t

class CAnimationGraphVisualizerSphere: # CAnimationGraphVisualizerPrimitiveBase
    m_vWsPosition = 0x40 # VectorAligned
    m_flRadius = 0x50 # float
    m_Color = 0x54 # Color

class CAnimationGraphVisualizerText: # CAnimationGraphVisualizerPrimitiveBase
    m_vWsPosition = 0x40 # VectorAligned
    m_Color = 0x50 # Color
    m_Text = 0x58 # CUtlString

class CAnimationGroup:
    m_nFlags = 0x10 # uint32_t
    m_name = 0x18 # CBufferString
    m_localHAnimArray_Handle = 0x60 # CUtlVector<CStrongHandle<InfoForResourceTypeCAnimData>>
    m_includedGroupArray_Handle = 0x78 # CUtlVector<CStrongHandle<InfoForResourceTypeCAnimationGroup>>
    m_directHSeqGroup_Handle = 0x90 # CStrongHandle<InfoForResourceTypeCSequenceGroupData>
    m_decodeKey = 0x98 # CAnimKeyData
    m_szScripts = 0x110 # CUtlVector<CBufferString>

class CAttachment:
    m_name = 0x0 # CUtlString
    m_influenceNames = 0x8 # CUtlString[3]
    m_vInfluenceRotations = 0x20 # Quaternion[3]
    m_vInfluenceOffsets = 0x50 # Vector[3]
    m_influenceWeights = 0x74 # float[3]
    m_bInfluenceRootTransform = 0x80 # bool[3]
    m_nInfluences = 0x83 # uint8_t
    m_bIgnoreRotation = 0x84 # bool

class CAudioAnimTag: # CAnimTagBase
    m_clipName = 0x50 # CUtlString
    m_attachmentName = 0x58 # CUtlString
    m_flVolume = 0x60 # float
    m_bStopWhenTagEnds = 0x64 # bool
    m_bStopWhenGraphEnds = 0x65 # bool
    m_bPlayOnServer = 0x66 # bool
    m_bPlayOnClient = 0x67 # bool

class CBaseConstraint: # CBoneConstraintBase
    m_name = 0x28 # CUtlString
    m_vUpVector = 0x30 # Vector
    m_slaves = 0x40 # CUtlVector<CConstraintSlave>
    m_targets = 0x58 # CUtlVector<CConstraintTarget>

class CBinaryUpdateNode: # CAnimUpdateNodeBase
    m_pChild1 = 0x58 # CAnimUpdateNodeRef
    m_pChild2 = 0x68 # CAnimUpdateNodeRef
    m_timingBehavior = 0x78 # BinaryNodeTiming
    m_flTimingBlend = 0x7C # float
    m_bResetChild1 = 0x80 # bool
    m_bResetChild2 = 0x81 # bool

class CBindPoseUpdateNode: # CLeafUpdateNode

class CBlend2DUpdateNode: # CAnimUpdateNodeBase
    m_items = 0x60 # CUtlVector<BlendItem_t>
    m_tags = 0x78 # CUtlVector<TagSpan_t>
    m_paramSpans = 0x90 # CParamSpanUpdater
    m_nodeItemIndices = 0xA8 # CUtlVector<int32_t>
    m_damping = 0xC0 # CAnimInputDamping
    m_blendSourceX = 0xD0 # AnimValueSource
    m_paramX = 0xD4 # CAnimParamHandle
    m_blendSourceY = 0xD8 # AnimValueSource
    m_paramY = 0xDC # CAnimParamHandle
    m_eBlendMode = 0xE0 # Blend2DMode
    m_playbackSpeed = 0xE4 # float
    m_bLoop = 0xE8 # bool
    m_bLockBlendOnReset = 0xE9 # bool
    m_bLockWhenWaning = 0xEA # bool
    m_bAnimEventsAndTagsOnMostWeightedOnly = 0xEB # bool

class CBlendCurve:
    m_flControlPoint1 = 0x0 # float
    m_flControlPoint2 = 0x4 # float

class CBlendUpdateNode: # CAnimUpdateNodeBase
    m_children = 0x60 # CUtlVector<CAnimUpdateNodeRef>
    m_sortedOrder = 0x78 # CUtlVector<uint8_t>
    m_targetValues = 0x90 # CUtlVector<float>
    m_blendValueSource = 0xAC # AnimValueSource
    m_paramIndex = 0xB0 # CAnimParamHandle
    m_damping = 0xB8 # CAnimInputDamping
    m_blendKeyType = 0xC8 # BlendKeyType
    m_bLockBlendOnReset = 0xCC # bool
    m_bSyncCycles = 0xCD # bool
    m_bLoop = 0xCE # bool
    m_bLockWhenWaning = 0xCF # bool

class CBlockSelectionMetricEvaluator: # CMotionMetricEvaluator

class CBodyGroupAnimTag: # CAnimTagBase
    m_nPriority = 0x50 # int32_t
    m_bodyGroupSettings = 0x58 # CUtlVector<CBodyGroupSetting>

class CBodyGroupSetting:
    m_BodyGroupName = 0x0 # CUtlString
    m_nBodyGroupOption = 0x8 # int32_t

class CBoneConstraintBase:

class CBoneConstraintDotToMorph: # CBoneConstraintBase
    m_sBoneName = 0x28 # CUtlString
    m_sTargetBoneName = 0x30 # CUtlString
    m_sMorphChannelName = 0x38 # CUtlString
    m_flRemap = 0x40 # float[4]

class CBoneConstraintPoseSpaceBone: # CBaseConstraint
    m_inputList = 0x70 # CUtlVector<CBoneConstraintPoseSpaceBone::Input_t>

class CBoneConstraintPoseSpaceBone_Input_t:
    m_inputValue = 0x0 # Vector
    m_outputTransformList = 0x10 # CUtlVector<CTransform>

class CBoneConstraintPoseSpaceMorph: # CBoneConstraintBase
    m_sBoneName = 0x28 # CUtlString
    m_sAttachmentName = 0x30 # CUtlString
    m_outputMorph = 0x38 # CUtlVector<CUtlString>
    m_inputList = 0x50 # CUtlVector<CBoneConstraintPoseSpaceMorph::Input_t>
    m_bClamp = 0x68 # bool

class CBoneConstraintPoseSpaceMorph_Input_t:
    m_inputValue = 0x0 # Vector
    m_outputWeightList = 0x10 # CUtlVector<float>

class CBoneMaskUpdateNode: # CBinaryUpdateNode
    m_nWeightListIndex = 0x8C # int32_t
    m_flRootMotionBlend = 0x90 # float
    m_blendSpace = 0x94 # BoneMaskBlendSpace
    m_footMotionTiming = 0x98 # BinaryNodeChildOption
    m_bUseBlendScale = 0x9C # bool
    m_blendValueSource = 0xA0 # AnimValueSource
    m_hBlendParameter = 0xA4 # CAnimParamHandle

class CBonePositionMetricEvaluator: # CMotionMetricEvaluator
    m_nBoneIndex = 0x50 # int32_t

class CBoneVelocityMetricEvaluator: # CMotionMetricEvaluator
    m_nBoneIndex = 0x50 # int32_t

class CBoolAnimParameter: # CConcreteAnimParameter
    m_bDefaultValue = 0x78 # bool

class CCPPScriptComponentUpdater: # CAnimComponentUpdater
    m_scriptsToRun = 0x30 # CUtlVector<CGlobalSymbol>

class CCachedPose:
    m_transforms = 0x8 # CUtlVector<CTransform>
    m_morphWeights = 0x20 # CUtlVector<float>
    m_hSequence = 0x38 # HSequence
    m_flCycle = 0x3C # float

class CChoiceUpdateNode: # CAnimUpdateNodeBase
    m_children = 0x58 # CUtlVector<CAnimUpdateNodeRef>
    m_weights = 0x70 # CUtlVector<float>
    m_blendTimes = 0x88 # CUtlVector<float>
    m_choiceMethod = 0xA0 # ChoiceMethod
    m_choiceChangeMethod = 0xA4 # ChoiceChangeMethod
    m_blendMethod = 0xA8 # ChoiceBlendMethod
    m_blendTime = 0xAC # float
    m_bCrossFade = 0xB0 # bool
    m_bResetChosen = 0xB1 # bool
    m_bDontResetSameSelection = 0xB2 # bool

class CChoreoUpdateNode: # CUnaryUpdateNode

class CClothSettingsAnimTag: # CAnimTagBase
    m_flStiffness = 0x50 # float
    m_flEaseIn = 0x54 # float
    m_flEaseOut = 0x58 # float
    m_nVertexSet = 0x60 # CUtlString

class CCompressorGroup:
    m_nTotalElementCount = 0x0 # int32_t
    m_szChannelClass = 0x8 # CUtlVector<char*>
    m_szVariableName = 0x20 # CUtlVector<char*>
    m_nType = 0x38 # CUtlVector<fieldtype_t>
    m_nFlags = 0x50 # CUtlVector<int32_t>
    m_szGrouping = 0x68 # CUtlVector<CUtlString>
    m_nCompressorIndex = 0x80 # CUtlVector<int32_t>
    m_szElementNames = 0x98 # CUtlVector<CUtlVector<char*>>
    m_nElementUniqueID = 0xB0 # CUtlVector<CUtlVector<int32_t>>
    m_nElementMask = 0xC8 # CUtlVector<uint32_t>
    m_vectorCompressor = 0xF8 # CUtlVector<CCompressor<Vector>*>
    m_quaternionCompressor = 0x110 # CUtlVector<CCompressor<QuaternionStorage>*>
    m_intCompressor = 0x128 # CUtlVector<CCompressor<int32_t>*>
    m_boolCompressor = 0x140 # CUtlVector<CCompressor<bool>*>
    m_colorCompressor = 0x158 # CUtlVector<CCompressor<Color>*>
    m_vector2DCompressor = 0x170 # CUtlVector<CCompressor<Vector2D>*>
    m_vector4DCompressor = 0x188 # CUtlVector<CCompressor<Vector4D>*>

class CConcreteAnimParameter: # CAnimParameterBase
    m_previewButton = 0x68 # AnimParamButton_t
    m_eNetworkSetting = 0x6C # AnimParamNetworkSetting
    m_bUseMostRecentValue = 0x70 # bool
    m_bAutoReset = 0x71 # bool
    m_bGameWritable = 0x72 # bool
    m_bGraphWritable = 0x73 # bool

class CConstraintSlave:
    m_qBaseOrientation = 0x0 # Quaternion
    m_vBasePosition = 0x10 # Vector
    m_nBoneHash = 0x1C # uint32_t
    m_flWeight = 0x20 # float
    m_sName = 0x28 # CUtlString

class CConstraintTarget:
    m_qOffset = 0x20 # Quaternion
    m_vOffset = 0x30 # Vector
    m_nBoneHash = 0x3C # uint32_t
    m_sName = 0x40 # CUtlString
    m_flWeight = 0x48 # float
    m_bIsAttachment = 0x59 # bool

class CCurrentRotationVelocityMetricEvaluator: # CMotionMetricEvaluator

class CCurrentVelocityMetricEvaluator: # CMotionMetricEvaluator

class CCycleBase:
    m_flCycle = 0x0 # float

class CCycleControlClipUpdateNode: # CLeafUpdateNode
    m_tags = 0x60 # CUtlVector<TagSpan_t>
    m_hSequence = 0x7C # HSequence
    m_duration = 0x80 # float
    m_valueSource = 0x84 # AnimValueSource
    m_paramIndex = 0x88 # CAnimParamHandle

class CCycleControlUpdateNode: # CUnaryUpdateNode
    m_valueSource = 0x68 # AnimValueSource
    m_paramIndex = 0x6C # CAnimParamHandle

class CDampedPathAnimMotorUpdater: # CPathAnimMotorUpdaterBase
    m_flAnticipationTime = 0x2C # float
    m_flMinSpeedScale = 0x30 # float
    m_hAnticipationPosParam = 0x34 # CAnimParamHandle
    m_hAnticipationHeadingParam = 0x36 # CAnimParamHandle
    m_flSpringConstant = 0x38 # float
    m_flMinSpringTension = 0x3C # float
    m_flMaxSpringTension = 0x40 # float

class CDampedValueComponentUpdater: # CAnimComponentUpdater
    m_items = 0x30 # CUtlVector<CDampedValueUpdateItem>

class CDampedValueUpdateItem:
    m_damping = 0x0 # CAnimInputDamping
    m_hParamIn = 0x18 # CAnimParamHandle
    m_hParamOut = 0x1A # CAnimParamHandle

class CDemoSettingsComponentUpdater: # CAnimComponentUpdater
    m_settings = 0x30 # CAnimDemoCaptureSettings

class CDirectPlaybackTagData:
    m_sequenceName = 0x0 # CUtlString
    m_tags = 0x8 # CUtlVector<TagSpan_t>

class CDirectPlaybackUpdateNode: # CUnaryUpdateNode
    m_bFinishEarly = 0x6C # bool
    m_bResetOnFinish = 0x6D # bool
    m_allTags = 0x70 # CUtlVector<CDirectPlaybackTagData>

class CDirectionalBlendUpdateNode: # CLeafUpdateNode
    m_hSequences = 0x5C # HSequence[8]
    m_damping = 0x80 # CAnimInputDamping
    m_blendValueSource = 0x90 # AnimValueSource
    m_paramIndex = 0x94 # CAnimParamHandle
    m_playbackSpeed = 0x98 # float
    m_duration = 0x9C # float
    m_bLoop = 0xA0 # bool
    m_bLockBlendOnReset = 0xA1 # bool

class CDistanceRemainingMetricEvaluator: # CMotionMetricEvaluator
    m_flMaxDistance = 0x50 # float
    m_flMinDistance = 0x54 # float
    m_flStartGoalFilterDistance = 0x58 # float
    m_flMaxGoalOvershootScale = 0x5C # float
    m_bFilterFixedMinDistance = 0x60 # bool
    m_bFilterGoalDistance = 0x61 # bool
    m_bFilterGoalOvershoot = 0x62 # bool

class CDrawCullingData:
    m_vConeApex = 0x0 # Vector
    m_ConeAxis = 0xC # int8_t[3]
    m_ConeCutoff = 0xF # int8_t

class CEditableMotionGraph: # CMotionGraph

class CEmitTagActionUpdater: # CAnimActionUpdater
    m_nTagIndex = 0x18 # int32_t
    m_bIsZeroDuration = 0x1C # bool

class CEnumAnimParameter: # CConcreteAnimParameter
    m_defaultValue = 0x80 # uint8_t
    m_enumOptions = 0x88 # CUtlVector<CUtlString>

class CExpressionActionUpdater: # CAnimActionUpdater
    m_hParam = 0x18 # CAnimParamHandle
    m_eParamType = 0x1A # AnimParamType_t
    m_hScript = 0x1C # AnimScriptHandle

class CFlexController:
    m_szName = 0x0 # CUtlString
    m_szType = 0x8 # CUtlString
    min = 0x10 # float
    max = 0x14 # float

class CFlexDesc:
    m_szFacs = 0x0 # CUtlString

class CFlexOp:
    m_OpCode = 0x0 # FlexOpCode_t
    m_Data = 0x4 # int32_t

class CFlexRule:
    m_nFlex = 0x0 # int32_t
    m_FlexOps = 0x8 # CUtlVector<CFlexOp>

class CFloatAnimParameter: # CConcreteAnimParameter
    m_fDefaultValue = 0x78 # float
    m_fMinValue = 0x7C # float
    m_fMaxValue = 0x80 # float
    m_bInterpolate = 0x84 # bool

class CFollowAttachmentUpdateNode: # CUnaryUpdateNode
    m_opFixedData = 0x70 # FollowAttachmentSettings_t

class CFollowPathUpdateNode: # CUnaryUpdateNode
    m_flBlendOutTime = 0x6C # float
    m_bBlockNonPathMovement = 0x70 # bool
    m_bStopFeetAtGoal = 0x71 # bool
    m_bScaleSpeed = 0x72 # bool
    m_flScale = 0x74 # float
    m_flMinAngle = 0x78 # float
    m_flMaxAngle = 0x7C # float
    m_flSpeedScaleBlending = 0x80 # float
    m_turnDamping = 0x88 # CAnimInputDamping
    m_facingTarget = 0x98 # AnimValueSource
    m_hParam = 0x9C # CAnimParamHandle
    m_flTurnToFaceOffset = 0xA0 # float
    m_bTurnToFace = 0xA4 # bool

class CFootAdjustmentUpdateNode: # CUnaryUpdateNode
    m_clips = 0x70 # CUtlVector<HSequence>
    m_hBasePoseCacheHandle = 0x88 # CPoseHandle
    m_facingTarget = 0x8C # CAnimParamHandle
    m_flTurnTimeMin = 0x90 # float
    m_flTurnTimeMax = 0x94 # float
    m_flStepHeightMax = 0x98 # float
    m_flStepHeightMaxAngle = 0x9C # float
    m_bResetChild = 0xA0 # bool
    m_bAnimationDriven = 0xA1 # bool

class CFootCycle: # CCycleBase

class CFootCycleDefinition:
    m_vStancePositionMS = 0x0 # Vector
    m_vMidpointPositionMS = 0xC # Vector
    m_flStanceDirectionMS = 0x18 # float
    m_vToStrideStartPos = 0x1C # Vector
    m_stanceCycle = 0x28 # CAnimCycle
    m_footLiftCycle = 0x2C # CFootCycle
    m_footOffCycle = 0x30 # CFootCycle
    m_footStrikeCycle = 0x34 # CFootCycle
    m_footLandCycle = 0x38 # CFootCycle

class CFootCycleMetricEvaluator: # CMotionMetricEvaluator
    m_footIndices = 0x50 # CUtlVector<int32_t>

class CFootDefinition:
    m_name = 0x0 # CUtlString
    m_ankleBoneName = 0x8 # CUtlString
    m_toeBoneName = 0x10 # CUtlString
    m_vBallOffset = 0x18 # Vector
    m_vHeelOffset = 0x24 # Vector
    m_flFootLength = 0x30 # float
    m_flBindPoseDirectionMS = 0x34 # float
    m_flTraceHeight = 0x38 # float
    m_flTraceRadius = 0x3C # float

class CFootFallAnimTag: # CAnimTagBase
    m_foot = 0x50 # FootFallTagFoot_t

class CFootLockUpdateNode: # CUnaryUpdateNode
    m_opFixedSettings = 0x68 # FootLockPoseOpFixedSettings
    m_footSettings = 0xD0 # CUtlVector<FootFixedSettings>
    m_hipShiftDamping = 0xE8 # CAnimInputDamping
    m_rootHeightDamping = 0xF8 # CAnimInputDamping
    m_flStrideCurveScale = 0x108 # float
    m_flStrideCurveLimitScale = 0x10C # float
    m_flStepHeightIncreaseScale = 0x110 # float
    m_flStepHeightDecreaseScale = 0x114 # float
    m_flHipShiftScale = 0x118 # float
    m_flBlendTime = 0x11C # float
    m_flMaxRootHeightOffset = 0x120 # float
    m_flMinRootHeightOffset = 0x124 # float
    m_flTiltPlanePitchSpringStrength = 0x128 # float
    m_flTiltPlaneRollSpringStrength = 0x12C # float
    m_bApplyFootRotationLimits = 0x130 # bool
    m_bApplyHipShift = 0x131 # bool
    m_bModulateStepHeight = 0x132 # bool
    m_bResetChild = 0x133 # bool
    m_bEnableVerticalCurvedPaths = 0x134 # bool
    m_bEnableRootHeightDamping = 0x135 # bool

class CFootMotion:
    m_strides = 0x0 # CUtlVector<CFootStride>
    m_name = 0x18 # CUtlString
    m_bAdditive = 0x20 # bool

class CFootPinningUpdateNode: # CUnaryUpdateNode
    m_poseOpFixedData = 0x70 # FootPinningPoseOpFixedData_t
    m_eTimingSource = 0xA0 # FootPinningTimingSource
    m_params = 0xA8 # CUtlVector<CAnimParamHandle>
    m_bResetChild = 0xC0 # bool

class CFootPositionMetricEvaluator: # CMotionMetricEvaluator
    m_footIndices = 0x50 # CUtlVector<int32_t>
    m_bIgnoreSlope = 0x68 # bool

class CFootStepTriggerUpdateNode: # CUnaryUpdateNode
    m_triggers = 0x68 # CUtlVector<FootStepTrigger>
    m_flTolerance = 0x84 # float

class CFootStride:
    m_definition = 0x0 # CFootCycleDefinition
    m_trajectories = 0x40 # CFootTrajectories

class CFootTrajectories:
    m_trajectories = 0x0 # CUtlVector<CFootTrajectory>

class CFootTrajectory:
    m_vOffset = 0x0 # Vector
    m_flRotationOffset = 0xC # float
    m_flProgression = 0x10 # float

class CFootstepLandedAnimTag: # CAnimTagBase
    m_FootstepType = 0x50 # FootstepLandedFootSoundType_t
    m_OverrideSoundName = 0x58 # CUtlString
    m_DebugAnimSourceString = 0x60 # CUtlString
    m_BoneName = 0x68 # CUtlString

class CFutureFacingMetricEvaluator: # CMotionMetricEvaluator
    m_flDistance = 0x50 # float
    m_flTime = 0x54 # float

class CFutureVelocityMetricEvaluator: # CMotionMetricEvaluator
    m_flDistance = 0x50 # float
    m_flStoppingDistance = 0x54 # float
    m_flTargetSpeed = 0x58 # float
    m_eMode = 0x5C # VelocityMetricMode

class CHitBox:
    m_name = 0x0 # CUtlString
    m_sSurfaceProperty = 0x8 # CUtlString
    m_sBoneName = 0x10 # CUtlString
    m_vMinBounds = 0x18 # Vector
    m_vMaxBounds = 0x24 # Vector
    m_flShapeRadius = 0x30 # float
    m_nBoneNameHash = 0x34 # uint32_t
    m_nGroupId = 0x38 # int32_t
    m_nShapeType = 0x3C # uint8_t
    m_bTranslationOnly = 0x3D # bool
    m_CRC = 0x40 # uint32_t
    m_cRenderColor = 0x44 # Color
    m_nHitBoxIndex = 0x48 # uint16_t

class CHitBoxSet:
    m_name = 0x0 # CUtlString
    m_nNameHash = 0x8 # uint32_t
    m_HitBoxes = 0x10 # CUtlVector<CHitBox>
    m_SourceFilename = 0x28 # CUtlString

class CHitBoxSetList:
    m_HitBoxSets = 0x0 # CUtlVector<CHitBoxSet>

class CHitReactUpdateNode: # CUnaryUpdateNode
    m_opFixedSettings = 0x68 # HitReactFixedSettings_t
    m_triggerParam = 0xB4 # CAnimParamHandle
    m_hitBoneParam = 0xB6 # CAnimParamHandle
    m_hitOffsetParam = 0xB8 # CAnimParamHandle
    m_hitDirectionParam = 0xBA # CAnimParamHandle
    m_hitStrengthParam = 0xBC # CAnimParamHandle
    m_flMinDelayBetweenHits = 0xC0 # float
    m_bResetChild = 0xC4 # bool

class CInputStreamUpdateNode: # CLeafUpdateNode

class CIntAnimParameter: # CConcreteAnimParameter
    m_defaultValue = 0x78 # int32_t
    m_minValue = 0x7C # int32_t
    m_maxValue = 0x80 # int32_t

class CJiggleBoneUpdateNode: # CUnaryUpdateNode
    m_opFixedData = 0x68 # JiggleBoneSettingsList_t

class CJumpHelperUpdateNode: # CSequenceUpdateNode
    m_hTargetParam = 0xA8 # CAnimParamHandle
    m_flOriginalJumpMovement = 0xAC # Vector
    m_flOriginalJumpDuration = 0xB8 # float
    m_flJumpStartCycle = 0xBC # float
    m_flJumpEndCycle = 0xC0 # float
    m_eCorrectionMethod = 0xC4 # JumpCorrectionMethod
    m_bTranslationAxis = 0xC8 # bool[3]
    m_bScaleSpeed = 0xCB # bool

class CLODComponentUpdater: # CAnimComponentUpdater
    m_nServerLOD = 0x30 # int32_t

class CLeafUpdateNode: # CAnimUpdateNodeBase

class CLeanMatrixUpdateNode: # CLeafUpdateNode
    m_frameCorners = 0x5C # int32_t[3][3]
    m_poses = 0x80 # CPoseHandle[9]
    m_damping = 0xA8 # CAnimInputDamping
    m_blendSource = 0xB8 # AnimVectorSource
    m_paramIndex = 0xBC # CAnimParamHandle
    m_verticalAxis = 0xC0 # Vector
    m_horizontalAxis = 0xCC # Vector
    m_hSequence = 0xD8 # HSequence
    m_flMaxValue = 0xDC # float
    m_nSequenceMaxFrame = 0xE0 # int32_t

class CLookAtUpdateNode: # CUnaryUpdateNode
    m_opFixedSettings = 0x70 # LookAtOpFixedSettings_t
    m_target = 0x138 # AnimVectorSource
    m_paramIndex = 0x13C # CAnimParamHandle
    m_weightParamIndex = 0x13E # CAnimParamHandle
    m_bResetChild = 0x140 # bool
    m_bLockWhenWaning = 0x141 # bool

class CLookComponentUpdater: # CAnimComponentUpdater
    m_hLookHeading = 0x34 # CAnimParamHandle
    m_hLookHeadingVelocity = 0x36 # CAnimParamHandle
    m_hLookPitch = 0x38 # CAnimParamHandle
    m_hLookDistance = 0x3A # CAnimParamHandle
    m_hLookDirection = 0x3C # CAnimParamHandle
    m_hLookTarget = 0x3E # CAnimParamHandle
    m_hLookTargetWorldSpace = 0x40 # CAnimParamHandle
    m_bNetworkLookTarget = 0x42 # bool

class CMaterialAttributeAnimTag: # CAnimTagBase
    m_AttributeName = 0x50 # CUtlString
    m_AttributeType = 0x58 # MatterialAttributeTagType_t
    m_flValue = 0x5C # float
    m_Color = 0x60 # Color

class CMaterialDrawDescriptor:
    m_nPrimitiveType = 0x0 # RenderPrimitiveType_t
    m_nBaseVertex = 0x4 # int32_t
    m_nVertexCount = 0x8 # int32_t
    m_nStartIndex = 0xC # int32_t
    m_nIndexCount = 0x10 # int32_t
    m_flUvDensity = 0x14 # float
    m_vTintColor = 0x18 # Vector
    m_flAlpha = 0x24 # float
    m_nFirstMeshlet = 0x2C # uint32_t
    m_nNumMeshlets = 0x30 # uint16_t
    m_indexBuffer = 0xB8 # CRenderBufferBinding
    m_material = 0xE0 # CStrongHandle<InfoForResourceTypeIMaterial2>

class CMeshletDescriptor:
    m_PackedAABB = 0x0 # PackedAABB_t
    m_CullingData = 0x8 # CDrawCullingData

class CModelConfig:
    m_ConfigName = 0x0 # CUtlString
    m_Elements = 0x8 # CUtlVector<CModelConfigElement*>
    m_bTopLevel = 0x20 # bool

class CModelConfigElement:
    m_ElementName = 0x8 # CUtlString
    m_NestedElements = 0x10 # CUtlVector<CModelConfigElement*>

class CModelConfigElement_AttachedModel: # CModelConfigElement
    m_InstanceName = 0x48 # CUtlString
    m_EntityClass = 0x50 # CUtlString
    m_hModel = 0x58 # CStrongHandle<InfoForResourceTypeCModel>
    m_vOffset = 0x60 # Vector
    m_aAngOffset = 0x6C # QAngle
    m_AttachmentName = 0x78 # CUtlString
    m_LocalAttachmentOffsetName = 0x80 # CUtlString
    m_AttachmentType = 0x88 # ModelConfigAttachmentType_t
    m_bBoneMergeFlex = 0x8C # bool
    m_bUserSpecifiedColor = 0x8D # bool
    m_bUserSpecifiedMaterialGroup = 0x8E # bool
    m_bAcceptParentMaterialDrivenDecals = 0x8F # bool
    m_BodygroupOnOtherModels = 0x90 # CUtlString
    m_MaterialGroupOnOtherModels = 0x98 # CUtlString

class CModelConfigElement_Command: # CModelConfigElement
    m_Command = 0x48 # CUtlString
    m_Args = 0x50 # KeyValues3

class CModelConfigElement_RandomColor: # CModelConfigElement
    m_Gradient = 0x48 # CColorGradient

class CModelConfigElement_RandomPick: # CModelConfigElement
    m_Choices = 0x48 # CUtlVector<CUtlString>
    m_ChoiceWeights = 0x60 # CUtlVector<float>

class CModelConfigElement_SetBodygroup: # CModelConfigElement
    m_GroupName = 0x48 # CUtlString
    m_nChoice = 0x50 # int32_t

class CModelConfigElement_SetBodygroupOnAttachedModels: # CModelConfigElement
    m_GroupName = 0x48 # CUtlString
    m_nChoice = 0x50 # int32_t

class CModelConfigElement_SetMaterialGroup: # CModelConfigElement
    m_MaterialGroupName = 0x48 # CUtlString

class CModelConfigElement_SetMaterialGroupOnAttachedModels: # CModelConfigElement
    m_MaterialGroupName = 0x48 # CUtlString

class CModelConfigElement_SetRenderColor: # CModelConfigElement
    m_Color = 0x48 # Color

class CModelConfigElement_UserPick: # CModelConfigElement
    m_Choices = 0x48 # CUtlVector<CUtlString>

class CModelConfigList:
    m_bHideMaterialGroupInTools = 0x0 # bool
    m_bHideRenderColorInTools = 0x1 # bool
    m_Configs = 0x8 # CUtlVector<CModelConfig*>

class CMoodVData:
    m_sModelName = 0x0 # CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
    m_nMoodType = 0xE0 # MoodType_t
    m_animationLayers = 0xE8 # CUtlVector<MoodAnimationLayer_t>

class CMorphBundleData:
    m_flULeftSrc = 0x0 # float
    m_flVTopSrc = 0x4 # float
    m_offsets = 0x8 # CUtlVector<float>
    m_ranges = 0x20 # CUtlVector<float>

class CMorphConstraint: # CBaseConstraint
    m_sTargetMorph = 0x70 # CUtlString
    m_nSlaveChannel = 0x78 # int32_t
    m_flMin = 0x7C # float
    m_flMax = 0x80 # float

class CMorphData:
    m_name = 0x0 # CUtlString
    m_morphRectDatas = 0x8 # CUtlVector<CMorphRectData>

class CMorphRectData:
    m_nXLeftDst = 0x0 # int16_t
    m_nYTopDst = 0x2 # int16_t
    m_flUWidthSrc = 0x4 # float
    m_flVHeightSrc = 0x8 # float
    m_bundleDatas = 0x10 # CUtlVector<CMorphBundleData>

class CMorphSetData:
    m_nWidth = 0x10 # int32_t
    m_nHeight = 0x14 # int32_t
    m_bundleTypes = 0x18 # CUtlVector<MorphBundleType_t>
    m_morphDatas = 0x30 # CUtlVector<CMorphData>
    m_pTextureAtlas = 0x48 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_FlexDesc = 0x50 # CUtlVector<CFlexDesc>
    m_FlexControllers = 0x68 # CUtlVector<CFlexController>
    m_FlexRules = 0x80 # CUtlVector<CFlexRule>

class CMotionDataSet:
    m_groups = 0x0 # CUtlVector<CMotionGraphGroup>
    m_nDimensionCount = 0x18 # int32_t

class CMotionGraph:
    m_paramSpans = 0x10 # CParamSpanUpdater
    m_tags = 0x28 # CUtlVector<TagSpan_t>
    m_pRootNode = 0x40 # CSmartPtr<CMotionNode>
    m_nParameterCount = 0x48 # int32_t
    m_nConfigStartIndex = 0x4C # int32_t
    m_nConfigCount = 0x50 # int32_t
    m_bLoop = 0x54 # bool

class CMotionGraphConfig:
    m_paramValues = 0x0 # float[4]
    m_flDuration = 0x10 # float
    m_nMotionIndex = 0x14 # MotionIndex
    m_nSampleStart = 0x18 # int32_t
    m_nSampleCount = 0x1C # int32_t

class CMotionGraphGroup:
    m_searchDB = 0x0 # CMotionSearchDB
    m_motionGraphs = 0xB8 # CUtlVector<CSmartPtr<CMotionGraph>>
    m_motionGraphConfigs = 0xD0 # CUtlVector<CMotionGraphConfig>
    m_sampleToConfig = 0xE8 # CUtlVector<int32_t>
    m_hIsActiveScript = 0x100 # AnimScriptHandle

class CMotionGraphUpdateNode: # CLeafUpdateNode
    m_pMotionGraph = 0x58 # CSmartPtr<CMotionGraph>

class CMotionMatchingUpdateNode: # CLeafUpdateNode
    m_dataSet = 0x58 # CMotionDataSet
    m_metrics = 0x78 # CUtlVector<CSmartPtr<CMotionMetricEvaluator>>
    m_weights = 0x90 # CUtlVector<float>
    m_bSearchEveryTick = 0xE0 # bool
    m_flSearchInterval = 0xE4 # float
    m_bSearchWhenClipEnds = 0xE8 # bool
    m_bSearchWhenGoalChanges = 0xE9 # bool
    m_blendCurve = 0xEC # CBlendCurve
    m_flSampleRate = 0xF4 # float
    m_flBlendTime = 0xF8 # float
    m_bLockClipWhenWaning = 0xFC # bool
    m_flSelectionThreshold = 0x100 # float
    m_flReselectionTimeWindow = 0x104 # float
    m_bEnableRotationCorrection = 0x108 # bool
    m_bGoalAssist = 0x109 # bool
    m_flGoalAssistDistance = 0x10C # float
    m_flGoalAssistTolerance = 0x110 # float
    m_distanceScale_Damping = 0x118 # CAnimInputDamping
    m_flDistanceScale_OuterRadius = 0x128 # float
    m_flDistanceScale_InnerRadius = 0x12C # float
    m_flDistanceScale_MaxScale = 0x130 # float
    m_flDistanceScale_MinScale = 0x134 # float
    m_bEnableDistanceScaling = 0x138 # bool

class CMotionMetricEvaluator:
    m_means = 0x18 # CUtlVector<float>
    m_standardDeviations = 0x30 # CUtlVector<float>
    m_flWeight = 0x48 # float
    m_nDimensionStartIndex = 0x4C # int32_t

class CMotionNode:
    m_name = 0x18 # CUtlString
    m_id = 0x20 # AnimNodeID

class CMotionNodeBlend1D: # CMotionNode
    m_blendItems = 0x28 # CUtlVector<MotionBlendItem>
    m_nParamIndex = 0x40 # int32_t

class CMotionNodeSequence: # CMotionNode
    m_tags = 0x28 # CUtlVector<TagSpan_t>
    m_hSequence = 0x40 # HSequence
    m_flPlaybackSpeed = 0x44 # float

class CMotionSearchDB:
    m_rootNode = 0x0 # CMotionSearchNode
    m_residualQuantizer = 0x80 # CProductQuantizer
    m_codeIndices = 0xA0 # CUtlVector<MotionDBIndex>

class CMotionSearchNode:
    m_children = 0x0 # CUtlVector<CMotionSearchNode*>
    m_quantizer = 0x18 # CVectorQuantizer
    m_sampleCodes = 0x38 # CUtlVector<CUtlVector<SampleCode>>
    m_sampleIndices = 0x50 # CUtlVector<CUtlVector<int32_t>>
    m_selectableSamples = 0x68 # CUtlVector<int32_t>

class CMovementComponentUpdater: # CAnimComponentUpdater
    m_motors = 0x30 # CUtlVector<CSmartPtr<CAnimMotorUpdaterBase>>
    m_facingDamping = 0x48 # CAnimInputDamping
    m_eDefaultFacingMode = 0x58 # FacingMode
    m_nDefaultMotorIndex = 0x64 # int32_t
    m_flDefaultRunSpeed = 0x68 # float
    m_bMoveVarsDisabled = 0x6C # bool
    m_bNetworkPath = 0x6D # bool
    m_bNetworkFacing = 0x6E # bool
    m_paramHandles = 0x6F # CAnimParamHandle[30]

class CMoverUpdateNode: # CUnaryUpdateNode
    m_damping = 0x70 # CAnimInputDamping
    m_facingTarget = 0x80 # AnimValueSource
    m_hMoveVecParam = 0x84 # CAnimParamHandle
    m_hMoveHeadingParam = 0x86 # CAnimParamHandle
    m_hTurnToFaceParam = 0x88 # CAnimParamHandle
    m_flTurnToFaceOffset = 0x8C # float
    m_flTurnToFaceLimit = 0x90 # float
    m_bAdditive = 0x94 # bool
    m_bApplyMovement = 0x95 # bool
    m_bOrientMovement = 0x96 # bool
    m_bApplyRotation = 0x97 # bool
    m_bLimitOnly = 0x98 # bool

class CNmBoneMask:
    m_ID = 0x0 # CGlobalSymbol
    m_weightInfo = 0x8 # CNmBoneMask::WeightInfo_t
    m_weights = 0x18 # CUtlVector<float>

class CNmClip:
    m_skeleton = 0x0 # CStrongHandle<InfoForResourceTypeCNmSkeleton>
    m_nNumFrames = 0x8 # uint32_t
    m_flDuration = 0xC # float
    m_compressedPoseData = 0x10 # CUtlBinaryBlock
    m_trackCompressionSettings = 0x28 # CUtlVector<NmCompressionSettings_t>
    m_compressedPoseOffsets = 0x40 # CUtlVector<uint32_t>
    m_syncTrack = 0xA0 # CNmSyncTrack
    m_rootMotion = 0x150 # CNmRootMotionData
    m_bIsAdditive = 0x1A0 # bool

class CNmEvent:
    m_flStartTime = 0x8 # float
    m_flDuration = 0xC # float

class CNmFootEvent: # CNmEvent
    m_phase = 0x10 # NmFootPhase_t

class CNmFrameSnapEvent: # CNmEvent
    m_frameSnapMode = 0x10 # NmFrameSnapEventMode_t

class CNmGraph:
    m_persistentNodeIndices = 0x0 # CUtlVector<int16_t>
    m_instanceNodeStartOffsets = 0x18 # CUtlVector<uint32_t>
    m_instanceRequiredMemory = 0x30 # uint32_t
    m_instanceRequiredAlignment = 0x34 # uint32_t
    m_rootNodeIdx = 0x38 # int16_t
    m_controlParameterIDs = 0x40 # CUtlVector<CGlobalSymbol>
    m_virtualParameterIDs = 0x58 # CUtlVector<CGlobalSymbol>
    m_virtualParameterNodeIndices = 0x70 # CUtlVector<int16_t>
    m_childGraphSlots = 0x88 # CUtlVector<CNmGraph::ChildGraphSlot_t>
    m_externalGraphSlots = 0xA0 # CUtlVector<CNmGraph::ExternalGraphSlot_t>

class CNmGraphDataSet:
    m_variationID = 0x0 # CGlobalSymbol
    m_skeleton = 0x8 # CStrongHandle<InfoForResourceTypeCNmSkeleton>
    m_resources = 0x10 # CUtlVector<CStrongHandleVoid>

class CNmGraphVariation:
    m_graph = 0x0 # CStrongHandle<InfoForResourceTypeCNmGraph>
    m_dataSet = 0x8 # CStrongHandle<InfoForResourceTypeCNmGraphDataSet>

class CNmGraph_ChildGraphSlot_t:
    m_nNodeIdx = 0x0 # int16_t
    m_dataSlotIdx = 0x2 # int16_t

class CNmGraph_ExternalGraphSlot_t:
    m_nNodeIdx = 0x0 # int16_t
    m_slotID = 0x8 # CGlobalSymbol

class CNmIDEvent: # CNmEvent
    m_ID = 0x10 # CGlobalSymbol

class CNmLegacyEvent: # CNmEvent

class CNmRootMotionData:
    m_transforms = 0x0 # CUtlVector<CTransform>
    m_nNumFrames = 0x18 # int32_t
    m_flAverageLinearVelocity = 0x1C # float
    m_flAverageAngularVelocityRadians = 0x20 # float
    m_totalDelta = 0x30 # CTransform

class CNmSkeleton:
    m_ID = 0x0 # CGlobalSymbol
    m_boneIDs = 0x8 # CUtlLeanVector<CGlobalSymbol>
    m_parentIndices = 0x18 # CUtlVector<int32_t>
    m_parentSpaceReferencePose = 0x30 # CUtlVector<CTransform>
    m_modelSpaceReferencePose = 0x48 # CUtlVector<CTransform>
    m_numBonesToSampleAtLowLOD = 0x60 # int32_t
    m_boneMasks = 0x68 # CUtlLeanVector<CNmBoneMask>

class CNmSyncTrack:
    m_syncEvents = 0x0 # CUtlLeanVectorFixedGrowable<CNmSyncTrack::Event_t>
    m_nStartEventOffset = 0xA8 # int32_t

class CNmSyncTrack_EventMarker_t:
    m_startTime = 0x0 # NmPercent_t
    m_ID = 0x8 # CGlobalSymbol

class CNmSyncTrack_Event_t:
    m_ID = 0x0 # CGlobalSymbol
    m_startTime = 0x8 # NmPercent_t
    m_duration = 0xC # NmPercent_t

class CNmTransitionEvent: # CNmEvent
    m_rule = 0x10 # NmTransitionRule_t
    m_ID = 0x18 # CGlobalSymbol

class COrientConstraint: # CBaseConstraint

class CParamSpanUpdater:
    m_spans = 0x0 # CUtlVector<ParamSpan_t>

class CParentConstraint: # CBaseConstraint

class CParticleAnimTag: # CAnimTagBase
    m_hParticleSystem = 0x50 # CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    m_particleSystemName = 0x58 # CUtlString
    m_configName = 0x60 # CUtlString
    m_bDetachFromOwner = 0x68 # bool
    m_bStopWhenTagEnds = 0x69 # bool
    m_bTagEndStopIsInstant = 0x6A # bool
    m_attachmentName = 0x70 # CUtlString
    m_attachmentType = 0x78 # ParticleAttachment_t
    m_attachmentCP1Name = 0x80 # CUtlString
    m_attachmentCP1Type = 0x88 # ParticleAttachment_t

class CPathAnimMotorUpdater: # CPathAnimMotorUpdaterBase

class CPathAnimMotorUpdaterBase: # CAnimMotorUpdaterBase
    m_bLockToPath = 0x20 # bool

class CPathHelperUpdateNode: # CUnaryUpdateNode
    m_flStoppingRadius = 0x68 # float
    m_flStoppingSpeedScale = 0x6C # float

class CPathMetricEvaluator: # CMotionMetricEvaluator
    m_pathTimeSamples = 0x50 # CUtlVector<float>
    m_flDistance = 0x68 # float
    m_bExtrapolateMovement = 0x6C # bool
    m_flMinExtrapolationSpeed = 0x70 # float

class CPhysSurfaceProperties:
    m_name = 0x0 # CUtlString
    m_nameHash = 0x8 # uint32_t
    m_baseNameHash = 0xC # uint32_t
    m_bHidden = 0x18 # bool
    m_description = 0x20 # CUtlString
    m_physics = 0x28 # CPhysSurfacePropertiesPhysics
    m_audioSounds = 0x48 # CPhysSurfacePropertiesSoundNames
    m_audioParams = 0x88 # CPhysSurfacePropertiesAudio

class CPhysSurfacePropertiesAudio:
    m_reflectivity = 0x0 # float
    m_hardnessFactor = 0x4 # float
    m_roughnessFactor = 0x8 # float
    m_roughThreshold = 0xC # float
    m_hardThreshold = 0x10 # float
    m_hardVelocityThreshold = 0x14 # float
    m_flStaticImpactVolume = 0x18 # float
    m_flOcclusionFactor = 0x1C # float

class CPhysSurfacePropertiesPhysics:
    m_friction = 0x0 # float
    m_elasticity = 0x4 # float
    m_density = 0x8 # float
    m_thickness = 0xC # float
    m_softContactFrequency = 0x10 # float
    m_softContactDampingRatio = 0x14 # float
    m_wheelDrag = 0x18 # float

class CPhysSurfacePropertiesSoundNames:
    m_impactSoft = 0x0 # CUtlString
    m_impactHard = 0x8 # CUtlString
    m_scrapeSmooth = 0x10 # CUtlString
    m_scrapeRough = 0x18 # CUtlString
    m_bulletImpact = 0x20 # CUtlString
    m_rolling = 0x28 # CUtlString
    m_break = 0x30 # CUtlString
    m_strain = 0x38 # CUtlString

class CPlayerInputAnimMotorUpdater: # CAnimMotorUpdaterBase
    m_sampleTimes = 0x20 # CUtlVector<float>
    m_flSpringConstant = 0x3C # float
    m_flAnticipationDistance = 0x40 # float
    m_hAnticipationPosParam = 0x44 # CAnimParamHandle
    m_hAnticipationHeadingParam = 0x46 # CAnimParamHandle
    m_bUseAcceleration = 0x48 # bool

class CPointConstraint: # CBaseConstraint

class CPoseHandle:
    m_nIndex = 0x0 # uint16_t
    m_eType = 0x2 # PoseType_t

class CProductQuantizer:
    m_subQuantizers = 0x0 # CUtlVector<CVectorQuantizer>
    m_nDimensions = 0x18 # int32_t

class CQuaternionAnimParameter: # CConcreteAnimParameter
    m_defaultValue = 0x80 # Quaternion
    m_bInterpolate = 0x90 # bool

class CRagdollAnimTag: # CAnimTagBase
    m_nPoseControl = 0x50 # AnimPoseControl
    m_flFrequency = 0x54 # float
    m_flDampingRatio = 0x58 # float
    m_flDecayDuration = 0x5C # float
    m_flDecayBias = 0x60 # float
    m_bDestroy = 0x64 # bool

class CRagdollComponentUpdater: # CAnimComponentUpdater
    m_ragdollNodePaths = 0x30 # CUtlVector<CAnimNodePath>
    m_boneIndices = 0x48 # CUtlVector<int32_t>
    m_boneNames = 0x60 # CUtlVector<CUtlString>
    m_weightLists = 0x78 # CUtlVector<WeightList>
    m_flSpringFrequencyMin = 0x90 # float
    m_flSpringFrequencyMax = 0x94 # float
    m_flMaxStretch = 0x98 # float
    m_bSolidCollisionAtZeroWeight = 0x9C # bool

class CRagdollUpdateNode: # CUnaryUpdateNode
    m_nWeightListIndex = 0x68 # int32_t
    m_poseControlMethod = 0x6C # RagdollPoseControl

class CRenderBufferBinding:
    m_hBuffer = 0x0 # uint64_t
    m_nBindOffsetBytes = 0x10 # uint32_t

class CRenderGroom:
    m_nSegmentsPerHairStrand = 0x0 # int32_t
    m_nGuideHairCount = 0x4 # int32_t
    m_nHairCount = 0x8 # int32_t
    m_nGroomGroupID = 0xC # int32_t
    m_nAttachBoneIdx = 0x10 # int32_t
    m_hairInfoBufferData = 0x18 # CUtlBinaryBlock
    m_hairs = 0x30 # CUtlVector<RenderHairStrandInfo_t>

class CRenderMesh:
    m_sceneObjects = 0x10 # CUtlVectorFixedGrowable<CSceneObjectData>
    m_constraints = 0xA0 # CUtlVector<CBaseConstraint*>
    m_skeleton = 0xB8 # CRenderSkeleton
    m_meshDeformParams = 0x1E0 # DynamicMeshDeformParams_t
    m_pGroomData = 0x1F0 # CRenderGroom*

class CRenderSkeleton:
    m_bones = 0x0 # CUtlVector<RenderSkeletonBone_t>
    m_boneParents = 0x30 # CUtlVector<int32_t>
    m_nBoneWeightCount = 0x48 # int32_t

class CRootUpdateNode: # CUnaryUpdateNode

class CSceneObjectData:
    m_vMinBounds = 0x0 # Vector
    m_vMaxBounds = 0xC # Vector
    m_drawCalls = 0x18 # CUtlVector<CMaterialDrawDescriptor>
    m_drawBounds = 0x30 # CUtlVector<AABB_t>
    m_meshlets = 0x48 # CUtlVector<CMeshletDescriptor>
    m_vTintColor = 0x60 # Vector4D

class CSelectorUpdateNode: # CAnimUpdateNodeBase
    m_children = 0x58 # CUtlVector<CAnimUpdateNodeRef>
    m_tags = 0x70 # CUtlVector<int8_t>
    m_blendCurve = 0x8C # CBlendCurve
    m_flBlendTime = 0x94 # CAnimValue<float>
    m_hParameter = 0x9C # CAnimParamHandle
    m_eTagBehavior = 0xA0 # SelectorTagBehavior_t
    m_bResetOnChange = 0xA4 # bool
    m_bSyncCyclesOnChange = 0xA5 # bool

class CSeqAutoLayer:
    m_nLocalReference = 0x0 # int16_t
    m_nLocalPose = 0x2 # int16_t
    m_flags = 0x4 # CSeqAutoLayerFlag
    m_start = 0xC # float
    m_peak = 0x10 # float
    m_tail = 0x14 # float
    m_end = 0x18 # float

class CSeqAutoLayerFlag:
    m_bPost = 0x0 # bool
    m_bSpline = 0x1 # bool
    m_bXFade = 0x2 # bool
    m_bNoBlend = 0x3 # bool
    m_bLocal = 0x4 # bool
    m_bPose = 0x5 # bool
    m_bFetchFrame = 0x6 # bool
    m_bSubtract = 0x7 # bool

class CSeqBoneMaskList:
    m_sName = 0x0 # CBufferString
    m_nLocalBoneArray = 0x10 # CUtlVector<int16_t>
    m_flBoneWeightArray = 0x28 # CUtlVector<float>
    m_flDefaultMorphCtrlWeight = 0x40 # float
    m_morphCtrlWeightArray = 0x48 # CUtlVector<CUtlPair<CBufferString,float>>

class CSeqCmdLayer:
    m_cmd = 0x0 # int16_t
    m_nLocalReference = 0x2 # int16_t
    m_nLocalBonemask = 0x4 # int16_t
    m_nDstResult = 0x6 # int16_t
    m_nSrcResult = 0x8 # int16_t
    m_bSpline = 0xA # bool
    m_flVar1 = 0xC # float
    m_flVar2 = 0x10 # float
    m_nLineNumber = 0x14 # int16_t

class CSeqCmdSeqDesc:
    m_sName = 0x0 # CBufferString
    m_flags = 0x10 # CSeqSeqDescFlag
    m_transition = 0x1C # CSeqTransition
    m_nFrameRangeSequence = 0x24 # int16_t
    m_nFrameCount = 0x26 # int16_t
    m_flFPS = 0x28 # float
    m_nSubCycles = 0x2C # int16_t
    m_numLocalResults = 0x2E # int16_t
    m_cmdLayerArray = 0x30 # CUtlVector<CSeqCmdLayer>
    m_eventArray = 0x48 # CUtlVector<CAnimEventDefinition>
    m_activityArray = 0x60 # CUtlVector<CAnimActivity>
    m_poseSettingArray = 0x78 # CUtlVector<CSeqPoseSetting>

class CSeqIKLock:
    m_flPosWeight = 0x0 # float
    m_flAngleWeight = 0x4 # float
    m_nLocalBone = 0x8 # int16_t
    m_bBonesOrientedAlongPositiveX = 0xA # bool

class CSeqMultiFetch:
    m_flags = 0x0 # CSeqMultiFetchFlag
    m_localReferenceArray = 0x8 # CUtlVector<int16_t>
    m_nGroupSize = 0x20 # int32_t[2]
    m_nLocalPose = 0x28 # int32_t[2]
    m_poseKeyArray0 = 0x30 # CUtlVector<float>
    m_poseKeyArray1 = 0x48 # CUtlVector<float>
    m_nLocalCyclePoseParameter = 0x60 # int32_t
    m_bCalculatePoseParameters = 0x64 # bool
    m_bFixedBlendWeight = 0x65 # bool
    m_flFixedBlendWeightVals = 0x68 # float[2]

class CSeqMultiFetchFlag:
    m_bRealtime = 0x0 # bool
    m_bCylepose = 0x1 # bool
    m_b0D = 0x2 # bool
    m_b1D = 0x3 # bool
    m_b2D = 0x4 # bool
    m_b2D_TRI = 0x5 # bool

class CSeqPoseParamDesc:
    m_sName = 0x0 # CBufferString
    m_flStart = 0x10 # float
    m_flEnd = 0x14 # float
    m_flLoop = 0x18 # float
    m_bLooping = 0x1C # bool

class CSeqPoseSetting:
    m_sPoseParameter = 0x0 # CBufferString
    m_sAttachment = 0x10 # CBufferString
    m_sReferenceSequence = 0x20 # CBufferString
    m_flValue = 0x30 # float
    m_bX = 0x34 # bool
    m_bY = 0x35 # bool
    m_bZ = 0x36 # bool
    m_eType = 0x38 # int32_t

class CSeqS1SeqDesc:
    m_sName = 0x0 # CBufferString
    m_flags = 0x10 # CSeqSeqDescFlag
    m_fetch = 0x20 # CSeqMultiFetch
    m_nLocalWeightlist = 0x90 # int32_t
    m_autoLayerArray = 0x98 # CUtlVector<CSeqAutoLayer>
    m_IKLockArray = 0xB0 # CUtlVector<CSeqIKLock>
    m_transition = 0xC8 # CSeqTransition
    m_SequenceKeys = 0xD0 # KeyValues3
    m_LegacyKeyValueText = 0xE0 # CBufferString
    m_activityArray = 0xF0 # CUtlVector<CAnimActivity>
    m_footMotion = 0x108 # CUtlVector<CFootMotion>

class CSeqScaleSet:
    m_sName = 0x0 # CBufferString
    m_bRootOffset = 0x10 # bool
    m_vRootOffset = 0x14 # Vector
    m_nLocalBoneArray = 0x20 # CUtlVector<int16_t>
    m_flBoneScaleArray = 0x38 # CUtlVector<float>

class CSeqSeqDescFlag:
    m_bLooping = 0x0 # bool
    m_bSnap = 0x1 # bool
    m_bAutoplay = 0x2 # bool
    m_bPost = 0x3 # bool
    m_bHidden = 0x4 # bool
    m_bMulti = 0x5 # bool
    m_bLegacyDelta = 0x6 # bool
    m_bLegacyWorldspace = 0x7 # bool
    m_bLegacyCyclepose = 0x8 # bool
    m_bLegacyRealtime = 0x9 # bool
    m_bModelDoc = 0xA # bool

class CSeqSynthAnimDesc:
    m_sName = 0x0 # CBufferString
    m_flags = 0x10 # CSeqSeqDescFlag
    m_transition = 0x1C # CSeqTransition
    m_nLocalBaseReference = 0x24 # int16_t
    m_nLocalBoneMask = 0x26 # int16_t
    m_activityArray = 0x28 # CUtlVector<CAnimActivity>

class CSeqTransition:
    m_flFadeInTime = 0x0 # float
    m_flFadeOutTime = 0x4 # float

class CSequenceFinishedAnimTag: # CAnimTagBase
    m_sequenceName = 0x50 # CUtlString

class CSequenceGroupData:
    m_sName = 0x10 # CBufferString
    m_nFlags = 0x20 # uint32_t
    m_localSequenceNameArray = 0x28 # CUtlVector<CBufferString>
    m_localS1SeqDescArray = 0x40 # CUtlVector<CSeqS1SeqDesc>
    m_localMultiSeqDescArray = 0x58 # CUtlVector<CSeqS1SeqDesc>
    m_localSynthAnimDescArray = 0x70 # CUtlVector<CSeqSynthAnimDesc>
    m_localCmdSeqDescArray = 0x88 # CUtlVector<CSeqCmdSeqDesc>
    m_localBoneMaskArray = 0xA0 # CUtlVector<CSeqBoneMaskList>
    m_localScaleSetArray = 0xB8 # CUtlVector<CSeqScaleSet>
    m_localBoneNameArray = 0xD0 # CUtlVector<CBufferString>
    m_localNodeName = 0xE8 # CBufferString
    m_localPoseParamArray = 0xF8 # CUtlVector<CSeqPoseParamDesc>
    m_keyValues = 0x110 # KeyValues3
    m_localIKAutoplayLockArray = 0x120 # CUtlVector<CSeqIKLock>

class CSequenceUpdateNode: # CLeafUpdateNode
    m_paramSpans = 0x60 # CParamSpanUpdater
    m_tags = 0x78 # CUtlVector<TagSpan_t>
    m_hSequence = 0x94 # HSequence
    m_playbackSpeed = 0x98 # float
    m_duration = 0x9C # float
    m_bLoop = 0xA0 # bool

class CSetFacingUpdateNode: # CUnaryUpdateNode
    m_facingMode = 0x68 # FacingMode
    m_bResetChild = 0x6C # bool

class CSetParameterActionUpdater: # CAnimActionUpdater
    m_hParam = 0x18 # CAnimParamHandle
    m_value = 0x1A # CAnimVariant

class CSingleFrameUpdateNode: # CLeafUpdateNode
    m_actions = 0x58 # CUtlVector<CSmartPtr<CAnimActionUpdater>>
    m_hPoseCacheHandle = 0x70 # CPoseHandle
    m_hSequence = 0x74 # HSequence
    m_flCycle = 0x78 # float

class CSlopeComponentUpdater: # CAnimComponentUpdater
    m_flTraceDistance = 0x34 # float
    m_hSlopeAngle = 0x38 # CAnimParamHandle
    m_hSlopeAngleFront = 0x3A # CAnimParamHandle
    m_hSlopeAngleSide = 0x3C # CAnimParamHandle
    m_hSlopeHeading = 0x3E # CAnimParamHandle
    m_hSlopeNormal = 0x40 # CAnimParamHandle
    m_hSlopeNormal_WorldSpace = 0x42 # CAnimParamHandle

class CSlowDownOnSlopesUpdateNode: # CUnaryUpdateNode
    m_flSlowDownStrength = 0x68 # float

class CSolveIKChainUpdateNode: # CUnaryUpdateNode
    m_targetHandles = 0x68 # CUtlVector<CSolveIKTargetHandle_t>
    m_opFixedData = 0x80 # SolveIKChainPoseOpFixedSettings_t

class CSolveIKTargetHandle_t:
    m_positionHandle = 0x0 # CAnimParamHandle
    m_orientationHandle = 0x2 # CAnimParamHandle

class CSpeedScaleUpdateNode: # CUnaryUpdateNode
    m_paramIndex = 0x68 # CAnimParamHandle

class CStanceOverrideUpdateNode: # CUnaryUpdateNode
    m_footStanceInfo = 0x68 # CUtlVector<StanceInfo_t>
    m_pStanceSourceNode = 0x80 # CAnimUpdateNodeRef
    m_hParameter = 0x90 # CAnimParamHandle
    m_eMode = 0x94 # StanceOverrideMode

class CStanceScaleUpdateNode: # CUnaryUpdateNode
    m_hParam = 0x68 # CAnimParamHandle

class CStateActionUpdater:
    m_pAction = 0x0 # CSmartPtr<CAnimActionUpdater>
    m_eBehavior = 0x8 # StateActionBehavior

class CStateMachineComponentUpdater: # CAnimComponentUpdater
    m_stateMachine = 0x30 # CAnimStateMachineUpdater

class CStateMachineUpdateNode: # CAnimUpdateNodeBase
    m_stateMachine = 0x68 # CAnimStateMachineUpdater
    m_stateData = 0xC0 # CUtlVector<CStateNodeStateData>
    m_transitionData = 0xD8 # CUtlVector<CStateNodeTransitionData>
    m_bBlockWaningTags = 0xF4 # bool
    m_bLockStateWhenWaning = 0xF5 # bool

class CStateNodeStateData:
    m_pChild = 0x0 # CAnimUpdateNodeRef
    m_bExclusiveRootMotion = 0x0 # bitfield:1

class CStateNodeTransitionData:
    m_curve = 0x0 # CBlendCurve
    m_blendDuration = 0x8 # CAnimValue<float>
    m_resetCycleValue = 0x10 # CAnimValue<float>
    m_bReset = 0x0 # bitfield:1
    m_resetCycleOption = 0x0 # bitfield:3

class CStateUpdateData:
    m_name = 0x0 # CUtlString
    m_hScript = 0x8 # AnimScriptHandle
    m_transitionIndices = 0x10 # CUtlVector<int32_t>
    m_actions = 0x28 # CUtlVector<CStateActionUpdater>
    m_stateID = 0x40 # AnimStateID
    m_bIsStartState = 0x0 # bitfield:1
    m_bIsEndState = 0x0 # bitfield:1
    m_bIsPassthrough = 0x0 # bitfield:1

class CStaticPoseCache:
    m_poses = 0x10 # CUtlVector<CCachedPose>
    m_nBoneCount = 0x28 # int32_t
    m_nMorphCount = 0x2C # int32_t

class CStaticPoseCacheBuilder: # CStaticPoseCache

class CStepsRemainingMetricEvaluator: # CMotionMetricEvaluator
    m_footIndices = 0x50 # CUtlVector<int32_t>
    m_flMinStepsRemaining = 0x68 # float

class CStopAtGoalUpdateNode: # CUnaryUpdateNode
    m_flOuterRadius = 0x6C # float
    m_flInnerRadius = 0x70 # float
    m_flMaxScale = 0x74 # float
    m_flMinScale = 0x78 # float
    m_damping = 0x80 # CAnimInputDamping

class CStringAnimTag: # CAnimTagBase

class CSubtractUpdateNode: # CBinaryUpdateNode
    m_footMotionTiming = 0x8C # BinaryNodeChildOption
    m_bApplyToFootMotion = 0x90 # bool
    m_bApplyChannelsSeparately = 0x91 # bool
    m_bUseModelSpace = 0x92 # bool

class CSymbolAnimParameter: # CConcreteAnimParameter
    m_defaultValue = 0x78 # CGlobalSymbol

class CTaskStatusAnimTag: # CAnimTagBase

class CTiltTwistConstraint: # CBaseConstraint
    m_nTargetAxis = 0x70 # int32_t
    m_nSlaveAxis = 0x74 # int32_t

class CTimeRemainingMetricEvaluator: # CMotionMetricEvaluator
    m_bMatchByTimeRemaining = 0x50 # bool
    m_flMaxTimeRemaining = 0x54 # float
    m_bFilterByTimeRemaining = 0x58 # bool
    m_flMinTimeRemaining = 0x5C # float

class CToggleComponentActionUpdater: # CAnimActionUpdater
    m_componentID = 0x18 # AnimComponentID
    m_bSetEnabled = 0x1C # bool

class CTransitionUpdateData:
    m_srcStateIndex = 0x0 # uint8_t
    m_destStateIndex = 0x1 # uint8_t
    m_bDisabled = 0x0 # bitfield:1

class CTurnHelperUpdateNode: # CUnaryUpdateNode
    m_facingTarget = 0x6C # AnimValueSource
    m_turnStartTimeOffset = 0x70 # float
    m_turnDuration = 0x74 # float
    m_bMatchChildDuration = 0x78 # bool
    m_manualTurnOffset = 0x7C # float
    m_bUseManualTurnOffset = 0x80 # bool

class CTwistConstraint: # CBaseConstraint
    m_bInverse = 0x70 # bool
    m_qParentBindRotation = 0x80 # Quaternion
    m_qChildBindRotation = 0x90 # Quaternion

class CTwoBoneIKUpdateNode: # CUnaryUpdateNode
    m_opFixedData = 0x70 # TwoBoneIKSettings_t

class CUnaryUpdateNode: # CAnimUpdateNodeBase
    m_pChildNode = 0x58 # CAnimUpdateNodeRef

class CVPhysXSurfacePropertiesList:
    m_surfacePropertiesList = 0x0 # CUtlVector<CPhysSurfaceProperties*>

class CVectorAnimParameter: # CConcreteAnimParameter
    m_defaultValue = 0x78 # Vector
    m_bInterpolate = 0x84 # bool

class CVectorQuantizer:
    m_centroidVectors = 0x0 # CUtlVector<float>
    m_nCentroids = 0x18 # int32_t
    m_nDimensions = 0x1C # int32_t

class CVirtualAnimParameter: # CAnimParameterBase
    m_expressionString = 0x68 # CUtlString
    m_eParamType = 0x70 # AnimParamType_t

class CWayPointHelperUpdateNode: # CUnaryUpdateNode
    m_flStartCycle = 0x6C # float
    m_flEndCycle = 0x70 # float
    m_bOnlyGoals = 0x74 # bool
    m_bPreventOvershoot = 0x75 # bool
    m_bPreventUndershoot = 0x76 # bool

class CZeroPoseUpdateNode: # CLeafUpdateNode

class ChainToSolveData_t:
    m_nChainIndex = 0x0 # int32_t
    m_SolverSettings = 0x4 # IKSolverSettings_t
    m_TargetSettings = 0x10 # IKTargetSettings_t
    m_DebugSetting = 0x38 # SolveIKChainAnimNodeDebugSetting
    m_flDebugNormalizedValue = 0x3C # float
    m_vDebugOffset = 0x40 # VectorAligned

class ConfigIndex:
    m_nGroup = 0x0 # uint16_t
    m_nConfig = 0x2 # uint16_t

class DynamicMeshDeformParams_t:
    m_flTensionCompressScale = 0x0 # float
    m_flTensionStretchScale = 0x4 # float
    m_bRecomputeSmoothNormalsAfterAnimation = 0x8 # bool
    m_bComputeDynamicMeshTensionAfterAnimation = 0x9 # bool

class FollowAttachmentSettings_t:
    m_attachment = 0x0 # CAnimAttachment
    m_boneIndex = 0x80 # int32_t
    m_bMatchTranslation = 0x84 # bool
    m_bMatchRotation = 0x85 # bool

class FootFixedData_t:
    m_vToeOffset = 0x0 # VectorAligned
    m_vHeelOffset = 0x10 # VectorAligned
    m_nTargetBoneIndex = 0x20 # int32_t
    m_nAnkleBoneIndex = 0x24 # int32_t
    m_nIKAnchorBoneIndex = 0x28 # int32_t
    m_ikChainIndex = 0x2C # int32_t
    m_flMaxIKLength = 0x30 # float
    m_nFootIndex = 0x34 # int32_t
    m_nTagIndex = 0x38 # int32_t
    m_flMaxRotationLeft = 0x3C # float
    m_flMaxRotationRight = 0x40 # float

class FootFixedSettings:
    m_traceSettings = 0x0 # TraceSettings_t
    m_vFootBaseBindPosePositionMS = 0x10 # VectorAligned
    m_flFootBaseLength = 0x20 # float
    m_flMaxRotationLeft = 0x24 # float
    m_flMaxRotationRight = 0x28 # float
    m_footstepLandedTagIndex = 0x2C # int32_t
    m_bEnableTracing = 0x30 # bool
    m_flTraceAngleBlend = 0x34 # float
    m_nDisableTagIndex = 0x38 # int32_t
    m_nFootIndex = 0x3C # int32_t

class FootLockPoseOpFixedSettings:
    m_footInfo = 0x0 # CUtlVector<FootFixedData_t>
    m_hipDampingSettings = 0x18 # CAnimInputDamping
    m_nHipBoneIndex = 0x28 # int32_t
    m_ikSolverType = 0x2C # IKSolverType
    m_bApplyTilt = 0x30 # bool
    m_bApplyHipDrop = 0x31 # bool
    m_bAlwaysUseFallbackHinge = 0x32 # bool
    m_bApplyFootRotationLimits = 0x33 # bool
    m_bApplyLegTwistLimits = 0x34 # bool
    m_flMaxFootHeight = 0x38 # float
    m_flExtensionScale = 0x3C # float
    m_flMaxLegTwist = 0x40 # float
    m_bEnableLockBreaking = 0x44 # bool
    m_flLockBreakTolerance = 0x48 # float
    m_flLockBlendTime = 0x4C # float
    m_bEnableStretching = 0x50 # bool
    m_flMaxStretchAmount = 0x54 # float
    m_flStretchExtensionScale = 0x58 # float

class FootPinningPoseOpFixedData_t:
    m_footInfo = 0x0 # CUtlVector<FootFixedData_t>
    m_flBlendTime = 0x18 # float
    m_flLockBreakDistance = 0x1C # float
    m_flMaxLegTwist = 0x20 # float
    m_nHipBoneIndex = 0x24 # int32_t
    m_bApplyLegTwistLimits = 0x28 # bool
    m_bApplyFootRotationLimits = 0x29 # bool

class FootStepTrigger:
    m_tags = 0x0 # CUtlVector<int32_t>
    m_nFootIndex = 0x18 # int32_t
    m_triggerPhase = 0x1C # StepPhase

class HSequence:
    m_Value = 0x0 # int32_t

class HitReactFixedSettings_t:
    m_nWeightListIndex = 0x0 # int32_t
    m_nEffectedBoneCount = 0x4 # int32_t
    m_flMaxImpactForce = 0x8 # float
    m_flMinImpactForce = 0xC # float
    m_flWhipImpactScale = 0x10 # float
    m_flCounterRotationScale = 0x14 # float
    m_flDistanceFadeScale = 0x18 # float
    m_flPropagationScale = 0x1C # float
    m_flWhipDelay = 0x20 # float
    m_flSpringStrength = 0x24 # float
    m_flWhipSpringStrength = 0x28 # float
    m_flMaxAngleRadians = 0x2C # float
    m_nHipBoneIndex = 0x30 # int32_t
    m_flHipBoneTranslationScale = 0x34 # float
    m_flHipDipSpringStrength = 0x38 # float
    m_flHipDipImpactScale = 0x3C # float
    m_flHipDipDelay = 0x40 # float

class IKBoneNameAndIndex_t:
    m_Name = 0x0 # CUtlString

class IKDemoCaptureSettings_t:
    m_parentBoneName = 0x0 # CUtlString
    m_eMode = 0x8 # IKChannelMode
    m_ikChainName = 0x10 # CUtlString
    m_oneBoneStart = 0x18 # CUtlString
    m_oneBoneEnd = 0x20 # CUtlString

class IKSolverSettings_t:
    m_SolverType = 0x0 # IKSolverType
    m_nNumIterations = 0x4 # int32_t

class IKTargetSettings_t:
    m_TargetSource = 0x0 # IKTargetSource
    m_Bone = 0x8 # IKBoneNameAndIndex_t
    m_AnimgraphParameterNamePosition = 0x18 # AnimParamID
    m_AnimgraphParameterNameOrientation = 0x1C # AnimParamID
    m_TargetCoordSystem = 0x20 # IKTargetCoordinateSystem

class JiggleBoneSettingsList_t:
    m_boneSettings = 0x0 # CUtlVector<JiggleBoneSettings_t>

class JiggleBoneSettings_t:
    m_nBoneIndex = 0x0 # int32_t
    m_flSpringStrength = 0x4 # float
    m_flMaxTimeStep = 0x8 # float
    m_flDamping = 0xC # float
    m_vBoundsMaxLS = 0x10 # Vector
    m_vBoundsMinLS = 0x1C # Vector
    m_eSimSpace = 0x28 # JiggleBoneSimSpace

class LookAtBone_t:
    m_index = 0x0 # int32_t
    m_weight = 0x4 # float

class LookAtOpFixedSettings_t:
    m_attachment = 0x0 # CAnimAttachment
    m_damping = 0x80 # CAnimInputDamping
    m_bones = 0x90 # CUtlVector<LookAtBone_t>
    m_flYawLimit = 0xA8 # float
    m_flPitchLimit = 0xAC # float
    m_flHysteresisInnerAngle = 0xB0 # float
    m_flHysteresisOuterAngle = 0xB4 # float
    m_bRotateYawForward = 0xB8 # bool
    m_bMaintainUpDirection = 0xB9 # bool
    m_bTargetIsPosition = 0xBA # bool
    m_bUseHysteresis = 0xBB # bool

class MaterialGroup_t:
    m_name = 0x0 # CUtlString
    m_materials = 0x8 # CUtlVector<CStrongHandle<InfoForResourceTypeIMaterial2>>

class ModelBoneFlexDriverControl_t:
    m_nBoneComponent = 0x0 # ModelBoneFlexComponent_t
    m_flexController = 0x8 # CUtlString
    m_flexControllerToken = 0x10 # uint32_t
    m_flMin = 0x14 # float
    m_flMax = 0x18 # float

class ModelBoneFlexDriver_t:
    m_boneName = 0x0 # CUtlString
    m_boneNameToken = 0x8 # uint32_t
    m_controls = 0x10 # CUtlVector<ModelBoneFlexDriverControl_t>

class ModelSkeletonData_t:
    m_boneName = 0x0 # CUtlVector<CUtlString>
    m_nParent = 0x18 # CUtlVector<int16_t>
    m_boneSphere = 0x30 # CUtlVector<float>
    m_nFlag = 0x48 # CUtlVector<uint32_t>
    m_bonePosParent = 0x60 # CUtlVector<Vector>
    m_boneRotParent = 0x78 # CUtlVector<QuaternionStorage>
    m_boneScaleParent = 0x90 # CUtlVector<float>

class MoodAnimationLayer_t:
    m_sName = 0x0 # CUtlString
    m_bActiveListening = 0x8 # bool
    m_bActiveTalking = 0x9 # bool
    m_layerAnimations = 0x10 # CUtlVector<MoodAnimation_t>
    m_flIntensity = 0x28 # CRangeFloat
    m_flDurationScale = 0x30 # CRangeFloat
    m_bScaleWithInts = 0x38 # bool
    m_flNextStart = 0x3C # CRangeFloat
    m_flStartOffset = 0x44 # CRangeFloat
    m_flEndOffset = 0x4C # CRangeFloat
    m_flFadeIn = 0x54 # float
    m_flFadeOut = 0x58 # float

class MoodAnimation_t:
    m_sName = 0x0 # CUtlString
    m_flWeight = 0x8 # float

class MotionBlendItem:
    m_pChild = 0x0 # CSmartPtr<CMotionNode>
    m_flKeyValue = 0x8 # float

class MotionDBIndex:
    m_nIndex = 0x0 # uint32_t

class MotionIndex:
    m_nGroup = 0x0 # uint16_t
    m_nMotion = 0x2 # uint16_t

class NmCompressionSettings_t:
    m_translationRangeX = 0x0 # NmCompressionSettings_t::QuantizationRange_t
    m_translationRangeY = 0x8 # NmCompressionSettings_t::QuantizationRange_t
    m_translationRangeZ = 0x10 # NmCompressionSettings_t::QuantizationRange_t
    m_scaleRange = 0x18 # NmCompressionSettings_t::QuantizationRange_t
    m_constantRotation = 0x20 # Quaternion
    m_bIsRotationStatic = 0x30 # bool
    m_bIsTranslationStatic = 0x31 # bool
    m_bIsScaleStatic = 0x32 # bool

class NmCompressionSettings_t_QuantizationRange_t:
    m_flRangeStart = 0x0 # float
    m_flRangeLength = 0x4 # float

class NmPercent_t:
    m_flValue = 0x0 # float

class NmSyncTrackTimeRange_t:
    m_startTime = 0x0 # NmSyncTrackTime_t
    m_endTime = 0x8 # NmSyncTrackTime_t

class NmSyncTrackTime_t:
    m_nEventIdx = 0x0 # int32_t
    m_percentageThrough = 0x4 # NmPercent_t

class ParamSpanSample_t:
    m_value = 0x0 # CAnimVariant
    m_flCycle = 0x14 # float

class ParamSpan_t:
    m_samples = 0x0 # CUtlVector<ParamSpanSample_t>
    m_hParam = 0x18 # CAnimParamHandle
    m_eParamType = 0x1A # AnimParamType_t
    m_flStartCycle = 0x1C # float
    m_flEndCycle = 0x20 # float

class PermModelDataAnimatedMaterialAttribute_t:
    m_AttributeName = 0x0 # CUtlString
    m_nNumChannels = 0x8 # int32_t

class PermModelData_t:
    m_name = 0x0 # CUtlString
    m_modelInfo = 0x8 # PermModelInfo_t
    m_ExtParts = 0x60 # CUtlVector<PermModelExtPart_t>
    m_refMeshes = 0x78 # CUtlVector<CStrongHandle<InfoForResourceTypeCRenderMesh>>
    m_refMeshGroupMasks = 0x90 # CUtlVector<uint64_t>
    m_refPhysGroupMasks = 0xA8 # CUtlVector<uint64_t>
    m_refLODGroupMasks = 0xC0 # CUtlVector<uint8_t>
    m_lodGroupSwitchDistances = 0xD8 # CUtlVector<float>
    m_refPhysicsData = 0xF0 # CUtlVector<CStrongHandle<InfoForResourceTypeCPhysAggregateData>>
    m_refPhysicsHitboxData = 0x108 # CUtlVector<CStrongHandle<InfoForResourceTypeCPhysAggregateData>>
    m_refAnimGroups = 0x120 # CUtlVector<CStrongHandle<InfoForResourceTypeCAnimationGroup>>
    m_refSequenceGroups = 0x138 # CUtlVector<CStrongHandle<InfoForResourceTypeCSequenceGroupData>>
    m_meshGroups = 0x150 # CUtlVector<CUtlString>
    m_materialGroups = 0x168 # CUtlVector<MaterialGroup_t>
    m_nDefaultMeshGroupMask = 0x180 # uint64_t
    m_modelSkeleton = 0x188 # ModelSkeletonData_t
    m_remappingTable = 0x230 # CUtlVector<int16_t>
    m_remappingTableStarts = 0x248 # CUtlVector<uint16_t>
    m_boneFlexDrivers = 0x260 # CUtlVector<ModelBoneFlexDriver_t>
    m_pModelConfigList = 0x278 # CModelConfigList*
    m_BodyGroupsHiddenInTools = 0x280 # CUtlVector<CUtlString>
    m_refAnimIncludeModels = 0x298 # CUtlVector<CStrongHandle<InfoForResourceTypeCModel>>
    m_AnimatedMaterialAttributes = 0x2B0 # CUtlVector<PermModelDataAnimatedMaterialAttribute_t>

class PermModelExtPart_t:
    m_Transform = 0x0 # CTransform
    m_Name = 0x20 # CUtlString
    m_nParent = 0x28 # int32_t
    m_refModel = 0x30 # CStrongHandle<InfoForResourceTypeCModel>

class PermModelInfo_t:
    m_nFlags = 0x0 # uint32_t
    m_vHullMin = 0x4 # Vector
    m_vHullMax = 0x10 # Vector
    m_vViewMin = 0x1C # Vector
    m_vViewMax = 0x28 # Vector
    m_flMass = 0x34 # float
    m_vEyePosition = 0x38 # Vector
    m_flMaxEyeDeflection = 0x44 # float
    m_sSurfaceProperty = 0x48 # CUtlString
    m_keyValueText = 0x50 # CUtlString

class PhysSoftbodyDesc_t:
    m_ParticleBoneHash = 0x0 # CUtlVector<uint32_t>
    m_Particles = 0x18 # CUtlVector<RnSoftbodyParticle_t>
    m_Springs = 0x30 # CUtlVector<RnSoftbodySpring_t>
    m_Capsules = 0x48 # CUtlVector<RnSoftbodyCapsule_t>
    m_InitPose = 0x60 # CUtlVector<CTransform>
    m_ParticleBoneName = 0x78 # CUtlVector<CUtlString>

class RenderHairStrandInfo_t:
    m_nGuideIdx = 0x0 # uint32_t[3]
    m_nBaseTriIdx = 0xC # uint32_t
    m_vGuideBarycentric = 0x10 # Vector2D
    m_vBaseBarycentric = 0x18 # Vector2D
    m_vRootOffset_flLengthScale = 0x20 # uint16_t[4]
    m_nPackedBaseMeshUv = 0x28 # uint32_t
    m_nPad = 0x2C # uint32_t

class RenderSkeletonBone_t:
    m_boneName = 0x0 # CUtlString
    m_parentName = 0x8 # CUtlString
    m_invBindPose = 0x10 # matrix3x4_t
    m_bbox = 0x40 # SkeletonBoneBounds_t
    m_flSphereRadius = 0x58 # float

class SampleCode:
    m_subCode = 0x0 # uint8_t[8]

class ScriptInfo_t:
    m_code = 0x0 # CUtlString
    m_paramsModified = 0x8 # CUtlVector<CAnimParamHandle>
    m_proxyReadParams = 0x20 # CUtlVector<int32_t>
    m_proxyWriteParams = 0x38 # CUtlVector<int32_t>
    m_eScriptType = 0x50 # AnimScriptType

class SkeletonAnimCapture_t:
    m_nEntIndex = 0x0 # CEntityIndex
    m_nEntParent = 0x4 # CEntityIndex
    m_ImportedCollision = 0x8 # CUtlVector<CEntityIndex>
    m_ModelName = 0x20 # CUtlString
    m_CaptureName = 0x28 # CUtlString
    m_ModelBindPose = 0x30 # CUtlVector<SkeletonAnimCapture_t::Bone_t>
    m_FeModelInitPose = 0x48 # CUtlVector<SkeletonAnimCapture_t::Bone_t>
    m_nFlexControllers = 0x60 # int32_t
    m_bPredicted = 0x64 # bool
    m_Frames = 0xA8 # CUtlVector<SkeletonAnimCapture_t::Frame_t>

class SkeletonAnimCapture_t_Bone_t:
    m_Name = 0x0 # CUtlString
    m_BindPose = 0x10 # CTransform
    m_nParent = 0x30 # int32_t

class SkeletonAnimCapture_t_Camera_t:
    m_tmCamera = 0x0 # CTransform
    m_flTime = 0x20 # float

class SkeletonAnimCapture_t_FrameStamp_t:
    m_flTime = 0x0 # float
    m_flEntitySimTime = 0x4 # float
    m_bTeleportTick = 0x8 # bool
    m_bPredicted = 0x9 # bool
    m_flCurTime = 0xC # float
    m_flRealTime = 0x10 # float
    m_nFrameCount = 0x14 # int32_t
    m_nTickCount = 0x18 # int32_t

class SkeletonAnimCapture_t_Frame_t:
    m_flTime = 0x0 # float
    m_Stamp = 0x4 # SkeletonAnimCapture_t::FrameStamp_t
    m_Transform = 0x20 # CTransform
    m_bTeleport = 0x40 # bool
    m_CompositeBones = 0x48 # CUtlVector<CTransform>
    m_SimStateBones = 0x60 # CUtlVector<CTransform>
    m_FeModelAnims = 0x78 # CUtlVector<CTransform>
    m_FeModelPos = 0x90 # CUtlVector<VectorAligned>
    m_FlexControllerWeights = 0xA8 # CUtlVector<float>

class SkeletonBoneBounds_t:
    m_vecCenter = 0x0 # Vector
    m_vecSize = 0xC # Vector

class SkeletonDemoDb_t:
    m_AnimCaptures = 0x0 # CUtlVector<SkeletonAnimCapture_t*>
    m_CameraTrack = 0x18 # CUtlVector<SkeletonAnimCapture_t::Camera_t>
    m_flRecordingTime = 0x30 # float

class SolveIKChainPoseOpFixedSettings_t:
    m_ChainsToSolveData = 0x0 # CUtlVector<ChainToSolveData_t>
    m_bMatchTargetOrientation = 0x18 # bool

class StanceInfo_t:
    m_vPosition = 0x0 # Vector
    m_flDirection = 0xC # float

class TagSpan_t:
    m_tagIndex = 0x0 # int32_t
    m_startCycle = 0x4 # float
    m_endCycle = 0x8 # float

class TraceSettings_t:
    m_flTraceHeight = 0x0 # float
    m_flTraceRadius = 0x4 # float

class TwoBoneIKSettings_t:
    m_endEffectorType = 0x0 # IkEndEffectorType
    m_endEffectorAttachment = 0x10 # CAnimAttachment
    m_targetType = 0x90 # IkTargetType
    m_targetAttachment = 0xA0 # CAnimAttachment
    m_targetBoneIndex = 0x120 # int32_t
    m_hPositionParam = 0x124 # CAnimParamHandle
    m_hRotationParam = 0x126 # CAnimParamHandle
    m_bAlwaysUseFallbackHinge = 0x128 # bool
    m_vLsFallbackHingeAxis = 0x130 # VectorAligned
    m_nFixedBoneIndex = 0x140 # int32_t
    m_nMiddleBoneIndex = 0x144 # int32_t
    m_nEndBoneIndex = 0x148 # int32_t
    m_bMatchTargetOrientation = 0x14C # bool
    m_bConstrainTwist = 0x14D # bool
    m_flMaxTwist = 0x150 # float

class VPhysXAggregateData_t:
    m_nFlags = 0x0 # uint16_t
    m_nRefCounter = 0x2 # uint16_t
    m_bonesHash = 0x8 # CUtlVector<uint32_t>
    m_boneNames = 0x20 # CUtlVector<CUtlString>
    m_indexNames = 0x38 # CUtlVector<uint16_t>
    m_indexHash = 0x50 # CUtlVector<uint16_t>
    m_bindPose = 0x68 # CUtlVector<matrix3x4a_t>
    m_parts = 0x80 # CUtlVector<VPhysXBodyPart_t>
    m_constraints2 = 0x98 # CUtlVector<VPhysXConstraint2_t>
    m_joints = 0xB0 # CUtlVector<VPhysXJoint_t>
    m_pFeModel = 0xC8 # PhysFeModelDesc_t*
    m_boneParents = 0xD0 # CUtlVector<uint16_t>
    m_surfacePropertyHashes = 0xE8 # CUtlVector<uint32_t>
    m_collisionAttributes = 0x100 # CUtlVector<VPhysXCollisionAttributes_t>
    m_debugPartNames = 0x118 # CUtlVector<CUtlString>
    m_embeddedKeyvalues = 0x130 # CUtlString

class VPhysXBodyPart_t:
    m_nFlags = 0x0 # uint32_t
    m_flMass = 0x4 # float
    m_rnShape = 0x8 # VPhysics2ShapeDef_t
    m_nCollisionAttributeIndex = 0x80 # uint16_t
    m_nReserved = 0x82 # uint16_t
    m_flInertiaScale = 0x84 # float
    m_flLinearDamping = 0x88 # float
    m_flAngularDamping = 0x8C # float
    m_bOverrideMassCenter = 0x90 # bool
    m_vMassCenterOverride = 0x94 # Vector

class VPhysXCollisionAttributes_t:
    m_CollisionGroup = 0x0 # uint32_t
    m_InteractAs = 0x8 # CUtlVector<uint32_t>
    m_InteractWith = 0x20 # CUtlVector<uint32_t>
    m_InteractExclude = 0x38 # CUtlVector<uint32_t>
    m_CollisionGroupString = 0x50 # CUtlString
    m_InteractAsStrings = 0x58 # CUtlVector<CUtlString>
    m_InteractWithStrings = 0x70 # CUtlVector<CUtlString>
    m_InteractExcludeStrings = 0x88 # CUtlVector<CUtlString>

class VPhysXConstraint2_t:
    m_nFlags = 0x0 # uint32_t
    m_nParent = 0x4 # uint16_t
    m_nChild = 0x6 # uint16_t
    m_params = 0x8 # VPhysXConstraintParams_t

class VPhysXConstraintParams_t:
    m_nType = 0x0 # int8_t
    m_nTranslateMotion = 0x1 # int8_t
    m_nRotateMotion = 0x2 # int8_t
    m_nFlags = 0x3 # int8_t
    m_anchor = 0x4 # Vector[2]
    m_axes = 0x1C # QuaternionStorage[2]
    m_maxForce = 0x3C # float
    m_maxTorque = 0x40 # float
    m_linearLimitValue = 0x44 # float
    m_linearLimitRestitution = 0x48 # float
    m_linearLimitSpring = 0x4C # float
    m_linearLimitDamping = 0x50 # float
    m_twistLowLimitValue = 0x54 # float
    m_twistLowLimitRestitution = 0x58 # float
    m_twistLowLimitSpring = 0x5C # float
    m_twistLowLimitDamping = 0x60 # float
    m_twistHighLimitValue = 0x64 # float
    m_twistHighLimitRestitution = 0x68 # float
    m_twistHighLimitSpring = 0x6C # float
    m_twistHighLimitDamping = 0x70 # float
    m_swing1LimitValue = 0x74 # float
    m_swing1LimitRestitution = 0x78 # float
    m_swing1LimitSpring = 0x7C # float
    m_swing1LimitDamping = 0x80 # float
    m_swing2LimitValue = 0x84 # float
    m_swing2LimitRestitution = 0x88 # float
    m_swing2LimitSpring = 0x8C # float
    m_swing2LimitDamping = 0x90 # float
    m_goalPosition = 0x94 # Vector
    m_goalOrientation = 0xA0 # QuaternionStorage
    m_goalAngularVelocity = 0xB0 # Vector
    m_driveSpringX = 0xBC # float
    m_driveSpringY = 0xC0 # float
    m_driveSpringZ = 0xC4 # float
    m_driveDampingX = 0xC8 # float
    m_driveDampingY = 0xCC # float
    m_driveDampingZ = 0xD0 # float
    m_driveSpringTwist = 0xD4 # float
    m_driveSpringSwing = 0xD8 # float
    m_driveSpringSlerp = 0xDC # float
    m_driveDampingTwist = 0xE0 # float
    m_driveDampingSwing = 0xE4 # float
    m_driveDampingSlerp = 0xE8 # float
    m_solverIterationCount = 0xEC # int32_t
    m_projectionLinearTolerance = 0xF0 # float
    m_projectionAngularTolerance = 0xF4 # float

class VPhysXJoint_t:
    m_nType = 0x0 # uint16_t
    m_nBody1 = 0x2 # uint16_t
    m_nBody2 = 0x4 # uint16_t
    m_nFlags = 0x6 # uint16_t
    m_Frame1 = 0x10 # CTransform
    m_Frame2 = 0x30 # CTransform
    m_bEnableCollision = 0x50 # bool
    m_bEnableLinearLimit = 0x51 # bool
    m_LinearLimit = 0x54 # VPhysXRange_t
    m_bEnableLinearMotor = 0x5C # bool
    m_vLinearTargetVelocity = 0x60 # Vector
    m_flMaxForce = 0x6C # float
    m_bEnableSwingLimit = 0x70 # bool
    m_SwingLimit = 0x74 # VPhysXRange_t
    m_bEnableTwistLimit = 0x7C # bool
    m_TwistLimit = 0x80 # VPhysXRange_t
    m_bEnableAngularMotor = 0x88 # bool
    m_vAngularTargetVelocity = 0x8C # Vector
    m_flMaxTorque = 0x98 # float
    m_flLinearFrequency = 0x9C # float
    m_flLinearDampingRatio = 0xA0 # float
    m_flAngularFrequency = 0xA4 # float
    m_flAngularDampingRatio = 0xA8 # float
    m_flFriction = 0xAC # float

class VPhysXRange_t:
    m_flMin = 0x0 # float
    m_flMax = 0x4 # float

class VPhysics2ShapeDef_t:
    m_spheres = 0x0 # CUtlVector<RnSphereDesc_t>
    m_capsules = 0x18 # CUtlVector<RnCapsuleDesc_t>
    m_hulls = 0x30 # CUtlVector<RnHullDesc_t>
    m_meshes = 0x48 # CUtlVector<RnMeshDesc_t>
    m_CollisionAttributeIndices = 0x60 # CUtlVector<uint16_t>

class WeightList:
    m_name = 0x0 # CUtlString
    m_weights = 0x8 # CUtlVector<float>
