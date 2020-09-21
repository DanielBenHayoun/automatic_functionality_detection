
ulong lower_subexp(undefined4 *param_1,long **param_2,long param_3)

{
  long *plVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long **pplVar6;
  long *plVar7;
  undefined8 uVar8;
  long **pplVar9;
  long **pplVar10;
  long **pplVar11;
  long in_FS_OFFSET;
  uint uStack156;
  long lStack152;
  long **pplStack136;
  undefined *puStack128;
  long **pplStack112;
  long lStack104;
  undefined4 *puStack96;
  undefined auStack88 [8];
  undefined uStack80;
  ulong uStack64;
  
  pplStack136 = (long **)*param_2;
  lVar5 = *(long *)(param_3 + 8);
  uStack64 = *(ulong *)(in_FS_OFFSET + 0x28);
  puStack96 = param_1;
  if ((*(byte *)(param_2 + 7) & 0x10) == 0) {
    pplVar9 = pplStack136 + 0xe;
    uStack80 = 8;
    puStack128 = &UNK_00108474;
    pplStack112 = pplVar9;
    lVar3 = create_token_tree_isra_16(pplVar9,pplStack136 + 0x10,0,0,auStack88);
    uStack80 = 9;
    puStack128 = &UNK_0010848e;
    lStack104 = create_token_tree_isra_16(pplVar9,pplStack136 + 0x10,0,0,auStack88);
    lVar4 = lStack104;
    if (lVar5 != 0) goto code_r0x0010849d;
  }
  else {
    if (lVar5 == 0) {
      pplVar9 = pplStack136 + 0xe;
      uStack80 = 8;
      puStack128 = &UNK_0010837c;
      pplStack112 = pplVar9;
      lVar3 = create_token_tree_isra_16(pplVar9,pplStack136 + 0x10,0,0,auStack88);
      uStack80 = 9;
      puStack128 = &UNK_00108396;
      lStack104 = create_token_tree_isra_16(pplVar9,pplStack136 + 0x10,0,0,auStack88);
      lVar4 = lStack104;
    }
    else {
      if ((0x3f < (long)*(ulong *)(param_3 + 0x28)) ||
         (((ulong)pplStack136[0x14] >> (*(ulong *)(param_3 + 0x28) & 0x1f) & 1) == 0))
      goto code_r0x0010841d;
      pplVar9 = pplStack136 + 0xe;
      uStack80 = 8;
      puStack128 = &UNK_00108327;
      pplStack112 = pplVar9;
      lVar3 = create_token_tree_isra_16(pplVar9,pplStack136 + 0x10,0,0,auStack88);
      uStack80 = 9;
      puStack128 = &UNK_00108341;
      lVar4 = create_token_tree_isra_16(pplVar9,pplStack136 + 0x10,0,0,auStack88);
code_r0x0010849d:
      uStack80 = 0x10;
      puStack128 = &UNK_001084b8;
      lStack104 = create_token_tree_isra_16(pplStack112,pplStack136 + 0x10,lVar5,lVar4,auStack88);
    }
  }
  pplStack136 = pplStack136 + 0x10;
  uStack80 = 0x10;
  puStack128 = &UNK_001083bc;
  param_2 = pplStack136;
  lVar5 = create_token_tree_isra_16(pplStack112,pplStack136,lVar3,lStack104,auStack88);
  if ((((lVar5 == 0) || (lStack104 == 0)) || (lVar3 == 0)) || (lVar4 == 0)) {
    lVar5 = 0;
    *puStack96 = 0xc;
  }
  else {
    uVar8 = *(undefined8 *)(param_3 + 0x28);
    *(undefined8 *)(lVar4 + 0x28) = uVar8;
    *(undefined8 *)(lVar3 + 0x28) = uVar8;
    bVar2 = *(byte *)(param_3 + 0x32) & 8;
    *(byte *)(lVar4 + 0x32) = *(byte *)(lVar4 + 0x32) & 0xf7 | bVar2;
    *(byte *)(lVar3 + 0x32) = *(byte *)(lVar3 + 0x32) & 0xf7 | bVar2;
  }
code_r0x0010841d:
  pplVar9 = (long **)(uStack64 ^ *(ulong *)(in_FS_OFFSET + 0x28));
  if (pplVar9 == (long **)0x0) {
    return lVar5;
  }
  puStack128 = &UNK_001084d7;
  func_0x00101990();
  lStack152 = *(long *)(in_FS_OFFSET + 0x28);
  uStack156 = 0;
  pplVar10 = param_2;
  pplVar11 = pplVar9;
  puStack128 = (undefined *)lVar5;
  if ((param_2[1] != (long *)0x0) && (*(char *)(param_2[1] + 6) == '\x11')) {
    pplVar11 = (long **)&uStack156;
    pplVar10 = pplVar9;
    pplVar6 = (long **)lower_subexp();
    *(long ***)(param_2 + 1) = pplVar6;
    if (pplVar6 != (long **)0x0) {
      *(long ***)pplVar6 = param_2;
    }
  }
  if ((param_2[2] != (long *)0x0) && (*(char *)(param_2[2] + 6) == '\x11')) {
    pplVar11 = (long **)&uStack156;
    pplVar6 = (long **)lower_subexp();
    *(long ***)(param_2 + 2) = pplVar6;
    pplVar10 = pplVar9;
    if (pplVar6 != (long **)0x0) {
      *(long ***)pplVar6 = param_2;
    }
  }
  if (lStack152 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (ulong)uStack156;
  }
  func_0x00101990();
  plVar7 = pplVar10[1];
  pplVar11[1] = plVar7;
  plVar1 = pplVar10[1];
  if (0 < (long)plVar1) {
    *pplVar11 = plVar7;
    plVar7 = (long *)func_0x00101ac0((long)plVar7 * 8);
    pplVar11[2] = plVar7;
    if (plVar7 == (long *)0x0) {
      pplVar11[1] = (long *)0x0;
      *pplVar11 = (long *)0x0;
      uVar8 = 0xc;
    }
    else {
      func_0x00101a90(plVar7,pplVar10[2],(long)plVar1 * 8);
      uVar8 = 0;
    }
    return uVar8;
  }
  pplVar11[2] = (long *)0x0;
  *(undefined4 *)pplVar11 = 0;
  *(undefined4 *)((long)pplVar11 + 4) = 0;
  *(undefined4 *)(pplVar11 + 1) = 0;
  *(undefined4 *)((long)pplVar11 + 0xc) = 0;
  return 0;
}

