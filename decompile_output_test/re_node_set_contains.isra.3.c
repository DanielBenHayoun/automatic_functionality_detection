
long re_node_set_contains_isra_3(long param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (0 < param_1) {
    lVar1 = *param_2;
    uVar6 = param_1 - 1;
    uVar5 = 0;
    while (uVar5 < uVar6) {
      uVar4 = uVar5 + uVar6 >> 1;
      lVar2 = *(long *)(lVar1 + uVar4 * 8);
      while (uVar3 = uVar4, param_3 <= lVar2) {
        if (uVar3 <= uVar5) goto code_r0x0010745d;
        uVar4 = uVar5 + uVar3 >> 1;
        lVar2 = *(long *)(lVar1 + uVar4 * 8);
        uVar6 = uVar3;
      }
      uVar5 = uVar3 + 1;
    }
code_r0x0010745d:
    if (param_3 == *(long *)(lVar1 + uVar5 * 8)) {
      return uVar5 + 1;
    }
  }
  return 0;
}

