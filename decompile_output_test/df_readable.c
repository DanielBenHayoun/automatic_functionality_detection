
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * df_readable(byte param_1,ulong param_2,long param_3,ulong param_4,ulong param_5)

{
  byte bVar1;
  byte *pbVar2;
  bool bVar3;
  undefined auVar4 [16];
  undefined auVar5 [16];
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  undefined8 *puVar14;
  uint uVar15;
  uint uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  uint uVar22;
  int iVar23;
  ulong uVar24;
  undefined8 *puVar25;
  char cVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  uint uVar31;
  undefined8 *puVar32;
  byte *pbVar33;
  long in_FS_OFFSET;
  float10 fVar34;
  float10 fVar35;
  float10 fVar36;
  undefined8 *puStack192;
  undefined auStack120 [56];
  ulong uStack64;
  
  uVar10 = human_output_opts;
  if (0xfffffffffffffffd < param_2) {
    if (param_1 == 0) {
      return (undefined8 *)&UNK_00110959;
    }
    puVar19 = (undefined *)(param_3 + 1);
code_r0x00103e6b:
    lVar11 = human_readable(-param_2,puVar19,(ulong)human_output_opts);
    *(undefined *)(lVar11 + -1) = 0x2d;
    return (undefined8 *)(lVar11 + -1);
  }
  puVar19 = (undefined *)(param_3 + (ulong)param_1);
  if (param_1 != 0) goto code_r0x00103e6b;
  uVar8 = human_output_opts & 0x20;
  uVar31 = human_output_opts & 3;
  puVar27 = (undefined8 *)(ulong)human_output_opts;
  uStack64 = *(ulong *)(in_FS_OFFSET + 0x28);
  uVar9 = (-(uint)(uVar8 == 0) & 0xffffffe8) + 0x400;
  puVar25 = (undefined8 *)func_0x00102120();
  puVar28 = (undefined8 *)*puVar25;
  puVar18 = (undefined8 *)func_0x001021b0(puVar28);
  pbVar2 = (byte *)puVar25[2];
  puVar29 = (undefined *)puVar25[1];
  if (0xf < (long)puVar18 - 1U) {
    puVar18 = (undefined8 *)0x1;
    puVar28 = (undefined8 *)&UNK_0010fefc;
  }
  uVar12 = func_0x001021b0(puVar29);
  if (0x10 < uVar12) {
    puVar29 = &UNK_00110601;
  }
  puVar25 = (undefined8 *)(puVar19 + 0x287);
  puStack192 = puVar25;
  if (param_4 < param_5) {
    if (param_4 != 0) {
      auVar5 = ZEXT816(param_5) / ZEXT816(param_4);
      if (param_5 % param_4 == 0) {
        puVar21 = SUB168(ZEXT816(param_2) / (auVar5 & (undefined  [16])0xffffffffffffffff),0);
        auVar4 = ZEXT816((ulong)(SUB168(ZEXT816(param_2) %
                                        (auVar5 & (undefined  [16])0xffffffffffffffff),0) * 10));
        uVar24 = SUB168(auVar4 % (auVar5 & (undefined  [16])0xffffffffffffffff),0) * 2;
        uVar12 = (ulong)SUB164(auVar4 / (auVar5 & (undefined  [16])0xffffffffffffffff),0);
        if (uVar24 < SUB168(auVar5,0)) {
          uVar24 = (ulong)(uVar24 != 0);
        }
        else {
          uVar24 = (ulong)((uint)(SUB168(auVar5,0) < uVar24) + 2);
        }
        goto code_r0x001077b9;
      }
    }
  }
  else {
    if ((param_4 % param_5 == 0) &&
       (puVar21 = (undefined *)(param_2 * SUB168(ZEXT816(param_4) / ZEXT816(param_5),0)),
       SUB168(ZEXT816(puVar21) /
              (ZEXT816(param_4) / ZEXT816(param_5) & (undefined  [16])0xffffffffffffffff),0) ==
       param_2)) {
      uVar24 = 0;
      uVar12 = 0;
code_r0x001077b9:
      uVar15 = (uint)uVar12;
      iVar23 = (int)uVar24;
      puVar17 = (undefined8 *)0xffffffff;
      uVar13 = uVar10 & 0x10;
      if (uVar13 == 0) goto code_r0x00107b90;
      puVar30 = (undefined *)(ulong)uVar9;
      if (puVar21 < puVar30) {
        puVar17 = (undefined8 *)0x0;
        goto code_r0x00107b90;
      }
      puVar17 = (undefined8 *)0x0;
      puVar20 = puVar21;
      while( true ) {
        puVar21 = (undefined *)((ulong)puVar20 / (ulong)puVar30);
        uVar15 = (int)uVar12 + (int)((ulong)puVar20 % (ulong)puVar30) * 10;
        uVar12 = (ulong)uVar15 / (ulong)puVar30;
        uVar16 = ((int)uVar24 >> 1) + (uVar15 % uVar9) * 2;
        uVar15 = (uint)uVar12;
        cVar26 = (char)uVar12;
        uVar22 = (int)uVar24 + uVar16;
        if (uVar16 < uVar9) {
          uVar24 = (ulong)(uVar22 != 0);
        }
        else {
          uVar24 = (ulong)((uint)(uVar9 < uVar22) + 2);
        }
        iVar23 = (int)uVar24;
        uVar16 = (int)puVar17 + 1;
        puVar17 = (undefined8 *)(ulong)uVar16;
        if (puVar21 < puVar30) break;
        puVar20 = puVar21;
        if (uVar16 == 8) goto code_r0x00107b90;
      }
      if ((undefined *)0x9 < puVar21) goto code_r0x00107b90;
      if (uVar31 == 1) {
        bVar3 = 2 < (uVar15 & 1) + iVar23;
      }
      else {
        bVar3 = iVar23 != 0 && uVar31 == 0;
      }
      if (bVar3) {
        cVar26 = (char)(uVar15 + 1);
        if (uVar15 + 1 == 10) {
          puVar21 = puVar21 + 1;
          if (puVar21 == (undefined *)0xa) goto code_r0x00107b87;
          iVar23 = 0;
code_r0x00107dc1:
          if ((uVar10 & 8) != 0) {
            uVar15 = 0;
            goto code_r0x00107b90;
          }
          cVar26 = '0';
          goto code_r0x00107b4a;
        }
      }
      else {
        if (uVar15 == 0) goto code_r0x00107dc1;
      }
      cVar26 = cVar26 + '0';
code_r0x00107b4a:
      puVar19[0x286] = cVar26;
      uVar12 = (ulong)puVar18 & 0xffffffff;
      puVar25 = (undefined8 *)(puVar19 + (0x286 - (long)puVar18));
      if (7 < (uint)puVar18) {
        *puVar25 = *puVar28;
        *(undefined8 *)((long)puVar25 + (((ulong)puVar18 & 0xffffffff) - 8)) =
             *(undefined8 *)((long)puVar28 + (((ulong)puVar18 & 0xffffffff) - 8));
        puVar14 = (undefined8 *)((long)puVar25 - ((ulong)(puVar25 + 1) & 0xfffffffffffffff8));
        uVar10 = (int)puVar14 + (uint)puVar18 & 0xfffffff8;
        if (uVar10 < 8) goto code_r0x00107b87;
        uVar15 = 0;
        do {
          uVar12 = (ulong)uVar15;
          uVar15 = uVar15 + 8;
          *(undefined8 *)(((ulong)(puVar25 + 1) & 0xfffffffffffffff8) + uVar12) =
               *(undefined8 *)((long)puVar28 + (uVar12 - (long)puVar14));
          if (uVar10 <= uVar15) goto code_r0x00107b87;
        } while( true );
      }
      if (((ulong)puVar18 & 4) == 0) {
        if ((int)uVar12 == 0) goto code_r0x00107b87;
        *(undefined *)puVar25 = *(undefined *)puVar28;
        if (((ulong)puVar18 & 2) != 0) goto code_r0x00107f10;
        goto code_r0x00107b87;
      }
      *(undefined4 *)puVar25 = *(undefined4 *)puVar28;
      *(undefined4 *)((long)puVar25 + (uVar12 - 4)) = *(undefined4 *)((long)puVar28 + (uVar12 - 4));
      goto code_r0x00107b87;
    }
  }
  fVar34 = (float10)param_4;
  if ((long)param_4 < 0) {
    fVar34 = fVar34 + (float10)_UNK_0011001c;
  }
  fVar35 = (float10)param_5;
  if ((long)param_5 < 0) {
    fVar35 = fVar35 + (float10)_UNK_0011001c;
  }
  fVar36 = (float10)param_2;
  if ((long)param_2 < 0) {
    fVar36 = fVar36 + (float10)_UNK_0011001c;
  }
  fVar36 = fVar36 * (fVar34 / fVar35);
  if ((uVar10 & 0x10) == 0) {
    if ((uVar31 != 1) && (fVar36 < _UNK_00110070)) {
      adjust_value_part_0((ulong)uVar31);
    }
    puVar14 = (undefined8 *)0x0;
    func_0x001025a0(puVar19,1,0xffffffffffffffff);
    puVar17 = (undefined8 *)0xffffffff;
    uVar12 = func_0x001021b0(puVar19);
    goto code_r0x001078b0;
  }
  puVar17 = (undefined8 *)0x0;
  fVar34 = (float10)uVar9;
  do {
    fVar35 = fVar34;
    uVar15 = (int)puVar17 + 1;
    puVar17 = (undefined8 *)(ulong)uVar15;
    fVar34 = fVar35 * (float10)uVar9;
    if (fVar36 < fVar34) break;
  } while (uVar15 != 8);
  puVar14 = (undefined8 *)((long)puVar18 + 1);
  fVar36 = fVar36 / fVar35;
  uVar24 = (long)puVar18 + (ulong)(uVar8 == 0) + 2;
  if (uVar31 == 1) {
    func_0x001025a0(puVar19,1,0xffffffffffffffff);
    uVar12 = func_0x001021b0(puVar19);
    if (uVar12 <= uVar24) goto code_r0x00107732;
  }
  else {
    if (fVar36 < _UNK_00110070) {
      adjust_value_part_0((ulong)uVar31);
    }
    func_0x001025a0(puVar19,1,0xffffffffffffffff,&UNK_0011002a);
    uVar12 = func_0x001021b0(puVar19);
    if (uVar12 <= uVar24) {
code_r0x00107732:
      if (((uVar10 & 8) == 0) || (puVar19[uVar12 - 1] != '0')) goto code_r0x001078b0;
      if (uVar31 == 1) goto code_r0x00107c93;
    }
    if (fVar36 * (float10)_UNK_00110064 < _UNK_00110070) {
      adjust_value_part_0((ulong)uVar31);
    }
  }
code_r0x00107c93:
  puVar14 = (undefined8 *)0x0;
  func_0x001025a0(puVar19,1,0xffffffffffffffff);
  uVar12 = func_0x001021b0(puVar19);
code_r0x001078b0:
  puVar32 = (undefined8 *)((long)puVar25 - uVar12);
  puVar28 = (undefined8 *)(uVar12 - (long)puVar14);
  puVar21 = puVar19;
  func_0x00102490(puVar32,puVar19,uVar12);
  puVar18 = puVar14;
  puVar25 = (undefined8 *)((long)puVar28 + (long)puVar32);
  puVar30 = puVar29;
code_r0x001078d0:
  do {
    puVar29 = puVar30;
    if (((ulong)puVar27 & 4) != 0) {
      puVar28 = (undefined8 *)((long)puVar25 - (long)puVar32);
      puVar18 = (undefined8 *)0xffffffffffffffff;
      puVar29 = (undefined *)func_0x001021b0(puVar30);
      puVar20 = auStack120;
      func_0x00102350(puVar20,puVar32,puVar28);
      pbVar33 = pbVar2;
      while( true ) {
        bVar1 = *pbVar33;
        if (bVar1 != 0) {
          puVar18 = (undefined8 *)(ulong)bVar1;
          if (0x7e < bVar1) {
            puVar18 = puVar28;
          }
          pbVar33 = pbVar33 + 1;
        }
        if (puVar28 < puVar18) {
          puVar32 = (undefined8 *)((long)puVar25 - (long)puVar28);
          puVar17 = (undefined8 *)((ulong)puVar17 & 0xffffffff);
          func_0x00102360(puVar32,puVar20,puVar28);
          puVar21 = puVar20;
          goto code_r0x001078da;
        }
        puVar28 = (undefined8 *)((long)puVar28 - (long)puVar18);
        puVar21 = puVar20 + (long)puVar28;
        puVar25 = (undefined8 *)
                  func_0x00102360((undefined8 *)((long)puVar25 - (long)puVar18),puVar21,puVar18);
        if (puVar28 == (undefined8 *)0x0) break;
        puVar25 = (undefined8 *)
                  func_0x00102360((undefined8 *)((long)puVar25 - (long)puVar29),puVar30,puVar29);
      }
      puVar17 = (undefined8 *)((ulong)puVar17 & 0xffffffff);
      puVar28 = puVar27;
      puVar32 = puVar25;
    }
code_r0x001078da:
    uVar31 = (uint)puVar32;
    if (((ulong)puVar27 & 0x80) != 0) {
      if ((int)puVar17 == -1) {
        if (param_5 < 2) {
          puVar17 = (undefined8 *)0x0;
        }
        else {
          puVar17 = (undefined8 *)0x1;
          uVar12 = 1;
          do {
            uVar12 = uVar12 * uVar9;
            if (param_5 <= uVar12) break;
            uVar10 = (int)puVar17 + 1;
            puVar17 = (undefined8 *)(ulong)uVar10;
          } while (uVar10 != 8);
        }
      }
      uVar12 = (ulong)puVar27 & 0x100;
      uVar24 = (ulong)puVar27 & 0x100;
      uVar7 = (ulong)puVar27 & 0x100;
      uVar10 = (uint)puVar17;
      if (((uint)puVar27 & 0x100 | uVar10) != 0) {
        uVar6 = (ulong)puVar27 & 0x40;
        puVar27 = (undefined8 *)(ulong)((uint)puVar27 & 0x40);
        if (uVar6 != 0) {
          puStack192 = (undefined8 *)(puVar19 + 0x288);
          puVar19[0x287] = 0x20;
        }
        if (uVar10 == 0) {
          puVar14 = puStack192;
          if (uVar7 != 0) goto code_r0x0010794b;
        }
        else {
          if ((uVar10 == 1) && (uVar8 == 0)) {
            *(undefined *)puStack192 = 0x6b;
            puVar14 = (undefined8 *)((long)puStack192 + 1);
            puVar17 = puStack192;
            if (uVar24 == 0) {
code_r0x00107d74:
              puStack192 = (undefined8 *)((long)puStack192 + 1);
              goto code_r0x00107957;
            }
          }
          else {
            puVar17 = (undefined8 *)(long)(int)uVar10;
            *(undefined *)puStack192 = *(undefined *)(puVar17 + 0x2200b);
            if (uVar12 == 0) goto code_r0x00107d74;
            puVar25 = (undefined8 *)(ulong)uVar8;
            puVar14 = (undefined8 *)((long)puStack192 + 1);
            if (uVar8 != 0) {
              *(undefined *)((long)puStack192 + 1) = 0x69;
              puVar14 = (undefined8 *)((long)puStack192 + 2);
            }
          }
code_r0x0010794b:
          puStack192 = (undefined8 *)((long)puVar14 + 1);
          *(undefined *)puVar14 = 0x42;
        }
      }
    }
code_r0x00107957:
    uVar12 = uStack64 ^ *(ulong *)(in_FS_OFFSET + 0x28);
    uVar13 = (uint)uVar12;
    *(undefined *)puStack192 = 0;
    if (uVar12 == 0) {
      return puVar32;
    }
    uVar12 = func_0x001021f0();
code_r0x00107f10:
    *(undefined2 *)((long)puVar25 + (uVar12 - 2)) = *(undefined2 *)((long)puVar28 + (uVar12 - 2));
code_r0x00107b87:
    iVar23 = 0;
    uVar15 = 0;
code_r0x00107b90:
    puVar30 = puVar29;
    puVar32 = puVar25;
    if (uVar31 == 1) {
      puVar29 = puVar21;
      if (5 < (int)(uVar15 + (((uint)puVar21 & 1) + iVar23 != 0))) goto code_r0x00107ba6;
code_r0x00107bd0:
      do {
        puVar32 = (undefined8 *)((long)puVar32 + -1);
        puVar21 = (undefined *)((ulong)puVar29 / 10);
        *(char *)puVar32 = (char)puVar29 + (char)puVar21 * -10 + '0';
        puVar29 = puVar21;
      } while (puVar21 != (undefined *)0x0);
      goto code_r0x001078d0;
    }
    puVar29 = puVar21;
    if ((uVar31 != 0) || ((int)(iVar23 + uVar15) < 1)) goto code_r0x00107bd0;
code_r0x00107ba6:
    puVar21 = puVar21 + 1;
    puVar29 = puVar21;
    if ((uVar13 == 0) || (((undefined *)(ulong)uVar9 != puVar21 || ((int)puVar17 == 8))))
    goto code_r0x00107bd0;
    puVar17 = (undefined8 *)(ulong)((int)puVar17 + 1);
    puVar14 = puVar18;
    if (((ulong)puVar27 & 8) == 0) {
      *(undefined *)((long)puVar25 + -1) = 0x30;
      puVar25 = (undefined8 *)((long)puVar25 + ~(ulong)puVar18);
      uVar10 = (uint)puVar18;
      uVar12 = (ulong)puVar18 & 0xffffffff;
      if (uVar10 < 8) {
        puVar14 = (undefined8 *)(ulong)(uVar10 & 4);
        if (((ulong)puVar18 & 4) == 0) {
          if (((int)uVar12 != 0) &&
             (*(undefined *)puVar25 = *(undefined *)puVar28, ((ulong)puVar18 & 2) != 0)) {
            *(undefined2 *)((long)puVar25 + (uVar12 - 2)) =
                 *(undefined2 *)((long)puVar28 + (uVar12 - 2));
          }
        }
        else {
          *(undefined4 *)puVar25 = *(undefined4 *)puVar28;
          *(undefined4 *)((long)puVar25 + (uVar12 - 4)) =
               *(undefined4 *)((long)puVar28 + (uVar12 - 4));
        }
      }
      else {
        *puVar25 = *puVar28;
        *(undefined8 *)((long)puVar25 + (((ulong)puVar18 & 0xffffffff) - 8)) =
             *(undefined8 *)((long)puVar28 + (((ulong)puVar18 & 0xffffffff) - 8));
        puVar18 = (undefined8 *)((long)puVar25 - ((ulong)(puVar25 + 1) & 0xfffffffffffffff8));
        puVar28 = (undefined8 *)((long)puVar28 - (long)puVar18);
        uVar10 = (int)puVar18 + uVar10 & 0xfffffff8;
        if (7 < uVar10) {
          puVar29 = (undefined *)0x0;
          do {
            puVar21 = puVar29;
            uVar31 = (int)puVar21 + 8;
            *(undefined8 *)(puVar21 + ((ulong)(puVar25 + 1) & 0xfffffffffffffff8)) =
                 *(undefined8 *)((long)puVar28 + (long)puVar21);
            puVar29 = (undefined *)(ulong)uVar31;
          } while (uVar31 < uVar10);
        }
      }
    }
    puVar32 = (undefined8 *)((long)puVar25 + -1);
    *(undefined *)((long)puVar25 + -1) = 0x31;
    puVar18 = puVar14;
  } while( true );
}

