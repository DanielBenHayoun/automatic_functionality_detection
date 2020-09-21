
undefined8 create_hole(ulong param_1,undefined8 param_2,char param_3,long param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint *puVar5;
  undefined *puVar6;
  
  lVar2 = func_0x001029c0(param_1,param_4,1);
  if (lVar2 < 0) {
    uVar3 = quotearg_style(4,param_2);
    puVar6 = &UNK_00114d9f;
code_r0x001051c0:
    uVar4 = func_0x001028e0(0,puVar6,5);
    puVar5 = (uint *)func_0x00102770();
    func_0x00102cb0(0,(ulong)*puVar5,uVar4,uVar3);
    return 0;
  }
  if (param_3 != '\0') {
    iVar1 = punch_hole(param_1 & 0xffffffff,lVar2 - param_4,param_4);
    if (iVar1 < 0) {
      uVar3 = quotearg_style(4,param_2);
      puVar6 = &UNK_00114daf;
      goto code_r0x001051c0;
    }
  }
  return 1;
}

