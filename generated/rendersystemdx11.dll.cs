public static class RenderInputLayoutField_t {
    public const nint m_pSemanticName = 0x0;
    public const nint m_nSemanticIndex = 0x20;
    public const nint m_Format = 0x24;
    public const nint m_nOffset = 0x28;
    public const nint m_nSlot = 0x2C;
    public const nint m_nSlotType = 0x30;
    public const nint m_nInstanceStepRate = 0x34;
}

public static class VsInputSignatureElement_t {
    public const nint m_pName = 0x0;
    public const nint m_pSemantic = 0x40;
    public const nint m_pD3DSemanticName = 0x80;
    public const nint m_nD3DSemanticIndex = 0xC0;
}

public static class VsInputSignature_t {
    public const nint m_elems = 0x0;
}