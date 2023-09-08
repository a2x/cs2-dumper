#[allow(non_snake_case, non_upper_case_globals)]
pub mod RenderInputLayoutField_t {
    pub const m_pSemanticName: usize = 0x0;
    pub const m_nSemanticIndex: usize = 0x20;
    pub const m_Format: usize = 0x24;
    pub const m_nOffset: usize = 0x28;
    pub const m_nSlot: usize = 0x2c;
    pub const m_nSlotType: usize = 0x30;
    pub const m_nInstanceStepRate: usize = 0x34;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod VsInputSignatureElement_t {
    pub const m_pName: usize = 0x0;
    pub const m_pSemantic: usize = 0x40;
    pub const m_pD3DSemanticName: usize = 0x80;
    pub const m_nD3DSemanticIndex: usize = 0xc0;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod VsInputSignature_t {
    pub const m_elems: usize = 0x0;
}