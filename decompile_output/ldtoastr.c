
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
ldtoastr(byte *param_1,ulong param_2,uint param_3,uint param_4,undefined8 param_5,undefined8 param_6
        ,undefined8 param_7,undefined2 param_8)

{
  byte *pbVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  byte *pbVar8;
  ulong uVar9;
  byte *pbVar10;
  int iVar11;
  byte *pbVar12;
  char *pcVar13;
  long in_FS_OFFSET;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  byte bVar17;
  float10 in_ST0;
  float10 fVar18;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  float10 in_ST5;
  float10 fVar19;
  undefined2 uStack75;
  long lStack64;
  
  bVar17 = 0;
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  if ((float10)CONCAT28(param_8,param_7) < (float10)0) {
    fVar18 = -(float10)CONCAT28(param_8,param_7);
  }
  else {
    fVar18 = (float10)CONCAT28(param_8,param_7);
  }
  uStack75 = 0x2d25;
  uVar9 = 1;
  puVar2 = &uStack75 + (ulong)(param_3 & 1) + 1;
  puVar6 = puVar2 + (param_3 >> 1 & 1);
  *puVar2 = 0x2b;
  *puVar6 = 0x20;
  puVar6[param_3 >> 2 & 1] = 0x30;
  puVar3 = (undefined4 *)(puVar6 + (param_3 >> 2 & 1) + (param_3 >> 3 & 1));
  *puVar3 = 0x4c2a2e2a;
  *(undefined *)((long)puVar3 + 5) = 0;
  *(byte *)(puVar3 + 1) = (-((param_3 & 0x10) == 0) & 0x20U) + 0x47;
  fVar19 = in_ST5;
  if (_UNK_0010c830 <= fVar18) {
    uVar9 = 0x12;
  }
  while( true ) {
    pbVar10 = param_1;
    uVar4 = func_0x001017c0(param_1,param_2,1,0xffffffffffffffff,&uStack75,(ulong)param_4,uVar9);
    if (((int)uVar4 < 0) || (0x14 < (int)uVar9)) break;
    fVar18 = in_ST0;
    if ((ulong)(long)(int)uVar4 < param_2) {
      pbVar10 = param_1;
      fVar18 = in_ST1;
      in_ST1 = in_ST2;
      in_ST2 = in_ST3;
      in_ST3 = in_ST4;
      in_ST4 = in_ST5;
      in_ST5 = fVar19;
      func_0x00101a90(param_1,0);
      uVar4 = uVar4 & 0xffffffff;
      fVar19 = in_ST5;
      if (in_ST0 == (float10)CONCAT28(param_8,param_7)) break;
    }
    uVar9 = (ulong)((int)uVar9 + 1);
    in_ST0 = fVar18;
  }
  if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (undefined *)uVar4;
  }
  func_0x001018e0();
  if (pbVar10 == (byte *)0x0) {
    pcVar13 = "A NULL argv[0] was passed through an exec system call.\n";
    iVar11 = 1;
    func_0x00101b00(&UNK_0010c840,1,0x37,stderr);
    func_0x001017e0();
    pbVar10 = (byte *)locale_charset();
    if ((*pbVar10 & 0xdf) == 0x55) {
      if (((((pbVar10[1] & 0xdf) == 0x54) && ((pbVar10[2] & 0xdf) == 0x46)) && (pbVar10[3] == 0x2d))
         && ((pbVar10[4] == 0x38 && (pbVar10[5] == 0)))) {
        puVar6 = &UNK_0010c884;
        if (*pcVar13 != '`') {
          puVar6 = &UNK_0010c888;
        }
        return puVar6;
      }
    }
    else {
      if ((((*pbVar10 & 0xdf) == 0x47) && ((pbVar10[1] & 0xdf) == 0x42)) &&
         ((pbVar10[2] == 0x31 &&
          ((((pbVar10[3] == 0x38 && (pbVar10[4] == 0x30)) && (pbVar10[5] == 0x33)) &&
           ((pbVar10[6] == 0x30 && (pbVar10[7] == 0)))))))) {
        puVar6 = &UNK_0010c88c;
        if (*pcVar13 != '`') {
          puVar6 = &UNK_0010c890;
        }
        return puVar6;
      }
    }
    puVar6 = &UNK_0010c893;
    if (iVar11 != 9) {
      puVar6 = &UNK_0010d119;
    }
    return puVar6;
  }
  lVar5 = func_0x00101930();
  if (lVar5 != 0) {
    pbVar1 = (byte *)(lVar5 + 1);
    pbVar8 = pbVar1 + -(long)pbVar10;
    bVar14 = pbVar8 < (byte *)0x6;
    bVar16 = pbVar8 == (byte *)0x6;
    if (6 < (long)pbVar8) {
      lVar7 = 7;
      pbVar8 = (byte *)(lVar5 + -6);
      pbVar12 = &UNK_0010c878;
      do {
        if (lVar7 == 0) break;
        lVar7 = lVar7 + -1;
        bVar14 = *pbVar8 < *pbVar12;
        bVar16 = *pbVar8 == *pbVar12;
        pbVar8 = pbVar8 + (ulong)bVar17 * -2 + 1;
        pbVar12 = pbVar12 + (ulong)bVar17 * -2 + 1;
      } while (bVar16);
      bVar15 = false;
      bVar14 = (!bVar14 && !bVar16) == bVar14;
      if (bVar14) {
        lVar7 = 3;
        pbVar10 = pbVar1;
        pbVar8 = &UNK_0010c880;
        do {
          if (lVar7 == 0) break;
          lVar7 = lVar7 + -1;
          bVar15 = *pbVar10 < *pbVar8;
          bVar14 = *pbVar10 == *pbVar8;
          pbVar10 = pbVar10 + (ulong)bVar17 * -2 + 1;
          pbVar8 = pbVar8 + (ulong)bVar17 * -2 + 1;
        } while (bVar14);
        pbVar10 = pbVar1;
        if ((!bVar15 && !bVar14) == bVar15) {
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

