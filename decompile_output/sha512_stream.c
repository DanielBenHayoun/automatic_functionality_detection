
undefined8 sha512_stream(byte *param_1,undefined8 param_2)

{
  byte *pbVar1;
  long lVar2;
  undefined8 uVar3;
  byte *unaff_RBX;
  byte *unaff_RBP;
  byte *pbVar4;
  code *unaff_R12;
  undefined *unaff_R13;
  code *unaff_R14;
  long unaff_R15;
  long in_FS_OFFSET;
  
  while( true ) {
    *(long *)((undefined *)register0x00000020 + -8) = unaff_R15;
    *(code **)((undefined *)register0x00000020 + -0x10) = unaff_R14;
    unaff_R14 = sha512_finish_ctx;
    *(undefined **)((undefined *)register0x00000020 + -0x18) = unaff_R13;
    *(code **)((undefined *)register0x00000020 + -0x20) = unaff_R12;
    unaff_R12 = sha512_init_ctx;
    *(byte **)((undefined *)register0x00000020 + -0x28) = unaff_RBP;
    *(byte **)((undefined *)register0x00000020 + -0x30) = unaff_RBX;
    pbVar4 = (byte *)0x8048;
    *(undefined8 *)((undefined *)register0x00000020 + -0x40) = *(undefined8 *)(in_FS_OFFSET + 0x28);
    *(undefined8 *)((undefined *)register0x00000020 + -0x1a0) = param_2;
    *(undefined8 *)((undefined *)register0x00000020 + -0x1b0) = 0x10788c;
    pbVar1 = (byte *)func_0x00101790();
    if (pbVar1 != (byte *)0x0) break;
    uVar3 = 1;
code_r0x001078f8:
    if (*(long *)((undefined *)register0x00000020 + -0x40) == *(long *)(in_FS_OFFSET + 0x28)) {
      return uVar3;
    }
    *(undefined8 *)((undefined *)register0x00000020 + -0x1b0) = 0x10796c;
    func_0x00101690();
    unaff_RBX = param_1;
    register0x00000020 = (BADSPACEBASE *)((undefined *)register0x00000020 + -0x1a8);
    param_1 = pbVar4;
  }
  unaff_R13 = (undefined *)register0x00000020 + -0x198;
  *(undefined8 *)((undefined *)register0x00000020 + -0x1b0) = 0x1078a3;
  sha512_init_ctx(unaff_R13);
  unaff_R12 = (code *)0x8000;
  do {
    unaff_R15 = 0;
code_r0x001078d9:
    unaff_RBP = pbVar1;
    pbVar4 = pbVar1;
    if ((*param_1 & 0x10) != 0) goto code_r0x001078de;
    param_2 = 1;
    *(undefined8 *)((undefined *)register0x00000020 + -0x1b0) = 0x1078c8;
    lVar2 = func_0x00101620(pbVar1 + unaff_R15,1,0x8000 - unaff_R15,param_1);
    unaff_R15 = unaff_R15 + lVar2;
    if (unaff_R15 != 0x8000) break;
    *(undefined8 *)((undefined *)register0x00000020 + -0x1b0) = 0x107930;
    sha512_process_block(pbVar1,0x8000,unaff_R13);
  } while( true );
  if (lVar2 == 0) {
    if ((*param_1 & 0x20) == 0) {
code_r0x001078de:
      if (unaff_R15 != 0) {
        *(undefined8 *)((undefined *)register0x00000020 + -0x1b0) = 0x10795e;
        sha512_process_bytes(pbVar1,unaff_R15,unaff_R13);
      }
      param_2 = *(undefined8 *)((undefined *)register0x00000020 + -0x1a0);
      *(undefined8 *)((undefined *)register0x00000020 + -0x1b0) = 0x1078ee;
      sha512_finish_ctx(unaff_R13);
      *(undefined8 *)((undefined *)register0x00000020 + -0x1b0) = 0x1078f6;
      func_0x001015b0();
      uVar3 = 0;
    }
    else {
      *(undefined8 *)((undefined *)register0x00000020 + -0x1b0) = 0x107945;
      func_0x001015b0();
      uVar3 = 1;
    }
    goto code_r0x001078f8;
  }
  goto code_r0x001078d9;
}

