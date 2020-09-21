
undefined8 sha384_stream(byte *param_1,undefined8 param_2)

{
  code *pcVar1;
  byte *pbVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  code *pcVar6;
  byte *unaff_RBX;
  undefined *puVar7;
  byte *unaff_RBP;
  byte *pbVar8;
  code *unaff_R12;
  undefined *unaff_R13;
  code *unaff_R14;
  long unaff_R15;
  long in_FS_OFFSET;
  
  pcVar6 = sha384_init_ctx;
  pcVar1 = sha384_finish_ctx;
  puVar7 = (undefined *)register0x00000020;
  while( true ) {
    pcVar5 = pcVar1;
    *(long *)(puVar7 + -8) = unaff_R15;
    *(code **)(puVar7 + -0x10) = unaff_R14;
    *(undefined **)(puVar7 + -0x18) = unaff_R13;
    *(code **)(puVar7 + -0x20) = unaff_R12;
    *(byte **)(puVar7 + -0x28) = unaff_RBP;
    *(byte **)(puVar7 + -0x30) = unaff_RBX;
    pbVar8 = (byte *)0x8048;
    *(undefined8 *)(puVar7 + -0x40) = *(undefined8 *)(in_FS_OFFSET + 0x28);
    *(undefined8 *)(puVar7 + -0x1a0) = param_2;
    *(undefined8 *)(puVar7 + -0x1b0) = 0x10788c;
    pbVar2 = (byte *)func_0x00101790();
    if (pbVar2 != (byte *)0x0) break;
    uVar4 = 1;
    unaff_R12 = pcVar6;
code_r0x001078f8:
    if (*(long *)(puVar7 + -0x40) == *(long *)(in_FS_OFFSET + 0x28)) {
      return uVar4;
    }
    *(undefined8 *)(puVar7 + -0x1b0) = 0x10796c;
    func_0x00101690();
    pcVar6 = sha512_init_ctx;
    pcVar1 = sha512_finish_ctx;
    unaff_RBX = param_1;
    puVar7 = puVar7 + -0x1a8;
    param_1 = pbVar8;
    unaff_R14 = pcVar5;
  }
  unaff_R13 = puVar7 + -0x198;
  *(undefined8 *)(puVar7 + -0x1b0) = 0x1078a3;
  (*pcVar6)(unaff_R13);
  do {
    unaff_R15 = 0;
code_r0x001078d9:
    unaff_RBP = pbVar2;
    pbVar8 = pbVar2;
    unaff_R12 = (code *)0x8000;
    if ((*param_1 & 0x10) != 0) goto code_r0x001078de;
    param_2 = 1;
    *(undefined8 *)(puVar7 + -0x1b0) = 0x1078c8;
    lVar3 = func_0x00101620(pbVar2 + unaff_R15,1,0x8000 - unaff_R15,param_1);
    unaff_R15 = unaff_R15 + lVar3;
    if (unaff_R15 != 0x8000) break;
    *(undefined8 *)(puVar7 + -0x1b0) = 0x107930;
    sha512_process_block(pbVar2,0x8000,unaff_R13);
  } while( true );
  if (lVar3 == 0) {
    if ((*param_1 & 0x20) == 0) {
code_r0x001078de:
      if (unaff_R15 != 0) {
        *(undefined8 *)(puVar7 + -0x1b0) = 0x10795e;
        sha512_process_bytes(pbVar2,unaff_R15,unaff_R13);
      }
      param_2 = *(undefined8 *)(puVar7 + -0x1a0);
      *(undefined8 *)(puVar7 + -0x1b0) = 0x1078ee;
      (*pcVar5)(unaff_R13);
      *(undefined8 *)(puVar7 + -0x1b0) = 0x1078f6;
      func_0x001015b0();
      uVar4 = 0;
    }
    else {
      *(undefined8 *)(puVar7 + -0x1b0) = 0x107945;
      func_0x001015b0();
      uVar4 = 1;
    }
    goto code_r0x001078f8;
  }
  goto code_r0x001078d9;
}

