
/* WARNING: Could not reconcile some variable overlaps */

ulong make_dir_parents_private
                (undefined8 param_1,undefined4 *param_2,long param_3,long *param_4,char *param_5,
                long param_6)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined auVar4 [16];
  char cVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  uint *puVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  long extraout_RDX;
  undefined8 uVar16;
  undefined8 extraout_RDX_00;
  byte **ppbVar17;
  char *pcVar18;
  undefined *puVar19;
  char *pcVar20;
  char *pcVar21;
  undefined *puVar22;
  byte *pbVar23;
  char *pcVar24;
  char *pcVar25;
  undefined *puVar26;
  byte *pbVar27;
  long in_FS_OFFSET;
  bool bVar28;
  bool bVar29;
  byte bVar30;
  byte *apbStack704 [18];
  long lStack560;
  undefined auStack552 [8];
  long alStack544 [2];
  undefined auStack528 [8];
  char *pcStack520;
  long alStack512 [7];
  char *apcStack456 [2];
  long alStack440 [3];
  undefined *puStack416;
  long lStack408;
  long *plStack400;
  long *plStack392;
  char *pcStack384;
  undefined8 uStack376;
  char *pcStack368;
  undefined auStack360 [24];
  uint uStack336;
  undefined auStack216 [16];
  undefined8 uStack200;
  uint uStack192;
  undefined4 uStack188;
  undefined auStack184 [16];
  undefined auStack168 [16];
  undefined auStack152 [16];
  undefined auStack136 [16];
  undefined auStack120 [16];
  undefined auStack104 [16];
  undefined auStack88 [16];
  ulong uStack64;
  
  bVar30 = 0;
  uStack64 = *(ulong *)(in_FS_OFFSET + 0x28);
  puStack416 = &UNK_00103a46;
  lStack408 = param_3;
  plStack392 = param_4;
  pcStack384 = param_5;
  lVar9 = func_0x00102900(param_1,param_2,0);
  lVar1 = -(lVar9 + 0x1fU & 0xfffffffffffffff0);
  *(undefined **)((long)&puStack416 + lVar1) = 0x103a66;
  pcVar25 = (char *)func_0x00102b60((long **)((long)&plStack400 + lVar1),param_1,lVar9 + 1);
  *(undefined **)((long)&puStack416 + lVar1) = 0x103a71;
  uVar10 = dir_len(pcVar25);
  lVar9 = -(uVar10 + 0x1f & 0xfffffffffffffff0);
  pcVar18 = (char *)((long)&plStack400 + lVar9 + lVar1);
  *(undefined8 *)((long)&puStack416 + lVar9 + lVar1) = 0x103a96;
  func_0x00102b60(pcVar18,pcVar25,uVar10);
  pcVar18[uVar10] = '\0';
  pcVar24 = (char *)0x1;
  *plStack392 = 0;
  uStack376 = auStack360;
  *(undefined8 *)((long)&puStack416 + lVar9 + lVar1) = 0x103ac7;
  pcVar20 = pcVar18;
  iVar6 = func_0x00102ba0(1,pcVar18,auStack360);
  if (iVar6 == 0) {
    pcVar21 = pcVar18;
    if ((uStack336 & 0xf000) != 0x4000) {
code_r0x00103ec6:
      *(undefined8 *)((long)&puStack416 + lVar9 + lVar1) = 0x103ed0;
      pcVar18 = (char *)quotearg_style(4,pcVar21);
      *(undefined8 *)((long)&puStack416 + lVar9 + lVar1) = 0x103ee6;
      uVar16 = func_0x001028e0(0,&UNK_001130b0,5);
      pcVar20 = (char *)0x0;
      pcVar24 = (char *)0x0;
      *(undefined8 *)((long)&puStack416 + lVar9 + lVar1) = 0x103ef7;
      func_0x00102cb0(0,0,uVar16,pcVar18);
      uVar16 = 0;
      goto code_r0x00103ea1;
    }
    *pcStack384 = '\0';
  }
  else {
    pcVar24 = pcVar25 + (long)param_2;
    cVar5 = *pcVar24;
    pcStack368 = pcVar24;
    while (cVar5 == '/') {
      pcVar24 = pcVar24 + 1;
      cVar5 = *pcVar24;
    }
    plStack400 = (long *)auStack216;
    while( true ) {
      pcVar20 = (char *)0x2f;
      *(undefined8 *)((long)&puStack416 + lVar9 + lVar1) = 0x103b0a;
      pcVar18 = (char *)func_0x00102970(pcVar24);
      puVar22 = uStack376;
      if (pcVar18 == (char *)0x0) break;
      *pcVar18 = '\0';
      *(undefined8 *)((long)&puStack416 + lVar9 + lVar1) = 0x103b2d;
      uVar7 = func_0x00102ba0(1,pcVar25,puVar22);
      pcVar24 = pcStack368;
      plVar3 = plStack400;
      uVar10 = (ulong)uVar7;
      pcVar20 = pcVar25;
      if ((uVar7 != 0) || ((*(uint *)(param_6 + 0x1c) & 0xffffff00) != 0)) {
        *(undefined8 *)((long)&puStack416 + lVar9 + lVar1) = 0x103bd8;
        iVar6 = func_0x00102ba0(1,pcVar24,plVar3);
        if (iVar6 == 0) {
          if ((uStack192 & 0xf000) != 0x4000) {
            iVar6 = 0x14;
            goto code_r0x00103dcc;
          }
        }
        else {
          *(undefined8 *)((long)&puStack416 + lVar9 + lVar1) = 0x103be5;
          piVar11 = (int *)func_0x00102770();
          iVar6 = *piVar11;
          if (iVar6 != 0) {
code_r0x00103dcc:
            pcVar24 = pcStack368;
            uStack376 = (undefined *)CONCAT44(uStack376._4_4_,iVar6);
            *(undefined8 *)((long)&puStack416 + lVar9 + lVar1) = 0x103de4;
            pcVar18 = (char *)quotearg_style(4,pcVar24);
            *(undefined8 *)((long)&puStack416 + lVar9 + lVar1) = 0x103dfa;
            uVar16 = func_0x001028e0(0,&UNK_00113090,5);
            pcVar20 = (char *)((ulong)uStack376 & 0xffffffff);
            pcVar24 = (char *)0x0;
            *(undefined8 *)((long)&puStack416 + lVar9 + lVar1) = 0x103e13;
            func_0x00102cb0(0,pcVar20,uVar16,pcVar18);
            uVar16 = 0;
            goto code_r0x00103ea1;
          }
        }
        *(undefined8 *)((long)&puStack416 + lVar9 + lVar1) = 0x103bfb;
        param_2 = (undefined4 *)xmalloc(0xa8);
        auVar4 = auStack88;
        pcVar24 = pcStack368;
        *param_2 = SUB164(auStack216,0);
        param_2[1] = SUB164(auStack216 >> 0x20,0);
        param_2[2] = SUB164(auStack216 >> 0x40,0);
        param_2[3] = SUB164(auStack216 >> 0x60,0);
        param_2[4] = (int)uStack200;
        param_2[5] = (int)((ulong)uStack200 >> 0x20);
        param_2[6] = uStack192;
        param_2[7] = uStack188;
        param_2[8] = SUB164(auStack184,0);
        param_2[9] = SUB164(auStack184 >> 0x20,0);
        param_2[10] = SUB164(auStack184 >> 0x40,0);
        param_2[0xb] = SUB164(auStack184 >> 0x60,0);
        param_2[0xc] = SUB164(auStack168,0);
        param_2[0xd] = SUB164(auStack168 >> 0x20,0);
        param_2[0xe] = SUB164(auStack168 >> 0x40,0);
        param_2[0xf] = SUB164(auStack168 >> 0x60,0);
        param_2[0x10] = SUB164(auStack152,0);
        param_2[0x11] = SUB164(auStack152 >> 0x20,0);
        param_2[0x12] = SUB164(auStack152 >> 0x40,0);
        param_2[0x13] = SUB164(auStack152 >> 0x60,0);
        param_2[0x14] = SUB164(auStack136,0);
        param_2[0x15] = SUB164(auStack136 >> 0x20,0);
        param_2[0x16] = SUB164(auStack136 >> 0x40,0);
        param_2[0x17] = SUB164(auStack136 >> 0x60,0);
        param_2[0x18] = SUB164(auStack120,0);
        param_2[0x19] = SUB164(auStack120 >> 0x20,0);
        param_2[0x1a] = SUB164(auStack120 >> 0x40,0);
        param_2[0x1b] = SUB164(auStack120 >> 0x60,0);
        param_2[0x1c] = SUB164(auStack104,0);
        param_2[0x1d] = SUB164(auStack104 >> 0x20,0);
        param_2[0x1e] = SUB164(auStack104 >> 0x40,0);
        param_2[0x1f] = SUB164(auStack104 >> 0x60,0);
        param_2[0x20] = SUB164(auStack88,0);
        param_2[0x21] = SUB164(auStack88 >> 0x20,0);
        param_2[0x22] = SUB164(auStack88 >> 0x40,0);
        param_2[0x23] = SUB164(auStack88 >> 0x60,0);
        *(undefined *)(param_2 + 0x24) = 0;
        *(char **)(param_2 + 0x26) = pcVar18 + -(long)pcVar25;
        lVar13 = *plStack392;
        *(undefined4 **)plStack392 = param_2;
        *(long *)(param_2 + 0x28) = lVar13;
        if (uVar7 == 0) goto code_r0x00103b42;
        uVar7 = param_2[6];
        *(undefined8 *)((long)&puStack416 + lVar9 + lVar1) = 0x103cad;
        cVar5 = set_process_security_ctx(SUB168(auVar4,0),pcVar24,pcVar25,(ulong)uVar7,1);
        if (cVar5 == '\0') {
code_r0x00103e65:
          uVar16 = 0;
        }
        else {
          uVar7 = param_2[6];
          *pcStack384 = '\x01';
          if (*(char *)(param_6 + 0x1d) == '\0') {
            if (*(char *)(param_6 + 0x1e) == '\0') {
              uVar10 = 0;
              uVar8 = 0xfff;
            }
            else {
              uVar10 = (ulong)(uVar7 & 0x12);
              uVar8 = uVar7 & 0x12 ^ 0xfff;
            }
          }
          else {
            uVar10 = (ulong)(uVar7 & 0x3f);
            uVar8 = uVar7 & 0x3f ^ 0xfff;
          }
          if (*(char *)(param_6 + 0x20) != '\0') {
            uVar7 = 0x1ff;
          }
          *(undefined8 *)((long)&puStack416 + lVar9 + lVar1) = 0x103cf4;
          iVar6 = func_0x001027e0(pcVar25,(ulong)(uVar7 & uVar8),0x1ff);
          pcVar24 = pcStack368;
          lVar13 = lStack408;
          if (iVar6 == 0) {
            if (lStack408 != 0) {
              *(undefined8 *)((long)&puStack416 + lVar9 + lVar1) = 0x103d21;
              func_0x00102c60(1,lVar13,pcVar24,pcVar25);
            }
            puVar22 = uStack376;
            *(undefined8 *)((long)&puStack416 + lVar9 + lVar1) = 0x103d35;
            iVar6 = func_0x00102910(1,pcVar25,puVar22);
            if (iVar6 != 0) {
              *(undefined8 *)((long)&puStack416 + lVar9 + lVar1) = 0x103f8c;
              pcVar25 = (char *)quotearg_style(4,pcVar25);
              puVar22 = &UNK_00113090;
              goto code_r0x00103f50;
            }
            if (*(char *)(param_6 + 0x1e) == '\0') {
              if ((~uStack336 & (uint)uVar10) != 0) {
                *(undefined8 *)((long)&puStack416 + lVar9 + lVar1) = 0x103f05;
                uVar7 = cached_umask();
                uVar7 = (uint)uVar10 & ~uVar7;
                uVar10 = (ulong)uVar7;
                if ((~uStack336 & uVar7) == 0) goto code_r0x00103d57;
code_r0x00103d67:
                uVar10 = (ulong)(uVar7 | uStack336);
                *(undefined *)(param_2 + 0x24) = 1;
                param_2[6] = uVar7 | uStack336;
                goto code_r0x00103d76;
              }
code_r0x00103d57:
              uVar7 = (uint)uVar10;
              if ((uStack336 & 0x1c0) != 0x1c0) goto code_r0x00103d67;
            }
            else {
code_r0x00103d76:
              if ((uStack336 & 0x1c0) != 0x1c0) {
                *(undefined8 *)((long)&puStack416 + lVar9 + lVar1) = 0x103d92;
                iVar6 = func_0x00102c90(pcVar25);
                if (iVar6 != 0) {
                  *(undefined8 *)((long)&puStack416 + lVar9 + lVar1) = 0x103faa;
                  pcVar25 = (char *)quotearg_style(4,pcVar25);
                  puVar22 = &UNK_0011292a;
                  goto code_r0x00103f50;
                }
              }
            }
            if (*pcStack384 == '\0') goto code_r0x00103b80;
            goto code_r0x00103b94;
          }
          *(undefined8 *)((long)&puStack416 + lVar9 + lVar1) = 0x103f41;
          pcVar25 = (char *)quotearg_style(4,pcVar25);
          puVar22 = &UNK_00112911;
code_r0x00103f50:
          *(undefined8 *)((long)&puStack416 + lVar9 + lVar1) = 0x103f57;
          pcVar18 = (char *)func_0x001028e0(0,puVar22,5);
          *(undefined8 *)((long)&puStack416 + lVar9 + lVar1) = 0x103f5f;
          puVar12 = (uint *)func_0x00102770();
          pcVar20 = (char *)(ulong)*puVar12;
          pcVar24 = (char *)0x0;
          *(undefined8 *)((long)&puStack416 + lVar9 + lVar1) = 0x103f70;
          func_0x00102cb0(0,pcVar20,pcVar18,pcVar25);
          uVar16 = 0;
        }
        goto code_r0x00103ea1;
      }
code_r0x00103b42:
      pcVar24 = pcStack368;
      *(undefined8 *)((long)&puStack416 + lVar9 + lVar1) = 0x103b58;
      cVar5 = set_process_security_ctx(pcVar24,pcVar25,0,0);
      if (cVar5 == '\0') goto code_r0x00103e65;
      pcVar21 = pcVar25;
      if ((uStack336 & 0xf000) != 0x4000) goto code_r0x00103ec6;
      *pcStack384 = '\0';
code_r0x00103b80:
      if ((*(ulong *)(param_6 + 0x20) & 0xff000000ff00) != 0) {
        pcVar20 = (char *)(ulong)*(byte *)(param_6 + 0x25);
        *(undefined8 *)((long)&puStack416 + lVar9 + lVar1) = 0x103e52;
        pcVar24 = pcVar25;
        cVar5 = set_file_security_ctx(pcVar25,pcVar20,0);
        if ((cVar5 == '\0') && (*(char *)(param_6 + 0x26) != '\0')) goto code_r0x00103e65;
      }
code_r0x00103b94:
      cVar5 = pcVar18[1];
      pcVar24 = pcVar18 + 1;
      *pcVar18 = '/';
      while (cVar5 == '/') {
        pcVar24 = pcVar24 + 1;
        cVar5 = *pcVar24;
      }
    }
  }
  uVar16 = 1;
code_r0x00103ea1:
  uVar15 = uStack64 ^ *(ulong *)(in_FS_OFFSET + 0x28);
  if (uVar15 == 0) {
    return uVar16;
  }
  *(undefined8 *)((long)&puStack416 + lVar9 + lVar1) = 0x103fc0;
  func_0x00102930();
  *(undefined **)((long)&puStack416 + lVar9 + lVar1) = &stack0xfffffffffffffff8;
  *(undefined4 **)((long)alStack440 + lVar9 + lVar1 + 0x10) = param_2;
  *(ulong *)((long)alStack440 + lVar9 + lVar1 + 8) = uVar10;
  *(long *)((long)alStack440 + lVar9 + lVar1) = param_6;
  *(char **)((long)apcStack456 + lVar9 + lVar1 + 8) = pcVar25;
  *(char **)((long)apcStack456 + lVar9 + lVar1) = pcVar18;
  *(undefined8 *)((long)alStack512 + lVar9 + lVar1 + 0x28) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)((long)alStack544 + lVar9 + lVar1 + 8) = 0x103ff1;
  lVar13 = func_0x00102900();
  lVar2 = -(lVar13 + 0x1fU & 0xfffffffffffffff0);
  puVar22 = auStack528 + lVar2 + lVar9 + lVar1;
  *(undefined8 *)((long)alStack544 + lVar2 + lVar9 + lVar1 + 8) = 0x104011;
  puVar26 = (undefined *)func_0x00102b60(puVar22,pcVar24,lVar13 + 1);
  *(char **)((long)&pcStack520 + lVar9 + lVar1) = pcVar20 + (long)puVar26;
  lVar13 = extraout_RDX;
  if (extraout_RDX != 0) {
    do {
      cVar5 = *(char *)(uVar15 + 0x1f);
      puVar26[*(long *)(lVar13 + 0x98)] = 0;
      if (cVar5 != '\0') {
        uVar16 = *(undefined8 *)(lVar13 + 0x50);
        *(undefined8 *)((long)alStack512 + lVar9 + lVar1) = *(undefined8 *)(lVar13 + 0x48);
        *(undefined8 *)((long)alStack512 + lVar9 + lVar1 + 8) = uVar16;
        uVar16 = *(undefined8 *)(lVar13 + 0x60);
        *(undefined8 *)((long)alStack512 + lVar9 + lVar1 + 0x10) = *(undefined8 *)(lVar13 + 0x58);
        *(undefined8 *)((long)alStack512 + lVar9 + lVar1 + 0x18) = uVar16;
        *(undefined8 *)((long)alStack544 + lVar2 + lVar9 + lVar1 + 8) = 0x1040b0;
        puVar22 = puVar26;
        iVar6 = utimens(puVar26,(long)alStack512 + lVar9 + lVar1);
        if (iVar6 != 0) {
          uVar10 = 0;
          *(undefined8 *)((long)alStack544 + lVar2 + lVar9 + lVar1 + 8) = 0x1040c8;
          puVar26 = (undefined *)quotearg_style(4,puVar26);
          *(undefined8 *)((long)alStack544 + lVar2 + lVar9 + lVar1 + 8) = 0x1040de;
          lVar13 = func_0x001028e0(0,&UNK_001130d8,5);
          *(undefined8 *)((long)alStack544 + lVar2 + lVar9 + lVar1 + 8) = 0x1040e6;
          puVar12 = (uint *)func_0x00102770();
          uVar7 = *puVar12;
          puVar22 = (undefined *)0x0;
          *(undefined8 *)((long)alStack544 + lVar2 + lVar9 + lVar1 + 8) = 0x1040f7;
          func_0x00102cb0(0,(ulong)uVar7,lVar13,puVar26);
          goto code_r0x001041d6;
        }
      }
      if (*(char *)(uVar15 + 0x1d) != '\0') {
        uVar7 = *(uint *)(lVar13 + 0x20);
        uVar8 = *(uint *)(lVar13 + 0x1c);
        *(undefined8 *)((long)alStack544 + lVar2 + lVar9 + lVar1 + 8) = 0x10410e;
        puVar22 = puVar26;
        iVar6 = func_0x00102c00(puVar26,(ulong)uVar8,(ulong)uVar7);
        if (iVar6 == 0) goto code_r0x0010403b;
        *(undefined8 *)((long)alStack544 + lVar2 + lVar9 + lVar1 + 8) = 0x10411e;
        uVar7 = chown_failure_ok(uVar15);
        uVar10 = (ulong)uVar7;
        if ((char)uVar7 != '\0') {
          uVar7 = *(uint *)(lVar13 + 0x20);
          *(undefined8 *)((long)alStack544 + lVar2 + lVar9 + lVar1 + 8) = 0x104139;
          puVar22 = puVar26;
          func_0x00102c00(puVar26,0xffffffff,(ulong)uVar7);
          cVar5 = *(char *)(uVar15 + 0x1e);
          goto joined_r0x00104141;
        }
        *(undefined8 *)((long)alStack544 + lVar2 + lVar9 + lVar1 + 8) = 0x104204;
        puVar26 = (undefined *)quotearg_style(4,puVar26);
        puVar22 = &UNK_001130f8;
code_r0x001041a7:
        *(undefined8 *)((long)alStack544 + lVar2 + lVar9 + lVar1 + 8) = 0x1041ae;
        lVar13 = func_0x001028e0(0,puVar22,5);
        *(undefined8 *)((long)alStack544 + lVar2 + lVar9 + lVar1 + 8) = 0x1041b6;
        puVar12 = (uint *)func_0x00102770();
        uVar7 = *puVar12;
        puVar22 = (undefined *)0x0;
        *(undefined8 *)((long)alStack544 + lVar2 + lVar9 + lVar1 + 8) = 0x1041c7;
        func_0x00102cb0(0,(ulong)uVar7,lVar13,puVar26);
        goto code_r0x001041d6;
      }
code_r0x0010403b:
      cVar5 = *(char *)(uVar15 + 0x1e);
joined_r0x00104141:
      if (cVar5 == '\0') {
        uVar10 = 0;
        if (*(char *)(lVar13 + 0x90) != '\0') {
          *(undefined8 *)((long)alStack544 + lVar2 + lVar9 + lVar1 + 8) = 0x104183;
          puVar22 = puVar26;
          iVar6 = func_0x00102c90();
          if (iVar6 != 0) {
            *(undefined8 *)((long)alStack544 + lVar2 + lVar9 + lVar1 + 8) = 0x104198;
            puVar26 = (undefined *)quotearg_style(4,puVar26);
            puVar22 = &UNK_00113120;
            goto code_r0x001041a7;
          }
        }
      }
      else {
        uVar7 = *(uint *)(lVar13 + 0x18);
        puVar22 = *(undefined **)((long)&pcStack520 + lVar9 + lVar1);
        *(undefined8 *)((long)alStack544 + lVar2 + lVar9 + lVar1 + 8) = 0x104167;
        iVar6 = copy_acl(puVar22,0xffffffff,puVar26,0xffffffff,(ulong)uVar7);
        if (iVar6 != 0) {
          uVar10 = 0;
          goto code_r0x001041d6;
        }
      }
      puVar26[*(long *)(lVar13 + 0x98)] = 0x2f;
      lVar13 = *(long *)(lVar13 + 0xa0);
    } while (lVar13 != 0);
  }
  uVar10 = 1;
code_r0x001041d6:
  if (*(long *)((long)alStack512 + lVar9 + lVar1 + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar10;
  }
  *(undefined8 *)((long)alStack544 + lVar2 + lVar9 + lVar1 + 8) = 0x10421a;
  func_0x00102930();
  puVar19 = program_name;
  *(ulong *)((long)alStack544 + lVar2 + lVar9 + lVar1 + 8) = uVar15;
  *(undefined **)((long)alStack544 + lVar2 + lVar9 + lVar1) = puVar26;
  uVar16 = 5;
  *(long *)(auStack552 + lVar2 + lVar9 + lVar1) = (long)&puStack416 + lVar9 + lVar1;
  *(long *)((long)&lStack560 + lVar2 + lVar9 + lVar1) = lVar13;
  *(undefined8 *)((long)apbStack704 + lVar2 + lVar9 + lVar1 + 0x80) =
       *(undefined8 *)(in_FS_OFFSET + 0x28);
  if ((int)puVar22 == 0) goto code_r0x0010427d;
  *(undefined8 *)((long)apbStack704 + lVar2 + lVar9 + lVar1) = 0x10425d;
  uVar16 = func_0x001028e0(0,&UNK_00113148,5);
  *(undefined8 *)((long)apbStack704 + lVar2 + lVar9 + lVar1) = 0x104276;
  func_0x00102db0(stderr,1,uVar16,puVar19);
  do {
    *(undefined8 *)((long)apbStack704 + lVar2 + lVar9 + lVar1) = 0x10427d;
    func_0x00102d90((ulong)puVar22 & 0xffffffff);
    uVar16 = extraout_RDX_00;
code_r0x0010427d:
    *(undefined8 *)((long)apbStack704 + lVar2 + lVar9 + lVar1) = 0x10428b;
    uVar16 = func_0x001028e0(0,&UNK_00113170,uVar16);
    *(undefined8 *)((long)apbStack704 + lVar2 + lVar9 + lVar1) = 0x1042a3;
    func_0x00102c60(1,uVar16,puVar19,puVar19,puVar19);
    uVar16 = stdout;
    *(undefined8 *)((long)apbStack704 + lVar2 + lVar9 + lVar1) = 0x1042bd;
    uVar14 = func_0x001028e0(0,&UNK_001131f0,5);
    *(undefined8 *)((long)apbStack704 + lVar2 + lVar9 + lVar1) = 0x1042c8;
    func_0x00102ab0(uVar14,uVar16);
    uVar16 = stdout;
    *(undefined8 *)((long)apbStack704 + lVar2 + lVar9 + lVar1) = 0x1042e2;
    uVar14 = func_0x001028e0(0,&UNK_00113230,5);
    *(undefined8 *)((long)apbStack704 + lVar2 + lVar9 + lVar1) = 0x1042ed;
    func_0x00102ab0(uVar14,uVar16);
    uVar16 = stdout;
    *(undefined8 *)((long)apbStack704 + lVar2 + lVar9 + lVar1) = 0x104307;
    uVar14 = func_0x001028e0(0,&UNK_00113280,5);
    *(undefined8 *)((long)apbStack704 + lVar2 + lVar9 + lVar1) = 0x104312;
    func_0x00102ab0(uVar14,uVar16);
    uVar16 = stdout;
    *(undefined8 *)((long)apbStack704 + lVar2 + lVar9 + lVar1) = 0x10432c;
    uVar14 = func_0x001028e0(0,&UNK_00113440,5);
    *(undefined8 *)((long)apbStack704 + lVar2 + lVar9 + lVar1) = 0x104337;
    func_0x00102ab0(uVar14,uVar16);
    uVar16 = stdout;
    *(undefined8 *)((long)apbStack704 + lVar2 + lVar9 + lVar1) = 0x104351;
    uVar14 = func_0x001028e0(0,&UNK_001135f0,5);
    *(undefined8 *)((long)apbStack704 + lVar2 + lVar9 + lVar1) = 0x10435c;
    func_0x00102ab0(uVar14,uVar16);
    uVar16 = stdout;
    *(undefined8 *)((long)apbStack704 + lVar2 + lVar9 + lVar1) = 0x104376;
    uVar14 = func_0x001028e0(0,&UNK_00113680,5);
    *(undefined8 *)((long)apbStack704 + lVar2 + lVar9 + lVar1) = 0x104381;
    func_0x00102ab0(uVar14,uVar16);
    uVar16 = stdout;
    *(undefined8 *)((long)apbStack704 + lVar2 + lVar9 + lVar1) = 0x10439b;
    uVar14 = func_0x001028e0(0,&UNK_00113750,5);
    *(undefined8 *)((long)apbStack704 + lVar2 + lVar9 + lVar1) = 0x1043a6;
    func_0x00102ab0(uVar14,uVar16);
    uVar16 = stdout;
    *(undefined8 *)((long)apbStack704 + lVar2 + lVar9 + lVar1) = 0x1043c0;
    uVar14 = func_0x001028e0(0,&UNK_001138a8,5);
    *(undefined8 *)((long)apbStack704 + lVar2 + lVar9 + lVar1) = 0x1043cb;
    func_0x00102ab0(uVar14,uVar16);
    uVar16 = stdout;
    *(undefined8 *)((long)apbStack704 + lVar2 + lVar9 + lVar1) = 0x1043e5;
    uVar14 = func_0x001028e0(0,&UNK_00113940,5);
    *(undefined8 *)((long)apbStack704 + lVar2 + lVar9 + lVar1) = 0x1043f0;
    func_0x00102ab0(uVar14,uVar16);
    uVar16 = stdout;
    *(undefined8 *)((long)apbStack704 + lVar2 + lVar9 + lVar1) = 0x10440a;
    uVar14 = func_0x001028e0(0,&UNK_00113a60,5);
    *(undefined8 *)((long)apbStack704 + lVar2 + lVar9 + lVar1) = 0x104415;
    func_0x00102ab0(uVar14,uVar16);
    uVar16 = stdout;
    *(undefined8 *)((long)apbStack704 + lVar2 + lVar9 + lVar1) = 0x10442f;
    uVar14 = func_0x001028e0(0,&UNK_00113b28,5);
    *(undefined8 *)((long)apbStack704 + lVar2 + lVar9 + lVar1) = 0x10443a;
    func_0x00102ab0(uVar14,uVar16);
    uVar16 = stdout;
    *(undefined8 *)((long)apbStack704 + lVar2 + lVar9 + lVar1) = 0x104454;
    uVar14 = func_0x001028e0(0,&UNK_00113c38,5);
    *(undefined8 *)((long)apbStack704 + lVar2 + lVar9 + lVar1) = 0x10445f;
    func_0x00102ab0(uVar14,uVar16);
    uVar16 = stdout;
    *(undefined8 *)((long)apbStack704 + lVar2 + lVar9 + lVar1) = 0x104479;
    uVar14 = func_0x001028e0(0,&UNK_00113d78,5);
    *(undefined8 *)((long)apbStack704 + lVar2 + lVar9 + lVar1) = 0x104484;
    func_0x00102ab0(uVar14,uVar16);
    uVar16 = stdout;
    *(undefined8 *)((long)apbStack704 + lVar2 + lVar9 + lVar1) = 0x10449e;
    uVar14 = func_0x001028e0(0,&UNK_00113e90,5);
    *(undefined8 *)((long)apbStack704 + lVar2 + lVar9 + lVar1) = 0x1044a9;
    func_0x00102ab0(uVar14,uVar16);
    uVar16 = stdout;
    *(undefined8 *)((long)apbStack704 + lVar2 + lVar9 + lVar1) = 0x1044c3;
    uVar14 = func_0x001028e0(0,&UNK_00113ec0,5);
    *(undefined8 *)((long)apbStack704 + lVar2 + lVar9 + lVar1) = 0x1044ce;
    func_0x00102ab0(uVar14,uVar16);
    uVar16 = stdout;
    *(undefined8 *)((long)apbStack704 + lVar2 + lVar9 + lVar1) = 0x1044e8;
    uVar14 = func_0x001028e0(0,&UNK_00113ef8,5);
    *(undefined8 *)((long)apbStack704 + lVar2 + lVar9 + lVar1) = 0x1044f3;
    func_0x00102ab0(uVar14,uVar16);
    uVar16 = stdout;
    *(undefined8 *)((long)apbStack704 + lVar2 + lVar9 + lVar1) = 0x10450d;
    uVar14 = func_0x001028e0(0,&UNK_00114060,5);
    *(undefined8 *)((long)apbStack704 + lVar2 + lVar9 + lVar1) = 0x104518;
    func_0x00102ab0(uVar14,uVar16);
    uVar16 = stdout;
    *(undefined8 *)((long)apbStack704 + lVar2 + lVar9 + lVar1) = 0x104532;
    uVar14 = func_0x001028e0(0,&UNK_00114180,5);
    *(undefined8 *)((long)apbStack704 + lVar2 + lVar9 + lVar1) = 0x10453d;
    func_0x00102ab0(uVar14,uVar16);
    uVar16 = stdout;
    *(undefined8 *)((long)apbStack704 + lVar2 + lVar9 + lVar1) = 0x104557;
    uVar14 = func_0x001028e0(0,&UNK_00114260,5);
    *(undefined8 *)((long)apbStack704 + lVar2 + lVar9 + lVar1) = 0x104562;
    func_0x00102ab0(uVar14,uVar16);
    uVar16 = stdout;
    *(undefined8 *)((long)apbStack704 + lVar2 + lVar9 + lVar1) = 0x10457c;
    uVar14 = func_0x001028e0(0,&UNK_00114340,5);
    *(undefined8 *)((long)apbStack704 + lVar2 + lVar9 + lVar1) = 0x10458e;
    func_0x00102ab0(uVar14,uVar16);
    *(undefined8 *)((long)apbStack704 + lVar2 + lVar9 + lVar1 + 0x68) = 0;
    *(undefined8 *)((long)apbStack704 + lVar2 + lVar9 + lVar1 + 0x70) = 0;
    *(undefined8 *)((long)apbStack704 + lVar2 + lVar9 + lVar1 + 8) = 0x112948;
    *(undefined8 *)((long)apbStack704 + lVar2 + lVar9 + lVar1 + 0x38) = 0x112989;
    *(undefined8 *)((long)apbStack704 + lVar2 + lVar9 + lVar1 + 0x10) = 0x11294a;
    *(undefined8 *)((long)apbStack704 + lVar2 + lVar9 + lVar1 + 0x48) = 0x112993;
    *(undefined8 *)((long)apbStack704 + lVar2 + lVar9 + lVar1 + 0x18) = 0x1129c2;
    *(undefined8 *)((long)apbStack704 + lVar2 + lVar9 + lVar1 + 0x58) = 0x11299d;
    *(undefined8 *)((long)apbStack704 + lVar2 + lVar9 + lVar1 + 0x20) = 0x11295a;
    *(undefined8 *)((long)apbStack704 + lVar2 + lVar9 + lVar1 + 0x28) = 0x112970;
    *(undefined8 *)((long)apbStack704 + lVar2 + lVar9 + lVar1 + 0x30) = 0x11297a;
    *(undefined8 *)((long)apbStack704 + lVar2 + lVar9 + lVar1 + 0x40) = 0x11297a;
    *(undefined8 *)((long)apbStack704 + lVar2 + lVar9 + lVar1 + 0x50) = 0x11297a;
    *(undefined8 *)((long)apbStack704 + lVar2 + lVar9 + lVar1 + 0x60) = 0x11297a;
    ppbVar17 = (byte **)((long)apbStack704 + lVar2 + lVar9 + lVar1 + 8);
    do {
      ppbVar17 = ppbVar17;
      ppbVar17 = ppbVar17 + 2;
      pbVar27 = *ppbVar17;
      bVar28 = false;
      bVar29 = pbVar27 == (byte *)0x0;
      if (bVar29) break;
      lVar13 = 3;
      pbVar23 = &UNK_00112945;
      do {
        if (lVar13 == 0) break;
        lVar13 = lVar13 + -1;
        bVar28 = *pbVar23 < *pbVar27;
        bVar29 = *pbVar23 == *pbVar27;
        pbVar23 = pbVar23 + (ulong)bVar30 * -2 + 1;
        pbVar27 = pbVar27 + (ulong)bVar30 * -2 + 1;
      } while (bVar29);
    } while ((!bVar28 && !bVar29) != bVar28);
    pbVar27 = ppbVar17[3];
    if (pbVar27 == (byte *)0x0) {
      *(undefined8 *)((long)apbStack704 + lVar2 + lVar9 + lVar1) = 0x104720;
      uVar16 = func_0x001028e0(0,&UNK_001129a7,5);
      *(undefined8 *)((long)apbStack704 + lVar2 + lVar9 + lVar1) = 0x10473d;
      func_0x00102c60(1,uVar16,&UNK_001129be,&UNK_001143e8);
      *(undefined8 *)((long)apbStack704 + lVar2 + lVar9 + lVar1) = 0x104749;
      lVar13 = func_0x00102c50(5,0);
      if (lVar13 != 0) {
        *(undefined8 *)((long)apbStack704 + lVar2 + lVar9 + lVar1) = 0x104762;
        iVar6 = func_0x00102790(lVar13,&UNK_001129cc,3);
        if (iVar6 != 0) {
          pbVar27 = &UNK_00112945;
          goto code_r0x001047b0;
        }
      }
      pbVar27 = &UNK_00112945;
      puVar19 = &UNK_00112964;
      *(undefined8 *)((long)apbStack704 + lVar2 + lVar9 + lVar1) = 0x104787;
      uVar16 = func_0x001028e0(0,&UNK_001129d0,5);
      *(undefined8 *)((long)apbStack704 + lVar2 + lVar9 + lVar1) = 0x1047a4;
      func_0x00102c60(1,uVar16,&UNK_001143e8,&UNK_00112945);
    }
    else {
      *(undefined8 *)((long)apbStack704 + lVar2 + lVar9 + lVar1) = 0x10465f;
      uVar16 = func_0x001028e0(0,&UNK_001129a7,5);
      *(undefined8 *)((long)apbStack704 + lVar2 + lVar9 + lVar1) = 0x10467c;
      func_0x00102c60(1,uVar16,&UNK_001129be,&UNK_001143e8);
      *(undefined8 *)((long)apbStack704 + lVar2 + lVar9 + lVar1) = 0x104688;
      lVar13 = func_0x00102c50(5,0);
      if (lVar13 != 0) {
        *(undefined8 *)((long)apbStack704 + lVar2 + lVar9 + lVar1) = 0x1046a1;
        iVar6 = func_0x00102790(lVar13,&UNK_001129cc,3);
        if (iVar6 != 0) {
code_r0x001047b0:
          uVar16 = stdout;
          *(undefined8 *)((long)apbStack704 + lVar2 + lVar9 + lVar1) = 0x1047ca;
          uVar14 = func_0x001028e0(0,&UNK_00114410,5);
          *(undefined8 *)((long)apbStack704 + lVar2 + lVar9 + lVar1) = 0x1047d5;
          func_0x00102ab0(uVar14,uVar16);
        }
      }
      *(undefined8 *)((long)apbStack704 + lVar2 + lVar9 + lVar1) = 0x1046bc;
      uVar16 = func_0x001028e0(0,&UNK_001129d0,5);
      *(undefined8 *)((long)apbStack704 + lVar2 + lVar9 + lVar1) = 0x1046d9;
      func_0x00102c60(1,uVar16,&UNK_001143e8,&UNK_00112945);
      puVar19 = &UNK_00115046;
      if (pbVar27 == &UNK_00112945) {
        puVar19 = &UNK_00112964;
      }
    }
    *(undefined8 *)((long)apbStack704 + lVar2 + lVar9 + lVar1) = 0x104701;
    uVar16 = func_0x001028e0(0,&UNK_00114458,5);
    *(undefined8 *)((long)apbStack704 + lVar2 + lVar9 + lVar1) = 0x104716;
    func_0x00102c60(1,uVar16,pbVar27,puVar19);
  } while( true );
}

