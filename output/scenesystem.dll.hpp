// Generated using https://github.com/a2x/cs2-dumper
// 2024-04-04 13:40:42.514657500 UTC

#pragma once

#include <cstddef>

namespace cs2_dumper {
    namespace schemas {
        // Module: scenesystem.dll
        // Classes count: 17
        // Enums count: 0
        namespace scenesystem_dll {
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSSDSEndFrameViewInfo {
                constexpr std::ptrdiff_t m_nViewId = 0x0; // uint64
                constexpr std::ptrdiff_t m_ViewName = 0x8; // CUtlString
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSSDSMsg_EndFrame {
                constexpr std::ptrdiff_t m_Views = 0x0; // CUtlVector<CSSDSEndFrameViewInfo>
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace SceneViewId_t {
                constexpr std::ptrdiff_t m_nViewId = 0x0; // uint64
                constexpr std::ptrdiff_t m_nFrameCount = 0x8; // uint64
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSSDSMsg_ViewRender {
                constexpr std::ptrdiff_t m_viewId = 0x0; // 
                constexpr std::ptrdiff_t m_ViewName = 0x10; // CUtlString
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSSDSMsg_LayerBase {
                constexpr std::ptrdiff_t m_viewId = 0x0; // 
                constexpr std::ptrdiff_t m_ViewName = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_nLayerIndex = 0x18; // int32
                constexpr std::ptrdiff_t m_nLayerId = 0x20; // uint64
                constexpr std::ptrdiff_t m_LayerName = 0x28; // CUtlString
                constexpr std::ptrdiff_t m_displayText = 0x30; // CUtlString
            }
            // Parent: None
            // Fields count: 10
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
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSSDSMsg_ViewTargetList {
                constexpr std::ptrdiff_t m_viewId = 0x0; // 
                constexpr std::ptrdiff_t m_ViewName = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_Targets = 0x18; // CUtlVector<CSSDSMsg_ViewTarget>
            }
            // Parent: CSSDSMsg_LayerBase
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSSDSMsg_PreLayer {
            }
            // Parent: CSSDSMsg_LayerBase
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSSDSMsg_PostLayer {
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSosSoundEventGroupListSchema {
                constexpr std::ptrdiff_t m_groupList = 0x0; // CUtlVector<CSosSoundEventGroupSchema>
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace SosEditItemInfo_t {
                constexpr std::ptrdiff_t itemType = 0x0; // SosEditItemType_t
                constexpr std::ptrdiff_t itemName = 0x8; // CUtlString
                constexpr std::ptrdiff_t itemTypeName = 0x10; // CUtlString
                constexpr std::ptrdiff_t itemKVString = 0x20; // CUtlString
                constexpr std::ptrdiff_t itemPos = 0x28; // Vector2D
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace SelectedEditItemInfo_t {
                constexpr std::ptrdiff_t m_EditItems = 0x0; // CUtlVector<SosEditItemInfo_t>
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSoundEventMetaData {
                constexpr std::ptrdiff_t m_soundEventVMix = 0x0; // CStrongHandle<InfoForResourceTypeCVMixListResource>
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CDSPMixgroupModifier {
                constexpr std::ptrdiff_t m_mixgroup = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_flModifier = 0x8; // float32
                constexpr std::ptrdiff_t m_flModifierMin = 0xC; // float32
                constexpr std::ptrdiff_t m_flSourceModifier = 0x10; // float32
                constexpr std::ptrdiff_t m_flSourceModifierMin = 0x14; // float32
                constexpr std::ptrdiff_t m_flListenerReverbModifierWhenSourceReverbIsActive = 0x18; // float32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CDspPresetModifierList {
                constexpr std::ptrdiff_t m_dspName = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_modifiers = 0x8; // CUtlVector<CDSPMixgroupModifier>
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace IParticleSystemDefinition {
            }
            // Parent: None
            // Fields count: 18
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CParticleVisibilityInputs {
                constexpr std::ptrdiff_t m_flCameraBias = 0x0; // float32
                constexpr std::ptrdiff_t m_nCPin = 0x4; // int32
                constexpr std::ptrdiff_t m_flProxyRadius = 0x8; // float32
                constexpr std::ptrdiff_t m_flInputMin = 0xC; // float32
                constexpr std::ptrdiff_t m_flInputMax = 0x10; // float32
                constexpr std::ptrdiff_t m_flNoPixelVisibilityFallback = 0x14; // float32
                constexpr std::ptrdiff_t m_flDistanceInputMin = 0x18; // float32
                constexpr std::ptrdiff_t m_flDistanceInputMax = 0x1C; // float32
                constexpr std::ptrdiff_t m_flDotInputMin = 0x20; // float32
                constexpr std::ptrdiff_t m_flDotInputMax = 0x24; // float32
                constexpr std::ptrdiff_t m_bDotCPAngles = 0x28; // bool
                constexpr std::ptrdiff_t m_bDotCameraAngles = 0x29; // bool
                constexpr std::ptrdiff_t m_flAlphaScaleMin = 0x2C; // float32
                constexpr std::ptrdiff_t m_flAlphaScaleMax = 0x30; // float32
                constexpr std::ptrdiff_t m_flRadiusScaleMin = 0x34; // float32
                constexpr std::ptrdiff_t m_flRadiusScaleMax = 0x38; // float32
                constexpr std::ptrdiff_t m_flRadiusScaleFOVBase = 0x3C; // float32
                constexpr std::ptrdiff_t m_bRightEye = 0x40; // bool
            }
        }
    }
}
