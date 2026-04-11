// Generated using https://github.com/a2x/cs2-dumper
// 2026-04-11 10:20:28.886370999 UTC

namespace CS2Dumper.Schemas {
    // Module: libsoundsystem.so
    // Classes count: 127
    // Enums count: 0
    public static class LibsoundsystemSo {
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // ���x.
        public static class CVMixInputBase {
            public const nint m_name = 0x0; // CUtlString
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // ���x.
        // 
        // Invalid
        // 
        // p4�x.
        // @��x.
        // 
        // char
        // 
        // p4�x.
        // @��x.
        // 
        // uint8
        // 
        // p4�x.
        // @��x.
        // 
        // uint16
        // 
        // p4�x.
        // @��x.
        // 
        // uint32
        // 
        // p4�x.
        // @��x.
        // 
        // uint64
        // 
        // p4�x.
        // @��x.
        // 
        // float64
        // 
        // p4�x.
        // @��x.
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // P�k�+
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        public static class CVoiceContainerBlender {
            public const nint m_firstSound = 0xA8; // CSoundContainerReference
            public const nint m_secondSound = 0xC0; // CSoundContainerReference
            public const nint m_flBlendFactor = 0xD8; // float32
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // ���x.
        // 
        // Invalid
        // 
        // p4�x.
        // @��x.
        // 
        // char
        // 
        // p4�x.
        // @��x.
        // 
        // uint8
        // 
        // p4�x.
        // @��x.
        // 
        // uint16
        // 
        // p4�x.
        // @��x.
        // 
        // uint32
        // 
        // p4�x.
        // @��x.
        // 
        // uint64
        // 
        // p4�x.
        // @��x.
        // 
        // float64
        // 
        // p4�x.
        // @��x.
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // P�k�+
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        public static class CVMixPitchShiftProcessorDesc {
            public const nint m_desc = 0x1C; // VMixPitchShiftDesc_t
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // ���x.
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
        // ���x.
        public static class CVoiceContainerStaticAdditiveSynth__CHarmonic {
            public const nint m_nWaveform = 0x0; // EWaveform
            public const nint m_nFundamental = 0x1; // EMidiNote
            public const nint m_nOctave = 0x4; // int32
            public const nint m_flCents = 0x8; // float32
            public const nint m_flPhase = 0xC; // float32
            public const nint m_curve = 0x10; // CPiecewiseCurve
            public const nint m_volumeScaling = 0x50; // CVoiceContainerStaticAdditiveSynth::CGainScalePerInstance
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // ���x.
        public static class CVoiceContainerStaticAdditiveSynth__CTone {
            public const nint m_harmonics = 0x0; // CUtlVector<CVoiceContainerStaticAdditiveSynth::CHarmonic>
            public const nint m_curve = 0x18; // CPiecewiseCurve
            public const nint m_bSyncInstances = 0x58; // bool
        }
        // Parent: None
        // Fields count: 6
        //
        // Metadata:
        // ���x.
        // 
        // Invalid
        // 
        // p4�x.
        // @��x.
        // 
        // char
        // 
        // p4�x.
        // @��x.
        // 
        // uint8
        // 
        // p4�x.
        // @��x.
        // 
        // uint16
        // 
        // p4�x.
        // @��x.
        // 
        // uint32
        // 
        // p4�x.
        // @��x.
        // 
        // uint64
        // 
        // p4�x.
        // @��x.
        // 
        // float64
        // 
        // p4�x.
        // @��x.
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // P�k�+
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        public static class CVoiceContainerRandomSampler {
            public const nint m_flAmplitude = 0xB8; // float32
            public const nint m_flAmplitudeJitter = 0xBC; // float32
            public const nint m_flTimeJitter = 0xC0; // float32
            public const nint m_flMaxLength = 0xC4; // float32
            public const nint m_nNumDelayVariations = 0xC8; // int32
            public const nint m_grainResources = 0xD0; // CUtlVector<CStrongHandle<InfoForResourceTypeCVoiceContainerBase>>
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // ���x.
        // 
        // Invalid
        // 
        // p4�x.
        // @��x.
        // 
        // char
        // 
        // p4�x.
        // @��x.
        // 
        // uint8
        // 
        // p4�x.
        // @��x.
        // 
        // uint16
        // 
        // p4�x.
        // @��x.
        // 
        // uint32
        // 
        // p4�x.
        // @��x.
        // 
        // uint64
        // 
        // p4�x.
        // @��x.
        // 
        // float64
        // 
        // p4�x.
        // @��x.
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // P�k�+
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        public static class CVMixSteamAudioDirectProcessorDesc {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // ���x.
        // 
        // Invalid
        // 
        // p4�x.
        // @��x.
        // 
        // char
        // 
        // p4�x.
        // @��x.
        // 
        // uint8
        // 
        // p4�x.
        // @��x.
        // 
        // uint16
        // 
        // p4�x.
        // @��x.
        // 
        // uint32
        // 
        // p4�x.
        // @��x.
        // 
        // uint64
        // 
        // p4�x.
        // @��x.
        // 
        // float64
        // 
        // p4�x.
        // @��x.
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // P�k�+
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        public static class CVMixSteamAudioHRTFProcessorDesc {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // ���x.
        // 
        // Invalid
        // 
        // p4�x.
        // @��x.
        // 
        // char
        // 
        // p4�x.
        // @��x.
        // 
        // uint8
        // 
        // p4�x.
        // @��x.
        // 
        // uint16
        // 
        // p4�x.
        // @��x.
        // 
        // uint32
        // 
        // p4�x.
        // @��x.
        // 
        // uint64
        // 
        // p4�x.
        // @��x.
        // 
        // float64
        // 
        // p4�x.
        // @��x.
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // P�k�+
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        public static class CVoiceContainerDefault {
        }
        // Parent: None
        // Fields count: 11
        //
        // Metadata:
        // ���x.
        public static class CVSound {
            public const nint m_nRate = 0x0; // int32
            public const nint m_nFormat = 0x4; // CVSoundFormat_t
            public const nint m_nChannels = 0x8; // uint32
            public const nint m_nLoopStart = 0xC; // int32
            public const nint m_nSampleCount = 0x10; // uint32
            public const nint m_flDuration = 0x14; // float32
            public const nint m_Sentences = 0x18; // CUtlVector<CAudioSentence>
            public const nint m_nStreamingSize = 0x30; // uint32
            public const nint m_nSeekTable = 0x38; // CUtlVector<int32>
            public const nint m_nLoopEnd = 0x50; // int32
            public const nint m_encodedHeader = 0x58; // CUtlBinaryBlock
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // ���x.
        public static class CDSPPresetMixgroupModifierTable {
            public const nint m_table = 0x0; // CUtlVector<CDspPresetModifierList>
        }
        // Parent: None
        // Fields count: 7
        //
        // Metadata:
        // ���x.
        // 
        // Invalid
        // 
        // p4�x.
        // @��x.
        // 
        // char
        // 
        // p4�x.
        // @��x.
        // 
        // uint8
        // 
        // p4�x.
        // @��x.
        // 
        // uint16
        // 
        // p4�x.
        // @��x.
        // 
        // uint32
        // 
        // p4�x.
        // @��x.
        // 
        // uint64
        // 
        // p4�x.
        // @��x.
        // 
        // float64
        // 
        // p4�x.
        // @��x.
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // P�k�+
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        public static class CSosGroupActionSoundeventClusterSchema {
            public const nint m_nMinNearby = 0x8; // int32
            public const nint m_flClusterEpsilon = 0xC; // float32
            public const nint m_shouldPlayOpvar = 0x10; // CUtlString
            public const nint m_shouldPlayClusterChild = 0x18; // CUtlString
            public const nint m_clusterSizeOpvar = 0x20; // CUtlString
            public const nint m_groupBoundingBoxMinsOpvar = 0x28; // CUtlString
            public const nint m_groupBoundingBoxMaxsOpvar = 0x30; // CUtlString
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // ���x.
        // 
        // Invalid
        // 
        // p4�x.
        // @��x.
        // 
        // char
        // 
        // p4�x.
        // @��x.
        // 
        // uint8
        // 
        // p4�x.
        // @��x.
        // 
        // uint16
        // 
        // p4�x.
        // @��x.
        // 
        // uint32
        // 
        // p4�x.
        // @��x.
        // 
        // uint64
        // 
        // p4�x.
        // @��x.
        // 
        // float64
        // 
        // p4�x.
        // @��x.
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // P�k�+
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        public static class CSosGroupActionSetSoundeventParameterSchema {
            public const nint m_nMaxCount = 0x8; // int32
            public const nint m_flMinValue = 0xC; // float32
            public const nint m_flMaxValue = 0x10; // float32
            public const nint m_opvarName = 0x18; // CUtlString
            public const nint m_nSortType = 0x20; // SosActionSetParamSortType_t
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // ���x.
        public static class CSoundContainerReference {
            public const nint m_bUseReference = 0x0; // bool
            public const nint m_sound = 0x8; // CStrongHandle<InfoForResourceTypeCVoiceContainerBase>
            public const nint m_pSound = 0x10; // CVoiceContainerBase*
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // ���x.
        // 
        // Invalid
        // 
        // p4�x.
        // @��x.
        // 
        // char
        // 
        // p4�x.
        // @��x.
        // 
        // uint8
        // 
        // p4�x.
        // @��x.
        // 
        // uint16
        // 
        // p4�x.
        // @��x.
        // 
        // uint32
        // 
        // p4�x.
        // @��x.
        // 
        // uint64
        // 
        // p4�x.
        // @��x.
        // 
        // float64
        // 
        // p4�x.
        // @��x.
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // P�k�+
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        public static class CVoiceContainerNull {
        }
        // Parent: None
        // Fields count: 6
        //
        // Metadata:
        // ���x.
        public static class VMixSubgraphSwitchDesc_t {
            public const nint m_name = 0x0; // CUtlString
            public const nint m_effectName = 0x8; // CUtlString
            public const nint m_subgraphs = 0x10; // CUtlVector<CUtlString>
            public const nint m_interpolationMode = 0x28; // VMixSubgraphSwitchInterpolationType_t
            public const nint m_bOnlyTailsOnFadeOut = 0x2C; // bool
            public const nint m_flInterpolationTime = 0x30; // float32
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // ���x.
        public static class CVoiceContainerAnalysisBase {
            public const nint m_bRegenerateCurveOnCompile = 0x8; // bool
            public const nint m_curve = 0x10; // CPiecewiseCurve
        }
        // Parent: None
        // Fields count: 10
        //
        // Metadata:
        // ���x.
        // 
        // Invalid
        // 
        // p4�x.
        // @��x.
        // 
        // char
        // 
        // p4�x.
        // @��x.
        // 
        // uint8
        // 
        // p4�x.
        // @��x.
        // 
        // uint16
        // 
        // p4�x.
        // @��x.
        // 
        // uint32
        // 
        // p4�x.
        // @��x.
        // 
        // uint64
        // 
        // p4�x.
        // @��x.
        // 
        // float64
        // 
        // p4�x.
        // @��x.
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // P�k�+
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        public static class CSosGroupActionSoundeventMinMaxValuesSchema {
            public const nint m_strQueryPublicFieldName = 0x8; // CUtlString
            public const nint m_strDelayPublicFieldName = 0x10; // CUtlString
            public const nint m_bExcludeStoppedSounds = 0x18; // bool
            public const nint m_bExcludeDelayedSounds = 0x19; // bool
            public const nint m_bExcludeSoundsBelowThreshold = 0x1A; // bool
            public const nint m_flExcludeSoundsMinThresholdValue = 0x1C; // float32
            public const nint m_bExcludSoundsAboveThreshold = 0x20; // bool
            public const nint m_flExcludeSoundsMaxThresholdValue = 0x24; // float32
            public const nint m_strMinValueName = 0x28; // CUtlString
            public const nint m_strMaxValueName = 0x30; // CUtlString
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // ���x.
        // 
        // Invalid
        // 
        // p4�x.
        // @��x.
        // 
        // char
        // 
        // p4�x.
        // @��x.
        // 
        // uint8
        // 
        // p4�x.
        // @��x.
        // 
        // uint16
        // 
        // p4�x.
        // @��x.
        // 
        // uint32
        // 
        // p4�x.
        // @��x.
        // 
        // uint64
        // 
        // p4�x.
        // @��x.
        // 
        // float64
        // 
        // p4�x.
        // @��x.
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // P�k�+
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        public static class CVMixEnvelopeProcessorDesc {
            public const nint m_desc = 0x1C; // VMixEnvelopeDesc_t
        }
        // Parent: None
        // Fields count: 8
        //
        // Metadata:
        // ���x.
        public static class CVMixCommand {
            public const nint m_nCommand = 0x0; // VMixGraphCommandID_t
            public const nint m_nParameterNameHash = 0x4; // uint32
            public const nint m_nOutputSubmix = 0x8; // int32
            public const nint m_nInputSubmix0 = 0xC; // int32
            public const nint m_nInputSubmix1 = 0x10; // int32
            public const nint m_nProcessor = 0x14; // int32
            public const nint m_nInputValue0 = 0x18; // int32
            public const nint m_nInputValue1 = 0x1C; // int32
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // ���x.
        // 
        // Invalid
        // 
        // p4�x.
        // @��x.
        // 
        // char
        // 
        // p4�x.
        // @��x.
        // 
        // uint8
        // 
        // p4�x.
        // @��x.
        // 
        // uint16
        // 
        // p4�x.
        // @��x.
        // 
        // uint32
        // 
        // p4�x.
        // @��x.
        // 
        // uint64
        // 
        // p4�x.
        // @��x.
        // 
        // float64
        // 
        // p4�x.
        // @��x.
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // P�k�+
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        public static class CVMixControlInput {
            public const nint m_flDefaultValue = 0xC; // float32
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // ���x.
        // 
        // Invalid
        // 
        // p4�x.
        // @��x.
        // 
        // char
        // 
        // p4�x.
        // @��x.
        // 
        // uint8
        // 
        // p4�x.
        // @��x.
        // 
        // uint16
        // 
        // p4�x.
        // @��x.
        // 
        // uint32
        // 
        // p4�x.
        // @��x.
        // 
        // uint64
        // 
        // p4�x.
        // @��x.
        // 
        // float64
        // 
        // p4�x.
        // @��x.
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // P�k�+
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        public static class CVMixBoxverbProcessorDesc {
            public const nint m_desc = 0x1C; // VMixBoxverbDesc_t
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // ���x.
        // 
        // Invalid
        // 
        // p4�x.
        // @��x.
        // 
        // char
        // 
        // p4�x.
        // @��x.
        // 
        // uint8
        // 
        // p4�x.
        // @��x.
        // 
        // uint16
        // 
        // p4�x.
        // @��x.
        // 
        // uint32
        // 
        // p4�x.
        // @��x.
        // 
        // uint64
        // 
        // p4�x.
        // @��x.
        // 
        // float64
        // 
        // p4�x.
        // @��x.
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // P�k�+
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        public static class CVMixDynamicsCompressorProcessorDesc {
            public const nint m_desc = 0x1C; // VMixDynamicsCompressorDesc_t
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // ���x.
        public static class VMixPannerDesc_t {
            public const nint m_type = 0x0; // VMixPannerType_t
            public const nint m_flStrength = 0x4; // float32
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // ���x.
        // 
        // Invalid
        // 
        // p4�x.
        // @��x.
        // 
        // char
        // 
        // p4�x.
        // @��x.
        // 
        // uint8
        // 
        // p4�x.
        // @��x.
        // 
        // uint16
        // 
        // p4�x.
        // @��x.
        // 
        // uint32
        // 
        // p4�x.
        // @��x.
        // 
        // uint64
        // 
        // p4�x.
        // @��x.
        // 
        // float64
        // 
        // p4�x.
        // @��x.
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // P�k�+
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        public static class CSosGroupActionSoundeventPrioritySchema {
            public const nint m_priorityValue = 0x8; // CUtlString
            public const nint m_priorityVolumeScalar = 0x10; // CUtlString
            public const nint m_priorityContributeButDontRead = 0x18; // CUtlString
            public const nint m_bPriorityReadButDontContribute = 0x20; // CUtlString
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // ���x.
        // 
        // Invalid
        // 
        // p4�x.
        // @��x.
        // 
        // char
        // 
        // p4�x.
        // @��x.
        // 
        // uint8
        // 
        // p4�x.
        // @��x.
        // 
        // uint16
        // 
        // p4�x.
        // @��x.
        // 
        // uint32
        // 
        // p4�x.
        // @��x.
        // 
        // uint64
        // 
        // p4�x.
        // @��x.
        // 
        // float64
        // 
        // p4�x.
        // @��x.
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // P�k�+
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        public static class CVoiceContainerRealtimeFMSineWave {
            public const nint m_flCarrierFrequency = 0xA8; // float32
            public const nint m_flModulatorFrequency = 0xAC; // float32
            public const nint m_flModulatorAmount = 0xB0; // float32
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // ���x.
        public static class SelectedEditItemInfo_t {
            public const nint m_EditItems = 0x0; // CUtlVector<SosEditItemInfo_t>
        }
        // Parent: None
        // Fields count: 9
        //
        // Metadata:
        // ���x.
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
        // Fields count: 1
        //
        // Metadata:
        // ���x.
        // 
        // Invalid
        // 
        // p4�x.
        // @��x.
        // 
        // char
        // 
        // p4�x.
        // @��x.
        // 
        // uint8
        // 
        // p4�x.
        // @��x.
        // 
        // uint16
        // 
        // p4�x.
        // @��x.
        // 
        // uint32
        // 
        // p4�x.
        // @��x.
        // 
        // uint64
        // 
        // p4�x.
        // @��x.
        // 
        // float64
        // 
        // p4�x.
        // @��x.
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // P�k�+
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        public static class CVMixNameInputMeter {
            public const nint m_nValueIndex = 0xC; // int32
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // ���x.
        // 
        // Invalid
        // 
        // p4�x.
        // @��x.
        // 
        // char
        // 
        // p4�x.
        // @��x.
        // 
        // uint8
        // 
        // p4�x.
        // @��x.
        // 
        // uint16
        // 
        // p4�x.
        // @��x.
        // 
        // uint32
        // 
        // p4�x.
        // @��x.
        // 
        // uint64
        // 
        // p4�x.
        // @��x.
        // 
        // float64
        // 
        // p4�x.
        // @��x.
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // P�k�+
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        public static class CVMixDynamics3BandProcessorDesc {
            public const nint m_desc = 0x1C; // VMixDynamics3BandDesc_t
        }
        // Parent: None
        // Fields count: 17
        //
        // Metadata:
        // ���x.
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
        // Fields count: 0
        //
        // Metadata:
        // ���x.
        // 
        // Invalid
        // 
        // p4�x.
        // @��x.
        // 
        // char
        // 
        // p4�x.
        // @��x.
        // 
        // uint8
        // 
        // p4�x.
        // @��x.
        // 
        // uint16
        // 
        // p4�x.
        // @��x.
        // 
        // uint32
        // 
        // p4�x.
        // @��x.
        // 
        // uint64
        // 
        // p4�x.
        // @��x.
        // 
        // float64
        // 
        // p4�x.
        // @��x.
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // P�k�+
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        public static class CSosGroupActionSchema {
        }
        // Parent: None
        // Fields count: 16
        //
        // Metadata:
        // ���x.
        public static class CSosSoundEventGroupSchema {
            public const nint m_nGroupType = 0x8; // SosGroupType_t
            public const nint m_bBlocksEvents = 0xC; // bool
            public const nint m_nBlockMaxCount = 0x10; // int32
            public const nint m_flMemberLifespanTime = 0x14; // float32
            public const nint m_bInvertMatch = 0x18; // bool
            public const nint m_Behavior_EventName = 0x1C; // SosGroupFieldBehavior_t
            public const nint m_matchSoundEventName = 0x20; // CUtlString
            public const nint m_bMatchEventSubString = 0x28; // bool
            public const nint m_matchSoundEventSubString = 0x30; // CUtlString
            public const nint m_Behavior_EntIndex = 0x38; // SosGroupFieldBehavior_t
            public const nint m_flEntIndex = 0x3C; // float32
            public const nint m_Behavior_Opvar = 0x40; // SosGroupFieldBehavior_t
            public const nint m_flOpvar = 0x44; // float32
            public const nint m_Behavior_String = 0x48; // SosGroupFieldBehavior_t
            public const nint m_opvarString = 0x50; // CUtlString
            public const nint m_vActions = 0x58; // CUtlVector<CSosGroupActionSchema*>
        }
        // Parent: None
        // Fields count: 10
        //
        // Metadata:
        // ���x.
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
        // Fields count: 1
        //
        // Metadata:
        // ���x.
        // 
        // Invalid
        // 
        // p4�x.
        // @��x.
        // 
        // char
        // 
        // p4�x.
        // @��x.
        // 
        // uint8
        // 
        // p4�x.
        // @��x.
        // 
        // uint16
        // 
        // p4�x.
        // @��x.
        // 
        // uint32
        // 
        // p4�x.
        // @��x.
        // 
        // uint64
        // 
        // p4�x.
        // @��x.
        // 
        // float64
        // 
        // p4�x.
        // @��x.
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // P�k�+
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        public static class CVMixEQ8ProcessorDesc {
            public const nint m_desc = 0x1C; // VMixEQ8Desc_t
        }
        // Parent: None
        // Fields count: 6
        //
        // Metadata:
        // ���x.
        public static class CDSPMixgroupModifier {
            public const nint m_mixgroup = 0x0; // CUtlString
            public const nint m_flModifier = 0x8; // float32
            public const nint m_flModifierMin = 0xC; // float32
            public const nint m_flSourceModifier = 0x10; // float32
            public const nint m_flSourceModifierMin = 0x14; // float32
            public const nint m_flListenerReverbModifierWhenSourceReverbIsActive = 0x18; // float32
        }
        // Parent: None
        // Fields count: 6
        //
        // Metadata:
        // ���x.
        public static class CAudioMorphData {
            public const nint m_times = 0x0; // CUtlVector<float32>
            public const nint m_nameHashCodes = 0x18; // CUtlVector<uint32>
            public const nint m_nameStrings = 0x30; // CUtlVector<CUtlString>
            public const nint m_samples = 0x48; // CUtlVector<CUtlVector<float32>>
            public const nint m_flEaseIn = 0x60; // float32
            public const nint m_flEaseOut = 0x64; // float32
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // ���x.
        public static class VMixDualCompressorDesc_t {
            public const nint m_flRMSTimeMS = 0x0; // float32
            public const nint m_fldbKneeWidth = 0x4; // float32
            public const nint m_flWetMix = 0x8; // float32
            public const nint m_bPeakMode = 0xC; // bool
            public const nint m_bandDesc = 0x10; // VMixDynamicsBand_t
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // ���x.
        // 
        // Invalid
        // 
        // p4�x.
        // @��x.
        // 
        // char
        // 
        // p4�x.
        // @��x.
        // 
        // uint8
        // 
        // p4�x.
        // @��x.
        // 
        // uint16
        // 
        // p4�x.
        // @��x.
        // 
        // uint32
        // 
        // p4�x.
        // @��x.
        // 
        // uint64
        // 
        // p4�x.
        // @��x.
        // 
        // float64
        // 
        // p4�x.
        // @��x.
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // P�k�+
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        public static class CVoiceContainerStaticAdditiveSynth {
            public const nint m_tones = 0xB8; // CUtlVector<CVoiceContainerStaticAdditiveSynth::CTone>
        }
        // Parent: None
        // Fields count: 9
        //
        // Metadata:
        // ���x.
        // 
        // Invalid
        // 
        // p4�x.
        // @��x.
        // 
        // char
        // 
        // p4�x.
        // @��x.
        // 
        // uint8
        // 
        // p4�x.
        // @��x.
        // 
        // uint16
        // 
        // p4�x.
        // @��x.
        // 
        // uint32
        // 
        // p4�x.
        // @��x.
        // 
        // uint64
        // 
        // p4�x.
        // @��x.
        // 
        // float64
        // 
        // p4�x.
        // @��x.
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // P�k�+
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        public static class CVoiceContainerShapedNoise {
            public const nint m_bUseCurveForFrequency = 0xA8; // bool
            public const nint m_flFrequency = 0xAC; // float32
            public const nint m_frequencySweep = 0xB0; // CPiecewiseCurve
            public const nint m_bUseCurveForResonance = 0xF0; // bool
            public const nint m_flResonance = 0xF4; // float32
            public const nint m_resonanceSweep = 0xF8; // CPiecewiseCurve
            public const nint m_bUseCurveForAmplitude = 0x138; // bool
            public const nint m_flGainInDecibels = 0x13C; // float32
            public const nint m_gainSweep = 0x140; // CPiecewiseCurve
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // ���x.
        public static class CDspPresetModifierList {
            public const nint m_dspName = 0x0; // CUtlString
            public const nint m_modifiers = 0x8; // CUtlVector<CDSPMixgroupModifier>
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // ���x.
        // 
        // Invalid
        // 
        // p4�x.
        // @��x.
        // 
        // char
        // 
        // p4�x.
        // @��x.
        // 
        // uint8
        // 
        // p4�x.
        // @��x.
        // 
        // uint16
        // 
        // p4�x.
        // @��x.
        // 
        // uint32
        // 
        // p4�x.
        // @��x.
        // 
        // uint64
        // 
        // p4�x.
        // @��x.
        // 
        // float64
        // 
        // p4�x.
        // @��x.
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // P�k�+
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        public static class CVoiceContainerBase {
            public const nint m_vSound = 0x28; // CVSound
            public const nint m_pEnvelopeAnalyzer = 0xA0; // CVoiceContainerAnalysisBase*
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // ���x.
        // 
        // Invalid
        // 
        // p4�x.
        // @��x.
        // 
        // char
        // 
        // p4�x.
        // @��x.
        // 
        // uint8
        // 
        // p4�x.
        // @��x.
        // 
        // uint16
        // 
        // p4�x.
        // @��x.
        // 
        // uint32
        // 
        // p4�x.
        // @��x.
        // 
        // uint64
        // 
        // p4�x.
        // @��x.
        // 
        // float64
        // 
        // p4�x.
        // @��x.
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // P�k�+
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        public static class CVMixDiffusorProcessorDesc {
            public const nint m_desc = 0x1C; // VMixDiffusorDesc_t
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // ���x.
        // 
        // Invalid
        // 
        // p4�x.
        // @��x.
        // 
        // char
        // 
        // p4�x.
        // @��x.
        // 
        // uint8
        // 
        // p4�x.
        // @��x.
        // 
        // uint16
        // 
        // p4�x.
        // @��x.
        // 
        // uint32
        // 
        // p4�x.
        // @��x.
        // 
        // uint64
        // 
        // p4�x.
        // @��x.
        // 
        // float64
        // 
        // p4�x.
        // @��x.
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // P�k�+
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        public static class CVMixUtilityProcessorDesc {
            public const nint m_desc = 0x1C; // VMixUtilityDesc_t
        }
        // Parent: None
        // Fields count: 6
        //
        // Metadata:
        // ���x.
        // 
        // Invalid
        // 
        // p4�x.
        // @��x.
        // 
        // char
        // 
        // p4�x.
        // @��x.
        // 
        // uint8
        // 
        // p4�x.
        // @��x.
        // 
        // uint16
        // 
        // p4�x.
        // @��x.
        // 
        // uint32
        // 
        // p4�x.
        // @��x.
        // 
        // uint64
        // 
        // p4�x.
        // @��x.
        // 
        // float64
        // 
        // p4�x.
        // @��x.
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // P�k�+
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        public static class CVoiceContainerGranulator {
            public const nint m_flGrainLength = 0xB8; // float32
            public const nint m_flGrainCrossfadeAmount = 0xBC; // float32
            public const nint m_flStartJitter = 0xC0; // float32
            public const nint m_flPlaybackJitter = 0xC4; // float32
            public const nint m_bShouldWraparound = 0xC8; // bool
            public const nint m_sourceAudio = 0xD0; // CStrongHandle<InfoForResourceTypeCVoiceContainerBase>
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // ���x.
        // 
        // Invalid
        // 
        // p4�x.
        // @��x.
        // 
        // char
        // 
        // p4�x.
        // @��x.
        // 
        // uint8
        // 
        // p4�x.
        // @��x.
        // 
        // uint16
        // 
        // p4�x.
        // @��x.
        // 
        // uint32
        // 
        // p4�x.
        // @��x.
        // 
        // uint64
        // 
        // p4�x.
        // @��x.
        // 
        // float64
        // 
        // p4�x.
        // @��x.
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // P�k�+
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        public static class CVMixPresetDSPProcessorDesc {
            public const nint m_desc = 0x20; // VMixPresetDSPDesc_t
        }
        // Parent: None
        // Fields count: 7
        //
        // Metadata:
        // ���x.
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
        // Fields count: 1
        //
        // Metadata:
        // ���x.
        public static class VMixEQ8Desc_t {
            public const nint m_stages = 0x0; // VMixFilterDesc_t[8]
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // ���x.
        // 
        // Invalid
        // 
        // p4�x.
        // @��x.
        // 
        // char
        // 
        // p4�x.
        // @��x.
        // 
        // uint8
        // 
        // p4�x.
        // @��x.
        // 
        // uint16
        // 
        // p4�x.
        // @��x.
        // 
        // uint32
        // 
        // p4�x.
        // @��x.
        // 
        // uint64
        // 
        // p4�x.
        // @��x.
        // 
        // float64
        // 
        // p4�x.
        // @��x.
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // P�k�+
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        public static class CVMixDynamicsProcessorDesc {
            public const nint m_desc = 0x1C; // VMixDynamicsDesc_t
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // ���x.
        public static class CVMixGraphDescData {
            public const nint m_name = 0x0; // CUtlString
            public const nint m_nGraphOutputChannels = 0x8; // int32
            public const nint m_bIsMainGraph = 0xC; // bool
        }
        // Parent: None
        // Fields count: 8
        //
        // Metadata:
        // ���x.
        // 
        // Invalid
        // 
        // p4�x.
        // @��x.
        // 
        // char
        // 
        // p4�x.
        // @��x.
        // 
        // uint8
        // 
        // p4�x.
        // @��x.
        // 
        // uint16
        // 
        // p4�x.
        // @��x.
        // 
        // uint32
        // 
        // p4�x.
        // @��x.
        // 
        // uint64
        // 
        // p4�x.
        // @��x.
        // 
        // float64
        // 
        // p4�x.
        // @��x.
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // P�k�+
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        public static class CVoiceContainerLoopXFade {
            public const nint m_sound = 0xA8; // CSoundContainerReference
            public const nint m_flLoopEnd = 0xC0; // float32
            public const nint m_flLoopStart = 0xC4; // float32
            public const nint m_flFadeOut = 0xC8; // float32
            public const nint m_flFadeIn = 0xCC; // float32
            public const nint m_bPlayHead = 0xD0; // bool
            public const nint m_bPlayTail = 0xD1; // bool
            public const nint m_bEqualPow = 0xD2; // bool
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // ���x.
        public static class VMixPresetDSPDesc_t {
            public const nint m_effectName = 0x0; // CUtlString
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // ���x.
        public static class CAudioPhonemeTag {
            public const nint m_flStartTime = 0x0; // float32
            public const nint m_flEndTime = 0x4; // float32
            public const nint m_nPhonemeCode = 0x8; // int32
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // ���x.
        // 
        // Invalid
        // 
        // p4�x.
        // @��x.
        // 
        // char
        // 
        // p4�x.
        // @��x.
        // 
        // uint8
        // 
        // p4�x.
        // @��x.
        // 
        // uint16
        // 
        // p4�x.
        // @��x.
        // 
        // uint32
        // 
        // p4�x.
        // @��x.
        // 
        // uint64
        // 
        // p4�x.
        // @��x.
        // 
        // float64
        // 
        // p4�x.
        // @��x.
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // P�k�+
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        public static class CVMixControlInputArray {
            public const nint m_nArrayIndex = 0xC; // int32
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // ���x.
        // 
        // Invalid
        // 
        // p4�x.
        // @��x.
        // 
        // char
        // 
        // p4�x.
        // @��x.
        // 
        // uint8
        // 
        // p4�x.
        // @��x.
        // 
        // uint16
        // 
        // p4�x.
        // @��x.
        // 
        // uint32
        // 
        // p4�x.
        // @��x.
        // 
        // uint64
        // 
        // p4�x.
        // @��x.
        // 
        // float64
        // 
        // p4�x.
        // @��x.
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // P�k�+
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        public static class CVMixNameInput {
            public const nint m_defaultValue = 0x10; // CUtlString
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // ���x.
        // 
        // Invalid
        // 
        // p4�x.
        // @��x.
        // 
        // char
        // 
        // p4�x.
        // @��x.
        // 
        // uint8
        // 
        // p4�x.
        // @��x.
        // 
        // uint16
        // 
        // p4�x.
        // @��x.
        // 
        // uint32
        // 
        // p4�x.
        // @��x.
        // 
        // uint64
        // 
        // p4�x.
        // @��x.
        // 
        // float64
        // 
        // p4�x.
        // @��x.
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // P�k�+
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        public static class CSosGroupActionSoundeventCountSchema {
            public const nint m_bExcludeStoppedSounds = 0x8; // bool
            public const nint m_strCountKeyName = 0x10; // CUtlString
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // ���x.
        // 
        // Invalid
        // 
        // p4�x.
        // @��x.
        // 
        // char
        // 
        // p4�x.
        // @��x.
        // 
        // uint8
        // 
        // p4�x.
        // @��x.
        // 
        // uint16
        // 
        // p4�x.
        // @��x.
        // 
        // uint32
        // 
        // p4�x.
        // @��x.
        // 
        // uint64
        // 
        // p4�x.
        // @��x.
        // 
        // float64
        // 
        // p4�x.
        // @��x.
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // P�k�+
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        public static class CVoiceContainerEnvelopeAnalyzer {
            public const nint m_mode = 0x50; // EMode_t
            public const nint m_fAnalysisWindowMs = 0x54; // float32
            public const nint m_flThreshold = 0x58; // float32
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // ���x.
        // 
        // Invalid
        // 
        // p4�x.
        // @��x.
        // 
        // char
        // 
        // p4�x.
        // @��x.
        // 
        // uint8
        // 
        // p4�x.
        // @��x.
        // 
        // uint16
        // 
        // p4�x.
        // @��x.
        // 
        // uint32
        // 
        // p4�x.
        // @��x.
        // 
        // uint64
        // 
        // p4�x.
        // @��x.
        // 
        // float64
        // 
        // p4�x.
        // @��x.
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // P�k�+
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        public static class CVMixBaseProcessorDesc {
            public const nint m_name = 0x8; // CUtlString
            public const nint m_nChannels = 0x14; // int32
            public const nint m_flxfade = 0x18; // float32
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // ���x.
        // 
        // Invalid
        // 
        // p4�x.
        // @��x.
        // 
        // char
        // 
        // p4�x.
        // @��x.
        // 
        // uint8
        // 
        // p4�x.
        // @��x.
        // 
        // uint16
        // 
        // p4�x.
        // @��x.
        // 
        // uint32
        // 
        // p4�x.
        // @��x.
        // 
        // uint64
        // 
        // p4�x.
        // @��x.
        // 
        // float64
        // 
        // p4�x.
        // @��x.
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // P�k�+
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        public static class CVMixImpulseResponseInput {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // ���x.
        // 
        // Invalid
        // 
        // p4�x.
        // @��x.
        // 
        // char
        // 
        // p4�x.
        // @��x.
        // 
        // uint8
        // 
        // p4�x.
        // @��x.
        // 
        // uint16
        // 
        // p4�x.
        // @��x.
        // 
        // uint32
        // 
        // p4�x.
        // @��x.
        // 
        // uint64
        // 
        // p4�x.
        // @��x.
        // 
        // float64
        // 
        // p4�x.
        // @��x.
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // P�k�+
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        public static class CVMixSteamAudioHybridReverbProcessorDesc {
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // ���x.
        public static class CSoundEventMetaData {
            public const nint m_soundEventVMix = 0x0; // CStrongHandle<InfoForResourceTypeCVMixListResource>
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // ���x.
        public static class VMixPitchShiftDesc_t {
            public const nint m_nGrainSampleCount = 0x0; // int32
            public const nint m_flPitchShift = 0x4; // float32
            public const nint m_nQuality = 0x8; // int32
            public const nint m_nProcType = 0xC; // int32
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // ���x.
        // 
        // Invalid
        // 
        // p4�x.
        // @��x.
        // 
        // char
        // 
        // p4�x.
        // @��x.
        // 
        // uint8
        // 
        // p4�x.
        // @��x.
        // 
        // uint16
        // 
        // p4�x.
        // @��x.
        // 
        // uint32
        // 
        // p4�x.
        // @��x.
        // 
        // uint64
        // 
        // p4�x.
        // @��x.
        // 
        // float64
        // 
        // p4�x.
        // @��x.
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // P�k�+
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        public static class CVMixControlOutput {
            public const nint m_flDefaultValue = 0xC; // float32
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // ���x.
        // 
        // Invalid
        // 
        // p4�x.
        // @��x.
        // 
        // char
        // 
        // p4�x.
        // @��x.
        // 
        // uint8
        // 
        // p4�x.
        // @��x.
        // 
        // uint16
        // 
        // p4�x.
        // @��x.
        // 
        // uint32
        // 
        // p4�x.
        // @��x.
        // 
        // uint64
        // 
        // p4�x.
        // @��x.
        // 
        // float64
        // 
        // p4�x.
        // @��x.
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // P�k�+
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        public static class CVMixModDelayProcessorDesc {
            public const nint m_desc = 0x1C; // VMixModDelayDesc_t
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // ���x.
        // 
        // Invalid
        // 
        // p4�x.
        // @��x.
        // 
        // char
        // 
        // p4�x.
        // @��x.
        // 
        // uint8
        // 
        // p4�x.
        // @��x.
        // 
        // uint16
        // 
        // p4�x.
        // @��x.
        // 
        // uint32
        // 
        // p4�x.
        // @��x.
        // 
        // uint64
        // 
        // p4�x.
        // @��x.
        // 
        // float64
        // 
        // p4�x.
        // @��x.
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // P�k�+
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        public static class CVMixShaperProcessorDesc {
            public const nint m_desc = 0x1C; // VMixShaperDesc_t
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // ���x.
        public static class CVMixAutomaticControlInput {
            public const nint m_name = 0x0; // CUtlString
            public const nint m_nControlInputIndex = 0x8; // int32
            public const nint m_bIsTrackSend = 0xC; // bool
            public const nint m_bIsStackVar = 0xD; // bool
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // ���x.
        public static class CAudioEmphasisSample {
            public const nint m_flTime = 0x0; // float32
            public const nint m_flValue = 0x4; // float32
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // ���x.
        // 
        // Invalid
        // 
        // p4�x.
        // @��x.
        // 
        // char
        // 
        // p4�x.
        // @��x.
        // 
        // uint8
        // 
        // p4�x.
        // @��x.
        // 
        // uint16
        // 
        // p4�x.
        // @��x.
        // 
        // uint32
        // 
        // p4�x.
        // @��x.
        // 
        // uint64
        // 
        // p4�x.
        // @��x.
        // 
        // float64
        // 
        // p4�x.
        // @��x.
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // P�k�+
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        public static class CVMixOscProcessorDesc {
            public const nint m_desc = 0x1C; // VMixOscDesc_t
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // ���x.
        public static class CVMixCurveHeader {
            public const nint m_nControlPointCount = 0x0; // uint32
            public const nint m_nControlPointStart = 0x4; // uint32
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // ���x.
        // 
        // Invalid
        // 
        // p4�x.
        // @��x.
        // 
        // char
        // 
        // p4�x.
        // @��x.
        // 
        // uint8
        // 
        // p4�x.
        // @��x.
        // 
        // uint16
        // 
        // p4�x.
        // @��x.
        // 
        // uint32
        // 
        // p4�x.
        // @��x.
        // 
        // uint64
        // 
        // p4�x.
        // @��x.
        // 
        // float64
        // 
        // p4�x.
        // @��x.
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // P�k�+
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        public static class CVoiceContainerGenerator {
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // ���x.
        // 
        // Invalid
        // 
        // p4�x.
        // @��x.
        // 
        // char
        // 
        // p4�x.
        // @��x.
        // 
        // uint8
        // 
        // p4�x.
        // @��x.
        // 
        // uint16
        // 
        // p4�x.
        // @��x.
        // 
        // uint32
        // 
        // p4�x.
        // @��x.
        // 
        // uint64
        // 
        // p4�x.
        // @��x.
        // 
        // float64
        // 
        // p4�x.
        // @��x.
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // P�k�+
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        public static class CVoiceContainerSet {
            public const nint m_soundsToPlay = 0xA8; // CUtlVector<CVoiceContainerSetElement>
        }
        // Parent: None
        // Fields count: 8
        //
        // Metadata:
        // ���x.
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
        // Fields count: 2
        //
        // Metadata:
        // ���x.
        public static class CVoiceContainerSetElement {
            public const nint m_sound = 0x0; // CSoundContainerReference
            public const nint m_flVolumeDB = 0x18; // float32
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // ���x.
        // 
        // Invalid
        // 
        // p4�x.
        // @��x.
        // 
        // char
        // 
        // p4�x.
        // @��x.
        // 
        // uint8
        // 
        // p4�x.
        // @��x.
        // 
        // uint16
        // 
        // p4�x.
        // @��x.
        // 
        // uint32
        // 
        // p4�x.
        // @��x.
        // 
        // uint64
        // 
        // p4�x.
        // @��x.
        // 
        // float64
        // 
        // p4�x.
        // @��x.
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // P�k�+
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        public static class CVoiceContainerAsyncGenerator {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // ���x.
        public static class CSoundInfoHeader {
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // ���x.
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
        // ���x.
        // 
        // Invalid
        // 
        // p4�x.
        // @��x.
        // 
        // char
        // 
        // p4�x.
        // @��x.
        // 
        // uint8
        // 
        // p4�x.
        // @��x.
        // 
        // uint16
        // 
        // p4�x.
        // @��x.
        // 
        // uint32
        // 
        // p4�x.
        // @��x.
        // 
        // uint64
        // 
        // p4�x.
        // @��x.
        // 
        // float64
        // 
        // p4�x.
        // @��x.
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // P�k�+
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        public static class CVMixFlangerProcessorDesc {
            public const nint m_desc = 0x1C; // VMixFlangerDesc_t
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // ���x.
        // 
        // Invalid
        // 
        // p4�x.
        // @��x.
        // 
        // char
        // 
        // p4�x.
        // @��x.
        // 
        // uint8
        // 
        // p4�x.
        // @��x.
        // 
        // uint16
        // 
        // p4�x.
        // @��x.
        // 
        // uint32
        // 
        // p4�x.
        // @��x.
        // 
        // uint64
        // 
        // p4�x.
        // @��x.
        // 
        // float64
        // 
        // p4�x.
        // @��x.
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // P�k�+
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        public static class CVMixEffectChainProcessorDesc {
            public const nint m_desc = 0x20; // VMixEffectChainDesc_t
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // ���x.
        // 
        // Invalid
        // 
        // p4�x.
        // @��x.
        // 
        // char
        // 
        // p4�x.
        // @��x.
        // 
        // uint8
        // 
        // p4�x.
        // @��x.
        // 
        // uint16
        // 
        // p4�x.
        // @��x.
        // 
        // uint32
        // 
        // p4�x.
        // @��x.
        // 
        // uint64
        // 
        // p4�x.
        // @��x.
        // 
        // float64
        // 
        // p4�x.
        // @��x.
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // P�k�+
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        public static class CVMixFreeverbProcessorDesc {
            public const nint m_desc = 0x1C; // VMixFreeverbDesc_t
        }
        // Parent: None
        // Fields count: 7
        //
        // Metadata:
        // ���x.
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
        // Fields count: 1
        //
        // Metadata:
        // ���x.
        // 
        // Invalid
        // 
        // p4�x.
        // @��x.
        // 
        // char
        // 
        // p4�x.
        // @��x.
        // 
        // uint8
        // 
        // p4�x.
        // @��x.
        // 
        // uint16
        // 
        // p4�x.
        // @��x.
        // 
        // uint32
        // 
        // p4�x.
        // @��x.
        // 
        // uint64
        // 
        // p4�x.
        // @��x.
        // 
        // float64
        // 
        // p4�x.
        // @��x.
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // P�k�+
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        public static class CVMixConvolutionProcessorDesc {
            public const nint m_desc = 0x1C; // VMixConvolutionDesc_t
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // ���x.
        public static class CSoundContainerReferenceArray {
            public const nint m_bUseReference = 0x0; // bool
            public const nint m_sounds = 0x8; // CUtlVector<CStrongHandle<InfoForResourceTypeCVoiceContainerBase>>
            public const nint m_pSounds = 0x20; // CUtlVector<CVoiceContainerBase*>
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // ���x.
        // 
        // Invalid
        // 
        // p4�x.
        // @��x.
        // 
        // char
        // 
        // p4�x.
        // @��x.
        // 
        // uint8
        // 
        // p4�x.
        // @��x.
        // 
        // uint16
        // 
        // p4�x.
        // @��x.
        // 
        // uint32
        // 
        // p4�x.
        // @��x.
        // 
        // uint64
        // 
        // p4�x.
        // @��x.
        // 
        // float64
        // 
        // p4�x.
        // @��x.
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // P�k�+
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        public static class CVMixFilterProcessorDesc {
            public const nint m_desc = 0x1C; // VMixFilterDesc_t
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // ���x.
        public static class CVMixAdditionalOutput {
            public const nint m_name = 0x0; // CUtlString
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // ���x.
        // 
        // Invalid
        // 
        // p4�x.
        // @��x.
        // 
        // char
        // 
        // p4�x.
        // @��x.
        // 
        // uint8
        // 
        // p4�x.
        // @��x.
        // 
        // uint16
        // 
        // p4�x.
        // @��x.
        // 
        // uint32
        // 
        // p4�x.
        // @��x.
        // 
        // uint64
        // 
        // p4�x.
        // @��x.
        // 
        // float64
        // 
        // p4�x.
        // @��x.
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // P�k�+
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        public static class CVoiceContainerTapePlayer {
            public const nint m_bShouldWraparound = 0xB8; // bool
            public const nint m_sourceAudio = 0xC0; // CStrongHandle<InfoForResourceTypeCVoiceContainerBase>
            public const nint m_flTapeSpeedAttackTime = 0xC8; // float32
            public const nint m_flTapeSpeedReleaseTime = 0xCC; // float32
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // ���x.
        // 
        // Invalid
        // 
        // p4�x.
        // @��x.
        // 
        // char
        // 
        // p4�x.
        // @��x.
        // 
        // uint8
        // 
        // p4�x.
        // @��x.
        // 
        // uint16
        // 
        // p4�x.
        // @��x.
        // 
        // uint32
        // 
        // p4�x.
        // @��x.
        // 
        // uint64
        // 
        // p4�x.
        // @��x.
        // 
        // float64
        // 
        // p4�x.
        // @��x.
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // P�k�+
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        public static class CVMixSubgraphSwitchProcessorDesc {
            public const nint m_desc = 0x20; // VMixSubgraphSwitchDesc_t
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // ���x.
        public static class VMixDiffusorDesc_t {
            public const nint m_flSize = 0x0; // float32
            public const nint m_flComplexity = 0x4; // float32
            public const nint m_flFeedback = 0x8; // float32
            public const nint m_flOutputGain = 0xC; // float32
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // ���x.
        // 
        // Invalid
        // 
        // p4�x.
        // @��x.
        // 
        // char
        // 
        // p4�x.
        // @��x.
        // 
        // uint8
        // 
        // p4�x.
        // @��x.
        // 
        // uint16
        // 
        // p4�x.
        // @��x.
        // 
        // uint32
        // 
        // p4�x.
        // @��x.
        // 
        // uint64
        // 
        // p4�x.
        // @��x.
        // 
        // float64
        // 
        // p4�x.
        // @��x.
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // P�k�+
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        public static class CVMixSteamAudioPathingProcessorDesc {
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // ���x.
        // 
        // Invalid
        // 
        // p4�x.
        // @��x.
        // 
        // char
        // 
        // p4�x.
        // @��x.
        // 
        // uint8
        // 
        // p4�x.
        // @��x.
        // 
        // uint16
        // 
        // p4�x.
        // @��x.
        // 
        // uint32
        // 
        // p4�x.
        // @��x.
        // 
        // uint64
        // 
        // p4�x.
        // @��x.
        // 
        // float64
        // 
        // p4�x.
        // @��x.
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // P�k�+
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        public static class CVMixPannerProcessorDesc {
            public const nint m_desc = 0x1C; // VMixPannerDesc_t
        }
        // Parent: None
        // Fields count: 9
        //
        // Metadata:
        // ���x.
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
        // Fields count: 0
        //
        // Metadata:
        // ���x.
        // 
        // Invalid
        // 
        // p4�x.
        // @��x.
        // 
        // char
        // 
        // p4�x.
        // @��x.
        // 
        // uint8
        // 
        // p4�x.
        // @��x.
        // 
        // uint16
        // 
        // p4�x.
        // @��x.
        // 
        // uint32
        // 
        // p4�x.
        // @��x.
        // 
        // uint64
        // 
        // p4�x.
        // @��x.
        // 
        // float64
        // 
        // p4�x.
        // @��x.
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // P�k�+
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        public static class CVMixStereoDelayProcessorDesc {
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // ���x.
        public static class VMixShaperDesc_t {
            public const nint m_nShape = 0x0; // int32
            public const nint m_fldbDrive = 0x4; // float32
            public const nint m_fldbOutputGain = 0x8; // float32
            public const nint m_flWetMix = 0xC; // float32
            public const nint m_nOversampleFactor = 0x10; // int32
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // ���x.
        public static class VMixEnvelopeDesc_t {
            public const nint m_flAttackTimeMS = 0x0; // float32
            public const nint m_flHoldTimeMS = 0x4; // float32
            public const nint m_flReleaseTimeMS = 0x8; // float32
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // ���x.
        public static class CAudioSentence {
            public const nint m_bShouldVoiceDuck = 0x0; // bool
            public const nint m_RunTimePhonemes = 0x8; // CUtlVector<CAudioPhonemeTag>
            public const nint m_EmphasisSamples = 0x20; // CUtlVector<CAudioEmphasisSample>
            public const nint m_morphData = 0x38; // CAudioMorphData
        }
        // Parent: None
        // Fields count: 8
        //
        // Metadata:
        // ���x.
        // 
        // Invalid
        // 
        // p4�x.
        // @��x.
        // 
        // char
        // 
        // p4�x.
        // @��x.
        // 
        // uint8
        // 
        // p4�x.
        // @��x.
        // 
        // uint16
        // 
        // p4�x.
        // @��x.
        // 
        // uint32
        // 
        // p4�x.
        // @��x.
        // 
        // uint64
        // 
        // p4�x.
        // @��x.
        // 
        // float64
        // 
        // p4�x.
        // @��x.
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // P�k�+
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        public static class CVoiceContainerParameterBlender {
            public const nint m_firstSound = 0xA8; // CSoundContainerReference
            public const nint m_secondSound = 0xC0; // CSoundContainerReference
            public const nint m_bEnableOcclusionBlend = 0xD8; // bool
            public const nint m_curve1 = 0xE0; // CPiecewiseCurve
            public const nint m_curve2 = 0x120; // CPiecewiseCurve
            public const nint m_bEnableDistanceBlend = 0x160; // bool
            public const nint m_curve3 = 0x168; // CPiecewiseCurve
            public const nint m_curve4 = 0x1A8; // CPiecewiseCurve
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // ���x.
        public static class CVMixAudioMeter {
            public const nint m_name = 0x0; // CUtlString
            public const nint m_displayName = 0x8; // CUtlString
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // ���x.
        // 
        // Invalid
        // 
        // p4�x.
        // @��x.
        // 
        // char
        // 
        // p4�x.
        // @��x.
        // 
        // uint8
        // 
        // p4�x.
        // @��x.
        // 
        // uint16
        // 
        // p4�x.
        // @��x.
        // 
        // uint32
        // 
        // p4�x.
        // @��x.
        // 
        // uint64
        // 
        // p4�x.
        // @��x.
        // 
        // float64
        // 
        // p4�x.
        // @��x.
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // P�k�+
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        public static class CVMixVocoderProcessorDesc {
            public const nint m_desc = 0x1C; // VMixVocoderDesc_t
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // ���x.
        // 
        // Invalid
        // 
        // p4�x.
        // @��x.
        // 
        // char
        // 
        // p4�x.
        // @��x.
        // 
        // uint8
        // 
        // p4�x.
        // @��x.
        // 
        // uint16
        // 
        // p4�x.
        // @��x.
        // 
        // uint32
        // 
        // p4�x.
        // @��x.
        // 
        // uint64
        // 
        // p4�x.
        // @��x.
        // 
        // float64
        // 
        // p4�x.
        // @��x.
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // P�k�+
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        public static class CSosGroupActionLimitSchema {
            public const nint m_nMaxCount = 0x8; // int32
            public const nint m_nStopType = 0xC; // SosActionStopType_t
            public const nint m_nSortType = 0x10; // SosActionLimitSortType_t
            public const nint m_bStopImmediate = 0x14; // bool
            public const nint m_bCountStopped = 0x15; // bool
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // ���x.
        // 
        // Invalid
        // 
        // p4�x.
        // @��x.
        // 
        // char
        // 
        // p4�x.
        // @��x.
        // 
        // uint8
        // 
        // p4�x.
        // @��x.
        // 
        // uint16
        // 
        // p4�x.
        // @��x.
        // 
        // uint32
        // 
        // p4�x.
        // @��x.
        // 
        // uint64
        // 
        // p4�x.
        // @��x.
        // 
        // float64
        // 
        // p4�x.
        // @��x.
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // P�k�+
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        public static class CVoiceContainerAmpedDecayingSineWave {
            public const nint m_flGainAmount = 0xB0; // float32
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // ���x.
        // 
        // Invalid
        // 
        // p4�x.
        // @��x.
        // 
        // char
        // 
        // p4�x.
        // @��x.
        // 
        // uint8
        // 
        // p4�x.
        // @��x.
        // 
        // uint16
        // 
        // p4�x.
        // @��x.
        // 
        // uint32
        // 
        // p4�x.
        // @��x.
        // 
        // uint64
        // 
        // p4�x.
        // @��x.
        // 
        // float64
        // 
        // p4�x.
        // @��x.
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // P�k�+
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        public static class CVoiceContainerEnvelope {
            public const nint m_sound = 0xA8; // CStrongHandle<InfoForResourceTypeCVoiceContainerBase>
            public const nint m_analysisContainer = 0xB0; // CVoiceContainerAnalysisBase*
        }
        // Parent: None
        // Fields count: 8
        //
        // Metadata:
        // ���x.
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
        // Fields count: 10
        //
        // Metadata:
        // ���x.
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
        // Fields count: 1
        //
        // Metadata:
        // ���x.
        public static class VMixEffectChainDesc_t {
            public const nint m_effectName = 0x0; // CUtlString
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // ���x.
        // 
        // Invalid
        // 
        // p4�x.
        // @��x.
        // 
        // char
        // 
        // p4�x.
        // @��x.
        // 
        // uint8
        // 
        // p4�x.
        // @��x.
        // 
        // uint16
        // 
        // p4�x.
        // @��x.
        // 
        // uint32
        // 
        // p4�x.
        // @��x.
        // 
        // uint64
        // 
        // p4�x.
        // @��x.
        // 
        // float64
        // 
        // p4�x.
        // @��x.
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // P�k�+
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        public static class CVMixPlateReverbProcessorDesc {
            public const nint m_desc = 0x1C; // VMixPlateverbDesc_t
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // ���x.
        // 
        // Invalid
        // 
        // p4�x.
        // @��x.
        // 
        // char
        // 
        // p4�x.
        // @��x.
        // 
        // uint8
        // 
        // p4�x.
        // @��x.
        // 
        // uint16
        // 
        // p4�x.
        // @��x.
        // 
        // uint32
        // 
        // p4�x.
        // @��x.
        // 
        // uint64
        // 
        // p4�x.
        // @��x.
        // 
        // float64
        // 
        // p4�x.
        // @��x.
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // P�k�+
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        public static class CVoiceContainerMultiBlender {
            public const nint m_soundsToPlay = 0xA8; // CSoundContainerReferenceArray
            public const nint m_flBlendFactor = 0xE0; // float32
            public const nint m_flCrossover = 0xE4; // float32
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // ���x.
        // 
        // Invalid
        // 
        // p4�x.
        // @��x.
        // 
        // char
        // 
        // p4�x.
        // @��x.
        // 
        // uint8
        // 
        // p4�x.
        // @��x.
        // 
        // uint16
        // 
        // p4�x.
        // @��x.
        // 
        // uint32
        // 
        // p4�x.
        // @��x.
        // 
        // uint64
        // 
        // p4�x.
        // @��x.
        // 
        // float64
        // 
        // p4�x.
        // @��x.
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // P�k�+
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        public static class CVMixVsndInput {
            public const nint m_defaultValue = 0x10; // CUtlString
            public const nint m_nProcessor = 0x18; // int32
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // ���x.
        public static class CVoiceContainerStaticAdditiveSynth__CGainScalePerInstance {
            public const nint m_flMinVolume = 0x0; // float32
            public const nint m_nInstancesAtMinVolume = 0x4; // int32
            public const nint m_flMaxVolume = 0x8; // float32
            public const nint m_nInstancesAtMaxVolume = 0xC; // int32
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // ���x.
        // 
        // Invalid
        // 
        // p4�x.
        // @��x.
        // 
        // char
        // 
        // p4�x.
        // @��x.
        // 
        // uint8
        // 
        // p4�x.
        // @��x.
        // 
        // uint16
        // 
        // p4�x.
        // @��x.
        // 
        // uint32
        // 
        // p4�x.
        // @��x.
        // 
        // uint64
        // 
        // p4�x.
        // @��x.
        // 
        // float64
        // 
        // p4�x.
        // @��x.
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // P�k�+
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        public static class CVoiceContainerSelector {
            public const nint m_mode = 0xA8; // PlayBackMode_t
            public const nint m_soundsToPlay = 0xB0; // CSoundContainerReferenceArray
            public const nint m_fProbabilityWeights = 0xE8; // CUtlVector<float32>
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // ���x.
        // 
        // Invalid
        // 
        // p4�x.
        // @��x.
        // 
        // char
        // 
        // p4�x.
        // @��x.
        // 
        // uint8
        // 
        // p4�x.
        // @��x.
        // 
        // uint16
        // 
        // p4�x.
        // @��x.
        // 
        // uint32
        // 
        // p4�x.
        // @��x.
        // 
        // uint64
        // 
        // p4�x.
        // @��x.
        // 
        // float64
        // 
        // p4�x.
        // @��x.
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // P�k�+
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        public static class CSosGroupActionTimeBlockLimitSchema {
            public const nint m_nMaxCount = 0x8; // int32
            public const nint m_flMaxDuration = 0xC; // float32
        }
        // Parent: None
        // Fields count: 8
        //
        // Metadata:
        // ���x.
        // 
        // Invalid
        // 
        // p4�x.
        // @��x.
        // 
        // char
        // 
        // p4�x.
        // @��x.
        // 
        // uint8
        // 
        // p4�x.
        // @��x.
        // 
        // uint16
        // 
        // p4�x.
        // @��x.
        // 
        // uint32
        // 
        // p4�x.
        // @��x.
        // 
        // uint64
        // 
        // p4�x.
        // @��x.
        // 
        // float64
        // 
        // p4�x.
        // @��x.
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // P�k�+
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        public static class CSosGroupActionMemberCountEnvelopeSchema {
            public const nint m_nBaseCount = 0x8; // int32
            public const nint m_nTargetCount = 0xC; // int32
            public const nint m_flBaseValue = 0x10; // float32
            public const nint m_flTargetValue = 0x14; // float32
            public const nint m_flAttack = 0x18; // float32
            public const nint m_flDecay = 0x1C; // float32
            public const nint m_resultVarName = 0x20; // CUtlString
            public const nint m_bSaveToGroup = 0x28; // bool
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // ���x.
        // 
        // Invalid
        // 
        // p4�x.
        // @��x.
        // 
        // char
        // 
        // p4�x.
        // @��x.
        // 
        // uint8
        // 
        // p4�x.
        // @��x.
        // 
        // uint16
        // 
        // p4�x.
        // @��x.
        // 
        // uint32
        // 
        // p4�x.
        // @��x.
        // 
        // uint64
        // 
        // p4�x.
        // @��x.
        // 
        // float64
        // 
        // p4�x.
        // @��x.
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // P�k�+
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        public static class CVMixDualCompressorProcessorDesc {
            public const nint m_desc = 0x1C; // VMixDualCompressorDesc_t
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // ���x.
        // 
        // Invalid
        // 
        // p4�x.
        // @��x.
        // 
        // char
        // 
        // p4�x.
        // @��x.
        // 
        // uint8
        // 
        // p4�x.
        // @��x.
        // 
        // uint16
        // 
        // p4�x.
        // @��x.
        // 
        // uint32
        // 
        // p4�x.
        // @��x.
        // 
        // uint64
        // 
        // p4�x.
        // @��x.
        // 
        // float64
        // 
        // p4�x.
        // @��x.
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // P�k�+
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        public static class CVoiceContainerSwitch {
            public const nint m_soundsToPlay = 0xA8; // CUtlVector<CSoundContainerReference>
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // ���x.
        // 
        // Invalid
        // 
        // p4�x.
        // @��x.
        // 
        // char
        // 
        // p4�x.
        // @��x.
        // 
        // uint8
        // 
        // p4�x.
        // @��x.
        // 
        // uint16
        // 
        // p4�x.
        // @��x.
        // 
        // uint32
        // 
        // p4�x.
        // @��x.
        // 
        // uint64
        // 
        // p4�x.
        // @��x.
        // 
        // float64
        // 
        // p4�x.
        // @��x.
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // P�k�+
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        public static class CVMixControlMeter {
            public const nint m_nValueIndex = 0xC; // int32
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // ���x.
        // 
        // Invalid
        // 
        // p4�x.
        // @��x.
        // 
        // char
        // 
        // p4�x.
        // @��x.
        // 
        // uint8
        // 
        // p4�x.
        // @��x.
        // 
        // uint16
        // 
        // p4�x.
        // @��x.
        // 
        // uint32
        // 
        // p4�x.
        // @��x.
        // 
        // uint64
        // 
        // p4�x.
        // @��x.
        // 
        // float64
        // 
        // p4�x.
        // @��x.
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // P�k�+
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        public static class CVoiceContainerEnum {
            public const nint m_soundsToPlay = 0xA8; // CSoundContainerReferenceArray
            public const nint m_iSelection = 0xE0; // int32
            public const nint m_flCrossfadeTime = 0xE4; // float32
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // ���x.
        // 
        // Invalid
        // 
        // p4�x.
        // @��x.
        // 
        // char
        // 
        // p4�x.
        // @��x.
        // 
        // uint8
        // 
        // p4�x.
        // @��x.
        // 
        // uint16
        // 
        // p4�x.
        // @��x.
        // 
        // uint32
        // 
        // p4�x.
        // @��x.
        // 
        // uint64
        // 
        // p4�x.
        // @��x.
        // 
        // float64
        // 
        // p4�x.
        // @��x.
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // P�k�+
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        public static class CSosGroupActionTimeLimitSchema {
            public const nint m_flMaxDuration = 0x8; // float32
        }
        // Parent: None
        // Fields count: 10
        //
        // Metadata:
        // ���x.
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
        // Fields count: 6
        //
        // Metadata:
        // ���x.
        public static class VMixUtilityDesc_t {
            public const nint m_nOp = 0x0; // VMixChannelOperation_t
            public const nint m_flInputPan = 0x4; // float32
            public const nint m_flOutputBalance = 0x8; // float32
            public const nint m_fldbOutputGain = 0xC; // float32
            public const nint m_bBassMono = 0x10; // bool
            public const nint m_flBassFreq = 0x14; // float32
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // ���x.
        // 
        // Invalid
        // 
        // p4�x.
        // @��x.
        // 
        // char
        // 
        // p4�x.
        // @��x.
        // 
        // uint8
        // 
        // p4�x.
        // @��x.
        // 
        // uint16
        // 
        // p4�x.
        // @��x.
        // 
        // uint32
        // 
        // p4�x.
        // @��x.
        // 
        // uint64
        // 
        // p4�x.
        // @��x.
        // 
        // float64
        // 
        // p4�x.
        // @��x.
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // P�k�+
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        public static class CVoiceContainerLoopTrigger {
            public const nint m_sound = 0xA8; // CSoundContainerReference
            public const nint m_flRetriggerTimeMin = 0xC0; // float32
            public const nint m_flRetriggerTimeMax = 0xC4; // float32
            public const nint m_flFadeTime = 0xC8; // float32
            public const nint m_bCrossFade = 0xCC; // bool
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // ���x.
        // 
        // Invalid
        // 
        // p4�x.
        // @��x.
        // 
        // char
        // 
        // p4�x.
        // @��x.
        // 
        // uint8
        // 
        // p4�x.
        // @��x.
        // 
        // uint16
        // 
        // p4�x.
        // @��x.
        // 
        // uint32
        // 
        // p4�x.
        // @��x.
        // 
        // uint64
        // 
        // p4�x.
        // @��x.
        // 
        // float64
        // 
        // p4�x.
        // @��x.
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // P�k�+
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        public static class CVoiceContainerDecayingSineWave {
            public const nint m_flFrequency = 0xA8; // float32
            public const nint m_flDecayTime = 0xAC; // float32
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // ���x.
        // 
        // Invalid
        // 
        // p4�x.
        // @��x.
        // 
        // char
        // 
        // p4�x.
        // @��x.
        // 
        // uint8
        // 
        // p4�x.
        // @��x.
        // 
        // uint16
        // 
        // p4�x.
        // @��x.
        // 
        // uint32
        // 
        // p4�x.
        // @��x.
        // 
        // uint64
        // 
        // p4�x.
        // @��x.
        // 
        // float64
        // 
        // p4�x.
        // @��x.
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // P�k�+
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        public static class CVMixDelayProcessorDesc {
            public const nint m_desc = 0x1C; // VMixDelayDesc_t
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // ���x.
        // 
        // Invalid
        // 
        // p4�x.
        // @��x.
        // 
        // char
        // 
        // p4�x.
        // @��x.
        // 
        // uint8
        // 
        // p4�x.
        // @��x.
        // 
        // uint16
        // 
        // p4�x.
        // @��x.
        // 
        // uint32
        // 
        // p4�x.
        // @��x.
        // 
        // uint64
        // 
        // p4�x.
        // @��x.
        // 
        // float64
        // 
        // p4�x.
        // @��x.
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // P�k�+
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        public static class CVMixBoxverb2ProcessorDesc {
            public const nint m_desc = 0x1C; // VMixBoxverbDesc_t
        }
        // Parent: None
        // Fields count: 6
        //
        // Metadata:
        // ���x.
        public static class VMixFilterDesc_t {
            public const nint m_nFilterType = 0x0; // VMixFilterType_t
            public const nint m_nFilterSlope = 0x2; // VMixFilterSlope_t
            public const nint m_bEnabled = 0x3; // bool
            public const nint m_fldbGain = 0x4; // float32
            public const nint m_flCutoffFreq = 0x8; // float32
            public const nint m_flQ = 0xC; // float32
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // ���x.
        public static class VMixOscDesc_t {
            public const nint oscType = 0x0; // VMixLFOShape_t
            public const nint m_freq = 0x4; // float32
            public const nint m_flPhase = 0x8; // float32
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // ���x.
        // 
        // Invalid
        // 
        // p4�x.
        // @��x.
        // 
        // char
        // 
        // p4�x.
        // @��x.
        // 
        // uint8
        // 
        // p4�x.
        // @��x.
        // 
        // uint16
        // 
        // p4�x.
        // @��x.
        // 
        // uint32
        // 
        // p4�x.
        // @��x.
        // 
        // uint64
        // 
        // p4�x.
        // @��x.
        // 
        // float64
        // 
        // p4�x.
        // @��x.
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // P�k�+
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        public static class CVMixAutoFilterProcessorDesc {
            public const nint m_desc = 0x1C; // VMixAutoFilterDesc_t
        }
        // Parent: None
        // Fields count: 9
        //
        // Metadata:
        // ���x.
        public static class VMixFlangerDesc_t {
            public const nint m_bPhaseInvert = 0x0; // bool
            public const nint m_flGlideTime = 0x4; // float32
            public const nint m_flDelay = 0x8; // float32
            public const nint m_flOutputGain = 0xC; // float32
            public const nint m_flFeedbackGain = 0x10; // float32
            public const nint m_flFeedforwardGain = 0x14; // float32
            public const nint m_flModRate = 0x18; // float32
            public const nint m_flModDepth = 0x1C; // float32
            public const nint m_bApplyAntialiasing = 0x20; // bool
        }
        // Parent: None
        // Fields count: 12
        //
        // Metadata:
        // ���x.
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
    }
}
