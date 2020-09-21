
/* WARNING: Could not reconcile some variable overlaps */

ulong re_string_reconstruct(byte **param_1,byte **param_2,ulong param_3)

{
  undefined4 *puVar1;
  ulong uVar2;
  bool bVar3;
  byte bVar4;
  char cVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte **ppbVar12;
  byte *pbVar13;
  undefined4 *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  undefined8 *puVar19;
  ulong uVar20;
  byte **ppbVar21;
  byte **ppbVar22;
  ulong uVar23;
  byte *pbVar24;
  long extraout_RDX;
  ulong *puVar25;
  ulong uVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  ulong uVar29;
  undefined8 *puVar30;
  long *plVar31;
  ulong *puVar32;
  byte **ppbVar33;
  long lVar34;
  long lVar35;
  long **pplVar36;
  byte **unaff_R12;
  byte **unaff_R13;
  long *plVar37;
  byte **unaff_R14;
  long lVar38;
  long in_FS_OFFSET;
  long lStack536;
  int iStack444;
  byte *pbStack440;
  undefined8 uStack432;
  long lStack424;
  undefined8 uStack408;
  undefined4 uStack400;
  undefined4 uStack396;
  undefined4 uStack392;
  undefined4 uStack388;
  undefined4 uStack384;
  undefined4 uStack380;
  undefined auStack376 [16];
  undefined auStack360 [16];
  undefined8 uStack344;
  undefined4 uStack336;
  undefined4 uStack332;
  undefined4 uStack328;
  undefined4 uStack324;
  undefined4 uStack320;
  undefined4 uStack316;
  long lStack304;
  byte **ppbStack288;
  undefined8 *puStack280;
  byte **ppbStack272;
  byte **ppbStack264;
  long lStack256;
  byte **ppbStack248;
  byte *pbStack240;
  byte *pbStack232;
  ulong uStack224;
  undefined4 *puStack216;
  undefined4 uStack208;
  undefined4 uStack204;
  undefined4 uStack200;
  undefined4 uStack196;
  long *plStack192;
  ulong uStack184;
  byte **ppbStack168;
  byte **ppbStack160;
  byte **ppbStack152;
  byte **ppbStack144;
  byte **ppbStack136;
  byte **ppbStack128;
  byte **ppbStack120;
  uint uStack108;
  byte **ppbStack104;
  byte *pbStack96;
  uint uStack84;
  undefined8 uStack80;
  undefined auStack70 [6];
  ulong uStack64;
  
  uVar18 = param_3 & 0xffffffff;
  uStack64 = *(ulong *)(in_FS_OFFSET + 0x28);
  ppbStack160 = (byte **)((long)param_2 - (long)param_1[5]);
  if ((long)param_2 < (long)param_1[5]) {
    if (1 < *(int *)(param_1 + 0x12)) {
      param_1[4] = (byte *)0x0;
    }
    param_1[6] = (byte *)0x0;
    param_1[5] = (byte *)0x0;
    param_1[7] = (byte *)0x0;
    *(byte *)((long)param_1 + 0x8c) = 0;
    param_1[0xb] = param_1[10];
    param_1[0xd] = param_1[0xc];
    *(uint *)(param_1 + 0xe) = (-(uint)((param_3 & 1) == 0) & 2) + 4;
    ppbStack160 = param_2;
    if (*(byte *)((long)param_1 + 0x8b) == 0) {
      param_1[1] = *param_1;
    }
  }
  ppbStack264 = param_2;
  ppbStack272 = param_1;
  if (ppbStack160 != (byte **)0x0) {
    pbVar10 = param_1[7];
    ppbVar33 = (byte **)param_1[6];
    if ((long)ppbStack160 < (long)pbVar10) {
      if (*(byte *)((long)param_1 + 0x8c) != 0) {
        unaff_R14 = (byte **)param_1[3];
        pbVar10 = (byte *)0x0;
        ppbVar22 = ppbVar33;
        do {
          ppbVar12 = (byte **)((long)(pbVar10 + (long)ppbVar22) / 2);
          pbVar13 = unaff_R14[(long)ppbVar12];
          ppbVar21 = ppbVar12;
          if ((long)pbVar13 <= (long)ppbStack160) {
            unaff_R12 = ppbVar12;
            if ((long)ppbStack160 <= (long)pbVar13) goto code_r0x001097e3;
            pbVar10 = (byte *)((long)ppbVar12 + 1);
            ppbVar21 = ppbVar22;
          }
          ppbVar22 = ppbVar21;
        } while ((long)pbVar10 < (long)ppbVar21);
        unaff_R12 = (byte **)((long)ppbVar12 + 1);
        if ((long)ppbStack160 <= (long)pbVar13) {
          unaff_R12 = ppbVar12;
        }
code_r0x001097e3:
        unaff_R13 = (byte **)((long)unaff_R12 - 1);
        ppbStack128 = (byte **)&UNK_001097fa;
        ppbStack264 = unaff_R13;
        ppbStack120 = ppbVar33;
        uVar6 = re_string_context_at(param_1,unaff_R13,uVar18);
        *(undefined4 *)(param_1 + 0xe) = uVar6;
        if (((ppbStack160 == unaff_R12) && ((long)ppbStack160 < (long)ppbStack120)) &&
           ((byte **)unaff_R14[(long)unaff_R12] == ppbStack160)) {
          ppbStack128 = (byte **)&UNK_0010982d;
          func_0x00101b90(param_1[2],param_1[2] + (long)ppbStack160 * 4,
                          (long)((long)ppbStack120 - (long)ppbStack160) * 4);
          ppbStack272 = (byte **)param_1[1];
          ppbStack264 = (byte **)((long)ppbStack272 + (long)ppbStack160);
          ppbStack128 = (byte **)&UNK_00109841;
          func_0x00101b90(ppbStack272,ppbStack264,param_1[6] + -(long)ppbStack160);
          pbVar10 = param_1[6];
          param_1[7] = param_1[7] + -(long)ppbStack160;
          param_1[6] = pbVar10 + -(long)ppbStack160;
          if (0 < (long)(pbVar10 + -(long)ppbStack160)) {
            pbVar10 = param_1[3];
            pbVar13 = (byte *)0x0;
            ppbStack264 = (byte **)(pbVar10 + (long)ppbStack160 * 8);
            do {
              *(byte **)(pbVar10 + (long)pbVar13 * 8) =
                   ppbStack264[(long)pbVar13] + -(long)ppbStack160;
              pbVar13 = pbVar13 + 1;
            } while (param_1[6] != pbVar13 && (long)pbVar13 <= (long)param_1[6]);
          }
          goto code_r0x00109878;
        }
        *(byte *)((long)param_1 + 0x8c) = 0;
        param_1[0xb] = (byte *)(((long)param_1[10] + (long)ppbStack160) - (long)param_2);
        param_1[0xd] = (byte *)(((long)param_1[0xc] + (long)ppbStack160) - (long)param_2);
        if ((0 < (long)unaff_R12) && ((byte **)unaff_R14[(long)unaff_R12 - 1] == ppbStack160)) {
          while ((unaff_R12 = unaff_R13, unaff_R13 = unaff_R12, unaff_R12 != (byte **)0x0 &&
                 ((byte **)unaff_R14[(long)unaff_R12 - 1] == ppbStack160))) {
            unaff_R13 = (byte **)((long)unaff_R12 - 1);
          }
        }
        if ((long)unaff_R12 < (long)ppbStack120) {
          do {
            if (*(int *)(param_1[2] + (long)unaff_R12 * 4) != -1) goto code_r0x001098fc;
            unaff_R12 = (byte **)((long)unaff_R12 + 1);
          } while (unaff_R12 != ppbStack120);
code_r0x00109b10:
          param_1[6] = (byte *)0x0;
          pbVar10 = (byte *)0x0;
        }
        else {
          if (unaff_R12 == ppbStack120) goto code_r0x00109b10;
code_r0x001098fc:
          pbVar10 = unaff_R14[(long)unaff_R12] + -(long)ppbStack160;
          param_1[6] = pbVar10;
          if (pbVar10 != (byte *)0x0) {
            if (0 < (long)pbVar10) {
              puVar14 = (undefined4 *)param_1[2];
              puVar1 = puVar14 + (long)pbVar10;
              do {
                *puVar14 = 0xffffffff;
                puVar14 = puVar14 + 1;
              } while (puVar1 != puVar14);
            }
            ppbStack272 = (byte **)param_1[1];
            ppbStack264 = (byte **)0xff;
            ppbStack128 = (byte **)&UNK_0010993d;
            func_0x00101a10();
            pbVar10 = param_1[6];
          }
        }
        bVar4 = *(byte *)((long)param_1 + 0x8b);
        param_1[7] = pbVar10;
        goto code_r0x0010994c;
      }
      ppbStack264 = (byte **)((long)ppbStack160 - 1);
      ppbStack128 = (byte **)&UNK_0010959e;
      ppbStack120 = ppbVar33;
      uVar6 = re_string_context_at(param_1,ppbStack264,uVar18);
      *(undefined4 *)(param_1 + 0xe) = uVar6;
      ppbVar33 = (byte **)((long)ppbStack120 - (long)ppbStack160);
      if (1 < *(int *)(param_1 + 0x12)) {
        ppbStack272 = (byte **)param_1[2];
        ppbStack264 = (byte **)((long)ppbStack272 + (long)ppbStack160 * 4);
        ppbStack128 = (byte **)&UNK_00109665;
        func_0x00101b90(ppbStack272,ppbStack264,(long)ppbVar33 * 4);
        ppbVar33 = (byte **)(param_1[6] + -(long)ppbStack160);
      }
      if (*(byte *)((long)param_1 + 0x8b) != 0) {
        ppbStack272 = (byte **)param_1[1];
        ppbStack264 = (byte **)((long)ppbStack272 + (long)ppbStack160);
        ppbStack128 = (byte **)&UNK_00109970;
        func_0x00101b90(ppbStack272,ppbStack264,ppbVar33);
        bVar4 = *(byte *)((long)param_1 + 0x8b);
        param_1[6] = param_1[6] + -(long)ppbStack160;
        param_1[7] = param_1[7] + -(long)ppbStack160;
        goto code_r0x0010994c;
      }
      param_1[7] = param_1[7] + -(long)ppbStack160;
      *(byte ***)(param_1 + 6) = ppbVar33;
    }
    else {
      if (*(byte *)((long)param_1 + 0x8c) != 0) {
        *(byte *)((long)param_1 + 0x8c) = 0;
        param_1[0xb] = (byte *)(((long)param_1[10] + (long)ppbStack160) - (long)param_2);
        param_1[0xd] = (byte *)(((long)param_1[0xc] + (long)ppbStack160) - (long)param_2);
      }
      param_1[6] = (byte *)0x0;
      pbVar13 = param_1[5];
      if (*(int *)(param_1 + 0x12) < 2) {
        uVar18 = (ulong)pbVar13[(long)*param_1 + (long)ppbStack160 + -1];
        param_1[7] = (byte *)0x0;
        if (param_1[0xf] != (byte *)0x0) {
          uVar18 = (ulong)param_1[0xf][uVar18];
        }
        iVar9 = 1;
        if (((*(ulong *)(param_1[0x10] + ((long)uVar18 >> 6) * 8) >> (uVar18 & 0x1f) & 1) == 0) &&
           (iVar9 = 0, (char)uVar18 == '\n')) {
          iVar9 = (uint)(*(byte *)((long)param_1 + 0x8d) != 0) * 2;
        }
        *(int *)(param_1 + 0xe) = iVar9;
code_r0x00109878:
        bVar4 = *(byte *)((long)param_1 + 0x8b);
        goto code_r0x0010994c;
      }
      if (*(byte *)((long)param_1 + 0x89) != 0) {
        ppbVar22 = (byte **)*param_1;
        lVar16 = (long)ppbVar22 + (long)pbVar13;
        ppbVar21 = (byte **)((long)ppbStack160 + (lVar16 - *(int *)(param_1 + 0x12)));
        unaff_R14 = (byte **)(lVar16 + -1 + (long)ppbStack160);
        if (ppbVar22 < ppbVar21) {
          ppbVar22 = ppbVar21;
        }
        if (ppbVar22 <= unaff_R14) {
code_r0x001099c5:
          if ((*(byte *)unaff_R14 & 0xc0) == 0x80) goto code_r0x001099b8;
          pbVar10 = param_1[0xf];
          ppbStack264 = unaff_R14;
          if (pbVar10 != (byte *)0x0) {
            iVar9 = 6;
            ppbStack264 = (byte **)auStack70;
            if ((long)(param_1[0xb] + (lVar16 - (long)unaff_R14)) < 7) {
              iVar9 = (int)(param_1[0xb] + (lVar16 - (long)unaff_R14));
            }
            iVar9 = iVar9 + -1;
            lVar35 = (long)iVar9;
            while (-1 < iVar9) {
              *(byte *)((long)ppbStack264 + lVar35) = pbVar10[*(byte *)((long)unaff_R14 + lVar35)];
              lVar35 = lVar35 + -1;
              iVar9 = (int)lVar35;
            }
          }
          unaff_R13 = (byte **)&uStack84;
          uVar23 = (long)ppbStack160 + (lVar16 - (long)unaff_R14);
          uStack80 = 0;
          ppbStack128 = (byte **)&UNK_00109a14;
          ppbVar22 = unaff_R13;
          ppbStack120 = ppbVar33;
          uStack108 = (uint)uVar18;
          uVar29 = rpl_mbrtowc();
          uVar18 = (ulong)uStack108;
          if ((uVar29 < uVar23) || (0xfffffffffffffffd < uVar29)) {
code_r0x00109a2c:
            pbVar13 = param_1[5];
            pbVar10 = param_1[7];
            ppbVar33 = ppbStack120;
            goto code_r0x001096d1;
          }
          ppbStack272 = (byte **)(ulong)uStack84;
          unaff_R12 = (byte **)(uVar29 - uVar23);
          param_1[4] = (byte *)0x0;
          *(byte ***)(param_1 + 6) = unaff_R12;
          if (uStack84 == 0xffffffff) goto code_r0x00109a2c;
          goto code_r0x00109755;
        }
      }
code_r0x001096d1:
      pbVar13 = pbVar13 + (long)pbVar10;
      if ((long)pbVar13 < (long)param_2) {
        ppbStack104 = param_1 + 4;
        unaff_R13 = (byte **)&uStack84;
        ppbStack120 = ppbVar33;
        do {
          pbVar10 = param_1[10];
          pbStack96 = param_1[4];
          uStack108 = (uint)uVar18;
          ppbStack264 = (byte **)(*param_1 + (long)pbVar13);
          ppbStack128 = (byte **)&UNK_0010971f;
          ppbVar22 = unaff_R13;
          lVar16 = rpl_mbrtowc(unaff_R13,ppbStack264,pbVar10 + -(long)pbVar13,ppbStack104);
          ppbStack272 = (byte **)(ulong)uStack84;
          uVar18 = (ulong)uStack108;
          if (0xfffffffffffffffc < lVar16 - 1U) {
            if ((lVar16 == 0) || (pbVar10 + -(long)pbVar13 == (byte *)0x0)) {
              ppbStack272 = (byte **)0x0;
            }
            else {
              ppbStack272 = (byte **)(ulong)(*param_1)[(long)pbVar13];
            }
            param_1[4] = pbStack96;
            lVar16 = 1;
          }
          pbVar13 = pbVar13 + lVar16;
        } while ((long)pbVar13 < (long)param_2);
        unaff_R12 = (byte **)(pbVar13 + -(long)param_2);
        *(byte ***)(param_1 + 6) = unaff_R12;
        ppbVar33 = ppbStack120;
        unaff_R14 = unaff_R12;
        if ((int)ppbStack272 == -1) goto code_r0x00109b29;
code_r0x00109755:
        ppbStack120._0_4_ = (int)ppbStack272;
        unaff_R13 = (byte **)&uStack84;
        if (*(byte *)((long)param_1 + 0x8e) == 0) {
code_r0x00109762:
          iVar9 = 0;
          ppbStack272 = ppbVar22;
          if ((int)ppbStack120 == 10) {
            iVar9 = (uint)(*(byte *)((long)param_1 + 0x8d) != 0) * 2;
          }
        }
        else {
          ppbStack120 = (byte **)((ulong)ppbStack120 & 0xffffffff00000000 | (ulong)ppbStack272);
          ppbStack128 = (byte **)&UNK_00109bd3;
          iVar9 = func_0x00101ab0();
          if ((iVar9 == 0) && (ppbVar22 = ppbStack272, (int)ppbStack120 != 0x5f))
          goto code_r0x00109762;
          iVar9 = 1;
        }
        *(int *)(param_1 + 0xe) = iVar9;
      }
      else {
        unaff_R12 = (byte **)(pbVar13 + -(long)param_2);
        *(byte ***)(param_1 + 6) = unaff_R12;
code_r0x00109b29:
        ppbStack264 = (byte **)((long)ppbVar33 - 1);
        ppbStack128 = (byte **)&UNK_00109b38;
        ppbStack272 = param_1;
        uVar6 = re_string_context_at(param_1,ppbStack264,uVar18);
        *(undefined4 *)(param_1 + 0xe) = uVar6;
        unaff_R14 = unaff_R12;
      }
      if (unaff_R12 != (byte **)0x0) {
        if (0 < (long)unaff_R12) {
          puVar14 = (undefined4 *)param_1[2];
          puVar1 = puVar14 + (long)unaff_R12;
          do {
            *puVar14 = 0xffffffff;
            puVar14 = puVar14 + 1;
          } while (puVar1 != puVar14);
        }
        if (*(byte *)((long)param_1 + 0x8b) == 0) {
          *(byte ***)(param_1 + 7) = unaff_R12;
          goto code_r0x001095ca;
        }
        ppbStack272 = (byte **)param_1[1];
        ppbStack264 = (byte **)0xff;
        ppbStack128 = (byte **)&UNK_00109c29;
        func_0x00101a10(ppbStack272,0xff,unaff_R12);
        unaff_R12 = (byte **)param_1[6];
      }
      bVar4 = *(byte *)((long)param_1 + 0x8b);
      *(byte ***)(param_1 + 7) = unaff_R12;
code_r0x0010994c:
      if (bVar4 != 0) goto code_r0x001095ce;
    }
code_r0x001095ca:
    param_1[1] = param_1[1] + (long)ppbStack160;
  }
code_r0x001095ce:
  param_1[0xd] = param_1[0xd] + -(long)ppbStack160;
  *(byte ***)(param_1 + 5) = param_2;
  pbVar10 = param_1[0xb] + -(long)ppbStack160;
  param_1[0xb] = pbVar10;
  if (*(int *)(param_1 + 0x12) < 2) {
    if (*(byte *)((long)param_1 + 0x8b) == 0) {
      param_1[6] = pbVar10;
    }
    else {
      if (*(byte *)(param_1 + 0x11) == 0) {
        pbVar13 = param_1[0xf];
        if (pbVar13 != (byte *)0x0) {
          pbVar24 = param_1[6];
          if (param_1[8] == pbVar10 || (long)param_1[8] < (long)pbVar10) {
            pbVar10 = param_1[8];
          }
          if ((long)pbVar24 < (long)pbVar10) {
            while( true ) {
              ppbStack264 = (byte **)(ulong)pbVar13[*(byte *)((long)*param_1 + (long)pbVar24 +
                                                             (long)param_2)];
              param_1[1][(long)pbVar24] =
                   pbVar13[*(byte *)((long)*param_1 + (long)pbVar24 + (long)param_2)];
              pbVar24 = pbVar24 + 1;
              if (pbVar10 == pbVar24) break;
              param_2 = (byte **)param_1[5];
              pbVar13 = param_1[0xf];
            }
          }
          param_1[6] = pbVar24;
          param_1[7] = pbVar24;
        }
      }
      else {
        ppbStack128 = (byte **)&UNK_00109b48;
        ppbStack272 = param_1;
        build_upper_buffer();
      }
    }
code_r0x00109603:
    param_1[9] = (byte *)0x0;
    uVar11 = 0;
  }
  else {
    if (*(byte *)(param_1 + 0x11) == 0) {
      ppbStack128 = (byte **)&UNK_0010967d;
      ppbStack272 = param_1;
      build_wcs_buffer();
      goto code_r0x00109603;
    }
    ppbStack128 = (byte **)&UNK_001095ff;
    ppbStack272 = param_1;
    uVar11 = build_wcs_upper_buffer();
    if ((int)uVar11 == 0) goto code_r0x00109603;
  }
  uStack224 = uStack64 ^ *(ulong *)(in_FS_OFFSET + 0x28);
  if (uStack224 == 0) {
    return uVar11;
  }
  ppbStack128 = (byte **)&UNK_00109c6f;
  func_0x00101990();
  ppbStack128 = param_2;
  ppbStack136 = unaff_R14;
  ppbStack144 = unaff_R13;
  ppbStack152 = unaff_R12;
  ppbStack168 = param_1;
  uStack184 = *(ulong *)(in_FS_OFFSET + 0x28);
  plStack192 = (long *)0x0;
  uStack208 = 0;
  uStack204 = 0;
  uStack200 = 0;
  uStack196 = 0;
  puVar27 = (undefined8 *)(ppbStack272[7] + (long)ppbStack264 * 0x18);
  lVar16 = puVar27[1];
  if (0 < lVar16) {
    param_1 = (byte **)0x0;
    puStack216 = &uStack208;
    do {
      ppbVar33 = *(byte ***)(puVar27[2] + (long)param_1 * 8);
      if ((ppbStack264 != ppbVar33) && (((*ppbStack272)[(long)ppbVar33 * 0x10 + 8] & 8) != 0)) {
        puVar28 = puVar27 + 2;
        lVar35 = (long)ppbVar33 * 0x18;
        pbStack232 = ppbStack272[5] + lVar35;
        param_2 = *(byte ***)(pbStack232 + 0x10);
        pbStack240 = *param_2;
        ppbStack248 = (byte **)&UNK_00109d7d;
        lVar15 = re_node_set_contains_isra_3(lVar16,puVar28,pbStack240);
        if (*(long *)(pbStack232 + 8) < 2) {
          if (lVar15 != 0) goto code_r0x00109d20;
          ppbStack248 = (byte **)&UNK_00109da6;
          lVar15 = re_node_set_contains_isra_3
                             (*(undefined8 *)(extraout_RDX + 8),extraout_RDX + 0x10,pbStack240);
joined_r0x00109dec:
          if (lVar15 != 0) {
code_r0x00109cfa:
            ppbStack248 = (byte **)&UNK_00109d11;
            uVar7 = re_node_set_add_intersect(puStack216,uStack224,ppbStack272[7] + lVar35);
            if (uVar7 != 0) {
              pbStack240 = (byte *)((ulong)pbStack240 & 0xffffffff00000000 | (ulong)uVar7);
              ppbStack248 = (byte **)&UNK_00109e9d;
              plVar31 = plStack192;
              func_0x00101880();
              uVar18 = (ulong)pbStack240 & 0xffffffff;
              goto code_r0x00109e68;
            }
            lVar16 = puVar27[1];
          }
        }
        else {
          if (lVar15 == 0) {
            ppbStack248 = (byte **)&UNK_00109cf1;
            lVar15 = re_node_set_contains_isra_3
                               (*(undefined8 *)(extraout_RDX + 8),extraout_RDX + 0x10,pbStack240);
            if (lVar15 == 0) goto code_r0x00109db8;
            goto code_r0x00109cfa;
          }
code_r0x00109db8:
          param_2 = (byte **)param_2[1];
          if (0 < (long)param_2) {
            ppbStack248 = (byte **)&UNK_00109dd3;
            lVar15 = re_node_set_contains_isra_3(lVar16,puVar28,param_2);
            if (lVar15 == 0) {
              ppbStack248 = (byte **)&UNK_00109de9;
              lVar15 = re_node_set_contains_isra_3
                                 (*(undefined8 *)(extraout_RDX + 8),extraout_RDX + 0x10);
              goto joined_r0x00109dec;
            }
          }
        }
      }
code_r0x00109d20:
      param_1 = (byte **)((long)param_1 + 1);
    } while ((long)param_1 < lVar16);
    lVar35 = 0;
    pplVar36 = &plStack192;
    unaff_R12 = ppbStack272;
    unaff_R13 = ppbStack264;
    if (0 < lVar16) {
      do {
        ppbStack248 = (byte **)&UNK_00109e28;
        lVar16 = re_node_set_contains_isra_3
                           (CONCAT44(uStack196,uStack200),pplVar36,
                            *(undefined8 *)(puVar27[2] + lVar35 * 8));
        if (lVar16 == 0) {
          param_1 = (byte **)(extraout_RDX + 0x10);
          ppbStack248 = (byte **)&UNK_00109e3d;
          lVar16 = re_node_set_contains_isra_3(*(undefined8 *)(extraout_RDX + 8),param_1);
          if (-1 < lVar16 + -1) {
            ppbStack248 = (byte **)&UNK_00109e52;
            re_node_set_remove_at_isra_4_part_5(extraout_RDX + 8,param_1,lVar16 + -1);
          }
        }
        lVar35 = lVar35 + 1;
      } while (puVar27[1] != lVar35 && lVar35 <= (long)puVar27[1]);
    }
  }
  ppbStack248 = (byte **)&UNK_00109e66;
  plVar31 = plStack192;
  func_0x00101880();
  uVar18 = 0;
  ppbStack272 = unaff_R12;
  ppbStack264 = unaff_R13;
code_r0x00109e68:
  uVar29 = uStack184 ^ *(ulong *)(in_FS_OFFSET + 0x28);
  if (uVar29 == 0) {
    return uVar18;
  }
  ppbStack248 = (byte **)&UNK_00109eab;
  func_0x00101990();
  lStack304 = *(long *)(in_FS_OFFSET + 0x28);
  ppbStack288 = param_1;
  puStack280 = puVar27;
  lStack256 = extraout_RDX;
  ppbStack248 = param_2;
  lVar16 = func_0x00101ac0(0x3800);
  if (lVar16 != 0) {
    puVar25 = (ulong *)(lVar16 + 0x1800);
    uStack408._0_4_ = 0;
    uStack408._4_4_ = 0;
    uStack400 = 0;
    uStack396 = 0;
    uStack392 = 0;
    uStack388 = 0;
    uStack384 = 0;
    uStack380 = 0;
    *(undefined8 *)(uVar29 + 0x58) = 0;
    *(undefined8 *)(uVar29 + 0x60) = 0;
    if (*(long *)(uVar29 + 0x10) < 1) {
      func_0x00101880(0,lVar16);
      goto code_r0x0010a9b4;
    }
    lStack536 = 0;
    puVar27 = (undefined8 *)0x0;
    do {
      plVar37 = (long *)(*(long *)(*(long *)(uVar29 + 0x18) + lStack536 * 8) * 0x10 + *plVar31);
      bVar4 = *(byte *)(plVar37 + 1);
      uVar7 = *(uint *)(plVar37 + 1);
      uVar8 = uVar7 >> 8;
      puVar28 = puVar27;
      if (bVar4 == 1) {
        puVar32 = (ulong *)((long)&uStack408 + (ulong)((uint)(*(byte *)plVar37 >> 3) & 0x18));
        *puVar32 = *puVar32 | 1 << (*(byte *)plVar37 & 0x3f);
code_r0x0010a316:
        if ((uVar7 & 0x3ff00) == 0) {
code_r0x0010a3e0:
          puVar19 = (undefined8 *)0x0;
          if (0 < (long)puVar27) {
            do {
              lVar35 = (long)puVar19 * 0x20;
              if ((bVar4 != 1) ||
                 ((*(ulong *)((long)puVar25 + lVar35 + (ulong)((uint)(*(byte *)plVar37 >> 3) & 0x18)
                             ) >> ((ulong)*(byte *)plVar37 & 0x1f) & 1) != 0)) {
                uVar18 = 0;
                lVar15 = 0;
                do {
                  uVar23 = *(ulong *)(&uStack408 + lVar15 * 2) &
                           (puVar25 + (long)puVar19 * 4)[lVar15];
                  *(ulong *)(auStack376 + lVar15 * 8) = uVar23;
                  lVar15 = lVar15 + 1;
                  uVar18 = uVar18 | uVar23;
                } while (lVar15 != 4);
                if (uVar18 != 0) {
                  uVar23 = 0;
                  uVar18 = 0;
                  lVar15 = 0;
                  do {
                    uVar20 = *(ulong *)(&uStack408 + lVar15 * 2);
                    uVar2 = (puVar25 + (long)puVar19 * 4)[lVar15];
                    uVar26 = ~uVar20 & uVar2;
                    uVar20 = ~uVar2 & uVar20;
                    *(ulong *)(&uStack344 + lVar15 * 8) = uVar26;
                    uVar18 = uVar18 | uVar26;
                    *(ulong *)(&uStack408 + lVar15 * 2) = uVar20;
                    lVar15 = lVar15 + 1;
                    uVar23 = uVar23 | uVar20;
                  } while (lVar15 != 4);
                  lVar15 = lVar16 + (long)puVar19 * 0x18;
                  if (uVar18 != 0) {
                    puVar32 = puVar25 + (long)puVar27 * 4;
                    *(uint *)puVar32 =
                         CONCAT22(uStack344._2_2_,CONCAT11(uStack344._1_1_,(undefined)uStack344));
                    *(undefined4 *)((long)puVar32 + 4) = uStack344._4_4_;
                    *(undefined4 *)(puVar32 + 1) = uStack336;
                    *(undefined4 *)((long)puVar32 + 0xc) = uStack332;
                    *(undefined4 *)(puVar32 + 2) = uStack328;
                    *(undefined4 *)((long)puVar32 + 0x14) = uStack324;
                    *(undefined4 *)(puVar32 + 3) = uStack320;
                    *(undefined4 *)((long)puVar32 + 0x1c) = uStack316;
                    *(int *)(puVar25 + (long)puVar19 * 4) = SUB164(auStack376,0);
                    *(undefined4 *)((long)puVar25 + lVar35 + 4) = SUB164(auStack376 >> 0x20,0);
                    *(int *)(puVar25 + (long)puVar19 * 4 + 1) = SUB164(auStack376 >> 0x40,0);
                    *(undefined4 *)((long)puVar25 + lVar35 + 0xc) = SUB164(auStack376 >> 0x60,0);
                    *(undefined4 *)(lVar16 + 0x1810 + lVar35) = SUB164(auStack360,0);
                    *(undefined4 *)((long)puVar25 + lVar35 + 0x14) = SUB164(auStack360 >> 0x20,0);
                    *(int *)(puVar25 + (long)puVar19 * 4 + 3) = SUB164(auStack360 >> 0x40,0);
                    *(undefined4 *)((long)puVar25 + lVar35 + 0x1c) = SUB164(auStack360 >> 0x60,0);
                    iVar9 = re_node_set_init_copy
                                      (SUB168(auStack360,0),lVar16 + (long)puVar27 * 0x18,lVar15);
                    if (iVar9 != 0) goto code_r0x0010a5e0;
                    puVar27 = (undefined8 *)((long)puVar27 + 1);
                  }
                  cVar5 = re_node_set_insert(lVar15,*(undefined8 *)
                                                     (*(long *)(uVar29 + 0x18) + lStack536 * 8),
                                             lVar15);
                  if (cVar5 == '\0') goto code_r0x0010a5e0;
                  if (uVar23 == 0) break;
                }
              }
              puVar19 = (undefined8 *)((long)puVar19 + 1);
            } while ((long)puVar19 < (long)puVar27);
          }
          puVar28 = puVar27;
          if (puVar27 != puVar19) goto code_r0x00109faf;
          puVar32 = puVar25 + (long)puVar27 * 4;
          *(uint *)puVar32 = (uint)uStack408;
          *(undefined4 *)((long)puVar32 + 4) = uStack408._4_4_;
          *(undefined4 *)(puVar32 + 1) = uStack400;
          *(undefined4 *)((long)puVar32 + 0xc) = uStack396;
          *(undefined4 *)(puVar32 + 2) = uStack392;
          *(undefined4 *)((long)puVar32 + 0x14) = uStack388;
          *(undefined4 *)(puVar32 + 3) = uStack384;
          *(undefined4 *)((long)puVar32 + 0x1c) = uStack380;
          uVar11 = *(undefined8 *)(*(long *)(uVar29 + 0x18) + lStack536 * 8);
          puVar28 = (undefined8 *)(lVar16 + (long)puVar27 * 0x18);
          *puVar28 = 1;
          puVar28[1] = 1;
          puVar19 = (undefined8 *)func_0x00101ac0(CONCAT44(uStack388,uStack392),8);
          *(undefined8 **)(puVar28 + 2) = puVar19;
          if (puVar19 == (undefined8 *)0x0) {
            puVar28[1] = 0;
            *puVar28 = 0;
            if (puVar27 == (undefined8 *)0x0) {
              func_0x00101880(lVar16);
            }
            else {
code_r0x0010a5e0:
              puVar28 = (undefined8 *)(lVar16 + 0x10);
              puVar27 = puVar28 + (long)puVar27 * 3;
              do {
                uVar11 = *puVar28;
                puVar28 = puVar28 + 3;
                func_0x00101880(uVar11);
              } while (puVar27 != puVar28);
              func_0x00101880(lVar16);
            }
            goto code_r0x0010a2c0;
          }
          *puVar19 = uVar11;
          puVar27 = (undefined8 *)((long)puVar27 + 1);
        }
        else {
          if ((uVar8 & 0x20) != 0) {
            uVar7 = (uint)uStack408 & 0x400;
            uStack408._0_4_ = 0;
            uStack408._4_4_ = 0;
            uStack400 = 0;
            uStack396 = 0;
            uStack392 = 0;
            uStack388 = 0;
            uStack384 = 0;
            uStack380 = 0;
            if (uVar7 == 0) goto code_r0x00109faf;
            uStack408._0_4_ = 0x400;
            uStack408._4_4_ = 0;
          }
          if ((uVar8 & 0x80) == 0) {
            if ((uVar8 & 4) != 0) {
              if (bVar4 == 1) {
                if ((*(byte *)((long)plVar37 + 10) & 0x40) == 0) goto code_r0x0010a5c4;
                iVar9 = *(int *)((long)plVar31 + 0xb4);
              }
              else {
                iVar9 = *(int *)((long)plVar31 + 0xb4);
              }
              if (iVar9 < 2) {
                uVar18 = 0;
                lVar35 = 0;
                do {
                  uVar23 = *(ulong *)(&uStack408 + lVar35 * 2) & plVar31[lVar35 + 0x17];
                  *(ulong *)(&uStack408 + lVar35 * 2) = uVar23;
                  lVar35 = lVar35 + 1;
                  uVar18 = uVar18 | uVar23;
                } while (lVar35 != 4);
              }
              else {
                lVar35 = plVar31[0xf];
                uVar18 = 0;
                lVar15 = 0;
                do {
                  uVar23 = (~*(ulong *)(lVar35 + lVar15 * 8) | plVar31[lVar15 + 0x17]) &
                           *(ulong *)(&uStack408 + lVar15 * 2);
                  *(ulong *)(&uStack408 + lVar15 * 2) = uVar23;
                  lVar15 = lVar15 + 1;
                  uVar18 = uVar18 | uVar23;
                } while (lVar15 != 4);
              }
              if (uVar18 == 0) goto code_r0x00109faf;
            }
            if ((uVar8 & 8) != 0) {
              if (bVar4 == 1) {
                if ((*(byte *)((long)plVar37 + 10) & 0x40) != 0) goto code_r0x0010a5c4;
                iVar9 = *(int *)((long)plVar31 + 0xb4);
              }
              else {
                iVar9 = *(int *)((long)plVar31 + 0xb4);
              }
              if (iVar9 < 2) {
                uVar18 = 0;
                lVar35 = 0;
                do {
                  uVar23 = ~plVar31[lVar35 + 0x17] & *(ulong *)(&uStack408 + lVar35 * 2);
                  *(ulong *)(&uStack408 + lVar35 * 2) = uVar23;
                  lVar35 = lVar35 + 1;
                  uVar18 = uVar18 | uVar23;
                } while (lVar35 != 4);
              }
              else {
                lVar35 = plVar31[0xf];
                uVar18 = 0;
                lVar15 = 0;
                do {
                  uVar23 = ~(plVar31[lVar15 + 0x17] & *(ulong *)(lVar35 + lVar15 * 8)) &
                           *(ulong *)(&uStack408 + lVar15 * 2);
                  *(ulong *)(&uStack408 + lVar15 * 2) = uVar23;
                  lVar15 = lVar15 + 1;
                  uVar18 = uVar18 | uVar23;
                } while (lVar15 != 4);
              }
              if (uVar18 == 0) goto code_r0x00109faf;
            }
            goto code_r0x0010a3e0;
          }
        }
code_r0x0010a5c4:
        uStack408._0_4_ = 0;
        uStack408._4_4_ = 0;
        uStack400 = 0;
        uStack396 = 0;
        uStack392 = 0;
        uStack388 = 0;
        uStack384 = 0;
        uStack380 = 0;
        puVar28 = puVar27;
      }
      else {
        if (bVar4 == 3) {
          lVar35 = *plVar37;
          lVar15 = 0;
          do {
            *(ulong *)((long)&uStack408 + lVar15) =
                 *(ulong *)((long)&uStack408 + lVar15) | *(ulong *)(lVar35 + lVar15);
            lVar15 = lVar15 + 8;
          } while (lVar15 != 0x20);
          goto code_r0x0010a316;
        }
        if (bVar4 == 5) {
          if (*(int *)((long)plVar31 + 0xb4) < 2) {
            uStack408._0_4_ = 0xffffffff;
            uStack408._4_4_ = 0xffffffff;
            uStack400 = 0xffffffff;
            uStack396 = 0xffffffff;
            uStack392 = 0xffffffff;
            uStack388 = 0xffffffff;
            uStack384 = 0xffffffff;
            uStack380 = 0xffffffff;
          }
          else {
            lVar35 = plVar31[0xf];
            lVar15 = 0;
            do {
              *(ulong *)((long)&uStack408 + lVar15) =
                   *(ulong *)((long)&uStack408 + lVar15) | *(ulong *)(lVar35 + lVar15);
              lVar15 = lVar15 + 8;
            } while (lVar15 != 0x20);
          }
code_r0x0010a656:
          if ((plVar31[0x1b] & 0x40U) == 0) {
            uVar18 = CONCAT44(uStack408._4_4_,(uint)uStack408) & 0xfffffffffffffbff;
            uStack408._0_4_ = (uint)uVar18;
            uStack408._4_4_ = (undefined4)(uVar18 >> 0x20);
          }
          if ((plVar31[0x1b] & 0x80U) != 0) {
            uVar18 = CONCAT44(uStack408._4_4_,(uint)uStack408) & 0xfffffffffffffffe;
            uStack408._0_4_ = (uint)uVar18;
            uStack408._4_4_ = (undefined4)(uVar18 >> 0x20);
          }
          goto code_r0x0010a316;
        }
        if (bVar4 == 7) {
          uStack408._0_4_ = 0xffffffff;
          uStack408._4_4_ = 0xffffffff;
          uStack400 = 0xffffffff;
          uStack396 = 0xffffffff;
          goto code_r0x0010a656;
        }
      }
code_r0x00109faf:
      lStack536 = lStack536 + 1;
      puVar27 = puVar28;
    } while (lStack536 < *(long *)(uVar29 + 0x10));
    if ((long)puVar28 < 1) goto code_r0x0010aa29;
    pbStack440 = (byte *)((long)puVar28 + 1);
    uStack432 = 0;
    lVar15 = (long)pbStack440 * 8;
    lVar35 = func_0x00101ac0(lVar15);
    lStack424 = lVar35;
    if (((lVar35 != 0) && (iStack444 = 0, (long)puVar28 < 0xaaaaaaaaaaaa856)) &&
       (lVar17 = func_0x00101ac0((long)puVar28 * 0x18), lVar17 != 0)) {
      lVar15 = lVar15 + -8;
      bVar3 = false;
      lVar35 = lVar17 + lVar15;
      lVar15 = lVar15 + lVar35;
      uStack344._0_1_ = 0;
      uStack344._1_1_ = 0;
      uStack344._2_2_ = 0;
      uStack344._4_4_ = 0;
      uStack336 = 0;
      uStack332 = 0;
      puVar27 = (undefined8 *)0x0;
      plVar37 = (long *)(lVar16 + 8);
      uStack328 = 0;
      uStack324 = 0;
      uStack320 = 0;
      uStack316 = 0;
      puVar32 = puVar25;
      do {
        uStack432 = 0;
        if (0 < *plVar37) {
          lVar38 = 0;
          do {
            lVar34 = *(long *)(plVar31[3] + *(long *)(plVar37[1] + lVar38 * 8) * 8);
            if ((lVar34 != -1) &&
               (iStack444 = re_node_set_merge(&pbStack440,plVar31[6] + lVar34 * 0x18,lVar34 * 3),
               iStack444 != 0)) goto code_r0x0010a7ed;
            lVar38 = lVar38 + 1;
          } while (*plVar37 != lVar38 && lVar38 <= *plVar37);
        }
        lVar38 = re_acquire_state_context(&iStack444,plVar31,&pbStack440);
        *(long *)(lVar17 + (long)puVar27 * 8) = lVar38;
        if ((lVar38 == 0) && (iStack444 != 0)) goto code_r0x0010a7ed;
        if (*(char *)(lVar38 + 0x68) < '\0') {
          lVar38 = re_acquire_state_context(&iStack444,plVar31,&pbStack440,1);
          *(long *)(lVar35 + (long)puVar27 * 8) = lVar38;
          if ((lVar38 == 0) && (iStack444 != 0)) goto code_r0x0010a7ed;
          if ((lVar38 != *(long *)(lVar17 + (long)puVar27 * 8)) &&
             (1 < *(int *)((long)plVar31 + 0xb4))) {
            bVar3 = true;
          }
          lVar38 = re_acquire_state_context(&iStack444,plVar31,&pbStack440,2);
          *(long *)(lVar15 + (long)puVar27 * 8) = lVar38;
          if ((lVar38 == 0) && (iStack444 != 0)) goto code_r0x0010a7ed;
        }
        else {
          *(long *)(lVar35 + (long)puVar27 * 8) = lVar38;
          *(undefined8 *)(lVar15 + (long)puVar27 * 8) = *(undefined8 *)(lVar17 + (long)puVar27 * 8);
        }
        lVar38 = 0;
        do {
          *(ulong *)(&uStack344 + lVar38) =
               *(ulong *)(&uStack344 + lVar38) | *(ulong *)((long)puVar32 + lVar38);
          lVar38 = lVar38 + 8;
        } while (lVar38 != 0x20);
        puVar27 = (undefined8 *)((long)puVar27 + 1);
        plVar37 = plVar37 + 3;
        puVar32 = puVar32 + 4;
      } while (puVar27 != puVar28);
      if (bVar3) {
        puVar27 = (undefined8 *)func_0x00101a70(8,0x200);
        *(undefined8 **)(uVar29 + 0x60) = puVar27;
        if (puVar27 != (undefined8 *)0x0) {
          lVar38 = 0;
          puVar19 = puVar27;
          do {
            uVar18 = *(ulong *)(&uStack344 + lVar38);
            if (uVar18 != 0) {
              uVar23 = 1;
              puVar30 = puVar19;
              do {
                if ((uVar18 & 1) != 0) {
                  if ((*(ulong *)(lVar16 + 0x1800 + lVar38) & uVar23) == 0) {
                    puVar32 = (ulong *)(lVar16 + 0x1820 + lVar38);
                    lVar34 = 0;
                    do {
                      uVar20 = *puVar32;
                      lVar34 = lVar34 + 1;
                      puVar32 = puVar32 + 4;
                    } while ((uVar20 & uVar23) == 0);
                  }
                  else {
                    lVar34 = 0;
                  }
                  *puVar30 = *(undefined8 *)(lVar17 + lVar34 * 8);
                  puVar30[0x100] = *(undefined8 *)(lVar35 + lVar34 * 8);
                }
                uVar23 = uVar23 * 2;
                puVar30 = puVar30 + 1;
                uVar18 = uVar18 >> 1;
              } while (uVar18 != 0);
            }
            lVar38 = lVar38 + 8;
            puVar19 = puVar19 + 0x40;
          } while (lVar38 != 0x20);
          goto code_r0x0010a20e;
        }
      }
      else {
        puVar27 = (undefined8 *)func_0x00101a70(8,0x100);
        *(undefined8 **)(uVar29 + 0x58) = puVar27;
        if (puVar27 != (undefined8 *)0x0) {
          lVar38 = 0;
          do {
            uVar18 = *(ulong *)(&uStack344 + lVar38);
            if (uVar18 != 0) {
              uVar23 = 1;
              puVar19 = puVar27 + lVar38 * 8;
              do {
                if ((uVar18 & 1) != 0) {
                  if ((*(ulong *)(lVar16 + 0x1800 + lVar38) & uVar23) == 0) {
                    puVar32 = (ulong *)(lVar16 + 0x1820 + lVar38);
                    lVar34 = 0;
                    do {
                      uVar20 = *puVar32;
                      lVar34 = lVar34 + 1;
                      puVar32 = puVar32 + 4;
                    } while ((uVar20 & uVar23) == 0);
                    lVar34 = lVar34 * 8;
                  }
                  else {
                    lVar34 = 0;
                  }
                  if ((*(ulong *)((long)plVar31 + lVar38 + 0xb8) & uVar23) == 0) {
                    *puVar19 = *(undefined8 *)(lVar17 + lVar34);
                  }
                  else {
                    *puVar19 = *(undefined8 *)(lVar35 + lVar34);
                  }
                }
                uVar23 = uVar23 * 2;
                puVar19 = puVar19 + 1;
                uVar18 = uVar18 >> 1;
              } while (uVar18 != 0);
            }
            lVar38 = lVar38 + 8;
          } while (lVar38 != 0x20);
code_r0x0010a20e:
          if ((uStack344._1_1_ & 4) != 0) {
            puVar19 = (undefined8 *)0x0;
            do {
              if ((*puVar25 & 0x400) != 0) {
                uVar11 = *(undefined8 *)(lVar15 + (long)puVar19 * 8);
                puVar27[10] = uVar11;
                if (bVar3) {
                  puVar27[0x10a] = uVar11;
                }
                break;
              }
              puVar19 = (undefined8 *)((long)puVar19 + 1);
              puVar25 = puVar25 + 4;
            } while (puVar19 != puVar28);
          }
          func_0x00101880(lVar17);
          func_0x00101880(lStack424);
          puVar27 = (undefined8 *)(lVar16 + 0x10);
          puVar28 = puVar27 + (long)puVar28 * 3;
          do {
            uVar11 = *puVar27;
            puVar27 = puVar27 + 3;
            func_0x00101880(uVar11);
          } while (puVar28 != puVar27);
          func_0x00101880(lVar16);
          uVar18 = 1;
          goto code_r0x0010a2c2;
        }
      }
code_r0x0010a7ed:
      func_0x00101880(lVar17);
      lVar35 = lStack424;
    }
    func_0x00101880(lVar35);
    puVar19 = (undefined8 *)(lVar16 + 0x10);
    puVar27 = puVar19 + (long)puVar28 * 3;
    do {
      uVar11 = *puVar19;
      puVar19 = puVar19 + 3;
      func_0x00101880(uVar11);
    } while (puVar27 != puVar19);
    func_0x00101880(lVar16);
  }
code_r0x0010a2c0:
  do {
    uVar18 = 0;
code_r0x0010a2c2:
    while( true ) {
      if (lStack304 == *(long *)(in_FS_OFFSET + 0x28)) {
        return uVar18;
      }
      func_0x00101990();
code_r0x0010aa29:
      func_0x00101880(lVar16);
      if (puVar27 != (undefined8 *)0x0) break;
code_r0x0010a9b4:
      uVar18 = func_0x00101a70(8,0x100);
      *(ulong *)(uVar29 + 0x58) = uVar18;
      uVar18 = uVar18 & 0xffffffffffffff00 | (ulong)(uVar18 != 0);
    }
  } while( true );
code_r0x001099b8:
  unaff_R14 = (byte **)((long)unaff_R14 - 1);
  if (unaff_R14 < ppbVar22) goto code_r0x001096d1;
  goto code_r0x001099c5;
}

