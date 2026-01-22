// Generated using https://github.com/a2x/cs2-dumper
// 2026-01-22 12:23:57.753951800 UTC

#![allow(non_upper_case_globals, non_camel_case_types, non_snake_case, unused)]

pub mod cs2_dumper {
    pub mod schemas {
        // Module: resourcesystem.dll
        // Class count: 0
        // Enum count: 2
        pub mod resourcesystem_dll {
            // Alignment: 1
            // Member count: 9
            #[repr(u8)]
            pub enum FuseVariableType_t {
                INVALID = 0x0,
                BOOL = 0x1,
                INT8 = 0x2,
                INT16 = 0x3,
                INT32 = 0x4,
                UINT8 = 0x5,
                UINT16 = 0x6,
                UINT32 = 0x7,
                FLOAT32 = 0x8
            }
            // Alignment: 1
            // Member count: 2
            #[repr(u8)]
            pub enum FuseVariableAccess_t {
                WRITABLE = 0x0,
                READ_ONLY = 0x1
            }
        }
    }
}
