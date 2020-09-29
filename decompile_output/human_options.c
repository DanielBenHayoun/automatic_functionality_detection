
undefined * human_options(byte *param_1,uint *param_2,long *param_3)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  byte *pbVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  char *pcVar12;
  long in_FS_OFFSET;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  byte bVar16;
  byte *pbStack56;
  long lStack48;
  
  bVar16 = 0;
  lStack48 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 == (byte *)0x0) &&
      (param_1 = (byte *)func_0x001015d0(&UNK_001066f1), param_1 == (byte *)0x0)) &&
     (param_1 = (byte *)func_0x001015d0(&UNK_001066fc), param_1 == (byte *)0x0)) {
    pbVar10 = &UNK_00106706;
    lVar5 = func_0x001015d0();
    if (lVar5 == 0) {
      *param_3 = 0x400;
      uVar4 = 0;
      *param_2 = 0;
    }
    else {
      *param_3 = 0x200;
      uVar4 = 0;
      *param_2 = 0;
    }
  }
  else {
    uVar9 = 0;
    if (*param_1 == 0x27) {
      param_1 = param_1 + 1;
      uVar9 = 4;
    }
    pbVar10 = param_1;
    iVar3 = argmatch(param_1,block_size_args,&block_size_opts,4);
    if (iVar3 < 0) {
      pbVar10 = param_1;
      uVar4 = xstrtoumax(param_1,&pbStack56,0,param_3,&UNK_00106716);
      if ((int)uVar4 == 0) {
        bVar2 = *param_1;
        while (9 < (byte)(bVar2 - 0x30)) {
          if (param_1 == pbStack56) {
            if (pbStack56[-1] == 0x42) {
              uVar9 = uVar9 | 0x180;
              if (pbStack56[-2] != 0x69) break;
            }
            else {
              uVar9 = uVar9 | 0x80;
            }
            uVar9 = uVar9 | 0x20;
            break;
          }
          param_1 = param_1 + 1;
          bVar2 = *param_1;
          pbVar10 = (byte *)(ulong)bVar2;
        }
        lVar5 = *param_3;
        *param_2 = uVar9;
      }
      else {
        lVar5 = *param_3;
        *param_2 = 0;
      }
      if (lVar5 == 0) {
        pbVar10 = &UNK_00106706;
        lVar5 = func_0x001015d0();
        *param_3 = (ulong)(-(uint)(lVar5 == 0) & 0x200) + 0x200;
        uVar4 = 4;
      }
    }
    else {
      *param_3 = 1;
      uVar4 = 0;
      *param_2 = uVar9 | *(uint *)((long)&block_size_opts + (long)iVar3 * 4);
    }
  }
  if (lStack48 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (undefined *)uVar4;
  }
  func_0x001016b0();
  if (pbVar10 == (byte *)0x0) {
    pcVar12 = "A NULL argv[0] was passed through an exec system call.\n";
    iVar3 = 1;
    func_0x001018d0(&UNK_00106770,1,0x37,stderr);
    func_0x001015f0();
    pbVar10 = (byte *)locale_charset();
    if ((*pbVar10 & 0xdf) == 0x55) {
      if ((((pbVar10[1] & 0xdf) == 0x54) && ((pbVar10[2] & 0xdf) == 0x46)) &&
         ((pbVar10[3] == 0x2d && ((pbVar10[4] == 0x38 && (pbVar10[5] == 0)))))) {
        puVar6 = &UNK_001067b4;
        if (*pcVar12 != '`') {
          puVar6 = &UNK_001067b8;
        }
        return puVar6;
      }
    }
    else {
      if ((((((*pbVar10 & 0xdf) == 0x47) && ((pbVar10[1] & 0xdf) == 0x42)) && (pbVar10[2] == 0x31))
          && ((pbVar10[3] == 0x38 && (pbVar10[4] == 0x30)))) &&
         ((pbVar10[5] == 0x33 && ((pbVar10[6] == 0x30 && (pbVar10[7] == 0)))))) {
        puVar6 = &UNK_001067bc;
        if (*pcVar12 != '`') {
          puVar6 = &UNK_001067c0;
        }
        return puVar6;
      }
    }
    puVar6 = &UNK_001067c3;
    if (iVar3 != 9) {
      puVar6 = &UNK_001067c5;
    }
    return puVar6;
  }
  lVar5 = func_0x00101700();
  if (lVar5 != 0) {
    pbVar1 = (byte *)(lVar5 + 1);
    pbVar8 = pbVar1 + -(long)pbVar10;
    bVar13 = pbVar8 < (byte *)0x6;
    bVar15 = pbVar8 == (byte *)0x6;
    if (6 < (long)pbVar8) {
      lVar7 = 7;
      pbVar8 = (byte *)(lVar5 + -6);
      pbVar11 = &UNK_001067a8;
      do {
        if (lVar7 == 0) break;
        lVar7 = lVar7 + -1;
        bVar13 = *pbVar8 < *pbVar11;
        bVar15 = *pbVar8 == *pbVar11;
        pbVar8 = pbVar8 + (ulong)bVar16 * -2 + 1;
        pbVar11 = pbVar11 + (ulong)bVar16 * -2 + 1;
      } while (bVar15);
      bVar14 = false;
      bVar13 = (!bVar13 && !bVar15) == bVar13;
      if (bVar13) {
        lVar7 = 3;
        pbVar10 = pbVar1;
        pbVar8 = &UNK_001067b0;
        do {
          if (lVar7 == 0) break;
          lVar7 = lVar7 + -1;
          bVar14 = *pbVar10 < *pbVar8;
          bVar13 = *pbVar10 == *pbVar8;
          pbVar10 = pbVar10 + (ulong)bVar16 * -2 + 1;
          pbVar8 = pbVar8 + (ulong)bVar16 * -2 + 1;
        } while (bVar13);
        pbVar10 = pbVar1;
        if ((!bVar14 && !bVar13) == bVar14) {
          pbVar10 = (byte *)(lVar5 + 4);
          program_invocation_short_name = pbVar10;
        }
      }
    }
  }
  program_invocation_name = pbVar10;
  program_name = pbVar10;
  return (undefined *)lVar5;
}

