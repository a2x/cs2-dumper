// Generated using https://github.com/a2x/cs2-dumper
// 2026-01-22 12:23:57.753951800 UTC

#![allow(non_upper_case_globals, non_camel_case_types, non_snake_case, unused)]

pub mod cs2_dumper {
    pub mod schemas {
        // Module: engine2.dll
        // Class count: 4
        // Enum count: 2
        pub mod engine2_dll {
            // Alignment: 4
            // Member count: 3
            #[repr(u32)]
            pub enum EntityDormancyType_t {
                ENTITY_NOT_DORMANT = 0x0,
                ENTITY_DORMANT = 0x1,
                ENTITY_SUSPENDED = 0x2
            }
            // Alignment: 4
            // Member count: 4
            #[repr(u32)]
            pub enum EntityIOTargetType_t {
                ENTITY_IO_TARGET_INVALID = u32::MAX,
                ENTITY_IO_TARGET_ENTITYNAME = 0x2,
                ENTITY_IO_TARGET_EHANDLE = 0x6,
                ENTITY_IO_TARGET_ENTITYNAME_OR_CLASSNAME = 0x7
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // NetworkVarNames: m_pEntity (CEntityIdentity*)
            // NetworkVarNames: m_CScriptComponent (CScriptComponent::Storage_t)
            pub mod CEntityInstance {
                pub const m_iszPrivateVScripts: usize = 0x8; // CUtlSymbolLarge
                pub const m_pEntity: usize = 0x10; // CEntityIdentity*
                pub const m_CScriptComponent: usize = 0x30; // CScriptComponent*
            }
            // Parent: 
            // Field count: 0
            pub mod CEntityComponent {
            }
            // Parent: CEntityComponent
            // Field count: 1
            pub mod CScriptComponent {
                pub const m_scriptClassName: usize = 0x30; // CUtlSymbolLarge
            }
            // Parent: 
            // Field count: 12
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
                pub const m_pAttributes: usize = 0x48; // CEntityAttributeTable*
                pub const m_pPrev: usize = 0x50; // CEntityIdentity*
                pub const m_pNext: usize = 0x58; // CEntityIdentity*
                pub const m_pPrevByClass: usize = 0x60; // CEntityIdentity*
                pub const m_pNextByClass: usize = 0x68; // CEntityIdentity*
            }
        }
    }
}
