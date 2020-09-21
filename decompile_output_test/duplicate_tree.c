
long ** duplicate_tree(long **param_1,long param_2)

{
  long *plVar1;
  byte bVar2;
  long **pplVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long **pplVar7;
  long *plVar8;
  undefined8 uVar9;
  long **pplVar10;
  long extraout_RDX;
  long **pplVar11;
  long **pplVar12;
  long in_FS_OFFSET;
  uint uStack212;
  long lStack208;
  long **pplStack192;
  undefined *puStack184;
  long **pplStack168;
  long lStack160;
  undefined4 *puStack152;
  undefined auStack144 [8];
  undefined uStack136;
  ulong uStack120;
  long **pplStack104;
  long **pplStack96;
  long **pplStack88;
  undefined4 *puStack80;
  long ***ppplStack72;
  long **pplStack56;
  long lStack48;
  
  puStack80 = (undefined4 *)(param_2 + 0x70);
  pplStack88 = (long **)(param_2 + 0x80);
  ppplStack72 = &pplStack56;
  pplStack96 = (long **)*param_1;
  lStack48 = *(long *)(in_FS_OFFSET + 0x28);
  while( true ) {
    pplVar11 = pplStack88;
    puStack152 = puStack80;
    pplVar3 = (long **)create_token_tree_isra_16(puStack80,pplStack88,0,0,param_1 + 5);
    *ppplStack72 = pplVar3;
    pplStack104 = param_1;
    if (pplVar3 == (long **)0x0) break;
    *(long ***)pplVar3 = pplStack96;
    pplStack96 = *ppplStack72;
    *(byte *)((long)pplStack96 + 0x32) = *(byte *)((long)pplStack96 + 0x32) | 4;
    if ((long **)param_1[1] == (long **)0x0) {
      pplVar10 = (long **)0x0;
      while ((pplStack104 = param_1, param_1 = (long **)pplStack104[2], param_1 == (long **)0x0 ||
             (param_1 == pplVar10))) {
        pplStack96 = (long **)*pplStack96;
        pplVar3 = pplStack56;
        pplVar10 = pplStack104;
        param_1 = (long **)*pplStack104;
        if ((long **)*pplStack104 == (long **)0x0) goto code_r0x0010a50c;
      }
      ppplStack72 = (long ***)(pplStack96 + 2);
    }
    else {
      ppplStack72 = (long ***)(pplStack96 + 1);
      param_1 = (long **)param_1[1];
    }
  }
code_r0x0010a50c:
  if (lStack48 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pplVar3;
  }
  func_0x00101c20();
  pplStack192 = (long **)*pplVar11;
  lVar6 = *(long *)(extraout_RDX + 8);
  uStack120 = *(ulong *)(in_FS_OFFSET + 0x28);
  if ((*(byte *)(pplVar11 + 7) & 0x10) == 0) {
    pplVar3 = pplStack192 + 0xe;
    uStack136 = 8;
    puStack184 = &UNK_0010a724;
    pplStack168 = pplVar3;
    lVar4 = create_token_tree_isra_16(pplVar3,pplStack192 + 0x10,0,0,auStack144);
    uStack136 = 9;
    puStack184 = &UNK_0010a73e;
    lStack160 = create_token_tree_isra_16(pplVar3,pplStack192 + 0x10,0,0,auStack144);
    lVar5 = lStack160;
    if (lVar6 != 0) goto code_r0x0010a74d;
  }
  else {
    if (lVar6 == 0) {
      pplVar3 = pplStack192 + 0xe;
      uStack136 = 8;
      puStack184 = &UNK_0010a62c;
      pplStack168 = pplVar3;
      lVar4 = create_token_tree_isra_16(pplVar3,pplStack192 + 0x10,0,0,auStack144);
      uStack136 = 9;
      puStack184 = &UNK_0010a646;
      lStack160 = create_token_tree_isra_16(pplVar3,pplStack192 + 0x10,0,0,auStack144);
      lVar5 = lStack160;
    }
    else {
      if ((0x3f < (long)*(ulong *)(extraout_RDX + 0x28)) ||
         (((ulong)pplStack192[0x14] >> (*(ulong *)(extraout_RDX + 0x28) & 0x1f) & 1) == 0))
      goto code_r0x0010a6cd;
      pplVar3 = pplStack192 + 0xe;
      uStack136 = 8;
      puStack184 = &UNK_0010a5d7;
      pplStack168 = pplVar3;
      lVar4 = create_token_tree_isra_16(pplVar3,pplStack192 + 0x10,0,0,auStack144);
      uStack136 = 9;
      puStack184 = &UNK_0010a5f1;
      lVar5 = create_token_tree_isra_16(pplVar3,pplStack192 + 0x10,0,0,auStack144);
code_r0x0010a74d:
      uStack136 = 0x10;
      puStack184 = &UNK_0010a768;
      lStack160 = create_token_tree_isra_16(pplStack168,pplStack192 + 0x10,lVar6,lVar5,auStack144);
    }
  }
  pplStack192 = pplStack192 + 0x10;
  uStack136 = 0x10;
  puStack184 = &UNK_0010a66c;
  pplVar11 = pplStack192;
  lVar6 = create_token_tree_isra_16(pplStack168,pplStack192,lVar4,lStack160,auStack144);
  if ((((lVar6 == 0) || (lStack160 == 0)) || (lVar4 == 0)) || (lVar5 == 0)) {
    lVar6 = 0;
    *puStack152 = 0xc;
  }
  else {
    uVar9 = *(undefined8 *)(extraout_RDX + 0x28);
    *(undefined8 *)(lVar5 + 0x28) = uVar9;
    *(undefined8 *)(lVar4 + 0x28) = uVar9;
    bVar2 = *(byte *)(extraout_RDX + 0x32) & 8;
    *(byte *)(lVar5 + 0x32) = *(byte *)(lVar5 + 0x32) & 0xf7 | bVar2;
    *(byte *)(lVar4 + 0x32) = *(byte *)(lVar4 + 0x32) & 0xf7 | bVar2;
  }
code_r0x0010a6cd:
  pplVar3 = (long **)(uStack120 ^ *(ulong *)(in_FS_OFFSET + 0x28));
  if (pplVar3 == (long **)0x0) {
    return (long **)lVar6;
  }
  puStack184 = &UNK_0010a787;
  func_0x00101c20();
  lStack208 = *(long *)(in_FS_OFFSET + 0x28);
  uStack212 = 0;
  pplVar12 = pplVar11;
  pplVar10 = pplVar3;
  puStack184 = (undefined *)lVar6;
  if ((pplVar11[1] != (long *)0x0) && (*(char *)(pplVar11[1] + 6) == '\x11')) {
    pplVar10 = (long **)&uStack212;
    pplVar12 = pplVar3;
    pplVar7 = (long **)lower_subexp();
    *(long ***)(pplVar11 + 1) = pplVar7;
    if (pplVar7 != (long **)0x0) {
      *(long ***)pplVar7 = pplVar11;
    }
  }
  if ((pplVar11[2] != (long *)0x0) && (*(char *)(pplVar11[2] + 6) == '\x11')) {
    pplVar10 = (long **)&uStack212;
    pplVar7 = (long **)lower_subexp();
    *(long ***)(pplVar11 + 2) = pplVar7;
    pplVar12 = pplVar3;
    if (pplVar7 != (long **)0x0) {
      *(long ***)pplVar7 = pplVar11;
    }
  }
  if (lStack208 != *(long *)(in_FS_OFFSET + 0x28)) {
    func_0x00101c20();
    plVar8 = pplVar12[1];
    pplVar10[1] = plVar8;
    plVar1 = pplVar12[1];
    if ((long)plVar1 < 1) {
      pplVar10[2] = (long *)0x0;
      *(undefined4 *)pplVar10 = 0;
      *(undefined4 *)((long)pplVar10 + 4) = 0;
      *(undefined4 *)(pplVar10 + 1) = 0;
      *(undefined4 *)((long)pplVar10 + 0xc) = 0;
      return (long **)0;
    }
    *pplVar10 = plVar8;
    plVar8 = (long *)func_0x00101da0((long)plVar8 * 8);
    pplVar10[2] = plVar8;
    if (plVar8 == (long *)0x0) {
      pplVar10[1] = (long *)0x0;
      *pplVar10 = (long *)0x0;
      uVar9 = 0xc;
    }
    else {
      func_0x00101d70(plVar8,pplVar12[2],(long)plVar1 * 8);
      uVar9 = 0;
    }
    return (long **)uVar9;
  }
  return (long **)(ulong)uStack212;
}

