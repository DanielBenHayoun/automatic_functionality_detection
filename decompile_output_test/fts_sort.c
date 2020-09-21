
long fts_sort(long param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  plVar7 = *(long **)(param_1 + 0x10);
  if (param_3 <= *(ulong *)(param_1 + 0x38)) {
code_r0x00106d05:
    plVar5 = plVar7;
    if (param_2 != 0) {
      do {
        *plVar5 = param_2;
        param_2 = *(long *)(param_2 + 0x10);
        plVar5 = plVar5 + 1;
      } while (param_2 != 0);
    }
    func_0x00101a10(plVar7,param_3,8,uVar2);
    plVar7 = *(long **)(param_1 + 0x10);
    lVar4 = param_3 - 1;
    lVar6 = *plVar7;
    lVar3 = lVar6;
    plVar5 = plVar7;
    if (lVar4 != 0) {
      while( true ) {
        lVar4 = lVar4 + -1;
        *(long *)(lVar6 + 0x10) = plVar5[1];
        if (lVar4 == 0) break;
        lVar6 = plVar5[1];
        plVar5 = plVar5 + 1;
      }
      lVar6 = plVar7[param_3 - 1];
    }
    *(undefined8 *)(lVar6 + 0x10) = 0;
    return lVar3;
  }
  uVar1 = param_3 + 0x28;
  *(ulong *)(param_1 + 0x38) = uVar1;
  if (uVar1 < 0x2000000000000000) {
    plVar7 = (long *)func_0x00101cb0(plVar7,uVar1 * 8);
    if (plVar7 != (long *)0x0) {
      *(long **)(param_1 + 0x10) = plVar7;
      goto code_r0x00106d05;
    }
    plVar7 = *(long **)(param_1 + 0x10);
  }
  func_0x00101de0(plVar7);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return param_2;
}

