
undefined8 sha256_stream(byte *param_1,undefined8 param_2)

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
    unaff_R14 = sha256_finish_ctx;
    *(undefined **)((undefined *)register0x00000020 + -0x18) = unaff_R13;
    *(code **)((undefined *)register0x00000020 + -0x20) = unaff_R12;
    unaff_R12 = sha256_init_ctx;
    *(byte **)((undefined *)register0x00000020 + -0x28) = unaff_RBP;
    *(byte **)((undefined *)register0x00000020 + -0x30) = unaff_RBX;
    pbVar4 = (byte *)0x8048;
    *(undefined8 *)((undefined *)register0x00000020 + -0x40) = *(undefined8 *)(in_FS_OFFSET + 0x28);
    *(undefined8 *)((undefined *)register0x00000020 + -0x100) = param_2;
    *(undefined8 *)((undefined *)register0x00000020 + -0x110) = 0x1063bc;
    pbVar1 = (byte *)func_0x00101790();
    if (pbVar1 != (byte *)0x0) break;
    uVar3 = 1;
code_r0x00106428:
    if (*(long *)((undefined *)register0x00000020 + -0x40) == *(long *)(in_FS_OFFSET + 0x28)) {
      return uVar3;
    }
    *(undefined8 *)((undefined *)register0x00000020 + -0x110) = 0x10649c;
    func_0x00101690();
    unaff_RBX = param_1;
    register0x00000020 = (BADSPACEBASE *)((undefined *)register0x00000020 + -0x108);
    param_1 = pbVar4;
  }
  unaff_R13 = (undefined *)register0x00000020 + -0xf8;
  *(undefined8 *)((undefined *)register0x00000020 + -0x110) = 0x1063d3;
  sha256_init_ctx(unaff_R13);
  unaff_R12 = (code *)0x8000;
  do {
    unaff_R15 = 0;
code_r0x00106409:
    unaff_RBP = pbVar1;
    pbVar4 = pbVar1;
    if ((*param_1 & 0x10) != 0) goto code_r0x0010640e;
    param_2 = 1;
    *(undefined8 *)((undefined *)register0x00000020 + -0x110) = 0x1063f8;
    lVar2 = func_0x00101620(pbVar1 + unaff_R15,1,0x8000 - unaff_R15,param_1);
    unaff_R15 = unaff_R15 + lVar2;
    if (unaff_R15 != 0x8000) break;
    *(undefined8 *)((undefined *)register0x00000020 + -0x110) = 0x106460;
    sha256_process_block(pbVar1,0x8000,unaff_R13);
  } while( true );
  if (lVar2 == 0) {
    if ((*param_1 & 0x20) == 0) {
code_r0x0010640e:
      if (unaff_R15 != 0) {
        *(undefined8 *)((undefined *)register0x00000020 + -0x110) = 0x10648e;
        sha256_process_bytes(pbVar1,unaff_R15,unaff_R13);
      }
      param_2 = *(undefined8 *)((undefined *)register0x00000020 + -0x100);
      *(undefined8 *)((undefined *)register0x00000020 + -0x110) = 0x10641e;
      sha256_finish_ctx(unaff_R13);
      *(undefined8 *)((undefined *)register0x00000020 + -0x110) = 0x106426;
      func_0x001015b0();
      uVar3 = 0;
    }
    else {
      *(undefined8 *)((undefined *)register0x00000020 + -0x110) = 0x106475;
      func_0x001015b0();
      uVar3 = 1;
    }
    goto code_r0x00106428;
  }
  goto code_r0x00106409;
}

