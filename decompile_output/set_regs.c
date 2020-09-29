
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
code_r0x0010c60d:
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
code_r0x0010c667:
      *(undefined8 *)(puVar16 + -8) = 0x10c67d;
      pppppppplVar17 = param_4;
      func_0x00101a90(pppppppplStack200,param_4,pppppppplStack192);
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
            *(undefined8 *)(puVar16 + -8) = 0x10cc89;
            func_0x00101880(apppppppplStack104[0]);
            pppppppplVar19 = uStack144;
            if (cStack209 != '\0') {
              *(undefined8 *)(puVar16 + -8) = 0x10cd78;
              func_0x00101880(pppppppplStack200);
              pppppppplVar19 = uStack144;
            }
            pppppppplVar14 = pppppppplVar13;
            uStack144 = pppppppplVar19;
            if (pppppppplVar19 != (long ********)0x0) {
              *(undefined8 *)(puVar16 + -8) = 0x10cca7;
              free_fail_stack_return_part_24();
            }
code_r0x0010cca7:
            uVar8 = 0;
            goto code_r0x0010cca9;
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
                *(undefined8 *)(puVar16 + -8) = 0x10cc68;
                pppppppplVar17 = param_4;
                func_0x00101a90(pppppppplStack200,param_4,pppppppplStack192);
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
                  *(undefined8 *)(puVar16 + -8) = 0x10cceb;
                  pppppppplVar17 = pppppppplStack200;
                  func_0x00101a90(param_4,pppppppplStack200,pppppppplStack192);
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
              *(undefined8 *)(puVar16 + -8) = 0x10cde5;
              pppppppplVar19 = apppppppplStack104[0];
              func_0x00101880();
              if (cStack209 == '\0') goto code_r0x0010cca7;
              *(undefined8 *)(puVar16 + -8) = 0x10cdfe;
              pppppppplVar19 = pppppppplStack200;
              func_0x00101880();
              uVar8 = 0;
              goto code_r0x0010cca9;
            }
            pppppppplVar10 = pppppppplStack160;
            if (pppppppplStack160 == (long ********)0x0) {
code_r0x0010cada:
              *(undefined8 *)(puVar16 + -8) = 0x10cae3;
              func_0x00101880(apppppppplStack104[0]);
              if (cStack209 != '\0') {
                *(undefined8 *)(puVar16 + -8) = 0x10ce70;
                func_0x00101880(pppppppplStack200);
              }
              *(undefined8 *)(puVar16 + -8) = 0x10cafc;
              pppppppplVar19 = uStack144;
              free_fail_stack_return_part_24();
              uVar8 = 0;
              goto code_r0x0010cca9;
            }
            pppppppplVar13 = (long ********)0x0;
            pppppppplVar19 = param_4;
            while (((long)*pppppppplVar19 < 0 ||
                   (pppppppplVar19[1] != (long *******)0xffffffffffffffff))) {
              pppppppplVar13 = (long ********)((long)pppppppplVar13 + 1);
              pppppppplVar19 = pppppppplVar19 + 2;
              if (pppppppplStack160 == pppppppplVar13) goto code_r0x0010cada;
            }
            *(undefined8 *)(puVar16 + -8) = 0x10cb48;
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
              if (*(byte *)(pppppppplVar17 + 1) != 4) goto code_r0x0010c6fd;
              ppppppplVar7 = (param_4 + ((long)*pppppppplVar17 + 1) * 2)[1];
              ppppppplVar23 = param_4[((long)*pppppppplVar17 + 1) * 2];
              pppppppplVar10 = (long ********)((long)ppppppplVar7 - (long)ppppppplVar23);
              if (uStack144 == (long ********)0x0) {
                if (pppppppplVar10 == (long ********)0x0) goto code_r0x0010cbc0;
              }
              else {
                if ((ppppppplVar23 == (long *******)0xffffffffffffffff) ||
                   (ppppppplVar7 == (long *******)0xffffffffffffffff)) goto code_r0x0010cb76;
                if (pppppppplVar10 == (long ********)0x0) {
code_r0x0010cbc0:
                  pppppppplStack168 = pppppppplVar21;
                  *(undefined8 *)(puVar16 + -8) = 0x10cbd6;
                  pppppppplVar17 = pppppppplVar13;
                  cVar4 = re_node_set_insert(pppppppplStack176);
                  if (cVar4 != '\0') {
                    pppppppplStack224 = pppppppplStack128;
                    pppppppplVar14 = (long ********)*unaff_R14[5][(long)pppppppplVar13 * 3 + 2];
                    ppppplVar3 = param_2[0x17][(long)pppppppplStack128][2];
                    pppppppplVar17 = (long ********)(param_2[0x17][(long)pppppppplStack128] + 3);
                    *(undefined8 *)(puVar16 + -8) = 0x10cc18;
                    pppppppplVar10 = pppppppplStack128;
                    lVar6 = re_node_set_contains_isra_3(ppppplVar3,pppppppplVar17,pppppppplVar14);
                    if (lVar6 != 0) goto code_r0x0010c77c;
                    pppppppplVar17 = (long ********)((long)*unaff_R14 + (long)pppppppplStack168);
                    pppppppplVar10 = pppppppplStack224;
                    goto code_r0x0010c6fd;
                  }
                  goto code_r0x0010cd08;
                }
                ppppppplVar7 = param_2[1];
                unaff_R15 = pppppppplVar19;
                if ((long)((long)param_2[6] - (long)pppppppplStack128) < (long)pppppppplVar10)
                goto code_r0x0010cb76;
                pppppppplVar17 = (long ********)((long)ppppppplVar7 + (long)pppppppplStack128);
                pppppppplStack168 = pppppppplVar10;
                *(undefined8 *)(puVar16 + -8) = 0x10c9a6;
                iVar5 = func_0x00101a40((long)ppppppplVar23 + (long)ppppppplVar7,pppppppplVar17,
                                        pppppppplVar10);
                pppppppplVar10 = pppppppplStack168;
                if (iVar5 != 0) goto code_r0x0010cb76;
              }
code_r0x0010c9b5:
              pppppppplStack128 = (long ********)((long)pppppppplVar19 + (long)pppppppplVar10);
              pppppppplVar14 = (long ********)unaff_R14[3][(long)pppppppplVar13];
              pppppppplVar13 = pppppppplVar19;
            }
            else {
              pppppppplVar17 = unaff_R14 + 0x1b;
              pppppppplStack168 = pppppppplVar21;
              *(undefined8 *)(puVar16 + -8) = 0x10c90d;
              param_5 = pppppppplStack128;
              iVar5 = check_node_accept_bytes_isra_31
                                (ppppppplVar7,pppppppplVar17,pppppppplVar13,param_2);
              pppppppplVar10 = (long ********)(long)iVar5;
              pppppppplVar19 = pppppppplStack128;
              if (pppppppplVar10 != (long ********)0x0) goto code_r0x0010c9b5;
              pppppppplVar17 = (long ********)((long)*unaff_R14 + (long)pppppppplStack168);
              pppppppplVar10 = pppppppplStack128;
code_r0x0010c6fd:
              pppppppplStack168 = pppppppplVar10;
              *(undefined8 *)(puVar16 + -8) = 0x10c70f;
              cVar4 = check_node_accept(param_2,pppppppplVar17,pppppppplVar10);
              pppppppplVar10 = pppppppplStack168;
              if (cVar4 == '\0') goto code_r0x0010cb68;
              pppppppplStack128 = (long ********)((long)pppppppplStack168 + 1);
              pppppppplVar14 = (long ********)unaff_R14[3][(long)pppppppplVar13];
            }
            if (uStack144 != (long ********)0x0) {
              unaff_R15 = pppppppplVar13;
              if (((long)param_2[0x15] < (long)pppppppplStack128) ||
                 (pppppplVar2 = param_2[0x17][(long)pppppppplStack128],
                 pppppplVar2 == (long ******)0x0)) goto code_r0x0010cb76;
              ppppplVar3 = pppppplVar2[2];
              pppppppplVar17 = (long ********)(pppppplVar2 + 3);
              *(undefined8 *)(puVar16 + -8) = 0x10c76b;
              lVar6 = re_node_set_contains_isra_3(ppppplVar3,pppppppplVar17,pppppppplVar14);
              if (lVar6 == 0) goto code_r0x0010cb76;
            }
            uStack112 = 0;
          }
          else {
            pppppppplStack168 = (long ********)param_2[0x17][(long)pppppppplStack128];
            unaff_R15 = (long ********)(unaff_R14[5] + (long)pppppppplVar13 * 3);
            *(undefined8 *)(puVar16 + -8) = 0x10c822;
            cVar4 = re_node_set_insert(pppppppplStack176);
            pppppppplVar17 = pppppppplVar13;
            if (cVar4 == '\0') goto code_r0x0010cd08;
            ppppppplVar7 = unaff_R15[1];
            if ((long)ppppppplVar7 < 1) goto code_r0x0010cb68;
            pppppppplVar13 = (long ********)unaff_R15[2];
            ppppppplVar23 = pppppppplStack168[2];
            pppppppplVar24 = pppppppplStack168 + 3;
            ppppppplVar22 = (long *******)0x0;
            pppppppplStack168 = param_2;
            pppppppplVar19 = (long ********)0xffffffffffffffff;
            do {
              unaff_R14 = (long ********)pppppppplVar13[(long)ppppppplVar22];
              *(undefined8 *)(puVar16 + -8) = 0x10c872;
              pppppppplVar17 = pppppppplVar24;
              lVar6 = re_node_set_contains_isra_3(ppppppplVar23,pppppppplVar24,unaff_R14);
              param_2 = pppppppplStack168;
              pppppppplVar14 = pppppppplVar19;
              if ((lVar6 != 0) &&
                 (pppppppplVar14 = unaff_R14, pppppppplVar19 != (long ********)0xffffffffffffffff))
              {
                *(undefined8 *)(puVar16 + -8) = 0x10c9ed;
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
                  *(undefined8 *)(puVar16 + -8) = 0x10cdbc;
                  ppppppplVar7 = (long *******)func_0x00101b30(ppppppplVar7);
                  if (ppppppplVar7 == (long *******)0x0) {
                    *(undefined8 *)(puVar16 + -8) = 0x10ce0e;
                    func_0x00101880(apppppppplStack104[0]);
                    if (cStack209 != '\0') goto code_r0x0010ce1b;
                    goto code_r0x0010ca88;
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
                *(undefined8 *)(puVar16 + -8) = 0x10ca43;
                pppppppplVar10 = uStack144;
                ppppppplVar7 = (long *******)func_0x00101ac0(pppppppplStack192);
                pppppppplVar13[2] = ppppppplVar7;
                if (ppppppplVar7 != (long *******)0x0) {
                  *(undefined8 *)(puVar16 + -8) = 0x10ca5a;
                  func_0x00101a90(ppppppplVar7,param_4,pppppppplVar24);
                  *(undefined8 *)(puVar16 + -8) = 0x10ca6a;
                  pppppppplVar17 = pppppppplStack176;
                  iVar5 = re_node_set_init_copy(pppppppplVar13 + 3);
                  if (iVar5 == 0) break;
                }
                *(undefined8 *)(puVar16 + -8) = 0x10ca7b;
                func_0x00101880(apppppppplStack104[0]);
                unaff_R14 = pppppppplVar24;
                if (cStack209 == '\0') goto code_r0x0010ca88;
                goto code_r0x0010ce1b;
              }
              ppppppplVar22 = (long *******)((long)ppppppplVar22 + 1);
              pppppppplVar19 = pppppppplVar14;
            } while (ppppppplVar7 != ppppppplVar22);
          }
code_r0x0010c77c:
          unaff_R14 = pppppppplVar24;
        } while (-1 < (long)pppppppplVar14);
        unaff_R15 = pppppppplVar13;
        if (pppppppplVar14 == (long ********)0xfffffffffffffffe) {
code_r0x0010cd08:
          pppppppplVar13 = unaff_R15;
          *(undefined8 *)(puVar16 + -8) = 0x10cd11;
          pppppppplVar19 = apppppppplStack104[0];
          func_0x00101880();
          if (cStack209 != '\0') {
code_r0x0010ce1b:
            *(undefined8 *)(puVar16 + -8) = 0x10ce27;
            pppppppplVar19 = pppppppplStack200;
            func_0x00101880();
          }
          unaff_R15 = pppppppplVar13;
          if (uStack144 == (long ********)0x0) goto code_r0x0010cd2c;
code_r0x0010ca88:
          *(undefined8 *)(puVar16 + -8) = 0x10ca94;
          pppppppplVar19 = uStack144;
          free_fail_stack_return_part_24();
          uVar8 = 0xc;
          pppppppplVar14 = pppppppplVar13;
          goto code_r0x0010cca9;
        }
code_r0x0010cb68:
        if (uStack144 == (long ********)0x0) goto code_r0x0010ce2c;
code_r0x0010cb76:
        pppppppplVar17 = uStack144 + 2;
        *(undefined8 *)(puVar16 + -8) = 0x10cb9b;
        param_5 = param_4;
        pppppppplVar14 =
             (long ********)
             pop_fail_stack_isra_25
                       (uStack144,pppppppplVar17,&pppppppplStack128,pppppppplStack160,param_4,
                        pppppppplStack176);
      } while( true );
    }
    pppppppplStack200 = (long ********)func_0x00101ac0(0,pppppppplStack192);
    cStack209 = '\x01';
    puVar16 = auStack232;
    if (pppppppplStack200 != (long ********)0x0) goto code_r0x0010c667;
    puVar16 = auStack232;
    pppppppplVar19 = uStack144;
    if (uStack144 != (long ********)0x0) {
      free_fail_stack_return_part_24();
      puVar16 = auStack232;
    }
  }
  else {
    pppppppplVar19 = (long ********)0x60;
    lStack72 = func_0x00101ac0();
    pppppppplVar10 = &ppppppplStack88;
    uStack144 = pppppppplVar10;
    puVar16 = auStack232;
    if (lStack72 != 0) goto code_r0x0010c60d;
  }
code_r0x0010cd2c:
  uVar8 = 0xc;
  pppppppplVar14 = unaff_R15;
  goto code_r0x0010cca9;
code_r0x0010ce2c:
  *(undefined8 *)(puVar16 + -8) = 0x10ce35;
  pppppppplVar19 = apppppppplStack104[0];
  func_0x00101880();
  uVar8 = 1;
  pppppppplVar14 = unaff_R15;
  if (cStack209 != '\0') {
    uStack144 = (long ********)CONCAT44(uStack144._4_4_,1);
    *(undefined8 *)(puVar16 + -8) = 0x10ce59;
    pppppppplVar19 = pppppppplStack200;
    func_0x00101880();
    uVar8 = (ulong)uStack144 & 0xffffffff;
  }
code_r0x0010cca9:
  uVar15 = uStack64 ^ *(ulong *)(in_FS_OFFSET + 0x28);
  if (uVar15 == 0) {
    return uVar8;
  }
  *(undefined8 *)(puVar16 + -8) = 0x10ce7a;
  func_0x00101990();
  *(long *********)(puVar16 + -8) = pppppppplVar14;
  *(long *********)(puVar16 + -0x10) = unaff_R14;
  *(long *********)(puVar16 + -0x18) = param_4;
  *(long *********)(puVar16 + -0x20) = param_2;
  *(undefined **)(puVar16 + -0x28) = &stack0xfffffffffffffff8;
  *(ulong *)(puVar16 + -0x30) = uVar15;
  *(undefined8 *)(puVar16 + -0x58) = 8;
  *(undefined8 *)(puVar16 + -0x60) = 0x10ceb5;
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
    *(undefined8 *)(puVar16 + -0x50) = 0x10cfa2;
    ppppppplVar7 = (long *******)func_0x00101b30(ppppppplVar20,(long)ppppppplVar23 * 0x50);
    uVar9 = *(undefined8 *)(puVar16 + -0x40);
    if (ppppppplVar7 == (long *******)0x0) {
      ppppppplVar7 = pppppppplVar19[0x1b];
      *(undefined8 *)(puVar16 + -0x50) = 0x10d00c;
      func_0x00101880(ppppppplVar7);
      return 0xc;
    }
    ppppppplVar23 = pppppppplVar19[0x19];
    ppppppplVar11 = pppppppplVar19[0x1a];
    pppppppplVar19[0x1b] = ppppppplVar7;
    *(undefined8 *)(puVar16 + -0x40) = uVar9;
    *(undefined8 *)(puVar16 + -0x50) = 0x10cfdd;
    func_0x00101a10(ppppppplVar7 + (long)ppppppplVar23 * 5,0,(long)ppppppplVar11 * 0x28);
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
       ((long)pppppppplVar19[0xb] <= (long)pppppppplVar19[6])) goto code_r0x00106adf;
    *(undefined8 *)(puVar16 + -0x20) = 0x106b0a;
    uVar9 = extend_buffers(pppppppplVar19,(ulong)((int)ppppppplVar23 + 1));
    iVar5 = (int)uVar9;
  }
  else {
    *(undefined8 *)(puVar16 + -0x20) = 0x106adb;
    uVar9 = extend_buffers(pppppppplVar19,(ulong)((int)ppppppplVar23 + 1));
    iVar5 = (int)uVar9;
  }
  if (iVar5 != 0) {
    return uVar9;
  }
code_r0x00106adf:
  if ((long)ppppppplVar7 < (long)ppppppplVar23) {
    ppppppplVar22 = pppppppplVar19[0x17];
    *(undefined8 *)(puVar16 + -0x20) = 0x106b2d;
    func_0x00101a10(ppppppplVar22 + (long)ppppppplVar7 + 1,0,
                    (long)((long)ppppppplVar23 - (long)ppppppplVar7) * 8);
    pppppppplVar19[0x18] = ppppppplVar23;
  }
  return 0;
}

