// Generated using https://github.com/a2x/cs2-dumper
// 2025-08-14 21:08:30.051873234 UTC

namespace CS2Dumper.Schemas {
    // Module: steamaudio.dll
    // Class count: 14
    // Enum count: 0
    public static class SteamaudioDll {
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class SteamAudioReverbClusteringSettings_t {
            public const nint m_bEnableClustering = 0x0; // bool
            public const nint m_nCubeMapResolution = 0x4; // int32
            public const nint m_flDepthThreshold = 0x8; // float32
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class SteamAudioCustomDataDimensionsSettings_t {
            public const nint m_nAmbisonicsOrderOutsideField = 0x0; // int32
            public const nint m_nAmbisonicsOrderInsideSizeField = 0x4; // int32
            public const nint m_flOutsideThreshold = 0x8; // float32
            public const nint m_flSizeThreshold = 0xC; // float32
            public const nint m_flInsideThreshold = 0x10; // float32
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class SteamAudioPathSettings_t {
            public const nint m_nNumVisSamples = 0x0; // int32
            public const nint m_flProbeVisRadius = 0x4; // float32
            public const nint m_flProbeVisThreshold = 0x8; // float32
            public const nint m_flProbePathRange = 0xC; // float32
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSteamAudioAmbisonicsField {
            public const nint m_field = 0x0; // CUtlVector<float32>
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSteamAudioBakedPathingData {
            public const nint m_nBands = 0x0; // int32
            public const nint m_probes = 0x8; // CSteamAudioProbeData
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class SteamAudioReverbSettings_t {
            public const nint m_nNumRays = 0x0; // int32
            public const nint m_nNumBounces = 0x4; // int32
            public const nint m_flIRDuration = 0x8; // float32
            public const nint m_nAmbisonicsOrder = 0xC; // int32
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSteamAudioProbeData {
            public const nint m_pProbeBatch = 0x0; // IPLProbeBatch
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class SteamAudioReverbCompressionSettings_t {
            public const nint m_bEnableCompression = 0x0; // bool
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSteamAudioBakedMaterialsData {
            public const nint m_probes = 0x0; // CSteamAudioProbeData
            public const nint m_vecMaterialTokens = 0x8; // CUtlVector<uint32>
            public const nint m_vecMaterialWeights = 0x20; // CUtlVector<float32>
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSteamAudioBakedOcclusionData {
            public const nint m_settings = 0x0; // SteamAudioCustomDataOcclusionSettings_t
            public const nint m_probes = 0x10; // CSteamAudioProbeData
            public const nint m_vecPathingRatio = 0x18; // CUtlVector<float32>
            public const nint m_vecPathingDeviation = 0x30; // CUtlVector<float32>
            public const nint m_vecReflectionRatio = 0x48; // CUtlVector<float32>
        }
        // Parent: None
        // Field count: 16
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSteamAudioBakedReverbData {
            public const nint m_nBands = 0x0; // int32
            public const nint m_probes = 0x8; // CSteamAudioProbeData
            public const nint m_reverbSettings = 0x10; // SteamAudioReverbSettings_t
            public const nint m_reverbClusteringSettings = 0x20; // SteamAudioReverbClusteringSettings_t
            public const nint m_reverbCompressionSettings = 0x2C; // SteamAudioReverbCompressionSettings_t
            public const nint m_clusteredProbes = 0x30; // CSteamAudioProbeData
            public const nint m_vecClusterForProbe = 0x38; // CUtlVector<int16>
            public const nint m_compressedData = 0x50; // CSteamAudioCompressedReverb
            public const nint m_compressedClusteredData = 0xB0; // CSteamAudioCompressedReverb
            public const nint m_vecMovableReverbs = 0x110; // CUtlVector<CSteamAudioBakedReverbData>
            public const nint m_vecMovableReverbInitialTransforms = 0x128; // CUtlVector<matrix3x4_t>
            public const nint m_vecMovableReverbAABBs = 0x140; // CUtlVector<AABB_t>
            public const nint m_vecMovableReverbKeys = 0x158; // CUtlVector<CUtlString>
            public const nint m_vecMovableReverbKeyTokens = 0x170; // CUtlVector<CUtlStringToken>
            public const nint m_vecMovableReverbTransforms = 0x188; // CUtlVector<matrix3x4_t>
            public const nint m_vecMovableReverbOBBs = 0x1A0; // CUtlVector<OBB_t>
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class SteamAudioCustomDataOcclusionSettings_t {
            public const nint m_bEnablePathing = 0x0; // bool
            public const nint m_bEnableReflections = 0x1; // bool
            public const nint m_nReflectionRays = 0x4; // int32
            public const nint m_nReflectionBounces = 0x8; // int32
        }
        // Parent: None
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSteamAudioBakedDimensionsData {
            public const nint m_settings = 0x0; // SteamAudioCustomDataDimensionsSettings_t
            public const nint m_probes = 0x18; // CSteamAudioProbeData
            public const nint m_vecInOut = 0x20; // CUtlVector<float32>
            public const nint m_vecSize = 0x38; // CUtlVector<float32>
            public const nint m_vecOutsideField = 0x50; // CUtlVector<CSteamAudioAmbisonicsField>
            public const nint m_vecInsideSmallSizeField = 0x68; // CUtlVector<CSteamAudioAmbisonicsField>
        }
        // Parent: None
        // Field count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSteamAudioCompressedReverb {
            public const nint m_nChannels = 0x0; // int32
            public const nint m_nBands = 0x4; // int32
            public const nint m_nBins = 0x8; // int32
            public const nint m_nProbes = 0xC; // int32
            public const nint m_vecNumSingularValues = 0x10; // CUtlVector<int32>
            public const nint m_vecDictionary = 0x28; // CUtlVector<float32>
            public const nint m_vecCompressedData = 0x40; // CUtlVector<float32>
            public const nint m_pCompressedData = 0x58; // IPLCompressedEnergyFields
        }
    }
}
