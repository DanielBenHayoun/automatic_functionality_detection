
void quotearg_custom(undefined *param_1,long param_2,undefined *param_3)

{
  undefined *puVar1;
  long extraout_RDX;
  undefined *puVar2;
  long in_FS_OFFSET;
  
  puVar2 = (undefined *)register0x00000020;
  do {
    puVar1 = puVar2 + -0x48;
    *(undefined8 *)(puVar2 + -0x10) = *(undefined8 *)(in_FS_OFFSET + 0x28);
    *(int *)(puVar2 + -0x48) = SUB164(default_quoting_options._0_16_,0);
    *(int *)(puVar2 + -0x44) = SUB164(default_quoting_options._0_16_ >> 0x20,0);
    *(int *)(puVar2 + -0x40) = SUB164(default_quoting_options._0_16_ >> 0x40,0);
    *(int *)(puVar2 + -0x3c) = SUB164(default_quoting_options._0_16_ >> 0x60,0);
    *(undefined **)(puVar2 + -0x18) = default_quoting_options._48_8_;
    *(undefined4 *)(puVar2 + -0x48) = 10;
    *(int *)(puVar2 + -0x38) = SUB164(default_quoting_options._16_16_,0);
    *(int *)(puVar2 + -0x34) = SUB164(default_quoting_options._16_16_ >> 0x20,0);
    *(int *)(puVar2 + -0x30) = SUB164(default_quoting_options._16_16_ >> 0x40,0);
    *(int *)(puVar2 + -0x2c) = SUB164(default_quoting_options._16_16_ >> 0x60,0);
    *(int *)(puVar2 + -0x28) = SUB164(default_quoting_options._32_16_,0);
    *(int *)(puVar2 + -0x24) = SUB164(default_quoting_options._32_16_ >> 0x20,0);
    *(int *)(puVar2 + -0x20) = SUB164(default_quoting_options._32_16_ >> 0x40,0);
    *(int *)(puVar2 + -0x1c) = SUB164(default_quoting_options._32_16_ >> 0x60,0);
    if ((param_1 == (undefined *)0x0) || (param_2 == 0)) {
      *(undefined8 *)(puVar2 + -0x50) = 0x103b3c;
      puVar1 = default_quoting_options._48_8_;
      func_0x001011f0(SUB168(default_quoting_options._32_16_,0));
    }
    else {
      *(undefined **)(puVar2 + -0x20) = param_1;
      *(long *)(puVar2 + -0x18) = param_2;
      *(undefined8 *)(puVar2 + -0x50) = 0x103b22;
      quotearg_n_options(SUB168(default_quoting_options._32_16_,0));
      param_1 = param_3;
      if (*(long *)(puVar2 + -0x10) == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
    }
    *(undefined8 *)(puVar2 + -0x50) = 0x103b41;
    func_0x001012b0();
    param_3 = puVar1;
    param_2 = extraout_RDX;
    puVar2 = puVar2 + -0x48;
  } while( true );
}

