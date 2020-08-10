
ulong merge_state_array(undefined *param_1,undefined *param_2,long param_3,long param_4,
                       undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  ulong *puVar8;
  long **pplVar9;
  long **pplVar10;
  long **pplVar11;
  long **pplVar12;
  long *extraout_RDX;
  long **pplVar13;
  long *extraout_RDX_00;
  undefined *unaff_RBX;
  long lVar14;
  long unaff_RBP;
  undefined *puVar15;
  long *plVar16;
  long *plVar17;
  undefined *puVar18;
  long **pplVar19;
  uint uVar20;
  long *plVar21;
  long *plVar22;
  long unaff_R12;
  undefined *unaff_R13;
  undefined *unaff_R14;
  long *plVar23;
  long unaff_R15;
  long in_FS_OFFSET;
  uint uStack212;
  long lStack208;
  undefined8 uStack200;
  long **pplStack192;
  long lStack184;
  undefined *puStack168;
  long lStack160;
  long lStack152;
  undefined *puStack144;
  undefined *puStack136;
  undefined *puStack128;
  uint *puStack112;
  uint uStack92;
  undefined auStack88 [16];
  undefined *puStack72;
  ulong uStack64;
  
  uVar20 = (uint)param_5;
  uStack64 = *(ulong *)(in_FS_OFFSET + 0x28);
  puVar15 = param_2;
  puVar18 = param_1;
  if (0 < param_4) {
    puStack112 = &uStack92;
    unaff_R15 = 0;
    unaff_R13 = auStack88;
    do {
      while( true ) {
        uVar20 = (uint)param_5;
        puVar15 = *(undefined **)(param_2 + unaff_R15 * 8);
        lVar14 = *(long *)(param_3 + unaff_R15 * 8);
        unaff_RBX = param_2;
        unaff_RBP = param_4;
        unaff_R12 = param_3;
        unaff_R14 = param_1;
        if (puVar15 != (undefined *)0x0) break;
        *(long *)(param_2 + unaff_R15 * 8) = lVar14;
        unaff_R15 = unaff_R15 + 1;
        if (param_4 == unaff_R15) goto code_r0x00108ce6;
      }
      if (lVar14 != 0) {
        puVar15 = puVar15 + 8;
        puStack128 = &UNK_00108c95;
        puVar18 = unaff_R13;
        uVar7 = re_node_set_init_union(unaff_R13,puVar15,lVar14 + 8);
        uVar20 = (uint)param_5;
        uStack92 = (uint)uVar7;
        if (uStack92 != 0) goto code_r0x00108ce8;
        puStack128 = &UNK_00108cad;
        puVar15 = param_1;
        uVar5 = re_acquire_state(puStack112,param_1,unaff_R13);
        *(undefined8 *)(param_2 + unaff_R15 * 8) = uVar5;
        puStack128 = &UNK_00108cbb;
        puVar18 = puStack72;
        func_0x00101880();
        uVar20 = (uint)param_5;
        uVar7 = (ulong)uStack92;
        if (uStack92 != 0) goto code_r0x00108ce8;
      }
      uVar20 = (uint)param_5;
      unaff_R15 = unaff_R15 + 1;
    } while (param_4 != unaff_R15);
  }
code_r0x00108ce6:
  uVar7 = 0;
  param_2 = unaff_RBX;
  param_4 = unaff_RBP;
  param_3 = unaff_R12;
  param_1 = unaff_R14;
code_r0x00108ce8:
  pplVar9 = (long **)(uStack64 ^ *(ulong *)(in_FS_OFFSET + 0x28));
  if (pplVar9 == (long **)0x0) {
    return uVar7;
  }
  puStack128 = &UNK_00108d0c;
  func_0x00101990();
  puStack128 = (undefined *)unaff_R15;
  puStack136 = param_1;
  puStack144 = unaff_R13;
  lStack152 = param_3;
  lStack160 = param_4;
  puStack168 = param_2;
  plVar16 = (long *)0x0;
  pplVar19 = *(long ***)(puVar18 + 200);
  lStack184 = *(long *)(in_FS_OFFSET + 0x28);
  pplVar10 = pplVar9;
  pplVar13 = pplVar19;
  while (pplVar12 = pplVar10, (long)plVar16 < (long)pplVar13) {
    pplVar11 = (long **)(((long)plVar16 + (long)pplVar13) / 2);
    lVar14 = *(long *)(*(long *)(puVar18 + 0xd8) + 8 + (long)pplVar11 * 0x28);
    pplVar10 = pplVar13;
    while (pplVar12 = pplVar11, (long)extraout_RDX <= lVar14) {
      if ((long)pplVar12 <= (long)plVar16) goto code_r0x00108da7;
      pplVar11 = (long **)(((long)plVar16 + (long)pplVar12) / 2);
      lVar14 = *(long *)(*(long *)(puVar18 + 0xd8) + 8 + (long)pplVar11 * 0x28);
      pplVar10 = pplVar12;
    }
    plVar16 = (long *)((long)pplVar12 + 1);
    pplVar13 = pplVar10;
  }
code_r0x00108da7:
  pplVar10 = (long **)plVar16;
  if ((((long)plVar16 < (long)pplVar19) &&
      (pplVar12 = *(long ***)(puVar18 + 0xd8), pplVar12[(long)plVar16 * 5 + 1] == extraout_RDX)) &&
     (plVar16 != (long *)0xffffffffffffffff)) {
    plVar1 = (long *)(puVar15 + 0x10);
    plVar21 = *(long **)(puVar18 + 0x98);
code_r0x00108e33:
    pplVar13 = pplVar12 + (long)plVar16 * 5;
    do {
      plVar22 = *pplVar13;
      pplVar19 = *(long ***)(puVar15 + 8);
      plVar17 = plVar1;
      pplVar10 = pplVar19;
      lVar14 = re_node_set_contains_isra_3(pplVar19,plVar1,plVar22);
      if (lVar14 != 0) {
        plVar23 = (long *)(((long)pplVar13[3] + (long)extraout_RDX) - (long)pplVar13[2]);
        if (extraout_RDX == plVar23) {
          pplVar12 = (long **)plVar21[5];
          plVar22 = (long *)*pplVar12[(long)plVar22 * 3 + 2];
          plVar17 = plVar1;
          lVar14 = re_node_set_contains_isra_3(pplVar10,plVar1,plVar22);
          pplVar19 = pplVar10;
          if (lVar14 == 0) goto code_r0x00108f71;
        }
        else {
          pplVar10 = *(long ***)(plVar21[3] + (long)plVar22 * 8);
          plVar22 = (long *)(*(long *)(puVar18 + 0xb8) + (long)plVar23 * 8);
          lVar14 = *plVar22;
          pplVar12 = pplVar10;
          if (lVar14 == 0) {
            pplVar19 = (long **)0x8;
            lStack208 = 1;
            uStack200 = 1;
            pplStack192 = (long **)func_0x00101ac0();
            if (pplStack192 == (long **)0x0) {
code_r0x0010906c:
              pplVar10 = (long **)plVar17;
              uVar7 = 0xc;
              goto code_r0x00108dcf;
            }
            uStack212 = 0;
            *(long ***)pplStack192 = pplVar10;
          }
          else {
            pplVar19 = *(long ***)(lVar14 + 0x10);
            plVar17 = (long *)(lVar14 + 0x18);
            lVar6 = re_node_set_contains_isra_3(pplVar19,plVar17,pplVar10);
            if (lVar6 != 0) goto code_r0x00108f09;
            uStack212 = re_node_set_init_copy(&lStack208,lVar14 + 8);
            cVar2 = re_node_set_insert(&lStack208);
            if ((uStack212 != 0) || (cVar2 != '\x01')) {
              pplVar19 = pplStack192;
              func_0x00101880();
              uVar7 = (ulong)uStack212;
              plVar17 = (long *)pplVar10;
              if (uStack212 == 0) goto code_r0x0010906c;
              goto code_r0x00108dcf;
            }
            plVar22 = (long *)((long)plVar23 * 8 + *(long *)(puVar18 + 0xb8));
          }
          pplVar10 = (long **)plVar21;
          lVar14 = re_acquire_state(&uStack212,plVar21,&lStack208);
          *plVar22 = lVar14;
          pplVar19 = pplStack192;
          func_0x00101880();
          plVar17 = (long *)pplVar10;
          if ((*(long *)(*(long *)(puVar18 + 0xb8) + (long)plVar23 * 8) == 0) &&
             (uVar7 = (ulong)uStack212, uStack212 != 0)) goto code_r0x00108dcf;
        }
      }
code_r0x00108f09:
      pplVar11 = pplVar13 + 4;
      pplVar10 = (long **)plVar17;
      pplVar13 = pplVar13 + 5;
      if (*(char *)pplVar11 == '\0') break;
    } while( true );
  }
  uVar7 = 0;
code_r0x00108dcf:
  if (lStack184 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
  func_0x00101990();
  plVar16 = pplVar19[0x13];
  if (0 < (long)*pplVar10) {
    lVar14 = 0;
    do {
      while( true ) {
        plVar1 = *(long **)(*extraout_RDX_00 + lVar14 * 8);
        puVar8 = (ulong *)((long)plVar1 * 0x10 + *plVar16);
        if (((*(char *)(puVar8 + 1) == '\b') && (uVar7 = *puVar8, (long)uVar7 < 0x40)) &&
           (((ulong)plVar16[0x14] >> (uVar7 & 0x1f) & 1) != 0)) break;
        lVar14 = lVar14 + 1;
        if ((long)*pplVar10 <= lVar14) {
          return 0;
        }
      }
      plVar21 = pplVar19[0x1d];
      plVar17 = pplVar19[0x1f];
      if (plVar21 == pplVar19[0x1e]) {
        plVar22 = (long *)((long)plVar21 * 2);
        plVar17 = (long *)func_0x00101b30(plVar17,(long)plVar21 << 4);
        if (plVar17 == (long *)0x0) {
          return 0xc;
        }
        pplVar19[0x1f] = plVar17;
        plVar21 = pplVar19[0x1d];
        pplVar19[0x1e] = plVar22;
      }
      pplVar9 = (long **)func_0x00101a70(1,0x30);
      *(long ***)(plVar17 + (long)plVar21) = pplVar9;
      if (pplVar9 == (long **)0x0) {
        return 0xc;
      }
      lVar14 = lVar14 + 1;
      pplVar19[0x1d] = (long *)((long)plVar21 + 1);
      lVar6 = (long)*pplVar10;
      pplVar9[1] = plVar1;
      *(long ***)pplVar9 = pplVar12;
    } while (lVar14 < lVar6);
  }
  return 0;
code_r0x00108f71:
  lStack208 = 1;
  uStack200 = 1;
  pplStack192 = (long **)func_0x00101ac0(8);
  if (pplStack192 == (long **)0x0) {
    uStack200 = 0;
    lStack208 = 0;
    uStack212 = 0xc;
  }
  else {
    *pplStack192 = plVar22;
    uStack212 = 0;
  }
  pplVar12 = (long **)(ulong)uVar20;
  uVar3 = check_arrival_expand_ecl(plVar21,&lStack208,pplVar9);
  pplVar10 = (long **)&lStack208;
  uVar4 = re_node_set_merge(puVar15);
  pplVar19 = pplStack192;
  func_0x00101880();
  uVar7 = (ulong)uStack212;
  if ((uVar3 | uVar4 | uStack212) != 0) goto code_r0x00109076;
  pplVar12 = *(long ***)(puVar18 + 0xd8);
  goto code_r0x00108e33;
code_r0x00109076:
  if (uStack212 == 0) {
    if (uVar3 == 0) {
      uVar3 = uVar4;
    }
    uVar7 = (ulong)uVar3;
  }
  goto code_r0x00108dcf;
}

