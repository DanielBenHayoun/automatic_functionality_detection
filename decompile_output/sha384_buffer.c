
undefined8 sha384_buffer(undefined8 param_1,undefined8 param_2,byte *param_3)

{
  undefined8 uVar1;
  byte *pbVar2;
  long lVar3;
  code *pcVar4;
  code *pcVar5;
  code *extraout_RDX;
  code *pcVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  undefined8 *puVar10;
  byte *pbVar11;
  code *unaff_R12;
  undefined *unaff_R13;
  code *unaff_R14;
  long unaff_R15;
  long in_FS_OFFSET;
  undefined8 uStack376;
  undefined8 uStack368;
  undefined8 uStack360;
  undefined8 uStack352;
  undefined8 uStack344;
  undefined8 uStack336;
  undefined8 uStack328;
  undefined8 uStack320;
  undefined8 uStack312;
  undefined8 uStack304;
  undefined8 uStack296;
  ulong uStack32;
  
  puVar10 = &uStack376;
  uStack32 = *(ulong *)(in_FS_OFFSET + 0x28);
  uStack304 = 0;
  uStack376 = 0xcbbb9d5dc1059ed8;
  uStack368 = 0x629a292a367cd507;
  uStack312 = 0;
  uStack360 = 0x9159015a3070dd17;
  uStack296 = 0;
  uStack352 = 0x152fecd8f70e5939;
  uStack344 = 0x67332667ffc00b31;
  uStack336 = 0x8eb44a8768581511;
  uStack328 = 0xdb0c2e0d64f98fa7;
  uStack320 = 0x47b5481dbefa4fa4;
  sha512_process_bytes(param_1,param_2,&uStack376);
  sha512_conclude_ctx(&uStack376);
  pbVar9 = param_3;
  uVar1 = sha384_read_ctx();
  pcVar4 = (code *)(uStack32 ^ *(ulong *)(in_FS_OFFSET + 0x28));
  if (pcVar4 == (code *)0x0) {
    return uVar1;
  }
  func_0x00101690();
  pcVar6 = extraout_RDX;
  puVar7 = &uStack376;
  puVar8 = &uStack376;
  while( true ) {
    pcVar5 = pcVar4;
    *(long *)((undefined *)puVar8 + -8) = unaff_R15;
    *(code **)((undefined *)puVar8 + -0x10) = unaff_R14;
    *(undefined **)((undefined *)puVar8 + -0x18) = unaff_R13;
    *(code **)((undefined *)puVar8 + -0x20) = unaff_R12;
    *(byte **)((undefined *)puVar8 + -0x28) = param_3;
    *(undefined8 **)((undefined *)puVar8 + -0x30) = puVar7;
    pbVar11 = (byte *)0x8048;
    *(undefined8 *)((undefined *)puVar8 + -0x40) = *(undefined8 *)(in_FS_OFFSET + 0x28);
    *(byte **)((undefined *)puVar8 + -0x1a0) = pbVar9;
    *(undefined8 *)((undefined *)puVar8 + -0x1b0) = 0x10788c;
    pbVar2 = (byte *)func_0x00101790();
    if (pbVar2 != (byte *)0x0) break;
    uVar1 = 1;
    unaff_R12 = pcVar6;
code_r0x001078f8:
    if (*(long *)((undefined *)puVar8 + -0x40) == *(long *)(in_FS_OFFSET + 0x28)) {
      return uVar1;
    }
    *(undefined8 *)((undefined *)puVar8 + -0x1b0) = 0x10796c;
    func_0x00101690();
    pcVar6 = sha512_init_ctx;
    pcVar4 = sha512_finish_ctx;
    puVar7 = puVar10;
    puVar8 = (undefined8 *)((undefined *)puVar8 + -0x1a8);
    puVar10 = (undefined8 *)pbVar11;
    unaff_R14 = pcVar5;
  }
  unaff_R13 = (undefined *)puVar8 + -0x198;
  *(undefined8 *)((undefined *)puVar8 + -0x1b0) = 0x1078a3;
  (*pcVar6)(unaff_R13);
  do {
    unaff_R15 = 0;
code_r0x001078d9:
    param_3 = pbVar2;
    pbVar11 = pbVar2;
    unaff_R12 = (code *)0x8000;
    if ((*(byte *)puVar10 & 0x10) != 0) goto code_r0x001078de;
    pbVar9 = (byte *)0x1;
    *(undefined8 *)((undefined *)puVar8 + -0x1b0) = 0x1078c8;
    lVar3 = func_0x00101620(pbVar2 + unaff_R15,1,0x8000 - unaff_R15,puVar10);
    unaff_R15 = unaff_R15 + lVar3;
    if (unaff_R15 != 0x8000) break;
    *(undefined8 *)((undefined *)puVar8 + -0x1b0) = 0x107930;
    sha512_process_block(pbVar2,0x8000,unaff_R13);
  } while( true );
  if (lVar3 == 0) {
    if ((*(byte *)puVar10 & 0x20) == 0) {
code_r0x001078de:
      if (unaff_R15 != 0) {
        *(undefined8 *)((undefined *)puVar8 + -0x1b0) = 0x10795e;
        sha512_process_bytes(pbVar2,unaff_R15,unaff_R13);
      }
      pbVar9 = *(byte **)((undefined *)puVar8 + -0x1a0);
      *(undefined8 *)((undefined *)puVar8 + -0x1b0) = 0x1078ee;
      (*pcVar5)(unaff_R13);
      *(undefined8 *)((undefined *)puVar8 + -0x1b0) = 0x1078f6;
      func_0x001015b0();
      uVar1 = 0;
    }
    else {
      *(undefined8 *)((undefined *)puVar8 + -0x1b0) = 0x107945;
      func_0x001015b0();
      uVar1 = 1;
    }
    goto code_r0x001078f8;
  }
  goto code_r0x001078d9;
}

