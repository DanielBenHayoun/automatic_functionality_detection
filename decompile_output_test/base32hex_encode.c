
ulong base32hex_encode(undefined8 param_1,undefined8 param_2,byte *param_3,long param_4,
                      undefined8 *param_5)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulong extraout_RDX;
  ulong extraout_RDX_00;
  ulong uVar9;
  undefined8 extraout_RDX_01;
  byte **ppbVar10;
  byte *pbVar11;
  undefined *puVar12;
  undefined4 *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  byte *pbVar16;
  long in_FS_OFFSET;
  bool bVar17;
  bool bVar18;
  byte bVar19;
  byte *pbStack288;
  undefined *puStack280;
  byte *apbStack272 [5];
  undefined *puStack232;
  undefined *puStack224;
  undefined *puStack216;
  undefined *puStack208;
  undefined *puStack200;
  undefined8 uStack192;
  undefined8 uStack184;
  undefined8 uStack168;
  undefined4 *puStack152;
  long lStack144;
  undefined8 *puStack136;
  undefined *puStack128;
  ulong uStack112;
  undefined1 *puStack104;
  undefined8 *puStack96;
  undefined4 *puStack80;
  undefined1 *puStack72;
  byte *pbStack64;
  long lStack56;
  
  bVar19 = 0;
  uVar4 = base32_encode();
  if (param_4 == 0) {
    return uVar4;
  }
  bVar1 = *param_3;
  if ((byte)(bVar1 - 0x32) < 0x29) {
    pbVar16 = param_3 + param_4;
    pbVar11 = param_3;
    do {
      param_3 = pbVar11 + 1;
      bVar1 = base32_norm_to_hex[(int)(char)bVar1 + -0x32];
      *pbVar11 = bVar1;
      if (param_3 == pbVar16) {
        return (ulong)bVar1;
      }
      bVar1 = *param_3;
      pbVar11 = param_3;
    } while ((byte)(bVar1 - 0x32) < 0x29);
  }
  puVar7 = __PRETTY_FUNCTION___7847;
  puVar12 = &UNK_0010733c;
  puStack80 = (undefined4 *)&UNK_00107349;
  func_0x001016d0(&UNK_00107349,&UNK_0010733c,0x1c2);
  puStack152 = *(undefined4 **)(puStack80 + 4);
  pbStack64 = param_3;
  lStack56 = param_4;
  if (*(ulong *)(puStack80 + 6) <= extraout_RDX && extraout_RDX != *(ulong *)(puStack80 + 6)) {
    lStack144 = extraout_RDX * 2;
    *(long *)(puStack80 + 6) = lStack144;
    if (lStack144 < 0) {
      puStack72 = &UNK_00102e73;
      puVar8 = puVar7;
      puVar14 = param_5;
      xalloc_die();
      lVar5 = *(long *)(puStack152 + 4);
      uVar9 = extraout_RDX_00;
      puStack72 = puVar7;
      if (*(ulong *)(puStack152 + 6) <= extraout_RDX_00 &&
          extraout_RDX_00 != *(ulong *)(puStack152 + 6)) {
        *(ulong *)(puStack152 + 6) = extraout_RDX_00 * 2;
        uStack112 = extraout_RDX_00;
        puStack104 = puVar8;
        puStack96 = puVar14;
        if ((long)(extraout_RDX_00 * 2) < 0) {
          puStack128 = &UNK_00102f51;
          puVar13 = puStack152;
          xalloc_die();
          puVar12 = program_name;
          uVar4 = 5;
          uStack168 = *(undefined8 *)(in_FS_OFFSET + 0x28);
          puStack136 = param_5;
          puStack128 = (undefined *)extraout_RDX;
          if ((int)puVar13 == 0) goto code_r0x00102fbd;
          uVar4 = func_0x00101630(0,&UNK_00107580,5);
          func_0x00101870(stderr,1,uVar4,puVar12);
          do {
            func_0x00101850((ulong)puVar13 & 0xffffffff);
            uVar4 = extraout_RDX_01;
code_r0x00102fbd:
            uVar4 = func_0x00101630(0,&UNK_00107369,uVar4);
            func_0x001017f0(1,uVar4,puVar12);
            uVar4 = stdout;
            uVar6 = func_0x00101630(0,&UNK_001075a8,5);
            func_0x00101730(uVar6,uVar4);
            uVar4 = stdout;
            uVar6 = func_0x00101630(0,&UNK_001075f0,5);
            func_0x00101730(uVar6,uVar4);
            uVar4 = stdout;
            uVar6 = func_0x00101630(0,&UNK_00107628,5);
            func_0x00101730(uVar6,uVar4);
            uVar4 = stdout;
            uVar6 = func_0x00101630(0,&UNK_00107678,5);
            func_0x00101730(uVar6,uVar4);
            uVar4 = stdout;
            uVar6 = func_0x00101630(0,&UNK_001076c0,5);
            func_0x00101730(uVar6,uVar4);
            uVar4 = stdout;
            uVar6 = func_0x00101630(0,&UNK_00107708,5);
            func_0x00101730(uVar6,uVar4);
            uVar4 = stdout;
            uVar6 = func_0x00101630(0,&UNK_00107750,5);
            func_0x00101730(uVar6,uVar4);
            uVar4 = stdout;
            uVar6 = func_0x00101630(0,&UNK_001077a0,5);
            func_0x00101730(uVar6,uVar4);
            uVar4 = stdout;
            uVar6 = func_0x00101630(0,&UNK_001077e0,5);
            func_0x00101730(uVar6,uVar4);
            uVar4 = stdout;
            uVar6 = func_0x00101630(0,&UNK_00107830,5);
            func_0x00101730(uVar6,uVar4);
            uVar4 = stdout;
            uVar6 = func_0x00101630(0,&UNK_00107880,5);
            func_0x00101730(uVar6,uVar4);
            uVar4 = stdout;
            uVar6 = func_0x00101630(0,&UNK_00107978,5);
            func_0x00101730(uVar6,uVar4);
            uVar4 = stdout;
            uVar6 = func_0x00101630(0,&UNK_00107a58,5);
            func_0x00101730(uVar6,uVar4);
            uVar4 = stdout;
            uVar6 = func_0x00101630(0,&UNK_00107a88,5);
            func_0x00101730(uVar6,uVar4);
            uVar4 = stdout;
            uVar6 = func_0x00101630(0,&UNK_00107ac0,5);
            func_0x00101730(uVar6,uVar4);
            uStack192 = 0;
            uStack184 = 0;
            pbStack288 = &UNK_00107387;
            apbStack272[4] = &UNK_001073c8;
            puStack280 = &UNK_00107389;
            puStack224 = &UNK_001073d2;
            apbStack272[0] = &UNK_00107401;
            puStack208 = &UNK_001073dc;
            apbStack272[1] = &UNK_00107399;
            apbStack272[2] = &UNK_001073af;
            apbStack272[3] = &UNK_001073b9;
            puStack232 = &UNK_001073b9;
            puStack216 = &UNK_001073b9;
            puStack200 = &UNK_001073b9;
            ppbVar10 = &pbStack288;
            do {
              ppbVar10 = ppbVar10;
              ppbVar10 = ppbVar10 + 2;
              pbVar16 = *ppbVar10;
              bVar17 = false;
              bVar18 = pbVar16 == (byte *)0x0;
              if (bVar18) break;
              lVar5 = 7;
              pbVar11 = &UNK_00107362;
              do {
                if (lVar5 == 0) break;
                lVar5 = lVar5 + -1;
                bVar17 = *pbVar11 < *pbVar16;
                bVar18 = *pbVar11 == *pbVar16;
                pbVar11 = pbVar11 + (ulong)bVar19 * -2 + 1;
                pbVar16 = pbVar16 + (ulong)bVar19 * -2 + 1;
              } while (bVar18);
            } while ((!bVar17 && !bVar18) != bVar17);
            pbVar16 = ppbVar10[3];
            if (pbVar16 == (byte *)0x0) {
              uVar4 = func_0x00101630(0,&UNK_001073e6,5);
              func_0x001017f0(1,uVar4,&UNK_001073fd,&UNK_00107b88);
              lVar5 = func_0x001017e0(5,0);
              if ((lVar5 != 0) && (iVar3 = func_0x001015c0(lVar5,&UNK_0010740b,3), iVar3 != 0)) {
                pbVar16 = &UNK_00107362;
                goto code_r0x00103430;
              }
              pbVar16 = &UNK_00107362;
              puVar12 = &UNK_001073a3;
              uVar4 = func_0x00101630(0,&UNK_0010740f,5);
              func_0x001017f0(1,uVar4,&UNK_00107b88,&UNK_00107362);
            }
            else {
              uVar4 = func_0x00101630(0,&UNK_001073e6,5);
              func_0x001017f0(1,uVar4,&UNK_001073fd,&UNK_00107b88);
              lVar5 = func_0x001017e0(5,0);
              if ((lVar5 != 0) && (iVar3 = func_0x001015c0(lVar5,&UNK_0010740b,3), iVar3 != 0)) {
code_r0x00103430:
                uVar4 = stdout;
                uVar6 = func_0x00101630(0,&UNK_00107bb0,5);
                func_0x00101730(uVar6,uVar4);
              }
              uVar4 = func_0x00101630(0,&UNK_0010740f,5);
              func_0x001017f0(1,uVar4,&UNK_00107b88,&UNK_00107362);
              puVar12 = &UNK_001085c1;
              if (pbVar16 == &UNK_00107362) {
                puVar12 = &UNK_001073a3;
              }
            }
            uVar4 = func_0x00101630(0,&UNK_00107bf8,5);
            func_0x001017f0(1,uVar4,pbVar16,puVar12);
          } while( true );
        }
        puStack128 = &UNK_00102f34;
        lVar5 = xrealloc();
        *(long *)(puStack152 + 4) = lVar5;
        uVar9 = uStack112;
      }
      if (uVar9 != 0) {
        uVar15 = 0;
        do {
          while( true ) {
            cVar2 = *(char *)(lStack144 + uVar15);
            if ((9 < (byte)(cVar2 - 0x30U)) && (0x15 < (byte)(cVar2 + 0xbfU))) break;
            *(undefined *)(lVar5 + uVar15) = base32_hex_to_norm[(int)cVar2 + -0x30];
            uVar15 = uVar15 + 1;
            if (uVar9 == uVar15) goto code_r0x00102eee;
          }
          *(char *)(lVar5 + uVar15) = cVar2;
          uVar15 = uVar15 + 1;
        } while (uVar9 != uVar15);
code_r0x00102eee:
        lVar5 = *(long *)(puStack152 + 4);
      }
      puStack128 = &UNK_00102efe;
      uVar4 = base32_decode_ctx(puStack152 + 1,lVar5);
      *puStack152 = puStack152[1];
      return uVar4;
    }
    puStack72 = &UNK_00102e62;
    puStack152 = (undefined4 *)xrealloc();
    *(undefined4 **)(puStack80 + 4) = puStack152;
  }
  puStack72 = &UNK_00102dc0;
  func_0x00101760(puStack152,puVar12,extraout_RDX);
  pbVar16 = *(byte **)(puStack80 + 4);
  if (extraout_RDX != 0) {
    bVar19 = *pbVar16;
    pbVar11 = pbVar16 + extraout_RDX;
    while( true ) {
      if ((bVar19 & 0xfb) == 0x2b) {
        *param_5 = 0;
        return 0;
      }
      if (bVar19 == 0x2d) {
        *pbVar16 = 0x2b;
      }
      else {
        if (bVar19 == 0x5f) {
          *pbVar16 = 0x2f;
        }
      }
      if (pbVar16 + 1 == pbVar11) break;
      pbVar16 = pbVar16 + 1;
      bVar19 = *pbVar16;
    }
    pbVar16 = *(byte **)(puStack80 + 4);
  }
  puStack72 = &UNK_00102e23;
  uVar4 = base64_decode_ctx(puStack80 + 1,pbVar16,extraout_RDX,puVar7,param_5);
  *puStack80 = puStack80[1];
  return uVar4;
}

