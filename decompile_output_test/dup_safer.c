
/* WARNING: Removing unreachable block (ram,0x00104fa6) */
/* WARNING: Removing unreachable block (ram,0x00104f31) */
/* WARNING: Removing unreachable block (ram,0x00104f80) */
/* WARNING: Removing unreachable block (ram,0x00104f85) */
/* WARNING: Removing unreachable block (ram,0x00104f87) */
/* WARNING: Removing unreachable block (ram,0x00104f90) */
/* WARNING: Removing unreachable block (ram,0x00104f96) */
/* WARNING: Removing unreachable block (ram,0x00104f9f) */
/* WARNING: Removing unreachable block (ram,0x00104fa1) */
/* WARNING: Removing unreachable block (ram,0x00105050) */
/* WARNING: Removing unreachable block (ram,0x00105059) */
/* WARNING: Removing unreachable block (ram,0x0010505b) */
/* WARNING: Removing unreachable block (ram,0x00105046) */
/* WARNING: Removing unreachable block (ram,0x00104fe0) */
/* WARNING: Removing unreachable block (ram,0x00105030) */
/* WARNING: Removing unreachable block (ram,0x00105038) */
/* WARNING: Removing unreachable block (ram,0x0010503e) */
/* WARNING: Removing unreachable block (ram,0x00104fb0) */
/* WARNING: Removing unreachable block (ram,0x00104fe8) */
/* WARNING: Removing unreachable block (ram,0x00104ff0) */
/* WARNING: Removing unreachable block (ram,0x00104ff8) */
/* WARNING: Removing unreachable block (ram,0x00105000) */
/* WARNING: Removing unreachable block (ram,0x00105008) */
/* WARNING: Removing unreachable block (ram,0x0010514a) */
/* WARNING: Removing unreachable block (ram,0x00105014) */
/* WARNING: Removing unreachable block (ram,0x00105019) */
/* WARNING: Removing unreachable block (ram,0x00105060) */
/* WARNING: Removing unreachable block (ram,0x00105154) */
/* WARNING: Removing unreachable block (ram,0x0010506c) */
/* WARNING: Removing unreachable block (ram,0x00105071) */
/* WARNING: Removing unreachable block (ram,0x00104f39) */
/* WARNING: Removing unreachable block (ram,0x00105083) */
/* WARNING: Removing unreachable block (ram,0x00105096) */
/* WARNING: Removing unreachable block (ram,0x00104f59) */
/* WARNING: Removing unreachable block (ram,0x001050f8) */
/* WARNING: Removing unreachable block (ram,0x00105106) */
/* WARNING: Removing unreachable block (ram,0x0010511e) */
/* WARNING: Removing unreachable block (ram,0x001050a3) */
/* WARNING: Removing unreachable block (ram,0x001050b5) */
/* WARNING: Removing unreachable block (ram,0x001050d1) */
/* WARNING: Removing unreachable block (ram,0x00104f6f) */

ulong dup_safer(void)

{
  long lVar1;
  uint uVar2;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  while( true ) {
    uVar2 = func_0x00101590();
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) break;
    func_0x00101610();
  }
  return (ulong)uVar2;
}

