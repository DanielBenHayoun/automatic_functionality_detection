
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Could not reconcile some variable overlaps */

ulong set_regs(long **param_1,long ********param_2,long ********param_3,long ********param_4,
              long ********param_5)

{
  byte bVar1;
  long ******pppppplVar2;
  long *****ppppplVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  long *******ppppppplVar7;
  ulong uVar8;
  undefined8 uVar9;
  long ********pppppppplVar10;
  long *******ppppppplVar11;
  long *plVar12;
  long ********pppppppplVar13;
  long extraout_RDX;
  long ********pppppppplVar14;
  ulong uVar15;
  undefined *puVar16;
  long ********pppppppplVar17;
  long *******ppppppplVar18;
  long ********pppppppplVar19;
  long *******ppppppplVar20;
  long ********pppppppplVar21;
  long *******ppppppplVar22;
  long *******ppppppplVar23;
  long ********unaff_R14;
  long ********pppppppplVar24;
  long ********unaff_R15;
  long in_FS_OFFSET;
  long *******appppppplStack4360 [6];
  ulong uStack4312;
  long ********apppppppplStack4304 [509];
  undefined auStack232 [8];
  long ********pppppppplStack224;
  char cStack209;
  long ********pppppppplStack208;
  long ********pppppppplStack200;
  long ********pppppppplStack192;
  long ********pppppppplStack184;
  long ********pppppppplStack176;
  long ********pppppppplStack168;
  long ********pppppppplStack160;
  long *plStack152;
  undefined8 uStack144;
  long ********pppppppplStack128;
  undefined4 uStack120;
  undefined4 uStack116;
  undefined8 uStack112;
  long ********apppppppplStack104 [2];
  long *******ppppppplStack88;
  undefined8 uStack80;
  long lStack72;
  ulong uStack64;
  
  pppppppplStack160 = param_3;
  ppppppplStack88 = (long *******)0x0;
  uStack64 = *(ulong *)(in_FS_OFFSET + 0x28);
  uStack80 = 2;
  lStack72 = 0;
  plStack152 = *param_1;
  pppppppplVar17 = param_2;
  if ((char)param_5 == '\0') {
    uStack144 = (long ********)0x0;
    pppppppplVar10 = param_4;
code_r0x0010e8bd:
    apppppppplStack104[0] = (long ********)0x0;
    pppppppplVar14 = (long ********)plStack152[0x12];
    uStack120 = 0;
    uStack116 = 0;
    uStack112 = 0;
    pppppppplStack192 = (long ********)((long)pppppppplStack160 * 0x10);
    if (pppppppplStack192 < (long ********)0xfc0) {
      cStack209 = '\0';
      pppppppplStack200 = (long ********)((long)&pppppppplStack224 + -(long)(pppppppplStack192 + 2))
      ;
      puVar16 = auStack232 + -(long)(pppppppplStack192 + 2);
code_r0x0010e917:
      *(undefined8 *)(puVar16 + -8) = 0x10e92d;
      pppppppplVar17 = param_4;
      func_0x00101d70(pppppppplStack200,param_4,pppppppplStack192);
      pppppppplStack176 = (long ********)&uStack120;
      pppppppplStack128 = (long ********)*param_4;
      pppppppplStack208 = (long ********)apppppppplStack104;
      do {
        pppppppplStack184 = (long ********)&pppppppplStack128;
        pppppppplVar13 = unaff_R15;
        do {
          pppppppplVar19 = (long ********)param_4[1];
          pppppppplVar10 = pppppppplStack128;
          if ((long)pppppppplVar19 < (long)pppppppplStack128) {
            *(undefined8 *)(puVar16 + -8) = 0x10ef39;
            func_0x00101b00(apppppppplStack104[0]);
            pppppppplVar19 = uStack144;
            if (cStack209 != '\0') {
              *(undefined8 *)(puVar16 + -8) = 0x10f028;
              func_0x00101b00(pppppppplStack200);
              pppppppplVar19 = uStack144;
            }
            pppppppplVar14 = pppppppplVar13;
            uStack144 = pppppppplVar19;
            if (pppppppplVar19 != (long ********)0x0) {
              *(undefined8 *)(puVar16 + -8) = 0x10ef57;
              free_fail_stack_return_part_24();
            }
code_r0x0010ef57:
            uVar8 = 0;
            goto code_r0x0010ef59;
          }
          pppppppplVar21 = (long ********)((long)pppppppplVar14 * 0x10);
          plVar12 = (long *)(*plStack152 + (long)pppppppplVar21);
          bVar1 = *(byte *)(plVar12 + 1);
          pppppppplVar17 = (long ********)(ulong)bVar1;
          if (bVar1 == 8) {
            lVar6 = *plVar12;
            if (lVar6 + 1 < (long)pppppppplStack160) {
              (param_4 + (lVar6 + 1) * 2)[1] = (long *******)0xffffffffffffffff;
              *(long *********)(param_4 + (lVar6 + 1) * 2) = pppppppplStack128;
              pppppppplVar19 = (long ********)param_4[1];
            }
          }
          else {
            if ((bVar1 == 9) &&
               (pppppppplVar13 = (long ********)(*plVar12 + 1), pppppppplVar17 = pppppppplVar13,
               (long)pppppppplVar13 < (long)pppppppplStack160)) {
              pppppppplVar17 = (long ********)((long)pppppppplVar13 * 0x10);
              pppppppplVar19 = param_4 + (long)pppppppplVar13 * 2;
              if ((long)*pppppppplVar19 < (long)pppppppplStack128) {
                *(long *********)(pppppppplVar19 + 1) = pppppppplStack128;
                pppppppplStack224 = pppppppplVar21;
                pppppppplStack168 = pppppppplStack128;
                *(undefined8 *)(puVar16 + -8) = 0x10ef18;
                pppppppplVar17 = param_4;
                func_0x00101d70(pppppppplStack200,param_4,pppppppplStack192);
                pppppppplVar19 = (long ********)param_4[1];
                pppppppplVar10 = pppppppplStack168;
                pppppppplVar21 = pppppppplStack224;
              }
              else {
                if (((*(byte *)((long)plVar12 + 10) & 8) == 0) ||
                   (pppppppplStack200[(long)pppppppplVar13 * 2] == (long *******)0xffffffffffffffff)
                   ) {
                  *(long *********)(pppppppplVar19 + 1) = pppppppplStack128;
                  pppppppplVar19 = (long ********)param_4[1];
                }
                else {
                  pppppppplStack224 = pppppppplStack128;
                  pppppppplStack168 = pppppppplVar21;
                  *(undefined8 *)(puVar16 + -8) = 0x10ef9b;
                  pppppppplVar17 = pppppppplStack200;
                  func_0x00101d70(param_4,pppppppplStack200,pppppppplStack192);
                  pppppppplVar19 = (long ********)param_4[1];
                  pppppppplVar10 = pppppppplStack224;
                  pppppppplVar21 = pppppppplStack168;
                }
              }
            }
          }
          pppppppplVar13 = pppppppplVar14;
          if ((pppppppplVar19 == pppppppplVar10) && ((long ********)param_2[0x16] == pppppppplVar14)
             ) {
            if (uStack144 == (long ********)0x0) {
              *(undefined8 *)(puVar16 + -8) = 0x10f095;
              pppppppplVar19 = apppppppplStack104[0];
              func_0x00101b00();
              if (cStack209 == '\0') goto code_r0x0010ef57;
              *(undefined8 *)(puVar16 + -8) = 0x10f0ae;
              pppppppplVar19 = pppppppplStack200;
              func_0x00101b00();
              uVar8 = 0;
              goto code_r0x0010ef59;
            }
            pppppppplVar10 = pppppppplStack160;
            if (pppppppplStack160 == (long ********)0x0) {
code_r0x0010ed8a:
              *(undefined8 *)(puVar16 + -8) = 0x10ed93;
              func_0x00101b00(apppppppplStack104[0]);
              if (cStack209 != '\0') {
                *(undefined8 *)(puVar16 + -8) = 0x10f120;
                func_0x00101b00(pppppppplStack200);
              }
              *(undefined8 *)(puVar16 + -8) = 0x10edac;
              pppppppplVar19 = uStack144;
              free_fail_stack_return_part_24();
              uVar8 = 0;
              goto code_r0x0010ef59;
            }
            pppppppplVar13 = (long ********)0x0;
            pppppppplVar19 = param_4;
            while (((long)*pppppppplVar19 < 0 ||
                   (pppppppplVar19[1] != (long *******)0xffffffffffffffff))) {
              pppppppplVar13 = (long ********)((long)pppppppplVar13 + 1);
              pppppppplVar19 = pppppppplVar19 + 2;
              if (pppppppplStack160 == pppppppplVar13) goto code_r0x0010ed8a;
            }
            *(undefined8 *)(puVar16 + -8) = 0x10edf8;
            param_5 = param_4;
            pppppppplVar13 =
                 (long ********)
                 pop_fail_stack_isra_25
                           (uStack144,uStack144 + 2,pppppppplStack184,pppppppplStack160,param_4,
                            pppppppplStack176);
            pppppppplVar21 = (long ********)((long)pppppppplVar13 << 4);
          }
          pppppppplVar19 = pppppppplStack128;
          unaff_R14 = (long ********)param_2[0x13];
          ppppppplVar7 = *unaff_R14;
          pppppppplVar17 = (long ********)((long)ppppppplVar7 + (long)pppppppplVar21);
          if ((*(byte *)(pppppppplVar17 + 1) & 8) == 0) {
            pppppppplVar24 = unaff_R14;
            unaff_R15 = pppppppplVar13;
            if ((*(byte *)((long)pppppppplVar17 + 10) & 0x10) == 0) {
              pppppppplVar10 = pppppppplStack128;
              if (*(byte *)(pppppppplVar17 + 1) != 4) goto code_r0x0010e9ad;
              ppppppplVar7 = (param_4 + ((long)*pppppppplVar17 + 1) * 2)[1];
              ppppppplVar23 = param_4[((long)*pppppppplVar17 + 1) * 2];
              pppppppplVar10 = (long ********)((long)ppppppplVar7 - (long)ppppppplVar23);
              if (uStack144 == (long ********)0x0) {
                if (pppppppplVar10 == (long ********)0x0) goto code_r0x0010ee70;
              }
              else {
                if ((ppppppplVar23 == (long *******)0xffffffffffffffff) ||
                   (ppppppplVar7 == (long *******)0xffffffffffffffff)) goto code_r0x0010ee26;
                if (pppppppplVar10 == (long ********)0x0) {
code_r0x0010ee70:
                  pppppppplStack168 = pppppppplVar21;
                  *(undefined8 *)(puVar16 + -8) = 0x10ee86;
                  pppppppplVar17 = pppppppplVar13;
                  cVar4 = re_node_set_insert(pppppppplStack176);
                  if (cVar4 != '\0') {
                    pppppppplStack224 = pppppppplStack128;
                    pppppppplVar14 = (long ********)*unaff_R14[5][(long)pppppppplVar13 * 3 + 2];
                    ppppplVar3 = param_2[0x17][(long)pppppppplStack128][2];
                    pppppppplVar17 = (long ********)(param_2[0x17][(long)pppppppplStack128] + 3);
                    *(undefined8 *)(puVar16 + -8) = 0x10eec8;
                    pppppppplVar10 = pppppppplStack128;
                    lVar6 = re_node_set_contains_isra_3(ppppplVar3,pppppppplVar17,pppppppplVar14);
                    if (lVar6 != 0) goto code_r0x0010ea2c;
                    pppppppplVar17 = (long ********)((long)*unaff_R14 + (long)pppppppplStack168);
                    pppppppplVar10 = pppppppplStack224;
                    goto code_r0x0010e9ad;
                  }
                  goto code_r0x0010efb8;
                }
                ppppppplVar7 = param_2[1];
                unaff_R15 = pppppppplVar19;
                if ((long)((long)param_2[6] - (long)pppppppplStack128) < (long)pppppppplVar10)
                goto code_r0x0010ee26;
                pppppppplVar17 = (long ********)((long)ppppppplVar7 + (long)pppppppplStack128);
                pppppppplStack168 = pppppppplVar10;
                *(undefined8 *)(puVar16 + -8) = 0x10ec56;
                iVar5 = func_0x00101d00((long)ppppppplVar23 + (long)ppppppplVar7,pppppppplVar17,
                                        pppppppplVar10);
                pppppppplVar10 = pppppppplStack168;
                if (iVar5 != 0) goto code_r0x0010ee26;
              }
code_r0x0010ec65:
              pppppppplStack128 = (long ********)((long)pppppppplVar19 + (long)pppppppplVar10);
              pppppppplVar14 = (long ********)unaff_R14[3][(long)pppppppplVar13];
              pppppppplVar13 = pppppppplVar19;
            }
            else {
              pppppppplVar17 = unaff_R14 + 0x1b;
              pppppppplStack168 = pppppppplVar21;
              *(undefined8 *)(puVar16 + -8) = 0x10ebbd;
              param_5 = pppppppplStack128;
              iVar5 = check_node_accept_bytes_isra_31
                                (ppppppplVar7,pppppppplVar17,pppppppplVar13,param_2);
              pppppppplVar10 = (long ********)(long)iVar5;
              pppppppplVar19 = pppppppplStack128;
              if (pppppppplVar10 != (long ********)0x0) goto code_r0x0010ec65;
              pppppppplVar17 = (long ********)((long)*unaff_R14 + (long)pppppppplStack168);
              pppppppplVar10 = pppppppplStack128;
code_r0x0010e9ad:
              pppppppplStack168 = pppppppplVar10;
              *(undefined8 *)(puVar16 + -8) = 0x10e9bf;
              cVar4 = check_node_accept(param_2,pppppppplVar17,pppppppplVar10);
              pppppppplVar10 = pppppppplStack168;
              if (cVar4 == '\0') goto code_r0x0010ee18;
              pppppppplStack128 = (long ********)((long)pppppppplStack168 + 1);
              pppppppplVar14 = (long ********)unaff_R14[3][(long)pppppppplVar13];
            }
            if (uStack144 != (long ********)0x0) {
              unaff_R15 = pppppppplVar13;
              if (((long)param_2[0x15] < (long)pppppppplStack128) ||
                 (pppppplVar2 = param_2[0x17][(long)pppppppplStack128],
                 pppppplVar2 == (long ******)0x0)) goto code_r0x0010ee26;
              ppppplVar3 = pppppplVar2[2];
              pppppppplVar17 = (long ********)(pppppplVar2 + 3);
              *(undefined8 *)(puVar16 + -8) = 0x10ea1b;
              lVar6 = re_node_set_contains_isra_3(ppppplVar3,pppppppplVar17,pppppppplVar14);
              if (lVar6 == 0) goto code_r0x0010ee26;
            }
            uStack112 = 0;
          }
          else {
            pppppppplStack168 = (long ********)param_2[0x17][(long)pppppppplStack128];
            unaff_R15 = (long ********)(unaff_R14[5] + (long)pppppppplVar13 * 3);
            *(undefined8 *)(puVar16 + -8) = 0x10ead2;
            cVar4 = re_node_set_insert(pppppppplStack176);
            pppppppplVar17 = pppppppplVar13;
            if (cVar4 == '\0') goto code_r0x0010efb8;
            ppppppplVar7 = unaff_R15[1];
            if ((long)ppppppplVar7 < 1) goto code_r0x0010ee18;
            pppppppplVar13 = (long ********)unaff_R15[2];
            ppppppplVar23 = pppppppplStack168[2];
            pppppppplVar24 = pppppppplStack168 + 3;
            ppppppplVar22 = (long *******)0x0;
            pppppppplStack168 = param_2;
            pppppppplVar19 = (long ********)0xffffffffffffffff;
            do {
              unaff_R14 = (long ********)pppppppplVar13[(long)ppppppplVar22];
              *(undefined8 *)(puVar16 + -8) = 0x10eb22;
              pppppppplVar17 = pppppppplVar24;
              lVar6 = re_node_set_contains_isra_3(ppppppplVar23,pppppppplVar24,unaff_R14);
              param_2 = pppppppplStack168;
              pppppppplVar14 = pppppppplVar19;
              if ((lVar6 != 0) &&
                 (pppppppplVar14 = unaff_R14, pppppppplVar19 != (long ********)0xffffffffffffffff))
              {
                *(undefined8 *)(puVar16 + -8) = 0x10ec9d;
                pppppppplVar17 = pppppppplStack208;
                lVar6 = re_node_set_contains_isra_3(uStack112,pppppppplStack208,pppppppplVar19);
                pppppppplVar24 = unaff_R14;
                if ((lVar6 != 0) ||
                   (pppppppplVar10 = uStack144, pppppppplVar14 = pppppppplVar19,
                   uStack144 == (long ********)0x0)) break;
                pppppppplVar13 = (long ********)*uStack144;
                ppppppplVar7 = (long *******)((long)pppppppplVar13 + 1);
                *uStack144 = ppppppplVar7;
                if (ppppppplVar7 == uStack144[1]) {
                  pppppppplStack168 = pppppppplStack128;
                  pppppppplVar17 = (long ********)((long)ppppppplVar7 * 0x60);
                  ppppppplVar7 = uStack144[2];
                  *(undefined8 *)(puVar16 + -8) = 0x10f06c;
                  ppppppplVar7 = (long *******)func_0x00101e00(ppppppplVar7);
                  if (ppppppplVar7 == (long *******)0x0) {
                    *(undefined8 *)(puVar16 + -8) = 0x10f0be;
                    func_0x00101b00(apppppppplStack104[0]);
                    if (cStack209 != '\0') goto code_r0x0010f0cb;
                    goto code_r0x0010ed38;
                  }
                  uStack144[1] = (long *******)((long)uStack144[1] << 1);
                  uStack144[2] = ppppppplVar7;
                  pppppppplVar10 = pppppppplStack168;
                }
                else {
                  ppppppplVar7 = uStack144[2];
                  pppppppplVar10 = pppppppplStack128;
                }
                pppppppplVar24 = pppppppplStack192;
                pppppppplVar13 = (long ********)(ppppppplVar7 + (long)pppppppplVar13 * 6);
                *(long *********)(pppppppplVar13 + 1) = unaff_R14;
                *(long *********)pppppppplVar13 = pppppppplVar10;
                *(undefined8 *)(puVar16 + -8) = 0x10ecf3;
                pppppppplVar10 = uStack144;
                ppppppplVar7 = (long *******)func_0x00101da0(pppppppplStack192);
                pppppppplVar13[2] = ppppppplVar7;
                if (ppppppplVar7 != (long *******)0x0) {
                  *(undefined8 *)(puVar16 + -8) = 0x10ed0a;
                  func_0x00101d70(ppppppplVar7,param_4,pppppppplVar24);
                  *(undefined8 *)(puVar16 + -8) = 0x10ed1a;
                  pppppppplVar17 = pppppppplStack176;
                  iVar5 = re_node_set_init_copy(pppppppplVar13 + 3);
                  if (iVar5 == 0) break;
                }
                *(undefined8 *)(puVar16 + -8) = 0x10ed2b;
                func_0x00101b00(apppppppplStack104[0]);
                unaff_R14 = pppppppplVar24;
                if (cStack209 == '\0') goto code_r0x0010ed38;
                goto code_r0x0010f0cb;
              }
              ppppppplVar22 = (long *******)((long)ppppppplVar22 + 1);
              pppppppplVar19 = pppppppplVar14;
            } while (ppppppplVar7 != ppppppplVar22);
          }
code_r0x0010ea2c:
          unaff_R14 = pppppppplVar24;
        } while (-1 < (long)pppppppplVar14);
        unaff_R15 = pppppppplVar13;
        if (pppppppplVar14 == (long ********)0xfffffffffffffffe) {
code_r0x0010efb8:
          pppppppplVar13 = unaff_R15;
          *(undefined8 *)(puVar16 + -8) = 0x10efc1;
          pppppppplVar19 = apppppppplStack104[0];
          func_0x00101b00();
          if (cStack209 != '\0') {
code_r0x0010f0cb:
            *(undefined8 *)(puVar16 + -8) = 0x10f0d7;
            pppppppplVar19 = pppppppplStack200;
            func_0x00101b00();
          }
          unaff_R15 = pppppppplVar13;
          if (uStack144 == (long ********)0x0) goto code_r0x0010efdc;
code_r0x0010ed38:
          *(undefined8 *)(puVar16 + -8) = 0x10ed44;
          pppppppplVar19 = uStack144;
          free_fail_stack_return_part_24();
          uVar8 = 0xc;
          pppppppplVar14 = pppppppplVar13;
          goto code_r0x0010ef59;
        }
code_r0x0010ee18:
        if (uStack144 == (long ********)0x0) goto code_r0x0010f0dc;
code_r0x0010ee26:
        pppppppplVar17 = uStack144 + 2;
        *(undefined8 *)(puVar16 + -8) = 0x10ee4b;
        param_5 = param_4;
        pppppppplVar14 =
             (long ********)
             pop_fail_stack_isra_25
                       (uStack144,pppppppplVar17,&pppppppplStack128,pppppppplStack160,param_4,
                        pppppppplStack176);
      } while( true );
    }
    pppppppplStack200 = (long ********)func_0x00101da0(0,pppppppplStack192);
    cStack209 = '\x01';
    puVar16 = auStack232;
    if (pppppppplStack200 != (long ********)0x0) goto code_r0x0010e917;
    puVar16 = auStack232;
    pppppppplVar19 = uStack144;
    if (uStack144 != (long ********)0x0) {
      free_fail_stack_return_part_24();
      puVar16 = auStack232;
    }
  }
  else {
    pppppppplVar19 = (long ********)0x60;
    lStack72 = func_0x00101da0();
    pppppppplVar10 = &ppppppplStack88;
    uStack144 = pppppppplVar10;
    puVar16 = auStack232;
    if (lStack72 != 0) goto code_r0x0010e8bd;
  }
code_r0x0010efdc:
  uVar8 = 0xc;
  pppppppplVar14 = unaff_R15;
  goto code_r0x0010ef59;
code_r0x0010f0dc:
  *(undefined8 *)(puVar16 + -8) = 0x10f0e5;
  pppppppplVar19 = apppppppplStack104[0];
  func_0x00101b00();
  uVar8 = 1;
  pppppppplVar14 = unaff_R15;
  if (cStack209 != '\0') {
    uStack144 = (long ********)CONCAT44(uStack144._4_4_,1);
    *(undefined8 *)(puVar16 + -8) = 0x10f109;
    pppppppplVar19 = pppppppplStack200;
    func_0x00101b00();
    uVar8 = (ulong)uStack144 & 0xffffffff;
  }
code_r0x0010ef59:
  uVar15 = uStack64 ^ *(ulong *)(in_FS_OFFSET + 0x28);
  if (uVar15 == 0) {
    return uVar8;
  }
  *(undefined8 *)(puVar16 + -8) = 0x10f12a;
  func_0x00101c20();
  *(long *********)(puVar16 + -8) = pppppppplVar14;
  *(long *********)(puVar16 + -0x10) = unaff_R14;
  *(long *********)(puVar16 + -0x18) = param_4;
  *(long *********)(puVar16 + -0x20) = param_2;
  *(undefined **)(puVar16 + -0x28) = &stack0xfffffffffffffff8;
  *(ulong *)(puVar16 + -0x30) = uVar15;
  *(undefined8 *)(puVar16 + -0x58) = 8;
  *(undefined8 *)(puVar16 + -0x60) = 0x10f165;
  uVar9 = check_arrival();
  if ((int)uVar9 != 0) {
    return uVar9;
  }
  ppppppplVar7 = pppppppplVar19[0x19];
  ppppppplVar23 = pppppppplVar19[0x1a];
  ppppppplVar22 = *(long ********)(extraout_RDX + 8);
  ppppppplVar11 = *pppppppplVar17;
  ppppppplVar20 = pppppppplVar19[0x1b];
  ppppppplVar18 = ppppppplVar22;
  if ((long)ppppppplVar23 <= (long)ppppppplVar7) {
    *(long ********)(puVar16 + -0x40) = ppppppplVar11;
    *(undefined8 *)(puVar16 + -0x50) = 0x10f252;
    ppppppplVar7 = (long *******)func_0x00101e00(ppppppplVar20,(long)ppppppplVar23 * 0x50);
    uVar9 = *(undefined8 *)(puVar16 + -0x40);
    if (ppppppplVar7 == (long *******)0x0) {
      ppppppplVar7 = pppppppplVar19[0x1b];
      *(undefined8 *)(puVar16 + -0x50) = 0x10f2bc;
      func_0x00101b00(ppppppplVar7);
      return 0xc;
    }
    ppppppplVar23 = pppppppplVar19[0x19];
    ppppppplVar11 = pppppppplVar19[0x1a];
    pppppppplVar19[0x1b] = ppppppplVar7;
    *(undefined8 *)(puVar16 + -0x40) = uVar9;
    *(undefined8 *)(puVar16 + -0x50) = 0x10f28d;
    func_0x00101cb0(ppppppplVar7 + (long)ppppppplVar23 * 5,0,(long)ppppppplVar11 * 0x28);
    pppppppplVar19[0x1a] = (long *******)((long)pppppppplVar19[0x1a] << 1);
    ppppppplVar7 = pppppppplVar19[0x19];
    ppppppplVar20 = pppppppplVar19[0x1b];
    ppppppplVar18 = *(long ********)(extraout_RDX + 8);
    ppppppplVar11 = *(long ********)(puVar16 + -0x40);
  }
  if ((0 < (long)ppppppplVar7) &&
     (param_5 == (long ********)(ppppppplVar20 + (long)ppppppplVar7 * 5 + -5)[1])) {
    *(undefined *)(ppppppplVar20 + (long)ppppppplVar7 * 5 + -5 + 4) = 1;
  }
  pppppppplVar14 = (long ********)(ppppppplVar20 + (long)ppppppplVar7 * 5);
  *(long *********)pppppppplVar14 = pppppppplVar10;
  *(long *********)(pppppppplVar14 + 1) = param_5;
  pppppppplVar14[2] = ppppppplVar11;
  *(short *)((long)pppppppplVar14 + 0x22) = -(ushort)(ppppppplVar22 == ppppppplVar11);
  pppppppplVar14[3] = ppppppplVar22;
  pppppppplVar19[0x19] = (long *******)((long)ppppppplVar7 + 1);
  *(undefined *)(pppppppplVar14 + 4) = 0;
  if ((long)*(int *)(pppppppplVar19 + 0x1c) < (long)((long)ppppppplVar22 - (long)ppppppplVar11)) {
    *(int *)(pppppppplVar19 + 0x1c) = (int)ppppppplVar22 - (int)ppppppplVar11;
  }
  ppppppplVar23 = (long *******)(((long)ppppppplVar18 + (long)param_5) - (long)*pppppppplVar17);
  *(undefined8 *)(puVar16 + -8) = *(undefined8 *)(puVar16 + -0x20);
  *(undefined8 *)(puVar16 + -0x10) = *(undefined8 *)(puVar16 + -0x28);
  *(undefined8 *)(puVar16 + -0x18) = *(undefined8 *)(puVar16 + -0x30);
  ppppppplVar7 = pppppppplVar19[0x18];
  if (((long)ppppppplVar23 < (long)pppppppplVar19[8]) ||
     ((long)pppppppplVar19[0xb] <= (long)pppppppplVar19[8])) {
    if (((long)ppppppplVar23 < (long)pppppppplVar19[6]) ||
       ((long)pppppppplVar19[0xb] <= (long)pppppppplVar19[6])) goto code_r0x00108d8f;
    *(undefined8 *)(puVar16 + -0x20) = 0x108dba;
    uVar9 = extend_buffers(pppppppplVar19,(ulong)((int)ppppppplVar23 + 1));
    iVar5 = (int)uVar9;
  }
  else {
    *(undefined8 *)(puVar16 + -0x20) = 0x108d8b;
    uVar9 = extend_buffers(pppppppplVar19,(ulong)((int)ppppppplVar23 + 1));
    iVar5 = (int)uVar9;
  }
  if (iVar5 != 0) {
    return uVar9;
  }
code_r0x00108d8f:
  if ((long)ppppppplVar7 < (long)ppppppplVar23) {
    ppppppplVar22 = pppppppplVar19[0x17];
    *(undefined8 *)(puVar16 + -0x20) = 0x108ddd;
    func_0x00101cb0(ppppppplVar22 + (long)ppppppplVar7 + 1,0,
                    (long)((long)ppppppplVar23 - (long)ppppppplVar7) * 8);
    pppppppplVar19[0x18] = ppppppplVar23;
  }
  return 0;
}

