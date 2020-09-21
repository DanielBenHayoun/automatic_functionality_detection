
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Could not reconcile some variable overlaps */

ulong check_arrival(long ********param_1,long ********param_2,long *******param_3,
                   long ********param_4,long ********param_5,long param_6,uint param_7)

{
  byte bVar1;
  long *****ppppplVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  long *******ppppppplVar6;
  long lVar7;
  long *******ppppppplVar8;
  ulong uVar9;
  undefined8 uVar10;
  long ********pppppppplVar11;
  long ********pppppppplVar12;
  long *******ppppppplVar13;
  long ********extraout_RDX;
  long ******pppppplVar14;
  long ********pppppppplVar15;
  long extraout_RDX_00;
  long ********pppppppplVar16;
  ulong uVar17;
  long ********pppppppplVar18;
  long *******ppppppplVar19;
  long ********pppppppplVar20;
  long ********pppppppplVar21;
  long *******ppppppplVar22;
  long ********pppppppplVar23;
  long *******ppppppplVar24;
  long *******ppppppplVar25;
  long ********unaff_R14;
  long ********pppppppplVar26;
  long in_FS_OFFSET;
  long *******appppppplStack4624 [6];
  ulong uStack4576;
  long *********ppppppppplStack4568;
  long ********apppppppplStack4560 [508];
  long *******ppppppplStack496;
  long ********pppppppplStack488;
  char cStack473;
  long ********pppppppplStack472;
  long ********pppppppplStack464;
  long ********pppppppplStack456;
  long ********pppppppplStack448;
  long ********pppppppplStack440;
  long ********pppppppplStack432;
  long ********pppppppplStack424;
  long *******ppppppplStack416;
  undefined8 uStack408;
  long ********pppppppplStack392;
  undefined4 uStack384;
  undefined4 uStack380;
  undefined8 uStack376;
  long ********apppppppplStack368 [2];
  long *******ppppppplStack352;
  undefined8 uStack344;
  long lStack336;
  ulong uStack328;
  ulong uStack312;
  long ********pppppppplStack304;
  long ********pppppppplStack296;
  long ********pppppppplStack288;
  long ********pppppppplStack280;
  long ********pppppppplStack272;
  long ********pppppppplStack264;
  long ********pppppppplStack256;
  long ********pppppppplStack248;
  undefined4 *puStack240;
  long lStack232;
  long ********pppppppplStack224;
  long ********pppppppplStack216;
  long ********pppppppplStack208;
  long lStack200;
  long ********pppppppplStack192;
  long ********pppppppplStack184;
  uint *puStack176;
  long ********pppppppplStack168;
  long *******ppppppplStack160;
  long ********pppppppplStack152;
  long ********pppppppplStack144;
  uint uStack128;
  uint uStack124;
  long *******ppppppplStack120;
  long lStack112;
  long ********pppppppplStack104;
  undefined4 auStack88 [2];
  undefined8 uStack80;
  undefined8 uStack72;
  ulong uStack64;
  
  pppppppplVar11 = (long ********)param_1[0x13];
  pppppppplStack296 = (long ********)param_2[1];
  uStack64 = *(ulong *)(in_FS_OFFSET + 0x28);
  uStack128 = 0;
  pppppppplStack192 = (long ********)(*pppppppplVar11)[(long)param_3 * 2];
  pppppppplStack216 = pppppppplVar11;
  lStack200 = param_6;
  pppppppplStack168 = param_2;
  pppppppplStack144 = param_5;
  if (*(int *)(param_1 + 0x1c) + param_6 < (long)pppppppplStack296) {
code_r0x0010e15c:
    ppppppplStack160 = param_1[0x17];
    pppppppplVar11 = (long ********)param_1[9];
    pppppppplStack304 = (long ********)*pppppppplStack168;
    unaff_R14 = (long ********)pppppppplStack168[2];
    *(long *********)(param_1 + 0x17) = unaff_R14;
    pppppppplStack152 = pppppppplVar11;
    if (pppppppplStack304 == (long ********)0x0) {
      pppppppplVar18 = (long ********)((long)param_4 + -1);
      *(long *********)(param_1 + 9) = param_4;
      pppppppplStack272 = (long ********)&UNK_0010e580;
      uVar4 = re_string_context_at(param_1,pppppppplVar18,(ulong)*(uint *)(param_1 + 0x14));
      pppppppplStack296 = (long ********)(ulong)uVar4;
code_r0x0010e583:
      pppppppplVar20 = (long ********)0x8;
      ppppppplStack120 = (long *******)0x1;
      lStack112 = 1;
      pppppppplStack272 = (long ********)&UNK_0010e5a5;
      pppppppplStack104 = (long ********)func_0x00101da0();
      if (pppppppplStack104 == (long ********)0x0) goto code_r0x0010e7fb;
      *pppppppplStack104 = param_3;
      pppppppplVar11 = (long ********)(ulong)param_7;
      pppppppplVar18 = &ppppppplStack120;
      uStack128 = 0;
      pppppppplStack272 = (long ********)&UNK_0010e5e8;
      uStack128 = check_arrival_expand_ecl(pppppppplStack216,pppppppplVar18,pppppppplStack192);
      pppppppplStack304 = param_4;
      if (uStack128 == 0) {
code_r0x0010e70d:
        if (lStack112 != 0) {
          param_5 = (long ********)(ulong)param_7;
          pppppppplStack272 = (long ********)&UNK_0010e733;
          pppppppplVar11 = pppppppplStack192;
          pppppppplVar18 = &ppppppplStack120;
          uStack128 = expand_bkref_cache(param_1,&ppppppplStack120,pppppppplStack304);
          if (uStack128 != 0) goto code_r0x0010e650;
        }
        pppppppplStack272 = (long ********)&UNK_0010e75a;
        pppppppplVar11 = pppppppplStack296;
        pppppppplVar18 = pppppppplStack216;
        param_4 = (long ********)
                  re_acquire_state_context(&uStack128,pppppppplStack216,&ppppppplStack120);
        if ((param_4 != (long ********)0x0) ||
           (pppppppplVar18 = (long ********)(ulong)uStack128, uStack128 == 0)) {
          *(long *********)(param_1[0x17] + (long)pppppppplStack304) = param_4;
          goto code_r0x0010e1dc;
        }
      }
code_r0x0010e650:
      pppppppplStack272 = (long ********)&UNK_0010e65d;
      pppppppplVar20 = pppppppplStack104;
      func_0x00101b00();
      uVar9 = (ulong)uStack128;
    }
    else {
      pppppppplVar18 = (long ********)((long)pppppppplStack304 + -1);
      *(long *********)(param_1 + 9) = pppppppplStack304;
      pppppppplStack272 = (long ********)&UNK_0010e1a5;
      uVar4 = re_string_context_at(param_1,pppppppplVar18,(ulong)*(uint *)(param_1 + 0x14));
      pppppppplStack296 = (long ********)(ulong)uVar4;
      if (pppppppplStack304 == param_4) goto code_r0x0010e583;
      param_4 = (long ********)unaff_R14[(long)pppppppplStack304];
      if ((param_4 == (long ********)0x0) || ((*(byte *)(param_4 + 0xd) & 0x40) == 0)) {
        pppppppplStack104 = (long ********)0x0;
        ppppppplStack120 = (long *******)0x0;
        lStack112 = 0;
code_r0x0010e1dc:
        if (((long)pppppppplStack304 < lStack200) &&
           (pppppppplVar11 = (long ********)(ulong)*(uint *)(param_1 + 0x1c),
           -1 < (int)*(uint *)(param_1 + 0x1c))) {
          pppppppplStack256 = &ppppppplStack120;
          pppppppplStack248 = (long ********)((long)pppppppplStack304 * 8 + 8);
          lStack232 = 0;
          puStack240 = auStack88;
          ppppppplVar6 = param_1[0x17];
          puStack176 = &uStack124;
          do {
            lStack112 = 0;
            pppppppplVar11 = pppppppplStack248;
            pppppppplStack264 = pppppppplStack304;
            if (*(long *)((long)ppppppplVar6 + (long)pppppppplStack248) == 0) {
              if (param_4 != (long ********)0x0) goto code_r0x0010e282;
              pppppppplStack304 = (long ********)((long)pppppppplStack304 + 1);
            }
            else {
              pppppppplVar18 =
                   (long ********)(*(long *)((long)ppppppplVar6 + (long)pppppppplStack248) + 8);
              pppppppplStack272 = (long ********)&UNK_0010e26a;
              uStack128 = re_node_set_merge(pppppppplStack256);
              if (uStack128 != 0) goto code_r0x0010e650;
              if (param_4 != (long ********)0x0) {
code_r0x0010e282:
                ppppppplVar6 = param_4[5];
                pppppppplStack304 = (long ********)param_1[0x13];
                uStack124 = 0;
                *(undefined8 *)(puStack240 + 4) = 0;
                *puStack240 = 0;
                puStack240[1] = 0;
                puStack240[2] = 0;
                puStack240[3] = 0;
                if ((long)ppppppplVar6 < 1) {
                  uVar10 = 0;
                }
                else {
                  pppppppplStack224 = pppppppplStack304 + 0x1b;
                  lVar7 = 0;
                  do {
                    pppppppplVar20 = (long ********)param_4[6][lVar7];
                    pppppppplStack296 = (long ********)((long)pppppppplVar20 * 0x10);
                    ppppppplVar6 = *pppppppplStack304 + (long)pppppppplVar20 * 2;
                    unaff_R14 = pppppppplVar20;
                    if ((*(byte *)((long)ppppppplVar6 + 10) & 0x10) != 0) {
                      pppppppplStack272 = (long ********)&UNK_0010e33a;
                      pppppppplVar11 = param_1;
                      param_5 = pppppppplStack264;
                      iVar5 = check_node_accept_bytes_isra_31
                                        (*pppppppplStack304,pppppppplStack224,pppppppplVar20);
                      if (iVar5 < 2) {
                        if (iVar5 == 0) {
                          ppppppplVar6 = *pppppppplStack304 + (long)pppppppplVar20 * 2;
                          goto code_r0x0010e2c8;
                        }
                        goto code_r0x0010e2e0;
                      }
                      pppppppplVar11 = (long ********)((long)iVar5 + (long)pppppppplStack264);
                      pppppppplStack296 = (long ********)((long)pppppppplVar20 * 8);
                      unaff_R14 = (long ********)((long)pppppppplVar11 * 8);
                      uStack80 = 0;
                      pppppppplVar12 = (long ********)pppppppplStack304[3][(long)pppppppplVar20];
                      pppppppplStack208 = pppppppplVar11;
                      if (param_1[0x17][(long)pppppppplVar11] == (long ******)0x0) {
code_r0x0010e3a9:
                        pppppppplStack272 = (long ********)&UNK_0010e3b6;
                        cVar3 = re_node_set_insert(puStack240);
                        pppppppplVar18 = pppppppplVar12;
                        if (cVar3 == '\0') goto code_r0x0010e638;
                        unaff_R14 = (long ********)((long)unaff_R14 + (long)param_1[0x17]);
                        pppppppplStack272 = (long ********)&UNK_0010e3d7;
                        pppppppplVar18 = pppppppplStack304;
                        ppppppplVar6 = (long *******)
                                       re_acquire_state(puStack176,pppppppplStack304,puStack240);
                        *unaff_R14 = ppppppplVar6;
                        if ((param_1[0x17][(long)pppppppplStack208] != (long ******)0x0) ||
                           (uStack124 == 0)) goto code_r0x0010e2e0;
                      }
                      else {
                        pppppppplVar18 = (long ********)(param_1[0x17][(long)pppppppplVar11] + 1);
                        pppppppplStack272 = (long ********)&UNK_0010e399;
                        pppppppplStack184 =
                             (long ********)pppppppplStack304[3][(long)pppppppplVar20];
                        uStack124 = re_node_set_merge(puStack240);
                        pppppppplVar12 = pppppppplStack184;
                        if (uStack124 == 0) goto code_r0x0010e3a9;
                      }
                      pppppppplStack272 = (long ********)&UNK_0010e40d;
                      func_0x00101b00(uStack72);
                      uStack128 = uStack124;
                      if (uStack124 != 0) goto code_r0x0010e650;
                      goto code_r0x0010e428;
                    }
code_r0x0010e2c8:
                    pppppppplStack272 = (long ********)&UNK_0010e2d4;
                    cVar3 = check_node_accept(param_1,ppppppplVar6,pppppppplStack264);
                    if (cVar3 != '\0') {
code_r0x0010e2e0:
                      pppppppplStack296 = (long ********)((long)pppppppplVar20 * 8);
                      pppppppplVar18 = (long ********)pppppppplStack304[3][(long)pppppppplVar20];
                      pppppppplStack272 = (long ********)&UNK_0010e2f3;
                      cVar3 = re_node_set_insert(pppppppplStack256);
                      if (cVar3 == '\0') {
code_r0x0010e638:
                        pppppppplStack296 = (long ********)((long)pppppppplVar20 * 8);
                        pppppppplStack272 = (long ********)&UNK_0010e645;
                        func_0x00101b00(uStack72);
                        uStack128 = 0xc;
                        goto code_r0x0010e650;
                      }
                    }
                    lVar7 = lVar7 + 1;
                    uVar10 = uStack72;
                  } while (lVar7 < (long)param_4[5]);
                }
                pppppppplStack272 = (long ********)&UNK_0010e69d;
                func_0x00101b00(uVar10);
                uStack128 = 0;
              }
code_r0x0010e428:
              pppppppplStack304 = (long ********)((long)pppppppplStack264 + 1);
              if (lStack112 != 0) {
                pppppppplVar11 = (long ********)(ulong)param_7;
                pppppppplStack272 = (long ********)&UNK_0010e459;
                pppppppplVar18 = pppppppplStack256;
                uStack128 = check_arrival_expand_ecl
                                      (pppppppplStack216,pppppppplStack256,pppppppplStack192);
                if (uStack128 != 0) goto code_r0x0010e650;
                param_5 = (long ********)(ulong)param_7;
                pppppppplStack272 = (long ********)&UNK_0010e485;
                pppppppplVar11 = pppppppplStack192;
                pppppppplVar18 = pppppppplStack256;
                uStack128 = expand_bkref_cache(param_1,pppppppplStack256,pppppppplStack304);
                if (uStack128 != 0) goto code_r0x0010e650;
              }
            }
            pppppppplStack272 = (long ********)&UNK_0010e4a7;
            uVar4 = re_string_context_at(param_1,pppppppplStack264,(ulong)*(uint *)(param_1 + 0x14))
            ;
            pppppppplVar11 = (long ********)(ulong)uVar4;
            pppppppplStack272 = (long ********)&UNK_0010e4c0;
            pppppppplVar18 = pppppppplStack216;
            param_4 = (long ********)
                      re_acquire_state_context(&uStack128,pppppppplStack216,pppppppplStack256);
            if (param_4 == (long ********)0x0) {
              if (uStack128 != 0) goto code_r0x0010e650;
              ppppppplVar6 = param_1[0x17];
              lStack232 = lStack232 + 1;
              *(undefined8 *)((long)ppppppplVar6 + (long)pppppppplStack248) = 0;
            }
            else {
              ppppppplVar6 = param_1[0x17];
              lStack232 = 0;
              *(long *********)((long)ppppppplVar6 + (long)pppppppplStack248) = param_4;
            }
          } while (((long)pppppppplStack304 < lStack200) &&
                  (pppppppplStack248 = pppppppplStack248 + 1, pppppppplStack264 = pppppppplStack304,
                  lStack232 <= *(int *)(param_1 + 0x1c)));
        }
        pppppppplStack272 = (long ********)&UNK_0010e515;
        pppppppplVar20 = pppppppplStack104;
        func_0x00101b00();
        pppppplVar14 = param_1[0x17][lStack200];
        if (pppppplVar14 == (long ******)0x0) {
          *(long *********)pppppppplStack168 = pppppppplStack304;
          param_1[0x17] = ppppppplStack160;
          *(long *********)(param_1 + 9) = pppppppplStack152;
          uVar9 = 1;
        }
        else {
          pppppppplVar18 = (long ********)(pppppplVar14 + 3);
          *(long *********)pppppppplStack168 = pppppppplStack304;
          param_1[0x17] = ppppppplStack160;
          *(long *********)(param_1 + 9) = pppppppplStack152;
          pppppppplVar20 = (long ********)pppppplVar14[2];
          pppppppplStack272 = (long ********)&UNK_0010e55d;
          lVar7 = re_node_set_contains_isra_3(pppppppplVar20,pppppppplVar18,pppppppplStack144);
          uVar9 = (ulong)(lVar7 == 0);
        }
      }
      else {
        pppppppplVar20 = &ppppppplStack120;
        pppppppplVar18 = param_4 + 1;
        pppppppplStack272 = (long ********)&UNK_0010e6f4;
        uVar9 = re_node_set_init_copy();
        uStack128 = (uint)uVar9;
        if (uStack128 == 0) {
          if ((*(byte *)(param_4 + 0xd) & 0x40) == 0) goto code_r0x0010e1dc;
          goto code_r0x0010e70d;
        }
      }
    }
  }
  else {
    pppppppplStack304 = (long ********)(*(int *)(param_1 + 0x1c) + param_6 + 1);
    pppppppplVar18 = param_2;
    pppppppplVar20 = param_1;
    if (((long)pppppppplStack304 <= 0x7fffffffffffffff - (long)pppppppplStack296) &&
       (unaff_R14 = (long ********)((long)pppppppplStack296 + (long)pppppppplStack304),
       unaff_R14 < (long ********)0x2000000000000000)) {
      pppppppplVar18 = (long ********)((long)unaff_R14 * 8);
      pppppppplVar20 = (long ********)param_2[2];
      pppppppplStack272 = (long ********)&UNK_0010e7b6;
      ppppppplVar6 = (long *******)func_0x00101e00();
      if (ppppppplVar6 != (long *******)0x0) {
        pppppppplStack168[2] = ppppppplVar6;
        *(long *********)(pppppppplStack168 + 1) = unaff_R14;
        pppppppplStack272 = (long ********)&UNK_0010e7db;
        func_0x00101cb0(ppppppplVar6 + (long)pppppppplStack296,0,(long)pppppppplStack304 * 8);
        goto code_r0x0010e15c;
      }
    }
code_r0x0010e7fb:
    uVar9 = 0xc;
  }
  uStack312 = uStack64 ^ *(ulong *)(in_FS_OFFSET + 0x28);
  if (uStack312 == 0) {
    return uVar9;
  }
  pppppppplStack272 = (long ********)&UNK_0010e831;
  func_0x00101c20();
  pppppppplStack272 = param_4;
  pppppppplStack280 = param_1;
  pppppppplStack288 = unaff_R14;
  ppppppplStack352 = (long *******)0x0;
  uStack328 = *(ulong *)(in_FS_OFFSET + 0x28);
  ppppppplStack416 = *pppppppplVar20;
  uStack344 = 2;
  lStack336 = 0;
  pppppppplVar20 = pppppppplVar18;
  pppppppplStack424 = extraout_RDX;
  if ((char)param_5 == '\0') {
    uStack408 = (long ********)0x0;
    pppppppplVar12 = pppppppplVar11;
code_r0x0010e8bd:
    apppppppplStack368[0] = (long ********)0x0;
    pppppppplVar16 = (long ********)ppppppplStack416[0x12];
    uStack384 = 0;
    uStack380 = 0;
    uStack376 = 0;
    pppppppplStack456 = (long ********)((long)pppppppplStack424 * 0x10);
    if (pppppppplStack456 < (long ********)0xfc0) {
      cStack473 = '\0';
      pppppppplStack464 = (long ********)((long)&ppppppplStack496 + -(long)(pppppppplStack456 + 2));
      ppppppplVar6 = (long *******)((long)&ppppppplStack496 + -(long)(pppppppplStack456 + 2));
code_r0x0010e917:
      *(undefined8 *)((undefined *)ppppppplVar6 + -8) = 0x10e92d;
      pppppppplVar20 = pppppppplVar11;
      func_0x00101d70(pppppppplStack464,pppppppplVar11,pppppppplStack456);
      pppppppplStack440 = (long ********)&uStack384;
      pppppppplStack392 = (long ********)*pppppppplVar11;
      pppppppplStack472 = (long ********)apppppppplStack368;
      do {
        pppppppplStack448 = (long ********)&pppppppplStack392;
        pppppppplVar15 = param_1;
        do {
          pppppppplVar21 = (long ********)pppppppplVar11[1];
          pppppppplVar12 = pppppppplStack392;
          if ((long)pppppppplVar21 < (long)pppppppplStack392) {
            *(undefined8 *)((undefined *)ppppppplVar6 + -8) = 0x10ef39;
            func_0x00101b00(apppppppplStack368[0]);
            pppppppplVar21 = uStack408;
            if (cStack473 != '\0') {
              *(undefined8 *)((undefined *)ppppppplVar6 + -8) = 0x10f028;
              func_0x00101b00(pppppppplStack464);
              pppppppplVar21 = uStack408;
            }
            pppppppplVar16 = pppppppplVar15;
            uStack408 = pppppppplVar21;
            if (pppppppplVar21 != (long ********)0x0) {
              *(undefined8 *)((undefined *)ppppppplVar6 + -8) = 0x10ef57;
              free_fail_stack_return_part_24();
            }
code_r0x0010ef57:
            uVar9 = 0;
            goto code_r0x0010ef59;
          }
          pppppppplVar23 = (long ********)((long)pppppppplVar16 * 0x10);
          pppppplVar14 = *ppppppplStack416 + (long)pppppppplVar16 * 2;
          bVar1 = *(byte *)(pppppplVar14 + 1);
          pppppppplVar20 = (long ********)(ulong)bVar1;
          if (bVar1 == 8) {
            ppppplVar2 = *pppppplVar14;
            if ((long)ppppplVar2 + 1 < (long)pppppppplStack424) {
              (pppppppplVar11 + ((long)ppppplVar2 + 1) * 2)[1] = (long *******)0xffffffffffffffff;
              *(long *********)(pppppppplVar11 + ((long)ppppplVar2 + 1) * 2) = pppppppplStack392;
              pppppppplVar21 = (long ********)pppppppplVar11[1];
            }
          }
          else {
            if ((bVar1 == 9) &&
               (pppppppplVar15 = (long ********)((long)*pppppplVar14 + 1),
               pppppppplVar20 = pppppppplVar15, (long)pppppppplVar15 < (long)pppppppplStack424)) {
              pppppppplVar20 = (long ********)((long)pppppppplVar15 * 0x10);
              pppppppplVar21 = pppppppplVar11 + (long)pppppppplVar15 * 2;
              if ((long)*pppppppplVar21 < (long)pppppppplStack392) {
                *(long *********)(pppppppplVar21 + 1) = pppppppplStack392;
                *(undefined8 *)((undefined *)ppppppplVar6 + -8) = 0x10ef18;
                pppppppplVar20 = pppppppplVar11;
                pppppppplStack488 = pppppppplVar23;
                pppppppplStack432 = pppppppplStack392;
                func_0x00101d70(pppppppplStack464,pppppppplVar11,pppppppplStack456);
                pppppppplVar21 = (long ********)pppppppplVar11[1];
                pppppppplVar12 = pppppppplStack432;
                pppppppplVar23 = pppppppplStack488;
              }
              else {
                if (((*(byte *)((long)pppppplVar14 + 10) & 8) == 0) ||
                   (pppppppplStack464[(long)pppppppplVar15 * 2] == (long *******)0xffffffffffffffff)
                   ) {
                  *(long *********)(pppppppplVar21 + 1) = pppppppplStack392;
                  pppppppplVar21 = (long ********)pppppppplVar11[1];
                }
                else {
                  *(undefined8 *)((undefined *)ppppppplVar6 + -8) = 0x10ef9b;
                  pppppppplVar20 = pppppppplStack464;
                  pppppppplStack488 = pppppppplStack392;
                  pppppppplStack432 = pppppppplVar23;
                  func_0x00101d70(pppppppplVar11,pppppppplStack464,pppppppplStack456);
                  pppppppplVar21 = (long ********)pppppppplVar11[1];
                  pppppppplVar12 = pppppppplStack488;
                  pppppppplVar23 = pppppppplStack432;
                }
              }
            }
          }
          pppppppplVar15 = pppppppplVar16;
          if ((pppppppplVar21 == pppppppplVar12) &&
             ((long ********)pppppppplVar18[0x16] == pppppppplVar16)) {
            if (uStack408 == (long ********)0x0) {
              *(undefined8 *)((undefined *)ppppppplVar6 + -8) = 0x10f095;
              pppppppplVar21 = apppppppplStack368[0];
              func_0x00101b00();
              if (cStack473 == '\0') goto code_r0x0010ef57;
              *(undefined8 *)((undefined *)ppppppplVar6 + -8) = 0x10f0ae;
              pppppppplVar21 = pppppppplStack464;
              func_0x00101b00();
              uVar9 = 0;
              goto code_r0x0010ef59;
            }
            pppppppplVar12 = pppppppplStack424;
            if (pppppppplStack424 == (long ********)0x0) {
code_r0x0010ed8a:
              *(undefined8 *)((undefined *)ppppppplVar6 + -8) = 0x10ed93;
              func_0x00101b00(apppppppplStack368[0]);
              if (cStack473 != '\0') {
                *(undefined8 *)((undefined *)ppppppplVar6 + -8) = 0x10f120;
                func_0x00101b00(pppppppplStack464);
              }
              *(undefined8 *)((undefined *)ppppppplVar6 + -8) = 0x10edac;
              pppppppplVar21 = uStack408;
              free_fail_stack_return_part_24();
              uVar9 = 0;
              goto code_r0x0010ef59;
            }
            pppppppplVar15 = (long ********)0x0;
            pppppppplVar21 = pppppppplVar11;
            while (((long)*pppppppplVar21 < 0 ||
                   (pppppppplVar21[1] != (long *******)0xffffffffffffffff))) {
              pppppppplVar15 = (long ********)((long)pppppppplVar15 + 1);
              pppppppplVar21 = pppppppplVar21 + 2;
              if (pppppppplStack424 == pppppppplVar15) goto code_r0x0010ed8a;
            }
            *(undefined8 *)((undefined *)ppppppplVar6 + -8) = 0x10edf8;
            param_5 = pppppppplVar11;
            pppppppplVar15 =
                 (long ********)
                 pop_fail_stack_isra_25
                           (uStack408,uStack408 + 2,pppppppplStack448,pppppppplStack424,
                            pppppppplVar11,pppppppplStack440);
            pppppppplVar23 = (long ********)((long)pppppppplVar15 << 4);
          }
          pppppppplVar21 = pppppppplStack392;
          unaff_R14 = (long ********)pppppppplVar18[0x13];
          ppppppplVar8 = *unaff_R14;
          pppppppplVar20 = (long ********)((long)ppppppplVar8 + (long)pppppppplVar23);
          if ((*(byte *)(pppppppplVar20 + 1) & 8) == 0) {
            pppppppplVar26 = unaff_R14;
            param_1 = pppppppplVar15;
            if ((*(byte *)((long)pppppppplVar20 + 10) & 0x10) == 0) {
              pppppppplVar12 = pppppppplStack392;
              if (*(byte *)(pppppppplVar20 + 1) != 4) goto code_r0x0010e9ad;
              ppppppplVar8 = (pppppppplVar11 + ((long)*pppppppplVar20 + 1) * 2)[1];
              ppppppplVar25 = pppppppplVar11[((long)*pppppppplVar20 + 1) * 2];
              pppppppplVar12 = (long ********)((long)ppppppplVar8 - (long)ppppppplVar25);
              if (uStack408 == (long ********)0x0) {
                if (pppppppplVar12 == (long ********)0x0) goto code_r0x0010ee70;
              }
              else {
                if ((ppppppplVar25 == (long *******)0xffffffffffffffff) ||
                   (ppppppplVar8 == (long *******)0xffffffffffffffff)) goto code_r0x0010ee26;
                if (pppppppplVar12 == (long ********)0x0) {
code_r0x0010ee70:
                  *(undefined8 *)((undefined *)ppppppplVar6 + -8) = 0x10ee86;
                  pppppppplVar20 = pppppppplVar15;
                  pppppppplStack432 = pppppppplVar23;
                  cVar3 = re_node_set_insert(pppppppplStack440);
                  if (cVar3 != '\0') {
                    pppppppplStack488 = pppppppplStack392;
                    pppppppplVar16 = (long ********)*unaff_R14[5][(long)pppppppplVar15 * 3 + 2];
                    ppppplVar2 = pppppppplVar18[0x17][(long)pppppppplStack392][2];
                    pppppppplVar20 =
                         (long ********)(pppppppplVar18[0x17][(long)pppppppplStack392] + 3);
                    *(undefined8 *)((undefined *)ppppppplVar6 + -8) = 0x10eec8;
                    pppppppplVar12 = pppppppplStack392;
                    lVar7 = re_node_set_contains_isra_3(ppppplVar2,pppppppplVar20,pppppppplVar16);
                    if (lVar7 != 0) goto code_r0x0010ea2c;
                    pppppppplVar20 = (long ********)((long)*unaff_R14 + (long)pppppppplStack432);
                    pppppppplVar12 = pppppppplStack488;
                    goto code_r0x0010e9ad;
                  }
                  goto code_r0x0010efb8;
                }
                ppppppplVar8 = pppppppplVar18[1];
                param_1 = pppppppplVar21;
                if ((long)((long)pppppppplVar18[6] - (long)pppppppplStack392) < (long)pppppppplVar12
                   ) goto code_r0x0010ee26;
                pppppppplVar20 = (long ********)((long)ppppppplVar8 + (long)pppppppplStack392);
                *(undefined8 *)((undefined *)ppppppplVar6 + -8) = 0x10ec56;
                pppppppplStack432 = pppppppplVar12;
                iVar5 = func_0x00101d00((long)ppppppplVar25 + (long)ppppppplVar8,pppppppplVar20,
                                        pppppppplVar12);
                pppppppplVar12 = pppppppplStack432;
                if (iVar5 != 0) goto code_r0x0010ee26;
              }
code_r0x0010ec65:
              pppppppplStack392 = (long ********)((long)pppppppplVar21 + (long)pppppppplVar12);
              pppppppplVar16 = (long ********)unaff_R14[3][(long)pppppppplVar15];
              pppppppplVar15 = pppppppplVar21;
            }
            else {
              pppppppplVar20 = unaff_R14 + 0x1b;
              *(undefined8 *)((undefined *)ppppppplVar6 + -8) = 0x10ebbd;
              param_5 = pppppppplStack392;
              pppppppplStack432 = pppppppplVar23;
              iVar5 = check_node_accept_bytes_isra_31
                                (ppppppplVar8,pppppppplVar20,pppppppplVar15,pppppppplVar18);
              pppppppplVar12 = (long ********)(long)iVar5;
              pppppppplVar21 = pppppppplStack392;
              if (pppppppplVar12 != (long ********)0x0) goto code_r0x0010ec65;
              pppppppplVar20 = (long ********)((long)*unaff_R14 + (long)pppppppplStack432);
              pppppppplVar12 = pppppppplStack392;
code_r0x0010e9ad:
              *(undefined8 *)((undefined *)ppppppplVar6 + -8) = 0x10e9bf;
              pppppppplStack432 = pppppppplVar12;
              cVar3 = check_node_accept(pppppppplVar18,pppppppplVar20,pppppppplVar12);
              pppppppplVar12 = pppppppplStack432;
              if (cVar3 == '\0') goto code_r0x0010ee18;
              pppppppplStack392 = (long ********)((long)pppppppplStack432 + 1);
              pppppppplVar16 = (long ********)unaff_R14[3][(long)pppppppplVar15];
            }
            if (uStack408 != (long ********)0x0) {
              param_1 = pppppppplVar15;
              if (((long)pppppppplVar18[0x15] < (long)pppppppplStack392) ||
                 (pppppplVar14 = pppppppplVar18[0x17][(long)pppppppplStack392],
                 pppppplVar14 == (long ******)0x0)) goto code_r0x0010ee26;
              ppppplVar2 = pppppplVar14[2];
              pppppppplVar20 = (long ********)(pppppplVar14 + 3);
              *(undefined8 *)((undefined *)ppppppplVar6 + -8) = 0x10ea1b;
              lVar7 = re_node_set_contains_isra_3(ppppplVar2,pppppppplVar20,pppppppplVar16);
              if (lVar7 == 0) goto code_r0x0010ee26;
            }
            uStack376 = 0;
          }
          else {
            pppppppplStack432 = (long ********)pppppppplVar18[0x17][(long)pppppppplStack392];
            param_1 = (long ********)(unaff_R14[5] + (long)pppppppplVar15 * 3);
            *(undefined8 *)((undefined *)ppppppplVar6 + -8) = 0x10ead2;
            cVar3 = re_node_set_insert(pppppppplStack440);
            pppppppplVar20 = pppppppplVar15;
            if (cVar3 == '\0') goto code_r0x0010efb8;
            ppppppplVar8 = param_1[1];
            if ((long)ppppppplVar8 < 1) goto code_r0x0010ee18;
            pppppppplVar15 = (long ********)param_1[2];
            ppppppplVar25 = pppppppplStack432[2];
            pppppppplVar26 = pppppppplStack432 + 3;
            ppppppplVar24 = (long *******)0x0;
            pppppppplVar21 = (long ********)0xffffffffffffffff;
            pppppppplStack432 = pppppppplVar18;
            do {
              unaff_R14 = (long ********)pppppppplVar15[(long)ppppppplVar24];
              *(undefined8 *)((undefined *)ppppppplVar6 + -8) = 0x10eb22;
              pppppppplVar20 = pppppppplVar26;
              lVar7 = re_node_set_contains_isra_3(ppppppplVar25,pppppppplVar26,unaff_R14);
              pppppppplVar18 = pppppppplStack432;
              pppppppplVar16 = pppppppplVar21;
              if ((lVar7 != 0) &&
                 (pppppppplVar16 = unaff_R14, pppppppplVar21 != (long ********)0xffffffffffffffff))
              {
                *(undefined8 *)((undefined *)ppppppplVar6 + -8) = 0x10ec9d;
                pppppppplVar20 = pppppppplStack472;
                lVar7 = re_node_set_contains_isra_3(uStack376,pppppppplStack472,pppppppplVar21);
                pppppppplVar26 = unaff_R14;
                if ((lVar7 != 0) ||
                   (pppppppplVar12 = uStack408, pppppppplVar16 = pppppppplVar21,
                   uStack408 == (long ********)0x0)) break;
                pppppppplVar15 = (long ********)*uStack408;
                ppppppplVar8 = (long *******)((long)pppppppplVar15 + 1);
                *uStack408 = ppppppplVar8;
                if (ppppppplVar8 == uStack408[1]) {
                  pppppppplStack432 = pppppppplStack392;
                  pppppppplVar20 = (long ********)((long)ppppppplVar8 * 0x60);
                  ppppppplVar8 = uStack408[2];
                  *(undefined8 *)((undefined *)ppppppplVar6 + -8) = 0x10f06c;
                  ppppppplVar8 = (long *******)func_0x00101e00(ppppppplVar8);
                  if (ppppppplVar8 == (long *******)0x0) {
                    *(undefined8 *)((undefined *)ppppppplVar6 + -8) = 0x10f0be;
                    func_0x00101b00(apppppppplStack368[0]);
                    if (cStack473 != '\0') goto code_r0x0010f0cb;
                    goto code_r0x0010ed38;
                  }
                  uStack408[1] = (long *******)((long)uStack408[1] << 1);
                  uStack408[2] = ppppppplVar8;
                  pppppppplVar12 = pppppppplStack432;
                }
                else {
                  ppppppplVar8 = uStack408[2];
                  pppppppplVar12 = pppppppplStack392;
                }
                pppppppplVar26 = pppppppplStack456;
                pppppppplVar15 = (long ********)(ppppppplVar8 + (long)pppppppplVar15 * 6);
                *(long *********)(pppppppplVar15 + 1) = unaff_R14;
                *(long *********)pppppppplVar15 = pppppppplVar12;
                *(undefined8 *)((undefined *)ppppppplVar6 + -8) = 0x10ecf3;
                pppppppplVar12 = uStack408;
                ppppppplVar8 = (long *******)func_0x00101da0(pppppppplStack456);
                pppppppplVar15[2] = ppppppplVar8;
                if (ppppppplVar8 != (long *******)0x0) {
                  *(undefined8 *)((undefined *)ppppppplVar6 + -8) = 0x10ed0a;
                  func_0x00101d70(ppppppplVar8,pppppppplVar11,pppppppplVar26);
                  *(undefined8 *)((undefined *)ppppppplVar6 + -8) = 0x10ed1a;
                  pppppppplVar20 = pppppppplStack440;
                  iVar5 = re_node_set_init_copy(pppppppplVar15 + 3);
                  if (iVar5 == 0) break;
                }
                *(undefined8 *)((undefined *)ppppppplVar6 + -8) = 0x10ed2b;
                func_0x00101b00(apppppppplStack368[0]);
                unaff_R14 = pppppppplVar26;
                if (cStack473 == '\0') goto code_r0x0010ed38;
                goto code_r0x0010f0cb;
              }
              ppppppplVar24 = (long *******)((long)ppppppplVar24 + 1);
              pppppppplVar21 = pppppppplVar16;
            } while (ppppppplVar8 != ppppppplVar24);
          }
code_r0x0010ea2c:
          unaff_R14 = pppppppplVar26;
        } while (-1 < (long)pppppppplVar16);
        param_1 = pppppppplVar15;
        if (pppppppplVar16 == (long ********)0xfffffffffffffffe) {
code_r0x0010efb8:
          pppppppplVar15 = param_1;
          *(undefined8 *)((undefined *)ppppppplVar6 + -8) = 0x10efc1;
          pppppppplVar21 = apppppppplStack368[0];
          func_0x00101b00();
          if (cStack473 != '\0') {
code_r0x0010f0cb:
            *(undefined8 *)((undefined *)ppppppplVar6 + -8) = 0x10f0d7;
            pppppppplVar21 = pppppppplStack464;
            func_0x00101b00();
          }
          param_1 = pppppppplVar15;
          if (uStack408 == (long ********)0x0) goto code_r0x0010efdc;
code_r0x0010ed38:
          *(undefined8 *)((undefined *)ppppppplVar6 + -8) = 0x10ed44;
          pppppppplVar21 = uStack408;
          free_fail_stack_return_part_24();
          uVar9 = 0xc;
          pppppppplVar16 = pppppppplVar15;
          goto code_r0x0010ef59;
        }
code_r0x0010ee18:
        if (uStack408 == (long ********)0x0) goto code_r0x0010f0dc;
code_r0x0010ee26:
        pppppppplVar20 = uStack408 + 2;
        *(undefined8 *)((undefined *)ppppppplVar6 + -8) = 0x10ee4b;
        param_5 = pppppppplVar11;
        pppppppplVar16 =
             (long ********)
             pop_fail_stack_isra_25
                       (uStack408,pppppppplVar20,&pppppppplStack392,pppppppplStack424,pppppppplVar11
                        ,pppppppplStack440);
      } while( true );
    }
    pppppppplStack464 = (long ********)func_0x00101da0(0,pppppppplStack456);
    cStack473 = '\x01';
    ppppppplVar6 = (long *******)&ppppppplStack496;
    if (pppppppplStack464 != (long ********)0x0) goto code_r0x0010e917;
    ppppppplVar6 = (long *******)&ppppppplStack496;
    pppppppplVar21 = uStack408;
    if (uStack408 != (long ********)0x0) {
      free_fail_stack_return_part_24();
      ppppppplVar6 = (long *******)&ppppppplStack496;
    }
  }
  else {
    pppppppplVar21 = (long ********)0x60;
    lStack336 = func_0x00101da0();
    pppppppplVar12 = &ppppppplStack352;
    ppppppplVar6 = (long *******)&ppppppplStack496;
    uStack408 = pppppppplVar12;
    if (lStack336 != 0) goto code_r0x0010e8bd;
  }
code_r0x0010efdc:
  uVar9 = 0xc;
  pppppppplVar16 = param_1;
  goto code_r0x0010ef59;
code_r0x0010f0dc:
  *(undefined8 *)((undefined *)ppppppplVar6 + -8) = 0x10f0e5;
  pppppppplVar21 = apppppppplStack368[0];
  func_0x00101b00();
  uVar9 = 1;
  pppppppplVar16 = param_1;
  if (cStack473 != '\0') {
    uStack408 = (long ********)CONCAT44(uStack408._4_4_,1);
    *(undefined8 *)((undefined *)ppppppplVar6 + -8) = 0x10f109;
    pppppppplVar21 = pppppppplStack464;
    func_0x00101b00();
    uVar9 = (ulong)uStack408 & 0xffffffff;
  }
code_r0x0010ef59:
  uVar17 = uStack328 ^ *(ulong *)(in_FS_OFFSET + 0x28);
  if (uVar17 == 0) {
    return uVar9;
  }
  *(undefined8 *)((undefined *)ppppppplVar6 + -8) = 0x10f12a;
  func_0x00101c20();
  *(long *********)((undefined *)ppppppplVar6 + -8) = pppppppplVar16;
  *(long *********)((undefined *)ppppppplVar6 + -0x10) = unaff_R14;
  *(long *********)((undefined *)ppppppplVar6 + -0x18) = pppppppplVar11;
  *(long *********)((undefined *)ppppppplVar6 + -0x20) = pppppppplVar18;
  *(long **********)((undefined *)ppppppplVar6 + -0x28) = &pppppppplStack272;
  *(ulong *)((undefined *)ppppppplVar6 + -0x30) = uVar17;
  *(undefined8 *)((undefined *)ppppppplVar6 + -0x58) = 8;
  *(undefined8 *)((undefined *)ppppppplVar6 + -0x60) = 0x10f165;
  uVar10 = check_arrival();
  if ((int)uVar10 != 0) {
    return uVar10;
  }
  ppppppplVar8 = pppppppplVar21[0x19];
  ppppppplVar25 = pppppppplVar21[0x1a];
  ppppppplVar24 = *(long ********)(extraout_RDX_00 + 8);
  ppppppplVar13 = *pppppppplVar20;
  ppppppplVar22 = pppppppplVar21[0x1b];
  ppppppplVar19 = ppppppplVar24;
  if ((long)ppppppplVar25 <= (long)ppppppplVar8) {
    *(long ********)((undefined *)ppppppplVar6 + -0x40) = ppppppplVar13;
    *(undefined8 *)((undefined *)ppppppplVar6 + -0x50) = 0x10f252;
    ppppppplVar8 = (long *******)func_0x00101e00(ppppppplVar22,(long)ppppppplVar25 * 0x50);
    uVar10 = *(undefined8 *)((undefined *)ppppppplVar6 + -0x40);
    if (ppppppplVar8 == (long *******)0x0) {
      ppppppplVar8 = pppppppplVar21[0x1b];
      *(undefined8 *)((undefined *)ppppppplVar6 + -0x50) = 0x10f2bc;
      func_0x00101b00(ppppppplVar8);
      return 0xc;
    }
    ppppppplVar25 = pppppppplVar21[0x19];
    ppppppplVar13 = pppppppplVar21[0x1a];
    pppppppplVar21[0x1b] = ppppppplVar8;
    *(undefined8 *)((undefined *)ppppppplVar6 + -0x40) = uVar10;
    *(undefined8 *)((undefined *)ppppppplVar6 + -0x50) = 0x10f28d;
    func_0x00101cb0(ppppppplVar8 + (long)ppppppplVar25 * 5,0,(long)ppppppplVar13 * 0x28);
    pppppppplVar21[0x1a] = (long *******)((long)pppppppplVar21[0x1a] << 1);
    ppppppplVar8 = pppppppplVar21[0x19];
    ppppppplVar22 = pppppppplVar21[0x1b];
    ppppppplVar19 = *(long ********)(extraout_RDX_00 + 8);
    ppppppplVar13 = *(long ********)((undefined *)ppppppplVar6 + -0x40);
  }
  if ((0 < (long)ppppppplVar8) &&
     (param_5 == (long ********)(ppppppplVar22 + (long)ppppppplVar8 * 5 + -5)[1])) {
    *(undefined *)(ppppppplVar22 + (long)ppppppplVar8 * 5 + -5 + 4) = 1;
  }
  pppppppplVar11 = (long ********)(ppppppplVar22 + (long)ppppppplVar8 * 5);
  *(long *********)pppppppplVar11 = pppppppplVar12;
  *(long *********)(pppppppplVar11 + 1) = param_5;
  pppppppplVar11[2] = ppppppplVar13;
  *(short *)((long)pppppppplVar11 + 0x22) = -(ushort)(ppppppplVar24 == ppppppplVar13);
  pppppppplVar11[3] = ppppppplVar24;
  pppppppplVar21[0x19] = (long *******)((long)ppppppplVar8 + 1);
  *(undefined *)(pppppppplVar11 + 4) = 0;
  if ((long)*(int *)(pppppppplVar21 + 0x1c) < (long)((long)ppppppplVar24 - (long)ppppppplVar13)) {
    *(int *)(pppppppplVar21 + 0x1c) = (int)ppppppplVar24 - (int)ppppppplVar13;
  }
  ppppppplVar25 = (long *******)(((long)ppppppplVar19 + (long)param_5) - (long)*pppppppplVar20);
  *(undefined8 *)((undefined *)ppppppplVar6 + -8) =
       *(undefined8 *)((undefined *)ppppppplVar6 + -0x20);
  *(undefined8 *)((undefined *)ppppppplVar6 + -0x10) =
       *(undefined8 *)((undefined *)ppppppplVar6 + -0x28);
  *(undefined8 *)((undefined *)ppppppplVar6 + -0x18) =
       *(undefined8 *)((undefined *)ppppppplVar6 + -0x30);
  ppppppplVar8 = pppppppplVar21[0x18];
  if (((long)ppppppplVar25 < (long)pppppppplVar21[8]) ||
     ((long)pppppppplVar21[0xb] <= (long)pppppppplVar21[8])) {
    if (((long)ppppppplVar25 < (long)pppppppplVar21[6]) ||
       ((long)pppppppplVar21[0xb] <= (long)pppppppplVar21[6])) goto code_r0x00108d8f;
    *(undefined8 *)((undefined *)ppppppplVar6 + -0x20) = 0x108dba;
    uVar10 = extend_buffers(pppppppplVar21,(ulong)((int)ppppppplVar25 + 1));
    iVar5 = (int)uVar10;
  }
  else {
    *(undefined8 *)((undefined *)ppppppplVar6 + -0x20) = 0x108d8b;
    uVar10 = extend_buffers(pppppppplVar21,(ulong)((int)ppppppplVar25 + 1));
    iVar5 = (int)uVar10;
  }
  if (iVar5 != 0) {
    return uVar10;
  }
code_r0x00108d8f:
  if ((long)ppppppplVar8 < (long)ppppppplVar25) {
    ppppppplVar24 = pppppppplVar21[0x17];
    *(undefined8 *)((undefined *)ppppppplVar6 + -0x20) = 0x108ddd;
    func_0x00101cb0(ppppppplVar24 + (long)ppppppplVar8 + 1,0,
                    (long)((long)ppppppplVar25 - (long)ppppppplVar8) * 8);
    pppppppplVar21[0x18] = ppppppplVar25;
  }
  return 0;
}

