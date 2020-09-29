
void base32hex_decode_ctx_wrapper
               (undefined4 *param_1,long param_2,ulong param_3,undefined8 param_4,undefined8 param_5
               )

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 extraout_RDX;
  byte **ppbVar6;
  undefined *puVar7;
  byte *pbVar8;
  undefined4 *puVar9;
  ulong uVar10;
  byte *pbVar11;
  long in_FS_OFFSET;
  bool bVar12;
  bool bVar13;
  byte bVar14;
  byte *pbStack224;
  undefined *puStack216;
  byte *apbStack208 [5];
  undefined *puStack168;
  undefined *puStack160;
  undefined *puStack152;
  undefined *puStack144;
  undefined *puStack136;
  undefined8 uStack128;
  undefined8 uStack120;
  undefined8 uStack104;
  undefined4 *puStack88;
  long lStack80;
  ulong uStack48;
  undefined8 uStack40;
  undefined8 uStack32;
  
  bVar14 = 0;
  lVar3 = *(long *)(param_1 + 4);
  if (*(ulong *)(param_1 + 6) <= param_3 && param_3 != *(ulong *)(param_1 + 6)) {
    *(ulong *)(param_1 + 6) = param_3 * 2;
    uStack48 = param_3;
    uStack40 = param_4;
    uStack32 = param_5;
    if ((long)(param_3 * 2) < 0) {
      puVar9 = param_1;
      xalloc_die();
      puVar7 = program_name;
      uVar5 = 5;
      uStack104 = *(undefined8 *)(in_FS_OFFSET + 0x28);
      puStack88 = param_1;
      lStack80 = param_2;
      if ((int)puVar9 == 0) goto code_r0x00102fbd;
      uVar5 = func_0x00101630(0,&UNK_00107580,5);
      func_0x00101870(stderr,1,uVar5,puVar7);
      do {
        func_0x00101850((ulong)puVar9 & 0xffffffff);
        uVar5 = extraout_RDX;
code_r0x00102fbd:
        uVar5 = func_0x00101630(0,&UNK_00107369,uVar5);
        func_0x001017f0(1,uVar5,puVar7);
        uVar5 = stdout;
        uVar4 = func_0x00101630(0,&UNK_001075a8,5);
        func_0x00101730(uVar4,uVar5);
        uVar5 = stdout;
        uVar4 = func_0x00101630(0,&UNK_001075f0,5);
        func_0x00101730(uVar4,uVar5);
        uVar5 = stdout;
        uVar4 = func_0x00101630(0,&UNK_00107628,5);
        func_0x00101730(uVar4,uVar5);
        uVar5 = stdout;
        uVar4 = func_0x00101630(0,&UNK_00107678,5);
        func_0x00101730(uVar4,uVar5);
        uVar5 = stdout;
        uVar4 = func_0x00101630(0,&UNK_001076c0,5);
        func_0x00101730(uVar4,uVar5);
        uVar5 = stdout;
        uVar4 = func_0x00101630(0,&UNK_00107708,5);
        func_0x00101730(uVar4,uVar5);
        uVar5 = stdout;
        uVar4 = func_0x00101630(0,&UNK_00107750,5);
        func_0x00101730(uVar4,uVar5);
        uVar5 = stdout;
        uVar4 = func_0x00101630(0,&UNK_001077a0,5);
        func_0x00101730(uVar4,uVar5);
        uVar5 = stdout;
        uVar4 = func_0x00101630(0,&UNK_001077e0,5);
        func_0x00101730(uVar4,uVar5);
        uVar5 = stdout;
        uVar4 = func_0x00101630(0,&UNK_00107830,5);
        func_0x00101730(uVar4,uVar5);
        uVar5 = stdout;
        uVar4 = func_0x00101630(0,&UNK_00107880,5);
        func_0x00101730(uVar4,uVar5);
        uVar5 = stdout;
        uVar4 = func_0x00101630(0,&UNK_00107978,5);
        func_0x00101730(uVar4,uVar5);
        uVar5 = stdout;
        uVar4 = func_0x00101630(0,&UNK_00107a58,5);
        func_0x00101730(uVar4,uVar5);
        uVar5 = stdout;
        uVar4 = func_0x00101630(0,&UNK_00107a88,5);
        func_0x00101730(uVar4,uVar5);
        uVar5 = stdout;
        uVar4 = func_0x00101630(0,&UNK_00107ac0,5);
        func_0x00101730(uVar4,uVar5);
        uStack128 = 0;
        uStack120 = 0;
        pbStack224 = &UNK_00107387;
        apbStack208[4] = &UNK_001073c8;
        puStack216 = &UNK_00107389;
        puStack160 = &UNK_001073d2;
        apbStack208[0] = &UNK_00107401;
        puStack144 = &UNK_001073dc;
        apbStack208[1] = &UNK_00107399;
        apbStack208[2] = &UNK_001073af;
        apbStack208[3] = &UNK_001073b9;
        puStack168 = &UNK_001073b9;
        puStack152 = &UNK_001073b9;
        puStack136 = &UNK_001073b9;
        ppbVar6 = &pbStack224;
        do {
          ppbVar6 = ppbVar6;
          ppbVar6 = ppbVar6 + 2;
          pbVar11 = *ppbVar6;
          bVar12 = false;
          bVar13 = pbVar11 == (byte *)0x0;
          if (bVar13) break;
          lVar3 = 7;
          pbVar8 = &UNK_00107362;
          do {
            if (lVar3 == 0) break;
            lVar3 = lVar3 + -1;
            bVar12 = *pbVar8 < *pbVar11;
            bVar13 = *pbVar8 == *pbVar11;
            pbVar8 = pbVar8 + (ulong)bVar14 * -2 + 1;
            pbVar11 = pbVar11 + (ulong)bVar14 * -2 + 1;
          } while (bVar13);
        } while ((!bVar12 && !bVar13) != bVar12);
        pbVar11 = ppbVar6[3];
        if (pbVar11 == (byte *)0x0) {
          uVar5 = func_0x00101630(0,&UNK_001073e6,5);
          func_0x001017f0(1,uVar5,&UNK_001073fd,&UNK_00107b88);
          lVar3 = func_0x001017e0(5,0);
          if (lVar3 != 0) {
            iVar2 = func_0x001015c0(lVar3,&UNK_0010740b,3);
            if (iVar2 != 0) {
              pbVar11 = &UNK_00107362;
              goto code_r0x00103430;
            }
          }
          pbVar11 = &UNK_00107362;
          puVar7 = &UNK_001073a3;
          uVar5 = func_0x00101630(0,&UNK_0010740f,5);
          func_0x001017f0(1,uVar5,&UNK_00107b88,&UNK_00107362);
        }
        else {
          uVar5 = func_0x00101630(0,&UNK_001073e6,5);
          func_0x001017f0(1,uVar5,&UNK_001073fd,&UNK_00107b88);
          lVar3 = func_0x001017e0(5,0);
          if (lVar3 != 0) {
            iVar2 = func_0x001015c0(lVar3,&UNK_0010740b,3);
            if (iVar2 != 0) {
code_r0x00103430:
              uVar5 = stdout;
              uVar4 = func_0x00101630(0,&UNK_00107bb0,5);
              func_0x00101730(uVar4,uVar5);
            }
          }
          uVar5 = func_0x00101630(0,&UNK_0010740f,5);
          func_0x001017f0(1,uVar5,&UNK_00107b88,&UNK_00107362);
          puVar7 = &UNK_001085c1;
          if (pbVar11 == &UNK_00107362) {
            puVar7 = &UNK_001073a3;
          }
        }
        uVar5 = func_0x00101630(0,&UNK_00107bf8,5);
        func_0x001017f0(1,uVar5,pbVar11,puVar7);
      } while( true );
    }
    lVar3 = xrealloc();
    *(long *)(param_1 + 4) = lVar3;
    param_4 = uStack40;
    param_3 = uStack48;
    param_5 = uStack32;
  }
  if (param_3 != 0) {
    uVar10 = 0;
    do {
      while( true ) {
        cVar1 = *(char *)(param_2 + uVar10);
        if ((9 < (byte)(cVar1 - 0x30U)) && (0x15 < (byte)(cVar1 + 0xbfU))) break;
        *(undefined *)(lVar3 + uVar10) = base32_hex_to_norm[(int)cVar1 + -0x30];
        uVar10 = uVar10 + 1;
        if (param_3 == uVar10) goto code_r0x00102eee;
      }
      *(char *)(lVar3 + uVar10) = cVar1;
      uVar10 = uVar10 + 1;
    } while (param_3 != uVar10);
code_r0x00102eee:
    lVar3 = *(long *)(param_1 + 4);
  }
  base32_decode_ctx(param_1 + 1,lVar3,param_3,param_4,param_5);
  *param_1 = param_1[1];
  return;
}

