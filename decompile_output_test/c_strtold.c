
uint * c_strtold(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  long lVar4;
  uint *puVar5;
  undefined8 uVar6;
  int *piVar7;
  
  if (c_locale_cache == (uint *)0x0) {
    c_locale_cache = (uint *)func_0x001016b0(0x1fbf,&UNK_00108120,0);
  }
  puVar5 = c_locale_cache;
  if (c_locale_cache != (uint *)0x0) {
    puVar5 = (uint *)func_0x00101780();
    if (puVar5 != (uint *)0x0) {
      func_0x00101830(param_1,param_2);
      puVar3 = (undefined4 *)func_0x001015b0();
      uVar1 = *puVar3;
      lVar4 = func_0x00101780();
      if (lVar4 != 0) {
        *puVar3 = uVar1;
        return (uint *)lVar4;
      }
      func_0x001015a0();
      lVar4 = func_0x001015f0();
      uVar2 = *puVar5;
      uVar6 = rpl_fclose(puVar5);
      if ((uVar2 & 0x20) == 0) {
        if (((int)uVar6 != 0) && (uVar6 = 0xffffffff, lVar4 == 0)) {
          piVar7 = (int *)func_0x001015b0();
          return (uint *)(ulong)-(uint)(*piVar7 != 9);
        }
        return (uint *)uVar6;
      }
      if ((int)uVar6 == 0) {
        puVar3 = (undefined4 *)func_0x001015b0();
        *puVar3 = 0;
        return (uint *)0xffffffff;
      }
      return (uint *)0xffffffff;
    }
  }
  if (param_2 == (undefined8 *)0x0) {
    return puVar5;
  }
  *param_2 = param_1;
  return puVar5;
}

