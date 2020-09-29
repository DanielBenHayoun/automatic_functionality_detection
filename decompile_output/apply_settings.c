
void apply_settings(char param_1,undefined8 param_2,long param_3,int param_4,uint *param_5,
                   undefined *param_6,undefined *param_7)

{
  ulong uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  int *piVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  byte *pbVar16;
  uint uVar17;
  uint uVar18;
  byte **ppbVar19;
  undefined *puVar20;
  byte *pbVar21;
  undefined1 *puVar22;
  byte *pbVar23;
  undefined1 *unaff_R14;
  byte **ppbVar24;
  long in_FS_OFFSET;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  byte bVar28;
  bool bStack168;
  ulong uStack152;
  byte *pbStack96;
  uint auStack88 [6];
  long lStack64;
  
  bVar28 = 0;
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = uStack152;
  if (param_4 < 2) goto code_r0x00104d10;
  uStack152 = 1;
  unaff_R14 = mode_info;
  do {
    uVar18 = (uint)uStack152;
    uVar1 = (long)(int)uVar18 * 8;
    pbVar16 = *(byte **)(param_3 + (long)(int)uVar18 * 8);
    uVar17 = uVar18;
    if (pbVar16 == (byte *)0x0) goto code_r0x00104be4;
    bVar25 = *pbVar16 < 0x2d;
    bStack168 = *pbVar16 == 0x2d;
    bVar27 = bStack168;
    if (bStack168) {
      bVar25 = (byte *)0xfffffffffffffffe < pbVar16;
      pbVar16 = pbVar16 + 1;
      bVar27 = pbVar16 == (byte *)0x0;
    }
    uVar6 = (uint)pbVar16;
    lVar15 = 6;
    ppbVar24 = (byte **)&UNK_0010b49d;
    pbVar23 = pbVar16;
    pbVar21 = &UNK_0010b5c7;
    do {
      if (lVar15 == 0) break;
      lVar15 = lVar15 + -1;
      bVar25 = *pbVar23 < *pbVar21;
      bVar27 = *pbVar23 == *pbVar21;
      pbVar23 = pbVar23 + (ulong)bVar28 * -2 + 1;
      pbVar21 = pbVar21 + (ulong)bVar28 * -2 + 1;
    } while (bVar27);
    lVar15 = 0;
    if ((!bVar25 && !bVar27) == bVar25) {
      tcsetattr_options = (uint)!bStack168;
      goto code_r0x00104be4;
    }
    do {
      iVar5 = func_0x00102620(pbVar16,ppbVar24);
      if (iVar5 == 0) {
        puVar22 = unaff_R14 + (long)(int)lVar15 * 0x20;
        bVar27 = (puVar22[0xc] & 0x10) == 0;
        if (!bVar27) goto code_r0x00104c8f;
        if (!bStack168) {
          puVar9 = (uint *)mode_type_flag((ulong)*(uint *)(puVar22 + 8),param_5);
          bVar27 = false;
          bVar25 = puVar9 == (uint *)0x0;
          uStack152 = uVar1;
          if (!bVar25) {
            *puVar9 = ~*(uint *)(puVar22 + 0x18) & *puVar9 | *(uint *)(puVar22 + 0x10);
            *param_7 = 1;
            goto code_r0x00104be4;
          }
          goto code_r0x001050d8;
        }
        if ((puVar22[0xc] & 4) == 0) {
          *param_7 = 1;
          goto code_r0x00105099;
        }
        puVar9 = (uint *)mode_type_flag((ulong)*(uint *)(puVar22 + 8),param_5);
        if (puVar9 != (uint *)0x0) {
          *puVar9 = *puVar9 & ~((uint)*(undefined8 *)(puVar22 + 0x10) | *(uint *)(puVar22 + 0x18));
          *param_7 = 1;
          goto code_r0x00104be4;
        }
        iVar5 = func_0x00102620(ppbVar24,&UNK_0010b589);
        if ((iVar5 != 0) &&
           (iVar5 = func_0x00102620(ppbVar24,&UNK_0010b58f), uStack152 = uVar1, iVar5 != 0))
        goto code_r0x0010510d;
        uVar6 = param_5[2];
        uStack152 = uVar1;
        goto code_r0x001052cb;
      }
      lVar15 = lVar15 + 1;
      ppbVar24 = *(byte ***)(unaff_R14 + lVar15 * 0x20);
    } while (ppbVar24 != (byte **)0x0);
    if (bStack168) {
code_r0x00105099:
      uVar14 = quote(pbVar16 + -1);
      puVar20 = &UNK_0010b507;
      uStack152 = uVar1;
      goto code_r0x001050b1;
    }
    iVar5 = 0;
    pbVar23 = &UNK_0010b4a4;
    ppbVar24 = (byte **)(control_info + 0x18);
    do {
      iVar7 = func_0x00102620(pbVar16,pbVar23);
      if (iVar7 == 0) {
        if ((param_4 - 1U == uVar18) ||
           (ppbVar24 = *(byte ***)(uVar1 + param_3 + 8), ppbVar24 == (byte **)0x0))
        goto code_r0x00105601;
        lVar15 = 4;
        bVar27 = 0xfffffffe < uVar18;
        uVar17 = uVar18 + 1;
        bVar25 = uVar17 == 0;
        pbVar16 = pbVar23;
        pbVar21 = &UNK_0010b532;
        goto code_r0x00104dc3;
      }
      ppbVar19 = ppbVar24 + 3;
      pbVar23 = *ppbVar24;
      iVar5 = iVar5 + 1;
      bVar27 = pbVar23 == (byte *)0x0;
      ppbVar24 = ppbVar19;
    } while (!bVar27);
code_r0x00104c8f:
    bVar25 = false;
    lVar15 = 7;
    pbVar23 = pbVar16;
    pbVar21 = &UNK_0010b582;
    do {
      if (lVar15 == 0) break;
      lVar15 = lVar15 + -1;
      bVar25 = *pbVar23 < *pbVar21;
      bVar27 = *pbVar23 == *pbVar21;
      pbVar23 = pbVar23 + (ulong)bVar28 * -2 + 1;
      pbVar21 = pbVar21 + (ulong)bVar28 * -2 + 1;
    } while (bVar27);
    bVar26 = false;
    bVar27 = (!bVar25 && !bVar27) == bVar25;
    if (!bVar27) {
      lVar15 = 7;
      pbVar23 = pbVar16;
      pbVar21 = &UNK_0010b544;
      goto code_r0x00104e8f;
    }
    if ((param_4 - 1U == uVar18) || (*(long *)(uVar1 + param_3 + 8) == 0)) goto code_r0x00105601;
    uVar17 = uVar18 + 1;
    if (param_1 != '\0') goto code_r0x00104be4;
    uVar6 = string_to_baud();
    uVar17 = uVar18 + 2;
    func_0x00102730(param_5,(ulong)uVar6);
    *param_6 = 1;
    *param_7 = 1;
    while (uStack152 = (ulong)uVar17, param_4 <= (int)uVar17) {
code_r0x00104d10:
      uStack152 = uVar1;
      if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
code_r0x0010565b:
      func_0x00102520();
code_r0x00105660:
      uVar18 = (uint)uStack152;
code_r0x001051fa:
      *param_7 = 1;
      uVar1 = uStack152;
      uVar17 = uVar18;
code_r0x00104be4:
      uStack152 = uVar1;
      uVar17 = uVar17 + 1;
      uVar1 = uStack152;
    }
  } while( true );
  while( true ) {
    lVar15 = lVar15 + -1;
    bVar27 = *pbVar16 < *pbVar21;
    bVar25 = *pbVar16 == *pbVar21;
    pbVar16 = pbVar16 + (ulong)bVar28 * -2 + 1;
    pbVar21 = pbVar21 + (ulong)bVar28 * -2 + 1;
    if (!bVar25) break;
code_r0x00104dc3:
    if (lVar15 == 0) break;
  }
  bVar26 = false;
  bVar27 = (!bVar27 && !bVar25) == bVar27;
  if (!bVar27) {
    lVar15 = 5;
    pbVar16 = &UNK_0010b536;
    do {
      if (lVar15 == 0) break;
      lVar15 = lVar15 + -1;
      bVar26 = *pbVar23 < *pbVar16;
      bVar27 = *pbVar23 == *pbVar16;
      pbVar23 = pbVar23 + (ulong)bVar28 * -2 + 1;
      pbVar16 = pbVar16 + (ulong)bVar28 * -2 + 1;
    } while (bVar27);
    if ((!bVar26 && !bVar27) != bVar26) {
      bVar4 = *(byte *)ppbVar24;
      bVar3 = bVar4;
      if ((bVar4 == 0) || (bVar2 = *(byte *)((long)ppbVar24 + 1), bVar2 == 0))
      goto code_r0x00104e5c;
      iVar7 = func_0x00102620(ppbVar24,&UNK_0010b53b);
      bVar3 = 0;
      if ((iVar7 == 0) || (iVar7 = func_0x00102620(ppbVar24,&UNK_0010b53e), iVar7 == 0))
      goto code_r0x00104e5c;
      if (bVar4 == 0x5e) {
        if (bVar2 == 0x3f) {
          bVar3 = 0x7f;
        }
        else {
          bVar3 = bVar2 & 0x9f;
        }
        goto code_r0x00104e5c;
      }
    }
  }
  bVar3 = integer_arg(ppbVar24,0xff);
code_r0x00104e5c:
  *(byte *)((long)param_5 + *(long *)(control_info + (long)iVar5 * 0x18 + 0x10) + 0x11) = bVar3;
  *param_7 = 1;
  goto code_r0x00104be4;
  while( true ) {
    lVar15 = lVar15 + -1;
    bVar26 = *pbVar23 < *pbVar21;
    bVar27 = *pbVar23 == *pbVar21;
    pbVar23 = pbVar23 + (ulong)bVar28 * -2 + 1;
    pbVar21 = pbVar21 + (ulong)bVar28 * -2 + 1;
    if (!bVar27) break;
code_r0x00104e8f:
    if (lVar15 == 0) break;
  }
  bVar25 = false;
  bVar27 = (!bVar26 && !bVar27) == bVar26;
  if (bVar27) {
    if ((param_4 - 1U != uVar18) && (*(long *)(uVar1 + param_3 + 8) != 0)) {
      uVar18 = uVar18 + 1;
      uVar17 = uVar18;
      if (param_1 != '\0') goto code_r0x00104be4;
      uVar8 = string_to_baud();
code_r0x00104edf:
      func_0x001024e0(param_5,(ulong)uVar8);
      *param_6 = 1;
      *param_7 = 1;
      uVar17 = uVar18;
      goto code_r0x00104be4;
    }
code_r0x00105601:
    uVar14 = quote(pbVar16);
    puVar20 = &UNK_0010b51b;
    uStack152 = uVar1;
  }
  else {
    lVar15 = 5;
    pbVar23 = pbVar16;
    pbVar21 = &UNK_0010b54b;
    do {
      if (lVar15 == 0) break;
      lVar15 = lVar15 + -1;
      bVar25 = *pbVar23 < *pbVar21;
      bVar27 = *pbVar23 == *pbVar21;
      pbVar23 = pbVar23 + (ulong)bVar28 * -2 + 1;
      pbVar21 = pbVar21 + (ulong)bVar28 * -2 + 1;
    } while (bVar27);
    bVar26 = false;
    bVar27 = (!bVar25 && !bVar27) == bVar25;
    if (bVar27) {
      if ((param_4 - 1U != uVar18) && (lVar15 = *(long *)(uVar1 + param_3 + 8), lVar15 != 0)) {
        uVar17 = uVar18 + 1;
        if (param_1 != '\0') goto code_r0x00104be4;
        uVar18 = integer_arg(lVar15,0x7fffffff);
        set_window_size((ulong)uVar18,0xffffffff,param_2);
        goto code_r0x00104be4;
      }
      goto code_r0x00105601;
    }
    lVar15 = 5;
    pbVar23 = pbVar16;
    pbVar21 = &UNK_0010b550;
    do {
      if (lVar15 == 0) break;
      lVar15 = lVar15 + -1;
      bVar26 = *pbVar23 < *pbVar21;
      bVar27 = *pbVar23 == *pbVar21;
      pbVar23 = pbVar23 + (ulong)bVar28 * -2 + 1;
      pbVar21 = pbVar21 + (ulong)bVar28 * -2 + 1;
    } while (bVar27);
    if (((!bVar26 && !bVar27) == bVar26) ||
       (iVar5 = func_0x00102620(pbVar16,&UNK_0010b555), iVar5 == 0)) {
      if ((param_4 - 1U != uVar18) && (lVar15 = *(long *)(uVar1 + param_3 + 8), lVar15 != 0)) {
        uVar17 = uVar18 + 1;
        if (param_1 != '\0') goto code_r0x00104be4;
        uVar18 = integer_arg(lVar15,0x7fffffff);
        set_window_size(0xffffffff,(ulong)uVar18,param_2);
        goto code_r0x00104be4;
      }
      goto code_r0x00105601;
    }
    iVar5 = func_0x00102620(pbVar16,&UNK_0010b55d);
    if (iVar5 == 0) {
      if (param_1 != '\0') goto code_r0x00104be4;
      max_col = screen_columns();
      current_col = 0;
      display_window_size(0,param_2);
      goto code_r0x00104be4;
    }
    iVar5 = func_0x00102620(pbVar16,&UNK_0010b562);
    if (iVar5 == 0) {
      if (param_4 - 1U != uVar18) {
        plVar13 = (long *)(uVar1 + param_3 + 8);
        lVar15 = *plVar13;
        if (lVar15 != 0) {
          uVar18 = uVar18 + 1;
          uVar11 = integer_arg(lVar15,0xffffffffffffffff);
          *(char *)(param_5 + 4) = (char)uVar11;
          uStack152 = uVar1;
          if ((uVar11 & 0xffffffffffffff00) == 0) goto code_r0x001051fa;
          uVar14 = quote(*plVar13);
          uVar10 = func_0x001024f0(0,&UNK_0010b567,5);
          func_0x001026e0(0,0,uVar10,uVar14);
          goto code_r0x001051fa;
        }
      }
      goto code_r0x00105601;
    }
    iVar5 = func_0x00102620(pbVar16,&UNK_0010b583);
    if (iVar5 == 0) {
      if (param_1 != '\0') goto code_r0x00104be4;
      max_col = screen_columns();
      display_speed(param_5,0);
      goto code_r0x00104be4;
    }
    uVar8 = string_to_baud(pbVar16);
    if (uVar8 != 0xffffffff) {
      if (param_1 != '\0') goto code_r0x00104be4;
      func_0x00102730(param_5,(ulong)uVar8);
      goto code_r0x00104edf;
    }
    piVar12 = (int *)func_0x00102450();
    bStack168 = SUB81(&pbStack96,0);
    ppbVar24 = (byte **)0x0;
    pbVar23 = pbVar16;
    do {
      *piVar12 = 0;
      uVar11 = func_0x00102740(pbVar23,&pbStack96,0x10);
      if ((((*piVar12 != 0) || (*pbStack96 != 0x3a)) || (pbStack96 == pbVar23)) ||
         (uVar11 != (uVar11 & 0xffffffff))) goto code_r0x00105503;
      auStack88[(long)ppbVar24] = (uint)uVar11;
      ppbVar24 = (byte **)((long)ppbVar24 + 1);
      pbVar23 = pbStack96 + 1;
    } while (ppbVar24 != (byte **)0x4);
    ppbVar24 = (byte **)0x0;
    *param_5 = auStack88[0];
    param_5[1] = auStack88[1];
    param_5[2] = auStack88[2];
    param_5[3] = auStack88[3];
    while( true ) {
      bVar4 = 0x3a;
      if (ppbVar24 == (byte **)0x1f) {
        bVar4 = 0;
      }
      *piVar12 = 0;
      uVar11 = func_0x00102740(pbVar23,&pbStack96,0x10);
      uVar1 = uStack152;
      uVar18 = uVar6;
      if (((*piVar12 != 0) || (*pbStack96 != bVar4)) ||
         ((pbStack96 == pbVar23 || ((uVar11 & 0xffffffffffffff00) != 0)))) break;
      pbVar23 = pbStack96 + 1;
      *(undefined *)((long)param_5 + 0x11 + (long)ppbVar24) = (char)uVar11;
      ppbVar24 = (byte **)((long)ppbVar24 + 1);
      if (ppbVar24 == (byte **)0x20) goto code_r0x00105660;
    }
code_r0x00105503:
    uStack152 = uVar1;
    uVar14 = quote(pbVar16);
    puVar20 = &UNK_0010b507;
  }
code_r0x001050b1:
  uVar10 = func_0x001024f0(0,puVar20,5);
  bVar27 = false;
  bVar25 = true;
  func_0x001026e0(0,0,uVar10,uVar14);
  usage(1);
code_r0x001050d8:
  lVar15 = 6;
  ppbVar19 = ppbVar24;
  pbVar16 = &UNK_0010b589;
  do {
    if (lVar15 == 0) break;
    lVar15 = lVar15 + -1;
    bVar27 = *(byte *)ppbVar19 < *pbVar16;
    bVar25 = *(byte *)ppbVar19 == *pbVar16;
    ppbVar19 = (byte **)((long)ppbVar19 + (ulong)bVar28 * -2 + 1);
    pbVar16 = pbVar16 + (ulong)bVar28 * -2 + 1;
  } while (bVar25);
  if (((!bVar27 && !bVar25) == bVar27) ||
     (iVar5 = func_0x00102620(ppbVar24,&UNK_0010b58f), iVar5 == 0)) {
    param_5[2] = param_5[2] & 0xfffffccf | 0x120;
    *param_7 = 1;
    uVar1 = uStack152;
    uVar17 = uVar18;
    goto code_r0x00104be4;
  }
code_r0x0010510d:
  iVar5 = func_0x00102620(ppbVar24,&UNK_0010b4a9);
  uVar17 = uVar18;
  if (iVar5 == 0) {
    uVar6 = param_5[2];
    if (bStack168 == false) {
      param_5[2] = uVar6 & 0xfffffccf | 800;
      *param_7 = 1;
      uVar1 = uStack152;
      goto code_r0x00104be4;
    }
code_r0x001052cb:
    param_5[2] = uVar6 & 0xfffffecf | 0x30;
    *param_7 = 1;
    uVar1 = uStack152;
    uVar17 = uVar18;
    goto code_r0x00104be4;
  }
  iVar5 = func_0x00102620(ppbVar24,&UNK_0010b883);
  if (iVar5 == 0) {
    uVar18 = *param_5;
    if (bStack168 == false) {
      param_5[1] = param_5[1] & 0xfffffffb;
      *param_5 = uVar18 & 0xffff0000 |
                 (uint)CONCAT11((char)((ulong)uVar18 >> 8),(char)uVar18) & 0xfffffeff;
      *param_7 = 1;
      uVar1 = uStack152;
      goto code_r0x00104be4;
    }
    param_5[1] = param_5[1] & 0xffffffd3 | 4;
    *param_5 = uVar18 & 0xffff0000 |
               (uint)CONCAT11((char)((ulong)(uVar18 & 0xfffffe3f) >> 8),(char)(uVar18 & 0xfffffe3f))
               | 0x100;
    *param_7 = 1;
    uVar1 = uStack152;
    goto code_r0x00104be4;
  }
  iVar5 = func_0x00102620(ppbVar24,&UNK_0010b4ae);
  if (iVar5 == 0) {
    *(undefined2 *)((long)param_5 + 0x13) = 0x157f;
    *param_7 = 1;
    uVar1 = uStack152;
    goto code_r0x00104be4;
  }
  iVar5 = func_0x00102620(ppbVar24,&UNK_0010b4b1);
  if (iVar5 == 0) {
    plVar13 = (long *)control_info;
    while (*plVar13 != 0) {
      *(undefined *)((long)param_5 + plVar13[2] + 0x11) = *(undefined *)(plVar13 + 1);
      plVar13 = plVar13 + 3;
    }
    puVar22 = mode_info;
    do {
      if (*(long *)puVar22 == 0) goto code_r0x001051fa;
      bVar4 = *(byte *)((long)puVar22 + 0xc);
      if ((bVar4 & 0x10) == 0) {
        if ((bVar4 & 1) == 0) {
          if ((bVar4 & 2) != 0) {
            puVar9 = (uint *)mode_type_flag((ulong)*(uint *)((long *)puVar22 + 1),param_5);
            if (puVar9 == (uint *)0x0) goto code_r0x0010563c;
            *puVar9 = *puVar9 & ~((uint)((long *)puVar22)[2] | *(uint *)((long *)puVar22 + 3));
          }
        }
        else {
          puVar9 = (uint *)mode_type_flag((ulong)*(uint *)((long *)puVar22 + 1),param_5);
          if (puVar9 == (uint *)0x0) {
            func_0x001025a0(&UNK_0010b4c1,&UNK_0010b4b6,0x8cb,__PRETTY_FUNCTION___7410);
code_r0x0010563c:
            func_0x001025a0(&UNK_0010b4c1,&UNK_0010b4b6,0x8d1,__PRETTY_FUNCTION___7410);
            goto code_r0x0010565b;
          }
          *puVar9 = ~*(uint *)((long *)puVar22 + 3) & *puVar9 | *(uint *)((long *)puVar22 + 2);
        }
      }
      puVar22 = (undefined1 *)((long *)puVar22 + 4);
    } while( true );
  }
  iVar5 = func_0x00102620(ppbVar24,&UNK_0010b4c7);
  if (iVar5 == 0) {
    if (bStack168 == false) {
      param_5[3] = param_5[3] & 0xfffffffd;
      *param_7 = 1;
      uVar1 = uStack152;
      goto code_r0x00104be4;
    }
    param_5[3] = param_5[3] | 2;
    *param_7 = 1;
    uVar1 = uStack152;
    goto code_r0x00104be4;
  }
  iVar5 = func_0x00102620(ppbVar24,&UNK_0010b4ce);
  if (iVar5 == 0) {
    uVar18 = param_5[2];
    if (bStack168 == false) {
      param_5[2] = uVar18 & 0xfffffecf | 0x30;
      *param_5 = *param_5 & 0xffffffdf;
      *param_7 = 1;
      uVar1 = (ulong)uVar18;
      goto code_r0x00104be4;
    }
    param_5[2] = uVar18 & 0xfffffecf | 0x120;
    *param_5 = *param_5 | 0x20;
    *param_7 = 1;
    uVar1 = (ulong)uVar18;
    goto code_r0x00104be4;
  }
  iVar5 = func_0x00102620(ppbVar24,&UNK_0010b4d4);
  if (iVar5 == 0) {
    uVar18 = param_5[2];
    if (bStack168 == false) {
      param_5[2] = uVar18 & 0xfffffecf | 0x30;
      *param_5 = *param_5 & 0xffffffdf;
      param_5[1] = param_5[1] & 0xfffffffe;
      *param_7 = 1;
      uVar1 = (ulong)uVar18;
      goto code_r0x00104be4;
    }
    param_5[2] = uVar18 & 0xfffffecf | 0x120;
    *param_5 = *param_5 | 0x20;
    param_5[1] = param_5[1] | 1;
    *param_7 = 1;
    uVar1 = (ulong)uVar18;
    goto code_r0x00104be4;
  }
  iVar5 = func_0x00102620(ppbVar24,&UNK_0010b4db);
  if ((iVar5 != 0) && (iVar5 = func_0x00102620(ppbVar24,&UNK_0010b4df), iVar5 != 0)) {
    iVar5 = func_0x00102620(ppbVar24,&UNK_0010b4e6);
    if (iVar5 == 0) {
      if (bStack168 == false) {
        *param_5 = *param_5 & 0xfffff7ff;
        *param_7 = 1;
        uVar1 = uStack152;
        goto code_r0x00104be4;
      }
      *param_5 = *param_5 | 0x800;
      *param_7 = 1;
      uVar1 = uStack152;
      goto code_r0x00104be4;
    }
    iVar5 = func_0x00102620(ppbVar24,&UNK_0010b4ee);
    if (iVar5 != 0) {
      iVar5 = func_0x00102620(ppbVar24,&UNK_0010b4f3);
      if ((iVar5 != 0) && (iVar5 = func_0x00102620(ppbVar24,&UNK_0010b4f9), iVar5 != 0)) {
        iVar5 = func_0x00102620(ppbVar24,&UNK_0010b4ff);
        if (iVar5 == 0) {
          param_5[3] = param_5[3] | 0xa10;
          *param_7 = 1;
          uVar1 = uStack152;
          goto code_r0x00104be4;
        }
        iVar5 = func_0x00102620(ppbVar24,&UNK_0010b503);
        if (iVar5 != 0) goto code_r0x001051fa;
        *param_5 = *param_5 & 0xfffff7ff;
        *(undefined *)((long)param_5 + 0x11) = 3;
        *(undefined2 *)((long)param_5 + 0x13) = 0x157f;
        param_5[3] = param_5[3] | 0xa10;
        *param_7 = 1;
        uVar1 = uStack152;
        goto code_r0x00104be4;
      }
      if (bStack168 == false) {
        param_5[1] = param_5[1] | 2;
        param_5[3] = param_5[3] | 4;
        *param_5 = *param_5 | 0x200;
        *param_7 = 1;
        uVar1 = uStack152;
        goto code_r0x00104be4;
      }
      param_5[1] = param_5[1] & 0xfffffffd;
      param_5[3] = param_5[3] & 0xfffffffb;
      *param_5 = *param_5 & 0xfffffdff;
      *param_7 = 1;
      uVar1 = uStack152;
      goto code_r0x00104be4;
    }
    if (bStack168 == false) {
      param_5[1] = param_5[1] & 0xffffe7ff;
      *param_7 = 1;
      uVar1 = uStack152;
      goto code_r0x00104be4;
    }
    param_5[1] = param_5[1] | 0x1800;
    *param_7 = 1;
    uVar1 = uStack152;
    goto code_r0x00104be4;
  }
  if (*(char *)ppbVar24 == 'r') {
    if (bStack168 != false) goto code_r0x00105775;
  }
  else {
    if ((*(char *)ppbVar24 == 'c') && (bStack168 == false)) {
code_r0x00105775:
      *param_5 = *param_5 | 0x526;
      param_5[1] = param_5[1] | 1;
      param_5[3] = param_5[3] | 3;
      *param_7 = 1;
      uVar1 = uStack152;
      goto code_r0x00104be4;
    }
  }
  *param_5 = 0;
  param_5[1] = param_5[1] & 0xfffffffe;
  param_5[3] = param_5[3] & 0xfffffff8;
  *(undefined2 *)((long)param_5 + 0x16) = 0x100;
  *param_7 = 1;
  uVar1 = uStack152;
  goto code_r0x00104be4;
}

