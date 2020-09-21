
ulong xalloc_die(void)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined4 *puVar6;
  int *piVar7;
  long extraout_RDX;
  uint *puVar8;
  byte *pbVar9;
  uint *puVar10;
  long in_FS_OFFSET;
  uint uStack60;
  long lStack56;
  
  uVar3 = func_0x00101280(0,&UNK_001053cf,5);
  puVar8 = (uint *)(ulong)exit_failure;
  pbVar9 = (byte *)0x0;
  func_0x001013d0(puVar8,0,&UNK_00104b40,uVar3);
  func_0x001011f0();
  lStack56 = *(long *)(in_FS_OFFSET + 0x28);
  if (puVar8 == (uint *)0x0) {
    puVar8 = &uStack60;
  }
  puVar10 = puVar8;
  uVar4 = func_0x001012d0();
  if ((0xfffffffffffffffd < uVar4) && (extraout_RDX != 0)) {
    puVar10 = (uint *)0x0;
    cVar2 = hard_locale();
    if (cVar2 == '\0') {
      uVar4 = 1;
      *puVar8 = (uint)*pbVar9;
    }
  }
  if (lStack56 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
  func_0x001012b0();
  lVar5 = func_0x00101230();
  uVar1 = *puVar10;
  uVar3 = rpl_fclose(puVar10);
  if ((uVar1 & 0x20) != 0) {
    if ((int)uVar3 == 0) {
      puVar6 = (undefined4 *)func_0x00101200();
      *puVar6 = 0;
      return 0xffffffff;
    }
    return 0xffffffff;
  }
  if (((int)uVar3 != 0) && (uVar3 = 0xffffffff, lVar5 == 0)) {
    piVar7 = (int *)func_0x00101200();
    return (ulong)-(uint)(*piVar7 != 9);
  }
  return uVar3;
}

