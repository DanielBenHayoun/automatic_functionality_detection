
undefined8 sha256_buffer(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  undefined8 uStack432;
  undefined8 uStack424;
  undefined8 uStack416;
  undefined8 uStack408;
  undefined8 uStack400;
  undefined8 uStack392;
  ulong uStack248;
  undefined8 *puStack232;
  undefined *puStack224;
  undefined8 uStack216;
  undefined8 uStack208;
  undefined8 uStack200;
  undefined8 uStack192;
  undefined8 uStack184;
  undefined8 uStack176;
  long lStack32;
  
  puStack232 = &uStack216;
  lStack32 = *(long *)(in_FS_OFFSET + 0x28);
  uStack184 = 0;
  uStack216 = 0xbb67ae856a09e667;
  uStack208 = 0xa54ff53a3c6ef372;
  uStack176 = 0;
  uStack200 = 0x9b05688c510e527f;
  uStack192 = 0x5be0cd191f83d9ab;
  puStack224 = &UNK_00106297;
  sha256_process_bytes(param_1,param_2,&uStack216);
  puStack224 = &UNK_0010629f;
  sha256_conclude_ctx(&uStack216);
  puStack224 = &UNK_001062aa;
  uVar1 = sha256_read_ctx(&uStack216,param_3);
  if (lStack32 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
  puStack224 = &UNK_001062cc;
  func_0x00101690();
  puVar11 = &uStack432;
  uStack248 = *(ulong *)(in_FS_OFFSET + 0x28);
  uStack400 = 0;
  uStack432 = 0x367cd507c1059ed8;
  uStack424 = 0xf70e59393070dd17;
  uStack392 = 0;
  uStack416 = 0x68581511ffc00b31;
  uStack408 = 0xbefa4fa464f98fa7;
  puStack224 = (undefined *)param_3;
  sha256_process_bytes();
  sha256_conclude_ctx(&uStack432);
  pbVar10 = extraout_RDX;
  uVar1 = sha224_read_ctx();
  pcVar4 = (code *)(uStack248 ^ *(ulong *)(in_FS_OFFSET + 0x28));
  if (pcVar4 == (code *)0x0) {
    return uVar1;
  }
  func_0x00101690();
  pcVar6 = extraout_RDX_00;
  puVar7 = &uStack432;
  puVar8 = &uStack432;
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
    *(byte **)((undefined *)puVar8 + -0x100) = pbVar10;
    *(undefined8 *)((undefined *)puVar8 + -0x110) = 0x1063bc;
    pbVar2 = (byte *)func_0x00101790();
    if (pbVar2 != (byte *)0x0) break;
    uVar1 = 1;
    unaff_R12 = pcVar6;
code_r0x00106428:
    if (*(long *)((undefined *)puVar8 + -0x40) == *(long *)(in_FS_OFFSET + 0x28)) {
      return uVar1;
    }
    *(undefined8 *)((undefined *)puVar8 + -0x110) = 0x10649c;
    func_0x00101690();
    pcVar6 = sha256_init_ctx;
    pcVar4 = sha256_finish_ctx;
    puVar7 = puVar11;
    puVar8 = (undefined8 *)((undefined *)puVar8 + -0x108);
    puVar11 = (undefined8 *)pbVar12;
    unaff_R14 = pcVar5;
  }
  unaff_R13 = (undefined *)puVar8 + -0xf8;
  *(undefined8 *)((undefined *)puVar8 + -0x110) = 0x1063d3;
  (*pcVar6)(unaff_R13);
  do {
    unaff_R15 = 0;
code_r0x00106409:
    pbVar9 = pbVar2;
    pbVar12 = pbVar2;
    unaff_R12 = (code *)0x8000;
    if ((*(byte *)puVar11 & 0x10) != 0) goto code_r0x0010640e;
    pbVar10 = (byte *)0x1;
    *(undefined8 *)((undefined *)puVar8 + -0x110) = 0x1063f8;
    lVar3 = func_0x00101620(pbVar2 + unaff_R15,1,0x8000 - unaff_R15,puVar11);
    unaff_R15 = unaff_R15 + lVar3;
    if (unaff_R15 != 0x8000) break;
    *(undefined8 *)((undefined *)puVar8 + -0x110) = 0x106460;
    sha256_process_block(pbVar2,0x8000,unaff_R13);
  } while( true );
  if (lVar3 == 0) {
    if ((*(byte *)puVar11 & 0x20) == 0) {
code_r0x0010640e:
      if (unaff_R15 != 0) {
        *(undefined8 *)((undefined *)puVar8 + -0x110) = 0x10648e;
        sha256_process_bytes(pbVar2,unaff_R15,unaff_R13);
      }
      pbVar10 = *(byte **)((undefined *)puVar8 + -0x100);
      *(undefined8 *)((undefined *)puVar8 + -0x110) = 0x10641e;
      (*pcVar5)(unaff_R13);
      *(undefined8 *)((undefined *)puVar8 + -0x110) = 0x106426;
      func_0x001015b0();
      uVar1 = 0;
    }
    else {
      *(undefined8 *)((undefined *)puVar8 + -0x110) = 0x106475;
      func_0x001015b0();
      uVar1 = 1;
    }
    goto code_r0x00106428;
  }
  goto code_r0x00106409;
}

