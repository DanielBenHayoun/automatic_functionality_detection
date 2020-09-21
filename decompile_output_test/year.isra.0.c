
undefined * year_isra_0(undefined8 *param_1,uint *param_2,long param_3,ulong param_4)

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
  ulong extraout_RDX;
  uint *puVar10;
  ulong uVar11;
  uint *puVar12;
  uint *puVar13;
  undefined *unaff_RBP;
  int iVar14;
  byte *pbVar15;
  undefined8 *puVar16;
  byte *pbVar17;
  char *pcVar18;
  long in_FS_OFFSET;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  byte bVar22;
  uint auStack296 [2];
  uint uStack288;
  uint uStack284;
  uint uStack280;
  uint uStack276;
  uint uStack272;
  uint auStack268 [11];
  uint uStack224;
  uint uStack220;
  uint uStack216;
  uint uStack212;
  uint uStack208;
  uint uStack204;
  int iStack200;
  undefined4 uStack192;
  uint auStack176 [4];
  uint auStack160 [4];
  undefined auStack144 [16];
  undefined auStack128 [24];
  long lStack104;
  undefined8 *puStack88;
  undefined *puStack80;
  undefined auStack40 [8];
  ulong uStack32;
  
  bVar22 = 0;
  uStack32 = *(ulong *)(in_FS_OFFSET + 0x28);
  if (param_3 == 1) {
    uVar2 = *param_2;
    lVar4 = 1;
    *(uint *)param_1 = uVar2;
    if ((int)*param_2 < 0x45) {
      if ((param_4 & 8) == 0) {
        *(uint *)param_1 = uVar2 + 100;
      }
      else {
code_r0x0010a6a0:
        lVar4 = 0;
      }
    }
code_r0x0010a6ca:
    puVar16 = (undefined8 *)(uStack32 ^ *(ulong *)(in_FS_OFFSET + 0x28));
    if (puVar16 == (undefined8 *)0x0) {
      return (undefined *)lVar4;
    }
    func_0x00102850();
  }
  else {
    if (param_3 == 0) {
      func_0x00102990(auStack40);
      lVar4 = func_0x00102760(auStack40);
      unaff_RBP = auStack40;
      if (lVar4 != 0) {
        *(int *)param_1 = *(int *)(lVar4 + 0x14);
        lVar4 = 1;
        unaff_RBP = auStack40;
      }
      goto code_r0x0010a6ca;
    }
    puVar16 = param_1;
    if (param_3 == 2) {
      if ((param_4 & 2) == 0) goto code_r0x0010a6a0;
      *(uint *)param_1 = *param_2 * 100 + param_2[1] + -0x76c;
      lVar4 = 1;
      goto code_r0x0010a6ca;
    }
  }
  func_0x00102770();
  lStack104 = *(long *)(in_FS_OFFSET + 0x28);
  puVar13 = param_2;
  puStack88 = param_1;
  puStack80 = unaff_RBP;
  uVar3 = func_0x00102840();
  uVar5 = uVar3;
  if ((extraout_RDX & 4) == 0) {
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
        (auStack176 + 4)[uVar11] =
             (int)*(char *)((long)param_2 + uVar11 * 2 + 1) + -0x30 +
             ((int)(char)*(byte *)((long)param_2 + uVar11 * 2) * 5 + -0xf0) * 2;
        uVar3 = uVar11 + 1;
      } while (uVar5 != uVar11 + 1);
      if ((extraout_RDX & 1) == 0) {
        puVar13 = auStack268;
        cVar1 = year_isra_0(puVar13,auStack176 + 4,uVar11 - 3);
        if (cVar1 != '\0') {
          uStack272 = auStack176[uVar5] - 1;
          uStack276 = auStack176[uVar5 + 1];
          uStack280 = auStack176[uVar5 + 2];
          uStack284 = auStack176[uVar5 + 3];
          goto code_r0x0010a881;
        }
      }
      else {
        puVar13 = auStack268;
        uStack272 = auStack160[0] - 1;
        uStack276 = auStack160[1];
        uStack280 = auStack160[2];
        uStack284 = auStack160[3];
        cVar1 = year_isra_0(puVar13,auStack144,uVar11 - 3);
        if (cVar1 != '\0') {
code_r0x0010a881:
          if (lVar4 == 0) {
            uStack288 = 0;
          }
          else {
            uVar2 = (int)*(char *)(lVar4 + 1) - 0x30;
            if ((9 < uVar2) || (9 < (int)*(char *)(lVar4 + 2) - 0x30U)) goto code_r0x0010a792;
            uStack288 = (int)*(char *)(lVar4 + 2) + -0x30 + uVar2 * 10;
          }
          puVar13 = &uStack224;
          iStack200 = -1;
          uStack192 = 0xffffffff;
          uStack220 = uStack284;
          uStack216 = uStack280;
          uStack212 = uStack276;
          uStack208 = uStack272;
          uStack204 = auStack268[0];
          uStack224 = uStack288;
          uVar6 = func_0x00102a20();
          uVar7 = 0;
          if (iStack200 < 0) goto code_r0x0010a794;
          if ((auStack268[0] ^ uStack204 | uStack272 ^ uStack208 | uStack276 ^ uStack212 |
               uStack280 ^ uStack216 | uStack284 ^ uStack220 | uStack224 ^ uStack288) != 0) {
            if (uStack288 != 0x3c) goto code_r0x0010a794;
            puVar8 = (undefined *)func_0x001029b0(auStack128,param_2,0x10);
            puVar13 = auStack296;
            *puVar8 = 0;
            *(undefined2 *)(puVar8 + -2) = 0x3935;
            uVar7 = posixtime(puVar13,auStack128,extraout_RDX & 0xffffffff);
            if ((char)uVar7 == '\0') goto code_r0x0010a794;
          }
          *puVar16 = uVar6;
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
  if (lStack104 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (undefined *)uVar7;
  }
  func_0x00102850();
  if (puVar13 == (uint *)0x0) {
    pcVar18 = "A NULL argv[0] was passed through an exec system call.\n";
    iVar14 = 1;
    func_0x00102af0(&UNK_00114438,1,0x37,stderr);
    func_0x00102770();
    pbVar15 = (byte *)locale_charset();
    if ((*pbVar15 & 0xdf) == 0x55) {
      if (((((pbVar15[1] & 0xdf) == 0x54) && ((pbVar15[2] & 0xdf) == 0x46)) && (pbVar15[3] == 0x2d))
         && ((pbVar15[4] == 0x38 && (pbVar15[5] == 0)))) {
        puVar8 = &UNK_0011447c;
        if (*pcVar18 != '`') {
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
        if (*pcVar18 != '`') {
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
    bVar19 = puVar12 < (uint *)0x6;
    bVar21 = puVar12 == (uint *)0x6;
    if (6 < (long)puVar12) {
      lVar9 = 7;
      pbVar15 = (byte *)(lVar4 + -6);
      pbVar17 = &UNK_00114470;
      do {
        if (lVar9 == 0) break;
        lVar9 = lVar9 + -1;
        bVar19 = *pbVar15 < *pbVar17;
        bVar21 = *pbVar15 == *pbVar17;
        pbVar15 = pbVar15 + (ulong)bVar22 * -2 + 1;
        pbVar17 = pbVar17 + (ulong)bVar22 * -2 + 1;
      } while (bVar21);
      bVar20 = false;
      bVar19 = (!bVar19 && !bVar21) == bVar19;
      if (bVar19) {
        lVar9 = 3;
        puVar13 = puVar10;
        pbVar15 = &UNK_00114478;
        do {
          if (lVar9 == 0) break;
          lVar9 = lVar9 + -1;
          bVar20 = *(byte *)puVar13 < *pbVar15;
          bVar19 = *(byte *)puVar13 == *pbVar15;
          puVar13 = (uint *)((long)puVar13 + (ulong)bVar22 * -2 + 1);
          pbVar15 = pbVar15 + (ulong)bVar22 * -2 + 1;
        } while (bVar19);
        puVar13 = puVar10;
        if ((!bVar20 && !bVar19) == bVar20) {
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

