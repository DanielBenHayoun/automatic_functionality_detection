
undefined8 register_state(long *param_1,ulong *param_2,ulong param_3)

{
  long *plVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  uVar6 = param_2[2];
  *param_2 = param_3;
  param_2[5] = 0;
  param_2[4] = uVar6;
  uVar3 = func_0x00101da0(uVar6 * 8);
  param_2[6] = uVar3;
  if (uVar3 == 0) {
    return 0xc;
  }
  if (0 < (long)uVar6) {
    uVar6 = 0;
    do {
      if (((*(byte *)(*(long *)(param_2[3] + uVar6 * 8) * 0x10 + *param_1 + 8) & 8) == 0) &&
         (cVar2 = re_node_set_insert_last(param_2 + 4), cVar2 == '\0')) {
        return 0xc;
      }
      uVar6 = uVar6 + 1;
    } while (param_2[2] != uVar6 && (long)uVar6 <= (long)param_2[2]);
  }
  plVar1 = (long *)(param_1[8] + (param_3 & param_1[0x11]) * 0x18);
  lVar5 = *plVar1;
  lVar4 = plVar1[2];
  lVar7 = lVar5 + 1;
  if (plVar1[1] == lVar5 || plVar1[1] < lVar5) {
    lVar4 = func_0x00101e00(lVar4,lVar7 * 0x10);
    if (lVar4 == 0) {
      return 0xc;
    }
    lVar5 = *plVar1;
    plVar1[2] = lVar4;
    plVar1[1] = lVar7 * 2;
    lVar7 = lVar5 + 1;
  }
  *plVar1 = lVar7;
  *(ulong **)(lVar4 + lVar5 * 8) = param_2;
  return 0;
}

