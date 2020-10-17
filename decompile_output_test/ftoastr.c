
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * ftoastr(float param_1,byte *param_2,ulong param_3,uint param_4,uint param_5)

{
  undefined *puVar1;
  uint uVar2;
  undefined2 *puVar3;
  ulong uVar4;
  undefined4 *puVar5;
  ulong uVar6;
  long lVar7;
  undefined *puVar8;
  uint uVar9;
  long lVar10;
  ulong extraout_RDX;
  byte *pbVar11;
  byte *pbVar12;
  int iVar13;
  ulong uVar14;
  byte *pbVar15;
  byte *pbVar16;
  char *pcVar17;
  long in_FS_OFFSET;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  byte bVar21;
  float10 in_ST0;
  float10 fVar22;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  float10 in_ST5;
  float10 fVar23;
  float fVar24;
  float extraout_XMM0_Da;
  undefined2 uStack179;
  long lStack168;
  ulong uStack152;
  ulong uStack144;
  byte *pbStack136;
  undefined *puStack128;
  ulong uStack120;
  undefined *puStack112;
  double dStack104;
  uint uStack96;
  float fStack92;
  undefined2 uStack88;
  undefined2 uStack75;
  ulong uStack64;
  
  bVar21 = 0;
  dStack104 = (double)param_1;
  uStack64 = *(ulong *)(in_FS_OFFSET + 0x28);
  fVar24 = param_1;
  if (param_1 < 0.00000000) {
    fVar24 = (float)((uint)param_1 ^ _UNK_0010c810);
  }
  puVar1 = &uStack75 + (ulong)(param_4 & 1) + 1;
  uStack75 = 0x2d25;
  puVar8 = puVar1 + (param_4 >> 1 & 1);
  *puVar1 = 0x2b;
  *puVar8 = 0x20;
  puVar8[param_4 >> 2 & 1] = 0x30;
  puVar3 = (undefined2 *)(puVar8 + (param_4 >> 2 & 1) + (param_4 >> 3 & 1));
  *puVar3 = 0x2e2a;
  *(undefined *)(puVar3 + 1) = 0x2a;
  *(undefined *)(puVar3 + 2) = 0;
  *(char *)((long)puVar3 + 3) = (-((param_4 & 0x10) == 0) & 0x20U) + 0x47;
  uStack152 = (ulong)(_UNK_0010c820 <= fVar24) * 5 + 1;
  fStack92 = param_1;
  while( true ) {
    puStack128 = &UNK_00105954;
    pbVar15 = param_2;
    uStack120 = uStack152;
    uVar4 = func_0x001017c0(dStack104,param_2,param_3,1,0xffffffffffffffff,&uStack75,(ulong)param_5)
    ;
    uVar2 = (uint)uVar4;
    uVar9 = (uint)puStack112;
    if (((int)uVar2 < 0) || (8 < (int)uStack152)) break;
    if ((ulong)(long)(int)uVar2 < param_3) {
      puStack112 = &UNK_00105975;
      pbVar15 = param_2;
      uStack96 = uVar2;
      func_0x00101970(param_2,0);
      uVar4 = (ulong)uStack96;
      if (extraout_XMM0_Da == fStack92) break;
    }
    uStack152 = (ulong)((int)uStack152 + 1);
  }
  uVar14 = uStack64 ^ *(ulong *)(in_FS_OFFSET + 0x28);
  if (uVar14 == 0) {
    return (undefined *)uVar4;
  }
  puStack112 = &UNK_001059bc;
  func_0x001018e0();
  uStack120 = 0xffffffffffffffff;
  fVar22 = (float10)CONCAT28(uStack88,CONCAT44(fStack92,uStack96));
  lStack168 = *(long *)(in_FS_OFFSET + 0x28);
  if (fVar22 < (float10)0) {
    fVar22 = -fVar22;
  }
  else {
    fVar22 = (float10)CONCAT28(uStack88,CONCAT44(fStack92,uStack96));
  }
  uStack179 = 0x2d25;
  uVar4 = 1;
  puVar1 = &uStack179 + (ulong)((uint)extraout_RDX & 1) + 1;
  puVar8 = puVar1 + ((uint)((extraout_RDX & 0xffffffff) >> 1) & 1);
  uStack144 = param_3;
  pbStack136 = param_2;
  puStack128 = &uStack75;
  puStack112 = (undefined *)(ulong)param_5;
  *puVar1 = 0x2b;
  *puVar8 = 0x20;
  puVar8[(uint)((extraout_RDX & 0xffffffff) >> 2) & 1] = 0x30;
  puVar5 = (undefined4 *)
           (puVar8 + ((uint)((extraout_RDX & 0xffffffff) >> 2) & 1) +
           ((uint)((extraout_RDX & 0xffffffff) >> 3) & 1));
  *puVar5 = 0x4c2a2e2a;
  *(undefined *)((long)puVar5 + 5) = 0;
  *(byte *)(puVar5 + 1) = (-((extraout_RDX & 0x10) == 0) & 0x20U) + 0x47;
  fVar23 = in_ST5;
  if (_UNK_0010c830 <= fVar22) {
    uVar4 = 0x12;
  }
  while( true ) {
    pbVar12 = pbVar15;
    uVar6 = func_0x001017c0(pbVar15,uVar14,1,0xffffffffffffffff,&uStack179,(ulong)uVar9,uVar4);
    if (((int)uVar6 < 0) || (0x14 < (int)uVar4)) break;
    fVar22 = in_ST0;
    if ((ulong)(long)(int)uVar6 < uVar14) {
      pbVar12 = pbVar15;
      fVar22 = in_ST1;
      in_ST1 = in_ST2;
      in_ST2 = in_ST3;
      in_ST3 = in_ST4;
      in_ST4 = in_ST5;
      in_ST5 = fVar23;
      func_0x00101a90(pbVar15,0);
      uVar6 = uVar6 & 0xffffffff;
      fVar23 = in_ST5;
      if (in_ST0 == (float10)CONCAT28(uStack88,CONCAT44(fStack92,uStack96))) break;
    }
    uVar4 = (ulong)((int)uVar4 + 1);
    in_ST0 = fVar22;
  }
  if (lStack168 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (undefined *)uVar6;
  }
  func_0x001018e0();
  if (pbVar12 == (byte *)0x0) {
    pcVar17 = "A NULL argv[0] was passed through an exec system call.\n";
    iVar13 = 1;
    func_0x00101b00(&UNK_0010c840,1,0x37,stderr);
    func_0x001017e0();
    pbVar15 = (byte *)locale_charset();
    if ((*pbVar15 & 0xdf) == 0x55) {
      if (((((pbVar15[1] & 0xdf) == 0x54) && ((pbVar15[2] & 0xdf) == 0x46)) && (pbVar15[3] == 0x2d))
         && ((pbVar15[4] == 0x38 && (pbVar15[5] == 0)))) {
        puVar8 = &UNK_0010c884;
        if (*pcVar17 != '`') {
          puVar8 = &UNK_0010c888;
        }
        return puVar8;
      }
    }
    else {
      if ((((*pbVar15 & 0xdf) == 0x47) && ((pbVar15[1] & 0xdf) == 0x42)) &&
         ((pbVar15[2] == 0x31 &&
          ((((pbVar15[3] == 0x38 && (pbVar15[4] == 0x30)) && (pbVar15[5] == 0x33)) &&
           ((pbVar15[6] == 0x30 && (pbVar15[7] == 0)))))))) {
        puVar8 = &UNK_0010c88c;
        if (*pcVar17 != '`') {
          puVar8 = &UNK_0010c890;
        }
        return puVar8;
      }
    }
    puVar8 = &UNK_0010c893;
    if (iVar13 != 9) {
      puVar8 = &UNK_0010d119;
    }
    return puVar8;
  }
  lVar7 = func_0x00101930();
  if (lVar7 != 0) {
    pbVar15 = (byte *)(lVar7 + 1);
    pbVar11 = pbVar15 + -(long)pbVar12;
    bVar18 = pbVar11 < (byte *)0x6;
    bVar20 = pbVar11 == (byte *)0x6;
    if (6 < (long)pbVar11) {
      lVar10 = 7;
      pbVar11 = (byte *)(lVar7 + -6);
      pbVar16 = &UNK_0010c878;
      do {
        if (lVar10 == 0) break;
        lVar10 = lVar10 + -1;
        bVar18 = *pbVar11 < *pbVar16;
        bVar20 = *pbVar11 == *pbVar16;
        pbVar11 = pbVar11 + (ulong)bVar21 * -2 + 1;
        pbVar16 = pbVar16 + (ulong)bVar21 * -2 + 1;
      } while (bVar20);
      bVar19 = false;
      bVar18 = (!bVar18 && !bVar20) == bVar18;
      if (bVar18) {
        lVar10 = 3;
        pbVar12 = pbVar15;
        pbVar11 = &UNK_0010c880;
        do {
          if (lVar10 == 0) break;
          lVar10 = lVar10 + -1;
          bVar19 = *pbVar12 < *pbVar11;
          bVar18 = *pbVar12 == *pbVar11;
          pbVar12 = pbVar12 + (ulong)bVar21 * -2 + 1;
          pbVar11 = pbVar11 + (ulong)bVar21 * -2 + 1;
        } while (bVar18);
        pbVar12 = pbVar15;
        if ((!bVar19 && !bVar18) == bVar19) {
          pbVar12 = (byte *)(lVar7 + 4);
          program_invocation_short_name = pbVar12;
        }
      }
    }
  }
  program_invocation_name = pbVar12;
  program_name = pbVar12;
  return (undefined *)lVar7;
}

