
/* WARNING: Could not reconcile some variable overlaps */

ulong target_directory_operand
                (undefined *param_1,long param_2,undefined *param_3,ulong param_4,char *param_5,
                long param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined auVar4 [16];
  char cVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long extraout_RDX;
  long extraout_RDX_00;
  undefined8 extraout_RDX_01;
  byte **ppbVar17;
  undefined *puVar18;
  undefined4 *puVar19;
  char *pcVar20;
  char *pcVar21;
  byte *pbVar22;
  undefined8 uVar23;
  char *pcVar24;
  char *pcVar25;
  byte *pbVar26;
  ulong uVar27;
  long in_FS_OFFSET;
  bool bVar28;
  bool bVar29;
  byte bVar30;
  byte *apbStack744 [18];
  long lStack600;
  undefined auStack592 [8];
  ulong auStack584 [3];
  char *pcStack560;
  long alStack552 [8];
  char *pcStack488;
  long alStack480 [3];
  undefined *puStack456;
  long lStack448;
  undefined *puStack440;
  ulong *puStack432;
  char *pcStack424;
  undefined8 uStack416;
  char *pcStack408;
  undefined auStack400 [24];
  uint uStack376;
  undefined auStack256 [16];
  undefined8 uStack240;
  uint uStack232;
  undefined4 uStack228;
  undefined auStack224 [16];
  undefined auStack208 [16];
  undefined auStack192 [16];
  undefined auStack176 [16];
  undefined auStack160 [16];
  undefined auStack144 [16];
  undefined auStack128 [16];
  ulong uStack104;
  ulong *puStack88;
  ulong uStack80;
  ulong uStack72;
  undefined *puStack64;
  undefined *puStack48;
  
  bVar30 = 0;
  uStack72 = param_4 & 0xffffffff;
  puStack48 = &UNK_00103954;
  uVar6 = func_0x00102ba0(1,param_1,param_2);
  if (uVar6 == 0) {
    if ((*(uint *)(param_2 + 0x18) & 0xf000) == 0x4000) {
      return 1;
    }
code_r0x00103969:
    return (ulong)(uVar6 & 1);
  }
  puStack48 = &UNK_0010397a;
  puVar9 = (uint *)func_0x00102770();
  uVar6 = *puVar9;
  uStack80 = (ulong)uVar6;
  if (uVar6 == 0) {
    uVar6 = (uint)((*(uint *)(param_2 + 0x18) & 0xf000) == 0x4000);
    goto code_r0x00103969;
  }
  if (uVar6 == 2) {
    *param_3 = 1;
    return 0;
  }
  if ((char)uStack72 != '\0') {
    *(undefined4 *)(param_2 + 0x18) = 0;
    return 0;
  }
  puStack48 = &UNK_001039c9;
  puStack88 = (ulong *)quotearg_style(4,param_1);
  puStack48 = &UNK_001039df;
  uVar10 = func_0x001028e0(0,&UNK_001128fd,5);
  puVar19 = (undefined4 *)(ulong)uVar6;
  uVar23 = 1;
  puStack48 = &UNK_001039f4;
  puStack432 = puStack88;
  func_0x00102cb0(1,puVar19,uVar10);
  uStack104 = *(ulong *)(in_FS_OFFSET + 0x28);
  puStack456 = &UNK_00103a46;
  lStack448 = extraout_RDX;
  pcStack424 = param_5;
  puStack64 = param_3;
  puStack48 = param_1;
  lVar11 = func_0x00102900();
  lVar1 = -(lVar11 + 0x1fU & 0xfffffffffffffff0);
  *(undefined **)((long)&puStack456 + lVar1) = 0x103a66;
  pcVar25 = (char *)func_0x00102b60((long *)((long)&lStack448 + lVar1),uVar23,lVar11 + 1);
  *(undefined **)((long)&puStack456 + lVar1) = 0x103a71;
  uVar12 = dir_len(pcVar25);
  lVar11 = -(uVar12 + 0x1f & 0xfffffffffffffff0);
  pcVar20 = (char *)((long)&lStack448 + lVar11 + lVar1);
  puVar18 = (undefined *)((long)&lStack448 + lVar11 + lVar1);
  *(undefined8 *)((long)&puStack456 + lVar11 + lVar1) = 0x103a96;
  func_0x00102b60((long)&lStack448 + lVar11 + lVar1,pcVar25,uVar12);
  *(undefined *)((long)&lStack448 + uVar12 + lVar11 + lVar1) = 0;
  pcVar24 = (char *)0x1;
  *puStack432 = 0;
  uStack416 = auStack400;
  *(undefined8 *)((long)&puStack456 + lVar11 + lVar1) = 0x103ac7;
  iVar7 = func_0x00102ba0(1,(long)&lStack448 + lVar11 + lVar1,auStack400);
  if (iVar7 == 0) {
    pcVar21 = (char *)((long)&lStack448 + lVar11 + lVar1);
    if ((uStack376 & 0xf000) != 0x4000) {
code_r0x00103ec6:
      *(undefined8 *)((long)&puStack456 + lVar11 + lVar1) = 0x103ed0;
      puVar18 = (undefined *)quotearg_style(4,pcVar21);
      *(undefined8 *)((long)&puStack456 + lVar11 + lVar1) = 0x103ee6;
      uVar10 = func_0x001028e0(0,&UNK_001130b0,5);
      pcVar20 = (char *)0x0;
      pcVar24 = (char *)0x0;
      *(undefined8 *)((long)&puStack456 + lVar11 + lVar1) = 0x103ef7;
      func_0x00102cb0(0,0,uVar10,puVar18);
      uVar10 = 0;
      goto code_r0x00103ea1;
    }
    *pcStack424 = '\0';
  }
  else {
    pcVar24 = pcVar25 + (long)puVar19;
    cVar5 = *pcVar24;
    pcStack408 = pcVar24;
    while (cVar5 == '/') {
      pcVar24 = pcVar24 + 1;
      cVar5 = *pcVar24;
    }
    puStack440 = auStack256;
    while( true ) {
      pcVar20 = (char *)0x2f;
      *(undefined8 *)((long)&puStack456 + lVar11 + lVar1) = 0x103b0a;
      puVar18 = (undefined *)func_0x00102970(pcVar24);
      puVar3 = uStack416;
      if (puVar18 == (undefined *)0x0) break;
      *puVar18 = 0;
      *(undefined8 *)((long)&puStack456 + lVar11 + lVar1) = 0x103b2d;
      uVar6 = func_0x00102ba0(1,pcVar25,puVar3);
      pcVar24 = pcStack408;
      puVar3 = puStack440;
      uVar12 = (ulong)uVar6;
      pcVar20 = pcVar25;
      if ((uVar6 != 0) || ((*(uint *)(param_6 + 0x1c) & 0xffffff00) != 0)) {
        *(undefined8 *)((long)&puStack456 + lVar11 + lVar1) = 0x103bd8;
        iVar7 = func_0x00102ba0(1,pcVar24,puVar3);
        if (iVar7 == 0) {
          if ((uStack232 & 0xf000) != 0x4000) {
            iVar7 = 0x14;
            goto code_r0x00103dcc;
          }
        }
        else {
          *(undefined8 *)((long)&puStack456 + lVar11 + lVar1) = 0x103be5;
          piVar13 = (int *)func_0x00102770();
          iVar7 = *piVar13;
          if (iVar7 != 0) {
code_r0x00103dcc:
            pcVar24 = pcStack408;
            uStack416 = (undefined *)CONCAT44(uStack416._4_4_,iVar7);
            *(undefined8 *)((long)&puStack456 + lVar11 + lVar1) = 0x103de4;
            puVar18 = (undefined *)quotearg_style(4,pcVar24);
            *(undefined8 *)((long)&puStack456 + lVar11 + lVar1) = 0x103dfa;
            uVar10 = func_0x001028e0(0,&UNK_00113090,5);
            pcVar20 = (char *)((ulong)uStack416 & 0xffffffff);
            pcVar24 = (char *)0x0;
            *(undefined8 *)((long)&puStack456 + lVar11 + lVar1) = 0x103e13;
            func_0x00102cb0(0,pcVar20,uVar10,puVar18);
            uVar10 = 0;
            goto code_r0x00103ea1;
          }
        }
        *(undefined8 *)((long)&puStack456 + lVar11 + lVar1) = 0x103bfb;
        puVar19 = (undefined4 *)xmalloc(0xa8);
        auVar4 = auStack128;
        pcVar24 = pcStack408;
        *puVar19 = SUB164(auStack256,0);
        puVar19[1] = SUB164(auStack256 >> 0x20,0);
        puVar19[2] = SUB164(auStack256 >> 0x40,0);
        puVar19[3] = SUB164(auStack256 >> 0x60,0);
        puVar19[4] = (int)uStack240;
        puVar19[5] = (int)((ulong)uStack240 >> 0x20);
        puVar19[6] = uStack232;
        puVar19[7] = uStack228;
        puVar19[8] = SUB164(auStack224,0);
        puVar19[9] = SUB164(auStack224 >> 0x20,0);
        puVar19[10] = SUB164(auStack224 >> 0x40,0);
        puVar19[0xb] = SUB164(auStack224 >> 0x60,0);
        puVar19[0xc] = SUB164(auStack208,0);
        puVar19[0xd] = SUB164(auStack208 >> 0x20,0);
        puVar19[0xe] = SUB164(auStack208 >> 0x40,0);
        puVar19[0xf] = SUB164(auStack208 >> 0x60,0);
        puVar19[0x10] = SUB164(auStack192,0);
        puVar19[0x11] = SUB164(auStack192 >> 0x20,0);
        puVar19[0x12] = SUB164(auStack192 >> 0x40,0);
        puVar19[0x13] = SUB164(auStack192 >> 0x60,0);
        puVar19[0x14] = SUB164(auStack176,0);
        puVar19[0x15] = SUB164(auStack176 >> 0x20,0);
        puVar19[0x16] = SUB164(auStack176 >> 0x40,0);
        puVar19[0x17] = SUB164(auStack176 >> 0x60,0);
        puVar19[0x18] = SUB164(auStack160,0);
        puVar19[0x19] = SUB164(auStack160 >> 0x20,0);
        puVar19[0x1a] = SUB164(auStack160 >> 0x40,0);
        puVar19[0x1b] = SUB164(auStack160 >> 0x60,0);
        puVar19[0x1c] = SUB164(auStack144,0);
        puVar19[0x1d] = SUB164(auStack144 >> 0x20,0);
        puVar19[0x1e] = SUB164(auStack144 >> 0x40,0);
        puVar19[0x1f] = SUB164(auStack144 >> 0x60,0);
        puVar19[0x20] = SUB164(auStack128,0);
        puVar19[0x21] = SUB164(auStack128 >> 0x20,0);
        puVar19[0x22] = SUB164(auStack128 >> 0x40,0);
        puVar19[0x23] = SUB164(auStack128 >> 0x60,0);
        *(undefined *)(puVar19 + 0x24) = 0;
        *(undefined **)(puVar19 + 0x26) = puVar18 + -(long)pcVar25;
        uVar16 = *puStack432;
        *(undefined4 **)puStack432 = puVar19;
        *(ulong *)(puVar19 + 0x28) = uVar16;
        if (uVar6 == 0) goto code_r0x00103b42;
        uVar6 = puVar19[6];
        *(undefined8 *)((long)&puStack456 + lVar11 + lVar1) = 0x103cad;
        cVar5 = set_process_security_ctx(SUB168(auVar4,0),pcVar24,pcVar25,(ulong)uVar6,1);
        if (cVar5 == '\0') {
code_r0x00103e65:
          uVar10 = 0;
        }
        else {
          uVar6 = puVar19[6];
          *pcStack424 = '\x01';
          if (*(char *)(param_6 + 0x1d) == '\0') {
            if (*(char *)(param_6 + 0x1e) == '\0') {
              uVar12 = 0;
              uVar8 = 0xfff;
            }
            else {
              uVar12 = (ulong)(uVar6 & 0x12);
              uVar8 = uVar6 & 0x12 ^ 0xfff;
            }
          }
          else {
            uVar12 = (ulong)(uVar6 & 0x3f);
            uVar8 = uVar6 & 0x3f ^ 0xfff;
          }
          if (*(char *)(param_6 + 0x20) != '\0') {
            uVar6 = 0x1ff;
          }
          *(undefined8 *)((long)&puStack456 + lVar11 + lVar1) = 0x103cf4;
          iVar7 = func_0x001027e0(pcVar25,(ulong)(uVar6 & uVar8),0x1ff);
          pcVar24 = pcStack408;
          lVar14 = lStack448;
          if (iVar7 == 0) {
            if (lStack448 != 0) {
              *(undefined8 *)((long)&puStack456 + lVar11 + lVar1) = 0x103d21;
              func_0x00102c60(1,lVar14,pcVar24,pcVar25);
            }
            puVar3 = uStack416;
            *(undefined8 *)((long)&puStack456 + lVar11 + lVar1) = 0x103d35;
            iVar7 = func_0x00102910(1,pcVar25,puVar3);
            if (iVar7 != 0) {
              *(undefined8 *)((long)&puStack456 + lVar11 + lVar1) = 0x103f8c;
              pcVar25 = (char *)quotearg_style(4,pcVar25);
              puVar18 = &UNK_00113090;
              goto code_r0x00103f50;
            }
            if (*(char *)(param_6 + 0x1e) == '\0') {
              if ((~uStack376 & (uint)uVar12) != 0) {
                *(undefined8 *)((long)&puStack456 + lVar11 + lVar1) = 0x103f05;
                uVar6 = cached_umask();
                uVar6 = (uint)uVar12 & ~uVar6;
                uVar12 = (ulong)uVar6;
                if ((~uStack376 & uVar6) == 0) goto code_r0x00103d57;
code_r0x00103d67:
                uVar12 = (ulong)(uVar6 | uStack376);
                *(undefined *)(puVar19 + 0x24) = 1;
                puVar19[6] = uVar6 | uStack376;
                goto code_r0x00103d76;
              }
code_r0x00103d57:
              uVar6 = (uint)uVar12;
              if ((uStack376 & 0x1c0) != 0x1c0) goto code_r0x00103d67;
            }
            else {
code_r0x00103d76:
              if ((uStack376 & 0x1c0) != 0x1c0) {
                *(undefined8 *)((long)&puStack456 + lVar11 + lVar1) = 0x103d92;
                iVar7 = func_0x00102c90(pcVar25);
                if (iVar7 != 0) {
                  *(undefined8 *)((long)&puStack456 + lVar11 + lVar1) = 0x103faa;
                  pcVar25 = (char *)quotearg_style(4,pcVar25);
                  puVar18 = &UNK_0011292a;
                  goto code_r0x00103f50;
                }
              }
            }
            if (*pcStack424 == '\0') goto code_r0x00103b80;
            goto code_r0x00103b94;
          }
          *(undefined8 *)((long)&puStack456 + lVar11 + lVar1) = 0x103f41;
          pcVar25 = (char *)quotearg_style(4,pcVar25);
          puVar18 = &UNK_00112911;
code_r0x00103f50:
          *(undefined8 *)((long)&puStack456 + lVar11 + lVar1) = 0x103f57;
          puVar18 = (undefined *)func_0x001028e0(0,puVar18,5);
          *(undefined8 *)((long)&puStack456 + lVar11 + lVar1) = 0x103f5f;
          puVar9 = (uint *)func_0x00102770();
          pcVar20 = (char *)(ulong)*puVar9;
          pcVar24 = (char *)0x0;
          *(undefined8 *)((long)&puStack456 + lVar11 + lVar1) = 0x103f70;
          func_0x00102cb0(0,pcVar20,puVar18,pcVar25);
          uVar10 = 0;
        }
        goto code_r0x00103ea1;
      }
code_r0x00103b42:
      pcVar24 = pcStack408;
      *(undefined8 *)((long)&puStack456 + lVar11 + lVar1) = 0x103b58;
      cVar5 = set_process_security_ctx(pcVar24,pcVar25,0,0);
      if (cVar5 == '\0') goto code_r0x00103e65;
      pcVar21 = pcVar25;
      if ((uStack376 & 0xf000) != 0x4000) goto code_r0x00103ec6;
      *pcStack424 = '\0';
code_r0x00103b80:
      if ((*(ulong *)(param_6 + 0x20) & 0xff000000ff00) != 0) {
        pcVar20 = (char *)(ulong)*(byte *)(param_6 + 0x25);
        *(undefined8 *)((long)&puStack456 + lVar11 + lVar1) = 0x103e52;
        pcVar24 = pcVar25;
        cVar5 = set_file_security_ctx(pcVar25,pcVar20,0);
        if ((cVar5 == '\0') && (*(char *)(param_6 + 0x26) != '\0')) goto code_r0x00103e65;
      }
code_r0x00103b94:
      cVar5 = puVar18[1];
      pcVar24 = puVar18 + 1;
      *puVar18 = 0x2f;
      while (cVar5 == '/') {
        pcVar24 = pcVar24 + 1;
        cVar5 = *pcVar24;
      }
    }
  }
  uVar10 = 1;
code_r0x00103ea1:
  uVar16 = uStack104 ^ *(ulong *)(in_FS_OFFSET + 0x28);
  if (uVar16 == 0) {
    return uVar10;
  }
  *(undefined8 *)((long)&puStack456 + lVar11 + lVar1) = 0x103fc0;
  func_0x00102930();
  *(undefined ***)((long)&puStack456 + lVar11 + lVar1) = &puStack48;
  *(undefined4 **)((long)alStack480 + lVar11 + lVar1 + 0x10) = puVar19;
  *(ulong *)((long)alStack480 + lVar11 + lVar1 + 8) = uVar12;
  *(long *)((long)alStack480 + lVar11 + lVar1) = param_6;
  *(char **)((long)&pcStack488 + lVar11 + lVar1) = pcVar25;
  *(undefined **)((long)alStack552 + lVar11 + lVar1 + 0x38) = puVar18;
  *(undefined8 *)((long)alStack552 + lVar11 + lVar1 + 0x28) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)((long)auStack584 + lVar11 + lVar1 + 8) = 0x103ff1;
  lVar14 = func_0x00102900();
  lVar2 = -(lVar14 + 0x1fU & 0xfffffffffffffff0);
  uVar12 = (long)&pcStack560 + lVar2 + lVar11 + lVar1;
  *(undefined8 *)((long)auStack584 + lVar2 + lVar11 + lVar1 + 8) = 0x104011;
  uVar15 = func_0x00102b60(uVar12,pcVar24,lVar14 + 1);
  *(char **)((long)&pcStack560 + lVar11 + lVar1) = pcVar20 + uVar15;
  lVar14 = extraout_RDX_00;
  if (extraout_RDX_00 != 0) {
    do {
      cVar5 = *(char *)(uVar16 + 0x1f);
      *(undefined *)(uVar15 + *(long *)(lVar14 + 0x98)) = 0;
      if (cVar5 != '\0') {
        uVar10 = *(undefined8 *)(lVar14 + 0x50);
        *(undefined8 *)((long)alStack552 + lVar11 + lVar1) = *(undefined8 *)(lVar14 + 0x48);
        *(undefined8 *)((long)alStack552 + lVar11 + lVar1 + 8) = uVar10;
        uVar10 = *(undefined8 *)(lVar14 + 0x60);
        *(undefined8 *)((long)alStack552 + lVar11 + lVar1 + 0x10) = *(undefined8 *)(lVar14 + 0x58);
        *(undefined8 *)((long)alStack552 + lVar11 + lVar1 + 0x18) = uVar10;
        *(undefined8 *)((long)auStack584 + lVar2 + lVar11 + lVar1 + 8) = 0x1040b0;
        uVar12 = uVar15;
        iVar7 = utimens(uVar15,(long)alStack552 + lVar11 + lVar1);
        if (iVar7 != 0) {
          uVar27 = 0;
          *(undefined8 *)((long)auStack584 + lVar2 + lVar11 + lVar1 + 8) = 0x1040c8;
          uVar15 = quotearg_style(4,uVar15);
          *(undefined8 *)((long)auStack584 + lVar2 + lVar11 + lVar1 + 8) = 0x1040de;
          lVar14 = func_0x001028e0(0,&UNK_001130d8,5);
          *(undefined8 *)((long)auStack584 + lVar2 + lVar11 + lVar1 + 8) = 0x1040e6;
          puVar9 = (uint *)func_0x00102770();
          uVar6 = *puVar9;
          uVar12 = 0;
          *(undefined8 *)((long)auStack584 + lVar2 + lVar11 + lVar1 + 8) = 0x1040f7;
          func_0x00102cb0(0,(ulong)uVar6,lVar14,uVar15);
          goto code_r0x001041d6;
        }
      }
      if (*(char *)(uVar16 + 0x1d) != '\0') {
        uVar6 = *(uint *)(lVar14 + 0x20);
        uVar8 = *(uint *)(lVar14 + 0x1c);
        *(undefined8 *)((long)auStack584 + lVar2 + lVar11 + lVar1 + 8) = 0x10410e;
        uVar12 = uVar15;
        iVar7 = func_0x00102c00(uVar15,(ulong)uVar8,(ulong)uVar6);
        if (iVar7 == 0) goto code_r0x0010403b;
        *(undefined8 *)((long)auStack584 + lVar2 + lVar11 + lVar1 + 8) = 0x10411e;
        uVar6 = chown_failure_ok(uVar16);
        uVar27 = (ulong)uVar6;
        if ((char)uVar6 != '\0') {
          uVar6 = *(uint *)(lVar14 + 0x20);
          *(undefined8 *)((long)auStack584 + lVar2 + lVar11 + lVar1 + 8) = 0x104139;
          uVar12 = uVar15;
          func_0x00102c00(uVar15,0xffffffff,(ulong)uVar6);
          cVar5 = *(char *)(uVar16 + 0x1e);
          goto joined_r0x00104141;
        }
        *(undefined8 *)((long)auStack584 + lVar2 + lVar11 + lVar1 + 8) = 0x104204;
        uVar15 = quotearg_style(4,uVar15);
        puVar18 = &UNK_001130f8;
code_r0x001041a7:
        *(undefined8 *)((long)auStack584 + lVar2 + lVar11 + lVar1 + 8) = 0x1041ae;
        lVar14 = func_0x001028e0(0,puVar18,5);
        *(undefined8 *)((long)auStack584 + lVar2 + lVar11 + lVar1 + 8) = 0x1041b6;
        puVar9 = (uint *)func_0x00102770();
        uVar6 = *puVar9;
        uVar12 = 0;
        *(undefined8 *)((long)auStack584 + lVar2 + lVar11 + lVar1 + 8) = 0x1041c7;
        func_0x00102cb0(0,(ulong)uVar6,lVar14,uVar15);
        goto code_r0x001041d6;
      }
code_r0x0010403b:
      cVar5 = *(char *)(uVar16 + 0x1e);
joined_r0x00104141:
      if (cVar5 == '\0') {
        uVar27 = 0;
        if (*(char *)(lVar14 + 0x90) != '\0') {
          *(undefined8 *)((long)auStack584 + lVar2 + lVar11 + lVar1 + 8) = 0x104183;
          uVar12 = uVar15;
          iVar7 = func_0x00102c90();
          if (iVar7 != 0) {
            *(undefined8 *)((long)auStack584 + lVar2 + lVar11 + lVar1 + 8) = 0x104198;
            uVar15 = quotearg_style(4,uVar15);
            puVar18 = &UNK_00113120;
            goto code_r0x001041a7;
          }
        }
      }
      else {
        uVar6 = *(uint *)(lVar14 + 0x18);
        uVar12 = *(ulong *)((long)&pcStack560 + lVar11 + lVar1);
        *(undefined8 *)((long)auStack584 + lVar2 + lVar11 + lVar1 + 8) = 0x104167;
        iVar7 = copy_acl(uVar12,0xffffffff,uVar15,0xffffffff,(ulong)uVar6);
        if (iVar7 != 0) {
          uVar27 = 0;
          goto code_r0x001041d6;
        }
      }
      *(undefined *)(uVar15 + *(long *)(lVar14 + 0x98)) = 0x2f;
      lVar14 = *(long *)(lVar14 + 0xa0);
    } while (lVar14 != 0);
  }
  uVar27 = 1;
code_r0x001041d6:
  if (*(long *)((long)alStack552 + lVar11 + lVar1 + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar27;
  }
  *(undefined8 *)((long)auStack584 + lVar2 + lVar11 + lVar1 + 8) = 0x10421a;
  func_0x00102930();
  puVar18 = program_name;
  *(ulong *)((long)auStack584 + lVar2 + lVar11 + lVar1 + 8) = uVar16;
  *(ulong *)((long)auStack584 + lVar2 + lVar11 + lVar1) = uVar15;
  uVar10 = 5;
  *(long *)(auStack592 + lVar2 + lVar11 + lVar1) = (long)&puStack456 + lVar11 + lVar1;
  *(long *)((long)&lStack600 + lVar2 + lVar11 + lVar1) = lVar14;
  *(undefined8 *)((long)apbStack744 + lVar2 + lVar11 + lVar1 + 0x80) =
       *(undefined8 *)(in_FS_OFFSET + 0x28);
  if ((int)uVar12 == 0) goto code_r0x0010427d;
  *(undefined8 *)((long)apbStack744 + lVar2 + lVar11 + lVar1) = 0x10425d;
  uVar10 = func_0x001028e0(0,&UNK_00113148,5);
  *(undefined8 *)((long)apbStack744 + lVar2 + lVar11 + lVar1) = 0x104276;
  func_0x00102db0(stderr,1,uVar10,puVar18);
  do {
    *(undefined8 *)((long)apbStack744 + lVar2 + lVar11 + lVar1) = 0x10427d;
    func_0x00102d90(uVar12 & 0xffffffff);
    uVar10 = extraout_RDX_01;
code_r0x0010427d:
    *(undefined8 *)((long)apbStack744 + lVar2 + lVar11 + lVar1) = 0x10428b;
    uVar10 = func_0x001028e0(0,&UNK_00113170,uVar10);
    *(undefined8 *)((long)apbStack744 + lVar2 + lVar11 + lVar1) = 0x1042a3;
    func_0x00102c60(1,uVar10,puVar18,puVar18,puVar18);
    uVar10 = stdout;
    *(undefined8 *)((long)apbStack744 + lVar2 + lVar11 + lVar1) = 0x1042bd;
    uVar23 = func_0x001028e0(0,&UNK_001131f0,5);
    *(undefined8 *)((long)apbStack744 + lVar2 + lVar11 + lVar1) = 0x1042c8;
    func_0x00102ab0(uVar23,uVar10);
    uVar10 = stdout;
    *(undefined8 *)((long)apbStack744 + lVar2 + lVar11 + lVar1) = 0x1042e2;
    uVar23 = func_0x001028e0(0,&UNK_00113230,5);
    *(undefined8 *)((long)apbStack744 + lVar2 + lVar11 + lVar1) = 0x1042ed;
    func_0x00102ab0(uVar23,uVar10);
    uVar10 = stdout;
    *(undefined8 *)((long)apbStack744 + lVar2 + lVar11 + lVar1) = 0x104307;
    uVar23 = func_0x001028e0(0,&UNK_00113280,5);
    *(undefined8 *)((long)apbStack744 + lVar2 + lVar11 + lVar1) = 0x104312;
    func_0x00102ab0(uVar23,uVar10);
    uVar10 = stdout;
    *(undefined8 *)((long)apbStack744 + lVar2 + lVar11 + lVar1) = 0x10432c;
    uVar23 = func_0x001028e0(0,&UNK_00113440,5);
    *(undefined8 *)((long)apbStack744 + lVar2 + lVar11 + lVar1) = 0x104337;
    func_0x00102ab0(uVar23,uVar10);
    uVar10 = stdout;
    *(undefined8 *)((long)apbStack744 + lVar2 + lVar11 + lVar1) = 0x104351;
    uVar23 = func_0x001028e0(0,&UNK_001135f0,5);
    *(undefined8 *)((long)apbStack744 + lVar2 + lVar11 + lVar1) = 0x10435c;
    func_0x00102ab0(uVar23,uVar10);
    uVar10 = stdout;
    *(undefined8 *)((long)apbStack744 + lVar2 + lVar11 + lVar1) = 0x104376;
    uVar23 = func_0x001028e0(0,&UNK_00113680,5);
    *(undefined8 *)((long)apbStack744 + lVar2 + lVar11 + lVar1) = 0x104381;
    func_0x00102ab0(uVar23,uVar10);
    uVar10 = stdout;
    *(undefined8 *)((long)apbStack744 + lVar2 + lVar11 + lVar1) = 0x10439b;
    uVar23 = func_0x001028e0(0,&UNK_00113750,5);
    *(undefined8 *)((long)apbStack744 + lVar2 + lVar11 + lVar1) = 0x1043a6;
    func_0x00102ab0(uVar23,uVar10);
    uVar10 = stdout;
    *(undefined8 *)((long)apbStack744 + lVar2 + lVar11 + lVar1) = 0x1043c0;
    uVar23 = func_0x001028e0(0,&UNK_001138a8,5);
    *(undefined8 *)((long)apbStack744 + lVar2 + lVar11 + lVar1) = 0x1043cb;
    func_0x00102ab0(uVar23,uVar10);
    uVar10 = stdout;
    *(undefined8 *)((long)apbStack744 + lVar2 + lVar11 + lVar1) = 0x1043e5;
    uVar23 = func_0x001028e0(0,&UNK_00113940,5);
    *(undefined8 *)((long)apbStack744 + lVar2 + lVar11 + lVar1) = 0x1043f0;
    func_0x00102ab0(uVar23,uVar10);
    uVar10 = stdout;
    *(undefined8 *)((long)apbStack744 + lVar2 + lVar11 + lVar1) = 0x10440a;
    uVar23 = func_0x001028e0(0,&UNK_00113a60,5);
    *(undefined8 *)((long)apbStack744 + lVar2 + lVar11 + lVar1) = 0x104415;
    func_0x00102ab0(uVar23,uVar10);
    uVar10 = stdout;
    *(undefined8 *)((long)apbStack744 + lVar2 + lVar11 + lVar1) = 0x10442f;
    uVar23 = func_0x001028e0(0,&UNK_00113b28,5);
    *(undefined8 *)((long)apbStack744 + lVar2 + lVar11 + lVar1) = 0x10443a;
    func_0x00102ab0(uVar23,uVar10);
    uVar10 = stdout;
    *(undefined8 *)((long)apbStack744 + lVar2 + lVar11 + lVar1) = 0x104454;
    uVar23 = func_0x001028e0(0,&UNK_00113c38,5);
    *(undefined8 *)((long)apbStack744 + lVar2 + lVar11 + lVar1) = 0x10445f;
    func_0x00102ab0(uVar23,uVar10);
    uVar10 = stdout;
    *(undefined8 *)((long)apbStack744 + lVar2 + lVar11 + lVar1) = 0x104479;
    uVar23 = func_0x001028e0(0,&UNK_00113d78,5);
    *(undefined8 *)((long)apbStack744 + lVar2 + lVar11 + lVar1) = 0x104484;
    func_0x00102ab0(uVar23,uVar10);
    uVar10 = stdout;
    *(undefined8 *)((long)apbStack744 + lVar2 + lVar11 + lVar1) = 0x10449e;
    uVar23 = func_0x001028e0(0,&UNK_00113e90,5);
    *(undefined8 *)((long)apbStack744 + lVar2 + lVar11 + lVar1) = 0x1044a9;
    func_0x00102ab0(uVar23,uVar10);
    uVar10 = stdout;
    *(undefined8 *)((long)apbStack744 + lVar2 + lVar11 + lVar1) = 0x1044c3;
    uVar23 = func_0x001028e0(0,&UNK_00113ec0,5);
    *(undefined8 *)((long)apbStack744 + lVar2 + lVar11 + lVar1) = 0x1044ce;
    func_0x00102ab0(uVar23,uVar10);
    uVar10 = stdout;
    *(undefined8 *)((long)apbStack744 + lVar2 + lVar11 + lVar1) = 0x1044e8;
    uVar23 = func_0x001028e0(0,&UNK_00113ef8,5);
    *(undefined8 *)((long)apbStack744 + lVar2 + lVar11 + lVar1) = 0x1044f3;
    func_0x00102ab0(uVar23,uVar10);
    uVar10 = stdout;
    *(undefined8 *)((long)apbStack744 + lVar2 + lVar11 + lVar1) = 0x10450d;
    uVar23 = func_0x001028e0(0,&UNK_00114060,5);
    *(undefined8 *)((long)apbStack744 + lVar2 + lVar11 + lVar1) = 0x104518;
    func_0x00102ab0(uVar23,uVar10);
    uVar10 = stdout;
    *(undefined8 *)((long)apbStack744 + lVar2 + lVar11 + lVar1) = 0x104532;
    uVar23 = func_0x001028e0(0,&UNK_00114180,5);
    *(undefined8 *)((long)apbStack744 + lVar2 + lVar11 + lVar1) = 0x10453d;
    func_0x00102ab0(uVar23,uVar10);
    uVar10 = stdout;
    *(undefined8 *)((long)apbStack744 + lVar2 + lVar11 + lVar1) = 0x104557;
    uVar23 = func_0x001028e0(0,&UNK_00114260,5);
    *(undefined8 *)((long)apbStack744 + lVar2 + lVar11 + lVar1) = 0x104562;
    func_0x00102ab0(uVar23,uVar10);
    uVar10 = stdout;
    *(undefined8 *)((long)apbStack744 + lVar2 + lVar11 + lVar1) = 0x10457c;
    uVar23 = func_0x001028e0(0,&UNK_00114340,5);
    *(undefined8 *)((long)apbStack744 + lVar2 + lVar11 + lVar1) = 0x10458e;
    func_0x00102ab0(uVar23,uVar10);
    *(undefined8 *)((long)apbStack744 + lVar2 + lVar11 + lVar1 + 0x68) = 0;
    *(undefined8 *)((long)apbStack744 + lVar2 + lVar11 + lVar1 + 0x70) = 0;
    *(undefined8 *)((long)apbStack744 + lVar2 + lVar11 + lVar1 + 8) = 0x112948;
    *(undefined8 *)((long)apbStack744 + lVar2 + lVar11 + lVar1 + 0x38) = 0x112989;
    *(undefined8 *)((long)apbStack744 + lVar2 + lVar11 + lVar1 + 0x10) = 0x11294a;
    *(undefined8 *)((long)apbStack744 + lVar2 + lVar11 + lVar1 + 0x48) = 0x112993;
    *(undefined8 *)((long)apbStack744 + lVar2 + lVar11 + lVar1 + 0x18) = 0x1129c2;
    *(undefined8 *)((long)apbStack744 + lVar2 + lVar11 + lVar1 + 0x58) = 0x11299d;
    *(undefined8 *)((long)apbStack744 + lVar2 + lVar11 + lVar1 + 0x20) = 0x11295a;
    *(undefined8 *)((long)apbStack744 + lVar2 + lVar11 + lVar1 + 0x28) = 0x112970;
    *(undefined8 *)((long)apbStack744 + lVar2 + lVar11 + lVar1 + 0x30) = 0x11297a;
    *(undefined8 *)((long)apbStack744 + lVar2 + lVar11 + lVar1 + 0x40) = 0x11297a;
    *(undefined8 *)((long)apbStack744 + lVar2 + lVar11 + lVar1 + 0x50) = 0x11297a;
    *(undefined8 *)((long)apbStack744 + lVar2 + lVar11 + lVar1 + 0x60) = 0x11297a;
    ppbVar17 = (byte **)((long)apbStack744 + lVar2 + lVar11 + lVar1 + 8);
    do {
      ppbVar17 = ppbVar17;
      ppbVar17 = ppbVar17 + 2;
      pbVar26 = *ppbVar17;
      bVar28 = false;
      bVar29 = pbVar26 == (byte *)0x0;
      if (bVar29) break;
      lVar14 = 3;
      pbVar22 = &UNK_00112945;
      do {
        if (lVar14 == 0) break;
        lVar14 = lVar14 + -1;
        bVar28 = *pbVar22 < *pbVar26;
        bVar29 = *pbVar22 == *pbVar26;
        pbVar22 = pbVar22 + (ulong)bVar30 * -2 + 1;
        pbVar26 = pbVar26 + (ulong)bVar30 * -2 + 1;
      } while (bVar29);
    } while ((!bVar28 && !bVar29) != bVar28);
    pbVar26 = ppbVar17[3];
    if (pbVar26 == (byte *)0x0) {
      *(undefined8 *)((long)apbStack744 + lVar2 + lVar11 + lVar1) = 0x104720;
      uVar10 = func_0x001028e0(0,&UNK_001129a7,5);
      *(undefined8 *)((long)apbStack744 + lVar2 + lVar11 + lVar1) = 0x10473d;
      func_0x00102c60(1,uVar10,&UNK_001129be,&UNK_001143e8);
      *(undefined8 *)((long)apbStack744 + lVar2 + lVar11 + lVar1) = 0x104749;
      lVar14 = func_0x00102c50(5,0);
      if (lVar14 != 0) {
        *(undefined8 *)((long)apbStack744 + lVar2 + lVar11 + lVar1) = 0x104762;
        iVar7 = func_0x00102790(lVar14,&UNK_001129cc,3);
        if (iVar7 != 0) {
          pbVar26 = &UNK_00112945;
          goto code_r0x001047b0;
        }
      }
      pbVar26 = &UNK_00112945;
      puVar18 = &UNK_00112964;
      *(undefined8 *)((long)apbStack744 + lVar2 + lVar11 + lVar1) = 0x104787;
      uVar10 = func_0x001028e0(0,&UNK_001129d0,5);
      *(undefined8 *)((long)apbStack744 + lVar2 + lVar11 + lVar1) = 0x1047a4;
      func_0x00102c60(1,uVar10,&UNK_001143e8,&UNK_00112945);
    }
    else {
      *(undefined8 *)((long)apbStack744 + lVar2 + lVar11 + lVar1) = 0x10465f;
      uVar10 = func_0x001028e0(0,&UNK_001129a7,5);
      *(undefined8 *)((long)apbStack744 + lVar2 + lVar11 + lVar1) = 0x10467c;
      func_0x00102c60(1,uVar10,&UNK_001129be,&UNK_001143e8);
      *(undefined8 *)((long)apbStack744 + lVar2 + lVar11 + lVar1) = 0x104688;
      lVar14 = func_0x00102c50(5,0);
      if (lVar14 != 0) {
        *(undefined8 *)((long)apbStack744 + lVar2 + lVar11 + lVar1) = 0x1046a1;
        iVar7 = func_0x00102790(lVar14,&UNK_001129cc,3);
        if (iVar7 != 0) {
code_r0x001047b0:
          uVar10 = stdout;
          *(undefined8 *)((long)apbStack744 + lVar2 + lVar11 + lVar1) = 0x1047ca;
          uVar23 = func_0x001028e0(0,&UNK_00114410,5);
          *(undefined8 *)((long)apbStack744 + lVar2 + lVar11 + lVar1) = 0x1047d5;
          func_0x00102ab0(uVar23,uVar10);
        }
      }
      *(undefined8 *)((long)apbStack744 + lVar2 + lVar11 + lVar1) = 0x1046bc;
      uVar10 = func_0x001028e0(0,&UNK_001129d0,5);
      *(undefined8 *)((long)apbStack744 + lVar2 + lVar11 + lVar1) = 0x1046d9;
      func_0x00102c60(1,uVar10,&UNK_001143e8,&UNK_00112945);
      puVar18 = &UNK_00115046;
      if (pbVar26 == &UNK_00112945) {
        puVar18 = &UNK_00112964;
      }
    }
    *(undefined8 *)((long)apbStack744 + lVar2 + lVar11 + lVar1) = 0x104701;
    uVar10 = func_0x001028e0(0,&UNK_00114458,5);
    *(undefined8 *)((long)apbStack744 + lVar2 + lVar11 + lVar1) = 0x104716;
    func_0x00102c60(1,uVar10,pbVar26,puVar18);
  } while( true );
}

