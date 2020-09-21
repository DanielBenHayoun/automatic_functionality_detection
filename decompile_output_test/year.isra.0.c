
undefined * year_isra_0(undefined8 *param_1,int *param_2,long param_3,ulong param_4)

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
  int *piVar10;
  ulong uVar11;
  byte *pbVar12;
  undefined *unaff_RBP;
  int iVar13;
  undefined8 *puVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  char *pcVar18;
  long in_FS_OFFSET;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  byte bVar22;
  char *pcStack328;
  long lStack320;
  int *piStack312;
  undefined auStack296 [8];
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
    iVar13 = *param_2;
    lVar4 = 1;
    *(int *)param_1 = iVar13;
    if (*param_2 < 0x45) {
      if ((param_4 & 8) == 0) {
        *(int *)param_1 = iVar13 + 100;
      }
      else {
code_r0x00108770:
        lVar4 = 0;
      }
    }
code_r0x0010879a:
    puVar14 = (undefined8 *)(uStack32 ^ *(ulong *)(in_FS_OFFSET + 0x28));
    if (puVar14 == (undefined8 *)0x0) {
      return (undefined *)lVar4;
    }
    func_0x00102830();
  }
  else {
    if (param_3 == 0) {
      func_0x00102990(auStack40);
      lVar4 = func_0x00102730(auStack40);
      unaff_RBP = auStack40;
      if (lVar4 != 0) {
        *(int *)param_1 = *(int *)(lVar4 + 0x14);
        lVar4 = 1;
        unaff_RBP = auStack40;
      }
      goto code_r0x0010879a;
    }
    puVar14 = param_1;
    if (param_3 == 2) {
      if ((param_4 & 2) == 0) goto code_r0x00108770;
      *(int *)param_1 = *param_2 * 100 + param_2[1] + -0x76c;
      lVar4 = 1;
      goto code_r0x0010879a;
    }
  }
  func_0x00102740();
  lStack104 = *(long *)(in_FS_OFFSET + 0x28);
  piStack312 = (int *)&UNK_00108834;
  puStack88 = param_1;
  puStack80 = unaff_RBP;
  uVar3 = func_0x00102810(param_2);
  uVar5 = uVar3;
  if ((extraout_RDX & 4) == 0) {
    lVar4 = 0;
joined_r0x00108a7b:
    if ((uVar5 - 8 < 5) && ((uVar5 & 1) == 0)) {
      piVar10 = param_2;
      do {
        if (9 < (int)*(char *)piVar10 - 0x30U) goto code_r0x00108862;
        piVar10 = (int *)((long)piVar10 + 1);
      } while ((int *)(uVar5 + (long)param_2) != piVar10);
      uVar5 = uVar5 >> 1;
      uVar3 = 0;
      do {
        uVar11 = uVar3;
        (auStack176 + 4)[uVar11] =
             (int)*(char *)((long)param_2 + uVar11 * 2 + 1) + -0x30 +
             ((int)*(char *)((long)param_2 + uVar11 * 2) * 5 + -0xf0) * 2;
        uVar3 = uVar11 + 1;
      } while (uVar5 != uVar11 + 1);
      if ((extraout_RDX & 1) == 0) {
        piStack312 = (int *)&UNK_00108a9f;
        cVar1 = year_isra_0(auStack268,auStack176 + 4,uVar11 - 3);
        if (cVar1 != '\0') {
          uStack272 = auStack176[uVar5] - 1;
          uStack276 = auStack176[uVar5 + 1];
          uStack280 = auStack176[uVar5 + 2];
          uStack284 = auStack176[uVar5 + 3];
          goto code_r0x00108951;
        }
      }
      else {
        uStack272 = auStack160[0] - 1;
        uStack276 = auStack160[1];
        uStack280 = auStack160[2];
        uStack284 = auStack160[3];
        piStack312 = (int *)&UNK_00108949;
        cVar1 = year_isra_0(auStack268,auStack144,uVar11 - 3);
        if (cVar1 != '\0') {
code_r0x00108951:
          if (lVar4 == 0) {
            uStack288 = 0;
          }
          else {
            uVar2 = (int)*(char *)(lVar4 + 1) - 0x30;
            if ((9 < uVar2) || (9 < (int)*(char *)(lVar4 + 2) - 0x30U)) goto code_r0x00108862;
            uStack288 = (int)*(char *)(lVar4 + 2) + -0x30 + uVar2 * 10;
          }
          iStack200 = -1;
          uStack192 = 0xffffffff;
          uStack220 = uStack284;
          uStack216 = uStack280;
          uStack212 = uStack276;
          uStack208 = uStack272;
          uStack204 = auStack268[0];
          piStack312 = (int *)&UNK_001089cd;
          uStack224 = uStack288;
          uVar6 = func_0x00102a00(&uStack224);
          uVar7 = 0;
          if (iStack200 < 0) goto code_r0x00108864;
          if ((auStack268[0] ^ uStack204 | uStack272 ^ uStack208 | uStack276 ^ uStack212 |
               uStack280 ^ uStack216 | uStack284 ^ uStack220 | uStack224 ^ uStack288) != 0) {
            if (uStack288 != 0x3c) goto code_r0x00108864;
            piStack312 = (int *)&UNK_00108a3d;
            puVar8 = (undefined *)func_0x001029b0(auStack128,param_2,0x10);
            *puVar8 = 0;
            *(undefined2 *)(puVar8 + -2) = 0x3935;
            piStack312 = (int *)&UNK_00108a58;
            uVar7 = posixtime(auStack296,auStack128,extraout_RDX & 0xffffffff);
            if ((char)uVar7 == '\0') goto code_r0x00108864;
          }
          *puVar14 = uVar6;
          uVar7 = 1;
          goto code_r0x00108864;
        }
      }
    }
  }
  else {
    piStack312 = (int *)&UNK_0010884e;
    lVar4 = func_0x00102870(param_2,0x2e);
    if ((lVar4 == 0) || (uVar5 = lVar4 - (long)param_2, uVar3 - uVar5 == 3))
    goto joined_r0x00108a7b;
  }
code_r0x00108862:
  uVar7 = 0;
code_r0x00108864:
  if (lStack104 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (undefined *)uVar7;
  }
  piStack312 = (int *)&UNK_00108ae4;
  func_0x00102830();
  pbVar15 = &UNK_001114f6;
  uVar5 = 0x31069;
  lStack320 = *(long *)(in_FS_OFFSET + 0x28);
  piStack312 = param_2;
  pbVar16 = (byte *)func_0x001026f0();
  if (((pbVar16 != (byte *)0x0) && (*pbVar16 != 0)) &&
     (uVar3 = func_0x00102960(pbVar16,&pcStack328,10), pbVar15 = pbVar16, *pcStack328 == '\0')) {
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
  if (lStack320 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (undefined *)(uVar5 & 0xffffffff);
  }
  func_0x00102830();
  if (pbVar15 == (byte *)0x0) {
    pcVar18 = "A NULL argv[0] was passed through an exec system call.\n";
    iVar13 = 1;
    func_0x00102ae0(&UNK_00111508,1,0x37,stderr);
    func_0x00102740();
    pbVar15 = (byte *)locale_charset();
    if ((*pbVar15 & 0xdf) == 0x55) {
      if ((((pbVar15[1] & 0xdf) == 0x54) && ((pbVar15[2] & 0xdf) == 0x46)) &&
         ((pbVar15[3] == 0x2d && ((pbVar15[4] == 0x38 && (pbVar15[5] == 0)))))) {
        puVar8 = &UNK_0011154c;
        if (*pcVar18 != '`') {
          puVar8 = &UNK_00111550;
        }
        return puVar8;
      }
    }
    else {
      if ((((((*pbVar15 & 0xdf) == 0x47) && ((pbVar15[1] & 0xdf) == 0x42)) && (pbVar15[2] == 0x31))
          && ((pbVar15[3] == 0x38 && (pbVar15[4] == 0x30)))) &&
         ((pbVar15[5] == 0x33 && ((pbVar15[6] == 0x30 && (pbVar15[7] == 0)))))) {
        puVar8 = &UNK_00111554;
        if (*pcVar18 != '`') {
          puVar8 = &UNK_00111558;
        }
        return puVar8;
      }
    }
    puVar8 = &UNK_00110237;
    if (iVar13 != 9) {
      puVar8 = &UNK_0011155b;
    }
    return puVar8;
  }
  lVar4 = func_0x001028a0();
  if (lVar4 != 0) {
    pbVar16 = (byte *)(lVar4 + 1);
    pbVar12 = pbVar16 + -(long)pbVar15;
    bVar19 = pbVar12 < (byte *)0x6;
    bVar21 = pbVar12 == (byte *)0x6;
    if (6 < (long)pbVar12) {
      lVar9 = 7;
      pbVar12 = (byte *)(lVar4 + -6);
      pbVar17 = &UNK_00111540;
      do {
        if (lVar9 == 0) break;
        lVar9 = lVar9 + -1;
        bVar19 = *pbVar12 < *pbVar17;
        bVar21 = *pbVar12 == *pbVar17;
        pbVar12 = pbVar12 + (ulong)bVar22 * -2 + 1;
        pbVar17 = pbVar17 + (ulong)bVar22 * -2 + 1;
      } while (bVar21);
      bVar20 = false;
      bVar19 = (!bVar19 && !bVar21) == bVar19;
      if (bVar19) {
        lVar9 = 3;
        pbVar15 = pbVar16;
        pbVar12 = &UNK_00111548;
        do {
          if (lVar9 == 0) break;
          lVar9 = lVar9 + -1;
          bVar20 = *pbVar15 < *pbVar12;
          bVar19 = *pbVar15 == *pbVar12;
          pbVar15 = pbVar15 + (ulong)bVar22 * -2 + 1;
          pbVar12 = pbVar12 + (ulong)bVar22 * -2 + 1;
        } while (bVar19);
        pbVar15 = pbVar16;
        if ((!bVar20 && !bVar19) == bVar20) {
          pbVar15 = (byte *)(lVar4 + 4);
          program_invocation_short_name = pbVar15;
        }
      }
    }
  }
  program_invocation_name = pbVar15;
  program_name = pbVar15;
  return (undefined *)lVar4;
}

