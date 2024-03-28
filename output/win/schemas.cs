// Generated using https://github.com/a2x/cs2-dumper
// 2024-03-27 13:29:16.446880100 UTC

namespace CS2Dumper.Schemas {
    // Module: animationsystem.dll
    // Classes count: 253
    // Enums count: 70
    public static class Animationsystem {
        // Alignment: 4
        // Members count: 2
        public enum MoodTypeT : int {
            EMoodTypeHead = 0,
            EMoodTypeBody = 1
        }
        // Alignment: 4
        // Members count: 6
        public enum AnimationProcessingTypeT : int {
            AnimationProcessingServerSimulation = 0,
            AnimationProcessingClientSimulation = 1,
            AnimationProcessingClientPrediction = 2,
            AnimationProcessingClientInterpolation = 3,
            AnimationProcessingClientRender = 4,
            AnimationProcessingMax = 5
        }
        // Alignment: 4
        // Members count: 7
        public enum AnimationSnapshotTypeT : int {
            AnimationSnapshotServerSimulation = 0,
            AnimationSnapshotClientSimulation = 1,
            AnimationSnapshotClientPrediction = 2,
            AnimationSnapshotClientInterpolation = 3,
            AnimationSnapshotClientRender = 4,
            AnimationSnapshotFinalComposite = 5,
            AnimationSnapshotMax = 6
        }
        // Alignment: 4
        // Members count: 17
        public enum SeqCmdT : int {
            SeqCmdNop = 0,
            SeqCmdLinearDelta = 1,
            SeqCmdFetchFrameRange = 2,
            SeqCmdSlerp = 3,
            SeqCmdAdd = 4,
            SeqCmdSubtract = 5,
            SeqCmdScale = 6,
            SeqCmdCopy = 7,
            SeqCmdBlend = 8,
            SeqCmdWorldspace = 9,
            SeqCmdSequence = 10,
            SeqCmdFetchCycle = 11,
            SeqCmdFetchFrame = 12,
            SeqCmdIkLockInPlace = 13,
            SeqCmdIkRestoreAll = 14,
            SeqCmdReverseSequence = 15,
            SeqCmdTransform = 16
        }
        // Alignment: 4
        // Members count: 4
        public enum SeqPoseSettingT : int {
            SeqPoseSettingConstant = 0,
            SeqPoseSettingRotation = 1,
            SeqPoseSettingPosition = 2,
            SeqPoseSettingVelocity = 3
        }
        // Alignment: 4
        // Members count: 18
        public enum ParticleAttachmentT : int {
            PattachInvalid = -1,
            PattachAbsorigin = 0,
            PattachAbsoriginFollow = 1,
            PattachCustomorigin = 2,
            PattachCustomoriginFollow = 3,
            PattachPoint = 4,
            PattachPointFollow = 5,
            PattachEyesFollow = 6,
            PattachOverheadFollow = 7,
            PattachWorldorigin = 8,
            PattachRootboneFollow = 9,
            PattachRenderoriginFollow = 10,
            PattachMainView = 11,
            PattachWaterwake = 12,
            PattachCenterFollow = 13,
            PattachCustomGameState1 = 14,
            PattachHealthbar = 15,
            MaxPattachTypes = 16
        }
        // Alignment: 1
        // Members count: 9
        public enum AnimParamTypeT : sbyte {
            AnimparamUnknown = 0,
            AnimparamBool = 1,
            AnimparamEnum = 2,
            AnimparamInt = 3,
            AnimparamFloat = 4,
            AnimparamVector = 5,
            AnimparamQuaternion = 6,
            AnimparamGlobalsymbol = 7,
            AnimparamCount = 8
        }
        // Alignment: 4
        // Members count: 4
        public enum BoneTransformSpaceT : int {
            BoneTransformSpaceInvalid = -1,
            BoneTransformSpaceParent = 0,
            BoneTransformSpaceModel = 1,
            BoneTransformSpaceWorld = 2
        }
        // Alignment: 4
        // Members count: 13
        public enum AnimParamButtonT : int {
            AnimparamButtonNone = 0,
            AnimparamButtonDpadUp = 1,
            AnimparamButtonDpadRight = 2,
            AnimparamButtonDpadDown = 3,
            AnimparamButtonDpadLeft = 4,
            AnimparamButtonA = 5,
            AnimparamButtonB = 6,
            AnimparamButtonX = 7,
            AnimparamButtonY = 8,
            AnimparamButtonLeftShoulder = 9,
            AnimparamButtonRightShoulder = 10,
            AnimparamButtonLtrigger = 11,
            AnimparamButtonRtrigger = 12
        }
        // Alignment: 4
        // Members count: 3
        public enum AnimParamNetworkSetting : int {
            Auto = 0,
            AlwaysNetwork = 1,
            NeverNetwork = 2
        }
        // Alignment: 4
        // Members count: 3
        public enum FootstepLandedFootSoundTypeT : int {
            FootsoundLeft = 0,
            FootsoundRight = 1,
            FootsoundUseOverrideSound = 2
        }
        // Alignment: 4
        // Members count: 3
        public enum AnimPoseControl : int {
            NoPoseControl = 0,
            AbsolutePoseControl = 1,
            RelativePoseControl = 2
        }
        // Alignment: 4
        // Members count: 2
        public enum RagdollPoseControl : int {
            Absolute = 0,
            Relative = 1
        }
        // Alignment: 4
        // Members count: 5
        public enum VPhysXBodyPartTVPhysXFlagEnumT : int {
            FlagStatic = 1,
            FlagKinematic = 2,
            FlagJoint = 4,
            FlagMass = 8,
            FlagAlwaysDynamicOnClient = 16
        }
        // Alignment: 4
        // Members count: 4
        public enum VPhysXConstraintParamsTEnumFlags0T : int {
            Flag0ShiftInterpenetrate = 0,
            Flag0ShiftConstrain = 1,
            Flag0ShiftBreakableForce = 2,
            Flag0ShiftBreakableTorque = 3
        }
        // Alignment: 4
        // Members count: 3
        public enum VPhysXJointTFlagsT : int {
            JointFlagsNone = 0,
            JointFlagsBody1Fixed = 1,
            JointFlagsUseBlockSolver = 2
        }
        // Alignment: 4
        // Members count: 3
        public enum VPhysXAggregateDataTVPhysXFlagEnumT : int {
            FlagIsPolysoupGeometry = 1,
            FlagLevelCollision = 16,
            FlagIgnoreScaleObsoleteDoNotUse = 32
        }
        // Alignment: 4
        // Members count: 8
        public enum MeshDrawPrimitiveFlagsT : int {
            MeshDrawFlagsNone = 0,
            MeshDrawFlagsUseShadowFastPath = 1,
            MeshDrawFlagsUseCompressedNormalTangent = 2,
            MeshDrawInputLayoutIsNotMatchedToMaterial = 8,
            MeshDrawFlagsUseCompressedPerVertexLighting = 16,
            MeshDrawFlagsUseUncompressedPerVertexLighting = 32,
            MeshDrawFlagsCanBatchWithDynamicShaderConstants = 64,
            MeshDrawFlagsDrawLast = 128
        }
        // Alignment: 4
        // Members count: 22
        public enum ModelSkeletonDataTBoneFlagsT : int {
            FlagNoBoneFlags = 0,
            FlagBoneflexdriver = 4,
            FlagCloth = 8,
            FlagPhysics = 16,
            FlagAttachment = 32,
            FlagAnimation = 64,
            FlagMesh = 128,
            FlagHitbox = 256,
            FlagBoneUsedByVertexLod0 = 1024,
            FlagBoneUsedByVertexLod1 = 2048,
            FlagBoneUsedByVertexLod2 = 4096,
            FlagBoneUsedByVertexLod3 = 8192,
            FlagBoneUsedByVertexLod4 = 16384,
            FlagBoneUsedByVertexLod5 = 32768,
            FlagBoneUsedByVertexLod6 = 65536,
            FlagBoneUsedByVertexLod7 = 131072,
            FlagBoneMergeRead = 262144,
            FlagBoneMergeWrite = 524288,
            FlagAllBoneFlags = 1048575,
            BlendPrealigned = 1048576,
            FlagRigidlength = 2097152,
            FlagProcedural = 4194304
        }
        // Alignment: 4
        // Members count: 15
        public enum PermModelInfoTFlagEnum : int {
            FlagTranslucent = 1,
            FlagTranslucentTwoPass = 2,
            FlagModelIsRuntimeCombined = 4,
            FlagSource1Import = 8,
            FlagModelPartChild = 16,
            FlagNavGenNone = 32,
            FlagNavGenHull = 64,
            FlagNoForcedFade = 2048,
            FlagHasSkinnedMeshes = 1024,
            FlagDoNotCastShadows = 131072,
            FlagForcePhonemeCrossfade = 4096,
            FlagNoAnimEvents = 1048576,
            FlagAnimationDrivenFlexes = 2097152,
            FlagImplicitBindPoseSequence = 4194304,
            FlagModelDoc = 8388608
        }
        // Alignment: 4
        // Members count: 4
        public enum ModelBoneFlexComponentT : int {
            ModelBoneFlexInvalid = -1,
            ModelBoneFlexTx = 0,
            ModelBoneFlexTy = 1,
            ModelBoneFlexTz = 2
        }
        // Alignment: 4
        // Members count: 5
        public enum ModelConfigAttachmentTypeT : int {
            ModelConfigAttachmentInvalid = -1,
            ModelConfigAttachmentBoneOrAttachment = 0,
            ModelConfigAttachmentRootRelative = 1,
            ModelConfigAttachmentBonemerge = 2,
            ModelConfigAttachmentCount = 3
        }
        // Alignment: 4
        // Members count: 26
        public enum FlexOpCodeT : int {
            FlexOpConst = 1,
            FlexOpFetch1 = 2,
            FlexOpFetch2 = 3,
            FlexOpAdd = 4,
            FlexOpSub = 5,
            FlexOpMul = 6,
            FlexOpDiv = 7,
            FlexOpNeg = 8,
            FlexOpExp = 9,
            FlexOpOpen = 10,
            FlexOpClose = 11,
            FlexOpComma = 12,
            FlexOpMax = 13,
            FlexOpMin = 14,
            FlexOp2way0 = 15,
            FlexOp2way1 = 16,
            FlexOpNway = 17,
            FlexOpCombo = 18,
            FlexOpDominate = 19,
            FlexOpDmeLowerEyelid = 20,
            FlexOpDmeUpperEyelid = 21,
            FlexOpSqrt = 22,
            FlexOpRemapvalclamped = 23,
            FlexOpSin = 24,
            FlexOpCos = 25,
            FlexOpAbs = 26
        }
        // Alignment: 4
        // Members count: 4
        public enum MorphFlexControllerRemapTypeT : int {
            MorphFlexcontrollerRemapPassthru = 0,
            MorphFlexcontrollerRemap2way = 1,
            MorphFlexcontrollerRemapNway = 2,
            MorphFlexcontrollerRemapEyelid = 3
        }
        // Alignment: 4
        // Members count: 4
        public enum MorphBundleTypeT : int {
            MorphBundleTypeNone = 0,
            MorphBundleTypePositionSpeed = 1,
            MorphBundleTypeNormalWrinkle = 2,
            MorphBundleTypeCount = 3
        }
        // Alignment: 1
        // Members count: 5
        public enum MovementGaitT : sbyte {
            EInvalid = -1,
            EWalk = 0,
            EJog = 1,
            ERun = 2,
            ESprint = 3
        }
        // Alignment: 1
        // Members count: 3
        public enum CNmBoneMaskWeightInfoT : sbyte {
            Zero = 0,
            Mixed = 1,
            One = 2
        }
        // Alignment: 1
        // Members count: 4
        public enum NmFootPhaseT : sbyte {
            LeftFootDown = 0,
            RightFootPassing = 1,
            RightFootDown = 2,
            LeftFootPassing = 3
        }
        // Alignment: 1
        // Members count: 6
        public enum NmFootPhaseConditionT : sbyte {
            LeftFootDown = 0,
            LeftFootPassing = 1,
            LeftPhase = 4,
            RightFootDown = 2,
            RightFootPassing = 3,
            RightPhase = 5
        }
        // Alignment: 1
        // Members count: 3
        public enum NmTransitionRuleT : sbyte {
            AllowTransition = 0,
            ConditionallyAllowTransition = 1,
            BlockTransition = 2
        }
        // Alignment: 1
        // Members count: 4
        public enum NmTransitionRuleConditionT : sbyte {
            AnyAllowed = 0,
            FullyAllowed = 1,
            ConditionallyAllowed = 2,
            Blocked = 3
        }
        // Alignment: 4
        // Members count: 2
        public enum NmFrameSnapEventModeT : int {
            Floor = 0,
            Round = 1
        }
        // Alignment: 4
        // Members count: 4
        public enum IkChannelMode : int {
            TwoBone = 0,
            TwoBoneTranslate = 1,
            OneBone = 2,
            OneBoneTranslate = 3
        }
        // Alignment: 4
        // Members count: 2
        public enum EDemoBoneSelectionMode : int {
            CaptureAllBones = 0,
            CaptureSelectedBones = 1
        }
        // Alignment: 4
        // Members count: 37
        public enum AnimValueSource : int {
            MoveHeading = 0,
            MoveSpeed = 1,
            ForwardSpeed = 2,
            StrafeSpeed = 3,
            FacingHeading = 4,
            ManualFacingHeading = 5,
            LookHeading = 6,
            LookPitch = 7,
            LookDistance = 8,
            Parameter = 9,
            WayPointHeading = 10,
            WayPointDistance = 11,
            BoundaryRadius = 12,
            TargetMoveHeading = 13,
            TargetMoveSpeed = 14,
            AccelerationHeading = 15,
            AccelerationSpeed = 16,
            SlopeHeading = 17,
            SlopeAngle = 18,
            SlopePitch = 19,
            SlopeYaw = 20,
            GoalDistance = 21,
            AccelerationLeftRight = 22,
            AccelerationFrontBack = 23,
            RootMotionSpeed = 24,
            RootMotionTurnSpeed = 25,
            MoveHeadingRelativeToLookHeading = 26,
            MaxMoveSpeed = 27,
            FingerCurlThumb = 28,
            FingerCurlIndex = 29,
            FingerCurlMiddle = 30,
            FingerCurlRing = 31,
            FingerCurlPinky = 32,
            FingerSplayThumbIndex = 33,
            FingerSplayIndexMiddle = 34,
            FingerSplayMiddleRing = 35,
            FingerSplayRingPinky = 36
        }
        // Alignment: 4
        // Members count: 13
        public enum AnimVectorSource : int {
            MoveDirection = 0,
            FacingDirection = 1,
            LookDirection = 2,
            VectorParameter = 3,
            WayPointDirection = 4,
            Acceleration = 5,
            SlopeNormal = 6,
            SlopeNormalWorldSpace = 7,
            LookTarget = 8,
            LookTargetWorldSpace = 9,
            WayPointPosition = 10,
            GoalPosition = 11,
            RootMotionVelocity = 12
        }
        // Alignment: 4
        // Members count: 3
        public enum DampingSpeedFunction : int {
            NoDamping = 0,
            Constant = 1,
            Spring = 2
        }
        // Alignment: 4
        // Members count: 2
        public enum AnimNodeNetworkMode : int {
            ServerAuthoritative = 0,
            ClientSimulate = 1
        }
        // Alignment: 4
        // Members count: 4
        public enum StateActionBehavior : int {
            StatetagbehaviorActiveWhileCurrent = 0,
            StatetagbehaviorFireOnEnter = 1,
            StatetagbehaviorFireOnExit = 2,
            StatetagbehaviorFireOnEnterAndExit = 3
        }
        // Alignment: 4
        // Members count: 3
        public enum FieldNetworkOption : int {
            Auto = 0,
            ForceEnable = 1,
            ForceDisable = 2
        }
        // Alignment: 4
        // Members count: 8
        public enum FootFallTagFootT : int {
            Foot1 = 0,
            Foot2 = 1,
            Foot3 = 2,
            Foot4 = 3,
            Foot5 = 4,
            Foot6 = 5,
            Foot7 = 6,
            Foot8 = 7
        }
        // Alignment: 4
        // Members count: 2
        public enum MatterialAttributeTagTypeT : int {
            MaterialAttributeTagValue = 0,
            MaterialAttributeTagColor = 1
        }
        // Alignment: 1
        // Members count: 3
        public enum VelocityMetricMode : sbyte {
            DirectionOnly = 0,
            MagnitudeOnly = 1,
            DirectionAndMagnitude = 2
        }
        // Alignment: 4
        // Members count: 4
        public enum AimMatrixBlendMode : int {
            AimMatrixBlendModeNone = 0,
            AimMatrixBlendModeAdditive = 1,
            AimMatrixBlendModeModelSpaceAdditive = 2,
            AimMatrixBlendModeBoneMask = 3
        }
        // Alignment: 4
        // Members count: 4
        public enum BoneMaskBlendSpace : int {
            BlendSpaceParent = 0,
            BlendSpaceModel = 1,
            BlendSpaceModelRotationOnly = 2,
            BlendSpaceModelTranslationOnly = 3
        }
        // Alignment: 4
        // Members count: 3
        public enum JiggleBoneSimSpace : int {
            SimSpaceLocal = 0,
            SimSpaceModel = 1,
            SimSpaceWorld = 2
        }
        // Alignment: 4
        // Members count: 7
        public enum SolveIkChainAnimNodeDebugSetting : int {
            SolveikchainanimnodedebugsettingNone = 0,
            SolveikchainanimnodedebugsettingXAxisCircle = 1,
            SolveikchainanimnodedebugsettingYAxisCircle = 2,
            SolveikchainanimnodedebugsettingZAxisCircle = 3,
            SolveikchainanimnodedebugsettingForward = 4,
            SolveikchainanimnodedebugsettingUp = 5,
            SolveikchainanimnodedebugsettingLeft = 6
        }
        // Alignment: 2
        // Members count: 3
        public enum AnimScriptType : short {
            AnimscriptTypeInvalid = -1,
            AnimscriptFuseGeneral = 0,
            AnimscriptFuseStatemachine = 1
        }
        // Alignment: 4
        // Members count: 3
        public enum BinaryNodeTiming : int {
            UseChild1 = 0,
            UseChild2 = 1,
            SyncChildren = 2
        }
        // Alignment: 4
        // Members count: 2
        public enum BinaryNodeChildOption : int {
            Child1 = 0,
            Child2 = 1
        }
        // Alignment: 4
        // Members count: 4
        public enum BlendKeyType : int {
            BlendKeyUserValue = 0,
            BlendKeyVelocity = 1,
            BlendKeyDistance = 2,
            BlendKeyRemainingDistance = 3
        }
        // Alignment: 4
        // Members count: 2
        public enum Blend2DMode : int {
            Blend2DModeGeneral = 0,
            Blend2DModeDirectional = 1
        }
        // Alignment: 4
        // Members count: 4
        public enum ChoiceMethod : int {
            WeightedRandom = 0,
            WeightedRandomNoRepeat = 1,
            Iterate = 2,
            IterateRandom = 3
        }
        // Alignment: 4
        // Members count: 3
        public enum ChoiceChangeMethod : int {
            OnReset = 0,
            OnCycleEnd = 1,
            OnResetOrCycleEnd = 2
        }
        // Alignment: 4
        // Members count: 2
        public enum ChoiceBlendMethod : int {
            SingleBlendTime = 0,
            PerChoiceBlendTimes = 1
        }
        // Alignment: 4
        // Members count: 2
        public enum FootLockSubVisualization : int {
            FootlocksubvisualizationReachabilityAnalysis = 0,
            FootlocksubvisualizationIkSolve = 1
        }
        // Alignment: 4
        // Members count: 3
        public enum FootPinningTimingSource : int {
            FootMotion = 0,
            Tag = 1,
            Parameter = 2
        }
        // Alignment: 4
        // Members count: 2
        public enum StepPhase : int {
            StepPhaseOnGround = 0,
            StepPhaseInAir = 1
        }
        // Alignment: 4
        // Members count: 2
        public enum JumpCorrectionMethod : int {
            ScaleMotion = 0,
            AddCorrectionDelta = 1
        }
        // Alignment: 4
        // Members count: 3
        public enum SelectorTagBehaviorT : int {
            SelectorTagBehaviorOnWhileCurrent = 0,
            SelectorTagBehaviorOffWhenFinished = 1,
            SelectorTagBehaviorOffBeforeFinished = 2
        }
        // Alignment: 4
        // Members count: 2
        public enum StanceOverrideMode : int {
            Sequence = 0,
            Node = 1
        }
        // Alignment: 4
        // Members count: 5
        public enum ResetCycleOption : int {
            Beginning = 0,
            SameCycleAsSource = 1,
            InverseSourceCycle = 2,
            FixedValue = 3,
            SameTimeAsSource = 4
        }
        // Alignment: 4
        // Members count: 2
        public enum IkEndEffectorType : int {
            IkEndEffectorAttachment = 0,
            IkEndEffectorBone = 1
        }
        // Alignment: 4
        // Members count: 4
        public enum IkTargetType : int {
            IkTargetAttachment = 0,
            IkTargetBone = 1,
            IkTargetParameterModelSpace = 2,
            IkTargetParameterWorldSpace = 3
        }
        // Alignment: 1
        // Members count: 3
        public enum PoseTypeT : sbyte {
            PosetypeStatic = 0,
            PosetypeDynamic = 1,
            PosetypeInvalid = 255
        }
        // Alignment: 4
        // Members count: 5
        public enum CAnimationGraphVisualizerPrimitiveType : int {
            AnimationgraphvisualizerprimitivetypeText = 0,
            AnimationgraphvisualizerprimitivetypeSphere = 1,
            AnimationgraphvisualizerprimitivetypeLine = 2,
            AnimationgraphvisualizerprimitivetypePie = 3,
            AnimationgraphvisualizerprimitivetypeAxis = 4
        }
        // Alignment: 4
        // Members count: 3
        public enum FacingMode : int {
            FacingModeManual = 0,
            FacingModePath = 1,
            FacingModeLookTarget = 2
        }
        // Alignment: 4
        // Members count: 6
        public enum IkSolverType : int {
            IksolverPerlin = 0,
            IksolverTwoBone = 1,
            IksolverFabrik = 2,
            IksolverDogLeg3Bone = 3,
            IksolverCcd = 4,
            IksolverCount = 5
        }
        // Alignment: 4
        // Members count: 3
        public enum IkTargetSource : int {
            IktargetsourceBone = 0,
            IktargetsourceAnimgraphParameter = 1,
            IktargetsourceCount = 2
        }
        // Alignment: 4
        // Members count: 3
        public enum IkTargetCoordinateSystem : int {
            IktargetcoordinatesystemWorldSpace = 0,
            IktargetcoordinatesystemModelSpace = 1,
            IktargetcoordinatesystemCount = 2
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyArrayElementNameKey
        public static class MoodAnimationT {
            public const nint MSName = 0x0; // CUtlString
            public const nint MFlWeight = 0x8; // float32
        }
        // Parent: None
        // Fields count: 12
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyArrayElementNameKey
        public static class MoodAnimationLayerT {
            public const nint MSName = 0x0; // CUtlString
            public const nint MBActiveListening = 0x8; // bool
            public const nint MBActiveTalking = 0x9; // bool
            public const nint MLayerAnimations = 0x10; // CUtlVector< MoodAnimation_t >
            public const nint MFlIntensity = 0x28; // CRangeFloat
            public const nint MFlDurationScale = 0x30; // CRangeFloat
            public const nint MBScaleWithInts = 0x38; // bool
            public const nint MFlNextStart = 0x3C; // CRangeFloat
            public const nint MFlStartOffset = 0x44; // CRangeFloat
            public const nint MFlEndOffset = 0x4C; // CRangeFloat
            public const nint MFlFadeIn = 0x54; // float32
            public const nint MFlFadeOut = 0x58; // float32
        }
        // Parent: None
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class AnimationDecodeDebugDumpElementT {
            public const nint MNEntityIndex = 0x0; // int32
            public const nint MModelName = 0x8; // CUtlString
            public const nint MPoseParams = 0x10; // CUtlVector< CUtlString >
            public const nint MDecodeOps = 0x28; // CUtlVector< CUtlString >
            public const nint MInternalOps = 0x40; // CUtlVector< CUtlString >
            public const nint MDecodedAnims = 0x58; // CUtlVector< CUtlString >
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class AnimationDecodeDebugDumpT {
            public const nint MProcessingType = 0x0; // AnimationProcessingType_t
            public const nint MElems = 0x8; // CUtlVector< AnimationDecodeDebugDumpElement_t >
        }
        // Parent: None
        // Fields count: 9
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class AnimationSnapshotBaseT {
            public const nint MFlRealTime = 0x0; // float32
            public const nint MRootToWorld = 0x10; // matrix3x4a_t
            public const nint MBBonesInWorldSpace = 0x40; // bool
            public const nint MBoneSetupMask = 0x48; // CUtlVector< uint32 >
            public const nint MBoneTransforms = 0x60; // CUtlVector< matrix3x4a_t >
            public const nint MFlexControllers = 0x78; // CUtlVector< float32 >
            public const nint MSnapshotType = 0x90; // AnimationSnapshotType_t
            public const nint MBHasDecodeDump = 0x94; // bool
            public const nint MDecodeDump = 0x98; // AnimationDecodeDebugDumpElement_t
        }
        // Parent: AnimationSnapshotBaseT
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class AnimationSnapshotT {
            public const nint MNEntIndex = 0x110; // int32
            public const nint MModelName = 0x118; // CUtlString
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimBoneDifference {
            public const nint MName = 0x0; // CBufferString
            public const nint MParent = 0x10; // CBufferString
            public const nint MPosError = 0x20; // 
            public const nint MBHasRotation = 0x2C; // bool
            public const nint MBHasMovement = 0x2D; // bool
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimMorphDifference {
            public const nint MName = 0x0; // CBufferString
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimUserDifference {
            public const nint MName = 0x0; // CBufferString
            public const nint MNType = 0x10; // int32
        }
        // Parent: None
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimEncodeDifference {
            public const nint MBoneArray = 0x0; // CUtlVector< CAnimBoneDifference >
            public const nint MMorphArray = 0x18; // CUtlVector< CAnimMorphDifference >
            public const nint MUserArray = 0x30; // CUtlVector< CAnimUserDifference >
            public const nint MBHasRotationBitArray = 0x48; // CUtlVector< uint8 >
            public const nint MBHasMovementBitArray = 0x60; // CUtlVector< uint8 >
            public const nint MBHasMorphBitArray = 0x78; // CUtlVector< uint8 >
            public const nint MBHasUserBitArray = 0x90; // CUtlVector< uint8 >
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimEventDefinition {
            public const nint MNFrame = 0x8; // int32
            public const nint MFlCycle = 0xC; // float32
            public const nint MEventData = 0x10; // KeyValues3
            public const nint MSLegacyOptions = 0x20; // CBufferString
            public const nint MSEventName = 0x30; // CGlobalSymbol
        }
        // Parent: None
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimMovement {
            public const nint Endframe = 0x0; // int32
            public const nint Motionflags = 0x4; // int32
            public const nint V0 = 0x8; // float32
            public const nint V1 = 0xC; // float32
            public const nint Angle = 0x10; // float32
            public const nint Vector = 0x14; // 
            public const nint Position = 0x20; // 
        }
        // Parent: None
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimLocalHierarchy {
            public const nint MSBone = 0x0; // CBufferString
            public const nint MSNewParent = 0x10; // CBufferString
            public const nint MNStartFrame = 0x20; // int32
            public const nint MNPeakFrame = 0x24; // int32
            public const nint MNTailFrame = 0x28; // int32
            public const nint MNEndFrame = 0x2C; // int32
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimDecoder {
            public const nint MSzName = 0x0; // CBufferString
            public const nint MNVersion = 0x10; // int32
            public const nint MNType = 0x14; // int32
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimFrameSegment {
            public const nint MNUniqueFrameIndex = 0x0; // int32
            public const nint MNLocalElementMasks = 0x4; // uint32
            public const nint MNLocalChannel = 0x8; // int32
            public const nint MContainer = 0x10; // CUtlBinaryBlock
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimFrameBlockAnim {
            public const nint MNStartFrame = 0x0; // int32
            public const nint MNEndFrame = 0x4; // int32
            public const nint MSegmentIndexArray = 0x8; // CUtlVector< int32 >
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimEncodedFrames {
            public const nint MFileName = 0x0; // CBufferString
            public const nint MNFrames = 0x10; // int32
            public const nint MNFramesPerBlock = 0x14; // int32
            public const nint MFrameblockArray = 0x18; // CUtlVector< CAnimFrameBlockAnim >
            public const nint MUsageDifferences = 0x30; // CAnimEncodeDifference
        }
        // Parent: None
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimDescFlag {
            public const nint MBLooping = 0x0; // bool
            public const nint MBAllZeros = 0x1; // bool
            public const nint MBHidden = 0x2; // bool
            public const nint MBDelta = 0x3; // bool
            public const nint MBLegacyWorldspace = 0x4; // bool
            public const nint MBModelDoc = 0x5; // bool
            public const nint MBImplicitSeqIgnoreDelta = 0x6; // bool
            public const nint MBAnimGraphAdditive = 0x7; // bool
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimSequenceParams {
            public const nint MFlFadeInTime = 0x0; // float32
            public const nint MFlFadeOutTime = 0x4; // float32
        }
        // Parent: None
        // Fields count: 14
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimDesc {
            public const nint MName = 0x0; // CBufferString
            public const nint MFlags = 0x10; // CAnimDesc_Flag
            public const nint Fps = 0x18; // float32
            public const nint MData = 0x20; // CAnimEncodedFrames
            public const nint MMovementArray = 0xF8; // CUtlVector< CAnimMovement >
            public const nint MEventArray = 0x110; // CUtlVector< CAnimEventDefinition >
            public const nint MActivityArray = 0x128; // CUtlVector< CAnimActivity >
            public const nint MHierarchyArray = 0x140; // CUtlVector< CAnimLocalHierarchy >
            public const nint Framestalltime = 0x158; // float32
            public const nint MVecRootMin = 0x15C; // 
            public const nint MVecRootMax = 0x168; // 
            public const nint MVecBoneWorldMin = 0x178; // CUtlVector< Vector >
            public const nint MVecBoneWorldMax = 0x190; // CUtlVector< Vector >
            public const nint MSequenceParams = 0x1A8; // CAnimSequenceParams
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimActivity {
            public const nint MName = 0x0; // CBufferString
            public const nint MNActivity = 0x10; // int32
            public const nint MNFlags = 0x14; // int32
            public const nint MNWeight = 0x18; // int32
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimData {
            public const nint MName = 0x10; // CBufferString
            public const nint MAnimArray = 0x20; // CUtlVector< CAnimDesc >
            public const nint MDecoderArray = 0x38; // CUtlVector< CAnimDecoder >
            public const nint MNMaxUniqueFrameIndex = 0x50; // int32
            public const nint MSegmentArray = 0x58; // CUtlVector< CAnimFrameSegment >
        }
        // Parent: None
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimBone {
            public const nint MName = 0x0; // CBufferString
            public const nint MParent = 0x10; // int32
            public const nint MPos = 0x14; // 
            public const nint MQuat = 0x20; // QuaternionStorage
            public const nint MScale = 0x30; // float32
            public const nint MQAlignment = 0x34; // QuaternionStorage
            public const nint MFlags = 0x44; // int32
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimUser {
            public const nint MName = 0x0; // CBufferString
            public const nint MNType = 0x10; // int32
        }
        // Parent: None
        // Fields count: 9
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimDataChannelDesc {
            public const nint MSzChannelClass = 0x0; // CBufferString
            public const nint MSzVariableName = 0x10; // CBufferString
            public const nint MNFlags = 0x20; // int32
            public const nint MNType = 0x24; // int32
            public const nint MSzGrouping = 0x28; // CBufferString
            public const nint MSzDescription = 0x38; // CBufferString
            public const nint MSzElementNameArray = 0x48; // CUtlVector< CBufferString >
            public const nint MNElementIndexArray = 0x60; // CUtlVector< int32 >
            public const nint MNElementMaskArray = 0x78; // CUtlVector< uint32 >
        }
        // Parent: None
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimKeyData {
            public const nint MName = 0x0; // CBufferString
            public const nint MBoneArray = 0x10; // CUtlVector< CAnimBone >
            public const nint MUserArray = 0x28; // CUtlVector< CAnimUser >
            public const nint MMorphArray = 0x40; // CUtlVector< CBufferString >
            public const nint MNChannelElements = 0x58; // int32
            public const nint MDataChannelArray = 0x60; // CUtlVector< CAnimDataChannelDesc >
        }
        // Parent: None
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimationGroup {
            public const nint MNFlags = 0x10; // uint32
            public const nint MName = 0x18; // CBufferString
            public const nint MLocalHAnimArrayHandle = 0x60; // CUtlVector< CStrongHandle< InfoForResourceTypeCAnimData > >
            public const nint MIncludedGroupArrayHandle = 0x78; // CUtlVector< CStrongHandle< InfoForResourceTypeCAnimationGroup > >
            public const nint MDirectHSeqGroupHandle = 0x90; // CStrongHandle< InfoForResourceTypeCSequenceGroupData >
            public const nint MDecodeKey = 0x98; // CAnimKeyData
            public const nint MSzScripts = 0x110; // CUtlVector< CBufferString >
        }
        // Parent: None
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSeqAutoLayerFlag {
            public const nint MBPost = 0x0; // bool
            public const nint MBSpline = 0x1; // bool
            public const nint MBXFade = 0x2; // bool
            public const nint MBNoBlend = 0x3; // bool
            public const nint MBLocal = 0x4; // bool
            public const nint MBPose = 0x5; // bool
            public const nint MBFetchFrame = 0x6; // bool
            public const nint MBSubtract = 0x7; // bool
        }
        // Parent: None
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSeqAutoLayer {
            public const nint MNLocalReference = 0x0; // int16
            public const nint MNLocalPose = 0x2; // int16
            public const nint MFlags = 0x4; // CSeqAutoLayerFlag
            public const nint MStart = 0xC; // float32
            public const nint MPeak = 0x10; // float32
            public const nint MTail = 0x14; // float32
            public const nint MEnd = 0x18; // float32
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSeqIkLock {
            public const nint MFlPosWeight = 0x0; // float32
            public const nint MFlAngleWeight = 0x4; // float32
            public const nint MNLocalBone = 0x8; // int16
            public const nint MBBonesOrientedAlongPositiveX = 0xA; // bool
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSeqBoneMaskList {
            public const nint MSName = 0x0; // CBufferString
            public const nint MNLocalBoneArray = 0x10; // CUtlVector< int16 >
            public const nint MFlBoneWeightArray = 0x28; // CUtlVector< float32 >
            public const nint MFlDefaultMorphCtrlWeight = 0x40; // float32
            public const nint MMorphCtrlWeightArray = 0x48; // CUtlVector< CUtlPair< CBufferString, float32 > >
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSeqScaleSet {
            public const nint MSName = 0x0; // CBufferString
            public const nint MBRootOffset = 0x10; // bool
            public const nint MVRootOffset = 0x14; // 
            public const nint MNLocalBoneArray = 0x20; // CUtlVector< int16 >
            public const nint MFlBoneScaleArray = 0x38; // CUtlVector< float32 >
        }
        // Parent: None
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSeqMultiFetchFlag {
            public const nint MBRealtime = 0x0; // bool
            public const nint MBCylepose = 0x1; // bool
            public const nint MB0D = 0x2; // bool
            public const nint MB1D = 0x3; // bool
            public const nint MB2D = 0x4; // bool
            public const nint MB2DTri = 0x5; // bool
        }
        // Parent: None
        // Fields count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSeqMultiFetch {
            public const nint MFlags = 0x0; // CSeqMultiFetchFlag
            public const nint MLocalReferenceArray = 0x8; // CUtlVector< int16 >
            public const nint MNGroupSize = 0x20; // int32[2]
            public const nint MNLocalPose = 0x28; // int32[2]
            public const nint MPoseKeyArray0 = 0x30; // CUtlVector< float32 >
            public const nint MPoseKeyArray1 = 0x48; // CUtlVector< float32 >
            public const nint MNLocalCyclePoseParameter = 0x60; // int32
            public const nint MBCalculatePoseParameters = 0x64; // bool
            public const nint MBFixedBlendWeight = 0x65; // bool
            public const nint MFlFixedBlendWeightVals = 0x68; // float32[2]
        }
        // Parent: None
        // Fields count: 11
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSeqSeqDescFlag {
            public const nint MBLooping = 0x0; // bool
            public const nint MBSnap = 0x1; // bool
            public const nint MBAutoplay = 0x2; // bool
            public const nint MBPost = 0x3; // bool
            public const nint MBHidden = 0x4; // bool
            public const nint MBMulti = 0x5; // bool
            public const nint MBLegacyDelta = 0x6; // bool
            public const nint MBLegacyWorldspace = 0x7; // bool
            public const nint MBLegacyCyclepose = 0x8; // bool
            public const nint MBLegacyRealtime = 0x9; // bool
            public const nint MBModelDoc = 0xA; // bool
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSeqTransition {
            public const nint MFlFadeInTime = 0x0; // float32
            public const nint MFlFadeOutTime = 0x4; // float32
        }
        // Parent: None
        // Fields count: 11
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSeqS1SeqDesc {
            public const nint MSName = 0x0; // CBufferString
            public const nint MFlags = 0x10; // CSeqSeqDescFlag
            public const nint MFetch = 0x20; // CSeqMultiFetch
            public const nint MNLocalWeightlist = 0x90; // int32
            public const nint MAutoLayerArray = 0x98; // CUtlVector< CSeqAutoLayer >
            public const nint MIkLockArray = 0xB0; // CUtlVector< CSeqIKLock >
            public const nint MTransition = 0xC8; // CSeqTransition
            public const nint MSequenceKeys = 0xD0; // KeyValues3
            public const nint MLegacyKeyValueText = 0xE0; // CBufferString
            public const nint MActivityArray = 0xF0; // CUtlVector< CAnimActivity >
            public const nint MFootMotion = 0x108; // CUtlVector< CFootMotion >
        }
        // Parent: None
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSeqSynthAnimDesc {
            public const nint MSName = 0x0; // CBufferString
            public const nint MFlags = 0x10; // CSeqSeqDescFlag
            public const nint MTransition = 0x1C; // CSeqTransition
            public const nint MNLocalBaseReference = 0x24; // int16
            public const nint MNLocalBoneMask = 0x26; // int16
            public const nint MActivityArray = 0x28; // CUtlVector< CAnimActivity >
        }
        // Parent: None
        // Fields count: 9
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSeqCmdLayer {
            public const nint MCmd = 0x0; // int16
            public const nint MNLocalReference = 0x2; // int16
            public const nint MNLocalBonemask = 0x4; // int16
            public const nint MNDstResult = 0x6; // int16
            public const nint MNSrcResult = 0x8; // int16
            public const nint MBSpline = 0xA; // bool
            public const nint MFlVar1 = 0xC; // float32
            public const nint MFlVar2 = 0x10; // float32
            public const nint MNLineNumber = 0x14; // int16
        }
        // Parent: None
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSeqPoseSetting {
            public const nint MSPoseParameter = 0x0; // CBufferString
            public const nint MSAttachment = 0x10; // CBufferString
            public const nint MSReferenceSequence = 0x20; // CBufferString
            public const nint MFlValue = 0x30; // float32
            public const nint MBX = 0x34; // bool
            public const nint MBY = 0x35; // bool
            public const nint MBZ = 0x36; // bool
            public const nint METype = 0x38; // int32
        }
        // Parent: None
        // Fields count: 12
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSeqCmdSeqDesc {
            public const nint MSName = 0x0; // CBufferString
            public const nint MFlags = 0x10; // CSeqSeqDescFlag
            public const nint MTransition = 0x1C; // CSeqTransition
            public const nint MNFrameRangeSequence = 0x24; // int16
            public const nint MNFrameCount = 0x26; // int16
            public const nint MFlFps = 0x28; // float32
            public const nint MNSubCycles = 0x2C; // int16
            public const nint MNumLocalResults = 0x2E; // int16
            public const nint MCmdLayerArray = 0x30; // CUtlVector< CSeqCmdLayer >
            public const nint MEventArray = 0x48; // CUtlVector< CAnimEventDefinition >
            public const nint MActivityArray = 0x60; // CUtlVector< CAnimActivity >
            public const nint MPoseSettingArray = 0x78; // CUtlVector< CSeqPoseSetting >
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSeqPoseParamDesc {
            public const nint MSName = 0x0; // CBufferString
            public const nint MFlStart = 0x10; // float32
            public const nint MFlEnd = 0x14; // float32
            public const nint MFlLoop = 0x18; // float32
            public const nint MBLooping = 0x1C; // bool
        }
        // Parent: None
        // Fields count: 14
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSequenceGroupData {
            public const nint MSName = 0x10; // CBufferString
            public const nint MNFlags = 0x20; // uint32
            public const nint MLocalSequenceNameArray = 0x28; // CUtlVector< CBufferString >
            public const nint MLocalS1SeqDescArray = 0x40; // CUtlVector< CSeqS1SeqDesc >
            public const nint MLocalMultiSeqDescArray = 0x58; // CUtlVector< CSeqS1SeqDesc >
            public const nint MLocalSynthAnimDescArray = 0x70; // CUtlVector< CSeqSynthAnimDesc >
            public const nint MLocalCmdSeqDescArray = 0x88; // CUtlVector< CSeqCmdSeqDesc >
            public const nint MLocalBoneMaskArray = 0xA0; // CUtlVector< CSeqBoneMaskList >
            public const nint MLocalScaleSetArray = 0xB8; // CUtlVector< CSeqScaleSet >
            public const nint MLocalBoneNameArray = 0xD0; // CUtlVector< CBufferString >
            public const nint MLocalNodeName = 0xE8; // CBufferString
            public const nint MLocalPoseParamArray = 0xF8; // CUtlVector< CSeqPoseParamDesc >
            public const nint MKeyValues = 0x110; // KeyValues3
            public const nint MLocalIkAutoplayLockArray = 0x120; // CUtlVector< CSeqIKLock >
        }
        // Parent: None
        // Fields count: 17
        public static class CCompressorGroup {
            public const nint MNTotalElementCount = 0x0; // int32
            public const nint MSzChannelClass = 0x8; // CUtlVector< char* >
            public const nint MSzVariableName = 0x20; // CUtlVector< char* >
            public const nint MNType = 0x38; // CUtlVector< fieldtype_t >
            public const nint MNFlags = 0x50; // CUtlVector< int32 >
            public const nint MSzGrouping = 0x68; // CUtlVector< CUtlString >
            public const nint MNCompressorIndex = 0x80; // CUtlVector< int32 >
            public const nint MSzElementNames = 0x98; // CUtlVector< CUtlVector< char* > >
            public const nint MNElementUniqueId = 0xB0; // CUtlVector< CUtlVector< int32 > >
            public const nint MNElementMask = 0xC8; // CUtlVector< uint32 >
            public const nint MVectorCompressor = 0xF8; // CUtlVector< CCompressor< Vector >* >
            public const nint MQuaternionCompressor = 0x110; // CUtlVector< CCompressor< QuaternionStorage >* >
            public const nint MIntCompressor = 0x128; // CUtlVector< CCompressor< int32 >* >
            public const nint MBoolCompressor = 0x140; // CUtlVector< CCompressor< bool >* >
            public const nint MColorCompressor = 0x158; // CUtlVector< CCompressor< Color >* >
            public const nint MVector2DCompressor = 0x170; // CUtlVector< CCompressor< Vector2D >* >
            public const nint MVector4DCompressor = 0x188; // CUtlVector< CCompressor< Vector4D >* >
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MPropertyEditClassAsString
        public static class CAnimEnum {
            public const nint MValue = 0x0; // uint8
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyEditClassAsString
        public static class AnimNodeId {
            public const nint MId = 0x0; // uint32
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyEditClassAsString
        public static class AnimNodeOutputId {
            public const nint MId = 0x0; // uint32
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyEditClassAsString
        public static class AnimStateId {
            public const nint MId = 0x0; // uint32
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyEditClassAsString
        public static class AnimParamId {
            public const nint MId = 0x0; // uint32
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyEditClassAsString
        public static class AnimTagId {
            public const nint MId = 0x0; // uint32
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyEditClassAsString
        public static class AnimComponentId {
            public const nint MId = 0x0; // uint32
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyEditClassAsString
        public static class AnimScriptHandle {
            public const nint MId = 0x0; // uint32
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimAttachment {
            public const nint MInfluenceRotations = 0x0; // Quaternion[3]
            public const nint MInfluenceOffsets = 0x30; // VectorAligned[3]
            public const nint MInfluenceIndices = 0x60; // int32[3]
            public const nint MInfluenceWeights = 0x6C; // float32[3]
            public const nint MNumInfluences = 0x78; // uint8
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VPhysics2ShapeDefT {
            public const nint MSpheres = 0x0; // CUtlVector< RnSphereDesc_t >
            public const nint MCapsules = 0x18; // CUtlVector< RnCapsuleDesc_t >
            public const nint MHulls = 0x30; // CUtlVector< RnHullDesc_t >
            public const nint MMeshes = 0x48; // CUtlVector< RnMeshDesc_t >
            public const nint MCollisionAttributeIndices = 0x60; // CUtlVector< uint16 >
        }
        // Parent: None
        // Fields count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VPhysXBodyPartT {
            public const nint MNFlags = 0x0; // uint32
            public const nint MFlMass = 0x4; // float32
            public const nint MRnShape = 0x8; // VPhysics2ShapeDef_t
            public const nint MNCollisionAttributeIndex = 0x80; // uint16
            public const nint MNReserved = 0x82; // uint16
            public const nint MFlInertiaScale = 0x84; // float32
            public const nint MFlLinearDamping = 0x88; // float32
            public const nint MFlAngularDamping = 0x8C; // float32
            public const nint MBOverrideMassCenter = 0x90; // bool
            public const nint MVMassCenterOverride = 0x94; // 
        }
        // Parent: None
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VPhysXCollisionAttributesT {
            public const nint MCollisionGroup = 0x0; // uint32
            public const nint MInteractAs = 0x8; // CUtlVector< uint32 >
            public const nint MInteractWith = 0x20; // CUtlVector< uint32 >
            public const nint MInteractExclude = 0x38; // CUtlVector< uint32 >
            public const nint MCollisionGroupString = 0x50; // CUtlString
            public const nint MInteractAsStrings = 0x58; // CUtlVector< CUtlString >
            public const nint MInteractWithStrings = 0x70; // CUtlVector< CUtlString >
            public const nint MInteractExcludeStrings = 0x88; // CUtlVector< CUtlString >
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VPhysXRangeT {
            public const nint MFlMin = 0x0; // float32
            public const nint MFlMax = 0x4; // float32
        }
        // Parent: None
        // Fields count: 46
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VPhysXConstraintParamsT {
            public const nint MNType = 0x0; // int8
            public const nint MNTranslateMotion = 0x1; // int8
            public const nint MNRotateMotion = 0x2; // int8
            public const nint MNFlags = 0x3; // int8
            public const nint MAnchor = 0x4; // Vector[2]
            public const nint MAxes = 0x1C; // QuaternionStorage[2]
            public const nint MMaxForce = 0x3C; // float32
            public const nint MMaxTorque = 0x40; // float32
            public const nint MLinearLimitValue = 0x44; // float32
            public const nint MLinearLimitRestitution = 0x48; // float32
            public const nint MLinearLimitSpring = 0x4C; // float32
            public const nint MLinearLimitDamping = 0x50; // float32
            public const nint MTwistLowLimitValue = 0x54; // float32
            public const nint MTwistLowLimitRestitution = 0x58; // float32
            public const nint MTwistLowLimitSpring = 0x5C; // float32
            public const nint MTwistLowLimitDamping = 0x60; // float32
            public const nint MTwistHighLimitValue = 0x64; // float32
            public const nint MTwistHighLimitRestitution = 0x68; // float32
            public const nint MTwistHighLimitSpring = 0x6C; // float32
            public const nint MTwistHighLimitDamping = 0x70; // float32
            public const nint MSwing1LimitValue = 0x74; // float32
            public const nint MSwing1LimitRestitution = 0x78; // float32
            public const nint MSwing1LimitSpring = 0x7C; // float32
            public const nint MSwing1LimitDamping = 0x80; // float32
            public const nint MSwing2LimitValue = 0x84; // float32
            public const nint MSwing2LimitRestitution = 0x88; // float32
            public const nint MSwing2LimitSpring = 0x8C; // float32
            public const nint MSwing2LimitDamping = 0x90; // float32
            public const nint MGoalPosition = 0x94; // 
            public const nint MGoalOrientation = 0xA0; // QuaternionStorage
            public const nint MGoalAngularVelocity = 0xB0; // 
            public const nint MDriveSpringX = 0xBC; // float32
            public const nint MDriveSpringY = 0xC0; // float32
            public const nint MDriveSpringZ = 0xC4; // float32
            public const nint MDriveDampingX = 0xC8; // float32
            public const nint MDriveDampingY = 0xCC; // float32
            public const nint MDriveDampingZ = 0xD0; // float32
            public const nint MDriveSpringTwist = 0xD4; // float32
            public const nint MDriveSpringSwing = 0xD8; // float32
            public const nint MDriveSpringSlerp = 0xDC; // float32
            public const nint MDriveDampingTwist = 0xE0; // float32
            public const nint MDriveDampingSwing = 0xE4; // float32
            public const nint MDriveDampingSlerp = 0xE8; // float32
            public const nint MSolverIterationCount = 0xEC; // int32
            public const nint MProjectionLinearTolerance = 0xF0; // float32
            public const nint MProjectionAngularTolerance = 0xF4; // float32
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VPhysXConstraint2T {
            public const nint MNFlags = 0x0; // uint32
            public const nint MNParent = 0x4; // uint16
            public const nint MNChild = 0x6; // uint16
            public const nint MParams = 0x8; // VPhysXConstraintParams_t
        }
        // Parent: None
        // Fields count: 24
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VPhysXJointT {
            public const nint MNType = 0x0; // uint16
            public const nint MNBody1 = 0x2; // uint16
            public const nint MNBody2 = 0x4; // uint16
            public const nint MNFlags = 0x6; // uint16
            public const nint MFrame1 = 0x10; // CTransform
            public const nint MFrame2 = 0x30; // CTransform
            public const nint MBEnableCollision = 0x50; // bool
            public const nint MBEnableLinearLimit = 0x51; // bool
            public const nint MLinearLimit = 0x54; // VPhysXRange_t
            public const nint MBEnableLinearMotor = 0x5C; // bool
            public const nint MVLinearTargetVelocity = 0x60; // 
            public const nint MFlMaxForce = 0x6C; // float32
            public const nint MBEnableSwingLimit = 0x70; // bool
            public const nint MSwingLimit = 0x74; // VPhysXRange_t
            public const nint MBEnableTwistLimit = 0x7C; // bool
            public const nint MTwistLimit = 0x80; // VPhysXRange_t
            public const nint MBEnableAngularMotor = 0x88; // bool
            public const nint MVAngularTargetVelocity = 0x8C; // 
            public const nint MFlMaxTorque = 0x98; // float32
            public const nint MFlLinearFrequency = 0x9C; // float32
            public const nint MFlLinearDampingRatio = 0xA0; // float32
            public const nint MFlAngularFrequency = 0xA4; // float32
            public const nint MFlAngularDampingRatio = 0xA8; // float32
            public const nint MFlFriction = 0xAC; // float32
        }
        // Parent: None
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class PhysSoftbodyDescT {
            public const nint MParticleBoneHash = 0x0; // CUtlVector< uint32 >
            public const nint MParticles = 0x18; // CUtlVector< RnSoftbodyParticle_t >
            public const nint MSprings = 0x30; // CUtlVector< RnSoftbodySpring_t >
            public const nint MCapsules = 0x48; // CUtlVector< RnSoftbodyCapsule_t >
            public const nint MInitPose = 0x60; // CUtlVector< CTransform >
            public const nint MParticleBoneName = 0x78; // CUtlVector< CUtlString >
        }
        // Parent: None
        // Fields count: 16
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VPhysXAggregateDataT {
            public const nint MNFlags = 0x0; // uint16
            public const nint MNRefCounter = 0x2; // uint16
            public const nint MBonesHash = 0x8; // CUtlVector< uint32 >
            public const nint MBoneNames = 0x20; // CUtlVector< CUtlString >
            public const nint MIndexNames = 0x38; // CUtlVector< uint16 >
            public const nint MIndexHash = 0x50; // CUtlVector< uint16 >
            public const nint MBindPose = 0x68; // CUtlVector< matrix3x4a_t >
            public const nint MParts = 0x80; // CUtlVector< VPhysXBodyPart_t >
            public const nint MConstraints2 = 0x98; // CUtlVector< VPhysXConstraint2_t >
            public const nint MJoints = 0xB0; // CUtlVector< VPhysXJoint_t >
            public const nint MPFeModel = 0xC8; // PhysFeModelDesc_t*
            public const nint MBoneParents = 0xD0; // CUtlVector< uint16 >
            public const nint MSurfacePropertyHashes = 0xE8; // CUtlVector< uint32 >
            public const nint MCollisionAttributes = 0x100; // CUtlVector< VPhysXCollisionAttributes_t >
            public const nint MDebugPartNames = 0x118; // CUtlVector< CUtlString >
            public const nint MEmbeddedKeyvalues = 0x130; // CUtlString
        }
        // Parent: None
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPhysSurfacePropertiesPhysics {
            public const nint MFriction = 0x0; // float32
            public const nint MElasticity = 0x4; // float32
            public const nint MDensity = 0x8; // float32
            public const nint MThickness = 0xC; // float32
            public const nint MSoftContactFrequency = 0x10; // float32
            public const nint MSoftContactDampingRatio = 0x14; // float32
            public const nint MWheelDrag = 0x18; // float32
        }
        // Parent: None
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPhysSurfacePropertiesAudio {
            public const nint MReflectivity = 0x0; // float32
            public const nint MHardnessFactor = 0x4; // float32
            public const nint MRoughnessFactor = 0x8; // float32
            public const nint MRoughThreshold = 0xC; // float32
            public const nint MHardThreshold = 0x10; // float32
            public const nint MHardVelocityThreshold = 0x14; // float32
            public const nint MFlStaticImpactVolume = 0x18; // float32
            public const nint MFlOcclusionFactor = 0x1C; // float32
        }
        // Parent: None
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPhysSurfacePropertiesSoundNames {
            public const nint MImpactSoft = 0x0; // CUtlString
            public const nint MImpactHard = 0x8; // CUtlString
            public const nint MScrapeSmooth = 0x10; // CUtlString
            public const nint MScrapeRough = 0x18; // CUtlString
            public const nint MBulletImpact = 0x20; // CUtlString
            public const nint MRolling = 0x28; // CUtlString
            public const nint MBreak = 0x30; // CUtlString
            public const nint MStrain = 0x38; // CUtlString
        }
        // Parent: None
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPhysSurfaceProperties {
            public const nint MName = 0x0; // CUtlString
            public const nint MNameHash = 0x8; // uint32
            public const nint MBaseNameHash = 0xC; // uint32
            public const nint MBHidden = 0x18; // bool
            public const nint MDescription = 0x20; // CUtlString
            public const nint MPhysics = 0x28; // CPhysSurfacePropertiesPhysics
            public const nint MAudioSounds = 0x48; // CPhysSurfacePropertiesSoundNames
            public const nint MAudioParams = 0x88; // CPhysSurfacePropertiesAudio
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CvPhysXSurfacePropertiesList {
            public const nint MSurfacePropertiesList = 0x0; // CUtlVector< CPhysSurfaceProperties* >
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class MaterialGroupT {
            public const nint MName = 0x0; // CUtlString
            public const nint MMaterials = 0x8; // CUtlVector< CStrongHandle< InfoForResourceTypeIMaterial2 > >
        }
        // Parent: None
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class ModelSkeletonDataT {
            public const nint MBoneName = 0x0; // CUtlVector< CUtlString >
            public const nint MNParent = 0x18; // CUtlVector< int16 >
            public const nint MBoneSphere = 0x30; // CUtlVector< float32 >
            public const nint MNFlag = 0x48; // CUtlVector< uint32 >
            public const nint MBonePosParent = 0x60; // CUtlVector< Vector >
            public const nint MBoneRotParent = 0x78; // CUtlVector< QuaternionStorage >
            public const nint MBoneScaleParent = 0x90; // CUtlVector< float32 >
        }
        // Parent: None
        // Fields count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class PermModelInfoT {
            public const nint MNFlags = 0x0; // uint32
            public const nint MVHullMin = 0x4; // 
            public const nint MVHullMax = 0x10; // 
            public const nint MVViewMin = 0x1C; // 
            public const nint MVViewMax = 0x28; // 
            public const nint MFlMass = 0x34; // float32
            public const nint MVEyePosition = 0x38; // 
            public const nint MFlMaxEyeDeflection = 0x44; // float32
            public const nint MSSurfaceProperty = 0x48; // CUtlString
            public const nint MKeyValueText = 0x50; // CUtlString
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class PermModelExtPartT {
            public const nint MTransform = 0x0; // CTransform
            public const nint MName = 0x20; // CUtlString
            public const nint MNParent = 0x28; // int32
            public const nint MRefModel = 0x30; // CStrongHandle< InfoForResourceTypeCModel >
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class ModelBoneFlexDriverControlT {
            public const nint MNBoneComponent = 0x0; // ModelBoneFlexComponent_t
            public const nint MFlexController = 0x8; // CUtlString
            public const nint MFlexControllerToken = 0x10; // uint32
            public const nint MFlMin = 0x14; // float32
            public const nint MFlMax = 0x18; // float32
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class ModelBoneFlexDriverT {
            public const nint MBoneName = 0x0; // CUtlString
            public const nint MBoneNameToken = 0x8; // uint32
            public const nint MControls = 0x10; // CUtlVector< ModelBoneFlexDriverControl_t >
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class PermModelDataAnimatedMaterialAttributeT {
            public const nint MAttributeName = 0x0; // CUtlString
            public const nint MNNumChannels = 0x8; // int32
        }
        // Parent: None
        // Fields count: 23
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class PermModelDataT {
            public const nint MName = 0x0; // CUtlString
            public const nint MModelInfo = 0x8; // PermModelInfo_t
            public const nint MExtParts = 0x60; // CUtlVector< PermModelExtPart_t >
            public const nint MRefMeshes = 0x78; // CUtlVector< CStrongHandle< InfoForResourceTypeCRenderMesh > >
            public const nint MRefMeshGroupMasks = 0x90; // CUtlVector< uint64 >
            public const nint MRefPhysGroupMasks = 0xA8; // CUtlVector< uint64 >
            public const nint MRefLodGroupMasks = 0xC0; // CUtlVector< uint8 >
            public const nint MLodGroupSwitchDistances = 0xD8; // CUtlVector< float32 >
            public const nint MRefPhysicsData = 0xF0; // CUtlVector< CStrongHandle< InfoForResourceTypeCPhysAggregateData > >
            public const nint MRefPhysicsHitboxData = 0x108; // CUtlVector< CStrongHandle< InfoForResourceTypeCPhysAggregateData > >
            public const nint MRefAnimGroups = 0x120; // CUtlVector< CStrongHandle< InfoForResourceTypeCAnimationGroup > >
            public const nint MRefSequenceGroups = 0x138; // CUtlVector< CStrongHandle< InfoForResourceTypeCSequenceGroupData > >
            public const nint MMeshGroups = 0x150; // CUtlVector< CUtlString >
            public const nint MMaterialGroups = 0x168; // CUtlVector< MaterialGroup_t >
            public const nint MNDefaultMeshGroupMask = 0x180; // uint64
            public const nint MModelSkeleton = 0x188; // ModelSkeletonData_t
            public const nint MRemappingTable = 0x230; // CUtlVector< int16 >
            public const nint MRemappingTableStarts = 0x248; // CUtlVector< uint16 >
            public const nint MBoneFlexDrivers = 0x260; // CUtlVector< ModelBoneFlexDriver_t >
            public const nint MPModelConfigList = 0x278; // CModelConfigList*
            public const nint MBodyGroupsHiddenInTools = 0x280; // CUtlVector< CUtlString >
            public const nint MRefAnimIncludeModels = 0x298; // CUtlVector< CStrongHandle< InfoForResourceTypeCModel > >
            public const nint MAnimatedMaterialAttributes = 0x2B0; // CUtlVector< PermModelDataAnimatedMaterialAttribute_t >
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CModelConfigElement {
            public const nint MElementName = 0x8; // CUtlString
            public const nint MNestedElements = 0x10; // CUtlVector< CModelConfigElement* >
        }
        // Parent: CModelConfigElement
        // Fields count: 14
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CModelConfigElementAttachedModel {
            public const nint MInstanceName = 0x48; // CUtlString
            public const nint MEntityClass = 0x50; // CUtlString
            public const nint MHModel = 0x58; // CStrongHandle< InfoForResourceTypeCModel >
            public const nint MVOffset = 0x60; // 
            public const nint MAAngOffset = 0x6C; // QAngle
            public const nint MAttachmentName = 0x78; // CUtlString
            public const nint MLocalAttachmentOffsetName = 0x80; // CUtlString
            public const nint MAttachmentType = 0x88; // ModelConfigAttachmentType_t
            public const nint MBBoneMergeFlex = 0x8C; // bool
            public const nint MBUserSpecifiedColor = 0x8D; // bool
            public const nint MBUserSpecifiedMaterialGroup = 0x8E; // bool
            public const nint MBAcceptParentMaterialDrivenDecals = 0x8F; // bool
            public const nint MBodygroupOnOtherModels = 0x90; // CUtlString
            public const nint MMaterialGroupOnOtherModels = 0x98; // CUtlString
        }
        // Parent: CModelConfigElement
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CModelConfigElementUserPick {
            public const nint MChoices = 0x48; // CUtlVector< CUtlString >
        }
        // Parent: CModelConfigElement
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CModelConfigElementRandomPick {
            public const nint MChoices = 0x48; // CUtlVector< CUtlString >
            public const nint MChoiceWeights = 0x60; // CUtlVector< float32 >
        }
        // Parent: CModelConfigElement
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CModelConfigElementSetMaterialGroup {
            public const nint MMaterialGroupName = 0x48; // CUtlString
        }
        // Parent: CModelConfigElement
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CModelConfigElementSetMaterialGroupOnAttachedModels {
            public const nint MMaterialGroupName = 0x48; // CUtlString
        }
        // Parent: CModelConfigElement
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CModelConfigElementSetRenderColor {
            public const nint MColor = 0x48; // Color
        }
        // Parent: CModelConfigElement
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CModelConfigElementRandomColor {
            public const nint MGradient = 0x48; // CColorGradient
        }
        // Parent: CModelConfigElement
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CModelConfigElementSetBodygroup {
            public const nint MGroupName = 0x48; // CUtlString
            public const nint MNChoice = 0x50; // int32
        }
        // Parent: CModelConfigElement
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CModelConfigElementSetBodygroupOnAttachedModels {
            public const nint MGroupName = 0x48; // CUtlString
            public const nint MNChoice = 0x50; // int32
        }
        // Parent: CModelConfigElement
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CModelConfigElementCommand {
            public const nint MCommand = 0x48; // CUtlString
            public const nint MArgs = 0x50; // KeyValues3
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CModelConfig {
            public const nint MConfigName = 0x0; // CUtlString
            public const nint MElements = 0x8; // CUtlVector< CModelConfigElement* >
            public const nint MBTopLevel = 0x20; // bool
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CModelConfigList {
            public const nint MBHideMaterialGroupInTools = 0x0; // bool
            public const nint MBHideRenderColorInTools = 0x1; // bool
            public const nint MConfigs = 0x8; // CUtlVector< CModelConfig* >
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CRenderBufferBinding {
            public const nint MHBuffer = 0x0; // uint64
            public const nint MNBindOffsetBytes = 0x10; // uint32
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class SkeletonBoneBoundsT {
            public const nint MVecCenter = 0x0; // 
            public const nint MVecSize = 0xC; // 
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RenderSkeletonBoneT {
            public const nint MBoneName = 0x0; // CUtlString
            public const nint MParentName = 0x8; // CUtlString
            public const nint MInvBindPose = 0x10; // matrix3x4_t
            public const nint MBbox = 0x40; // SkeletonBoneBounds_t
            public const nint MFlSphereRadius = 0x58; // float32
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CRenderSkeleton {
            public const nint MBones = 0x0; // CUtlVector< RenderSkeletonBone_t >
            public const nint MBoneParents = 0x30; // CUtlVector< int32 >
            public const nint MNBoneWeightCount = 0x48; // int32
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CDrawCullingData {
            public const nint MVConeApex = 0x0; // 
            public const nint MConeAxis = 0xC; // int8[3]
            public const nint MConeCutoff = 0xF; // int8
        }
        // Parent: None
        // Fields count: 12
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CMaterialDrawDescriptor {
            public const nint MNPrimitiveType = 0x0; // RenderPrimitiveType_t
            public const nint MNBaseVertex = 0x4; // int32
            public const nint MNVertexCount = 0x8; // int32
            public const nint MNStartIndex = 0xC; // int32
            public const nint MNIndexCount = 0x10; // int32
            public const nint MFlUvDensity = 0x14; // float32
            public const nint MVTintColor = 0x18; // 
            public const nint MFlAlpha = 0x24; // float32
            public const nint MNFirstMeshlet = 0x2C; // uint32
            public const nint MNNumMeshlets = 0x30; // uint16
            public const nint MIndexBuffer = 0xB8; // CRenderBufferBinding
            public const nint MMaterial = 0xE0; // CStrongHandle< InfoForResourceTypeIMaterial2 >
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CMeshletDescriptor {
            public const nint MPackedAabb = 0x0; // PackedAABB_t
            public const nint MCullingData = 0x8; // CDrawCullingData
        }
        // Parent: None
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSceneObjectData {
            public const nint MVMinBounds = 0x0; // 
            public const nint MVMaxBounds = 0xC; // 
            public const nint MDrawCalls = 0x18; // CUtlVector< CMaterialDrawDescriptor >
            public const nint MDrawBounds = 0x30; // CUtlVector< AABB_t >
            public const nint MMeshlets = 0x48; // CUtlVector< CMeshletDescriptor >
            public const nint MVTintColor = 0x60; // Vector4D
        }
        // Parent: None
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAttachment {
            public const nint MName = 0x0; // CUtlString
            public const nint MInfluenceNames = 0x8; // CUtlString[3]
            public const nint MVInfluenceRotations = 0x20; // Quaternion[3]
            public const nint MVInfluenceOffsets = 0x50; // Vector[3]
            public const nint MInfluenceWeights = 0x74; // float32[3]
            public const nint MBInfluenceRootTransform = 0x80; // bool[3]
            public const nint MNInfluences = 0x83; // uint8
            public const nint MBIgnoreRotation = 0x84; // bool
        }
        // Parent: None
        // Fields count: 13
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CHitBox {
            public const nint MName = 0x0; // CUtlString
            public const nint MSSurfaceProperty = 0x8; // CUtlString
            public const nint MSBoneName = 0x10; // CUtlString
            public const nint MVMinBounds = 0x18; // 
            public const nint MVMaxBounds = 0x24; // 
            public const nint MFlShapeRadius = 0x30; // float32
            public const nint MNBoneNameHash = 0x34; // uint32
            public const nint MNGroupId = 0x38; // int32
            public const nint MNShapeType = 0x3C; // uint8
            public const nint MBTranslationOnly = 0x3D; // bool
            public const nint MCrc = 0x40; // uint32
            public const nint MCRenderColor = 0x44; // Color
            public const nint MNHitBoxIndex = 0x48; // uint16
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CHitBoxSet {
            public const nint MName = 0x0; // CUtlString
            public const nint MNNameHash = 0x8; // uint32
            public const nint MHitBoxes = 0x10; // CUtlVector< CHitBox >
            public const nint MSourceFilename = 0x28; // CUtlString
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CHitBoxSetList {
            public const nint MHitBoxSets = 0x0; // CUtlVector< CHitBoxSet >
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class DynamicMeshDeformParamsT {
            public const nint MFlTensionCompressScale = 0x0; // float32
            public const nint MFlTensionStretchScale = 0x4; // float32
            public const nint MBRecomputeSmoothNormalsAfterAnimation = 0x8; // bool
            public const nint MBComputeDynamicMeshTensionAfterAnimation = 0x9; // bool
        }
        // Parent: None
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RenderHairStrandInfoT {
            public const nint MNGuideIdx = 0x0; // uint32[3]
            public const nint MNBaseTriIdx = 0xC; // uint32
            public const nint MVGuideBarycentric = 0x10; // Vector2D
            public const nint MVBaseBarycentric = 0x18; // Vector2D
            public const nint MVRootOffsetFlLengthScale = 0x20; // uint16[4]
            public const nint MNPackedBaseMeshUv = 0x28; // uint32
            public const nint MNPad = 0x2C; // uint32
        }
        // Parent: None
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CRenderGroom {
            public const nint MNSegmentsPerHairStrand = 0x0; // int32
            public const nint MNGuideHairCount = 0x4; // int32
            public const nint MNHairCount = 0x8; // int32
            public const nint MNGroomGroupId = 0xC; // int32
            public const nint MNAttachBoneIdx = 0x10; // int32
            public const nint MHairInfoBufferData = 0x18; // CUtlBinaryBlock
            public const nint MHairs = 0x30; // CUtlVector< RenderHairStrandInfo_t >
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CRenderMesh {
            public const nint MSceneObjects = 0x10; // CUtlVectorFixedGrowable< CSceneObjectData >
            public const nint MConstraints = 0xA0; // CUtlVector< CBaseConstraint* >
            public const nint MSkeleton = 0xB8; // CRenderSkeleton
            public const nint MMeshDeformParams = 0x1E0; // DynamicMeshDeformParams_t
            public const nint MPGroomData = 0x1F0; // CRenderGroom*
        }
        // Parent: None
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CConstraintTarget {
            public const nint MQOffset = 0x20; // Quaternion
            public const nint MVOffset = 0x30; // 
            public const nint MNBoneHash = 0x3C; // uint32
            public const nint MSName = 0x40; // CUtlString
            public const nint MFlWeight = 0x48; // float32
            public const nint MBIsAttachment = 0x59; // bool
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CConstraintSlave {
            public const nint MQBaseOrientation = 0x0; // Quaternion
            public const nint MVBasePosition = 0x10; // 
            public const nint MNBoneHash = 0x1C; // uint32
            public const nint MFlWeight = 0x20; // float32
            public const nint MSName = 0x28; // CUtlString
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
            public const nint MName = 0x28; // CUtlString
            public const nint MVUpVector = 0x30; // 
            public const nint MSlaves = 0x40; // CUtlVector< CConstraintSlave >
            public const nint MTargets = 0x58; // CUtlVector< CConstraintTarget >
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
            public const nint MQAimOffset = 0x70; // Quaternion
            public const nint MNUpType = 0x80; // uint32
        }
        // Parent: CBaseConstraint
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CTwistConstraint {
            public const nint MBInverse = 0x70; // bool
            public const nint MQParentBindRotation = 0x80; // Quaternion
            public const nint MQChildBindRotation = 0x90; // Quaternion
        }
        // Parent: CBaseConstraint
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CTiltTwistConstraint {
            public const nint MNTargetAxis = 0x70; // int32
            public const nint MNSlaveAxis = 0x74; // int32
        }
        // Parent: CBaseConstraint
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CMorphConstraint {
            public const nint MSTargetMorph = 0x70; // CUtlString
            public const nint MNSlaveChannel = 0x78; // int32
            public const nint MFlMin = 0x7C; // float32
            public const nint MFlMax = 0x80; // float32
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
            public const nint MSBoneName = 0x28; // CUtlString
            public const nint MSAttachmentName = 0x30; // CUtlString
            public const nint MOutputMorph = 0x38; // CUtlVector< CUtlString >
            public const nint MInputList = 0x50; // CUtlVector< CBoneConstraintPoseSpaceMorph::Input_t >
            public const nint MBClamp = 0x68; // bool
        }
        // Parent: None
        // Fields count: 2
        public static class CBoneConstraintPoseSpaceMorphInputT {
            public const nint MInputValue = 0x0; // 
            public const nint MOutputWeightList = 0x10; // CUtlVector< float32 >
        }
        // Parent: CBaseConstraint
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CBoneConstraintPoseSpaceBone {
            public const nint MInputList = 0x70; // CUtlVector< CBoneConstraintPoseSpaceBone::Input_t >
        }
        // Parent: None
        // Fields count: 2
        public static class CBoneConstraintPoseSpaceBoneInputT {
            public const nint MInputValue = 0x0; // 
            public const nint MOutputTransformList = 0x10; // CUtlVector< CTransform >
        }
        // Parent: CBoneConstraintBase
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CBoneConstraintDotToMorph {
            public const nint MSBoneName = 0x28; // CUtlString
            public const nint MSTargetBoneName = 0x30; // CUtlString
            public const nint MSMorphChannelName = 0x38; // CUtlString
            public const nint MFlRemap = 0x40; // float32[4]
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CFlexOp {
            public const nint MOpCode = 0x0; // FlexOpCode_t
            public const nint MData = 0x4; // int32
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CFlexRule {
            public const nint MNFlex = 0x0; // int32
            public const nint MFlexOps = 0x8; // CUtlVector< CFlexOp >
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CFlexDesc {
            public const nint MSzFacs = 0x0; // CUtlString
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CFlexController {
            public const nint MSzName = 0x0; // CUtlString
            public const nint MSzType = 0x8; // CUtlString
            public const nint Min = 0x10; // float32
            public const nint Max = 0x14; // float32
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CMorphBundleData {
            public const nint MFlULeftSrc = 0x0; // float32
            public const nint MFlVTopSrc = 0x4; // float32
            public const nint MOffsets = 0x8; // CUtlVector< float32 >
            public const nint MRanges = 0x20; // CUtlVector< float32 >
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CMorphRectData {
            public const nint MNXLeftDst = 0x0; // int16
            public const nint MNYTopDst = 0x2; // int16
            public const nint MFlUWidthSrc = 0x4; // float32
            public const nint MFlVHeightSrc = 0x8; // float32
            public const nint MBundleDatas = 0x10; // CUtlVector< CMorphBundleData >
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CMorphData {
            public const nint MName = 0x0; // CUtlString
            public const nint MMorphRectDatas = 0x8; // CUtlVector< CMorphRectData >
        }
        // Parent: None
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CMorphSetData {
            public const nint MNWidth = 0x10; // int32
            public const nint MNHeight = 0x14; // int32
            public const nint MBundleTypes = 0x18; // CUtlVector< MorphBundleType_t >
            public const nint MMorphDatas = 0x30; // CUtlVector< CMorphData >
            public const nint MPTextureAtlas = 0x48; // CStrongHandle< InfoForResourceTypeCTextureBase >
            public const nint MFlexDesc = 0x50; // CUtlVector< CFlexDesc >
            public const nint MFlexControllers = 0x68; // CUtlVector< CFlexController >
            public const nint MFlexRules = 0x80; // CUtlVector< CFlexRule >
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimFoot {
            public const nint MName = 0x0; // CUtlString
            public const nint MVBallOffset = 0x8; // 
            public const nint MVHeelOffset = 0x14; // 
            public const nint MAnkleBoneIndex = 0x20; // int32
            public const nint MToeBoneIndex = 0x24; // int32
        }
        // Parent: None
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimSkeleton {
            public const nint MLocalSpaceTransforms = 0x10; // CUtlVector< CTransform >
            public const nint MModelSpaceTransforms = 0x28; // CUtlVector< CTransform >
            public const nint MBoneNames = 0x40; // CUtlVector< CUtlString >
            public const nint MChildren = 0x58; // CUtlVector< CUtlVector< int32 > >
            public const nint MParents = 0x70; // CUtlVector< int32 >
            public const nint MFeet = 0x88; // CUtlVector< CAnimFoot >
            public const nint MMorphNames = 0xA0; // CUtlVector< CUtlString >
            public const nint MLodBoneCounts = 0xB8; // CUtlVector< int32 >
        }
        // Parent: None
        // Fields count: 9
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CFootDefinition {
            public const nint MName = 0x0; // CUtlString
            public const nint MAnkleBoneName = 0x8; // CUtlString
            public const nint MToeBoneName = 0x10; // CUtlString
            public const nint MVBallOffset = 0x18; // 
            public const nint MVHeelOffset = 0x24; // 
            public const nint MFlFootLength = 0x30; // float32
            public const nint MFlBindPoseDirectionMs = 0x34; // float32
            public const nint MFlTraceHeight = 0x38; // float32
            public const nint MFlTraceRadius = 0x3C; // float32
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CCycleBase {
            public const nint MFlCycle = 0x0; // float32
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
            public const nint MVStancePositionMs = 0x0; // 
            public const nint MVMidpointPositionMs = 0xC; // 
            public const nint MFlStanceDirectionMs = 0x18; // float32
            public const nint MVToStrideStartPos = 0x1C; // 
            public const nint MStanceCycle = 0x28; // CAnimCycle
            public const nint MFootLiftCycle = 0x2C; // CFootCycle
            public const nint MFootOffCycle = 0x30; // CFootCycle
            public const nint MFootStrikeCycle = 0x34; // CFootCycle
            public const nint MFootLandCycle = 0x38; // CFootCycle
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CFootTrajectory {
            public const nint MVOffset = 0x0; // 
            public const nint MFlRotationOffset = 0xC; // float32
            public const nint MFlProgression = 0x10; // float32
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CFootTrajectories {
            public const nint MTrajectories = 0x0; // CUtlVector< CFootTrajectory >
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CFootStride {
            public const nint MDefinition = 0x0; // CFootCycleDefinition
            public const nint MTrajectories = 0x40; // CFootTrajectories
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CFootMotion {
            public const nint MStrides = 0x0; // CUtlVector< CFootStride >
            public const nint MName = 0x18; // CUtlString
            public const nint MBAdditive = 0x20; // bool
        }
        // Parent: None
        // Fields count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class SkeletonAnimCaptureT {
            public const nint MNEntIndex = 0x0; // CEntityIndex
            public const nint MNEntParent = 0x4; // CEntityIndex
            public const nint MImportedCollision = 0x8; // CUtlVector< CEntityIndex >
            public const nint MModelName = 0x20; // CUtlString
            public const nint MCaptureName = 0x28; // CUtlString
            public const nint MModelBindPose = 0x30; // CUtlVector< SkeletonAnimCapture_t::Bone_t >
            public const nint MFeModelInitPose = 0x48; // CUtlVector< SkeletonAnimCapture_t::Bone_t >
            public const nint MNFlexControllers = 0x60; // int32
            public const nint MBPredicted = 0x64; // bool
            public const nint MFrames = 0xA8; // CUtlVector< SkeletonAnimCapture_t::Frame_t >
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class SkeletonAnimCaptureTBoneT {
            public const nint MName = 0x0; // CUtlString
            public const nint MBindPose = 0x10; // CTransform
            public const nint MNParent = 0x30; // int32
        }
        // Parent: None
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class SkeletonAnimCaptureTFrameStampT {
            public const nint MFlTime = 0x0; // float32
            public const nint MFlEntitySimTime = 0x4; // float32
            public const nint MBTeleportTick = 0x8; // bool
            public const nint MBPredicted = 0x9; // bool
            public const nint MFlCurTime = 0xC; // float32
            public const nint MFlRealTime = 0x10; // float32
            public const nint MNFrameCount = 0x14; // int32
            public const nint MNTickCount = 0x18; // int32
        }
        // Parent: None
        // Fields count: 9
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class SkeletonAnimCaptureTFrameT {
            public const nint MFlTime = 0x0; // float32
            public const nint MStamp = 0x4; // SkeletonAnimCapture_t::FrameStamp_t
            public const nint MTransform = 0x20; // CTransform
            public const nint MBTeleport = 0x40; // bool
            public const nint MCompositeBones = 0x48; // CUtlVector< CTransform >
            public const nint MSimStateBones = 0x60; // CUtlVector< CTransform >
            public const nint MFeModelAnims = 0x78; // CUtlVector< CTransform >
            public const nint MFeModelPos = 0x90; // CUtlVector< VectorAligned >
            public const nint MFlexControllerWeights = 0xA8; // CUtlVector< float32 >
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class SkeletonAnimCaptureTCameraT {
            public const nint MTmCamera = 0x0; // CTransform
            public const nint MFlTime = 0x20; // float32
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class SkeletonDemoDbT {
            public const nint MAnimCaptures = 0x0; // CUtlVector< SkeletonAnimCapture_t* >
            public const nint MCameraTrack = 0x18; // CUtlVector< SkeletonAnimCapture_t::Camera_t >
            public const nint MFlRecordingTime = 0x30; // float32
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmBoneMask {
            public const nint MId = 0x0; // CGlobalSymbol
            public const nint MWeightInfo = 0x8; // CNmBoneMask::WeightInfo_t
            public const nint MWeights = 0x18; // CUtlVector< float32 >
        }
        // Parent: None
        // Fields count: 9
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmClip {
            public const nint MSkeleton = 0x0; // CStrongHandle< InfoForResourceTypeCNmSkeleton >
            public const nint MNNumFrames = 0x8; // uint32
            public const nint MFlDuration = 0xC; // float32
            public const nint MCompressedPoseData = 0x10; // CUtlBinaryBlock
            public const nint MTrackCompressionSettings = 0x28; // CUtlVector< NmCompressionSettings_t >
            public const nint MCompressedPoseOffsets = 0x40; // CUtlVector< uint32 >
            public const nint MSyncTrack = 0xA0; // CNmSyncTrack
            public const nint MRootMotion = 0x150; // CNmRootMotionData
            public const nint MBIsAdditive = 0x1A0; // bool
        }
        // Parent: None
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class NmCompressionSettingsT {
            public const nint MTranslationRangeX = 0x0; // NmCompressionSettings_t::QuantizationRange_t
            public const nint MTranslationRangeY = 0x8; // NmCompressionSettings_t::QuantizationRange_t
            public const nint MTranslationRangeZ = 0x10; // NmCompressionSettings_t::QuantizationRange_t
            public const nint MScaleRange = 0x18; // NmCompressionSettings_t::QuantizationRange_t
            public const nint MConstantRotation = 0x20; // Quaternion
            public const nint MBIsRotationStatic = 0x30; // bool
            public const nint MBIsTranslationStatic = 0x31; // bool
            public const nint MBIsScaleStatic = 0x32; // bool
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class NmCompressionSettingsTQuantizationRangeT {
            public const nint MFlRangeStart = 0x0; // float32
            public const nint MFlRangeLength = 0x4; // float32
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmEvent {
            public const nint MFlStartTime = 0x8; // float32
            public const nint MFlDuration = 0xC; // float32
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmRootMotionData {
            public const nint MTransforms = 0x0; // CUtlVector< CTransform >
            public const nint MNNumFrames = 0x18; // int32
            public const nint MFlAverageLinearVelocity = 0x1C; // float32
            public const nint MFlAverageAngularVelocityRadians = 0x20; // float32
            public const nint MTotalDelta = 0x30; // CTransform
        }
        // Parent: None
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmSkeleton {
            public const nint MId = 0x0; // CGlobalSymbol
            public const nint MBoneIDs = 0x8; // CUtlLeanVector< CGlobalSymbol >
            public const nint MParentIndices = 0x18; // CUtlVector< int32 >
            public const nint MParentSpaceReferencePose = 0x30; // CUtlVector< CTransform >
            public const nint MModelSpaceReferencePose = 0x48; // CUtlVector< CTransform >
            public const nint MNumBonesToSampleAtLowLod = 0x60; // int32
            public const nint MBoneMasks = 0x68; // CUtlLeanVector< CNmBoneMask >
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class NmSyncTrackTimeT {
            public const nint MNEventIdx = 0x0; // int32
            public const nint MPercentageThrough = 0x4; // NmPercent_t
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class NmSyncTrackTimeRangeT {
            public const nint MStartTime = 0x0; // NmSyncTrackTime_t
            public const nint MEndTime = 0x8; // NmSyncTrackTime_t
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmSyncTrack {
            public const nint MSyncEvents = 0x0; // CUtlLeanVectorFixedGrowable< CNmSyncTrack::Event_t >
            public const nint MNStartEventOffset = 0xA8; // int32
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmSyncTrackEventMarkerT {
            public const nint MStartTime = 0x0; // NmPercent_t
            public const nint MId = 0x8; // CGlobalSymbol
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmSyncTrackEventT {
            public const nint MId = 0x0; // CGlobalSymbol
            public const nint MStartTime = 0x8; // NmPercent_t
            public const nint MDuration = 0xC; // NmPercent_t
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class NmPercentT {
            public const nint MFlValue = 0x0; // float32
        }
        // Parent: CNmEvent
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmLegacyEvent {
        }
        // Parent: CNmEvent
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmFootEvent {
            public const nint MPhase = 0x10; // NmFootPhase_t
        }
        // Parent: CNmEvent
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmIdEvent {
            public const nint MId = 0x10; // CGlobalSymbol
        }
        // Parent: CNmEvent
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmTransitionEvent {
            public const nint MRule = 0x10; // NmTransitionRule_t
            public const nint MId = 0x18; // CGlobalSymbol
        }
        // Parent: CNmEvent
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmFrameSnapEvent {
            public const nint MFrameSnapMode = 0x10; // NmFrameSnapEventMode_t
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDataSet {
            public const nint MVariationId = 0x0; // CGlobalSymbol
            public const nint MSkeleton = 0x8; // CStrongHandle< InfoForResourceTypeCNmSkeleton >
            public const nint MResources = 0x10; // CUtlVector< CStrongHandleVoid >
        }
        // Parent: None
        // Fields count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraph {
            public const nint MPersistentNodeIndices = 0x0; // CUtlVector< int16 >
            public const nint MInstanceNodeStartOffsets = 0x18; // CUtlVector< uint32 >
            public const nint MInstanceRequiredMemory = 0x30; // uint32
            public const nint MInstanceRequiredAlignment = 0x34; // uint32
            public const nint MRootNodeIdx = 0x38; // int16
            public const nint MControlParameterIDs = 0x40; // CUtlVector< CGlobalSymbol >
            public const nint MVirtualParameterIDs = 0x58; // CUtlVector< CGlobalSymbol >
            public const nint MVirtualParameterNodeIndices = 0x70; // CUtlVector< int16 >
            public const nint MChildGraphSlots = 0x88; // CUtlVector< CNmGraph::ChildGraphSlot_t >
            public const nint MExternalGraphSlots = 0xA0; // CUtlVector< CNmGraph::ExternalGraphSlot_t >
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphExternalGraphSlotT {
            public const nint MNNodeIdx = 0x0; // int16
            public const nint MSlotId = 0x8; // CGlobalSymbol
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphChildGraphSlotT {
            public const nint MNNodeIdx = 0x0; // int16
            public const nint MDataSlotIdx = 0x2; // int16
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphVariation {
            public const nint MGraph = 0x0; // CStrongHandle< InfoForResourceTypeCNmGraph >
            public const nint MDataSet = 0x8; // CStrongHandle< InfoForResourceTypeCNmGraphDataSet >
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class BoneDemoCaptureSettingsT {
            public const nint MBoneName = 0x0; // CUtlString
            public const nint MFlChainLength = 0x8; // float32
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class IkDemoCaptureSettingsT {
            public const nint MParentBoneName = 0x0; // CUtlString
            public const nint MEMode = 0x8; // IKChannelMode
            public const nint MIkChainName = 0x10; // CUtlString
            public const nint MOneBoneStart = 0x18; // CUtlString
            public const nint MOneBoneEnd = 0x20; // CUtlString
        }
        // Parent: None
        // Fields count: 16
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimDemoCaptureSettings {
            public const nint MRangeBoneChainLength = 0x0; // Vector2D
            public const nint MRangeMaxSplineErrorRotation = 0x8; // Vector2D
            public const nint MFlMaxSplineErrorTranslation = 0x10; // float32
            public const nint MFlMaxSplineErrorScale = 0x14; // float32
            public const nint MFlIkRotationMaxSplineError = 0x18; // float32
            public const nint MFlIkTranslationMaxSplineError = 0x1C; // float32
            public const nint MFlMaxQuantizationErrorRotation = 0x20; // float32
            public const nint MFlMaxQuantizationErrorTranslation = 0x24; // float32
            public const nint MFlMaxQuantizationErrorScale = 0x28; // float32
            public const nint MFlIkRotationMaxQuantizationError = 0x2C; // float32
            public const nint MFlIkTranslationMaxQuantizationError = 0x30; // float32
            public const nint MBaseSequence = 0x38; // CUtlString
            public const nint MNBaseSequenceFrame = 0x40; // int32
            public const nint MBoneSelectionMode = 0x44; // EDemoBoneSelectionMode
            public const nint MBones = 0x48; // CUtlVector< BoneDemoCaptureSettings_t >
            public const nint MIkChains = 0x60; // CUtlVector< IKDemoCaptureSettings_t >
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimReplayFrame {
            public const nint MInputDataBlocks = 0x10; // CUtlVector< CUtlBinaryBlock >
            public const nint MInstanceData = 0x28; // CUtlBinaryBlock
            public const nint MStartingLocalToWorldTransform = 0x40; // CTransform
            public const nint MLocalToWorldTransform = 0x60; // CTransform
            public const nint MTimeStamp = 0x80; // float32
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimGraphDebugReplay {
            public const nint MAnimGraphFileName = 0x40; // CUtlString
            public const nint MFrameList = 0x48; // CUtlVector< CSmartPtr< CAnimReplayFrame > >
            public const nint MStartIndex = 0x60; // int32
            public const nint MWriteIndex = 0x64; // int32
            public const nint MFrameCount = 0x68; // int32
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimGraphModelBinding {
            public const nint MModelName = 0x8; // CUtlString
            public const nint MPSharedData = 0x10; // CSmartPtr< CAnimUpdateSharedData >
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CAnimInputDamping {
            public const nint MSpeedFunction = 0x8; // DampingSpeedFunction
            public const nint MFSpeedScale = 0xC; // float32
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimParamHandle {
            public const nint MType = 0x0; // AnimParamType_t
            public const nint MIndex = 0x1; // uint8
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimParamHandleMap {
            public const nint MList = 0x0; // CUtlHashtable< uint16, int16 >
        }
        // Parent: None
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimParameterManagerUpdater {
            public const nint MParameters = 0x18; // CUtlVector< CSmartPtr< CAnimParameterBase > >
            public const nint MIdToIndexMap = 0x30; // CUtlHashtable< AnimParamID, int32 >
            public const nint MNameToIndexMap = 0x50; // CUtlHashtable< CUtlString, int32 >
            public const nint MIndexToHandle = 0x70; // CUtlVector< CAnimParamHandle >
            public const nint MAutoResetParams = 0x88; // CUtlVector< CUtlPair< CAnimParamHandle, CAnimVariant > >
            public const nint MAutoResetMap = 0xA0; // CUtlHashtable< CAnimParamHandle, int16 >
        }
        // Parent: None
        // Fields count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimUpdateSharedData {
            public const nint MNodes = 0x10; // CUtlVector< CSmartPtr< CAnimUpdateNodeBase > >
            public const nint MNodeIndexMap = 0x28; // CUtlHashtable< CAnimNodePath, int32 >
            public const nint MComponents = 0x48; // CUtlVector< CSmartPtr< CAnimComponentUpdater > >
            public const nint MPParamListUpdater = 0x60; // CSmartPtr< CAnimParameterManagerUpdater >
            public const nint MPTagManagerUpdater = 0x68; // CSmartPtr< CAnimTagManagerUpdater >
            public const nint MScriptManager = 0x70; // CSmartPtr< CAnimScriptManager >
            public const nint MSettings = 0x78; // CAnimGraphSettingsManager
            public const nint MPStaticPoseCache = 0xA8; // CSmartPtr< CStaticPoseCacheBuilder >
            public const nint MPSkeleton = 0xB0; // CSmartPtr< CAnimSkeleton >
            public const nint MRootNodePath = 0xB8; // CAnimNodePath
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CBlendCurve {
            public const nint MFlControlPoint1 = 0x0; // float32
            public const nint MFlControlPoint2 = 0x4; // float32
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class ParamSpanSampleT {
            public const nint MValue = 0x0; // CAnimVariant
            public const nint MFlCycle = 0x14; // float32
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class ParamSpanT {
            public const nint MSamples = 0x0; // CUtlVector< ParamSpanSample_t >
            public const nint MHParam = 0x18; // CAnimParamHandle
            public const nint MEParamType = 0x1A; // AnimParamType_t
            public const nint MFlStartCycle = 0x1C; // float32
            public const nint MFlEndCycle = 0x20; // float32
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CParamSpanUpdater {
            public const nint MSpans = 0x0; // CUtlVector< ParamSpan_t >
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
            public const nint MSettingsGroups = 0x18; // CUtlVector< CSmartPtr< CAnimGraphSettingsGroup > >
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CCachedPose {
            public const nint MTransforms = 0x8; // CUtlVector< CTransform >
            public const nint MMorphWeights = 0x20; // CUtlVector< float32 >
            public const nint MHSequence = 0x38; // HSequence
            public const nint MFlCycle = 0x3C; // float32
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CStaticPoseCache {
            public const nint MPoses = 0x10; // CUtlVector< CCachedPose >
            public const nint MNBoneCount = 0x28; // int32
            public const nint MNMorphCount = 0x2C; // int32
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
            public const nint MNTagIndex = 0x18; // int32
            public const nint MBIsZeroDuration = 0x1C; // bool
        }
        // Parent: CAnimActionUpdater
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSetParameterActionUpdater {
            public const nint MHParam = 0x18; // CAnimParamHandle
            public const nint MValue = 0x1A; // CAnimVariant
        }
        // Parent: CAnimActionUpdater
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CToggleComponentActionUpdater {
            public const nint MComponentId = 0x18; // AnimComponentID
            public const nint MBSetEnabled = 0x1C; // bool
        }
        // Parent: CAnimActionUpdater
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CExpressionActionUpdater {
            public const nint MHParam = 0x18; // CAnimParamHandle
            public const nint MEParamType = 0x1A; // AnimParamType_t
            public const nint MHScript = 0x1C; // AnimScriptHandle
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimTagBase {
            public const nint MName = 0x18; // CGlobalSymbol
            public const nint MGroup = 0x20; // CGlobalSymbol
            public const nint MTagId = 0x28; // AnimTagID
            public const nint MBIsReferenced = 0x40; // bool
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimTagManagerUpdater {
            public const nint MTags = 0x18; // CUtlVector< CSmartPtr< CAnimTagBase > >
        }
        // Parent: CAnimTagBase
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CAudioAnimTag {
            public const nint MClipName = 0x50; // CUtlString
            public const nint MAttachmentName = 0x58; // CUtlString
            public const nint MFlVolume = 0x60; // float32
            public const nint MBStopWhenTagEnds = 0x64; // bool
            public const nint MBStopWhenGraphEnds = 0x65; // bool
            public const nint MBPlayOnServer = 0x66; // bool
            public const nint MBPlayOnClient = 0x67; // bool
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyElementNameFn
        public static class CBodyGroupSetting {
            public const nint MBodyGroupName = 0x0; // CUtlString
            public const nint MNBodyGroupOption = 0x8; // int32
        }
        // Parent: CAnimTagBase
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CBodyGroupAnimTag {
            public const nint MNPriority = 0x50; // int32
            public const nint MBodyGroupSettings = 0x58; // CUtlVector< CBodyGroupSetting >
        }
        // Parent: CAnimTagBase
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CClothSettingsAnimTag {
            public const nint MFlStiffness = 0x50; // float32
            public const nint MFlEaseIn = 0x54; // float32
            public const nint MFlEaseOut = 0x58; // float32
            public const nint MNVertexSet = 0x60; // CUtlString
        }
        // Parent: CAnimTagBase
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CFootFallAnimTag {
            public const nint MFoot = 0x50; // FootFallTagFoot_t
        }
        // Parent: CAnimTagBase
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CFootstepLandedAnimTag {
            public const nint MFootstepType = 0x50; // FootstepLandedFootSoundType_t
            public const nint MOverrideSoundName = 0x58; // CUtlString
            public const nint MDebugAnimSourceString = 0x60; // CUtlString
            public const nint MBoneName = 0x68; // CUtlString
        }
        // Parent: CAnimTagBase
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CMaterialAttributeAnimTag {
            public const nint MAttributeName = 0x50; // CUtlString
            public const nint MAttributeType = 0x58; // MatterialAttributeTagType_t
            public const nint MFlValue = 0x5C; // float32
            public const nint MColor = 0x60; // Color
        }
        // Parent: CAnimTagBase
        // Fields count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CParticleAnimTag {
            public const nint MHParticleSystem = 0x50; // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition >
            public const nint MParticleSystemName = 0x58; // CUtlString
            public const nint MConfigName = 0x60; // CUtlString
            public const nint MBDetachFromOwner = 0x68; // bool
            public const nint MBStopWhenTagEnds = 0x69; // bool
            public const nint MBTagEndStopIsInstant = 0x6A; // bool
            public const nint MAttachmentName = 0x70; // CUtlString
            public const nint MAttachmentType = 0x78; // ParticleAttachment_t
            public const nint MAttachmentCp1Name = 0x80; // CUtlString
            public const nint MAttachmentCp1Type = 0x88; // ParticleAttachment_t
        }
        // Parent: CAnimTagBase
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CRagdollAnimTag {
            public const nint MNPoseControl = 0x50; // AnimPoseControl
            public const nint MFlFrequency = 0x54; // float32
            public const nint MFlDampingRatio = 0x58; // float32
            public const nint MFlDecayDuration = 0x5C; // float32
            public const nint MFlDecayBias = 0x60; // float32
            public const nint MBDestroy = 0x64; // bool
        }
        // Parent: CAnimTagBase
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CSequenceFinishedAnimTag {
            public const nint MSequenceName = 0x50; // CUtlString
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
            public const nint MName = 0x18; // CUtlString
            public const nint MId = 0x20; // AnimComponentID
            public const nint MNetworkMode = 0x24; // AnimNodeNetworkMode
            public const nint MBStartEnabled = 0x28; // bool
        }
        // Parent: CAnimComponentUpdater
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimScriptComponentUpdater {
            public const nint MHScript = 0x30; // AnimScriptHandle
        }
        // Parent: CAnimComponentUpdater
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CcppScriptComponentUpdater {
            public const nint MScriptsToRun = 0x30; // CUtlVector< CGlobalSymbol >
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CDampedValueUpdateItem {
            public const nint MDamping = 0x0; // CAnimInputDamping
            public const nint MHParamIn = 0x18; // CAnimParamHandle
            public const nint MHParamOut = 0x1A; // CAnimParamHandle
        }
        // Parent: CAnimComponentUpdater
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CDampedValueComponentUpdater {
            public const nint MItems = 0x30; // CUtlVector< CDampedValueUpdateItem >
        }
        // Parent: CAnimComponentUpdater
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CDemoSettingsComponentUpdater {
            public const nint MSettings = 0x30; // CAnimDemoCaptureSettings
        }
        // Parent: CAnimComponentUpdater
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class ClodComponentUpdater {
            public const nint MNServerLod = 0x30; // int32
        }
        // Parent: CAnimComponentUpdater
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CLookComponentUpdater {
            public const nint MHLookHeading = 0x34; // CAnimParamHandle
            public const nint MHLookHeadingVelocity = 0x36; // CAnimParamHandle
            public const nint MHLookPitch = 0x38; // CAnimParamHandle
            public const nint MHLookDistance = 0x3A; // CAnimParamHandle
            public const nint MHLookDirection = 0x3C; // CAnimParamHandle
            public const nint MHLookTarget = 0x3E; // CAnimParamHandle
            public const nint MHLookTargetWorldSpace = 0x40; // CAnimParamHandle
            public const nint MBNetworkLookTarget = 0x42; // bool
        }
        // Parent: CAnimComponentUpdater
        // Fields count: 9
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CMovementComponentUpdater {
            public const nint MMotors = 0x30; // CUtlVector< CSmartPtr< CAnimMotorUpdaterBase > >
            public const nint MFacingDamping = 0x48; // CAnimInputDamping
            public const nint MEDefaultFacingMode = 0x58; // FacingMode
            public const nint MNDefaultMotorIndex = 0x64; // int32
            public const nint MFlDefaultRunSpeed = 0x68; // float32
            public const nint MBMoveVarsDisabled = 0x6C; // bool
            public const nint MBNetworkPath = 0x6D; // bool
            public const nint MBNetworkFacing = 0x6E; // bool
            public const nint MParamHandles = 0x6F; // CAnimParamHandle[30]
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class WeightList {
            public const nint MName = 0x0; // CUtlString
            public const nint MWeights = 0x8; // CUtlVector< float32 >
        }
        // Parent: CAnimComponentUpdater
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CRagdollComponentUpdater {
            public const nint MRagdollNodePaths = 0x30; // CUtlVector< CAnimNodePath >
            public const nint MBoneIndices = 0x48; // CUtlVector< int32 >
            public const nint MBoneNames = 0x60; // CUtlVector< CUtlString >
            public const nint MWeightLists = 0x78; // CUtlVector< WeightList >
            public const nint MFlSpringFrequencyMin = 0x90; // float32
            public const nint MFlSpringFrequencyMax = 0x94; // float32
            public const nint MFlMaxStretch = 0x98; // float32
            public const nint MBSolidCollisionAtZeroWeight = 0x9C; // bool
        }
        // Parent: CAnimComponentUpdater
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSlopeComponentUpdater {
            public const nint MFlTraceDistance = 0x34; // float32
            public const nint MHSlopeAngle = 0x38; // CAnimParamHandle
            public const nint MHSlopeAngleFront = 0x3A; // CAnimParamHandle
            public const nint MHSlopeAngleSide = 0x3C; // CAnimParamHandle
            public const nint MHSlopeHeading = 0x3E; // CAnimParamHandle
            public const nint MHSlopeNormal = 0x40; // CAnimParamHandle
            public const nint MHSlopeNormalWorldSpace = 0x42; // CAnimParamHandle
        }
        // Parent: CAnimComponentUpdater
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CStateMachineComponentUpdater {
            public const nint MStateMachine = 0x30; // CAnimStateMachineUpdater
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CMotionDataSet {
            public const nint MGroups = 0x0; // CUtlVector< CMotionGraphGroup >
            public const nint MNDimensionCount = 0x18; // int32
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CMotionGraphGroup {
            public const nint MSearchDb = 0x0; // CMotionSearchDB
            public const nint MMotionGraphs = 0xB8; // CUtlVector< CSmartPtr< CMotionGraph > >
            public const nint MMotionGraphConfigs = 0xD0; // CUtlVector< CMotionGraphConfig >
            public const nint MSampleToConfig = 0xE8; // CUtlVector< int32 >
            public const nint MHIsActiveScript = 0x100; // AnimScriptHandle
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class SampleCode {
            public const nint MSubCode = 0x0; // uint8[8]
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class MotionDbIndex {
            public const nint MNIndex = 0x0; // uint32
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVectorQuantizer {
            public const nint MCentroidVectors = 0x0; // CUtlVector< float32 >
            public const nint MNCentroids = 0x18; // int32
            public const nint MNDimensions = 0x1C; // int32
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CProductQuantizer {
            public const nint MSubQuantizers = 0x0; // CUtlVector< CVectorQuantizer >
            public const nint MNDimensions = 0x18; // int32
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CMotionSearchNode {
            public const nint MChildren = 0x0; // CUtlVector< CMotionSearchNode* >
            public const nint MQuantizer = 0x18; // CVectorQuantizer
            public const nint MSampleCodes = 0x38; // CUtlVector< CUtlVector< SampleCode > >
            public const nint MSampleIndices = 0x50; // CUtlVector< CUtlVector< int32 > >
            public const nint MSelectableSamples = 0x68; // CUtlVector< int32 >
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CMotionSearchDb {
            public const nint MRootNode = 0x0; // CMotionSearchNode
            public const nint MResidualQuantizer = 0x80; // CProductQuantizer
            public const nint MCodeIndices = 0xA0; // CUtlVector< MotionDBIndex >
        }
        // Parent: None
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CMotionGraph {
            public const nint MParamSpans = 0x10; // CParamSpanUpdater
            public const nint MTags = 0x28; // CUtlVector< TagSpan_t >
            public const nint MPRootNode = 0x40; // CSmartPtr< CMotionNode >
            public const nint MNParameterCount = 0x48; // int32
            public const nint MNConfigStartIndex = 0x4C; // int32
            public const nint MNConfigCount = 0x50; // int32
            public const nint MBLoop = 0x54; // bool
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
            public const nint MName = 0x18; // CUtlString
            public const nint MId = 0x20; // AnimNodeID
        }
        // Parent: CMotionNode
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CMotionNodeSequence {
            public const nint MTags = 0x28; // CUtlVector< TagSpan_t >
            public const nint MHSequence = 0x40; // HSequence
            public const nint MFlPlaybackSpeed = 0x44; // float32
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class MotionBlendItem {
            public const nint MPChild = 0x0; // CSmartPtr< CMotionNode >
            public const nint MFlKeyValue = 0x8; // float32
        }
        // Parent: CMotionNode
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CMotionNodeBlend1D {
            public const nint MBlendItems = 0x28; // CUtlVector< MotionBlendItem >
            public const nint MNParamIndex = 0x40; // int32
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CMotionMetricEvaluator {
            public const nint MMeans = 0x18; // CUtlVector< float32 >
            public const nint MStandardDeviations = 0x30; // CUtlVector< float32 >
            public const nint MFlWeight = 0x48; // float32
            public const nint MNDimensionStartIndex = 0x4C; // int32
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
            public const nint MNBoneIndex = 0x50; // int32
        }
        // Parent: CMotionMetricEvaluator
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CBoneVelocityMetricEvaluator {
            public const nint MNBoneIndex = 0x50; // int32
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
            public const nint MFlMaxDistance = 0x50; // float32
            public const nint MFlMinDistance = 0x54; // float32
            public const nint MFlStartGoalFilterDistance = 0x58; // float32
            public const nint MFlMaxGoalOvershootScale = 0x5C; // float32
            public const nint MBFilterFixedMinDistance = 0x60; // bool
            public const nint MBFilterGoalDistance = 0x61; // bool
            public const nint MBFilterGoalOvershoot = 0x62; // bool
        }
        // Parent: CMotionMetricEvaluator
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CFootCycleMetricEvaluator {
            public const nint MFootIndices = 0x50; // CUtlVector< int32 >
        }
        // Parent: CMotionMetricEvaluator
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CFootPositionMetricEvaluator {
            public const nint MFootIndices = 0x50; // CUtlVector< int32 >
            public const nint MBIgnoreSlope = 0x68; // bool
        }
        // Parent: CMotionMetricEvaluator
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CFutureFacingMetricEvaluator {
            public const nint MFlDistance = 0x50; // float32
            public const nint MFlTime = 0x54; // float32
        }
        // Parent: CMotionMetricEvaluator
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CFutureVelocityMetricEvaluator {
            public const nint MFlDistance = 0x50; // float32
            public const nint MFlStoppingDistance = 0x54; // float32
            public const nint MFlTargetSpeed = 0x58; // float32
            public const nint MEMode = 0x5C; // VelocityMetricMode
        }
        // Parent: CMotionMetricEvaluator
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPathMetricEvaluator {
            public const nint MPathTimeSamples = 0x50; // CUtlVector< float32 >
            public const nint MFlDistance = 0x68; // float32
            public const nint MBExtrapolateMovement = 0x6C; // bool
            public const nint MFlMinExtrapolationSpeed = 0x70; // float32
        }
        // Parent: CMotionMetricEvaluator
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CStepsRemainingMetricEvaluator {
            public const nint MFootIndices = 0x50; // CUtlVector< int32 >
            public const nint MFlMinStepsRemaining = 0x68; // float32
        }
        // Parent: CMotionMetricEvaluator
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CTimeRemainingMetricEvaluator {
            public const nint MBMatchByTimeRemaining = 0x50; // bool
            public const nint MFlMaxTimeRemaining = 0x54; // float32
            public const nint MBFilterByTimeRemaining = 0x58; // bool
            public const nint MFlMinTimeRemaining = 0x5C; // float32
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimMotorUpdaterBase {
            public const nint MName = 0x10; // CUtlString
            public const nint MBDefault = 0x18; // bool
        }
        // Parent: CAnimMotorUpdaterBase
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPathAnimMotorUpdaterBase {
            public const nint MBLockToPath = 0x20; // bool
        }
        // Parent: CPathAnimMotorUpdaterBase
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CDampedPathAnimMotorUpdater {
            public const nint MFlAnticipationTime = 0x2C; // float32
            public const nint MFlMinSpeedScale = 0x30; // float32
            public const nint MHAnticipationPosParam = 0x34; // CAnimParamHandle
            public const nint MHAnticipationHeadingParam = 0x36; // CAnimParamHandle
            public const nint MFlSpringConstant = 0x38; // float32
            public const nint MFlMinSpringTension = 0x3C; // float32
            public const nint MFlMaxSpringTension = 0x40; // float32
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
            public const nint MSampleTimes = 0x20; // CUtlVector< float32 >
            public const nint MFlSpringConstant = 0x3C; // float32
            public const nint MFlAnticipationDistance = 0x40; // float32
            public const nint MHAnticipationPosParam = 0x44; // CAnimParamHandle
            public const nint MHAnticipationHeadingParam = 0x46; // CAnimParamHandle
            public const nint MBUseAcceleration = 0x48; // bool
        }
    }
    // Module: client.dll
    // Classes count: 256
    // Enums count: 8
    public static class Client {
        // Alignment: 4
        // Members count: 5
        public enum CBaseCombatCharacterWaterWakeModeT : int {
            WaterWakeNone = 0,
            WaterWakeIdle = 1,
            WaterWakeWalking = 2,
            WaterWakeRunning = 3,
            WaterWakeWaterOverhead = 4
        }
        // Alignment: 4
        // Members count: 6
        public enum CompositeMaterialMatchFilterTypeT : int {
            MatchFilterMaterialAttributeExists = 0,
            MatchFilterMaterialShader = 1,
            MatchFilterMaterialNameSubstr = 2,
            MatchFilterMaterialAttributeEquals = 3,
            MatchFilterMaterialPropertyExists = 4,
            MatchFilterMaterialPropertyEquals = 5
        }
        // Alignment: 4
        // Members count: 2
        public enum CompositeMaterialVarSystemVarT : int {
            CompmatsysvarCompositetime = 0,
            CompmatsysvarEmptyResourceSpacer = 1
        }
        // Alignment: 4
        // Members count: 14
        public enum CompositeMaterialInputLooseVariableTypeT : int {
            LooseVariableTypeBoolean = 0,
            LooseVariableTypeInteger1 = 1,
            LooseVariableTypeInteger2 = 2,
            LooseVariableTypeInteger3 = 3,
            LooseVariableTypeInteger4 = 4,
            LooseVariableTypeFloat1 = 5,
            LooseVariableTypeFloat2 = 6,
            LooseVariableTypeFloat3 = 7,
            LooseVariableTypeFloat4 = 8,
            LooseVariableTypeColor4 = 9,
            LooseVariableTypeString = 10,
            LooseVariableTypeSystemvar = 11,
            LooseVariableTypeResourceMaterial = 12,
            LooseVariableTypeResourceTexture = 13
        }
        // Alignment: 4
        // Members count: 7
        public enum CompositeMaterialInputTextureTypeT : int {
            InputTextureTypeDefault = 0,
            InputTextureTypeNormalmap = 1,
            InputTextureTypeColor = 2,
            InputTextureTypeMasks = 3,
            InputTextureTypeRoughness = 4,
            InputTextureTypePearlescenceMask = 5,
            InputTextureTypeAo = 6
        }
        // Alignment: 4
        // Members count: 10
        public enum CompMatPropertyMutatorTypeT : int {
            CompMatPropertyMutatorInit = 0,
            CompMatPropertyMutatorCopyMatchingKeys = 1,
            CompMatPropertyMutatorCopyKeysWithSuffix = 2,
            CompMatPropertyMutatorCopyProperty = 3,
            CompMatPropertyMutatorSetValue = 4,
            CompMatPropertyMutatorGenerateTexture = 5,
            CompMatPropertyMutatorConditionalMutators = 6,
            CompMatPropertyMutatorPopInputQueue = 7,
            CompMatPropertyMutatorDrawText = 8,
            CompMatPropertyMutatorRandomRollInputVariables = 9
        }
        // Alignment: 4
        // Members count: 3
        public enum CompMatPropertyMutatorConditionTypeT : int {
            CompMatMutatorConditionInputContainerExists = 0,
            CompMatMutatorConditionInputContainerValueExists = 1,
            CompMatMutatorConditionInputContainerValueEquals = 2
        }
        // Alignment: 4
        // Members count: 6
        public enum CompositeMaterialInputContainerSourceTypeT : int {
            ContainerSourceTypeTargetMaterial = 0,
            ContainerSourceTypeMaterialFromTargetAttr = 1,
            ContainerSourceTypeSpecificMaterial = 2,
            ContainerSourceTypeLooseVariables = 3,
            ContainerSourceTypeVariableFromTargetAttr = 4,
            ContainerSourceTypeTargetInstanceMaterial = 5
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
            public const nint MNameStringableIndex = 0x14; // int32
            public const nint MName = 0x18; // CUtlSymbolLarge
            public const nint MDesignerName = 0x20; // CUtlSymbolLarge
            public const nint MFlags = 0x30; // uint32
            public const nint MWorldGroupId = 0x38; // WorldGroupId_t
            public const nint MFDataObjectTypes = 0x3C; // uint32
            public const nint MPathIndex = 0x40; // ChangeAccessorFieldPathIndex_t
            public const nint MPPrev = 0x58; // CEntityIdentity*
            public const nint MPNext = 0x60; // CEntityIdentity*
            public const nint MPPrevByClass = 0x68; // CEntityIdentity*
            public const nint MPNextByClass = 0x70; // CEntityIdentity*
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // NetworkVarNames: m_pEntity (CEntityIdentity *)
        // NetworkVarNames: m_CScriptComponent (CScriptComponent::Storage_t)
        public static class CEntityInstance {
            public const nint MIszPrivateVScripts = 0x8; // CUtlSymbolLarge
            public const nint MPEntity = 0x10; // CEntityIdentity*
            public const nint MCScriptComponent = 0x28; // CScriptComponent*
            public const nint MBVisibleinPvs = 0x30; // bool
        }
        // Parent: CEntityComponent
        // Fields count: 1
        public static class CScriptComponent {
            public const nint MScriptClassName = 0x30; // CUtlSymbolLarge
        }
        // Parent: CEntityComponent
        // Fields count: 2
        public static class CBodyComponent {
            public const nint MPSceneNode = 0x8; // CGameSceneNode*
            public const nint MPChainEntity = 0x20; // CNetworkVarChainer
        }
        // Parent: CBodyComponent
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_sceneNode (CGameSceneNode)
        public static class CBodyComponentPoint {
            public const nint MSceneNode = 0x50; // CGameSceneNode
            public const nint MPChainEntity = 0x1A0; // CNetworkVarChainer
        }
        // Parent: CBodyComponent
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_skeletonInstance (CSkeletonInstance)
        public static class CBodyComponentSkeletonInstance {
            public const nint MSkeletonInstance = 0x50; // CSkeletonInstance
            public const nint MPChainEntity = 0x430; // CNetworkVarChainer
        }
        // Parent: CEntityComponent
        // Fields count: 1
        //
        // Metadata:
        // NetworkVarNames: m_bvDisabledHitGroups (uint32)
        public static class CHitboxComponent {
            public const nint MBvDisabledHitGroups = 0x24; // uint32[1]
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
            public const nint MPChainEntity = 0x48; // CNetworkVarChainer
            public const nint MColor = 0x85; // Color
            public const nint MSecondaryColor = 0x89; // Color
            public const nint MFlBrightness = 0x90; // float32
            public const nint MFlBrightnessScale = 0x94; // float32
            public const nint MFlBrightnessMult = 0x98; // float32
            public const nint MFlRange = 0x9C; // float32
            public const nint MFlFalloff = 0xA0; // float32
            public const nint MFlAttenuation0 = 0xA4; // float32
            public const nint MFlAttenuation1 = 0xA8; // float32
            public const nint MFlAttenuation2 = 0xAC; // float32
            public const nint MFlTheta = 0xB0; // float32
            public const nint MFlPhi = 0xB4; // float32
            public const nint MHLightCookie = 0xB8; // CStrongHandle< InfoForResourceTypeCTextureBase >
            public const nint MNCascades = 0xC0; // int32
            public const nint MNCastShadows = 0xC4; // int32
            public const nint MNShadowWidth = 0xC8; // int32
            public const nint MNShadowHeight = 0xCC; // int32
            public const nint MBRenderDiffuse = 0xD0; // bool
            public const nint MNRenderSpecular = 0xD4; // int32
            public const nint MBRenderTransmissive = 0xD8; // bool
            public const nint MFlOrthoLightWidth = 0xDC; // float32
            public const nint MFlOrthoLightHeight = 0xE0; // float32
            public const nint MNStyle = 0xE4; // int32
            public const nint MPattern = 0xE8; // CUtlString
            public const nint MNCascadeRenderStaticObjects = 0xF0; // int32
            public const nint MFlShadowCascadeCrossFade = 0xF4; // float32
            public const nint MFlShadowCascadeDistanceFade = 0xF8; // float32
            public const nint MFlShadowCascadeDistance0 = 0xFC; // float32
            public const nint MFlShadowCascadeDistance1 = 0x100; // float32
            public const nint MFlShadowCascadeDistance2 = 0x104; // float32
            public const nint MFlShadowCascadeDistance3 = 0x108; // float32
            public const nint MNShadowCascadeResolution0 = 0x10C; // int32
            public const nint MNShadowCascadeResolution1 = 0x110; // int32
            public const nint MNShadowCascadeResolution2 = 0x114; // int32
            public const nint MNShadowCascadeResolution3 = 0x118; // int32
            public const nint MBUsesBakedShadowing = 0x11C; // bool
            public const nint MNShadowPriority = 0x120; // int32
            public const nint MNBakedShadowIndex = 0x124; // int32
            public const nint MBRenderToCubemaps = 0x128; // bool
            public const nint MNDirectLight = 0x12C; // int32
            public const nint MNIndirectLight = 0x130; // int32
            public const nint MFlFadeMinDist = 0x134; // float32
            public const nint MFlFadeMaxDist = 0x138; // float32
            public const nint MFlShadowFadeMinDist = 0x13C; // float32
            public const nint MFlShadowFadeMaxDist = 0x140; // float32
            public const nint MBEnabled = 0x144; // bool
            public const nint MBFlicker = 0x145; // bool
            public const nint MBPrecomputedFieldsValid = 0x146; // bool
            public const nint MVPrecomputedBoundsMins = 0x148; // 
            public const nint MVPrecomputedBoundsMaxs = 0x154; // 
            public const nint MVPrecomputedObbOrigin = 0x160; // 
            public const nint MVPrecomputedObbAngles = 0x16C; // QAngle
            public const nint MVPrecomputedObbExtent = 0x178; // 
            public const nint MFlPrecomputedMaxRange = 0x184; // float32
            public const nint MNFogLightingMode = 0x188; // int32
            public const nint MFlFogContributionStength = 0x18C; // float32
            public const nint MFlNearClipPlane = 0x190; // float32
            public const nint MSkyColor = 0x194; // Color
            public const nint MFlSkyIntensity = 0x198; // float32
            public const nint MSkyAmbientBounce = 0x19C; // Color
            public const nint MBUseSecondaryColor = 0x1A0; // bool
            public const nint MBMixedShadows = 0x1A1; // bool
            public const nint MFlLightStyleStartTime = 0x1A4; // GameTime_t
            public const nint MFlCapsuleLength = 0x1A8; // float32
            public const nint MFlMinRoughness = 0x1AC; // float32
        }
        // Parent: CEntityComponent
        // Fields count: 5
        public static class CRenderComponent {
            public const nint MPChainEntity = 0x10; // CNetworkVarChainer
            public const nint MBIsRenderingWithViewModels = 0x50; // bool
            public const nint MNSplitscreenFlags = 0x54; // uint32
            public const nint MBEnableRendering = 0x60; // bool
            public const nint MBInterpolationReadyToDraw = 0xB0; // bool
        }
        // Parent: None
        // Fields count: 1
        public static class CBuoyancyHelper {
            public const nint MFlFluidDensity = 0x18; // float32
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseProvideFeatureTag
        // MPulseLibraryBindings
        public static class CBasePlayerControllerApi {
        }
        // Parent: None
        // Fields count: 2
        public static class CCommandContext {
            public const nint Needsprocessing = 0x0; // bool
            public const nint CommandNumber = 0x90; // int32
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // NetworkVarNames: nType (FixAngleSet_t)
        // NetworkVarNames: qAngle (QAngle)
        // NetworkVarNames: nIndex (uint32)
        public static class ViewAngleServerChangeT {
            public const nint NType = 0x30; // FixAngleSet_t
            public const nint QAngle = 0x34; // QAngle
            public const nint NIndex = 0x40; // uint32
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseProvideFeatureTag
        // MPulseLibraryBindings
        public static class CDynamicPropApi {
        }
        // Parent: CPlayerPawnComponent
        // Fields count: 0
        public static class CPlayerAutoaimServices {
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
        public static class AudioparamsT {
            public const nint LocalSound = 0x8; // Vector[8]
            public const nint SoundscapeIndex = 0x68; // int32
            public const nint LocalBits = 0x6C; // uint8
            public const nint SoundscapeEntityListIndex = 0x70; // int32
            public const nint SoundEventHash = 0x74; // uint32
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
        public static class CPlayerCameraServices {
            public const nint MVecCsViewPunchAngle = 0x40; // QAngle
            public const nint MNCsViewPunchAngleTick = 0x4C; // GameTick_t
            public const nint MFlCsViewPunchAngleTickRatio = 0x50; // float32
            public const nint MPlayerFog = 0x58; // C_fogplayerparams_t
            public const nint MHColorCorrectionCtrl = 0x98; // CHandle< C_ColorCorrection >
            public const nint MHViewEntity = 0x9C; // CHandle< C_BaseEntity >
            public const nint MHTonemapController = 0xA0; // CHandle< C_TonemapController2 >
            public const nint MAudio = 0xA8; // audioparams_t
            public const nint MPostProcessingVolumes = 0x120; // C_NetworkUtlVectorBase< CHandle< C_PostProcessingVolume > >
            public const nint MFlOldPlayerZ = 0x138; // float32
            public const nint MFlOldPlayerViewOffsetZ = 0x13C; // float32
            public const nint MCurrentFog = 0x140; // fogparams_t
            public const nint MHOldFogController = 0x1A8; // CHandle< C_FogController >
            public const nint MBOverrideFogColor = 0x1AC; // bool[5]
            public const nint MOverrideFogColor = 0x1B1; // Color[5]
            public const nint MBOverrideFogStartEnd = 0x1C5; // bool[5]
            public const nint MFOverrideFogStart = 0x1CC; // float32[5]
            public const nint MFOverrideFogEnd = 0x1E0; // float32[5]
            public const nint MHActivePostProcessingVolume = 0x1F4; // CHandle< C_PostProcessingVolume >
            public const nint MAngDemoViewAngles = 0x1F8; // QAngle
        }
        // Parent: CPlayerPawnComponent
        // Fields count: 0
        public static class CPlayerFlashlightServices {
        }
        // Parent: CPlayerPawnComponent
        // Fields count: 0
        public static class CPlayerItemServices {
        }
        // Parent: CPlayerPawnComponent
        // Fields count: 15
        //
        // Metadata:
        // NetworkVarNames: m_nToggleButtonDownMask (ButtonBitMask_t)
        // NetworkVarNames: m_flMaxspeed (float32)
        // NetworkVarNames: m_arrForceSubtickMoveWhen (float32)
        public static class CPlayerMovementServices {
            public const nint MNImpulse = 0x40; // int32
            public const nint MNButtons = 0x48; // CInButtonState
            public const nint MNQueuedButtonDownMask = 0x68; // uint64
            public const nint MNQueuedButtonChangeMask = 0x70; // uint64
            public const nint MNButtonDoublePressed = 0x78; // uint64
            public const nint MPButtonPressedCmdNumber = 0x80; // uint32[64]
            public const nint MNLastCommandNumberProcessed = 0x180; // uint32
            public const nint MNToggleButtonDownMask = 0x188; // uint64
            public const nint MFlMaxspeed = 0x198; // float32
            public const nint MArrForceSubtickMoveWhen = 0x19C; // float32[4]
            public const nint MFlForwardMove = 0x1AC; // float32
            public const nint MFlLeftMove = 0x1B0; // float32
            public const nint MFlUpMove = 0x1B4; // float32
            public const nint MVecLastMovementImpulses = 0x1B8; // 
            public const nint MVecOldViewAngles = 0x1C4; // QAngle
        }
        // Parent: CPlayerMovementServices
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
        public static class CPlayerMovementServicesHumanoid {
            public const nint MFlStepSoundTime = 0x1D8; // float32
            public const nint MFlFallVelocity = 0x1DC; // float32
            public const nint MBInCrouch = 0x1E0; // bool
            public const nint MNCrouchState = 0x1E4; // uint32
            public const nint MFlCrouchTransitionStartTime = 0x1E8; // GameTime_t
            public const nint MBDucked = 0x1EC; // bool
            public const nint MBDucking = 0x1ED; // bool
            public const nint MBInDuckJump = 0x1EE; // bool
            public const nint MGroundNormal = 0x1F0; // 
            public const nint MFlSurfaceFriction = 0x1FC; // float32
            public const nint MSurfaceProps = 0x200; // CUtlStringToken
            public const nint MNStepside = 0x210; // int32
        }
        // Parent: CPlayerPawnComponent
        // Fields count: 6
        //
        // Metadata:
        // NetworkVarNames: m_iObserverMode (uint8)
        // NetworkVarNames: m_hObserverTarget (CHandle< CBaseEntity>)
        public static class CPlayerObserverServices {
            public const nint MIObserverMode = 0x40; // uint8
            public const nint MHObserverTarget = 0x44; // CHandle< C_BaseEntity >
            public const nint MIObserverLastMode = 0x48; // ObserverMode_t
            public const nint MBForcedObserverMode = 0x4C; // bool
            public const nint MFlObserverChaseDistance = 0x50; // float32
            public const nint MFlObserverChaseDistanceCalcTime = 0x54; // GameTime_t
        }
        // Parent: CPlayerPawnComponent
        // Fields count: 0
        public static class CPlayerUseServices {
        }
        // Parent: CPlayerPawnComponent
        // Fields count: 0
        public static class CPlayerWaterServices {
        }
        // Parent: CPlayerPawnComponent
        // Fields count: 4
        //
        // Metadata:
        // NetworkVarNames: m_hMyWeapons (CHandle< C_BasePlayerWeapon >)
        // NetworkVarNames: m_hActiveWeapon (CHandle< CBasePlayerWeapon>)
        // NetworkVarNames: m_hLastWeapon (CHandle< CBasePlayerWeapon>)
        // NetworkVarNames: m_iAmmo (uint16)
        public static class CPlayerWeaponServices {
            public const nint MHMyWeapons = 0x40; // C_NetworkUtlVectorBase< CHandle< C_BasePlayerWeapon > >
            public const nint MHActiveWeapon = 0x58; // CHandle< C_BasePlayerWeapon >
            public const nint MHLastWeapon = 0x5C; // CHandle< C_BasePlayerWeapon >
            public const nint MIAmmo = 0x60; // uint16[32]
        }
        // Parent: CBodyComponentSkeletonInstance
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_animationController (CBaseAnimGraphController)
        public static class CBodyComponentBaseAnimGraph {
            public const nint MAnimationController = 0x460; // CBaseAnimGraphController
            public const nint MPChainEntity = 0x1C28; // CNetworkVarChainer
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_ID (CUtlStringToken)
        // NetworkVarNames: m_Values (Vector4D)
        public static class EntityRenderAttributeT {
            public const nint MId = 0x30; // CUtlStringToken
            public const nint MValues = 0x34; // Vector4D
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // NetworkVarNames: m_Handle (ModelConfigHandle_t)
        // NetworkVarNames: m_Name (string_t)
        // NetworkVarNames: m_AssociatedEntities (CHandle< C_BaseModelEntity >)
        // NetworkVarNames: m_AssociatedEntityNames (string_t)
        public static class ActiveModelConfigT {
            public const nint MHandle = 0x28; // ModelConfigHandle_t
            public const nint MName = 0x30; // CUtlSymbolLarge
            public const nint MAssociatedEntities = 0x38; // C_NetworkUtlVectorBase< CHandle< C_BaseModelEntity > >
            public const nint MAssociatedEntityNames = 0x50; // C_NetworkUtlVectorBase< CUtlSymbolLarge >
        }
        // Parent: CBodyComponentSkeletonInstance
        // Fields count: 1
        public static class CBodyComponentBaseModelEntity {
            public const nint MPChainEntity = 0x460; // CNetworkVarChainer
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_hOwner (CEntityHandle)
        // NetworkVarNames: m_name (CUtlStringToken)
        public static class CGameSceneNodeHandle {
            public const nint MHOwner = 0x8; // CEntityHandle
            public const nint MName = 0xC; // CUtlStringToken
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
            public const nint MNodeToWorld = 0x10; // CTransform
            public const nint MPOwner = 0x30; // CEntityInstance*
            public const nint MPParent = 0x38; // CGameSceneNode*
            public const nint MPChild = 0x40; // CGameSceneNode*
            public const nint MPNextSibling = 0x48; // CGameSceneNode*
            public const nint MHParent = 0x70; // CGameSceneNodeHandle
            public const nint MVecOrigin = 0x80; // CNetworkOriginCellCoordQuantizedVector
            public const nint MAngRotation = 0xB8; // QAngle
            public const nint MFlScale = 0xC4; // float32
            public const nint MVecAbsOrigin = 0xC8; // 
            public const nint MAngAbsRotation = 0xD4; // QAngle
            public const nint MFlAbsScale = 0xE0; // float32
            public const nint MNParentAttachmentOrBone = 0xE4; // int16
            public const nint MBDebugAbsOriginChanges = 0xE6; // bool
            public const nint MBDormant = 0xE7; // bool
            public const nint MBForceParentToBeNetworked = 0xE8; // bool
            public const nint MBDirtyHierarchy = 0x0; // bitfield:1
            public const nint MBDirtyBoneMergeInfo = 0x0; // bitfield:1
            public const nint MBNetworkedPositionChanged = 0x0; // bitfield:1
            public const nint MBNetworkedAnglesChanged = 0x0; // bitfield:1
            public const nint MBNetworkedScaleChanged = 0x0; // bitfield:1
            public const nint MBWillBeCallingPostDataUpdate = 0x0; // bitfield:1
            public const nint MBBoneMergeFlex = 0x0; // bitfield:1
            public const nint MNLatchAbsOrigin = 0x0; // bitfield:2
            public const nint MBDirtyBoneMergeBoneToRoot = 0x0; // bitfield:1
            public const nint MNHierarchicalDepth = 0xEB; // uint8
            public const nint MNHierarchyType = 0xEC; // uint8
            public const nint MNDoNotSetAnimTimeInInvalidatePhysicsCount = 0xED; // uint8
            public const nint MName = 0xF0; // CUtlStringToken
            public const nint MHierarchyAttachName = 0x130; // CUtlStringToken
            public const nint MFlZOffset = 0x134; // float32
            public const nint MVRenderOrigin = 0x138; // 
        }
        // Parent: None
        // Fields count: 6
        public static class SequenceHistoryT {
            public const nint MHSequence = 0x0; // HSequence
            public const nint MFlSeqStartTime = 0x4; // GameTime_t
            public const nint MFlSeqFixedCycle = 0x8; // float32
            public const nint MNSeqLoopMode = 0xC; // AnimLoopMode_t
            public const nint MFlPlaybackRate = 0x10; // float32
            public const nint MFlCyclesPerSecond = 0x14; // float32
        }
        // Parent: None
        // Fields count: 8
        //
        // Metadata:
        // NetworkVarNames: m_hSequence (HSequence)
        // NetworkVarNames: m_flPrevCycle (float32)
        // NetworkVarNames: m_flCycle (float32)
        public static class CNetworkedSequenceOperation {
            public const nint MHSequence = 0x8; // HSequence
            public const nint MFlPrevCycle = 0xC; // float32
            public const nint MFlCycle = 0x10; // float32
            public const nint MFlWeight = 0x14; // CNetworkedQuantizedFloat
            public const nint MBSequenceChangeNetworked = 0x1C; // bool
            public const nint MBDiscontinuity = 0x1D; // bool
            public const nint MFlPrevCycleFromDiscontinuity = 0x20; // float32
            public const nint MFlPrevCycleForAnimEventDetection = 0x24; // float32
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
            public const nint MHModel = 0xA0; // CStrongHandle< InfoForResourceTypeCModel >
            public const nint MModelName = 0xA8; // CUtlSymbolLarge
            public const nint MBClientClothCreationSuppressed = 0xE8; // bool
            public const nint MMeshGroupMask = 0x180; // uint64
            public const nint MNIdealMotionType = 0x202; // int8
            public const nint MNForceLod = 0x203; // int8
            public const nint MNClothUpdateFlags = 0x204; // int8
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
            public const nint MModelState = 0x160; // CModelState
            public const nint MBIsAnimationEnabled = 0x370; // bool
            public const nint MBUseParentRenderBounds = 0x371; // bool
            public const nint MBDisableSolidCollisionsForHierarchy = 0x372; // bool
            public const nint MBDirtyMotionType = 0x0; // bitfield:1
            public const nint MBIsGeneratingLatchedParentSpaceState = 0x0; // bitfield:1
            public const nint MMaterialGroup = 0x374; // CUtlStringToken
            public const nint MNHitboxSet = 0x378; // uint8
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_timestamp (GameTime_t)
        // NetworkVarNames: m_nWorldGroupId (WorldGroupId_t)
        public static class IntervalTimer {
            public const nint MTimestamp = 0x8; // GameTime_t
            public const nint MNWorldGroupId = 0xC; // WorldGroupId_t
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
            public const nint MDuration = 0x8; // float32
            public const nint MTimestamp = 0xC; // GameTime_t
            public const nint MTimescale = 0x10; // float32
            public const nint MNWorldGroupId = 0x14; // WorldGroupId_t
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // NetworkVarNames: m_duration (float32)
        // NetworkVarNames: m_timestamp (float32)
        // NetworkVarNames: m_timescale (float32)
        public static class EngineCountdownTimer {
            public const nint MDuration = 0x8; // float32
            public const nint MTimestamp = 0xC; // float32
            public const nint MTimescale = 0x10; // float32
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
            public const nint MFlValues = 0x10; // float32[64]
            public const nint MNValueCounts = 0x110; // int32[64]
            public const nint MNBucketCount = 0x210; // int32
            public const nint MFlInterval = 0x214; // float32
            public const nint MFlFinalValue = 0x218; // float32
            public const nint MNCompressionType = 0x21C; // TimelineCompression_t
            public const nint MBStopped = 0x220; // bool
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
            public const nint MPredNetBoolVariables = 0x8; // C_NetworkUtlVectorBase< uint32 >
            public const nint MPredNetByteVariables = 0x20; // C_NetworkUtlVectorBase< uint8 >
            public const nint MPredNetUInt16Variables = 0x38; // C_NetworkUtlVectorBase< uint16 >
            public const nint MPredNetIntVariables = 0x50; // C_NetworkUtlVectorBase< int32 >
            public const nint MPredNetUInt32Variables = 0x68; // C_NetworkUtlVectorBase< uint32 >
            public const nint MPredNetUInt64Variables = 0x80; // C_NetworkUtlVectorBase< uint64 >
            public const nint MPredNetFloatVariables = 0x98; // C_NetworkUtlVectorBase< float32 >
            public const nint MPredNetVectorVariables = 0xB0; // C_NetworkUtlVectorBase< Vector >
            public const nint MPredNetQuaternionVariables = 0xC8; // C_NetworkUtlVectorBase< Quaternion >
            public const nint MPredNetGlobalSymbolVariables = 0xE0; // C_NetworkUtlVectorBase< CGlobalSymbol >
            public const nint MOwnerOnlyPredNetBoolVariables = 0xF8; // C_NetworkUtlVectorBase< uint32 >
            public const nint MOwnerOnlyPredNetByteVariables = 0x110; // C_NetworkUtlVectorBase< uint8 >
            public const nint MOwnerOnlyPredNetUInt16Variables = 0x128; // C_NetworkUtlVectorBase< uint16 >
            public const nint MOwnerOnlyPredNetIntVariables = 0x140; // C_NetworkUtlVectorBase< int32 >
            public const nint MOwnerOnlyPredNetUInt32Variables = 0x158; // C_NetworkUtlVectorBase< uint32 >
            public const nint MOwnerOnlyPredNetUInt64Variables = 0x170; // C_NetworkUtlVectorBase< uint64 >
            public const nint MOwnerOnlyPredNetFloatVariables = 0x188; // C_NetworkUtlVectorBase< float32 >
            public const nint MOwnerOnlyPredNetVectorVariables = 0x1A0; // C_NetworkUtlVectorBase< Vector >
            public const nint MOwnerOnlyPredNetQuaternionVariables = 0x1B8; // C_NetworkUtlVectorBase< Quaternion >
            public const nint MOwnerOnlyPredNetGlobalSymbolVariables = 0x1D0; // C_NetworkUtlVectorBase< CGlobalSymbol >
            public const nint MNBoolVariablesCount = 0x1E8; // int32
            public const nint MNOwnerOnlyBoolVariablesCount = 0x1EC; // int32
            public const nint MNRandomSeedOffset = 0x1F0; // int32
            public const nint MFlLastTeleportTime = 0x1F4; // float32
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseProvideFeatureTag
        // MPulseLibraryBindings
        public static class CBaseEntityApi {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseProvideFeatureTag
        // MPulseLibraryBindings
        public static class CTakeDamageInfoApi {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseLibraryBindings
        public static class CClientPointEntityApi {
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MPulseInstanceDomainInfo
        // MPulseLibraryBindings
        // MPulseDomainOptInFeatureTag
        public static class CPulseGraphInstanceClientEntity {
            public const nint MPParent = 0xD8; // CClientScriptEntity*
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
        public static class CBaseEntity {
            public const nint MCBodyComponent = 0x38; // CBodyComponent*
            public const nint MNetworkTransmitComponent = 0x40; // CNetworkTransmitComponent
            public const nint MNLastThinkTick = 0x310; // GameTick_t
            public const nint MPGameSceneNode = 0x318; // CGameSceneNode*
            public const nint MPRenderComponent = 0x320; // CRenderComponent*
            public const nint MPCollision = 0x328; // CCollisionProperty*
            public const nint MIMaxHealth = 0x330; // int32
            public const nint MIHealth = 0x334; // int32
            public const nint MLifeState = 0x338; // uint8
            public const nint MBTakesDamage = 0x339; // bool
            public const nint MNTakeDamageFlags = 0x33C; // TakeDamageFlags_t
            public const nint MBIsPlatform = 0x340; // bool
            public const nint MUbInterpolationFrame = 0x341; // uint8
            public const nint MHSceneObjectController = 0x344; // CHandle< C_BaseEntity >
            public const nint MNNoInterpolationTick = 0x348; // int32
            public const nint MNVisibilityNoInterpolationTick = 0x34C; // int32
            public const nint MFlProxyRandomValue = 0x350; // float32
            public const nint MIEFlags = 0x354; // int32
            public const nint MNWaterType = 0x358; // uint8
            public const nint MBInterpolateEvenWithNoModel = 0x359; // bool
            public const nint MBPredictionEligible = 0x35A; // bool
            public const nint MBApplyLayerMatchIdToModel = 0x35B; // bool
            public const nint MTokLayerMatchId = 0x35C; // CUtlStringToken
            public const nint MNSubclassId = 0x360; // CUtlStringToken
            public const nint MNSimulationTick = 0x370; // int32
            public const nint MICurrentThinkContext = 0x374; // int32
            public const nint MAThinkFunctions = 0x378; // CUtlVector< thinkfunc_t >
            public const nint MNDisableContextThinkStartTick = 0x390; // GameTick_t
            public const nint MFlAnimTime = 0x394; // float32
            public const nint MFlSimulationTime = 0x398; // float32
            public const nint MNSceneObjectOverrideFlags = 0x39C; // uint8
            public const nint MBHasSuccessfullyInterpolated = 0x39D; // bool
            public const nint MBHasAddedVarsToInterpolation = 0x39E; // bool
            public const nint MBRenderEvenWhenNotSuccessfullyInterpolated = 0x39F; // bool
            public const nint MNInterpolationLatchDirtyFlags = 0x3A0; // int32[2]
            public const nint MListEntry = 0x3A8; // uint16[11]
            public const nint MFlCreateTime = 0x3C0; // GameTime_t
            public const nint MFlSpeed = 0x3C4; // float32
            public const nint MEntClientFlags = 0x3C8; // uint16
            public const nint MBClientSideRagdoll = 0x3CA; // bool
            public const nint MITeamNum = 0x3CB; // uint8
            public const nint MSpawnflags = 0x3CC; // uint32
            public const nint MNNextThinkTick = 0x3D0; // GameTick_t
            public const nint MFFlags = 0x3D4; // uint32
            public const nint MVecAbsVelocity = 0x3D8; // 
            public const nint MVecVelocity = 0x3E8; // CNetworkVelocityVector
            public const nint MVecBaseVelocity = 0x418; // 
            public const nint MHEffectEntity = 0x424; // CHandle< C_BaseEntity >
            public const nint MHOwnerEntity = 0x428; // CHandle< C_BaseEntity >
            public const nint MMoveCollide = 0x42C; // MoveCollide_t
            public const nint MMoveType = 0x42D; // MoveType_t
            public const nint MNActualMoveType = 0x42E; // MoveType_t
            public const nint MFlWaterLevel = 0x430; // float32
            public const nint MFEffects = 0x434; // uint32
            public const nint MHGroundEntity = 0x438; // CHandle< C_BaseEntity >
            public const nint MFlFriction = 0x43C; // float32
            public const nint MFlElasticity = 0x440; // float32
            public const nint MFlGravityScale = 0x444; // float32
            public const nint MFlTimeScale = 0x448; // float32
            public const nint MBAnimatedEveryTick = 0x44C; // bool
            public const nint MFlNavIgnoreUntilTime = 0x450; // GameTime_t
            public const nint MHThink = 0x454; // uint16
            public const nint MFBBoxVisFlags = 0x460; // uint8
            public const nint MBPredictable = 0x461; // bool
            public const nint MBRenderWithViewModels = 0x462; // bool
            public const nint MNSplitUserPlayerPredictionSlot = 0x464; // CSplitScreenSlot
            public const nint MNFirstPredictableCommand = 0x468; // int32
            public const nint MNLastPredictableCommand = 0x46C; // int32
            public const nint MHOldMoveParent = 0x470; // CHandle< C_BaseEntity >
            public const nint MParticles = 0x478; // CParticleProperty
            public const nint MVecPredictedScriptFloats = 0x4A0; // CUtlVector< float32 >
            public const nint MVecPredictedScriptFloatIDs = 0x4B8; // CUtlVector< int32 >
            public const nint MNNextScriptVarRecordId = 0x4E8; // int32
            public const nint MVecAngVelocity = 0x4F8; // QAngle
            public const nint MDataChangeEventRef = 0x504; // int32
            public const nint MDependencies = 0x508; // CUtlVector< CEntityHandle >
            public const nint MNCreationTick = 0x520; // int32
            public const nint MBAnimTimeChanged = 0x539; // bool
            public const nint MBSimulationTimeChanged = 0x53A; // bool
            public const nint MSUniqueHammerId = 0x548; // CUtlString
        }
        // Parent: CBaseEntity
        // Fields count: 0
        public static class CLogicalEntity {
        }
        // Parent: None
        // Fields count: 5
        public static class CBaseFlexEmphasizedPhoneme {
            public const nint MSClassName = 0x0; // CUtlString
            public const nint MFlAmount = 0x18; // float32
            public const nint MBRequired = 0x1C; // bool
            public const nint MBBasechecked = 0x1D; // bool
            public const nint MBValid = 0x1E; // bool
        }
        // Parent: CBaseEntity
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
        public static class CColorCorrection {
            public const nint MVecOrigin = 0x550; // 
            public const nint MMinFalloff = 0x55C; // float32
            public const nint MMaxFalloff = 0x560; // float32
            public const nint MFlFadeInDuration = 0x564; // float32
            public const nint MFlFadeOutDuration = 0x568; // float32
            public const nint MFlMaxWeight = 0x56C; // float32
            public const nint MFlCurWeight = 0x570; // float32
            public const nint MNetlookupFilename = 0x574; // char[512]
            public const nint MBEnabled = 0x774; // bool
            public const nint MBMaster = 0x775; // bool
            public const nint MBClientSide = 0x776; // bool
            public const nint MBExclusive = 0x777; // bool
            public const nint MBEnabledOnClient = 0x778; // bool[1]
            public const nint MFlCurWeightOnClient = 0x77C; // float32[1]
            public const nint MBFadingIn = 0x780; // bool[1]
            public const nint MFlFadeStartWeight = 0x784; // float32[1]
            public const nint MFlFadeStartTime = 0x788; // float32[1]
            public const nint MFlFadeDuration = 0x78C; // float32[1]
        }
        // Parent: CBaseEntity
        // Fields count: 1
        //
        // Metadata:
        // NetworkVarNames: m_EnvWindShared (CEnvWindShared)
        public static class CEnvWindClientside {
            public const nint MEnvWindShared = 0x550; // C_EnvWindShared
        }
        // Parent: CBaseEntity
        // Fields count: 3
        //
        // Metadata:
        // NetworkVarNames: m_hEntAttached (CHandle< C_BaseEntity>)
        // NetworkVarNames: m_bCheapEffect (bool)
        public static class CEntityFlame {
            public const nint MHEntAttached = 0x550; // CHandle< C_BaseEntity >
            public const nint MHOldAttached = 0x578; // CHandle< C_BaseEntity >
            public const nint MBCheapEffect = 0x57C; // bool
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
            public const nint MHTargetEntity = 0xC; // CHandle< C_BaseEntity >
            public const nint MBState = 0x10; // bool
            public const nint MBAlwaysUpdate = 0x11; // bool
            public const nint MFlLightFov = 0x14; // float32
            public const nint MBEnableShadows = 0x18; // bool
            public const nint MBSimpleProjection = 0x19; // bool
            public const nint MBLightOnlyTarget = 0x1A; // bool
            public const nint MBLightWorld = 0x1B; // bool
            public const nint MBCameraSpace = 0x1C; // bool
            public const nint MFlBrightnessScale = 0x20; // float32
            public const nint MLightColor = 0x24; // Color
            public const nint MFlIntensity = 0x28; // float32
            public const nint MFlLinearAttenuation = 0x2C; // float32
            public const nint MFlQuadraticAttenuation = 0x30; // float32
            public const nint MBVolumetric = 0x34; // bool
            public const nint MFlVolumetricIntensity = 0x38; // float32
            public const nint MFlNoiseStrength = 0x3C; // float32
            public const nint MFlFlashlightTime = 0x40; // float32
            public const nint MNNumPlanes = 0x44; // uint32
            public const nint MFlPlaneOffset = 0x48; // float32
            public const nint MFlColorTransitionTime = 0x4C; // float32
            public const nint MFlAmbient = 0x50; // float32
            public const nint MSpotlightTextureName = 0x54; // char[512]
            public const nint MNSpotlightTextureFrame = 0x254; // int32
            public const nint MNShadowQuality = 0x258; // uint32
            public const nint MFlNearZ = 0x25C; // float32
            public const nint MFlFarZ = 0x260; // float32
            public const nint MFlProjectionSize = 0x264; // float32
            public const nint MFlRotation = 0x268; // float32
            public const nint MBFlipHorizontal = 0x26C; // bool
        }
        // Parent: CBaseEntity
        // Fields count: 4
        //
        // Metadata:
        // NetworkVarNames: m_flScale (float32)
        // NetworkVarNames: m_flStartScale (float32)
        // NetworkVarNames: m_flScaleTime (float)
        // NetworkVarNames: m_nFlags (uint32)
        public static class CBaseFire {
            public const nint MFlScale = 0x550; // float32
            public const nint MFlStartScale = 0x554; // float32
            public const nint MFlScaleTime = 0x558; // float32
            public const nint MNFlags = 0x55C; // uint32
        }
        // Parent: CBaseFire
        // Fields count: 13
        //
        // Metadata:
        // MNetworkOverride
        // MNetworkOverride
        // NetworkVarNames: m_nFlameModelIndex (int32)
        // NetworkVarNames: m_nFlameFromAboveModelIndex (int32)
        public static class CFireSmoke {
            public const nint MNFlameModelIndex = 0x560; // int32
            public const nint MNFlameFromAboveModelIndex = 0x564; // int32
            public const nint MFlScaleRegister = 0x568; // float32
            public const nint MFlScaleStart = 0x56C; // float32
            public const nint MFlScaleEnd = 0x570; // float32
            public const nint MFlScaleTimeStart = 0x574; // GameTime_t
            public const nint MFlScaleTimeEnd = 0x578; // GameTime_t
            public const nint MFlChildFlameSpread = 0x57C; // float32
            public const nint MFlClipPerc = 0x590; // float32
            public const nint MBClipTested = 0x594; // bool
            public const nint MBFadingOut = 0x595; // bool
            public const nint MTParticleSpawn = 0x598; // TimedEvent
            public const nint MPFireOverlay = 0x5A0; // CFireOverlay*
        }
        // Parent: None
        // Fields count: 1
        public static class CRopeKeyframeCPhysicsDelegate {
            public const nint MPKeyframe = 0x8; // C_RopeKeyframe*
        }
        // Parent: None
        // Fields count: 1
        public static class CSceneEntityQueuedEventsT {
            public const nint Starttime = 0x0; // float32
        }
        // Parent: CBaseEntity
        // Fields count: 0
        public static class CTintController {
        }
        // Parent: None
        // Fields count: 13
        public static class CFlashlightEffect {
            public const nint MBIsOn = 0x10; // bool
            public const nint MBMuzzleFlashEnabled = 0x20; // bool
            public const nint MFlMuzzleFlashBrightness = 0x24; // float32
            public const nint MQuatMuzzleFlashOrientation = 0x30; // Quaternion
            public const nint MVecMuzzleFlashOrigin = 0x40; // 
            public const nint MFlFov = 0x4C; // float32
            public const nint MFlFarZ = 0x50; // float32
            public const nint MFlLinearAtten = 0x54; // float32
            public const nint MBCastsShadows = 0x58; // bool
            public const nint MFlCurrentPullBackDist = 0x5C; // float32
            public const nint MFlashlightTexture = 0x60; // CStrongHandle< InfoForResourceTypeCTextureBase >
            public const nint MMuzzleFlashTexture = 0x68; // CStrongHandle< InfoForResourceTypeCTextureBase >
            public const nint MTextureName = 0x70; // char[64]
        }
        // Parent: None
        // Fields count: 5
        public static class CInterpolatedValue {
            public const nint MFlStartTime = 0x0; // float32
            public const nint MFlEndTime = 0x4; // float32
            public const nint MFlStartValue = 0x8; // float32
            public const nint MFlEndValue = 0xC; // float32
            public const nint MNInterpType = 0x10; // int32
        }
        // Parent: None
        // Fields count: 4
        public static class CGlowSprite {
            public const nint MVColor = 0x0; // 
            public const nint MFlHorzSize = 0xC; // float32
            public const nint MFlVertSize = 0x10; // float32
            public const nint MHMaterial = 0x18; // CStrongHandle< InfoForResourceTypeIMaterial2 >
        }
        // Parent: None
        // Fields count: 15
        public static class CGlowOverlay {
            public const nint MVPos = 0x8; // 
            public const nint MBDirectional = 0x14; // bool
            public const nint MVDirection = 0x18; // 
            public const nint MBInSky = 0x24; // bool
            public const nint MSkyObstructionScale = 0x28; // float32
            public const nint MSprites = 0x30; // CGlowSprite[4]
            public const nint MNSprites = 0xB0; // int32
            public const nint MFlProxyRadius = 0xB4; // float32
            public const nint MFlHdrColorScale = 0xB8; // float32
            public const nint MFlGlowObstructionScale = 0xBC; // float32
            public const nint MBCacheGlowObstruction = 0xC0; // bool
            public const nint MBCacheSkyObstruction = 0xC1; // bool
            public const nint MBActivated = 0xC2; // int16
            public const nint MListIndex = 0xC4; // uint16
            public const nint MQueryHandle = 0xC8; // int32
        }
        // Parent: None
        // Fields count: 0
        public static class IClientAlphaProperty {
        }
        // Parent: CBaseEntity
        // Fields count: 2
        public static class CSkyboxReference {
            public const nint MWorldGroupId = 0x550; // WorldGroupId_t
            public const nint MHSkyCamera = 0x554; // CHandle< C_SkyCamera >
        }
        // Parent: CBaseEntity
        // Fields count: 4
        //
        // Metadata:
        // NetworkVarNames: m_skyboxData (sky3dparams_t)
        // NetworkVarNames: m_skyboxSlotToken (CUtlStringToken)
        public static class CSkyCamera {
            public const nint MSkyboxData = 0x550; // sky3dparams_t
            public const nint MSkyboxSlotToken = 0x5E0; // CUtlStringToken
            public const nint MBUseAngles = 0x5E4; // bool
            public const nint MPNext = 0x5E8; // C_SkyCamera*
        }
        // Parent: None
        // Fields count: 2
        public static class TimedEvent {
            public const nint MTimeBetweenEvents = 0x0; // float32
            public const nint MFNextEvent = 0x4; // float32
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
        public static class VPhysicsCollisionAttributeT {
            public const nint MNInteractsAs = 0x8; // uint64
            public const nint MNInteractsWith = 0x10; // uint64
            public const nint MNInteractsExclude = 0x18; // uint64
            public const nint MNEntityId = 0x20; // uint32
            public const nint MNOwnerId = 0x24; // uint32
            public const nint MNHierarchyId = 0x28; // uint16
            public const nint MNCollisionGroup = 0x2A; // uint8
            public const nint MNCollisionFunctionMask = 0x2B; // uint8
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
            public const nint MCollisionAttribute = 0x10; // VPhysicsCollisionAttribute_t
            public const nint MVecMins = 0x40; // 
            public const nint MVecMaxs = 0x4C; // 
            public const nint MUsSolidFlags = 0x5A; // uint8
            public const nint MNSolidType = 0x5B; // SolidType_t
            public const nint MTriggerBloat = 0x5C; // uint8
            public const nint MNSurroundType = 0x5D; // SurroundingBoundsType_t
            public const nint MCollisionGroup = 0x5E; // uint8
            public const nint MNEnablePhysics = 0x5F; // uint8
            public const nint MFlBoundingRadius = 0x60; // float32
            public const nint MVecSpecifiedSurroundingMins = 0x64; // 
            public const nint MVecSpecifiedSurroundingMaxs = 0x70; // 
            public const nint MVecSurroundingMaxs = 0x7C; // 
            public const nint MVecSurroundingMins = 0x88; // 
            public const nint MVCapsuleCenter1 = 0x94; // 
            public const nint MVCapsuleCenter2 = 0xA0; // 
            public const nint MFlCapsuleRadius = 0xAC; // float32
        }
        // Parent: None
        // Fields count: 12
        public static class CDecalInfo {
            public const nint MFlAnimationScale = 0x0; // float32
            public const nint MFlAnimationLifeSpan = 0x4; // float32
            public const nint MFlPlaceTime = 0x8; // float32
            public const nint MFlFadeStartTime = 0xC; // float32
            public const nint MFlFadeDuration = 0x10; // float32
            public const nint MNVbSlot = 0x14; // int32
            public const nint MNBoneIndex = 0x18; // int32
            public const nint MVPosition = 0x28; // 
            public const nint MFlBoundingRadiusSqr = 0x34; // float32
            public const nint MPNext = 0x40; // CDecalInfo*
            public const nint MPPrev = 0x48; // CDecalInfo*
            public const nint MNDecalMaterialIndex = 0xA8; // int32
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
            public const nint MVOrigin = 0x8; // 
            public const nint MVStart = 0x14; // 
            public const nint MVNormal = 0x20; // 
            public const nint MVAngles = 0x2C; // QAngle
            public const nint MHEntity = 0x38; // CEntityHandle
            public const nint MHOtherEntity = 0x3C; // CEntityHandle
            public const nint MFlScale = 0x40; // float32
            public const nint MFlMagnitude = 0x44; // float32
            public const nint MFlRadius = 0x48; // float32
            public const nint MNSurfaceProp = 0x4C; // CUtlStringToken
            public const nint MNEffectIndex = 0x50; // CWeakHandle< InfoForResourceTypeIParticleSystemDefinition >
            public const nint MNDamageType = 0x58; // uint32
            public const nint MNPenetrate = 0x5C; // uint8
            public const nint MNMaterial = 0x5E; // uint16
            public const nint MNHitBox = 0x60; // uint16
            public const nint MNColor = 0x62; // uint8
            public const nint MFFlags = 0x63; // uint8
            public const nint MNAttachmentIndex = 0x64; // AttachmentHandle_t
            public const nint MNAttachmentName = 0x68; // CUtlStringToken
            public const nint MIEffectName = 0x6C; // uint16
            public const nint MNExplosionType = 0x6E; // uint8
        }
        // Parent: CBaseEntity
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_flFadeStartDist (float32)
        // NetworkVarNames: m_flFadeEndDist (float32)
        public static class CEnvDetailController {
            public const nint MFlFadeStartDist = 0x550; // float32
            public const nint MFlFadeEndDist = 0x554; // float32
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
        public static class CEnvWindShared {
            public const nint MFlStartTime = 0x8; // GameTime_t
            public const nint MIWindSeed = 0xC; // uint32
            public const nint MIMinWind = 0x10; // uint16
            public const nint MIMaxWind = 0x12; // uint16
            public const nint MWindRadius = 0x14; // int32
            public const nint MIMinGust = 0x18; // uint16
            public const nint MIMaxGust = 0x1A; // uint16
            public const nint MFlMinGustDelay = 0x1C; // float32
            public const nint MFlMaxGustDelay = 0x20; // float32
            public const nint MFlGustDuration = 0x24; // float32
            public const nint MIGustDirChange = 0x28; // uint16
            public const nint MLocation = 0x2C; // 
            public const nint MIszGustSound = 0x38; // int32
            public const nint MIWindDir = 0x3C; // int32
            public const nint MFlWindSpeed = 0x40; // float32
            public const nint MCurrentWindVector = 0x44; // 
            public const nint MCurrentSwayVector = 0x50; // 
            public const nint MPrevSwayVector = 0x5C; // 
            public const nint MIInitialWindDir = 0x68; // uint16
            public const nint MFlInitialWindSpeed = 0x6C; // float32
            public const nint MFlVariationTime = 0x70; // GameTime_t
            public const nint MFlSwayTime = 0x74; // GameTime_t
            public const nint MFlSimTime = 0x78; // GameTime_t
            public const nint MFlSwitchTime = 0x7C; // GameTime_t
            public const nint MFlAveWindSpeed = 0x80; // float32
            public const nint MBGusting = 0x84; // bool
            public const nint MFlWindAngleVariation = 0x88; // float32
            public const nint MFlWindSpeedVariation = 0x8C; // float32
            public const nint MIEntIndex = 0x90; // CEntityIndex
        }
        // Parent: None
        // Fields count: 2
        public static class CEnvWindSharedWindAveEventT {
            public const nint MFlStartWindSpeed = 0x0; // float32
            public const nint MFlAveWindSpeed = 0x4; // float32
        }
        // Parent: None
        // Fields count: 2
        public static class CEnvWindSharedWindVariationEventT {
            public const nint MFlWindAngleVariation = 0x0; // float32
            public const nint MFlWindSpeedVariation = 0x4; // float32
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
        public static class ShardModelDescT {
            public const nint MNModelId = 0x8; // int32
            public const nint MHMaterial = 0x10; // CStrongHandle< InfoForResourceTypeIMaterial2 >
            public const nint MSolid = 0x18; // ShardSolid_t
            public const nint MShatterPanelMode = 0x19; // ShatterPanelMode
            public const nint MVecPanelSize = 0x1C; // Vector2D
            public const nint MVecStressPositionA = 0x24; // Vector2D
            public const nint MVecStressPositionB = 0x2C; // Vector2D
            public const nint MVecPanelVertices = 0x38; // C_NetworkUtlVectorBase< Vector2D >
            public const nint MFlGlassHalfThickness = 0x50; // float32
            public const nint MBHasParent = 0x54; // bool
            public const nint MBParentFrozen = 0x55; // bool
            public const nint MSurfacePropStringToken = 0x58; // CUtlStringToken
        }
        // Parent: CBaseEntity
        // Fields count: 0
        public static class CGameRulesProxy {
        }
        // Parent: None
        // Fields count: 0
        public static class CGameRules {
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
            public const nint MFGlowColor = 0x8; // 
            public const nint MIGlowType = 0x30; // int32
            public const nint MIGlowTeam = 0x34; // int32
            public const nint MNGlowRange = 0x38; // int32
            public const nint MNGlowRangeMin = 0x3C; // int32
            public const nint MGlowColorOverride = 0x40; // Color
            public const nint MBFlashing = 0x44; // bool
            public const nint MFlGlowTime = 0x48; // float32
            public const nint MFlGlowStartTime = 0x4C; // float32
            public const nint MBEligibleForScreenHighlight = 0x50; // bool
            public const nint MBGlowing = 0x51; // bool
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
        public static class FogparamsT {
            public const nint DirPrimary = 0x8; // 
            public const nint ColorPrimary = 0x14; // Color
            public const nint ColorSecondary = 0x18; // Color
            public const nint ColorPrimaryLerpTo = 0x1C; // Color
            public const nint ColorSecondaryLerpTo = 0x20; // Color
            public const nint Start = 0x24; // float32
            public const nint End = 0x28; // float32
            public const nint Farz = 0x2C; // float32
            public const nint Maxdensity = 0x30; // float32
            public const nint Exponent = 0x34; // float32
            public const nint HdrColorScale = 0x38; // float32
            public const nint SkyboxFogFactor = 0x3C; // float32
            public const nint SkyboxFogFactorLerpTo = 0x40; // float32
            public const nint StartLerpTo = 0x44; // float32
            public const nint EndLerpTo = 0x48; // float32
            public const nint MaxdensityLerpTo = 0x4C; // float32
            public const nint Lerptime = 0x50; // GameTime_t
            public const nint Duration = 0x54; // float32
            public const nint Blendtobackground = 0x58; // float32
            public const nint Scattering = 0x5C; // float32
            public const nint Locallightscale = 0x60; // float32
            public const nint Enable = 0x64; // bool
            public const nint Blend = 0x65; // bool
            public const nint MBNoReflectionFog = 0x66; // bool
            public const nint MBPadding = 0x67; // bool
        }
        // Parent: None
        // Fields count: 14
        //
        // Metadata:
        // NetworkVarNames: m_hCtrl (CHandle< CFogController>)
        public static class CFogplayerparamsT {
            public const nint MHCtrl = 0x8; // CHandle< C_FogController >
            public const nint MFlTransitionTime = 0xC; // float32
            public const nint MOldColor = 0x10; // Color
            public const nint MFlOldStart = 0x14; // float32
            public const nint MFlOldEnd = 0x18; // float32
            public const nint MFlOldMaxDensity = 0x1C; // float32
            public const nint MFlOldHdrColorScale = 0x20; // float32
            public const nint MFlOldFarZ = 0x24; // float32
            public const nint MNewColor = 0x28; // Color
            public const nint MFlNewStart = 0x2C; // float32
            public const nint MFlNewEnd = 0x30; // float32
            public const nint MFlNewMaxDensity = 0x34; // float32
            public const nint MFlNewHdrColorScale = 0x38; // float32
            public const nint MFlNewFarZ = 0x3C; // float32
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
        public static class Sky3dparamsT {
            public const nint Scale = 0x8; // int16
            public const nint Origin = 0xC; // 
            public const nint BClip3DSkyBoxNearToWorldFar = 0x18; // bool
            public const nint FlClip3DSkyBoxNearToWorldFarOffset = 0x1C; // float32
            public const nint Fog = 0x20; // fogparams_t
            public const nint MNWorldGroupId = 0x88; // WorldGroupId_t
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // NetworkVarNames: m_Transforms (CTransform)
        // NetworkVarNames: m_hOwner (EHANDLE)
        public static class PhysicsRagdollPoseT {
            public const nint MPChainEntity = 0x8; // CNetworkVarChainer
            public const nint MTransforms = 0x30; // C_NetworkUtlVectorBase< CTransform >
            public const nint MHOwner = 0x48; // CHandle< C_BaseEntity >
            public const nint MBDirty = 0x68; // bool
        }
        // Parent: CGameRules
        // Fields count: 0
        public static class CSingleplayRules {
        }
        // Parent: CBaseEntity
        // Fields count: 5
        //
        // Metadata:
        // NetworkVarNames: m_iszStackName (string_t)
        // NetworkVarNames: m_iszOperatorName (string_t)
        // NetworkVarNames: m_iszOpvarName (string_t)
        // NetworkVarNames: m_iOpvarIndex (int)
        // NetworkVarNames: m_bUseAutoCompare (bool)
        public static class CSoundOpvarSetPointBase {
            public const nint MIszStackName = 0x550; // CUtlSymbolLarge
            public const nint MIszOperatorName = 0x558; // CUtlSymbolLarge
            public const nint MIszOpvarName = 0x560; // CUtlSymbolLarge
            public const nint MIOpvarIndex = 0x568; // int32
            public const nint MBUseAutoCompare = 0x56C; // bool
        }
        // Parent: CSoundOpvarSetPointBase
        // Fields count: 0
        public static class CSoundOpvarSetPointEntity {
        }
        // Parent: CSoundOpvarSetPointEntity
        // Fields count: 0
        public static class CSoundOpvarSetAabbEntity {
        }
        // Parent: CSoundOpvarSetAabbEntity
        // Fields count: 0
        public static class CSoundOpvarSetObbEntity {
        }
        // Parent: CSoundOpvarSetPointEntity
        // Fields count: 0
        public static class CSoundOpvarSetPathCornerEntity {
        }
        // Parent: CSoundOpvarSetPointEntity
        // Fields count: 0
        public static class CSoundOpvarSetAutoRoomEntity {
        }
        // Parent: CSoundOpvarSetPointBase
        // Fields count: 0
        public static class CSoundOpvarSetObbWindEntity {
        }
        // Parent: CMultiplayRules
        // Fields count: 0
        public static class CTeamplayRules {
        }
        // Parent: CBaseEntity
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
        public static class CTeamRoundTimer {
            public const nint MBTimerPaused = 0x550; // bool
            public const nint MFlTimeRemaining = 0x554; // float32
            public const nint MFlTimerEndTime = 0x558; // GameTime_t
            public const nint MBIsDisabled = 0x55C; // bool
            public const nint MBShowInHud = 0x55D; // bool
            public const nint MNTimerLength = 0x560; // int32
            public const nint MNTimerInitialLength = 0x564; // int32
            public const nint MNTimerMaxLength = 0x568; // int32
            public const nint MBAutoCountdown = 0x56C; // bool
            public const nint MNSetupTimeLength = 0x570; // int32
            public const nint MNState = 0x574; // int32
            public const nint MBStartPaused = 0x578; // bool
            public const nint MBInCaptureWatchState = 0x579; // bool
            public const nint MFlTotalTime = 0x57C; // float32
            public const nint MBStopWatchTimer = 0x580; // bool
            public const nint MBFireFinished = 0x581; // bool
            public const nint MBFire5MinRemain = 0x582; // bool
            public const nint MBFire4MinRemain = 0x583; // bool
            public const nint MBFire3MinRemain = 0x584; // bool
            public const nint MBFire2MinRemain = 0x585; // bool
            public const nint MBFire1MinRemain = 0x586; // bool
            public const nint MBFire30SecRemain = 0x587; // bool
            public const nint MBFire10SecRemain = 0x588; // bool
            public const nint MBFire5SecRemain = 0x589; // bool
            public const nint MBFire4SecRemain = 0x58A; // bool
            public const nint MBFire3SecRemain = 0x58B; // bool
            public const nint MBFire2SecRemain = 0x58C; // bool
            public const nint MBFire1SecRemain = 0x58D; // bool
            public const nint MNOldTimerLength = 0x590; // int32
            public const nint MNOldTimerState = 0x594; // int32
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_Attributes (CEconItemAttribute)
        public static class CAttributeList {
            public const nint MAttributes = 0x8; // C_UtlVectorEmbeddedNetworkVar< CEconItemAttribute >
            public const nint MPManager = 0x58; // CAttributeManager*
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
            public const nint MIAttributeDefinitionIndex = 0x30; // uint16
            public const nint MFlValue = 0x34; // float32
            public const nint MFlInitialValue = 0x38; // float32
            public const nint MNRefundableCurrency = 0x3C; // int32
            public const nint MBSetBonus = 0x40; // bool
        }
        // Parent: None
        // Fields count: 6
        //
        // Metadata:
        // NetworkVarNames: m_iReapplyProvisionParity (int)
        // NetworkVarNames: m_hOuter (EHANDLE)
        // NetworkVarNames: m_ProviderType (attributeprovidertypes_t)
        public static class CAttributeManager {
            public const nint MProviders = 0x8; // CUtlVector< CHandle< C_BaseEntity > >
            public const nint MIReapplyProvisionParity = 0x20; // int32
            public const nint MHOuter = 0x24; // CHandle< C_BaseEntity >
            public const nint MBPreventLoopback = 0x28; // bool
            public const nint MProviderType = 0x2C; // attributeprovidertypes_t
            public const nint MCachedResults = 0x30; // CUtlVector< CAttributeManager::cached_attribute_float_t >
        }
        // Parent: None
        // Fields count: 3
        public static class CAttributeManagerCachedAttributeFloatT {
            public const nint FlIn = 0x0; // float32
            public const nint IAttribHook = 0x8; // CUtlSymbolLarge
            public const nint FlOut = 0x10; // float32
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
        public static class CAttributeContainer {
            public const nint MItem = 0x50; // C_EconItemView
            public const nint MIExternalItemProviderRegisteredToken = 0x498; // int32
            public const nint MUllRegisteredAsItemId = 0x4A0; // uint64
        }
        // Parent: None
        // Fields count: 1
        public static class CEconEntityAttachedModelDataT {
            public const nint MIModelDisplayFlags = 0x0; // int32
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_bSpotted (bool)
        // NetworkVarNames: m_bSpottedByMask (uint32)
        public static class EntitySpottedStateT {
            public const nint MBSpotted = 0x8; // bool
            public const nint MBSpottedByMask = 0xC; // uint32[2]
        }
        // Parent: CGameRulesProxy
        // Fields count: 1
        //
        // Metadata:
        // NetworkVarNames: m_pGameRules (CCSGameRules*)
        public static class CCsGameRulesProxy {
            public const nint MPGameRules = 0x550; // C_CSGameRules*
        }
        // Parent: CTeamplayRules
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
        public static class CCsGameRules {
            public const nint MPChainEntity = 0x8; // CNetworkVarChainer
            public const nint MBFreezePeriod = 0x30; // bool
            public const nint MBWarmupPeriod = 0x31; // bool
            public const nint MFWarmupPeriodEnd = 0x34; // GameTime_t
            public const nint MFWarmupPeriodStart = 0x38; // GameTime_t
            public const nint MNTotalPausedTicks = 0x3C; // int32
            public const nint MNPauseStartTick = 0x40; // int32
            public const nint MBServerPaused = 0x44; // bool
            public const nint MBGamePaused = 0x45; // bool
            public const nint MBTerroristTimeOutActive = 0x46; // bool
            public const nint MBCtTimeOutActive = 0x47; // bool
            public const nint MFlTerroristTimeOutRemaining = 0x48; // float32
            public const nint MFlCtTimeOutRemaining = 0x4C; // float32
            public const nint MNTerroristTimeOuts = 0x50; // int32
            public const nint MNCtTimeOuts = 0x54; // int32
            public const nint MBTechnicalTimeOut = 0x58; // bool
            public const nint MBMatchWaitingForResume = 0x59; // bool
            public const nint MIRoundTime = 0x5C; // int32
            public const nint MFMatchStartTime = 0x60; // float32
            public const nint MFRoundStartTime = 0x64; // GameTime_t
            public const nint MFlRestartRoundTime = 0x68; // GameTime_t
            public const nint MBGameRestart = 0x6C; // bool
            public const nint MFlGameStartTime = 0x70; // float32
            public const nint MTimeUntilNextPhaseStarts = 0x74; // float32
            public const nint MGamePhase = 0x78; // int32
            public const nint MTotalRoundsPlayed = 0x7C; // int32
            public const nint MNRoundsPlayedThisPhase = 0x80; // int32
            public const nint MNOvertimePlaying = 0x84; // int32
            public const nint MIHostagesRemaining = 0x88; // int32
            public const nint MBAnyHostageReached = 0x8C; // bool
            public const nint MBMapHasBombTarget = 0x8D; // bool
            public const nint MBMapHasRescueZone = 0x8E; // bool
            public const nint MBMapHasBuyZone = 0x8F; // bool
            public const nint MBIsQueuedMatchmaking = 0x90; // bool
            public const nint MNQueuedMatchmakingMode = 0x94; // int32
            public const nint MBIsValveDs = 0x98; // bool
            public const nint MBLogoMap = 0x99; // bool
            public const nint MBPlayAllStepSoundsOnServer = 0x9A; // bool
            public const nint MISpectatorSlotCount = 0x9C; // int32
            public const nint MMatchDevice = 0xA0; // int32
            public const nint MBHasMatchStarted = 0xA4; // bool
            public const nint MNNextMapInMapgroup = 0xA8; // int32
            public const nint MSzTournamentEventName = 0xAC; // char[512]
            public const nint MSzTournamentEventStage = 0x2AC; // char[512]
            public const nint MSzMatchStatTxt = 0x4AC; // char[512]
            public const nint MSzTournamentPredictionsTxt = 0x6AC; // char[512]
            public const nint MNTournamentPredictionsPct = 0x8AC; // int32
            public const nint MFlCmmItemDropRevealStartTime = 0x8B0; // GameTime_t
            public const nint MFlCmmItemDropRevealEndTime = 0x8B4; // GameTime_t
            public const nint MBIsDroppingItems = 0x8B8; // bool
            public const nint MBIsQuestEligible = 0x8B9; // bool
            public const nint MBIsHltvActive = 0x8BA; // bool
            public const nint MNGuardianModeWaveNumber = 0x8BC; // int32
            public const nint MNGuardianModeSpecialKillsRemaining = 0x8C0; // int32
            public const nint MNGuardianModeSpecialWeaponNeeded = 0x8C4; // int32
            public const nint MNGuardianGrenadesToGiveBots = 0x8C8; // int32
            public const nint MNNumHeaviesToSpawn = 0x8CC; // int32
            public const nint MNumGlobalGiftsGiven = 0x8D0; // uint32
            public const nint MNumGlobalGifters = 0x8D4; // uint32
            public const nint MNumGlobalGiftsPeriodSeconds = 0x8D8; // uint32
            public const nint MArrFeaturedGiftersAccounts = 0x8DC; // uint32[4]
            public const nint MArrFeaturedGiftersGifts = 0x8EC; // uint32[4]
            public const nint MArrProhibitedItemIndices = 0x8FC; // uint16[100]
            public const nint MArrTournamentActiveCasterAccounts = 0x9C4; // uint32[4]
            public const nint MNumBestOfMaps = 0x9D4; // int32
            public const nint MNHalloweenMaskListSeed = 0x9D8; // int32
            public const nint MBBombDropped = 0x9DC; // bool
            public const nint MBBombPlanted = 0x9DD; // bool
            public const nint MIRoundWinStatus = 0x9E0; // int32
            public const nint MERoundWinReason = 0x9E4; // int32
            public const nint MBTCantBuy = 0x9E8; // bool
            public const nint MBCtCantBuy = 0x9E9; // bool
            public const nint MFlGuardianBuyUntilTime = 0x9EC; // GameTime_t
            public const nint MIMatchStatsRoundResults = 0x9F0; // int32[30]
            public const nint MIMatchStatsPlayersAliveCt = 0xA68; // int32[30]
            public const nint MIMatchStatsPlayersAliveT = 0xAE0; // int32[30]
            public const nint MTeamRespawnWaveTimes = 0xB58; // float32[32]
            public const nint MFlNextRespawnWave = 0xBD8; // GameTime_t[32]
            public const nint MNServerQuestId = 0xC58; // int32
            public const nint MVMinimapMins = 0xC5C; // 
            public const nint MVMinimapMaxs = 0xC68; // 
            public const nint MMinimapVerticalSectionHeights = 0xC74; // float32[8]
            public const nint MBDontIncrementCoopWave = 0xC94; // bool
            public const nint MBSpawnedTerrorHuntHeavy = 0xC95; // bool
            public const nint MNEndMatchMapGroupVoteTypes = 0xC98; // int32[10]
            public const nint MNEndMatchMapGroupVoteOptions = 0xCC0; // int32[10]
            public const nint MNEndMatchMapVoteWinner = 0xCE8; // int32
            public const nint MINumConsecutiveCtLoses = 0xCEC; // int32
            public const nint MINumConsecutiveTerroristLoses = 0xCF0; // int32
            public const nint MBMarkClientStopRecordAtRoundEnd = 0xD10; // bool
            public const nint MNMatchAbortedEarlyReason = 0xD68; // int32
            public const nint MBHasTriggeredRoundStartMusic = 0xD6C; // bool
            public const nint MBHasTriggeredCoopSpawnReset = 0xD6D; // bool
            public const nint MBSwitchingTeamsAtRoundReset = 0xD6E; // bool
            public const nint MPGameModeRules = 0xD88; // CCSGameModeRules*
            public const nint MRetakeRules = 0xD90; // C_RetakeGameRules
            public const nint MNMatchEndCount = 0xEA8; // uint8
            public const nint MNTTeamIntroVariant = 0xEAC; // int32
            public const nint MNCtTeamIntroVariant = 0xEB0; // int32
            public const nint MBTeamIntroPeriod = 0xEB4; // bool
            public const nint MIRoundEndWinnerTeam = 0xEB8; // int32
            public const nint MERoundEndReason = 0xEBC; // int32
            public const nint MBRoundEndShowTimerDefend = 0xEC0; // bool
            public const nint MIRoundEndTimerTime = 0xEC4; // int32
            public const nint MSRoundEndFunFactToken = 0xEC8; // CUtlString
            public const nint MIRoundEndFunFactPlayerSlot = 0xED0; // CPlayerSlot
            public const nint MIRoundEndFunFactData1 = 0xED4; // int32
            public const nint MIRoundEndFunFactData2 = 0xED8; // int32
            public const nint MIRoundEndFunFactData3 = 0xEDC; // int32
            public const nint MSRoundEndMessage = 0xEE0; // CUtlString
            public const nint MIRoundEndPlayerCount = 0xEE8; // int32
            public const nint MBRoundEndNoMusic = 0xEEC; // bool
            public const nint MIRoundEndLegacy = 0xEF0; // int32
            public const nint MNRoundEndCount = 0xEF4; // uint8
            public const nint MIRoundStartRoundNumber = 0xEF8; // int32
            public const nint MNRoundStartCount = 0xEFC; // uint8
            public const nint MFlLastPerfSampleTime = 0x4F08; // float64
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseProvideFeatureTag
        // MPulseLibraryBindings
        public static class CcsTakeDamageInfoApi {
        }
        // Parent: None
        // Fields count: 1
        public static class CcsGameModeRules {
            public const nint MPChainEntity = 0x8; // CNetworkVarChainer
        }
        // Parent: CcsGameModeRules
        // Fields count: 0
        public static class CcsGameModeRulesNoop {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseInstanceDomainInfo
        // MPulseLibraryBindings
        // MPulseDomainOptInFeatureTag
        public static class CcsGameModeScript {
        }
        // Parent: CcsGameModeRules
        // Fields count: 1
        //
        // Metadata:
        // NetworkVarNames: m_WeaponSequence (CUtlString)
        public static class CcsGameModeRulesArmsRace {
            public const nint MWeaponSequence = 0x38; // C_NetworkUtlVectorBase< CUtlString >
        }
        // Parent: CcsGameModeScript
        // Fields count: 1
        //
        // Metadata:
        // MPulseInstanceDomainInfo
        // MPulseLibraryBindings
        // MPulseDomainOptInFeatureTag
        public static class CcsArmsRaceScript {
            public const nint MPOuter = 0xD8; // CCSGameModeRules_ArmsRace*
        }
        // Parent: CcsGameModeRules
        // Fields count: 3
        //
        // Metadata:
        // NetworkVarNames: m_flDMBonusStartTime (GameTime_t)
        // NetworkVarNames: m_flDMBonusTimeLength (float)
        // NetworkVarNames: m_nDMBonusWeaponLoadoutSlot (int16)
        public static class CcsGameModeRulesDeathmatch {
            public const nint MFlDmBonusStartTime = 0x38; // GameTime_t
            public const nint MFlDmBonusTimeLength = 0x3C; // float32
            public const nint MNDmBonusWeaponLoadoutSlot = 0x40; // int16
        }
        // Parent: CcsGameModeScript
        // Fields count: 1
        //
        // Metadata:
        // MPulseInstanceDomainInfo
        // MPulseLibraryBindings
        // MPulseDomainOptInFeatureTag
        public static class CcsDeathmatchScript {
            public const nint MPOuter = 0xD8; // CCSGameModeRules_Deathmatch*
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
            public const nint MNMatchSeed = 0xF8; // int32
            public const nint MBBlockersPresent = 0xFC; // bool
            public const nint MBRoundInProgress = 0xFD; // bool
            public const nint MIFirstSecondHalfRound = 0x100; // int32
            public const nint MIBombSite = 0x104; // int32
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
        public static class CsPerRoundStatsT {
            public const nint MIKills = 0x30; // int32
            public const nint MIDeaths = 0x34; // int32
            public const nint MIAssists = 0x38; // int32
            public const nint MIDamage = 0x3C; // int32
            public const nint MIEquipmentValue = 0x40; // int32
            public const nint MIMoneySaved = 0x44; // int32
            public const nint MIKillReward = 0x48; // int32
            public const nint MILiveTime = 0x4C; // int32
            public const nint MIHeadShotKills = 0x50; // int32
            public const nint MIObjective = 0x54; // int32
            public const nint MICashEarned = 0x58; // int32
            public const nint MIUtilityDamage = 0x5C; // int32
            public const nint MIEnemiesFlashed = 0x60; // int32
        }
        // Parent: CsPerRoundStatsT
        // Fields count: 5
        //
        // Metadata:
        // NetworkVarNames: m_iEnemy5Ks (int)
        // NetworkVarNames: m_iEnemy4Ks (int)
        // NetworkVarNames: m_iEnemy3Ks (int)
        // NetworkVarNames: m_iEnemyKnifeKills (int)
        // NetworkVarNames: m_iEnemyTaserKills (int)
        public static class CsMatchStatsT {
            public const nint MIEnemy5Ks = 0x68; // int32
            public const nint MIEnemy4Ks = 0x6C; // int32
            public const nint MIEnemy3Ks = 0x70; // int32
            public const nint MIEnemyKnifeKills = 0x74; // int32
            public const nint MIEnemyTaserKills = 0x78; // int32
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
        public static class CCsgoTeamPreviewCharacterPosition {
            public const nint MNVariant = 0x550; // int32
            public const nint MNRandom = 0x554; // int32
            public const nint MNOrdinal = 0x558; // int32
            public const nint MSWeaponName = 0x560; // CUtlString
            public const nint MXuid = 0x568; // uint64
            public const nint MAgentItem = 0x570; // C_EconItemView
            public const nint MGlovesItem = 0x9B8; // C_EconItemView
            public const nint MWeaponItem = 0xE00; // C_EconItemView
        }
        // Parent: CCsgoTeamPreviewCharacterPosition
        // Fields count: 0
        public static class CCsgoTeamSelectCharacterPosition {
        }
        // Parent: CCsgoTeamSelectCharacterPosition
        // Fields count: 0
        public static class CCsgoTeamSelectTerroristPosition {
        }
        // Parent: CCsgoTeamSelectCharacterPosition
        // Fields count: 0
        public static class CCsgoTeamSelectCounterTerroristPosition {
        }
        // Parent: CCsgoTeamPreviewCharacterPosition
        // Fields count: 0
        public static class CCsgoTeamIntroCharacterPosition {
        }
        // Parent: CCsgoTeamIntroCharacterPosition
        // Fields count: 0
        public static class CCsgoTeamIntroTerroristPosition {
        }
        // Parent: CCsgoTeamIntroCharacterPosition
        // Fields count: 0
        public static class CCsgoTeamIntroCounterTerroristPosition {
        }
        // Parent: CCsgoTeamIntroCharacterPosition
        // Fields count: 0
        public static class CcsgoWingmanIntroCharacterPosition {
        }
        // Parent: CcsgoWingmanIntroCharacterPosition
        // Fields count: 0
        public static class CcsgoWingmanIntroTerroristPosition {
        }
        // Parent: CcsgoWingmanIntroCharacterPosition
        // Fields count: 0
        public static class CcsgoWingmanIntroCounterTerroristPosition {
        }
        // Parent: CBaseEntity
        // Fields count: 0
        public static class CCsMinimapBoundary {
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
            public const nint MHPlayer = 0x580; // CHandle< C_CSPlayerPawn >
            public const nint MHPingedEntity = 0x584; // CHandle< C_BaseEntity >
            public const nint MIType = 0x588; // int32
            public const nint MBUrgent = 0x58C; // bool
            public const nint MSzPlaceName = 0x58D; // char[18]
        }
        // Parent: CPlayerPawnComponent
        // Fields count: 1
        //
        // Metadata:
        // NetworkVarNames: m_hPlayerPing (CHandle< CBaseEntity>)
        public static class CcsPlayerPingServices {
            public const nint MHPlayerPing = 0x40; // CHandle< C_BaseEntity >
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
        public static class CCsPlayerResource {
            public const nint MBHostageAlive = 0x550; // bool[12]
            public const nint MIsHostageFollowingSomeone = 0x55C; // bool[12]
            public const nint MIHostageEntityIDs = 0x568; // CEntityIndex[12]
            public const nint MBombsiteCenterA = 0x598; // 
            public const nint MBombsiteCenterB = 0x5A4; // 
            public const nint MHostageRescueX = 0x5B0; // int32[4]
            public const nint MHostageRescueY = 0x5C0; // int32[4]
            public const nint MHostageRescueZ = 0x5D0; // int32[4]
            public const nint MBEndMatchNextMapAllVoted = 0x5E0; // bool
            public const nint MFoundGoalPositions = 0x5E1; // bool
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseProvideFeatureTag
        // MPulseLibraryBindings
        public static class CcsPlayerControllerApi {
        }
        // Parent: CPlayerPawnComponent
        // Fields count: 0
        public static class CPlayerViewModelServices {
        }
        // Parent: CPlayerCameraServices
        // Fields count: 6
        //
        // Metadata:
        // NetworkVarNames: m_iFOV (uint32)
        // NetworkVarNames: m_iFOVStart (uint32)
        // NetworkVarNames: m_flFOVTime (GameTime_t)
        // NetworkVarNames: m_flFOVRate (float32)
        // NetworkVarNames: m_hZoomOwner (CHandle< CBaseEntity>)
        public static class CcsPlayerBaseCameraServices {
            public const nint MIFov = 0x210; // uint32
            public const nint MIFovStart = 0x214; // uint32
            public const nint MFlFovTime = 0x218; // GameTime_t
            public const nint MFlFovRate = 0x21C; // float32
            public const nint MHZoomOwner = 0x220; // CHandle< C_BaseEntity >
            public const nint MFlLastShotFov = 0x224; // float32
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_nItemDefIndex (uint16)
        // NetworkVarNames: m_nCount (uint16)
        public static class WeaponPurchaseCountT {
            public const nint MNItemDefIndex = 0x30; // uint16
            public const nint MNCount = 0x32; // uint16
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // NetworkVarNames: m_weaponPurchases (WeaponPurchaseCount_t)
        public static class WeaponPurchaseTrackerT {
            public const nint MWeaponPurchases = 0x8; // C_UtlVectorEmbeddedNetworkVar< WeaponPurchaseCount_t >
        }
        // Parent: CPlayerPawnComponent
        // Fields count: 4
        //
        // Metadata:
        // NetworkVarNames: m_bIsRescuing (bool)
        // NetworkVarNames: m_weaponPurchasesThisMatch (WeaponPurchaseTracker_t)
        // NetworkVarNames: m_weaponPurchasesThisRound (WeaponPurchaseTracker_t)
        public static class CcsPlayerActionTrackingServices {
            public const nint MHLastWeaponBeforeC4AutoSwitch = 0x40; // CHandle< C_BasePlayerWeapon >
            public const nint MBIsRescuing = 0x44; // bool
            public const nint MWeaponPurchasesThisMatch = 0x48; // WeaponPurchaseTracker_t
            public const nint MWeaponPurchasesThisRound = 0xA0; // WeaponPurchaseTracker_t
        }
        // Parent: CPlayerPawnComponent
        // Fields count: 1
        //
        // Metadata:
        // NetworkVarNames: m_totalHitsOnServer (int32)
        public static class CcsPlayerBulletServices {
            public const nint MTotalHitsOnServer = 0x40; // int32
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
        public static class SellbackPurchaseEntryT {
            public const nint MUnDefIdx = 0x30; // uint16
            public const nint MNCost = 0x34; // int32
            public const nint MNPrevArmor = 0x38; // int32
            public const nint MBPrevHelmet = 0x3C; // bool
            public const nint MHItem = 0x40; // CEntityHandle
        }
        // Parent: CPlayerPawnComponent
        // Fields count: 1
        //
        // Metadata:
        // NetworkVarNames: m_vecSellbackPurchaseEntries (SellbackPurchaseEntry_t)
        public static class CcsPlayerBuyServices {
            public const nint MVecSellbackPurchaseEntries = 0x40; // C_UtlVectorEmbeddedNetworkVar< SellbackPurchaseEntry_t >
        }
        // Parent: CcsPlayerBaseCameraServices
        // Fields count: 1
        public static class CcsPlayerCameraServices {
            public const nint MFlDeathCamTilt = 0x228; // float32
        }
        // Parent: CPlayerPawnComponent
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_hCarriedHostage (CHandle< CBaseEntity>)
        // NetworkVarNames: m_hCarriedHostageProp (CHandle< CBaseEntity>)
        public static class CcsPlayerHostageServices {
            public const nint MHCarriedHostage = 0x40; // CHandle< C_BaseEntity >
            public const nint MHCarriedHostageProp = 0x44; // CHandle< C_BaseEntity >
        }
        // Parent: CPlayerItemServices
        // Fields count: 3
        //
        // Metadata:
        // NetworkVarNames: m_bHasDefuser (bool)
        // NetworkVarNames: m_bHasHelmet (bool)
        // NetworkVarNames: m_bHasHeavyArmor (bool)
        public static class CcsPlayerItemServices {
            public const nint MBHasDefuser = 0x40; // bool
            public const nint MBHasHelmet = 0x41; // bool
            public const nint MBHasHeavyArmor = 0x42; // bool
        }
        // Parent: CPlayerMovementServicesHumanoid
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
        public static class CcsPlayerMovementServices {
            public const nint MFlMaxFallVelocity = 0x218; // float32
            public const nint MVecLadderNormal = 0x21C; // 
            public const nint MNLadderSurfacePropIndex = 0x228; // int32
            public const nint MFlDuckAmount = 0x22C; // float32
            public const nint MFlDuckSpeed = 0x230; // float32
            public const nint MBDuckOverride = 0x234; // bool
            public const nint MBDesiresDuck = 0x235; // bool
            public const nint MFlDuckOffset = 0x238; // float32
            public const nint MNDuckTimeMsecs = 0x23C; // uint32
            public const nint MNDuckJumpTimeMsecs = 0x240; // uint32
            public const nint MNJumpTimeMsecs = 0x244; // uint32
            public const nint MFlLastDuckTime = 0x248; // float32
            public const nint MVecLastPositionAtFullCrouchSpeed = 0x258; // Vector2D
            public const nint MDuckUntilOnGround = 0x260; // bool
            public const nint MBHasWalkMovedSinceLastJump = 0x261; // bool
            public const nint MBInStuckTest = 0x262; // bool
            public const nint MFlStuckCheckTime = 0x270; // float32[64][2]
            public const nint MNTraceCount = 0x470; // int32
            public const nint MStuckLast = 0x474; // int32
            public const nint MBSpeedCropped = 0x478; // bool
            public const nint MNOldWaterLevel = 0x47C; // int32
            public const nint MFlWaterEntryTime = 0x480; // float32
            public const nint MVecForward = 0x484; // 
            public const nint MVecLeft = 0x490; // 
            public const nint MVecUp = 0x49C; // 
            public const nint MNGameCodeHasMovedPlayerAfterCommand = 0x4A8; // int32
            public const nint MBOldJumpPressed = 0x4AC; // bool
            public const nint MFlJumpPressedTime = 0x4B0; // float32
            public const nint MFlJumpUntil = 0x4B4; // float32
            public const nint MFlJumpVel = 0x4B8; // float32
            public const nint MFStashGrenadeParameterWhen = 0x4BC; // GameTime_t
            public const nint MNButtonDownMaskPrev = 0x4C0; // uint64
            public const nint MFlOffsetTickCompleteTime = 0x4C8; // float32
            public const nint MFlOffsetTickStashedSpeed = 0x4CC; // float32
            public const nint MFlStamina = 0x4D0; // float32
            public const nint MFlHeightAtJumpStart = 0x4D4; // float32
            public const nint MFlMaxJumpHeightThisJump = 0x4D8; // float32
        }
        // Parent: CPlayerUseServices
        // Fields count: 0
        public static class CcsPlayerUseServices {
        }
        // Parent: CPlayerViewModelServices
        // Fields count: 1
        //
        // Metadata:
        // NetworkVarNames: m_hViewModel (CHandle< CBaseViewModel >)
        public static class CcsPlayerViewModelServices {
            public const nint MHViewModel = 0x40; // CHandle< C_BaseViewModel >[3]
        }
        // Parent: CPlayerWaterServices
        // Fields count: 3
        public static class CcsPlayerWaterServices {
            public const nint MFlWaterJumpTime = 0x40; // float32
            public const nint MVecWaterJumpVel = 0x44; // 
            public const nint MFlSwimSoundTime = 0x50; // float32
        }
        // Parent: CPlayerWeaponServices
        // Fields count: 5
        //
        // Metadata:
        // NetworkVarNames: m_flNextAttack (GameTime_t)
        // NetworkVarNames: m_bIsLookingAtWeapon (bool)
        // NetworkVarNames: m_bIsHoldingLookAtWeapon (bool)
        public static class CcsPlayerWeaponServices {
            public const nint MFlNextAttack = 0xB8; // GameTime_t
            public const nint MBIsLookingAtWeapon = 0xBC; // bool
            public const nint MBIsHoldingLookAtWeapon = 0xBD; // bool
            public const nint MNOldShootPositionHistoryCount = 0xC0; // uint32
            public const nint MNOldInputHistoryCount = 0x458; // uint32
        }
        // Parent: CPlayerObserverServices
        // Fields count: 8
        public static class CcsObserverObserverServices {
            public const nint MHLastObserverTarget = 0x58; // CEntityHandle
            public const nint MVecObserverInterpolateOffset = 0x5C; // 
            public const nint MVecObserverInterpStartPos = 0x68; // 
            public const nint MFlObsInterpPathLength = 0x74; // float32
            public const nint MQObsInterpOrientationStart = 0x80; // Quaternion
            public const nint MQObsInterpOrientationTravelDir = 0x90; // Quaternion
            public const nint MObsInterpState = 0xA0; // ObserverInterpState_t
            public const nint MBObserverInterpolationNeedsDeferredSetup = 0xA4; // bool
        }
        // Parent: CcsPlayerBaseCameraServices
        // Fields count: 0
        public static class CcsObserverCameraServices {
        }
        // Parent: CPlayerMovementServices
        // Fields count: 0
        public static class CcsObserverMovementServices {
        }
        // Parent: CPlayerUseServices
        // Fields count: 0
        public static class CcsObserverUseServices {
        }
        // Parent: CPlayerViewModelServices
        // Fields count: 0
        public static class CcsObserverViewModelServices {
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
        public static class CcsPlayerControllerActionTrackingServices {
            public const nint MPerRoundStats = 0x40; // C_UtlVectorEmbeddedNetworkVar< CSPerRoundStats_t >
            public const nint MMatchStats = 0x90; // CSMatchStats_t
            public const nint MINumRoundKills = 0x110; // int32
            public const nint MINumRoundKillsHeadshots = 0x114; // int32
            public const nint MUnTotalRoundDamageDealt = 0x118; // uint32
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
            public const nint MPlayerDamager = 0x28; // CHandle< C_CSPlayerPawnBase >
            public const nint MPlayerRecipient = 0x2C; // CHandle< C_CSPlayerPawnBase >
            public const nint MHPlayerControllerDamager = 0x30; // CHandle< CCSPlayerController >
            public const nint MHPlayerControllerRecipient = 0x34; // CHandle< CCSPlayerController >
            public const nint MSzPlayerDamagerName = 0x38; // CUtlString
            public const nint MSzPlayerRecipientName = 0x40; // CUtlString
            public const nint MDamagerXuid = 0x48; // uint64
            public const nint MRecipientXuid = 0x50; // uint64
            public const nint MIDamage = 0x58; // int32
            public const nint MIActualHealthRemoved = 0x5C; // int32
            public const nint MINumHits = 0x60; // int32
            public const nint MILastBulletUpdate = 0x64; // int32
            public const nint MBIsOtherEnemy = 0x68; // bool
            public const nint MKillType = 0x69; // EKillTypes_t
        }
        // Parent: CPlayerControllerComponent
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_nSendUpdate (int)
        // NetworkVarNames: m_DamageList (CDamageRecord)
        public static class CcsPlayerControllerDamageServices {
            public const nint MNSendUpdate = 0x40; // int32
            public const nint MDamageList = 0x48; // C_UtlVectorEmbeddedNetworkVar< CDamageRecord >
        }
        // Parent: CPlayerControllerComponent
        // Fields count: 5
        //
        // Metadata:
        // NetworkVarNames: m_iAccount (int)
        // NetworkVarNames: m_iStartAccount (int)
        // NetworkVarNames: m_iTotalCashSpent (int)
        // NetworkVarNames: m_iCashSpentThisRound (int)
        public static class CcsPlayerControllerInGameMoneyServices {
            public const nint MIAccount = 0x40; // int32
            public const nint MIStartAccount = 0x44; // int32
            public const nint MITotalCashSpent = 0x48; // int32
            public const nint MICashSpentThisRound = 0x4C; // int32
            public const nint MNPreviousAccount = 0x50; // int32
        }
        // Parent: None
        // Fields count: 3
        public static class ServerAuthoritativeWeaponSlotT {
            public const nint UnClass = 0x28; // uint16
            public const nint UnSlot = 0x2A; // uint16
            public const nint UnItemDefIdx = 0x2C; // uint16
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
        public static class CcsPlayerControllerInventoryServices {
            public const nint MUnMusicId = 0x40; // uint16
            public const nint MRank = 0x44; // MedalRank_t[6]
            public const nint MNPersonaDataPublicLevel = 0x5C; // int32
            public const nint MNPersonaDataPublicCommendsLeader = 0x60; // int32
            public const nint MNPersonaDataPublicCommendsTeacher = 0x64; // int32
            public const nint MNPersonaDataPublicCommendsFriendly = 0x68; // int32
            public const nint MNPersonaDataXpTrailLevel = 0x6C; // int32
            public const nint MVecServerAuthoritativeWeaponSlots = 0x70; // C_UtlVectorEmbeddedNetworkVar< ServerAuthoritativeWeaponSlot_t >
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseProvideFeatureTag
        // MPulseLibraryBindings
        public static class CcsWeaponBaseVDataApi {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseProvideFeatureTag
        // MPulseLibraryBindings
        public static class CcsWeaponBaseApi {
        }
        // Parent: None
        // Fields count: 13
        public static class CIronSightController {
            public const nint MBIronSightAvailable = 0x10; // bool
            public const nint MFlIronSightAmount = 0x14; // float32
            public const nint MFlIronSightAmountGained = 0x18; // float32
            public const nint MFlIronSightAmountBiased = 0x1C; // float32
            public const nint MFlIronSightAmountInterpolated = 0x20; // float32
            public const nint MFlIronSightAmountGainedInterpolated = 0x24; // float32
            public const nint MFlIronSightAmountBiasedInterpolated = 0x28; // float32
            public const nint MFlInterpolationLastUpdated = 0x2C; // float32
            public const nint MAngDeltaAverage = 0x30; // QAngle[8]
            public const nint MAngViewLast = 0x90; // QAngle
            public const nint MVecDotCoords = 0x9C; // Vector2D
            public const nint MFlDotBlur = 0xA4; // float32
            public const nint MFlSpeedRatio = 0xA8; // float32
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyElementNameFn
        public static class CompositeMaterialMatchFilterT {
            public const nint MNCompositeMaterialMatchFilterType = 0x0; // CompositeMaterialMatchFilterType_t
            public const nint MStrMatchFilter = 0x8; // CUtlString
            public const nint MStrMatchValue = 0x10; // CUtlString
            public const nint MBPassWhenTrue = 0x18; // bool
        }
        // Parent: None
        // Fields count: 34
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyElementNameFn
        public static class CompositeMaterialInputLooseVariableT {
            public const nint MStrName = 0x0; // CUtlString
            public const nint MBExposeExternally = 0x8; // bool
            public const nint MStrExposedFriendlyName = 0x10; // CUtlString
            public const nint MStrExposedFriendlyGroupName = 0x18; // CUtlString
            public const nint MBExposedVariableIsFixedRange = 0x20; // bool
            public const nint MStrExposedVisibleWhenTrue = 0x28; // CUtlString
            public const nint MStrExposedHiddenWhenTrue = 0x30; // CUtlString
            public const nint MNVariableType = 0x38; // CompositeMaterialInputLooseVariableType_t
            public const nint MBValueBoolean = 0x3C; // bool
            public const nint MNValueIntX = 0x40; // int32
            public const nint MNValueIntY = 0x44; // int32
            public const nint MNValueIntZ = 0x48; // int32
            public const nint MNValueIntW = 0x4C; // int32
            public const nint MBHasFloatBounds = 0x50; // bool
            public const nint MFlValueFloatX = 0x54; // float32
            public const nint MFlValueFloatXMin = 0x58; // float32
            public const nint MFlValueFloatXMax = 0x5C; // float32
            public const nint MFlValueFloatY = 0x60; // float32
            public const nint MFlValueFloatYMin = 0x64; // float32
            public const nint MFlValueFloatYMax = 0x68; // float32
            public const nint MFlValueFloatZ = 0x6C; // float32
            public const nint MFlValueFloatZMin = 0x70; // float32
            public const nint MFlValueFloatZMax = 0x74; // float32
            public const nint MFlValueFloatW = 0x78; // float32
            public const nint MFlValueFloatWMin = 0x7C; // float32
            public const nint MFlValueFloatWMax = 0x80; // float32
            public const nint MCValueColor4 = 0x84; // Color
            public const nint MNValueSystemVar = 0x88; // CompositeMaterialVarSystemVar_t
            public const nint MStrResourceMaterial = 0x90; // CResourceName
            public const nint MStrTextureContentAssetPath = 0x170; // CUtlString
            public const nint MStrTextureRuntimeResourcePath = 0x178; // CResourceName
            public const nint MStrTextureCompilationVtexTemplate = 0x258; // CUtlString
            public const nint MNTextureType = 0x260; // CompositeMaterialInputTextureType_t
            public const nint MStrString = 0x268; // CUtlString
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyElementNameFn
        public static class CompMatMutatorConditionT {
            public const nint MNMutatorCondition = 0x0; // CompMatPropertyMutatorConditionType_t
            public const nint MStrMutatorConditionContainerName = 0x8; // CUtlString
            public const nint MStrMutatorConditionContainerVarName = 0x10; // CUtlString
            public const nint MStrMutatorConditionContainerVarValue = 0x18; // CUtlString
            public const nint MBPassWhenTrue = 0x20; // bool
        }
        // Parent: None
        // Fields count: 28
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyElementNameFn
        public static class CompMatPropertyMutatorT {
            public const nint MBEnabled = 0x0; // bool
            public const nint MNMutatorCommandType = 0x4; // CompMatPropertyMutatorType_t
            public const nint MStrInitWithContainer = 0x8; // CUtlString
            public const nint MStrCopyPropertyInputContainerSrc = 0x10; // CUtlString
            public const nint MStrCopyPropertyInputContainerProperty = 0x18; // CUtlString
            public const nint MStrCopyPropertyTargetProperty = 0x20; // CUtlString
            public const nint MStrRandomRollInputVarsSeedInputVar = 0x28; // CUtlString
            public const nint MVecRandomRollInputVarsInputVarsToRoll = 0x30; // CUtlVector< CUtlString >
            public const nint MStrCopyMatchingKeysInputContainerSrc = 0x48; // CUtlString
            public const nint MStrCopyKeysWithSuffixInputContainerSrc = 0x50; // CUtlString
            public const nint MStrCopyKeysWithSuffixFindSuffix = 0x58; // CUtlString
            public const nint MStrCopyKeysWithSuffixReplaceSuffix = 0x60; // CUtlString
            public const nint MNSetValueValue = 0x68; // CompositeMaterialInputLooseVariable_t
            public const nint MStrGenerateTextureTargetParam = 0x2D8; // CUtlString
            public const nint MStrGenerateTextureInitialContainer = 0x2E0; // CUtlString
            public const nint MNResolution = 0x2E8; // int32
            public const nint MBIsScratchTarget = 0x2EC; // bool
            public const nint MBSplatDebugInfo = 0x2ED; // bool
            public const nint MBCaptureInRenderDoc = 0x2EE; // bool
            public const nint MVecTexGenInstructions = 0x2F0; // CUtlVector< CompMatPropertyMutator_t >
            public const nint MVecConditionalMutators = 0x308; // CUtlVector< CompMatPropertyMutator_t >
            public const nint MStrPopInputQueueContainer = 0x320; // CUtlString
            public const nint MStrDrawTextInputContainerSrc = 0x328; // CUtlString
            public const nint MStrDrawTextInputContainerProperty = 0x330; // CUtlString
            public const nint MVecDrawTextPosition = 0x338; // Vector2D
            public const nint MColDrawTextColor = 0x340; // Color
            public const nint MStrDrawTextFont = 0x348; // CUtlString
            public const nint MVecConditions = 0x350; // CUtlVector< CompMatMutatorCondition_t >
        }
        // Parent: None
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyElementNameFn
        public static class CompositeMaterialInputContainerT {
            public const nint MBEnabled = 0x0; // bool
            public const nint MNCompositeMaterialInputContainerSourceType = 0x4; // CompositeMaterialInputContainerSourceType_t
            public const nint MStrSpecificContainerMaterial = 0x8; // CResourceName
            public const nint MStrAttrName = 0xE8; // CUtlString
            public const nint MStrAlias = 0xF0; // CUtlString
            public const nint MVecLooseVariables = 0xF8; // CUtlVector< CompositeMaterialInputLooseVariable_t >
            public const nint MStrAttrNameForVar = 0x110; // CUtlString
            public const nint MBExposeExternally = 0x118; // bool
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyElementNameFn
        public static class CompositeMaterialAssemblyProcedureT {
            public const nint MVecCompMatIncludes = 0x0; // CUtlVector< CResourceName >
            public const nint MVecMatchFilters = 0x18; // CUtlVector< CompositeMaterialMatchFilter_t >
            public const nint MVecCompositeInputContainers = 0x30; // CUtlVector< CompositeMaterialInputContainer_t >
            public const nint MVecPropertyMutators = 0x48; // CUtlVector< CompMatPropertyMutator_t >
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MPropertyElementNameFn
        public static class GeneratedTextureHandleT {
            public const nint MStrBitmapName = 0x0; // CUtlString
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // MPropertyElementNameFn
        public static class CompositeMaterialT {
            public const nint MTargetKVs = 0x8; // KeyValues3
            public const nint MPreGenerationKVs = 0x18; // KeyValues3
            public const nint MFinalKVs = 0x28; // KeyValues3
            public const nint MVecGeneratedTextures = 0x40; // CUtlVector< GeneratedTextureHandle_t >
        }
        // Parent: None
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CompositeMaterialEditorPointT {
            public const nint MModelName = 0x0; // CResourceName
            public const nint MNSequenceIndex = 0xE0; // int32
            public const nint MFlCycle = 0xE4; // float32
            public const nint MKvModelStateChoices = 0xE8; // KeyValues3
            public const nint MBEnableChildModel = 0xF8; // bool
            public const nint MChildModelName = 0x100; // CResourceName
            public const nint MVecCompositeMaterialAssemblyProcedures = 0x1E0; // CUtlVector< CompositeMaterialAssemblyProcedure_t >
            public const nint MVecCompositeMaterials = 0x1F8; // CUtlVector< CompositeMaterial_t >
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CCompositeMaterialEditorDoc {
            public const nint MNVersion = 0x8; // int32
            public const nint MPoints = 0x10; // CUtlVector< CompositeMaterialEditorPoint_t >
            public const nint MKVthumbnail = 0x28; // KeyValues3
        }
        // Parent: None
        // Fields count: 43
        public static class CGlobalLightBase {
            public const nint MBSpotLight = 0x10; // bool
            public const nint MSpotLightOrigin = 0x14; // 
            public const nint MSpotLightAngles = 0x20; // QAngle
            public const nint MShadowDirection = 0x2C; // 
            public const nint MAmbientDirection = 0x38; // 
            public const nint MSpecularDirection = 0x44; // 
            public const nint MInspectorSpecularDirection = 0x50; // 
            public const nint MFlSpecularPower = 0x5C; // float32
            public const nint MFlSpecularIndependence = 0x60; // float32
            public const nint MSpecularColor = 0x64; // Color
            public const nint MBStartDisabled = 0x68; // bool
            public const nint MBEnabled = 0x69; // bool
            public const nint MLightColor = 0x6A; // Color
            public const nint MAmbientColor1 = 0x6E; // Color
            public const nint MAmbientColor2 = 0x72; // Color
            public const nint MAmbientColor3 = 0x76; // Color
            public const nint MFlSunDistance = 0x7C; // float32
            public const nint MFlFov = 0x80; // float32
            public const nint MFlNearZ = 0x84; // float32
            public const nint MFlFarZ = 0x88; // float32
            public const nint MBEnableShadows = 0x8C; // bool
            public const nint MBOldEnableShadows = 0x8D; // bool
            public const nint MBBackgroundClearNotRequired = 0x8E; // bool
            public const nint MFlCloudScale = 0x90; // float32
            public const nint MFlCloud1Speed = 0x94; // float32
            public const nint MFlCloud1Direction = 0x98; // float32
            public const nint MFlCloud2Speed = 0x9C; // float32
            public const nint MFlCloud2Direction = 0xA0; // float32
            public const nint MFlAmbientScale1 = 0xB0; // float32
            public const nint MFlAmbientScale2 = 0xB4; // float32
            public const nint MFlGroundScale = 0xB8; // float32
            public const nint MFlLightScale = 0xBC; // float32
            public const nint MFlFoWDarkness = 0xC0; // float32
            public const nint MBEnableSeparateSkyboxFog = 0xC4; // bool
            public const nint MVFowColor = 0xC8; // 
            public const nint MViewOrigin = 0xD4; // 
            public const nint MViewAngles = 0xE0; // QAngle
            public const nint MFlViewFoV = 0xEC; // float32
            public const nint MWorldPoints = 0xF0; // Vector[8]
            public const nint MVFogOffsetLayer0 = 0x4A8; // Vector2D
            public const nint MVFogOffsetLayer1 = 0x4B0; // Vector2D
            public const nint MHEnvWind = 0x4B8; // CHandle< C_BaseEntity >
            public const nint MHEnvSky = 0x4BC; // CHandle< C_BaseEntity >
        }
        // Parent: CBaseEntity
        // Fields count: 1
        public static class CGlobalLight {
            public const nint MWindClothForceHandle = 0xA10; // uint16
        }
        // Parent: CAnimGraphControllerBase
        // Fields count: 4
        public static class CCsgoPreviewModelGraphController {
            public const nint MPszCharacterMode = 0x18; // CAnimGraphParamOptionalRef< char* >
            public const nint MPszWeaponState = 0x38; // CAnimGraphParamOptionalRef< char* >
            public const nint MPszWeaponType = 0x58; // CAnimGraphParamOptionalRef< char* >
            public const nint MPszEndOfMatchCelebration = 0x78; // CAnimGraphParamOptionalRef< char* >
        }
        // Parent: CAnimGraphControllerBase
        // Fields count: 8
        public static class CCsgoPreviewPlayerGraphController {
            public const nint MPszCharacterMode = 0x18; // CAnimGraphParamOptionalRef< char* >
            public const nint MPszTeamPreviewVariant = 0x38; // CAnimGraphParamOptionalRef< char* >
            public const nint MPszTeamPreviewPosition = 0x58; // CAnimGraphParamOptionalRef< char* >
            public const nint MPszEndOfMatchCelebration = 0x78; // CAnimGraphParamOptionalRef< char* >
            public const nint MNTeamPreviewRandom = 0x98; // CAnimGraphParamOptionalRef< int32 >
            public const nint MPszWeaponState = 0xB0; // CAnimGraphParamOptionalRef< char* >
            public const nint MPszWeaponType = 0xD0; // CAnimGraphParamOptionalRef< char* >
            public const nint MBCt = 0xF0; // CAnimGraphParamOptionalRef< bool >
        }
        // Parent: CBaseEntity
        // Fields count: 10
        public static class CCsgoMapPreviewCameraPathNode {
            public const nint MSzParentPathUniqueId = 0x550; // CUtlSymbolLarge
            public const nint MNPathIndex = 0x558; // int32
            public const nint MVInTangentLocal = 0x55C; // 
            public const nint MVOutTangentLocal = 0x568; // 
            public const nint MFlFov = 0x574; // float32
            public const nint MFlSpeed = 0x578; // float32
            public const nint MFlEaseIn = 0x57C; // float32
            public const nint MFlEaseOut = 0x580; // float32
            public const nint MVInTangentWorld = 0x584; // 
            public const nint MVOutTangentWorld = 0x590; // 
        }
        // Parent: CBaseEntity
        // Fields count: 8
        public static class CCsgoMapPreviewCameraPath {
            public const nint MFlZFar = 0x550; // float32
            public const nint MFlZNear = 0x554; // float32
            public const nint MBLoop = 0x558; // bool
            public const nint MBVerticalFov = 0x559; // bool
            public const nint MBConstantSpeed = 0x55A; // bool
            public const nint MFlDuration = 0x55C; // float32
            public const nint MFlPathLength = 0x5A0; // float32
            public const nint MFlPathDuration = 0x5A4; // float32
        }
        // Parent: CPlayerPawnComponent
        // Fields count: 0
        public static class CcsPlayerGlowServices {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseProvideFeatureTag
        // MPulseLibraryBindings
        public static class CCsObserverPawnApi {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseProvideFeatureTag
        // MPulseLibraryBindings
        public static class CCsPlayerPawnApi {
        }
        // Parent: CBaseEntity
        // Fields count: 7
        //
        // Metadata:
        // NetworkVarNames: m_iActiveIssueIndex (int)
        // NetworkVarNames: m_iOnlyTeamToVote (int)
        // NetworkVarNames: m_nVoteOptionCount (int)
        // NetworkVarNames: m_nPotentialVotes (int)
        // NetworkVarNames: m_bIsYesNoVote (bool)
        public static class CVoteController {
            public const nint MIActiveIssueIndex = 0x560; // int32
            public const nint MIOnlyTeamToVote = 0x564; // int32
            public const nint MNVoteOptionCount = 0x568; // int32[5]
            public const nint MNPotentialVotes = 0x57C; // int32
            public const nint MBVotesDirty = 0x580; // bool
            public const nint MBTypeDirty = 0x581; // bool
            public const nint MBIsYesNoVote = 0x582; // bool
        }
        // Parent: CBaseEntity
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
        public static class CMapVetoPickController {
            public const nint MNDraftType = 0x560; // int32
            public const nint MNTeamWinningCoinToss = 0x564; // int32
            public const nint MNTeamWithFirstChoice = 0x568; // int32[64]
            public const nint MNVoteMapIdsList = 0x668; // int32[7]
            public const nint MNAccountIDs = 0x684; // int32[64]
            public const nint MNMapId0 = 0x784; // int32[64]
            public const nint MNMapId1 = 0x884; // int32[64]
            public const nint MNMapId2 = 0x984; // int32[64]
            public const nint MNMapId3 = 0xA84; // int32[64]
            public const nint MNMapId4 = 0xB84; // int32[64]
            public const nint MNMapId5 = 0xC84; // int32[64]
            public const nint MNStartingSide0 = 0xD84; // int32[64]
            public const nint MNCurrentPhase = 0xE84; // int32
            public const nint MNPhaseStartTick = 0xE88; // int32
            public const nint MNPhaseDurationTicks = 0xE8C; // int32
            public const nint MNPostDataUpdateTick = 0xE90; // int32
            public const nint MBDisabledHud = 0xE94; // bool
        }
        // Parent: None
        // Fields count: 0
        public static class CPlayerSprayDecalRenderHelper {
        }
        // Parent: CCsgoMapPreviewCameraPath
        // Fields count: 7
        public static class CCsgoTeamPreviewCamera {
            public const nint MNVariant = 0x5B0; // int32
            public const nint MBDofEnabled = 0x5B4; // bool
            public const nint MFlDofNearBlurry = 0x5B8; // float32
            public const nint MFlDofNearCrisp = 0x5BC; // float32
            public const nint MFlDofFarCrisp = 0x5C0; // float32
            public const nint MFlDofFarBlurry = 0x5C4; // float32
            public const nint MFlDofTiltToGround = 0x5C8; // float32
        }
        // Parent: CCsgoTeamPreviewCamera
        // Fields count: 0
        public static class CCsgoTeamSelectCamera {
        }
        // Parent: CCsgoTeamPreviewCamera
        // Fields count: 0
        public static class CCsgoTerroristTeamIntroCamera {
        }
        // Parent: CCsgoTeamPreviewCamera
        // Fields count: 0
        public static class CCsgoTerroristWingmanIntroCamera {
        }
        // Parent: CCsgoTeamPreviewCamera
        // Fields count: 0
        public static class CCsgoCounterTerroristTeamIntroCamera {
        }
        // Parent: CCsgoTeamPreviewCamera
        // Fields count: 0
        public static class CCsgoCounterTerroristWingmanIntroCamera {
        }
        // Parent: CCsgoTeamPreviewCamera
        // Fields count: 0
        public static class CCsgoEndOfMatchCamera {
        }
        // Parent: CCsgoTeamPreviewCharacterPosition
        // Fields count: 0
        public static class CCsgoEndOfMatchCharacterPosition {
        }
        // Parent: CBaseEntity
        // Fields count: 0
        public static class CCsgoEndOfMatchLineupEndpoint {
        }
        // Parent: CCsgoEndOfMatchLineupEndpoint
        // Fields count: 0
        public static class CCsgoEndOfMatchLineupStart {
        }
        // Parent: CCsgoEndOfMatchLineupEndpoint
        // Fields count: 0
        public static class CCsgoEndOfMatchLineupEnd {
        }
        // Parent: CBaseEntity
        // Fields count: 2
        public static class CCsmFovOverride {
            public const nint MCameraName = 0x550; // CUtlString
            public const nint MFlCsmFovOverrideValue = 0x558; // float32
        }
        // Parent: CBaseEntity
        // Fields count: 0
        public static class CPointEntity {
        }
        // Parent: CBaseEntity
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
        public static class CEnvCombinedLightProbeVolume {
            public const nint MColor = 0x15A8; // Color
            public const nint MFlBrightness = 0x15AC; // float32
            public const nint MHCubemapTexture = 0x15B0; // CStrongHandle< InfoForResourceTypeCTextureBase >
            public const nint MBCustomCubemapTexture = 0x15B8; // bool
            public const nint MHLightProbeTexture = 0x15C0; // CStrongHandle< InfoForResourceTypeCTextureBase >
            public const nint MHLightProbeDirectLightIndicesTexture = 0x15C8; // CStrongHandle< InfoForResourceTypeCTextureBase >
            public const nint MHLightProbeDirectLightScalarsTexture = 0x15D0; // CStrongHandle< InfoForResourceTypeCTextureBase >
            public const nint MHLightProbeDirectLightShadowsTexture = 0x15D8; // CStrongHandle< InfoForResourceTypeCTextureBase >
            public const nint MVBoxMins = 0x15E0; // 
            public const nint MVBoxMaxs = 0x15EC; // 
            public const nint MBMoveable = 0x15F8; // bool
            public const nint MNHandshake = 0x15FC; // int32
            public const nint MNEnvCubeMapArrayIndex = 0x1600; // int32
            public const nint MNPriority = 0x1604; // int32
            public const nint MBStartDisabled = 0x1608; // bool
            public const nint MFlEdgeFadeDist = 0x160C; // float32
            public const nint MVEdgeFadeDists = 0x1610; // 
            public const nint MNLightProbeSizeX = 0x161C; // int32
            public const nint MNLightProbeSizeY = 0x1620; // int32
            public const nint MNLightProbeSizeZ = 0x1624; // int32
            public const nint MNLightProbeAtlasX = 0x1628; // int32
            public const nint MNLightProbeAtlasY = 0x162C; // int32
            public const nint MNLightProbeAtlasZ = 0x1630; // int32
            public const nint MBEnabled = 0x1649; // bool
        }
        // Parent: CBaseEntity
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
        public static class CEnvCubemap {
            public const nint MHCubemapTexture = 0x5D0; // CStrongHandle< InfoForResourceTypeCTextureBase >
            public const nint MBCustomCubemapTexture = 0x5D8; // bool
            public const nint MFlInfluenceRadius = 0x5DC; // float32
            public const nint MVBoxProjectMins = 0x5E0; // 
            public const nint MVBoxProjectMaxs = 0x5EC; // 
            public const nint MBMoveable = 0x5F8; // bool
            public const nint MNHandshake = 0x5FC; // int32
            public const nint MNEnvCubeMapArrayIndex = 0x600; // int32
            public const nint MNPriority = 0x604; // int32
            public const nint MFlEdgeFadeDist = 0x608; // float32
            public const nint MVEdgeFadeDists = 0x60C; // 
            public const nint MFlDiffuseScale = 0x618; // float32
            public const nint MBStartDisabled = 0x61C; // bool
            public const nint MBDefaultEnvMap = 0x61D; // bool
            public const nint MBDefaultSpecEnvMap = 0x61E; // bool
            public const nint MBIndoorCubeMap = 0x61F; // bool
            public const nint MBCopyDiffuseFromDefaultCubemap = 0x620; // bool
            public const nint MBEnabled = 0x630; // bool
        }
        // Parent: CEnvCubemap
        // Fields count: 0
        public static class CEnvCubemapBox {
        }
        // Parent: CBaseEntity
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
        public static class CEnvCubemapFog {
            public const nint MFlEndDistance = 0x550; // float32
            public const nint MFlStartDistance = 0x554; // float32
            public const nint MFlFogFalloffExponent = 0x558; // float32
            public const nint MBHeightFogEnabled = 0x55C; // bool
            public const nint MFlFogHeightWidth = 0x560; // float32
            public const nint MFlFogHeightEnd = 0x564; // float32
            public const nint MFlFogHeightStart = 0x568; // float32
            public const nint MFlFogHeightExponent = 0x56C; // float32
            public const nint MFlLodBias = 0x570; // float32
            public const nint MBActive = 0x574; // bool
            public const nint MBStartDisabled = 0x575; // bool
            public const nint MFlFogMaxOpacity = 0x578; // float32
            public const nint MNCubemapSourceType = 0x57C; // int32
            public const nint MHSkyMaterial = 0x580; // CStrongHandle< InfoForResourceTypeIMaterial2 >
            public const nint MIszSkyEntity = 0x588; // CUtlSymbolLarge
            public const nint MHFogCubemapTexture = 0x590; // CStrongHandle< InfoForResourceTypeCTextureBase >
            public const nint MBHasHeightFogEnd = 0x598; // bool
            public const nint MBFirstTime = 0x599; // bool
        }
        // Parent: CBaseEntity
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
        public static class CGradientFog {
            public const nint MHGradientFogTexture = 0x550; // CStrongHandle< InfoForResourceTypeCTextureBase >
            public const nint MFlFogStartDistance = 0x558; // float32
            public const nint MFlFogEndDistance = 0x55C; // float32
            public const nint MBHeightFogEnabled = 0x560; // bool
            public const nint MFlFogStartHeight = 0x564; // float32
            public const nint MFlFogEndHeight = 0x568; // float32
            public const nint MFlFarZ = 0x56C; // float32
            public const nint MFlFogMaxOpacity = 0x570; // float32
            public const nint MFlFogFalloffExponent = 0x574; // float32
            public const nint MFlFogVerticalExponent = 0x578; // float32
            public const nint MFogColor = 0x57C; // Color
            public const nint MFlFogStrength = 0x580; // float32
            public const nint MFlFadeTime = 0x584; // float32
            public const nint MBStartDisabled = 0x588; // bool
            public const nint MBIsEnabled = 0x589; // bool
            public const nint MBGradientFogNeedsTextures = 0x58A; // bool
        }
        // Parent: CBaseEntity
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
        public static class CEnvLightProbeVolume {
            public const nint MHLightProbeTexture = 0x1528; // CStrongHandle< InfoForResourceTypeCTextureBase >
            public const nint MHLightProbeDirectLightIndicesTexture = 0x1530; // CStrongHandle< InfoForResourceTypeCTextureBase >
            public const nint MHLightProbeDirectLightScalarsTexture = 0x1538; // CStrongHandle< InfoForResourceTypeCTextureBase >
            public const nint MHLightProbeDirectLightShadowsTexture = 0x1540; // CStrongHandle< InfoForResourceTypeCTextureBase >
            public const nint MVBoxMins = 0x1548; // 
            public const nint MVBoxMaxs = 0x1554; // 
            public const nint MBMoveable = 0x1560; // bool
            public const nint MNHandshake = 0x1564; // int32
            public const nint MNPriority = 0x1568; // int32
            public const nint MBStartDisabled = 0x156C; // bool
            public const nint MNLightProbeSizeX = 0x1570; // int32
            public const nint MNLightProbeSizeY = 0x1574; // int32
            public const nint MNLightProbeSizeZ = 0x1578; // int32
            public const nint MNLightProbeAtlasX = 0x157C; // int32
            public const nint MNLightProbeAtlasY = 0x1580; // int32
            public const nint MNLightProbeAtlasZ = 0x1584; // int32
            public const nint MBEnabled = 0x1591; // bool
        }
        // Parent: CBaseEntity
        // Fields count: 6
        //
        // Metadata:
        // NetworkVarNames: m_flVisibilityStrength (float)
        // NetworkVarNames: m_flFogDistanceMultiplier (float)
        // NetworkVarNames: m_flFogMaxDensityMultiplier (float)
        // NetworkVarNames: m_flFadeTime (float)
        // NetworkVarNames: m_bStartDisabled (bool)
        // NetworkVarNames: m_bIsEnabled (bool)
        public static class CPlayerVisibility {
            public const nint MFlVisibilityStrength = 0x550; // float32
            public const nint MFlFogDistanceMultiplier = 0x554; // float32
            public const nint MFlFogMaxDensityMultiplier = 0x558; // float32
            public const nint MFlFadeTime = 0x55C; // float32
            public const nint MBStartDisabled = 0x560; // bool
            public const nint MBIsEnabled = 0x561; // bool
        }
        // Parent: CBaseEntity
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
        public static class CTonemapController2 {
            public const nint MFlAutoExposureMin = 0x550; // float32
            public const nint MFlAutoExposureMax = 0x554; // float32
            public const nint MFlTonemapPercentTarget = 0x558; // float32
            public const nint MFlTonemapPercentBrightPixels = 0x55C; // float32
            public const nint MFlTonemapMinAvgLum = 0x560; // float32
            public const nint MFlExposureAdaptationSpeedUp = 0x564; // float32
            public const nint MFlExposureAdaptationSpeedDown = 0x568; // float32
            public const nint MFlTonemapEvSmoothingRange = 0x56C; // float32
        }
        // Parent: CBaseEntity
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
        public static class CEnvVolumetricFogController {
            public const nint MFlScattering = 0x550; // float32
            public const nint MFlAnisotropy = 0x554; // float32
            public const nint MFlFadeSpeed = 0x558; // float32
            public const nint MFlDrawDistance = 0x55C; // float32
            public const nint MFlFadeInStart = 0x560; // float32
            public const nint MFlFadeInEnd = 0x564; // float32
            public const nint MFlIndirectStrength = 0x568; // float32
            public const nint MNIndirectTextureDimX = 0x56C; // int32
            public const nint MNIndirectTextureDimY = 0x570; // int32
            public const nint MNIndirectTextureDimZ = 0x574; // int32
            public const nint MVBoxMins = 0x578; // 
            public const nint MVBoxMaxs = 0x584; // 
            public const nint MBActive = 0x590; // bool
            public const nint MFlStartAnisoTime = 0x594; // GameTime_t
            public const nint MFlStartScatterTime = 0x598; // GameTime_t
            public const nint MFlStartDrawDistanceTime = 0x59C; // GameTime_t
            public const nint MFlStartAnisotropy = 0x5A0; // float32
            public const nint MFlStartScattering = 0x5A4; // float32
            public const nint MFlStartDrawDistance = 0x5A8; // float32
            public const nint MFlDefaultAnisotropy = 0x5AC; // float32
            public const nint MFlDefaultScattering = 0x5B0; // float32
            public const nint MFlDefaultDrawDistance = 0x5B4; // float32
            public const nint MBStartDisabled = 0x5B8; // bool
            public const nint MBEnableIndirect = 0x5B9; // bool
            public const nint MBIsMaster = 0x5BA; // bool
            public const nint MHFogIndirectTexture = 0x5C0; // CStrongHandle< InfoForResourceTypeCTextureBase >
            public const nint MNForceRefreshCount = 0x5C8; // int32
            public const nint MBFirstTime = 0x5CC; // bool
        }
        // Parent: CBaseEntity
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
        public static class CEnvVolumetricFogVolume {
            public const nint MBActive = 0x550; // bool
            public const nint MVBoxMins = 0x554; // 
            public const nint MVBoxMaxs = 0x560; // 
            public const nint MBStartDisabled = 0x56C; // bool
            public const nint MFlStrength = 0x570; // float32
            public const nint MNFalloffShape = 0x574; // int32
            public const nint MFlFalloffExponent = 0x578; // float32
        }
        // Parent: CBaseEntity
        // Fields count: 3
        //
        // Metadata:
        // NetworkVarNames: m_fog (fogparams_t)
        public static class CFogController {
            public const nint MFog = 0x550; // fogparams_t
            public const nint MBUseAngles = 0x5B8; // bool
            public const nint MIChangedVariables = 0x5BC; // int32
        }
        // Parent: CPointEntity
        // Fields count: 0
        public static class CInfoTarget {
        }
        // Parent: CPointEntity
        // Fields count: 0
        public static class CInfoParticleTarget {
        }
        // Parent: CBaseEntity
        // Fields count: 3
        //
        // Metadata:
        // NetworkVarNames: m_nMode (int)
        // NetworkVarNames: m_vBoxSize (Vector)
        // NetworkVarNames: m_bEnabled (bool)
        public static class CInfoVisibilityBox {
            public const nint MNMode = 0x554; // int32
            public const nint MVBoxSize = 0x558; // 
            public const nint MBEnabled = 0x564; // bool
        }
        // Parent: CBaseEntity
        // Fields count: 8
        //
        // Metadata:
        // NetworkVarNames: m_worldName (string_t)
        // NetworkVarNames: m_layerName (string_t)
        // NetworkVarNames: m_bWorldLayerVisible (bool)
        // NetworkVarNames: m_bEntitiesSpawned (bool)
        public static class CInfoWorldLayer {
            public const nint MPOutputOnEntitiesSpawned = 0x550; // CEntityIOOutput
            public const nint MWorldName = 0x578; // CUtlSymbolLarge
            public const nint MLayerName = 0x580; // CUtlSymbolLarge
            public const nint MBWorldLayerVisible = 0x588; // bool
            public const nint MBEntitiesSpawned = 0x589; // bool
            public const nint MBCreateAsChildSpawnGroup = 0x58A; // bool
            public const nint MHLayerSpawnGroup = 0x58C; // uint32
            public const nint MBWorldLayerActuallyVisible = 0x590; // bool
        }
        // Parent: CBaseEntity
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
        public static class CPointCamera {
            public const nint MFov = 0x550; // float32
            public const nint MResolution = 0x554; // float32
            public const nint MBFogEnable = 0x558; // bool
            public const nint MFogColor = 0x559; // Color
            public const nint MFlFogStart = 0x560; // float32
            public const nint MFlFogEnd = 0x564; // float32
            public const nint MFlFogMaxDensity = 0x568; // float32
            public const nint MBActive = 0x56C; // bool
            public const nint MBUseScreenAspectRatio = 0x56D; // bool
            public const nint MFlAspectRatio = 0x570; // float32
            public const nint MBNoSky = 0x574; // bool
            public const nint MFBrightness = 0x578; // float32
            public const nint MFlZFar = 0x57C; // float32
            public const nint MFlZNear = 0x580; // float32
            public const nint MBCanHltvUse = 0x584; // bool
            public const nint MBDofEnabled = 0x585; // bool
            public const nint MFlDofNearBlurry = 0x588; // float32
            public const nint MFlDofNearCrisp = 0x58C; // float32
            public const nint MFlDofFarCrisp = 0x590; // float32
            public const nint MFlDofFarBlurry = 0x594; // float32
            public const nint MFlDofTiltToGround = 0x598; // float32
            public const nint MTargetFov = 0x59C; // float32
            public const nint MDegreesPerSecond = 0x5A0; // float32
            public const nint MBIsOn = 0x5A4; // bool
            public const nint MPNext = 0x5A8; // C_PointCamera*
        }
        // Parent: CPointCamera
        // Fields count: 1
        public static class CPointCameraVfov {
            public const nint MFlVerticalFov = 0x5B0; // float32
        }
        // Parent: CLogicalEntity
        // Fields count: 12
        public static class CPointTemplate {
            public const nint MIszWorldName = 0x550; // CUtlSymbolLarge
            public const nint MIszSource2EntityLumpName = 0x558; // CUtlSymbolLarge
            public const nint MIszEntityFilterName = 0x560; // CUtlSymbolLarge
            public const nint MFlTimeoutInterval = 0x568; // float32
            public const nint MBAsynchronouslySpawnEntities = 0x56C; // bool
            public const nint MPOutputOnSpawned = 0x570; // CEntityIOOutput
            public const nint MClientOnlyEntityBehavior = 0x598; // PointTemplateClientOnlyEntityBehavior_t
            public const nint MOwnerSpawnGroupType = 0x59C; // PointTemplateOwnerSpawnGroupType_t
            public const nint MCreatedSpawnGroupHandles = 0x5A0; // CUtlVector< uint32 >
            public const nint MSpawnedEntityHandles = 0x5B8; // CUtlVector< CEntityHandle >
            public const nint MScriptSpawnCallback = 0x5D0; // HSCRIPT
            public const nint MScriptCallbackScope = 0x5D8; // HSCRIPT
        }
        // Parent: CBaseEntity
        // Fields count: 4
        //
        // Metadata:
        // NetworkVarNames: m_bDisabled (bool)
        // NetworkVarNames: m_iszSoundAreaType (string_t)
        // NetworkVarNames: m_vPos (Vector)
        public static class CSoundAreaEntityBase {
            public const nint MBDisabled = 0x550; // bool
            public const nint MBWasEnabled = 0x558; // bool
            public const nint MIszSoundAreaType = 0x560; // CUtlSymbolLarge
            public const nint MVPos = 0x568; // 
        }
        // Parent: CSoundAreaEntityBase
        // Fields count: 1
        //
        // Metadata:
        // NetworkVarNames: m_flRadius (float)
        public static class CSoundAreaEntitySphere {
            public const nint MFlRadius = 0x578; // float32
        }
        // Parent: CSoundAreaEntityBase
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_vMin (Vector)
        // NetworkVarNames: m_vMax (Vector)
        public static class CSoundAreaEntityOrientedBox {
            public const nint MVMin = 0x578; // 
            public const nint MVMax = 0x584; // 
        }
        // Parent: CBaseEntity
        // Fields count: 4
        //
        // Metadata:
        // MNetworkIncludeByName
        // NetworkVarNames: m_aPlayerControllers (CHandle< CBasePlayerController >)
        // NetworkVarNames: m_aPlayers (CHandle< C_BasePlayerPawn >)
        // NetworkVarNames: m_iScore (int32)
        // NetworkVarNames: m_szTeamname (char)
        public static class CTeam {
            public const nint MAPlayerControllers = 0x550; // C_NetworkUtlVectorBase< CHandle< CBasePlayerController > >
            public const nint MAPlayers = 0x568; // C_NetworkUtlVectorBase< CHandle< C_BasePlayerPawn > >
            public const nint MIScore = 0x580; // int32
            public const nint MSzTeamname = 0x584; // char[129]
        }
        // Parent: CBaseEntity
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
            public const nint MNFinalPredictedTick = 0x558; // int32
            public const nint MCommandContext = 0x560; // C_CommandContext
            public const nint MNInButtonsWhichAreToggles = 0x5F8; // uint64
            public const nint MNTickBase = 0x600; // uint32
            public const nint MHPawn = 0x604; // CHandle< C_BasePlayerPawn >
            public const nint MHPredictedPawn = 0x608; // CHandle< C_BasePlayerPawn >
            public const nint MNSplitScreenSlot = 0x60C; // CSplitScreenSlot
            public const nint MHSplitOwner = 0x610; // CHandle< CBasePlayerController >
            public const nint MHSplitScreenPlayers = 0x618; // CUtlVector< CHandle< CBasePlayerController > >
            public const nint MBIsHltv = 0x630; // bool
            public const nint MIConnected = 0x634; // PlayerConnectedState
            public const nint MIszPlayerName = 0x638; // char[128]
            public const nint MSteamId = 0x6C0; // uint64
            public const nint MBIsLocalPlayerController = 0x6C8; // bool
            public const nint MIDesiredFov = 0x6CC; // uint32
        }
        // Parent: None
        // Fields count: 14
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CBasePlayerVData {
            public const nint MSModelName = 0x28; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > >
            public const nint MFlHeadDamageMultiplier = 0x108; // CSkillFloat
            public const nint MFlChestDamageMultiplier = 0x118; // CSkillFloat
            public const nint MFlStomachDamageMultiplier = 0x128; // CSkillFloat
            public const nint MFlArmDamageMultiplier = 0x138; // CSkillFloat
            public const nint MFlLegDamageMultiplier = 0x148; // CSkillFloat
            public const nint MFlHoldBreathTime = 0x158; // float32
            public const nint MFlDrowningDamageInterval = 0x15C; // float32
            public const nint MNDrowningDamageInitial = 0x160; // int32
            public const nint MNDrowningDamageMax = 0x164; // int32
            public const nint MNWaterSpeed = 0x168; // int32
            public const nint MFlUseRange = 0x16C; // float32
            public const nint MFlUseAngleTolerance = 0x170; // float32
            public const nint MFlCrouchTime = 0x174; // float32
        }
        // Parent: None
        // Fields count: 20
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CBasePlayerWeaponVData {
            public const nint MSzWorldModel = 0x28; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > >
            public const nint MBBuiltRightHanded = 0x108; // bool
            public const nint MBAllowFlipping = 0x109; // bool
            public const nint MSMuzzleAttachment = 0x110; // CUtlString
            public const nint MSzMuzzleFlashParticle = 0x118; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
            public const nint MIFlags = 0x1F8; // ItemFlagTypes_t
            public const nint MNPrimaryAmmoType = 0x1F9; // AmmoIndex_t
            public const nint MNSecondaryAmmoType = 0x1FA; // AmmoIndex_t
            public const nint MIMaxClip1 = 0x1FC; // int32
            public const nint MIMaxClip2 = 0x200; // int32
            public const nint MIDefaultClip1 = 0x204; // int32
            public const nint MIDefaultClip2 = 0x208; // int32
            public const nint MIWeight = 0x20C; // int32
            public const nint MBAutoSwitchTo = 0x210; // bool
            public const nint MBAutoSwitchFrom = 0x211; // bool
            public const nint MIRumbleEffect = 0x214; // RumbleEffect_t
            public const nint MBLinkedCooldowns = 0x218; // bool
            public const nint MAShootSounds = 0x220; // CUtlMap< WeaponSound_t, CSoundEventName >
            public const nint MISlot = 0x240; // int32
            public const nint MIPosition = 0x244; // int32
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
            public const nint MAnimGraphNetworkedVars = 0x18; // CAnimGraphNetworkedVariables
            public const nint MBSequenceFinished = 0x14A8; // bool
            public const nint MFlSoundSyncTime = 0x14AC; // float32
            public const nint MHSequence = 0x14B0; // HSequence
            public const nint MFlSeqStartTime = 0x14B4; // GameTime_t
            public const nint MFlSeqFixedCycle = 0x14B8; // float32
            public const nint MNAnimLoopMode = 0x14BC; // AnimLoopMode_t
            public const nint MFlPlaybackRate = 0x14C0; // CNetworkedQuantizedFloat
            public const nint MNNotifyState = 0x14CC; // SequenceFinishNotifyState_t
            public const nint MBNetworkedAnimationInputsChanged = 0x14CE; // bool
            public const nint MBNetworkedSequenceChanged = 0x14CF; // bool
            public const nint MBLastUpdateSkipped = 0x14D0; // bool
            public const nint MFlPrevAnimUpdateTime = 0x14D4; // GameTime_t
        }
        // Parent: CBaseEntity
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
        public static class CBaseModelEntity {
            public const nint MCRenderComponent = 0xA20; // CRenderComponent*
            public const nint MCHitboxComponent = 0xA28; // CHitboxComponent
            public const nint MBInitModelEffects = 0xA70; // bool
            public const nint MBIsStaticProp = 0xA71; // bool
            public const nint MNLastAddDecal = 0xA74; // int32
            public const nint MNDecalsAdded = 0xA78; // int32
            public const nint MIOldHealth = 0xA7C; // int32
            public const nint MNRenderMode = 0xA80; // RenderMode_t
            public const nint MNRenderFx = 0xA81; // RenderFx_t
            public const nint MBAllowFadeInView = 0xA82; // bool
            public const nint MClrRender = 0xA83; // Color
            public const nint MVecRenderAttributes = 0xA88; // C_UtlVectorEmbeddedNetworkVar< EntityRenderAttribute_t >
            public const nint MBRenderToCubemaps = 0xAF0; // bool
            public const nint MCollision = 0xAF8; // CCollisionProperty
            public const nint MGlow = 0xBA8; // CGlowProperty
            public const nint MFlGlowBackfaceMult = 0xC00; // float32
            public const nint MFadeMinDist = 0xC04; // float32
            public const nint MFadeMaxDist = 0xC08; // float32
            public const nint MFlFadeScale = 0xC0C; // float32
            public const nint MFlShadowStrength = 0xC10; // float32
            public const nint MNObjectCulling = 0xC14; // uint8
            public const nint MNAddDecal = 0xC18; // int32
            public const nint MVDecalPosition = 0xC1C; // 
            public const nint MVDecalForwardAxis = 0xC28; // 
            public const nint MFlDecalHealBloodRate = 0xC34; // float32
            public const nint MFlDecalHealHeightRate = 0xC38; // float32
            public const nint MConfigEntitiesToPropagateMaterialDecalsTo = 0xC40; // C_NetworkUtlVectorBase< CHandle< C_BaseModelEntity > >
            public const nint MVecViewOffset = 0xC58; // CNetworkViewOffsetVector
            public const nint MPClientAlphaProperty = 0xC88; // CClientAlphaProperty*
            public const nint MClientOverrideTint = 0xC90; // Color
            public const nint MBUseClientOverrideTint = 0xC94; // bool
        }
        // Parent: CBaseModelEntity
        // Fields count: 0
        public static class CServerOnlyModelEntity {
        }
        // Parent: CBaseModelEntity
        // Fields count: 0
        public static class CModelPointEntity {
        }
        // Parent: CLogicalEntity
        // Fields count: 7
        public static class CLogicRelay {
            public const nint MOnTrigger = 0x550; // CEntityIOOutput
            public const nint MOnSpawn = 0x578; // CEntityIOOutput
            public const nint MBDisabled = 0x5A0; // bool
            public const nint MBWaitForRefire = 0x5A1; // bool
            public const nint MBTriggerOnce = 0x5A2; // bool
            public const nint MBFastRetrigger = 0x5A3; // bool
            public const nint MBPassthoughCaller = 0x5A4; // bool
        }
        // Parent: CBaseModelEntity
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
        public static class CParticleSystem {
            public const nint MSzSnapshotFileName = 0xCD0; // char[512]
            public const nint MBActive = 0xED0; // bool
            public const nint MBFrozen = 0xED1; // bool
            public const nint MFlFreezeTransitionDuration = 0xED4; // float32
            public const nint MNStopType = 0xED8; // int32
            public const nint MBAnimateDuringGameplayPause = 0xEDC; // bool
            public const nint MIEffectIndex = 0xEE0; // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition >
            public const nint MFlStartTime = 0xEE8; // GameTime_t
            public const nint MFlPreSimTime = 0xEEC; // float32
            public const nint MVServerControlPoints = 0xEF0; // Vector[4]
            public const nint MIServerControlPointAssignments = 0xF20; // uint8[4]
            public const nint MHControlPointEnts = 0xF24; // CHandle< C_BaseEntity >[64]
            public const nint MBNoSave = 0x1024; // bool
            public const nint MBNoFreeze = 0x1025; // bool
            public const nint MBNoRamp = 0x1026; // bool
            public const nint MBStartActive = 0x1027; // bool
            public const nint MIszEffectName = 0x1028; // CUtlSymbolLarge
            public const nint MIszControlPointNames = 0x1030; // CUtlSymbolLarge[64]
            public const nint MNDataCp = 0x1230; // int32
            public const nint MVecDataCpValue = 0x1234; // 
            public const nint MNTintCp = 0x1240; // int32
            public const nint MClrTint = 0x1244; // Color
            public const nint MBOldActive = 0x1268; // bool
            public const nint MBOldFrozen = 0x1269; // bool
        }
        // Parent: CBaseEntity
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
        public static class CPathParticleRope {
            public const nint MBStartActive = 0x550; // bool
            public const nint MFlMaxSimulationTime = 0x554; // float32
            public const nint MIszEffectName = 0x558; // CUtlSymbolLarge
            public const nint MPathNodesName = 0x560; // CUtlVector< CUtlSymbolLarge >
            public const nint MFlParticleSpacing = 0x578; // float32
            public const nint MFlSlack = 0x57C; // float32
            public const nint MFlRadius = 0x580; // float32
            public const nint MColorTint = 0x584; // Color
            public const nint MNEffectState = 0x588; // int32
            public const nint MIEffectIndex = 0x590; // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition >
            public const nint MPathNodesPosition = 0x598; // C_NetworkUtlVectorBase< Vector >
            public const nint MPathNodesTangentIn = 0x5B0; // C_NetworkUtlVectorBase< Vector >
            public const nint MPathNodesTangentOut = 0x5C8; // C_NetworkUtlVectorBase< Vector >
            public const nint MPathNodesColor = 0x5E0; // C_NetworkUtlVectorBase< Vector >
            public const nint MPathNodesPinEnabled = 0x5F8; // C_NetworkUtlVectorBase< bool >
            public const nint MPathNodesRadiusScale = 0x610; // C_NetworkUtlVectorBase< float32 >
        }
        // Parent: CPathParticleRope
        // Fields count: 0
        public static class CPathParticleRopeAliasPathParticleRopeClientside {
        }
        // Parent: CBaseModelEntity
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
        public static class CDynamicLight {
            public const nint MFlags = 0xCD0; // uint8
            public const nint MLightStyle = 0xCD1; // uint8
            public const nint MRadius = 0xCD4; // float32
            public const nint MExponent = 0xCD8; // int32
            public const nint MInnerAngle = 0xCDC; // float32
            public const nint MOuterAngle = 0xCE0; // float32
            public const nint MSpotRadius = 0xCE4; // float32
        }
        // Parent: CPointEntity
        // Fields count: 9
        //
        // Metadata:
        // NetworkVarNames: m_iszOverlayNames (string_t)
        // NetworkVarNames: m_flOverlayTimes (float32)
        // NetworkVarNames: m_flStartTime (GameTime_t)
        // NetworkVarNames: m_iDesiredOverlay (int32)
        // NetworkVarNames: m_bIsActive (bool)
        public static class CEnvScreenOverlay {
            public const nint MIszOverlayNames = 0x550; // CUtlSymbolLarge[10]
            public const nint MFlOverlayTimes = 0x5A0; // float32[10]
            public const nint MFlStartTime = 0x5C8; // GameTime_t
            public const nint MIDesiredOverlay = 0x5CC; // int32
            public const nint MBIsActive = 0x5D0; // bool
            public const nint MBWasActive = 0x5D1; // bool
            public const nint MICachedDesiredOverlay = 0x5D4; // int32
            public const nint MICurrentOverlay = 0x5D8; // int32
            public const nint MFlCurrentOverlayTime = 0x5DC; // GameTime_t
        }
        // Parent: CBaseModelEntity
        // Fields count: 3
        public static class CFuncTrackTrain {
            public const nint MNLongAxis = 0xCD0; // int32
            public const nint MFlRadius = 0xCD4; // float32
            public const nint MFlLineLength = 0xCD8; // float32
        }
        // Parent: CGlowOverlay
        // Fields count: 7
        public static class CLightGlowOverlay {
            public const nint MVecOrigin = 0xD0; // 
            public const nint MVecDirection = 0xDC; // 
            public const nint MNMinDist = 0xE8; // int32
            public const nint MNMaxDist = 0xEC; // int32
            public const nint MNOuterMaxDist = 0xF0; // int32
            public const nint MBOneSided = 0xF4; // bool
            public const nint MBModulateByDot = 0xF5; // bool
        }
        // Parent: CBaseModelEntity
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
        public static class CLightGlow {
            public const nint MNHorizontalSize = 0xCD0; // uint32
            public const nint MNVerticalSize = 0xCD4; // uint32
            public const nint MNMinDist = 0xCD8; // uint32
            public const nint MNMaxDist = 0xCDC; // uint32
            public const nint MNOuterMaxDist = 0xCE0; // uint32
            public const nint MFlGlowProxySize = 0xCE4; // float32
            public const nint MFlHdrColorScale = 0xCE8; // float32
            public const nint MGlow = 0xCF0; // C_LightGlowOverlay
        }
        // Parent: CBaseEntity
        // Fields count: 1
        //
        // Metadata:
        // NetworkVarNames: m_iCurrentMaxRagdollCount (int8)
        public static class CRagdollManager {
            public const nint MICurrentMaxRagdollCount = 0x550; // int8
        }
        // Parent: CBaseModelEntity
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_flLightScale (float32)
        // NetworkVarNames: m_Radius (float32)
        public static class CSpotlightEnd {
            public const nint MFlLightScale = 0xCD0; // float32
            public const nint MRadius = 0xCD4; // float32
        }
        // Parent: CBaseEntity
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
        public static class CPointValueRemapper {
            public const nint MBDisabled = 0x550; // bool
            public const nint MBDisabledOld = 0x551; // bool
            public const nint MBUpdateOnClient = 0x552; // bool
            public const nint MNInputType = 0x554; // ValueRemapperInputType_t
            public const nint MHRemapLineStart = 0x558; // CHandle< C_BaseEntity >
            public const nint MHRemapLineEnd = 0x55C; // CHandle< C_BaseEntity >
            public const nint MFlMaximumChangePerSecond = 0x560; // float32
            public const nint MFlDisengageDistance = 0x564; // float32
            public const nint MFlEngageDistance = 0x568; // float32
            public const nint MBRequiresUseKey = 0x56C; // bool
            public const nint MNOutputType = 0x570; // ValueRemapperOutputType_t
            public const nint MHOutputEntities = 0x578; // C_NetworkUtlVectorBase< CHandle< C_BaseEntity > >
            public const nint MNHapticsType = 0x590; // ValueRemapperHapticsType_t
            public const nint MNMomentumType = 0x594; // ValueRemapperMomentumType_t
            public const nint MFlMomentumModifier = 0x598; // float32
            public const nint MFlSnapValue = 0x59C; // float32
            public const nint MFlCurrentMomentum = 0x5A0; // float32
            public const nint MNRatchetType = 0x5A4; // ValueRemapperRatchetType_t
            public const nint MFlRatchetOffset = 0x5A8; // float32
            public const nint MFlInputOffset = 0x5AC; // float32
            public const nint MBEngaged = 0x5B0; // bool
            public const nint MBFirstUpdate = 0x5B1; // bool
            public const nint MFlPreviousValue = 0x5B4; // float32
            public const nint MFlPreviousUpdateTickTime = 0x5B8; // GameTime_t
            public const nint MVecPreviousTestPoint = 0x5BC; // 
        }
        // Parent: CModelPointEntity
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
        public static class CPointWorldText {
            public const nint MBForceRecreateNextUpdate = 0xCD8; // bool
            public const nint MMessageText = 0xCE8; // char[512]
            public const nint MFontName = 0xEE8; // char[64]
            public const nint MBEnabled = 0xF28; // bool
            public const nint MBFullbright = 0xF29; // bool
            public const nint MFlWorldUnitsPerPx = 0xF2C; // float32
            public const nint MFlFontSize = 0xF30; // float32
            public const nint MFlDepthOffset = 0xF34; // float32
            public const nint MColor = 0xF38; // Color
            public const nint MNJustifyHorizontal = 0xF3C; // PointWorldTextJustifyHorizontal_t
            public const nint MNJustifyVertical = 0xF40; // PointWorldTextJustifyVertical_t
            public const nint MNReorientMode = 0xF44; // PointWorldTextReorientMode_t
        }
        // Parent: CBaseEntity
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_Handle (CHandle< CBaseEntity>)
        // NetworkVarNames: m_bSendHandle (bool)
        public static class CHandleTest {
            public const nint MHandle = 0x550; // CHandle< C_BaseEntity >
            public const nint MBSendHandle = 0x554; // bool
        }
        // Parent: CBaseEntity
        // Fields count: 0
        public static class CClientScriptEntity {
        }
        // Parent: CBaseEntity
        // Fields count: 1
        //
        // Metadata:
        // NetworkVarNames: m_EnvWindShared (CEnvWindShared)
        public static class CEnvWind {
            public const nint MEnvWindShared = 0x550; // C_EnvWindShared
        }
        // Parent: CBaseModelEntity
        // Fields count: 0
        public static class CBaseToggle {
        }
        // Parent: CBaseToggle
        // Fields count: 3
        //
        // Metadata:
        // NetworkVarNames: m_glowEntity (CHandle< C_BaseModelEntity>)
        // NetworkVarNames: m_usable (bool)
        // NetworkVarNames: m_szDisplayText (string_t)
        public static class CBaseButton {
            public const nint MGlowEntity = 0xCD0; // CHandle< C_BaseModelEntity >
            public const nint MUsable = 0xCD4; // bool
            public const nint MSzDisplayText = 0xCD8; // CUtlSymbolLarge
        }
        // Parent: CBaseModelEntity
        // Fields count: 0
        public static class CPrecipitationBlocker {
        }
        // Parent: CBaseModelEntity
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
        public static class CEntityDissolve {
            public const nint MFlStartTime = 0xCD8; // GameTime_t
            public const nint MFlFadeInStart = 0xCDC; // float32
            public const nint MFlFadeInLength = 0xCE0; // float32
            public const nint MFlFadeOutModelStart = 0xCE4; // float32
            public const nint MFlFadeOutModelLength = 0xCE8; // float32
            public const nint MFlFadeOutStart = 0xCEC; // float32
            public const nint MFlFadeOutLength = 0xCF0; // float32
            public const nint MFlNextSparkTime = 0xCF4; // GameTime_t
            public const nint MNDissolveType = 0xCF8; // EntityDisolveType_t
            public const nint MVDissolverOrigin = 0xCFC; // 
            public const nint MNMagnitude = 0xD08; // uint32
            public const nint MBCoreExplode = 0xD0C; // bool
            public const nint MBLinkedToServerEnt = 0xD0D; // bool
        }
        // Parent: CModelPointEntity
        // Fields count: 0
        public static class CEnvProjectedTexture {
        }
        // Parent: CBaseModelEntity
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
        public static class CEnvDecal {
            public const nint MHDecalMaterial = 0xCD0; // CStrongHandle< InfoForResourceTypeIMaterial2 >
            public const nint MFlWidth = 0xCD8; // float32
            public const nint MFlHeight = 0xCDC; // float32
            public const nint MFlDepth = 0xCE0; // float32
            public const nint MNRenderOrder = 0xCE4; // uint32
            public const nint MBProjectOnWorld = 0xCE8; // bool
            public const nint MBProjectOnCharacters = 0xCE9; // bool
            public const nint MBProjectOnWater = 0xCEA; // bool
            public const nint MFlDepthSortBias = 0xCEC; // float32
        }
        // Parent: CGlowOverlay
        // Fields count: 4
        public static class CFireOverlay {
            public const nint MPOwner = 0xD0; // C_FireSmoke*
            public const nint MVBaseColors = 0xD8; // Vector[4]
            public const nint MFlScale = 0x108; // float32
            public const nint MNGuid = 0x10C; // int32
        }
        // Parent: CBaseModelEntity
        // Fields count: 0
        public static class CFuncBrush {
        }
        // Parent: CFuncBrush
        // Fields count: 3
        //
        // Metadata:
        // NetworkVarNames: m_EffectName (string_t)
        // NetworkVarNames: m_bState (bool)
        public static class CFuncElectrifiedVolume {
            public const nint MNAmbientEffect = 0xCD0; // ParticleIndex_t
            public const nint MEffectName = 0xCD8; // CUtlSymbolLarge
            public const nint MBState = 0xCE0; // bool
        }
        // Parent: CBaseModelEntity
        // Fields count: 0
        //
        // Metadata:
        // MNetworkOverride
        // MNetworkOverride
        public static class CFuncRotating {
        }
        // Parent: CBaseModelEntity
        // Fields count: 0
        public static class CBreakable {
        }
        // Parent: CBreakable
        // Fields count: 0
        public static class CPhysBox {
        }
        // Parent: CBaseModelEntity
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
        public static class CRopeKeyframe {
            public const nint MLinksTouchingSomething = 0xCD8; // CBitVec< 10 >
            public const nint MNLinksTouchingSomething = 0xCDC; // int32
            public const nint MBApplyWind = 0xCE0; // bool
            public const nint MFPrevLockedPoints = 0xCE4; // int32
            public const nint MIForcePointMoveCounter = 0xCE8; // int32
            public const nint MBPrevEndPointPos = 0xCEC; // bool[2]
            public const nint MVPrevEndPointPos = 0xCF0; // Vector[2]
            public const nint MFlCurScroll = 0xD08; // float32
            public const nint MFlScrollSpeed = 0xD0C; // float32
            public const nint MRopeFlags = 0xD10; // uint16
            public const nint MIRopeMaterialModelIndex = 0xD18; // CStrongHandle< InfoForResourceTypeIMaterial2 >
            public const nint MLightValues = 0xF90; // Vector[10]
            public const nint MNSegments = 0x1008; // uint8
            public const nint MHStartPoint = 0x100C; // CHandle< C_BaseEntity >
            public const nint MHEndPoint = 0x1010; // CHandle< C_BaseEntity >
            public const nint MIStartAttachment = 0x1014; // AttachmentHandle_t
            public const nint MIEndAttachment = 0x1015; // AttachmentHandle_t
            public const nint MSubdiv = 0x1016; // uint8
            public const nint MRopeLength = 0x1018; // int16
            public const nint MSlack = 0x101A; // int16
            public const nint MTextureScale = 0x101C; // float32
            public const nint MFLockedPoints = 0x1020; // uint8
            public const nint MNChangeCount = 0x1021; // uint8
            public const nint MWidth = 0x1024; // float32
            public const nint MPhysicsDelegate = 0x1028; // C_RopeKeyframe::CPhysicsDelegate
            public const nint MHMaterial = 0x1038; // CStrongHandle< InfoForResourceTypeIMaterial2 >
            public const nint MTextureHeight = 0x1040; // int32
            public const nint MVecImpulse = 0x1044; // 
            public const nint MVecPreviousImpulse = 0x1050; // 
            public const nint MFlCurrentGustTimer = 0x105C; // float32
            public const nint MFlCurrentGustLifetime = 0x1060; // float32
            public const nint MFlTimeToNextGust = 0x1064; // float32
            public const nint MVWindDir = 0x1068; // 
            public const nint MVColorMod = 0x1074; // 
            public const nint MVCachedEndPointAttachmentPos = 0x1080; // Vector[2]
            public const nint MVCachedEndPointAttachmentAngle = 0x1098; // QAngle[2]
            public const nint MBConstrainBetweenEndpoints = 0x10B0; // bool
            public const nint MBEndPointAttachmentPositionsDirty = 0x0; // bitfield:1
            public const nint MBEndPointAttachmentAnglesDirty = 0x0; // bitfield:1
            public const nint MBNewDataThisFrame = 0x0; // bitfield:1
            public const nint MBPhysicsInitted = 0x0; // bitfield:1
        }
        // Parent: CPointEntity
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
        public static class CSceneEntity {
            public const nint MBIsPlayingBack = 0x558; // bool
            public const nint MBPaused = 0x559; // bool
            public const nint MBMultiplayer = 0x55A; // bool
            public const nint MBAutogenerated = 0x55B; // bool
            public const nint MFlForceClientTime = 0x55C; // float32
            public const nint MNSceneStringIndex = 0x560; // uint16
            public const nint MBClientOnly = 0x562; // bool
            public const nint MHOwner = 0x564; // CHandle< C_BaseFlex >
            public const nint MHActorList = 0x568; // C_NetworkUtlVectorBase< CHandle< C_BaseFlex > >
            public const nint MBWasPlaying = 0x580; // bool
            public const nint MQueuedEvents = 0x590; // CUtlVector< C_SceneEntity::QueuedEvents_t >
            public const nint MFlCurrentTime = 0x5A8; // float32
        }
        // Parent: CGlowOverlay
        // Fields count: 1
        public static class CSunGlowOverlay {
            public const nint MBModulateByDot = 0xD0; // bool
        }
        // Parent: CBaseModelEntity
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
        public static class CSun {
            public const nint MFxSsSunFlareEffectIndex = 0xCD0; // ParticleIndex_t
            public const nint MFxSunFlareEffectIndex = 0xCD4; // ParticleIndex_t
            public const nint MFdistNormalize = 0xCD8; // float32
            public const nint MVSunPos = 0xCDC; // 
            public const nint MVDirection = 0xCE8; // 
            public const nint MIszEffectName = 0xCF8; // CUtlSymbolLarge
            public const nint MIszSsEffectName = 0xD00; // CUtlSymbolLarge
            public const nint MClrOverlay = 0xD08; // Color
            public const nint MBOn = 0xD0C; // bool
            public const nint MBmaxColor = 0xD0D; // bool
            public const nint MFlSize = 0xD10; // float32
            public const nint MFlHazeScale = 0xD14; // float32
            public const nint MFlRotation = 0xD18; // float32
            public const nint MFlHdrColorScale = 0xD1C; // float32
            public const nint MFlAlphaHaze = 0xD20; // float32
            public const nint MFlAlphaScale = 0xD24; // float32
            public const nint MFlAlphaHdr = 0xD28; // float32
            public const nint MFlFarZScale = 0xD2C; // float32
        }
        // Parent: CBaseToggle
        // Fields count: 2
        //
        // Metadata:
        // MNetworkIncludeByName
        // NetworkVarNames: m_bDisabled (bool)
        // NetworkVarNames: m_bClientSidePredicted (bool)
        public static class CBaseTrigger {
            public const nint MBDisabled = 0xCD0; // bool
            public const nint MBClientSidePredicted = 0xCD1; // bool
        }
        // Parent: CBaseModelEntity
        // Fields count: 0
        public static class CTriggerVolume {
        }
    }
    // Module: engine2.dll
    // Classes count: 48
    // Enums count: 4
    public static class Engine2 {
        // Alignment: 4
        // Members count: 3
        public enum SpawnDebugOverrideStateT : int {
            SpawnDebugOverrideNone = 0,
            SpawnDebugOverrideForceEnabled = 1,
            SpawnDebugOverrideForceDisabled = 2
        }
        // Alignment: 4
        // Members count: 5
        public enum SpawnDebugRestrictionOverrideStateT : int {
            SpawnDebugRestrictNone = 0,
            SpawnDebugRestrictIgnoreManagerDistanceReqs = 1,
            SpawnDebugRestrictIgnoreTemplateDistanceLosReqs = 2,
            SpawnDebugRestrictIgnoreTemplateCooldownLimits = 4,
            SpawnDebugRestrictIgnoreTargetCooldownLimits = 8
        }
        // Alignment: 4
        // Members count: 3
        public enum EntityDormancyTypeT : int {
            EntityNotDormant = 0,
            EntityDormant = 1,
            EntitySuspended = 2
        }
        // Alignment: 4
        // Members count: 4
        public enum EntityIoTargetTypeT : int {
            EntityIoTargetInvalid = -1,
            EntityIoTargetEntityname = 2,
            EntityIoTargetEhandle = 6,
            EntityIoTargetEntitynameOrClassname = 7
        }
        // Parent: None
        // Fields count: 4
        public static class EngineLoopStateT {
            public const nint MNPlatWindowWidth = 0x18; // int32
            public const nint MNPlatWindowHeight = 0x1C; // int32
            public const nint MNRenderWidth = 0x20; // int32
            public const nint MNRenderHeight = 0x24; // int32
        }
        // Parent: None
        // Fields count: 0
        public static class EventModInitializedT {
        }
        // Parent: None
        // Fields count: 1
        public static class EventFrameBoundaryT {
            public const nint MFlFrameTime = 0x0; // float32
        }
        // Parent: None
        // Fields count: 1
        public static class EventProfileStorageAvailableT {
            public const nint MNSplitScreenSlot = 0x0; // CSplitScreenSlot
        }
        // Parent: None
        // Fields count: 0
        public static class EventSplitScreenStateChangedT {
        }
        // Parent: None
        // Fields count: 8
        public static class EventSetTimeT {
            public const nint MLoopState = 0x0; // EngineLoopState_t
            public const nint MNClientOutputFrames = 0x28; // int32
            public const nint MFlRealTime = 0x30; // float64
            public const nint MFlRenderTime = 0x38; // float64
            public const nint MFlRenderFrameTime = 0x40; // float64
            public const nint MFlRenderFrameTimeUnbounded = 0x48; // float64
            public const nint MFlRenderFrameTimeUnscaled = 0x50; // float64
            public const nint MFlTickRemainder = 0x58; // float64
        }
        // Parent: None
        // Fields count: 2
        public static class EventClientPollInputT {
            public const nint MLoopState = 0x0; // EngineLoopState_t
            public const nint MFlRealTime = 0x28; // float32
        }
        // Parent: None
        // Fields count: 4
        public static class EventClientProcessInputT {
            public const nint MLoopState = 0x0; // EngineLoopState_t
            public const nint MFlRealTime = 0x28; // float32
            public const nint MFlTickInterval = 0x2C; // float32
            public const nint MFlTickStartTime = 0x30; // float64
        }
        // Parent: None
        // Fields count: 3
        public static class EventClientProcessGameInputT {
            public const nint MLoopState = 0x0; // EngineLoopState_t
            public const nint MFlRealTime = 0x28; // float32
            public const nint MFlFrameTime = 0x2C; // float32
        }
        // Parent: None
        // Fields count: 6
        public static class EventClientPreOutputT {
            public const nint MLoopState = 0x0; // EngineLoopState_t
            public const nint MFlRenderTime = 0x28; // float64
            public const nint MFlRenderFrameTime = 0x30; // float64
            public const nint MFlRenderFrameTimeUnbounded = 0x38; // float64
            public const nint MFlRealTime = 0x40; // float32
            public const nint MBRenderOnly = 0x44; // bool
        }
        // Parent: None
        // Fields count: 1
        public static class EventClientSceneSystemThreadStateChangeT {
            public const nint MBThreadsActive = 0x0; // bool
        }
        // Parent: None
        // Fields count: 5
        public static class EventClientOutputT {
            public const nint MLoopState = 0x0; // EngineLoopState_t
            public const nint MFlRenderTime = 0x28; // float32
            public const nint MFlRealTime = 0x2C; // float32
            public const nint MFlRenderFrameTimeUnbounded = 0x30; // float32
            public const nint MBRenderOnly = 0x34; // bool
        }
        // Parent: None
        // Fields count: 5
        public static class EventClientPostOutputT {
            public const nint MLoopState = 0x0; // EngineLoopState_t
            public const nint MFlRenderTime = 0x28; // float64
            public const nint MFlRenderFrameTime = 0x30; // float32
            public const nint MFlRenderFrameTimeUnbounded = 0x34; // float32
            public const nint MBRenderOnly = 0x38; // bool
        }
        // Parent: None
        // Fields count: 4
        public static class EventClientFrameSimulateT {
            public const nint MLoopState = 0x0; // EngineLoopState_t
            public const nint MFlRealTime = 0x28; // float32
            public const nint MFlFrameTime = 0x2C; // float32
            public const nint MFlWhenScheduleSendTickPacket = 0x30; // float64
        }
        // Parent: None
        // Fields count: 3
        public static class EventSimpleLoopFrameUpdateT {
            public const nint MLoopState = 0x0; // EngineLoopState_t
            public const nint MFlRealTime = 0x28; // float32
            public const nint MFlFrameTime = 0x2C; // float32
        }
        // Parent: None
        // Fields count: 3
        public static class EventSimulateT {
            public const nint MLoopState = 0x0; // EngineLoopState_t
            public const nint MBFirstTick = 0x28; // bool
            public const nint MBLastTick = 0x29; // bool
        }
        // Parent: EventSimulateT
        // Fields count: 4
        public static class EventAdvanceTickT {
            public const nint MNCurrentTick = 0x30; // int32
            public const nint MNCurrentTickThisFrame = 0x34; // int32
            public const nint MNTotalTicksThisFrame = 0x38; // int32
            public const nint MNTotalTicks = 0x3C; // int32
        }
        // Parent: EventSimulateT
        // Fields count: 4
        public static class EventPostAdvanceTickT {
            public const nint MNCurrentTick = 0x30; // int32
            public const nint MNCurrentTickThisFrame = 0x34; // int32
            public const nint MNTotalTicksThisFrame = 0x38; // int32
            public const nint MNTotalTicks = 0x3C; // int32
        }
        // Parent: EventAdvanceTickT
        // Fields count: 0
        public static class EventServerAdvanceTickT {
        }
        // Parent: EventPostAdvanceTickT
        // Fields count: 0
        public static class EventServerPostAdvanceTickT {
        }
        // Parent: EventAdvanceTickT
        // Fields count: 0
        public static class EventClientAdvanceTickT {
        }
        // Parent: EventPostAdvanceTickT
        // Fields count: 0
        public static class EventClientPostAdvanceTickT {
        }
        // Parent: None
        // Fields count: 0
        public static class EventClientPredictionPostNetupdateT {
        }
        // Parent: None
        // Fields count: 1
        public static class EventClientPollNetworkingT {
            public const nint MNTickCount = 0x0; // int32
        }
        // Parent: None
        // Fields count: 0
        public static class EventClientProcessNetworkingT {
        }
        // Parent: EventSimulateT
        // Fields count: 0
        public static class EventClientPreSimulateT {
        }
        // Parent: EventSimulateT
        // Fields count: 0
        public static class EventClientSimulateT {
        }
        // Parent: EventSimulateT
        // Fields count: 0
        public static class EventServerPollNetworkingT {
        }
        // Parent: EventSimulateT
        // Fields count: 0
        public static class EventServerProcessNetworkingT {
        }
        // Parent: EventSimulateT
        // Fields count: 0
        public static class EventServerSimulateT {
        }
        // Parent: EventSimulateT
        // Fields count: 0
        public static class EventServerPostSimulateT {
        }
        // Parent: EventSimulateT
        // Fields count: 0
        public static class EventClientPostSimulateT {
        }
        // Parent: EventSimulateT
        // Fields count: 0
        public static class EventClientPauseSimulateT {
        }
        // Parent: None
        // Fields count: 1
        public static class EventPostDataUpdateT {
            public const nint MNCount = 0x0; // int32
        }
        // Parent: None
        // Fields count: 1
        public static class EventPreDataUpdateT {
            public const nint MNCount = 0x0; // int32
        }
        // Parent: None
        // Fields count: 1
        public static class EventAppShutdownT {
            public const nint MNDummy0 = 0x0; // int32
        }
        // Parent: None
        // Fields count: 1
        public static class CNetworkVarChainer {
            public const nint MPathIndex = 0x20; // ChangeAccessorFieldPathIndex_t
        }
        // Parent: None
        // Fields count: 0
        public static class CVariantDefaultAllocator {
        }
        // Parent: None
        // Fields count: 0
        public static class EntOutputT {
        }
        // Parent: None
        // Fields count: 7
        public static class EntComponentInfoT {
            public const nint MPName = 0x0; // char*
            public const nint MPCppClassname = 0x8; // char*
            public const nint MPNetworkDataReferencedDescription = 0x10; // char*
            public const nint MPNetworkDataReferencedPtrPropDescription = 0x18; // char*
            public const nint MNRuntimeIndex = 0x20; // int32
            public const nint MNFlags = 0x24; // uint32
            public const nint MPBaseClassComponentHelper = 0x60; // CEntityComponentHelper*
        }
        // Parent: None
        // Fields count: 0
        public static class CEntityComponent {
        }
        // Parent: None
        // Fields count: 0
        public static class EntInputT {
        }
        // Parent: None
        // Fields count: 4
        public static class CEntityComponentHelper {
            public const nint MFlags = 0x8; // uint32
            public const nint MPInfo = 0x10; // EntComponentInfo_t*
            public const nint MNPriority = 0x18; // int32
            public const nint MPNext = 0x20; // CEntityComponentHelper*
        }
        // Parent: None
        // Fields count: 11
        //
        // Metadata:
        // NetworkVarNames: m_nameStringableIndex (int32)
        public static class CEntityIdentity {
            public const nint MNameStringableIndex = 0x14; // int32
            public const nint MName = 0x18; // CUtlSymbolLarge
            public const nint MDesignerName = 0x20; // CUtlSymbolLarge
            public const nint MFlags = 0x30; // uint32
            public const nint MWorldGroupId = 0x38; // WorldGroupId_t
            public const nint MFDataObjectTypes = 0x3C; // uint32
            public const nint MPathIndex = 0x40; // ChangeAccessorFieldPathIndex_t
            public const nint MPPrev = 0x58; // CEntityIdentity*
            public const nint MPNext = 0x60; // CEntityIdentity*
            public const nint MPPrevByClass = 0x68; // CEntityIdentity*
            public const nint MPNextByClass = 0x70; // CEntityIdentity*
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
            public const nint MIszPrivateVScripts = 0x8; // CUtlSymbolLarge
            public const nint MPEntity = 0x10; // CEntityIdentity*
            public const nint MCScriptComponent = 0x28; // CScriptComponent*
            public const nint MBVisibleinPvs = 0x30; // bool
        }
        // Parent: None
        // Fields count: 1
        public static class CEntityIoOutput {
            public const nint MValue = 0x18; // CVariantBase< CVariantDefaultAllocator >
        }
        // Parent: CEntityComponent
        // Fields count: 1
        public static class CScriptComponent {
            public const nint MScriptClassName = 0x30; // CUtlSymbolLarge
        }
    }
    // Module: host.dll
    // Classes count: 2
    // Enums count: 0
    public static class Host {
        // Parent: None
        // Fields count: 1
        public static class CAnimScriptBase {
            public const nint MBIsValid = 0x8; // bool
        }
        // Parent: CAnimScriptBase
        // Fields count: 1
        public static class EmptyTestScript {
            public const nint MHTest = 0x10; // CAnimScriptParam< float32 >
        }
    }
    // Module: materialsystem2.dll
    // Classes count: 13
    // Enums count: 5
    public static class Materialsystem2 {
        // Alignment: 4
        // Members count: 4
        public enum HorizJustificationE : int {
            HorizJustificationLeft = 0,
            HorizJustificationCenter = 1,
            HorizJustificationRight = 2,
            HorizJustificationNone = 3
        }
        // Alignment: 4
        // Members count: 4
        public enum VertJustificationE : int {
            VertJustificationTop = 0,
            VertJustificationCenter = 1,
            VertJustificationBottom = 2,
            VertJustificationNone = 3
        }
        // Alignment: 4
        // Members count: 3
        public enum LayoutPositionTypeE : int {
            LayoutpositiontypeViewportRelative = 0,
            LayoutpositiontypeFractional = 1,
            LayoutpositiontypeNone = 2
        }
        // Alignment: 4
        // Members count: 3
        public enum BloomBlendModeT : int {
            BloomBlendAdd = 0,
            BloomBlendScreen = 1,
            BloomBlendBlur = 2
        }
        // Alignment: 4
        // Members count: 3
        public enum ViewFadeModeT : int {
            ViewFadeConstantColor = 0,
            ViewFadeModulate = 1,
            ViewFadeMod2x = 2
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class MaterialParamT {
            public const nint MName = 0x0; // CUtlString
        }
        // Parent: MaterialParamT
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class MaterialParamIntT {
            public const nint MNValue = 0x8; // int32
        }
        // Parent: MaterialParamT
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class MaterialParamFloatT {
            public const nint MFlValue = 0x8; // float32
        }
        // Parent: MaterialParamT
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class MaterialParamVectorT {
            public const nint MValue = 0x8; // Vector4D
        }
        // Parent: MaterialParamT
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class MaterialParamTextureT {
            public const nint MPValue = 0x8; // CStrongHandle< InfoForResourceTypeCTextureBase >
        }
        // Parent: MaterialParamT
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class MaterialParamStringT {
            public const nint MValue = 0x8; // CUtlString
        }
        // Parent: MaterialParamT
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class MaterialParamBufferT {
            public const nint MValue = 0x8; // CUtlBinaryBlock
        }
        // Parent: None
        // Fields count: 14
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class MaterialResourceDataT {
            public const nint MMaterialName = 0x0; // CUtlString
            public const nint MShaderName = 0x8; // CUtlString
            public const nint MIntParams = 0x10; // CUtlVector< MaterialParamInt_t >
            public const nint MFloatParams = 0x28; // CUtlVector< MaterialParamFloat_t >
            public const nint MVectorParams = 0x40; // CUtlVector< MaterialParamVector_t >
            public const nint MTextureParams = 0x58; // CUtlVector< MaterialParamTexture_t >
            public const nint MDynamicParams = 0x70; // CUtlVector< MaterialParamBuffer_t >
            public const nint MDynamicTextureParams = 0x88; // CUtlVector< MaterialParamBuffer_t >
            public const nint MIntAttributes = 0xA0; // CUtlVector< MaterialParamInt_t >
            public const nint MFloatAttributes = 0xB8; // CUtlVector< MaterialParamFloat_t >
            public const nint MVectorAttributes = 0xD0; // CUtlVector< MaterialParamVector_t >
            public const nint MTextureAttributes = 0xE8; // CUtlVector< MaterialParamTexture_t >
            public const nint MStringAttributes = 0x100; // CUtlVector< MaterialParamString_t >
            public const nint MRenderAttributesUsed = 0x118; // CUtlVector< CUtlString >
        }
        // Parent: None
        // Fields count: 15
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class PostProcessingTonemapParametersT {
            public const nint MFlExposureBias = 0x0; // float32
            public const nint MFlShoulderStrength = 0x4; // float32
            public const nint MFlLinearStrength = 0x8; // float32
            public const nint MFlLinearAngle = 0xC; // float32
            public const nint MFlToeStrength = 0x10; // float32
            public const nint MFlToeNum = 0x14; // float32
            public const nint MFlToeDenom = 0x18; // float32
            public const nint MFlWhitePoint = 0x1C; // float32
            public const nint MFlLuminanceSource = 0x20; // float32
            public const nint MFlExposureBiasShadows = 0x24; // float32
            public const nint MFlExposureBiasHighlights = 0x28; // float32
            public const nint MFlMinShadowLum = 0x2C; // float32
            public const nint MFlMaxShadowLum = 0x30; // float32
            public const nint MFlMinHighlightLum = 0x34; // float32
            public const nint MFlMaxHighlightLum = 0x38; // float32
        }
        // Parent: None
        // Fields count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class PostProcessingBloomParametersT {
            public const nint MBlendMode = 0x0; // BloomBlendMode_t
            public const nint MFlBloomStrength = 0x4; // float32
            public const nint MFlScreenBloomStrength = 0x8; // float32
            public const nint MFlBlurBloomStrength = 0xC; // float32
            public const nint MFlBloomThreshold = 0x10; // float32
            public const nint MFlBloomThresholdWidth = 0x14; // float32
            public const nint MFlSkyboxBloomStrength = 0x18; // float32
            public const nint MFlBloomStartValue = 0x1C; // float32
            public const nint MFlBlurWeight = 0x20; // float32[5]
            public const nint MVBlurTint = 0x34; // Vector[5]
        }
        // Parent: None
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class PostProcessingVignetteParametersT {
            public const nint MFlVignetteStrength = 0x0; // float32
            public const nint MVCenter = 0x4; // Vector2D
            public const nint MFlRadius = 0xC; // float32
            public const nint MFlRoundness = 0x10; // float32
            public const nint MFlFeather = 0x14; // float32
            public const nint MVColorTint = 0x18; // 
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class PostProcessingLocalContrastParametersT {
            public const nint MFlLocalContrastStrength = 0x0; // float32
            public const nint MFlLocalContrastEdgeStrength = 0x4; // float32
            public const nint MFlLocalContrastVignetteStart = 0x8; // float32
            public const nint MFlLocalContrastVignetteEnd = 0xC; // float32
            public const nint MFlLocalContrastVignetteBlur = 0x10; // float32
        }
        // Parent: None
        // Fields count: 11
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class PostProcessingResourceT {
            public const nint MBHasTonemapParams = 0x0; // bool
            public const nint MToneMapParams = 0x4; // PostProcessingTonemapParameters_t
            public const nint MBHasBloomParams = 0x40; // bool
            public const nint MBloomParams = 0x44; // PostProcessingBloomParameters_t
            public const nint MBHasVignetteParams = 0xB4; // bool
            public const nint MVignetteParams = 0xB8; // PostProcessingVignetteParameters_t
            public const nint MBHasLocalContrastParams = 0xDC; // bool
            public const nint MLocalConstrastParams = 0xE0; // PostProcessingLocalContrastParameters_t
            public const nint MNColorCorrectionVolumeDim = 0xF4; // int32
            public const nint MColorCorrectionVolumeData = 0xF8; // CUtlBinaryBlock
            public const nint MBHasColorCorrection = 0x110; // bool
        }
    }
    // Module: meshsystem.dll
    // Classes count: 0
    // Enums count: 0
    public static class Meshsystem {
    }
    // Module: networksystem.dll
    // Classes count: 1
    // Enums count: 0
    public static class Networksystem {
        // Parent: None
        // Fields count: 1
        public static class ChangeAccessorFieldPathIndexT {
            public const nint MValue = 0x0; // int16
        }
    }
    // Module: panorama.dll
    // Classes count: 0
    // Enums count: 2
    public static class Panorama {
        // Alignment: 4
        // Members count: 13
        public enum ELayoutNodeType : int {
            Root = 0,
            Styles = 1,
            ScriptBody = 2,
            Scripts = 3,
            Snippets = 4,
            Include = 5,
            Snippet = 6,
            Panel = 7,
            PanelAttribute = 8,
            PanelAttributeValue = 9,
            ReferenceContent = 10,
            ReferenceCompiled = 11,
            ReferencePassthrough = 12
        }
        // Alignment: 4
        // Members count: 15
        public enum EStyleNodeType : int {
            Root = 0,
            Expression = 1,
            Property = 2,
            Define = 3,
            Import = 4,
            Keyframes = 5,
            KeyframeSelector = 6,
            StyleSelector = 7,
            Whitespace = 8,
            ExpressionText = 9,
            ExpressionUrl = 10,
            ExpressionConcat = 11,
            ReferenceContent = 12,
            ReferenceCompiled = 13,
            ReferencePassthrough = 14
        }
    }
    // Module: particles.dll
    // Classes count: 250
    // Enums count: 71
    public static class Particles {
        // Alignment: 4
        // Members count: 6
        public enum ParticleControlPointAxisT : int {
            ParticleCpAxisX = 0,
            ParticleCpAxisY = 1,
            ParticleCpAxisZ = 2,
            ParticleCpAxisNegativeX = 3,
            ParticleCpAxisNegativeY = 4,
            ParticleCpAxisNegativeZ = 5
        }
        // Alignment: 4
        // Members count: 6
        public enum ParticleImpulseTypeT : int {
            ImpulseTypeNone = 0,
            ImpulseTypeGeneric = 1,
            ImpulseTypeRope = 2,
            ImpulseTypeExplosion = 4,
            ImpulseTypeExplosionUnderwater = 8,
            ImpulseTypeParticleSystem = 16
        }
        // Alignment: 4
        // Members count: 3
        public enum ParticleFalloffFunctionT : int {
            ParticleFalloffConstant = 0,
            ParticleFalloffLinear = 1,
            ParticleFalloffExponential = 2
        }
        // Alignment: 4
        // Members count: 3
        public enum AnimationTypeT : int {
            AnimationTypeFixedRate = 0,
            AnimationTypeFitLifetime = 1,
            AnimationTypeManualFrames = 2
        }
        // Alignment: 4
        // Members count: 3
        public enum ClosestPointTestTypeT : int {
            ParticleClosestTypeBox = 0,
            ParticleClosestTypeCapsule = 1,
            ParticleClosestTypeHybrid = 2
        }
        // Alignment: 4
        // Members count: 3
        public enum InheritableBoolTypeT : int {
            InheritableBoolInherit = 0,
            InheritableBoolFalse = 1,
            InheritableBoolTrue = 2
        }
        // Alignment: 4
        // Members count: 2
        public enum ParticleHitboxBiasTypeT : int {
            ParticleHitboxBiasEntity = 0,
            ParticleHitboxBiasHitbox = 1
        }
        // Alignment: 4
        // Members count: 2
        public enum ParticleAttrBoxFlagsT : int {
            ParticleAttrBoxFlagsNone = 0,
            ParticleAttrBoxFlagsWater = 1
        }
        // Alignment: 4
        // Members count: 7
        public enum PFuncVisualizationTypeT : int {
            PfuncVisualizationSphereWireframe = 0,
            PfuncVisualizationSphereSolid = 1,
            PfuncVisualizationBox = 2,
            PfuncVisualizationRing = 3,
            PfuncVisualizationPlane = 4,
            PfuncVisualizationLine = 5,
            PfuncVisualizationCylinder = 6
        }
        // Alignment: 4
        // Members count: 3
        public enum PetGroundTypeT : int {
            PetGroundNone = 0,
            PetGroundGrid = 1,
            PetGroundPlane = 2
        }
        // Alignment: 4
        // Members count: 2
        public enum SpriteCardShaderTypeT : int {
            SpritecardShaderBase = 0,
            SpritecardShaderCustom = 1
        }
        // Alignment: 4
        // Members count: 5
        public enum ParticleTopologyT : int {
            ParticleTopologyPoints = 0,
            ParticleTopologyLines = 1,
            ParticleTopologyTris = 2,
            ParticleTopologyQuads = 3,
            ParticleTopologyCubes = 4
        }
        // Alignment: 4
        // Members count: 4
        public enum ParticleDetailLevelT : int {
            ParticledetailLow = 0,
            ParticledetailMedium = 1,
            ParticledetailHigh = 2,
            ParticledetailUltra = 3
        }
        // Alignment: 4
        // Members count: 4
        public enum ParticleTraceSetT : int {
            ParticleTraceSetAll = 0,
            ParticleTraceSetStatic = 1,
            ParticleTraceSetStaticAndKeyframed = 2,
            ParticleTraceSetDynamic = 3
        }
        // Alignment: 4
        // Members count: 5
        public enum ParticleCollisionModeT : int {
            CollisionModePerParticleTrace = 3,
            CollisionModeUseNearestTrace = 2,
            CollisionModePerFramePlaneset = 1,
            CollisionModeInitialTraceDown = 0,
            CollisionModeDisabled = -1
        }
        // Alignment: 4
        // Members count: 5
        public enum ParticleColorBlendModeT : int {
            ParticleblendDefault = 0,
            ParticleblendOverlay = 1,
            ParticleblendDarken = 2,
            ParticleblendLighten = 3,
            ParticleblendMultiply = 4
        }
        // Alignment: 4
        // Members count: 7
        public enum Detail2ComboT : int {
            Detail2ComboUninitialized = -1,
            Detail2ComboOff = 0,
            Detail2ComboAdd = 1,
            Detail2ComboAddSelfIllum = 2,
            Detail2ComboMod2x = 3,
            Detail2ComboMul = 4,
            Detail2ComboCrossfade = 5
        }
        // Alignment: 4
        // Members count: 4
        public enum DetailComboT : int {
            DetailComboOff = 0,
            DetailComboAdd = 1,
            DetailComboAddSelfIllum = 2,
            DetailComboMod2x = 3
        }
        // Alignment: 4
        // Members count: 9
        public enum ScalarExpressionTypeT : int {
            ScalarExpressionUninitialized = -1,
            ScalarExpressionAdd = 0,
            ScalarExpressionSubtract = 1,
            ScalarExpressionMul = 2,
            ScalarExpressionDivide = 3,
            ScalarExpressionInput1 = 4,
            ScalarExpressionMin = 5,
            ScalarExpressionMax = 6,
            ScalarExpressionMod = 7
        }
        // Alignment: 4
        // Members count: 9
        public enum VectorExpressionTypeT : int {
            VectorExpressionUninitialized = -1,
            VectorExpressionAdd = 0,
            VectorExpressionSubtract = 1,
            VectorExpressionMul = 2,
            VectorExpressionDivide = 3,
            VectorExpressionInput1 = 4,
            VectorExpressionMin = 5,
            VectorExpressionMax = 6,
            VectorExpressionCrossproduct = 7
        }
        // Alignment: 4
        // Members count: 7
        public enum VectorFloatExpressionTypeT : int {
            VectorFloatExpressionUninitialized = -1,
            VectorFloatExpressionDotproduct = 0,
            VectorFloatExpressionDistance = 1,
            VectorFloatExpressionDistancesqr = 2,
            VectorFloatExpressionInput1Length = 3,
            VectorFloatExpressionInput1Lengthsqr = 4,
            VectorFloatExpressionInput1Noise = 5
        }
        // Alignment: 4
        // Members count: 4
        public enum MissingParentInheritBehaviorT : int {
            MissingParentDoNothing = -1,
            MissingParentKill = 0,
            MissingParentFindNew = 1,
            MissingParentSameIndex = 2
        }
        // Alignment: 4
        // Members count: 2
        public enum HitboxLerpTypeT : int {
            HitboxLerpLifetime = 0,
            HitboxLerpConstant = 1
        }
        // Alignment: 4
        // Members count: 3
        public enum ParticleSelectionT : int {
            ParticleSelectionFirst = 0,
            ParticleSelectionLast = 1,
            ParticleSelectionNumber = 2
        }
        // Alignment: 4
        // Members count: 12
        public enum ParticlePinDistanceT : int {
            ParticlePinDistanceNone = -1,
            ParticlePinDistanceNeighbor = 0,
            ParticlePinDistanceFarthest = 1,
            ParticlePinDistanceFirst = 2,
            ParticlePinDistanceLast = 3,
            ParticlePinDistanceCenter = 5,
            ParticlePinDistanceCp = 6,
            ParticlePinDistanceCpPairEither = 7,
            ParticlePinDistanceCpPairBoth = 8,
            ParticlePinSpeed = 9,
            ParticlePinCollectionAge = 10,
            ParticlePinFloatValue = 11
        }
        // Alignment: 4
        // Members count: 13
        public enum ParticleColorBlendTypeT : int {
            ParticleColorBlendMultiply = 0,
            ParticleColorBlendMultiply2x = 1,
            ParticleColorBlendDivide = 2,
            ParticleColorBlendAdd = 3,
            ParticleColorBlendSubtract = 4,
            ParticleColorBlendMod2x = 5,
            ParticleColorBlendScreen = 6,
            ParticleColorBlendMax = 7,
            ParticleColorBlendMin = 8,
            ParticleColorBlendReplace = 9,
            ParticleColorBlendAverage = 10,
            ParticleColorBlendNegate = 11,
            ParticleColorBlendLuminance = 12
        }
        // Alignment: 4
        // Members count: 6
        public enum ParticleSetMethodT : int {
            ParticleSetReplaceValue = 0,
            ParticleSetScaleInitialValue = 1,
            ParticleSetAddToInitialValue = 2,
            ParticleSetRampCurrentValue = 3,
            ParticleSetScaleCurrentValue = 4,
            ParticleSetAddToCurrentValue = 5
        }
        // Alignment: 4
        // Members count: 3
        public enum ParticleDirectionNoiseTypeT : int {
            ParticleDirNoisePerlin = 0,
            ParticleDirNoiseCurl = 1,
            ParticleDirNoiseWorleyBasic = 2
        }
        // Alignment: 4
        // Members count: 3
        public enum ParticleRotationLockTypeT : int {
            ParticleRotationLockNone = 0,
            ParticleRotationLockRotations = 1,
            ParticleRotationLockNormal = 2
        }
        // Alignment: 4
        // Members count: 3
        public enum ParticleEndcapModeT : int {
            ParticleEndcapAlwaysOn = -1,
            ParticleEndcapEndcapOff = 0,
            ParticleEndcapEndcapOn = 1
        }
        // Alignment: 4
        // Members count: 3
        public enum ParticleLightingQualityT : int {
            ParticleLightingPerParticle = 0,
            ParticleLightingPerVertex = 1,
            ParticleLightingPerPixel = -1
        }
        // Alignment: 4
        // Members count: 2
        public enum StandardLightingAttenuationStyleT : int {
            LightStyleOld = 0,
            LightStyleNew = 1
        }
        // Alignment: 4
        // Members count: 3
        public enum ParticleTraceMissBehaviorT : int {
            ParticleTraceMissBehaviorNone = 0,
            ParticleTraceMissBehaviorKill = 1,
            ParticleTraceMissBehaviorTraceEnd = 2
        }
        // Alignment: 4
        // Members count: 2
        public enum ParticleOrientationSetModeT : int {
            ParticleOrientationSetFromVelocity = 0,
            ParticleOrientationSetFromRotations = 1
        }
        // Alignment: 4
        // Members count: 2
        public enum ParticleLightnintBranchBehaviorT : int {
            ParticleLightningBranchCurrentDir = 0,
            ParticleLightningBranchEndpointDir = 1
        }
        // Alignment: 4
        // Members count: 3
        public enum ParticleLightFogLightingModeT : int {
            ParticleLightFogLightingModeNone = 0,
            ParticleLightFogLightingModeDynamic = 2,
            ParticleLightFogLightingModeDynamicNoshadows = 4
        }
        // Alignment: 4
        // Members count: 3
        public enum ParticleSequenceCropOverrideT : int {
            ParticleSequenceCropOverrideDefault = -1,
            ParticleSequenceCropOverrideForceOff = 0,
            ParticleSequenceCropOverrideForceOn = 1
        }
        // Alignment: 4
        // Members count: 3
        public enum ParticleParentSetModeT : int {
            ParticleSetParentNo = 0,
            ParticleSetParentImmediate = 1,
            ParticleSetParentRoot = 1
        }
        // Alignment: 4
        // Members count: 2
        public enum MaterialProxyTypeT : int {
            MaterialProxyStatusEffect = 0,
            MaterialProxyTint = 1
        }
        // Alignment: 4
        // Members count: 3
        public enum BBoxVolumeTypeT : int {
            BboxVolume = 0,
            BboxDimensions = 1,
            BboxMinsMaxs = 2
        }
        // Alignment: 4
        // Members count: 2
        public enum ParticleHitboxDataSelectionT : int {
            ParticleHitboxAverageSpeed = 0,
            ParticleHitboxCount = 1
        }
        // Alignment: 4
        // Members count: 2
        public enum SnapshotIndexTypeT : int {
            SnapshotIndexIncrement = 0,
            SnapshotIndexDirect = 1
        }
        // Alignment: 4
        // Members count: 6
        public enum ParticleOrientationChoiceListT : int {
            ParticleOrientationScreenAligned = 0,
            ParticleOrientationScreenZAligned = 1,
            ParticleOrientationWorldZAligned = 2,
            ParticleOrientationAlignToParticleNormal = 3,
            ParticleOrientationScreenalignToParticleNormal = 4,
            ParticleOrientationFull3axisRotation = 5
        }
        // Alignment: 4
        // Members count: 7
        public enum ParticleOutputBlendModeT : int {
            ParticleOutputBlendModeAlpha = 0,
            ParticleOutputBlendModeAdd = 1,
            ParticleOutputBlendModeBlendAdd = 2,
            ParticleOutputBlendModeHalfBlendAdd = 3,
            ParticleOutputBlendModeNegHalfBlendAdd = 4,
            ParticleOutputBlendModeMod2x = 5,
            ParticleOutputBlendModeLighten = 6
        }
        // Alignment: 4
        // Members count: 4
        public enum ParticleAlphaReferenceTypeT : int {
            ParticleAlphaReferenceAlphaAlpha = 0,
            ParticleAlphaReferenceOpaqueAlpha = 1,
            ParticleAlphaReferenceAlphaOpaque = 2,
            ParticleAlphaReferenceOpaqueOpaque = 3
        }
        // Alignment: 4
        // Members count: 2
        public enum BlurFilterTypeT : int {
            BlurfilterGaussian = 0,
            BlurfilterBox = 1
        }
        // Alignment: 4
        // Members count: 4
        public enum ParticleLightTypeChoiceListT : int {
            ParticleLightTypePoint = 0,
            ParticleLightTypeSpot = 1,
            ParticleLightTypeFx = 2,
            ParticleLightTypeCapsule = 3
        }
        // Alignment: 4
        // Members count: 2
        public enum ParticleLightUnitChoiceListT : int {
            ParticleLightUnitCandelas = 0,
            ParticleLightUnitLumens = 1
        }
        // Alignment: 4
        // Members count: 2
        public enum ParticleOmni2LightTypeChoiceListT : int {
            ParticleOmni2LightTypePoint = 0,
            ParticleOmni2LightTypeSphere = 1
        }
        // Alignment: 4
        // Members count: 3
        public enum ParticleLightBehaviorChoiceListT : int {
            ParticleLightBehaviorFollowDirection = 0,
            ParticleLightBehaviorRope = 1,
            ParticleLightBehaviorTrails = 2
        }
        // Alignment: 4
        // Members count: 3
        public enum ParticleDepthFeatheringModeT : int {
            ParticleDepthFeatheringOff = 0,
            ParticleDepthFeatheringOnOptional = 1,
            ParticleDepthFeatheringOnRequired = 2
        }
        // Alignment: 4
        // Members count: 4
        public enum ParticleVrHandChoiceListT : int {
            ParticleVrhandLeft = 0,
            ParticleVrhandRight = 1,
            ParticleVrhandCp = 2,
            ParticleVrhandCpObject = 3
        }
        // Alignment: 4
        // Members count: 2
        public enum ParticleSortingChoiceListT : int {
            ParticleSortingNearest = 0,
            ParticleSortingCreationTime = 1
        }
        // Alignment: 4
        // Members count: 10
        public enum SpriteCardTextureTypeT : int {
            SpritecardTextureDiffuse = 0,
            SpritecardTextureZoom = 1,
            SpritecardTexture1dColorLookup = 2,
            SpritecardTextureUvdistortion = 3,
            SpritecardTextureUvdistortionZoom = 4,
            SpritecardTextureNormalmap = 5,
            SpritecardTextureAnimmotionvec = 6,
            SpritecardTextureSphericalHarmonicsA = 7,
            SpritecardTextureSphericalHarmonicsB = 8,
            SpritecardTextureSphericalHarmonicsC = 9
        }
        // Alignment: 4
        // Members count: 15
        public enum SpriteCardTextureChannelT : int {
            SpritecardTextureChannelMixRgb = 0,
            SpritecardTextureChannelMixRgba = 1,
            SpritecardTextureChannelMixA = 2,
            SpritecardTextureChannelMixRgbA = 3,
            SpritecardTextureChannelMixRgbAlphamask = 4,
            SpritecardTextureChannelMixRgbRgbmask = 5,
            SpritecardTextureChannelMixRgbaRgbalpha = 6,
            SpritecardTextureChannelMixARgbalpha = 7,
            SpritecardTextureChannelMixRgbARgbalpha = 8,
            SpritecardTextureChannelMixR = 9,
            SpritecardTextureChannelMixG = 10,
            SpritecardTextureChannelMixB = 11,
            SpritecardTextureChannelMixRalpha = 12,
            SpritecardTextureChannelMixGalpha = 13,
            SpritecardTextureChannelMixBalpha = 14
        }
        // Alignment: 4
        // Members count: 14
        public enum SpriteCardPerParticleScaleT : int {
            SpritecardTexturePpScaleNone = 0,
            SpritecardTexturePpScaleParticleAge = 1,
            SpritecardTexturePpScaleAnimationFrame = 2,
            SpritecardTexturePpScaleShaderExtraData1 = 3,
            SpritecardTexturePpScaleShaderExtraData2 = 4,
            SpritecardTexturePpScaleParticleAlpha = 5,
            SpritecardTexturePpScaleShaderRadius = 6,
            SpritecardTexturePpScaleRoll = 7,
            SpritecardTexturePpScaleYaw = 8,
            SpritecardTexturePpScalePitch = 9,
            SpritecardTexturePpScaleRandom = 10,
            SpritecardTexturePpScaleNegRandom = 11,
            SpritecardTexturePpScaleRandomTime = 12,
            SpritecardTexturePpScaleNegRandomTime = 13
        }
        // Alignment: 4
        // Members count: 7
        public enum ParticleTextureLayerBlendTypeT : int {
            SpritecardTextureBlendMultiply = 0,
            SpritecardTextureBlendMod2x = 1,
            SpritecardTextureBlendReplace = 2,
            SpritecardTextureBlendAdd = 3,
            SpritecardTextureBlendSubtract = 4,
            SpritecardTextureBlendAverage = 5,
            SpritecardTextureBlendLuminance = 6
        }
        // Alignment: 4
        // Members count: 6
        public enum ParticlePostProcessPriorityGroupT : int {
            ParticlePostProcessPriorityLevelVolume = 0,
            ParticlePostProcessPriorityLevelOverride = 1,
            ParticlePostProcessPriorityGameplayEffect = 2,
            ParticlePostProcessPriorityGameplayStateLow = 3,
            ParticlePostProcessPriorityGameplayStateHigh = 4,
            ParticlePostProcessPriorityGlobalUi = 5
        }
        // Alignment: 4
        // Members count: 3
        public enum ParticleFogTypeT : int {
            ParticleFogGameDefault = 0,
            ParticleFogEnabled = 1,
            ParticleFogDisabled = 2
        }
        // Alignment: 4
        // Members count: 2
        public enum TextureRepetitionModeT : int {
            TextureRepetitionParticle = 0,
            TextureRepetitionPath = 1
        }
        // Alignment: 4
        // Members count: 24
        public enum ParticleFloatTypeT : int {
            PfTypeInvalid = -1,
            PfTypeLiteral = 0,
            PfTypeNamedValue = 1,
            PfTypeRandomUniform = 2,
            PfTypeRandomBiased = 3,
            PfTypeCollectionAge = 4,
            PfTypeEndcapAge = 5,
            PfTypeControlPointComponent = 6,
            PfTypeControlPointChangeAge = 7,
            PfTypeControlPointSpeed = 8,
            PfTypeParticleDetailLevel = 9,
            PfTypeConcurrentDefCount = 10,
            PfTypeClosestCameraDistance = 11,
            PfTypeRendererCameraDistance = 12,
            PfTypeRendererCameraDotProduct = 13,
            PfTypeParticleNoise = 14,
            PfTypeParticleAge = 15,
            PfTypeParticleAgeNormalized = 16,
            PfTypeParticleFloat = 17,
            PfTypeParticleVectorComponent = 18,
            PfTypeParticleSpeed = 19,
            PfTypeParticleNumber = 20,
            PfTypeParticleNumberNormalized = 21,
            PfTypeCount = 22
        }
        // Alignment: 4
        // Members count: 5
        public enum ParticleFloatBiasTypeT : int {
            PfBiasTypeInvalid = -1,
            PfBiasTypeStandard = 0,
            PfBiasTypeGain = 1,
            PfBiasTypeExponential = 2,
            PfBiasTypeCount = 3
        }
        // Alignment: 4
        // Members count: 4
        public enum PfNoiseTypeT : int {
            PfNoiseTypePerlin = 0,
            PfNoiseTypeSimplex = 1,
            PfNoiseTypeWorley = 2,
            PfNoiseTypeCurl = 3
        }
        // Alignment: 4
        // Members count: 4
        public enum PfNoiseModifierT : int {
            PfNoiseModifierNone = 0,
            PfNoiseModifierLines = 1,
            PfNoiseModifierClumps = 2,
            PfNoiseModifierRings = 3
        }
        // Alignment: 4
        // Members count: 6
        public enum PfNoiseTurbulenceT : int {
            PfNoiseTurbNone = 0,
            PfNoiseTurbHighlight = 1,
            PfNoiseTurbFeedback = 2,
            PfNoiseTurbLoopy = 3,
            PfNoiseTurbContrast = 4,
            PfNoiseTurbAlternate = 5
        }
        // Alignment: 4
        // Members count: 4
        public enum ParticleFloatRandomModeT : int {
            PfRandomModeInvalid = -1,
            PfRandomModeConstant = 0,
            PfRandomModeVarying = 1,
            PfRandomModeCount = 2
        }
        // Alignment: 4
        // Members count: 4
        public enum ParticleFloatInputModeT : int {
            PfInputModeInvalid = -1,
            PfInputModeClamped = 0,
            PfInputModeLooped = 1,
            PfInputModeCount = 2
        }
        // Alignment: 4
        // Members count: 8
        public enum ParticleFloatMapTypeT : int {
            PfMapTypeInvalid = -1,
            PfMapTypeDirect = 0,
            PfMapTypeMult = 1,
            PfMapTypeRemap = 2,
            PfMapTypeRemapBiased = 3,
            PfMapTypeCurve = 4,
            PfMapTypeNotched = 5,
            PfMapTypeCount = 6
        }
        // Alignment: 4
        // Members count: 5
        public enum ParticleTransformTypeT : int {
            PtTypeInvalid = 0,
            PtTypeNamedValue = 1,
            PtTypeControlPoint = 2,
            PtTypeControlPointRange = 3,
            PtTypeCount = 4
        }
        // Alignment: 4
        // Members count: 5
        public enum ParticleModelTypeT : int {
            PmTypeInvalid = 0,
            PmTypeNamedValueModel = 1,
            PmTypeNamedValueEhandle = 2,
            PmTypeControlPoint = 3,
            PmTypeCount = 4
        }
        // Alignment: 4
        // Members count: 19
        public enum ParticleVecTypeT : int {
            PvecTypeInvalid = -1,
            PvecTypeLiteral = 0,
            PvecTypeLiteralColor = 1,
            PvecTypeNamedValue = 2,
            PvecTypeParticleVector = 3,
            PvecTypeParticleVelocity = 4,
            PvecTypeCpValue = 5,
            PvecTypeCpRelativePosition = 6,
            PvecTypeCpRelativeDir = 7,
            PvecTypeCpRelativeRandomDir = 8,
            PvecTypeFloatComponents = 9,
            PvecTypeFloatInterpClamped = 10,
            PvecTypeFloatInterpOpen = 11,
            PvecTypeFloatInterpGradient = 12,
            PvecTypeRandomUniform = 13,
            PvecTypeRandomUniformOffset = 14,
            PvecTypeCpDelta = 15,
            PvecTypeClosestCameraPosition = 16,
            PvecTypeCount = 17
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CRandomNumberGeneratorParameters {
            public const nint MBDistributeEvenly = 0x0; // bool
            public const nint MNSeed = 0x4; // int32
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class MaterialVariableT {
            public const nint MStrVariable = 0x0; // CUtlString
            public const nint MNVariableField = 0x8; // ParticleAttributeIndex_t
            public const nint MFlScale = 0xC; // float32
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RenderProjectedMaterialT {
            public const nint MHMaterial = 0x0; // CStrongHandle< InfoForResourceTypeIMaterial2 >
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class ParticlePreviewBodyGroupT {
            public const nint MBodyGroupName = 0x0; // CUtlString
            public const nint MNValue = 0x8; // int32
        }
        // Parent: None
        // Fields count: 16
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class ParticlePreviewStateT {
            public const nint MPreviewModel = 0x0; // CUtlString
            public const nint MNModSpecificData = 0x8; // uint32
            public const nint MGroundType = 0xC; // PetGroundType_t
            public const nint MSequenceName = 0x10; // CUtlString
            public const nint MNFireParticleOnSequenceFrame = 0x18; // int32
            public const nint MHitboxSetName = 0x20; // CUtlString
            public const nint MMaterialGroupName = 0x28; // CUtlString
            public const nint MVecBodyGroups = 0x30; // CUtlVector< ParticlePreviewBodyGroup_t >
            public const nint MFlPlaybackSpeed = 0x48; // float32
            public const nint MFlParticleSimulationRate = 0x4C; // float32
            public const nint MBShouldDrawHitboxes = 0x50; // bool
            public const nint MBShouldDrawAttachments = 0x51; // bool
            public const nint MBShouldDrawAttachmentNames = 0x52; // bool
            public const nint MBShouldDrawControlPointAxes = 0x53; // bool
            public const nint MBAnimationNonLooping = 0x54; // bool
            public const nint MVecPreviewGravity = 0x58; // 
        }
        // Parent: None
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class ParticleControlPointDriverT {
            public const nint MIControlPoint = 0x0; // int32
            public const nint MIAttachType = 0x4; // ParticleAttachment_t
            public const nint MAttachmentName = 0x8; // CUtlString
            public const nint MVecOffset = 0x10; // 
            public const nint MAngOffset = 0x1C; // QAngle
            public const nint MEntityName = 0x28; // CUtlString
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class ParticleControlPointConfigurationT {
            public const nint MName = 0x0; // CUtlString
            public const nint MDrivers = 0x8; // CUtlVector< ParticleControlPointDriver_t >
            public const nint MPreviewState = 0x20; // ParticlePreviewState_t
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
            public const nint MFlCameraBias = 0x0; // float32
            public const nint MNCPin = 0x4; // int32
            public const nint MFlProxyRadius = 0x8; // float32
            public const nint MFlInputMin = 0xC; // float32
            public const nint MFlInputMax = 0x10; // float32
            public const nint MFlNoPixelVisibilityFallback = 0x14; // float32
            public const nint MFlDistanceInputMin = 0x18; // float32
            public const nint MFlDistanceInputMax = 0x1C; // float32
            public const nint MFlDotInputMin = 0x20; // float32
            public const nint MFlDotInputMax = 0x24; // float32
            public const nint MBDotCpAngles = 0x28; // bool
            public const nint MBDotCameraAngles = 0x29; // bool
            public const nint MFlAlphaScaleMin = 0x2C; // float32
            public const nint MFlAlphaScaleMax = 0x30; // float32
            public const nint MFlRadiusScaleMin = 0x34; // float32
            public const nint MFlRadiusScaleMax = 0x38; // float32
            public const nint MFlRadiusScaleFovBase = 0x3C; // float32
            public const nint MBRightEye = 0x40; // bool
        }
        // Parent: None
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPathParameters {
            public const nint MNStartControlPointNumber = 0x0; // int32
            public const nint MNEndControlPointNumber = 0x4; // int32
            public const nint MNBulgeControl = 0x8; // int32
            public const nint MFlBulge = 0xC; // float32
            public const nint MFlMidPoint = 0x10; // float32
            public const nint MVStartPointOffset = 0x14; // 
            public const nint MVMidPointOffset = 0x20; // 
            public const nint MVEndOffset = 0x2C; // 
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class ParticleChildrenInfoT {
            public const nint MChildRef = 0x0; // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition >
            public const nint MFlDelay = 0x8; // float32
            public const nint MBEndCap = 0xC; // bool
            public const nint MBDisableChild = 0xD; // bool
            public const nint MNDetailLevel = 0x10; // ParticleDetailLevel_t
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class ControlPointReferenceT {
            public const nint MControlPointNameString = 0x0; // int32
            public const nint MVOffsetFromControlPoint = 0x4; // 
            public const nint MBOffsetInLocalSpace = 0x10; // bool
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class ModelReferenceT {
            public const nint MModel = 0x0; // CStrongHandle< InfoForResourceTypeCModel >
            public const nint MFlRelativeProbabilityOfSpawn = 0x8; // float32
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class SequenceWeightedListT {
            public const nint MNSequence = 0x0; // int32
            public const nint MFlRelativeWeight = 0x4; // float32
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CollisionGroupContextT {
            public const nint MNCollisionGroupNumber = 0x0; // int32
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class PointDefinitionT {
            public const nint MNControlPoint = 0x0; // int32
            public const nint MBLocalCoords = 0x4; // bool
            public const nint MVOffset = 0x8; // 
        }
        // Parent: PointDefinitionT
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class PointDefinitionWithTimeValuesT {
            public const nint MFlTimeDuration = 0x14; // float32
        }
        // Parent: IParticleSystemDefinition
        // Fields count: 64
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CParticleSystemDefinition {
            public const nint MNBehaviorVersion = 0x8; // int32
            public const nint MPreEmissionOperators = 0x10; // CUtlVector< CParticleFunctionPreEmission* >
            public const nint MEmitters = 0x28; // CUtlVector< CParticleFunctionEmitter* >
            public const nint MInitializers = 0x40; // CUtlVector< CParticleFunctionInitializer* >
            public const nint MOperators = 0x58; // CUtlVector< CParticleFunctionOperator* >
            public const nint MForceGenerators = 0x70; // CUtlVector< CParticleFunctionForce* >
            public const nint MConstraints = 0x88; // CUtlVector< CParticleFunctionConstraint* >
            public const nint MRenderers = 0xA0; // CUtlVector< CParticleFunctionRenderer* >
            public const nint MChildren = 0xB8; // CUtlVector< ParticleChildrenInfo_t >
            public const nint MNFirstMultipleOverrideBackwardCompat = 0x178; // int32
            public const nint MNInitialParticles = 0x210; // int32
            public const nint MNMaxParticles = 0x214; // int32
            public const nint MNGroupId = 0x218; // int32
            public const nint MBoundingBoxMin = 0x21C; // 
            public const nint MBoundingBoxMax = 0x228; // 
            public const nint MFlDepthSortBias = 0x234; // float32
            public const nint MNSortOverridePositionCp = 0x238; // int32
            public const nint MBInfiniteBounds = 0x23C; // bool
            public const nint MBEnableNamedValues = 0x23D; // bool
            public const nint MNamedValueDomain = 0x240; // CUtlString
            public const nint MNamedValueLocals = 0x248; // CUtlVector< ParticleNamedValueSource_t* >
            public const nint MConstantColor = 0x260; // Color
            public const nint MConstantNormal = 0x264; // 
            public const nint MFlConstantRadius = 0x270; // float32
            public const nint MFlConstantRotation = 0x274; // float32
            public const nint MFlConstantRotationSpeed = 0x278; // float32
            public const nint MFlConstantLifespan = 0x27C; // float32
            public const nint MNConstantSequenceNumber = 0x280; // int32
            public const nint MNConstantSequenceNumber1 = 0x284; // int32
            public const nint MNSnapshotControlPoint = 0x288; // int32
            public const nint MHSnapshot = 0x290; // CStrongHandle< InfoForResourceTypeIParticleSnapshot >
            public const nint MPszCullReplacementName = 0x298; // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition >
            public const nint MFlCullRadius = 0x2A0; // float32
            public const nint MFlCullFillCost = 0x2A4; // float32
            public const nint MNCullControlPoint = 0x2A8; // int32
            public const nint MHFallback = 0x2B0; // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition >
            public const nint MNFallbackMaxCount = 0x2B8; // int32
            public const nint MHLowViolenceDef = 0x2C0; // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition >
            public const nint MHReferenceReplacement = 0x2C8; // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition >
            public const nint MFlPreSimulationTime = 0x2D0; // float32
            public const nint MFlStopSimulationAfterTime = 0x2D4; // float32
            public const nint MFlMaximumTimeStep = 0x2D8; // float32
            public const nint MFlMaximumSimTime = 0x2DC; // float32
            public const nint MFlMinimumSimTime = 0x2E0; // float32
            public const nint MFlMinimumTimeStep = 0x2E4; // float32
            public const nint MNMinimumFrames = 0x2E8; // int32
            public const nint MNMinCpuLevel = 0x2EC; // int32
            public const nint MNMinGpuLevel = 0x2F0; // int32
            public const nint MFlNoDrawTimeToGoToSleep = 0x2F4; // float32
            public const nint MFlMaxDrawDistance = 0x2F8; // float32
            public const nint MFlStartFadeDistance = 0x2FC; // float32
            public const nint MFlMaxCreationDistance = 0x300; // float32
            public const nint MNAggregationMinAvailableParticles = 0x304; // int32
            public const nint MFlAggregateRadius = 0x308; // float32
            public const nint MBShouldBatch = 0x30C; // bool
            public const nint MBShouldHitboxesFallbackToRenderBounds = 0x30D; // bool
            public const nint MBShouldHitboxesFallbackToSnapshot = 0x30E; // bool
            public const nint MNViewModelEffect = 0x310; // InheritableBoolType_t
            public const nint MBScreenSpaceEffect = 0x314; // bool
            public const nint MPszTargetLayerId = 0x318; // CUtlSymbolLarge
            public const nint MNSkipRenderControlPoint = 0x320; // int32
            public const nint MNAllowRenderControlPoint = 0x324; // int32
            public const nint MBShouldSort = 0x328; // bool
            public const nint MControlPointConfigurations = 0x370; // CUtlVector< ParticleControlPointConfiguration_t >
        }
        // Parent: None
        // Fields count: 16
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CParticleFunction {
            public const nint MFlOpStrength = 0x8; // CParticleCollectionFloatInput
            public const nint MNOpEndCapState = 0x160; // ParticleEndcapMode_t
            public const nint MFlOpStartFadeInTime = 0x164; // float32
            public const nint MFlOpEndFadeInTime = 0x168; // float32
            public const nint MFlOpStartFadeOutTime = 0x16C; // float32
            public const nint MFlOpEndFadeOutTime = 0x170; // float32
            public const nint MFlOpFadeOscillatePeriod = 0x174; // float32
            public const nint MBNormalizeToStopTime = 0x178; // bool
            public const nint MFlOpTimeOffsetMin = 0x17C; // float32
            public const nint MFlOpTimeOffsetMax = 0x180; // float32
            public const nint MNOpTimeOffsetSeed = 0x184; // int32
            public const nint MNOpTimeScaleSeed = 0x188; // int32
            public const nint MFlOpTimeScaleMin = 0x18C; // float32
            public const nint MFlOpTimeScaleMax = 0x190; // float32
            public const nint MBDisableOperator = 0x196; // bool
            public const nint MNotes = 0x198; // CUtlString
        }
        // Parent: CParticleFunction
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CParticleFunctionInitializer {
            public const nint MNAssociatedEmitterIndex = 0x1B8; // int32
        }
        // Parent: CParticleFunction
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CParticleFunctionEmitter {
            public const nint MNEmitterIndex = 0x1B8; // int32
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
            public const nint MBRunOnce = 0x1C0; // bool
        }
        // Parent: CParticleFunction
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CParticleFunctionRenderer {
            public const nint VisibilityInputs = 0x1B8; // CParticleVisibilityInputs
            public const nint MBCannotBeRefracted = 0x1FC; // bool
            public const nint MBSkipRenderingOnMobile = 0x1FD; // bool
        }
        // Parent: None
        // Fields count: 16
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class TextureControlsT {
            public const nint MFlFinalTextureScaleU = 0x0; // CParticleCollectionRendererFloatInput
            public const nint MFlFinalTextureScaleV = 0x158; // CParticleCollectionRendererFloatInput
            public const nint MFlFinalTextureOffsetU = 0x2B0; // CParticleCollectionRendererFloatInput
            public const nint MFlFinalTextureOffsetV = 0x408; // CParticleCollectionRendererFloatInput
            public const nint MFlFinalTextureUvRotation = 0x560; // CParticleCollectionRendererFloatInput
            public const nint MFlZoomScale = 0x6B8; // CParticleCollectionRendererFloatInput
            public const nint MFlDistortion = 0x810; // CParticleCollectionRendererFloatInput
            public const nint MBRandomizeOffsets = 0x968; // bool
            public const nint MBClampUVs = 0x969; // bool
            public const nint MNPerParticleBlend = 0x96C; // SpriteCardPerParticleScale_t
            public const nint MNPerParticleScale = 0x970; // SpriteCardPerParticleScale_t
            public const nint MNPerParticleOffsetU = 0x974; // SpriteCardPerParticleScale_t
            public const nint MNPerParticleOffsetV = 0x978; // SpriteCardPerParticleScale_t
            public const nint MNPerParticleRotation = 0x97C; // SpriteCardPerParticleScale_t
            public const nint MNPerParticleZoom = 0x980; // SpriteCardPerParticleScale_t
            public const nint MNPerParticleDistortion = 0x984; // SpriteCardPerParticleScale_t
        }
        // Parent: None
        // Fields count: 9
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class TextureGroupT {
            public const nint MBEnabled = 0x0; // bool
            public const nint MBReplaceTextureWithGradient = 0x1; // bool
            public const nint MHTexture = 0x8; // CStrongHandle< InfoForResourceTypeCTextureBase >
            public const nint MGradient = 0x10; // CColorGradient
            public const nint MNTextureType = 0x28; // SpriteCardTextureType_t
            public const nint MNTextureChannels = 0x2C; // SpriteCardTextureChannel_t
            public const nint MNTextureBlendMode = 0x30; // ParticleTextureLayerBlendType_t
            public const nint MFlTextureBlend = 0x38; // CParticleCollectionRendererFloatInput
            public const nint MTextureControls = 0x190; // TextureControls_t
        }
        // Parent: CParticleFunctionRenderer
        // Fields count: 62
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CBaseRendererSource2 {
            public const nint MFlRadiusScale = 0x200; // CParticleCollectionRendererFloatInput
            public const nint MFlAlphaScale = 0x358; // CParticleCollectionRendererFloatInput
            public const nint MFlRollScale = 0x4B0; // CParticleCollectionRendererFloatInput
            public const nint MNAlpha2Field = 0x608; // ParticleAttributeIndex_t
            public const nint MVecColorScale = 0x610; // CParticleCollectionRendererVecInput
            public const nint MNColorBlendType = 0xC68; // ParticleColorBlendType_t
            public const nint MNShaderType = 0xC6C; // SpriteCardShaderType_t
            public const nint MStrShaderOverride = 0xC70; // CUtlString
            public const nint MFlCenterXOffset = 0xC78; // CParticleCollectionRendererFloatInput
            public const nint MFlCenterYOffset = 0xDD0; // CParticleCollectionRendererFloatInput
            public const nint MFlBumpStrength = 0xF28; // float32
            public const nint MNCropTextureOverride = 0xF2C; // ParticleSequenceCropOverride_t
            public const nint MVecTexturesInput = 0xF30; // CUtlVector< TextureGroup_t >
            public const nint MFlAnimationRate = 0xF48; // float32
            public const nint MNAnimationType = 0xF4C; // AnimationType_t
            public const nint MBAnimateInFps = 0xF50; // bool
            public const nint MFlSelfIllumAmount = 0xF58; // CParticleCollectionRendererFloatInput
            public const nint MFlDiffuseAmount = 0x10B0; // CParticleCollectionRendererFloatInput
            public const nint MFlDiffuseClamp = 0x1208; // CParticleCollectionRendererFloatInput
            public const nint MNLightingControlPoint = 0x1360; // int32
            public const nint MNSelfIllumPerParticle = 0x1364; // ParticleAttributeIndex_t
            public const nint MNOutputBlendMode = 0x1368; // ParticleOutputBlendMode_t
            public const nint MBGammaCorrectVertexColors = 0x136C; // bool
            public const nint MBSaturateColorPreAlphaBlend = 0x136D; // bool
            public const nint MFlAddSelfAmount = 0x1370; // CParticleCollectionRendererFloatInput
            public const nint MFlDesaturation = 0x14C8; // CParticleCollectionRendererFloatInput
            public const nint MFlOverbrightFactor = 0x1620; // CParticleCollectionRendererFloatInput
            public const nint MNHsvShiftControlPoint = 0x1778; // int32
            public const nint MNFogType = 0x177C; // ParticleFogType_t
            public const nint MFlFogAmount = 0x1780; // CParticleCollectionRendererFloatInput
            public const nint MBTintByFow = 0x18D8; // bool
            public const nint MBTintByGlobalLight = 0x18D9; // bool
            public const nint MNPerParticleAlphaReference = 0x18DC; // SpriteCardPerParticleScale_t
            public const nint MNPerParticleAlphaRefWindow = 0x18E0; // SpriteCardPerParticleScale_t
            public const nint MNAlphaReferenceType = 0x18E4; // ParticleAlphaReferenceType_t
            public const nint MFlAlphaReferenceSoftness = 0x18E8; // CParticleCollectionRendererFloatInput
            public const nint MFlSourceAlphaValueToMapToZero = 0x1A40; // CParticleCollectionRendererFloatInput
            public const nint MFlSourceAlphaValueToMapToOne = 0x1B98; // CParticleCollectionRendererFloatInput
            public const nint MBRefract = 0x1CF0; // bool
            public const nint MBRefractSolid = 0x1CF1; // bool
            public const nint MFlRefractAmount = 0x1CF8; // CParticleCollectionRendererFloatInput
            public const nint MNRefractBlurRadius = 0x1E50; // int32
            public const nint MNRefractBlurType = 0x1E54; // BlurFilterType_t
            public const nint MBOnlyRenderInEffectsBloomPass = 0x1E58; // bool
            public const nint MBOnlyRenderInEffectsWaterPass = 0x1E59; // bool
            public const nint MBUseMixedResolutionRendering = 0x1E5A; // bool
            public const nint MBOnlyRenderInEffecsGameOverlay = 0x1E5B; // bool
            public const nint MStencilTestId = 0x1E5C; // char[128]
            public const nint MBStencilTestExclude = 0x1EDC; // bool
            public const nint MStencilWriteId = 0x1EDD; // char[128]
            public const nint MBWriteStencilOnDepthPass = 0x1F5D; // bool
            public const nint MBWriteStencilOnDepthFail = 0x1F5E; // bool
            public const nint MBReverseZBuffering = 0x1F5F; // bool
            public const nint MBDisableZBuffering = 0x1F60; // bool
            public const nint MNFeatheringMode = 0x1F64; // ParticleDepthFeatheringMode_t
            public const nint MFlFeatheringMinDist = 0x1F68; // CParticleCollectionRendererFloatInput
            public const nint MFlFeatheringMaxDist = 0x20C0; // CParticleCollectionRendererFloatInput
            public const nint MFlFeatheringFilter = 0x2218; // CParticleCollectionRendererFloatInput
            public const nint MFlDepthBias = 0x2370; // CParticleCollectionRendererFloatInput
            public const nint MNSortMethod = 0x24C8; // ParticleSortingChoiceList_t
            public const nint MBBlendFramesSeq0 = 0x24CC; // bool
            public const nint MBMaxLuminanceBlendingSequence0 = 0x24CD; // bool
        }
        // Parent: CBaseRendererSource2
        // Fields count: 27
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class COpRenderSprites {
            public const nint MNSequenceOverride = 0x2710; // CParticleCollectionRendererFloatInput
            public const nint MNOrientationType = 0x2868; // ParticleOrientationChoiceList_t
            public const nint MNOrientationControlPoint = 0x286C; // int32
            public const nint MBUseYawWithNormalAligned = 0x2870; // bool
            public const nint MFlMinSize = 0x2878; // CParticleCollectionRendererFloatInput
            public const nint MFlMaxSize = 0x29D0; // CParticleCollectionRendererFloatInput
            public const nint MFlAlphaAdjustWithSizeAdjust = 0x2B28; // CParticleCollectionRendererFloatInput
            public const nint MFlStartFadeSize = 0x2C80; // CParticleCollectionRendererFloatInput
            public const nint MFlEndFadeSize = 0x2DD8; // CParticleCollectionRendererFloatInput
            public const nint MFlStartFadeDot = 0x2F30; // float32
            public const nint MFlEndFadeDot = 0x2F34; // float32
            public const nint MBDistanceAlpha = 0x2F38; // bool
            public const nint MBSoftEdges = 0x2F39; // bool
            public const nint MFlEdgeSoftnessStart = 0x2F3C; // float32
            public const nint MFlEdgeSoftnessEnd = 0x2F40; // float32
            public const nint MBOutline = 0x2F44; // bool
            public const nint MOutlineColor = 0x2F45; // Color
            public const nint MNOutlineAlpha = 0x2F4C; // int32
            public const nint MFlOutlineStart0 = 0x2F50; // float32
            public const nint MFlOutlineStart1 = 0x2F54; // float32
            public const nint MFlOutlineEnd0 = 0x2F58; // float32
            public const nint MFlOutlineEnd1 = 0x2F5C; // float32
            public const nint MNLightingMode = 0x2F60; // ParticleLightingQuality_t
            public const nint MFlLightingTessellation = 0x2F68; // CParticleCollectionRendererFloatInput
            public const nint MFlLightingDirectionality = 0x30C0; // CParticleCollectionRendererFloatInput
            public const nint MBParticleShadows = 0x3218; // bool
            public const nint MFlShadowDensity = 0x321C; // float32
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FloatInputMaterialVariableT {
            public const nint MStrVariable = 0x0; // CUtlString
            public const nint MFlInput = 0x8; // CParticleCollectionFloatInput
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VecInputMaterialVariableT {
            public const nint MStrVariable = 0x0; // CUtlString
            public const nint MVecInput = 0x8; // CParticleCollectionVecInput
        }
        // Parent: CParticleFunctionRenderer
        // Fields count: 22
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class COpRenderCables {
            public const nint MFlRadiusScale = 0x200; // CParticleCollectionFloatInput
            public const nint MFlAlphaScale = 0x358; // CParticleCollectionFloatInput
            public const nint MVecColorScale = 0x4B0; // CParticleCollectionVecInput
            public const nint MNColorBlendType = 0xB08; // ParticleColorBlendType_t
            public const nint MHMaterial = 0xB10; // CStrongHandle< InfoForResourceTypeIMaterial2 >
            public const nint MNTextureRepetitionMode = 0xB18; // TextureRepetitionMode_t
            public const nint MFlTextureRepeatsPerSegment = 0xB20; // CParticleCollectionFloatInput
            public const nint MFlTextureRepeatsCircumference = 0xC78; // CParticleCollectionFloatInput
            public const nint MFlColorMapOffsetV = 0xDD0; // CParticleCollectionFloatInput
            public const nint MFlColorMapOffsetU = 0xF28; // CParticleCollectionFloatInput
            public const nint MFlNormalMapOffsetV = 0x1080; // CParticleCollectionFloatInput
            public const nint MFlNormalMapOffsetU = 0x11D8; // CParticleCollectionFloatInput
            public const nint MBDrawCableCaps = 0x1330; // bool
            public const nint MFlCapRoundness = 0x1334; // float32
            public const nint MFlCapOffsetAmount = 0x1338; // float32
            public const nint MFlTessScale = 0x133C; // float32
            public const nint MNMinTesselation = 0x1340; // int32
            public const nint MNMaxTesselation = 0x1344; // int32
            public const nint MNRoundness = 0x1348; // int32
            public const nint MLightingTransform = 0x1350; // CParticleTransformInput
            public const nint MMaterialFloatVars = 0x13B8; // CUtlVector< FloatInputMaterialVariable_t >
            public const nint MMaterialVecVars = 0x13E8; // CUtlVector< VecInputMaterialVariable_t >
        }
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
        public static class ParticleEhandle {
            public const nint Unused = 0x0; // int32
        }
        // Parent: None
        // Fields count: 1
        public static class ParticleWorldHandle {
            public const nint Unused = 0x0; // int32
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
        public static class ParticleNamedValueConfigurationT {
            public const nint MConfigName = 0x0; // CUtlString
            public const nint MConfigValue = 0x8; // KeyValues3
            public const nint MIAttachType = 0x18; // ParticleAttachment_t
            public const nint MBoundEntityPath = 0x20; // CUtlString
            public const nint MStrEntityScope = 0x28; // CUtlString
            public const nint MStrAttachmentName = 0x30; // CUtlString
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class ParticleNamedValueSourceT {
            public const nint MName = 0x0; // CUtlString
            public const nint MIsPublic = 0x8; // bool
            public const nint MValueType = 0xC; // PulseValueType_t
            public const nint MDefaultConfig = 0x10; // ParticleNamedValueConfiguration_t
            public const nint MNamedConfigs = 0x48; // CUtlVector< ParticleNamedValueConfiguration_t >
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyCustomEditor
        public static class CParticleVariableRef {
            public const nint MVariableName = 0x0; // CKV3MemberNameWithStorage
            public const nint MVariableType = 0x38; // PulseValueType_t
        }
        // Parent: None
        // Fields count: 0
        public static class CParticleProperty {
        }
        // Parent: IParticleEffect
        // Fields count: 32
        public static class CNewParticleEffect {
            public const nint MPNext = 0x10; // CNewParticleEffect*
            public const nint MPPrev = 0x18; // CNewParticleEffect*
            public const nint MPParticles = 0x20; // IParticleCollection*
            public const nint MPDebugName = 0x28; // char*
            public const nint MBDontRemove = 0x0; // bitfield:1
            public const nint MBRemove = 0x0; // bitfield:1
            public const nint MBNeedsBBoxUpdate = 0x0; // bitfield:1
            public const nint MBIsFirstFrame = 0x0; // bitfield:1
            public const nint MBAutoUpdateBBox = 0x0; // bitfield:1
            public const nint MBAllocated = 0x0; // bitfield:1
            public const nint MBSimulate = 0x0; // bitfield:1
            public const nint MBShouldPerformCullCheck = 0x0; // bitfield:1
            public const nint MBForceNoDraw = 0x0; // bitfield:1
            public const nint MBShouldSave = 0x0; // bitfield:1
            public const nint MBDisableAggregation = 0x0; // bitfield:1
            public const nint MBShouldSimulateDuringGamePaused = 0x0; // bitfield:1
            public const nint MBShouldCheckFoW = 0x0; // bitfield:1
            public const nint MVSortOrigin = 0x40; // 
            public const nint MFlScale = 0x4C; // float32
            public const nint MHOwner = 0x50; // PARTICLE_EHANDLE__*
            public const nint MPOwningParticleProperty = 0x58; // CParticleProperty*
            public const nint MFlFreezeTransitionStart = 0x70; // float32
            public const nint MFlFreezeTransitionDuration = 0x74; // float32
            public const nint MFlFreezeTransitionOverride = 0x78; // float32
            public const nint MBFreezeTransitionActive = 0x7C; // bool
            public const nint MBFreezeTargetState = 0x7D; // bool
            public const nint MBCanFreeze = 0x7E; // bool
            public const nint MLastMin = 0x80; // 
            public const nint MLastMax = 0x8C; // 
            public const nint MNSplitScreenUser = 0x98; // CSplitScreenSlot
            public const nint MVecAggregationCenter = 0x9C; // 
            public const nint MRefCount = 0xC0; // int32
        }
        // Parent: CParticleFunctionConstraint
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class COpConstrainDistance {
            public const nint MFMinDistance = 0x1C0; // CParticleCollectionFloatInput
            public const nint MFMaxDistance = 0x318; // CParticleCollectionFloatInput
            public const nint MNControlPointNumber = 0x470; // int32
            public const nint MCenterOffset = 0x474; // 
            public const nint MBGlobalCenter = 0x480; // bool
        }
        // Parent: CParticleFunctionConstraint
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class COpCollideWithSelf {
            public const nint MFlRadiusScale = 0x1C0; // CPerParticleFloatInput
            public const nint MFlMinimumSpeed = 0x318; // CPerParticleFloatInput
        }
        // Parent: CParticleFunctionConstraint
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class COpCollideWithParentParticles {
            public const nint MFlParentRadiusScale = 0x1C0; // CPerParticleFloatInput
            public const nint MFlRadiusScale = 0x318; // CPerParticleFloatInput
        }
        // Parent: CParticleFunctionConstraint
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class COpConstrainDistanceToPath {
            public const nint MFMinDistance = 0x1C0; // float32
            public const nint MFlMaxDistance0 = 0x1C4; // float32
            public const nint MFlMaxDistanceMid = 0x1C8; // float32
            public const nint MFlMaxDistance1 = 0x1CC; // float32
            public const nint MPathParameters = 0x1D0; // CPathParameters
            public const nint MFlTravelTime = 0x210; // float32
            public const nint MNFieldScale = 0x214; // ParticleAttributeIndex_t
            public const nint MNManualTField = 0x218; // ParticleAttributeIndex_t
        }
        // Parent: CParticleFunctionConstraint
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class COpConstrainDistanceToUserSpecifiedPath {
            public const nint MFMinDistance = 0x1C0; // float32
            public const nint MFlMaxDistance = 0x1C4; // float32
            public const nint MFlTimeScale = 0x1C8; // float32
            public const nint MBLoopedPath = 0x1CC; // bool
            public const nint MPointList = 0x1D0; // CUtlVector< PointDefinitionWithTimeValues_t >
        }
        // Parent: CParticleFunctionConstraint
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class COpPlanarConstraint {
            public const nint MPointOnPlane = 0x1C0; // 
            public const nint MPlaneNormal = 0x1CC; // 
            public const nint MNControlPointNumber = 0x1D8; // int32
            public const nint MBGlobalOrigin = 0x1DC; // bool
            public const nint MBGlobalNormal = 0x1DD; // bool
            public const nint MFlRadiusScale = 0x1E0; // CPerParticleFloatInput
            public const nint MFlMaximumDistanceToCp = 0x338; // CParticleCollectionFloatInput
            public const nint MBUseOldCode = 0x490; // bool
        }
        // Parent: CParticleFunctionConstraint
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class COpWorldCollideConstraint {
        }
        // Parent: CParticleFunctionConstraint
        // Fields count: 27
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class COpWorldTraceConstraint {
            public const nint MNCp = 0x1C0; // int32
            public const nint MVecCpOffset = 0x1C4; // 
            public const nint MNCollisionMode = 0x1D0; // ParticleCollisionMode_t
            public const nint MNCollisionModeMin = 0x1D4; // ParticleCollisionMode_t
            public const nint MNTraceSet = 0x1D8; // ParticleTraceSet_t
            public const nint MCollisionGroupName = 0x1DC; // char[128]
            public const nint MBWorldOnly = 0x25C; // bool
            public const nint MBBrushOnly = 0x25D; // bool
            public const nint MBIncludeWater = 0x25E; // bool
            public const nint MNIgnoreCp = 0x260; // int32
            public const nint MFlCpMovementTolerance = 0x264; // float32
            public const nint MFlRetestRate = 0x268; // float32
            public const nint MFlTraceTolerance = 0x26C; // float32
            public const nint MFlCollisionConfirmationSpeed = 0x270; // float32
            public const nint MNMaxTracesPerFrame = 0x274; // float32
            public const nint MFlRadiusScale = 0x278; // CPerParticleFloatInput
            public const nint MFlBounceAmount = 0x3D0; // CPerParticleFloatInput
            public const nint MFlSlideAmount = 0x528; // CPerParticleFloatInput
            public const nint MFlRandomDirScale = 0x680; // CPerParticleFloatInput
            public const nint MBDecayBounce = 0x7D8; // bool
            public const nint MBKillonContact = 0x7D9; // bool
            public const nint MFlMinSpeed = 0x7DC; // float32
            public const nint MBSetNormal = 0x7E0; // bool
            public const nint MNStickOnCollisionField = 0x7E4; // ParticleAttributeIndex_t
            public const nint MFlStopSpeed = 0x7E8; // CPerParticleFloatInput
            public const nint MNEntityStickDataField = 0x940; // ParticleAttributeIndex_t
            public const nint MNEntityStickNormalField = 0x944; // ParticleAttributeIndex_t
        }
        // Parent: CParticleFunctionConstraint
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class COpBoxConstraint {
            public const nint MVecMin = 0x1C0; // CParticleCollectionVecInput
            public const nint MVecMax = 0x818; // CParticleCollectionVecInput
            public const nint MNCp = 0xE70; // int32
            public const nint MBLocalSpace = 0xE74; // bool
            public const nint MBAccountForRadius = 0xE75; // bool
        }
        // Parent: CParticleFunctionConstraint
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class COpShapeMatchingConstraint {
            public const nint MFlShapeRestorationTime = 0x1C0; // float32
        }
        // Parent: CParticleFunctionConstraint
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class COpRopeSpringConstraint {
            public const nint MFlRestLength = 0x1C0; // CParticleCollectionFloatInput
            public const nint MFlMinDistance = 0x318; // CParticleCollectionFloatInput
            public const nint MFlMaxDistance = 0x470; // CParticleCollectionFloatInput
            public const nint MFlAdjustmentScale = 0x5C8; // float32
            public const nint MFlInitialRestingLength = 0x5D0; // CParticleCollectionFloatInput
        }
        // Parent: CParticleFunctionConstraint
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class COpSpringToVectorConstraint {
            public const nint MFlRestLength = 0x1C0; // CPerParticleFloatInput
            public const nint MFlMinDistance = 0x318; // CPerParticleFloatInput
            public const nint MFlMaxDistance = 0x470; // CPerParticleFloatInput
            public const nint MFlRestingLength = 0x5C8; // CPerParticleFloatInput
            public const nint MVecAnchorVector = 0x720; // CPerParticleVecInput
        }
        // Parent: CParticleFunctionConstraint
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class COpConstrainLineLength {
            public const nint MFlMinDistance = 0x1C0; // float32
            public const nint MFlMaxDistance = 0x1C4; // float32
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 11
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitRingWave {
            public const nint MTransformInput = 0x1C0; // CParticleTransformInput
            public const nint MFlParticlesPerOrbit = 0x228; // CParticleCollectionFloatInput
            public const nint MFlInitialRadius = 0x380; // CPerParticleFloatInput
            public const nint MFlThickness = 0x4D8; // CPerParticleFloatInput
            public const nint MFlInitialSpeedMin = 0x630; // CPerParticleFloatInput
            public const nint MFlInitialSpeedMax = 0x788; // CPerParticleFloatInput
            public const nint MFlRoll = 0x8E0; // CPerParticleFloatInput
            public const nint MFlPitch = 0xA38; // CPerParticleFloatInput
            public const nint MFlYaw = 0xB90; // CPerParticleFloatInput
            public const nint MBEvenDistribution = 0xCE8; // bool
            public const nint MBXyVelocityOnly = 0xCE9; // bool
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitCreateSpiralSphere {
            public const nint MNControlPointNumber = 0x1C0; // int32
            public const nint MNOverrideCp = 0x1C4; // int32
            public const nint MNDensity = 0x1C8; // int32
            public const nint MFlInitialRadius = 0x1CC; // float32
            public const nint MFlInitialSpeedMin = 0x1D0; // float32
            public const nint MFlInitialSpeedMax = 0x1D4; // float32
            public const nint MBUseParticleCount = 0x1D8; // bool
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitCreateInEpitrochoid {
            public const nint MNComponent1 = 0x1C0; // int32
            public const nint MNComponent2 = 0x1C4; // int32
            public const nint MTransformInput = 0x1C8; // CParticleTransformInput
            public const nint MFlParticleDensity = 0x230; // CPerParticleFloatInput
            public const nint MFlOffset = 0x388; // CPerParticleFloatInput
            public const nint MFlRadius1 = 0x4E0; // CPerParticleFloatInput
            public const nint MFlRadius2 = 0x638; // CPerParticleFloatInput
            public const nint MBUseCount = 0x790; // bool
            public const nint MBUseLocalCoords = 0x791; // bool
            public const nint MBOffsetExistingPos = 0x792; // bool
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 14
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitCreatePhyllotaxis {
            public const nint MNControlPointNumber = 0x1C0; // int32
            public const nint MNScaleCp = 0x1C4; // int32
            public const nint MNComponent = 0x1C8; // int32
            public const nint MFRadCentCore = 0x1CC; // float32
            public const nint MFRadPerPoint = 0x1D0; // float32
            public const nint MFRadPerPointTo = 0x1D4; // float32
            public const nint MFpointAngle = 0x1D8; // float32
            public const nint MFsizeOverall = 0x1DC; // float32
            public const nint MFRadBias = 0x1E0; // float32
            public const nint MFMinRad = 0x1E4; // float32
            public const nint MFDistBias = 0x1E8; // float32
            public const nint MBUseLocalCoords = 0x1EC; // bool
            public const nint MBUseWithContEmit = 0x1ED; // bool
            public const nint MBUseOrigRadius = 0x1EE; // bool
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 14
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitCreateOnModel {
            public const nint MModelInput = 0x1C0; // CParticleModelInput
            public const nint MTransformInput = 0x220; // CParticleTransformInput
            public const nint MNForceInModel = 0x288; // int32
            public const nint MNDesiredHitbox = 0x28C; // int32
            public const nint MNHitboxValueFromControlPointIndex = 0x290; // int32
            public const nint MVecHitBoxScale = 0x298; // CParticleCollectionVecInput
            public const nint MFlBoneVelocity = 0x8F0; // float32
            public const nint MFlMaxBoneVelocity = 0x8F4; // float32
            public const nint MVecDirectionBias = 0x8F8; // CParticleCollectionVecInput
            public const nint MHitboxSetName = 0xF50; // char[128]
            public const nint MBLocalCoords = 0xFD0; // bool
            public const nint MBUseBones = 0xFD1; // bool
            public const nint MBUseMesh = 0xFD2; // bool
            public const nint MFlShellSize = 0xFD8; // CParticleCollectionFloatInput
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 14
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitCreateOnModelAtHeight {
            public const nint MBUseBones = 0x1C0; // bool
            public const nint MBForceZ = 0x1C1; // bool
            public const nint MNControlPointNumber = 0x1C4; // int32
            public const nint MNHeightCp = 0x1C8; // int32
            public const nint MBUseWaterHeight = 0x1CC; // bool
            public const nint MFlDesiredHeight = 0x1D0; // CParticleCollectionFloatInput
            public const nint MVecHitBoxScale = 0x328; // CParticleCollectionVecInput
            public const nint MVecDirectionBias = 0x980; // CParticleCollectionVecInput
            public const nint MNBiasType = 0xFD8; // ParticleHitboxBiasType_t
            public const nint MBLocalCoords = 0xFDC; // bool
            public const nint MBPreferMovingBoxes = 0xFDD; // bool
            public const nint MHitboxSetName = 0xFDE; // char[128]
            public const nint MFlHitboxVelocityScale = 0x1060; // CParticleCollectionFloatInput
            public const nint MFlMaxBoneVelocity = 0x11B8; // CParticleCollectionFloatInput
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 9
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitSetHitboxToClosest {
            public const nint MNControlPointNumber = 0x1C0; // int32
            public const nint MNDesiredHitbox = 0x1C4; // int32
            public const nint MVecHitBoxScale = 0x1C8; // CParticleCollectionVecInput
            public const nint MHitboxSetName = 0x820; // char[128]
            public const nint MBUseBones = 0x8A0; // bool
            public const nint MBUseClosestPointOnHitbox = 0x8A1; // bool
            public const nint MNTestType = 0x8A4; // ClosestPointTestType_t
            public const nint MFlHybridRatio = 0x8A8; // CParticleCollectionFloatInput
            public const nint MBUpdatePosition = 0xA00; // bool
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 9
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitSetHitboxToModel {
            public const nint MNControlPointNumber = 0x1C0; // int32
            public const nint MNForceInModel = 0x1C4; // int32
            public const nint MNDesiredHitbox = 0x1C8; // int32
            public const nint MVecHitBoxScale = 0x1D0; // CParticleCollectionVecInput
            public const nint MVecDirectionBias = 0x828; // 
            public const nint MBMaintainHitbox = 0x834; // bool
            public const nint MBUseBones = 0x835; // bool
            public const nint MHitboxSetName = 0x836; // char[128]
            public const nint MFlShellSize = 0x8B8; // CParticleCollectionFloatInput
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 14
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitCreateWithinSphereTransform {
            public const nint MFRadiusMin = 0x1C0; // CPerParticleFloatInput
            public const nint MFRadiusMax = 0x318; // CPerParticleFloatInput
            public const nint MVecDistanceBias = 0x470; // CPerParticleVecInput
            public const nint MVecDistanceBiasAbs = 0xAC8; // 
            public const nint MTransformInput = 0xAD8; // CParticleTransformInput
            public const nint MFSpeedMin = 0xB40; // CPerParticleFloatInput
            public const nint MFSpeedMax = 0xC98; // CPerParticleFloatInput
            public const nint MFSpeedRandExp = 0xDF0; // float32
            public const nint MBLocalCoords = 0xDF4; // bool
            public const nint MFlEndCpGrowthTime = 0xDF8; // float32
            public const nint MLocalCoordinateSystemSpeedMin = 0xE00; // CPerParticleVecInput
            public const nint MLocalCoordinateSystemSpeedMax = 0x1458; // CPerParticleVecInput
            public const nint MNFieldOutput = 0x1AB0; // ParticleAttributeIndex_t
            public const nint MNFieldVelocity = 0x1AB4; // ParticleAttributeIndex_t
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitCreateWithinBox {
            public const nint MVecMin = 0x1C0; // CPerParticleVecInput
            public const nint MVecMax = 0x818; // CPerParticleVecInput
            public const nint MNControlPointNumber = 0xE70; // int32
            public const nint MBLocalSpace = 0xE74; // bool
            public const nint MRandomnessParameters = 0xE78; // CRandomNumberGeneratorParameters
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitCreateOnGrid {
            public const nint MNXCount = 0x1C0; // CParticleCollectionFloatInput
            public const nint MNYCount = 0x318; // CParticleCollectionFloatInput
            public const nint MNZCount = 0x470; // CParticleCollectionFloatInput
            public const nint MNXSpacing = 0x5C8; // CParticleCollectionFloatInput
            public const nint MNYSpacing = 0x720; // CParticleCollectionFloatInput
            public const nint MNZSpacing = 0x878; // CParticleCollectionFloatInput
            public const nint MNControlPointNumber = 0x9D0; // int32
            public const nint MBLocalSpace = 0x9D4; // bool
            public const nint MBCenter = 0x9D5; // bool
            public const nint MBHollow = 0x9D6; // bool
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitPositionOffset {
            public const nint MOffsetMin = 0x1C0; // CPerParticleVecInput
            public const nint MOffsetMax = 0x818; // CPerParticleVecInput
            public const nint MTransformInput = 0xE70; // CParticleTransformInput
            public const nint MBLocalCoords = 0xED8; // bool
            public const nint MBProportional = 0xED9; // bool
            public const nint MRandomnessParameters = 0xEDC; // CRandomNumberGeneratorParameters
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitPositionOffsetToCp {
            public const nint MNControlPointNumberStart = 0x1C0; // int32
            public const nint MNControlPointNumberEnd = 0x1C4; // int32
            public const nint MBLocalCoords = 0x1C8; // bool
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 13
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitPositionPlaceOnGround {
            public const nint MFlOffset = 0x1C0; // CPerParticleFloatInput
            public const nint MFlMaxTraceLength = 0x318; // CPerParticleFloatInput
            public const nint MCollisionGroupName = 0x470; // char[128]
            public const nint MNTraceSet = 0x4F0; // ParticleTraceSet_t
            public const nint MNTraceMissBehavior = 0x500; // ParticleTraceMissBehavior_t
            public const nint MBIncludeWater = 0x504; // bool
            public const nint MBSetNormal = 0x505; // bool
            public const nint MBSetPxyzOnly = 0x506; // bool
            public const nint MBTraceAlongNormal = 0x507; // bool
            public const nint MBOffsetonColOnly = 0x508; // bool
            public const nint MFlOffsetByRadiusFactor = 0x50C; // float32
            public const nint MNPreserveOffsetCp = 0x510; // int32
            public const nint MNIgnoreCp = 0x514; // int32
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitVelocityFromNormal {
            public const nint MFSpeedMin = 0x1C0; // float32
            public const nint MFSpeedMax = 0x1C4; // float32
            public const nint MBIgnoreDt = 0x1C8; // bool
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitVelocityRandom {
            public const nint MNControlPointNumber = 0x1C0; // int32
            public const nint MFSpeedMin = 0x1C8; // CPerParticleFloatInput
            public const nint MFSpeedMax = 0x320; // CPerParticleFloatInput
            public const nint MLocalCoordinateSystemSpeedMin = 0x478; // CPerParticleVecInput
            public const nint MLocalCoordinateSystemSpeedMax = 0xAD0; // CPerParticleVecInput
            public const nint MBIgnoreDt = 0x1128; // bool
            public const nint MRandomnessParameters = 0x112C; // CRandomNumberGeneratorParameters
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitInitialVelocityNoise {
            public const nint MVecAbsVal = 0x1C0; // 
            public const nint MVecAbsValInv = 0x1CC; // 
            public const nint MVecOffsetLoc = 0x1D8; // CPerParticleVecInput
            public const nint MFlOffset = 0x830; // CPerParticleFloatInput
            public const nint MVecOutputMin = 0x988; // CPerParticleVecInput
            public const nint MVecOutputMax = 0xFE0; // CPerParticleVecInput
            public const nint MFlNoiseScale = 0x1638; // CPerParticleFloatInput
            public const nint MFlNoiseScaleLoc = 0x1790; // CPerParticleFloatInput
            public const nint MTransformInput = 0x18E8; // CParticleTransformInput
            public const nint MBIgnoreDt = 0x1950; // bool
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitInitialVelocityFromHitbox {
            public const nint MFlVelocityMin = 0x1C0; // float32
            public const nint MFlVelocityMax = 0x1C4; // float32
            public const nint MNControlPointNumber = 0x1C8; // int32
            public const nint MHitboxSetName = 0x1CC; // char[128]
            public const nint MBUseBones = 0x24C; // bool
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitVelocityRadialRandom {
            public const nint MNControlPointNumber = 0x1C0; // int32
            public const nint MFSpeedMin = 0x1C4; // float32
            public const nint MFSpeedMax = 0x1C8; // float32
            public const nint MVecLocalCoordinateSystemSpeedScale = 0x1CC; // 
            public const nint MBIgnoreDelta = 0x1D9; // bool
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitRandomLifeTime {
            public const nint MFLifetimeMin = 0x1C0; // float32
            public const nint MFLifetimeMax = 0x1C4; // float32
            public const nint MFLifetimeRandExponent = 0x1C8; // float32
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitRandomScalar {
            public const nint MFlMin = 0x1C0; // float32
            public const nint MFlMax = 0x1C4; // float32
            public const nint MFlExponent = 0x1C8; // float32
            public const nint MNFieldOutput = 0x1CC; // ParticleAttributeIndex_t
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitRandomVector {
            public const nint MVecMin = 0x1C0; // 
            public const nint MVecMax = 0x1CC; // 
            public const nint MNFieldOutput = 0x1D8; // ParticleAttributeIndex_t
            public const nint MRandomnessParameters = 0x1DC; // CRandomNumberGeneratorParameters
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitRandomVectorComponent {
            public const nint MFlMin = 0x1C0; // float32
            public const nint MFlMax = 0x1C4; // float32
            public const nint MNFieldOutput = 0x1C8; // ParticleAttributeIndex_t
            public const nint MNComponent = 0x1CC; // int32
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitAddVectorToVector {
            public const nint MVecScale = 0x1C0; // 
            public const nint MNFieldOutput = 0x1CC; // ParticleAttributeIndex_t
            public const nint MNFieldInput = 0x1D0; // ParticleAttributeIndex_t
            public const nint MVOffsetMin = 0x1D4; // 
            public const nint MVOffsetMax = 0x1E0; // 
            public const nint MRandomnessParameters = 0x1EC; // CRandomNumberGeneratorParameters
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitRandomAlphaWindowThreshold {
            public const nint MFlMin = 0x1C0; // float32
            public const nint MFlMax = 0x1C4; // float32
            public const nint MFlExponent = 0x1C8; // float32
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitRandomRadius {
            public const nint MFlRadiusMin = 0x1C0; // float32
            public const nint MFlRadiusMax = 0x1C4; // float32
            public const nint MFlRadiusRandExponent = 0x1C8; // float32
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitRandomAlpha {
            public const nint MNFieldOutput = 0x1C0; // ParticleAttributeIndex_t
            public const nint MNAlphaMin = 0x1C4; // int32
            public const nint MNAlphaMax = 0x1C8; // int32
            public const nint MFlAlphaRandExponent = 0x1D4; // float32
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CGeneralRandomRotation {
            public const nint MNFieldOutput = 0x1C0; // ParticleAttributeIndex_t
            public const nint MFlDegrees = 0x1C4; // float32
            public const nint MFlDegreesMin = 0x1C8; // float32
            public const nint MFlDegreesMax = 0x1CC; // float32
            public const nint MFlRotationRandExponent = 0x1D0; // float32
            public const nint MBRandomlyFlipDirection = 0x1D4; // bool
        }
        // Parent: CGeneralRandomRotation
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitRandomRotation {
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitOrient2DRelToCp {
            public const nint MNCp = 0x1C0; // int32
            public const nint MNFieldOutput = 0x1C4; // ParticleAttributeIndex_t
            public const nint MFlRotOffset = 0x1C8; // float32
        }
        // Parent: CGeneralRandomRotation
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitRandomRotationSpeed {
        }
        // Parent: CGeneralRandomRotation
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitRandomYaw {
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitRandomColor {
            public const nint MColorMin = 0x1DC; // Color
            public const nint MColorMax = 0x1E0; // Color
            public const nint MTintMin = 0x1E4; // Color
            public const nint MTintMax = 0x1E8; // Color
            public const nint MFlTintPerc = 0x1EC; // float32
            public const nint MFlUpdateThreshold = 0x1F0; // float32
            public const nint MNTintCp = 0x1F4; // int32
            public const nint MNFieldOutput = 0x1F8; // ParticleAttributeIndex_t
            public const nint MNTintBlendMode = 0x1FC; // ParticleColorBlendMode_t
            public const nint MFlLightAmplification = 0x200; // float32
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitColorLitPerParticle {
            public const nint MColorMin = 0x1D8; // Color
            public const nint MColorMax = 0x1DC; // Color
            public const nint MTintMin = 0x1E0; // Color
            public const nint MTintMax = 0x1E4; // Color
            public const nint MFlTintPerc = 0x1E8; // float32
            public const nint MNTintBlendMode = 0x1EC; // ParticleColorBlendMode_t
            public const nint MFlLightAmplification = 0x1F0; // float32
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitRandomTrailLength {
            public const nint MFlMinLength = 0x1C0; // float32
            public const nint MFlMaxLength = 0x1C4; // float32
            public const nint MFlLengthRandExponent = 0x1C8; // float32
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitRandomSequence {
            public const nint MNSequenceMin = 0x1C0; // int32
            public const nint MNSequenceMax = 0x1C4; // int32
            public const nint MBShuffle = 0x1C8; // bool
            public const nint MBLinear = 0x1C9; // bool
            public const nint MWeightedList = 0x1D0; // CUtlVector< SequenceWeightedList_t >
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitSequenceFromCp {
            public const nint MBKillUnused = 0x1C0; // bool
            public const nint MBRadiusScale = 0x1C1; // bool
            public const nint MNCp = 0x1C4; // int32
            public const nint MVecOffset = 0x1C8; // 
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitRandomModelSequence {
            public const nint MActivityName = 0x1C0; // char[256]
            public const nint MSequenceName = 0x2C0; // char[256]
            public const nint MHModel = 0x3C0; // CStrongHandle< InfoForResourceTypeCModel >
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitScaleVelocity {
            public const nint MVecScale = 0x1C0; // CParticleCollectionVecInput
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitPositionWarp {
            public const nint MVecWarpMin = 0x1C0; // CParticleCollectionVecInput
            public const nint MVecWarpMax = 0x818; // CParticleCollectionVecInput
            public const nint MNScaleControlPointNumber = 0xE70; // int32
            public const nint MNControlPointNumber = 0xE74; // int32
            public const nint MNRadiusComponent = 0xE78; // int32
            public const nint MFlWarpTime = 0xE7C; // float32
            public const nint MFlWarpStartTime = 0xE80; // float32
            public const nint MFlPrevPosScale = 0xE84; // float32
            public const nint MBInvertWarp = 0xE88; // bool
            public const nint MBUseCount = 0xE89; // bool
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitPositionWarpScalar {
            public const nint MVecWarpMin = 0x1C0; // 
            public const nint MVecWarpMax = 0x1CC; // 
            public const nint MInputValue = 0x1D8; // CPerParticleFloatInput
            public const nint MFlPrevPosScale = 0x330; // float32
            public const nint MNScaleControlPointNumber = 0x334; // int32
            public const nint MNControlPointNumber = 0x338; // int32
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitCreationNoise {
            public const nint MNFieldOutput = 0x1C0; // ParticleAttributeIndex_t
            public const nint MBAbsVal = 0x1C4; // bool
            public const nint MBAbsValInv = 0x1C5; // bool
            public const nint MFlOffset = 0x1C8; // float32
            public const nint MFlOutputMin = 0x1CC; // float32
            public const nint MFlOutputMax = 0x1D0; // float32
            public const nint MFlNoiseScale = 0x1D4; // float32
            public const nint MFlNoiseScaleLoc = 0x1D8; // float32
            public const nint MVecOffsetLoc = 0x1DC; // 
            public const nint MFlWorldTimeScale = 0x1E8; // float32
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitCreateAlongPath {
            public const nint MFMaxDistance = 0x1C0; // float32
            public const nint MPathParams = 0x1D0; // CPathParameters
            public const nint MBUseRandomCPs = 0x210; // bool
            public const nint MVEndOffset = 0x214; // 
            public const nint MBSaveOffset = 0x220; // bool
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitMoveBetweenPoints {
            public const nint MFlSpeedMin = 0x1C0; // CPerParticleFloatInput
            public const nint MFlSpeedMax = 0x318; // CPerParticleFloatInput
            public const nint MFlEndSpread = 0x470; // CPerParticleFloatInput
            public const nint MFlStartOffset = 0x5C8; // CPerParticleFloatInput
            public const nint MFlEndOffset = 0x720; // CPerParticleFloatInput
            public const nint MNEndControlPointNumber = 0x878; // int32
            public const nint MBTrailBias = 0x87C; // bool
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 11
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitRemapScalar {
            public const nint MNFieldInput = 0x1C0; // ParticleAttributeIndex_t
            public const nint MNFieldOutput = 0x1C4; // ParticleAttributeIndex_t
            public const nint MFlInputMin = 0x1C8; // float32
            public const nint MFlInputMax = 0x1CC; // float32
            public const nint MFlOutputMin = 0x1D0; // float32
            public const nint MFlOutputMax = 0x1D4; // float32
            public const nint MFlStartTime = 0x1D8; // float32
            public const nint MFlEndTime = 0x1DC; // float32
            public const nint MNSetMethod = 0x1E0; // ParticleSetMethod_t
            public const nint MBActiveRange = 0x1E4; // bool
            public const nint MFlRemapBias = 0x1E8; // float32
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 12
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitRemapParticleCountToScalar {
            public const nint MNFieldOutput = 0x1C0; // ParticleAttributeIndex_t
            public const nint MNInputMin = 0x1C4; // int32
            public const nint MNInputMax = 0x1C8; // int32
            public const nint MNScaleControlPoint = 0x1CC; // int32
            public const nint MNScaleControlPointField = 0x1D0; // int32
            public const nint MFlOutputMin = 0x1D4; // float32
            public const nint MFlOutputMax = 0x1D8; // float32
            public const nint MNSetMethod = 0x1DC; // ParticleSetMethod_t
            public const nint MBActiveRange = 0x1E0; // bool
            public const nint MBInvert = 0x1E1; // bool
            public const nint MBWrap = 0x1E2; // bool
            public const nint MFlRemapBias = 0x1E4; // float32
        }
        // Parent: CInitRemapParticleCountToScalar
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitRemapParticleCountToNamedModelElementScalar {
            public const nint MHModel = 0x1F0; // CStrongHandle< InfoForResourceTypeCModel >
            public const nint MOutputMinName = 0x1F8; // CUtlString
            public const nint MOutputMaxName = 0x200; // CUtlString
            public const nint MBModelFromRenderer = 0x208; // bool
        }
        // Parent: CInitRemapParticleCountToNamedModelElementScalar
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitRemapParticleCountToNamedModelSequenceScalar {
        }
        // Parent: CInitRemapParticleCountToNamedModelElementScalar
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitRemapParticleCountToNamedModelBodyPartScalar {
        }
        // Parent: CInitRemapParticleCountToNamedModelElementScalar
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitRemapParticleCountToNamedModelMeshGroupScalar {
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitInheritVelocity {
            public const nint MNControlPointNumber = 0x1C0; // int32
            public const nint MFlVelocityScale = 0x1C4; // float32
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitVelocityFromCp {
            public const nint MVelocityInput = 0x1C0; // CParticleCollectionVecInput
            public const nint MTransformInput = 0x818; // CParticleTransformInput
            public const nint MFlVelocityScale = 0x880; // float32
            public const nint MBDirectionOnly = 0x884; // bool
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitAgeNoise {
            public const nint MBAbsVal = 0x1C0; // bool
            public const nint MBAbsValInv = 0x1C1; // bool
            public const nint MFlOffset = 0x1C4; // float32
            public const nint MFlAgeMin = 0x1C8; // float32
            public const nint MFlAgeMax = 0x1CC; // float32
            public const nint MFlNoiseScale = 0x1D0; // float32
            public const nint MFlNoiseScaleLoc = 0x1D4; // float32
            public const nint MVecOffsetLoc = 0x1D8; // 
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitSequenceLifeTime {
            public const nint MFlFramerate = 0x1C0; // float32
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 12
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitRemapScalarToVector {
            public const nint MNFieldInput = 0x1C0; // ParticleAttributeIndex_t
            public const nint MNFieldOutput = 0x1C4; // ParticleAttributeIndex_t
            public const nint MFlInputMin = 0x1C8; // float32
            public const nint MFlInputMax = 0x1CC; // float32
            public const nint MVecOutputMin = 0x1D0; // 
            public const nint MVecOutputMax = 0x1DC; // 
            public const nint MFlStartTime = 0x1E8; // float32
            public const nint MFlEndTime = 0x1EC; // float32
            public const nint MNSetMethod = 0x1F0; // ParticleSetMethod_t
            public const nint MNControlPointNumber = 0x1F4; // int32
            public const nint MBLocalCoords = 0x1F8; // bool
            public const nint MFlRemapBias = 0x1FC; // float32
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitOffsetVectorToVector {
            public const nint MNFieldInput = 0x1C0; // ParticleAttributeIndex_t
            public const nint MNFieldOutput = 0x1C4; // ParticleAttributeIndex_t
            public const nint MVecOutputMin = 0x1C8; // 
            public const nint MVecOutputMax = 0x1D4; // 
            public const nint MRandomnessParameters = 0x1E0; // CRandomNumberGeneratorParameters
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 6
        //
        // Metadata:
        // MParticleMinVersion
        // MGetKV3ClassDefaults
        public static class CInitCreateSequentialPathV2 {
            public const nint MFMaxDistance = 0x1C0; // CPerParticleFloatInput
            public const nint MFlNumToAssign = 0x318; // CParticleCollectionFloatInput
            public const nint MBLoop = 0x470; // bool
            public const nint MBCpPairs = 0x471; // bool
            public const nint MBSaveOffset = 0x472; // bool
            public const nint MPathParams = 0x480; // CPathParameters
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 6
        //
        // Metadata:
        // MParticleMaxVersion
        // MParticleReplacementOp
        // MGetKV3ClassDefaults
        public static class CInitCreateSequentialPath {
            public const nint MFMaxDistance = 0x1C0; // float32
            public const nint MFlNumToAssign = 0x1C4; // float32
            public const nint MBLoop = 0x1C8; // bool
            public const nint MBCpPairs = 0x1C9; // bool
            public const nint MBSaveOffset = 0x1CA; // bool
            public const nint MPathParams = 0x1D0; // CPathParameters
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 13
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitInitialRepulsionVelocity {
            public const nint MCollisionGroupName = 0x1C0; // char[128]
            public const nint MNTraceSet = 0x240; // ParticleTraceSet_t
            public const nint MVecOutputMin = 0x244; // 
            public const nint MVecOutputMax = 0x250; // 
            public const nint MNControlPointNumber = 0x25C; // int32
            public const nint MBPerParticle = 0x260; // bool
            public const nint MBTranslate = 0x261; // bool
            public const nint MBProportional = 0x262; // bool
            public const nint MFlTraceLength = 0x264; // float32
            public const nint MBPerParticleTr = 0x268; // bool
            public const nint MBInherit = 0x269; // bool
            public const nint MNChildCp = 0x26C; // int32
            public const nint MNChildGroupId = 0x270; // int32
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitRandomYawFlip {
            public const nint MFlPercent = 0x1C0; // float32
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitRandomSecondSequence {
            public const nint MNSequenceMin = 0x1C0; // int32
            public const nint MNSequenceMax = 0x1C4; // int32
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 11
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitRemapCPtoScalar {
            public const nint MNCpInput = 0x1C0; // int32
            public const nint MNFieldOutput = 0x1C4; // ParticleAttributeIndex_t
            public const nint MNField = 0x1C8; // int32
            public const nint MFlInputMin = 0x1CC; // float32
            public const nint MFlInputMax = 0x1D0; // float32
            public const nint MFlOutputMin = 0x1D4; // float32
            public const nint MFlOutputMax = 0x1D8; // float32
            public const nint MFlStartTime = 0x1DC; // float32
            public const nint MFlEndTime = 0x1E0; // float32
            public const nint MNSetMethod = 0x1E4; // ParticleSetMethod_t
            public const nint MFlRemapBias = 0x1E8; // float32
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 13
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitRemapTransformToVector {
            public const nint MNFieldOutput = 0x1C0; // ParticleAttributeIndex_t
            public const nint MVInputMin = 0x1C4; // 
            public const nint MVInputMax = 0x1D0; // 
            public const nint MVOutputMin = 0x1DC; // 
            public const nint MVOutputMax = 0x1E8; // 
            public const nint MTransformInput = 0x1F8; // CParticleTransformInput
            public const nint MLocalSpaceTransform = 0x260; // CParticleTransformInput
            public const nint MFlStartTime = 0x2C8; // float32
            public const nint MFlEndTime = 0x2CC; // float32
            public const nint MNSetMethod = 0x2D0; // ParticleSetMethod_t
            public const nint MBOffset = 0x2D4; // bool
            public const nint MBAccelerate = 0x2D5; // bool
            public const nint MFlRemapBias = 0x2D8; // float32
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 9
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitChaoticAttractor {
            public const nint MFlAParm = 0x1C0; // float32
            public const nint MFlBParm = 0x1C4; // float32
            public const nint MFlCParm = 0x1C8; // float32
            public const nint MFlDParm = 0x1CC; // float32
            public const nint MFlScale = 0x1D0; // float32
            public const nint MFlSpeedMin = 0x1D4; // float32
            public const nint MFlSpeedMax = 0x1D8; // float32
            public const nint MNBaseCp = 0x1DC; // int32
            public const nint MBUniformSpeed = 0x1E0; // bool
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitCreateFromParentParticles {
            public const nint MFlVelocityScale = 0x1C0; // float32
            public const nint MFlIncrement = 0x1C4; // float32
            public const nint MBRandomDistribution = 0x1C8; // bool
            public const nint MNRandomSeed = 0x1CC; // int32
            public const nint MBSubFrame = 0x1D0; // bool
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitInheritFromParentParticles {
            public const nint MFlScale = 0x1C0; // float32
            public const nint MNFieldOutput = 0x1C4; // ParticleAttributeIndex_t
            public const nint MNIncrement = 0x1C8; // int32
            public const nint MBRandomDistribution = 0x1CC; // bool
            public const nint MNRandomSeed = 0x1D0; // int32
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitCreateFromCPs {
            public const nint MNIncrement = 0x1C0; // int32
            public const nint MNMinCp = 0x1C4; // int32
            public const nint MNMaxCp = 0x1C8; // int32
            public const nint MNDynamicCpCount = 0x1D0; // CParticleCollectionFloatInput
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 15
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitDistanceToCpInit {
            public const nint MNFieldOutput = 0x1C0; // ParticleAttributeIndex_t
            public const nint MFlInputMin = 0x1C8; // CPerParticleFloatInput
            public const nint MFlInputMax = 0x320; // CPerParticleFloatInput
            public const nint MFlOutputMin = 0x478; // CPerParticleFloatInput
            public const nint MFlOutputMax = 0x5D0; // CPerParticleFloatInput
            public const nint MNStartCp = 0x728; // int32
            public const nint MBLos = 0x72C; // bool
            public const nint MCollisionGroupName = 0x72D; // char[128]
            public const nint MNTraceSet = 0x7B0; // ParticleTraceSet_t
            public const nint MFlMaxTraceLength = 0x7B8; // CPerParticleFloatInput
            public const nint MFlLosScale = 0x910; // float32
            public const nint MNSetMethod = 0x914; // ParticleSetMethod_t
            public const nint MBActiveRange = 0x918; // bool
            public const nint MVecDistanceScale = 0x91C; // 
            public const nint MFlRemapBias = 0x928; // float32
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitLifespanFromVelocity {
            public const nint MVecComponentScale = 0x1C0; // 
            public const nint MFlTraceOffset = 0x1CC; // float32
            public const nint MFlMaxTraceLength = 0x1D0; // float32
            public const nint MFlTraceTolerance = 0x1D4; // float32
            public const nint MNMaxPlanes = 0x1D8; // int32
            public const nint MCollisionGroupName = 0x1E0; // char[128]
            public const nint MNTraceSet = 0x260; // ParticleTraceSet_t
            public const nint MBIncludeWater = 0x270; // bool
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitCreateFromPlaneCache {
            public const nint MVecOffsetMin = 0x1C0; // 
            public const nint MVecOffsetMax = 0x1CC; // 
            public const nint MBUseNormal = 0x1D9; // bool
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitModelCull {
            public const nint MNControlPointNumber = 0x1C0; // int32
            public const nint MBBoundBox = 0x1C4; // bool
            public const nint MBCullOutside = 0x1C5; // bool
            public const nint MBUseBones = 0x1C6; // bool
            public const nint MHitboxSetName = 0x1C7; // char[128]
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitDistanceCull {
            public const nint MNControlPoint = 0x1C0; // int32
            public const nint MFlDistance = 0x1C8; // CParticleCollectionFloatInput
            public const nint MBCullInside = 0x320; // bool
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitPlaneCull {
            public const nint MNControlPoint = 0x1C0; // int32
            public const nint MFlDistance = 0x1C8; // CParticleCollectionFloatInput
            public const nint MBCullInside = 0x320; // bool
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitDistanceToNeighborCull {
            public const nint MFlDistance = 0x1C0; // CPerParticleFloatInput
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitRtEnvCull {
            public const nint MVecTestDir = 0x1C0; // 
            public const nint MVecTestNormal = 0x1CC; // 
            public const nint MBUseVelocity = 0x1D8; // bool
            public const nint MBCullOnMiss = 0x1D9; // bool
            public const nint MBLifeAdjust = 0x1DA; // bool
            public const nint MRtEnvName = 0x1DB; // char[128]
            public const nint MNRtEnvCp = 0x25C; // int32
            public const nint MNComponent = 0x260; // int32
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitNormalAlignToCp {
            public const nint MTransformInput = 0x1C0; // CParticleTransformInput
            public const nint MNControlPointAxis = 0x228; // ParticleControlPointAxis_t
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitNormalOffset {
            public const nint MOffsetMin = 0x1C0; // 
            public const nint MOffsetMax = 0x1CC; // 
            public const nint MNControlPointNumber = 0x1D8; // int32
            public const nint MBLocalCoords = 0x1DC; // bool
            public const nint MBNormalize = 0x1DD; // bool
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitRemapSpeedToScalar {
            public const nint MNFieldOutput = 0x1C0; // ParticleAttributeIndex_t
            public const nint MNControlPointNumber = 0x1C4; // int32
            public const nint MFlStartTime = 0x1C8; // float32
            public const nint MFlEndTime = 0x1CC; // float32
            public const nint MFlInputMin = 0x1D0; // float32
            public const nint MFlInputMax = 0x1D4; // float32
            public const nint MFlOutputMin = 0x1D8; // float32
            public const nint MFlOutputMax = 0x1DC; // float32
            public const nint MNSetMethod = 0x1E0; // ParticleSetMethod_t
            public const nint MBPerParticle = 0x1E4; // bool
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitInitFromCpSnapshot {
            public const nint MNControlPointNumber = 0x1C0; // int32
            public const nint MNAttributeToRead = 0x1C4; // ParticleAttributeIndex_t
            public const nint MNAttributeToWrite = 0x1C8; // ParticleAttributeIndex_t
            public const nint MNLocalSpaceCp = 0x1CC; // int32
            public const nint MBRandom = 0x1D0; // bool
            public const nint MBReverse = 0x1D1; // bool
            public const nint MNSnapShotIncrement = 0x1D8; // CParticleCollectionFloatInput
            public const nint MNManualSnapshotIndex = 0x330; // CPerParticleFloatInput
            public const nint MNRandomSeed = 0x488; // int32
            public const nint MBLocalSpaceAngles = 0x48C; // bool
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 19
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitInitSkinnedPositionFromCpSnapshot {
            public const nint MNSnapshotControlPointNumber = 0x1C0; // int32
            public const nint MNControlPointNumber = 0x1C4; // int32
            public const nint MBRandom = 0x1C8; // bool
            public const nint MNRandomSeed = 0x1CC; // int32
            public const nint MBRigid = 0x1D0; // bool
            public const nint MBSetNormal = 0x1D1; // bool
            public const nint MBIgnoreDt = 0x1D2; // bool
            public const nint MFlMinNormalVelocity = 0x1D4; // float32
            public const nint MFlMaxNormalVelocity = 0x1D8; // float32
            public const nint MNIndexType = 0x1DC; // SnapshotIndexType_t
            public const nint MFlReadIndex = 0x1E0; // CPerParticleFloatInput
            public const nint MFlIncrement = 0x338; // float32
            public const nint MNFullLoopIncrement = 0x33C; // int32
            public const nint MNSnapShotStartPoint = 0x340; // int32
            public const nint MFlBoneVelocity = 0x344; // float32
            public const nint MFlBoneVelocityMax = 0x348; // float32
            public const nint MBCopyColor = 0x34C; // bool
            public const nint MBCopyAlpha = 0x34D; // bool
            public const nint MBSetRadius = 0x34E; // bool
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitInitFromParentKilled {
            public const nint MNAttributeToCopy = 0x1C0; // ParticleAttributeIndex_t
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitInitFromVectorFieldSnapshot {
            public const nint MNControlPointNumber = 0x1C0; // int32
            public const nint MNLocalSpaceCp = 0x1C4; // int32
            public const nint MNWeightUpdateCp = 0x1C8; // int32
            public const nint MBUseVerticalVelocity = 0x1CC; // bool
            public const nint MVecScale = 0x1D0; // CPerParticleVecInput
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitRemapInitialDirectionToTransformToVector {
            public const nint MTransformInput = 0x1C0; // CParticleTransformInput
            public const nint MNFieldOutput = 0x228; // ParticleAttributeIndex_t
            public const nint MFlScale = 0x22C; // float32
            public const nint MFlOffsetRot = 0x230; // float32
            public const nint MVecOffsetAxis = 0x234; // 
            public const nint MBNormalize = 0x240; // bool
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitRemapInitialTransformDirectionToRotation {
            public const nint MTransformInput = 0x1C0; // CParticleTransformInput
            public const nint MNFieldOutput = 0x228; // ParticleAttributeIndex_t
            public const nint MFlOffsetRot = 0x22C; // float32
            public const nint MNComponent = 0x230; // int32
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitRemapQAnglesToRotation {
            public const nint MTransformInput = 0x1C0; // CParticleTransformInput
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitRemapTransformOrientationToRotations {
            public const nint MTransformInput = 0x1C0; // CParticleTransformInput
            public const nint MVecRotation = 0x228; // 
            public const nint MBUseQuat = 0x234; // bool
            public const nint MBWriteNormal = 0x235; // bool
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitSetRigidAttachment {
            public const nint MNControlPointNumber = 0x1C0; // int32
            public const nint MNFieldInput = 0x1C4; // ParticleAttributeIndex_t
            public const nint MNFieldOutput = 0x1C8; // ParticleAttributeIndex_t
            public const nint MBLocalSpace = 0x1CC; // bool
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitRemapInitialVisibilityScalar {
            public const nint MNFieldOutput = 0x1C4; // ParticleAttributeIndex_t
            public const nint MFlInputMin = 0x1C8; // float32
            public const nint MFlInputMax = 0x1CC; // float32
            public const nint MFlOutputMin = 0x1D0; // float32
            public const nint MFlOutputMax = 0x1D4; // float32
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitRadiusFromCpObject {
            public const nint MNControlPoint = 0x1C0; // int32
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitInitialSequenceFromModel {
            public const nint MNControlPointNumber = 0x1C0; // int32
            public const nint MNFieldOutput = 0x1C4; // ParticleAttributeIndex_t
            public const nint MNFieldOutputAnim = 0x1C8; // ParticleAttributeIndex_t
            public const nint MFlInputMin = 0x1CC; // float32
            public const nint MFlInputMax = 0x1D0; // float32
            public const nint MFlOutputMin = 0x1D4; // float32
            public const nint MFlOutputMax = 0x1D8; // float32
            public const nint MNSetMethod = 0x1DC; // ParticleSetMethod_t
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitGlobalScale {
            public const nint MFlScale = 0x1C0; // float32
            public const nint MNScaleControlPointNumber = 0x1C4; // int32
            public const nint MNControlPointNumber = 0x1C8; // int32
            public const nint MBScaleRadius = 0x1CC; // bool
            public const nint MBScalePosition = 0x1CD; // bool
            public const nint MBScaleVelocity = 0x1CE; // bool
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitPointList {
            public const nint MNFieldOutput = 0x1C0; // ParticleAttributeIndex_t
            public const nint MPointList = 0x1C8; // CUtlVector< PointDefinition_t >
            public const nint MBPlaceAlongPath = 0x1E0; // bool
            public const nint MBClosedLoop = 0x1E1; // bool
            public const nint MNNumPointsAlongPath = 0x1E4; // int32
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitRandomNamedModelElement {
            public const nint MHModel = 0x1C0; // CStrongHandle< InfoForResourceTypeCModel >
            public const nint MNames = 0x1C8; // CUtlVector< CUtlString >
            public const nint MBShuffle = 0x1E0; // bool
            public const nint MBLinear = 0x1E1; // bool
            public const nint MBModelFromRenderer = 0x1E2; // bool
            public const nint MNFieldOutput = 0x1E4; // ParticleAttributeIndex_t
        }
        // Parent: CInitRandomNamedModelElement
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitRandomNamedModelSequence {
        }
        // Parent: CInitRandomNamedModelElement
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitRandomNamedModelBodyPart {
        }
        // Parent: CInitRandomNamedModelElement
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitRandomNamedModelMeshGroup {
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitRemapNamedModelElementToScalar {
            public const nint MHModel = 0x1C0; // CStrongHandle< InfoForResourceTypeCModel >
            public const nint MNames = 0x1C8; // CUtlVector< CUtlString >
            public const nint MValues = 0x1E0; // CUtlVector< float32 >
            public const nint MNFieldInput = 0x1F8; // ParticleAttributeIndex_t
            public const nint MNFieldOutput = 0x1FC; // ParticleAttributeIndex_t
            public const nint MNSetMethod = 0x200; // ParticleSetMethod_t
            public const nint MBModelFromRenderer = 0x204; // bool
        }
        // Parent: CInitRemapNamedModelElementToScalar
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitRemapNamedModelSequenceToScalar {
        }
        // Parent: CInitRemapNamedModelElementToScalar
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitRemapNamedModelBodyPartToScalar {
        }
        // Parent: CInitRemapNamedModelElementToScalar
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitRemapNamedModelMeshGroupToScalar {
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 18
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitStatusEffect {
            public const nint MNDetail2Combo = 0x1C0; // Detail2Combo_t
            public const nint MFlDetail2Rotation = 0x1C4; // float32
            public const nint MFlDetail2Scale = 0x1C8; // float32
            public const nint MFlDetail2BlendFactor = 0x1CC; // float32
            public const nint MFlColorWarpIntensity = 0x1D0; // float32
            public const nint MFlDiffuseWarpBlendToFull = 0x1D4; // float32
            public const nint MFlEnvMapIntensity = 0x1D8; // float32
            public const nint MFlAmbientScale = 0x1DC; // float32
            public const nint MSpecularColor = 0x1E0; // Color
            public const nint MFlSpecularScale = 0x1E4; // float32
            public const nint MFlSpecularExponent = 0x1E8; // float32
            public const nint MFlSpecularExponentBlendToFull = 0x1EC; // float32
            public const nint MFlSpecularBlendToFull = 0x1F0; // float32
            public const nint MRimLightColor = 0x1F4; // Color
            public const nint MFlRimLightScale = 0x1F8; // float32
            public const nint MFlReflectionsTintByBaseBlendToNone = 0x1FC; // float32
            public const nint MFlMetalnessBlendToFull = 0x200; // float32
            public const nint MFlSelfIllumBlendToFull = 0x204; // float32
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 19
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitStatusEffectCitadel {
            public const nint MFlSfxColorWarpAmount = 0x1C0; // float32
            public const nint MFlSfxNormalAmount = 0x1C4; // float32
            public const nint MFlSfxMetalnessAmount = 0x1C8; // float32
            public const nint MFlSfxRoughnessAmount = 0x1CC; // float32
            public const nint MFlSfxSelfIllumAmount = 0x1D0; // float32
            public const nint MFlSfxsScale = 0x1D4; // float32
            public const nint MFlSfxsScrollX = 0x1D8; // float32
            public const nint MFlSfxsScrollY = 0x1DC; // float32
            public const nint MFlSfxsScrollZ = 0x1E0; // float32
            public const nint MFlSfxsOffsetX = 0x1E4; // float32
            public const nint MFlSfxsOffsetY = 0x1E8; // float32
            public const nint MFlSfxsOffsetZ = 0x1EC; // float32
            public const nint MNDetailCombo = 0x1F0; // DetailCombo_t
            public const nint MFlSfxsDetailAmount = 0x1F4; // float32
            public const nint MFlSfxsDetailScale = 0x1F8; // float32
            public const nint MFlSfxsDetailScrollX = 0x1FC; // float32
            public const nint MFlSfxsDetailScrollY = 0x200; // float32
            public const nint MFlSfxsDetailScrollZ = 0x204; // float32
            public const nint MFlSfxsUseModelUVs = 0x208; // float32
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitCreateParticleImpulse {
            public const nint MInputRadius = 0x1C0; // CPerParticleFloatInput
            public const nint MInputMagnitude = 0x318; // CPerParticleFloatInput
            public const nint MNFalloffFunction = 0x470; // ParticleFalloffFunction_t
            public const nint MInputFalloffExp = 0x478; // CPerParticleFloatInput
            public const nint MNImpulseType = 0x5D0; // ParticleImpulseType_t
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitQuantizeFloat {
            public const nint MInputValue = 0x1C0; // CPerParticleFloatInput
            public const nint MNOutputField = 0x318; // ParticleAttributeIndex_t
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitSetAttributeToScalarExpression {
            public const nint MNExpression = 0x1C0; // ScalarExpressionType_t
            public const nint MFlInput1 = 0x1C8; // CPerParticleFloatInput
            public const nint MFlInput2 = 0x320; // CPerParticleFloatInput
            public const nint MFlOutputRemap = 0x478; // CParticleRemapFloatInput
            public const nint MNOutputField = 0x5D0; // ParticleAttributeIndex_t
            public const nint MNSetMethod = 0x5D4; // ParticleSetMethod_t
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitSetVectorAttributeToVectorExpression {
            public const nint MNExpression = 0x1C0; // VectorExpressionType_t
            public const nint MVInput1 = 0x1C8; // CPerParticleVecInput
            public const nint MVInput2 = 0x820; // CPerParticleVecInput
            public const nint MNOutputField = 0xE78; // ParticleAttributeIndex_t
            public const nint MNSetMethod = 0xE7C; // ParticleSetMethod_t
            public const nint MBNormalizedOutput = 0xE80; // bool
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitInitFloatCollection {
            public const nint MInputValue = 0x1C0; // CParticleCollectionFloatInput
            public const nint MNOutputField = 0x318; // ParticleAttributeIndex_t
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitInitFloat {
            public const nint MInputValue = 0x1C0; // CPerParticleFloatInput
            public const nint MNOutputField = 0x318; // ParticleAttributeIndex_t
            public const nint MNSetMethod = 0x31C; // ParticleSetMethod_t
            public const nint MInputStrength = 0x320; // CPerParticleFloatInput
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitInitVecCollection {
            public const nint MInputValue = 0x1C0; // CParticleCollectionVecInput
            public const nint MNOutputField = 0x818; // ParticleAttributeIndex_t
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInitInitVec {
            public const nint MInputValue = 0x1C0; // CPerParticleVecInput
            public const nint MNOutputField = 0x818; // ParticleAttributeIndex_t
            public const nint MNSetMethod = 0x81C; // ParticleSetMethod_t
            public const nint MBNormalizedOutput = 0x820; // bool
            public const nint MBWritePreviousPosition = 0x821; // bool
        }
        // Parent: CParticleFunctionEmitter
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class COpInstantaneousEmitter {
            public const nint MNParticlesToEmit = 0x1C0; // CParticleCollectionFloatInput
            public const nint MFlStartTime = 0x318; // CParticleCollectionFloatInput
            public const nint MFlInitFromKilledParentParticles = 0x470; // float32
            public const nint MFlParentParticleScale = 0x478; // CParticleCollectionFloatInput
            public const nint MNMaxEmittedPerFrame = 0x5D0; // int32
            public const nint MNSnapshotControlPoint = 0x5D4; // int32
        }
        // Parent: CParticleFunctionEmitter
        // Fields count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class COpContinuousEmitter {
            public const nint MFlEmissionDuration = 0x1C0; // CParticleCollectionFloatInput
            public const nint MFlStartTime = 0x318; // CParticleCollectionFloatInput
            public const nint MFlEmitRate = 0x470; // CParticleCollectionFloatInput
            public const nint MFlEmissionScale = 0x5C8; // float32
            public const nint MFlScalePerParentParticle = 0x5CC; // float32
            public const nint MBInitFromKilledParentParticles = 0x5D0; // bool
            public const nint MNSnapshotControlPoint = 0x5D4; // int32
            public const nint MNLimitPerUpdate = 0x5D8; // int32
            public const nint MBForceEmitOnFirstUpdate = 0x5DC; // bool
            public const nint MBForceEmitOnLastUpdate = 0x5DD; // bool
        }
        // Parent: CParticleFunctionEmitter
        // Fields count: 15
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class COpNoiseEmitter {
            public const nint MFlEmissionDuration = 0x1C0; // float32
            public const nint MFlStartTime = 0x1C4; // float32
            public const nint MFlEmissionScale = 0x1C8; // float32
            public const nint MNScaleControlPoint = 0x1CC; // int32
            public const nint MNScaleControlPointField = 0x1D0; // int32
            public const nint MNWorldNoisePoint = 0x1D4; // int32
            public const nint MBAbsVal = 0x1D8; // bool
            public const nint MBAbsValInv = 0x1D9; // bool
            public const nint MFlOffset = 0x1DC; // float32
            public const nint MFlOutputMin = 0x1E0; // float32
            public const nint MFlOutputMax = 0x1E4; // float32
            public const nint MFlNoiseScale = 0x1E8; // float32
            public const nint MFlWorldNoiseScale = 0x1EC; // float32
            public const nint MVecOffsetLoc = 0x1F0; // 
            public const nint MFlWorldTimeScale = 0x1FC; // float32
        }
        // Parent: CParticleFunctionEmitter
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class COpMaintainEmitter {
            public const nint MNParticlesToMaintain = 0x1C0; // CParticleCollectionFloatInput
            public const nint MFlStartTime = 0x318; // float32
            public const nint MFlEmissionDuration = 0x320; // CParticleCollectionFloatInput
            public const nint MFlEmissionRate = 0x478; // float32
            public const nint MNSnapshotControlPoint = 0x47C; // int32
            public const nint MBEmitInstantaneously = 0x480; // bool
            public const nint MBFinalEmitOnStop = 0x481; // bool
            public const nint MFlScale = 0x488; // CParticleCollectionFloatInput
        }
        // Parent: CParticleFunctionForce
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class COpRandomForce {
            public const nint MMinForce = 0x1D0; // 
            public const nint MMaxForce = 0x1DC; // 
        }
        // Parent: CParticleFunctionForce
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class COpCpVelocityForce {
            public const nint MNControlPointNumber = 0x1D0; // int32
            public const nint MFlScale = 0x1D8; // CPerParticleFloatInput
        }
        // Parent: CParticleFunctionForce
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class COpParentVortices {
            public const nint MFlForceScale = 0x1D0; // float32
            public const nint MVecTwistAxis = 0x1D4; // 
            public const nint MBFlipBasedOnYaw = 0x1E0; // bool
        }
        // Parent: CParticleFunctionForce
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class COpTwistAroundAxis {
            public const nint MFForceAmount = 0x1D0; // float32
            public const nint MTwistAxis = 0x1D4; // 
            public const nint MBLocalSpace = 0x1E0; // bool
            public const nint MNControlPointNumber = 0x1E4; // int32
        }
        // Parent: CParticleFunctionForce
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class COpAttractToControlPoint {
            public const nint MVecComponentScale = 0x1D0; // 
            public const nint MFForceAmount = 0x1E0; // CPerParticleFloatInput
            public const nint MFFalloffPower = 0x338; // float32
            public const nint MTransformInput = 0x340; // CParticleTransformInput
            public const nint MFForceAmountMin = 0x3A8; // CPerParticleFloatInput
            public const nint MBApplyMinForce = 0x500; // bool
        }
        // Parent: CParticleFunctionForce
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class COpForceBasedOnDistanceToPlane {
            public const nint MFlMinDist = 0x1D0; // float32
            public const nint MVecForceAtMinDist = 0x1D4; // 
            public const nint MFlMaxDist = 0x1E0; // float32
            public const nint MVecForceAtMaxDist = 0x1E4; // 
            public const nint MVecPlaneNormal = 0x1F0; // 
            public const nint MNControlPointNumber = 0x1FC; // int32
            public const nint MFlExponent = 0x200; // float32
        }
        // Parent: CParticleFunctionForce
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class COpTimeVaryingForce {
            public const nint MFlStartLerpTime = 0x1D0; // float32
            public const nint MStartingForce = 0x1D4; // 
            public const nint MFlEndLerpTime = 0x1E0; // float32
            public const nint MEndingForce = 0x1E4; // 
        }
        // Parent: CParticleFunctionForce
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class COpTurbulenceForce {
            public const nint MFlNoiseCoordScale0 = 0x1D0; // float32
            public const nint MFlNoiseCoordScale1 = 0x1D4; // float32
            public const nint MFlNoiseCoordScale2 = 0x1D8; // float32
            public const nint MFlNoiseCoordScale3 = 0x1DC; // float32
            public const nint MVecNoiseAmount0 = 0x1E0; // 
            public const nint MVecNoiseAmount1 = 0x1EC; // 
            public const nint MVecNoiseAmount2 = 0x1F8; // 
            public const nint MVecNoiseAmount3 = 0x204; // 
        }
        // Parent: CParticleFunctionForce
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class COpCurlNoiseForce {
            public const nint MNNoiseType = 0x1D0; // ParticleDirectionNoiseType_t
            public const nint MVecNoiseFreq = 0x1D8; // CPerParticleVecInput
            public const nint MVecNoiseScale = 0x830; // CPerParticleVecInput
            public const nint MVecOffset = 0xE88; // CPerParticleVecInput
            public const nint MVecOffsetRate = 0x14E0; // CPerParticleVecInput
            public const nint MFlWorleySeed = 0x1B38; // CPerParticleFloatInput
            public const nint MFlWorleyJitter = 0x1C90; // CPerParticleFloatInput
        }
        // Parent: CParticleFunctionForce
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class COpPerParticleForce {
            public const nint MFlForceScale = 0x1D0; // CPerParticleFloatInput
            public const nint MVForce = 0x328; // CPerParticleVecInput
            public const nint MNCp = 0x980; // int32
        }
        // Parent: CParticleFunctionForce
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class COpWindForce {
            public const nint MVForce = 0x1D0; // 
        }
        // Parent: CParticleFunctionForce
        // Fields count: 11
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class COpExternalWindForce {
            public const nint MVecSamplePosition = 0x1D0; // CPerParticleVecInput
            public const nint MVecScale = 0x828; // CPerParticleVecInput
            public const nint MBSampleWind = 0xE80; // bool
            public const nint MBSampleWater = 0xE81; // bool
            public const nint MBDampenNearWaterPlane = 0xE82; // bool
            public const nint MBSampleGravity = 0xE83; // bool
            public const nint MVecGravityForce = 0xE88; // CPerParticleVecInput
            public const nint MBUseBasicMovementGravity = 0x14E0; // bool
            public const nint MFlLocalGravityScale = 0x14E8; // CPerParticleFloatInput
            public const nint MFlLocalBuoyancyScale = 0x1640; // CPerParticleFloatInput
            public const nint MVecBuoyancyForce = 0x1798; // CPerParticleVecInput
        }
        // Parent: CParticleFunctionForce
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class COpExternalGameImpulseForce {
            public const nint MFlForceScale = 0x1D0; // CPerParticleFloatInput
            public const nint MBRopes = 0x328; // bool
            public const nint MBRopesZOnly = 0x329; // bool
            public const nint MBExplosions = 0x32A; // bool
            public const nint MBParticles = 0x32B; // bool
        }
        // Parent: CParticleFunctionForce
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class COpLocalAccelerationForce {
            public const nint MNCp = 0x1D0; // int32
            public const nint MNScaleCp = 0x1D4; // int32
            public const nint MVecAccel = 0x1D8; // CParticleCollectionVecInput
        }
        // Parent: CParticleFunctionForce
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class COpDensityForce {
            public const nint MFlRadiusScale = 0x1D0; // float32
            public const nint MFlForceScale = 0x1D4; // float32
            public const nint MFlTargetDensity = 0x1D8; // float32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class COpBasicMovement {
            public const nint MGravity = 0x1C0; // CParticleCollectionVecInput
            public const nint MFDrag = 0x818; // CParticleCollectionFloatInput
            public const nint MNMaxConstraintPasses = 0x970; // int32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class COpFadeAndKill {
            public const nint MFlStartFadeInTime = 0x1C0; // float32
            public const nint MFlEndFadeInTime = 0x1C4; // float32
            public const nint MFlStartFadeOutTime = 0x1C8; // float32
            public const nint MFlEndFadeOutTime = 0x1CC; // float32
            public const nint MFlStartAlpha = 0x1D0; // float32
            public const nint MFlEndAlpha = 0x1D4; // float32
            public const nint MBForcePreserveParticleOrder = 0x1D8; // bool
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class COpFadeAndKillForTracers {
            public const nint MFlStartFadeInTime = 0x1C0; // float32
            public const nint MFlEndFadeInTime = 0x1C4; // float32
            public const nint MFlStartFadeOutTime = 0x1C8; // float32
            public const nint MFlEndFadeOutTime = 0x1CC; // float32
            public const nint MFlStartAlpha = 0x1D0; // float32
            public const nint MFlEndAlpha = 0x1D4; // float32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class COpFadeIn {
            public const nint MFlFadeInTimeMin = 0x1C0; // float32
            public const nint MFlFadeInTimeMax = 0x1C4; // float32
            public const nint MFlFadeInTimeExp = 0x1C8; // float32
            public const nint MBProportional = 0x1CC; // bool
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class COpFadeOut {
            public const nint MFlFadeOutTimeMin = 0x1C0; // float32
            public const nint MFlFadeOutTimeMax = 0x1C4; // float32
            public const nint MFlFadeOutTimeExp = 0x1C8; // float32
            public const nint MFlFadeBias = 0x1CC; // float32
            public const nint MBProportional = 0x200; // bool
            public const nint MBEaseInAndOut = 0x201; // bool
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class COpFadeInSimple {
            public const nint MFlFadeInTime = 0x1C0; // float32
            public const nint MNFieldOutput = 0x1C4; // ParticleAttributeIndex_t
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class COpFadeOutSimple {
            public const nint MFlFadeOutTime = 0x1C0; // float32
            public const nint MNFieldOutput = 0x1C4; // ParticleAttributeIndex_t
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class COpClampScalar {
            public const nint MNFieldOutput = 0x1C0; // ParticleAttributeIndex_t
            public const nint MFlOutputMin = 0x1C8; // CPerParticleFloatInput
            public const nint MFlOutputMax = 0x320; // CPerParticleFloatInput
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class COpClampVector {
            public const nint MNFieldOutput = 0x1C0; // ParticleAttributeIndex_t
            public const nint MVecOutputMin = 0x1C8; // CPerParticleVecInput
            public const nint MVecOutputMax = 0x820; // CPerParticleVecInput
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 13
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class COpOscillateScalar {
            public const nint MRateMin = 0x1C0; // float32
            public const nint MRateMax = 0x1C4; // float32
            public const nint MFrequencyMin = 0x1C8; // float32
            public const nint MFrequencyMax = 0x1CC; // float32
            public const nint MNField = 0x1D0; // ParticleAttributeIndex_t
            public const nint MBProportional = 0x1D4; // bool
            public const nint MBProportionalOp = 0x1D5; // bool
            public const nint MFlStartTimeMin = 0x1D8; // float32
            public const nint MFlStartTimeMax = 0x1DC; // float32
            public const nint MFlEndTimeMin = 0x1E0; // float32
            public const nint MFlEndTimeMax = 0x1E4; // float32
            public const nint MFlOscMult = 0x1E8; // float32
            public const nint MFlOscAdd = 0x1EC; // float32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class COpOscillateScalarSimple {
            public const nint MRate = 0x1C0; // float32
            public const nint MFrequency = 0x1C4; // float32
            public const nint MNField = 0x1C8; // ParticleAttributeIndex_t
            public const nint MFlOscMult = 0x1CC; // float32
            public const nint MFlOscAdd = 0x1D0; // float32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 15
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class COpOscillateVector {
            public const nint MRateMin = 0x1C0; // 
            public const nint MRateMax = 0x1CC; // 
            public const nint MFrequencyMin = 0x1D8; // 
            public const nint MFrequencyMax = 0x1E4; // 
            public const nint MNField = 0x1F0; // ParticleAttributeIndex_t
            public const nint MBProportional = 0x1F4; // bool
            public const nint MBProportionalOp = 0x1F5; // bool
            public const nint MBOffset = 0x1F6; // bool
            public const nint MFlStartTimeMin = 0x1F8; // float32
            public const nint MFlStartTimeMax = 0x1FC; // float32
            public const nint MFlEndTimeMin = 0x200; // float32
            public const nint MFlEndTimeMax = 0x204; // float32
            public const nint MFlOscMult = 0x208; // CPerParticleFloatInput
            public const nint MFlOscAdd = 0x360; // CPerParticleFloatInput
            public const nint MFlRateScale = 0x4B8; // CPerParticleFloatInput
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class COpOscillateVectorSimple {
            public const nint MRate = 0x1C0; // 
            public const nint MFrequency = 0x1CC; // 
            public const nint MNField = 0x1D8; // ParticleAttributeIndex_t
            public const nint MFlOscMult = 0x1DC; // float32
            public const nint MFlOscAdd = 0x1E0; // float32
            public const nint MBOffset = 0x1E4; // bool
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 9
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class COpDifferencePreviousParticle {
            public const nint MNFieldInput = 0x1C0; // ParticleAttributeIndex_t
            public const nint MNFieldOutput = 0x1C4; // ParticleAttributeIndex_t
            public const nint MFlInputMin = 0x1C8; // float32
            public const nint MFlInputMax = 0x1CC; // float32
            public const nint MFlOutputMin = 0x1D0; // float32
            public const nint MFlOutputMax = 0x1D4; // float32
            public const nint MNSetMethod = 0x1D8; // ParticleSetMethod_t
            public const nint MBActiveRange = 0x1DC; // bool
            public const nint MBSetPreviousParticle = 0x1DD; // bool
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class COpPointVectorAtNextParticle {
            public const nint MNFieldOutput = 0x1C0; // ParticleAttributeIndex_t
            public const nint MFlInterpolation = 0x1C8; // CPerParticleFloatInput
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class COpRemapScalar {
            public const nint MNFieldInput = 0x1C0; // ParticleAttributeIndex_t
            public const nint MNFieldOutput = 0x1C4; // ParticleAttributeIndex_t
            public const nint MFlInputMin = 0x1C8; // float32
            public const nint MFlInputMax = 0x1CC; // float32
            public const nint MFlOutputMin = 0x1D0; // float32
            public const nint MFlOutputMax = 0x1D4; // float32
            public const nint MBOldCode = 0x1D8; // bool
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class COpRemapDensityToVector {
            public const nint MFlRadiusScale = 0x1C0; // float32
            public const nint MNFieldOutput = 0x1C4; // ParticleAttributeIndex_t
            public const nint MFlDensityMin = 0x1C8; // float32
            public const nint MFlDensityMax = 0x1CC; // float32
            public const nint MVecOutputMin = 0x1D0; // 
            public const nint MVecOutputMax = 0x1DC; // 
            public const nint MBUseParentDensity = 0x1E8; // bool
            public const nint MNVoxelGridResolution = 0x1EC; // int32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class COpDiffusion {
            public const nint MFlRadiusScale = 0x1C0; // float32
            public const nint MNFieldOutput = 0x1C4; // ParticleAttributeIndex_t
            public const nint MNVoxelGridResolution = 0x1C8; // int32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class COpRemapScalarEndCap {
            public const nint MNFieldInput = 0x1C0; // ParticleAttributeIndex_t
            public const nint MNFieldOutput = 0x1C4; // ParticleAttributeIndex_t
            public const nint MFlInputMin = 0x1C8; // float32
            public const nint MFlInputMax = 0x1CC; // float32
            public const nint MFlOutputMin = 0x1D0; // float32
            public const nint MFlOutputMax = 0x1D4; // float32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class COpReinitializeScalarEndCap {
            public const nint MNFieldOutput = 0x1C0; // ParticleAttributeIndex_t
            public const nint MFlOutputMin = 0x1C4; // float32
            public const nint MFlOutputMax = 0x1C8; // float32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class COpRemapScalarOnceTimed {
            public const nint MBProportional = 0x1C0; // bool
            public const nint MNFieldInput = 0x1C4; // ParticleAttributeIndex_t
            public const nint MNFieldOutput = 0x1C8; // ParticleAttributeIndex_t
            public const nint MFlInputMin = 0x1CC; // float32
            public const nint MFlInputMax = 0x1D0; // float32
            public const nint MFlOutputMin = 0x1D4; // float32
            public const nint MFlOutputMax = 0x1D8; // float32
            public const nint MFlRemapTime = 0x1DC; // float32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class COpRemapParticleCountOnScalarEndCap {
            public const nint MNFieldOutput = 0x1C0; // ParticleAttributeIndex_t
            public const nint MNInputMin = 0x1C4; // int32
            public const nint MNInputMax = 0x1C8; // int32
            public const nint MFlOutputMin = 0x1CC; // float32
            public const nint MFlOutputMax = 0x1D0; // float32
            public const nint MBBackwards = 0x1D4; // bool
            public const nint MNSetMethod = 0x1D8; // ParticleSetMethod_t
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class COpRemapParticleCountToScalar {
            public const nint MNFieldOutput = 0x1C0; // ParticleAttributeIndex_t
            public const nint MNInputMin = 0x1C8; // CParticleCollectionFloatInput
            public const nint MNInputMax = 0x320; // CParticleCollectionFloatInput
            public const nint MFlOutputMin = 0x478; // CParticleCollectionFloatInput
            public const nint MFlOutputMax = 0x5D0; // CParticleCollectionFloatInput
            public const nint MBActiveRange = 0x728; // bool
            public const nint MNSetMethod = 0x72C; // ParticleSetMethod_t
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class COpRemapVisibilityScalar {
            public const nint MNFieldInput = 0x1C0; // ParticleAttributeIndex_t
            public const nint MNFieldOutput = 0x1C4; // ParticleAttributeIndex_t
            public const nint MFlInputMin = 0x1C8; // float32
            public const nint MFlInputMax = 0x1CC; // float32
            public const nint MFlOutputMin = 0x1D0; // float32
            public const nint MFlOutputMax = 0x1D4; // float32
            public const nint MFlRadiusScale = 0x1D8; // float32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class COpRemapTransformVisibilityToScalar {
            public const nint MNSetMethod = 0x1C0; // ParticleSetMethod_t
            public const nint MTransformInput = 0x1C8; // CParticleTransformInput
            public const nint MNFieldOutput = 0x230; // ParticleAttributeIndex_t
            public const nint MFlInputMin = 0x234; // float32
            public const nint MFlInputMax = 0x238; // float32
            public const nint MFlOutputMin = 0x23C; // float32
            public const nint MFlOutputMax = 0x240; // float32
            public const nint MFlRadius = 0x244; // float32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class COpRemapTransformVisibilityToVector {
            public const nint MNSetMethod = 0x1C0; // ParticleSetMethod_t
            public const nint MTransformInput = 0x1C8; // CParticleTransformInput
            public const nint MNFieldOutput = 0x230; // ParticleAttributeIndex_t
            public const nint MFlInputMin = 0x234; // float32
            public const nint MFlInputMax = 0x238; // float32
            public const nint MVecOutputMin = 0x23C; // 
            public const nint MVecOutputMax = 0x248; // 
            public const nint MFlRadius = 0x254; // float32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class COpLerpScalar {
            public const nint MNFieldOutput = 0x1C0; // ParticleAttributeIndex_t
            public const nint MFlOutput = 0x1C8; // CPerParticleFloatInput
            public const nint MFlStartTime = 0x320; // float32
            public const nint MFlEndTime = 0x324; // float32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class COpLerpEndCapScalar {
            public const nint MNFieldOutput = 0x1C0; // ParticleAttributeIndex_t
            public const nint MFlOutput = 0x1C4; // float32
            public const nint MFlLerpTime = 0x1C8; // float32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class COpLerpEndCapVector {
            public const nint MNFieldOutput = 0x1C0; // ParticleAttributeIndex_t
            public const nint MVecOutput = 0x1C4; // 
            public const nint MFlLerpTime = 0x1D0; // float32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class COpLerpVector {
            public const nint MNFieldOutput = 0x1C0; // ParticleAttributeIndex_t
            public const nint MVecOutput = 0x1C4; // 
            public const nint MFlStartTime = 0x1D0; // float32
            public const nint MFlEndTime = 0x1D4; // float32
            public const nint MNSetMethod = 0x1D8; // ParticleSetMethod_t
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class COpLerpToOtherAttribute {
            public const nint MFlInterpolation = 0x1C0; // CPerParticleFloatInput
            public const nint MNFieldInputFrom = 0x318; // ParticleAttributeIndex_t
            public const nint MNFieldInput = 0x31C; // ParticleAttributeIndex_t
            public const nint MNFieldOutput = 0x320; // ParticleAttributeIndex_t
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class COpRemapSpeed {
            public const nint MNFieldOutput = 0x1C0; // ParticleAttributeIndex_t
            public const nint MFlInputMin = 0x1C4; // float32
            public const nint MFlInputMax = 0x1C8; // float32
            public const nint MFlOutputMin = 0x1CC; // float32
            public const nint MFlOutputMax = 0x1D0; // float32
            public const nint MNSetMethod = 0x1D4; // ParticleSetMethod_t
            public const nint MBIgnoreDelta = 0x1D8; // bool
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class COpRemapVectortoCp {
            public const nint MNOutControlPointNumber = 0x1C0; // int32
            public const nint MNFieldInput = 0x1C4; // ParticleAttributeIndex_t
            public const nint MNParticleNumber = 0x1C8; // int32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class COpRampScalarLinear {
            public const nint MRateMin = 0x1C0; // float32
            public const nint MRateMax = 0x1C4; // float32
            public const nint MFlStartTimeMin = 0x1C8; // float32
            public const nint MFlStartTimeMax = 0x1CC; // float32
            public const nint MFlEndTimeMin = 0x1D0; // float32
            public const nint MFlEndTimeMax = 0x1D4; // float32
            public const nint MNField = 0x200; // ParticleAttributeIndex_t
            public const nint MBProportionalOp = 0x204; // bool
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class COpRampScalarSpline {
            public const nint MRateMin = 0x1C0; // float32
            public const nint MRateMax = 0x1C4; // float32
            public const nint MFlStartTimeMin = 0x1C8; // float32
            public const nint MFlStartTimeMax = 0x1CC; // float32
            public const nint MFlEndTimeMin = 0x1D0; // float32
            public const nint MFlEndTimeMax = 0x1D4; // float32
            public const nint MFlBias = 0x1D8; // float32
            public const nint MNField = 0x200; // ParticleAttributeIndex_t
            public const nint MBProportionalOp = 0x204; // bool
            public const nint MBEaseOut = 0x205; // bool
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class COpRampScalarLinearSimple {
            public const nint MRate = 0x1C0; // float32
            public const nint MFlStartTime = 0x1C4; // float32
            public const nint MFlEndTime = 0x1C8; // float32
            public const nint MNField = 0x1F0; // ParticleAttributeIndex_t
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class COpRampScalarSplineSimple {
            public const nint MRate = 0x1C0; // float32
            public const nint MFlStartTime = 0x1C4; // float32
            public const nint MFlEndTime = 0x1C8; // float32
            public const nint MNField = 0x1F0; // ParticleAttributeIndex_t
            public const nint MBEaseOut = 0x1F4; // bool
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class COpChladniWave {
            public const nint MNFieldOutput = 0x1C0; // ParticleAttributeIndex_t
            public const nint MFlInputMin = 0x1C8; // CPerParticleFloatInput
            public const nint MFlInputMax = 0x320; // CPerParticleFloatInput
            public const nint MFlOutputMin = 0x478; // CPerParticleFloatInput
            public const nint MFlOutputMax = 0x5D0; // CPerParticleFloatInput
            public const nint MVecWaveLength = 0x728; // CPerParticleVecInput
            public const nint MVecHarmonics = 0xD80; // CPerParticleVecInput
            public const nint MNSetMethod = 0x13D8; // ParticleSetMethod_t
            public const nint MNLocalSpaceControlPoint = 0x13DC; // int32
            public const nint MB3D = 0x13E0; // bool
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class COpNoise {
            public const nint MNFieldOutput = 0x1C0; // ParticleAttributeIndex_t
            public const nint MFlOutputMin = 0x1C4; // float32
            public const nint MFlOutputMax = 0x1C8; // float32
            public const nint MFl4NoiseScale = 0x1CC; // float32
            public const nint MBAdditive = 0x1D0; // bool
            public const nint MFlNoiseAnimationTimeScale = 0x1D4; // float32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class COpVectorNoise {
            public const nint MNFieldOutput = 0x1C0; // ParticleAttributeIndex_t
            public const nint MVecOutputMin = 0x1C4; // 
            public const nint MVecOutputMax = 0x1D0; // 
            public const nint MFl4NoiseScale = 0x1DC; // float32
            public const nint MBAdditive = 0x1E0; // bool
            public const nint MBOffset = 0x1E1; // bool
            public const nint MFlNoiseAnimationTimeScale = 0x1E4; // float32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class COpDecay {
            public const nint MBRopeDecay = 0x1C0; // bool
            public const nint MBForcePreserveParticleOrder = 0x1C1; // bool
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class COpDecayOffscreen {
            public const nint MFlOffscreenTime = 0x1C0; // CParticleCollectionFloatInput
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class COpEndCapTimedFreeze {
            public const nint MFlFreezeTime = 0x1C0; // CParticleCollectionFloatInput
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class COpEndCapTimedDecay {
            public const nint MFlDecayTime = 0x1C0; // float32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class COpEndCapDecay {
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class COpVelocityDecay {
            public const nint MFlMinVelocity = 0x1C0; // float32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class COpAlphaDecay {
            public const nint MFlMinAlpha = 0x1C0; // float32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class COpRadiusDecay {
            public const nint MFlMinRadius = 0x1C0; // float32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class COpDecayMaintainCount {
            public const nint MNParticlesToMaintain = 0x1C0; // int32
            public const nint MFlDecayDelay = 0x1C4; // float32
            public const nint MNSnapshotControlPoint = 0x1C8; // int32
            public const nint MBLifespanDecay = 0x1CC; // bool
            public const nint MFlScale = 0x1D0; // CParticleCollectionFloatInput
            public const nint MBKillNewest = 0x328; // bool
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class COpDecayClampCount {
            public const nint MNCount = 0x1C0; // CParticleCollectionFloatInput
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class COpCull {
            public const nint MFlCullPerc = 0x1C0; // float32
            public const nint MFlCullStart = 0x1C4; // float32
            public const nint MFlCullEnd = 0x1C8; // float32
            public const nint MFlCullExp = 0x1CC; // float32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CGeneralSpin {
            public const nint MNSpinRateDegrees = 0x1C0; // int32
            public const nint MNSpinRateMinDegrees = 0x1C4; // int32
            public const nint MFSpinRateStopTime = 0x1CC; // float32
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
        public static class COpSpin {
        }
        // Parent: CSpinUpdateBase
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class COpSpinUpdate {
        }
        // Parent: CGeneralSpin
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class COpSpinYaw {
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class COpInterpolateRadius {
            public const nint MFlStartTime = 0x1C0; // float32
            public const nint MFlEndTime = 0x1C4; // float32
            public const nint MFlStartScale = 0x1C8; // float32
            public const nint MFlEndScale = 0x1CC; // float32
            public const nint MBEaseInAndOut = 0x1D0; // bool
            public const nint MFlBias = 0x1D4; // float32
        }
    }
    // Module: pulse_system.dll
    // Classes count: 51
    // Enums count: 7
    public static class PulseSystem {
        // Alignment: 2
        // Members count: 61
        public enum PulseInstructionCodeT : short {
            Invalid = 0,
            ImmediateHalt = 1,
            ReturnVoid = 2,
            ReturnValue = 3,
            Nop = 4,
            Jump = 5,
            JumpCond = 6,
            ChunkLeap = 7,
            ChunkLeapCond = 8,
            PulseCallSync = 9,
            PulseCallAsyncFire = 10,
            CellInvoke = 11,
            LibraryInvoke = 12,
            SetVar = 13,
            GetVar = 14,
            GetConst = 15,
            SetRegisterDomainValue = 16,
            Copy = 17,
            Not = 18,
            Negate = 19,
            Add = 20,
            Sub = 21,
            Mul = 22,
            Div = 23,
            Mod = 24,
            Lt = 25,
            Lte = 26,
            Eq = 27,
            Ne = 28,
            And = 29,
            Or = 30,
            ConvertValue = 31,
            LastSerializedCode = 32,
            NegateInt = 33,
            NegateFloat = 34,
            AddInt = 35,
            AddFloat = 36,
            AddString = 37,
            SubInt = 38,
            SubFloat = 39,
            MulInt = 40,
            MulFloat = 41,
            DivInt = 42,
            DivFloat = 43,
            ModInt = 44,
            ModFloat = 45,
            LtInt = 46,
            LtFloat = 47,
            LteInt = 48,
            LteFloat = 49,
            EqBool = 50,
            EqInt = 51,
            EqFloat = 52,
            EqString = 53,
            EqEntityName = 54,
            NeBool = 55,
            NeInt = 56,
            NeFloat = 57,
            NeString = 58,
            NeEntityName = 59,
            GetConstInlineStorage = 60
        }
        // Alignment: 4
        // Members count: 2
        public enum PulseMethodCallModeT : int {
            SyncWaitForCompletion = 0,
            AsyncFireAndForget = 1
        }
        // Alignment: 4
        // Members count: 3
        public enum PulseCursorExecResultT : int {
            Succeeded = 0,
            Canceled = 1,
            Failed = 2
        }
        // Alignment: 4
        // Members count: 4
        public enum PulseCursorCancelPriorityT : int {
            None = 0,
            CancelOnSucceeded = 1,
            SoftCancel = 2,
            HardCancel = 3
        }
        // Alignment: 4
        // Members count: 19
        public enum PulseValueTypeT : int {
            PvalInvalid = -1,
            PvalBool = 0,
            PvalInt = 1,
            PvalFloat = 2,
            PvalString = 3,
            PvalVec3 = 4,
            PvalTransform = 5,
            PvalColorRgb = 6,
            PvalEhandle = 7,
            PvalResource = 8,
            PvalSndevtGuid = 9,
            PvalEntityName = 10,
            PvalSchemaPtr = 11,
            PvalTypesafeInt = 12,
            PvalCursorFlow = 13,
            PvalAny = 14,
            PvalSchemaEnum = 15,
            PvalPanoramaPanelHandle = 16,
            PvalCount = 17
        }
        // Alignment: 4
        // Members count: 5
        public enum PulseTestEnumColorT : int {
            Black = 0,
            White = 1,
            Red = 2,
            Green = 3,
            Blue = 4
        }
        // Alignment: 4
        // Members count: 3
        public enum PulseTestEnumShapeT : int {
            Circle = 100,
            Square = 200,
            Triangle = 300
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseLibraryBindings
        // MPropertyDescription
        public static class CPulseCursorFuncs {
        }
        // Parent: None
        // Fields count: 1
        public static class CPulseCellWaitForCursorsWithTagBaseCursorStateT {
            public const nint MTagName = 0x0; // CUtlSymbolLarge
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseLibraryBindings
        // MPropertyDescription
        public static class CPulseTestFuncsLibraryA {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseProvideFeatureTag
        // MPulseLibraryBindings
        public static class FakeEntityTApi {
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseRegisterInfo {
            public const nint MNReg = 0x0; // PulseRuntimeRegisterIndex_t
            public const nint MType = 0x8; // CPulseValueFullType
            public const nint MOriginName = 0x18; // CKV3MemberNameWithStorage
            public const nint MNWrittenByInstruction = 0x50; // int32
            public const nint MNLastReadByInstruction = 0x54; // int32
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseChunk {
            public const nint MInstructions = 0x0; // CUtlLeanVector< PGDInstruction_t >
            public const nint MRegisters = 0x10; // CUtlLeanVector< CPulse_RegisterInfo >
            public const nint MInstructionEditorIDs = 0x20; // CUtlLeanVector< PulseDocNodeID_t >
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseVariable {
            public const nint MName = 0x0; // CUtlSymbolLarge
            public const nint MDescription = 0x8; // CUtlString
            public const nint MType = 0x10; // CPulseValueFullType
            public const nint MDefaultValue = 0x20; // KeyValues3
            public const nint MBIsPublic = 0x32; // bool
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseConstant {
            public const nint MType = 0x0; // CPulseValueFullType
            public const nint MValue = 0x10; // KeyValues3
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulsePublicOutput {
            public const nint MName = 0x0; // CUtlSymbolLarge
            public const nint MDescription = 0x8; // CUtlString
            public const nint MParamType = 0x10; // CPulseValueFullType
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseOutputConnection {
            public const nint MSourceOutput = 0x0; // CUtlSymbolLarge
            public const nint MTargetEntity = 0x8; // CUtlSymbolLarge
            public const nint MTargetInput = 0x10; // CUtlSymbolLarge
            public const nint MParam = 0x18; // CUtlSymbolLarge
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseInvokeBinding {
            public const nint MRegisterMap = 0x0; // PulseRegisterMap_t
            public const nint MFuncName = 0x20; // CUtlSymbolLarge
            public const nint MNCellIndex = 0x28; // PulseRuntimeCellIndex_t
            public const nint MNSrcChunk = 0x2C; // PulseRuntimeChunkIndex_t
            public const nint MNSrcInstruction = 0x30; // int32
        }
        // Parent: None
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCallInfo {
            public const nint MPortName = 0x0; // CUtlSymbolLarge
            public const nint MNEditorNodeId = 0x8; // PulseDocNodeID_t
            public const nint MRegisterMap = 0x10; // PulseRegisterMap_t
            public const nint MCallMethodId = 0x30; // PulseDocNodeID_t
            public const nint MNSrcChunk = 0x34; // PulseRuntimeChunkIndex_t
            public const nint MNSrcInstruction = 0x38; // int32
        }
        // Parent: None
        // Fields count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseGraphDef {
            public const nint MDomainIdentifier = 0x8; // CUtlSymbolLarge
            public const nint MParentMapName = 0x10; // CUtlSymbolLarge
            public const nint MChunks = 0x18; // CUtlVector< CPulse_Chunk* >
            public const nint MCells = 0x30; // CUtlVector< CPulseCell_Base* >
            public const nint MVars = 0x48; // CUtlVector< CPulse_Variable >
            public const nint MPublicOutputs = 0x60; // CUtlVector< CPulse_PublicOutput >
            public const nint MInvokeBindings = 0x78; // CUtlVector< CPulse_InvokeBinding* >
            public const nint MCallInfos = 0x90; // CUtlVector< CPulse_CallInfo* >
            public const nint MConstants = 0xA8; // CUtlVector< CPulse_Constant >
            public const nint MOutputConnections = 0xC0; // CUtlVector< CPulse_OutputConnection* >
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
        public static class PulseRegisterMapT {
            public const nint MInparams = 0x0; // KeyValues3
            public const nint MOutparams = 0x10; // KeyValues3
        }
        // Parent: None
        // Fields count: 11
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class PgdInstructionT {
            public const nint MNCode = 0x0; // PulseInstructionCode_t
            public const nint MNVar = 0x4; // PulseRuntimeVarIndex_t
            public const nint MNReg0 = 0x8; // PulseRuntimeRegisterIndex_t
            public const nint MNReg1 = 0xA; // PulseRuntimeRegisterIndex_t
            public const nint MNReg2 = 0xC; // PulseRuntimeRegisterIndex_t
            public const nint MNInvokeBindingIndex = 0x10; // PulseRuntimeInvokeIndex_t
            public const nint MNChunk = 0x14; // PulseRuntimeChunkIndex_t
            public const nint MNDestInstruction = 0x18; // int32
            public const nint MNCallInfoIndex = 0x1C; // PulseRuntimeCallInfoIndex_t
            public const nint MNConstIdx = 0x20; // PulseRuntimeConstantIndex_t
            public const nint MDomainValue = 0x28; // CBufferString
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseOutflowConnection {
            public const nint MSourceOutflowName = 0x0; // CUtlSymbolLarge
            public const nint MNDestChunk = 0x8; // PulseRuntimeChunkIndex_t
            public const nint MNInstruction = 0xC; // int32
        }
        // Parent: CPulseOutflowConnection
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseResumePoint {
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCellBase {
            public const nint MNEditorNodeId = 0x8; // PulseDocNodeID_t
        }
        // Parent: CPulseCellBase
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCellBaseFlow {
        }
        // Parent: CPulseCellBaseFlow
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCellInflowBaseEntrypoint {
            public const nint MEntryChunk = 0x48; // PulseRuntimeChunkIndex_t
            public const nint MRegisterMap = 0x50; // PulseRegisterMap_t
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseRuntimeMethodArg {
            public const nint MName = 0x0; // CKV3MemberNameWithStorage
            public const nint MDescription = 0x38; // CUtlString
            public const nint MType = 0x40; // CPulseValueFullType
        }
        // Parent: CPulseCellBaseFlow
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCellBaseYieldingInflow {
        }
        // Parent: CPulseCellBase
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCellBaseValue {
        }
        // Parent: CPulseCellBaseYieldingInflow
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        // MPropertyFriendlyName
        // MPropertyDescription
        // MPulseEditorHeaderIcon
        public static class CPulseCellInflowWait {
            public const nint MWakeResume = 0x48; // CPulse_ResumePoint
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCellOutflowCycleOrderedInstanceStateT {
            public const nint MNNextIndex = 0x0; // int32
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCellOutflowCycleShuffledInstanceStateT {
            public const nint MShuffle = 0x0; // CUtlVectorFixedGrowable< uint8 >
            public const nint MNNextShuffle = 0x20; // int32
        }
        // Parent: CPulseCellBaseFlow
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CPulseCellOutflowTestRandomYesNo {
            public const nint MYes = 0x48; // CPulse_OutflowConnection
            public const nint MNo = 0x58; // CPulse_OutflowConnection
        }
        // Parent: CPulseCellBaseFlow
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CPulseCellOutflowTestExplicitYesNo {
            public const nint MYes = 0x48; // CPulse_OutflowConnection
            public const nint MNo = 0x58; // CPulse_OutflowConnection
        }
        // Parent: CPulseCellBaseValue
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CPulseCellValueTestValue50 {
        }
        // Parent: CPulseCellBaseValue
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        // MPropertyFriendlyName
        // MPropertyDescription
        // MPulseEditorHeaderIcon
        public static class CPulseCellValueRandomInt {
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCellTimelineTimelineEventT {
            public const nint MFlTimeFromPrevious = 0x0; // float32
            public const nint MBPauseForPreviousEvents = 0x4; // bool
            public const nint MBCallModeSync = 0x5; // bool
            public const nint MEventOutflow = 0x8; // CPulse_OutflowConnection
        }
        // Parent: None
        // Fields count: 7
        public static class FakeEntityT {
            public const nint MNHandle = 0x0; // PulseTestEHandle_t
            public const nint MName = 0x8; // CUtlString
            public const nint MClass = 0x10; // CUtlString
            public const nint MBDestroyed = 0x18; // bool
            public const nint MPAssociatedGraphInstance = 0x20; // CPulseGraphInstance_TestDomain*
            public const nint MBFuncWasCalled = 0x28; // bool
            public const nint MFValue = 0x2C; // float32
        }
        // Parent: None
        // Fields count: 6
        //
        // Metadata:
        // MPulseInstanceDomainInfo
        // MPulseLibraryBindings
        // MPulseDomainOptInFeatureTag
        public static class CPulseGraphInstanceTestDomain {
            public const nint MBIsRunningUnitTests = 0xD8; // bool
            public const nint MBExplicitTimeStepping = 0xD9; // bool
            public const nint MBExpectingToDestroyWithYieldedCursors = 0xDA; // bool
            public const nint MNNextValidateIndex = 0xDC; // int32
            public const nint MTracepoints = 0xE0; // CUtlVector< CUtlString >
            public const nint MBTestYesOrNoPath = 0xF8; // bool
        }
        // Parent: CPulseCellBaseFlow
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        // MPropertyFriendlyName
        public static class CPulseCellStepTestDomainTracepoint {
        }
        // Parent: CPulseCellBaseFlow
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        // MPropertyFriendlyName
        public static class CPulseCellStepTestDomainCreateFakeEntity {
        }
        // Parent: CPulseCellBaseFlow
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        // MPropertyFriendlyName
        public static class CPulseCellStepTestDomainDestroyFakeEntity {
        }
        // Parent: CPulseCellBaseFlow
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        // MPropertyFriendlyName
        // MPulseEditorHeaderText
        public static class CPulseCellStepTestDomainEntFire {
            public const nint MInput = 0x48; // CUtlString
        }
        // Parent: CPulseCellBaseValue
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        // MPropertyFriendlyName
        public static class CPulseCellValTestDomainGetEntityName {
        }
        // Parent: CPulseCellBaseValue
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        // MPropertyFriendlyName
        public static class CPulseCellValTestDomainFindEntityByName {
        }
        // Parent: CPulseCellBaseYieldingInflow
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        public static class CPulseCellTestWaitWithCursorState {
            public const nint MWakeResume = 0x48; // CPulse_ResumePoint
            public const nint MWakeCancel = 0x58; // CPulse_ResumePoint
            public const nint MWakeFail = 0x68; // CPulse_ResumePoint
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCellTestWaitWithCursorStateCursorStateT {
            public const nint FlWaitValue = 0x0; // float32
            public const nint BFailOnCancel = 0x4; // bool
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseLibraryBindings
        // MPropertyDescription
        public static class CPulseTestFuncsDerivedDomain {
        }
        // Parent: CPulseCellBaseFlow
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        public static class CPulseCellTestNoInflow {
        }
        // Parent: CPulseCellBaseFlow
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        public static class CPulseCellTestMultiInflowWithDefault {
        }
        // Parent: CPulseCellBaseFlow
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        public static class CPulseCellTestMultiInflowNoDefault {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseInstanceDomainInfo
        // MPulseLibraryBindings
        public static class CPulseGraphInstanceTurtleGraphics {
        }
        // Parent: CPulseCellBaseYieldingInflow
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCellWaitForCursorsWithTagBase {
            public const nint MNCursorsAllowedToWait = 0x48; // int32
            public const nint MWaitComplete = 0x50; // CPulse_ResumePoint
        }
        // Parent: CPulseCellWaitForCursorsWithTagBase
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        // MPropertyFriendlyName
        // MPropertyDescription
        // MPulseEditorHeaderIcon
        public static class CPulseCellWaitForCursorsWithTag {
            public const nint MBTagSelfWhenComplete = 0x60; // bool
            public const nint MNDesiredKillPriority = 0x64; // PulseCursorCancelPriority_t
        }
        // Parent: CPulseCellWaitForCursorsWithTagBase
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        // MPropertyFriendlyName
        // MPropertyDescription
        // MPulseEditorHeaderIcon
        public static class CPulseCellCursorQueue {
            public const nint MNCursorsAllowedToRunParallel = 0x60; // int32
        }
    }
    // Module: rendersystemdx11.dll
    // Classes count: 3
    // Enums count: 5
    public static class Rendersystemdx11 {
        // Alignment: 4
        // Members count: 3
        public enum RenderSlotTypeT : int {
            RenderSlotInvalid = -1,
            RenderSlotPerVertex = 0,
            RenderSlotPerInstance = 1
        }
        // Alignment: 4
        // Members count: 12
        public enum RenderBufferFlagsT : int {
            RenderBufferUsageVertexBuffer = 1,
            RenderBufferUsageIndexBuffer = 2,
            RenderBufferUsageShaderResource = 4,
            RenderBufferUsageUnorderedAccess = 8,
            RenderBufferByteaddressBuffer = 16,
            RenderBufferStructuredBuffer = 32,
            RenderBufferAppendConsumeBuffer = 64,
            RenderBufferUavCounter = 128,
            RenderBufferUavDrawIndirectArgs = 256,
            RenderBufferAccelerationStructure = 512,
            RenderBufferShaderBindingTable = 1024,
            RenderBufferPerFrameWriteOnce = 2048
        }
        // Alignment: 4
        // Members count: 13
        public enum RenderPrimitiveTypeT : int {
            RenderPrimPoints = 0,
            RenderPrimLines = 1,
            RenderPrimLinesWithAdjacency = 2,
            RenderPrimLineStrip = 3,
            RenderPrimLineStripWithAdjacency = 4,
            RenderPrimTriangles = 5,
            RenderPrimTrianglesWithAdjacency = 6,
            RenderPrimTriangleStrip = 7,
            RenderPrimTriangleStripWithAdjacency = 8,
            RenderPrimInstancedQuads = 9,
            RenderPrimHeterogenous = 10,
            RenderPrimComputeShader = 11,
            RenderPrimTypeCount = 12
        }
        // Alignment: 4
        // Members count: 4
        public enum InputLayoutVariationT : int {
            InputLayoutVariationDefault = 0,
            InputLayoutVariationStream1Instanceid = 1,
            InputLayoutVariationStream1InstanceidMorphVertId = 2,
            InputLayoutVariationMax = 3
        }
        // Alignment: 1
        // Members count: 8
        public enum RenderMultisampleTypeT : sbyte {
            RenderMultisampleInvalid = -1,
            RenderMultisampleNone = 0,
            RenderMultisample2x = 1,
            RenderMultisample4x = 2,
            RenderMultisample6x = 3,
            RenderMultisample8x = 4,
            RenderMultisample16x = 5,
            RenderMultisampleTypeCount = 6
        }
        // Parent: None
        // Fields count: 7
        public static class RenderInputLayoutFieldT {
            public const nint MPSemanticName = 0x0; // uint8[32]
            public const nint MNSemanticIndex = 0x20; // int32
            public const nint MFormat = 0x24; // uint32
            public const nint MNOffset = 0x28; // int32
            public const nint MNSlot = 0x2C; // int32
            public const nint MNSlotType = 0x30; // RenderSlotType_t
            public const nint MNInstanceStepRate = 0x34; // int32
        }
        // Parent: None
        // Fields count: 4
        public static class VsInputSignatureElementT {
            public const nint MPName = 0x0; // char[64]
            public const nint MPSemantic = 0x40; // char[64]
            public const nint MPD3dSemanticName = 0x80; // char[64]
            public const nint MND3dSemanticIndex = 0xC0; // int32
        }
        // Parent: None
        // Fields count: 1
        public static class VsInputSignatureT {
            public const nint MElems = 0x0; // CUtlVector< VsInputSignatureElement_t >
        }
    }
    // Module: resourcesystem.dll
    // Classes count: 57
    // Enums count: 2
    public static class Resourcesystem {
        // Alignment: 1
        // Members count: 2
        public enum FuseVariableAccessT : sbyte {
            Writable = 0,
            ReadOnly = 1
        }
        // Alignment: 1
        // Members count: 9
        public enum FuseVariableTypeT : sbyte {
            Invalid = 0,
            Bool = 1,
            Int8 = 2,
            Int16 = 3,
            Int32 = 4,
            Uint8 = 5,
            Uint16 = 6,
            Uint32 = 7,
            Float32 = 8
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class TestResourceT {
            public const nint MName = 0x0; // CUtlString
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeTestResourceT {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeProceduralTestResourceT {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeManifestTestResourceT {
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class ManifestTestResourceT {
            public const nint MName = 0x0; // CUtlString
            public const nint MChild = 0x8; // CStrongHandle< InfoForResourceTypeManifestTestResource_t >
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCvDataResource {
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
        public static class InfoForResourceTypeCvSoundEventScriptList {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCvSoundStackScriptList {
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
        public static class InfoForResourceTypeCvMixListResource {
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
        public static class InfoForResourceTypeCvPhysXSurfacePropertiesList {
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
        public static class InfoForResourceTypeWorldT {
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
        public static class InfoForResourceTypeCdotaPatchNotesList {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCdotaNovelsList {
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
        public static class InfoForResourceTypeCdacGameDefsData {
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
        public static class InfoForResourceTypeCcsgoEconItem {
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
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class ConstantInfoT {
            public const nint MName = 0x0; // CUtlString
            public const nint MNameToken = 0x8; // CUtlStringToken
            public const nint MFlValue = 0xC; // float32
        }
        // Parent: None
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VariableInfoT {
            public const nint MName = 0x0; // CUtlString
            public const nint MNameToken = 0x8; // CUtlStringToken
            public const nint MNIndex = 0xC; // FuseVariableIndex_t
            public const nint MNNumComponents = 0xE; // uint8
            public const nint MEVarType = 0xF; // FuseVariableType_t
            public const nint MEAccess = 0x10; // FuseVariableAccess_t
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FunctionInfoT {
            public const nint MName = 0x8; // CUtlString
            public const nint MNameToken = 0x10; // CUtlStringToken
            public const nint MNParamCount = 0x14; // int32
            public const nint MNIndex = 0x18; // FuseFunctionIndex_t
            public const nint MBIsPure = 0x1A; // bool
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CFuseProgram {
            public const nint MProgramBuffer = 0x0; // CUtlVector< uint8 >
            public const nint MVariablesRead = 0x18; // CUtlVector< FuseVariableIndex_t >
            public const nint MVariablesWritten = 0x30; // CUtlVector< FuseVariableIndex_t >
            public const nint MNMaxTempVarsUsed = 0x48; // int32
        }
        // Parent: None
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CFuseSymbolTable {
            public const nint MConstants = 0x0; // CUtlVector< ConstantInfo_t >
            public const nint MVariables = 0x18; // CUtlVector< VariableInfo_t >
            public const nint MFunctions = 0x30; // CUtlVector< FunctionInfo_t >
            public const nint MConstantMap = 0x48; // CUtlHashtable< CUtlStringToken, int32 >
            public const nint MVariableMap = 0x68; // CUtlHashtable< CUtlStringToken, int32 >
            public const nint MFunctionMap = 0x88; // CUtlHashtable< CUtlStringToken, int32 >
        }
        // Parent: None
        // Fields count: 2
        public static class AabbT {
            public const nint MVMinBounds = 0x0; // 
            public const nint MVMaxBounds = 0xC; // 
        }
        // Parent: None
        // Fields count: 2
        public static class PackedAabbT {
            public const nint MNPackedMin = 0x0; // uint32
            public const nint MNPackedMax = 0x4; // uint32
        }
        // Parent: None
        // Fields count: 4
        public static class FourQuaternions {
            public const nint X = 0x0; // fltx4
            public const nint Y = 0x10; // fltx4
            public const nint Z = 0x20; // fltx4
            public const nint W = 0x30; // fltx4
        }
    }
    // Module: scenefilecache.dll
    // Classes count: 0
    // Enums count: 0
    public static class Scenefilecache {
    }
    // Module: scenesystem.dll
    // Classes count: 9
    // Enums count: 1
    public static class Scenesystem {
        // Alignment: 1
        // Members count: 4
        public enum DisableShadowsT : sbyte {
            KDisableShadowsNone = 0,
            KDisableShadowsAll = 1,
            KDisableShadowsBaked = 2,
            KDisableShadowsRealtime = 3
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CssdsEndFrameViewInfo {
            public const nint MNViewId = 0x0; // uint64
            public const nint MViewName = 0x8; // CUtlString
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CssdsMsgEndFrame {
            public const nint MViews = 0x0; // CUtlVector< CSSDSEndFrameViewInfo >
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class SceneViewIdT {
            public const nint MNViewId = 0x0; // uint64
            public const nint MNFrameCount = 0x8; // uint64
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CssdsMsgViewRender {
            public const nint MViewId = 0x0; // SceneViewId_t
            public const nint MViewName = 0x10; // CUtlString
        }
        // Parent: None
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CssdsMsgLayerBase {
            public const nint MViewId = 0x0; // SceneViewId_t
            public const nint MViewName = 0x10; // CUtlString
            public const nint MNLayerIndex = 0x18; // int32
            public const nint MNLayerId = 0x20; // uint64
            public const nint MLayerName = 0x28; // CUtlString
            public const nint MDisplayText = 0x30; // CUtlString
        }
        // Parent: None
        // Fields count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CssdsMsgViewTarget {
            public const nint MName = 0x0; // CUtlString
            public const nint MTextureId = 0x8; // uint64
            public const nint MNWidth = 0x10; // int32
            public const nint MNHeight = 0x14; // int32
            public const nint MNRequestedWidth = 0x18; // int32
            public const nint MNRequestedHeight = 0x1C; // int32
            public const nint MNNumMipLevels = 0x20; // int32
            public const nint MNDepth = 0x24; // int32
            public const nint MNMultisampleNumSamples = 0x28; // int32
            public const nint MNFormat = 0x2C; // int32
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CssdsMsgViewTargetList {
            public const nint MViewId = 0x0; // SceneViewId_t
            public const nint MViewName = 0x10; // CUtlString
            public const nint MTargets = 0x18; // CUtlVector< CSSDSMsg_ViewTarget >
        }
        // Parent: CssdsMsgLayerBase
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CssdsMsgPreLayer {
        }
        // Parent: CssdsMsgLayerBase
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CssdsMsgPostLayer {
        }
    }
    // Module: schemasystem.dll
    // Classes count: 6
    // Enums count: 2
    public static class Schemasystem {
        // Alignment: 4
        // Members count: 3
        public enum ThreeStateT : int {
            TrsFalse = 0,
            TrsTrue = 1,
            TrsNone = 2
        }
        // Alignment: 1
        // Members count: 81
        public enum FieldtypeT : sbyte {
            FieldVoid = 0,
            FieldFloat32 = 1,
            FieldString = 2,
            FieldVector = 3,
            FieldQuaternion = 4,
            FieldInt32 = 5,
            FieldBoolean = 6,
            FieldInt16 = 7,
            FieldCharacter = 8,
            FieldColor32 = 9,
            FieldEmbedded = 10,
            FieldCustom = 11,
            FieldClassptr = 12,
            FieldEhandle = 13,
            FieldPositionVector = 14,
            FieldTime = 15,
            FieldTick = 16,
            FieldSoundname = 17,
            FieldInput = 18,
            FieldFunction = 19,
            FieldVmatrix = 20,
            FieldVmatrixWorldspace = 21,
            FieldMatrix3x4Worldspace = 22,
            FieldInterval = 23,
            FieldUnused = 24,
            FieldVector2d = 25,
            FieldInt64 = 26,
            FieldVector4d = 27,
            FieldResource = 28,
            FieldTypeunknown = 29,
            FieldCstring = 30,
            FieldHscript = 31,
            FieldVariant = 32,
            FieldUint64 = 33,
            FieldFloat64 = 34,
            FieldPositiveintegerOrNull = 35,
            FieldHscriptNewInstance = 36,
            FieldUint32 = 37,
            FieldUtlstringtoken = 38,
            FieldQangle = 39,
            FieldNetworkOriginCellQuantizedVector = 40,
            FieldHmaterial = 41,
            FieldHmodel = 42,
            FieldNetworkQuantizedVector = 43,
            FieldNetworkQuantizedFloat = 44,
            FieldDirectionVectorWorldspace = 45,
            FieldQangleWorldspace = 46,
            FieldQuaternionWorldspace = 47,
            FieldHscriptLightbinding = 48,
            FieldV8Value = 49,
            FieldV8Object = 50,
            FieldV8Array = 51,
            FieldV8CallbackInfo = 52,
            FieldUtlstring = 53,
            FieldNetworkOriginCellQuantizedPositionVector = 54,
            FieldHrendertexture = 55,
            FieldHparticlesystemdefinition = 56,
            FieldUint8 = 57,
            FieldUint16 = 58,
            FieldCtransform = 59,
            FieldCtransformWorldspace = 60,
            FieldHpostprocessing = 61,
            FieldMatrix3x4 = 62,
            FieldShim = 63,
            FieldCmotiontransform = 64,
            FieldCmotiontransformWorldspace = 65,
            FieldAttachmentHandle = 66,
            FieldAmmoIndex = 67,
            FieldConditionId = 68,
            FieldAiScheduleBits = 69,
            FieldModifierHandle = 70,
            FieldRotationVector = 71,
            FieldRotationVectorWorldspace = 72,
            FieldHvdata = 73,
            FieldScale32 = 74,
            FieldStringAndToken = 75,
            FieldEngineTime = 76,
            FieldEngineTick = 77,
            FieldWorldGroupId = 78,
            FieldGlobalsymbol = 79,
            FieldTypecount = 80
        }
        // Parent: None
        // Fields count: 22
        public static class CSchemaSystemInternalRegistration {
            public const nint MVector2D = 0x0; // Vector2D
            public const nint MVector = 0x8; // 
            public const nint MVectorAligned = 0x20; // VectorAligned
            public const nint MQuaternion = 0x30; // Quaternion
            public const nint MQAngle = 0x40; // QAngle
            public const nint MRotationVector = 0x4C; // RotationVector
            public const nint MRadianEuler = 0x58; // RadianEuler
            public const nint MDegreeEuler = 0x64; // DegreeEuler
            public const nint MQuaternionStorage = 0x70; // QuaternionStorage
            public const nint MMatrix3x4T = 0x80; // matrix3x4_t
            public const nint MMatrix3x4aT = 0xB0; // matrix3x4a_t
            public const nint MColor = 0xE0; // Color
            public const nint MVector4D = 0xE4; // Vector4D
            public const nint MCTransform = 0x100; // CTransform
            public const nint MPKeyValues = 0x120; // KeyValues*
            public const nint MCUtlBinaryBlock = 0x128; // CUtlBinaryBlock
            public const nint MCUtlString = 0x140; // CUtlString
            public const nint MCUtlSymbol = 0x148; // CUtlSymbol
            public const nint MStringToken = 0x14C; // CUtlStringToken
            public const nint MStringTokenWithStorage = 0x150; // CUtlStringTokenWithStorage
            public const nint MResourceTypes = 0x168; // CResourceArray< CResourcePointer< CResourceString > >
            public const nint MKv3 = 0x170; // KeyValues3
        }
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
        public static class CExampleSchemaVDataMonomorphic {
            public const nint MNExample1 = 0x0; // int32
            public const nint MNExample2 = 0x4; // int32
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CExampleSchemaVDataPolymorphicBase {
            public const nint MNBase = 0x8; // int32
        }
        // Parent: CExampleSchemaVDataPolymorphicBase
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CExampleSchemaVDataPolymorphicDerivedA {
            public const nint MNDerivedA = 0x10; // int32
        }
        // Parent: CExampleSchemaVDataPolymorphicBase
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CExampleSchemaVDataPolymorphicDerivedB {
            public const nint MNDerivedB = 0x10; // int32
        }
    }
    // Module: server.dll
    // Classes count: 233
    // Enums count: 128
    public static class Server {
        // Alignment: 4
        // Members count: 19
        public enum NavAttributeEnum : int {
            NavMeshAvoid = 128,
            NavMeshStairs = 4096,
            NavMeshNonZup = 32768,
            NavMeshShortHeight = 65536,
            NavMeshCrouch = 65536,
            NavMeshJump = 2,
            NavMeshPrecise = 4,
            NavMeshNoJump = 8,
            NavMeshStop = 16,
            NavMeshRun = 32,
            NavMeshWalk = 64,
            NavMeshTransient = 256,
            NavMeshDontHide = 512,
            NavMeshStand = 1024,
            NavMeshNoHostages = 2048,
            NavMeshNoMerge = 8192,
            NavMeshObstacleTop = 16384,
            NavAttrFirstGameIndex = 19,
            NavAttrLastIndex = 31
        }
        // Alignment: 4
        // Members count: 5
        public enum NavDirType : int {
            North = 0,
            East = 1,
            South = 2,
            West = 3,
            NumNavDirTypeDirections = 4
        }
        // Alignment: 1
        // Members count: 3
        public enum SequenceFinishNotifyStateT : sbyte {
            EDoNotNotify = 0,
            ENotifyWhenFinished = 1,
            ENotifyTriggered = 2
        }
        // Alignment: 4
        // Members count: 3
        public enum PointTemplateOwnerSpawnGroupTypeT : int {
            InsertIntoPointTemplateSpawnGroup = 0,
            InsertIntoCurrentlyActiveSpawnGroup = 1,
            InsertIntoNewlyCreatedSpawnGroup = 2
        }
        // Alignment: 4
        // Members count: 2
        public enum PointTemplateClientOnlyEntityBehaviorT : int {
            CreateForCurrentlyConnectedClientsOnly = 0,
            CreateForClientsWhoConnectLater = 1
        }
        // Alignment: 4
        // Members count: 4
        public enum PerformanceModeT : int {
            PmNormal = 0,
            PmNoGibs = 1,
            PmFullGibs = 2,
            PmReducedGibs = 3
        }
        // Alignment: 4
        // Members count: 4
        public enum AmmoPositionT : int {
            AmmoPositionInvalid = -1,
            AmmoPositionPrimary = 0,
            AmmoPositionSecondary = 1,
            AmmoPositionCount = 2
        }
        // Alignment: 4
        // Members count: 3
        public enum ChatIgnoreTypeT : int {
            ChatIgnoreNone = 0,
            ChatIgnoreAll = 1,
            ChatIgnoreTeam = 2
        }
        // Alignment: 1
        // Members count: 3
        public enum FixAngleSetT : sbyte {
            None = 0,
            Absolute = 1,
            Relative = 2
        }
        // Alignment: 4
        // Members count: 4
        public enum CommandExecModeT : int {
            ExecManual = 0,
            ExecLevelstart = 1,
            ExecPeriodic = 2,
            ExecModesCount = 3
        }
        // Alignment: 4
        // Members count: 2
        public enum CommandEntitySpecTypeT : int {
            SpecSearch = 0,
            SpecTypesCount = 1
        }
        // Alignment: 4
        // Members count: 43
        public enum GameAnimEventIndexT : int {
            AeEmpty = 0,
            AeClPlaysound = 1,
            AeClPlaysoundAttachment = 2,
            AeClPlaysoundPosition = 3,
            AeSvPlaysound = 4,
            AeClStopsound = 5,
            AeClPlaysoundLooping = 6,
            AeClCreateParticleEffect = 7,
            AeClStopParticleEffect = 8,
            AeClCreateParticleEffectCfg = 9,
            AeSvCreateParticleEffectCfg = 10,
            AeSvStopParticleEffect = 11,
            AeFootstep = 12,
            AeRagdoll = 13,
            AeClStopRagdollControl = 14,
            AeClEnableBodygroup = 15,
            AeClDisableBodygroup = 16,
            AeBodygroupSetValue = 17,
            AeClBodygroupSetValueCmodelWpn = 18,
            AeWeaponPerformAttack = 19,
            AeFireInput = 20,
            AeClClothAttr = 21,
            AeClClothGroundOffset = 22,
            AeClClothStiffen = 23,
            AeClClothEffect = 24,
            AeClCreateAnimScopeProp = 25,
            AePulseGraph = 26,
            AePulseGraphLookat = 27,
            AePulseGraphAimat = 28,
            AePulseGraphIklockleftarm = 29,
            AePulseGraphIklockrightarm = 30,
            AeClWeaponTransitionIntoHand = 31,
            AeClBodygroupSetToClip = 32,
            AeClBodygroupSetToNextclip = 33,
            AeSvShowSilencer = 34,
            AeSvAttachSilencerComplete = 35,
            AeSvHideSilencer = 36,
            AeSvDetachSilencerComplete = 37,
            AeClEjectMag = 38,
            AeWpnCompleteReload = 39,
            AeWpnHealthshotInject = 40,
            AeClC4ScreenText = 41,
            AeGrenadeThrowComplete = 42
        }
        // Alignment: 4
        // Members count: 7
        public enum ObserverModeT : int {
            ObsModeNone = 0,
            ObsModeFixed = 1,
            ObsModeInEye = 2,
            ObsModeChase = 3,
            ObsModeRoaming = 4,
            ObsModeDirected = 5,
            NumObserverModes = 6
        }
        // Alignment: 4
        // Members count: 3
        public enum ObserverInterpStateT : int {
            ObserverInterpNone = 0,
            ObserverInterpTraveling = 1,
            ObserverInterpSettling = 2
        }
        // Alignment: 4
        // Members count: 27
        public enum RumbleEffectT : int {
            RumbleInvalid = -1,
            RumbleStopAll = 0,
            RumblePistol = 1,
            Rumble357 = 2,
            RumbleSmg1 = 3,
            RumbleAr2 = 4,
            RumbleShotgunSingle = 5,
            RumbleShotgunDouble = 6,
            RumbleAr2AltFire = 7,
            RumbleRpgMissile = 8,
            RumbleCrowbarSwing = 9,
            RumbleAirboatGun = 10,
            RumbleJeepEngineLoop = 11,
            RumbleFlatLeft = 12,
            RumbleFlatRight = 13,
            RumbleFlatBoth = 14,
            RumbleDmgLow = 15,
            RumbleDmgMed = 16,
            RumbleDmgHigh = 17,
            RumbleFallLong = 18,
            RumbleFallShort = 19,
            RumblePhyscannonOpen = 20,
            RumblePhyscannonPunt = 21,
            RumblePhyscannonLow = 22,
            RumblePhyscannonMedium = 23,
            RumblePhyscannonHigh = 24,
            NumRumbleEffects = 25
        }
        // Alignment: 4
        // Members count: 25
        public enum WeaponSoundT : int {
            WeaponSoundEmpty = 0,
            WeaponSoundSecondaryEmpty = 1,
            WeaponSoundSingle = 2,
            WeaponSoundSecondaryAttack = 3,
            WeaponSoundMeleeMiss = 4,
            WeaponSoundMeleeHit = 5,
            WeaponSoundMeleeHitWorld = 6,
            WeaponSoundMeleeHitPlayer = 7,
            WeaponSoundMeleeHitNpc = 8,
            WeaponSoundSpecial1 = 9,
            WeaponSoundSpecial2 = 10,
            WeaponSoundSpecial3 = 11,
            WeaponSoundNearlyempty = 12,
            WeaponSoundImpact = 13,
            WeaponSoundReflect = 14,
            WeaponSoundSecondaryImpact = 15,
            WeaponSoundSecondaryReflect = 16,
            WeaponSoundReload = 17,
            WeaponSoundSingleAccurate = 18,
            WeaponSoundZoomIn = 19,
            WeaponSoundZoomOut = 20,
            WeaponSoundMousePressed = 21,
            WeaponSoundDrop = 22,
            WeaponSoundRadioUse = 23,
            WeaponSoundNumTypes = 24
        }
        // Alignment: 4
        // Members count: 3
        public enum AmmoFlagsT : int {
            AmmoForceDropIfCarried = 1,
            AmmoReserveStaysWithWeapon = 2,
            AmmoFlagMax = 2
        }
        // Alignment: 4
        // Members count: 15
        public enum TakeDamageFlagsT : int {
            DflagNone = 0,
            DflagSuppressHealthChanges = 1,
            DflagSuppressPhysicsForce = 2,
            DflagSuppressEffects = 4,
            DflagPreventDeath = 8,
            DflagForceDeath = 16,
            DflagAlwaysGib = 32,
            DflagNeverGib = 64,
            DflagRemoveNoRagdoll = 128,
            DflagSuppressDamageModification = 256,
            DflagAlwaysFireDamageEvents = 512,
            DflagRadiusDmg = 1024,
            DmgLastdflag = 1024,
            DflagIgnoreArmor = 2048,
            DflagSuppressUtilremove = 4096
        }
        // Alignment: 4
        // Members count: 24
        public enum DamageTypesT : int {
            DmgGeneric = 0,
            DmgCrush = 1,
            DmgBullet = 2,
            DmgSlash = 4,
            DmgBurn = 8,
            DmgVehicle = 16,
            DmgFall = 32,
            DmgBlast = 64,
            DmgClub = 128,
            DmgShock = 256,
            DmgSonic = 512,
            DmgEnergybeam = 1024,
            DmgDrown = 16384,
            DmgPoison = 32768,
            DmgRadiation = 65536,
            DmgDrownrecover = 131072,
            DmgAcid = 262144,
            DmgPhysgun = 1048576,
            DmgDissolve = 2097152,
            DmgBlastSurface = 4194304,
            DmgBuckshot = 16777216,
            DmgLastgenericflag = 16777216,
            DmgHeadshot = 33554432,
            DmgDangerzone = 67108864
        }
        // Alignment: 4
        // Members count: 17
        public enum BaseExplosionTypesT : int {
            ExplosionTypeDefault = 0,
            ExplosionTypeGrenade = 1,
            ExplosionTypeMolotov = 2,
            ExplosionTypeFireworks = 3,
            ExplosionTypeGascan = 4,
            ExplosionTypeGascylinder = 5,
            ExplosionTypeExplosivebarrel = 6,
            ExplosionTypeElectrical = 7,
            ExplosionTypeEmp = 8,
            ExplosionTypeShrapnel = 9,
            ExplosionTypeSmokegrenade = 10,
            ExplosionTypeFlashbang = 11,
            ExplosionTypeTripmine = 12,
            ExplosionTypeIce = 13,
            ExplosionTypeNone = 14,
            ExplosionTypeCustom = 15,
            ExplosionTypeCount = 16
        }
        // Alignment: 4
        // Members count: 6
        public enum HierarchyTypeT : int {
            HierarchyNone = 0,
            HierarchyBoneMerge = 1,
            HierarchyAttachment = 2,
            HierarchyAbsorigin = 3,
            HierarchyBone = 4,
            HierarchyTypeCount = 5
        }
        // Alignment: 4
        // Members count: 3
        public enum CanPlaySequenceT : int {
            CannotPlay = 0,
            CanPlayNow = 1,
            CanPlayEnqueued = 2
        }
        // Alignment: 4
        // Members count: 6
        public enum ScriptedMoveToT : int {
            CineMovetoWait = 0,
            CineMovetoWalk = 1,
            CineMovetoRun = 2,
            CineMovetoCustom = 3,
            CineMovetoTeleport = 4,
            CineMovetoWaitFacing = 5
        }
        // Alignment: 4
        // Members count: 4
        public enum ScriptedOnDeathT : int {
            SsOndeathNotApplicable = -1,
            SsOndeathUndefined = 0,
            SsOndeathRagdoll = 1,
            SsOndeathAnimatedDeath = 2
        }
        // Alignment: 4
        // Members count: 7
        public enum IChoreoServicesScriptStateT : int {
            ScriptPlaying = 0,
            ScriptWait = 1,
            ScriptPostIdle = 2,
            ScriptCleanup = 3,
            ScriptWalkToMark = 4,
            ScriptRunToMark = 5,
            ScriptCustomMoveToMark = 6
        }
        // Alignment: 4
        // Members count: 7
        public enum IChoreoServicesChoreoStateT : int {
            StatePreScript = 0,
            StateWaitForScript = 1,
            StateWalkToMark = 2,
            StateSynchronizeScript = 3,
            StatePlayScript = 4,
            StatePlayScriptPostIdle = 5,
            StatePlayScriptPostIdleDone = 6
        }
        // Alignment: 8
        // Members count: 21
        public enum InputBitMaskT : long {
            InNone = 0,
            InAll = -1,
            InAttack = 1,
            InJump = 2,
            InDuck = 4,
            InForward = 8,
            InBack = 16,
            InUse = 32,
            InTurnleft = 128,
            InTurnright = 256,
            InMoveleft = 512,
            InMoveright = 1024,
            InAttack2 = 2048,
            InReload = 8192,
            InSpeed = 65536,
            InJoyautosprint = 131072,
            InFirstModSpecificBit = 4294967296,
            InUseorreload = 4294967296,
            InScore = 8589934592,
            InZoom = 17179869184,
            InLookAtWeapon = 34359738368
        }
        // Alignment: 4
        // Members count: 9
        public enum EInButtonState : int {
            InButtonUp = 0,
            InButtonDown = 1,
            InButtonDownUp = 2,
            InButtonUpDown = 3,
            InButtonUpDownUp = 4,
            InButtonDownUpDown = 5,
            InButtonDownUpDownUp = 6,
            InButtonUpDownUpDown = 7,
            InButtonStateCount = 8
        }
        // Alignment: 4
        // Members count: 6
        public enum ShakeCommandT : int {
            ShakeStart = 0,
            ShakeStop = 1,
            ShakeAmplitude = 2,
            ShakeFrequency = 3,
            ShakeStartRumbleonly = 4,
            ShakeStartNorumble = 5
        }
        // Alignment: 4
        // Members count: 5
        public enum TimelineCompressionT : int {
            TimelineCompressionSum = 0,
            TimelineCompressionCountPerInterval = 1,
            TimelineCompressionAverage = 2,
            TimelineCompressionAverageBlend = 3,
            TimelineCompressionTotal = 4
        }
        // Alignment: 8
        // Members count: 39
        public enum DebugOverlayBitsT : long {
            OverlayTextBit = 1,
            OverlayNameBit = 2,
            OverlayBboxBit = 4,
            OverlayPivotBit = 8,
            OverlayMessageBit = 16,
            OverlayAbsboxBit = 32,
            OverlayRboxBit = 64,
            OverlayShowBlockslos = 128,
            OverlayAttachmentsBit = 256,
            OverlayInterpolatedAttachmentsBit = 512,
            OverlayInterpolatedPivotBit = 1024,
            OverlaySkeletonBit = 2048,
            OverlayInterpolatedSkeletonBit = 4096,
            OverlayTriggerBoundsBit = 8192,
            OverlayHitboxBit = 16384,
            OverlayInterpolatedHitboxBit = 32768,
            OverlayAutoaimBit = 65536,
            OverlayNpcSelectedBit = 131072,
            OverlayJointInfoBit = 262144,
            OverlayNpcRouteBit = 524288,
            OverlayVisibilityTracesBit = 1048576,
            OverlayNpcEnemiesBit = 4194304,
            OverlayNpcConditionsBit = 8388608,
            OverlayNpcCombatBit = 16777216,
            OverlayNpcTaskBit = 33554432,
            OverlayNpcBodylocations = 67108864,
            OverlayNpcViewconeBit = 134217728,
            OverlayNpcKillBit = 268435456,
            OverlayWcChangeEntity = 536870912,
            OverlayBuddhaMode = 1073741824,
            OverlayNpcSteeringRegulations = 2147483648,
            OverlayNpcTaskTextBit = 4294967296,
            OverlayPropDebug = 8589934592,
            OverlayNpcRelationBit = 17179869184,
            OverlayViewoffset = 34359738368,
            OverlayVcollideWireframeBit = 68719476736,
            OverlayActornameBit = 274877906944,
            OverlayNpcConditionsTextBit = 549755813888,
            OverlayNpcAbilityRangeDebugBit = 1099511627776
        }
        // Alignment: 1
        // Members count: 14
        public enum MoveTypeT : sbyte {
            MovetypeNone = 0,
            MovetypeObsolete = 1,
            MovetypeWalk = 2,
            MovetypeFly = 3,
            MovetypeFlygravity = 4,
            MovetypeVphysics = 5,
            MovetypePush = 6,
            MovetypeNoclip = 7,
            MovetypeObserver = 8,
            MovetypeLadder = 9,
            MovetypeCustom = 10,
            MovetypeLast = 11,
            MovetypeInvalid = 11,
            MovetypeMaxBits = 5
        }
        // Alignment: 1
        // Members count: 6
        public enum MoveCollideT : sbyte {
            MovecollideDefault = 0,
            MovecollideFlyBounce = 1,
            MovecollideFlyCustom = 2,
            MovecollideFlySlide = 3,
            MovecollideCount = 4,
            MovecollideMaxBits = 3
        }
        // Alignment: 1
        // Members count: 9
        public enum SolidTypeT : sbyte {
            SolidNone = 0,
            SolidBsp = 1,
            SolidBbox = 2,
            SolidObb = 3,
            SolidSphere = 4,
            SolidPoint = 5,
            SolidVphysics = 6,
            SolidCapsule = 7,
            SolidLast = 8
        }
        // Alignment: 4
        // Members count: 3
        public enum BrushSoliditiesE : int {
            BrushsolidToggle = 0,
            BrushsolidNever = 1,
            BrushsolidAlways = 2
        }
        // Alignment: 1
        // Members count: 13
        public enum RenderModeT : sbyte {
            KRenderNormal = 0,
            KRenderTransColor = 1,
            KRenderTransTexture = 2,
            KRenderGlow = 3,
            KRenderTransAlpha = 4,
            KRenderTransAdd = 5,
            KRenderEnvironmental = 6,
            KRenderTransAddFrameBlend = 7,
            KRenderTransAlphaAdd = 8,
            KRenderWorldGlow = 9,
            KRenderNone = 10,
            KRenderDevVisualizer = 11,
            KRenderModeCount = 12
        }
        // Alignment: 1
        // Members count: 20
        public enum RenderFxT : sbyte {
            KRenderFxNone = 0,
            KRenderFxPulseSlow = 1,
            KRenderFxPulseFast = 2,
            KRenderFxPulseSlowWide = 3,
            KRenderFxPulseFastWide = 4,
            KRenderFxFadeSlow = 5,
            KRenderFxFadeFast = 6,
            KRenderFxSolidSlow = 7,
            KRenderFxSolidFast = 8,
            KRenderFxStrobeSlow = 9,
            KRenderFxStrobeFast = 10,
            KRenderFxStrobeFaster = 11,
            KRenderFxFlickerSlow = 12,
            KRenderFxFlickerFast = 13,
            KRenderFxNoDissipation = 14,
            KRenderFxFadeOut = 15,
            KRenderFxFadeIn = 16,
            KRenderFxPulseFastWider = 17,
            KRenderFxGlowShell = 18,
            KRenderFxMax = 19
        }
        // Alignment: 4
        // Members count: 2
        public enum CrrResponseResponseEnumT : int {
            MaxResponseName = 192,
            MaxRuleName = 128
        }
        // Alignment: 4
        // Members count: 3
        public enum LessonPanelLayoutFileTypesT : int {
            LayoutHandDefault = 0,
            LayoutWorldDefault = 1,
            LayoutCustom = 2
        }
        // Alignment: 4
        // Members count: 5
        public enum TouchT : int {
            TouchNone = 0,
            TouchPlayerOnly = 1,
            TouchNpcOnly = 2,
            TouchPlayerOrNpc = 3,
            TouchPlayerOrNpcOrPhysicsprop = 4
        }
        // Alignment: 4
        // Members count: 4
        public enum ScriptedMoveTypeT : int {
            ScriptedMovetypeNone = 0,
            ScriptedMovetypeToWithDuration = 1,
            ScriptedMovetypeToWithMovespeed = 2,
            ScriptedMovetypeSweepToAtMovementSpeed = 3
        }
        // Alignment: 4
        // Members count: 3
        public enum ForcedCrouchStateT : int {
            ForcedcrouchNone = 0,
            ForcedcrouchCrouched = 1,
            ForcedcrouchUncrouched = 2
        }
        // Alignment: 4
        // Members count: 12
        public enum HullT : int {
            HullHuman = 0,
            HullSmallCentered = 1,
            HullWideHuman = 2,
            HullTiny = 3,
            HullMedium = 4,
            HullTinyCentered = 5,
            HullLarge = 6,
            HullLargeCentered = 7,
            HullMediumTall = 8,
            HullSmall = 9,
            NumHulls = 10,
            HullNone = 11
        }
        // Alignment: 4
        // Members count: 1
        public enum NavpropertiesT : int {
            NavIgnore = 1
        }
        // Alignment: 4
        // Members count: 4
        public enum CLogicBranchListLogicBranchListenerLastStateT : int {
            LogicBranchListenerNotInit = 0,
            LogicBranchListenerAllTrue = 1,
            LogicBranchListenerAllFalse = 2,
            LogicBranchListenerMixed = 3
        }
        // Alignment: 4
        // Members count: 3
        public enum EntFinderMethodT : int {
            EntFindMethodNearest = 0,
            EntFindMethodFarthest = 1,
            EntFindMethodRandom = 2
        }
        // Alignment: 4
        // Members count: 2
        public enum ValueRemapperInputTypeT : int {
            InputTypePlayerShootPosition = 0,
            InputTypePlayerShootPositionAroundAxis = 1
        }
        // Alignment: 4
        // Members count: 4
        public enum ValueRemapperOutputTypeT : int {
            OutputTypeAnimationCycle = 0,
            OutputTypeRotationX = 1,
            OutputTypeRotationY = 2,
            OutputTypeRotationZ = 3
        }
        // Alignment: 4
        // Members count: 2
        public enum ValueRemapperHapticsTypeT : int {
            HaticsTypeDefault = 0,
            HaticsTypeNone = 1
        }
        // Alignment: 4
        // Members count: 4
        public enum ValueRemapperMomentumTypeT : int {
            MomentumTypeNone = 0,
            MomentumTypeFriction = 1,
            MomentumTypeSpringTowardSnapValue = 2,
            MomentumTypeSpringAwayFromSnapValue = 3
        }
        // Alignment: 4
        // Members count: 2
        public enum ValueRemapperRatchetTypeT : int {
            RatchetTypeAbsolute = 0,
            RatchetTypeEachEngage = 1
        }
        // Alignment: 4
        // Members count: 3
        public enum PointWorldTextJustifyHorizontalT : int {
            PointWorldTextJustifyHorizontalLeft = 0,
            PointWorldTextJustifyHorizontalCenter = 1,
            PointWorldTextJustifyHorizontalRight = 2
        }
        // Alignment: 4
        // Members count: 3
        public enum PointWorldTextJustifyVerticalT : int {
            PointWorldTextJustifyVerticalBottom = 0,
            PointWorldTextJustifyVerticalCenter = 1,
            PointWorldTextJustifyVerticalTop = 2
        }
        // Alignment: 4
        // Members count: 2
        public enum PointWorldTextReorientModeT : int {
            PointWorldTextReorientNone = 0,
            PointWorldTextReorientAroundUp = 1
        }
        // Alignment: 4
        // Members count: 3
        public enum DoorCheckE : int {
            DoorCheckForward = 0,
            DoorCheckBackward = 1,
            DoorCheckFull = 2
        }
        // Alignment: 4
        // Members count: 4
        public enum PropDoorRotatingSpawnPosT : int {
            DoorSpawnClosed = 0,
            DoorSpawnOpenForward = 1,
            DoorSpawnOpenBack = 2,
            DoorSpawnAjar = 3
        }
        // Alignment: 4
        // Members count: 3
        public enum PropDoorRotatingOpenDirectionE : int {
            DoorRotatingOpenBothWays = 0,
            DoorRotatingOpenForward = 1,
            DoorRotatingOpenBackward = 2
        }
        // Alignment: 4
        // Members count: 2
        public enum SceneOnPlayerDeathT : int {
            SceneOnplayerdeathDoNothing = 0,
            SceneOnplayerdeathCancel = 1
        }
        // Alignment: 4
        // Members count: 2
        public enum ScriptedConflictResponseT : int {
            SsConflictEnqueue = 0,
            SsConflictInterrupt = 1
        }
        // Alignment: 4
        // Members count: 3
        public enum TrainCode : int {
            TrainSafe = 0,
            TrainBlocking = 1,
            TrainFollowing = 2
        }
        // Alignment: 4
        // Members count: 5
        public enum NpcFollowFormationT : int {
            Default = -1,
            CloseCircle = 0,
            WideCircle = 1,
            MediumCircle = 5,
            Sidekick = 6
        }
        // Alignment: 4
        // Members count: 3
        public enum NpcLookTypeT : int {
            Chest = 0,
            Head = 1,
            Eyes = 2
        }
        // Alignment: 4
        // Members count: 3
        public enum SoundEventStartTypeT : int {
            SoundeventStartPlayer = 0,
            SoundeventStartWorld = 1,
            SoundeventStartEntity = 2
        }
        // Alignment: 4
        // Members count: 8
        public enum ToggleState : int {
            TsAtTop = 0,
            TsAtBottom = 1,
            TsGoingUp = 2,
            TsGoingDown = 3,
            DoorOpen = 0,
            DoorClosed = 1,
            DoorOpening = 2,
            DoorClosing = 3
        }
        // Alignment: 4
        // Members count: 2
        public enum FuncDoorSpawnPosT : int {
            FuncDoorSpawnClosed = 0,
            FuncDoorSpawnOpen = 1
        }
        // Alignment: 4
        // Members count: 2
        public enum FilterT : int {
            FilterAnd = 0,
            FilterOr = 1
        }
        // Alignment: 4
        // Members count: 3
        public enum Explosions : int {
            ExpRandom = 0,
            ExpDirected = 1,
            ExpUsePrecise = 2
        }
        // Alignment: 4
        // Members count: 12
        public enum Materials : int {
            MatGlass = 0,
            MatWood = 1,
            MatMetal = 2,
            MatFlesh = 3,
            MatCinderBlock = 4,
            MatCeilingTile = 5,
            MatComputer = 6,
            MatUnbreakableGlass = 7,
            MatRocks = 8,
            MatWeb = 9,
            MatNone = 10,
            MatLastMaterial = 11
        }
        // Alignment: 4
        // Members count: 3
        public enum EOverrideBlockLosT : int {
            BlockLosDefault = 0,
            BlockLosForceFalse = 1,
            BlockLosForceTrue = 2
        }
        // Alignment: 4
        // Members count: 3
        public enum MoveLinearAuthoredPosT : int {
            MovelinearAuthoredAtStartPosition = 0,
            MovelinearAuthoredAtOpenPosition = 1,
            MovelinearAuthoredAtClosedPosition = 2
        }
        // Alignment: 4
        // Members count: 3
        public enum TrackOrientationTypeT : int {
            TrackOrientationFixed = 0,
            TrackOrientationFacePath = 1,
            TrackOrientationFacePathAngles = 2
        }
        // Alignment: 4
        // Members count: 3
        public enum SimpleConstraintSoundProfileSimpleConstraintsSoundProfileKeypointsT : int {
            KMinThreshold = 0,
            KMinFull = 1,
            KHighwater = 2
        }
        // Alignment: 4
        // Members count: 23
        public enum SoundFlagsT : int {
            SoundNone = 0,
            SoundCombat = 1,
            SoundWorld = 2,
            SoundPlayer = 4,
            SoundDanger = 8,
            SoundBulletImpact = 16,
            SoundThumper = 32,
            SoundPhysicsDanger = 64,
            SoundMoveAway = 128,
            SoundPlayerVehicle = 256,
            SoundGlassBreak = 512,
            SoundPhysicsObject = 1024,
            SoundContextGunfire = 1048576,
            SoundContextCombineOnly = 2097152,
            SoundContextReactToSource = 4194304,
            SoundContextExplosion = 8388608,
            SoundContextExcludeCombine = 16777216,
            SoundContextDangerApproach = 33554432,
            SoundContextAlliesOnly = 67108864,
            SoundContextPanicNpcs = 134217728,
            AllContexts = -1048576,
            AllScents = 0,
            AllSounds = 1048575
        }
        // Alignment: 4
        // Members count: 3
        public enum TrainVelocityTypeT : int {
            TrainVelocityInstantaneous = 0,
            TrainVelocityLinearBlend = 1,
            TrainVelocityEaseInEaseOut = 2
        }
        // Alignment: 4
        // Members count: 4
        public enum TrainOrientationTypeT : int {
            TrainOrientationFixed = 0,
            TrainOrientationAtPathTracks = 1,
            TrainOrientationLinearBlend = 2,
            TrainOrientationEaseInEaseOut = 3
        }
        // Alignment: 4
        // Members count: 7
        public enum BeamTypeT : int {
            BeamInvalid = 0,
            BeamPoints = 1,
            BeamEntpoint = 2,
            BeamEnts = 3,
            BeamHose = 4,
            BeamSpline = 5,
            BeamLaser = 6
        }
        // Alignment: 4
        // Members count: 4
        public enum BeamClipStyleT : int {
            KNoclip = 0,
            KGeoclip = 1,
            KModelclip = 2,
            KBeamclipstyleNumbits = 2
        }
        // Alignment: 1
        // Members count: 10
        public enum SurroundingBoundsTypeT : sbyte {
            UseObbCollisionBounds = 0,
            UseBestCollisionBounds = 1,
            UseHitboxes = 2,
            UseSpecifiedBounds = 3,
            UseGameCode = 4,
            UseRotationExpandedBounds = 5,
            UseRotationExpandedOrientedBounds = 6,
            UseCollisionBoundsNeverVphysics = 7,
            UseRotationExpandedSequenceBounds = 8,
            SurroundingTypeBitCount = 3
        }
        // Alignment: 1
        // Members count: 2
        public enum ShatterPanelMode : sbyte {
            ShatterGlass = 0,
            ShatterDrywall = 1
        }
        // Alignment: 1
        // Members count: 5
        public enum ShatterDamageCause : sbyte {
            ShatterdamageBullet = 0,
            ShatterdamageMelee = 1,
            ShatterdamageThrown = 2,
            ShatterdamageScript = 3,
            ShatterdamageExplosive = 4
        }
        // Alignment: 1
        // Members count: 5
        public enum ShatterGlassStressType : sbyte {
            ShatterglassBlunt = 0,
            ShatterglassBallistic = 1,
            ShatterglassPulse = 2,
            ShatterdrywallChunks = 3,
            ShatterglassExplosive = 4
        }
        // Alignment: 1
        // Members count: 3
        public enum OnFrame : sbyte {
            OnframeUnknown = 0,
            OnframeTrue = 1,
            OnframeFalse = 2
        }
        // Alignment: 1
        // Members count: 2
        public enum ShardSolidT : sbyte {
            ShardSolid = 0,
            ShardDebris = 1
        }
        // Alignment: 4
        // Members count: 5
        public enum AnimLoopModeT : int {
            AnimLoopModeInvalid = -1,
            AnimLoopModeNotLooping = 0,
            AnimLoopModeLooping = 1,
            AnimLoopModeUseSequenceSettings = 2,
            AnimLoopModeCount = 3
        }
        // Alignment: 4
        // Members count: 4
        public enum EntitySubclassScopeT : int {
            SubclassScopeNone = -1,
            SubclassScopePrecipitation = 0,
            SubclassScopePlayerWeapons = 1,
            SubclassScopeCount = 2
        }
        // Alignment: 4
        // Members count: 3
        public enum SubclassVDataChangeTypeT : int {
            SubclassVdataCreated = 0,
            SubclassVdataSubclassChanged = 1,
            SubclassVdataReloaded = 2
        }
        // Alignment: 4
        // Members count: 7
        public enum PlayerConnectedState : int {
            PlayerNeverConnected = -1,
            PlayerConnected = 0,
            PlayerConnecting = 1,
            PlayerReconnecting = 2,
            PlayerDisconnecting = 3,
            PlayerDisconnected = 4,
            PlayerReserved = 5
        }
        // Alignment: 4
        // Members count: 3
        public enum WeaponSwitchReasonT : int {
            EDrawn = 0,
            EEquipped = 1,
            EUserInitiatedSwitchToLast = 2
        }
        // Alignment: 4
        // Members count: 4
        public enum WeaponAttackTypeT : int {
            EInvalid = -1,
            EPrimary = 0,
            ESecondary = 1,
            ECount = 2
        }
        // Alignment: 4
        // Members count: 35
        public enum VoteCreateFailedT : int {
            VoteFailedGeneric = 0,
            VoteFailedTransitioningPlayers = 1,
            VoteFailedRateExceeded = 2,
            VoteFailedYesMustExceedNo = 3,
            VoteFailedQuorumFailure = 4,
            VoteFailedIssueDisabled = 5,
            VoteFailedMapNotFound = 6,
            VoteFailedMapNameRequired = 7,
            VoteFailedFailedRecently = 8,
            VoteFailedTeamCantCall = 9,
            VoteFailedWaitingforplayers = 10,
            VoteFailedPlayernotfound = 11,
            VoteFailedCannotKickAdmin = 12,
            VoteFailedScrambleInProgress = 13,
            VoteFailedSpectator = 14,
            VoteFailedFailedRecentKick = 15,
            VoteFailedFailedRecentChangemap = 16,
            VoteFailedFailedRecentSwapteams = 17,
            VoteFailedFailedRecentScrambleteams = 18,
            VoteFailedFailedRecentRestart = 19,
            VoteFailedSwapInProgress = 20,
            VoteFailedDisabled = 21,
            VoteFailedNextlevelSet = 22,
            VoteFailedTooEarlySurrender = 23,
            VoteFailedMatchPaused = 24,
            VoteFailedMatchNotPaused = 25,
            VoteFailedNotInWarmup = 26,
            VoteFailedNot10Players = 27,
            VoteFailedTimeoutActive = 28,
            VoteFailedTimeoutInactive = 29,
            VoteFailedTimeoutExhausted = 30,
            VoteFailedCantRoundEnd = 31,
            VoteFailedRematch = 32,
            VoteFailedContinue = 33,
            VoteFailedMax = 34
        }
        // Alignment: 1
        // Members count: 9
        public enum ItemFlagTypesT : sbyte {
            ItemFlagNone = 0,
            ItemFlagCanSelectWithoutAmmo = 1,
            ItemFlagNoautoreload = 2,
            ItemFlagNoautoswitchempty = 4,
            ItemFlagLimitinworld = 8,
            ItemFlagExhaustible = 16,
            ItemFlagDohitlocationdmg = 32,
            ItemFlagNoammopickups = 64,
            ItemFlagNoitempickup = 128
        }
        // Alignment: 4
        // Members count: 5
        public enum EntityDisolveTypeT : int {
            EntityDissolveInvalid = -1,
            EntityDissolveNormal = 0,
            EntityDissolveElectrical = 1,
            EntityDissolveElectricalLight = 2,
            EntityDissolveCore = 3
        }
        // Alignment: 4
        // Members count: 14
        public enum HitGroupT : int {
            HitgroupInvalid = -1,
            HitgroupGeneric = 0,
            HitgroupHead = 1,
            HitgroupChest = 2,
            HitgroupStomach = 3,
            HitgroupLeftarm = 4,
            HitgroupRightarm = 5,
            HitgroupLeftleg = 6,
            HitgroupRightleg = 7,
            HitgroupNeck = 8,
            HitgroupUnused = 9,
            HitgroupGear = 10,
            HitgroupSpecial = 11,
            HitgroupCount = 12
        }
        // Alignment: 1
        // Members count: 7
        public enum WaterLevelT : sbyte {
            WlNotInWater = 0,
            WlFeet = 1,
            WlKnees = 2,
            WlWaist = 3,
            WlChest = 4,
            WlFullyUnderwater = 5,
            WlCount = 6
        }
        // Alignment: 4
        // Members count: 5
        public enum DoorStateT : int {
            DoorStateClosed = 0,
            DoorStateOpening = 1,
            DoorStateOpen = 2,
            DoorStateClosing = 3,
            DoorStateAjar = 4
        }
        // Alignment: 4
        // Members count: 2
        public enum ShadowTypeT : int {
            ShadowsNone = 0,
            ShadowsSimple = 1
        }
        // Alignment: 4
        // Members count: 10
        public enum ClassT : int {
            ClassNone = 0,
            ClassPlayer = 1,
            ClassPlayerAlly = 2,
            ClassBomb = 3,
            ClassFootContactShadow = 4,
            ClassWeapon = 5,
            ClassWaterSplasher = 6,
            ClassWeaponViewmodel = 7,
            ClassDoor = 8,
            NumClassifyClasses = 9
        }
        // Alignment: 4
        // Members count: 10
        public enum DispositionT : int {
            DEr = 0,
            DHt = 1,
            DFr = 2,
            DLi = 3,
            DNu = 4,
            DError = 0,
            DHate = 1,
            DFear = 2,
            DLike = 3,
            DNeutral = 4
        }
        // Alignment: 4
        // Members count: 6
        public enum LatchDirtyPermissionT : int {
            LatchDirtyDisallow = 0,
            LatchDirtyServerControlled = 1,
            LatchDirtyClientSimulated = 2,
            LatchDirtyPrediction = 3,
            LatchDirtyFramesimulate = 4,
            LatchDirtyParticleSimulate = 5
        }
        // Alignment: 4
        // Members count: 5
        public enum LifeStateT : int {
            LifeAlive = 0,
            LifeDying = 1,
            LifeDead = 2,
            LifeRespawnable = 3,
            LifeRespawning = 4
        }
        // Alignment: 4
        // Members count: 5
        public enum StanceTypeT : int {
            StanceCurrent = -1,
            StanceDefault = 0,
            StanceCrouching = 1,
            StanceProne = 2,
            NumStances = 3
        }
        // Alignment: 4
        // Members count: 2
        public enum ModifyDamageReturnT : int {
            ContinueToApplyDamage = 0,
            AbortDoNotApplyDamage = 1
        }
        // Alignment: 1
        // Members count: 3
        public enum BeginDeathLifeStateTransitionT : sbyte {
            NoChangeInLifestate = 0,
            TransitionToLifestateDying = 1,
            TransitionToLifestateDead = 2
        }
        // Alignment: 4
        // Members count: 3
        public enum WorldTextPanelHorizontalAlignT : int {
            WorldtextHorizontalAlignLeft = 0,
            WorldtextHorizontalAlignCenter = 1,
            WorldtextHorizontalAlignRight = 2
        }
        // Alignment: 4
        // Members count: 3
        public enum WorldTextPanelVerticalAlignT : int {
            WorldtextVerticalAlignTop = 0,
            WorldtextVerticalAlignCenter = 1,
            WorldtextVerticalAlignBottom = 2
        }
        // Alignment: 4
        // Members count: 3
        public enum WorldTextPanelOrientationT : int {
            WorldtextOrientationDefault = 0,
            WorldtextOrientationFaceuser = 1,
            WorldtextOrientationFaceuserUpright = 2
        }
        // Alignment: 4
        // Members count: 2
        public enum AttributeprovidertypesT : int {
            ProviderGeneric = 0,
            ProviderWeapon = 1
        }
        // Alignment: 4
        // Members count: 4
        public enum SpawnPointCoopEnemyBotDefaultBehaviorT : int {
            DefendArea = 0,
            Hunt = 1,
            ChargeEnemy = 2,
            DefendInvestigate = 3
        }
        // Alignment: 4
        // Members count: 4
        public enum MoveMountingAmountT : int {
            MoveMountNone = 0,
            MoveMountLow = 1,
            MoveMountHigh = 2,
            MoveMountMaxcount = 3
        }
        // Alignment: 4
        // Members count: 10
        public enum CsPlayerState : int {
            StateActive = 0,
            StateWelcome = 1,
            StatePickingteam = 2,
            StatePickingclass = 3,
            StateDeathAnim = 4,
            StateDeathWaitForKey = 5,
            StateObserverMode = 6,
            StateGungameRespawn = 7,
            StateDormant = 8,
            NumPlayerStates = 9
        }
        // Alignment: 4
        // Members count: 18
        public enum CsPlayerBlockingUseActionT : int {
            KCsPlayerBlockingUseActionNone = 0,
            KCsPlayerBlockingUseActionDefusingDefault = 1,
            KCsPlayerBlockingUseActionDefusingWithKit = 2,
            KCsPlayerBlockingUseActionHostageGrabbing = 3,
            KCsPlayerBlockingUseActionHostageDropping = 4,
            KCsPlayerBlockingUseActionOpeningSafe = 5,
            KCsPlayerBlockingUseActionEquippingParachute = 6,
            KCsPlayerBlockingUseActionEquippingHeavyArmor = 7,
            KCsPlayerBlockingUseActionEquippingContract = 8,
            KCsPlayerBlockingUseActionEquippingTabletUpgrade = 9,
            KCsPlayerBlockingUseActionTakingOffHeavyArmor = 10,
            KCsPlayerBlockingUseActionPayingToOpenDoor = 11,
            KCsPlayerBlockingUseActionCancelingSpawnRappelling = 12,
            KCsPlayerBlockingUseActionEquippingExoJump = 13,
            KCsPlayerBlockingUseActionPickingUpBumpMine = 14,
            KCsPlayerBlockingUseActionMapLongUseEntityPickup = 15,
            KCsPlayerBlockingUseActionMapLongUseEntityPlace = 16,
            KCsPlayerBlockingUseActionMaxCount = 17
        }
        // Alignment: 4
        // Members count: 8
        public enum GrenadeTypeT : int {
            GrenadeTypeExplosive = 0,
            GrenadeTypeFlash = 1,
            GrenadeTypeFire = 2,
            GrenadeTypeDecoy = 3,
            GrenadeTypeSmoke = 4,
            GrenadeTypeSensor = 5,
            GrenadeTypeSnowball = 6,
            GrenadeTypeTotal = 7
        }
        // Alignment: 4
        // Members count: 13
        public enum QuestProgressReason : int {
            QuestNoninitialized = 0,
            QuestOk = 1,
            QuestNotEnoughPlayers = 2,
            QuestWarmup = 3,
            QuestNotConnectedToSteam = 4,
            QuestNonofficialServer = 5,
            QuestNoEntitlement = 6,
            QuestNoQuest = 7,
            QuestPlayerIsBot = 8,
            QuestWrongMap = 9,
            QuestWrongMode = 10,
            QuestNotSyncedWithServer = 11,
            QuestReasonMax = 12
        }
        // Alignment: 4
        // Members count: 74
        public enum LoadoutSlotT : int {
            LoadoutSlotPromoted = -2,
            LoadoutSlotInvalid = -1,
            LoadoutSlotMelee = 0,
            LoadoutSlotC4 = 1,
            LoadoutSlotFirstAutoBuyWeapon = 0,
            LoadoutSlotLastAutoBuyWeapon = 1,
            LoadoutSlotSecondary0 = 2,
            LoadoutSlotSecondary1 = 3,
            LoadoutSlotSecondary2 = 4,
            LoadoutSlotSecondary3 = 5,
            LoadoutSlotSecondary4 = 6,
            LoadoutSlotSecondary5 = 7,
            LoadoutSlotSmg0 = 8,
            LoadoutSlotSmg1 = 9,
            LoadoutSlotSmg2 = 10,
            LoadoutSlotSmg3 = 11,
            LoadoutSlotSmg4 = 12,
            LoadoutSlotSmg5 = 13,
            LoadoutSlotRifle0 = 14,
            LoadoutSlotRifle1 = 15,
            LoadoutSlotRifle2 = 16,
            LoadoutSlotRifle3 = 17,
            LoadoutSlotRifle4 = 18,
            LoadoutSlotRifle5 = 19,
            LoadoutSlotHeavy0 = 20,
            LoadoutSlotHeavy1 = 21,
            LoadoutSlotHeavy2 = 22,
            LoadoutSlotHeavy3 = 23,
            LoadoutSlotHeavy4 = 24,
            LoadoutSlotHeavy5 = 25,
            LoadoutSlotFirstWheelWeapon = 2,
            LoadoutSlotLastWheelWeapon = 25,
            LoadoutSlotFirstPrimaryWeapon = 8,
            LoadoutSlotLastPrimaryWeapon = 25,
            LoadoutSlotFirstWheelGrenade = 26,
            LoadoutSlotGrenade0 = 26,
            LoadoutSlotGrenade1 = 27,
            LoadoutSlotGrenade2 = 28,
            LoadoutSlotGrenade3 = 29,
            LoadoutSlotGrenade4 = 30,
            LoadoutSlotGrenade5 = 31,
            LoadoutSlotLastWheelGrenade = 31,
            LoadoutSlotEquipment0 = 32,
            LoadoutSlotEquipment1 = 33,
            LoadoutSlotEquipment2 = 34,
            LoadoutSlotEquipment3 = 35,
            LoadoutSlotEquipment4 = 36,
            LoadoutSlotEquipment5 = 37,
            LoadoutSlotFirstWheelEquipment = 32,
            LoadoutSlotLastWheelEquipment = 37,
            LoadoutSlotClothingCustomplayer = 38,
            LoadoutSlotPet = 39,
            LoadoutSlotClothingFacemask = 40,
            LoadoutSlotClothingHands = 41,
            LoadoutSlotFirstCosmetic = 41,
            LoadoutSlotLastCosmetic = 41,
            LoadoutSlotClothingEyewear = 42,
            LoadoutSlotClothingHat = 43,
            LoadoutSlotClothingLowerbody = 44,
            LoadoutSlotClothingTorso = 45,
            LoadoutSlotClothingAppearance = 46,
            LoadoutSlotMisc0 = 47,
            LoadoutSlotMisc1 = 48,
            LoadoutSlotMisc2 = 49,
            LoadoutSlotMisc3 = 50,
            LoadoutSlotMisc4 = 51,
            LoadoutSlotMisc5 = 52,
            LoadoutSlotMisc6 = 53,
            LoadoutSlotMusickit = 54,
            LoadoutSlotFlair0 = 55,
            LoadoutSlotSpray0 = 56,
            LoadoutSlotFirstAllCharacter = 54,
            LoadoutSlotLastAllCharacter = 56,
            LoadoutSlotCount = 57
        }
        // Alignment: 1
        // Members count: 8
        public enum EKillTypesT : sbyte {
            KillNone = 0,
            KillDefault = 1,
            KillHeadshot = 2,
            KillBlast = 3,
            KillBurn = 4,
            KillSlash = 5,
            KillShock = 6,
            KilltypeCount = 7
        }
        // Alignment: 4
        // Members count: 9
        public enum PreviewCharacterMode : int {
            Diorama = 0,
            MainMenu = 1,
            BuyMenu = 2,
            TeamSelect = 3,
            EndOfMatch = 4,
            InventoryInspect = 5,
            Walking = 6,
            TeamIntro = 7,
            WingmanIntro = 8
        }
        // Alignment: 4
        // Members count: 6
        public enum PreviewWeaponState : int {
            Dropped = 0,
            Holstered = 1,
            Deployed = 2,
            Planted = 3,
            Inspect = 4,
            Icon = 5
        }
        // Alignment: 4
        // Members count: 23
        public enum PreviewEomCelebration : int {
            Walkup = 0,
            Punching = 1,
            Swagger = 2,
            Dropdown = 3,
            Stretch = 4,
            SwatFemale = 5,
            MaskF = 6,
            Guerilla = 7,
            Guerilla02 = 8,
            Gendarmerie = 9,
            ScubaFemale = 10,
            ScubaMale = 11,
            AvaDefeat = 12,
            GendarmerieDefeat = 13,
            MaeDefeat = 14,
            RicksawDefeat = 15,
            ScubaFemaleDefeat = 16,
            ScubaMaleDefeat = 17,
            CrasswaterDefeat = 18,
            DarrylDefeat = 19,
            DoctorDefeat = 20,
            MuhlikDefeat = 21,
            VypaDefeat = 22
        }
        // Alignment: 4
        // Members count: 20
        public enum CsWeaponType : int {
            WeapontypeKnife = 0,
            WeapontypePistol = 1,
            WeapontypeSubmachinegun = 2,
            WeapontypeRifle = 3,
            WeapontypeShotgun = 4,
            WeapontypeSniperRifle = 5,
            WeapontypeMachinegun = 6,
            WeapontypeC4 = 7,
            WeapontypeTaser = 8,
            WeapontypeGrenade = 9,
            WeapontypeEquipment = 10,
            WeapontypeStackableitem = 11,
            WeapontypeFists = 12,
            WeapontypeBreachcharge = 13,
            WeapontypeBumpmine = 14,
            WeapontypeTablet = 15,
            WeapontypeMelee = 16,
            WeapontypeShield = 17,
            WeapontypeZoneRepulsor = 18,
            WeapontypeUnknown = 19
        }
        // Alignment: 4
        // Members count: 7
        public enum CsWeaponCategory : int {
            WeaponcategoryOther = 0,
            WeaponcategoryMelee = 1,
            WeaponcategorySecondary = 2,
            WeaponcategorySmg = 3,
            WeaponcategoryRifle = 4,
            WeaponcategoryHeavy = 5,
            WeaponcategoryCount = 6
        }
        // Alignment: 4
        // Members count: 3
        public enum CsWeaponSilencerType : int {
            WeaponsilencerNone = 0,
            WeaponsilencerDetachable = 1,
            WeaponsilencerIntegrated = 2
        }
        // Alignment: 4
        // Members count: 24
        public enum PlayerAnimEventT : int {
            PlayeranimeventFireGunPrimary = 0,
            PlayeranimeventFireGunSecondary = 1,
            PlayeranimeventGrenadePullPin = 2,
            PlayeranimeventThrowGrenade = 3,
            PlayeranimeventJump = 4,
            PlayeranimeventReload = 5,
            PlayeranimeventClearFiring = 6,
            PlayeranimeventDeploy = 7,
            PlayeranimeventSilencerState = 8,
            PlayeranimeventSilencerToggle = 9,
            PlayeranimeventThrowGrenadeUnderhand = 10,
            PlayeranimeventCatchWeapon = 11,
            PlayeranimeventLookatweaponRequest = 12,
            PlayeranimeventReloadCancelLookatweapon = 13,
            PlayeranimeventHaulback = 14,
            PlayeranimeventIdle = 15,
            PlayeranimeventStrikeHit = 16,
            PlayeranimeventStrikeMiss = 17,
            PlayeranimeventBackstab = 18,
            PlayeranimeventDryfire = 19,
            PlayeranimeventFidget = 20,
            PlayeranimeventRelease = 21,
            PlayeranimeventTaunt = 22,
            PlayeranimeventCount = 23
        }
        // Alignment: 4
        // Members count: 5
        public enum MedalRankT : int {
            MedalRankNone = 0,
            MedalRankBronze = 1,
            MedalRankSilver = 2,
            MedalRankGold = 3,
            MedalRankCount = 4
        }
        // Alignment: 4
        // Members count: 3
        public enum CsWeaponStateT : int {
            WeaponNotCarried = 0,
            WeaponIsCarriedByPlayer = 1,
            WeaponIsActive = 2
        }
        // Alignment: 4
        // Members count: 3
        public enum CsWeaponMode : int {
            PrimaryMode = 0,
            SecondaryMode = 1,
            WeaponModeMax = 2
        }
        // Alignment: 4
        // Members count: 3
        public enum C4LightEffectT : int {
            ELightEffectNone = 0,
            ELightEffectDropped = 1,
            ELightEffectThirdPersonHeld = 2
        }
        // Alignment: 4
        // Members count: 17
        public enum GearSlotT : int {
            GearSlotInvalid = -1,
            GearSlotRifle = 0,
            GearSlotPistol = 1,
            GearSlotKnife = 2,
            GearSlotGrenades = 3,
            GearSlotC4 = 4,
            GearSlotReservedSlot6 = 5,
            GearSlotReservedSlot7 = 6,
            GearSlotReservedSlot8 = 7,
            GearSlotReservedSlot9 = 8,
            GearSlotReservedSlot10 = 9,
            GearSlotReservedSlot11 = 10,
            GearSlotBoosts = 11,
            GearSlotUtility = 12,
            GearSlotCount = 13,
            GearSlotFirst = 0,
            GearSlotLast = 12
        }
        // Alignment: 4
        // Members count: 7
        public enum ChickenActivity : int {
            Idle = 0,
            Walk = 1,
            Run = 2,
            Hop = 3,
            Jump = 4,
            Glide = 5,
            Land = 6
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MPropertyCustomEditor
        public static class CRangeFloat {
            public const nint MPValue = 0x0; // float32[2]
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MPropertyCustomEditor
        public static class CRangeInt {
            public const nint MPValue = 0x0; // int32[2]
        }
        // Parent: None
        // Fields count: 2
        public static class Extent {
            public const nint Lo = 0x0; // 
            public const nint Hi = 0xC; // 
        }
        // Parent: None
        // Fields count: 2
        public static class NavGravityT {
            public const nint MVGravity = 0x0; // 
            public const nint MBDefault = 0xC; // bool
        }
        // Parent: None
        // Fields count: 0
        public static class CNavVolume {
        }
        // Parent: CNavVolume
        // Fields count: 1
        public static class CNavVolumeVector {
            public const nint MBHasBeenPreFiltered = 0x78; // bool
        }
        // Parent: CNavVolumeVector
        // Fields count: 0
        public static class CNavVolumeAll {
        }
        // Parent: CNavVolume
        // Fields count: 2
        public static class CNavVolumeSphere {
            public const nint MVCenter = 0x70; // 
            public const nint MFlRadius = 0x7C; // float32
        }
        // Parent: CNavVolumeSphere
        // Fields count: 1
        public static class CNavVolumeSphericalShell {
            public const nint MFlRadiusInner = 0x80; // float32
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
            public const nint MNameStringableIndex = 0x14; // int32
            public const nint MName = 0x18; // CUtlSymbolLarge
            public const nint MDesignerName = 0x20; // CUtlSymbolLarge
            public const nint MFlags = 0x30; // uint32
            public const nint MWorldGroupId = 0x38; // WorldGroupId_t
            public const nint MFDataObjectTypes = 0x3C; // uint32
            public const nint MPathIndex = 0x40; // ChangeAccessorFieldPathIndex_t
            public const nint MPPrev = 0x58; // CEntityIdentity*
            public const nint MPNext = 0x60; // CEntityIdentity*
            public const nint MPPrevByClass = 0x68; // CEntityIdentity*
            public const nint MPNextByClass = 0x70; // CEntityIdentity*
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // NetworkVarNames: m_pEntity (CEntityIdentity *)
        // NetworkVarNames: m_CScriptComponent (CScriptComponent::Storage_t)
        public static class CEntityInstance {
            public const nint MIszPrivateVScripts = 0x8; // CUtlSymbolLarge
            public const nint MPEntity = 0x10; // CEntityIdentity*
            public const nint MCScriptComponent = 0x28; // CScriptComponent*
            public const nint MBVisibleinPvs = 0x30; // bool
        }
        // Parent: CEntityComponent
        // Fields count: 1
        public static class CScriptComponent {
            public const nint MScriptClassName = 0x30; // CUtlSymbolLarge
        }
        // Parent: CEntityComponent
        // Fields count: 2
        public static class CBodyComponent {
            public const nint MPSceneNode = 0x8; // CGameSceneNode*
            public const nint MPChainEntity = 0x20; // CNetworkVarChainer
        }
        // Parent: CBodyComponent
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_sceneNode (CGameSceneNode)
        public static class CBodyComponentPoint {
            public const nint MSceneNode = 0x50; // CGameSceneNode
            public const nint MPChainEntity = 0x1A0; // CNetworkVarChainer
        }
        // Parent: CBodyComponent
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_skeletonInstance (CSkeletonInstance)
        public static class CBodyComponentSkeletonInstance {
            public const nint MSkeletonInstance = 0x50; // CSkeletonInstance
            public const nint MPChainEntity = 0x430; // CNetworkVarChainer
        }
        // Parent: CEntityComponent
        // Fields count: 1
        //
        // Metadata:
        // NetworkVarNames: m_bvDisabledHitGroups (uint32)
        public static class CHitboxComponent {
            public const nint MBvDisabledHitGroups = 0x24; // uint32[1]
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
            public const nint MPChainEntity = 0x48; // CNetworkVarChainer
            public const nint MColor = 0x85; // Color
            public const nint MSecondaryColor = 0x89; // Color
            public const nint MFlBrightness = 0x90; // float32
            public const nint MFlBrightnessScale = 0x94; // float32
            public const nint MFlBrightnessMult = 0x98; // float32
            public const nint MFlRange = 0x9C; // float32
            public const nint MFlFalloff = 0xA0; // float32
            public const nint MFlAttenuation0 = 0xA4; // float32
            public const nint MFlAttenuation1 = 0xA8; // float32
            public const nint MFlAttenuation2 = 0xAC; // float32
            public const nint MFlTheta = 0xB0; // float32
            public const nint MFlPhi = 0xB4; // float32
            public const nint MHLightCookie = 0xB8; // CStrongHandle< InfoForResourceTypeCTextureBase >
            public const nint MNCascades = 0xC0; // int32
            public const nint MNCastShadows = 0xC4; // int32
            public const nint MNShadowWidth = 0xC8; // int32
            public const nint MNShadowHeight = 0xCC; // int32
            public const nint MBRenderDiffuse = 0xD0; // bool
            public const nint MNRenderSpecular = 0xD4; // int32
            public const nint MBRenderTransmissive = 0xD8; // bool
            public const nint MFlOrthoLightWidth = 0xDC; // float32
            public const nint MFlOrthoLightHeight = 0xE0; // float32
            public const nint MNStyle = 0xE4; // int32
            public const nint MPattern = 0xE8; // CUtlString
            public const nint MNCascadeRenderStaticObjects = 0xF0; // int32
            public const nint MFlShadowCascadeCrossFade = 0xF4; // float32
            public const nint MFlShadowCascadeDistanceFade = 0xF8; // float32
            public const nint MFlShadowCascadeDistance0 = 0xFC; // float32
            public const nint MFlShadowCascadeDistance1 = 0x100; // float32
            public const nint MFlShadowCascadeDistance2 = 0x104; // float32
            public const nint MFlShadowCascadeDistance3 = 0x108; // float32
            public const nint MNShadowCascadeResolution0 = 0x10C; // int32
            public const nint MNShadowCascadeResolution1 = 0x110; // int32
            public const nint MNShadowCascadeResolution2 = 0x114; // int32
            public const nint MNShadowCascadeResolution3 = 0x118; // int32
            public const nint MBUsesBakedShadowing = 0x11C; // bool
            public const nint MNShadowPriority = 0x120; // int32
            public const nint MNBakedShadowIndex = 0x124; // int32
            public const nint MBRenderToCubemaps = 0x128; // bool
            public const nint MNDirectLight = 0x12C; // int32
            public const nint MNIndirectLight = 0x130; // int32
            public const nint MFlFadeMinDist = 0x134; // float32
            public const nint MFlFadeMaxDist = 0x138; // float32
            public const nint MFlShadowFadeMinDist = 0x13C; // float32
            public const nint MFlShadowFadeMaxDist = 0x140; // float32
            public const nint MBEnabled = 0x144; // bool
            public const nint MBFlicker = 0x145; // bool
            public const nint MBPrecomputedFieldsValid = 0x146; // bool
            public const nint MVPrecomputedBoundsMins = 0x148; // 
            public const nint MVPrecomputedBoundsMaxs = 0x154; // 
            public const nint MVPrecomputedObbOrigin = 0x160; // 
            public const nint MVPrecomputedObbAngles = 0x16C; // QAngle
            public const nint MVPrecomputedObbExtent = 0x178; // 
            public const nint MFlPrecomputedMaxRange = 0x184; // float32
            public const nint MNFogLightingMode = 0x188; // int32
            public const nint MFlFogContributionStength = 0x18C; // float32
            public const nint MFlNearClipPlane = 0x190; // float32
            public const nint MSkyColor = 0x194; // Color
            public const nint MFlSkyIntensity = 0x198; // float32
            public const nint MSkyAmbientBounce = 0x19C; // Color
            public const nint MBUseSecondaryColor = 0x1A0; // bool
            public const nint MBMixedShadows = 0x1A1; // bool
            public const nint MFlLightStyleStartTime = 0x1A4; // GameTime_t
            public const nint MFlCapsuleLength = 0x1A8; // float32
            public const nint MFlMinRoughness = 0x1AC; // float32
            public const nint MBPvsModifyEntity = 0x1C0; // bool
        }
        // Parent: None
        // Fields count: 1
        public static class CNetworkTransmitComponent {
            public const nint MNTransmitStateOwnedCounter = 0x16C; // uint8
        }
        // Parent: CEntityComponent
        // Fields count: 5
        public static class CRenderComponent {
            public const nint MPChainEntity = 0x10; // CNetworkVarChainer
            public const nint MBIsRenderingWithViewModels = 0x50; // bool
            public const nint MNSplitscreenFlags = 0x54; // uint32
            public const nint MBEnableRendering = 0x60; // bool
            public const nint MBInterpolationReadyToDraw = 0xB0; // bool
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
            public const nint MFlFluidDensity = 0x18; // float32
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MPropertyCustomEditor
        public static class CSkillFloat {
            public const nint MPValue = 0x0; // float32[4]
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MPropertyCustomEditor
        public static class CSkillInt {
            public const nint MPValue = 0x0; // int32[4]
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSkillDamage {
            public const nint MFlDamage = 0x0; // CSkillFloat
            public const nint MFlPhysicsForceDamage = 0x10; // float32
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MPropertyCustomEditor
        public static class CRemapFloat {
            public const nint MPValue = 0x0; // float32[4]
        }
        // Parent: None
        // Fields count: 2
        public static class CScriptUniformRandomStream {
            public const nint MHScriptScope = 0x8; // HSCRIPT
            public const nint MNInitialSeed = 0x9C; // int32
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseProvideFeatureTag
        // MPulseLibraryBindings
        public static class CBasePlayerControllerApi {
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // NetworkVarNames: nType (FixAngleSet_t)
        // NetworkVarNames: qAngle (QAngle)
        // NetworkVarNames: nIndex (uint32)
        public static class ViewAngleServerChangeT {
            public const nint NType = 0x30; // FixAngleSet_t
            public const nint QAngle = 0x34; // QAngle
            public const nint NIndex = 0x40; // uint32
        }
        // Parent: None
        // Fields count: 2
        public static class CBreakableStageHelper {
            public const nint MNCurrentStage = 0x8; // int32
            public const nint MNStageCount = 0xC; // int32
        }
        // Parent: None
        // Fields count: 12
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CommandToolCommandT {
            public const nint MBEnabled = 0x0; // bool
            public const nint MBOpened = 0x1; // bool
            public const nint MInternalId = 0x4; // uint32
            public const nint MShortName = 0x8; // CUtlString
            public const nint MExecMode = 0x10; // CommandExecMode_t
            public const nint MSpawnGroup = 0x18; // CUtlString
            public const nint MPeriodicExecDelay = 0x20; // float32
            public const nint MSpecType = 0x24; // CommandEntitySpecType_t
            public const nint MEntitySpec = 0x28; // CUtlString
            public const nint MCommands = 0x30; // CUtlString
            public const nint MSetDebugBits = 0x38; // DebugOverlayBits_t
            public const nint MClearDebugBits = 0x40; // DebugOverlayBits_t
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseProvideFeatureTag
        // MPulseLibraryBindings
        public static class CDynamicPropApi {
        }
        // Parent: None
        // Fields count: 1
        public static class CPlayerPawnComponent {
            public const nint MPChainEntity = 0x8; // CNetworkVarChainer
        }
        // Parent: None
        // Fields count: 1
        public static class CPlayerControllerComponent {
            public const nint MPChainEntity = 0x8; // CNetworkVarChainer
        }
        // Parent: CPlayerPawnComponent
        // Fields count: 0
        public static class CPlayerAutoaimServices {
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
        public static class AudioparamsT {
            public const nint LocalSound = 0x8; // Vector[8]
            public const nint SoundscapeIndex = 0x68; // int32
            public const nint LocalBits = 0x6C; // uint8
            public const nint SoundscapeEntityListIndex = 0x70; // int32
            public const nint SoundEventHash = 0x74; // uint32
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
        public static class CPlayerCameraServices {
            public const nint MVecCsViewPunchAngle = 0x40; // QAngle
            public const nint MNCsViewPunchAngleTick = 0x4C; // GameTick_t
            public const nint MFlCsViewPunchAngleTickRatio = 0x50; // float32
            public const nint MPlayerFog = 0x58; // fogplayerparams_t
            public const nint MHColorCorrectionCtrl = 0x98; // CHandle< CColorCorrection >
            public const nint MHViewEntity = 0x9C; // CHandle< CBaseEntity >
            public const nint MHTonemapController = 0xA0; // CHandle< CTonemapController2 >
            public const nint MAudio = 0xA8; // audioparams_t
            public const nint MPostProcessingVolumes = 0x120; // CNetworkUtlVectorBase< CHandle< CPostProcessingVolume > >
            public const nint MFlOldPlayerZ = 0x138; // float32
            public const nint MFlOldPlayerViewOffsetZ = 0x13C; // float32
            public const nint MHTriggerSoundscapeList = 0x158; // CUtlVector< CHandle< CEnvSoundscapeTriggerable > >
        }
        // Parent: CPlayerPawnComponent
        // Fields count: 0
        public static class CPlayerFlashlightServices {
        }
        // Parent: CPlayerPawnComponent
        // Fields count: 0
        public static class CPlayerItemServices {
        }
        // Parent: CPlayerPawnComponent
        // Fields count: 15
        //
        // Metadata:
        // NetworkVarNames: m_nToggleButtonDownMask (ButtonBitMask_t)
        // NetworkVarNames: m_flMaxspeed (float32)
        // NetworkVarNames: m_arrForceSubtickMoveWhen (float32)
        public static class CPlayerMovementServices {
            public const nint MNImpulse = 0x40; // int32
            public const nint MNButtons = 0x48; // CInButtonState
            public const nint MNQueuedButtonDownMask = 0x68; // uint64
            public const nint MNQueuedButtonChangeMask = 0x70; // uint64
            public const nint MNButtonDoublePressed = 0x78; // uint64
            public const nint MPButtonPressedCmdNumber = 0x80; // uint32[64]
            public const nint MNLastCommandNumberProcessed = 0x180; // uint32
            public const nint MNToggleButtonDownMask = 0x188; // uint64
            public const nint MFlMaxspeed = 0x198; // float32
            public const nint MArrForceSubtickMoveWhen = 0x19C; // float32[4]
            public const nint MFlForwardMove = 0x1AC; // float32
            public const nint MFlLeftMove = 0x1B0; // float32
            public const nint MFlUpMove = 0x1B4; // float32
            public const nint MVecLastMovementImpulses = 0x1B8; // 
            public const nint MVecOldViewAngles = 0x1C4; // QAngle
        }
        // Parent: CPlayerMovementServices
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
        public static class CPlayerMovementServicesHumanoid {
            public const nint MFlStepSoundTime = 0x1D8; // float32
            public const nint MFlFallVelocity = 0x1DC; // float32
            public const nint MBInCrouch = 0x1E0; // bool
            public const nint MNCrouchState = 0x1E4; // uint32
            public const nint MFlCrouchTransitionStartTime = 0x1E8; // GameTime_t
            public const nint MBDucked = 0x1EC; // bool
            public const nint MBDucking = 0x1ED; // bool
            public const nint MBInDuckJump = 0x1EE; // bool
            public const nint MGroundNormal = 0x1F0; // 
            public const nint MFlSurfaceFriction = 0x1FC; // float32
            public const nint MSurfaceProps = 0x200; // CUtlStringToken
            public const nint MNStepside = 0x210; // int32
            public const nint MITargetVolume = 0x214; // int32
            public const nint MVecSmoothedVelocity = 0x218; // 
        }
        // Parent: CPlayerPawnComponent
        // Fields count: 4
        //
        // Metadata:
        // NetworkVarNames: m_iObserverMode (uint8)
        // NetworkVarNames: m_hObserverTarget (CHandle< CBaseEntity>)
        public static class CPlayerObserverServices {
            public const nint MIObserverMode = 0x40; // uint8
            public const nint MHObserverTarget = 0x44; // CHandle< CBaseEntity >
            public const nint MIObserverLastMode = 0x48; // ObserverMode_t
            public const nint MBForcedObserverMode = 0x4C; // bool
        }
        // Parent: CPlayerPawnComponent
        // Fields count: 0
        public static class CPlayerUseServices {
        }
        // Parent: CPlayerPawnComponent
        // Fields count: 0
        public static class CPlayerWaterServices {
        }
        // Parent: CPlayerPawnComponent
        // Fields count: 5
        //
        // Metadata:
        // NetworkVarNames: m_hMyWeapons (CHandle< CBasePlayerWeapon >)
        // NetworkVarNames: m_hActiveWeapon (CHandle< CBasePlayerWeapon>)
        // NetworkVarNames: m_hLastWeapon (CHandle< CBasePlayerWeapon>)
        // NetworkVarNames: m_iAmmo (uint16)
        public static class CPlayerWeaponServices {
            public const nint MHMyWeapons = 0x40; // CNetworkUtlVectorBase< CHandle< CBasePlayerWeapon > >
            public const nint MHActiveWeapon = 0x58; // CHandle< CBasePlayerWeapon >
            public const nint MHLastWeapon = 0x5C; // CHandle< CBasePlayerWeapon >
            public const nint MIAmmo = 0x60; // uint16[32]
            public const nint MBPreventWeaponPickup = 0xA0; // bool
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class AmmoTypeInfoT {
            public const nint MNMaxCarry = 0x10; // int32
            public const nint MNSplashSize = 0x1C; // CRangeInt
            public const nint MNFlags = 0x24; // AmmoFlags_t
            public const nint MFlMass = 0x28; // float32
            public const nint MFlSpeed = 0x2C; // CRangeFloat
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
            public const nint MAnimationController = 0x460; // CBaseAnimGraphController
            public const nint MPChainEntity = 0x950; // CNetworkVarChainer
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_ID (CUtlStringToken)
        // NetworkVarNames: m_Values (Vector4D)
        public static class EntityRenderAttributeT {
            public const nint MId = 0x30; // CUtlStringToken
            public const nint MValues = 0x34; // Vector4D
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // NetworkVarNames: m_Handle (ModelConfigHandle_t)
        // NetworkVarNames: m_Name (string_t)
        // NetworkVarNames: m_AssociatedEntities (CHandle< CBaseModelEntity >)
        // NetworkVarNames: m_AssociatedEntityNames (string_t)
        public static class ActiveModelConfigT {
            public const nint MHandle = 0x28; // ModelConfigHandle_t
            public const nint MName = 0x30; // CUtlSymbolLarge
            public const nint MAssociatedEntities = 0x38; // CNetworkUtlVectorBase< CHandle< CBaseModelEntity > >
            public const nint MAssociatedEntityNames = 0x50; // CNetworkUtlVectorBase< CUtlSymbolLarge >
        }
        // Parent: CBodyComponentSkeletonInstance
        // Fields count: 1
        public static class CBodyComponentBaseModelEntity {
            public const nint MPChainEntity = 0x460; // CNetworkVarChainer
        }
        // Parent: None
        // Fields count: 2
        public static class CRopeOverlapHit {
            public const nint MHEntity = 0x0; // CHandle< CBaseEntity >
            public const nint MVecOverlappingLinks = 0x8; // CUtlVector< int32 >
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_hOwner (CEntityHandle)
        // NetworkVarNames: m_name (CUtlStringToken)
        public static class CGameSceneNodeHandle {
            public const nint MHOwner = 0x8; // CEntityHandle
            public const nint MName = 0xC; // CUtlStringToken
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
            public const nint MNodeToWorld = 0x10; // CTransform
            public const nint MPOwner = 0x30; // CEntityInstance*
            public const nint MPParent = 0x38; // CGameSceneNode*
            public const nint MPChild = 0x40; // CGameSceneNode*
            public const nint MPNextSibling = 0x48; // CGameSceneNode*
            public const nint MHParent = 0x70; // CGameSceneNodeHandle
            public const nint MVecOrigin = 0x80; // CNetworkOriginCellCoordQuantizedVector
            public const nint MAngRotation = 0xB8; // QAngle
            public const nint MFlScale = 0xC4; // float32
            public const nint MVecAbsOrigin = 0xC8; // 
            public const nint MAngAbsRotation = 0xD4; // QAngle
            public const nint MFlAbsScale = 0xE0; // float32
            public const nint MNParentAttachmentOrBone = 0xE4; // int16
            public const nint MBDebugAbsOriginChanges = 0xE6; // bool
            public const nint MBDormant = 0xE7; // bool
            public const nint MBForceParentToBeNetworked = 0xE8; // bool
            public const nint MBDirtyHierarchy = 0x0; // bitfield:1
            public const nint MBDirtyBoneMergeInfo = 0x0; // bitfield:1
            public const nint MBNetworkedPositionChanged = 0x0; // bitfield:1
            public const nint MBNetworkedAnglesChanged = 0x0; // bitfield:1
            public const nint MBNetworkedScaleChanged = 0x0; // bitfield:1
            public const nint MBWillBeCallingPostDataUpdate = 0x0; // bitfield:1
            public const nint MBBoneMergeFlex = 0x0; // bitfield:1
            public const nint MNLatchAbsOrigin = 0x0; // bitfield:2
            public const nint MBDirtyBoneMergeBoneToRoot = 0x0; // bitfield:1
            public const nint MNHierarchicalDepth = 0xEB; // uint8
            public const nint MNHierarchyType = 0xEC; // uint8
            public const nint MNDoNotSetAnimTimeInInvalidatePhysicsCount = 0xED; // uint8
            public const nint MName = 0xF0; // CUtlStringToken
            public const nint MHierarchyAttachName = 0x130; // CUtlStringToken
            public const nint MFlZOffset = 0x134; // float32
            public const nint MVRenderOrigin = 0x138; // 
        }
        // Parent: None
        // Fields count: 0
        public static class IChoreoServices {
        }
        // Parent: None
        // Fields count: 1
        public static class CInButtonState {
            public const nint MPButtonStates = 0x8; // uint64[3]
        }
        // Parent: None
        // Fields count: 6
        public static class SequenceHistoryT {
            public const nint MHSequence = 0x0; // HSequence
            public const nint MFlSeqStartTime = 0x4; // GameTime_t
            public const nint MFlSeqFixedCycle = 0x8; // float32
            public const nint MNSeqLoopMode = 0xC; // AnimLoopMode_t
            public const nint MFlPlaybackRate = 0x10; // float32
            public const nint MFlCyclesPerSecond = 0x14; // float32
        }
        // Parent: None
        // Fields count: 0
        public static class ISkeletonAnimationController {
        }
        // Parent: ISkeletonAnimationController
        // Fields count: 1
        public static class CSkeletonAnimationController {
            public const nint MPSkeletonInstance = 0x8; // CSkeletonInstance*
        }
        // Parent: None
        // Fields count: 8
        //
        // Metadata:
        // NetworkVarNames: m_hSequence (HSequence)
        // NetworkVarNames: m_flPrevCycle (float32)
        // NetworkVarNames: m_flCycle (float32)
        public static class CNetworkedSequenceOperation {
            public const nint MHSequence = 0x8; // HSequence
            public const nint MFlPrevCycle = 0xC; // float32
            public const nint MFlCycle = 0x10; // float32
            public const nint MFlWeight = 0x14; // CNetworkedQuantizedFloat
            public const nint MBSequenceChangeNetworked = 0x1C; // bool
            public const nint MBDiscontinuity = 0x1D; // bool
            public const nint MFlPrevCycleFromDiscontinuity = 0x20; // float32
            public const nint MFlPrevCycleForAnimEventDetection = 0x24; // float32
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
            public const nint MHModel = 0xA0; // CStrongHandle< InfoForResourceTypeCModel >
            public const nint MModelName = 0xA8; // CUtlSymbolLarge
            public const nint MBClientClothCreationSuppressed = 0xE8; // bool
            public const nint MMeshGroupMask = 0x180; // uint64
            public const nint MNIdealMotionType = 0x202; // int8
            public const nint MNForceLod = 0x203; // int8
            public const nint MNClothUpdateFlags = 0x204; // int8
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
            public const nint MModelState = 0x160; // CModelState
            public const nint MBIsAnimationEnabled = 0x370; // bool
            public const nint MBUseParentRenderBounds = 0x371; // bool
            public const nint MBDisableSolidCollisionsForHierarchy = 0x372; // bool
            public const nint MBDirtyMotionType = 0x0; // bitfield:1
            public const nint MBIsGeneratingLatchedParentSpaceState = 0x0; // bitfield:1
            public const nint MMaterialGroup = 0x374; // CUtlStringToken
            public const nint MNHitboxSet = 0x378; // uint8
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_timestamp (GameTime_t)
        // NetworkVarNames: m_nWorldGroupId (WorldGroupId_t)
        public static class IntervalTimer {
            public const nint MTimestamp = 0x8; // GameTime_t
            public const nint MNWorldGroupId = 0xC; // WorldGroupId_t
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
            public const nint MDuration = 0x8; // float32
            public const nint MTimestamp = 0xC; // GameTime_t
            public const nint MTimescale = 0x10; // float32
            public const nint MNWorldGroupId = 0x14; // WorldGroupId_t
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // NetworkVarNames: m_duration (float32)
        // NetworkVarNames: m_timestamp (float32)
        // NetworkVarNames: m_timescale (float32)
        public static class EngineCountdownTimer {
            public const nint MDuration = 0x8; // float32
            public const nint MTimestamp = 0xC; // float32
            public const nint MTimescale = 0x10; // float32
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
            public const nint MFlValues = 0x10; // float32[64]
            public const nint MNValueCounts = 0x110; // int32[64]
            public const nint MNBucketCount = 0x210; // int32
            public const nint MFlInterval = 0x214; // float32
            public const nint MFlFinalValue = 0x218; // float32
            public const nint MNCompressionType = 0x21C; // TimelineCompression_t
            public const nint MBStopped = 0x220; // bool
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
            public const nint MPredNetBoolVariables = 0x8; // CNetworkUtlVectorBase< uint32 >
            public const nint MPredNetByteVariables = 0x20; // CNetworkUtlVectorBase< uint8 >
            public const nint MPredNetUInt16Variables = 0x38; // CNetworkUtlVectorBase< uint16 >
            public const nint MPredNetIntVariables = 0x50; // CNetworkUtlVectorBase< int32 >
            public const nint MPredNetUInt32Variables = 0x68; // CNetworkUtlVectorBase< uint32 >
            public const nint MPredNetUInt64Variables = 0x80; // CNetworkUtlVectorBase< uint64 >
            public const nint MPredNetFloatVariables = 0x98; // CNetworkUtlVectorBase< float32 >
            public const nint MPredNetVectorVariables = 0xB0; // CNetworkUtlVectorBase< Vector >
            public const nint MPredNetQuaternionVariables = 0xC8; // CNetworkUtlVectorBase< Quaternion >
            public const nint MPredNetGlobalSymbolVariables = 0xE0; // CNetworkUtlVectorBase< CGlobalSymbol >
            public const nint MOwnerOnlyPredNetBoolVariables = 0xF8; // CNetworkUtlVectorBase< uint32 >
            public const nint MOwnerOnlyPredNetByteVariables = 0x110; // CNetworkUtlVectorBase< uint8 >
            public const nint MOwnerOnlyPredNetUInt16Variables = 0x128; // CNetworkUtlVectorBase< uint16 >
            public const nint MOwnerOnlyPredNetIntVariables = 0x140; // CNetworkUtlVectorBase< int32 >
            public const nint MOwnerOnlyPredNetUInt32Variables = 0x158; // CNetworkUtlVectorBase< uint32 >
            public const nint MOwnerOnlyPredNetUInt64Variables = 0x170; // CNetworkUtlVectorBase< uint64 >
            public const nint MOwnerOnlyPredNetFloatVariables = 0x188; // CNetworkUtlVectorBase< float32 >
            public const nint MOwnerOnlyPredNetVectorVariables = 0x1A0; // CNetworkUtlVectorBase< Vector >
            public const nint MOwnerOnlyPredNetQuaternionVariables = 0x1B8; // CNetworkUtlVectorBase< Quaternion >
            public const nint MOwnerOnlyPredNetGlobalSymbolVariables = 0x1D0; // CNetworkUtlVectorBase< CGlobalSymbol >
            public const nint MNBoolVariablesCount = 0x1E8; // int32
            public const nint MNOwnerOnlyBoolVariablesCount = 0x1EC; // int32
            public const nint MNRandomSeedOffset = 0x1F0; // int32
            public const nint MFlLastTeleportTime = 0x1F4; // float32
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
            public const nint FollowupConcept = 0x0; // char*
            public const nint FollowupContexts = 0x8; // char*
            public const nint FollowupDelay = 0x10; // float32
            public const nint FollowupTarget = 0x14; // char*
            public const nint FollowupEntityiotarget = 0x1C; // char*
            public const nint FollowupEntityioinput = 0x24; // char*
            public const nint FollowupEntityiodelay = 0x2C; // float32
            public const nint BFired = 0x30; // bool
        }
        // Parent: None
        // Fields count: 3
        public static class ResponseParams {
            public const nint Odds = 0x10; // int16
            public const nint Flags = 0x12; // int16
            public const nint MPFollowup = 0x18; // ResponseFollowup*
        }
        // Parent: None
        // Fields count: 2
        public static class CResponseCriteriaSet {
            public const nint MNNumPrefixedContexts = 0x28; // int32
            public const nint MBOverrideOnAppend = 0x2C; // bool
        }
        // Parent: None
        // Fields count: 10
        public static class CrrResponse {
            public const nint MType = 0x0; // uint8
            public const nint MSzResponseName = 0x1; // char[192]
            public const nint MSzMatchingRule = 0xC1; // char[128]
            public const nint MParams = 0x148; // ResponseParams
            public const nint MFMatchScore = 0x168; // float32
            public const nint MSzSpeakerContext = 0x170; // char*
            public const nint MSzWorldContext = 0x178; // char*
            public const nint MFollowup = 0x180; // ResponseFollowup
            public const nint MPchCriteriaNames = 0x1B8; // CUtlVector< CUtlSymbol >
            public const nint MPchCriteriaValues = 0x1D0; // CUtlVector< char* >
        }
        // Parent: None
        // Fields count: 2
        public static class ConceptHistoryT {
            public const nint TimeSpoken = 0x0; // float32
            public const nint MResponse = 0x8; // CRR_Response
        }
        // Parent: None
        // Fields count: 9
        public static class CaiExpresser {
            public const nint MFlStopTalkTime = 0x38; // GameTime_t
            public const nint MFlStopTalkTimeWithoutDelay = 0x3C; // GameTime_t
            public const nint MFlBlockedTalkTime = 0x40; // GameTime_t
            public const nint MVoicePitch = 0x44; // int32
            public const nint MFlLastTimeAcceptedSpeak = 0x48; // GameTime_t
            public const nint MBAllowSpeakingInterrupts = 0x4C; // bool
            public const nint MBConsiderSceneInvolvementAsSpeech = 0x4D; // bool
            public const nint MNLastSpokenPriority = 0x50; // int32
            public const nint MPOuter = 0x58; // CBaseFlex*
        }
        // Parent: None
        // Fields count: 1
        public static class CResponseQueue {
            public const nint MExpresserTargets = 0x48; // CUtlVector< CAI_Expresser* >
        }
        // Parent: None
        // Fields count: 5
        public static class CResponseQueueCDeferredResponse {
            public const nint MContexts = 0x8; // CResponseCriteriaSet
            public const nint MFDispatchTime = 0x38; // float32
            public const nint MHIssuer = 0x3C; // CHandle< CBaseEntity >
            public const nint MResponse = 0x48; // CRR_Response
            public const nint MBResponseValid = 0x230; // bool
        }
        // Parent: CaiExpresser
        // Fields count: 1
        public static class CaiExpresserWithFollowup {
            public const nint MPPostponedFollowup = 0x60; // ResponseFollowup*
        }
        // Parent: CaiExpresserWithFollowup
        // Fields count: 1
        public static class CMultiplayerExpresser {
            public const nint MBAllowMultipleScenes = 0x70; // bool
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseProvideFeatureTag
        // MPulseLibraryBindings
        public static class CBaseEntityApi {
        }
        // Parent: None
        // Fields count: 10
        public static class CCommentarySystem {
            public const nint MBCommentaryConvarsChanging = 0x11; // bool
            public const nint MBCommentaryEnabledMidGame = 0x12; // bool
            public const nint MFlNextTeleportTime = 0x14; // GameTime_t
            public const nint MITeleportStage = 0x18; // int32
            public const nint MBCheatState = 0x1C; // bool
            public const nint MBIsFirstSpawnGroupToLoad = 0x1D; // bool
            public const nint MHCurrentNode = 0x38; // CHandle< CPointCommentaryNode >
            public const nint MHActiveCommentaryNode = 0x3C; // CHandle< CPointCommentaryNode >
            public const nint MHLastCommentaryNode = 0x40; // CHandle< CPointCommentaryNode >
            public const nint MVecNodes = 0x48; // CUtlVector< CHandle< CPointCommentaryNode > >
        }
        // Parent: None
        // Fields count: 1
        public static class CPhysicsShake {
            public const nint MForce = 0x8; // 
        }
        // Parent: None
        // Fields count: 16
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CGameScriptedMoveData {
            public const nint MVAccumulatedRootMotion = 0x0; // 
            public const nint MVDest = 0xC; // 
            public const nint MVSrc = 0x18; // 
            public const nint MAngSrc = 0x24; // QAngle
            public const nint MAngDst = 0x30; // QAngle
            public const nint MAngCurrent = 0x3C; // QAngle
            public const nint MFlAngRate = 0x48; // float32
            public const nint MFlDuration = 0x4C; // float32
            public const nint MFlStartTime = 0x50; // GameTime_t
            public const nint MBActive = 0x54; // bool
            public const nint MBTeleportOnEnd = 0x55; // bool
            public const nint MBIgnoreRotation = 0x56; // bool
            public const nint MNType = 0x58; // ScriptedMoveType_t
            public const nint MBSuccess = 0x5C; // bool
            public const nint MNForcedCrouchState = 0x60; // ForcedCrouchState_t
            public const nint MBIgnoreCollisions = 0x64; // bool
        }
        // Parent: IChoreoServices
        // Fields count: 5
        public static class CGameChoreoServices {
            public const nint MHOwner = 0x8; // CHandle< CBaseAnimGraph >
            public const nint MHScriptedSequence = 0xC; // CHandle< CScriptedSequence >
            public const nint MScriptState = 0x10; // IChoreoServices::ScriptState_t
            public const nint MChoreoState = 0x14; // IChoreoServices::ChoreoState_t
            public const nint MFlTimeStartedState = 0x18; // GameTime_t
        }
        // Parent: None
        // Fields count: 10
        public static class HullFlagsT {
            public const nint MBHullHuman = 0x0; // bool
            public const nint MBHullSmallCentered = 0x1; // bool
            public const nint MBHullWideHuman = 0x2; // bool
            public const nint MBHullTiny = 0x3; // bool
            public const nint MBHullMedium = 0x4; // bool
            public const nint MBHullTinyCentered = 0x5; // bool
            public const nint MBHullLarge = 0x6; // bool
            public const nint MBHullLargeCentered = 0x7; // bool
            public const nint MBHullMediumTall = 0x8; // bool
            public const nint MBHullSmall = 0x9; // bool
        }
        // Parent: None
        // Fields count: 4
        public static class CConstantForceController {
            public const nint MLinear = 0xC; // 
            public const nint MAngular = 0x18; // RotationVector
            public const nint MLinearSave = 0x24; // 
            public const nint MAngularSave = 0x30; // RotationVector
        }
        // Parent: None
        // Fields count: 4
        public static class CMotorController {
            public const nint MSpeed = 0x8; // float32
            public const nint MMaxTorque = 0xC; // float32
            public const nint MAxis = 0x10; // 
            public const nint MInertiaFactor = 0x1C; // float32
        }
        // Parent: None
        // Fields count: 4
        public static class CSoundEnvelope {
            public const nint MCurrent = 0x0; // float32
            public const nint MTarget = 0x4; // float32
            public const nint MRate = 0x8; // float32
            public const nint MForceupdate = 0xC; // bool
        }
        // Parent: None
        // Fields count: 2
        public static class CCopyRecipientFilter {
            public const nint MFlags = 0x8; // int32
            public const nint MRecipients = 0x10; // CUtlVector< CPlayerSlot >
        }
        // Parent: None
        // Fields count: 13
        public static class CSoundPatch {
            public const nint MPitch = 0x8; // CSoundEnvelope
            public const nint MVolume = 0x18; // CSoundEnvelope
            public const nint MShutdownTime = 0x30; // float32
            public const nint MFlLastTime = 0x34; // float32
            public const nint MIszSoundScriptName = 0x38; // CUtlSymbolLarge
            public const nint MHEnt = 0x40; // CHandle< CBaseEntity >
            public const nint MSoundEntityIndex = 0x44; // CEntityIndex
            public const nint MSoundOrigin = 0x48; // 
            public const nint MIsPlaying = 0x54; // int32
            public const nint MFilter = 0x58; // CCopyRecipientFilter
            public const nint MFlCloseCaptionDuration = 0x80; // float32
            public const nint MBUpdatedSoundOrigin = 0x84; // bool
            public const nint MIszClassName = 0x88; // CUtlSymbolLarge
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseProvideFeatureTag
        // MPulseLibraryBindings
        public static class CTakeDamageInfoApi {
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MPulseInstanceDomainInfo
        // MPulseLibraryBindings
        // MPulseDomainOptInFeatureTag
        public static class CPulseGraphInstanceServerEntity {
            public const nint MPComponent = 0xD8; // CPulseGraphComponentBase*
        }
        // Parent: None
        // Fields count: 4
        public static class CPulseGraphComponentBase {
            public const nint MHOwner = 0x8; // CHandle< CBaseEntity >
            public const nint MSNameFixupStaticPrefix = 0x10; // CUtlSymbolLarge
            public const nint MSNameFixupParent = 0x18; // CUtlSymbolLarge
            public const nint MSNameFixupLocal = 0x20; // CUtlSymbolLarge
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
        // Parent: CPulseCellBaseFlow
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CPulseCellSoundEventStart {
            public const nint MType = 0x48; // SoundEventStartType_t
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseLibraryBindings
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CPulseServerFuncsSounds {
        }
        // Parent: CPulseCellBaseYieldingInflow
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCellOutflowPlaySceneBase {
            public const nint MOnFinished = 0x48; // CPulse_ResumePoint
            public const nint MOnCanceled = 0x58; // CPulse_ResumePoint
            public const nint MTriggers = 0x68; // CUtlVector< CPulse_OutflowConnection >
        }
        // Parent: None
        // Fields count: 1
        public static class CPulseCellOutflowPlaySceneBaseCursorStateT {
            public const nint MSceneInstance = 0x0; // CHandle< CBaseEntity >
        }
        // Parent: None
        // Fields count: 9
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class PulseScriptedSequenceDataT {
            public const nint MNActorId = 0x0; // int32
            public const nint MSzPreIdleSequence = 0x8; // CUtlString
            public const nint MSzEntrySequence = 0x10; // CUtlString
            public const nint MSzSequence = 0x18; // CUtlString
            public const nint MSzExitSequence = 0x20; // CUtlString
            public const nint MBLoopPreIdleSequence = 0x28; // bool
            public const nint MBLoopActionSequence = 0x29; // bool
            public const nint MBLoopPostIdleSequence = 0x2A; // bool
            public const nint MBIgnoreLookAt = 0x2B; // bool
        }
        // Parent: None
        // Fields count: 1
        public static class CPulseCellOutflowScriptedSequenceCursorStateT {
            public const nint MScriptedSequence = 0x0; // CHandle< CBaseEntity >
        }
        // Parent: CEntityComponent
        // Fields count: 0
        public static class CTouchExpansionComponent {
        }
        // Parent: None
        // Fields count: 25
        public static class DynpitchvolBaseT {
            public const nint Preset = 0x0; // int32
            public const nint Pitchrun = 0x4; // int32
            public const nint Pitchstart = 0x8; // int32
            public const nint Spinup = 0xC; // int32
            public const nint Spindown = 0x10; // int32
            public const nint Volrun = 0x14; // int32
            public const nint Volstart = 0x18; // int32
            public const nint Fadein = 0x1C; // int32
            public const nint Fadeout = 0x20; // int32
            public const nint Lfotype = 0x24; // int32
            public const nint Lforate = 0x28; // int32
            public const nint Lfomodpitch = 0x2C; // int32
            public const nint Lfomodvol = 0x30; // int32
            public const nint Cspinup = 0x34; // int32
            public const nint Cspincount = 0x38; // int32
            public const nint Pitch = 0x3C; // int32
            public const nint Spinupsav = 0x40; // int32
            public const nint Spindownsav = 0x44; // int32
            public const nint Pitchfrac = 0x48; // int32
            public const nint Vol = 0x4C; // int32
            public const nint Fadeinsav = 0x50; // int32
            public const nint Fadeoutsav = 0x54; // int32
            public const nint Volfrac = 0x58; // int32
            public const nint Lfofrac = 0x5C; // int32
            public const nint Lfomult = 0x60; // int32
        }
        // Parent: DynpitchvolBaseT
        // Fields count: 0
        public static class DynpitchvolT {
        }
        // Parent: None
        // Fields count: 3
        public static class ResponseContextT {
            public const nint MIszName = 0x0; // CUtlSymbolLarge
            public const nint MIszValue = 0x8; // CUtlSymbolLarge
            public const nint MFExpirationTime = 0x10; // GameTime_t
        }
        // Parent: None
        // Fields count: 2
        public static class RelationshipT {
            public const nint Disposition = 0x0; // Disposition_t
            public const nint Priority = 0x4; // int32
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
            public const nint MCBodyComponent = 0x38; // CBodyComponent*
            public const nint MNetworkTransmitComponent = 0x40; // CNetworkTransmitComponent
            public const nint MAThinkFunctions = 0x230; // CUtlVector< thinkfunc_t >
            public const nint MICurrentThinkContext = 0x248; // int32
            public const nint MNLastThinkTick = 0x24C; // GameTick_t
            public const nint MNDisableContextThinkStartTick = 0x250; // GameTick_t
            public const nint MIsSteadyState = 0x260; // CBitVec< 64 >
            public const nint MLastNetworkChange = 0x268; // float32
            public const nint MResponseContexts = 0x278; // CUtlVector< ResponseContext_t >
            public const nint MIszResponseContext = 0x290; // CUtlSymbolLarge
            public const nint MIHealth = 0x2B8; // int32
            public const nint MIMaxHealth = 0x2BC; // int32
            public const nint MLifeState = 0x2C0; // uint8
            public const nint MFlDamageAccumulator = 0x2C4; // float32
            public const nint MBTakesDamage = 0x2C8; // bool
            public const nint MNTakeDamageFlags = 0x2CC; // TakeDamageFlags_t
            public const nint MBIsPlatform = 0x2D0; // bool
            public const nint MMoveCollide = 0x2D2; // MoveCollide_t
            public const nint MMoveType = 0x2D3; // MoveType_t
            public const nint MNActualMoveType = 0x2D4; // MoveType_t
            public const nint MNWaterTouch = 0x2D5; // uint8
            public const nint MNSlimeTouch = 0x2D6; // uint8
            public const nint MBRestoreInHierarchy = 0x2D7; // bool
            public const nint MTarget = 0x2D8; // CUtlSymbolLarge
            public const nint MHDamageFilter = 0x2E0; // CHandle< CBaseFilter >
            public const nint MIszDamageFilterName = 0x2E8; // CUtlSymbolLarge
            public const nint MFlMoveDoneTime = 0x2F0; // float32
            public const nint MNSubclassId = 0x2F4; // CUtlStringToken
            public const nint MFlAnimTime = 0x300; // float32
            public const nint MFlSimulationTime = 0x304; // float32
            public const nint MFlCreateTime = 0x308; // GameTime_t
            public const nint MBClientSideRagdoll = 0x30C; // bool
            public const nint MUbInterpolationFrame = 0x30D; // uint8
            public const nint MVPrevVPhysicsUpdatePos = 0x310; // 
            public const nint MITeamNum = 0x31C; // uint8
            public const nint MIGlobalname = 0x320; // CUtlSymbolLarge
            public const nint MISentToClients = 0x328; // int32
            public const nint MFlSpeed = 0x32C; // float32
            public const nint MSUniqueHammerId = 0x330; // CUtlString
            public const nint MSpawnflags = 0x338; // uint32
            public const nint MNNextThinkTick = 0x33C; // GameTick_t
            public const nint MNSimulationTick = 0x340; // int32
            public const nint MOnKilled = 0x348; // CEntityIOOutput
            public const nint MFFlags = 0x370; // uint32
            public const nint MVecAbsVelocity = 0x374; // 
            public const nint MVecVelocity = 0x380; // CNetworkVelocityVector
            public const nint MVecBaseVelocity = 0x3B0; // 
            public const nint MNPushEnumCount = 0x3BC; // int32
            public const nint MPCollision = 0x3C0; // CCollisionProperty*
            public const nint MHEffectEntity = 0x3C8; // CHandle< CBaseEntity >
            public const nint MHOwnerEntity = 0x3CC; // CHandle< CBaseEntity >
            public const nint MFEffects = 0x3D0; // uint32
            public const nint MHGroundEntity = 0x3D4; // CHandle< CBaseEntity >
            public const nint MFlFriction = 0x3D8; // float32
            public const nint MFlElasticity = 0x3DC; // float32
            public const nint MFlGravityScale = 0x3E0; // float32
            public const nint MFlTimeScale = 0x3E4; // float32
            public const nint MFlWaterLevel = 0x3E8; // float32
            public const nint MBAnimatedEveryTick = 0x3EC; // bool
            public const nint MBDisableLowViolence = 0x3ED; // bool
            public const nint MNWaterType = 0x3EE; // uint8
            public const nint MIEFlags = 0x3F0; // int32
            public const nint MOnUser1 = 0x3F8; // CEntityIOOutput
            public const nint MOnUser2 = 0x420; // CEntityIOOutput
            public const nint MOnUser3 = 0x448; // CEntityIOOutput
            public const nint MOnUser4 = 0x470; // CEntityIOOutput
            public const nint MIInitialTeamNum = 0x498; // int32
            public const nint MFlNavIgnoreUntilTime = 0x49C; // GameTime_t
            public const nint MVecAngVelocity = 0x4A0; // QAngle
            public const nint MBNetworkQuantizeOriginAndAngles = 0x4AC; // bool
            public const nint MBLagCompensate = 0x4AD; // bool
            public const nint MFlOverriddenFriction = 0x4B0; // float32
            public const nint MPBlocker = 0x4B4; // CHandle< CBaseEntity >
            public const nint MFlLocalTime = 0x4B8; // float32
            public const nint MFlVPhysicsUpdateLocalTime = 0x4BC; // float32
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
            public const nint MFlFadeInDuration = 0x4C0; // float32
            public const nint MFlFadeOutDuration = 0x4C4; // float32
            public const nint MFlStartFadeInWeight = 0x4C8; // float32
            public const nint MFlStartFadeOutWeight = 0x4CC; // float32
            public const nint MFlTimeStartFadeIn = 0x4D0; // GameTime_t
            public const nint MFlTimeStartFadeOut = 0x4D4; // GameTime_t
            public const nint MFlMaxWeight = 0x4D8; // float32
            public const nint MBStartDisabled = 0x4DC; // bool
            public const nint MBEnabled = 0x4DD; // bool
            public const nint MBMaster = 0x4DE; // bool
            public const nint MBClientSide = 0x4DF; // bool
            public const nint MBExclusive = 0x4E0; // bool
            public const nint MMinFalloff = 0x4E4; // float32
            public const nint MMaxFalloff = 0x4E8; // float32
            public const nint MFlCurWeight = 0x4EC; // float32
            public const nint MNetlookupFilename = 0x4F0; // char[512]
            public const nint MLookupFilename = 0x6F0; // CUtlSymbolLarge
        }
        // Parent: CBaseEntity
        // Fields count: 11
        //
        // Metadata:
        // NetworkVarNames: m_hEntAttached (CHandle< CBaseEntity>)
        // NetworkVarNames: m_bCheapEffect (bool)
        public static class CEntityFlame {
            public const nint MHEntAttached = 0x4C0; // CHandle< CBaseEntity >
            public const nint MBCheapEffect = 0x4C4; // bool
            public const nint MFlSize = 0x4C8; // float32
            public const nint MBUseHitboxes = 0x4CC; // bool
            public const nint MINumHitboxFires = 0x4D0; // int32
            public const nint MFlHitboxFireScale = 0x4D4; // float32
            public const nint MFlLifetime = 0x4D8; // GameTime_t
            public const nint MHAttacker = 0x4DC; // CHandle< CBaseEntity >
            public const nint MIDangerSound = 0x4E0; // int32
            public const nint MFlDirectDamagePerSecond = 0x4E4; // float32
            public const nint MICustomDamageType = 0x4E8; // int32
        }
        // Parent: CLogicalEntity
        // Fields count: 3
        public static class CBaseFilter {
            public const nint MBNegated = 0x4C0; // bool
            public const nint MOnPass = 0x4C8; // CEntityIOOutput
            public const nint MOnFail = 0x4F0; // CEntityIOOutput
        }
        // Parent: CBaseFilter
        // Fields count: 4
        public static class CFilterMultiple {
            public const nint MNFilterType = 0x518; // filter_t
            public const nint MIFilterName = 0x520; // CUtlSymbolLarge[10]
            public const nint MHFilter = 0x570; // CHandle< CBaseEntity >[10]
            public const nint MNFilterCount = 0x598; // int32
        }
        // Parent: CBaseFilter
        // Fields count: 1
        public static class CFilterProximity {
            public const nint MFlRadius = 0x518; // float32
        }
        // Parent: CBaseFilter
        // Fields count: 0
        public static class CFilterLos {
        }
        // Parent: CBaseFilter
        // Fields count: 1
        public static class CFilterClass {
            public const nint MIFilterClass = 0x518; // CUtlSymbolLarge
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
            public const nint MFlScale = 0x4C0; // float32
            public const nint MFlStartScale = 0x4C4; // float32
            public const nint MFlScaleTime = 0x4C8; // float32
            public const nint MNFlags = 0x4CC; // uint32
        }
        // Parent: CBaseFire
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_nFlameModelIndex (int32)
        // NetworkVarNames: m_nFlameFromAboveModelIndex (int32)
        public static class CFireSmoke {
            public const nint MNFlameModelIndex = 0x4D0; // int32
            public const nint MNFlameFromAboveModelIndex = 0x4D4; // int32
        }
        // Parent: CBaseEntity
        // Fields count: 7
        public static class CFishPool {
            public const nint MFishCount = 0x4D0; // int32
            public const nint MMaxRange = 0x4D4; // float32
            public const nint MSwimDepth = 0x4D8; // float32
            public const nint MWaterLevel = 0x4DC; // float32
            public const nint MIsDormant = 0x4E0; // bool
            public const nint MFishes = 0x4E8; // CUtlVector< CHandle< CFish > >
            public const nint MVisTimer = 0x500; // CountdownTimer
        }
        // Parent: CServerOnlyEntity
        // Fields count: 0
        public static class CInfoData {
        }
        // Parent: None
        // Fields count: 3
        public static class LocksoundT {
            public const nint SLockedSound = 0x8; // CUtlSymbolLarge
            public const nint SUnlockedSound = 0x10; // CUtlSymbolLarge
            public const nint FlwaitSound = 0x18; // GameTime_t
        }
        // Parent: CLogicalEntity
        // Fields count: 4
        public static class CLogicBranch {
            public const nint MBInValue = 0x4C0; // bool
            public const nint MListeners = 0x4C8; // CUtlVector< CHandle< CBaseEntity > >
            public const nint MOnTrue = 0x4E0; // CEntityIOOutput
            public const nint MOnFalse = 0x508; // CEntityIOOutput
        }
        // Parent: CLogicalEntity
        // Fields count: 7
        public static class CLogicDistanceCheck {
            public const nint MIszEntityA = 0x4C0; // CUtlSymbolLarge
            public const nint MIszEntityB = 0x4C8; // CUtlSymbolLarge
            public const nint MFlZone1Distance = 0x4D0; // float32
            public const nint MFlZone2Distance = 0x4D4; // float32
            public const nint MInZone1 = 0x4D8; // CEntityIOOutput
            public const nint MInZone2 = 0x500; // CEntityIOOutput
            public const nint MInZone3 = 0x528; // CEntityIOOutput
        }
        // Parent: None
        // Fields count: 3
        public static class VelocitySampler {
            public const nint MPrevSample = 0x0; // 
            public const nint MFPrevSampleTime = 0xC; // GameTime_t
            public const nint MFIdealSampleRate = 0x10; // float32
        }
        // Parent: None
        // Fields count: 3
        public static class SimpleConstraintSoundProfile {
            public const nint EKeypoints = 0x8; // SimpleConstraintSoundProfile::SimpleConstraintsSoundProfileKeypoints_t
            public const nint MKeyPoints = 0xC; // float32[2]
            public const nint MReversalSoundThresholds = 0x14; // float32[3]
        }
        // Parent: None
        // Fields count: 8
        public static class ConstraintSoundInfo {
            public const nint MVSampler = 0x8; // VelocitySampler
            public const nint MSoundProfile = 0x20; // SimpleConstraintSoundProfile
            public const nint MForwardAxis = 0x40; // 
            public const nint MIszTravelSoundFwd = 0x50; // CUtlSymbolLarge
            public const nint MIszTravelSoundBack = 0x58; // CUtlSymbolLarge
            public const nint MIszReversalSounds = 0x68; // CUtlSymbolLarge[3]
            public const nint MBPlayTravelSound = 0x80; // bool
            public const nint MBPlayReversalSound = 0x81; // bool
        }
        // Parent: None
        // Fields count: 5
        public static class CSmoothFunc {
            public const nint MFlSmoothAmplitude = 0x8; // float32
            public const nint MFlSmoothBias = 0xC; // float32
            public const nint MFlSmoothDuration = 0x10; // float32
            public const nint MFlSmoothRemainingTime = 0x14; // float32
            public const nint MNSmoothDir = 0x18; // int32
        }
        // Parent: None
        // Fields count: 1
        public static class MagnettedObjectsT {
            public const nint HEntity = 0x8; // CHandle< CBaseEntity >
        }
        // Parent: CServerOnlyPointEntity
        // Fields count: 6
        public static class CPointPrefab {
            public const nint MTargetMapName = 0x4C0; // CUtlSymbolLarge
            public const nint MForceWorldGroupId = 0x4C8; // CUtlSymbolLarge
            public const nint MAssociatedRelayTargetName = 0x4D0; // CUtlSymbolLarge
            public const nint MFixupNames = 0x4D8; // bool
            public const nint MBLoadDynamic = 0x4D9; // bool
            public const nint MAssociatedRelayEntity = 0x4DC; // CHandle< CPointPrefab >
        }
        // Parent: CBaseEntity
        // Fields count: 2
        public static class CSkyboxReference {
            public const nint MWorldGroupId = 0x4C0; // WorldGroupId_t
            public const nint MHSkyCamera = 0x4C4; // CHandle< CSkyCamera >
        }
        // Parent: CBaseEntity
        // Fields count: 4
        //
        // Metadata:
        // NetworkVarNames: m_skyboxData (sky3dparams_t)
        // NetworkVarNames: m_skyboxSlotToken (CUtlStringToken)
        public static class CSkyCamera {
            public const nint MSkyboxData = 0x4C0; // sky3dparams_t
            public const nint MSkyboxSlotToken = 0x550; // CUtlStringToken
            public const nint MBUseAngles = 0x554; // bool
            public const nint MPNext = 0x558; // CSkyCamera*
        }
        // Parent: None
        // Fields count: 12
        public static class CSound {
            public const nint MHOwner = 0x0; // CHandle< CBaseEntity >
            public const nint MHTarget = 0x4; // CHandle< CBaseEntity >
            public const nint MIVolume = 0x8; // int32
            public const nint MFlOcclusionScale = 0xC; // float32
            public const nint MIType = 0x10; // int32
            public const nint MINextAudible = 0x14; // int32
            public const nint MFlExpireTime = 0x18; // GameTime_t
            public const nint MINext = 0x1C; // int16
            public const nint MBNoExpirationTime = 0x1E; // bool
            public const nint MOwnerChannelIndex = 0x20; // int32
            public const nint MVecOrigin = 0x24; // 
            public const nint MBHasOwner = 0x30; // bool
        }
        // Parent: CServerOnlyEntity
        // Fields count: 11
        public static class CEnvSoundscape {
            public const nint MOnPlay = 0x4C0; // CEntityIOOutput
            public const nint MFlRadius = 0x4E8; // float32
            public const nint MSoundscapeName = 0x4F0; // CUtlSymbolLarge
            public const nint MSoundEventName = 0x4F8; // CUtlSymbolLarge
            public const nint MBOverrideWithEvent = 0x500; // bool
            public const nint MSoundscapeIndex = 0x504; // int32
            public const nint MSoundscapeEntityListId = 0x508; // int32
            public const nint MSoundEventHash = 0x50C; // uint32
            public const nint MPositionNames = 0x510; // CUtlSymbolLarge[8]
            public const nint MHProxySoundscape = 0x550; // CHandle< CEnvSoundscape >
            public const nint MBDisabled = 0x554; // bool
        }
        // Parent: CEnvSoundscape
        // Fields count: 1
        public static class CEnvSoundscapeProxy {
            public const nint MMainSoundscapeName = 0x558; // CUtlSymbolLarge
        }
        // Parent: CEnvSoundscape
        // Fields count: 0
        public static class CEnvSoundscapeTriggerable {
        }
        // Parent: None
        // Fields count: 6
        public static class LerpdataT {
            public const nint MHEnt = 0x0; // CHandle< CBaseEntity >
            public const nint MMoveType = 0x4; // MoveType_t
            public const nint MFlStartTime = 0x8; // GameTime_t
            public const nint MVecStartOrigin = 0xC; // 
            public const nint MQStartRot = 0x20; // Quaternion
            public const nint MNFxIndex = 0x30; // ParticleIndex_t
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNavLinkAnimgraphVar {
            public const nint MStrAnimgraphVar = 0x0; // CUtlString
            public const nint MUnAlignmentDegrees = 0x8; // uint32
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
            public const nint MVStartPos = 0xA0; // 
            public const nint MFlSearchDist = 0xAC; // float32
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
        public static class VPhysicsCollisionAttributeT {
            public const nint MNInteractsAs = 0x8; // uint64
            public const nint MNInteractsWith = 0x10; // uint64
            public const nint MNInteractsExclude = 0x18; // uint64
            public const nint MNEntityId = 0x20; // uint32
            public const nint MNOwnerId = 0x24; // uint32
            public const nint MNHierarchyId = 0x28; // uint16
            public const nint MNCollisionGroup = 0x2A; // uint8
            public const nint MNCollisionFunctionMask = 0x2B; // uint8
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
            public const nint MCollisionAttribute = 0x10; // VPhysicsCollisionAttribute_t
            public const nint MVecMins = 0x40; // 
            public const nint MVecMaxs = 0x4C; // 
            public const nint MUsSolidFlags = 0x5A; // uint8
            public const nint MNSolidType = 0x5B; // SolidType_t
            public const nint MTriggerBloat = 0x5C; // uint8
            public const nint MNSurroundType = 0x5D; // SurroundingBoundsType_t
            public const nint MCollisionGroup = 0x5E; // uint8
            public const nint MNEnablePhysics = 0x5F; // uint8
            public const nint MFlBoundingRadius = 0x60; // float32
            public const nint MVecSpecifiedSurroundingMins = 0x64; // 
            public const nint MVecSpecifiedSurroundingMaxs = 0x70; // 
            public const nint MVecSurroundingMaxs = 0x7C; // 
            public const nint MVecSurroundingMins = 0x88; // 
            public const nint MVCapsuleCenter1 = 0x94; // 
            public const nint MVCapsuleCenter2 = 0xA0; // 
            public const nint MFlCapsuleRadius = 0xAC; // float32
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
            public const nint MVOrigin = 0x8; // 
            public const nint MVStart = 0x14; // 
            public const nint MVNormal = 0x20; // 
            public const nint MVAngles = 0x2C; // QAngle
            public const nint MHEntity = 0x38; // CEntityHandle
            public const nint MHOtherEntity = 0x3C; // CEntityHandle
            public const nint MFlScale = 0x40; // float32
            public const nint MFlMagnitude = 0x44; // float32
            public const nint MFlRadius = 0x48; // float32
            public const nint MNSurfaceProp = 0x4C; // CUtlStringToken
            public const nint MNEffectIndex = 0x50; // CWeakHandle< InfoForResourceTypeIParticleSystemDefinition >
            public const nint MNDamageType = 0x58; // uint32
            public const nint MNPenetrate = 0x5C; // uint8
            public const nint MNMaterial = 0x5E; // uint16
            public const nint MNHitBox = 0x60; // uint16
            public const nint MNColor = 0x62; // uint8
            public const nint MFFlags = 0x63; // uint8
            public const nint MNAttachmentIndex = 0x64; // AttachmentHandle_t
            public const nint MNAttachmentName = 0x68; // CUtlStringToken
            public const nint MIEffectName = 0x6C; // uint16
            public const nint MNExplosionType = 0x6E; // uint8
        }
        // Parent: CBaseEntity
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_flFadeStartDist (float32)
        // NetworkVarNames: m_flFadeEndDist (float32)
        public static class CEnvDetailController {
            public const nint MFlFadeStartDist = 0x4C0; // float32
            public const nint MFlFadeEndDist = 0x4C4; // float32
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
            public const nint MFlStartTime = 0x8; // GameTime_t
            public const nint MIWindSeed = 0xC; // uint32
            public const nint MIMinWind = 0x10; // uint16
            public const nint MIMaxWind = 0x12; // uint16
            public const nint MWindRadius = 0x14; // int32
            public const nint MIMinGust = 0x18; // uint16
            public const nint MIMaxGust = 0x1A; // uint16
            public const nint MFlMinGustDelay = 0x1C; // float32
            public const nint MFlMaxGustDelay = 0x20; // float32
            public const nint MFlGustDuration = 0x24; // float32
            public const nint MIGustDirChange = 0x28; // uint16
            public const nint MLocation = 0x2C; // 
            public const nint MIszGustSound = 0x38; // int32
            public const nint MIWindDir = 0x3C; // int32
            public const nint MFlWindSpeed = 0x40; // float32
            public const nint MCurrentWindVector = 0x44; // 
            public const nint MCurrentSwayVector = 0x50; // 
            public const nint MPrevSwayVector = 0x5C; // 
            public const nint MIInitialWindDir = 0x68; // uint16
            public const nint MFlInitialWindSpeed = 0x6C; // float32
            public const nint MOnGustStart = 0x70; // CEntityIOOutput
            public const nint MOnGustEnd = 0x98; // CEntityIOOutput
            public const nint MFlVariationTime = 0xC0; // GameTime_t
            public const nint MFlSwayTime = 0xC4; // GameTime_t
            public const nint MFlSimTime = 0xC8; // GameTime_t
            public const nint MFlSwitchTime = 0xCC; // GameTime_t
            public const nint MFlAveWindSpeed = 0xD0; // float32
            public const nint MBGusting = 0xD4; // bool
            public const nint MFlWindAngleVariation = 0xD8; // float32
            public const nint MFlWindSpeedVariation = 0xDC; // float32
            public const nint MIEntIndex = 0xE0; // CEntityIndex
        }
        // Parent: None
        // Fields count: 2
        public static class CEnvWindSharedWindAveEventT {
            public const nint MFlStartWindSpeed = 0x0; // float32
            public const nint MFlAveWindSpeed = 0x4; // float32
        }
        // Parent: None
        // Fields count: 2
        public static class CEnvWindSharedWindVariationEventT {
            public const nint MFlWindAngleVariation = 0x0; // float32
            public const nint MFlWindSpeedVariation = 0x4; // float32
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
        public static class ShardModelDescT {
            public const nint MNModelId = 0x8; // int32
            public const nint MHMaterial = 0x10; // CStrongHandle< InfoForResourceTypeIMaterial2 >
            public const nint MSolid = 0x18; // ShardSolid_t
            public const nint MShatterPanelMode = 0x19; // ShatterPanelMode
            public const nint MVecPanelSize = 0x1C; // Vector2D
            public const nint MVecStressPositionA = 0x24; // Vector2D
            public const nint MVecStressPositionB = 0x2C; // Vector2D
            public const nint MVecPanelVertices = 0x38; // CNetworkUtlVectorBase< Vector2D >
            public const nint MFlGlassHalfThickness = 0x50; // float32
            public const nint MBHasParent = 0x54; // bool
            public const nint MBParentFrozen = 0x55; // bool
            public const nint MSurfacePropStringToken = 0x58; // CUtlStringToken
        }
        // Parent: None
        // Fields count: 30
        public static class CShatterGlassShard {
            public const nint MHShardHandle = 0x8; // uint32
            public const nint MVecPanelVertices = 0x10; // CUtlVector< Vector2D >
            public const nint MVLocalPanelSpaceOrigin = 0x28; // Vector2D
            public const nint MHModel = 0x30; // CStrongHandle< InfoForResourceTypeCModel >
            public const nint MHPhysicsEntity = 0x38; // CHandle< CShatterGlassShardPhysics >
            public const nint MHParentPanel = 0x3C; // CHandle< CFuncShatterglass >
            public const nint MHParentShard = 0x40; // uint32
            public const nint MShatterStressType = 0x44; // ShatterGlassStressType
            public const nint MVecStressVelocity = 0x48; // 
            public const nint MBCreatedModel = 0x54; // bool
            public const nint MFlLongestEdge = 0x58; // float32
            public const nint MFlShortestEdge = 0x5C; // float32
            public const nint MFlLongestAcross = 0x60; // float32
            public const nint MFlShortestAcross = 0x64; // float32
            public const nint MFlSumOfAllEdges = 0x68; // float32
            public const nint MFlArea = 0x6C; // float32
            public const nint MNOnFrameEdge = 0x70; // OnFrame
            public const nint MNParentPanelsNthShard = 0x74; // int32
            public const nint MNSubShardGeneration = 0x78; // int32
            public const nint MVecAverageVertPosition = 0x7C; // Vector2D
            public const nint MBAverageVertPositionIsValid = 0x84; // bool
            public const nint MVecPanelSpaceStressPositionA = 0x88; // Vector2D
            public const nint MVecPanelSpaceStressPositionB = 0x90; // Vector2D
            public const nint MBStressPositionAIsValid = 0x98; // bool
            public const nint MBStressPositionBIsValid = 0x99; // bool
            public const nint MBFlaggedForRemoval = 0x9A; // bool
            public const nint MFlPhysicsEntitySpawnedAtTime = 0x9C; // GameTime_t
            public const nint MBShatterRateLimited = 0xA0; // bool
            public const nint MHEntityHittingMe = 0xA4; // CHandle< CBaseEntity >
            public const nint MVecNeighbors = 0xA8; // CUtlVector< uint32 >
        }
        // Parent: CBaseEntity
        // Fields count: 0
        public static class CGameRulesProxy {
        }
        // Parent: None
        // Fields count: 2
        public static class CGameRules {
            public const nint MSzQuestName = 0x8; // char[128]
            public const nint MNQuestPhase = 0x88; // int32
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
            public const nint MFGlowColor = 0x8; // 
            public const nint MIGlowType = 0x30; // int32
            public const nint MIGlowTeam = 0x34; // int32
            public const nint MNGlowRange = 0x38; // int32
            public const nint MNGlowRangeMin = 0x3C; // int32
            public const nint MGlowColorOverride = 0x40; // Color
            public const nint MBFlashing = 0x44; // bool
            public const nint MFlGlowTime = 0x48; // float32
            public const nint MFlGlowStartTime = 0x4C; // float32
            public const nint MBEligibleForScreenHighlight = 0x50; // bool
            public const nint MBGlowing = 0x51; // bool
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
        public static class FogparamsT {
            public const nint DirPrimary = 0x8; // 
            public const nint ColorPrimary = 0x14; // Color
            public const nint ColorSecondary = 0x18; // Color
            public const nint ColorPrimaryLerpTo = 0x1C; // Color
            public const nint ColorSecondaryLerpTo = 0x20; // Color
            public const nint Start = 0x24; // float32
            public const nint End = 0x28; // float32
            public const nint Farz = 0x2C; // float32
            public const nint Maxdensity = 0x30; // float32
            public const nint Exponent = 0x34; // float32
            public const nint HdrColorScale = 0x38; // float32
            public const nint SkyboxFogFactor = 0x3C; // float32
            public const nint SkyboxFogFactorLerpTo = 0x40; // float32
            public const nint StartLerpTo = 0x44; // float32
            public const nint EndLerpTo = 0x48; // float32
            public const nint MaxdensityLerpTo = 0x4C; // float32
            public const nint Lerptime = 0x50; // GameTime_t
            public const nint Duration = 0x54; // float32
            public const nint Blendtobackground = 0x58; // float32
            public const nint Scattering = 0x5C; // float32
            public const nint Locallightscale = 0x60; // float32
            public const nint Enable = 0x64; // bool
            public const nint Blend = 0x65; // bool
            public const nint MBNoReflectionFog = 0x66; // bool
            public const nint MBPadding = 0x67; // bool
        }
        // Parent: None
        // Fields count: 14
        //
        // Metadata:
        // NetworkVarNames: m_hCtrl (CHandle< CFogController>)
        public static class FogplayerparamsT {
            public const nint MHCtrl = 0x8; // CHandle< CFogController >
            public const nint MFlTransitionTime = 0xC; // float32
            public const nint MOldColor = 0x10; // Color
            public const nint MFlOldStart = 0x14; // float32
            public const nint MFlOldEnd = 0x18; // float32
            public const nint MFlOldMaxDensity = 0x1C; // float32
            public const nint MFlOldHdrColorScale = 0x20; // float32
            public const nint MFlOldFarZ = 0x24; // float32
            public const nint MNewColor = 0x28; // Color
            public const nint MFlNewStart = 0x2C; // float32
            public const nint MFlNewEnd = 0x30; // float32
            public const nint MFlNewMaxDensity = 0x34; // float32
            public const nint MFlNewHdrColorScale = 0x38; // float32
            public const nint MFlNewFarZ = 0x3C; // float32
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
        public static class Sky3dparamsT {
            public const nint Scale = 0x8; // int16
            public const nint Origin = 0xC; // 
            public const nint BClip3DSkyBoxNearToWorldFar = 0x18; // bool
            public const nint FlClip3DSkyBoxNearToWorldFarOffset = 0x1C; // float32
            public const nint Fog = 0x20; // fogparams_t
            public const nint MNWorldGroupId = 0x88; // WorldGroupId_t
        }
        // Parent: None
        // Fields count: 5
        public static class SndopvarlatchdataT {
            public const nint MIszStack = 0x8; // CUtlSymbolLarge
            public const nint MIszOperator = 0x10; // CUtlSymbolLarge
            public const nint MIszOpvar = 0x18; // CUtlSymbolLarge
            public const nint MFlVal = 0x20; // float32
            public const nint MVPos = 0x24; // 
        }
        // Parent: None
        // Fields count: 0
        public static class IRagdoll {
        }
        // Parent: None
        // Fields count: 3
        public static class RagdollelementT {
            public const nint OriginParentSpace = 0x0; // 
            public const nint ParentIndex = 0x20; // int32
            public const nint MFlRadius = 0x24; // float32
        }
        // Parent: None
        // Fields count: 4
        public static class RagdollT {
            public const nint List = 0x0; // CUtlVector< ragdollelement_t >
            public const nint BoneIndex = 0x18; // CUtlVector< int32 >
            public const nint AllowStretch = 0x30; // bool
            public const nint Unused = 0x31; // bool
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // NetworkVarNames: m_Transforms (CTransform)
        // NetworkVarNames: m_hOwner (EHANDLE)
        public static class PhysicsRagdollPoseT {
            public const nint MPChainEntity = 0x8; // CNetworkVarChainer
            public const nint MTransforms = 0x30; // CNetworkUtlVectorBase< CTransform >
            public const nint MHOwner = 0x48; // CHandle< CBaseEntity >
        }
        // Parent: None
        // Fields count: 13
        public static class CSceneEventInfo {
            public const nint MILayer = 0x0; // int32
            public const nint MIPriority = 0x4; // int32
            public const nint MHSequence = 0x8; // HSequence
            public const nint MFlWeight = 0xC; // float32
            public const nint MBHasArrived = 0x10; // bool
            public const nint MNType = 0x14; // int32
            public const nint MFlNext = 0x18; // GameTime_t
            public const nint MBIsGesture = 0x1C; // bool
            public const nint MBShouldRemove = 0x1D; // bool
            public const nint MHTarget = 0x44; // CHandle< CBaseEntity >
            public const nint MNSceneEventId = 0x48; // uint32
            public const nint MBClientSide = 0x4C; // bool
            public const nint MBStarted = 0x4D; // bool
        }
        // Parent: None
        // Fields count: 4
        public static class ThinkfuncT {
            public const nint MHFn = 0x8; // HSCRIPT
            public const nint MNContext = 0x10; // CUtlStringToken
            public const nint MNNextThinkTick = 0x14; // GameTick_t
            public const nint MNLastThinkTick = 0x18; // GameTick_t
        }
        // Parent: None
        // Fields count: 2
        public static class RagdollCreationParamsT {
            public const nint MVForce = 0x0; // 
            public const nint MNForceBone = 0xC; // int32
        }
        // Parent: None
        // Fields count: 6
        public static class HudtextparmsT {
            public const nint Color1 = 0x0; // Color
            public const nint Color2 = 0x4; // Color
            public const nint Effect = 0x8; // uint8
            public const nint Channel = 0x9; // uint8
            public const nint X = 0xC; // float32
            public const nint Y = 0x10; // float32
        }
        // Parent: None
        // Fields count: 2
        public static class CSimpleSimTimer {
            public const nint MNext = 0x0; // GameTime_t
            public const nint MNWorldGroupId = 0x4; // WorldGroupId_t
        }
        // Parent: CSimpleSimTimer
        // Fields count: 1
        public static class CSimTimer {
            public const nint MInterval = 0x8; // float32
        }
        // Parent: CSimpleSimTimer
        // Fields count: 2
        public static class CRandSimTimer {
            public const nint MMinInterval = 0x8; // float32
            public const nint MMaxInterval = 0xC; // float32
        }
        // Parent: CSimpleSimTimer
        // Fields count: 1
        public static class CStopwatchBase {
            public const nint MFIsRunning = 0x8; // bool
        }
        // Parent: CStopwatchBase
        // Fields count: 0
        public static class CSimpleStopwatch {
        }
        // Parent: CStopwatchBase
        // Fields count: 1
        public static class CStopwatch {
            public const nint MInterval = 0xC; // float32
        }
        // Parent: CStopwatchBase
        // Fields count: 2
        public static class CRandStopwatch {
            public const nint MMinInterval = 0xC; // float32
            public const nint MMaxInterval = 0x10; // float32
        }
        // Parent: CGameRules
        // Fields count: 1
        public static class CSingleplayRules {
            public const nint MBSinglePlayerGameEnding = 0x90; // bool
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
            public const nint MBDisabled = 0x4C0; // bool
            public const nint MHSource = 0x4C4; // CEntityHandle
            public const nint MIszSourceEntityName = 0x4D0; // CUtlSymbolLarge
            public const nint MVLastPosition = 0x528; // 
            public const nint MIszStackName = 0x538; // CUtlSymbolLarge
            public const nint MIszOperatorName = 0x540; // CUtlSymbolLarge
            public const nint MIszOpvarName = 0x548; // CUtlSymbolLarge
            public const nint MIOpvarIndex = 0x550; // int32
            public const nint MBUseAutoCompare = 0x554; // bool
        }
        // Parent: CSoundOpvarSetPointBase
        // Fields count: 23
        public static class CSoundOpvarSetPointEntity {
            public const nint MOnEnter = 0x558; // CEntityIOOutput
            public const nint MOnExit = 0x580; // CEntityIOOutput
            public const nint MBAutoDisable = 0x5A8; // bool
            public const nint MFlDistanceMin = 0x5EC; // float32
            public const nint MFlDistanceMax = 0x5F0; // float32
            public const nint MFlDistanceMapMin = 0x5F4; // float32
            public const nint MFlDistanceMapMax = 0x5F8; // float32
            public const nint MFlOcclusionRadius = 0x5FC; // float32
            public const nint MFlOcclusionMin = 0x600; // float32
            public const nint MFlOcclusionMax = 0x604; // float32
            public const nint MFlValSetOnDisable = 0x608; // float32
            public const nint MBSetValueOnDisable = 0x60C; // bool
            public const nint MNSimulationMode = 0x610; // int32
            public const nint MNVisibilitySamples = 0x614; // int32
            public const nint MVDynamicProxyPoint = 0x618; // 
            public const nint MFlDynamicMaximumOcclusion = 0x624; // float32
            public const nint MHDynamicEntity = 0x628; // CEntityHandle
            public const nint MIszDynamicEntityName = 0x630; // CUtlSymbolLarge
            public const nint MFlPathingDistanceNormFactor = 0x638; // float32
            public const nint MVPathingSourcePos = 0x63C; // 
            public const nint MVPathingListenerPos = 0x648; // 
            public const nint MVPathingDirection = 0x654; // 
            public const nint MNPathingSourceIndex = 0x660; // int32
        }
        // Parent: CSoundOpvarSetPointEntity
        // Fields count: 9
        public static class CSoundOpvarSetAabbEntity {
            public const nint MVDistanceInnerMins = 0x668; // 
            public const nint MVDistanceInnerMaxs = 0x674; // 
            public const nint MVDistanceOuterMins = 0x680; // 
            public const nint MVDistanceOuterMaxs = 0x68C; // 
            public const nint MNAabbDirection = 0x698; // int32
            public const nint MVInnerMins = 0x69C; // 
            public const nint MVInnerMaxs = 0x6A8; // 
            public const nint MVOuterMins = 0x6B4; // 
            public const nint MVOuterMaxs = 0x6C0; // 
        }
        // Parent: CSoundOpvarSetAabbEntity
        // Fields count: 0
        public static class CSoundOpvarSetObbEntity {
        }
        // Parent: CSoundOpvarSetPointEntity
        // Fields count: 3
        public static class CSoundOpvarSetPathCornerEntity {
            public const nint MFlDistMinSqr = 0x680; // float32
            public const nint MFlDistMaxSqr = 0x684; // float32
            public const nint MIszPathCornerEntityName = 0x688; // CUtlSymbolLarge
        }
        // Parent: None
        // Fields count: 3
        public static class SoundOpvarTraceResultT {
            public const nint VPos = 0x0; // 
            public const nint BDidHit = 0xC; // bool
            public const nint FlDistSqrToCenter = 0x10; // float32
        }
        // Parent: CSoundOpvarSetPointEntity
        // Fields count: 4
        public static class CSoundOpvarSetAutoRoomEntity {
            public const nint MTraceResults = 0x668; // CUtlVector< SoundOpvarTraceResult_t >
            public const nint MFlSize = 0x698; // float32
            public const nint MFlHeightTolerance = 0x69C; // float32
            public const nint MFlSizeSqr = 0x6A0; // float32
        }
        // Parent: CSoundOpvarSetPointBase
        // Fields count: 8
        public static class CSoundOpvarSetObbWindEntity {
            public const nint MVMins = 0x558; // 
            public const nint MVMaxs = 0x564; // 
            public const nint MVDistanceMins = 0x570; // 
            public const nint MVDistanceMaxs = 0x57C; // 
            public const nint MFlWindMin = 0x588; // float32
            public const nint MFlWindMax = 0x58C; // float32
            public const nint MFlWindMapMin = 0x590; // float32
            public const nint MFlWindMapMax = 0x594; // float32
        }
        // Parent: None
        // Fields count: 18
        public static class CTakeDamageInfo {
            public const nint MVecDamageForce = 0x8; // 
            public const nint MVecDamagePosition = 0x14; // 
            public const nint MVecReportedPosition = 0x20; // 
            public const nint MVecDamageDirection = 0x2C; // 
            public const nint MHInflictor = 0x38; // CHandle< CBaseEntity >
            public const nint MHAttacker = 0x3C; // CHandle< CBaseEntity >
            public const nint MHAbility = 0x40; // CHandle< CBaseEntity >
            public const nint MFlDamage = 0x44; // float32
            public const nint MBitsDamageType = 0x48; // int32
            public const nint MIDamageCustom = 0x4C; // int32
            public const nint MIAmmoType = 0x50; // AmmoIndex_t
            public const nint MFlOriginalDamage = 0x60; // float32
            public const nint MBShouldBleed = 0x64; // bool
            public const nint MBShouldSpark = 0x65; // bool
            public const nint MNDamageFlags = 0x70; // TakeDamageFlags_t
            public const nint MNNumObjectsPenetrated = 0x74; // int32
            public const nint MHScriptInstance = 0x78; // HSCRIPT
            public const nint MBInTakeDamageFlow = 0x94; // bool
        }
        // Parent: None
        // Fields count: 2
        public static class CTakeDamageResult {
            public const nint MNHealthLost = 0x0; // int32
            public const nint MNDamageTaken = 0x4; // int32
        }
        // Parent: None
        // Fields count: 4
        public static class SummaryTakeDamageInfoT {
            public const nint NSummarisedCount = 0x0; // int32
            public const nint Info = 0x8; // CTakeDamageInfo
            public const nint Result = 0xA0; // CTakeDamageResult
            public const nint HTarget = 0xA8; // CHandle< CBaseEntity >
        }
        // Parent: None
        // Fields count: 1
        public static class CTakeDamageSummaryScopeGuard {
            public const nint MVecSummaries = 0x8; // CUtlVector< SummaryTakeDamageInfo_t* >
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
            public const nint MAttributes = 0x8; // CUtlVectorEmbeddedNetworkVar< CEconItemAttribute >
            public const nint MPManager = 0x58; // CAttributeManager*
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
            public const nint MIAttributeDefinitionIndex = 0x30; // uint16
            public const nint MFlValue = 0x34; // float32
            public const nint MFlInitialValue = 0x38; // float32
            public const nint MNRefundableCurrency = 0x3C; // int32
            public const nint MBSetBonus = 0x40; // bool
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
            public const nint MProviders = 0x8; // CUtlVector< CHandle< CBaseEntity > >
            public const nint MIReapplyProvisionParity = 0x20; // int32
            public const nint MHOuter = 0x24; // CHandle< CBaseEntity >
            public const nint MBPreventLoopback = 0x28; // bool
            public const nint MProviderType = 0x2C; // attributeprovidertypes_t
            public const nint MCachedResults = 0x30; // CUtlVector< CAttributeManager::cached_attribute_float_t >
        }
        // Parent: None
        // Fields count: 3
        public static class CAttributeManagerCachedAttributeFloatT {
            public const nint FlIn = 0x0; // float32
            public const nint IAttribHook = 0x8; // CUtlSymbolLarge
            public const nint FlOut = 0x10; // float32
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
            public const nint MItem = 0x50; // CEconItemView
        }
        // Parent: None
        // Fields count: 0
        public static class IHasAttributes {
        }
        // Parent: AmmoTypeInfoT
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class GameAmmoTypeInfoT {
            public const nint MNBuySize = 0x38; // int32
            public const nint MNCost = 0x3C; // int32
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_bSpotted (bool)
        // NetworkVarNames: m_bSpottedByMask (uint32)
        public static class EntitySpottedStateT {
            public const nint MBSpotted = 0x8; // bool
            public const nint MBSpottedByMask = 0xC; // uint32[2]
        }
        // Parent: CServerOnlyPointEntity
        // Fields count: 3
        public static class SpawnPoint {
            public const nint MIPriority = 0x4C0; // int32
            public const nint MBEnabled = 0x4C4; // bool
            public const nint MNType = 0x4C8; // int32
        }
        // Parent: SpawnPoint
        // Fields count: 9
        public static class SpawnPointCoopEnemy {
            public const nint MSzWeaponsToGive = 0x4D0; // CUtlSymbolLarge
            public const nint MSzPlayerModelToUse = 0x4D8; // CUtlSymbolLarge
            public const nint MNArmorToSpawnWith = 0x4E0; // int32
            public const nint MNDefaultBehavior = 0x4E4; // SpawnPointCoopEnemy::BotDefaultBehavior_t
            public const nint MNBotDifficulty = 0x4E8; // int32
            public const nint MBIsAgressive = 0x4EC; // bool
            public const nint MBStartAsleep = 0x4ED; // bool
            public const nint MFlHideRadius = 0x4F0; // float32
            public const nint MSzBehaviorTreeFile = 0x500; // CUtlSymbolLarge
        }
        // Parent: CGameRulesProxy
        // Fields count: 1
        //
        // Metadata:
        // NetworkVarNames: m_pGameRules (CCSGameRules*)
        public static class CcsGameRulesProxy {
            public const nint MPGameRules = 0x4C0; // CCSGameRules*
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
        public static class CcsGameRules {
            public const nint MPChainEntity = 0x98; // CNetworkVarChainer
            public const nint MCoopMissionManager = 0xC0; // CHandle< CBaseEntity >
            public const nint MBFreezePeriod = 0xC4; // bool
            public const nint MBWarmupPeriod = 0xC5; // bool
            public const nint MFWarmupPeriodEnd = 0xC8; // GameTime_t
            public const nint MFWarmupPeriodStart = 0xCC; // GameTime_t
            public const nint MNTotalPausedTicks = 0xD0; // int32
            public const nint MNPauseStartTick = 0xD4; // int32
            public const nint MBServerPaused = 0xD8; // bool
            public const nint MBGamePaused = 0xD9; // bool
            public const nint MBTerroristTimeOutActive = 0xDA; // bool
            public const nint MBCtTimeOutActive = 0xDB; // bool
            public const nint MFlTerroristTimeOutRemaining = 0xDC; // float32
            public const nint MFlCtTimeOutRemaining = 0xE0; // float32
            public const nint MNTerroristTimeOuts = 0xE4; // int32
            public const nint MNCtTimeOuts = 0xE8; // int32
            public const nint MBTechnicalTimeOut = 0xEC; // bool
            public const nint MBMatchWaitingForResume = 0xED; // bool
            public const nint MIRoundTime = 0xF0; // int32
            public const nint MFMatchStartTime = 0xF4; // float32
            public const nint MFRoundStartTime = 0xF8; // GameTime_t
            public const nint MFlRestartRoundTime = 0xFC; // GameTime_t
            public const nint MBGameRestart = 0x100; // bool
            public const nint MFlGameStartTime = 0x104; // float32
            public const nint MTimeUntilNextPhaseStarts = 0x108; // float32
            public const nint MGamePhase = 0x10C; // int32
            public const nint MTotalRoundsPlayed = 0x110; // int32
            public const nint MNRoundsPlayedThisPhase = 0x114; // int32
            public const nint MNOvertimePlaying = 0x118; // int32
            public const nint MIHostagesRemaining = 0x11C; // int32
            public const nint MBAnyHostageReached = 0x120; // bool
            public const nint MBMapHasBombTarget = 0x121; // bool
            public const nint MBMapHasRescueZone = 0x122; // bool
            public const nint MBMapHasBuyZone = 0x123; // bool
            public const nint MBIsQueuedMatchmaking = 0x124; // bool
            public const nint MNQueuedMatchmakingMode = 0x128; // int32
            public const nint MBIsValveDs = 0x12C; // bool
            public const nint MBLogoMap = 0x12D; // bool
            public const nint MBPlayAllStepSoundsOnServer = 0x12E; // bool
            public const nint MISpectatorSlotCount = 0x130; // int32
            public const nint MMatchDevice = 0x134; // int32
            public const nint MBHasMatchStarted = 0x138; // bool
            public const nint MNNextMapInMapgroup = 0x13C; // int32
            public const nint MSzTournamentEventName = 0x140; // char[512]
            public const nint MSzTournamentEventStage = 0x340; // char[512]
            public const nint MSzMatchStatTxt = 0x540; // char[512]
            public const nint MSzTournamentPredictionsTxt = 0x740; // char[512]
            public const nint MNTournamentPredictionsPct = 0x940; // int32
            public const nint MFlCmmItemDropRevealStartTime = 0x944; // GameTime_t
            public const nint MFlCmmItemDropRevealEndTime = 0x948; // GameTime_t
            public const nint MBIsDroppingItems = 0x94C; // bool
            public const nint MBIsQuestEligible = 0x94D; // bool
            public const nint MBIsHltvActive = 0x94E; // bool
            public const nint MNGuardianModeWaveNumber = 0x950; // int32
            public const nint MNGuardianModeSpecialKillsRemaining = 0x954; // int32
            public const nint MNGuardianModeSpecialWeaponNeeded = 0x958; // int32
            public const nint MNGuardianGrenadesToGiveBots = 0x95C; // int32
            public const nint MNNumHeaviesToSpawn = 0x960; // int32
            public const nint MNumGlobalGiftsGiven = 0x964; // uint32
            public const nint MNumGlobalGifters = 0x968; // uint32
            public const nint MNumGlobalGiftsPeriodSeconds = 0x96C; // uint32
            public const nint MArrFeaturedGiftersAccounts = 0x970; // uint32[4]
            public const nint MArrFeaturedGiftersGifts = 0x980; // uint32[4]
            public const nint MArrProhibitedItemIndices = 0x990; // uint16[100]
            public const nint MArrTournamentActiveCasterAccounts = 0xA58; // uint32[4]
            public const nint MNumBestOfMaps = 0xA68; // int32
            public const nint MNHalloweenMaskListSeed = 0xA6C; // int32
            public const nint MBBombDropped = 0xA70; // bool
            public const nint MBBombPlanted = 0xA71; // bool
            public const nint MIRoundWinStatus = 0xA74; // int32
            public const nint MERoundWinReason = 0xA78; // int32
            public const nint MBTCantBuy = 0xA7C; // bool
            public const nint MBCtCantBuy = 0xA7D; // bool
            public const nint MFlGuardianBuyUntilTime = 0xA80; // GameTime_t
            public const nint MIMatchStatsRoundResults = 0xA84; // int32[30]
            public const nint MIMatchStatsPlayersAliveCt = 0xAFC; // int32[30]
            public const nint MIMatchStatsPlayersAliveT = 0xB74; // int32[30]
            public const nint MTeamRespawnWaveTimes = 0xBEC; // float32[32]
            public const nint MFlNextRespawnWave = 0xC6C; // GameTime_t[32]
            public const nint MNServerQuestId = 0xCEC; // int32
            public const nint MVMinimapMins = 0xCF0; // 
            public const nint MVMinimapMaxs = 0xCFC; // 
            public const nint MMinimapVerticalSectionHeights = 0xD08; // float32[8]
            public const nint MBDontIncrementCoopWave = 0xD28; // bool
            public const nint MBSpawnedTerrorHuntHeavy = 0xD29; // bool
            public const nint MNEndMatchMapGroupVoteTypes = 0xD2C; // int32[10]
            public const nint MNEndMatchMapGroupVoteOptions = 0xD54; // int32[10]
            public const nint MNEndMatchMapVoteWinner = 0xD7C; // int32
            public const nint MINumConsecutiveCtLoses = 0xD80; // int32
            public const nint MINumConsecutiveTerroristLoses = 0xD84; // int32
            public const nint MBHasHostageBeenTouched = 0xDA0; // bool
            public const nint MFlIntermissionStartTime = 0xDA4; // GameTime_t
            public const nint MFlIntermissionEndTime = 0xDA8; // GameTime_t
            public const nint MBLevelInitialized = 0xDAC; // bool
            public const nint MITotalRoundsPlayed = 0xDB0; // int32
            public const nint MIUnBalancedRounds = 0xDB4; // int32
            public const nint MEndMatchOnRoundReset = 0xDB8; // bool
            public const nint MEndMatchOnThink = 0xDB9; // bool
            public const nint MIFreezeTime = 0xDBC; // int32
            public const nint MINumTerrorist = 0xDC0; // int32
            public const nint MINumCt = 0xDC4; // int32
            public const nint MINumSpawnableTerrorist = 0xDC8; // int32
            public const nint MINumSpawnableCt = 0xDCC; // int32
            public const nint MArrSelectedHostageSpawnIndices = 0xDD0; // CUtlVector< int32 >
            public const nint MNSpawnPointsRandomSeed = 0xDE8; // int32
            public const nint MBFirstConnected = 0xDEC; // bool
            public const nint MBCompleteReset = 0xDED; // bool
            public const nint MBPickNewTeamsOnReset = 0xDEE; // bool
            public const nint MBScrambleTeamsOnRestart = 0xDEF; // bool
            public const nint MBSwapTeamsOnRestart = 0xDF0; // bool
            public const nint MNEndMatchTiedVotes = 0xDF8; // CUtlVector< int32 >
            public const nint MBNeedToAskPlayersForContinueVote = 0xE14; // bool
            public const nint MNumQueuedMatchmakingAccounts = 0xE18; // uint32
            public const nint MPQueuedMatchmakingReservationString = 0xE20; // char*
            public const nint MNumTotalTournamentDrops = 0xE28; // uint32
            public const nint MNumSpectatorsCountMax = 0xE2C; // uint32
            public const nint MNumSpectatorsCountMaxTv = 0xE30; // uint32
            public const nint MNumSpectatorsCountMaxLnk = 0xE34; // uint32
            public const nint MBForceTeamChangeSilent = 0xE40; // bool
            public const nint MBLoadingRoundBackupData = 0xE41; // bool
            public const nint MNMatchInfoShowType = 0xE78; // int32
            public const nint MFlMatchInfoDecidedTime = 0xE7C; // float32
            public const nint MFlCoopRespawnAndHealTime = 0xE98; // float32
            public const nint MCoopBonusCoinsFound = 0xE9C; // int32
            public const nint MCoopBonusPistolsOnly = 0xEA0; // bool
            public const nint MCoopPlayersInDeploymentZone = 0xEA1; // bool
            public const nint MCoopMissionDeadPlayerRespawnEnabled = 0xEA2; // bool
            public const nint MTeamDmLastWinningTeamNumber = 0xEA4; // int32
            public const nint MTeamDmLastThinkTime = 0xEA8; // float32
            public const nint MFlTeamDmLastAnnouncementTime = 0xEAC; // float32
            public const nint MIAccountTerrorist = 0xEB0; // int32
            public const nint MIAccountCt = 0xEB4; // int32
            public const nint MISpawnPointCountTerrorist = 0xEB8; // int32
            public const nint MISpawnPointCountCt = 0xEBC; // int32
            public const nint MIMaxNumTerrorists = 0xEC0; // int32
            public const nint MIMaxNumCTs = 0xEC4; // int32
            public const nint MILoserBonus = 0xEC8; // int32
            public const nint MILoserBonusMostRecentTeam = 0xECC; // int32
            public const nint MTmNextPeriodicThink = 0xED0; // float32
            public const nint MBVoiceWonMatchBragFired = 0xED4; // bool
            public const nint MFWarmupNextChatNoticeTime = 0xED8; // float32
            public const nint MIHostagesRescued = 0xEE0; // int32
            public const nint MIHostagesTouched = 0xEE4; // int32
            public const nint MFlNextHostageAnnouncement = 0xEE8; // float32
            public const nint MBNoTerroristsKilled = 0xEEC; // bool
            public const nint MBNoCTsKilled = 0xEED; // bool
            public const nint MBNoEnemiesKilled = 0xEEE; // bool
            public const nint MBCanDonateWeapons = 0xEEF; // bool
            public const nint MFirstKillTime = 0xEF4; // float32
            public const nint MFirstBloodTime = 0xEFC; // float32
            public const nint MHostageWasInjured = 0xF18; // bool
            public const nint MHostageWasKilled = 0xF19; // bool
            public const nint MBVoteCalled = 0xF28; // bool
            public const nint MBServerVoteOnReset = 0xF29; // bool
            public const nint MFlVoteCheckThrottle = 0xF2C; // float32
            public const nint MBBuyTimeEnded = 0xF30; // bool
            public const nint MNLastFreezeEndBeep = 0xF34; // int32
            public const nint MBTargetBombed = 0xF38; // bool
            public const nint MBBombDefused = 0xF39; // bool
            public const nint MBMapHasBombZone = 0xF3A; // bool
            public const nint MVecMainCtSpawnPos = 0xF58; // 
            public const nint MCtSpawnPointsMasterList = 0xF68; // CUtlVector< SpawnPoint* >
            public const nint MTerroristSpawnPointsMasterList = 0xF80; // CUtlVector< SpawnPoint* >
            public const nint MBRespawningAllRespawnablePlayers = 0xF98; // bool
            public const nint MINextCtSpawnPoint = 0xF9C; // int32
            public const nint MFlCtSpawnPointUsedTime = 0xFA0; // float32
            public const nint MINextTerroristSpawnPoint = 0xFA4; // int32
            public const nint MFlTerroristSpawnPointUsedTime = 0xFA8; // float32
            public const nint MCtSpawnPoints = 0xFB0; // CUtlVector< SpawnPoint* >
            public const nint MTerroristSpawnPoints = 0xFC8; // CUtlVector< SpawnPoint* >
            public const nint MBIsUnreservedGameServer = 0xFE0; // bool
            public const nint MFAutobalanceDisplayTime = 0xFE4; // float32
            public const nint MBAllowWeaponSwitch = 0x1250; // bool
            public const nint MBRoundTimeWarningTriggered = 0x1251; // bool
            public const nint MPhaseChangeAnnouncementTime = 0x1254; // GameTime_t
            public const nint MFNextUpdateTeamClanNamesTime = 0x1258; // float32
            public const nint MFlLastThinkTime = 0x125C; // GameTime_t
            public const nint MFAccumulatedRoundOffDamage = 0x1260; // float32
            public const nint MNShorthandedBonusLastEvalRound = 0x1264; // int32
            public const nint MNMatchAbortedEarlyReason = 0x14E0; // int32
            public const nint MBHasTriggeredRoundStartMusic = 0x14E4; // bool
            public const nint MBHasTriggeredCoopSpawnReset = 0x14E5; // bool
            public const nint MBSwitchingTeamsAtRoundReset = 0x14E6; // bool
            public const nint MPGameModeRules = 0x1500; // CCSGameModeRules*
            public const nint MBtGlobalBlackboard = 0x1508; // KeyValues3
            public const nint MHPlayerResource = 0x1570; // CHandle< CBaseEntity >
            public const nint MRetakeRules = 0x1578; // CRetakeGameRules
            public const nint MGuardianBotSkillLevelMax = 0x175C; // int32
            public const nint MGuardianBotSkillLevelMin = 0x1760; // int32
            public const nint MArrTeamUniqueKillWeaponsMatch = 0x1768; // CUtlVector< int32 >[4]
            public const nint MBTeamLastKillUsedUniqueWeaponMatch = 0x17C8; // bool[4]
            public const nint MNMatchEndCount = 0x17F0; // uint8
            public const nint MNTTeamIntroVariant = 0x17F4; // int32
            public const nint MNCtTeamIntroVariant = 0x17F8; // int32
            public const nint MBTeamIntroPeriod = 0x17FC; // bool
            public const nint MFTeamIntroPeriodEnd = 0x1800; // GameTime_t
            public const nint MBPlayedTeamIntroVo = 0x1804; // bool
            public const nint MIRoundEndWinnerTeam = 0x1808; // int32
            public const nint MERoundEndReason = 0x180C; // int32
            public const nint MBRoundEndShowTimerDefend = 0x1810; // bool
            public const nint MIRoundEndTimerTime = 0x1814; // int32
            public const nint MSRoundEndFunFactToken = 0x1818; // CUtlString
            public const nint MIRoundEndFunFactPlayerSlot = 0x1820; // CPlayerSlot
            public const nint MIRoundEndFunFactData1 = 0x1824; // int32
            public const nint MIRoundEndFunFactData2 = 0x1828; // int32
            public const nint MIRoundEndFunFactData3 = 0x182C; // int32
            public const nint MSRoundEndMessage = 0x1830; // CUtlString
            public const nint MIRoundEndPlayerCount = 0x1838; // int32
            public const nint MBRoundEndNoMusic = 0x183C; // bool
            public const nint MIRoundEndLegacy = 0x1840; // int32
            public const nint MNRoundEndCount = 0x1844; // uint8
            public const nint MIRoundStartRoundNumber = 0x1848; // int32
            public const nint MNRoundStartCount = 0x184C; // uint8
            public const nint MFlLastPerfSampleTime = 0x5858; // float64
            public const nint MBSkipNextServerPerfSample = 0x5860; // bool
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseProvideFeatureTag
        // MPulseLibraryBindings
        public static class CcsTakeDamageInfoApi {
        }
        // Parent: None
        // Fields count: 1
        public static class CcsGameModeRules {
            public const nint MPChainEntity = 0x8; // CNetworkVarChainer
        }
        // Parent: CcsGameModeRules
        // Fields count: 0
        public static class CcsGameModeRulesNoop {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseInstanceDomainInfo
        // MPulseLibraryBindings
        // MPulseDomainOptInFeatureTag
        public static class CcsGameModeScript {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseLibraryBindings
        public static class CcsGameModeScriptConVars {
        }
        // Parent: CcsGameModeRules
        // Fields count: 1
        //
        // Metadata:
        // NetworkVarNames: m_WeaponSequence (CUtlString)
        public static class CcsGameModeRulesArmsRace {
            public const nint MWeaponSequence = 0x38; // CNetworkUtlVectorBase< CUtlString >
        }
        // Parent: CcsGameModeScript
        // Fields count: 1
        //
        // Metadata:
        // MPulseInstanceDomainInfo
        // MPulseLibraryBindings
        // MPulseDomainOptInFeatureTag
        public static class CcsArmsRaceScript {
            public const nint MPOuter = 0xD8; // CCSGameModeRules_ArmsRace*
        }
        // Parent: CcsGameModeRules
        // Fields count: 3
        //
        // Metadata:
        // NetworkVarNames: m_flDMBonusStartTime (GameTime_t)
        // NetworkVarNames: m_flDMBonusTimeLength (float)
        // NetworkVarNames: m_nDMBonusWeaponLoadoutSlot (int16)
        public static class CcsGameModeRulesDeathmatch {
            public const nint MFlDmBonusStartTime = 0x38; // GameTime_t
            public const nint MFlDmBonusTimeLength = 0x3C; // float32
            public const nint MNDmBonusWeaponLoadoutSlot = 0x40; // int16
        }
        // Parent: CcsGameModeScript
        // Fields count: 1
        //
        // Metadata:
        // MPulseInstanceDomainInfo
        // MPulseLibraryBindings
        // MPulseDomainOptInFeatureTag
        public static class CcsDeathmatchScript {
            public const nint MPOuter = 0xD8; // CCSGameModeRules_Deathmatch*
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseLibraryBindings
        public static class CcsDeathmatchScriptConVars {
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
            public const nint MNMatchSeed = 0xF8; // int32
            public const nint MBBlockersPresent = 0xFC; // bool
            public const nint MBRoundInProgress = 0xFD; // bool
            public const nint MIFirstSecondHalfRound = 0x100; // int32
            public const nint MIBombSite = 0x104; // int32
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
        public static class CsPerRoundStatsT {
            public const nint MIKills = 0x30; // int32
            public const nint MIDeaths = 0x34; // int32
            public const nint MIAssists = 0x38; // int32
            public const nint MIDamage = 0x3C; // int32
            public const nint MIEquipmentValue = 0x40; // int32
            public const nint MIMoneySaved = 0x44; // int32
            public const nint MIKillReward = 0x48; // int32
            public const nint MILiveTime = 0x4C; // int32
            public const nint MIHeadShotKills = 0x50; // int32
            public const nint MIObjective = 0x54; // int32
            public const nint MICashEarned = 0x58; // int32
            public const nint MIUtilityDamage = 0x5C; // int32
            public const nint MIEnemiesFlashed = 0x60; // int32
        }
        // Parent: CsPerRoundStatsT
        // Fields count: 21
        //
        // Metadata:
        // NetworkVarNames: m_iEnemy5Ks (int)
        // NetworkVarNames: m_iEnemy4Ks (int)
        // NetworkVarNames: m_iEnemy3Ks (int)
        // NetworkVarNames: m_iEnemyKnifeKills (int)
        // NetworkVarNames: m_iEnemyTaserKills (int)
        public static class CsMatchStatsT {
            public const nint MIEnemy5Ks = 0x68; // int32
            public const nint MIEnemy4Ks = 0x6C; // int32
            public const nint MIEnemy3Ks = 0x70; // int32
            public const nint MIEnemyKnifeKills = 0x74; // int32
            public const nint MIEnemyTaserKills = 0x78; // int32
            public const nint MIEnemy2Ks = 0x7C; // int32
            public const nint MIUtilityCount = 0x80; // int32
            public const nint MIUtilitySuccesses = 0x84; // int32
            public const nint MIUtilityEnemies = 0x88; // int32
            public const nint MIFlashCount = 0x8C; // int32
            public const nint MIFlashSuccesses = 0x90; // int32
            public const nint MNHealthPointsRemovedTotal = 0x94; // int32
            public const nint MNHealthPointsDealtTotal = 0x98; // int32
            public const nint MNShotsFiredTotal = 0x9C; // int32
            public const nint MNShotsOnTargetTotal = 0xA0; // int32
            public const nint MI1v1Count = 0xA4; // int32
            public const nint MI1v1Wins = 0xA8; // int32
            public const nint MI1v2Count = 0xAC; // int32
            public const nint MI1v2Wins = 0xB0; // int32
            public const nint MIEntryCount = 0xB4; // int32
            public const nint MIEntryWins = 0xB8; // int32
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
        public static class CcsgoTeamPreviewCharacterPosition {
            public const nint MNVariant = 0x4C0; // int32
            public const nint MNRandom = 0x4C4; // int32
            public const nint MNOrdinal = 0x4C8; // int32
            public const nint MSWeaponName = 0x4D0; // CUtlString
            public const nint MXuid = 0x4D8; // uint64
            public const nint MAgentItem = 0x4E0; // CEconItemView
            public const nint MGlovesItem = 0x758; // CEconItemView
            public const nint MWeaponItem = 0x9D0; // CEconItemView
        }
        // Parent: CcsgoTeamPreviewCharacterPosition
        // Fields count: 0
        public static class CcsgoTeamSelectCharacterPosition {
        }
        // Parent: CcsgoTeamSelectCharacterPosition
        // Fields count: 0
        public static class CcsgoTeamSelectTerroristPosition {
        }
        // Parent: CcsgoTeamSelectCharacterPosition
        // Fields count: 0
        public static class CcsgoTeamSelectCounterTerroristPosition {
        }
        // Parent: CcsgoTeamPreviewCharacterPosition
        // Fields count: 0
        public static class CcsgoTeamIntroCharacterPosition {
        }
        // Parent: CcsgoTeamIntroCharacterPosition
        // Fields count: 0
        public static class CcsgoTeamIntroTerroristPosition {
        }
        // Parent: CcsgoTeamIntroCharacterPosition
        // Fields count: 0
        public static class CcsgoTeamIntroCounterTerroristPosition {
        }
        // Parent: CcsgoTeamIntroCharacterPosition
        // Fields count: 0
        public static class CcsgoWingmanIntroCharacterPosition {
        }
        // Parent: CcsgoWingmanIntroCharacterPosition
        // Fields count: 0
        public static class CcsgoWingmanIntroTerroristPosition {
        }
        // Parent: CcsgoWingmanIntroCharacterPosition
        // Fields count: 0
        public static class CcsgoWingmanIntroCounterTerroristPosition {
        }
        // Parent: CBaseEntity
        // Fields count: 0
        public static class CcsMinimapBoundary {
        }
        // Parent: None
        // Fields count: 0
        public static class CcsgoPlayerAnimGraphState {
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
            public const nint MHPlayer = 0x4C8; // CHandle< CCSPlayerPawn >
            public const nint MHPingedEntity = 0x4CC; // CHandle< CBaseEntity >
            public const nint MIType = 0x4D0; // int32
            public const nint MBUrgent = 0x4D4; // bool
            public const nint MSzPlaceName = 0x4D5; // char[18]
        }
        // Parent: CPlayerPawnComponent
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_hPlayerPing (CHandle< CBaseEntity>)
        public static class CcsPlayerPingServices {
            public const nint MFlPlayerPingTokens = 0x40; // GameTime_t[5]
            public const nint MHPlayerPing = 0x54; // CHandle< CBaseEntity >
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
        public static class CcsPlayerResource {
            public const nint MBHostageAlive = 0x4C0; // bool[12]
            public const nint MIsHostageFollowingSomeone = 0x4CC; // bool[12]
            public const nint MIHostageEntityIDs = 0x4D8; // CEntityIndex[12]
            public const nint MBombsiteCenterA = 0x508; // 
            public const nint MBombsiteCenterB = 0x514; // 
            public const nint MHostageRescueX = 0x520; // int32[4]
            public const nint MHostageRescueY = 0x530; // int32[4]
            public const nint MHostageRescueZ = 0x540; // int32[4]
            public const nint MBEndMatchNextMapAllVoted = 0x550; // bool
            public const nint MFoundGoalPositions = 0x551; // bool
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseProvideFeatureTag
        // MPulseLibraryBindings
        public static class CcsPlayerControllerApi {
        }
        // Parent: CPlayerPawnComponent
        // Fields count: 0
        public static class CPlayerViewModelServices {
        }
    }
    // Module: soundsystem.dll
    // Classes count: 50
    // Enums count: 13
    public static class Soundsystem {
        // Alignment: 4
        // Members count: 30
        public enum SoundlevelT : int {
            SndlvlNone = 0,
            Sndlvl20dB = 20,
            Sndlvl25dB = 25,
            Sndlvl30dB = 30,
            Sndlvl35dB = 35,
            Sndlvl40dB = 40,
            Sndlvl45dB = 45,
            Sndlvl50dB = 50,
            Sndlvl55dB = 55,
            SndlvlIdle = 60,
            Sndlvl60dB = 60,
            Sndlvl65dB = 65,
            SndlvlStatic = 66,
            Sndlvl70dB = 70,
            SndlvlNorm = 75,
            Sndlvl75dB = 75,
            Sndlvl80dB = 80,
            SndlvlTalking = 80,
            Sndlvl85dB = 85,
            Sndlvl90dB = 90,
            Sndlvl95dB = 95,
            Sndlvl100dB = 100,
            Sndlvl105dB = 105,
            Sndlvl110dB = 110,
            Sndlvl120dB = 120,
            Sndlvl130dB = 130,
            SndlvlGunfire = 140,
            Sndlvl140dB = 140,
            Sndlvl150dB = 150,
            Sndlvl180dB = 180
        }
        // Alignment: 4
        // Members count: 6
        public enum ActionTypeT : int {
            SosActionNone = 0,
            SosActionLimiter = 1,
            SosActionTimeLimit = 2,
            SosActionTimeBlockLimiter = 3,
            SosActionSetSoundeventParam = 4,
            SosActionSoundeventCluster = 5
        }
        // Alignment: 4
        // Members count: 3
        public enum SosActionStopTypeT : int {
            SosStoptypeNone = 0,
            SosStoptypeTime = 1,
            SosStoptypeOpvar = 2
        }
        // Alignment: 4
        // Members count: 2
        public enum SosActionSortTypeT : int {
            SosSorttypeHighest = 0,
            SosSorttypeLowest = 1
        }
        // Alignment: 4
        // Members count: 2
        public enum SosGroupTypeT : int {
            SosGrouptypeDynamic = 0,
            SosGrouptypeStatic = 1
        }
        // Alignment: 4
        // Members count: 6
        public enum SosEditItemTypeT : int {
            SosEditItemTypeSoundevents = 0,
            SosEditItemTypeSoundevent = 1,
            SosEditItemTypeLibrarystacks = 2,
            SosEditItemTypeStack = 3,
            SosEditItemTypeOperator = 4,
            SosEditItemTypeField = 5
        }
        // Alignment: 2
        // Members count: 10
        public enum VMixFilterTypeT : short {
            FilterUnknown = -1,
            FilterLowpass = 0,
            FilterHighpass = 1,
            FilterBandpass = 2,
            FilterNotch = 3,
            FilterPeakingEq = 4,
            FilterLowShelf = 5,
            FilterHighShelf = 6,
            FilterAllpass = 7,
            FilterPassthrough = 8
        }
        // Alignment: 1
        // Members count: 9
        public enum VMixFilterSlopeT : sbyte {
            FilterSlope1pole6dB = 0,
            FilterSlope1pole12dB = 1,
            FilterSlope1pole18dB = 2,
            FilterSlope1pole24dB = 3,
            FilterSlope12dB = 4,
            FilterSlope24dB = 5,
            FilterSlope36dB = 6,
            FilterSlope48dB = 7,
            FilterSlopeMax = 7
        }
        // Alignment: 2
        // Members count: 30
        public enum VMixProcessorTypeT : short {
            VprocessorUnknown = 0,
            VprocessorSteamaudioReverb = 1,
            VprocessorRtPitch = 2,
            VprocessorSteamaudioHrtf = 3,
            VprocessorDynamics = 4,
            VprocessorPresetdsp = 5,
            VprocessorDelay = 6,
            VprocessorModDelay = 7,
            VprocessorDiffusor = 8,
            VprocessorBoxverb = 9,
            VprocessorFreeverb = 10,
            VprocessorPlateverb = 11,
            VprocessorFullwaveIntegrator = 12,
            VprocessorFilter = 13,
            VprocessorSteamaudioPathing = 14,
            VprocessorEq8 = 15,
            VprocessorEnvelope = 16,
            VprocessorVocoder = 17,
            VprocessorConvolution = 18,
            VprocessorDynamics3band = 19,
            VprocessorDynamicsCompressor = 20,
            VprocessorShaper = 21,
            VprocessorPanner = 22,
            VprocessorUtility = 23,
            VprocessorAutofilter = 24,
            VprocessorOsc = 25,
            VprocessorStereodelay = 26,
            VprocessorEffectChain = 27,
            VprocessorSubgraphSwitch = 28,
            VprocessorSteamaudioDirect = 29
        }
        // Alignment: 4
        // Members count: 5
        public enum VMixLfoShapeT : int {
            LfoShapeSine = 0,
            LfoShapeSquare = 1,
            LfoShapeTri = 2,
            LfoShapeSaw = 3,
            LfoShapeNoise = 4
        }
        // Alignment: 4
        // Members count: 2
        public enum VMixPannerTypeT : int {
            PannerTypeLinear = 0,
            PannerTypeEqualPower = 1
        }
        // Alignment: 4
        // Members count: 3
        public enum VMixSubgraphSwitchInterpolationTypeT : int {
            SubgraphInterpolationTemporalCrossfade = 0,
            SubgraphInterpolationTemporalFadeOut = 1,
            SubgraphInterpolationKeepLastSubgraphRunning = 2
        }
        // Alignment: 4
        // Members count: 6
        public enum VMixChannelOperationT : int {
            VmixChanStereo = 0,
            VmixChanLeft = 1,
            VmixChanRight = 2,
            VmixChanSwap = 3,
            VmixChanMono = 4,
            VmixChanMidSide = 5
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyElementNameFn
        public static class CSosGroupActionSchema {
            public const nint MName = 0x8; // CUtlString
            public const nint MActionType = 0x10; // ActionType_t
            public const nint MActionInstanceType = 0x14; // ActionType_t
        }
        // Parent: CSosGroupActionSchema
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSosGroupActionLimitSchema {
            public const nint MNMaxCount = 0x18; // int32
            public const nint MNStopType = 0x1C; // SosActionStopType_t
            public const nint MNSortType = 0x20; // SosActionSortType_t
        }
        // Parent: CSosGroupActionSchema
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSosGroupActionTimeLimitSchema {
            public const nint MFlMaxDuration = 0x18; // float32
        }
        // Parent: CSosGroupActionSchema
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSosGroupActionTimeBlockLimitSchema {
            public const nint MNMaxCount = 0x18; // int32
            public const nint MFlMaxDuration = 0x1C; // float32
        }
        // Parent: CSosGroupActionSchema
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSosGroupActionSetSoundeventParameterSchema {
            public const nint MNMaxCount = 0x18; // int32
            public const nint MFlMinValue = 0x1C; // float32
            public const nint MFlMaxValue = 0x20; // float32
            public const nint MOpvarName = 0x28; // CUtlString
            public const nint MNSortType = 0x30; // SosActionSortType_t
        }
        // Parent: CSosGroupActionSchema
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSosGroupActionSoundeventClusterSchema {
            public const nint MNMinNearby = 0x18; // int32
            public const nint MFlClusterEpsilon = 0x1C; // float32
            public const nint MShouldPlayOpvar = 0x20; // CUtlString
            public const nint MShouldPlayClusterChild = 0x28; // CUtlString
            public const nint MClusterSizeOpvar = 0x30; // CUtlString
            public const nint MGroupBoundingBoxMinsOpvar = 0x38; // CUtlString
            public const nint MGroupBoundingBoxMaxsOpvar = 0x40; // CUtlString
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSosGroupBranchPattern {
            public const nint MBMatchEventName = 0x8; // bool
            public const nint MBMatchEventSubString = 0x9; // bool
            public const nint MBMatchEntIndex = 0xA; // bool
            public const nint MBMatchOpvar = 0xB; // bool
        }
        // Parent: CSosGroupBranchPattern
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSosGroupMatchPattern {
            public const nint MMatchSoundEventName = 0x10; // CUtlString
            public const nint MMatchSoundEventSubString = 0x18; // CUtlString
            public const nint MFlEntIndex = 0x20; // float32
            public const nint MFlOpvar = 0x24; // float32
        }
        // Parent: None
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyElementNameFn
        public static class CSosSoundEventGroupSchema {
            public const nint MName = 0x0; // CUtlString
            public const nint MNType = 0x8; // SosGroupType_t
            public const nint MBIsBlocking = 0xC; // bool
            public const nint MNBlockMaxCount = 0x10; // int32
            public const nint MBInvertMatch = 0x14; // bool
            public const nint MMatchPattern = 0x18; // CSosGroupMatchPattern
            public const nint MBranchPattern = 0x40; // CSosGroupBranchPattern
            public const nint MVActions = 0xB0; // CSosGroupActionSchema*[4]
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSosSoundEventGroupListSchema {
            public const nint MGroupList = 0x0; // CUtlVector< CSosSoundEventGroupSchema >
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class SosEditItemInfoT {
            public const nint ItemType = 0x0; // SosEditItemType_t
            public const nint ItemName = 0x8; // CUtlString
            public const nint ItemTypeName = 0x10; // CUtlString
            public const nint ItemKvString = 0x20; // CUtlString
            public const nint ItemPos = 0x28; // Vector2D
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class SelectedEditItemInfoT {
            public const nint MEditItems = 0x0; // CUtlVector< SosEditItemInfo_t >
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSoundEventMetaData {
            public const nint MSoundEventVMix = 0x0; // CStrongHandle< InfoForResourceTypeCVMixListResource >
        }
        // Parent: None
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CdspMixgroupModifier {
            public const nint MMixgroup = 0x0; // CUtlString
            public const nint MFlModifier = 0x8; // float32
            public const nint MFlModifierMin = 0xC; // float32
            public const nint MFlSourceModifier = 0x10; // float32
            public const nint MFlSourceModifierMin = 0x14; // float32
            public const nint MFlListenerReverbModifierWhenSourceReverbIsActive = 0x18; // float32
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CDspPresetModifierList {
            public const nint MDspName = 0x0; // CUtlString
            public const nint MModifiers = 0x8; // CUtlVector< CDSPMixgroupModifier >
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVoiceContainerBase {
            public const nint MCurves = 0x20; // CUtlDict< CPiecewiseCurve, F( size=1 ) >
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
            public const nint MWavFilePath = 0x60; // CUtlString
        }
        // Parent: CVoiceContainerWavFileReader
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVoiceContainerTestConstant {
            public const nint MFlTestConstantParam = 0x68; // bool
        }
        // Parent: CVoiceContainerBase
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVoiceContainerTestNestedDynamic {
            public const nint MSoundToPlay = 0x60; // CStrongHandle< InfoForResourceTypeCVoiceContainerBase >
            public const nint MFlTestConstantParam = 0x68; // float32
        }
        // Parent: CVoiceContainerBase
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVoiceContainerDecayingSineWave {
            public const nint MFlFrequency = 0x60; // float32
            public const nint MFlDecayTime = 0x64; // float32
        }
        // Parent: CVoiceContainerDecayingSineWave
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVoiceContainerAmpedDecayingSineWave {
            public const nint MFlGainAmount = 0x68; // float32
        }
        // Parent: CVoiceContainerBase
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVoiceContainerRealtimeFmSineWave {
            public const nint MFlCarrierFrequency = 0x60; // float32
            public const nint MFlModulatorFrequency = 0x64; // float32
            public const nint MFlModulatorAmount = 0x68; // float32
        }
        // Parent: CVoiceContainerBase
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVoiceContainerBlend {
            public const nint MHSoundOne = 0x60; // CStrongHandle< InfoForResourceTypeCVoiceContainerBase >
            public const nint MHSoundTwo = 0x68; // CStrongHandle< InfoForResourceTypeCVoiceContainerBase >
            public const nint MFlBlendAmount = 0x70; // float32
        }
        // Parent: CVoiceContainerBase
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVoiceContainerEngineSound {
            public const nint MSoundToPlay = 0x60; // CStrongHandle< InfoForResourceTypeCVoiceContainerBase >
            public const nint MFlTestConstantParam = 0x68; // float32
            public const nint MFlTestSoundEventBoundParam = 0x6C; // float32
            public const nint MFlEngineRpm = 0x70; // float32
        }
        // Parent: CVoiceContainerWavFileReader
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVoiceContainerEnvelopeAnalyzer {
            public const nint MEnvBuffer = 0x68; // CUtlVector< float32 >
        }
        // Parent: CVoiceContainerBase
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVoiceContainerRandomSampler {
            public const nint MFlLoudAmplitude = 0x60; // float32
            public const nint MFlLoudAmplitudeJitter = 0x64; // float32
            public const nint MFlSoftAmplitude = 0x68; // float32
            public const nint MFlSoftAmplitudeJitter = 0x6C; // float32
            public const nint MFlLoudTimeJitter = 0x70; // float32
            public const nint MFlSoftTimeJitter = 0x74; // float32
            public const nint MGrainResources = 0x78; // CUtlVector< CStrongHandle< InfoForResourceTypeCVoiceContainerBase > >
        }
        // Parent: None
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VMixFilterDescT {
            public const nint MNFilterType = 0x0; // VMixFilterType_t
            public const nint MNFilterSlope = 0x2; // VMixFilterSlope_t
            public const nint MBEnabled = 0x3; // bool
            public const nint MFldbGain = 0x4; // float32
            public const nint MFlCutoffFreq = 0x8; // float32
            public const nint MFlQ = 0xC; // float32
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VMixEq8DescT {
            public const nint MStages = 0x0; // VMixFilterDesc_t[8]
        }
        // Parent: None
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VMixDelayDescT {
            public const nint MFeedbackFilter = 0x0; // VMixFilterDesc_t
            public const nint MBEnableFilter = 0x10; // bool
            public const nint MFlDelay = 0x14; // float32
            public const nint MFlDirectGain = 0x18; // float32
            public const nint MFlDelayGain = 0x1C; // float32
            public const nint MFlFeedbackGain = 0x20; // float32
            public const nint MFlWidth = 0x24; // float32
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VMixPannerDescT {
            public const nint MType = 0x0; // VMixPannerType_t
            public const nint MFlStrength = 0x4; // float32
        }
        // Parent: None
        // Fields count: 9
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VMixModDelayDescT {
            public const nint MFeedbackFilter = 0x0; // VMixFilterDesc_t
            public const nint MBPhaseInvert = 0x10; // bool
            public const nint MFlGlideTime = 0x14; // float32
            public const nint MFlDelay = 0x18; // float32
            public const nint MFlOutputGain = 0x1C; // float32
            public const nint MFlFeedbackGain = 0x20; // float32
            public const nint MFlModRate = 0x24; // float32
            public const nint MFlModDepth = 0x28; // float32
            public const nint MBApplyAntialiasing = 0x2C; // bool
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VMixDiffusorDescT {
            public const nint MFlSize = 0x0; // float32
            public const nint MFlComplexity = 0x4; // float32
            public const nint MFlFeedback = 0x8; // float32
            public const nint MFlOutputGain = 0xC; // float32
        }
        // Parent: None
        // Fields count: 17
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VMixBoxverbDescT {
            public const nint MFlSizeMax = 0x0; // float32
            public const nint MFlSizeMin = 0x4; // float32
            public const nint MFlComplexity = 0x8; // float32
            public const nint MFlDiffusion = 0xC; // float32
            public const nint MFlModDepth = 0x10; // float32
            public const nint MFlModRate = 0x14; // float32
            public const nint MBParallel = 0x18; // bool
            public const nint MFilterType = 0x1C; // VMixFilterDesc_t
            public const nint MFlWidth = 0x2C; // float32
            public const nint MFlHeight = 0x30; // float32
            public const nint MFlDepth = 0x34; // float32
            public const nint MFlFeedbackScale = 0x38; // float32
            public const nint MFlFeedbackWidth = 0x3C; // float32
            public const nint MFlFeedbackHeight = 0x40; // float32
            public const nint MFlFeedbackDepth = 0x44; // float32
            public const nint MFlOutputGain = 0x48; // float32
            public const nint MFlTaps = 0x4C; // float32
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VMixFreeverbDescT {
            public const nint MFlRoomSize = 0x0; // float32
            public const nint MFlDamp = 0x4; // float32
            public const nint MFlWidth = 0x8; // float32
            public const nint MFlLateReflections = 0xC; // float32
        }
        // Parent: None
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VMixPlateverbDescT {
            public const nint MFlPrefilter = 0x0; // float32
            public const nint MFlInputDiffusion1 = 0x4; // float32
            public const nint MFlInputDiffusion2 = 0x8; // float32
            public const nint MFlDecay = 0xC; // float32
            public const nint MFlDamp = 0x10; // float32
            public const nint MFlFeedbackDiffusion1 = 0x14; // float32
            public const nint MFlFeedbackDiffusion2 = 0x18; // float32
        }
        // Parent: None
        // Fields count: 12
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VMixDynamicsDescT {
            public const nint MFldbGain = 0x0; // float32
            public const nint MFldbNoiseGateThreshold = 0x4; // float32
            public const nint MFldbCompressionThreshold = 0x8; // float32
            public const nint MFldbLimiterThreshold = 0xC; // float32
            public const nint MFldbKneeWidth = 0x10; // float32
            public const nint MFlRatio = 0x14; // float32
            public const nint MFlLimiterRatio = 0x18; // float32
            public const nint MFlAttackTimeMs = 0x1C; // float32
            public const nint MFlReleaseTimeMs = 0x20; // float32
            public const nint MFlRmsTimeMs = 0x24; // float32
            public const nint MFlWetMix = 0x28; // float32
            public const nint MBPeakMode = 0x2C; // bool
        }
        // Parent: None
        // Fields count: 9
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VMixDynamicsCompressorDescT {
            public const nint MFldbOutputGain = 0x0; // float32
            public const nint MFldbCompressionThreshold = 0x4; // float32
            public const nint MFldbKneeWidth = 0x8; // float32
            public const nint MFlCompressionRatio = 0xC; // float32
            public const nint MFlAttackTimeMs = 0x10; // float32
            public const nint MFlReleaseTimeMs = 0x14; // float32
            public const nint MFlRmsTimeMs = 0x18; // float32
            public const nint MFlWetMix = 0x1C; // float32
            public const nint MBPeakMode = 0x20; // bool
        }
        // Parent: None
        // Fields count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VMixDynamicsBandT {
            public const nint MFldbGainInput = 0x0; // float32
            public const nint MFldbGainOutput = 0x4; // float32
            public const nint MFldbThresholdBelow = 0x8; // float32
            public const nint MFldbThresholdAbove = 0xC; // float32
            public const nint MFlRatioBelow = 0x10; // float32
            public const nint MFlRatioAbove = 0x14; // float32
            public const nint MFlAttackTimeMs = 0x18; // float32
            public const nint MFlReleaseTimeMs = 0x1C; // float32
            public const nint MBEnable = 0x20; // bool
            public const nint MBSolo = 0x21; // bool
        }
        // Parent: None
        // Fields count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VMixDynamics3BandDescT {
            public const nint MFldbGainOutput = 0x0; // float32
            public const nint MFlRmsTimeMs = 0x4; // float32
            public const nint MFldbKneeWidth = 0x8; // float32
            public const nint MFlDepth = 0xC; // float32
            public const nint MFlWetMix = 0x10; // float32
            public const nint MFlTimeScale = 0x14; // float32
            public const nint MFlLowCutoffFreq = 0x18; // float32
            public const nint MFlHighCutoffFreq = 0x1C; // float32
            public const nint MBPeakMode = 0x20; // bool
            public const nint MBandDesc = 0x24; // VMixDynamicsBand_t[3]
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VMixEnvelopeDescT {
            public const nint MFlAttackTimeMs = 0x0; // float32
            public const nint MFlHoldTimeMs = 0x4; // float32
            public const nint MFlReleaseTimeMs = 0x8; // float32
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VMixPitchShiftDescT {
            public const nint MNGrainSampleCount = 0x0; // int32
            public const nint MFlPitchShift = 0x4; // float32
            public const nint MNQuality = 0x8; // int32
            public const nint MNProcType = 0xC; // int32
        }
        // Parent: None
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VMixConvolutionDescT {
            public const nint MFldbGain = 0x0; // float32
            public const nint MFlPreDelayMs = 0x4; // float32
            public const nint MFlWetMix = 0x8; // float32
            public const nint MFldbLow = 0xC; // float32
            public const nint MFldbMid = 0x10; // float32
            public const nint MFldbHigh = 0x14; // float32
            public const nint MFlLowCutoffFreq = 0x18; // float32
            public const nint MFlHighCutoffFreq = 0x1C; // float32
        }
        // Parent: None
        // Fields count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VMixVocoderDescT {
            public const nint MNBandCount = 0x0; // int32
            public const nint MFlBandwidth = 0x4; // float32
            public const nint MFldBModGain = 0x8; // float32
            public const nint MFlFreqRangeStart = 0xC; // float32
            public const nint MFlFreqRangeEnd = 0x10; // float32
            public const nint MFldBUnvoicedGain = 0x14; // float32
            public const nint MFlAttackTimeMs = 0x18; // float32
            public const nint MFlReleaseTimeMs = 0x1C; // float32
            public const nint MNDebugBand = 0x20; // int32
            public const nint MBPeakMode = 0x24; // bool
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VMixShaperDescT {
            public const nint MNShape = 0x0; // int32
            public const nint MFldbDrive = 0x4; // float32
            public const nint MFldbOutputGain = 0x8; // float32
            public const nint MFlWetMix = 0xC; // float32
            public const nint MNOversampleFactor = 0x10; // int32
        }
        // Parent: None
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VMixUtilityDescT {
            public const nint MNOp = 0x0; // VMixChannelOperation_t
            public const nint MFlInputPan = 0x4; // float32
            public const nint MFlOutputBalance = 0x8; // float32
            public const nint MFldbOutputGain = 0xC; // float32
            public const nint MBBassMono = 0x10; // bool
            public const nint MFlBassFreq = 0x14; // float32
        }
        // Parent: None
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VMixAutoFilterDescT {
            public const nint MFlEnvelopeAmount = 0x0; // float32
            public const nint MFlAttackTimeMs = 0x4; // float32
            public const nint MFlReleaseTimeMs = 0x8; // float32
            public const nint MFilter = 0xC; // VMixFilterDesc_t
            public const nint MFlLfoAmount = 0x1C; // float32
            public const nint MFlLfoRate = 0x20; // float32
            public const nint MFlPhase = 0x24; // float32
            public const nint MNLfoShape = 0x28; // VMixLFOShape_t
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VMixOscDescT {
            public const nint OscType = 0x0; // VMixLFOShape_t
            public const nint MFreq = 0x4; // float32
            public const nint MFlPhase = 0x8; // float32
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VMixEffectChainDescT {
            public const nint MFlCrossfadeTime = 0x0; // float32
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VMixSubgraphSwitchDescT {
            public const nint MInterpolationMode = 0x0; // VMixSubgraphSwitchInterpolationType_t
            public const nint MBOnlyTailsOnFadeOut = 0x4; // bool
            public const nint MFlInterpolationTime = 0x8; // float32
        }
    }
    // Module: vphysics2.dll
    // Classes count: 88
    // Enums count: 2
    public static class Vphysics2 {
        // Alignment: 4
        // Members count: 4
        public enum JointAxisT : int {
            JointAxisX = 0,
            JointAxisY = 1,
            JointAxisZ = 2,
            JointAxisCount = 3
        }
        // Alignment: 4
        // Members count: 3
        public enum JointMotionT : int {
            JointMotionFree = 0,
            JointMotionLocked = 1,
            JointMotionCount = 2
        }
        // Parent: None
        // Fields count: 5
        public static class ConstraintBreakableparamsT {
            public const nint Strength = 0x0; // float32
            public const nint ForceLimit = 0x4; // float32
            public const nint TorqueLimit = 0x8; // float32
            public const nint BodyMassScale = 0xC; // float32[2]
            public const nint IsActive = 0x14; // bool
        }
        // Parent: None
        // Fields count: 4
        public static class ConstraintAxislimitT {
            public const nint FlMinRotation = 0x0; // float32
            public const nint FlMaxRotation = 0x4; // float32
            public const nint FlMotorTargetAngSpeed = 0x8; // float32
            public const nint FlMotorMaxTorque = 0xC; // float32
        }
        // Parent: None
        // Fields count: 4
        public static class ConstraintHingeparamsT {
            public const nint WorldPosition = 0x0; // 
            public const nint WorldAxisDirection = 0xC; // 
            public const nint HingeAxis = 0x18; // constraint_axislimit_t
            public const nint Constraint = 0x28; // constraint_breakableparams_t
        }
        // Parent: None
        // Fields count: 0
        public static class IPhysicsPlayerController {
        }
        // Parent: None
        // Fields count: 35
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CFeJiggleBone {
            public const nint MNFlags = 0x0; // uint32
            public const nint MFlLength = 0x4; // float32
            public const nint MFlTipMass = 0x8; // float32
            public const nint MFlYawStiffness = 0xC; // float32
            public const nint MFlYawDamping = 0x10; // float32
            public const nint MFlPitchStiffness = 0x14; // float32
            public const nint MFlPitchDamping = 0x18; // float32
            public const nint MFlAlongStiffness = 0x1C; // float32
            public const nint MFlAlongDamping = 0x20; // float32
            public const nint MFlAngleLimit = 0x24; // float32
            public const nint MFlMinYaw = 0x28; // float32
            public const nint MFlMaxYaw = 0x2C; // float32
            public const nint MFlYawFriction = 0x30; // float32
            public const nint MFlYawBounce = 0x34; // float32
            public const nint MFlMinPitch = 0x38; // float32
            public const nint MFlMaxPitch = 0x3C; // float32
            public const nint MFlPitchFriction = 0x40; // float32
            public const nint MFlPitchBounce = 0x44; // float32
            public const nint MFlBaseMass = 0x48; // float32
            public const nint MFlBaseStiffness = 0x4C; // float32
            public const nint MFlBaseDamping = 0x50; // float32
            public const nint MFlBaseMinLeft = 0x54; // float32
            public const nint MFlBaseMaxLeft = 0x58; // float32
            public const nint MFlBaseLeftFriction = 0x5C; // float32
            public const nint MFlBaseMinUp = 0x60; // float32
            public const nint MFlBaseMaxUp = 0x64; // float32
            public const nint MFlBaseUpFriction = 0x68; // float32
            public const nint MFlBaseMinForward = 0x6C; // float32
            public const nint MFlBaseMaxForward = 0x70; // float32
            public const nint MFlBaseForwardFriction = 0x74; // float32
            public const nint MFlRadius0 = 0x78; // float32
            public const nint MFlRadius1 = 0x7C; // float32
            public const nint MVPoint0 = 0x80; // 
            public const nint MVPoint1 = 0x8C; // 
            public const nint MNCollisionMask = 0x98; // uint16
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CFeNamedJiggleBone {
            public const nint MStrParentBone = 0x0; // CUtlString
            public const nint MTransform = 0x10; // CTransform
            public const nint MNJiggleParent = 0x30; // uint32
            public const nint MJiggleBone = 0x34; // CFeJiggleBone
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CFeIndexedJiggleBone {
            public const nint MNNode = 0x0; // uint32
            public const nint MNJiggleParent = 0x4; // uint32
            public const nint MJiggleBone = 0x8; // CFeJiggleBone
        }
        // Parent: None
        // Fields count: 100
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class PhysFeModelDescT {
            public const nint MCtrlHash = 0x0; // CUtlVector< uint32 >
            public const nint MCtrlName = 0x18; // CUtlVector< CUtlString >
            public const nint MNStaticNodeFlags = 0x30; // uint32
            public const nint MNDynamicNodeFlags = 0x34; // uint32
            public const nint MFlLocalForce = 0x38; // float32
            public const nint MFlLocalRotation = 0x3C; // float32
            public const nint MNNodeCount = 0x40; // uint16
            public const nint MNStaticNodes = 0x42; // uint16
            public const nint MNRotLockStaticNodes = 0x44; // uint16
            public const nint MNFirstPositionDrivenNode = 0x46; // uint16
            public const nint MNSimdTriCount1 = 0x48; // uint16
            public const nint MNSimdTriCount2 = 0x4A; // uint16
            public const nint MNSimdQuadCount1 = 0x4C; // uint16
            public const nint MNSimdQuadCount2 = 0x4E; // uint16
            public const nint MNQuadCount1 = 0x50; // uint16
            public const nint MNQuadCount2 = 0x52; // uint16
            public const nint MNTreeDepth = 0x54; // uint16
            public const nint MNNodeBaseJiggleboneDependsCount = 0x56; // uint16
            public const nint MNRopeCount = 0x58; // uint16
            public const nint MRopes = 0x60; // CUtlVector< uint16 >
            public const nint MNodeBases = 0x78; // CUtlVector< FeNodeBase_t >
            public const nint MSimdNodeBases = 0x90; // CUtlVector< FeSimdNodeBase_t >
            public const nint MQuads = 0xA8; // CUtlVector< FeQuad_t >
            public const nint MSimdQuads = 0xC0; // CUtlVector< FeSimdQuad_t >
            public const nint MSimdTris = 0xD8; // CUtlVector< FeSimdTri_t >
            public const nint MSimdRods = 0xF0; // CUtlVector< FeSimdRodConstraint_t >
            public const nint MSimdRodsAnim = 0x108; // CUtlVector< FeSimdRodConstraintAnim_t >
            public const nint MInitPose = 0x120; // CUtlVector< CTransform >
            public const nint MRods = 0x138; // CUtlVector< FeRodConstraint_t >
            public const nint MTwists = 0x150; // CUtlVector< FeTwistConstraint_t >
            public const nint MAxialEdges = 0x168; // CUtlVector< FeAxialEdgeBend_t >
            public const nint MNodeInvMasses = 0x180; // CUtlVector< float32 >
            public const nint MCtrlOffsets = 0x198; // CUtlVector< FeCtrlOffset_t >
            public const nint MCtrlOsOffsets = 0x1B0; // CUtlVector< FeCtrlOsOffset_t >
            public const nint MFollowNodes = 0x1C8; // CUtlVector< FeFollowNode_t >
            public const nint MCollisionPlanes = 0x1E0; // CUtlVector< FeCollisionPlane_t >
            public const nint MNodeIntegrator = 0x1F8; // CUtlVector< FeNodeIntegrator_t >
            public const nint MSpringIntegrator = 0x210; // CUtlVector< FeSpringIntegrator_t >
            public const nint MSimdSpringIntegrator = 0x228; // CUtlVector< FeSimdSpringIntegrator_t >
            public const nint MWorldCollisionParams = 0x240; // CUtlVector< FeWorldCollisionParams_t >
            public const nint MLegacyStretchForce = 0x258; // CUtlVector< float32 >
            public const nint MNodeCollisionRadii = 0x270; // CUtlVector< float32 >
            public const nint MDynNodeFriction = 0x288; // CUtlVector< float32 >
            public const nint MLocalRotation = 0x2A0; // CUtlVector< float32 >
            public const nint MLocalForce = 0x2B8; // CUtlVector< float32 >
            public const nint MTaperedCapsuleStretches = 0x2D0; // CUtlVector< FeTaperedCapsuleStretch_t >
            public const nint MTaperedCapsuleRigids = 0x2E8; // CUtlVector< FeTaperedCapsuleRigid_t >
            public const nint MSphereRigids = 0x300; // CUtlVector< FeSphereRigid_t >
            public const nint MWorldCollisionNodes = 0x318; // CUtlVector< uint16 >
            public const nint MTreeParents = 0x330; // CUtlVector< uint16 >
            public const nint MTreeCollisionMasks = 0x348; // CUtlVector< uint16 >
            public const nint MTreeChildren = 0x360; // CUtlVector< FeTreeChildren_t >
            public const nint MFreeNodes = 0x378; // CUtlVector< uint16 >
            public const nint MFitMatrices = 0x390; // CUtlVector< FeFitMatrix_t >
            public const nint MFitWeights = 0x3A8; // CUtlVector< FeFitWeight_t >
            public const nint MReverseOffsets = 0x3C0; // CUtlVector< FeNodeReverseOffset_t >
            public const nint MAnimStrayRadii = 0x3D8; // CUtlVector< FeAnimStrayRadius_t >
            public const nint MSimdAnimStrayRadii = 0x3F0; // CUtlVector< FeSimdAnimStrayRadius_t >
            public const nint MKelagerBends = 0x408; // CUtlVector< FeKelagerBend2_t >
            public const nint MCtrlSoftOffsets = 0x420; // CUtlVector< FeCtrlSoftOffset_t >
            public const nint MJiggleBones = 0x438; // CUtlVector< CFeIndexedJiggleBone >
            public const nint MSourceElems = 0x450; // CUtlVector< uint16 >
            public const nint MGoalDampedSpringIntegrators = 0x468; // CUtlVector< uint32 >
            public const nint MTris = 0x480; // CUtlVector< FeTri_t >
            public const nint MNTriCount1 = 0x498; // uint16
            public const nint MNTriCount2 = 0x49A; // uint16
            public const nint MNReservedUint8 = 0x49C; // uint8
            public const nint MNExtraPressureIterations = 0x49D; // uint8
            public const nint MNExtraGoalIterations = 0x49E; // uint8
            public const nint MNExtraIterations = 0x49F; // uint8
            public const nint MBoxRigids = 0x4A0; // CUtlVector< FeBoxRigid_t >
            public const nint MDynNodeVertexSet = 0x4B8; // CUtlVector< uint8 >
            public const nint MVertexSetNames = 0x4D0; // CUtlVector< uint32 >
            public const nint MRigidColliderPriorities = 0x4E8; // CUtlVector< FeRigidColliderIndices_t >
            public const nint MMorphLayers = 0x500; // CUtlVector< FeMorphLayerDepr_t >
            public const nint MMorphSetData = 0x518; // CUtlVector< uint8 >
            public const nint MVertexMaps = 0x530; // CUtlVector< FeVertexMapDesc_t >
            public const nint MVertexMapValues = 0x548; // CUtlVector< uint8 >
            public const nint MEffects = 0x560; // CUtlVector< FeEffectDesc_t >
            public const nint MLockToParent = 0x578; // CUtlVector< FeCtrlOffset_t >
            public const nint MLockToGoal = 0x590; // CUtlVector< uint16 >
            public const nint MSkelParents = 0x5A8; // CUtlVector< int16 >
            public const nint MDynNodeWindBases = 0x5C0; // CUtlVector< FeNodeWindBase_t >
            public const nint MFlInternalPressure = 0x5D8; // float32
            public const nint MFlDefaultTimeDilation = 0x5DC; // float32
            public const nint MFlWindage = 0x5E0; // float32
            public const nint MFlWindDrag = 0x5E4; // float32
            public const nint MFlDefaultSurfaceStretch = 0x5E8; // float32
            public const nint MFlDefaultThreadStretch = 0x5EC; // float32
            public const nint MFlDefaultGravityScale = 0x5F0; // float32
            public const nint MFlDefaultVelAirDrag = 0x5F4; // float32
            public const nint MFlDefaultExpAirDrag = 0x5F8; // float32
            public const nint MFlDefaultVelQuadAirDrag = 0x5FC; // float32
            public const nint MFlDefaultExpQuadAirDrag = 0x600; // float32
            public const nint MFlRodVelocitySmoothRate = 0x604; // float32
            public const nint MFlQuadVelocitySmoothRate = 0x608; // float32
            public const nint MFlAddWorldCollisionRadius = 0x60C; // float32
            public const nint MFlDefaultVolumetricSolveAmount = 0x610; // float32
            public const nint MNRodVelocitySmoothIterations = 0x614; // uint16
            public const nint MNQuadVelocitySmoothIterations = 0x616; // uint16
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FourVectors2D {
            public const nint X = 0x0; // fltx4
            public const nint Y = 0x10; // fltx4
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeEdgeDescT {
            public const nint NEdge = 0x0; // uint16[2]
            public const nint NSide = 0x4; // uint16[2][2]
            public const nint NVirtElem = 0xC; // uint16[2]
        }
        // Parent: None
        // Fields count: 12
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class OldFeEdgeT {
            public const nint MFlK = 0x0; // float32[3]
            public const nint InvA = 0xC; // float32
            public const nint T = 0x10; // float32
            public const nint FlThetaRelaxed = 0x14; // float32
            public const nint FlThetaFactor = 0x18; // float32
            public const nint C01 = 0x1C; // float32
            public const nint C02 = 0x20; // float32
            public const nint C03 = 0x24; // float32
            public const nint C04 = 0x28; // float32
            public const nint FlAxialModelDist = 0x2C; // float32
            public const nint FlAxialModelWeights = 0x30; // float32[4]
            public const nint MNNode = 0x40; // uint16[4]
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeWeightedNodeT {
            public const nint NNode = 0x0; // uint16
            public const nint NWeight = 0x2; // uint16
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeKelagerBend2T {
            public const nint FlWeight = 0x0; // float32[3]
            public const nint FlHeight0 = 0xC; // float32
            public const nint NNode = 0x10; // uint16[3]
            public const nint NReserved = 0x16; // uint16
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeStiffHingeBuildT {
            public const nint FlMaxAngle = 0x0; // float32
            public const nint FlStrength = 0x4; // float32
            public const nint FlMotionBias = 0x8; // float32[3]
            public const nint NNode = 0x14; // uint16[3]
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeTriT {
            public const nint NNode = 0x0; // uint16[3]
            public const nint W1 = 0x8; // float32
            public const nint W2 = 0xC; // float32
            public const nint V1x = 0x10; // float32
            public const nint V2 = 0x14; // Vector2D
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeSimdTriT {
            public const nint NNode = 0x0; // uint32[4][3]
            public const nint W1 = 0x30; // fltx4
            public const nint W2 = 0x40; // fltx4
            public const nint V1x = 0x50; // fltx4
            public const nint V2 = 0x60; // FourVectors2D
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeQuadT {
            public const nint NNode = 0x0; // uint16[4]
            public const nint FlSlack = 0x8; // float32
            public const nint VShape = 0xC; // Vector4D[4]
        }
        // Parent: None
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeNodeBaseT {
            public const nint NNode = 0x0; // uint16
            public const nint NDummy = 0x2; // uint16[3]
            public const nint NNodeX0 = 0x8; // uint16
            public const nint NNodeX1 = 0xA; // uint16
            public const nint NNodeY0 = 0xC; // uint16
            public const nint NNodeY1 = 0xE; // uint16
            public const nint QAdjust = 0x10; // QuaternionStorage
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeNodeWindBaseT {
            public const nint NNodeX0 = 0x0; // uint16
            public const nint NNodeX1 = 0x2; // uint16
            public const nint NNodeY0 = 0x4; // uint16
            public const nint NNodeY1 = 0x6; // uint16
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeNodeReverseOffsetT {
            public const nint VOffset = 0x0; // 
            public const nint NBoneCtrl = 0xC; // uint16
            public const nint NTargetNode = 0xE; // uint16
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeSimdQuadT {
            public const nint NNode = 0x0; // uint16[4][4]
            public const nint F4Slack = 0x20; // fltx4
            public const nint VShape = 0x30; // FourVectors[4]
            public const nint F4Weights = 0xF0; // fltx4[4]
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeAxialEdgeBendT {
            public const nint Te = 0x0; // float32
            public const nint Tv = 0x4; // float32
            public const nint FlDist = 0x8; // float32
            public const nint FlWeight = 0xC; // float32[4]
            public const nint NNode = 0x1C; // uint16[6]
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeBandBendLimitT {
            public const nint FlDistMin = 0x0; // float32
            public const nint FlDistMax = 0x4; // float32
            public const nint NNode = 0x8; // uint16[6]
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeRodConstraintT {
            public const nint NNode = 0x0; // uint16[2]
            public const nint FlMaxDist = 0x4; // float32
            public const nint FlMinDist = 0x8; // float32
            public const nint FlWeight0 = 0xC; // float32
            public const nint FlRelaxationFactor = 0x10; // float32
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeTwistConstraintT {
            public const nint NNodeOrient = 0x0; // uint16
            public const nint NNodeEnd = 0x2; // uint16
            public const nint FlTwistRelax = 0x4; // float32
            public const nint FlSwingRelax = 0x8; // float32
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeSimdRodConstraintT {
            public const nint NNode = 0x0; // uint16[4][2]
            public const nint F4MaxDist = 0x10; // fltx4
            public const nint F4MinDist = 0x20; // fltx4
            public const nint F4Weight0 = 0x30; // fltx4
            public const nint F4RelaxationFactor = 0x40; // fltx4
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeSimdRodConstraintAnimT {
            public const nint NNode = 0x0; // uint16[4][2]
            public const nint F4Weight0 = 0x10; // fltx4
            public const nint F4RelaxationFactor = 0x20; // fltx4
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeAnimStrayRadiusT {
            public const nint NNode = 0x0; // uint16[2]
            public const nint FlMaxDist = 0x4; // float32
            public const nint FlRelaxationFactor = 0x8; // float32
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeSimdAnimStrayRadiusT {
            public const nint NNode = 0x0; // uint16[4][2]
            public const nint FlMaxDist = 0x10; // fltx4
            public const nint FlRelaxationFactor = 0x20; // fltx4
        }
        // Parent: None
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeSimdNodeBaseT {
            public const nint NNode = 0x0; // uint16[4]
            public const nint NNodeX0 = 0x8; // uint16[4]
            public const nint NNodeX1 = 0x10; // uint16[4]
            public const nint NNodeY0 = 0x18; // uint16[4]
            public const nint NNodeY1 = 0x20; // uint16[4]
            public const nint NDummy = 0x28; // uint16[4]
            public const nint QAdjust = 0x30; // FourQuaternions
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeNodeIntegratorT {
            public const nint FlPointDamping = 0x0; // float32
            public const nint FlAnimationForceAttraction = 0x4; // float32
            public const nint FlAnimationVertexAttraction = 0x8; // float32
            public const nint FlGravity = 0xC; // float32
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeSpringIntegratorT {
            public const nint NNode = 0x0; // uint16[2]
            public const nint FlSpringRestLength = 0x4; // float32
            public const nint FlSpringConstant = 0x8; // float32
            public const nint FlSpringDamping = 0xC; // float32
            public const nint FlNodeWeight0 = 0x10; // float32
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeSimdSpringIntegratorT {
            public const nint NNode = 0x0; // uint16[4][2]
            public const nint FlSpringRestLength = 0x10; // fltx4
            public const nint FlSpringConstant = 0x20; // fltx4
            public const nint FlSpringDamping = 0x30; // fltx4
            public const nint FlNodeWeight0 = 0x40; // fltx4
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeCtrlOffsetT {
            public const nint VOffset = 0x0; // 
            public const nint NCtrlParent = 0xC; // uint16
            public const nint NCtrlChild = 0xE; // uint16
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeSoftParentT {
            public const nint NParent = 0x0; // int32
            public const nint FlAlpha = 0x4; // float32
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeCtrlSoftOffsetT {
            public const nint NCtrlParent = 0x0; // uint16
            public const nint NCtrlChild = 0x2; // uint16
            public const nint VOffset = 0x4; // 
            public const nint FlAlpha = 0x10; // float32
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeCtrlOsOffsetT {
            public const nint NCtrlParent = 0x0; // uint16
            public const nint NCtrlChild = 0x2; // uint16
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeFollowNodeT {
            public const nint NParentNode = 0x0; // uint16
            public const nint NChildNode = 0x2; // uint16
            public const nint FlWeight = 0x4; // float32
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeCollisionPlaneT {
            public const nint NCtrlParent = 0x0; // uint16
            public const nint NChildNode = 0x2; // uint16
            public const nint MPlane = 0x4; // RnPlane_t
            public const nint FlStrength = 0x14; // float32
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeWorldCollisionParamsT {
            public const nint FlWorldFriction = 0x0; // float32
            public const nint FlGroundFriction = 0x4; // float32
            public const nint NListBegin = 0x8; // uint16
            public const nint NListEnd = 0xA; // uint16
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeTreeChildrenT {
            public const nint NChild = 0x0; // uint16[2]
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeTaperedCapsuleRigidT {
            public const nint VSphere = 0x0; // fltx4[2]
            public const nint NNode = 0x20; // uint16
            public const nint NCollisionMask = 0x22; // uint16
            public const nint NVertexMapIndex = 0x24; // uint16
            public const nint NFlags = 0x26; // uint16
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeSphereRigidT {
            public const nint VSphere = 0x0; // fltx4
            public const nint NNode = 0x10; // uint16
            public const nint NCollisionMask = 0x12; // uint16
            public const nint NVertexMapIndex = 0x14; // uint16
            public const nint NFlags = 0x16; // uint16
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeTaperedCapsuleStretchT {
            public const nint NNode = 0x0; // uint16[2]
            public const nint NCollisionMask = 0x4; // uint16
            public const nint NDummy = 0x6; // uint16
            public const nint FlRadius = 0x8; // float32[2]
        }
        // Parent: None
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeBoxRigidT {
            public const nint TmFrame2 = 0x0; // CTransform
            public const nint NNode = 0x20; // uint16
            public const nint NCollisionMask = 0x22; // uint16
            public const nint VSize = 0x24; // 
            public const nint NVertexMapIndex = 0x30; // uint16
            public const nint NFlags = 0x32; // uint16
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CovMatrix3 {
            public const nint MVDiag = 0x0; // 
            public const nint MFlXy = 0xC; // float32
            public const nint MFlXz = 0x10; // float32
            public const nint MFlYz = 0x14; // float32
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FourCovMatrices3 {
            public const nint MVDiag = 0x0; // FourVectors
            public const nint MFlXy = 0x30; // fltx4
            public const nint MFlXz = 0x40; // fltx4
            public const nint MFlYz = 0x50; // fltx4
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeFitWeightT {
            public const nint FlWeight = 0x0; // float32
            public const nint NNode = 0x4; // uint16
            public const nint NDummy = 0x6; // uint16
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeFitInfluenceT {
            public const nint NVertexNode = 0x0; // uint32
            public const nint FlWeight = 0x4; // float32
            public const nint NMatrixNode = 0x8; // uint32
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeFitMatrixT {
            public const nint Bone = 0x0; // CTransform
            public const nint VCenter = 0x20; // 
            public const nint NEnd = 0x2C; // uint16
            public const nint NNode = 0x2E; // uint16
            public const nint NBeginDynamic = 0x30; // uint16
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeRigidColliderIndicesT {
            public const nint MNTaperedCapsuleRigidIndex = 0x0; // uint16
            public const nint MNSphereRigidIndex = 0x2; // uint16
            public const nint MNBoxRigidIndex = 0x4; // uint16
            public const nint MNCollisionPlaneIndex = 0x6; // uint16
        }
        // Parent: FeTaperedCapsuleRigidT
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeBuildTaperedCapsuleRigidT {
            public const nint MNPriority = 0x30; // int32
            public const nint MNVertexMapHash = 0x34; // uint32
        }
        // Parent: FeBoxRigidT
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeBuildBoxRigidT {
            public const nint MNPriority = 0x40; // int32
            public const nint MNVertexMapHash = 0x44; // uint32
        }
        // Parent: FeSphereRigidT
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeBuildSphereRigidT {
            public const nint MNPriority = 0x20; // int32
            public const nint MNVertexMapHash = 0x24; // uint32
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeSourceEdgeT {
            public const nint NNode = 0x0; // uint16[2]
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeEffectDescT {
            public const nint SName = 0x0; // CUtlString
            public const nint NNameHash = 0x8; // uint32
            public const nint NType = 0xC; // int32
            public const nint MParams = 0x10; // KeyValues3
        }
        // Parent: None
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeVertexMapBuildT {
            public const nint MVertexMapName = 0x0; // CUtlString
            public const nint MNNameHash = 0x8; // uint32
            public const nint MColor = 0xC; // Color
            public const nint MFlVolumetricSolveStrength = 0x10; // float32
            public const nint MNScaleSourceNode = 0x14; // int32
            public const nint MWeights = 0x18; // CUtlVector< float32 >
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CFeVertexMapBuildArray {
            public const nint MArray = 0x0; // CUtlVector< FeVertexMapBuild_t* >
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeProxyVertexMapT {
            public const nint MName = 0x0; // CUtlString
            public const nint MFlWeight = 0x8; // float32
        }
        // Parent: None
        // Fields count: 12
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeVertexMapDescT {
            public const nint SName = 0x0; // CUtlString
            public const nint NNameHash = 0x8; // uint32
            public const nint NColor = 0xC; // uint32
            public const nint NFlags = 0x10; // uint32
            public const nint NVertexBase = 0x14; // uint16
            public const nint NVertexCount = 0x16; // uint16
            public const nint NMapOffset = 0x18; // uint32
            public const nint NNodeListOffset = 0x1C; // uint32
            public const nint VCenterOfMass = 0x20; // 
            public const nint FlVolumetricSolveStrength = 0x2C; // float32
            public const nint NScaleSourceNode = 0x30; // int16
            public const nint NNodeListCount = 0x32; // uint16
        }
        // Parent: None
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeMorphLayerDeprT {
            public const nint MName = 0x0; // CUtlString
            public const nint MNNameHash = 0x8; // uint32
            public const nint MNodes = 0x10; // CUtlVector< uint16 >
            public const nint MInitPos = 0x28; // CUtlVector< Vector >
            public const nint MGravity = 0x40; // CUtlVector< float32 >
            public const nint MGoalStrength = 0x58; // CUtlVector< float32 >
            public const nint MGoalDamping = 0x70; // CUtlVector< float32 >
            public const nint MNFlags = 0x88; // uint32
        }
        // Parent: None
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CFeMorphLayer {
            public const nint MName = 0x0; // CUtlString
            public const nint MNNameHash = 0x8; // uint32
            public const nint MNodes = 0x10; // CUtlVector< uint16 >
            public const nint MInitPos = 0x28; // CUtlVector< Vector >
            public const nint MGravity = 0x40; // CUtlVector< float32 >
            public const nint MGoalStrength = 0x58; // CUtlVector< float32 >
            public const nint MGoalDamping = 0x70; // CUtlVector< float32 >
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class Dop26T {
            public const nint MFlSupport = 0x0; // float32[26]
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RnCapsuleT {
            public const nint MVCenter = 0x0; // Vector[2]
            public const nint MFlRadius = 0x18; // float32
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RnPlaneT {
            public const nint MVNormal = 0x0; // 
            public const nint MFlOffset = 0xC; // float32
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RnVertexT {
            public const nint MNEdge = 0x0; // uint8
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RnHalfEdgeT {
            public const nint MNNext = 0x0; // uint8
            public const nint MNTwin = 0x1; // uint8
            public const nint MNOrigin = 0x2; // uint8
            public const nint MNFace = 0x3; // uint8
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RnFaceT {
            public const nint MNEdge = 0x0; // uint8
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CRegionSvm {
            public const nint MPlanes = 0x0; // CUtlVector< RnPlane_t >
            public const nint MNodes = 0x18; // CUtlVector< uint32 >
        }
        // Parent: None
        // Fields count: 14
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RnHullT {
            public const nint MVCentroid = 0x0; // 
            public const nint MFlMaxAngularRadius = 0xC; // float32
            public const nint MBounds = 0x10; // AABB_t
            public const nint MVOrthographicAreas = 0x28; // 
            public const nint MMassProperties = 0x34; // matrix3x4_t
            public const nint MFlVolume = 0x64; // float32
            public const nint MFlSurfaceArea = 0x68; // float32
            public const nint MVertices = 0x70; // CUtlVector< RnVertex_t >
            public const nint MVertexPositions = 0x88; // CUtlVector< Vector >
            public const nint MEdges = 0xA0; // CUtlVector< RnHalfEdge_t >
            public const nint MFaces = 0xB8; // CUtlVector< RnFace_t >
            public const nint MFacePlanes = 0xD0; // CUtlVector< RnPlane_t >
            public const nint MNFlags = 0xE8; // uint32
            public const nint MPRegionSvm = 0xF0; // CRegionSVM*
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RnTriangleT {
            public const nint MNIndex = 0x0; // int32[3]
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RnWingT {
            public const nint MNIndex = 0x0; // int32[3]
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RnNodeT {
            public const nint MVMin = 0x0; // 
            public const nint MNChildren = 0xC; // uint32
            public const nint MVMax = 0x10; // 
            public const nint MNTriangleOffset = 0x1C; // uint32
        }
        // Parent: None
        // Fields count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RnMeshT {
            public const nint MVMin = 0x0; // 
            public const nint MVMax = 0xC; // 
            public const nint MNodes = 0x18; // CUtlVector< RnNode_t >
            public const nint MVertices = 0x30; // CUtlVectorSIMDPaddedVector
            public const nint MTriangles = 0x48; // CUtlVector< RnTriangle_t >
            public const nint MWings = 0x60; // CUtlVector< RnWing_t >
            public const nint MMaterials = 0x78; // CUtlVector< uint8 >
            public const nint MVOrthographicAreas = 0x90; // 
            public const nint MNFlags = 0x9C; // uint32
            public const nint MNDebugFlags = 0xA0; // uint32
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RnShapeDescT {
            public const nint MNCollisionAttributeIndex = 0x0; // uint32
            public const nint MNSurfacePropertyIndex = 0x4; // uint32
            public const nint MUserFriendlyName = 0x8; // CUtlString
        }
        // Parent: RnShapeDescT
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RnSphereDescT {
            public const nint MSphere = 0x10; // SphereBase_t< float32 >
        }
        // Parent: RnShapeDescT
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RnCapsuleDescT {
            public const nint MCapsule = 0x10; // RnCapsule_t
        }
        // Parent: RnShapeDescT
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RnHullDescT {
            public const nint MHull = 0x10; // RnHull_t
        }
        // Parent: RnShapeDescT
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RnMeshDescT {
            public const nint MMesh = 0x10; // RnMesh_t
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RnSoftbodyParticleT {
            public const nint MFlMassInv = 0x0; // float32
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RnSoftbodySpringT {
            public const nint MNParticle = 0x0; // uint16[2]
            public const nint MFlLength = 0x4; // float32
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RnSoftbodyCapsuleT {
            public const nint MVCenter = 0x0; // Vector[2]
            public const nint MFlRadius = 0x18; // float32
            public const nint MNParticle = 0x1C; // uint16[2]
        }
        // Parent: None
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RnBlendVertexT {
            public const nint MNWeight0 = 0x0; // uint16
            public const nint MNIndex0 = 0x2; // uint16
            public const nint MNWeight1 = 0x4; // uint16
            public const nint MNIndex1 = 0x6; // uint16
            public const nint MNWeight2 = 0x8; // uint16
            public const nint MNIndex2 = 0xA; // uint16
            public const nint MNFlags = 0xC; // uint16
            public const nint MNTargetIndex = 0xE; // uint16
        }
        // Parent: None
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CastSphereSatParamsT {
            public const nint MVRayStart = 0x0; // 
            public const nint MVRayDelta = 0xC; // 
            public const nint MFlRadius = 0x18; // float32
            public const nint MFlMaxFraction = 0x1C; // float32
            public const nint MFlScale = 0x20; // float32
            public const nint MPHull = 0x28; // RnHull_t*
        }
        // Parent: None
        // Fields count: 35
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RnBodyDescT {
            public const nint MSDebugName = 0x0; // CUtlString
            public const nint MVPosition = 0x8; // 
            public const nint MQOrientation = 0x14; // QuaternionStorage
            public const nint MVLinearVelocity = 0x24; // 
            public const nint MVAngularVelocity = 0x30; // 
            public const nint MVLocalMassCenter = 0x3C; // 
            public const nint MLocalInertiaInv = 0x48; // Vector[3]
            public const nint MFlMassInv = 0x6C; // float32
            public const nint MFlGameMass = 0x70; // float32
            public const nint MFlInertiaScaleInv = 0x74; // float32
            public const nint MFlLinearDamping = 0x78; // float32
            public const nint MFlAngularDamping = 0x7C; // float32
            public const nint MFlLinearDrag = 0x80; // float32
            public const nint MFlAngularDrag = 0x84; // float32
            public const nint MFlLinearBuoyancyDrag = 0x88; // float32
            public const nint MFlAngularBuoyancyDrag = 0x8C; // float32
            public const nint MVLastAwakeForceAccum = 0x90; // 
            public const nint MVLastAwakeTorqueAccum = 0x9C; // 
            public const nint MFlBuoyancyFactor = 0xA8; // float32
            public const nint MFlGravityScale = 0xAC; // float32
            public const nint MFlTimeScale = 0xB0; // float32
            public const nint MNBodyType = 0xB4; // int32
            public const nint MNGameIndex = 0xB8; // uint32
            public const nint MNGameFlags = 0xBC; // uint32
            public const nint MNMinVelocityIterations = 0xC0; // int8
            public const nint MNMinPositionIterations = 0xC1; // int8
            public const nint MNMassPriority = 0xC2; // int8
            public const nint MBEnabled = 0xC3; // bool
            public const nint MBSleeping = 0xC4; // bool
            public const nint MBIsContinuousEnabled = 0xC5; // bool
            public const nint MBDragEnabled = 0xC6; // bool
            public const nint MBBuoyancyDragEnabled = 0xC7; // bool
            public const nint MBGravityDisabled = 0xC8; // bool
            public const nint MBSpeculativeEnabled = 0xC9; // bool
            public const nint MBHasShadowController = 0xCA; // bool
        }
        // Parent: None
        // Fields count: 2
        public static class VertexPositionNormalT {
            public const nint MVPosition = 0x0; // 
            public const nint MVNormal = 0xC; // 
        }
        // Parent: None
        // Fields count: 1
        public static class VertexPositionColorT {
            public const nint MVPosition = 0x0; // 
        }
        // Parent: RnBodyDescT
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VphysicsSaveCphysicsbodyT {
            public const nint MNOldPointer = 0xD0; // uint64
        }
    }
    // Module: worldrenderer.dll
    // Classes count: 27
    // Enums count: 1
    public static class Worldrenderer {
        // Alignment: 4
        // Members count: 13
        public enum ObjectTypeFlagsT : int {
            ObjectTypeNone = 0,
            ObjectTypeModel = 8,
            ObjectTypeBlockLight = 16,
            ObjectTypeNoShadows = 32,
            ObjectTypeWorldspaceTexureBlend = 64,
            ObjectTypeDisabledInLowQuality = 128,
            ObjectTypeNoSunShadows = 256,
            ObjectTypeRenderWithDynamic = 512,
            ObjectTypeRenderToCubemaps = 1024,
            ObjectTypeModelHasLods = 2048,
            ObjectTypeOverlay = 8192,
            ObjectTypePrecomputedVismembers = 16384,
            ObjectTypeStaticCubeMap = 32768
        }
        // Parent: None
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class EntityIoConnectionDataT {
            public const nint MOutputName = 0x0; // CUtlString
            public const nint MTargetType = 0x8; // uint32
            public const nint MTargetName = 0x10; // CUtlString
            public const nint MInputName = 0x18; // CUtlString
            public const nint MOverrideParam = 0x20; // CUtlString
            public const nint MFlDelay = 0x28; // float32
            public const nint MNTimesToFire = 0x2C; // int32
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class EntityKeyValueDataT {
            public const nint MConnections = 0x8; // CUtlVector< EntityIOConnectionData_t >
            public const nint MKeyValuesData = 0x20; // CUtlBinaryBlock
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class PermEntityLumpDataT {
            public const nint MName = 0x8; // CUtlString
            public const nint MHammerUniqueId = 0x10; // CUtlString
            public const nint MChildLumps = 0x18; // CUtlVector< CStrongHandleCopyable< InfoForResourceTypeCEntityLump > >
            public const nint MEntityKeyValues = 0x30; // CUtlLeanVector< EntityKeyValueData_t >
        }
        // Parent: None
        // Fields count: 14
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class SceneObjectT {
            public const nint MNObjectId = 0x0; // uint32
            public const nint MVTransform = 0x4; // Vector4D[3]
            public const nint MFlFadeStartDistance = 0x34; // float32
            public const nint MFlFadeEndDistance = 0x38; // float32
            public const nint MVTintColor = 0x3C; // Vector4D
            public const nint MSkin = 0x50; // CUtlString
            public const nint MNObjectTypeFlags = 0x58; // ObjectTypeFlags_t
            public const nint MVLightingOrigin = 0x5C; // 
            public const nint MNOverlayRenderOrder = 0x68; // int16
            public const nint MNLodOverride = 0x6A; // int16
            public const nint MNCubeMapPrecomputedHandshake = 0x6C; // int32
            public const nint MNLightProbeVolumePrecomputedHandshake = 0x70; // int32
            public const nint MRenderableModel = 0x78; // CStrongHandle< InfoForResourceTypeCModel >
            public const nint MRenderable = 0x80; // CStrongHandle< InfoForResourceTypeCRenderMesh >
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class BaseSceneObjectOverrideT {
            public const nint MNSceneObjectIndex = 0x0; // uint32
        }
        // Parent: BaseSceneObjectOverrideT
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class ExtraVertexStreamOverrideT {
            public const nint MNSubSceneObject = 0x4; // uint32
            public const nint MNDrawCallIndex = 0x8; // uint32
            public const nint MNAdditionalMeshDrawPrimitiveFlags = 0xC; // MeshDrawPrimitiveFlags_t
            public const nint MExtraBufferBinding = 0x10; // CRenderBufferBinding
        }
        // Parent: BaseSceneObjectOverrideT
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class MaterialOverrideT {
            public const nint MNSubSceneObject = 0x4; // uint32
            public const nint MNDrawCallIndex = 0x8; // uint32
            public const nint MPMaterial = 0x10; // CStrongHandle< InfoForResourceTypeIMaterial2 >
        }
        // Parent: None
        // Fields count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class InfoOverlayDataT {
            public const nint MTransform = 0x0; // matrix3x4_t
            public const nint MFlWidth = 0x30; // float32
            public const nint MFlHeight = 0x34; // float32
            public const nint MFlDepth = 0x38; // float32
            public const nint MVUvStart = 0x3C; // Vector2D
            public const nint MVUvEnd = 0x44; // Vector2D
            public const nint MPMaterial = 0x50; // CStrongHandle< InfoForResourceTypeIMaterial2 >
            public const nint MNRenderOrder = 0x58; // int32
            public const nint MVTintColor = 0x5C; // Vector4D
            public const nint MNSequenceOverride = 0x6C; // int32
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class BakedLightingInfoT {
            public const nint MNLightmapVersionNumber = 0x0; // uint32
            public const nint MNLightmapGameVersionNumber = 0x4; // uint32
            public const nint MVLightmapUvScale = 0x8; // Vector2D
            public const nint MBHasLightmaps = 0x10; // bool
            public const nint MLightMaps = 0x18; // CUtlVector< CStrongHandle< InfoForResourceTypeCTextureBase > >
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class WorldNodeOnDiskBufferDataT {
            public const nint MNElementCount = 0x0; // int32
            public const nint MNElementSizeInBytes = 0x4; // int32
            public const nint MInputLayoutFields = 0x8; // CUtlVector< RenderInputLayoutField_t >
            public const nint MPData = 0x20; // CUtlVector< uint8 >
        }
        // Parent: None
        // Fields count: 9
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class AggregateMeshInfoT {
            public const nint MNVisClusterMemberOffset = 0x0; // uint32
            public const nint MNVisClusterMemberCount = 0x4; // uint8
            public const nint MBHasTransform = 0x5; // bool
            public const nint MNDrawCallIndex = 0x6; // int16
            public const nint MNLodSetupIndex = 0x8; // int16
            public const nint MNLodGroupMask = 0xA; // uint8
            public const nint MVTintColor = 0xB; // Color
            public const nint MObjectFlags = 0x10; // ObjectTypeFlags_t
            public const nint MNLightProbeVolumePrecomputedHandshake = 0x14; // int32
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class AggregateLodSetupT {
            public const nint MVLodOrigin = 0x0; // 
            public const nint MFMaxObjectScale = 0xC; // float32
            public const nint MFSwitchDistances = 0x10; // CUtlVectorFixedGrowable< float32 >
        }
        // Parent: None
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class AggregateSceneObjectT {
            public const nint MAllFlags = 0x0; // ObjectTypeFlags_t
            public const nint MAnyFlags = 0x4; // ObjectTypeFlags_t
            public const nint MNLayer = 0x8; // int16
            public const nint MAggregateMeshes = 0x10; // CUtlVector< AggregateMeshInfo_t >
            public const nint MLodSetups = 0x28; // CUtlVector< AggregateLODSetup_t >
            public const nint MVisClusterMembership = 0x40; // CUtlVector< uint16 >
            public const nint MFragmentTransforms = 0x58; // CUtlVector< matrix3x4_t >
            public const nint MRenderableModel = 0x70; // CStrongHandle< InfoForResourceTypeCModel >
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class ClutterTileT {
            public const nint MNFirstInstance = 0x0; // uint32
            public const nint MNLastInstance = 0x4; // uint32
            public const nint MBoundsWs = 0x8; // AABB_t
        }
        // Parent: None
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class ClutterSceneObjectT {
            public const nint MBounds = 0x0; // AABB_t
            public const nint MFlags = 0x18; // ObjectTypeFlags_t
            public const nint MNLayer = 0x1C; // int16
            public const nint MInstancePositions = 0x20; // CUtlVector< Vector >
            public const nint MInstanceScales = 0x50; // CUtlVector< float32 >
            public const nint MInstanceTintSrgb = 0x68; // CUtlVector< Color >
            public const nint MTiles = 0x80; // CUtlVector< ClutterTile_t >
            public const nint MRenderableModel = 0x98; // CStrongHandle< InfoForResourceTypeCModel >
        }
        // Parent: None
        // Fields count: 13
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class WorldNodeT {
            public const nint MSceneObjects = 0x0; // CUtlVector< SceneObject_t >
            public const nint MInfoOverlays = 0x18; // CUtlVector< InfoOverlayData_t >
            public const nint MVisClusterMembership = 0x30; // CUtlVector< uint16 >
            public const nint MAggregateSceneObjects = 0x48; // CUtlVector< AggregateSceneObject_t >
            public const nint MClutterSceneObjects = 0x60; // CUtlVector< ClutterSceneObject_t >
            public const nint MExtraVertexStreamOverrides = 0x78; // CUtlVector< ExtraVertexStreamOverride_t >
            public const nint MMaterialOverrides = 0x90; // CUtlVector< MaterialOverride_t >
            public const nint MExtraVertexStreams = 0xA8; // CUtlVector< WorldNodeOnDiskBufferData_t >
            public const nint MLayerNames = 0xC0; // CUtlVector< CUtlString >
            public const nint MSceneObjectLayerIndices = 0xD8; // CUtlVector< uint8 >
            public const nint MOverlayLayerIndices = 0xF0; // CUtlVector< uint8 >
            public const nint MGrassFileName = 0x108; // CUtlString
            public const nint MNodeLightingInfo = 0x110; // BakedLightingInfo_t
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class WorldBuilderParamsT {
            public const nint MFlMinDrawVolumeSize = 0x0; // float32
            public const nint MBBuildBakedLighting = 0x4; // bool
            public const nint MVLightmapUvScale = 0x8; // Vector2D
            public const nint MNCompileTimestamp = 0x10; // uint64
            public const nint MNCompileFingerprint = 0x18; // uint64
        }
        // Parent: None
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class NodeDataT {
            public const nint MNParent = 0x0; // int32
            public const nint MVOrigin = 0x4; // 
            public const nint MVMinBounds = 0x10; // 
            public const nint MVMaxBounds = 0x1C; // 
            public const nint MFlMinimumDistance = 0x28; // float32
            public const nint MChildNodeIndices = 0x30; // CUtlVector< int32 >
            public const nint MWorldNodePrefix = 0x48; // CUtlString
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class WorldT {
            public const nint MBuilderParams = 0x0; // WorldBuilderParams_t
            public const nint MWorldNodes = 0x20; // CUtlVector< NodeData_t >
            public const nint MWorldLightingInfo = 0x38; // BakedLightingInfo_t
            public const nint MEntityLumps = 0x68; // CUtlVector< CStrongHandleCopyable< InfoForResourceTypeCEntityLump > >
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VoxelVisBlockOffsetT {
            public const nint MNOffset = 0x0; // uint32
            public const nint MNElementCount = 0x4; // uint32
        }
        // Parent: None
        // Fields count: 13
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVoxelVisibility {
            public const nint MNBaseClusterCount = 0x40; // uint32
            public const nint MNPvsBytesPerCluster = 0x44; // uint32
            public const nint MVMinBounds = 0x48; // 
            public const nint MVMaxBounds = 0x54; // 
            public const nint MFlGridSize = 0x60; // float32
            public const nint MNSkyVisibilityCluster = 0x64; // uint32
            public const nint MNSunVisibilityCluster = 0x68; // uint32
            public const nint MNodeBlock = 0x6C; // VoxelVisBlockOffset_t
            public const nint MRegionBlock = 0x74; // VoxelVisBlockOffset_t
            public const nint MEnclosedClusterListBlock = 0x7C; // VoxelVisBlockOffset_t
            public const nint MEnclosedClustersBlock = 0x84; // VoxelVisBlockOffset_t
            public const nint MMasksBlock = 0x8C; // VoxelVisBlockOffset_t
            public const nint MNVisBlocks = 0x94; // VoxelVisBlockOffset_t
        }
        // Parent: None
        // Fields count: 0
        public static class VMapResourceDataT {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeVMapResourceDataT {
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
            public const nint MNameStringableIndex = 0x14; // int32
            public const nint MName = 0x18; // CUtlSymbolLarge
            public const nint MDesignerName = 0x20; // CUtlSymbolLarge
            public const nint MFlags = 0x30; // uint32
            public const nint MWorldGroupId = 0x38; // WorldGroupId_t
            public const nint MFDataObjectTypes = 0x3C; // uint32
            public const nint MPathIndex = 0x40; // ChangeAccessorFieldPathIndex_t
            public const nint MPPrev = 0x58; // CEntityIdentity*
            public const nint MPNext = 0x60; // CEntityIdentity*
            public const nint MPPrevByClass = 0x68; // CEntityIdentity*
            public const nint MPNextByClass = 0x70; // CEntityIdentity*
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // NetworkVarNames: m_pEntity (CEntityIdentity *)
        // NetworkVarNames: m_CScriptComponent (CScriptComponent::Storage_t)
        public static class CEntityInstance {
            public const nint MIszPrivateVScripts = 0x8; // CUtlSymbolLarge
            public const nint MPEntity = 0x10; // CEntityIdentity*
            public const nint MCScriptComponent = 0x28; // CScriptComponent*
            public const nint MBVisibleinPvs = 0x30; // bool
        }
        // Parent: CEntityComponent
        // Fields count: 1
        public static class CScriptComponent {
            public const nint MScriptClassName = 0x30; // CUtlSymbolLarge
        }
    }
}
