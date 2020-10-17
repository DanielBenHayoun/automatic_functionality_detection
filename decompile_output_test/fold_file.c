
undefined8 fold_file(byte *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  char cVar11;
  ulong uVar12;
  byte *pbVar13;
  char *pcVar14;
  char *pcVar15;
  byte *pbVar16;
  char *pcVar17;
  long lVar18;
  bool bVar19;
  bool bVar20;
  byte bVar21;
  uint *puStack64;
  
  pbVar16 = stdin;
  bVar21 = 0;
  lVar10 = 2;
  bVar19 = &stack0xffffffffffffffd0 < (undefined *)0x28;
  bVar20 = (undefined *)register0x00000020 == (undefined *)0x58;
  pbVar6 = param_1;
  pbVar13 = &UNK_001056c2;
  do {
    if (lVar10 == 0) break;
    lVar10 = lVar10 + -1;
    bVar19 = *pbVar6 < *pbVar13;
    bVar20 = *pbVar6 == *pbVar13;
    pbVar6 = pbVar6 + 1;
    pbVar13 = pbVar13 + 1;
  } while (bVar20);
  if ((!bVar19 && !bVar20) == bVar19) {
    have_read_stdin = 1;
    puStack64 = (uint *)func_0x00101490();
    if (pbVar16 != (byte *)0x0) {
code_r0x00101b97:
      lVar10 = 0;
      uVar7 = 0;
      fadvise(pbVar16,2);
code_r0x00101ba9:
      pbVar6 = *(byte **)(pbVar16 + 8);
      if (*(byte **)(pbVar16 + 0x10) <= pbVar6) goto code_r0x00101d19;
code_r0x00101bb9:
      *(byte **)(pbVar16 + 8) = pbVar6 + 1;
      uVar12 = (ulong)*pbVar6;
      do {
        uVar1 = lVar10 + 1;
        pcVar17 = line_out_6894;
        if (allocated_out_6895 <= uVar1) {
          pcVar17 = (char *)x2realloc(line_out_6894,&allocated_out_6895);
        }
        line_out_6894 = pcVar17;
        if ((int)uVar12 == 10) {
          pcVar17[lVar10] = '\n';
          lVar10 = 0;
          uVar7 = 0;
          func_0x00101670(pcVar17,1,uVar1,stdout);
          goto code_r0x00101ba9;
        }
        cVar11 = (char)uVar12;
code_r0x00101bed:
        uVar7 = adjust_column(uVar7,(ulong)(uint)(int)cVar11);
        if (uVar7 <= param_2) {
          pcVar17[lVar10] = cVar11;
          lVar10 = lVar10 + 1;
          goto code_r0x00101ba9;
        }
        if (break_spaces == '\0') {
          if (lVar10 != 0) goto code_r0x00101c17;
        }
        else {
          if (lVar10 != 0) goto code_r0x00101c51;
        }
        *pcVar17 = cVar11;
        pbVar6 = *(byte **)(pbVar16 + 8);
        lVar10 = 1;
        if (pbVar6 < *(byte **)(pbVar16 + 0x10)) goto code_r0x00101bb9;
code_r0x00101d19:
        uVar4 = func_0x00101460(pbVar16);
        uVar12 = (ulong)uVar4;
        if (uVar4 == 0xffffffff) {
          uVar4 = *puStack64;
          if (lVar10 != 0) {
            func_0x00101670(line_out_6894,1,lVar10,stdout);
          }
          bVar19 = false;
          bVar20 = (*pbVar16 & 0x20) == 0;
          if (!bVar20) {
            uVar9 = quotearg_n_style_colon(0,3,param_1);
            bVar19 = false;
            bVar20 = true;
            func_0x001016c0(0,(ulong)uVar4,&UNK_00105678,uVar9);
            lVar10 = 2;
            pbVar6 = &UNK_001056c2;
            goto code_r0x00101e98;
          }
          lVar10 = 2;
          pbVar6 = param_1;
          pbVar13 = &UNK_001056c2;
          goto code_r0x00101d6f;
        }
      } while( true );
    }
  }
  else {
    pbVar16 = (byte *)func_0x001016e0(param_1,&UNK_00105672);
    puStack64 = (uint *)func_0x00101490();
    if (pbVar16 != (byte *)0x0) goto code_r0x00101b97;
  }
  goto code_r0x00101e27;
code_r0x00101c51:
  plVar8 = (long *)func_0x00101750();
  lVar18 = lVar10;
  do {
    lVar2 = lVar18 + -1;
    if ((*(byte *)(*plVar8 + (ulong)(byte)pcVar17[lVar18 + -1] * 2) & 1) != 0) {
      func_0x00101670(pcVar17,1,lVar18,stdout);
      puVar3 = *(undefined **)(stdout + 0x28);
      if (puVar3 < *(undefined **)(stdout + 0x30)) {
        *(undefined **)(stdout + 0x28) = puVar3 + 1;
        *puVar3 = 10;
      }
      else {
        func_0x00101570(stdout,10);
      }
      pcVar17 = line_out_6894;
      lVar10 = lVar10 - lVar18;
      func_0x001016b0(line_out_6894,line_out_6894 + lVar18,lVar10);
      if (lVar10 == 0) {
        uVar7 = 0;
      }
      else {
        pcVar15 = pcVar17 + lVar10;
        uVar7 = 0;
        pcVar14 = pcVar17;
        do {
          uVar7 = adjust_column(uVar7,(ulong)(uint)(int)*pcVar14);
          pcVar14 = pcVar14 + 1;
        } while (pcVar15 != pcVar14);
      }
      goto code_r0x00101bed;
    }
    lVar18 = lVar2;
  } while (lVar2 != 0);
code_r0x00101c17:
  pcVar17[lVar10] = '\n';
  lVar18 = lVar10 + 1;
  lVar10 = 0;
  uVar7 = 0;
  func_0x00101670(pcVar17,1,lVar18,stdout);
  pcVar17 = line_out_6894;
  goto code_r0x00101bed;
  while( true ) {
    lVar10 = lVar10 + -1;
    bVar19 = *param_1 < *pbVar6;
    bVar20 = *param_1 == *pbVar6;
    param_1 = param_1 + (ulong)bVar21 * -2 + 1;
    pbVar6 = pbVar6 + (ulong)bVar21 * -2 + 1;
    if (!bVar20) break;
code_r0x00101e98:
    if (lVar10 == 0) break;
  }
  if ((!bVar19 && !bVar20) == bVar19) {
    return 0;
  }
  rpl_fclose(pbVar16);
  return 0;
  while( true ) {
    lVar10 = lVar10 + -1;
    bVar19 = *pbVar6 < *pbVar13;
    bVar20 = *pbVar6 == *pbVar13;
    pbVar6 = pbVar6 + (ulong)bVar21 * -2 + 1;
    pbVar13 = pbVar13 + (ulong)bVar21 * -2 + 1;
    if (!bVar20) break;
code_r0x00101d6f:
    if (lVar10 == 0) break;
  }
  if (((!bVar19 && !bVar20) == bVar19) || (iVar5 = rpl_fclose(pbVar16), iVar5 != -1)) {
    return 1;
  }
code_r0x00101e27:
  uVar9 = quotearg_n_style_colon(0,3,param_1);
  func_0x001016c0(0,(ulong)*puStack64,&UNK_00105678,uVar9);
  return 0;
}

