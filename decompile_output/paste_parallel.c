
ulong paste_parallel(ulong param_1,byte **param_2)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  uint *puVar8;
  byte *pbVar9;
  long lVar10;
  uint extraout_EDX;
  undefined8 extraout_RDX;
  ulong uVar11;
  byte **ppbVar12;
  byte *pbVar13;
  ulong uVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte **unaff_R13;
  ulong uVar17;
  byte *pbVar18;
  byte **ppbVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  byte bVar23;
  byte bStack181;
  uint uStack180;
  ulong uStack104;
  uint *puStack96;
  uint uStack80;
  byte bStack73;
  
  bVar23 = 0;
  lVar5 = xmalloc(param_1 + 2);
  if (SUB168(ZEXT816(8) * ZEXT816(param_1 + 1) >> 0x40,0) == 0) {
    ppbVar12 = (byte **)xmalloc((param_1 + 1) * 8);
    if (param_1 == 0) {
      bStack73 = 1;
    }
    else {
      bStack73 = 0;
      bVar20 = false;
      bVar21 = true;
      unaff_R13 = param_2;
      uVar17 = 0;
code_r0x00101b65:
      do {
        uVar11 = uVar17;
        lVar10 = 2;
        pbVar13 = *unaff_R13;
        pbVar16 = &UNK_001056da;
        do {
          if (lVar10 == 0) break;
          lVar10 = lVar10 + -1;
          bVar20 = *pbVar13 < *pbVar16;
          bVar21 = *pbVar13 == *pbVar16;
          pbVar13 = pbVar13 + (ulong)bVar23 * -2 + 1;
          pbVar16 = pbVar16 + (ulong)bVar23 * -2 + 1;
        } while (bVar21);
        if ((!bVar20 && !bVar21) != bVar20) {
          pbVar13 = (byte *)func_0x001015f0(*unaff_R13,&UNK_001051ee);
          ppbVar12[uVar11] = pbVar13;
          if (pbVar13 == (byte *)0x0) goto code_r0x00102015;
          iVar3 = func_0x00101540(pbVar13);
          if (iVar3 == 0) {
            bStack73 = 1;
          }
          uVar17 = uVar11 + 1;
          unaff_R13 = unaff_R13 + 1;
          fadvise(pbVar13,2,extraout_RDX,pbVar13);
          bVar20 = param_1 < uVar17;
          bVar21 = param_1 == uVar17;
          if (bVar21) break;
          goto code_r0x00101b65;
        }
        unaff_R13 = unaff_R13 + 1;
        have_read_stdin = '\x01';
        ppbVar12[uVar11] = stdin;
        uVar17 = uVar11 + 1;
        bVar20 = param_1 < uVar17;
        bVar21 = param_1 == uVar17;
      } while (!bVar21);
      uVar11 = uVar11 + 1;
      uStack104 = uVar11;
      if (bStack73 == 0) {
        bStack73 = 1;
      }
      else {
        if (have_read_stdin != '\0') goto code_r0x00102045;
      }
      do {
        uVar17 = 1;
        lVar10 = 0;
        bVar20 = false;
        pbVar13 = delims;
        ppbVar19 = ppbVar12;
        do {
          pbVar16 = *ppbVar19;
          if (pbVar16 == (byte *)0x0) goto code_r0x00101d36;
          pbVar15 = *(byte **)(pbVar16 + 8);
          if (*(byte **)(pbVar16 + 0x10) < pbVar15 || *(byte **)(pbVar16 + 0x10) == pbVar15) {
            uVar4 = func_0x001013a0(pbVar16);
            uVar14 = (ulong)uVar4;
            puStack96 = (uint *)func_0x001013d0();
            uStack80 = *puStack96;
            if ((lVar10 != 0) && (uVar4 != 0xffffffff)) goto code_r0x00101c5b;
code_r0x00101c7c:
            if ((int)uVar14 == -1) goto code_r0x00101d00;
code_r0x00101c82:
            if ((uint)uVar14 != (uint)line_delim) {
              do {
                puVar2 = *(undefined **)(stdout + 0x28);
                if (puVar2 < *(undefined **)(stdout + 0x30)) {
                  *(undefined **)(stdout + 0x28) = puVar2 + 1;
                  *puVar2 = (char)uVar14;
                }
                else {
                  iVar3 = func_0x001014b0();
                  if (iVar3 < 0) goto code_r0x00101cf4;
                }
                pbVar15 = *ppbVar19;
                pbVar18 = *(byte **)(pbVar15 + 8);
                if (pbVar18 < *(byte **)(pbVar15 + 0x10)) {
                  *(byte **)(pbVar15 + 8) = pbVar18 + 1;
                  uVar14 = (ulong)*pbVar18;
                }
                else {
                  uVar4 = func_0x001013a0();
                  uVar14 = (ulong)uVar4;
                  if (uVar4 == 0xffffffff) {
                    if (uVar11 == uVar17) goto code_r0x00101ddf;
                    goto code_r0x00101dab;
                  }
                }
              } while ((uint)line_delim != (uint)uVar14);
            }
            if (uVar11 == uVar17) {
code_r0x00101ddf:
              bVar23 = line_delim;
              pbVar15 = *(byte **)(stdout + 0x28);
              if (pbVar15 < *(byte **)(stdout + 0x30)) {
                *(byte **)(stdout + 0x28) = pbVar15 + 1;
                *pbVar15 = bVar23;
              }
              else {
                iVar3 = func_0x001014b0();
                if (iVar3 < 0) goto code_r0x00101cf4;
              }
              bVar20 = true;
            }
            else {
code_r0x00101dab:
              bVar23 = *pbVar13;
              if (bVar23 != 0) {
                pbVar15 = *(byte **)(stdout + 0x28);
                if (pbVar15 < *(byte **)(stdout + 0x30)) {
                  *(byte **)(stdout + 0x28) = pbVar15 + 1;
                  *pbVar15 = bVar23;
                }
                else {
                  iVar3 = func_0x001014b0();
                  if (iVar3 < 0) goto code_r0x00101cf4;
                }
              }
              pbVar13 = pbVar13 + 1;
              bVar20 = true;
              if (delim_end == pbVar13) goto code_r0x00101dc9;
            }
          }
          else {
            *(byte **)(pbVar16 + 8) = pbVar15 + 1;
            uVar14 = (ulong)*pbVar15;
            puStack96 = (uint *)func_0x001013d0();
            uStack80 = *puStack96;
            if (lVar10 == 0) goto code_r0x00101c82;
code_r0x00101c5b:
            lVar6 = func_0x00101590(lVar5,1,lVar10,stdout);
            if (lVar10 == lVar6) {
              lVar10 = 0;
              goto code_r0x00101c7c;
            }
code_r0x00101cf4:
            write_error();
code_r0x00101d00:
            if ((*pbVar16 & 0x20) == 0) {
              if (pbVar16 != stdin) goto code_r0x00101d1b;
code_r0x00101ee2:
              func_0x00101410(pbVar16);
            }
            else {
              uVar7 = quotearg_n_style_colon(0,3,param_2[uVar17 - 1]);
              func_0x001015d0(0,(ulong)uStack80,&UNK_00105695,uVar7);
              bStack73 = 0;
              if (pbVar16 == stdin) goto code_r0x00101ee2;
code_r0x00101d1b:
              iVar3 = rpl_fclose();
              if (iVar3 == -1) {
                uVar7 = quotearg_n_style_colon(0,3,param_2[uVar17 - 1]);
                func_0x001015d0(0,(ulong)*puStack96,&UNK_00105695,uVar7);
                bStack73 = 0;
              }
            }
            uStack104 = uStack104 - 1;
            *ppbVar19 = (byte *)0x0;
code_r0x00101d36:
            if (uVar11 == uVar17) {
              if (!bVar20) break;
              if ((lVar10 == 0) || (lVar6 = func_0x00101590(lVar5,1,lVar10), lVar6 == lVar10)) {
                bVar23 = line_delim;
                pbVar15 = *(byte **)(stdout + 0x28);
                if (pbVar15 < *(byte **)(stdout + 0x30)) {
                  *(byte **)(stdout + 0x28) = pbVar15 + 1;
                  *pbVar15 = bVar23;
                  break;
                }
                iVar3 = func_0x001014b0();
                if (-1 < iVar3) break;
              }
              goto code_r0x00101cf4;
            }
            if (*pbVar13 != 0) {
              *(byte *)(lVar5 + lVar10) = *pbVar13;
              lVar10 = lVar10 + 1;
            }
            pbVar13 = pbVar13 + 1;
            if (delim_end == pbVar13) {
code_r0x00101dc9:
              pbVar13 = delims;
            }
          }
          bVar21 = uVar17 < uVar11;
          ppbVar19 = ppbVar19 + 1;
          uVar17 = uVar17 + 1;
        } while (bVar21 && uStack104 != 0);
      } while (uStack104 != 0);
    }
    func_0x001013b0(ppbVar12);
    func_0x001013b0(lVar5);
    return (ulong)bStack73;
  }
  xalloc_die();
code_r0x00102015:
  uVar7 = quotearg_n_style_colon(0,3,*unaff_R13);
  puVar8 = (uint *)func_0x001013d0();
  func_0x001015d0(1,(ulong)*puVar8,&UNK_00105695,uVar7);
code_r0x00102045:
  uVar7 = func_0x00101450(0,&UNK_001051f0,5);
  ppbVar12 = (byte **)0x0;
  lVar5 = 1;
  func_0x001015d0(1,0,uVar7);
  bVar20 = false;
  bVar21 = lVar5 == 0;
  if (bVar21) {
    bStack181 = 1;
code_r0x00102248:
    return (ulong)bStack181;
  }
  puVar8 = (uint *)func_0x001013d0();
  bStack181 = 1;
code_r0x001020a0:
  lVar10 = 2;
  pbVar13 = *ppbVar12;
  pbVar16 = &UNK_001056da;
  do {
    if (lVar10 == 0) break;
    lVar10 = lVar10 + -1;
    bVar20 = *pbVar13 < *pbVar16;
    bVar21 = *pbVar13 == *pbVar16;
    pbVar13 = pbVar13 + (ulong)bVar23 * -2 + 1;
    pbVar16 = pbVar16 + (ulong)bVar23 * -2 + 1;
  } while (bVar21);
  if ((!bVar20 && !bVar21) == bVar20) {
    have_read_stdin = '\x01';
    pbVar13 = stdin;
code_r0x001020d7:
    pbVar18 = delims;
    pbVar16 = *(byte **)(pbVar13 + 8);
    pbVar15 = *(byte **)(pbVar13 + 0x10);
    if (pbVar16 < pbVar15) {
      pbVar9 = pbVar16 + 1;
      *(byte **)(pbVar13 + 8) = pbVar9;
      uVar11 = (ulong)*pbVar16;
    }
    else {
      uVar4 = func_0x001013a0(pbVar13);
      uVar11 = (ulong)uVar4;
      uVar17 = (ulong)*puVar8;
      if (uVar4 == 0xffffffff) {
        uVar4 = (uint)line_delim;
        goto code_r0x001022c1;
      }
      pbVar9 = *(byte **)(pbVar13 + 8);
      pbVar15 = *(byte **)(pbVar13 + 0x10);
    }
    do {
      uStack180 = (uint)uVar11;
      if (pbVar9 < pbVar15) {
        *(byte **)(pbVar13 + 8) = pbVar9 + 1;
        uVar17 = (ulong)*pbVar9;
      }
      else {
        uVar4 = func_0x001013a0(pbVar13);
        uVar17 = (ulong)uVar4;
        if (uVar4 == 0xffffffff) {
          uVar17 = (ulong)*puVar8;
          puVar2 = *(undefined **)(stdout + 0x28);
          if (*(undefined **)(stdout + 0x30) <= puVar2) goto code_r0x00102330;
          *(undefined **)(stdout + 0x28) = puVar2 + 1;
          *puVar2 = (char)uVar11;
          goto code_r0x00102212;
        }
      }
      if ((uint)line_delim == uStack180) {
        bVar1 = *pbVar18;
        if (bVar1 == 0) {
code_r0x00102108:
          pbVar18 = pbVar18 + 1;
          if (delim_end != pbVar18) goto code_r0x00102115;
        }
        else {
          pbVar16 = *(byte **)(stdout + 0x28);
          if (*(byte **)(stdout + 0x30) <= pbVar16) {
            iVar3 = func_0x001014b0(stdout,(ulong)bVar1);
            if (-1 < iVar3) goto code_r0x00102108;
            goto code_r0x00102328;
          }
          pbVar18 = pbVar18 + 1;
          bVar22 = delim_end != pbVar18;
          *(byte **)(stdout + 0x28) = pbVar16 + 1;
          *pbVar16 = bVar1;
          if (bVar22) goto code_r0x00102115;
        }
        pbVar18 = delims;
      }
      else {
        puVar2 = *(undefined **)(stdout + 0x28);
        if (puVar2 < *(undefined **)(stdout + 0x30)) {
          *(undefined **)(stdout + 0x28) = puVar2 + 1;
          *puVar2 = (char)uVar11;
        }
        else {
          iVar3 = func_0x001014b0(stdout,uVar11 & 0xff);
          if (iVar3 < 0) goto code_r0x00102328;
        }
      }
code_r0x00102115:
      pbVar9 = *(byte **)(pbVar13 + 8);
      pbVar15 = *(byte **)(pbVar13 + 0x10);
      uVar11 = uVar17;
    } while( true );
  }
  pbVar13 = (byte *)func_0x001015f0(*ppbVar12,&UNK_001051ee);
  if (pbVar13 != (byte *)0x0) {
    fadvise(pbVar13,2);
    goto code_r0x001020d7;
  }
  goto code_r0x0010226a;
code_r0x001022c1:
  while( true ) {
    puVar2 = *(undefined **)(stdout + 0x28);
    if (puVar2 < *(undefined **)(stdout + 0x30)) {
      *(undefined **)(stdout + 0x28) = puVar2 + 1;
      *puVar2 = (char)uVar4;
      bVar1 = *pbVar13;
      goto joined_r0x001022e0;
    }
    iVar3 = func_0x001014b0(stdout,(ulong)uVar4);
    if (-1 < iVar3) break;
code_r0x00102328:
    do {
      write_error();
      uStack180 = extraout_EDX;
code_r0x00102330:
      iVar3 = func_0x001014b0();
    } while (iVar3 < 0);
code_r0x00102212:
    uVar4 = (uint)line_delim;
    if (uVar4 == uStack180) break;
  }
  bVar1 = *pbVar13;
joined_r0x001022e0:
  if ((bVar1 & 0x20) != 0) {
    uVar7 = quotearg_n_style_colon(0,3,*ppbVar12);
    func_0x001015d0(0,uVar17,&UNK_00105695,uVar7);
    bStack181 = 0;
  }
  if ((!bVar20 && !bVar21) == bVar20) {
    func_0x00101410();
  }
  else {
    iVar3 = rpl_fclose(pbVar13);
    if (iVar3 == -1) {
code_r0x0010226a:
      uVar7 = quotearg_n_style_colon(0,3,*ppbVar12);
      func_0x001015d0(0,(ulong)*puVar8,&UNK_00105695,uVar7);
      bStack181 = 0;
    }
  }
  ppbVar12 = ppbVar12 + 1;
  bVar20 = lVar5 == 0;
  lVar5 = lVar5 + -1;
  bVar21 = lVar5 == 0;
  if (bVar21) goto code_r0x00102248;
  goto code_r0x001020a0;
}

