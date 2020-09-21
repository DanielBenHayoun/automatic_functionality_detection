
undefined8 realloc_groupbuf(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  if (SUB168(ZEXT816(4) * ZEXT816(param_2) >> 0x40,0) == 0) {
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)PTR_realloc_00308f30)(param_1,param_2 << 2);
    return uVar1;
  }
  puVar2 = (undefined4 *)func_0x00101710();
  *puVar2 = 0xc;
  return 0;
}

