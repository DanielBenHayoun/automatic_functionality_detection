
undefined8 sha512_buffer(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  byte *pbVar2;
  long lVar3;
  code *pcVar4;
  code *pcVar5;
  byte *extraout_RDX;
  code *extraout_RDX_00;
  code *pcVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 *puVar11;
  byte *pbVar12;
  code *unaff_R12;
  undefined *unaff_R13;
  code *unaff_R14;
  long unaff_R15;
  long in_FS_OFFSET;
  undefined8 uStack752;
  undefined8 uStack744;
  undefined8 uStack736;
  undefined8 uStack728;
  undefined8 uStack720;
  undefined8 uStack712;
  undefined8 uStack704;
  undefined8 uStack696;
  undefined8 uStack688;
  undefined8 uStack680;
  undefined8 uStack672;
  ulong uStack408;
  undefined8 *puStack392;
  undefined *puStack384;
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
  long lStack32;
  
  puStack392 = &uStack376;
  lStack32 = *(long *)(in_FS_OFFSET + 0x28);
  uStack304 = 0;
  uStack376 = 0x6a09e667f3bcc908;
  uStack368 = 0xbb67ae8584caa73b;
  uStack312 = 0;
  uStack360 = 0x3c6ef372fe94f82b;
  uStack296 = 0;
  uStack352 = 0xa54ff53a5f1d36f1;
  uStack344 = 0x510e527fade682d1;
  uStack336 = 0x9b05688c2b3e6c1f;
  uStack328 = 0x1f83d9abfb41bd6b;
  uStack320 = 0x5be0cd19137e2179;
  puStack384 = &UNK_0010770c;
  sha512_process_bytes(param_1,param_2,&uStack376);
  puStack384 = &UNK_00107714;
  sha512_conclude_ctx(&uStack376);
  puStack384 = &UNK_0010771f;
  uVar1 = sha512_read_ctx(&uStack376,param_3);
  if (lStack32 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
  puStack384 = &UNK_00107741;
  func_0x00101690();
  puVar11 = &uStack752;
  uStack408 = *(ulong *)(in_FS_OFFSET + 0x28);
  uStack680 = 0;
  uStack752 = 0xcbbb9d5dc1059ed8;
  uStack744 = 0x629a292a367cd507;
  uStack688 = 0;
  uStack736 = 0x9159015a3070dd17;
  uStack672 = 0;
  uStack728 = 0x152fecd8f70e5939;
  uStack720 = 0x67332667ffc00b31;
  uStack712 = 0x8eb44a8768581511;
  uStack704 = 0xdb0c2e0d64f98fa7;
  uStack696 = 0x47b5481dbefa4fa4;
  puStack384 = (undefined *)param_3;
  sha512_process_bytes();
  sha512_conclude_ctx(&uStack752);
  pbVar10 = extraout_RDX;
  uVar1 = sha384_read_ctx();
  pcVar4 = (code *)(uStack408 ^ *(ulong *)(in_FS_OFFSET + 0x28));
  if (pcVar4 == (code *)0x0) {
    return uVar1;
  }
  func_0x00101690();
  pcVar6 = extraout_RDX_00;
  puVar7 = &uStack752;
  puVar8 = &uStack752;
  pbVar9 = extraout_RDX;
  while( true ) {
    pcVar5 = pcVar4;
    *(long *)((undefined *)puVar8 + -8) = unaff_R15;
    *(code **)((undefined *)puVar8 + -0x10) = unaff_R14;
    *(undefined **)((undefined *)puVar8 + -0x18) = unaff_R13;
    *(code **)((undefined *)puVar8 + -0x20) = unaff_R12;
    *(byte **)((undefined *)puVar8 + -0x28) = pbVar9;
    *(undefined8 **)((undefined *)puVar8 + -0x30) = puVar7;
    pbVar12 = (byte *)0x8048;
    *(undefined8 *)((undefined *)puVar8 + -0x40) = *(undefined8 *)(in_FS_OFFSET + 0x28);
    *(byte **)((undefined *)puVar8 + -0x1a0) = pbVar10;
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
    puVar7 = puVar11;
    puVar8 = (undefined8 *)((undefined *)puVar8 + -0x1a8);
    puVar11 = (undefined8 *)pbVar12;
    unaff_R14 = pcVar5;
  }
  unaff_R13 = (undefined *)puVar8 + -0x198;
  *(undefined8 *)((undefined *)puVar8 + -0x1b0) = 0x1078a3;
  (*pcVar6)(unaff_R13);
  do {
    unaff_R15 = 0;
code_r0x001078d9:
    pbVar9 = pbVar2;
    pbVar12 = pbVar2;
    unaff_R12 = (code *)0x8000;
    if ((*(byte *)puVar11 & 0x10) != 0) goto code_r0x001078de;
    pbVar10 = (byte *)0x1;
    *(undefined8 *)((undefined *)puVar8 + -0x1b0) = 0x1078c8;
    lVar3 = func_0x00101620(pbVar2 + unaff_R15,1,0x8000 - unaff_R15,puVar11);
    unaff_R15 = unaff_R15 + lVar3;
    if (unaff_R15 != 0x8000) break;
    *(undefined8 *)((undefined *)puVar8 + -0x1b0) = 0x107930;
    sha512_process_block(pbVar2,0x8000,unaff_R13);
  } while( true );
  if (lVar3 == 0) {
    if ((*(byte *)puVar11 & 0x20) == 0) {
code_r0x001078de:
      if (unaff_R15 != 0) {
        *(undefined8 *)((undefined *)puVar8 + -0x1b0) = 0x10795e;
        sha512_process_bytes(pbVar2,unaff_R15,unaff_R13);
      }
      pbVar10 = *(byte **)((undefined *)puVar8 + -0x1a0);
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

