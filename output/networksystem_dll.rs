// Generated using https://github.com/a2x/cs2-dumper
// 2025-10-14 23:58:25.486779500 UTC

#![allow(non_upper_case_globals, non_camel_case_types, non_snake_case, unused)]

pub mod cs2_dumper {
    pub mod schemas {
        // Module: networksystem.dll
        // Class count: 1
        // Enum count: 1
        pub mod networksystem_dll {
            // Alignment: 4
            // Member count: 4
            #[repr(u32)]
            pub enum OutOfPVSUpdates_t {
                OOPVSUpdates_OptOut = 0x0,
                OOPVSUpdates_OptIn = 0x1,
                OOPVSUpdates_Default = 0x2,
                OOPVSUpdates_Count = 0x3
            }
            // Parent: None
            // Field count: 1
            pub mod ChangeAccessorFieldPathIndex_t {
                pub const m_Value: usize = 0x0; // int32
            }
        }
    }
}
