
ulong xstrcoll_df_version(byte **param_1,byte **param_2)

{
  int iVar1;
  long lVar2;
  byte bVar3;
  long lVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint uVar12;
  ulong uVar13;
  byte *pbVar14;
  ulong uVar15;
  byte *unaff_R13;
  byte *pbVar16;
  long in_FS_OFFSET;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  byte bVar20;
  byte *pbStack80;
  byte *pbStack72;
  ulong uStack64;
  
  bVar20 = 0;
  iVar1 = *(int *)(param_2 + 0x15);
  if ((*(int *)(param_1 + 0x15) == 3) || (*(int *)(param_1 + 0x15) == 9)) {
    if ((iVar1 != 3 && iVar1 != 9) && ((*(uint *)((long)param_2 + 0xac) & 0xf000) != 0x4000)) {
      return 0xffffffff;
    }
  }
  else {
    uVar5 = *(uint *)((long)param_1 + 0xac) & 0xf000;
    if ((iVar1 != 3 && iVar1 != 9) && ((*(uint *)((long)param_2 + 0xac) & 0xf000) != 0x4000)) {
      if (uVar5 == 0x4000) {
        return 0xffffffff;
      }
    }
    else {
      if (uVar5 != 0x4000) {
        return 1;
      }
    }
  }
  pbVar9 = *param_2;
  pbVar7 = *param_1;
  uStack64 = *(ulong *)(in_FS_OFFSET + 0x28);
  uVar5 = func_0x00103590();
  uVar13 = (ulong)uVar5;
  if (uVar5 == 0) goto code_r0x0010d4c8;
  if (*pbVar7 == 0) {
code_r0x0010d608:
    uVar13 = 0xffffffff;
  }
  else {
    bVar3 = *pbVar9;
    bVar17 = false;
    bVar19 = bVar3 == 0;
    if (!bVar19) {
      lVar4 = 2;
      pbVar16 = &UNK_00119f84;
      pbVar10 = pbVar7;
      do {
        if (lVar4 == 0) break;
        lVar4 = lVar4 + -1;
        bVar17 = *pbVar16 < *pbVar10;
        bVar19 = *pbVar16 == *pbVar10;
        pbVar16 = pbVar16 + (ulong)bVar20 * -2 + 1;
        pbVar10 = pbVar10 + (ulong)bVar20 * -2 + 1;
      } while (bVar19);
      bVar18 = false;
      bVar17 = (!bVar17 && !bVar19) == bVar17;
      if (bVar17) goto code_r0x0010d608;
      lVar4 = 2;
      pbVar16 = &UNK_00119f84;
      pbVar10 = pbVar9;
      do {
        if (lVar4 == 0) break;
        lVar4 = lVar4 + -1;
        bVar18 = *pbVar16 < *pbVar10;
        bVar17 = *pbVar16 == *pbVar10;
        pbVar16 = pbVar16 + (ulong)bVar20 * -2 + 1;
        pbVar10 = pbVar10 + (ulong)bVar20 * -2 + 1;
      } while (bVar17);
      bVar19 = false;
      bVar17 = (!bVar18 && !bVar17) == bVar18;
      if (!bVar17) {
        lVar4 = 3;
        pbVar16 = &UNK_00119f83;
        pbVar10 = pbVar7;
        do {
          if (lVar4 == 0) break;
          lVar4 = lVar4 + -1;
          bVar19 = *pbVar16 < *pbVar10;
          bVar17 = *pbVar16 == *pbVar10;
          pbVar16 = pbVar16 + (ulong)bVar20 * -2 + 1;
          pbVar10 = pbVar10 + (ulong)bVar20 * -2 + 1;
        } while (bVar17);
        bVar18 = false;
        bVar17 = (!bVar19 && !bVar17) == bVar19;
        if (bVar17) goto code_r0x0010d608;
        lVar4 = 3;
        pbVar16 = &UNK_00119f83;
        pbVar10 = pbVar9;
        do {
          if (lVar4 == 0) break;
          lVar4 = lVar4 + -1;
          bVar18 = *pbVar16 < *pbVar10;
          bVar17 = *pbVar16 == *pbVar10;
          pbVar16 = pbVar16 + (ulong)bVar20 * -2 + 1;
          pbVar10 = pbVar10 + (ulong)bVar20 * -2 + 1;
        } while (bVar17);
        if ((!bVar18 && !bVar17) != bVar18) {
          if (*pbVar7 == 0x2e) {
            pbVar7 = pbVar7 + 1;
            pbVar9 = pbVar9 + 1;
            if (bVar3 == 0x2e) goto code_r0x0010d329;
            goto code_r0x0010d608;
          }
          if (bVar3 != 0x2e) {
code_r0x0010d329:
            pbStack80 = pbVar7;
            pbStack72 = pbVar9;
            lVar4 = match_suffix(&pbStack80);
            lVar2 = match_suffix();
            if (lVar4 == 0) {
              unaff_R13 = pbStack80 + -(long)pbVar7;
              uVar15 = uVar13;
              if (lVar2 == 0) goto code_r0x0010d571;
            }
            else {
              unaff_R13 = (byte *)(lVar4 - (long)pbVar7);
              if (lVar2 == 0) goto code_r0x0010d673;
            }
            pbVar16 = (byte *)(lVar2 - (long)pbVar9);
            goto code_r0x0010d365;
          }
        }
      }
    }
    uVar13 = 1;
  }
code_r0x0010d4c8:
  do {
    pbVar7 = (byte *)(uStack64 ^ *(ulong *)(in_FS_OFFSET + 0x28));
    if (pbVar7 == (byte *)0x0) {
      return uVar13;
    }
    func_0x00103420();
code_r0x0010d673:
    pbVar16 = pbStack72 + -(long)pbVar9;
code_r0x0010d365:
    uVar15 = uVar13;
    if ((unaff_R13 == pbVar16) && (iVar1 = func_0x001032b0(pbVar7,pbVar9,unaff_R13), iVar1 == 0)) {
      unaff_R13 = pbStack80 + -(long)pbVar7;
code_r0x0010d571:
      pbVar16 = pbStack72 + -(long)pbVar9;
    }
    pbVar10 = (byte *)0x0;
    pbVar6 = (byte *)0x0;
    do {
      if ((unaff_R13 <= pbVar6) && (uVar13 = uVar15, pbVar16 <= pbVar10)) break;
      pbVar14 = pbVar10 + -(long)pbVar6;
      pbVar11 = pbVar9 + (long)pbVar14;
      pbVar8 = pbVar9;
      while (((pbVar6 < unaff_R13 && (9 < (byte)(pbVar7[(long)pbVar6] - 0x30))) ||
             ((bVar20 = pbVar6[(long)pbVar11], pbVar10 < pbVar16 && (9 < (byte)(bVar20 - 0x30))))))
      {
        if (unaff_R13 != pbVar6) {
          bVar20 = pbVar7[(long)pbVar6];
          if ((byte)(bVar20 - 0x30) < 10) {
            uVar5 = 0;
code_r0x0010d41a:
            if ((pbVar16 != pbVar10) && (bVar20 = pbVar6[(long)pbVar11], 9 < (byte)(bVar20 - 0x30)))
            goto code_r0x0010d528;
            uVar12 = 0;
            goto code_r0x0010d432;
          }
          uVar5 = (uint)bVar20;
          if ((((uint)bVar20 - 0x41 < 0x3a) &&
              ((1 << ((byte)((uint)bVar20 - 0x41) & 0x3f) & 0x3ffffff03ffffffU) != 0)) ||
             (uVar5 = (uint)bVar20 + 0x100, bVar20 != 0x7e)) goto code_r0x0010d41a;
          if ((pbVar16 != pbVar14 + (long)pbVar6) &&
             (bVar20 = pbVar6[(long)pbVar11], 9 < (byte)(bVar20 - 0x30))) {
            uVar5 = 0xffffffff;
            goto code_r0x0010d528;
          }
          uVar12 = 0;
          uVar5 = 0xffffffff;
code_r0x0010d5c8:
          uVar13 = (ulong)(uVar5 - uVar12);
          pbVar9 = pbVar8;
          if (uVar5 - uVar12 == 0) {
            uVar13 = uVar15;
          }
          goto code_r0x0010d4c8;
        }
        if ((pbVar16 != unaff_R13 + (long)pbVar14) &&
           (bVar20 = unaff_R13[(long)pbVar11], 9 < (byte)(bVar20 - 0x30))) {
          uVar5 = 0;
code_r0x0010d528:
          uVar12 = (uint)bVar20;
          if (((0x39 < (uint)bVar20 - 0x41) ||
              (pbVar8 = (byte *)(1 << ((byte)((uint)bVar20 - 0x41) & 0x3f)),
              ((ulong)pbVar8 & 0x3ffffff03ffffff) == 0)) &&
             (uVar12 = (uint)bVar20 + 0x100, bVar20 == 0x7e)) {
            uVar12 = 0xffffffff;
          }
code_r0x0010d432:
          if (uVar12 != uVar5) goto code_r0x0010d5c8;
        }
        pbVar6 = pbVar6 + 1;
        pbVar10 = pbVar10 + 1;
      }
      bVar3 = pbVar7[(long)pbVar6];
      while (bVar3 == 0x30) {
        pbVar6 = pbVar6 + 1;
        bVar3 = pbVar7[(long)pbVar6];
      }
      while (bVar20 == 0x30) {
        pbVar10 = pbVar10 + 1;
        bVar20 = pbVar9[(long)pbVar10];
      }
      pbVar11 = pbVar10 + -(long)pbVar6;
      uVar13 = 0;
      while( true ) {
        pbVar10 = pbVar6 + (long)pbVar11;
        if (9 < (byte)(bVar3 - 0x30)) break;
        if (9 < (byte)(bVar20 - 0x30)) {
          uVar13 = 1;
          goto code_r0x0010d4c8;
        }
        if ((int)uVar13 == 0) {
          uVar13 = (ulong)(uint)((int)(char)bVar3 - (int)(char)bVar20);
        }
        pbVar6 = pbVar6 + 1;
        bVar3 = pbVar7[(long)pbVar6];
        bVar20 = pbVar6[(long)(pbVar9 + (long)pbVar11)];
      }
      if ((byte)(bVar20 - 0x30) < 10) {
        uVar13 = 0xffffffff;
        break;
      }
    } while ((int)uVar13 == 0);
  } while( true );
}

