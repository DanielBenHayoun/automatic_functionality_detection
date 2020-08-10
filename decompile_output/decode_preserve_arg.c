
/* WARNING: Could not reconcile some variable overlaps */

ulong decode_preserve_arg(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  ulong *puVar2;
  undefined auVar3 [16];
  char cVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  uint *puVar10;
  ulong uVar11;
  int *piVar12;
  long lVar13;
  ulong uVar14;
  undefined *extraout_RDX;
  long extraout_RDX_00;
  long extraout_RDX_01;
  undefined8 extraout_RDX_02;
  byte **ppbVar15;
  char *pcVar16;
  undefined *puVar17;
  long lVar18;
  undefined4 *puVar19;
  char *pcVar20;
  char *pcVar21;
  undefined *puVar22;
  byte *pbVar23;
  undefined *puVar24;
  undefined8 uVar25;
  char *pcVar26;
  char *pcVar27;
  byte *pbVar28;
  long in_FS_OFFSET;
  bool bVar29;
  bool bVar30;
  byte bVar31;
  byte *apbStack816 [18];
  long lStack672;
  undefined auStack664 [8];
  long alStack656 [2];
  undefined auStack640 [8];
  char *pcStack632;
  long alStack624 [7];
  char *apcStack568 [2];
  long alStack552 [3];
  undefined *puStack528;
  long lStack520;
  ulong *puStack512;
  ulong *puStack504;
  char *pcStack496;
  undefined8 uStack488;
  char *pcStack480;
  undefined auStack472 [24];
  uint uStack448;
  undefined auStack328 [16];
  undefined8 uStack312;
  uint uStack304;
  undefined4 uStack300;
  undefined auStack296 [16];
  undefined auStack280 [16];
  undefined auStack264 [16];
  undefined auStack248 [16];
  undefined auStack232 [16];
  undefined auStack216 [16];
  undefined auStack200 [16];
  ulong uStack176;
  ulong *puStack160;
  ulong uStack152;
  ulong uStack144;
  undefined *puStack136;
  long lStack128;
  undefined *puStack120;
  ulong uStack112;
  undefined8 uStack104;
  undefined *puStack96;
  undefined1 *puStack88;
  undefined *puStack80;
  undefined *puStack72;
  long lStack64;
  
  bVar31 = 0;
  uStack112 = param_3 & 0xffffffff;
  puStack80 = &UNK_00103809;
  lStack128 = xstrdup();
  puStack72 = &UNK_001128ef;
  if ((char)param_3 != '\0') {
    puStack72 = &UNK_001128e4;
  }
  puVar22 = (undefined *)0x0;
  puStack80 = &UNK_00103840;
  lStack64 = lStack128;
  puVar24 = (undefined *)func_0x00102970(lStack128,0x2c);
  if (puVar24 != (undefined *)0x0) {
    puVar22 = puVar24 + 1;
    *puVar24 = 0;
  }
  uVar7 = 0x113050;
  pcStack496 = (char *)0x4;
  puStack80 = &UNK_00103873;
  lVar18 = lStack128;
  puVar24 = puStack72;
  lVar13 = argmatch_die;
  lVar8 = __xargmatch_internal(puStack72,lStack128,preserve_args_7371);
  if (*(uint *)(preserve_vals_7370 + lVar8 * 4) < 7) {
                    /* WARNING: Could not recover jumptable at 0x0010388b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar9 = (*(code *)(&UNK_00112c00 +
                      *(int *)(&UNK_00112c00 + (ulong)*(uint *)(preserve_vals_7370 + lVar8 * 4) * 4)
                      ))();
    return uVar9;
  }
  puStack80 = &UNK_00103922;
  func_0x00102760();
  puStack88 = preserve_vals_7370;
  puStack96 = &UNK_00112c00;
  uStack144 = (ulong)uVar7;
  puStack120 = &UNK_00103954;
  uStack104 = param_2;
  puStack80 = puVar22;
  uVar5 = func_0x00102ba0(1,puVar24,lVar18);
  if (uVar5 == 0) {
    if ((*(uint *)(lVar18 + 0x18) & 0xf000) == 0x4000) {
      return 1;
    }
code_r0x00103969:
    return (ulong)(uVar5 & 1);
  }
  puStack120 = &UNK_0010397a;
  puVar10 = (uint *)func_0x00102770();
  uVar5 = *puVar10;
  uStack152 = (ulong)uVar5;
  if (uVar5 == 0) {
    uVar5 = (uint)((*(uint *)(lVar18 + 0x18) & 0xf000) == 0x4000);
    goto code_r0x00103969;
  }
  if (uVar5 == 2) {
    *extraout_RDX = 1;
    return 0;
  }
  if ((char)uVar7 != '\0') {
    *(undefined4 *)(lVar18 + 0x18) = 0;
    return 0;
  }
  puStack120 = &UNK_001039c9;
  puStack160 = (ulong *)quotearg_style(4,puVar24);
  puStack120 = &UNK_001039df;
  uVar9 = func_0x001028e0(0,&UNK_001128fd,5);
  puVar19 = (undefined4 *)(ulong)uVar5;
  uVar25 = 1;
  puStack120 = &UNK_001039f4;
  puStack504 = puStack160;
  func_0x00102cb0(1,puVar19,uVar9);
  uStack176 = *(ulong *)(in_FS_OFFSET + 0x28);
  puStack528 = &UNK_00103a46;
  lStack520 = extraout_RDX_00;
  puStack136 = extraout_RDX;
  puStack120 = puVar24;
  lVar8 = func_0x00102900();
  lVar18 = -(lVar8 + 0x1fU & 0xfffffffffffffff0);
  *(undefined **)((long)&puStack528 + lVar18) = 0x103a66;
  pcVar27 = (char *)func_0x00102b60((ulong **)((long)&puStack512 + lVar18),uVar25,lVar8 + 1);
  *(undefined **)((long)&puStack528 + lVar18) = 0x103a71;
  uVar11 = dir_len(pcVar27);
  lVar8 = -(uVar11 + 0x1f & 0xfffffffffffffff0);
  pcVar16 = (char *)((long)&puStack512 + lVar8 + lVar18);
  *(undefined8 *)((long)&puStack528 + lVar8 + lVar18) = 0x103a96;
  func_0x00102b60(pcVar16,pcVar27,uVar11);
  pcVar16[uVar11] = '\0';
  pcVar26 = (char *)0x1;
  *puStack504 = 0;
  uStack488 = auStack472;
  *(undefined8 *)((long)&puStack528 + lVar8 + lVar18) = 0x103ac7;
  pcVar20 = pcVar16;
  iVar6 = func_0x00102ba0(1,pcVar16,auStack472);
  if (iVar6 == 0) {
    pcVar21 = pcVar16;
    if ((uStack448 & 0xf000) != 0x4000) {
code_r0x00103ec6:
      *(undefined8 *)((long)&puStack528 + lVar8 + lVar18) = 0x103ed0;
      pcVar16 = (char *)quotearg_style(4,pcVar21);
      *(undefined8 *)((long)&puStack528 + lVar8 + lVar18) = 0x103ee6;
      uVar9 = func_0x001028e0(0,&UNK_001130b0,5);
      pcVar20 = (char *)0x0;
      pcVar26 = (char *)0x0;
      *(undefined8 *)((long)&puStack528 + lVar8 + lVar18) = 0x103ef7;
      func_0x00102cb0(0,0,uVar9,pcVar16);
      uVar9 = 0;
      goto code_r0x00103ea1;
    }
    *pcStack496 = '\0';
  }
  else {
    pcVar26 = pcVar27 + (long)puVar19;
    cVar4 = *pcVar26;
    pcStack480 = pcVar26;
    while (cVar4 == '/') {
      pcVar26 = pcVar26 + 1;
      cVar4 = *pcVar26;
    }
    puStack512 = (ulong *)auStack328;
    while( true ) {
      pcVar20 = (char *)0x2f;
      *(undefined8 *)((long)&puStack528 + lVar8 + lVar18) = 0x103b0a;
      pcVar16 = (char *)func_0x00102970(pcVar26);
      puVar22 = uStack488;
      if (pcVar16 == (char *)0x0) break;
      *pcVar16 = '\0';
      *(undefined8 *)((long)&puStack528 + lVar8 + lVar18) = 0x103b2d;
      uVar7 = func_0x00102ba0(1,pcVar27,puVar22);
      pcVar26 = pcStack480;
      puVar2 = puStack512;
      uVar11 = (ulong)uVar7;
      pcVar20 = pcVar27;
      if ((uVar7 != 0) || ((*(uint *)(lVar13 + 0x1c) & 0xffffff00) != 0)) {
        *(undefined8 *)((long)&puStack528 + lVar8 + lVar18) = 0x103bd8;
        iVar6 = func_0x00102ba0(1,pcVar26,puVar2);
        if (iVar6 == 0) {
          if ((uStack304 & 0xf000) != 0x4000) {
            iVar6 = 0x14;
            goto code_r0x00103dcc;
          }
        }
        else {
          *(undefined8 *)((long)&puStack528 + lVar8 + lVar18) = 0x103be5;
          piVar12 = (int *)func_0x00102770();
          iVar6 = *piVar12;
          if (iVar6 != 0) {
code_r0x00103dcc:
            pcVar26 = pcStack480;
            uStack488 = (undefined *)CONCAT44(uStack488._4_4_,iVar6);
            *(undefined8 *)((long)&puStack528 + lVar8 + lVar18) = 0x103de4;
            pcVar16 = (char *)quotearg_style(4,pcVar26);
            *(undefined8 *)((long)&puStack528 + lVar8 + lVar18) = 0x103dfa;
            uVar9 = func_0x001028e0(0,&UNK_00113090,5);
            pcVar20 = (char *)((ulong)uStack488 & 0xffffffff);
            pcVar26 = (char *)0x0;
            *(undefined8 *)((long)&puStack528 + lVar8 + lVar18) = 0x103e13;
            func_0x00102cb0(0,pcVar20,uVar9,pcVar16);
            uVar9 = 0;
            goto code_r0x00103ea1;
          }
        }
        *(undefined8 *)((long)&puStack528 + lVar8 + lVar18) = 0x103bfb;
        puVar19 = (undefined4 *)xmalloc(0xa8);
        auVar3 = auStack200;
        pcVar26 = pcStack480;
        *puVar19 = SUB164(auStack328,0);
        puVar19[1] = SUB164(auStack328 >> 0x20,0);
        puVar19[2] = SUB164(auStack328 >> 0x40,0);
        puVar19[3] = SUB164(auStack328 >> 0x60,0);
        puVar19[4] = (int)uStack312;
        puVar19[5] = (int)((ulong)uStack312 >> 0x20);
        puVar19[6] = uStack304;
        puVar19[7] = uStack300;
        puVar19[8] = SUB164(auStack296,0);
        puVar19[9] = SUB164(auStack296 >> 0x20,0);
        puVar19[10] = SUB164(auStack296 >> 0x40,0);
        puVar19[0xb] = SUB164(auStack296 >> 0x60,0);
        puVar19[0xc] = SUB164(auStack280,0);
        puVar19[0xd] = SUB164(auStack280 >> 0x20,0);
        puVar19[0xe] = SUB164(auStack280 >> 0x40,0);
        puVar19[0xf] = SUB164(auStack280 >> 0x60,0);
        puVar19[0x10] = SUB164(auStack264,0);
        puVar19[0x11] = SUB164(auStack264 >> 0x20,0);
        puVar19[0x12] = SUB164(auStack264 >> 0x40,0);
        puVar19[0x13] = SUB164(auStack264 >> 0x60,0);
        puVar19[0x14] = SUB164(auStack248,0);
        puVar19[0x15] = SUB164(auStack248 >> 0x20,0);
        puVar19[0x16] = SUB164(auStack248 >> 0x40,0);
        puVar19[0x17] = SUB164(auStack248 >> 0x60,0);
        puVar19[0x18] = SUB164(auStack232,0);
        puVar19[0x19] = SUB164(auStack232 >> 0x20,0);
        puVar19[0x1a] = SUB164(auStack232 >> 0x40,0);
        puVar19[0x1b] = SUB164(auStack232 >> 0x60,0);
        puVar19[0x1c] = SUB164(auStack216,0);
        puVar19[0x1d] = SUB164(auStack216 >> 0x20,0);
        puVar19[0x1e] = SUB164(auStack216 >> 0x40,0);
        puVar19[0x1f] = SUB164(auStack216 >> 0x60,0);
        puVar19[0x20] = SUB164(auStack200,0);
        puVar19[0x21] = SUB164(auStack200 >> 0x20,0);
        puVar19[0x22] = SUB164(auStack200 >> 0x40,0);
        puVar19[0x23] = SUB164(auStack200 >> 0x60,0);
        *(undefined *)(puVar19 + 0x24) = 0;
        *(char **)(puVar19 + 0x26) = pcVar16 + -(long)pcVar27;
        uVar14 = *puStack504;
        *(undefined4 **)puStack504 = puVar19;
        *(ulong *)(puVar19 + 0x28) = uVar14;
        if (uVar7 == 0) goto code_r0x00103b42;
        uVar7 = puVar19[6];
        *(undefined8 *)((long)&puStack528 + lVar8 + lVar18) = 0x103cad;
        cVar4 = set_process_security_ctx(SUB168(auVar3,0),pcVar26,pcVar27,(ulong)uVar7,1);
        if (cVar4 == '\0') {
code_r0x00103e65:
          uVar9 = 0;
        }
        else {
          uVar7 = puVar19[6];
          *pcStack496 = '\x01';
          if (*(char *)(lVar13 + 0x1d) == '\0') {
            if (*(char *)(lVar13 + 0x1e) == '\0') {
              uVar11 = 0;
              uVar5 = 0xfff;
            }
            else {
              uVar11 = (ulong)(uVar7 & 0x12);
              uVar5 = uVar7 & 0x12 ^ 0xfff;
            }
          }
          else {
            uVar11 = (ulong)(uVar7 & 0x3f);
            uVar5 = uVar7 & 0x3f ^ 0xfff;
          }
          if (*(char *)(lVar13 + 0x20) != '\0') {
            uVar7 = 0x1ff;
          }
          *(undefined8 *)((long)&puStack528 + lVar8 + lVar18) = 0x103cf4;
          iVar6 = func_0x001027e0(pcVar27,(ulong)(uVar7 & uVar5),0x1ff);
          pcVar26 = pcStack480;
          lVar1 = lStack520;
          if (iVar6 == 0) {
            if (lStack520 != 0) {
              *(undefined8 *)((long)&puStack528 + lVar8 + lVar18) = 0x103d21;
              func_0x00102c60(1,lVar1,pcVar26,pcVar27);
            }
            puVar22 = uStack488;
            *(undefined8 *)((long)&puStack528 + lVar8 + lVar18) = 0x103d35;
            iVar6 = func_0x00102910(1,pcVar27,puVar22);
            if (iVar6 != 0) {
              *(undefined8 *)((long)&puStack528 + lVar8 + lVar18) = 0x103f8c;
              pcVar27 = (char *)quotearg_style(4,pcVar27);
              puVar22 = &UNK_00113090;
              goto code_r0x00103f50;
            }
            if (*(char *)(lVar13 + 0x1e) == '\0') {
              if ((~uStack448 & (uint)uVar11) != 0) {
                *(undefined8 *)((long)&puStack528 + lVar8 + lVar18) = 0x103f05;
                uVar7 = cached_umask();
                uVar7 = (uint)uVar11 & ~uVar7;
                uVar11 = (ulong)uVar7;
                if ((~uStack448 & uVar7) == 0) goto code_r0x00103d57;
code_r0x00103d67:
                uVar11 = (ulong)(uVar7 | uStack448);
                *(undefined *)(puVar19 + 0x24) = 1;
                puVar19[6] = uVar7 | uStack448;
                goto code_r0x00103d76;
              }
code_r0x00103d57:
              uVar7 = (uint)uVar11;
              if ((uStack448 & 0x1c0) != 0x1c0) goto code_r0x00103d67;
            }
            else {
code_r0x00103d76:
              if ((uStack448 & 0x1c0) != 0x1c0) {
                *(undefined8 *)((long)&puStack528 + lVar8 + lVar18) = 0x103d92;
                iVar6 = func_0x00102c90(pcVar27);
                if (iVar6 != 0) {
                  *(undefined8 *)((long)&puStack528 + lVar8 + lVar18) = 0x103faa;
                  pcVar27 = (char *)quotearg_style(4,pcVar27);
                  puVar22 = &UNK_0011292a;
                  goto code_r0x00103f50;
                }
              }
            }
            if (*pcStack496 == '\0') goto code_r0x00103b80;
            goto code_r0x00103b94;
          }
          *(undefined8 *)((long)&puStack528 + lVar8 + lVar18) = 0x103f41;
          pcVar27 = (char *)quotearg_style(4,pcVar27);
          puVar22 = &UNK_00112911;
code_r0x00103f50:
          *(undefined8 *)((long)&puStack528 + lVar8 + lVar18) = 0x103f57;
          pcVar16 = (char *)func_0x001028e0(0,puVar22,5);
          *(undefined8 *)((long)&puStack528 + lVar8 + lVar18) = 0x103f5f;
          puVar10 = (uint *)func_0x00102770();
          pcVar20 = (char *)(ulong)*puVar10;
          pcVar26 = (char *)0x0;
          *(undefined8 *)((long)&puStack528 + lVar8 + lVar18) = 0x103f70;
          func_0x00102cb0(0,pcVar20,pcVar16,pcVar27);
          uVar9 = 0;
        }
        goto code_r0x00103ea1;
      }
code_r0x00103b42:
      pcVar26 = pcStack480;
      *(undefined8 *)((long)&puStack528 + lVar8 + lVar18) = 0x103b58;
      cVar4 = set_process_security_ctx(pcVar26,pcVar27,0,0);
      if (cVar4 == '\0') goto code_r0x00103e65;
      pcVar21 = pcVar27;
      if ((uStack448 & 0xf000) != 0x4000) goto code_r0x00103ec6;
      *pcStack496 = '\0';
code_r0x00103b80:
      if ((*(ulong *)(lVar13 + 0x20) & 0xff000000ff00) != 0) {
        pcVar20 = (char *)(ulong)*(byte *)(lVar13 + 0x25);
        *(undefined8 *)((long)&puStack528 + lVar8 + lVar18) = 0x103e52;
        pcVar26 = pcVar27;
        cVar4 = set_file_security_ctx(pcVar27,pcVar20,0);
        if ((cVar4 == '\0') && (*(char *)(lVar13 + 0x26) != '\0')) goto code_r0x00103e65;
      }
code_r0x00103b94:
      cVar4 = pcVar16[1];
      pcVar26 = pcVar16 + 1;
      *pcVar16 = '/';
      while (cVar4 == '/') {
        pcVar26 = pcVar26 + 1;
        cVar4 = *pcVar26;
      }
    }
  }
  uVar9 = 1;
code_r0x00103ea1:
  uVar14 = uStack176 ^ *(ulong *)(in_FS_OFFSET + 0x28);
  if (uVar14 == 0) {
    return uVar9;
  }
  *(undefined8 *)((long)&puStack528 + lVar8 + lVar18) = 0x103fc0;
  func_0x00102930();
  *(undefined ***)((long)&puStack528 + lVar8 + lVar18) = &puStack120;
  *(undefined4 **)((long)alStack552 + lVar8 + lVar18 + 0x10) = puVar19;
  *(ulong *)((long)alStack552 + lVar8 + lVar18 + 8) = uVar11;
  *(long *)((long)alStack552 + lVar8 + lVar18) = lVar13;
  *(char **)((long)apcStack568 + lVar8 + lVar18 + 8) = pcVar27;
  *(char **)((long)apcStack568 + lVar8 + lVar18) = pcVar16;
  *(undefined8 *)((long)alStack624 + lVar8 + lVar18 + 0x28) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)((long)alStack656 + lVar8 + lVar18 + 8) = 0x103ff1;
  lVar13 = func_0x00102900();
  lVar1 = -(lVar13 + 0x1fU & 0xfffffffffffffff0);
  puVar22 = auStack640 + lVar1 + lVar8 + lVar18;
  *(undefined8 *)((long)alStack656 + lVar1 + lVar8 + lVar18 + 8) = 0x104011;
  puVar24 = (undefined *)func_0x00102b60(puVar22,pcVar26,lVar13 + 1);
  *(char **)((long)&pcStack632 + lVar8 + lVar18) = pcVar20 + (long)puVar24;
  lVar13 = extraout_RDX_01;
  if (extraout_RDX_01 != 0) {
    do {
      cVar4 = *(char *)(uVar14 + 0x1f);
      puVar24[*(long *)(lVar13 + 0x98)] = 0;
      if (cVar4 != '\0') {
        uVar9 = *(undefined8 *)(lVar13 + 0x50);
        *(undefined8 *)((long)alStack624 + lVar8 + lVar18) = *(undefined8 *)(lVar13 + 0x48);
        *(undefined8 *)((long)alStack624 + lVar8 + lVar18 + 8) = uVar9;
        uVar9 = *(undefined8 *)(lVar13 + 0x60);
        *(undefined8 *)((long)alStack624 + lVar8 + lVar18 + 0x10) = *(undefined8 *)(lVar13 + 0x58);
        *(undefined8 *)((long)alStack624 + lVar8 + lVar18 + 0x18) = uVar9;
        *(undefined8 *)((long)alStack656 + lVar1 + lVar8 + lVar18 + 8) = 0x1040b0;
        puVar22 = puVar24;
        iVar6 = utimens(puVar24,(long)alStack624 + lVar8 + lVar18);
        if (iVar6 != 0) {
          uVar11 = 0;
          *(undefined8 *)((long)alStack656 + lVar1 + lVar8 + lVar18 + 8) = 0x1040c8;
          puVar24 = (undefined *)quotearg_style(4,puVar24);
          *(undefined8 *)((long)alStack656 + lVar1 + lVar8 + lVar18 + 8) = 0x1040de;
          lVar13 = func_0x001028e0(0,&UNK_001130d8,5);
          *(undefined8 *)((long)alStack656 + lVar1 + lVar8 + lVar18 + 8) = 0x1040e6;
          puVar10 = (uint *)func_0x00102770();
          uVar7 = *puVar10;
          puVar22 = (undefined *)0x0;
          *(undefined8 *)((long)alStack656 + lVar1 + lVar8 + lVar18 + 8) = 0x1040f7;
          func_0x00102cb0(0,(ulong)uVar7,lVar13,puVar24);
          goto code_r0x001041d6;
        }
      }
      if (*(char *)(uVar14 + 0x1d) != '\0') {
        uVar7 = *(uint *)(lVar13 + 0x20);
        uVar5 = *(uint *)(lVar13 + 0x1c);
        *(undefined8 *)((long)alStack656 + lVar1 + lVar8 + lVar18 + 8) = 0x10410e;
        puVar22 = puVar24;
        iVar6 = func_0x00102c00(puVar24,(ulong)uVar5,(ulong)uVar7);
        if (iVar6 == 0) goto code_r0x0010403b;
        *(undefined8 *)((long)alStack656 + lVar1 + lVar8 + lVar18 + 8) = 0x10411e;
        uVar7 = chown_failure_ok(uVar14);
        uVar11 = (ulong)uVar7;
        if ((char)uVar7 != '\0') {
          uVar7 = *(uint *)(lVar13 + 0x20);
          *(undefined8 *)((long)alStack656 + lVar1 + lVar8 + lVar18 + 8) = 0x104139;
          puVar22 = puVar24;
          func_0x00102c00(puVar24,0xffffffff,(ulong)uVar7);
          cVar4 = *(char *)(uVar14 + 0x1e);
          goto joined_r0x00104141;
        }
        *(undefined8 *)((long)alStack656 + lVar1 + lVar8 + lVar18 + 8) = 0x104204;
        puVar24 = (undefined *)quotearg_style(4,puVar24);
        puVar22 = &UNK_001130f8;
code_r0x001041a7:
        *(undefined8 *)((long)alStack656 + lVar1 + lVar8 + lVar18 + 8) = 0x1041ae;
        lVar13 = func_0x001028e0(0,puVar22,5);
        *(undefined8 *)((long)alStack656 + lVar1 + lVar8 + lVar18 + 8) = 0x1041b6;
        puVar10 = (uint *)func_0x00102770();
        uVar7 = *puVar10;
        puVar22 = (undefined *)0x0;
        *(undefined8 *)((long)alStack656 + lVar1 + lVar8 + lVar18 + 8) = 0x1041c7;
        func_0x00102cb0(0,(ulong)uVar7,lVar13,puVar24);
        goto code_r0x001041d6;
      }
code_r0x0010403b:
      cVar4 = *(char *)(uVar14 + 0x1e);
joined_r0x00104141:
      if (cVar4 == '\0') {
        uVar11 = 0;
        if (*(char *)(lVar13 + 0x90) != '\0') {
          *(undefined8 *)((long)alStack656 + lVar1 + lVar8 + lVar18 + 8) = 0x104183;
          puVar22 = puVar24;
          iVar6 = func_0x00102c90();
          if (iVar6 != 0) {
            *(undefined8 *)((long)alStack656 + lVar1 + lVar8 + lVar18 + 8) = 0x104198;
            puVar24 = (undefined *)quotearg_style(4,puVar24);
            puVar22 = &UNK_00113120;
            goto code_r0x001041a7;
          }
        }
      }
      else {
        uVar7 = *(uint *)(lVar13 + 0x18);
        puVar22 = *(undefined **)((long)&pcStack632 + lVar8 + lVar18);
        *(undefined8 *)((long)alStack656 + lVar1 + lVar8 + lVar18 + 8) = 0x104167;
        iVar6 = copy_acl(puVar22,0xffffffff,puVar24,0xffffffff,(ulong)uVar7);
        if (iVar6 != 0) {
          uVar11 = 0;
          goto code_r0x001041d6;
        }
      }
      puVar24[*(long *)(lVar13 + 0x98)] = 0x2f;
      lVar13 = *(long *)(lVar13 + 0xa0);
    } while (lVar13 != 0);
  }
  uVar11 = 1;
code_r0x001041d6:
  if (*(long *)((long)alStack624 + lVar8 + lVar18 + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar11;
  }
  *(undefined8 *)((long)alStack656 + lVar1 + lVar8 + lVar18 + 8) = 0x10421a;
  func_0x00102930();
  puVar17 = program_name;
  *(ulong *)((long)alStack656 + lVar1 + lVar8 + lVar18 + 8) = uVar14;
  *(undefined **)((long)alStack656 + lVar1 + lVar8 + lVar18) = puVar24;
  uVar9 = 5;
  *(long *)(auStack664 + lVar1 + lVar8 + lVar18) = (long)&puStack528 + lVar8 + lVar18;
  *(long *)((long)&lStack672 + lVar1 + lVar8 + lVar18) = lVar13;
  *(undefined8 *)((long)apbStack816 + lVar1 + lVar8 + lVar18 + 0x80) =
       *(undefined8 *)(in_FS_OFFSET + 0x28);
  if ((int)puVar22 == 0) goto code_r0x0010427d;
  *(undefined8 *)((long)apbStack816 + lVar1 + lVar8 + lVar18) = 0x10425d;
  uVar9 = func_0x001028e0(0,&UNK_00113148,5);
  *(undefined8 *)((long)apbStack816 + lVar1 + lVar8 + lVar18) = 0x104276;
  func_0x00102db0(stderr,1,uVar9,puVar17);
  do {
    *(undefined8 *)((long)apbStack816 + lVar1 + lVar8 + lVar18) = 0x10427d;
    func_0x00102d90((ulong)puVar22 & 0xffffffff);
    uVar9 = extraout_RDX_02;
code_r0x0010427d:
    *(undefined8 *)((long)apbStack816 + lVar1 + lVar8 + lVar18) = 0x10428b;
    uVar9 = func_0x001028e0(0,&UNK_00113170,uVar9);
    *(undefined8 *)((long)apbStack816 + lVar1 + lVar8 + lVar18) = 0x1042a3;
    func_0x00102c60(1,uVar9,puVar17,puVar17,puVar17);
    uVar9 = stdout;
    *(undefined8 *)((long)apbStack816 + lVar1 + lVar8 + lVar18) = 0x1042bd;
    uVar25 = func_0x001028e0(0,&UNK_001131f0,5);
    *(undefined8 *)((long)apbStack816 + lVar1 + lVar8 + lVar18) = 0x1042c8;
    func_0x00102ab0(uVar25,uVar9);
    uVar9 = stdout;
    *(undefined8 *)((long)apbStack816 + lVar1 + lVar8 + lVar18) = 0x1042e2;
    uVar25 = func_0x001028e0(0,&UNK_00113230,5);
    *(undefined8 *)((long)apbStack816 + lVar1 + lVar8 + lVar18) = 0x1042ed;
    func_0x00102ab0(uVar25,uVar9);
    uVar9 = stdout;
    *(undefined8 *)((long)apbStack816 + lVar1 + lVar8 + lVar18) = 0x104307;
    uVar25 = func_0x001028e0(0,&UNK_00113280,5);
    *(undefined8 *)((long)apbStack816 + lVar1 + lVar8 + lVar18) = 0x104312;
    func_0x00102ab0(uVar25,uVar9);
    uVar9 = stdout;
    *(undefined8 *)((long)apbStack816 + lVar1 + lVar8 + lVar18) = 0x10432c;
    uVar25 = func_0x001028e0(0,&UNK_00113440,5);
    *(undefined8 *)((long)apbStack816 + lVar1 + lVar8 + lVar18) = 0x104337;
    func_0x00102ab0(uVar25,uVar9);
    uVar9 = stdout;
    *(undefined8 *)((long)apbStack816 + lVar1 + lVar8 + lVar18) = 0x104351;
    uVar25 = func_0x001028e0(0,&UNK_001135f0,5);
    *(undefined8 *)((long)apbStack816 + lVar1 + lVar8 + lVar18) = 0x10435c;
    func_0x00102ab0(uVar25,uVar9);
    uVar9 = stdout;
    *(undefined8 *)((long)apbStack816 + lVar1 + lVar8 + lVar18) = 0x104376;
    uVar25 = func_0x001028e0(0,&UNK_00113680,5);
    *(undefined8 *)((long)apbStack816 + lVar1 + lVar8 + lVar18) = 0x104381;
    func_0x00102ab0(uVar25,uVar9);
    uVar9 = stdout;
    *(undefined8 *)((long)apbStack816 + lVar1 + lVar8 + lVar18) = 0x10439b;
    uVar25 = func_0x001028e0(0,&UNK_00113750,5);
    *(undefined8 *)((long)apbStack816 + lVar1 + lVar8 + lVar18) = 0x1043a6;
    func_0x00102ab0(uVar25,uVar9);
    uVar9 = stdout;
    *(undefined8 *)((long)apbStack816 + lVar1 + lVar8 + lVar18) = 0x1043c0;
    uVar25 = func_0x001028e0(0,&UNK_001138a8,5);
    *(undefined8 *)((long)apbStack816 + lVar1 + lVar8 + lVar18) = 0x1043cb;
    func_0x00102ab0(uVar25,uVar9);
    uVar9 = stdout;
    *(undefined8 *)((long)apbStack816 + lVar1 + lVar8 + lVar18) = 0x1043e5;
    uVar25 = func_0x001028e0(0,&UNK_00113940,5);
    *(undefined8 *)((long)apbStack816 + lVar1 + lVar8 + lVar18) = 0x1043f0;
    func_0x00102ab0(uVar25,uVar9);
    uVar9 = stdout;
    *(undefined8 *)((long)apbStack816 + lVar1 + lVar8 + lVar18) = 0x10440a;
    uVar25 = func_0x001028e0(0,&UNK_00113a60,5);
    *(undefined8 *)((long)apbStack816 + lVar1 + lVar8 + lVar18) = 0x104415;
    func_0x00102ab0(uVar25,uVar9);
    uVar9 = stdout;
    *(undefined8 *)((long)apbStack816 + lVar1 + lVar8 + lVar18) = 0x10442f;
    uVar25 = func_0x001028e0(0,&UNK_00113b28,5);
    *(undefined8 *)((long)apbStack816 + lVar1 + lVar8 + lVar18) = 0x10443a;
    func_0x00102ab0(uVar25,uVar9);
    uVar9 = stdout;
    *(undefined8 *)((long)apbStack816 + lVar1 + lVar8 + lVar18) = 0x104454;
    uVar25 = func_0x001028e0(0,&UNK_00113c38,5);
    *(undefined8 *)((long)apbStack816 + lVar1 + lVar8 + lVar18) = 0x10445f;
    func_0x00102ab0(uVar25,uVar9);
    uVar9 = stdout;
    *(undefined8 *)((long)apbStack816 + lVar1 + lVar8 + lVar18) = 0x104479;
    uVar25 = func_0x001028e0(0,&UNK_00113d78,5);
    *(undefined8 *)((long)apbStack816 + lVar1 + lVar8 + lVar18) = 0x104484;
    func_0x00102ab0(uVar25,uVar9);
    uVar9 = stdout;
    *(undefined8 *)((long)apbStack816 + lVar1 + lVar8 + lVar18) = 0x10449e;
    uVar25 = func_0x001028e0(0,&UNK_00113e90,5);
    *(undefined8 *)((long)apbStack816 + lVar1 + lVar8 + lVar18) = 0x1044a9;
    func_0x00102ab0(uVar25,uVar9);
    uVar9 = stdout;
    *(undefined8 *)((long)apbStack816 + lVar1 + lVar8 + lVar18) = 0x1044c3;
    uVar25 = func_0x001028e0(0,&UNK_00113ec0,5);
    *(undefined8 *)((long)apbStack816 + lVar1 + lVar8 + lVar18) = 0x1044ce;
    func_0x00102ab0(uVar25,uVar9);
    uVar9 = stdout;
    *(undefined8 *)((long)apbStack816 + lVar1 + lVar8 + lVar18) = 0x1044e8;
    uVar25 = func_0x001028e0(0,&UNK_00113ef8,5);
    *(undefined8 *)((long)apbStack816 + lVar1 + lVar8 + lVar18) = 0x1044f3;
    func_0x00102ab0(uVar25,uVar9);
    uVar9 = stdout;
    *(undefined8 *)((long)apbStack816 + lVar1 + lVar8 + lVar18) = 0x10450d;
    uVar25 = func_0x001028e0(0,&UNK_00114060,5);
    *(undefined8 *)((long)apbStack816 + lVar1 + lVar8 + lVar18) = 0x104518;
    func_0x00102ab0(uVar25,uVar9);
    uVar9 = stdout;
    *(undefined8 *)((long)apbStack816 + lVar1 + lVar8 + lVar18) = 0x104532;
    uVar25 = func_0x001028e0(0,&UNK_00114180,5);
    *(undefined8 *)((long)apbStack816 + lVar1 + lVar8 + lVar18) = 0x10453d;
    func_0x00102ab0(uVar25,uVar9);
    uVar9 = stdout;
    *(undefined8 *)((long)apbStack816 + lVar1 + lVar8 + lVar18) = 0x104557;
    uVar25 = func_0x001028e0(0,&UNK_00114260,5);
    *(undefined8 *)((long)apbStack816 + lVar1 + lVar8 + lVar18) = 0x104562;
    func_0x00102ab0(uVar25,uVar9);
    uVar9 = stdout;
    *(undefined8 *)((long)apbStack816 + lVar1 + lVar8 + lVar18) = 0x10457c;
    uVar25 = func_0x001028e0(0,&UNK_00114340,5);
    *(undefined8 *)((long)apbStack816 + lVar1 + lVar8 + lVar18) = 0x10458e;
    func_0x00102ab0(uVar25,uVar9);
    *(undefined8 *)((long)apbStack816 + lVar1 + lVar8 + lVar18 + 0x68) = 0;
    *(undefined8 *)((long)apbStack816 + lVar1 + lVar8 + lVar18 + 0x70) = 0;
    *(undefined8 *)((long)apbStack816 + lVar1 + lVar8 + lVar18 + 8) = 0x112948;
    *(undefined8 *)((long)apbStack816 + lVar1 + lVar8 + lVar18 + 0x38) = 0x112989;
    *(undefined8 *)((long)apbStack816 + lVar1 + lVar8 + lVar18 + 0x10) = 0x11294a;
    *(undefined8 *)((long)apbStack816 + lVar1 + lVar8 + lVar18 + 0x48) = 0x112993;
    *(undefined8 *)((long)apbStack816 + lVar1 + lVar8 + lVar18 + 0x18) = 0x1129c2;
    *(undefined8 *)((long)apbStack816 + lVar1 + lVar8 + lVar18 + 0x58) = 0x11299d;
    *(undefined8 *)((long)apbStack816 + lVar1 + lVar8 + lVar18 + 0x20) = 0x11295a;
    *(undefined8 *)((long)apbStack816 + lVar1 + lVar8 + lVar18 + 0x28) = 0x112970;
    *(undefined8 *)((long)apbStack816 + lVar1 + lVar8 + lVar18 + 0x30) = 0x11297a;
    *(undefined8 *)((long)apbStack816 + lVar1 + lVar8 + lVar18 + 0x40) = 0x11297a;
    *(undefined8 *)((long)apbStack816 + lVar1 + lVar8 + lVar18 + 0x50) = 0x11297a;
    *(undefined8 *)((long)apbStack816 + lVar1 + lVar8 + lVar18 + 0x60) = 0x11297a;
    ppbVar15 = (byte **)((long)apbStack816 + lVar1 + lVar8 + lVar18 + 8);
    do {
      ppbVar15 = ppbVar15;
      ppbVar15 = ppbVar15 + 2;
      pbVar28 = *ppbVar15;
      bVar29 = false;
      bVar30 = pbVar28 == (byte *)0x0;
      if (bVar30) break;
      lVar13 = 3;
      pbVar23 = &UNK_00112945;
      do {
        if (lVar13 == 0) break;
        lVar13 = lVar13 + -1;
        bVar29 = *pbVar23 < *pbVar28;
        bVar30 = *pbVar23 == *pbVar28;
        pbVar23 = pbVar23 + (ulong)bVar31 * -2 + 1;
        pbVar28 = pbVar28 + (ulong)bVar31 * -2 + 1;
      } while (bVar30);
    } while ((!bVar29 && !bVar30) != bVar29);
    pbVar28 = ppbVar15[3];
    if (pbVar28 == (byte *)0x0) {
      *(undefined8 *)((long)apbStack816 + lVar1 + lVar8 + lVar18) = 0x104720;
      uVar9 = func_0x001028e0(0,&UNK_001129a7,5);
      *(undefined8 *)((long)apbStack816 + lVar1 + lVar8 + lVar18) = 0x10473d;
      func_0x00102c60(1,uVar9,&UNK_001129be,&UNK_001143e8);
      *(undefined8 *)((long)apbStack816 + lVar1 + lVar8 + lVar18) = 0x104749;
      lVar13 = func_0x00102c50(5,0);
      if (lVar13 != 0) {
        *(undefined8 *)((long)apbStack816 + lVar1 + lVar8 + lVar18) = 0x104762;
        iVar6 = func_0x00102790(lVar13,&UNK_001129cc,3);
        if (iVar6 != 0) {
          pbVar28 = &UNK_00112945;
          goto code_r0x001047b0;
        }
      }
      pbVar28 = &UNK_00112945;
      puVar17 = &UNK_00112964;
      *(undefined8 *)((long)apbStack816 + lVar1 + lVar8 + lVar18) = 0x104787;
      uVar9 = func_0x001028e0(0,&UNK_001129d0,5);
      *(undefined8 *)((long)apbStack816 + lVar1 + lVar8 + lVar18) = 0x1047a4;
      func_0x00102c60(1,uVar9,&UNK_001143e8,&UNK_00112945);
    }
    else {
      *(undefined8 *)((long)apbStack816 + lVar1 + lVar8 + lVar18) = 0x10465f;
      uVar9 = func_0x001028e0(0,&UNK_001129a7,5);
      *(undefined8 *)((long)apbStack816 + lVar1 + lVar8 + lVar18) = 0x10467c;
      func_0x00102c60(1,uVar9,&UNK_001129be,&UNK_001143e8);
      *(undefined8 *)((long)apbStack816 + lVar1 + lVar8 + lVar18) = 0x104688;
      lVar13 = func_0x00102c50(5,0);
      if (lVar13 != 0) {
        *(undefined8 *)((long)apbStack816 + lVar1 + lVar8 + lVar18) = 0x1046a1;
        iVar6 = func_0x00102790(lVar13,&UNK_001129cc,3);
        if (iVar6 != 0) {
code_r0x001047b0:
          uVar9 = stdout;
          *(undefined8 *)((long)apbStack816 + lVar1 + lVar8 + lVar18) = 0x1047ca;
          uVar25 = func_0x001028e0(0,&UNK_00114410,5);
          *(undefined8 *)((long)apbStack816 + lVar1 + lVar8 + lVar18) = 0x1047d5;
          func_0x00102ab0(uVar25,uVar9);
        }
      }
      *(undefined8 *)((long)apbStack816 + lVar1 + lVar8 + lVar18) = 0x1046bc;
      uVar9 = func_0x001028e0(0,&UNK_001129d0,5);
      *(undefined8 *)((long)apbStack816 + lVar1 + lVar8 + lVar18) = 0x1046d9;
      func_0x00102c60(1,uVar9,&UNK_001143e8,&UNK_00112945);
      puVar17 = &UNK_00115046;
      if (pbVar28 == &UNK_00112945) {
        puVar17 = &UNK_00112964;
      }
    }
    *(undefined8 *)((long)apbStack816 + lVar1 + lVar8 + lVar18) = 0x104701;
    uVar9 = func_0x001028e0(0,&UNK_00114458,5);
    *(undefined8 *)((long)apbStack816 + lVar1 + lVar8 + lVar18) = 0x104716;
    func_0x00102c60(1,uVar9,pbVar28,puVar17);
  } while( true );
}

