
void quotearg_char(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  byte bVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  
  while( true ) {
    *(undefined8 *)((undefined *)register0x00000020 + -0x10) = *(undefined8 *)(in_FS_OFFSET + 0x28);
    bVar2 = (byte)param_2 & 0x1f;
    *(undefined8 *)((undefined *)register0x00000020 + -0x18) = default_quoting_options._48_8_;
    *(int *)((undefined *)register0x00000020 + -0x48) = SUB164(default_quoting_options._0_16_,0);
    *(int *)((undefined *)register0x00000020 + -0x44) =
         SUB164(default_quoting_options._0_16_ >> 0x20,0);
    *(int *)((undefined *)register0x00000020 + -0x40) =
         SUB164(default_quoting_options._0_16_ >> 0x40,0);
    *(int *)((undefined *)register0x00000020 + -0x3c) =
         SUB164(default_quoting_options._0_16_ >> 0x60,0);
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
    uVar1 = *(uint *)((undefined *)register0x00000020 +
                     (ulong)(byte)((byte)param_2 >> 5) * 4 + -0x40);
    *(uint *)((undefined *)register0x00000020 + (ulong)(byte)((byte)param_2 >> 5) * 4 + -0x40) =
         (~(uVar1 >> bVar2) & 1) << bVar2 ^ uVar1;
    uVar3 = 0;
    *(undefined8 *)((undefined *)register0x00000020 + -0x50) = 0x10a2de;
    quotearg_n_options(SUB168(default_quoting_options._32_16_,0),0,param_1,0xffffffffffffffff);
    param_2 = *(ulong *)((undefined *)register0x00000020 + -0x10) ^ *(ulong *)(in_FS_OFFSET + 0x28);
    if (param_2 == 0) break;
    *(undefined8 *)((undefined *)register0x00000020 + -0x50) = 0x10a2f8;
    func_0x001021f0();
    register0x00000020 = (BADSPACEBASE *)((undefined *)register0x00000020 + -0x48);
    param_1 = uVar3;
  }
  return;
}

