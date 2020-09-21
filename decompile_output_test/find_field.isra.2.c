
long find_field_isra_2(long param_1,long param_2)

{
  ushort uVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar2 = skip_fields;
  uVar6 = param_1 - 1;
  if ((skip_fields == 0) || (uVar6 == 0)) {
    uVar5 = 0;
  }
  else {
    uVar7 = 0;
    uVar5 = 0;
    while( true ) {
      plVar3 = (long *)func_0x00101aa0();
      while( true ) {
        uVar4 = (ulong)*(byte *)(param_2 + uVar5);
        uVar1 = *(ushort *)(*plVar3 + uVar4 * 2);
        if ((*(byte *)(param_2 + uVar5) != 10) && ((uVar1 & 1) == 0)) break;
        uVar5 = uVar5 + 1;
        if (uVar6 <= uVar5) goto code_r0x001028d8;
      }
      if (uVar6 <= uVar5) break;
      while (((char)uVar4 != '\n' && ((uVar1 & 1) == 0))) {
        uVar5 = uVar5 + 1;
        if (uVar6 <= uVar5) goto code_r0x001028d8;
        uVar4 = (ulong)*(byte *)(param_2 + uVar5);
        uVar1 = *(ushort *)(*plVar3 + uVar4 * 2);
      }
      uVar7 = uVar7 + 1;
      if (((uVar2 <= uVar7) || (uVar6 <= uVar5)) || (uVar6 <= uVar5)) break;
    }
code_r0x001028d8:
    uVar6 = uVar6 - uVar5;
  }
  if (skip_chars <= uVar6) {
    uVar6 = skip_chars;
  }
  return param_2 + uVar5 + uVar6;
}

