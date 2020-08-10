
/* WARNING: Could not reconcile some variable overlaps */

ulong gid_to_name(ulong param_1,undefined *param_2,undefined8 param_3,uint param_4,int param_5,
                 uint param_6)

{
  byte bVar1;
  undefined4 uVar2;
  byte *pbVar3;
  ulong uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  int *piVar11;
  long lVar12;
  undefined8 uVar13;
  uint *puVar14;
  undefined4 *puVar15;
  undefined8 uVar16;
  long lVar17;
  bool bVar18;
  ulong extraout_RDX;
  ulong extraout_RDX_00;
  ulong uVar19;
  ulong *puVar20;
  undefined *puVar21;
  byte *pbVar22;
  undefined *puVar23;
  byte *pbVar24;
  ulong *unaff_R13;
  ushort uVar25;
  uint uVar26;
  long lVar27;
  ulong uVar28;
  long in_FS_OFFSET;
  bool bVar29;
  bool bVar30;
  bool bVar31;
  byte bVar32;
  undefined8 uStack488;
  long lStack480;
  ulong uStack472;
  int iStack460;
  ulong auStack440 [18];
  ulong uStack296;
  ulong uStack288;
  int iStack268;
  uint uStack264;
  ulong uStack144;
  ulong uStack128;
  undefined auStack80 [8];
  int *piStack72;
  long lStack56;
  undefined *puStack48;
  undefined auStack40 [24];
  long lStack16;
  
  bVar32 = 0;
  puVar23 = auStack40;
  lStack16 = *(long *)(in_FS_OFFSET + 0x28);
  puStack48 = &UNK_00102a4c;
  puVar20 = (ulong *)func_0x00101b10();
  if (puVar20 == (ulong *)0x0) {
    puStack48 = &UNK_00102a7a;
    uStack128 = umaxtostr(param_1 & 0xffffffff);
  }
  else {
    uStack128 = *puVar20;
    puVar23 = param_2;
  }
  puStack48 = &UNK_00102a59;
  uVar8 = xstrdup();
  if (lStack16 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar8;
  }
  puStack48 = &UNK_00102a84;
  func_0x00101ad0();
  uStack128 = uStack128 & 0xffffffff;
  puVar21 = auStack80;
  lStack56 = *(long *)(in_FS_OFFSET + 0x28);
  puStack48 = (undefined *)(param_1 & 0xffffffff);
  plVar9 = (long *)func_0x00101a50();
  if (plVar9 == (long *)0x0) {
    lVar10 = umaxtostr(uStack128);
  }
  else {
    lVar10 = *plVar9;
    puVar21 = puVar23;
  }
  uVar8 = xstrdup();
  if (lStack56 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar8;
  }
  func_0x00101ad0();
  uVar25 = *(ushort *)(puVar21 + 0x70);
  uVar19 = (ulong)uVar25;
  uStack144 = *(ulong *)(in_FS_OFFSET + 0x28);
  pbVar3 = *(byte **)(puVar21 + 0x38);
  uVar4 = extraout_RDX & 0xffffffff;
  switch(uVar25) {
  case 1:
    uVar28 = (ulong)*(byte *)(piStack72 + 1);
    if (*(byte *)(piStack72 + 1) != 0) {
      plVar9 = *(long **)(piStack72 + 2);
      if (plVar9 == (long *)0x0) goto code_r0x00102fe0;
      if (*(long *)(puVar21 + 0x80) != *plVar9) goto code_r0x00102fe0;
      bVar18 = *(ulong *)(puVar21 + 0x78) < (ulong)plVar9[1];
      bVar29 = *(ulong *)(puVar21 + 0x78) == plVar9[1];
      if (!bVar29) goto code_r0x00102fe0;
      lVar17 = 2;
      pbVar22 = pbVar3;
      pbVar24 = &UNK_0010bae6;
      do {
        if (lVar17 == 0) break;
        lVar17 = lVar17 + -1;
        bVar18 = *pbVar22 < *pbVar24;
        bVar29 = *pbVar22 == *pbVar24;
        pbVar22 = pbVar22 + (ulong)bVar32 * -2 + 1;
        pbVar24 = pbVar24 + (ulong)bVar32 * -2 + 1;
      } while (bVar29);
      if ((!bVar18 && !bVar29) == bVar18) {
        uVar8 = quotearg_style(4,pbVar3);
        uVar13 = func_0x00101a80(0,&UNK_0010b780,5);
        func_0x00101cf0(0,0,uVar13,uVar8);
      }
      else {
        uVar8 = quotearg_n_style(1,4);
        uVar13 = quotearg_n_style(0,4,pbVar3);
        uVar16 = func_0x00101a80(0,&UNK_0010b7b0,5);
        func_0x00101cf0(0,0,uVar16,uVar13,uVar8);
      }
      uVar28 = 0;
      uVar8 = func_0x00101a80(0,&UNK_0010b7f0,5);
      func_0x00101cf0(0,0,uVar8);
      rpl_fts_set(lVar10,puVar21,4);
      rpl_fts_read(lVar10);
      goto code_r0x00102fe0;
    }
    break;
  case 2:
    cVar5 = cycle_warning_required(lVar10);
    uVar19 = extraout_RDX_00;
    if (cVar5 != '\0') {
      uVar28 = 0;
      uVar8 = quotearg_n_style_colon(0,3,pbVar3);
      uVar13 = func_0x00101a80(0,&UNK_0010b828,5);
      func_0x00101cf0(0,0,uVar13,uVar8);
      goto code_r0x00102fe0;
    }
    break;
  case 4:
    bVar32 = *(byte *)((long)piStack72 + 0x11);
    if (bVar32 == 0) {
      uVar8 = quotearg_style(4,pbVar3);
      puVar23 = &UNK_0010b6a8;
code_r0x00102fbe:
      puVar23 = (undefined *)func_0x00101a80(0,puVar23,5);
      uVar26 = *(uint *)(puVar21 + 0x40);
code_r0x00102f68:
      uVar28 = (ulong)bVar32;
      func_0x00101cf0(0,(ulong)uVar26,puVar23,uVar8);
      iVar6 = *piStack72;
      goto joined_r0x00102f76;
    }
    goto code_r0x00102efe;
  case 6:
    if (*(char *)(piStack72 + 1) == '\0') {
code_r0x00102fda:
      uVar28 = 1;
      goto code_r0x00102fe0;
    }
    break;
  case 7:
    bVar32 = *(byte *)((long)piStack72 + 0x11);
    if (bVar32 == 0) {
      uVar8 = quotearg_n_style_colon(0,3,pbVar3);
      uVar26 = *(uint *)(puVar21 + 0x40);
      puVar23 = &UNK_0010ab29;
      goto code_r0x00102f68;
    }
    goto code_r0x00102efe;
  case 10:
    if ((*(long *)(puVar21 + 0x58) == 0) && (*(long *)(puVar21 + 0x20) == 0)) {
      *(undefined8 *)(puVar21 + 0x20) = 1;
      rpl_fts_set(lVar10);
      goto code_r0x00102fda;
    }
    bVar32 = *(byte *)((long)piStack72 + 0x11);
    if (bVar32 == 0) {
      uVar8 = quotearg_style(4,pbVar3);
      puVar23 = &UNK_0010b697;
      goto code_r0x00102fbe;
    }
code_r0x00102efe:
    iVar6 = *piStack72;
    uVar28 = 0;
joined_r0x00102f76:
    if (iVar6 == 2) goto code_r0x00102d62;
    if (iVar6 != 0) goto code_r0x00102d62;
    uVar28 = 0;
    iStack460 = 3;
    goto code_r0x00102f1f;
  }
  uVar8 = *(undefined8 *)(puVar21 + 0x30);
  bVar1 = *(byte *)(piStack72 + 4);
  unaff_R13 = (ulong *)(puVar21 + 0x78);
  bVar18 = param_5 == -1 && param_6 == 0xffffffff;
  uVar28 = uVar19 & 0xffffff00 | (ulong)bVar18;
  uStack488._0_4_ = (int)uVar4;
  if (((bVar18) && (*piStack72 == 2)) && (*(long *)(piStack72 + 2) == 0)) {
    if (bVar1 != 0) goto code_r0x00102db8;
    if (((uVar25 & 0xfffd) != 4) && (1 < (ushort)(uVar25 - 1))) goto code_r0x00102c17;
    uVar26 = *(uint *)(lVar10 + 0x2c);
code_r0x00102c27:
    iVar6 = func_0x00101d70((ulong)uVar26,uVar8,uVar4,(ulong)param_4,0x100);
    uVar28 = uVar19 & 0xffffff00 | (ulong)(iVar6 == 0);
    if ((iVar6 != 0) && (piVar11 = (int *)func_0x001019c0(), *piVar11 == 0x5f)) {
      uVar28 = 1;
      if (*piStack72 == 2) goto code_r0x00102d62;
      if (*piStack72 != 0) goto code_r0x00102d62;
      uStack488 = uid_to_name((ulong)*(uint *)((long)unaff_R13 + 0x1c));
      unaff_R13 = (ulong *)gid_to_name((ulong)*(uint *)(unaff_R13 + 4));
      uVar8 = quotearg_style(4,pbVar3);
      uVar13 = func_0x00101a80(0,&UNK_0010ba30,5);
      func_0x00101cd0(1,uVar13,uVar8);
      goto code_r0x00102d50;
    }
code_r0x00102c56:
    if ((char)uVar28 == '\0') goto code_r0x00102c5f;
    iVar6 = *piStack72;
joined_r0x001036f9:
    if (iVar6 == 2) goto code_r0x00102d62;
    if ((int)uStack488 != -1) {
      uVar28 = 1;
      iStack460 = 2;
      if (*(int *)((long)unaff_R13 + 0x1c) != (int)uStack488) goto code_r0x00102c8b;
    }
    if (param_4 == 0xffffffff) {
      if (iVar6 != 0) {
code_r0x00103638:
        uVar28 = 1;
        goto code_r0x00102d62;
      }
    }
    else {
      uVar28 = 1;
      iStack460 = 2;
      if (*(uint *)(unaff_R13 + 4) != param_4) goto code_r0x00102c8b;
      if (iVar6 != 0) goto code_r0x00102d62;
    }
    uVar28 = 1;
    iStack460 = 4;
    goto code_r0x00102c8b;
  }
  if (bVar1 == 0) {
code_r0x00102bb8:
    bVar30 = (uVar25 & 0xfffd) == 4;
    bVar29 = (ushort)(uVar25 - 1) < 2;
    bVar31 = bVar30 || bVar29;
    if ((param_5 == -1) || (*(int *)((long)unaff_R13 + 0x1c) == param_5)) {
      if (param_6 != 0xffffffff) {
        bVar31 = *(uint *)(unaff_R13 + 4) == param_6;
        if ((bVar30 || bVar29) && (puVar20 = *(ulong **)(piStack72 + 2), puVar20 != (ulong *)0x0))
        goto code_r0x00102bfe;
        goto code_r0x00102c0b;
      }
      if ((bVar30 || bVar29) &&
         ((puVar20 = *(ulong **)(piStack72 + 2), puVar20 != (ulong *)0x0 &&
          (unaff_R13[1] == *puVar20)))) goto code_r0x00103038;
    }
    else {
      if (!bVar30 && !bVar29) {
        if ((*piStack72 != 2) && (*piStack72 == 0)) goto code_r0x00103848;
        goto code_r0x00103638;
      }
      puVar20 = *(ulong **)(piStack72 + 2);
      if (puVar20 == (ulong *)0x0) goto code_r0x0010382f;
      bVar31 = false;
code_r0x00102bfe:
      if (unaff_R13[1] == *puVar20) {
code_r0x00103038:
        bVar29 = *unaff_R13 < puVar20[1];
        bVar30 = *unaff_R13 == puVar20[1];
        if (bVar30) {
          lVar17 = 2;
          pbVar22 = pbVar3;
          pbVar24 = &UNK_0010bae6;
          do {
            if (lVar17 == 0) break;
            lVar17 = lVar17 + -1;
            bVar29 = *pbVar22 < *pbVar24;
            bVar30 = *pbVar22 == *pbVar24;
            pbVar22 = pbVar22 + (ulong)bVar32 * -2 + 1;
            pbVar24 = pbVar24 + (ulong)bVar32 * -2 + 1;
          } while (bVar30);
          if ((!bVar29 && !bVar30) == bVar29) {
            uVar8 = quotearg_style(4,pbVar3);
            uVar13 = func_0x00101a80(0,&UNK_0010b780,5);
            func_0x00101cf0(0,0,uVar13,uVar8);
          }
          else {
            puVar21 = (undefined *)quotearg_n_style(1,4);
            uVar8 = quotearg_n_style(0,4,pbVar3);
            uVar13 = func_0x00101a80(0,&UNK_0010b7b0,5);
            func_0x00101cf0(0,0,uVar13,uVar8,puVar21);
          }
          uVar28 = 0;
          uVar8 = func_0x00101a80(0,&UNK_0010b7f0,5);
          func_0x00101cf0(0,0,uVar8);
          goto code_r0x00102fe0;
        }
      }
code_r0x00102c0b:
      if (!bVar31) goto code_r0x0010382f;
    }
    bVar1 = *(byte *)(piStack72 + 4);
code_r0x00102c17:
    uVar26 = *(uint *)(lVar10 + 0x2c);
    if (bVar1 == 0) goto code_r0x00102c27;
    if (bVar18) {
code_r0x00103170:
      iVar6 = func_0x00101d70((ulong)uVar26,uVar8,uVar4,(ulong)param_4,0);
      uVar28 = uVar19 & 0xffffff00 | (ulong)(iVar6 == 0);
      goto code_r0x00102c56;
    }
    if ((*(uint *)(unaff_R13 + 3) & 0xf000) == 0x8000) {
      uStack472 = 0x900;
    }
    else {
      uStack472 = 0x10900;
      if ((*(uint *)(unaff_R13 + 3) & 0xf000) != 0x4000) goto code_r0x00103170;
    }
    uVar7 = func_0x00101b80((ulong)uVar26,uVar8,uStack472);
    if ((int)uVar7 < 0) {
      piVar11 = (int *)func_0x001019c0();
      if (*piVar11 == 0xd) {
        if ((*(uint *)(unaff_R13 + 3) & 0xf000) == 0x8000) {
          uVar7 = func_0x00101b80((ulong)uVar26,uVar8,(ulong)((uint)uStack472 | 1));
          if (-1 < (int)uVar7) goto code_r0x001032d8;
          if (*piVar11 != 0xd) goto code_r0x00102c5f;
        }
        uVar26 = *(uint *)(lVar10 + 0x2c);
        goto code_r0x00103170;
      }
code_r0x00102c5f:
      uVar28 = (ulong)*(byte *)((long)piStack72 + 0x11);
      if (*(byte *)((long)piStack72 + 0x11) == 0) {
        uVar8 = quotearg_style(4,pbVar3);
        if ((int)uStack488 == -1) {
          puVar23 = &UNK_0010b6f0;
          goto code_r0x0010340f;
        }
        uVar13 = func_0x00101a80(0,&UNK_0010b6d7,5);
        goto code_r0x001032ab;
      }
code_r0x00102c6d:
      iVar6 = *piStack72;
      uVar28 = 0;
    }
    else {
code_r0x001032d8:
      iVar6 = func_0x00101c70(1,(ulong)uVar7,&uStack296);
      if (iVar6 != 0) {
code_r0x001035b0:
        puVar15 = (undefined4 *)func_0x001019c0();
        uVar2 = *puVar15;
        func_0x00101b70((ulong)uVar7);
        *puVar15 = uVar2;
        goto code_r0x00102c5f;
      }
      if ((unaff_R13[1] == uStack288) && (*unaff_R13 == uStack296)) {
        if (param_5 == -1) {
code_r0x001037d8:
          if (param_6 != uStack264) goto code_r0x001036ca;
code_r0x001037e6:
          iVar6 = func_0x00101d20((ulong)uVar7,uVar4,(ulong)param_4,(ulong)bVar1,(ulong)uVar7,
                                  (ulong)param_6);
          if (iVar6 != 0) goto code_r0x001035b0;
          iVar6 = func_0x00101b70((ulong)uVar7);
          if (iVar6 != 0) goto code_r0x00102c5f;
        }
        else {
          if (param_5 == iStack268) {
            if (param_6 != 0xffffffff) goto code_r0x001037d8;
            goto code_r0x001037e6;
          }
code_r0x001036ca:
          puVar15 = (undefined4 *)func_0x001019c0();
          uVar2 = *puVar15;
          func_0x00101b70((ulong)uVar7);
          *puVar15 = uVar2;
        }
        uStack472 = (ulong)bVar1;
        iVar6 = *piStack72;
        uVar28 = uStack472;
        goto joined_r0x001036f9;
      }
      puVar15 = (undefined4 *)func_0x001019c0();
      uVar2 = *puVar15;
      func_0x00101b70((ulong)uVar7);
      iVar6 = *piStack72;
      *puVar15 = uVar2;
    }
  }
  else {
code_r0x00102db8:
    if ((*(uint *)(puVar21 + 0x90) & 0xf000) != 0xa000) goto code_r0x00102bb8;
    unaff_R13 = auStack440;
    iVar6 = func_0x00101b20(1,(ulong)*(uint *)(lVar10 + 0x2c),uVar8);
    if (iVar6 == 0) {
      uVar25 = *(ushort *)(puVar21 + 0x70);
      goto code_r0x00102bb8;
    }
    uVar28 = (ulong)*(byte *)((long)piStack72 + 0x11);
    if (*(byte *)((long)piStack72 + 0x11) != 0) goto code_r0x00102c6d;
    uVar8 = quotearg_style(4,pbVar3);
    puVar23 = &UNK_0010b6c1;
code_r0x0010340f:
    uVar13 = func_0x00101a80(0,puVar23,5);
code_r0x001032ab:
    puVar14 = (uint *)func_0x001019c0();
    func_0x00101cf0(0,(ulong)*puVar14,uVar13,uVar8);
    iVar6 = *piStack72;
  }
  if (iVar6 == 2) goto code_r0x00102d62;
  if (iVar6 != 0) goto code_r0x00102d62;
  iStack460 = 3;
code_r0x00102c8b:
  uStack488 = uid_to_name((ulong)*(uint *)((long)unaff_R13 + 0x1c));
  unaff_R13 = (ulong *)gid_to_name((ulong)*(uint *)(unaff_R13 + 4));
  lVar17 = *(long *)(piStack72 + 8);
  lVar27 = *(long *)(piStack72 + 6);
  do {
    lVar12 = user_group_str(lVar27,lVar17);
    puVar20 = (ulong *)0x0;
    if (lVar17 != 0) {
      puVar20 = unaff_R13;
    }
    lStack480 = lVar12;
    if (lVar27 == 0) {
      uStack472 = user_group_str(0,puVar20);
      if (iStack460 == 3) goto code_r0x00103200;
      if (iStack460 == 4) {
        if (lVar17 == 0) {
          uVar8 = func_0x00101a80(0,&UNK_0010b73f,5);
        }
        else {
          uVar8 = func_0x00101a80(0,&UNK_0010b723,5);
        }
      }
      else {
        if (lVar17 == 0) {
          uVar8 = func_0x00101a80(0,&UNK_0010b705,5);
        }
        else {
          uVar8 = func_0x00101a80(0,&UNK_0010b910,5);
        }
      }
    }
    else {
      uStack472 = user_group_str(uStack488,puVar20);
      if (iStack460 == 3) {
code_r0x00103200:
        if (uStack472 == 0) {
          puVar23 = &UNK_0010b9c0;
          if ((lVar27 == 0) && (puVar23 = &UNK_0010b9e8, lVar17 == 0)) {
            puVar23 = &UNK_0010b998;
          }
          uVar8 = func_0x00101a80(0,puVar23,5);
          lStack480 = 0;
          uStack472 = lVar12;
        }
        else {
          if (lVar27 == 0) {
            if (lVar17 == 0) {
              uVar8 = func_0x00101a80(0,&UNK_0010b998,5);
            }
            else {
              uVar8 = func_0x00101a80(0,&UNK_0010b968,5);
            }
          }
          else {
            uVar8 = func_0x00101a80(0,&UNK_0010b938,5);
          }
        }
      }
      else {
        if (iStack460 == 4) {
          uVar8 = func_0x00101a80(0,&UNK_0010ba10,5);
        }
        else {
          uVar8 = func_0x00101a80(0,&UNK_0010b8e8,5);
        }
      }
    }
    uVar13 = quotearg_style(4,pbVar3);
    func_0x00101cd0(1,uVar8,uVar13,uStack472,lStack480);
    func_0x00101de0(uStack472);
    func_0x00101de0(lStack480);
code_r0x00102d50:
    func_0x00101de0(uStack488);
    func_0x00101de0();
code_r0x00102d62:
    do {
      if (*(char *)(piStack72 + 1) == '\0') {
        rpl_fts_set(lVar10,puVar21,4);
      }
code_r0x00102fe0:
      piStack72 = (int *)(uStack144 ^ *(ulong *)(in_FS_OFFSET + 0x28));
      if (piStack72 == (int *)0x0) {
        return uVar28;
      }
      func_0x00101ad0();
code_r0x0010382f:
      uVar28 = 1;
    } while ((*piStack72 == 2) || (*piStack72 != 0));
code_r0x00103848:
    if (unaff_R13 != (ulong *)0x0) break;
    uVar28 = 1;
    iStack460 = 4;
code_r0x00102f1f:
    lVar17 = *(long *)(piStack72 + 8);
    lVar27 = *(long *)(piStack72 + 6);
    unaff_R13 = (ulong *)0x0;
    uStack488 = 0;
  } while( true );
  iStack460 = 4;
  uVar28 = 1;
  goto code_r0x00102c8b;
}

