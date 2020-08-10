
undefined8
base64url_decode_ctx_wrapper
          (undefined4 *param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
          undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong extraout_RDX;
  ulong uVar6;
  undefined8 extraout_RDX_00;
  byte **ppbVar7;
  undefined *puVar8;
  byte *pbVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  byte *pbVar13;
  long in_FS_OFFSET;
  bool bVar14;
  bool bVar15;
  byte bVar16;
  byte *pbStack264;
  undefined *puStack256;
  byte *apbStack248 [5];
  undefined *puStack208;
  undefined *puStack200;
  undefined *puStack192;
  undefined *puStack184;
  undefined *puStack176;
  undefined8 uStack168;
  undefined8 uStack160;
  undefined8 uStack144;
  undefined4 *puStack128;
  long lStack120;
  undefined8 *puStack112;
  undefined *puStack104;
  ulong uStack88;
  undefined8 uStack80;
  undefined8 *puStack72;
  undefined4 *puStack56;
  undefined *puStack48;
  
  bVar16 = 0;
  puStack128 = *(undefined4 **)(param_1 + 4);
  if (*(ulong *)(param_1 + 6) <= param_3 && param_3 != *(ulong *)(param_1 + 6)) {
    lStack120 = param_3 * 2;
    *(long *)(param_1 + 6) = lStack120;
    if (lStack120 < 0) {
      puStack48 = &UNK_00102e73;
      uVar3 = param_4;
      puVar11 = param_5;
      xalloc_die();
      lVar4 = *(long *)(puStack128 + 4);
      uVar6 = extraout_RDX;
      puStack56 = param_1;
      puStack48 = (undefined *)param_4;
      if (*(ulong *)(puStack128 + 6) <= extraout_RDX && extraout_RDX != *(ulong *)(puStack128 + 6))
      {
        *(ulong *)(puStack128 + 6) = extraout_RDX * 2;
        uStack88 = extraout_RDX;
        uStack80 = uVar3;
        puStack72 = puVar11;
        if ((long)(extraout_RDX * 2) < 0) {
          puStack104 = &UNK_00102f51;
          puVar10 = puStack128;
          xalloc_die();
          puVar8 = program_name;
          uVar3 = 5;
          uStack144 = *(undefined8 *)(in_FS_OFFSET + 0x28);
          puStack112 = param_5;
          puStack104 = (undefined *)param_3;
          if ((int)puVar10 == 0) goto code_r0x00102fbd;
          uVar3 = func_0x00101630(0,&UNK_00107580,5);
          func_0x00101870(stderr,1,uVar3,puVar8);
          do {
            func_0x00101850((ulong)puVar10 & 0xffffffff);
            uVar3 = extraout_RDX_00;
code_r0x00102fbd:
            uVar3 = func_0x00101630(0,&UNK_00107369,uVar3);
            func_0x001017f0(1,uVar3,puVar8);
            uVar3 = stdout;
            uVar5 = func_0x00101630(0,&UNK_001075a8,5);
            func_0x00101730(uVar5,uVar3);
            uVar3 = stdout;
            uVar5 = func_0x00101630(0,&UNK_001075f0,5);
            func_0x00101730(uVar5,uVar3);
            uVar3 = stdout;
            uVar5 = func_0x00101630(0,&UNK_00107628,5);
            func_0x00101730(uVar5,uVar3);
            uVar3 = stdout;
            uVar5 = func_0x00101630(0,&UNK_00107678,5);
            func_0x00101730(uVar5,uVar3);
            uVar3 = stdout;
            uVar5 = func_0x00101630(0,&UNK_001076c0,5);
            func_0x00101730(uVar5,uVar3);
            uVar3 = stdout;
            uVar5 = func_0x00101630(0,&UNK_00107708,5);
            func_0x00101730(uVar5,uVar3);
            uVar3 = stdout;
            uVar5 = func_0x00101630(0,&UNK_00107750,5);
            func_0x00101730(uVar5,uVar3);
            uVar3 = stdout;
            uVar5 = func_0x00101630(0,&UNK_001077a0,5);
            func_0x00101730(uVar5,uVar3);
            uVar3 = stdout;
            uVar5 = func_0x00101630(0,&UNK_001077e0,5);
            func_0x00101730(uVar5,uVar3);
            uVar3 = stdout;
            uVar5 = func_0x00101630(0,&UNK_00107830,5);
            func_0x00101730(uVar5,uVar3);
            uVar3 = stdout;
            uVar5 = func_0x00101630(0,&UNK_00107880,5);
            func_0x00101730(uVar5,uVar3);
            uVar3 = stdout;
            uVar5 = func_0x00101630(0,&UNK_00107978,5);
            func_0x00101730(uVar5,uVar3);
            uVar3 = stdout;
            uVar5 = func_0x00101630(0,&UNK_00107a58,5);
            func_0x00101730(uVar5,uVar3);
            uVar3 = stdout;
            uVar5 = func_0x00101630(0,&UNK_00107a88,5);
            func_0x00101730(uVar5,uVar3);
            uVar3 = stdout;
            uVar5 = func_0x00101630(0,&UNK_00107ac0,5);
            func_0x00101730(uVar5,uVar3);
            uStack168 = 0;
            uStack160 = 0;
            pbStack264 = &UNK_00107387;
            apbStack248[4] = &UNK_001073c8;
            puStack256 = &UNK_00107389;
            puStack200 = &UNK_001073d2;
            apbStack248[0] = &UNK_00107401;
            puStack184 = &UNK_001073dc;
            apbStack248[1] = &UNK_00107399;
            apbStack248[2] = &UNK_001073af;
            apbStack248[3] = &UNK_001073b9;
            puStack208 = &UNK_001073b9;
            puStack192 = &UNK_001073b9;
            puStack176 = &UNK_001073b9;
            ppbVar7 = &pbStack264;
            do {
              ppbVar7 = ppbVar7;
              ppbVar7 = ppbVar7 + 2;
              pbVar13 = *ppbVar7;
              bVar14 = false;
              bVar15 = pbVar13 == (byte *)0x0;
              if (bVar15) break;
              lVar4 = 7;
              pbVar9 = &UNK_00107362;
              do {
                if (lVar4 == 0) break;
                lVar4 = lVar4 + -1;
                bVar14 = *pbVar9 < *pbVar13;
                bVar15 = *pbVar9 == *pbVar13;
                pbVar9 = pbVar9 + (ulong)bVar16 * -2 + 1;
                pbVar13 = pbVar13 + (ulong)bVar16 * -2 + 1;
              } while (bVar15);
            } while ((!bVar14 && !bVar15) != bVar14);
            pbVar13 = ppbVar7[3];
            if (pbVar13 == (byte *)0x0) {
              uVar3 = func_0x00101630(0,&UNK_001073e6,5);
              func_0x001017f0(1,uVar3,&UNK_001073fd,&UNK_00107b88);
              lVar4 = func_0x001017e0(5,0);
              if ((lVar4 != 0) && (iVar2 = func_0x001015c0(lVar4,&UNK_0010740b,3), iVar2 != 0)) {
                pbVar13 = &UNK_00107362;
                goto code_r0x00103430;
              }
              pbVar13 = &UNK_00107362;
              puVar8 = &UNK_001073a3;
              uVar3 = func_0x00101630(0,&UNK_0010740f,5);
              func_0x001017f0(1,uVar3,&UNK_00107b88,&UNK_00107362);
            }
            else {
              uVar3 = func_0x00101630(0,&UNK_001073e6,5);
              func_0x001017f0(1,uVar3,&UNK_001073fd,&UNK_00107b88);
              lVar4 = func_0x001017e0(5,0);
              if ((lVar4 != 0) && (iVar2 = func_0x001015c0(lVar4,&UNK_0010740b,3), iVar2 != 0)) {
code_r0x00103430:
                uVar3 = stdout;
                uVar5 = func_0x00101630(0,&UNK_00107bb0,5);
                func_0x00101730(uVar5,uVar3);
              }
              uVar3 = func_0x00101630(0,&UNK_0010740f,5);
              func_0x001017f0(1,uVar3,&UNK_00107b88,&UNK_00107362);
              puVar8 = &UNK_001085c1;
              if (pbVar13 == &UNK_00107362) {
                puVar8 = &UNK_001073a3;
              }
            }
            uVar3 = func_0x00101630(0,&UNK_00107bf8,5);
            func_0x001017f0(1,uVar3,pbVar13,puVar8);
          } while( true );
        }
        puStack104 = &UNK_00102f34;
        lVar4 = xrealloc();
        *(long *)(puStack128 + 4) = lVar4;
        uVar6 = uStack88;
      }
      if (uVar6 != 0) {
        uVar12 = 0;
        do {
          while( true ) {
            cVar1 = *(char *)(lStack120 + uVar12);
            if ((9 < (byte)(cVar1 - 0x30U)) && (0x15 < (byte)(cVar1 + 0xbfU))) break;
            *(undefined *)(lVar4 + uVar12) = base32_hex_to_norm[(int)cVar1 + -0x30];
            uVar12 = uVar12 + 1;
            if (uVar6 == uVar12) goto code_r0x00102eee;
          }
          *(char *)(lVar4 + uVar12) = cVar1;
          uVar12 = uVar12 + 1;
        } while (uVar6 != uVar12);
code_r0x00102eee:
        lVar4 = *(long *)(puStack128 + 4);
      }
      puStack104 = &UNK_00102efe;
      uVar3 = base32_decode_ctx(puStack128 + 1,lVar4);
      *puStack128 = puStack128[1];
      return uVar3;
    }
    puStack48 = &UNK_00102e62;
    puStack128 = (undefined4 *)xrealloc();
    *(undefined4 **)(param_1 + 4) = puStack128;
  }
  puStack48 = &UNK_00102dc0;
  func_0x00101760(puStack128,param_2,param_3);
  pbVar13 = *(byte **)(param_1 + 4);
  if (param_3 != 0) {
    bVar16 = *pbVar13;
    pbVar9 = pbVar13 + param_3;
    while( true ) {
      if ((bVar16 & 0xfb) == 0x2b) {
        *param_5 = 0;
        return 0;
      }
      if (bVar16 == 0x2d) {
        *pbVar13 = 0x2b;
      }
      else {
        if (bVar16 == 0x5f) {
          *pbVar13 = 0x2f;
        }
      }
      if (pbVar13 + 1 == pbVar9) break;
      pbVar13 = pbVar13 + 1;
      bVar16 = *pbVar13;
    }
    pbVar13 = *(byte **)(param_1 + 4);
  }
  puStack48 = &UNK_00102e23;
  uVar3 = base64_decode_ctx(param_1 + 1,pbVar13,param_3,param_4,param_5);
  *param_1 = param_1[1];
  return uVar3;
}

