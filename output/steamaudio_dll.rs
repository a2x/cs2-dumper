// Generated using https://github.com/a2x/cs2-dumper
// 2025-08-19 21:03:58.898607300 UTC

#![allow(non_upper_case_globals, non_camel_case_types, non_snake_case, unused)]

pub mod cs2_dumper {
    pub mod schemas {
        // Module: steamaudio.dll
        // Class count: 14
        // Enum count: 0
        pub mod steamaudio_dll {
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod SteamAudioReverbClusteringSettings_t {
                pub const m_bEnableClustering: usize = 0x0; // bool
                pub const m_nCubeMapResolution: usize = 0x4; // int32
                pub const m_flDepthThreshold: usize = 0x8; // float32
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod SteamAudioCustomDataDimensionsSettings_t {
                pub const m_nAmbisonicsOrderOutsideField: usize = 0x0; // int32
                pub const m_nAmbisonicsOrderInsideSizeField: usize = 0x4; // int32
                pub const m_flOutsideThreshold: usize = 0x8; // float32
                pub const m_flSizeThreshold: usize = 0xC; // float32
                pub const m_flInsideThreshold: usize = 0x10; // float32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod SteamAudioPathSettings_t {
                pub const m_nNumVisSamples: usize = 0x0; // int32
                pub const m_flProbeVisRadius: usize = 0x4; // float32
                pub const m_flProbeVisThreshold: usize = 0x8; // float32
                pub const m_flProbePathRange: usize = 0xC; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CSteamAudioAmbisonicsField {
                pub const m_field: usize = 0x0; // CUtlVector<float32>
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CSteamAudioBakedPathingData {
                pub const m_nBands: usize = 0x0; // int32
                pub const m_probes: usize = 0x8; // CSteamAudioProbeData
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod SteamAudioReverbSettings_t {
                pub const m_nNumRays: usize = 0x0; // int32
                pub const m_nNumBounces: usize = 0x4; // int32
                pub const m_flIRDuration: usize = 0x8; // float32
                pub const m_nAmbisonicsOrder: usize = 0xC; // int32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CSteamAudioProbeData {
                pub const m_pProbeBatch: usize = 0x0; // IPLProbeBatch
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod SteamAudioReverbCompressionSettings_t {
                pub const m_bEnableCompression: usize = 0x0; // bool
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CSteamAudioBakedMaterialsData {
                pub const m_probes: usize = 0x0; // CSteamAudioProbeData
                pub const m_vecMaterialTokens: usize = 0x8; // CUtlVector<uint32>
                pub const m_vecMaterialWeights: usize = 0x20; // CUtlVector<float32>
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CSteamAudioBakedOcclusionData {
                pub const m_settings: usize = 0x0; // SteamAudioCustomDataOcclusionSettings_t
                pub const m_probes: usize = 0x10; // CSteamAudioProbeData
                pub const m_vecPathingRatio: usize = 0x18; // CUtlVector<float32>
                pub const m_vecPathingDeviation: usize = 0x30; // CUtlVector<float32>
                pub const m_vecReflectionRatio: usize = 0x48; // CUtlVector<float32>
            }
            // Parent: None
            // Field count: 16
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CSteamAudioBakedReverbData {
                pub const m_nBands: usize = 0x0; // int32
                pub const m_probes: usize = 0x8; // CSteamAudioProbeData
                pub const m_reverbSettings: usize = 0x10; // SteamAudioReverbSettings_t
                pub const m_reverbClusteringSettings: usize = 0x20; // SteamAudioReverbClusteringSettings_t
                pub const m_reverbCompressionSettings: usize = 0x2C; // SteamAudioReverbCompressionSettings_t
                pub const m_clusteredProbes: usize = 0x30; // CSteamAudioProbeData
                pub const m_vecClusterForProbe: usize = 0x38; // CUtlVector<int16>
                pub const m_compressedData: usize = 0x50; // CSteamAudioCompressedReverb
                pub const m_compressedClusteredData: usize = 0xB0; // CSteamAudioCompressedReverb
                pub const m_vecMovableReverbs: usize = 0x110; // CUtlVector<CSteamAudioBakedReverbData>
                pub const m_vecMovableReverbInitialTransforms: usize = 0x128; // CUtlVector<matrix3x4_t>
                pub const m_vecMovableReverbAABBs: usize = 0x140; // CUtlVector<AABB_t>
                pub const m_vecMovableReverbKeys: usize = 0x158; // CUtlVector<CUtlString>
                pub const m_vecMovableReverbKeyTokens: usize = 0x170; // CUtlVector<CUtlStringToken>
                pub const m_vecMovableReverbTransforms: usize = 0x188; // CUtlVector<matrix3x4_t>
                pub const m_vecMovableReverbOBBs: usize = 0x1A0; // CUtlVector<OBB_t>
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod SteamAudioCustomDataOcclusionSettings_t {
                pub const m_bEnablePathing: usize = 0x0; // bool
                pub const m_bEnableReflections: usize = 0x1; // bool
                pub const m_nReflectionRays: usize = 0x4; // int32
                pub const m_nReflectionBounces: usize = 0x8; // int32
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CSteamAudioBakedDimensionsData {
                pub const m_settings: usize = 0x0; // SteamAudioCustomDataDimensionsSettings_t
                pub const m_probes: usize = 0x18; // CSteamAudioProbeData
                pub const m_vecInOut: usize = 0x20; // CUtlVector<float32>
                pub const m_vecSize: usize = 0x38; // CUtlVector<float32>
                pub const m_vecOutsideField: usize = 0x50; // CUtlVector<CSteamAudioAmbisonicsField>
                pub const m_vecInsideSmallSizeField: usize = 0x68; // CUtlVector<CSteamAudioAmbisonicsField>
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CSteamAudioCompressedReverb {
                pub const m_nChannels: usize = 0x0; // int32
                pub const m_nBands: usize = 0x4; // int32
                pub const m_nBins: usize = 0x8; // int32
                pub const m_nProbes: usize = 0xC; // int32
                pub const m_vecNumSingularValues: usize = 0x10; // CUtlVector<int32>
                pub const m_vecDictionary: usize = 0x28; // CUtlVector<float32>
                pub const m_vecCompressedData: usize = 0x40; // CUtlVector<float32>
                pub const m_pCompressedData: usize = 0x58; // IPLCompressedEnergyFields
            }
        }
    }
}
