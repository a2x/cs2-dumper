use memflow::prelude::*;

#[inline]
pub fn follow_call(mem: &mut impl MemoryView, base: Address) -> Result<Address> {
    rel32_target(mem, base, 0x1)
}

#[inline]
pub fn follow_jmp(mem: &mut impl MemoryView, base: Address) -> Result<Address> {
    rel32_target(mem, base, 0x1)
}

#[inline]
pub fn resolve_rip(mem: &mut impl MemoryView, base: Address) -> Result<Address> {
    rel32_target(mem, base, 0x3)
}

fn rel32_target(mem: &mut impl MemoryView, base: Address, offset: usize) -> Result<Address> {
    let rel32: i32 = mem.read(base + offset).data_part()?; // RIP-relative displacement.
    let instr_end = (base + offset + size_of::<i32>()).to_umem() as i64;
    let target_addr = instr_end.wrapping_add(rel32 as i64);

    Ok(target_addr.into())
}
