
void quotearg_colon(undefined8 param_1)

{
  uint uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  
  bVar2 = 0x3a;
  puVar3 = (undefined *)register0x00000020;
  while( true ) {
    *(undefined8 *)(puVar3 + -0x10) = *(undefined8 *)(in_FS_OFFSET + 0x28);
    *(undefined8 *)(puVar3 + -0x18) = default_quoting_options._48_8_;
    *(int *)(puVar3 + -0x48) = SUB164(default_quoting_options._0_16_,0);
    *(int *)(puVar3 + -0x44) = SUB164(default_quoting_options._0_16_ >> 0x20,0);
    *(int *)(puVar3 + -0x40) = SUB164(default_quoting_options._0_16_ >> 0x40,0);
    *(int *)(puVar3 + -0x3c) = SUB164(default_quoting_options._0_16_ >> 0x60,0);
    *(int *)(puVar3 + -0x38) = SUB164(default_quoting_options._16_16_,0);
    *(int *)(puVar3 + -0x34) = SUB164(default_quoting_options._16_16_ >> 0x20,0);
    *(int *)(puVar3 + -0x30) = SUB164(default_quoting_options._16_16_ >> 0x40,0);
    *(int *)(puVar3 + -0x2c) = SUB164(default_quoting_options._16_16_ >> 0x60,0);
    *(int *)(puVar3 + -0x28) = SUB164(default_quoting_options._32_16_,0);
    *(int *)(puVar3 + -0x24) = SUB164(default_quoting_options._32_16_ >> 0x20,0);
    *(int *)(puVar3 + -0x20) = SUB164(default_quoting_options._32_16_ >> 0x40,0);
    *(int *)(puVar3 + -0x1c) = SUB164(default_quoting_options._32_16_ >> 0x60,0);
    uVar1 = *(uint *)(puVar3 + (ulong)(bVar2 >> 5) * 4 + -0x40);
    *(uint *)(puVar3 + (ulong)(bVar2 >> 5) * 4 + -0x40) =
         (~(uVar1 >> (bVar2 & 0x1f)) & 1) << (bVar2 & 0x1f) ^ uVar1;
    uVar4 = 0;
    *(undefined8 *)(puVar3 + -0x50) = 0x10a2de;
    quotearg_n_options(SUB168(default_quoting_options._32_16_,0),0,param_1,0xffffffffffffffff);
    bVar2 = (byte)(*(ulong *)(puVar3 + -0x10) ^ *(ulong *)(in_FS_OFFSET + 0x28));
    if ((*(ulong *)(puVar3 + -0x10) ^ *(ulong *)(in_FS_OFFSET + 0x28)) == 0) break;
    *(undefined8 *)(puVar3 + -0x50) = 0x10a2f8;
    func_0x001021f0();
    puVar3 = puVar3 + -0x48;
    param_1 = uVar4;
  }
  return;
}

