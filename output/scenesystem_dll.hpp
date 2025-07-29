// Generated using https://github.com/a2x/cs2-dumper
// 2025-07-29 08:05:49.300075200 UTC

#pragma once

#include <cstddef>

namespace cs2_dumper {
    namespace schemas {
        // Module: scenesystem.dll
        // Class count: 9
        // Enum count: 1
        namespace scenesystem_dll {
            // Alignment: 1
            // Member count: 4
            enum class DisableShadows_t : uint8_t {
                kDisableShadows_None = 0x0,
                kDisableShadows_All = 0x1,
                kDisableShadows_Baked = 0x2,
                kDisableShadows_Realtime = 0x3
            };
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSSDSMsg_ViewTarget {
                constexpr std::ptrdiff_t m_Name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_TextureId = 0x8; // uint64
                constexpr std::ptrdiff_t m_nWidth = 0x10; // int32
                constexpr std::ptrdiff_t m_nHeight = 0x14; // int32
                constexpr std::ptrdiff_t m_nRequestedWidth = 0x18; // int32
                constexpr std::ptrdiff_t m_nRequestedHeight = 0x1C; // int32
                constexpr std::ptrdiff_t m_nNumMipLevels = 0x20; // int32
                constexpr std::ptrdiff_t m_nDepth = 0x24; // int32
                constexpr std::ptrdiff_t m_nMultisampleNumSamples = 0x28; // int32
                constexpr std::ptrdiff_t m_nFormat = 0x2C; // int32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace SceneViewId_t {
                constexpr std::ptrdiff_t m_nViewId = 0x0; // uint64
                constexpr std::ptrdiff_t m_nFrameCount = 0x8; // uint64
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSSDSEndFrameViewInfo {
                constexpr std::ptrdiff_t m_nViewId = 0x0; // uint64
                constexpr std::ptrdiff_t m_ViewName = 0x8; // CUtlString
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSSDSMsg_PostLayer {
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSSDSMsg_LayerBase {
                constexpr std::ptrdiff_t m_viewId = 0x0; // SceneViewId_t
                constexpr std::ptrdiff_t m_ViewName = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_nLayerId = 0x18; // uint64
                constexpr std::ptrdiff_t m_LayerName = 0x20; // CUtlString
                constexpr std::ptrdiff_t m_displayText = 0x28; // CUtlString
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSSDSMsg_PreLayer {
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSSDSMsg_ViewTargetList {
                constexpr std::ptrdiff_t m_viewId = 0x0; // SceneViewId_t
                constexpr std::ptrdiff_t m_ViewName = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_Targets = 0x18; // CUtlVector<CSSDSMsg_ViewTarget>
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSSDSMsg_ViewRender {
                constexpr std::ptrdiff_t m_viewId = 0x0; // SceneViewId_t
                constexpr std::ptrdiff_t m_ViewName = 0x10; // CUtlString
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSSDSMsg_EndFrame {
                constexpr std::ptrdiff_t m_Views = 0x0; // CUtlVector<CSSDSEndFrameViewInfo>
            }
        }
    }
}
