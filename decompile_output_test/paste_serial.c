
ulong paste_serial(long param_1,byte **param_2)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  uint *puVar4;
  byte *pbVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  uint extraout_EDX;
  ulong uVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  ulong uVar13;
  byte *pbVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  byte bVar18;
  byte bStack61;
  uint uStack60;
  
  bVar18 = 0;
  bVar15 = false;
  bVar16 = param_1 == 0;
  if (bVar16) {
    bStack61 = 1;
code_r0x00102248:
    return (ulong)bStack61;
  }
  puVar4 = (uint *)func_0x001013d0();
  bStack61 = 1;
code_r0x001020a0:
  lVar8 = 2;
  pbVar10 = *param_2;
  pbVar12 = &UNK_001056da;
  do {
    if (lVar8 == 0) break;
    lVar8 = lVar8 + -1;
    bVar15 = *pbVar10 < *pbVar12;
    bVar16 = *pbVar10 == *pbVar12;
    pbVar10 = pbVar10 + (ulong)bVar18 * -2 + 1;
    pbVar12 = pbVar12 + (ulong)bVar18 * -2 + 1;
  } while (bVar16);
  if ((!bVar15 && !bVar16) == bVar15) {
    have_read_stdin = 1;
    pbVar10 = stdin;
code_r0x001020d7:
    pbVar14 = delims;
    pbVar12 = *(byte **)(pbVar10 + 8);
    pbVar11 = *(byte **)(pbVar10 + 0x10);
    if (pbVar12 < pbVar11) {
      pbVar5 = pbVar12 + 1;
      *(byte **)(pbVar10 + 8) = pbVar5;
      uVar9 = (ulong)*pbVar12;
    }
    else {
      uVar7 = func_0x001013a0(pbVar10);
      uVar9 = (ulong)uVar7;
      uVar13 = (ulong)*puVar4;
      if (uVar7 == 0xffffffff) {
        uVar7 = (uint)line_delim;
        goto code_r0x001022c1;
      }
      pbVar5 = *(byte **)(pbVar10 + 8);
      pbVar11 = *(byte **)(pbVar10 + 0x10);
    }
    do {
      uStack60 = (uint)uVar9;
      if (pbVar5 < pbVar11) {
        *(byte **)(pbVar10 + 8) = pbVar5 + 1;
        uVar13 = (ulong)*pbVar5;
      }
      else {
        uVar7 = func_0x001013a0(pbVar10);
        uVar13 = (ulong)uVar7;
        if (uVar7 == 0xffffffff) {
          uVar13 = (ulong)*puVar4;
          puVar2 = *(undefined **)(stdout + 0x28);
          if (*(undefined **)(stdout + 0x30) <= puVar2) goto code_r0x00102330;
          *(undefined **)(stdout + 0x28) = puVar2 + 1;
          *puVar2 = (char)uVar9;
          goto code_r0x00102212;
        }
      }
      if ((uint)line_delim == uStack60) {
        bVar1 = *pbVar14;
        if (bVar1 == 0) {
code_r0x00102108:
          pbVar14 = pbVar14 + 1;
          if (delim_end != pbVar14) goto code_r0x00102115;
        }
        else {
          pbVar12 = *(byte **)(stdout + 0x28);
          if (*(byte **)(stdout + 0x30) <= pbVar12) {
            iVar3 = func_0x001014b0(stdout,(ulong)bVar1);
            if (-1 < iVar3) goto code_r0x00102108;
            goto code_r0x00102328;
          }
          pbVar14 = pbVar14 + 1;
          bVar17 = delim_end != pbVar14;
          *(byte **)(stdout + 0x28) = pbVar12 + 1;
          *pbVar12 = bVar1;
          if (bVar17) goto code_r0x00102115;
        }
        pbVar14 = delims;
      }
      else {
        puVar2 = *(undefined **)(stdout + 0x28);
        if (puVar2 < *(undefined **)(stdout + 0x30)) {
          *(undefined **)(stdout + 0x28) = puVar2 + 1;
          *puVar2 = (char)uVar9;
        }
        else {
          iVar3 = func_0x001014b0(stdout,uVar9 & 0xff);
          if (iVar3 < 0) goto code_r0x00102328;
        }
      }
code_r0x00102115:
      pbVar5 = *(byte **)(pbVar10 + 8);
      pbVar11 = *(byte **)(pbVar10 + 0x10);
      uVar9 = uVar13;
    } while( true );
  }
  pbVar10 = (byte *)func_0x001015f0(*param_2,&UNK_001051ee);
  if (pbVar10 != (byte *)0x0) {
    fadvise(pbVar10,2);
    goto code_r0x001020d7;
  }
  goto code_r0x0010226a;
code_r0x001022c1:
  while( true ) {
    puVar2 = *(undefined **)(stdout + 0x28);
    if (puVar2 < *(undefined **)(stdout + 0x30)) {
      *(undefined **)(stdout + 0x28) = puVar2 + 1;
      *puVar2 = (char)uVar7;
      bVar1 = *pbVar10;
      goto joined_r0x001022e0;
    }
    iVar3 = func_0x001014b0(stdout,(ulong)uVar7);
    if (-1 < iVar3) break;
code_r0x00102328:
    do {
      write_error();
      uStack60 = extraout_EDX;
code_r0x00102330:
      iVar3 = func_0x001014b0();
    } while (iVar3 < 0);
code_r0x00102212:
    uVar7 = (uint)line_delim;
    if (uVar7 == uStack60) break;
  }
  bVar1 = *pbVar10;
joined_r0x001022e0:
  if ((bVar1 & 0x20) != 0) {
    uVar6 = quotearg_n_style_colon(0,3,*param_2);
    func_0x001015d0(0,uVar13,&UNK_00105695,uVar6);
    bStack61 = 0;
  }
  if ((!bVar15 && !bVar16) == bVar15) {
    func_0x00101410();
  }
  else {
    iVar3 = rpl_fclose(pbVar10);
    if (iVar3 == -1) {
code_r0x0010226a:
      uVar6 = quotearg_n_style_colon(0,3,*param_2);
      func_0x001015d0(0,(ulong)*puVar4,&UNK_00105695,uVar6);
      bStack61 = 0;
    }
  }
  param_2 = param_2 + 1;
  bVar15 = param_1 == 0;
  param_1 = param_1 + -1;
  bVar16 = param_1 == 0;
  if (bVar16) goto code_r0x00102248;
  goto code_r0x001020a0;
}

