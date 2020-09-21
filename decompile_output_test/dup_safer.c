
/* WARNING: Removing unreachable block (ram,0x001078d6) */
/* WARNING: Removing unreachable block (ram,0x00107861) */
/* WARNING: Removing unreachable block (ram,0x001078b0) */
/* WARNING: Removing unreachable block (ram,0x001078b5) */
/* WARNING: Removing unreachable block (ram,0x001078b7) */
/* WARNING: Removing unreachable block (ram,0x001078c0) */
/* WARNING: Removing unreachable block (ram,0x001078c6) */
/* WARNING: Removing unreachable block (ram,0x001078cf) */
/* WARNING: Removing unreachable block (ram,0x001078d1) */
/* WARNING: Removing unreachable block (ram,0x00107980) */
/* WARNING: Removing unreachable block (ram,0x00107989) */
/* WARNING: Removing unreachable block (ram,0x0010798b) */
/* WARNING: Removing unreachable block (ram,0x00107976) */
/* WARNING: Removing unreachable block (ram,0x00107910) */
/* WARNING: Removing unreachable block (ram,0x00107960) */
/* WARNING: Removing unreachable block (ram,0x00107968) */
/* WARNING: Removing unreachable block (ram,0x0010796e) */
/* WARNING: Removing unreachable block (ram,0x001078e0) */
/* WARNING: Removing unreachable block (ram,0x00107918) */
/* WARNING: Removing unreachable block (ram,0x00107920) */
/* WARNING: Removing unreachable block (ram,0x00107928) */
/* WARNING: Removing unreachable block (ram,0x00107930) */
/* WARNING: Removing unreachable block (ram,0x00107938) */
/* WARNING: Removing unreachable block (ram,0x00107a7a) */
/* WARNING: Removing unreachable block (ram,0x00107944) */
/* WARNING: Removing unreachable block (ram,0x00107949) */
/* WARNING: Removing unreachable block (ram,0x00107990) */
/* WARNING: Removing unreachable block (ram,0x00107a84) */
/* WARNING: Removing unreachable block (ram,0x0010799c) */
/* WARNING: Removing unreachable block (ram,0x001079a1) */
/* WARNING: Removing unreachable block (ram,0x00107869) */
/* WARNING: Removing unreachable block (ram,0x001079b3) */
/* WARNING: Removing unreachable block (ram,0x001079c6) */
/* WARNING: Removing unreachable block (ram,0x00107889) */
/* WARNING: Removing unreachable block (ram,0x00107a28) */
/* WARNING: Removing unreachable block (ram,0x00107a36) */
/* WARNING: Removing unreachable block (ram,0x00107a4e) */
/* WARNING: Removing unreachable block (ram,0x001079d3) */
/* WARNING: Removing unreachable block (ram,0x001079e5) */
/* WARNING: Removing unreachable block (ram,0x00107a01) */
/* WARNING: Removing unreachable block (ram,0x0010789f) */

ulong dup_safer(void)

{
  long lVar1;
  uint uVar2;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  while( true ) {
    uVar2 = func_0x00101b90();
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) break;
    func_0x00101c20();
  }
  return (ulong)uVar2;
}

