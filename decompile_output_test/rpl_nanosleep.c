
undefined8 rpl_nanosleep(long *param_1,long **param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  long lVar3;
  long **pplVar4;
  long *plVar5;
  long in_FS_OFFSET;
  long lStack56;
  ulong uStack48;
  long lStack32;
  
  plVar5 = &lStack56;
  lStack32 = *(long *)(in_FS_OFFSET + 0x28);
  if ((ulong)param_1[1] < 1000000000) {
    lVar3 = *param_1;
    uStack48 = param_1[1];
    while (0x1fa400 < lVar3) {
      lStack56 = 0x1fa400;
      lVar3 = lVar3 + -0x1fa400;
      pplVar4 = param_2;
      param_1 = &lStack56;
      uVar1 = func_0x001013c0();
      if ((int)uVar1 != 0) {
        if (param_2 != (long **)0x0) {
          *param_2 = (long *)((long)*param_2 + lVar3);
        }
        goto code_r0x00104887;
      }
      uStack48 = 0;
    }
    lStack56 = lVar3;
    uVar1 = func_0x001013c0();
    pplVar4 = param_2;
    param_1 = plVar5;
  }
  else {
    puVar2 = (undefined4 *)func_0x001012c0();
    *puVar2 = 0x16;
    uVar1 = 0xffffffff;
    pplVar4 = param_2;
  }
code_r0x00104887:
  if (lStack32 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
  func_0x00101380();
  if (c_locale_cache == 0) {
    c_locale_cache = func_0x001013b0(0x1fbf,&UNK_00105948,0);
  }
  if (c_locale_cache != 0) {
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)PTR_strtod_l_00306ec0)(param_1,pplVar4);
    return uVar1;
  }
  if (pplVar4 != (long **)0x0) {
    *pplVar4 = param_1;
  }
  return 0;
}

