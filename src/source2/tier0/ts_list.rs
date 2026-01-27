use memflow::types::Pointer64;

#[repr(C)]
pub struct TsListNode;

#[repr(C)]
pub struct TsListHead {
    pub next: Pointer64<TsListNode>, // 0x0000
}

#[repr(C)]
pub struct TsListBase {
    pub head: TsListHead, // 0x0000
}
