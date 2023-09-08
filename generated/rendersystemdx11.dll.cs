public static class RenderInputLayoutField_t {
    public const ulong m_pSemanticName = 0x0;
    public const ulong m_nSemanticIndex = 0x20;
    public const ulong m_Format = 0x24;
    public const ulong m_nOffset = 0x28;
    public const ulong m_nSlot = 0x2c;
    public const ulong m_nSlotType = 0x30;
    public const ulong m_nInstanceStepRate = 0x34;
}

public static class VsInputSignatureElement_t {
    public const ulong m_pName = 0x0;
    public const ulong m_pSemantic = 0x40;
    public const ulong m_pD3DSemanticName = 0x80;
    public const ulong m_nD3DSemanticIndex = 0xc0;
}

public static class VsInputSignature_t {
    public const ulong m_elems = 0x0;
}