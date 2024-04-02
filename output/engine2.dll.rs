// Generated using https://github.com/a2x/cs2-dumper
// 2024-04-02 16:10:48.961749300 UTC

#![allow(non_upper_case_globals, non_camel_case_types, unused)]

pub mod cs2_dumper {
    pub mod schemas {
        // Module: engine2.dll
        // Classes count: 2
        // Enums count: 4
        pub mod engine2_dll {
            // Alignment: 4
            // Members count: 3
            #[repr(u32)]
            pub enum SpawnDebugOverrideState_t {
                SPAWN_DEBUG_OVERRIDE_NONE = 0x0,
                SPAWN_DEBUG_OVERRIDE_FORCE_ENABLED = 0x1,
                SPAWN_DEBUG_OVERRIDE_FORCE_DISABLED = 0x2
            }
            // Alignment: 4
            // Members count: 5
            #[repr(u32)]
            pub enum SpawnDebugRestrictionOverrideState_t {
                SPAWN_DEBUG_RESTRICT_NONE = 0x0,
                SPAWN_DEBUG_RESTRICT_IGNORE_MANAGER_DISTANCE_REQS = 0x1,
                SPAWN_DEBUG_RESTRICT_IGNORE_TEMPLATE_DISTANCE_LOS_REQS = 0x2,
                SPAWN_DEBUG_RESTRICT_IGNORE_TEMPLATE_COOLDOWN_LIMITS = 0x4,
                SPAWN_DEBUG_RESTRICT_IGNORE_TARGET_COOLDOWN_LIMITS = 0x8
            }
            // Alignment: 4
            // Members count: 3
            #[repr(u32)]
            pub enum EntityDormancyType_t {
                ENTITY_NOT_DORMANT = 0x0,
                ENTITY_DORMANT = 0x1,
                ENTITY_SUSPENDED = 0x2
            }
            // Alignment: 4
            // Members count: 4
            #[repr(u32)]
            pub enum EntityIOTargetType_t {
                ENTITY_IO_TARGET_INVALID = 0xFFFFFFFFFFFFFFFF,
                ENTITY_IO_TARGET_ENTITYNAME = 0x2,
                ENTITY_IO_TARGET_EHANDLE = 0x6,
                ENTITY_IO_TARGET_ENTITYNAME_OR_CLASSNAME = 0x7
            }
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
