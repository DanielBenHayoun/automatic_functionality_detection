
undefined8
check_dst_limits_isra_13
          (long param_1,long *param_2,long *param_3,undefined8 param_4,long param_5,
          undefined8 param_6,long param_7)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  lVar7 = 0;
  plVar1 = *(long **)(param_1 + 0x98);
  lVar11 = *(long *)(param_1 + 200);
  lVar8 = lVar11;
  while (lVar7 < lVar8) {
    lVar9 = (lVar7 + lVar8) / 2;
    lVar6 = *(long *)(*(long *)(param_1 + 0xd8) + 8 + lVar9 * 0x28);
    while (lVar10 = lVar9, param_5 <= lVar6) {
      if (lVar10 <= lVar7) goto code_r0x0010775b;
      lVar9 = (lVar7 + lVar10) / 2;
      lVar6 = *(long *)(*(long *)(param_1 + 0xd8) + 8 + lVar9 * 0x28);
      lVar8 = lVar10;
    }
    lVar7 = lVar10 + 1;
  }
code_r0x0010775b:
  if (lVar7 < lVar11) {
    if (param_5 != *(long *)(*(long *)(param_1 + 0xd8) + lVar7 * 0x28 + 8)) {
      lVar7 = -1;
    }
  }
  else {
    lVar7 = -1;
  }
  lVar8 = 0;
  lVar6 = lVar11;
  while (lVar8 < lVar6) {
    lVar10 = (lVar8 + lVar6) / 2;
    lVar9 = *(long *)(*(long *)(param_1 + 0xd8) + 8 + lVar10 * 0x28);
    while (lVar3 = lVar10, param_7 <= lVar9) {
      if (lVar3 <= lVar8) goto code_r0x001077e4;
      lVar10 = (lVar8 + lVar3) / 2;
      lVar9 = *(long *)(*(long *)(param_1 + 0xd8) + 8 + lVar10 * 0x28);
      lVar6 = lVar3;
    }
    lVar8 = lVar3 + 1;
  }
code_r0x001077e4:
  if (lVar8 < lVar11) {
    if (param_7 != *(long *)(*(long *)(param_1 + 0xd8) + lVar8 * 0x28 + 8)) {
      lVar8 = -1;
    }
  }
  else {
    lVar8 = -1;
  }
  if (0 < *param_2) {
    lVar11 = 0;
    do {
      lVar6 = *(long *)(*param_3 + lVar11 * 8);
      uVar2 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0xd8) + lVar6 * 0x28) * 0x10 + *plVar1);
      iVar4 = check_dst_limits_calc_pos(param_1,lVar6,uVar2,param_4,param_5,lVar7);
      iVar5 = check_dst_limits_calc_pos
                        (param_1,*(undefined8 *)(*param_3 + lVar11 * 8),uVar2,param_6,param_7,lVar8)
      ;
      if (iVar4 != iVar5) {
        return 1;
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 < *param_2);
  }
  return 0;
}

