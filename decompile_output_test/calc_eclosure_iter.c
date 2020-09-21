
/* WARNING: Could not reconcile some variable overlaps */

ulong calc_eclosure_iter(undefined4 *param_1,long *param_2,long param_3,uint param_4)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  char cVar4;
  uint uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long extraout_RDX;
  long extraout_RDX_00;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  long unaff_R13;
  long lVar19;
  long unaff_R14;
  long lVar20;
  long in_FS_OFFSET;
  bool bVar21;
  long lStack240;
  undefined8 uStack232;
  long *plStack224;
  long lStack216;
  undefined4 *puStack200;
  long lStack192;
  long *plStack184;
  long lStack176;
  long lStack168;
  long *plStack160;
  long *plStack144;
  undefined4 *puStack136;
  char cStack125;
  uint uStack124;
  long lStack120;
  undefined8 uStack112;
  long lStack104;
  undefined4 uStack88;
  undefined4 uStack84;
  undefined4 uStack80;
  undefined4 uStack76;
  undefined8 uStack72;
  ulong uStack64;
  
  puStack200 = (undefined4 *)(param_3 * 0x18);
  uStack64 = *(ulong *)(in_FS_OFFSET + 0x28);
  plStack184 = (long *)(param_2[5] + (long)puStack200);
  uStack112 = 0;
  lStack120 = plStack184[1] + 1;
  plVar15 = (long *)(lStack120 * 8);
  plStack160 = (long *)&UNK_00109e2c;
  puStack136 = param_1;
  uStack124 = param_4;
  lStack104 = func_0x00101da0();
  if (lStack104 == 0) {
code_r0x0010a070:
    uVar7 = 0xc;
  }
  else {
    lVar18 = *param_2;
    unaff_R13 = param_3 * 0x10;
    *(undefined8 *)(param_2[6] + 8 + (long)puStack200) = 0xffffffffffffffff;
    lVar19 = lVar18 + unaff_R13;
    if ((*(uint *)(lVar19 + 8) & 0x3ff00) == 0) {
code_r0x00109e66:
      if ((*(byte *)(lVar19 + 8) & 8) == 0) goto code_r0x00109f30;
      lVar18 = param_2[5];
      lVar19 = lVar18 + (long)puStack200;
      if (*(long *)(lVar19 + 8) < 1) goto code_r0x00109f30;
      plStack144 = &lStack120;
      cStack125 = '\0';
      plStack184 = (long *)&uStack88;
      lVar20 = 0;
      do {
        while( true ) {
          unaff_R14 = lVar20;
          unaff_R13 = *(long *)(*(long *)(lVar19 + 0x10) + unaff_R14 * 8) * 0x18;
          puVar6 = (undefined *)(param_2[6] + unaff_R13);
          lVar19 = *(long *)(puVar6 + 8);
          param_4 = (uint)lVar19;
          if (lVar19 == -1) break;
          if (lVar19 == 0) {
            plStack160 = (long *)&UNK_0010a063;
            plVar15 = plStack184;
            uVar7 = calc_eclosure_iter(plStack184,param_2);
            if ((int)uVar7 != 0) goto code_r0x00109f76;
          }
          else {
                    /* WARNING: Load size is inaccurate */
            auVar1 = *(undefined *)puVar6;
            uStack88 = SUB164(auVar1,0);
            uStack84 = SUB164(auVar1 >> 0x20,0);
            uStack80 = SUB164(auVar1 >> 0x40,0);
            uStack76 = SUB164(auVar1 >> 0x60,0);
            uStack72 = *(undefined8 *)(puVar6 + 0x10);
          }
          plStack160 = (long *)&UNK_00109f07;
          plVar15 = plStack144;
          uVar7 = re_node_set_merge(plStack144,plStack184);
          if ((int)uVar7 != 0) goto code_r0x00109f76;
          if (*(long *)(param_2[6] + 8 + unaff_R13) == 0) {
            plStack160 = (long *)&UNK_00109f21;
            func_0x00101b00(uStack72);
            cStack125 = '\x01';
          }
          lVar18 = param_2[5];
          lVar20 = unaff_R14 + 1;
          lVar19 = lVar18 + (long)puStack200;
          if (*(long *)(lVar19 + 8) == lVar20 || *(long *)(lVar19 + 8) < lVar20)
          goto code_r0x00109fb7;
        }
        lVar19 = lVar18 + (long)puStack200;
        lVar20 = unaff_R14 + 1;
        cStack125 = '\x01';
      } while (*(long *)(lVar19 + 8) != lVar20 && lVar20 <= *(long *)(lVar19 + 8));
code_r0x00109fb7:
      unaff_R14 = unaff_R14 + 1;
      plVar15 = &lStack120;
      plStack160 = (long *)&UNK_00109fc4;
      cVar4 = re_node_set_insert(plVar15,param_3);
      if (cVar4 == '\0') goto code_r0x0010a070;
      lVar19 = param_2[6];
      if (((char)uStack124 == '\x01') || (cStack125 == '\0')) goto code_r0x00109f49;
      *(undefined8 *)((long)puStack200 + lVar19 + 8) = 0;
    }
    else {
      if (plStack184[1] != 0) {
        param_4 = (uint)(*(long *)plStack184[2] * 0x10);
        if ((*(byte *)(lVar18 + 10 + *(long *)plStack184[2] * 0x10) & 4) == 0) {
          plStack160 = (long *)&UNK_0010a03f;
          plVar15 = param_2;
          param_4 = (uint)param_3;
          uVar7 = duplicate_node_closure
                            (param_2,param_3,param_3,param_3,
                             (ulong)(*(uint *)(lVar19 + 8) >> 8 & 0x3ff));
          if ((int)uVar7 != 0) goto code_r0x00109f76;
          lVar19 = *param_2 + unaff_R13;
        }
        goto code_r0x00109e66;
      }
code_r0x00109f30:
      plVar15 = &lStack120;
      plStack160 = (long *)&UNK_00109f3d;
      cVar4 = re_node_set_insert(plVar15,param_3);
      if (cVar4 == '\0') goto code_r0x0010a070;
      lVar19 = param_2[6];
code_r0x00109f49:
      *(undefined4 *)(lVar19 + (long)puStack200) = (int)lStack120;
      *(undefined4 *)((long)puStack200 + lVar19 + 4) = (int)((ulong)lStack120 >> 0x20);
      *(undefined4 *)((long)puStack200 + lVar19 + 8) = (int)uStack112;
      *(undefined4 *)((long)puStack200 + lVar19 + 0xc) = (int)((ulong)uStack112 >> 0x20);
      *(long *)(lVar19 + 0x10 + (long)puStack200) = lStack104;
    }
    *puStack136 = (int)lStack120;
    puStack136[1] = (int)((ulong)lStack120 >> 0x20);
    puStack136[2] = (int)uStack112;
    puStack136[3] = (int)((ulong)uStack112 >> 0x20);
    *(long *)(puStack136 + 4) = lStack104;
    uVar7 = 0;
    puStack200 = puStack136;
  }
code_r0x00109f76:
  plVar12 = (long *)(uStack64 ^ *(ulong *)(in_FS_OFFSET + 0x28));
  if (plVar12 == (long *)0x0) {
    return uVar7;
  }
  plStack160 = (long *)&UNK_0010a07f;
  func_0x00101c20();
  lVar19 = plVar12[1];
  lStack216 = *(long *)(in_FS_OFFSET + 0x28);
  uStack232 = 0;
  plVar16 = (long *)(lVar19 * 8);
  plVar13 = plVar12;
  lStack240 = lVar19;
  lStack192 = param_3;
  lStack176 = unaff_R13;
  lStack168 = unaff_R14;
  plStack160 = param_2;
  plStack224 = (long *)func_0x00101da0();
  if (plStack224 == (long *)0x0) {
    uVar8 = 0xc;
  }
  else {
    if (0 < lVar19) {
      lVar19 = 0;
      do {
        lVar18 = *(long *)(plVar12[2] + lVar19 * 8);
        plVar13 = (long *)(plVar15[6] + lVar18 * 0x18);
        if (0 < plVar13[1]) {
          lVar20 = 0;
          do {
            lVar9 = *(long *)(plVar13[2] + lVar20 * 8);
            plVar16 = (long *)(lVar9 * 0x10 + *plVar15);
            if ((param_4 == (uint)*(byte *)(plVar16 + 1)) && (extraout_RDX == *plVar16)) {
              if (lVar9 != -1) {
                plVar13 = &lStack240;
                uVar5 = check_arrival_expand_ecl_sub
                                  (plVar15,&lStack240,lVar18,extraout_RDX,(ulong)param_4);
                plVar16 = plStack224;
                goto joined_r0x0010a15f;
              }
              break;
            }
            lVar20 = lVar20 + 1;
          } while (plVar13[1] != lVar20);
        }
        uVar5 = re_node_set_merge(&lStack240);
        plVar16 = plStack224;
joined_r0x0010a15f:
        plStack224 = plVar16;
        if (uVar5 != 0) {
          func_0x00101b00();
          uVar8 = (ulong)uVar5;
          goto code_r0x0010a1ae;
        }
        lVar19 = lVar19 + 1;
      } while (plVar12[1] != lVar19 && lVar19 <= plVar12[1]);
    }
    plVar16 = (long *)plVar12[2];
    func_0x00101b00();
    *(long **)(plVar12 + 2) = plStack224;
    uVar8 = 0;
    *(int *)plVar12 = (int)lStack240;
    *(undefined4 *)((long)plVar12 + 4) = (int)((ulong)lStack240 >> 0x20);
    *(int *)(plVar12 + 1) = (int)uStack232;
    *(undefined4 *)((long)plVar12 + 0xc) = (int)((ulong)uStack232 >> 0x20);
  }
code_r0x0010a1ae:
  if (lStack216 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar8;
  }
  func_0x00101c20();
  lVar19 = plVar13[1];
  if ((lVar19 == 0) || (lVar18 = *(long *)(extraout_RDX_00 + 8), lVar18 == 0)) {
    return 0;
  }
  lVar20 = plVar16[1];
  lVar9 = plVar16[2];
  if (*plVar16 < lVar19 + lVar18 + lVar20) {
    lVar19 = *plVar16 + lVar19 + lVar18;
    lVar9 = func_0x00101e00(lVar9,lVar19 * 8);
    if (lVar9 == 0) {
      return 0xc;
    }
    plVar16[2] = lVar9;
    *plVar16 = lVar19;
    lVar20 = plVar16[1];
    lVar19 = plVar13[1];
    lVar18 = *(long *)(extraout_RDX_00 + 8);
  }
  lVar11 = plVar13[2];
  lVar2 = *(long *)(extraout_RDX_00 + 0x10);
  lVar17 = lVar19 + -1;
  lVar10 = lVar20 + -1;
  lVar14 = lVar20 + lVar19 + lVar18;
  lVar18 = lVar18 + -1;
  lVar20 = *(long *)(lVar11 + lVar17 * 8);
  lVar19 = *(long *)(lVar2 + lVar18 * 8);
  do {
    bVar21 = SBORROW8(lVar20,lVar19);
    lVar3 = lVar20 - lVar19;
    if (lVar20 == lVar19) goto code_r0x0010a266;
    while (bVar21 != lVar3 < 0) {
      lVar18 = lVar18 + -1;
      if (lVar18 < 0) goto code_r0x0010a2c0;
      while( true ) {
        lVar19 = *(long *)(lVar2 + lVar18 * 8);
        bVar21 = SBORROW8(lVar20,lVar19);
        lVar3 = lVar20 - lVar19;
        if (lVar3 != 0) break;
code_r0x0010a266:
        if (-1 < lVar10) {
          do {
            lVar20 = *(long *)(lVar9 + lVar10 * 8);
            if (lVar20 <= lVar19) {
              if (lVar20 == lVar19) goto code_r0x0010a290;
              break;
            }
            lVar10 = lVar10 + -1;
          } while (lVar10 != -1);
        }
        lVar14 = lVar14 + -1;
        *(long *)(lVar9 + lVar14 * 8) = lVar19;
code_r0x0010a290:
        lVar17 = lVar17 + -1;
        if ((lVar17 < 0) || (lVar18 = lVar18 + -1, lVar18 < 0)) goto code_r0x0010a2c0;
        lVar20 = *(long *)(lVar11 + lVar17 * 8);
      }
    }
    lVar17 = lVar17 + -1;
    if (lVar17 < 0) break;
    lVar20 = *(long *)(lVar11 + lVar17 * 8);
  } while( true );
code_r0x0010a2c0:
  lVar20 = plVar16[1];
  lVar11 = plVar13[1] + lVar20 + *(long *)(extraout_RDX_00 + 8);
  lVar19 = lVar20 + -1;
  lVar18 = lVar11 + -1;
  lVar11 = lVar11 - lVar14;
  plVar16[1] = lVar20 + lVar11;
  if ((0 < lVar11) && (-1 < lVar19)) {
    do {
      while( true ) {
        lVar20 = *(long *)(lVar9 + lVar18 * 8);
        lVar2 = *(long *)(lVar9 + lVar19 * 8);
        plVar15 = (long *)(lVar9 + (lVar19 + lVar11) * 8);
        if (lVar20 <= lVar2) break;
        lVar18 = lVar18 + -1;
        lVar11 = lVar11 + -1;
        *plVar15 = lVar20;
        if (lVar11 == 0) {
          lVar11 = 0;
          goto code_r0x0010a331;
        }
      }
      lVar19 = lVar19 + -1;
      *plVar15 = lVar2;
    } while (lVar19 != -1);
  }
  lVar11 = lVar11 << 3;
code_r0x0010a331:
  func_0x00101d70(lVar9,lVar9 + lVar14 * 8,lVar11);
  return 0;
}

