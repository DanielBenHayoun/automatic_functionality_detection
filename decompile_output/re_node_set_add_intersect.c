
undefined8 re_node_set_add_intersect(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  bool bVar12;
  
  lVar5 = *(long *)(param_2 + 8);
  if ((lVar5 == 0) || (lVar11 = *(long *)(param_3 + 8), lVar11 == 0)) {
    return 0;
  }
  lVar4 = param_1[1];
  lVar6 = param_1[2];
  if (*param_1 < lVar5 + lVar11 + lVar4) {
    lVar5 = *param_1 + lVar5 + lVar11;
    lVar6 = func_0x00101b30(lVar6,lVar5 * 8);
    if (lVar6 == 0) {
      return 0xc;
    }
    param_1[2] = lVar6;
    *param_1 = lVar5;
    lVar4 = param_1[1];
    lVar5 = *(long *)(param_2 + 8);
    lVar11 = *(long *)(param_3 + 8);
  }
  lVar8 = *(long *)(param_2 + 0x10);
  lVar2 = *(long *)(param_3 + 0x10);
  lVar10 = lVar5 + -1;
  lVar7 = lVar4 + -1;
  lVar9 = lVar4 + lVar5 + lVar11;
  lVar11 = lVar11 + -1;
  lVar4 = *(long *)(lVar8 + lVar10 * 8);
  lVar5 = *(long *)(lVar2 + lVar11 * 8);
  do {
    bVar12 = SBORROW8(lVar4,lVar5);
    lVar3 = lVar4 - lVar5;
    if (lVar4 == lVar5) goto code_r0x00107fb6;
    while (bVar12 != lVar3 < 0) {
      lVar11 = lVar11 + -1;
      if (lVar11 < 0) goto code_r0x00108010;
      while( true ) {
        lVar5 = *(long *)(lVar2 + lVar11 * 8);
        bVar12 = SBORROW8(lVar4,lVar5);
        lVar3 = lVar4 - lVar5;
        if (lVar3 != 0) break;
code_r0x00107fb6:
        if (-1 < lVar7) {
          do {
            lVar4 = *(long *)(lVar6 + lVar7 * 8);
            if (lVar4 <= lVar5) {
              if (lVar4 == lVar5) goto code_r0x00107fe0;
              break;
            }
            lVar7 = lVar7 + -1;
          } while (lVar7 != -1);
        }
        lVar9 = lVar9 + -1;
        *(long *)(lVar6 + lVar9 * 8) = lVar5;
code_r0x00107fe0:
        lVar10 = lVar10 + -1;
        if ((lVar10 < 0) || (lVar11 = lVar11 + -1, lVar11 < 0)) goto code_r0x00108010;
        lVar4 = *(long *)(lVar8 + lVar10 * 8);
      }
    }
    lVar10 = lVar10 + -1;
    if (lVar10 < 0) break;
    lVar4 = *(long *)(lVar8 + lVar10 * 8);
  } while( true );
code_r0x00108010:
  lVar4 = param_1[1];
  lVar8 = *(long *)(param_2 + 8) + lVar4 + *(long *)(param_3 + 8);
  lVar5 = lVar4 + -1;
  lVar11 = lVar8 + -1;
  lVar8 = lVar8 - lVar9;
  param_1[1] = lVar4 + lVar8;
  if ((0 < lVar8) && (-1 < lVar5)) {
    do {
      while( true ) {
        lVar4 = *(long *)(lVar6 + lVar11 * 8);
        lVar2 = *(long *)(lVar6 + lVar5 * 8);
        plVar1 = (long *)(lVar6 + (lVar5 + lVar8) * 8);
        if (lVar4 <= lVar2) break;
        lVar11 = lVar11 + -1;
        lVar8 = lVar8 + -1;
        *plVar1 = lVar4;
        if (lVar8 == 0) {
          lVar8 = 0;
          goto code_r0x00108081;
        }
      }
      lVar5 = lVar5 + -1;
      *plVar1 = lVar2;
    } while (lVar5 != -1);
  }
  lVar8 = lVar8 << 3;
code_r0x00108081:
  func_0x00101a90(lVar6,lVar6 + lVar9 * 8,lVar8);
  return 0;
}

