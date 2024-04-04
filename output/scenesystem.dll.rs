// Generated using https://github.com/a2x/cs2-dumper
// 2024-04-04 13:40:42.514657500 UTC

#![allow(non_upper_case_globals, non_camel_case_types, unused)]

pub mod cs2_dumper {
    pub mod schemas {
        // Module: scenesystem.dll
        // Classes count: 17
        // Enums count: 0
        pub mod scenesystem_dll {
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CSSDSEndFrameViewInfo {
                pub const m_nViewId: usize = 0x0; // uint64
                pub const m_ViewName: usize = 0x8; // CUtlString
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CSSDSMsg_EndFrame {
                pub const m_Views: usize = 0x0; // CUtlVector<CSSDSEndFrameViewInfo>
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod SceneViewId_t {
                pub const m_nViewId: usize = 0x0; // uint64
                pub const m_nFrameCount: usize = 0x8; // uint64
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CSSDSMsg_ViewRender {
                pub const m_viewId: usize = 0x0; // 
                pub const m_ViewName: usize = 0x10; // CUtlString
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CSSDSMsg_LayerBase {
                pub const m_viewId: usize = 0x0; // 
                pub const m_ViewName: usize = 0x10; // CUtlString
                pub const m_nLayerIndex: usize = 0x18; // int32
                pub const m_nLayerId: usize = 0x20; // uint64
                pub const m_LayerName: usize = 0x28; // CUtlString
                pub const m_displayText: usize = 0x30; // CUtlString
            }
            // Parent: None
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CSSDSMsg_ViewTarget {
                pub const m_Name: usize = 0x0; // CUtlString
                pub const m_TextureId: usize = 0x8; // uint64
                pub const m_nWidth: usize = 0x10; // int32
                pub const m_nHeight: usize = 0x14; // int32
                pub const m_nRequestedWidth: usize = 0x18; // int32
                pub const m_nRequestedHeight: usize = 0x1C; // int32
                pub const m_nNumMipLevels: usize = 0x20; // int32
                pub const m_nDepth: usize = 0x24; // int32
                pub const m_nMultisampleNumSamples: usize = 0x28; // int32
                pub const m_nFormat: usize = 0x2C; // int32
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CSSDSMsg_ViewTargetList {
                pub const m_viewId: usize = 0x0; // 
                pub const m_ViewName: usize = 0x10; // CUtlString
                pub const m_Targets: usize = 0x18; // CUtlVector<CSSDSMsg_ViewTarget>
            }
            // Parent: CSSDSMsg_LayerBase
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CSSDSMsg_PreLayer {
            }
            // Parent: CSSDSMsg_LayerBase
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CSSDSMsg_PostLayer {
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CSosSoundEventGroupListSchema {
                pub const m_groupList: usize = 0x0; // CUtlVector<CSosSoundEventGroupSchema>
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod SosEditItemInfo_t {
                pub const itemType: usize = 0x0; // SosEditItemType_t
                pub const itemName: usize = 0x8; // CUtlString
                pub const itemTypeName: usize = 0x10; // CUtlString
                pub const itemKVString: usize = 0x20; // CUtlString
                pub const itemPos: usize = 0x28; // Vector2D
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod SelectedEditItemInfo_t {
                pub const m_EditItems: usize = 0x0; // CUtlVector<SosEditItemInfo_t>
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CSoundEventMetaData {
                pub const m_soundEventVMix: usize = 0x0; // CStrongHandle<InfoForResourceTypeCVMixListResource>
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CDSPMixgroupModifier {
                pub const m_mixgroup: usize = 0x0; // CUtlString
                pub const m_flModifier: usize = 0x8; // float32
                pub const m_flModifierMin: usize = 0xC; // float32
                pub const m_flSourceModifier: usize = 0x10; // float32
                pub const m_flSourceModifierMin: usize = 0x14; // float32
                pub const m_flListenerReverbModifierWhenSourceReverbIsActive: usize = 0x18; // float32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CDspPresetModifierList {
                pub const m_dspName: usize = 0x0; // CUtlString
                pub const m_modifiers: usize = 0x8; // CUtlVector<CDSPMixgroupModifier>
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod IParticleSystemDefinition {
            }
            // Parent: None
            // Fields count: 18
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CParticleVisibilityInputs {
                pub const m_flCameraBias: usize = 0x0; // float32
                pub const m_nCPin: usize = 0x4; // int32
                pub const m_flProxyRadius: usize = 0x8; // float32
                pub const m_flInputMin: usize = 0xC; // float32
                pub const m_flInputMax: usize = 0x10; // float32
                pub const m_flNoPixelVisibilityFallback: usize = 0x14; // float32
                pub const m_flDistanceInputMin: usize = 0x18; // float32
                pub const m_flDistanceInputMax: usize = 0x1C; // float32
                pub const m_flDotInputMin: usize = 0x20; // float32
                pub const m_flDotInputMax: usize = 0x24; // float32
                pub const m_bDotCPAngles: usize = 0x28; // bool
                pub const m_bDotCameraAngles: usize = 0x29; // bool
                pub const m_flAlphaScaleMin: usize = 0x2C; // float32
                pub const m_flAlphaScaleMax: usize = 0x30; // float32
                pub const m_flRadiusScaleMin: usize = 0x34; // float32
                pub const m_flRadiusScaleMax: usize = 0x38; // float32
                pub const m_flRadiusScaleFOVBase: usize = 0x3C; // float32
                pub const m_bRightEye: usize = 0x40; // bool
            }
        }
    }
}
