
undefined * posixtime(undefined8 *param_1,uint *param_2,ulong param_3)

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
  uint *puVar10;
  ulong uVar11;
  uint *puVar12;
  uint *puVar13;
  int iVar14;
  byte *pbVar15;
  byte *pbVar16;
  char *pcVar17;
  long in_FS_OFFSET;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  byte bVar21;
  uint auStack256 [2];
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
  
  bVar21 = 0;
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  puVar13 = param_2;
  uVar3 = func_0x00102840();
  uVar5 = uVar3;
  if ((param_3 & 4) == 0) {
    lVar4 = 0;
joined_r0x0010a9ab:
    if ((uVar5 - 8 < 5) && ((uVar5 & 1) == 0)) {
      puVar10 = param_2;
      do {
        if (9 < (int)(char)*(byte *)puVar10 - 0x30U) goto code_r0x0010a792;
        puVar10 = (uint *)((long)puVar10 + 1);
      } while ((uint *)(uVar5 + (long)param_2) != puVar10);
      uVar5 = uVar5 >> 1;
      uVar3 = 0;
      do {
        uVar11 = uVar3;
        (auStack136 + 4)[uVar11] =
             (int)*(char *)((long)param_2 + uVar11 * 2 + 1) + -0x30 +
             ((int)(char)*(byte *)((long)param_2 + uVar11 * 2) * 5 + -0xf0) * 2;
        uVar3 = uVar11 + 1;
      } while (uVar5 != uVar11 + 1);
      if ((param_3 & 1) == 0) {
        puVar13 = auStack228;
        cVar1 = year_isra_0(puVar13,auStack136 + 4,uVar11 - 3);
        if (cVar1 != '\0') {
          uStack232 = auStack136[uVar5] - 1;
          uStack236 = auStack136[uVar5 + 1];
          uStack240 = auStack136[uVar5 + 2];
          uStack244 = auStack136[uVar5 + 3];
          goto code_r0x0010a881;
        }
      }
      else {
        puVar13 = auStack228;
        uStack232 = auStack120[0] - 1;
        uStack236 = auStack120[1];
        uStack240 = auStack120[2];
        uStack244 = auStack120[3];
        cVar1 = year_isra_0(puVar13,auStack104,uVar11 - 3);
        if (cVar1 != '\0') {
code_r0x0010a881:
          if (lVar4 == 0) {
            uStack248 = 0;
          }
          else {
            uVar2 = (int)*(char *)(lVar4 + 1) - 0x30;
            if ((9 < uVar2) || (9 < (int)*(char *)(lVar4 + 2) - 0x30U)) goto code_r0x0010a792;
            uStack248 = (int)*(char *)(lVar4 + 2) + -0x30 + uVar2 * 10;
          }
          puVar13 = &uStack184;
          iStack160 = -1;
          uStack152 = 0xffffffff;
          uStack180 = uStack244;
          uStack176 = uStack240;
          uStack172 = uStack236;
          uStack168 = uStack232;
          uStack164 = auStack228[0];
          uStack184 = uStack248;
          uVar6 = func_0x00102a20();
          uVar7 = 0;
          if (iStack160 < 0) goto code_r0x0010a794;
          if ((auStack228[0] ^ uStack164 | uStack232 ^ uStack168 | uStack236 ^ uStack172 |
               uStack240 ^ uStack176 | uStack244 ^ uStack180 | uStack184 ^ uStack248) != 0) {
            if (uStack248 != 0x3c) goto code_r0x0010a794;
            puVar8 = (undefined *)func_0x001029b0(auStack88,param_2,0x10);
            puVar13 = auStack256;
            *puVar8 = 0;
            *(undefined2 *)(puVar8 + -2) = 0x3935;
            uVar7 = posixtime(puVar13,auStack88,param_3 & 0xffffffff);
            if ((char)uVar7 == '\0') goto code_r0x0010a794;
          }
          *param_1 = uVar6;
          uVar7 = 1;
          goto code_r0x0010a794;
        }
      }
    }
  }
  else {
    puVar13 = param_2;
    lVar4 = func_0x00102880(param_2,0x2e);
    if ((lVar4 == 0) || (uVar5 = lVar4 - (long)param_2, uVar3 - uVar5 == 3))
    goto joined_r0x0010a9ab;
  }
code_r0x0010a792:
  uVar7 = 0;
code_r0x0010a794:
  if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (undefined *)uVar7;
  }
  func_0x00102850();
  if (puVar13 == (uint *)0x0) {
    pcVar17 = "A NULL argv[0] was passed through an exec system call.\n";
    iVar14 = 1;
    func_0x00102af0(&UNK_00114438,1,0x37,stderr);
    func_0x00102770();
    pbVar15 = (byte *)locale_charset();
    if ((*pbVar15 & 0xdf) == 0x55) {
      if (((((pbVar15[1] & 0xdf) == 0x54) && ((pbVar15[2] & 0xdf) == 0x46)) && (pbVar15[3] == 0x2d))
         && ((pbVar15[4] == 0x38 && (pbVar15[5] == 0)))) {
        puVar8 = &UNK_0011447c;
        if (*pcVar17 != '`') {
          puVar8 = &UNK_00114480;
        }
        return puVar8;
      }
    }
    else {
      if ((((*pbVar15 & 0xdf) == 0x47) && ((pbVar15[1] & 0xdf) == 0x42)) &&
         ((pbVar15[2] == 0x31 &&
          ((((pbVar15[3] == 0x38 && (pbVar15[4] == 0x30)) && (pbVar15[5] == 0x33)) &&
           ((pbVar15[6] == 0x30 && (pbVar15[7] == 0)))))))) {
        puVar8 = &UNK_00114484;
        if (*pcVar17 != '`') {
          puVar8 = &UNK_00114488;
        }
        return puVar8;
      }
    }
    puVar8 = &UNK_00113185;
    if (iVar14 != 9) {
      puVar8 = &UNK_0011448b;
    }
    return puVar8;
  }
  lVar4 = func_0x001028b0();
  if (lVar4 != 0) {
    puVar10 = (uint *)(lVar4 + 1);
    puVar12 = (uint *)((long)puVar10 - (long)puVar13);
    bVar18 = puVar12 < (uint *)0x6;
    bVar20 = puVar12 == (uint *)0x6;
    if (6 < (long)puVar12) {
      lVar9 = 7;
      pbVar15 = (byte *)(lVar4 + -6);
      pbVar16 = &UNK_00114470;
      do {
        if (lVar9 == 0) break;
        lVar9 = lVar9 + -1;
        bVar18 = *pbVar15 < *pbVar16;
        bVar20 = *pbVar15 == *pbVar16;
        pbVar15 = pbVar15 + (ulong)bVar21 * -2 + 1;
        pbVar16 = pbVar16 + (ulong)bVar21 * -2 + 1;
      } while (bVar20);
      bVar19 = false;
      bVar18 = (!bVar18 && !bVar20) == bVar18;
      if (bVar18) {
        lVar9 = 3;
        puVar13 = puVar10;
        pbVar15 = &UNK_00114478;
        do {
          if (lVar9 == 0) break;
          lVar9 = lVar9 + -1;
          bVar19 = *(byte *)puVar13 < *pbVar15;
          bVar18 = *(byte *)puVar13 == *pbVar15;
          puVar13 = (uint *)((long)puVar13 + (ulong)bVar21 * -2 + 1);
          pbVar15 = pbVar15 + (ulong)bVar21 * -2 + 1;
        } while (bVar18);
        puVar13 = puVar10;
        if ((!bVar19 && !bVar18) == bVar19) {
          puVar13 = (uint *)(lVar4 + 4);
          program_invocation_short_name = puVar13;
        }
      }
    }
  }
  program_invocation_name = puVar13;
  program_name = puVar13;
  return (undefined *)lVar4;
}

