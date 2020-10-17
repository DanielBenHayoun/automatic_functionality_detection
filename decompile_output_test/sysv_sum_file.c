
ulong sysv_sum_file(byte *param_1,int param_2)

{
  byte bVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  uint *puVar8;
  byte *pbVar9;
  long lVar10;
  byte *pbVar11;
  ulong extraout_RDX;
  ulong uVar12;
  undefined8 uVar13;
  byte *pbVar14;
  byte *pbVar15;
  uint uVar16;
  byte *unaff_R14;
  ulong unaff_R15;
  long in_FS_OFFSET;
  bool bVar17;
  bool bVar18;
  byte bVar19;
  undefined auStack9664 [664];
  long lStack9000;
  ulong uStack8984;
  byte *pbStack8976;
  ulong uStack8968;
  byte *pbStack8960;
  byte *pbStack8952;
  undefined *puStack8944;
  int iStack8924;
  undefined auStack8920 [656];
  byte abStack8264 [8200];
  ulong uStack64;
  
  bVar19 = 0;
  lVar10 = 2;
  uStack64 = *(ulong *)(in_FS_OFFSET + 0x28);
  bVar17 = false;
  bVar18 = true;
  pbVar11 = param_1;
  pbVar14 = &UNK_001067b2;
  do {
    if (lVar10 == 0) break;
    lVar10 = lVar10 + -1;
    bVar17 = *pbVar11 < *pbVar14;
    bVar18 = *pbVar11 == *pbVar14;
    pbVar11 = pbVar11 + 1;
    pbVar14 = pbVar14 + 1;
  } while (bVar18);
  uVar16 = SEXT14((char)((!bVar17 && !bVar18) - bVar17));
  uStack8968 = (ulong)uVar16;
  iStack8924 = param_2;
  if (uVar16 == 0) {
    have_read_stdin = 1;
    pbStack8976 = (byte *)0x0;
code_r0x00101c9a:
    unaff_R14 = abStack8264;
    unaff_R15 = 0;
    lVar10 = 0;
    while( true ) {
      puStack8944 = &UNK_00101cbf;
      lVar6 = safe_read(pbStack8976,unaff_R14,0x2000);
      if (lVar6 == 0) break;
      if (lVar6 == -1) {
        puStack8944 = &UNK_00101dbf;
        uVar7 = quotearg_n_style_colon(0,3,param_1);
        puStack8944 = &UNK_00101dc7;
        puVar8 = (uint *)func_0x00101600();
        uVar3 = *puVar8;
        pbVar11 = (byte *)0x0;
        uVar13 = 0;
        puStack8944 = &UNK_00101dde;
        func_0x00101870(0,(ulong)uVar3,&UNK_00107172,uVar7);
        if (uVar16 != 0) {
          puStack8944 = &UNK_00101dea;
          pbVar11 = pbStack8976;
          func_0x00101750();
        }
        goto code_r0x00101d7e;
      }
      pbVar11 = unaff_R14;
      do {
        bVar1 = *pbVar11;
        pbVar11 = pbVar11 + 1;
        unaff_R15 = (ulong)((int)unaff_R15 + (uint)bVar1);
      } while (unaff_R14 + lVar6 != pbVar11);
      lVar10 = lVar10 + lVar6;
    }
    if (uVar16 != 0) {
      puStack8944 = &UNK_00101cfc;
      iVar5 = func_0x00101750();
      if (iVar5 != 0) goto code_r0x00101e07;
    }
    uVar16 = (int)(unaff_R15 >> 0x10) + ((uint)unaff_R15 & 0xffff);
    unaff_R15 = (ulong)(((int)uVar16 >> 0x10) + (uVar16 & 0xffff));
    puStack8944 = &UNK_00101d34;
    uVar7 = human_readable(lVar10,auStack8920,0,1,0x200);
    uVar3 = 0x106384;
    puStack8944 = &UNK_00101d4d;
    func_0x00101840(1,&UNK_00106384,unaff_R15,uVar7);
    if (iStack8924 != 0) {
      uVar3 = 0x107171;
      puStack8944 = &UNK_00101e50;
      func_0x00101840(1,&UNK_00107171,param_1);
    }
    pbVar11 = stdout;
    puVar2 = *(undefined **)(stdout + 0x28);
    if (puVar2 < *(undefined **)(stdout + 0x30)) {
      uVar13 = 1;
      *(undefined **)(stdout + 0x28) = puVar2 + 1;
      *puVar2 = 10;
    }
    else {
      uVar3 = 10;
      uVar13 = 1;
      puStack8944 = &UNK_00101e64;
      func_0x001016f0();
    }
  }
  else {
    puStack8944 = &UNK_00101dfc;
    uVar3 = func_0x00101880(param_1,0);
    pbStack8976 = (byte *)(ulong)uVar3;
    if (uVar3 != 0xffffffff) goto code_r0x00101c9a;
code_r0x00101e07:
    puStack8944 = &UNK_00101e16;
    uVar7 = quotearg_n_style_colon(0,3,param_1);
    puStack8944 = &UNK_00101e1e;
    puVar8 = (uint *)func_0x00101600();
    uVar3 = *puVar8;
    pbVar11 = (byte *)0x0;
    uVar13 = 0;
    puStack8944 = &UNK_00101e35;
    func_0x00101870(0,(ulong)uVar3,&UNK_00107172,uVar7);
  }
code_r0x00101d7e:
  uStack8984 = uStack64 ^ *(ulong *)(in_FS_OFFSET + 0x28);
  if (uStack8984 == 0) {
    return uVar13;
  }
  puStack8944 = &UNK_00101e6e;
  func_0x001016b0();
  lVar10 = 2;
  lStack9000 = *(long *)(in_FS_OFFSET + 0x28);
  bVar17 = false;
  bVar18 = true;
  pbVar14 = pbVar11;
  pbVar9 = &UNK_001067b2;
  do {
    if (lVar10 == 0) break;
    lVar10 = lVar10 + -1;
    bVar17 = *pbVar14 < *pbVar9;
    bVar18 = *pbVar14 == *pbVar9;
    pbVar14 = pbVar14 + (ulong)bVar19 * -2 + 1;
    pbVar9 = pbVar9 + (ulong)bVar19 * -2 + 1;
  } while (bVar18);
  bVar18 = !bVar17 && !bVar18;
  pbStack8960 = param_1;
  pbStack8952 = unaff_R14;
  puStack8944 = (undefined *)unaff_R15;
  if (bVar18 == bVar17) {
    have_read_stdin = 1;
    pbVar14 = stdin;
  }
  else {
    pbVar14 = (byte *)func_0x001018a0(pbVar11,&UNK_001066da);
    if (pbVar14 == (byte *)0x0) goto code_r0x0010200b;
  }
  unaff_R14 = (byte *)0x0;
  fadvise(pbVar14,2);
  uVar16 = 0;
  pbVar15 = *(byte **)(pbVar14 + 0x10);
  pbVar9 = *(byte **)(pbVar14 + 8);
  uVar12 = extraout_RDX;
  do {
    if (pbVar9 < pbVar15) {
      *(byte **)(pbVar14 + 8) = pbVar9 + 1;
      uVar4 = (uint)*pbVar9;
      pbVar9 = pbVar9 + 1;
    }
    else {
      uVar4 = func_0x001015c0(pbVar14,pbVar15,uVar12);
      if (uVar4 == 0xffffffff) {
        if ((*pbVar14 & 0x20) == 0) {
          if (bVar18 != bVar17) {
            iVar5 = rpl_fclose(pbVar14);
            if (iVar5 != 0) {
code_r0x0010200b:
              uVar7 = quotearg_n_style_colon(0,3,pbVar11);
              puVar8 = (uint *)func_0x00101600();
              uVar16 = 0;
              func_0x00101870(0,(ulong)*puVar8,&UNK_00107172,uVar7);
              goto code_r0x00101fa2;
            }
          }
          uVar7 = human_readable(unaff_R14,auStack9664,0,1,0x400);
          func_0x00101840(1,&UNK_0010638a,(ulong)uVar16,uVar7);
          if (1 < (int)uVar3) {
            func_0x00101840(1,&UNK_00107171,pbVar11);
          }
          puVar2 = *(undefined **)(stdout + 0x28);
          if (puVar2 < *(undefined **)(stdout + 0x30)) {
            uVar16 = 1;
            *(undefined **)(stdout + 0x28) = puVar2 + 1;
            *puVar2 = 10;
          }
          else {
            uVar16 = 1;
            func_0x001016f0(stdout,10);
          }
        }
        else {
          uVar7 = quotearg_n_style_colon(0,3,pbVar11);
          puVar8 = (uint *)func_0x00101600();
          uVar16 = 0;
          func_0x00101870(0,(ulong)*puVar8,&UNK_00107172,uVar7);
          if (bVar18 != bVar17) {
            rpl_fclose(pbVar14);
          }
        }
code_r0x00101fa2:
        if (lStack9000 == *(long *)(in_FS_OFFSET + 0x28)) {
          return (ulong)uVar16;
        }
        uVar4 = func_0x001016b0();
      }
      pbVar15 = *(byte **)(pbVar14 + 0x10);
      pbVar9 = *(byte **)(pbVar14 + 8);
    }
    unaff_R14 = unaff_R14 + 1;
    uVar12 = (ulong)(uint)((int)uVar16 >> 1);
    uVar16 = (uVar16 & 1) * 0x8000 + ((int)uVar16 >> 1) + uVar4 & 0xffff;
  } while( true );
}

