
undefined8 build_wcs_upper_buffer(long *param_1)

{
  uint *puVar1;
  byte **ppbVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  long *plVar10;
  byte *pbVar11;
  long lVar12;
  undefined8 uVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *unaff_RBP;
  byte *unaff_R13;
  byte *pbVar16;
  byte *pbVar17;
  long in_FS_OFFSET;
  long *plStack208;
  byte *pbStack200;
  byte *pbStack192;
  uint *puStack184;
  uint uStack148;
  long lStack144;
  byte abStack136 [72];
  ulong uStack64;
  
  pbVar15 = (byte *)param_1[0xb];
  pbVar11 = (byte *)param_1[6];
  uStack64 = *(ulong *)(in_FS_OFFSET + 0x28);
  if ((byte *)param_1[8] == pbVar15 || (long)param_1[8] < (long)pbVar15) {
    pbVar15 = (byte *)param_1[8];
  }
  if (((*(char *)((long)param_1 + 0x8a) == '\0') && (param_1[0xf] == 0)) &&
     (*(char *)((long)param_1 + 0x8c) == '\0')) {
    if ((long)pbVar11 < (long)pbVar15) {
      do {
        unaff_R13 = pbVar11;
        plStack208 = param_1 + 4;
        unaff_RBP = unaff_R13 + *param_1 + param_1[5];
        bVar3 = *unaff_RBP;
        if (((bVar3 & 0x80) == 0) && (iVar7 = func_0x00101f10(plStack208), iVar7 != 0)) {
          plVar10 = (long *)func_0x00101ac0();
          unaff_R13[param_1[1]] = (byte)*(undefined4 *)(*plVar10 + (ulong)bVar3 * 4);
          *(uint *)(param_1[2] + (long)unaff_R13 * 4) = (uint)unaff_R13[param_1[1]];
          pbVar11 = unaff_R13 + 1;
        }
        else {
          lStack144 = param_1[4];
          pbStack200 = pbVar15 + -(long)unaff_R13;
          unaff_RBP = (byte *)rpl_mbrtowc();
          uVar8 = uStack148;
          if (unaff_RBP + -1 < (byte *)0xfffffffffffffffd) {
            uVar6 = func_0x00101eb0((ulong)uStack148);
            if (uVar8 == uVar6) {
              func_0x00101d70(unaff_R13 + param_1[1],unaff_R13 + *param_1 + param_1[5],unaff_RBP);
            }
            else {
              pbVar11 = (byte *)func_0x00101db0(abStack136,(ulong)uVar6,&lStack144);
              pbVar14 = unaff_R13;
              if (unaff_RBP != pbVar11) goto code_r0x0010869e;
              func_0x00101d70(unaff_R13 + param_1[1],abStack136,unaff_RBP);
            }
            lVar12 = param_1[2];
            pbVar14 = unaff_RBP + (long)unaff_R13;
            *(uint *)(lVar12 + (long)unaff_R13 * 4) = uVar6;
            pbVar11 = unaff_R13 + 1;
            if ((long)(unaff_R13 + 1) < (long)pbVar14) {
              puVar9 = (undefined4 *)(lVar12 + 4 + (long)unaff_R13 * 4);
              do {
                *puVar9 = 0xffffffff;
                puVar9 = puVar9 + 1;
                pbVar11 = pbVar14;
              } while ((undefined4 *)(lVar12 + (long)pbVar14 * 4) != puVar9);
            }
          }
          else {
            if ((unaff_RBP + -1 == (byte *)0xfffffffffffffffd) && (param_1[8] < param_1[0xb])) {
              param_1[4] = lStack144;
              pbVar11 = unaff_R13;
              break;
            }
            bVar3 = unaff_R13[param_1[5] + *param_1];
            unaff_R13[param_1[1]] = bVar3;
            *(uint *)(param_1[2] + (long)unaff_R13 * 4) = (uint)bVar3;
            pbVar11 = unaff_R13 + 1;
            if (unaff_RBP == (byte *)0xffffffffffffffff) {
              param_1[4] = lStack144;
            }
          }
        }
      } while ((long)pbVar11 < (long)pbVar15);
    }
    *(byte **)(param_1 + 6) = pbVar11;
    *(byte **)(param_1 + 7) = pbVar11;
    uVar13 = 0;
    goto code_r0x0010864f;
  }
  pbVar16 = (byte *)param_1[7];
  pbVar14 = pbVar11;
code_r0x00108640:
  do {
    while (unaff_R13 = pbVar16, (long)pbVar15 <= (long)pbVar14) {
code_r0x00108645:
      *(byte **)(param_1 + 6) = pbVar14;
      *(byte **)(param_1 + 7) = unaff_R13;
      uVar13 = 0;
      pbVar11 = pbVar14;
code_r0x0010864f:
      pbVar14 = (byte *)(uStack64 ^ *(ulong *)(in_FS_OFFSET + 0x28));
      if (pbVar14 == (byte *)0x0) {
        return uVar13;
      }
      uVar8 = func_0x00101c20();
code_r0x00108bef:
      *(byte **)(param_1[3] + (long)pbVar11 * 8) = unaff_R13;
code_r0x00108a6e:
      pbVar16 = unaff_R13 + 1;
      *(uint *)(param_1[2] + (long)pbVar14 * 4) = uVar8;
      pbVar14 = pbVar11 + 1;
      if (unaff_RBP == (byte *)0xffffffffffffffff) {
        param_1[4] = lStack144;
      }
    }
    pbStack200 = pbVar15 + -(long)pbVar14;
code_r0x0010869e:
    puStack184 = &uStack148;
    lVar12 = param_1[0xf];
    lStack144 = param_1[4];
    if (lVar12 == 0) {
      pbStack192 = unaff_R13 + *param_1 + param_1[5];
    }
    else {
      iVar7 = *(int *)(param_1 + 0x12);
      if (0 < iVar7) {
        lVar4 = param_1[5];
        pbVar11 = (byte *)0x0;
        lVar5 = *param_1;
        do {
          abStack136[(long)pbVar11] =
               *(byte *)(lVar12 + (ulong)pbVar11[(long)(unaff_R13 + lVar5 + lVar4)]);
          if ((byte *)(ulong)(iVar7 - 1) == pbVar11) break;
          pbVar11 = pbVar11 + 1;
        } while (pbStack200 != pbVar11);
      }
      pbStack192 = abStack136;
    }
    unaff_RBP = (byte *)rpl_mbrtowc(puStack184,pbStack192,pbStack200,param_1 + 4);
    uVar8 = uStack148;
    pbVar16 = unaff_RBP + -1;
    pbVar11 = pbVar14;
    if ((byte *)0xfffffffffffffffc < pbVar16) {
      if ((pbVar16 == (byte *)0xfffffffffffffffd) && (param_1[8] < param_1[0xb])) {
code_r0x00108ab8:
        param_1[4] = lStack144;
        goto code_r0x00108645;
      }
      bVar3 = unaff_R13[param_1[5] + *param_1];
      if (param_1[0xf] != 0) {
        bVar3 = *(byte *)(param_1[0xf] + (ulong)bVar3);
      }
      uVar8 = (uint)bVar3;
      pbVar14[param_1[1]] = bVar3;
      if (*(char *)((long)param_1 + 0x8c) != '\0') goto code_r0x00108bef;
      goto code_r0x00108a6e;
    }
    uVar6 = func_0x00101eb0((ulong)uStack148);
    if (uVar8 == uVar6) {
code_r0x00108a10:
      func_0x00101d70(pbVar14 + param_1[1],pbStack192,unaff_RBP);
    }
    else {
      pbVar17 = (byte *)func_0x00101db0(abStack136,(ulong)uVar6,&lStack144);
      if (unaff_RBP != pbVar17) {
        if (pbVar17 == (byte *)0xffffffffffffffff) goto code_r0x00108a10;
        if ((byte *)param_1[8] < pbVar17 + (long)pbVar14) goto code_r0x00108ab8;
        if (param_1[3] == 0) {
          lVar12 = func_0x00101da0((long)(byte *)param_1[8] * 8);
          param_1[3] = lVar12;
          if (lVar12 == 0) {
            uVar13 = 0xc;
            goto code_r0x0010864f;
          }
        }
        if (*(char *)((long)param_1 + 0x8c) == '\0') {
          if (pbVar14 != (byte *)0x0) {
            lVar12 = param_1[3];
            pbVar11 = (byte *)0x0;
            do {
              *(byte **)(lVar12 + (long)pbVar11 * 8) = pbVar11;
              pbVar11 = pbVar11 + 1;
            } while (pbVar11 != pbVar14);
          }
          *(undefined *)((long)param_1 + 0x8c) = 1;
        }
        func_0x00101d70(pbVar14 + param_1[1],abStack136,pbVar17,abStack136);
        puVar1 = (uint *)(param_1[2] + (long)pbVar14 * 4);
        lVar12 = param_1[3];
        *puVar1 = uVar6;
        ppbVar2 = (byte **)(lVar12 + (long)pbVar14 * 8);
        *ppbVar2 = unaff_R13;
        if ((byte *)0x1 < pbVar17) {
          pbVar11 = (byte *)0x1;
          do {
            pbVar15 = pbVar16;
            if (pbVar11 < unaff_RBP) {
              pbVar15 = pbVar11;
            }
            ppbVar2[(long)pbVar11] = pbVar15 + (long)unaff_R13;
            puVar1[(long)pbVar11] = 0xffffffff;
            pbVar11 = pbVar11 + 1;
          } while (pbVar11 != pbVar17);
        }
        pbVar15 = pbVar17 + -(long)unaff_RBP + param_1[0xb];
        *(byte **)(param_1 + 0xb) = pbVar15;
        if ((long)unaff_R13 < param_1[0xc]) {
          *(byte **)(param_1 + 0xd) = pbVar17 + -(long)unaff_RBP + (long)param_1[0xd];
        }
        if ((byte *)param_1[8] == pbVar15 || (long)param_1[8] < (long)pbVar15) {
          pbVar15 = (byte *)param_1[8];
        }
        pbVar16 = unaff_RBP + (long)unaff_R13;
        pbVar14 = pbVar17 + (long)pbVar14;
        goto code_r0x00108640;
      }
      func_0x00101d70(pbVar14 + param_1[1],abStack136,unaff_RBP);
    }
    pbVar16 = unaff_RBP + (long)unaff_R13;
    if (*(char *)((long)param_1 + 0x8c) != '\0') {
      lVar12 = param_1[3];
      lVar4 = -(long)unaff_R13;
      do {
        *(byte **)(lVar12 + (long)(pbVar14 + lVar4) * 8 + (long)unaff_R13 * 8) = unaff_R13;
        unaff_R13 = unaff_R13 + 1;
      } while (pbVar16 != unaff_R13);
    }
    pbVar17 = pbVar14 + 1;
    lVar4 = param_1[2];
    pbVar11 = unaff_RBP + (long)pbVar14;
    lVar12 = (long)pbVar14 * 4;
    *(uint *)(lVar4 + (long)pbVar14 * 4) = uVar6;
    pbVar14 = pbVar17;
    if ((long)pbVar17 < (long)pbVar11) {
      puVar9 = (undefined4 *)(lVar4 + 4 + lVar12);
      do {
        *puVar9 = 0xffffffff;
        puVar9 = puVar9 + 1;
        pbVar14 = pbVar11;
      } while ((undefined4 *)(lVar4 + (long)pbVar11 * 4) != puVar9);
    }
  } while( true );
}

