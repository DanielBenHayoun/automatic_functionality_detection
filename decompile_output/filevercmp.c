
ulong filevercmp(byte *param_1,byte *param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  byte bVar4;
  long lVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  ulong uVar11;
  byte *pbVar12;
  ulong uVar13;
  byte *unaff_R13;
  byte *pbVar14;
  long in_FS_OFFSET;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  byte bVar18;
  byte *pbStack80;
  byte *pbStack72;
  ulong uStack64;
  
  bVar18 = 0;
  uStack64 = *(ulong *)(in_FS_OFFSET + 0x28);
  uVar1 = func_0x00103590();
  uVar11 = (ulong)uVar1;
  if (uVar1 == 0) goto code_r0x0010d4c8;
  if (*param_1 == 0) {
code_r0x0010d608:
    uVar11 = 0xffffffff;
  }
  else {
    bVar4 = *param_2;
    bVar15 = false;
    bVar17 = bVar4 == 0;
    if (!bVar17) {
      lVar5 = 2;
      pbVar14 = &UNK_00119f84;
      pbVar8 = param_1;
      do {
        if (lVar5 == 0) break;
        lVar5 = lVar5 + -1;
        bVar15 = *pbVar14 < *pbVar8;
        bVar17 = *pbVar14 == *pbVar8;
        pbVar14 = pbVar14 + (ulong)bVar18 * -2 + 1;
        pbVar8 = pbVar8 + (ulong)bVar18 * -2 + 1;
      } while (bVar17);
      bVar16 = false;
      bVar15 = (!bVar15 && !bVar17) == bVar15;
      if (bVar15) goto code_r0x0010d608;
      lVar5 = 2;
      pbVar14 = &UNK_00119f84;
      pbVar8 = param_2;
      do {
        if (lVar5 == 0) break;
        lVar5 = lVar5 + -1;
        bVar16 = *pbVar14 < *pbVar8;
        bVar15 = *pbVar14 == *pbVar8;
        pbVar14 = pbVar14 + (ulong)bVar18 * -2 + 1;
        pbVar8 = pbVar8 + (ulong)bVar18 * -2 + 1;
      } while (bVar15);
      bVar17 = false;
      bVar15 = (!bVar16 && !bVar15) == bVar16;
      if (!bVar15) {
        lVar5 = 3;
        pbVar14 = &UNK_00119f83;
        pbVar8 = param_1;
        do {
          if (lVar5 == 0) break;
          lVar5 = lVar5 + -1;
          bVar17 = *pbVar14 < *pbVar8;
          bVar15 = *pbVar14 == *pbVar8;
          pbVar14 = pbVar14 + (ulong)bVar18 * -2 + 1;
          pbVar8 = pbVar8 + (ulong)bVar18 * -2 + 1;
        } while (bVar15);
        bVar16 = false;
        bVar15 = (!bVar17 && !bVar15) == bVar17;
        if (bVar15) goto code_r0x0010d608;
        lVar5 = 3;
        pbVar14 = &UNK_00119f83;
        pbVar8 = param_2;
        do {
          if (lVar5 == 0) break;
          lVar5 = lVar5 + -1;
          bVar16 = *pbVar14 < *pbVar8;
          bVar15 = *pbVar14 == *pbVar8;
          pbVar14 = pbVar14 + (ulong)bVar18 * -2 + 1;
          pbVar8 = pbVar8 + (ulong)bVar18 * -2 + 1;
        } while (bVar15);
        if ((!bVar16 && !bVar15) != bVar16) {
          if (*param_1 == 0x2e) {
            param_1 = param_1 + 1;
            param_2 = param_2 + 1;
            if (bVar4 == 0x2e) goto code_r0x0010d329;
            goto code_r0x0010d608;
          }
          if (bVar4 != 0x2e) {
code_r0x0010d329:
            pbStack80 = param_1;
            pbStack72 = param_2;
            lVar5 = match_suffix(&pbStack80);
            lVar3 = match_suffix();
            if (lVar5 == 0) {
              unaff_R13 = pbStack80 + -(long)param_1;
              uVar13 = uVar11;
              if (lVar3 == 0) goto code_r0x0010d571;
            }
            else {
              unaff_R13 = (byte *)(lVar5 - (long)param_1);
              if (lVar3 == 0) goto code_r0x0010d673;
            }
            pbVar14 = (byte *)(lVar3 - (long)param_2);
            goto code_r0x0010d365;
          }
        }
      }
    }
    uVar11 = 1;
  }
code_r0x0010d4c8:
  do {
    param_1 = (byte *)(uStack64 ^ *(ulong *)(in_FS_OFFSET + 0x28));
    if (param_1 == (byte *)0x0) {
      return uVar11;
    }
    func_0x00103420();
code_r0x0010d673:
    pbVar14 = pbStack72 + -(long)param_2;
code_r0x0010d365:
    uVar13 = uVar11;
    if ((unaff_R13 == pbVar14) && (iVar2 = func_0x001032b0(param_1,param_2,unaff_R13), iVar2 == 0))
    {
      unaff_R13 = pbStack80 + -(long)param_1;
code_r0x0010d571:
      pbVar14 = pbStack72 + -(long)param_2;
    }
    pbVar8 = (byte *)0x0;
    pbVar6 = (byte *)0x0;
    do {
      if ((unaff_R13 <= pbVar6) && (uVar11 = uVar13, pbVar14 <= pbVar8)) break;
      pbVar12 = pbVar8 + -(long)pbVar6;
      pbVar9 = param_2 + (long)pbVar12;
      pbVar7 = param_2;
      while (((pbVar6 < unaff_R13 && (9 < (byte)(param_1[(long)pbVar6] - 0x30))) ||
             ((bVar18 = pbVar6[(long)pbVar9], pbVar8 < pbVar14 && (9 < (byte)(bVar18 - 0x30)))))) {
        if (unaff_R13 != pbVar6) {
          bVar18 = param_1[(long)pbVar6];
          if ((byte)(bVar18 - 0x30) < 10) {
            uVar1 = 0;
code_r0x0010d41a:
            if ((pbVar14 != pbVar8) && (bVar18 = pbVar6[(long)pbVar9], 9 < (byte)(bVar18 - 0x30)))
            goto code_r0x0010d528;
            uVar10 = 0;
            goto code_r0x0010d432;
          }
          uVar1 = (uint)bVar18;
          if ((((uint)bVar18 - 0x41 < 0x3a) &&
              ((1 << ((byte)((uint)bVar18 - 0x41) & 0x3f) & 0x3ffffff03ffffffU) != 0)) ||
             (uVar1 = (uint)bVar18 + 0x100, bVar18 != 0x7e)) goto code_r0x0010d41a;
          if ((pbVar14 != pbVar12 + (long)pbVar6) &&
             (bVar18 = pbVar6[(long)pbVar9], 9 < (byte)(bVar18 - 0x30))) {
            uVar1 = 0xffffffff;
            goto code_r0x0010d528;
          }
          uVar10 = 0;
          uVar1 = 0xffffffff;
code_r0x0010d5c8:
          uVar11 = (ulong)(uVar1 - uVar10);
          param_2 = pbVar7;
          if (uVar1 - uVar10 == 0) {
            uVar11 = uVar13;
          }
          goto code_r0x0010d4c8;
        }
        if ((pbVar14 != unaff_R13 + (long)pbVar12) &&
           (bVar18 = unaff_R13[(long)pbVar9], 9 < (byte)(bVar18 - 0x30))) {
          uVar1 = 0;
code_r0x0010d528:
          uVar10 = (uint)bVar18;
          if (((0x39 < (uint)bVar18 - 0x41) ||
              (pbVar7 = (byte *)(1 << ((byte)((uint)bVar18 - 0x41) & 0x3f)),
              ((ulong)pbVar7 & 0x3ffffff03ffffff) == 0)) &&
             (uVar10 = (uint)bVar18 + 0x100, bVar18 == 0x7e)) {
            uVar10 = 0xffffffff;
          }
code_r0x0010d432:
          if (uVar10 != uVar1) goto code_r0x0010d5c8;
        }
        pbVar6 = pbVar6 + 1;
        pbVar8 = pbVar8 + 1;
      }
      bVar4 = param_1[(long)pbVar6];
      while (bVar4 == 0x30) {
        pbVar6 = pbVar6 + 1;
        bVar4 = param_1[(long)pbVar6];
      }
      while (bVar18 == 0x30) {
        pbVar8 = pbVar8 + 1;
        bVar18 = param_2[(long)pbVar8];
      }
      pbVar9 = pbVar8 + -(long)pbVar6;
      uVar11 = 0;
      while( true ) {
        pbVar8 = pbVar6 + (long)pbVar9;
        if (9 < (byte)(bVar4 - 0x30)) break;
        if (9 < (byte)(bVar18 - 0x30)) {
          uVar11 = 1;
          goto code_r0x0010d4c8;
        }
        if ((int)uVar11 == 0) {
          uVar11 = (ulong)(uint)((int)(char)bVar4 - (int)(char)bVar18);
        }
        pbVar6 = pbVar6 + 1;
        bVar4 = param_1[(long)pbVar6];
        bVar18 = pbVar6[(long)(param_2 + (long)pbVar9)];
      }
      if ((byte)(bVar18 - 0x30) < 10) {
        uVar11 = 0xffffffff;
        break;
      }
    } while ((int)uVar11 == 0);
  } while( true );
}

