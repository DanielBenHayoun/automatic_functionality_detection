
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
human_readable(ulong param_1,undefined *param_2,uint param_3,ulong param_4,ulong param_5)

{
  byte bVar1;
  byte *pbVar2;
  bool bVar3;
  undefined auVar4 [16];
  undefined auVar5 [16];
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  undefined8 *puVar11;
  uint uVar12;
  uint uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  uint uVar18;
  int iVar19;
  ulong uVar20;
  undefined8 *puVar21;
  char cVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  uint uVar27;
  undefined8 *puVar28;
  byte *pbVar29;
  long in_FS_OFFSET;
  float10 fVar30;
  float10 fVar31;
  float10 fVar32;
  undefined8 *puStack192;
  undefined auStack120 [56];
  ulong uStack64;
  
  uVar27 = param_3 & 3;
  puVar23 = (undefined8 *)(ulong)param_3;
  uStack64 = *(ulong *)(in_FS_OFFSET + 0x28);
  uVar8 = (-(uint)((param_3 & 0x20) == 0) & 0xffffffe8) + 0x400;
  puVar21 = (undefined8 *)func_0x00102120();
  puVar24 = (undefined8 *)*puVar21;
  puVar15 = (undefined8 *)func_0x001021b0(puVar24);
  pbVar2 = (byte *)puVar21[2];
  puVar25 = (undefined *)puVar21[1];
  if (0xf < (long)puVar15 - 1U) {
    puVar15 = (undefined8 *)0x1;
    puVar24 = (undefined8 *)&UNK_0010fefc;
  }
  uVar9 = func_0x001021b0(puVar25);
  if (0x10 < uVar9) {
    puVar25 = &UNK_00110601;
  }
  puVar21 = (undefined8 *)(param_2 + 0x287);
  puStack192 = puVar21;
  if (param_4 < param_5) {
    if (param_4 != 0) {
      auVar5 = ZEXT816(param_5) / ZEXT816(param_4);
      if (param_5 % param_4 == 0) {
        puVar17 = SUB168(ZEXT816(param_1) / (auVar5 & (undefined  [16])0xffffffffffffffff),0);
        auVar4 = ZEXT816((ulong)(SUB168(ZEXT816(param_1) %
                                        (auVar5 & (undefined  [16])0xffffffffffffffff),0) * 10));
        uVar20 = SUB168(auVar4 % (auVar5 & (undefined  [16])0xffffffffffffffff),0) * 2;
        uVar9 = (ulong)SUB164(auVar4 / (auVar5 & (undefined  [16])0xffffffffffffffff),0);
        if (uVar20 < SUB168(auVar5,0)) {
          uVar20 = (ulong)(uVar20 != 0);
        }
        else {
          uVar20 = (ulong)((uint)(SUB168(auVar5,0) < uVar20) + 2);
        }
        goto code_r0x001077b9;
      }
    }
  }
  else {
    if ((param_4 % param_5 == 0) &&
       (puVar17 = (undefined *)(param_1 * SUB168(ZEXT816(param_4) / ZEXT816(param_5),0)),
       SUB168(ZEXT816(puVar17) /
              (ZEXT816(param_4) / ZEXT816(param_5) & (undefined  [16])0xffffffffffffffff),0) ==
       param_1)) {
      uVar20 = 0;
      uVar9 = 0;
code_r0x001077b9:
      uVar12 = (uint)uVar9;
      iVar19 = (int)uVar20;
      puVar14 = (undefined8 *)0xffffffff;
      uVar10 = param_3 & 0x10;
      if ((param_3 & 0x10) == 0) goto code_r0x00107b90;
      puVar26 = (undefined *)(ulong)uVar8;
      if (puVar17 < puVar26) {
        puVar14 = (undefined8 *)0x0;
        goto code_r0x00107b90;
      }
      puVar14 = (undefined8 *)0x0;
      puVar16 = puVar17;
      while( true ) {
        puVar17 = (undefined *)((ulong)puVar16 / (ulong)puVar26);
        uVar12 = (int)uVar9 + (int)((ulong)puVar16 % (ulong)puVar26) * 10;
        uVar9 = (ulong)uVar12 / (ulong)puVar26;
        uVar13 = ((int)uVar20 >> 1) + (uVar12 % uVar8) * 2;
        uVar12 = (uint)uVar9;
        cVar22 = (char)uVar9;
        uVar18 = (int)uVar20 + uVar13;
        if (uVar13 < uVar8) {
          uVar20 = (ulong)(uVar18 != 0);
        }
        else {
          uVar20 = (ulong)((uint)(uVar8 < uVar18) + 2);
        }
        iVar19 = (int)uVar20;
        uVar13 = (int)puVar14 + 1;
        puVar14 = (undefined8 *)(ulong)uVar13;
        if (puVar17 < puVar26) break;
        puVar16 = puVar17;
        if (uVar13 == 8) goto code_r0x00107b90;
      }
      if ((undefined *)0x9 < puVar17) goto code_r0x00107b90;
      if (uVar27 == 1) {
        bVar3 = 2 < (uVar12 & 1) + iVar19;
      }
      else {
        bVar3 = iVar19 != 0 && (param_3 & 3) == 0;
      }
      if (bVar3) {
        cVar22 = (char)(uVar12 + 1);
        if (uVar12 + 1 == 10) {
          puVar17 = puVar17 + 1;
          if (puVar17 == (undefined *)0xa) goto code_r0x00107b87;
          iVar19 = 0;
code_r0x00107dc1:
          if ((param_3 & 8) != 0) {
            uVar12 = 0;
            goto code_r0x00107b90;
          }
          cVar22 = '0';
          goto code_r0x00107b4a;
        }
      }
      else {
        if (uVar12 == 0) goto code_r0x00107dc1;
      }
      cVar22 = cVar22 + '0';
code_r0x00107b4a:
      param_2[0x286] = cVar22;
      uVar9 = (ulong)puVar15 & 0xffffffff;
      puVar21 = (undefined8 *)(param_2 + (0x286 - (long)puVar15));
      if (7 < (uint)puVar15) {
        *puVar21 = *puVar24;
        *(undefined8 *)((long)puVar21 + (((ulong)puVar15 & 0xffffffff) - 8)) =
             *(undefined8 *)((long)puVar24 + (((ulong)puVar15 & 0xffffffff) - 8));
        puVar11 = (undefined8 *)((long)puVar21 - ((ulong)(puVar21 + 1) & 0xfffffffffffffff8));
        uVar12 = (int)puVar11 + (uint)puVar15 & 0xfffffff8;
        if (uVar12 < 8) goto code_r0x00107b87;
        uVar13 = 0;
        do {
          uVar9 = (ulong)uVar13;
          uVar13 = uVar13 + 8;
          *(undefined8 *)(((ulong)(puVar21 + 1) & 0xfffffffffffffff8) + uVar9) =
               *(undefined8 *)((long)puVar24 + (uVar9 - (long)puVar11));
          if (uVar12 <= uVar13) goto code_r0x00107b87;
        } while( true );
      }
      if (((ulong)puVar15 & 4) == 0) {
        if ((int)uVar9 == 0) goto code_r0x00107b87;
        *(undefined *)puVar21 = *(undefined *)puVar24;
        if (((ulong)puVar15 & 2) != 0) goto code_r0x00107f10;
        goto code_r0x00107b87;
      }
      *(undefined4 *)puVar21 = *(undefined4 *)puVar24;
      *(undefined4 *)((long)puVar21 + (uVar9 - 4)) = *(undefined4 *)((long)puVar24 + (uVar9 - 4));
      goto code_r0x00107b87;
    }
  }
  fVar30 = (float10)param_4;
  if ((long)param_4 < 0) {
    fVar30 = fVar30 + (float10)_UNK_0011001c;
  }
  fVar31 = (float10)param_5;
  if ((long)param_5 < 0) {
    fVar31 = fVar31 + (float10)_UNK_0011001c;
  }
  fVar32 = (float10)param_1;
  if ((long)param_1 < 0) {
    fVar32 = fVar32 + (float10)_UNK_0011001c;
  }
  fVar32 = fVar32 * (fVar30 / fVar31);
  if ((param_3 & 0x10) == 0) {
    if ((uVar27 != 1) && (fVar32 < _UNK_00110070)) {
      adjust_value_part_0((ulong)uVar27);
    }
    puVar11 = (undefined8 *)0x0;
    func_0x001025a0(param_2,1,0xffffffffffffffff);
    puVar14 = (undefined8 *)0xffffffff;
    uVar9 = func_0x001021b0(param_2);
    goto code_r0x001078b0;
  }
  puVar14 = (undefined8 *)0x0;
  fVar30 = (float10)uVar8;
  do {
    fVar31 = fVar30;
    uVar12 = (int)puVar14 + 1;
    puVar14 = (undefined8 *)(ulong)uVar12;
    fVar30 = fVar31 * (float10)uVar8;
    if (fVar32 < fVar30) break;
  } while (uVar12 != 8);
  puVar11 = (undefined8 *)((long)puVar15 + 1);
  fVar32 = fVar32 / fVar31;
  uVar20 = (long)puVar15 + (ulong)((param_3 & 0x20) == 0) + 2;
  if (uVar27 == 1) {
    func_0x001025a0(param_2,1,0xffffffffffffffff);
    uVar9 = func_0x001021b0(param_2);
    if (uVar9 <= uVar20) goto code_r0x00107732;
  }
  else {
    if (fVar32 < _UNK_00110070) {
      adjust_value_part_0((ulong)uVar27);
    }
    func_0x001025a0(param_2,1,0xffffffffffffffff,&UNK_0011002a);
    uVar9 = func_0x001021b0(param_2);
    if (uVar9 <= uVar20) {
code_r0x00107732:
      if (((param_3 & 8) == 0) || (param_2[uVar9 - 1] != '0')) goto code_r0x001078b0;
      if (uVar27 == 1) goto code_r0x00107c93;
    }
    if (fVar32 * (float10)_UNK_00110064 < _UNK_00110070) {
      adjust_value_part_0((ulong)uVar27);
    }
  }
code_r0x00107c93:
  puVar11 = (undefined8 *)0x0;
  func_0x001025a0(param_2,1,0xffffffffffffffff);
  uVar9 = func_0x001021b0(param_2);
code_r0x001078b0:
  puVar28 = (undefined8 *)((long)puVar21 - uVar9);
  puVar24 = (undefined8 *)(uVar9 - (long)puVar11);
  puVar17 = param_2;
  func_0x00102490(puVar28,param_2,uVar9);
  puVar15 = puVar11;
  puVar21 = (undefined8 *)((long)puVar24 + (long)puVar28);
  puVar26 = puVar25;
code_r0x001078d0:
  do {
    puVar25 = puVar26;
    if (((ulong)puVar23 & 4) != 0) {
      puVar24 = (undefined8 *)((long)puVar21 - (long)puVar28);
      puVar15 = (undefined8 *)0xffffffffffffffff;
      puVar25 = (undefined *)func_0x001021b0(puVar26);
      puVar16 = auStack120;
      func_0x00102350(puVar16,puVar28,puVar24);
      pbVar29 = pbVar2;
      while( true ) {
        bVar1 = *pbVar29;
        if (bVar1 != 0) {
          puVar15 = (undefined8 *)(ulong)bVar1;
          if (0x7e < bVar1) {
            puVar15 = puVar24;
          }
          pbVar29 = pbVar29 + 1;
        }
        if (puVar24 < puVar15) {
          puVar28 = (undefined8 *)((long)puVar21 - (long)puVar24);
          puVar14 = (undefined8 *)((ulong)puVar14 & 0xffffffff);
          func_0x00102360(puVar28,puVar16,puVar24);
          puVar17 = puVar16;
          goto code_r0x001078da;
        }
        puVar24 = (undefined8 *)((long)puVar24 - (long)puVar15);
        puVar17 = puVar16 + (long)puVar24;
        puVar21 = (undefined8 *)
                  func_0x00102360((undefined8 *)((long)puVar21 - (long)puVar15),puVar17,puVar15);
        if (puVar24 == (undefined8 *)0x0) break;
        puVar21 = (undefined8 *)
                  func_0x00102360((undefined8 *)((long)puVar21 - (long)puVar25),puVar26,puVar25);
      }
      puVar14 = (undefined8 *)((ulong)puVar14 & 0xffffffff);
      puVar24 = puVar23;
      puVar28 = puVar21;
    }
code_r0x001078da:
    uVar27 = (uint)puVar28;
    if (((ulong)puVar23 & 0x80) != 0) {
      if ((int)puVar14 == -1) {
        if (param_5 < 2) {
          puVar14 = (undefined8 *)0x0;
        }
        else {
          puVar14 = (undefined8 *)0x1;
          uVar9 = 1;
          do {
            uVar9 = uVar9 * uVar8;
            if (param_5 <= uVar9) break;
            uVar12 = (int)puVar14 + 1;
            puVar14 = (undefined8 *)(ulong)uVar12;
          } while (uVar12 != 8);
        }
      }
      uVar9 = (ulong)puVar23 & 0x100;
      uVar20 = (ulong)puVar23 & 0x100;
      uVar7 = (ulong)puVar23 & 0x100;
      uVar12 = (uint)puVar14;
      if (((uint)puVar23 & 0x100 | uVar12) != 0) {
        uVar6 = (ulong)puVar23 & 0x40;
        puVar23 = (undefined8 *)(ulong)((uint)puVar23 & 0x40);
        if (uVar6 != 0) {
          puStack192 = (undefined8 *)(param_2 + 0x288);
          param_2[0x287] = 0x20;
        }
        if (uVar12 == 0) {
          puVar11 = puStack192;
          if (uVar7 != 0) goto code_r0x0010794b;
        }
        else {
          if ((uVar12 == 1) && ((param_3 & 0x20) == 0)) {
            *(undefined *)puStack192 = 0x6b;
            puVar11 = (undefined8 *)((long)puStack192 + 1);
            puVar14 = puStack192;
            if (uVar20 == 0) {
code_r0x00107d74:
              puStack192 = (undefined8 *)((long)puStack192 + 1);
              goto code_r0x00107957;
            }
          }
          else {
            puVar14 = (undefined8 *)(long)(int)uVar12;
            *(undefined *)puStack192 = *(undefined *)(puVar14 + 0x2200b);
            if (uVar9 == 0) goto code_r0x00107d74;
            puVar21 = (undefined8 *)(ulong)(param_3 & 0x20);
            puVar11 = (undefined8 *)((long)puStack192 + 1);
            if ((param_3 & 0x20) != 0) {
              *(undefined *)((long)puStack192 + 1) = 0x69;
              puVar11 = (undefined8 *)((long)puStack192 + 2);
            }
          }
code_r0x0010794b:
          puStack192 = (undefined8 *)((long)puVar11 + 1);
          *(undefined *)puVar11 = 0x42;
        }
      }
    }
code_r0x00107957:
    uVar9 = uStack64 ^ *(ulong *)(in_FS_OFFSET + 0x28);
    uVar10 = (uint)uVar9;
    *(undefined *)puStack192 = 0;
    if (uVar9 == 0) {
      return puVar28;
    }
    uVar9 = func_0x001021f0();
code_r0x00107f10:
    *(undefined2 *)((long)puVar21 + (uVar9 - 2)) = *(undefined2 *)((long)puVar24 + (uVar9 - 2));
code_r0x00107b87:
    iVar19 = 0;
    uVar12 = 0;
code_r0x00107b90:
    puVar26 = puVar25;
    puVar28 = puVar21;
    if (uVar27 == 1) {
      puVar25 = puVar17;
      if (5 < (int)(uVar12 + (((uint)puVar17 & 1) + iVar19 != 0))) goto code_r0x00107ba6;
code_r0x00107bd0:
      do {
        puVar28 = (undefined8 *)((long)puVar28 + -1);
        puVar17 = (undefined *)((ulong)puVar25 / 10);
        *(char *)puVar28 = (char)puVar25 + (char)puVar17 * -10 + '0';
        puVar25 = puVar17;
      } while (puVar17 != (undefined *)0x0);
      goto code_r0x001078d0;
    }
    puVar25 = puVar17;
    if ((uVar27 != 0) || ((int)(iVar19 + uVar12) < 1)) goto code_r0x00107bd0;
code_r0x00107ba6:
    puVar17 = puVar17 + 1;
    puVar25 = puVar17;
    if ((uVar10 == 0) || (((undefined *)(ulong)uVar8 != puVar17 || ((int)puVar14 == 8))))
    goto code_r0x00107bd0;
    puVar14 = (undefined8 *)(ulong)((int)puVar14 + 1);
    puVar11 = puVar15;
    if (((ulong)puVar23 & 8) == 0) {
      *(undefined *)((long)puVar21 + -1) = 0x30;
      puVar21 = (undefined8 *)((long)puVar21 + ~(ulong)puVar15);
      uVar27 = (uint)puVar15;
      uVar9 = (ulong)puVar15 & 0xffffffff;
      if (uVar27 < 8) {
        puVar11 = (undefined8 *)(ulong)(uVar27 & 4);
        if (((ulong)puVar15 & 4) == 0) {
          if (((int)uVar9 != 0) &&
             (*(undefined *)puVar21 = *(undefined *)puVar24, ((ulong)puVar15 & 2) != 0)) {
            *(undefined2 *)((long)puVar21 + (uVar9 - 2)) =
                 *(undefined2 *)((long)puVar24 + (uVar9 - 2));
          }
        }
        else {
          *(undefined4 *)puVar21 = *(undefined4 *)puVar24;
          *(undefined4 *)((long)puVar21 + (uVar9 - 4)) =
               *(undefined4 *)((long)puVar24 + (uVar9 - 4));
        }
      }
      else {
        *puVar21 = *puVar24;
        *(undefined8 *)((long)puVar21 + (((ulong)puVar15 & 0xffffffff) - 8)) =
             *(undefined8 *)((long)puVar24 + (((ulong)puVar15 & 0xffffffff) - 8));
        puVar15 = (undefined8 *)((long)puVar21 - ((ulong)(puVar21 + 1) & 0xfffffffffffffff8));
        puVar24 = (undefined8 *)((long)puVar24 - (long)puVar15);
        uVar27 = (int)puVar15 + uVar27 & 0xfffffff8;
        if (7 < uVar27) {
          puVar25 = (undefined *)0x0;
          do {
            puVar17 = puVar25;
            uVar12 = (int)puVar17 + 8;
            *(undefined8 *)(puVar17 + ((ulong)(puVar21 + 1) & 0xfffffffffffffff8)) =
                 *(undefined8 *)((long)puVar24 + (long)puVar17);
            puVar25 = (undefined *)(ulong)uVar12;
          } while (uVar12 < uVar27);
        }
      }
    }
    puVar28 = (undefined8 *)((long)puVar21 + -1);
    *(undefined *)((long)puVar21 + -1) = 0x31;
    puVar15 = puVar11;
  } while( true );
}

