
ulong expand_bkref_cache(long param_1,long param_2,long *param_3,long **param_4,uint param_5)

{
  long *plVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  ulong *puVar7;
  long **pplVar8;
  long **pplVar9;
  long **pplVar10;
  long **pplVar11;
  long *extraout_RDX;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long **pplVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long in_FS_OFFSET;
  uint uStack92;
  long lStack88;
  undefined8 uStack80;
  long **pplStack72;
  long lStack64;
  
  plVar13 = (long *)0x0;
  pplVar15 = *(long ***)(param_1 + 200);
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  pplVar8 = param_4;
  pplVar11 = pplVar15;
  while (pplVar10 = pplVar8, (long)plVar13 < (long)pplVar11) {
    pplVar9 = (long **)(((long)plVar13 + (long)pplVar11) / 2);
    lVar12 = *(long *)(*(long *)(param_1 + 0xd8) + 8 + (long)pplVar9 * 0x28);
    pplVar8 = pplVar11;
    while (pplVar10 = pplVar9, (long)param_3 <= lVar12) {
      if ((long)pplVar10 <= (long)plVar13) goto code_r0x0010b057;
      pplVar9 = (long **)(((long)plVar13 + (long)pplVar10) / 2);
      lVar12 = *(long *)(*(long *)(param_1 + 0xd8) + 8 + (long)pplVar9 * 0x28);
      pplVar8 = pplVar10;
    }
    plVar13 = (long *)((long)pplVar10 + 1);
    pplVar11 = pplVar8;
  }
code_r0x0010b057:
  pplVar8 = (long **)plVar13;
  if ((((long)plVar13 < (long)pplVar15) &&
      (pplVar10 = *(long ***)(param_1 + 0xd8), pplVar10[(long)plVar13 * 5 + 1] == param_3)) &&
     (plVar13 != (long *)0xffffffffffffffff)) {
    plVar1 = (long *)(param_2 + 0x10);
    plVar16 = *(long **)(param_1 + 0x98);
code_r0x0010b0e3:
    pplVar11 = pplVar10 + (long)plVar13 * 5;
    do {
      plVar17 = *pplVar11;
      pplVar15 = *(long ***)(param_2 + 8);
      plVar14 = plVar1;
      pplVar8 = pplVar15;
      lVar12 = re_node_set_contains_isra_3(pplVar15,plVar1,plVar17);
      if (lVar12 != 0) {
        plVar18 = (long *)(((long)pplVar11[3] + (long)param_3) - (long)pplVar11[2]);
        if (param_3 == plVar18) {
          pplVar10 = (long **)plVar16[5];
          plVar17 = (long *)*pplVar10[(long)plVar17 * 3 + 2];
          plVar14 = plVar1;
          lVar12 = re_node_set_contains_isra_3(pplVar8,plVar1,plVar17);
          pplVar15 = pplVar8;
          if (lVar12 == 0) goto code_r0x0010b221;
        }
        else {
          pplVar8 = *(long ***)(plVar16[3] + (long)plVar17 * 8);
          plVar17 = (long *)(*(long *)(param_1 + 0xb8) + (long)plVar18 * 8);
          lVar12 = *plVar17;
          pplVar10 = pplVar8;
          if (lVar12 == 0) {
            pplVar15 = (long **)0x8;
            lStack88 = 1;
            uStack80 = 1;
            pplStack72 = (long **)func_0x00101da0();
            if (pplStack72 == (long **)0x0) {
code_r0x0010b31c:
              pplVar8 = (long **)plVar14;
              uVar6 = 0xc;
              goto code_r0x0010b07f;
            }
            uStack92 = 0;
            *(long ***)pplStack72 = pplVar8;
          }
          else {
            pplVar15 = *(long ***)(lVar12 + 0x10);
            plVar14 = (long *)(lVar12 + 0x18);
            lVar5 = re_node_set_contains_isra_3(pplVar15,plVar14,pplVar8);
            if (lVar5 != 0) goto code_r0x0010b1b9;
            uStack92 = re_node_set_init_copy(&lStack88,lVar12 + 8);
            cVar2 = re_node_set_insert(&lStack88);
            if ((uStack92 != 0) || (cVar2 != '\x01')) {
              pplVar15 = pplStack72;
              func_0x00101b00();
              uVar6 = (ulong)uStack92;
              plVar14 = (long *)pplVar8;
              if (uStack92 == 0) goto code_r0x0010b31c;
              goto code_r0x0010b07f;
            }
            plVar17 = (long *)((long)plVar18 * 8 + *(long *)(param_1 + 0xb8));
          }
          pplVar8 = (long **)plVar16;
          lVar12 = re_acquire_state(&uStack92,plVar16,&lStack88);
          *plVar17 = lVar12;
          pplVar15 = pplStack72;
          func_0x00101b00();
          plVar14 = (long *)pplVar8;
          if ((*(long *)(*(long *)(param_1 + 0xb8) + (long)plVar18 * 8) == 0) &&
             (uVar6 = (ulong)uStack92, uStack92 != 0)) goto code_r0x0010b07f;
        }
      }
code_r0x0010b1b9:
      pplVar9 = pplVar11 + 4;
      pplVar8 = (long **)plVar14;
      pplVar11 = pplVar11 + 5;
      if (*(char *)pplVar9 == '\0') break;
    } while( true );
  }
  uVar6 = 0;
code_r0x0010b07f:
  if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
  func_0x00101c20();
  plVar13 = pplVar15[0x13];
  if (0 < (long)*pplVar8) {
    lVar12 = 0;
    do {
      while( true ) {
        plVar1 = *(long **)(*extraout_RDX + lVar12 * 8);
        puVar7 = (ulong *)((long)plVar1 * 0x10 + *plVar13);
        if (((*(char *)(puVar7 + 1) == '\b') && (uVar6 = *puVar7, (long)uVar6 < 0x40)) &&
           (((ulong)plVar13[0x14] >> (uVar6 & 0x1f) & 1) != 0)) break;
        lVar12 = lVar12 + 1;
        if ((long)*pplVar8 <= lVar12) {
          return 0;
        }
      }
      plVar16 = pplVar15[0x1d];
      plVar14 = pplVar15[0x1f];
      if (plVar16 == pplVar15[0x1e]) {
        plVar17 = (long *)((long)plVar16 * 2);
        plVar14 = (long *)func_0x00101e00(plVar14,(long)plVar16 << 4);
        if (plVar14 == (long *)0x0) {
          return 0xc;
        }
        pplVar15[0x1f] = plVar14;
        plVar16 = pplVar15[0x1d];
        pplVar15[0x1e] = plVar17;
      }
      pplVar11 = (long **)func_0x00101d30(1,0x30);
      *(long ***)(plVar14 + (long)plVar16) = pplVar11;
      if (pplVar11 == (long **)0x0) {
        return 0xc;
      }
      lVar12 = lVar12 + 1;
      pplVar15[0x1d] = (long *)((long)plVar16 + 1);
      lVar5 = (long)*pplVar8;
      pplVar11[1] = plVar1;
      *(long ***)pplVar11 = pplVar10;
    } while (lVar12 < lVar5);
  }
  return 0;
code_r0x0010b221:
  lStack88 = 1;
  uStack80 = 1;
  pplStack72 = (long **)func_0x00101da0(8);
  if (pplStack72 == (long **)0x0) {
    uStack80 = 0;
    lStack88 = 0;
    uStack92 = 0xc;
  }
  else {
    *pplStack72 = plVar17;
    uStack92 = 0;
  }
  pplVar10 = (long **)(ulong)param_5;
  uVar3 = check_arrival_expand_ecl(plVar16,&lStack88,param_4);
  pplVar8 = (long **)&lStack88;
  uVar4 = re_node_set_merge(param_2);
  pplVar15 = pplStack72;
  func_0x00101b00();
  uVar6 = (ulong)uStack92;
  if ((uVar3 | uVar4 | uStack92) != 0) goto code_r0x0010b326;
  pplVar10 = *(long ***)(param_1 + 0xd8);
  goto code_r0x0010b0e3;
code_r0x0010b326:
  if (uStack92 == 0) {
    if (uVar3 == 0) {
      uVar3 = uVar4;
    }
    uVar6 = (ulong)uVar3;
  }
  goto code_r0x0010b07f;
}

