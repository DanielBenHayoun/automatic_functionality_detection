
long rpl_fseeko(uint *param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (((*(long *)(param_1 + 4) == *(long *)(param_1 + 2)) &&
      (*(long *)(param_1 + 10) == *(long *)(param_1 + 8))) && (*(long *)(param_1 + 0x12) == 0)) {
    uVar1 = func_0x001029a0();
    lVar3 = func_0x001028d0((ulong)uVar1,param_2,param_3 & 0xffffffff);
    if (lVar3 != -1) {
      *param_1 = *param_1 & 0xffffffef;
      *(long *)(param_1 + 0x24) = lVar3;
      lVar3 = 0;
    }
    return lVar3;
  }
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)PTR_fseeko_00317f60)();
  return uVar2;
}

