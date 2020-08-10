
/* WARNING: Could not reconcile some variable overlaps */

undefined8 knuth_morris_pratt_multibyte(byte *param_1,byte *param_2,byte **param_3)

{
  byte *pbVar1;
  bool bVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  byte **ppbVar9;
  byte **ppbVar10;
  undefined *puVar11;
  byte **ppbVar12;
  byte **ppbVar13;
  byte *pbVar14;
  byte *pbVar15;
  long in_FS_OFFSET;
  undefined auStack312 [8];
  byte **ppbStack304;
  undefined8 *puStack296;
  byte *pbStack288;
  byte *pbStack280;
  byte *pbStack272;
  byte abStack264 [4];
  undefined8 uStack260;
  undefined uStack252;
  byte *pbStack248;
  byte *pbStack240;
  char cStack232;
  int iStack228;
  byte abStack224 [24];
  byte abStack200 [4];
  undefined8 uStack196;
  char cStack188;
  byte *pbStack184;
  long lStack176;
  char cStack168;
  int aiStack164 [7];
  byte abStack136 [4];
  undefined8 uStack132;
  char cStack124;
  byte *pbStack120;
  byte *pbStack112;
  char cStack104;
  int iStack100;
  ulong uStack64;
  
  puVar11 = auStack312;
  uStack64 = *(ulong *)(in_FS_OFFSET + 0x28);
  ppbStack304 = param_3;
  pbStack288 = param_1;
  pbStack272 = (byte *)mbslen(param_2);
  lVar7 = SUB168(ZEXT816(0x38) * ZEXT816(pbStack272),0);
  if (SUB168(ZEXT816(0x38) * ZEXT816(pbStack272) >> 0x40,0) != 0) goto code_r0x00109897;
  bVar2 = false;
  puVar11 = auStack312;
code_r0x00108e89:
  if ((lVar7 < 0) || (bVar2)) goto code_r0x001092b0;
  if ((ulong)((long)pbStack272 * 0x38) < 0xfa1) {
    lVar7 = -((long)pbStack272 * 0x38 + 0x3dU & 0xfffffffffffffff0);
    ppbVar12 = (byte **)(((ulong)(puVar11 + lVar7 + 0xf) & 0xfffffffffffffff0) + 0x1f &
                        0xffffffffffffffe0);
    puVar11 = puVar11 + lVar7;
  }
  else {
    *(undefined8 *)(puVar11 + -8) = 0x1097f9;
    ppbVar12 = (byte **)mmalloca();
  }
  if (ppbVar12 == (byte **)0x0) goto code_r0x001092b0;
  pbStack248 = param_2;
  param_2 = abStack264;
  abStack264[0] = 0;
  uStack260 = 0;
  uStack252 = 0;
  puStack296 = &uStack260;
  ppbVar13 = ppbVar12 + (long)pbStack272 * 6;
  ppbVar10 = ppbVar12;
code_r0x00108fe1:
  puVar3 = puStack296;
  uStack252 = 0;
  if (abStack264[0] != 0) {
code_r0x00108fee:
    *(undefined8 *)(puVar11 + -8) = 0x108ff3;
    uVar8 = func_0x001016d0();
    pbVar15 = pbStack248;
    pbStack280 = pbStack248;
    *(undefined8 *)(puVar11 + -8) = 0x10900c;
    uVar8 = strnlen1(pbVar15,uVar8);
    pbVar15 = pbStack280;
    *(undefined8 *)(puVar11 + -8) = 0x109026;
    pbStack240 = (byte *)rpl_mbrtowc(&iStack228,pbVar15,uVar8);
    pbVar15 = pbStack248;
    if (pbStack240 == (byte *)0xffffffffffffffff) {
      pbStack240 = (byte *)0x1;
      cStack232 = '\0';
      cVar5 = '\0';
      uStack252 = 1;
    }
    else {
      if (pbStack240 != (byte *)0xfffffffffffffffe) {
        if (pbStack240 == (byte *)0x0) {
          pbStack240 = (byte *)0x1;
          if (*pbStack248 != 0) goto code_r0x00109873;
          if (iStack228 != 0) goto code_r0x00109892;
        }
        cStack232 = '\x01';
        *(undefined8 *)(puVar11 + -8) = 0x109081;
        iVar6 = func_0x00101920(&uStack260);
        if (iVar6 == 0) {
          uStack252 = 1;
          goto code_r0x00108f7f;
        }
        abStack264[0] = 0;
        uStack252 = 1;
        if (iStack228 != 0) goto code_r0x00108f8f;
        goto code_r0x001090b0;
      }
      *(undefined8 *)(puVar11 + -8) = 0x1097b5;
      pbStack240 = (byte *)func_0x001016e0(pbVar15);
      cStack232 = '\0';
      cVar5 = '\0';
      uStack252 = 1;
    }
code_r0x00108f94:
    pbVar14 = pbStack240;
    pbVar15 = pbStack248;
    uStack252 = 1;
    if (pbStack248 == abStack224) {
      *(undefined8 *)(puVar11 + -8) = 0x10930c;
      pbVar15 = (byte *)func_0x001017d0(ppbVar10 + 3,pbVar15,pbVar14,ppbVar10 + 3);
      *ppbVar10 = pbVar15;
      cVar5 = cStack232;
    }
    else {
      *ppbVar10 = pbStack248;
    }
    ppbVar10[1] = pbStack240;
    *(char *)(ppbVar10 + 2) = cVar5;
    if (cVar5 != '\0') {
      *(int *)((long)ppbVar10 + 0x14) = iStack228;
    }
    pbStack248 = pbStack248 + (long)pbStack240;
    ppbVar10 = ppbVar10 + 6;
    uStack252 = 0;
    goto code_r0x00108fe1;
  }
  if ((*(uint *)(is_basic_table + (ulong)(*pbStack248 >> 5) * 4) >> ((uint)*pbStack248 & 0x1f) & 1)
      != 0) {
    pbStack240 = (byte *)0x1;
    cStack232 = '\x01';
    uStack252 = 1;
    iStack228 = (int)(char)*pbStack248;
code_r0x00108f7f:
    if (iStack228 == 0) goto code_r0x001090b0;
code_r0x00108f8f:
    cVar5 = '\x01';
    goto code_r0x00108f94;
  }
  *(undefined8 *)(puVar11 + -8) = 0x1092e4;
  iVar6 = func_0x00101920(puVar3);
  if (iVar6 != 0) {
    abStack264[0] = 1;
    goto code_r0x00108fee;
  }
code_r0x0010984f:
  *(undefined8 *)(puVar11 + -8) = 0x10986e;
  func_0x00101750(&UNK_0010e9b4,&UNK_0010e994,0x96,__PRETTY_FUNCTION___5056);
  goto code_r0x0010986e;
code_r0x001090b0:
  uStack252 = 1;
  ppbVar13[1] = (byte *)0x1;
  if (pbStack272 < (byte *)0x3) {
code_r0x00109156:
    pbStack184 = pbStack288;
    abStack200[0] = 0;
    uStack196 = 0;
    cStack188 = '\0';
    abStack136[0] = 0;
    uStack132 = 0;
    *ppbStack304 = (byte *)0x0;
    pbStack288 = abStack136;
    cStack124 = '\0';
    puStack296 = &uStack132;
    param_2 = abStack200;
    pbStack120 = pbStack184;
    pbVar15 = (byte *)0x0;
    do {
      do {
        if (cStack124 == '\0') goto code_r0x001093ac;
        if (cStack104 != '\0') goto joined_r0x0010948a;
code_r0x001091da:
        ppbVar10 = ppbVar12 + (long)pbVar15 * 6;
code_r0x001091e5:
        if (ppbVar10[1] == pbStack112) {
          pbVar14 = *ppbVar10;
          *(undefined8 *)(puVar11 + -8) = 0x10958c;
          iVar6 = func_0x00101790(pbVar14);
          if (iVar6 == 0) goto code_r0x0010938f;
        }
code_r0x001091f3:
        if (pbVar15 == (byte *)0x0) {
          if (cStack188 == '\0') {
            if (abStack200[0] == 0) {
              if ((*(uint *)(is_basic_table + (ulong)(*pbStack184 >> 5) * 4) >>
                   ((uint)*pbStack184 & 0x1f) & 1) != 0) {
                lStack176 = 1;
                cStack168 = '\x01';
                cStack188 = '\x01';
                aiStack164[0] = (int)(char)*pbStack184;
                goto code_r0x00109631;
              }
              *(undefined8 *)(puVar11 + -8) = 0x1096c1;
              iVar6 = func_0x00101920(&uStack196);
              if (iVar6 == 0) goto code_r0x0010984f;
              abStack200[0] = 1;
            }
            *(undefined8 *)(puVar11 + -8) = 0x1096d5;
            uVar8 = func_0x001016d0();
            pbVar14 = pbStack184;
            pbStack280 = pbStack184;
            *(undefined8 *)(puVar11 + -8) = 0x1096ee;
            uVar8 = strnlen1(pbVar14,uVar8);
            pbVar14 = pbStack280;
            *(undefined8 *)(puVar11 + -8) = 0x109708;
            lStack176 = rpl_mbrtowc(aiStack164,pbVar14,uVar8);
            pbVar14 = pbStack184;
            if (lStack176 == -1) {
              lStack176 = 1;
              cStack168 = '\0';
              goto code_r0x0010963f;
            }
            if (lStack176 == -2) {
              *(undefined8 *)(puVar11 + -8) = 0x109819;
              lStack176 = func_0x001016e0(pbVar14);
              cStack168 = '\0';
              goto code_r0x0010963f;
            }
            if (lStack176 == 0) {
              lStack176 = 1;
              if (*pbStack184 != 0) goto code_r0x00109873;
              if (aiStack164[0] != 0) goto code_r0x00109892;
            }
            cStack168 = '\x01';
            *(undefined8 *)(puVar11 + -8) = 0x109761;
            iVar6 = func_0x00101920(&uStack196);
            if (iVar6 == 0) {
              cStack188 = '\x01';
            }
            else {
              abStack200[0] = 0;
              cStack188 = '\x01';
            }
          }
          else {
            if (cStack168 == '\0') goto code_r0x0010963f;
          }
code_r0x00109631:
          if (aiStack164[0] != 0) {
code_r0x0010963f:
            cStack188 = '\0';
            pbStack184 = pbStack184 + lStack176;
            cStack124 = '\0';
            pbStack120 = pbStack120 + (long)pbStack112;
code_r0x001093ac:
            do {
              puVar3 = puStack296;
              if (abStack136[0] == 0) {
                if ((*(uint *)(is_basic_table + (ulong)(*pbStack120 >> 5) * 4) >>
                     ((uint)*pbStack120 & 0x1f) & 1) == 0) {
                  *(undefined8 *)(puVar11 + -8) = 0x1093dc;
                  iVar6 = func_0x00101920(puVar3);
                  if (iVar6 != 0) {
                    abStack136[0] = 1;
                    goto code_r0x001093e8;
                  }
                  goto code_r0x0010984f;
                }
                pbStack112 = (byte *)0x1;
                cStack104 = '\x01';
                cStack124 = '\x01';
                iStack100 = (int)(char)*pbStack120;
              }
              else {
code_r0x001093e8:
                *(undefined8 *)(puVar11 + -8) = 0x1093ed;
                uVar8 = func_0x001016d0();
                pbVar14 = pbStack120;
                pbStack280 = pbStack120;
                *(undefined8 *)(puVar11 + -8) = 0x109403;
                uVar8 = strnlen1(pbVar14,uVar8);
                pbVar4 = pbStack280;
                pbVar14 = pbStack288 + 4;
                pbVar1 = pbStack288 + 0x24;
                *(undefined8 *)(puVar11 + -8) = 0x109424;
                pbStack112 = (byte *)rpl_mbrtowc(pbVar1,pbVar4,uVar8,pbVar14);
                pbVar14 = pbStack120;
                if (pbStack112 == (byte *)0xffffffffffffffff) {
                  pbStack112 = (byte *)0x1;
                  cStack104 = '\0';
                  cStack124 = '\x01';
                  goto code_r0x001091da;
                }
                if (pbStack112 == (byte *)0xfffffffffffffffe) {
                  *(undefined8 *)(puVar11 + -8) = 0x109789;
                  pbStack112 = (byte *)func_0x001016e0(pbVar14);
                  cStack104 = '\0';
                  cStack124 = '\x01';
                  goto code_r0x001091da;
                }
                if (pbStack112 == (byte *)0x0) {
                  pbStack112 = (byte *)0x1;
                  if (*pbStack120 != 0) goto code_r0x00109873;
                  if (iStack100 != 0) goto code_r0x00109892;
                }
                cStack104 = '\x01';
                pbVar14 = pbStack288 + 4;
                *(undefined8 *)(puVar11 + -8) = 0x109475;
                iVar6 = func_0x00101920(pbVar14);
                if (iVar6 == 0) {
                  cStack124 = '\x01';
                }
                else {
                  abStack136[0] = 0;
                  cStack124 = '\x01';
                }
              }
joined_r0x0010948a:
              if (iStack100 == 0) {
                *(undefined8 *)(puVar11 + -8) = 0x109498;
                freea(ppbVar12);
                uVar8 = 1;
                goto code_r0x001092b2;
              }
              ppbVar10 = ppbVar12 + (long)pbVar15 * 6;
              if (*(char *)(ppbVar10 + 2) == '\0') goto code_r0x001091e5;
              if (*(int *)((long)ppbVar10 + 0x14) != iStack100) goto code_r0x001091f3;
code_r0x0010938f:
              pbVar15 = pbVar15 + 1;
              pbStack120 = pbStack120 + (long)pbStack112;
              cStack124 = '\0';
              if (pbStack272 == pbVar15) {
                *ppbStack304 = pbStack184;
                *(undefined8 *)(puVar11 + -8) = 0x109845;
                freea(ppbVar12);
                uVar8 = 1;
                goto code_r0x001092b2;
              }
            } while( true );
          }
          goto code_r0x001092a6;
        }
        pbVar14 = ppbVar13[(long)pbVar15];
        pbStack280 = pbVar15 + -(long)pbVar14;
      } while (pbVar14 == (byte *)0x0);
      if (cStack188 == '\0') goto code_r0x00109248;
      if (cStack168 != '\0') goto code_r0x0010929c;
      while( true ) {
        pbStack184 = pbStack184 + lStack176;
        pbVar14 = pbVar14 + -1;
        cStack188 = '\0';
        pbVar15 = pbStack280;
        if (pbVar14 == (byte *)0x0) break;
code_r0x00109248:
        if (abStack200[0] == 0) {
          if ((*(uint *)(is_basic_table + (ulong)(*pbStack184 >> 5) * 4) >>
               ((uint)*pbStack184 & 0x1f) & 1) == 0) {
            *(undefined8 *)(puVar11 + -8) = 0x1094b1;
            iVar6 = func_0x00101920(&uStack196);
            if (iVar6 != 0) {
              abStack200[0] = 1;
              goto code_r0x001094c0;
            }
            goto code_r0x0010984f;
          }
          lStack176 = 1;
          cStack168 = '\x01';
          cStack188 = '\x01';
          aiStack164[0] = (int)(char)*pbStack184;
code_r0x0010929c:
          if (aiStack164[0] == 0) goto code_r0x001092a6;
        }
        else {
code_r0x001094c0:
          *(undefined8 *)(puVar11 + -8) = 0x1094c5;
          uVar8 = func_0x001016d0();
          pbVar15 = pbStack184;
          *(undefined8 *)(puVar11 + -8) = 0x1094d7;
          uVar8 = strnlen1(pbVar15,uVar8);
          *(undefined8 *)(puVar11 + -8) = 0x1094ea;
          lStack176 = rpl_mbrtowc(aiStack164,pbVar15,uVar8,&uStack196);
          pbVar15 = pbStack184;
          if (lStack176 == -1) {
            lStack176 = 1;
            cStack168 = '\0';
          }
          else {
            if (lStack176 != -2) {
              if (lStack176 == 0) {
                lStack176 = 1;
                if (*pbStack184 != 0) goto code_r0x00109873;
                if (aiStack164[0] != 0) goto code_r0x00109892;
              }
              cStack168 = '\x01';
              *(undefined8 *)(puVar11 + -8) = 0x10953f;
              iVar6 = func_0x00101920(&uStack196);
              if (iVar6 == 0) {
                cStack188 = '\x01';
              }
              else {
                abStack200[0] = 0;
                cStack188 = '\x01';
              }
              goto code_r0x0010929c;
            }
            *(undefined8 *)(puVar11 + -8) = 0x1095ac;
            lStack176 = func_0x001016e0(pbVar15);
            cStack168 = '\0';
          }
        }
      }
    } while( true );
  }
  lVar7 = 0;
  pbVar15 = (byte *)0x2;
  ppbVar10 = ppbVar12;
code_r0x001090d8:
  pbStack280._0_1_ = *(byte *)(ppbVar10 + 8);
  do {
    ppbVar9 = ppbVar12 + lVar7 * 6;
    if (((byte)pbStack280 == 0) || (*(char *)(ppbVar9 + 2) == '\0')) {
      if (ppbVar10[7] == ppbVar9[1]) {
        pbVar14 = ppbVar10[6];
        pbStack280 = (byte *)((ulong)pbStack280 & 0xffffffffffffff00 | (ulong)(byte)pbStack280);
        *(undefined8 *)(puVar11 + -8) = 0x109127;
        iVar6 = func_0x00101790(pbVar14);
        if (iVar6 == 0) goto code_r0x00109132;
      }
    }
    else {
      if (*(int *)((long)ppbVar10 + 0x44) == *(int *)((long)ppbVar9 + 0x14)) {
code_r0x00109132:
        lVar7 = lVar7 + 1;
        ppbVar13[(long)pbVar15] = pbVar15 + -lVar7;
        goto code_r0x00109141;
      }
    }
    if (lVar7 == 0) break;
    lVar7 = lVar7 - (long)ppbVar13[lVar7];
  } while( true );
  ppbVar13[(long)pbVar15] = pbVar15;
code_r0x00109141:
  pbVar15 = pbVar15 + 1;
  ppbVar10 = ppbVar10 + 6;
  if (pbStack272 == pbVar15) goto code_r0x00109156;
  goto code_r0x001090d8;
code_r0x001092a6:
  *(undefined8 *)(puVar11 + -8) = 0x1092ab;
  func_0x00101600();
code_r0x001092b0:
  uVar8 = 0;
code_r0x001092b2:
  param_2 = (byte *)(uStack64 ^ *(ulong *)(in_FS_OFFSET + 0x28));
  if (param_2 == (byte *)0x0) {
    return uVar8;
  }
code_r0x0010986e:
  *(undefined8 *)(puVar11 + -8) = 0x109873;
  func_0x001016f0();
code_r0x00109873:
  *(undefined8 *)(puVar11 + -8) = 0x109892;
  func_0x00101750(&UNK_0010e9cb,&UNK_0010e994,0xb2,__PRETTY_FUNCTION___5056);
code_r0x00109892:
  *(undefined8 *)(puVar11 + -8) = 0x109897;
  lVar7 = mbuiter_multi_next_part_0();
code_r0x00109897:
  bVar2 = true;
  goto code_r0x00108e89;
}

