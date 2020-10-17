
/* WARNING: Could not reconcile some variable overlaps */

ulong build_trtable(long *param_1,long param_2)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  bool bVar5;
  char cVar6;
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
  long lVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *unaff_RBP;
  undefined8 *puVar21;
  ulong *puVar22;
  long lVar23;
  long *plVar24;
  long lVar25;
  long in_FS_OFFSET;
  long lStack296;
  int iStack204;
  long lStack200;
  undefined8 uStack192;
  long lStack184;
  undefined8 uStack168;
  undefined4 uStack160;
  undefined4 uStack156;
  undefined4 uStack152;
  undefined4 uStack148;
  undefined4 uStack144;
  undefined4 uStack140;
  undefined auStack136 [16];
  undefined auStack120 [16];
  undefined8 uStack104;
  undefined4 uStack96;
  undefined4 uStack92;
  undefined4 uStack88;
  undefined4 uStack84;
  undefined4 uStack80;
  undefined4 uStack76;
  long lStack64;
  
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  lVar9 = func_0x00101ac0(0x3800);
  if (lVar9 != 0) {
    puVar16 = (ulong *)(lVar9 + 0x1800);
    uStack168._0_4_ = 0;
    uStack168._4_4_ = 0;
    uStack160 = 0;
    uStack156 = 0;
    uStack152 = 0;
    uStack148 = 0;
    uStack144 = 0;
    uStack140 = 0;
    *(undefined8 *)(param_2 + 0x58) = 0;
    *(undefined8 *)(param_2 + 0x60) = 0;
    if (*(long *)(param_2 + 0x10) < 1) {
      func_0x00101880(0,lVar9);
      goto code_r0x0010a9b4;
    }
    lStack296 = 0;
    unaff_RBP = (undefined8 *)0x0;
    do {
      plVar24 = (long *)(*(long *)(*(long *)(param_2 + 0x18) + lStack296 * 8) * 0x10 + *param_1);
      bVar1 = *(byte *)(plVar24 + 1);
      uVar2 = *(uint *)(plVar24 + 1);
      uVar7 = uVar2 >> 8;
      puVar20 = unaff_RBP;
      if (bVar1 == 1) {
        puVar22 = (ulong *)((long)&uStack168 + (ulong)((uint)(*(byte *)plVar24 >> 3) & 0x18));
        *puVar22 = *puVar22 | 1 << (*(byte *)plVar24 & 0x3f);
code_r0x0010a316:
        if ((uVar2 & 0x3ff00) == 0) {
code_r0x0010a3e0:
          puVar19 = (undefined8 *)0x0;
          if (0 < (long)unaff_RBP) {
            do {
              lVar10 = (long)puVar19 * 0x20;
              if ((bVar1 != 1) ||
                 ((*(ulong *)((long)puVar16 + lVar10 + (ulong)((uint)(*(byte *)plVar24 >> 3) & 0x18)
                             ) >> ((ulong)*(byte *)plVar24 & 0x1f) & 1) != 0)) {
                uVar12 = 0;
                lVar18 = 0;
                do {
                  uVar15 = *(ulong *)(&uStack168 + lVar18 * 2) &
                           (puVar16 + (long)puVar19 * 4)[lVar18];
                  *(ulong *)(auStack136 + lVar18 * 8) = uVar15;
                  lVar18 = lVar18 + 1;
                  uVar12 = uVar12 | uVar15;
                } while (lVar18 != 4);
                if (uVar12 != 0) {
                  uVar15 = 0;
                  uVar12 = 0;
                  lVar18 = 0;
                  do {
                    uVar14 = *(ulong *)(&uStack168 + lVar18 * 2);
                    uVar4 = (puVar16 + (long)puVar19 * 4)[lVar18];
                    uVar17 = ~uVar14 & uVar4;
                    uVar14 = ~uVar4 & uVar14;
                    *(ulong *)(&uStack104 + lVar18 * 8) = uVar17;
                    uVar12 = uVar12 | uVar17;
                    *(ulong *)(&uStack168 + lVar18 * 2) = uVar14;
                    lVar18 = lVar18 + 1;
                    uVar15 = uVar15 | uVar14;
                  } while (lVar18 != 4);
                  lVar18 = lVar9 + (long)puVar19 * 0x18;
                  if (uVar12 != 0) {
                    puVar22 = puVar16 + (long)unaff_RBP * 4;
                    *(uint *)puVar22 =
                         CONCAT22(uStack104._2_2_,CONCAT11(uStack104._1_1_,(undefined)uStack104));
                    *(undefined4 *)((long)puVar22 + 4) = uStack104._4_4_;
                    *(undefined4 *)(puVar22 + 1) = uStack96;
                    *(undefined4 *)((long)puVar22 + 0xc) = uStack92;
                    *(undefined4 *)(puVar22 + 2) = uStack88;
                    *(undefined4 *)((long)puVar22 + 0x14) = uStack84;
                    *(undefined4 *)(puVar22 + 3) = uStack80;
                    *(undefined4 *)((long)puVar22 + 0x1c) = uStack76;
                    *(int *)(puVar16 + (long)puVar19 * 4) = SUB164(auStack136,0);
                    *(undefined4 *)((long)puVar16 + lVar10 + 4) = SUB164(auStack136 >> 0x20,0);
                    *(int *)(puVar16 + (long)puVar19 * 4 + 1) = SUB164(auStack136 >> 0x40,0);
                    *(undefined4 *)((long)puVar16 + lVar10 + 0xc) = SUB164(auStack136 >> 0x60,0);
                    *(undefined4 *)(lVar9 + 0x1810 + lVar10) = SUB164(auStack120,0);
                    *(undefined4 *)((long)puVar16 + lVar10 + 0x14) = SUB164(auStack120 >> 0x20,0);
                    *(int *)(puVar16 + (long)puVar19 * 4 + 3) = SUB164(auStack120 >> 0x40,0);
                    *(undefined4 *)((long)puVar16 + lVar10 + 0x1c) = SUB164(auStack120 >> 0x60,0);
                    iVar8 = re_node_set_init_copy
                                      (SUB168(auStack120,0),lVar9 + (long)unaff_RBP * 0x18,lVar18);
                    if (iVar8 != 0) goto code_r0x0010a5e0;
                    unaff_RBP = (undefined8 *)((long)unaff_RBP + 1);
                  }
                  cVar6 = re_node_set_insert(lVar18,*(undefined8 *)
                                                     (*(long *)(param_2 + 0x18) + lStack296 * 8),
                                             lVar18);
                  if (cVar6 == '\0') goto code_r0x0010a5e0;
                  if (uVar15 == 0) break;
                }
              }
              puVar19 = (undefined8 *)((long)puVar19 + 1);
            } while ((long)puVar19 < (long)unaff_RBP);
          }
          puVar20 = unaff_RBP;
          if (unaff_RBP != puVar19) goto code_r0x00109faf;
          puVar22 = puVar16 + (long)unaff_RBP * 4;
          *(uint *)puVar22 = (uint)uStack168;
          *(undefined4 *)((long)puVar22 + 4) = uStack168._4_4_;
          *(undefined4 *)(puVar22 + 1) = uStack160;
          *(undefined4 *)((long)puVar22 + 0xc) = uStack156;
          *(undefined4 *)(puVar22 + 2) = uStack152;
          *(undefined4 *)((long)puVar22 + 0x14) = uStack148;
          *(undefined4 *)(puVar22 + 3) = uStack144;
          *(undefined4 *)((long)puVar22 + 0x1c) = uStack140;
          uVar3 = *(undefined8 *)(*(long *)(param_2 + 0x18) + lStack296 * 8);
          puVar20 = (undefined8 *)(lVar9 + (long)unaff_RBP * 0x18);
          *puVar20 = 1;
          puVar20[1] = 1;
          puVar19 = (undefined8 *)func_0x00101ac0(CONCAT44(uStack148,uStack152),8);
          *(undefined8 **)(puVar20 + 2) = puVar19;
          if (puVar19 == (undefined8 *)0x0) {
            puVar20[1] = 0;
            *puVar20 = 0;
            if (unaff_RBP == (undefined8 *)0x0) {
              func_0x00101880(lVar9);
            }
            else {
code_r0x0010a5e0:
              puVar20 = (undefined8 *)(lVar9 + 0x10);
              unaff_RBP = puVar20 + (long)unaff_RBP * 3;
              do {
                uVar3 = *puVar20;
                puVar20 = puVar20 + 3;
                func_0x00101880(uVar3);
              } while (unaff_RBP != puVar20);
              func_0x00101880(lVar9);
            }
            goto code_r0x0010a2c0;
          }
          *puVar19 = uVar3;
          unaff_RBP = (undefined8 *)((long)unaff_RBP + 1);
        }
        else {
          if ((uVar7 & 0x20) != 0) {
            uVar2 = (uint)uStack168 & 0x400;
            uStack168._0_4_ = 0;
            uStack168._4_4_ = 0;
            uStack160 = 0;
            uStack156 = 0;
            uStack152 = 0;
            uStack148 = 0;
            uStack144 = 0;
            uStack140 = 0;
            if (uVar2 == 0) goto code_r0x00109faf;
            uStack168._0_4_ = 0x400;
            uStack168._4_4_ = 0;
          }
          if ((uVar7 & 0x80) == 0) {
            if ((uVar7 & 4) != 0) {
              if (bVar1 == 1) {
                if ((*(byte *)((long)plVar24 + 10) & 0x40) == 0) goto code_r0x0010a5c4;
                iVar8 = *(int *)((long)param_1 + 0xb4);
              }
              else {
                iVar8 = *(int *)((long)param_1 + 0xb4);
              }
              if (iVar8 < 2) {
                uVar12 = 0;
                lVar10 = 0;
                do {
                  uVar15 = *(ulong *)(&uStack168 + lVar10 * 2) & param_1[lVar10 + 0x17];
                  *(ulong *)(&uStack168 + lVar10 * 2) = uVar15;
                  lVar10 = lVar10 + 1;
                  uVar12 = uVar12 | uVar15;
                } while (lVar10 != 4);
              }
              else {
                lVar10 = param_1[0xf];
                uVar12 = 0;
                lVar18 = 0;
                do {
                  uVar15 = (~*(ulong *)(lVar10 + lVar18 * 8) | param_1[lVar18 + 0x17]) &
                           *(ulong *)(&uStack168 + lVar18 * 2);
                  *(ulong *)(&uStack168 + lVar18 * 2) = uVar15;
                  lVar18 = lVar18 + 1;
                  uVar12 = uVar12 | uVar15;
                } while (lVar18 != 4);
              }
              if (uVar12 == 0) goto code_r0x00109faf;
            }
            if ((uVar7 & 8) != 0) {
              if (bVar1 == 1) {
                if ((*(byte *)((long)plVar24 + 10) & 0x40) != 0) goto code_r0x0010a5c4;
                iVar8 = *(int *)((long)param_1 + 0xb4);
              }
              else {
                iVar8 = *(int *)((long)param_1 + 0xb4);
              }
              if (iVar8 < 2) {
                uVar12 = 0;
                lVar10 = 0;
                do {
                  uVar15 = ~param_1[lVar10 + 0x17] & *(ulong *)(&uStack168 + lVar10 * 2);
                  *(ulong *)(&uStack168 + lVar10 * 2) = uVar15;
                  lVar10 = lVar10 + 1;
                  uVar12 = uVar12 | uVar15;
                } while (lVar10 != 4);
              }
              else {
                lVar10 = param_1[0xf];
                uVar12 = 0;
                lVar18 = 0;
                do {
                  uVar15 = ~(param_1[lVar18 + 0x17] & *(ulong *)(lVar10 + lVar18 * 8)) &
                           *(ulong *)(&uStack168 + lVar18 * 2);
                  *(ulong *)(&uStack168 + lVar18 * 2) = uVar15;
                  lVar18 = lVar18 + 1;
                  uVar12 = uVar12 | uVar15;
                } while (lVar18 != 4);
              }
              if (uVar12 == 0) goto code_r0x00109faf;
            }
            goto code_r0x0010a3e0;
          }
        }
code_r0x0010a5c4:
        uStack168._0_4_ = 0;
        uStack168._4_4_ = 0;
        uStack160 = 0;
        uStack156 = 0;
        uStack152 = 0;
        uStack148 = 0;
        uStack144 = 0;
        uStack140 = 0;
        puVar20 = unaff_RBP;
      }
      else {
        if (bVar1 == 3) {
          lVar10 = *plVar24;
          lVar18 = 0;
          do {
            *(ulong *)((long)&uStack168 + lVar18) =
                 *(ulong *)((long)&uStack168 + lVar18) | *(ulong *)(lVar10 + lVar18);
            lVar18 = lVar18 + 8;
          } while (lVar18 != 0x20);
          goto code_r0x0010a316;
        }
        if (bVar1 == 5) {
          if (*(int *)((long)param_1 + 0xb4) < 2) {
            uStack168._0_4_ = 0xffffffff;
            uStack168._4_4_ = 0xffffffff;
            uStack160 = 0xffffffff;
            uStack156 = 0xffffffff;
            uStack152 = 0xffffffff;
            uStack148 = 0xffffffff;
            uStack144 = 0xffffffff;
            uStack140 = 0xffffffff;
          }
          else {
            lVar10 = param_1[0xf];
            lVar18 = 0;
            do {
              *(ulong *)((long)&uStack168 + lVar18) =
                   *(ulong *)((long)&uStack168 + lVar18) | *(ulong *)(lVar10 + lVar18);
              lVar18 = lVar18 + 8;
            } while (lVar18 != 0x20);
          }
code_r0x0010a656:
          if ((param_1[0x1b] & 0x40U) == 0) {
            uVar12 = CONCAT44(uStack168._4_4_,(uint)uStack168) & 0xfffffffffffffbff;
            uStack168._0_4_ = (uint)uVar12;
            uStack168._4_4_ = (undefined4)(uVar12 >> 0x20);
          }
          if ((param_1[0x1b] & 0x80U) != 0) {
            uVar12 = CONCAT44(uStack168._4_4_,(uint)uStack168) & 0xfffffffffffffffe;
            uStack168._0_4_ = (uint)uVar12;
            uStack168._4_4_ = (undefined4)(uVar12 >> 0x20);
          }
          goto code_r0x0010a316;
        }
        if (bVar1 == 7) {
          uStack168._0_4_ = 0xffffffff;
          uStack168._4_4_ = 0xffffffff;
          uStack160 = 0xffffffff;
          uStack156 = 0xffffffff;
          goto code_r0x0010a656;
        }
      }
code_r0x00109faf:
      lStack296 = lStack296 + 1;
      unaff_RBP = puVar20;
    } while (lStack296 < *(long *)(param_2 + 0x10));
    if ((long)puVar20 < 1) goto code_r0x0010aa29;
    lStack200 = (long)puVar20 + 1;
    uStack192 = 0;
    lVar18 = lStack200 * 8;
    lVar10 = func_0x00101ac0(lVar18);
    lStack184 = lVar10;
    if (((lVar10 != 0) && (iStack204 = 0, (long)puVar20 < 0xaaaaaaaaaaaa856)) &&
       (lVar11 = func_0x00101ac0((long)puVar20 * 0x18), lVar11 != 0)) {
      lVar18 = lVar18 + -8;
      bVar5 = false;
      lVar10 = lVar11 + lVar18;
      lVar18 = lVar18 + lVar10;
      uStack104._0_1_ = 0;
      uStack104._1_1_ = 0;
      uStack104._2_2_ = 0;
      uStack104._4_4_ = 0;
      uStack96 = 0;
      uStack92 = 0;
      puVar19 = (undefined8 *)0x0;
      plVar24 = (long *)(lVar9 + 8);
      uStack88 = 0;
      uStack84 = 0;
      uStack80 = 0;
      uStack76 = 0;
      puVar22 = puVar16;
      do {
        uStack192 = 0;
        if (0 < *plVar24) {
          lVar25 = 0;
          do {
            lVar23 = *(long *)(param_1[3] + *(long *)(plVar24[1] + lVar25 * 8) * 8);
            if ((lVar23 != -1) &&
               (iStack204 = re_node_set_merge(&lStack200,param_1[6] + lVar23 * 0x18,lVar23 * 3),
               iStack204 != 0)) goto code_r0x0010a7ed;
            lVar25 = lVar25 + 1;
          } while (*plVar24 != lVar25 && lVar25 <= *plVar24);
        }
        lVar25 = re_acquire_state_context(&iStack204,param_1,&lStack200);
        *(long *)(lVar11 + (long)puVar19 * 8) = lVar25;
        if ((lVar25 == 0) && (iStack204 != 0)) goto code_r0x0010a7ed;
        if (*(char *)(lVar25 + 0x68) < '\0') {
          lVar25 = re_acquire_state_context(&iStack204,param_1,&lStack200,1);
          *(long *)(lVar10 + (long)puVar19 * 8) = lVar25;
          if ((lVar25 == 0) && (iStack204 != 0)) goto code_r0x0010a7ed;
          if ((lVar25 != *(long *)(lVar11 + (long)puVar19 * 8)) &&
             (1 < *(int *)((long)param_1 + 0xb4))) {
            bVar5 = true;
          }
          lVar25 = re_acquire_state_context(&iStack204,param_1,&lStack200,2);
          *(long *)(lVar18 + (long)puVar19 * 8) = lVar25;
          if ((lVar25 == 0) && (iStack204 != 0)) goto code_r0x0010a7ed;
        }
        else {
          *(long *)(lVar10 + (long)puVar19 * 8) = lVar25;
          *(undefined8 *)(lVar18 + (long)puVar19 * 8) = *(undefined8 *)(lVar11 + (long)puVar19 * 8);
        }
        lVar25 = 0;
        do {
          *(ulong *)(&uStack104 + lVar25) =
               *(ulong *)(&uStack104 + lVar25) | *(ulong *)((long)puVar22 + lVar25);
          lVar25 = lVar25 + 8;
        } while (lVar25 != 0x20);
        puVar19 = (undefined8 *)((long)puVar19 + 1);
        plVar24 = plVar24 + 3;
        puVar22 = puVar22 + 4;
      } while (puVar19 != puVar20);
      if (bVar5) {
        puVar19 = (undefined8 *)func_0x00101a70(8,0x200);
        *(undefined8 **)(param_2 + 0x60) = puVar19;
        if (puVar19 != (undefined8 *)0x0) {
          lVar25 = 0;
          puVar13 = puVar19;
          do {
            uVar12 = *(ulong *)(&uStack104 + lVar25);
            if (uVar12 != 0) {
              uVar15 = 1;
              puVar21 = puVar13;
              do {
                if ((uVar12 & 1) != 0) {
                  if ((*(ulong *)(lVar9 + 0x1800 + lVar25) & uVar15) == 0) {
                    puVar22 = (ulong *)(lVar9 + 0x1820 + lVar25);
                    lVar23 = 0;
                    do {
                      uVar14 = *puVar22;
                      lVar23 = lVar23 + 1;
                      puVar22 = puVar22 + 4;
                    } while ((uVar14 & uVar15) == 0);
                  }
                  else {
                    lVar23 = 0;
                  }
                  *puVar21 = *(undefined8 *)(lVar11 + lVar23 * 8);
                  puVar21[0x100] = *(undefined8 *)(lVar10 + lVar23 * 8);
                }
                uVar15 = uVar15 * 2;
                puVar21 = puVar21 + 1;
                uVar12 = uVar12 >> 1;
              } while (uVar12 != 0);
            }
            lVar25 = lVar25 + 8;
            puVar13 = puVar13 + 0x40;
          } while (lVar25 != 0x20);
          goto code_r0x0010a20e;
        }
      }
      else {
        puVar19 = (undefined8 *)func_0x00101a70(8,0x100);
        *(undefined8 **)(param_2 + 0x58) = puVar19;
        if (puVar19 != (undefined8 *)0x0) {
          lVar25 = 0;
          do {
            uVar12 = *(ulong *)(&uStack104 + lVar25);
            if (uVar12 != 0) {
              uVar15 = 1;
              puVar13 = puVar19 + lVar25 * 8;
              do {
                if ((uVar12 & 1) != 0) {
                  if ((*(ulong *)(lVar9 + 0x1800 + lVar25) & uVar15) == 0) {
                    puVar22 = (ulong *)(lVar9 + 0x1820 + lVar25);
                    lVar23 = 0;
                    do {
                      uVar14 = *puVar22;
                      lVar23 = lVar23 + 1;
                      puVar22 = puVar22 + 4;
                    } while ((uVar14 & uVar15) == 0);
                    lVar23 = lVar23 * 8;
                  }
                  else {
                    lVar23 = 0;
                  }
                  if ((*(ulong *)((long)param_1 + lVar25 + 0xb8) & uVar15) == 0) {
                    *puVar13 = *(undefined8 *)(lVar11 + lVar23);
                  }
                  else {
                    *puVar13 = *(undefined8 *)(lVar10 + lVar23);
                  }
                }
                uVar15 = uVar15 * 2;
                puVar13 = puVar13 + 1;
                uVar12 = uVar12 >> 1;
              } while (uVar12 != 0);
            }
            lVar25 = lVar25 + 8;
          } while (lVar25 != 0x20);
code_r0x0010a20e:
          if ((uStack104._1_1_ & 4) != 0) {
            puVar13 = (undefined8 *)0x0;
            do {
              if ((*puVar16 & 0x400) != 0) {
                uVar3 = *(undefined8 *)(lVar18 + (long)puVar13 * 8);
                puVar19[10] = uVar3;
                if (bVar5) {
                  puVar19[0x10a] = uVar3;
                }
                break;
              }
              puVar13 = (undefined8 *)((long)puVar13 + 1);
              puVar16 = puVar16 + 4;
            } while (puVar13 != puVar20);
          }
          func_0x00101880(lVar11);
          func_0x00101880(lStack184);
          unaff_RBP = (undefined8 *)(lVar9 + 0x10);
          puVar20 = unaff_RBP + (long)puVar20 * 3;
          do {
            uVar3 = *unaff_RBP;
            unaff_RBP = unaff_RBP + 3;
            func_0x00101880(uVar3);
          } while (puVar20 != unaff_RBP);
          func_0x00101880(lVar9);
          uVar12 = 1;
          goto code_r0x0010a2c2;
        }
      }
code_r0x0010a7ed:
      func_0x00101880(lVar11);
      lVar10 = lStack184;
    }
    func_0x00101880(lVar10);
    puVar19 = (undefined8 *)(lVar9 + 0x10);
    unaff_RBP = puVar19 + (long)puVar20 * 3;
    do {
      uVar3 = *puVar19;
      puVar19 = puVar19 + 3;
      func_0x00101880(uVar3);
    } while (unaff_RBP != puVar19);
    func_0x00101880(lVar9);
  }
code_r0x0010a2c0:
  do {
    uVar12 = 0;
code_r0x0010a2c2:
    while( true ) {
      if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
        return uVar12;
      }
      func_0x00101990();
code_r0x0010aa29:
      func_0x00101880(lVar9);
      if (unaff_RBP != (undefined8 *)0x0) break;
code_r0x0010a9b4:
      uVar12 = func_0x00101a70(8,0x100);
      *(ulong *)(param_2 + 0x58) = uVar12;
      uVar12 = uVar12 & 0xffffffffffffff00 | (ulong)(uVar12 != 0);
    }
  } while( true );
}

