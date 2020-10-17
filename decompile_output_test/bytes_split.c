
void bytes_split(ulong param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 extraout_RDX;
  byte **ppbVar7;
  undefined *puVar8;
  byte bVar9;
  byte *pbVar10;
  ulong uVar11;
  byte *pbVar12;
  ulong uVar13;
  long in_FS_OFFSET;
  bool bVar14;
  bool bVar15;
  byte bVar16;
  byte *pbStack272;
  undefined *puStack264;
  byte *apbStack256 [5];
  undefined *puStack216;
  undefined *puStack208;
  undefined *puStack200;
  undefined *puStack192;
  undefined *puStack184;
  undefined8 uStack176;
  undefined8 uStack168;
  undefined8 uStack152;
  undefined8 uStack136;
  ulong uStack128;
  ulong uStack120;
  undefined *puStack112;
  ulong uStack96;
  ulong uStack88;
  bool bStack74;
  bool bStack73;
  ulong uStack72;
  ulong uStack64;
  
  bVar16 = 0;
  uVar13 = 0;
  uStack128 = 1;
  bVar15 = true;
  uVar11 = param_5;
  uStack120 = param_1;
  uStack72 = param_2;
  uStack64 = param_3;
  if (param_4 == 0xffffffffffffffff) goto code_r0x00104d64;
  bStack73 = param_4 < param_3;
  if (param_4 < param_1) goto code_r0x00104da6;
  do {
    bVar14 = param_5 == 0;
    uVar11 = uStack72;
    do {
      bVar9 = (byte)uStack128 | bVar15;
      uStack128 = uStack128 & 0xffffffffffffff00 | (ulong)bVar9;
      if (bVar9 != 0) {
        puStack112 = &UNK_00104d3a;
        uStack96 = uVar11;
        uStack88 = param_5;
        bStack74 = bVar14;
        uVar1 = cwrite((ulong)bVar15,uVar11,uStack120);
        uStack128 = (ulong)uVar1;
        param_5 = uStack88;
        uVar11 = uStack96;
        bVar14 = bStack74;
      }
      uVar13 = uVar13 + bVar15;
      bVar15 = (bool)(uVar13 < param_5 | bVar14);
      if ((bVar15 == false) && ((char)uStack128 == '\0')) {
        return;
      }
      param_4 = param_4 - uStack120;
      uVar11 = uVar11 + uStack120;
      uStack120 = param_1;
    } while (param_1 <= param_4);
    if (param_4 != 0) goto code_r0x00104de0;
    while( true ) {
      uVar11 = param_5;
      if (bStack73 != false) {
        lVar5 = uVar13 + 1;
        if (param_5 <= uVar13) {
          return;
        }
        do {
          lVar5 = lVar5 + 1;
          puStack112 = &UNK_00104e72;
          cwrite(1,0,0);
        } while (param_5 + 1 != lVar5);
        return;
      }
code_r0x00104d64:
      uStack96 = uVar11;
      if ((char)uStack128 == '\0') {
        puStack112 = &UNK_00104e34;
        lVar5 = func_0x00101ce0(0,uStack120,1);
        if (lVar5 != -1) {
          bVar15 = true;
          uStack120 = param_1;
        }
      }
      puStack112 = &UNK_00104d83;
      param_4 = safe_read(0,uStack72,uStack64);
      if (param_4 == 0xffffffffffffffff) {
        puStack112 = &UNK_00104e99;
        uStack136 = quotearg_n_style_colon(0,3,infile);
        puStack112 = &UNK_00104ea1;
        puVar3 = (uint *)func_0x00101b70();
        uVar11 = 1;
        puStack112 = &UNK_00104eb9;
        func_0x00101ea0(1,(ulong)*puVar3,&UNK_00108ddc,uStack136);
        puVar8 = program_name;
        uVar6 = 5;
        uStack152 = *(undefined8 *)(in_FS_OFFSET + 0x28);
        puStack112 = (undefined *)param_4;
        if ((int)uVar11 == 0) goto code_r0x00104f1d;
        uVar6 = func_0x00101c40(0,&UNK_00108ff8,5);
        func_0x00101f40(stderr,1,uVar6,puVar8);
        goto code_r0x00104f16;
      }
      bStack73 = param_4 == 0;
      param_5 = uStack96;
      if (uStack120 <= param_4) break;
code_r0x00104da6:
      if (param_4 != 0) {
        uVar11 = uStack72;
        if ((byte)((byte)uStack128 | bVar15) == 0) {
          uStack128 = 0;
          bVar15 = param_5 == uVar13;
          if (bVar15) {
            return;
          }
        }
        else {
code_r0x00104de0:
          puStack112 = &UNK_00104df3;
          uStack96 = param_5;
          uVar1 = cwrite((ulong)bVar15,uVar11,param_4);
          uStack128 = (ulong)uVar1;
          uVar13 = uVar13 + bVar15;
          bVar15 = (bool)(uStack96 == uVar13 & ((byte)uVar1 ^ 1));
          param_5 = uStack96;
          if (bVar15 != false) {
            return;
          }
        }
        uStack120 = uStack120 - param_4;
      }
    }
  } while( true );
code_r0x00104f16:
  func_0x00101f20(uVar11 & 0xffffffff);
  uVar6 = extraout_RDX;
code_r0x00104f1d:
  uVar6 = func_0x00101c40(0,&UNK_00109020,uVar6);
  func_0x00101e80(1,uVar6,puVar8);
  uVar6 = stdout;
  uVar4 = func_0x00101c40(0,&UNK_00109048,5);
  func_0x00101d80(uVar4,uVar6);
  uVar6 = stdout;
  uVar4 = func_0x00101c40(0,&UNK_001090b8,5);
  func_0x00101d80(uVar4,uVar6);
  uVar6 = stdout;
  uVar4 = func_0x00101c40(0,&UNK_001090f0,5);
  func_0x00101d80(uVar4,uVar6);
  uVar6 = func_0x00101c40(0,&UNK_00109140,5);
  func_0x00101f40(stdout,1,uVar6,2);
  uVar6 = stdout;
  uVar4 = func_0x00101c40(0,&UNK_00109588,5);
  func_0x00101d80(uVar4,uVar6);
  uVar6 = stdout;
  uVar4 = func_0x00101c40(0,&UNK_00109600,5);
  func_0x00101d80(uVar4,uVar6);
  uVar6 = stdout;
  uVar4 = func_0x00101c40(0,&UNK_00109630,5);
  func_0x00101d80(uVar4,uVar6);
  uVar6 = stdout;
  uVar4 = func_0x00101c40(0,&UNK_00109668,5);
  func_0x00101d80(uVar4,uVar6);
  uVar6 = stdout;
  uVar4 = func_0x00101c40(0,&UNK_00109740,5);
  func_0x00101d80(uVar4,uVar6);
  uStack176 = 0;
  uStack168 = 0;
  pbStack272 = &UNK_00108bf9;
  apbStack256[4] = &UNK_00108c3a;
  puStack264 = &UNK_00108bfb;
  puStack208 = &UNK_00108c44;
  apbStack256[0] = &UNK_00108c73;
  puStack192 = &UNK_00108c4e;
  apbStack256[1] = &UNK_00108c0b;
  apbStack256[2] = &UNK_00108c21;
  apbStack256[3] = &UNK_00108c2b;
  puStack216 = &UNK_00108c2b;
  puStack200 = &UNK_00108c2b;
  puStack184 = &UNK_00108c2b;
  ppbVar7 = &pbStack272;
  do {
    ppbVar7 = ppbVar7;
    ppbVar7 = ppbVar7 + 2;
    pbVar12 = *ppbVar7;
    bVar15 = false;
    bVar14 = pbVar12 == (byte *)0x0;
    if (bVar14) break;
    lVar5 = 6;
    pbVar10 = &UNK_00108bf3;
    do {
      if (lVar5 == 0) break;
      lVar5 = lVar5 + -1;
      bVar15 = *pbVar10 < *pbVar12;
      bVar14 = *pbVar10 == *pbVar12;
      pbVar10 = pbVar10 + (ulong)bVar16 * -2 + 1;
      pbVar12 = pbVar12 + (ulong)bVar16 * -2 + 1;
    } while (bVar14);
  } while ((!bVar15 && !bVar14) != bVar15);
  pbVar12 = ppbVar7[3];
  if (pbVar12 == (byte *)0x0) {
    uVar6 = func_0x00101c40(0,&UNK_00108c58,5);
    func_0x00101e80(1,uVar6,&UNK_00108c6f,&UNK_00109898);
    lVar5 = func_0x00101e70(5,0);
    if ((lVar5 != 0) && (iVar2 = func_0x00101b80(lVar5,&UNK_00108c7d,3), iVar2 != 0)) {
      pbVar12 = &UNK_00108bf3;
      goto code_r0x001052c0;
    }
    pbVar12 = &UNK_00108bf3;
    puVar8 = &UNK_00108c15;
    uVar6 = func_0x00101c40(0,&UNK_00108c81,5);
    func_0x00101e80(1,uVar6,&UNK_00109898,&UNK_00108bf3);
  }
  else {
    uVar6 = func_0x00101c40(0,&UNK_00108c58,5);
    func_0x00101e80(1,uVar6,&UNK_00108c6f,&UNK_00109898);
    lVar5 = func_0x00101e70(5,0);
    if ((lVar5 != 0) && (iVar2 = func_0x00101b80(lVar5,&UNK_00108c7d,3), iVar2 != 0)) {
code_r0x001052c0:
      uVar6 = stdout;
      uVar4 = func_0x00101c40(0,&UNK_001098c0,5);
      func_0x00101d80(uVar4,uVar6);
    }
    uVar6 = func_0x00101c40(0,&UNK_00108c81,5);
    func_0x00101e80(1,uVar6,&UNK_00109898,&UNK_00108bf3);
    puVar8 = &UNK_0010a141;
    if (pbVar12 == &UNK_00108bf3) {
      puVar8 = &UNK_00108c15;
    }
  }
  uVar6 = func_0x00101c40(0,&UNK_00109908,5);
  func_0x00101e80(1,uVar6,pbVar12,puVar8);
  goto code_r0x00104f16;
}

