
undefined * posixtime(undefined8 *param_1,char *param_2,ulong param_3)

{
  char cVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  byte *pbVar11;
  int iVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  char *pcVar16;
  long in_FS_OFFSET;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  byte bVar20;
  char *pcStack288;
  long lStack280;
  char *pcStack272;
  undefined auStack256 [8];
  uint uStack248;
  uint uStack244;
  uint uStack240;
  uint uStack236;
  uint uStack232;
  uint auStack228 [11];
  uint uStack184;
  uint uStack180;
  uint uStack176;
  uint uStack172;
  uint uStack168;
  uint uStack164;
  int iStack160;
  undefined4 uStack152;
  uint auStack136 [4];
  uint auStack120 [4];
  undefined auStack104 [16];
  undefined auStack88 [24];
  long lStack64;
  
  bVar20 = 0;
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  pcStack272 = &UNK_00108834;
  uVar3 = func_0x00102810(param_2);
  uVar5 = uVar3;
  if ((param_3 & 4) == 0) {
    lVar4 = 0;
joined_r0x00108a7b:
    if ((uVar5 - 8 < 5) && ((uVar5 & 1) == 0)) {
      pcVar16 = param_2;
      do {
        if (9 < (int)*pcVar16 - 0x30U) goto code_r0x00108862;
        pcVar16 = pcVar16 + 1;
      } while (param_2 + uVar5 != pcVar16);
      uVar5 = uVar5 >> 1;
      uVar3 = 0;
      do {
        uVar10 = uVar3;
        (auStack136 + 4)[uVar10] =
             (int)param_2[uVar10 * 2 + 1] + -0x30 + ((int)param_2[uVar10 * 2] * 5 + -0xf0) * 2;
        uVar3 = uVar10 + 1;
      } while (uVar5 != uVar10 + 1);
      if ((param_3 & 1) == 0) {
        pcStack272 = &UNK_00108a9f;
        cVar1 = year_isra_0(auStack228,auStack136 + 4,uVar10 - 3);
        if (cVar1 != '\0') {
          uStack232 = auStack136[uVar5] - 1;
          uStack236 = auStack136[uVar5 + 1];
          uStack240 = auStack136[uVar5 + 2];
          uStack244 = auStack136[uVar5 + 3];
          goto code_r0x00108951;
        }
      }
      else {
        uStack232 = auStack120[0] - 1;
        uStack236 = auStack120[1];
        uStack240 = auStack120[2];
        uStack244 = auStack120[3];
        pcStack272 = &UNK_00108949;
        cVar1 = year_isra_0(auStack228,auStack104,uVar10 - 3);
        if (cVar1 != '\0') {
code_r0x00108951:
          if (lVar4 == 0) {
            uStack248 = 0;
          }
          else {
            uVar2 = (int)*(char *)(lVar4 + 1) - 0x30;
            if ((9 < uVar2) || (9 < (int)*(char *)(lVar4 + 2) - 0x30U)) goto code_r0x00108862;
            uStack248 = (int)*(char *)(lVar4 + 2) + -0x30 + uVar2 * 10;
          }
          iStack160 = -1;
          uStack152 = 0xffffffff;
          uStack180 = uStack244;
          uStack176 = uStack240;
          uStack172 = uStack236;
          uStack168 = uStack232;
          uStack164 = auStack228[0];
          pcStack272 = &UNK_001089cd;
          uStack184 = uStack248;
          uVar6 = func_0x00102a00(&uStack184);
          uVar7 = 0;
          if (iStack160 < 0) goto code_r0x00108864;
          if ((auStack228[0] ^ uStack164 | uStack232 ^ uStack168 | uStack236 ^ uStack172 |
               uStack240 ^ uStack176 | uStack244 ^ uStack180 | uStack184 ^ uStack248) != 0) {
            if (uStack248 != 0x3c) goto code_r0x00108864;
            pcStack272 = &UNK_00108a3d;
            puVar8 = (undefined *)func_0x001029b0(auStack88,param_2,0x10);
            *puVar8 = 0;
            *(undefined2 *)(puVar8 + -2) = 0x3935;
            pcStack272 = &UNK_00108a58;
            uVar7 = posixtime(auStack256,auStack88,param_3 & 0xffffffff);
            if ((char)uVar7 == '\0') goto code_r0x00108864;
          }
          *param_1 = uVar6;
          uVar7 = 1;
          goto code_r0x00108864;
        }
      }
    }
  }
  else {
    pcStack272 = &UNK_0010884e;
    lVar4 = func_0x00102870(param_2,0x2e);
    if ((lVar4 == 0) || (uVar5 = lVar4 - (long)param_2, uVar3 - uVar5 == 3))
    goto joined_r0x00108a7b;
  }
code_r0x00108862:
  uVar7 = 0;
code_r0x00108864:
  if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (undefined *)uVar7;
  }
  pcStack272 = &UNK_00108ae4;
  func_0x00102830();
  pbVar13 = &UNK_001114f6;
  uVar5 = 0x31069;
  lStack280 = *(long *)(in_FS_OFFSET + 0x28);
  pcStack272 = param_2;
  pbVar14 = (byte *)func_0x001026f0();
  if (((pbVar14 != (byte *)0x0) && (*pbVar14 != 0)) &&
     (uVar3 = func_0x00102960(pbVar14,&pcStack288,10), pbVar13 = pbVar14, *pcStack288 == '\0')) {
    if ((long)uVar3 < -0x80000000) {
      uVar5 = 0x80000000;
    }
    else {
      uVar5 = 0x7fffffff;
      if ((long)uVar3 < 0x80000000) {
        uVar5 = uVar3;
      }
    }
  }
  if (lStack280 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (undefined *)(uVar5 & 0xffffffff);
  }
  func_0x00102830();
  if (pbVar13 == (byte *)0x0) {
    pcVar16 = "A NULL argv[0] was passed through an exec system call.\n";
    iVar12 = 1;
    func_0x00102ae0(&UNK_00111508,1,0x37,stderr);
    func_0x00102740();
    pbVar13 = (byte *)locale_charset();
    if ((*pbVar13 & 0xdf) == 0x55) {
      if ((((pbVar13[1] & 0xdf) == 0x54) && ((pbVar13[2] & 0xdf) == 0x46)) &&
         ((pbVar13[3] == 0x2d && ((pbVar13[4] == 0x38 && (pbVar13[5] == 0)))))) {
        puVar8 = &UNK_0011154c;
        if (*pcVar16 != '`') {
          puVar8 = &UNK_00111550;
        }
        return puVar8;
      }
    }
    else {
      if ((((((*pbVar13 & 0xdf) == 0x47) && ((pbVar13[1] & 0xdf) == 0x42)) && (pbVar13[2] == 0x31))
          && ((pbVar13[3] == 0x38 && (pbVar13[4] == 0x30)))) &&
         ((pbVar13[5] == 0x33 && ((pbVar13[6] == 0x30 && (pbVar13[7] == 0)))))) {
        puVar8 = &UNK_00111554;
        if (*pcVar16 != '`') {
          puVar8 = &UNK_00111558;
        }
        return puVar8;
      }
    }
    puVar8 = &UNK_00110237;
    if (iVar12 != 9) {
      puVar8 = &UNK_0011155b;
    }
    return puVar8;
  }
  lVar4 = func_0x001028a0();
  if (lVar4 != 0) {
    pbVar14 = (byte *)(lVar4 + 1);
    pbVar11 = pbVar14 + -(long)pbVar13;
    bVar17 = pbVar11 < (byte *)0x6;
    bVar19 = pbVar11 == (byte *)0x6;
    if (6 < (long)pbVar11) {
      lVar9 = 7;
      pbVar11 = (byte *)(lVar4 + -6);
      pbVar15 = &UNK_00111540;
      do {
        if (lVar9 == 0) break;
        lVar9 = lVar9 + -1;
        bVar17 = *pbVar11 < *pbVar15;
        bVar19 = *pbVar11 == *pbVar15;
        pbVar11 = pbVar11 + (ulong)bVar20 * -2 + 1;
        pbVar15 = pbVar15 + (ulong)bVar20 * -2 + 1;
      } while (bVar19);
      bVar18 = false;
      bVar17 = (!bVar17 && !bVar19) == bVar17;
      if (bVar17) {
        lVar9 = 3;
        pbVar13 = pbVar14;
        pbVar11 = &UNK_00111548;
        do {
          if (lVar9 == 0) break;
          lVar9 = lVar9 + -1;
          bVar18 = *pbVar13 < *pbVar11;
          bVar17 = *pbVar13 == *pbVar11;
          pbVar13 = pbVar13 + (ulong)bVar20 * -2 + 1;
          pbVar11 = pbVar11 + (ulong)bVar20 * -2 + 1;
        } while (bVar17);
        pbVar13 = pbVar14;
        if ((!bVar18 && !bVar17) == bVar18) {
          pbVar13 = (byte *)(lVar4 + 4);
          program_invocation_short_name = pbVar13;
        }
      }
    }
  }
  program_invocation_name = pbVar13;
  program_name = pbVar13;
  return (undefined *)lVar4;
}

