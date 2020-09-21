
ulong extend_buffers(long *param_1)

{
  uint *puVar1;
  byte **ppbVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  long *plVar8;
  byte *pbVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *unaff_RBP;
  ulong uVar15;
  long lVar16;
  byte *pbVar17;
  byte *unaff_R13;
  byte *pbVar18;
  long in_FS_OFFSET;
  long *plStack208;
  byte *pbStack200;
  byte *pbStack192;
  uint *puStack184;
  uint uStack148;
  long lStack144;
  byte abStack136 [72];
  ulong uStack64;
  
  if (0xffffffffffffffe < (ulong)param_1[8]) {
    return 0xc;
  }
  uVar6 = re_string_realloc_buffers();
  uVar15 = (ulong)uVar6;
  if (uVar6 == 0) {
    if (param_1[0x17] != 0) {
      lVar11 = func_0x00101b30();
      if (lVar11 == 0) {
        return 0xc;
      }
      param_1[0x17] = lVar11;
    }
    if (*(char *)(param_1 + 0x11) != '\0') {
      if (*(int *)(param_1 + 0x12) < 2) {
        build_upper_buffer();
        return uVar15;
      }
      pbVar14 = (byte *)param_1[0xb];
      pbVar9 = (byte *)param_1[6];
      uStack64 = *(ulong *)(in_FS_OFFSET + 0x28);
      if ((byte *)param_1[8] == pbVar14 || (long)param_1[8] < (long)pbVar14) {
        pbVar14 = (byte *)param_1[8];
      }
      if (((*(char *)((long)param_1 + 0x8a) == '\0') && (param_1[0xf] == 0)) &&
         (*(char *)((long)param_1 + 0x8c) == '\0')) {
        if ((long)pbVar9 < (long)pbVar14) {
          do {
            unaff_R13 = pbVar9;
            plStack208 = param_1 + 4;
            unaff_RBP = unaff_R13 + *param_1 + param_1[5];
            bVar3 = *unaff_RBP;
            if (((bVar3 & 0x80) == 0) && (iVar5 = func_0x00101c40(plStack208), iVar5 != 0)) {
              plVar8 = (long *)func_0x00101860();
              unaff_R13[param_1[1]] = (byte)*(undefined4 *)(*plVar8 + (ulong)bVar3 * 4);
              *(uint *)(param_1[2] + (long)unaff_R13 * 4) = (uint)unaff_R13[param_1[1]];
              pbVar9 = unaff_R13 + 1;
            }
            else {
              lStack144 = param_1[4];
              pbStack200 = pbVar14 + -(long)unaff_R13;
              unaff_RBP = (byte *)rpl_mbrtowc();
              uVar6 = uStack148;
              if (unaff_RBP + -1 < (byte *)0xfffffffffffffffd) {
                uVar4 = func_0x00101be0((ulong)uStack148);
                if (uVar6 == uVar4) {
                  func_0x00101a90(unaff_R13 + param_1[1],unaff_R13 + *param_1 + param_1[5],unaff_RBP
                                 );
                }
                else {
                  pbVar9 = (byte *)func_0x00101ad0(abStack136,(ulong)uVar4,&lStack144);
                  pbVar13 = unaff_R13;
                  if (unaff_RBP != pbVar9) goto code_r0x001063ee;
                  func_0x00101a90(unaff_R13 + param_1[1],abStack136,unaff_RBP);
                }
                lVar11 = param_1[2];
                pbVar13 = unaff_RBP + (long)unaff_R13;
                *(uint *)(lVar11 + (long)unaff_R13 * 4) = uVar4;
                pbVar9 = unaff_R13 + 1;
                if ((long)(unaff_R13 + 1) < (long)pbVar13) {
                  puVar7 = (undefined4 *)(lVar11 + 4 + (long)unaff_R13 * 4);
                  do {
                    *puVar7 = 0xffffffff;
                    puVar7 = puVar7 + 1;
                    pbVar9 = pbVar13;
                  } while ((undefined4 *)(lVar11 + (long)pbVar13 * 4) != puVar7);
                }
              }
              else {
                if ((unaff_RBP + -1 == (byte *)0xfffffffffffffffd) && (param_1[8] < param_1[0xb])) {
                  param_1[4] = lStack144;
                  pbVar9 = unaff_R13;
                  break;
                }
                bVar3 = unaff_R13[param_1[5] + *param_1];
                unaff_R13[param_1[1]] = bVar3;
                *(uint *)(param_1[2] + (long)unaff_R13 * 4) = (uint)bVar3;
                pbVar9 = unaff_R13 + 1;
                if (unaff_RBP == (byte *)0xffffffffffffffff) {
                  param_1[4] = lStack144;
                }
              }
            }
          } while ((long)pbVar9 < (long)pbVar14);
        }
        *(byte **)(param_1 + 6) = pbVar9;
        *(byte **)(param_1 + 7) = pbVar9;
        uVar10 = 0;
        goto code_r0x0010639f;
      }
      pbVar17 = (byte *)param_1[7];
      pbVar13 = pbVar9;
code_r0x00106390:
      do {
        unaff_R13 = pbVar17;
        if ((long)pbVar13 < (long)pbVar14) {
          pbStack200 = pbVar14 + -(long)pbVar13;
code_r0x001063ee:
          puStack184 = &uStack148;
          lVar11 = param_1[0xf];
          lStack144 = param_1[4];
          if (lVar11 == 0) {
            pbStack192 = unaff_R13 + *param_1 + param_1[5];
          }
          else {
            iVar5 = *(int *)(param_1 + 0x12);
            if (0 < iVar5) {
              lVar16 = param_1[5];
              pbVar9 = (byte *)0x0;
              lVar12 = *param_1;
              do {
                abStack136[(long)pbVar9] =
                     *(byte *)(lVar11 + (ulong)pbVar9[(long)(unaff_R13 + lVar12 + lVar16)]);
                if ((byte *)(ulong)(iVar5 - 1) == pbVar9) break;
                pbVar9 = pbVar9 + 1;
              } while (pbStack200 != pbVar9);
            }
            pbStack192 = abStack136;
          }
          unaff_RBP = (byte *)rpl_mbrtowc(puStack184,pbStack192,pbStack200,param_1 + 4);
          uVar6 = uStack148;
          pbVar17 = unaff_RBP + -1;
          pbVar9 = pbVar13;
          if (pbVar17 < (byte *)0xfffffffffffffffd) {
            uVar4 = func_0x00101be0((ulong)uStack148);
            if (uVar6 == uVar4) {
code_r0x00106760:
              func_0x00101a90(pbVar13 + param_1[1],pbStack192,unaff_RBP);
            }
            else {
              pbVar18 = (byte *)func_0x00101ad0(abStack136,(ulong)uVar4,&lStack144);
              if (unaff_RBP != pbVar18) {
                if (pbVar18 == (byte *)0xffffffffffffffff) goto code_r0x00106760;
                if ((byte *)param_1[8] < pbVar18 + (long)pbVar13) goto code_r0x00106808;
                if (param_1[3] == 0) {
                  lVar11 = func_0x00101ac0((long)(byte *)param_1[8] * 8);
                  param_1[3] = lVar11;
                  if (lVar11 == 0) {
                    uVar10 = 0xc;
                    goto code_r0x0010639f;
                  }
                }
                if (*(char *)((long)param_1 + 0x8c) == '\0') {
                  if (pbVar13 != (byte *)0x0) {
                    lVar11 = param_1[3];
                    pbVar9 = (byte *)0x0;
                    do {
                      *(byte **)(lVar11 + (long)pbVar9 * 8) = pbVar9;
                      pbVar9 = pbVar9 + 1;
                    } while (pbVar9 != pbVar13);
                  }
                  *(undefined *)((long)param_1 + 0x8c) = 1;
                }
                func_0x00101a90(pbVar13 + param_1[1],abStack136,pbVar18,abStack136);
                puVar1 = (uint *)(param_1[2] + (long)pbVar13 * 4);
                lVar11 = param_1[3];
                *puVar1 = uVar4;
                ppbVar2 = (byte **)(lVar11 + (long)pbVar13 * 8);
                *ppbVar2 = unaff_R13;
                if ((byte *)0x1 < pbVar18) {
                  pbVar9 = (byte *)0x1;
                  do {
                    pbVar14 = pbVar17;
                    if (pbVar9 < unaff_RBP) {
                      pbVar14 = pbVar9;
                    }
                    ppbVar2[(long)pbVar9] = pbVar14 + (long)unaff_R13;
                    puVar1[(long)pbVar9] = 0xffffffff;
                    pbVar9 = pbVar9 + 1;
                  } while (pbVar9 != pbVar18);
                }
                pbVar14 = pbVar18 + -(long)unaff_RBP + param_1[0xb];
                *(byte **)(param_1 + 0xb) = pbVar14;
                if ((long)unaff_R13 < param_1[0xc]) {
                  *(byte **)(param_1 + 0xd) = pbVar18 + -(long)unaff_RBP + (long)param_1[0xd];
                }
                if ((byte *)param_1[8] == pbVar14 || (long)param_1[8] < (long)pbVar14) {
                  pbVar14 = (byte *)param_1[8];
                }
                pbVar17 = unaff_RBP + (long)unaff_R13;
                pbVar13 = pbVar18 + (long)pbVar13;
                goto code_r0x00106390;
              }
              func_0x00101a90(pbVar13 + param_1[1],abStack136,unaff_RBP);
            }
            pbVar17 = unaff_RBP + (long)unaff_R13;
            if (*(char *)((long)param_1 + 0x8c) != '\0') {
              lVar11 = param_1[3];
              lVar16 = -(long)unaff_R13;
              do {
                *(byte **)(lVar11 + (long)(pbVar13 + lVar16) * 8 + (long)unaff_R13 * 8) = unaff_R13;
                unaff_R13 = unaff_R13 + 1;
              } while (pbVar17 != unaff_R13);
            }
            pbVar18 = pbVar13 + 1;
            lVar16 = param_1[2];
            pbVar9 = unaff_RBP + (long)pbVar13;
            lVar11 = (long)pbVar13 * 4;
            *(uint *)(lVar16 + (long)pbVar13 * 4) = uVar4;
            pbVar13 = pbVar18;
            if ((long)pbVar18 < (long)pbVar9) {
              puVar7 = (undefined4 *)(lVar16 + 4 + lVar11);
              do {
                *puVar7 = 0xffffffff;
                puVar7 = puVar7 + 1;
                pbVar13 = pbVar9;
              } while ((undefined4 *)(lVar16 + (long)pbVar9 * 4) != puVar7);
            }
            goto code_r0x00106390;
          }
          if ((pbVar17 == (byte *)0xfffffffffffffffd) && (param_1[8] < param_1[0xb])) {
code_r0x00106808:
            param_1[4] = lStack144;
            goto code_r0x00106395;
          }
          bVar3 = unaff_R13[param_1[5] + *param_1];
          if (param_1[0xf] != 0) {
            bVar3 = *(byte *)(param_1[0xf] + (ulong)bVar3);
          }
          uVar6 = (uint)bVar3;
          pbVar13[param_1[1]] = bVar3;
          if (*(char *)((long)param_1 + 0x8c) != '\0') goto code_r0x0010693f;
        }
        else {
code_r0x00106395:
          *(byte **)(param_1 + 6) = pbVar13;
          *(byte **)(param_1 + 7) = unaff_R13;
          uVar10 = 0;
          pbVar9 = pbVar13;
code_r0x0010639f:
          pbVar13 = (byte *)(uStack64 ^ *(ulong *)(in_FS_OFFSET + 0x28));
          if (pbVar13 == (byte *)0x0) {
            return uVar10;
          }
          uVar6 = func_0x00101990();
code_r0x0010693f:
          *(byte **)(param_1[3] + (long)pbVar9 * 8) = unaff_R13;
        }
        pbVar17 = unaff_R13 + 1;
        *(uint *)(param_1[2] + (long)pbVar13 * 4) = uVar6;
        pbVar13 = pbVar9 + 1;
        if (unaff_RBP == (byte *)0xffffffffffffffff) {
          param_1[4] = lStack144;
        }
      } while( true );
    }
    if (1 < *(int *)(param_1 + 0x12)) {
      build_wcs_buffer(param_1);
      return uVar15;
    }
    lVar11 = param_1[0xf];
    if (lVar11 != 0) {
      lVar16 = param_1[0xb];
      if (param_1[8] == lVar16 || param_1[8] < lVar16) {
        lVar16 = param_1[8];
      }
      lVar12 = param_1[6];
      if (lVar12 < lVar16) {
        while( true ) {
          *(undefined *)(param_1[1] + lVar12) =
               *(undefined *)(lVar11 + (ulong)*(byte *)(*param_1 + lVar12 + param_1[5]));
          lVar12 = lVar12 + 1;
          if (lVar16 == lVar12) break;
          lVar11 = param_1[0xf];
        }
      }
      param_1[6] = lVar12;
      param_1[7] = lVar12;
    }
  }
  return uVar15;
}

