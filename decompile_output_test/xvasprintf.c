
uint * xvasprintf(byte *param_1,byte *param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  ulong uVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined8 uVar8;
  long extraout_RDX;
  undefined8 extraout_RDX_00;
  uint **ppuVar9;
  byte *pbVar10;
  uint **ppuVar11;
  uint *puVar12;
  uint *puVar13;
  long in_FS_OFFSET;
  ulong uStack104;
  long lStack96;
  uint **ppuStack88;
  undefined auStack76 [4];
  long lStack72;
  uint *puStack24;
  long lStack16;
  
  ppuVar9 = &puStack24;
  lStack16 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_1 == 0) {
    ppuVar11 = (uint **)0x0;
code_r0x001058da:
    puStack24 = (uint *)xstrcat();
    param_1 = param_2;
    ppuVar9 = ppuVar11;
  }
  else {
    if ((*param_1 == 0x25) && (param_1[1] == 0x73)) {
      ppuVar11 = (uint **)0x0;
      do {
        ppuVar11 = (uint **)((long)ppuVar11 + 1);
        if (param_1[(long)ppuVar11 * 2] == 0) goto code_r0x001058da;
      } while ((param_1[(long)ppuVar11 * 2] == 0x25) && (param_1[(long)ppuVar11 * 2 + 1] == 0x73));
    }
    iVar3 = rpl_vasprintf(&puStack24,param_1,param_2);
    if (iVar3 < 0) {
      piVar4 = (int *)func_0x00101330();
      if (*piVar4 == 0xc) goto code_r0x0010592f;
      puStack24 = (uint *)0x0;
    }
  }
  if (lStack16 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puStack24;
  }
  func_0x00101400();
code_r0x0010592f:
  xalloc_die();
  lStack72 = *(long *)(in_FS_OFFSET + 0x28);
  if (ppuVar9 == (uint **)0x0) {
    ppuVar9 = (uint **)auStack76;
  }
  ppuStack88 = (uint **)&UNK_00105977;
  pbVar10 = param_1;
  ppuVar11 = ppuVar9;
  uVar5 = func_0x00101410();
  if ((0xfffffffffffffffd < uVar5) && (extraout_RDX != 0)) {
    ppuVar11 = (uint **)0x0;
    ppuStack88 = (uint **)&UNK_0010598c;
    cVar2 = hard_locale();
    if (cVar2 == '\0') {
      uVar5 = 1;
      *(uint *)ppuVar9 = (uint)*param_1;
    }
  }
  if (lStack72 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (uint *)uVar5;
  }
  ppuStack88 = (uint **)&UNK_001059c3;
  func_0x00101400();
  puVar12 = (uint *)0x0;
  lStack96 = *(long *)(in_FS_OFFSET + 0x28);
  ppuStack88 = ppuVar9;
  puVar13 = (uint *)vasnprintf(0,&uStack104,pbVar10,extraout_RDX_00);
  if (puVar13 == (uint *)0x0) {
    uStack104 = 0xffffffff;
  }
  else {
    if (uStack104 < 0x80000000) {
      *ppuVar11 = puVar13;
      uStack104 = uStack104 & 0xffffffff;
    }
    else {
      func_0x00101310();
      puVar6 = (undefined4 *)func_0x00101330();
      *puVar6 = 0x4b;
      uStack104 = 0xffffffff;
      puVar12 = puVar13;
    }
  }
  if (lStack96 != *(long *)(in_FS_OFFSET + 0x28)) {
    func_0x00101400();
    lVar7 = func_0x00101370();
    uVar1 = *puVar12;
    uVar8 = rpl_fclose(puVar12);
    if ((uVar1 & 0x20) != 0) {
      if ((int)uVar8 != 0) {
        return (uint *)0xffffffff;
      }
      puVar6 = (undefined4 *)func_0x00101330();
      *puVar6 = 0;
      return (uint *)0xffffffff;
    }
    if (((int)uVar8 != 0) && (uVar8 = 0xffffffff, lVar7 == 0)) {
      piVar4 = (int *)func_0x00101330();
      return (uint *)(ulong)-(uint)(*piVar4 != 9);
    }
    return (uint *)uVar8;
  }
  return (uint *)uStack104;
}

