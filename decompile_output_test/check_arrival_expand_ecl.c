
ulong check_arrival_expand_ecl(long *param_1,long *param_2,long param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long extraout_RDX;
  long lVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long in_FS_OFFSET;
  bool bVar15;
  long lStack88;
  undefined8 uStack80;
  long *plStack72;
  long lStack64;
  
  lVar14 = param_2[1];
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  uStack80 = 0;
  plVar11 = (long *)(lVar14 * 8);
  plVar9 = param_2;
  lStack88 = lVar14;
  plStack72 = (long *)func_0x00101ac0();
  if (plStack72 == (long *)0x0) {
    uVar4 = 0xc;
  }
  else {
    if (0 < lVar14) {
      lVar14 = 0;
      do {
        lVar13 = *(long *)(param_2[2] + lVar14 * 8);
        plVar9 = (long *)(param_1[6] + lVar13 * 0x18);
        if (0 < plVar9[1]) {
          lVar6 = 0;
          do {
            lVar5 = *(long *)(plVar9[2] + lVar6 * 8);
            plVar11 = (long *)(lVar5 * 0x10 + *param_1);
            if (((uint)(param_4 & 0xffffffff) == (uint)*(byte *)(plVar11 + 1)) &&
               (param_3 == *plVar11)) {
              if (lVar5 != -1) {
                plVar9 = &lStack88;
                uVar3 = check_arrival_expand_ecl_sub
                                  (param_1,&lStack88,lVar13,param_3,param_4 & 0xffffffff);
                plVar11 = plStack72;
                goto joined_r0x00107eaf;
              }
              break;
            }
            lVar6 = lVar6 + 1;
          } while (plVar9[1] != lVar6);
        }
        uVar3 = re_node_set_merge(&lStack88);
        plVar11 = plStack72;
joined_r0x00107eaf:
        plStack72 = plVar11;
        if (uVar3 != 0) {
          func_0x00101880();
          uVar4 = (ulong)uVar3;
          goto code_r0x00107efe;
        }
        lVar14 = lVar14 + 1;
      } while (param_2[1] != lVar14 && lVar14 <= param_2[1]);
    }
    plVar11 = (long *)param_2[2];
    func_0x00101880();
    *(long **)(param_2 + 2) = plStack72;
    uVar4 = 0;
    *(int *)param_2 = (int)lStack88;
    *(undefined4 *)((long)param_2 + 4) = (int)((ulong)lStack88 >> 0x20);
    *(int *)(param_2 + 1) = (int)uStack80;
    *(undefined4 *)((long)param_2 + 0xc) = (int)((ulong)uStack80 >> 0x20);
  }
code_r0x00107efe:
  if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
  func_0x00101990();
  lVar14 = plVar9[1];
  if ((lVar14 == 0) || (lVar13 = *(long *)(extraout_RDX + 8), lVar13 == 0)) {
    return 0;
  }
  lVar6 = plVar11[1];
  lVar5 = plVar11[2];
  if (*plVar11 < lVar14 + lVar13 + lVar6) {
    lVar14 = *plVar11 + lVar14 + lVar13;
    lVar5 = func_0x00101b30(lVar5,lVar14 * 8);
    if (lVar5 == 0) {
      return 0xc;
    }
    plVar11[2] = lVar5;
    *plVar11 = lVar14;
    lVar6 = plVar11[1];
    lVar14 = plVar9[1];
    lVar13 = *(long *)(extraout_RDX + 8);
  }
  lVar8 = plVar9[2];
  lVar1 = *(long *)(extraout_RDX + 0x10);
  lVar12 = lVar14 + -1;
  lVar7 = lVar6 + -1;
  lVar10 = lVar6 + lVar14 + lVar13;
  lVar13 = lVar13 + -1;
  lVar6 = *(long *)(lVar8 + lVar12 * 8);
  lVar14 = *(long *)(lVar1 + lVar13 * 8);
  do {
    bVar15 = SBORROW8(lVar6,lVar14);
    lVar2 = lVar6 - lVar14;
    if (lVar6 == lVar14) goto code_r0x00107fb6;
    while (bVar15 != lVar2 < 0) {
      lVar13 = lVar13 + -1;
      if (lVar13 < 0) goto code_r0x00108010;
      while( true ) {
        lVar14 = *(long *)(lVar1 + lVar13 * 8);
        bVar15 = SBORROW8(lVar6,lVar14);
        lVar2 = lVar6 - lVar14;
        if (lVar2 != 0) break;
code_r0x00107fb6:
        if (-1 < lVar7) {
          do {
            lVar6 = *(long *)(lVar5 + lVar7 * 8);
            if (lVar6 <= lVar14) {
              if (lVar6 == lVar14) goto code_r0x00107fe0;
              break;
            }
            lVar7 = lVar7 + -1;
          } while (lVar7 != -1);
        }
        lVar10 = lVar10 + -1;
        *(long *)(lVar5 + lVar10 * 8) = lVar14;
code_r0x00107fe0:
        lVar12 = lVar12 + -1;
        if ((lVar12 < 0) || (lVar13 = lVar13 + -1, lVar13 < 0)) goto code_r0x00108010;
        lVar6 = *(long *)(lVar8 + lVar12 * 8);
      }
    }
    lVar12 = lVar12 + -1;
    if (lVar12 < 0) break;
    lVar6 = *(long *)(lVar8 + lVar12 * 8);
  } while( true );
code_r0x00108010:
  lVar6 = plVar11[1];
  lVar8 = plVar9[1] + lVar6 + *(long *)(extraout_RDX + 8);
  lVar14 = lVar6 + -1;
  lVar13 = lVar8 + -1;
  lVar8 = lVar8 - lVar10;
  plVar11[1] = lVar6 + lVar8;
  if ((0 < lVar8) && (-1 < lVar14)) {
    do {
      while( true ) {
        lVar6 = *(long *)(lVar5 + lVar13 * 8);
        lVar1 = *(long *)(lVar5 + lVar14 * 8);
        plVar9 = (long *)(lVar5 + (lVar14 + lVar8) * 8);
        if (lVar6 <= lVar1) break;
        lVar13 = lVar13 + -1;
        lVar8 = lVar8 + -1;
        *plVar9 = lVar6;
        if (lVar8 == 0) {
          lVar8 = 0;
          goto code_r0x00108081;
        }
      }
      lVar14 = lVar14 + -1;
      *plVar9 = lVar1;
    } while (lVar14 != -1);
  }
  lVar8 = lVar8 << 3;
code_r0x00108081:
  func_0x00101a90(lVar5,lVar5 + lVar10 * 8,lVar8);
  return 0;
}

