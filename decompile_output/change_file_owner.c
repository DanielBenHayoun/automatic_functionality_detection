
/* WARNING: Could not reconcile some variable overlaps */

ulong change_file_owner(long param_1,long param_2,ulong param_3,uint param_4,int param_5,
                       uint param_6,int *param_7)

{
  byte bVar1;
  undefined4 uVar2;
  byte *pbVar3;
  long *plVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  uint *puVar12;
  undefined4 *puVar13;
  undefined8 uVar14;
  long lVar15;
  bool bVar16;
  ulong extraout_RDX;
  ulong uVar17;
  ulong *puVar18;
  byte *pbVar19;
  undefined *puVar20;
  byte *pbVar21;
  ulong *unaff_R13;
  ushort uVar22;
  uint uVar23;
  long lVar24;
  ulong uVar25;
  long in_FS_OFFSET;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  byte bVar29;
  undefined8 uStack408;
  long lStack400;
  ulong uStack392;
  int iStack380;
  ulong auStack360 [18];
  ulong uStack216;
  ulong uStack208;
  int iStack188;
  uint uStack184;
  ulong uStack64;
  
  bVar29 = 0;
  uVar22 = *(ushort *)(param_2 + 0x70);
  uVar17 = (ulong)uVar22;
  uStack64 = *(ulong *)(in_FS_OFFSET + 0x28);
  pbVar3 = *(byte **)(param_2 + 0x38);
  param_3 = param_3 & 0xffffffff;
  switch(uVar22) {
  case 1:
    uVar25 = (ulong)*(byte *)(param_7 + 1);
    if (*(byte *)(param_7 + 1) != 0) {
      plVar4 = *(long **)(param_7 + 2);
      if (plVar4 == (long *)0x0) goto code_r0x00102fe0;
      if (*(long *)(param_2 + 0x80) != *plVar4) goto code_r0x00102fe0;
      bVar16 = *(ulong *)(param_2 + 0x78) < (ulong)plVar4[1];
      bVar26 = *(ulong *)(param_2 + 0x78) == plVar4[1];
      if (!bVar26) goto code_r0x00102fe0;
      lVar15 = 2;
      pbVar19 = pbVar3;
      pbVar21 = &UNK_0010bae6;
      do {
        if (lVar15 == 0) break;
        lVar15 = lVar15 + -1;
        bVar16 = *pbVar19 < *pbVar21;
        bVar26 = *pbVar19 == *pbVar21;
        pbVar19 = pbVar19 + 1;
        pbVar21 = pbVar21 + 1;
      } while (bVar26);
      if ((!bVar16 && !bVar26) == bVar16) {
        uVar10 = quotearg_style(4,pbVar3);
        uVar11 = func_0x00101a80(0,&UNK_0010b780,5);
        func_0x00101cf0(0,0,uVar11,uVar10);
      }
      else {
        uVar10 = quotearg_n_style(1,4);
        uVar11 = quotearg_n_style(0,4,pbVar3);
        uVar14 = func_0x00101a80(0,&UNK_0010b7b0,5);
        func_0x00101cf0(0,0,uVar14,uVar11,uVar10);
      }
      uVar25 = 0;
      uVar10 = func_0x00101a80(0,&UNK_0010b7f0,5);
      func_0x00101cf0(0,0,uVar10);
      rpl_fts_set(param_1,param_2,4);
      rpl_fts_read(param_1);
      goto code_r0x00102fe0;
    }
    break;
  case 2:
    cVar5 = cycle_warning_required(param_1);
    uVar17 = extraout_RDX;
    if (cVar5 != '\0') {
      uVar25 = 0;
      uVar10 = quotearg_n_style_colon(0,3,pbVar3);
      uVar11 = func_0x00101a80(0,&UNK_0010b828,5);
      func_0x00101cf0(0,0,uVar11,uVar10);
      goto code_r0x00102fe0;
    }
    break;
  case 4:
    bVar29 = *(byte *)((long)param_7 + 0x11);
    if (bVar29 == 0) {
      uVar10 = quotearg_style(4,pbVar3);
      puVar20 = &UNK_0010b6a8;
code_r0x00102fbe:
      puVar20 = (undefined *)func_0x00101a80(0,puVar20,5);
      uVar23 = *(uint *)(param_2 + 0x40);
code_r0x00102f68:
      uVar25 = (ulong)bVar29;
      func_0x00101cf0(0,(ulong)uVar23,puVar20,uVar10);
      iVar6 = *param_7;
      goto joined_r0x00102f76;
    }
    goto code_r0x00102efe;
  case 6:
    if (*(char *)(param_7 + 1) == '\0') {
code_r0x00102fda:
      uVar25 = 1;
      goto code_r0x00102fe0;
    }
    break;
  case 7:
    bVar29 = *(byte *)((long)param_7 + 0x11);
    if (bVar29 == 0) {
      uVar10 = quotearg_n_style_colon(0,3,pbVar3);
      uVar23 = *(uint *)(param_2 + 0x40);
      puVar20 = &UNK_0010ab29;
      goto code_r0x00102f68;
    }
    goto code_r0x00102efe;
  case 10:
    if ((*(long *)(param_2 + 0x58) == 0) && (*(long *)(param_2 + 0x20) == 0)) {
      *(undefined8 *)(param_2 + 0x20) = 1;
      rpl_fts_set(param_1,param_2,1);
      goto code_r0x00102fda;
    }
    bVar29 = *(byte *)((long)param_7 + 0x11);
    if (bVar29 == 0) {
      uVar10 = quotearg_style(4,pbVar3);
      puVar20 = &UNK_0010b697;
      goto code_r0x00102fbe;
    }
code_r0x00102efe:
    iVar6 = *param_7;
    uVar25 = 0;
joined_r0x00102f76:
    if (iVar6 == 2) goto code_r0x00102d62;
    if (iVar6 != 0) goto code_r0x00102d62;
    uVar25 = 0;
    iStack380 = 3;
    goto code_r0x00102f1f;
  }
  uVar10 = *(undefined8 *)(param_2 + 0x30);
  bVar1 = *(byte *)(param_7 + 4);
  unaff_R13 = (ulong *)(param_2 + 0x78);
  bVar16 = param_5 == -1 && param_6 == 0xffffffff;
  uVar25 = uVar17 & 0xffffff00 | (ulong)bVar16;
  uStack408._0_4_ = (int)param_3;
  if (((bVar16) && (*param_7 == 2)) && (*(long *)(param_7 + 2) == 0)) {
    if (bVar1 != 0) goto code_r0x00102db8;
    if (((uVar22 & 0xfffd) != 4) && (1 < (ushort)(uVar22 - 1))) goto code_r0x00102c17;
    uVar23 = *(uint *)(param_1 + 0x2c);
code_r0x00102c27:
    iVar6 = func_0x00101d70((ulong)uVar23,uVar10,param_3,(ulong)param_4,0x100);
    uVar25 = uVar17 & 0xffffff00 | (ulong)(iVar6 == 0);
    if ((iVar6 != 0) && (piVar8 = (int *)func_0x001019c0(), *piVar8 == 0x5f)) {
      uVar25 = 1;
      if (*param_7 == 2) goto code_r0x00102d62;
      if (*param_7 != 0) goto code_r0x00102d62;
      uStack408 = uid_to_name((ulong)*(uint *)((long)unaff_R13 + 0x1c));
      unaff_R13 = (ulong *)gid_to_name((ulong)*(uint *)(unaff_R13 + 4));
      uVar10 = quotearg_style(4,pbVar3);
      uVar11 = func_0x00101a80(0,&UNK_0010ba30,5);
      func_0x00101cd0(1,uVar11,uVar10);
      goto code_r0x00102d50;
    }
code_r0x00102c56:
    if ((char)uVar25 == '\0') goto code_r0x00102c5f;
    iVar6 = *param_7;
joined_r0x001036f9:
    if (iVar6 == 2) goto code_r0x00102d62;
    if ((int)uStack408 != -1) {
      uVar25 = 1;
      iStack380 = 2;
      if (*(int *)((long)unaff_R13 + 0x1c) != (int)uStack408) goto code_r0x00102c8b;
    }
    if (param_4 == 0xffffffff) {
      if (iVar6 != 0) {
code_r0x00103638:
        uVar25 = 1;
        goto code_r0x00102d62;
      }
    }
    else {
      uVar25 = 1;
      iStack380 = 2;
      if (*(uint *)(unaff_R13 + 4) != param_4) goto code_r0x00102c8b;
      if (iVar6 != 0) goto code_r0x00102d62;
    }
    uVar25 = 1;
    iStack380 = 4;
    goto code_r0x00102c8b;
  }
  if (bVar1 == 0) {
code_r0x00102bb8:
    bVar27 = (uVar22 & 0xfffd) == 4;
    bVar26 = (ushort)(uVar22 - 1) < 2;
    bVar28 = bVar27 || bVar26;
    if ((param_5 == -1) || (*(int *)((long)unaff_R13 + 0x1c) == param_5)) {
      if (param_6 != 0xffffffff) {
        bVar28 = *(uint *)(unaff_R13 + 4) == param_6;
        if ((bVar27 || bVar26) && (puVar18 = *(ulong **)(param_7 + 2), puVar18 != (ulong *)0x0))
        goto code_r0x00102bfe;
        goto code_r0x00102c0b;
      }
      if ((bVar27 || bVar26) &&
         ((puVar18 = *(ulong **)(param_7 + 2), puVar18 != (ulong *)0x0 && (unaff_R13[1] == *puVar18)
          ))) goto code_r0x00103038;
    }
    else {
      if (!bVar27 && !bVar26) {
        if ((*param_7 != 2) && (*param_7 == 0)) goto code_r0x00103848;
        goto code_r0x00103638;
      }
      puVar18 = *(ulong **)(param_7 + 2);
      if (puVar18 == (ulong *)0x0) goto code_r0x0010382f;
      bVar28 = false;
code_r0x00102bfe:
      if (unaff_R13[1] == *puVar18) {
code_r0x00103038:
        bVar26 = *unaff_R13 < puVar18[1];
        bVar27 = *unaff_R13 == puVar18[1];
        if (bVar27) {
          lVar15 = 2;
          pbVar19 = pbVar3;
          pbVar21 = &UNK_0010bae6;
          do {
            if (lVar15 == 0) break;
            lVar15 = lVar15 + -1;
            bVar26 = *pbVar19 < *pbVar21;
            bVar27 = *pbVar19 == *pbVar21;
            pbVar19 = pbVar19 + (ulong)bVar29 * -2 + 1;
            pbVar21 = pbVar21 + (ulong)bVar29 * -2 + 1;
          } while (bVar27);
          if ((!bVar26 && !bVar27) == bVar26) {
            uVar10 = quotearg_style(4,pbVar3);
            uVar11 = func_0x00101a80(0,&UNK_0010b780,5);
            func_0x00101cf0(0,0,uVar11,uVar10);
          }
          else {
            param_2 = quotearg_n_style(1,4);
            uVar10 = quotearg_n_style(0,4,pbVar3);
            uVar11 = func_0x00101a80(0,&UNK_0010b7b0,5);
            func_0x00101cf0(0,0,uVar11,uVar10,param_2);
          }
          uVar25 = 0;
          uVar10 = func_0x00101a80(0,&UNK_0010b7f0,5);
          func_0x00101cf0(0,0,uVar10);
          goto code_r0x00102fe0;
        }
      }
code_r0x00102c0b:
      if (!bVar28) goto code_r0x0010382f;
    }
    bVar1 = *(byte *)(param_7 + 4);
code_r0x00102c17:
    uVar23 = *(uint *)(param_1 + 0x2c);
    if (bVar1 == 0) goto code_r0x00102c27;
    if (bVar16) {
code_r0x00103170:
      iVar6 = func_0x00101d70((ulong)uVar23,uVar10,param_3,(ulong)param_4,0);
      uVar25 = uVar17 & 0xffffff00 | (ulong)(iVar6 == 0);
      goto code_r0x00102c56;
    }
    if ((*(uint *)(unaff_R13 + 3) & 0xf000) == 0x8000) {
      uStack392 = 0x900;
    }
    else {
      uStack392 = 0x10900;
      if ((*(uint *)(unaff_R13 + 3) & 0xf000) != 0x4000) goto code_r0x00103170;
    }
    uVar7 = func_0x00101b80((ulong)uVar23,uVar10,uStack392);
    if ((int)uVar7 < 0) {
      piVar8 = (int *)func_0x001019c0();
      if (*piVar8 == 0xd) {
        if ((*(uint *)(unaff_R13 + 3) & 0xf000) == 0x8000) {
          uVar7 = func_0x00101b80((ulong)uVar23,uVar10,(ulong)((uint)uStack392 | 1));
          if (-1 < (int)uVar7) goto code_r0x001032d8;
          if (*piVar8 != 0xd) goto code_r0x00102c5f;
        }
        uVar23 = *(uint *)(param_1 + 0x2c);
        goto code_r0x00103170;
      }
code_r0x00102c5f:
      uVar25 = (ulong)*(byte *)((long)param_7 + 0x11);
      if (*(byte *)((long)param_7 + 0x11) == 0) {
        uVar10 = quotearg_style(4,pbVar3);
        if ((int)uStack408 == -1) {
          puVar20 = &UNK_0010b6f0;
          goto code_r0x0010340f;
        }
        uVar11 = func_0x00101a80(0,&UNK_0010b6d7,5);
        goto code_r0x001032ab;
      }
code_r0x00102c6d:
      iVar6 = *param_7;
      uVar25 = 0;
    }
    else {
code_r0x001032d8:
      iVar6 = func_0x00101c70(1,(ulong)uVar7,&uStack216);
      if (iVar6 != 0) {
code_r0x001035b0:
        puVar13 = (undefined4 *)func_0x001019c0();
        uVar2 = *puVar13;
        func_0x00101b70((ulong)uVar7);
        *puVar13 = uVar2;
        goto code_r0x00102c5f;
      }
      if ((unaff_R13[1] == uStack208) && (*unaff_R13 == uStack216)) {
        if (param_5 == -1) {
code_r0x001037d8:
          if (param_6 != uStack184) goto code_r0x001036ca;
code_r0x001037e6:
          iVar6 = func_0x00101d20((ulong)uVar7,param_3,(ulong)param_4,(ulong)bVar1,(ulong)uVar7,
                                  (ulong)param_6);
          if (iVar6 != 0) goto code_r0x001035b0;
          iVar6 = func_0x00101b70((ulong)uVar7);
          if (iVar6 != 0) goto code_r0x00102c5f;
        }
        else {
          if (param_5 == iStack188) {
            if (param_6 != 0xffffffff) goto code_r0x001037d8;
            goto code_r0x001037e6;
          }
code_r0x001036ca:
          puVar13 = (undefined4 *)func_0x001019c0();
          uVar2 = *puVar13;
          func_0x00101b70((ulong)uVar7);
          *puVar13 = uVar2;
        }
        uStack392 = (ulong)bVar1;
        iVar6 = *param_7;
        uVar25 = uStack392;
        goto joined_r0x001036f9;
      }
      puVar13 = (undefined4 *)func_0x001019c0();
      uVar2 = *puVar13;
      func_0x00101b70((ulong)uVar7);
      iVar6 = *param_7;
      *puVar13 = uVar2;
    }
  }
  else {
code_r0x00102db8:
    if ((*(uint *)(param_2 + 0x90) & 0xf000) != 0xa000) goto code_r0x00102bb8;
    unaff_R13 = auStack360;
    iVar6 = func_0x00101b20(1,(ulong)*(uint *)(param_1 + 0x2c),uVar10);
    if (iVar6 == 0) {
      uVar22 = *(ushort *)(param_2 + 0x70);
      goto code_r0x00102bb8;
    }
    uVar25 = (ulong)*(byte *)((long)param_7 + 0x11);
    if (*(byte *)((long)param_7 + 0x11) != 0) goto code_r0x00102c6d;
    uVar10 = quotearg_style(4,pbVar3);
    puVar20 = &UNK_0010b6c1;
code_r0x0010340f:
    uVar11 = func_0x00101a80(0,puVar20,5);
code_r0x001032ab:
    puVar12 = (uint *)func_0x001019c0();
    func_0x00101cf0(0,(ulong)*puVar12,uVar11,uVar10);
    iVar6 = *param_7;
  }
  if (iVar6 == 2) goto code_r0x00102d62;
  if (iVar6 != 0) goto code_r0x00102d62;
  iStack380 = 3;
code_r0x00102c8b:
  uStack408 = uid_to_name((ulong)*(uint *)((long)unaff_R13 + 0x1c));
  unaff_R13 = (ulong *)gid_to_name((ulong)*(uint *)(unaff_R13 + 4));
  lVar15 = *(long *)(param_7 + 8);
  lVar24 = *(long *)(param_7 + 6);
  do {
    lVar9 = user_group_str(lVar24,lVar15);
    puVar18 = (ulong *)0x0;
    if (lVar15 != 0) {
      puVar18 = unaff_R13;
    }
    lStack400 = lVar9;
    if (lVar24 == 0) {
      uStack392 = user_group_str(0,puVar18);
      if (iStack380 == 3) goto code_r0x00103200;
      if (iStack380 == 4) {
        if (lVar15 == 0) {
          uVar10 = func_0x00101a80(0,&UNK_0010b73f,5);
        }
        else {
          uVar10 = func_0x00101a80(0,&UNK_0010b723,5);
        }
      }
      else {
        if (lVar15 == 0) {
          uVar10 = func_0x00101a80(0,&UNK_0010b705,5);
        }
        else {
          uVar10 = func_0x00101a80(0,&UNK_0010b910,5);
        }
      }
    }
    else {
      uStack392 = user_group_str(uStack408,puVar18);
      if (iStack380 == 3) {
code_r0x00103200:
        if (uStack392 == 0) {
          puVar20 = &UNK_0010b9c0;
          if ((lVar24 == 0) && (puVar20 = &UNK_0010b9e8, lVar15 == 0)) {
            puVar20 = &UNK_0010b998;
          }
          uVar10 = func_0x00101a80(0,puVar20,5);
          lStack400 = 0;
          uStack392 = lVar9;
        }
        else {
          if (lVar24 == 0) {
            if (lVar15 == 0) {
              uVar10 = func_0x00101a80(0,&UNK_0010b998,5);
            }
            else {
              uVar10 = func_0x00101a80(0,&UNK_0010b968,5);
            }
          }
          else {
            uVar10 = func_0x00101a80(0,&UNK_0010b938,5);
          }
        }
      }
      else {
        if (iStack380 == 4) {
          uVar10 = func_0x00101a80(0,&UNK_0010ba10,5);
        }
        else {
          uVar10 = func_0x00101a80(0,&UNK_0010b8e8,5);
        }
      }
    }
    uVar11 = quotearg_style(4,pbVar3);
    func_0x00101cd0(1,uVar10,uVar11,uStack392,lStack400);
    func_0x00101de0(uStack392);
    func_0x00101de0(lStack400);
code_r0x00102d50:
    func_0x00101de0(uStack408);
    func_0x00101de0();
code_r0x00102d62:
    do {
      if (*(char *)(param_7 + 1) == '\0') {
        rpl_fts_set(param_1,param_2,4);
      }
code_r0x00102fe0:
      param_7 = (int *)(uStack64 ^ *(ulong *)(in_FS_OFFSET + 0x28));
      if (param_7 == (int *)0x0) {
        return uVar25;
      }
      func_0x00101ad0();
code_r0x0010382f:
      uVar25 = 1;
    } while ((*param_7 == 2) || (*param_7 != 0));
code_r0x00103848:
    if (unaff_R13 != (ulong *)0x0) break;
    uVar25 = 1;
    iStack380 = 4;
code_r0x00102f1f:
    lVar15 = *(long *)(param_7 + 8);
    lVar24 = *(long *)(param_7 + 6);
    unaff_R13 = (ulong *)0x0;
    uStack408 = 0;
  } while( true );
  iStack380 = 4;
  uVar25 = 1;
  goto code_r0x00102c8b;
}

