
undefined8 re_node_set_compare_part_2(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  if (*(long *)(param_1 + 8) != *(long *)(param_2 + 8)) {
    return 0;
  }
  lVar3 = *(long *)(param_1 + 8) + -1;
  lVar4 = lVar3 * 8;
  while( true ) {
    if (lVar3 < 0) {
      return 1;
    }
    plVar1 = (long *)(*(long *)(param_1 + 0x10) + lVar4);
    plVar2 = (long *)(*(long *)(param_2 + 0x10) + lVar4);
    lVar4 = lVar4 + -8;
    if (*plVar1 != *plVar2) break;
    lVar3 = lVar3 + -1;
  }
  return 0;
}

