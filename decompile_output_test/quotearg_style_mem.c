
void quotearg_style_mem(ulong param_1,ulong param_2)

{
  ulong extraout_RDX;
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  
  param_1 = param_1 & 0xffffffff;
  uVar3 = 0;
  puVar1 = (undefined *)register0x00000020;
  do {
    *(undefined8 *)(puVar1 + -0x10) = *(undefined8 *)(in_FS_OFFSET + 0x28);
    if ((int)param_1 == 10) {
      *(undefined8 *)(puVar1 + -0x50) = 0x10a235;
      func_0x001020a0();
      param_2 = param_1;
    }
    else {
      *(int *)(puVar1 + -0x48) = (int)param_1;
      *(undefined8 *)(puVar1 + -0x44) = 0;
      *(undefined8 *)(puVar1 + -0x3c) = 0;
      *(undefined8 *)(puVar1 + -0x34) = 0;
      *(undefined8 *)(puVar1 + -0x2c) = 0;
      *(undefined8 *)(puVar1 + -0x24) = 0;
      *(undefined8 *)(puVar1 + -0x1c) = 0;
      *(undefined4 *)(puVar1 + -0x14) = 0;
      *(undefined8 *)(puVar1 + -0x50) = 0x10a21b;
      quotearg_n_options();
      if (*(long *)(puVar1 + -0x10) == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
    }
    *(undefined8 *)(puVar1 + -0x50) = 0x10a23a;
    func_0x001021f0();
    iVar2 = (int)uVar3;
    param_1 = uVar3 & 0xffffffff;
    uVar3 = 0;
    *(undefined8 *)(puVar1 + -0x58) = *(undefined8 *)(in_FS_OFFSET + 0x28);
    if (iVar2 == 10) {
      *(undefined8 *)(puVar1 + -0x98) = 0x10a1a9;
      func_0x001020a0(0,param_1,0);
    }
    else {
      *(int *)(puVar1 + -0x90) = iVar2;
      *(undefined8 *)(puVar1 + -0x8c) = 0;
      *(undefined8 *)(puVar1 + -0x84) = 0;
      *(undefined8 *)(puVar1 + -0x7c) = 0;
      *(undefined8 *)(puVar1 + -0x74) = 0;
      *(undefined8 *)(puVar1 + -0x6c) = 0;
      *(undefined8 *)(puVar1 + -100) = 0;
      *(undefined4 *)(puVar1 + -0x5c) = 0;
      *(undefined8 *)(puVar1 + -0x98) = 0x10a18f;
      quotearg_n_options(0,param_2,0xffffffffffffffff,puVar1 + -0x90);
      param_1 = param_2;
      if (*(long *)(puVar1 + -0x58) == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
    }
    *(undefined8 *)(puVar1 + -0x98) = 0x10a1ae;
    func_0x001021f0();
    param_2 = extraout_RDX;
    puVar1 = puVar1 + -0x90;
  } while( true );
}

