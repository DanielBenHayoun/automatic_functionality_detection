
undefined  [16]
create_hard_link(undefined8 param_1,undefined8 param_2,byte param_3,byte param_4,char param_5)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 extraout_RDX;
  ulong extraout_RDX_00;
  undefined8 uStack48;
  
  uVar1 = force_linkat(0xffffff9c,param_1,0xffffff9c,param_2,(ulong)(param_5 != '\0') << 10,
                       (ulong)param_3);
  if (0 < (int)uVar1) {
    uVar2 = quotearg_n_style(1,4,param_1,uStack48);
    uVar3 = quotearg_n_style(0,4,param_2);
    uVar4 = func_0x001028e0(0,&UNK_00114780,5);
    func_0x00102cb0(0,(ulong)uVar1,uVar4,uVar3,uVar2);
    return ZEXT816(extraout_RDX_00) << 0x40;
  }
  param_4 = (byte)((ulong)uVar1 >> 0x18) >> 7 & param_4;
  if (param_4 == 0) {
    return CONCAT88(0xffffffffffffffff,1);
  }
  uVar2 = quotearg_style(4,param_2);
  uVar3 = func_0x001028e0(0,&UNK_00114d80,5);
  func_0x00102c60(1,uVar3,uVar2);
  return CONCAT88(extraout_RDX,(ulong)param_4);
}

