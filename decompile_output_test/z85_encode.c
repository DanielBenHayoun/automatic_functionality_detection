
ulong z85_encode(byte *param_1,long param_2,long param_3,ulong param_4,undefined8 *param_5)

{
  byte bVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *extraout_RDX;
  ulong extraout_RDX_00;
  ulong extraout_RDX_01;
  ulong uVar9;
  undefined8 extraout_RDX_02;
  byte **ppbVar10;
  undefined1 *unaff_RBX;
  ulong unaff_RBP;
  undefined *puVar11;
  byte *pbVar12;
  undefined4 *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long lVar16;
  ulong unaff_R12;
  byte *pbVar17;
  long unaff_R13;
  long in_FS_OFFSET;
  bool bVar18;
  bool bVar19;
  byte bVar20;
  byte *pbStack344;
  undefined *puStack336;
  byte *apbStack328 [5];
  undefined *puStack288;
  undefined *puStack280;
  undefined *puStack272;
  undefined *puStack264;
  undefined *puStack256;
  undefined8 uStack248;
  undefined8 uStack240;
  undefined8 uStack224;
  undefined4 *puStack208;
  long lStack200;
  undefined8 *puStack192;
  undefined *puStack184;
  ulong uStack168;
  undefined1 *puStack160;
  undefined8 *puStack152;
  undefined4 *puStack136;
  undefined1 *puStack128;
  byte *pbStack120;
  ulong uStack112;
  ulong uStack104;
  long lStack96;
  undefined1 *puStack72;
  undefined *puStack64;
  byte abStack52 [4];
  long lStack48;
  
  bVar20 = 0;
  lStack48 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 != 0) {
    abStack52[0] = *param_1;
    lVar16 = 0;
    unaff_RBX = z85_encoding;
    lVar3 = 1;
    pbVar17 = param_1 + 1;
    while (param_1 + param_2 != pbVar17) {
      param_5 = (undefined8 *)(ulong)*pbVar17;
      iVar8 = (int)lVar3 + 1;
      abStack52[lVar3] = *pbVar17;
      if (iVar8 == 4) {
        unaff_RBP = lVar16 + 4;
        unaff_R12 = lVar16 - 1;
        unaff_R13 = param_3 - lVar16;
        param_5 = (undefined8 *)
                  (ulong)((uint)abStack52[2] * 0x100 +
                          (uint)abStack52[0] * 0x1000000 + (uint)abStack52[1] * 0x10000 +
                         (uint)abStack52[3]);
        do {
          iVar8 = (int)param_5;
          param_5 = (undefined8 *)((ulong)param_5 / 0x55);
          if (unaff_RBP < param_4) {
            *(undefined *)(unaff_R13 + unaff_RBP) = z85_encoding[iVar8 + (int)param_5 * -0x55];
          }
          unaff_RBP = unaff_RBP - 1;
        } while (unaff_RBP != unaff_R12);
        param_3 = param_3 + 5;
        lVar16 = lVar16 + 5;
        iVar8 = 0;
      }
      lVar3 = (long)iVar8;
      pbVar17 = pbVar17 + 1;
    }
    if ((int)lVar3 != 0) {
      puStack64 = &UNK_00102cf2;
      uVar4 = func_0x00101630(0,&UNK_00107548,5);
      puStack64 = &UNK_00102d03;
      func_0x00101810(1,0,uVar4);
      goto code_r0x00102d03;
    }
  }
  if (lStack48 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
code_r0x00102d03:
  puStack64 = &UNK_00102d08;
  func_0x00101660();
  puStack72 = unaff_RBX;
  puStack64 = (undefined *)unaff_RBP;
  uVar4 = base32_encode();
  if (param_4 == 0) {
    return uVar4;
  }
  bVar1 = *extraout_RDX;
  pbStack120 = extraout_RDX;
  if ((byte)(bVar1 - 0x32) < 0x29) {
    pbVar17 = extraout_RDX;
    do {
      pbStack120 = pbVar17 + 1;
      bVar1 = base32_norm_to_hex[(int)(char)bVar1 + -0x32];
      *pbVar17 = bVar1;
      if (pbStack120 == extraout_RDX + param_4) {
        return (ulong)bVar1;
      }
      bVar1 = *pbStack120;
      pbVar17 = pbStack120;
    } while ((byte)(bVar1 - 0x32) < 0x29);
  }
  puVar6 = __PRETTY_FUNCTION___7847;
  puVar11 = &UNK_0010733c;
  puStack136 = (undefined4 *)&UNK_00107349;
  func_0x001016d0(&UNK_00107349,&UNK_0010733c,0x1c2);
  puStack208 = *(undefined4 **)(puStack136 + 4);
  uStack112 = param_4;
  uStack104 = unaff_R12;
  lStack96 = unaff_R13;
  if (*(ulong *)(puStack136 + 6) <= extraout_RDX_00 && extraout_RDX_00 != *(ulong *)(puStack136 + 6)
     ) {
    lStack200 = extraout_RDX_00 * 2;
    *(long *)(puStack136 + 6) = lStack200;
    if (lStack200 < 0) {
      puStack128 = &UNK_00102e73;
      puVar7 = puVar6;
      puVar14 = param_5;
      xalloc_die();
      lVar3 = *(long *)(puStack208 + 4);
      uVar9 = extraout_RDX_01;
      puStack128 = puVar6;
      if (*(ulong *)(puStack208 + 6) <= extraout_RDX_01 &&
          extraout_RDX_01 != *(ulong *)(puStack208 + 6)) {
        *(ulong *)(puStack208 + 6) = extraout_RDX_01 * 2;
        uStack168 = extraout_RDX_01;
        puStack160 = puVar7;
        puStack152 = puVar14;
        if ((long)(extraout_RDX_01 * 2) < 0) {
          puStack184 = &UNK_00102f51;
          puVar13 = puStack208;
          xalloc_die();
          puVar11 = program_name;
          uVar4 = 5;
          uStack224 = *(undefined8 *)(in_FS_OFFSET + 0x28);
          puStack192 = param_5;
          puStack184 = (undefined *)extraout_RDX_00;
          if ((int)puVar13 == 0) goto code_r0x00102fbd;
          uVar4 = func_0x00101630(0,&UNK_00107580,5);
          func_0x00101870(stderr,1,uVar4,puVar11);
          do {
            func_0x00101850((ulong)puVar13 & 0xffffffff);
            uVar4 = extraout_RDX_02;
code_r0x00102fbd:
            uVar4 = func_0x00101630(0,&UNK_00107369,uVar4);
            func_0x001017f0(1,uVar4,puVar11);
            uVar4 = stdout;
            uVar5 = func_0x00101630(0,&UNK_001075a8,5);
            func_0x00101730(uVar5,uVar4);
            uVar4 = stdout;
            uVar5 = func_0x00101630(0,&UNK_001075f0,5);
            func_0x00101730(uVar5,uVar4);
            uVar4 = stdout;
            uVar5 = func_0x00101630(0,&UNK_00107628,5);
            func_0x00101730(uVar5,uVar4);
            uVar4 = stdout;
            uVar5 = func_0x00101630(0,&UNK_00107678,5);
            func_0x00101730(uVar5,uVar4);
            uVar4 = stdout;
            uVar5 = func_0x00101630(0,&UNK_001076c0,5);
            func_0x00101730(uVar5,uVar4);
            uVar4 = stdout;
            uVar5 = func_0x00101630(0,&UNK_00107708,5);
            func_0x00101730(uVar5,uVar4);
            uVar4 = stdout;
            uVar5 = func_0x00101630(0,&UNK_00107750,5);
            func_0x00101730(uVar5,uVar4);
            uVar4 = stdout;
            uVar5 = func_0x00101630(0,&UNK_001077a0,5);
            func_0x00101730(uVar5,uVar4);
            uVar4 = stdout;
            uVar5 = func_0x00101630(0,&UNK_001077e0,5);
            func_0x00101730(uVar5,uVar4);
            uVar4 = stdout;
            uVar5 = func_0x00101630(0,&UNK_00107830,5);
            func_0x00101730(uVar5,uVar4);
            uVar4 = stdout;
            uVar5 = func_0x00101630(0,&UNK_00107880,5);
            func_0x00101730(uVar5,uVar4);
            uVar4 = stdout;
            uVar5 = func_0x00101630(0,&UNK_00107978,5);
            func_0x00101730(uVar5,uVar4);
            uVar4 = stdout;
            uVar5 = func_0x00101630(0,&UNK_00107a58,5);
            func_0x00101730(uVar5,uVar4);
            uVar4 = stdout;
            uVar5 = func_0x00101630(0,&UNK_00107a88,5);
            func_0x00101730(uVar5,uVar4);
            uVar4 = stdout;
            uVar5 = func_0x00101630(0,&UNK_00107ac0,5);
            func_0x00101730(uVar5,uVar4);
            uStack248 = 0;
            uStack240 = 0;
            pbStack344 = &UNK_00107387;
            apbStack328[4] = &UNK_001073c8;
            puStack336 = &UNK_00107389;
            puStack280 = &UNK_001073d2;
            apbStack328[0] = &UNK_00107401;
            puStack264 = &UNK_001073dc;
            apbStack328[1] = &UNK_00107399;
            apbStack328[2] = &UNK_001073af;
            apbStack328[3] = &UNK_001073b9;
            puStack288 = &UNK_001073b9;
            puStack272 = &UNK_001073b9;
            puStack256 = &UNK_001073b9;
            ppbVar10 = &pbStack344;
            do {
              ppbVar10 = ppbVar10;
              ppbVar10 = ppbVar10 + 2;
              pbVar17 = *ppbVar10;
              bVar18 = false;
              bVar19 = pbVar17 == (byte *)0x0;
              if (bVar19) break;
              lVar3 = 7;
              pbVar12 = &UNK_00107362;
              do {
                if (lVar3 == 0) break;
                lVar3 = lVar3 + -1;
                bVar18 = *pbVar12 < *pbVar17;
                bVar19 = *pbVar12 == *pbVar17;
                pbVar12 = pbVar12 + (ulong)bVar20 * -2 + 1;
                pbVar17 = pbVar17 + (ulong)bVar20 * -2 + 1;
              } while (bVar19);
            } while ((!bVar18 && !bVar19) != bVar18);
            pbVar17 = ppbVar10[3];
            if (pbVar17 == (byte *)0x0) {
              uVar4 = func_0x00101630(0,&UNK_001073e6,5);
              func_0x001017f0(1,uVar4,&UNK_001073fd,&UNK_00107b88);
              lVar3 = func_0x001017e0(5,0);
              if ((lVar3 != 0) && (iVar8 = func_0x001015c0(lVar3,&UNK_0010740b,3), iVar8 != 0)) {
                pbVar17 = &UNK_00107362;
                goto code_r0x00103430;
              }
              pbVar17 = &UNK_00107362;
              puVar11 = &UNK_001073a3;
              uVar4 = func_0x00101630(0,&UNK_0010740f,5);
              func_0x001017f0(1,uVar4,&UNK_00107b88,&UNK_00107362);
            }
            else {
              uVar4 = func_0x00101630(0,&UNK_001073e6,5);
              func_0x001017f0(1,uVar4,&UNK_001073fd,&UNK_00107b88);
              lVar3 = func_0x001017e0(5,0);
              if ((lVar3 != 0) && (iVar8 = func_0x001015c0(lVar3,&UNK_0010740b,3), iVar8 != 0)) {
code_r0x00103430:
                uVar4 = stdout;
                uVar5 = func_0x00101630(0,&UNK_00107bb0,5);
                func_0x00101730(uVar5,uVar4);
              }
              uVar4 = func_0x00101630(0,&UNK_0010740f,5);
              func_0x001017f0(1,uVar4,&UNK_00107b88,&UNK_00107362);
              puVar11 = &UNK_001085c1;
              if (pbVar17 == &UNK_00107362) {
                puVar11 = &UNK_001073a3;
              }
            }
            uVar4 = func_0x00101630(0,&UNK_00107bf8,5);
            func_0x001017f0(1,uVar4,pbVar17,puVar11);
          } while( true );
        }
        puStack184 = &UNK_00102f34;
        lVar3 = xrealloc();
        *(long *)(puStack208 + 4) = lVar3;
        uVar9 = uStack168;
      }
      if (uVar9 != 0) {
        uVar15 = 0;
        do {
          while( true ) {
            cVar2 = *(char *)(lStack200 + uVar15);
            if ((9 < (byte)(cVar2 - 0x30U)) && (0x15 < (byte)(cVar2 + 0xbfU))) break;
            *(undefined *)(lVar3 + uVar15) = base32_hex_to_norm[(int)cVar2 + -0x30];
            uVar15 = uVar15 + 1;
            if (uVar9 == uVar15) goto code_r0x00102eee;
          }
          *(char *)(lVar3 + uVar15) = cVar2;
          uVar15 = uVar15 + 1;
        } while (uVar9 != uVar15);
code_r0x00102eee:
        lVar3 = *(long *)(puStack208 + 4);
      }
      puStack184 = &UNK_00102efe;
      uVar4 = base32_decode_ctx(puStack208 + 1,lVar3);
      *puStack208 = puStack208[1];
      return uVar4;
    }
    puStack128 = &UNK_00102e62;
    puStack208 = (undefined4 *)xrealloc();
    *(undefined4 **)(puStack136 + 4) = puStack208;
  }
  puStack128 = &UNK_00102dc0;
  func_0x00101760(puStack208,puVar11,extraout_RDX_00);
  pbVar17 = *(byte **)(puStack136 + 4);
  if (extraout_RDX_00 != 0) {
    bVar20 = *pbVar17;
    pbVar12 = pbVar17 + extraout_RDX_00;
    while( true ) {
      if ((bVar20 & 0xfb) == 0x2b) {
        *param_5 = 0;
        return 0;
      }
      if (bVar20 == 0x2d) {
        *pbVar17 = 0x2b;
      }
      else {
        if (bVar20 == 0x5f) {
          *pbVar17 = 0x2f;
        }
      }
      if (pbVar17 + 1 == pbVar12) break;
      pbVar17 = pbVar17 + 1;
      bVar20 = *pbVar17;
    }
    pbVar17 = *(byte **)(puStack136 + 4);
  }
  puStack128 = &UNK_00102e23;
  uVar4 = base64_decode_ctx(puStack136 + 1,pbVar17,extraout_RDX_00,puVar6,param_5);
  *puStack136 = puStack136[1];
  return uVar4;
}

