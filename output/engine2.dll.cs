// Generated using https://github.com/a2x/cs2-dumper
// 2024-04-02 16:10:48.961749300 UTC

namespace CS2Dumper.Schemas {
    // Module: engine2.dll
    // Classes count: 2
    // Enums count: 4
    public static class Engine2Dll {
        // Alignment: 4
        // Members count: 3
        public enum SpawnDebugOverrideState_t : uint {
            SPAWN_DEBUG_OVERRIDE_NONE = 0x0,
            SPAWN_DEBUG_OVERRIDE_FORCE_ENABLED = 0x1,
            SPAWN_DEBUG_OVERRIDE_FORCE_DISABLED = 0x2
        }
        // Alignment: 4
        // Members count: 5
        public enum SpawnDebugRestrictionOverrideState_t : uint {
            SPAWN_DEBUG_RESTRICT_NONE = 0x0,
            SPAWN_DEBUG_RESTRICT_IGNORE_MANAGER_DISTANCE_REQS = 0x1,
            SPAWN_DEBUG_RESTRICT_IGNORE_TEMPLATE_DISTANCE_LOS_REQS = 0x2,
            SPAWN_DEBUG_RESTRICT_IGNORE_TEMPLATE_COOLDOWN_LIMITS = 0x4,
            SPAWN_DEBUG_RESTRICT_IGNORE_TARGET_COOLDOWN_LIMITS = 0x8
        }
        // Alignment: 4
        // Members count: 3
        public enum EntityDormancyType_t : uint {
            ENTITY_NOT_DORMANT = 0x0,
            ENTITY_DORMANT = 0x1,
            ENTITY_SUSPENDED = 0x2
        }
        // Alignment: 4
        // Members count: 4
        public enum EntityIOTargetType_t : uint {
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
        public static class CEntityIdentity {
            public const nint m_nameStringableIndex = 0x14; // int32
            public const nint m_name = 0x18; // CUtlSymbolLarge
            public const nint m_designerName = 0x20; // CUtlSymbolLarge
            public const nint m_flags = 0x30; // uint32
            public const nint m_worldGroupId = 0x38; // WorldGroupId_t
            public const nint m_fDataObjectTypes = 0x3C; // uint32
            public const nint m_PathIndex = 0x40; // ChangeAccessorFieldPathIndex_t
            public const nint m_pPrev = 0x58; // CEntityIdentity*
            public const nint m_pNext = 0x60; // CEntityIdentity*
            public const nint m_pPrevByClass = 0x68; // CEntityIdentity*
            public const nint m_pNextByClass = 0x70; // CEntityIdentity*
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // NetworkVarNames: m_pEntity (CEntityIdentity*)
        // NetworkVarNames: m_CScriptComponent (CScriptComponent::Storage_t)
        public static class CEntityInstance {
            public const nint m_iszPrivateVScripts = 0x8; // CUtlSymbolLarge
            public const nint m_pEntity = 0x10; // CEntityIdentity*
            public const nint m_CScriptComponent = 0x28; // CScriptComponent*
            public const nint m_bVisibleinPVS = 0x30; // bool
        }
    }
}
