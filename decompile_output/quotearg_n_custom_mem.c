
void quotearg_n_custom_mem(undefined8 param_1,undefined *param_2,long param_3,undefined *param_4)

{
  undefined *puVar1;
  long extraout_RDX;
  long in_FS_OFFSET;
  
  do {
    puVar1 = (undefined *)register0x00000020 + -0x48;
    *(undefined8 *)((undefined *)register0x00000020 + -0x10) = *(undefined8 *)(in_FS_OFFSET + 0x28);
    *(int *)((undefined *)register0x00000020 + -0x48) = SUB164(default_quoting_options._0_16_,0);
    *(int *)((undefined *)register0x00000020 + -0x44) =
         SUB164(default_quoting_options._0_16_ >> 0x20,0);
    *(int *)((undefined *)register0x00000020 + -0x40) =
         SUB164(default_quoting_options._0_16_ >> 0x40,0);
    *(int *)((undefined *)register0x00000020 + -0x3c) =
         SUB164(default_quoting_options._0_16_ >> 0x60,0);
    *(undefined **)((undefined *)register0x00000020 + -0x18) = default_quoting_options._48_8_;
    *(undefined4 *)((undefined *)register0x00000020 + -0x48) = 10;
    *(int *)((undefined *)register0x00000020 + -0x38) = SUB164(default_quoting_options._16_16_,0);
    *(int *)((undefined *)register0x00000020 + -0x34) =
         SUB164(default_quoting_options._16_16_ >> 0x20,0);
    *(int *)((undefined *)register0x00000020 + -0x30) =
         SUB164(default_quoting_options._16_16_ >> 0x40,0);
    *(int *)((undefined *)register0x00000020 + -0x2c) =
         SUB164(default_quoting_options._16_16_ >> 0x60,0);
    *(int *)((undefined *)register0x00000020 + -0x28) = SUB164(default_quoting_options._32_16_,0);
    *(int *)((undefined *)register0x00000020 + -0x24) =
         SUB164(default_quoting_options._32_16_ >> 0x20,0);
    *(int *)((undefined *)register0x00000020 + -0x20) =
         SUB164(default_quoting_options._32_16_ >> 0x40,0);
    *(int *)((undefined *)register0x00000020 + -0x1c) =
         SUB164(default_quoting_options._32_16_ >> 0x60,0);
    if ((param_2 == (undefined *)0x0) || (param_3 == 0)) {
      *(undefined8 *)((undefined *)register0x00000020 + -0x50) = 0x103b3c;
      puVar1 = default_quoting_options._48_8_;
      func_0x001011f0(SUB168(default_quoting_options._32_16_,0));
    }
    else {
      *(undefined **)((undefined *)register0x00000020 + -0x20) = param_2;
      *(long *)((undefined *)register0x00000020 + -0x18) = param_3;
      *(undefined8 *)((undefined *)register0x00000020 + -0x50) = 0x103b22;
      quotearg_n_options(SUB168(default_quoting_options._32_16_,0));
      param_2 = param_4;
      if (*(long *)((undefined *)register0x00000020 + -0x10) == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
    }
    *(undefined8 *)((undefined *)register0x00000020 + -0x50) = 0x103b41;
    func_0x001012b0();
    param_4 = puVar1;
    param_3 = extraout_RDX;
    register0x00000020 = (BADSPACEBASE *)((undefined *)register0x00000020 + -0x48);
  } while( true );
}

