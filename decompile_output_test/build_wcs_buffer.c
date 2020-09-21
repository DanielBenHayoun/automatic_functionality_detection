
undefined8 build_wcs_buffer(long *param_1)

{
  uint *puVar1;
  long **pplVar2;
  byte bVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  byte *pbVar10;
  undefined4 *puVar11;
  byte *pbVar12;
  long *plVar13;
  undefined8 uVar14;
  long *plVar15;
  byte *pbVar16;
  byte *pbVar17;
  long *plVar18;
  long *unaff_R13;
  long *plVar19;
  long *unaff_R14;
  long unaff_R15;
  long *plVar20;
  long in_FS_OFFSET;
  long *plStack360;
  byte *pbStack352;
  undefined *puStack344;
  uint *puStack336;
  uint uStack300;
  long lStack296;
  undefined auStack288 [72];
  ulong uStack216;
  long *plStack200;
  byte *pbStack192;
  long lStack184;
  long *plStack176;
  long *plStack168;
  undefined *puStack160;
  uint uStack140;
  byte abStack136 [72];
  long lStack64;
  
  lStack184 = param_1[0xb];
  pbVar12 = (byte *)param_1[6];
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1[8] == lStack184 || param_1[8] < lStack184) {
    lStack184 = param_1[8];
  }
  plVar18 = param_1;
  if ((long)pbVar12 < lStack184) {
    unaff_R14 = param_1 + 4;
    unaff_R13 = (long *)&uStack140;
    pbVar17 = pbVar12;
code_r0x001061b8:
    do {
      lVar8 = param_1[0xf];
      unaff_R15 = param_1[4];
      if (lVar8 != 0) {
        lVar9 = 0;
        if (0 < *(int *)(param_1 + 0x12)) {
          while( true ) {
            bVar3 = *(byte *)(lVar8 + (ulong)pbVar17[param_1[5] + lVar9 + *param_1]);
            pbVar17[lVar9 + param_1[1]] = bVar3;
            abStack136[lVar9] = bVar3;
            if ((*(int *)(param_1 + 0x12) <= (int)lVar9 + 1) ||
               (lVar9 = lVar9 + 1, lStack184 - (long)pbVar17 == lVar9)) break;
            lVar8 = param_1[0xf];
          }
        }
      }
      puStack160 = &UNK_001061e4;
      plVar18 = unaff_R13;
      lVar8 = rpl_mbrtowc();
      if (lVar8 - 1U < 0xfffffffffffffffe) {
        if (lVar8 == -2) {
          if (param_1[0xb] <= param_1[8]) goto code_r0x00106280;
          param_1[4] = unaff_R15;
          pbVar12 = pbVar17;
          break;
        }
      }
      else {
code_r0x00106280:
        bVar3 = pbVar17[param_1[5] + *param_1];
        if (param_1[0xf] != 0) {
          bVar3 = *(byte *)(param_1[0xf] + (ulong)bVar3);
        }
        uStack140 = (uint)bVar3;
        param_1[4] = unaff_R15;
        lVar8 = 1;
      }
      lVar9 = param_1[2];
      pbVar12 = pbVar17 + 1;
      plVar18 = (long *)((long)pbVar17 * 4);
      *(uint *)(lVar9 + (long)pbVar17 * 4) = uStack140;
      pbVar17 = pbVar17 + lVar8;
      if ((long)pbVar17 <= (long)pbVar12) {
        pbVar17 = pbVar12;
        if (lStack184 <= (long)pbVar12) break;
        goto code_r0x001061b8;
      }
      puVar11 = (undefined4 *)(lVar9 + 4 + (long)plVar18);
      do {
        *puVar11 = 0xffffffff;
        puVar11 = puVar11 + 1;
      } while ((undefined4 *)(lVar9 + (long)pbVar17 * 4) != puVar11);
      pbVar12 = pbVar17;
    } while ((long)pbVar17 < lStack184);
  }
  lVar8 = *(long *)(in_FS_OFFSET + 0x28);
  *(byte **)(param_1 + 6) = pbVar12;
  *(byte **)(param_1 + 7) = pbVar12;
  if (lStack64 == lVar8) {
    return 0;
  }
  puStack160 = &UNK_00106333;
  func_0x00101990();
  puStack160 = (undefined *)unaff_R15;
  plStack168 = unaff_R14;
  plStack176 = unaff_R13;
  pbStack192 = pbVar12;
  plStack200 = param_1;
  pbVar17 = (byte *)plVar18[0xb];
  plVar13 = (long *)plVar18[6];
  uStack216 = *(ulong *)(in_FS_OFFSET + 0x28);
  if ((byte *)plVar18[8] == pbVar17 || (long)plVar18[8] < (long)pbVar17) {
    pbVar17 = (byte *)plVar18[8];
  }
  if (((*(byte *)((long)plVar18 + 0x8a) == 0) && (plVar18[0xf] == 0)) &&
     (*(byte *)((long)plVar18 + 0x8c) == 0)) {
    if ((long)plVar13 < (long)pbVar17) {
      do {
        unaff_R13 = plVar13;
        plStack360 = plVar18 + 4;
        pbVar12 = (byte *)((long)unaff_R13 + *plVar18 + plVar18[5]);
        bVar3 = *pbVar12;
        if (((bVar3 & 0x80) == 0) && (iVar6 = func_0x00101c40(plStack360), iVar6 != 0)) {
          plVar13 = (long *)func_0x00101860();
          *(undefined *)(plVar18[1] + (long)unaff_R13) =
               (char)*(undefined4 *)(*plVar13 + (ulong)bVar3 * 4);
          *(uint *)(plVar18[2] + (long)unaff_R13 * 4) =
               (uint)*(byte *)(plVar18[1] + (long)unaff_R13);
          plVar13 = (long *)((long)unaff_R13 + 1);
        }
        else {
          lStack296 = plVar18[4];
          pbStack352 = pbVar17 + -(long)unaff_R13;
          pbVar12 = (byte *)rpl_mbrtowc();
          uVar7 = uStack300;
          if (pbVar12 + -1 < (byte *)0xfffffffffffffffd) {
            uVar5 = func_0x00101be0((ulong)uStack300);
            if (uVar7 == uVar5) {
              func_0x00101a90(plVar18[1] + (long)unaff_R13,(long)unaff_R13 + *plVar18 + plVar18[5],
                              pbVar12);
            }
            else {
              pbVar10 = (byte *)func_0x00101ad0(auStack288,(ulong)uVar5,&lStack296);
              plVar15 = unaff_R13;
              if (pbVar12 != pbVar10) goto code_r0x001063ee;
              func_0x00101a90(plVar18[1] + (long)unaff_R13,auStack288,pbVar12);
            }
            lVar8 = plVar18[2];
            plVar15 = (long *)((long)unaff_R13 + (long)pbVar12);
            *(uint *)(lVar8 + (long)unaff_R13 * 4) = uVar5;
            plVar13 = (long *)((long)unaff_R13 + 1U);
            if ((long)(long *)((long)unaff_R13 + 1U) < (long)plVar15) {
              puVar11 = (undefined4 *)(lVar8 + 4 + (long)unaff_R13 * 4);
              do {
                *puVar11 = 0xffffffff;
                puVar11 = puVar11 + 1;
                plVar13 = plVar15;
              } while ((undefined4 *)(lVar8 + (long)plVar15 * 4) != puVar11);
            }
          }
          else {
            if ((pbVar12 + -1 == (byte *)0xfffffffffffffffd) && (plVar18[8] < plVar18[0xb])) {
              plVar18[4] = lStack296;
              plVar13 = unaff_R13;
              break;
            }
            bVar3 = *(byte *)((long)unaff_R13 + plVar18[5] + *plVar18);
            *(byte *)(plVar18[1] + (long)unaff_R13) = bVar3;
            *(uint *)(plVar18[2] + (long)unaff_R13 * 4) = (uint)bVar3;
            plVar13 = (long *)((long)unaff_R13 + 1);
            if (pbVar12 == (byte *)0xffffffffffffffff) {
              plVar18[4] = lStack296;
            }
          }
        }
      } while ((long)plVar13 < (long)pbVar17);
    }
    *(long **)(plVar18 + 6) = plVar13;
    *(long **)(plVar18 + 7) = plVar13;
    uVar14 = 0;
    goto code_r0x0010639f;
  }
  plVar19 = (long *)plVar18[7];
  plVar15 = plVar13;
code_r0x00106390:
  do {
    while (unaff_R13 = plVar19, (long)pbVar17 <= (long)plVar15) {
code_r0x00106395:
      *(long **)(plVar18 + 6) = plVar15;
      *(long **)(plVar18 + 7) = unaff_R13;
      uVar14 = 0;
      plVar13 = plVar15;
code_r0x0010639f:
      plVar15 = (long *)(uStack216 ^ *(ulong *)(in_FS_OFFSET + 0x28));
      if (plVar15 == (long *)0x0) {
        return uVar14;
      }
      uVar7 = func_0x00101990();
code_r0x0010693f:
      *(long **)(plVar18[3] + (long)plVar13 * 8) = unaff_R13;
code_r0x001067be:
      plVar19 = (long *)((long)unaff_R13 + 1);
      *(uint *)(plVar18[2] + (long)plVar15 * 4) = uVar7;
      plVar15 = (long *)((long)plVar13 + 1);
      if (pbVar12 == (byte *)0xffffffffffffffff) {
        plVar18[4] = lStack296;
      }
    }
    pbStack352 = pbVar17 + -(long)plVar15;
code_r0x001063ee:
    puStack336 = &uStack300;
    lVar8 = plVar18[0xf];
    lStack296 = plVar18[4];
    if (lVar8 == 0) {
      puStack344 = (undefined *)((long)unaff_R13 + *plVar18 + plVar18[5]);
    }
    else {
      iVar6 = *(int *)(plVar18 + 0x12);
      if (0 < iVar6) {
        lVar9 = plVar18[5];
        pbVar12 = (byte *)0x0;
        lVar4 = *plVar18;
        do {
          auStack288[(long)pbVar12] =
               *(undefined *)
                (lVar8 + (ulong)*(byte *)((long)unaff_R13 + (long)pbVar12 + lVar4 + lVar9));
          if ((byte *)(ulong)(iVar6 - 1) == pbVar12) break;
          pbVar12 = pbVar12 + 1;
        } while (pbStack352 != pbVar12);
      }
      puStack344 = auStack288;
    }
    pbVar12 = (byte *)rpl_mbrtowc(puStack336,puStack344,pbStack352,plVar18 + 4);
    uVar7 = uStack300;
    puStack336 = (uint *)(pbVar12 + -1);
    plVar13 = plVar15;
    if ((byte *)0xfffffffffffffffc < puStack336) {
      if ((puStack336 == (uint *)0xfffffffffffffffd) && (plVar18[8] < plVar18[0xb])) {
code_r0x00106808:
        plVar18[4] = lStack296;
        goto code_r0x00106395;
      }
      bVar3 = *(byte *)((long)unaff_R13 + plVar18[5] + *plVar18);
      if (plVar18[0xf] != 0) {
        bVar3 = *(byte *)(plVar18[0xf] + (ulong)bVar3);
      }
      uVar7 = (uint)bVar3;
      *(byte *)(plVar18[1] + (long)plVar15) = bVar3;
      if (*(byte *)((long)plVar18 + 0x8c) != 0) goto code_r0x0010693f;
      goto code_r0x001067be;
    }
    uVar5 = func_0x00101be0((ulong)uStack300);
    if (uVar7 == uVar5) {
code_r0x00106760:
      func_0x00101a90(plVar18[1] + (long)plVar15,puStack344,pbVar12);
    }
    else {
      pbVar10 = (byte *)func_0x00101ad0(auStack288,(ulong)uVar5,&lStack296);
      if (pbVar12 != pbVar10) {
        if (pbVar10 == (byte *)0xffffffffffffffff) goto code_r0x00106760;
        plStack360 = (long *)(pbVar10 + (long)plVar15);
        if ((long *)plVar18[8] < plStack360) goto code_r0x00106808;
        if (plVar18[3] == 0) {
          lVar8 = func_0x00101ac0((long)(long *)plVar18[8] * 8);
          plVar18[3] = lVar8;
          if (lVar8 == 0) {
            uVar14 = 0xc;
            goto code_r0x0010639f;
          }
        }
        if (*(byte *)((long)plVar18 + 0x8c) == 0) {
          if (plVar15 != (long *)0x0) {
            lVar8 = plVar18[3];
            plVar13 = (long *)0x0;
            do {
              *(long **)(lVar8 + (long)plVar13 * 8) = plVar13;
              plVar13 = (long *)((long)plVar13 + 1);
            } while (plVar13 != plVar15);
          }
          *(byte *)((long)plVar18 + 0x8c) = 1;
        }
        func_0x00101a90(plVar18[1] + (long)plVar15,auStack288,pbVar10,auStack288);
        puVar1 = (uint *)(plVar18[2] + (long)plVar15 * 4);
        lVar8 = plVar18[3];
        *puVar1 = uVar5;
        pplVar2 = (long **)(lVar8 + (long)plVar15 * 8);
        *pplVar2 = unaff_R13;
        if ((byte *)0x1 < pbVar10) {
          pbVar17 = (byte *)0x1;
          do {
            pbVar16 = (byte *)puStack336;
            if (pbVar17 < pbVar12) {
              pbVar16 = pbVar17;
            }
            *(byte **)(pplVar2 + (long)pbVar17) = pbVar16 + (long)unaff_R13;
            puVar1[(long)pbVar17] = 0xffffffff;
            pbVar17 = pbVar17 + 1;
          } while (pbVar17 != pbVar10);
        }
        pbVar17 = pbVar10 + -(long)pbVar12 + plVar18[0xb];
        *(byte **)(plVar18 + 0xb) = pbVar17;
        if ((long)unaff_R13 < plVar18[0xc]) {
          *(byte **)(plVar18 + 0xd) = pbVar10 + -(long)pbVar12 + (long)plVar18[0xd];
        }
        if ((byte *)plVar18[8] == pbVar17 || (long)plVar18[8] < (long)pbVar17) {
          pbVar17 = (byte *)plVar18[8];
        }
        plVar19 = (long *)((long)unaff_R13 + (long)pbVar12);
        plVar15 = plStack360;
        goto code_r0x00106390;
      }
      func_0x00101a90(plVar18[1] + (long)plVar15,auStack288,pbVar12);
    }
    plVar19 = (long *)(pbVar12 + (long)unaff_R13);
    if (*(byte *)((long)plVar18 + 0x8c) != 0) {
      lVar8 = plVar18[3];
      plVar13 = (long *)((long)plVar15 - (long)unaff_R13);
      do {
        *(long **)(lVar8 + (long)plVar13 * 8 + (long)unaff_R13 * 8) = unaff_R13;
        unaff_R13 = (long *)((long)unaff_R13 + 1);
      } while (plVar19 != unaff_R13);
    }
    plVar20 = (long *)((long)plVar15 + 1);
    lVar9 = plVar18[2];
    plVar13 = (long *)((long)plVar15 + (long)pbVar12);
    lVar8 = (long)plVar15 * 4;
    *(uint *)(lVar9 + (long)plVar15 * 4) = uVar5;
    plVar15 = plVar20;
    if ((long)plVar20 < (long)plVar13) {
      puVar11 = (undefined4 *)(lVar9 + 4 + lVar8);
      do {
        *puVar11 = 0xffffffff;
        puVar11 = puVar11 + 1;
        plVar15 = plVar13;
      } while ((undefined4 *)(lVar9 + (long)plVar13 * 4) != puVar11);
    }
  } while( true );
}

