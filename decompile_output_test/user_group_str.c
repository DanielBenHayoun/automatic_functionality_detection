
undefined8 user_group_str(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  if (param_1 == 0) {
    param_1 = param_2;
    if (param_2 != 0) goto code_r0x001029c0;
    uVar3 = 0;
  }
  else {
    if (param_2 == 0) {
code_r0x001029c0:
      lVar1 = func_0x00101aa0(param_1);
      lVar1 = lVar1 + 1;
      uVar3 = xmalloc(lVar1,lVar1);
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*(code *)PTR_memcpy_0030eec8)(uVar3,param_1,lVar1);
      return uVar3;
    }
    lVar1 = func_0x00101aa0();
    lVar2 = func_0x00101aa0(param_2);
    uVar3 = xmalloc(lVar1 + 2 + lVar2);
    puVar4 = (undefined *)func_0x00101a70(uVar3,param_1);
    *puVar4 = 0x3a;
    func_0x001019f0(puVar4 + 1,param_2);
  }
  return uVar3;
}

