
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong re_compile_fastmap_iter_isra_30
                (long **param_1,long **param_2,long *param_3,long *param_4,long param_5)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  long **pplVar4;
  uint **ppuVar5;
  uint uVar6;
  int iVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long *plVar11;
  uint *puVar12;
  uint *puVar13;
  long *plVar14;
  long extraout_RDX;
  uint uVar15;
  undefined8 uVar16;
  long **pplVar17;
  uint *puVar18;
  long lVar19;
  long **pplVar20;
  char cVar21;
  long *plVar22;
  ulong uVar23;
  long in_FS_OFFSET;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  long **pplStack424;
  long **pplStack400;
  uint uStack340;
  long lStack336;
  byte bStack328;
  undefined auStack327 [263];
  long lStack64;
  
  uVar15 = 0;
  pplVar4 = (long **)*param_1;
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)((long)pplVar4 + 0xb4) == 1) {
    uVar15 = (uint)((ulong)param_1[3] >> 0x16) & 1;
  }
  plVar14 = param_4;
  pplVar17 = param_2;
  pplVar20 = (long **)0x0;
  if (0 < (long)*param_2) {
    pplStack424 = (long **)0x0;
    do {
      lVar10 = *(long *)(*param_3 + (long)pplStack424 * 8);
      plVar14 = *pplVar4;
      pplVar17 = (long **)(plVar14 + lVar10 * 2);
      bVar2 = *(byte *)(pplVar17 + 1);
      if (bVar2 == 1) {
        bVar2 = *(byte *)pplVar17;
        *(undefined *)((long)param_4 + (ulong)bVar2) = 1;
        if (uVar15 != 0) {
          plVar22 = (long *)func_0x00101f40();
          *(undefined *)((long)param_4 + (long)*(int *)(*plVar22 + (ulong)bVar2 * 4)) = 1;
        }
        if (((*(byte *)((long)param_1 + 0x1a) & 0x40) != 0) &&
           (pplVar17 = pplVar4, 1 < *(int *)((long)pplVar4 + 0xb4))) {
          bStack328 = *(byte *)(*pplVar4 + lVar10 * 2);
          if ((pplVar4[2] < (long *)(lVar10 + 1U) || pplVar4[2] == (long *)(lVar10 + 1U)) ||
             (plVar14 = *pplVar4 + lVar10 * 2 + 2, (*(uint *)(plVar14 + 1) & 0x2000ff) != 0x200001))
          {
            puVar9 = auStack327;
          }
          else {
            lVar19 = lVar10 * 0x10 + 0x20;
            puVar8 = auStack327;
            do {
              puVar9 = puVar8 + 1;
              *puVar8 = *(undefined *)plVar14;
              if (pplVar4[2] < puVar9 + (lVar10 - (long)&bStack328) ||
                  pplVar4[2] == (long *)(puVar9 + (lVar10 - (long)&bStack328))) break;
              plVar14 = (long *)((long)*pplVar4 + lVar19);
              lVar19 = lVar19 + 0x10;
              puVar8 = puVar9;
            } while ((*(uint *)(plVar14 + 1) & 0x2000ff) == 0x200001);
          }
          lStack336 = 0;
          plVar14 = &lStack336;
          pplVar17 = (long **)&bStack328;
          puVar8 = (undefined *)rpl_mbrtowc(&uStack340,&bStack328,puVar9 + -(long)&bStack328);
          if (puVar9 + -(long)&bStack328 == puVar8) {
            uVar6 = func_0x00101ea0((ulong)uStack340);
            pplVar17 = (long **)(ulong)uVar6;
            lVar10 = func_0x00101db0(&bStack328,pplVar17,&lStack336);
            if (lVar10 != -1) {
              *(undefined *)((long)param_4 + (ulong)bStack328) = 1;
            }
          }
        }
      }
      else {
        if (bVar2 == 3) {
          lVar10 = 0;
          pplStack400 = (long **)0x0;
          pplVar20 = pplStack424;
          plVar22 = param_4;
          while( true ) {
            uVar23 = 0;
            pplVar17 = pplStack400;
            do {
              if ((((ulong)pplVar20 >> (uVar23 & 0x1f) & 1) != 0) &&
                 (*(undefined *)((long)plVar22 + uVar23) = 1, uVar15 != 0)) {
                plVar11 = (long *)func_0x00101f40();
                *(undefined *)((long)param_4 + (long)*(int *)(*plVar11 + (lVar10 + uVar23) * 4)) = 1
                ;
              }
              uVar23 = uVar23 + 1;
            } while (uVar23 != 0x40);
            lVar10 = lVar10 + 0x40;
            pplStack400 = pplStack400 + 1;
            plVar22 = plVar22 + 8;
            if (lVar10 == 0x100) break;
            plVar14 = *pplVar4;
          }
        }
        else {
          if (bVar2 != 6) {
            uVar24 = SUB164(_UNK_00117e30,0);
            uVar25 = SUB164(_UNK_00117e30 >> 0x20,0);
            uVar26 = SUB164(_UNK_00117e30 >> 0x40,0);
            uVar27 = SUB164(_UNK_00117e30 >> 0x60,0);
            pplVar20 = pplStack424;
            if ((bVar2 & 0xfd) == 5) {
              *(undefined4 *)param_4 = uVar24;
              *(undefined4 *)((long)param_4 + 4) = uVar25;
              *(undefined4 *)(param_4 + 1) = uVar26;
              *(undefined4 *)((long)param_4 + 0xc) = uVar27;
              *(undefined4 *)(param_4 + 2) = uVar24;
              *(undefined4 *)((long)param_4 + 0x14) = uVar25;
              *(undefined4 *)(param_4 + 3) = uVar26;
              *(undefined4 *)((long)param_4 + 0x1c) = uVar27;
              *(undefined4 *)(param_4 + 4) = uVar24;
              *(undefined4 *)((long)param_4 + 0x24) = uVar25;
              *(undefined4 *)(param_4 + 5) = uVar26;
              *(undefined4 *)((long)param_4 + 0x2c) = uVar27;
              *(undefined4 *)(param_4 + 6) = uVar24;
              *(undefined4 *)((long)param_4 + 0x34) = uVar25;
              *(undefined4 *)(param_4 + 7) = uVar26;
              *(undefined4 *)((long)param_4 + 0x3c) = uVar27;
              *(undefined4 *)(param_4 + 8) = uVar24;
              *(undefined4 *)((long)param_4 + 0x44) = uVar25;
              *(undefined4 *)(param_4 + 9) = uVar26;
              *(undefined4 *)((long)param_4 + 0x4c) = uVar27;
              *(undefined4 *)(param_4 + 10) = uVar24;
              *(undefined4 *)((long)param_4 + 0x54) = uVar25;
              *(undefined4 *)(param_4 + 0xb) = uVar26;
              *(undefined4 *)((long)param_4 + 0x5c) = uVar27;
              *(undefined4 *)(param_4 + 0xc) = uVar24;
              *(undefined4 *)((long)param_4 + 100) = uVar25;
              *(undefined4 *)(param_4 + 0xd) = uVar26;
              *(undefined4 *)((long)param_4 + 0x6c) = uVar27;
              *(undefined4 *)(param_4 + 0xe) = uVar24;
              *(undefined4 *)((long)param_4 + 0x74) = uVar25;
              *(undefined4 *)(param_4 + 0xf) = uVar26;
              *(undefined4 *)((long)param_4 + 0x7c) = uVar27;
              *(undefined4 *)(param_4 + 0x10) = uVar24;
              *(undefined4 *)((long)param_4 + 0x84) = uVar25;
              *(undefined4 *)(param_4 + 0x11) = uVar26;
              *(undefined4 *)((long)param_4 + 0x8c) = uVar27;
              *(undefined4 *)(param_4 + 0x12) = uVar24;
              *(undefined4 *)((long)param_4 + 0x94) = uVar25;
              *(undefined4 *)(param_4 + 0x13) = uVar26;
              *(undefined4 *)((long)param_4 + 0x9c) = uVar27;
              *(undefined4 *)(param_4 + 0x14) = uVar24;
              *(undefined4 *)((long)param_4 + 0xa4) = uVar25;
              *(undefined4 *)(param_4 + 0x15) = uVar26;
              *(undefined4 *)((long)param_4 + 0xac) = uVar27;
              *(undefined4 *)(param_4 + 0x16) = uVar24;
              *(undefined4 *)((long)param_4 + 0xb4) = uVar25;
              *(undefined4 *)(param_4 + 0x17) = uVar26;
              *(undefined4 *)((long)param_4 + 0xbc) = uVar27;
              *(undefined4 *)(param_4 + 0x18) = uVar24;
              *(undefined4 *)((long)param_4 + 0xc4) = uVar25;
              *(undefined4 *)(param_4 + 0x19) = uVar26;
              *(undefined4 *)((long)param_4 + 0xcc) = uVar27;
              *(undefined4 *)(param_4 + 0x1a) = uVar24;
              *(undefined4 *)((long)param_4 + 0xd4) = uVar25;
              *(undefined4 *)(param_4 + 0x1b) = uVar26;
              *(undefined4 *)((long)param_4 + 0xdc) = uVar27;
              *(undefined4 *)(param_4 + 0x1c) = uVar24;
              *(undefined4 *)((long)param_4 + 0xe4) = uVar25;
              *(undefined4 *)(param_4 + 0x1d) = uVar26;
              *(undefined4 *)((long)param_4 + 0xec) = uVar27;
              *(undefined4 *)(param_4 + 0x1e) = uVar24;
              *(undefined4 *)((long)param_4 + 0xf4) = uVar25;
              *(undefined4 *)(param_4 + 0x1f) = uVar26;
              *(undefined4 *)((long)param_4 + 0xfc) = uVar27;
              if (bVar2 != 2) break;
            }
            else {
              if (bVar2 != 2) goto code_r0x0010da17;
              *(undefined4 *)param_4 = uVar24;
              *(undefined4 *)((long)param_4 + 4) = uVar25;
              *(undefined4 *)(param_4 + 1) = uVar26;
              *(undefined4 *)((long)param_4 + 0xc) = uVar27;
              *(undefined4 *)(param_4 + 2) = uVar24;
              *(undefined4 *)((long)param_4 + 0x14) = uVar25;
              *(undefined4 *)(param_4 + 3) = uVar26;
              *(undefined4 *)((long)param_4 + 0x1c) = uVar27;
              *(undefined4 *)(param_4 + 4) = uVar24;
              *(undefined4 *)((long)param_4 + 0x24) = uVar25;
              *(undefined4 *)(param_4 + 5) = uVar26;
              *(undefined4 *)((long)param_4 + 0x2c) = uVar27;
              *(undefined4 *)(param_4 + 6) = uVar24;
              *(undefined4 *)((long)param_4 + 0x34) = uVar25;
              *(undefined4 *)(param_4 + 7) = uVar26;
              *(undefined4 *)((long)param_4 + 0x3c) = uVar27;
              *(undefined4 *)(param_4 + 8) = uVar24;
              *(undefined4 *)((long)param_4 + 0x44) = uVar25;
              *(undefined4 *)(param_4 + 9) = uVar26;
              *(undefined4 *)((long)param_4 + 0x4c) = uVar27;
              *(undefined4 *)(param_4 + 10) = uVar24;
              *(undefined4 *)((long)param_4 + 0x54) = uVar25;
              *(undefined4 *)(param_4 + 0xb) = uVar26;
              *(undefined4 *)((long)param_4 + 0x5c) = uVar27;
              *(undefined4 *)(param_4 + 0xc) = uVar24;
              *(undefined4 *)((long)param_4 + 100) = uVar25;
              *(undefined4 *)(param_4 + 0xd) = uVar26;
              *(undefined4 *)((long)param_4 + 0x6c) = uVar27;
              *(undefined4 *)(param_4 + 0xe) = uVar24;
              *(undefined4 *)((long)param_4 + 0x74) = uVar25;
              *(undefined4 *)(param_4 + 0xf) = uVar26;
              *(undefined4 *)((long)param_4 + 0x7c) = uVar27;
              *(undefined4 *)(param_4 + 0x10) = uVar24;
              *(undefined4 *)((long)param_4 + 0x84) = uVar25;
              *(undefined4 *)(param_4 + 0x11) = uVar26;
              *(undefined4 *)((long)param_4 + 0x8c) = uVar27;
              *(undefined4 *)(param_4 + 0x12) = uVar24;
              *(undefined4 *)((long)param_4 + 0x94) = uVar25;
              *(undefined4 *)(param_4 + 0x13) = uVar26;
              *(undefined4 *)((long)param_4 + 0x9c) = uVar27;
              *(undefined4 *)(param_4 + 0x14) = uVar24;
              *(undefined4 *)((long)param_4 + 0xa4) = uVar25;
              *(undefined4 *)(param_4 + 0x15) = uVar26;
              *(undefined4 *)((long)param_4 + 0xac) = uVar27;
              *(undefined4 *)(param_4 + 0x16) = uVar24;
              *(undefined4 *)((long)param_4 + 0xb4) = uVar25;
              *(undefined4 *)(param_4 + 0x17) = uVar26;
              *(undefined4 *)((long)param_4 + 0xbc) = uVar27;
              *(undefined4 *)(param_4 + 0x18) = uVar24;
              *(undefined4 *)((long)param_4 + 0xc4) = uVar25;
              *(undefined4 *)(param_4 + 0x19) = uVar26;
              *(undefined4 *)((long)param_4 + 0xcc) = uVar27;
              *(undefined4 *)(param_4 + 0x1a) = uVar24;
              *(undefined4 *)((long)param_4 + 0xd4) = uVar25;
              *(undefined4 *)(param_4 + 0x1b) = uVar26;
              *(undefined4 *)((long)param_4 + 0xdc) = uVar27;
              *(undefined4 *)(param_4 + 0x1c) = uVar24;
              *(undefined4 *)((long)param_4 + 0xe4) = uVar25;
              *(undefined4 *)(param_4 + 0x1d) = uVar26;
              *(undefined4 *)((long)param_4 + 0xec) = uVar27;
              *(undefined4 *)(param_4 + 0x1e) = uVar24;
              *(undefined4 *)((long)param_4 + 0xf4) = uVar25;
              *(undefined4 *)(param_4 + 0x1f) = uVar26;
              *(undefined4 *)((long)param_4 + 0xfc) = uVar27;
            }
            *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) | 1;
            break;
          }
          plVar22 = *pplVar17;
          if ((*(int *)((long)pplVar4 + 0xb4) < 2) ||
             (((plVar22[9] == 0 && ((*(byte *)(plVar22 + 4) & 1) == 0)) && (plVar22[8] == 0)))) {
            lVar10 = 0;
            if (0 < plVar22[5]) {
              do {
                while( true ) {
                  lStack336 = 0;
                  pplVar17 = (long **)(ulong)*(uint *)(*plVar22 + lVar10 * 4);
                  lVar19 = func_0x00101db0(&bStack328,pplVar17,&lStack336);
                  if (lVar19 != -1) {
                    uVar23 = (ulong)bStack328;
                    *(undefined *)((long)param_4 + uVar23) = 1;
                    if (uVar15 != 0) {
                      plVar11 = (long *)func_0x00101f40();
                      *(undefined *)((long)param_4 + (long)*(int *)(*plVar11 + uVar23 * 4)) = 1;
                    }
                  }
                  if (((*(byte *)((long)param_1 + 0x1a) & 0x40) != 0) &&
                     (1 < *(int *)((long)pplVar4 + 0xb4))) break;
code_r0x0010dbdf:
                  lVar10 = lVar10 + 1;
                  if (plVar22[5] <= lVar10) goto code_r0x0010da17;
                }
                uVar6 = func_0x00101ea0((ulong)*(uint *)(*plVar22 + lVar10 * 4));
                pplVar17 = (long **)(ulong)uVar6;
                lVar19 = func_0x00101db0(&bStack328,pplVar17,&lStack336);
                if (lVar19 == -1) goto code_r0x0010dbdf;
                lVar10 = lVar10 + 1;
                *(undefined *)((long)param_4 + (ulong)bStack328) = 1;
              } while (lVar10 < plVar22[5]);
            }
          }
          else {
            uStack340 = uStack340 & 0xffffff00;
            do {
              lStack336 = 0;
              plVar14 = &lStack336;
              pplVar17 = (long **)&uStack340;
              lVar10 = rpl_mbrtowc(0,&uStack340,1);
              if (lVar10 == -2) {
                *(undefined *)((long)param_4 + (ulong)(byte)uStack340) = 1;
              }
              uStack340 = uStack340 & 0xffffff00 | (uint)(byte)((byte)uStack340 + 1);
            } while ((byte)((byte)uStack340 + 1) != 0);
          }
        }
      }
code_r0x0010da17:
      pplStack424 = (long **)((long)pplStack424 + 1);
      pplVar20 = param_2;
    } while ((long)pplStack424 < (long)*param_2);
  }
  if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
  func_0x00101c20();
  pplVar20 = pplVar20 + extraout_RDX * 2;
  cVar21 = *(char *)(pplVar20 + 1);
  if (cVar21 == '\a') {
    pbVar1 = (byte *)(plVar14[1] + param_5);
    bVar2 = *pbVar1;
    if ((0xc1 < bVar2) && (param_5 + 1 < plVar14[0xb])) {
      bVar3 = *(byte *)(plVar14[1] + 1 + param_5);
      if (bVar2 < 0xe0) {
        if ((byte)(bVar3 + 0x80) < 0x40) {
          return 2;
        }
      }
      else {
        if (bVar2 < 0xf0) {
          if ((bVar2 == 0xe0) && (bVar3 < 0xa0)) {
            return 0;
          }
          uVar16 = 3;
        }
        else {
          if (bVar2 < 0xf8) {
            if ((bVar2 == 0xf0) && (bVar3 < 0x90)) {
              return 0;
            }
            uVar16 = 4;
          }
          else {
            if (bVar2 < 0xfc) {
              if ((bVar2 == 0xf8) && (bVar3 < 0x88)) {
                return 0;
              }
              uVar16 = 5;
            }
            else {
              if (0xfd < bVar2) {
                return 0;
              }
              if ((bVar2 == 0xfc) && (bVar3 < 0x84)) {
                return 0;
              }
              uVar16 = 6;
            }
          }
        }
        if (param_5 + (int)uVar16 <= plVar14[0xb]) {
          lVar10 = 1;
          while ((byte)(pbVar1[lVar10] + 0x80) < 0x40) {
            lVar10 = lVar10 + 1;
            if ((int)uVar16 <= lVar10) {
              return uVar16;
            }
          }
        }
      }
    }
  }
  else {
    if (*(int *)(plVar14 + 0x12) != 1) {
      uVar15 = re_string_char_size_at_part_0(plVar14,param_5);
      uVar23 = (ulong)uVar15;
      if (cVar21 == '\x05') {
        if ((int)uVar15 < 2) {
          return 0;
        }
        if ((((ulong)*pplVar17 & 0x40) == 0) && (*(char *)(plVar14[1] + param_5) == '\n')) {
          return 0;
        }
        if (((ulong)*pplVar17 & 0x80) == 0) {
          return uVar23;
        }
        bVar2 = *(byte *)(plVar14[1] + param_5);
      }
      else {
        if (cVar21 != '\x06') {
          return 0;
        }
        if ((int)uVar15 < 2) {
          return 0;
        }
        ppuVar5 = (uint **)*pplVar20;
        puVar18 = ppuVar5[8];
        puVar13 = ppuVar5[5];
        if (((puVar18 != (uint *)0x0) || (ppuVar5[9] != (uint *)0x0)) || (puVar13 != (uint *)0x0)) {
          uVar15 = *(uint *)(plVar14[2] + param_5 * 4);
          if (0 < (long)puVar13) {
            if (uVar15 != **ppuVar5) {
              puVar12 = (uint *)0x0;
              do {
                puVar12 = (uint *)((long)puVar12 + 1);
                if (puVar12 == puVar13) goto code_r0x0010df27;
              } while (uVar15 != (*ppuVar5)[(long)puVar12]);
            }
code_r0x0010df62:
            if ((*(byte *)(ppuVar5 + 4) & 1) != 0) {
              return 0;
            }
            return uVar23;
          }
code_r0x0010df27:
          if (0 < (long)ppuVar5[9]) {
            lVar10 = 0;
            do {
              iVar7 = func_0x00101bc0((ulong)uVar15,*(undefined8 *)(ppuVar5[3] + lVar10 * 2));
              if (iVar7 != 0) goto code_r0x0010df62;
              lVar10 = lVar10 + 1;
            } while (lVar10 < (long)ppuVar5[9]);
            puVar18 = ppuVar5[8];
          }
          if (0 < (long)puVar18) {
            puVar13 = (uint *)0x0;
            do {
              if (((int)ppuVar5[1][(long)puVar13] <= (int)uVar15) &&
                 ((int)uVar15 <= (int)ppuVar5[2][(long)puVar13])) goto code_r0x0010df62;
              puVar13 = (uint *)((long)puVar13 + 1);
            } while (puVar13 != puVar18);
          }
        }
        bVar2 = *(byte *)(ppuVar5 + 4) & 1;
      }
      if (bVar2 != 0) {
        return uVar23;
      }
    }
  }
  return 0;
}

