
undefined * str_days_constprop_13(long param_1,undefined *param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  
  if (*(char *)(param_1 + 0xe0) == '\0') {
    *param_2 = 0;
    uVar1 = *(uint *)(param_1 + 0x10);
    if (uVar1 < 7) {
      uVar3 = 1;
      lVar4 = 100;
      puVar5 = param_2;
      goto code_r0x001048f1;
    }
  }
  else {
    uVar3 = *(long *)(param_1 + 8) + 1;
    if (uVar3 < 0xe) {
      uVar2 = func_0x00102880(param_2,100,&UNK_00110090,ordinal_values_5108 + uVar3 * 0xb);
    }
    else {
      uVar2 = func_0x00102700(param_2,100,1,0xffffffffffffffff,&UNK_001101b2);
    }
    uVar1 = *(uint *)(param_1 + 0x10);
    if ((uVar1 < 7) && (uVar2 < 100)) {
      uVar3 = (ulong)(uVar2 == 0);
      lVar4 = (long)(int)(100 - uVar2);
      puVar5 = param_2 + (int)uVar2;
code_r0x001048f1:
      func_0x00102700(puVar5,lVar4,1,0xffffffffffffffff,&UNK_0011008f + uVar3,
                      days_values_5109 + (long)(int)uVar1 * 4);
      return param_2;
    }
  }
  return param_2;
}

