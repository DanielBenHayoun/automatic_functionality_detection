
/* WARNING: Could not reconcile some variable overlaps */

ulong uid_to_name(ulong param_1,undefined *param_2,undefined8 param_3,uint param_4,int param_5,
                 uint param_6)

{
  byte bVar1;
  undefined4 uVar2;
  byte *pbVar3;
  ulong uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  long *plVar8;
  undefined8 uVar9;
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
  undefined8 uStack448;
  long lStack440;
  ulong uStack432;
  int iStack420;
  ulong auStack400 [18];
  ulong uStack256;
  ulong uStack248;
  int iStack228;
  uint uStack224;
  ulong uStack104;
  ulong uStack88;
  undefined auStack40 [8];
  int *piStack32;
  long lStack16;
  
  bVar32 = 0;
  uStack88 = param_1 & 0xffffffff;
  puVar21 = auStack40;
  lStack16 = *(long *)(in_FS_OFFSET + 0x28);
  plVar8 = (long *)func_0x00101a50();
  if (plVar8 == (long *)0x0) {
    lVar10 = umaxtostr(uStack88);
  }
  else {
    lVar10 = *plVar8;
    puVar21 = param_2;
  }
  uVar9 = xstrdup();
  if (lStack16 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar9;
  }
  func_0x00101ad0();
  uVar25 = *(ushort *)(puVar21 + 0x70);
  uVar19 = (ulong)uVar25;
  uStack104 = *(ulong *)(in_FS_OFFSET + 0x28);
  pbVar3 = *(byte **)(puVar21 + 0x38);
  uVar4 = extraout_RDX & 0xffffffff;
  switch(uVar25) {
  case 1:
    uVar28 = (ulong)*(byte *)(piStack32 + 1);
    if (*(byte *)(piStack32 + 1) != 0) {
      plVar8 = *(long **)(piStack32 + 2);
      if (plVar8 == (long *)0x0) goto code_r0x00102fe0;
      if (*(long *)(puVar21 + 0x80) != *plVar8) goto code_r0x00102fe0;
      bVar18 = *(ulong *)(puVar21 + 0x78) < (ulong)plVar8[1];
      bVar29 = *(ulong *)(puVar21 + 0x78) == plVar8[1];
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
        uVar9 = quotearg_style(4,pbVar3);
        uVar13 = func_0x00101a80(0,&UNK_0010b780,5);
        func_0x00101cf0(0,0,uVar13,uVar9);
      }
      else {
        uVar9 = quotearg_n_style(1,4);
        uVar13 = quotearg_n_style(0,4,pbVar3);
        uVar16 = func_0x00101a80(0,&UNK_0010b7b0,5);
        func_0x00101cf0(0,0,uVar16,uVar13,uVar9);
      }
      uVar28 = 0;
      uVar9 = func_0x00101a80(0,&UNK_0010b7f0,5);
      func_0x00101cf0(0,0,uVar9);
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
      uVar9 = quotearg_n_style_colon(0,3,pbVar3);
      uVar13 = func_0x00101a80(0,&UNK_0010b828,5);
      func_0x00101cf0(0,0,uVar13,uVar9);
      goto code_r0x00102fe0;
    }
    break;
  case 4:
    bVar32 = *(byte *)((long)piStack32 + 0x11);
    if (bVar32 == 0) {
      uVar9 = quotearg_style(4,pbVar3);
      puVar23 = &UNK_0010b6a8;
code_r0x00102fbe:
      puVar23 = (undefined *)func_0x00101a80(0,puVar23,5);
      uVar26 = *(uint *)(puVar21 + 0x40);
code_r0x00102f68:
      uVar28 = (ulong)bVar32;
      func_0x00101cf0(0,(ulong)uVar26,puVar23,uVar9);
      iVar6 = *piStack32;
      goto joined_r0x00102f76;
    }
    goto code_r0x00102efe;
  case 6:
    if (*(char *)(piStack32 + 1) == '\0') {
code_r0x00102fda:
      uVar28 = 1;
      goto code_r0x00102fe0;
    }
    break;
  case 7:
    bVar32 = *(byte *)((long)piStack32 + 0x11);
    if (bVar32 == 0) {
      uVar9 = quotearg_n_style_colon(0,3,pbVar3);
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
    bVar32 = *(byte *)((long)piStack32 + 0x11);
    if (bVar32 == 0) {
      uVar9 = quotearg_style(4,pbVar3);
      puVar23 = &UNK_0010b697;
      goto code_r0x00102fbe;
    }
code_r0x00102efe:
    iVar6 = *piStack32;
    uVar28 = 0;
joined_r0x00102f76:
    if (iVar6 == 2) goto code_r0x00102d62;
    if (iVar6 != 0) goto code_r0x00102d62;
    uVar28 = 0;
    iStack420 = 3;
    goto code_r0x00102f1f;
  }
  uVar9 = *(undefined8 *)(puVar21 + 0x30);
  bVar1 = *(byte *)(piStack32 + 4);
  unaff_R13 = (ulong *)(puVar21 + 0x78);
  bVar18 = param_5 == -1 && param_6 == 0xffffffff;
  uVar28 = uVar19 & 0xffffff00 | (ulong)bVar18;
  uStack448._0_4_ = (int)uVar4;
  if (((bVar18) && (*piStack32 == 2)) && (*(long *)(piStack32 + 2) == 0)) {
    if (bVar1 != 0) goto code_r0x00102db8;
    if (((uVar25 & 0xfffd) != 4) && (1 < (ushort)(uVar25 - 1))) goto code_r0x00102c17;
    uVar26 = *(uint *)(lVar10 + 0x2c);
code_r0x00102c27:
    iVar6 = func_0x00101d70((ulong)uVar26,uVar9,uVar4,(ulong)param_4,0x100);
    uVar28 = uVar19 & 0xffffff00 | (ulong)(iVar6 == 0);
    if ((iVar6 != 0) && (piVar11 = (int *)func_0x001019c0(), *piVar11 == 0x5f)) {
      uVar28 = 1;
      if (*piStack32 == 2) goto code_r0x00102d62;
      if (*piStack32 != 0) goto code_r0x00102d62;
      uStack448 = uid_to_name((ulong)*(uint *)((long)unaff_R13 + 0x1c));
      unaff_R13 = (ulong *)gid_to_name((ulong)*(uint *)(unaff_R13 + 4));
      uVar9 = quotearg_style(4,pbVar3);
      uVar13 = func_0x00101a80(0,&UNK_0010ba30,5);
      func_0x00101cd0(1,uVar13,uVar9);
      goto code_r0x00102d50;
    }
code_r0x00102c56:
    if ((char)uVar28 == '\0') goto code_r0x00102c5f;
    iVar6 = *piStack32;
joined_r0x001036f9:
    if (iVar6 == 2) goto code_r0x00102d62;
    if ((int)uStack448 != -1) {
      uVar28 = 1;
      iStack420 = 2;
      if (*(int *)((long)unaff_R13 + 0x1c) != (int)uStack448) goto code_r0x00102c8b;
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
      iStack420 = 2;
      if (*(uint *)(unaff_R13 + 4) != param_4) goto code_r0x00102c8b;
      if (iVar6 != 0) goto code_r0x00102d62;
    }
    uVar28 = 1;
    iStack420 = 4;
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
        if ((bVar30 || bVar29) && (puVar20 = *(ulong **)(piStack32 + 2), puVar20 != (ulong *)0x0))
        goto code_r0x00102bfe;
        goto code_r0x00102c0b;
      }
      if ((bVar30 || bVar29) &&
         ((puVar20 = *(ulong **)(piStack32 + 2), puVar20 != (ulong *)0x0 &&
          (unaff_R13[1] == *puVar20)))) goto code_r0x00103038;
    }
    else {
      if (!bVar30 && !bVar29) {
        if ((*piStack32 != 2) && (*piStack32 == 0)) goto code_r0x00103848;
        goto code_r0x00103638;
      }
      puVar20 = *(ulong **)(piStack32 + 2);
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
            uVar9 = quotearg_style(4,pbVar3);
            uVar13 = func_0x00101a80(0,&UNK_0010b780,5);
            func_0x00101cf0(0,0,uVar13,uVar9);
          }
          else {
            puVar21 = (undefined *)quotearg_n_style(1,4);
            uVar9 = quotearg_n_style(0,4,pbVar3);
            uVar13 = func_0x00101a80(0,&UNK_0010b7b0,5);
            func_0x00101cf0(0,0,uVar13,uVar9,puVar21);
          }
          uVar28 = 0;
          uVar9 = func_0x00101a80(0,&UNK_0010b7f0,5);
          func_0x00101cf0(0,0,uVar9);
          goto code_r0x00102fe0;
        }
      }
code_r0x00102c0b:
      if (!bVar31) goto code_r0x0010382f;
    }
    bVar1 = *(byte *)(piStack32 + 4);
code_r0x00102c17:
    uVar26 = *(uint *)(lVar10 + 0x2c);
    if (bVar1 == 0) goto code_r0x00102c27;
    if (bVar18) {
code_r0x00103170:
      iVar6 = func_0x00101d70((ulong)uVar26,uVar9,uVar4,(ulong)param_4,0);
      uVar28 = uVar19 & 0xffffff00 | (ulong)(iVar6 == 0);
      goto code_r0x00102c56;
    }
    if ((*(uint *)(unaff_R13 + 3) & 0xf000) == 0x8000) {
      uStack432 = 0x900;
    }
    else {
      uStack432 = 0x10900;
      if ((*(uint *)(unaff_R13 + 3) & 0xf000) != 0x4000) goto code_r0x00103170;
    }
    uVar7 = func_0x00101b80((ulong)uVar26,uVar9,uStack432);
    if ((int)uVar7 < 0) {
      piVar11 = (int *)func_0x001019c0();
      if (*piVar11 == 0xd) {
        if ((*(uint *)(unaff_R13 + 3) & 0xf000) == 0x8000) {
          uVar7 = func_0x00101b80((ulong)uVar26,uVar9,(ulong)((uint)uStack432 | 1));
          if (-1 < (int)uVar7) goto code_r0x001032d8;
          if (*piVar11 != 0xd) goto code_r0x00102c5f;
        }
        uVar26 = *(uint *)(lVar10 + 0x2c);
        goto code_r0x00103170;
      }
code_r0x00102c5f:
      uVar28 = (ulong)*(byte *)((long)piStack32 + 0x11);
      if (*(byte *)((long)piStack32 + 0x11) == 0) {
        uVar9 = quotearg_style(4,pbVar3);
        if ((int)uStack448 == -1) {
          puVar23 = &UNK_0010b6f0;
          goto code_r0x0010340f;
        }
        uVar13 = func_0x00101a80(0,&UNK_0010b6d7,5);
        goto code_r0x001032ab;
      }
code_r0x00102c6d:
      iVar6 = *piStack32;
      uVar28 = 0;
    }
    else {
code_r0x001032d8:
      iVar6 = func_0x00101c70(1,(ulong)uVar7,&uStack256);
      if (iVar6 != 0) {
code_r0x001035b0:
        puVar15 = (undefined4 *)func_0x001019c0();
        uVar2 = *puVar15;
        func_0x00101b70((ulong)uVar7);
        *puVar15 = uVar2;
        goto code_r0x00102c5f;
      }
      if ((unaff_R13[1] == uStack248) && (*unaff_R13 == uStack256)) {
        if (param_5 == -1) {
code_r0x001037d8:
          if (param_6 != uStack224) goto code_r0x001036ca;
code_r0x001037e6:
          iVar6 = func_0x00101d20((ulong)uVar7,uVar4,(ulong)param_4,(ulong)bVar1,(ulong)uVar7,
                                  (ulong)param_6);
          if (iVar6 != 0) goto code_r0x001035b0;
          iVar6 = func_0x00101b70((ulong)uVar7);
          if (iVar6 != 0) goto code_r0x00102c5f;
        }
        else {
          if (param_5 == iStack228) {
            if (param_6 != 0xffffffff) goto code_r0x001037d8;
            goto code_r0x001037e6;
          }
code_r0x001036ca:
          puVar15 = (undefined4 *)func_0x001019c0();
          uVar2 = *puVar15;
          func_0x00101b70((ulong)uVar7);
          *puVar15 = uVar2;
        }
        uStack432 = (ulong)bVar1;
        iVar6 = *piStack32;
        uVar28 = uStack432;
        goto joined_r0x001036f9;
      }
      puVar15 = (undefined4 *)func_0x001019c0();
      uVar2 = *puVar15;
      func_0x00101b70((ulong)uVar7);
      iVar6 = *piStack32;
      *puVar15 = uVar2;
    }
  }
  else {
code_r0x00102db8:
    if ((*(uint *)(puVar21 + 0x90) & 0xf000) != 0xa000) goto code_r0x00102bb8;
    unaff_R13 = auStack400;
    iVar6 = func_0x00101b20(1,(ulong)*(uint *)(lVar10 + 0x2c),uVar9);
    if (iVar6 == 0) {
      uVar25 = *(ushort *)(puVar21 + 0x70);
      goto code_r0x00102bb8;
    }
    uVar28 = (ulong)*(byte *)((long)piStack32 + 0x11);
    if (*(byte *)((long)piStack32 + 0x11) != 0) goto code_r0x00102c6d;
    uVar9 = quotearg_style(4,pbVar3);
    puVar23 = &UNK_0010b6c1;
code_r0x0010340f:
    uVar13 = func_0x00101a80(0,puVar23,5);
code_r0x001032ab:
    puVar14 = (uint *)func_0x001019c0();
    func_0x00101cf0(0,(ulong)*puVar14,uVar13,uVar9);
    iVar6 = *piStack32;
  }
  if (iVar6 == 2) goto code_r0x00102d62;
  if (iVar6 != 0) goto code_r0x00102d62;
  iStack420 = 3;
code_r0x00102c8b:
  uStack448 = uid_to_name((ulong)*(uint *)((long)unaff_R13 + 0x1c));
  unaff_R13 = (ulong *)gid_to_name((ulong)*(uint *)(unaff_R13 + 4));
  lVar17 = *(long *)(piStack32 + 8);
  lVar27 = *(long *)(piStack32 + 6);
  do {
    lVar12 = user_group_str(lVar27,lVar17);
    puVar20 = (ulong *)0x0;
    if (lVar17 != 0) {
      puVar20 = unaff_R13;
    }
    lStack440 = lVar12;
    if (lVar27 == 0) {
      uStack432 = user_group_str(0,puVar20);
      if (iStack420 == 3) goto code_r0x00103200;
      if (iStack420 == 4) {
        if (lVar17 == 0) {
          uVar9 = func_0x00101a80(0,&UNK_0010b73f,5);
        }
        else {
          uVar9 = func_0x00101a80(0,&UNK_0010b723,5);
        }
      }
      else {
        if (lVar17 == 0) {
          uVar9 = func_0x00101a80(0,&UNK_0010b705,5);
        }
        else {
          uVar9 = func_0x00101a80(0,&UNK_0010b910,5);
        }
      }
    }
    else {
      uStack432 = user_group_str(uStack448,puVar20);
      if (iStack420 == 3) {
code_r0x00103200:
        if (uStack432 == 0) {
          puVar23 = &UNK_0010b9c0;
          if ((lVar27 == 0) && (puVar23 = &UNK_0010b9e8, lVar17 == 0)) {
            puVar23 = &UNK_0010b998;
          }
          uVar9 = func_0x00101a80(0,puVar23,5);
          lStack440 = 0;
          uStack432 = lVar12;
        }
        else {
          if (lVar27 == 0) {
            if (lVar17 == 0) {
              uVar9 = func_0x00101a80(0,&UNK_0010b998,5);
            }
            else {
              uVar9 = func_0x00101a80(0,&UNK_0010b968,5);
            }
          }
          else {
            uVar9 = func_0x00101a80(0,&UNK_0010b938,5);
          }
        }
      }
      else {
        if (iStack420 == 4) {
          uVar9 = func_0x00101a80(0,&UNK_0010ba10,5);
        }
        else {
          uVar9 = func_0x00101a80(0,&UNK_0010b8e8,5);
        }
      }
    }
    uVar13 = quotearg_style(4,pbVar3);
    func_0x00101cd0(1,uVar9,uVar13,uStack432,lStack440);
    func_0x00101de0(uStack432);
    func_0x00101de0(lStack440);
code_r0x00102d50:
    func_0x00101de0(uStack448);
    func_0x00101de0();
code_r0x00102d62:
    do {
      if (*(char *)(piStack32 + 1) == '\0') {
        rpl_fts_set(lVar10,puVar21,4);
      }
code_r0x00102fe0:
      piStack32 = (int *)(uStack104 ^ *(ulong *)(in_FS_OFFSET + 0x28));
      if (piStack32 == (int *)0x0) {
        return uVar28;
      }
      func_0x00101ad0();
code_r0x0010382f:
      uVar28 = 1;
    } while ((*piStack32 == 2) || (*piStack32 != 0));
code_r0x00103848:
    if (unaff_R13 != (ulong *)0x0) break;
    uVar28 = 1;
    iStack420 = 4;
code_r0x00102f1f:
    lVar17 = *(long *)(piStack32 + 8);
    lVar27 = *(long *)(piStack32 + 6);
    unaff_R13 = (ulong *)0x0;
    uStack448 = 0;
  } while( true );
  iStack420 = 4;
  uVar28 = 1;
  goto code_r0x00102c8b;
}

