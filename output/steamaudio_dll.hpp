// Generated using https://github.com/a2x/cs2-dumper
// 2025-08-14 21:39:40.337154600 UTC

#pragma once

#include <cstddef>

namespace cs2_dumper {
    namespace schemas {
        // Module: steamaudio.dll
        // Class count: 14
        // Enum count: 0
        namespace steamaudio_dll {
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace SteamAudioReverbClusteringSettings_t {
                constexpr std::ptrdiff_t m_bEnableClustering = 0x0; // bool
                constexpr std::ptrdiff_t m_nCubeMapResolution = 0x4; // int32
                constexpr std::ptrdiff_t m_flDepthThreshold = 0x8; // float32
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace SteamAudioCustomDataDimensionsSettings_t {
                constexpr std::ptrdiff_t m_nAmbisonicsOrderOutsideField = 0x0; // int32
                constexpr std::ptrdiff_t m_nAmbisonicsOrderInsideSizeField = 0x4; // int32
                constexpr std::ptrdiff_t m_flOutsideThreshold = 0x8; // float32
                constexpr std::ptrdiff_t m_flSizeThreshold = 0xC; // float32
                constexpr std::ptrdiff_t m_flInsideThreshold = 0x10; // float32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace SteamAudioPathSettings_t {
                constexpr std::ptrdiff_t m_nNumVisSamples = 0x0; // int32
                constexpr std::ptrdiff_t m_flProbeVisRadius = 0x4; // float32
                constexpr std::ptrdiff_t m_flProbeVisThreshold = 0x8; // float32
                constexpr std::ptrdiff_t m_flProbePathRange = 0xC; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSteamAudioAmbisonicsField {
                constexpr std::ptrdiff_t m_field = 0x0; // CUtlVector<float32>
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSteamAudioBakedPathingData {
                constexpr std::ptrdiff_t m_nBands = 0x0; // int32
                constexpr std::ptrdiff_t m_probes = 0x8; // CSteamAudioProbeData
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace SteamAudioReverbSettings_t {
                constexpr std::ptrdiff_t m_nNumRays = 0x0; // int32
                constexpr std::ptrdiff_t m_nNumBounces = 0x4; // int32
                constexpr std::ptrdiff_t m_flIRDuration = 0x8; // float32
                constexpr std::ptrdiff_t m_nAmbisonicsOrder = 0xC; // int32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSteamAudioProbeData {
                constexpr std::ptrdiff_t m_pProbeBatch = 0x0; // IPLProbeBatch
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace SteamAudioReverbCompressionSettings_t {
                constexpr std::ptrdiff_t m_bEnableCompression = 0x0; // bool
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSteamAudioBakedMaterialsData {
                constexpr std::ptrdiff_t m_probes = 0x0; // CSteamAudioProbeData
                constexpr std::ptrdiff_t m_vecMaterialTokens = 0x8; // CUtlVector<uint32>
                constexpr std::ptrdiff_t m_vecMaterialWeights = 0x20; // CUtlVector<float32>
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSteamAudioBakedOcclusionData {
                constexpr std::ptrdiff_t m_settings = 0x0; // SteamAudioCustomDataOcclusionSettings_t
                constexpr std::ptrdiff_t m_probes = 0x10; // CSteamAudioProbeData
                constexpr std::ptrdiff_t m_vecPathingRatio = 0x18; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_vecPathingDeviation = 0x30; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_vecReflectionRatio = 0x48; // CUtlVector<float32>
            }
            // Parent: None
            // Field count: 16
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSteamAudioBakedReverbData {
                constexpr std::ptrdiff_t m_nBands = 0x0; // int32
                constexpr std::ptrdiff_t m_probes = 0x8; // CSteamAudioProbeData
                constexpr std::ptrdiff_t m_reverbSettings = 0x10; // SteamAudioReverbSettings_t
                constexpr std::ptrdiff_t m_reverbClusteringSettings = 0x20; // SteamAudioReverbClusteringSettings_t
                constexpr std::ptrdiff_t m_reverbCompressionSettings = 0x2C; // SteamAudioReverbCompressionSettings_t
                constexpr std::ptrdiff_t m_clusteredProbes = 0x30; // CSteamAudioProbeData
                constexpr std::ptrdiff_t m_vecClusterForProbe = 0x38; // CUtlVector<int16>
                constexpr std::ptrdiff_t m_compressedData = 0x50; // CSteamAudioCompressedReverb
                constexpr std::ptrdiff_t m_compressedClusteredData = 0xB0; // CSteamAudioCompressedReverb
                constexpr std::ptrdiff_t m_vecMovableReverbs = 0x110; // CUtlVector<CSteamAudioBakedReverbData>
                constexpr std::ptrdiff_t m_vecMovableReverbInitialTransforms = 0x128; // CUtlVector<matrix3x4_t>
                constexpr std::ptrdiff_t m_vecMovableReverbAABBs = 0x140; // CUtlVector<AABB_t>
                constexpr std::ptrdiff_t m_vecMovableReverbKeys = 0x158; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_vecMovableReverbKeyTokens = 0x170; // CUtlVector<CUtlStringToken>
                constexpr std::ptrdiff_t m_vecMovableReverbTransforms = 0x188; // CUtlVector<matrix3x4_t>
                constexpr std::ptrdiff_t m_vecMovableReverbOBBs = 0x1A0; // CUtlVector<OBB_t>
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace SteamAudioCustomDataOcclusionSettings_t {
                constexpr std::ptrdiff_t m_bEnablePathing = 0x0; // bool
                constexpr std::ptrdiff_t m_bEnableReflections = 0x1; // bool
                constexpr std::ptrdiff_t m_nReflectionRays = 0x4; // int32
                constexpr std::ptrdiff_t m_nReflectionBounces = 0x8; // int32
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSteamAudioBakedDimensionsData {
                constexpr std::ptrdiff_t m_settings = 0x0; // SteamAudioCustomDataDimensionsSettings_t
                constexpr std::ptrdiff_t m_probes = 0x18; // CSteamAudioProbeData
                constexpr std::ptrdiff_t m_vecInOut = 0x20; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_vecSize = 0x38; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_vecOutsideField = 0x50; // CUtlVector<CSteamAudioAmbisonicsField>
                constexpr std::ptrdiff_t m_vecInsideSmallSizeField = 0x68; // CUtlVector<CSteamAudioAmbisonicsField>
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSteamAudioCompressedReverb {
                constexpr std::ptrdiff_t m_nChannels = 0x0; // int32
                constexpr std::ptrdiff_t m_nBands = 0x4; // int32
                constexpr std::ptrdiff_t m_nBins = 0x8; // int32
                constexpr std::ptrdiff_t m_nProbes = 0xC; // int32
                constexpr std::ptrdiff_t m_vecNumSingularValues = 0x10; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_vecDictionary = 0x28; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_vecCompressedData = 0x40; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_pCompressedData = 0x58; // IPLCompressedEnergyFields
            }
        }
    }
}
