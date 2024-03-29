// Generated using https://github.com/a2x/cs2-dumper
// 2024-03-29 21:16:02.890657436 UTC

#![allow(non_upper_case_globals, unused)]

pub mod cs2_dumper {
    pub mod schemas {
        // Module: libengine2.so
        // Classes count: 2
        // Enums count: 0
        pub mod libengine2 {
            // Parent: None
            // Fields count: 11
            //
            // Metadata:
            // NetworkVarNames: m_nameStringableIndex (int32)
            pub mod CEntityIdentity {
                pub const m_nameStringableIndex: usize = 0x14; // int32
                pub const m_name: usize = 0x18; // CUtlSymbolLarge
                pub const m_designerName: usize = 0x20; // CUtlSymbolLarge
                pub const m_flags: usize = 0x30; // uint32
                pub const m_worldGroupId: usize = 0x38; // WorldGroupId_t
                pub const m_fDataObjectTypes: usize = 0x3C; // uint32
                pub const m_PathIndex: usize = 0x40; // ChangeAccessorFieldPathIndex_t
                pub const m_pPrev: usize = 0x58; // CEntityIdentity*
                pub const m_pNext: usize = 0x60; // CEntityIdentity*
                pub const m_pPrevByClass: usize = 0x68; // CEntityIdentity*
                pub const m_pNextByClass: usize = 0x70; // CEntityIdentity*
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // NetworkVarNames: m_pEntity (CEntityIdentity*)
            // NetworkVarNames: m_CScriptComponent (CScriptComponent::Storage_t)
            pub mod CEntityInstance {
                pub const m_iszPrivateVScripts: usize = 0x8; // CUtlSymbolLarge
                pub const m_pEntity: usize = 0x10; // CEntityIdentity*
                pub const m_CScriptComponent: usize = 0x28; // CScriptComponent*
                pub const m_bVisibleinPVS: usize = 0x30; // bool
            }
        }
    }
}
