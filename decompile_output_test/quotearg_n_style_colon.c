
void quotearg_n_style_colon
               (undefined8 param_1,undefined *param_2,undefined *param_3,undefined *param_4)

{
  undefined *puVar1;
  long extraout_RDX;
  long lVar2;
  long extraout_RDX_00;
  int *piVar3;
  long in_FS_OFFSET;
  int iStack72;
  undefined8 uStack68;
  undefined8 uStack60;
  undefined8 uStack52;
  undefined8 uStack44;
  undefined8 uStack36;
  undefined8 uStack28;
  undefined4 uStack20;
  ulong uStack16;
  
  uStack16 = *(ulong *)(in_FS_OFFSET + 0x28);
  if ((int)param_2 == 10) {
    func_0x001011f0(param_1,param_2,0);
  }
  else {
    uStack68 = 0;
    uStack60 = 0x4000000;
    uStack52 = 0;
    uStack44 = 0;
    uStack36 = 0;
    uStack28 = 0;
    uStack20 = 0;
    iStack72 = (int)param_2;
    quotearg_n_options(param_1,param_3,0xffffffffffffffff,&iStack72);
    param_4 = (undefined *)(uStack16 ^ *(ulong *)(in_FS_OFFSET + 0x28));
    param_2 = param_3;
    if (param_4 == (undefined *)0x0) {
      return;
    }
  }
  func_0x001012b0();
  lVar2 = extraout_RDX;
  piVar3 = &iStack72;
  do {
    puVar1 = (undefined *)piVar3 + -0x48;
    *(undefined8 *)((undefined *)piVar3 + -0x10) = *(undefined8 *)(in_FS_OFFSET + 0x28);
    *(int *)((undefined *)piVar3 + -0x48) = SUB164(default_quoting_options._0_16_,0);
    *(int *)((undefined *)piVar3 + -0x44) = SUB164(default_quoting_options._0_16_ >> 0x20,0);
    *(int *)((undefined *)piVar3 + -0x40) = SUB164(default_quoting_options._0_16_ >> 0x40,0);
    *(int *)((undefined *)piVar3 + -0x3c) = SUB164(default_quoting_options._0_16_ >> 0x60,0);
    *(undefined **)((undefined *)piVar3 + -0x18) = default_quoting_options._48_8_;
    *(undefined4 *)((undefined *)piVar3 + -0x48) = 10;
    *(int *)((undefined *)piVar3 + -0x38) = SUB164(default_quoting_options._16_16_,0);
    *(int *)((undefined *)piVar3 + -0x34) = SUB164(default_quoting_options._16_16_ >> 0x20,0);
    *(int *)((undefined *)piVar3 + -0x30) = SUB164(default_quoting_options._16_16_ >> 0x40,0);
    *(int *)((undefined *)piVar3 + -0x2c) = SUB164(default_quoting_options._16_16_ >> 0x60,0);
    *(int *)((undefined *)piVar3 + -0x28) = SUB164(default_quoting_options._32_16_,0);
    *(int *)((undefined *)piVar3 + -0x24) = SUB164(default_quoting_options._32_16_ >> 0x20,0);
    *(int *)((undefined *)piVar3 + -0x20) = SUB164(default_quoting_options._32_16_ >> 0x40,0);
    *(int *)((undefined *)piVar3 + -0x1c) = SUB164(default_quoting_options._32_16_ >> 0x60,0);
    if ((param_2 == (undefined *)0x0) || (lVar2 == 0)) {
      *(undefined8 *)((undefined *)piVar3 + -0x50) = 0x103b3c;
      puVar1 = default_quoting_options._48_8_;
      func_0x001011f0(SUB168(default_quoting_options._32_16_,0));
    }
    else {
      *(undefined **)((undefined *)piVar3 + -0x20) = param_2;
      *(long *)((undefined *)piVar3 + -0x18) = lVar2;
      *(undefined8 *)((undefined *)piVar3 + -0x50) = 0x103b22;
      quotearg_n_options(SUB168(default_quoting_options._32_16_,0));
      param_2 = param_4;
      if (*(long *)((undefined *)piVar3 + -0x10) == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
    }
    *(undefined8 *)((undefined *)piVar3 + -0x50) = 0x103b41;
    func_0x001012b0();
    param_4 = puVar1;
    lVar2 = extraout_RDX_00;
    piVar3 = (int *)((undefined *)piVar3 + -0x48);
  } while( true );
}

