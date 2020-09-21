
undefined8
check_arrival_expand_ecl_sub(long *param_1,long param_2,long param_3,long param_4,uint param_5)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  
  while( true ) {
    lVar2 = re_node_set_contains_isra_3(*(undefined8 *)(param_2 + 8),param_2 + 0x10,param_3);
    if (lVar2 != 0) {
      return 0;
    }
    plVar5 = (long *)(param_3 * 0x10 + *param_1);
    if (((uint)*(byte *)(plVar5 + 1) == param_5) && (*plVar5 == param_4)) {
      if (param_5 != 9) {
        return 0;
      }
      cVar1 = re_node_set_insert(param_2,param_3);
      if (cVar1 != '\0') {
        return 0;
      }
      return 0xc;
    }
    cVar1 = re_node_set_insert(param_2,param_3);
    if (cVar1 == '\0') {
      return 0xc;
    }
    lVar4 = param_1[5] + param_3 * 0x18;
    lVar2 = *(long *)(lVar4 + 8);
    if (lVar2 == 0) break;
    plVar5 = *(long **)(lVar4 + 0x10);
    if (lVar2 == 2) {
      uVar3 = check_arrival_expand_ecl_sub(param_1,param_2,plVar5[1],param_4,(ulong)param_5);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      plVar5 = *(long **)(param_1[5] + 0x10 + param_3 * 0x18);
    }
    param_3 = *plVar5;
  }
  return 0;
}

