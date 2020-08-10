
/* WARNING: Could not reconcile some variable overlaps */

ulong sub_epsilon_src_nodes(long *param_1,long param_2,long param_3,undefined8 param_4)

{
  byte bVar1;
  undefined8 uVar2;
  ulong uVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong *puVar16;
  ulong uVar17;
  long unaff_RBX;
  undefined8 *puVar18;
  undefined8 *puVar19;
  ulong uVar20;
  undefined8 *puVar21;
  long *plVar22;
  ulong *puVar23;
  long lVar24;
  long lVar25;
  long **pplVar26;
  long *unaff_R12;
  long unaff_R13;
  long *plVar27;
  ulong *unaff_R15;
  long lVar28;
  long in_FS_OFFSET;
  long lStack416;
  int iStack324;
  long lStack320;
  undefined8 uStack312;
  long lStack304;
  undefined8 uStack288;
  undefined4 uStack280;
  undefined4 uStack276;
  undefined4 uStack272;
  undefined4 uStack268;
  undefined4 uStack264;
  undefined4 uStack260;
  undefined auStack256 [16];
  undefined auStack240 [16];
  undefined8 uStack224;
  undefined4 uStack216;
  undefined4 uStack212;
  undefined4 uStack208;
  undefined4 uStack204;
  undefined4 uStack200;
  undefined4 uStack196;
  long lStack184;
  long lStack168;
  undefined8 *puStack160;
  long *plStack152;
  long lStack144;
  long lStack136;
  ulong *puStack128;
  ulong uStack120;
  long lStack112;
  undefined8 uStack104;
  undefined4 *puStack96;
  undefined4 uStack88;
  undefined4 uStack84;
  undefined4 uStack80;
  undefined4 uStack76;
  long *plStack72;
  ulong uStack64;
  
  uStack64 = *(ulong *)(in_FS_OFFSET + 0x28);
  plStack72 = (long *)0x0;
  uStack88 = 0;
  uStack84 = 0;
  uStack80 = 0;
  uStack76 = 0;
  puVar18 = (undefined8 *)(param_1[7] + param_2 * 0x18);
  lVar10 = puVar18[1];
  uStack104 = param_4;
  if (0 < lVar10) {
    puStack96 = &uStack88;
    unaff_RBX = 0;
    do {
      lVar25 = *(long *)(puVar18[2] + unaff_RBX * 8);
      if ((param_2 != lVar25) && ((*(byte *)(lVar25 * 0x10 + *param_1 + 8) & 8) != 0)) {
        puVar19 = puVar18 + 2;
        lVar25 = lVar25 * 0x18;
        lStack112 = param_1[5] + lVar25;
        unaff_R15 = *(ulong **)(lStack112 + 0x10);
        uStack120 = *unaff_R15;
        puStack128 = (ulong *)&UNK_00109d7d;
        lVar9 = re_node_set_contains_isra_3(lVar10,puVar19,uStack120);
        if (*(long *)(lStack112 + 8) < 2) {
          if (lVar9 != 0) goto code_r0x00109d20;
          puStack128 = (ulong *)&UNK_00109da6;
          lVar9 = re_node_set_contains_isra_3(*(undefined8 *)(param_3 + 8),param_3 + 0x10,uStack120)
          ;
joined_r0x00109dec:
          if (lVar9 != 0) {
code_r0x00109cfa:
            puStack128 = (ulong *)&UNK_00109d11;
            uVar6 = re_node_set_add_intersect(puStack96,uStack104,param_1[7] + lVar25);
            if (uVar6 != 0) {
              uStack120 = uStack120 & 0xffffffff00000000 | (ulong)uVar6;
              puStack128 = (ulong *)&UNK_00109e9d;
              plVar22 = plStack72;
              func_0x00101880();
              uVar12 = uStack120 & 0xffffffff;
              goto code_r0x00109e68;
            }
            lVar10 = puVar18[1];
          }
        }
        else {
          if (lVar9 == 0) {
            puStack128 = (ulong *)&UNK_00109cf1;
            lVar9 = re_node_set_contains_isra_3
                              (*(undefined8 *)(param_3 + 8),param_3 + 0x10,uStack120);
            if (lVar9 == 0) goto code_r0x00109db8;
            goto code_r0x00109cfa;
          }
code_r0x00109db8:
          unaff_R15 = (ulong *)unaff_R15[1];
          if (0 < (long)unaff_R15) {
            puStack128 = (ulong *)&UNK_00109dd3;
            lVar9 = re_node_set_contains_isra_3(lVar10,puVar19,unaff_R15);
            if (lVar9 == 0) {
              puStack128 = (ulong *)&UNK_00109de9;
              lVar9 = re_node_set_contains_isra_3(*(undefined8 *)(param_3 + 8),param_3 + 0x10);
              goto joined_r0x00109dec;
            }
          }
        }
      }
code_r0x00109d20:
      unaff_RBX = unaff_RBX + 1;
    } while (unaff_RBX < lVar10);
    lVar25 = 0;
    pplVar26 = &plStack72;
    unaff_R12 = param_1;
    unaff_R13 = param_2;
    if (0 < lVar10) {
      do {
        puStack128 = (ulong *)&UNK_00109e28;
        lVar10 = re_node_set_contains_isra_3
                           (CONCAT44(uStack76,uStack80),pplVar26,
                            *(undefined8 *)(puVar18[2] + lVar25 * 8));
        if (lVar10 == 0) {
          unaff_RBX = param_3 + 0x10;
          puStack128 = (ulong *)&UNK_00109e3d;
          lVar10 = re_node_set_contains_isra_3(*(undefined8 *)(param_3 + 8),unaff_RBX);
          if (-1 < lVar10 + -1) {
            puStack128 = (ulong *)&UNK_00109e52;
            re_node_set_remove_at_isra_4_part_5(param_3 + 8,unaff_RBX,lVar10 + -1);
          }
        }
        lVar25 = lVar25 + 1;
      } while (puVar18[1] != lVar25 && lVar25 <= (long)puVar18[1]);
    }
  }
  puStack128 = (ulong *)&UNK_00109e66;
  plVar22 = plStack72;
  func_0x00101880();
  uVar12 = 0;
  param_1 = unaff_R12;
  param_2 = unaff_R13;
code_r0x00109e68:
  uVar20 = uStack64 ^ *(ulong *)(in_FS_OFFSET + 0x28);
  if (uVar20 == 0) {
    return uVar12;
  }
  puStack128 = (ulong *)&UNK_00109eab;
  func_0x00101990();
  lStack184 = *(long *)(in_FS_OFFSET + 0x28);
  lStack168 = unaff_RBX;
  puStack160 = puVar18;
  plStack152 = param_1;
  lStack144 = param_2;
  lStack136 = param_3;
  puStack128 = unaff_R15;
  lVar10 = func_0x00101ac0(0x3800);
  if (lVar10 != 0) {
    puVar16 = (ulong *)(lVar10 + 0x1800);
    uStack288._0_4_ = 0;
    uStack288._4_4_ = 0;
    uStack280 = 0;
    uStack276 = 0;
    uStack272 = 0;
    uStack268 = 0;
    uStack264 = 0;
    uStack260 = 0;
    *(undefined8 *)(uVar20 + 0x58) = 0;
    *(undefined8 *)(uVar20 + 0x60) = 0;
    if (*(long *)(uVar20 + 0x10) < 1) {
      func_0x00101880(0,lVar10);
      goto code_r0x0010a9b4;
    }
    lStack416 = 0;
    puVar18 = (undefined8 *)0x0;
    do {
      plVar27 = (long *)(*(long *)(*(long *)(uVar20 + 0x18) + lStack416 * 8) * 0x10 + *plVar22);
      bVar1 = *(byte *)(plVar27 + 1);
      uVar6 = *(uint *)(plVar27 + 1);
      uVar7 = uVar6 >> 8;
      puVar19 = puVar18;
      if (bVar1 == 1) {
        puVar23 = (ulong *)((long)&uStack288 + (ulong)((uint)(*(byte *)plVar27 >> 3) & 0x18));
        *puVar23 = *puVar23 | 1 << (*(byte *)plVar27 & 0x3f);
code_r0x0010a316:
        if ((uVar6 & 0x3ff00) == 0) {
code_r0x0010a3e0:
          puVar13 = (undefined8 *)0x0;
          if (0 < (long)puVar18) {
            do {
              lVar25 = (long)puVar13 * 0x20;
              if ((bVar1 != 1) ||
                 ((*(ulong *)((long)puVar16 + lVar25 + (ulong)((uint)(*(byte *)plVar27 >> 3) & 0x18)
                             ) >> ((ulong)*(byte *)plVar27 & 0x1f) & 1) != 0)) {
                uVar12 = 0;
                lVar9 = 0;
                do {
                  uVar15 = *(ulong *)(&uStack288 + lVar9 * 2) & (puVar16 + (long)puVar13 * 4)[lVar9]
                  ;
                  *(ulong *)(auStack256 + lVar9 * 8) = uVar15;
                  lVar9 = lVar9 + 1;
                  uVar12 = uVar12 | uVar15;
                } while (lVar9 != 4);
                if (uVar12 != 0) {
                  uVar15 = 0;
                  uVar12 = 0;
                  lVar9 = 0;
                  do {
                    uVar14 = *(ulong *)(&uStack288 + lVar9 * 2);
                    uVar3 = (puVar16 + (long)puVar13 * 4)[lVar9];
                    uVar17 = ~uVar14 & uVar3;
                    uVar14 = ~uVar3 & uVar14;
                    *(ulong *)(&uStack224 + lVar9 * 8) = uVar17;
                    uVar12 = uVar12 | uVar17;
                    *(ulong *)(&uStack288 + lVar9 * 2) = uVar14;
                    lVar9 = lVar9 + 1;
                    uVar15 = uVar15 | uVar14;
                  } while (lVar9 != 4);
                  lVar9 = lVar10 + (long)puVar13 * 0x18;
                  if (uVar12 != 0) {
                    puVar23 = puVar16 + (long)puVar18 * 4;
                    *(uint *)puVar23 =
                         CONCAT22(uStack224._2_2_,CONCAT11(uStack224._1_1_,(undefined)uStack224));
                    *(undefined4 *)((long)puVar23 + 4) = uStack224._4_4_;
                    *(undefined4 *)(puVar23 + 1) = uStack216;
                    *(undefined4 *)((long)puVar23 + 0xc) = uStack212;
                    *(undefined4 *)(puVar23 + 2) = uStack208;
                    *(undefined4 *)((long)puVar23 + 0x14) = uStack204;
                    *(undefined4 *)(puVar23 + 3) = uStack200;
                    *(undefined4 *)((long)puVar23 + 0x1c) = uStack196;
                    *(int *)(puVar16 + (long)puVar13 * 4) = SUB164(auStack256,0);
                    *(undefined4 *)((long)puVar16 + lVar25 + 4) = SUB164(auStack256 >> 0x20,0);
                    *(int *)(puVar16 + (long)puVar13 * 4 + 1) = SUB164(auStack256 >> 0x40,0);
                    *(undefined4 *)((long)puVar16 + lVar25 + 0xc) = SUB164(auStack256 >> 0x60,0);
                    *(undefined4 *)(lVar10 + 0x1810 + lVar25) = SUB164(auStack240,0);
                    *(undefined4 *)((long)puVar16 + lVar25 + 0x14) = SUB164(auStack240 >> 0x20,0);
                    *(int *)(puVar16 + (long)puVar13 * 4 + 3) = SUB164(auStack240 >> 0x40,0);
                    *(undefined4 *)((long)puVar16 + lVar25 + 0x1c) = SUB164(auStack240 >> 0x60,0);
                    iVar8 = re_node_set_init_copy
                                      (SUB168(auStack240,0),lVar10 + (long)puVar18 * 0x18,lVar9);
                    if (iVar8 != 0) goto code_r0x0010a5e0;
                    puVar18 = (undefined8 *)((long)puVar18 + 1);
                  }
                  cVar5 = re_node_set_insert(lVar9,*(undefined8 *)
                                                    (*(long *)(uVar20 + 0x18) + lStack416 * 8),lVar9
                                            );
                  if (cVar5 == '\0') goto code_r0x0010a5e0;
                  if (uVar15 == 0) break;
                }
              }
              puVar13 = (undefined8 *)((long)puVar13 + 1);
            } while ((long)puVar13 < (long)puVar18);
          }
          puVar19 = puVar18;
          if (puVar18 != puVar13) goto code_r0x00109faf;
          puVar23 = puVar16 + (long)puVar18 * 4;
          *(uint *)puVar23 = (uint)uStack288;
          *(undefined4 *)((long)puVar23 + 4) = uStack288._4_4_;
          *(undefined4 *)(puVar23 + 1) = uStack280;
          *(undefined4 *)((long)puVar23 + 0xc) = uStack276;
          *(undefined4 *)(puVar23 + 2) = uStack272;
          *(undefined4 *)((long)puVar23 + 0x14) = uStack268;
          *(undefined4 *)(puVar23 + 3) = uStack264;
          *(undefined4 *)((long)puVar23 + 0x1c) = uStack260;
          uVar2 = *(undefined8 *)(*(long *)(uVar20 + 0x18) + lStack416 * 8);
          puVar19 = (undefined8 *)(lVar10 + (long)puVar18 * 0x18);
          *puVar19 = 1;
          puVar19[1] = 1;
          puVar13 = (undefined8 *)func_0x00101ac0(CONCAT44(uStack268,uStack272),8);
          *(undefined8 **)(puVar19 + 2) = puVar13;
          if (puVar13 == (undefined8 *)0x0) {
            puVar19[1] = 0;
            *puVar19 = 0;
            if (puVar18 == (undefined8 *)0x0) {
              func_0x00101880(lVar10);
            }
            else {
code_r0x0010a5e0:
              puVar19 = (undefined8 *)(lVar10 + 0x10);
              puVar18 = puVar19 + (long)puVar18 * 3;
              do {
                uVar2 = *puVar19;
                puVar19 = puVar19 + 3;
                func_0x00101880(uVar2);
              } while (puVar18 != puVar19);
              func_0x00101880(lVar10);
            }
            goto code_r0x0010a2c0;
          }
          *puVar13 = uVar2;
          puVar18 = (undefined8 *)((long)puVar18 + 1);
        }
        else {
          if ((uVar7 & 0x20) != 0) {
            uVar6 = (uint)uStack288 & 0x400;
            uStack288._0_4_ = 0;
            uStack288._4_4_ = 0;
            uStack280 = 0;
            uStack276 = 0;
            uStack272 = 0;
            uStack268 = 0;
            uStack264 = 0;
            uStack260 = 0;
            if (uVar6 == 0) goto code_r0x00109faf;
            uStack288._0_4_ = 0x400;
            uStack288._4_4_ = 0;
          }
          if ((uVar7 & 0x80) == 0) {
            if ((uVar7 & 4) != 0) {
              if (bVar1 == 1) {
                if ((*(byte *)((long)plVar27 + 10) & 0x40) == 0) goto code_r0x0010a5c4;
                iVar8 = *(int *)((long)plVar22 + 0xb4);
              }
              else {
                iVar8 = *(int *)((long)plVar22 + 0xb4);
              }
              if (iVar8 < 2) {
                uVar12 = 0;
                lVar25 = 0;
                do {
                  uVar15 = *(ulong *)(&uStack288 + lVar25 * 2) & plVar22[lVar25 + 0x17];
                  *(ulong *)(&uStack288 + lVar25 * 2) = uVar15;
                  lVar25 = lVar25 + 1;
                  uVar12 = uVar12 | uVar15;
                } while (lVar25 != 4);
              }
              else {
                lVar25 = plVar22[0xf];
                uVar12 = 0;
                lVar9 = 0;
                do {
                  uVar15 = (~*(ulong *)(lVar25 + lVar9 * 8) | plVar22[lVar9 + 0x17]) &
                           *(ulong *)(&uStack288 + lVar9 * 2);
                  *(ulong *)(&uStack288 + lVar9 * 2) = uVar15;
                  lVar9 = lVar9 + 1;
                  uVar12 = uVar12 | uVar15;
                } while (lVar9 != 4);
              }
              if (uVar12 == 0) goto code_r0x00109faf;
            }
            if ((uVar7 & 8) != 0) {
              if (bVar1 == 1) {
                if ((*(byte *)((long)plVar27 + 10) & 0x40) != 0) goto code_r0x0010a5c4;
                iVar8 = *(int *)((long)plVar22 + 0xb4);
              }
              else {
                iVar8 = *(int *)((long)plVar22 + 0xb4);
              }
              if (iVar8 < 2) {
                uVar12 = 0;
                lVar25 = 0;
                do {
                  uVar15 = ~plVar22[lVar25 + 0x17] & *(ulong *)(&uStack288 + lVar25 * 2);
                  *(ulong *)(&uStack288 + lVar25 * 2) = uVar15;
                  lVar25 = lVar25 + 1;
                  uVar12 = uVar12 | uVar15;
                } while (lVar25 != 4);
              }
              else {
                lVar25 = plVar22[0xf];
                uVar12 = 0;
                lVar9 = 0;
                do {
                  uVar15 = ~(plVar22[lVar9 + 0x17] & *(ulong *)(lVar25 + lVar9 * 8)) &
                           *(ulong *)(&uStack288 + lVar9 * 2);
                  *(ulong *)(&uStack288 + lVar9 * 2) = uVar15;
                  lVar9 = lVar9 + 1;
                  uVar12 = uVar12 | uVar15;
                } while (lVar9 != 4);
              }
              if (uVar12 == 0) goto code_r0x00109faf;
            }
            goto code_r0x0010a3e0;
          }
        }
code_r0x0010a5c4:
        uStack288._0_4_ = 0;
        uStack288._4_4_ = 0;
        uStack280 = 0;
        uStack276 = 0;
        uStack272 = 0;
        uStack268 = 0;
        uStack264 = 0;
        uStack260 = 0;
        puVar19 = puVar18;
      }
      else {
        if (bVar1 == 3) {
          lVar25 = *plVar27;
          lVar9 = 0;
          do {
            *(ulong *)((long)&uStack288 + lVar9) =
                 *(ulong *)((long)&uStack288 + lVar9) | *(ulong *)(lVar25 + lVar9);
            lVar9 = lVar9 + 8;
          } while (lVar9 != 0x20);
          goto code_r0x0010a316;
        }
        if (bVar1 == 5) {
          if (*(int *)((long)plVar22 + 0xb4) < 2) {
            uStack288._0_4_ = 0xffffffff;
            uStack288._4_4_ = 0xffffffff;
            uStack280 = 0xffffffff;
            uStack276 = 0xffffffff;
            uStack272 = 0xffffffff;
            uStack268 = 0xffffffff;
            uStack264 = 0xffffffff;
            uStack260 = 0xffffffff;
          }
          else {
            lVar25 = plVar22[0xf];
            lVar9 = 0;
            do {
              *(ulong *)((long)&uStack288 + lVar9) =
                   *(ulong *)((long)&uStack288 + lVar9) | *(ulong *)(lVar25 + lVar9);
              lVar9 = lVar9 + 8;
            } while (lVar9 != 0x20);
          }
code_r0x0010a656:
          if ((plVar22[0x1b] & 0x40U) == 0) {
            uVar12 = CONCAT44(uStack288._4_4_,(uint)uStack288) & 0xfffffffffffffbff;
            uStack288._0_4_ = (uint)uVar12;
            uStack288._4_4_ = (undefined4)(uVar12 >> 0x20);
          }
          if ((plVar22[0x1b] & 0x80U) != 0) {
            uVar12 = CONCAT44(uStack288._4_4_,(uint)uStack288) & 0xfffffffffffffffe;
            uStack288._0_4_ = (uint)uVar12;
            uStack288._4_4_ = (undefined4)(uVar12 >> 0x20);
          }
          goto code_r0x0010a316;
        }
        if (bVar1 == 7) {
          uStack288._0_4_ = 0xffffffff;
          uStack288._4_4_ = 0xffffffff;
          uStack280 = 0xffffffff;
          uStack276 = 0xffffffff;
          goto code_r0x0010a656;
        }
      }
code_r0x00109faf:
      lStack416 = lStack416 + 1;
      puVar18 = puVar19;
    } while (lStack416 < *(long *)(uVar20 + 0x10));
    if ((long)puVar19 < 1) goto code_r0x0010aa29;
    lStack320 = (long)puVar19 + 1;
    uStack312 = 0;
    lVar9 = lStack320 * 8;
    lVar25 = func_0x00101ac0(lVar9);
    lStack304 = lVar25;
    if (((lVar25 != 0) && (iStack324 = 0, (long)puVar19 < 0xaaaaaaaaaaaa856)) &&
       (lVar11 = func_0x00101ac0((long)puVar19 * 0x18), lVar11 != 0)) {
      lVar9 = lVar9 + -8;
      bVar4 = false;
      lVar25 = lVar11 + lVar9;
      lVar9 = lVar9 + lVar25;
      uStack224._0_1_ = 0;
      uStack224._1_1_ = 0;
      uStack224._2_2_ = 0;
      uStack224._4_4_ = 0;
      uStack216 = 0;
      uStack212 = 0;
      puVar18 = (undefined8 *)0x0;
      plVar27 = (long *)(lVar10 + 8);
      uStack208 = 0;
      uStack204 = 0;
      uStack200 = 0;
      uStack196 = 0;
      puVar23 = puVar16;
      do {
        uStack312 = 0;
        if (0 < *plVar27) {
          lVar28 = 0;
          do {
            lVar24 = *(long *)(plVar22[3] + *(long *)(plVar27[1] + lVar28 * 8) * 8);
            if ((lVar24 != -1) &&
               (iStack324 = re_node_set_merge(&lStack320,plVar22[6] + lVar24 * 0x18,lVar24 * 3),
               iStack324 != 0)) goto code_r0x0010a7ed;
            lVar28 = lVar28 + 1;
          } while (*plVar27 != lVar28 && lVar28 <= *plVar27);
        }
        lVar28 = re_acquire_state_context(&iStack324,plVar22,&lStack320);
        *(long *)(lVar11 + (long)puVar18 * 8) = lVar28;
        if ((lVar28 == 0) && (iStack324 != 0)) goto code_r0x0010a7ed;
        if (*(char *)(lVar28 + 0x68) < '\0') {
          lVar28 = re_acquire_state_context(&iStack324,plVar22,&lStack320,1);
          *(long *)(lVar25 + (long)puVar18 * 8) = lVar28;
          if ((lVar28 == 0) && (iStack324 != 0)) goto code_r0x0010a7ed;
          if ((lVar28 != *(long *)(lVar11 + (long)puVar18 * 8)) &&
             (1 < *(int *)((long)plVar22 + 0xb4))) {
            bVar4 = true;
          }
          lVar28 = re_acquire_state_context(&iStack324,plVar22,&lStack320,2);
          *(long *)(lVar9 + (long)puVar18 * 8) = lVar28;
          if ((lVar28 == 0) && (iStack324 != 0)) goto code_r0x0010a7ed;
        }
        else {
          *(long *)(lVar25 + (long)puVar18 * 8) = lVar28;
          *(undefined8 *)(lVar9 + (long)puVar18 * 8) = *(undefined8 *)(lVar11 + (long)puVar18 * 8);
        }
        lVar28 = 0;
        do {
          *(ulong *)(&uStack224 + lVar28) =
               *(ulong *)(&uStack224 + lVar28) | *(ulong *)((long)puVar23 + lVar28);
          lVar28 = lVar28 + 8;
        } while (lVar28 != 0x20);
        puVar18 = (undefined8 *)((long)puVar18 + 1);
        plVar27 = plVar27 + 3;
        puVar23 = puVar23 + 4;
      } while (puVar18 != puVar19);
      if (bVar4) {
        puVar18 = (undefined8 *)func_0x00101a70(8,0x200);
        *(undefined8 **)(uVar20 + 0x60) = puVar18;
        if (puVar18 != (undefined8 *)0x0) {
          lVar28 = 0;
          puVar13 = puVar18;
          do {
            uVar12 = *(ulong *)(&uStack224 + lVar28);
            if (uVar12 != 0) {
              uVar15 = 1;
              puVar21 = puVar13;
              do {
                if ((uVar12 & 1) != 0) {
                  if ((*(ulong *)(lVar10 + 0x1800 + lVar28) & uVar15) == 0) {
                    puVar23 = (ulong *)(lVar10 + 0x1820 + lVar28);
                    lVar24 = 0;
                    do {
                      uVar14 = *puVar23;
                      lVar24 = lVar24 + 1;
                      puVar23 = puVar23 + 4;
                    } while ((uVar14 & uVar15) == 0);
                  }
                  else {
                    lVar24 = 0;
                  }
                  *puVar21 = *(undefined8 *)(lVar11 + lVar24 * 8);
                  puVar21[0x100] = *(undefined8 *)(lVar25 + lVar24 * 8);
                }
                uVar15 = uVar15 * 2;
                puVar21 = puVar21 + 1;
                uVar12 = uVar12 >> 1;
              } while (uVar12 != 0);
            }
            lVar28 = lVar28 + 8;
            puVar13 = puVar13 + 0x40;
          } while (lVar28 != 0x20);
          goto code_r0x0010a20e;
        }
      }
      else {
        puVar18 = (undefined8 *)func_0x00101a70(8,0x100);
        *(undefined8 **)(uVar20 + 0x58) = puVar18;
        if (puVar18 != (undefined8 *)0x0) {
          lVar28 = 0;
          do {
            uVar12 = *(ulong *)(&uStack224 + lVar28);
            if (uVar12 != 0) {
              uVar15 = 1;
              puVar13 = puVar18 + lVar28 * 8;
              do {
                if ((uVar12 & 1) != 0) {
                  if ((*(ulong *)(lVar10 + 0x1800 + lVar28) & uVar15) == 0) {
                    puVar23 = (ulong *)(lVar10 + 0x1820 + lVar28);
                    lVar24 = 0;
                    do {
                      uVar14 = *puVar23;
                      lVar24 = lVar24 + 1;
                      puVar23 = puVar23 + 4;
                    } while ((uVar14 & uVar15) == 0);
                    lVar24 = lVar24 * 8;
                  }
                  else {
                    lVar24 = 0;
                  }
                  if ((*(ulong *)((long)plVar22 + lVar28 + 0xb8) & uVar15) == 0) {
                    *puVar13 = *(undefined8 *)(lVar11 + lVar24);
                  }
                  else {
                    *puVar13 = *(undefined8 *)(lVar25 + lVar24);
                  }
                }
                uVar15 = uVar15 * 2;
                puVar13 = puVar13 + 1;
                uVar12 = uVar12 >> 1;
              } while (uVar12 != 0);
            }
            lVar28 = lVar28 + 8;
          } while (lVar28 != 0x20);
code_r0x0010a20e:
          if ((uStack224._1_1_ & 4) != 0) {
            puVar13 = (undefined8 *)0x0;
            do {
              if ((*puVar16 & 0x400) != 0) {
                uVar2 = *(undefined8 *)(lVar9 + (long)puVar13 * 8);
                puVar18[10] = uVar2;
                if (bVar4) {
                  puVar18[0x10a] = uVar2;
                }
                break;
              }
              puVar13 = (undefined8 *)((long)puVar13 + 1);
              puVar16 = puVar16 + 4;
            } while (puVar13 != puVar19);
          }
          func_0x00101880(lVar11);
          func_0x00101880(lStack304);
          puVar18 = (undefined8 *)(lVar10 + 0x10);
          puVar19 = puVar18 + (long)puVar19 * 3;
          do {
            uVar2 = *puVar18;
            puVar18 = puVar18 + 3;
            func_0x00101880(uVar2);
          } while (puVar19 != puVar18);
          func_0x00101880(lVar10);
          uVar12 = 1;
          goto code_r0x0010a2c2;
        }
      }
code_r0x0010a7ed:
      func_0x00101880(lVar11);
      lVar25 = lStack304;
    }
    func_0x00101880(lVar25);
    puVar13 = (undefined8 *)(lVar10 + 0x10);
    puVar18 = puVar13 + (long)puVar19 * 3;
    do {
      uVar2 = *puVar13;
      puVar13 = puVar13 + 3;
      func_0x00101880(uVar2);
    } while (puVar18 != puVar13);
    func_0x00101880(lVar10);
  }
code_r0x0010a2c0:
  do {
    uVar12 = 0;
code_r0x0010a2c2:
    while( true ) {
      if (lStack184 == *(long *)(in_FS_OFFSET + 0x28)) {
        return uVar12;
      }
      func_0x00101990();
code_r0x0010aa29:
      func_0x00101880(lVar10);
      if (puVar18 != (undefined8 *)0x0) break;
code_r0x0010a9b4:
      uVar12 = func_0x00101a70(8,0x100);
      *(ulong *)(uVar20 + 0x58) = uVar12;
      uVar12 = uVar12 & 0xffffffffffffff00 | (ulong)(uVar12 != 0);
    }
  } while( true );
}

