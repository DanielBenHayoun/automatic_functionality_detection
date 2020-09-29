
ulong base_name(uint *param_1)

{
  uint uVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  int *piVar7;
  long extraout_RDX;
  byte *pbVar8;
  uint *puVar9;
  long in_FS_OFFSET;
  uint uStack60;
  long lStack56;
  undefined *puStack32;
  
  puStack32 = &UNK_00101d7e;
  puVar9 = (uint *)last_component();
  if (*(char *)puVar9 == '\0') {
    puStack32 = &UNK_00101db8;
    pbVar8 = (byte *)base_len(param_1);
  }
  else {
    puStack32 = &UNK_00101d8e;
    lVar3 = base_len(puVar9);
    pbVar8 = (byte *)(lVar3 + (ulong)(*(char *)((long)puVar9 + lVar3) == '/'));
    param_1 = puVar9;
  }
  lVar3 = func_0x001013a0();
  if (lVar3 != 0) {
    return lVar3;
  }
  xalloc_die();
  lStack56 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (uint *)0x0) {
    param_1 = &uStack60;
  }
  puVar9 = param_1;
  uVar4 = func_0x00101350();
  if ((0xfffffffffffffffd < uVar4) && (extraout_RDX != 0)) {
    puVar9 = (uint *)0x0;
    cVar2 = hard_locale();
    if (cVar2 == '\0') {
      uVar4 = 1;
      *param_1 = (uint)*pbVar8;
    }
  }
  if (lStack56 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
  func_0x00101330();
  lVar3 = func_0x001012c0();
  uVar1 = *puVar9;
  uVar5 = rpl_fclose(puVar9);
  if ((uVar1 & 0x20) != 0) {
    if ((int)uVar5 == 0) {
      puVar6 = (undefined4 *)func_0x00101290();
      *puVar6 = 0;
      return 0xffffffff;
    }
    return 0xffffffff;
  }
  if (((int)uVar5 != 0) && (uVar5 = 0xffffffff, lVar3 == 0)) {
    piVar7 = (int *)func_0x00101290();
    return (ulong)-(uint)(*piVar7 != 9);
  }
  return uVar5;
}

