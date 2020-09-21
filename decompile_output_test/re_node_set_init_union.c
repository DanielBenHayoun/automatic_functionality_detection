
undefined8 re_node_set_init_union(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  if (param_2 != 0) {
    lVar6 = *(long *)(param_2 + 8);
    if ((param_3 != 0) && (0 < lVar6)) {
      lVar1 = *(long *)(param_3 + 8);
      if (0 < lVar1) {
        *param_1 = lVar6 + lVar1;
        lVar8 = func_0x00101ac0((lVar6 + lVar1) * 8);
        param_1[2] = lVar8;
        if (lVar8 == 0) {
          return 0xc;
        }
        lVar2 = *(long *)(param_3 + 0x10);
        lVar3 = *(long *)(param_2 + 0x10);
        lVar10 = 0;
        lVar9 = 0;
        lVar11 = 0;
        while( true ) {
          lVar4 = *(long *)(lVar3 + lVar11 * 8);
          lVar5 = *(long *)(lVar2 + lVar9 * 8);
          lVar10 = lVar10 + 1;
          if (lVar5 < lVar4) {
            lVar9 = lVar9 + 1;
            *(long *)(lVar8 + -8 + lVar10 * 8) = lVar5;
          }
          else {
            *(long *)(lVar8 + -8 + lVar10 * 8) = lVar4;
            lVar11 = lVar11 + 1;
            lVar9 = lVar9 + (ulong)(lVar4 == lVar5);
          }
          if (lVar6 <= lVar11) break;
          if (lVar1 <= lVar9) {
            lVar1 = lVar10 * 8;
            lVar10 = lVar10 + (lVar6 - lVar11);
            func_0x00101a90(lVar8 + lVar1,lVar3 + lVar11 * 8,(lVar6 - lVar11) * 8);
code_r0x00108705:
            param_1[1] = lVar10;
            return 0;
          }
        }
        if (lVar9 < lVar1) {
          lVar6 = lVar10 * 8;
          lVar10 = lVar10 + (lVar1 - lVar9);
          func_0x00101a90(lVar8 + lVar6,lVar2 + lVar9 * 8,(lVar1 - lVar9) * 8);
        }
        goto code_r0x00108705;
      }
      goto code_r0x001086f3;
    }
    if (0 < lVar6) goto code_r0x001086f3;
  }
  if ((param_3 == 0) || (param_2 = param_3, *(long *)(param_3 + 8) < 1)) {
    param_1[2] = 0;
    *(undefined4 *)param_1 = 0;
    *(undefined4 *)((long)param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    *(undefined4 *)((long)param_1 + 0xc) = 0;
    return 0;
  }
code_r0x001086f3:
  lVar6 = *(long *)(param_2 + 8);
  param_1[1] = lVar6;
  lVar1 = *(long *)(param_2 + 8);
  if (0 < lVar1) {
    *param_1 = lVar6;
    lVar6 = func_0x00101ac0(lVar6 * 8);
    param_1[2] = lVar6;
    if (lVar6 == 0) {
      param_1[1] = 0;
      *param_1 = 0;
      uVar7 = 0xc;
    }
    else {
      func_0x00101a90(lVar6,*(undefined8 *)(param_2 + 0x10),lVar1 * 8);
      uVar7 = 0;
    }
    return uVar7;
  }
  param_1[2] = 0;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)((long)param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  return 0;
}

